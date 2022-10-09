#include "library.h"

class person{

protected:
    string name;            
    string ID;
    int age;
public:
person();
person(string name, string ID, int age);        //constructor
void setName(string x);                     //setters and getters
string getName();
void setID(string x);
string getID();
void setAge(int x);
int getAge();
void printinfo();

};

struct appointment                  //appointment struct
{
    int hour; 
    int min; 
};