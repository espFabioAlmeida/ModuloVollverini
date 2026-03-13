///////////////////////////////////////////////////////////////////////////////
//ARQUIVO:    SubrotinasEntradasDigitais
//AUTOR:      Fábio Almeida
//CIRADO:     25/04/2024
//OBSERVAÇÕES:
////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "global.h"
/*=============================================================================
LEITURA DAS ENTRADAS DIGITAIS
==============================================================================*/
void entradasDigitais() {

	if(flagEntradaFimCursoSubir) {
		if(debounce(IN1_GPIO_Port, IN1_Pin)) {
			flagEntradaFimCursoSubir = false;
		}
	}
	else {
		if(debounceInverso(IN1_GPIO_Port, IN1_Pin)) {
			flagEntradaFimCursoSubir = true;
		}
	}

	if(flagEntradaFimCursoDescer) {
		if(debounce(IN2_GPIO_Port, IN2_Pin)) {
			flagEntradaFimCursoDescer = false;
		}
	}
	else {
		if(debounceInverso(IN2_GPIO_Port, IN2_Pin)) {
			flagEntradaFimCursoDescer = true;
		}
	}

	setPin(LED1_GPIO_Port, LED1_Pin, flagEntradaFimCursoSubir);
	setPin(LED2_GPIO_Port, LED2_Pin, flagEntradaFimCursoDescer);
}
/*=============================================================================
FIM DO ARQUIVO
==============================================================================*/
