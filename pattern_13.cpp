// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int i=1;
    while (i<=n){
    int j=1,count=i;
    while (j<=i)
    {
        cout <<count<<" ";
      
        count=count-1;
          j=j+1;
        }
    
    cout<<endl;
    i=i+1;
        
    }
    
}