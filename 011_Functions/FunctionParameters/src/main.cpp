// Section 11
// Function Parameters

#include <iostream>
#include <string>
#include <vector>

void pass_by_value1( int num ) ;
void pass_by_value2( std::string s ) ;
void pass_by_value1( std::vector <std::string> v ) ;
void print_vector( std::vector <std::string> v ) ;

void pass_by_value1 ( int num ) {
    num = 1000 ;
}

void pass_by_value2( std::string s ) {
    s = "Changed" ;
}

void pass_by_value3( std::vector <std::string> v ) {
    v.clear() ;                                         // Delete all vector elements
}

void print_vector( std::vector <std::string> v ) {
    for ( auto s : v ) {
        std::cout << s << " " ;        
    }
    std::cout << std::endl ;
}

int main() {

    int num {10} ;
    int another_num {20} ;

    std::cout << "num before calling pass_by_value1: " << num << std::endl ;
    pass_by_value1( num ) ;
    std::cout << "num after calling pass_by_value_1: " << num << std::endl ;
    
    std::cout << "another_num before calling pass_by_value1: " << num << std::endl ;
    pass_by_value1( another_num ) ;
    std::cout << "another_num after calling pass_by_value_1: " << num << std::endl ;

    std::string name = "Michael" ;
    std::cout << "\nname before calling pass_by_value2: " << name << std::endl ;
    pass_by_value2( name ) ;
    std::cout << "name after calling pass_by_value2: " << name << std::endl ;

    std::vector <std::string> stooges {"Larry", "Moe", "Curly"} ;
    std::cout << "\nstooges before calling pass_by_value3: " ;
    print_vector( stooges ) ;
    pass_by_value3( stooges ) ;
    std::cout << "stooges after calling pass_by_value3: " ;
    print_vector( stooges ) ;

    std::cout << std::endl ;
    return 0 ;
}
