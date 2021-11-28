/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tiffany Thani
 */

/*
10.) 10. Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
*4 5
Read the operation into a string called operation and use an if-statement to figure out which operation the user wants, for example, if (operation == "+"). Read the operands into variables of type double. Implement this for operations called +,-,*,/, plus, minus, mul, and div with their obvious meanings.

*/
#include <iostream>
using namespace std;
int main()
{
    string operation;
    double value1,value2;
    double result;
    cout<<"Please enter an operation(+,-,*,/,plus,minus,mul,div) followed by two floating-point values separated by a space: ";
    while(cin>>operation>>value1>>value2)       {

        if(operation == "plus" || operation== "+") 
        result=value1+value2;
       else if(operation == "minus"|| operation== "-") 
       result=value1-value2;
       else if(operation == "mul"  || operation== "*") 
       result=value1*value2;
       else if(operation == "div"  || operation== "/")   {

            if(value2==0)
            {
                cout<<"Error! Cannot divide by zero.";
                continue;
            }

            else{
                result=value1/value2;
            }
        }

        cout<<value1<<operation<<value2<<"="<<result<<endl;
        cout<<"Please enter an operation(+,-,*,/,plus,minus,mul,div) followed by two floating-point values separated by a space: ";
    }
    cout<<"Exit because of bad input";
}
