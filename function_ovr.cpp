#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << a + b << endl;
};
void sum(double c, int d)
{
    cout << c + d;
};

int main()
{
    sum(10, 20);
    sum(10.0, 30);
    return 0;
}
