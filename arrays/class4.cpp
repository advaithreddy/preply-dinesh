#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
  // int hold;
  //   for(int i=0; i<n-1;i++){
  //     if(arr[i]>arr[i+1]){
  //       hold = arr[i];
  //       arr[i] = arr[i+1];
  //       arr[i+1] = hold;
  //     }
  //   }

    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
          int hold = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = hold;
        }
      }
    }
}

int main(){
  int arr[] = {34, 12, 7, 0, 6, 45, 39, 89, 128, 76};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
  cout<<"Bubble sorted:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  // insertionSort(arr, n);
  // cout<<"Insertion Sort:\n";
  // for(int i=0;i<n;i++){
  //   cout<<arr[i];
  // }
  // selectionSort(arr, n);
  // cout<<"Selection Sort:\n";
  // for(int i=0;i<n;i++){
  //   cout<<arr[i];
  // }
  
  return 0;
}