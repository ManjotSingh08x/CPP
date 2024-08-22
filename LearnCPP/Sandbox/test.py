def decimalToBinary(a):
    binarystring = ''
    quotient = a
    while quotient > 0: 
        remainder = quotient % 2
        binarystring += str(remainder)
        quotient //= 2
        print(quotient)
    return binarystring[::-1]
        
print(decimalToBinary(69)) # 1000101

    