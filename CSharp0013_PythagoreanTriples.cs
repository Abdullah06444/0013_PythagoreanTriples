using System;

namespace CSharp0013_PythagoreanTriples
{
    class CSharp0013_PythagoreanTriples
    {
        static void Main(string[] args)
        {

            int side1, side2;
            bool flag = true;

            // 353'ten sonrakilerde hipotenus 500'un ustune cikiyor
            for (side1 = 1; side1 < 354; side1++)
            {

                for (side2 = side1; flag; side2++)
                {

                    int result = (int) (Math.Pow(side1, 2) + Math.Pow(side2, 2));
                    
                    if(Math.Sqrt(result) % 1 == 0)
                        Console.WriteLine("Side1 => " + side1 + "\tSide2 => " + side2 + "\tHypotenuse => " + Math.Sqrt(result));

                    if (Math.Sqrt(result) > 500)
                        flag = false;
                }
                flag = true;
            }
        }
    }
}
