#include <bits/stdc++.h>
using namespace std;

int RemoveDup(int arr[],int n){
    if(n==0) return 0;
    int i = 0;
    int j=1;

    while(j<n){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    return i+1;
}
int main() {
    int n;
    cout << "enter array size: ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
  cout << RemoveDup(arr,n);
    
 }
