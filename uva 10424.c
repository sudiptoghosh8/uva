#include<stdio.h>
#include <string.h>
int main()
{
 char a[30], b[30];
 int i, j, add1,add2, value, dif;
 float result, sum2,sum1;
  while(gets(a))
  {
    gets(b);
    add1=0;  sum1=0; sum2=0;
for(i=0;i<strlen(a);i++)
 {
  if(a[i]>='A' && a[i]<='Z')
  {
  	value = a[i] - 64;
  	}
 else if(a[i]>='a' && a[i]<='z')
  {
  	value = a[i] - 96;
  	}
   else
    {
    	value=0;
    	}
 add1 = add1+value;
 }
 while(add1!=0)
  {
   sum1=0;
  while(add1!=0)
 {
  dif = add1%10;
  add1 = add1/10;
 sum1 = sum1+dif;
  }
 if(sum1>9)
  add1= sum1;
 }
 add2 = 0;
 for(i=0;i<strlen(b);i++)
   {
 if(b[i]>='A' && b[i]<='Z')
  {value = b[i] - 64;}
   else if(b[i]>='a' && b[i]<='z')
 {
 	value = b[i] - 96;
 	}
 else
{
value=0;
}
 add2 = add2+value;
 }
 while(add2!=0)
 {
 sum2=0;
 while(add2!=0)
 {
   dif = add2%10;
   add2=add2/10;
   sum2 = sum2+dif;
 }
if(sum2>9)
 add2=sum2;
}
 if(sum1>sum2)
 {
 result = (sum2*100)/sum1;
 }
 else
 {
 result = (sum1*100)/sum2;
 }
 printf("%0.2lf %%\n",result);
 }
return 0;
}
