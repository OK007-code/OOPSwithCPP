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
// Q2 Bank Account Management System
#include <bits/stdc++.h>
using namespace std;
class BankAccount {
    int accountNumber;
    string customerName;
    float balance;
public:
    BankAccount(int acc, string name, float bal) {
        accountNumber = acc;
        customerName = name;
        balance = bal;
    }
    friend void compareBalance(BankAccount, BankAccount);
};
void compareBalance(BankAccount a, BankAccount b) {
    if (a.balance > b.balance)
        cout << a.customerName << " has higher balance." << endl;
    else if (b.balance > a.balance)
        cout << b.customerName << " has higher balance." << endl;
    else
        cout << "Both have equal balance." << endl;
}
int main() {
    BankAccount a1(101, "Omika", 50000);
    BankAccount a2(102, "Kavish", 70000);
    compareBalance(a1, a2);
    return 0;
}
