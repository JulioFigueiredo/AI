#include <LiquidCrystal.h>

// conexão física nos pinos
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);
const int rows[] = {6, 7, 8, 9};
const int cols[] = {10, 11, 12, 13};

// mapear o teclado
const char keys[4][4] = {{'1', '2', '3', 'A'},
                         {'4', '5', '6', 'B'},
                         {'7', '8', '9', 'C'},
                         {'*', '0', '#', 'D'}};

int users [10] = {1,2,3,4,5,6,7,8,9,10};


// Variaveis globais
bool logado = false;
String senha = "";
int tentativas = 0;
const int maxTentativas = 3;

void setup()
{
  // inicialização do display lcd
  lcd.begin(16,2);
  // iniciazação o teclado matricial
  for (int i=0; i<4; i++) {
    pinMode(rows[i], INPUT_PULLUP);
    pinMode(cols[i], OUTPUT);
    digitalWrite(cols[i], HIGH);
  }
  lcd.setCursor(0,0);
  lcd.print("Sistema de Acesso");
  lcd.setCursor(0,1);
  lcd.print("Digite");
}

void loop() {
  char tecla = scannerTeclado();
  if (tecla > 0) {    
    if (logado) {
      tratarLogado(tecla);
    } else {
      tratarDeslogado(tecla);
    }
    delay(500); // Evita ativações em sequência
  }
}

char scannerTeclado() {
  char tecla = 0;
  for (int i = 0; i < 100; i++) {
    for (int col = 0; col < 4; col++) {
      digitalWrite(cols[col], LOW);
      for (int row = 0; row < 4; row++) {
        if (digitalRead(rows[row]) == LOW) {
          tecla = keys[row][col];
          while (digitalRead(rows[row]) == LOW) {
            delay(10);
          }
          break;
        }
      }
      digitalWrite(cols[col], HIGH);
      if (tecla != 0) {
        break;
      }
    }
    if (tecla != 0) {
      break;
    }
  }
  return tecla;
}

void tratarLogado(char tecla) {
  if (tecla == 'A') {
    lcd.setCursor(0,0);
    lcd.print("Registrar senha:");
    String novaSenha = lerSenha();
    senha = novaSenha;
    lcd.setCursor(0,0);
    lcd.print("Senha registrada!");
    delay(2000);
    lcd.print("Sistema de Acesso");
    lcd.setCursor(0,1);
    lcd.print("");
  } else if (tecla == 'B') {
    senha = "";
    lcd.setCursor(0,0);
    lcd.print("Senha excluida! ");
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("Sistema de Acesso");
    lcd.setCursor(0,1);
    lcd.print("Digite");
} else if (tecla == 'C') {
    lcd.setCursor(0,0);
    lcd.print("Senha atual:");
    lcd.setCursor(0,1);
    lcd.print(senha);
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("Sistema de Acesso");
    lcd.setCursor(0,1);
    lcd.print("Digite");
  } else if (tecla == 'D') {
    logado = false;
    lcd.setCursor(0,0);
    lcd.print("Deslogado!");
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("Sistema de Acesso");
    lcd.setCursor(0,1);
    lcd.print("Digite ");
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sistema de Acesso");
  lcd.setCursor(0,1);
  lcd.print("Digite ");
}

void tratarDeslogado(char tecla) {
  if (tecla == '#') {
    if (senha == "" || senha == lerSenha()) {
      logado = true;
      lcd.setCursor(0,0);
     lcd.print("Acesso Permitido!");
      delay(2000);
      lcd.setCursor(0,0);
      lcd.print("Sistema de Acesso");
      lcd.setCursor(0,1);
      lcd.print("Digite");
    } else {
      tentativas++;
      lcd.setCursor(0,0);
      lcd.print("Acesso Negado!");
      lcd.setCursor(0,1);
      lcd.print("Tentativas: " + String(tentativas));
      delay(2000);
      if (tentativas >= maxTentativas) {
        lcd.setCursor(0,0);
        lcd.print("Bloqueado!  ");
        delay(2000);
        tentativas = 0;
      }
    }
  } else if (tecla == '*') {
    lcd.setCursor(0,0);
    lcd.print("Operação cancelada!");
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("Sistema de Acesso");
    lcd.setCursor(0,1);
    lcd.print("Digite ");
  } else {
    lcd.setCursor(0,1);
    lcd.print(tecla);
  }
}

String lerSenha() {
  String senha = "";
  lcd.setCursor(0,1);
  lcd.print("");
  while (true) {
    char tecla = scannerTeclado();
    if (tecla > 0) {
      if (tecla == '#') {
        return senha;
      } else if (tecla == '*') {
        senha = "";
        lcd.setCursor(0,1);
        lcd.print("");
        lcd.setCursor(0,1);
        lcd.print("            ");
      } else if (tecla >= '0' && tecla <= '9') {
        senha += tecla;
        lcd.setCursor(0,1);
        lcd.print(senha);
      }
    }
  }
}