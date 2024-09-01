#include<iostream>
using namespace std;
int func(int a,int b){
    int ans;
    ans=(a>b)?a:b;
}
int main(){
    int a=5;
    int b=6;
    func(a,b);
    cout<<a <<b<<endl;

}