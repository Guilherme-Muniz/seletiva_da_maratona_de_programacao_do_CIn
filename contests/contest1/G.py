t = int(input())
for i in range(t):
    n = int(input())
    array = input().split()
    cont=0
    for j in range(n-1):
        maior = max(int(array[j]),int(array[j+1]))
        menor = min(int(array[j]),int(array[j+1]))
        while(maior/menor >2):
            menor = menor *2
            cont = cont+1
    print(cont)