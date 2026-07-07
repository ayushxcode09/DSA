#include <bits/stdc++.h>
using namespace std;

bool checkSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "enter array size: ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
  cout << checkSort(arr,n);
    
 }
