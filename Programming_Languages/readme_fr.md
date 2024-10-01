# Langages de programmation

>On peut distinguer deux types de langages de programmation :

1. Les langages dit de "haut-niveau" qui utilisent une syntaxe proche du langage humain. Le code source y est plus intelligible et il est compilé en code executable via un compilateur ou un interpréteur. Java et Python sont deux exemples de langages de "haut-niveau". Ceux-ci sont généralement plus lents que les langages de bas niveau, mais cela s'accompagne d'une plus grande facilité. 
2. Les langages de programmation de bas niveau fonctionnent plus étroitement avec le matériel et offrent plus de contrôle sur celui-ci. Ils interagissent directement avec le matériel. Deux exemples courants de langages de bas niveau sont le langage machine et le langage assembleur. Ceux-ci sont généralement plus rapides que les langages de haut niveau, mais cela se fait au prix d'une grande complexité.

Quelques langages incluent : 

- [Python](https://www.python.org) - [Java](https://www.java.com/) 
- [JavaScript](https://www.javascript.com/) 
- [C++](https://www.cplusplus.com/) 
- [C](Pas-de-site-web)
- [C#](Pas-de-site-web) 
- [Go](https://www.go.dev/) 
- [Swift](https://developer.apple.com/swift/)

### Langages de Script 

Un langage de script est un langage informatique qui n'a pas besoin d'être compilé. Un des avantages des langages de script est que le code peut être rapidement modifié et réexécuté. Ils peuvent être utilisés du côté serveur des applications web et du côté client des applications web.

Quelques langages de script incluent : 

- [JavaScript](https://www.javascript.com/) 
- [PHP](https://www.php.net/) 
- [Java](https://www.java.com/) 
- [JavaScript](https://www.javascript.com/) 
- [C++](https://www.cplusplus.com/) 
- [C](Pas-de-siteweb) 
- [C#](Pas-de-site-web) 
- [Go](https://www.go.dev/) 
- [Swift](https://developer.apple.com/swift/) 

### Paradigmes de Langages de Programmation 

Les langages de programmation sont également souvent classés en plusieurs _paradigmes de programmation_ différents. Les paradigmes de programmation sont des façons ou styles différents selon lesquels un programme ou un langage de programmation peut être organisé. Chaque paradigme comporte certaines structures, fonctionnalités et opinions sur la manière dont les problèmes courants de programmation doivent être abordés.

Quelques paradigmes de programmation populaires incluent : 

- programmation impérative 
- programmation procédurale 
- programmation fonctionnelle 
- programmation orientée objet 
- programmation déclarative 

**Programmation impérative** : La programmation impérative consiste en un ensemble d'instructions détaillées données à l'ordinateur pour être exécutées dans un ordre précis. On l'appelle "impérative" parce que, en tant que programmeurs, nous dictons exactement ce que l'ordinateur doit faire, de manière très spécifique, étape par étape. Un exemple de programmation impérative pourrait ressembler à ceci : 

```javascript 
const nums = [1, 4, 3, 6, 7, 8, 9, 2]; 
const result = [];

for (let i = 0; i < nums.length; i++) {
  if (nums[i] > 5) result.push(nums[i]);
}
console.log(result); // Sortie : [6,7,8,9] 
```

Nous demandons au programme de parcourir chaque élément du tableau, de comparer la valeur de l'élément avec 5, et de l'ajouter à un tableau. Nous donnons des instructions détaillées et spécifiques, ce qui est typique de la programmation impérative. 

**Programmation procédurale** : La programmation procédurale est une dérivation de la programmation impérative, y ajoutant les fonctionnalités des fonctions (également appelées "procédures" ou "sous-routines"). En programmation procédurale, l'utilisateur est encouragé à subdiviser l'exécution du programme en procédures, dans le but d'améliorer la modularité et l'organisation. 

**Programmation fonctionnelle** : La programmation fonctionnelle pousse le concept de fonctions un peu plus loin. Les fonctions sont traitées comme des **citoyens de première classe**, ce qui signifie qu'elles peuvent être assignées à des variables, passées comme arguments, et retournées par d'autres fonctions. La programmation fonctionnelle défend l'idée que la modularité du code et l'absence d'effets secondaires facilitent l'identification et la séparation des responsabilités au sein du code. Cela améliore ainsi la maintenabilité du code. Revenons à l'exemple du filtrage de tableau ; dans le paradigme impératif, nous pourrions utiliser une variable externe pour stocker le résultat de la fonction, ce qui peut être considéré comme un effet secondaire. 

```javascript 
const nums = [1, 4, 3, 6, 7, 8, 9, 2];
const result = []; // Variable externe

for (let i = 0; i < nums.length; i++) { 
  if (nums[i] > 5) result.push(nums[i]); 
} 
console.log(result); // Sortie : [6,7,8,9] 
``` 

Pour transformer cela en un idiome fonctionnel, nous pourrions procéder ainsi :

```javascript
const nums = [1, 2, 3, 6, 7, 8, 9, 2];

function filterNums() {
  const result = []; // Variable interne

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] > 5) result.push(nums[i]);
  }
  return result;
}

console.log(filterNums()); // Sortie: [ 6,7,8,9 ]
```

Le code est presque le même, mais nous encapsulons notre itération dans une fonction, dans laquelle nous stockons également le tableau de résultats. De cette façon, nous pouvons nous assurer que la fonction ne modifie rien en dehors de sa portée. Elle ne crée qu'une variable pour traiter ses propres informations, et une fois l'exécution terminée, la variable disparaît également.

**Programmation déclarative** : La programmation déclarative consiste à masquer la complexité et à rapprocher les langages de programmation du langage humain et de la réflexion humaine. C'est l'opposé direct de la programmation impérative dans le sens où le programmeur ne donne pas d'instructions sur _comment_ l'ordinateur doit exécuter sa tâche, mais plutôt sur _quel_ résultat est nécessaire. Cela sera beaucoup plus clair avec un exemple. 

En suivant la même histoire de filtrage de tableau, une approche déclarative pourrait être : 

```javascript
const nums = [1, 4, 3, 6, 7, 8, 9, 2];

comsole.log(nums.filter((num) => num > 5)); //
```

On voit qu'avec la fonction `filter`, nous ne disons pas explicitement à l'ordinateur de parcourir le tableau ou de stocker les valeurs dans un tableau séparé. Nous disons simplement ce que nous voulons ("filter") et la condition à remplir ("num > 5"). 

**Programmation orientée objet** : L'un des paradigmes de programmation les plus populaires est la programmation orientée objet (POO). Le concept central de la POO est de séparer les préoccupations en entités codées sous forme d'objets. Chaque entité regroupe un ensemble d'informations (propriétés) et d'actions (méthodes) qui peuvent être réalisées par l'entité. 

La POO utilise largement les classes, qui sont une manière de créer de nouveaux objets à partir d'un modèle ou d'une structure prédéfinie que le programmeur définit. Les objets créés à partir d'une classe sont appelés des instances. 