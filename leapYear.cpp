#include <iostream>
using namespace std;
int main() {
    int yr;
    cout<<"enter the yr"<< endl;
    cin>>yr;
    if(yr%400==0||yr%4==0&&yr%100!=0){
        cout<<"its a leap year";
    }
    else{
        cout<<"its not a leap year";
    }
    return 0;
}