#include<iostream>
using namespace std;
void print(int *p){
     cout<<*p<<endl;
     cout<<p<<endl;
    }
int main(){
    /*
    int ar[3]={1,2,3};
    char ch[3]="ab";
    cout<<ar<<endl;
    cout<<ch<<endl;
    char *p=&ch[0];
    cout<<p<<endl;
     cout<<*p<<endl;
     
     char c = 'a';
     char *z = &c;
     cout<<z<<endl;
     */
    int x=5;
    int *p=&x;
    print(p);
     }
