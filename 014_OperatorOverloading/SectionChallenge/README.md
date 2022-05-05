# Section 14 Challenge

## Operator Overloading

Overload the following operators in the provided MyString class

To gain experience overloading operators, you should do this challenge *twice*
First, overload the operators using member functions. Then, in another project, overload
the same operators again using non-member functions.

Please do it once using member methods and then again using non-member functions.

Here is a list of some of the operators that you can overload for this class:

'-'     - Unary minus. Returns the lowercase version of the object's string
                -s1

'=='    - Returns true if the two strings are equal
                ( s1 == s2 )

'!='    - Returns true if the two strings are not equal
                ( s1 != s2 )

'<'     - Returns true if the lhs string is lexically less than the rhs string
                ( s1 < s2 )

'>'     - Returns true if the lhs string is lexically greater than the rhs string
                ( s1 > s2 )

'+'     - Concatenation. Returns an object that concatenates the lhs and rhs
                s1 + s2

'+='    - Concatenate the rhs string to the lhs string and store the result in lhs object
                ( s1 += s2 )

'*'     - Repeat. Results in a string that is copied n times
                ( s2* 3 )
                        ex: s2 = "abc"
                        s1 = s2 *3
                                s1 will result in "abcabcabc"

'*='    - Repeat the string on the lhs n times and store the result back in the lhs object
                s1 = "abc"
                s1 ***= 4 ;       // s1 will result in "abcabcabcabc"

If you wish to overload the ++ operator and the -- operators, remember that they have pre and post versions

The semantics should be as follows (this shows the member method version):

```cpp
        MyString &operator++( ) { // pre-increment
                // Do whatever you want increment to do - maybe make all characters uppercase?
                return *this ;
        }

        // Note that post-increment returns a MyString by value and not by reference
        MyString operator++( int ) { // post-increment
                MyString temp {*this} ;
                operator++() ;
                return temp ;
        }
```

Have fun! Think of some other operators that might be useful!
Don't worry if they all don't make sense--this is an exercise
about learning how to overload operators

Hints:

1. Take advantage of std::strcmp function for the equality operators!
2. The += and *= operators should return a MyString &
3. Rather than duplicate code in the += and ***= functions, use the + and * operators which you already have overloaded!
