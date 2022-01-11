/*#include<stdio.h>
int ret_max(int arry[], int n); 
int main()
{
    int arr[9] = { 1, 2, 3 , 4, 5, 4, 3, 2, 1 };
    int max = ret_max(arr , 9);
    printf("%d", max);

    return 0;
}

int ret_max(int arry[], int n)
{
    int temp = arry[0];
    for (int i = 0; i < n; i++)
    {
        if (temp < arry[i])
            temp = arry[i];
    }

    return temp;
}*/
#include <stdio.h>
int ret_max(int arry[],int n);
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int max=ret_max(arr,9);
    printf("%d",max);
    return 0;
}
int ret_max(int arry[],int n)
{
    int temp=arry[0];
    for(int i=0;i<n;i++)
    {
        if(temp<arry[i])
        temp=arry[i];
    }
    return temp;
}

    
