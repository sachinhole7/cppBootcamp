// Write a program to calculate LCM of two numbers 
#include <stdio.h>

int LCM(int n1, int n2){
    int max;
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            break;
        }
        ++max;
    }
    return max;
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    
    printf("LCM of %d and %d is %d\n", n1, n2, LCM(n1, n2));

    return 0;
}


