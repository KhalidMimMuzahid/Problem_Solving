#include <iostream>
#include  <vector>
// for run this on cpp, we need to run comand with this->  g++ -std=c++11  
using namespace std;


void printVector(vector<int>& vec){

    cout<< " [";
    for(int i=0; i<vec.size(); i++){
        if(i!=0) cout<<",";
        cout << " " << vec[i] ;
    }
    cout<< " ]";
    cout << endl;
}

int main(){
    // vector<int> vec;
    vector<int> vec= {1,2,3};
    cout<<"vec: ";
    printVector(vec);

    vector<int> vec2(3,10); // means this vector has total 3 elements and each value is 10.
    cout<<"vec2: ";
    printVector(vec2);


    vector<int> vec3(vec); // we are coping vec to vec3
    cout<<"vec3: ";
    printVector(vec3);

    return 0;
}
 