// Section 13
// Access Modifiers

#include <iostream>
#include <string>

/* Classes */
class Player {
private:
	// Attributes
	std::string name {"Player"} ;
	int health ;
	int xp ;
public:
	// Methods
	void talk ( std::string text_to_say ) { std::cout << name << " says, \"" << text_to_say << "\"" << std::endl ; }
	bool is_dead() ;
} ;

int main() {

	Player Michael ;
//	Michael.name = "Michael" ;							// name attr is private within context
//	std::cout << Michael.health << std::endl ;					// health attr also private within context
	Michael.talk( "Hello there" ) ;

	std::cout << std::endl ;
	return 0 ;
}

