#pragma once

const unsigned char playerImages[] PROGMEM =
{
  // Width, Height
  10, 16,
     
  // Standing
  0x78, 0x84, 0x02, 0x29, 0x41, 0x41, 0x29, 0x02, 0x84, 0x78, 0x00, 0x3c, 0x85, 0xfe, 0x1e, 0x1e,
  0xfe, 0x85, 0x3c, 0x00,
  // RunningR1   
  0x78, 0x84, 0x02, 0x01, 0x01, 0x21, 0x49, 0x42, 0x84, 0x78, 0x00, 0x18, 0x85, 0x7e, 0x1e, 0x1e,
  0xfe, 0x85, 0x08, 0x04,
  // RunningR2   
  0x78, 0x84, 0x02, 0x01, 0x01, 0x21, 0x49, 0x42, 0x84, 0x78, 0x00, 0x00, 0x8d, 0x7e, 0xfe, 0xfe,
  0x9e, 0x0d, 0x10, 0x00, 
  // RunningL1
  0x78, 0x84, 0x42, 0x49, 0x21, 0x01, 0x01, 0x02, 0x84, 0x78, 0x04, 0x08, 0x85, 0xfe, 0x1e, 0x1e,
  0x7e, 0x85, 0x18, 0x00, 
  //RunningL2
  0x78, 0x84, 0x42, 0x49, 0x21, 0x01, 0x01, 0x02, 0x84, 0x78, 0x00, 0x10, 0x0d, 0x9e, 0xfe, 0xfe,
  0x7e, 0x8d, 0x00, 0x00, 
  //RunningF1
  0x78, 0x84, 0x02, 0x29, 0x41, 0x41, 0x29, 0x02, 0x84, 0x78, 0x00, 0x06, 0x05, 0xfe, 0x1e, 0x5e,
  0x3e, 0x05, 0x18, 0x00, 
  //RunningF2
  0x78, 0x84, 0x02, 0x29, 0x41, 0x41, 0x29, 0x02, 0x84, 0x78, 0x00, 0x18, 0x05, 0x3e, 0x5e, 0x1e,
  0xfe, 0x05, 0x06, 0x00,
  //RunningB1
  0x78, 0x84, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x84, 0x78, 0x00, 0x06, 0x05, 0xfe, 0x1e, 0x5e,
  0x3e, 0x05, 0x18, 0x00, 
  //RunningB2
  0x78, 0x84, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x84, 0x78, 0x00, 0x18, 0x05, 0x3e, 0x5e, 0x1e,
  0xfe, 0x05, 0x06, 0x00, 

};

const unsigned char ball[] PROGMEM = {
  //Ball
  0x3c, 0x42, 0x89, 0x8d, 0x81, 0x81, 0x42, 0x3c, 
};

const unsigned char titleScreen[] PROGMEM = {
 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xe7, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0x03, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xf7, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xf7, 0x87, 0x8e, 0x9c, 0x38, 0xf0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0xc0, 0xe0, 0xf0, 0x38, 0x9c, 0x8e, 0x87, 0xf7, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
};

const unsigned char winscreen[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xe8, 0xe8, 0xe8, 0xe8,
0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0f, 0x0f, 0x0f,
0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



const unsigned char opponentImages[] PROGMEM =
{
  // Width, Height
  10, 16,
     
  // Standing
  0x78, 0xfc, 0xfe, 0xb7, 0x7f, 0x7f, 0xb7, 0xfe, 0xfc, 0x78, 0x00, 0x3c, 0x85, 0xff, 0x1f, 0x1f,
  0xff, 0x85, 0x3c, 0x00, 
  // RunningR1   
  0x78, 0xfc, 0xfe, 0xff, 0xff, 0xbf, 0x77, 0x7e, 0xfc, 0x78, 0x00, 0x18, 0x85, 0xff, 0x1f, 0x1f,
  0xff, 0x85, 0x08, 0x04, 
  // RunningR2   
  0x78, 0xfc, 0xfe, 0xff, 0xff, 0xbf, 0x77, 0x7e, 0xfc, 0x78, 0x00, 0x00, 0x99, 0x7f, 0xff, 0xff,
  0xff, 0x99, 0x00, 0x00, 
  // RunningL1
  0x78, 0xfc, 0x7e, 0x6f, 0xbf, 0xff, 0xff, 0xfe, 0xfc, 0x78, 0x04, 0x08, 0x85, 0xff, 0x1f, 0x1f,
  0x7f, 0x85, 0x18, 0x00, 
  //RunningL2
  0x78, 0xfc, 0x7e, 0x6f, 0xbf, 0xff, 0xff, 0xfe, 0xfc, 0x78, 0x00, 0x00, 0x8d, 0xff, 0xff, 0xff,
  0x7f, 0x8d, 0x00, 0x00, 
  //RunningF1
  0x78, 0xfc, 0xfe, 0xb7, 0x7f, 0x7f, 0xb7, 0xfe, 0xfc, 0x78, 0x00, 0x18, 0x05, 0xff, 0x1f, 0x5f,
  0x3f, 0x05, 0x06, 0x00, 
  //RunningF2
  0x78, 0xfc, 0xfe, 0xb7, 0x7f, 0x7f, 0xb7, 0xfe, 0xfc, 0x78, 0x00, 0x06, 0x05, 0x3f, 0x5f, 0x1f,
  0xff, 0x05, 0x18, 0x00, 
  //RunningB1
  0x78, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x78, 0x00, 0x18, 0x05, 0xff, 0x1f, 0x5f,
  0x3f, 0x05, 0x06, 0x00, 
  //RunningB2
  0x78, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x78, 0x00, 0x06, 0x05, 0x3f, 0x5f, 0x1f,
  0xff, 0x05, 0x18, 0x00, 
};
const unsigned char tiles[9][32] PROGMEM  = {
  //Grass of the field
  { 0x00, 0x40, 0x02, 0x00, 0x20, 0x00, 0x00, 0x08, 0x40, 0x00, 0x01, 0x10, 0x00, 0x02, 0x80, 0x00, 0x10, 0x02, 0x00, 0x80, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x00, 0x41, 0x00, 0x00, 0x08, 0x00 },
  //Left line of the field
  { 0xff, 0xff, 0xff, 0x00, 0x22, 0x00, 0x00, 0x08, 0x40, 0x00, 0x00, 0x12, 0x00, 0x00, 0x20, 0x02, 0xff, 0xff, 0xff, 0x00, 0x00, 0x11, 0x00, 0x40, 0x04, 0x00, 0x00, 0x41, 0x00, 0x08, 0x00, 0x40 },
  //Top line of the field
  { 0x27, 0x07, 0x07, 0x07, 0x27, 0x07, 0x07, 0x0f, 0x47, 0x07, 0x07, 0x07, 0x47, 0x07, 0x0f, 0x07, 0x00, 0x22, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x04, 0x00, 0x00, 0x41, 0x00, 0x08, 0x00, 0x00 },
  //Right line of the field
  { 0x20, 0x04, 0x00, 0x00, 0x22, 0x00, 0x00, 0x08, 0x40, 0x00, 0x04, 0x10, 0x00, 0xff, 0xff, 0xff, 0x00, 0x22, 0x00, 0x00, 0x00, 0x11, 0x00, 0x40, 0x04, 0x00, 0x00, 0x41, 0x00, 0xff, 0xff, 0xff },
  //Bottom line of the field
  { 0x02, 0x40, 0x00, 0x00, 0x22, 0x00, 0x00, 0x08, 0x40, 0x00, 0x00, 0x12, 0x00, 0x00, 0x20, 0x02, 0xe0, 0xe0, 0xe0, 0xe4, 0xe0, 0xe1, 0xe0, 0xe0, 0xe4, 0xe0, 0xe0, 0xe1, 0xe0, 0xe8, 0xe0, 0xe0 },
  //Top/left corner of the field
  { 0xff, 0xff, 0xff, 0x07, 0x27, 0x07, 0x07, 0x0f, 0x47, 0x07, 0x07, 0x17, 0x07, 0x07, 0x87, 0x07, 0xff, 0xff, 0xff, 0x00, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x00, 0x41, 0x00, 0x00, 0x08, 0x00 },
  //Top/right corner of the field
  { 0x07, 0x47, 0x07, 0x07, 0x27, 0x07, 0x07, 0x0f, 0x47, 0x07, 0x07, 0x17, 0x07, 0xff, 0xff, 0xff, 0x10, 0x02, 0x00, 0x80, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x00, 0x41, 0x00, 0xff, 0xff, 0xff },
  //Bottom/left corner of the field
  { 0xff, 0xff, 0xff, 0x00, 0x20, 0x00, 0x00, 0x09, 0x40, 0x00, 0x00, 0x12, 0x00, 0x00, 0x40, 0x04, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe1, 0xe0, 0xe0, 0xe4, 0xe0, 0xe0, 0xe1, 0xe0, 0xe0, 0xe4, 0xe0 },
  //Bottom/right cornder of the field
  { 0x02, 0x40, 0x00, 0x00, 0x22, 0x00, 0x00, 0x08, 0x40, 0x00, 0x00, 0x12, 0x00, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe4, 0xe0, 0xe1, 0xe0, 0xe0, 0xe4, 0xe0, 0xe0, 0xe1, 0xe0, 0xff, 0xff, 0xff },
};

