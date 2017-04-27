# travis_qmake_clang_cpp14_libfuzzer

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14_libfuzzer.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14_libfuzzer)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14_libfuzzer.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_clang_cpp14_libfuzzer)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `clang`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Fuzz testing: `libFuzzer`
 * Source: one single file, `main.cpp`

More complex builds:

 * Use of C++17: [travis_qmake_clang_cpp17_libfuzzer](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp17_libfuzzer)

Equally complex builds:

 * [none]


Less complex builds:

 * No `libFuzzer`: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)

## Troubleshooting

### `clang: error: unknown argument: '-fsanitize-coverage=trace-pc-guard'`

For that flag, one needs at least `clang` 4.0.

As of 2017-04-27, the version that can be install from packages is `clang` 3.8.

See [travis_qmake_clang_cpp17_libfuzzer](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp17_libfuzzer) 
how to install clang's most recent version.