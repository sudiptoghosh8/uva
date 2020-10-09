#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len;
    char message[100],c;
    while(scanf("%d",&t)==1)
    {
        getchar();
        for(i=1;i<=t;i++)
        {
            while(gets(message))
            {
                len=strlen(message);
                if (len==0)
                    break ;
                for(j=0;message[j]!='\0';j++)
                {
                    if(message[j]=='0')
                        printf("O");
                    else if(message[j]=='1')
                        printf("I");
                    else if(message[j]=='2')
                        printf("Z");
                    else if(message[j]=='3')
                        printf("E");
                    else if(message[j]=='4')
                        printf("A");
                    else if(message[j]=='5')
                        printf("S");
                    else if(message[j]=='6')
                        printf("G");
                    else if(message[j]=='7')
                        printf("T");
                    else if(message[j]=='8')
                        printf("B");
                    else if(message[j]=='9')
                        printf("P");
                    else
                        printf("%c",message[j]);
                    }
                printf("\n");
                memset(message,'\0',sizeof(message));
            }
            if(i!=t)
                printf("\n");
        }

    }
    return 0;
}
