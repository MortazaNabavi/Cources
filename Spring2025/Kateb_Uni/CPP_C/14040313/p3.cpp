#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, b;
	char c;
	cin>>a>>c>>b;
	
	if (c=='+')
		cout<<a+b;
	else if (c=='-'){
		int d=a-b;
		cout<<d;
	}else if (c=='*')
		cout<<a*b;
	else if (c=='/')
		cout<<a/b;
	else if (c=='^')
		cout<<pow(a,b);
	else
		cout<<"Error!";
		
	return 0;
}