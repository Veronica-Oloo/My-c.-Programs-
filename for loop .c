//veronica achieng Oloo
//D33-2471-2023
#include <stdio.h>

int main() {
    int n, i;
    
    // Prompt user for input
    printf("Input number of terms: ");
    scanf("%d", &n);

    // Loop to print numbers and their cubes
    for (i = 1; i <= n; i++) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
    }

    return 0;//program executed successfuly
}