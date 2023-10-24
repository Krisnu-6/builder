#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	private :
	        int id;
	        char name[100];
	        int role;
	        char salary;
	        char address;
	    
	public :
		    setdata()
		    {
		    	id = e.id"id";
		    	name = e.name"name[100]";
		    	role = e.role"role";
		    	salary = e.salary"salary";
		    	address = e.address"address";
			}
			getdata()
			{
				cout<<"id = "<<id<<endl
				    <<"name = "<<name<<endl
				    <<"role = "<<role<<endl
				    <<"salary = "<<salary<<endl
				    <<"address = "<<address<<endl
			}
};
main()
{
	Employee e;
	
	e.setdata();
	e.getdata();

}