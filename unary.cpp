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

//////////  Prectice program positive to negative/////////////////

// #include <iostream>
// using namespace std;

// class Unary{

//     int x,y;
//     public:

//     Unary(int a,int b){

//         x=a;
//         y=b;
//     }
//     void print(){
//         cout<<"Data x is "<<x<<endl;
//         cout<<"Data y is "<<y<<endl;
//     }
//     void operator-(){
//         x=-x;
//         y=-y;
//     }

// };

// int main()
// {
//    Unary a1(-10,20);

//    -a1;
//    a1.print();

//     return 0;
// }