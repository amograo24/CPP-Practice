
int days; days+=10. What happens here since days is not initialized?

swithc also accepts a single statement? whether simple or compound?

what operations are expensive? division, modulo


is this valid: case1: i++; m--; case2: i++; break; case3: i++; break; (this one lined syntax, is that's why fall through is allowed?)


!(x && y) and !(x || y), explain


are boolean expressions with literals evaluated at compile time? or run time? If it has variables, then run time, if literals then compile time?

```case 3:

case 3:``` will it work?

case 3.44? works?

case (3): works?

is there some type casting happening in these cases if it is even valid? what sort of a value is expected in these cases?
what if i put variables there instead if literal integer values?

does the order in which the cases are defined matter? can it be 342189? can we skip integral values in between?

case 1: fjifuhj; case 2: jffh, is this basically like:

case 1:
    dhnfnfh;
    case 2:
        jffh;

is this why it's called a fall through system? IDTS, cause it can start directly from case 2, it doesn't start from case 1 na.


if a!=3; a=3 vs a==3 || (a=3) vs a!=3 && (a=3)

what happens if we put the default at the top? Is it logical error or synctactical error?
maybe default is like a wild card, for all values, therefore, all the cases will be ignored if a break is there, but what if no break? then fall through? default is something like if(1)?

<!-- is switch statement similar to an if? -->

can we put multiple options for test cases? case1,2 do this, case 6,7 do this

in ternary, can either of the expressions post the condition be empty?

what is meant by expr2 and expr3 must be the same type?

does if(ternary) make sense
