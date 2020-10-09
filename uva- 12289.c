#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,i;
    char s[1000];
    scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%s",&s[i]);
        }
            switch (s[i])
            {
            case'one':
                {
                    printf("1");
                break;
                }


                case'two':
                    {
                       printf("2");
                break;
                    }

                case 'three':
                    {
                        printf("3");
                break;
                    }

                case 'four':
                    {
                      printf("4");
                break;
                    }

                case 'five':
                    {
                       printf("5");
                break;
                    }

                case 'six':
                    {
                    printf("6");
                break;
                    }

                case 'seven':
                    {
                   printf("7");
                break;
                    }

                case 'eight':
                    {
                         printf("8");
                break;
                    }

                case 'nine':
                    {
                      printf("9");
                break;
                    }

                case 'ten':
                    {
                     printf("10");
                break;
                    }
                default :
                    break;
            }


    return 0;
}
