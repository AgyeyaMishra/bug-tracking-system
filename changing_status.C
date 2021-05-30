// C program for changing status in Bug Tracking System

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
	printf("Enter your choice : ");

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
