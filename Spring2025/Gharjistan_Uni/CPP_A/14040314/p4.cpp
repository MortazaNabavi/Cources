#include <iostream>
using namespace std;
int main(){
	int a;
	a=1;
	Back:
	if (a<=100){
		cout<<a<<"\t";
		a=a+1;
		if(a==50)
			cout<<"\n******\n";
		goto Back;
	}

}
