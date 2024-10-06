#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to get user input for a number
int inputs(){
    int number;
    printf("\nEnter the Number: ");
    scanf("%d", &number);
    return number;
}
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
void is_prime(int number) {
    if (number <= 1) {
        printf("%d is not prime because it is less than or equal to 1\n", number);
        return;
    }
    for (int i = 2; i <= number/2; i++) {
        if (check_is_prime(i)) { 
            if (number % i == 0) {
                printf("%d is not prime because it is divisible by prime %d\n", number, i);
                return; 
            }
        }
    }

    printf("%d is prime\n", number);
}


// Function to print all prime numbers up to a given number
void primes_number(int n){
    for(int i = 2; i <= n; i++){
        if(check_is_prime(i)) printf("%d,\t",i);
    }
}


// Function to find the nth prime number
void first_prime(int n){
    int cont = 0, number = 2;
    while(cont < n){
        if(check_is_prime(number)) cont++;
        number++;
    }
    printf("\nThe %dth prime number is: %d\n", n, number-1);
}

// Main menu function
void menu() {
    int n = inputs();  // Input number from user
    int option;

    do {
        printf("\nChoose an option:\n");
        printf("[1]. Check if a number is prime\n");
        printf("[2]. Print all prime numbers up to a given number\n");
        printf("[3]. Find the 'n'th prime number\n");
        printf("[4]. Change number\n");
        printf("[5]. Exit\n#Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                is_prime(n);
                break;
            case 2:
                primes_number(n);
                break;
            case 3:
                first_prime(n);
                break;
            case 4:
                n = inputs(); 
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (1);
}

int main() {
    printf("################# Prime Number Checker #################\n");
    menu();
    return 0;
}