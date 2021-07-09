#ifndef LOWERTRIANGULAR_HPP
#define LOWERTRIANGULAR_HPP

class LowerTriangular
{
protected:
    int *a;
    int length;
public:
    LowerTriangular(int dim);
    ~LowerTriangular();
    void display();
    void set();
    void get_array();
    int get(int i, int j);
};

#endif // LOWERTRIANGULAR_HPP
