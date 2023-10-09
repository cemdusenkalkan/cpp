#include <iostream>
using namespace std;

unsigned int dividend;  
unsigned int divisor;   
unsigned int result = 0; 
unsigned int remainder = 0;

void Division() {
    if (divisor == 0) {
        result = 0;
        remainder = 0;
        return;  
    }

    while (dividend >= divisor) {
        dividend = dividend - divisor;
        result = result + 1;
    }

    remainder = dividend;
}

int main() {
   
    dividend = 20;  
    divisor = 3;   // Example values btw

    Division();

    cout << "Result: " << result << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
