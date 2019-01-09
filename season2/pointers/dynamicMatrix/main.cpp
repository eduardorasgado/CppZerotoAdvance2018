/*
* Filling a NxM matrix and show its content
*/
#include <iostream>
#include <cstdlib>

void takeData(int&, int&);
void createMatrix(int**, int&, int&);
void fillMatrix(int**, int&, int&);
void showMatrix(int**, int&, int&);

int main()
{
    std::cout << "[Dynamic matrix]" << std::endl;

    int n_rows, n_columns;
    // pointer to pointer
    // row pointer
    int **p_matrix;

    takeData(n_rows, n_columns);
    p_matrix = new int*[n_rows];
    createMatrix(p_matrix, n_rows, n_columns);
    fillMatrix(p_matrix, n_rows, n_columns);
    showMatrix(p_matrix, n_rows, n_columns);

    for (int i = 0; i < n_rows; ++i) {
        // deleting memory to each dynamic columns
        delete[] p_matrix[i];
    }
    delete p_matrix;
    return 0;
}

void takeData(int&n_rows, int&n_columns)
{
    //
    std::cout << "Rows: ";
    std::cin >> n_rows;
    std::cout << "Columns: ";
    std::cin >> n_columns;

}

void createMatrix(int**p_matrix, int&n_rows, int&n_columns)
{
    //
    for (int i = 0; i < n_rows; ++i) {
        *(p_matrix+i) = new int[n_columns];
    }
}

void fillMatrix(int**p_matrix, int&n_rows, int&n_columns)
{
    //
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            *(*(p_matrix+i)+j) = ((i+1)*(j+1));
        }
    }
}

void showMatrix(int**p_matrix, int&n_rows, int&n_columns)
{
    //
    for (int i = 0; i < n_rows; ++i) {
        std::cout << "[";
        for (int j = 0; j < n_columns; ++j) {
            std::cout << *(*(p_matrix+i)+j) << " ";
        }
        std::cout << "]\n";
    }
}
