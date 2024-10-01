# Conditional Statements

Les instructions conditionnelles sont une partie très fondamentale de tout programme car elles aident à changer le flux de contrôle (qui est généralement de haut en bas) en fonction d'une condition donnée.

Considérons un exemple où nous imprimons si un nombre donné est Pair ou Impair.

Extrait de code :
* [Python](#python)
* [C++](#cpp)

## Python
```python
if number % 2 == 0:
	print ("Le nombre est pair")
else:
	print ("Le nombre est impair")
```
## CPP
```cpp
if (number % 2 == 0)
	cout << "Le nombre est pair";
else
	cout << "Le nombre est impair";
```

Maintenant, si le nombre entré est 5, l'instruction if vérifiera si le reste de 5 divisé par 2 est 0 ou non. Comme ce n'est pas 0, il saute les lignes de code dans l'instruction if et le flux de contrôle est déplacé vers la partie else et les lignes de code écrites sous celle-ci sont exécutées.

**Types d'instructions conditionnelles** :
## 1. if - else if - else
 **Voici un code qui imprime la note en fonction des marques.**

* En C++ :
```cpp
if (marks >= 90)    {
	cout << "A";
}
else if (marks >= 80)    {
	cout << "B";
}
else if (marks >= 70)    {
	cout << "C";
}
else if (marks >= 40)    {
	cout << "D";
}
else {
	cout << "F";
} 
```
 **En Python,** **`else if` est écrit comme `elif`.**
 
* En Python :
 ```python
if marks >= 90:
	print ("A")
elif marks >= 80:
	print ("B")
elif marks >= 70:
	print ("C")
elif marks >= 40:
	print ("D")
else:
	print ("F")
```

## 2. instructions switch case

Dans switch case, nous prenons une valeur de l'utilisateur qui est généralement un entier ou de type de données caractère en fonction de laquelle le cas correspondant est exécuté.

Il est utilisé à la place de l'instruction if si les branches de prise de décision sont indépendantes les unes des autres.

*Supposons qu'un joueur choisit une couleur pour jouer au Ludo, et en fonction de ce qu'il entre, c'est-à-dire R, B, Y et G, il obtient respectivement Rouge, Bleu, Jaune et Vert. Dans le cas où il entre une autre lettre, le code renvoie un message d'erreur car aucune couleur n'est associée à cette lettre.*

* Un code en C++ pour implémenter la même chose :

```cpp
switch (alphabet) {
		case 'R':
			cout << "Rouge";
			break;
		case 'B':
			cout << "Bleu";
			break;
		case 'Y':
			cout << "Jaune";
			break;
		case 'G':
			cout << "Vert";
			break;
		default:
			cout << "Aucune autre couleur n'existe";
	}
```
* *Remarque : Python n'a pas d'instructions switch case.*

## 3. Instructions if-else imbriquées :

L'instruction if...else imbriquée est utilisée lorsqu'un programme nécessite plus d'une expression de test. Elle est également appelée instruction de sélection multiple. Lorsqu'une série de décisions est impliquée dans une instruction, nous utilisons l'instruction if-else sous forme imbriquée. Les instructions if-else imbriquées peuvent être utiles lorsque nous avons plusieurs sources d'expression et en fonction de la valeur spécifique, nous devons vérifier les conditions imbriquées.

Il est recommandé pour une meilleure pratique de codage d'éviter d'utiliser l'instruction if-else imbriquée car elle peut se transformer en une situation de bouillonnement conditionnel, il est préférable d'utiliser le switch case pour une meilleure gestion des conditions.

* Syntaxe de if-else imbriqué en C++ :

```cpp
if(condition_1){
	if(condition_2){
		if(condition_3){
			statement_1;
		}
		else{
			statement_2;
		}
	}
	else{
		statement_3;
	}
}
else{
	statement_4;
}
```

* Il est considéré comme une meilleure pratique de codage d'utiliser `if...elif...elif...else` en Python

------------

# Opérateurs ternaires

Il existe également un autre moyen d'obtenir la fonctionnalité de if-else avec une syntaxe plus compacte et concise.
Oui, nous parlons des opérateurs ternaires.

Prenons un exemple typique d'un if-else pour vérifier si un nombre est pair ou impair.

Méthode traditionnelle :

	if(num%2==0):
		print("c'est un nombre pair")
	else:
		print("c'est un nombre impair")

Maintenant en utilisant les opérateurs ternaires :
* [Exemple Python](#exemple-python)
* [Exemple C++](#exemple-cpp)

## Exemple Python
```python
print("c'est un nombre pair") if num%2==0 else print("c'est un nombre impair")
```
__Remarque__: En python, cela s'appelle une instruction if-else abrégée.

## Exemple CPP
```cpp
(num%2==0)?cout<<"c'est un nombre pair":cout<<"c'est un nombre impair";
```

La façon dont cela fonctionne est la suivante : d'abord, il y a une condition que nous voulons vérifier qui est entre parenthèses suivie d'un point d'interrogation, l'instruction qui vient après le point d'interrogation est l'instruction qui sera exécutée si la condition de vérification est satisfaite, c'est-à-dire si elle est vraie, sinon elle exécutera l'instruction qui est après les deux-points.

# Boucles

Les boucles sont utilisées pour exécuter un bloc de code autant de fois que nous le souhaitons sans écrire le même code encore et encore. Le flux de contrôle sort de la boucle lorsque la condition fournie est fausse ou qu'une instruction `break` est utilisée.

Prenons un exemple où nous imprimons tous les nombres pairs jusqu'à 10.

#### **Il existe deux types d'instructions de boucle** :
## 1. instruction for
**Prenons un exemple où nous imprimons tous les nombres pairs jusqu'à 10.**

* En C++ :
```cpp
for (int i = 2; i <= 10; i+=2) {
  cout << i << "\n";
}
```
`int i = 2` initialise la valeur de i à 2

et `i += 2` continue d'incrémenter la valeur de i de 2

jusqu'à ce que `i <= 10` devienne `faux`

<br>
* En Python :
 ```python
for i in range(2, 11, 2):
	print (i)
```

***Sortie :
2
4
6
8
10**

La fonction range prend trois paramètres - le premier paramètre est la **valeur de départ**, le deuxième paramètre est la **valeur de fin + 1**, et le troisième paramètre est la **valeur d'incrément**.

Ici, `range(2, 11, 2)` indique au programme qu'il doit exécuter la boucle pour toutes les valeurs de i entre 2 et (11-1) et continuer d'incrémenter la valeur de i de 2.

## 2. instructions while / do while

Une instruction while vérifie toujours si la condition fournie est Vraie ou Fausse au début de la boucle et dans le cas où elle est Vraie, le bloc de code dans la boucle est exécuté. Sinon, la boucle est terminée. Comme elle vérifie toujours la condition au début, elle est également appelée boucle contrôlée par entrée.

* Un code en C++ pour implémenter la même chose :
```cpp
int i = 2;
while (i <= 10)	{
	cout << i << "\n";
	i += 2;
}
```

* En Python :
 ```python
i = 2
while i <= 10:
	print (i)
	i += 2
```

Dans les codes ci-dessus, la boucle while s'exécute jusqu'à ce que la valeur de i soit 10.

Dans une boucle do while, la validité de la condition est vérifiée à la fin de la boucle. Par conséquent, le code s'exécute au moins une fois même si la condition fournie est Fausse. Également connue sous le nom de boucle contrôlée par sortie car la condition est vérifiée après l'exécution du corps de la boucle.

Si je modifie le code ci-dessus en une boucle do while, il imprimera les nombres pairs jusqu'à 12 car il vérifie la condition après l'exécution de la boucle.

Extrait de code pour do-while :

```cpp
int i = 2;
do	{
	cout << i << "\n";
	i += 2;
}while (i <= 10);
```

**Sortie :
2
4
6
8
10
12**

* *Remarque : En Python, nous n'avons pas de boucles do-while.*
------------

# Fonctions

En programmation, nous avons souvent un bloc de code qui effectue une tâche spécifique et de nombreuses fois dans le programme, nous pouvons avoir besoin d'utiliser exactement le même morceau de code. Dans ce cas, pour éliminer l'écriture répétée du même code encore et encore et également pour maintenir la lisibilité du code, nous définissons des fonctions pour cela.

* Une fonction peut être réutilisée plusieurs fois.
* Vous pouvez envoyer des données à une fonction qu'elle utilise pour effectuer une tâche.
* Une fonction renvoie généralement une valeur à la fonction principale qui est ensuite utilisée pour effectuer d'autres opérations.
* Chaque langage de programmation a des fonctions intégrées que vous pouvez utiliser.
* Vous pouvez également écrire des fonctions par vous-même.
* Lorsque vous appelez une fonction, le flux de contrôle passe de la fonction principale à la fonction qui est **toujours exécutée de haut en bas**.
* Une fonction peut appeler une autre fonction ou même s'appeler elle-même (connue sous le nom de fonctions récursives).
* Une fonction de retour prend le flux de contrôle hors de la fonction et revient à la fonction principale.
* Les fonctions rendent le code modulaire. Un gros fichier contenant de nombreuses lignes de code devient simple à lire si le code est divisé en fonctions.
* Les fonctions fournissent une abstraction. Nous pouvons utiliser des fonctions de bibliothèque sans nous soucier de leur fonctionnement interne.

------------

Considérons une situation où je veux imprimer tous les nombres premiers entre 1 et 100 :

Nous pouvons donc écrire une fonction pour vérifier si un nombre est premier ou non. Elle renvoie une valeur de type booléen en fonction de laquelle nous décidons si le nombre doit être imprimé ou non.

Extrait de code pour la fonction `isPrime` :

```python
def isPrime (number: int) -> bool:
	factors = 0
	for i in range (2, (number // 2) + 1):
		if number % i == 0:
			factors += 1
	if factors == 0:
		return True
	return False
```
**<li> La ligne la plus haute d'une fonction est appelée en-tête de fonction. </li>**

Dans, `def isPrime (number: int) -> bool:` ,
les paramètres entre parenthèses indiquent au programme combien de paramètres cette fonction acceptera et comment ils sont appelés.

Dans ce cas, l'en-tête de fonction indique au programme qu'il doit passer un paramètre à la fonction `isPrime` et que ce paramètre/variable sera référé comme `number` à l'intérieur de la fonction.
<br>

Utilisons maintenant cette fonction pour imprimer les nombres premiers jusqu'à 100 :
```python
for i in range(1, 101):
	if isPrime(i):
		print (i)
```

* Ce code utilise la fonction `isPrime` pour déterminer si le nombre est premier ou non pour chaque valeur de i de 1 à 100 et imprime uniquement les nombres premiers.
* Cela augmente non seulement la lisibilité du programme principal, mais la fonction isPrime peut également être utilisée par d'autres programmes.

------------

## Types de fonctions

* Fonction définie par l'utilisateur :
Les fonctions définies par l'utilisateur sont des blocs de code définis par l'utilisateur/client spécialement personnalisés pour réduire la complexité des grands programmes. Elles sont également communément appelées "fonctions sur mesure" qui sont construites uniquement pour répondre au problème spécifique auquel l'utilisateur est confronté. Une fois que vous avez défini une fonction, vous pouvez l'appeler de la même manière que les fonctions intégrées.

* Fonction de bibliothèque :
Les fonctions de bibliothèque sont également appelées "fonctions intégrées" qui sont regroupées et placées dans un emplacement commun appelé bibliothèque. Chaque fonction ici effectue une opération spécifique. Nous pouvons utiliser ces fonctions de bibliothèque pour obtenir la sortie prédéfinie. Ces fonctions font partie d'un package de compilateur qui est déjà défini. Les fonctions intégrées nous donnent un avantage car nous pouvons les utiliser directement sans nous soucier de les définir. Alors que dans la fonction définie par l'utilisateur, nous devons déclarer et définir une fonction avant de les utiliser.

------------

## Passer des paramètres aux fonctions

### 1. Passage par valeur
Dans cette méthode de passage de paramètres, les valeurs des paramètres réels sont copiées dans les paramètres formels de la fonction et les deux types de paramètres sont stockés dans des emplacements mémoire différents. Ainsi, toute modification apportée à l'intérieur des fonctions n'est pas reflétée dans les paramètres réels de l'appelant.

### 2. Passage par référence
Les paramètres réels et formels se réfèrent tous deux aux mêmes emplacements. Par conséquent, toute modification apportée à l'intérieur de la fonction est réellement reflétée dans les paramètres réels de l'appelant.

------------

## Surcharge de fonction
Certains langages de programmation permettent la surcharge de fonction, qui est la capacité de créer plusieurs fonctions avec le même nom mais avec des implémentations différentes. Par exemple, C++ vous permet de spécifier plus d'une fonction du même nom dans le même champ. La détermination de la fonction à utiliser pour un appel particulier est résolue au moment de la compilation et est basée sur le nombre de paramètres que la fonction prend ou le type de données des paramètres.

------------

# Fonction Lambda

Une fonction lambda est une petite fonction *anonyme* ou également connue sous le nom de fonction *inconnue*, ce qui signifie que la fonction n'a pas de nom. Elles réduisent la taille du code et permettent au programmeur de développer des logiciels plus rapidement.

* Syntaxe :
```python
lambda arguments: expression
```

**Caractéristiques de la fonction lambda :**

* La fonction lambda prend un nombre illimité d'arguments mais n'a qu'une seule expression. Cette expression renvoie le résultat lorsque la fonction lambda est appelée.
* Comme elle ne contient qu'une seule expression qui renvoie le résultat par défaut, elle ne nécessite pas l'instruction *return*.

* Un exemple de fonction lambda :
```python
result = lambda x: x + 10
print(result(5))
```

**Sortie :
15**

**Ici**,
* *lambda* est le mot-clé,
* x est un argument, et
* x + 10 est l'expression lambda.

**Différence entre les fonctions lambda et les fonctions définies par l'utilisateur**

Les fonctions lambda sont des fonctions anonymes, ce qui signifie qu'une fonction est définie à l'aide d'un mot-clé *lambda* et sans nom, tandis qu'une fonction définie par l'utilisateur est définie à l'aide d'un mot-clé *def* et a un nom de fonction.

---------
