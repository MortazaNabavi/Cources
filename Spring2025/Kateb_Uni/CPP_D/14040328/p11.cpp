#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	for (int i=1; i<=n; i++){
		int a;
		cin>>a;
		sum+=a;
	}
	cout<<sum/n;
}