#include "person.h"
#include "mechanic.h"
#include "customer.h"
#include "queue.h"
#include <string>


//test case
int main()
{
  ifstream infile("Mai.txt");                  
	string line;
    vector<string>v; 
	while (getline(infile, line))
	{
		v.push_back(line);
	}
    mechanic Mai; 
    Mai.setName(v[0]);
    Mai.setAge(stol(v[1]));
    Mai.setID(v[2]);
    for(int i = 3 ; i < v.size(); i+=2)
         Mai.setStruct({stoi(v[i]), stoi(v[i+1])});


  ifstream infile("Ayman.txt");
	string line;
    vector<string>v; 
	while (getline(infile, line))
	{
		v.push_back(line);
	}
    mechanic Ayman; 
    Ayman.setName(v[0]);
    Ayman.setAge(stoi(v[1]));
    Ayman.setID(v[2]);
    for(int i = 3 ; i < v.size(); i+=2)
         Ayman.setStruct({stoi(v[i]), stoi(v[i+1])});



  ifstream infile("Khaled.txt");
	string line;
    vector<string>v; 
	while (getline(infile, line))
	{
		v.push_back(line);
	}
    mechanic Khaled; 
    Khaled.setName(v[0]);
    Khaled.setAge(stoi(v[1]));
    Khaled.setID(v[2]);
    for(int i = 3 ; i < v.size(); i+=2)
    {
         Khaled.setStruct({stoi(v[i]), stoi(v[i+1])});
    }
    Queue<mechanic>apps(72);
    apps.Enqueue(Mai);
    apps.Enqueue(Ayman);
    apps.Enqueue(Khaled);

   
  
ifstream infile2("Ahmed.txt");

    customer Ahmed; 

     vector<string>v2; 
	while (getline(infile, line))
	{
		v2.push_back(line);
	}

    Ahmed.setName(v2[0]);
    Ahmed.setAge(stol(v2[1]));
    Ahmed.setID(v2[2]);
     for(int i = 3 ; i < v2.size(); i+=2)
         Ahmed.setAppointment({stoi(v2[i]), stoi(v2[i+1])});

    
    mechanic X = apps.top(); 
    // Is X availble at this time? // ahmed 
    //this will basically check if in the time presented by the customer the mechanic at the top of the queue
    //is available or not , if they are not then the queue will pop the mechanic and check the appointment array of the 
    //next mechanic until one is.
    while(apps.IsEmpty() == false){
    appointment ahmed_app = Ahmed.getAppointment(); 
        if(X.isAvailable(ahmed_app))
        { 
            cout <<"The mechanic is available at this time" << endl;

        }
        else
        {
            cout <<"The mechanic is not available at this time" << endl;
            apps.Dequeue();
            X = apps.top();
        }
    }
    
    ifstream infile2("Sara.txt");

    customer Sara; 
     vector<string>v2; 
	while (getline(infile, line))
	{
		v2.push_back(line);
	}

    Sara.setName(v2[0]);
    Sara.setAge(stoi(v2[1]));
    Sara.setID(v2[2]);
     for(int i = 3 ; i < v2.size(); i+=2)
         Sara.setAppointment({stoi(v2[i]), stoi(v2[i+1])});


    // Is X availble at this time? // sara

    Queue<mechanic>apps_2(72);
    apps_2.Enqueue(Mai);
    apps_2.Enqueue(Ayman);
    apps_2.Enqueue(Khaled);
    mechanic X = apps_2.top(); 

    while(apps_2.IsEmpty() == false){
    appointment Sara_app = Sara.getAppointment(); 
    appointment top_mch  = X.getStruct();
        if(X.isAvailable(Sara_app))
        { 
            cout <<"The mechanic is available at this time" << endl;
            break;
        }
        else
        {
            cout <<"The mechanic is not available at this time" << endl;
            apps_2.Dequeue();
            X = apps_2.top();

        }
    }
    

ifstream infile2("Kareem.txt");

    customer Kareem; 
     vector<string>v2; 
	while (getline(infile, line))
	{
		v2.push_back(line);
	}

    Kareem.setName(v2[0]);
    Kareem.setAge(stol(v2[1]));
    Kareem.setID(v2[2]);
     for(int i = 3 ; i < v2.size(); i+=2)
         Kareem.setAppointment({stoi(v2[i]), stoi(v2[i+1])});
    Queue<mechanic>apps_3(72);
    apps_3.Enqueue(Mai);
    apps_3.Enqueue(Ayman);
    apps_3.Enqueue(Khaled);
    mechanic X = apps_3.top(); 
    // Is X availble at this time? // hmed 
    while(apps_3.IsEmpty() == false){
    appointment Kareem_app = Kareem.getAppointment(); 
    appointment top_mch  = X.getStruct();
        if(X.isAvailable(Kareem_app))
        { 
            cout <<"The mechanic is available at this time" << endl;
            break;
        }
        else
        {
            cout <<"The mechanic is not available at this time" << endl;
            apps_3.Dequeue();
            X = apps_3.top();
        }
      
    }
    
    ifstream infile2("Mohamed.txt");

    customer Mohamed; 
     vector<string>v2; 
	while (getline(infile, line))
	{
		v2.push_back(line);
	}

    Mohamed.setName(v2[0]);
    Mohamed.setAge(stol(v2[1]));
    Mohamed.setID(v2[2]);
     for(int i = 3 ; i < v2.size(); i+=2)
         Mohamed.setAppointment({stoi(v2[i]), stoi(v2[i+1])});
    
    Queue<mechanic>apps_4(72);
    apps_4.Enqueue(Mai);
    apps_4.Enqueue(Ayman);
    apps_4.Enqueue(Khaled);
    mechanic X = apps_4.top(); 
    // Is X availble at this time? // hmed 
    while(apps_4.IsEmpty() == false){
    appointment Mohamed_app = Mohamed.getAppointment(); 
    appointment top_mch  = X.getStruct();
        if(X.isAvailable(Mohamed_app)) //is available call
        { 
            cout <<"The mechanic is available at this time" << endl;
            break;
        }
        else
        {
            cout <<"The mechanic is not available at this time" << endl;
            apps_4.Dequeue();
            X = apps_4.top();
        }
    }
    
    return 0;
}