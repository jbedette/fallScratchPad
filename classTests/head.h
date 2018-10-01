#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node{
    node * next;
    int data;
};

class list{
    public:
        list(){
            cout << "\nconstructing\n";
        };
        ~list();
        void init();
        int addNode();
        int displayAll();
    private:
        node * head;
        node * tail;
};
