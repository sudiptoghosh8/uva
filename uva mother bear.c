#include<stdio.h>

#include<string.h>

int main()
{
char line[10000],test[10000],x;
int len,i,j,l,k,p;
while(gets(line))
	j=0;
 {
  if(line[0]=='D'&&line[1]=='O'&&line[2]=='N'&&line[3]=='E')
       { break ;}  
 for(i=0; i<strlen(line); i++)
 {
 if((line[i]>= A && line[i]<= Z) || (line[i]>= a && line[i]<= z))
 	  {
    
 	   line[i]+= 32;                             
    
      test[j]=line[i];
}
    test[j]='\0';
           l=j;
        if (test[i]!=test[j])
             p=1;
           break;
   }   
         if (p!=0)
      printf("Uh oh..\n");
          else
      printf("You won't be eaten!\n");              
        
           
    }
} 
}
return 0;
 
}   

 