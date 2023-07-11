#include<iostream>
using namespace std;
bool CheckPalindrome(int i,string str){
    int n=str.length();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[str.length()-i-1]){
        return false;
    }else{
        return CheckPalindrome(i+1,str);
    }
}
int main(){
    string str="madam";

    cout<<CheckPalindrome(0,str);
    return 0;
}