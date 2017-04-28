#include "my_functions.h"

#include <iostream>

void cout(const std::string& s) noexcept
{
  //libFuzzer should detect this
  if (s == "SOS")
  {
    throw;
  }
  std::cout << s << '\n';
}
