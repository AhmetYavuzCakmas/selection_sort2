# selection_sort2
data structure  selection sort code2
Selection Sort, bir dizide her adımda en küçük (veya en büyük) elemanı bulup dizinin başına (ya da sonuna) yerleştiren basit bir sıralama algoritmasıdır.

🔹 Temel Mantık

Dizinin tamamında en küçük elemanı bul
Onu ilk elemanla değiştir
Kalan kısım için aynı işlemi tekrarla
Her turda dizinin baş tarafı sıralı hale gelir.

Zaman Karmaşıklığı (Big-O)
Durum	Karmaşıklık
En iyi	O(n²)
Ortalama	O(n²)
En kötü	O(n²)

Not: Dizi sıralı olsa bile tüm karşılaştırmalar yapılır.

🔹 Avantajları

✔ Kod yapısı basit
✔ Bellek kullanımı az (in-place)
✔ Swap sayısı azdır

🔹 Dezavantajları

✖ Büyük diziler için yavaş
✖ Adaptif değildir (sıralı diziyi fark etmez)
