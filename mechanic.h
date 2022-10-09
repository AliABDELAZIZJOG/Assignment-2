#include "person.h"
#include <vector>
class mechanic: public person{

private:
int counter;
vector<struct appointment> mechap; //vector of appointment called mechap

public: 

bool isAvailable(appointment);          //bool to check if mechanic is available
void setCounter(int x);                 //getters and setters
int getCounter();
void setStruct(struct appointment x);
struct appointment getStruct();

};