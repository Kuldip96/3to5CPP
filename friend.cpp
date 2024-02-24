#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
   friend Complex sumnumber(Complex o1,Complex o2);
   void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    void desplay()
    {
        cout << "data of a + b" << x<<" + "<<y << endl;
        
    }
    
};
Complex sumnumber(Complex o1,Complex o2){
    Complex o3;
    
    o3.setdata((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}

int main()
{
    Complex c1, c2, c3;
   c1.setdata(1,3);
   c1.desplay();

   c2.setdata(3,5);
   c2.desplay();

   c3=sumnumber(c1,c2);
   c3.desplay();

    return 0;
}