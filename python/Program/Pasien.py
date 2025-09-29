from Orang import Orang

class Pasien(Orang):
    def __init__(self, id=None, nik="", nama="",
                 tgl_lahir="", penyakit="",
                 gol_darah="", alamat=""):
        super().__init__(id, nik, nama)
        self._tgl_lahir = tgl_lahir
        self._penyakit = penyakit
        self._gol_darah = gol_darah
        self._alamat = alamat

    # setter
    def set_tgl_lahir(self, tgl_lahir):
        self._tgl_lahir = tgl_lahir

    def set_penyakit(self, penyakit):
        self._penyakit = penyakit

    def set_gol_darah(self, gol_darah):
        self._gol_darah = gol_darah

    def set_alamat(self, alamat):
        self._alamat = alamat

    # getter
    def get_tgl_lahir(self):
        return self._tgl_lahir

    def get_penyakit(self):
        return self._penyakit

    def get_gol_darah(self):
        return self._gol_darah

    def get_alamat(self):
        return self._alamat
