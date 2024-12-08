#include<iostream>
#include<cstdlib>
#include<sstream>

using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout << str << endl;
    stringstream s(str); 
    string word; 
    int count = 0;
    while (s >> word)
        count++;
    cout << word << endl;
    cout << count << endl;
}