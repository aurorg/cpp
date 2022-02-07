#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
    const char *mytalents[LIM]={
        "Adding numbers swiftly",
        "Multiplying accurately","Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    char yourtalents[LIM][SLEN]={
        "Walking in a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"
    };
    int i;
    puts("Let's comparee talents.");
    printf("%-50s %-25s\n","mytalents","yourtalents");
    for(i=0;i<LIM;i++)
       printf("%-50s %-25s\n",mytalents[i],yourtalents[i]);
    printf("\nsizeof mytalents:%zd,sizeof yourtalents:%zd\n",sizeof(mytalents),sizeof(yourtalents));
    return 0;
}