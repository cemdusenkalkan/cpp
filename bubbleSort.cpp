#include <iostream>
using namespace std;

void BubbleSortAlgorithm(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                
            }
        }
    }
}

int main(){
    
    int arr[] = {2,4,5,7,8,0,11,15,346,44,76};
    int n =sizeof(arr)/sizeof(arr[0]);
    BubbleSortAlgorithm(arr,n);
    for(int i=0; i<n; i++)
    cout << "sorted array list is "<< arr[i];<<endl;
    
    return 0;
}
