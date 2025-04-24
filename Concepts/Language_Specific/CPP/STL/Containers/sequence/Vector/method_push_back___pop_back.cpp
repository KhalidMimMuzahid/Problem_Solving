#include <iostream>
# include <vector>
using namespace std;

void printVector(vector<int>& vec){

    cout<< " Arr=[";
    for(int i=0; i<vec.size(); i++){
        if(i!=0) cout<<",";
        cout << " " << vec[i] ;
    }
    cout<< " ]";
    cout << endl;
}

// pop_back can reduce the size but not the capacity
// push_back can increase bot of the size and capacity
int main(){
    vector<int> vec; // size=0
    cout<< "-------------------------------------"<< endl;
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(1);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(2);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(3);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(4);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(3);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.push_back(5);
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.pop_back();
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);
    cout<< "-------------------------------------"<< endl;
    vec.pop_back();
    vec.pop_back();
    cout<< "size: " << vec.size();
    cout<< " capacity: " << vec.capacity();
    printVector(vec);

    cout<< "-------------------------------------"<< endl;
    return 0;
}