#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    int d=0;
    for(int i=1;i<=a;i++){
        b=b+(i*i);
        d=d+i;
    }
    int c = d*d;
    
    if(c>b){
        cout<<c-b;
    }else{
        cout<<b-c;
    }
}