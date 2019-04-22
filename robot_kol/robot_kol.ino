#include <string.h> 
#define led 13
#define led1 8


void a1(){
   digitalWrite(led, HIGH);   


}

void a2(){
   digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
   
   


  
}
void a3(){
  delay(5000);
     digitalWrite(led, LOW);
   
  


  
}
void a4(){
  digitalWrite(led1, HIGH);
   delay(1000);
   digitalWrite(led1, LOW);
    delay(1000);
  
  
}

typedef void (* Caller)();
//                                       , &a5, &a6, &a7, &a8,
//                     &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8,
//                     &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8,
//                     &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8,
//                     &e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8,
//                     &f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8,
//                     &g1, &g2, &g3, &g4, &g5, &g6, &g7, &g8,
//                  -   &h1, &h2, &h3, &h4, &h5, &h6, &h7, &h8

//                                                , "a5", "a6", "a7", "a8",
//                          "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8",
//                          "c1", "c2", "c3", "c4", "c5", "c6", "c7", "c8",
//                          "d1", "d2", "d3", "d4", "d5", "d6", "d7", "d8",
//                          "e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8",
//                          "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8",
//                          "g1", "g2", "g3", "g4", "g5", "g6", "g7", "g8",
//                          "h1", "h2", "h3", "h4", "h5", "h6", "h7", "h8"
Caller FuncCall[] = {
                     &a1, &a2, &a3, &a4
                     };
const char* func_list[] = {
                          "a1", "a2", "a3", "a4"
                          };

char *p;



void setup() {
    pinMode(led, OUTPUT);
    pinMode(led1, OUTPUT);
    Serial.begin(9600);
   
    
    
   
}
void loop() {
    
    if(Serial.available()) {
       String serialListener = Serial.readString();
       char str_array[serialListener.length()];
       serialListener.toCharArray(str_array, serialListener.length());
       char* token = strtok(str_array, "-");
        
        while (token != NULL) 
          { 
                               
              for (int i =0; i < 129; i++)
              {
          
                  if (strcmp(token, func_list[i])== 0){
                    
                      FuncCall[i]();
                      Serial.println(token);
                     
            
                  }
              }
              token = strtok(NULL, "-"); 
           
               
        
       }

    
    }
}
