// just a scratch for something bigger, let's see where will I reach
#include <iostream>
#include <vector>

typedef enum  { RED, WHITE, BLUE } Color;

void DutchFlagPartition(int pivot_index, std::vector<Color> *A_ptr){
    std::vector<Color> &A = *A_ptr;
    Color pivot = A[pivot_index];
    
    // First pass: group elements smaller than pivot.
    for (int i=0; i < A.size(); ++i){
        // look for smaller elements
        for (int j=i+1; j < A.size(); ++j)
        {
            if (A[j] < pivot){
                std::swap(A[i], A[j]);
                break;
            }
        }
    }
    // Second: pass: group elements greater than the pivot.
    for (int i=0; i < A.size(); ++i)
    {
        
    }
}

int main(){

}