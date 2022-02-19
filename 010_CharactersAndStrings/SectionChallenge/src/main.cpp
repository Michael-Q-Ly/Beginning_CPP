#include <iostream>
#include <string>
#include <iomanip>

using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;

int main() {

	// Encryption
	string alphabet { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" } ;
	string key  { "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"} ;

	// Ask user for message to be encrypted
	string message {} ;
	cout << "Enter your secret message: " ;
	getline( cin, message ) ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Encrypt
	cout << "\nEncrypting message..." << endl ;
	// Begin to encrpt the message
	// 1) Parse the message and find which index it matches with in the alphabet string
	// 2) Take that same index and do a swap with the index in key
	// 2.5) If the character cannot be found in the list, then just concatenate the character
	// 3) Concatenate that to a new variable called encrypted_message
	string encrypted_message {} ;
	for ( auto c : message ) {
		size_t position = alphabet.find( c ) ;
		// Check if the char is even found in the alphabet string (say a number or special character was entered...)
		if ( position != string::npos ) {
			encrypted_message += key.at( position ) ;
		}
		else {
			encrypted_message += c ;
		}
	}
	cout << "\nEncrypted message: " << encrypted_message << endl ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Decrypt
	cout << "\nDecrypting message..." << endl ;
	string decrypted_message {} ;
	for ( auto c : encrypted_message ) {
		size_t position = key.find( c ) ;
		if ( position != string::npos ) {
			decrypted_message += alphabet.at( position ) ;
		}
		else {
			decrypted_message += c ;
		}
	}
	cout << "\nDecrypted message: " << decrypted_message << endl ;


	cout << endl ;
	return 0 ;
}

