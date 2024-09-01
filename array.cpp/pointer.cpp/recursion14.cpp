#include<iostream>
using namespace std;
int partion(int *arr, int s, int e){
    int value=arr[s];
    int cnt=0;
    for(int i=s+1;i<e;i++){
        if(arr[i]<=value){
            cnt++;
        }
    }
    int valin=cnt +s;
    swap(arr[valin],arr[s]);
    int i=s,  j=e;
    while(i<valin && j> valin){
       while(arr[i]<=value){
            i++;
       } 
       while(arr[j]>value){
        j--;
       }
       if(i< valin && j>valin){
        swap(arr[i++],arr[j--]);
       }
    }
    return valin;
}
void sort(int *arr, int s, int e){
    if(s>=e){
        return ;
    }
    int p= partion(arr,s,e);
    sort(arr,s,p-1);
    sort(arr,p+1,e);
}
int main(){
    int arr[7]={10,80,30,90,40,50,70};
    int n=7;
    sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}