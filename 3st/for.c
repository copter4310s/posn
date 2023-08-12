#include <stdio.h>

int main() {
    int lines, n, k;
    scanf("%i", &lines);
    
    for (n=1; n<=lines; n++) {
        for (k=1; k<=n; k++) {
            printf("*");
        }
        printf("\n");
    }
}