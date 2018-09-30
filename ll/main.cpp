#include "head.h"
using namespace std;

int main(){
  menu();
  return 0;
}


void menu(){

  char opt = ' ';
  menuText();
  cin >> opt;
  cin.clear();
  opt = toupper(opt);
  if(opt == 'A'){
    addText();
    capText();
  }else if(opt == 'S'){

  }else if(opt == 'D'){

  }else if(opt != 'Q'){
    cout << ">> Please enter a meaningful command" << "\n\n";
  }
}
//takes in user input
//outputs pointer to a 
//dynamically sized char arr
char * capText(){
  char temp[500];
  char * output;

  cout << ">>Please enter **TEXT**" << "\n\n"; 
  cin.get(temp, 499, '\n');
  cin.ignore(500,'\n');

  output = new char[strlen(temp)+1];

  strcpy(output,temp);
  cerr << output;
  cerr << strlen(output);
  return output;
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

void addText(){
  cout << "======================" << "\n\n";
  cout << ">>Please enter the name of **BLANK**" << "\n";
}

void delText(){

}

void showText(){

}

int readChar(char tempCharArr[]){
  cout << ">>Please enter **TEXT**" << "\n\n"; 
  cin.get(tempCharArr, 499, '\n');
  cin.ignore(500,'\n');
  return 1;
}

