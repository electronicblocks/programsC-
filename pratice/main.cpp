#include <iostream>

using namespace std;
int encoding(int q1,int q2);
int power(int base,int exponent);

int main()
{int q1;
int q2;
cout<<"give the, marks q1 q2"<<endl;
cin>>q1;
cin>>q2;

int cipher=encoding(q1,q2);

cout<<"encoded value is";
cout<<cipher;

return 0;
}
 int encoding(int q1,int q2)
{int Q1=power(2,q1);
int Q2=power(3,q2);
int cipher=Q1*Q2;
return cipher;

}



int power(int b,int e)
{int r,t=1;
for(int i=0;i<e;i++)
{t=t*b;}
return t;
}
