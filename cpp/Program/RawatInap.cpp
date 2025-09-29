#include <iostream>
#include <iomanip>
#include <vector>
#include "Pasien.cpp"
using namespace std;

class RawatInap
{
private:
    int kamarId;
    string tipeKamar;
    int kapasitas;
    int lantai;
    string status;
    vector<Pasien> daftarPasien;

public:
    RawatInap(int kamarId, string tipeKamar,
              int kapasitas, int lantai,
              string status)
    {
        this->kamarId = kamarId;
        this->tipeKamar = tipeKamar;
        this->kapasitas = kapasitas;
        this->lantai = lantai;
        this->status = status;
    }

    // cari index pasien berdasarkan ID
    int cariIndex(int id)
    {
        for (int i = 0; i < daftarPasien.size(); i++)
        {
            if (daftarPasien[i].getId() == id)
            {
                return i;
            }
        }
        return -1;
    }

    // tambah pasien baru
    void addPasien(Pasien p)
    {
        if (cariIndex(p.getId()) != -1)
        {
            cout << "Error: ID Pasien " << p.getId() << " sudah ada!\n";
            return;
        }

        if (daftarPasien.size() < kapasitas)
        {
            daftarPasien.push_back(p);

            if (daftarPasien.size() == kapasitas)
                status = "Penuh";

            cout << "Pasien berhasil ditambahkan.\n";
        }
        else
        {
            cout << "Kamar sudah penuh!\n";
        }
    }

    // cetak daftar pasien
    void printPasien()
    {
        cout << "\n=== Kamar " << kamarId
             << " (" << tipeKamar << ") "
             << "Lantai " << lantai
             << " | Kapasitas: " << kapasitas << " Orang"
             << " | Status: " << status << " ===\n";

        if (daftarPasien.empty())
        {
            cout << "(Belum ada pasien)\n";
            return;
        }

        cout << left
             << setw(5) << "ID"
             << setw(20) << "Nama"
             << setw(20) << "NIK"
             << setw(12) << "TglLahir"
             << setw(15) << "Penyakit"
             << setw(10) << "GolDarah"
             << setw(20) << "Alamat"
             << "\n";

        cout << string(100, '-') << "\n";

        for (int i = 0; i < daftarPasien.size(); i++)
        {
            cout << left
                 << setw(5) << daftarPasien[i].getId()
                 << setw(20) << daftarPasien[i].getNama()
                 << setw(20) << daftarPasien[i].getNik()
                 << setw(12) << daftarPasien[i].getTglLahir()
                 << setw(15) << daftarPasien[i].getPenyakit()
                 << setw(10) << daftarPasien[i].getGolDarah()
                 << setw(20) << daftarPasien[i].getAlamat()
                 << "\n";
        }
    }
};
