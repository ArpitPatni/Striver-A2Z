#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,2,2,3,3,5};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"Unique Elements is "<<i+1<<endl;
}