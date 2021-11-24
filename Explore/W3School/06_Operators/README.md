# Operators

Operators are used to perform operations on variable and values.
In the example below, we use the `+` operator to add together two values :

```c++
int x = 100 + 12;
```

Although the `+` operator is often used to add together two values, like in the example above, it can also be used to add together a variable and a value, or a variable and another variable :

```c++
int sum1 = 100 + 10;      // 110 (100 + 10)
int sum2 = sum1 + 200;    // 310 (110 + 200)
int sum3 = sum2 + sum2;   // 620 (310 + 310)
```

## Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations.
| Operator | Name | Description | Example |
| ---- | ---- | ---- | ---- |
| + | Summation | Adds together two values | x + y |
| - | Subtaction | Subtracts one values from another | x - y |
| \*| Multiplication | Multiples two values | x \* y |
| / | Division | Divides one values by another | x / y |
| % | Modulus | Returns the division remainder | x % y |
| ++ | Increment | Increases the values of a variable by 1 | x++ |
| -- | Decrement | Decreases the values of a variable by 1 | x-- |

## Assigment Operators

Assigment operators are used to assign values to variables.
In the example below, we use the **assigment** operator (`=`) to assign the value 10 to a variable called x:

```c++
int x = 10;
```

The **addition assigment** operator (`+=`) adds a value to a variable :

```c++
int x = 10;
x += 5; // x = x + 5;
// x = 15
```

A list of all assigment operators:
| Operator | Example | Same As |
| ---- | ---- | ---- |
| = | x = 5 | x = 5 |
| += | x += 3 | x = x + 3 |
| -= | x -= 3 | x = x - 3 |
| \*= | x \*= 3 | x = x \* 3 |
| /= | x /= 3 | x = x / 3 |
| %= | x %= 3 | x = x % 3 |
| &= | x &= 3 | x = x & 3 |
| \|= | x \|= 3 | x = x \| 3 |
| ^= | x ^= 3 | x = x ^ 3 |
| >>= | x >>= 3 | x = x >> 3 |
| <<= | x <<= 3 | x = x << 3 |
