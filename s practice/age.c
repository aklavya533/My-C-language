#include<stdio.h>
int main(){
    char name[20];
    int age;
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your age.\n");
    scanf("%d",&age);
    printf("Your name is %s\n",name);
    printf("You're %d years old\n",age);
    return 0;
}