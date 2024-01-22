#include<iostream>
using namespace std;

class Employee{
	public:
		//Attributes
		int emp_id;
	    string emp_name;
		int emp_age;
		string emp_role;
		double emp_salary;
		string emp_city;
		int emp_exprience;
		string emp_company_name;
		
		// display to employe details
		void displayDetils(){
			
			cout << "Employee ID:"<< emp_id<<endl;
			cout << "Employee NAME:"<< emp_name<<endl;
			cout << "Employee AGE:"<< emp_age<<endl;
			cout << "Employee ROLE:"<< emp_role<<endl;
			cout << "Employee SALARY:"<< emp_salary<<endl;
			cout << "Employee CITY:"<< emp_city<<endl;
			cout << "Employee EXPRIENCE:"<< emp_exprience<<endl;
			cout << "Employee COMPANY NAME:"<< emp_company_name<<endl;
			cout<<"==========================\n";

		}				
};
int main(){
	//Creating object for 5 employee
	Employee emp1,emp2,emp3,emp4,emp5;
	
	//Setting Employee details

	emp1.emp_id = 101;
	emp1.emp_name = "Raj Doe";
	emp1.emp_age = 27;
	emp1.emp_role = "Software Engineer";
	emp1.emp_salary = 50000;
	emp1.emp_city = "New York";
	emp1.emp_exprience = 4;
	emp1.emp_company_name = "ABC Tech";
	
	emp2.emp_id = 102;
	emp2.emp_name = "Harsh Parekh";
	emp2.emp_age = 26;
	emp2.emp_role = "UI/UX Desiner";
	emp2.emp_salary = 60000;
	emp2.emp_city = "Laxdeep";
	emp2.emp_exprience = 5;
	emp2.emp_company_name = "XYZ Desiner";

	emp3.emp_id = 103;
	emp3.emp_name = "Nency Roy";
	emp3.emp_age = 30;
	emp3.emp_role = "Data Scientist";
	emp3.emp_salary = 100000;
	emp3.emp_city = "New York";
	emp3.emp_exprience = 5;
	emp3.emp_company_name = "LMN Solutions";

	emp4.emp_id = 104;
	emp4.emp_name = "Krisha Saliya";
	emp4.emp_age = 29;
	emp4.emp_role = "Flutter Devloper";
	emp4.emp_salary = 70000;
	emp4.emp_city = "Chicago";
	emp4.emp_exprience = 7;
	emp4.emp_company_name = "PQR Devlopers";

	emp5.emp_id = 105;
	emp5.emp_name = "Nensi Bahayani";
	emp5.emp_age = 30;
	emp5.emp_role = "Project Maneger";
	emp5.emp_salary = 90000;
	emp5.emp_city = "Mathura";
	emp5.emp_exprience = 9;
	emp5.emp_company_name = "LMN Solutions";

	//Display Employee details
	emp1.displayDetils();
	emp2.displayDetils();
	emp3.displayDetils();
	emp4.displayDetils();
	emp5.displayDetils();
	
	return 0;		
}
