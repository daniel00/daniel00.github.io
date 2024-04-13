---
title: MAUI의 XAML과 CS 파일 구조
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - all
    - csharp
    - maui
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-13 20:39:21
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

## XAML과 CS는 한쌍으로 동작한다
- xaml 파일은 페이지의 모양을 그리고,
- cs 파일은 페이지의 동작을 구현한다

## XAML의 x:Name 속성으로 cs에서 xaml상의 UI요소에 접근 할 수 있다.

```xml  
 <Button
                x:Name="CounterBtn"
                Text="로그인"
                SemanticProperties.Hint="Counts the number of times you click"
                Clicked="OnCounterClicked" />
```


