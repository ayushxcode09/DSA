#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "enter array size: ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "largest element is : " << " " << largest;
    

    // using bubble sort algorithm : 
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout << "largest element is : " << arr[n-1];
    
 }
