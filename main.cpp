// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int nilai1 = 5, nilai2 = 15;
  int * p1, * p2;

  cout << "Nilai 1 adalah " << nilai1 << '\n';
  cout << "Nilai 2 adalah " << nilai2 << '\n';

  cout << "Lakukan operasi pada pointer" << '\n';
  cout << "HASILYA ADALAH " << '\n';

  p1 = &nilai1;  
  p2 = &nilai2; 
  *p1 = 10;          
  *p2 = *p1;        
  p1 = p2;           
  *p1 = 20;          
  
  cout << "Nilai 1 adalah " << nilai1 << '\n';
  cout << "Nilai 2 adalah " << nilai2 << '\n';
  return 0;
}