#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> uniqueId;
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
struct comp
{
    template <typename T>
    bool operator()(const T &l, const T &r) const
    {
        return l.first < r.first;
    }
};

int main()
{
    map<uniqueId, Doctors *, comp> doc_data;
    /*
        Key here is doc_name, id (Not in original dataset).
        Value is a pointer to a Doctors object.
        This key value pair is sorted by doc_name.
        Used a pair as key, because doc_names are not unique in dataset
    */
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
        doc_data[{doc->name, sr++}] = doc;
    }

    /* Print the data
    for(auto& x:doc_data){
        cout<<x.first.first<<" "<<x.first.second<<endl;
    }
    */

    return 0;
}