//
//  main.cpp
//  bubble_sort
//
//  Created by pankaj on 11/09/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>
void bubblesort(int a[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
   
    cout<<"enter elements in array";
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    bubblesort(a);
    return 0;
}
void bubblesort(int a[5])
{ int n=5;
    for(int j=0;j<4;j++)
    {
        for (int i=0; i<n; i++) {
            if(a[i]<a[i-1] )
            {int k=a[i];
                a[i]=a[i-1];
                a[i-1]=k;
            }
        }
    }
    for (int i=0; i<5; i++) {
        std::  cout<<a[i];
    }
}
