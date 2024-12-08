#include<sstream>
#include<iostream>
using namespace std;

int main()
{
    stringstream ss;
    ss << "10,20," << "30";
    cout << ss.str() << endl;
    
}