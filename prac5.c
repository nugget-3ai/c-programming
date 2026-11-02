#include <stdio.h>
void printarr(int a[], int n);
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printarr(a, 5);
    reverse(a, 5);
    printarr(a, 5);

    return 0;
}