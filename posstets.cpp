#include <stdio.h>

int main(void){
    long long n;
    printf("Starting number: ");
    scanf("%lli", &n);


    long long steps = 0;
    while (n > 1){
        if (n % 2){
            n = 3*n + 1; 
        } else {
            n != 2;
        }

        steps++;
        printf("Step %lli: %lli\n", steps, n);
        continue;
    }

    return 0;
}
