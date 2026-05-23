#include <stdio.h>
#define CLASS_SIZE 100
#define HOSTEL_POP (16*CLASS_SIZE)
#define HELLO "welcome to veritas"
#define EXP 2.7183

int main() {
    /*char name [30];
    printf("Enter your name? ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);
    return 0;
    */
    printf(HELLO);
    printf("\n");
    printf("%s",HELLO);
    printf("\n%d",CLASS_SIZE);
    printf("\n%d",HOSTEL_POP);
    printf("\n%f",EXP);
    printf("\n\nHello %s. we have %d student in each class and %d in each hostel",HELLO,CLASS_SIZE,HOSTEL_POP);
    return 0;
}
