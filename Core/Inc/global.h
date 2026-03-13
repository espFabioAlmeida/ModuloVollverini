/*
 * global.h
 *
 *  Created on: Aug 23, 2023
 *      Author: User
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

enum BOOL {
	false,
	true
};


enum MOTOR {
	MOTOR_DESLIGADO,
	MOTOR_SUBIR,
	MOTOR_DESCER
};

extern CAN_HandleTypeDef hcan;

extern CAN_TxHeaderTypeDef	canTxHeader;
extern CAN_RxHeaderTypeDef	canRxHeader;

extern uint8_t
	flagPacoteCAN,

	flagEntradaFimCursoSubir,
	flagEntradaFimCursoDescer,

	flagLedCOM;

extern uint8_t
	sentidoMotor;

extern uint32_t
	canTxMailbox;

extern uint8_t
	canTxBuffer[8],
	canRxBuffer[8];
#endif /* INC_GLOBAL_H_ */
