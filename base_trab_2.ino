//TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Técnicas

// Variáveis globais para armazenar os valores
int soma = 1;          // Flag para indicar se a operação é soma (1) ou subtração (0)
int carryBit = 0;      // Bit de carry (vai-um) da operação

// Variáveis para os nibbles (4 bits) de entrada
int nib1a,nib1b,nib1c,nib1d = 0;  // Primeiro número de 4 bits (bits a, b, c, d)
int nib2a,nib2b,nib2c,nib2d = 0;  // Segundo número de 4 bits (bits a, b, c, d)

// Variáveis para os bits do resultado
int res1a,res1b,res1c,res1d = 0;  // Resultado da soma de 4 bits

void setup()
{
	// Configura os pinos de entrada para os dois números de 4 bits
	pinMode(0, INPUT);  // Bit a do primeiro número
	pinMode(1, INPUT);  // Bit b do primeiro número
	pinMode(2, INPUT);  // Bit c do primeiro número
	pinMode(3, INPUT);  // Bit d do primeiro número (mais significativo)
	
	pinMode(4, INPUT);  // Bit a do segundo número
	pinMode(5, INPUT);  // Bit b do segundo número
	pinMode(6, INPUT);  // Bit c do segundo número
	pinMode(7, INPUT);  // Bit d do segundo número (mais significativo)

	// Configura os pinos de saída para o resultado
	pinMode(8, OUTPUT);   // Bit a do resultado
	pinMode(9, OUTPUT);   // Bit b do resultado
	pinMode(10, OUTPUT);  // Bit c do resultado
	pinMode(11, OUTPUT);  // Bit d do resultado (mais significativo)
	pinMode(12, OUTPUT);  // Bit de carry (vai-um) do resultado

	// Pino 13 não utilizado no momento, mas configurado como entrada
	pinMode(13, INPUT);
}

// Função para calcular o bit de soma usando álgebra booleana
// Implementa a lógica de um full adder: S = A ⊕ B ⊕ Cin
int somaBit(int b1a, int b2a, int cBit)
{
	int bitResult = 0;
	int aux1, aux2 = 0;
	if ((b1a ^b2a) ^ cBit)
	{
		bitResult = 1;
	}
	else
	{
		bitResult = 0;
	}
	return bitResult;
}

int somaCarryBit(int b1a, int b2a, int cBit)
{
	int aux1, aux2 = 0;
	if ((b1a && b2a)||(b1a && cBit)||(b2a && cBit))
	{
		cBit = 1;
	}
	else
	{
		cBit = 0;
	}
	return cBit;
}

void loop()
{
	soma = 1;  // Define a operação como soma (sempre 1 neste código)
	nib1a = digitalRead(0);  // Bit menos significativo
	nib1b = digitalRead(1);
	nib1c = digitalRead(2);
	nib1d = digitalRead(3);  // Bit mais significativo

	// Lê os valores dos próximos 4 bits de entrada (segundo número)
	nib2a = digitalRead(4);  // Bit menos significativo
	nib2b = digitalRead(5);
	nib2c = digitalRead(6);
	nib2d = digitalRead(7);  // Bit mais significativo
	if (soma == 1)
	{
		carryBit = 0;  // Inicializa o carry como 0
		
        // Calcula o bit menos significativo do resultado
		res1a = somaBit(nib1a,nib2a,carryBit);
		carryBit = somaCarryBit(nib1a,nib2a,carryBit);

		// Calcula o segundo bit do resultado
		res1b = somaBit(nib1b,nib2b,carryBit);
		carryBit = somaCarryBit(nib1b,nib2b,carryBit);

		// Calcula o terceiro bit do resultado
		res1c = somaBit(nib1c,nib2c,carryBit);
		carryBit = somaCarryBit(nib1c,nib2c,carryBit);

		// Calcula o bit mais significativo do resultado
		res1d = somaBit(nib1d,nib2d,carryBit);
		carryBit = somaCarryBit(nib1d,nib2d,carryBit);
	}
	digitalWrite(8,res1a);
	digitalWrite(9,res1b);
	digitalWrite(10,res1c);
	digitalWrite(11,res1d);
	digitalWrite(12,carryBit);
}


