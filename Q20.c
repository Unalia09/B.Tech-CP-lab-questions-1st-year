//program to check if an alphabet is a vowel or consonant using ternary operator

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Ternary operator to check if the character is a vowel
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? printf("The alphabet is a vowel.%c\n",ch) : printf("The alphabet is a consonant. %c\n",ch);

    return 0;
}
