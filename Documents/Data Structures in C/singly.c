#include<stdio.h>
#include<stdlib.h>
//initializing a structure and naming it as Node
typedef struct node
{
    int rno;
    char name[50];
    struct node* link;

}Node;

//memory allocation (getnode())

Node* getnode()
{
    Node* x;
    x=(Node*)malloc(sizeof(Node));
    printf("Enter the information");
    scanf("%d%s",&x->rno,x->name);
    x->link= NULL;
    return x;

}

//insert front function
Node* insert_rear(Node*first)
{
    Node* temp;
    temp=getnode();
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        temp->link=first;
        first=temp;
    }
    return first;
}

//insert rear function
Node* insert_rear(Node* first)
{
    Node* temp;
    temp=getnode();
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        cur=first;
        while

    }
}