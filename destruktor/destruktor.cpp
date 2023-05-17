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
	