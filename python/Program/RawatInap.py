from Pasien import Pasien

class RawatInap:
    def __init__(self, kamar_id, tipe_kamar, kapasitas, lantai, status):
        self.kamar_id = kamar_id
        self.tipe_kamar = tipe_kamar
        self.kapasitas = kapasitas
        self.lantai = lantai
        self.status = status
        self.daftar_pasien = []

    # cari index pasien berdasarkan ID
    def cari_index(self, id):
        for i, p in enumerate(self.daftar_pasien):
            if p.get_id() == id:
                return i
        return -1

    # tambah pasien baru
    def add_pasien(self, p: Pasien):
        if self.cari_index(p.get_id()) != -1:
            print(f"Error: ID Pasien {p.get_id()} sudah ada!")
            return

        if len(self.daftar_pasien) < self.kapasitas:
            self.daftar_pasien.append(p)

            if len(self.daftar_pasien) == self.kapasitas:
                self.status = "Penuh"

            print("Pasien berhasil ditambahkan.")
        else:
            print("Kamar sudah penuh!")

    # cetak daftar pasien
    def print_pasien(self):
        print(f"\n=== Kamar {self.kamar_id} ({self.tipe_kamar}) "
              f"Lantai {self.lantai} | Kapasitas: {self.kapasitas} Orang"
              f" | Status: {self.status} ===")

        if not self.daftar_pasien:
            print("(Belum ada pasien)")
            return

        header = f"{'ID':<5}{'Nama':<20}{'NIK':<20}{'TglLahir':<12}{'Penyakit':<15}{'GolDarah':<10}{'Alamat':<20}"
        print(header)
        print("-" * 100)

        for p in self.daftar_pasien:
            print(f"{p.get_id():<5}"
                  f"{p.get_nama():<20}"
                  f"{p.get_nik():<20}"
                  f"{p.get_tgl_lahir():<12}"
                  f"{p.get_penyakit():<15}"
                  f"{p.get_gol_darah():<10}"
                  f"{p.get_alamat():<20}")
