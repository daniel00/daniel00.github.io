---
title: Jekyll
layout: post
permalink: categories/jekyll
lastmod: 2024-04-08 11:52:20
---

    {% assign posts = site.categories.jekyll | sort: 'title' %}
    {% for post in posts %} {% include archive-single2.html type=page.entries_layout %} {% endfor %}