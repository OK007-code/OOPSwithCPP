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
// Q3: Hospital Active Patient Counter
#include <iostream>
using namespace std;
class Patient {
    int patientId;
    string patientName;

    static int activePatients;
public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;
    }
    ~Patient() {
        activePatients--;
    }
    static void showActivePatients() {
        cout << "Active Patients: " << activePatients << endl;
    }
};
int Patient::activePatients = 0;
int main() {
    Patient p1(101, "Rahul");
    Patient p2(102, "Ananya");
    Patient::showActivePatients();
    {
        Patient p3(103, "Riya");
        Patient::showActivePatients();
    }
    Patient::showActivePatients();
    return 0;
}
// Q4: University and Department using Nested Class
#include <iostream>
using namespace std;
class University {
    string universityName;
public:
    University(string name) {
        universityName = name;
    }
    class Department {
        string departmentName;
        int studentCount;
    public:
        Department(string dept, int count) {
            departmentName = dept;
            studentCount = count;
        }
        void display(University &u) {
            cout << "University: " << u.universityName << endl;
            cout << "Department: " << departmentName << endl;
            cout << "Students: " << studentCount << endl;
        }
    };
};
int main() {
    University u("ABES Engineering College");
    University::Department d("AIML", 120);
    d.display(u);
    return 0;
}
//Q5: Employee Record using Constant Object
#include <iostream>
using namespace std;
class Employee {
    int employeeId;
    string name;
    float salary;
public:
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }
    Employee(int id, string n, float s) {
        employeeId = id;
        name = n;
        salary = s;
    }
    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }
    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float s) {
        salary = s;
    }
};
int main() {
    const Employee e1(131, "Omika", 50000);
    cout << "Const Employee:" << endl;
    e1.display();
    // e1.updateSalary(60000);  // Error: cannot modify const object
    Employee e2(e1);
    cout << "\nCopied Employee:" << endl;
    e2.display();
    e2.updateSalary(60000);
    cout << "\nAfter Salary Update:" << endl;
    e2.display();
    return 0;
}
