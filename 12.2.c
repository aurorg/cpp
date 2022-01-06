 
#include <stdio.h>
 

int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}




void set_mode(int n);
void get_info(void);
void show_info(void);

 
#include <stdio.h>
 

static int mode;
static double range;
static double fuel;

void set_mode(int n)
{
    if (n > 1)
    {
        printf("Invalid mode specified. Mode %s used.\n",
               (0 == mode) ? "0(metric)" : "1(US)");
    }
    else
    {
        mode = n;
    }
    return;
}

void get_info(void)
{
    if (0 == mode)
    {
        printf("Enter distance traveled in kilometers: ");
    }
    else
    {
        printf("Enter distance traveled in miles: ");
    }
    scanf("%lf", &range);

    if (0 == mode)
    {
        printf("Enter fuel consumed in liters: ");
    }
    else
    {
        printf("Enter fuel consumed in gallons: ");
    }
    scanf("%lf", &fuel);

    return;
}

void show_info(void)
{
    if (0 == mode)
    {
        printf("Fuel consumption is %.2lf liters per 100km.\n",
               (fuel / range) * 100);
    }

    else
    {
        printf("Fuel consumption is %.1lf miles per gallon.\n",
               range / fuel);
    }
    return;
}

 
