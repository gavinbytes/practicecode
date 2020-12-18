// WEIRD ALGORITHM
// Based on CSE Problem Set on: https://cses.fi
//
// Description: This program takes in a single user input of type long int.
// if n is even, divide n by 2.
// if n is odd, multiply n by 3 then add 1.
// continue this until n = 1.
// finally, print out chain of numbers.

#include "stdio.h"
#include <iostream>
#include <vector>
using namespace std;

// Main Function
int main(void) {
  typedef unsigned long int uli;

  uli n; // input value
  vector<uli> nums; // vector for chain of numbers

  cin >> n; // assigns user input to n.

  nums.push_back(n); // add number to vector.

  while (n != 1) {
    if (n % 2 == 0) { // if even.
      n = (n / 2);
      nums.push_back(n); // add number to vector.
    } else { // if odd.
      n = (n * 3) + 1;
      nums.push_back(n); // add number to vector.
    }
  }

  // prints out chain of numbers from beginning to end.
  for (vector<uli>::const_iterator i = nums.begin(); i != nums.end(); ++i) {
    cout << *i << ' ';
  }

  return 0;
}
