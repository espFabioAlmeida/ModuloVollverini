# Modulo Vollverini
Projeto Automasensor: Módulo Vollverini - Haste <br>
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
