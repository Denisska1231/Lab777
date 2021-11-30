#include<iostream>

using namespace std;

int adiff(int a,int b){
  if(a>=360 or a <= -360){
    a = a % 360;
  }
  if(b>=360 or b <= -360){
    b = b % 360;
  }
  int c;
  if(a>=b){
    c = a-b;
  }else{
    c = b-a;
  }
  if(c>180){
    c = 360 - c; 
  }

  return c ;
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
  return 0;
}