#include <iostream>
#include <cstdlib>

void takeData(int&, int&);
void createMatrices(int**, int**, int&, int&);
void fillMatrices(int**, int**, int&, int&);
void matrixAddition(int**, int**, int&, int&);

int main()
{
    std::cout << "[DYNAMIC MATRIX ADDITION]" << std::endl;
    int n_rows, n_columns;
    // matrixes should have same arrows and columns quatity
    takeData(n_rows, n_columns);

    // initializing the matrices
    int **p_matrix1 = new int*[n_rows];
    int **p_matrix2 = new int*[n_rows];

    createMatrices(p_matrix1, p_matrix2, n_rows, n_columns);
    fillMatrices(p_matrix1, p_matrix2, n_rows, n_columns);
    matrixAddition(p_matrix1, p_matrix2, n_rows, n_columns);

    // deleting the matrices
    for (int i = 0; i < n_rows; ++i) {
        delete[] *(p_matrix1+i);
        delete[] *(p_matrix2+i);
    }
    delete[] p_matrix1;
    delete[] p_matrix2;

    return 0;
}

void takeData(int& n_rows, int& n_columns)
{
    std::cout << "Rows: ";
    std::cin >> n_rows;
    std::cout << "Columns: ";
    std::cin >> n_columns;
}

void createMatrices(int**p_matrix1, int** p_matrix2, int& n_rows, int& n_columns)
{
    for (int i = 0; i < n_rows; ++i) {
        for(int j = 0; j < n_columns; ++j)
        {
            *(p_matrix1+i) = new int[n_columns];
            *(p_matrix2+i) = new int[n_columns];
        }
    }
}

void fillMatrices(int**p_matrix1, int**p_matrix2, int& n_rows, int& n_columns)
{
    //
    std::cout << "Filling matrix 1: \n";
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            std::cout << "["+std::to_string(i)+"]["+std::to_string(j)+"]: ";
            std::cin >> *(*(p_matrix1+i)+j);
        }
    }

    std::cout << "Filling matrix 2: \n";
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            std::cout << "["+std::to_string(i)+"]["+std::to_string(j)+"]: ";
            std::cin >> *(*(p_matrix2+i)+j);
        }
    }
}

void matrixAddition(int**p_matrix1, int**p_matrix2, int& n_rows, int&n_columns)
{
    // the result will be added into matrix 1
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            *(*(p_matrix1+i)+j) += *(*(p_matrix2+i)+j);
        }
    }
    // showing the result
    std::cout << "RESULT: " << "\n";

    for (int i = 0; i < n_rows; ++i) {
        std::cout << "[";
        for (int j = 0; j < n_columns; ++j) {
            std::cout << *(*(p_matrix1+i)+j) << " ";
        }
        std::cout << "]\n";
    }
}
