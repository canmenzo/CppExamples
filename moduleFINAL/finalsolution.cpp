
mantle and radula values to 0 in default constructor
after allocating memory

mantle and radula to passed values in the 3-arg constructor
after allocating memory

destructor must free all allocated memory and reset pointers


// default constructor
Snail::Snail() : Invertebrate("", SKEL_HYDROSTATIC) {
	this->radula = new double;
	*this->radula = 0;
	this->mantle = new double;
	*this->mantle = 0;
}

// 3-arg constructor
Snail::Snail(string name, double radula, double mantle) : Invertebrate(name, SKEL_HYDROSTATIC) {
	*this->radula = radula;
	*this->mantle = mantle;
}
//destructor
Snail::~Snail() : Invertebrate() {}

//mutator
void Snail::setRadula(double radula){
	this->radula = radula;
}
void Snail::setMantle(double mantle){
	this->mantle = mantle;
}
//accessor
double Snail::getRadula(double radula){
	return this->radula;
}
double Snail::getMantle(double mantle){
	return this->mantle;
}