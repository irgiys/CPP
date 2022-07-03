#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *getnode(int x){
  /* data */
  struct node *newNode;
  newNode = (struct node*) malloc(sizeof(struct node));
  newNode -> data = x;
  newNode -> next = NULL;
  return newNode;
};

int main(){

  cout << endl;
  return 0;
}