#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	int s=0;
	
	printf("Input n= ");
	scanf("%d",& n);
	for(i=n;i<=n;i++){
		s=s+i;
		if(i<n){
			printf("%d+",i);
	}
	else{
		printf("%d= ",i);
	}
	
	printf("%d",s);
	}
}
