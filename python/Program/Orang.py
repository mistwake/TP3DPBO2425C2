class Orang:
    def __init__(self, id=None, nik="", nama=""):
        self._id = id
        self._nik = nik
        self._nama = nama

    # setter
    def set_id(self, id):
        self._id = id

    def set_nik(self, nik):
        self._nik = nik

    def set_nama(self, nama):
        self._nama = nama

    # getter
    def get_id(self):
        return self._id

    def get_nik(self):
        return self._nik

    def get_nama(self):
        return self._nama
