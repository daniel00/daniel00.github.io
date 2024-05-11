---
title: jekyll category 링크 자동생성 하는 방법
description: ""
preview: ""
tags: []
categories:
  - all
  - jekyll
date: 2024-05-06 00:48:49
lastmod: 2024-05-07 22:57:59
layout: post
---

created : {{page.date | date:'%Y-%m-%d %R'}}  
updated : {{page.lastmod | date:'%Y-%m-%d %R'}}


### jekyll blog에 카테고리를 생성을 자동화 하는 방법을 정리한다.
이전에 설명한 글에서는 (링크) 카테고리 페이지를 추가하기 위해서는 매우 번거로운 작업들을 수동으로 수행했어야 했다.
- 카테고리만 모아두는 파일인 my-category.md 파일을 카테고리 별로 만들어 주어야하고
- 이 파일의 내용도 category에 맞게 수정해 주어야 했다.
- 또한 ,  왼쪽 메뉴바에 카테고리별 링크를 추가하려면 toc-date.html파일 내용을 일일이 추가해 주어야 했다.

이 처럼 포스트들을 카테고리별로 관리 하려면 너무 번거롭다보니, 그냥 카테고리를 all 로 지정하여 모두 한페이지에 표시되도록 단순 무식하게 사용하게 되었다.
하지만 조금씩 글이 많아지고 포스트를 정리할 필요성이 느껴져 카테고리 관리를 자동화 할 수 있는 방법을 찾아 보았다.

다음의 링크를 참조하였다.

[카테고리 자동관리]( https://uhded.com/automatic-jekyll-categories-page )


### Summary  
1. _plugins 디렉토리에 categories.rb 파일을 만든다.
2. categories.rb를 다음처럼 작성한다.  
3. _layouts 디렉토리에 category_index.html 파일을 만든다. (이 파일은 각 카테고리 페이지의 모양을 결정한다)  


<!-- 넘버를 리셋하기 위해 주석을 넣었다  -->
### 상세설명  
1. _plugins 디렉토리에 categories.rb 파일을 만든다.
2. categories.rb를 다음처럼 작성한다.    

      ```rb
      module Jekyll
        class CategoryPageGenerator < Generator
          safe true

          def generate(site)
            if site.layouts.key? 'category_index'
              dir = site.config['category_dir'] || 'categories'
              site.categories.each_key do |category|
                site.pages << CategoryPage.new(site, site.source, File.join(dir, category), category)
              end
            end
          end
        end

        # A Page subclass used in the `CategoryPageGenerator`
        class CategoryPage < Page
          def initialize(site, base, dir, category)
            @site = site
            @base = base
            @dir  = dir
            @name = 'index.html'

            self.process(@name)
            self.read_yaml(File.join(base, '_layouts'), 'category_index.html')
            self.data['category'] = category

            category_title_prefix = site.config['category_title_prefix'] || 'Category: '
            self.data['title'] = "#{category_title_prefix}#{category}"
          end
        end
      end
      ```


3. _layouts 디렉토리에 category_index.html 파일을 만든다. 
(이 파일은 각 카테고리 페이지의 모양을 결정한다. 기존 my-category.md 파일의 용도와 유사하다.)
  - _layout 폴더에 category_index.html 파일을 만들고 다음처럼 작성한다.  
  - layout을 default가 아닌 post로 변경하여야 한다.
  - 수정날짜 포스트이름 형식으로 표시하도록 수정하였다.
  - 카테고리를 태그처럼 나열하는게 복잡해 보여서 주석처리 하였다.

*마크다운 코드블럭에 리퀴드(liquid) 문법 표시가 제대로 안되어서 이미지로 표시하였다.
![](/assets/2024-05-06-16-20-14.png)



    ```html  
    ---
    layout: post
    ---

    <!-- <section class="small-intro"> -->
      <!-- <div class="container"> -->
        <!-- <h2>
          {{page.category | capitalize}}
        </h2> -->
      <!-- </div> -->
    <!-- </section> -->

    <section class="blog">
      <div class="container">
        {% raw %}
        {% for post in site.posts %} {% if post.categories contains page.category %}
        <!-- {% assign posts = site.categories.jekyll | sort: 'title' %} -->

        <div class="blog-container">
          <div class="title-excerpt">
            <!-- yoo -->
            <div style="font-size:18px">
              <i class="fas fa-fw fa-calendar-alt" aria-hidden="true"> </i>
              {{ post.lastmod | date:'%Y-%m-%d %R &nbsp;&nbsp;'}}
            <a href="{{ post.url }}">{{ post.title }}</a> 
            </div>
            <!-- <h2><a href="{{ post.url }}">{{ post.title }}</a></h2>  -->
          </div>

          <div class="date-categories">
            <!-- 카테고리 표시 -->
            <!-- <div class="categories">
              {% for category in post.categories%}
              <div class="category">
                <a href="/categories/{{category}}">{{ category }}</a>
              </div>
              {% endfor %}
            </div> -->

            <!-- 날짜 표시 -->
            <!-- <div class="date">
              <p>{{ post.date | date_to_string }}</p>
            </div> -->

          </div>
        </div> 
        {% endif %} {% endfor %}
      </div>
    </section>
        {% endraw %}
    ```
