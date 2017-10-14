/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 12 October, 2017, 5:34 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main() {

    cout<<" his program uses dynamic allocation of memory from the data segment";
    int m;
    cout<<"enter the no of students";
    cin>>m;
    int *a;
    int *s;
    a=new int[m];
    for(int i=0;i<m;i++)
    {cout<<"enter the "<<i+1<<"elemrnt"<<endl;
    cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {cout<<a[j]<<endl;
    }
    cout<<&a[0]<<endl;    //DOING ADDRESS ARITHEMATIC WHERE
                           //ADDRESS+1=ADDRESS+4+=>NEXT ADDRESS
    cout<<&a[1]<<endl;
    
    
    s=a;
    cout<<s+2;
    
    
    
    return 0;
}

