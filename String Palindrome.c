// program to find if the string is palindrome or not


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int flag;
    printf("Enter a string: ");
    scanf("%s", str);

    int L= strlen(str);

    for (int i = 0; i < L; i++) {
        if (str[i] != str[L - i - 1]) {
            flag=1;
            break;
        }
    }

    if (flag==0) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

    return 0;
}
