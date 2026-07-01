#include<iostream>
using namespace std;
void reverse(int L , int R , int arr[]){
    if(L>=R){
        return;
    }
    swap( arr[L] , arr[R]);
    reverse(L+1 , R-1 , arr);
}
int main(){
    int n;
     cout << "enter size of array : ";
    cin >> n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cout << "enter index " << i << " " <<  "value for the array !! " << endl;
        cin >> arr[i];
    }

    cout << "the array is : " << endl;
    for(int i=0;i<n;i++){
        cout  <<  arr[i] << " " << endl;
    }
    reverse(0,n-1,arr) ;

    cout << "the reversed array is : " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}