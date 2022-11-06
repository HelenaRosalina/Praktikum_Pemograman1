while True:

    choice = input("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan :")
 
    if choice == '1':
        i1 = float(input("Masukkan nilai pertama : "))
        i2 = float(input("Masukkan nilai kedua : "))
        sum = i1 + i2
        print("Hasil penjumlahan adalah ",sum)
    elif choice == '2':
        i1 = float(input("Masukkan nilai pertama : "))
        i2 = float(input("Masukkan nilai kedua : "))
        diff = i1 - i2
        print("Hasil pengurangan adalah ",diff)
 
    elif choice == '3':
        i1 = float(input("Masukkan nilai pertama : "))
        i2 = float(input("Masukkan nilai kedua : "))
        prod = i1 * i2
        print("Hasil perkalian adalah ",prod)
    elif choice == '4':
        i1 = float(input("Masukkan nilai pertama : "))
        i2 = float(input("Masukkan nilai kedua : "))
        div = i1 / i2
        print("Hasil pembagian adalah",div)
 
    elif choice == '5':
        print("Terimakasih, telah menggunakan kalkulator HELENA ROSALINA") 
        break
 
    else:
        print("Input anda salah, silahkan coba lagi ")
