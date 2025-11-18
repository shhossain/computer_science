# [Types de données](#types-de-données)
Un type de données, en programmation, est une classification qui spécifie quel type de valeur une variable a et quel type d'opérations mathématiques, relationnelles ou logiques peuvent être appliquées sans provoquer d'erreur.

En informatique et en programmation informatique, un type de données est un ensemble de valeurs possibles et un ensemble d'opérations autorisées sur celui-ci. Un type de données indique au compilateur ou à l'interpréteur comment le programmeur a l'intention d'utiliser les données.

---

## Principaux Types de Données

- [Types de Données Primitifs](#types-de-données-primitifs)
- [Types de Données Non Primitifs](#types-de-données-non-primitifs)

---

## [Types de Données Primitifs](#types-de-données-primitifs)

Les types de données primitifs sont les types de données les plus basiques dans un langage de programmation. Ils sont les blocs de construction de types de données plus complexes. Les types de données primitifs sont prédéfinis par le langage de programmation et sont nommés par un mot-clé réservé.

### Types de Données Primitifs Courants(#types-de-données-primitifs-courants)

- [Entier](#entier)
- [Flottant](#flottant)
- [Booléen](#booléen)
- [Caractère](#caractère)
- [Chaîne de caractères](#chaîne-de-caractères)

---

### [Entier](#entier)

Un entier est un nombre entier qui peut être positif, négatif ou zéro. Dans la plupart des langages de programmation, un entier est un entier signé de 32 bits, ce qui signifie qu'il peut avoir une valeur comprise entre -2,147,483,648 et 2,147,483,647. Dans certains langages de programmation, un entier peut être de 64 bits, ce qui signifie qu'il peut avoir une valeur comprise entre -9,223,372,036,854,775,808 et 9,223,372,036,854,775,807.
#### Exemple :

##### **C, C++, C#, Java**

```c
// Initialisation de la variable int 'x' avec la valeur '5'.
int x = 5;
```

##### **Python**

```python
# Initialisation de la variable int 'x' avec la valeur '5'.
x = 5
```

##### **JavaScript**

```javascript
// Initialisation de la variable int 'x' avec la valeur '5'.
let x = 5;
```

---

### [Flottant](#flottant)

Un flottant est un nombre qui peut avoir un point décimal. Dans la plupart des langages de programmation, un flottant est un nombre à virgule flottante de 32 bits, ce qui signifie qu'il peut avoir une valeur comprise entre 1,175494351e-38 et 3,402823466e+38. Dans certains langages de programmation, un flottant peut être de 64 bits, ce qui signifie qu'il peut avoir une valeur comprise entre 2,2250738585072014e-308 et 1,7976931348623157e+308.

#### Exemple :

##### **C, C++**

```c
// Initialisation de la variable float 'x' avec la valeur '5.5'.
float x = 5.5;
```

##### **C#**

```c#
// Initialisation de la variable float 'x' avec la valeur '5.5'.
float x = 5.5D;
```

##### **Python**

```python
# Initialisation de la variable float 'x' avec la valeur '5.5'.
x = 5.5
```

##### **Java**

```java
// Initialisation de la variable float 'x' avec la valeur '5.5'.
float x = 5.5f;
```

##### **JavaScript**

```javascript
// Initialisation de la variable float 'x' avec la valeur '5.5'.
let x = 5.5;
```

---

### [Booléen](#booléen)

Un booléen est un type de données qui ne peut avoir que l'une des deux valeurs : vrai ou faux.

#### Exemple :

##### **C, C++, C#**

```c
// Initialisation de la variable bool 'x' avec la valeur 'true'.
bool x = true;
```

##### **Python**

```python
# Initialisation de la variable bool 'x' avec la valeur 'True'.
x = True
```

##### **Java**

```java
// Initialisation de la variable bool 'x' avec la valeur 'true'.
boolean x = true;
```

##### **JavaScript**

```javascript
// Initialisation de la variable bool 'x' avec la valeur 'true'.
let x = true;
```

---

### [Caractère](#caractère)

Un caractère est une seule lettre, un nombre ou un symbole. Dans la plupart des langages de programmation, un caractère est un entier non signé de 16 bits, ce qui signifie qu'il peut avoir une valeur comprise entre 0 et 65,535.

#### Exemple :

##### **C, C++, C#, Java**

```c
// Initialisation de la variable char 'x' avec la valeur 'a'.
char x = 'a';
```

##### **Python**

```python
# Python n'a pas de type 'caractère'. Tous les caractères uniques sont considérés comme des chaînes de longueur un par Python.
x = "a"
```

##### **JavaScript**

```javascript
// Initialisation de la variable char 'x' avec la valeur 'a'.
let x = "a";
```

---

### [Chaîne de caractères](#chaîne-de-caractères)

Une chaîne de caractères est une séquence de caractères. Dans la plupart des langages de programmation, une chaîne de caractères est un tableau de caractères.

#### Exemple :

##### **C**

```c
// Initialisation de la variable chaîne 'sayHello' avec la valeur 'Hello World!'
char sayHello[] = "Hello World!";
```

##### **C++, C#**

```c++
// Initialisation de la variable chaîne 'sayHello' avec la valeur 'Hello World!'
string sayHello = "Hello World!";
```

##### **Python**

```python
# Initialisation de la variable chaîne de caractères 'say_hello' avec la valeur 'Hello World!'
say_hello = "Hello World!"
```

##### **Java**

```java
// Initialisation de la variable chaîne de caractères de caractères 'sayHello' avec la valeur 'Hello World!'
String sayHello = "Hello World!";
```

##### **JavaScript**

```javascript
// Initialisation de la variable chaîne de caractères 'x' avec la valeur 'Hello World!'
let x = "Hello World!";
```

---

## [Types de Données Non Primitifs](#types-de-données-non-primitifs)

Les types de données non primitifs sont également appelés types de données de référence. Ils sont créés par le programmeur et ne sont pas définis par le langage de programmation. Les types de données non primitifs sont également appelés types de données composites car ils sont composés d'autres types.

### Types de Données Non Primitifs Courants(#types-de-données-non-primitifs-courants)

- [Tableau](#tableau)
- [Structure](#structure)
- [Union](#union)
- [Pointeur](#pointeur)
- [Fonction](#fonction)
- [Classe](#classe)
- [Liste](#liste)
- [Map/Dictionnaire](#mapdictionnaire)
- [Ensemble](#ensemble)
- [Paire/Tuple](#pairetuple)

---

### [Tableau](#tableau)

Un tableau est une collection d'éléments stockés à des emplacements de mémoire contigus. L'idée est de stocker plusieurs éléments du même type ensemble. Cela facilite le calcul de la position de chaque élément en ajoutant simplement un décalage à une valeur de base, c'est-à-dire l'emplacement de mémoire du premier élément du tableau (généralement désigné par le nom du tableau).

#### Exemple :

##### **C, C++**

```c
// Initialisation d'un tableau 'x' qui peut stocker des valeurs int.
int x[] = {5, 10, 15, 20, 25};
```

##### **C#**

```c#
// Initialisation d'un tableau 'x' qui peut stocker des valeurs int.
int[] x = {5, 10, 15, 20, 25};
```

##### **Java**

```java
// Initialisation d'un tableau 'x' qui peut stocker des valeurs int.
int[] x = {5, 10, 15, 20, 25};
```

##### **JavaScript**

```javascript
// Initialisation d'un tableau 'x' qui peut stocker des valeurs int.
const x = [5, 10, 15, 20, 25];
```

---

### [Structure](#structure)

Une structure est une collection de variables de différents types de données sous un seul nom. Elle est utilisée pour combiner des éléments de données de différents types.

#### Exemple :

##### **C, C++**

```c
// Création d'une structure qui stocke trois variables.
struct Personne {
    char nom[50];
    int age;
    float salaire;
};
```

##### **C#**

```c#
// Création d'une structure qui stocke trois variables.
struct Personne
{
    public string nom;
    public int age;
    public float salaire;
}
```

---

### [Union](#union)

Une union est un type de données spécial disponible en C qui permet de stocker différents types de données dans le même emplacement mémoire. Vous pouvez définir une union avec plusieurs membres, mais un seul membre peut contenir une valeur à un moment donné. Les unions offrent un moyen efficace d'utiliser le même emplacement mémoire à des fins multiples.

#### Exemple :

##### **C**

```c
// Créer une union
union Data {
    int i;
    float f;
    char str[20];
};
```

---

### [Pointeur](#pointeur)

Un pointeur est une variable dont la valeur est l'adresse d'une autre variable, c'est-à-dire l'adresse directe de l'emplacement mémoire. Comme toute variable ou constante, vous devez déclarer un pointeur avant de l'utiliser pour stocker une adresse de variable. La forme générale d'une déclaration de variable pointeur est :

```c
type *nom-var;
```

Ici, type est le type de base du pointeur ; il doit être un type de données C valide et nom-var est le nom de la variable pointeur. L'astérisque \* utilisé pour déclarer un pointeur est le même astérisque utilisé pour la multiplication. Cependant, dans cette déclaration, l'astérisque est utilisé pour désigner une variable comme un pointeur.
Exemple :

```c
int *ip; // ip est un pointeur vers un entier
```

---

### [Fonction](#fonction)

Une fonction est un groupe d'instructions qui exécutent ensemble une tâche. Chaque programme C a au moins une fonction, qui est main(), et tous les programmes les plus triviaux peuvent définir des fonctions supplémentaires. La bibliothèque standard C fournit de nombreuses fonctions intégrées que votre programme peut appeler.

#### Exemples :

##### **C, C++**

```c
// Créez votre propre fonction en utilisant le format suivant :
void nomDeLaFonction() {
    // code à exécuter
}
```

##### **C#, Java**

```c#
// En C# et Java, les fonctions sont appelées méthodes et sont définies comme suit :
static void nomDeLaFonction()
{
    // code à exécuter
}
```

##### **Python**

```python
# Définir une fonction en Python :
def nom_de_la_fonction():
    # code à exécuter
```

##### **JavaScript**

```javascript
// Définir une fonction en JavaScript :
function nomDeLaFonction() {
  // code à exécuter
}
```

---

### [Classe](#classe)

Une classe est un type de données défini par l'utilisateur, qui contient ses propres membres de données et fonctions membres, qui peuvent être accessibles et utilisés en créant une instance de cette classe. Une classe est comme un plan pour un objet.

#### Exemples :

##### **C++**

```c++
class Personne {
    public:
        string nom;
        int age;
        float salaire;
};
```

##### **C#**

```c#
class Voiture
{
    string marque;
    string couleur;
}
```

##### **Python**

```python
class Pays:
    nom = "États-Unis"
    capitale = "Washington"
```

##### **Java**

```java
public class Candidat {
    String nom;
    int age;
};
```

##### **JavaScript**

```javascript
class Bateau {
  constructor(marque, annee) {
    this.marque = marque;
    this.annee = annee;
  }
}
```

---

### [Liste](#liste)

Une liste est spécifiée comme une collection d'objets ordonnés. Les listes sont similaires aux tableaux, mais la taille d'une liste peut augmenter ou diminuer selon les besoins. Les listes sont également connues sous le nom de tableaux dynamiques.

#### Exemples :

##### **Python**

```python
x = [1, 2, 3]
```

---

### [Map/Dictionnaire](#mapdictionnaire)

Une map est une structure de données qui stocke des éléments de manière à permettre une récupération rapide. Chaque élément est stocké sous forme de paire clé-valeur. Une map ne peut pas contenir de clés en double. Chaque clé peut correspondre à au plus une valeur.

#### Exemples :

##### **Python**

```python
x = {"nom": "John", "âge": 30}
```

##### **C++**

```c++
#include <map>
map<string, int> x = {{"nom", "John"}, {"âge", 30}};
```

---

### [Ensemble](#ensemble)

Un ensemble est une collection d'éléments où aucun élément n'est répété. Les ensembles sont non ordonnés, ce qui signifie que l'ordre dans lequel les éléments sont ajoutés à un ensemble n'a pas d'importance. Les ensembles sont également connus sous le nom de listes non ordonnées.

#### Exemples :

##### **Python**

```python
x = {"pomme", "banane", "cerise"}
```

##### **C++**

```c++
#include <set>
set<string> x = {"pomme", "banane", "cerise"};
```

---

### [Paire/Tuple](#pairetuple)

Une paire est un conteneur qui stocke deux valeurs ensemble. Un tuple est un conteneur qui stocke un nombre fixe de valeurs ensemble. Les valeurs peuvent être de types différents.

#### Exemples :

##### **Python**

```python
x = ("pomme", "banane", "cerise")
```

##### **C++**

```c++
#include <tuple>
tuple<string, string, string> x = {"pomme", "banane", "cerise"};
```

---

## Conversion de Type de Données

La conversion de type de données est la conversion de données d'un type à un autre. Dans la plupart des cas, la conversion de type de données est effectuée automatiquement par le compilateur. Cependant, parfois, vous devez effectuer manuellement la conversion de type de données pour obtenir le résultat attendu.

### Conversion de Type de Données Courante

- [Conversion Implicite](#conversion-implicite)
- [Conversion Explicite](#conversion-explicite)

### [Conversion Implicite](#conversion-implicite)

La conversion implicite est la conversion automatique de données d'un type à un autre. Cette conversion est effectuée par le compilateur lorsqu'il détecte qu'une conversion est nécessaire. Par exemple, lorsque vous assignez une valeur d'un type de données plus petit à une variable d'un type de données plus grand, le compilateur convertit automatiquement la valeur au type de données plus grand.
Exemple :

```c
int x = 10; // x est un entier
float y = x; // y est un flottant
```

```python
x = 10 # x est un entier
y = float(x) # y est un flottant
```

### [Conversion Explicite](#conversion-explicite)

La conversion explicite est la conversion de données d'un type à un autre effectuée par le programmeur. Cette conversion est effectuée en utilisant un opérateur de conversion de type. Par exemple, lorsque vous assignez une valeur d'un type de données plus grand à une variable d'un type de données plus petit, le compilateur ne convertira pas automatiquement la valeur au type de données plus petit. Dans ce cas, vous devez utiliser un opérateur de conversion de type pour convertir explicitement la valeur au type de données plus petit.
Exemple :

```c
float x = 10.5; // x est un flottant
int y = (int)x; // y est un entier
```

```python
x = 10.5 # x est un flottant
y = int(x) # y est un entier
```

## Remarque

Nous devons être prudents lors de la conversion explicite de type, comme :

- Convertir une valeur de type flottant en valeur de type entier, car cela entraînerait une perte des valeurs décimales.
- Un type de données plus grand, s'il est converti en type de données plus petit, entraînera une perte de données car le nombre sera tronqué.

---
## Concept de Signé et Non Signé (Signedness)

En C et dans de nombreux autres langages de programmation, y compris C++, Java et autres, les concepts de "signé" et "non signé" sont utilisés pour spécifier comment les données des types entiers (comme 'int', 'short', 'long', etc.) doivent être interprétées en termes de représentation de leur valeur. Ces concepts déterminent si les données peuvent représenter à la fois des valeurs positives et négatives (signé) ou uniquement des valeurs non négatives (non signé).

### Types Courants de Signedness

- [Type Signé](#type-signé)
- [Type Non Signé](#type-non-signé)

### [Type Signé](#type-signé)

Un type entier signé peut représenter à la fois des valeurs positives et négatives.
Le bit le plus significatif (le bit le plus à gauche) est généralement utilisé pour indiquer le signe du nombre : 0 pour positif et 1 pour négatif (en utilisant la représentation en complément à deux).

Par exemple, un entier signé de 8 bits peut représenter des valeurs dans la plage de -128 à 127, car le MSB est occupé par le signe du nombre, donc 7 bits sont laissés pour la représentation du nombre. Formule pour trouver la plage en représentation en complément à deux : 
-(2^(n-1)) à (2^(n-1)-1), où 'n' est le nombre de bits dans le registre.

#### Exemple :

##### **C**

```c
signed int a = -10;
```

### [Type Non Signé](#type-non-signé)

Les types de données non signés peuvent représenter uniquement des valeurs non négatives, y compris zéro.
Tous les bits dans la représentation binaire sont utilisés pour représenter la magnitude du nombre.
Les types de données non signés courants incluent unsigned int, unsigned short, unsigned long, etc.

Par exemple, un entier non signé de 8 bits peut représenter des valeurs dans la plage de 0 à 255, car il n'y a pas de bit de signe présent, donc tous les bits sont utilisés pour la représentation du nombre, augmentant ainsi la plage positive. Formule pour trouver la plage : 0 à ((2^n)-1), où 'n' est le nombre de bits dans le registre.

#### Exemple :

##### **C**

```c
unsigned int unsignedValue = 42; 
```

### Signé vs Non Signé

### Avantages des Types Entiers Signés :

Représentation des Valeurs Négatives : Les entiers signés peuvent représenter à la fois des valeurs positives et négatives, ce qui les rend adaptés aux scénarios où vous devez gérer une large gamme de nombres, y compris les valeurs négatives.

Opérations Arithmétiques : Les entiers signés sont essentiels pour les opérations arithmétiques qui peuvent produire des résultats négatifs. Par exemple, la soustraction ou la division peuvent produire des résultats négatifs, et les entiers signés sont nécessaires pour gérer correctement ces cas.

Compatibilité : Les entiers signés sont largement utilisés dans de nombreux langages de programmation et bibliothèques, ce qui les rend compatibles avec une large gamme de logiciels et de systèmes.


### Avantages des Types Entiers Non Signés :

Valeurs Non Négatives : Les entiers non signés sont utiles lorsque vous devez travailler exclusivement avec des valeurs non négatives. Ils sont idéaux pour les scénarios où les valeurs négatives n'ont aucun sens ou ne sont pas applicables, comme les indices de tableau, les tailles ou les opérations au niveau des bits.

Plage de Valeurs Maximale : Les entiers non signés offrent une plage de valeurs positives plus large que leurs homologues signés avec le même nombre de bits. Cela peut être bénéfique lorsque vous devez stocker de grandes valeurs positives.

Opérations au Niveau des Bits : Les entiers non signés sont couramment utilisés dans les opérations au niveau des bits, où le signe de la valeur n'est pas pertinent. Ils sont souvent utilisés pour manipuler des bits individuels ou effectuer des opérations comme le masquage de bits.

Prévention des Bugs de Dépassement : Dans certains cas, l'utilisation d'entiers non signés peut aider à prévenir les bugs de dépassement qui peuvent survenir lors de la manipulation de grandes valeurs, car les entiers non signés reviennent à zéro lorsqu'ils dépassent leur valeur maximale représentable.

## Taille des Types de Données

La taille des types de données est la quantité de mémoire nécessaire pour stocker une valeur d'un type de données particulier. La taille d'un type de données dépend du compilateur et de l'architecture de l'ordinateur. La taille d'un type de données peut varier d'un ordinateur à un autre. La taille d'un type de données peut également varier d'un compilateur à un autre. La taille d'un type de données peut également varier d'un système d'exploitation à un autre.

### Comparaison de la Taille des Types de Données (Basée sur un système 64 bits utilisant l'architecture x86-64)

- Caractère (1 octet)
- Booléen (1 octet)
- Entier (4 octets)
- Entier Court (2 octets)
- Entier Long (8 octets)
- Flottant (4 octets)
- Double (8 octets)
- Double Long (16 octets)
