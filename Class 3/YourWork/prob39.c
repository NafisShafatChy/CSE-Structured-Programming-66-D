#include <stdio.h>

int main() {
    char str[50];
    int length = 0, isPalindrome = 1;
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}