#include<iostream>
using namespace std;
int main()
{
    int x = 10345;
    int f = x %10;
    while(x>=10)
    {
        x = x/10;
    }
    cout << f + x;
}