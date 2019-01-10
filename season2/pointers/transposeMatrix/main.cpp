#include <iostream>
#include <cstdlib>

using namespace std;

void takeData(int&, int&);
void createMatrix(int**, int&, int&);
void fillMatrix(int**, int&, int&);
void matrixTranspose(int**, int**, int&, int&);
void showMatrix(int**, int&, int&);
int main()
{
    cout << "[TRANSPOSE MATRIX]" << endl;
    int n_rows, n_columns;

    takeData(n_rows, n_columns);

    int **p_matrix;
    int **result_matrix;
    p_matrix = new int*[n_rows];
    result_matrix = new int*[n_columns];

    createMatrix(p_matrix, n_rows, n_columns);
    fillMatrix(p_matrix, n_rows, n_columns);

    matrixTranspose(p_matrix, result_matrix, n_rows, n_columns);

    showMatrix(p_matrix, n_rows, n_columns);
    showMatrix(result_matrix, n_columns, n_rows);

    // deleting pointers
    for (int i = 0; i < n_rows; ++i) {
        delete[] *(p_matrix+i);
    }

    for (int i = 0; i < n_columns; ++i) {
        delete[] *(result_matrix+i);
    }

    delete[] p_matrix;
    delete[] result_matrix;

    return 0;
}

void takeData(int& n_rows, int& n_columns)
{
    std::cout << "Rows: ";
    std::cin >> n_rows;
    std::cout << "Columns: ";
    std::cin >> n_columns;
}

void createMatrix(int** p_matrix, int& n_rows, int& n_columns)
{
    for (int i = 0; i < n_rows; ++i) {
        *(p_matrix+i) = new int[n_columns];
    }
}

void fillMatrix(int**p_matrix, int& n_rows, int& n_columns)
{
    //
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            std::cout << "["+std::to_string(i)+"]["+std::to_string(j)+"]: ";
            std::cin >> *(*(p_matrix+i)+j);
        }
    }
}

void matrixTranspose(int**p_matrix, int**result_matrix, int&n_rows, int&n_columns)
{
    // create result matrix
    for (int i = 0; i < n_columns; ++i) {
        *(result_matrix+i) = new int[n_rows];
    }

    // transpose
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            *(*(result_matrix+j)+i) = *(*(p_matrix+i)+j);
        }
    }
}

void showMatrix(int**p_matrix, int&n_rows, int&n_columns)
{
    //
}
