end_n = 0
sum_c = 0

end_n = input(f"Zadaj koncove cislo: ")
for i in range(int(end_n)):
    sum_d = 0
    for j in range(i):
        if j!=0:
            if i%j==0:
                sum_d += int(j)
    if sum_d==2*i:
        sum_c += 1
print(f"Pocet perfectnych cisiel je: {sum_c}")