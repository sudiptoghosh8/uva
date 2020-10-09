/*
Process:

For each test case, output the answer to the following skill testing question on a line by itself:
here we use this mathod  “Multiply n by 567, then divide the result by 9, then add 7492, then multiply by 235, then divide by 47, then subtract 498.

What is the digit in the tens column?”
 =>
To get the digit in the tens column of a number,means "n" divide by 10 and use mod 10.
For example, to get the tens digit of 257:
257 / 10 = 25
25 % 10 = 5.
*/
#include<stdio.h>
#include<math.h>
int main()
{
int t;
long int i,n,a,b,c,d;
scanf("%d",&t);
i=1;
while(i<=t)
{
scanf("%ld",&n);
c=((n*567)/9);
a=c+7492;
b=(a*235)/47;
d=b-498;
d=d/10;
d=d%10;
d=abs(d);
i++;
printf("%ld\n",d);
}

return 0;
}
