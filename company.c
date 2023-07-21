#include<stdio.h>
int main()
{
    int n,i,j,N;
    scanf("%d",&N);
    int h1[i],h2[j],h3[n];
    scanf("%d%d%d",&h1,&h2,&h3);
    int costs1[i],costs2[j],costs3[n];
    if(N==0)
    {
        h1[0][2][3] = costs1[0][0][0];
        h2[0][1][2] = costs2[0][1][2];
        h3[0][2][2] = costs3[0][2][3];
    }

	 for (int i = 1; i < N; i++)
     {
       b[i][0] = min b[i - 1][1],
					b[i - 1][2])
				+ costs[i][0];

       b[i][1]= min[i-1][1],b[i-2][3]+costs[i][2];
       b[i][2]= min b[i-1][2],b[i-2][2]+costs[i][3];
     }
       int sum;
     {
         h1=h2=h3=sum;
         if(h1[0]==h1[3]&& h2[0]==h2[1] && h3[0!=1])
     }
     else
     {
         printf("%d",sum);
     }
}
