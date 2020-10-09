#include <stdio.h>
int main()
{
	long int f91,N;
	while (scanf("%ld",&N)==1)
{
	if(N==0)
break;
	else if(N>=101)
	{
	  f91=N-10;
	  printf("f91(%ld) = %ld\n",N,f91);
	}
	else if(N<=100)
	{
		printf("f91(%ld) = 91\n",N);	
	}
	
}
	return 0;
	
}
