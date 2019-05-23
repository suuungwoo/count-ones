#include <iostream>

using namespace std;

int count_ones(uint64_t x)
{
  int count;
  for (count = 0; x; count++)
    x &= x - 1;
  return count;
}

int main()
{
  cout << count_ones(0100110);
}
