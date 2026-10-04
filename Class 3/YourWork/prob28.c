#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("Even number=%d\n",count1);
    printf("Odd number=%d\n",count2);
}