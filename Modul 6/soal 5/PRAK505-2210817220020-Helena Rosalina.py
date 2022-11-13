def biodata (tahun,nama,asal):
    tahun_sekarang=2020
    tahun=int(tahun)
    print('Perkenalkan Nama Saya : ',nama)
    print('Umur Saya : ',tahun_sekarang-tahun)
    print('Saya Adalah Angkatan : ',tahun_sekarang)
    print('Asal Saya dari : ',asal)

TahunLahir=int(input())
nama=input()
asal=input()
biodata (TahunLahir, nama, asal)