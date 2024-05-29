Anlık tarih ve saati ekrana yazdıran uygulama. Basit ve kısa bir kod satırları var fakat fikir geliştirici kütüphanelere ve komutlara sahip.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/5abe20c9-989e-4326-8111-74922d7b4b11)

>> iostream: Standart kullandığımız kütüphane.

>> iomanip: 'setw' ve 'setfill' gibi yapıları içerir. (Ne işe yaradıkları daha detaylı anlatılacak.)

>> ctime: Tarih ve saat işlemleri için geçerli. 'time_t', 'tm', 'time', 'localtime_s' gibi fonskiyonları sağlar.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/f556ffb8-3f06-4d6d-8bef-eca8b1606c6c)

Şu anki zamanın 'time_t' cinsinden değerini alır.(Bu, 1 Ocak 1970'ten (Unix Epoch) itibaren geçen saniye sayısını temsil eder.)

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/11b1d7bf-4ee0-4e65-a6f3-971199ae08d7)

tm: Tarih ve saati içeren yapı. Bu yapı içerisinde yıl, ay, gün, saat, dakika ve saniyeyi barındırır.

localtm: Bu yapı içerisinde yerel saat bilgilerini saklayacak.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/df5f8254-f1d5-4d96-a1e0-500c80d5ec3e)

localtime_s: 'tm' yapısını doldurur.

&localtm: Doldurulacak 'tm' yapısının adresi.

&now: Geçerli zaman adresi.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/c2ab9b4e-6369-422e-b860-a29a319d1785)

1900'den itibaren yıl sayisini döner. Sonunda da yil sayisina 1900 ekler.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/c1f64db3-38b1-4f62-a3b0-dfc73842c3c4)

Önemli yapılardan diğerleri de 'setw' ve 'setfill'

setw: setw(2) yapısı sayının genişliğini 2 karakter olarak ayarlar.

setfill: setfill(0) yapısı tek haneli gün ve ay değerlerindeki boşluğu 0 ile doldurur(Örneğin 07).

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/dcce83a5-65b3-41ec-8c13-9d7a0f2d40df)

tm_mon: Bu yapı ayları 0-11 arasında döner biz de doğru ayı bulabilmek için +1 ekleriz başına.

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/729207ab-3154-49b0-8d00-79ba7b168a81)

Buradaki:
'localtm.tm_mon': Ayın gününü döner.

'localtm.tm_hour': Saat bilgisini döner.

'localtm.tm_min': Dakika bilgisini döner.

'localtm.tm_sec': Saniye bilgisini döner.

---Ana fonksiyon---

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/32bd8ae2-a75f-44d9-b371-6131fa40957a)

Fonksiyonumuzu çağırarak konsola tarih ve saat bilgilerini yazdırır.

---Çıktı(Konsol)---

![image](https://github.com/isleyen/currentDateAndTime/assets/136992260/776016ee-9021-441a-a59e-caf161c3948c)


Hedef Dosya: main.cpp













