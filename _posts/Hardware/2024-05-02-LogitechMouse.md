---
title: 로지텍 마우스 끊김 해결 방법
description: ""
preview: ""
tags: []
categories:
    - all
    - algorithm
    - hardware
    - computer
date: 2024-05-02 01:39:25
lastmod: 2024-05-05 22:38:14
layout: post
---
* TOC
{:toc}

## M590 2.4G 로 연결 하는법
M590은 블루투스 2개 + 2.4G 1개 총3개의 연결을 지원하는 마우스이다.
AA배터리 한개로 약2년간 사용 할 수 있다고 해서 구매했다.
근데, 블루투스 연결시 너무 자주 끊김이 발생했다.
그래서 2.4로 연결하려고 하니 유니파잉 수신기를 사용하는 타입이라 유니파잉 소프트웨어를 설치해 주어야 했다.
아래 링크에서 다운로드 하여 설치하고,
기존에 연결된 블루투스 연결을 해제하면 2.4G로 연결이 된다.
혹시 연결이 안되면 마우스를 껐다 켜보시길 바란다.

[유니파잉 소프트웨어 다운로드](https://support.logi.com/hc/ko/articles/360025297913)

유니파잉 소프트웨어를 설치 후 실행하여 "Advanced..." 버튼을 누른다.
![logitechAdvButton](/assets/logitechAdvButton.png)

그러면 유니파잉 수신기를 통해 로지텍 마우스가 연결되었는지 확인 할 수 있다.
![checkMouse](/assets/checkMouse.png)

블루투스 연결을 해제해야 2.4G를 사용 할 수 있다.
![disconMouse](/assets/disconMouse.png)


사용해본 결과 확실히 2.4G 마우스는 끊김이 없다.
