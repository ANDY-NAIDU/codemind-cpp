#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int sum = 0;
    cin>>a>>b>>c>>d;
    for(int i = a;i<=b;i++){
        if(i%c == 0 and i%d!=0){
           sum=sum+i; 
        }
    }
    cout<<sum;
}