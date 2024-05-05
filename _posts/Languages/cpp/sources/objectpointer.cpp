#include <stdio.h>
#include <string.h>

class Human
{
  protected:
    char name[16];
  public:
    Human(const char* aname)
    {
      printf("I am Human\n");
      strcpy(name, aname);
    }

    void intro()
    {
      printf("name : %s\n", name);
    }

    void think()
    {
      printf("Human thinking\n");
    }
};

class Student : public Human
{
  private:
    int stNum;
  public:
    Student(const char* aname, int astNum) : Human(aname)
    {
      // printf("I am Student\n");
      stNum = astNum;
    }

    void intro()
    {
      Human::intro();     //base::intro()
      printf("학번 : %d\n", stNum);
    }

    void think()
    {
      printf("Student thinking\n");
    }
};

int main(void)
{
  printf("*** make Human *** \n");
  Human H("Human Daniel");
  H.intro();
  printf("\n");

  printf("*** make Student ***\n");
  Student S("Student Yoo", 48);
  S.intro();
  printf("\n");

  printf("*** make Human pointer ***\n");
  Human* pH;
  pH = &H;
  pH->think();
  printf("\n");

  printf("*** make Student pointer ***\n");
  Student* pS;
  pS = &S;
  pS->think();  //output : Student thinking
  printf("\n");


  printf("*** apply pH = &S ***\n");
  pH = &S;
  pH->think();  //output : Human thinking


  return 0;
}

