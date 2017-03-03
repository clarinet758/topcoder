#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

class KiwiJuiceEasy
{
public:
    vector <int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId)

    {
        for (int i=0;i<fromId.size();++i) {
            int f=fromId[i];
            int t=toId[i];
            int juice = bottles[f]+bottles[t];
            bottles[t]=min(juice,capacities[t]);
            bottles[f]=juice-min(juice,capacities[t]);
        }
        return bottles;
    }
};

