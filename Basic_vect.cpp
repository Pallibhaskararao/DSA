// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    cout << v.size() << v.capacity()<<endl;
    for(auto it : v)
        cout << it << endl;
    

    return 0;
}
