#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cstddef>

class Matrix
{
public:
        Matrix();
        Matrix(std::size_t rows, std::size_t cols);
        void set(std::size_t row, std::size_t col, double value);
        std::size_t getRows() const;
        std::size_t getCols() const;
        void print() const;
        ~Matrix();
private:
        std::size_t rows;
        std::size_t cols;
        double** data_;
};

#endif