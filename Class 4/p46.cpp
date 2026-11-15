#include<bits/stdc++.h>
using namespace std;
void abr(int bonus){
    bonus=0;
}
void agm(int marks[],int n,int bonus){
    for(int i=0;i<n;i++){
        if(marks[i]>=35 && marks[i]<40){
            marks[i]+=bonus;
        }
    }
}
int main(){
    int n,marks[100],gp=5;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    abr(gp);
    agm(marks,n,gp);
    cout<<gp;
    for(int i=0;i<n;i++){
        cout<<marks[i];
    }
}