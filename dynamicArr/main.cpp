#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

char * capText();

int main(){
  char * test = capText();
  cerr << test << '\n';
  return 0;
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
  //
  cerr <<"+++test: "<<output<<':'<<strlen(output)<<'\n';;
  //
  return output;
}

