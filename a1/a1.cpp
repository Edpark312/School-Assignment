#include <iostream>
#include <cstdlib>
using namespace std; 

int main()
{
	// Declaration statements 
	double numBooks = 0;				// Number of books purchased by customer
	const double booksPrice = 9;		// Price of books
	const double SHIP_COST = .95;		// Shipping cost of books
	double numMovies = 0;				// 
	const double moviePrice = 13.97;	// Price of Movies
	const double MOVIE_TAX = .04;		// Tax on Movie
	double numPeanuts = 0;				// 
	const double LBS_PEANUT = .30;		// 
	double booksSubtotal;				// Subtotal of books
	double moviesSubtotal;				// Subtotal of movies
	double peanutsSubtotal;				// Subtotal of peanuts
	double totalPrice;					// Total price

	// User input
	
	cout << "Hello, Welcome to Walgreens!" << endl;
	cout << "Please enter the number of books: ";
	cin >> numBooks;
	cout << "Please enter the number of movies ";
	cin >> numMovies;
	cout << "Please enter the number of lbs of peanuts ";
	cin >> numPeanuts;

	// Computer 
	
	

	// Output  
	
	cout << "***************************************************" << endl;
	
	cout << "		Walgreens	" << endl;
	cout << "		123 West Street" << endl;
	cout << "		Collegeville, PA 19452" << endl;
	cout << "		(610) 858-4041" << endl;

	cout << "---------------------------------------------------" << endl; 
	cout << "Cashier: Edward Park								" << endl;
	cout << "---------------------------------------------------" << endl;

	cout << numBooks << "   Books			" << booksSubtotal << endl;
 	
	system("pause");
	return 0;

}