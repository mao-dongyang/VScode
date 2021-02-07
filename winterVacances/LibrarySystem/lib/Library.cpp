#include "Console.h"
#include <iostream>
#include <ostream>

Book &Library::query(const std::string &name) {
  for (auto &book : books) {
    if (book.name == name) {
      return book;
    }
  }
  return books[0];
}

void Library::searchBook() {
  std::string name = Console::readLine("Please enter the title");
  auto optBook = query(name);
  if (optBook.name != "Library") {
    auto book = optBook;
    Console::printBook(book);
  } else {
    std::cout << "There is no such book" << std::endl;
  }
}
