#include "pch.h"
#include "IceCream.h"


IceCream::IceCream()
{
	flavorName = " - ";
	flavorPrice = 0.00;
	flavorIngredients = " - ";
}
IceCream::IceCream(string userName, string userIngredients, float userPrice) {
	flavorName = userName;
	flavorPrice = userPrice;
	flavorIngredients = userIngredients;
	return;
}
void IceCream::newFlavor() {
	cin.ignore;
	cout << endl;
	cout << "Enter new flavor name: ";
	getline(cin, userName);
	cin.ignore;
	cout << "Enter flavor ingredients";
	getline(cin, userIngredients);
	cout << "Enter flavor price: ";
	cin >> userPrice;
	index = index + 1;
	IceCream flavors[index](userName, userIngredients, userPrice);
	return;

}
float IceCream::changePrice(float userPrice) {
	flavorPrice = userPrice;
	return flavorPrice;
}
string IceCream::changeIngredients(string userIngredients) {
	flavorIngredients = userIngredients;
	return;
}
float IceCream::showPrice() const {
	return flavorPrice;
}
string IceCream::showIngredients() const {
	return flavorIngredients;
}


