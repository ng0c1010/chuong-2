#include <iostream>
using namespace std;

int countPositive(float arr[], int n) {
    // Base case
    if (n == 0) {
        return 0;
    }
    
    // Recursive case
    int count = countPositive(arr, n-1);
    if (arr[n-1] > 0) {
        count++;
    }
    
    return count;
}

int main() {
    float arr[] = {-1.5, 2.0, 3.5, -4.2, 5.1, 0.8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int count = countPositive(arr, n);
    
    cout << "The number of positive values in the array is: " << count << endl;
    
    return 0;
}
