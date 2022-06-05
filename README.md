# monstera_deliciosa_hygrometre-termometer
monstera deliciosa hygrometer termometer
---
title: "monstera_deliciosa_hygro&termometer"
author: "Hilal"
date: '2022-06-05'
output:
  pdf_document: default
  html_document: default
---

# Monstera Deliciosa Higrometre ve Termometre Otomasyon Sistemi

## ![](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure1.png?raw=true)
Monstera Deliciosa (Deve Tabanı )Bitkisi

Monstera Deliciosa diğer ismiyle Deve Tabanı bitkisinin yetişebilmesi için uygun ortam şartları sağlanmalıdır. Bu bitkinin yaşayabilmesi için en önemli etken nem ve sıcaklıktır. Monstera Deliciosa, Amerika'nın tropikal bölgelerine özgüdür. Monstera bitkileri tropikal koşulları tercih eder. İdeal olarak nem %40-%50 ve sıcaklık 77°F ila 86°F arasındadır. Haftada bir kez sulanması gereklidir.

Monstera Deliciosa bitkisinin faydaları saymakla bitmez , günümüzde bu bitki bir çok araştırmaya konu olmuştur. Sağlık alanındaki faydaları araştırılmaya devam etmektedir.

![](https://www.gardenerreport.com/wp-content/uploads/2021/02/0_InShot_20210214_011500521.jpg){width="230"}

**Deve Tabanı (Monstera Deliciosa) Bitkisinin Faydaları**

♦Güney Amerika'da eklem iltihaplarını iyileştirmek için kullanılır.

♦ Soğuk algınlığını iyileştirmede yardımcı olabilir.

♦ Sinir sistemi üzerinde pozitif etkileri vardır.

♦ Şişliklerin üzerine yaprakları ezilerek sürülür.

♦ Bol oksijen üretimi ile havayı arındırır.

♦ Yılan sokmalarına karşı hazırlanan ilaçların içeriğinde bulunur.

♦ Konsantre olmaya yardımcı olur.

♦ Öksürük problemlerini gidererek, göğüste yumuşama sağlar.

## Monstera Deliciosa Nem & Sıcaklık Uygulaması

![Monstera Deliciosa Labview Arayüzü](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure1.png?raw=true)

## Monstera Deliciosa Nem & Sıcaklık Uygulaması Amacı

Monstera Deliciosa bitkisini hayatta tutabilmek için uygun nemin ve sıcaklığın sağlanması gereklidir. Nemi ölçmek için uygun bir araç olmadan, nemin hangi seviyede olduğu hakkında hiçbir fikrimiz olamaz. Neyse ki, higrometre adı verilen bir alet kullanarak ortamın nemini ölçebiliriz. Sıcaklığı ölçmek için termometre kullanılmalıdır.

-   Tüm bilgiler ışığında ısıtma , soğutma, fan kontrol sisteminin oluşturulması gereklidir. Nem verileri alındıktan sonra nemlendirici ya da nem azaltıcı kontrol sistemi kullanılmalıdır. Nem ***%40-%50*** , sıcaklık ***25-30*** derece arasında olmalıdır. Labview de yapılmış olan bu uygulama sayesinde ısı kontrol ve nem kontrol sistemi oluşturulmuştur. Grafiksel olarak da incelenebilen bu kontrol sistemi haftada bir kez istenilen tarih ve saatte kişiye özgü olarak mail atmaktadır. Monstera Deliciosa bitkisinin ortam koşulları hakkında bilgi vermektedir. Bu bilgiler ışığında bitkinin yaşam mekanizması oluşturulmuştur.

[![Monstera Deliciosa soğutma ve nem azaltıcı devrede](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure2.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure2.png?raw=true)

-   Monstera Deliciosa için soğutma fan kontrol sistemi ve nem azaltma sistemi devrededir. Sıcaklık 30 derece ve üzerindeyse soğutucu fan sistemi çalışmaktadır. Nem %50 ve zerindeyse nem azaltma kontrol sistemi çalışmaktadır.

[![Sıcaklık 25 derece ve altında ısıtma sistemi devrede](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure5.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure5.png?raw=true)

-   DHT11 sıcaklık ve nem sensöründen alınan veriler Labview VISA resource , seri portta COM3 gelmektedir. Buradan alınan verilerle sıcaklık ve nem ölçülüp grafiksel arayüze aktarılmıştır. Gerçek zaman bilgisi ile işlenen veriler , belirtilen gün ve saatte yetkili kişiye mail atmaktadır.

[![Isıtma ve nem azaltma sistemi devrede](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure6.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure6.png?raw=true)

-   DHT11 sıcaklık ve nem sensöründen alınan veriler Labview VISA resource , seri portta COM3 gelmektedir. Nem %50 bundan dolayı nem azaltma sistemi devrededir. Sıcaklık 25 derece ve altında ise ısıtma sistemi devreye girmektedir. Mail tarih ve saati belirlenmiştir. Gerçek zamanla tüm veriler incelenebilmekte ve kontrol edilmektedir.

[![Ortam nemlendirici ve soğutma sistemi devrede](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure8.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure8.png?raw=true)

-   Nem %40'ın altında olduğu için nemlendirici çalışmaktadır. Sıcaklık 30 derecenin üzerinde olduğu için soğutma sistemleri çalışmaktadır.

[![Uygum ortam şartları](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure9.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/monstera_deliciosa_figure9.png?raw=true)

-   Monstera Deliciosa bitkisi için ideal ortam sağlanmıştır. Ortam verileri hakkında yetkili kişiye mail atılmıştır. Seri porttan alınan veriler doğrultusunda gerçek zaman ve mail zamanı ayarlanmıştır. Mail gönderildiği için sent butonu yanmaktadır.

## \~Kullanılan Malzemeler\~

-   DHT 11 Sensörü

-   Breadboard

-   Jumper

-   Arduino Nano ve Bağlantı kablosu

    ## - KOD -

    #include \<DHT.h\>

    #include \<Adafruit_Sensor.h\>

    #define dhtpin 2

    #define dhttype DHT11

-   **İlgili Kütüphane tanımlamaları yapılmıştır.**

    char in;

    int temp;

    int hum;

    DHT dht(dhtpin,dhttype);

    void setup()

    {

    Serial.begin(9600);

    dht.begin();

    }

-   **Değişken tipleri isimleri ve atamaları yapılmıştır.**

    void loop()

    {

    if(Serial.available()\> 0)

    {

    in =(byte)Serial.read()&\~(0x20);

    if(in== 'T')

    {

    temp = dht.readTemperature();

    Serial.println(temp);

    }else if (in== 'H')

    {

    hum = dht.readHumidity();

    Serial.println(hum);

    }

    }

    }

-   **Loop içerisine seri port okuması , yazması ve if , else if blokları eklenmiştir.**

-   **Seri Porta T, H yazılması halinde sensörden verilerin okunması sağlanmıştır.**

[![DHT 11 Arduino Nano Bağlantı Şeması](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/figure10.jpg?raw=true){width="247"}](images/figure10.jpg)

## Monstera Deliciosa Nem & Sıcaklık Uygulaması Blok Diyagram

[![Monstera Deliciosa Nem & Sıcaklık Kontrol Sistemi Blok Diyagramı](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/Blok_figure1.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/Blok_figure1.png?raw=true)

-   Seri Port VISA kullanılarak sisteme entegre edilmiştir. Sensörden alınan sıcaklık ve nem verisi için while bloğu oluşturulmuştur. Sıcaklık için while bloğunun için case eklenmiştir. Gerekli karşılaştırma operatörleri ve VISA okuma , yazma blokları eklenmiştir. Sensördeki veriler seri portta okunurken 'T' ile algıladığı için VISA bloğunda sıcaklık için'T' kullanılmıştır. Case bloğunun içerisine temperature indikatörü, termometre nesnesi, wave chart ve kontrol sistem mekanizması için soğutucu, ısıtıcı gibi boolean operatörleri konulmuştur.

[![Sıcaklık Blok Diyagramı](https://raw.githubusercontent.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/main/images/blok_figure2.png)](images/blok_figure2.png)

[![Nem Blok Diyagramı](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/blok_figure3.png?raw=true)](images/blok_figure3.png)

-    Nem verisi için while bloğunun için case eklenmiştir. Gerekli karşılaştırma operatörleri ve VISA okuma, yazma blokları eklenmiştir. Sensördeki veriler seri portta okunurken 'H' ile algıladığı için VISA bloğunda nem için'H' kullanılmıştır. Case bloğunun içerisine humidity indikatörü , higrometre nesnesi, wave chart ve kontrol sistem mekanizması için nemlendirici, nem alıcı gibi gerekli butonlar konulmuştur.

     [![Mail Blok Diyagram](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/blok_figure5.png?raw=true)](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/blok_figure5.png?raw=true)

```{=html}
<!-- -->
-   Mail Blok diyagramı gösterilmektedir. Gerçek zaman bigisi ve istenilen tarih/ saat bilgisine göre e mail atılacaktır. Sent butonu mail gönderildiğinde aktif olacaktır.

[![Send e mail](https://github.com/erogluhilal/monstera_deliciosa_hygrometre-termometer/blob/main/images/figure11.png?raw=true)](images/figure11.png)

-   Gerekli SMTP mail blok bilgileri gösterilmiştir.

### Proje Linki: [monstera_deliciosa_hygro&termometer.vi](monstera_deliciosa_hygro&termometer.vi "Monstera Deliciosa Nem&Sıcaklık Kontrol Sistemi")
