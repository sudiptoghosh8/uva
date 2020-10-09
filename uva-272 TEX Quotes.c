#include<stdio.h>
int main( )
{
 char c;
 long int n=0;
 while(scanf("%c", &c)== 1)
{
if(c == '"')
{
 n++;
if(n % 2 == 1)
    {
printf("``");
   }
else if(n % 2 == 0)
{
    printf("''");
}
}
else
{
   printf("%c", c);
}
 }
return 0;
}
