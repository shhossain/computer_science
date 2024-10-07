# Structures de Données
En informatique, une structure de données est un format d'organisation, de gestion et de stockage des données qui permet un accès et une modification efficaces. Plus précisément, une structure de données est une collection de valeurs de données, les relations entre elles et les fonctions ou opérations qui peuvent être appliquées aux données.

## Types de Structures de Données
- [Tableau](#tableau)
- [Liste Chaînée](#liste-chaînée)
- [Pile](#pile)
- [File](#file)
- [Table de Hachage](#table-de-hachage)
- [Tas](#tas)
- [Arbre](#arbre)
- [Graphe](#graphe)
- [Trie](Trie.md)
- [Pointeurs](Pointers.md)

## Tableau
Un tableau est une structure de données qui stocke une collection de valeurs de données dans des emplacements de mémoire contigus.

### Exemple
```
let array = [4,3,8,1,0,14,6];
```

| Emplacement Mémoire | Valeur |
|---------------------|--------|
| 1000                | 4      |
| 1001                | 3      |
| 1002                | 8      |
| 1003                | 1      |
| 1004                | 0      |
| 1005                | 14     |
| 1006                | 6      |

L'accès à un élément dans un tableau se fait par indexation.
```
array[0] // 4 (l'index 0 est le premier élément) (1000)
array[1] // 3 (l'index 1 est le deuxième élément) (1001)
array[2] // 8 (l'index 2 est le troisième élément) (1002)
array[3] // 1 (l'index 3 est le quatrième élément) (1003)
array[4] // 0 (l'index 4 est le cinquième élément) (1004)
array[5] // 14 (l'index 5 est le sixième élément) (1005)
array[6] // 6 (l'index 6 est le septième élément) (1006)
```

#### Complexités temporelles de certaines opérations de base sur les tableaux

| Opération               | Complexité Temporelle |
|-------------------------|-----------------------|
| Accès à un élément      | O(1)                  |
| Recherche d'un élément  | O(N)                  |
| Insertion d'un élément  | O(N)                  |
| Suppression d'un élément| O(N)                  |

[Plus sur les Tableaux](Array.md)


## Liste Chaînée
Une liste chaînée est une structure de données qui consiste en un groupe de nœuds où chaque nœud contient une valeur de données et une référence (ou lien) vers le nœud suivant dans la liste.

### Exemple
```
let list = [4,3,1,0,14,6];
```

| Emplacement Mémoire | Valeur |
|---------------------|--------|
| 1000                | 4      |
| 1001                | 1008   |
| 1002                | 1      |
| 1003                | 1004   |
| 1004                | 0      |
| 1005                | 1006   |
| 1006                | 14     |
| 1007                | 1010   |
| 1008                | 3      |
| 1009                | 1002   |
| 1010                | 6      |
| 1011                | 1000   |

L'accès à un élément dans une liste chaînée se fait en parcourant la liste et en trouvant l'élément à l'index correct.
```
index 0 valeur est 4 avec emplacement mémoire 1000 et un pointeur vers le nœud suivant 1008
index 1 valeur est 3 avec emplacement mémoire 1008 et un pointeur vers le nœud suivant 1002
index 2 valeur est 1 avec emplacement mémoire 1002 et un pointeur vers le nœud suivant 1004
index 3 valeur est 0 avec emplacement mémoire 1004 et un pointeur vers le nœud suivant 1006
index 4 valeur est 14 avec emplacement mémoire 1006 et un pointeur vers le nœud suivant 1010
index 5 valeur est 6 avec emplacement mémoire 1010 et un pointeur vers le premier nœud 1000
```

#### Complexités temporelles de certaines opérations de base sur les listes chaînées

| Opération               | Complexité Temporelle |
|-------------------------|-----------------------|
| Accès à un élément      | O(N)                  |
| Recherche d'un élément  | O(N)                  |
| Insertion d'un élément  | O(1)                  |
| Suppression d'un élément| O(1)                  |


#### Il peut y avoir différents types de listes chaînées :

### Liste Chaînée Simple
Une liste chaînée simple est un type de liste chaînée qui est unidirectionnelle, c'est-à-dire qu'elle peut être parcourue dans une seule direction, de la tête au dernier nœud (queue).

### Liste Chaînée Circulaire
Ici, le dernier nœud de la liste contient un pointeur vers le premier nœud de la liste. Nous parcourons la liste chaînée circulaire jusqu'à ce que nous atteignions le même nœud où nous avons commencé. Elle n'a ni début ni fin. Tous les nœuds ne peuvent pas être nuls.

### Liste Chaînée Double
Dans une liste chaînée double, un nœud se compose de trois parties : les données du nœud, un pointeur vers le nœud suivant dans la séquence (pointeur suivant) et un pointeur vers le nœud précédent (pointeur précédent). Nous pouvons parcourir dans n'importe quelle direction.

[Plus sur les Listes Chaînées](LinkedList.md)


## Pile
Une pile est une structure de données qui stocke une collection de valeurs de données dans un ordre LIFO (dernier entré, premier sorti).\
Les opérations sur la pile ne peuvent se faire que par l'une de ses extrémités, appelée le _sommet_ de la pile.\
L'implémentation peut être de type tableau (statique et contigu) ou de type liste chaînée (dynamique et discontiguë).

[Plus sur les Piles](Stack.md)

## File
Une file stocke une collection de valeurs de données dans un ordre FIFO (premier entré, premier sorti). Le premier élément ajouté à la file sera le premier à être traité (retiré).\
Une file ne peut être accédée que par ses extrémités, appelées _tête_ pour son arrière et _queue_ pour son avant.\
L'implémentation peut être de type tableau (statique et contigu) ou de type liste chaînée (dynamique et discontiguë).

[Plus sur les Files](Queue.md)


## Graphe

Le graphe est une structure de données qui consiste en des sommets (pour stocker les données) et des arêtes (pour connecter les sommets) afin de créer une structure de type réseau. Dans le graphe, chaque relation est une arête d'un sommet à un autre.

#### Types de Graphe

**1. Graphe Dirigé** : Les graphes dans lesquels la direction de l'arête d'un sommet à un autre est donnée sont appelés graphes dirigés.\
**2. Graphe Non Dirigé** : Les graphes dans lesquels la direction de l'arête d'un sommet à un autre n'est pas donnée sont appelés graphes non dirigés. Ils ont une relation bidirectionnelle.\
**3. Graphe Cyclique** : Un graphe dans lequel le cycle est présent (capable de revenir au même sommet) est appelé graphe cyclique.\
**4. Graphe Acyclique** : Les graphes dans lesquels le cycle n'est pas présent (incapable de revenir au même sommet) sont appelés graphes acycliques.\
**5. Graphe Pondéré** : Si un poids est présent sur l'arête du graphe, alors nous appelons ce graphe un graphe pondéré.\

### Terminologies de Base Concernant le Graphe

**Degré** : Dans un graphe non dirigé, le nombre d'arêtes connectées à un sommet est appelé le degré du sommet.\
**Degré d'Entrée** : Dans un graphe dirigé, le nombre d'arêtes entrant dans le sommet est appelé le degré d'entrée du sommet.\
**Degré de Sortie** : Dans un graphe dirigé, le nombre d'arêtes sortant du sommet est appelé le degré de sortie du sommet.\

### Représentation du Graphe

Nous pouvons représenter le graphe de deux manières : 
              
**1. Matrice d'Adjacence** : Dans cette représentation, s'il y a une arête entre les sommets i et j, alors nous assignons la valeur INT_MAX à cet endroit et sinon Zéro.
    
|  | 0 | 1 | 2 | 3 |
|--|---|---------|---|---------|
| **0** | 0 | INT_MAX | 0 | INT_MAX |
| **1** | INT_MAX | 0 | 0 | INT_MAX |
| **2** | 0 | INT_MAX | 0 | INT_MAX |
| **3** | 0 | INT_MAX | 0 | 0 |
    
**2. Liste d'Adjacence** : Dans cette représentation, nous créons une liste de voisins avec le sommet.
    
| sommet | voisins |
|--------|---------|
0 -> | 1 , 3 |
1 -> | 0 , 3 |
2 -> | 1 , 3 |
3 -> | 1 |

[Plus sur les Graphes](graph.md)


## Tas

Un tas est une structure de données qui est un arbre binaire complet dans lequel le nœud parent est soit supérieur à ses deux nœuds enfants, soit inférieur à ses nœuds enfants.

### Implémentation du Tas 
  ```
  priority_queue<int, vector<int>,greater<int>> (heap_name); // tas min
  priority_queue<int, vector<int>> (heap_name);  // tas max
  
  ```

### Types de Tas

**1. Tas Max** : Dans un tas max, le nœud racine contient la plus grande valeur parmi toutes les valeurs de ses nœuds enfants.
**2. Tas Min** : Dans un tas min, le nœud racine contient la plus petite valeur parmi toutes les valeurs de ses nœuds enfants.

### Avantages du Tas 

**1.** En utilisant un tas, nous pouvons accéder aux données les plus grandes ou les plus petites en temps constant.\
**2.** Le temps de parcours d'un tas en utilisant l'algorithme de graphe (BFS, DFS) est réduit à un ordre polynomial.\
**3.** Comme le tas est un arbre binaire complet, pour N nœuds, la hauteur maximale d'un tas est log(N), donc la complexité temporelle pour accéder au nombre maximum et minimum est réduite à un temps constant et pour le Kème élément, elle est réduite à une complexité linéaire.\

[Plus sur les Tas](Heap.md)


#### Table de Hachage

La table de hachage est une structure de données qui stocke les données de manière associative. Dans une table de hachage, les données sont stockées sous forme de tableau, où chaque valeur de données a sa propre valeur d'index unique. L'accès aux données devient très rapide si nous connaissons l'index des données souhaitées.

### Exemple 

```
La fonction de hachage H(x) = [11,12,13,14,15]
// elle sera stockée aux positions {1,2,3,4,5}
// dans le tableau ou la table de hachage respectivement.
```
[Plus sur les Tables de Hachage](HashTable.md)

## Tas

Un tas est une structure de données spécialisée basée sur les arbres qui est un arbre presque complet qui satisfait la propriété du tas. La propriété du tas signifie que l'élément avec la clé la plus grande est toujours dans le nœud racine, un tel tas est parfois appelé un tas max.

### Exemple

```
Laissez le tableau de nombres être [100, 7, 2, 17, 3, 25, 1, 36, 19]
// Il sera sous forme d'arbre où le plus grand nombre pointera vers un nombre plus petit et le plus petit nombre pointera vers un nombre encore plus petit, et ainsi de suite

Une représentation en tas du tableau ressemblerait à ceci :
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```
[Plus sur les Tas](Heap.md)

## Arbre

Un arbre est une structure de données non linéaire et hiérarchique composée d'une collection de nœuds de telle sorte que chaque nœud de l'arbre stocke une valeur et une liste de références vers d'autres nœuds (les "enfants").

### Exemple

```
Laissez le tableau de nombres être [100, 7, 2, 17, 3, 25, 1, 36, 19]
// L'arbre est une méthode spécialisée pour organiser et stocker les données dans l'ordinateur pour être utilisé plus efficacement
Une représentation en arbre du tableau ressemblerait à ceci :
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```
[Plus sur les Arbres](Tree.md)

## Graphe
Un graphe est une structure de données non linéaire composée de sommets et d'arêtes. Les sommets sont parfois également appelés nœuds et les arêtes sont des lignes ou des arcs qui connectent deux nœuds quelconques dans le graphe. Plus formellement, un graphe est composé d'un ensemble de sommets (V) et d'un ensemble d'arêtes (E). Le graphe est noté G(E, V).

[Plus sur les Graphes](Graph.md)
