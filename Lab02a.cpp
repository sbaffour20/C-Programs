#include <iostream>

int print_vector(int V[], int dimension){
    for(int i=0; i < dimension; i++){
    std:: cout << V[i]<<' ';
    }
    return 0;
}
void input_vector(int dimension, int arr[]){
 for(int i = 0; i< dimension; i++){
     std:: cin >> arr[i];
 }
}
void add_vectors(int vector1[],int vector2[],int vector3[], int dimension){
    for(int i=0;i<dimension;i++){
        vector3[i]=vector1[i] + vector2[i];
    }
}
void subtract_vectors(int vector1[],int vector2[],int vector3[], int dimension){
    for(int i=0;i<dimension;i++){
        vector3[i]=vector1[i] - vector2[i];
    }
}
bool compare_vectors(int vector1[],int vector2[], int dimension){
    bool res; 
    for(int i=0;i<dimension;i++){
        if (vector1[i] != vector2[i]){
            return false;
        }
    }
    return true;   
}

int main(int argc, char** argv){
    int dimension;
    std::cin >> dimension;

    int vector1 [dimension];
    input_vector(dimension,vector1); 
   
    int vector2 [dimension];
    input_vector(dimension,vector2);

    int resultvector[dimension];

    char oper; 
    std::cin >> oper; 

if (oper == '+'){
    add_vectors(vector1,vector2,resultvector,dimension);
     print_vector(resultvector,dimension);

}
if (oper == '-'){
    subtract_vectors(vector1,vector2,resultvector,dimension);
    print_vector (resultvector,dimension);
}
 if (oper =='='){
    
    if(compare_vectors(vector1,vector2,dimension)== true){
     std::cout<< "EQUAL";
    }
    else {
        std::cout<< "UNEQUAL";
    }
}
  return 0; 
}