#include <stdio.h>

void printMaxActivities(int s[], int f[], int n)
{
	int i, j;
	i = 0;
	printf("%d ", i);
	for (j = 1; j < n; j++) {

		if (s[j] >= f[i]) {
			printf("%d ", j);
			i = j;
		}
	}
}

int main()
{
    int n;
    scanf("%d",&n);
	int s[n];
	int f[n];
	for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        scanf("%d",&f[i]);
    }
	printMaxActivities(s, f, n);
	return 0;
}
