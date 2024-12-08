#include<iostream>
using namespace std;

void toh(int n,char src,char dest,char aux)
{
    if(n ==1)
    {
        cout << " move disk   "<< n << " from   " << src << " to  " << dest << endl;
        return;
    }
    toh(n-1,src,aux,dest);
    cout << " move disk   "<< n << " from   " << src << " to  " << dest <<endl;
    toh(n-1,aux,dest,src);
}

int main()
{
    int n = 3;
    toh(n,'A','c','B');
    
}