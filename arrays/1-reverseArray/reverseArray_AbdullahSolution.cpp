#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;


// the function reverseArray takes an array vector int a[n] as its 
// parameter and outputs vector int[n] as an output;
vector<int> reverseArray(vector <int> a)
{
    vector <int> toReturn;
    for (int i=0; i<a.size(); i++)
    {
        toReturn.push_back(a.at(a.size() - (i+1)) );
    }
    return toReturn;
}


int main()
{
    vector <int> smallToLarge = {1, 4, 6, 8, 9};

    cout << "before reversing" << endl;
    for (int i=0; i<smallToLarge.size(); i++)
        cout << i << ": " << smallToLarge[i] << endl;

    cout << "after reversing" <<endl;
    vector <int> largeToSmall  = reverseArray(smallToLarge);
    
    for (int i=0; i < largeToSmall.size(); i++)
        cout << i << ": " << largeToSmall[i] << endl;
    


    system("pause");
}