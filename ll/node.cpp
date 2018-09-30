#include "head.h"

//this is a section that I will build
//to work with a node struct
//it will eventually become
//a class defining file

int addNode(node * & head){
  node * temp = head;
  if(!head -> next){
    char tempChar[500];
    readChar(tempChar);
    //test
    cerr << "++" <<  tempChar << '\n';
    //
    head -> text = new char[strlen(tempChar + 1)];
    strcpy(head->text, tempChar);
  }else{
    addNode(head->next);
  }
  return 1;
}
int deleteNode(){
  return 1;
}
int showNode(){
  return 1;
}
int showAllNodes(){
  return 1;
}
