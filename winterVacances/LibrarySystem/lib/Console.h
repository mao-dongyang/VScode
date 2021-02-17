#include "Library.h"
#include <iostream>

class Console {
public:
  static void write(std::string str) { std::cout << str; }

  static void writeLine(const std::string &str) {
    write(str);
    write("\r\n");
  }

  static std::string readLine() {
    std::string str;
    (std::cin >> str).get();
    return str;
  }

  static std::string readLine(const std::string &hint) {
    write(hint);
    return readLine();
  }

  static void printMainMenu() {
    writeLine("Welcome to Library Management System");
    writeLine("(S)earch");
    writeLine("(B)orrow");
    writeLine("(R)eturn");
    writeLine("(L)ist");
    writeLine("(M)anage");
    writeLine("(Q)uit");
    write("asjdhjskdh");
    write("dshfkjfhksajhdfkjas");
    write("sdhfjkhsadkfha");
  }

  static void printBook(const Book &book) {
    writeLine("Title: " + book.name);
    writeLine("Author: " + book.author);
    writeLine("Remain: " + std::to_string(book.remain));
  }
};
