#include "map_ex.hpp"

bool AddWord(std::map<std::string, int> &wlens, std::string word) {
  int len = word.size();
  auto const [it, inserted] = wlens.insert({word, len});
  return inserted;
}
