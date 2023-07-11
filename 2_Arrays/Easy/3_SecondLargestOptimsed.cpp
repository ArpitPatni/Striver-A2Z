#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,90,40,50};
    int n=sizeof(arr)/sizeof(int);
    int largest=INT_MIN;
    int secondLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    cout<<"Second Largest is "<<secondLargest<<endl;
    return 0;
}