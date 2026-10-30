
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    // Constructor
    Number(int x = 0)
    {
        a = x;
    }

    // Unary operator overloading (-)
    void operator-()
    {
        a = -a;
    }

    // Binary operator overloading (+)
    Number operator+(Number n)
    {
        Number temp;
        temp.a = a + n.a;
        return temp;
    }

    // Relational operator overloading (>)
    bool operator>(Number n)
    {
        return a > n.a;
    }

    // Display function
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3;

    cout << "Original Numbers:" << endl;
    cout << "N1 = ";
    n1.display();

    cout << "N2 = ";
    n2.display();

    // Unary operator
    -n1;
    cout << "\nAfter Unary Operator (-N1): ";
    n1.display();

    // Binary operator
    n3 = n1 + n2;
    cout << "\nAfter Binary Operator (N1 + N2): ";
    n3.display();

    // Relational operator
    if (n1 > n2)
        cout << "\nN1 is greater than N2";
    else
        cout << "\nN1 is not greater than N2";

    return 0;
}
