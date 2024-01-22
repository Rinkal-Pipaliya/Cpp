#include<iostream>
using namespace std;

class Car{
	public:
		//Attributes
		int car_id;
		string car_company_name;
	    string car_color;
		string car_model;
		int car_release_year;
		
		//display to Cars details
        void displayDetils(){
			
			cout << "CAR ID:"<<car_id<<endl;
			cout << "CAR COMPANY NAME:"<<car_company_name<<endl;
			cout << "CAR COLOR:"<< car_color<<endl;
			cout << "CAR MODEL:"<< car_model<<endl;
			cout << "CAR RELEASE YEAR:"<< car_release_year<<endl;
		    cout<<"==========================\n";

		}				
};
int main(){
	//Creating object for 4 Cars
	Car car1,car2,car3,car4;
	
	//Setting Car details

	car1.car_id = 101;
	car1.car_company_name = "Toyota";
	car1.car_color = "Black";
	car1.car_model = "Camry";
	car1.car_release_year = 2020;
	
	car2.car_id = 102;
	car2.car_company_name = "Honda";
	car2.car_color = "Blue";
	car2.car_model = "Civic";
	car2.car_release_year = 2019;
	
	car3.car_id = 103;
	car3.car_company_name ="Ford";
	car3.car_color = "Red";
	car3.car_model = "Fusion";
	car3.car_release_year = 2021;
	
	car4.car_id = 104;
	car4.car_company_name = "Chevrolet";
	car4.car_color = "White";
	car4.car_model = "Malibu";
	car4.car_release_year = 2022;
	
	
	//Display to cars details
	car1.displayDetils();
	car2.displayDetils();
	car3.displayDetils();
	car4.displayDetils();
	
	return 0;
}
