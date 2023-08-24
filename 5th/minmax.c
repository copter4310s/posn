#include <stdio.h>

int main() {
    int min, max, a;
    scanf("%i", &a);
    min = a;
    max = a;
    
    scanf("%i", &a);
    if (a < min) {
        min = a;
    } else if (a > max) {
        max = a;
    }
    
    scanf("%i", &a);
    if (a < min) {
        min = a;
    } else if (a > max) {
        max = a;
    }
    
    scanf("%i", &a);
    if (a < min) {
        min = a;
    } else if (a > max) {
        max = a;
    }
    
    scanf("%i", &a);
    if (a < min) {
        min = a;
    } else if (a > max) {
        max = a;
    }
    
    printf("%i\n", min);
    printf("%i", max);
}