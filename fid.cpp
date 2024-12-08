#include<iostream>
#include<cmath>
using namespace std;

double fib(int n)
{
    return pow(((1.0/sqrt(5.0)) * ((1.0 + sqrt(5.0))/2.0)), n) - pow(((1.0/sqrt(5.0)) * ((1.0 - sqrt(5.0))/2.0)), n);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}