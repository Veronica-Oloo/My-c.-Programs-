//3D array
#include <stdio.h>
int main() 
{
    int i, j, k;
    int marks[2][2][3] = 
    {
        { {11, 20, 53}, {97, 89, 93} },
        { {44, 15, 90}, {13, 24, 74} }
    };
//for loops
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d   \t", marks[i][j][k]);
            }
            printf("\n"); //print in new line
        }
        printf("\n"); //print in new line
  }
    return 0; //execution successiful
}