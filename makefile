program: genome.o main.o population.o
	g++ -o program genome.o main.o population.o
genome.o: genome.h genome.cc population.o
	g++ -c genome.cc
main.o: main.cc
	g++ -c main.cc
population.o: population.h population.cc
	g++ -c population.cc
clean:
	rm -f *.o program
