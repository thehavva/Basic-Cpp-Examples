// Taylor Series.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cmath>

using namespace std;
int factorial(int);

int main() {
	int i, x,n;
	double ex=0;
	cout << "Enter value of x :" << endl;
	cin >> x;
	cout << "Enter number of terms :" << endl;
	cin >> n;
	cout << endl << "----------TAYLOR SERIES----------" << endl;
	for (i = 1; i <= n; i++) {
		ex = ex + pow(x, i)/factorial(i);
		cout << ex << endl;
	}
	cout << endl << "Sum of taylor series term is " << ex << endl;
	return 0;
}
int factorial(int x) {
	int i, f = 1;
	for (i = 1; i <=x; i++) {
		f = f * i;
	}
	return f;
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
