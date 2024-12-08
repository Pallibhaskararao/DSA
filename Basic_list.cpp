#include<iostream>
#include<list>

using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}
int main()
{
    list <int> L1,L2;
    for(int i = 0; i< 10;i++)
    {
        L1.push_back(i);
        L1.push_front(2*i);
    }
    showlist(L1);
    cout << L1.front() << endl;
    cout << L1.back() << endl;

    auto it = L1.begin();
    advance(it,10);
    L1.insert(it,1607);

    advance(it,10);
    L1.erase(it);

    L1.pop_front();
    showlist(L1);

    L1.pop_back();
    showlist(L1);

    L1.sort();
    showlist(L1);

    L1.reverse();
    showlist(L1);

    cout << "size of the List is : " << L1.size() << endl;
    cout << "The max size the list can hold is : " << L1.max_size() << endl;
}