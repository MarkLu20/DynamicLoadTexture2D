// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadTextureBPL.h"

UTexture2D * ULoadTextureBPL::LoadTexture2D(FString ImagePath, bool & IsValid, int32 & OutWidth, int32 & OutHeight)
{
	ImagePath = soucepath + ImagePath;
	ImagePath = FPaths::GameDir() / *ImagePath;
	UTexture2D* Texture = nullptr;
	IsValid = false;
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*ImagePath))
	{
		return nullptr;
	}
	TArray<uint8> CompressedData;
	if (!FFileHelper::LoadFileToArray(CompressedData, *ImagePath))
	{
		return nullptr;
	}
	IImageWrapperPtr ImageWrapper = GetImageWrapperByExtention(ImagePath);
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(CompressedData.GetData(), CompressedData.Num()))
	{
		const TArray<uint8>* UncompressedRGBA = nullptr;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRGBA))
		{
			Texture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), EPixelFormat::PF_B8G8R8A8);
			if (Texture != nullptr)
			{
				IsValid = true;
				OutWidth = ImageWrapper->GetWidth();
				OutHeight = ImageWrapper->GetHeight();
				void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedRGBA->GetData(), UncompressedRGBA->Num());
				Texture->PlatformData->Mips[0].BulkData.Unlock();
				Texture->UpdateResource();
			}
		}
	}
	return Texture;
}

void ULoadTextureBPL::EnsureDiectory(FString soucePath, FString targetPath)
{ 
	soucepath = soucePath;
	targetpath = targetPath;
}

bool ULoadTextureBPL::ReplaceJPG(FString sourceName, FString targetName)
{

	bool load = false;
	sourceName =  soucepath+sourceName;
	targetName =  targetpath+targetName;
	sourceName = FPaths::GameDir() / *sourceName;
	targetName = FPaths::GameDir() / *targetName;
	check(sourceName.EndsWith(TEXT(".jpg")) && targetName.EndsWith(TEXT("jpg")));
	IImageWrapperModule &ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	IImageWrapperPtr SourceImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	IImageWrapperPtr TargetImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	TArray<uint8> SourceImageData;
	TArray<uint8> TargetImagData;
	int32 Width, Height;
	const TArray<uint8> *UncompressedRGBA = nullptr;
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*sourceName))
	{
		//文件不存在
		return false;
	}
	if (!FFileHelper::LoadFileToArray(SourceImageData, *sourceName))
	{
		//文件读取失败
		return false;
	}
	if (SourceImageWrapper.IsValid() && SourceImageWrapper->SetCompressed(SourceImageData.GetData(), SourceImageData.Num()))
	{
		if (SourceImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRGBA))
		{
			Height = SourceImageWrapper->GetHeight();
			Width = SourceImageWrapper->GetWidth();
			if (TargetImageWrapper->SetRaw(UncompressedRGBA->GetData(), UncompressedRGBA->Num(), Width, Height, ERGBFormat::BGRA, 8))

			{
				TargetImagData = TargetImageWrapper->GetCompressed();
				/*if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*TargetName))
				{
				FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*TargetName);

				}
				TargetName = FPaths::GameDir() / *TargetName;*/
				/*return*/  load = FFileHelper::SaveArrayToFile(TargetImagData, *targetName);
			}
		}
	}
	return load;
}

bool ULoadTextureBPL::ReplacePNG(FString sourceName, FString targetName)
{
	bool load = false;
	sourceName = FPaths::GameDir() / *sourceName;
	targetName = FPaths::GameDir() / *targetName;
	check(sourceName.EndsWith(TEXT(".png")) && targetName.EndsWith(TEXT("png")));
	IImageWrapperModule &ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	IImageWrapperPtr SourceImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	IImageWrapperPtr TargetImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	TArray<uint8> SourceImageData;
	TArray<uint8> TargetImagData;
	int32 Width, Height;
	const TArray<uint8> *UncompressedRGBA = nullptr;
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*sourceName))
	{
		//文件不存在
		return false;
	}
	if (!FFileHelper::LoadFileToArray(SourceImageData, *sourceName))
	{
		//文件读取失败
		return false;
	}
	if (SourceImageWrapper.IsValid() && SourceImageWrapper->SetCompressed(SourceImageData.GetData(), SourceImageData.Num()))
	{
		if (SourceImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedRGBA))
		{
			Height = SourceImageWrapper->GetHeight();
			Width = SourceImageWrapper->GetWidth();
			if (TargetImageWrapper->SetRaw(UncompressedRGBA->GetData(), UncompressedRGBA->Num(), Width, Height, ERGBFormat::BGRA, 8))

			{
				TargetImagData = TargetImageWrapper->GetCompressed();
				/*if (!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*TargetName))
				{
				FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*TargetName);

				}
				TargetName = FPaths::GameDir() / *TargetName;*/
				/*return*/  load = FFileHelper::SaveArrayToFile(TargetImagData, *targetName);
			}
		}
	}
	return load;
}

IImageWrapperPtr GetImageWrapperByExtention(FString InImagePath)
{
	InImagePath = FPaths::GameDir() / *InImagePath;
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	if (InImagePath.EndsWith(".png"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

	}
	else if (InImagePath.EndsWith(".jpg") || InImagePath.EndsWith(".jpeg"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

	}
	else if (InImagePath.EndsWith(".bmp"))
	{
		return	ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);

	}
	else if (InImagePath.EndsWith(".ico"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICO);

	}
	else if (InImagePath.EndsWith(".exr"))
	{
		return ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);

	}
	else if (InImagePath.EndsWith(".icns"))
	{
		return	ImageWrapperModule.CreateImageWrapper(EImageFormat::ICNS);

	}
	return nullptr;
}
