#include <iostream>

class IShape {
public:
    virtual ~IShape() = default;

    virtual void Size() = 0; 
    virtual void Draw() = 0; 
};

class Circle : public IShape {
private:
    double radius; 
    double area;   

public:
    Circle(double r) : radius(r), area(0.0) {}

    void Size() override {
        area = 3.141592653589793 * radius * radius;
    }

    void Draw() override {
		printf("Circle (Radius: %.2f) -> Area: %.2f\n", radius, area);
    }
};


class Rectangle : public IShape {
private:
    double width;  
    double height; 
    double area;   

public:
    Rectangle(double w, double h) : width(w), height(h), area(0.0) {}

    void Size() override {
        area = width * height;
    }

    void Draw() override {
		printf("Rectangle (Width: %.2f, Height: %.2f) -> Area: %.2f\n", width, height, area);
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rect(4.0, 6.0);

    IShape* shapes[] = { &circle, &rect };
    for (IShape* shape : shapes) {
        shape->Size();
        shape->Draw();
    }

    return 0;
}