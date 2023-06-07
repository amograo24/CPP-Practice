# Doubts 

Q) Can we use `>>` instead of `=`? For example:
    ```cpp
    x+5>>y
    ```
    That way, the value on the LHS is being stored in the location of RHS

Similarly, is `x = y` the same as `x << y` or `y >> x`?

A) We cannot replace the assignment operator with `<<` or `>>` since these operators are overloaded specificly for the purpose of iostreams.

Q) What happens when we try to use a keyword as a variable name?

A) It is illegal according to the rules of the language to use a keyword as a variable name, and hence it will produce a compilation error.

Q) Do "Literals Used as Stand-Alone Values" occupy same amount of memory? For example:
    ```
    int sides = 4
    for i in list:
        print(i*sides)
    ```
    and
    ```
    for i in list:
        print(i*4)
    ```
    the `sides` variable must be occupying memory in the first snippet, but does the `4` stand alone integer literal also occupy the same amount of memory?

A) Stand Alone Literals are generally stored in the program's read only memory or data segment. They are directly stored in machine code. Therefore the literal value does not require extra memory seperately. The literal value obviously does occupy memory, but it is directly taken. Literal values are treated as immediate values and do not require extra memory storage during runtime. It's adviceable to use literals where ever possible in most cases to have efficient memory usage. These stand alone literals do not require memory allocation at run-time because they are not stored in memory as seperate entities. They are known as compile time constants, 

In the above example, the first snippet occupies more memory than the second snippet due to the `sides` variable.

Variables are also stored in hash tables that contain other meta data for easier lookouts. Whereas, literal values are often shared. Literals are a part of the read-only memory, whereas variables are mostly part of the write-only memory.

Also, if a literal value is used multiple times in your code, the compiler may optimize memory usage by sharing the same value rather than creating separate instances. This optimization technique is known as "constant folding" or "constant propagation."

Let's come back to Memory Management, and Compilation in the future.

Q) What if the escape character is invalid? what happens in such a case? for example `\m`?

A) The character is just printed as it is. So basically the `\` is used to either print the value as it is, or the meaning it holds. For example, `\c` is an invlaid escape sequence, and hence it prints `c`. However, `\"` is a valid escape sequence, and it prints `"` (the value). Likewise, `\n` prints a new line and not `n` because it has a special meaning.

Q) How exactly are values of the `bool` types stored? Basically how is the `bool` type represented in memory?

A) In most cases, the `bool` type just requires 1 bit to store the result as `true` or `false`. However, the computer architecture generally can't access something that is lesser than a byte. Hence 1 byte of memory is used. There are some other benefits to this too.

Q) Does the `void` data type occupy any memory? Can it be used for initialization? Can we declare a variable like `void hello;`?

A) The `void` data type is an incomplete type and is used just to show the absence of a value. It can be use only in limited places such as return type of a function, or declaring a void pointer. `void hello;` will produce an error.

Q) Is there something called `null` in C++? Can a variable be re-initialized to null after being initialized already?

A) There is no initialization to null in C++. In fact there is something called a nullptr that represents the null pointer value. There's nothing called `null` in C++.

Q) If i put the value of a `long` in a `short`, what happens to the value? Or a `double` in a `short int`?

A) Either the value is trunctated, rounded off, or there is an overflow/underflow.

Q) When it comes to strings in C++, are the string literals taken as C strings with the NULL character (`\0`)? 

A) Yes, string literals are C strings with an extra NULL Character. This is like a stopping character. For example, `'a'` occupies one byte, whereas the string literal `"a"` occupies two bytes. This is because it has the extra null character.

Q) How many bytes does a string literal occupy? How is this in comparision with the `string` class?

A) Based on initial observations, string literals occupy one byte per character. So `"amog"` will occupy 5 bytes as 4 characters + 1 NULL character. Similarly, based on initial observations, string class objects occupy around 24 bytes irrespective of the length of the string as long as it's within the range.

Q) Does `sizeof` work for literal values?

A) Yes, `sizeof` works for literal values too. It tells how many bytes the literal values occupy.

Q) How to find range of the type and it's prefixes/suffixes?

A) Find the number of bytes the type occupies using `sizeof`. Now if it is signed, then the range is `[-(2^(bytes*8-1)),(2^(bytes*8-1)-1)]`. If it is unsigned, then the range is `[0,(2^(bytes*8)-1)]`.