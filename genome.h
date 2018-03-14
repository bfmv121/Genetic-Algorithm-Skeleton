

// data for the pixels
struct Pixels{
  public:
    Pixels();
    int red ;
    int blue;
    int green;
    
}; 


// this is the class information for genome
class genome {
  public:
    genome();
    ~genome();
    int nGenes;
	  void deallocate();
	  void allocate(int nGenes);
    void randomize();
    void set_red(int index, int value);
    void set_green(int index, int value);
    void set_blue(int index, int value);
    int get_red(int index);
    int get_green(int index);
    int get_blue(int index);
    double mRate;
    void printGenome();
    void set_mRate(double val);
    void mutate_Gene(int index);
    double get_mRate();
    void mutate();
    double calculate_gene_fitness(int index, Pixels targetPixel);
    double calculate_overall_fitness(Pixels* target, int nPixels);
    void Set_Pixel( int index, Pixels newPixel );
    Pixels *genes;
};





