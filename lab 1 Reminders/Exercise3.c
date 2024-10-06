#include <stdio.h>

int main() {
    int num1 = 42;
    
    int *pnum = &num1;
    
    printf("Address of num1: %p\n", (void*)&num1);   
    printf("Address of pnum: %p\n", (void*)&pnum);    
    printf("Value of num1: %d\n", num1);              
    printf("Value of pnum (Address it points to): %p\n", (void*)pnum); 
    printf("Value pointed to by pnum: %d\n", *pnum); 
    int **ppnum = &pnum;
    printf("Value of ppnum (Address it points to, which should be pnum's address): %p\n", (void*)ppnum);
    printf("Value pointed to by ppnum (Address stored in pnum): %p\n", (void*)*ppnum);
    **ppnum += 100;
    printf("Updated value of num1 (after incrementing by 100): %d\n", num1);
    
    return 0;
}
