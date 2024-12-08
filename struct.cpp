#include<iostream>
#include<sstream>
using namespace std;

struct Mystr
{
    int a;
    string s;
    float f;
}s1,s2;

int main()
{
    string str;
    s1 = {10,"bhaskar",10.5};
    getline(cin,str);
    stringstream ss(str);
    string word;
    while(ss >> word)
    {
        cout << word << endl;
    }

    cout << s1.a << endl;
}