
#include <iostream>
using namespace std;

int main() {

int employee_id,salary_hour,working_hour;
int total_salary;

cout<<"input the employee id"<<endl;
cin>>employee_id;
cout<<"input the working hour"<<endl;
cin>>working_hour;
cout<<"input the salary hour"<<endl;
cin>>salary_hour;

total_salary=working_hour*salary_hour;

cout<<"\nemployee_id = " <<employee_id;
cout<<"\nsalary="<<total_salary;

return 0;
}
