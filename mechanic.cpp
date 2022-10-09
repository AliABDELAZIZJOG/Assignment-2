#include "mechanic.h"

void mechanic::setCounter(int x)
{
    this->counter=x;
}

int mechanic::getCounter()
{
    return this-> counter;
}

void mechanic::setStruct(struct appointment x)
{
    mechap.push_back(x);
}

struct appointment mechanic::getStruct()
{
    for(int i = 0; i<mechap.size();i++)
    {
        cout << mechap[i].hour << " "<< mechap[i].min << '\n';
    }
}

bool mechanic::isAvailable(appointment x)
{
    for(int i = 0 ; i < mechap.size(); i++)
    {
        if(x.hour == mechap[i].hour && x.min == mechap[i].min)
            return false; 
        
        
    }
    return true; 
}