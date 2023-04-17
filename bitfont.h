#include <stdint.h>

// This is currently the most simplistic way I can think of do create a basic ASCII font

// This function will use 1-bit color 8x8 letter image data, i.e. something like this:
        
//    1    
//   1 1   
//  1   1  
// 1111111 
// 1     1 
// 1     1 
//

// to create the equivalent 32-bit color image data using whatever 32-bit color you choose

struct bit_letter {
	uint32_t TopHalf;
	uint32_t BottomHalf;
};

// Keep in mind, when this gets the letter image data, it will malloc an 8x8x4 block of memory
// it will not free that memory
uint8_t* GetBitLetter(char Letter, uint32_t Color) {
	
	uint32_t TopHalf;
	uint32_t BottomHalf;
	switch(Letter){
		case ' ': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '!': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00110000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00000000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '"': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110110 << 8)
                          |(0b00110110 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '#': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10010000 << 8)
                          |(0b11111110 << 16)
                          |(0b10010000 << 24));
            BottomHalf  = ((0b01001000 << 0)
                          |(0b11111110 << 8)
                          |(0b00100010 << 16)
                          |(0b00000000 << 24));
		} break;
		case '$':{
            TopHalf     = ((0b00010000 << 0)
                          |(0b01111100 << 8)
                          |(0b10010010 << 16)
                          |(0b00010100 << 24));
            BottomHalf  = ((0b01111000 << 0)
                          |(0b10010010 << 8)
                          |(0b01111100 << 16)
                          |(0b00010000 << 24));
		} break;
		case '%': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000100 << 8)
                          |(0b01001010 << 16)
                          |(0b00100100 << 24));
            BottomHalf  = ((0b00111000 << 0)
                          |(0b10100100 << 8)
                          |(0b01000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case '&': {
            TopHalf     = ((0b00111000 << 0)
                          |(0b01000100 << 8)
                          |(0b01111000 << 16)
                          |(0b00010100 << 24));
            BottomHalf  = ((0b10100010 << 0)
                          |(0b01000010 << 8)
                          |(0b10111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '\'': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00011000 << 8)
                          |(0b00011000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '(': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00010000 << 8)
                          |(0b00001000 << 16)
                          |(0b00000100 << 24));
            BottomHalf  = ((0b00000100 << 0)
                          |(0b00001000 << 8)
                          |(0b00010000 << 16)
                          |(0b00000000 << 24));
		} break;
		case ')': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00010000 << 8)
                          |(0b00100000 << 16)
                          |(0b01000000 << 24));
            BottomHalf  = ((0b01000000 << 0)
                          |(0b00100000 << 8)
                          |(0b00010000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '*': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10010010 << 8)
                          |(0b00111000 << 16)
                          |(0b01111110 << 24));
            BottomHalf  = ((0b00111000 << 0)
                          |(0b10010100 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		}  break;
		case '+': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00010000 << 16)
                          |(0b00010000 << 24));
            BottomHalf  = ((0b11111110 << 0)
                          |(0b00010000 << 8)
                          |(0b00010000 << 16)
                          |(0b00000000 << 24));
		} break;
		case ',': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00111000 << 0)
                          |(0b00111000 << 8)
                          |(0b00100000 << 16)
                          |(0b00011000 << 24));
		} break;
		case '_': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case '.': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00111000 << 8)
                          |(0b00111000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '/': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01000000 << 8)
                          |(0b00100000 << 16)
                          |(0b00010000 << 24));
            BottomHalf  = ((0b00001000 << 0)
                          |(0b00000100 << 8)
                          |(0b00000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case '0': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111000 << 8)
                          |(0b10001100 << 16)
                          |(0b10010100 << 24));
            BottomHalf  = ((0b10100100 << 0)
                          |(0b11000100 << 8)
                          |(0b01111000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '1': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00101000 << 16)
                          |(0b00100100 << 24));
            BottomHalf  = ((0b00100000 << 0)
                          |(0b00100000 << 8)
                          |(0b11111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '2': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b01001100 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b01000000 << 0)
                          |(0b00110000 << 8)
                          |(0b11111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '3': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b10000000 << 24));
            BottomHalf  = ((0b01111000 << 0)
                          |(0b10000000 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case '4': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01100000 << 8)
                          |(0b01010000 << 16)
                          |(0b01001100 << 24));
            BottomHalf  = ((0b11111110 << 0)
                          |(0b01000000 << 8)
                          |(0b01000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '5': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00000010 << 16)
                          |(0b01111110 << 24));
            BottomHalf  = ((0b10000000 << 0)
                          |(0b10000000 << 8)
                          |(0b01111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case '6': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b01111110 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000100 << 8)
                          |(0b01111000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '7': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b10000000 << 16)
                          |(0b01000000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00001100 << 8)
                          |(0b00000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case '8': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b01111100 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '9': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b11111100 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case ':': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
		} break;
		case ';': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00011000 << 24));
		} break;
		case '<': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11000000 << 8)
                          |(0b00110000 << 16)
                          |(0b00001100 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b11000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		}  break;
		case '>': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00001100 << 8)
                          |(0b00110000 << 16)
                          |(0b11000000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00001100 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '=': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01111110 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b01111110 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '?': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b01000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b01110000 << 0)
                          |(0b00000000 << 8)
                          |(0b00011000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '@':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111100 << 16)
                          |(0b01000000 << 24));
            BottomHalf  = ((0b01111110 << 0)
                          |(0b01000001 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'A':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00010000 << 8)
                          |(0b00101000 << 16)
                          |(0b01000100 << 24));
            BottomHalf  = ((0b11111110 << 0)
                          |(0b10000010 << 8)
                          |(0b10000010 << 16)
                          |(0b00000000 << 24));
		}  break;
		case 'B': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111110 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b01111110 << 0)
                          |(0b10000010 << 8)
                          |(0b01111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'C':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b00000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'D': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111110 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b01000010 << 8)
                          |(0b00111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'E': {
            TopHalf     = ((0b000000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00000010 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b00111110 << 0)
                          |(0b00000010 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'F': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00000010 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b00111110 << 0)
                          |(0b00000010 << 8)
                          |(0b00000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'G': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111000 << 8)
                          |(0b10000100 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b11100010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'H': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000010 << 8)
                          |(0b10000010 << 16)
                          |(0b11111110 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b10000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'I': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00010000 << 16)
                          |(0b00010000 << 24));
            BottomHalf  = ((0b00010000 << 0)
                          |(0b00010000 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'J': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00100000 << 16)
                          |(0b00100000 << 24));
            BottomHalf  = ((0b00100000 << 0)
                          |(0b00100010 << 8)
                          |(0b00011100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'K': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110010 << 8)
                          |(0b00011010 << 16)
                          |(0b00000110 << 24));
            BottomHalf  = ((0b00000110 << 0)
                          |(0b00011010 << 8)
                          |(0b00110010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'L': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000010 << 8)
                          |(0b00000010 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b00000010 << 0)
                          |(0b00000010 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'M': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11001100 << 8)
                          |(0b10110010 << 16)
                          |(0b10010010 << 24));
            BottomHalf  = ((0b10010010 << 0)
                          |(0b10010010 << 8)
                          |(0b10010010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'N': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01000010 << 8)
                          |(0b01000110 << 16)
                          |(0b01001010 << 24));
            BottomHalf  = ((0b01010010 << 0)
                          |(0b01100010 << 8)
                          |(0b01000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'O': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'P': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111110 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b01111110 << 0)
                          |(0b00000010 << 8)
                          |(0b00000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'Q': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b01110010 << 0)
                          |(0b01111100 << 8)
                          |(0b10000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'R': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b10000010 << 16)
                          |(0b11111110 << 24));
            BottomHalf  = ((0b00000110 << 0)
                          |(0b00011010 << 8)
                          |(0b11100010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'S':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111100 << 8)
                          |(0b10000010 << 16)
                          |(0b00000100 << 24));
            BottomHalf  = ((0b01111000 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'T':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b00001000 << 16)
                          |(0b00001000 << 24));
            BottomHalf  = ((0b00001000 << 0)
                          |(0b00001000 << 8)
                          |(0b00001000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'U': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000010 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'V': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000010 << 8)
                          |(0b01000010 << 16)
                          |(0b01000100 << 24));
            BottomHalf  = ((0b00101000 << 0)
                          |(0b00101000 << 8)
                          |(0b00010000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'W': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000010 << 8)
                          |(0b10000010 << 16)
                          |(0b10010010 << 24));
            BottomHalf  = ((0b10010010 << 0)
                          |(0b10010110 << 8)
                          |(0b01101100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'X': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000010 << 8)
                          |(0b01000100 << 16)
                          |(0b00101000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b01001000 << 8)
                          |(0b10000100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'Y': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b10000100 << 8)
                          |(0b10000100 << 16)
                          |(0b01001000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'Z': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b11111110 << 8)
                          |(0b01000000 << 16)
                          |(0b00100000 << 24));
            BottomHalf  = ((0b00010000 << 0)
                          |(0b00001000 << 8)
                          |(0b11111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '{': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00111100 << 8)
                          |(0b00001100 << 16)
                          |(0b00001110 << 24));
            BottomHalf  = ((0b00001110 << 0)
                          |(0b00001100 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '|': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00110000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00110000 << 8)
                          |(0b00110000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '}': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b0011100 << 8)
                          |(0b00110000 << 16)
                          |(0b01110000 << 24));
            BottomHalf  = ((0b01110000 << 0)
                          |(0b00110000 << 8)
                          |(0b00111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '[': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00111100 << 8)
                          |(0b00000100 << 16)
                          |(0b00000100 << 24));
            BottomHalf  = ((0b00000100 << 0)
                          |(0b00000100 << 8)
                          |(0b00111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case '\\': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000100 << 8)
                          |(0b00001000 << 16)
                          |(0b00010000 << 24));
            BottomHalf  = ((0b00100000 << 0)
                          |(0b01000000 << 8)
                          |(0b10000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case ']': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01111000 << 8)
                          |(0b01000000 << 16)
                          |(0b01000000 << 24));
            BottomHalf  = ((0b01000000 << 0)
                          |(0b01000000 << 8)
                          |(0b01111000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '^': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b01001000 << 16)
                          |(0b01000100 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '-': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b01111100 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case '`': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00001100 << 8)
                          |(0b00011000 << 16)
                          |(0b00000000 << 24));
            BottomHalf  = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'a':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111000 << 16)
                          |(0b01000000 << 24));
            BottomHalf  = ((0b01111000 << 0)
                          |(0b01000100 << 8)
                          |(0b11111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'b':{
            TopHalf     = ((0b00000010 << 0)
                          |(0b00000010 << 8)
                          |(0b00111110 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01000010 << 8)
                          |(0b00111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'c': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01111100 << 16)
                          |(0b00000010 << 24));
            BottomHalf  = ((0b00000010 << 0)
                          |(0b00000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'd': {
            TopHalf     = ((0b01000000 << 0)
                          |(0b01000000 << 8)
                          |(0b01111100 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'e': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111100 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01111110 << 0)
                          |(0b00000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'f': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b01110000 << 8)
                          |(0b00001000 << 16)
                          |(0b01111110 << 24));
            BottomHalf  = ((0b00001000 << 0)
                          |(0b00001000 << 8)
                          |(0b00001000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'g': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b11111100 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b11111110 << 8)
                          |(0b01000000 << 16)
                          |(0b00111100 << 24));
		}  break;
		case 'h': {
            TopHalf     = ((0b00000010 << 0)
                          |(0b00000010 << 8)
                          |(0b00111110 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01000010 << 8)
                          |(0b01000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'i': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00011000 << 8)
                          |(0b00000000 << 16)
                          |(0b00011100 << 24));
            BottomHalf  = ((0b00010000 << 0)
                          |(0b00010000 << 8)
                          |(0b01111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'j':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00110000 << 8)
                          |(0b00000000 << 16)
                          |(0b00110000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00110110 << 8)
                          |(0b00011100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'k': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000010 << 8)
                          |(0b00110010 << 16)
                          |(0b00001010 << 24));
            BottomHalf  = ((0b00001110 << 0)
                          |(0b00010010 << 8)
                          |(0b01100010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'l': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00011000 << 8)
                          |(0b00010000 << 16)
                          |(0b00010000 << 24));
            BottomHalf  = ((0b00010000 << 0)
                          |(0b00010000 << 8)
                          |(0b01111110 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'm': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01101100 << 16)
                          |(0b10011010 << 24));
            BottomHalf  = ((0b10010010 << 0)
                          |(0b10010010 << 8)
                          |(0b10010010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'n': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111110 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01000010 << 8)
                          |(0b01000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'o': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01111100 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'p': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111110 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b00111110 << 8)
                          |(0b00000010 << 16)
                          |(0b00000010 << 24));
		} break;
		case 'q': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01111100 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01111100 << 8)
                          |(0b01000000 << 16)
                          |(0b01000000 << 24));
		} break;
		case 'r': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00111110 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b00000010 << 8)
                          |(0b00000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 's':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01111000 << 16)
                          |(0b00000100 << 24));
            BottomHalf  = ((0b01111100 << 0)
                          |(0b10000000 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 't':{
            TopHalf     = ((0b00000000 << 0)
                          |(0b00001000 << 8)
                          |(0b01111110 << 16)
                          |(0b00001000 << 24));
            BottomHalf  = ((0b00001000 << 0)
                          |(0b10001000 << 8)
                          |(0b01110000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'u': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10000010 << 0)
                          |(0b10000010 << 8)
                          |(0b01111100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'v': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01000010 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000100 << 0)
                          |(0b00101000 << 8)
                          |(0b00010000 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'w': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b10000010 << 16)
                          |(0b10000010 << 24));
            BottomHalf  = ((0b10010010 << 0)
                          |(0b10010010 << 8)
                          |(0b01101100 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'x': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b10000010 << 16)
                          |(0b01000100 << 24));
            BottomHalf  = ((0b00111100 << 0)
                          |(0b00100100 << 8)
                          |(0b01000010 << 16)
                          |(0b00000000 << 24));
		} break;
		case 'y': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b01000010 << 16)
                          |(0b01000010 << 24));
            BottomHalf  = ((0b01000010 << 0)
                          |(0b01111100 << 8)
                          |(0b01000000 << 16)
                          |(0b00111100 << 24));
		} break;
		case 'z': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b11111110 << 16)
                          |(0b11000000 << 24));
            BottomHalf  = ((0b00110000 << 0)
                          |(0b00001000 << 8)
                          |(0b11111110 << 16)
                          |(0b00000000 << 24));
		} break; 
		case '~': {
            TopHalf     = ((0b00000000 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b10011000 << 24));
            BottomHalf  = ((0b01100110 << 0)
                          |(0b00000000 << 8)
                          |(0b00000000 << 16)
                          |(0b00000000 << 24));
		} break;
		default:{
            TopHalf     = ((0b11111110 << 0)
                          |(0b11111110 << 8)
                          |(0b11111110 << 16)
                          |(0b11111110 << 24));
            BottomHalf  = ((0b11111110 << 0)
                          |(0b11111110 << 8)
                          |(0b11111110 << 16)
                          |(0b11111110 << 24));
		}
	}
	uint8_t *LetterData = (uint8_t *)malloc(8*8*4);
	uint32_t *LetterPointer = (uint32_t *)LetterData;
	// Top half of letter
	for(int i=0; i < 32; i++) {
		if(TopHalf & 0x01) {
            *LetterPointer++ = Color;
		} else {
            *LetterPointer++ = 0;
		}
		TopHalf = TopHalf >> 1;
	}
	// Bottom half of letter
	for(int i=0; i < 32; i++) {
		if(BottomHalf & 0x01) {
            *LetterPointer++ = Color;
		} else {
            *LetterPointer++ = 0;
		}
		BottomHalf = BottomHalf >> 1;
	}
	return LetterData;
}
