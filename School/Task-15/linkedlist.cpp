#include <iostream>
#include <stdlib.h>
#include <ncurses.h>
using namespace std;

struct NODE {
  int DATA;
  struct NODE *NEXT;
};

int jml_node = 0;
struct NODE *getNode(int X);
void showList(NODE *NodePENUNJUK);
void insertFirst(NODE **H_Node, int nilai);
void insertLast(NODE **H_Node, int nilai);
void deleteFirst(NODE **H_Node);
void deleteLast(NODE **H_Node);

int main(){
  struct NODE *HEAD_List = NULL;
  int nilai;
  int pilih;
  do {
    system("clear");
    cout << "Perintah pada Linked List" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Insert First" << endl;
    cout << "2. Insert Last" << endl;
    cout << "3. Delete First" << endl;
    cout << "4. Delete Last" << endl;
    cout << "5. Exit" << endl;
    cout << "-------------------------" << endl;
    cout << "Current List : ";
    showList(HEAD_List);
    cout << "-------------------------" << endl;
    cout << "Pilihan : "; cin >> pilih;
    switch (pilih){
    case 1:
          cout << endl << endl;
          cout << "Fungsi Insert First" << endl;
          cout << "-------------------------" << endl;
          cout << "Input nilai yang akan ditambahkan : "; cin >> nilai;
          insertFirst(&HEAD_List, nilai);
      break;
    case 2:
          cout << endl << endl;
          cout << "Fungsi Insert Last" << endl;
          cout << "-------------------------" << endl;
          cout << "Input nilai yang akan ditambahkan : "; cin >> nilai;
          insertLast(&HEAD_List, nilai);
      break;
    case 3:
          cout << endl << endl;
          cout << "Fungsi Delete First" << endl;
          cout << "-------------------------" << endl;
          deleteFirst(&HEAD_List);
      break;
    case 4:
          cout << endl << endl;
          cout << "Fungsi Delete Last" << endl;
          cout << "-------------------------" << endl;
          deleteLast(&HEAD_List);
      break;
    case 5:
          cout << endl << endl;
          cout << "Program selesai..." << endl;
      break;   
    default:
          cout << "Pilihan salah .." << endl;
      break;
    }
    getch();
  }while(pilih != 5);
  return 0;
}

struct NODE *getNode(int X){
  struct NODE *newNODE;
  newNODE = (struct NODE*) malloc (sizeof(struct NODE));
  newNODE -> DATA = X;
  newNODE -> NEXT = NULL;
  return newNODE;  
}
void showList(struct NODE *NodePENUNJUK){
  if(jml_node == 0){
    cout << "Singly Linked List kosong ...";
  } else {
    while(NodePENUNJUK != NULL){
      cout << " " << NodePENUNJUK -> DATA;
      NodePENUNJUK = NodePENUNJUK -> NEXT;
    }
    cout << endl << "Jumlah NODE ada " << jml_node;
  }
  cout << endl;
}
void insertFirst(struct NODE **H_Node, int nilai){
  struct NODE *TEMP_NODE = NULL;
  TEMP_NODE = getNode(nilai);
  if(*H_Node == NULL){
    *H_Node = TEMP_NODE;
  }else{
    TEMP_NODE -> NEXT = *H_Node;
    *H_Node = TEMP_NODE;
  }
  jml_node++;
  TEMP_NODE=NULL;
}
void insertLast(struct NODE **H_Node, int nilai){
  struct NODE *TEMP_NODE = NULL;
  NODE *NodePENUNJUK;
  NodePENUNJUK = *H_Node;
  TEMP_NODE = getNode(nilai);

  if(*H_Node == NULL){
    *H_Node = TEMP_NODE;
  }else{
    while(NodePENUNJUK -> NEXT != NULL){
      NodePENUNJUK = NodePENUNJUK -> NEXT;
    }
    NodePENUNJUK -> NEXT = TEMP_NODE;
  }
  jml_node++;
}
void deleteFirst(struct NODE **H_Node){
  struct NODE *TEMP_NODE = NULL;
  if (*H_Node == NULL){
    cout << endl << "Operasi tidak bisa dilakukan karena Singly Linked List kosong" << endl; 
  }else{
    TEMP_NODE = *H_Node;
    if (TEMP_NODE->NEXT == NULL){
      *H_Node=NULL;
   }else{
        *H_Node = TEMP_NODE -> NEXT;
        TEMP_NODE -> NEXT = NULL;
        free(TEMP_NODE);
      }
    jml_node--;
  }
};
void deleteLast(struct NODE **H_Node){
  struct NODE *TEMP_NODE;
  TEMP_NODE = *H_Node;
  if (*H_Node == NULL){
    cout << endl << "Operasi tidak bisa dilakukan karena Singly Linked List kosong" << endl;
  }else{
    if(TEMP_NODE -> NEXT == NULL){
      *H_Node = NULL;
    }else{
      while (TEMP_NODE -> NEXT -> NEXT != NULL){
        TEMP_NODE = TEMP_NODE -> NEXT;
      }
      TEMP_NODE -> NEXT =  NULL;
      free(TEMP_NODE);
    }
    jml_node--;
  }
}