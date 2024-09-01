#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int **arr=new int *[n];
    for(int i=0;i<=n;i++){
        arr[i]=new int[n];//assining done
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //deleting
    for(int i=0;i<=n;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}