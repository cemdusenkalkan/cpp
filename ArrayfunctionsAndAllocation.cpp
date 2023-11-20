#include <iostream>
#include <climits>
#include <stdexcept>
using namespace std;

int sumOfArray(int* arr, int size,int sum)
{
for(int i=0; i<size; i++)
{
  if(sum > INT_MAX - arr[i] && arr[i]>0)
  {
    throw std::overflow_error("overflow detected");
  }
  if(sum < INT_MIN - arr[i]&& arr[i]<0)
  {
    throw std::underflow_error("underflow detected");
  }
  sum += arr[i];
}

return sum;
}

int subArray(int* arr, int size, int sum)
{
  for(int i=0; i<size; i++)
{
  if(sum > INT_MAX - arr[i] && arr[i]>0)
  {
    throw std::overflow_error("overflow detected");
  }
  if(sum < INT_MIN - arr[i]&& arr[i]<0)
  {
    throw std::underflow_error("underflow detected");
  }
  sum -= arr[i];
}

return sum;
}

int *createArray(int size)
{
  int* arr = new int[size];
  return arr;
}

void DeleteArray(int* &arr)
{
  if(arr!=nullptr)
  {
    delete[] arr;
    arr = nullptr;
  }
}

void printArray(int* arr, int size)
{
  if(arr != nullptr) 
  {
    for (int i=0; i<size; i++)
    {
      cout << arr[i] << " ";
    }
  }
}

int main() {

int size;
cout << "Enter the size of the array: ";
cin >> size;
int sum=0;

int* arr = createArray(size);

cout << "Enter the elements of the array: ";
for (int i = 0; i < size; i++) 
{
  cin >> arr[i];
}


cout << "sum of array is"<< sumOfArray(arr, size,sum)<<endl;
cout <<"subtract of array is"<<subArray(arr, size,sum)<<endl;

DeleteArray(arr);

return 0;
}



