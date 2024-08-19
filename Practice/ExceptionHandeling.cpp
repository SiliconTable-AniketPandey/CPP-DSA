#include<iostream>
using namespace std;

void divide(int a , int b){
    if(b != 0){
        cout<<"RESULT = "<<a/b;
    }
    else throw(b);
}

int main(){
    int A,B;
    cout<<"Enter the first number"<<endl;
    cin>>A;
    cout<<"Enter the second number"<<endl;
    cin>>B;

    try{
        divide(A,B);
    }
    catch(int e){
        cout<<"DIVISION BY ZERO ERROR"<<endl;
    }
}