
/* ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <CANguru-Buch@web.de> wrote this file. As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day,
 * and you think this stuff is worth it, you can buy me a beer in return
 * Gustav Wostrack
 * ----------------------------------------------------------------------------
 */

#ifndef CANguruDefs
const uint8_t  CANguruDefs

const uint8_t CAN_FRAME_SIZE = 13; /* maximum datagram size */

// allgemein
const uint8_t  wait_time_long 500
const uint8_t  wait_time_medium 50
const uint8_t  wait_time_small 10
const uint8_t  wait_time 125
const uint8_t  max_char 50
const uint8_t  min_char 2
const uint8_t  min_char1 3
const uint8_t  bdrMonitor 115200

const uint8_t  CANcmd   1
const uint8_t  hash0 2
const uint8_t  hash1 3
const uint8_t  Framelng   4
const uint8_t  data0 5
const uint8_t  data1 6
const uint8_t  data2 7
const uint8_t  data3 8
const uint8_t  data4 9
const uint8_t  data5 10
const uint8_t  data6 11
const uint8_t  data7 12

const uint8_t  setup_done 0x47

/*
 *  Gerätetypen
 */
/*
  Prio	2+2 Bit Message Prio			28 .. 25
										XXXX
  Priorität (Prio)
  Bestimmt die Priorisierung der Meldung auf dem CAN Bus:
  Prio 1: Stopp / Go / Kurzschluss-Meldung
  --> Prio 2: Rückmeldungen				0001
  Prio 3: Lok anhalten (?)
  --> Prio 4: Lok / Zubehörbefehle		0100
                                       Gleisbox
                                       0100 0111  0100 0100  0001 1001  0001 1000
                                          4    7     4    4     1    9     1    8
                                       Weichendecoder
                                          4    5     0    0     9    1     9    1

  Rest Frei								1111
*/

const uint8_t  UID_BASE  0x45009195ULL // CAN-UID
const uint8_t  maxdevice 99

const uint8_t  DEVTYPE_GFP 0x0000
const uint8_t  DEVTYPE_GB 0x0010
const uint8_t  DEVTYPE_CONNECT 0x0020
const uint8_t  DEVTYPE_MS2 0x0030
const uint8_t  DEVTYPE_WDEV 0x00E0
const uint8_t  DEVTYPE_CS2 0x00FF
const uint8_t  DEVTYPE_FirstCANguru 0x004F
const uint8_t  DEVTYPE_BASE 0x0050
const uint8_t  DEVTYPE_TRAFFICLIGHT 0x0051
const uint8_t  DEVTYPE_SERVO 0x0053
const uint8_t  DEVTYPE_RM 0x0054
const uint8_t  DEVTYPE_LIGHT 0x0055
const uint8_t  DEVTYPE_SIGNAL 0x0056
const uint8_t  DEVTYPE_LEDSIGNAL 0x0057
const uint8_t  DEVTYPE_CANBOOSTER 0x0058
const uint8_t  DEVTYPE_GATE 0x0059
const uint8_t  DEVTYPE_CAR_CAR 0x005A
const uint8_t  DEVTYPE_CAR_RM 0x005B
const uint8_t  DEVTYPE_CAR_SERVO 0x005C
const uint8_t  DEVTYPE_LastCANguru 0x005F

const uint8_t  BASE_Offset 0x01
const uint8_t  DECODER_Offset 0x02

/*
 * Adressbereiche:
*/
const uint8_t  MM_ACC 0x3000    //Magnetartikel Motorola
const uint8_t  DCC_ACC 0x3800   //Magbetartikel NRMA_DCC
const uint8_t  MM_TRACK 0x0000  //Gleissignal Motorola
const uint8_t  DCC_TRACK 0xC000 //Gleissignal NRMA_DCC

/*
 * CAN-Befehle (Märklin)
*/
const uint8_t  SYS_CMD 0x00    //Systembefehle
const uint8_t  SYS_GO		          0x01	//System - Go
const uint8_t  LokDiscovery 0x02
const uint8_t  LokDiscovery_R LokDiscovery+1
const uint8_t  MFXVerify 0x07
const uint8_t  MFXVerify_R MFXVerify+1
const uint8_t  Lok_Speed           0x08
const uint8_t  Lok_Direction       0x0A
const uint8_t  Lok_Function        0x0C
const uint8_t  SYS_STAT 0x0B   //System - Status (sendet geänderte Konfiguration)
const uint8_t  ReadConfig   0x0E
const uint8_t  ReadConfig_R   ReadConfig+1
const uint8_t  WriteConfig   0x10
const uint8_t  WriteConfig_R   WriteConfig+1
const uint8_t  SWITCH_ACC 0x16 //Magnetartikel schalten
const uint8_t  SWITCH_ACC_R 0x17 //Magnetartikel schalten
const uint8_t  S88_Polling 0x20
const uint8_t  S88_EVENT 0x22            //Rückmelde-Event
const uint8_t  S88_EVENT_R S88_EVENT + 1 // Rück-Rückmelde-Event
const uint8_t  PING 0x30                 //CAN-Teilnehmer anpingen
const uint8_t  PING_R PING + 1           //CAN-Teilnehmer anpingen
const uint8_t  CONFIG_Status 0x3A
const uint8_t  CONFIG_Status_R CONFIG_Status + 1
const uint8_t  ConfigDataCompressed 0x40
const uint8_t  ConfigDataCompressed_R ConfigDataCompressed + 0x01
const uint8_t  ConfigDataStream 0x42

const uint8_t  stopp 0x00
const uint8_t  halt 0x02
const uint8_t  overload 0x0A

/*
 * CAN-Befehle (eigene)
*/
const uint8_t  ConfigData 0x40
const uint8_t  ConfigData_R 0x41
const uint8_t  MfxProc 0x50
const uint8_t  MfxProc_R 0x51
const uint8_t  sendInitialData 0x52
const uint8_t  LoadCS2Data 0x56
const uint8_t  LoadCS2Data_R LoadCS2Data + 0x01            // 0x57
const uint8_t  GETCONFIG_RESPONSE LoadCS2Data_R + 0x01     // 0x58
const uint8_t  DoCompress GETCONFIG_RESPONSE + 0x02        // 0x5A
const uint8_t  DoNotCompress DoCompress + 0x01             // 0x5B
const uint8_t  GetGleisbildNames DoNotCompress + 0x01      // 0x5C 
const uint8_t  BlinkAlive 0x60
const uint8_t  restartBridge 0x62
const uint8_t  SEND_IP 0x64
const uint8_t  SEND_IP_R SEND_IP + 1
const uint8_t  INIT_COMPLETE 0x66
const uint8_t  CALL4CONNECT 0x88
const uint8_t  sendCntLokBuffer 0x90
const uint8_t  sendCntLokBuffer_R 0x91
const uint8_t  sendLokBuffer 0x92
const uint8_t  sendLokBuffer_R 0x93
const uint8_t  sendCurrAmp 0x94
const uint8_t  RESET_MEM 0xFE
const uint8_t  START_OTA 0xFF

// damit 1024 (eigentlich 1023) Artikel adressiert werden können,
// bedarf es 1024/4 Decoder; das 256 bzw. bei 255 entspr. 0xFF
const int16_t minadr = 0x01;
const int16_t maxadr = 0xFF;
const uint8_t uid_num = 4;
const uint8_t num_accessory = 4;

// Funktion stellt sicher, dass keine unerlaubten 8-Bit-Werte geladen werden können
uint8_t readValfromEEPROM(uint16_t adr, uint8_t val, uint8_t min, uint8_t max);

// Funktion stellt sicher, dass keine unerlaubten 16-Bit-Werte geladen werden können
uint16_t readValfromEEPROM16(uint16_t adr, uint16_t val, uint16_t min, uint16_t max);

// Mit testMinMax wird festgestellt, ob ein Wert innerhalb der
// Grenzen von min und max liegt
bool testMinMax(uint16_t oldval, uint16_t val, uint16_t min, uint16_t max);

// converts highbyte of integer to char
char highbyte2char(int num);
// converts lowbyte of integer to char
char lowbyte2char(int num);
// returns one char of an int
uint8_t oneChar(uint16_t val, uint8_t no);

uint8_t hex2dec(uint8_t h);

#endif