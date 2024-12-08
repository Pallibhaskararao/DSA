#include<iostream>
using namespace std;
int main()
{
    cout << " hello world!" << endl;
    string txt = "hello world this id \'bhaskar\' rao";
    cin >> txt;
    getline(cin,txt);
    cout << txt;
    int arr[] = {1,2,3,4,5};
    for (int i : arr)
    cout << i << endl;
    struct {
        int a;
        char b;
        float c;
        string d = "hello";
        char e;
    }s;
    cin >> s.a;
    cout << s.a;
}