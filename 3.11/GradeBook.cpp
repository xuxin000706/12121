
#include <string>
#include"GradeBook.h"
#include<iostream>
using namespace std;

GradeBook::GradeBook(string course,string teacher)
{
  setCourseName(course);
  setTeacherName(teacher);
}
void GradeBook::setCourseName(name)
{
    courseName=name;
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::setTeacherName(name)
{
    teacherName=name;
}
string GradeBook::getTeacherName()const
{
    return teacherName=name;
}
void GeadeBook::diaplayMessage()const
{
    cout <<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
    cout <<"this course is prsented by"<<getTeacherName()<<endl;
}
