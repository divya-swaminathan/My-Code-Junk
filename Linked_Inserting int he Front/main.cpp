#include <iostream>
#include<stdlib.h>
#include<tgmath.h>
using namespace std;
//inserting in the front of the linked list
struct node
{
  int data;
  node* next;
};
/*struct node* insert_element_fron(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;

}*/

int main()
{
    cout<<endl<<ceil(2.33);
    int d;
    int op;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *end=(struct node*)malloc(sizeof(struct node));
    cout<<endl<<"Enter the element to be inserted";
    cin>>d;
    return 0;
}
