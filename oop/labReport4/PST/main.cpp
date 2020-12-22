#include <iostream>
using namespace std;

class Person
{
public:
    Person(string n, int a) : name(n), age(a) {}
    ~Person();

public:
    string name;
    int age;
};

Person::~Person()
{
    cout << "destruct Person" << endl;
}

class Student : public Person
{
public:
    Student(string n, int a, string s) : Person(n, a), stuID(s) {}
    ~Student();

public:
    string stuID;
};

Student::~Student()
{
    cout << "destruct Student" << endl;
}

class Teacher : public Person
{
public:
    Teacher(string n, int a, string p) : Person(n, a), position(p) {}
    ~Teacher();

public:
    string position;
};

Teacher::~Teacher()
{
    cout << "destruct Teacher" << endl;
}

int main()
{
    Teacher mzz("maozhuzhen", 50, "vice prof");
    Student mdy("maodongyang", 21, "201910311127");
    cout << mzz.position << endl;
    cout << mdy.stuID << endl;
    cout << mzz.age << endl;
    return 0;
}
