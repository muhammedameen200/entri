#include <stdio.h>

int main() {
    int a[] = {10, 45, 32, 67, 22};
    int n = 5,
     max1 = a[0],
     max2 = a[1];
    if (max2 > max1) { int t = max1; max1 = max2; max2 = t; }

    for (int i = 2; i < n; i++)
        if (a[i] > max1) 
        {
             max2 = max1;
             max1 = a[i];
        }
        else if
            (a[i] > max2) max2 = a[i];
    printf("%d", max2);
}