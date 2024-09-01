#include<iostream>
using namespace std;
int arsum(int *arr,int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return arr[0];
    }
int sum;  
        int ab= arsum(arr+1,n-1);
     sum=arr[0]+ab;
    
    return sum;
}
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    int ans=arsum(arr,n);
    cout<<"sum of the array is "<<ans<<endl;
    return 0;
}
