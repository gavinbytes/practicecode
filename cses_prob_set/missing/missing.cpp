// MISSING ALGORITHM
// Based on CSE Problem Set on: https://cses.fi
//
// Description: This program takes two lines of input.
// first line should just be 1 integer, n.
// second line, should contain n - 1 integers in between 1 and n (inclusive).
// This program then uses an array of size n + 1 in order to keep track of all inputs.
// it changes all elements of the array to 1 for integer k from input.
// It then iterates through the array and finds the element that doesn't equal 1.
// finally, it prints that element.
//

#include <iostream>

using namespace std;

int main (void) {
  typedef unsigned long int uli;

  uli n; // user input (used for size of array)
  uli missing = 0;
  cin >> n;

  uli nums[n + 1]; // create array
  nums[0] = 1; // initialize first element of array to 1.

  uli i = 0; // iterator for array.
  while (i != n) {
    uli j; // temp variable for input integer.
    cin >> j; // take next integer in line 2 of input.
    nums[j] = 1; // change element at index j to 1.
    i++;
  }

  // iterates through array and finds missing int.
  for (uli j = 0; (j < n+1) && (missing == 0); j++) {
    if (nums[j] != 1) {
      missing = j;
    }
  }

  cout << missing; // print missing int.

  return 0;
}
