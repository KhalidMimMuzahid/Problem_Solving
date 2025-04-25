#include <iostream>
#include <map>
using namespace std;



// size(), empty() has also worked 

int main(){
    multimap<string, int>  products;
    products.insert({"fridge",150}); // T=O(logn)
    products.emplace("ac",100);  // T=O(logn)
    products.insert({ "tv", 201}); // we can set duplicate key in Multi Map
    products.insert({ "tv", 202});
    products.insert({ "tv", 203});
    products.insert({ "tv", 204});

    

    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    products.erase(products.find("tv")); // when we erase "tv" in this way, only first pair will be removed
    cout<< endl;
    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    products.erase("tv"); // when we erase "tv", all pair will be removed  // T=O(logn)
    cout<< endl;
    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    return 0;
}
