#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int* arr, int n);
int* getPrimes(int n);
int isPrime(int x);
int main(int argc, char **argv)
{
    int n = 10;
    if (argc == 2) {
        atoi(argv[2]);
    }
    int *primes = getPrimes(n);
    int s = sum(primes, n);
    printf("The sum of first %d primes is %d\n", n, s);
    return 0;
}

int sum(int *arr, int n)
{
    int total;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int* getPrimes(int n)
{
    int result[n];
    result[0] = 2;
    int x = 3;
    int i = 1;
    while (i < n) {
        if (isPrime(x)) {
            result[i] = x;
            i++;
            x += 2;
        }
    }
    return result;
}
int isPrime(int x)
{
    if (x < 2) {
        return 0;
    } else if (x == 2) {
        return 1;
    } else if (x % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(x); i+=2) {
        if (x % 2 == 0) {
            return 0;
        }
    }
    return 1;
}
