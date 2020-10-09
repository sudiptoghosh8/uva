#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ch[100];
    int len,i,j=0;
    while(gets(ch))
    {
       j++;
      if(strlen(ch)==4)
      {
          printf("Case %d: Hajj-e-Akbar\n",j);
      }
      else if(strlen(ch)==5)
      {
          printf("Case %d: Hajj-e-Asghar\n",j);
      }
      else if(ch[0]=='*')
          break;


}
return 0;
}
