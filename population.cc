
 #include <cmath>
#include <stdlib.h>
#include <iostream>
#include "genome.h"
using namespace std;
// debugging is not finished yet.

/*
//constructor for the class
population::population(){

 int individuals = NULL;
 int nindividuals = 0;

};

// The deconstructor
population::~population(){

if(int individuals != NULL){

    delete [] individuals;
     individuals = NULL;
     nindividuals = 0;


}

}
// create genome , randomize it and put in list.
void population::generate_population(int nGenomes){
     int array[nGenomes];
// iterates through and creates new genomes to put into an array
     for ( int i = 0 ; i< nGenomes; i++){
        genome *new_genome = new genome();
        new_genome -> randomize();
        array[i] = new_genome;

     }

int individuals = array;

}
// finds the top two in the array.
void population::find_top_two_individuals(int nIndividuals){
 int fitness = 0;
 for ( int i = 0; i< nIndividuals; i++){
//
            if(nIndividuals[fitness]-> calculate_overall_fitness(popTarget, targetsize < nIndividuals[i])->
               calculate_overall_fitness(popTarget, targetsize){

               fitness_p_two = fitness;
               fitness = i;
             else{

                    if(nIndividuals[fitness_p_two]->calculate_overall_fitness(popTarget, targetsize < nIndividuals[i])->
                       calculate_overall_fitness(popTarget, targetsize){
               fitness_p_two = i;
                    }
                }
            }
        }
    }
}


// assigns the top  genes to the roulette based on fitness
void population::find_roulette_top_individuals();{
    double* rouletteVal = new double[nindividuals];
    double roulette(0);
  for( int i =0; i<nindividuals; i++ )
    rouletteVal[i] = 0.0;

  for( int i =0; i<nindividuals; i++ ) {
    roulette += nGenomes[i].find_top_two_individuals())/totalFitness;
    rouletteVal[i] = roulette;
}

  parent1 = 0; // setting the parent indices
  parent2 = 0;
}

// creates function for cross over to be used later.
void population::set_nCrossover(int crossover);
    nCrossover = crossover;
    return;
}

void population::set_mutation(double mRate);
//iterates through individuals and sets each mrate to each
for(int i=0; i< nIndividuals; i++){
		individuals[i].set_mRate();
	}
	return;
}

void population::set_target(Pixels*target, int imagesize);
    set_target = target;
    set_targettPixels = imagesize;
    return;

// creates new population
void population::generate_new_population(int useRoulette);

	if(useRoulette){
		find_roulette_top_individuals();
	}
	else{
		find_top_two_individuals();
	}
// sets cross overs of the parents
	genome* parent1 = copy_genome(individuals[top1],set_targettPixels);
	genome* parent2 = copy_genome(individuals[top2],set_targettPixels);

	crossover(parent1, parent2);
	mutate_population();

// calculates the overall fitness of the population.
double population::calculate_overall_fitness(int useRoulette);

 double Fitness = 0;
    //iterates through the array of genomes
    for(int i=0; i < nIndividuals; i++){


        //Add fitness values
        Fitness += individuals[i].calculate_overall_fitness(targetPixelArray, nTargetPixels);
    }
    Fitness = Fitness / nIndividuals;
    return Fitness;
}


void population::print_population(); // goes through array and prints out the genomes
   cout <<"Print Population" << endl;
    for(int i=0; i < nIndividuals; i++) {
        individuals[i].printGenome(i);
    }
    cout << "End Print" << endl;
    return;
