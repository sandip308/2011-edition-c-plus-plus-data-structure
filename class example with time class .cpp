#include<iostream>
using namespace std;
class time
{
private:
    int hour;
    int minute;
    int second;
public:
    void get_time();
    void normalize();
    void show_time();
};
inline void time::get_time()
{
    m:
    cout<<"Enter the hour:minute:second"<<endl;
    cin >>hour>>minute>>second;
    if(second>=60||minute>=60||hour>12)
    {
        if(hour>24)
        {
            cout<<"You can't give more than 24 hours"<<endl;
            goto m;
        }
        normalize();
    }
}
inline void time::normalize()
{
    if(second>=60)
    {
        minute=minute+second/60;
        second=second%60;
    }
    if(minute>=60)
    {
        hour=hour+minute/60;
        minute=minute%60;
    }
    if(hour>12)
    {
        hour=hour%12;
    }
}
inline void time::show_time()
{
    cout<<"The time is="<<hour<<":"<<minute<<":"<<second<<endl;
}
int main()
{
    time t1;
    t1.get_time();
    t1.show_time();
}
