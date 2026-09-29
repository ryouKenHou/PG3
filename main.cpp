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

	Cat cat = Cat();
	Dog dog = Dog();

	dog.makeSound();
	cat.makeSound();


	return 0;
}