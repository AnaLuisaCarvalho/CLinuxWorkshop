#include <iostream>
using namespace std;

int main(){

  double array[] = {10.5, 9.3, 11.4, 10.9, 13, 8.4, 9.2, 8.9, 10.3, 11.2, 12.1, 8.4, 9.2, 9.9, 10.1};
  int array_size = sizeof(array)/sizeof(array[0]);
  
  for(int i=0; i<array_size; i++){

    cout << array[i] << endl;
    
  }

  int user_number;
  cout << "Dear user, please enter a number between 1 and 15" << endl;
  cin >> user_number;
  cout << "The number you chose corresponds to entry " << array[user_number] << " of the array" << endl;
  
  return 0;
  
}
