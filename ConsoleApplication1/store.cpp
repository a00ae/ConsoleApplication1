#include <iostream>
#include <vector>
#include "store.h"

using namespace std;


struct Product {
	string name;
	int serialNumber;
	int quantity;
	double price;
};

class DiscountedProduct : public Product
{
private:
	double discount;

public:
	void setDetalis(string n, int sn, int q, double p, double d)
	{
		name = n;
		serialNumber = sn;
		quantity = q;
		price = p;
		discount = d;
	}
	double getFinalPrice()
	{
		return price - discount;
	}
	void print()
	{
		cout << "Name: " << name
			<< " | Serial: " << serialNumber
			<< " | Qty: " << quantity
			<< " | Price after discount: $" << getFinalPrice() << endl;
	}
};

class Store
{
private:
	vector<DiscountedProduct> productList;
public:
	void addProduct(DiscountedProduct prod)
	{
		productList.push_back(prod);
		cout << "Product [" << prod.name << "] added successfully.\n";

	}
	void updateQuantity(int serial, int newQty)
	{
		for (int i = 0; i < productList.size(); i++)
		{
			if (productList[i].serialNumber == serial) {
				productList[i].quantity = newQty;
				cout << "Quantity updated for Serial " << serial << " to " << newQty << ".\n";
				return;
			}
		}
		cout << "Product with Serial " << serial << " not found!\n";
	}

	double calculateTotalBill()
	{
		const double TAX_RATE = 0.15;
		double subtotal = 0.0;

		for (int i = 0; i < productList.size(); i++)
		{
			subtotal += (productList[i].getFinalPrice() * productList[i].quantity);
		}

		double taxAmount = subtotal * TAX_RATE;
		double totalBill = subtotal + taxAmount;

		cout << "\n--- Invoice Details ---\n";
		cout << "Subtotal (Before Tax): $" << subtotal << endl;
		cout << "Tax Amount (" << (TAX_RATE * 100) << "%): $" << taxAmount << endl;

		return totalBill;
	}

	void printInventory()
	{
		cout << "\n--- Current Inventory ---\n";
		for (int i = 0; i < productList.size(); i++) {
			productList[i].print();
		}
	}
};

void store()
{
	Store myStore;

	DiscountedProduct p1, p2;
	p1.setDetalis("laptop", 213, 2, 101, 10);
	p2.setDetalis("Mouse", 214, 1, 90, 12);


	//

	myStore.addProduct(p1);
	myStore.addProduct(p2);
	//myStore.printInventory();

	myStore.updateQuantity(214, 4);
	myStore.printInventory();

	double finalInvoice = myStore.calculateTotalBill();

	cout << "Total Bill (With Tax): $" << finalInvoice << endl;
}