#include<Stdio.h>
int main()
{
	int i,j,n,count=0;
			for(j=1;j<=100;j++)
		{
			for(i=1;i<=100;i++)
        	{
			if(n%j==0)
			count++;
		    }
			if(count==2)
	        printf("%d",j);
        }
	return 0;
}
