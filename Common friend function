using namespace std;

class B;
class A
{
    int a;
public:
    A(int a)
    {
        this->a=a;
    }

    friend void sum(A,B);
};

class B
{
    int b;
public:
     B(int b)
     {
         this->b=b;
     }
     friend void sum(A,B);

};

void sum(A ob,B ob2)
{
    cout<<"Sum is "<<ob.a+ob2.b;
}

int main()
{
   A ob(200);
   B ob2(100);
   sum(ob,ob2);
   return 0;
}
