#include <stdio.h>

// void myName(){
//     printf("My name is Shrey Khandelwal");
// }
// int sumTwoValue(int a, int b){
//     printf("%d\n", a+b);
//     return 0;
// }
// void evenOrOdd(int num){
//     if(num%2==0){
//         printf("Number is even");
//     }else{
//         printf("Number is odd");
//     }
// }

// int main(){
    // int firstValue = sumTwoValue(5,6);
    // int secondValue = sumTwoValue(8,6);
    // printf("Value of firstValue is : %d", firstValue);
//     evenOrOdd(16);
// }

// int findMax(int a, int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }
// int main(){
//     printf("%d", findMax(10, 8));
//     return 0;
// }

// Write a program to check if a number is even or odd using a function

void findEvenOrOdd(int num){
    if(num % 2 == 0){
         printf("Given number is even");
    }else{
        printf("Given number is odd");
    }
}
int main(){
    findEvenOrOdd(6);
    findEvenOrOdd(61);
    return 0;
}