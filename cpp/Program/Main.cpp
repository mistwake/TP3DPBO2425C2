#include <iostream>
#include <vector>
#include "RawatInap.cpp"
using namespace std;

int main()
{
    // data awal pasien
    Pasien p1(1, "317XXXXXXXXX1", "Andi", "1995-04-12", "Demam", "A", "Jl. Merdeka 10");
    Pasien p2(2, "317XXXXXXXXX2", "Budi", "1990-06-22", "Tipes", "B", "Jl. Sudirman 20");
    Pasien p3(3, "317XXXXXXXXX3", "Citra", "2000-01-15", "Flu", "O", "Jl. Diponegoro 5");
    Pasien p4(4, "317XXXXXXXXX4", "Bunga", "2004-02-29", "Diare", "A", "Jl. Setiabudi 10");
    Pasien p5(5, "317XXXXXXXXX5", "Lestari", "2002-08-30", "Muntaber", "AB", "Jl. Sukajadi 12");

    // data awal kamar
    RawatInap kamar1(101, "VIP", 3, 1, "Tersedia");
    RawatInap kamar2(102, "Standar", 3, 1, "Tersedia");

    // tambah pasien ke kamar
    kamar1.addPasien(p1);
    kamar1.addPasien(p2);
    kamar1.addPasien(p3);
    kamar2.addPasien(p4);
    kamar2.addPasien(p5);

    // cetak kondisi kamar
    kamar1.printPasien();
    kamar2.printPasien();

    // menambah pasien baru
    cout << "\n-- After Nambahin Pasien Baru ke Kamar 102 --\n";
    Pasien p6(6, "317XXXXXXXXX6", "Dewi", "1998-09-30", "Migrain", "AB", "Jl. Gatot Subroto 88");
    kamar2.addPasien(p6);

    // cetak kondisi kamar setelah ditambahin pasien baru
    kamar1.printPasien();
    kamar2.printPasien();

    return 0;
}
