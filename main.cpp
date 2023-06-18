#include <iostream>
using namespace std;

void generate_array(int *data, const int N);
void print_array(int data[], const int N);

void generate_array_v1(int *data, const int N);


int main() {
  const int SIZE=5;
  int myData[SIZE];
    
  srand(time(NULL));
  
  // call generate function
  // pass array as argument
  generate_array(myData,SIZE);

  // call print function
  // pass array as argument
  print_array(myData,SIZE);

  cout<<endl;

  generate_array_v1(myData,SIZE);
  print_array(myData,SIZE);
 
  return 0;
}

void generate_array(int *data, const int N)
{
  for (int i=0;i<N;i++)
    {
      *(data + i)=1+rand()%10;
    }
}

void print_array(int data[], const int N)
{
  for (int i = 0; i < N; ++i)
    {
        cout << "myData[" << i << "] = "  << data[i]<< endl;
    }
  
}

void generate_array_v1(int *data, const int N)
{
  int * i = data;
  while (i != data+N) {
    *i=1+rand()%10;
    i++;     // increment pointer
  }
  
}

  




