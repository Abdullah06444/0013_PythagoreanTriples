#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

            if (fmod(sqrt(result), 1) == 0)
                printf("Side1 => %d\tSide2 => %d\tHypotenuse => %d\n", side1, side2, (int)sqrt(result));

            if (sqrt(result) > 500)
                flag = false;
        }
        flag = true;
    }
}