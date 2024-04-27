---
title: jekyll post 에 이미지 넣는 방법
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
    - all
    - jekyll
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-14 23:58:31
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}

### jekyll post에 이미지 넣는 방법에 대해 설명합니다.

- 이미지가 저장되는 경로는 , 현재 프로젝트 디렉토리의 assets 디렉토리에 넣으면 됩니다.
jekyll은 이 경로의 이미지가 있는지 확인해서 포스트에 표시해 줍니다.
- vscode extention중 paste-image 를 이용하여 이미지를 붙여 넣습니다.

### paste-image 설정중 다음의 두가지를 설정해 주어야 합니다.

1. 이미지가 저장되는 경로   
```txt
${projectRoot}/assets
```
![](/assets/2024-04-14-16-34-59.png) 


2. 저장된 이미지를 마크다운에 링크하는 Insert Pattern
```txt
${imageSyntaxPrefix}/assets/${imageFileName}${imageSyntaxSuffix}
```
![](/assets/2024-04-14-16-35-53.png)

### 이제 다음의 순서로 마크다운 문서에 이미지를 넣으면 됩니다.
- 이미지를 캡처합니다.  
 맥북 : 저는 cmd shift s 를 단축키로 지정하여 놓았습니다.
 윈도우 : win shift s

- image-paste 단축키를 눌러 이미지를 붙여 넣습니다.  
맥북: option cmd v     
윈도우 : alt ctrl v    

- 그러면 이미지가 저장되고, 저장된 경로를 링크하는 신텍스를 자동으로 넣어줍니다.
![](/assets/2024-04-14-16-43-24.png)