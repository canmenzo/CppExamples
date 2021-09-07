// Mehmet Can Ozmen
// 4/25/2020

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
	// constants
	const string FILENAME = "ogrenciBilgi.txt";
	const string PROMPT = "Lutfen adinizi giriniz: ";
	const string PROMPT2 = "Lutfen 4 haneli ogrenci numaranizi giriniz: ";
    const string SPACE = " ";
    const string ERROR = "Yanlis bir giris yaptiniz, lutfen tekrar deneyin!";

	// variables
	int ogrenciNum = 0;
	string ogrenciAd = "";
	string line;

	// input alma
	cout << PROMPT;
	cin >> ogrenciAd;
    do {
        cout << PROMPT2;
        cin >> ogrenciNum;
        if (ogrenciNum < 100 || ogrenciNum >= 10000)
        {
            cout << ERROR;
        }
    } while(ogrenciNum < 1000 || ogrenciNum >= 10000);

    // open output file
    ofstream outputFile;
    outputFile.open(FILENAME);
    if (outputFile)
        {
        // output to the file and display closing file notification
        outputFile << ogrenciAd << endl;
        outputFile << ogrenciNum << endl;
        outputFile << ogrenciAd << SPACE << ogrenciNum << endl;
        cout << "ogrenciBilgi.txt dosyasi yazildi! Yazma islemi tamamlandi!" << endl;
        cout << SPACE << endl;

        // read from the file
        ifstream FILENAME ("ogrenciBilgi.txt");
        if (FILENAME.is_open())
        {
            while ( getline (FILENAME,line))
            {
                cout << line << endl;
            }
            FILENAME.close();
            cout << SPACE << endl;
        }
        else cout << "Dosyayi acamadim.";
        cout << "Dosya kapaniyor..." << endl;
        outputFile.close();
        }
	return 0;
}
