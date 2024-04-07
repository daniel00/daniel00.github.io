---
title: 포스트 제목을 입력하세요
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - cpp
date: 2024-04-08 01:05:15
lastmod: 2024-04-08 01:09:54
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

# .NET 6 에서 Old Style로 코드 작성하는 방법
.NET 6부터 Top Level Statement라는 방식으로 코드 스타일이 바뀌어서, 
엔트리 포인트를 감춰놓고 바로 Console.WriteLine("hello world")
를 표시하고 있어서 당황스러웠다.
예전 방식으로 코딩하고 싶으면 다음의 방식으로 설정하면 된다.

- 콘솔에서 프로젝트 생성할때는 다음의 옵션처리
dotnet new console --use-program-main

- 비주얼 스튜디오에서는 프로젝트 생성시
Do not use top level statement 체크


