#include <iostream>
#include<stdlib.h>
#include<stdio.h>
//implementing a linked list with 3 nodes
using namespace std;

struct node
{
    int data;
    node* next;

};
int main()
{
struct node* head=NULL;
struct node* first=NULL;
struct node* second=NULL;
struct node* third=NULL;

head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third =(struct node*)malloc(sizeof(struct node));

head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=NULL;

struct node* temp=head;
while(temp!=NULL)
{
    cout<<endl<<temp->data;
    temp=temp->next;
}
getchar();
return 0;
}
