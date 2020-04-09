#include <iostream>
#include<string.h>
#include<conio.h>

using namespace std;



class sName
{
	char name[30];
 public:
	void getName(char name1[])
	{
		strcpy(name,name1);
	}
	void showName()
	{
		cout<<"NAME: "<<name<<endl;
	}
};
class academics:virtual public sName                //Inheritance by virtual
{
	int reg;
 public:
	void getReg(int reg)
	{
		this->reg=reg;

	}
	void showReg()
	{
		cout<<"REG No: "<<reg<<endl;

	}
};
class Address:virtual public sName                     // virtual inheritance
{
	char add[30];
 public:
	void getAdd(char add[])
	{
		strcpy(this->add,add);

	}
	void showAdd()
	{
		cout<<"ADDRESS: "<<add<<endl;

	}
};
class student_record:public Address,public academics        //inheritance of two virtual base class
{
	char grade;

 public:
	void getRecord(char grade);
	void showRecord();
};
void student_record::getRecord(char grade)
{
	this->grade=grade;
}
void student_record::showRecord()
{
	cout<<"GRADE : "<<grade<<endl;
}

int main()
{
	student_record ob;
	char name[30],add[30],grade;
	int reg;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter Registration no: ";
	cin>>reg;
	cout<<"Enter Address: ";
	cin>>add;
	cout<<"Enter Grade: ";
	cin>>grade;
	ob.getName(name);               //function call of class sName
	ob.getReg(reg);                    //function of class academics
	ob.getRecord(grade);                //function call of class student_Record
	ob.getAdd(add);
	cout<<endl<<"**********Student Details**********"<<endl<<endl;
	ob.showName();
	ob.showReg();
	ob.showRecord();
	ob.showAdd();
	return 0;
}
