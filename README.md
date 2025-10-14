# 💾 6-Bit Karakter Tabanlı Toplama Simülasyonu (C Projesi)

Bu proje, kısıtlı Girdi/Çıktı (I/O) ortamına sahip Unix öncesi sistemleri simüle etmek amacıyla C dilinde geliştirilmiştir. Program, kullanıcıdan aldığı iki tek haneli rakam karakterini işleyerek toplama işlemini gerçekleştirir ve sonucun tek haneli kalması kısıtlamasını kontrol eder.

## 🎯 Proje Amacı ve Konsept

1.  **Karakter Tabanlı Aritmetik:** Rakamların sayısal değerleri yerine, ASCII karakter karşılıkları üzerinden işlem yapma sürecini anlamak.
2.  **6-Bit Simülasyonu:** Programın kısıtlı kaynak ortamında (6-bit, yani $2^6=64$ karaktere kadar) çalışabileceğini varsaymak ve bu kısıtlamayı **tek haneli sonuç** zorunluluğu ile uygulamak.
3.  **Hata Kontrolü:** Toplama sonucunun $9$'u aşması durumunda hata döndürerek simülasyonun kısıtlamasına uyulmasını sağlamak.

## ⚙️ Çalışma Mantığı

| Aşama | İşlem | Örnek (`'3'` ve `'5'`) |
| :--- | :--- | :--- |
| **1. Girdi** | Kullanıcıdan iki karakter (`char`) alınır. | `'3'` (ASCII 51), `'5'` (ASCII 53) |
| **2. Dönüşüm** | Karakterler, `'0'` karakterinin ASCII değerinden çıkarılarak sayısal (`int`) değere çevrilir. | $51 - 48 = 3$, $53 - 48 = 5$ |
| **3. Toplama** | Sayısal değerler toplanır. | $3 + 5 = 8$ |
| **4. Kontrol** | Toplam $9$'dan büyük mü? | $8 \le 9$ (Başarılı) |
| **5. Sonuç** | Toplam (`int`) değere tekrar `'0'` ASCII değeri eklenerek karakter sonuca çevrilir. | $8 + 48 = 56$ (ASCII), yani `'8'` |

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

---
