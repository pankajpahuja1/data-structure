//
//  main.cpp
//  data structure
//
//  Created by pankaj on 08/09/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    int n,i;
    cout<<"enter no of elements in array";
    cin>>n;
    int a[6];
    cout <<"enter values in array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched";
    int b;
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
            cout<<i<<a[i];
    }
    return 0;
}
