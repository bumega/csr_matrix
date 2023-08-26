#pragma once
#include "Vector.h"

// TODO: Выбрать класс в соответствии с вариантом

class CSRMatrix {
	friend std::ostream& operator<<(std::ostream& os, CSRMatrix& matr);
	friend std::istream& operator>>(std::istream& is, CSRMatrix& matr);
	friend CSRMatrix operator*(double number, CSRMatrix& matr);
public:
	CSRMatrix();
	CSRMatrix(double**, int);
	CSRMatrix(const CSRMatrix&);
	~CSRMatrix();
	CSRMatrix& operator=(const CSRMatrix&);
	CSRMatrix operator*(double number);
	Vector operator*(const Vector&) const;
	int get_amount_of_values() const;
	int get_amount_of_rows() const;
	int get_capacity() const;

	

private:
	double* values;
	int* rows;
	int* cols;
	int amount_of_values;
	int amount_of_rows;
	int capacity;
};


//class CSLRMatrix
//{
//public:
//
//};