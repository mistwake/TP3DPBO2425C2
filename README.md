# TP3

## JANJI
Saya Anas Miftakhul Falah dengan 2410865 mengerjakan tugas praktikum 3
dalam mata kuliah DPBO untuk keberkahan-Nya maka saya
tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.

## DESC
Program ini adalah implementasi OOP berbasis C++ dan Python dengan tema rumah sakit.  
Program ini menggunakan minimal 3 kelas: **Orang**, **Pasien**, dan **RawatInap** untuk menunjukkan konsep:
- Inheritance (pewarisan)
- Composition (komposisi)
- Array of Object (menggunakan vector/list/ArrayList)

<img width="381" height="751" alt="diagram" src="https://github.com/user-attachments/assets/30e93143-7a37-4b6d-99f9-e4e9ac2f3e05" />

## Penjelasan Class
### 1. **Orang**
- **Deskripsi:**  
  Kelas dasar yang menyimpan atribut umum orang. Semua entitas manusia (pasien, dokter, perawat) bisa mewarisi kelas ini supaya tidak perlu menduplikasi atribut umum.

- **Atribut:**
  - `id` → kode unik orang.
  - `nik` → nomor induk kependudukan.
  - `nama` → nama orang.

- **Method:**
  - `getId()` → Mengambil nilai `id` orang.
  - `getNik()` → Mengambil nilai `nik` orang.
  - `getNama()` → Mengambil nilai `nama` orang.
  - `setId(id)` → Mengatur `id` orang.
  - `setNik(nik)` → Mengatur `nik` orang.
  - `setNama(nama)` → Mengatur `nama` orang.

### 2. **Pasien** (turunan dari **Orang**)
- **Deskripsi:**  
  Kelas ini mewarisi atribut umum dari Orang, lalu menambahkan atribut khusus untuk pasien rumah sakit. Ini memungkinkan kita menyimpan semua data penting pasien.

- **Atribut Tambahan:**
  - `tglLahir` → tanggal lahir pasien.
  - `penyakit` → jenis penyakit pasien.
  - `golDarah` → golongan darah pasien.
  - `alamat` → alamat pasien.

- **Method Tambahan:**
  - `getTglLahir()` → Mengambil tanggal lahir pasien.
  - `getPenyakit()` → Mengambil penyakit pasien.
  - `getGolDarah()` → Mengambil golongan darah pasien.
  - `getAlamat()` → Mengambil alamat pasien.
  - `setTglLahir(tgl)` → Mengatur tanggal lahir pasien.
  - `setPenyakit(penyakit)` → Mengatur penyakit pasien.
  - `setGolDarah(gol)` → Mengatur golongan darah pasien.
  - `setAlamat(alamat)` → Mengatur alamat pasien.

### 3. **RawatInap**
- **Deskripsi:**  
  Kelas yang merepresentasikan kamar rawat inap. Kelas ini tidak mewarisi Orang atau Pasien, tetapi **memiliki** kumpulan Pasien (composition). Atributnya meliputi data kamar dan daftar pasien.

- **Atribut:**
  - `kamarId` → nomor kamar rawat inap.
  - `tipeKamar` → tipe kamar (VIP, Standar, dsb.).
  - `kapasitas` → jumlah maksimum pasien.
  - `lantai` → lantai tempat kamar berada.
  - `status` → status ketersediaan kamar (Tersedia / Penuh).
  - `daftarPasien` → array/list/ArrayList berisi objek Pasien yang sedang dirawat di kamar.

- **Method:**
  - `cariIndex(id)` → Mencari index pasien dalam `daftarPasien` berdasarkan `id`.  
    Mengembalikan index jika ditemukan, atau -1 jika tidak ada.
  - `addPasien(pasien)` → Menambahkan pasien baru ke `daftarPasien`.  
    Mengecek apakah `id` pasien sudah ada dan apakah kapasitas kamar masih tersedia.  
    Mengubah `status` menjadi “Penuh” jika kapasitas terisi penuh.
  - `printPasien()` → Menampilkan seluruh daftar pasien di kamar tersebut (format tabel).  
    Jika `daftarPasien` kosong, menampilkan pesan “Belum ada pasien”.

## FLOW CODE
1. **Inisialisasi Data Pasien**
   - Program membuat beberapa objek `Pasien` (p1, p2, p3, dst.) dengan data awal (id, nik, nama, tgl lahir, penyakit, golongan darah, alamat).

2. **Inisialisasi Data Kamar Rawat Inap**
   - Program membuat objek `RawatInap` (misalnya kamar1 dan kamar2) dengan data kamar (kamarId, tipeKamar, kapasitas, lantai, status).

3. **Menambahkan Pasien ke Kamar**
   - Menggunakan method `addPasien(pasien)`, setiap pasien dimasukkan ke kamar yang sesuai.
   - `addPasien` akan memeriksa apakah:
     - ID pasien sudah ada di daftar kamar tersebut.
     - Kapasitas kamar masih tersedia.
   - Jika penuh, status kamar otomatis diubah menjadi **“Penuh”**.

4. **Menampilkan Daftar Pasien per Kamar**
   - Menggunakan method `printPasien()`, program menampilkan daftar pasien dalam format tabel.
   - Jika daftar pasien kosong, program menampilkan pesan **“Belum ada pasien”**.

5. **Menambah Pasien Baru**
   - Setelah kondisi awal ditampilkan, program membuat objek `Pasien` baru (misalnya p6).
   - Program menambahkan pasien baru ke kamar tertentu dengan `addPasien(p6)`.

6. **Menampilkan Ulang Daftar Pasien**
   - Setelah pasien baru ditambahkan, `printPasien()` dipanggil lagi untuk setiap kamar.
   - Hasilnya terlihat perubahan daftar pasien sebelum dan sesudah penambahan pasien baru.

## DOKUMENTASI
  [C++](https://youtu.be/iVJSIKpZOKA)
  [Python](https://youtu.be/sis5O5-273Q)

      
