#include <cassert>
#include "my_functions.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  std::string s;
  s.reserve(size + 1);
  for (size_t i{0u}; i!=size; ++i)
  {
    s += static_cast<char>(data[i]);
  }
  cout(s);
  return 0;
}

/*
//Code from http://llvm.org/docs/LibFuzzer.html#toy-example
#include <stdint.h>
#include <stddef.h>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  if (size > 0 && data[0] == 'H')
    if (size > 1 && data[1] == 'I')
       if (size > 2 && data[2] == '!')
       __builtin_trap();
  return 0;
}
*/
