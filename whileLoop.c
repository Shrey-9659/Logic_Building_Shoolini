#include <stdio.h>

// int main(){

    // for(intialization; condition; inc/dec){
    //     logic
    // }
    // while(i<5){
        // logic
    // }
    // WAP to print a series of number.
    // int  num = 10;
    // int i = 1;
    // while(i<=10){
    //     printf("%d\n", i);
    //     i++;
        // i = i+1
//     }
//     return 0;
// }

// Reverse the digits of a number using a while loop.

// int main(){
//     printf("Enter a number : ");
//     int num;
//     scanf("%d", &num);
//     int rev = 0;
//     int temp = num;
//     while(temp>0){
//         int rem = temp%10;
//         rev = rev * 10 + rem;
//         temp = temp/10;
//     }
//     printf("The reverse of %d is %d", num, rev);
//     return 0;
// }
// Check if a number is prime using a while loop.

// do{
//     logic
// }while(condition)

// int main(){
//     int num = 5;

//     do{
//         printf("I will run atleast once");
//     }while(num > 6);

//     return 0;
// }

int main(){
    for(int i = 1; i<=3; i++){
        for(int j = 1; j<=3; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}