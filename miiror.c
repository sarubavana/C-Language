#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j;
	    scanf("%d",&n);
	    int a[n],max=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        int count=0;
	        for(j=0;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                count++;
	            }
	        }
	        if(count>=max)
	            max=count;
	     }
	    printf("%d\n",n-max);
	}
	return 0;

}
