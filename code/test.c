#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int main() {
    int x = 10, y = 5;
    
    printf("Add: %d + %d = %d\n", x, y, add(x, y));
    printf("Minus: %d - %d = %d\n", x, y, minus(x, y));
    
    return 0;
}