#include <stdio.h>
#include <stdbool.h>


// Function to check if a number is prime or not
bool check_is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


// Function to check if a number is prime or not and print the result along with the prime factors
int is_prime(int number){
    if (number <= 1) {
        printf("%d is not prime because it is less than or equal to 1\n", number);
        return 0;
    }
    for (int i = 2; i <= number/2; i++) {
        if (check_is_prime(i)) { 
            if (number % i == 0) {
                printf("%d is not prime because it is divisible by prime %d\n", number, i);
                return 0; 
            }
        }
    }

    printf("%d is prime\n", number);
}


// Function to print all prime numbers up to a given number
int primes_number(int n){
    for(int i = 2; i <= n; i++){
        if(check_is_prime(i)) printf("%d,\t",i);
    }
}

int first_prime(int n){
    
}

int main() {
    int number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    is_prime(number);
    primes_number(number);
    
    return 0;
}