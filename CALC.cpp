/*You have to create 2 classes:

SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes
Also, answer the questions given below.

What type of Inheritance are you using?
Which mode of Inheritance are you using?
Create an object of HybridCalculator and display results of simple and scientific calculator.
How is code reusability implemented?
*/
#include <iostream>
#include<math.h>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int num1, num2;

public:
    void get_data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void Select_function()
    {
        int op;
        cout << "Select the operation(+,-,*,/): " << endl;
        cin>>op;
    
    switch (op)
    {
        case 1:
        cout << num1 << "+" << num2 << "= " << (num1 + num2) << endl;
        break;
    case 2:
        cout << num1 << "-" << num2 << "= " << (num1 - num2) << endl;
        break;
    case 3:
        cout << num1 << "*" << num2 << "= " << (num1 * num2) << endl;
        break;
    case 4:
        cout << num1 << "/" << num2 << "= " << (num1 / num2) << endl;
        break;
    }
    }
    
    
        
    

     void display();
};


 void SimpleCalculator ::display()
 {
    cout << " The two numbers are " << num1 << " and " << num2 << endl;
     Select_function();
 }
 class ScientificCalculator
 {
     protected:
     int value1,value2;
     public:
     void get_data2(int a, int b)
    {
        value1 = a;
        value2= b;
    }
    void SelectFunction()
    {
        int op;
        cout<<"1.Square"<<endl;
        cout<<"2.Square root"<<endl;
        cout<<"3.Power"<<endl;
        cout<<"4.Square"<<endl;
        cout<<"Select the scientific operation: "<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            cout<<"Square of "<<value1<<" : "<<(value1*value1)<<endl;
            cout<<"Square of "<<value2<<" : "<<(value2*value2)<<endl;
            break;

            case 2:
            cout<<"Square root of "<<value1<<" : "<<sqrt(value1)<<endl;
            cout<<"Square root of "<<value2<<" : "<<sqrt(value2)<<endl;
            break;

            case 3:
            cout<<value1<<" raised to "<<value2<<" : "<<pow(value1,value2)<<endl;
            break;

            case 4:
            cout<<"Exponential of "<<value1<<" : "<<exp(value1)<<endl;
            cout<<"Exponential of "<<value2<<" : "<<exp(value2)<<endl;
            break;



        }
        

    }

    void displayScientific();
    

 };
 void ScientificCalculator :: displayScientific()
 {
     cout<<"The numbers of scientific calculation: "<<value1<<" and "<<value2<<endl;
     SelectFunction();
 }
 class HybridCalculator : public SimpleCalculator,public ScientificCalculator
 {
     public:
     void show()
     {
         int choose;
         cout<<"1.Simple Calc \t 2.Scientific Calc"<<endl;
         cin>>choose;
         if(choose==1)
         {
             display();
         }
        if(choose==2)
         {
             displayScientific();
         }
     }

         
    

 };
int main()
{
    //SimpleCalculator obj1;
    //obj1.get_data(2,3);
    //obj1.display();

    //ScientificCalculator obj2;
    //obj2.get_data2(4,9);
    //obj2.displayScientific();
    
    HybridCalculator obj3;
    obj3.get_data(2,3);
    obj3.get_data2(4,9);
    obj3.show();



    

    return 0;
}
