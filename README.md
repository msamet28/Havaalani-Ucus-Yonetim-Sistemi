TR| C dili ile yazılan bu projenin amacı öncelikli kuyruk kullanarak bir havalimanı uçuş yönetim sistemi oluşturmaktır. Uçuş Yönetim Sisteminin kuralları şu şekildedir;
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
                  o İniş için onay alan uçaklardan en az birinin önceliği (X uçağı olsun), iniş izni onayı bekleyen uçağın (Y uçağı olsun) önceliğinden düşükse; yüksek öncelikli yeni                       uçağa (Y) iniş onayı verilir. Daha önce onay almış ve önceliği düşük olan uçak (X) başka bir havalimanına yönlendirilmelidir.                                                           o İniş izni daha önceden onaylanan uçağın (X) izni iptal edilmişse; “Acil iniş yapması gereken …(Y) uçağı nedeniyle iniş izniniz iptal edilmiştir, iniş için Sabiha                         Gökçen Havalimanı’na yönlendiriliyorsunuz.” şeklinde ekranda yazdırılmalıdır.
                  
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------                              
EN| The goal of this project written in C language is to create an airport flight management system using a priority queue. The rules of the Flight Management System are as follows;

At Istanbul Airport, which has 2 runways, only 1 aircraft can take off and only 1 aircraft can land at the same time during the day, while each aircraft at the airport has different priorities in landing and takeoff, and can request permission for a maximum of 24 landings in one day. Using the information about the priority order of the aircraft at the airport, landing time, delay time, and takeoff time, the aim is to determine the order of use of the landing and takeoff runways.

* Aircraft that will land at the airport must first request permission to land from the control tower.

* It should be checked whether there is enough capacity at the airport for each aircraft requesting landing permission.

* For aircraft requesting landing permission from the control tower, firstly, it should be checked whether the runway is full or empty at the requested landing time. If the runway is empty, permission should be given for the requested time, otherwise the landing order of the aircraft should be determined according to priority.

* For each aircraft requesting landing permission, "Your landing permission has been approved" or "landing permission cannot be given due to ..." should be displayed on the screen.

* The landing and takeoff times of the aircraft will be determined according to priority. The priority order of the aircraft is as follows (from high to low):
                                                                                                                                          1. Ambulance plane
                                                                                                                                          2. Fighter plane
                                                                                                                                          3. Passenger plane
                                                                                                                                          4. Cargo plane

* The priority (oncelikid), aircraft number (ucakid), and requested landing time (istenensaat) of aircraft requesting landing at the airport will be read line by line from the input.txt file, and each line read will be displayed on the screen.

* The waiting time for each aircraft landing at the airport for takeoff is 1 hour. The delay times caused by postponement should be included in the aircraft's takeoff time. The takeoff time should be calculated taking these factors into account.

* If two aircraft with the same priority are to take off at the same time, priority should be given to the aircraft that landed first.

* If the flight of any aircraft with a low priority is delayed more than 3 times due to high-priority aircraft, the flight of the waiting aircraft should be performed regardless of priority.

* The control tower can request permission for a maximum of 24 landings in one day. If this capacity is exceeded;
                o If the priority of the aircraft (X) that received permission for landing is lower than the priority of the aircraft (Y) waiting for landing permission, the high-                         priority new aircraft (Y) is given landing permission. The aircraft (X) that has already received permission and has a lower priority should be directed to another                       airport.
                o If the permission of the aircraft (X) whose landing permission was previously approved is canceled; "Your landing permission has been canceled due to the emergency                       landing of the ... (Y) plane. You should land at Sabiha Gokcen Airport ..." should be displayed on the screen.                  
                  
                  
                  



