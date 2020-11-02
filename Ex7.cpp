#include <iostream>
#include <math.h>

using namespace std;

double get_mean_std(double array[],int array_size){
  
  double sum = 0;
  double sum2 = 0;
  double avg;
  double stand;
  
  for(int i=0; i<array_size; i++){

    sum += array[i];
    
  }

  avg = sum/array_size;

  return avg;
  
}

int main(){

  double array[] = {10.5, 9.3, 11.4, 10.9, 13, 8.4, 9.2, 8.9, 10.3, 11.2, 12.1, 8.4, 9.2, 9.9, 10.1};
  int array_size = sizeof(array)/sizeof(array[0]);
  
  double result = get_mean_std(array,array_size);
  cout << "Average: " << result << endl;
  
  return 0;
  
}
