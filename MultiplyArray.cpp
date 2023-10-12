#include <iostream>
using namespace std;

double Multiplierbro(int arr[], int n){

    int sum = 0;
    for(int i=0; i<n; i++){
      sum +=arr[i];
      
    }

    return sum*n;
}

int main(){

int arr[]={1,2,3,4,5,6};
int n=6;

double multiplication = Multiplierbro(arr,n);
cout<< "multiply of sum of elements is " << multiplication << endl;

return 0;
}
