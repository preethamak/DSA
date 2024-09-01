#include<iostream>
using namespace std;
int partition(int *arr,int s, int e){
    int value=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=value){
            cnt++;
        }
    }
                                   //placing a assumed value at right place 
    int valueindex=cnt+s;
    swap(arr[valueindex],arr[s]);
                                   // left and right place of value
    int i=s,j=e;
    while(i<valueindex && j>valueindex)
    {
        while(arr[i]<=value){
            i++;
        }
        while(arr[j]>value){
            j--;
        }
        if(i<valueindex && j> valueindex){
            swap(arr[i++],arr[j--]);
        }
    }              
    return valueindex;                 
}
void qsort(int *arr,int s, int e){
//base
    if(s>=e){
        return;
    }
//partition
    int p=partition(arr,s,e);
    qsort(arr,s,p-1);           //left part
    qsort(arr,p+1,e);           //right part    
}
int main(){
    int arr[5]={2,4,1,6,9};
    int n=5;
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}