#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter marks of student : " << endl;
    cin >> marks;

    if(marks>=80 && marks<=100){
        cout << "A grade" << endl;
    }
    else if(marks>=60 && marks<=79){
        cout << "B grade" << endl;
    }
     else if(marks>=50 && marks<=59){
        cout << "C grade" << endl;
    }
     else if(marks>=45 && marks<=49){
        cout << "D grade" << endl;
    }
     else if(marks>=25 && marks<=44){
        cout << "E grade" << endl;
    }
    else{
        cout << "F grade ";
    }
    
}
