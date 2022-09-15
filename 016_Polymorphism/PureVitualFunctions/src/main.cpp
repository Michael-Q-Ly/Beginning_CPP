/**
 * @file main.cpp
 * @brief Pure virtual functions and abstract classes
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-14
 */
#include <iostream>
#include <vector>

class Shape {							// Abstract Base class
	private:
		// Attributes common to all shapes
	public:
		virtual void draw( void ) = 0 ;			// Pure virtual Function
		virtual void rotate( void ) = 0 ;		// Pure virtual function
		virtual ~Shape( void )  {  }
} ;

class Open_Shape : public Shape {				// Abstract class
	public:
		virtual ~Open_Shape( void ) { }
} ;

class Closed_Shape : public Shape {				// Abstract class
	public:
		virtual ~Closed_Shape( void ) { }
} ;

class Line: public Open_Shape {					// Concrete class
	public:
		virtual void draw( void ) override {
			std::cout << "Drawing a line" << std::endl ;
		}
		virtual void rotate( void ) override {
			std::cout << "Rotating a line" << std::endl ;
		}
		virtual ~Line( void ) { }
} ;

class Circle : public Closed_Shape {				// Concrete class
	public:
		virtual void draw( void ) override {
			std::cout << "Drawing a circle" << std::endl ;
		}
		virtual void rotate( void ) override {
			std::cout << "Rotating a circle" << std::endl ;
		}
		virtual ~Circle( void ) { }
} ;

class Square : public Closed_Shape {				// Concrete class
	public:
		virtual void draw( void ) override {
			std::cout << "Drawing a square" << std::endl ;
		}
		virtual void rotate( void ) override {
			std::cout << "Rotating a square" << std::endl ;
		}
		virtual ~Square( void ) { }
} ;

void screen_refresh( std::vector<Shape *> const &shapes ) {
	std::cout << "Refreshing" << std::endl ;
	for ( auto const p : shapes ) {
		p->draw() ;
	}
}

int main( void ) {
	/* Shape s ; */
	/* Shape *p = new Shape ; */

	/* Circle c ; */
	/* c.draw() ; */

	/* Shape *ptr = new Circle() ; */
	/* ptr->draw() ; */
	/* ptr->rotate() ; */
	/* delete ptr ; */

	Shape *s1 = new Circle() ;
	Shape *s2 = new Line() ;
	Shape *s3 = new Square() ;

	std::vector<Shape *> shapes{s1, s2, s3} ;
	/* for ( auto const p : shapes ) { */
	/* 	p->draw() ; */
	/* } */

	screen_refresh( shapes ) ;

	delete s1 ;
	delete s2 ;
	delete s3 ;

	std::cout << std::endl ;
	return 0 ;
}
