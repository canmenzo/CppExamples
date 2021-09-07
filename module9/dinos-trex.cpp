// dinos.cpp
// D. Singletary & M. Ozmen
// 4/6/2020
// General dinosaur superclass and TRex subclass

#include <iostream>
#include <iomanip>
using namespace std;

class Dinosaur
{
    private:
        string name;
        bool carnivore;
        const static string superOrder;
    public:
        Dinosaur() {
            this->name = "noname";
            this->carnivore = false;
        }
        Dinosaur(string name, bool carnivore) {
            this->name = name;
            this->carnivore = carnivore;
        }

        ~Dinosaur() {}

        string getSuperOrder() const {
            return superOrder;
        }

        string getName() const {
            return this->name;
        }

        bool isCarnivore() const {
            return this->carnivore;
        }

        void setName(string name) {
            this->name = name;
        }

        void setCarnivore(bool carnivore) {
            this->carnivore = carnivore;
        }
};

const string Dinosaur::superOrder = "Dinosauria";

// TRex represents a Tyrannosauraus  Rex

class TRex : public Dinosaur
{
    private:
        double toothSize; // inches

    public:
        TRex() : Dinosaur("", true) {
            this->toothSize = 0.0;
        }

        TRex(string name, double toothSize) : Dinosaur(name, true) {
            this->toothSize = toothSize;
        }
        ~TRex() {}

        double getToothSize() const {
            return this->toothSize;
        }

        void setToothSize(double toothSize) {
            this->toothSize = toothSize;
        }

        void print() {
            cout << fixed << setprecision(2);
            cout << this->getName() << ", " <<
                    "(superorder " << this->getSuperOrder() << "), " <<
                    (this->isCarnivore() ? "eats meat" : "does not eat meat") <<
                    ", tooth size = " << this->getToothSize() << endl;
        }
};

class Triceratops : public Dinosaur
{
    private:
        double hornSize; // feet

    public:
        //a 0-arg constructor
        Triceratops() : Dinosaur("", false) {
            this->hornSize = 0.0;
        }

        //a 2-arg constructor
        Triceratops(string name, double hornSize) : Dinosaur(name, false) {
            this->hornSize = hornSize;
        }

        //destructor
        ~Triceratops() {}

        //accessor
        double getHornSize() const {
            return this->hornSize;
        }

        //mutator
        void setHornSize(double hornSize) {
            this->hornSize = hornSize;
        }

        //print
        void print() {
            cout << fixed << setprecision(2);
            cout << this->getName() << ", " <<
                    "(superorder " << this->getSuperOrder() << "), " <<
                    (this->isCarnivore() ? "eats meat" : "does not eat meat") <<
                    ", horn size = " << this->getHornSize() << endl;
        }

};

int main()
{
    // create 2 TRex Dinosaurs (allocate from heap)
    TRex *tr1 = new TRex("Tyrannosaurus Laramidia", 2.0);
    tr1->print();

    TRex *tr2 = new TRex("Tyrannosaurus Asia", 3.0);
    tr2->print();

    Triceratops *tr3 = new Triceratops("T. horridus", 4.5);
    tr3->print();

    Triceratops *tr4 = new Triceratops("T. prorsus", 3.3);
    tr4->print();

    // Basic If functions to make dinosaurs fight
    // whoever has bigger toothSize or hornSize wins the other. 
    // cout << "\n";
    // cout << "Start the fight for best TRex!\n";
    // if (tr1 > tr2)
    //     cout << "T. Laramidia Wins!!! \n";
    // else
    //     cout << "T. Asia Wins!!! \n";
    // cout << "\n";
    // cout << "Now, fight for the best Triceratops!\n";
    // if (tr3 > tr4)
    //     cout << "T. Horridus Wins!!! \n";
    // else
    //     cout << "T. Prorsus Wins!!! \n";

    delete tr1; // asteroid!
    delete tr2;
    delete tr3;
    delete tr4;

    return 0;
}
