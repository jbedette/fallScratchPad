#include "head.h"

void list::init(){
    head->next = NULL;
    head->data = 0;
    tail = head;
}
int list::addNode(){
    node * temp = new node;
    temp->data = 1;
    head->next = temp;
    return 0;
}
int list::displayAll(){
    node * current = head;
    while(current){
        cout <<"\nData: " << current->data << '\n';
        current = current->next;
    }
    return 0;
}
