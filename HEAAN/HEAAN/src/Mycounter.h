#include <iostream>

#define APIs 50
// a counter that counts the number of calls
// for each scheme API 
class Counter {
public:
    enum scheme_APIs{Negate, Add, Addconst, Sub, Mul, Mulconst, Rescale, ModDown, RotateFast, Conjugate, Square, MulByPoly, Bootstrap};

private:
    uint64_t counts[APIs];

public:
    Counter() {
        // std::cout << "\t The constructor of counter is called!\n";
        for(int i = 0; i < APIs; i++) {
            counts[i] = 0;
        }
    }

    void Count_Negate() { counts[Negate] += 1; }
    void Count_Add() { counts[Add] += 1; }
    void Count_Addconst() { counts[Addconst] += 1; }
    void Count_Sub() {counts[Sub] += 1;}
    void Count_Mul() { counts[Mul] += 1; }
    void Count_Mulconst() { counts[Mulconst] += 1; }
    void Count_Square() { counts[Square] += 1; }

    void Count_Rescale() { counts[Rescale] += 1; }
    void Count_ModDown() { counts[ModDown] += 1; }

    void Count_RotateFast() { counts[RotateFast] += 1; }
    void Count_Conjugate() { counts[Conjugate] += 1; }
    void Count_MulByPoly() { counts[MulByPoly] += 1; }
    void count_Bootstrap() { counts[Bootstrap] += 1; }

    void printCnt() {
        std::cout << std::endl << "------ Statistics of API calls ------" << std::endl;
        std::cout << "Add: " << counts[Add] << std::endl;
        std::cout << "Addconst: " << counts[Addconst] << std::endl;
        std::cout << "Mul: " << counts[Mul] << std::endl;
        std::cout << "Mulconst: " << counts[Mulconst] << std::endl;
        std::cout << "Rescale: " << counts[Rescale] << std::endl;
        std::cout << "Mod Down: " << counts[ModDown] << std::endl;
        std::cout << "Rotate: " << counts[RotateFast] << std::endl;
        std::cout << "Conjugate: " << counts[Conjugate] << std::endl;
        std::cout << "Square: " << counts[Square] << std::endl;
        std::cout << "MulByPoly: " << counts[MulByPoly] << std::endl;
        std::cout << "Bootstrapping: " << counts[Bootstrap] << " --- Implemented using APIs above and has been counted in" << std::endl;

        std::cout << "------------- end ------------" << std::endl;
    }
};