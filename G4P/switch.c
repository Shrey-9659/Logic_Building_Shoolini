#include <stdio.h>
// int main(){
//     int day;
//     printf("Enter day : ");
//     scanf("%d", &day);
//     switch(day){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         default:
//         printf("Enter valid day");
//     }
//     return 0;
// }
int main(){
    char character;
    printf("Enter a char : ");
    scanf(" %c", &character);
    int a,b;
    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);
    switch(character){
        case '*':
        printf("Multiplication of %d and %d is %d", a, b, a*b);
        break;
        default:
        printf("Enter valid number.");
    }
    return 0;
}