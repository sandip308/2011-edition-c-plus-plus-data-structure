#include<iostream>
#include<iomanip>
using namespace std;
int n=60;
int main()
{
    int n=20;
    cout<<"local variable: "<<n<<endl;
    cout<<"Global variable: "<<::n<<endl;  //HOW TO ACCESS GLOBAL VARIABLE EXCEPT LOCAL VARIABLE
    cout<<setw(10)<<"SANDIP"<<endl;
}
