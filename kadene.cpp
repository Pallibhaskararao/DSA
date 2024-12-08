#include<iostream>
using namespace std;
int main()
{
    int arr [] = {1,4,5,-71,4,45,-29};
    int n = sizeof(arr)/sizeof(arr[0]);
    //kadene's algotithm means highest subarray sum
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(curr_sum + arr[i] < 0)
        {
            curr_sum = 0;
        }
        else
        {
            curr_sum = curr_sum + arr[i];
            if(curr_sum > max_sum)
            {
                max_sum = curr_sum;
            }
        }
    }
    cout<<"Maximum subarray sum is "<<max_sum<<endl;
}