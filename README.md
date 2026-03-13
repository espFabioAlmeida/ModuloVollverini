# Modulo Vollverini
Projeto Automasensor: Módulo Vollverini - Haste <br>
# Pinagem Conector
1: GND <br>
2: D+ OU CAN H <br>
3: D- OU CAN L <br>
4: NC <br>
5: FIM DE LINHA (FECHAR COM O PINO 2) <br>
6: SAIDA MOTOR 2 <br>
7: SAIDA MOTOR 1 <br>
8: VCC <br>
9: GND <br>
10: POTENCIÔMETRO (1K PARA O GND) <br>
11: NC <br>
12: IN4 <br>
13: IN5 <br>
14: SAIDA MOTOR 2 <br>
15: SAIDA MOTOR 1 <br>
16: VCC <br>
17: GND <br>
18: IN6 <br>
19: IN1 <br>
20: IN2 <br>
21: IN3 <br>
22: SAIDA MOTOR 2 <br>
23: SAIDA MOTOR 1 <br>
24: VCC <br>
# Entradas Digitais
IN1: Fim de curso subir <br>
IN2: Fim de curso descer <br>
# Relés
Relé 1: Saída Subir <br>
Relé 2: Saída Descer <br>
# Escopo
Monitora a rede CAN e aciona a saída conforme solicitado. <br>
Não realiza nenhuma lógica na placa, apenas monitora as entradas digitais de fim de curso. <br>
As entradas digitais de fim de curso são de uso OPCIONAL. Esse sinal deve ser colocado na VLV, que faz o controle completo. <br>
# Protocolo CAN
Endereço ECU Pacote 1: 0x1BB81A01 <br>
Endereço ECU Pacote 2: 0x1BB81A02 <br>
Endereço ECU Pacote 3: 0x1BB81A03 <br>
<br>
Para esse equipamento somente o pacote 3 é relevante. <br>
BYTE 0: COMANDO HASTE (VOLLVERINI) - 0=PARAR, 1=SUBIR, 2=DESCER, 3=SUBIR(RETORNO POR FIRMWARE) <br> 
BYTE 1: COMANDO COMPORTAS - 0=PARAR, 1=FECHAR, 2=ABRIR <br>
BYTE 2: Livre <br>
BYTE 3: Livre <br>
BYTE 4: Livre <br>
BYTE 5: Livre <br>
BYTE 6: Livre <br>
BYTE 7: Livre <br>
<br>
Resposta: Por enquanto módulo apenas monitora a rede CAN <br>
