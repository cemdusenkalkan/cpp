#include <iostream>
using namespace std;

int main() {
    double annual_income, daily_salary;
    
    cout << "Enter annual income (in dollars): ";
    cin >> annual_income;
    
    daily_salary = annual_income / 365;
    cout << "Your daily salary is " << daily_salary << endl;
    
    return 0;
}
