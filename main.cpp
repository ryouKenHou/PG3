#include <iostream>

class Animal {
public:
	Animal() = default;
	~Animal() = default;
	virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
	Dog() = default;
	~Dog() = default;

	void makeSound() const override {
		printf("Woof!\n");
	}
};

class Cat : public Animal {
public:
	Cat() = default;
	~Cat() = default;
	void makeSound() const override {
		printf("Meow!\n");
	}
};



int main() {

	Animal* animals[] = { new Dog(), new Cat() };

	for(auto animal : animals) {
		animal->makeSound();
		delete animal;
	}


	return 0;
}