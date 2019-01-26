#include<iostream>
using namespace std;
class student
{
private:
    int roll_NO;
public:
    void get_no(int a)
    {
        roll_NO=a;
    }
    void put_no()
    {
        cout<<"The roll no is :"<<roll_NO;
    }
};
class test:virtual public student
{
protected:
  float part1, part2;
public:
    void marks(float x, float y)
    {
        part1=x;
        part2=y;
    }
    void put_marks()
    {
        cout<<endl<<" MARKS OBTAINED"<<endl;
        cout<<part1<<endl;
        cout<<part2<<endl;
    }
};
class sports:virtual public student
{
protected:
    float score;
public:
    void get_score(float x)
    {
        score=x;
    }
    void put_score()
    {
        cout<<"The score of the sports is="<<score<<endl;
    }
};
class Result:public test,public sports
{
    float total;
public:
    void display()
    {
        total=part1+part2+score;
        put_no();
        put_marks();
        put_score();
        cout<<"The total score is="<<total;
    }
};
int main()
{
    int a;
    float b,c,d;
    Result r1;
    cout<<"Enter the roll no:"<<endl;
    cin>>a;
    r1.get_no(a);
    cout<<"Enter the part1& part2 marks"<<endl;
    cin>>b>>c;
    r1.marks(b,c);
    cout<<"Enter the sports score"<<endl;
    cin>>d;
    r1.get_score(d);
    r1.display();
}
