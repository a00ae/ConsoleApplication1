#include <iostream>
#include <vector>
#include "store.h"

using namespace std;


// 1. هيكل المنتج الأساسي
struct Product {
    string name;
    int id;
    int quantity;
    double price;
};

// 2. الفئة الابن للمنتجات المخفضة (ترث من المنتج الأساسي)
class DiscountedProduct : public Product {
private:
    double discountPercent; // نسبة الخصم الخاصة بهذا المنتج

public:
    // دالة تعيين التفاصيل التي استخدمتها في دالة main
    void setDetalis(string pName, int pId, int pQty, double pPrice, double pDiscount) {
        name = pName;
        id = pId;
        quantity = pQty;
        price = pPrice;
        discountPercent = pDiscount;
    }

    // دالة لحساب السعر الفعلي بعد الخصم للمنتج الواحد
    double getDiscountedPrice() const {
        return price * (1 - (discountPercent / 100));
    }
};

// 3. فئة المتجر لإدارة المخزن والفواتير
class Store {
private:
    vector<DiscountedProduct> inventory; // قائمة المنتجات في المتجر
    const double taxPercent = 15.0;      // قيمة ضريبة ثابتة (استخدام const)

public:
    // إضافة منتج للمتجر
    void addProduct(const DiscountedProduct& p) {
        inventory.push_back(p);
    }

    // تحديث الكمية بناءً على رقم المنتج (ID)
    void updateQuantity(int pId, int newQty) {
        for (size_t i = 0; i < inventory.size(); i++) {
            if (inventory[i].id == pId) {
                inventory[i].quantity = newQty;
                return;
            }
        }
        cout << "Product with ID " << pId << " not found!" << endl;
    }

    // طباعة جرد المخزن الحالي
    void printInventory() const {
        cout << "\n-------------- Store Inventory --------------" << endl;
        for (size_t i = 0; i < inventory.size(); i++) {
            cout << "ID: " << inventory[i].id
                << " | Name: " << inventory[i].name
                << " | Qty: " << inventory[i].quantity
                << " | Price after Discount: $" << inventory[i].getDiscountedPrice() << endl;
        }
        cout << "------------------------------------------------\n" << endl;
    }

    // حساب الفاتورة الإجمالية مع الضريبة للكميات المتوفرة
    double calculateTotalBill() const {
        double total = 0;
        for (size_t i = 0; i < inventory.size(); i++) {
            total += inventory[i].getDiscountedPrice() * inventory[i].quantity;
        }
        // إضافة الضريبة 15%
        total += total * (taxPercent / 100);
        return total;
    }
};

void store()
{
    Store myStore;

    DiscountedProduct p1, p2;
    p1.setDetalis("laptop", 213, 2, 101, 10);
    p2.setDetalis("Mouse", 214, 1, 90, 12);

    myStore.addProduct(p1);
    myStore.addProduct(p2);

    // تحديث الكمية وطباعة المخزن
    myStore.updateQuantity(214, 4);
    myStore.printInventory();

    // حساب الفاتورة النهائية
    double finalInvoice = myStore.calculateTotalBill();
    cout << "Total Bill (With Tax): $" << finalInvoice << endl;

}