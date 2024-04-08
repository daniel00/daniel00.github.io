---
title: 맥에서 c# 컴파일 하는 방법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - csharp
date: 2024-04-07 00:24:53
lastmod: 2024-04-08 15:20:32
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### 맥북에서 C# 을 컴파일하고 실행하는 방법 

컴파일 방법  
```bash
csc test.cs
```

이렇게 하면 test.exe 만들어지고

```bash
mono test.exe
```

로 실행할 수 있다.


