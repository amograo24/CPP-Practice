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

Q) When a floating-point value is casted to an integer, is it truncated or rounded off?

A)

Q) What's the real difference between a `float` data type and the `double` data type?

A)

Q) Why is there no unsigned or signed for bool, char, float, etc? Can we do a `long char`?

A)

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

Q) how are floating point values stored

Q) expression vs statement?

Q) numeric limits how does it work

so type casting can happen only when there is memory accodation for it in the other type, if not then overflow/underflow occurs?

static cast vs dynamic cast vs const cast vs reinterpret cast

do literal values have a physical memory location
do literal expressions occupy more memory than literal values?

Wikipedia speaks literal is a notation for representing a fixed value within a source code.

can we type cast a literal value?
does int x=3; does x occupy lesser memory than just 3?

is memory occupied and released during compilation?

#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int b = 20;

  int c = a + b;

  cout << c << endl;

  return 0;
}


is the value of c entered during compile time or run time? is the value of a+b calculated during runtime or compile time

int c=3+5;
is this calculated during compile time? is there memory allocated during compilation for these literals?