#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
float x, y;
int c;
string s;
float probeg(float a)
{
    float b;
    if (a < -4)
    {
        b = -3;
    }
    else if (a < -3)
    {
        b = 2 * a + 6;
    }
    else if (a < 3)
    {
        b = sqrt(9 - pow(x, 2));
    }
    else if (a < 8)
    {
        b = (3 * a - 9) / 5;
    }
    else
    {
        b = 3;
    }
    return b;
};

int main()
{
    // Код для вычисления Y при X для 16 варианта
    ofstream prout("text2.txt");

    x = -8;
    c = 1;
    for (x; x < 10; x++)
    {
        prout << c << " ";
        c++;
        y = probeg(x);
        prout << y << "\n";
    }
    prout.close();
    ifstream prin("text2.txt");
    while (getline(prin, s))
    {
        cout << s;
        cout << "\n";
    };
    prin.close();
}