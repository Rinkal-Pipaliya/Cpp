#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Distance
{
	int km;
	int meter;

public:
	void set_data()
	{
		cout<<"enter km: ";
		cin>>km;
		cout<<"enter meter: ";
		cin>>meter;
	}
	Distance operator+(Distance x)
	{
		Distance t;

		t.km = km + x.km;
		t.meter = meter + x.meter;

		while(t.meter>=1000)
		{
		t.km = t.km + 1;
		t.meter = t.meter - 1000;
		}
		
		return t;
		}
		void getdata()
		{
		cout<<"km : "<<km<<endl
		<<"meter : "<<meter<<endl;
	}
};

int main()
{
	Distance d1,d2,d3;
	
	d1.set_data();
	d2.set_data();
	
	d3 = d1+ d2;
	
	d3.getdata();
}

