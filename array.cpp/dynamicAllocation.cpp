#include<iostream>
using namespace std;
int sum(int arr[],int n){
        int sum=0;
        for(int i=0;i<=n;i++)
        sum+=arr[i];
        return sum;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter elements"<<endl;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    cout<<"sum of the array is "<<ans<<endl;
return 0;
}