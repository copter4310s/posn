#include <stdio.h>

void main() {
    int a = 10;
    float b = 3.14;
    char c = 'a';
    char d[] = "Hello World";
    
    printf("%i\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);
    printf("%s\n", d);
    
    printf("Enter your number: ");
    scanf("%i", &a);
    printf("%i\n", a);
}