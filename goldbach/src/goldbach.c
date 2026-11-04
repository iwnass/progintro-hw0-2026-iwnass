#include <stdio.h>
#include <stdlib.h>
// #include <stdin.h>

//Function for prime check
int primes(int num) {
    int divisor;

    if (num < 2)
        return 0;

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

//Goldbach's Conjecture Function
//Using Void because i dont need to return a value, just use the logic.
void goldbach(int num) {
    int i, j;

    for (i = 2; i <= num / 2; i++) {
        j = num - i;

        if (primes(j) && primes(i)) {
            printf("%d = %d + %d\n", num, i, j);
        }
    }
}







int main() {
    //under construction
}