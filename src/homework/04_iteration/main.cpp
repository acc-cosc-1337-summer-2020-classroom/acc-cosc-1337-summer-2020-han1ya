//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::string; using std::cin; using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
  int option;
  string dna;
  double gc_content;
  string complement;
  char run_again;

  do
  {

    cout << "Enter 1 for Get GC Content, or 2 for Get DNA Complement\n";
    cin >> option;

    cout << "Enter a DNA string\n";
    cin >> dna;

   if(option == 1)
   {
     gc_content = get_gc_content(dna);
     cout << gc_content << "%\n";
   }

   if(option == 2)
   {
     complement = get_dna_complement(dna);
     cout << complement << "\n";
   }

  cout << "Do you want to continue? Enter Y or N\n";
  cin >> run_again;

  }while(run_again == 'y' || run_again == 'Y');

	return 0;
}