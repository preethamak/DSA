#include<iostream>
using namespace std;
bool binary(int *arr,int n, int ele){
    if(n==0){
        return 0;
    }
    int m,b=0,e=n-1;
    m=b+e/2;
    if(arr[m]==ele){
        return 1;
    }
    if(arr[m]<ele){
        b==m;
    }
    if(arr[m]>ele){
            e==m;
    
    }
    bool remain=binary(arr+1,n-1,ele);
    return remain;

}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int n=8;
    int ele=8;
    int ans = binary(arr,n,ele);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element not present"<<endl;
    }
    return 0;
}