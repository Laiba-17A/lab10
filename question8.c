#include <stdio.h>


int linearSearch(int arr[],int value,int size,int index) {
    if (index >= size) {
        return -1;  // value not found 
    }

    if (arr[index] == value) {
        return index+1;  // value found
    }

    // Recursive call to search in the next index
    return linearSearch(arr,value,size, index + 1);
}

int main() {
	int size,value,index=0;
	printf("enter size of array");
	scanf("%d",&size);
    int arr[size];
    int i;
    for(i=0;i<size;i++){
    	printf("enter element %d ",i+1);
    	scanf("%d",&arr[i]);
	}
    printf("enter value to search");
    scanf("%d", &value);
    int flag = linearSearch(arr,value,size,index);

    if (flag != -1) {
        printf("Element %d found at index %d.\n", value,flag);
    } else {
        printf("Element %d not found in the array.\n",value);
    }

    return 0;
}
