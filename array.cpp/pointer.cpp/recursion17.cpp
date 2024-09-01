#include<iostream>
using namespace std;
int recursion(string& str, int i, int j){
    if(i>j){
        return 0;
    }
    if(str[i]!=str[j]){
        return 5;
    }
    if(str[i]==str[j]){
        i++;
        j--;
        return 10;
    }
    recursion(str,i,j);
}
int main(){
    string name="abba";
    int ans;
        ans= recursion(name,0,name.length()-1);
    if(ans==5){
        cout<<"not palindrome"<<endl;
    }
    if(ans==10){
        cout<<"palindrome"<<endl;
    }
    }
