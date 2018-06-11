#include <iostream>
#include "student.h"

using namespace::std;

Student::Student(int id)
    :m_id(id),m_score(0)
{
    //m_id = id;
    //m_score = 0;

    cout << "Student constructor " << endl;
}

Student::~Student()
{
    cout << "Student desturctor " << endl;
}
