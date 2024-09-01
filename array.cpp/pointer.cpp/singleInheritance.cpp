#include<iostream>
using namespace std;
class single{
    public:
    int c;
   int a=10;
   int b=20;
};
class inherited:public single{
    int c; int a; int b;
    public: void calculate(){
        c=a+b;
    }
    void output(){
        cout<<"sum of a and b is "<<c<<endl;
    }
};
int main(){
      inherited h;
      h.calculate();
      h.output();
      return 0;
}