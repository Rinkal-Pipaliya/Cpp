#include<iostream>
using namespace std;

int main()
{
	int y1,y2;
	cout << "Enter year 1:";
	cin  >> y1;
	cout << "Enter year 2:";
	cin  >> y2;
	
	int a[y1];
	cout << "The Array is:";
	cout << "\n";
	
	for(int i=y1;i<y2;i++){
		if(i%4 == 0){
			cout << i << "\n";
		}
	}
	return 0;
}
