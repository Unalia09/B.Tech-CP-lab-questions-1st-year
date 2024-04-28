//program to demonstrate the use of sizeof(),const, #define
#include <stdio.h>
#define c 100
int main() {
      int a=89;
      const int b=90; 
      printf("the total size of the variable a is %d \n", sizeof(a));
      printf("The value of constatnt b is %d \n", b);
      printf("The value of c after using define is %d", c);
      return 0;
}
