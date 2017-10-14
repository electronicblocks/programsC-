/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 12 October, 2017, 7:18 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int binarysearch(int a[],int start,int end,int srchelement);


int main() {
    int n; int a[100];

int p;
cout<<"enter no of    the element ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entr the "<<i<<"th element\n";
        cin>>a[i];
    }
    
    cout<<"element to be search0";
    cin>>p;
    
    int c=binarysearch(a,0,n,p);
    if(c==-1)
    {cout<<"not found";}
    else
    {cout<<c;}
    return 0;
}

int  binarysearch(int a[],int start,int end,int srchelement)
{int mid=(start+end)/2;
    if(end==start+1)
    {if(a[start]==srchelement){return a[start];}
    else{
        return  -1;}}
    if(a[mid]==srchelement)
    {return a[mid];}
else {if(a[mid]<srchelement)
    {binarysearch(a,mid,end,srchelement);
       
}else{binarysearch(a,start,mid,srchelement);}

}
}