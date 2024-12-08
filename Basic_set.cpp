#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int> s ;
    int arr[] = {12,-4,67,34,126,0,1234};
    for(int i = 0;i < 7;i++)
    {
        s.insert(arr[i]);
    }
    for(auto it  = s.begin();it != s.end();++it)
    {
        cout << *it << endl;
    }

}