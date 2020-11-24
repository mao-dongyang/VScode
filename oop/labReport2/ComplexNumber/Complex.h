typedef struct complex
{
    double real;
    double imag;
} complex; // 定义复数

class Complex
{
public:
    Complex(double real, double imag);
    ~Complex();

    complex data;

    void displayComplex();
    Complex operator*(Complex const &c2);
    Complex operator/(Complex const &c2);
    Complex operator+(Complex const &c2);
    Complex operator-(Complex const &c2);
};