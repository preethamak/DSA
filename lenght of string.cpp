#include<iostream>
using namespace std;
int lenght(char name[])
{
    int sum=0;
    for(int i=0;name[i]!= 0; i++)
    {
    sum++;
    }
    return sum;
}
int main(){
char name[20];
cout<<"enter your name "<<endl;
cin>>name;
cout<<"lenght of your name is "<<lenght(name)<<endl;
return 0;
}