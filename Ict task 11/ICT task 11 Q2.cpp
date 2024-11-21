#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;    

public:
    
    void setName(const string &n) {
        name = n;
    }

    
    void setAge(int a) {
        age = a;
    }

        string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    virtual ~Person() {}
};
class Employee : public Person {
private:
    int employeeID;

public:
    
    void setEmployeeID(int id) {
        employeeID = id;
    }
    void displayInfo() const override {
        cout << "Name: " << getName() << ", Age: " << getAge()
             << ", Employee ID: " << employeeID << endl;
    }
};
class Student : public Person {
private:
    int studentID;
public:
        void setStudentID(int id) {
        studentID = id;
    }

    
    void displayInfo() const override {
        cout << "Name: " << getName() << ", Age: " << getAge()
             << ", Student ID: " << studentID << endl;
    }
};


int main() {
 
    Employee emp;
    emp.setName("Alice");
    emp.setAge(30);
    emp.setEmployeeID(12345);
    emp.displayInfo();

    cout << endl;
	Student stu;
    stu.setName("Bob");
    stu.setAge(20);
    stu.setStudentID(67890);
    stu.displayInfo();
	    return 0;
}


