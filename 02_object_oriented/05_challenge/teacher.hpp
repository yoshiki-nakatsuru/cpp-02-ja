#pragma once

#include <string>
#include <vector>

class Student;

class Teacher {
public:
    Teacher(const std::string& name);
    void set_student(Student* student);    
    std::string get_name();
    std::vector<Student*> get_student();
private:
    std::string name;
    std::vector<Student*> students;
};