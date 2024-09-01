#include<iostream>
using namespace std;
class dog{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class human{
    public:
    void speak(){
    cout<<"speaking"<<endl;
    }
};
class hybrid:public dog,public human{

};
int main(){
   hybrid h1;
   h1.speak();
    h1.bark();
}