//-----------------------------------------------------------------------------
//     _____          __  .__      ___________     ___.   .__            v1.4.1   
//    /     \ _____ _/  |_|  |__   \__    ___/____ \_ |__ |  |   ____          
//   /  \ /  \\__  \\   __\  |  \    |    |  \__  \ | __ \|  | _/ __ \         
//  /    Y    \/ __ \|  | |   Y  \   |    |   / __ \| \_\ \  |_\  ___/         
//  \____|__  (____  /__| |___|  /   |____|  (____  /___  /____/\___  >        
//          \/     \/          \/                 \/    \/          \/         
//  by Guillaume "Aoineko" Blanchard (aoineko@free.fr) under CC-BY-AS license
//                                                                             
// Generated: Sat Nov 14 23:31:30 2020
// Parameters: Entries=256, Bytes=2 (16-bits), Shift=12 (Q4.12)               
//-----------------------------------------------------------------------------

// Square table. Range [0:1]
static const unsigned short g_Square256[257] =
{
	0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0002, 0x0003, 
	0x0004, 0x0005, 0x0006, 0x0007, 0x0009, 0x000A, 0x000C, 0x000E, 
	0x0010, 0x0012, 0x0014, 0x0016, 0x0019, 0x001B, 0x001E, 0x0021, 
	0x0024, 0x0027, 0x002A, 0x002D, 0x0031, 0x0034, 0x0038, 0x003C, 
	0x0040, 0x0044, 0x0048, 0x004C, 0x0051, 0x0055, 0x005A, 0x005F, 
	0x0064, 0x0069, 0x006E, 0x0073, 0x0079, 0x007E, 0x0084, 0x008A, 
	0x0090, 0x0096, 0x009C, 0x00A2, 0x00A9, 0x00AF, 0x00B6, 0x00BD, 
	0x00C4, 0x00CB, 0x00D2, 0x00D9, 0x00E1, 0x00E8, 0x00F0, 0x00F8, 
	0x0100, 0x0108, 0x0110, 0x0118, 0x0121, 0x0129, 0x0132, 0x013B, 
	0x0144, 0x014D, 0x0156, 0x015F, 0x0169, 0x0172, 0x017C, 0x0186, 
	0x0190, 0x019A, 0x01A4, 0x01AE, 0x01B9, 0x01C3, 0x01CE, 0x01D9, 
	0x01E4, 0x01EF, 0x01FA, 0x0205, 0x0211, 0x021C, 0x0228, 0x0234, 
	0x0240, 0x024C, 0x0258, 0x0264, 0x0271, 0x027D, 0x028A, 0x0297, 
	0x02A4, 0x02B1, 0x02BE, 0x02CB, 0x02D9, 0x02E6, 0x02F4, 0x0302, 
	0x0310, 0x031E, 0x032C, 0x033A, 0x0349, 0x0357, 0x0366, 0x0375, 
	0x0384, 0x0393, 0x03A2, 0x03B1, 0x03C1, 0x03D0, 0x03E0, 0x03F0, 
	0x0400, 0x0410, 0x0420, 0x0430, 0x0441, 0x0451, 0x0462, 0x0473, 
	0x0484, 0x0495, 0x04A6, 0x04B7, 0x04C9, 0x04DA, 0x04EC, 0x04FE, 
	0x0510, 0x0522, 0x0534, 0x0546, 0x0559, 0x056B, 0x057E, 0x0591, 
	0x05A4, 0x05B7, 0x05CA, 0x05DD, 0x05F1, 0x0604, 0x0618, 0x062C, 
	0x0640, 0x0654, 0x0668, 0x067C, 0x0691, 0x06A5, 0x06BA, 0x06CF, 
	0x06E4, 0x06F9, 0x070E, 0x0723, 0x0739, 0x074E, 0x0764, 0x077A, 
	0x0790, 0x07A6, 0x07BC, 0x07D2, 0x07E9, 0x07FF, 0x0816, 0x082D, 
	0x0844, 0x085B, 0x0872, 0x0889, 0x08A1, 0x08B8, 0x08D0, 0x08E8, 
	0x0900, 0x0918, 0x0930, 0x0948, 0x0961, 0x0979, 0x0992, 0x09AB, 
	0x09C4, 0x09DD, 0x09F6, 0x0A0F, 0x0A29, 0x0A42, 0x0A5C, 0x0A76, 
	0x0A90, 0x0AAA, 0x0AC4, 0x0ADE, 0x0AF9, 0x0B13, 0x0B2E, 0x0B49, 
	0x0B64, 0x0B7F, 0x0B9A, 0x0BB5, 0x0BD1, 0x0BEC, 0x0C08, 0x0C24, 
	0x0C40, 0x0C5C, 0x0C78, 0x0C94, 0x0CB1, 0x0CCD, 0x0CEA, 0x0D07, 
	0x0D24, 0x0D41, 0x0D5E, 0x0D7B, 0x0D99, 0x0DB6, 0x0DD4, 0x0DF2, 
	0x0E10, 0x0E2E, 0x0E4C, 0x0E6A, 0x0E89, 0x0EA7, 0x0EC6, 0x0EE5, 
	0x0F04, 0x0F23, 0x0F42, 0x0F61, 0x0F81, 0x0FA0, 0x0FC0, 0x0FE0, 
	0x1000, 
};