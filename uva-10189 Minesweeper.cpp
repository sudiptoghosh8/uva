#include<bits/stdc++.h>
using namespace std;
char ch[122][122];
int main()
{
    int s,c,i,j,x,y,sum,a=1;
    while(scanf("%d %d",&s,&c)==2)
    {
getchar();
if(s==0&&c==0)
{break;}
  for(i=1;i<=s;i++)
  {
 for(j=1;j<=c;j++)
{
scanf("%c",&ch[i][j]);
}
  getchar();
 }
if(a>1)
printf("\n");
printf("Field #%d:\n",a);
a++;
for(i=1;i<=s;i++)
        {
            for(j=1;j<=c;j++)
            {
          sum=0;
         x=i;
         y=j;
         if(ch[i][j]=='*')
         {
             printf("*");
             continue;
         }
         if(x-1>=1&&y-1>=1&&ch[x-1][y-1]=='*' )
         {
            sum++;
         }
         if(x-1>=1&&ch[x-1][y]=='*')
         {
             sum++;
         }
         if(x-1>=1&&y+1<=c&&ch[x-1][y+1]=='*')
         {
             sum ++;
         }
         if(y-1>=1&&ch[x][y-1]=='*')
         {
             sum++;
         }
         if(y+1<=c&&ch[x][y+1]=='*')
         {
             sum++;
         }
         if(x+1<=s&&y-1>=1&&ch[x+1][y-1]=='*')
         {
             sum++;
         }
         if(x+1<=s&&ch[x+1][y]=='*')
         {
             sum++;
         }
         if(x+1<=s&&y+1<=c&&ch[x+1][y+1]=='*')
         {
             sum++;

         }

printf("%d",sum);

   }

   printf("\n");
        }

    }

        return 0;
}
