# Section 18 Section Challenge

For this challenge, we want to integrate our own user-defined exception classes
into the ```Account``` class hierarchy.

the account classes are provided for you.
Also, the ```IllegalBalanceException.hpp``` file contains the declaration for the
```IllegalBalanceException``` class.

What I would like you to do is:

1. Derive ```IllegalBalanceException``` from ```std::exception``` and implement
   the ```what()``` method to provide an exception message. This exception object
   should be thrown from the ```Account``` class constructor is an ```Account```
   object is created with a negative balance.

2. Derive ```InsufficientFundsException``` from ```std::exception``` and
   implement the ```what()``` method to provide an exception message.
   This exception object should be thrown if a withdraw results in a negative balance.
   You should throw this exception object from the ```Account``` withdraw method.

   That's it - good luck!
   Test your code in the main driver.

   Have fun an experiment!
