---
title: SRT 예약 어플 만들기
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - csharp
date: 2024-04-07 01:12:20
lastmod: 2024-04-08 15:14:14
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

# SRT 예약 앱을 만드는 과정에 대해서 정리합니다.
- 크로스플랫폼 제작이 쉽도록 자마린으로 제작예정
- C#으로 문법등을 테스트해 보자
- 로그인은 HttpClient 클래스를 이용한다
- 파이썬으로 작성된 코드를 참조한다.

동작을 요약하면,
HttpClient를 사용해서 srt페이지에 로그인하는데, 이때 
client.post(로그인아이디, 비밀번호) 의 형태로 메시지를 송신하면 되는것 같다.
메시지 형식은 JSON형식인 듯 하므로, 
Dictionary dict = "메시지아이디":값
위 같은 딕셔너리 형태로 만들어서 client.post(dict) 하면 될 것 같다.

로그인만 되면, 필요한 내용으로 쿼리 내용을 post하면 되는 구조이므로
천천히 개발해 보자.



