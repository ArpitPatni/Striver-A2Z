#include<iostream>
using namespace std;
int findFibonaaci(int n){
    if(n<=1){
        return n;
    }
    return findFibonaaci(n-1)+findFibonaaci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<findFibonaaci(n)<<endl;
    return 0;

}