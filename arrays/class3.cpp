// Searching algorithms

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int ele){
  for(int i=0;i<n;i++){
    if(ele == arr[i]){
      return i;
    }
  }
  return 0;
}

int binarySearch(int arr[], int n, int ele){
  sort(arr, arr+n);

  int l = 0;
  int r = n-1;
  
  while(l<=r){
    int mid = (l+r)/2;


    if(arr[mid] == ele){
      return mid;
    }else if(arr[mid] > ele){
      r = mid-1;
    }else{
      l = mid+1;
    }
  }
  return 0;
}

int main() {

  int arr[5] = {5, 3, 1, 2, 5};
  // Linear Searching
  // -> TC : O(n)
  int ele = 3;
  cout<<linearSearch(arr,5,ele);
  cout<<endl;
  // Binary Searching
  // TC -> O(log n)
  int arr1[10] = {2,7,9,3,5,6,1,0,4,6};
  int ele2 = 4;
  cout<<binarySearch(arr1,10,ele2);
  
  return 0;
}

