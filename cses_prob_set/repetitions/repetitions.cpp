// REPETITIONS ALGORITHM
// Based on CSE Problem Set on: https://cses.fi
//
// Description: takes string of DNA: ATTCGAGCTAGCCC...
// Then iterates through string by comparing current and next character,
// in order to count how many repetitions take place together.
// Finally, prints out longest repetition.

#include <iostream>

using namespace std;

int main (void) {
  typedef unsigned long int uli;

  string dna; // string of DNA
  char curr, next; // current and next char variable.
  uli longest = 0, curr_len = 0; // longest and current length of repetitions.

  cin >> dna; // grab input of DNA string.

  curr = dna[0]; // assign first character of sting to curr.
  curr_len = 1; // base case for length of repetitions.
  for (uli i = 1; i < dna.size() + 1; i++) {
    next = dna[i]; // assign next character to next.
    if (curr == next) { // compare if they are the same.
      curr_len++; // increment repetitions.
      curr = next; // assign next char to curr.
    } else { // else reset count.
      curr_len = 1;
      curr = next; // assign next char to curr.
    }

    // if there is a longer repetition, change longest.
    if (longest < curr_len) {
      longest = curr_len;
    }
  }

  cout << longest; // print longest repetition length.
}
