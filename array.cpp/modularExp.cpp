#include<iostream>
using namespace std;
int modularexp(int x,int y, int z){
    int r=1;
    while(y>0){
        if(y&1){
            r=(1LL*(r)*(x)%z)%z;
        }
        x=(1LL*(x)%z*(x)%z);
        y=y>>1;
    }
    return r;
}
int main(){
    int x, y,z;
    cout<<"enter x,y,z"<<endl;
    cin>>x>>y>>z;
    int result=modularexp(x,y,z);
    cout<<"exponetial is "<<result<<endl;
    
}