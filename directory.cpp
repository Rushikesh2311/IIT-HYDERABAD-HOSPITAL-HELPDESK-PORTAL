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
    int start_time;
    int end_time;
    //Start_time and end_time are in 24 hour format, showing the time when the doctor is available
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

    map<string, vector<Doctors *>> name_mapping;
    /*
        Key here is doc_name.
        Value is a vector of pointers to Doctors objects.
        (Used vector because doc_names are not unique in dataset).
    */

    map<string, Doctors *> phone_mapping;
    map<string, Doctors *> email_mapping;
    map<string, vector<Doctors *>> department_mapping;
    /*
         Key here is doc_department.
         Value is vector of pointers to a Doctors object.
         Used a vectpr because doc_department are unique in dataset.
    */

    map<string, vector<int>> id_mapping;
    /*
      Purpose of this map is to store the ids of doctors with same name.
      So if all parameters are same this would stop duplicate entries.
      If even a single parameter is different, then it would be stored as a new entry.
    */

    ifstream fin("BM2043_PROJECT_DATA.csv");
    string line, word;
    getline(fin, line); // skip first line
    while (getline(fin, line))
    {
        stringstream s(line);
        Doctors *doc = new Doctors();
        getline(s, word, ',');
        doc->name = word;
        getline(s, word, ',');
        doc->email = word;
        getline(s, word, ',');
        doc->phone = word;
        getline(s, word, ',');
        doc->Employement = word;
        getline(s, word, ',');
        doc->Department = word;
        getline(s, word, ',');
        doc->feedback = stoi(word);
        getline(s, word, ',');
        doc->patients = stoi(word);

        bool new_data = true;

        // Inserting into id_mapping
        if (id_mapping.find(doc->name) == id_mapping.end())
        {
            vector<int> v;
            v.push_back(sr);
            id_mapping[doc->name] = v;
        }
        else
        {

            for (auto i : id_mapping[doc->name])
            {
                if (doc_data[{doc->name, i}]->email == doc->email && doc_data[{doc->name, i}]->phone == doc->phone && doc_data[{doc->name, i}]->Employement == doc->Employement && doc_data[{doc->name, i}]->Department == doc->Department && doc_data[{doc->name, i}]->feedback == doc->feedback && doc_data[{doc->name, i}]->patients == doc->patients)
                {
                    new_data = false;
                    break;
                }
            }
            if (new_data == true)
                id_mapping[doc->name].push_back(sr);
        }

        if (new_data == true)
        {
            doc->start_time = rand() % 12; //Constraint: 0<=start_time<12
            doc->end_time = rand() % 24;
            while(doc->end_time <= doc->start_time)
                doc->end_time = rand() % 24;

            // Inserting into doc_data
            doc_data[{doc->name, sr++}] = doc;

            // Inserting into name_mapping
            name_mapping[doc->name].push_back(doc);

            // Inserting into phone_mapping
            phone_mapping[doc->phone] = doc;

            // Inserting into email_mapping
            email_mapping[doc->email] = doc;

            // Inserting into department_mapping
            department_mapping[doc->Department].push_back(doc);
        }
        else
        {
            continue;
        }
    }

    // Printing all the doctors in sorted order
    for (auto it : doc_data)
    {
        cout << it.first.first << " " << it.first.second << " " << it.second->name << " " << it.second->email << " " << it.second->phone << " " << it.second->Employement << " " << it.second->Department << " " << it.second->feedback << " " << it.second->patients << " " << it.second->start_time << " " << it.second->end_time << endl;
    }

    //Uncomment following lines to delete a doctor, by putting appropirate details in name and id field
    // string name;
    // int id;
    // if(doc_data.find({name, id}) != doc_data.end()){
    //     doc_data.erase({name, id});
    // }

    //updating a doctor's details, i.e changing the start_time and end_time
    // doc_data[{name, id}]->start_time = new_start_time;
    


    return 0;
}