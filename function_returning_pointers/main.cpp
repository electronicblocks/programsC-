/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 12 October, 2017, 5:02 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int *myfunc(int *b);
int main(int argc, char** argv) {

    int *a,b;
    cout<<"enter the value of b";
    cin>>b;
    a=myfunc(&b);
    cout<<"a is "<<*a+1;
    
    
    return 0;
}

int *myfunc(int *ptr)
{
    int a;
    a=(*ptr)*(*ptr);
 
    //modification
    *ptr=a ;
    return (ptr);



}