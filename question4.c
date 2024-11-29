#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct car{
	char make[20];
	char model[20];
	int year;
	int mileage;
	
};

int main()
{
	int i=0,end=0,x,choice,choice2;
	char make_[20];
	char model_[20];
	struct car cars[10];
	while(end==0){
	printf("slect one of the following: \n");
	printf("1: To add a new car\n2: To display list of available cars\n3: To search for cars by make or model\n4: To exit: ");
	scanf("%d",&choice);
	getchar();
	switch (choice)
	{
		case 1:	
			printf("enter make of car: ");
			fgets(cars[i].make,20,stdin);
			cars[i].make[strcspn(cars[i].make,"\n")]='\0';
			printf("enter model of car: ");
			fgets(cars[i].model,20,stdin);
			cars[i].model[strcspn(cars[i].model,"\n")]='\0';
			printf("enter year of car: ");
			scanf("%d",&cars[i].year);
			printf("enter mileage of car: ");
			scanf("%d",&cars[i].mileage);
			i=i+1;
			break;
		case 2:
			for(x=0;x<i;x++)
			{
				printf("car no.%d\n",x+1);
				printf("make: %s\n",cars[x].make);
		        printf("model: %s\n",cars[x].model);
		        printf("year: %d\n",cars[x].year);
		        printf("mileage: %d\n\n",cars[x].mileage);    
			}
			break;
		case 3:
			printf("enter 1 to search for cars by make\nenter 2 to search for cars by model:");
			scanf("%d",&choice2);
			getchar();
			if(choice2==1)
			{
				printf("enter make:");
				fgets(make_,20,stdin);
				make_[strcspn(model_,"\n")]='\0';
				for(x=0;x<i;x++)
				{
					if(!(strcmp(cars[x].make,make_)))
					{
						printf("car no.%d\n",x+1);
						printf("make: %s\n",cars[x].make);
		                printf("model: %s\n",cars[x].model);
		                printf("year: %d\n",cars[x].year);
		                printf("mileage: %d\n\n",cars[x].mileage); 
					}
				}
				
			}
			else if(choice2==2)
			{
				printf("enter model:");
				fgets(model_,20,stdin);
				model_[strcspn(model_,"\n")]='\0';
				for(x=0;x<i;x++)
				{
					if(!(strcmp(cars[x].model,model_)))
					{
						printf("car no.%d\n",x+1);
						printf("make: %s\n",cars[x].make);
		                printf("model: %s\n",cars[x].model);
		                printf("year: %d\n",cars[x].year);
		                printf("mileage: %d\n\n",cars[x].mileage); 
					}
				}
				
			}
			else
			{
				printf("invalid choice");
			}
			break;
		case 4:
			end=1;
			break;
		default:
			printf("invalid choice, try again");
			
			
			
			
	}
}
	
	
}