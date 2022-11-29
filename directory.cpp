#include <bits/stdc++.h>
using namespace std;



int main ()
{
    
    ifstream fin("BM2043_PROJECT_DATA.csv");
    string line;
    getline(fin, line); // skip the first line from CSV
    while(fin.good()){
        getline(fin, line, ',');
        cout << line << endl;
    }
    return 0; 
}