#include <iostream>

using namespace std;
int swap(int &a,int &b);


int main()
{int a,b;
cout<<"give a"<<endl;
cin>>a;
cout<<"give b"<<endl;
cin>>b;
swap(a,b);
cout<<"a is"<<a<<"b is"<<b;
    return 0;
}
int swap(int &m,int &n)
{int t;
t=m;
m=n;
n=t;

return 4;


}
