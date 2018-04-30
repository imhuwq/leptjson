#include <iostream>
int main() {
  int array[2] = {1, 2};
  int *ap = array;
  int *bp = ap;
  bp++;
  std::cout << ap << " " << bp << std::endl;
  std::cout << *ap << " " << *bp << std::endl;
  return 0;
}