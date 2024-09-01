#include<iostream>
using namespace std;
int update1(int n){
     n++;
}
int update2(int &n){
    n++;
}
int main(){
    int n=5;
    update1(n);                 //pass by value, new memory allocated
    cout<<"pass by value so no change  "<<n<<endl;
    update2(n);                 //pass by refernce, no new memory alloted
    cout<<"pass by reference, no copy created  "<<n<<endl;
    
}