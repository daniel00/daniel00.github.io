---
title: MAUI에서 Hot Reload적용 하는 방법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
  - all
  - maui
  - csharp
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-12 00:29:54
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

## MAUI에서 Hot Reload 기능을 활성화 하는 방법에 대해 설명합니다.

Microsoft 공식 문서에서는 Hot Reload가 동작한다고 설명하고 있으나 내 맥북에서는 제대로 동작하지 않았다. 
[ https://dotnet.microsoft.com/en-us/learn/maui/first-app-tutorial/modify  ]( https://dotnet.microsoft.com/en-us/learn/maui/first-app-tutorial/modify  )  
결국 [ DotNet.Meter ]( https://github.com/janeysprings/dotnet.meteor ) 라는 vscode extension을 설치하여 Hot Reload기능을 사용 할 수 있었다.

DotNet.Meter설치 후 다음의 순서대로 설정해주어야 한다.

1. Run And Debug - Add Configuration - .Net Meter Debugger 선택
![](/assets/2024-04-12-00-09-45.png)

2. launch.json 파일 생성되면, 다음처럼 입력  

```json
  {
      "version": "0.2.0",
      "configurations": [
          {
              "name": ".NET Meteor Debugger",
              "type": "dotnet-meteor.debugger",
              "request": "launch",
              "preLaunchTask": "dotnet-meteor: Build"
          }
      ]
  }
```

3. *.csproj 파일에 아래처럼 패키지 추가  
```csproj
	<ItemGroup>
		<PackageReference Include="DotNetMeteor.HotReload.Plugin" Version="3.*"/>
	</ItemGroup>
```

4. MauiProgram.cs 에 Hot Reload Plugin을 Enable 시켜준다.  

```csharp  
using Microsoft.Extensions.Logging;
using DotNet.Meteor.HotReload.Plugin; //<------- 여기

namespace MauiApp1;

public static class MauiProgram
{
	public static MauiApp CreateMauiApp()
	{
		var builder = MauiApp.CreateBuilder();
		builder
			.UseMauiApp<App>()
			.ConfigureFonts(fonts =>
			{
				fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
				fonts.AddFont("OpenSans-Semibold.ttf", "OpenSansSemibold");
			});

#if DEBUG
		builder.Logging.AddDebug();
		builder.EnableHotReload(); //<------- 여기
#endif

		return builder.Build();
	}
}

```

이제 xaml 파일이 수정되면 에뮬레이터에 바로 적용된다. 다시 빌드할 필요가 없다.