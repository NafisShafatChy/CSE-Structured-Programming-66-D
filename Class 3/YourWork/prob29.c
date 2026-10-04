#include <stdio.h>

int main() {
    int n, a[100],find,found=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if (a[i]==find){
            printf("Founded\n");
            break;
        }
        if(found==0){
            printf("Not found\n");
            break;
        }
    }
    
}
