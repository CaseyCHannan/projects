#ifndef __LUTS_FOR_CFAP176264A0270_H__
#define __LUTS_FOR_CFAP176264A0270_H__
//=============================================================================
// "Arduino" example program for Crystalfontz ePaper. 
//
// This project is for the CFAP176264A0-0270 :
//
//   https://www.crystalfontz.com/product/cfap176264A00270
//=============================================================================
// Formatted to work with WriteCMD_StringFlash(), first byte is command,
// remainder are data
const uint8_t VCOM_LUT_LUTC[]      PROGMEM =
{
	0x00	,0x00,
	0x00	,0x1A	,0x1A	,0x00	,0x00	,0x01,
	0x00	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x00	,0x0E	,0x01	,0x0E	,0x01	,0x10,
	0x00	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x00	,0x04	,0x10	,0x00	,0x00	,0x05,
	0x00	,0x03	,0x0E	,0x00	,0x00	,0x0A,
	0x00	,0x23	,0x00	,0x00	,0x00	,0x01
};
const uint8_t W2W_LUT_LUTWW[]      PROGMEM =
{
	0x90	,0x1A	,0x1A	,0x00	,0x00	,0x01,
	0x40	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x84	,0x0E	,0x01	,0x0E	,0x01	,0x10,
	0x80	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x00	,0x04	,0x10	,0x00	,0x00	,0x05,
	0x00	,0x03	,0x0E	,0x00	,0x00	,0x0A,
	0x00	,0x23	,0x00	,0x00	,0x00	,0x01
};
const uint8_t B2W_LUT_LUTBW_LUTR[] PROGMEM =
{
	0xA0	,0x1A	,0x1A	,0x00	,0x00	,0x01,
	0x00	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x84	,0x0E	,0x01	,0x0E	,0x01	,0x10,
	0x90	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0xB0	,0x04	,0x10	,0x00	,0x00	,0x05,
	0xB0	,0x03	,0x0E	,0x00	,0x00	,0x0A,
	0xC0	,0x23	,0x00	,0x00	,0x00	,0x01
};
const uint8_t B2B_LUT_LUTBB_LUTB[] PROGMEM =
{
	0x90	,0x1A	,0x1A	,0x00	,0x00	,0x01,
	0x40	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x84	,0x0E	,0x01	,0x0E	,0x01	,0x10,
	0x80	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x00	,0x04	,0x10	,0x00	,0x00	,0x05,
	0x00	,0x03	,0x0E	,0x00	,0x00	,0x0A,
	0x00	,0x23	,0x00	,0x00	,0x00	,0x01
};
const uint8_t W2B_LUT_LUTWB_LUTW[] PROGMEM =
{
	0x90	,0x1A	,0x1A	,0x00	,0x00	,0x01,
	0x20	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x84	,0x0E	,0x01	,0x0E	,0x01	,0x10,
	0x10	,0x0A	,0x0A	,0x00	,0x00	,0x08,
	0x00	,0x04	,0x10	,0x00	,0x00	,0x05,
	0x00	,0x03	,0x0E	,0x00	,0x00	,0x0A,
	0x00	,0x23	,0x00	,0x00	,0x00	,0x01
};
//=============================================================================
#endif 
