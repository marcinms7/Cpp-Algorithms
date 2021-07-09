#include <Sparse.hpp>
#include <iostream>
using namespace std;

Sparse::Sparse(int elements, int set_rows, int set_columns)
{
    n_elements = elements;
    n_rows = set_rows;
    n_columns = set_columns;
    rows = new int[elements]{};
    columns = new int[elements]{};
    numbers = new int[elements]{};

}

Sparse::~Sparse()
{
    delete []rows;
    delete []columns;
    delete []numbers;
}

istream &operator>>(istream &is, Sparse &s){
    int x {s.n_elements};
    for (int i{0}; i<x; i++){
        cout<<"Enter position (row then column) and number for sparse matrix SEPARATED with spaces."<<endl;
        is>>s.rows[i]>>s.columns[i]>>s.numbers[i];
    }
    return is;
}

ostream & operator<<(ostream &ret,Sparse &s){
    int k{0};
    for(int i{0}; i<s.n_rows;i++){
        for(int j{0}; j<s.n_columns;j++){
            if(s.rows[k] == i && s.columns[k] == j){
                cout<<s.numbers[k]<<" ";
                k++;
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return ret;
}

Sparse Sparse::operator+(Sparse &s){
    int a{0},b{0},c{0};
    if (n_rows != s.n_rows || n_columns != s.n_columns){
        cout<<"Can't add matrices"<<endl;
        return Sparse (0,0,0);
    }
    Sparse *sum = new Sparse(n_elements = s.n_elements, n_rows,n_columns);
    while(a < n_elements && b < s.n_elements){
    if(rows[a] < s.rows[b]){
        sum->rows[c] = rows[a];
        sum->columns[c] = columns[a];
        sum->numbers[c] = numbers[a];
        a++;
        c++;
    }
    else if(rows[a] > s.rows[b]){
    sum->rows[c] = rows[b];
    sum->columns[c] = columns[b];
    sum->numbers[c] = numbers[b];
    b++;
    c++;
    }
    
    else{
        if(columns[a] < s.columns[b]){
            sum->rows[c] = rows[a];
            sum->columns[c] = columns[a];
            sum->numbers[c] = numbers[a];
            a++;
            c++;
        }
        else if (columns[a] > columns[b]){
            sum->rows[c] = rows[b];
            sum->columns[c] = columns[b];
            sum->numbers[c] = numbers[b];
            b++;
            c++;
        }
        else{
            sum->rows[c] = rows[a];
            sum->columns[c] = columns[a];
            
            sum->numbers[c] =numbers[a] + numbers[b];
            a++;
            b++;
            c++;
        }
    }
    }    
    cout<<"rOWS ETC ARE "<<a<<b<<c<<endl;
    for(;a<n_elements;a++){
        sum->rows[c] = rows[a];
        sum->columns[c] = columns[a];
        sum->numbers[c] = numbers[a];
        c++;
    }
    for(;b<s.n_elements;b++){
        sum->rows[c] = rows[b];
        sum->columns[c] = columns[b];
        sum->numbers[c] = numbers[b];
        c++;
    }
    sum->n_elements = c;
    return *sum;    
}
    
