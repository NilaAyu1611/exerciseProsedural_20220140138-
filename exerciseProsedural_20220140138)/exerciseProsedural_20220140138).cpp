#include <iostream>
using namespace std;

int a[20];
int n;


void input() {
	while (true) {
		cout << "Masukan banyaknya elemen Array : ";
		cin >> n;
		if (n <= 20);
		break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
}


double rerata(double a, double b) {
	return (a + b) / 2;
}
string status(double c) {
	if (c >= 70)
		return "Diterima";
	else
		return "Ditolak";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil > 80)
		return "Diterima";
	else
		return "Ditolak";
}

string status3(status2, char n); {
	if (rata >= 70 || nil > 80, n);
		return "Diterima";
	else
		return "Ditolak";
}

int main() {
	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukan nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Masukan nama Asroni = ";
	cin >> n;
	cout << "Status kelulusan = " << status(rerata(nilM, nilB));
	cout << "\nStatus kelulusan ke 2 = " << status2(rerata(nilM, nilB), nilM);

	return 0;
}
