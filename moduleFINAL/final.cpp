// Invertebrate.cpp
// M. Ozmen
// 4/26/2020
// Invertebrate implementations

#include <iostream>
#include <iomanip>
using namespace std;

// Invertebrate class specification: do not modify this code!
enum Skeleton_Type { SKEL_NONE, SKEL_HYDROSTATIC, SKEL_EXOSKELETON };
#define SKELSTR_NONE "none"
#define SKELSTR_HYDROSTATIC "hydrostatic"
#define SKELSTR_EXOSKELETON "exoskeleton"

class Invertebrate {
  private:
    string name;
    Skeleton_Type skeletonType;
  public:
    Invertebrate(); // default constructor
    Invertebrate(string name, Skeleton_Type skeletonType);

    // accessor for name
    string getName();

    // accessor for skeleton type
    Skeleton_Type getSkeletonType();

    // string version of name
    string getSkeletonTypeName();

    // pure virtual
    virtual void print() = 0;
};

// Invertebrate class implementation: do not modify this code!
Invertebrate::Invertebrate() {
    this->skeletonType = SKEL_NONE;
}

// 2-arg constructor w/name, skeleton type
Invertebrate::Invertebrate(string name, Skeleton_Type skeletonType) {
    this->name = name;
    this->skeletonType = skeletonType;
}

// accessor for name
string Invertebrate::getName() {
    return this->name;
}

// accessor for skeleton type
Skeleton_Type Invertebrate::getSkeletonType() {
    return this->skeletonType;
}

// string version of skeleton type name
string Invertebrate::getSkeletonTypeName() {
    string result;
    switch (this->skeletonType) {
        case SKEL_NONE:
            result = SKELSTR_NONE;
        case SKEL_HYDROSTATIC:
            result = SKELSTR_HYDROSTATIC;
            break;
        case SKEL_EXOSKELETON:
            result = SKELSTR_EXOSKELETON;
            break;
    }
    return result;
}

// Snail class specification: do not modify this code!
class Snail : public Invertebrate {
private:
    static string NAME_PREFIX;
    double* radula;  // radula in mm
    double* mantle;  // mantle in mm
public:
    Snail(); // default constructor
    Snail(string name, double radula, double mantle);
    ~Snail(); // destructor

    // accessors/mutators
    double getRadula();
    double getMantle();
    void setRadula(double radula);
    void setMantle(double mantle);

    // implementation of pure virtual
    virtual void print();
};

// Snail class implementation goes here
// default constructor
Snail::Snail() : Invertebrate("NoName", SKEL_HYDROSTATIC) {
    this->radula = new double;
    *this->radula = 0;
    this->mantle = new double;
    *this->mantle = 0;
}

// 3-arg constructor
Snail::Snail(string name, double radula, double mantle) : Invertebrate(name, SKEL_HYDROSTATIC) {
    this->radula = new double;
    this->mantle = new double;
    *this->radula = radula;
    *this->mantle = mantle;
}

//destructor
Snail::~Snail() {
    if (*this->radula != 0)
    {
        delete *this->radula;
        *this->radula = 0;
    }
    if (*this->mantle != 0)
    {
        delete *this->mantle;
        *this->mantle = 0;
    }
}

//mutator
void Snail::setRadula(double radula){
    *this->radula = radula;
}
void Snail::setMantle(double mantle){
    *this->mantle = mantle;
}

//accessor
double Snail::getRadula(){
    return *this->radula;
}
double Snail::getMantle(){
    return *this->mantle;
}

void Snail::print(){
    cout << "Snail: " << Invertebrate::getName() << ":" << endl;
    cout << "    " << "skeleton type = " << Invertebrate::getSkeletonTypeName() << endl;
    cout << "    " << "radula length = " << this->getRadula() << "mm" << endl;
    cout << "    " << "mantle thickness = " << this->getMantle() << "mm" << endl;
}
// Snail class implementation ends here

// main function: do not modify this function!
int main()
{
    Snail sn0("Drymaeus", 1.0, 1.25);
    sn0.print();

    Snail* sn1 = new Snail("Scutalus", 2.0, 0.75);
    sn1->print();
    sn1->setRadula(3.0);
    sn1->setMantle(1.0);
    sn1->print();
    delete sn1;
    sn1 = nullptr;

    return 0;
}
