#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,90,40,50};
    int n=sizeof(arr)/sizeof(int);
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest is "<<largest<<endl;
    return 0;
}