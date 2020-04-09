#include <iostream>

using namespace std;

class Complex1
{
private:
    int real,img;
public:

    Complex1(){}
    Complex1(int real,int img)
    {
        this->real = real;
        this->img = img;
    }

    void disp()
    {
        if(img<0 && real<0)                                       //For Representation of negative complex number
             cout<<"- ( "<<-real<<" + "<<-img<<"i )";

        else if(img<0)
            cout<<-real<<" - "<<-img<<"i";

        else
            cout<<real<<" + "<<img<<"i";
    }

    Complex1 operator-(Complex1 const &a)               //overloading the - operator
    {
        Complex1 b;
        b.real = this->real-a.real;
        b.img =  this->img-a.img ;
        return b;
    }
};

int main()
{
    int i,r;

    cout<<"Enter the Subtrahend complex number "<<endl;
    cout<<endl<<"Enter the Real number : ";
    cin>>r;
    cout<<endl<<"Enter the imaginary number without 'i' : ";
    cin>>i;
    Complex1 A(r,i);

    cout<<endl<<endl<<"Enter for Minuend complex number";

    cout<<endl<<endl<<"Enter the Real number : ";
    cin>>r;
    cout<<endl<<"Enter the complex number without 'i' : ";
    cin>>i;
    Complex1 B(r,i),C;

    C = A - B;                          //Subtracting two complex numbers using -

    cout<<endl<<"Subtraction Result = ";
    C.disp();
    cout<<endl;
    return 0;
}
