<h1 align="center">Computer Science (Informatică)</h1>
<h4 align="center">
    <p>
        <b>English</b> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_es.md">Español</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_fr.md">Français</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_bn.md">বাংলা</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ta.md">தமிழ்</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_guj.md">ગુજરાતી</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_pt.md">Portuguese</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ro.md">Română</a>
    </p>
</h4>

## Ghidul de contribuție
Dacă sunteți interesat să contribuiți la acest proiect, vă rugăm să acordați un moment pentru a revizui [CONTRIBUTING.md](https://github.com/shhossain/computer_science/blob/main/CONTRIBUTING.md) pentru instrucțiuni detaliate despre cum să începeți. Contribuțiile dumneavoastră sunt foarte apreciate!

<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![Toți colaboratorii](https://img.shields.io/badge/all_contributors-132-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

## Cuprins
- [Introducere](#introduction)
- [Calculator electronic](#electronic-computer)
- [Logica booleană](#boolean-logic)
- [Sisteme numerice](#number-systems)
- [Unitatea centrală de procesare (CPU)](#central-processing-unit-cpu)
- [Registre, Cache și RAM](#registers-cache-and-ram)
- [Instrucțiuni și program](#instructions-and-program)
- [Limbaje de programare](#programming-languages)
- [Tipuri de date](#data-types)
- [Declarații și funcții](#statements-and-functions)
- [Structuri de date](#data-structures)
- [Algoritmi](#algorithms)
- [Alan Turing](#alan-turing)
- [Inginerie software](#software-engineering)
- [Circuite integrate](#integrated-circuits)
- [Programare orientată pe obiecte](#object-oriented-programming)
- [Programarea funcțională](#functional-programming)
- [Sisteme de operare](#operating-systems)
- [Memorie și stocare](#memory-and-storage)
- [Sistem de fișiere](#file-system)
- [Cloud Computing](#cloud-computing)
- [Machine Learning](#machine-learning)
- [Tehnologie Web](#web-technology)
- [Networking](#networking)
- [Internet](#internet)
- [Sistem de gestionare a bazelor de date (SGBD)](#dbms)
- [Criptografie](#cryptography)
- [Teoria computației](#theory-of-computation)

## Introducere
Informatica este studiul calculatoarelor și al informaticii, precum și al aplicațiilor teoretice și practice ale acestora. Informatica aplică principiile matematicii, ingineriei și logicii la o multitudine de probleme. Printre acestea se numără formularea de algoritmi, dezvoltarea de software/hardware și inteligența artificială.

## [Calculator electronic](Electronic%20Computer/readme.md)
Un dispozitiv care calculează, în special o mașină electronică programabilă care efectuează operații matematice sau logice de mare viteză sau care asamblează, stochează, corelează sau prelucrează în alt mod informații.

## [Logica booleană](Boolean%20Logic/readme.md)
Logica booleană este o ramură a matematicii care se ocupă cu valorile de adevăr și falsitate. Este un sistem logic care utilizează doar două valori, 0 și 1, pentru a reprezenta falsul și, respectiv, adevărul. Este cunoscută și sub numele de algebră booleană, după numele lui George Boole, care a descris-o pentru prima dată în 1854.

### Operatori booleeni frecvent utilizați
| Operator | Nume |               Descriere               |
| :------: | :--: | :-----------------------------------: |
|    !     | NOT  |    Anulează valoarea operandului.    |
|    &&    | AND  | Returnează **true** dacă ambii operanzi sunt true. |
|   \|\|   |  OR  | Returnează **adevărat** dacă unul sau toți operanzii sunt true. |

### Operatori booleeni bine de cunoscut
| Operator | Nume |               Descriere               |
| :------: | :--: | :-----------------------------------: |
|    ()    | Paranteze | Vă permite să grupați cuvintele cheie și să controlați ordinea în care vor fi căutați termenii. |
|    “”    | Ghilimele | Oferă rezultate cu fraza exactă. |
|   *      |  Asterisc | Oferă rezultate care conțin o variație a cuvântului cheie. |
|   ⊕     |  XOR            | Returnează **true** dacă operanzii sunt diferiți |
|   ⊽      |  NOR            | Returnează **true** dacă toți operanzii sunt falși. |
|   ⊼      |  NAND           | Returnează **false** numai dacă ambele valori ale celor două intrări sunt adevărate. |

## [Sisteme numerice](Number%20System/readme.md#number-systems)
Sistemele numerice sunt sisteme matematice de exprimare a numerelor. Un sistem numeric constă dintr-un set de simboluri utilizate pentru a reprezenta numere și un set de reguli pentru manipularea acestor simboluri. Simbolurile utilizate într-un sistem numeric se numesc cifre.

### [Tipuri de sisteme numerice](Number%20System/readme.md#types-of-number-systems)
- [Sistem numeric pozițional](Number%20System/readme.md#positional-numeral-system)
- [Sistemul de notare folosing maparea semn-valoare](Number%20System/readme.md#sign-value-notation-system)

### [Sistem de numerație pozițional](Number%20System/readme.md#common-positional-number-systems)
- [Binar](Number%20System/readme.md#binary)
- [Octal](Number%20System/readme.md#octal)
- [Zecimal](Number%20System/readme.md#decimal)
- [Hexazecimal](Number%20System/readme.md#hexadecimal)

### Importanța sistemului binar
Sistemul binar este un sistem numeric de bază 2 inventat de Gottfried Leibniz care este format din doar două numere sau cifre: 0 (zero) și 1 (unu). Acest sistem de numerație este baza tuturor codurilor binare, care sunt folosite pentru a scrie date digitale, cum ar fi instrucțiunile procesoarelor de calculator folosite zilnic. Cifrele 0 și 1 din binar reprezintă OFF (oprit), respectiv ON (pornit). Într-un tranzistor, un "0" reprezintă lipsa fluxului de electricitate, iar un "1" reprezintă faptul că electricitatea este permisă. În acest fel, numerele sunt reprezentate fizic în interiorul dispozitivului de calcul, permițând efectuarea de calcule.

Sistemul binar este în continuare limbajul principal pentru calculatoare și este utilizat în cazul electronicii și al echipamentelor informatice din următoarele motive:

- Este un design simplu și elegant.
- 0 și 1 din sistemul binar permite detectarea rapidă a stării off (false) sau on (true) a unui semnal electric.
- Faptul că un semnal electric are doar două stări plasate la mare distanță una de cealaltă îl face mai puțin susceptibil la interferențe electrice.
- Polii pozitivi și negativi ai mediilor magnetice sunt traduși rapid în binar.
- Sistemul binar este cel mai eficient mod de a controla circuitele logice.

## [Unitatea centrală de procesare (CPU)](CPU/readme.md#central-processing-unitcpu)
Unitatea centrală de procesare (CPU) este cea mai importantă parte a oricărui calculator. Unitatea centrală de procesare trimite semnale pentru a controla celelalte părți ale computerului, aproape la fel cum un creier controlează un corp. Unitatea centrală de procesare este o mașinărie electronică care lucrează pe baza unei liste de lucruri pe care computerul trebuie să le facă, numite instrucțiuni. Aceasta citește lista de instrucțiuni și le execută (execută) pe fiecare în ordine. O listă de instrucțiuni pe care o poate executa un CPU este un program de calculator. Un CPU poate procesa mai multe instrucțiuni odată, pe secțiuni numite "nuclee". Un CPU cu patru nuclee poate procesa patru programe în același timp. CPU-ul în sine este alcătuit din trei componente principale. Acestea sunt:
1. [Memorie sau unitate de stocare](CPU/readme.md#memory-or-storage-unit)
2. [Unitatea de control](CPU/readme.md#control-unit)
3. [Unitate aritmetică și logică (ALU)](CPU/readme.md#arithmetic-and-logic-unit-alu)

## [Registre, Cache și RAM](/Registers%20Cache%20and%20RAM)

### [Registru](/Registers%20Cache%20and%20RAM/readme.md#register)
Registrele sunt cantități mici de memorie de mare viteză conținute în CPU. Registrele sunt o colecție de "flip-flops" (un circuit utilizat pentru a stoca 1 bit de memorie). Ele sunt utilizate de procesor pentru a stoca cantități mici de date necesare în timpul procesării. Un CPU poate avea mai multe seturi de registre care se numesc "nuclee". Registrul ajută, de asemenea, la operațiile aritmetice și logice. 

Operațiile aritmetice sunt calcule matematice efectuate de CPU pe datele numerice stocate în registre. Aceste operații includ adunarea, scăderea, înmulțirea și împărțirea. Operațiile logice sunt calcule booleene efectuate de CPU pe date binare stocate în registre. Aceste operații includ comparații (de exemplu, testarea dacă două valori sunt egale) și operații logice (de exemplu, AND, OR, NOT).

Registrele sunt esențiale pentru efectuarea acestor operații, deoarece permit CPU să acceseze și să manipuleze rapid cantități mici de date. Prin stocarea datelor accesate frecvent în registre, CPU poate evita procesul mai lent de recuperare a datelor din memorie.

Cantități mai mari de date pot fi stocate în Cache (pronunțat ca "cash"), o memorie foarte rapidă situată pe același circuit integrat ca și registrele. Cache-ul este utilizat pentru datele accesate frecvent în timpul rulării programului. Cantități și mai mari de date pot fi stocate în memoria RAM. RAM este acronimul de la memoria cu acces aleator, care este un tip de memorie care păstrează date și instrucțiuni care au fost mutate de la stocarea pe disc până când procesorul are nevoie de ele.

### [Cache](/Registers%20Cache%20and%20RAM/readme.md#cache)
Memoria cache este o componentă a calculatorului bazată pe un cip care face ca recuperarea datelor din memoria calculatorului să fie mai eficientă. Aceasta acționează ca o zonă de stocare temporară, astfel încât procesorul computerului poate prelua datele cu ușurință. Această zonă de stocare temporară, cunoscută sub numele de memorie cache, este mai ușor de accesat de procesor decât sursa principală de memorie a computerului, de obicei o formă de DRAM.

Memoria cache este denumită uneori memoria CPU (unitate centrală de procesare) deoarece este de obicei integrată direct în cipul CPU sau plasată pe un cip separat care are o interconectare de bus separată cu CPU. Prin urmare, este mai accesibilă pentru procesor și este capabilă să crească eficiența deoarece este fizic aproape de procesor.

Pentru a fi aproape de procesor, memoria cache trebuie să fie mult mai mică decât memoria principală. În consecință, are mai puțin spațiu de stocare. De asemenea, este mai scumpă decât memoria principală, deoarece este un cip mai complex care produce performanțe mai mari.

Ceea ce sacrifică la nivel de dimensiune și preț, compensează prin viteză. Memoria cache funcționează de 10 până la 100 de ori mai rapid decât memoria RAM, având nevoie de doar câteva nanosecunde pentru a răspunde la o solicitare a procesorului.

Denumirea hardware-ului real care este utilizat pentru memoria cache este memorie statică cu acces aleatoriu de mare viteză (SRAM). Denumirea hardware-ului care este utilizat în memoria principală a unui computer este memorie dinamică cu acces aleatoriu (DRAM).

Memoria cache nu trebuie confundată cu termenul mai larg de memorie cache. Memoriile cache sunt depozite temporare de date care pot exista atât în hardware, cât și în software. Memoria cache se referă la o componentă hardware specifică care permite calculatoarelor să creeze memorii cache la diferite niveluri ale rețelei. O memorie cache este un hardware sau un software utilizat pentru a stoca ceva, de obicei date, temporar într-un mediu informatic.

### [RAM](/Registers%20Cache%20and%20RAM/readme.md#ram)
RAM (Random Access Memory - memorie cu acces aleatoriu) este o formă de memorie a calculatorului care poate fi citită și modificată în orice ordine, utilizată de obicei pentru stocarea datelor de lucru și a codului mașinii. Un dispozitiv de memorie cu acces aleatoriu permite ca elementele de date
să fie citite sau scrise în aproape același timp, indiferent de locația fizică a datelor în interiorul memoriei, spre deosebire de alte medii de stocare a datelor cu acces direct (cum ar fi discurile dure, CD-RWS,
DVD-RW și benzile magnetice mai vechi și memoria cu tambur), unde timpul necesar pentru citirea și scrierea elementelor de date variază semnificativ în funcție de locația fizică a acestora pe suportul de înregistrare, din cauza limitărilor mecanice, cum ar fi viteza de rotație a suportului și mișcarea brațului.

## Instrucțiuni și program <!-- TODO: Add page and link it here -->
În informatică, o instrucțiune este o singură operațiune a unui procesor definită prin setul de instrucțiuni al procesorului. Un program de calculator este o listă de instrucțiuni care indică unui calculator ce trebuie să facă. Tot ceea ce face un calculator se realizează prin utilizarea unui program de calculator. Programele care sunt stocate în memoria unui calculator ("programare internă") permit calculatorului să facă un lucru după altul, chiar și cu pauze între ele.

## [Limbaje de programare](/Programming_Languages/readme.md)
Un limbaj de programare este orice set de reguli care convertește șiruri de caractere, sau elemente grafice de program în cazul limbajelor de programare vizuală, în diverse tipuri de cod mașină. Limbajele de programare sunt un tip de limbaj de calculator utilizat în programarea calculatoarelor pentru implementarea algoritmilor.

Limbajele de programare sunt adesea împărțite în două mari categorii: 
1. Limbajul de nivel înalt utilizează o sintaxă similară cu cea a limbii engleze. Codul sursă este convertit în cod mașină inteligibil pentru mașină cu ajutorul unui compilator sau al unui interpret. Java și Python sunt câteva exemple de limbaje de programare de nivel înalt. Acestea sunt, de obicei, mai lente decât cele de nivel scăzut, dar vine la pachet cu faptul că sunt mai ușoare.
2. Limbajele de programare de nivel scăzut lucrează mai îndeaproape cu hardware-ul și au mai mult control asupra acestuia. Ele interacționează direct cu hardware-ul. Două exemple comune de limbaje de nivel scăzut sunt limbajul de mașină și limbajul de asamblare. Acestea sunt, de obicei, mai rapide decât cele de nivel înalt, dar vine cu prețul unei dificultăți foarte mari și al lipsei de lizibilitate.

### [Paradigme de programare](/Programming_Languages/readme.md#Programming+Paradigms)
Există, de asemenea, mai multe *paradigme de programare* diferite. Paradigmele de programare sunt diferite moduri sau stiluri în care poate fi organizat un anumit program sau limbaj de programare. Fiecare paradigmă constă în anumite structuri, caracteristici și opinii privind modul în care ar trebui abordate problemele comune de programare. 

Paradigmele de programare nu sunt *nu* limbaje sau instrumente. Nu puteți "construi" nimic cu o paradigmă. Ele sunt mai degrabă un set de idealuri și orientări asupra cărora mulți oameni au căzut de acord, le-au urmat și le-au extins. Limbajele de programare nu sunt întotdeauna legate de o anumită paradigmă. Există *există* limbaje care au fost construite cu o anumită paradigmă în minte și care au caracteristici care facilitează acel tip de programare mai mult decât altele (Haskell și programarea funcțională sunt un bun exemplu). Dar există, de asemenea, limbaje "multiparadigmatice" în care vă puteți adapta codul pentru a se potrivi unei anumite paradigme sau alteia (JavaScript și Python sunt exemple bune).

## [Tipuri de date](Data%20Types/readme.md#data-types)
Un tip de date, în programare, este o clasificare care specifică ce tip de valoare are o variabilă și ce tip de operații matematice, relaționale sau logice i se pot aplica fără a provoca o eroare.

### [Tipuri de date primitive](Data%20Types/readme.md#primitive-data-types)
Tipurile de date primitive sunt cele mai de bază tipuri de date dintr-un limbaj de programare. Ele reprezintă elementele de bază ale unor tipuri de date mai complexe. Tipurile de date primitive sunt predefinite de limbajul de programare și sunt denumite printr-un cuvânt cheie rezervat.

### [Tipuri de date primitive frecvent utilizate](Data%20Types/readme.md#common-primitive-data-types)
- [Integer](Data%20Types/readme.md#integer)
- [Float](Data%20Types/readme.md#float)
- [Boolean](Data%20Types/readme.md#boolean)
- [Character](Data%20Types/readme.md#character)
- [String](Data%20Types/readme.md#string)

### [Tipuri de date referință](Data%20Types/readme.md#non-primitive-data-types)
Tipurile de date neprimitive sunt cunoscute și sub denumirea de tipuri de date referință. Acestea sunt create de programator și nu sunt definite de limbajul de programare. Tipurile de date neprimitive sunt, de asemenea, numite tipuri de date compozite, deoarece sunt compuse din alte tipuri.

### [Tipuri de date referință frecvent utilizate](Data%20Types/readme.md#common-non-primitive-data-types)
- [Array](Data%20Types/readme.md#array)
- [Struct](Data%20Types/readme.md#struct)
- [Union](Data%20Types/readme.md#union)
- [Pointer](Data%20Types/readme.md#pointer)
- [Funcție](Data%20Types/readme.md#function)
- [Clasă](Data%20Types/readme.md#class)

## [Declarații și funcții](Statements%20and%20Functions/readme.md)
În programarea calculatoarelor, o declarație este o unitate sintactică a unui limbaj de programare imperativ care exprimă o acțiune care trebuie efectuată. Un program scris într-un astfel de limbaj este format dintr-o secvență de una sau mai multe declarații. O declarație poate avea componente interne (de exemplu, expresii).
Există două tipuri principale de declarații în orice limbaj de programare care este necesar pentru a construi logica unui cod.

1. [Declarații condiționate](Statements%20and%20Functions/readme.md#conditional-statements)

Există două tipuri de declarații condiționale:
- if
- if-else
- switch case

2. [Bucle](Statements%20and%20Functions/readme.md#loops)

Există trei tipuri de bucle:
- for
- while
- do - while (o variație a buclei while)
- do - Until

------------

O funcție este un bloc de instrucțiuni care îndeplinește o sarcină specifică. Funcțiile acceptă date, le procesează și returnează un rezultat sau le execută. Funcțiile sunt scrise în primul rând pentru a sprijini conceptul de reutilizare. Odată ce o funcție este scrisă, aceasta poate fi apelată cu ușurință fără a fi nevoie să se repete același cod.

Diferite limbaje funcționale folosesc sintaxe diferite pentru a scrie funcții.

Citiți mai multe despre funcții [aici](Statements%20and%20Functions/readme.md#functions)

## [Structuri de date](Data%20Structures/readme.md)
În informatică, o structură de date este un format de organizare, gestionare și stocare a datelor care permite accesul și modificarea eficientă. Mai exact, o structură de date este o colecție de valori de date, relațiile dintre acestea și funcțiile sau operațiile care pot fi aplicate datelor.

### Types of Data Structures
- [Array](Data%20Structures/readme.md#array)
- [Listă înlănțuită](Data%20Structures/readme.md#linkedlist)
- [Stiva](Data%20Structures/readme.md#stack)
- [Coadă](Data%20Structures/readme.md#queue)
- [Tabel Hash](Data%20Structures/readme.md#hashtable)
- [Heap](Data%20Structures/readme.md#heap)
- [Arbore](Data%20Structures/readme.md#tree)
- [Graf](Data%20Structures/readme.md#graph)

## [Algoritmi](Algorithms/readme.md)
Algoritmii sunt seturi de pași necesari pentru a finaliza un calcul. Ele se află în centrul activității dispozitivelor noastre, iar acesta nu este un concept nou. Încă de la dezvoltarea matematicii în sine, algoritmii au fost necesari pentru a ne ajuta să îndeplinim sarcinile mai eficient, dar astăzi vom examina câteva probleme de calcul moderne, cum ar fi sortarea și căutarea în grafuri, și vom arăta cum le-am făcut mai eficiente, astfel încât să puteți găsi mai ușor un bilet de avion ieftin sau indicații pe hartă către Winterfell sau un restaurant sau ceva de genul acesta.

### [Complexitatea de timp](Algorithms/Time%20Complexity/readme.md)
Complexitatea de timp a unui algoritm estimează cât timp va folosi algoritmul pentru o anumită intrare. Ideea este de a reprezenta eficiența sub forma unei funcții al cărei parametru este dimensiunea intrării. Prin calcularea complexității temporale, putem determina dacă algoritmul este suficient de rapid fără a-l implementa.

### [Complexitatea spațială](Algorithms/Space%20Complexity/readme.md)
Complexitatea spațială se referă la cantitatea totală de spațiu de memorie pe care o utilizează un algoritm/program, inclusiv spațiul de valori de intrare pentru execuție. Calculați spațiul ocupat de variabilele dintr-un algoritm/program pentru a determina complexitatea spațială.

### [Sortare](Algorithms/Sorting/readme.md)
Sortarea este procesul de aranjare a unei liste de elemente într-o anumită ordine. De exemplu, dacă ați avea o listă de nume, ați putea dori să le sortați în ordine alfabetică. Alternativ, dacă ați avea o listă de numere, ați putea dori să le puneți în ordine de la cel mai mic la cel mai mare. Sortarea este o sarcină obișnuită, pe care o putem face în multe moduri diferite.

### [Căutare](Algorithms/Searching/readme.md)
Căutarea este un algoritm pentru găsirea unui anumit element țintă în interiorul unui container. Algoritmii de căutare sunt concepuți pentru a verifica un element sau pentru a prelua un element din orice structură de date în care este stocat.

### [Algoritmi pe bază de șiruri de caractere](Algorithms/String%20Based%20Algorithms/readme.md)
Strings are one of the most used and most important data structures in programming, this repository contains a few of the most used algorithms which help in faster searching time improving our code.

### [Căutare în grafuri](Algorithms/Graph/readme.md)
Căutarea în graf este procesul de căutare într-un graf pentru a găsi un anumit nod. Un graf este o structură de date care constă dintr-un set finit (și eventual mutabil) de vârfuri, noduri sau puncte, împreună cu un set de perechi neordonate ale acestor vârfuri pentru un graf neorientat sau un set de perechi ordonate pentru un graf dirijat. Aceste perechi sunt cunoscute sub numele de muchii, arce sau linii pentru un graf nedirijat și sub numele de săgeți, muchii dirijate, arce dirijate sau linii dirijate pentru un graf dirijat. Vârfurile pot face parte din structura grafului sau pot fi entități externe reprezentate prin indici sau referințe de numere întregi. Grafurile reprezintă una dintre cele mai utile structuri de date pentru multe aplicații din lumea reală. Grafurile sunt utilizate pentru a modela relații de tip pereche între obiecte. De exemplu, rețeaua de rute aeriene este un graf în care orașele sunt vârfurile, iar rutele de zbor sunt marginile. Grafurile sunt, de asemenea, utilizate pentru a reprezenta rețele. Internetul poate fi modelat ca un graf în care computerele sunt vârfurile, iar legăturile dintre computere sunt marginile. Grafurile sunt, de asemenea, utilizate în rețelele sociale precum LinkedIn și Facebook. Grafurile sunt utilizate pentru a reprezenta multe aplicații din lumea reală: rețele de calculatoare, proiectarea circuitelor și programarea aeronautică, pentru a numi doar câteva dintre acestea.

### [Programarea dinamică](Algorithms/Dynamic%20Programming/README.md)
Programarea dinamică este atât o metodă matematică de optimizare, cât și o metodă de programare pe calculator. Richard Bellman a dezvoltat această metodă în anii 1950 și a găsit aplicații în numeroase domenii, de la inginerie aerospațială la economie. În ambele contexte, se referă la simplificarea unei probleme complicate prin descompunerea acesteia în subprobleme mai simple într-o manieră recursivă. În timp ce unele probleme de decizie nu pot fi descompuse în acest mod, deciziile care se întind pe mai multe momente în timp se descompun adesea în mod recursiv. De asemenea, în informatică, dacă o problemă poate fi rezolvată în mod optim prin descompunerea ei în subprobleme și apoi prin găsirea recursivă a soluțiilor optime ale subproblemelor, atunci se spune că are o substructură optimă. Programarea dinamică este o modalitate de rezolvare a problemelor cu aceste proprietăți. Procesul de împărțire a unei probleme complicate în subprobleme mai simple se numește "divide și cucerește".

### [Algoritmi Greedy](Algorithms/Greedy%20Algorithm/readme.md)
Algoritmii Greedy sunt o clasă simplă și intuitivă de algoritmi care pot fi utilizați pentru a găsi soluția optimă pentru anumite probleme de optimizare. Se numesc Greedy (lacomi) deoarece, la fiecare pas, fac alegerea care pare cea mai bună în acel moment. Acest lucru înseamnă că algoritmii lacomi nu garantează că vor returna soluția optimă la nivel global, ci fac alegeri optime la nivel local în speranța de a găsi un optim global. Algoritmii greedy sunt utilizați pentru probleme de optimizare. O problemă de optimizare poate fi rezolvată cu ajutorul algoritmului Greedy dacă problema are următoarea proprietate: la fiecare pas, putem face o alegere care pare cea mai bună în acel moment și obținem soluția optimă pentru întreaga problemă.

### [Backtracking](Algorithms/Backtracking/README.md)
Backtracking este o tehnică algoritmică de rezolvare a problemelor în mod recursiv, prin încercarea de a construi o soluție în mod incremental, bucată cu bucată, eliminând acele soluții care nu reușesc să satisfacă constrângerile problemei la un moment dat (prin timp se înțelege aici timpul scurs până la atingerea oricărui nivel al arborelui de căutare).

### [Branch and Bound](Algorithms/Branch%20and%20Bound/README.md)
Branch and bound este o tehnică generală de rezolvare a problemelor de optimizare combinatorie. Este o tehnică de enumerare sistematică care reduce numărul de soluții candidate prin utilizarea structurii problemei pentru a elimina soluțiile candidate care nu pot fi optime.

### Time Complexity and Space Complexity of Different Searching and Sorting Algorithms <!-- TODO: Add page and link it here -->
**Complexitate temporală**: Se definește ca fiind numărul de ori de câte ori se așteaptă ca un anumit set de instrucțiuni să fie executat, mai degrabă decât timpul total necesar. Deoarece timpul este un fenomen dependent, complexitatea timpului poate varia în funcție de anumiți factori externi, cum ar fi viteza procesorului, compilatorul utilizat etc.

**Complexitatea spațială**: Reprezintă spațiul total de memorie consumat de program pentru execuția sa.

Ambele se calculează în funcție de mărimea intrării (n). Complexitatea de timp a unui algoritm se exprimă în notația big O.

Eficiența unui algoritm depinde de acești doi parametri.

Tipuri de complexitate de timp :

- *Cea mai bună complexitate în timp*: Intrarea pentru care algoritmul necesită mai puțin timp sau un timp minim. În cel mai bun caz, se calculează complexitatea de timp inferioară a unui algoritm. De exemplu: dacă datele care trebuie căutate sunt prezente în prima locație a unei matrice mari de date într-o căutare liniară, atunci apare cel mai bun caz.
- *Complexitatea medie a timpului*: Se iau toate intrările aleatorii și se calculează timpul de calcul pentru toate intrările. Apoi, îl împărțim la numărul total de intrări.
- *Complexitatea timpului cel mai prost*: Se definește intrarea pentru care algoritmul are nevoie de mult timp sau de timpul maxim. În cel mai rău caz, calculăm limita superioară a unui algoritm. Exemplu: Dacă datele care trebuie căutate sunt prezente în ultima locație a unei matrice mari de date într-un algoritm de căutare liniară, atunci apare cel mai rău caz.

Unele complexități temporale frecvent utilizate sunt :

- **O(1)**: Aceasta denotă timpul constant. O(1) înseamnă, de obicei, că un algoritm va avea un timp constant, indiferent de mărimea datelor de intrare. Hash Maps sunt exemple perfecte de timp constant.

- **O(log n)**: Aceasta denotă timpul logaritmic. O(log n) înseamnă că scade cu fiecare instanță pentru operații. Căutarea elementelor în arbori de căutare binară (Arbore de căutare binar - BST) este un bun exemplu de timp logaritmic.

- **O(n)**: Aceasta denotă un timp liniar. O(n) înseamnă că performanța este direct proporțională cu dimensiunea datelor de intrare. În termeni simpli, numărul de intrări și timpul necesar pentru a executa aceste intrări vor fi proporționale. Căutarea liniară în matrici este un exemplu excelent de complexitate în timp liniară.

- **O(n log n)**: This denotes polynomial time complexity. O(n log n) means that the performance is n times that of O(log n), (which is the worst-case complexity). A good example would be divided and conquer algorithms such as merge sort. This algorithm first divides the set, which takes O(log n) time, then conquers and sorts through the set, which takes O(n) time- therefore, Merge sort takes O(n log n) time.

- **O(n^2)**: Aceasta denotă un timp pătratic. O(n^2) înseamnă că performanța este direct proporțională cu pătratul numărului de intrări. Mai simplu, timpul de execuție va fi aproximativ de două ori mai mare decât pătratul mărimii intrării. Buclele imbricate sunt exemple perfecte de complexitate pătratică a timpului.

<table>
  <thead>
    <tr>
      <th rowspan="2">Algorithm</th>
      <th colspan="3">Time Complexity</th>
      <th>Spatial Complexity</th>
    </tr>
    <tr>
      <th>Best</th>
      <th>Average</th>
      <th>Worst</th>
      <th>Worst</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Selection Sort</td>
      <td>Ω(n^2)</td>
      <td>θ(n^2)</td>
      <td>O(n^2)</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Bubble Sort</td>
      <td>Ω(n)</td>
      <td>θ(n^2)</td>
      <td>O(n^2)</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Insertion Sort</td>
      <td>Ω(n)</td>
      <td>θ(n^2)</td>
      <td>O(n^2)</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Heap Sort</td>
      <td>Ω(n log(n))</td>
      <td>θ(n log(n))</td>
      <td>O(n log(n))</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Quick Sort</td>
      <td>Ω(n log(n))</td>
      <td>θ(n log(n))</td>
      <td>O(n^2)</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Merge Sort</td>
      <td>Ω(n log(n))</td>
      <td>θ(n log(n))</td>
      <td>O(n log(n))</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Bucket Sort</td>
      <td>Ω(n + k)</td>
      <td>θ(n + k)</td>
      <td>O(n^2)</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Radix Sort</td>
      <td>Ω(nk)</td>
      <td>θ(nk)</td>
      <td>O(nk)</td>
      <td>O(n + k)</td>
    </tr>
    <tr>
      <td>Count Sort</td>
      <td>Ω(n + k)</td>
      <td>θ(n + k)</td>
      <td>O(n + k)</td>
      <td>O(k)</td>
    </tr>
    <tr>
      <td>Shell Sort</td>
      <td>Ω(n log(n))</td>
      <td>θ(n log(n))</td>
      <td>O(n^2)</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Tim Sort</td>
      <td>Ω(n)</td>
      <td>θ(n log(n))</td>
      <td>O(n log(n))</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Tree Sort</td>
      <td>Ω(n log(n))</td>
      <td>θ(n log(n))</td>
      <td>O(n^2)</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Cube Sort</td>
      <td>Ω(n)</td>
      <td>θ(n log(n))</td>
      <td>O(n log(n))</td>
      <td>O(n)</td>
    </tr>
    <tr>
      <td>Linear Search</td>
      <td>Ω(1)</td>
      <td>θ(N)</td>
      <td>O(N)</td>
      <td>O(1)</td>
    </tr>
    <tr>
      <td>Binary Search</td>
      <td>Ω(1)</td>
      <td>θ(logN)</td>
      <td>O(logN)</td>
      <td>O(1)</td>
    </tr>
  </tbody>
</table>

## Alan Turing <!-- TODO: Add page and link it here -->
Alan Turing (născut la 23 iunie 1912, Londra, Anglia - decedat la 7 iunie 1954, Wilmslow, Cheshire) a fost un matematician și logician englez. A studiat la Universitatea din Cambridge și la Institutul pentru Studii Avansate din Princeton. În lucrarea sa de referință din 1936, "On Computable Numbers", a demonstrat că nu poate exista nicio metodă algoritmică universală de determinare a adevărului în matematică și că matematica va conține întotdeauna propoziții nehotărâte (spre deosebire de necunoscute). Această lucrare a introdus, de asemenea, mașina Turing. El credea că, în cele din urmă, computerele vor fi capabile să gândească la fel ca un om și a propus un test simplu (a se vedea testul Turing) pentru a evalua această capacitate. Lucrările sale pe această temă sunt recunoscute pe scară largă ca fiind la baza cercetării în domeniul inteligenței artificiale. În timpul celui de-al Doilea Război Mondial, a depus o muncă valoroasă în domeniul criptografiei, jucând un rol important în spargerea codului Enigma, folosit de Germania pentru comunicațiile radio. După război, a predat la Universitatea din Manchester și a început să lucreze la ceea ce astăzi este cunoscut sub numele de inteligență artificială. În mijlocul acestor lucrări revoluționare, Turing a fost găsit mort în patul său, otrăvit cu cianură. Moartea sa a survenit după ce a fost arestat pentru un act homosexual (pe atunci o infracțiune) și condamnat la 12 luni de terapie hormonală.

În 2009, în urma unei campanii publice, premierul britanic Gordon Brown a prezentat scuze publice oficiale în numele guvernului britanic pentru modul îngrozitor în care a fost tratat Turing. Regina Elisabeta a II-a a acordat o grațiere postumă în 2013. Termenul "legea Alan Turing" este folosit în prezent în mod informal pentru a se referi la o lege din 2017 din Regatul Unit care a grațiat retroactiv bărbați avertizați sau condamnați în temeiul legislației istorice care interzicea actele homosexuale.

Turing are o moștenire extinsă, cu statui ale sale și multe lucruri care îi poartă numele, inclusiv un premiu anual pentru inovații în domeniul informaticii. El apare pe actuala bancnotă de 50 de lire sterline a Băncii Angliei, care a fost lansată la 23 iunie 2021, pentru a coincide cu ziua sa de naștere. Un serial BBC din 2019, votat de public, l-a numit cea mai mare persoană a secolului XX.

## [Inginerie software](Software%20Engineering/readme.md)
Ingineria software este ramura informaticii care se ocupă cu proiectarea, dezvoltarea, testarea și întreținerea aplicațiilor software. Inginerii de software aplică principiile de inginerie și cunoștințele de limbaje de programare pentru a crea soluții software pentru utilizatorii finali.

Să analizăm diferitele definiții ale ingineriei software:

- IEEE, în standardul său 610.12-1990, definește ingineria software ca fiind aplicarea unei abordări sistematice, disciplinate, care este o abordare calculabilă pentru dezvoltarea, operarea și întreținerea software-ului.
- Fritz Bauer a definit-o ca fiind "stabilirea și utilizarea principiilor standard de inginerie. Aceasta vă ajută să obțineți software economic, fiabil și care funcționează eficient pe mașini reale.
- Boehm definește ingineria software ca implicând "aplicarea practică a cunoștințelor științifice la proiectarea și construirea creativă a programelor de calculator". De asemenea, include documentația asociată necesară pentru dezvoltarea, operarea și întreținerea acestora".

### Sarcini și responsabilități ale inginerului software
Inginerii de succes știu cum să folosească limbajele de programare, platformele și arhitecturile potrivite pentru a dezvolta orice, de la jocuri pe calculator la sisteme de control al rețelelor. Pe lângă faptul că își construiesc sistemele, inginerii de software testează, îmbunătățesc și întrețin software-ul construit de alți ingineri.

În acest rol, sarcinile dvs. de zi cu zi ar putea include următoarele:

- Proiectarea și întreținerea sistemelor software
- Evaluarea și testarea de noi programe software
- Optimizarea software-ului pentru viteză și scalabilitate
- Scrierea și testarea codului
- Consultanță cu clienții, inginerii, specialiștii în securitate și alte părți interesate
- Prezentarea de noi caracteristici părților interesate și clienților interni

### Fazele ingineriei software
Procesul de inginerie software implică mai multe faze, inclusiv colectarea cerințelor, proiectarea, implementarea, testarea și întreținerea. Urmând o abordare disciplinată a dezvoltării de software, inginerii de software pot crea software de înaltă calitate, care să răspundă nevoilor utilizatorilor săi.

- Prima fază a ingineriei software este colectarea cerințelor. În această fază, inginerul software lucrează cu clientul pentru a determina cerințele funcționale și nefuncționale ale software-ului. Cerințele funcționale descriu ceea ce ar trebui să facă software-ul, în timp ce cerințele nefuncționale descriu cât de bine ar trebui să facă acest lucru. Culegerea cerințelor este o fază critică, deoarece pune bazele întregului proces de dezvoltare software.

- După ce cerințele sunt colectate, următoarea fază este proiectarea. În această fază, inginerul software creează un plan detaliat pentru arhitectura și funcționalitatea software-ului. Acest plan include un document de proiectare software care specifică structura, comportamentul și interacțiunile software-ului cu alte sisteme. Documentul de proiectare a software-ului este esențial, deoarece servește drept proiect pentru faza de implementare.

- Faza de implementare este cea în care inginerul de software creează codul propriu-zis al software-ului. În această etapă, documentul de proiectare este transformat în software funcțional. Faza de implementare implică scrierea codului, compilarea acestuia și testarea lui pentru a se asigura că îndeplinește cerințele specificate în documentul de proiectare.

- Testarea este o fază critică în ingineria software. În această fază, inginerul software verifică dacă software-ul funcționează corect, este fiabil și ușor de utilizat. Aceasta implică mai multe tipuri de testare, inclusiv testarea unitară, testarea de integrare și testarea sistemului. Testarea se asigură că software-ul îndeplinește cerințele și funcționează conform așteptărilor.

- Ultima fază a ingineriei software este întreținerea. În această fază, inginerul software aduce modificări la software pentru a corecta erorile, a adăuga noi caracteristici sau a îmbunătăți performanța acestuia. Mentenanța este un proces continuu, care continuă pe toată durata de viață a software-ului.

### De ce este populară ingineria software?
- Informatică: Oferă fundamentul științific pentru software, deoarece ingineria electrică depinde în principal de fizică.
- Știința managementului: Ingineria software-ului necesită multă muncă și necesită control tehnic și managerial. Prin urmare, este utilizată pe scară largă în știința managementului.
- Economie: În acest sector, ingineria software vă ajută să estimați resursele și să controlați costurile. Trebuie dezvoltat un sistem de calcul, iar datele trebuie întreținute în mod regulat în cadrul unui anumit buget.
- Ingineria sistemelor: Majoritatea software-ului este o componentă a unui sistem mult mai mare. De exemplu, software-ul dintr-un sistem de monitorizare a industriei sau software-ul de zbor al unui avion. Metodele de inginerie software ar trebui să fie aplicate la studiul acestui tip de sistem.

## [Circuite integrate](Integrated%20Circuits/readme.md)
Un circuit integrat sau un circuit integrat monolit (denumit și circuit integrat, cip sau microcip) este un set de circuite electronice amplasate pe o mică bucată plată (sau "cip") de material semiconductor, de obicei siliciu. Multe MOSFET-uri mici (tranzistoare cu efect de câmp cu oxid metalic-semiconductor) se integrează într-un mic cip. Astfel, se obțin circuite care sunt cu câteva ordine de mărime mai mici, mai rapide și mai puțin costisitoare decât cele construite din componente electronice discrete. Capacitatea de producție în masă a circuitelor integrate, fiabilitatea și abordarea blocurilor de construcție pentru proiectarea circuitelor integrate au asigurat adoptarea rapidă a circuitelor integrate standardizate în locul tranzistoarelor discrete. În prezent, circuitele integrate sunt utilizate în aproape toate echipamentele electronice și au revoluționat lumea electronicii. Calculatoarele, telefoanele mobile și alte aparate electrocasnice sunt acum părți inextricabile ale structurii societăților moderne, fiind posibile datorită dimensiunilor mici și costului redus al circuitelor integrate, cum ar fi procesoarele și microcontrolerele moderne.

Integrarea la scară foarte mare a devenit practică datorită progreselor tehnologice în domeniul fabricării dispozitivelor semiconductoare MOS (metal-oxid-siliciu). De la începuturile lor din anii 1960, dimensiunea, viteza și capacitatea cipurilor au progresat enorm, datorită progreselor tehnice care permit să se potrivească din ce în ce mai mulți tranzistori MOS pe cipuri de aceeași dimensiune - un cip modern poate avea mai multe miliarde de tranzistori MOS pe o suprafață de mărimea unei unghii umane. Aceste progrese, care urmează aproximativ legea lui Moore, fac ca cipurile de calculator de astăzi să posede o capacitate de milioane de ori mai mare și o viteză de mii de ori mai mare decât cipurile de calculator de la începutul anilor 1970.

Circuitele integrate au două avantaje principale față de circuitele discrete: costul și performanța. Costul este scăzut deoarece cipurile, cu toate componentele lor, sunt imprimate ca o unitate prin fotolitografie, în loc să fie construite tranzistor cu tranzistor. În plus, circuitele integrate împachetate utilizează mult mai puțin material decât circuitele discrete. Performanța este ridicată, deoarece componentele circuitelor integrate comută rapid și consumă relativ puțină energie datorită dimensiunilor reduse și proximității lor. Principalul dezavantaj al circuitelor integrate este costul ridicat al proiectării acestora și al fabricării fotomascherelor necesare. Acest cost inițial ridicat înseamnă că circuitele integrate sunt viabile din punct de vedere comercial numai atunci când se anticipează volume mari de producție.

### Tipuri
Distribuitorii moderni de componente electronice deseori subcategorizează în continuare circuitele integrate:

- Circuitele integrate digitale sunt clasificate ca fiind circuite integrate logice (cum ar fi microprocesoarele și microcontrolerele), cipuri de memorie (cum ar fi memoria MOS și memoria cu poarta flotantă), circuite integrate de interfață (schimbătoare de nivel, serializator/deserializator etc.), circuite integrate de gestionare a energiei și dispozitive programabile.
- Circuitele integrate analogice sunt clasificate ca fiind circuite integrate liniare și circuite RF (circuite de radiofrecvență).
- Circuitele integrate cu semnal mixt sunt clasificate ca fiind circuite integrate de achiziție de date (convertoare A/D, convertoare D/A și potențiometre digitale), circuite integrate de ceas/timerizare, circuite cu condensator comutat (SC) și circuite RF CMOS.
- Circuitele integrate tridimensionale (circuite integrate 3D) sunt clasificate în circuite integrate cu trecere prin siliciu (TSV) și circuite integrate cu conexiune Cu-Cu.

## [Programare orientată pe obiecte](Object%20Oriented%20Programming/readme.md)
Programarea orientată pe obiecte este o paradigmă fundamentală de programare care se bazează pe conceptele de obiecte și date.

Este modul standard de codare pe care fiecare programator trebuie să îl respecte pentru o mai bună lizibilitate și reutilizare a codului.

### * Există patru concepte de bază ale programării orientate pe obiecte:
- Abstractizare
- Încapsulare
- Moștenirea
- Polimorfism 

Citiți mai multe despre aceste concepte de POO [aici](Object%20Oriented%20Programming/readme.md)

## [Programarea funcțională](Functional%20Programming/readme.md)
În informatică, programarea funcțională este o paradigmă de programare în care programele sunt construite prin aplicarea și compunerea de funcții. Este o paradigmă de programare declarativă, în care definițiile funcțiilor sunt mai degrabă arbori de expresii care mapează valori cu alte valori, decât o secvență de instrucțiuni imperative care actualizează starea de funcționare a programului.

În programarea funcțională, funcțiile sunt tratate ca cetățeni de primă clasă, ceea ce înseamnă că ele pot fi legate la nume (inclusiv identificatori locali), pot fi transmise ca argumente și pot fi returnate de alte funcții, la fel ca orice alt tip de date. Acest lucru permite ca programele să fie scrise într-un stil declarativ și componibil, în care funcțiile mici sunt combinate în mod modular.

Programarea funcțională este uneori tratată ca sinonimă cu programarea pur funcțională, un subansamblu al programării funcționale care tratează toate funcțiile ca funcții matematice deterministe, sau funcții pure. Atunci când o funcție pură este apelată cu anumite argumente date, aceasta va returna întotdeauna același rezultat și nu poate fi afectată de nicio stare mutabilă sau de alte efecte secundare. Acest lucru este în contrast cu procedurile impure, comune în programarea imperativă, care pot avea efecte secundare (cum ar fi modificarea stării programului sau preluarea de date de la un utilizator). Susținătorii programării pur funcționale susțin că, prin restricționarea efectelor secundare, programele pot avea mai puține erori, pot fi mai ușor de depanat și de testat și sunt mai potrivite pentru procedurile de verificare formală.

Programarea funcțională își are rădăcinile în mediul academic, evoluând din calculul lambda, un sistem formal de calcul bazat doar pe funcții. Programarea funcțională a fost, din punct de vedere istoric, mai puțin populară decât programarea imperativă, dar multe limbaje funcționale sunt utilizate în prezent în industrie și în educație.

Câteva exemple de limbaje de programare funcționale sunt:
- <a href="https://lisp-lang.org/"> Common Lisp </a>
- <a href="https://www.scheme.org/"> Scheme </a>
- <a href="https://racket-lang.org/"> Racket </a>
- <a href="https://www.erlang.org/"> Erlang </a>
- <a href="https://www.haskell.org/"> Haskell </a>
- <a href="https://fsharp.org/"> F# </a>
- <a href="https://cs.lmu.edu/~ray/notes/introml/"> ML </a> 

Programarea funcțională derivă din punct de vedere istoric din *lambda calculus*. Calculul lambda este un cadru dezvoltat de Alonzo Church pentru a studia calculele cu funcții. Acesta este adesea numit "cel mai mic limbaj de programare din lume". Acesta oferă o definiție a ceea ce este calculabil și ceea ce nu este. Este echivalent cu o mașină Turing în ceea ce privește capacitatea sa de calcul și orice lucru calculabil cu ajutorul calculului lambda, la fel ca orice lucru calculabil cu ajutorul unei mașini Turing, este calculabil. Oferă un cadru teoretic pentru descrierea funcțiilor și a evaluărilor acestora.

Unele concepte esențiale ale programării funcționale sunt:
- Funcții pure 
- Recursivitate
- Transparența referențială
- Funcții ca funcții de primă clasă și funcții de ordin superior
- Variabilele sunt imuabile.

**Funcții pure**: Aceste funcții au două proprietăți principale. În primul rând, ele produc întotdeauna același rezultat pentru aceleași argumente, indiferent de orice altceva. În al doilea rând, nu au efecte secundare, adică nu modifică niciun argument sau variabilă locală/globală.
sau fluxuri de intrare/ieșire. Această ultimă proprietate se numește *imutabilitate*. Singurul rezultat al funcției pure este valoarea pe care o returnează. Ele sunt deterministe. Programele realizate cu ajutorul programării funcționale sunt ușor de depanat, deoarece nu au efecte secundare sau I/O ascunse. De asemenea, funcțiile pureì facilitează scrierea de aplicații paralele/concurente. Atunci când codul este scris în acest stil, un compilator inteligent poate face multe lucruri- poate paraleliza instrucțiunile, poate aștepta să evalueze rezultatele până când este necesar și poate memora rezultatele, deoarece rezultatele nu se schimbă niciodată atâta timp cât intrarea nu se schimbă. Iată un exemplu simplu de funcție pură în Python:

```python
def suma(x ,y): # suma este o funcție care ia ca argumente x și y
    return x + y  # returnează x + y fără a modifica valoarea
 ```

**Recursie**: Nu există bucle "for" sau "while" în limbajele de programare pur funcționale. Iterarea este implementată prin recursivitate. Funcțiile recursive se apelează pe ele însele în mod repetat până când se ajunge la un caz de bază. Iată un exemplu simplu de funcție recursivă în C:

```c
int fib(n) {
  if(n <= 1)
    return 1;
   else
     return (fib(n-1) + fib(n-2));
}
 ```
**Transparență referențială**: În programele funcționale, variabilele odată definite nu își schimbă valoarea pe parcursul programului.
Programele funcționale nu au instrucțiuni de atribuire. Dacă trebuie să stocăm o valoare, definim o nouă variabilă. Acest lucru elimină orice șansă de efecte secundare, deoarece orice variabilă poate fi înlocuită cu valoarea sa reală în orice moment al execuției. Starea oricărei variabile este constantă în orice moment. Exemplu:
 
```bash
x = x + 1 # aceasta a schimbat valoarea atribuită variabilei x
          # prin urmare, expresia NU este transparentă din punct de vedere referențial
```

**Funcțiile sunt de primă clasă și pot fi de ordin superior**: Funcțiile de primă clasă sunt tratate ca variabile de primă clasă. Variabilele de primă clasă pot fi transmise funcțiilor ca parametri, pot fi returnate de funcții sau stocate în structuri de date.
         
O combinație de aplicații de funcții poate fi definită folosind o formă LISP numită **funcall**, care ia ca argumente o funcție și o serie de argumente și aplică funcția respectivă la aceste argumente:

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

Funcția **filter** aplică testul la primul element al listei. În cazul în care testul returnează o valoare diferită de zero, elementul este transformat în rezultatul filtrului aplicat la cdr-ul listei; în caz contrar, se returnează doar cdr-ul filtrat. Această funcție poate fi utilizată cu diferite predicte transmise ca parametri pentru a efectua o varietate de sarcini de filtrare:

```Lisp
> (filter '(1 3 -9 5 -2 -7 6) #'plusp)   ; filtrează toate numerele negative   
;;; Rezultat: (1 3 5 6)
```
```Lisp
> (filter '(1 2 3 4 5 6 7 8 9) #'evenp)   ; filtrează toate numerele impare
;;; Rezultat: (2 4 6 8)
```

și așa mai departe.

**Variabilele sunt imuabile**: În programarea funcțională, nu putem modifica o variabilă după ce a fost inițializată.
Putem crea variabile noi, dar nu putem modifica variabilele existente, iar acest lucru ajută foarte mult la menținerea stării pe toată durata de execuție a unui program. Odată ce am creat o variabilă și i-am stabilit valoarea, putem avea încredere deplină în faptul că valoarea acelei variabile nu se va schimba niciodată.

## [Sisteme de operare](Operating%20Systems/readme.md)
Un sistem de operare (sau, pe scurt, OS) acționează ca un intermediar între un utilizator de calculator și hardware-ul acestuia. Scopul unui sistem de operare este de a oferi un mediu în care utilizatorul poate executa programe în mod convenabil și eficient.
Un sistem de operare este un software care gestionează hardware-ul calculatorului. Hardware-ul trebuie să furnizeze mecanisme adecvate pentru a asigura funcționarea corectă a sistemului informatic și pentru a împiedica programele utilizatorului să interfereze cu buna funcționare a sistemului.
O definiție și mai frecventă este aceea că sistemul de operare este singurul program care rulează în permanență pe calculator (numit de obicei nucleu), toate celelalte fiind programe de aplicație.

Sistemele de operare pot fi privite din două puncte de vedere: administratorii de resurse și mașinile extinse. Din punctul de vedere al administratorului de resurse, sarcina sistemului de operare este de a gestiona eficient diferitele părți ale sistemului. Din punctul de vedere al mașinilor extinse, sarcina sistemului este de a oferi utilizatorilor abstracțiuni care sunt mai convenabile de utilizat decât mașina propriu-zisă. Printre acestea se numără procesele, spațiile de adrese și fișierele. Sistemele de operare au o istorie îndelungată, de la momentul în care au înlocuit operatorul până la sistemele moderne de multiprogramare. Printre cele mai importante se numără primele sisteme batch, sistemele multiprogramare și sistemele de calculatoare personale. Deoarece sistemele de operare interacționează îndeaproape cu hardware-ul, unele cunoștințe de hardware sunt utile pentru înțelegerea acestora. Calculatoarele sunt alcătuite din procesoare, memorii și dispozitive de intrare/ieșire. Aceste părți sunt conectate prin intermediul unor magistrale. Conceptele de bază pe care sunt construite toate sistemele de operare sunt procesele, gestionarea memoriei, gestionarea I/O, sistemul de fișiere și securitatea. Inima oricărui sistem de operare este reprezentată de setul de apeluri de sistem pe care le poate gestiona. Acestea spun ce face sistemul de operare.

### Sistemul de operare ca manager de resurse
Sistemul de operare gestionează toate componentele unui sistem complex. Calculatoarele moderne sunt formate din procesoare, memorii, cronometre, discuri, șoareci, interfețe de rețea, imprimante și o mare varietate de alte dispozitive. În perspectiva de jos în sus, sarcina sistemului de operare este de a asigura o alocare ordonată și controlată a procesoarelor, memoriilor și dispozitivelor I/O între diferitele programe care le doresc. Sistemele de operare moderne permit ca mai multe programe să se afle în memorie și să ruleze simultan. Imaginați-vă ce s-ar întâmpla dacă trei programe care rulează pe un anumit calculator ar încerca să își tipărească simultan rezultatele pe aceeași imprimantă. Rezultatul ar fi un haos total. Sistemul de operare poate pune ordine în acest haos potențial prin stocarea în buffer a tuturor ieșirilor destinate imprimantei pe disc. Atunci când un program a terminat, sistemul de operare poate copia ieșirea sa din fișierul de pe disc în care a fost stocat pentru imprimantă, în timp ce, în același timp, celălalt program poate continua să genereze mai multe ieșiri, fără să țină cont de faptul că ieșirea nu va fi trimisă (încă) la imprimantă. Atunci când un calculator (sau o rețea) are mai mulți utilizatori, necesitatea de a gestiona și proteja memoria, dispozitivele de intrare/ieșire și alte resurse este și mai mare, deoarece utilizatorii ar putea altfel să interfereze unii cu alții. În plus, utilizatorii trebuie adesea să partajeze nu numai hardware, ci și informații (fișiere, baze de date etc.). Pe scurt, această viziune a sistemului de operare susține că sarcina principală a acestuia este de a ține evidența programelor care utilizează fiecare resursă, de a acorda cererile de resurse, de a contabiliza utilizarea și de a media cererile conflictuale ale diferitelor programe și utilizatori.

### Sistemul de operare ca o mașină extinsă
Arhitectura majorității calculatoarelor la nivelul limbajului de mașină este primitivă și dificil de programat, în special pentru intrare/ieșire. Pentru a face acest aspect mai concret, luați în considerare discurile hard disk moderne SATA (Serial ATA) utilizate pe majoritatea computerelor. Ce ar trebui să știe un programator pentru a utiliza discul. De atunci, interfața a fost revizuită de mai multe ori și este mai complicată decât era în 2007. Niciun programator sănătos la cap nu ar vrea să se ocupe de acest disc la nivel hardware. În schimb, un software numit driver de disc se ocupă de hardware și oferă o interfață pentru citirea și scrierea blocurilor de disc, fără a intra în detalii. Sistemele de operare conțin multe drivere pentru controlul dispozitivelor de I/O. Dar chiar și acest nivel este mult prea scăzut pentru majoritatea aplicațiilor. Din acest motiv, toate sistemele de operare oferă un alt nivel de abstractizare pentru utilizarea discurilor: fișierele. Utilizând această abstracțiune, programele pot crea, scrie și citi fișiere fără a se ocupa de detaliile complicate ale modului în care funcționează hardware-ul. Această abstractizare este cheia pentru a gestiona toată această complexitate. Abstracțiile bune transformă o sarcină aproape imposibilă în două sarcini ușor de gestionat. Prima constă în definirea și implementarea abstracțiilor. Cea de-a doua constă în utilizarea acestor abstracțiuni pentru a rezolva problema în cauză.

### History of Operating Systems
- **Prima generație (1945-55)**: După eforturile dezastruoase ale lui Babbage, s-au înregistrat puține progrese în construirea calculatoarelor digitale până în perioada celui de-al Doilea Război Mondial. La Universitatea de Stat din Iowa, profesorul John Atanasoff și studentul său absolvent Clifford Berry au creat ceea ce astăzi este recunoscut ca fiind primul calculator digital operațional. Konrad Zuse din Berlin a construit calculatorul Z3 folosind relee electromecanice în aceeași perioadă. Mark I a fost creat de Howard Aiken de la Harvard, Colossus de o echipă de oameni de știință de la Bletchley Park din Anglia, iar ENIAC de William Mauchley și doctorandul său J. Presper Eckert de la Universitatea din Pennsylvania în 1944.

- **A doua generație (1955-65)**: Inventarea tranzistorului la mijlocul anilor 1950 a schimbat radical situația. Calculatoarele au devenit suficient de fiabile pentru a putea fi fabricate și vândute clienților plătitori, presupunând că vor continua să funcționeze suficient de mult timp pentru a desfășura o activitate semnificativă. Mainframe-urile, așa cum sunt cunoscute acum aceste mașini, erau ținute închise în săli de calculatoare uriașe, deosebit de bine climatizate, cu echipe de operatori calificați pentru a le gestiona. Doar întreprinderile uriașe, entitățile guvernamentale semnificative sau instituțiile își puteau permite să plătească un preț de câteva milioane de dolari.

- **A treia generație (1965-80)**: În comparație cu calculatoarele din a doua generație, care erau construite din tranzistori individuali, IBM 360 a fost prima linie majoră de calculatoare care a utilizat circuite integrate (la scară mică). Ca urmare, a oferit un avantaj semnificativ în ceea ce privește prețul și performanța. A fost un succes instantaneu, iar toți ceilalți mari producători au adoptat rapid conceptul unei familii de calculatoare interoperabile. Toate programele software, inclusiv sistemul de operare OS/360, trebuiau să fie compatibile cu toate modelele din proiectul inițial. Trebuia să funcționeze pe sisteme masive, care înlocuiau frecvent 7094-urile pentru calcule grele și prognoze meteo, și pe sisteme mici, care adesea înlocuiau doar 1401-urile pentru transferul de carduri pe bandă. Atât sistemele cu puține periferice, cât și cele cu multe periferice trebuiau să funcționeze bine cu el. Trebuia să funcționeze atât în mediul profesional, cât și în cel academic. Mai presus de toate, trebuia să fie eficient pentru fiecare dintre aceste numeroase aplicații.

- **A patra generație (1980-prezent)**: Era calculatoarelor personale a început odată cu crearea circuitelor LSI (Large Scale Integration), procesoare cu mii de tranzistori pe un centimetru pătrat de siliciu. Deși computerele personale, cunoscute inițial sub numele de microcalculatoare, nu s-au schimbat semnificativ în arhitectură față de minicalculatoarele din clasa PDP-11, acestea diferă semnificativ în ceea ce privește prețul.

- **A cincea generație (1990-prezent)**: Oamenii au tânjit după un gadget portabil de comunicare încă de când detectivul Dick Tracy din benzile desenate din anii 1940 a început să converseze cu "ceasul său de mână cu radio cu două căi". În 1946, a debutat un adevărat telefon mobil, care cântărea aproximativ 40 de kilograme. Primul telefon portabil adevărat a debutat în anii 1970 și era incredibil de ușor, având aproximativ un kilogram. A fost denumit în glumă "cărămida". În curând, toată lumea a cerut cu insistență unul.

### Funcțiile unui sistem de operare
- **Conveniență**: Un sistem de operare face ca un calculator să fie mai ușor de utilizat.
- **Eficiență**: Un sistem de operare permite utilizarea eficientă a resurselor sistemului informatic.
- **Abilitatea de a evolua**: Un sistem de operare ar trebui să fie construit astfel încât să permită dezvoltarea, testarea ș i introducerea eficientă a unor noi funcții de sistem în acelaș i timp, fără a interfera cu serviciul.
- **Trasmitere**: Un sistem de operare ar trebui construit astfel încât să poată oferi un randament maxim (numărul de sarcini pe unitate de timp).

### Funcționalități majore ale unui sistem de operare
- **Gestionarea resurselor**: Atunci când sistemul de operare are acces paralel, adică atunci când mai mulți utilizatori accesează sistemul, sistemul de operare funcționează ca un manager de resurse. Responsabilitatea sa este de a furniza hardware utilizatorului. Acesta scade sarcina în sistem.
- **Gestionarea proceselor**: Include diverse sarcini, cum ar fi programarea și terminarea procesului. Sistemul de operare gestionează diverse sarcini în același timp. Aici se întâmplă programarea CPU, ceea ce înseamnă că toate sarcinile vor fi realizate de numeroși algoritmi care se folosesc pentru programare.
- **Gestiunea spațiului de stocare**: Mecanismul sistemului de fișiere utilizat pentru gestionarea stocării. NIFS, CFS, CIFS, CIFS, NFS etc. sunt câteva sisteme de fișiere. Toate datele sunt stocate în diferite piste ale discurilor dure, care sunt gestionate de către managerul de stocare. Acesta include Hard Disk.
- **Gestionarea memoriei**: Se referă la gestionarea memoriei primare. Sistemul de operare trebuie să țină evidența câtă memorie a fost utilizată și de către cine. Trebuie să decidă care proces are nevoie de spațiu de memorie și cât de mult. De asemenea, sistemul de operare trebuie să aloce și să dezobișnuiască spațiul de memorie.
- **Gestionarea securității/privilegii**: Confidențialitatea este, de asemenea, asigurată de sistemul de operare prin utilizarea de parole, astfel încât aplicațiile neautorizate să nu poată accesa programe sau date. De exemplu, Windows utilizează autentificarea **_Kerberos_** pentru a preveni accesul neautorizat la date.

### Tipuri de sisteme de operare
- **Sistemul de operare de tip mainframe**: La limita superioară se află sistemele de operare pentru mainframe-uri, acele computere de mărimea unei camere care încă se mai găsesc în centrele de date ale marilor corporații. Aceste computere diferă de computerele personale în ceea ce privește capacitatea lor de I/O. Un mainframe cu 1000 de discuri și milioane de gigaocteți de date nu este neobișnuit; un computer personal cu aceste specificații ar fi invidiat de prieteni. De asemenea, mainframe-urile revin oarecum în actualitate ca servere Web de vârf, servere pentru site-uri de comerț electronic de mari dimensiuni și servere pentru tranzacții între întreprinderi. Sistemele de operare pentru mainframe-uri sunt puternic orientate spre procesarea mai multor lucrări deodată, majoritatea necesitând cantități prodigioase de I/O. Ele oferă de obicei trei tipuri de servicii: batch, procesare de tranzacții și partajare de timp.

- **Server OS**: Un nivel inferior este reprezentat de sistemele de operare pentru servere. Acestea rulează pe servere, care sunt fie calculatoare personale foarte mari, fie stații de lucru sau chiar mainframe-uri. Acestea deservesc mai mulți utilizatori în același timp printr-o rețea și permit utilizatorilor să partajeze resurse hardware și software. Serverele pot furniza servicii de imprimare, servicii de fișiere sau servicii web. Furnizorii de internet rulează multe mașini server pentru a-și susține clienții , iar site-urile web folosesc servere pentru a stoca pagini web și a gestiona cererile primite. Sistemele de operare tipice pentru servere sunt Solaris, FreeBSD, Linux și Windows Server 201x.

- **Sistemul de operare multiprocesor**: O modalitate din ce în ce mai frecventă de a obține o putere de calcul de primă ligă este conectarea mai multor unități centrale de procesare într-un singur sistem. În funcție de modul exact în care sunt conectate și de ceea ce se împarte, aceste sisteme se numesc calculatoare paralele, calculatoare multiple sau multiprocesoare. Ele au nevoie de sisteme de operare speciale, dar adesea acestea sunt variații ale sistemelor de operare pentru servere, cu caracteristici speciale pentru comunicare, conectivitate și coerență.

- **Sistemul de operare al computerului personal**: Următoarea categorie este sistemul de operare pentru calculatoare personale. Toate cele moderne suportă multiprogramarea, adesea cu zeci de programe pornite la pornire. Sarcina lor este de a oferi un sprijin bun unui singur utilizator. Acestea sunt utilizate pe scară largă pentru procesarea de text, foi de calcul, jocuri și acces la internet. Exemple comune sunt Linux, FreeBSD, Windows 7, Windows 8 și OS X de la Apple. Sistemele de operare pentru calculatoare personale sunt atât de cunoscute încât probabil că nu este nevoie de prea multă introducere. Mulți oameni nici măcar nu știu că există și alte tipuri.

- **Sistemul de operare încorporat**: Sistemele integrate rulează pe calculatoare care controlează dispozitive care nu sunt considerate în general calculatoare și nu acceptă software instalat de utilizator. Exemple tipice sunt cuptoarele cu microunde, televizoarele, mașinile, aparatele de înregistrare DVD, telefoanele tradiționale și playerele MP3. Principala proprietate care distinge sistemele încorporate de dispozitivele portabile este certitudinea că pe acestea nu va rula niciodată un software nesigur. Nu puteți descărca aplicații noi pe cuptorul cu microunde - toate programele sunt în ROM. Acest lucru înseamnă că nu este nevoie de protecție între aplicații, ceea ce simplifică proiectarea. Sisteme precum Embedded Linux, QNX și VxWorks sunt populare în acest domeniu.

- **Smart Card OS**: Cele mai mici sisteme de operare rulează pe dispozitive de carduri inteligente de mărimea unei cărți de credit cu cipuri CPU. Acestea au constrângeri foarte severe în ceea ce privește puterea de procesare și memoria. Unele sunt alimentate de contactele din cititorul în care sunt introduse, dar cardurile inteligente fără contact sunt alimentate prin inducție, ceea ce limitează foarte mult ceea ce pot face. Unele pot gestiona o singură funcție, cum ar fi plățile electronice, dar altele pot gestiona mai multe funcții. Adesea, acestea sunt sisteme brevetate. Unele carduri inteligente sunt orientate către Java. Aceasta înseamnă că ROM-ul de pe cardul inteligent conține un interpretor pentru Java Virtual Machine (JVM). Applet-urile Java (programe mici) sunt descărcate pe card și sunt interpretate de către interpretorul JVM. Unele dintre aceste carduri pot gestiona mai multe applet-uri Java în același timp, ceea ce duce la multiprogramare și la necesitatea de a le programa. Gestionarea și protecția resurselor devin, de asemenea, o problemă atunci când sunt prezente simultan două sau mai multe applet-uri. Aceste probleme trebuie să fie gestionate de sistemul de operare (de obicei extrem de primitiv) prezent pe card.

## [Memorie și stocare](Memory%20and%20Storage/readme.md)
### Memory
Termenul _memorie_ se referă la componenta din cadrul calculatorului care permite accesul la date pe termen scurt. Este posibil să recunoașteți această componentă ca DRAM sau memorie dinamică cu acces aleatoriu. Calculatorul dumneavoastră efectuează multe operații prin accesarea datelor stocate în memoria sa pe termen scurt. Unele exemple de astfel de operațiuni includ editarea unui document, încărcarea aplicațiilor și navigarea pe Internet. Viteza și performanța sistemului dumneavoastră depind de cantitatea de memorie instalată pe computer.

Dacă aveți un birou și un dulap de arhivă, biroul reprezintă memoria computerului dumneavoastră. Elementele pe care trebuie să le utilizați imediat sunt păstrate pe birou pentru a fi ușor de accesat. Cu toate acestea, nu se pot stoca prea multe lucruri pe un birou din cauza limitărilor de dimensiune.

### Unitate de stocare
În timp ce memoria se referă la locația datelor pe termen scurt, unitatea de stocare este componenta din cadrul computerului care vă permite să stocați și să accesați datele pe termen lung. De obicei, unitatea de stocarea vine sub forma unei unități de stocare solid-state sau a unui hard disk. Unitate de stocare găzduiește aplicațiile, sistemul de operare și fișierele dumneavoastră pe termen nelimitat. Calculatoarele trebuie să citească și să scrie informații din sistemul de stocare, astfel încât viteza de stocare determină cât de repede poate porni sistemul dvs. să pornească, să încarce și să acceseze ceea ce ați salvat.

În timp ce biroul reprezintă memoria computerului, dulapul de arhivare reprezintă stocarea computerului dumneavoastră. Acesta conține elemente care trebuie salvate și stocate, dar nu este neapărat necesar pentru acces imediat. Dimensiunea dulapului de arhivare înseamnă că poate conține multe lucruri.

**O distincție importantă** între memorie și unitatea de stocare este că memoria se șterge atunci când calculatorul este oprit. Pe de altă parte, unitatea de stocarea rămâne intactă indiferent de cât de des opriți calculatorul. Prin urmare, în analogia cu biroul și dulapul de arhivare, orice dosar lăsat pe birou va fi aruncat când plecați de la birou. Tot ceea ce se află în dulapul de arhivare va rămâne.

### Memorie virtuală
În centrul sistemelor informatice se află memoria, spațiul în care se execută programele și se stochează datele. Dar ce se întâmplă atunci când programele pe care le executați și datele cu care lucrați depășesc capacitatea fizică a memoriei computerului dumneavoastră? Aici intervine memoria virtuală, care acționează ca o extensie inteligentă a memoriei computerului dumneavoastră și îi sporește capacitățile.

**Definiția și scopul memoriei virtuale:**

Memoria virtuală este o tehnică de gestionare a memoriei utilizată de sistemele de operare pentru a depăși limitările memoriei fizice (RAM). Aceasta creează o iluzie pentru aplicațiile software că au acces la o cantitate de memorie mai mare decât cea instalată fizic pe computer. În esență, permite programelor să utilizeze spațiul de memorie dincolo de limitele RAM-ului fizic al computerului.

Scopul principal al memoriei virtuale este de a permite o multitasking eficient și executarea de programe mai mari, menținând în același timp capacitatea de reacție a sistemului. Ea realizează acest lucru prin crearea unei interacțiuni transparente între memoria RAM fizică și dispozitivele de stocare secundare, cum ar fi hard disk-ul sau SSD-ul.

**Cum extinde memoria virtuală memoria fizică disponibilă:**

Gândiți-vă la memoria virtuală ca la o punte de legătură între memoria RAM a computerului dumneavoastră și memoria secundară (unități de disc). Atunci când executați un program, părți din acesta sunt încărcate în memoria fizică mai rapidă (RAM). Cu toate acestea, nu toate părțile programului pot fi utilizate imediat.

Memoria virtuală exploatează această situație prin mutarea secțiunilor din program care nu sunt utilizate în mod activ din RAM în memoria secundară, creând mai mult spațiu în RAM pentru părțile care sunt utilizate în mod activ. Acest proces este transparent pentru utilizator și pentru programele care rulează. Atunci când părțile mutate sunt din nou necesare, acestea sunt schimbate înapoi în RAM, în timp ce alte părți mai puțin active pot fi mutate în memoria secundară.

Acest schimb dinamic de date în și din memoria fizică este gestionat de sistemul de operare. Aceasta permite programelor să ruleze chiar dacă sunt mai mari decât memoria RAM disponibilă, deoarece sistemul de operare decide în mod inteligent ce date trebuie să se afle în RAM pentru o performanță optimă.

Pe scurt, memoria virtuală acționează ca un strat de virtualizare care extinde memoria fizică disponibilă prin transferul temporar al unor părți de programe și date între memoria RAM și memoria secundară. Acest proces asigură faptul că computerul poate gestiona sarcini mai mari și numeroase programe simultan, menținând în același timp performanța și capacitatea de reacție eficiente.

## [Sistem de fișiere](File%20System/readme.md)
În informatică, un sistem de fișiere sau un sistem de fișiere (adesea abreviat fs) este o metodă și o structură de date pe care sistemul de operare le utilizează pentru a controla modul în care sunt stocate și recuperate datele. Fără un sistem de fișiere, datele plasate pe un mediu de stocare ar fi un singur corp mare de date, fără nicio modalitate de a spune unde se oprește o bucată de date și unde începe următoarea sau unde se află orice bucată de date atunci când este momentul să o recuperezi. Prin separarea datelor în bucăți și atribuirea unui nume fiecărei bucăți, datele sunt ușor de izolat și identificat. Luând numele de la modul în care este denumit un sistem de gestionare a datelor pe suport de hârtie, fiecare grup de date se numește "fișier". Structura și regulile logice utilizate pentru a gestiona grupurile de date și denumirile acestora se numesc "sistem de fișiere".

Există mai multe tipuri de sisteme de fișiere, fiecare având o structură și o logică unice, proprietăți de viteză, flexibilitate, securitate, dimensiune și altele. Unele sisteme de fișiere au fost concepute pentru a fi utilizate pentru aplicații specifice. De exemplu, sistemul de fișiere ISO 9660 este conceput special pentru discurile optice.

Sistemele de fișiere pot fi utilizate pe mai multe tipuri de dispozitive de stocare care utilizează diverse suporturi. Începând cu 2019, hard disk-urile au fost dispozitivele de stocare cheie și se preconizează că vor rămâne astfel în viitorul apropiat. Alte tipuri de suporturi care sunt utilizate includ SSD, benzi magnetice și discuri optice. În unele cazuri, cum ar fi cu tmpfs, memoria principală a computerului (memoria cu acces aleatoriu, RAM) creează un sistem de fișiere temporar pentru utilizare pe termen scurt.

Unele sisteme de fișiere sunt utilizate pe dispozitive locale de stocare a datelor; altele oferă acces la fișiere prin intermediul unui protocol de rețea (de exemplu, clienți NFS, SMB sau 9P). Unele sisteme de fișiere sunt "virtuale", ceea ce înseamnă că "fișierele" furnizate (numite fișiere virtuale) sunt calculate la cerere (cum ar fi procfs și sysfs) sau sunt doar o simplă cartografiere într-un alt sistem de fișiere utilizat ca stocare de rezervă. Sistemul de fișiere gestionează accesul atât la conținutul fișierelor, cât și la metadatele referitoare la aceste fișiere. Este responsabil de organizarea spațiului de stocare; fiabilitatea, eficiența și adaptarea la mediul fizic de stocare sunt considerente importante de proiectare.

### Cum funcționează sistemele de fișiere
Un sistem de fișiere stochează și organizează datele și poate fi considerat ca un tip de index pentru toate datele conținute într-un dispozitiv de stocare. Aceste dispozitive pot include hard disk-uri, unități optice și unități flash.

Sistemele de fișiere specifică convenții pentru denumirea fișierelor, inclusiv numărul maxim de caractere într-un nume, ce caractere pot fi folosite și, în unele sisteme, cât de lung poate fi sufixul numelui de fișier. În multe sisteme de fișiere, numele de fișiere nu fac distincție între majuscule și minuscule.

Alături de fișierul în sine, sistemele de fișiere conțin în metadate informații precum dimensiunea fișierului și atributele, locația și ierarhia acestuia în director. Metadatele pot identifica, de asemenea, blocurile libere de stocare disponibile pe unitate și cât spațiu este disponibil.

Un sistem de fișiere include, de asemenea, un format pentru a specifica calea de acces la un fișier prin intermediul structurii de directoare. Un fișier este plasat într-un director - sau într-un dosar în sistemul de operare Windows - sau într-un subdirectoriu în locul dorit în structura arborescentă. Sistemele de operare pentru PC și mobile au sisteme de fișiere în care fișierele sunt plasate într-o structură arborescentă ierarhică.

Înainte de crearea fișierelor și directoarelor pe suportul de stocare, trebuie să se pună la punct partițiile. O partiție este o regiune a discului dur sau a altei unități de stocare pe care sistemul de operare o gestionează separat. Partiția principală conține un sistem de fișiere, iar unele sisteme de operare permit existența mai multor partiții pe un singur disc. În această situație, dacă un sistem de fișiere este corupt, datele dintr-o altă partiție vor fi în siguranță.

### Tipuri de sisteme de fișiere
Există mai multe tipuri de sisteme de fișiere, toate cu structuri logice și proprietăți diferite, cum ar fi viteza și dimensiunea. Tipul de sistem de fișiere poate diferi în funcție de sistemul de operare și de nevoile acestuia. Microsoft Windows, Mac OS X și Linux sunt cele mai comune trei sisteme de operare pentru PC. Sistemele de operare mobile includ Apple iOS și Google Android.

Principalele sisteme de fișiere includ următoarele:

- Tabela de alocare a fișierelor (FAT) este suportată de sistemul de operare Microsoft Windows. FAT este considerat simplu și fiabil și este modelat după sistemele de fișiere vechi. FAT a fost proiectat în 1977 pentru dischete, dar a fost adaptat ulterior pentru discuri dure. Deși este eficient și compatibil cu majoritatea sistemelor de operare actuale, FAT nu poate egala performanța și scalabilitatea sistemelor de fișiere mai moderne.

- Global file system (GFS) este un sistem de fișiere pentru sistemul de operare Linux și este un sistem de fișiere pe disc partajat. GFS oferă acces direct la stocarea blocurilor de stocare partajată și poate fi utilizat ca sistem de fișiere local.

- GFS2 este o versiune actualizată cu caracteristici care nu au fost incluse în GFS original, cum ar fi un sistem de metadate actualizat. În conformitate cu termenii Licenței Publice Generale GNU, atât sistemul de fișiere GFS, cât și GFS2 sunt disponibile ca software liber.

- Sistemul de fișiere ierarhice (HFS) a fost dezvoltat pentru a fi utilizat cu sistemele de operare Mac. HFS poate fi numit și Mac OS Standard, căruia i-a succedat Mac OS Extended. Introdus inițial în 1985 pentru dischete și hard disk-uri, HFS a înlocuit sistemul de fișiere Macintosh original. Acesta poate fi utilizat și pe CD-ROM-uri.

- Sistemul de fișiere NT - cunoscut și sub numele de New Technology File System (NTFS) - este sistemul de fișiere implicit pentru produsele Windows începând cu sistemul de operare Windows NT 3.1. Îmbunătățirile față de precedentul sistem de fișiere FAT includ o mai bună susținere a metadatelor, performanță și utilizare a spațiului pe disc. NTFS este, de asemenea, suportat în sistemul de operare Linux prin intermediul unui driver NTFS gratuit, cu sursă deschisă. Sistemele de operare Mac au suport numai pentru NTFS în regim de citire.

- Universal Disk Format (UDF) este un sistem de fișiere neutru din punct de vedere al furnizorului pentru suporturi optice și DVD-uri. UDF înlocuiește sistemul de fișiere ISO 9660 și este sistemul de fișiere oficial pentru DVD-uri video și audio, așa cum a fost ales de DVD Forum.

## [Cloud Computing](Cloud%20Computing/Readme.md)
Cloud computing este capacitatea de a accesa informații și aplicații prin intermediul internetului. Cloud computing permite utilizatorilor să acceseze aplicații și date din orice locație cu o conexiune la internet.

Cloud computing este un tip de sistem de calcul bazat pe internet care oferă resurse de procesare și date partajate de calculatoare și alte dispozitive la cerere.

Este un model care permite accesul omniprezent, convenabil, la cerere, la un fond comun de resurse de calcul configurabile (de exemplu, rețele, servere, stocare, aplicații și servicii) care pot fi rapid puse la dispoziție și eliberate cu un efort de gestionare minim sau cu o interacțiune minimă din partea furnizorului de servicii.
 
## Principalele beneficii ale cloud computing
 
Cloud computing is a big shift from how businesses think about IT resources. Here are seven common reasons organizations are turning to cloud computing services:

***Cost:*** Cloud computing eliminates the capital expense of buying hardware and software and setting up and running on-site data centers—the racks of servers, the round-the-clock electricity for power and cooling, and the IT experts for managing the infrastructure. It adds up fast.

***Speed:*** Most cloud computing services are provided self-service and on demand, so even vast amounts of computing resources can be provisioned in minutes, typically with just a few mouse clicks, giving businesses a lot of flexibility and taking the pressure off capacity planning.

***Global scale:*** The benefits of cloud computing services include the ability to scale elastically. In cloud speak, that means delivering the right amount of IT resources—for example, more or less computing power, storage, and bandwidth—right when it is needed and from the right geographic location.

***Productivity:*** On-site data centers typically require a lot of "racking and stacking"—hardware setup, software patching, and other time-consuming IT management chores. Cloud computing removes the need for many of these tasks, so IT teams can spend time on achieving more important business goals.

***Performance:*** The biggest cloud computing services run on a worldwide network of secure data centers, which are regularly upgraded to the latest generation of fast and efficient computing hardware. This offers several benefits over a single corporate data center, including reduced network latency for applications and greater economies of scale.

***Reliability:*** Cloud computing makes data backup, disaster recovery, and business continuity easier and less expensive because data can be mirrored at multiple redundant sites on the cloud provider's network.

***Security:*** Many cloud providers offer a broad set of policies, technologies, and controls that strengthen your security posture overall, helping protect your data, apps, and infrastructure from potential threats.

### Tipuri de servicii de cloud computing
- [Infrastructură ca serviciu (IaaS)](Cloud%20Computing/Readme.md#infrastructure-as-a-service-iaas)
- [Platforma ca serviciu (PaaS)](Cloud%20Computing/Readme.md#platform-as-a-service-paas)
- [Software ca serviciu (SaaS)](Cloud%20Computing/Readme.md#software-as-a-service-saas)

## Machine Learning <!-- TODO: Add page and link it here -->
Machine Learning este practica de a învăța un calculator să învețe. Conceptul folosește recunoașterea modelelor, precum și alte forme de algoritmi predictivi, pentru a face aprecieri asupra datelor primite. Acest domeniu este strâns legat de inteligența artificială și de statistica computațională.

### Există trei subcategorii de învățare automată:

### Machine Learning supreavegheat
În acest caz, modelele de învățare automată sunt antrenate cu seturi de date etichetate, care permit modelelor să învețe și să crească mai precis în timp. De exemplu, un algoritm ar fi antrenat cu imagini de câini și alte lucruri, toate etichetate de oameni, iar mașina ar învăța modalități de a identifica singură imagini de câini. Învățarea automatizată supravegheată este cel mai frecvent utilizat în prezent.

Aplicații practice ale învățării supravegheate:
1. **Bioinformatica:** Bioinformatica este studiul modului în care indivizii rețin cunoștințele biologice, cum ar fi amprentele digitale, textura ochilor, lobul urechii etc. În prezent, telefoanele mobile sunt suficient de inteligente pentru a ne înțelege datele biologice și apoi să ne verifice pentru a crește securitatea sistemului.
2. **Recunoașterea vorbirii: ** Este tipul de program în care poți transmite vocea ta către program, iar acesta te va identifica. Cele mai cunoscute gadgeturi din lumea reală sunt asistenții digitali, cum ar fi Google Assistant sau Siri, care răspund la termen doar cu vocea dumneavoastră.
3. **Detecția spam-ului:** Acest instrument este utilizat pentru a împiedica trimiterea de comunicări fictive sau bazate pe mașini. Gmail include un algoritm care învață numeroși termeni greșiți. Aplicația Oneplus Messages îi cere utilizatorului să precizeze ce termeni ar trebui să fie interziși, iar cuvântul cheie va împiedica astfel de texte din aplicație.
4. **Recunoașterea obiectelor:** Acest tip de software este utilizat atunci când trebuie să definiți ceva. Aveți un set mare de date pe care îl utilizați pentru a antrena algoritmul, iar acesta poate recunoaște un nou obiect folosind acest lucru.

### Machine learning nesupravegheat
În cazul la machine learning nesupravegheat, un program caută tipare în datele neetichetate. Machine learning nesupravegheat poate găsi tipare sau tendințe pe care oamenii nu le caută în mod explicit. De exemplu, un program de învățare automată nesupravegheată ar putea examina datele de vânzări online și identifica diferite tipuri de clienți care fac achiziții.

Aplicații practice ale învățării nesupravegheate:
1. **Clustering:** Clusterizarea este procesul de clasificare a datelor în grupuri separate. Atunci când nu cunoaștem toate detaliile despre clustere, putem utiliza învățarea nesupravegheată pentru a le grupa. Învățarea nesupravegheată este utilizată pentru a analiza și organiza datele care nu au clase sau proprietăți de clasă pre-etichetate. Clusterizarea poate ajuta firmele să își gestioneze mai eficient datele. Să presupunem că aveți un canal YouTube. Este posibil să aveți o mulțime de informații despre abonații dvs. Dacă doriți să găsiți abonați similari, ar trebui să utilizați o tehnică de clusterizare.
2. **Vizualizare:** Procesul de realizare a diagramelor, fotografiilor, graficelor, diagramelor și așa mai departe pentru a prezenta informații este cunoscut sub numele de vizualizare. Învățarea automată nesupravegheată poate fi utilizată pentru a implementa această strategie. Să presupunem că sunteți un antrenor de crichet și că aveți informații referitoare la performanța echipei dvs. într-un turneu. S-ar putea să doriți să localizați rapid toate statisticile meciului. Puteți transmite datele neetichetate și complicate către un algoritm de vizualizare.
3. **Detectarea anomaliilor:** Detectarea anomaliilor este descoperirea de lucruri, evenimente sau observații neobișnuite care ridică suspiciuni prin faptul că se abat foarte mult de la datele obișnuite. În această situație, sistemul este programat cu un număr mare de cazuri tipice. Ca urmare, atunci când detectează un eveniment neașteptat, poate determina dacă este vorba de o anomalie sau nu. Detectarea fraudelor cu carduri de credit este o bună ilustrare a acestui caz. În prezent, această problemă este abordată prin utilizarea unor abordări de detectare a anomaliilor prin învățare automată nesupravegheată. Pentru a evita frauda, sistemul identifică tranzacțiile neașteptate cu cardul de credit.

### Machine learning semi-supervizată
Dezavantajul învățării supravegheate este că necesită etichetarea manuală de către specialiști în ML sau cercetători de date și necesită un cost ridicat pentru procesare. Învățarea nesupravegheată are, de asemenea, un spectru limitat pentru aplicațiile sale. Pentru a depăși aceste dezavantaje ale învățării supravegheate și ale algoritmilor de învățare nesupravegheată, se introduce conceptul de învățare semisupravegheată. În mod obișnuit, această combinație conține o cantitate foarte mică de date etichetate și o cantitate mare de date neetichetate. Procedura de bază implicată constă în faptul că, mai întâi, programatorul va grupa datele similare folosind un algoritm de învățare nesupravegheată și apoi va utiliza datele etichetate existente pentru a eticheta restul datelor neetichetate.

Aplicații practice ale învățării semi-supervizate:
1. **Analiza vorbirii:** Deoarece etichetarea fișierelor audio este o sarcină foarte intensivă, învățarea semisupravegheată este o abordare foarte naturală pentru a rezolva această problemă.
2. **Conținut de internet:** Clasificare: Etichetarea fiecărei pagini web este un proces nepractic și nefezabil și, prin urmare, utilizează algoritmi de învățare semi-supervizată. Chiar și algoritmul de căutare Google utilizează o variantă de învățare semi-supervizată pentru a clasifica relevanța unei pagini web pentru o anumită interogare.
3. **Clasificarea secvențelor de proteine:** Deoarece șirurile de ADN sunt de obicei foarte mari, ascensiunea învățării semi-supervizate a fost iminentă în acest domeniu.

### Reinforcement machine learning
Aceasta antrenează mașinile prin încercări și erori pentru a întreprinde cea mai bună acțiune prin stabilirea unui sistem de recompense. Reinforcement learning poate antrena modele pentru a juca jocuri sau pentru a antrena vehicule autonome pentru a conduce, spunându-i mașinii când a luat deciziile corecte, ceea ce o ajută să învețe în timp ce acțiuni ar trebui să întreprindă.

Aplicații practice ale învățării prin întărire: 
1. **Sisteme de producție** 
   de exemplu, Google Cloud AutoML, Facebook Horizon, Recomandare, publicitate, căutare 
2. **Conducere autonomă**
3. **Managementul afacerilor** 
   de exemplu, rezolvarea problemei de rutare a vehiculelor, comportamentul fraudulos în comerțul electronic, învățarea prin întărire concomitentă din interacțiunile cu clienții
4. **Sisteme de recomandare**
   de exemplu, pentru căutare, recomandare și publicitate online
   
### Machine learning este, de asemenea, asociată cu alte câteva subdomenii ale inteligenței artificiale:

### Procesarea limbajului natural (NLP)

Procesarea limbajului natural este un domeniu al învățării automate în care mașinile învață să înțeleagă limbajul natural, așa cum este vorbit și scris de oameni, în locul datelor și numerelor utilizate în mod normal pentru programarea calculatoarelor. Acest lucru permite mașinilor să recunoască limbajul, să îl înțeleagă și să răspundă la el, precum și să creeze texte noi și să traducă între limbi. Prelucrarea limbajului natural permite tehnologii familiare precum chatbots și asistenți digitali precum Siri sau Alexa.

Aplicații practice ale NLP:
1. **Răspunsul la întrebări:** Răspunsul la întrebări se concentrează pe construirea de sisteme care răspund automat la întrebările adresate de oameni într-un limbaj natural. 
2. **Detecția spam-ului:** Detecția spam-ului este utilizată pentru a detecta e-mail-urile nedorite care ajung în căsuța de primire a unui utilizator.
3. **Analiza sentimentelor:** Analiza sentimentelor este cunoscută și sub numele de opinion mining. Este utilizată pe web pentru a analiza atitudinea, comportamentul și starea emoțională a expeditorului. Această aplicație este implementată printr-o combinație de NLP (Natural Language Processing) și statistică prin atribuirea de valori textului (pozitiv, negativ sau natural) și identificarea stării de spirit a contextului (fericit, trist, furios etc.).
4. **Traducerea automată:** Traducerea automată este utilizată pentru a traduce textul sau discursul dintr-o limbă naturală într-o altă limbă naturală. de exemplu, Google Translate
5. **Corecția ortografică:** Microsoft Corporation pune la dispoziție programe de procesare a textelor, precum MS-word și PowerPoint, pentru corectarea ortografică.

### Rețele neuronale

Rețelele neuronale sunt o clasă specifică de algoritmi de învățare automată, utilizată în mod obișnuit. Rețelele neuronale artificiale sunt modelate după modelul creierului uman, în care mii sau milioane de noduri de procesare sunt interconectate și organizate în straturi.

Într-o rețea neuronală artificială, celulele, sau nodurile, sunt conectate, fiecare celulă procesând intrările și producând o ieșire care este trimisă altor neuroni. Datele etichetate se deplasează prin noduri sau celule, fiecare celulă îndeplinind o funcție diferită. Într-o rețea neuronală antrenată pentru a identifica dacă o imagine conține sau nu o pisică, diferitele noduri ar evalua informațiile și ar ajunge la o ieșire care indică dacă o imagine conține sau nu o pisică.

Aplicații practice ale rețelelor neuronale:
1. **Predicția bursieră:** Pentru a face o predicție bursieră de succes în timp real, se utilizează un Perceptron multistrat MLP (clasă de algoritmi de inteligență artificială de tip feedforward). MLP cuprinde mai multe straturi de noduri, iar fiecare dintre aceste straturi este complet conectat la nodurile următoare. Performanțele anterioare ale acțiunilor, randamentele anuale și ratele non-profit sunt luate în considerare pentru construirea modelului MLP.
2. **Social Media:** Perceptronii cu mai multe straturi prognozează tendințele din social media. Acesta utilizează diferite metode de instruire, cum ar fi Eroarea medie absolută (MAE), Eroarea pătratică medie de rădăcină (RMSE) și Eroarea pătratică medie (MSE). MLP ia în considerare mai mulți factori, cum ar fi paginile preferate ale utilizatorului pe Instagram, opțiunile din favorite etc. După analizarea comportamentelor indivizilor prin intermediul rețelelor de socializare, datele pot fi legate de obiceiurile de cheltuieli ale oamenilor. MLP ANN este utilizat pentru a extrage date din aplicațiile social media.  
3. **Inginerie aerospațială:** Inginerie aerospațială este un termen expansiv care acoperă dezvoltările în domeniul navelor spațiale și al aeronavelor. Diagnosticarea defecțiunilor, pilotarea automată de înaltă performanță, securizarea sistemelor de control al aeronavelor și simulările dinamice cheie de modelare sunt câteva dintre domeniile cheie pe care rețelele neuronale le-au preluat. Rețelele neuronale cu întârziere în timp pot fi utilizate pentru modelarea sistemelor dinamice neliniare în timp.

### Deep learning

Rețelele de învățare profundă sunt rețele neuronale cu mai multe straturi. Rețeaua stratificată poate procesa cantități mari de date și poate determina "greutatea" fiecărei legături din rețea - de exemplu, într-un sistem de recunoaștere a imaginilor, unele straturi ale rețelei neuronale pot detecta caracteristici individuale ale unei fețe, cum ar fi ochii, nasul sau gura, în timp ce un alt strat ar putea spune dacă aceste caracteristici apar într-un mod care indică o față.

Aplicații practice ale învățării profunde:
1. **Generarea automată de text:** Se învață un corpus de text și, pornind de la acest model, se generează un text nou, cuvânt cu cuvânt sau caracter cu caracter. Apoi, acest model este capabil să învețe cum să scrie, să puncteze și să formeze propoziții, sau poate chiar să capteze stilul.
2. **Sănătate:** Ajută la diagnosticarea diferitelor boli și la tratarea lor.
3. **Traducerea automată:** Anumite cuvinte, propoziții sau fraze dintr-o limbă sunt transformate într-o altă limbă (Deep Learning obține rezultate de top în domeniul textului și al imaginilor).
4. **Recunoașterea imaginilor -** Recunoaște și identifică persoane și obiecte în imagini, precum și înțelege conținutul și contextul. Acest domeniu este deja utilizat în domeniul jocurilor de noroc, al comerțului cu amănuntul, al turismului etc.
5. **Predicerea cutremurelor -** Învață un computer să efectueze calcule viscoelastice, care sunt utilizate în predicția cutremurelor.

## [Tehnologie Web](Web%20Technology/WebTechnology.md#web-tecnology)
Tehnologia web se referă la diverse instrumente și tehnici care sunt utilizate în procesul de comunicare între diferite tipuri de dispozitive pe internet. Pentru a accesa paginile web se utilizează un browser web. Browserele web pot fi definite ca programe care afișează text, date, imagini, animații și clipuri video pe internet. Resursele hiperlinkate de pe World Wide Web pot fi accesate cu ajutorul interfețelor software furnizate de browserele web.

### Tehnologia Web poate fi clasificată în următoarele secțiuni:
- ***World Wide Web (WWW):*** World Wide Web se bazează pe mai multe tehnologii diferite: browsere Web, limbajul de marcare a hipertextului (HTML) și protocolul de transfer de hipertext (HTTP).
- ***Browser web:*** Browserul web este un software de aplicație pentru explorarea www (World Wide Web). Acesta oferă o interfață între server și client și solicită serverului documente și servicii web.
- ***Server web:*** Un server web este un program care procesează cererile de rețea ale utilizatorilor și le servește cu fișiere care creează pagini web. Acest schimb are loc cu ajutorul Protocolului de transfer de hipertext (HTTP).
- ***Pagini web:*** O pagină web este un document digital care este legat la World Wide Web și care poate fi vizualizat de orice persoană conectată la internet care dispune de un browser web.
- ***Dezvoltare web:*** Dezvoltarea web se referă la construirea, crearea și întreținerea site-urilor web. Aceasta include aspecte precum designul web, publicarea web, programarea web și gestionarea bazelor de date. Este vorba de crearea unei aplicații care funcționează pe internet, adică site-uri web.

### Web Development poate fi clasificat în două moduri:
### Frontend Development
Partea unui site web în care utilizatorul interacționează în mod direct este denumită front-end. Este, de asemenea, denumită și "partea de client" a aplicației.
### Backend Development
Backend-ul este partea de server a unui site web. Este o parte a site-ului web pe care utilizatorii nu o pot vedea și cu care nu pot interacționa. Este porțiunea de software care nu intră în contact direct cu utilizatorii. Este utilizată pentru a stoca și aranja datele.


# [Networking](Networking/readme.md#networking)
O rețea de calculatoare este un set de calculatoare care împart resurse situate pe sau furnizate de nodurile rețelei. Calculatoarele utilizează protocoale de comunicare comune prin interconexiuni digitale pentru a comunica între ele. Aceste interconexiuni sunt alcătuite din tehnologii de rețele de telecomunicații bazate pe metode de radiofrecvență cu fir fizic, optice și fără fir, care pot fi aranjate într-o varietate de topologii de rețea.

Nodurile unei rețele de calculatoare pot include calculatoare personale, servere, hardware de rețea sau alte gazde specializate sau de uz general. Ele sunt identificate prin adrese de rețea și pot avea nume de gazdă. Numele de gazdă servesc ca etichete memorabile pentru noduri, rareori modificate după atribuirea inițială. Adresele de rețea servesc la localizarea și identificarea nodurilor prin protocoale de comunicare, cum ar fi protocolul Internet.

Rețelele de calculatoare pot fi clasificate în funcție de numeroase criterii, inclusiv mediul de transmisie utilizat pentru transportul semnalelor, lățimea de bandă, protocoalele de comunicații pentru organizarea traficului în rețea, dimensiunea rețelei, topologia, mecanismul de control al traficului și intenția organizațională.

## Tipuri de rețele
Există două tipuri principale de rețele de calculatoare:
- Rețele cu fir: Rețeaua cu fir necesită utilizarea unui mediu fizic pentru transportul între noduri. Cablajul Ethernet pe bază de cupru, popular datorită costului redus și durabilității sale, este utilizat în mod obișnuit pentru comunicații digitale în întreprinderi și locuințe. Alternativ, fibra optică este utilizată pentru a transporta date pe distanțe mai mari și la viteze mai mari, dar are mai multe dezavantaje, inclusiv costuri mai mari și componente mai fragile.
- Rețele fără fir: Rețelele fără fir utilizează undele radio pentru a transporta datele prin aer, permițând conectarea dispozitivelor la o rețea fără cabluri. LAN-urile fără fir sunt cea mai cunoscută și cea mai răspândită formă de rețea fără fir. Alternativele includ microundele, satelitul, telefonia celulară și Bluetooth, printre altele.
## MODEL OSI
OSI înseamnă **Open Systems Interconnection**. Acesta a fost dezvoltat de ISO - "**Organizația Internațională pentru Standardizare**" în anul 1984. Este o arhitectură cu 7 straturi, fiecare strat având o funcționalitate specifică de îndeplinit. Toate aceste șapte straturi lucrează în colaborare pentru a transmite datele de la o persoană la alta în întreaga lume.

### **1\. Stratul fizic (Nivelul 1):**

Stratul cel mai de jos al modelului de referință OSI este stratul fizic. Acesta este responsabil de conexiunea fizică reală dintre dispozitive. Stratul fizic conține informații sub formă de **biti.** Este responsabil pentru transmiterea de biți individuali de la un nod la altul. Atunci când primește date, acest strat primește semnalul primit și îl convertește în 0 și 1 și le trimite la stratul de legătură de date, care va recompune cadrul.

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-bits.png)

Funcțiile stratului fizic sunt următoarele:  

1.  **Sincronizarea biților:** Stratul fizic asigură sincronizarea biților prin furnizarea unui ceas. Acest ceas controlează atât emițătorul, cât și receptorul, asigurând astfel sincronizarea la nivel de bit.
2.  **Controlul ratei de biți:** Stratul fizic definește, de asemenea, rata de transmisie, adică numărul de biți trimiși pe secundă.
3.  **Topologii fizice:** Stratul fizic specifică modul în care sunt dispuse diferitele dispozitive/noduri într-o rețea, adică topologie de tip bus, stea sau plasă.
4.  **Modul de transmisie:** Stratul fizic definește, de asemenea, modul în care datele circulă între cele două dispozitive conectate. Diferitele moduri de transmisie posibile sunt Simplex, half-duplex și full-duplex.

### **2\. Stratul de legătură de date (DLL) (Nivelul 2):**

Stratul de legătură de date este responsabil pentru livrarea mesajului de la nod la nod. Principala funcție a acestui strat este de a se asigura că transferul de date este lipsit de erori de la un nod la altul prin intermediul stratului fizic. Atunci când un pachet sosește într-o rețea, este responsabilitatea DLL să îl transmită către gazdă folosind adresa MAC a acesteia.   
Stratul de legătură de date este împărțit în două substraturi:  

1. Controlul legăturii logice (LLC)
2. Controlul accesului la medii (MAC)

Pachetul primit de la stratul de rețea este împărțit în cadre în funcție de dimensiunea cadrului NIC (Network Interface Card). DLL încapsulează, de asemenea, adresa MAC a expeditorului și a receptorului în antet.

Adresa MAC a destinatarului este obținută prin trimiterea unei cereri ARP (Address Resolution Protocol) pe fir, întrebând: "Cine are această adresă IP?", iar gazda de destinație va răspunde cu adresa sa MAC.

![](Networking/OSI%20Model/img/computer-network-osi-model-layers-framing.png)

Funcțiile stratului de legătură de date sunt :  

1.  **Încadrarea:** Încadrarea este o funcție a stratului de legătură de date. Acesta oferă o modalitate prin care un emițător poate transmite un set de biți care sunt semnificativi pentru receptor. Acest lucru poate fi realizat prin atașarea unor modele speciale de biți la începutul și sfârșitul cadrului.
2.  **Direcționarea fizică:** După crearea cadrelor, stratul de legătură de date adaugă adresele fizice (adrese MAC) ale expeditorului și/sau receptorului în antetul fiecărui cadru.
3.  **Controlul erorilor:** Stratul de legătură de date asigură mecanismul de control al erorilor prin care detectează și retransmite cadrele deteriorate sau pierdute.
4.  **Controlul fluxului:** Rata datelor trebuie să fie constantă de ambele părți, altfel datele pot fi corupte; astfel, controlul fluxului coordonează cantitatea de date care poate fi trimisă înainte de a primi o confirmare de primire.
5.  **Controlul accesului:** Atunci când un singur canal de comunicare este împărțit de mai multe dispozitive, substratul MAC al stratului de legătură de date ajută la determinarea dispozitivului care deține controlul asupra canalului la un moment dat.

### **3\. Nivelul de rețea (Nivelul 3):**

Stratul de rețea funcționează pentru transmiterea de date de la o gazdă la alta situată în rețele diferite. Se ocupă, de asemenea, de rutarea pachetelor, adică de selectarea celei mai scurte căi de transmitere a pachetului din numărul de rute disponibile. Adresele IP ale emițătorului și receptorului sunt plasate în antet de către stratul de rețea. 

Funcțiile stratului de rețea sunt :  

1. **Routing:** Protocoalele stratului de rețea determină care este ruta potrivită de la sursă la destinație. Această funcție a stratului de rețea este cunoscută sub numele de rutare.
2. **Direcționarea logică:** Pentru a identifica în mod unic fiecare dispozitiv de pe rețeaua de internet, stratul de rețea definește o schemă de adresare. Adresele IP ale emițătorului și receptorului sunt plasate în antet de către stratul de rețea. O astfel de adresă distinge fiecare dispozitiv în mod unic și universal.

# [Internet](Internet/readme.md#internet)
Internetul este un sistem global de rețele de calculatoare interconectate care utilizează suita standard de protocoale Internet ([TCP/IP](Networking/readme.md#tcptransmission-control-protocol)) pentru a deservi miliarde de utilizatori din întreaga lume. Este o rețea de rețele formată din milioane de rețele private, publice, academice, de afaceri și guvernamentale, de la nivel local până la global, care sunt conectate printr-o gamă largă de tehnologii de rețea electronice, fără fir și optice. Internetul transportă o gamă extinsă de resurse și servicii de informare, cum ar fi documentele și aplicațiile hipertext interconectate ale World Wide Web ([WWW](Internet/readme.md#world-wide-web-www)) și infrastructura de susținere a e-mail-ului.

## [World Wide Web (WWW)](Internet/readme.md#world-wide-web-www)
World Wide Web (WWW) este un spațiu informațional în care documentele și alte resurse web sunt identificate prin Uniform Resource Locators (URL), interconectate prin legături hipertext și accesibile prin intermediul internetului. Omul de știință englez Tim Berners-Lee a inventat World Wide Web în 1989. El a scris primul browser web în 1990, în timp ce lucra la CERN în Elveția. Browserul a fost lansat în afara CERN în 1991, mai întâi pentru alte instituții de cercetare începând cu ianuarie 1991 și pentru publicul larg pe internet în august 1991.

## [Internet Protocol (IP)](Internet/readme.md#internet-protocol-ip)
Protocolul Internet (IP) este un protocol, sau un set de reguli, pentru rutarea și adresarea pachetelor de date, astfel încât acestea să poată călători prin rețele și să ajungă la destinația corectă. Datele care traversează Internetul sunt împărțite în bucăți mai mici, numite pachete.

## Sistem de gestionare a bazelor de date (SGBD) <!-- TODO: Add page and link it here -->

Ce este o bază de date?
-------------------

O bază de date este o colecție de date conexe care reprezintă un anumit aspect al lumii reale. Un sistem de baze de date este conceput pentru a fi construit și completat cu date pentru o anumită sarcină.

Ce este un SGBD?
-------------

**Sistemul de gestionare a bazei de date (SGBD)** este un software pentru stocarea și recuperarea datelor utilizatorilor, luând în considerare în același timp măsuri de securitate adecvate. Acesta constă într-un grup de programe care manipulează baza de date. SGBD acceptă cererea de date din partea unei aplicații și instruiește sistemul de operare să furnizeze datele specifice. În sistemele mari, un SGBD ajută utilizatorii și alte programe terțe să stocheze și să recupereze date.

SGBD permite utilizatorilor să își creeze bazele de date în funcție de cerințele lor. Termenul "SGBD" include utilizarea unei baze de date și a altor programe de aplicații. Acesta oferă o interfață între date și aplicația software.

Exemplu de SGBD
-----------------

Să vedem un exemplu simplu al unei baze de date universitare. Această bază de date păstrează informații privind studenții, cursurile și notele într-un mediu universitar. Baza de date este organizată în cinci fișiere:

* Fișierul STUDENT stochează datele fiecărui student.
* Fișierul COURSE stochează conține date despre fiecare curs.
* Fișierul SECTION stochează informații despre secțiunile unui anumit curs.
* Fișierul GRADE stochează notele pe care le primesc studenții în diferitele secțiuni.
* Fișierul TUTOR conține informații despre fiecare profesor.

Pentru a defini SGBD:

* Trebuie să specificăm structura înregistrărilor din fiecare fișier prin definirea diferitelor tipuri de elemente de date care urmează să fie stocate în fiecare înregistrare.
* Putem utiliza, de asemenea, o schemă de codare pentru a reprezenta valorile unui element de date.
* Practic, baza de date va avea cinci tabele cu o cheie străină definită între diferitele tabele.

Istoria SGBD
---------------

Iată reperele importante din istorie:

* 1960 - Charles Bachman a proiectat primul sistem SGBD.
* 1970 - Codd a prezentat sistemul de management al informației (IMS) al IBM
* 1976- Peter Chen a inventat și a definit modelul entitate-relație, cunoscut și sub numele de modelul ER (Entity-relationship model)
* 1980 - Modelul relațional devine o componentă a bazei de date larg acceptată
* 1985- Se dezvoltă SGBD orientate pe obiecte.
* Anii 1990- Încorporarea orientării pe obiecte în SGBD relaționale.
* 1991- Microsoft lansează MS access, un SGBD personal care înlocuiește toate celelalte produse SGBD personale.
* 1995: Primele aplicații de baze de date pe Internet.
* 1997: XML aplicat la prelucrarea bazelor de date. Mulți furnizori încep să integreze XML în produsele SGBD.

Caracteristicile SGBD
-----------------------

Iată care sunt caracteristicile și proprietățile unui sistem de gestionare a bazelor de date:

* Oferă securitate și elimină redundanța
* Autodescrie natura unui sistem de baze de date.
* Izolare între programe și abstractizarea datelor
* Suport pentru mai multe vizualizări ale datelor
* Partajarea datelor și procesarea tranzacțiilor între mai mulți utilizatori
* Software-ul de gestionare a bazelor de date permite entităților și relațiilor dintre ele să formeze tabele.
* Urmează conceptul ACID ("Atomicity, Consistency, Isolation, and Durability").
* SGBD suportă un mediu multiutilizator care permite utilizatorilor să acceseze și să manipuleze datele în paralel.

Software SGBD popular
---------------------

Iată o listă a unor sisteme SGBD populare:

* MySQL
* Microsoft Access
* Oracle
* PostgreSQL
* dBASE
* FoxPro
* SQLite
* IBM DB2
* LibreOffice Base
* MariaDB
* Microsoft SQL Server etc.

## [Criptografie](Cryptography/readme.md#cryptography)
Criptografia este o tehnică de securizare a datelor și a comunicațiilor. Este o metodă de protejare a informațiilor și a comunicațiilor prin utilizarea de coduri, astfel încât numai cei cărora le sunt destinate informațiile să le poată citi și prelucra. Criptografia este utilizată pentru a proteja datele în tranzit, în repaus și în utilizare. Prefixul _crypt_ înseamnă "ascuns" sau "secret", iar sufixul _graphy_ înseamnă "scris".

### Tipuri de criptografie
Există două tipuri de criptografie:
1. [Criptografie simetrică](Cryptography/readme.md#symmetric-cryptography)
2. [Criptografie asimetrică](Cryptography/readme.md#asymmetric-cryptography)

### [Criptomonedă](Cryptography/CryptoCurrency/readme.md#crypto-currency)
Criptomoneda este o monedă digitală în care se folosesc tehnici de criptare pentru a reglementa generarea unităților monetare și pentru a verifica transferul de fonduri, funcționând independent de o bancă centrală. Criptomonedele utilizează un control descentralizat, spre deosebire de moneda digitală centralizată și de sistemele bancare centrale. Controlul descentralizat al fiecărei criptomonede funcționează prin intermediul tehnologiei registrului distribuit, de obicei un blockchain, care servește drept bază de date publică a tranzacțiilor financiare. O caracteristică definitorie a unei criptomonede și, probabil, cea mai atrăgătoare atracție a acesteia, este natura sa organică; nu este emisă de nicio autoritate centrală, ceea ce o face teoretic imună la interferențe sau manipulări guvernamentale.

## Tipurile de criptomonede sunt următoarele:
1. [Dovada de funcționare](Cryptography/CryptoCurrency/ProofOfWork/readme.md#proof-of-work)
2. [Dovada de participare](Cryptography/CryptoCurrency/ProofOfStake/readme.md#proof-of-stake)

### Cele mai populare criptomonede sunt după cum urmează:
1. [Bitcoin](Cryptography/CryptoCurrency/ProofOfWork/Bitcoin/readme.md#bitcoin)
2. [Ethereum](Cryptography/CryptoCurrency/ProofOfStake/Ethereum/readme.md#ethereum)
3. [Litecoin](Cryptography/CryptoCurrency/ProofOfWork/Litecoin/readme.md#litecoin)
4. [Cardano](Cryptography/CryptoCurrency/ProofOfStake/Cardano/readme.md#cardano)
5. [Dogecoin](Cryptography/CryptoCurrency/ProofOfWork/Dogecoin/readme.md#dogecoin)

## Teoria calculului
În informatica teoretică și în matematică, teoria calculului este ramura care se ocupă de problemele care pot fi rezolvate pe un model de calcul cu ajutorul unui algoritm, cât de eficient pot fi rezolvate sau în ce măsură (de exemplu, soluții aproximative față de cele precise). Domeniul este împărțit în trei ramuri majore: teoria automatelor și a limbajelor formale, teoria calculabilității și teoria complexității computaționale, care sunt legate între ele prin întrebarea: "Cum se face calculul?": "Care sunt capacitățile și limitările fundamentale ale calculatoarelor?".

### Teoria automatelor
Teoria automatelor este studiul mașinilor abstracte și al automatelor, precum și al problemelor de calcul care pot fi rezolvate cu ajutorul acestora. Este o teorie în informatica teoretică. Cuvântul automate provine din cuvântul grecesc αὐτόματος, care înseamnă "care acționează de la sine, cu voință proprie, care se mișcă de la sine". Un automat (automata la plural) este un dispozitiv informatic abstract autopropulsat care urmează o secvență prestabilită de operații în mod automat. Un automat cu un număr finit de stări se numește automat finit (FA) sau mașină cu stări finite (FSM). Figura din dreapta ilustrează o mașină cu stări finite, care este un tip bine cunoscut de automat. Acest automat este format din stări (reprezentate în figură prin cercuri) și tranziții (reprezentate prin săgeți). În momentul în care automatul vede un simbol de intrare, acesta face o tranziție (sau un salt) către o altă stare, în conformitate cu funcția sa de tranziție, care ia ca argumente starea anterioară și simbolul de intrare curent.

### Limbaje formale
În logică, matematică, informatică și lingvistică, un limbaj formal este format din cuvinte ale căror litere sunt extrase dintr-un alfabet și sunt bine formate conform unui set specific de reguli.

Alfabetul unui limbaj formal este format din simboluri, litere sau jetoane care se concatenează în șiruri de caractere ale limbajului[1] Fiecare șir de caractere concatenat din simboluri ale acestui alfabet se numește cuvânt, iar cuvintele care aparțin unui anumit limbaj formal se numesc uneori cuvinte bine formate sau formule bine formate. Un limbaj formal este adesea definit cu ajutorul unei gramatici formale, cum ar fi gramatica regulată sau gramatica fără context, care constă în regulile sale de formare.

În informatică, limbajele formale sunt utilizate, printre altele, ca bază pentru definirea gramaticii limbajelor de programare și a versiunilor formalizate ale unor subansambluri de limbaje naturale în care cuvintele limbajului reprezintă concepte asociate cu anumite semnificații sau semantici. În teoria complexității computaționale, problemele de decizie sunt definite de obicei ca limbaje formale, iar clasele de complexitate sunt definite ca seturi de limbaje formale care pot fi analizate de mașini cu putere de calcul limitată. În logică și în fundamentele matematicii, limbajele formale sunt utilizate pentru a reprezenta sintaxa sistemelor axiomatice, iar formalismul matematic reprezintă filozofia conform căreia întreaga matematică poate fi redusă la manipularea sintactică a limbajelor formale în acest mod.

### Teoria calculabilității
Teoria calculabilității, cunoscută și sub numele de teoria recursivității, este o ramură a logicii matematice, a informaticii și a teoriei calculului care a luat naștere în anii 1930, odată cu studiul funcțiilor calculabile și al gradelor Turing. De atunci, domeniul s-a extins pentru a include studiul calculabilității generalizate și al definibilității. În aceste domenii, teoria calculabilității se suprapune cu teoria dovezilor și cu teoria efectivă a seturilor descriptive.

### Teoria complexității computaționale
În informatica teoretică și în matematică, teoria complexității computaționale se concentrează pe clasificarea problemelor computaționale în funcție de utilizarea resurselor și pe relaționarea acestor clase între ele. O problemă de calcul este o sarcină rezolvată de un calculator. O problemă de calcul este rezolvabilă prin aplicarea mecanică a unor pași matematici, cum ar fi un algoritm.

O problemă este considerată ca fiind inerent dificilă dacă rezolvarea ei necesită resurse semnificative, indiferent de algoritmul utilizat. Teoria formalizează această intuiție prin introducerea unor modele matematice de calcul pentru a studia aceste probleme și prin cuantificarea complexității lor de calcul, adică a numărului de resurse necesare pentru a le rezolva, cum ar fi timpul și spațiul de stocare. Se utilizează și alte măsuri ale complexității, cum ar fi cantitatea de comunicare (utilizată în complexitatea comunicării), numărul de porți dintr-un circuit (utilizat în complexitatea circuitelor) și numărul de procesoare (utilizat în calculul paralel). Unul dintre rolurile teoriei complexității computaționale este acela de a determina limitele practice a ceea ce pot și nu pot face computerele. Problema P versus NP, una dintre cele șapte Probleme ale Premiului Mileniului, este dedicată domeniului complexității computaționale. [1]

Domeniile strâns legate de informatică teoretică sunt analiza algoritmilor și teoria calculabilității. O distincție esențială între analiza algoritmilor și teoria complexității computaționale constă în faptul că prima este dedicată analizei numărului de resurse necesare unui anumit algoritm pentru a rezolva o problemă, în timp ce cea de-a doua pune o întrebare mai generală cu privire la toți algoritmii posibili care ar putea fi utilizați pentru a rezolva aceeași problemă. Mai exact, teoria complexității computaționale încearcă să clasifice problemele care pot sau nu pot fi rezolvate cu resurse restrânse în mod corespunzător. La rândul său, impunerea de restricții asupra resurselor disponibile este ceea ce distinge complexitatea computațională de teoria calculabilității: cea din urmă teorie se întreabă ce tipuri de probleme pot fi, în principiu, rezolvate algoritmic.

## Contributori
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

[![Toți colaboratorii](https://img.shields.io/badge/all_contributors-104-orange.svg?style=flat-square)](#contributors)
<!-- ALL-CONTRIBUTORS-BADGE:END -->
