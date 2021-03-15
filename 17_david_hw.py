a = "0"
b = 0
c = int(0)
d = int(0)

while a != "k":
    b +=1
    d = input(f"Zadaj {b}. cislo")
    a = input(f"Ak chces skoncit zadaj k, ak nie tak hocco ine.")
    c += int(d)
print (f"Sucet cisiel je: {c}")
print (f"Priemer cisiel je: {c/b}")