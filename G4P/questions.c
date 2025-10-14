#include <stdio.h>
// int main(){
//     int a = 5;
//     int b = 15;
//     int c = a + b;
//     printf("The sum of %d and %d is %d", a,b,c);
//     return 0;
// }

// Print the area of a circle;
// int main() {
//     int radius;
//     const float pi = 3.14;
//     printf("Enter the value of radius : \n");
//     scanf("%d", &radius);
//     float area = pi * (radius * radius);
//     printf("The area of circle with radius %d is %.2f", radius, 
//         area);
//     return 0;
// }
// Take 2 input from the user, and print the area of a rectangle
// int main(){
//     int length, width;
//     printf("Enter the length : ");
//     scanf("%d", &length);
//     printf("Enter the width : ");
//     scanf("%d", &width);
//     printf("The area of rectangle with sides %d and %d is %d",
//     length, width, length*width);
//     return 0;
// }

int main(){
    int randomNum, chance = 5;
    printf("Enter a random value from 1 to 20 : ");
    scanf("%d", &randomNum);
    for(int i = 1; i<=5; i++){
        int ansValue;
        printf("Enter a value : ");
        scanf("%d", &ansValue);
        if(ansValue == randomNum){
            printf("Horray! You won\n");
            break;
        }else{
            printf("Try once again\n");
            
            printf("Chances left : %d \n", chance - i);
        }
    }
    return 0;
}
