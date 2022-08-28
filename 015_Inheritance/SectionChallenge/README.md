# Section 15 Challenge - Inheritance

You are provided with a simple Account class hierarchy that contains
* Account - Base class
* Savings Account - Derived class

An account has a name and a balance
A savings account is an Account and adds an interest rate

Some Account helper functions in Account_Util.hpp and Account_Util.cpp makes it
easy to display, deposit to, and withdraw from a vector of Accounts and Savings
Accounts

Please refer to the source code provided and the video explanation of this
cahllenge for more details

The challenge is as follows:

1. Add a Checking account class to the Account hierarcy
        * A Checking account has a name and a balance and has a fee of $1.50
          per withdrawal transaction
        * Every withdrawal transaction will be assessed this flat fee
2. Add a Trust account class to the Account hierarchy
        * A Trust account has a name, a balance, and an interest rate
        * The Trust account deposit works just like a savings account deposit
        * However, any deposits of $5000.00 or more will receieve a $50.00
          bonus deposited to the account.
        * The Trust account withdrawal should only allow 3 withdrawals per
          year, and each of these must be less than 20% of the account balance

**Hints:**
        * Reuse existing functionality!!
        * Think about what the Base class will be for the new classes
        * Add helper functions to Account_Util.hpp and Account_Util.cpp if you
          wish to work with your new classes
                - You don't have to, but it will make your main much easier to
                  use

Have fun!! You are no longer beginner C++ programmers!

If you want more practice with operator overloading, you can overload += and -=
for deposit and withdrawl :)
