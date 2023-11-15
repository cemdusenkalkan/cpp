#include <iostream>
#include <climits>
using namespace std;

void _swap(int &a, int& b)
{
  int temp =a;
  a=b;
  b=temp;
} 

void sort(int* arr, const int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(arr[i]>arr[j])
      swap(arr[i],arr[j]);
    }
  }
}

int kthArray(int* arr, const int n, const int k)
{
  if(n==0)
  {
    return 0;
  }
  sort(arr,n);
  return arr[k-1];
}

int main()
{
  const int n = 5;
  int arr[n]={3,11,234,1,2};

  kthArray(arr,n, 3);

  return 0;
}
