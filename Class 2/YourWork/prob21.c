#include <stdio.h>

int main() {
    int n;
    for(;;){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        printf("entered number: %d\n",n);
    }
    printf("\n");
}