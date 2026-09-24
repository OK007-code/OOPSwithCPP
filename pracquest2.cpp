// // 1. University Course Registration System
// #include <bits/stdc++.h>
// using namespace std;
// class Student {
//     int rollNo;
//     string Name;
//     double CGPA;
// public:
//     Student(int rollNo, string Name) {
//         this->rollNo = rollNo;
//         this->Name = Name;
//         this->CGPA = 0.0;
//     }
//     Student(int rollNo, string Name, double CGPA) {
//         this->rollNo = rollNo;
//         this->Name = Name;
//         this->CGPA = CGPA;
//     }
//     void UpdateCGPA(double CGPA) {
//         this->CGPA = CGPA;
//     }
//     void DisplayStudentInfo() {
//         cout << "Roll No: " << rollNo
//              << ", Name: " << Name
//              << ", CGPA: " << CGPA << endl;
//     }
//     class Address {
//         string city;
//         string state;
//     public:
//         Address(string city, string state) {
//             this->city = city;
//             this->state = state;
//         }
//         void DisplayAddress() {
//             cout << "City: " << city
//                  << ", State: " << state << endl;
//         }
//     };
// };
// int main() {
//     Student students[5] = {
//         Student(1, "Alice"),
//         Student(2, "Bob", 3.5),
//         Student(3, "Charlie", 3.8),
//         Student(4, "David"),
//         Student(5, "Eve", 3.9)
//     };
//     students[0].UpdateCGPA(3.7);
//     students[2].UpdateCGPA(4.0);
//     for(int i = 0; i < 5; i++) {
//         students[i].DisplayStudentInfo();
//     }
//     for(int i = 0; i < 5; i++) {
//         Student::Address address(
//             "City" + to_string(i + 1),
//             "State" + to_string(i + 1)
//         );

//         address.DisplayAddress();
//     }
//     return 0;
// }

//2. Online Shopping Product Management System
#include <bits/stdc++.h>
using namespace std;
class Product {
    int productId;
    string productName;
    double price;
    public:
    Product() {
    productId = 0;
    productName = "";
    price = 0;
    }
    Product(int productId, string productName, double price) {
    this->productId = productId;
    this->productName = productName;
    this->price = price;
}
    double calculatePrice() {
        return price;
    }
    double calculatePrice(double discount) {
        return price - (price * discount / 100);
    }
    double calculatePrice(double discount, double deliveryCharge) {
        return price - (price * discount / 100) + deliveryCharge;
    }
    void displayProductDetails() {
        cout << "Product ID: " << productId
             << ", Product Name: " << productName
             << ", Price: " << price << endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of products: ";
    cin>>n;
    Product *p=new Product[n];
    for(int i=0;i<n;i++){
        int id;
        string name;
        double price;
        cout<<"Enter product ID, name and price: ";
        cin>>id>>name>>price;
        p[i] = Product(id, name, price);
    }
    for(int i=0;i<n;i++){
        p[i].displayProductDetails();
        cout<<"Original Price: "<<p[i].calculatePrice()<<endl;
        cout<<"Price after 10% discount: "<<p[i].calculatePrice(10)<<endl;
        cout<<"Price after 10% discount and Rs5 delivery charge: "<<p[i].calculatePrice(10,5)<<endl;
    }
    delete[] p;
    return 0;
}
