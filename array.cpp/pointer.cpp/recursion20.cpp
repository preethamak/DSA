#include<iostream>
using namespace std;
void merge(int *arr,int n, int s, int e){
        int mid=(s+e)/2;                   //taking mid
      int  len1=mid-s+1;                  //taking the length of the new array 1
      int  len2=e-mid;                     //taking the length of the new array 2

      int *first=new int[len1];          //storing the new arrays in heap data memory
      int *sec=new int[len2];



      int k=s;               // stroring elements from original array to new array1
      for(int i=0; i<len1; i++){
        first[i]=arr[k++];
      }


      k=mid+1;                  // stroring elements from original array to new array2
      for(int i=0; i<len2; i++){
        sec[i]=arr[k++];
      }



      int index1=0;
      int index2=0;
       k=s;
      while(index1<len1&&index2<len2){//compare elements of 2 arrays to store for 1st place
            if(first[index1]<sec[index2]){
                    arr[k++]=first[index1++];
            }
            else{
                arr[k++]=sec[index2++];
            }
      }
    while(index1<len1){
        arr[k++]=first[index1++];   //compare with itself
    }
    while(index2<len2){
        arr[k++]=sec[index2++];     //compare with itself
    }
    delete [] first;
    delete [] sec;
}
void mergesort(int *arr, int n, int s, int e){
    if(s>=e){                       //base case
        return;
    }
    int mid=(s+e)/2;                // taking mid of array
    mergesort(arr,n,s,mid);                //recursive calls
    mergesort(arr,n,mid+1,e);
    merge(arr,n,s,e);                         //new fuction call
}
int main(){
    int arr[5]={2,4,1,6,3};
    int n=5;
    mergesort(arr,5,0,n-1);         //function call
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        return 0;
}