#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void displayCurrentDateTime() {

	// Mevcut tarih ve saati alýp tm* yapýsýna yükleyeceðiz.
	time_t now = time(0);
	tm localtm;
	localtime_s(&localtm, &now);

	cout << "Mevcut Tarih ve Saat: " << endl;
	
	// Tarihi yazdýrma iþlemleri:
	cout << "Tarih: " << 1900 + localtm.tm_year << "-"
		 << setw(2) << setfill('0') << 1 + localtm.tm_mon << "-"
		 << setw(2) << setfill('0') << localtm.tm_mday << endl;

	// Saati yazdirma islemleri:
	cout << "Saat: " << setw(2) << setfill('0') << localtm.tm_hour << ":"
		 << setw(2) << setfill('0') << localtm.tm_min << ":"
		 << setw(2) << setfill('0') << localtm.tm_sec << endl;

}
int main() {

	displayCurrentDateTime();

	return 0;
}