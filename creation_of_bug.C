// C program for filing a bug in Bug Tracking System

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to file the Bug into the Bug Tracking System
void filebug(int ID)
{
	printf("**********");
	printf("Filing a Bug");
	printf("***********\n");

	// Current Time
	time_t CurrentTime;
	time(&CurrentTime);

	char Name[20], bugType[50];
	char bugDescription[1000];
	char bugPriority[30];
	int bugStatus;

	FILE* ptr;

	// User name
	printf("Enter your name : ");
	scanf("%s", name);
	printf("\n");
	
	char IDS[10];
	itoa(ID, IDS, 10);
	
	strcat(Name, IDS);
	char ex[] = ".txt";
	
	strcat(Name, ex);

	// Filename of the Bug
	printf("Filename : %s \n", Name);
	ptr = fopen(Name, "w");

	// Case when file cannot be created
	if (ptr == NULL)
		printf("File cannot be created. \n");

	fprintf(ptr, "Date and Time : %s", ctime(&CurrentTime));

	// ID in the Text File
	fprintf(ptr, "Bug ID : %d \n", ID);

	// Adding New Line in Text File
	fprintf(ptr, "\n");

	// Bug ID
	printf("Bug ID : %d \n", ID);

	fprintf(ptr, "Bug Filed by : %s \n", Name);
	fprintf(ptr, "\n");

	printf("Enter bug type : \n");
	scanf(" %[^\n]", bugtype);

	// Bug Type
	fprintf(ptr, "Type of Bug: %s", bugType);
	fprintf(ptr, "\n");

	// Bug Priority
	printf("Enter bug priority : \n");
	scanf(" %[^\n]s", bugPriority);

	fprintf(ptr, "Bug Priority : %s \n", bugPriority);
	fprintf(ptr, "\n");

	// Bug Description
	printf("Enter the bug description : \n");
	scanf(" %[^\n]s", bugDescription);

	fprintf(ptr, "Bug Description : %s\n", bugDescription);
	fprintf(ptr, "\n");

	printf("Status of bug : \n");
	printf("1. Not yet assigned. \n");
	printf("2. In process. \n");
	printf("3. Fixed. \n");
	printf("4. Delivered. \n");
	printf("Enter your choice : ");

	int j;
	scanf("%d", &j);

	// Date and time of bug creation
	fprintf(ptr, "Date and Time : %s", ctime(&CurrentTime));

	fprintf(ptr, "Bug Status :");

	// Using the switch function to find the status of the bug
	switch (j) 
	{
	    case 1: fprintf(ptr, "Not yet Assignned. \n");
		        break;
		
		case 2: fprintf(ptr, "In process. \n");
		        break;
		
		case 3: fprintf(ptr, "Fixed. \n");
		        break;
	
	    case 4: fprintf(ptr, "Delivered. \n");
		        break;
	
	    default: printf("Wrong choice entered. \n");
		         break;
	}

	fclose(ptr);
}
