#include<iostream>

using namespace std;

int binarySearch(int a[], int n, int ele){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int m = (s+e)/2;
        if(a[m] == ele){
            return m;
        }else if(a[m] > ele){
            e = m-1;
        }
        else{
            s = m+1;
        }
    }

    return -1;
}

int main(){
    int a[] = {2,4,6,8,9};
    int n = 5;
    int ans = binarySearch(a,n,8);
    if(ans == -1){
        cout<<"Element not found";
    }else{
        cout<<"Element found at "<<ans;
    }
}