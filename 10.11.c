#include<stdio.h>
void arr_print(int arr[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", arr[i][j]);
    }
    printf("\n");
}
void arr_double(int arr[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            arr[i][j] *= 2;
    } 
}
int main()
{
    int arr[3][5] = {
                        { 1, 2, 3, 5, 7 },
                        { 8, 6, 4, 3, 2 },
                        { 3, 4, 5, 7, 2 },
                    };
    arr_print(arr , 3);
    arr_double(arr , 3);
    arr_print(arr , 3);

    return 0;
}