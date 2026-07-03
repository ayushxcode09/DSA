#include<iostream>
using namespace std;
int main(){

    int hash[13] = {0};
    int size;
    cout << "enter size of the array : ";
    cin >> size;

    int arr[size];
    cout << "enter array elements : " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
        hash[arr[i]]++;
    }
    int q;
    cout << "enter nunber of queries : ";
    cin >> q;
    while(q--){
        int x;
        cout << "enter x value: ";
        cin >> x;

        cout << "Frequency of " << x << " is " << hash[x] << endl;
        
    }

}