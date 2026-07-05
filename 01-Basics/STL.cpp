#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int , 4> a = {1,2,3,4};

    int n = a.size();

    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }

    cout << "value of 3rd index is" << " " << a.at(3) << endl;
    cout << "empty or not " << " " << a.empty() << endl;
    cout << "1st element is" << " " << a.front() << endl;
    cout << "last element is" << " " << a.back() << endl;



    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(10);
    cout << v.capacity() << endl;
     v.push_back(6);
    cout << v.capacity() << endl;
     v.push_back(11);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
      v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     v.push_back(4);
    cout << v.capacity() << endl;
     
    
    for(int i:v){
        cout << i << " ";
    } cout << endl;
    v.pop_back();
    
    for(int i:v){
        cout << i << " ";
    }
     
    
    
}