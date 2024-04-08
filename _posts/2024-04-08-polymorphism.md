---
title: 다형성
description: ""
preview: ""
publishedAt: 2024-02-17 01:34:21
tags: []
categories:
  - all
  - cpp
date: 2024-02-26 00:35:58+0900
lastmod: 2024-04-08 22:43:51
layout: post
---

## 다형성(Polymorphism)
부모 클래스 타입의 포인터가, 여러 형태의(다형) 자식 클래스를 가리킬 수 있음을 의미한다.
이렇게 부모 클래스가 자식 클래스를 가리킬 수 있으면 여러가지면에서 유리하다.
- aaaa
- bbb
- ccc


## 다형성에 대한 상세한 설명

  * 정적결합  
  다음의 코드를 살펴보자.

  ```cpp
  #include <stdio.h>
  #include <string.h>

  class Base
  {
    public:
      void hello(){printf("I am Base\n");}
  };

  class Derived : public Base
  {
    public:
      void hello(){printf("I am Derived\n");};
  };

  int main()
  {
    Base B, *pB;
    Derived D;;

    pB = &B;
    pB->hello();

    pB = &D;
    pB->hello();

    return 0;
  }
  ```

  `pB = &B` 는 당연히 가능한 표현이고,   
  `pB = &D` 도 부모는 자식을 가리킬 수 있으므로 문제가 되지 않는다.

  근데 우리가 원했던 출력 결과와는 달리, 두개의 `pB->hello()` 결과가 모두 `I am Base` 로 출력된다.  


  ```cpp
  pB = &Base;  
  pB->hello();      //결과 : I am Base
  
  pB = &Derived;
  pB->hello();      //결과 : I am Base
  ```

  출력 결과
  ```txt
  I am Base
  I am Base
  ```

  이런 결과가 나오는 이유는, 컴파일러는 포인터가 선언될 당시의 타입을 보고 이 타입에 맞는 멤버 함수를 호출하기 때문이다.  
  즉, `pB = &D;` 로 pB가 D를 가리키도록 하였을지라도, 선언될 당시 `Base * pB` 로 선언되어 있으므로 `Base`의 `hello()`를 호출하는 것이다.
  이를 정적 결합(Static Binding) 이라고 한다.

  이와 달리, 클래스 포인터에 실제로 할당 된 객체의 멤버함수를 호출하는 방식을 동적 결합(Dynamic Binding)이라고 한다.
  동적 결합을 위해서는 멤버함수에 `virtual` 예약어를 붙어주면 된다.
  위 코드를 다음과 같이 수정하면 원하는 결과를 얻게 된다.  

  ```cpp
  #include <stdio.h>
  #include <string.h>

  class Base
  {
    public:
      virtual void hello(){printf("I am Base\n");}
  };

  class Derived : public Base
  {
    public:
      virtual void hello(){printf("I am Derived\n");};
  };

  int main()
  {
    Base B, *pB;
    Derived D;;

    pB = &B;
    pB->hello();

    pB = &D;
    pB->hello();


    return 0;
  }
  ```

  출력 결과
  ```txt
  I am Base
  I am Derived
  ```



  * 함수포인터
  * 부모는 자식을 가리킬 수 있다
  * 가상함수
