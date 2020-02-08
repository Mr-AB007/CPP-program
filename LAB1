#include <iostream>

using namespace std;

class Lab
{
private:
    int k,m,cm;
public:

    Lab(){}                                                                //first constructor

    Lab(int a,int b,int c)                                          //constructor for assigning values at object creation
    {
        k=a;
        m=b;
        cm=c;
    }

    void disp()                                                         //display function
    {
       cout<<endl<<"Sum of Distance : ";
       cout<<k<<" KM :  "<<m<<" M : "<<cm<<" CM : ";
    }

    friend Lab add(Lab, Lab);                               //friend function for calculating sum of distance
};

Lab add(Lab A,Lab B)
{
    Lab t;
    int ksum,msum,csum,sum;

    ksum=(A.k+B.k)*100000;                      //adding KM by converting into CM
    msum=(A.m+B.m)*100;                         //adding M by converting into CM
    csum=(A.cm+B.cm);                               //adding CM
    sum=msum+ksum+csum;

    t.k=sum/100000;                                     //CM converting into KM
    sum=sum%100000;
    t.m=sum/100;                                            //CM converting into M
    sum=sum%100;
    t.cm=sum;

    return t;                                                   //returning the sum as object

}

int main()
{
   int a,b,c;
   cout<<"Enter the distance in KM :";                      //user input 1st distance
   cin>>a;
   cout<<"Enter the distance in Meter :";
   cin>>b;
   cout<<"Enter the distance in CM :";
   cin>>c;

   Lab ob1(a,b,c);

   cout<<"Enter the second distance in KM :";       //user input 2nd distance
   cin>>a;
   cout<<"Enter the second distance in Meter :";
   cin>>b;
   cout<<"Enter the second distance in CM :";
   cin>>c;

   Lab ob2(a,b,c),ob3;

    ob3=add(ob1,ob2);                                               //sum returning as object

    ob3.disp();                                                                //displaying sum


    return 0;
}
