# RDR4_API_Project_news_flights_weather_currency

## Proje Hakkında

RDR4_API_Project_news_flights_weather_currency, Qt Creator 3.3.0 (opensource) ve Qt 5.4.0 (GCC 4.6.1, 64 bit) kullanılarak geliştirilmiş, RDR4 cihazı için optimize edilmiş kapsamlı bir masaüstü uygulamasıdır. Bu proje, çoklu API entegrasyonları sayesinde kullanıcıya gerçek zamanlı haber, uçuş bilgileri, hava durumu ve döviz kurları gibi kritik ve güncel verileri sağlar. 

RDR4 cihazları üzerinde çalışan bu uygulama, cihazın sınırlı kaynaklarına ve ekran özelliklerine göre optimize edilmiştir. Kullanıcı dostu arayüzü ve performans odaklı yapısı ile hem hızlı hem de stabil bir deneyim sunar.

---

## Projenin Amacı ve Özellikleri

- **Gerçek Zamanlı Haber Takibi:** Popüler haber kaynaklarından güncel haberleri çekerek cihaz ekranında görüntüler.
- **Uçuş Bilgileri:** API üzerinden alınan uçuş verilerini detaylı ve anlaşılır şekilde gösterir. Uçuş sorgulama ve filtreleme yapılabilir.
- **Hava Durumu Güncellemeleri:** Belirlenen lokasyonlara ait hava durumu bilgileri, sıcaklık, rüzgar hızı ve diğer meteorolojik veriler anlık olarak gösterilir.
- **Döviz Kurları:** Canlı döviz kuru bilgileri, temel para birimleri için güncel verilerle birlikte sunulur.
- **RDR4 Cihaz Uyumu:** Uygulama, Qt 5.4.0 altyapısı ve Qt Creator 3.3.0 üzerinde, RDR4 cihazının ekran ve donanım özellikleri göz önüne alınarak geliştirilmiştir.
- **Çoklu API Entegrasyonları:** Farklı servislerden gelen verileri tek bir uygulamada toplayarak entegre ve kapsamlı bir bilgi ekranı sağlar.
- **Düşük Sistem Kaynakları Tüketimi:** Hafif ve optimize edilmiş yapısı ile RDR4 cihazında performanslı çalışır.
- **Modern ve Kullanıcı Dostu Arayüz:** Qt’nin grafik yetenekleri kullanılarak sade, anlaşılır ve kullanımı kolay UI tasarımı yapılmıştır.

---

## Teknolojiler ve Araçlar

- **Qt Creator 3.3.0 (opensource)**
- **Qt 5.4.0 (GCC 4.6.1, 64 bit)**
- **C++11 ile geliştirilmiş Qt tabanlı masaüstü uygulaması**
- **REST API tüketimi için Qt Network Modülleri**
- **JSON verilerinin işlenmesi için Qt JSON sınıfları**
- **RDR4 cihazı uyumluluğu için donanım özel ayarları ve optimizasyonları**

---

## Kurulum ve Çalıştırma

1. **Qt Creator ve Qt Kurulumu:**  
   Qt Creator 3.3.0 ve Qt 5.4.0 sürümlerini sisteminize kurunuz.  
   (Linux veya Windows platformlarında derlenip çalıştırılabilir.)

2. **Proje Dosyalarını İndirme:**  
   Projeyi GitHub üzerinden `git clone https://github.com/ilhanuzunoglu/RDR4_API_Project_news_flights_weather_currency` komutu ile veya ZIP olarak indiriniz.

3. **Qt Creator ile Açma:**  
   İndirilen dizinde bulunan `.pro` dosyasını Qt Creator ile açınız.

4. **Derleme ve Çalıştırma:**  
   Projeyi derleyip çalıştırabilirsiniz.  
   RDR4 cihazında veya benzer Qt 5.4.0 destekli ortamda sorunsuz çalışacaktır.

---

## Kullanım Detayları

- **Ana Ekran:** Haber, uçuş, hava durumu ve döviz kuru sekmeleri arasında kolay geçiş imkanı sağlar.
- **Haberler:** API’den çekilen haber başlıkları ve özetleri listelenir, detay görüntüleme mümkündür.
- **Uçuş Bilgileri:** Havalimanı seçimi ile sorgulama yapılabilir, uçuş durumu, kalkış-varış saatleri, havayolu bilgileri gösterilir.
- **Hava Durumu:** Seçilen lokasyonun güncel hava durumu, tahminleri ve meteorolojik verileri sunulur.
- **Döviz Kurları:** Günlük olarak güncellenen kurlar, temel para birimleri için kolay takip sağlar.

---

## Proje Dosya Yapısı

- **main.cpp**: Uygulamanın giriş noktası.
- **mainwindow.h / mainwindow.cpp**: Ana pencere ve arayüz yönetimi.
- **newsinfo.cpp / .h**: Haber API entegrasyonu ve veri işlemleri.
- **flightinfo.cpp / .h**: Uçuş bilgileri API’si ve verilerin işlenmesi.
- **weatherinfo.cpp / .h**: Hava durumu verilerinin alınması ve yönetimi.
- **currencyinfo.cpp / .h**: Döviz kuru API’si bağlantıları.
- **resource dosyaları:** UI öğeleri, ikonlar ve diğer görsel içerikler.

---

## Neden Bu Proje?

- RDR4 cihazları için özel olarak geliştirilmiş, gerçek zamanlı ve çok yönlü bilgi platformu.
- Qt 5.4.0 gibi daha eski sürümlerde çalışan, kaynakları verimli kullanan optimize bir uygulama.
- Farklı API servislerinin birlikte kullanılabileceği örnek ve referans bir Qt projesi.
- Hem geliştiriciler hem de son kullanıcılar için kolayca genişletilebilir ve adapte edilebilir bir yapı.

---

## Geliştirici Notları

- Proje, Qt 5.4.0'ın sunduğu imkanlar çerçevesinde yazılmıştır, modern Qt sürümlerinde bazı modül isimleri veya kullanımlar farklı olabilir.
- API anahtarları veya erişim bilgileri `config` veya ilgili dosyalarda saklanabilir, gizlilik için dikkat edilmelidir.
- Uygulama, RDR4 cihazının ekran çözünürlüğü ve performansına göre optimize edilmiştir.
- Gerekli durumlarda Qt Network ve JSON modülleri detaylı olarak incelenebilir ve geliştirilmesi önerilir.

---

## Katkıda Bulunma

Projeye katkı yapmak veya geliştirme önerilerinde bulunmak için GitHub üzerinden pull request gönderebilir veya issue açabilirsiniz.

---

## Lisans

Bu proje MIT Lisansı altında lisanslanmıştır. Ayrıntılı bilgi için `LICENSE` dosyasına bakabilirsiniz.

---

## İletişim

Geliştirici: İlhan Uzunoğlu  
GitHub: [https://github.com/ilhanuzunoglu](https://github.com/ilhanuzunoglu)  
E-posta: ilhanuzunoglu02@gmail.com

---

## Sonuç

RDR4_API_Project_news_flights_weather_currency, Qt tabanlı RDR4 cihazlarında çalışan, çoklu API entegrasyonlarıyla kullanıcıya geniş kapsamlı, anlık bilgi sağlayan güçlü ve kullanıcı dostu bir uygulamadır. Qt 5.4.0'ın imkanları çerçevesinde kaynakları etkin kullanarak performanslı bir deneyim sunar.

Cihazınızda güncel, hızlı ve zengin içerikli veri görüntüleme çözümü arıyorsanız, bu proje tam size göre!

---

