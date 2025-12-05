t = int(input())
for i in range(t):
    horariobr = input()
    horasbr = int(horariobr[0:2])
    minutos = horariobr[3:]
    if 1 <= horasbr <= 11:
        pmouam = "AM"
        horasus = str(horariobr[0:2])
    elif 13 <= horasbr <=23:
        pmouam = 'PM'
        horasus = horasbr - 12
        if horasus <10:
            horasus = f'0{horasus}'
    elif horasbr == 0:
        pmouam = "AM"
        horasus = 12
    elif horasbr == 12:
        pmouam = "PM"
        horasus = horasbr
    
    print(f'{horasus}:{minutos} {pmouam}')