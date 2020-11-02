#include <iostream>
#include <functional>
#include <algorithm>  //sort
#include <map> 
#include <random>

using namespace std;

bool comp(const pair<string, double> &a, const pair<string, double> &b){

  return a.second < b.second;
}

int main(){

  double mean = 15.0;
  double std = 5.0;
  
  std::default_random_engine generator;
  std::normal_distribution<double> distribution(mean,std);
  
  // Declare map
  map<string,double> grades;

  // Fill map
  // Internally stored in sorted order of keys
  grades["Joana"] = distribution(generator);
  grades["Ana"] = distribution(generator);
  grades["Pedro"] = distribution(generator);
  grades["Joao"] = distribution(generator);
  grades["Maria"] = distribution(generator);
  grades["Manuel"] = distribution(generator);
  grades["Teresa"] = distribution(generator);
  grades["Filipe"] = distribution(generator);
  grades["Antonio"] = distribution(generator);
  grades["Alberto"] = distribution(generator);

  // Vector of pairs
  vector<pair<string, double>> ord_map;
  
  // Loop through map and print out grades above 10
  for(auto const& x : grades){

    // Fill vector of pairs
    ord_map.push_back(x);
    
    cout << x.first  // string (key)
	 << ':'
	 << x.second   // string's value
	 << endl ;
  }

  // Use sort function to order vector of pairs
  sort(ord_map.begin(), ord_map.end(), comp);

  cout << "--------------------" << endl;
  cout << "Printing ordered map" << endl;
  cout << "--------------------" << endl;
 
  for(auto const& entry : ord_map){

    cout << entry.first  // string (key)
	 << ':'
	 << entry.second   // string's value
	 << endl ;
    
  }
  
  // Loop 
  
  return 0;
}
