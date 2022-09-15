#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    long long n;
    cin >> n;
    vector <long long> List(n - 1); 
    
    for (int i=0; i < n-1; i++)
        cin >> List[i];

    long long temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (List[j] < List[i])
            {
                temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }
    
    long long count = 0;
    while(count < n-1){
        if (List[count] == List[count+1] - 1)
            count++;
        else{
            cout << List [count] + 1;
            break;
        }
    }
}