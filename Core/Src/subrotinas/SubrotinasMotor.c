///////////////////////////////////////////////////////////////////////////////
//ARQUIVO:    SubrotinasMotor
//AUTOR:      Fábio Almeida
//CIRADO:     12/03/2026
//OBSERVAÇÕES:
////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "global.h"
/*=============================================================================
ACIONAMENTO MOTOR
==============================================================================*/
void acionamentoMotor() {

	if(flagEntradaFimCursoSubir && sentidoMotor == MOTOR_SUBIR) {
		sentidoMotor = MOTOR_DESLIGADO;
	}

	if(flagEntradaFimCursoDescer && sentidoMotor == MOTOR_DESCER) {
		sentidoMotor = MOTOR_DESLIGADO;
	}

	if(sentidoMotor == MOTOR_DESLIGADO) {
		off(RELE1_GPIO_Port, RELE1_Pin);
		off(RELE2_GPIO_Port, RELE2_Pin);
		return;
	}

	if(sentidoMotor == MOTOR_SUBIR) {
		off(RELE2_GPIO_Port, RELE2_Pin);
		on(RELE1_GPIO_Port, RELE1_Pin);
		return;
	}

	if(sentidoMotor == MOTOR_DESCER) {
		off(RELE1_GPIO_Port, RELE1_Pin);
		on(RELE2_GPIO_Port, RELE2_Pin);
		return;
	}

	off(RELE1_GPIO_Port, RELE1_Pin);
	off(RELE2_GPIO_Port, RELE2_Pin);
}
/*=============================================================================
FIM DO ARQUIVO
==============================================================================*/
