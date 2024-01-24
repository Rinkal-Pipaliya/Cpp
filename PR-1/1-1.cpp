#include<iostream>
using namespace std;

class Distance{

	private:
		int feet;
		int inch;
		
	public:
		Distance():feet(0),inch(0) {}
		
	void radeDistance(){
		cout<<"Enter Feet:";
		cin>>feet;
		cout<<"Enter Inch:";
		cin>>inch;	
	}
	void displayDistance(){
		cout<<feet <<"feet"<<inch <<"inch";
	}
	void addDistance(const Distance & dist1,const Distance & dist2){
		feet = dist1.feet + dist2.feet;
		inch = dist1.inch + dist2.inch;
		
		if(inch >=12){
			feet +=inch/12;
			inch%=12;
		}
	}
};
int main(){

	Distance dist1,dist2;
	
	cout << "Enter The Dist1:"<<endl;
	dist1.radeDistance();
	cout << "\nEnter The Dist2:"<<endl;
	dist2.radeDistance();

	Distance resultDistance;
	resultDistance.addDistance(dist1,dist2);
	
	cout << "\nOutput " <<endl;
	resultDistance.displayDistance();
	
	return 0;
}
