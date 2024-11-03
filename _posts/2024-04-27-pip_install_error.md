---
title: 파이썬 PIP install 오류 발생시 해결방법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - all
    - python
    - mac
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-27 22:28:17
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### 파이썬에서 pip install request 수행시 다음의 에러가 발생하였다
```bash
 This environment is externally managed
╰─> To install Python packages system-wide, try brew install
    xyz, where xyz is the package you are trying to
    install.
```

### 해결방법
다음의 명령어 입력
```bash 
python3 -m pip config set global.break-system-packages true
```


