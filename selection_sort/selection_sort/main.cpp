//
//  main.cpp
//  selection_sort
//
//  Created by pankaj on 08/09/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    void selectionsort(int a[]);
    using namespace std;
    cout<<"enter elements in array";
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    selectionsort(a);
    return 0;
}
void selectionsort(int a[5])
{ int i,j,m;
    
    for (int k=0; k<5; k++) {
        
    
    
    for( i=k,j=i;i<5;i++)
    {
        if(a[j]>a[i+1]){
            j=i+1;}
        
    }
        m=a[k];
        a[k]=a[j];
        a[j]=m;
    }
    for(int i=0;i<5;i++)
        std::  cout<<a[i];
    
}
