#include<iostream>
using namespace std;
void reach(int st,int d){
    cout<<"start "<<st<<" final point "<<d<<endl;
    if(st==d){
        cout<<"reached"<<endl;
        return;
    }
    st++;
    reach(st,d);
}
int main(){
    int d=10;
    int st=0;cout<<endl;
    reach(st,d);
}