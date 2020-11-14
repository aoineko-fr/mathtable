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
// Parameters: Entries=64, Bytes=2 (16-bits), Shift=8 (Q8.8)               
//-----------------------------------------------------------------------------

// Sinus table. Range [0:Pi*2[
static const unsigned short g_Sinus64[64] =
{
	0x0000, 0x0019, 0x0031, 0x004A, 0x0061, 0x0078, 0x008E, 0x00A2, 
	0x00B5, 0x00C5, 0x00D4, 0x00E1, 0x00EC, 0x00F4, 0x00FB, 0x00FE, 
	0x00FF, 0x00FE, 0x00FB, 0x00F4, 0x00EC, 0x00E1, 0x00D4, 0x00C5, 
	0x00B5, 0x00A2, 0x008E, 0x0078, 0x0061, 0x004A, 0x0031, 0x0019, 
	0x0000, 0xFFE7, 0xFFCF, 0xFFB6, 0xFF9F, 0xFF88, 0xFF72, 0xFF5E, 
	0xFF4B, 0xFF3B, 0xFF2C, 0xFF1F, 0xFF14, 0xFF0C, 0xFF05, 0xFF02, 
	0xFF01, 0xFF02, 0xFF05, 0xFF0C, 0xFF14, 0xFF1F, 0xFF2C, 0xFF3B, 
	0xFF4B, 0xFF5E, 0xFF72, 0xFF88, 0xFF9F, 0xFFB6, 0xFFCF, 0xFFE7, 
};