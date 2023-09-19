#include<iostream>                                  //libraries used
#include<string>
#include<fstream>
#include<unistd.h>
using namespace std;
class car                             //abstract class
{
protected:                          //pure virtual functions
	virtual void show() = 0;
	virtual void get_details() = 0;
};
class login :public car                   //abstract class car been inherited to login class with pure virtual functions....
{
private:
	string n;
	string pass;               //data members
	char trial;
public:
	void show();                           //just for calling and dessign purpose
	void get_details();                        //getting details to login the user      
};
class registration : public car                         //abstract class car with pure virtual functions is inherited to registration class
{
private:
	string name;
	string second_name;
	string contact_no;
public:
	void show();                                 //again calling the greeting function
	void get_details();                         //getting details for registrating the customer
	void show_details();                        //for showing user details
};
class Admin :public car                                     //abstract class car with pure virtual functions is inherited to admin class                   
{
private:
	string user_name;
	string password;
	string car_name;                       //data members
	string car_model;
	float mlg;
	int hp;
	int torque;
	string made;
public:
	void show();                                       //calling greeting function for admin panel
	void get_details();                                 //getting login details for admin
	void menu();                                            //menu page for admin portal
};
class rent                                         //renting class for car
{
private:
	string name;
	string second_name;
	int car_choice;
	char confirmation;
	int rental_fee;
	int car_number;
	int days;
	int hours;
	char well;
	string contact_no;
public:
	void car_selection();
	void receipt();                      // receipt
};
class complaint : public car
{
private:
	string complain;
public:
	void show();                            //greeting panel
	void get_details();                          //getting complaint
};
class feedback :public car
{
private:
	string feed;
public:
	void show();               //feedback greeting panel
	void get_details();                        //getting feedback			
};
