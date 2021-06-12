// C program for the driver function of the Bug Tracking System

#include <stdio.h>

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
