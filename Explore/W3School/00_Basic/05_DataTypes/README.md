# Data Types

C++ variable must be a specified data type :

```c++
  int myNum = 5; // Integer
  float myFloat = 4.2; // Floating point number
  double myDouble = 22.33; // Floating point number
  char initials = 'I'; // Character
  bool myBool = true; // Boolean
  string myString = "Noridc"; // String
```

## Basic Data Types

The data type specified the size and type of information the variable will store:

| Data type | Size    | Description                                                                                         |
| --------- | ------- | --------------------------------------------------------------------------------------------------- |
| int       | 4 bytes | Store whole numbers, without decimals                                                               |
| float     | 4 bytes | Store fractional numbers, containing one or more decimals. sifficient for storing 7 decimal digit   |
| double    | 8 bytes | Store fractional numbers, containing one or more decimals. Sufficient for storing 15 decimals digit |
| boolean   | 1 byte  | Stores true or false value                                                                          |
| char      | 1 byte  | Stores a single character/letter/number, or ASCII values                                            |

## Numeric Types

Use `int` when you need to store number without decimals, like 12 or 100, and `float` or `double` when you need a floating point number(with decimals), like 9.99 or 3.14515

-   int
    ```c++
    int myInt = 1000;
    ```
-   float
    ```c++
    float myFloat = 5.75;
    ```
-   double
    ```c++
    double myDouble = 22.78;
    ```

> **float** vs **double**
>
> The **precision** of a floating point value indicates how many digits the value can have after the decimal point. The precision of **float** is only six or seven decimal digits, while **double** for most calculations.

#### Scientific Numbers

A floating point number can also be a scientific number with "e" to indicate the power of 10 :

```c++
float fl = 35E4;
double dl = 12E4;
cout << fl; // 350000
cout << dl; //120000
```

## Boolean Data Types

A boolean data types is declare with the `bool` keyword can only take the values `true` or `false`. When the value is returned, `true` = 1 and `false` = 0.

> Boolean values are mostly used for conditional testing.

## Character Data Types

A `char` data types is used to store a **single** character. The character must be surrounded by single quotes, like 'A' or 'p' :

```c++
char thisChar = 'P';
char thisAlsoChar = 'p';
```

However a character can store more than a single character :

```c++
char yourname[12] = "oabd ae";
```

As you can see above the character doesn't surrounded by single quotes but sorrounded with double quotes "oabd ae".
Alternatively, you can use ASCII values to display certain character :

```c++
char a = 65, b = 56, c = 75;
```

A list of all ASCII values can be found in [ASCII Table Reference.](https://www.w3schools.com/charsets/ref_html_ascii.asp)

## String

The string data type is used to store of character (text). This is not built in type, but it behaves like one in it most basic usage. String values must be surrounded with double quotes:

```c++
string yourName = "Aya";
cout << yourName;
```

To use string, you must include an additional file header in the source code, the `<string>` library:

```c++
#include <string>
```
