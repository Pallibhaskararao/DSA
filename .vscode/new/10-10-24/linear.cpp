#include<iostream>
using namespace std;
void linear(int  arr[0],int key)
{
    for(int i = 0;i < sizeof(arr)/sizeof(int);i++)
    {
        if(arr[i] == key)
        {
            cout << "The key was found." << i  << endl;
            return;
        }
    }
    cout << "the key not found " << endl;
}
int main()
{
    int arr[] = {12,-3,5,8,678};
    int key = 8;
    linear(arr,key);
}