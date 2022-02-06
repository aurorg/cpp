#include<stdio.h>
int main() {
  long int m;//学妹的数量和教官喊的数量
 scanf("%ld", &m);
 
  long int i;

 for (i = 1; i*i <= m; i++) {
  printf("%ld ",i*i);
  }
 return 0;
}