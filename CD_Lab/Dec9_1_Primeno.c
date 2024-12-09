#include <stdio.h>
int main(){
	int i=1, n , count=0;
	printf("Ënter the value of n: ");
	scanf("%d",&n);
	while (i<n){
		if (n/i==0){
			count++;
		}
		i++;
	}
	if (count==2){
		printf("Prime.");
	}
	else{
		printf("Not Prime");
	}
}