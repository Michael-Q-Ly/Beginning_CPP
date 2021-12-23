/*
 * Section 7
 * Section Challenge
 */

#include <iostream>
#include <vector>

using std::cout ;
using std::cin ;
using std::endl ;
using std::vector ;

int main() {
    vector <int> vector1 ;
    vector <int> vector2 ;

    // Modify the contents of vector1 and display them
    vector1.push_back( 10 ) ;
    vector1.push_back( 20 ) ;

    cout << "Contents of vector1:\n" ;
    cout << vector1.at( 0 ) << " " << vector1.at( 1 ) << endl ;
    cout << "The size of vector1 is " << vector1.size() << endl ;
    
    // Modify the contents of vector2 and display them
    vector2.push_back( 100 ) ;
    vector2.push_back( 200 ) ;

    cout << "\nContents of vector2:\n" ;
    cout << vector2.at( 0 ) << " " << vector2.at( 1 ) << endl ;
    cout << "The size of vector2 is " << vector2.size() << endl ;

    // Create a 2-D vector whose contents are vector1 and vector2
    vector < vector <int> > vector_2d ;
    
    vector_2d.push_back( vector1 ) ;
    vector_2d.push_back( vector2 ) ;

    cout << "\nContents of vector_2d are:\n" ;
    cout << vector_2d.at( 0 ).at( 0 ) << " " ;
    cout << vector_2d.at( 0 ).at( 1 ) << endl ;
    cout << vector_2d.at( 1 ).at( 0 ) << " " ;
    cout << vector_2d.at( 1 ).at( 1 ) << endl ;

    cout << "\nChanging contents of vector1...\n" ;
    vector1.at( 0 ) = 1000 ;

    cout << "\nContents of vector_2d are still:\n" ;
    cout << vector_2d.at( 0 ).at( 0 ) << " " ;
    cout << vector_2d.at( 0 ).at( 1 ) << endl ;
    cout << vector_2d.at( 1 ).at( 0 ) << " " ;
    cout << vector_2d.at( 1 ).at( 1 ) << endl ;

    cout << "\nContents of vector1 are now:\n" ;
    cout << vector1.at( 0 ) << " " << vector1.at( 1 ) << endl ;
    cout << "The size of vector1 is " << vector1.size() << endl ;

    return 0 ;
}
