#include<stdio.h>
int main(){
    int a , b , sum = 0, subtraction = 0, multiplication = 0;
    float division;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division =  a / b;
    printf("The sum of two numbers is %d\n", sum);
    printf("The subtraction of two numbers is %d\n", subtraction);
    printf("The multiplication of two numbers is %d\n", multiplication);
    printf("The division of two numbers is %2f\n", division);
    return 0;
}