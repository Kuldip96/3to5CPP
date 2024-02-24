#include <iostream>
using namespace std;

class base
{
public:
    int a;
    int b;
    int total = 0;
};
class derive : public base
{
public:
    
    void totaldata()
    {
        a = 10;
        total = a + b;
    }
};
int main()
{
    derive d1;

    d1.b = 20;
    d1.totaldata();
    cout << "total " << d1.total;

    return 0;
}

// #include<iostream>
// using namespace std;

// class base{
//     int salary;

//     public:
//     int bonus;
//     int total;
//     void addsalary(int salary1){
//         salary=salary1;
//     }
//     void totalsalary(){
//         total=salary+bonus;
//     }
// };

// class derive:public base{
//     public:
//     void addbonus(int bonus1){
//         bonus=bonus1;
//     }
// };

// int main(){
//     derive add;
//     add.addsalary(10000);
//     add.addbonus(5000);
//     add.totalsalary();
//     cout<<"total salary"<<add.total;
//     return 0;
// }