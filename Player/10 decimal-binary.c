#include <stdio.h>

int main(void){
	int n,i=0,arr[10],rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		arr[i]=rem;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
	printf("%d",arr[j]);
	}
	return 0;
}
