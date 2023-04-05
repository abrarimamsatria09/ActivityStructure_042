#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int Umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "masukkan Nama = ";
	cin >> mhs.Nama;
	cout << "masukkan Alamat = ";
	cin >> mhs.Alamat;
	cout << "masukkan Umur = ";
	cin >> mhs.Umur;

	cout << "\nmasukkan NIM = " << mhs.NIM;
	cout << "\nmasukkan Nama = " << mhs.Nama;
	cout << "\nmasukkan Alamat = " << mhs.Alamat;
	cout << "\nmasukkan Umur = " << mhs.Umur;
}

