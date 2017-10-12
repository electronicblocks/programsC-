#include <iostream>

using namespace std;

int main()
{int i,j;
cout<<"give i j"<<endl;
cin>>i>>j;
// printing
for(int a=0;a<j+2;a++)
{
if((a==0)||(a==j+1))
{for(int b=0;b<i;b++)
{cout<<"*";}}
else
for(int c=0;c<i;c++)
{if(c==0||c==i-1)
{cout<<"*";
}
else{cout<<" ";}
}

cout<<endl;




}








    return 0;
}
