#include <stdio.h>

// int main(){
//     // for(initialization; condition; increment/decrement){
//     // logic
//     // }
//     for(int i = 1; i<=5; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// WAP to print number from 0 to n.
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     for(int i = 0; i<=n; i++){
//         printf("%d", i);
//     }
//     return 0;
// }

// WAP to print a table of a number.
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i = 1; i<=10; i++){
//         printf("%d * %d = %d\n", n, i, n*i);
//     }

//     return 0;
// }

// WAP to print a factorial of a number.
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//        fact = fact * i; 
//     }
//     printf("Factorial value of %d is %d\n", n, fact);
//     return 0;
// }

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}