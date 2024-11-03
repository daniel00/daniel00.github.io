---
title: 맥북에서 AAC, aptX 설정하는 법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - cpp
date: 2024-03-25 21:55:43
lastmod: 2024-04-08 15:33:20
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### QCY 이어폰을 맥북에 연결 할 때 끊김이 발생 할 경우 다음과 같이 점검해보세요
해결방법 : 아래처럼 AAC, aptX를 활성화 시킨뒤 다시 페어링 했더니 끊김이 발생하지 않는다.


터미널 열고,

AptX 코덱 활성화   
```bash
sudo defaults write bluetoothaudiod "Enable AptX codec" -bool true
```

ACC 코덱 활성화   
```bash
sudo defaults write bluetoothaudiod "Enable AAC codec" -bool true
```

AptX, ACC 설정 확인   
```bash
sudo defaults read bluetoothaudiod
```

기존 연결 삭제 후 다시 페어링!!!!!  









