//
//  main.cpp
//  quicksort
//
//  Created by pankaj on 12/09/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>
int proQuick(int a[],int,int,int,int);
//void AlgoQuick();

int main(int argc, const char * argv[]) {
    using namespace std;
    int N=10,a[N];
    cout<<"enter elements in array";
    for (int i=0; i<N; i++) {
        cin>>a[i];
        
    }
    int B=0,E=N-1,L=0;
    int d=proQuick(a,N,B,E,L);
    for (int i=0; i<N; i++) {
        cout<<a[i];
    }
    
   // AlgoQuick();
    
    return 0;
}
int proQuick(int a[],int N,int B,int E,int L)
{
    int l,r;
    l=B;
    r=E;
    for (int i=l; i<r; i++) {
        while (a[L]<=a[r]&&l!=r) {
            r--;
        }
        if(L==r){
           // return 0;
        }
    }
    if(a[L]>a[r])
    {
        int d;
        d= a[r];
        a[r]=a[L];
        a[L]=d;
        L=r;
        for (int i=r; i>L; i--) {
            while (a[l]<=a[L]&&L!=l) {
                l++;
            }
            if (L==l) {
                return 0;
            }
        }
    }
    return 0;
}
