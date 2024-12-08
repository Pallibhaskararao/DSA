#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ;i++)
    {
        for(int j =  0 ; j < n ;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        cout << arr [i] << "  ";
    }
}