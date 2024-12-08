#include<iostream>
using namespace std;
int main()
{
    int n,Lsum = 0;
    cout << "Enter n value : ";
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << "Enter array elemnts : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i = 0 ;i <n ; i++)
    {
        sum = sum - arr[i];
        
        if(sum == Lsum)
        {
            cout << arr[i] << endl;
            return 0;
        }
        Lsum += arr[i];
    }

}