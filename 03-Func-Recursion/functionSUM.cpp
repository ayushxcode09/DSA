#include<iostream>
using namespace std;
void sum(int a, int b){
    int sum = a + b;
    cout << "the sum is : " << sum << endl;
}
int main(){
    int a , b;
    cout << "enter 2 numbers ::::";
    cin >> a >> b;
    sum(a,b);
}
