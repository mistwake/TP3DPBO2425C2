#include <string>
using namespace std;

class Orang
{
protected:
    int id;
    string nik;
    string nama;

public:
    Orang()
    {
    }

    Orang(int id, string nik, string nama)
    {
        this->id = id;
        this->nik = nik;
        this->nama = nama;
    }

    // setter
    void setId(int id)
    {
        this->id = id;
    }

    void setNik(string nik)
    {
        this->nik = nik;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    // getter
    int getId()
    {
        return id;
    }

    string getNik()
    {
        return nik;
    }

    string getNama()
    {
        return nama;
    }
};
