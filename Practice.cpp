// Q1 E-Commerce Product Comparison System
#include <bits/stdc++.h>
using namespace std;
class Product {
    int productId;
    string name;
    double price;
public:
    Product(int id, string n, float p) {
        productId = id;
        name = n;
        price = p;
    }
    Product comparePrice(const Product &p) {
        if (price > p.price)
            return *this;
        else
            return p;
    }
    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
    Product p1(101, "Laptop", 55000);
    Product p2(102, "Salt", 300);
    Product higher = p1.comparePrice(p2);
    cout << "Product with Higher Price:" << endl;
    higher.display();

    return 0;
}
