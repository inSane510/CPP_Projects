#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <set>


using namespace std;

int main()
{
    ///UNORDERED SETS BELOW.
    /*
    unordered_set<string> groupNames;
    set<string> newNames;

    groupNames.insert("David");
    groupNames.insert("David");
    groupNames.insert("Gino");
    groupNames.insert("Sanad");
    groupNames.insert("Jesus");

    newNames.insert("David");
    newNames.insert("David");
    newNames.insert("Gino");
    newNames.insert("Sanad");
    newNames.insert("Jesus");

    cout << "----------UnOrdered_set-----" << endl;
    for(auto name = groupNames.begin(); name != groupNames.end(); name++)
    {
        cout << *name << ", ";
    }

    cout << endl << endl << "---------- set -----" << endl;

    for(auto name = newNames.begin(); name != newNames.end(); name++)
    {
        cout << *name << ", ";
    }
    */

    unordered_map<int, string> teamJerseyOwners;

    teamJerseyOwners[3] = "Gino";
    teamJerseyOwners[481] = "David";
    teamJerseyOwners[9999] = "Rosa";
    teamJerseyOwners[12345] = "Sanad";
    teamJerseyOwners[5867] = "Jesus";

    for(auto jersey = teamJerseyOwners.begin(); jersey != teamJerseyOwners.end(); jersey++)
    {
        cout << jersey->second << ", #"  << jersey->first << endl;
    }




    return 0;
}
