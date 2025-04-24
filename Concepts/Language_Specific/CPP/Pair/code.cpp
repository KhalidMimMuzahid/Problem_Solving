#include <iostream>
#include <vector>
using namespace std;



int main(){
    pair<int, int> p1= {5,10};
    pair<string, int> p2= {"age",10};

    cout<< p2.first<<" : "<< p2.second<< endl;

    pair<string, pair<string, int> > person={"Khalid", {"age", 26}};
    cout<< person.first<< ":"<< person.second.first<< ":"<< person.second.second<<endl;

    vector<pair<int, int>> vec= {{1,2}, {3,4},{5,6},{7,8}};

    vec.push_back({9,10}); //insert
    vec.emplace_back(11,12);// in place object create
    for(pair<int,int> val: vec){
        cout<< val.first<< " : "<< val.second<< endl;
    }


    return 0;
}
 