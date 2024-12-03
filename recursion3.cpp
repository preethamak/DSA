#include<iostream>
using namespace std;
void counting(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<endl;
        counting(n-1);
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<endl;
    counting(n);
    return 0;
}