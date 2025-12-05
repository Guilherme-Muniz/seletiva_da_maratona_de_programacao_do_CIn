t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    lista = []
    for char in s:
        if char !='?' and lista.count(char) < n:
            lista.append(char)
    print(len(lista))