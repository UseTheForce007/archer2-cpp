#include "vector_ex.hpp"

// std::vector documentation:
// https://en.cppreference.com/w/cpp/container/vector

std::vector<int> GetEven(std::vector<int> const &source) {
  std::vector<int> res;
  for (auto x : source) {
    if (x % 2 == 0) {
      res.push_back(x);
    }
  }
  return res;
}

void PrintVectorOfInt(std::ostream &output, std::vector<int> const &data) {
  output << "[ ";
  int i = 0;

  for (auto &&x : data) {
    output << x.next;
  }
  output << "]";
  // output.close();
}
