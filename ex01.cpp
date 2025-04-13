№1
#include <iostream>
#include <string>

class Book {
private:
    std::string title; 
    std::string author; // Автор
    int year;

public:
    Book() : title("Unknown"), author("Unknown"), year(0) {}
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}
    void display() {
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Year: " << year << "\n";
    }
};

int main() {
    Book book1;
    book1.display();

    std::cout << "\n";
    Book book2("C++ Programming", "Bjarne Stroustrup", 1985);
    book2.display();

    return 0;
}

№2
#include <iostream>
#include <string>

class Student {
private:
    std::string firstName;  
    std::string lastName;   
    int studyYear;  

public:

    Student(std::string first, std::string last) 
        : firstName(first), lastName(last), studyYear(1) {} // Оқу жылдары әдепкі мәні 1
    void display() {
        std::cout << "First Name: " << firstName << "\n";
        std::cout << "Last Name: " << lastName << "\n";
        std::cout << "Study Year: " << studyYear << "\n";
    }
};

int main() {
    Student student1("John", "Doe");
    student1.display();

    return 0;
}

№3
#include <iostream>

class Rectangle {
private:
    double length;  
    double width; 

public:
    Rectangle() : length(1.0), width(1.0) {} // Әдепкі мәндер 1.0
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() {
        return length * width;
    }
    void display() {
        std::cout << "Length: " << length << "\n";
        std::cout << "Width: " << width << "\n";
    }
};

int main() {
      Rectangle rect1;
    rect1.display();
    std::cout << "Area: " << rect1.area() << "\n";

    std::cout << "\n";
    Rectangle rect2(5.0, 3.0);
    rect2.display();
    std::cout << "Area: " << rect2.area() << "\n";

    return 0;
}

№4 
#include <iostream>
#include <string>

class Car {
private:
    std::string brand;  
    std::string model;
    int speed;     

public:
    Car(std::string b, std::string m) : brand(b), model(m), speed(0) {} // Жылдамдықтың әдепкі мәні 0
    void display() {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Speed: " << speed << " km/h\n";
    }
    void setSpeed(int newSpeed) {
        speed = newSpeed;
    }
};

int main() {
    Car car1("Toyota", "Corolla");
    car1.display();

    std::cout << "\n";
    car1.setSpeed(120);
    car1.display();

    return 0;
}

№5
#include <iostream>
#include <string>

class Person {
private:
    std::string name;  
    int age; 
    std::string gender;

public:
    Person() : name("Unknown"), age(0), gender("Unknown") {}
    Person(std::string n, int a, std::string g) : name(n), age(a), gender(g) {}
    void display() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Gender: " << gender << "\n";
    }
};

int main() {
       Person person1;
    person1.display();

    std::cout << "\n";
    Person person2("Alice", 30, "Female");
    person2.display();

    return 0;
}
