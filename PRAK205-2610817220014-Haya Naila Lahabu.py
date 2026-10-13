import math

A = float(input())
B = float(input())

alas = round(math.sqrt((B ** 2) - (A ** 2)))
tinggi = round(A)
sisi_miring = round(B)

keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm^2" % luas)