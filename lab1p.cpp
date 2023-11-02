#include <iostream>
#include <vector>
#include <string>

using namespace std;

float cot(float x);

int main()
{
    setlocale(LC_ALL, "RU");
    setlocale(LC_ALL, ".UTF8");

    float x;
    cout << "Введите x: ";
    cin >> x;

    float f = cot(x);
    cout << f;

    

    return 0;
}


float cot(float x)
{
    float y;

    if (x <= -3)
    {
        y = 1;
    }
    else if (x > -3 && x <= -1)
    {

        y = -sqrt(4 - pow(x + 1, 2));
    }
    else if (x > -1 && x <= 2)
    {

        y = -2;
    }
    else if (x > 2)
    {

        y = x - 4;
    }

    return y;
}