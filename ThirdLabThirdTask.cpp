#include <iostream>
using namespace std;
void f(int i);
int main()
{
    f(12);
    return 0;
}
void f(int i)
{
    int temp = 0;
    for(;i>0;i=i/10)
    {
        ++temp;
    }
    if(temp!=3)
    {
        cout<<"not three-digit";
    }
    else
    {
        cout<<"yes it's";
    }
    
}