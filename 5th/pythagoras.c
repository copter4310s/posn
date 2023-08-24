#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f", &a, &b);
    c = sqrt( (a*a) + pow(b, 2) );
    printf("%f", c);
}