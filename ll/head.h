#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
//todo
//understand clearing memory/delete
//move away from void functions 
//finish node struct implempentation
//get recursive everything
//!!!!syntax for setting up public funcs

//closing thoughts 9/22
//

//classes

class ADT{
  public:
    ADT();
    ~ADT();
    //addADT();
    //delADT();

  private:
    ADT * next;
    char * name;
    int key;
};



//gen funcs
void menu();
void menuText();
void delText();
void addText();
void showText();
void ynText();
int readChar(char[]);
int readInt();
char * capText();

//structs
struct node{
  node * next;
  char * text;
};


//temp node struct funcs
int addNode(node*&);
int deleteNode();
int showNode();
int showAllNodes();
