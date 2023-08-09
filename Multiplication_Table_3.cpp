#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i = b;i<=c;i++){
        cout<<a<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<a*i<<endl;
    }
}