#include <iostream>
using namespace std;
int distanceT(int t1, int t2){
  int distance;
  int table[6][6]={(0,256,43,475,876,623),(258,0,301,217,616,365),(43,301,0,518,918,667),(475,217,518,0,401,148),(876,616,918,401,0,241),(623,365,667,148,246,0)};
  distance=table[t1][t2];
  return distance;
}
int main(){
  int town1, town2;
  cout << "Enter number for town 1:";
  cin >> town1;
  cout << "Enter number for town 2:";
  cin >> town2;
  cout << distanceT(town1,town2);
  return 0;
}
