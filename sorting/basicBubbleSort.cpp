#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> *Arr){
    std::vector<int> &arr = *Arr;
    int n = arr.size();
    for (int i=0; i < n; i++){
        for (int j=0; j<n-1; j++){
            if (arr.at(j) > arr.at(j+1))
                std::swap(arr[j],arr[j+1]);
        }
    }
}

int main(){ 

    std::vector <int> someArray = {6, 23, 55, 8, 1, 9};
    for (int i=0; i < someArray.size(); i++)
        std::cout << i << ": "<< someArray.at(i) << std::endl;
  
    bubbleSort(&someArray);

    std::cout << std::endl;
    std::cout << "after sorting" << std::endl;
    for (int i=0; i < someArray.size(); i++)
        std::cout << i << ": "<< someArray.at(i) << std::endl;
}