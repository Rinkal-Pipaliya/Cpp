#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:

    Employee() : salary(0.0) {}

    Employee(string& empName, double empSalary, string& empDesignation)
        : name(empName), salary(empSalary), designation(empDesignation) {}

    string& getName()  {
        return name;
    }

    double getSalary()  {
        return salary;
    }

	string& getDesignation() {
        return designation;
    }
    Employee operator+( Employee& other)  {
        Employee result;
        result.salary = this->salary + other.salary;
        return result;
    }
};

int main() {
    Employee emp1("Rahul", 50000.0, "Software Engineer");
    Employee emp2("Smith", 60000.0, "Project Manager");

    Employee totalSalary = emp1 + emp2;

    
    cout << "Employee 1 - Name: " << emp1.getName() << ", Salary: $" << emp1.getSalary() << endl;
    cout << "Employee 2 - Name: " << emp2.getName() << ", Salary: $" << emp2.getSalary() << endl;

    cout << "Total Salary: $" << totalSalary.getSalary() << endl;
}

