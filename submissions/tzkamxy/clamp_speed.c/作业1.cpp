#include<iostream>
using namespace std;
int clamp_speed(int target_speed)
{
    if(target_speed>1000)
    {
        return 1000;
    }
    else if (target_speed<-1000)
    {
        return -1000;
    }
    else
    {
        return target_speed;

    }



}

int main()
{
cout<<clamp_speed(1500)<<endl;
cout<<clamp_speed(-1000)<<endl;
cout<<clamp_speed(300)<<endl;
cout<<clamp_speed(0)<<endl;
cout<<clamp_speed(1000)<<endl;
cout<<clamp_speed(-1000);

}