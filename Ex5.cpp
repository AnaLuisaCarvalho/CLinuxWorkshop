#include <iostream>
#include <math.h>

using namespace std;

int main(){

  double array[] = {10.5, 9.3, 11.4, 10.9, 13, 8.4, 9.2, 8.9, 10.3, 11.2, 12.1, 8.4, 9.2, 9.9, 10.1};
  int array_size = sizeof(array)/sizeof(array[0]);

  double sum = 0;
  
  for(int i=0; i<array_size; i++){

    sum += array[i];
    
  }
  
  double avg = sum/array_size;
  cout << "Mean value: " << avg << endl;

  double sum2 = 0;
  for(int i=0; i<array_size; i++){

    sum2 += pow((array[i]-avg),2);

  }

  double stand = sqrt(sum2/array_size);
  cout << "Standard deviation: " << stand << endl;
  
  return 0;
  
}
