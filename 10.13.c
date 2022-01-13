#include<stdio.h>
void input(double arr[][5] , int n);
double aver_part(double arr[] , int n);
double aver_all(double arr[][5] , int n);
double max(double arr[][5] , int n);
void res_print(double arr[][5] , int n);

int main()
{
    double arr[3][5] = { 0 };
    printf("Enter three sets of Numbers, each containing five double-type Numbers: \n");
    input(arr , 3);
    for (int i = 0; i < 3; i++)
    {
        printf("The average of %d row is %.2lf\n", i + 1, aver_part(arr[i] , 3));
    }
    printf("The average of all the data is %.2lf\n", aver_all(arr , 3));
    printf("Where the largest number is %.2lf\n", max(arr , 3));
    res_print(arr , 3);

    return 0;
}
void input(double arr[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            scanf("%lf", &arr[i][j]);
    }
}

double aver_part(double arr[] , int n)
{
    double sum;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    
    return (sum / n);
}

double aver_all(double arr[][5] , int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            sum += arr[i][j];
    }

    return (sum / (n*5));
}

double max(double arr[][5] , int n)
{
    double max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }

    return max;
}

void res_print(double arr[][5] , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%.2lf ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}