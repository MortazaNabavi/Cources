#include <iostream>
using namespace std;
int main(){
	
	int time;
	cout<<"Enter the Time: ";
	cin>>time;
	
	if (time <=5)
		cout<<"Shab";
	else if (time <=19)
		cout<<"Rooz";
	else
		cout<<"Shab haye bi tarana namana :)";
	
	return 0;
}