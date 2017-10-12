#include<iostream>
using namespace std;
// Program to find if B divides A
int main() {
int A, B, R;
// Variable declarations
bool dividesFlag;
// Variable declarations
cout<<"Give A & B:"<< endl;
cin>> A >>  B;
R = A % B;
// Remainder of A divided by B
dividesFlag=(R == 0);
// Is the remainder 0?
cout<< "Does B divide A?" << dividesFlag<< endl;
return 0;
}
