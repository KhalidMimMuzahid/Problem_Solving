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


// erase & clear can reduce the size but not the capacity
// insert can increase bot of the size and capacity

int main(){
    // vector<int> vec;
    vector<int> vec= {0,1,2,3,4,5,6,7,8,9,10};
    printVector(vec);

    vec.erase(vec.begin());
    printVector(vec);
    vec.erase(vec.begin()+2);
    printVector(vec);

    vec.erase(vec.begin()+ 3, vec.begin()+ 6); // // from index 3 to before the index 6 will eb deleted
    printVector(vec);

    vec.insert(vec.begin()+2,3);
    printVector(vec);
    vec.insert(vec.begin()+4,5);
    vec.insert(vec.begin()+5,6);
    vec.insert(vec.begin()+6,7);
    printVector(vec);

    cout<<"is vec empty:"<<vec.empty()<<endl;

    vec.clear();
    printVector(vec);

    cout<<"is vec empty:"<<vec.empty()<<endl;




    return 0;
}
 