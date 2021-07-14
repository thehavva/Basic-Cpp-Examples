// calculate time.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.

/*Write a C++ program that prompts the user to input the elapsed time for
an event in seconds.The program then outputs the elapsed time in hours,
minutes, and seconds. (For example, if the elapsed time is 9630 seconds,
then the output is 2:40 : 30.)*/

#include <iostream>

using namespace std;

int main() {
	int input,temp, hours, minutes, seconds;
	cout << "Enter the elapsed time as seconds : " << endl;
	cin >> input;
	temp = input;
	hours = temp/ 3600;
	minutes = (temp - hours * 3600) / 60;
	seconds = temp - (hours * 3600 + minutes * 60);
	cout << "Passed Time is " << input << " seconds." << endl;
	cout << "Passed time is " << hours << ":" << minutes << ":" << seconds << endl;
	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
