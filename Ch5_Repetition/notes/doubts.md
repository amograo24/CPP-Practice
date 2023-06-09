# Doubts

Q) Can postfix and prefix operations be done on literals? Or on other integral and non-integral types?

A) From my observation, `int`, `double`, and `char` can use postfix and prefix operations. The type `bool` does not permit postfix or prefix operations. However, we can always do `b1+=1` for `bool` types. These postfix/prefix operations do not work on literal values as a modifyable lvalue is required (I think this is because the modified value must also be stored in some variable).

Q) Is there a difference in the value returned of an infix or postfix expression that is surrounded by paranthesis? For example is there any difference between `x++ + 3` and `(x++) + 3`?

A) There is no difference between x+++3 and (x++)+3.

Q) Is postfix/prefix possible apart from increments and decrement by 1? Can we have postfix or prefix to increment by any other number?

A) Postfix/prefix is specifically designated to increment or decrement by 1. If we want to do with any other operation or number, then we can use the compound assignment operator.

Q) What would the following do? What is the trend you observe?
- x++10
- x+++y
- x+++10
- x++++
- (x++)++
- x++++y

A) It's important to note that postfix/prefix operations return an rvalue. Hence trying a postfix/prefix in a chained manner will result in an error as we are trying to perform a postfix/prefix again on an rvalue. It's also important to be fully aware of the presedence and associativity of the various groups.

- x++10 => (x++)10 => error
- x+++y => x++ + y
- x++++ => (x++)++ => (rvalue)++ => error
- x++++y => (x++)++y => error
- x++++y => ((x++)++)+y => error
- x+++(++y) => (x++)+(++y)
- (x++)+++y => ((rvalue)++)+y => error

Q) What trend do you observe about adding or subtracting values from bool?

A) When we subtract or add values from a bool, the result will either be a `1` or a `0` no matter what. So the only way to make a true into a false by compound assignment is to subtract it by 1. The only way to make a false into a true is by adding or subtracting any non-zero number to it. For example, if b1=1:
- In the series of statements b1+=1, b1-=3, b1+=1, we are thinking b1 becomes 2, then -1, then 0. However, it becomes 1, then 1 again, and then 1 again.

Q) Can variables be initialized in the test condition of a while loop or do-while loop? If so, are these variables local? And what's the difference of initializing in a do-while test condition vs a while test condition? Is this variable initialized every single time?

A) These are the points I observed:
- A variable declaration in the condition must have an initializer
    - `while(int w);` will produce an error, whereas `while(int w=5);`
- During declaration/initialization in the test condition of the loop, the loop runs in an infinite manner if the value turns out to be a boolean true, the reason being it is re-initialized every iteration. So something like:
    - `int w; while(w=5)` or `while(int w=5);` will run infinitely as we are assigning 5 to w in every iteration (which is boolean true).
    - `int w; while(w=0)` or `while(int w=0);` will never run because we are assigning 0 to w in every iteration (which is boolean false).
- We can use postfix/prefix exprssions in the test condition of the loop. The test condition will take the return value of the postfix/prefix. However, the value of the variable within the loop will be the updated value.
    - `int w=5; while(w--);` will result in the loop running 5 times, and if we happen to print the values of w inside the loop, we would get 4 to 0 (both inclusive).
    - `int w=5; while(--w);` will result in the loop running 4 times, and if we happen to print the values of w inside the loop, we would get 4 to 1 (both inclusive).
- A loop with a boolean true test condition and no updating of any event or variable in that condition, and an empty body will run forever.
    - `int w=5; while(w>3);` or `int w=5; while(w>3){}` will run infinite times(it's basically a normal loop, but empty body, so it runs empty body in every iteration)
    - `int w=5; while(w--);` or `int w=5; while(w--){}` will terminate after 5 trials since the value of w is updating in each iteration


Q) While initializing an integer, can we use commas? Or can we pad it with zeroes? Can we put signes? Is there some form of unpacking?

A) No, we cannot use commas while initializing int or floating-point values. If we pad it with zeroes, it is considered an octal. However, if we add a decimal to it, then it considers it decimal. Also, `a,b=1,3` is invalid.
- `int inz3=016; // stored as 14`
- `int inz4=00000016; // also stored as 14`
- `double dinz1=016.44; // stored as 16.44`
- `double dinz2=016; // stored as 14`
- `double inz1=016.44; // stored as 16`

Q) Also, can the do be used as a stand alone statement without the while? Is it possible to perform a while-do instead of a do-while? Does it make sense?

A) As per my observation, a `do` expects a `while` statement after it. Hence a while-do is never possible according to syntax and rules of the language.

Q) Show some examples of empty body and 1 lined do-while statements.

A) Empty body `do-while` statements are completely valid just like how the `while` statements can be.
- `do {} while(true){}` = `do; while(true);`
- 1 lined do while: 
    - `int di1=0, di2=3; do di1++; while(di1<10);`
    - `int di1=0, di2=3; do while(di1) di1--; while(di2--);`
        - `do { while(di1) {di1--;} } while(di2--);`

Q) Can the semicolon at the end be replaced by a curly braces at the end of do-while?

A) No, according to syntax, it is mandatory to have a semicolon after the `while` of the `do-while`. I guess do-while is a single statement, and since the while is thin last thing that comes in the whole statement, in order to prevent anything after that (like a single simple statement or a compound statement) the semicolon is used. It's like immediately after the while, the control goes to the `do` if the condition is boolean true. In short, a semicolon is mandatory after the test condition of the while in do-while.
- `do {} while(di2--){}` is invalid
- `do {} while(di2--)i+=1;` is invalid
- `do {} while(di2--);` is valid

Think of the `do-while` statement as a single statement that ends with a semicolon.

Q) What happens when we return another type apart from `int` in `int main`?

A) Implicit type casting occrurs if valid. Even a double is implicitly casted into an int.

<!-- https://stackoverflow.com/questions/28002/regular-cast-vs-static-cast-vs-dynamic-cast -->

Q) Can we make the for loop run infinitely if the header is empty? Or does it just run once? Or does it never run?

A) If the header is empty (`for(;;);`), then the loop runs infinitely as the missing condition statement is deemed boolean true.

Q) Can the condition in the for loop be a non-counter condition?

A) Yes, it most definitely can be a non-counter condition. This condition can be anything. As long as this condition is true, the loop will run, if this condition is false, the loop won't run anymore.

Q) Can we initialize more than one variable in the initialization section? Similarly, can we update more than one variable in the update section?

A) Yes, we can initialize more than one variable in the initialization section, and we can update more than one variable in the update section. We can update multiple things by just placing a comma (`,`) between the multiple things we would like to update. Here are some observations that I have made:
- While initializing multiple variables of different types, we can just initialize them and seperate each variable and its initialization using a comma. For example: `for(int i2=1,i3=4;i3;i3--,i2--)`.
- However, if we want to declare multiple variables of different types, then there is no simple syntax for this. But there are some work arounds. Let's for the case of the example say we want to declare and initialize two integers and a float:
    - `int i2, i3; float f1; for(i2=1,i3=4,f1=33.4;i3;i3--,i2--,f1+=2.3) {...}` However, in this method, the variables i2, i3, and f1 have scope that extends further than that of the for loop.
    - `{int i2, i3; float f1; for(i2=1,i3=4,f1=33.4;i3;i3--,i2--,f1+=2.3) {...} }` Placing the variable declarations and the whole loop withing a compound statement to force local behaviour.
    - https://stackoverflow.com/questions/2687392/is-it-possible-to-declare-two-variables-of-different-types-in-a-for-loop
- Variables of different types may be intialized and updated with ease, but when it comes to declaring them there is no simple syntax, but some work arounds. Two of them have been shown above.

Q) If we don't want to increment or decrement by just 1, then what is the notation or syntax to update in the update section?

A) So, as you observe, i++ or i-- also updates the value. Something like i+1 or i-1 will just perform an expression but won't be making any side effect (so it's useless). So if we want to do a form of update where a side effect takes place (value is changed/altered), then we use an assignment expression. For example: `x=x+43-y` or `x*=10`, etc.
![Alt text](image.png)

<!-- Q) If the condition section in a for loop is empty, then  -->

Q) In a for loop, can the initialization statement be empty? What happens when the condition is empty?

A) Everything within the header can be empty. When the condition is empty, it is defaulted to true. It can also be noted that the update statement can also just be a normal statement that you would like to execute after each loop (a `cout << endl` for example). Let's say we are using multiple variables, and that we want to increment a certain variable only if some conditions are met, then we can do this inside the body. But let's say in the same example, no matter what we want to put a new line after every statement, then we can just put this in the update section of the header.

In the loop:
- The initialization happens only once at the very beginning
- The condition is then checked
- The body is then executed if the condition evaluates to boolean true
- Then the update expression/statement is executed
- Then the condition is checked again and so on

![Alt text](image-1.png)

```C++ 
    for(int i1=0;i1<5;i1++) {
        cout << i1 << " ";
    }
```
is the same as
```C++
    for(;;) {
        if(i1==5) break;
        cout << i1 << " ";
        i1++;
    }    
```


Q) Comment on the scope of variables defined in a compound statement.

A) Variables declared in a compound statement are only within the scope of that compound statement, and will be rendered useless else where. If we re-declare another variable with the same name that is present outside the compound statement, then this new variable is a local variable within the compound statement, and any change to its value will reflect only within the compound statement. The variable outside the compound statement is unaffected. `int mm=5; {int mm=8; cout << endl << mm << endl;} cout << m << endl;` yields  `8` and `5`.

Q) Can a variable declared in the header of a for loop be re-declared in the body?

A) No, a variable declared in the header of the for loop may not be re-declared in the body since it's considered the same scope.
For example:
```C++
    for(int z=0;!z;z++){
        int z=5; // invalid as it is redefining z which is already declared for this for loop scope
    }
```

Q) Can we declare a variable in the `do` part and use it in the `while` immedeately after?

A) Based on my observations, we cannot since the scope of the do is different than that of the while.
For example: 
```C++
    do {
        int di1=5;
        di1--;
    } while(di1); // this line will cause an error since di1 is out of scope
```
Q) How can overflow or underflow be detected during `cin`? What does cin return?

Q) Why do programmers like to avoid `break` or `goto` statements?