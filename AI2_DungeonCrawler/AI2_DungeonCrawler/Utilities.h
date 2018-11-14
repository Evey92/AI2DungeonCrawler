#pragma once
#include <vector>
#include <string>

namespace std {

  template<>
  struct hash<std::string>
  {
    size_t operator()(const std::string& string) const {
      size_t newHash;

      for (int i = 0; i < string.size(); i++) {
        newHash += string[i] * i + 1;
      }

    }
  };

}