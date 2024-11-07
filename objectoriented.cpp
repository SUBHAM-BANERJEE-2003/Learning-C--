#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
      string messageemp="This is private message of employee";
    public:
        string name;
        int age;
        float salary;
        static int memcount; // static member variable
        const int id = 10; // constant member variable. it cannot be changed. it is initialized at the time of object creation. it can be invoked only one const member functions to ensure the constraint.
        Employee(string name, int age, float salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }
        Employee(Employee &e){ // copy constructor
            name = e.name;
            age = e.age;
            salary = e.salary;
        }
        void display(){
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << endl;
        }
        void displaymemcount(){
            cout << "There are " << memcount << " employees in the company" << endl; // non static can access static member variables. not a problem
        }
        static void displaymemcountstatic(){
            // cout << "Employee name is: " << name << endl; // static member function cannot access non-static member variables. so it throws error
            cout << "There are " << memcount << " employees in the company" << endl;
        }
        // virtual void emptyfunction() = 0; // pure virtual function. it is used to achieve runtime polymorphism. it is used to make the class abstract. it can be empty but we need to override it in the derived class or else it will throw error. can only be used in abstract class. in c++ we can create abstract class by making atleast one pure virtual function

        // one flaw in C++ OOPS is friend class and friend function. it breaks the encapsulation.
        friend class Manager; // friend class. it can access private and protected members of the class.
        // Now manager class can access private and protected members of Employee class. It is not a good practice to use friend class. It breaks the encapsulation. it is one sided. Employee class cannot access private and protected members of Manager class
        // void displaymgrmessage(){
        //     cout << "Employee message is: " << messagemgr << endl; // it will throw error because Employee class cannot access private members of Manager class as friend function are one sided
        // }
        const int getid(){ // const member function. it is used to ensure that the function does not modify the object. it is used to ensure the const member variable constraint
            // id = 20; // it will throw error because id is constant member variable
            return id;
        }
};

int Employee::memcount = 0; // static member variable initialization. without this, it will throw linker error

class Manager: public Employee{ // single inheritance
    private:
        string messagemgr="This is private message of manager";
    public:
        string department;
        Manager(string name, int age, float salary, string department): Employee(name, age, salary){
            this->department = department;
            memcount++;
        }
        virtual void display(){ // virtual function. it is used to achieve runtime polymorphism. it is used to override the function in derived class. kind of like abstract function in java. it can be empty but we need to override it in the derived class or else it will throw error
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << " Department: " << department << endl;
        }
        // void emptyfunction(){ // overriding the pure virtual function
        //     cout << "Empty function" << endl;
        // }
        void displayempmessage(){
            cout << "Employee message is: " << messageemp << endl;
        }
        const int getidbymgr(){ 
            name = "Jenny"; // it will not throw error because name is not constant member variable
            return id;
        }
};

class Developer: public Employee{ // multiple inheritance
    public:
        string language;
        Developer(string name, int age, float salary, string language): Employee(name, age, salary){
            this->language = language;
            memcount++;
        }
        void display(){
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << " Language: " << language << endl;
        }
};

class GeneralManager: public Manager{ // multilevel inheritance
    public:
        string company;
        GeneralManager(string name, int age, float salary, string department, string company): Manager(name, age, salary, department){
            this->company = company;
            memcount++;
        }
        void display(){
            cout << "Name: " << name << " Age: " << age << " Salary: " << salary << " Department: " << department << " Company: " << company << endl;
        }
};



int main(){
    Employee e1("John", 25, 50000);
    Employee e2 = e1; // copy constructor but it wont reflect in memcount
    Manager m1("Jane", 30, 60000, "HR");
    Developer d1("Doe", 35, 70000, "C++");
    GeneralManager gm1("Dane", 40, 80000, "Finance", "ABC Ltd.");
    e1.display();
    e2.display();
    m1.display();
    d1.display();
    gm1.display();
    e1.displaymemcount();
    Employee::displaymemcountstatic();
    m1.displayempmessage(); // friend class can access private and protected members of Employee class
    // m1.displaymgrmessage(); // it will throw error because Employee class cannot access private members of Manager class as friend function are one sided
    cout << "Employee id is: " << e1.getid() << endl;
    cout << "Manager id is: " << m1.getidbymgr() << endl;
    cout << m1.name << endl;
    return 0;
}