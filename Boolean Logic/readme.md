# Boolean Logic
Boolean logic is a branch of mathematics that deals with the values of truth and falsehood. It is a system of logic that uses only two values, 0 and 1, to represent false and true, respectively. It is also known as Boolean algebra, named after George Boole, who first described it in 1854.

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
- De Morgan's law: ¬(a ∧ b) = ¬a ∨ ¬b and ¬(a ∨ b) = ¬a ∧ ¬b

Note : Here '^' is used to denote the logical AND operation and 'v' is used to denote the logical OR operation.


## Boolean Operators
Boolean operators are used to combine two or more expressions to form a more complex expression. The result of a Boolean operator is always a Boolean value, either true or false. The following table lists the Boolean operators in JavaScript.

| Operator | Description |
|----------|-------------|
| &&       | Logical AND |
| \|\|     | Logical OR  |
| !        | Logical NOT |

### Truth Table
Truth tables are used to represent the logical relationships between Boolean variables. A truth table is a table that shows the logical relationships between the input variables and the output variables. The input variables are the variables that are used to calculate the output variables. The output variables are the variables that are calculated from the input variables.

### AND Truth Table
The AND truth table is shown below.
| A | B | A && B |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 0      |
| 1 | 0 | 0      |
| 1 | 1 | 1      |

### OR Truth Table
The OR truth table is shown below.
| A | B | A \|\| B |
|---|---|----------|
| 0 | 0 | 0        |
| 0 | 1 | 1        |
| 1 | 0 | 1        |
| 1 | 1 | 1        |

### NOT Truth Table
The NOT truth table is shown below.
| A | !A |
|---|----|
| 0 | 1  |
| 1 | 0  |

## 
