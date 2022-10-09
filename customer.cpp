#include "customer.h" //customer class cpp 

void customer::setMechanicID(string x)          //getters and setters
{
    this->mechanicID = x;
}

string customer::getMechanicID()
{
    return mechanicID;
}


void customer::setAppointment(struct appointment x)
{
    this->CusAp = x;
}


struct appointment getAppointment();


bool customer::operator<(customer &othercustomer)           //operator overloading
{
    if(getAppointment().hour == othercustomer.getAppointment().hour)
       {
         if(getAppointment().min < othercustomer.getAppointment().min)
            return true; 
        else return false;
       }
    
    else if(getAppointment().hour < othercustomer.getAppointment().hour)
        return true; 

    else 
        return false; 
    
}

bool customer::operator>(customer &othercustomer)
{
     if(getAppointment().hour == othercustomer.getAppointment().hour)
       {
         if(getAppointment().min > othercustomer.getAppointment().min)
            return true; 
        else return false;
       }
    
    else if(getAppointment().hour > othercustomer.getAppointment().hour)
        return true; 

    else 
        return false; 
    
  
}

bool customer::operator==(customer &othercustomer)
{
    if(getAppointment().hour == othercustomer.getAppointment().hour)
       {
         if(getAppointment().min == othercustomer.getAppointment().min)
            return true; 
        else return false;
       }
    else
        return false; 
}