#include<iostream>
using namespace std;

int f(int n , int arr[] , int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == n){
            count++;
        }
    }
    return count;
}
int main(){
   
    int size;
    cout << "enter size of the array ! : ";
    cin >> size;
    int arr[size];
    cout << "enter the array elements : ";
    for(int i=0; i<size;i++){
        cin >> arr[i];
    }
     int n;
    cout << "enter the n : ";
    cin >> n;
    
    cout << f(n,arr,size);
}