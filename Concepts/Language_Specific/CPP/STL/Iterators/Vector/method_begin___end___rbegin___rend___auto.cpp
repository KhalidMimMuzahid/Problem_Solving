#include <iostream>
#include  <vector>
using namespace std;

int main(){
    // vector<int> vec;
    vector<int> vec= {1,2,3,4,5};
    // vec.begin() is a memory address of first index
    cout<< *vec.begin() << endl; // we are dereferencing

    cout<< *vec.end() << endl; // vec.end() refer after the last index of this vector, that means it refer outside of vector


    // forward loop over the vector
    {
        vector<int>::iterator it; // it is a iterator, it holds memory address

        for(it= vec.begin(); it != vec.end(); it++){
            cout<< *it<< " ";
        }
        cout<< endl;
    }


    // backward loop
    {
        // backward loop over the vector using begin() and end() method
        {
            vector<int>::iterator it; // it is a iterator, it holds memory address
            // it= vec.end()
            for(it= vec.end()-1; it>=vec.begin() ; it--){ 
                cout<< *it<< " ";
            }
            cout<< endl;
        }

        // backward loop over the vector using rbegin() and rend() method
        {
            vector<int>::reverse_iterator rit;  // rit++ means, it will go to the backward memory, cause we declare rit as reverse_iterator
            // vec.rbegin() refer before the first index of this vector, that means it refer outside of vector
            for(rit= vec.rbegin(); rit!=vec.rend(); rit++){
                cout<< *rit<< " ";
            }
            cout<<endl;

            // OR, 
            // auto :: when we declare r_it as auto then it will be automatically declared the variable type 
            for(auto r_it= vec.rbegin(); r_it!=vec.rend(); r_it++){
                cout<< *r_it<< " ";
            }
            cout<<endl;
        }
    }


    // what is auto and how it works
    auto amIMarried=true; // automatically declared it as boolean
    cout << typeid(amIMarried).name() ; // b : it is boolean
    cout<< endl;
    cout<< amIMarried<<endl;




    return 0;
}
 

