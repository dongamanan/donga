#include<stdio.h>
#include<string.h>


#define MAX 100

struct student
{
	int roll;
	char name[50];
	float marks;
};
void addstudent(struct student students[],int *count);
void displaystudent(struct student students[],int count);
void searchstudent(struct student students[],int count,int roll);

int main()
{
	struct student students[MAX];
	int count=0;
	int choice,roll;
	
	while(1)
	{
		printf("\n------student management system------\n");
		printf("press-1.Add student\n");
		printf("press-2.Display all students\n");
		printf("press-3.Search by roll number\n");
		printf("press-4.Exit\n\n\n");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		if(choice==4)
 		{
 		   printf("Exiting the program.");	
 		   break;
		}
	
		
		switch(choice)
		{
			case 1:
			{
				addstudent(students,&count);
				break;
			}
			case 2:
			{
				displaystudent(students,count);
				break;
			}
			case 3:
			{
				printf("Search by roll number:");
				scanf("%d",&roll);
				break;
			}
			case 4:
			{
				printf("Exit the program.");
				break;
				
			}
			default:
			{
				printf("Invalid choice.Try again\n");
				break;
			}
		    
	    } 
	    
    }
   
}
 void addstudent(struct student students[],int *count)
{
	if(*count>=MAX)
	{
		printf("student limit reached.\n");
	}
	printf("Enter Roll number:");
	scanf("%d",&students[*count].roll);
				
	printf("Enter Name:");
	scanf("%s",students[*count].name);
				
	printf("Enter Marks:");
	scanf("%f",&students[*count].marks);
				
	(*count)++;
	printf("student added success fully.");
}
 void displaystudent(struct student students[],int count)
{
	printf("\n------student list------\n");
				
	for(int i=0;i<count;i++)
	{
		printf("Roll No:%d,Name:%s,marks:%2.f\n",students[i].roll,students[i].name,students[i].marks);
	}
}
 void searchstudent(struct student students[],int count,int roll)
{
	for(int i=0;i<count;i++)
	{
		if(students[i].roll==roll)
		{
			printf("student Found:\n");
			printf("Roll No:%d,Name:%s,marks:%2.f\n",students[i].roll,students[i].name,students[i].marks);
		}
	}
	printf("student with Roll No %d not found.",roll);

}
				
			
    
    