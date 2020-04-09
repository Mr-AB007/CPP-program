#include <iostream>
#include<cstring>

using namespace std;

class Record
{
    int result,roll,s1,s2,s3,s4,s5;
    char name[20];
    float avg;
public:
    float read_record(char *,int,int,int,int,int,int);
    void disp();
    float topper()
    {
        return(avg);
    }

protected:
    float average()
    {
        return((s1+s2+s3+s4+s5)/5);
    }
};

float Record::read_record(char a[20],int b,int s1,int s2,int s3,int s4,int s5)
{
    strcpy(name,a);
    roll=b;
    this->s1=s1;
    this->s2=s2;
    this->s3=s3;
    this->s4=s4;
    this->s5=s5;
    avg=average();
    return(avg);
}

void Record::disp()
{
    cout<<endl<<"Name : "<<name<<" Roll : "<<roll;
    cout<<endl<<"Marks in all Subject is : "<<s1<<" " <<s2<<" "<<s3<<" "<<s4<<" "<<s5;
    cout<<endl<<"Average Marks is : "<<avg;
}

int main()
{
    int n,r,s1,s2,s3,s4,s5;char na[20];
    float avg;
    cout<<"Enter the number of records : ";
    cin>>n;
    Record ob[n];
    int fail[n],range[n],j=0,ra=0;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter the name of student : ";
        cin>>na;
        cout<<endl<<"Enter the roll : ";
        cin>>r;
        cout<<endl<<"Enter the subject1 Marks range 0 to 100 : ";
        do
        {cin>>s1;}while(s1>100||s1<0);
        cout<<endl<<"Enter the subject2 Marks range 0 to 100 : ";
        do
        {cin>>s2;}while(s2>100||s2<0);
        cout<<endl<<"Enter the subject3 Marks range 0 to 100 : ";
        do
        {cin>>s3;}while(s3>100||s3<0);
        cout<<endl<<"Enter the subject4 Marks range 0 to 100 : ";
        do
        {cin>>s4;}while(s4>100||s4<0);
        cout<<endl<<"Enter the subject5 Marks range 0 to 100 : ";
        do
        {cin>>s5;}while(s5>100||s5<0);
        avg=ob[i].read_record(na,r,s1,s2,s3,s4,s5);


        if(avg<30)
        {
            fail[j]=i;
            j++;
        }
        else if(avg>=30 && avg <50)
        {
            range[ra]=i;
            ra++;
        }
    }

    for(int i=0;i<n;i++)
    {
        ob[i].disp();
        cout<<endl<<endl;
    }
    int ch=4;
    while(ch!=0)
    {
    cout<<endl<<"Enter the choice 1 for fail student and 2 for 30-50 and 0 for exit: ";
    cin>>ch;
        switch(ch)
    {
    case 1:
       {
           cout<<endl<<"Record of fail student is : "<<endl;
           for(int i=0;i<=j;i++)
           {ob[fail[i]].disp();}

       }break;
    case 2:
        {
            cout<<endl<<endl<<"Record of range 30-50 : "<<endl;
            for(int i=0;i<=ra;i++)
                {ob[range[i]].disp();}

        }break;
    case 3:
        {
            int top=0,t=0;
            for(int i=0;i<n;i++)
            {

                if(ob[i].topper()>top)
                {
                    t=i;
                    top=ob[i].topper();
                }

            }
            cout<<endl<<"Topper is : ";ob[t].disp();
        }break;
    }
    }

    return 0;
}
