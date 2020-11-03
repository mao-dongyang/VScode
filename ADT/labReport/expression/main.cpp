#include <iostream>
#include <string>
using namespace std;

char twoDimensionTable[7][7] = {
    {'>', '>', '<', '<', '<', '>', '>'},
    {'>', '>', '<', '<', '<', '>', '>'},
    {'>', '>', '>', '>', '<', '>', '>'},
    {'>', '>', '>', '>', '<', '>', '>'},
    {'<', '<', '<', '<', '<', '=', '?'},
    {'>', '>', '>', '>', '?', '>', '>'},
    {'<', '<', '<', '<', '<', '?', '='}};

typedef struct floatStack
{
    float *base;
    float *top;
    int stacksize;
} floatStack;

typedef struct charStack
{
    char *base;
    char *top;
    int stacksize;
} charStack;

void InitFloatStack(floatStack &s)
{
    s.stacksize = 100;
    s.base = new float[s.stacksize];
    s.top = s.base;
}

void InitCharStack(charStack &s)
{
    s.stacksize = 100;
    s.base = new char[s.stacksize];
    s.top = s.base;
}

template <typename T, typename S>
void Push(T e, S &s)
{
    *(s.top++) = e;
}

template <typename T, typename S>
void Pop(S &s, T &e)
{
    e = *(--s.top);
}

char GetTop(charStack s)
{
    return *(s.top - 1);
}

float Result(floatStack s)
{
    return *(s.top - 1);
}

template <typename T>
bool StackEmpty(T S)
{
    if (S.top == S.base)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
bool StackFull(T S)
{
    if (S.stacksize == S.top - S.base)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int numberPlate(char theta)
{
    switch (theta)
    {
    case '+':
        return 0;
        break;

    case '-':
        return 1;
        break;

    case '*':
        return 2;
        break;

    case '/':
        return 3;
        break;

    case '(':
        return 4;
        break;

    case ')':
        return 5;
        break;

    case '#':
        return 6;
        break;

    default:
        return -1;
        break;
    }
}

int OP(char theta)
{
    switch (theta)
    {
    case '+':
        return true;
        break;

    case '-':
        return true;
        break;

    case '*':
        return true;
        break;

    case '/':
        return true;
        break;

    case '(':
        return true;
        break;

    case ')':
        return true;
        break;

    case '#':
        return true;
        break;

    default:
        return false;
        break;
    }
}

char precede(char theta1, char theta2)
{
    return twoDimensionTable[numberPlate(theta1)][numberPlate(theta2)];
}

float Operate(float a, char theta, float b)
{
    switch (theta)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        return false;
        break;
    }
}

int main()
{
    floatStack OPND;
    charStack OPTR;
    InitFloatStack(OPND);
    InitCharStack(OPTR);
    Push('#', OPTR);
    char c = getchar();
    char top;
    while (c != '#' || GetTop(OPTR) != '#')
    {
        if (!OP(c))
        {

            Push(c - 48, OPND);
            c = getchar();
        }
        else
        {
            switch (precede(GetTop(OPTR), c))
            {
            case '<':
                Push(c, OPTR);
                c = getchar();
                break;

            case '=':
                char x;
                Pop(OPTR, x);
                c = getchar();
                break;

            case '>':
                float a, b;
                char theta;
                Pop(OPTR, theta);
                Pop(OPND, a);
                Pop(OPND, b);
                Push(Operate(b, theta, a), OPND);
                break;

            default:
                cout << "Something is wrong" << endl;
                break;
            }
        }
    }
    cout << Result(OPND) << endl;
    return 0;
}
