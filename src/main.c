// C program for the Bug Tracking System

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to file the Bug into the Bug Tracking System
void filebug(int ID)
{
	printf("**********");
	printf("FILING A BUG");
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
	scanf("%s", Name);
	
	char IDS[10];
	itoa(ID, IDS, 10);
	strcat(Name, IDS);
	char ex[] = ".txt";
	strcat(Name, ex);

	// Filename of the Bug
	printf("Filename : %s\n", Name);
	ptr = fopen(Name, "w");

	// Case when file cannot be created
	if (ptr == NULL)
		printf("File cannot be created. \n");

	fprintf(ptr, "Date and Time : %s",
			ctime(&CurrentTime));

	// ID in the Text File
	fprintf(ptr, "Bug ID : %d\n", ID);

	// Adding New Line in Text File
	fprintf(ptr, "\n");

	// Bug ID
	printf("Bug ID : %d\n", ID);

	fprintf(ptr, "Bug Filed by : %s\n", Name);
	fprintf(ptr, "\n");

	printf("Enter bug type : \n");
	scanf(" %[^\n]", bugType);

	// Bug Type
	fprintf(ptr, "Type of Bug : %s", bugType);
	fprintf(ptr, "\n");

	// Bug Priority
	printf("Enter bug priority : \n");
	scanf(" %[^\n]s", bugPriority);

	fprintf(ptr, "Bug Priority : %s\n", bugPriority);
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
	printf("\nEnter your choice : ");

	int j;
	scanf("%d", &j);

	// Date and time of bug creation
	fprintf(ptr, "Date and Time : %s", ctime(&CurrentTime));

	fprintf(ptr, "Bug Status : ");

	// Switching for the status of the bug
	switch (j) 
	{
	case 1: fprintf(ptr, "Not yet assigned. \n");
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

// Function to change the status of the bug
void changestatus()
{
	printf("*************");
	printf("Change status");
	printf("**************\n");

	// Current Time
	time_t CurrentTime;
	time(&CurrentTime);

	FILE* file;
	char Name[50];

	// Bug File name
	printf("Enter file name : \n");
	scanf("%s", Name);
	
	char ex[] = ".txt";
	strcat(Name, ex);

	// Opening the bug in append mode
	file = fopen(name, "a");

	printf("\n1. Not yet assigned. \n");
	printf("2. In process. \n");
	printf("3. Fixed. \n");
	printf("4. Delivered. \n");
	printf("\nEnter your choice : ");

	// Change the status
	int k;
	scanf("%d", &k);

	fprintf(file, "\n");
	fprintf(file, "Date and Time : %s", ctime(&CurrentTime));

	fprintf(file, "Bug status : ");

	// Changing the status on the basis of the user input
	switch (k) 
	{
	    case 1: fprintf(file, "Not yet assigned. \n");
	            break;
	    
	    case 2: fprintf(file, "In process. \n");
	        	break;
	        	
	    case 3: fprintf(file, "Fixed. \n");
	            break;
	
	    case 4: fprintf(file, "Delivered. \n");
		        break;
	
	    default: printf("invalid choice\n");
	             break;
	}
	fclose(file);
}

// Function to report the bug in the Bug Tracking System
void report()
{
	printf("**********");
	printf("REPORT");
	printf("**********\n");

	FILE* fp;
	char Name[50];

	// Asking the Filename to report the bug of the file
	printf("Enter file name : \n");
	scanf("%s", Name);
	
	char ex[] = ".txt";
	strcat(name, ex);

	// Opening the file into the read mode
	fp = fopen(name, "r");

	char ch;
	ch = getc(fp);

	// Character of the File
	while (ch != EOF) 
	{
		printf("%c", ch);
		ch = getc(fp);
	}

	fclose(fp);
	getch();
}

// Driver Code
void main()
{
	printf("***************");
	printf("BUG TRACKING SYSTEM");
	printf("***************\n");

	int number, i = 1;

	// Id initialised to 0
	int ID = 0;

	// while loop to run
	while (i != 0) {
		printf("\n1. File a new bug. \n");
		printf("2. Change the status of the bug. \n");
		printf("3. Get bug report. \n");
		printf*"4. Exit. \n");
		printf("\nEnter your choice : ");

		scanf("%d", &number);

		// Using switch to go case by case
		switch (number) 
		{
		    case 1: ID++;
        			// Creating a New Bug
        			filebug(ID);
        			break;
		    
		    case 2: // Change status of Bug
        			changestatus();
        			break;
		    
		    case 3: // Report the Bug
        			report();
        			break;
		    
		    case 4: i = 0;
		            break;
		
		    default: printf("\nWrong choice entered.");
		             break;
		}
	}
}
