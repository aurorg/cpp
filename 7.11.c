#include<stdio.h>
#define Artichokes 2.05 //洋蓟
#define Sugarbeet 1.15  //甜菜
#define Carrots 1.09    //胡萝卜
void interface(void);
int main(void)
{
 char ch;
 int an, bn, cn, sn, n;
 float sum, count, other_count, cost, cost_vegtables;
 
 interface();
 
 while ((ch = getchar()) != 'q')
 {
  switch (ch)
  {
    case 'a':
    printf("How many pounds of artias do you want?\n");
    scanf("%f",&n);
    an += n;
    sn += n;
    sum += Artichokes * n;
    break;
   case 'b':
    printf("How many pounds of sugarbeet do you want?\n");
    scanf("%f",&n);
    bn += n;
    sn += n;
    sum += Sugarbeet * n;
    break;
   case 'c':
    printf("How many pounds of carrots do you want?\n");
    scanf("%f",&n);
    cn += n;
    sn += n;
    sum += Carrots * n;
    break;
   default:
    printf("Please input a or b or c (q to quit): \n");
  }
  printf("What else do you need?\n");
  getchar();
 }
 if (sum > 100)
  count = 0.05 * sum;
 else
  count = 0.0;
 if (sn <= 5)
  other_count = 6.5;
 else if (sn <= 20)
  other_count = 14;
 else
  other_count = 14 + (sn - 20) * 0.5;
 cost_vegtables = sum - count;
 cost = sum - count - other_count;
 
  
 printf("Artichokes: %.2f   Sugarbeet: %.2f   Carrots: %.2f\n",Artichokes,Sugarbeet,Carrots);
 printf("Weight: %.2f pounds  cost_vegtables: %.2f  Sum: %.2f \n",sn,cost_vegtables,sum);
 printf("discount: %.2f pounds Freight and packaging charges: %f\n",count,other_count);
 
 return 0;
} 
void interface(void)
{
 printf("*************************************\n");
 printf("Choose which vegtable you need: \n");
 printf("a) Artichokes   b) Sugarbeet\n");
 printf("c) Carrots      q) Quit\n");
 printf("*************************************\n");
}