#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int fib_n_minus_1 = fibonacci(n - 1);
    int fib_n_minus_2 = fibonacci(n - 2);

    int fib_n = fib_n_minus_1 + fib_n_minus_2;
    return fib_n;
}

int main() {
    int n;

    cout << "Enter the Fibonacci number: ";

    do {
        cin >> n;
        if (n < 0 || n > 46) {
            cout << "Invalid input, please enter a number between 0 and 46: ";
        }
    } while (n < 0 || n > 46);

    int result = fibonacci(n);
    cout << "The result is " << result << endl;

    return 0;
}
