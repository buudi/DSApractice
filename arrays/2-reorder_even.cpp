/* 
    this program reorders an array of integers such that the even values come before
    the odd values.

    The function EvenOdd does the reordering, where it takes an array as an input and does 
    the reordering operation on the passed array itself. so it's not necessary for 
    the function to return anything.

    this program does not allocate additional space.
    Time complexity is linear with O(n).
*/

#include <iostream>
#include <vector>

//  1. we require *A_ptr to pass the array by reference
void EvenOdd(std::vector <int> *A_ptr){ 
    std::vector <int>& A = *A_ptr; // 2. we derefernce the array passed by the pointer A_ptr
    int next_even = 0, next_odd = A.size() - 1;
    while (next_even < next_odd){
        if (A[next_even] % 2 == 0){
            ++next_even;
        } else {
            std::swap(A[next_even], A[next_odd--]);
        }
    }
}

int main()
{
    // below are just test arrays, think of it as a smaple test
    std::vector<std::vector<int>> testArrs = {
        {2, 3, 1, 6},
        {9, 2, 5, 8},
        {6, 4, 2, 6, 3, 1, 2, 9}
    };
    // below we choose the array which the function operates on
    std::vector<int> arr = testArrs[2];

    std::cout << "Contents of array before reordering:\n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << i << ": " << arr[i] << std::endl;
    
    std::cout << std::endl;
    std::cout << "And now after reordering array such that even numbers come before odd ones:\n";
 
    EvenOdd(&arr); // the function EvenOdd won't return anything instead it does the operation on the
                   // passed array itself, so its necessary to pass &arr by reference.
    for (int i = 0; i < arr.size(); i++)
        std::cout << i << ": " << arr[i] << std::endl;
}


