---
layout  : wiki
title   : 크롬에서 검색기록 저장하지 않는 방법
summary : 
date    : 2023-09-12 16:06:01 +0900
updated : 2023-11-07 23:40:14 +0900
tag     : 
toc     : true
public  : true
parent  : 
latex   : false
resource: 6236E4DC-4C6F-427C-8CDF-B46790D9E48A
---
* TOC
{:toc}


## 크롬에서 검색기록을 남기지 않는 방법에 대해 설명합니다.

크롬에서 구글 페이지를 열면 내가 검색한 기록이 드롭다운 형태로 보여진다.
이건 인터넷 기록, 쿠키 등을 삭제해도 여전히 남아있다.

해결 방법은, 크롬이 관리하는 History 파일의 내용을 삭제하고 읽기전용, 잠금 등으로 처리하여,
크롬이 검색기록을 저장하지 못하게 하면된다.

## History 파일 경로
  ~/Library/Application Support/Google/Chrome/Default/History

![history_file](../assets/img/history_file.png)
