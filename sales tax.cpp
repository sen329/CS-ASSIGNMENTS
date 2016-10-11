#include <iostream>
using namespace std;

int main(){
	int purchase;
	cout<< "Enter purchase: ";
	cin >> purchase;
	
	float tax=0.02+0.04;
	float taxtotal= purchase*tax;
	cout<< taxtotal;
	return 0;
	
	
}
