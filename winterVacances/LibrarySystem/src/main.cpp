#include "../lib/Console.h"
#include "../lib/Library.h"
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <iostream>
#include <string>

int main(void) {
  Library lib;
  lib.load();

  while (true) {
    Console::printMainMenu();
    std::string op = Console::readLine("Please enter:");
    boost::to_lower(op);

    if (op == "s") {
      lib.searchBook();
    } else if (op == "b") {
      lib.borrowBook();
    } else if (op == "r") {
      lib.returnBook();
    } else if (op == "l") {
      lib.listBook();
    } else if (op == "m") {
      lib.addBook();
    } else if (op == "q") {
      break;
    } else {
      std::cout << "Something is wrong!" << std::endl;
      break;
    }
  }

  return 0;
}
