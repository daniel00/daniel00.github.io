---
layout: post
title: Menubar 변경 방법
summary: null
date: 2023-07-23 03:25:24 +0900
updated: 2023-08-21 16:09:59 +0900
tag: null
toc: true
public: true
parent: null
latex: false
resource: 2BD8234A-2F31-4772-8695-4EDB4F8B18E5
lastmod: 2024-04-13 21:49:51
---
* TOC
{:toc}

[johngrib]( http://johngrib.github.io ) 님의 wiki를 folk하여 나만의 위키를 구현중이다.  
원래 페이지 그대로도 너무 멋지지만 조금씩 내가 좋아하는 스타일로 바꿔보고 있다.  
html, css등을 잘 몰라서 이것저것 건드려보며 바꾸어 가는 중이다.
같은 고민을 하시는 분들을 위해, 또 나의 기억력을 못 믿기에 기록으로 남긴다.

## 배경 색상 변경
menubar 배경색을 변경하려면 css/main.scss 의 theme-color의 값을 변경해 주면 된다.  

```
$theme-color: #00ffff;
```
로컬호스트에서 확인하면 바로 반영되지만, 온라인상의 github page에는 약5~10분뒤에 반영 되는듯 하다.

## 글자 색상/스타일 변경  
\_sass/\_site-menu-bar.scss 의 color/font-style 값을 변경해 주면 된다.
```css
    .site-title {
        color: #ffffff;
        font-style: normal;
    }
```

다른 속성들도 참고하시길 바란다.
```css
    // 사이트 이름 (왼쪽)
    .site-title {
        float: left;
        text-decoration: none;
        color: #ffffff;
        line-height: 1.3;
        padding-left: 10px;
        font-style: normal;
    }
    // 사이트 이름 (오른쪽: index, random, me)
    .site-title-right {
        float: right;
        text-decoration: none;
        color: #FFFFFF;
        line-height: 1.3;
        padding-right: 10px;
        font-style: normal;
    }
```

## 제목줄 내용 변경
\_config.yml 파일의 title 항목을 원하는 내용으로 변경하면 된다.  

```yml
# Site settings
title: Daniel Wiki 다니엘의 위키
url: "https://daniel00.github.io"
baseurl: ""
description: >
  다니엘의 블로그 입니다
```


## Favicon 변경
브라우저 탭 왼쪽에 표시되는 아이콘을 변경하는 방법을 설명한다.  

* 먼저 다음의 사이트에서 Favicon을 만들어서 png, icon 파일을 준비한다.  
[https://www.favicon-generator.org/](https://www.favicon-generator.org/)
사이트에서 제공하는 링크 코드도 복사해 놓는다.

* 파일을 아래의 경로에 복사한 후 header.html 에 아래처럼 링크 코드를 붙여넣는다.  
  본인의 파일 경로에 맞게 설정하여야 합니다.

```html
    <link rel="apple-touch-icon" sizes="57x57"        href="/resource/icon/apple-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60"        href="/resource/icon/apple-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72"        href="/resource/icon/apple-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76"        href="/resource/icon/apple-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114"      href="/resource/icon/apple-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120"      href="/resource/icon/apple-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144"      href="/resource/icon/apple-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152"      href="/resource/icon/apple-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180"      href="/resource/icon/apple-icon-180x180.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/resource/icon/android-icon-192x192.png">
    <link rel="icon" type="image/png" sizes="32x32"   href="/resource/icon/favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="96x96"   href="/resource/icon/favicon-96x96.png">
    <link rel="icon" type="image/png" sizes="16x16"   href="/resource/icon/favicon-16x16.png">
    <link rel="manifest" href="/resource/icon/manifest.json">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="msapplication-TileImage" content="/resource/icon/ms-icon-144x144.png">
    <meta name="theme-color" content="#ffffff">
```


## image test
![image1](../assets/img/image1.png)

![14](../assets/img/14.png)

