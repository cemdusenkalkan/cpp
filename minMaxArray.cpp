#include <iostream>
using namespace std;

void minMaxArray(int arr[], int n, int &max_val, int &min_val) {
    min_val = arr[0];
    max_val = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 11, 32, 23, 16};
    int n = 8;

    int min_val, max_val;
    minMaxArray(arr, n, min_val, max_val);

    cout << "min is " << min_val << ", max is " << max_val << endl;

    return 0;
}
