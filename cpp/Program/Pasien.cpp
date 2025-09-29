#include "Orang.cpp"

class Pasien : public Orang
{
private:
    string tglLahir;
    string penyakit;
    string golDarah;
    string alamat;

public:
    Pasien() : Orang()
    {
    }

    Pasien(int id, string nik, string nama,
           string tglLahir, string penyakit,
           string golDarah, string alamat)
        : Orang(id, nik, nama)
    {
        this->tglLahir = tglLahir;
        this->penyakit = penyakit;
        this->golDarah = golDarah;
        this->alamat = alamat;
    }

    // setter
    void setTglLahir(string tglLahir)
    {
        this->tglLahir = tglLahir;
    }

    void setPenyakit(string penyakit)
    {
        this->penyakit = penyakit;
    }

    void setGolDarah(string golDarah)
    {
        this->golDarah = golDarah;
    }

    void setAlamat(string alamat)
    {
        this->alamat = alamat;
    }

    // getter
    string getTglLahir()
    {
        return tglLahir;
    }

    string getPenyakit()
    {
        return penyakit;
    }

    string getGolDarah()
    {
        return golDarah;
    }

    string getAlamat()
    {
        return alamat;
    }
};
