#pragma once

#include <string>
#include <vector>

#include "teacher.hpp"
#include "student.hpp"


class School {
public:
   void hireTeacher(Teacher* teacher);
   void enrollStudent(Student* student);
   void assignStudent(Teacher* teacher, Student* student);
   void printStudentOfTeacher();
   void printTeacherOfStudent();

private:
    std::string name;
    std::vector<Teacher*> teachers;
    std::vector<Student*> students;
};