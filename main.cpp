#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char lhs[] = "abcdefghi";
  char* lhsptr = lhs;
  char *rhs = "abcdefghi";
  char *rhs2 = "aacdefghi";

  cout << sizeof(lhs) << " " << sizeof(lhsptr) << endl;
  cout << sizeof(lhs[0]) << endl;
  cout << (&*lhs == lhs) << endl;
  cout << memcmp(lhs, rhs, 7) << endl;
  cout << memcmp(lhs, rhs2, 7) << endl;
  return 0;
}
