
/****************************************************************************
**
** ÖĞRENCİ ADI...........................: Yusuf Sedat SAĞALTICI	
** ÖĞRENCİ NUMARASI.............: B201210031
** DERS GRUBU........: 1 - A Grubu
* 
****************************************************************************/



#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct Ozellikler
{
	int yukseklik = 0;
	char sembol ='a';
};

const int ESAY = 20;

int main()
{
	

	setlocale(LC_ALL, "Turkish");

	char sembolDizi[4] = { '$','+','x','-' };

	Ozellikler ucgen;


	int ucgenler[ESAY] = {};		
	char ucgenSemboller[ESAY] = {};
	
	int sayac = 0;
	int secilenUcgen=0;
	char deger = 'a';
			
		
					
		do
		{	
			
			ucgen.yukseklik = 0 + rand() % 8 + 3; // 3 ile 10 arasında değer verme 
			ucgen.sembol = sembolDizi[0+rand() % 4]; // Rastgele bir sembol atama

			int yukseklik = ucgen.yukseklik;
			char sembol = ucgen.sembol;

			

			if (ucgenler[0]==0)
			{	
				cout << setw(51) << "*************" << endl;
				cout << setw(47) << " Dizi bos" << endl;
				cout << setw(51) << "*************" << endl;

			}
			
										
			do {
				cin >> deger;

				if (deger != 'd' && deger != 'w' && deger != 's') {

					cout << "Lütfen Geçerli Bir Değer Giriniz:" << endl;
				}
			} while (deger != 'd' && deger != 'w' && deger != 's');

			

			if (deger == 'd')
			{
				if (sayac < ESAY) // 20'den az veya 20 tane üçgen eklenmişse
				{
					system("cls");

					int eklenecekKonum = secilenUcgen;

					for (int i = sayac; i > eklenecekKonum; --i) // Dizideki elemanları kaydırma (Araya ekleme)
					{
						ucgenler[i] = ucgenler[i - 1];
						ucgenSemboller[i] = ucgenSemboller[i - 1];

					}
					ucgenler[eklenecekKonum] = yukseklik;
					ucgenSemboller[eklenecekKonum] = sembol;
					secilenUcgen = eklenecekKonum;
					sayac++;

					cout << setw(51) << "*************" << endl;

					for (int i = 0; i < ESAY; i++)   //Diziyi yazdırma
					{
						if (ucgenler[i] == 0) {

							continue;
						}
						else {

							if (secilenUcgen == i)
							{
								cout << setw(38) << "---> " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							else {
								cout << setw(38) << "     " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							cout << setw(51) << "*************" << endl;


						}
					}



					for (int i = 0; i < yukseklik; ++i) // Satır sayısı kadar dönecek bir döngü (yani yükseklik)
					{
						for (int j = 0; j < 2 * yukseklik - 1; ++j) // Sütun sayısı kadar dönecek bir döngü (yani taban) 
						{

							if (j == yukseklik - 1 - i || j == yukseklik - 1 + i || i == yukseklik - 1)
							{

								cout << sembol;

							}
							else {

								cout << " ";

							}

						}

						cout << endl;

					}


				}
				else {
					cout << "Maksimum ucgen sayisina ulasildi. Daha fazla ucgen eklenemez." << endl;
				}
			}
						
			if (deger == 'w')
			{	
				system("cls");

				if (secilenUcgen > 0)
				{
					secilenUcgen--;

					cout << setw(51) << "*************" << endl;

					for (int i = 0; i < ESAY; i++)   //Diziyi yazdırma
					{
						if (ucgenler[i] == 0) {

							continue;
						}
						else {

							if (secilenUcgen == i)
							{
								cout << setw(38) << "---> " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							else {
								cout << setw(38) << "     " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							cout << setw(51) << "*************" << endl;


						}
					}

					int wYukseklik = ucgenler[secilenUcgen];
					char wSembol = ucgenSemboller[secilenUcgen];



					for (int i = 0; i < wYukseklik; ++i) // Satır sayısı kadar dönecek bir döngü (yani yükseklik)
					{
						for (int j = 0; j < 2 * wYukseklik - 1; ++j) // Sütun sayısı kadar dönecek bir döngü (yani taban) 
						{

							if (j == wYukseklik - 1 - i || j == wYukseklik - 1 + i || i == wYukseklik - 1)
							{

								cout << wSembol;

							}
							else {

								cout << " ";

							}

						}

						cout << endl;

					}

				} 
				else if (secilenUcgen == 0) {
					secilenUcgen = sayac - 1;

					cout << setw(51) << "*************" << endl;

					for (int i = 0; i < ESAY; i++)   //Diziyi yazdırma
					{
						if (ucgenler[i] == 0) {

							continue;
						}
						else {

							if (secilenUcgen == i)
							{
								cout << setw(38) << "---> " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							else {
								cout << setw(38) << "     " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							cout << setw(51) << "*************" << endl;


						}
					}

					int wYukseklik = ucgenler[secilenUcgen];
					char wSembol = ucgenSemboller[secilenUcgen];

					for (int i = 0; i < wYukseklik; ++i) // Satır sayısı kadar dönecek bir döngü (yani yükseklik)
					{
						for (int j = 0; j < 2 * wYukseklik - 1; ++j) // Sütun sayısı kadar dönecek bir döngü (yani taban) 
						{

							if (j == wYukseklik - 1 - i || j == wYukseklik - 1 + i || i == wYukseklik - 1)
							{

								cout << wSembol;

							}
							else {

								cout << " ";

							}

						}

						cout << endl;

					}

				}

			}
			if (deger == 's')
			{	
				system("cls");

				if (secilenUcgen < sayac - 1)
				{
					secilenUcgen++;

					cout << setw(51) << "*************" << endl;

					for (int i = 0; i < ESAY; i++)   //Diziyi yazdırma
					{
						if (ucgenler[i] == 0) {

							continue;
						}
						else {

							if (secilenUcgen == i)
							{
								cout << setw(38) << "---> " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							else {
								cout << setw(38) << "     " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							cout << setw(51) << "*************" << endl;


						}
					}

					int wYukseklik = ucgenler[secilenUcgen];
					char wSembol = ucgenSemboller[secilenUcgen];

					for (int i = 0; i < wYukseklik; ++i) // Satır sayısı kadar dönecek bir döngü (yani yükseklik)
					{
						for (int j = 0; j < 2 * wYukseklik - 1; ++j) // Sütun sayısı kadar dönecek bir döngü (yani taban) 
						{

							if (j == wYukseklik - 1 - i || j == wYukseklik - 1 + i || i == wYukseklik - 1)
							{

								cout << wSembol;

							}
							else {

								cout << " ";
							}


						}

						cout << endl;

					}
				}
				else if (secilenUcgen == sayac - 1) // Son üçgen seçiliyse ve 's' tuşuna basılırsa döngü başına dön
				{
					secilenUcgen = 0;

					cout << setw(51) << "*************" << endl;

					for (int i = 0; i < ESAY; i++)   //Diziyi yazdırma
					{
						if (ucgenler[i] == 0) {

							continue;
						}
						else {

							if (secilenUcgen == i)
							{
								cout << setw(38) << "---> " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							else {
								cout << setw(38) << "     " << "** " << setw(2) << ucgenler[i] << "    " << ucgenSemboller[i] << " **" << endl;
							}
							cout << setw(51) << "*************" << endl;


						}
					}
					int wYukseklik = ucgenler[secilenUcgen];
					char wSembol = ucgenSemboller[secilenUcgen];

					for (int i = 0; i < wYukseklik; ++i) // Satır sayısı kadar dönecek bir döngü (yani yükseklik)
					{
						for (int j = 0; j < 2 * wYukseklik - 1; ++j) // Sütun sayısı kadar dönecek bir döngü (yani taban) 
						{

							if (j == wYukseklik - 1 - i || j == wYukseklik - 1 + i || i == wYukseklik - 1)
							{

								cout << wSembol;

							}
							else {

								cout << " ";

							}

						}

						cout << endl;

					}
				}
			}
			


		} while (deger == 'd'|| deger== 'w' || deger == 's');
		
			
		return 0;




}
