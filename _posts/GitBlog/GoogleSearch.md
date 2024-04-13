---
layout: post
title: 구글 맞춤 검색 사용법
summary: null
date: 2023-08-18 23:26:35 +0900
updated: 2024-01-02 15:21:57 +0900
tag: null
toc: true
public: true
parent: null
latex: false
resource: F9473EFE-F24A-43CE-B7CC-BAD2F64FE320
lastmod: 2024-04-13 21:49:08
---
* TOC
{:toc}

## 구글 맞춤 검색 엔진을 내 블로그에 적용하는 방법을 설명합니다.
글을 몇 개 올린 후 검색을 하니, 종립님의 블로그 내용이 검색되는 문제가 있었다.  
구글 맞춤 검색 엔진이 검색하는 사이트를 내 블로그로 변경해 주어야 한다.  

* 아래 링크에서 구글 맞춤 검색 아이디를 생성한다.  
[구글 맞춤 검색](https://programmablesearchengine.google.com)  



* \_site/search/index.html 에 다음의 코드를 넣는다.  
var cx =  `본인의 구글 맞춤 검색 아이디`

```html
  <body>
    <div id="home-search">
      <script>
        (function() {
          var cx = '25808cdc84d0e4dbe';
          var gcse = document.createElement('script');
          gcse.type = 'text/javascript';
          gcse.async = true;
          gcse.src = 'https://cse.google.com/cse.js?cx=' + cx;
          var s = document.getElementsByTagName('script')[0];
          s.parentNode.insertBefore(gcse, s);
        })();
      </script>
      <gcse:search linkTarget="_parent" queryParameterName="searchString"></gcse:search>
    </div>
```
다음의 사이트가 가장 정리가 잘 돼있다. 감사의 말씀을 드린다.   
https://junia3.github.io/blog/search  

![checkhtml](../assets/img/checkhtml.png)  



![sitemap.xml](../assets/img/sitemap.xml.png)    


![sitemap_success](../assets/img/sitemap_success.png)



구글 검색에 등록은 된 거 같은데, 전체 사이트 검색이 되지않고 첫 페이지인 index.md만 검색이 된다.
어느 사이트에서 sitemap.xml의 위치를 지정해서 크롤링을 요청하는 방법이 있다고 해서 그렇게 진행해보았다.
아직 결과는 모른다. 며칠 뒤 다시 확인해 보아야겠다.

아래의 링크를 브라우저 주소창에 입력하고 엔터를 치면 [[크롤링]] 요청이 완료된다.

[https://www.google.com/ping?sitemap=https://daniel00.github.io/sitemap.xml]( https://www.google.com/ping?sitemap=https://daniel00.github.io/sitemap.xml )    


![result_of_request](../assets/img/result_of_request.png)
