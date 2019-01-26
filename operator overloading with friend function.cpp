#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    friend istream& operator>>(istream&, complex&);
    friend ostream& operator<<(ostream&,complex&);
};
istream& operator>>(istream&din,complex&c)
{
    din>>c.a>>c.b;
    return(din);
}
ostream& operator<<(ostream& dout,complex&c)
{
    dout<<c.a<<" "<<c.b;
    return(dout);
}
int main()
{
    complex c1;
    cout<<"Enter a complex number"<<endl;
    cin>>c1;//operator>>(cin,c1);->calling technique
    cout<<"You entered="<<endl;
    cout<<c1;//operator<<(cout,c1)->calling technique
}
