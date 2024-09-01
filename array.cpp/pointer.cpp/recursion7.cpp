#include<iostream>
using namespace std;
void tellnumber(int n,string arr[]){
    if(n==0){
        return; 
    }
    int digit=n%10;
    n=n/10;
    tellnumber(n,arr);
     cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","ive","six","seven","eight","nine"};
    tellnumber(n,arr);
    return 0;
}   