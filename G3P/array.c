#include <stdio.h>
// WAP to print all the elements of an array.
void printAllElements(){
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }
}

// WAP to print the sum of values in an array. Take the
// array values from the user
void sumOfArray(){
    int n, sum = 0;
    printf("Enter number of values to insert : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("%d", sum);

}

// WAP to reverse an array
void reverseArray(){
    int arr[] = {1,2,3,4,5};
    for(int i = 4; i>=0; i--){
        printf("%d ", arr[i]);
    }
}

// WAP to find the min and max value of an array

// WAP to find the element in an array (index value)

// WAP to find the second largest element in an array

int main(){
    // printAllElements();
    // sumOfArray();
    reverseArray();
    return 0;
}