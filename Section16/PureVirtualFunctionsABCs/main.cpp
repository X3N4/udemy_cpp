#include <iostream>
#include <vector>


// -------------------------------------
// ABCs (contain pure virtual functions)
class Shape {
    
private:
    // common attributes for shapes

public:
    // pure virtual functions
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() { }
};

class OpenShape: public Shape{

// still an abstract class as it doesn't override inherited abstract methods    
public:
    virtual ~OpenShape() { }
};

class ClosedShape: public Shape {
    
// still an abstract class as it doesn't override inherited abstract methods    
public:
    virtual ~ClosedShape() { }
};


// ------------------------------------------
// Concrete classes (have to override both pure virtual functions
class Line: public OpenShape {

public:
    virtual void draw() override {
        std::cout << "Drawing some line." << std::endl;
    }
    
    virtual void rotate() override {
        std::cout << "Line is bein rotated." << std::endl;
    }
    
    virtual ~Line() { }
};

class Circle: public ClosedShape {

public:
    virtual void draw() override {
        std::cout << "Drawing some circle." << std::endl;
    }
    
    virtual void rotate() override {
        std::cout << "Circle is being rotated." << std::endl;
    }
    
    virtual ~Circle() { }
};

class Square: public ClosedShape {

public:
    virtual void draw() override {
        std::cout << "Drawing some square." << std::endl;
    }
    
    virtual void rotate() override {
        std::cout << "Square is being rotated." << std::endl;
    }
    
    virtual ~Square() { }
};

void screen_refresh(const std::vector<Shape *> &pointers){
    // derived classes are forced to override pure virtual functions
    // This code like this works
    std::cout << "----------Refreshing--------------" << std::endl;
    for (const auto p: pointers){
        p->draw();
    }
}

int main(){
    // throws error as these are ABCs
//    Shape s;
//    Shape *p = new Shape{};
    

    // Dynamic polymorphism with base class pointer!
    Shape *ptr = new Circle{};
    ptr->draw();
    ptr->rotate();
    
    Shape *s1 = new Circle{};
    Shape *s2 = new Square{};
    Shape *s3 = new Line{};
    
    // don't have collections of raw pointers
    std::vector<Shape *> shapes {s1, s2, s3};
    
    
    screen_refresh(shapes);
    
    delete ptr;
    delete s1;
    delete s2;
    delete s3;
    return 0;
    
}