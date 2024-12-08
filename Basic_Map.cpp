#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <string, int> m;
    m["one"]=1;
    m["two"]=2;
    m["three"]=3;
    m["four"]=4;
    auto it = m.begin();
    while(it != m.end())
    {
        cout << "key : " << it->first << "\nvalue : " << it->second << endl;
        it ++;
    }
    cout << m.size() << endl;
    map <string,int > m1;
    m1 = m;
    for(auto x: m)
    {
        cout << x.first << "->" << x.second <<endl;
    }
    cout  << m.count("one") << endl;
}