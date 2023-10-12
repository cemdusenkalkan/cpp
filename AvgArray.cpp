#include <iostream>
using namespace std;

double avgArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}

int main() {
    int arr[] = {1, 6, 9, 5, 12, 66};
    int n = 6;
    double avg = avgArray(arr, n);
    
    cout << "avg is " << avg << endl;

    return 0;
}
