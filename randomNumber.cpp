// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main() {
//   cout << rand() % 101 <<endl;
//   return 0;
// }

#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;

int main() {
  // Get a different random number each time the program runs

  srand(time(0));
  
  // Generate a random number between 0 and 100
  int randomNum = rand() % 101;
  
  cout << randomNum << endl;
  return 0;
}



