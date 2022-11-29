#include <bits/stdc++.h>
using namespace std;

class Doctors
{
public:
    string name;
    string email;
    string phone;
    string Employement; // Staff or Doctor or Nurse
    string Department;
    int feedback;
    int patients;
};

int main()
{
    map<int, Doctors *> doc_data;
    int sr = 1; // serial number acts as key

    ifstream fin("BM2043_PROJECT_DATA.csv");
    string line;
    getline(fin, line); // skip the first line from CSV
    while (fin.good())
    {
        getline(fin, line);
        stringstream ss(line); // convert the line into a stream

        getline(ss, line, ',');
        Doctors *doc = new Doctors();
        doc->name = line;
        getline(ss, line, ',');
        doc->email = line;
        getline(ss, line, ',');
        doc->phone = line;
        getline(ss, line, ',');
        doc->Employement = line;
        getline(ss, line, ',');
        doc->Department = line;
        getline(ss, line, ',');
        doc->feedback = stoi(line);
        getline(ss, line, ',');
        doc->patients = stoi(line);
        doc_data[sr++] = doc;
    }

    // for(auto& x:doc_data){
    //     cout<<x.first<<" "<<x.second->name<<" "<<x.second->email<<" "<<x.second->phone<<" "<<x.second->Employement<<" "<<x.second->Department<<" "<<x.second->feedback<<" "<<x.second->patients<<endl;
    // }

    return 0;
}