# OOP-Classes_and_Objects

For this challenge you are to develop the foundation for a program 
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following:

class Movie - models a movie which includes
- movie name
- movie rating (G, PG, PG-13, R)
- watched - the number of times the movie has been watched

class Movies - models a collection of movie objects

Obviously, Movies needs to know about Movie since it is a collection of Movie object
However, our main driver should only interact with the Movies class.

For example. a simple main should be able to
- create a Movies object
- ask the Movies object to add a movie by providing the movie name, rating and watched count
- ask the Movies object to increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its movies

Don't create a menu-driven system like we've done in the past -- just concentrate on getting
the program working. Once it is working, you can certainly provide a menu system for the user


Here is a output. 

Sample run
--------------------------------
Sorry, no movies to display

Big added

Star Wars added

Cinderella added


===================================

Big, PG-13, 2

Star Wars, PG, 5

Cinderella, PG, 7

===================================

Cinderella already exists

Ice Age added

===================================

Big, PG-13, 2

Star Wars, PG, 5

Cinderella, PG, 7

Ice Age, PG, 12
===================================

Big watch incremented

Ice Age watch incremented

===================================

Big, PG-13, 3

Star Wars, PG, 5

Cinderella, PG, 7

Ice Age, PG, 13

===================================

XXX not found

