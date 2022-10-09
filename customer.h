#include "library.h"
#include "mechanic.h"

class customer: public person{

private :
string mechanicID;
struct appointment CusAp;


public:                         //setters and getters
void setMechanicID(string x);
string getMechanicID();
void setAppointment(struct appointment x);
struct appointment getAppointment();


bool operator<(customer &othercustomer); //operator overloading
bool operator>(customer &othercustomer);
bool operator==(customer &othercustomer);




};



