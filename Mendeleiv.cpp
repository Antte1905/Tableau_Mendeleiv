#include <iostream>
#include "PeriodicTab.h"
#include <string.h>

int main() {
  int Entry;
  std::cout << "Indiquez nb de proton: "; std::cin >> Entry;

  std::cout << elements(Entry);

  return 0;

}
