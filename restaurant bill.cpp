#include <iostream>
using namespace std;

int main()
{
	float tax = 0.0675;
	float tip = 0.2;
	float bill;
	cout <<"Enter food bill: " << endl;
	cin >> bill;
	float mealcost = bill-(bill*tax);
	float tax2 = bill*tax;
	float tip2 = bill*0.2;
	float total = bill+tip2;
	cout <<"\n meal cost: " <<mealcost ; 
	cout <<"\n tax amount: "<<tax2 ; 
	cout <<"\n tip amount: "<<tip2 ; 
	cout <<"\n total: "<<total;
	
	return 0;
	
	 
}
