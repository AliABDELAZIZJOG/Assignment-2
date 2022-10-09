#include "person.h"
    
person::person(){
    name = "";
    ID = "";
    age = 0;
}
person::person(string name, string ID, int age)
{
    this->name = name;
    this->ID = ID;
    this->age = age;
}
void person::setName(string x)
{
this-> name = x;
}

string person::getName()
{
    return this-> name;
}

void person::setID(string x)
{
    this-> ID = x;
}

string person::getID()
{
    return this->ID;
}

void person::setAge(int x)
{
    this-> age = x;
}

int person::getAge()
{
    return this->age;
}


void person::printinfo()
{
    cout << "The Person Name: " << name << endl;
    cout << "The Person ID: "<< ID << endl;
    cout <<"The Age: "<< age << endl;
}
