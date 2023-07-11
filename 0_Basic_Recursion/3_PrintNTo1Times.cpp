#include<iostream>
using namespace std;
void printNumber(int i,int n){
    if(i<1){
        return;
    }else{
        cout<<i<<endl;;
        printNumber(i-1,n);
    }
}
int main(){
    int n;
    cin>>n;
    printNumber(n,n);
    return 0;
}