#include<stdio.h>
void copy_arr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i]; 
}
int main()
{
    double arr[3][3] = { 
                                { 1.0, 2.0, 3.0 },
                                { 4.0, 5.0, 6.0 },
                                { 7.0, 8.0, 9.0 },
                            };
    
    double arr_copy[3][3];
    for (int i = 0; i < 3; i++)
    {
        copy_arr(arr_copy[i] , arr[i] , 3);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2lf ", arr_copy[i][j]);
        printf("\n");
    }
}