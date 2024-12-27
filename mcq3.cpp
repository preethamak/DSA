#include<iostream>
using namespace std;
int main(){
    int f=8;
    int *p=&f;
    cout<<(*p)++<<endl;//post incriment
    cout<<f<<endl;
}