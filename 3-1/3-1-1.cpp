#include<iostream>
using namespace std;
class Student{
	private :
	int stu_id;
	string stu_name;
	int stu_age;
	string stu_course;
	string stu_city;
	string stu_email;
	string stu_college;
	
	public :
	
	void setdata(int stu_id,string stu_name,int stu_age,string stu_course,string stu_city,string stu_email,string stu_college)
	{
		this->stu_id=stu_id;
		this->stu_name=stu_name;
		this->stu_age=stu_age;
		this->stu_course=stu_course;
		this->stu_city=stu_city;
		this->stu_email=stu_email;
		this->stu_college=stu_college;
	}
	void getdata()
	{
		cout<<"\n----------------------\n";
		cout<<"Stu_id : "<<stu_id<<endl;
		cout<<"Stu_name : "<<stu_name<<endl;
		cout<<"Stu_age : "<<stu_age<<endl;
		cout<<"Stu_course : "<<stu_course<<endl;
		cout<<"Stu_city : "<<stu_city<<endl;
		cout<<"Stu_email : "<<stu_email<<endl;
		cout<<"Stu_college : "<<stu_college<<endl;
		cout<<"\n----------------------\n";
	}
	
};
int main()
{
	Student s1,s2,s3,s4,s5;
	s1.setdata(1,"Rinkal",20,"Flutter","Surat","rinkal@gmail.com","R.V.PATEL");
	s2.setdata(2,"Krina",21,"MBA","Mumbai","krina@gmail.com","KP");
	s3.setdata(3,"Keshvi",18,"Fullstack","Surat","keshvi@gmail.com","KP");
	s4.setdata(4,"Harsh",22,"CA","Navsari","harsh@gmail.com","VWC");
	s5.setdata(5,"Krisha",20,"Flutter","Surat","krisha@gmail.com","SPB");
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	

}

