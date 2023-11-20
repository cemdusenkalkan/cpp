#include <iostream>
#include <climits>
#include <stdexcept>
#include <cmath>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* EvenArray(int &evenCounter, const int n, int* arr) {
    evenCounter = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCounter++;
        }
    }
    int *ans = new (nothrow) int[evenCounter];
    if (ans != nullptr) {
        int j = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                ans[j] = arr[i];
                j++;
            }
        }
    }
    return ans;
}

int main() {
    const int n = 5;
    int arr[n] = {1, 4, 11, 0, 34};
    int s = 0;
    int *evenArr = EvenArray(s, n, arr);
    if (evenArr != nullptr) {
        printArray(evenArr, s);
        delete[] evenArr;
    }
    return 0;
}
