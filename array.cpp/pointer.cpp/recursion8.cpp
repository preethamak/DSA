#include<iostream>
using namespace std;
bool sorted(int *arr,int size){
    if(size==0 || size==1){            //base case
        return true;
    }         
    if(arr[0]>arr[1]){
        return false;
    }       
    else{
        int next= sorted(arr+1,size-1);
        return next;
    }
}
int main(){
    
    int arr[9]={0};

int size=9;
   
    bool ans= sorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}