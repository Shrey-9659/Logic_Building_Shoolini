#include <stdio.h>
// WAP to find a factorial of a number (using recursion)
void factorial(int n){
    int fact = 1;
    for(int i = n; i>0; i--){
        fact = fact * i;
    }
    printf("%d", fact);
}

int factUsingRec(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * factUsingRec(n - 1);
    }
}

// Find the sum of first n natural numbers using recursion.
int sumUsingFact(int n){
    if(n == 0) return 0; //base-case
    else return n + sumUsingFact(n-1);
}
// Print the nth Fibonacci number using recursion.
// 0 1 1 2 3 5 8 13 21
int fibonacciUsingRec(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacciUsingRec(n-1) + fibonacciUsingRec(n-2);
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // factorial(n);
    // int output = factUsingRec(n);
    // int output = sumUsingFact(n);
    int output = fibonacciUsingRec(n);
    printf("%d", output);
}