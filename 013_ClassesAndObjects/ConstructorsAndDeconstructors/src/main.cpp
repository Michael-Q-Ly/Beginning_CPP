// Section 13
// Constructors and Deconstructors

#include <iostream>
#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;
	public:
		void set_name( std::string name_val ) {
			name = name_val ;
		}
		// Overloaded Constructors
		Player() {
			std::cout << "No args constructor called" << std::endl ;
		}
		Player( std::string name ) {
			std::cout << "String arg constructor called" << std::endl ;
		}
		Player( std::string name, int health, int xp ) {
			std::cout << "Three args constructor called" << std:: endl ;
		}
		~Player() {
			std::cout << "Destructor called for " << name << std::endl ;
		}
} ;

int main() {

	{
		Player slayer ;
		slayer.set_name( "Slayer" ) ;
	}

	{
		Player michael ;
		michael.set_name( "Michael" ) ;
		Player hero( "Hero" ) ;
		hero.set_name( "Hero" ) ;
		Player villain( "Villian", 100, 12 ) ;
		villain.set_name( "Villian" ) ;
	}

	Player *enemy = new Player ;
	enemy -> set_name( "Enemy" ) ;

	Player *level_boss = new Player( "Level Boss", 1000, 300 ) ;
	level_boss -> set_name( "Level Boss" ) ;

	delete enemy ;
	delete level_boss ;

	std::cout << std::endl ;
	return 0 ;
}

