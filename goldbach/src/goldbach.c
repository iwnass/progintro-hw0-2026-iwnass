#include <stdio.h>
#include <stdin.h>

//Function for prime check
int primes(int num) {
    int divisor;

    if (num == 2)
        return 1;

    if (num %2 == 0)
        return 0;
    
    for (divisor = 3; divisor * divisor <= num; divisor += 2) {
        if (num % divisor == 0) {
            return 0;
        }
    }
    return 1;
}




int main() {
    int i;
    printf("give number: ");
    scanf("%d", i);
    prime(i);
}