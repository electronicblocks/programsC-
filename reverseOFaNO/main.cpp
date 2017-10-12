#include <iostream>

using namespace std;
void reversen(int a);

int main()
{int b;
cout<<"enter the number"<<endl;
cin>>b;
reversen(b);



}
void reversen(int n)
{int r=0;
while(n>0)
{ r=r*10+n%10;
n=n/10;
}
cout<<"reverse is"<<r;
}





