#include<stdio.h>
int main()
{
    long int t,n,i,s,j,r;
    scanf("%ld",&t);
     s=0;
     i=1;
    while(i<=t)
    {
        scanf("%ld",&n);
        j=2;
while(j<t)
{

    if(n%2==0)
    {

          s=s+j;
    }

else
    {

   s=s+j;

}
j++;
}
printf("%ld\n",s);
 i++;
   }

    return 0;
}
