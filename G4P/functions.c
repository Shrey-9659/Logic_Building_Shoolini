#include <stdio.h>

void myName(){
    printf("My name is Shrey Khandelwal");
}
int sumTwoValue(int a, int b){
    printf("%d\n", a+b);
    return 0;
}
void evenOrOdd(int num){
    if(num%2==0){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }
}

int main(){
    // int firstValue = sumTwoValue(5,6);
    // int secondValue = sumTwoValue(8,6);
    // printf("Value of firstValue is : %d", firstValue);
    evenOrOdd(16);
}