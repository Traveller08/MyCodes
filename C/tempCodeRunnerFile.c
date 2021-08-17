#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{ int sum=0,a[10],j,k;
		for(j=0;j<10;j++)
		{
			scanf("%d",&a[j]);
		}
		scanf("%d",&k);
		for(j=9;j>=0;j--)
		{
			sum=sum+a[j];
			if(sum==k){
                j--;
			
                while (a[j]==0)
            {
                j--;
            }
            
				printf("%d\n",j+1);
				break;
			
            }
            else{
                printf("%d\n",j+1);
            }
		}
	}
	return 0;
}