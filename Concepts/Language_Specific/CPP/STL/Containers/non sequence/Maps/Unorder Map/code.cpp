#include <iostream>
#include <map>
using namespace std;



// size(), empty() has also worked 

int main(){
    unordered_map<string, int>  products;
    products.insert({"fridge",150}); // pair will be randomly placed not be sorted here
    products.insert({"tv",250});  // T=O(1)
    products.insert({"ac",150});
    // products.insert({"ac",151});  // we can not duplicate key

    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }
    products.erase("tv"); // T=O(1)
    cout<<endl;
    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    return 0;
}
