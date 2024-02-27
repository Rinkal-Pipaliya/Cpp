#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
    void setName(string& empName) {
        name = empName;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    void setDesignation(string& empDesignation) {
        designation = empDesignation;
    }

    string& getName(){
        return name;
    }

    double getSalary(){
        return salary;
    }

    string& getDesignation(){
        return designation;
    }
};

int main() {
    
    Employee emp;

    emp.setName("John Doe");
    emp.setSalary(50000.0);
    emp.setDesignation("Software Engineer");

    string empName = emp.getName();
    double empSalary = emp.getSalary();
    string empDesignation = emp.getDesignation();

    cout << "Employee Name: " << empName << endl;
    cout << "Salary: $" << empSalary << endl;
    cout << "Designation: " << empDesignation <<endl;

    return 0;
}

