#include<iostream>
using namespace std ;

class Calculator
{
    float a,b; // variables for others
    int a1,b1; // variables for modulus
    public :
    Calculator(float x,float y) //Constructor
    {
        a=x;
        b=y;
    }
    void add() //Addition
    {
        cout<<"\nThe Sum of "<<a<<" and "<<b<<" is "<<(a+b);
    }
    void sub() //Subtraction
    {
        cout<<"\nThe Difference of "<<a<<" and "<<b<<" is "<<(a-b);
    }
    void mul() //Multiplication
    {
        cout<<"\nThe Product of "<<a<<" and "<<b<<" is "<<(a*b);
    }
    void div() //Division
    {
        cout<<"\nThe Division of "<<a<<" and "<<b<<" is "<<(a/b);
    }
    void mod() //Modulus
    {
        a1=a;
        b1=b;
        cout<<"\nThe Modulus of "<<a1<<" and "<<b1<<" is "<<(a1%b1);
    }

    ~Calculator() //Destructor
    {
        cout<<"\nDestructor is called\n";
    }
};

int main()
{
    float num1,num2;
    int choice1;
    char choice2;
   again : system ("CLS");
    cout<<"\nSelect an operation to be performed\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n:-";
    cin>>choice1;
    cout<<"Enter the two numbers :- ";
    cin>>num1>>num2;
    switch(choice1)
    {
        case 1:{ Calculator A(num1,num2);
                A.add();
                break; }
        case 2: { Calculator B(num1,num2);
                B.sub();
                break; }
        case 3: { Calculator C(num1,num2);
                C.mul();
                break; }
        case 4: { Calculator D(num1,num2);
                D.div();
                break; }
        case 5: { Calculator E(num1,num2);
                E.mod();
                break; }
        default: cout<<"\nInvalid Selection";
                goto again;
    }
    cout<<"\nWanna do more operations (y/n):- ";
    cin>>choice2;
    if(choice2=='y')
    {
        goto again;
    }
  return 0;
}
