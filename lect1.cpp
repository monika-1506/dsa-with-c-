#include<iostream>
using namespace std;
int main(){
    int a=5;
    string b = "hello mona";
    char c = 'd';
    bool f="true";
    float g=1.9;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<f<<"\n"<<g<<endl;
    int size= sizeof(a); //to tell how much memory it will take to st  ore.
    cout<<"size of a in byte is:"<<size<<endl;
}