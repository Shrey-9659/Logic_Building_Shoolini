#include <stdio.h>
// 1. Check whether a number is divisible by 5 or 11 or both.
// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     if(num % 5 == 0 && num % 11 == 0){
//         printf("Number is divisible by 5 and 11.");
//     }else if(num % 5 == 0){
//         printf("Number is divisible by 5.");    
//     }else if(num % 11 == 0){
//         printf("Number is divisible by 11.");    
//     }else{
//         printf("Number is not divisible by 5 or 11.");
//     }
//     return 0;
// }

// 2. Check discount eligibility:
// Total > ₹1000: 10% discount
// Total > ₹500: 5% discount
// Else: No discount

// int main(){
//     int bill;
//     printf("Enter your bill amount : ");
//     scanf("%d", &bill);
//     if(bill >= 1000){
//         printf("Eligible for 10%% discount");
//         printf("Total payable amount is : %f", bill - (bill  * 0.1));
//     }else if(bill < 1000 && bill >= 500){
//         printf("Eligible for 5%% discount");
//         printf("Total payable amount is : %f", bill - (bill  * 0.05));
//     }else{
//         printf("No discount, total payable amount is %d", bill);
//     }
//     return 0;
// }



// 3. Write a program to calculate electricity bill based on units consumed:
// First 100 units: ₹1.5/unit
// Next 100 units: ₹2/unit
// Above 200 units: ₹3/unit

int main(){
    int units;
    printf("Enter units consumed : ");
    scanf("%d", &units);
    if(units <= 100){
        float amount = units * 1.5;
        printf("%f", amount);
    }else if(units > 100 && units <= 200){
        float amount = 150 + (units - 100) * 2;
        printf("%f", amount);
    }else{
        float amount = 350 + (units - 200) * 3;
        printf("%f", amount);
    }

    return 0;


}