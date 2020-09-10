package Beginner;

public class Java0013_PythagoreanTriples {

    public static void main(String[] args)
    {

        int side1, side2;
        boolean flag = true;

        // 353'ten sonrakilerde hipotenus 500'un ustune cikiyor
        for (side1 = 1; side1 < 354; side1++) {

            for (side2 = side1; flag; side2++) {

                int result = (int) (Math.pow(side1, 2) + Math.pow(side2, 2));

                if(Math.sqrt(result) % 1 == 0)
                    System.out.println("Side1 => "+ side1 + "\tSide2 => "+ side2 + "\tHypotenuse => "+ (int) Math.sqrt(result));

                if(Math.sqrt(result) > 500)
                    flag = false;
            }
            flag = true;
        }
    }
}
