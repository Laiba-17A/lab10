#include<stdio.h>
struct travelpackages{
	char package_name[20];
	char destination[20];
	int duration;
	float cost;
	int no_ofseats;
};

// function to display packages
void display_packages(struct travelpackages packages[])
    	{
    		int i;
			for(i=0;i<5;i++)
			{
				printf("\n%d:\n",i+1);
				printf("%s\n",packages[i].package_name);
				printf("%s\n",packages[i].destination);
				printf("%d days\n",packages[i].duration);
				printf("Rs.%.2f\n",packages[i].cost);
				printf("%d seats available\n",packages[i].no_ofseats);
			}
     	}
     	
//function to book a package   	
void book_a_package(struct travelpackages packages[])
{
	int ch,n;
	printf("enter no of package you want to book: ");
	scanf("%d",&ch);
	if(ch<1 || ch>5)
	{
		printf("invalid choice");
		return;
	}
	printf("enter no of seats you want to book: ");
	scanf("%d",&n);
	if(packages[ch-1].no_ofseats<n)
	{
		printf("not enough seats, only %d seats available for this package",packages[ch-1].no_ofseats);
	}
	else
	{
		packages[ch-1].no_ofseats-=n;
		printf("booking successful! %d seats booked for %s",n,packages[ch-1].package_name);
	}
}

int main()
{
	int choice;
	struct travelpackages tpackage[5]={
        {"Family Escape", "Singapore", 6,2000, 5},
        {"Ocean Breeze", "Thailand", 10,1200, 15},
        {"Mountain Quest", "Scotland",7,1500, 10},
        {"Disney Dreams Getaway", "Honk Kong",10,2200, 12},
        {"Holiday Bliss", "Switzerland", 8, 2000,9}
    };
    printf("select one of the following\n");
	printf("1: To see all packages\n2: To book a package: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			display_packages(tpackage);
			break;
		case 2:
			book_a_package(tpackage);
			break;
			
			
	}
}