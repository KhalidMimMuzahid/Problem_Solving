#include <iostream>
#include <map>
using namespace std;



// size(), empty() has also worked 

int main(){
    map<string, int>  products;

    products["tv"]=200;
    products["ac"]=100; 
    products["fridge"]=150;

    cout<<"tv: "<< products["tv"]  <<  endl<< endl;
    // each key is unique
    // by default key pair has sorted in key- ascending lexicographically
    // thats why first item will ac then fridge then tv
    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }
    cout<< endl;
    products.insert({"camera", 35});
    products.emplace("mobile", 300);

    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    cout<< "key count: "<< products.count("mobile")<< endl;

    products.erase("tv"); // tv has been removed

    for(auto p: products){
        cout<<p.first<< ": " << p.second  <<  endl;    
    }

    if(products.find("camera") != products.end()){
        cout<< "found"<< endl;
    }
    else{
        cout<< "not found"<< endl;
    }

    return 0;
}

