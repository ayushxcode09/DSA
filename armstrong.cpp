#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int count = 0;
    int dup = n;

    while(n>0){
        int lastdigit = n%10;
        count ++;
        n = n/10;
    }
    int sum = 0;
    n = dup;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit , count);
        n = n/10;
    }
    if(dup = sum){
        cout << "Armstrong number !! ";
    }
    else{
        cout << "not an armstrong number !! ";
    }
}