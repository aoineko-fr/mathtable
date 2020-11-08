//-----------------------------------------------------------------------------
// Math Table Generator (v1.3)                                               
// by Guillaume "Aoineko" Blanchard (aoineko@free.fr) under CC-BY-AS licence 
// Generated: Sat Nov  7 23:04:55 2020
// Parameters: Entries=128, Bytes=2 (16-bits), Shift=8                        
//-----------------------------------------------------------------------------

// Sinus table. Range [0:Pi*2[
static const signed short g_Sinus128[128] =
{
	0x0000, 0x000C, 0x0019, 0x0025, 0x0031, 0x003E, 0x004A, 0x0056, 
	0x0061, 0x006D, 0x0078, 0x0083, 0x008E, 0x0098, 0x00A2, 0x00AB, 
	0x00B5, 0x00BD, 0x00C5, 0x00CD, 0x00D4, 0x00DB, 0x00E1, 0x00E7, 
	0x00EC, 0x00F1, 0x00F4, 0x00F8, 0x00FB, 0x00FD, 0x00FE, 0x00FF, 
	0x0100, 0x00FF, 0x00FE, 0x00FD, 0x00FB, 0x00F8, 0x00F4, 0x00F1, 
	0x00EC, 0x00E7, 0x00E1, 0x00DB, 0x00D4, 0x00CD, 0x00C5, 0x00BD, 
	0x00B5, 0x00AB, 0x00A2, 0x0098, 0x008E, 0x0083, 0x0078, 0x006D, 
	0x0061, 0x0056, 0x004A, 0x003E, 0x0031, 0x0025, 0x0019, 0x000C, 
	0x0000, 0xFFF4, 0xFFE7, 0xFFDB, 0xFFCF, 0xFFC2, 0xFFB6, 0xFFAA, 
	0xFF9F, 0xFF93, 0xFF88, 0xFF7D, 0xFF72, 0xFF68, 0xFF5E, 0xFF55, 
	0xFF4B, 0xFF43, 0xFF3B, 0xFF33, 0xFF2C, 0xFF25, 0xFF1F, 0xFF19, 
	0xFF14, 0xFF0F, 0xFF0C, 0xFF08, 0xFF05, 0xFF03, 0xFF02, 0xFF01, 
	0xFF00, 0xFF01, 0xFF02, 0xFF03, 0xFF05, 0xFF08, 0xFF0C, 0xFF0F, 
	0xFF14, 0xFF19, 0xFF1F, 0xFF25, 0xFF2C, 0xFF33, 0xFF3B, 0xFF43, 
	0xFF4B, 0xFF55, 0xFF5E, 0xFF68, 0xFF72, 0xFF7D, 0xFF88, 0xFF93, 
	0xFF9F, 0xFFAA, 0xFFB6, 0xFFC2, 0xFFCF, 0xFFDB, 0xFFE7, 0xFFF4, 
};

// Cosinus table. Range [0:Pi*2[
static const signed short g_Cosinus128[128] =
{
	0x0100, 0x00FF, 0x00FE, 0x00FD, 0x00FB, 0x00F8, 0x00F4, 0x00F1, 
	0x00EC, 0x00E7, 0x00E1, 0x00DB, 0x00D4, 0x00CD, 0x00C5, 0x00BD, 
	0x00B5, 0x00AB, 0x00A2, 0x0098, 0x008E, 0x0083, 0x0078, 0x006D, 
	0x0061, 0x0056, 0x004A, 0x003E, 0x0031, 0x0025, 0x0019, 0x000C, 
	0x0000, 0xFFF4, 0xFFE7, 0xFFDB, 0xFFCF, 0xFFC2, 0xFFB6, 0xFFAA, 
	0xFF9F, 0xFF93, 0xFF88, 0xFF7D, 0xFF72, 0xFF68, 0xFF5E, 0xFF55, 
	0xFF4B, 0xFF43, 0xFF3B, 0xFF33, 0xFF2C, 0xFF25, 0xFF1F, 0xFF19, 
	0xFF14, 0xFF0F, 0xFF0C, 0xFF08, 0xFF05, 0xFF03, 0xFF02, 0xFF01, 
	0xFF00, 0xFF01, 0xFF02, 0xFF03, 0xFF05, 0xFF08, 0xFF0C, 0xFF0F, 
	0xFF14, 0xFF19, 0xFF1F, 0xFF25, 0xFF2C, 0xFF33, 0xFF3B, 0xFF43, 
	0xFF4B, 0xFF55, 0xFF5E, 0xFF68, 0xFF72, 0xFF7D, 0xFF88, 0xFF93, 
	0xFF9F, 0xFFAA, 0xFFB6, 0xFFC2, 0xFFCF, 0xFFDB, 0xFFE7, 0xFFF4, 
	0x0000, 0x000C, 0x0019, 0x0025, 0x0031, 0x003E, 0x004A, 0x0056, 
	0x0061, 0x006D, 0x0078, 0x0083, 0x008E, 0x0098, 0x00A2, 0x00AB, 
	0x00B5, 0x00BD, 0x00C5, 0x00CD, 0x00D4, 0x00DB, 0x00E1, 0x00E7, 
	0x00EC, 0x00F1, 0x00F4, 0x00F8, 0x00FB, 0x00FD, 0x00FE, 0x00FF, 
};