/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 10 October, 2017, 6:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* GOT THE WHOLE IDEA IT WAS DIFFICULT TO UNDER STAND BUT I GOT THE BASIC IDEA
 * 
 */void mergesort(int a[],int start,int end );
     void  merge(int a[],int start,int end,int  mid);

int main() {

    int a[20],n;
    cout<<"enter the value of n not more trhan 20";
    cin>>n;
    cout<<"enyter the elements of arrays";

    for(int i=0;i<n;i++)
    {
    
cin>>a[i];

    }
    cout<<"calling the merge sort function\n";
    mergesort(a,0,n);
    for(int i=0;i<n;i++)
    {
    
cout<<a[i];    
    }

    return 0;
}

void mergesort(int a[],int start,int end)
{//using recurssion
    if(end==start+1){cout<<"termination";
    return;}
    int mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid,end);
    cout<<"calling merge";
    merge(a,start,end,mid);
    return;
     


}

void  merge(int a[],int start,int end,int mid)
{ int i,j,ta[20],temp=start;


for(i=start,j=mid;(i<mid)||j<end; )
{

    if((i<mid)&&(j<end)){ if(a[i]>a[j])
    {ta[temp]=a[i];
    i++;}
    else{
   ta[temp]=a[j];
    j++;}
     
    }
    else if(i<mid){ta[temp]=a[i];
    i++;}
    else{ta[temp]=a[j];
    j++;}
        
        
        


    temp++;
}
//copy the element
for(i=start;i<end;i++)
{
    a[i]=ta[i];

}

return;

}