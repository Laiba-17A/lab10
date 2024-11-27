#include<stdio.h>
int main(){
	int n;
	printf("enter any number");
	scanf("%d",&n);
	printf("the sum is:%d",sum(n));
}
int sum(int n){
	int x,a;
	if(n==0){
		return 0;
	}
	return n%10 + sum(n/10);
}
