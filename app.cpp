const int sensor = A0, motor = 11;  //Cria as contantes corresponentes aos pinos usados

int velocidade, total; //Cria variaveis

  

void setup() { 
  pinMode(sensor, INPUT); //Define pinos como I/O
  pinMode(motor, OUTPUT); 

  Serial.begin(9600); //Inicia monitor serial
} 

  

void loop() { 

  velocidade = map(analogRead(sensor), 0, 255, 0, 1023); 

  analogWrite(motor, velocidade); 

  

  total = map(analogRead(sensor), 0, 255, 0, 100); 

  Serial.print("O motor esta a: "); 

  Serial.print(total); 

  Serial.println("%"); 

  Serial.println(""); 

  

  Serial.print("O sensor leu: "); 

  Serial.println(analogRead(sensor)); 

  Serial.println(""); 

} 