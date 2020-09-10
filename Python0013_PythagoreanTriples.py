import math

side1 = 1
flag = True

# 353'ten sonrakilerde hipotenus 500'un ustune cikiyor
while side1 < 354:
    side2 = side1
    while flag:
        result = math.pow(side1, 2) + math.pow(side2, 2)
        if math.sqrt(result) % 1 == 0:
            print("Side1 => ", side1, "\tSide2 => ", side2, "\tHypotenuse => ", int(math.sqrt(result)))
        if math.sqrt(result) > 500:
            flag = False
        side2 += 1
    side1 += 1
    flag = True
