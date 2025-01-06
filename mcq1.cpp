#include<iostream>
using namespace std;
int main(){
    int f=10;
    int s=18;
    int *ptr=&s;
    *ptr=10;
    cout<<f<<endl;
    cout<<s<<endl;
}
