#include <iostream>
#include "matrix.hpp"

Matrix::Matrix()
    : rows {0}, cols {0}, data_ {nullptr} {}

Matrix::Matrix(std::size_t r, std::size_t c)
    : rows {r}, cols {c}
    {
        data_ = new double*[rows];
        for(std::size_t i = 0; i < rows; ++i)
        {
            data_[i] = new double[cols];
            for(std::size_t j = 0; j < cols; ++j)
            {
                data_[i][j] = 0.0;
            }
        }
    }

void Matrix::set(std::size_t row, std::size_t col, double value)
{
    data_[row][col] = value;
}

std::size_t Matrix::getRows() const
{
    return rows;
}

std::size_t Matrix::getCols() const
{
    return cols;
}

void Matrix::print() const
{
    for(int i {0}; i < rows; ++i)
    {
        for(int j {0}; j < cols; ++j)
        {
            std::cout << data_[i][j] << " ";
        }
        std::cout << '\n';
    }
}

Matrix::~Matrix()
{
    if(data_ != nullptr)
    {
        for(std::size_t i{0}; i < rows; ++i)
        {
            delete[] data_[i];
        }

        delete[] data_;
        data_ = nullptr;
    }
}