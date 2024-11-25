#include <stdio.h>
#define max_temp 60

void check_temperature(int temp) {
    static int count = 0; //tells how many times limit is exceeded

    if (temp > max_temp) {
        count++;  
        printf("Warning: Temperature of %d°C exceeds the maximum limit!\n", temp);
        printf("limit is exceeded %d time(s).\n", count);
    } else {
        printf("Temperature of %d°C is within the limit\n", temp);
    }
    
}

int main() {
    int temp;
    char check;
    printf("enter tempreature");
    scanf("%d",&temp);
    check_temperature(temp);
    printf("enter 'e' to exit the program or enter any key to continue");
    getchar();
    scanf("%c", &check);
    if(check=='E' || check=='e'){
    	return 0;
	}
	else{
	    while(check != 'e' && check != 'E'){
	    	printf("enter tempreature");
            scanf("%d",&temp);
            check_temperature(temp);
            printf("enter 'e' to exit the program or enter any key to continue");
            getchar();
            scanf("%c", &check);
	    }

    return 0;
   }
}
