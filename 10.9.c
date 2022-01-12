#include<stdio.h>
void arr_copy(double source[][5] , double target[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            target[i][j] = source[i][j];
    }
}
void arr_print(double source[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%.2lf ", source[i][j]);
    }
}
int main()
{
    double source[3][5] = {
                            { 1.2, 2.3, 3.4, 5.6, 7.8 },
                            { 8.7, 6.5, 4.3, 3.2, 2.1 },
                            { 3.1, 4.5, 5.6, 7.6, 2.4 },
                        };
    double target[3][5] = { 0 };
    arr_copy(source , target , 3);
    arr_print(target , 3);

    return 0;
}