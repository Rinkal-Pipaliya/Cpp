#include<iostream>
using namespace std;

class Timeconvert{
	private:
		int hours;
		int minutes;
		int seconds;
		
	public:
		Timeconvert() : hours(0),minutes(0),seconds(0) {}
		
	void convertseconds(int inputSeconds){
		hours = inputSeconds / 3600;
		inputSeconds %= 3600;
		
		minutes = inputSeconds / 60;
		seconds = inputSeconds % 60;
	}
	
	void displayTime(){
		cout << hours << ":" << minutes << ":" << seconds;
	}
};
int main(){
	int inputSeconds;
	
	cout<<"Enter The Second:";
	cin>>inputSeconds;
	
	Timeconvert timeobj;
	timeobj.convertseconds(inputSeconds);
	
	cout<<"Output:";
	timeobj.displayTime();
	
	return 0;
}
