#include<bits/stdc++.h>
using namespace std;
int ispal(string str,int left,int right){
    if(left>=right){
        return 1;
    }
    if(str[left]!=str[right]){
        return 0;
    }
    return ispal(str,left+1,right-1);
}
int main(){
    string s; cin>>s;
    int len=0;
    while(s[len]!='\0'){
        len++;
    }
    if(ispal(s,0,len-1)){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not palindrome\n";
    }
}