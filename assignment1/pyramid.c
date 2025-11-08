#include <stdio.h>
int main()
{
    int n, a, b;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(a = 1; a <= n; a++) 
       { 
           for(b = a; b < n; b++) 
            printf(" ");
        for(b = 1; b <=(2 * a - 1); b++) 
            printf("*");
        printf("\n");     
       }
    return 0;
}