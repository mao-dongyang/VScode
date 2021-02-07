#include <string>
#include <vector>

class Book {
public:
  std::string name;
  std::string author;
  int remain = 0;
};

class Library {

  std::vector<Book> books;

  Book &query(const std::string &name);

public:
  void save();
  void load();

  void searchBook();
  void borrowBook();
  void returnBook();
  void listBook();
  void addBook();
};
