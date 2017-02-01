int H = A0;  // define your analog pins here 
int C = A1;
int D = A2;
int E = A3;
int F = A4;
int G = A5;
int A = A6;

int SPK = 3;  // define pin for your speaker

int nh, nc, nd, ne, nf, ng, na; // define note


void setup() {
  
 Serial.begin(9600);  // serial monitor 
 
 pinMode(H, INPUT);  // define pins as input 
 pinMode(C, INPUT);
 pinMode(D, INPUT);
 pinMode(E, INPUT);
 pinMode(F, INPUT);
 pinMode(G, INPUT);
 pinMode(A, INPUT);
 
pinMode(SPK, OUTPUT); // define speaker as output 

  }

void loop() {

nh= analogRead(H);           // analog read  
if (nh < 700)                // if laser beam hit resistor this value is around 1 000 - 1 100.
                             // if you cover the laser beam this value goes down to 300
tone (SPK, 123, 20);         // 123 is sound frequency (you can change it and play wit it) 20 is a length of the sound 
Serial.println(nh);          // this funcion allows you to check on serial monitor analog values

nc= analogRead(C);
if (nc < 700)
tone (SPK, 131, 20);

nd= analogRead(D);
if (nd < 700)
tone (SPK, 147, 20);

ne= analogRead(E);
if (ne < 700)
tone (SPK, 165, 20);

nf= analogRead(F);
if (nf < 700)
tone (SPK, 175, 20);

ng= analogRead(G);
if (ng < 700)
tone (SPK, 196, 20);

na= analogRead(A);
if (na < 700)
tone (SPK, 220, 20);

}
