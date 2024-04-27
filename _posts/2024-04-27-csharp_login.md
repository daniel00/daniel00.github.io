---
title: csharp_login
description: ""
preview: ""
tags: []
categories:
    - all
date: 2024-04-27 23:22:05
lastmod: 2024-04-27 23:38:24
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### c# 의 HttpClient 클래스를 이용해서 srt 홈페이지에 로그인 하는 방법을 정리 합니다.

[파이썬 에서의 예](/_posts/2024-04-27-python_login.md)와 마찬가지로 "디폴트헤더" 를 포함하여 httpClient.post() 하는게 중요하다.