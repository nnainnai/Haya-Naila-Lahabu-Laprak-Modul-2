# Menerima input nilai pertama dan kedua sebagai string agar format tampilan asli terjaga
nilai_pertama_str = input("Masukkan Nilai Pertama : ")
nilai_kedua_str = input("Masukkan Nilai Kedua : ")

# Mengubah input ke tipe data float untuk proses perhitungan matematika
nilai_pertama = float(nilai_pertama_str)
nilai_kedua = float(nilai_kedua_str)

# Menghitung hasil penjumlahan
hasil = nilai_pertama + nilai_kedua

# Menampilkan output dengan format dua angka di belakang koma untuk hasil penjumlahan[span_3](start_span)[span_3](end_span)
print(f'Hasil dari penjumlahan nilai pertama "{nilai_pertama_str}" dan nilai kedua "{nilai_kedua_str}" adalah "{hasil:.2f}"')