---
title: 모든 포스트
layout: post
permalink: categories/all
lastmod: 2024-04-08 16:08:41
---

    {% assign posts = site.categories.all | sort: 'title' %}
    {% for post in posts %} {% include archive-single2.html type=page.entries_layout %} {% endfor %}