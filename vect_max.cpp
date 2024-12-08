#include<iostream>
#include<vector>
#include<algorithm>  // For max_element

using namespace std;

int main() {
    // Initialize vector with 4 elements
    vector<float> a = {1.0, 2.4, 5.6, 4.567};
    
    // Print the elements of the vector
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " \n";
    }

    // Find the maximum element in the vector
    float maxVal = *max_element(a.begin(), a.end());
    cout << "Max value: " << maxVal << endl;
    float minVal = *min_element(a.begin(),a.end());
    cout << "Min value: " << minVal << endl;

    return 0;
}
