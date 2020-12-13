#include <iostream>
using namespace std;

class vehicle
{
public:
    void run();
    void stop();
    vehicle(double s, int p) : speed(s), price(p) {}
    ~vehicle();

public:
    double speed;
    int price;
};

void vehicle::run()
{
    cout << "car run" << endl;
}

void vehicle::stop()
{
    cout << "car stop" << endl;
}

vehicle::~vehicle()
{
}

class bicycle : virtual public vehicle
{
public:
    bicycle(double s, int p, int w) : vehicle(s, p), weight(w) {}
    ~bicycle() {}

public:
    int weight;
};

class car : virtual public vehicle
{
public:
    car(double s, int p, int stnu) : vehicle(s, p), seatnum(stnu) {}
    ~car() {}

public:
    int seatnum;
};

class motorcycle : public bicycle, public car
{
public:
    motorcycle(double s, int p, int w, int stnu) : vehicle(s, p), bicycle(s, p, w), car(s, p, stnu) {}
    ~motorcycle() {}
};

int main()
{
    motorcycle moto(60.5, 4000, 56, 2);
    cout << moto.speed << endl;
    cout << moto.price << endl;
    cout << moto.weight << endl;
    cout << moto.seatnum << endl;
    moto.run();
    moto.stop();
    return 0;
}
