#include <iostream>


using namespace std;


void _swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b= temp;
}   

void reverser(int arr[], const int n)
{
    int i=0;
    int j=n-1;

    while(i<j)
    {
        _swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void printer(int arr[], const int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){


    const int n=5;
    int arr[n]={1,2,3,4,5};

    reverser(arr,n);
    printer(arr,n);
}
