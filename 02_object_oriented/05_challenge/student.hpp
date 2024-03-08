#pragma once

#include <string>
#include <vector>

class Teacher;

class Student {
public:
    Student(const std::string& name);
    void set_teacher(Teacher* teacher);
    std::string get_name();
    std::vector<Teacher*> get_teacher();
private:
    std::string name;
    std::vector<Teacher*> teachers;

};