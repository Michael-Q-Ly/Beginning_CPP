/**
 * @file main.cpp
 * @Synopsis  How to use base class pointers
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-09-07
 */
#include <iostream>
#include <vector>

/* -------------------------------*/
/**
 * @Synopsis    Account Base class with virtual function (we will learn about
 *              \ these in the next lecture)
 */
/* ---------------------------------*/
class Account {
        public:
                virtual void withdraw( double amount ) {
                        std::cout << "In Account::withdraw" << std::endl ;
                }
                virtual ~Account( void ) {  }
} ;

/* -------------------------------*/
/**
 * @Synopsis    Checking derived class
 */
/* ---------------------------------*/
class Checking : public Account {
        public:
                virtual void withdraw( double amount ) {
                        std::cout << "In Checking::withdraw" << std::endl ;
                }
                virtual ~Checking( void ) { }
} ;

/* -------------------------------*/
/**
 * @Synopsis    Savings derived class
 */
/* ---------------------------------*/
class Savings : public Account {
        public:
                virtual void withdraw( double amount ) {
                        std::cout << "In Savings::withdraw" << std::endl ;
                }
                virtual ~Savings( void ) { }
} ;

/* -------------------------------*/
/**
 * @Synopsis    Trust derived class
 */
/* ---------------------------------*/
class Trust : public Account {
        public:
                virtual void withdraw( double amount ) {
                        std::cout << "In Trust::withdraw" << std::endl ;
                }
                virtual ~Trust( void ) { }
} ;

int main( void ) {
        std::cout << "\n==== Pointers ====" << std::endl ;
        Account *p1 = new Account() ;
        Account *p3 = new Checking() ;
        Account *p2 = new Savings() ;
        Account *p4 = new Trust() ;

        p1->withdraw( 1000 ) ;
        p2->withdraw( 1000 ) ;
        p3->withdraw( 1000 ) ;
        p4->withdraw( 1000 ) ;

        std::cout << "\n==== Array ====" << std::endl ;
        Account *array[] = {p1, p2, p3, p4} ;
        for ( auto i = 0 ; i < 4 ; i++ ) {
                array[i]->withdraw( 1000 ) ;
        }

        std::cout << "\n==== Array ====" << std::endl ;
        array[0] = p4 ;
        for ( auto i = 0 ; i < 4 ; i++ ) {
                array[i]->withdraw( 1000 ) ;
        }

        std::cout << "\n==== Vector ====" << std::endl ;
        std::vector<Account *> accounts {p1, p2, p3, p4} ;
        for ( auto acc_ptr : accounts ) {
                acc_ptr->withdraw( 1000 ) ;
        }

        std::cout << "\n==== Clean up ====" << std::endl ;
        delete p1 ;
        delete p2 ;
        delete p3 ;
        delete p4 ;

        std::cout << std::endl ;
        return 0 ;
}
