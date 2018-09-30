#include "head.h"

int main(){
  menu();
  return 0;
}

//issue with this style is that it is effectively recursive, you could run into
//stack problems
void menu(){

  char opt = ' ';
  menuText();
  cin >> opt;
  cin.clear();
  opt = toupper(opt);
  while(opt != 'Q'){ 
    if(opt == 'A'){

    }else if(opt == 'S'){

    }else if(opt == 'D'){

    }else if(opt != 'Q'){
      cout << ">> Please enter a meaningful command" << "\n\n";
    }
  }
}

void menuText(){
  cout << "======================" << "\n\n";
  cout << ">>Welcome to **BLANK PROGRAM**" << "\n";
  cout << ">>Would you like to :" << "\n";
  cout << ">>[A]dd" << "\n";
  cout << ">>[S]how" << "\n";
  cout << ">>[D]elete" << "\n";
  cout << ">>[Q]uit" << "\n";
}

