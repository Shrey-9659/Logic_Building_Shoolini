#include <stdio.h>
// int main(){
//     printf("Hello World!");
//     return 0;
// }

// gcc fileName.c -o fileName
// ./fileName

// int main(){
//     int varA = 5;
//     int varB = 10;
//     printf("The number is %d and %d", varA, varB);
// // The numbers are 5 and 10
//     return 0;
// }

// int main() {
//     // int a = 5;
//     // int a = 5, b = 6;
//     // int a = b = c = 10; INVALID
//     // a = b = c = 10;
//     printf("%d, %d, %d", a,b,c);
//     return 0;
// }

// Type conversion : 
// int (operator) int = int
// float (operator) float = float
// int (operator) float = float

// Arithmatic Operations
// int main(){
    // int a = 10;
    // int b = 3;
    // printf("Sum is : %d", a+b);
    // printf("Sub is : %d", a-b);
    // printf("Division is : %d", a/b);
    // printf("Multiplication is : %d", a*b);
    // printf("Modulo is : %d", a%b);
    // int answer = 3+3+5;
    // int answer = 2+10/2+5;
    // int answer = 5*10/5*3;
    // printf("%d", answer);
    // return 0;
// }
// Priority : 
// () -> *,/ -> +,-
// if they are of same precidence then
// left to right calculation is obeyed

// Relational Opertors
// int main() {
    // int a = 5;
    // int b = 6;
    // int c = 5;
    // printf("%d", a == b);
    // printf("%d", a == c);
    // printf("%d", b > c);
    // printf("%d", a >= c);
    // printf("%d", a != c);
    
//     return 0;
// }

// AND OPERATOR : 
// true - true : true
// true - false : false
// false - true : false
// false - false : false

// OR OPERATOR : 
// true - true : true
// false - true : true
// true - false : true
// false - false : false

// Logical Operators ->
// int main() {
//     // printf("%d", 5>=5 && 6<=5);
//     // printf("%d", 5>=5 || 6<=5);
//     printf("%d", 5>=5 && 6!=5);
//     return 0;
// }

// IF - ELSE
int main(){
    // syntax -> if-else
    // if(condition){
    //     logic
    // }else{
    //     logc
    // }

    // Example : 
    int userAge;
    printf("Enter your age : ");
    scanf("%d", &userAge);
    // if(userAge>=18){
    //     printf("User is adult.");
    // }else{
    //     printf("Bache padh le");
    // }

    // Syntax -> if...elseif...else
    // if(condition 1){
    //     logic
    // }elseif(condition){
    //     logic
    // }elseif(condition){

    // }else{

    // }

    // if(userAge >= 18){
    //     printf("Adult");
    // }else if(userAge>0 && userAge<18){
    //     printf("Child");
    // }else{
    //     printf("Invalid Input");
    // }
    return 0;
}