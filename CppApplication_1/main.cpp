/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 9 October, 2017, 11:05 PM
 * program to get the transformed picture from grey scalwe using transfored value 
 */

#include <cstdlib>
#include<iostream>
#include<cmath>


using namespace std;

/*
 * 
 */
int main() {
    int pimage[500][500],fimage[500][500],i,j,min=0,m,n,histogram[256],cdf[256],equalised[256];
    int s;
    
    cout<<"give the value of dimensions of image maximum is 500x500";
    cout<<"provide length & bradth";
    cin>>m>>n;
    cout<<"give the value of the greyscale of individual pixels always leass than 256 ";
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {cin>>pimage[i][j];
    }
    }
    //loop for printing the value of each pixel
      for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {cout<<pimage[i][j]<<"\t";
   
    }
    cout<<"\n";
    
    }
    
    // value of each factor normalised to 0 to get the associative arrays
    for(i=0;i<256;i++)
    {cdf[i]=0;
    histogram[i]=0;
    equalised[i]=0;
    }
     
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    {histogram[pimage[i][j]]=histogram[pimage[i][j]]+1;
      /*
       int p=pimage[i][j];
       * histogram[p]++;
       * we will get a associative array
       * 
       */
    }
    }
    // printing of histogram array after the 
   // updation in each element according to i,age element
    cout<<"now the histogram array becomes";
    cout<<"\n";
    for(i=0;i<256;i++)
    {
        cout<<histogram[i]<<"\t\t";
    }
    
    //calculating cdf according to histogram
    for(i=0;i<256;i++)
    {s=0;
        for(j=0;j<i;j++)
      {s=s+histogram[j];}  
    cdf[i]=s;}
    
    // finding the minimum non zero value from the cdf
    min=255;
    // loop
    for(i=0;i<256;i++)
    {if((cdf[i]>min)||(cdf[i]!=0))
        min=cdf[i];   
    }
    
// fimding the value of equalistion using cdf n histogram
    
    for(i=0;i<256;i++){
        equalised[i]= round((float)(cdf[i]-min)/(m*n-min)*(255));
    
  }
    // after equalistion value of the new pic become
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {fimage[i][j]=equalised[pimage[i][j]];
        }
        
    }
    
    cout<<"final image after image processing is"<<"\n";
    //printing new pixel vaalue
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {cout<<fimage[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    //end program
    //output verified
    
    
   cout<<histogram[12] ;

    return 0;
}

