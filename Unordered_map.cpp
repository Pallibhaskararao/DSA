#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> ump;
    ump["one"] = 1;
    ump["three"] = 3;
    ump["four"] = 4;

    ump.insert(make_pair("eiser", 2)); 

    for(auto itr = ump.begin();itr != ump.end();itr ++)
    cout << itr->first << "," << itr ->second <<  endl;
    for(auto it : ump)
    cout << it.first << "," << it.second <<  endl; 

    cout << ump.bucket("one") <<endl;
    cout << "no of buckets : " << ump.bucket_count() << endl;

    
}