#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    fstream file;
    file.open("SAMPLE.txt",ios::out);
    if(!file){
        cout<<"Error in creating file"<<endl;
        return 0;
    }
    else{
        cout<<"File created sucessfully"<<endl;
    }

    file<<"Hello C++";
    file.close();

    file.open("SAMPLE.txt",ios::in);
    if(!file){
        cout<<"File not found!!!"<<endl;
    }
    else{
        char ch;
        while(!file.eof()){
            file>>ch;
            cout<<ch;
        }
    }
    file.close();
    return 0;
}
