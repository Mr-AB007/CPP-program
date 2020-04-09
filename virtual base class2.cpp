#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int roll_no;
    char name[30],section_name[20];

public:
    void getStudent(int r,char n[],char s[])
    {
        roll_no=r;
        strcpy(name,n);
        strcpy(section_name,s);
    }
    void showStudent()
    {
        cout<<endl<<"Name : "<<name;
        cout<<endl<<"Roll no : "<<roll_no;
        cout<<endl<<"Section : "<<section_name;
    }
};

class Qualification :virtual public Student
{
    float hsc,ssc;
public:
    void getQualification(float hsc,float ssc)
    {
        this->hsc=hsc;
        this->ssc=ssc;
    }
    void showQualification()
    {
        cout<<endl<<"HSC : "<<hsc<<"%"<<endl<<"SSC : "<<ssc<<"%";
    }
};

class Details : public Qualification,virtual public Student
{
    char mob[10];
public:
    void getDetails(char mob[],char n[],char s[],int r,float hsc,float ssc)
    {
        getStudent(r,n,s);              //function call of class Student
        getQualification(hsc,ssc);      //function call of class Qualification
        strcpy(this->mob,mob);
    }
    void showDeatils()
    {
        showStudent();                  //function call of class Student
        showQualification();            //function call of class Qualification
        cout<<endl<<"Contact No : "<<mob;
    }
};
int main()
{
    char name[30],section[20],mob[10];
    int roll;
    float hsc,ssc;
    cout<<"Enter the Student name : ";
    cin>>name;
    cout<<endl<<"Enter Roll : ";
    cin>>roll;
    cout<<"Enter Section : ";
    cin>>section;
    cout<<endl<<"Enter HSC Percentage : ";
    cin>>hsc;
    cout<<endl<<"Enter SCC Percentage : ";
    cin>>ssc;
    cout<<endl<<"Enter Contact Details : ";
    cin>>mob ;

    class Details ob;                           //creation of object of class Details

    ob.getDetails(mob,name,section,roll,hsc,ssc);   //Function call of getDetails for Data input

    ob.showDeatils();                              //Function call of showDetails for show all details
    return 0;
}
