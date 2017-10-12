#include <iostream>

using namespace std;
void prime(int a);

int main()
{
    int c;
    cout<<"enter the total no of p no";
    cin>>c;
    cout<<"2"<<'\t';

 prime(c);
 return 0;
}
void prime(int a)
{int g;
int j=3;
int n=0;


 while(n<a-1)
{
int g=0;
for(int i=2;i<j;i++)
{
if(j%i==0)
{g=1;

break;
}}
if(g==0)
{cout<<j<<'\t';
n++;}
j++;

}
}





