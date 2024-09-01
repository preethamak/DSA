#include<iostream>
using namespace std;
void recursion(string& str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    recursion(str,i,j);
}
int main(){
    string name="preetham";
      recursion(name,0,name.length()-1);
      cout<<"reverse of your name is "<<name;
}