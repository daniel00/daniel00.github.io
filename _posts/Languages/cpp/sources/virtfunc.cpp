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
