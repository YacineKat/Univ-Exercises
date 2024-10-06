#include <stdio.h>
#include <stdlib.h>

int inputs(){
        int shape_size;
    printf("Enter the size of triangle: ");
    scanf("%d", &shape_size);
    while (shape_size <= 0){
       printf("The number is lass then 0, Try Again:");
       scanf("%d", &shape_size);
    }
    return shape_size;
}

// Recursive function to print a triangle of '*' characters
void display_triangle_rec(int shape_size){
    for (int i = 1; i <= shape_size; i++) {
        for (int j = 1; j <= shape_size - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}


// Recursive function to print an isosceles triangle of '*' characters
void display_triangle_iso(int shape_size){
    for (int i = 1; i <= shape_size; i++) {
        for (int j = 1; j <= shape_size - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        for (int j = 1; j <= shape_size + i; j++) {
            printf(" ");
        }
       
        printf("\n");
    }
}

void menu(){
    int option, shape_size = inputs();
   do{
        printf("\nChoose an option:\n");
        printf("[1]. Print a recursive triangle\n");
        printf("[2]. Print an isosceles triangle\n");
        printf("[3]. Change  the size of the triangle\n");
        printf("[4]. Exit\n#Enter your choice: ");
        scanf("%d", &option);
        switch (option){
            case 1:
                display_triangle_rec(shape_size);
                break;
            case 2:
                display_triangle_iso(shape_size);
                break;
            case 3:
                shape_size = inputs();
                break;  
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid option! Please try again.\n");
        }
   } while (1);
   
}

int main() {
    printf("\n################## Display Triangle ##################\n");
    menu();
    return 0;
}
