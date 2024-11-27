#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("enter any string");
	scanf("%s",&str);
	int n=strlen(str);
	printf("the reversed string is:");
	reverse(n,str);
	//printf("the reversed string is:%s",reverse(n,str));
}
void reverse(int n,char str[]){
	if(n==0){
		return;
	}
	printf("%c",str[n-1]);
	reverse(n-1,str);
}
