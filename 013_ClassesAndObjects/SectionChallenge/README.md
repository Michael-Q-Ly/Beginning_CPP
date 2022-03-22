# Section 13 Challenge

For this challenge, you are to develop the foundation for a program
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following:

class Movie - models a movie which includes
- movie name
- movie rating (G, PG, PG-13, R)
- watched - the number of times the movie has been watched

class Movies - models a collection of movie objects

obviously, Movies needs to know about Movie since it is a collection of Movie objects.
However, our main driver should only interact with the Movies class.

For example, a simple main should be able to
- create a Movies object
- Ask the Movies object to add a movie by providing the movie name, rating, and watched count
- ask the Movies object to increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its movies

Additionally,
- if we try to add a movie whose name is already in the movies collection,
we should display this error to the user
- if we try to increment the watched count for a movie whose name is not in the movies
collection, we should display this error to the user

Though a basic shell is given as a starting point, I will be doing this all from scratch.

Here is what the project files should look like:
- Movie.hpp - include file with the Movie class specification
- Movie.cpp - file with the Movie class implementation
- Movies.hpp - include file with the Movies class specification
- Movies.cpp - file with the Movies class implementation
- main.cpp - the main driver that creates a Movies oject and adds and increments movies

Don't create a menu-driven system like we've done in the past -- just concentrate on getting
the program working. Once it is working, you can certainly provide a menu system for the user

Good luck, and have fun!
