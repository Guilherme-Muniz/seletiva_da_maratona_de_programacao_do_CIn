def binarizar(x):
    xstring = ''
    if x ==0:
        xstring = '0000000'
    while x > 0:
        resto = x %2
        xstring = str(resto)+xstring
        x = x//2
    xstring = '0'*(7-len(xstring)) + xstring
    return xstring
def desbinarizar(x):
    num = int(x[0]) * 64 + int(x[1]) * 32 + int(x[2]) * 16 + int(x[3]) * 8 + int(x[4]) * 4 + int(x[5]) * 2 + int(x[6]) * 1
    return num

def bitwise_xor(x,y):
    if x[0] == y[0]:
        bit0 = '0'
    else:
        bit0 = '1'
    if x[1] == y[1]:
        bit1 = '0'
    else:
        bit1 = '1'
    if x[2] == y[2]:
        bit2 = '0'
    else:
        bit2 = '1'
    if x[3] == y[3]:
        bit3 = '0'
    else:
        bit3 = '1'
    if x[4] == y[4]:
        bit4 = '0'
    else:
        bit4 = '1'
    if x[5] == y[5]:
        bit5 = '0'
    else:
        bit5 = '1'
    if x[6] == y[6]:
        bit6 = '0'
    else:
        bit6 = '1'
    bitresultante = bit0 + bit1 + bit2 + bit3 + bit4 + bit5 + bit6
    return bitresultante

t = int(input())
for i in range(t):
    n = int(input())
    array = input().split()
    array.pop()
    atual = ''
    for j in range(n-1):
        if j == 0:
            atual = binarizar(int(array[j]))
        else:
            atual = bitwise_xor(atual,binarizar(int(array[j])))
    print(desbinarizar(atual))