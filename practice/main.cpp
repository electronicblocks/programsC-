#include <iostream>

using namespace std;

int main()
{
    int date,time;
    cout<<"give the value of dte n time"<<endl;
    cin>>date;
    //calc
    int yrc=date%10000;
    int mnc=((date-yrc)/10000)%100;
    int dtc=((date-yrc)/10000)/100;
    //result
    cout<<dtc<<endl;
    cout<<mnc<<endl;
    cout<<yrc<<endl;
    return 0;

}
