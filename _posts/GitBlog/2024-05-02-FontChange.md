---
title: Wiki 폰트 변경하는 방법
description: ""
preview: ""
tags: []
categories:
  - all
  - algorithm
  - wiki
date: 2024-05-02 01:39:25
lastmod: 2024-05-02 02:02:05
layout: post
---
* TOC
{:toc}

## 페이지 폰트를 변경하는 방법에 대해서 정리합니다. 
아래와 같이 진행하면 된다.
  * 폰트사이트에서 등록 코드를 복사
  * css/main.scss 에 font-face를 등록
  * \_sass/\_base.css 에 사용하고자 하는 폰트를 명시


### 폰트 등록 코드 복사  
[눈누](https://noonnu.cc/)  

![font_code](/assets/font_code.png)  

### font-face 등록  
css/main.scss

```css
@font-face {
    font-family: 'Chosunilbo_myungjo';
    src: url('https://cdn.jsdelivr.net/gh/projectnoonnu/noonfonts_one@1.0/Chosunilbo_myungjo.woff') format('woff');
    font-weight: normal;
    font-style: normal;
}

@font-face {
    font-family: 'iceJaram-Rg';
    src: url('https://cdn.jsdelivr.net/gh/projectnoonnu/noonfonts_2307-2@1.0/iceJaram-Rg.woff2') format('woff2');
    font-weight: normal;
    font-style: normal;
}

@font-face {
    font-family: 'SeoulHangangM';
    src: url('https://cdn.jsdelivr.net/gh/projectnoonnu/noonfonts_two@1.0/SeoulHangangM.woff') format('woff');
    font-weight: normal;
    font-style: normal;
}
```

### 사용 할 폰트 명시. 사용 할 폰트만 주석해제  
\_sass/\_base.css

```css
body {
  // font: 400 16px 'Roboto Slab',AppleSDGothicNeo,sans-serif;
  // font: 400 16px 'Chosunilbo_myungjo',AppleSDGothicNeo,sans-serif;
  font: 400 16px 'RIDIBatang',AppleSDGothicNeo,sans-serif;
  // font: 400 16px 'iceJaram-Rg',AppleSDGothicNeo,sans-serif;
  // font: 400 16px 'SeoulHangangM',AppleSDGothicNeo,sans-serif;
  // font: 400 16px 'font-iropke-batang',AppleSDGothicNeo,sans-serif;
  color: rgba(0, 0, 0, 0.84);
  -webkit-text-size-adjust: 100%;
  -webkit-font-feature-settings: "kern" 1;
  -moz-font-feature-settings: "kern" 1;
  -o-font-feature-settings: "kern" 1;
  font-feature-settings: "kern" 1;
  font-kerning: normal;
  display: flex;
  min-height: 100vh;
  flex-direction: column;
}
```  

### 폰트 크기 변경  
아래 픽셀(px) 값을 변경해주면 된다.  
\_sass/\_base.css

```css
font: 400 20px 'RIDIBatang',AppleSDGothicNeo,sans-serif;
```

### 폰트 밑줄 간격 조절  
링크표시 밑줄이 글자와 겹쳐서 가독성이 떨어지는 것 같았다.  
\_base.scss 파일의 body 영역에 `text-underline-offset` 값을 조절하여 해결하였다.  

\_base.scss
```scss
body {
  ...
  flex-direction: column;
  ...

  text-underline-offset : 5px;  //yoo.  한글도, 영문도 밑줄이 겹치지 않고 가장 보기 좋다
}
```
before  
![before_underline](/assets/before_underline.png)

after  
![after1_underline](/assets/after1_underline.png)  

### 한영 폰트 비교
나는 소년이다.  
I am a boy  



