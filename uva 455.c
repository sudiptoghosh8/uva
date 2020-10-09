#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum=0, len;
    char s[81];
    //printf("give string\n");
    printf("test case\n");
    //printf(" %d \n\n",len);
    scanf("%d",&n);
    for(i=1; i<=n; i++)
{
        gets(s);
        len = strlen(s);
            for(i=0; i<len; i++)
            {

                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))

            {
                printf(" %c\n ",s[i]);

                printf(" %d \n",s[i]);

            }
     }
}

    printf("\n");
    return 0;





}
