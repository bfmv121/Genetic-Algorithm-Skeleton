//Author: Amar Zulejhic ////////////
///////////////////////////////////
//////////////////////////////////


#include "genome.h"

// main file that calls the necessary functions.
int main(){
    genome *new_genome = new genome(); // Creates the object
    new_genome -> printGenome(); // Returns Null because nothing should be in genes
    new_genome -> allocate(4); // Creates the genes array with 4 pixels
    new_genome -> printGenome(); // Prints genome values just 0s's
    new_genome -> randomize(); // Randomizes the values of the genome from 0 - 255
    new_genome -> printGenome(); // Prints the genome
    new_genome -> set_blue(0,60); // Sets first pixel's last value to 60 for blue
    new_genome -> generate_population()); // Print genome the genome again
    new_genome -> find_top_two_individuals(); // Returns Null because nothing should be in genes
    new_genome -> find_roulette_top_individuals(); // Creates the genes array with 4 pixels
    new_genome -> set_nCrossover(); // gets Cross over ready
    new_genome -> set_mutation(); // Sets a mutation rate in the population
    new_genome -> set_target(); // set targets for cross overs
    new_genome -> generate_new_population()// creates a new population
    new_genome -> calculate_overall_fitness(); // calculates the fitness of the population
    new_genome -> print_population();// prints the populations
    return 0;
}
