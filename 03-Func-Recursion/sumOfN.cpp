#include<iostream>
using namespace std;

int sum(int N){
    if(N==0){
        return 0;
    }
    else{
        return N + sum(N-1);
    }
}
int main(){
    int N;
    cout << "enter value of N : ";
    cin >> N;
    cout << sum(N);
}
