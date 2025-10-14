💾 6-Bit Kodlama Sistemi ile Karakter Tabanlı Toplama Uygulaması

Bu proje, Unix öncesi sistemlerdeki kısıtlı Girdi/Çıktı (I/O) ortamını simüle etmek için geliştirilmiş bir C programıdır.
Program, kullanıcıdan iki tek haneli rakamı ASCII karakterleri olarak alır, 6-bit kodlama mantığına göre toplar ve sonucu ekrana yazdırır.
Eğer toplam 9’u aşarsa, program hata mesajı verir.

🎯 Projenin Amacı

6-bit kodlama sisteminin temel mantığını anlamak,

Karakter tabanlı (ASCII) işlemleri uygulamak,

Unix öncesi sınırlı sistemleri simüle etmek,

C dilinde girdi/çıktı yönetimi ve hata kontrolü becerilerini geliştirmek.



⚙️ Programın Çalışma Mantığı

Kullanıcıdan iki karakter alınır ('0'–'9' arası).

Bu karakterler sayısal değere dönüştürülür ('0' çıkarılarak).

İki sayı toplanır.

Eğer toplam 9’dan büyükse, 6-bit sınırı aşıldığı uyarısı verilir.

Aksi halde sonuç karaktere dönüştürülür ve ekrana yazdırılır.

## 💻 Kullanılan Bileşenler

| Bileşen/Nesne | Kullanım Amacı |
| :--- | :--- |
| `stdio.h` | Standart giriş/çıkış (`printf`, `scanf`) işlemlerini gerçekleştirmek. |
| `ctype.h` | Girdinin gerçekten bir rakam karakteri (`'0'`-`'9'`) olup olmadığını kontrol eden `isdigit()` fonksiyonunu kullanmak. |
| `char` değişkenler | Karakter tabanlı I/O simülasyonu için girdi ve çıktıyı saklamak. |
| `int` değişkenler | Matematiksel toplama işlemini güvenle yapmak ve hata kontrolünü gerçekleştirmek. |
| `ch - '0'` | Karakteri sayısal değere dönüştüren temel ASCII aritmetik tekniği. |
| `if (toplam > 9)` | Proje kısıtlaması olan "tek haneli sonuç" kontrol mekanizması. |

## 📝 Çalıştırma Örnekleri (Terminal Çıktıları)

```bash
$ ./toplama_uygulamasi 
--- 6-Bit Karakter Tabanlı Toplama Simülasyonu ---
Kısıtlama: Yalnızca tek haneli (0-9) sonuçlar kabul edilir.

Birinci rakamı giriniz (Karakter olarak): 3
İkinci rakamı giriniz (Karakter olarak): 5

--- Hesaplama Sonuçları ---
➡️ Girdi Karakterleri: '3' (ASCII 51) ve '5' (ASCII 53)
➡️ Sayısal Değerler: 3 + 5
✅ Toplam Sonucu (Sayısal): 8
✅ Toplam Sonucu (Karakter): '8'
ℹ️ Sonuç Karakterin ASCII Kodu: 56 (Bu değer 6-bit kodlamaya uygundur.)

$ ./toplama_uygulamasi
--- 6-Bit Karakter Tabanlı Toplama Simülasyonu ---
Kısıtlama: Yalnızca tek haneli (0-9) sonuçlar kabul edilir.

Birinci rakamı giriniz (Karakter olarak): 7
İkinci rakamı giriniz (Karakter olarak): 5

❌ Hata (6-Bit Kısıtlaması): Sonuç tek haneli olmalıdır.
İşlem: 7 + 5 = 12 (Çift Hane)




🧠 6-Bit ve 8-Bit Kodlama Karşılaştırması
| Özellik                  | 6-Bit Kodlama                            | 8-Bit Kodlama (ASCII)                 |
| ------------------------ | ---------------------------------------- | ------------------------------------- |
| Bit Sayısı               | 6 bit                                    | 8 bit                                 |
| Maksimum Karakter Sayısı | 64                                       | 256                                   |
| Kullanım Alanı           | Eski terminaller, teletype sistemleri    | Modern bilgisayarlar                  |
| Bellek Kullanımı         | Düşük                                    | Daha fazla                            |
| Desteklenen Karakterler  | Büyük harfler, rakamlar, temel semboller | Harf, rakam, sembol, özel karakterler |

🔹 Sonuç:
6-bit kodlama eski sistemlerde bellek tasarrufu için tercih edilmiştir.
Günümüzde 8-bit ASCII sistemi çok daha geniş karakter desteği sağlar.


🤖 Geliştirme Süreci ve Yapay Zeka Desteği
Bu projenin geliştirilmesi ve belgelenmesi aşamalarında, modern yapay zeka dil modellerinden destek alınmıştır. Bu destek, öğrenme sürecini hızlandırmış ve projenin teknik standartlara uygunluğunu artırmıştır.

Kullanılan Araç	Faydalanılan Alanlar
Google Gemini:
Proje Planlama, Kod İyileştirme ve Belgeleme ödevin teknik kriterlerinin kontrol edilmesi ve GitHub README formatının hazırlanması süreçlerinde danışmanlık görevi görmüştür.
OpenAI ChatGPT:
Proje videosunda sunulacak olan 6-Bit ve 8-Bit kodlama sistemleri karşılaştırması ve bu sistemlerin Unix öncesi ortamlarla olan ilişkisi hakkında teorik bilgilerin toplanması ve sunum formatının oluşturulmasında, GitHub kullanımında yardımcı olarak kullanılmıştır.

---
