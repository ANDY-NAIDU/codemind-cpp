#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a*a;
    int temp=0;
    while(b>0){
        temp=temp+b%10;
        b=b/10;
    }
    //if (temp!= 9) cout<<temp<<" "<<a;
    if(a==temp) cout<<"Neon Number";
    else cout<<"Not Neon Number";
}