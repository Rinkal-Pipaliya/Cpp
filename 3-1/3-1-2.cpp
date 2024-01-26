#include<iostream>
using namespace std;
class Customer{
	private :
	int cust_id;
	string cust_name;
	int cust_age;
	string cust_city;
	string cust_mobile_number;
	int cust_simcard_validity;
	string cust_telecom_brand_name;
	
	public :
		void setdata(int cust_id,string cust_name,int cust_age,string cust_city,string cust_mobile_number,int cust_simcard_validity,string cust_telecom_brand_name)
		{
			this->cust_id=cust_id;
			this->cust_name=cust_name;
			this->cust_age=cust_age;
			this->cust_city=cust_city;
			this->cust_mobile_number=cust_mobile_number;
			this->cust_simcard_validity=cust_simcard_validity;
			this->cust_telecom_brand_name=cust_telecom_brand_name;
	
		}
		void getdata()
		{
			cout<<"\n----------------------\n";
			cout<<"Cust_id:"<<cust_id<<endl;
			cout<<"Cust_name:"<<cust_name<<endl;
			cout<<"Cust_age:"<<cust_age<<endl;
			cout<<"Cust_city:"<<cust_city<<endl;
			cout<<"Cust_mobile_number:"<<cust_mobile_number<<endl;
			cout<<"Cust_simcard_validity:"<<cust_simcard_validity<<endl;
			cout<<"Cust_telecom_brand_name:"<<cust_telecom_brand_name;
			cout<<"\n----------------------\n";
		}
	
};
int main()
{
	Customer c1,c2,c3,c4,c5;
	
	c1.setdata(1,"Veera",20,"Surat","9151453265",4,"Airtel");
	c2.setdata(2,"Krisha",21,"Surat","7894561235",2,"Jio");
	c3.setdata(3,"Nency",24,"Surat","333654892",3,"VI");
	c4.setdata(4,"Jay",19,"Surat","3571594682",5,"MTNL");
	c5.setdata(5,"Vidhi",18,"Anad","3526147896",3,"BSNL");
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
}
