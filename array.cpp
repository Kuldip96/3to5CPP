#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    
   void addata()
    {
        cout<<"Enter the x value";
        cin>>x;
        cout<<"Enter the y value";
        cin>>y;
    }
    void desplay()
    {
        cout << "The real part:" << x << endl;
        cout << "The imaginary part:" << y << endl;
    }
   
};
int main()
{
    Complex c1[3];
    for(int i=0;i<3;i++){
        c1[i].addata();
        c1[i].desplay();
    }
   
    return 0;
}