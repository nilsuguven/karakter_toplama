/*
 * Proje: 6-bit Kodlama Sistemi ile Karakter Tabanlı Toplama Uygulaması
 * Açıklama:
 * Bu programda iki karakter girdisi (örneğin '2' ve '4') alıp, bunları 6-bit formatında topluyorum.
 * Eğer sonuç 9'dan büyük olursa hata veriyor çünkü ödev gereği tek haneli sonuçlar kabul ediliyor.
 *
 *Unix öncesi sistemlerdeki kısıtlı Girdi/Çıktı (I/O) simüle etmek amacıyla sadece karakter okuma
  ve basit bit işlemleri kullandım.
  */

#include <stdio.h>  // Standart giriş/çıkış işlemleri için gerekli (printf, scanf gibi fonksiyonlar burada tanımlıdır)
#include <ctype.h>  // Karakter kontrolü için gerekli kütüphane (isdigit() fonksiyonunu kullanmak için)

int main(void) {  // Programın başlangıç noktası (main fonksiyonu)
    char ch1, ch2 ; // Kullanıcıdan alınacak iki karakter değişkeni (rakam karakterleri)
    int n1, n2, toplam;   // Karakterlerden dönüştürülecek sayılar ve bunların toplamı için tamsayı değişkenleri

    // Kullanıcıdan birinci rakamı karakter olarak ister
    printf("Birinci rakamı giriniz (0-9): ");
    if (scanf(" %c", &ch1) != 1) {   // scanf ile tek karakter okunur, baştaki boşluk önceki boşlukları atlar
        printf("Girdi okunamadı.\n");  // Eğer giriş başarısızsa hata mesajı yazdırılır
        return 1;   // Program hatalı sonlandırılır
    }

    // Kullanıcıdan ikinci rakamı karakter olarak ister
    printf("İkinci rakamı giriniz (0-9): ");
    if (scanf(" %c", &ch2) != 1) {   // Aynı şekilde ikinci karakter okunur
        printf("Girdi okunamadı.\n");
        return 1;
    }
    // Girilen değerlerin rakam olup olmadığını kontrol eder
    if (!isdigit((unsigned char)ch1) || !isdigit((unsigned char)ch2)) {
        // isdigit() fonksiyonu karakterin 0-9 arası bir rakam olup olmadığını kontrol eder
        printf("Hata: Lütfen sadece tek haneli rakamlar (0-9) giriniz.\n");
        return 1;  // Eğer rakam değilse program sonlandırılır
        }
    // ASCII tablosuna göre karakteri sayısal değere çevirir
    // Örnek: '3' karakterinin ASCII değeri 51, '0' karakteri 48 → 51 - 48 = 3
        n1 = ch1 - '0'; // '3' - '0' = 3
        n2 = ch2 - '0';

    // İki sayının toplamını hesaplar
        toplam = n1 + n2;

    // 6-bit simülasyonu: tek haneli sınırı aşmaması beklenir
    if (toplam > 9) {
        // Eğer sonuç 9’dan büyükse 6-bitlik sınır aşıldı demektir
        printf("Hata: Sonuç tek haneli değil (toplam = %d). 6-bit sınırı aşıldı.\n", toplam);
    }
    else {
        // Toplamı tekrar karaktere dönüştürür
        // Örneğin toplam 5 ise → '5' karakterine çevrilir
        char sonuc_karakter = (char)(toplam+ '0');

        // Sonucu hem sayısal hem karakter biçiminde ekrana yazdırır
        printf("✅ Sonuç: %d + %d = %c (ASCII: %d)\n",
               n1, n2, sonuc_karakter, (int)sonuc_karakter);
    }

    return 0;  // Program başarıyla bittiğinde 0 değeri döndürülür
    }