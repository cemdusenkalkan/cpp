#include <iostream>
using namespace std;

int getInput() {
    int x;
    cout << "Enter a number between 0 and 30: ";
    cin >> x;
    
    while (x < 0 || x > 30) {
        cout << "Error! Please enter a value between 0 and 30: ";
        cin >> x;
    }
    
    return x;
}

int getPowersofTwo(int x) {
    int poweroftwo = 1;
    
    for (int i = 0; i < x; i++) {
        poweroftwo *= 2;
    }
    
    return poweroftwo;
}

int main() {
    int input = getInput();
    int result = getPowersofTwo(input);
    
    cout << "2^" << input << " is " << result << endl;

    return 0;
}
