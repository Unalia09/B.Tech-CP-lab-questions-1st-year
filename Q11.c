//program to demonstrate us of arithmetic operations using aithmetic operators
#include <stdio.h>

int main() {
      int a, b, add, sub, divison,multiply;
      float mod;
      a=5;
      b=5;
      add=a+b;
      sub=a-b;
      mod=a%b;
      divison=a/b;
     multiply=a*b;
      printf("Adding a and b: %d\n", add);
      printf("Substracting a and b: %d\n", sub);
      printf("Modulus of a and b: %.2lf\n", mod);
      printf("Dividing a and b: %d\n", divison);
      printf("Multiplying a and b: %d\n", multiply);
      return 0;
}
