#include <iostream>
using namespace std;

int main (){
	
	int n, p, change;
	
	cout << "==============================================" << endl;
	cout << "Choose what product you want to purchase. =)" << endl;
	cout << "[1] Dress Chicken  = Php 160" << endl;
	cout << "[2] Hotdog  = Php 35" << endl;
	cout << "[3] Pork  = Php 190" << endl;
	cout << "[4] Meatloaf  = Php 55" << endl;
	cout << "==============================================" << endl;
	
	cout << endl << "Enter number: ";
	cin >> n;
	
	if (n == 1)
		cout << "Dress Chicken = Php 160" << endl;
	else if (n == 2)
		cout << "Hotdog = Php 35" << endl;
	else if (n == 3)
		cout << "Pork = Php 190" << endl;
	else if (n == 4)
		cout << "Meatloaf = Php 55" << endl;
		
	cout << endl << "Your Payment: ";
	cin >> p;
	
	if (n==1){
		cout << p << " - 160" << endl;
		change= p-160;
		if (p<160)
			cout << "Not enough payment. Error" << endl;
		else
			cout << "Your change is " << change << endl;
	}
	else if (n==2){
		cout << p << " - 35" << endl;
		change= p-35;
		if (p<35)
			cout << "Not enough payment. Error" << endl;
		else
			cout << "Your change is " << change << endl;
	}
	else if (n==3){
		cout << p << " - 190" << endl;
		change= p-190;
		if (p<190)
			cout << "Not enough payment. Error" << endl;
		else
			cout << "Your change is " << change << endl;
	}
	else if (n==4){
		cout << p << " - 55" << endl;
		change= p-55;
		if (p<55)
			cout << "Not enough payment. Error" << endl;
		else
			cout << "Your change is " << change << endl;
	}
		
	cout << endl <<"Coded By: Argie Villagonzalo";
	return 0;
}
