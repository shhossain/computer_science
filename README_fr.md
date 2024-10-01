<h1 align="center">Computer Science</h1>
<h4 align="center">
    <p>
        <a href="https://github.com/shhossain/computer_science/blob/main/README.md">English</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_it.md">Italiano</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_es.md">Español</a> |
        <b>Français</b> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_bn.md">বাংলা</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ta.md">தமிழ்</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_guj.md">ગુજરાતી</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_pt.md">Portuguese</a> |
        <a href="https://github.com/shhossain/computer_science/blob/main/README_ro.md">Română</a>
    </p>
</h4>

## Guide de contribution

Si vous souhaitez participez à ce projet, prenez le temps de jeter un oeil au guide contribution [CONTRIBUTING.md](https://github.com/shhossain/computer_science/blob/main/CONTRIBUTING.md) pour obtenir plus de détail sur comment participer et comment commencer. Votre aide est grandement appréciée.

## Table des matières

- [Introduction](#introduction)
- [Ordinateur électronique](#oridnateur-electronique)
- [Logique booléenne](#logique-booleene)
- [Langages de programmation](#langages-de-programation)

## Introduction

L'informatique est l'étude des ordinateurs mais également de l'application théorique et pratique de ceux-ci. L'informatique utilise les principes des mathématiques, de l'ingénierie et de la logique afin de répondre à une multitude de problèmes. Ceci comprend la formulation d'algorithmes, le développement de logiciels et de matériel ainsi que d'intelligence artificielle.

## [Ordinateur électronique](/Electronic%20Computer/readme_fr.md)
Un ordinateur électronique est un appareil qui calcule et plus particulièrement une machine électronique programmable qui effectue des calculs ou des opérations logiques à grande vitesse. Elle peut également assembler, stocker, mettre en corrélation ou traiter l'information.

## [Logique booléenne (ou opérateurs logiques)](Boolean%20Logic/readme.md)
La logique booléenne est une branche des mathématiques qui traite des valeurs dites vraies ou fausses (true ou false). C'est un système logique qui utilise 2 valeurs, 0 et 1, pour différencier respectivement le vrai et le faux. Elle est également appelée algèbre de Boole par son créateur George Boole en 1854.


### Opérateurs booléen récurrents
| Opérateur | Nom |               Description               |
| :------: | :--: | :-------------------------------------: |
|    !     | NON  | Inverse l'état d'une variable booléene. (0 -> 1 ; 1 -> 0) |
|    &&    |  ET  | Retoune **vrai** si TOUTES les conditions sont respéctées. |
|   \|\|   |  OU  | Retoune **vrai** si au moins UNE des conditions est respéctées. |

### Opérateurs booléens utiles
| Opérateur | Nom |               Description               |
| :------: | :--: | :-------------------------------------: |
|    ()    | Parenthèses |   Permet de regrouper des mots-clés et/ou controler l'ordre de recherche. (priorité) |
|    “”    | Guillemets | Renvoie le résultat comprenant la phrase exacte. |
|   *      |  Astérix | Renvoie le résultat comprenant un mot-clé. |
|   ⊕     |  XOR  - OU exclusif | Retourne **vrai** si les entrées sont différentes. |
|   ⊽      |  NOR - OU inversé | Retourne **vrai** si toutes les entrées sont fausses. |
|   ⊼      |  NAND - ET inversé | Retourne **faux** si les deux valeurs d'entrée sont vrais. |

## [Langages de programation](/Programming_Languages/readme_fr.md)
Un langage de programmation est un ensemble de règles qui convertit des chaînes de caractères, ou des éléments graphiques de programme dans le cas des langages de programmation visuels, en différents types de code machine. Les langages de programmation sont un type de langage informatique utilisé dans la programmation pour implémenter des algorithmes. 

Les langages de programmation sont souvent divisés en deux grandes catégories :
1. Les langages dit de "haut-niveau" qui utilisent une syntaxe proche du langage humain. Le code source y est plus intelligible et il est compilé en code executable via un compilateur ou un interpréteur. Java et Python sont deux exemples de langages de "haut-niveau". Ils sont plus simple d'utilisation et plus génériques. En contre partie il peuvent apparaître moins optimisés.
2. Les langages de programmation de bas niveau fonctionnent plus étroitement avec le matériel et offrent un plus grand contrôle sur celui-ci. Ils interagissent directement avec le matériel. Deux exemples courants de langages de bas niveau sont le langage machine et le langage assembleur. Ces langages sont généralement plus rapides que ceux de haut niveau, mais cela se fait au prix d'une grande complexité et d'un manque de lisibilité.

### [Paradigmes de programation](/Programming_Languages/readme_fr.md#Paradigmes+de+programation)
Il existe également plusieurs *paradigmes de programmation* différents. Les paradigmes de programmation sont des façons ou styles différents selon lesquels un programme ou un langage de programmation peut être organisé. Chaque paradigme comporte certaines structures, fonctionnalités et opinions sur la manière dont les problèmes courants de programmation doivent être abordés.

Les paradigmes de programmation *ne sont pas* des langages ou des outils. Vous ne pouvez pas "construire" quoi que ce soit avec un paradigme. Ce *sont* plutôt un ensemble d'idéaux et de lignes directrices sur lesquels de nombreuses personnes se sont mises d'accord, qu'elles ont suivis et sur lesquels elles ont développé. Les langages de programmation ne sont pas toujours liés à un paradigme particulier. Il existe des langages qui ont été conçus en tenant compte d'un certain paradigme et qui ont des fonctionnalités facilitant ce type de programmation plus que d'autres (Haskell et la programmation fonctionnelle en sont un bon exemple). Mais il existe également des langages "multi-paradigmes" dans lesquels vous pouvez adapter votre code pour correspondre à un certain paradigme ou à un autre (JavaScript et Python sont de bons exemples).


<!--TODO: ## [Data Types](Data%20Types/readme.md#data-types)
A data type, in programming, is a classification that specifies which type of value a variable has and what type of mathematical, relational, or logical operations can be applied to it without causing an error.

### [Primitive Data Types](Data%20Types/readme.md#primitive-data-types)
Primitive data types are the most basic data types in a programming language. They are the building blocks of more complex data types. Primitive data types are predefined by the programming language and are named by a reserved keyword.

### [Common Primitive Data Types](Data%20Types/readme.md#common-primitive-data-types)
- [Integer](Data%20Types/readme.md#integer)
- [Float](Data%20Types/readme.md#float)
- [Boolean](Data%20Types/readme.md#boolean)
- [Character](Data%20Types/readme.md#character)
- [String](Data%20Types/readme.md#string)

### [Non-Primitive Data Types](Data%20Types/readme.md#non-primitive-data-types)
Non-primitive data types are also known as reference data types. They are created by the programmer and are not defined by the programming language. Non-primitive data types are also called composite data types because they are composed of other types.

### [Common Non-Primitive Data Types](Data%20Types/readme.md#common-non-primitive-data-types)
- [Array](Data%20Types/readme.md#array)
- [Struct](Data%20Types/readme.md#struct)
- [Union](Data%20Types/readme.md#union)
- [Pointer](Data%20Types/readme.md#pointer)
- [Function](Data%20Types/readme.md#function)
- [Class](Data%20Types/readme.md#class)

## [Statements and Functions](Statements%20and%20Functions/readme.md)
In computer programming, a statement is a syntactic unit of an imperative programming language that expresses some action to be carried out. A program written in such a language is formed by a sequence of one or more statements. A statement may have internal components (e.g., expressions).
There are two main types of statements in any programming language that is necessary to build the logic of a code. -->