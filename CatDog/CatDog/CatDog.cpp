#include <iostream>
using namespace std;

class Dog;

class Cat {
public:
    string name;

    Cat(){}

    Cat(const Dog& dog);

    void Meow() {
        cout << "MEOW\n";
    }
};

class Dog {
public:
    string name;

    Dog(){}

    Dog(const Cat& cat);

    void Bark() {
        cout << "BARK\n";
    }
};

Cat::Cat(const Dog& dog) {
    name = dog.name;
}

Dog::Dog(const Cat& cat) {
    name = cat.name;
}

int main() {
	Cat c;
	c.name = "Barsik";
	c.Meow();

	Dog d = c; // это должно работать
	d.Bark();
	cout << d.name << "\n"; // Barsik

	Cat x = d; // это должно работать
	x.Meow();
	cout << x.name << "\n"; // Barsik
}

