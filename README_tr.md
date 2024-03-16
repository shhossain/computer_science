<h1 align="center">Computer Science</h1>
<h4 align="center">
    <p>
        <b>English</b> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_es.md">Español</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_fr.md">Français</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_bn.md">বাংলা</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ta.md">தமிழ்</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_guj.md">ગુજરાતી</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_pt.md">Portuguese</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_hi.md">हिंदी</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_te.md">తెలుగు</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ro.md">Română</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ar.md">العربية</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_np.md">Nepali</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_cn.md">简体中文</a>
		<a href="https://github.com/shhossain/computer_science/blob/main/README_tr.md">Türkçe</a>
    </p>
</h4>

## Nasıl Katkı Yapabilirsiniz
Eğer bu projeye katkı yapmak isterseniz lütfen şu dosyayı kontrol edin. [CONTRIBUTING.md](https://github.com/shhossain/computer_science/blob/main/CONTRIBUTING.md) Burada detaylı bir biçimde nasıl yapabilirsiniz açıklanıyor. Katkılarınız için teşekkürler!

<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-150-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

## İçerik Tablosu

- [Giriş](#introduction)
- [Elektronik Bilgisayar](#electronic-computer)
- [Bool Mantığı](#boolean-logic)
- [Sayı Sistemleri](#number-systems)
- [Merkezi İşlem Birimi(CPU)](#central-processing-unit-cpu)
- [Kaydediciler, Önbellek, Rastgele Erişimli Bellek(RAM)](#registers-cache-and-ram)
- [Talimatlar ve Program](#instructions-and-program)
- [Programlama Dilleri](#programming-languages)
- [Veri Türleri](#data-types)
- [İfadeler ve Fonksiyonlar](#statements-and-functions)
- [Veri Yapıları](#data-structures)
- [Algoritmalar](#algorithms)
- [Alan Turing](#alan-turing)
- [Yazılım Mühendisliği](#software-engineering)
- [Veri Bilimi](#data-science)
- [Entegre Devreler](#integrated-circuits)
- [Nesne Yönelimli Programlama](#object-oriented-programming)
- [Fonksiyonel Programlama](#functional-programming)
- [İşletim Sistemleri](#operating-systems)
- [Bellek ve Depolama](#memory-and-storage)
- [Dosyalama Sistemleri](#file-system)
- [Bulut Kompütasyon](#cloud-computing)
- [Makine Öğrenmesi](#machine-learning)
- [Ağ Teknolojisi](#web-technology)
- [Ağ Oluşturma](#networking)
- [Internet](#internet)
- [Veritabanı Yönetim Sistemleri(DBMS)](#dbms)
- [Kriptografi](#cryptography)
- [Kompütsayon Teorisi](#theory-of-computation)


## Giriş

Bilgisayar Bilimi, bilgisayarların, hesaplamaların bunların teorik ve pratik uygulamalarının incelenmesidir. Bilgisayar Bilimi pek çok problemi çözmek için matematiksel prensiplerden, mühendisliklerden ve mantıktan faydalanır. Algoritma analizi, yazılım&donanım geliştiriciliği ve yapay zekada buna dahildir.

## [Elektronik Bilgisayar](Electronic%20Computer/readme.md)
Elektronik Bilgisayarın tanımı: Kompütasyon yapabilen, özellikle programlanabilen bir elektronik makinedir. Yüksek hızda matematiksel ve mantıksal işlemler yapabilir yahut derleyebilir,depolayabilir, aralarında bağlantı kurabilir, bilgiyi işleyebilir.

## [Bool Mantığı](Boolean%20Logic/readme.md)
Bool Mantığı matematiğin bir alt dalıdır. Önermelerin doğruluğu yada yanlışlığı üzerine çalışır. Bir çeşit mantık sistemidir. İki değeri kullanır. 0 ve 1. Doğruluk değeri olarakta geçen bu iki değerde 0 yanlışa 1 doğruya tekabül eder. Bool Cebri 1854 yılında bu sistemi ilk kez tanımlayan George Bool'a ithafen adlandırılmıştır.

### Bilindik Bool Operatörleri
| Operatör | İsmi |               Tanımlaması               |
| :------: | :--: | :-------------------------------------: |
|    !     | DEĞİL  |    Önermenin doğruluk değerini diğer değere çevirir.    |
|    &&    | VE  |  Eğer iki doğruluk değeride doğruysa değeri **doğru** yapar.|
|   \|\|   |  VEYA  | Eğer en az bir değer doğruysa doğruluk değerini **doğru** yapar. |

### Bilinmesi Faydalı Bool Operatörleri
| Operator | Name |               Description               |
| :------: | :--: | :-------------------------------------: |
|    ()    | Parantezler     |   Önermelerin üzerindeki sırayı manipüle etmemize olanak sağlar.    |
|    “”    | Çift Tırnak İşareti| Değeri olduğu gibi gösterir. |
|   *      |  Yıldız İşareti       | Provides results containing a keyword variation. |
|   ⊕     |  XOR            | Önermeler birbirinden farklıysa **doğru** verir. |
|   ⊽      |  NOR            | Tüm önermeler yanlışsa **doğru** verir  |
|   ⊼      |  NAND           | İki değerde doğruysa **yanlış** verir  |


## [Sayı Sistemleri](Number%20System/readme.md#number-systems)
Sayı sistemleri sayıları matematiksel olarak ifade etmemize olanak sağlar. Bir sayı sistemi sayıları temsil etmek için bir sembol kümesi ve bu sembollerin nasıl kontrol edileceğine dair kurallardan oluşur. Bir sayı sisteminde kullanılan sembollere rakam denir.

### [Sayı Sistemi Türleri](Number%20System/readme.md#types-of-number-systems)
- [Konumsal Sayı Tabanları](Number%20System/readme.md#positional-numeral-system)
- [İşaret Değeri Notasyon Sistemi](Number%20System/readme.md#sign-value-notation-system)

### [Sık Rastlanan Konumsal Rakam Sistemleri](Number%20System/readme.md#common-positional-number-systems)
- [İkili Sistem](Number%20System/readme.md#binary)
- [Sekiz Tabanı](Number%20System/readme.md#octal)
- [Onluk Sistem](Number%20System/readme.md#decimal)
- [Onaltı tabanı](Number%20System/readme.md#hexadecimal)


### İkili Sistemin Önemi
İkili sistem 2 tabanında bir sayı sistemidir. Gottfried Leibniz tarafından icat edilmiştir. Kümesinde yalnızca iki rakam bulunur. 0(sıfır) ve 1(bir). Bu sayı sistemi tüm ikili kodların(binary code) temelini oluşturmaktadır. İkili Kodlama sistemi ile bilgisayar işlemcisine talimatlar sunulur. 0 ve 1 elektrik devrelerinde Açık ve Kapalıya tekabül etmektedir. Bir transistörde 0 elektrik akımının olmadığını söyler. 1 ise 5voltluk bir elektrik akımının aktığını söylemektedir. Bu sayede sayılar fiziksel olarak temsil edilebilir. Bu da onlar üzerinde hesaplama yapmamıza olanak sağlar.
 
Aşağıdaki nedenlerden ötürü ikili sistem hâlâ bilgisayarların, elektronik devlerelerin ve bilgisayar donanımının anadilidir:
- Sade ve şık bir dizayndır.
- 0 ve 1 temsili sayesinde bir elektrik sinyalinin açık mı kapalı mı olduğu çabucak anlaşılır.
- Elektriksel parazitlere karşı daha az duyarlı bir sistemdir.
- Manyetik ortamın pozitif ve negatif kutupları hızlı bir şekilde ikili sisteme çevrilebilir.
- Mantık devrelerinin kullanımında en etkili metottur.



## [Merkezi İşlem Birimi (CPU)](CPU/readme.md#central-processing-unitcpu)
İşlemci bir bilgisayarın en önemli parçasıdır. İşlemci sinyaller göndererek bilgisayarın öteki parçalarını kontrol eder, tıpkı beynin bedeni kontrol etmesi gibi. İşlemci bilgisayarın yapması gereken talimatlar ile çalışan ve her bir talimatı sırasıyla yapan bir makine gibidir. Bir işlemcinin çalıştırabileceği talimatlar listesine program denir. Bir işlemci çekirdek denilen parçalar sayesinde aynı anda birden fazla işlem yapabilir. Dört çekirdekli bir bilgisayar dört programı aynı anda çalıştırabilir. İşlemci üç ana birimden oluşmaktadır. Bunlar şunlardır:
1. [Hafıza veya Depolama Birimi](CPU/readme.md#memory-or-storage-unit)
2. [Kontrol Birimi](CPU/readme.md#control-unit)
3. [Matematiksel ve Mantıksal işlem birimi (ALU)](CPU/readme.md#arithmetic-and-logic-unit-alu)


## [Kaydediciler, Önbellek and Rastgele Erişimli Bellek(RAM)](/Registers%20Cache%20and%20RAM)

### [Kaydedici](/Registers%20Cache%20and%20RAM/readme.md#register)
Kaydediciler işlemcide bulunan küçük boyutlu yüksek hızlı bellek tipidir. Flip-Floplardan oluşur. Flip-Floplar 1bitlik belleği depolar. Küçük hacimli veriler üzeirinde işlem yapılırken işlemci tarafından kullanılırlar. Bir işlemci birden fazla kaydedici serisine sahip olabilir. Bu serilere çekirdek denir. Ayrıca kaydediciler aritmetik ve mantıksal işlemlerde yardımcı olur.

Aritmetik işlemler işlemci tarafından kaydedici üzerinde depolanan sayılar üzerinde yapılan matematiksel hesaplamalardır. Bu işlemler içerisinde toplama, çıkarma, çarpma ve bölme bulunur. Mantıksal işlemler ise işlemci tarafından yapılan Bool hesaplamalarıdır. Bool hesaplamalarında da veri kaydediciler üzerinden alınır. Bu işlemler içerisinde karşılaştırma(örneğin iki değerin eşitliğinin karşılaştırılması) ve mantıksal işlemler bulunur. (örneğin ve, veya, değil işlemleri)

Kaydediciler bu işlemleri yapmak için temel gereksinimdir. Çünkü işlemcinin hızlı bir şekilde veriye erişmesini ve değiştirmesine olanak sağlar. Sıklıkla ulaşılan kaydedici adreslerini depolayarak işlemci bellekteki adreslerden veri alırkenki hantallığı önler.

Yüksek hacimli veri Cache(Önbellek) kısmında depo edilebilir. Çok hızlı bir bellek noktasıdır. Kaydediciler ile aynı mimariye sahiptir. Önbellek program çalışırken sıklıkla erişilen veri noktalarını depolamak için kullanılır. Bundan daha da fazla hacimli veri rastgele erişimli bellekte(RAM'de) depolanabilir. RAM veriyi ve komutları işlemci ihtiyacı olana dek saklar. 


### [Önbellek (Cache)](/Registers%20Cache%20and%20RAM/readme.md#cache)
Önbellek çip tabanlı bir bilgisayar parçasıdır. Veriyi bilgisayarın belleğinden daha verimli bir şekilde almaya yarar. Geçici bir depolama alanı olarak davranması sayesinde işlemci veriyi kolay bir şekilde alabilir. Bu geçici depolama alanı-cache olarak bilinir- bilgisayarın ana belleğine göre işlemcinin ulaşmasına daha hazır halde bir konumdadır. Örnek olarak DRAM tarzı belleğe kıyasen.

Önbellek bazen CPU belleği olarak tanımlanır. Çünkü genellikle CPU'nun içerisine gömülü halde bulunur veya ayrı bir çip üzerinde ayrı bir yol ile CPU'ya bağlanır. Bu sayede işlemci için daha kolay erişilebilir. İşlemcinin gerçekten fiziksel olarak çok yakınında bulunduğundan bu kolaylık,verimlilik oluşur. 

İşlemciye yakın bulunabilmesi için Önbellek ana hafıza birimine göre çok daha küçük olmalıdır. Bunun sonucu olarak daha az alan depolayabilir. Ayrıca ana bellekten daha pahalıdır. Çünkü çok kompleks ve yüksek performans bir çiptir.

Boyut ve fiyattaki eksi, yüksek hız için tolere edilebilir. Önbellek RAM'den 10 ila 100 kat daha hızlıdır. Sadece bir kaç nanosaniyede işlemcinin isteğine cevap verebilir.

Önbelleğin donanımsal olarak adlandırılması şu şekildedir: Yüksek-hızlı statik rastgele erişimli bellek (SRAM). Bilgisayarın ana belleği(hafıza birimi) olarak kullanılan donanım parçasının adlandırılması ise: Dinamik Rastgele-Erişimli Bellek(DRAM) şeklindedir.

Cache belleği(Önbellek) Cache terimi ile karıştırılmamalıdır. Cache terimi hem yazılımsal hem donanımsal olarak var olan geçici veri depolama noktalarıdır. Cache belleği ise özel donanım parçasıdır bilgisayarın cacheler arasında çeşitli seviyelerde ağ kurmasına olanak sağlar. Cache ise kompütasyon ortamında donanımsal yada yazılımsal olarak bir şeyi(tipik olarak verileri) geçici olarak depo eder.

### [Rastgele Erişimli Bellek(RAM)](/Registers%20Cache%20and%20RAM/readme.md#ram)
Rastgele erişimli bellek her türlü sırayla erişim sağlanabilen bir çeşit bilgisayar hafıza birimidir. Genellikle çalışan verileri ve makine kodlarını depo eder. Rastgele erişimli bellek birimi, verinin fiziksel konumunun nerede olduğundan bağımsız olarak neredeyse tüm noktalara aynı sürede erişmee olanak sağlar. Özellikle doğrudan erişimli veri depolama mekanizmalarına göre(harddiskler, CD-RWS, DWD-RWS ve eski tip magneto teyipler ve drum belleklerine göre) farklıdır. Çünkü bu sistemler verinin kaydedileceği alanların fiziksel noktalarına aşırı derecede bağımlıdır. Bunun sebebi belleğin rotasyonu ve kol hareketleri gibi mekanik sınırlandırmalardır. 

## [Talimatlar ve Program](Not-Added)
Bilgisayar bilimlerinde talimat, işlemcinin talimat kitapçığına göre tanımlanmış, tek bir işlemdir. Bilgisayar programı ise bu talimatların bir çeşit listesidir. Bu liste bilgisayara ne yapacağını anlatmış olur. Bilgisayarın başarabildiği her şey programlar sayesinde yapılmaktadır. Programlar bilgisayarın belleğinde bulunur bu sayede sıralı bir şekilde görevler yerine getirilir. Aralarında zaman molaları olsa bile sıra bozulmaz.

## [Programlama Dilleri](/Programming_Languages/readme.md)
Programlama dili kurallar bütünüdür. Stringlerin, grafik tabanlı programlama elementlerinin(görsel tabanlı programlama dillerinde) bir çeşit makine kodu çıktısına dönüştüren elemandır. Programlama dili bilgisayara uygun algoritma oluşturmakta kullanılan yöntemler bütünü denilebilir.

Programlama dilleri sıklıkla iki kategoriye ayrılır:
1. Gerçek hayatta kullandığımız dillere benzeyen yüksek seviyeli diller(High Level Language) birinci kısmı oluşturur. Kaynak kod makinenin anlayabileceği makine koduna derleyici yada anlamlandırıcı(interpreter) kullanarak dönüştürür.Java ve Python yüksek seviyeli dillere örnek olarak gösterilebilir. Genellikle bu dillerde yazılım yapmak kolaydır fakat Düşük seviyeli dillere göre daha yavaştır.
2. Düşük seviyeli diller bilgisayar diline daha yakın bir yazım kuralına sahiptir. Donanım ile doğrudan etkileşime girebilir. İki yaygın örneği makine dili ve assembly dilidir. Bu diller Yüksek seviyeli dillere göre çok daha hızlıdır fakat aynı zamanda daha zor yazılır ve okunması zordur. 

### [Programlama Paradigmaları](/Programming_Languages/readme.md#Programming+Paradigms)
Ayrıca pek çok *programlama paradigmaları* bulunmaktadır. Programlama paradigmaları programların yahut programlama dillerinin farklı şekillerde yahut farklı tarzlarda organize edilmesidir. Her paradigma belirli bir yapıya, özelliklere ve tipik programlama problemlerine olan farklı yaklaşımlarına sahiptir.

Programlama paradigmaları dil yahut araç *değildir*. Bu paradigma ile herhangi bir şey "inşa" edemezsiniz. Daha çok paradigmalar pek çok insanın üzerinde ortaklaştığı, takip etme kararı verdiği ve geliştirdiği idealler, rehberler bütünü gibidir. Programlama dilleri her zaman belli bir paradigma ile ilintili olmayabilir. Belirli bir paradigma gözetilerek yapılan bazı programlama dilleri bulunabilir. (Haskell ve fonksiyonel programlama güzel bir örnektir.) Fakat ayrıca pek çok paradigmayı gözeten diller bulunur. Çoklu paradigmalı dillerde çeşitli paradigmayı kodlayıcı olarak seçebilirsin. (JavaScript ve Python buna güzel bir örnektir.)


## [Veri Türleri](Data%20Types/readme.md#data-types)
Programlamada veri türleri bir çeşit sınıflandırmadır. Bu sınıflandırma değerimizin ne çeşit özelliklere sahip olduğunu verir. Ve bu verinin üzerinde hangi türden işlemleri yapabileceğimizi anlatır. (Matematiksel, İlişkisel, Mantıksal) Bu sayede hata önlenir. 

### [İlkel Veri Türleri](Data%20Types/readme.md#primitive-data-types)
İlkel veri türleri programlama dillerindeki en temel veri türleridir. Daha kompleks veri türlerinin yapı taşları gibidir. İlkel veri türleri programlama dilleri yapılırken önceden tanımlanmıştır ve rezerve anahtarkelimeler ile isimlendirilir.

### [Sık Kullanılan İlkel Veri Türleri](Data%20Types/readme.md#common-primitive-data-types)
- [Integer](Data%20Types/readme.md#integer)
- [Float](Data%20Types/readme.md#float)
- [Boolean](Data%20Types/readme.md#boolean)
- [Character](Data%20Types/readme.md#character)
- [String](Data%20Types/readme.md#string)

### [İlkel olmayan Veri Türleri](Data%20Types/readme.md#non-primitive-data-types)
Bu veri türleri referans veri türleri olarak da bilinir. Kodlayıcı tarafından tanımlanır. Programlama dili tarafından herhangi bir tanıma sahip değildir. Genellikle kompozit veri türleri olarak da adlandırılır. Çünkü diğer veri türlerinden kompoze edilerek oluşturulur.

### [Sık Görülen İlkel Olmayan Veri Türleri](Data%20Types/readme.md#common-non-primitive-data-types)
- [Array](Data%20Types/readme.md#array)
- [Struct](Data%20Types/readme.md#struct)
- [Union](Data%20Types/readme.md#union)
- [Pointer](Data%20Types/readme.md#pointer)
- [Function](Data%20Types/readme.md#function)
- [Class](Data%20Types/readme.md#class)

## [Önermeler ve Fonksiyonlar](Statements%20and%20Functions/readme.md)

Bilgisayar programlamasında(Imperative Programming tipinde) önermeler yapılması gereken aksiyonları tanımlayan, tarif eden sintaktik birimlerdir. Böyle bir dilde yazılan program bir yada birden çok önermeler dizisiyle yapılır. Önermeler içsel birimlere sahip olabilir.(örneğin tarifleme biçimleri gibi) 
Programlama dillerinde bir kodun mantığını oluşturmada gerekli olan iki ana önerme çeşidi bulunur.


1. [Durumsal Önermeler](Statements%20and%20Functions/readme.md#conditional-statements)

İki çeşit durumsal önerme bulunur:
- if ve if-else
- switch case


2. [Döngüsel Önermeler](Statements%20and%20Functions/readme.md#loops)

Üç çeşit döngüsel önerme bulunur:
- for loop
- while loop
- do - while loop (a variation of while loop)
- do - Until loop

------------

Fonksiyon belirli bir görevi yerine getirmek için oluşturulmuş bir önermeler bütünüdür. Fonskiyonlar veri kabul eder, onu işler ve bir değeri bize verir yahut sonuçlandırır. Fonskiyonler genellikle yeniden kullanım konseptini desteklemek için yapılmıştır. Bir fonksiyon bir kere yazıldıktan sonra aynı kod tekrar yazılmadan çağırılabilir. 


Birbirinden farklı fonksiyonel diller, fonksiyonları tanımlamak için farklı sintakslar(yazım yöntemi) kullanır.

Fonksiyonlarla ilgili daha fazlasını buradan okuyabilirsin [here](Statements%20and%20Functions/readme.md#functions)


## [Veri Yapıları](Data%20Structures/readme.md)

Bilgisayar bilimlerinde veri yapısı; verilerin organize edilmesinde, yönetilmesinde ve depo edilmesinde kolay erişim ve düzenlemeyi bize sağlayan bir biçem türüdür. Daha detaylı anlatılmak gerekirse, veri yapısı verilerin koleksiyonu, onlar arasındaki ilişki ve onlara uygulanabilecek fonksiyonlar yahut  operasyonları açıklar.

### Veri Yapıları Türleri
- [Array](Data%20Structures/readme.md#array)
- [Linked List](Data%20Structures/readme.md#linkedlist)
- [Stack](Data%20Structures/readme.md#stack)
- [Queue](Data%20Structures/readme.md#queue)
- [Hash Table](Data%20Structures/readme.md#hashtable)
- [Heap](Data%20Structures/readme.md#heap)
- [Tree](Data%20Structures/readme.md#tree)
- [Graph](Data%20Structures/readme.md#graph)

## [Algoritmalar](Algorithms/readme.md)
Algoritmalar, hesaplamayı tamamlamak için gerekli adımlar kümesidir. Cihazlarımızın yaptığı işlerin merkezinde yer alırlar ve bu yeni bir kavram değildir. Matematiğin gelişiminden bu yana, görevleri daha verimli bir şekilde tamamlamamıza yardımcı olmak için algoritmalara ihtiyaç duyulmuştur, ancak bugün sıralama ve grafik arama gibi birkaç modern bilgi işlem problemine bir göz atacağız ve bunları nasıl daha verimli hale getirdiğimizi göstereceğiz, böylece ucuz uçak bileti veya Winterfell'e yol tarifi veya bir restoran veya başka bir şeyi daha kolay bulabilirsiniz.

### [Zaman Karmaşıklığı](Algorithms/Time%20Complexity/readme.md)
Bir algoritmanın zaman karmaşıklığı, algoritmanın bazı girdiler için ne kadar zaman kullanacağını tahmin eder. Buradaki fikir, verimliliği parametresi girdi boyutu olan bir fonksiyon olarak temsil etmektir. Zaman karmaşıklığını hesaplayarak, algoritmayı uygulamadan yeterince hızlı olup olmadığını belirleyebiliriz.

### [Alan Karmaşıklığı](Algorithms/Space%20Complexity/readme.md)
Alan karmaşıklığı, yürütme için girdi değerlerinin alanı da dahil olmak üzere bir algoritmanın/programın kullandığı toplam bellek alanı miktarını ifade eder. Alan karmaşıklığını belirlemek için bir algoritma/programdaki değişkenlerin kapladığı alanı hesaplayın.

### [Sıralama](Algorithms/Sorting/readme.md)
Sıralama, bir öğe listesini belirli bir sıraya göre düzenleme işlemidir. Örneğin, bir isim listeniz varsa, bunları alfabetik olarak sıralamak isteyebilirsiniz. Alternatif olarak, bir sayı listeniz varsa, bunları en küçükten en büyüğe doğru sıralamak isteyebilirsiniz. Sıralama yaygın bir görevdir ve birçok farklı şekilde yapabileceğimiz bir işlemdir.


### [Arama](Algorithms/Searching/readme.md)
Arama, bir bölge içindeki belirli bir hedef elemanı bulmak için kullanılan bir algoritmadır. Arama Algoritmaları, bir öğeyi kontrol etmek veya bir öğeyi depolandığı herhangi bir veri yapısından almak için tasarlanmıştır.

### [String Temelli Algoritmalar](Algorithms/String%20Based%20Algorithms/readme.md)
Stringler programlamada en çok kullanılan ve en önemli veri yapılarından biridir, bu depo kodumuzu geliştirirken daha hızlı arama yapmamıza yardımcı olan en çok kullanılan algoritmalardan birkaçını içerir.

### [Çizge Arama](Algorithms/Graph/readme.md)
Çizge arama, belirli bir düğümü bulmak için bir çizge içinde arama yapma işlemidir. Çizge, sonlu (ve muhtemelen değiştirilebilir) bir köşe veya düğüm veya nokta kümesi ile birlikte, yönlendirilmemiş bir çizge için bu köşelerin sıralanmamış çiftlerinden veya yönlendirilmiş bir çizge için sıralanmış çiftlerden oluşan bir veri yapısıdır. Bu çiftler, yönlendirilmemiş bir grafik için kenarlar, yaylar veya çizgiler olarak ve yönlendirilmiş bir grafik için oklar, yönlendirilmiş kenarlar, yönlendirilmiş yaylar veya yönlendirilmiş çizgiler olarak bilinir. Köşeler grafik yapısının bir parçası olabilir veya tamsayı indeksleri veya referanslarla temsil edilen harici varlıklar olabilir. Graflar, birçok gerçek dünya uygulaması için en kullanışlı veri yapılarından biridir. Graflar nesneler arasındaki ikili ilişkileri modellemek için kullanılır. Örneğin, havayolu rota ağı, şehirlerin köşeler ve uçuş rotalarının kenarlar olduğu bir grafiktir. Çizgeler ağları temsil etmek için de kullanılır. İnternet, bilgisayarların köşeler ve bilgisayarlar arasındaki bağlantıların da kenarlar olduğu bir çizge olarak modellenebilir. Graflar LinkedIn ve Facebook gibi sosyal ağlarda da kullanılır. Graflar birçok gerçek dünya uygulamasını temsil etmek için kullanılır: bilgisayar ağları, devre tasarımı ve havacılık planlaması bunlardan sadece birkaçıdır.



### [Dinamik Programlama](Algorithms/Dynamic%20Programming/README.md)
Dinamik programlama hem matematiksel bir optimizasyon yöntemi hem de bir bilgisayar programlama yöntemidir. Richard Bellman bu yöntemi 1950'lerde geliştirmiş ve havacılık ve uzay mühendisliğinden ekonomiye kadar pek çok alanda uygulama alanı bulmuştur. Her iki bağlamda da, karmaşık bir problemi özyinelemeli bir şekilde daha basit alt problemlere ayırarak basitleştirmeyi ifade eder. Bazı karar problemleri bu şekilde parçalara ayrılamazken, zaman içinde birkaç noktayı kapsayan kararlar genellikle özyinelemeli olarak parçalara ayrılır. Benzer şekilde, bilgisayar bilimlerinde, bir problem alt problemlere bölünerek ve ardından alt problemlerin optimal çözümleri özyinelemeli olarak bulunarak optimal bir şekilde çözülebiliyorsa, o zaman optimal bir alt yapıya sahip olduğu söylenir. Dinamik programlama, bu özelliklere sahip problemleri çözmenin bir yoludur. Karmaşık bir problemi daha basit alt problemlere bölme işlemine "böl ve fethet" denir.


### [Açgözlü Algortmalar](Algorithms/Greedy%20Algorithm/readme.md)
Açgözlü algoritmalar, bazı optimizasyon problemlerine en uygun çözümü bulmak için kullanılabilen basit, sezgisel bir algoritma sınıfıdır. Açgözlü olarak adlandırılırlar çünkü her adımda o anda en iyi görünen seçimi yaparlar. Bu, açgözlü algoritmaların küresel olarak en uygun çözümü döndürmeyi garanti etmediği, bunun yerine küresel bir optimum bulma umuduyla yerel olarak en uygun seçimleri yaptığı anlamına gelir. Açgözlü algoritmalar optimizasyon problemleri için kullanılır. Bir optimizasyon problemi, problem aşağıdaki özelliğe sahipse Greedy kullanılarak çözülebilir: her adımda, o anda en iyi görünen bir seçim yapabiliriz ve tüm problem için en uygun çözümü elde ederiz.


### [Geri İzleme](Algorithms/Backtracking/README.md)
Geri izleme, zamanın herhangi bir noktasında problemin kısıtlamalarını karşılayamayan çözümleri kaldırarak, her seferinde bir parça olmak üzere aşamalı olarak bir çözüm oluşturmaya çalışarak problemleri özyinelemeli olarak çözmeye yönelik algoritmik bir tekniktir (burada zamanla, arama ağacının herhangi bir seviyesine ulaşana kadar geçen süre kastedilmektedir).


### [Dal ve Sınır](Algorithms/Branch%20and%20Bound/README.md)
Dal ve sınır, kombinatoryal optimizasyon problemlerini çözmek için kullanılan genel bir tekniktir. Optimal olması mümkün olmayan aday çözümleri elemek için problemin yapısını kullanarak aday çözümlerin sayısını azaltan sistematik bir numaralandırma tekniğidir.


### [Farklı Arama ve Sıralama Algoritmalarının Zaman Karmaşıklığı ve Alan Karmaşıklığı](Not-Added)
**Zaman Karmaşıklığı**: Belirli bir komut setinin toplam süresinden ziyade kaç kez yürütülmesinin beklendiği olarak tanımlanır. Zaman bağımlı bir olgu olduğundan, zaman karmaşıklığı işlemci hızı, kullanılan derleyici vb. gibi bazı dış faktörlere bağlı olarak değişebilir.

**Alan Karmaşıklığı**: Programın yürütülmesi için tükettiği toplam bellek alanıdır..

Her ikisi de girdi boyutunun(n) fonksiyonu olarak hesaplanır. Bir algoritmanın zaman karmaşıklığı büyük O gösterimiyle ifade edilir.

Bir algoritmanın verimliliği bu iki parametreye bağlıdır.

Zaman Karmaşıklığı Türleri :

- *En iyi Zaman Karmaşıklığı*: Algoritmanın daha az zaman aldığı veya minimum zaman aldığı girdi. En iyi durumda, bir algoritmanın alt sınır zaman karmaşıklığını hesaplarız. Örneğin: doğrusal bir aramada aranacak veri büyük bir veri dizisinin ilk konumunda mevcutsa, en iyi durum gerçekleşir.

- *Ortalama Zaman Karmaşıklığı*: Tüm rastgele girdileri alır ve tüm girdiler için hesaplama süresini hesaplarız. Sonra da bunu toplam girdi sayısına böleriz.

- *En Kötü Zaman Karmaşıklığı*: Algoritmanın uzun zaman veya maksimum zaman aldığı girdiyi tanımlayın. En kötü durumda, bir algoritmanın üst sınırını hesaplarız. Örnek: Doğrusal bir arama algoritmasında aranacak veri büyük bir veri dizisinin son konumunda bulunuyorsa en kötü durum gerçekleşir.

Bazı yaygın zaman karmaşıklıkları şunlardır:

- **O(1)**: Bu, sabit zamanı ifade eder. O(1) genellikle bir algoritmanın girdi boyutu ne olursa olsun sabit bir zamana sahip olacağı anlamına gelir. Hash Haritaları sabit zamanın mükemmel örnekleridir.

- **O(log n)**: Bu logaritmik zamanı ifade eder. O(log n), işlemler için her örnekte azalma anlamına gelir. İkili Arama Ağaçlarında (BST'ler) eleman aramak logaritmik zamana iyi bir örnektir.

- **O(n)**: Bu doğrusal zamanı ifade eder. O(n), performansın girdinin boyutuyla doğru orantılı olduğu anlamına gelir. Basit bir ifadeyle, girdi sayısı ile bu girdileri yürütmek için harcanan zaman orantılı olacaktır. Dizilerde doğrusal arama, doğrusal zaman karmaşıklığına harika bir örnektir.

- **O(n*n)**: Bu, ikinci dereceden zamanı ifade eder. O(n^2), performansın alınan girdinin karesiyle doğru orantılı olduğu anlamına gelir. Basitçe, yürütme için geçen süre kabaca girdi boyutunun karesini alacaktır. İç içe döngüler ikinci dereceden zaman karmaşıklığının mükemmel örnekleridir.

- **O(n log n)**: Bu, polinom zaman karmaşıklığını ifade eder. O(n log n), performansın O(log n)'nin n katı olduğu anlamına gelir (bu en kötü durum karmaşıklığıdır). Birleştirme sıralaması gibi böl ve fethet algoritmaları buna iyi bir örnektir. Bu algoritma önce kümeyi böler, bu O(log n) zaman alır, daha sonra kümeyi fetheder ve sıralar, bu da O(n) zaman alır - bu nedenle, Merge sort O(n log n) zaman alır.

| Algoritma	     |             |  Zaman Karmaşıklığı|	       | Alan Karmaşıklığı |
|   :---:        |  :---:      |  :---: 	   |   :---: 	   |   :---:          |
|  	             | Best	       | Average	   |  Worst	     |  Worst           |
| Selection Sort | Ω(n^2)	     | θ(n^2)	     | O(n^2)	     | O(1)             |
| Bubble Sort	 | Ω(n)	         | θ(n^2)	     | O(n^2)	     | O(1)             |
| Insertion Sort | Ω(n)	       | θ(n^2)	     | O(n^2)	     | O(1)             |
| Heap Sort	     | Ω(n log(n)) | θ(n log(n)) | O(n log(n)) | O(1)             |
| Quick Sort	   | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(n)             |
| Merge Sort	   | Ω(n log(n)) | θ(n log(n)) | O(n log(n)) | O(n)             |
| Bucket Sort    | Ω(n +k)	   | θ(n +k)	   | O(n^2)	     | O(n)             |
| Radix Sort  	 | Ω(nk)	     | θ(nk)	     | O(nk)	     | O(n + k)         |
| Count Sort  	 | Ω(n +k)	   | θ(n +k)	   | O(n +k)	   | O(k)             |
| Shell Sort  	 | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(1)             |
| Tim Sort	     | Ω(n)	       | θ(n log(n)) | O(n log(n)) | O(n)             |
| Tree Sort   	 | Ω(n log(n)) | θ(n log(n)) | O(n^2)	     | O(n)             |
| Cube Sort	     | Ω(n)	       | θ(n log(n)) | O(n log(n)) | O(n)             |

| Algoritma	     |             |  Zaman Karmaşıklığı|	     |
|   :---:        |  :---:      |  :---: 	 |   :---: 	   |  
|  	             | Best	       | Average	 |  Worst	     |
| Linear Search  | O(1)	       | O(N)	     | O(N)	       | O(1)  |
| Binary Search	 | O(1)	       | O(logN)   | O(logN)	   |



## [Alan Turing](Not-Added)
Alan Turing (d. 23 Haziran 1912, Londra, İngiltere - ö. 7 Haziran 1954, Wilmslow, Cheshire) İngiliz matematikçi ve mantıkçı. Cambridge Üniversitesi'nde ve Princeton İleri Araştırmalar Enstitüsü'nde eğitim gördü. 1936 tarihli "On Computable Numbers" (Hesaplanabilir Sayılar Üzerine) adlı ufuk açıcı makalesinde, matematikte doğruyu belirlemek için evrensel bir algoritmik yöntemin var olamayacağını ve matematiğin her zaman karar verilemez (bilinmeyenin aksine) önermeler içereceğini kanıtladı. Bu makale aynı zamanda Turing makinesini de tanıttı. Bilgisayarların eninde sonunda bir insanınkinden ayırt edilemeyecek bir düşünce yeteneğine sahip olacağına inanmış ve bu yeteneği değerlendirmek için basit bir test (bkz. Turing testi) önermiştir. Bu konudaki makaleleri yapay zeka araştırmalarının temeli olarak kabul edilmektedir. İkinci Dünya Savaşı sırasında kriptografi alanında değerli çalışmalar yapmış ve Almanya'nın telsiz iletişiminde kullandığı Enigma kodunun kırılmasında önemli bir rol oynamıştır. Savaştan sonra Manchester Üniversitesi'nde ders verdi ve günümüzde yapay zeka olarak bilinen alan üzerinde çalışmaya başladı. Bu çığır açan çalışmaların ortasında Turing yatağında siyanürle zehirlenmiş olarak ölü bulundu. Ölümü, eşcinsel bir eylemden (o zamanlar suçtu) tutuklanmasını ve 12 aylık hormon tedavisi cezasını takip etti.


2009'da kamuoyunda yürütülen bir kampanyanın ardından İngiltere Başbakanı Gordon Brown, Turing'e yapılan korkunç muamele nedeniyle İngiliz hükümeti adına kamuoyundan resmi bir özür diledi. Kraliçe Elizabeth II 2013 yılında ölümünden sonra affedilmiştir. "Alan Turing yasası" terimi artık gayri resmi olarak, Birleşik Krallık'ta eşcinsel eylemleri yasaklayan tarihi mevzuat uyarınca uyarılan veya hüküm giyen erkekleri geriye dönük olarak affeden 2017 tarihli bir yasaya atıfta bulunmak için kullanılmaktadır.

Turing, heykelleri ve bilgisayar bilimlerindeki yenilikler için her yıl verilen bir ödül de dahil olmak üzere onun adını taşıyan birçok şeyle kapsamlı bir mirasa sahiptir. Doğum gününe denk gelecek şekilde 23 Haziran 2021'de piyasaya sürülen mevcut İngiltere Merkez Bankası 50 sterlinlik banknotunda yer almaktadır. 2019 yılında BBC'de yayınlanan bir dizi, izleyicilerin oylarıyla onu 20. yüzyılın en büyük kişisi seçti.


## [Yazılım Mühendisliği](Software%20Engineering/readme.md)
Yazılım mühendisliği, yazılım uygulamalarının tasarımı, geliştirilmesi, test edilmesi ve bakımı ile ilgilenen bilgisayar bilimi dalıdır. Yazılım mühendisleri, son kullanıcılara yönelik yazılım çözümleri oluşturmak için mühendislik ilkelerini ve programlama dilleri bilgisini uygular.

Şimdi yazılım mühendisliğinin çeşitli tanımlarına bakalım:

- IEEE, 610.12-1990 sayılı standardında yazılım mühendisliğini, yazılımın geliştirilmesi, işletilmesi ve bakımı için sistematik, disiplinli ve hesaplanabilir bir yaklaşımın uygulanması olarak tanımlamaktadır.
- Fritz Bauer ise "standart mühendislik ilkelerinin oluşturulması ve kullanılması" olarak tanımlamıştır. Güvenilir ve gerçek makineler üzerinde verimli bir şekilde çalışan ekonomik yazılımlar elde etmenize yardımcı olur.
- Boehm yazılım mühendisliğini 'bilimsel bilginin bilgisayar programlarının yaratıcı tasarım ve inşasına pratik olarak uygulanması' olarak tanımlamaktadır. Ayrıca bunların geliştirilmesi, işletilmesi ve bakımı için gereken ilgili dokümantasyonu da içerir.

### Yazılım mühendisi görev ve sorumlulukları
Başarılı mühendisler, bilgisayar oyunlarından ağ kontrol sistemlerine kadar her şeyi geliştirmek için doğru programlama dillerini, platformları ve mimarileri nasıl kullanacaklarını bilirler. Yazılım mühendisleri, kendi sistemlerini oluşturmanın yanı sıra, diğer mühendisler tarafından oluşturulan yazılımları da test eder, geliştirir ve bakımını yaparlar.

Bu rolde, günlük görevleriniz aşağıdakileri içerebilir:

- Yazılım sistemlerinin tasarlanması ve bakımı
- Yeni yazılım programlarının değerlendirilmesi ve test edilmesi
- Hız ve ölçeklenebilirlik için yazılım optimizasyonu
- Kod yazma ve test etme
- Müşteriler, mühendisler, güvenlik uzmanları ve diğer paydaşlarla danışmanlık
- Yeni özelliklerin paydaşlara ve iç müşterilere sunulması

### Yazılım Mühendisliği Aşamaları
Yazılım mühendisliği süreci, gereksinimlerin toplanması, tasarım, uygulama, test ve bakım dahil olmak üzere çeşitli aşamaları içerir. Yazılım mühendisleri, yazılım geliştirmeye yönelik disiplinli bir yaklaşım izleyerek kullanıcılarının ihtiyaçlarını karşılayan yüksek kaliteli yazılımlar oluşturabilirler.

- Yazılım mühendisliğinin ilk aşaması gereksinimlerin toplanmasıdır. Bu aşamada yazılım mühendisi, yazılımın işlevsel ve işlevsel olmayan gereksinimlerini belirlemek için müşteriyle birlikte çalışır. İşlevsel gereksinimler yazılımın ne yapması gerektiğini, işlevsel olmayan gereksinimler ise bunu ne kadar iyi yapması gerektiğini tanımlar. Gereksinimlerin toplanması, tüm yazılım geliştirme sürecinin temelini oluşturduğu için kritik bir aşamadır.

- Gereksinimler toplandıktan sonra bir sonraki aşama tasarımdır. Bu aşamada yazılım mühendisi, yazılımın mimarisi ve işlevselliği için ayrıntılı bir plan oluşturur. Bu plan, yazılımın yapısını, davranışını ve diğer sistemlerle etkileşimlerini belirleyen bir yazılım tasarım belgesi içerir. Yazılım tasarım belgesi, uygulama aşaması için bir taslak görevi gördüğü için çok önemlidir.

- Uygulama aşaması, yazılım mühendisinin yazılım için gerçek kodu oluşturduğu yerdir. Tasarım belgesinin çalışan bir yazılıma dönüştürüldüğü yer burasıdır. Uygulama aşaması kodun yazılmasını, derlenmesini ve tasarım belgesinde belirtilen gereksinimleri karşıladığından emin olmak için test edilmesini içerir.

- Test, yazılım mühendisliğinde kritik bir aşamadır. Bu aşamada yazılım mühendisi yazılımın doğru çalıştığından, güvenilir olduğundan ve kullanımının kolay olduğundan emin olmak için kontroller yapar. Bu, birim testi, entegrasyon testi ve sistem testi dahil olmak üzere çeşitli test türlerini içerir. Testler, yazılımın gereksinimleri karşılamasını ve beklendiği gibi çalışmasını sağlar.

- Yazılım mühendisliğinin son aşaması bakımdır. Bu aşamada yazılım mühendisi hataları düzeltmek, yeni özellikler eklemek ya da performansı artırmak için yazılımda değişiklikler yapar. Bakım, yazılımın ömrü boyunca devam eden bir süreçtir.


### Yazılım Mühendisliği Neden Popüler?

- Bilgisayar Bilimleri: Elektrik mühendisliği temel olarak fiziğe dayandığından yazılım için bilimsel temel sağlar.
- Yönetim Bilimi: Yazılım mühendisliği emek yoğundur ve teknik ve yönetsel kontrol gerektirir. Bu nedenle yönetim biliminde yaygın olarak kullanılır.
- Ekonomi: Bu sektörde yazılım mühendisliği, kaynakları tahmin etmenize ve maliyetleri kontrol etmenize yardımcı olur. Bir bilgi işlem sistemi geliştirilmeli ve veriler belirli bir bütçe dahilinde düzenli olarak muhafaza edilmelidir.
- Sistem Mühendisliği: Çoğu yazılım çok daha büyük bir sistemin bileşenidir. Örneğin, bir Endüstri izleme sistemindeki yazılım veya bir uçaktaki uçuş yazılımı. Bu tür sistemlerin incelenmesinde yazılım mühendisliği yöntemleri uygulanmalıdır.

## [Veri Bilimi](Data%20Science/readme.md)

Veri Bilimi, bilgisayar bilimi, istatistik ve incelenen alanın bilgisini uygulayarak genellikle dağınık verilerden değerli içgörüler çıkarır. Veri biliminin kullanımına örnek olarak, çağrı kayıtlarından müşteri duyarlılığının türetilmesi veya satış kayıtlarından türetilen satın alma öneri sistemleri verilebilir.

## [Entegre Devreler](Integrated%20Circuits/readme.md)
Entegre devre veya monolitik entegre devre (IC, çip veya mikroçip olarak da adlandırılır), genellikle silikon olan yarı iletken malzemenin küçük düz bir parçası (veya "çip") üzerindeki bir dizi elektronik devredir. Çok sayıda küçük MOSFET (metal-oksit-yarı iletken alan etkili transistör) küçük bir çipe entegre edilir. Bu da ayrık elektronik bileşenlerden oluşan devrelerden çok daha küçük, hızlı ve ucuz devreler ortaya çıkarır. IC'nin seri üretim kabiliyeti, güvenilirliği ve entegre devre tasarımına yapı taşı yaklaşımı, ayrık transistörlerin yerine standartlaştırılmış IC'lerin hızla benimsenmesini sağlamıştır. IC'ler artık neredeyse tüm elektronik ekipmanlarda kullanılmaktadır ve elektronik dünyasında devrim yaratmıştır. Bilgisayarlar, cep telefonları ve diğer ev aletleri, modern bilgisayar işlemcileri ve mikrodenetleyiciler gibi IC'lerin küçük boyutları ve düşük maliyetleri sayesinde artık modern toplumların yapısının ayrılmaz parçaları haline gelmiştir.

Çok büyük ölçekli entegrasyon, metal-oksit-silikon (MOS) yarı iletken cihaz üretimindeki teknolojik gelişmeler sayesinde pratik hale gelmiştir. 1960'lardaki kökenlerinden bu yana, aynı boyuttaki çiplere giderek daha fazla MOS transistörü sığdıran teknik ilerlemeler sayesinde çiplerin boyutu, hızı ve kapasitesi muazzam bir şekilde gelişti - modern bir çip, insan tırnağı büyüklüğündeki bir alanda milyarlarca MOS transistörüne sahip olabilir. Kabaca Moore yasasını takip eden bu ilerlemeler, günümüz bilgisayar çiplerinin 1970'lerin başındaki bilgisayar çiplerinin milyonlarca katı kapasiteye ve binlerce katı hıza sahip olmasını sağlamaktadır.

IC'lerin ayrık devrelere göre iki ana avantajı vardır: maliyet ve performans. Maliyet düşüktür çünkü çipler, tüm bileşenleriyle birlikte, her seferinde bir transistör inşa edilmek yerine fotolitografi ile bir birim olarak basılır. Ayrıca, paketlenmiş IC'ler ayrık devrelerden çok daha az malzeme kullanır. Performans yüksektir çünkü IC'nin bileşenleri hızlı bir şekilde değişir ve küçük boyutları ve yakınlıkları nedeniyle nispeten daha az güç tüketir. IC'lerin ana dezavantajı, onları tasarlamanın ve gerekli fotomaskları üretmenin yüksek maliyetidir. Bu yüksek başlangıç maliyeti, IC'lerin yalnızca yüksek üretim hacimleri öngörüldüğünde ticari olarak uygulanabilir olduğu anlamına gelir.

### Türleri
Modern elektronik bileşen distribütörleri genellikle entegre devreleri daha da alt kategorilere ayırmaktadır:

- Dijital IC'ler mantık IC'leri (mikroişlemciler ve mikrodenetleyiciler gibi), bellek çipleri (MOS bellek ve kayan kapılı bellek gibi), arayüz IC'leri (seviye değiştiriciler, serileştirici/serileştirici, vb.), güç yönetimi IC'leri ve programlanabilir cihazlar olarak kategorize edilir.
- Analog IC'ler doğrusal entegre devreler ve RF devreleri (radyo frekans devreleri) olarak kategorize edilir.
- Karışık sinyalli entegre devreler veri toplama IC'leri (A/D dönüştürücüler, D/A dönüştürücüler ve dijital potansiyometreler), saat/zamanlama IC'leri, anahtarlamalı kapasitör (SC) devreleri ve RF CMOS devreleri olarak kategorize edilir.
- Üç boyutlu entegre devreler (3D IC'ler) silikon aracılığıyla (TSV) IC'ler ve Cu-Cu bağlantı IC'leri olarak kategorize edilir.


## [Nesne Yönelimli Programlama](Object%20Oriented%20Programming/readme.md)
Nesne Yönelimli Programlama, nesne ve veri kavramlarına dayanan temel bir programlama paradigmasıdır.

Kodun daha iyi okunabilirliği ve yeniden kullanılabilirliği için her programcının uyması gereken standart kodlama yöntemidir. 


### Nesne Yönelimli Programlamanın dört temel kavramı vardır:
- Soyutlama
- Kapsülleme
- Kalıtım
- Polimorfizm 

Nesne yönelimli programlama hakkıdna daha fazla bilgiye ulaşabilirsin [buradan](Object%20Oriented%20Programming/readme.md)

## [Fonksiyonel Programlama](Functional%20Programming/readme.md)

Bilgisayar bilimlerinde fonksiyonel programlama, programların fonksiyonların uygulanması ve oluşturulmasıyla oluşturulduğu bir programlama paradigmasıdır. Fonksiyon tanımlarının, programın çalışma durumunu güncelleyen bir dizi zorunlu ifade yerine, değerleri diğer değerlerle eşleyen ifade ağaçları olduğu bildirimsel bir programlama paradigmasıdır.

Fonksiyonel programlamada fonksiyonlar birinci sınıf vatandaş olarak kabul edilir, yani diğer veri türlerinde olduğu gibi isimlere (yerel tanımlayıcılar dahil) bağlanabilir, argüman olarak aktarılabilir ve diğer fonksiyonlardan döndürülebilirler. Bu, programların küçük fonksiyonların modüler bir şekilde birleştirildiği bildirimsel ve birleştirilebilir bir tarzda yazılmasına olanak tanır.

Fonksiyonel programlama bazen tüm fonksiyonları deterministik matematiksel fonksiyonlar veya saf fonksiyonlar olarak ele alan fonksiyonel programlamanın bir alt kümesi olan saf fonksiyonel programlama ile eş anlamlı olarak ele alınır. Saf bir fonksiyon verilen bazı argümanlarla çağrıldığında, her zaman aynı sonucu döndürür ve herhangi bir değişken durumdan veya diğer yan etkilerden etkilenmez. Bu, zorunlu programlamada yaygın olan ve yan etkileri olabilen (programın durumunu değiştirmek veya bir kullanıcıdan girdi almak gibi) saf olmayan prosedürlerin tersidir. Tamamen işlevsel programlamanın savunucuları, yan etkileri kısıtlayarak programların daha az hataya sahip olabileceğini, hata ayıklama ve test etmenin daha kolay olabileceğini ve resmi doğrulama prosedürlerine daha uygun olabileceğini iddia etmektedir.

Fonksiyonel programlamanın kökleri akademiye dayanır ve yalnızca fonksiyonlara dayalı resmi bir hesaplama sistemi olan lambda kalkülüsünden gelişmiştir. İşlevsel programlama tarihsel olarak zorunlu programlamadan daha az popüler olmuştur, ancak birçok işlevsel dil günümüzde endüstri ve eğitimde kullanılmaktadır. 

Fonksiyonel programlama dillerinin bazı örnekleri şunlardır:
- <a href="https://lisp-lang.org/"> Common Lisp </a>
- <a href="https://www.scheme.org/"> Scheme </a>
- <a href="https://racket-lang.org/"> Racket </a>
- <a href="https://www.erlang.org/"> Erlang </a>
- <a href="https://www.haskell.org/"> Haskell </a>
- <a href="https://fsharp.org/"> F# </a>
- <a href="https://cs.lmu.edu/~ray/notes/introml/"> ML </a> 

Fonksiyonel programlama tarihsel olarak *lambda kalkülüsünden* türetilmiştir. Lambda hesabı, Alonzo Church tarafından fonksiyonlarla hesaplamaları incelemek için geliştirilen bir çerçevedir. Genellikle "dünyanın en küçük programlama dili" olarak adlandırılır. Neyin hesaplanabilir neyin hesaplanamaz olduğuna dair bir tanım sağlar. Hesaplama yeteneği açısından bir Turing makinesine eşdeğerdir ve lambda kalkülüsü tarafından hesaplanabilen her şey, tıpkı bir Turing makinesi tarafından hesaplanabilen her şey gibi, hesaplanabilirdir. Fonksiyonları ve bunların değerlendirmelerini tanımlamak için teorik bir çerçeve sağlar.

Fonksiyonel programlamanın bazı temel kavramları şunlardır:
- Saf fonksiyonlar 
- Özyineleme
- Referans şeffaflığı
- Birinci sınıf ve yüksek dereceden fonksiyonlar
- Değişkenler değişmezdir.

**Saf fonksiyonlar**: Bu fonksiyonların iki temel özelliği vardır. Birincisi, başka hiçbir şeye bakılmaksızın aynı argümanlar için her zaman aynı çıktıyı üretirler. İkincisi, hiçbir yan etkileri yoktur. yani herhangi bir argümanı veya yerel/global değişkeni değiştirmezler
veya giriş/çıkış akışları. İkinci özelliğe *değişmezlik* denir. Saf fonksiyonun tek sonucu döndürdüğü değerdir. Deterministiktirler. Fonksiyonel programlama kullanılarak yapılan programların hata ayıklaması kolaydır çünkü yan etkileri veya gizli G/Ç'leri yoktur. Saf fonksiyonlar paralel/eşzamanlı uygulamalar yazmayı da kolaylaştırır. Kod bu tarzda yazıldığında, akıllı bir derleyici birçok şey yapabilir - talimatları paralelleştirebilir, sonuçları ihtiyaç duyulana kadar değerlendirmek için bekleyebilir ve giriş değişmediği sürece sonuçlar asla değişmeyeceğinden sonuçları hafızaya alabilir. İşte Python'da saf bir fonksiyonun basit bir örneği:

```python
def topla(x ,y): # topla x ve yi parametre olarak alan bir fonskiyondur
    return x + y  # x ve y değerlerini değiştirmeden x+y sonucunu verir
 ```

**Özyineleme**: Saf fonksiyonel programlama dillerinde "for" veya "while" döngüleri yoktur. Yineleme özyineleme yoluyla gerçekleştirilir. Özyinelemeli fonksiyonlar, bir temel duruma ulaşılana kadar kendilerini tekrar tekrar çağırırlar. İşte C'de basit bir özyineleme fonksiyonu örneği:

```c
int fib(n) {
  if(n <= 1)
    return 1;
   else
     return (fib(n-1) + fib(n-2));
}
 ```
**Yönelimsel şeffaflık**: Fonksiyonel programlarda, değişkenler bir kez tanımlandıktan sonra program boyunca değerlerini değiştirmezler.
Fonksiyonel programlarda atama deyimleri yoktur. Eğer bir değeri saklamamız gerekiyorsa, onun yerine yeni bir değişken tanımlarız. Bu, herhangi bir yan etki olasılığını ortadan kaldırır çünkü herhangi bir değişken, yürütmenin herhangi bir noktasında gerçek değeriyle değiştirilebilir. Herhangi bir değişkenin durumu her an sabittir. Örnek:

 
```bash
x = x + 1 # bu işlem x teki değeri değiştirdi
         # Bu nedenle, ifade referans olarak şeffaf DEĞİLDİR
```

**Fonksiyonlar birinci sınıftır ve daha yüksek dereceli olabilir**: Birinci sınıf fonksiyonlar birinci sınıf değişkenler olarak ele alınır. Birinci sınıf değişkenler fonksiyonlara parametre olarak aktarılabilir, fonksiyonlardan döndürülebilir veya veri yapılarında saklanabilir.
         
Fonksiyon uygulamalarının bir kombinasyonu, **funcall** adı verilen ve argüman olarak bir fonksiyon ve bir dizi argüman alan ve bu fonksiyonu bu argümanlara uygulayan bir LISP formu kullanılarak tanımlanabilir:

```Lisp
(defun filter (list-of-elements test)
    (cond ((null list-of-elements) nil)
          ((funcall test (car list-of-elements))
            (cons (car list-of-elements)
                (filter (cdr list-of-elements)
                      test)))
           (t (filter (cdr list-of-elements)
                       test))))
   ```
  **filter** fonksiyonu listenin ilk elemanına testi uygular. Eğer test non-nil döndürürse, elemanı listenin cdr'sine uygulanan filtrenin sonucuna ekler; aksi takdirde, sadece filtrelenmiş cdr'yi döndürür. Bu fonksiyon, çeşitli filtreleme görevlerini gerçekleştirmek için parametre olarak geçirilen farklı yüklemlerle kullanılabilir:

```Lisp
    > (filter '(1 3 -9 5 -2 -7 6) #'plusp)   ; filter out all negative numbers 
```    
    output: (1 3 5 6)

```Lisp
   > (filter '(1 2 3 4 5 6 7 8 9) #'evenp)   ; filter out all odd numbers
```   
   output: (2 4 6 8)

   and so on.

**Değişkenler değişmezdir**: Fonksiyonel programlamada, bir değişken başlatıldıktan sonra onu değiştiremeyiz.
Yeni değişkenler oluşturabiliriz, ancak mevcut değişkenleri değiştiremeyiz ve bu, bir programın çalışma süresi boyunca durumun korunmasına gerçekten yardımcı olur. Bir değişken oluşturduktan ve değerini belirledikten sonra, bu değişkenin değerinin asla değişmeyeceğini bilerek tam bir güvene sahip olabiliriz.

## [İşletim Sistemleri](Operating%20Systems/readme.md)
Bir işletim sistemi (ya da kısaca OS) bilgisayar kullanıcısı ile bilgisayar donanımı arasında bir aracı görevi görür. Bir işletim sisteminin amacı, kullanıcının programları rahat ve verimli bir şekilde yürütebileceği bir ortam sağlamaktır.
İşletim sistemi, bilgisayar donanımını yöneten bir yazılımdır. Donanım, bilgisayar sisteminin doğru çalışmasını sağlamak ve kullanıcı programlarının sistemin düzgün çalışmasına müdahale etmesini önlemek için uygun mekanizmalar sağlamalıdır.
Daha da yaygın bir tanım ise işletim sisteminin bilgisayarda her zaman çalışan tek bir program olduğu (genellikle çekirdek olarak adlandırılır) ve diğer tüm programların uygulama programları olduğudur.

İşletim sistemlerine iki açıdan bakılabilir: kaynak yöneticileri ve genişletilmiş makineler. Kaynak yöneticisi görüşünde, işletim sisteminin görevi sistemin farklı parçalarını verimli bir şekilde yönetmektir. Genişletilmiş makine görüşünde, sistemin görevi kullanıcılara gerçek makineden daha rahat kullanılabilecek soyutlamalar sağlamaktır. Bunlar süreçleri, adres alanlarını ve dosyaları içerir. İşletim sistemleri, operatörün yerini aldıkları zamandan modern çok programlı sistemlere kadar uzun bir geçmişe sahiptir. Önemli noktalar arasında ilk toplu iş sistemleri, çok programlı sistemler ve kişisel bilgisayar sistemleri bulunmaktadır.
bilgisayar donanımını anlamak için faydalıdır. Bilgisayarlar şunlardan oluşur işlemciler, bellekler ve G/Ç aygıtları. Bu parçalar veri yolları ile birbirine bağlıdır. Tüm işletim sistemlerinin üzerine inşa edildiği temel kavramlar süreçlerdir, bellek yönetimi, G/Ç yönetimi, dosya sistemi ve güvenlik. Herhangi bir işletim sisteminin kalbi, işleyebileceği sistem çağrıları kümesidir. Bunlar işletim sisteminin ne yaptığını söyler.

### Kaynak yöneticisi olarak işletim sistemi
İşletim sistemi karmaşık bir sistemin tüm parçalarını yönetir. Modern bilgisayarlar işlemcilerden, hafızalardan, zamanlayıcılardan, disklerden, farelerden oluşur.
ağ arayüzleri, yazıcılar ve çok çeşitli diğer cihazlar.
Aşağıdan yukarıya bakıldığında, işletim sisteminin görevi, verilerin düzenli ve kontrollü bir şekilde tahsis edilmesini sağlamaktır.
işlemciler, bellekler ve G/Ç aygıtları bunları isteyen çeşitli programlar arasındadır.
Modern işletim sistemleri birden fazla programın bellekte bulunmasına ve çalıştırılmasına olanak tanır
eşzamanlı. Bazı cihazlarda üç program çalışırsa ne olacağını hayal edin
bilgisayarların tümü çıktılarını aynı yazıcıda aynı anda yazdırmaya çalıştı.
Sonuç tam bir kaos olacaktır. İşletim sistemi potansiyel kaosa düzen getirebilir
yazıcıya gönderilen tüm çıktıları diskte ara belleğe alarak.
Bir program bittiğinde işletim sistemi
daha sonra çıktısını yazıcı için saklandığı disk dosyasından kopyalayın,
aynı zamanda diğer program daha fazla çıktı üretmeye devam edebilir,
çıktının (henüz) yazıcıya gitmediği gerçeğinden habersiz.
Bir bilgisayarın (veya ağın) birden fazla kullanıcısı olduğunda, yönetim ihtiyacı
ve belleği, G/Ç aygıtlarını ve diğer kaynakları daha da fazla koruyun.
aksi takdirde kullanıcılar birbirlerine müdahale edebilir. Ayrıca, kullanıcıların sıklıkla ihtiyaç duyduğu
Yalnızca donanımı değil bilgileri de (dosyalar, veritabanları vb.) paylaşın. Kısacası,
İşletim sisteminin bu görüşü, onun birincil görevinin verileri takip etmek olduğunu savunur.
hangi programlar hangi kaynağı kullanıyor, kaynak isteklerini vermek, hesaba katmak için
kullanım için ve farklı programlardan ve kullanıcılardan gelen çelişkili taleplere aracılık etmek için.

### Genişletilmiş bir makine olarak işletim sistemi
Makine dili düzeyindeki çoğu bilgisayarın mimarisi ilkeldir ve anlaşılması güçtür.
program, özellikle giriş/çıkış için. Bu noktayı daha somut hale getirmek için şunu düşünün:
çoğu bilgisayarda kullanılan modern SATA (Seri ATA) sabit diskleri. Bir programcının diski kullanmak için bilmesi gerekenler.
O zamandan beri arayüz birçok kez revize edildi ve eskisinden daha karmaşık hale geldi.
2007. Aklı başında hiçbir programcı bu diskle donanım düzeyinde uğraşmak istemez.
Bunun yerine, disk sürücüsü adı verilen bir yazılım parçası donanımla ilgilenir ve disk bloklarını okumak ve yazmak için bir arayüz sağlar.
ayrıntılara girmeden.
İşletim sistemleri, G/Ç aygıtlarını denetlemek için birçok sürücü içerir.
Ancak bu seviye bile çoğu uygulama için çok düşüktür. Bu sebeple hepsi
işletim sistemleri diskleri kullanmak için başka bir soyutlama katmanı daha sağlar: dosyalar.
Bu soyutlamayı kullanarak programlar, donanımın nasıl çalıştığına dair karmaşık ayrıntılarla uğraşmadan dosyalar oluşturabilir, yazabilir ve okuyabilir.
Bu soyutlama, tüm bu karmaşıklığı yönetmenin anahtarıdır. İyi soyutlamalar
neredeyse imkansız bir görevi yönetilebilir iki göreve dönüştürün. Birincisi tanımlayıcı ve
soyutlamaların uygulanması. İkincisi, bu soyutlamaları çözmek için kullanmaktır.
Eldeki sorun.

### İşletim Sistemlerinin Tarihçesi
- **Birinci Nesil (1945-55)**: Babbage'nin felaketle sonuçlanan çabalarından sonra, II. Dünya Savaşı dönemine kadar dijital bilgisayarların yapımında çok az ilerleme sağlandı. Iowa State Üniversitesi'nde Profesör John Atanasoff ve yüksek lisans öğrencisi Clifford Berry, bugün ilk operasyonel dijital bilgisayar olarak kabul edilen bilgisayarı yarattılar. Berlin'deki Konrad Zuse, aynı sıralarda elektromekanik röleler kullanarak Z3 bilgisayarını inşa etti. Mark I, Harvard'dan Howard Aiken tarafından, Colossus İngiltere'deki Bletchley Park'taki bir bilim insanları ekibi tarafından ve ENIAC, 1944'te Pensilvanya Üniversitesi'nden William Mauchley ve doktora öğrencisi J. Presper Eckert tarafından yaratıldı.

- **İkinci Nesil (1955-65)**: 1950'lerin ortasında transistörün icadı durumu büyük ölçüde değiştirdi. Bilgisayarlar, anlamlı bir iş yapabilecek kadar uzun süre çalışmaya devam edecekleri varsayımıyla üretilip ödeme yapan müşterilere satılabilecek kadar güvenilir hale geldi. Bu makinelerin artık bilindiği şekliyle ana bilgisayarlar, onları yönetmek için kalifiye operatörlerden oluşan ekiplerle birlikte, özellikle klimalı büyük bilgisayar odalarında kilitli tutuldu. Yalnızca büyük işletmeler, önemli devlet kurumları veya kurumlar birkaç milyon dolarlık fiyat etiketini karşılayabilirdi.

- **Üçüncü Nesil (1965-80)**: Bireysel transistörlerden oluşturulan ikinci nesil bilgisayarlarla karşılaştırıldığında IBM 360, (küçük ölçekli) IC'leri (Entegre Devreler) kullanan ilk büyük bilgisayar hattıydı. Sonuç olarak önemli bir fiyat/performans avantajı sundu. Anında büyük ilgi gördü ve diğer tüm büyük üreticiler, birlikte çalışabilen bilgisayarlar ailesi kavramını hızla benimsediler. OS/360 işletim sistemi de dahil olmak üzere tüm yazılımların orijinal tasarımdaki tüm modellerle uyumlu olması gerekiyordu. Yoğun hesaplama ve hava tahmini için sıklıkla 7094'lerin yerini alan devasa sistemlerle ve kartları kasete aktarmak için sıklıkla yalnızca 1401'lerin yerini alan küçük sistemlerle çalışması gerekiyordu. Hem az çevre birimine sahip sistemler hem de çok sayıda çevre birimine sahip sistemlerin iyi çalışması gerekiyordu. Hem profesyonel hem de akademik ortamlarda çalışması gerekiyordu. Her şeyden önce bu birçok uygulamanın her biri için etkili olması gerekiyordu.

- **Dördüncü Nesil (1980-Günümüz)**: Kişisel bilgisayar çağı, bir santimetre kare silikon üzerinde binlerce transistör içeren LSI (Büyük Ölçekli Entegrasyon) devrelerinin, yani işlemcilerin oluşturulmasıyla başladı. Başlangıçta mikrobilgisayarlar olarak bilinen kişisel bilgisayarlar, mimari olarak PDP-11 sınıfı mini bilgisayarlardan önemli ölçüde farklılık göstermese de, fiyat açısından önemli ölçüde farklılık gösterdi.

- **Beşinci Nesil (1990'dan Günümüze)**: 1940'ların çizgi romanlarında dedektif Dick Tracy "iki yönlü telsizli kol saati" ile konuşmaya başladığından beri insanlar taşınabilir bir iletişim cihazının özlemini çekiyorlar. 1946 yılında gerçek bir cep telefonu görücüye çıktı ve ağırlığı yaklaşık 40 kilogramdı. İlk gerçek taşınabilir telefon 1970'lerde piyasaya çıktı ve yaklaşık bir kilogram gibi inanılmaz derecede hafifti. Şaka amaçlı "tuğla" olarak anılıyordu. Çok geçmeden herkes bir tane için haykırmaya başladı.

### Bir işletim sisteminin işlevleri
- **Kullanım**: İşletim sistemi bilgisayarın kullanımını daha kolay hale getirir.
- **Verimlilik**: İşletim sistemi, bilgisayar sistemi kaynaklarının verimli bir şekilde kullanılmasına olanak tanır.
- **Gelişme Yeteneği**: Bir işletim sistemi, hizmete müdahale etmeden aynı anda yeni sistem işlevlerinin etkili bir şekilde geliştirilmesine, test edilmesine ve sunulmasına izin verecek şekilde oluşturulmalıdır.
- **Verim**: Bir işletim sistemi, maksimum verimi (Birim zaman başına görev sayısı) verebilecek şekilde oluşturulmalıdır.

### Bir işletim sisteminin temel işlevleri
- **Kaynak Yönetimi**: İşletim sisteminde paralel erişim gerçekleştiğinde, birden fazla kullanıcı sisteme eriştiğinde işletim sistemi Kaynak Yöneticisi olarak çalışır. Sorumluluğu kullanıcıya donanım sağlamaktır. Sistemdeki yükü azaltır.
- **Süreç Yönetimi**: Sürecin planlanması ve sonlandırılması gibi çeşitli görevleri içerir. İşletim sistemi aynı anda çeşitli görevleri yönetir. Burada CPU Planlamanın gerçekleşmesi, tüm görevlerin planlama için kullanılan birçok algoritma tarafından yapılacağı anlamına gelir.
- **Depolama Yönetimi**: Depolamanın yönetimi için kullanılan dosya sistemi mekanizması. NIFS, CFS, CIFS, NFS vb. bazı dosya sistemleridir. Tüm veriler, tümü depolama yöneticisi tarafından yönetilen çeşitli Sabit disk parçalarında saklanır. Bir Sabit Disk içeriyordu.
- **Bellek Yönetimi**: Birincil belleğin yönetimini ifade eder. İşletim sistemi belleğin ne kadarının ve kim tarafından kullanıldığını takip etmelidir. Hangi sürecin bellek alanına ve ne kadar alana ihtiyaç duyduğuna karar vermesi gerekir. İşletim sisteminin ayrıca bellek alanını tahsis etmesi ve serbest bırakması gerekir.
- **Güvenlik/Gizlilik Yönetimi**: Gizlilik ayrıca, yetkisiz uygulamaların programlara veya verilere erişememesi için parolalar kullanan İşletim sistemi tarafından da sağlanır. Örneğin Windows, verilere yetkisiz erişimi önlemek için **_Kerberos__** kimlik doğrulamasını kullanır.

### İşletim Sistemi Türleri
- **Ana Bilgisayar İşletim Sistemi**:
En üst düzeyde, oda büyüklüğündeki ana bilgisayarlar için işletim sistemleri var
bilgisayarlar hâlâ büyük kurumsal veri merkezlerinde bulunuyor. Bu bilgisayarlar diğerlerinden farklı
I/O kapasiteleri açısından kişisel bilgisayarlar. 1000 diskli bir ana bilgisayar
ve milyonlarca gigabaytlık veri alışılmadık bir durum değil; bunlarla kişisel bir bilgisayar
özellikleri arkadaşlarının kıskanacağı bir özellikti. Ana bilgisayarlar da bazı şeyler yapıyor.
üst düzey Web sunucuları, büyük ölçekli elektronik sunucular olarak geri dönüş gibi bir şey
ticaret siteleri ve işletmeler arası işlemler için sunucular.
Ana bilgisayarlar için işletim sistemleri ağırlıklı olarak işleme yöneliktir
çoğu muazzam miktarda G/Ç gerektiren birçok işi aynı anda gerçekleştirir. Genellikle
üç tür hizmet sunar: toplu işlem, işlem işleme ve zaman paylaşımı

- **Sunucu İşletim Sistemi**:
Bir seviye aşağısı sunucu işletim sistemleridir. Sunucularda çalışırlar,
ya çok büyük kişisel bilgisayarlar, iş istasyonları ve hatta ana bilgisayarlardır. Onlar
bir ağ üzerinden aynı anda birden fazla kullanıcıya hizmet verin ve kullanıcıların donanımı paylaşmasına izin verin
ve yazılım kaynakları. Sunucular yazdırma hizmeti, dosya hizmeti veya Web hizmeti sağlayabilir.
İnternet sağlayıcıları, müşterilerini desteklemek için birçok sunucu makinesi çalıştırır ve Web Siteleri, Web sayfalarını depolamak ve gelen istekleri işlemek için sunucuları kullanır.
Tipik sunucu işletim sistemleri Solaris, FreeBSD, Linux ve Windows Server'dır
201x.

- **Çok işlemcili işletim sistemi**:
Birinci sınıf bilgi işlem gücü elde etmenin giderek yaygınlaşan bir yolu, birden fazla CPU'yu tek bir sisteme bağlamaktır.
Tam olarak nasıl bağlandıklarına ve neyin paylaşıldığına bağlı olarak bu sistemlere paralel bilgisayarlar, çoklu bilgisayarlar veya çok işlemcili denir.
Özel işletim sistemlerine ihtiyaç duyarlar ancak bunlar genellikle sunucu işletim sistemlerinin varyasyonlarıdır.
iletişim, bağlantı ve tutarlılık için özel özelliklere sahiptir.

- **Kişisel Bilgisayar İşletim Sistemi**:
Bir sonraki kategori kişisel bilgisayar işletim sistemidir. Modern olanların hepsi
Genellikle önyükleme sırasında başlatılan düzinelerce programla çoklu programlamayı destekler.
Görevleri tek bir kullanıcıya iyi destek sağlamaktır. Yaygın olarak kullanılırlar
kelime işlem, elektronik tablolar, oyunlar ve İnternet erişimi. Yaygın örnekler:
Linux, FreeBSD, Windows 7, Windows 8 ve Apple'ın OS X. Kişisel bilgisayar
işletim sistemleri o kadar yaygın olarak bilinmektedir ki muhtemelen çok az tanıtıma ihtiyaç duyulmaktadır.
Pek çok insan başka türlerin varlığından bile haberdar değil.

- **Gömülü İşletim Sistemi**:
Gömülü sistemler, genellikle bilgisayar olarak kabul edilmeyen ve kullanıcı tarafından yüklenen yazılımları kabul etmeyen aygıtları kontrol eden bilgisayarlarda çalışır.
Tipik örnekler mikrodalga fırınlar, televizyon setleri, arabalar, DVD kaydediciler, geleneksel
telefonlar ve MP3 çalarlar. Gömülü sistemleri el bilgisayarlarından ayıran temel özellik, güvenilmeyen hiçbir yazılımın bu sistemlerde çalışmayacağının kesin olmasıdır.
Mikrodalga fırınınıza yeni uygulamalar indiremezsiniz; tüm yazılımlar
ROM'da bulunmaktadır. Bu, uygulamalar arasında korumaya gerek olmadığı anlamına gelir,
tasarımı basitleştirmek. Gömülü Linux, QNX ve gibi sistemler
VxWorks bu alanda popülerdir.

- **Akıllı Kart İşletim Sistemi**:
En küçük işletim sistemleri kredi kartı büyüklüğündeki akıllı kartlarla çalışır
CPU çipli cihazlar. Çok ciddi işlem gücü ve hafıza kısıtlamaları var.
Bazıları, okuyucunun içinde bulundukları bağlantılardan güç alır.
takılı, ancak temassız akıllı kartlar endüktif olarak çalıştırılıyor ve bu da büyük ölçüde sınırlayıcı
Ne yapabilirler. Bazıları elektronik ödemeler gibi yalnızca tek bir işlevi yerine getirirken diğerleri birden fazla işlevi yerine getirebilir.
Çoğu zaman bunlar özel sistemlerdir.
Bazı akıllı kartlar Java odaklıdır. Bu, akıllı telefondaki ROM'un
kartta Java Sanal Makinesi (JVM) için bir tercüman bulunur. Java uygulamaları (küçük
programlar) karta indirilir ve JVM yorumlayıcısı tarafından yorumlanır.
Bu kartlardan bazıları aynı anda birden fazla Java uygulamasını işleyebilir.
çoklu programlama ve bunları planlama ihtiyacı. Kaynak yönetimi ve koruması, iki veya daha fazla uygulamanın aynı anda mevcut olması durumunda da sorun haline gelir.
Bu sorunların, kartta bulunan (genellikle son derece ilkel) işletim sistemi tarafından çözülmesi gerekir.

## [Hafıze ve Depolama](Memory%20and%20Storage/readme.md)

### Hafıza
_Hafıza_ terimi, bilgisayarınızdaki kısa süreli veri erişimine izin veren bileşeni ifade eder. Bu bileşeni DRAM veya dinamik rastgele erişim belleği olarak tanıyabilirsiniz. Bilgisayarınız kısa süreli belleğinde saklanan verilere erişerek birçok işlemi gerçekleştirir. Bu tür işlemlere örnek olarak bir belgeyi düzenlemek, uygulamaları yüklemek ve İnternette gezinmek verilebilir. Sisteminizin hızı ve performansı, bilgisayarınızda yüklü olan bellek miktarına bağlıdır.
If you have a desk and a filing cabinet, the desk represents your computer's memory. Items you need to use immediately are kept on your desk for easy access. However, not much can be stored on a desk due to its size limitations.

### Depolama
Bellek, kısa vadeli verilerin konumunu ifade ederken, _storage_, bilgisayarınızdaki verilere uzun vadede depolamanıza ve erişmenize olanak sağlayan bileşendir. Depolama genellikle katı hal sürücüsü veya sabit sürücü biçiminde gelir. Depolama, uygulamalarınızı, işletim sisteminizi ve dosyalarınızı süresiz olarak barındırır. Bilgisayarların depolama sistemindeki bilgileri okuması ve yazması gerekir; bu nedenle depolama hızı, sisteminizin ne kadar hızlı açılabileceği, yüklenebileceği ve kaydettiklerinize ne kadar hızlı erişilebileceğini belirler.

Masa bilgisayarın hafızasını temsil ederken, dosya dolabı bilgisayarınızın depolama alanını temsil eder. Kaydedilmesi ve saklanması gereken ancak anında erişim için mutlaka gerekli olmayan öğeleri tutar. Dosya dolabının boyutu birçok şeyi tutabileceği anlamına gelir.

Bellek ve depolama arasındaki **önemli bir ayrım**, bilgisayar kapatıldığında belleğin temizlenmesidir. Öte yandan, bilgisayarınızı ne sıklıkta kapatırsanız kapatın, depolama alanı bozulmadan kalır. Dolayısıyla masa ve dosya dolabı benzetmesinde, ofisten çıktığınızda masanızda bırakılan dosyalar çöpe atılacaktır. Dosya dolabınızdaki her şey kalacaktır.

### Sanal bellek
Bilgisayar sistemlerinin kalbinde, programların çalıştığı ve verilerin depolandığı alan olan bellek bulunur. Peki çalıştırdığınız programlar ve üzerinde çalıştığınız veriler bilgisayarınızın belleğinin fiziksel kapasitesini aştığında ne olur? İşte bu noktada sanal bellek devreye giriyor, bilgisayarınızın belleğinin akıllı bir uzantısı gibi davranarak yeteneklerini artırıyor.

**Sanal Belleğin Tanımı ve Amacı:**

Sanal bellek, işletim sistemleri tarafından fiziksel belleğin (RAM) sınırlamalarının üstesinden gelmek için kullanılan bir bellek yönetimi tekniğidir. Yazılım uygulamaları için, bilgisayarda fiziksel olarak yüklü olandan daha büyük miktarda belleğe erişime sahip oldukları yanılsamasını yaratır. Temelde, programların bilgisayarın fiziksel RAM sınırlarının ötesindeki bellek alanını kullanmasını sağlar.

Sanal belleğin temel amacı, sistemin yanıt verebilirliğini korurken verimli çoklu görev gerçekleştirmeyi ve daha büyük programların yürütülmesini sağlamaktır. Bunu, fiziksel RAM ile sabit sürücü veya SSD gibi ikincil depolama aygıtları arasında kusursuz bir etkileşim oluşturarak başarır.

**Sanal Bellek Kullanılabilir Fiziksel Belleği Nasıl Genişletir:**

Sanal belleği, bilgisayarınızın RAM'i ile ikincil depolama alanını (disk sürücüleri) birbirine bağlayan bir köprü olarak düşünün. Bir programı çalıştırdığınızda, programın bir kısmı daha hızlı olan fiziksel belleğe (RAM) yüklenir. Ancak programın tüm bölümleri hemen kullanılamayabilir.

Sanal bellek, programın aktif olarak kullanılmayan bölümlerini RAM'den ikincil depolama birimine taşıyarak bu durumdan yararlanır ve aktif olarak kullanılan parçalar için RAM'de daha fazla yer açar. Bu süreç kullanıcı ve çalışan programlar için şeffaftır. Taşınan parçalara tekrar ihtiyaç duyulduğunda, bunlar tekrar RAM'e aktarılırken, daha az aktif olan diğer parçalar da ikincil depolama birimine taşınabilir.

Verilerin fiziksel belleğe giren ve çıkan bu dinamik değişimi, işletim sistemi tarafından yönetilir. İşletim sistemi, optimum performans için RAM'de hangi verilerin olması gerektiğine akıllıca karar verdiğinden, programların mevcut RAM'den daha büyük olsalar bile çalışmasına olanak tanır.

Özetle, sanal bellek, programların ve verilerin bazı kısımlarını RAM ile ikincil depolama arasında geçici olarak aktararak mevcut fiziksel belleği genişleten bir sanallaştırma katmanı görevi görür. Bu süreç, bilgisayarın daha büyük görevleri ve çok sayıda programı aynı anda gerçekleştirebilmesini sağlarken, aynı zamanda verimli performansı ve yanıt verme hızını korur.

## [Dosyalama Sistemleri](File%20System/readme.md)
Bilgi işlemde, bir dosya sistemi veya dosya sistemi (genellikle fs olarak kısaltılır), işletim sisteminin verilerin nasıl saklandığını ve alındığını kontrol etmek için kullandığı bir yöntem ve veri yapısıdır. Bir dosya sistemi olmadan, bir depolama ortamına yerleştirilen veriler, bir veri parçasının nerede durup bir sonrakinin nerede başladığını veya herhangi bir veri parçasının onu alma zamanı geldiğinde nerede bulunduğunu söylemenin hiçbir yolu olmayan büyük bir veri gövdesi olacaktır. Verileri parçalara ayırıp her parçaya bir ad vererek veriler kolayca ayrıştırılır ve tanımlanır. Adını kağıt üzerinde çalışan bir veri yönetim sisteminin adından alan her veri grubuna "dosya" adı verilmektedir. Veri gruplarını ve adlarını yönetmek için kullanılan yapı ve mantık kurallarına "dosya sistemi" denir.

Her biri benzersiz yapıya ve mantığa, hız, esneklik, güvenlik, boyut ve daha fazla özelliğe sahip birçok dosya sistemi türü vardır. Bazı dosya sistemleri belirli uygulamalar için kullanılmak üzere tasarlanmıştır. Örneğin ISO 9660 dosya sistemi özellikle optik diskler için tasarlanmıştır.

Dosya sistemleri, çeşitli ortamları kullanan birçok türde depolama cihazında kullanılabilir. 2019 itibarıyla sabit disk sürücüleri temel depolama aygıtları olmuştur ve öngörülebilir gelecekte de öyle kalacağı öngörülmektedir. Kullanılan diğer ortam türleri arasında SSD'ler, manyetik bantlar ve optik diskler bulunur. Tmpfs gibi bazı durumlarda, bilgisayarın ana belleği (rasgele erişim belleği, RAM) kısa süreli kullanım için geçici bir dosya sistemi oluşturur.

Bazı dosya sistemleri yerel veri depolama cihazlarında kullanılır; diğerleri dosya erişimini bir ağ protokolü (örneğin, NFS, SMB veya 9P istemcileri) aracılığıyla sağlar. Bazı dosya sistemleri "sanaldır", yani sağlanan "dosyalar" (sanal dosyalar olarak adlandırılır) istek üzerine hesaplanır (procfs ve sysfs gibi) veya yalnızca yedekleme deposu olarak kullanılan farklı bir dosya sistemiyle eşlemedir. Dosya sistemi, hem dosyaların içeriğine hem de bu dosyalar hakkındaki meta verilere erişimi yönetir. Depolama alanının düzenlenmesinden sorumludur; güvenilirlik, verimlilik ve fiziksel depolama ortamına göre ayarlama önemli tasarım hususlarıdır.

### Dosya sistemleri nasıl çalışır?
Bir dosya sistemi verileri saklar ve düzenler ve bir depolama aygıtında bulunan tüm veriler için bir tür dizin olarak düşünülebilir. Bu cihazlar sabit sürücüleri, optik sürücüleri ve flash sürücüleri içerebilir.

Dosya sistemleri, bir addaki maksimum karakter sayısı, hangi karakterlerin kullanılabileceği ve bazı sistemlerde dosya adı son ekinin ne kadar uzun olabileceği gibi dosyaları adlandırma kurallarını belirler. Birçok dosya sisteminde dosya adları büyük/küçük harfe duyarlı değildir.

Dosya sistemleri, dosyanın kendisiyle birlikte, dosyanın boyutu ve öznitelikleri, konumu ve meta verilerdeki dizindeki hiyerarşi gibi bilgileri de içerir. Meta veriler ayrıca sürücüdeki boş depolama bloklarını ve ne kadar alan bulunduğunu da belirleyebilir.

Bir dosya sistemi aynı zamanda dizinlerin yapısı aracılığıyla bir dosyanın yolunu belirleyen bir format da içerir. Bir dosya, ağaç yapısında istenen yere bir dizine (veya Windows işletim sistemindeki bir klasöre) veya alt dizine yerleştirilir. PC ve mobil işletim sistemleri, dosyaların hiyerarşik bir ağaç yapısına yerleştirildiği dosya sistemlerine sahiptir.

Depolama ortamında dosya ve dizinler oluşturulmadan önce bölümler yerleştirilmelidir. Bölüm, sabit diskin veya işletim sisteminin ayrı olarak yönettiği başka bir depolama alanıdır. Birincil bölümde tek bir dosya sistemi bulunur ve bazı işletim sistemleri bir diskte birden fazla bölüme izin verir. Bu durumda, bir dosya sistemi bozulursa farklı bir bölümdeki veriler güvende olacaktır.

### Dosya sistemi türleri
Hepsi farklı mantıksal yapılara ve hız ve boyut gibi özelliklere sahip çeşitli dosya sistemi türleri vardır. Dosya sisteminin türü işletim sistemine ve o işletim sisteminin ihtiyaçlarına göre farklılık gösterebilir. Microsoft Windows, Mac OS X ve Linux en yaygın üç PC işletim sistemidir. Mobil işletim sistemleri Apple iOS ve Google Android'i içerir.

Başlıca dosya sistemleri aşağıdakileri içerir:

- Dosya ayırma tablosu (FAT), Microsoft Windows işletim sistemi tarafından desteklenir. FAT, basit ve güvenilir kabul edilir ve eski dosya sistemlerinden sonra modellenir. FAT, 1977 yılında disketler için tasarlandı ancak daha sonra sabit disklere uyarlandı. FAT, mevcut işletim sistemlerinin çoğuyla verimli ve uyumlu olmasına rağmen, daha modern dosya sistemlerinin performansı ve ölçeklenebilirliğiyle eşleşemez.

- Global dosya sistemi (GFS), Linux işletim sistemi için bir dosya sistemidir ve paylaşılan bir disk dosya sistemidir. GFS, paylaşılan blok depolamaya doğrudan erişim sunar ve yerel dosya sistemi olarak kullanılabilir.

- GFS2, güncellenmiş meta veri sistemi gibi orijinal GFS'de bulunmayan özelliklere sahip güncellenmiş bir sürümdür. GNU Genel Kamu Lisansı koşulları kapsamında hem GFS hem de GFS2 dosya sistemleri ücretsiz yazılım olarak mevcuttur.

- Hiyerarşik dosya sistemi (HFS), Mac işletim sistemleriyle kullanılmak üzere geliştirilmiştir. HFS, Mac OS Extended'ın ardından Mac OS Standard olarak da adlandırılabilir. İlk olarak 1985 yılında disket ve sabit diskler için tanıtılan HFS, orijinal Macintosh dosya sisteminin yerini aldı. CD-ROM'larda da kullanılabilir.

- Yeni Teknoloji Dosya Sistemi (NTFS) olarak da bilinen NT dosya sistemi, Windows NT 3.1 işletim sistemi ve sonrasındaki Windows ürünleri için varsayılan dosya sistemidir. Önceki FAT dosya sistemindeki iyileştirmeler arasında daha iyi meta veri desteği, performans ve disk alanı kullanımı yer almaktadır. NTFS, Linux işletim sisteminde de ücretsiz, açık kaynaklı bir NTFS sürücüsü aracılığıyla desteklenir. Mac OS'ler NTFS için salt okunur desteğe sahiptir.

- Evrensel Disk Formatı (UDF), optik medya ve DVD'ler için satıcıdan bağımsız bir dosya sistemidir. UDF, ISO 9660 dosya sisteminin yerini alır ve DVD Forumu tarafından seçilen DVD video ve ses için resmi dosya sistemidir.

## [Bulut bilişim](Cloud%20Computing/Readme.md)
Bulut bilişim, internet üzerinden bilgi ve uygulamalara erişme yeteneğidir. Bulut bilişim, kullanıcıların internet bağlantısı olan her yerden uygulamalara ve verilere erişmesine olanak tanır.

Bulut bilişim, talep üzerine bilgisayarlara ve diğer cihazlara paylaşılan bilgisayar işleme kaynakları ve verileri sağlayan bir tür İnternet tabanlı bilgi işlemdir.

Minimum yönetim çabası veya hizmeti ile hızlı bir şekilde tedarik edilebilen ve piyasaya sürülebilen, yapılandırılabilir bilgi işlem kaynaklarının (örneğin ağlar, sunucular, depolama, uygulamalar ve hizmetler) ortak bir havuzuna her yerde, kullanışlı, isteğe bağlı ağ erişimini sağlayan bir modeldir. sağlayıcı etkileşimi.
 
  ### Bulut bilişimin en önemli faydaları
 
Bulut bilişim, işletmelerin BT kaynakları hakkındaki düşüncelerinden büyük bir değişimdir. Kuruluşların bulut bilişim hizmetlerine yönelmesinin yedi yaygın nedeni şunlardır:


Maliyet
Bulut bilişim, donanım ve yazılım satın alma ve yerinde veri merkezleri kurma ve çalıştırma (sunucu rafları, güç ve soğutma için 24 saat elektrik ve altyapıyı yönetmek için BT uzmanları) gibi sermaye masraflarını ortadan kaldırır. Hızlı bir şekilde eklenir.


Hız
Çoğu bulut bilişim hizmeti self-servis olarak ve isteğe bağlı olarak sağlanır, dolayısıyla çok büyük miktardaki bilgi işlem kaynakları bile dakikalar içinde, genellikle sadece birkaç fare tıklamasıyla tedarik edilebilir, bu da işletmelere çok fazla esneklik kazandırır ve kapasite planlama baskısını ortadan kaldırır.


Küresel ölçek
Bulut bilişim hizmetlerinin faydaları arasında esnek ölçeklendirme yeteneği de yer alır. Bulut dilinde bu, doğru miktarda BT kaynağının (örneğin daha fazla veya daha az bilgi işlem gücü, depolama ve bant genişliği) tam ihtiyaç duyulduğu anda ve doğru coğrafi konumdan sağlanması anlamına gelir.


Verimlilik
Tesis içi veri merkezleri genellikle donanım kurulumu, yazılım düzeltme eki uygulama ve diğer zaman alan BT yönetimi işleri gibi çok sayıda "raflama ve istifleme" işlemi gerektirir. Bulut bilişim bu görevlerin çoğuna olan ihtiyacı ortadan kaldırır, böylece BT ekipleri daha önemli iş hedeflerine ulaşmak için zaman harcayabilir.


Verim
En büyük bulut bilişim hizmetleri, düzenli olarak en yeni nesil hızlı ve verimli bilgi işlem donanımına yükseltilen, dünya çapındaki güvenli veri merkezlerinden oluşan bir ağ üzerinde çalışır. Bu, uygulamalar için azaltılmış ağ gecikmesi ve daha fazla ölçek ekonomisi dahil olmak üzere, tek bir kurumsal veri merkezine göre çeşitli avantajlar sunar.


Güvenilirlik
Bulut bilişim, veri yedeklemeyi, felaketten kurtarmayı ve iş sürekliliğini daha kolay ve daha ucuz hale getirir çünkü veriler, bulut sağlayıcının ağındaki birden fazla yedekli siteye yansıtılabilir.


Güvenlik
Birçok bulut sağlayıcısı, genel güvenlik duruşunuzu güçlendiren ve verilerinizi, uygulamalarınızı ve altyapınızı potansiyel tehditlerden korumaya yardımcı olan çok çeşitli politikalar, teknolojiler ve kontroller sunar.

### Bulut Bilişim Hizmetleri Türleri
- [Infrastructure as a Service (IaaS)](Cloud%20Computing/Readme.md#infrastructure-as-a-service-iaas)
- [Platform as a Service (PaaS)](Cloud%20Computing/Readme.md#platform-as-a-service-paas)
- [Software as a Service (SaaS)](Cloud%20Computing/Readme.md#software-as-a-service-saas)


## [Makine öğrenmesi]()
Makine öğrenimi, bir bilgisayara öğrenmeyi öğretme uygulamasıdır. Konsept, gelen veriler hakkında karar vermek için örüntü tanımanın yanı sıra diğer tahmine dayalı algoritma biçimlerini de kullanıyor. Bu alan yapay zeka ve hesaplamalı istatistikle yakından ilgilidir.

### Makine öğreniminin üç alt kategorisi vardır:

### Denetimli makine öğrenimi
Bunda makine öğrenimi modelleri, modellerin zaman içinde daha doğru bir şekilde öğrenmesine ve büyümesine olanak tanıyan etiketli veri kümeleriyle eğitilir. Örneğin, bir algoritma, tümü insanlar tarafından etiketlenen köpeklerin ve diğer şeylerin resimleriyle eğitilecek ve makine, köpek resimlerini kendi başına tanımlamanın yollarını öğrenecek. Denetimli makine öğrenimi günümüzde en yaygın kullanılan türdür.

Denetimli Öğrenmenin pratik uygulamaları –
1. **Biyoinformatik:** Biyoinformatik, bireylerin parmak izi, göz dokusu, kulak memesi vb. gibi biyolojik bilgileri nasıl muhafaza ettiğini inceleyen çalışmadır. Cep telefonları artık biyolojik verilerimizi anlayıp bizi doğrulayarak sistem güvenliğini artıracak kadar akıllı.
2. **Konuşma tanıma:** Sesinizi programa aktarabileceğiniz program türüdür ve sizi tanıyacaktır. En iyi bilinen gerçek dünya gadget'ları, Google Asistan veya Siri gibi, terime yalnızca sesinizle yanıt veren dijital asistanlardır.
3. **Spam tespiti:** Bu araç, sahte veya makine tabanlı iletişimlerin gönderilmesini önlemek için kullanılır. Gmail, çok sayıda yanlış terimi öğrenen bir algoritma içerir. Oneplus Mesajlar Uygulaması kullanıcıdan hangi terimlerin yasaklanması gerektiğini belirtmesini ister ve anahtar kelime bu tür metinlerin uygulamadan gönderilmesini engeller.
4. **Görüntü için nesne tanıma:** Bu tür yazılımlar herhangi bir şeyi tanımlamanız gerektiğinde kullanılır. Algoritmayı eğitmek için kullandığınız büyük bir veri kümeniz var ve algoritma bunu kullanarak yeni bir nesneyi tanıyabilir.

### Denetimsiz makine öğrenimi
Denetimsiz makine öğreniminde bir program, etiketlenmemiş verilerdeki kalıpları arar. Denetimsiz makine öğrenimi, insanların açıkça aramadığı kalıpları veya eğilimleri bulabilir. Örneğin, denetimsiz bir makine öğrenimi programı, çevrimiçi satış verilerini inceleyebilir ve satın alma yapan farklı müşteri türlerini belirleyebilir.

Denetimsiz Öğrenmenin pratik uygulamaları
1. **Kümeleme:** Kümeleme, verileri ayrı gruplara ayırma işlemidir. Kümeler hakkındaki tüm ayrıntıları bilmediğimizde, onları kümelemek için denetimsiz öğrenmeyi kullanabiliriz. Denetimsiz öğrenme, önceden etiketlenmiş sınıflara veya sınıf özelliklerine sahip olmayan verileri analiz etmek ve düzenlemek için kullanılır. Kümeleme, firmaların verilerini daha etkili bir şekilde yönetmelerine yardımcı olabilir.
Diyelim ki bir YouTube kanalınız var. Aboneleriniz hakkında birçok bilgiye sahip olabilirsiniz. Benzer aboneleri bulmak istiyorsanız kümeleme tekniği kullanmanız gerekir.
2. **Görselleştirme:** Bilgiyi sunmak için diyagramlar, fotoğraflar, grafikler, çizelgeler vb. oluşturma süreci görselleştirme olarak bilinir. Bu stratejiyi uygulamak için denetimsiz makine öğrenimi kullanılabilir.
Takımınızın bir turnuvadaki performansına ilişkin bilgilere sahip bir kriket antrenörü olduğunuzu varsayalım. Tüm maç istatistiklerini hızlı bir şekilde bulmak isteyebilirsiniz. Etiketlenmemiş ve karmaşık verileri bir görselleştirme algoritmasına aktarabilirsiniz.
3. **Anormallik tespiti:** Anormallik tespiti, normal verilerden büyük ölçüde saparak şüphe uyandıran olağandışı şeylerin, olayların veya gözlemlerin keşfedilmesidir. Bu durumda sistem çok sayıda tipik durumla programlanmıştır. Sonuç olarak beklenmedik bir olay tespit ettiğinde bunun anormal olup olmadığını tespit edebiliyor.
Kredi kartı dolandırıcılığının tespiti bunun iyi bir örneğidir. Bu sorun artık denetimsiz makine öğrenimi anormallik tespit yaklaşımları kullanılarak çözülüyor. Dolandırıcılığı önlemek için sistem beklenmedik kredi kartı işlemlerini tespit eder.

### Yarı denetimli makine öğrenimi
Denetimli öğrenmenin dezavantajı, makine öğrenimi uzmanları veya veri bilimcileri tarafından elle etiketleme gerektirmesi ve işlenmesinin yüksek maliyet gerektirmesidir. Denetimsiz öğrenmenin uygulamaları da sınırlı bir yelpazeye sahiptir. Denetimli öğrenme ve denetimsiz öğrenme algoritmalarının bu dezavantajlarının üstesinden gelmek için Yarı denetimli öğrenme kavramı tanıtıldı. Tipik olarak bu kombinasyon çok az miktarda etiketli veri ve büyük miktarda etiketsiz veri içerir. İlgili temel prosedür, ilk önce programcının denetimsiz bir öğrenme algoritması kullanarak benzer verileri kümelemesi ve ardından etiketlenmemiş verilerin geri kalanını etiketlemek için mevcut etiketli verileri kullanmasıdır.

Yarı Denetimli Öğrenmenin pratik uygulamaları –
1. **Konuşma Analizi:** Ses dosyalarını etiketlemek çok yoğun bir görev olduğundan, Yarı Denetimli öğrenme bu sorunu çözmek için çok doğal bir yaklaşımdır.
2. **İnternet İçeriği:** Sınıflandırma: Her web sayfasını etiketlemek pratik ve mümkün olmayan bir işlemdir ve bu nedenle Yarı Denetimli öğrenme algoritmaları kullanılır. Google arama algoritması bile bir web sayfasının belirli bir sorguyla alaka düzeyini sıralamak için Yarı Denetimli öğrenmenin bir çeşidini kullanır.
3. **Protein Dizisi Sınıflandırması:** DNA iplikçikleri genellikle çok büyük olduğundan, bu alanda Yarı Denetimli öğrenmenin yükselişi yakındır.

### Makine öğrenimini güçlendirme
Bu, bir ödül sistemi kurarak makineleri en iyi eylemi gerçekleştirmeleri için deneme yanılma yoluyla eğitir. Takviyeli öğrenme, makineye doğru kararları verdiğini söyleyerek modelleri oyun oynayacak veya otonom araçları kullanacak şekilde eğitebilir; bu da zamanla hangi eylemleri yapması gerektiğini öğrenmesine yardımcı olur.

Takviyeli Öğrenmenin pratik uygulamaları -
1. **Üretim Sistemleri**
    Örneğin. Google Cloud AutoML, Facebook Horizon, Öneri, reklam, arama
2. **Otonom Sürüş**
3. **İşletme Yönetimi**
    Örneğin. araç rotalama probleminin çözümü, e-ticarette hileli davranışlar, müşteri etkileşimlerinden eş zamanlı pekiştirmeli öğrenme
4. **Öneri sistemleri**
    Örneğin. arama, öneri ve çevrimiçi reklamcılık için
   
### Makine öğrenimi aynı zamanda diğer birçok yapay zeka alt alanıyla da ilişkilidir:

### Doğal dil işleme

Doğal dil işleme, normalde bilgisayarları programlamak için kullanılan veriler ve sayılar yerine makinelerin, insanlar tarafından konuşulan ve yazılan doğal dili anlamayı öğrendiği bir makine öğrenimi alanıdır. Bu, makinelerin dili tanımasına, anlamasına ve yanıt vermesine, ayrıca yeni metin oluşturmasına ve diller arasında çeviri yapmasına olanak tanır. Doğal dil işleme, sohbet robotları gibi tanıdık teknolojileri ve Siri veya Alexa gibi dijital asistanları mümkün kılar.

NLP'nin pratik uygulamaları:
1. **Soru Yanıtlama:** Soru Yanıtlama, insanlar tarafından sorulan soruları doğal dilde otomatik olarak yanıtlayan sistemler oluşturmaya odaklanır.
2. **Spam Algılama:** Spam algılama, kullanıcının gelen kutusuna gelen istenmeyen e-postaları tespit etmek için kullanılır.
3. **Duygu Analizi:** Duygu Analizi aynı zamanda fikir madenciliği olarak da bilinir. Web'de gönderenin tutumunu, davranışını ve duygusal durumunu analiz etmek için kullanılır. Bu uygulama NLP (Doğal Dil İşleme) ve istatistiklerin birleşimiyle metne değerler (olumlu, olumsuz veya doğal) atanarak ve bağlamın ruh hali (mutlu, üzgün, kızgın vb.) belirlenerek gerçekleştirilir.
4. **Makine Çevirisi:** Makine çevirisi, metni veya konuşmayı bir doğal dilden başka bir doğal dile çevirmek için kullanılır. Örneğin. Google Çeviri
5. **Yazım düzeltmesi:** Microsoft Corporation, yazım düzeltmesi için MS-word ve PowerPoint gibi kelime işlemci yazılımları sağlar.

### Nöral ağlar

Sinir ağları, yaygın olarak kullanılan, özel bir makine öğrenme algoritmaları sınıfıdır. Yapay sinir ağları, binlerce veya milyonlarca işlem düğümünün birbirine bağlandığı ve katmanlar halinde organize edildiği insan beyni örnek alınarak modellenmiştir.

Yapay bir sinir ağında hücreler veya düğümler birbirine bağlanır; her hücre girdileri işler ve diğer nöronlara gönderilen bir çıktı üretir. Etiketli veriler, her hücrenin farklı bir işlevi yerine getirmesiyle düğümler veya hücreler arasında hareket eder. Bir resmin kedi içerip içermediğini belirlemek üzere eğitilmiş bir sinir ağında, farklı düğümler bilgiyi değerlendirecek ve resmin kedi içerip içermediğini gösteren bir çıktıya ulaşacaktır.

Sinir Ağlarının pratik uygulamaları:
1. **Hisse Senedi Piyasası Tahmini:** Gerçek zamanlı olarak başarılı bir hisse senedi tahmini yapmak için Çok Katmanlı Perceptron MLP (ileri beslemeli yapay zeka algoritması sınıfı) kullanılır. MLP birden fazla düğüm katmanından oluşur ve bu katmanların her biri sonraki düğümlere tamamen bağlıdır. MLP modelinin oluşturulmasında hisse senedinin geçmiş performansları, yıllık getirileri ve kar amacı gütmeyen kuruluş oranları dikkate alınır.
2. **Sosyal Medya:** Çok katmanlı Algılayıcılar, sosyal medya eğilimlerini tahmin eder. Ortalama Mutlak Hata (MAE), Ortalama Karekök Hata (RMSE) ve Ortalama Karesel Hata (MSE) gibi farklı eğitim yöntemlerini kullanır. MLP, kullanıcının en sevdiği Instagram sayfaları, favorilere eklenen seçimler vb. gibi çeşitli faktörleri dikkate alır. Bireylerin sosyal medya ağları aracılığıyla davranışlarının analizi sonrası veriler, insanların harcama alışkanlıklarıyla ilişkilendirilebilir. MLP ANN, sosyal medya uygulamalarından veri çıkarmak için kullanılır.
3. **Havacılık:** Havacılık ve Uzay Mühendisliği, uzay aracı ve uçaklardaki gelişmeleri kapsayan geniş bir terimdir. Arıza teşhisi, yüksek performanslı otomatik pilotlama, uçak kontrol sistemlerinin güvenliğinin sağlanması ve temel dinamik simülasyonların modellenmesi, sinir ağlarının devraldığı temel alanlardan bazılarıdır. Zaman gecikmesi Sinir ağları, doğrusal olmayan zaman dinamik sistemlerinin modellenmesi için kullanılabilir.

### Derin öğrenme

Derin öğrenme ağları çok katmanlı sinir ağlarıdır. Katmanlı ağ, çok miktarda veriyi işleyebilir ve ağdaki her bağlantının "ağırlığını" belirleyebilir; örneğin, bir görüntü tanıma sisteminde, sinir ağının bazı katmanları, gözler, burun gibi bir yüzün bireysel özelliklerini algılayabilir. veya ağız, diğer bir katman ise bu özelliklerin bir yüzü işaret edecek şekilde görünüp görünmediğini söyleyebilecek.

Derin Öğrenmenin pratik uygulamaları:
1. **Otomatik Metin Oluşturma –** Metin bütünü öğrenilir ve bu modelden, kelime kelime veya karakter karakter yeni metin oluşturulur. Daha sonra bu model nasıl heceleneceğini, noktalama işaretlerini ve cümle oluşturulacağını öğrenebilir, hatta stili bile yakalayabilir.
2. **Sağlık Hizmeti –** Çeşitli hastalıkların teşhis edilmesine ve tedavi edilmesine yardımcı olur.
3. **Otomatik Makine Çevirisi –** Bir dildeki belirli kelimeler, cümleler veya ifadeler başka bir dile dönüştürülür (Derin Öğrenme, metin ve görsel alanlarında en iyi sonuçları elde etmektir).
4. **Görüntü Tanıma –** Görüntülerdeki kişileri ve nesneleri tanır ve tanımlar, ayrıca içerik ve bağlamı anlar. Bu alan halihazırda Oyun, Perakende, Turizm vb. alanlarda kullanılmaktadır.
5. **Depremleri Tahmin Etme –** Bir bilgisayara, depremleri tahmin etmede kullanılan viskoelastik hesaplamaları yapmayı öğretir.

## [Ağ Teknolojisi](Web%20Technology/WebTechnology.md#web-tecnology)
Web Teknolojisi, İnternet üzerinden farklı türdeki cihazlar arasındaki iletişim sürecinde kullanılan çeşitli araç ve teknikleri ifade eder. Web sayfalarına erişmek için bir web tarayıcısı kullanılır. Web tarayıcıları, internette metin, veri, resim, animasyon ve video görüntüleyen programlar olarak tanımlanabilir. World Wide Web'deki köprü bağlantılı kaynaklara, Web tarayıcıları tarafından sağlanan yazılım arayüzleri kullanılarak erişilebilir.### Web Technology can be classified into the following sections:
- Dünya Çapında Ağ (WWW)
World Wide Web birkaç farklı teknolojiye dayanmaktadır: Web tarayıcıları, Köprü Metni İşaretleme Dili (HTML) ve Köprü Metni Aktarım Protokolü (HTTP).
- İnternet tarayıcısı
Web tarayıcısı www'yi (World Wide Web) keşfetmek için bir uygulama yazılımıdır. Sunucu ile istemci arasında bir arayüz sağlar ve sunucudan web belgeleri ve hizmetleri için istekte bulunur.
- Web sunucusu
Web sunucusu, kullanıcıların ağ isteklerini işleyen ve onlara web sayfaları oluşturan dosyalarla hizmet veren bir programdır. Bu değişim Köprü Metni Aktarım Protokolü (HTTP) kullanılarak gerçekleşir.
- İnternet sayfaları
Bir web sayfası, World Wide Web'e bağlanan ve bir web tarayıcısı olan, İnternet'e bağlı olan herkes tarafından görüntülenebilen dijital bir belgedir.
- Web Geliştirme
Web geliştirme, web sitelerinin oluşturulması, oluşturulması ve bakımı anlamına gelir. Web tasarımı, web yayınlama, web programlama ve veritabanı yönetimi gibi yönleri içerir. İnternet üzerinden yani web siteleri üzerinden çalışan bir uygulamanın oluşturulmasıdır.

### Web Geliştirme iki şekilde sınıflandırılabilir:

### Ön Uç Geliştirme
Bir web sitesinin kullanıcının doğrudan etkileşime girdiği kısmına ön uç denir. Aynı zamanda uygulamanın 'istemci tarafı' olarak da adlandırılır.

### Arka Uç Geliştirme
Arka uç, bir web sitesinin sunucu tarafıdır. Web sitesinin kullanıcıların göremediği ve etkileşimde bulunamadığı bir parçasıdır. Yazılımın kullanıcılarla doğrudan temas etmeyen kısmıdır. Verileri depolamak ve düzenlemek için kullanılır.


## [Ağ oluşturma](Networking/readme.md#networking)
Bilgisayar ağı, ağ düğümlerinde bulunan veya ağ düğümleri tarafından sağlanan kaynakları paylaşan bir dizi bilgisayardır. Bilgisayarlar birbirleriyle iletişim kurmak için dijital ara bağlantılar üzerinden ortak iletişim protokollerini kullanır. Bu ara bağlantılar, çeşitli ağ topolojilerinde düzenlenebilen fiziksel olarak kablolu, optik ve kablosuz radyo frekansı yöntemlerine dayalı telekomünikasyon ağı teknolojilerinden oluşur.

Bir bilgisayar ağının düğümleri, kişisel bilgisayarları, sunucuları, ağ donanımını veya diğer özel veya genel amaçlı ana bilgisayarları içerebilir. Ağ adresleriyle tanımlanırlar ve ana bilgisayar adlarına sahip olabilirler. Ana bilgisayar adları, düğümler için akılda kalıcı etiketler görevi görür ve ilk atamadan sonra nadiren değiştirilir. Ağ adresleri, İnternet Protokolü gibi iletişim protokolleri aracılığıyla düğümlerin bulunmasına ve tanımlanmasına hizmet eder.

Bilgisayar ağları, sinyalleri taşımak için kullanılan iletim ortamı, bant genişliği, ağ trafiğini düzenlemek için kullanılan iletişim protokolleri, ağ boyutu, topoloji, trafik kontrol mekanizması ve organizasyonel amaç dahil olmak üzere birçok kritere göre sınıflandırılabilir.

### Ağ türleri
İki temel bilgisayar ağı türü vardır:
- Kablolu ağ: Kablolu ağ, düğümler arasında aktarım için fiziksel bir ortamın kullanılmasını gerektirir. Düşük maliyeti ve dayanıklılığı nedeniyle popüler olan bakır tabanlı Ethernet kabloları, işyerlerinde ve evlerde dijital iletişim için yaygın olarak kullanılmaktadır. Alternatif olarak, verileri daha uzak mesafelere ve daha yüksek hızlarda taşımak için optik fiber kullanılır, ancak bunun daha yüksek maliyetler ve daha kırılgan bileşenler dahil olmak üzere çeşitli dezavantajları vardır.
- Kablosuz ağ: Kablosuz ağ, verileri havadan taşımak için radyo dalgalarını kullanır ve cihazların herhangi bir kablo olmadan bir ağa bağlanmasını sağlar. Kablosuz LAN'lar, kablosuz ağ oluşturmanın en iyi bilinen ve yaygın olarak kullanılan şeklidir. Alternatifler arasında mikrodalga, uydu, hücresel ve Bluetooth yer alır.
## OSI Katmanları
OSI **Açık Sistemler Ara Bağlantısı** anlamına gelir. 1984 yılında ISO – '**Uluslararası Standardizasyon Örgütü**' tarafından geliştirilmiştir. Her katmanın gerçekleştirmek için özel işlevlere sahip olduğu 7 katmanlı bir mimaridir. Bu yedi katmanın tümü, verileri dünya çapında bir kişiden diğerine aktarmak için işbirliği içinde çalışır.

#### **1\. Fiziksel Katman (Katman 1):**

OSI referans modelinin en alt katmanı fiziksel katmandır. Cihazlar arasındaki gerçek fiziksel bağlantıdan sorumludur. Fiziksel katman, **bitler** biçiminde bilgi içerir. Bireysel bitlerin bir düğümden diğerine iletilmesinden sorumludur. Veri alırken, bu katman alınan sinyali alacak ve onu 0'lara ve 1'lere dönüştürecek ve bunları çerçeveyi tekrar bir araya getirecek olan Veri Bağlantısı katmanına gönderecektir.

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-bits.png)

Fiziksel katmanın görevleri aşağıdaki gibidir:

1. **Bit senkronizasyonu:** Fiziksel katman, bir saat sağlayarak bitlerin senkronizasyonunu sağlar. Bu saat hem göndericiyi hem de alıcıyı kontrol ederek bit düzeyinde senkronizasyon sağlar.
2. **Bit hızı kontrolü:** Fiziksel katman ayrıca iletim hızını, yani saniyede gönderilen bit sayısını da tanımlar.
3. **Fiziksel topolojiler:** Fiziksel katman, farklı cihazların/düğümlerin bir ağda (veri yolu, yıldız veya ağ topolojisi) nasıl düzenleneceğini belirtir.
4. **İletim modu:** Fiziksel katman ayrıca verilerin bağlı iki cihaz arasında nasıl aktığını da tanımlar. Mümkün olan çeşitli iletim modları Simplex, yarı çift yönlü ve tam çift yönlüdür.

#### **2\. Veri Bağlantı Katmanı (DLL) (Katman 2):**

Veri bağlantısı katmanı, mesajın düğümden düğüme iletilmesinden sorumludur. Bu katmanın ana işlevi, fiziksel katman üzerinden bir düğümden diğerine veri aktarımının hatasız olmasını sağlamaktır. Bir paket ağa ulaştığında, onu MAC adresini kullanarak ana bilgisayara iletmek DLL'nin sorumluluğundadır.
Veri Bağlantı Katmanı iki alt katmana bölünmüştür:

1. Mantıksal Bağlantı Kontrolü (LLC)
2. Medya Erişim Kontrolü (MAC)

Ağ katmanından alınan paket, NIC'in (Ağ Arayüz Kartı) çerçeve boyutuna bağlı olarak ayrıca çerçevelere bölünür. DLL ayrıca gönderenin ve alıcının MAC adresini başlıkta kapsüller.

Alıcının MAC adresi, kabloya "Bu IP adresi kimin elinde?" diye soran bir ARP (Adres Çözümleme Protokolü) isteği yerleştirilerek elde edilir. ve hedef ana bilgisayar MAC adresiyle yanıt verecektir.

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-framing.png)

Veri Bağlantısı katmanının işlevleri şunlardır:

1. **Çerçeveleme:** Çerçeveleme, veri bağlantı katmanının bir işlevidir. Göndericinin, alıcı için anlamlı olan bir dizi biti iletmesi için bir yol sağlar. Bu, çerçevenin başına ve sonuna özel bit desenleri eklenerek gerçekleştirilebilir.
2. **Fiziksel Adresleme:** Çerçeveler oluşturulduktan sonra Veri bağlantısı katmanı, her çerçevenin başlığına gönderenin ve/veya alıcının fiziksel adreslerini (MAC adresleri) ekler.
3. **Hata kontrolü:** Veri bağlantısı katmanı, hasarlı veya kayıp çerçeveleri algılayıp yeniden ilettiği hata kontrolü mekanizmasını sağlar.
4. **Akış Kontrolü:** Veri hızı her iki tarafta da sabit olmalıdır, aksi takdirde veriler bozulabilir; dolayısıyla akış kontrolü, bir onay alınmadan önce gönderilebilecek veri miktarını koordine eder.
5. **Erişim kontrolü:** Tek bir iletişim kanalı birden fazla cihaz tarafından paylaşıldığında, veri bağlantısı katmanının MAC alt katmanı, belirli bir zamanda hangi cihazın kanal üzerinde kontrole sahip olduğunu belirlemeye yardımcı olur.

#### **3\. Ağ Katmanı (Katman 3):**

Ağ katmanı, verilerin bir ana bilgisayardan farklı ağlarda bulunan diğerine iletilmesi için çalışır. Aynı zamanda paket yönlendirmeyle de ilgilenir, yani paketin iletilmesi için mevcut yolların sayısı arasından en kısa yolun seçilmesi. Gönderenin ve alıcının IP adresleri, ağ katmanı tarafından başlığa yerleştirilir.

Ağ katmanının işlevleri şunlardır:

1. **Yönlendirme:** Ağ katmanı protokolleri, kaynaktan hedefe hangi rotanın uygun olduğunu belirler. Ağ katmanının bu işlevi yönlendirme olarak bilinir.
2. **Mantıksal Adresleme:** Ağlar arası ağdaki her cihazı benzersiz şekilde tanımlamak için ağ katmanı bir adresleme şeması tanımlar. Gönderenin ve alıcının IP adresleri, ağ katmanı tarafından başlığa yerleştirilir. Böyle bir adres, her cihazı benzersiz ve evrensel olarak ayırt eder.


## [Internet](Internet/readme.md#internet)
İnternet, dünya çapında milyarlarca kullanıcıya hizmet vermek için standart İnternet protokol paketini ([TCP/IP](Networking/readme.md#tcptransmission-control-protocol)) kullanan, birbirine bağlı bilgisayar ağlarından oluşan küresel bir sistemdir. Çok çeşitli elektronik, kablosuz ve optik ağ teknolojileri ile birbirine bağlanan, yerelden küresel kapsama kadar milyonlarca özel, kamu, akademik, ticari ve hükümet ağından oluşan bir ağ ağıdır. İnternet, birbirine bağlı hiper metin belgeleri ve World Wide Web uygulamaları ([WWW](Internet/readme.md#world-wide-web-www)) ve bunları destekleyecek altyapı gibi çok çeşitli bilgi kaynakları ve hizmetleri taşır. e-posta.

### [Dünya Çapında Ağ (WWW)](Internet/readme.md#world-wide-web-www)
World Wide Web (WWW), belgelerin ve diğer web kaynaklarının Tekdüzen Kaynak Konum Belirleyicileri (URL'ler) tarafından tanımlandığı, hiper metin bağlantılarıyla birbirine bağlandığı ve İnternet aracılığıyla erişilebildiği bir bilgi alanıdır. İngiliz bilim adamı Tim Berners-Lee, 1989 yılında World Wide Web'i icat etti. İlk web tarayıcısını 1990 yılında İsviçre'deki CERN'de çalışırken yazdı. Tarayıcı, 1991 yılında CERN dışında, ilk olarak Ocak 1991'den itibaren diğer araştırma kurumlarında ve Ağustos 1991'de internette genel kamuoyuna sunuldu.

### [Internet Protokolü (IP)](Internet/readme.md#internet-protocol-ip)
İnternet Protokolü (IP), veri paketlerinin ağlar arasında seyahat edebilmeleri ve doğru hedefe ulaşabilmeleri için yönlendirilmesine ve adreslenmesine yönelik bir protokol veya kurallar kümesidir. İnternetten geçen veriler, paket adı verilen daha küçük parçalara bölünür.

## [DBMS]()

Veritabanı Nedir?
-------------------

Veritabanı, gerçek dünyanın bazı yönlerini temsil eden ilgili verilerin bir koleksiyonudur. Bir veritabanı sistemi, belirli bir görev için oluşturulacak ve verilerle doldurulacak şekilde tasarlanmıştır.


DBMS nedir?
-------------

**Veritabanı Yönetim Sistemi (DBMS)**, uygun güvenlik önlemlerini dikkate alarak kullanıcıların verilerini depolamaya ve almaya yönelik bir yazılımdır. Veritabanını yöneten bir grup programdan oluşur. DBMS, bir uygulamadan gelen veri talebini kabul eder ve işletim sistemine belirli verileri sağlaması talimatını verir. Büyük sistemlerde DBMS, kullanıcıların ve diğer üçüncü taraf yazılımların verileri depolamasına ve almasına yardımcı olur.

DBMS, kullanıcıların gereksinimlerine göre veritabanlarını oluşturmalarına olanak tanır. "DBMS" terimi, bir veritabanının ve diğer uygulama programlarının kullanımını içerir. Veriler ve yazılım uygulaması arasında bir arayüz sağlar.

DBMS örneği
-----------------

Üniversite veri tabanının basit bir örneğini görelim. Bu veritabanı, üniversite ortamındaki öğrenciler, dersler ve notlarla ilgili bilgileri tutar. Veritabanı beş dosya halinde düzenlenmiştir:

* STUDENT dosyası her öğrencinin verilerini saklar
* COURSE dosya depoları her kursa ilişkin verileri içerir.
* BÖLÜM, belirli bir dersteki bölümler hakkındaki bilgileri saklar.
* GRADE dosyası öğrencilerin çeşitli bölümlerde aldıkları notları saklar
* TUTOR dosyası her profesöre ait bilgileri içerir.

DBMS'yi tanımlamak için:

* Her kayıtta saklanacak farklı veri elemanları türlerini tanımlayarak her dosyanın kayıtlarının yapısını belirtmemiz gerekir.
* Bir veri öğesinin değerlerini temsil etmek için bir kodlama şeması da kullanabiliriz.
* Temel olarak veritabanınızda, çeşitli tablolar arasında tanımlanan yabancı anahtara sahip beş tablo bulunacaktır.

DBMS'nin Tarihçesi
---------------

İşte tarihin önemli yerleri:

* 1960 – Charles Bachman ilk DBMS sistemini tasarladı
* 1970 – Codd, IBM'in Bilgi Yönetim Sistemini (IMS) tanıttı
* 1976- Peter Chen, ER modeli olarak da bilinen Varlık-ilişki modelini icat etti ve tanımladı.
* 1980 – İlişkisel Model geniş çapta kabul gören bir veritabanı bileşeni haline geldi
* 1985- Nesneye yönelik DBMS geliştirildi.
* 1990'lar- Nesne yöneliminin ilişkisel DBMS'ye dahil edilmesi.
* 1991- Microsoft, diğer tüm kişisel DBMS ürünlerinin yerini alan kişisel bir DBMS olan MS erişimini piyasaya sürdü.
* 1995: İlk internet veritabanı uygulamaları
* 1997: Veritabanı işlemeye XML uygulandı. Birçok satıcı XML'i DBMS ürünlerine entegre etmeye başlar.

DBMS'nin özellikleri
-----------------------

Veritabanı Yönetim Sisteminin özellikleri ve özellikleri şunlardır:

* Güvenlik sağlar ve fazlalığı ortadan kaldırır
* Bir veritabanı sisteminin doğasını kendi kendine tanımlama
* Programlar arası izolasyon ve veri soyutlama
* Verilerin birden fazla görünümünün desteklenmesi
* Veri paylaşımı ve çok kullanıcılı işlem işleme
* Veritabanı Yönetim Yazılımı, varlıkların ve aralarındaki ilişkilerin tablolar oluşturmasına olanak tanır.
* ASİT kavramını (Atomiklik, Tutarlılık, İzolasyon ve Dayanıklılık) takip eder.
* DBMS, kullanıcıların paralel olarak verilere erişmesine ve bunları işlemesine olanak tanıyan çok kullanıcılı bir ortamı destekler.

Popüler DBMS Yazılımı
---------------------

Bazı popüler DBMS sistemlerinin listesi:

*   MySQL
*   Microsoft Access
*   Oracle
*   PostgreSQL
*   dBASE
*   FoxPro
*   SQLite
*   IBM DB2
*   LibreOffice Base
*   MariaDB
*   Microsoft SQL Server etc.

## [Kriptografi](Cryptography/readme.md#cryptography)
Kriptografi, verileri ve iletişimi güvence altına almaya yönelik bir tekniktir. Bu, yalnızca bilginin amaçlandığı kişilerin okuyabilmesi ve işleyebilmesi için kodların kullanılması yoluyla bilgi ve iletişimin korunmasına yönelik bir yöntemdir. Kriptografi, aktarım halindeki, bekleyen ve kullanımdaki verileri korumak için kullanılır. _crypt_ öneki "gizli" veya "gizli" anlamına gelir ve _graphy_ son eki "yazma" anlamına gelir.

### Kriptografi Türleri
İki tür kriptografi çeşidi vardır
1. [Simektrik Kriptografi](Cryptography/readme.md#symmetric-cryptography)
2. [Asimetrik Kriptografi](Cryptography/readme.md#asymmetric-cryptography)

### [Kripto Paralar](Cryptography/CryptoCurrency/readme.md#crypto-currency)
Kripto para birimi, para birimlerinin oluşturulmasını düzenlemek ve fon transferini doğrulamak için şifreleme tekniklerinin kullanıldığı, merkez bankasından bağımsız olarak çalışan dijital bir para birimidir. Kripto para birimleri, merkezi dijital para birimi ve merkezi bankacılık sistemlerinin aksine merkezi olmayan kontrol kullanır. Her bir kripto para biriminin merkezi olmayan kontrolü, genel olarak bir kamu mali işlem veritabanı olarak hizmet veren, genellikle bir blockchain olan dağıtılmış defter teknolojisi aracılığıyla çalışır. Bir kripto para biriminin tanımlayıcı bir özelliği ve tartışmasız en çekici cazibesi, organik doğasıdır; herhangi bir merkezi otorite tarafından yayınlanmadığından teorik olarak hükümetin müdahalesine veya manipülasyonuna karşı bağışıktır.

## Kripto Para Çeşitleri Şu Şekildedir:
1. [İşin Kanıtı](Cryptography/CryptoCurrency/ProofOfWork/readme.md#proof-of-work)
2. [Hisse Kanıtı](Cryptography/CryptoCurrency/ProofOfStake/readme.md#proof-of-stake)



### _En Popüler Kripto Paralar Şu Şekildedir:_
1. [Bitcoin](Cryptography/CryptoCurrency/ProofOfWork/Bitcoin/readme.md#bitcoin)
2. [Ethereum](Cryptography/CryptoCurrency/ProofOfStake/Ethereum/readme.md#ethereum)
3. [Litecoin](Cryptography/CryptoCurrency/ProofOfWork/Litecoin/readme.md#litecoin)
4. [Cardano](Cryptography/CryptoCurrency/ProofOfStake/Cardano/readme.md#cardano)
5. [Dogecoin](Cryptography/CryptoCurrency/ProofOfWork/Dogecoin/readme.md#dogecoin)



## Kompütasyon Teorisi
Teorik bilgisayar bilimi ve matematikte hesaplama teorisi, bir algoritma kullanılarak bir hesaplama modelinde hangi problemlerin çözülebileceği, bunların ne kadar verimli bir şekilde çözülebileceği veya ne dereceye kadar çözülebileceği (örneğin yaklaşık çözümlere karşı kesin çözümler) ile ilgilenen daldır. ). Alan üç ana dala ayrılmıştır: otomata teorisi ve biçimsel diller, hesaplanabilirlik teorisi ve hesaplama karmaşıklığı teorisi; bunlar şu soruyla bağlantılıdır: "Bilgisayarların temel yetenekleri ve sınırlamaları nelerdir?".

### Automata Teorisi
Otomata teorisi, soyut makinelerin ve otomatların yanı sıra bunları kullanarak çözülebilecek hesaplama problemlerinin incelenmesidir. Teorik bilgisayar biliminde bir teoridir. Otomata kelimesi Yunanca αὐτόματος kelimesinden gelir ve "kendi kendine hareket eden, kendi iradesiyle hareket eden, kendi kendine hareket eden" anlamına gelir. Bir otomat (çoğul olarak otomat), önceden belirlenmiş bir işlem sırasını otomatik olarak takip eden soyut, kendinden tahrikli bir bilgi işlem cihazıdır. Sonlu sayıda duruma sahip bir otomat, Sonlu Otomat (FA) veya Sonlu Durum Makinesi (FSM) olarak adlandırılır. Sağdaki şekil, iyi bilinen bir otomat türü olan sonlu durum makinesini göstermektedir. Bu otomat, durumlardan (şekilde dairelerle gösterilmiştir) ve geçişlerden (oklarla gösterilmiştir) oluşur. Otomat bir giriş sembolü gördüğünde, önceki durumu ve mevcut giriş sembolünü argüman olarak alan geçiş fonksiyonuna göre başka bir duruma geçiş yapar (veya atlar).

### Biçimsel Diller
Mantık, matematik, bilgisayar bilimi ve dilbilimde resmi bir dil, harfleri bir alfabeden alınan ve belirli bir dizi kurala göre iyi biçimlendirilmiş sözcüklerden oluşur.

Resmi bir dilin alfabesi, dilin dizelerinde birleşen sembollerden, harflerden veya belirteçlerden oluşur. Bu alfabenin sembollerinden birleştirilen her diziye sözcük adı verilir ve belirli bir biçimsel dile ait olan sözcüklere bazen iyi biçimlendirilmiş sözcükler veya iyi biçimlendirilmiş formüller denir. Resmi bir dil genellikle, normal dilbilgisi veya bağlamdan bağımsız dilbilgisi gibi biçimsel dilbilgisi kullanılarak tanımlanır ve bu dilin oluşum kurallarından oluşur.

Bilgisayar biliminde, diğerlerinin yanı sıra, programlama dillerinin gramerini ve dilin kelimelerinin belirli anlamlarla veya anlambilimle ilişkili kavramları temsil ettiği doğal dillerin alt kümelerinin resmileştirilmiş versiyonlarını tanımlamak için temel olarak biçimsel diller kullanılır. Hesaplamalı karmaşıklık teorisinde, karar problemleri tipik olarak biçimsel diller olarak tanımlanır ve karmaşıklık sınıfları, sınırlı hesaplama gücüne sahip makineler tarafından ayrıştırılabilen biçimsel dil kümeleri olarak tanımlanır. Mantıkta ve matematiğin temellerinde, aksiyomatik sistemlerin sözdizimini temsil etmek için biçimsel diller kullanılır ve matematiksel biçimcilik, tüm matematiğin biçimsel dillerin sözdizimsel manipülasyonuna bu şekilde indirgenebileceği felsefesidir.

### Hesaplanabilirlik Teorisi
Özyineleme teorisi olarak da bilinen hesaplanabilirlik teorisi, matematiksel mantığın, bilgisayar biliminin ve 1930'larda hesaplanabilir fonksiyonlar ve Turing derecelerinin incelenmesiyle ortaya çıkan hesaplama teorisinin bir dalıdır. Alan o zamandan beri genelleştirilmiş hesaplanabilirlik ve tanımlanabilirlik çalışmalarını içerecek şekilde genişledi. Bu alanlarda hesaplanabilirlik teorisi, ispat teorisi ve etkili tanımlayıcı küme teorisi ile örtüşmektedir.

### Hesaplamalı karmaşıklık teorisi
Teorik bilgisayar bilimi ve matematikte hesaplama karmaşıklığı teorisi, hesaplama problemlerinin kaynak kullanımına göre sınıflandırılmasına ve bu sınıfların birbirleriyle ilişkilendirilmesine odaklanır. Hesaplamalı problem, bilgisayar tarafından çözülen bir görevdir. Bir hesaplama problemi, algoritma gibi matematiksel adımların mekanik olarak uygulanmasıyla çözülebilir.

Algoritma ne olursa olsun, çözümü önemli miktarda kaynak gerektiriyorsa, bir problemin doğası gereği zor olduğu kabul edilir. Teori, bu sorunları incelemek için matematiksel hesaplama modelleri sunarak ve bunların hesaplama karmaşıklığını, yani bunları çözmek için gereken zaman ve depolama gibi kaynakların sayısını ölçerek bu sezgiyi resmileştirir. İletişim miktarı (iletişim karmaşıklığında kullanılır), bir devredeki kapı sayısı (devre karmaşıklığında kullanılır) ve işlemci sayısı (paralel hesaplamada kullanılır) gibi diğer karmaşıklık ölçümleri de kullanılır. Hesaplamalı karmaşıklık teorisinin rollerinden biri, bilgisayarların yapabilecekleri ve yapamayacakları konusundaki pratik sınırları belirlemektir. Yedi Milenyum Ödül Probleminden biri olan P'ye karşı NP problemi, hesaplama karmaşıklığı alanına adanmıştır.

Teorik bilgisayar bilimindeki yakından ilişkili alanlar, algoritmaların analizi ve hesaplanabilirlik teorisidir. Algoritma analizi ile hesaplama karmaşıklığı teorisi arasındaki temel ayrım, birincisinin bir sorunu çözmek için belirli bir algoritmanın ihtiyaç duyduğu kaynak sayısını analiz etmeye ayrılması, ikincisinin ise kullanılabilecek tüm olası algoritmalar hakkında daha genel bir soru sormasıdır. aynı sorunu çözmek için. Daha doğrusu hesaplama karmaşıklığı teorisi, uygun şekilde kısıtlanmış kaynaklarla çözülebilen veya çözülemeyen sorunları sınıflandırmaya çalışır. Buna karşılık, mevcut kaynaklara kısıtlamalar getirmek, hesaplama karmaşıklığını hesaplanabilirlik teorisinden ayıran şeydir: ikinci teori, prensipte ne tür problemlerin algoritmik olarak çözülebileceğini sorar.

 
## Contributors

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tbody>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="http://safayat.me"><img src="https://avatars.githubusercontent.com/u/80335059?v=4?s=50" width="50px;" alt="Sifat"/><br /><sub><b>Sifat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=shhossain" title="Code">💻</a> <a href="#content-shhossain" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=shhossain" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Sabine91"><img src="https://avatars.githubusercontent.com/u/96158726?v=4?s=50" width="50px;" alt="Yuvraj Chauhan"/><br /><sub><b>Yuvraj Chauhan</b></sub></a><br /><a href="#content-Sabine91" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Sabine91" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Rajesh144142"><img src="https://avatars.githubusercontent.com/u/82487522?v=4?s=50" width="50px;" alt="Rajesh kumar halder"/><br /><sub><b>Rajesh kumar halder</b></sub></a><br /><a href="#content-Rajesh144142" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Rajesh144142" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Rajesh144142" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://ishanmondal.me"><img src="https://avatars.githubusercontent.com/u/76674591?v=4?s=50" width="50px;" alt="Ishan Mondal"/><br /><sub><b>Ishan Mondal</b></sub></a><br /><a href="#content-ishan-im" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=ishan-im" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Apoorva08102000"><img src="https://avatars.githubusercontent.com/u/91753868?v=4?s=50" width="50px;" alt="Apoorva08102000"/><br /><sub><b>Apoorva08102000</b></sub></a><br /><a href="#content-Apoorva08102000" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Apoorva08102000" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/apoorva1823000"><img src="https://avatars.githubusercontent.com/u/71769587?v=4?s=50" width="50px;" alt="Apoorva .S. Mehta"/><br /><sub><b>Apoorva .S. Mehta</b></sub></a><br /><a href="#content-apoorva1823000" title="Content">🖋</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/utopian-coder"><img src="https://avatars.githubusercontent.com/u/66299782?v=4?s=50" width="50px;" alt="Imran Biswas"/><br /><sub><b>Imran Biswas</b></sub></a><br /><a href="#content-utopian-coder" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=utopian-coder" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=utopian-coder" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/subrata-9999"><img src="https://avatars.githubusercontent.com/u/109057053?v=4?s=50" width="50px;" alt="Subrata Pramanik"/><br /><sub><b>Subrata Pramanik</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=subrata-9999" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=subrata-9999" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://br.linkedin.com/in/samuelbratifavarin"><img src="https://avatars.githubusercontent.com/u/17628602?v=4?s=50" width="50px;" alt="Samuel Favarin"/><br /><sub><b>Samuel Favarin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SamuelBFavarin" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=SamuelBFavarin" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/sahooabhipsa10"><img src="https://avatars.githubusercontent.com/u/99355886?v=4?s=50" width="50px;" alt="sahooabhipsa10"/><br /><sub><b>sahooabhipsa10</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sahooabhipsa10" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Sahilrao09"><img src="https://avatars.githubusercontent.com/u/88286056?v=4?s=50" width="50px;" alt="Sahil Rao"/><br /><sub><b>Sahil Rao</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sahilrao09" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Code-N-Bug"><img src="https://avatars.githubusercontent.com/u/103832013?v=4?s=50" width="50px;" alt="K K Chowdhury"/><br /><sub><b>K K Chowdhury</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Code-N-Bug" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Code-N-Bug" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://manas6699.github.io/portfolio-website3.0/"><img src="https://avatars.githubusercontent.com/u/78929050?v=4?s=50" width="50px;" alt="Manas Baroi"/><br /><sub><b>Manas Baroi</b></sub></a><br /><a href="#example-manas6699" title="Examples">💡</a> <a href="https://github.com/shhossain/computer_science/commits?author=manas6699" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/kanaujiyaaditi"><img src="https://avatars.githubusercontent.com/u/94130073?v=4?s=50" width="50px;" alt="Aditi"/><br /><sub><b>Aditi</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=kanaujiyaaditi" title="Documentation">📖</a> <a href="#content-kanaujiyaaditi" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Talib-Hossain"><img src="https://avatars.githubusercontent.com/u/83373885?v=4?s=50" width="50px;" alt="Syed Talib Hossain"/><br /><sub><b>Syed Talib Hossain</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Talib-Hossain" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/JaiMehrotra02"><img src="https://avatars.githubusercontent.com/u/94130223?v=4?s=50" width="50px;" alt="Jai Mehrotra"/><br /><sub><b>Jai Mehrotra</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=JaiMehrotra02" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=JaiMehrotra02" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ShuvamBag"><img src="https://avatars.githubusercontent.com/u/82321197?v=4?s=50" width="50px;" alt="Shuvam Bag"/><br /><sub><b>Shuvam Bag</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ShuvamBag" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=ShuvamBag" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AbhijitTurate"><img src="https://avatars.githubusercontent.com/u/46615905?v=4?s=50" width="50px;" alt="Abhijit Turate"/><br /><sub><b>Abhijit Turate</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AbhijitTurate" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=AbhijitTurate" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Jayesh2812"><img src="https://avatars.githubusercontent.com/u/52153715?v=4?s=50" width="50px;" alt="Jayesh Deorukhkar"/><br /><sub><b>Jayesh Deorukhkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Jayesh2812" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/SohamDey80"><img src="https://avatars.githubusercontent.com/u/93932583?v=4?s=50" width="50px;" alt="JC Shankar"/><br /><sub><b>JC Shankar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SohamDey80" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=SohamDey80" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Subrata-Pramanik"><img src="https://avatars.githubusercontent.com/u/86642230?v=4?s=50" width="50px;" alt="Subrata Pramanik"/><br /><sub><b>Subrata Pramanik</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Subrata-Pramanik" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=Subrata-Pramanik" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/imams12"><img src="https://avatars.githubusercontent.com/u/59444865?v=4?s=50" width="50px;" alt="Imam Suyuti"/><br /><sub><b>Imam Suyuti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=imams12" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/rahulmangla28"><img src="https://avatars.githubusercontent.com/u/93324315?v=4?s=50" width="50px;" alt="genius_koder"/><br /><sub><b>genius_koder</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rahulmangla28" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.altafshaikh.ml"><img src="https://avatars.githubusercontent.com/u/26015187?v=4?s=50" width="50px;" alt="Altaf Shaikh"/><br /><sub><b>Altaf Shaikh</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=altafshaikh" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/rajdeepdas2000"><img src="https://avatars.githubusercontent.com/u/53941109?v=4?s=50" width="50px;" alt="Rajdeep Das"/><br /><sub><b>Rajdeep Das</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rajdeepdas2000" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/its-red-eagle"><img src="https://avatars.githubusercontent.com/u/77643994?v=4?s=50" width="50px;" alt="Vikash Patel"/><br /><sub><b>Vikash Patel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=its-red-eagle" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/alwenpy"><img src="https://avatars.githubusercontent.com/u/94129388?v=4?s=50" width="50px;" alt="Arvind Srivastav"/><br /><sub><b>Arvind Srivastav</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=alwenpy" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Naprila"><img src="https://avatars.githubusercontent.com/u/85901005?v=4?s=50" width="50px;" alt="Manish Kr Prasad"/><br /><sub><b>Manish Kr Prasad</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Naprila" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://linktr.ee/mohit_kushwaha"><img src="https://avatars.githubusercontent.com/u/73400792?v=4?s=50" width="50px;" alt="MOHIT KUMAR KUSHWAHA"/><br /><sub><b>MOHIT KUMAR KUSHWAHA</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=KimtVak8143" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/DryHitman"><img src="https://avatars.githubusercontent.com/u/116108787?v=4?s=50" width="50px;" alt="DryHitman"/><br /><sub><b>DryHitman</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DryHitman" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/harshkulkarni17"><img src="https://avatars.githubusercontent.com/u/72391096?v=4?s=50" width="50px;" alt="Harsh Kulkarni"/><br /><sub><b>Harsh Kulkarni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=harshkulkarni17" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ATREAY"><img src="https://avatars.githubusercontent.com/u/66585295?v=4?s=50" width="50px;" alt="Atreay  Kukanur"/><br /><sub><b>Atreay  Kukanur</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ATREAY" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://sreeharan.github.io"><img src="https://avatars.githubusercontent.com/u/62993067?v=4?s=50" width="50px;" alt="Sree Haran"/><br /><sub><b>Sree Haran</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SreeHaran" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.linkedin.com/in/auro-saswat-raj-d05m07y2003/"><img src="https://avatars.githubusercontent.com/u/83534307?v=4?s=50" width="50px;" alt="Auro Saswat Raj"/><br /><sub><b>Auro Saswat Raj</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=geeky-auro" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Aiyan-Faras"><img src="https://avatars.githubusercontent.com/u/55203889?v=4?s=50" width="50px;" alt="Aiyan Faras"/><br /><sub><b>Aiyan Faras</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Aiyan-Faras" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/commits?author=Aiyan-Faras" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/PriyanshiDavid"><img src="https://avatars.githubusercontent.com/u/71930453?v=4?s=50" width="50px;" alt="Priyanshi David"/><br /><sub><b>Priyanshi David</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=PriyanshiDavid" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ishancode-dev"><img src="https://avatars.githubusercontent.com/u/115942220?v=4?s=50" width="50px;" alt="Ishan Mondal"/><br /><sub><b>Ishan Mondal</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ishancode-dev" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://expy.bio/NikhilShrivastava"><img src="https://avatars.githubusercontent.com/u/20610444?v=4?s=50" width="50px;" alt="Nikhil Shrivastava"/><br /><sub><b>Nikhil Shrivastava</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=NikhilShrivastava" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/deepshikha2708"><img src="https://avatars.githubusercontent.com/u/80972038?v=4?s=50" width="50px;" alt="deepshikha2708"/><br /><sub><b>deepshikha2708</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=deepshikha2708" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/rishiwardhan"><img src="https://avatars.githubusercontent.com/u/88772100?v=4?s=50" width="50px;" alt="L.RISHIWARDHAN"/><br /><sub><b>L.RISHIWARDHAN</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=rishiwardhan" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/DevTMK"><img src="https://avatars.githubusercontent.com/u/47377566?v=4?s=50" width="50px;" alt="Rahul RK"/><br /><sub><b>Rahul RK</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DevTMK" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.linkedin.com/company/nscc-ggv/"><img src="https://avatars.githubusercontent.com/u/82573863?v=4?s=50" width="50px;" alt="Nishant Wankhade"/><br /><sub><b>Nishant Wankhade</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=NishantWankhade" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/pritika163"><img src="https://avatars.githubusercontent.com/u/102177744?v=4?s=50" width="50px;" alt="pritika163"/><br /><sub><b>pritika163</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pritika163" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AnjumanHasan"><img src="https://avatars.githubusercontent.com/u/82674743?v=4?s=50" width="50px;" alt="Anjuman Hasan"/><br /><sub><b>Anjuman Hasan</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AnjumanHasan" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://linktr.ee/asthavarshney"><img src="https://avatars.githubusercontent.com/u/97240696?v=4?s=50" width="50px;" alt="Astha Varshney "/><br /><sub><b>Astha Varshney </b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Asthavarshneyy" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Gcettbdeveloper"><img src="https://avatars.githubusercontent.com/u/114204175?v=4?s=50" width="50px;" alt="Gcettbdeveloper"/><br /><sub><b>Gcettbdeveloper</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Gcettbdeveloper" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://elston-website.web.app"><img src="https://avatars.githubusercontent.com/u/66341506?v=4?s=50" width="50px;" alt="Elston Tan"/><br /><sub><b>Elston Tan</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Elstuhn" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ShivanshDengla"><img src="https://avatars.githubusercontent.com/u/66008449?v=4?s=50" width="50px;" alt="Shivansh Dengla"/><br /><sub><b>Shivansh Dengla</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ShivanshDengla" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://www.tetricz.com"><img src="https://avatars.githubusercontent.com/u/49681400?v=4?s=50" width="50px;" alt="David Daniels"/><br /><sub><b>David Daniels</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Tetricz" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ayushverma14"><img src="https://avatars.githubusercontent.com/u/65187507?v=4?s=50" width="50px;" alt="ayushverma14"/><br /><sub><b>ayushverma14</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ayushverma14" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://kontentkreator.tech"><img src="https://avatars.githubusercontent.com/u/70800059?v=4?s=50" width="50px;" alt="Pratik Rai"/><br /><sub><b>Pratik Rai</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pratikkumar399" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/yash-ch"><img src="https://avatars.githubusercontent.com/u/66888087?v=4?s=50" width="50px;" alt="Yash"/><br /><sub><b>Yash</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=yash-ch" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/pranavyatnalkar"><img src="https://avatars.githubusercontent.com/u/84735288?v=4?s=50" width="50px;" alt="pranavyatnalkar"/><br /><sub><b>pranavyatnalkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=pranavyatnalkar" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/jeremiaaxel"><img src="https://avatars.githubusercontent.com/u/57858415?v=4?s=50" width="50px;" alt="Jeremia Axel"/><br /><sub><b>Jeremia Axel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=jeremiaaxel" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://in.linkedin.com/in/akhil-soni-9827181a1"><img src="https://avatars.githubusercontent.com/u/58397226?v=4?s=50" width="50px;" alt="Akhil Soni"/><br /><sub><b>Akhil Soni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=akhil-maker" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/DevZahraShahid"><img src="https://avatars.githubusercontent.com/u/111266434?v=4?s=50" width="50px;" alt="Zahra Shahid"/><br /><sub><b>Zahra Shahid</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DevZahraShahid" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Mihir20K"><img src="https://avatars.githubusercontent.com/u/112269999?v=4?s=50" width="50px;" alt="Mihir20K"/><br /><sub><b>Mihir20K</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Mihir20K" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/computerwala"><img src="https://avatars.githubusercontent.com/u/30777038?v=4?s=50" width="50px;" alt="Aman"/><br /><sub><b>Aman</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=computerwala" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/mauriallegrettiswnat"><img src="https://avatars.githubusercontent.com/u/71467262?v=4?s=50" width="50px;" alt="Mauricio Allegretti"/><br /><sub><b>Mauricio Allegretti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=mauriallegrettiswnat" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Bruno-Vasconcellos-Betella"><img src="https://avatars.githubusercontent.com/u/57138664?v=4?s=50" width="50px;" alt="Bruno-Vasconcellos-Betella"/><br /><sub><b>Bruno-Vasconcellos-Betella</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Bruno-Vasconcellos-Betella" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://itdadakan.site"><img src="https://avatars.githubusercontent.com/u/62456215?v=4?s=50" width="50px;" alt="Febi Arifin"/><br /><sub><b>Febi Arifin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=febiarifin" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/dinesh9-ai"><img src="https://avatars.githubusercontent.com/u/63300423?v=4?s=50" width="50px;" alt="Dineshwar Doddapaneni"/><br /><sub><b>Dineshwar Doddapaneni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=dinesh9-ai" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Dheerajsoni93"><img src="https://avatars.githubusercontent.com/u/82114565?v=4?s=50" width="50px;" alt="Dheeraj_Soni"/><br /><sub><b>Dheeraj_Soni</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Dheerajsoni93" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.linkedin.com/in/ojash-kushwaha-791770185"><img src="https://avatars.githubusercontent.com/u/96474959?v=4?s=50" width="50px;" alt="Ojash Kushwaha"/><br /><sub><b>Ojash Kushwaha</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=OjashKush" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Sleep-lover"><img src="https://avatars.githubusercontent.com/u/82304155?v=4?s=50" width="50px;" alt="Laleet Borse"/><br /><sub><b>Laleet Borse</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sleep-lover" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Wahaj-Raza"><img src="https://avatars.githubusercontent.com/u/103155321?v=4?s=50" width="50px;" alt="Wahaj Raza"/><br /><sub><b>Wahaj Raza</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Wahaj-Raza" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/WahajRaza1"><img src="https://avatars.githubusercontent.com/u/90937190?v=4?s=50" width="50px;" alt="WahajRaza1"/><br /><sub><b>WahajRaza1</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=WahajRaza1" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://ravencolevol.github.io"><img src="https://avatars.githubusercontent.com/u/44892121?v=4?s=50" width="50px;" alt="Ravi Lamkoti"/><br /><sub><b>Ravi Lamkoti</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=RavenColEvol" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/UperscuzziSchoolAcc"><img src="https://avatars.githubusercontent.com/u/111448336?v=4?s=50" width="50px;" alt="The One and Only Uper"/><br /><sub><b>The One and Only Uper</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=UperscuzziSchoolAcc" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AdarshBajpai67"><img src="https://avatars.githubusercontent.com/u/95476086?v=4?s=50" width="50px;" alt="AdarshBajpai67"/><br /><sub><b>AdarshBajpai67</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AdarshBajpai67" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://deepakkharah.me"><img src="https://avatars.githubusercontent.com/u/42672761?v=4?s=50" width="50px;" alt="Deepak Kharah"/><br /><sub><b>Deepak Kharah</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Deepak-Kharah" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/sairohit360"><img src="https://avatars.githubusercontent.com/u/55144209?v=4?s=50" width="50px;" alt="sairohit360"/><br /><sub><b>sairohit360</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sairohit360" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/sairohitzl"><img src="https://avatars.githubusercontent.com/u/86225259?v=4?s=50" width="50px;" alt="sairohitzl"/><br /><sub><b>sairohitzl</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=sairohitzl" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/RavalJinit"><img src="https://avatars.githubusercontent.com/u/72157334?v=4?s=50" width="50px;" alt="Raval Jinit"/><br /><sub><b>Raval Jinit</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=RavalJinit" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Vovka1759"><img src="https://avatars.githubusercontent.com/u/75867274?v=4?s=50" width="50px;" alt="Vovka1759"/><br /><sub><b>Vovka1759</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Vovka1759" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Nijin-P-S"><img src="https://avatars.githubusercontent.com/u/101330853?v=4?s=50" width="50px;" alt="Nijin"/><br /><sub><b>Nijin</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Nijin-P-S" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/avinilcode"><img src="https://avatars.githubusercontent.com/u/111761529?v=4?s=50" width="50px;" alt="Avinil Bedarkar"/><br /><sub><b>Avinil Bedarkar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=avinilcode" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/FercueNat"><img src="https://avatars.githubusercontent.com/u/113535859?v=4?s=50" width="50px;" alt="FercueNat"/><br /><sub><b>FercueNat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=FercueNat" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://khareyash05.github.io/home/"><img src="https://avatars.githubusercontent.com/u/60147732?v=4?s=50" width="50px;" alt="Yash Khare"/><br /><sub><b>Yash Khare</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=khareyash05" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ayushanand16"><img src="https://avatars.githubusercontent.com/u/96689639?v=4?s=50" width="50px;" alt="Ayush Anand"/><br /><sub><b>Ayush Anand</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ayushanand16" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/DharmaWarrior"><img src="https://avatars.githubusercontent.com/u/97218268?v=4?s=50" width="50px;" alt="DharmaWarrior"/><br /><sub><b>DharmaWarrior</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=DharmaWarrior" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://linktr.ee/hitarthraval"><img src="https://avatars.githubusercontent.com/u/62943532?v=4?s=50" width="50px;" alt="Hitarth Raval"/><br /><sub><b>Hitarth Raval</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=hitarthraval" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/WiemBorchani"><img src="https://avatars.githubusercontent.com/u/52404192?v=4?s=50" width="50px;" alt="Wiem Borchani "/><br /><sub><b>Wiem Borchani </b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=WiemBorchani" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Kambo2320"><img src="https://avatars.githubusercontent.com/u/98479408?v=4?s=50" width="50px;" alt="Kamden Burke"/><br /><sub><b>Kamden Burke</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Kambo2320" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/denschiro"><img src="https://avatars.githubusercontent.com/u/6161324?v=4?s=50" width="50px;" alt="denschiro"/><br /><sub><b>denschiro</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=denschiro" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/nishat48"><img src="https://avatars.githubusercontent.com/u/109063023?v=4?s=50" width="50px;" alt="Nishat"/><br /><sub><b>Nishat</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=nishat48" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/mdfaizanahmed786"><img src="https://avatars.githubusercontent.com/u/85175130?v=4?s=50" width="50px;" alt="Mohammed Faizan Ahmed"/><br /><sub><b>Mohammed Faizan Ahmed</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=mdfaizanahmed786" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/manish831"><img src="https://avatars.githubusercontent.com/u/74316266?v=4?s=50" width="50px;" alt="Manish Agrahari"/><br /><sub><b>Manish Agrahari</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=manish831" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/lokesh-katari"><img src="https://avatars.githubusercontent.com/u/111894942?v=4?s=50" width="50px;" alt="Katari Lokeswara rao"/><br /><sub><b>Katari Lokeswara rao</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=lokesh-katari" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://g.dev/ZahraShahid"><img src="https://avatars.githubusercontent.com/u/65255043?v=4?s=50" width="50px;" alt="Zahra Shahid"/><br /><sub><b>Zahra Shahid</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ZahraShahid" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/glenntu15"><img src="https://avatars.githubusercontent.com/u/10324492?v=4?s=50" width="50px;" alt="Glenn Turner"/><br /><sub><b>Glenn Turner</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=glenntu15" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/vinayak9303"><img src="https://avatars.githubusercontent.com/u/55548976?v=4?s=50" width="50px;" alt="Vinayak godse"/><br /><sub><b>Vinayak godse</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=vinayak9303" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Satyajeetbh"><img src="https://avatars.githubusercontent.com/u/88246318?v=4?s=50" width="50px;" alt="Satyajeetbh"/><br /><sub><b>Satyajeetbh</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Satyajeetbh" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/P-Dhruva-Teja"><img src="https://avatars.githubusercontent.com/u/81409709?v=4?s=50" width="50px;" alt="Paidipelly Dhruvateja"/><br /><sub><b>Paidipelly Dhruvateja</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=P-Dhruva-Teja" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/helloausrine"><img src="https://avatars.githubusercontent.com/u/30316810?v=4?s=50" width="50px;" alt="helloausrine"/><br /><sub><b>helloausrine</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=helloausrine" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/SourabhJoshi209"><img src="https://avatars.githubusercontent.com/u/69594540?v=4?s=50" width="50px;" alt="SourabhJoshi209"/><br /><sub><b>SourabhJoshi209</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=SourabhJoshi209" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://bio.link/stefantaitano"><img src="https://avatars.githubusercontent.com/u/85418632?v=4?s=50" width="50px;" alt="Stefan Taitano"/><br /><sub><b>Stefan Taitano</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=codewithfan" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://linkedin.com/in/anmspro"><img src="https://avatars.githubusercontent.com/u/33668152?v=4?s=50" width="50px;" alt="Abu Noman Md. Sakib"/><br /><sub><b>Abu Noman Md. Sakib</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=anmspro" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://skyrunner360.pythonanywhere.com"><img src="https://avatars.githubusercontent.com/u/44318840?v=4?s=50" width="50px;" alt="Rishi Mathur"/><br /><sub><b>Rishi Mathur</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=skyrunner360" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Atharv-Nalwade"><img src="https://avatars.githubusercontent.com/u/98139553?v=4?s=50" width="50px;" alt="Darky001"/><br /><sub><b>Darky001</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Atharv-Nalwade" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Retr0Sushi"><img src="https://avatars.githubusercontent.com/u/110653014?v=4?s=50" width="50px;" alt="himanshu"/><br /><sub><b>himanshu</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Retr0Sushi" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/kusumita29"><img src="https://avatars.githubusercontent.com/u/99873488?v=4?s=50" width="50px;" alt="Kusumita Ghose"/><br /><sub><b>Kusumita Ghose</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=kusumita29" title="Documentation">📖</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Yash1107"><img src="https://avatars.githubusercontent.com/u/76468153?v=4?s=50" width="50px;" alt="Yashvi Patel"/><br /><sub><b>Yashvi Patel</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Yash1107" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ArshadAriff"><img src="https://avatars.githubusercontent.com/u/113685884?v=4?s=50" width="50px;" alt="ArshadAriff"/><br /><sub><b>ArshadAriff</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ArshadAriff" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ishashukla183"><img src="https://avatars.githubusercontent.com/u/93022787?v=4?s=50" width="50px;" alt="ishashukla183"/><br /><sub><b>ishashukla183</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=ishashukla183" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/jhuynh06"><img src="https://avatars.githubusercontent.com/u/111946833?v=4?s=50" width="50px;" alt="jhuynh06"/><br /><sub><b>jhuynh06</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3Ajhuynh06" title="Bug reports">🐛</a> <a href="https://github.com/shhossain/computer_science/commits?author=jhuynh06" title="Tests">⚠️</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://asche.tech"><img src="https://avatars.githubusercontent.com/u/2975712?v=4?s=50" width="50px;" alt="Andrew Asche"/><br /><sub><b>Andrew Asche</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=andrewasche" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="http://nateonmission.github.io"><img src="https://avatars.githubusercontent.com/u/37854313?v=4?s=50" width="50px;" alt="J. Nathan Allen"/><br /><sub><b>J. Nathan Allen</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3Anateonmission" title="Bug reports">🐛</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Sayed-Afnan-Khazi"><img src="https://avatars.githubusercontent.com/u/83779299?v=4?s=50" width="50px;" alt="Sayed Afnan Khazi"/><br /><sub><b>Sayed Afnan Khazi</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sayed-Afnan-Khazi" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Technic143"><img src="https://avatars.githubusercontent.com/u/117275755?v=4?s=50" width="50px;" alt="Technic143"/><br /><sub><b>Technic143</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Technic143" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/issues?q=author%3ATechnic143" title="Bug reports">🐛</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/snowflake1201"><img src="https://avatars.githubusercontent.com/u/56119216?v=4?s=50" width="50px;" alt="Pin Yuan Wang"/><br /><sub><b>Pin Yuan Wang</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=snowflake1201" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/BogdanOtava"><img src="https://avatars.githubusercontent.com/u/103674688?v=4?s=50" width="50px;" alt="Bogdan Otava"/><br /><sub><b>Bogdan Otava</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=BogdanOtava" title="Code">💻</a> <a href="https://github.com/shhossain/computer_science/commits?author=BogdanOtava" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Vedeesh6"><img src="https://avatars.githubusercontent.com/u/88491153?v=4?s=50" width="50px;" alt="Vedeesh Dwivedi"/><br /><sub><b>Vedeesh Dwivedi</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3AVedeesh6" title="Bug reports">🐛</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/TsiG-404"><img src="https://avatars.githubusercontent.com/u/74056836?v=4?s=50" width="50px;" alt="Tsig"/><br /><sub><b>Tsig</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=TsiG-404" title="Code">💻</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://brandonawan.github.io/Resume/"><img src="https://avatars.githubusercontent.com/u/74030681?v=4?s=50" width="50px;" alt="Brandon Awan"/><br /><sub><b>Brandon Awan</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Brandonawan" title="Documentation">📖</a> <a href="https://github.com/shhossain/computer_science/issues?q=author%3ABrandonawan" title="Bug reports">🐛</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Evy04"><img src="https://avatars.githubusercontent.com/u/84919650?v=4?s=50" width="50px;" alt="Sanya Madre"/><br /><sub><b>Sanya Madre</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Evy04" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/steventohme"><img src="https://avatars.githubusercontent.com/u/56594084?v=4?s=50" width="50px;" alt="Steven"/><br /><sub><b>Steven</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=steventohme" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.linkedin.com/in/garrett-crowley-a0b931126/"><img src="https://avatars.githubusercontent.com/u/86014840?v=4?s=50" width="50px;" alt="Garrett Crowley"/><br /><sub><b>Garrett Crowley</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=crowleyg" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Francesco601"><img src="https://avatars.githubusercontent.com/u/130352141?v=4?s=50" width="50px;" alt="Francesco Franco"/><br /><sub><b>Francesco Franco</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3AFrancesco601" title="Bug reports">🐛</a> <a href="https://github.com/shhossain/computer_science/commits?author=Francesco601" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/aclittle096"><img src="https://avatars.githubusercontent.com/u/43685369?v=4?s=50" width="50px;" alt="Alexander Little"/><br /><sub><b>Alexander Little</b></sub></a><br /><a href="#content-aclittle096" title="Content">🖋</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Wandererr01"><img src="https://avatars.githubusercontent.com/u/129178279?v=4?s=50" width="50px;" alt="Subham Maji"/><br /><sub><b>Subham Maji</b></sub></a><br /><a href="#content-Wandererr01" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ZRX-SIGMA"><img src="https://avatars.githubusercontent.com/u/100613008?v=4?s=50" width="50px;" alt="SK Jiyad"/><br /><sub><b>SK Jiyad</b></sub></a><br /><a href="#content-ZRX-SIGMA" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/exrol"><img src="https://avatars.githubusercontent.com/u/86170495?v=4?s=50" width="50px;" alt="exrol"/><br /><sub><b>exrol</b></sub></a><br /><a href="#content-exrol" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/manavmittal05"><img src="https://avatars.githubusercontent.com/u/65654441?v=4?s=50" width="50px;" alt="Manav Mittal"/><br /><sub><b>Manav Mittal</b></sub></a><br /><a href="#content-manavmittal05" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Rathish-Rajendran"><img src="https://avatars.githubusercontent.com/u/61904970?v=4?s=50" width="50px;" alt="Rathish R"/><br /><sub><b>Rathish R</b></sub></a><br /><a href="#content-Rathish-Rajendran" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/anubhav1450"><img src="https://avatars.githubusercontent.com/u/124580419?v=4?s=50" width="50px;" alt="Anubhav Kulshreshtha"/><br /><sub><b>Anubhav Kulshreshtha</b></sub></a><br /><a href="#content-anubhav1450" title="Content">🖋</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="http://sarthak950.netlify.app"><img src="https://avatars.githubusercontent.com/u/93645760?v=4?s=50" width="50px;" alt="Sarthak "/><br /><sub><b>Sarthak </b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=Sarthak950" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/architO21"><img src="https://avatars.githubusercontent.com/u/97817943?v=4?s=50" width="50px;" alt="architO21"/><br /><sub><b>architO21</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=architO21" title="Code">💻</a> <a href="#content-architO21" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/nik-6174"><img src="https://avatars.githubusercontent.com/u/78644716?v=4?s=50" width="50px;" alt="Nikhil Kumar Jha"/><br /><sub><b>Nikhil Kumar Jha</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=nik-6174" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Kundai10"><img src="https://avatars.githubusercontent.com/u/76932641?v=4?s=50" width="50px;" alt="Kundai Chasinda"/><br /><sub><b>Kundai Chasinda</b></sub></a><br /><a href="#content-Kundai10" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/rohankaushal123"><img src="https://avatars.githubusercontent.com/u/76746752?v=4?s=50" width="50px;" alt="Rohan kaushal"/><br /><sub><b>Rohan kaushal</b></sub></a><br /><a href="#content-rohankaushal123" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AayushKumar176"><img src="https://avatars.githubusercontent.com/u/110240629?v=4?s=50" width="50px;" alt="Aayush Kumar"/><br /><sub><b>Aayush Kumar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AayushKumar176" title="Code">💻</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/vladimir-cucu"><img src="https://avatars.githubusercontent.com/u/108150922?v=4?s=50" width="50px;" alt="Vladimir Cucu"/><br /><sub><b>Vladimir Cucu</b></sub></a><br /><a href="#content-vladimir-cucu" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://www.linkedin.com/in/mohammed-ali-alsakkaf-899b44224/"><img src="https://avatars.githubusercontent.com/u/87440507?v=4?s=50" width="50px;" alt="Mohammed Ali Alsakkaf (Binbasri)"/><br /><sub><b>Mohammed Ali Alsakkaf (Binbasri)</b></sub></a><br /><a href="#content-Binbasri-in" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/serv-er"><img src="https://avatars.githubusercontent.com/u/120189782?v=4?s=50" width="50px;" alt="serv-er"/><br /><sub><b>serv-er</b></sub></a><br /><a href="#content-serv-er" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/ABarpanda"><img src="https://avatars.githubusercontent.com/u/145291762?v=4?s=50" width="50px;" alt="Amritanshu Barpanda"/><br /><sub><b>Amritanshu Barpanda</b></sub></a><br /><a href="#content-ABarpanda" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/aheaton22"><img src="https://avatars.githubusercontent.com/u/117932053?v=4?s=50" width="50px;" alt="aheaton22"/><br /><sub><b>aheaton22</b></sub></a><br /><a href="#content-aheaton22" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/geeknees"><img src="https://avatars.githubusercontent.com/u/701242?v=4?s=50" width="50px;" alt="Masumi Kawasaki"/><br /><sub><b>Masumi Kawasaki</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3Ageeknees" title="Bug reports">🐛</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/aslezar"><img src="https://avatars.githubusercontent.com/u/97354675?v=4?s=50" width="50px;" alt="aslezar"/><br /><sub><b>aslezar</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=aslezar" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://yashsajwan.netlify.app/"><img src="https://avatars.githubusercontent.com/u/52412969?v=4?s=50" width="50px;" alt="Yash Sajwan"/><br /><sub><b>Yash Sajwan</b></sub></a><br /><a href="#content-Yash-Sajwan24" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AbhishekKumar993"><img src="https://avatars.githubusercontent.com/u/121042725?v=4?s=50" width="50px;" alt="Abhishek Kumar"/><br /><sub><b>Abhishek Kumar</b></sub></a><br /><a href="#content-AbhishekKumar993" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/jakenybo"><img src="https://avatars.githubusercontent.com/u/57851055?v=4?s=50" width="50px;" alt="jakenybo"/><br /><sub><b>jakenybo</b></sub></a><br /><a href="#content-jakenybo" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=jakenybo" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/jiangfz1997"><img src="https://avatars.githubusercontent.com/u/63608649?v=4?s=50" width="50px;" alt="Fangzhou_Jiang"/><br /><sub><b>Fangzhou_Jiang</b></sub></a><br /><a href="#content-jiangfz1997" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://nelsonuprety.netlify.app/"><img src="https://avatars.githubusercontent.com/u/25173636?v=4?s=50" width="50px;" alt="Nelson Uprety"/><br /><sub><b>Nelson Uprety</b></sub></a><br /><a href="#content-nelsonuprety1" title="Content">🖋</a></td>
    </tr>
    <tr>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/Ettubrute05"><img src="https://avatars.githubusercontent.com/u/89800208?v=4?s=50" width="50px;" alt="Kevin Garfield"/><br /><sub><b>Kevin Garfield</b></sub></a><br /><a href="#content-Ettubrute05" title="Content">🖋</a> <a href="https://github.com/shhossain/computer_science/commits?author=Ettubrute05" title="Code">💻</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/xaviermonb"><img src="https://avatars.githubusercontent.com/u/144323061?v=4?s=50" width="50px;" alt="xaviermonb"/><br /><sub><b>xaviermonb</b></sub></a><br /><a href="#content-xaviermonb" title="Content">🖋</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/AryasCodeTreks"><img src="https://avatars.githubusercontent.com/u/159680137?v=4?s=50" width="50px;" alt="AryasCodeTreks"/><br /><sub><b>AryasCodeTreks</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=AryasCodeTreks" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/khouloudhaddad"><img src="https://avatars.githubusercontent.com/u/22796050?v=4?s=50" width="50px;" alt="khouloud HADDAD AMAMOU"/><br /><sub><b>khouloud HADDAD AMAMOU</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=khouloudhaddad" title="Documentation">📖</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/WalterMarch"><img src="https://avatars.githubusercontent.com/u/38635451?v=4?s=50" width="50px;" alt="Walter March"/><br /><sub><b>Walter March</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/issues?q=author%3AWalterMarch" title="Bug reports">🐛</a></td>
      <td align="center" valign="top" width="16.66%"><a href="https://github.com/niv-png"><img src="https://avatars.githubusercontent.com/u/66550479?v=4?s=50" width="50px;" alt="Nivea Hanley"/><br /><sub><b>Nivea Hanley</b></sub></a><br /><a href="https://github.com/shhossain/computer_science/commits?author=niv-png" title="Documentation">📖</a></td>
    </tr>
  </tbody>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->

[![All Contributors](https://img.shields.io/badge/all_contributors-104-orange.svg?style=flat-square)](#contributors)
<!-- ALL-CONTRIBUTORS-BADGE:END -->
