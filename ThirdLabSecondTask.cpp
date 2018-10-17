#include <iostream>
using namespace std;

int f(bool a,bool b,bool c);

int main()
{  
    if(f(false,true,true ) == 1)
    {
        cout<<"All true";
    }
    
    else
    {
        cout<<"Not all true ";
    }
    
    return 0;
}
int f(bool a,bool b,bool c)
{
  if(a ==true && b== true && c==true)
  {
      return 1;
  }
  return 0;
}