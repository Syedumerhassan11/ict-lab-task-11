#include <iostream>
#include <string>
using namespace std;
class Animal {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }
	void setAge(int a) {
        age = a;
    }
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Mammal : public Animal {
public:
    void feedBaby() {
        cout << "Feeding baby mammal." << endl;
    }
};
class Bird : public Animal {
public:
    void layEgg() {
        cout << "Laying an egg." << endl;
    }
};
class Reptile : public Animal {
public:
    void shedSkin() {
        cout << "Shedding skin." << endl;
    }
};
int main() {
    Mammal mammal;
    mammal.setName("Elephant");
    mammal.setAge(10);
    mammal.displayInfo();
    mammal.feedBaby();
	cout << endl;
    Bird bird;
    bird.setName("Parrot");
    bird.setAge(2);
    bird.displayInfo();
    bird.layEgg();
	cout << endl;
    Reptile reptile;
    reptile.setName("Snake");
    reptile.setAge(5);
    reptile.displayInfo();
    reptile.shedSkin();

    return 0;
}

