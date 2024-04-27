---
title: 파이썬 requests 모듈을 이용하여, srt 홈페이지에 로그인 하는 방법
description: ""
preview: ""
tags: []
categories:
    - all
    - python
    - srt
date: 2024-04-27 23:15:48
lastmod: 2024-04-27 23:16:37
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### requests 를 이용해서 로그인에 계속 실패했었다. 이유는 디폴트 헤더를 추가하지 않아서 였다. 다음의 코드 처럼 추가해 주면 된다.  

```python
import requests
from bs4 import BeautifulSoup

# 로그인 정보
LOGIN_URL = 'https://app.srail.or.kr:443/apb/selectListApb01080_n.do'
USERNAME = 'username'
PASSWORD = 'password'

# 디폴트 헤더
DEFAULT_HEADERS = {
    "User-Agent": (
        "Mozilla/5.0 (Linux; Android 5.1.1; LGM-V300K Build/N2G47H) AppleWebKit/537.36 "
        "(KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36SRT-APP-Android V.1.0.6"
    ),
    "Accept": "application/json",
}

session = requests.Session()
session.headers.update(DEFAULT_HEADERS)

# 로그인 요청
login_data = {
    "auto": "Y",
    "check": "Y",
    "page": "menu",
    "deviceKey": "-",
    "customerYn": "",
    "login_referer" : "https://app.srail.or.kr:443/main/main.do",
    'srchDvCd': "3",
    'srchDvNm': USERNAME,
    'hmpgPwdCphd': PASSWORD
}

r = session.post(LOGIN_URL, data=login_data)
print(r.text)

# 로그인 확인
result_msg = r.json()["MSG"]
print(result_msg)




```