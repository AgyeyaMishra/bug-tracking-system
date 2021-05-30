//C++ program for the drive function of the bug tracking system
#include <iostream>

using namespace std;

//Driver code
int main()
{

    //this is our loop counter
    int i = 1; 
    
    //bug id initialised to 0
    int ID = 0;
    
    //the variable that will hold user's input choice
    int choice;
    
    cout<<"Bug Tracking System : ";
    
    //while loop to run 
    while(i != 0)
    {
        cout<<"1. File a new bug."<<endl<<"2. Change the status of the bug."<<endl<<"3. Get bug report."<<endl<<"4. Exit.";
        cout<<endl<<endl;
        cout<<"Enter your choice (any number from 1 to 4) : ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: ID++;
                    //creating a new bug
                    filebug(ID);
                    break;
                    
            case 2: //changing the status of the bug
                    changestatus();
                    break;
            
            case 3: //report the bug
                    report();
                    break;
            
            case 4: i = 0;
                    break;
            
            default: cout<<"Wrong choice entered."
                     break;
        }
        
    }
    
    return 0;
}
