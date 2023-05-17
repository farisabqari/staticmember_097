#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //consructor
	~angka(); //destructor
	void cetakData();
	void isiData();
};
//definisi memeber Function
angka::angka(int i){ //contruktor
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka(){ //destructor
	cout<<endl;
	cetakData();
	delete[]arr;
	cout << "alamat array sudh dilepaskan" << endl;
}
void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
	