#include <stdio.h>
#include <ctype.h>
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
    /* printf(HELLO);
    printf("\n");
    printf("%s",HELLO);
    printf("\n%d",CLASS_SIZE);
    printf("\n%d",HOSTEL_POP);
    printf("\n%f",EXP);
    printf("\n\nHello %s. we have %d student in each class and %d in each hostel",HELLO,CLASS_SIZE,HOSTEL_POP);
    return 0;
    */

    /*
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 50;
    */
    /*
    if ((a == b) && (c > 20)) {
        printf("Something is clearly wong :(");
    }
    else if ((a != b) || (c > b))
    {
        printf("Makes sense");
    };
    */

    /*
    // Ternary operation
    int e = (a > c) ? (a * c) : (a % c);
    printf("e = %d", e);
    */
    /*
    int day = 6;

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Friday");
        break;
    case 4:
        printf("Wednesday");
    case 5:
        printf("Thursday");
    default:
        printf("Holdiay");
    }
    */
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect Grade");
        break;
    case 'B':
        printf("Good Grade");
    case 'C':
        printf("Decent");
    default:
        printf("Failed");
    }
};
