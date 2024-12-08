#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    vector<int> vect = {1,2,3,4,5};
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(89);
    cout << vect.size()<< endl;
    vect.pop_back();
    vect.pop_back();
    vect.pop_back();
    cout << vect.size()<< endl;
    for(int i : vect)
    {
        cout << i << endl;
    }

}