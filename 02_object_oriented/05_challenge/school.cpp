#include "school.hpp"

#include <iostream>

void School::hireTeacher(Teacher* teacher){
    this->teachers.push_back(teacher);
}

void School::enrollStudent(Student* student){
    this->students.push_back(student);
}

void School::assignStudent(Teacher* teacher, Student* student){
    teacher->set_student(student);
    student->set_teacher(teacher);
}

void School::printStudentOfTeacher(){
    for(Student* student : this->students){
        std::cout << student->get_name() << "'s teachers: ";
        for(Teacher* teacher : student->get_teacher()){
            std::cout << teacher->get_name() << " ";
        }
        std::cout << std::endl;
    }

}

void School::printTeacherOfStudent(){
    for(Teacher* teacher : this->teachers){
        std::cout << teacher->get_name() << "'s students: ";
        std::vector<Student*> students = teacher->get_student();
        for(Student* student : students){
            std::cout << student->get_name() << " ";
        }
        std::cout << std::endl;
    }
}
