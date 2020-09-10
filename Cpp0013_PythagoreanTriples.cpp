#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int side1, side2;
    bool flag = true;

    // 353'ten sonrakilerde hipotenus 500'un ustune cikiyor
    for (side1 = 1; side1 < 354; side1++)
    {

        for (side2 = side1; flag; side2++)
        {

            int result = (int)(pow(side1, 2) + pow(side2, 2));

            if (fmod(sqrt(result),1) == 0)
                cout << "Side1 => " << side1 << "\tSide2 => " << side2 << "\tHypotenuse => " << sqrt(result) << endl;

            if (sqrt(result) > 500)
                flag = false;
        }
        flag = true;
    }
}