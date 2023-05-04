#ifndef _MAIN_H
#define _MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

#define CMD_HEAD1 0xFF
#define CMD_HEAD2 0x55

#ifndef LOBYTE
#define LOBYTE(l) ((uint8_t)(l))
#endif

#ifndef HIBYTE
#define HIBYTE(l) ((uint8_t)(l >> 8))
#endif
#include <Arduino.h>

    // RS-232 HMI 통신 명령
    typedef enum
    {
        ecsPower = 0x0000,         // 사용안함
        ecsSetToday = 0x0001,      // today cnt set
        ecsSetTotal = 0x0002,      // total cnt set
        ecsSetRemain = 0x0003,     // remain cnt set
        ecsSetKey = 0x0004,        // receive key value
        ecsFocusActivity = 0x0005, // set activity
        ecsSetRun = 0x0006,        // set run
        ecsSetPopup = 0x0007,      // set pop
        ecsSetBtnImg,              // set btn image
        ecsCount
    } CommandSub;

    typedef enum
    {
        hmikPlay = 0x00, //
        hmikReset,       //
        hmikConfig,      //
        hmikRemainEnter, //
        hmikErrorEnter,  //
        hmikResetEnter,  //
        hmikResetCancel, //
        hmikCount
    } HMIKey;

    typedef struct
    {                         // 디바이스 상태 저장.
        uint8_t byVer;        // 버전정보
        uint8_t byRun;        // 동작, 정지
        uint8_t byPopup;      // 0:non 1:remain 2:err 3:reset
        uint16_t nTodayCnt;   // 판매 수량
        uint32_t dwTotalCnt;  // 누적 수량
        uint32_t dwRemainCnt; // 재고 수량
    } DeviceStatusStruct;

    extern DeviceStatusStruct g_tDevSts;

    void IRAM_ATTR onTimer();
    // void mainAnimation(TimerHandle_t xTimer);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
