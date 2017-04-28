#include "my_functions.h"

#include <iostream>

void cout(const std::string& s) noexcept
{
  //libFuzzer should detect this
  //This word is short, so the build log on Travis CI is kept short
  if (s == "X")
  {
    throw;
  }
  std::cout << s << '\n';
}
