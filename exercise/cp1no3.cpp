/*
Name                :NUR SYAWALLIEA HANNANI BINTI MUHAMAD NOH
Student ID          :2023860372
Group               :3A5
Date                :03/12/2024
Program Description :Restaurant's Digital Menu
*/

#include <iostream>
using namespace std;

int main()
{
	
	
	char appertizersChoice, mainChoice, dessertsChoice;
	int appertizersQuantity, mainQuantity, dessertsQuantity;
	float appTotal, mainTotal, dessertsTotal,subtotal,totalBill,discount;
	float garlicbread, chickenwings, caesarsalad;
	float steak, pasta, seafoodplatter;
	float icecream, chocolatecake, fruitsalad;
	char student;
	float gpa;

	//user select item
	cout << "Select an item from Appertizers " <<endl;
	cout << "1.Garlic bread " <<endl;
	cout << "2.Chicken Wings " <<endl;
	cout << "3.Caesar Salad " <<endl;
	cout << endl;
	cout << "Choice: ";
	cin >> appertizersChoice;
	cout << "Quantity: ";
	cin >> appertizersQuantity;
	cout << endl;


	cout << "Select an item from Main courses " <<endl;
	cout << "A.Steak " <<endl;
	cout << "B.Pasta " <<endl;
	cout << "C.Seafood Platter " <<endl;
	cout << endl;
	cout << "Choice: ";
	cin >> mainChoice;
	cout << "Quantity: ";
	cin >> mainChoice;
	cout << endl;
	
	cout << "Select an item from Desserts " <<endl;
	cout << "D1.Ice Cream " <<endl;
	cout << "D2.Chocolate Cake " <<endl;
	cout << "D3.Fruit Salad " <<endl;
	cout <<endl;
	cout << "Choice: D ";
	cin >> dessertsChoice;
	cout << "Quantity: ";
	cin >> dessertsQuantity;
	cout <<endl;
	 
	//appertizers
	garlicbread=(15.00);
	chickenwings=(21.00);
	caesarsalad=(18.00);
	
	//main courses
	steak=(60.00);
	pasta=(42.00);
	seafoodplatter=(75.00);
	
	//desserts
	icecream=(12.00);
	chocolatecake=(15.00);
	fruitsalad=(13.50);
	
	
	cout << "Are you a UiTM Kuala Pilah Student? (Y/N): " <<endl;
	cin >> student;
	
	cout << "Enter your GPA: " <<endl;
	cin >> gpa;
	
	//DISPLAY RECEIPT
	
	appTotal=(appertizersChoice*appertizersQuantity);
	mainTotal=(mainChoice*mainQuantity);
    dessertsTotal=(dessertsChoice*dessertsQuantity);
	subtotal=(appTotal+mainTotal+dessertsTotal);
	totalBill=(subtotal-discount);
	
	if (subtotal > 200.00)
	{
		discount+=subtotal*0.15;
		
	}
	if (gpa>=3.5)
	{
		discount+=subtotal*0.05;
		
	}
	    
	//DISPLAY RECEIPT
	cout << "================================================== " <<endl;
	cout << "Pilah Me'nate Steak Hub "<<endl;
	cout << "Billing Receipt "<<endl;
	cout << "================================================== " <<endl;
	cout << "Appertizers: " << appertizersChoice << appertizersQuantity << ": " << "RM " << appTotal;
	cout << "Main Course: " << mainChoice << mainQuantity << ": " << "RM " << mainTotal <<endl;
	cout << "Desserts: " << dessertsChoice << dessertsQuantity << ": " << "RM " << dessertsTotal <<endl;
	cout << "Subtotal : " << "RM " << subtotal <<endl;
	cout << "General Discount : " << discount <<endl;
	cout << "Student Discount (CGPA 3.5+) " << discount <<endl;
	cout << "-------------------------------------------------- " <<endl;
	cout << "Total Bill : " << totalBill <<endl;
	cout << "-------------------------------------------------- " <<endl;
	
	return 0;
	
	    
}

