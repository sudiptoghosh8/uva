#include<iostream>
using namespace std;
int n, N;
double sum, a0, an_1, c;
int main()
{
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &N);
        scanf("%lf%lf", &a0, &an_1);
        sum = N * a0 + an_1;
        for(int i=0; i<N; i++)
        {
            scanf("%lf", &c);
            sum -= 2 * (N-i) * c;
        }
        sum /= N+1;
        printf("%.2lf\n", sum);
        if (n)
            printf("\n");
    }
    return 0;
}
