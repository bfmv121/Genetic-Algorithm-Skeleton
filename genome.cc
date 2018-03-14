#include <cmath>
#include <stdlib.h>
#include <iostream>
#include "genome.h"
using namespace std;

//Constructor for pixel
Pixels::Pixels(){

//Initializes all of the values to zero
    red = 0;
    blue = 0;
    green = 0;
}

//Const. for the genome
genome::genome(){
    return;


}

//Deconst. for the genome
genome::~genome(){
    deallocate();
}




//Deletes genes array in memory
void genome::deallocate(){
    if(genes!= NULL){
        delete[] genes;
        nGenes = 0;
    }
    else{
        return;
    }
}



//Creates the array of Pixels
void genome::allocate(int numPixels){
    if(genes != NULL){
        deallocate();
    }
    nGenes = numPixels;

    genes = new Pixels[nGenes];
}



//Randomizes all values of the pixels in genes
void genome::randomize(){
    int redNum;
    int greenNum;
    int blueNum;

    for(int i=0;i< nGenes;i++){
        redNum = rand() % 256;
        blueNum = rand() % 256;
        greenNum = rand() % 256;
        genes[i].red = redNum;
        genes[i].blue = blueNum;
        genes[i].green = greenNum;

    }
}

//Sets the red value

void genome::set_red(int index, int value){

    genes[index].red = value;
}

//Sets the green value

void genome::set_green(int index, int value){

    genes[index].green = value;
}

//Sets the blue value

void genome::set_blue(int index, int value){

    genes[index].blue = value;
}

//Gets the red value

int genome::get_red(int index){

    return genes[index].red;
}

//Gets the green value

int genome::get_green(int index){

    return genes[index].green;
}

//Gets the blue value

int genome::get_blue(int index){

    return genes[index].blue;
}

//Prints the value of each pixel on a new line

void genome :: printGenome(){
    cout << "Printing Genome!:" << endl;
    for(int i=0;i<nGenes;i++){

        cout << genes[i].red << " "
             << genes[i].green << " "
             << genes[i].blue << " "
             << endl;
    }
        cout << "End" << endl;
}

// checks to make sure that val is under 1 and above 0. If conditions are true mrate is set to val
void genome:: set_mRate(double val){
if (val < 1 && val > 0){

        mRate = val;

}
}
// we are returning what is in mrate
double genome::get_mRate(){

return mRate;

}
//takes the index of a pixel and sets it to a random value. uses modulo to see if it is under 0.4
void genome::mutate_Gene(int index){
    double red = (rand() % 100)/100.00;
    double blue = (rand() % 100)/100.00;
    double green = (rand() % 100)/100.00;

if (red < mRate){  // if conditions are true, the index will be set to a random value between 1 and 0

genes[index].red= rand() % 256;
}
if (blue < mRate){

genes[index].blue= rand() % 256;

}
if (green < mRate){

genes[index].green= rand() % 256;
}

}
// loop that goes through the entire array and class the function mutate gene
void genome:: mutate(){

for( int i=0;i<nGenes;i++ ){
    mutate_Gene(i);

}


}

//takes absolute value of gene the difference between the pixel and target pixel and stores it. Uses it to get average.
double genome::calculate_gene_fitness(int index, Pixels targetPixel){
 double diffred = abs(genes[index].red - targetPixel.red);
 double diffblue = abs (genes[index].blue - targetPixel.blue);
 double diffgreen = abs(genes[index].green - targetPixel.green);

 double average = diffred + diffblue + diffgreen / 3;

return average / 256;

}


// checks to see if npixels equals ngenes and if it does it gets the average of the entire fitness.
double genome::calculate_overall_fitness(Pixels* target, int nPixels){

    double gene_avg = 0;

if(nPixels == nGenes){
    for(int i=0;i<nGenes;i++){

      gene_avg = calculate_gene_fitness(i,target[i]) + gene_avg;

    }

return gene_avg / nGenes;
}

}

//checks to make sure that index is valid and if so sets the position of index to the the new pixel
void genome::Set_Pixel( int index, Pixels newPixel ){
if ( index >= 0 && index < nGenes && newPixel.red > 0 && newPixel.red < 255 && newPixel.blue > 0 && newPixel.blue< 255
    && newPixel.green > 0 && newPixel.green< 255){
genes[index] = newPixel;

    }
}
