---
title: MAUI build error 해결방법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - all
    - maui
    - csharp
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-13 22:52:37
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### 여기서 부터 글을 작성하세요
MAUI 빌드시 아래와 같은 에러가 발생했다.
에러메시지를 제대로 읽지 않고 리빌드만 계속했는데 , 동일한 에러가 계속해서 발생했다.
자세히 보니 "저장공간이 부족해서 빌드할수 없다" 는 내용이었다. 
크롬창을 몇개 닫고, 다른 vscode 인스턴스도 종료하고 다시 빌드 하였더니 정상적으로 빌드가 되었다.


![](../assets/2024-04-13-22-49-00.png)