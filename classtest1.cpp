#include<bits/stdc++.h>
using namespace std;
// class Student{
//     public:
//     int rollno;
//     int marks;
//     string name;
//     void input(){
//         cout<<"enter details";
//         cin>>rollno>>name>>marks;
//     }

//     void display(){
//         cout<<"rollno: "<<rollno<<endl;
//         cout<<"name: "<<name<<endl;
//         cout<<"marks: "<<marks<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.input();
//     s1.display();
// }

// class Employee{
//     private:
//     int empid;
//     string name;
//     float salary;
//     public:
//     void input();
//     void display();
// };
// void Employee::input(){
//     cout<<"enter details";
//     cin>>empid>>name>>salary;
// }
// void Employee::display(){
//     cout<<"empid: "<<empid<<endl;
//     cout<<"name: "<<name<<endl;
//     cout<<"salary: "<<salary<<endl;
// }
// int main(){
//     Employee e1;
//     e1.input();
//     e1.display();
// }

// void callByValue(int a, int b){
//     swap(a,b);
// }
// void callByReference(int &a, int &b){
//     swap(a,b);
// }
// int main(){
//     int x=10,y=20;
//     cout<<"before swap: "<<x<<" "<<y<<endl;
//     callByValue(x,y);
//     cout<<"after call by value: "<<x<<" "<<y<<endl;
//     callByReference(x,y);
//     cout<<"after call by reference: "<<x<<" "<<y<<endl;
// }

// class Calculate{
//     public:
//     int area(int a){
//         return a*a;
//     }
//     int area(int a, int b){
//         return a*b;
//     }
//     int simpleInterest(){
//         int rateofInterest=8;
//         return rateofInterest;
//     }
// };
// int main(){
//     Calculate c;
//     cout<<"area of square: "<<c.area(5)<<endl;
//     cout<<"area of rectangle: "<<c.area(5,10)<<endl;
//     cout<<"simple interest: "<<c.simpleInterest()<<endl;
//     return 0;
// }

class Product{
    public:
    int price;
    string name;
    void higherPrice(Product p1, Product p2){
        if(p1.price>p2.price){
            cout<<p1.name<<" has higher price"<<endl;
        }
        else{
            cout<<p2.name<<" has higher price"<<endl;
        }
    }
};
int main(){
    Product p1,p2;
    p1.name="Product 1";
    p1.price=100;
    p2.name="Product 2";
    p2.price=200;
    p1.higherPrice(p1,p2);
    return 0;
}