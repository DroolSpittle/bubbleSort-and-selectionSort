#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a);
void printVector(vector<int> a);

int main()
{
    vector<int> decreasingInts;

    ifstream randomInts("ints.txt");

    int readIn = 0;

    while(randomInts >> readIn)
    {
        decreasingInts.push_back(readIn);
    }

    randomInts.close();

    //printVector(decreasingInts);

    bubbleSort(decreasingInts);

    //printVector(decreasingInts);

    cout << "The largest element in the array is: " << decreasingInts[0];

    return 0;
}

void bubbleSort(vector<int>& a)
{
    bool swap = true;
    while(swap == true)
    {
        swap = false;
        for(size_t i = 0; i < a.size()-1; i++)
        {
            if(a[i]<a[i+1])
            {
                a[i] += a[i+1];
                //cout << "a[i]: " << a[i] << " a[i+1]:" << a[i+1] << "\n";
                a[i+1] = a[i] - a[i+1];
                //cout << "a[i]: " << a[i] << " a[i+1]:" << a[i+1] << "\n";
                a[i] -= a[i+1];
                //cout << "a[i]: " << a[i] << " a[i+1]:" << a[i+1] << "\n";
                swap = true;
            }
            
        }
    }
}

void printVector(vector<int> a)
{
    for(size_t i=0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}