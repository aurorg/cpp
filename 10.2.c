#include<stdio.h>
void copy_arr(double *target, double *source, int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source_begin, double *source_end);
void print_copy(int n, double *arr);
int main()
{
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1 , source, 5);
    copy_ptr(target2 , source, 5);
    copy_ptrs(target3 , source, source + 5); //到这里已经都copy进去了

    print_copy(1 , target1);
    print_copy(2 , target2);
    print_copy(3 , target3);

    return 0;
}

void copy_arr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i]; 
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double *target, double *source_begin,  double *source_end)
{
    for (double *i = source_begin; i < source_end; i++)
        *(target++) = *i;
}

void print_copy(int n, double *arr)
{
    printf("Target%d: ", n );
    for (int i = 0; i < 5; i++)
        printf("%.2lf ",arr[i]);
    printf("\n");
}