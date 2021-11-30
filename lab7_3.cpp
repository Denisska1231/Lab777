#include<iostream>

using namespace std;

int adiff(int a, int b){
    int c,d,i=0;
    while(i == 0){
        if(a >= 360){
        a=a-360;
    }
    else{
        i++;
    }
    }
    i=0;
    while(i == 0){
        if(b >= 360){
        b=b-360;
    }
    else{
        i++;
    }
    }
    c=a-b;
    d=(360-b)+a;
    if(c < 0){
        c=c*-1;
    }
    if(d < 0){
        d=d*-1;
    }
    if(c <= d){
      return c;
    }else{
      return d;
    }
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