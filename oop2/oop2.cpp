#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMk;
public:
	void inputMK() {

		cout << "\nMasukkan jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukkan Kode MK= ";
		cin >> kode;
		cout << "\nMasukkan Nama MK= ";
		cin >> namaMk;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMk << endl;

	}
};

int main() {
	Mahasiswa mhs;
	MataKuliah mk;

	cout << "\nMasukkan NIM mahasiswa= ";
	cin >> mhs.nim;
	cout << "\nMasukkan nama= ";
	cin >> mhs.nama;

	mk.inputMK();
	mhs.tampil();
	cout << endl;
	mk.tampilMK();
}