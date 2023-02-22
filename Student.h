#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>
#include <vector>
using namespace std;



class Student : public Person
{
    public:
        Student();
        Student(string name,string surname,int age,int absence,int id):Person(name,surname,age){//Otherwise all the process getting complicated and We got wierd errors ???
        this->absence=absence;
        this->id=id;

        };



        Student(string name,string surname,int age,int id):Person(name,surname,age){//Otherwise all the process getting complicated and We got wierd errors ???
        this->id=id;
        this->absence=0;
        };


        int absence;
        int id;
        int getAbsence();
        void setAbsence(int absence);
        int getId();
        void setId(int id);


    protected:

    private:


};

#endif // STUDENT_H
