t = int(input())
for i in range(t):
    simounao = "YES"
    letrasProibidas = []
    n = int(input())
    string = input()
    for char in range(len(string)):
        if char !=0:
            if string[char - 1] != string[char]:
                letrasProibidas.append(string[char-1])
        if string[char] in letrasProibidas:
            simounao = "NO"
    print(simounao)