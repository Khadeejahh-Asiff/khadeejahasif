#include<iostream>                                  //libraries used
#include"carrental.h"
#include<string>
#include<fstream>
#include<unistd.h>
using namespace std;
void welcome()                        //greeting function
{
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                               >>>>>   CAR RENTAL SYSTEM   <<<<<                       " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void login::show()
{
	system("cls");
	welcome();
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                               >>>>>   LOGIN /SIGNUP PORTAL   <<<<<                    " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void login::get_details()                         //getting details to login the user
{
	cout << " ENTER YOUR E-MAIL : ";
	cin >> n;
	do{
		cout << " ENTER YOUR PASSWORD: " << endl;
		cin >> pass;
		if (pass == "pass")                               //password should be pass
		{
			cout << " ACCESS GRANTED... " << endl;
		}
		else
		{
			cout << " WRONG PASSWORD... TRY AGAIN.... " << endl;
		}
	} while (pass != "pass");
	sleep(2);
	system("cls");
}
void registration::show()                                 //again calling the greeting function
{
	system("cls");
	welcome();
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                               >>>>>   REGISTRATION PORTAL   <<<<<                       " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void registration::get_details()                         //getting details for registrating the customer
{
	cout << " ENTER YOUR FIRST NAME : ";
	cin >> name;
	cout << endl;
	cout << " ENTER YOUR SECOND NAME : ";
	cin >> second_name;
	cout << endl;
	cout << " ENTER YOUR CONTACT NO  : ";
	cin >> contact_no;
	cout << endl;
}
void registration::show_details()                        //for showing user details
{
	system("cls");
	welcome();
	cout << endl;
	cout << "********** USETR DETAILS ************ " << endl;
	cout << endl;
	cout << " YOUR NAME: " << name << " " << second_name << endl;
	cout << " YOUR CONTACT INFO: " << contact_no << endl;
	cout << endl;
	cout << "************************** " << endl;
	sleep(3);
}
void Admin::show()                                       //calling greeting function for admin panel
{
	system("cls");
	welcome();
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                               >>>>>   ADMIN SYSTEM   <<<<<                       " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void Admin::get_details()                                 //getting login details for admin
{
	cout << " PLEASE ENTER YOUR USER I'D ";
	cin >> user_name;
	cout << endl;
	do{
		cout << " ENTER YOUR PASSWORD: ";
		cin >> password;
		if (password == "admin")                               //password should be admin
		{
			sleep(3);
			system("cls");
			cout << " ACCESSING .... LOADING " << endl;
			cout << "                           ACCESS GRANTED SUCCESSFULLY ...  " << endl;
			sleep(2);
			system("cls");
		}
		else
		{
			cout << " WRONG PASSWORD... TRY AGAIN.... " << endl;
		}
	} while (password != "admin");
	cout << endl;
}
void Admin::menu()                                            //menu page for admin portal
{
	int press;
	for (int i = 0; press != 4; i++)
	{
		welcome();
		cout << endl;
		cout << "        ************************** " << endl;
		cout << "                              *    PRESS 1 TO ADD INFORMATION                                  " << endl;
		cout << "                              *    PRESS 2 TO MANAGE DETAILS                                   " << endl;
		cout << "                              *    PRESS 3 TO DELETE INFORMATION                               " << endl;
		cout << "                              *    PRESS 4 TO EXIT                                             " << endl;
		cout << "        ************************** " << endl;
		cout << "*    ENTER YOUR CHOICE :";
		cin >> press;
		if (press == 1)
		{
			system("cls");
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                               >>>>>   DETAILS MANAGEMENT   <<<<<                      " << endl;
			cout << "        ************************** " << endl;
			cout << endl;
			cout << " ENTER CAR NAME: ";
			cin >> car_name;
			cout << endl;
			cout << " ENTER CAR MODEL: ";
			cin >> car_model;
			cout << endl;
			cout << " ENTER MILAGE OF CAR: ";
			cin >> mlg;
			cout << endl;
			cout << " ENTER HORSEPOWER OF CAR: ";
			cin >> hp;
			cout << endl;
			cout << " ENTER TORQUE OF CAR: ";
			cin >> torque;
			cout << endl;
			cout << " ENTER MAKING OF CAR: ";
			cin >> made;
			cout << endl;
			ofstream new_file;
			new_file.open("read.txt");
			new_file << car_name << endl;
			new_file << car_model << endl;
			new_file << mlg << endl;
			new_file << hp << endl;
			new_file << torque << endl;
			new_file << made << endl;
			new_file.close();
			sleep(4);
			system("cls");
		}
		if (press == 2)
		{
			system("cls");
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                               >>>>>   MANAGEMENT PORTAL   <<<<<                       " << endl;
			cout << "        ************************** " << endl;
			cout << endl;
			cout << " ENTER CAR NAME: ";
			cin >> car_name;
			cout << endl;
			cout << " ENTER CAR MODEL: ";
			cin >> car_model;
			cout << endl;
			cout << " ENTER MILAGE OF CAR: ";
			cin >> mlg;
			cout << endl;
			cout << " ENTER HORSEPOWER OF CAR: ";
			cin >> hp;
			cout << endl;
			cout << " ENTER TORQUE OF CAR: ";
			cin >> torque;
			cout << endl;
			cout << " ENTER MAKING OF CAR: ";
			cin >> made;
			cout << endl;
			ofstream read_file;
			read_file.open("read1.txt");
			read_file << car_name << endl;
			read_file << car_model << endl;
			read_file << mlg << endl;
			read_file << hp << endl;
			read_file << torque << endl;
			read_file << made << endl;
			read_file.close();
			sleep(4);
			system("cls");
		}
		if (press == 3)
		{
			system("cls");
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                        >>>>>   DETLETING FILES MANAGEMENT PORTAL   <<<<<              " << endl;
			cout << "        ************************** " << endl;
			cout << endl;
			int status;
			char fileName[20];
			cout << " ENTER NAME OF THE FILE: ";
			cin >> fileName;
			status = remove(fileName);
			if (status == 0)
				cout << " FILE DELETED SUCCESSFULLY! " << endl;
			else
				cout << " ERROR OCCURRED! " << endl;
			sleep(4);
			system("cls");
		}
		if (press == 4)
		{
			system("cls");
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                             >>>>>   THANKS FOE VISITING   <<<<<                       " << endl;
			cout << "        ************************** " << endl;
			cout << endl;
			sleep(2);
			system("cls");
		}
	}
}
void rent::car_selection()
{
	system("cls");
	do                           //deatils for car loop
	{
		do                                    //confirmation taken loop
		{
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                                            MENU PAGE                                         " << endl;
			cout << "                                       PLEASE SELECT A CAR                                    " << endl;
			cout << "                                    PRESS '1' FOR HONDA CIVIC                                 " << endl;
			cout << "                                    PRESS '2' FOR DODGE DEMON                                 " << endl;
			cout << "                                    PRESS '3' FOR HONDA  CITY                                 " << endl;
			cout << "        ************************** " << endl;
			cin >> car_choice;
			if (car_choice == 1)
			{
				cout << " HERE ARE THE SPECS OF HONDA CIVIC CAR: ";
				cout << endl;
				char str[200];
				ifstream fin;
				fin.open("civic.txt");
				while (!fin.eof())
				{
					fin.getline(str, 200);
					if (fin)
					{
						cout << str << endl;
					}
				}
				sleep(3);
				fin.close();
				cout << " DO YOU WANT TO CONFIRM THIS CAR FOR YOUR ORDER? " << endl;
				cout << " PRESS 'Y' IF YES " << endl;
				cout << " >> HERE << ";
				cin >> confirmation;
				cout << endl;
				system("cls");
			}
			if (car_choice == 2)
			{
				cout << " HERE ARE THE SPECS OF DODGE DEMON CAR: ";
				cout << endl;
				char str[200];
				ifstream file_read;
				file_read.open("demon.txt");
				while (!file_read.eof())
				{
					file_read.getline(str, 200);
					if (file_read)
					{
						cout << str << endl;
					}
				}
				cout << endl;
				sleep(3);
				file_read.close();
				cout << " DO YOU WANT TO CONFIRM THIS CAR FOR YOUR ORDER? " << endl;
				cout << " PRESS 'Y' IF YES " << endl;
				cout << " >> HERE << ";
				cin >> confirmation;
				system("cls");
			}
			if (car_choice == 3)
			{
				cout << " HERE ARE THE SPECS OF HONDA CITY CAR: ";
				cout << endl;
				char str[200];
				ifstream read_file;
				read_file.open("city.txt");
				while (!read_file.eof())
				{
					read_file.getline(str, 200);
					if (read_file)
					{
						cout << str << endl;
					}
				}
				cout << endl;
				sleep(3);
				read_file.close();
				cout << " DO YOU WANT TO CONFIRM THIS CAR FOR YOUR ORDER? " << endl;
				cout << " PRESS 'Y' IF YES " << endl;
				cout << " >> HERE << ";
				cin >> confirmation;
				system("cls");
			}
			if (car_choice != 1 && car_choice != 2 && car_choice != 3)
			{
				cout << "        ************************** " << endl;
				cout << "                    INVALID ENTRY                                " << endl;
				cout << "                  PLEASE  TRY  AGAIN                             " << endl;
				cout << "        ************************** " << endl;
				system("cls");
			}
		} while (car_choice != 1 && car_choice != 2 && car_choice != 3);
	} while (confirmation != 'y' && confirmation != 'Y');
	cout << " PLEASE WAIT FOR FURTHER ACTIONS......." << endl;
	cout << " ............. LOADING................." << endl;
	cout << endl;
	sleep(1);
	system("cls");
	welcome();
	cout << endl;
	cout << " PLEASE FILL THE REQUIRED INFORMATION TO ACCOMPLISH FURTHER PROCESSINGS :" << endl;
	cout << " ENTER YOUR FIRST NAME :";
	cin >> name;
	cout << endl;
	cout << " ENTER YOUR SECOND NAME :";
	cin >> second_name;
	cout << endl;
	cout << " ENTER CAR NUMBER : ";
	cin >> car_number;
	cout << endl;
	cout << " ON WHAT BASIS YOU WANT TO RENT A CAR " << endl;
	cout << " PRESS 'D' FOR DAYS AND 'H' FOR HOURS " << endl;
	cin >> well;
	cout << endl;
	if (well == 'h' || well == 'H')          //for hour rental  
	{
		cout << " ENTER NUMBER OF HOURS YOU WANT TO RENT A CAR: ";
		cin >> hours;
		if (car_choice == 1)
		{
			rental_fee = hours * 150;
		}
		else if (car_choice == 2)
		{
			rental_fee = hours * 250;
		}
		else if (car_choice == 3)
		{
			rental_fee = hours * 175;
		}
	}
	else if (well == 'd' || well == 'D')              //for days rental
	{
		cout << " ENTER NUMBER OF DAYS YOU WANT TO RENT A CAR: ";
		cin >> days;
		if (car_choice == 1)
		{
			rental_fee = days * 150;
		}
		else if (car_choice == 2)
		{
			rental_fee = days * 250;
		}
		else if (car_choice == 3)
		{
			rental_fee = days * 175;
		}
	}
	cout << endl;
	cout << " ENTER YOUR CONTACT NUMBER : ";
	cin >> contact_no;
	cout << endl;
	cout << " GENERATIONG RECEIPT ...  " << endl;
	sleep(2);
	system("cls");
}
void rent::receipt()                      // receipt
{
	welcome();
	cout << "                 >>>>>>    CAR_RENTAL - CUSTOMER_INVOICE    <<<<<<" << endl;
	cout << "                 /////////////////////////////////////////////////" << endl;
	cout << "                 ________________ " << endl;
	cout << "                | 	| INVOICE No. :" << "--------------------------|" << "#AKHF00567" << endl;
	cout << "                |      | CUSTOMER NAME:" << "-------------------------|" << name << " " << second_name << endl;
	cout << "                | 	| CONTACT No. :" << "--------------------------|" << "0" << contact_no << endl;
	cout << "                | 	| CAR MODEL :" << "----------------------------|" << car_choice << endl;
	cout << "                | 	| CAR No. :" << "------------------------------|" << car_number << endl;
	cout << "                | 	| NUMBER OF DAYS :" << "-----------------------|" << days << endl;
	cout << "                | 	| YOUR RENTAL AMOUNT IS :" << "----------------|" << rental_fee << endl;
	cout << "                | 	| CAUTION MONEY :" << "------------------------|" << "0" << endl;
	cout << "                | 	| ADVANCED :" << "-----------------------------|" << "0" << endl;
	cout << "                |________________|" << endl;
	cout << endl;
	cout << "                             TOTAL RENTAL AMOUNT IS :" << "         " << rental_fee << endl;
	cout << "_______________________" << endl;
	cout << "             THIS IS COMPUTER GENERATED RECEIPT AND IT DOES'NT" << endl;
	cout << "                   REQUIRE AN AUTHORIZED SIGNATURE #       " << endl;
	cout << "_______________________" << endl;
	cout << endl;
	cout << " //////////////////////////////////////////////////////////////////" << endl;
	cout << "          YOU'RE ADVISED TO PAY THE  RENT BEFORE DUE DATE          " << endl;
	cout << "               OTHERWISE PENALTY FEE WILL BE APPLIED               " << endl;
	cout << "///////////////////////////////////////////////////////////////////" << endl;
	sleep(10);
}
void complaint::show()                            //greeting panel
{
	system("cls");
	welcome();
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                                >>>>>   COMPLAINT PORTAL   <<<<<                           " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void complaint::get_details()                          //getting complaint
{
	cout << " ENTER YOUR COMPLAINT HERE: ";
	cin >> complain;
	sleep(1);
	system("cls");
	welcome();
	cout << endl;
	cout << " YOUR COMOPLAINT HAS BEEN SUBMITTED TO THE AUTHORITIES .... " << endl;
	cout << " THANKS FOR REPORTING.... " << endl;
	cout << " WE'LL TRY TO RESOLVE YOUR ISSUE AS SOON AS POSSIBLE...." << endl;
	sleep(2);
}
void feedback::show()               //feedback greeting panel
{
	system("cls");
	welcome();
	cout << endl;
	cout << "        ************************** " << endl;
	cout << "                                >>>>>   FEEDBACK PORTAL   <<<<<                           " << endl;
	cout << "        ************************** " << endl;
	cout << endl;
}
void feedback::get_details()                        //getting feedback
{
	cout << " ENTER YOUR FEEDBACK HERE: ";
	cin >> feed;
	sleep(1);
	system("cls");
	welcome();
	cout << endl;
	cout << " THANKS FOR GIVING YOUR VIEWS ABOUT YOUR APPLICATION.... " << endl;
	cout << " **** WE APPRECIATE YOUR COOPERATION ******" << endl;
	sleep(2);
}
int main()
{
	int choice;                                        //int main
	for (int i = 0; choice != 6; i++)
	{
		welcome();
		cout << endl;
		cout << "        ************************** " << endl;
		cout << "                      WELCOME TO CAR RENTAL SYSTEM PORTAL                          " << endl;
		cout << "                         *  CLICK 0 TO LOGIN TO YOUR ACCOUNT                       " << endl;
		cout << "                         *  CLICK 1 TO REGISTER YOURSELF                           " << endl;
		cout << "                         *  CLICK 2 FOR ADMIN PORTAL                               " << endl;
		cout << "                         *  CLICK 3 TO RENT A CAR                                  " << endl;
		cout << "                         *  CLICK 4 TO REGISTER ANY COMPLAINT                      " << endl;
		cout << "                         *  CLICK 5 TO TO GIVE FEEDBACK                            " << endl;
		cout << "                         *  CLICK 6 TO EXIT                                        " << endl;
		cout << "        ************************** " << endl;
		cout << " PLEASE ENTER YOUR CHOICE HERE ... ";
		cin >> choice;
		if (choice == 0)
		{
			login l;
			l.show();
			l.get_details();
			system("cls");
		}
		if (choice == 1)
		{
			registration r;
			r.show();
			r.get_details();
			char wish;
			cout << " DO YOU WANT TO RE_CHECK YOUR ENTERED DETAILS " << endl;
			cout << "           PRESS Y IF YES AND N IF NO         " << endl;
			cout << " >>>>> HERE >>>>> ";
			cin >> wish;
			cout << endl;
			if (wish == 'y' || wish == 'Y')
			{
				r.show_details();
			}
			system("cls");
		}
		else if (choice == 2)
		{
			Admin a;
			a.show();
			a.get_details();
			a.menu();
			system("cls");
		}
		else if (choice == 3)
		{
			rent R;
			R.car_selection();
			R.receipt();
			system("cls");
		}
		else if (choice == 4)
		{
			complaint obj;
			obj.get_details();
			system("cls");
		}
		else if (choice == 5)
		{
			feedback F;
			F.show();
			F.get_details();
			system("cls");
		}
		else if (choice == 6)
		{
			system("cls");
			welcome();
			cout << endl;
			cout << "        ************************** " << endl;
			cout << "                             >>>>>   THANKS FOE VISITING   <<<<<                       " << endl;
			cout << "        ************************** " << endl;
			cout << endl;
		}
	}
	return 0;
}
