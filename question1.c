#include<stdio.h>
int print(int arr[], int size)

{
	if(size==0)
	{
		return 0;
	}
	else
	{
		print(arr,size-1);
	    printf("%d ",arr[size-1]);
	    
	}
	
}
int main()
{
	int arr[]={1,22,64,25,86,14,98,9};
	int a=(sizeof(arr)/4);
	print(arr,a);
}