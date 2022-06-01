//basic linked_list syntax

#include <iostream>
using namespace std;

//class for making linked list
class Node {
public:
  int data;
  Node* next;
public:

};

// function to print the linked list
void printlist(Node* n)
  {
      while(n != NULL){
          cout<<n->data<<" ";
          n=n->next;
      }
  }


//main driver function
int main()
{
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
  
  head = new Node();
  second = new Node();
  third = new Node();
  
  head->data=1;
  head->next=second;
  
  second->data=2;
  second->next=third;
  
  third->data=3;
  third->next=NULL;
  
  printlist(head);
  return 0;
  
}

//happpy coding
  
