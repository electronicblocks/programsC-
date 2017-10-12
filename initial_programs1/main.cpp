#include <iostream>

using namespace std;

void main()
{int date,time;
int datec,monthc,yearc;
cout<<"input the date time";
cin>>date;
cin>>time;
yearc=date%10000;
monthc=(date-yearc)%100;
datec=(date-yearc-monthc);
cout<<datec<<endl;
cout<<monthc<<endl;
cout<<yearc;


/*//checking for validation of the date
if((datec>1&&datec<30)&&(monthc>1&&monthc<12)&&(yearc>=2017))
{cout<<"valid date";
 //calculating time
 int minutesc=time%100;
 int hourc=time/100;
 if((hourc>0&&hourc<24)&&(minutesc>0&&minutesc<60))
 {cout<<"valid time";
 }
 else
 cout<<"invalid time";

 }
else
cout<<"invalid date";
*/





}
