#include <stdio.h>
#include <math.h>
int main(){
	int n,r,sum=0,count=0,x,y;
	printf("Ënter value: ");
	scanf("%d",&n);
	x=y=n;
	while(x!=0){
		x/=10;
		count++;
	}
	while(y!=0){
		r=y%10;
		sum+=pow(r,count);
		y/=10;
	}
	if(sum==n){
		printf("Armstrong.");
	}
	else{
		printf("Not Armstrong.");
	}
	return 0;
}