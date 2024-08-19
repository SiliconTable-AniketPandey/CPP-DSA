#include<iostream>
using namespace std;

void POSfinder(int arrays[100],int n , int p){
    try{
        if(p>0 && p<=n){
            cout<<"Element at "<<p<< " is "<<arrays[p]<<endl;
        }
        else{
            throw p;
        }
    }

    catch(int e){
        cout<<"Array out of bound"<<endl;
    }
}


int main(){
    int size;
    int pos;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements into the array"<<endl;
    for(int i = 0 ; i <=size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the position to search for"<<endl;
    cin>>pos;
    POSfinder(arr,size,pos);
    return 0;
}