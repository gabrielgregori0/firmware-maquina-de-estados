enum State {
  INIT,
  READ_SENSOR,
  PROCESS_DATA,
  SEND_DATA,
  IDLE
};

State currentState = INIT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  switch (currentState) {

    case INIT:
      Serial.println("Inicializando sistema...");
      currentState = READ_SENSOR;
      break;

    case READ_SENSOR:
      Serial.println("Lendo sensor...");
      currentState = PROCESS_DATA;
      break;

    case PROCESS_DATA:
      Serial.println("Processando dados...");
      currentState = SEND_DATA;
      break;

    case SEND_DATA:
      Serial.println("Enviando dados...");
      currentState = IDLE;
      break;

    case IDLE:
      delay(2000);
      currentState = READ_SENSOR;
      break;
  }
}
