#include <iostream>
using namespace std;

int f(int a);

int main()
{  
    if(f(-21) == 1)
    {
        cout<<"yeah";
    }
    else 
    {
        cout<<"meh meh";
    }

    return 0;
}
int f(int a)
{
  if(a % 7 == 0 && a < 0)
  {
      return 1;
  }
}