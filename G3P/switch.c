#include <stdio.h>
// 9. Write a program to check odd or even using switch.
int main(){
    int value;
    printf("Enter a number : ");
    scanf("%d", &value);
    int numIsEven = value % 2;
    switch(numIsEven){
        case 0:
        printf("Number is even.");
        break;
        case 1:
        printf("Number is odd");
        break;
        default:
        printf("Invalid");
        break;
    }
    // switch(value % 2){

    // }

    return 0;
}

// 16. Write a program is a triangle is a valid triangle or not.
// 11. Write a program to calculate area based on shape choice.

 