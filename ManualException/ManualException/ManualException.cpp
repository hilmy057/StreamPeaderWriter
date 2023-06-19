#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;

		cout << "penyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "penegecualian akan dieksekusi" << endl;

	}
	catch (...) {
		cout << "default penegcualian dieksekusi " << endl;
	}

	return 0;

}
