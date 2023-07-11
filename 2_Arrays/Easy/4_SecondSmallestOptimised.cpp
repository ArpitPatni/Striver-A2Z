#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,90,40,50};
    int n=sizeof(arr)/sizeof(int);
    int smallest=arr[0];
    int secondSmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]!=smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }
    cout<<"Second Largest is "<<secondSmallest<<endl;
    return 0;
}