#include<iostream>
#include<vector>
using namespace std;

template <typename T>
T matrixOperations(T matrix1, T matrix2, T row1, T col1,T row2, T col2, char op){
    T* result = new T[row1 * col1];
    switch(op){
    case '+' :
        result = addMatrices(matrix1, matrix2, row1, col1);
        cout<<"Result Matrix after addition : \n";
        printMatrix(result, row1, col1);
        break;
    case '-':
        result = subtractMatrices(matrix1, matrix2, row1, col1);
        cout<<"Result Matrix after substraction : \n";
        printMatrix(result, row1, col1);
        break;
    case '*':
        result = multiplyMatrices(matrix1, matrix2, row1, col1, col2);
        cout<<"Result Matrix after multiplication : \n";
        printMatrix(result, row1, col2);
        break;
    default:
        cout<<"Invalid input!";
    }
    return result;
}


template <typename T>
T* addMatrices(const T matrix1[], const T matrix2[], int rows, int cols) {
  T* result = new T[rows * cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i * cols + j] = matrix1[i * cols + j] + matrix2[i * cols + j];
    }
  }
  return result;
}

template <typename T>
T* subtractMatrices(const T matrix1[], const T matrix2[], int rows, int cols) {
  T* result = new T[rows * cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i * cols + j] = matrix1[i * cols + j] - matrix2[i * cols + j];
    }
  }
  return result;
}

template <typename T>
T* multiplyMatrices(const T matrix1[], const T matrix2[], int rows1, int cols1, int cols2) {
  T* result = new T[rows1 * cols2];
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      result[i * cols2 + j] = 0;
      for (int k = 0; k < cols1; k++) {
        result[i * cols2 + j] += matrix1[i * cols1 + k] * matrix2[k * cols2 + j];
      }
    }
  }
  return result;
}
int main(){

    int rA, cA, rB, cB;
    char op;
    cout << "Enter the number of rows and columns for matrix A : ";
    cin >> rA >> cA;
    cout << "Enter the number of rows and columns for matrix B : ";
    cin >> rB >> cB;
    if (cA != rB)
    {
        cout << "Matrix multiplication is not possible!" << endl;
        return 1;
    }
    cout<<"Enter the operator : ";
    cin>>op;

    vector<int> A(rA * cA);
    vector<int> B(rB * cB);
    //taking inputs for matrix A and B
    cout << "Enter the elements of matrix A :" << endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cout<<"Enter the element["<<i<<"]"<<"["<<j<<"] : ";
            cin >> A[ (i * cA) + j];
        }
    }
    cout << "Enter the elements of matrix B :" << endl;
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout<<"Enter the element["<<i<<"]"<<"["<<j<<"] : ";
            cin >> B[i * cB + j];
        }
    }

    vector<vector<int>> result = matrixOperations(A,B,rA, cA, cB, op);

    return 0;
}
