#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include<string>


class Person
{
    public:
        Person(string name,string surname,int age);//this is protected just because someone do not call by incident

        void SetName(string val);
        string getName();
        void Setsurname(string val);
        string getSurname();
        void Setage(int val);
        int getAge();

    protected:
        string name;
        string surname;
        int age;
    private:

};

#endif // PERSON_H
