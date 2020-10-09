#include <stdio.h>
int main()
{
    int n , i, a ,b;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d %d",&a ,&b);
        if((a-1)%(b-1)!=0)
        printf("cannot do this\n");
        else
        printf("%d\n",(a-1)/(b-1));
        i++;
    }
    return 0;
}
