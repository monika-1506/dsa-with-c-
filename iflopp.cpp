#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
if(n>0){
    cout<<"num is positive"<<endl;
}
else if(n<0){
    cout<<"num is negative"<<endl;
}
else{
    cout<<"num is zero"<<endl;
}
}