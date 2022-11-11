#include <iostream>
#include "Input_Validation.h"
using namespace std;


void welcomeMessage();
void showMenu();
void velocity();
void acceleration();
void motionOptionA();
void motionOptionB();
void motionOptionC();
void motionOptionD();
void newton2Law();
void weight();
void momentum();
void reset();
void handleOption();


void welcomeMessage()
{
    cout << "\nWelcome to the Physics Calculator! \n";
    for(int i = 0; i < 40; i++)
      {
          cout <<"*";
      }
      cout << " \n ";
}
void showMenu()
{
    cout << "\n MENU \n V: Velocity \n A: Acceleration \n M: Motion - Kinematics Equations \n N: Newton's Second Law \n W: Weight(earth) \n P: Momentum\n X: Clear Screen \n E: Exit \n";
   
}
void velocity()
{
    double ds, dt;
    cout << "\nFor displacement (ds), ";
    ds = validateDouble(ds); 
    cout << "For time (dt), ";
    dt = validateDouble(dt);
    double v = ds/dt;
    cout << "Equation: v= ds/dt \n";
    cout << "Velocity is: " << v << " m/s \n";
}
void acceleration()
{
    double dv, dt;
    cout << "\nFor velocity (dv), ";
    dv = validateDouble(dv);
    cout << "For time (dt), ";
    dt = validateDouble(dt);
    double a = dv/dt;
    cout << "Equation: a = dv/dt \n";
    cout << "acceleration is: " << a << " m/s^2 \n";
}
void motionOptionA()
{
          double v0, a, t;
          cout << "\nFor initial velocity (v0), ";
          v0 = validateDouble(v0);
          cout << "For acceleration (a), ";
          a = validateDouble(a);
          cout << "For time (t), ";
          t = validateDouble(t);
          double v2 = v0 + (a*t);
          cout << "Equation: v = v0 + at \n";
          cout << "Final velocity is: "<< v2 << " m/s \n";
}
void motionOptionB()
{
          double v, v0, t, s0;
          cout << "\nFor final velocity (v), ";
          v = validateDouble(v);
          cout << "For initial velocity (v0), ";
          v0 = validateDouble(v0);
          cout << "For time (t), ";
          t = validateDouble(t);
          cout << "For initial position (s0), ";
          s0 = validateDouble(s0);
          double d1 = s0 + (1/2)*(v+v0)*t;
          cout << "Equation: s = s0 + 1/2(v+v0)t \n";
          cout << "Finial Position is: " << d1 << " m \n";
}
void motionOptionC()
{
    double s0, v0, a, t;
          cout << "\nFor initial position (s0), ";
          s0 = validateDouble(s0);
          cout << "For initial velocity (v0), ";
          v0 = validateDouble(v0);
          cout << "For acceleration (a), ";
          a = validateDouble(a);
          cout << "For time (t), ";
          t = validateDouble(t);
          double d2 = s0 + (v0*t) + (1/2)*(a*t*t);
          cout << "Equation: s = s0 + v0t + 1/2(at^2) \n";
          cout << "Final Position is: " << d2 << " m \n"; 
}
void motionOptionD()
{
    double v0, a, s, s0;
          cout << "\nFor initial velocity (v0), ";
          v0 = validateDouble(v0);
          cout << "For acceleration (a), ";
          a = validateDouble(a);
          cout << "For final position (s), ";
          s = validateDouble(s);
          cout << "For initial position (s0), ";
          s0 = validateDouble(s0);
          double v2 = (v0*v0) + (2)*(a)*(s-s0);
          cout << "Equation: v^2 = v0^2 + 2aΔs \n";
          cout << "Final Velocity is: " << v2 << " m/s \n";
}
void newton2Law()
{
  double m, a;
      cout << "\nFor mass (m), ";
      m = validateDouble(m);
      cout << "For acceleration (a), ";
      a = validateDouble(a);
      double n = (m*a);
      cout << "Equation: ∑F = ma \n";
      cout << "Force is: " << n << " N \n";
}
void weight()
{
      double m;
      cout << "\nFor mass (m), ";
      m = validateDouble(m);
      double w = (m*9.81);
      cout << "Equation: F = mg \n";
      cout << "Weight is: " << m << " N \n";
}
void momentum()
{
      double m, v;
      cout << "\nFor mass (m), ";
      m = validateDouble(m);
      cout << "For velocity (v), ";
      v = validateDouble(v);
      double p = (m*v);
      cout << "Equation: p = mv \n";
      cout << "Momentum is: " << p << " kg m/s \n";
} 
void reset()
  {
     system("clear");
  }

  void handleChoice(char input, char input2){
  switch (input){
  case 'V':
    velocity();
    break;
  case 'A':
    acceleration();
    break;
  case 'M':
    {
      do{
      cout << "\nFor your choice, \n A: v = v0 + at \n B: s = s0 + 1/2(v+v0)t \n C: s = x0 + v0t + 1/2(at^2) \n D: v^2 = v0^2 + 2aΔs \n E: Exit \n";
      input2 = validateChar(input2);
        input2 = toupper(input2);
        
      switch(input2){ 
        case 'A': 
          {
          motionOptionA();
          break;
            }
        case 'B':
          {
          motionOptionB();
          break;
          }
        case 'C':
          {
          motionOptionC();
          break;       
          }
        case 'D':
          {
          motionOptionD();
          break;
          }
        }
        }while(input2 != 'E');
        cout << "\nGoodbye. Hasta luego.\n" ;
      }
        break;
    case 'N':
      {
      newton2Law();
        break;
      }
    case 'W':
      {
      weight();
        break;
      }
    case 'P':
      {
      momentum();
        break;
      }  
    case 'X':
      {
        reset();
        break;
      }
  }
  }
