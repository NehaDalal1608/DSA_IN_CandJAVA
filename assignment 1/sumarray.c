#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int array1[n], array2[n], sum[n];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        sum[i] = array1[i] + array2[i];
    }
    printf("Sum of the arrays:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", sum[i]);
    }
}

/* Output :
Enter the size of the arrays: 3
Enter elements of the first array:
12 23 32
Enter elements of the second array:
22 43 32
Sum of the arrays:
34 66 64 
*/
