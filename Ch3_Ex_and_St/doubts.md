# Doubts

Q) How does the modulo operator work? Check with the following cases p%p, n%n, p%n, n%p. Why is this operator system dependent?

A) If both operands are positive, then the result is positive. However if either of the operand or both the operands are negative, then the result is implementation defined as the action takes as a result of underflow or overflow. So the trend of the modulo operator I observed is that the normal remainder is found, but the sign of the remainder depends on the sign of the numerator: `10%3=1`, `-10%3=-1`, `10%-3=1`, `-10%-3=-1`.

Let's take a look at this case by case to try and understand the math behind it:
- (a) `7%3`: 7/3=2, 2*3=6, 7-6=1, therefore, 7%3 = 1
- (b) `-7%3`: -7/3=-2, -2*3=-6, -7-(-6)=-1, therefore, -7%3 = -1
- (c) `7%-3`: 7/-3=-2, -2*-3=6, 7-6=1, therefore, 7%-3 = 1
- (d) `-7%-3`: -7/-3=2, 2*-3=-6, -7-(-6)=-1, therefore, -7%-3 = -1

So as observed (in simple cases), to obtain `num%denom`, we can first do `num/denom` to obtain `quotient`. Then we do `quotient*denom`  and subtract this from `num` by doing `num-(quotient*denom)` to get the `remainder`. We are using the principle of remainder theorem here: `num=(quotient*denom)+remainder`.


Q) How does an assignment statement work when it part of another statement or an expression? Are the new values changed in real-time if it is compounded with the same variable?

A) So an assignment expression in a statement changes the value of the variable in real-time. However, if the same variable is used multiple times, then the value of the variable can be very different at different instances in the same expression. It all depends on the order of presedence, and associativity.

For example, we have `int y=10, z=5;` at ALL instances. The following expressions will lead to their respective outcomes: 
- `(y=(y+z)+(y=2))` => y=(**10**+5)+(**2**) -> y=17
- `(y=(y=2)+(y+z))` => y=(**2**)+(**2**+5) -> y=9
- `(y=(y+z)+(y=2)+y-4)` => y=(**10**+5)+(**2**)+**2**-4 -> y=15
- `(y=(y=2)+(y+z)+y-4)` => y=(**2**)+(**2**+5)+**2**-4 -> y=7

Q) When we perform `3.0+9`, the `9` is implicitly casted into a `9.0`. Therefore, is new memory allocated for this `9.0` as well? How does the memory management work in type casting? When a variable is type casted, then what is happening in the memory?

A) So type casting doesn't really change the value stored inside the variable that has been typecasted, hence the type of that variable will be the same, and the memory occupied by the variable will be the same. In C++, variables cannot change their type. C++ is a statically typed language, which means that the type of the variable is determined at compile time. What happens when we cast is it changes the interpretation or view of the existing memory contents (value) based on the desired type. Type casting only affects how the value stored in memory is interpreted or treated by the program.

Now, with respect to the example in `3.0+9`, to explain in simple word:
- The integer literal 9 is temporarily converted to a floating-point value.
- Temporary memory is allocated to store the converted floating-point value.
- The addition operation is performed between 3.0 and the converted value using the allocated memory.
- The memory of this converted value is now released once it is used.

Now, note that the representation of int `9` will be differerent from float `9.0` as the representation of floating point numbers is different from that of integers. Therefore when type casting takes places, the original variable or value is not affected, instead the representation of the value is looked at (either temporarily, or stored in a variable if assigned).

Q) Can we type cast a literal value?

A) Yes, we can type cast a literal value. For example, `(double) 8` will yield `8.00000`.

Q) Is temporary memory occupied by the system during the compilation of the C++ file?

A) Yes, temporary memory is used by the system during the compilation of a C++ file. The compiler needs to parse the source code, perform syntax analysis, and generate the corresponding object code or an intermediate representation. This process often requires memory to store the compiler's internal data structures, such as symbol tables, syntax trees, and intermediate code representations. Therefore, there is memory being occupied for all this. However, it is to be noted that this is different from the memory occupied by the objects when the executable file is run. The compilation process itself does not directly affect the runtime memory consumption of the resulting program.

Q) Are literal expressions evaluated at run-time or compile time? 

A) Literal expressions are generally evaluated at compile time itself. For example: in `double timeInMinutes = (double) timeInMilliseconds / (1000 * 60);`, the `1000*60` is evaluated at compile time itself and the new assignment statement is `double timeInMinutes = (double) timeInMilliseconds / 60000;`. What happens during run-time is the overall division since it involves a variable (and the value of that variable will be determined during the run time).

```
  #include <iostream>

  using namespace std;

  int main() {
    int a = 10;
    int b = 20;

    int c = a + b;
    int d = 2+3;

    cout << c << endl;

    return 0;
  }
```

The `a+b` is evaulated at run-time whereas `2+3` is evaluated at compile time. This is because `a` and `b`are variables and their value can change throughout the program. It's an instruction that during run time, find the sum of the values of `a` and `b` and assign that to `c`. The other thing that happens is `2+3` is calculated at compile time as `5`. So the run time instruction is to just assign `5` to `d` (`int d=5;`) and not actually calculating `2+3`.

This depends across compilers, however any half decent compiler will most probably do what's mentioned above.

> Wikipedia speaks literal is a notation for representing a fixed value within a source code.

Q) Any trend or relation observed to overflow/underflow with type casting?

A) So type casting can happen only when there is memory accodation for it in the other type, if not then overflow/underflow occurs. When performing type casting, it is important to consider the range and memory accommodation of the target type. If the value being casted cannot be accommodated within the range of the target type, overflow or underflow may occur.

Q) Difference between implicit cast and explicit cast?

A) Implicit casting is done automatically by the compiler and there is generally no information loss, whereas explicit casting is done by the user and may have data loss. Types of explicit casting: static cast, dynamic cast, const cast, reinterpret cast. For basic conversions, stick to static cast.

Q) When a floating-point value is casted to an integer, is it truncated or rounded off?

A) The value is actually truncated when being converted from a `float` to an `int`. Binary number system can represent only some rational numbers with finite digit count. All floating point numbers cannot be accurately represented. For example `1/5` or `1/3` cannot be accurately represented as a floating-point value. We should be careful about the **roundoff error**. There might be an error resulting from inexact
representation which can accumulate causing round-off of values.

Q) Why is there no unsigned or signed for bool, char, float, etc? Can we do a `long char`?

A) The modifiers signed, unsigned, long, and short can be applied to integer base types. In addition, signed and unsigned can be applied to char, and long can be applied to double.

Q) Can a positive value >> max be positive?

A)

Q) What are the 2 maximum values and 2 minimum values for floating point numbers?

A) 

Q) If a manipulator is not meant for a particular data type, and it is still used, then does an implicit type cast take place?

A)

Q) Can we use `char` in `setprecision` and `setw` and `int` in `setfill`? What happens when we use a `double`?

A)

Q) Do input manipulators change the state of the input stream?

A)

Q) Is any variable in the `main()` function a global variable?

A)

Q) Is `6;` a null statement?

A)

Q) Does a function or a loop basically have space for just one statement?  A compound or single, but just one statement?

A)

Q) Can `main` have any other return type or no return type?

A)

Q) Can `setprecision` be used any other data types? What happens then?

A)

Q) There's type casting taking place as we do char=3.44?

A)


Q) expression vs statement?

Q) numeric limits how does it work

is expression evaluation a form of recursion?