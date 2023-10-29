#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Simplecalculator
{
    int a, b;

public:
    void setdata()
    {
        cout << "Enter the value of a:--";
        cin >> a;
        cout << "Enter the value of b:--";
        cin >> b;
    }
    void getdata()
    {
        cout << "The addition of the two numbers is:--" << (a + b) << endl;
        cout << "The subtraction of the two numbers is:--" << (a - b) << endl;
        cout << "The multiplication of the two numbers is:--" << (a * b) << endl;
        cout << "The division of the two numbers is:--" << (a / b) << endl;
    }
};
class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
       // cout << "Enter the value of b" << endl;
       // cin >> b;
    }

    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};
class HybridCalculator : public Simplecalculator, public ScientificCalculator
{
};
int main()
{
    /* Simplecalculator x;
    ScientificCalculator y;
    x.setdata();
    x.getdata();
    y.getDataScientific();
    y.performOperationsScientific(); */
    HybridCalculator z;
    z.setdata();
    z.getdata();
    z.getDataScientific();
    z.performOperationsScientific();
    return 0;
}
