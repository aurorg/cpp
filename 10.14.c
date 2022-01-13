#include<stdio.h>
void input(int x , int y , double arr[x][y]);
double aver_part(int n , double arr[n]);
double aver_all(int x , int y , double arr[x][y]);
double max(int x , int y , double arr[x][y]);
void res_print(int x , int y , double arr[x][y]);

int main()
{
    double arr[3][5] = { 0 };
    printf("Enter three sets of Numbers, each containing five double-type Numbers: \n");
    input(3 ,5 ,arr);
    for (int i = 0; i < 3; i++)
    {
        printf("The average of %d row is %.2lf\n", i + 1, aver_part(3 , arr));
    }
    printf("The average of all the data is %.2lf\n", aver_all(3 , 5 , arr));
    printf("Where the largest number is %.2lf\n", max(3 , 5 , arr));
    res_print(3 , 5 , arr);

    return 0;
}
void input(int x , int y , double arr[x][y])
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
            scanf("%lf", &arr[i][j]);
    }
}

double aver_part(int n , double arr[n])
{
    double sum;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    
    return (sum / n);
}

double aver_all(int x , int y , double arr[x][y])
{
    double sum = 0;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
            sum += arr[i][j];
    }

    return (sum / (n*5));
}

double max(int x , int y , double arr[x][y])
{
    double max = arr[0][0];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }

    return max;
}

void res_print(int x , int y , double arr[x][y])
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
            printf("%.2lf ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}