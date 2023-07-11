#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int  number=5;

    cout<<"The 5 appears "<<hash[number]<<" times." <<endl;
}