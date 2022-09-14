// C++_en_buyuk_sira_dizisini_bulma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
/*
@Adi: Emre
@Soyadi: Maltaş
@Tarih: 25.06.2022
@4 ardışık çarpım sonucu  en büyük  değer "4536"        , Başlangıç Sırası: 365, Bitiş Sırası: 368
@13 ardışık çarpım sonucu en büyük değer  "23514624000" , Başlangıç Sırası: 198, Bitiş Sırası: 210
@14 ardışık çarpım sonucu en büyük değer  "70573265280" , Başlangıç Sırası: 499, Bitiş Sırası: 512
@15 ardışık çarpım sonucu en büyük değer  "282293061120", Başlangıç Sırası: 499, Bitiş Sırası: 513
*/

#include <iostream>
using namespace std;

int buffer[1000]
{
6,4,0,7,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,
9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,
8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,
1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,
6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,
6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,
3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,
7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,
6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,
5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,
5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,
8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,
8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,3,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,
1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,
1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,
2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,
0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,
8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,
0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,
7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0,
};

uint16_t dizinin_boyutu_k = 1000;
uint16_t bakilacak_ardisik_sayi = 15;
uint64_t carpim = 0;

void dizi_istenilenler(uint16_t* dizinin_boyutu, uint16_t* bakilacak_ardisik)
{
	uint16_t baslangic = 0;
	uint16_t baslangic2 = 0;
	uint16_t maksimum_deger_sirasi = 0;
	uint64_t maksimum_deger = 0;

	for (baslangic = 0; baslangic <= ((*dizinin_boyutu) - (*bakilacak_ardisik)); baslangic++) //taşma olmaması ve dizinin elemanlarının taranması.
	{
		carpim = buffer[baslangic];

		for (baslangic2 = (baslangic + 1); baslangic2 < baslangic + (*bakilacak_ardisik); baslangic2++) // bulunan konumdan istenen aralığa kadar gidilerek çarpım eldesi.
		{
			carpim *= buffer[baslangic2];
		}
		if (maksimum_deger < carpim)  //maksimum değer ve sırası bulunarak değişkenlere atanıyor.
		{
			maksimum_deger = carpim;
			maksimum_deger_sirasi = baslangic;
		}
	}

	cout << "Carpim sonucu en buyuk deger:" << maksimum_deger << " Baslangic Sirasi:" << maksimum_deger_sirasi + 1
		<< " Bitis Sirasi:" << (maksimum_deger_sirasi + *bakilacak_ardisik) << endl;  //Çarpım sonucu en büyük değer,başlangıç ve bitiş sırası konsola yazdırılıyor.
}

void dizi_ardisik_sayi_girdisi()
{
	cout << "Dizinin kac ardisik deger carpimina bakacaksiniz? ";
	cin >> bakilacak_ardisik_sayi;

	if (bakilacak_ardisik_sayi >= 1 && bakilacak_ardisik_sayi <= 15 && bakilacak_ardisik_sayi <= dizinin_boyutu_k)  //Bakılacak ardışık değerin 1-15(dahil) kadar olması ve dizinin boyutundan küçük-eşit olması için şart koşuldu.
	{
		cout << "Bakilacak ardisik sayi:" << bakilacak_ardisik_sayi << endl;

		dizi_istenilenler(&dizinin_boyutu_k, &bakilacak_ardisik_sayi);   //Veri girilmiş dizinin boyutu ve bakılacak ardışık değer, Max değer ve sıra  bulunmak üzere gönderiliyor.
	}
	else  // Kullanıcı şart dışında giriş yaptı ise, uyarı verilerek tekrar ardışık değer girdisi girmesi için yönlendiriliyor.
	{
		cout << "Lutfen 1-15 arasinda ve dizinin boyutundan kucuk veya esit deger giriniz.(1-15 dahil)\n";
		dizi_ardisik_sayi_girdisi();
	}
}
void dizi_boyut_girisi()//Bu fonksiyon kullanıcının kendi dizisini girebilmesi icin oluşturuldu.Önce kullanıcı gireceği dizinin boyutunu, daha sonra boyut kadar değeri giriyor.
{
	cout << "Lutfen dizinin boyutunu giriniz: ";
	cin >> dizinin_boyutu_k;	//dizinin boyutunun tutulduğu değişken.

	for (int i = 1; i <= dizinin_boyutu_k; i++)   //Boyut kadar değer girilmesi bekleniyor.
	{
		cout << "Dizinin " << i << ". sira degerini giriniz: ";
		cin >> buffer[i - 1];
	}
	cout << "Dizinin eleman sayisi:" << dizinin_boyutu_k << endl;

	dizi_ardisik_sayi_girdisi();		//Girilen değerlerden sonra kullanıcı kaç ardışık çarpım istiyor ise onu girmesi için bu fonksiyon oluşturuldu.
}
int main()
{
	  dizi_boyut_girisi();  //Buradan kullanıcı kendi dizisini oluşturarak bulması gerekenleri bulabilir.
	//dizi_istenilenler(&dizinin_boyutu_k, &bakilacak_ardisik_sayi); //yukarıda tanımlanmış bakilacak_ardisik_sayi değeri değiştirilerek verilen diziden sonuclar elde edilebilir.
}
