#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string &dna)
{
  double gc_count = 0;
  
  for(int i = 0; i < dna.length(); i++)
  {
      if(dna[i] == 'G'|| dna[i] == 'C')
      {
        gc_count++;
      }
  }

  double gc_content = (gc_count / dna.length() * 100);
  return gc_content;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna)
{
  std::string reversed_string;

  for(int i = dna.length(); i > 0; i--)
  {
    reversed_string += dna[i-1];
  }

  return reversed_string;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
  std::string str = get_reverse_string(dna);

  for(int i = 0; i < dna.length(); i++)
  {
    if(str[i] == 'A')
    {
      str[i] = 'T';
    }
    else if(str[i] == 'T')
    {
      str[i] = 'A';
    }
    else if(str[i] == 'G')
    {
      str[i] = 'C';
    }
    else
    {
      str[i] = 'G';
    }
  }
  return str;
}
