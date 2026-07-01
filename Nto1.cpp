#include<iostream>
using namespace std;
void number(int i , int n){
    if(i<1){
        return;
    }
    cout << i << endl;
    number(i-1 , n);

}
int main(){
    int n;
    cout << "enter n value ";
    cin >> n;
    int i = n;
    number(i , n);
}