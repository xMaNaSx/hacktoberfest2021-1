/*
Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet.
a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/ Mumbai/ Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above. If any of the condition not met then throw the exception. */

#include<iostream>
#include<cstring>
using namespace std;

class UserData
{
	int iAge,iIncome;
	char cCity[10], cVehicle;

	public:
		void Accept()
		{
			a: cout<<"\n\n Enter details ";
			cout<<"\n*******************\n";
			cout<<"\n\n Enter age: ";
			cin>>iAge;
			cout<<"\n\n Enter salary: ";
			cin>>iIncome;
			cout<<"\n\n Do you have a four wheeler: (y:yes, n:no)";
			cin>>cVehicle;
			cout<<"\n\n Enter City:";
			cin>>cCity;
                     try
		      {

				if(iAge<18 || iAge>55)
				throw 1;
			       	else if(iIncome<50000 || iIncome>100000)
				throw 2;
				else if(cVehicle=='n')
				throw 3;
				else if(strcmp(cCity,"Pune")==0||strcmp(cCity,"Mumbai")==0||strcmp(cCity,"Bangalore")==0||strcmp(cCity,"Chennai")==0)
				cout<<"entered city is correct";
				else
				throw 4;

	    	        }
		catch(int e)
			{
				switch(e)
				{
					case 1:
						cout<<"\n Exception Caught";
						cout<<"\n User has age between 18 and 55";
						goto a;

					break;
					case 2:
						cout<<"\n Exception Caught";
						cout<<"\nUser stays has income between Rs. 50,000 – Rs. 1,00,000 per month ";
						goto a;

					break;
					case 3:
						cout<<"\n Exception Caught";
						cout<<"\n User has 4-wheeler ";
						goto a;

					break;
					case 4:
						cout<<"\n Exception Caught";
						cout<<"\n User stays in Pune/ Mumbai/ Bangalore / Chennai";
						goto a;

					break;
				}
			}
	        }
		void display()
		{
			cout<<"\n\n All correct details are as follows:";
			cout<<"\n**************************************\n";
			cout<<"\nAge:    "<<iAge;
			cout<<"\nIncome: "<<iIncome;
			cout<<"\nCity:   "<<cCity;
			cout<<"\nVehicle:"<<cVehicle;
			cout<<"\n**************************************\n";
		}
};

int main()
{
UserData a;
a.Accept();
a.display();
return 0;
}

/*student@student-OptiPlex-3010:~$ g++ 123.cpp
student@student-OptiPlex-3010:~$ ./a.out


 Enter details
*******************


 Enter age: 15


 Enter salary: 20000


 Do you have a four wheeler: (y:yes, n:no)n


 Enter City:pune

 Exception Caught
 User has age between 18 and 55

 Enter details
*******************


 Enter age: 18


 Enter salary: 50000


 Do you have a four wheeler: (y:yes, n:no)y


 Enter City:Pune
entered city is correct

 All correct details are as follows:
**************************************

Age:    18
Income: 50000
City:   Pune
Vehicle:y
**************************************
student@student-OptiPlex-3010:~$
*/


