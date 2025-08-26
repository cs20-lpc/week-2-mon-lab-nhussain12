#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {

private:
    
    std::string* name;
    int* age;

public:
    // Constructor
    Student();
   
   // Destructor
    ~Student();

    // Setter Methods
    void setName(std::string s);
    void setAge(int i);

    // Getter Methods
    std::string getName() const;
    int getAge() const;

};

#endif