#include <stdio.h>
#include <stdlib.h>

float rand_float() {
    return (float) rand() / RAND_MAX;
}

int main() {
    float x = 1;

    for(int i=0;i<2000;i++) {
        float a = rand_float();
        float b = rand_float();
        
        x = x + a;
        x = x + b;
        x = x - a;
        x = x - b;
        printf("%.6f\r\n", x);
    }   
}
