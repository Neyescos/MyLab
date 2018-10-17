#include <iostream>

using namespace std;

int f(int num);

int main()
{
    cout<<f(28004)*5;
    return 0;
}
int f(int num)
{
    if((num % 10) == 4 && (num / 10000) == 2 && (num / 1000) == 8)
    {
       return  num++;
    }
    
    else
    {
        return num - 2;
    }
    
    
}