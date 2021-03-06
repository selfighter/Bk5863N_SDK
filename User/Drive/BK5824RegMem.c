#include "BK5824RegMem.h"
#ifdef _RF_PN9_
const unsigned int bk5823_rf_pn9[] =
{
	0x71FF4F83,//0x834FFF71,  //�� 0
	0x760FF200,//0x00F20F76,
	0x7F200056,//0x5600207F,
	0xFF0013FA,//0xFA1300FF,
	0x84FB084F,//0x4F08FB84,
	0x75CC4000,//0x0040CC75,
	0x76B6A000,//0x00A0B676,
	0x8013B670,//0x70B61380,
	0x141DDDC0,//0xC0DD1D14,
	0x18DC701F,//0x1F70DC18,  //9 ��
	0x00000000,//0x00000000,
	0xFFC00022,//0x2200C0FF,
	0x80020020,//0x20000280,
	0x0032003C,//0x3C003200,
	0x55554CCD,//0xCD4C5555,
	0x003613F5,//0xF5133600,
};
const unsigned char bk5823_rf_pn9_17[] = {0x00,0x01,0x48,0x84,0x52,0x01,
          0x85,0x60,0x31,0x5A,0x0D,0x97,0xD3,0xED
};
const unsigned char bk5823_rf_pn9_18[] = {0x38,0x8E,0xE3,0x00,0x00,0x00,0x00,
          0x00,0xE0,0x38,0x0E
};
#endif /*_RF_PN9_*/

#ifdef _RF_BER_
const unsigned int bk5823_rf_ber[] =
{
	0x7bff6f83,//0x836FFF7B,
	0x4ccfb200,//0x00B2CF4C,
	0x6F200040,//0x4000206F,
	0x000013FA,//0xFA130000,
	0x65FB0850,//0x5008FB65,
	0x75CC4000,//0x0040CC75,
	0x76B6A000,//0x00A0B676,
	0x8013B640,//0x40B61380,
	0x141DDDC0,//0xC0DD1D14,
	0x5804501F,//0x1F500458,
	0x000001FF,//0xFF010000,
	0x41301483,//0x83143041,
	0x80020020,//0x20000280,
	0x8000800F,//0x0F800080,
	0x4CAAACD4,//0xD4ACAA4C,
	0x007413D7,//0xD7137400,
};
const unsigned char bk5823_rf_ber_17[] = {0x00,0x01,0x48,0x84,0x52,0x01,
          0x85,0x60,0x31,0x5A,0x0D,0x97,0xD3,0xED
};
const unsigned char bk5823_rf_ber_18[] = {0x38,0x8E,0xE3,0x00,0x00,0x00,0x00,
          0x00,0xE0,0x38,0x0E
};
#endif /*_RF_BER_*/
#ifdef _RF_CW_
const unsigned int bk5823_rf_cw[] =
{
	0x71FF4F83,
	0x760FF280, //80F20F76
	0x7F200056, //5600207F,
	0xFF0013FA, //0xFA1300FF,
	0x84FB084F, //0x4F08FB84,
	0x75CC4000, //0x0040CC75,
	0x76B6A000, //0x00A0B676,
	0x8013B670, //0x70B61380,
	0x141DDDC0, //0xC0DD1D14,
	0x18DC701F, //0x1F70DC18,
	0x00000000, //0x00000000,
	0xFFC00022, //0x2200C0FF,
	0x80020020, //0x20000280,
	0x0032003C, //0x3C003200,
	0x55554CCD, //0xCD4C5555,
	0x003613F5, //0xF5133600,
};
const unsigned char bk5823_rf_cw_17[] = {0x00,0x01,0x48,0x84,0x52,0x01,
          0x85,0x60,0x31,0x5A,0x0D,0x97,0xD3,0xED
};
const unsigned char bk5823_rf_cw_18[] = {0x38,0x8E,0xE3,0x00,0x00,0x00,0x00,
          0x00,0xE0,0x38,0x0E
};
#endif /*_RF_CW_*/

#ifdef _RF_OBU_
const unsigned int bk5823_rf_obu[] =
{
	0x7BFF6F80,//0x806FFF7B,//0  //��
  0x4CCEB200,//0x00B2CE4C,//1
  0x6F200056,//0x5600206F,//2
  0x00001FCA,//0xCA1F0000,//3
  0x6088FA65,//0x65FA8860,//
  0x75CC4000,//0x0040CC75,//5
  0x76B6A000,//0x00A0B676,//6
	0x8013B670,//0x70B61380,//7
	0x1E1dddc0,//0xC0DD1D14,//8
	
	0x9804501F,//0x1F500418,//9  //��
	0x000001FF,//0xFF010000,//a
	0x41301483,//0x83143041,//b
	0x40010010,//0x10000140,//c
	0x8000800F,//0x0F800080,//d
	0x55554CCD,//0xCD4C5555,//e
	0x107413D1,//0xD1137410,//f
};
const unsigned char bk5823_rf_obu_17[] = {0x00,0x01,0x48,0x84,
           0x52,0x01,0x85,0x60,0x31,0x5A,0x0D,0x97,0xD3,0xED
};
const unsigned char bk5823_rf_obu_18[] = {
	0x38,0x8E,0xE3,0x00,0x00,0x00,0x00,0x00,0xE0,0x38,0x0E
};
#endif /*_RF_OBU_*/

#ifdef _RF_TRx_OBU_ //TRX
const unsigned int bk5823_rf_obuTRx[] =
{
	0x7BFF6F83,//0x806FFF7B,  //0
  0x4CCFB200,//0x00B2CE4C,//1
  0x6F200040,//0x5600206F,//2
  0x000013FA,//0xCA1F0000,//3
  0x65FB0850,//0x50883A62,//
  0x75CC4000,//0x0040CC75,//5
  0x76B6A000,//0x00A0B676,//6
	0x8013B640,//0x70B61380,//7
	0x141DDDC0,//0xC0DD1D14,//8
	
	0x1804501F,//0x1F500418,//9
	0x000001FF,//0xFF010000,//a
	0x41301483,//0x83143041,//b
	0x80020020,//0x10000140,//c
	0x8000800F,//0x0F800080,//d
	0x55554CCD,//0xCD4C5555,//e
	0x007413D3,//0xD1137400,//f
};
const unsigned char bk5823_rf_obuTRx_17[] = {0x00,0x01,0x48,0x84,
           0x52,0x01,0x85,0x60,0x31,0x5A,0x0D,0x97,0xD3,0xED
};
const unsigned char bk5823_rf_obuTRx_18[] = {0x38,0x8E,0xE3,0x00,0x00,
           0x00,0x00,0x00,0xE0,0x38,0x0E
};
#endif /*_RF_TRx_OBU_*/

#ifdef _RF_RSU_
const unsigned int bk5823_rf_rsu[] =
{
	0x69ff7f83,//MSB ~ LSB//0x806FFF7B,   //0  
    0x1E4DB27F,//0x00B2CE4C,   //1
    0x33280054,//0x5600206F,   //2
    0x00007FFA,//0xCA1F0000,   //3
    0x69388830,//0x5008FB65,   //4
    0x769c9555,//0x55959C76,   //5
    0x75e64aab,//0xAB4AE675,   //6
	0x8013b640,//0x70B61380,   //7
	0x141DDDDE,//0x80DD1D14,   //8

	0x14DC721F, //LSB~MSB//0x1F500418,   //9
	0x00000000,//0xFF010000,   //A
	0xffc00022, //	0x83143041,//B 
	0x80020020,   //0x10000140,//C 
	0x00280060,//0x0F800080,   //D 
	0x55554ccd, //0xCD4C5555,  //E 
	0x003623D3,//0xD3277400,   //F 
}; 
const unsigned char bk5823_rf_rsu_17[] = {0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x02,0x28,0x44,0x82,0xC5
};
const unsigned char bk5823_rf_rsu_18[] = {0x41,0x10,0x04,
	0xC1,0xFF,0xFF,0xFF,0x1F,0x04,0x01,0x0C
};
#endif /*_RF_OBU_*/




