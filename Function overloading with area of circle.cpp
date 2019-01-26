#include<iostream>
using namespace std;
float area(float,float);//FUNCTION OVERLOADING
float area(int);
 main(void)
{
    int r;
    float a,b;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"The area of the circle is="<<area(r)<<endl;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>a;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>b;
    cout<<"The area of the rectangle is="<<area(a,b);

}
float area(int p)
{
    float z;
    z=3.14*p;
    return(z);
}
float area(float p, float q)
{
    float z;
    z=p*q;
    return(z);
}
