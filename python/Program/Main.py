from Pasien import Pasien
from RawatInap import RawatInap

def main():
    # data awal pasien
    p1 = Pasien(1, "317XXXXXXXXX1", "Andi", "1995-04-12", "Demam", "A", "Jl. Merdeka 10")
    p2 = Pasien(2, "317XXXXXXXXX2", "Budi", "1990-06-22", "Tipes", "B", "Jl. Sudirman 20")
    p3 = Pasien(3, "317XXXXXXXXX3", "Citra", "2000-01-15", "Flu", "O", "Jl. Diponegoro 5")
    p4 = Pasien(4, "317XXXXXXXXX4", "Bunga", "2004-02-29", "Diare", "A", "Jl. Setiabudi 10")
    p5 = Pasien(5, "317XXXXXXXXX5", "Lestari", "2002-08-30", "Muntaber", "AB", "Jl. Sukajadi 12")

    # data awal kamar
    kamar1 = RawatInap(101, "VIP", 3, 1, "Tersedia")
    kamar2 = RawatInap(102, "Standar", 3, 1, "Tersedia")

    # tambah pasien ke kamar
    kamar1.add_pasien(p1)
    kamar1.add_pasien(p2)
    kamar1.add_pasien(p3)
    kamar2.add_pasien(p4)
    kamar2.add_pasien(p5)

    # cetak kondisi kamar
    kamar1.print_pasien()
    kamar2.print_pasien()

    # menambah pasien baru
    print("\n-- After Nambahin Pasien Baru ke Kamar 102 --")
    p6 = Pasien(6, "317XXXXXXXXX6", "Dewi", "1998-09-30", "Migrain", "AB", "Jl. Gatot Subroto 88")
    kamar2.add_pasien(p6)

    # cetak kondisi kamar setelah ditambahin pasien baru
    kamar1.print_pasien()
    kamar2.print_pasien()

if __name__ == "__main__":
    main()
