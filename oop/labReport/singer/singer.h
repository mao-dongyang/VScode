#include <iostream>
#include <string>
using namespace std;

class singer
{
public:
    void getPointAverage();
    static void displaySinger(singer s[]);
    singer();
    singer(int, string, int *);
    ~singer();

    int number;
    string name;
    int judge[3];
    double pointAverage;
    static int numberPeople;
};
