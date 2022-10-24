# Boolean Logic

Boolean logic is a branch of mathematics that deals with the values of truth and falsehood. It is a system of logic that uses only two values, 0 and 1, to represent false and true, respectively. It is also known as Boolean algebra, named after George Boole, who first described it in 1854.

Programs use simple comparisons to help make decisions. Boolean logic is a form of algebra where all values are either True or False. These values of true and false are used to test the conditions that selection and iteration are based around.

## Common Boolean Operators

| Operator | Name |               Description               |
| :------: | :--: | :-------------------------------------: |
|    !     | NOT  |    Negates the value of the operand.    |
|    &&    | AND  | Returns true if both operands are true. |
|   \|\|   |  OR  | Returns true if either operand is true. |

## Boolean Algebra

Boolean algebra is a branch of algebra in which the values of the variables are the truth values true and false, usually denoted 1 and 0 respectively. Instead of elementary algebra where the values of the variables are numbers and the main operations are addition and multiplication, the main operations of Boolean algebra are the conjunction (denoted ∧), the disjunction (denoted ∨), and the negation (denoted ¬). These operations are also known as logical AND, logical OR, and logical NOT, respectively.

### Algebraic Laws

Boolean algebra has the following laws:

- Commutative law: a ∧ b = b ∧ a and a ∨ b = b ∨ a
- Associative law: (a ∧ b) ∧ c = a ∧ (b ∧ c) and (a ∨ b) ∨ c = a ∨ (b ∨ c)
- Distributive law: a ∧ (b ∨ c) = (a ∧ b) ∨ (a ∧ c) and a ∨ (b ∧ c) = (a ∨ b) ∧ (a ∨ c)
- Identity law: a ∧ 1 = a and a ∨ 0 = a
- Domination law: a ∧ 0 = 0 and a ∨ 1 = 1
- Double negation law: ¬¬a = a

### De Morgan's Laws
In propositional logic and Boolean algebra, De Morgan's laws are a pair of transformation rules that are both valid rules of inference. The rules allow the expression of conjunctions and disjunctions purely in terms of each other via negation.

The rules can be expressed in English as:
- not (a or b) = (not a) and (not b)
- not (a and b) = (not a) or (not b)

In set theory and Boolean algebra, these are written formally as:
- ¬(a ∨ b) = (¬a) ∧ (¬b)
- ¬(a ∧ b) = (¬a) ∨ (¬b)

Note : Here '^' is used to denote the logical AND operation and 'v' is used to denote the logical OR operation.

## Boolean Operators

Boolean is a set of commands that can be used in almost every search engine, database, or online catalogue.  The most popular Boolean commands are AND, OR, and NOT. Boolean operators are used to combine two or more expressions to form a more complex expression. The result of a Boolean operator is always a Boolean value, either true or false. The following table lists the Boolean operators in JavaScript.

| Operator | Description |
| -------- | ----------- |
| &&       | Logical AND |
| \|\|     | Logical OR  |
| !        | Logical NOT |

### Truth Table

Truth tables are used to represent the logical relationships between Boolean variables. A truth table is a table that shows the logical relationships between the input variables and the output variables. The input variables are the variables that are used to calculate the output variables. The output variables are the variables that are calculated from the input variables.

### AND Truth Table

The AND truth table is shown below.
| A | B | A && B |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### OR Truth Table

The OR truth table is shown below.
| A | B | A \|\| B |
|---|---|----------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### NOT Truth Table

The NOT truth table is shown below.
| A | !A |
|---|----|
| 0 | 1 |
| 1 | 0 |

### Boolean Expressions

A boolean expression is combination of boolean operators,constants and variables combined together to evalute to boolean value.Basically they help in mathematically representing the various boolean circuits thereby allowing the designer to analyse them easily.
Example: f(A,B)=AB'+A'B

### Canonical and Standard forms of Boolean Expressions

Suppose there are two input variables (x,y) in the system .
We can get four Boolean product terms by combining two variables x and y with logical AND operation. These Boolean product terms are called as **min terms** or **standard product terms**. The min terms are x’y’, x’y, xy’ and xy.

A min term always evaluates to one.

So suppose x=0 and y=1 .So the corresponding minterm will be x'y.

Similarly, we can get four Boolean sum terms by combining two variables x and y with logical OR operation. These Boolean sum terms are called as **max terms** or **standard sum terms**. The Max terms are x + y, x + y’, x’ + y and x’ + y’.

A max term always evaluates to zero .

So suppose x=0 and y=1 .So the corresponding minterm will be x+y'.

#### Representation of possibilities:

| x   | y   | Min Term | Max Term |
| --- | --- | -------- | -------- |
| 0   | 0   | x'y'     | x+y      |
| 0   | 1   | x'y      | x+y'     |
| 1   | 0   | xy'      | x'+y     |
| 1   | 1   | xy       | x'+y'    |

### Canonical Expressions

There are either sum of product(SOP) of minterms or product of sums(POS) of all maxterms in the boolean system which help in giving the boolean result of the system.

**Example:** Suppose a two variable system(x,y) has the following output combination.

| x   | y   | Output | Minterms | Maxterms |
| --- | --- | ------ | -------- | -------- |
| 0   | 0   | 0      | ---      | x+y      |
| 0   | 1   | 1      | x'y      | ---      |
| 1   | 0   | 1      | xy'      | ---      |
| 1   | 1   | 0      | ---      | x'+y'    |

Canonical SOP expression:- x'y+xy'.

Canonical SOP expression:- (x+y)(x'+y').

### Basic Operations

The basic operations of Boolean algebra are conjunction, disjunction, and negation. These Boolean operations are expressed with the corresponding binary operators AND, and OR and the unary operator NOT, collectively referred to as Boolean operators.

The basic Boolean operations on variables x and y are defined as follows:

| Logical operation | Operator | Notation | Alternative notations | Definition                              |
| ----------------- | -------- | -------- | --------------------- | --------------------------------------- |
| Conjunction       | AND      | x∧y      | x AND y, Kxy          | x∧y = 1 if x = y = 1, x∧y = 0 otherwise |
| Disjunction       | OR       | x∨y      | x OR y, Axy           | x∨y = 0 if x = y = 0, x∨y = 1 otherwise |
| Negation          | NOT      | ¬x       | NOT x, Nx, x̅, x', !x  | ¬x = 0 if x = 1, ¬x = 1 if x = 0        |

Alternatively the values of x∧y, x∨y, and ¬x can be expressed by tabulating their values with truth tables as follows:

![basic-operation-boolean-logic](https://user-images.githubusercontent.com/62456215/193660730-f9df2314-95d2-49d9-9831-41ce41c7180b.jpg)

If the truth values 0 and 1 are interpreted as integers, these operations may be expressed with the ordinary operations of arithmetic (where x + y uses addition and xy uses multiplication), or by the minimum/maximum functions:

![basic-operation-boolean-logic-2](https://user-images.githubusercontent.com/62456215/193661769-dd7b2551-7f18-4b7a-bd4c-bce4045f9956.jpg)

One might consider that only negation and one of the two other operations are basic, because of the following identities that allow one to define conjunction in terms of negation and the disjunction, and vice versa ([De Morgan's laws](https://en.wikipedia.org/wiki/De_Morgan%27s_laws)):

![basic-operation-boolean-logic-3](https://user-images.githubusercontent.com/62456215/193661772-a25dd7c9-d1f2-4a08-8b33-7e1c87dd6488.jpg)

### K-Map method of Boolean Reduction

The major problem with large boolean expression is that it is very difficult to reduce them with boolean logical operators.Hence K-Map is a graphical method of reduction which eases the task upto 5 input variables.

#### 2 variable K-Map

The number of cells in 2 variable K-map is four, since the number of variables is two. The following figure shows 2 variable K-Map.

2 Variable K-Map

![image](https://user-images.githubusercontent.com/65187507/193468957-4eb297af-2d32-4ba8-bef3-904624e984ca.png)

![image](https://user-images.githubusercontent.com/65187507/193468966-30c01e97-e48b-4c16-90c2-f983cdeab5ef.png)

- There is only one possibility of grouping 4 adjacent min terms.

- The possible combinations of grouping 2 adjacent min terms are {(m0, m1), (m2, m3), (m0, m2) and (m1, m3)}.

#### 3 Variable K-Map

The number of cells in 3 variable K-map is eight, since the number of variables is three. The following figure shows 3 variable K-Map.

3 Variable K-Map

![image](https://user-images.githubusercontent.com/65187507/193469022-296494d5-9fa7-4406-b51d-58c1276fa864.png)

There is only one possibility of grouping 8 adjacent min terms.

- The possible combinations of grouping 4 adjacent min terms are {(m0, m1, m3, m2), (m4, m5, m7, m6), (m0, m1, m4, m5), (m1, m3, m5, m7), (m3, m2, m7, m6) and (m2, m0, m6, m4)}.

- The possible combinations of grouping 2 adjacent min terms are {(m0, m1), (m1, m3), (m3, m2), (m2, m0), (m4, m5), (m5, m7), (m7, m6), (m6, m4), (m0, m4), (m1, m5), (m3, m7) and (m2, m6)}.

- If x=0, then 3 variable K-map becomes 2 variable K-map.

#### 4 Variable K-Map

The number of cells in 4 variable K-map is sixteen, since the number of variables is four. The following figure shows 4 variable K-Map.

![image](https://user-images.githubusercontent.com/65187507/193469057-82edb678-22b8-4eac-b3a5-4693de5075cd.png)

- There is only one possibility of grouping 16 adjacent min terms.

- Let R1, R2, R3 and R4 represents the min terms of first row, second row, third row and fourth row respectively. Similarly, C1, C2, C3 and C4 represents the min terms of first column, second column, third column and fourth column respectively. The possible combinations of grouping 8 adjacent min terms are {(R1, R2), (R2, R3), (R3, R4), (R4, R1), (C1, C2), (C2, C3), (C3, C4), (C4, C1)}.

- If w=0, then 4 variable K-map becomes 3 variable K-map.

#### 5 Variable K-Map

The number of cells in 5 variable K-map is thirty-two, since the number of variables is 5. The following figure shows 5 variable K-Map.

5 Variable K-Map

![image](https://user-images.githubusercontent.com/65187507/193469399-f8cb0101-1b9a-4d35-8ee7-3d9236ddb521.png)

- There is only one possibility of grouping 32 adjacent min terms.

- There are two possibilities of grouping 16 adjacent min terms. i.e., grouping of min terms from m0 to m15 and m16 to m31.

- If v=0, then 5 variable K-map becomes 4 variable K-map.

- In the above all K-maps, we used exclusively the min terms notation. Similarly, you can use exclusively the Max terms notation.

### Minimization of Boolean Functions using K-Maps

If we consider the combination of inputs for which the Boolean function is ‘1’, then we will get the Boolean function, which is in standard sum of products form after simplifying the K-map.

Similarly, if we consider the combination of inputs for which the Boolean function is ‘0’, then we will get the Boolean function, which is in standard product of sums form after simplifying the K-map.

Follow these rules for simplifying K-maps in order to get standard sum of products form.

- Select the respective K-map based on the number of variables present in the Boolean function.

- If the Boolean function is given as sum of min terms form, then place the ones at respective min term cells in the K-map. If the Boolean function is given as sum of products form, then place the ones in all possible cells of K-map for which the given product terms are valid.

- Check for the possibilities of grouping maximum number of adjacent ones. It should be powers of two. Start from highest power of two and upto least power of two. Highest power is equal to the number of variables considered in K-map and least power is zero.

- Each grouping will give either a literal or one product term. It is known as prime implicant. The prime implicant is said to be essential prime implicant, if atleast single ‘1’ is not covered with any other groupings but only that grouping covers.

- Note down all the prime implicants and essential prime implicants. The simplified Boolean function contains all essential prime implicants and only the required prime implicants.

- Note 1 − If outputs are not defined for some combination of inputs, then those output values will be represented with don’t care symbol ‘x’. That means, we can consider them as either ‘0’ or ‘1’.

- Note 2 − If don’t care terms also present, then place don’t cares ‘x’ in the respective cells of K-map. Consider only the don’t cares ‘x’ that are helpful for grouping maximum number of adjacent ones. In those cases, treat the don’t care value as ‘1’.
