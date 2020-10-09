#include<stdio.h>
#include<string.h>
int main()
{
    char line[10000],test[10000],x;
    int len,i,j,l,k,p;
   while(gets(line))
   {
     
        if(line[0]=='D'&&line[1]=='O'&&line[2]=='N'&&line[3]=='E') 
        {
      printf("You won't be eaten!\n");
     break;
       	}
        l= strlen(line);
        j=0;
     p=0;
        for(i=0;i<l;i++)
        {
           if((line[i]>= 65 && line[i]<=90) || (line[i]>= 97 && line[i]<=122))
              {
                  if(line[i]>= 65 && line[i]<=90)
                  {
                      line[i]+=32;
                  }  
                  test[j]=line[i];
                  j++; 
              }
        }
       
 test[j]= '\0';
l=j;
for(i=0,j=l-1;i<l/2,j>=l/2;i++,j--)
{
if(test[i]!=test[j])
{
	printf("You won't be eaten!\n");
 
p=1;
break;
}
else
{
printf("Uh oh..\n");
	break;
	}
}





}

return 0;
}






















   /* while(gets(line))
    {
        if(line[0]=='D'&&line[1]=='O'&&line[2]=='N'&&line[3]=='E')
            break;
        len=strlen(line);
        j=0;
        p=0;
        for(i=0; i<len; i++)
        {
            x=tolower(line[i]);
            if(x>='a' && x<='z')
            {
                test[j++]=x;
            }
        }
        test[j]='\0';
        l=j;

        for(i=0,j=l-1; i<l/2,j>=l/2; i++,j--)
        {
            if(test[i]!=test[j])
            {
                p=1;
                break;
            }
        }

        if(p!=0)
        {
            printf("Uh oh..\n");
        }
        else
        {
            printf("You won't be eaten!\n");
        }

        return 0;
    } */
