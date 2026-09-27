#include <stdio.h>

int main() {
    for (int i=1;i<=10;i++) {
        if (i==6) {
            break;
        }
        if (i%2!=0) {
            continue;
        }
        printf("%d ",i);
    }
}
