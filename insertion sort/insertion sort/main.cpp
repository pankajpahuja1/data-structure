//
//  main.cpp
//  insertion sort
//
//  Created by pankaj on 10/09/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>
void insertionsort(int a[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    std::cout << "Hello, World!\n";
    cout<<"enter elements in array";
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    insertionsort(a);
    return 0;
}
void insertionsort(int a[5])
{   int j;
    std::cout<<"started";
    for(int i=1;i<5;i++)
    {
        j=a[i];
        for(int k=1;k<=i,a[i-k]>j;k++)
        {
           
               a[i-k+1]=a[i-k];
               a[i-k]=j;
           
        }
    }
     for(int i=0;i<5;i++)
         std::  cout<<a[i];
}
