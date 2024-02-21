#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }
    void desplay()
    {
        cout << "The real part:" << x << endl;
        cout << "The imaginary part:" << y << endl;
    }
    Complex operator--(int)
    {
        x--;
        y--;
    }
};
int main()
{
    Complex c1(10, 15);

    c1--;
    c1.desplay();

    return 0;
}