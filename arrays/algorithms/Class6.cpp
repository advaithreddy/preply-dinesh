// Discussed the same algorithms insertion and selection and bubble sort

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

  int hold;
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n-i-1; j++){
      if(arr[j]> arr[j+1]){
        hold = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = hold;
      }
    }
  }
}

void insertionSort(int arr[], int n){
  for(int i=1;i<n;i++){
    int key = arr[i];
    int j = i-1;

    while(j>=0 && arr[j]>key){
      arr[j+1] = arr[j];
      j = j-1;
    }

    arr[j+1] = key;
  }
}

void selectionSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    int min_idx = i;
    for(int j=i+1;j<n;j++){
      if(arr[j] < arr[min_idx]){
        min_idx = j;
      }
    }
    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }
}

int main(){
  int arr[] = {34, 12, 7, 0, 6, 45, 39, 89, 128, 76};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
  cout<<"Bubble sort:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  insertionSort(arr, n);
  cout<<"\nInsertion Sort:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  selectionSort(arr, n);
  cout<<"\nSelection Sort:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}