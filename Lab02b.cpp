#include <iostream>

int print_matrix ( int size,int columns, int M[]){
    int a = 0;
for(int i=0; i < size; i++){
    std:: cout << M[i]<<' ';
    a++;
    if(a==columns){
         std:: cout <<"\n";
         a=0;
    }
    }
    return 0;
}

void input_matrix(int size, int M[]){
    for(int i=0; i<size; i++){
         std:: cin >> M[i];
    }
}
void add_matrices(int M1[], int M2[], int M3[],int size){
    for(int i=0;i<size;i++){
        M3[i]=M1[i] + M2[i];
    }
}
void subtract_matrices (int M1[],int M2[], int M3[],int size){
    for(int i=0;i<size;i++){
        M3[i]=M1[i] - M2[i];
    }
}
int main(int argc, char** argv){
    int rows;
    int columns;
    std:: cin >> rows >> columns;
    
    int size = rows*columns;

    int matrix1[size];
    input_matrix(size,matrix1);

    int matrix2[size];
    input_matrix(size,matrix2);

    int resultmatrix[size];

    char oper; 
    std::cin >> oper; 


 if (oper == '+'){
    add_matrices(matrix1,matrix2,resultmatrix,size);
     print_matrix(size,columns,resultmatrix);

}
if (oper == '-'){
    subtract_matrices(matrix1,matrix2,resultmatrix,size);
     print_matrix(size,columns,resultmatrix);
}
    return 0;
}
