#include "Student.hpp"

// Constructor
Student::Student() {
    name = new std::string("");
    age = new int(0);

    std::cout << "Student object created!\n";
}

// Destructor
Student::~Student() {
    std::cout << "Student object destroyed!\n";
}

// Setter Method Definitions
void Student::setName(std::string s) {
    *name = s;
}

void Student::setAge(int i) {
    *age = i;
}

// Getter Method Definitions
std::string Student::getName() const {
    return *name;
}

int Student::getAge() const {
    return *age;
}