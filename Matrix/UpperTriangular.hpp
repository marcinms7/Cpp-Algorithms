#ifndef UPPERTRIANGULAR_HPP
#define UPPERTRIANGULAR_HPP
#include <LowerTriangular.hpp> // Base class: LowerTriangular

class UpperTriangular : public LowerTriangular
{

public:
    UpperTriangular(int dim);
    ~UpperTriangular();
    void display();
};

#endif // UPPERTRIANGULAR_HPP
