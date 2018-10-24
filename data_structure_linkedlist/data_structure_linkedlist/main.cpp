//
//  main.cpp
//  data_structure_linkedlist
//
//  Created by pankaj on 01/10/18.
//  Copyright © 2018 pankaj. All rights reserved.
//

#include <iostream>
using namespace std;


struct node
{
    int info;
    struct node* link;
};


struct node* start = NULL;


struct node* createnode()
{
    struct node* n;
    n=(struct node*) malloc(sizeof(struct node));
    return(n);
}


void insertnewnode()
{
    struct node* temp,*t;
    temp= createnode();
    printf("enter a no");
    cin>>temp->info;
    temp->link=NULL;
    if(start==NULL)
    {
        start= temp;
    }
    else
    {
        t=start;
        while (t->link!= NULL)
            t=t->link;
        t->link=temp;
        
    }
    
}
void deletenode()
{
    
}



int main(int argc, const char * argv[]) {
    int a=0;
   
    printf("bolo jai mata di");\
    cin>>a;
    if(a==1)
    {insertnewnode();}
    
    insertnewnode();
    insertnewnode();
   
    
    return 0;
}
