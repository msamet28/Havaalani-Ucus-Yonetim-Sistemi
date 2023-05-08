C dili ile yazılan bu projenin amacı öncelikli kuyruk kullanarak bir havalimanı uçuş yönetim sistemi oluşturmaktır. Uçuş Yönetim Sisteminin kuralları şu şekildedir;
1 iniş 1 kalkış olmak üzere 2 pisti bulunan İstanbul Havalimanı’nda gün içerisinde aynı anda sadece 1 uçak kalkış yapabiliyorken sadece 1 uçak iniş yapabilmektedir.Havalimanında uçakların her biri iniş ve kalkışta farklı önceliklere sahiptir ve 1 günde maksimum 24 uçak iniş için izin isteyebilmektedir. Havalimanındaki uçakların öncelik sırası, iniş saati, gecikme süresi ve kalkış saati bilgileri kullanılarak; iniş pistini ve kalkış pistini kullanım sırasının belirlenmesi hedeflenmektedir.

* Havalimanına iniş yapacak uçaklar öncelikle kuleden iniş yapabilmek için izin talep etmelidir.
 
* İniş izni talep eden her bir uçak için havalimanında yeterli kapasite olup olmadığı kontrol edilmelidir.
 
* Kuleden iniş izni talep eden uçaklar için öncelikle, iniş talep edilen saatte pistin dolu mu boş mu olduğu kontrol edilmelidir. Pist boş ise iniş yapılmak istenen saate izin verilmeli aksi halde uçakların iniş sıralaması önceliğe göre belirlenmelidir.

* İniş izni talep eden her uçak için “İniş izin talebiniz onaylanmıştır” veya “… nedeniyle iniş izni verilememektedir.” şeklinde ekranda yazdırılacaktır.
 
* Uçakların iniş ve kalkış saatleri önceliğe göre belirlenecektir. Uçakların öncelik (oncelikid) sıralaması şu şekildedir (yüksekten düşüğe):
                                                                                                                            1. Ambulans uçağı
                                                                                                                            2. Savaş uçağı
                                                                                                                            3. Yolcu uçağı
                                                                                                                            4. Kargo uçağı
                                                                                                                            
* Havalimanına iniş talep eden uçakların önceliği (oncelikid), uçak numarası (ucakid) ve talep ettiği iniş saati (istenensaat) satır satır input.txt dosyasından okunacaktır ve okunan her bir satır ekranda gösterilecekir.

* Havalimanına iniş yapan her uçağın, kalkış için bekleme süresi 1 saattir. Uçakların kalkış saatine, ötelenmeden dolayı oluşan gecikme süreleri dâhil edilmelidir. Kalkış saati bu bilgiler göz önünde bulundurularak hesaplanmalıdır.
 
* Aynı önceliğe sahip iki uçak, aynı saatte kalkış yapacaksa öncelik ilk iniş yapan uçağa verilmelidir.
 
* Önceliği yüksek olan uçaklar nedeniyle önceliği düşük olan herhangi bir uçağın uçuşu, maksimum 3 kez ertelenebilir. Eğer 3’ten fazla ertelenme durumu söz konusuysa, öncelik gözetilmeksizin beklemede olan uçağın kalkışı gerçekleştirilmelidir.
 
* Kuleden bir günde maksimum 24 uçak iniş için izin talep edebilir. Eğer bu kapasite dolmuşsa;
                  o İniş için onay alan uçaklardan en az birinin önceliği (X uçağı olsun), iniş izni onayı bekleyen uçağın (Y uçağı olsun) önceliğinden düşükse; yüksek öncelikli yeni                       uçağa (Y) iniş onayı verilir. Daha önce onay almış ve önceliği düşük olan uçak (X) başka bir havalimanına yönlendirilmelidir.
                  o İniş izni daha önceden onaylanan uçağın (X) izni iptal edilmişse; “Acil iniş yapması gereken …(Y) uçağı nedeniyle iniş izniniz iptal edilmiştir, iniş için Sabiha                         Gökçen Havalimanı’na yönlendiriliyorsunuz.” şeklinde ekranda yazdırılmalıdır.



