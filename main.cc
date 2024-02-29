#include <cstddef>
#include "main.h"

G g {
// $00 - vram buffer address table low, also used for pseudorandom bit
// $01 - vram buffer address table high

    /* 8000 (32768) */
    // $00 - vram buffer address table low, also used for pseudorandom bit
    // $01 - vram buffer address table high
    .VRAM_AddrTable_Low = {LO8(VRAM_Buffer1), LO8(0x8000+offsetof(G, WaterPaletteData)), LO8(0x8000+offsetof(G, GroundPaletteData)), LO8(0x8000+offsetof(G, UndergroundPaletteData)), LO8(0x8000+offsetof(G, CastlePaletteData)), LO8(VRAM_Buffer1_Offset), LO8(VRAM_Buffer2), LO8(VRAM_Buffer2), LO8(0x8000+offsetof(G, BowserPaletteData)), LO8(0x8000+offsetof(G, DaySnowPaletteData)), LO8(0x8000+offsetof(G, NightSnowPaletteData)), LO8(0x8000+offsetof(G, MushroomPaletteData)), LO8(0x8000+offsetof(G, MarioThanksMessage)), LO8(0x8000+offsetof(G, LuigiThanksMessage)), LO8(0x8000+offsetof(G, MushroomRetainerSaved)), LO8(0x8000+offsetof(G, PrincessSaved1)), LO8(0x8000+offsetof(G, PrincessSaved2)), LO8(0x8000+offsetof(G, WorldSelectMessage1)), LO8(0x8000+offsetof(G, WorldSelectMessage2)), },

    /* 8013 (32787) */
    .VRAM_AddrTable_High = {HI8(VRAM_Buffer1), HI8(0x8000+offsetof(G, WaterPaletteData)), HI8(0x8000+offsetof(G, GroundPaletteData)), HI8(0x8000+offsetof(G, UndergroundPaletteData)), HI8(0x8000+offsetof(G, CastlePaletteData)), HI8(VRAM_Buffer1_Offset), HI8(VRAM_Buffer2), HI8(VRAM_Buffer2), HI8(0x8000+offsetof(G, BowserPaletteData)), HI8(0x8000+offsetof(G, DaySnowPaletteData)), HI8(0x8000+offsetof(G, NightSnowPaletteData)), HI8(0x8000+offsetof(G, MushroomPaletteData)), HI8(0x8000+offsetof(G, MarioThanksMessage)), HI8(0x8000+offsetof(G, LuigiThanksMessage)), HI8(0x8000+offsetof(G, MushroomRetainerSaved)), HI8(0x8000+offsetof(G, PrincessSaved1)), HI8(0x8000+offsetof(G, PrincessSaved2)), HI8(0x8000+offsetof(G, WorldSelectMessage1)), HI8(0x8000+offsetof(G, WorldSelectMessage2)), },

    /* 8026 (32806) */
    .VRAM_Buffer_Offset = {LO8(VRAM_Buffer1_Offset), LO8(VRAM_Buffer2_Offset), },

    /* 8028 (32808) */
    .WSelectBufferTemplate = {0x4, 0x20, 0x73, 0x1, 0x0, 0x0, },

    /* 802e (32814) */
    .MushroomIconData = {0x7, 0x22, 0x49, 0x83, 0xce, 0x24, 0x24, 0x0, },

    /* 8036 (32822) */
    .DemoActionData = {0x1, 0x80, 0x2, 0x81, 0x41, 0x80, 0x1, 0x42, 0xc2, 0x2, 0x80, 0x41, 0xc1, 0x41, 0xc1, 0x1, 0xc1, 0x1, 0x2, 0x80, 0x0, },

    /* 804b (32843) */
    .DemoTimingData = {0x9b, 0x10, 0x18, 0x5, 0x2c, 0x20, 0x24, 0x15, 0x5a, 0x10, 0x20, 0x28, 0x30, 0x20, 0x10, 0x80, 0x20, 0x30, 0x30, 0x1, 0xff, 0x0, },
// data is used as tiles for numbers
// that appear when you defeat enemies

    /* 8061 (32865) */
    // data is used as tiles for numbers
    // that appear when you defeat enemies
    .FloateyNumTileData = {
    // dummy
    0xff, 0xff, 
    // "100"
    0xf6, 0xfb, 
    // "200"
    0xf7, 0xfb, 
    // "400"
    0xf8, 0xfb, 
    // "500"
    0xf9, 0xfb, 
    // "800"
    0xfa, 0xfb, 
    // "1000"
    0xf6, 0x50, 
    // "2000"
    0xf7, 0x50, 
    // "4000"
    0xf8, 0x50, 
    // "5000"
    0xf9, 0x50, 
    // "8000"
    0xfa, 0x50, 
    // "1-UP"
    0xfd, 0xfe, },
// high nybble is digit number, low nybble is number to
// add to the digit of the player's score

    /* 8079 (32889) */
    // high nybble is digit number, low nybble is number to
    // add to the digit of the player's score
    .ScoreUpdateData = {
    // dummy
    0xff, 0x41, 0x42, 0x44, 0x45, 0x48, 0x31, 0x32, 0x34, 0x35, 0x38, 0x0, },

    /* 8085 (32901) */
    .AreaPalette = {0x1, 0x2, 0x3, 0x4, },
// $00 - used as temp counter in GetPlayerColors

    /* 8089 (32905) */
    // $00 - used as temp counter in GetPlayerColors
    .BGColorCtrl_Addr = {0x0, 0x9, 0xa, 0x4, },

    /* 808d (32909) */
    .BackgroundColors = {
    // used by area type if bg color ctrl not set
    0x22, 0x22, 0xf, 0xf, 
    // used by background color control if set
    0xf, 0x22, 0xf, 0xf, },

    /* 8095 (32917) */
    .PlayerColors = {
    // mario's colors
    0x22, 0x16, 0x27, 0x18, 
    // luigi's colors
    0x22, 0x30, 0x27, 0x19, 
    // fiery (used by both)
    0x22, 0x37, 0x27, 0x16, },

    /* 80a1 (32929) */
    .GameText = {},

    /* 80a2 (32930) */
    .TopStatusBarLine = {
    // "MARIO"
    0x20, 0x43, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18, 
    // "WORLD  TIME"
    0x20, 0x52, 0xb, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x24, 0x24, 0x1d, 0x12, 0x16, 0xe, 
    // score trailing digit and coin display
    0x20, 0x68, 0x5, 0x0, 0x24, 0x24, 0x2e, 0x29, 
    // attribute table data, clears name table 0 to palette 2
    0x23, 0xc0, 0x7f, 0xaa, 
    // attribute table data, used for coin icon in status bar
    0x23, 0xc2, 0x1, 0xea, 
    // end of data block
    0xff, },

    /* 80c9 (32969) */
    .WorldLivesDisplay = {
    // cross with spaces used on
    0x21, 0xcd, 0x7, 0x24, 0x24, 
    // lives display
    0x29, 0x24, 0x24, 0x24, 0x24, 
    // "WORLD  - " used on lives display
    0x21, 0x4b, 0x9, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x24, 0x24, 0x28, 0x24, 
    // possibly used to clear time up
    0x22, 0xc, 0x47, 0x24, 
    // attribute table data for crown if more than 9 lives
    0x23, 0xdc, 0x1, 0xba, 0xff, },

    /* 80e8 (33000) */
    .TwoPlayerTimeUp = {
    // "MARIO"
    0x21, 0xcd, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18, },

    /* 80f0 (33008) */
    .OnePlayerTimeUp = {
    // "TIME UP"
    0x22, 0xc, 0x7, 0x1d, 0x12, 0x16, 0xe, 0x24, 0x1e, 0x19, 0xff, },

    /* 80fb (33019) */
    .TwoPlayerGameOver = {
    // "MARIO"
    0x21, 0xcd, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18, },

    /* 8103 (33027) */
    .OnePlayerGameOver = {
    // "GAME OVER"
    0x22, 0xb, 0x9, 0x10, 0xa, 0x16, 0xe, 0x24, 0x18, 0x1f, 0xe, 0x1b, 0xff, },

    /* 8110 (33040) */
    .WarpZoneWelcome = {
    // "WELCOME TO WARP ZONE!"
    0x25, 0x84, 0x15, 0x20, 0xe, 0x15, 0xc, 0x18, 0x16, 0xe, 0x24, 0x1d, 0x18, 0x24, 0x20, 0xa, 0x1b, 0x19, 0x24, 0x23, 0x18, 0x17, 0xe, 0x2b, 
    // placeholder for left pipe
    0x26, 0x25, 0x1, 0x24, 
    // placeholder for middle pipe
    0x26, 0x2d, 0x1, 0x24, 
    // placeholder for right pipe
    0x26, 0x35, 0x1, 0x24, 
    // attribute data
    0x27, 0xd9, 0x46, 0xaa, 0x27, 0xe1, 0x45, 0xaa, 0xff, },

    /* 813d (33085) */
    .LuigiName = {
    // "LUIGI", no address or length
    0x15, 0x1e, 0x12, 0x10, 0x12, },

    /* 8142 (33090) */
    .WarpZoneNumbers = {
    // warp zone numbers, note spaces on middle
    0x4, 0x3, 0x2, 0x0, 
    // zone, partly responsible for
    0x24, 0x5, 0x24, 0x0, 
    // the minus world
    0x8, 0x7, 0x6, 0x0, },

    /* 814e (33102) */
    .GameTextOffsets = {((0x8000+offsetof(G, TopStatusBarLine)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, TopStatusBarLine)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, WorldLivesDisplay)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, WorldLivesDisplay)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, TwoPlayerTimeUp)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, OnePlayerTimeUp)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, TwoPlayerGameOver)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, OnePlayerGameOver)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, WarpZoneWelcome)) - (0x8000+offsetof(G, GameText))), ((0x8000+offsetof(G, WarpZoneWelcome)) - (0x8000+offsetof(G, GameText))), },
// $00 - used as temporary counter in ColorRotation

    /* 8158 (33112) */
    // $00 - used as temporary counter in ColorRotation
    .ColorRotatePalette = {0x27, 0x27, 0x27, 0x17, 0x7, 0x17, },

    /* 815e (33118) */
    .BlankPalette = {0x3f, 0xc, 0x4, 0xff, 0xff, 0xff, 0xff, 0x0, },
// used based on area type

    /* 8166 (33126) */
    // used based on area type
    .Palette3Data = {0xf, 0x7, 0x12, 0xf, 0xf, 0x7, 0x17, 0xf, 0xf, 0x7, 0x17, 0x1c, 0xf, 0x7, 0x17, 0x0, },
// $00 - temp store for offset control bit
// $01 - temp vram buffer offset
// $02 - temp store for vertical high nybble in block buffer routine
// $03 - temp adder for high byte of name table address
// $04, $05 - name table address low/high
// $06, $07 - block buffer address low/high

    /* 8176 (33142) */
    // $00 - temp store for offset control bit
    // $01 - temp vram buffer offset
    // $02 - temp store for vertical high nybble in block buffer routine
    // $03 - temp adder for high byte of name table address
    // $04, $05 - name table address low/high
    // $06, $07 - block buffer address low/high
    .BlockGfxData = {0x45, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x57, 0x58, 0x59, 0x5a, 0x24, 0x24, 0x24, 0x24, 0x26, 0x26, 0x26, 0x26, },
// METATILE GRAPHICS TABLE

    /* 818a (33162) */
    // METATILE GRAPHICS TABLE
    .MetatileGraphics_Low = {LO8(0x8000+offsetof(G, Palette0_MTiles)), LO8(0x8000+offsetof(G, Palette1_MTiles)), LO8(0x8000+offsetof(G, Palette2_MTiles)), LO8(0x8000+offsetof(G, Palette3_MTiles)), },

    /* 818e (33166) */
    .MetatileGraphics_High = {HI8(0x8000+offsetof(G, Palette0_MTiles)), HI8(0x8000+offsetof(G, Palette1_MTiles)), HI8(0x8000+offsetof(G, Palette2_MTiles)), HI8(0x8000+offsetof(G, Palette3_MTiles)), },

    /* 8192 (33170) */
    .Palette0_MTiles = {
    // blank
    0x24, 0x24, 0x24, 0x24, 
    // black metatile
    0x27, 0x27, 0x27, 0x27, 
    // bush left
    0x24, 0x24, 0x24, 0x35, 
    // bush middle
    0x36, 0x25, 0x37, 0x25, 
    // bush right
    0x24, 0x38, 0x24, 0x24, 
    // mountain left
    0x24, 0x30, 0x30, 0x26, 
    // mountain left bottom/middle center
    0x26, 0x26, 0x34, 0x26, 
    // mountain middle top
    0x24, 0x31, 0x24, 0x32, 
    // mountain right
    0x33, 0x26, 0x24, 0x33, 
    // mountain right bottom
    0x34, 0x26, 0x26, 0x26, 
    // mountain middle bottom
    0x26, 0x26, 0x26, 0x26, 
    // bridge guardrail
    0x24, 0xc0, 0x24, 0xc0, 
    // chain
    0x24, 0x7f, 0x7f, 0x24, 
    // tall tree top, top half
    0xb8, 0xba, 0xb9, 0xbb, 
    // short tree top
    0xb8, 0xbc, 0xb9, 0xbd, 
    // tall tree top, bottom half
    0xba, 0xbc, 0xbb, 0xbd, 
    // warp pipe end left, points up
    0x60, 0x64, 0x61, 0x65, 
    // warp pipe end right, points up
    0x62, 0x66, 0x63, 0x67, 
    // decoration pipe end left, points up
    0x60, 0x64, 0x61, 0x65, 
    // decoration pipe end right, points up
    0x62, 0x66, 0x63, 0x67, 
    // pipe shaft left
    0x68, 0x68, 0x69, 0x69, 
    // pipe shaft right
    0x26, 0x26, 0x6a, 0x6a, 
    // tree ledge left edge
    0x4b, 0x4c, 0x4d, 0x4e, 
    // tree ledge middle
    0x4d, 0x4f, 0x4d, 0x4f, 
    // tree ledge right edge
    0x4d, 0x4e, 0x50, 0x51, 
    // mushroom left edge
    0x6b, 0x70, 0x2c, 0x2d, 
    // mushroom middle
    0x6c, 0x71, 0x6d, 0x72, 
    // mushroom right edge
    0x6e, 0x73, 0x6f, 0x74, 
    // sideways pipe end top
    0x86, 0x8a, 0x87, 0x8b, 
    // sideways pipe shaft top
    0x88, 0x8c, 0x88, 0x8c, 
    // sideways pipe joint top
    0x89, 0x8d, 0x69, 0x69, 
    // sideways pipe end bottom
    0x8e, 0x91, 0x8f, 0x92, 
    // sideways pipe shaft bottom
    0x26, 0x93, 0x26, 0x93, 
    // sideways pipe joint bottom
    0x90, 0x94, 0x69, 0x69, 
    // seaplant
    0xa4, 0xe9, 0xea, 0xeb, 
    // blank, used on bricks or blocks that are hit
    0x24, 0x24, 0x24, 0x24, 
    // flagpole ball
    0x24, 0x2f, 0x24, 0x3d, 
    // flagpole shaft
    0xa2, 0xa2, 0xa3, 0xa3, 
    // blank, used in conjunction with vines
    0x24, 0x24, 0x24, 0x24, },

    /* 822e (33326) */
    .Palette1_MTiles = {
    // vertical rope
    0xa2, 0xa2, 0xa3, 0xa3, 
    // horizontal rope
    0x99, 0x24, 0x99, 0x24, 
    // left pulley
    0x24, 0xa2, 0x3e, 0x3f, 
    // right pulley
    0x5b, 0x5c, 0x24, 0xa3, 
    // blank used for balance rope
    0x24, 0x24, 0x24, 0x24, 
    // castle top
    0x9d, 0x47, 0x9e, 0x47, 
    // castle window left
    0x47, 0x47, 0x27, 0x27, 
    // castle brick wall
    0x47, 0x47, 0x47, 0x47, 
    // castle window right
    0x27, 0x27, 0x47, 0x47, 
    // castle top w/ brick
    0xa9, 0x47, 0xaa, 0x47, 
    // entrance top
    0x9b, 0x27, 0x9c, 0x27, 
    // entrance bottom
    0x27, 0x27, 0x27, 0x27, 
    // green ledge stump
    0x52, 0x52, 0x52, 0x52, 
    // fence
    0x80, 0xa0, 0x81, 0xa1, 
    // tree trunk
    0xbe, 0xbe, 0xbf, 0xbf, 
    // mushroom stump top
    0x75, 0xba, 0x76, 0xbb, 
    // mushroom stump bottom
    0xba, 0xba, 0xbb, 0xbb, 
    // breakable brick w/ line
    0x45, 0x47, 0x45, 0x47, 
    // breakable brick
    0x47, 0x47, 0x47, 0x47, 
    // breakable brick (not used)
    0x45, 0x47, 0x45, 0x47, 
    // cracked rock terrain
    0xb4, 0xb6, 0xb5, 0xb7, 
    // brick with line (power-up)
    0x45, 0x47, 0x45, 0x47, 
    // brick with line (vine)
    0x45, 0x47, 0x45, 0x47, 
    // brick with line (star)
    0x45, 0x47, 0x45, 0x47, 
    // brick with line (coins)
    0x45, 0x47, 0x45, 0x47, 
    // brick with line (1-up)
    0x45, 0x47, 0x45, 0x47, 
    // brick (power-up)
    0x47, 0x47, 0x47, 0x47, 
    // brick (vine)
    0x47, 0x47, 0x47, 0x47, 
    // brick (star)
    0x47, 0x47, 0x47, 0x47, 
    // brick (coins)
    0x47, 0x47, 0x47, 0x47, 
    // brick (1-up)
    0x47, 0x47, 0x47, 0x47, 
    // hidden block (1 coin)
    0x24, 0x24, 0x24, 0x24, 
    // hidden block (1-up)
    0x24, 0x24, 0x24, 0x24, 
    // solid block (3-d block)
    0xab, 0xac, 0xad, 0xae, 
    // solid block (white wall)
    0x5d, 0x5e, 0x5d, 0x5e, 
    // bridge
    0xc1, 0x24, 0xc1, 0x24, 
    // bullet bill cannon barrel
    0xc6, 0xc8, 0xc7, 0xc9, 
    // bullet bill cannon top
    0xca, 0xcc, 0xcb, 0xcd, 
    // bullet bill cannon bottom
    0x2a, 0x2a, 0x40, 0x40, 
    // blank used for jumpspring
    0x24, 0x24, 0x24, 0x24, 
    // half brick used for jumpspring
    0x24, 0x47, 0x24, 0x47, 
    // solid block (water level, green rock)
    0x82, 0x83, 0x84, 0x85, 
    // half brick (???)
    0x24, 0x47, 0x24, 0x47, 
    // water pipe top
    0x86, 0x8a, 0x87, 0x8b, 
    // water pipe bottom
    0x8e, 0x91, 0x8f, 0x92, 
    // flag ball (residual object)
    0x24, 0x2f, 0x24, 0x3d, },

    /* 82e6 (33510) */
    .Palette2_MTiles = {
    // cloud left
    0x24, 0x24, 0x24, 0x35, 
    // cloud middle
    0x36, 0x25, 0x37, 0x25, 
    // cloud right
    0x24, 0x38, 0x24, 0x24, 
    // cloud bottom left
    0x24, 0x24, 0x39, 0x24, 
    // cloud bottom middle
    0x3a, 0x24, 0x3b, 0x24, 
    // cloud bottom right
    0x3c, 0x24, 0x24, 0x24, 
    // water/lava top
    0x41, 0x26, 0x41, 0x26, 
    // water/lava
    0x26, 0x26, 0x26, 0x26, 
    // cloud level terrain
    0xb0, 0xb1, 0xb2, 0xb3, 
    // bowser's bridge
    0x77, 0x79, 0x77, 0x79, },

    /* 830e (33550) */
    .Palette3_MTiles = {
    // question block (coin)
    0x53, 0x55, 0x54, 0x56, 
    // question block (power-up)
    0x53, 0x55, 0x54, 0x56, 
    // coin
    0xa5, 0xa7, 0xa6, 0xa8, 
    // underwater coin
    0xc2, 0xc4, 0xc3, 0xc5, 
    // empty block
    0x57, 0x59, 0x58, 0x5a, 
    // axe
    0x7b, 0x7d, 0x7c, 0x7e, },
// VRAM BUFFER DATA FOR LOCATIONS IN PRG-ROM

    /* 8326 (33574) */
    // VRAM BUFFER DATA FOR LOCATIONS IN PRG-ROM
    .WaterPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x15, 0x12, 0x25, 0xf, 0x3a, 0x1a, 0xf, 0xf, 0x30, 0x12, 0xf, 0xf, 0x27, 0x12, 0xf, 0x22, 0x16, 0x27, 0x18, 0xf, 0x10, 0x30, 0x27, 0xf, 0x16, 0x30, 0x27, 0xf, 0xf, 0x30, 0x10, 0x0, },

    /* 834a (33610) */
    .GroundPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x29, 0x1a, 0xf, 0xf, 0x36, 0x17, 0xf, 0xf, 0x30, 0x21, 0xf, 0xf, 0x27, 0x17, 0xf, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1a, 0x30, 0x27, 0xf, 0x16, 0x30, 0x27, 0xf, 0xf, 0x36, 0x17, 0x0, },

    /* 836e (33646) */
    .UndergroundPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x29, 0x1a, 0x9, 0xf, 0x3c, 0x1c, 0xf, 0xf, 0x30, 0x21, 0x1c, 0xf, 0x27, 0x17, 0x1c, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1c, 0x36, 0x17, 0xf, 0x16, 0x30, 0x27, 0xf, 0xc, 0x3c, 0x1c, 0x0, },

    /* 8392 (33682) */
    .CastlePaletteData = {0x3f, 0x0, 0x20, 0xf, 0x30, 0x10, 0x0, 0xf, 0x30, 0x10, 0x0, 0xf, 0x30, 0x16, 0x0, 0xf, 0x27, 0x17, 0x0, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1c, 0x36, 0x17, 0xf, 0x16, 0x30, 0x27, 0xf, 0x0, 0x30, 0x10, 0x0, },

    /* 83b6 (33718) */
    .DaySnowPaletteData = {0x3f, 0x0, 0x4, 0x22, 0x30, 0x0, 0x10, 0x0, },

    /* 83be (33726) */
    .NightSnowPaletteData = {0x3f, 0x0, 0x4, 0xf, 0x30, 0x0, 0x10, 0x0, },

    /* 83c6 (33734) */
    .MushroomPaletteData = {0x3f, 0x0, 0x4, 0x22, 0x27, 0x16, 0xf, 0x0, },

    /* 83ce (33742) */
    .BowserPaletteData = {0x3f, 0x14, 0x4, 0xf, 0x1a, 0x30, 0x27, 0x0, },

    /* 83d6 (33750) */
    .MarioThanksMessage = {
    // "THANK YOU MARIO!"
    0x25, 0x48, 0x10, 0x1d, 0x11, 0xa, 0x17, 0x14, 0x24, 0x22, 0x18, 0x1e, 0x24, 0x16, 0xa, 0x1b, 0x12, 0x18, 0x2b, 0x0, },

    /* 83ea (33770) */
    .LuigiThanksMessage = {
    // "THANK YOU LUIGI!"
    0x25, 0x48, 0x10, 0x1d, 0x11, 0xa, 0x17, 0x14, 0x24, 0x22, 0x18, 0x1e, 0x24, 0x15, 0x1e, 0x12, 0x10, 0x12, 0x2b, 0x0, },

    /* 83fe (33790) */
    .MushroomRetainerSaved = {
    // "BUT OUR PRINCESS IS IN"
    0x25, 0xc5, 0x16, 0xb, 0x1e, 0x1d, 0x24, 0x18, 0x1e, 0x1b, 0x24, 0x19, 0x1b, 0x12, 0x17, 0xc, 0xe, 0x1c, 0x1c, 0x24, 0x12, 0x1c, 0x24, 0x12, 0x17, 
    // "ANOTHER CASTLE!"
    0x26, 0x5, 0xf, 0xa, 0x17, 0x18, 0x1d, 0x11, 0xe, 0x1b, 0x24, 0xc, 0xa, 0x1c, 0x1d, 0x15, 0xe, 0x2b, 0x0, },

    /* 842a (33834) */
    .PrincessSaved1 = {
    // "YOUR QUEST IS OVER."
    0x25, 0xa7, 0x13, 0x22, 0x18, 0x1e, 0x1b, 0x24, 0x1a, 0x1e, 0xe, 0x1c, 0x1d, 0x24, 0x12, 0x1c, 0x24, 0x18, 0x1f, 0xe, 0x1b, 0xaf, 0x0, },

    /* 8441 (33857) */
    .PrincessSaved2 = {
    // "WE PRESENT YOU A NEW QUEST."
    0x25, 0xe3, 0x1b, 0x20, 0xe, 0x24, 0x19, 0x1b, 0xe, 0x1c, 0xe, 0x17, 0x1d, 0x24, 0x22, 0x18, 0x1e, 0x24, 0xa, 0x24, 0x17, 0xe, 0x20, 0x24, 0x1a, 0x1e, 0xe, 0x1c, 0x1d, 0xaf, 0x0, },

    /* 8460 (33888) */
    .WorldSelectMessage1 = {
    // "PUSH BUTTON B"
    0x26, 0x4a, 0xd, 0x19, 0x1e, 0x1c, 0x11, 0x24, 0xb, 0x1e, 0x1d, 0x1d, 0x18, 0x17, 0x24, 0xb, 0x0, },

    /* 8471 (33905) */
    .WorldSelectMessage2 = {
    // "TO SELECT A WORLD"
    0x26, 0x88, 0x11, 0x1d, 0x18, 0x24, 0x1c, 0xe, 0x15, 0xe, 0xc, 0x1d, 0x24, 0xa, 0x24, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x0, },
// $00 - used to store status bar nybbles
// $02 - used as temp vram offset
// $03 - used to store length of status bar number
// status bar name table offset and length data

    /* 8486 (33926) */
    // $00 - used to store status bar nybbles
    // $02 - used as temp vram offset
    // $03 - used to store length of status bar number
    // status bar name table offset and length data
    .StatusBarData = {
    // top score display on title screen
    0xf0, 0x6, 
    // player score
    0x62, 0x6, 0x62, 0x6, 
    // coin tally
    0x6d, 0x2, 0x6d, 0x2, 
    // game timer
    0x7a, 0x3, },

    /* 8492 (33938) */
    .StatusBarOffset = {0x6, 0xc, 0x12, 0x18, 0x1e, 0x24, },

    /* 8498 (33944) */
    .DefaultSprOffsets = {0x4, 0x30, 0x48, 0x60, 0x78, 0x90, 0xa8, 0xc0, 0xd8, 0xe8, 0x24, 0xf8, 0xfc, 0x28, 0x2c, },

    /* 84a7 (33959) */
    .Sprite0Data = {0x18, 0xff, 0x23, 0x58, },

    /* 84ab (33963) */
    .MusicSelectData = {WaterMusic, GroundMusic, UndergroundMusic, CastleMusic, CloudMusic, PipeIntroMusic, },

    /* 84b1 (33969) */
    .PlayerStarting_X_Pos = {0x28, 0x18, 0x38, 0x28, },

    /* 84b5 (33973) */
    .AltYPosOffset = {0x8, 0x0, },

    /* 84b7 (33975) */
    .PlayerStarting_Y_Pos = {0x0, 0x20, 0xb0, 0x50, 0x0, 0x0, 0xb0, 0xb0, 0xf0, },

    /* 84c0 (33984) */
    .PlayerBGPriorityData = {0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, },

    /* 84c8 (33992) */
    .GameTimerData = {
    // dummy byte, used as part of bg priority data
    0x20, 0x4, 0x3, 0x2, },
// page numbers are in order from -1 to -4

    /* 84cc (33996) */
    // page numbers are in order from -1 to -4
    .HalfwayPageNybbles = {0x56, 0x40, 0x65, 0x70, 0x66, 0x40, 0x66, 0x40, 0x66, 0x40, 0x66, 0x60, 0x65, 0x70, 0x0, 0x0, },
// $00 - used as counter, store for low nybble for background, ceiling byte for terrain
// $01 - used to store floor byte for terrain
// $07 - used to store terrain metatile
// $06-$07 - used to store block buffer address

    /* 84dc (34012) */
    // $00 - used as counter, store for low nybble for background, ceiling byte for terrain
    // $01 - used to store floor byte for terrain
    // $07 - used to store terrain metatile
    // $06-$07 - used to store block buffer address
    .BSceneDataOffsets = {0x0, 0x30, 0x60, },

    /* 84df (34015) */
    .BackSceneryData = {
    // clouds
    0x93, 0x0, 0x0, 0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x51, 0x52, 0x53, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x2, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x91, 0x92, 0x93, 0x0, 0x0, 0x0, 0x0, 0x51, 0x52, 0x53, 0x41, 0x42, 0x43, 0x0, 0x0, 0x0, 0x0, 0x0, 0x91, 0x92, 
    // mountains and bushes
    0x97, 0x87, 0x88, 0x89, 0x99, 0x0, 0x0, 0x0, 0x11, 0x12, 0x13, 0xa4, 0xa5, 0xa5, 0xa5, 0xa6, 0x97, 0x98, 0x99, 0x1, 0x2, 0x3, 0x0, 0xa4, 0xa5, 0xa6, 0x0, 0x11, 0x12, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x2, 0x3, 0x0, 0xa4, 0xa5, 0xa5, 0xa6, 0x0, 0x0, 0x0, 
    // trees and fences
    0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x8b, 0xaa, 0xaa, 0xaa, 0xaa, 0x11, 0x12, 0x13, 0x8b, 0x0, 0x9c, 0x9c, 0x0, 0x0, 0x1, 0x2, 0x3, 0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0xaa, 0xaa, 0x9c, 0xaa, 0x0, 0x8b, 0x0, 0x1, 0x2, 0x3, },

    /* 856f (34159) */
    .BackSceneryMetatiles = {
    // cloud left
    0x80, 0x83, 0x0, 
    // cloud middle
    0x81, 0x84, 0x0, 
    // cloud right
    0x82, 0x85, 0x0, 
    // bush left
    0x2, 0x0, 0x0, 
    // bush middle
    0x3, 0x0, 0x0, 
    // bush right
    0x4, 0x0, 0x0, 
    // mountain left
    0x0, 0x5, 0x6, 
    // mountain middle
    0x7, 0x6, 0xa, 
    // mountain right
    0x0, 0x8, 0x9, 
    // fence
    0x4d, 0x0, 0x0, 
    // tall tree
    0xd, 0xf, 0x4e, 
    // short tree
    0xe, 0x4e, 0x4e, },

    /* 8593 (34195) */
    .FSceneDataOffsets = {0x0, 0xd, 0x1a, },

    /* 8596 (34198) */
    .ForeSceneryData = {
    // in water
    0x86, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x69, 0x69, 
    // wall
    0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x0, 0x0, 
    // over water
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x86, 0x87, },

    /* 85bd (34237) */
    .TerrainMetatiles = {0x69, 0x54, 0x52, 0x62, },

    /* 85c1 (34241) */
    .TerrainRenderBits = {
    // no ceiling or floor
    0b0, 0b0, 
    // no ceiling, floor 2
    0b0, 0b11000, 
    // ceiling 1, floor 2
    0b1, 0b11000, 
    // ceiling 3, floor 2
    0b111, 0b11000, 
    // ceiling 4, floor 2
    0b1111, 0b11000, 
    // ceiling 8, floor 2
    0b11111111, 0b11000, 
    // ceiling 1, floor 5
    0b1, 0b11111, 
    // ceiling 3, floor 5
    0b111, 0b11111, 
    // ceiling 4, floor 5
    0b1111, 0b11111, 
    // ceiling 1, floor 6
    0b10000001, 0b11111, 
    // ceiling 1, no floor
    0b1, 0b0, 
    // ceiling 4, floor 6
    0b10001111, 0b11111, 
    // ceiling 1, floor 9
    0b11110001, 0b11111, 
    // ceiling 1, middle 5, floor 2
    0b11111001, 0b11000, 
    // ceiling 1, middle 4, floor 2
    0b11110001, 0b11000, 
    // completely solid top to bottom
    0b11111111, 0b11111, },
// numbers lower than these with the same attribute bits
// will not be stored in the block buffer

    /* 85e1 (34273) */
    // numbers lower than these with the same attribute bits
    // will not be stored in the block buffer
    .BlockBuffLowBounds = {0x10, 0x51, 0x88, 0xc0, },

    /* 85e5 (34277) */
    .FrenzyIDData = {FlyCheepCheepFrenzy, BBill_CCheep_Frenzy, Stop_Frenzy, },
// tiles used by pulleys and rope object

    /* 85e8 (34280) */
    // tiles used by pulleys and rope object
    .PulleyRopeMetatiles = {0x42, 0x41, 0x43, },
// $06 - used to store upper limit of rows for CastleObject

    /* 85eb (34283) */
    // $06 - used to store upper limit of rows for CastleObject
    .CastleMetatiles = {0x0, 0x45, 0x45, 0x45, 0x0, 0x0, 0x48, 0x47, 0x46, 0x0, 0x45, 0x49, 0x49, 0x49, 0x45, 0x47, 0x47, 0x4a, 0x47, 0x47, 0x47, 0x47, 0x4b, 0x47, 0x47, 0x49, 0x49, 0x49, 0x49, 0x49, 0x47, 0x4a, 0x47, 0x4a, 0x47, 0x47, 0x4b, 0x47, 0x4b, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x4a, 0x47, 0x4a, 0x47, 0x4a, 0x4b, 0x47, 0x4b, 0x47, 0x4b, },

    /* 8622 (34338) */
    .SidePipeShaftData = {
    // used to control whether or not vertical pipe shaft
    0x15, 0x14, 
    // is drawn, and if so, controls the metatile number
    0x0, 0x0, },

    /* 8626 (34342) */
    .SidePipeTopPart = {
    // top part of sideways part of pipe
    0x15, 0x1e, 0x1d, 0x1c, },

    /* 862a (34346) */
    .SidePipeBottomPart = {
    // bottom part of sideways part of pipe
    0x15, 0x21, 0x20, 0x1f, },

    /* 862e (34350) */
    .VerticalPipeData = {
    // used by pipes that lead somewhere
    0x11, 0x10, 0x15, 0x14, 
    // used by decoration pipes
    0x13, 0x12, 0x15, 0x14, },

    /* 8636 (34358) */
    .CoinMetatileData = {0xc3, 0xc2, 0xc2, 0xc2, },

    /* 863a (34362) */
    .C_ObjectRow = {0x6, 0x7, 0x8, },

    /* 863d (34365) */
    .C_ObjectMetatile = {0xc5, 0xc, 0x89, },

    /* 8640 (34368) */
    .SolidBlockMetatiles = {0x69, 0x61, 0x61, 0x62, },

    /* 8644 (34372) */
    .BrickMetatiles = {0x22, 0x51, 0x52, 0x52, 
    // used only by row of bricks object
    0x88, },

    /* 8649 (34377) */
    .StaircaseHeightData = {0x7, 0x7, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0, },

    /* 8652 (34386) */
    .StaircaseRowData = {0x3, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, },

    /* 865b (34395) */
    .HoleMetatiles = {0x87, 0x0, 0x0, 0x0, },
// $06-$07 - used to store block buffer address used as indirect

    /* 865f (34399) */
    // $06-$07 - used to store block buffer address used as indirect
    .BlockBufferAddr = {LO8(Block_Buffer_1), LO8(Block_Buffer_2), HI8(Block_Buffer_1), HI8(Block_Buffer_2), },

    /* 8663 (34403) */
    .AreaDataOfsLoopback = {0x12, 0x36, 0xe, 0xe, 0xe, 0x32, 0x32, 0x32, 0xa, 0x26, 0x40, },
// GAME LEVELS DATA

    /* 866e (34414) */
    // GAME LEVELS DATA
    .WorldAddrOffsets = {((0x8000+offsetof(G, World1Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World2Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World3Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World4Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World5Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World6Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World7Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), ((0x8000+offsetof(G, World8Areas)) - (0x8000+offsetof(G, AreaAddrOffsets))), },

    /* 8676 (34422) */
    .AreaAddrOffsets = {},

    /* 8677 (34423) */
    .World1Areas = {0x25, 0x29, 0xc0, 0x26, 0x60, },

    /* 867c (34428) */
    .World2Areas = {0x28, 0x29, 0x1, 0x27, 0x62, },

    /* 8681 (34433) */
    .World3Areas = {0x24, 0x35, 0x20, 0x63, },

    /* 8685 (34437) */
    .World4Areas = {0x22, 0x29, 0x41, 0x2c, 0x61, },

    /* 868a (34442) */
    .World5Areas = {0x2a, 0x31, 0x26, 0x62, },

    /* 868e (34446) */
    .World6Areas = {0x2e, 0x23, 0x2d, 0x60, },

    /* 8692 (34450) */
    .World7Areas = {0x33, 0x29, 0x1, 0x27, 0x64, },

    /* 8697 (34455) */
    .World8Areas = {0x30, 0x32, 0x21, 0x65, },
// bonus area data offsets, included here for comparison purposes
// underground bonus area  - c2
// cloud area 1 (day)      - 2b
// cloud area 2 (night)    - 34
// water area (5-2/6-2)    - 00
// water area (8-4)        - 02
// warp zone area (4-2)    - 2f

    /* 869b (34459) */
    // bonus area data offsets, included here for comparison purposes
    // underground bonus area  - c2
    // cloud area 1 (day)      - 2b
    // cloud area 2 (night)    - 34
    // water area (5-2/6-2)    - 00
    // water area (8-4)        - 02
    // warp zone area (4-2)    - 2f
    .EnemyAddrHOffsets = {0x1f, 0x6, 0x1c, 0x0, },

    /* 869f (34463) */
    .EnemyDataAddrLow = {LO8(0x8000+offsetof(G, E_CastleArea1)), LO8(0x8000+offsetof(G, E_CastleArea2)), LO8(0x8000+offsetof(G, E_CastleArea3)), LO8(0x8000+offsetof(G, E_CastleArea4)), LO8(0x8000+offsetof(G, E_CastleArea5)), LO8(0x8000+offsetof(G, E_CastleArea6)), LO8(0x8000+offsetof(G, E_GroundArea1)), LO8(0x8000+offsetof(G, E_GroundArea2)), LO8(0x8000+offsetof(G, E_GroundArea3)), LO8(0x8000+offsetof(G, E_GroundArea4)), LO8(0x8000+offsetof(G, E_GroundArea5)), LO8(0x8000+offsetof(G, E_GroundArea6)), LO8(0x8000+offsetof(G, E_GroundArea7)), LO8(0x8000+offsetof(G, E_GroundArea8)), LO8(0x8000+offsetof(G, E_GroundArea9)), LO8(0x8000+offsetof(G, E_GroundArea10)), LO8(0x8000+offsetof(G, E_GroundArea11)), LO8(0x8000+offsetof(G, E_GroundArea12)), LO8(0x8000+offsetof(G, E_GroundArea13)), LO8(0x8000+offsetof(G, E_GroundArea14)), LO8(0x8000+offsetof(G, E_GroundArea15)), LO8(0x8000+offsetof(G, E_GroundArea16)), LO8(0x8000+offsetof(G, E_GroundArea17)), LO8(0x8000+offsetof(G, E_GroundArea18)), LO8(0x8000+offsetof(G, E_GroundArea19)), LO8(0x8000+offsetof(G, E_GroundArea20)), LO8(0x8000+offsetof(G, E_GroundArea21)), LO8(0x8000+offsetof(G, E_GroundArea22)), LO8(0x8000+offsetof(G, E_UndergroundArea1)), LO8(0x8000+offsetof(G, E_UndergroundArea2)), LO8(0x8000+offsetof(G, E_UndergroundArea3)), LO8(0x8000+offsetof(G, E_WaterArea1)), LO8(0x8000+offsetof(G, E_WaterArea2)), LO8(0x8000+offsetof(G, E_WaterArea3)), },

    /* 86c1 (34497) */
    .EnemyDataAddrHigh = {HI8(0x8000+offsetof(G, E_CastleArea1)), HI8(0x8000+offsetof(G, E_CastleArea2)), HI8(0x8000+offsetof(G, E_CastleArea3)), HI8(0x8000+offsetof(G, E_CastleArea4)), HI8(0x8000+offsetof(G, E_CastleArea5)), HI8(0x8000+offsetof(G, E_CastleArea6)), HI8(0x8000+offsetof(G, E_GroundArea1)), HI8(0x8000+offsetof(G, E_GroundArea2)), HI8(0x8000+offsetof(G, E_GroundArea3)), HI8(0x8000+offsetof(G, E_GroundArea4)), HI8(0x8000+offsetof(G, E_GroundArea5)), HI8(0x8000+offsetof(G, E_GroundArea6)), HI8(0x8000+offsetof(G, E_GroundArea7)), HI8(0x8000+offsetof(G, E_GroundArea8)), HI8(0x8000+offsetof(G, E_GroundArea9)), HI8(0x8000+offsetof(G, E_GroundArea10)), HI8(0x8000+offsetof(G, E_GroundArea11)), HI8(0x8000+offsetof(G, E_GroundArea12)), HI8(0x8000+offsetof(G, E_GroundArea13)), HI8(0x8000+offsetof(G, E_GroundArea14)), HI8(0x8000+offsetof(G, E_GroundArea15)), HI8(0x8000+offsetof(G, E_GroundArea16)), HI8(0x8000+offsetof(G, E_GroundArea17)), HI8(0x8000+offsetof(G, E_GroundArea18)), HI8(0x8000+offsetof(G, E_GroundArea19)), HI8(0x8000+offsetof(G, E_GroundArea20)), HI8(0x8000+offsetof(G, E_GroundArea21)), HI8(0x8000+offsetof(G, E_GroundArea22)), HI8(0x8000+offsetof(G, E_UndergroundArea1)), HI8(0x8000+offsetof(G, E_UndergroundArea2)), HI8(0x8000+offsetof(G, E_UndergroundArea3)), HI8(0x8000+offsetof(G, E_WaterArea1)), HI8(0x8000+offsetof(G, E_WaterArea2)), HI8(0x8000+offsetof(G, E_WaterArea3)), },

    /* 86e3 (34531) */
    .AreaDataHOffsets = {0x0, 0x3, 0x19, 0x1c, },

    /* 86e7 (34535) */
    .AreaDataAddrLow = {LO8(0x8000+offsetof(G, L_WaterArea1)), LO8(0x8000+offsetof(G, L_WaterArea2)), LO8(0x8000+offsetof(G, L_WaterArea3)), LO8(0x8000+offsetof(G, L_GroundArea1)), LO8(0x8000+offsetof(G, L_GroundArea2)), LO8(0x8000+offsetof(G, L_GroundArea3)), LO8(0x8000+offsetof(G, L_GroundArea4)), LO8(0x8000+offsetof(G, L_GroundArea5)), LO8(0x8000+offsetof(G, L_GroundArea6)), LO8(0x8000+offsetof(G, L_GroundArea7)), LO8(0x8000+offsetof(G, L_GroundArea8)), LO8(0x8000+offsetof(G, L_GroundArea9)), LO8(0x8000+offsetof(G, L_GroundArea10)), LO8(0x8000+offsetof(G, L_GroundArea11)), LO8(0x8000+offsetof(G, L_GroundArea12)), LO8(0x8000+offsetof(G, L_GroundArea13)), LO8(0x8000+offsetof(G, L_GroundArea14)), LO8(0x8000+offsetof(G, L_GroundArea15)), LO8(0x8000+offsetof(G, L_GroundArea16)), LO8(0x8000+offsetof(G, L_GroundArea17)), LO8(0x8000+offsetof(G, L_GroundArea18)), LO8(0x8000+offsetof(G, L_GroundArea19)), LO8(0x8000+offsetof(G, L_GroundArea20)), LO8(0x8000+offsetof(G, L_GroundArea21)), LO8(0x8000+offsetof(G, L_GroundArea22)), LO8(0x8000+offsetof(G, L_UndergroundArea1)), LO8(0x8000+offsetof(G, L_UndergroundArea2)), LO8(0x8000+offsetof(G, L_UndergroundArea3)), LO8(0x8000+offsetof(G, L_CastleArea1)), LO8(0x8000+offsetof(G, L_CastleArea2)), LO8(0x8000+offsetof(G, L_CastleArea3)), LO8(0x8000+offsetof(G, L_CastleArea4)), LO8(0x8000+offsetof(G, L_CastleArea5)), LO8(0x8000+offsetof(G, L_CastleArea6)), },

    /* 8709 (34569) */
    .AreaDataAddrHigh = {HI8(0x8000+offsetof(G, L_WaterArea1)), HI8(0x8000+offsetof(G, L_WaterArea2)), HI8(0x8000+offsetof(G, L_WaterArea3)), HI8(0x8000+offsetof(G, L_GroundArea1)), HI8(0x8000+offsetof(G, L_GroundArea2)), HI8(0x8000+offsetof(G, L_GroundArea3)), HI8(0x8000+offsetof(G, L_GroundArea4)), HI8(0x8000+offsetof(G, L_GroundArea5)), HI8(0x8000+offsetof(G, L_GroundArea6)), HI8(0x8000+offsetof(G, L_GroundArea7)), HI8(0x8000+offsetof(G, L_GroundArea8)), HI8(0x8000+offsetof(G, L_GroundArea9)), HI8(0x8000+offsetof(G, L_GroundArea10)), HI8(0x8000+offsetof(G, L_GroundArea11)), HI8(0x8000+offsetof(G, L_GroundArea12)), HI8(0x8000+offsetof(G, L_GroundArea13)), HI8(0x8000+offsetof(G, L_GroundArea14)), HI8(0x8000+offsetof(G, L_GroundArea15)), HI8(0x8000+offsetof(G, L_GroundArea16)), HI8(0x8000+offsetof(G, L_GroundArea17)), HI8(0x8000+offsetof(G, L_GroundArea18)), HI8(0x8000+offsetof(G, L_GroundArea19)), HI8(0x8000+offsetof(G, L_GroundArea20)), HI8(0x8000+offsetof(G, L_GroundArea21)), HI8(0x8000+offsetof(G, L_GroundArea22)), HI8(0x8000+offsetof(G, L_UndergroundArea1)), HI8(0x8000+offsetof(G, L_UndergroundArea2)), HI8(0x8000+offsetof(G, L_UndergroundArea3)), HI8(0x8000+offsetof(G, L_CastleArea1)), HI8(0x8000+offsetof(G, L_CastleArea2)), HI8(0x8000+offsetof(G, L_CastleArea3)), HI8(0x8000+offsetof(G, L_CastleArea4)), HI8(0x8000+offsetof(G, L_CastleArea5)), HI8(0x8000+offsetof(G, L_CastleArea6)), },
// ENEMY OBJECT DATA
// level 1-4/6-4

    /* 872b (34603) */
    // ENEMY OBJECT DATA
    // level 1-4/6-4
    .E_CastleArea1 = {0x76, 0xdd, 0xbb, 0x4c, 0xea, 0x1d, 0x1b, 0xcc, 0x56, 0x5d, 0x16, 0x9d, 0xc6, 0x1d, 0x36, 0x9d, 0xc9, 0x1d, 0x4, 0xdb, 0x49, 0x1d, 0x84, 0x1b, 0xc9, 0x5d, 0x88, 0x95, 0xf, 0x8, 0x30, 0x4c, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },
// level 4-4

    /* 8752 (34642) */
    // level 4-4
    .E_CastleArea2 = {0xf, 0x3, 0x56, 0x1b, 0xc9, 0x1b, 0xf, 0x7, 0x36, 0x1b, 0xaa, 0x1b, 0x48, 0x95, 0xf, 0xa, 0x2a, 0x1b, 0x5b, 0xc, 0x78, 0x2d, 0x90, 0xb5, 0xff, },
// level 2-4/5-4

    /* 876b (34667) */
    // level 2-4/5-4
    .E_CastleArea3 = {0xb, 0x8c, 0x4b, 0x4c, 0x77, 0x5f, 0xeb, 0xc, 0xbd, 0xdb, 0x19, 0x9d, 0x75, 0x1d, 0x7d, 0x5b, 0xd9, 0x1d, 0x3d, 0xdd, 0x99, 0x1d, 0x26, 0x9d, 0x5a, 0x2b, 0x8a, 0x2c, 0xca, 0x1b, 0x20, 0x95, 0x7b, 0x5c, 0xdb, 0x4c, 0x1b, 0xcc, 0x3b, 0xcc, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },
// level 3-4

    /* 879a (34714) */
    // level 3-4
    .E_CastleArea4 = {0xb, 0x8c, 0x3b, 0x1d, 0x8b, 0x1d, 0xab, 0xc, 0xdb, 0x1d, 0xf, 0x3, 0x65, 0x1d, 0x6b, 0x1b, 0x5, 0x9d, 0xb, 0x1b, 0x5, 0x9b, 0xb, 0x1d, 0x8b, 0xc, 0x1b, 0x8c, 0x70, 0x15, 0x7b, 0xc, 0xdb, 0xc, 0xf, 0x8, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },
// level 7-4

    /* 87c5 (34757) */
    // level 7-4
    .E_CastleArea5 = {0x27, 0xa9, 0x4b, 0xc, 0x68, 0x29, 0xf, 0x6, 0x77, 0x1b, 0xf, 0xb, 0x60, 0x15, 0x4b, 0x8c, 0x78, 0x2d, 0x90, 0xb5, 0xff, },
// level 8-4

    /* 87da (34778) */
    // level 8-4
    .E_CastleArea6 = {0xf, 0x3, 0x8e, 0x65, 0xe1, 0xbb, 0x38, 0x6d, 0xa8, 0x3e, 0xe5, 0xe7, 0xf, 0x8, 0xb, 0x2, 0x2b, 0x2, 0x5e, 0x65, 0xe1, 0xbb, 0xe, 0xdb, 0xe, 0xbb, 0x8e, 0xdb, 0xe, 0xfe, 0x65, 0xec, 0xf, 0xd, 0x4e, 0x65, 0xe1, 0xf, 0xe, 0x4e, 0x2, 0xe0, 0xf, 0x10, 0xfe, 0xe5, 0xe1, 0x1b, 0x85, 0x7b, 0xc, 0x5b, 0x95, 0x78, 0x2d, 0x90, 0xb5, 0xff, },
// level 3-3

    /* 8814 (34836) */
    // level 3-3
    .E_GroundArea1 = {0xa5, 0x86, 0xe4, 0x28, 0x18, 0xa8, 0x45, 0x83, 0x69, 0x3, 0xc6, 0x29, 0x9b, 0x83, 0x16, 0xa4, 0x88, 0x24, 0xe9, 0x28, 0x5, 0xa8, 0x7b, 0x28, 0x24, 0x8f, 0xc8, 0x3, 0xe8, 0x3, 0x46, 0xa8, 0x85, 0x24, 0xc8, 0x24, 0xff, },
// level 8-3

    /* 8839 (34873) */
    // level 8-3
    .E_GroundArea2 = {0xeb, 0x8e, 0xf, 0x3, 0xfb, 0x5, 0x17, 0x85, 0xdb, 0x8e, 0xf, 0x7, 0x57, 0x5, 0x7b, 0x5, 0x9b, 0x80, 0x2b, 0x85, 0xfb, 0x5, 0xf, 0xb, 0x1b, 0x5, 0x9b, 0x5, 0xff, },
// level 4-1

    /* 8856 (34902) */
    // level 4-1
    .E_GroundArea3 = {0x2e, 0xc2, 0x66, 0xe2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xf, 0xc, 0x12, 0x11, 0xff, },
// level 6-2

    /* 8864 (34916) */
    // level 6-2
    .E_GroundArea4 = {0xe, 0xc2, 0xa8, 0xab, 0x0, 0xbb, 0x8e, 0x6b, 0x82, 0xde, 0x0, 0xa0, 0x33, 0x86, 0x43, 0x6, 0x3e, 0xb4, 0xa0, 0xcb, 0x2, 0xf, 0x7, 0x7e, 0x42, 0xa6, 0x83, 0x2, 0xf, 0xa, 0x3b, 0x2, 0xcb, 0x37, 0xf, 0xc, 0xe3, 0xe, 0xff, },
// level 3-1

    /* 888b (34955) */
    // level 3-1
    .E_GroundArea5 = {0x9b, 0x8e, 0xca, 0xe, 0xee, 0x42, 0x44, 0x5b, 0x86, 0x80, 0xb8, 0x1b, 0x80, 0x50, 0xba, 0x10, 0xb7, 0x5b, 0x0, 0x17, 0x85, 0x4b, 0x5, 0xfe, 0x34, 0x40, 0xb7, 0x86, 0xc6, 0x6, 0x5b, 0x80, 0x83, 0x0, 0xd0, 0x38, 0x5b, 0x8e, 0x8a, 0xe, 0xa6, 0x0, 0xbb, 0xe, 0xc5, 0x80, 0xf3, 0x0, 0xff, },
// level 1-1

    /* 88bc (35004) */
    // level 1-1
    .E_GroundArea6 = {0x1e, 0xc2, 0x0, 0x6b, 0x6, 0x8b, 0x86, 0x63, 0xb7, 0xf, 0x5, 0x3, 0x6, 0x23, 0x6, 0x4b, 0xb7, 0xbb, 0x0, 0x5b, 0xb7, 0xfb, 0x37, 0x3b, 0xb7, 0xf, 0xb, 0x1b, 0x37, 0xff, },
// level 1-3/5-3

    /* 88da (35034) */
    // level 1-3/5-3
    .E_GroundArea7 = {0x2b, 0xd7, 0xe3, 0x3, 0xc2, 0x86, 0xe2, 0x6, 0x76, 0xa5, 0xa3, 0x8f, 0x3, 0x86, 0x2b, 0x57, 0x68, 0x28, 0xe9, 0x28, 0xe5, 0x83, 0x24, 0x8f, 0x36, 0xa8, 0x5b, 0x3, 0xff, },
// level 2-3/7-3

    /* 88f7 (35063) */
    // level 2-3/7-3
    .E_GroundArea8 = {0xf, 0x2, 0x78, 0x40, 0x48, 0xce, 0xf8, 0xc3, 0xf8, 0xc3, 0xf, 0x7, 0x7b, 0x43, 0xc6, 0xd0, 0xf, 0x8a, 0xc8, 0x50, 0xff, },
// level 2-1

    /* 890c (35084) */
    // level 2-1
    .E_GroundArea9 = {0x85, 0x86, 0xb, 0x80, 0x1b, 0x0, 0xdb, 0x37, 0x77, 0x80, 0xeb, 0x37, 0xfe, 0x2b, 0x20, 0x2b, 0x80, 0x7b, 0x38, 0xab, 0xb8, 0x77, 0x86, 0xfe, 0x42, 0x20, 0x49, 0x86, 0x8b, 0x6, 0x9b, 0x80, 0x7b, 0x8e, 0x5b, 0xb7, 0x9b, 0xe, 0xbb, 0xe, 0x9b, 0x80, },
// end of data terminator here is also used by pipe intro area

    /* 8936 (35126) */
    // end of data terminator here is also used by pipe intro area
    .E_GroundArea10 = {0xff, },
// level 5-1

    /* 8937 (35127) */
    // level 5-1
    .E_GroundArea11 = {0xb, 0x80, 0x60, 0x38, 0x10, 0xb8, 0xc0, 0x3b, 0xdb, 0x8e, 0x40, 0xb8, 0xf0, 0x38, 0x7b, 0x8e, 0xa0, 0xb8, 0xc0, 0xb8, 0xfb, 0x0, 0xa0, 0xb8, 0x30, 0xbb, 0xee, 0x42, 0x88, 0xf, 0xb, 0x2b, 0xe, 0x67, 0xe, 0xff, },
// cloud level used in levels 2-1 and 5-2

    /* 895b (35163) */
    // cloud level used in levels 2-1 and 5-2
    .E_GroundArea12 = {0xa, 0xaa, 0xe, 0x28, 0x2a, 0xe, 0x31, 0x88, 0xff, },
// level 4-3

    /* 8964 (35172) */
    // level 4-3
    .E_GroundArea13 = {0xc7, 0x83, 0xd7, 0x3, 0x42, 0x8f, 0x7a, 0x3, 0x5, 0xa4, 0x78, 0x24, 0xa6, 0x25, 0xe4, 0x25, 0x4b, 0x83, 0xe3, 0x3, 0x5, 0xa4, 0x89, 0x24, 0xb5, 0x24, 0x9, 0xa4, 0x65, 0x24, 0xc9, 0x24, 0xf, 0x8, 0x85, 0x25, 0xff, },
// level 6-3

    /* 8989 (35209) */
    // level 6-3
    .E_GroundArea14 = {0xcd, 0xa5, 0xb5, 0xa8, 0x7, 0xa8, 0x76, 0x28, 0xcc, 0x25, 0x65, 0xa4, 0xa9, 0x24, 0xe5, 0x24, 0x19, 0xa4, 0xf, 0x7, 0x95, 0x28, 0xe6, 0x24, 0x19, 0xa4, 0xd7, 0x29, 0x16, 0xa9, 0x58, 0x29, 0x97, 0x29, 0xff, },
// level 6-1

    /* 89ac (35244) */
    // level 6-1
    .E_GroundArea15 = {0xf, 0x2, 0x2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xff, },
// warp zone area used in level 4-2

    /* 89b5 (35253) */
    // warp zone area used in level 4-2
    .E_GroundArea16 = {0xff, },
// level 8-1

    /* 89b6 (35254) */
    // level 8-1
    .E_GroundArea17 = {0x2b, 0x82, 0xab, 0x38, 0xde, 0x42, 0xe2, 0x1b, 0xb8, 0xeb, 0x3b, 0xdb, 0x80, 0x8b, 0xb8, 0x1b, 0x82, 0xfb, 0xb8, 0x7b, 0x80, 0xfb, 0x3c, 0x5b, 0xbc, 0x7b, 0xb8, 0x1b, 0x8e, 0xcb, 0xe, 0x1b, 0x8e, 0xf, 0xd, 0x2b, 0x3b, 0xbb, 0xb8, 0xeb, 0x82, 0x4b, 0xb8, 0xbb, 0x38, 0x3b, 0xb7, 0xbb, 0x2, 0xf, 0x13, 0x1b, 0x0, 0xcb, 0x80, 0x6b, 0xbc, 0xff, },
// level 5-2

    /* 89f0 (35312) */
    // level 5-2
    .E_GroundArea18 = {0x7b, 0x80, 0xae, 0x0, 0x80, 0x8b, 0x8e, 0xe8, 0x5, 0xf9, 0x86, 0x17, 0x86, 0x16, 0x85, 0x4e, 0x2b, 0x80, 0xab, 0x8e, 0x87, 0x85, 0xc3, 0x5, 0x8b, 0x82, 0x9b, 0x2, 0xab, 0x2, 0xbb, 0x86, 0xcb, 0x6, 0xd3, 0x3, 0x3b, 0x8e, 0x6b, 0xe, 0xa7, 0x8e, 0xff, },
// level 8-2

    /* 8a1b (35355) */
    // level 8-2
    .E_GroundArea19 = {0x29, 0x8e, 0x52, 0x11, 0x83, 0xe, 0xf, 0x3, 0x9b, 0xe, 0x2b, 0x8e, 0x5b, 0xe, 0xcb, 0x8e, 0xfb, 0xe, 0xfb, 0x82, 0x9b, 0x82, 0xbb, 0x2, 0xfe, 0x42, 0xe8, 0xbb, 0x8e, 0xf, 0xa, 0xab, 0xe, 0xcb, 0xe, 0xf9, 0xe, 0x88, 0x86, 0xa6, 0x6, 0xdb, 0x2, 0xb6, 0x8e, 0xff, },
// level 7-1

    /* 8a49 (35401) */
    // level 7-1
    .E_GroundArea20 = {0xab, 0xce, 0xde, 0x42, 0xc0, 0xcb, 0xce, 0x5b, 0x8e, 0x1b, 0xce, 0x4b, 0x85, 0x67, 0x45, 0xf, 0x7, 0x2b, 0x0, 0x7b, 0x85, 0x97, 0x5, 0xf, 0xa, 0x92, 0x2, 0xff, },
// cloud level used in levels 3-1 and 6-2

    /* 8a65 (35429) */
    // cloud level used in levels 3-1 and 6-2
    .E_GroundArea21 = {0xa, 0xaa, 0xe, 0x24, 0x4a, 0x1e, 0x23, 0xaa, 0xff, },
// level 3-2

    /* 8a6e (35438) */
    // level 3-2
    .E_GroundArea22 = {0x1b, 0x80, 0xbb, 0x38, 0x4b, 0xbc, 0xeb, 0x3b, 0xf, 0x4, 0x2b, 0x0, 0xab, 0x38, 0xeb, 0x0, 0xcb, 0x8e, 0xfb, 0x80, 0xab, 0xb8, 0x6b, 0x80, 0xfb, 0x3c, 0x9b, 0xbb, 0x5b, 0xbc, 0xfb, 0x0, 0x6b, 0xb8, 0xfb, 0x38, 0xff, },
// level 1-2

    /* 8a93 (35475) */
    // level 1-2
    .E_UndergroundArea1 = {0xb, 0x86, 0x1a, 0x6, 0xdb, 0x6, 0xde, 0xc2, 0x2, 0xf0, 0x3b, 0xbb, 0x80, 0xeb, 0x6, 0xb, 0x86, 0x93, 0x6, 0xf0, 0x39, 0xf, 0x6, 0x60, 0xb8, 0x1b, 0x86, 0xa0, 0xb9, 0xb7, 0x27, 0xbd, 0x27, 0x2b, 0x83, 0xa1, 0x26, 0xa9, 0x26, 0xee, 0x25, 0xb, 0x27, 0xb4, 0xff, },
// level 4-2

    /* 8ac0 (35520) */
    // level 4-2
    .E_UndergroundArea2 = {0xf, 0x2, 0x1e, 0x2f, 0x60, 0xe0, 0x3a, 0xa5, 0xa7, 0xdb, 0x80, 0x3b, 0x82, 0x8b, 0x2, 0xfe, 0x42, 0x68, 0x70, 0xbb, 0x25, 0xa7, 0x2c, 0x27, 0xb2, 0x26, 0xb9, 0x26, 0x9b, 0x80, 0xa8, 0x82, 0xb5, 0x27, 0xbc, 0x27, 0xb0, 0xbb, 0x3b, 0x82, 0x87, 0x34, 0xee, 0x25, 0x6b, 0xff, },
// underground bonus rooms area used in many levels

    /* 8aee (35566) */
    // underground bonus rooms area used in many levels
    .E_UndergroundArea3 = {0x1e, 0xa5, 0xa, 0x2e, 0x28, 0x27, 0x2e, 0x33, 0xc7, 0xf, 0x3, 0x1e, 0x40, 0x7, 0x2e, 0x30, 0xe7, 0xf, 0x5, 0x1e, 0x24, 0x44, 0xf, 0x7, 0x1e, 0x22, 0x6a, 0x2e, 0x23, 0xab, 0xf, 0x9, 0x1e, 0x41, 0x68, 0x1e, 0x2a, 0x8a, 0x2e, 0x23, 0xa2, 0x2e, 0x32, 0xea, 0xff, },
// water area used in levels 5-2 and 6-2

    /* 8b1b (35611) */
    // water area used in levels 5-2 and 6-2
    .E_WaterArea1 = {0x3b, 0x87, 0x66, 0x27, 0xcc, 0x27, 0xee, 0x31, 0x87, 0xee, 0x23, 0xa7, 0x3b, 0x87, 0xdb, 0x7, 0xff, },
// level 2-2/7-2

    /* 8b2c (35628) */
    // level 2-2/7-2
    .E_WaterArea2 = {0xf, 0x1, 0x2e, 0x25, 0x2b, 0x2e, 0x25, 0x4b, 0x4e, 0x25, 0xcb, 0x6b, 0x7, 0x97, 0x47, 0xe9, 0x87, 0x47, 0xc7, 0x7a, 0x7, 0xd6, 0xc7, 0x78, 0x7, 0x38, 0x87, 0xab, 0x47, 0xe3, 0x7, 0x9b, 0x87, 0xf, 0x9, 0x68, 0x47, 0xdb, 0xc7, 0x3b, 0xc7, 0xff, },
// water area used in level 8-4

    /* 8b56 (35670) */
    // water area used in level 8-4
    .E_WaterArea3 = {0x47, 0x9b, 0xcb, 0x7, 0xfa, 0x1d, 0x86, 0x9b, 0x3a, 0x87, 0x56, 0x7, 0x88, 0x1b, 0x7, 0x9d, 0x2e, 0x65, 0xf0, 0xff, },
// AREA OBJECT DATA
// level 1-4/6-4

    /* 8b6a (35690) */
    // AREA OBJECT DATA
    // level 1-4/6-4
    .L_CastleArea1 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xce, 0x3, 0xdc, 0x51, 0xee, 0x7, 0x73, 0xe0, 0x74, 0xa, 0x7e, 0x6, 0x9e, 0xa, 0xce, 0x6, 0xe4, 0x0, 0xe8, 0xa, 0xfe, 0xa, 0x2e, 0x89, 0x4e, 0xb, 0x54, 0xa, 0x14, 0x8a, 0xc4, 0xa, 0x34, 0x8a, 0x7e, 0x6, 0xc7, 0xa, 0x1, 0xe0, 0x2, 0xa, 0x47, 0xa, 0x81, 0x60, 0x82, 0xa, 0xc7, 0xa, 0xe, 0x87, 0x7e, 0x2, 0xa7, 0x2, 0xb3, 0x2, 0xd7, 0x2, 0xe3, 0x2, 0x7, 0x82, 0x13, 0x2, 0x3e, 0x6, 0x7e, 0x2, 0xae, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 4-4

    /* 8bcb (35787) */
    // level 4-4
    .L_CastleArea2 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0x68, 0x64, 0x98, 0x64, 0xa8, 0x64, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x1, 0x1e, 0xe, 0x7e, 0x2, 0x94, 0x63, 0xb4, 0x63, 0xd4, 0x63, 0xf4, 0x63, 0x14, 0xe3, 0x2e, 0xe, 0x5e, 0x2, 0x64, 0x35, 0x88, 0x72, 0xbe, 0xe, 0xd, 0x4, 0xae, 0x2, 0xce, 0x8, 0xcd, 0x4b, 0xfe, 0x2, 0xd, 0x5, 0x68, 0x31, 0x7e, 0xa, 0x96, 0x31, 0xa9, 0x63, 0xa8, 0x33, 0xd5, 0x30, 0xee, 0x2, 0xe6, 0x62, 0xf4, 0x61, 0x4, 0xb1, 0x8, 0x3f, 0x44, 0x33, 0x94, 0x63, 0xa4, 0x31, 0xe4, 0x31, 0x4, 0xbf, 0x8, 0x3f, 0x4, 0xbf, 0x8, 0x3f, 0xcd, 0x4b, 0x3, 0xe4, 0xe, 0x3, 0x2e, 0x1, 0x7e, 0x6, 0xbe, 0x2, 0xde, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 2-4/5-4

    /* 8c4a (35914) */
    // level 2-4/5-4
    .L_CastleArea3 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x0, 0x27, 0xb1, 0x65, 0x32, 0x75, 0xa, 0x71, 0x0, 0xb7, 0x31, 0x8, 0xe4, 0x18, 0x64, 0x1e, 0x4, 0x57, 0x3b, 0xbb, 0xa, 0x17, 0x8a, 0x27, 0x3a, 0x73, 0xa, 0x7b, 0xa, 0xd7, 0xa, 0xe7, 0x3a, 0x3b, 0x8a, 0x97, 0xa, 0xfe, 0x8, 0x24, 0x8a, 0x2e, 0x0, 0x3e, 0x40, 0x38, 0x64, 0x6f, 0x0, 0x9f, 0x0, 0xbe, 0x43, 0xc8, 0xa, 0xc9, 0x63, 0xce, 0x7, 0xfe, 0x7, 0x2e, 0x81, 0x66, 0x42, 0x6a, 0x42, 0x79, 0xa, 0xbe, 0x0, 0xc8, 0x64, 0xf8, 0x64, 0x8, 0xe4, 0x2e, 0x7, 0x7e, 0x3, 0x9e, 0x7, 0xbe, 0x3, 0xde, 0x7, 0xfe, 0xa, 0x3, 0xa5, 0xd, 0x44, 0xcd, 0x43, 0xce, 0x9, 0xdd, 0x42, 0xde, 0xb, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 3-4

    /* 8cbd (36029) */
    // level 3-4
    .L_CastleArea4 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x6, 0xc, 0x81, 0x39, 0xa, 0x5c, 0x1, 0x89, 0xa, 0xac, 0x1, 0xd9, 0xa, 0xfc, 0x1, 0x2e, 0x83, 0xa7, 0x1, 0xb7, 0x0, 0xc7, 0x1, 0xde, 0xa, 0xfe, 0x2, 0x4e, 0x83, 0x5a, 0x32, 0x63, 0xa, 0x69, 0xa, 0x7e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x1e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x14, 0x42, 0x1e, 0x2, 0x7e, 0xa, 0x9e, 0x7, 0xfe, 0xa, 0x2e, 0x86, 0x5e, 0xa, 0x8e, 0x6, 0xbe, 0xa, 0xee, 0x7, 0x3e, 0x83, 0x5e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0x41, 0x52, 0x51, 0x52, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 7-4

    /* 8d2a (36138) */
    // level 7-4
    .L_CastleArea5 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0xa, 0xae, 0x86, 0xbe, 0x7, 0xfe, 0x2, 0xd, 0x2, 0x27, 0x32, 0x46, 0x61, 0x55, 0x62, 0x5e, 0xe, 0x1e, 0x82, 0x68, 0x3c, 0x74, 0x3a, 0x7d, 0x4b, 0x5e, 0x8e, 0x7d, 0x4b, 0x7e, 0x82, 0x84, 0x62, 0x94, 0x61, 0xa4, 0x31, 0xbd, 0x4b, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x6, 0x34, 0x31, 0x3e, 0xa, 0x64, 0x32, 0x75, 0xa, 0x7b, 0x61, 0xa4, 0x33, 0xae, 0x2, 0xde, 0xe, 0x3e, 0x82, 0x64, 0x32, 0x78, 0x32, 0xb4, 0x36, 0xc8, 0x36, 0xdd, 0x4b, 0x44, 0xb2, 0x58, 0x32, 0x94, 0x63, 0xa4, 0x3e, 0xba, 0x30, 0xc9, 0x61, 0xce, 0x6, 0xdd, 0x4b, 0xce, 0x86, 0xdd, 0x4b, 0xfe, 0x2, 0x2e, 0x86, 0x5e, 0x2, 0x7e, 0x6, 0xfe, 0x2, 0x1e, 0x86, 0x3e, 0x2, 0x5e, 0x6, 0x7e, 0x2, 0x9e, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 8-4

    /* 8db5 (36277) */
    // level 8-4
    .L_CastleArea6 = {0x5b, 0x6, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0xae, 0x2, 0xd, 0x1, 0x39, 0x73, 0xd, 0x3, 0x39, 0x7b, 0x4d, 0x4b, 0xde, 0x6, 0x1e, 0x8a, 0xae, 0x6, 0xc4, 0x33, 0x16, 0xfe, 0xa5, 0x77, 0xfe, 0x2, 0xfe, 0x82, 0xd, 0x7, 0x39, 0x73, 0xa8, 0x74, 0xed, 0x4b, 0x49, 0xfb, 0xe8, 0x74, 0xfe, 0xa, 0x2e, 0x82, 0x67, 0x2, 0x84, 0x7a, 0x87, 0x31, 0xd, 0xb, 0xfe, 0x2, 0xd, 0xc, 0x39, 0x73, 0x5e, 0x6, 0xc6, 0x76, 0x45, 0xff, 0xbe, 0xa, 0xdd, 0x48, 0xfe, 0x6, 0x3d, 0xcb, 0x46, 0x7e, 0xad, 0x4a, 0xfe, 0x82, 0x39, 0xf3, 0xa9, 0x7b, 0x4e, 0x8a, 0x9e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },
// level 3-3

    /* 8e26 (36390) */
    // level 3-3
    .L_GroundArea1 = {0x94, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x28, 0x94, 0x65, 0x15, 0xeb, 0x12, 0xfa, 0x41, 0x4a, 0x96, 0x54, 0x40, 0xa4, 0x42, 0xb7, 0x13, 0xe9, 0x19, 0xf5, 0x15, 0x11, 0x80, 0x47, 0x42, 0x71, 0x13, 0x80, 0x41, 0x15, 0x92, 0x1b, 0x1f, 0x24, 0x40, 0x55, 0x12, 0x64, 0x40, 0x95, 0x12, 0xa4, 0x40, 0xd2, 0x12, 0xe1, 0x40, 0x13, 0xc0, 0x2c, 0x17, 0x2f, 0x12, 0x49, 0x13, 0x83, 0x40, 0x9f, 0x14, 0xa3, 0x40, 0x17, 0x92, 0x83, 0x13, 0x92, 0x41, 0xb9, 0x14, 0xc5, 0x12, 0xc8, 0x40, 0xd4, 0x40, 0x4b, 0x92, 0x78, 0x1b, 0x9c, 0x94, 0x9f, 0x11, 0xdf, 0x14, 0xfe, 0x11, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd, },
// level 8-3

    /* 8e89 (36489) */
    // level 8-3
    .L_GroundArea2 = {0x90, 0xb1, 0xf, 0x26, 0x29, 0x91, 0x7e, 0x42, 0xfe, 0x40, 0x28, 0x92, 0x4e, 0x42, 0x2e, 0xc0, 0x57, 0x73, 0xc3, 0x25, 0xc7, 0x27, 0x23, 0x84, 0x33, 0x20, 0x5c, 0x1, 0x77, 0x63, 0x88, 0x62, 0x99, 0x61, 0xaa, 0x60, 0xbc, 0x1, 0xee, 0x42, 0x4e, 0xc0, 0x69, 0x11, 0x7e, 0x42, 0xde, 0x40, 0xf8, 0x62, 0xe, 0xc2, 0xae, 0x40, 0xd7, 0x63, 0xe7, 0x63, 0x33, 0xa7, 0x37, 0x27, 0x43, 0x4, 0xcc, 0x1, 0xe7, 0x73, 0xc, 0x81, 0x3e, 0x42, 0xd, 0xa, 0x5e, 0x40, 0x88, 0x72, 0xbe, 0x42, 0xe7, 0x87, 0xfe, 0x40, 0x39, 0xe1, 0x4e, 0x0, 0x69, 0x60, 0x87, 0x60, 0xa5, 0x60, 0xc3, 0x31, 0xfe, 0x31, 0x6d, 0xc1, 0xbe, 0x42, 0xef, 0x20, 0xfd, },
// level 4-1

    /* 8ef2 (36594) */
    // level 4-1
    .L_GroundArea3 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x40, 0x58, 0xf2, 0x93, 0x1, 0x97, 0x0, 0xc, 0x81, 0x97, 0x40, 0xa6, 0x41, 0xc7, 0x40, 0xd, 0x4, 0x3, 0x1, 0x7, 0x1, 0x23, 0x1, 0x27, 0x1, 0xec, 0x3, 0xac, 0xf3, 0xc3, 0x3, 0x78, 0xe2, 0x94, 0x43, 0x47, 0xf3, 0x74, 0x43, 0x47, 0xfb, 0x74, 0x43, 0x2c, 0xf1, 0x4c, 0x63, 0x47, 0x0, 0x57, 0x21, 0x5c, 0x1, 0x7c, 0x72, 0x39, 0xf1, 0xec, 0x2, 0x4c, 0x81, 0xd8, 0x62, 0xec, 0x1, 0xd, 0xd, 0xf, 0x38, 0xc7, 0x7, 0xed, 0x4a, 0x1d, 0xc1, 0x5f, 0x26, 0xfd, },
// level 6-2

    /* 8f45 (36677) */
    // level 6-2
    .L_GroundArea4 = {0x54, 0x21, 0xf, 0x26, 0xa7, 0x22, 0x37, 0xfb, 0x73, 0x20, 0x83, 0x7, 0x87, 0x2, 0x93, 0x20, 0xc7, 0x73, 0x4, 0xf1, 0x6, 0x31, 0x39, 0x71, 0x59, 0x71, 0xe7, 0x73, 0x37, 0xa0, 0x47, 0x4, 0x86, 0x7c, 0xe5, 0x71, 0xe7, 0x31, 0x33, 0xa4, 0x39, 0x71, 0xa9, 0x71, 0xd3, 0x23, 0x8, 0xf2, 0x13, 0x5, 0x27, 0x2, 0x49, 0x71, 0x75, 0x75, 0xe8, 0x72, 0x67, 0xf3, 0x99, 0x71, 0xe7, 0x20, 0xf4, 0x72, 0xf7, 0x31, 0x17, 0xa0, 0x33, 0x20, 0x39, 0x71, 0x73, 0x28, 0xbc, 0x5, 0x39, 0xf1, 0x79, 0x71, 0xa6, 0x21, 0xc3, 0x6, 0xd3, 0x20, 0xdc, 0x0, 0xfc, 0x0, 0x7, 0xa2, 0x13, 0x21, 0x5f, 0x32, 0x8c, 0x0, 0x98, 0x7a, 0xc7, 0x63, 0xd9, 0x61, 0x3, 0xa2, 0x7, 0x22, 0x74, 0x72, 0x77, 0x31, 0xe7, 0x73, 0x39, 0xf1, 0x58, 0x72, 0x77, 0x73, 0xd8, 0x72, 0x7f, 0xb1, 0x97, 0x73, 0xb6, 0x64, 0xc5, 0x65, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// level 3-1

    /* 8fd4 (36820) */
    // level 3-1
    .L_GroundArea5 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x66, 0x7, 0x81, 0x36, 0x1, 0x66, 0x0, 0xa7, 0x22, 0x8, 0xf2, 0x67, 0x7b, 0xdc, 0x2, 0x98, 0xf2, 0xd7, 0x20, 0x39, 0xf1, 0x9f, 0x33, 0xdc, 0x27, 0xdc, 0x57, 0x23, 0x83, 0x57, 0x63, 0x6c, 0x51, 0x87, 0x63, 0x99, 0x61, 0xa3, 0x6, 0xb3, 0x21, 0x77, 0xf3, 0xf3, 0x21, 0xf7, 0x2a, 0x13, 0x81, 0x23, 0x22, 0x53, 0x0, 0x63, 0x22, 0xe9, 0xb, 0xc, 0x83, 0x13, 0x21, 0x16, 0x22, 0x33, 0x5, 0x8f, 0x35, 0xec, 0x1, 0x63, 0xa0, 0x67, 0x20, 0x73, 0x1, 0x77, 0x1, 0x83, 0x20, 0x87, 0x20, 0xb3, 0x20, 0xb7, 0x20, 0xc3, 0x1, 0xc7, 0x0, 0xd3, 0x20, 0xd7, 0x20, 0x67, 0xa0, 0x77, 0x7, 0x87, 0x22, 0xe8, 0x62, 0xf5, 0x65, 0x1c, 0x82, 0x7f, 0x38, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// level 1-1

    /* 9049 (36937) */
    // level 1-1
    .L_GroundArea6 = {0x50, 0x21, 0x7, 0x81, 0x47, 0x24, 0x57, 0x0, 0x63, 0x1, 0x77, 0x1, 0xc9, 0x71, 0x68, 0xf2, 0xe7, 0x73, 0x97, 0xfb, 0x6, 0x83, 0x5c, 0x1, 0xd7, 0x22, 0xe7, 0x0, 0x3, 0xa7, 0x6c, 0x2, 0xb3, 0x22, 0xe3, 0x1, 0xe7, 0x7, 0x47, 0xa0, 0x57, 0x6, 0xa7, 0x1, 0xd3, 0x0, 0xd7, 0x1, 0x7, 0x81, 0x67, 0x20, 0x93, 0x22, 0x3, 0xa3, 0x1c, 0x61, 0x17, 0x21, 0x6f, 0x33, 0xc7, 0x63, 0xd8, 0x62, 0xe9, 0x61, 0xfa, 0x60, 0x4f, 0xb3, 0x87, 0x63, 0x9c, 0x1, 0xb7, 0x63, 0xc8, 0x62, 0xd9, 0x61, 0xea, 0x60, 0x39, 0xf1, 0x87, 0x21, 0xa7, 0x1, 0xb7, 0x20, 0x39, 0xf1, 0x5f, 0x38, 0x6d, 0xc1, 0xaf, 0x26, 0xfd, },
// level 1-3/5-3

    /* 90ae (37038) */
    // level 1-3/5-3
    .L_GroundArea7 = {0x90, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2a, 0x93, 0x87, 0x17, 0xa3, 0x14, 0xb2, 0x42, 0xa, 0x92, 0x19, 0x40, 0x36, 0x14, 0x50, 0x41, 0x82, 0x16, 0x2b, 0x93, 0x24, 0x41, 0xbb, 0x14, 0xb8, 0x0, 0xc2, 0x43, 0xc3, 0x13, 0x1b, 0x94, 0x67, 0x12, 0xc4, 0x15, 0x53, 0xc1, 0xd2, 0x41, 0x12, 0xc1, 0x29, 0x13, 0x85, 0x17, 0x1b, 0x92, 0x1a, 0x42, 0x47, 0x13, 0x83, 0x41, 0xa7, 0x13, 0xe, 0x91, 0xa7, 0x63, 0xb7, 0x63, 0xc5, 0x65, 0xd5, 0x65, 0xdd, 0x4a, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xae, 0x42, 0xdf, 0x20, 0xfd, },
// level 2-3/7-3

    /* 9103 (37123) */
    // level 2-3/7-3
    .L_GroundArea8 = {0x90, 0x11, 0xf, 0x26, 0x6e, 0x10, 0x8b, 0x17, 0xaf, 0x32, 0xd8, 0x62, 0xe8, 0x62, 0xfc, 0x3f, 0xad, 0xc8, 0xf8, 0x64, 0xc, 0xbe, 0x43, 0x43, 0xf8, 0x64, 0xc, 0xbf, 0x73, 0x40, 0x84, 0x40, 0x93, 0x40, 0xa4, 0x40, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0x83, 0x40, 0x92, 0x41, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0xf8, 0x64, 0x13, 0xc2, 0x37, 0x65, 0x4c, 0x24, 0x63, 0x0, 0x97, 0x65, 0xc3, 0x42, 0xb, 0x97, 0xac, 0x32, 0xf8, 0x64, 0xc, 0xbe, 0x53, 0x45, 0x9d, 0x48, 0xf8, 0x64, 0x2a, 0xe2, 0x3c, 0x47, 0x56, 0x43, 0xba, 0x62, 0xf8, 0x64, 0xc, 0xb7, 0x88, 0x64, 0xbc, 0x31, 0xd4, 0x45, 0xfc, 0x31, 0x3c, 0xb1, 0x78, 0x64, 0x8c, 0x38, 0xb, 0x9c, 0x1a, 0x33, 0x18, 0x61, 0x28, 0x61, 0x39, 0x60, 0x5d, 0x4a, 0xee, 0x11, 0xf, 0xb8, 0x1d, 0xc1, 0x3e, 0x42, 0x6f, 0x20, 0xfd, },
// level 2-1

    /* 9188 (37256) */
    // level 2-1
    .L_GroundArea9 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xf7, 0x20, 0x7, 0x84, 0x17, 0x20, 0x4f, 0x34, 0xc3, 0x3, 0xc7, 0x2, 0xd3, 0x22, 0x27, 0xe3, 0x39, 0x61, 0xe7, 0x73, 0x5c, 0xe4, 0x57, 0x0, 0x6c, 0x73, 0x47, 0xa0, 0x53, 0x6, 0x63, 0x22, 0xa7, 0x73, 0xfc, 0x73, 0x13, 0xa1, 0x33, 0x5, 0x43, 0x21, 0x5c, 0x72, 0xc3, 0x23, 0xcc, 0x3, 0x77, 0xfb, 0xac, 0x2, 0x39, 0xf1, 0xa7, 0x73, 0xd3, 0x4, 0xe8, 0x72, 0xe3, 0x22, 0x26, 0xf4, 0xbc, 0x2, 0x8c, 0x81, 0xa8, 0x62, 0x17, 0x87, 0x43, 0x24, 0xa7, 0x1, 0xc3, 0x4, 0x8, 0xf2, 0x97, 0x21, 0xa3, 0x2, 0xc9, 0xb, 0xe1, 0x69, 0xf1, 0x69, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// pipe intro area

    /* 91ed (37357) */
    // pipe intro area
    .L_GroundArea10 = {0x38, 0x11, 0xf, 0x26, 0xad, 0x40, 0x3d, 0xc7, 0xfd, },
// level 5-1

    /* 91f6 (37366) */
    // level 5-1
    .L_GroundArea11 = {0x95, 0xb1, 0xf, 0x26, 0xd, 0x2, 0xc8, 0x72, 0x1c, 0x81, 0x38, 0x72, 0xd, 0x5, 0x97, 0x34, 0x98, 0x62, 0xa3, 0x20, 0xb3, 0x6, 0xc3, 0x20, 0xcc, 0x3, 0xf9, 0x91, 0x2c, 0x81, 0x48, 0x62, 0xd, 0x9, 0x37, 0x63, 0x47, 0x3, 0x57, 0x21, 0x8c, 0x2, 0xc5, 0x79, 0xc7, 0x31, 0xf9, 0x11, 0x39, 0xf1, 0xa9, 0x11, 0x6f, 0xb4, 0xd3, 0x65, 0xe3, 0x65, 0x7d, 0xc1, 0xbf, 0x26, 0xfd, },
// cloud level used in levels 2-1 and 5-2

    /* 9235 (37429) */
    // cloud level used in levels 2-1 and 5-2
    .L_GroundArea12 = {0x0, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x2, 0x42, 0x43, 0x4f, 0x52, 0xc2, 0xde, 0x0, 0x5a, 0xc2, 0x4d, 0xc7, 0xfd, },
// level 4-3

    /* 924a (37450) */
    // level 4-3
    .L_GroundArea13 = {0x90, 0x51, 0xf, 0x26, 0xee, 0x10, 0xb, 0x94, 0x33, 0x14, 0x42, 0x42, 0x77, 0x16, 0x86, 0x44, 0x2, 0x92, 0x4a, 0x16, 0x69, 0x42, 0x73, 0x14, 0xb0, 0x0, 0xc7, 0x12, 0x5, 0xc0, 0x1c, 0x17, 0x1f, 0x11, 0x36, 0x12, 0x8f, 0x14, 0x91, 0x40, 0x1b, 0x94, 0x35, 0x12, 0x34, 0x42, 0x60, 0x42, 0x61, 0x12, 0x87, 0x12, 0x96, 0x40, 0xa3, 0x14, 0x1c, 0x98, 0x1f, 0x11, 0x47, 0x12, 0x9f, 0x15, 0xcc, 0x15, 0xcf, 0x11, 0x5, 0xc0, 0x1f, 0x15, 0x39, 0x12, 0x7c, 0x16, 0x7f, 0x11, 0x82, 0x40, 0x98, 0x12, 0xdf, 0x15, 0x16, 0xc4, 0x17, 0x14, 0x54, 0x12, 0x9b, 0x16, 0x28, 0x94, 0xce, 0x1, 0x3d, 0xc1, 0x5e, 0x42, 0x8f, 0x20, 0xfd, },
// level 6-3

    /* 92b1 (37553) */
    // level 6-3
    .L_GroundArea14 = {0x97, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2b, 0x92, 0x57, 0x12, 0x8b, 0x12, 0xc0, 0x41, 0xf7, 0x13, 0x5b, 0x92, 0x69, 0xb, 0xbb, 0x12, 0xb2, 0x46, 0x19, 0x93, 0x71, 0x0, 0x17, 0x94, 0x7c, 0x14, 0x7f, 0x11, 0x93, 0x41, 0xbf, 0x15, 0xfc, 0x13, 0xff, 0x11, 0x2f, 0x95, 0x50, 0x42, 0x51, 0x12, 0x58, 0x14, 0xa6, 0x12, 0xdb, 0x12, 0x1b, 0x93, 0x46, 0x43, 0x7b, 0x12, 0x8d, 0x49, 0xb7, 0x14, 0x1b, 0x94, 0x49, 0xb, 0xbb, 0x12, 0xfc, 0x13, 0xff, 0x12, 0x3, 0xc1, 0x2f, 0x15, 0x43, 0x12, 0x4b, 0x13, 0x77, 0x13, 0x9d, 0x4a, 0x15, 0xc1, 0xa1, 0x41, 0xc3, 0x12, 0xfe, 0x1, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd, },
// level 6-1

    /* 9316 (37654) */
    // level 6-1
    .L_GroundArea15 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x44, 0xc, 0xf1, 0x4c, 0x1, 0xaa, 0x35, 0xd9, 0x34, 0xee, 0x20, 0x8, 0xb3, 0x37, 0x32, 0x43, 0x4, 0x4e, 0x21, 0x53, 0x20, 0x7c, 0x1, 0x97, 0x21, 0xb7, 0x7, 0x9c, 0x81, 0xe7, 0x42, 0x5f, 0xb3, 0x97, 0x63, 0xac, 0x2, 0xc5, 0x41, 0x49, 0xe0, 0x58, 0x61, 0x76, 0x64, 0x85, 0x65, 0x94, 0x66, 0xa4, 0x22, 0xa6, 0x3, 0xc8, 0x22, 0xdc, 0x2, 0x68, 0xf2, 0x96, 0x42, 0x13, 0x82, 0x17, 0x2, 0xaf, 0x34, 0xf6, 0x21, 0xfc, 0x6, 0x26, 0x80, 0x2a, 0x24, 0x36, 0x1, 0x8c, 0x0, 0xff, 0x35, 0x4e, 0xa0, 0x55, 0x21, 0x77, 0x20, 0x87, 0x7, 0x89, 0x22, 0xae, 0x21, 0x4c, 0x82, 0x9f, 0x34, 0xec, 0x1, 0x3, 0xe7, 0x13, 0x67, 0x8d, 0x4a, 0xad, 0x41, 0xf, 0xa6, 0xfd, },
// warp zone area used in level 4-2

    /* 9389 (37769) */
    // warp zone area used in level 4-2
    .L_GroundArea16 = {0x10, 0x51, 0x4c, 0x0, 0xc7, 0x12, 0xc6, 0x42, 0x3, 0x92, 0x2, 0x42, 0x29, 0x12, 0x63, 0x12, 0x62, 0x42, 0x69, 0x14, 0xa5, 0x12, 0xa4, 0x42, 0xe2, 0x14, 0xe1, 0x44, 0xf8, 0x16, 0x37, 0xc1, 0x8f, 0x38, 0x2, 0xbb, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xe0, 0x6a, 0xf0, 0x6a, 0x6d, 0xc5, 0xfd, },
// level 8-1

    /* 93ba (37818) */
    // level 8-1
    .L_GroundArea17 = {0x92, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xd, 0x2, 0x37, 0x73, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x6c, 0x0, 0x9c, 0x0, 0x6, 0xc0, 0xc7, 0x73, 0x6, 0x83, 0x28, 0x72, 0x96, 0x40, 0xe7, 0x73, 0x26, 0xc0, 0x87, 0x7b, 0xd2, 0x41, 0x39, 0xf1, 0xc8, 0xf2, 0x97, 0xe3, 0xa3, 0x23, 0xe7, 0x2, 0xe3, 0x7, 0xf3, 0x22, 0x37, 0xe3, 0x9c, 0x0, 0xbc, 0x0, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x86, 0x21, 0xa6, 0x6, 0xb6, 0x24, 0x5c, 0x80, 0x7c, 0x0, 0x9c, 0x0, 0x29, 0xe1, 0xdc, 0x5, 0xf6, 0x41, 0xdc, 0x80, 0xe8, 0x72, 0xc, 0x81, 0x27, 0x73, 0x4c, 0x1, 0x66, 0x74, 0xd, 0x11, 0x3f, 0x35, 0xb6, 0x41, 0x2c, 0x82, 0x36, 0x40, 0x7c, 0x2, 0x86, 0x40, 0xf9, 0x61, 0x39, 0xe1, 0xac, 0x4, 0xc6, 0x41, 0xc, 0x83, 0x16, 0x41, 0x88, 0xf2, 0x39, 0xf1, 0x7c, 0x0, 0x89, 0x61, 0x9c, 0x0, 0xa7, 0x63, 0xbc, 0x0, 0xc5, 0x65, 0xdc, 0x0, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// level 5-2

    /* 944d (37965) */
    // level 5-2
    .L_GroundArea18 = {0x55, 0xb1, 0xf, 0x26, 0xcf, 0x33, 0x7, 0xb2, 0x15, 0x11, 0x52, 0x42, 0x99, 0xb, 0xac, 0x2, 0xd3, 0x24, 0xd6, 0x42, 0xd7, 0x25, 0x23, 0x84, 0xcf, 0x33, 0x7, 0xe3, 0x19, 0x61, 0x78, 0x7a, 0xef, 0x33, 0x2c, 0x81, 0x46, 0x64, 0x55, 0x65, 0x65, 0x65, 0xec, 0x74, 0x47, 0x82, 0x53, 0x5, 0x63, 0x21, 0x62, 0x41, 0x96, 0x22, 0x9a, 0x41, 0xcc, 0x3, 0xb9, 0x91, 0x39, 0xf1, 0x63, 0x26, 0x67, 0x27, 0xd3, 0x6, 0xfc, 0x1, 0x18, 0xe2, 0xd9, 0x7, 0xe9, 0x4, 0xc, 0x86, 0x37, 0x22, 0x93, 0x24, 0x87, 0x84, 0xac, 0x2, 0xc2, 0x41, 0xc3, 0x23, 0xd9, 0x71, 0xfc, 0x1, 0x7f, 0xb1, 0x9c, 0x0, 0xa7, 0x63, 0xb6, 0x64, 0xcc, 0x0, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// level 8-2

    /* 94c0 (38080) */
    // level 8-2
    .L_GroundArea19 = {0x50, 0xb1, 0xf, 0x26, 0xfc, 0x0, 0x1f, 0xb3, 0x5c, 0x0, 0x65, 0x65, 0x74, 0x66, 0x83, 0x67, 0x93, 0x67, 0xdc, 0x73, 0x4c, 0x80, 0xb3, 0x20, 0xc9, 0xb, 0xc3, 0x8, 0xd3, 0x2f, 0xdc, 0x0, 0x2c, 0x80, 0x4c, 0x0, 0x8c, 0x0, 0xd3, 0x2e, 0xed, 0x4a, 0xfc, 0x0, 0xd7, 0xa1, 0xec, 0x1, 0x4c, 0x80, 0x59, 0x11, 0xd8, 0x11, 0xda, 0x10, 0x37, 0xa0, 0x47, 0x4, 0x99, 0x11, 0xe7, 0x21, 0x3a, 0x90, 0x67, 0x20, 0x76, 0x10, 0x77, 0x60, 0x87, 0x7, 0xd8, 0x12, 0x39, 0xf1, 0xac, 0x0, 0xe9, 0x71, 0xc, 0x80, 0x2c, 0x0, 0x4c, 0x5, 0xc7, 0x7b, 0x39, 0xf1, 0xec, 0x0, 0xf9, 0x11, 0xc, 0x82, 0x6f, 0x34, 0xf8, 0x11, 0xfa, 0x10, 0x7f, 0xb2, 0xac, 0x0, 0xb6, 0x64, 0xcc, 0x1, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },
// level 7-1

    /* 9539 (38201) */
    // level 7-1
    .L_GroundArea20 = {0x52, 0xb1, 0xf, 0x20, 0x6e, 0x45, 0x39, 0x91, 0xb3, 0x4, 0xc3, 0x21, 0xc8, 0x11, 0xca, 0x10, 0x49, 0x91, 0x7c, 0x73, 0xe8, 0x12, 0x88, 0x91, 0x8a, 0x10, 0xe7, 0x21, 0x5, 0x91, 0x7, 0x30, 0x17, 0x7, 0x27, 0x20, 0x49, 0x11, 0x9c, 0x1, 0xc8, 0x72, 0x23, 0xa6, 0x27, 0x26, 0xd3, 0x3, 0xd8, 0x7a, 0x89, 0x91, 0xd8, 0x72, 0x39, 0xf1, 0xa9, 0x11, 0x9, 0xf1, 0x63, 0x24, 0x67, 0x24, 0xd8, 0x62, 0x28, 0x91, 0x2a, 0x10, 0x56, 0x21, 0x70, 0x4, 0x79, 0xb, 0x8c, 0x0, 0x94, 0x21, 0x9f, 0x35, 0x2f, 0xb8, 0x3d, 0xc1, 0x7f, 0x26, 0xfd, },
// cloud level used in levels 3-1 and 6-2

    /* 9592 (38290) */
    // cloud level used in levels 3-1 and 6-2
    .L_GroundArea21 = {0x6, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x6, 0x20, 0x24, 0x4f, 0x35, 0xa0, 0x36, 0x20, 0x53, 0x46, 0xd5, 0x20, 0xd6, 0x20, 0x34, 0xa1, 0x73, 0x49, 0x74, 0x20, 0x94, 0x20, 0xb4, 0x20, 0xd4, 0x20, 0xf4, 0x20, 0x2e, 0x80, 0x59, 0x42, 0x4d, 0xc7, 0xfd, },
// level 3-2

    /* 95bd (38333) */
    // level 3-2
    .L_GroundArea22 = {0x96, 0x31, 0xf, 0x26, 0xd, 0x3, 0x1a, 0x60, 0x77, 0x42, 0xc4, 0x0, 0xc8, 0x62, 0xb9, 0xe1, 0xd3, 0x6, 0xd7, 0x7, 0xf9, 0x61, 0xc, 0x81, 0x4e, 0xb1, 0x8e, 0xb1, 0xbc, 0x1, 0xe4, 0x50, 0xe9, 0x61, 0xc, 0x81, 0xd, 0xa, 0x84, 0x43, 0x98, 0x72, 0xd, 0xc, 0xf, 0x38, 0x1d, 0xc1, 0x5f, 0x26, 0xfd, },
// level 1-2

    /* 95f0 (38384) */
    // level 1-2
    .L_UndergroundArea1 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xa7, 0x0, 0xbc, 0x73, 0x1a, 0xe0, 0x39, 0x61, 0x58, 0x62, 0x77, 0x63, 0x97, 0x63, 0xb8, 0x62, 0xd6, 0x7, 0xf8, 0x62, 0x19, 0xe1, 0x75, 0x52, 0x86, 0x40, 0x87, 0x50, 0x95, 0x52, 0x93, 0x43, 0xa5, 0x21, 0xc5, 0x52, 0xd6, 0x40, 0xd7, 0x20, 0xe5, 0x6, 0xe6, 0x51, 0x3e, 0x8d, 0x5e, 0x3, 0x67, 0x52, 0x77, 0x52, 0x7e, 0x2, 0x9e, 0x3, 0xa6, 0x43, 0xa7, 0x23, 0xde, 0x5, 0xfe, 0x2, 0x1e, 0x83, 0x33, 0x54, 0x46, 0x40, 0x47, 0x21, 0x56, 0x4, 0x5e, 0x2, 0x83, 0x54, 0x93, 0x52, 0x96, 0x7, 0x97, 0x50, 0xbe, 0x3, 0xc7, 0x23, 0xfe, 0x2, 0xc, 0x82, 0x43, 0x45, 0x45, 0x24, 0x46, 0x24, 0x90, 0x8, 0x95, 0x51, 0x78, 0xfa, 0xd7, 0x73, 0x39, 0xf1, 0x8c, 0x1, 0xa8, 0x52, 0xb8, 0x52, 0xcc, 0x1, 0x5f, 0xb3, 0x97, 0x63, 0x9e, 0x0, 0xe, 0x81, 0x16, 0x24, 0x66, 0x4, 0x8e, 0x0, 0xfe, 0x1, 0x8, 0xd2, 0xe, 0x6, 0x6f, 0x47, 0x9e, 0xf, 0xe, 0x82, 0x2d, 0x47, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd, },
// level 4-2

    /* 9693 (38547) */
    // level 4-2
    .L_UndergroundArea2 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xbc, 0x1, 0xfc, 0x1, 0x2c, 0x82, 0x41, 0x52, 0x4e, 0x4, 0x67, 0x25, 0x68, 0x24, 0x69, 0x24, 0xba, 0x42, 0xc7, 0x4, 0xde, 0xb, 0xb2, 0x87, 0xfe, 0x2, 0x2c, 0xe1, 0x2c, 0x71, 0x67, 0x1, 0x77, 0x0, 0x87, 0x1, 0x8e, 0x0, 0xee, 0x1, 0xf6, 0x2, 0x3, 0x85, 0x5, 0x2, 0x13, 0x21, 0x16, 0x2, 0x27, 0x2, 0x2e, 0x2, 0x88, 0x72, 0xc7, 0x20, 0xd7, 0x7, 0xe4, 0x76, 0x7, 0xa0, 0x17, 0x6, 0x48, 0x7a, 0x76, 0x20, 0x98, 0x72, 0x79, 0xe1, 0x88, 0x62, 0x9c, 0x1, 0xb7, 0x73, 0xdc, 0x1, 0xf8, 0x62, 0xfe, 0x1, 0x8, 0xe2, 0xe, 0x0, 0x6e, 0x2, 0x73, 0x20, 0x77, 0x23, 0x83, 0x4, 0x93, 0x20, 0xae, 0x0, 0xfe, 0xa, 0xe, 0x82, 0x39, 0x71, 0xa8, 0x72, 0xe7, 0x73, 0xc, 0x81, 0x8f, 0x32, 0xae, 0x0, 0xfe, 0x4, 0x4, 0xd1, 0x17, 0x4, 0x26, 0x49, 0x27, 0x29, 0xdf, 0x33, 0xfe, 0x2, 0x44, 0xf6, 0x7c, 0x1, 0x8e, 0x6, 0xbf, 0x47, 0xee, 0xf, 0x4d, 0xc7, 0xe, 0x82, 0x68, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd, },
// underground bonus rooms area used in many levels

    /* 9734 (38708) */
    // underground bonus rooms area used in many levels
    .L_UndergroundArea3 = {0x48, 0x1, 0xe, 0x1, 0x0, 0x5a, 0x3e, 0x6, 0x45, 0x46, 0x47, 0x46, 0x53, 0x44, 0xae, 0x1, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x4, 0x37, 0x28, 0x3a, 0x48, 0x46, 0x47, 0xc7, 0x7, 0xce, 0xf, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x33, 0x53, 0x43, 0x51, 0x46, 0x40, 0x47, 0x50, 0x53, 0x4, 0x55, 0x40, 0x56, 0x50, 0x62, 0x43, 0x64, 0x40, 0x65, 0x50, 0x71, 0x41, 0x73, 0x51, 0x83, 0x51, 0x94, 0x40, 0x95, 0x50, 0xa3, 0x50, 0xa5, 0x40, 0xa6, 0x50, 0xb3, 0x51, 0xb6, 0x40, 0xb7, 0x50, 0xc3, 0x53, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x2, 0x36, 0x47, 0x37, 0x52, 0x3a, 0x49, 0x47, 0x25, 0xa7, 0x52, 0xd7, 0x4, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x3e, 0x2, 0x44, 0x51, 0x53, 0x44, 0x54, 0x44, 0x55, 0x24, 0xa1, 0x54, 0xae, 0x1, 0xb4, 0x21, 0xdf, 0x4a, 0xe5, 0x7, 0x4d, 0xc7, 0xfd, },
// water area used in levels 5-2 and 6-2

    /* 97c1 (38849) */
    // water area used in levels 5-2 and 6-2
    .L_WaterArea1 = {0x41, 0x1, 0xb4, 0x34, 0xc8, 0x52, 0xf2, 0x51, 0x47, 0xd3, 0x6c, 0x3, 0x65, 0x49, 0x9e, 0x7, 0xbe, 0x1, 0xcc, 0x3, 0xfe, 0x7, 0xd, 0xc9, 0x1e, 0x1, 0x6c, 0x1, 0x62, 0x35, 0x63, 0x53, 0x8a, 0x41, 0xac, 0x1, 0xb3, 0x53, 0xe9, 0x51, 0x26, 0xc3, 0x27, 0x33, 0x63, 0x43, 0x64, 0x33, 0xba, 0x60, 0xc9, 0x61, 0xce, 0xb, 0xe5, 0x9, 0xee, 0xf, 0x7d, 0xca, 0x7d, 0x47, 0xfd, },
// level 2-2/7-2

    /* 9800 (38912) */
    // level 2-2/7-2
    .L_WaterArea2 = {0x41, 0x1, 0xb8, 0x52, 0xea, 0x41, 0x27, 0xb2, 0xb3, 0x42, 0x16, 0xd4, 0x4a, 0x42, 0xa5, 0x51, 0xa7, 0x31, 0x27, 0xd3, 0x8, 0xe2, 0x16, 0x64, 0x2c, 0x4, 0x38, 0x42, 0x76, 0x64, 0x88, 0x62, 0xde, 0x7, 0xfe, 0x1, 0xd, 0xc9, 0x23, 0x32, 0x31, 0x51, 0x98, 0x52, 0xd, 0xc9, 0x59, 0x42, 0x63, 0x53, 0x67, 0x31, 0x14, 0xc2, 0x36, 0x31, 0x87, 0x53, 0x17, 0xe3, 0x29, 0x61, 0x30, 0x62, 0x3c, 0x8, 0x42, 0x37, 0x59, 0x40, 0x6a, 0x42, 0x99, 0x40, 0xc9, 0x61, 0xd7, 0x63, 0x39, 0xd1, 0x58, 0x52, 0xc3, 0x67, 0xd3, 0x31, 0xdc, 0x6, 0xf7, 0x42, 0xfa, 0x42, 0x23, 0xb1, 0x43, 0x67, 0xc3, 0x34, 0xc7, 0x34, 0xd1, 0x51, 0x43, 0xb3, 0x47, 0x33, 0x9a, 0x30, 0xa9, 0x61, 0xb8, 0x62, 0xbe, 0xb, 0xd5, 0x9, 0xde, 0xf, 0xd, 0xca, 0x7d, 0x47, 0xfd, },
// water area used in level 8-4

    /* 987b (39035) */
    // water area used in level 8-4
    .L_WaterArea3 = {0x49, 0xf, 0x1e, 0x1, 0x39, 0x73, 0x5e, 0x7, 0xae, 0xb, 0x1e, 0x82, 0x6e, 0x88, 0x9e, 0x2, 0xd, 0x4, 0x2e, 0xb, 0x45, 0x9, 0x4e, 0xf, 0xed, 0x47, 0xfd, 
    // unused space
    0xff, },

    /* 9897 (39063) */
    .X_SubtracterData = {0x0, 0x10, },

    /* 9899 (39065) */
    .OffscrJoypadBitsData = {0x1, 0x2, },

    /* 989b (39067) */
    .Hidden1UpCoinAmts = {0x15, 0x23, 0x16, 0x1b, 0x17, 0x18, 0x23, 0x63, },

    /* 98a3 (39075) */
    .ClimbAdderLow = {0xe, 0x4, 0xfc, 0xf2, },

    /* 98a7 (39079) */
    .ClimbAdderHigh = {0x0, 0x0, 0xff, 0xff, },
// $00 - used to store offset to friction data

    /* 98ab (39083) */
    // $00 - used to store offset to friction data
    .JumpMForceData = {0x20, 0x20, 0x1e, 0x28, 0x28, 0xd, 0x4, },

    /* 98b2 (39090) */
    .FallMForceData = {0x70, 0x70, 0x60, 0x90, 0x90, 0xa, 0x9, },

    /* 98b9 (39097) */
    .PlayerYSpdData = {0xfc, 0xfc, 0xfc, 0xfb, 0xfb, 0xfe, 0xff, },

    /* 98c0 (39104) */
    .InitMForceData = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x0, },

    /* 98c7 (39111) */
    .MaxLeftXSpdData = {0xd8, 0xe8, 0xf0, },

    /* 98ca (39114) */
    .MaxRightXSpdData = {0x28, 0x18, 0x10, 
    // used for pipe intros
    0xc, },

    /* 98ce (39118) */
    .FrictionData = {0xe4, 0x98, 0xd0, },

    /* 98d1 (39121) */
    .Climb_Y_SpeedData = {0x0, 0xff, 0x1, },

    /* 98d4 (39124) */
    .Climb_Y_MForceData = {0x0, 0x20, 0xff, },

    /* 98d7 (39127) */
    .PlayerAnimTmrData = {0x2, 0x4, 0x7, },

    /* 98da (39130) */
    .FireballXSpdData = {0x40, 0xc0, },

    /* 98dc (39132) */
    .Bubble_MForceData = {0xff, 0x50, },

    /* 98de (39134) */
    .BubbleTimerData = {0x40, 0x20, },

    /* 98e0 (39136) */
    .FlagpoleScoreMods = {0x5, 0x2, 0x8, 0x4, 0x1, },

    /* 98e5 (39141) */
    .FlagpoleScoreDigits = {0x3, 0x3, 0x4, 0x4, 0x4, },

    /* 98ea (39146) */
    .Jumpspring_Y_PosData = {0x8, 0x10, 0x8, 0x0, },
// $06-$07 - used as address to block buffer data
// $02 - used as vertical high nybble of block buffer offset

    /* 98ee (39150) */
    // $06-$07 - used as address to block buffer data
    // $02 - used as vertical high nybble of block buffer offset
    .VineHeightData = {0x30, 0x60, },

    /* 98f0 (39152) */
    .CannonBitmasks = {0b1111, 0b111, },

    /* 98f2 (39154) */
    .BulletBillXSpdData = {0x18, 0xe8, },

    /* 98f4 (39156) */
    .HammerEnemyOfsData = {0x4, 0x4, 0x4, 0x5, 0x5, 0x5, 0x6, 0x6, 0x6, },

    /* 98fd (39165) */
    .HammerXSpdData = {0x10, 0xf0, },

    /* 98ff (39167) */
    .CoinTallyOffsets = {0x17, 0x1d, },

    /* 9901 (39169) */
    .ScoreOffsets = {0xb, 0x11, },

    /* 9903 (39171) */
    .StatusBarNybbles = {0x2, 0x13, },
// These apply to all routines in this section unless otherwise noted:
// $00 - used to store metatile from block buffer routine
// $02 - used to store vertical high nybble offset from block buffer routine
// $05 - used to store metatile stored in A at beginning of PlayerHeadCollision
// $06-$07 - used as block buffer address indirect

    /* 9905 (39173) */
    // These apply to all routines in this section unless otherwise noted:
    // $00 - used to store metatile from block buffer routine
    // $02 - used to store vertical high nybble offset from block buffer routine
    // $05 - used to store metatile stored in A at beginning of PlayerHeadCollision
    // $06-$07 - used as block buffer address indirect
    .BlockYPosAdderData = {0x4, 0x12, },

    /* 9907 (39175) */
    .BrickQBlockMetatiles = {
    // used by question blocks
    0xc1, 0xc0, 0x5f, 0x60, 
    // these two sets are functionally identical, but look different
    
    // used by ground level types
    0x55, 0x56, 0x57, 0x58, 0x59, 
    // used by other level types
    0x5a, 0x5b, 0x5c, 0x5d, 0x5e, },

    /* 9915 (39189) */
    .MaxSpdBlockData = {0x6, 0x8, },
// loop command data

    /* 9917 (39191) */
    // loop command data
    .LoopCmdWorldNumber = {0x3, 0x3, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7, 0x7, 0x7, },

    /* 9922 (39202) */
    .LoopCmdPageNumber = {0x5, 0x9, 0x4, 0x5, 0x6, 0x8, 0x9, 0xa, 0x6, 0xb, 0x10, },

    /* 992d (39213) */
    .LoopCmdYPosition = {0x40, 0xb0, 0xb0, 0x80, 0x40, 0x40, 0x80, 0x40, 0xf0, 0xf0, 0xf0, },

    /* 9938 (39224) */
    .NormalXSpdData = {0xf8, 0xf4, },

    /* 993a (39226) */
    .HBroWalkingTimerData = {0x80, 0x50, },
// $01-$03 - used to hold pseudorandom difference adjusters

    /* 993c (39228) */
    // $01-$03 - used to hold pseudorandom difference adjusters
    .PRDiffAdjustData = {0x26, 0x2c, 0x32, 0x38, 0x20, 0x22, 0x24, 0x26, 0x13, 0x14, 0x15, 0x16, },

    /* 9948 (39240) */
    .FirebarSpinSpdData = {0x28, 0x38, 0x28, 0x38, 0x28, },

    /* 994d (39245) */
    .FirebarSpinDirData = {0x0, 0x0, 0x10, 0x10, 0x0, },
// $00-$01 - used to hold pseudorandom bits

    /* 9952 (39250) */
    // $00-$01 - used to hold pseudorandom bits
    .FlyCCXPositionData = {0x80, 0x30, 0x40, 0x80, 0x30, 0x50, 0x50, 0x70, 0x20, 0x40, 0x80, 0xa0, 0x70, 0x40, 0x90, 0x68, },

    /* 9962 (39266) */
    .FlyCCXSpeedData = {0xe, 0x5, 0x6, 0xe, 0x1c, 0x20, 0x10, 0xc, 0x1e, 0x22, 0x18, 0x14, },

    /* 996e (39278) */
    .FlyCCTimerData = {0x10, 0x60, 0x20, 0x48, },

    /* 9972 (39282) */
    .FlameYPosData = {0x90, 0x80, 0x70, 0x90, },

    /* 9976 (39286) */
    .FlameYMFAdderData = {0xff, 0x1, },

    /* 9978 (39288) */
    .FireworksXPosData = {0x0, 0x30, 0x60, 0x60, 0x0, 0x20, },

    /* 997e (39294) */
    .FireworksYPosData = {0x60, 0x40, 0x70, 0x40, 0x60, 0x30, },

    /* 9984 (39300) */
    .Bitmasks = {0b1, 0b10, 0b100, 0b1000, 0b10000, 0b100000, 0b1000000, 0b10000000, },

    /* 998c (39308) */
    .Enemy17YPosData = {0x40, 0x30, 0x90, 0x50, 0x20, 0x60, 0xa0, 0x70, },

    /* 9994 (39316) */
    .SwimCC_IDData = {0xa, 0xb, },

    /* 9996 (39318) */
    .PlatPosDataLow = {0x8, 0xc, 0xf8, },

    /* 9999 (39321) */
    .PlatPosDataHigh = {0x0, 0x0, 0xff, },
// $00 - used in HammerBroJumpCode as bitmask

    /* 999c (39324) */
    // $00 - used in HammerBroJumpCode as bitmask
    .HammerThrowTmrData = {0x30, 0x1c, },

    /* 999e (39326) */
    .XSpeedAdderData = {0x0, 0xe8, 0x0, 0x18, },

    /* 99a2 (39330) */
    .RevivedXSpeed = {0x8, 0xf8, 0xc, 0xf4, },

    /* 99a6 (39334) */
    .HammerBroJumpLData = {0x20, 0x37, },

    /* 99a8 (39336) */
    .BlooberBitmasks = {0b111111, 0b11, },
// $02 - used to hold preset values
// $03 - used to hold enemy state

    /* 99aa (39338) */
    // $02 - used to hold preset values
    // $03 - used to hold enemy state
    .SwimCCXMoveData = {0x40, 0x80, 
    // residual data, not used
    0x4, 0x4, },
// $00 - used as counter for firebar parts
// $01 - used for oscillated high byte of spin state or to hold horizontal adder
// $02 - used for oscillated high byte of spin state or to hold vertical adder
// $03 - used for mirror data
// $04 - used to store player's sprite 1 X coordinate
// $05 - used to evaluate mirror data
// $06 - used to store either screen X coordinate or sprite data offset
// $07 - used to store screen Y coordinate
// $ed - used to hold maximum length of firebar
// $ef - used to hold high byte of spinstate
// horizontal adder is at first byte + high byte of spinstate,
// vertical adder is same + 8 bytes, two's compliment
// if greater than $08 for proper oscillation

    /* 99ae (39342) */
    // $00 - used as counter for firebar parts
    // $01 - used for oscillated high byte of spin state or to hold horizontal adder
    // $02 - used for oscillated high byte of spin state or to hold vertical adder
    // $03 - used for mirror data
    // $04 - used to store player's sprite 1 X coordinate
    // $05 - used to evaluate mirror data
    // $06 - used to store either screen X coordinate or sprite data offset
    // $07 - used to store screen Y coordinate
    // $ed - used to hold maximum length of firebar
    // $ef - used to hold high byte of spinstate
    // horizontal adder is at first byte + high byte of spinstate,
    // vertical adder is same + 8 bytes, two's compliment
    // if greater than $08 for proper oscillation
    .FirebarPosLookupTbl = {0x0, 0x1, 0x3, 0x4, 0x5, 0x6, 0x7, 0x7, 0x8, 0x0, 0x3, 0x6, 0x9, 0xb, 0xd, 0xe, 0xf, 0x10, 0x0, 0x4, 0x9, 0xd, 0x10, 0x13, 0x16, 0x17, 0x18, 0x0, 0x6, 0xc, 0x12, 0x16, 0x1a, 0x1d, 0x1f, 0x20, 0x0, 0x7, 0xf, 0x16, 0x1c, 0x21, 0x25, 0x27, 0x28, 0x0, 0x9, 0x12, 0x1b, 0x21, 0x27, 0x2c, 0x2f, 0x30, 0x0, 0xb, 0x15, 0x1f, 0x27, 0x2e, 0x33, 0x37, 0x38, 0x0, 0xc, 0x18, 0x24, 0x2d, 0x35, 0x3b, 0x3e, 0x40, 0x0, 0xe, 0x1b, 0x28, 0x32, 0x3b, 0x42, 0x46, 0x48, 0x0, 0xf, 0x1f, 0x2d, 0x38, 0x42, 0x4a, 0x4e, 0x50, 0x0, 0x11, 0x22, 0x31, 0x3e, 0x49, 0x51, 0x56, 0x58, },

    /* 9a11 (39441) */
    .FirebarMirrorData = {0x1, 0x3, 0x2, 0x0, },

    /* 9a15 (39445) */
    .FirebarTblOffsets = {0x0, 0x9, 0x12, 0x1b, 0x24, 0x2d, 0x36, 0x3f, 0x48, 0x51, 0x5a, 0x63, },

    /* 9a21 (39457) */
    .FirebarYPos = {0xc, 0x18, },

    /* 9a23 (39459) */
    .PRandomSubtracter = {0xf8, 0xa0, 0x70, 0xbd, 0x0, },

    /* 9a28 (39464) */
    .FlyCCBPriority = {0x20, 0x20, 0x20, 0x0, 0x0, },
// $00 - used to hold horizontal difference
// $01-$03 - used to hold difference adjusters

    /* 9a2d (39469) */
    // $00 - used to hold horizontal difference
    // $01-$03 - used to hold difference adjusters
    .LakituDiffAdj = {0x15, 0x30, 0x40, },
// $04-$05 - used to store name table address in little endian order

    /* 9a30 (39472) */
    // $04-$05 - used to store name table address in little endian order
    .BridgeCollapseData = {
    // axe
    0x1a, 
    // chain
    0x58, 
    // bridge
    0x98, 0x96, 0x94, 0x92, 0x90, 0x8e, 0x8c, 0x8a, 0x88, 0x86, 0x84, 0x82, 0x80, },

    /* 9a3f (39487) */
    .PRandomRange = {0x21, 0x41, 0x11, 0x31, },
// $00 - used to hold movement force and tile number
// $01 - used to hold sprite attribute data

    /* 9a43 (39491) */
    // $00 - used to hold movement force and tile number
    // $01 - used to hold sprite attribute data
    .FlameTimerData = {0xbf, 0x40, 0xbf, 0xbf, 0xbf, 0x40, 0x40, 0xbf, },

    /* 9a4b (39499) */
    .StarFlagYPosAdder = {0x0, 0x0, 0x8, 0x8, },

    /* 9a4f (39503) */
    .StarFlagXPosAdder = {0x0, 0x8, 0x0, 0x8, },

    /* 9a53 (39507) */
    .StarFlagTileData = {0x54, 0x55, 0x56, 0x57, },

    /* 9a57 (39511) */
    .BowserIdentities = {Goomba, GreenKoopa, BuzzyBeetle, Spiny, Lakitu, Bloober, HammerBro, Bowser, },

    /* 9a5f (39519) */
    .ResidualXSpdData = {0x18, 0xe8, },

    /* 9a61 (39521) */
    .KickedShellXSpdData = {0x30, 0xd0, },

    /* 9a63 (39523) */
    .DemotedKoopaXSpdData = {0x8, 0xf8, },

    /* 9a65 (39525) */
    .KickedShellPtsData = {0xa, 0x6, 0x4, },

    /* 9a68 (39528) */
    .StompedEnemyPtsData = {0x2, 0x6, 0x5, 0x6, },

    /* 9a6c (39532) */
    .RevivalRateData = {0x10, 0xb, },
// $01 - used to hold enemy offset for second enemy

    /* 9a6e (39534) */
    // $01 - used to hold enemy offset for second enemy
    .SetBitsMask = {0b10000000, 0b1000000, 0b100000, 0b10000, 0b1000, 0b100, 0b10, },

    /* 9a75 (39541) */
    .ClearBitsMask = {0b1111111, 0b10111111, 0b11011111, 0b11101111, 0b11110111, 0b11111011, 0b11111101, },

    /* 9a7c (39548) */
    .PlayerPosSPlatData = {0x80, 0x0, },
// $00-$01 - used to hold many values, essentially temp variables
// $04 - holds lower nybble of vertical coordinate from block buffer routine
// $eb - used to hold block buffer adder

    /* 9a7e (39550) */
    // $00-$01 - used to hold many values, essentially temp variables
    // $04 - holds lower nybble of vertical coordinate from block buffer routine
    // $eb - used to hold block buffer adder
    .PlayerBGUpperExtent = {0x20, 0x10, },

    /* 9a80 (39552) */
    .AreaChangeTimerData = {0xa0, 0x34, },
// $02 - high nybble of vertical coordinate from block buffer
// $04 - low nybble of horizontal coordinate from block buffer
// $06-$07 - block buffer address

    /* 9a82 (39554) */
    // $02 - high nybble of vertical coordinate from block buffer
    // $04 - low nybble of horizontal coordinate from block buffer
    // $06-$07 - block buffer address
    .ClimbXPosAdder = {0xf9, 0x7, },

    /* 9a84 (39556) */
    .ClimbPLocAdder = {0xff, 0x0, },

    /* 9a86 (39558) */
    .FlagpoleYPosData = {0x18, 0x22, 0x50, 0x68, 0x90, },

    /* 9a8b (39563) */
    .SolidMTileUpperExt = {0x10, 0x61, 0x88, 0xc4, },

    /* 9a8f (39567) */
    .ClimbMTileUpperExt = {0x24, 0x6d, 0x8a, 0xc6, },
// $06-$07 - address from block buffer routine

    /* 9a93 (39571) */
    // $06-$07 - address from block buffer routine
    .EnemyBGCStateData = {0x1, 0x1, 0x2, 0x2, 0x2, 0x5, },

    /* 9a99 (39577) */
    .EnemyBGCXSpdData = {0x10, 0xf0, },
// $00 - used to hold one of bitmasks, or offset
// $01 - used for relative X coordinate, also used to store middle screen page location
// $02 - used for relative Y coordinate, also used to store middle screen coordinate
// this data added to relative coordinates of sprite objects
// stored in order: left edge, top edge, right edge, bottom edge

    /* 9a9b (39579) */
    // $00 - used to hold one of bitmasks, or offset
    // $01 - used for relative X coordinate, also used to store middle screen page location
    // $02 - used for relative Y coordinate, also used to store middle screen coordinate
    // this data added to relative coordinates of sprite objects
    // stored in order: left edge, top edge, right edge, bottom edge
    .BoundBoxCtrlData = {0x2, 0x8, 0xe, 0x20, 0x3, 0x14, 0xd, 0x20, 0x2, 0x14, 0xe, 0x20, 0x2, 0x9, 0xe, 0x15, 0x0, 0x0, 0x18, 0x6, 0x0, 0x0, 0x20, 0xd, 0x0, 0x0, 0x30, 0xd, 0x0, 0x0, 0x8, 0x8, 0x6, 0x4, 0xa, 0x8, 0x3, 0xe, 0xd, 0x14, 0x0, 0x2, 0x10, 0x15, 0x4, 0x4, 0xc, 0x1c, },

    /* 9acb (39627) */
    .BlockBufferAdderData = {0x0, 0x7, 0xe, },

    /* 9ace (39630) */
    .BlockBuffer_X_Adder = {0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x0, 0x10, 0x4, 0x14, 0x4, 0x4, },

    /* 9aea (39658) */
    .BlockBuffer_Y_Adder = {0x4, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x2, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x12, 0x20, 0x20, 0x18, 0x18, 0x18, 0x18, 0x18, 0x14, 0x14, 0x6, 0x6, 0x8, 0x10, },
// $00 - offset to vine Y coordinate adder
// $02 - offset to sprite data

    /* 9b06 (39686) */
    // $00 - offset to vine Y coordinate adder
    // $02 - offset to sprite data
    .VineYPosAdder = {0x0, 0x30, },

    /* 9b08 (39688) */
    .FirstSprXPos = {0x4, 0x0, 0x4, 0x0, },

    /* 9b0c (39692) */
    .FirstSprYPos = {0x0, 0x4, 0x0, 0x4, },

    /* 9b10 (39696) */
    .SecondSprXPos = {0x0, 0x8, 0x0, 0x8, },

    /* 9b14 (39700) */
    .SecondSprYPos = {0x8, 0x0, 0x8, 0x0, },

    /* 9b18 (39704) */
    .FirstSprTilenum = {0x80, 0x82, 0x81, 0x83, },

    /* 9b1c (39708) */
    .SecondSprTilenum = {0x81, 0x83, 0x80, 0x82, },

    /* 9b20 (39712) */
    .HammerSprAttrib = {0x3, 0x3, 0xc3, 0xc3, },
// $00-$01 - used to hold tile numbers ($01 addressed in draw floatey number part)
// $02 - used to hold Y coordinate for floatey number
// $03 - residual byte used for flip (but value set here affects nothing)
// $04 - attribute byte for floatey number
// $05 - used as X coordinate for floatey number

    /* 9b24 (39716) */
    // $00-$01 - used to hold tile numbers ($01 addressed in draw floatey number part)
    // $02 - used to hold Y coordinate for floatey number
    // $03 - residual byte used for flip (but value set here affects nothing)
    // $04 - attribute byte for floatey number
    // $05 - used as X coordinate for floatey number
    .FlagpoleScoreNumTiles = {0xf9, 0x50, 0xf7, 0x50, 0xfa, 0xfb, 0xf8, 0xfb, 0xf6, 0xfb, },

    /* 9b2e (39726) */
    .JumpingCoinTiles = {0x60, 0x61, 0x62, 0x63, },
// $00-$01 - used to hold tiles for drawing the power-up, $00 also used to hold power-up type
// $02 - used to hold bottom row Y position
// $03 - used to hold flip control (not used here)
// $04 - used to hold sprite attributes
// $05 - used to hold X position
// $07 - counter
// tiles arranged in top left, right, bottom left, right order

    /* 9b32 (39730) */
    // $00-$01 - used to hold tiles for drawing the power-up, $00 also used to hold power-up type
    // $02 - used to hold bottom row Y position
    // $03 - used to hold flip control (not used here)
    // $04 - used to hold sprite attributes
    // $05 - used to hold X position
    // $07 - counter
    // tiles arranged in top left, right, bottom left, right order
    .PowerUpGfxTable = {
    // regular mushroom
    0x76, 0x77, 0x78, 0x79, 
    // fire flower
    0xd6, 0xd6, 0xd9, 0xd9, 
    // star
    0x8d, 0x8d, 0xe4, 0xe4, 
    // 1-up mushroom
    0x76, 0x77, 0x78, 0x79, },

    /* 9b42 (39746) */
    .PowerUpAttributes = {0x2, 0x1, 0x2, 0x1, },
// $00-$01 - used in DrawEnemyObjRow to hold sprite tile numbers
// $02 - used to store Y position
// $03 - used to store moving direction, used to flip enemies horizontally
// $04 - used to store enemy's sprite attributes
// $05 - used to store X position
// $eb - used to hold sprite data offset
// $ec - used to hold either altered enemy state or special value used in gfx handler as condition
// $ed - used to hold enemy state from buffer
// $ef - used to hold enemy code used in gfx handler (may or may not resemble Enemy_ID values)
// tiles arranged in top left, right, middle left, right, bottom left, right order

    /* 9b46 (39750) */
    // $00-$01 - used in DrawEnemyObjRow to hold sprite tile numbers
    // $02 - used to store Y position
    // $03 - used to store moving direction, used to flip enemies horizontally
    // $04 - used to store enemy's sprite attributes
    // $05 - used to store X position
    // $eb - used to hold sprite data offset
    // $ec - used to hold either altered enemy state or special value used in gfx handler as condition
    // $ed - used to hold enemy state from buffer
    // $ef - used to hold enemy code used in gfx handler (may or may not resemble Enemy_ID values)
    // tiles arranged in top left, right, middle left, right, bottom left, right order
    .EnemyGraphicsTable = {
    // buzzy beetle frame 1
    0xfc, 0xfc, 0xaa, 0xab, 0xac, 0xad, 
    // frame 2
    0xfc, 0xfc, 0xae, 0xaf, 0xb0, 0xb1, 
    // koopa troopa frame 1
    0xfc, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 
    // frame 2
    0xfc, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 
    // koopa paratroopa frame 1
    0x69, 0xa5, 0x6a, 0xa7, 0xa8, 0xa9, 
    // frame 2
    0x6b, 0xa0, 0x6c, 0xa2, 0xa3, 0xa4, 
    // spiny frame 1
    0xfc, 0xfc, 0x96, 0x97, 0x98, 0x99, 
    // frame 2
    0xfc, 0xfc, 0x9a, 0x9b, 0x9c, 0x9d, 
    // spiny's egg frame 1
    0xfc, 0xfc, 0x8f, 0x8e, 0x8e, 0x8f, 
    // frame 2
    0xfc, 0xfc, 0x95, 0x94, 0x94, 0x95, 
    // bloober frame 1
    0xfc, 0xfc, 0xdc, 0xdc, 0xdf, 0xdf, 
    // frame 2
    0xdc, 0xdc, 0xdd, 0xdd, 0xde, 0xde, 
    // cheep-cheep frame 1
    0xfc, 0xfc, 0xb2, 0xb3, 0xb4, 0xb5, 
    // frame 2
    0xfc, 0xfc, 0xb6, 0xb3, 0xb7, 0xb5, 
    // goomba
    0xfc, 0xfc, 0x70, 0x71, 0x72, 0x73, 
    // koopa shell frame 1 (upside-down)
    0xfc, 0xfc, 0x6e, 0x6e, 0x6f, 0x6f, 
    // frame 2
    0xfc, 0xfc, 0x6d, 0x6d, 0x6f, 0x6f, 
    // koopa shell frame 1 (rightsideup)
    0xfc, 0xfc, 0x6f, 0x6f, 0x6e, 0x6e, 
    // frame 2
    0xfc, 0xfc, 0x6f, 0x6f, 0x6d, 0x6d, 
    // buzzy beetle shell frame 1 (rightsideup)
    0xfc, 0xfc, 0xf4, 0xf4, 0xf5, 0xf5, 
    // frame 2
    0xfc, 0xfc, 0xf4, 0xf4, 0xf5, 0xf5, 
    // buzzy beetle shell frame 1 (upside-down)
    0xfc, 0xfc, 0xf5, 0xf5, 0xf4, 0xf4, 
    // frame 2
    0xfc, 0xfc, 0xf5, 0xf5, 0xf4, 0xf4, 
    // defeated goomba
    0xfc, 0xfc, 0xfc, 0xfc, 0xef, 0xef, 
    // lakitu frame 1
    0xb9, 0xb8, 0xbb, 0xba, 0xbc, 0xbc, 
    // frame 2
    0xfc, 0xfc, 0xbd, 0xbd, 0xbc, 0xbc, 
    // princess
    0x7a, 0x7b, 0xda, 0xdb, 0xd8, 0xd8, 
    // mushroom retainer
    0xcd, 0xcd, 0xce, 0xce, 0xcf, 0xcf, 
    // hammer bro frame 1
    0x7d, 0x7c, 0xd1, 0x8c, 0xd3, 0xd2, 
    // frame 2
    0x7d, 0x7c, 0x89, 0x88, 0x8b, 0x8a, 
    // frame 3
    0xd5, 0xd4, 0xe3, 0xe2, 0xd3, 0xd2, 
    // frame 4
    0xd5, 0xd4, 0xe3, 0xe2, 0x8b, 0x8a, 
    // piranha plant frame 1
    0xe5, 0xe5, 0xe6, 0xe6, 0xeb, 0xeb, 
    // frame 2
    0xec, 0xec, 0xed, 0xed, 0xee, 0xee, 
    // podoboo
    0xfc, 0xfc, 0xd0, 0xd0, 0xd7, 0xd7, 
    // bowser front frame 1
    0xbf, 0xbe, 0xc1, 0xc0, 0xc2, 0xfc, 
    // bowser rear frame 1
    0xc4, 0xc3, 0xc6, 0xc5, 0xc8, 0xc7, 
    // front frame 2
    0xbf, 0xbe, 0xca, 0xc9, 0xc2, 0xfc, 
    // rear frame 2
    0xc4, 0xc3, 0xc6, 0xc5, 0xcc, 0xcb, 
    // bullet bill
    0xfc, 0xfc, 0xe8, 0xe7, 0xea, 0xe9, 
    // jumpspring frame 1
    0xf2, 0xf2, 0xf3, 0xf3, 0xf2, 0xf2, 
    // frame 2
    0xf1, 0xf1, 0xf1, 0xf1, 0xfc, 0xfc, 
    // frame 3
    0xf0, 0xf0, 0xfc, 0xfc, 0xfc, 0xfc, },

    /* 9c48 (40008) */
    .EnemyGfxTableOffsets = {0xc, 0xc, 0x0, 0xc, 0xc, 0xa8, 0x54, 0x3c, 0xea, 0x18, 0x48, 0x48, 0xcc, 0xc0, 0x18, 0x18, 0x18, 0x90, 0x24, 0xff, 0x48, 0x9c, 0xd2, 0xd8, 0xf0, 0xf6, 0xfc, },

    /* 9c63 (40035) */
    .EnemyAttributeData = {0x1, 0x2, 0x3, 0x2, 0x1, 0x1, 0x3, 0x3, 0x3, 0x1, 0x1, 0x2, 0x2, 0x21, 0x1, 0x2, 0x1, 0x1, 0x2, 0xff, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2, },

    /* 9c7e (40062) */
    .EnemyAnimTimingBMask = {0x8, 0x18, },

    /* 9c80 (40064) */
    .JumpspringFrameOffsets = {0x18, 0x19, 0x1a, 0x19, 0x18, },
// $00-$01 - tile numbers
// $02 - relative Y position
// $03 - horizontal flip flag (not used here)
// $04 - attributes
// $05 - relative X position

    /* 9c85 (40069) */
    // $00-$01 - tile numbers
    // $02 - relative Y position
    // $03 - horizontal flip flag (not used here)
    // $04 - attributes
    // $05 - relative X position
    .DefaultBlockObjTiles = {
    // brick w/ line (these are sprite tiles, not BG!)
    0x85, 0x85, 0x86, 0x86, },

    /* 9c89 (40073) */
    .ExplosionTiles = {0x68, 0x67, 0x66, },
// $00 - used to store player's vertical offscreen bits

    /* 9c8c (40076) */
    // $00 - used to store player's vertical offscreen bits
    .PlayerGfxTblOffsets = {0x20, 0x28, 0xc8, 0x18, 0x0, 0x40, 0x50, 0x58, 0x80, 0x88, 0xb8, 0x78, 0x60, 0xa0, 0xb0, 0xb8, },
// tiles arranged in order, 2 tiles per row, top to bottom

    /* 9c9c (40092) */
    // tiles arranged in order, 2 tiles per row, top to bottom
    .PlayerGraphicsTable = {
    // big player table
    
    // walking frame 1
    0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 
    // frame 2
    0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 
    // frame 3
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
    // skidding
    0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
    // jumping
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
    // swimming frame 1
    0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
    // frame 2
    0x8, 0x9, 0xa, 0xb, 0xc, 0x30, 0x2c, 0x2d, 
    // frame 3
    0x8, 0x9, 0xa, 0xb, 0x2e, 0x2f, 0x2c, 0x2d, 
    // climbing frame 1
    0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0x5c, 0x5d, 
    // frame 2
    0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0x5e, 0x5f, 
    // crouching
    0xfc, 0xfc, 0x8, 0x9, 0x58, 0x59, 0x5a, 0x5a, 
    // fireball throwing
    0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0xe, 0xf, 
    // small player table
    
    // walking frame 1
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x34, 0x35, 
    // frame 2
    0xfc, 0xfc, 0xfc, 0xfc, 0x36, 0x37, 0x38, 0x39, 
    // frame 3
    0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x3b, 0x3c, 
    // skidding
    0xfc, 0xfc, 0xfc, 0xfc, 0x3d, 0x3e, 0x3f, 0x40, 
    // jumping
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x41, 0x42, 0x43, 
    // swimming frame 1
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x44, 0x45, 
    // frame 2
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x44, 0x47, 
    // frame 3
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x48, 0x49, 
    // climbing frame 1
    0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x90, 0x91, 
    // frame 2
    0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x92, 0x93, 
    // killed
    0xfc, 0xfc, 0xfc, 0xfc, 0x9e, 0x9e, 0x9f, 0x9f, 
    // used by both player sizes
    
    // small player standing
    0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x4f, 0x4f, 
    // intermediate grow frame
    0xfc, 0xfc, 0x0, 0x1, 0x4c, 0x4d, 0x4e, 0x4e, 
    // big player standing
    0x0, 0x1, 0x4c, 0x4d, 0x4a, 0x4a, 0x4b, 0x4b, },

    /* 9d6c (40300) */
    .SwimKickTileNum = {0x31, 0x46, },

    /* 9d6e (40302) */
    .IntermediatePlayerData = {0x58, 0x1, 0x0, 0x60, 0xff, 0x4, },

    /* 9d74 (40308) */
    .ChangeSizeOffsetAdder = {0x0, 0x1, 0x0, 0x1, 0x0, 0x1, 0x2, 0x0, 0x1, 0x2, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, },

    /* 9d88 (40328) */
    .ObjOffsetData = {0x7, 0x16, 0xd, },
// (these apply to these three subsections)
// $04 - used to store proper offset
// $05 - used as adder in DividePDiff
// $06 - used to store preset value used to compare to pixel difference in $07
// $07 - used to store difference between coordinates of object and screen edges

    /* 9d8b (40331) */
    // (these apply to these three subsections)
    // $04 - used to store proper offset
    // $05 - used as adder in DividePDiff
    // $06 - used to store preset value used to compare to pixel difference in $07
    // $07 - used to store difference between coordinates of object and screen edges
    .XOffscreenBitsData = {0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3, 0x1, 0x0, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, },

    /* 9d9b (40347) */
    .DefaultXOnscreenOfs = {0x7, 0xf, 0x7, },

    /* 9d9e (40350) */
    .YOffscreenBitsData = {0x0, 0x8, 0xc, 0xe, 0xf, 0x7, 0x3, 0x1, 0x0, },

    /* 9da7 (40359) */
    .DefaultYOnscreenOfs = {0x4, 0x0, 0x4, },

    /* 9daa (40362) */
    .HighPosUnitData = {0xff, 0x0, },

    /* 9dac (40364) */
    .SwimStompEnvelopeData = {0x9f, 0x9b, 0x98, 0x96, 0x95, 0x94, 0x92, 0x90, 0x90, 0x9a, 0x97, 0x95, 0x93, 0x92, },

    /* 9dba (40378) */
    .ExtraLifeFreqData = {0x58, 0x2, 0x54, 0x56, 0x4e, 0x44, },

    /* 9dc0 (40384) */
    .PowerUpGrabFreqData = {0x4c, 0x52, 0x4c, 0x48, 0x3e, 0x36, 0x3e, 0x36, 0x30, 0x28, 0x4a, 0x50, 0x4a, 0x64, 0x3c, 0x32, 0x3c, 0x32, 0x2c, 0x24, 0x3a, 0x64, 0x3a, 0x34, 0x2c, 0x22, 0x2c, 
    // residual frequency data
    0x22, 0x1c, 0x14, },

    /* 9dde (40414) */
    .PUp_VGrow_FreqData = {
    // used by both
    0x14, 0x4, 0x22, 0x24, 0x16, 0x4, 0x24, 0x26, 0x18, 0x4, 0x26, 0x28, 0x1a, 0x4, 0x28, 0x2a, 
    // used by vinegrow
    0x1c, 0x4, 0x2a, 0x2c, 0x1e, 0x4, 0x2c, 0x2e, 0x20, 0x4, 0x2e, 0x30, 0x22, 0x4, 0x30, 0x32, },

    /* 9dfe (40446) */
    .BrickShatterFreqData = {0x1, 0xe, 0xe, 0xd, 0xb, 0x6, 0xc, 0xf, 0xa, 0x9, 0x3, 0xd, 0x8, 0xd, 0x6, 0xc, },
// music header offsets

    /* 9e0e (40462) */
    // music header offsets
    .MusicHeaderData = {
    // event music
    ((0x8000+offsetof(G, DeathMusHdr)) - (MHD)), ((0x8000+offsetof(G, GameOverMusHdr)) - (MHD)), ((0x8000+offsetof(G, VictoryMusHdr)) - (MHD)), ((0x8000+offsetof(G, WinCastleMusHdr)) - (MHD)), ((0x8000+offsetof(G, GameOverMusHdr)) - (MHD)), ((0x8000+offsetof(G, EndOfLevelMusHdr)) - (MHD)), ((0x8000+offsetof(G, TimeRunningOutHdr)) - (MHD)), ((0x8000+offsetof(G, SilenceHdr)) - (MHD)), 
    // area music
    ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, WaterMusHdr)) - (MHD)), ((0x8000+offsetof(G, UndergroundMusHdr)) - (MHD)), ((0x8000+offsetof(G, CastleMusHdr)) - (MHD)), ((0x8000+offsetof(G, Star_CloudHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, Star_CloudHdr)) - (MHD)), ((0x8000+offsetof(G, SilenceHdr)) - (MHD)), 
    // ground level music layout
    ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), },
// music headers
// header format is as follows:
// 1 byte - length byte offset
// 2 bytes -  music data address
// 1 byte - triangle data offset
// 1 byte - square 1 data offset
// 1 byte - noise data offset (not used by secondary music)

    /* 9e3f (40511) */
    // music headers
    // header format is as follows:
    // 1 byte - length byte offset
    // 2 bytes -  music data address
    // 1 byte - triangle data offset
    // 1 byte - square 1 data offset
    // 1 byte - noise data offset (not used by secondary music)
    .TimeRunningOutHdr = {0x8, LO8(0x8000+offsetof(G, TimeRunOutMusData)), HI8(0x8000+offsetof(G, TimeRunOutMusData)), 0x27, 0x18, },

    /* 9e44 (40516) */
    .Star_CloudHdr = {0x20, LO8(0x8000+offsetof(G, Star_CloudMData)), HI8(0x8000+offsetof(G, Star_CloudMData)), 0x2e, 0x1a, 0x40, },

    /* 9e4a (40522) */
    .EndOfLevelMusHdr = {0x20, LO8(0x8000+offsetof(G, WinLevelMusData)), HI8(0x8000+offsetof(G, WinLevelMusData)), 0x3d, 0x21, },

    /* 9e4f (40527) */
    .ResidualHeaderData = {0x20, 0xc4, 0xfc, 0x3f, 0x1d, },

    /* 9e54 (40532) */
    .UndergroundMusHdr = {0x18, LO8(0x8000+offsetof(G, UndergroundMusData)), HI8(0x8000+offsetof(G, UndergroundMusData)), 0x0, 0x0, },

    /* 9e59 (40537) */
    .SilenceHdr = {0x8, LO8(0x8000+offsetof(G, SilenceData)), HI8(0x8000+offsetof(G, SilenceData)), 0x0, },

    /* 9e5d (40541) */
    .CastleMusHdr = {0x0, LO8(0x8000+offsetof(G, CastleMusData)), HI8(0x8000+offsetof(G, CastleMusData)), 0x93, 0x62, },

    /* 9e62 (40546) */
    .VictoryMusHdr = {0x10, LO8(0x8000+offsetof(G, VictoryMusData)), HI8(0x8000+offsetof(G, VictoryMusData)), 0x24, 0x14, },

    /* 9e67 (40551) */
    .GameOverMusHdr = {0x18, LO8(0x8000+offsetof(G, GameOverMusData)), HI8(0x8000+offsetof(G, GameOverMusData)), 0x1e, 0x14, },

    /* 9e6c (40556) */
    .WaterMusHdr = {0x8, LO8(0x8000+offsetof(G, WaterMusData)), HI8(0x8000+offsetof(G, WaterMusData)), 0xa0, 0x70, 0x68, },

    /* 9e72 (40562) */
    .WinCastleMusHdr = {0x8, LO8(0x8000+offsetof(G, EndOfCastleMusData)), HI8(0x8000+offsetof(G, EndOfCastleMusData)), 0x4c, 0x24, },

    /* 9e77 (40567) */
    .GroundLevelPart1Hdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P1Data)), HI8(0x8000+offsetof(G, GroundM_P1Data)), 0x2d, 0x1c, 0xb8, },

    /* 9e7d (40573) */
    .GroundLevelPart2AHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P2AData)), HI8(0x8000+offsetof(G, GroundM_P2AData)), 0x20, 0x12, 0x70, },

    /* 9e83 (40579) */
    .GroundLevelPart2BHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P2BData)), HI8(0x8000+offsetof(G, GroundM_P2BData)), 0x1b, 0x10, 0x44, },

    /* 9e89 (40585) */
    .GroundLevelPart2CHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P2CData)), HI8(0x8000+offsetof(G, GroundM_P2CData)), 0x11, 0xa, 0x1c, },

    /* 9e8f (40591) */
    .GroundLevelPart3AHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P3AData)), HI8(0x8000+offsetof(G, GroundM_P3AData)), 0x2d, 0x10, 0x58, },

    /* 9e95 (40597) */
    .GroundLevelPart3BHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P3BData)), HI8(0x8000+offsetof(G, GroundM_P3BData)), 0x14, 0xd, 0x3f, },

    /* 9e9b (40603) */
    .GroundLevelLeadInHdr = {0x18, LO8(0x8000+offsetof(G, GroundMLdInData)), HI8(0x8000+offsetof(G, GroundMLdInData)), 0x15, 0xd, 0x21, },

    /* 9ea1 (40609) */
    .GroundLevelPart4AHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P4AData)), HI8(0x8000+offsetof(G, GroundM_P4AData)), 0x18, 0x10, 0x7a, },

    /* 9ea7 (40615) */
    .GroundLevelPart4BHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P4BData)), HI8(0x8000+offsetof(G, GroundM_P4BData)), 0x19, 0xf, 0x54, },

    /* 9ead (40621) */
    .GroundLevelPart4CHdr = {0x18, LO8(0x8000+offsetof(G, GroundM_P4CData)), HI8(0x8000+offsetof(G, GroundM_P4CData)), 0x1e, 0x12, 0x2b, },

    /* 9eb3 (40627) */
    .DeathMusHdr = {0x18, LO8(0x8000+offsetof(G, DeathMusData)), HI8(0x8000+offsetof(G, DeathMusData)), 0x1e, 0xf, 0x2d, },
// MUSIC DATA
// square 2/triangle format
// d7 - length byte flag (0-note, 1-length)
// if d7 is set to 0 and d6-d0 is nonzero:
// d6-d0 - note offset in frequency look-up table (must be even)
// if d7 is set to 1:
// d6-d3 - unused
// d2-d0 - length offset in length look-up table
// value of $00 in square 2 data is used as null terminator, affects all sound channels
// value of $00 in triangle data causes routine to skip note
// square 1 format
// d7-d6, d0 - length offset in length look-up table (bit order is d0,d7,d6)
// d5-d1 - note offset in frequency look-up table
// value of $00 in square 1 data is flag alternate control reg data to be loaded
// noise format
// d7-d6, d0 - length offset in length look-up table (bit order is d0,d7,d6)
// d5-d4 - beat type (0 - rest, 1 - short, 2 - strong, 3 - long)
// d3-d1 - unused
// value of $00 in noise data is used as null terminator, affects only noise
// all music data is organized into sections (unless otherwise stated):
// square 2, square 1, triangle, noise

    /* 9eb9 (40633) */
    // MUSIC DATA
    // square 2/triangle format
    // d7 - length byte flag (0-note, 1-length)
    // if d7 is set to 0 and d6-d0 is nonzero:
    // d6-d0 - note offset in frequency look-up table (must be even)
    // if d7 is set to 1:
    // d6-d3 - unused
    // d2-d0 - length offset in length look-up table
    // value of $00 in square 2 data is used as null terminator, affects all sound channels
    // value of $00 in triangle data causes routine to skip note
    // square 1 format
    // d7-d6, d0 - length offset in length look-up table (bit order is d0,d7,d6)
    // d5-d1 - note offset in frequency look-up table
    // value of $00 in square 1 data is flag alternate control reg data to be loaded
    // noise format
    // d7-d6, d0 - length offset in length look-up table (bit order is d0,d7,d6)
    // d5-d4 - beat type (0 - rest, 1 - short, 2 - strong, 3 - long)
    // d3-d1 - unused
    // value of $00 in noise data is used as null terminator, affects only noise
    // all music data is organized into sections (unless otherwise stated):
    // square 2, square 1, triangle, noise
    .Star_CloudMData = {0x84, 0x2c, 0x2c, 0x2c, 0x82, 0x4, 0x2c, 0x4, 0x85, 0x2c, 0x84, 0x2c, 0x2c, 0x2a, 0x2a, 0x2a, 0x82, 0x4, 0x2a, 0x4, 0x85, 0x2a, 0x84, 0x2a, 0x2a, 0x0, 0x1f, 0x1f, 0x1f, 0x98, 0x1f, 0x1f, 0x98, 0x9e, 0x98, 0x1f, 0x1d, 0x1d, 0x1d, 0x94, 0x1d, 0x1d, 0x94, 0x9c, 0x94, 0x1d, 0x86, 0x18, 0x85, 0x26, 0x30, 0x84, 0x4, 0x26, 0x30, 0x86, 0x14, 0x85, 0x22, 0x2c, 0x84, 0x4, 0x22, 0x2c, 0x21, 0xd0, 0xc4, 0xd0, 0x31, 0xd0, 0xc4, 0xd0, 0x0, },

    /* 9f02 (40706) */
    .GroundM_P1Data = {0x85, 0x2c, 0x22, 0x1c, 0x84, 0x26, 0x2a, 0x82, 0x28, 0x26, 0x4, 0x87, 0x22, 0x34, 0x3a, 0x82, 0x40, 0x4, 0x36, 0x84, 0x3a, 0x34, 0x82, 0x2c, 0x30, 0x85, 0x2a, },

    /* 9f1d (40733) */
    .SilenceData = {0x0, 0x5d, 0x55, 0x4d, 0x15, 0x19, 0x96, 0x15, 0xd5, 0xe3, 0xeb, 0x2d, 0xa6, 0x2b, 0x27, 0x9c, 0x9e, 0x59, 0x85, 0x22, 0x1c, 0x14, 0x84, 0x1e, 0x22, 0x82, 0x20, 0x1e, 0x4, 0x87, 0x1c, 0x2c, 0x34, 0x82, 0x36, 0x4, 0x30, 0x34, 0x4, 0x2c, 0x4, 0x26, 0x2a, 0x85, 0x22, },

    /* 9f4a (40778) */
    .GroundM_P2AData = {0x84, 0x4, 0x82, 0x3a, 0x38, 0x36, 0x32, 0x4, 0x34, 0x4, 0x24, 0x26, 0x2c, 0x4, 0x26, 0x2c, 0x30, 0x0, 0x5, 0xb4, 0xb2, 0xb0, 0x2b, 0xac, 0x84, 0x9c, 0x9e, 0xa2, 0x84, 0x94, 0x9c, 0x9e, 0x85, 0x14, 0x22, 0x84, 0x2c, 0x85, 0x1e, 0x82, 0x2c, 0x84, 0x2c, 0x1e, },

    /* 9f76 (40822) */
    .GroundM_P2BData = {0x84, 0x4, 0x82, 0x3a, 0x38, 0x36, 0x32, 0x4, 0x34, 0x4, 0x64, 0x4, 0x64, 0x86, 0x64, 0x0, 0x5, 0xb4, 0xb2, 0xb0, 0x2b, 0xac, 0x84, 0x37, 0xb6, 0xb6, 0x45, 0x85, 0x14, 0x1c, 0x82, 0x22, 0x84, 0x2c, 0x4e, 0x82, 0x4e, 0x84, 0x4e, 0x22, },

    /* 9f9e (40862) */
    .GroundM_P2CData = {0x84, 0x4, 0x85, 0x32, 0x85, 0x30, 0x86, 0x2c, 0x4, 0x0, 0x5, 0xa4, 0x5, 0x9e, 0x5, 0x9d, 0x85, 0x84, 0x14, 0x85, 0x24, 0x28, 0x2c, 0x82, 0x22, 0x84, 0x22, 0x14, 0x21, 0xd0, 0xc4, 0xd0, 0x31, 0xd0, 0xc4, 0xd0, 0x0, },

    /* 9fc3 (40899) */
    .GroundM_P3AData = {0x82, 0x2c, 0x84, 0x2c, 0x2c, 0x82, 0x2c, 0x30, 0x4, 0x34, 0x2c, 0x4, 0x26, 0x86, 0x22, 0x0, 0xa4, 0x25, 0x25, 0xa4, 0x29, 0xa2, 0x1d, 0x9c, 0x95, },

    /* 9fdc (40924) */
    .GroundM_P3BData = {0x82, 0x2c, 0x2c, 0x4, 0x2c, 0x4, 0x2c, 0x30, 0x85, 0x34, 0x4, 0x4, 0x0, 0xa4, 0x25, 0x25, 0xa4, 0xa8, 0x63, 0x4, 
    // triangle data used by both sections of third part
    0x85, 0xe, 0x1a, 0x84, 0x24, 0x85, 0x22, 0x14, 0x84, 0xc, },

    /* 9ffa (40954) */
    .GroundMLdInData = {0x82, 0x34, 0x84, 0x34, 0x34, 0x82, 0x2c, 0x84, 0x34, 0x86, 0x3a, 0x4, 0x0, 0xa0, 0x21, 0x21, 0xa0, 0x21, 0x2b, 0x5, 0xa3, 0x82, 0x18, 0x84, 0x18, 0x18, 0x82, 0x18, 0x18, 0x4, 0x86, 0x3a, 0x22, 
    // noise data used by lead-in and third part sections
    0x31, 0x90, 0x31, 0x90, 0x31, 0x71, 0x31, 0x90, 0x90, 0x90, 0x0, },

    /* a026 (40998) */
    .GroundM_P4AData = {0x82, 0x34, 0x84, 0x2c, 0x85, 0x22, 0x84, 0x24, 0x82, 0x26, 0x36, 0x4, 0x36, 0x86, 0x26, 0x0, 0xac, 0x27, 0x5d, 0x1d, 0x9e, 0x2d, 0xac, 0x9f, 0x85, 0x14, 0x82, 0x20, 0x84, 0x22, 0x2c, 0x1e, 0x1e, 0x82, 0x2c, 0x2c, 0x1e, 0x4, },

    /* a04c (41036) */
    .GroundM_P4BData = {0x87, 0x2a, 0x40, 0x40, 0x40, 0x3a, 0x36, 0x82, 0x34, 0x2c, 0x4, 0x26, 0x86, 0x22, 0x0, 0xe3, 0xf7, 0xf7, 0xf7, 0xf5, 0xf1, 0xac, 0x27, 0x9e, 0x9d, 0x85, 0x18, 0x82, 0x1e, 0x84, 0x22, 0x2a, 0x22, 0x22, 0x82, 0x2c, 0x2c, 0x22, 0x4, },

    /* a073 (41075) */
    .DeathMusData = {
    // death music share data with fourth part c of ground level music
    0x86, 0x4, },

    /* a075 (41077) */
    .GroundM_P4CData = {0x82, 0x2a, 0x36, 0x4, 0x36, 0x87, 0x36, 0x34, 0x30, 0x86, 0x2c, 0x4, 0x0, 
    // death music only
    0x0, 0x68, 0x6a, 0x6c, 0x45, 0xa2, 0x31, 0xb0, 0xf1, 0xed, 0xeb, 0xa2, 0x1d, 0x9c, 0x95, 
    // death music only
    0x86, 0x4, 0x85, 0x22, 0x82, 0x22, 0x87, 0x22, 0x26, 0x2a, 0x84, 0x2c, 0x22, 0x86, 0x14, 
    // noise data used by fourth part sections
    0x51, 0x90, 0x31, 0x11, 0x0, },

    /* a0a5 (41125) */
    .CastleMusData = {0x80, 0x22, 0x28, 0x22, 0x26, 0x22, 0x24, 0x22, 0x26, 0x22, 0x28, 0x22, 0x2a, 0x22, 0x28, 0x22, 0x26, 0x22, 0x28, 0x22, 0x26, 0x22, 0x24, 0x22, 0x26, 0x22, 0x28, 0x22, 0x2a, 0x22, 0x28, 0x22, 0x26, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x24, 0x28, 0x30, 0x28, 0x32, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x2c, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x32, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x2c, 0x28, 0x2e, 0x0, 0x4, 0x70, 0x6e, 0x6c, 0x6e, 0x70, 0x72, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x6e, 0x70, 0x72, 0x70, 0x6e, 0x6e, 0x6c, 0x6e, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x6e, 0x6c, 0x6e, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x76, 0x78, 0x76, 0x74, 0x76, 0x74, 0x72, 0x74, 0x76, 0x78, 0x76, 0x74, 0x76, 0x74, 0x72, 0x74, 0x84, 0x1a, 0x83, 0x18, 0x20, 0x84, 0x1e, 0x83, 0x1c, 0x28, 0x26, 0x1c, 0x1a, 0x1c, },

    /* a146 (41286) */
    .GameOverMusData = {0x82, 0x2c, 0x4, 0x4, 0x22, 0x4, 0x4, 0x84, 0x1c, 0x87, 0x26, 0x2a, 0x26, 0x84, 0x24, 0x28, 0x24, 0x80, 0x22, 0x0, 0x9c, 0x5, 0x94, 0x5, 0xd, 0x9f, 0x1e, 0x9c, 0x98, 0x9d, 0x82, 0x22, 0x4, 0x4, 0x1c, 0x4, 0x4, 0x84, 0x14, 0x86, 0x1e, 0x80, 0x16, 0x80, 0x14, },

    /* a173 (41331) */
    .TimeRunOutMusData = {0x81, 0x1c, 0x30, 0x4, 0x30, 0x30, 0x4, 0x1e, 0x32, 0x4, 0x32, 0x32, 0x4, 0x20, 0x34, 0x4, 0x34, 0x34, 0x4, 0x36, 0x4, 0x84, 0x36, 0x0, 0x46, 0xa4, 0x64, 0xa4, 0x48, 0xa6, 0x66, 0xa6, 0x4a, 0xa8, 0x68, 0xa8, 0x6a, 0x44, 0x2b, 0x81, 0x2a, 0x42, 0x4, 0x42, 0x42, 0x4, 0x2c, 0x64, 0x4, 0x64, 0x64, 0x4, 0x2e, 0x46, 0x4, 0x46, 0x46, 0x4, 0x22, 0x4, 0x84, 0x22, },

    /* a1b1 (41393) */
    .WinLevelMusData = {0x87, 0x4, 0x6, 0xc, 0x14, 0x1c, 0x22, 0x86, 0x2c, 0x22, 0x87, 0x4, 0x60, 0xe, 0x14, 0x1a, 0x24, 0x86, 0x2c, 0x24, 0x87, 0x4, 0x8, 0x10, 0x18, 0x1e, 0x28, 0x86, 0x30, 0x30, 0x80, 0x64, 0x0, 0xcd, 0xd5, 0xdd, 0xe3, 0xed, 0xf5, 0xbb, 0xb5, 0xcf, 0xd5, 0xdb, 0xe5, 0xed, 0xf3, 0xbd, 0xb3, 0xd1, 0xd9, 0xdf, 0xe9, 0xf1, 0xf7, 0xbf, 0xff, 0xff, 0xff, 0x34, 
    // unused byte
    0x0, 0x86, 0x4, 0x87, 0x14, 0x1c, 0x22, 0x86, 0x34, 0x84, 0x2c, 0x4, 0x4, 0x4, 0x87, 0x14, 0x1a, 0x24, 0x86, 0x32, 0x84, 0x2c, 0x4, 0x86, 0x4, 0x87, 0x18, 0x1e, 0x28, 0x86, 0x36, 0x87, 0x30, 0x30, 0x30, 0x80, 0x2c, },
// square 2 and triangle use the same data, square 1 is unused

    /* a212 (41490) */
    // square 2 and triangle use the same data, square 1 is unused
    .UndergroundMusData = {0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x86, 0x4, 0x83, 0x1a, 0x18, 0x16, 0x84, 0x14, 0x1a, 0x18, 0xe, 0xc, 0x16, 0x83, 0x14, 0x20, 0x1e, 0x1c, 0x28, 0x26, 0x87, 0x24, 0x1a, 0x12, 0x10, 0x62, 0xe, 0x80, 0x4, 0x4, 0x0, },
// noise data directly follows square 2 here unlike in other songs

    /* a253 (41555) */
    // noise data directly follows square 2 here unlike in other songs
    .WaterMusData = {0x82, 0x18, 0x1c, 0x20, 0x22, 0x26, 0x28, 0x81, 0x2a, 0x2a, 0x2a, 0x4, 0x2a, 0x4, 0x83, 0x2a, 0x82, 0x22, 0x86, 0x34, 0x32, 0x34, 0x81, 0x4, 0x22, 0x26, 0x2a, 0x2c, 0x30, 0x86, 0x34, 0x83, 0x32, 0x82, 0x36, 0x84, 0x34, 0x85, 0x4, 0x81, 0x22, 0x86, 0x30, 0x2e, 0x30, 0x81, 0x4, 0x22, 0x26, 0x2a, 0x2c, 0x2e, 0x86, 0x30, 0x83, 0x22, 0x82, 0x36, 0x84, 0x34, 0x85, 0x4, 0x81, 0x22, 0x86, 0x3a, 0x3a, 0x3a, 0x82, 0x3a, 0x81, 0x40, 0x82, 0x4, 0x81, 0x3a, 0x86, 0x36, 0x36, 0x36, 0x82, 0x36, 0x81, 0x3a, 0x82, 0x4, 0x81, 0x36, 0x86, 0x34, 0x82, 0x26, 0x2a, 0x36, 0x81, 0x34, 0x34, 0x85, 0x34, 0x81, 0x2a, 0x86, 0x2c, 0x0, 0x84, 0x90, 0xb0, 0x84, 0x50, 0x50, 0xb0, 0x0, 0x98, 0x96, 0x94, 0x92, 0x94, 0x96, 0x58, 0x58, 0x58, 0x44, 0x5c, 0x44, 0x9f, 0xa3, 0xa1, 0xa3, 0x85, 0xa3, 0xe0, 0xa6, 0x23, 0xc4, 0x9f, 0x9d, 0x9f, 0x85, 0x9f, 0xd2, 0xa6, 0x23, 0xc4, 0xb5, 0xb1, 0xaf, 0x85, 0xb1, 0xaf, 0xad, 0x85, 0x95, 0x9e, 0xa2, 0xaa, 0x6a, 0x6a, 0x6b, 0x5e, 0x9d, 0x84, 0x4, 0x4, 0x82, 0x22, 0x86, 0x22, 0x82, 0x14, 0x22, 0x2c, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0x1c, 0x22, 0x2c, 0x14, 0x22, 0x2c, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0x1c, 0x22, 0x2c, 0x18, 0x22, 0x2a, 0x16, 0x20, 0x28, 0x18, 0x22, 0x2a, 0x12, 0x22, 0x2a, 0x18, 0x22, 0x2a, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0xc, 0x22, 0x2c, 0x14, 0x22, 0x34, 0x12, 0x22, 0x30, 0x10, 0x22, 0x2e, 0x16, 0x22, 0x34, 0x18, 0x26, 0x36, 0x16, 0x26, 0x36, 0x14, 0x26, 0x36, 0x12, 0x22, 0x36, 0x5c, 0x22, 0x34, 0xc, 0x22, 0x22, 0x81, 0x1e, 0x1e, 0x85, 0x1e, 0x81, 0x12, 0x86, 0x14, },

    /* a352 (41810) */
    .EndOfCastleMusData = {0x81, 0x2c, 0x22, 0x1c, 0x2c, 0x22, 0x1c, 0x85, 0x2c, 0x4, 0x81, 0x2e, 0x24, 0x1e, 0x2e, 0x24, 0x1e, 0x85, 0x2e, 0x4, 0x81, 0x32, 0x28, 0x22, 0x32, 0x28, 0x22, 0x85, 0x32, 0x87, 0x36, 0x36, 0x36, 0x84, 0x3a, 0x0, 0x5c, 0x54, 0x4c, 0x5c, 0x54, 0x4c, 0x5c, 0x1c, 0x1c, 0x5c, 0x5c, 0x5c, 0x5c, 0x5e, 0x56, 0x4e, 0x5e, 0x56, 0x4e, 0x5e, 0x1e, 0x1e, 0x5e, 0x5e, 0x5e, 0x5e, 0x62, 0x5a, 0x50, 0x62, 0x5a, 0x50, 0x62, 0x22, 0x22, 0x62, 0xe7, 0xe7, 0xe7, 0x2b, 0x86, 0x14, 0x81, 0x14, 0x80, 0x14, 0x14, 0x81, 0x14, 0x14, 0x14, 0x14, 0x86, 0x16, 0x81, 0x16, 0x80, 0x16, 0x16, 0x81, 0x16, 0x16, 0x16, 0x16, 0x81, 0x28, 0x22, 0x1a, 0x28, 0x22, 0x1a, 0x28, 0x80, 0x28, 0x28, 0x81, 0x28, 0x87, 0x2c, 0x2c, 0x2c, 0x84, 0x30, },

    /* a3c9 (41929) */
    .VictoryMusData = {0x83, 0x4, 0x84, 0xc, 0x83, 0x62, 0x10, 0x84, 0x12, 0x83, 0x1c, 0x22, 0x1e, 0x22, 0x26, 0x18, 0x1e, 0x4, 0x1c, 0x0, 0xe3, 0xe1, 0xe3, 0x1d, 0xde, 0xe0, 0x23, 0xec, 0x75, 0x74, 0xf0, 0xf4, 0xf6, 0xea, 0x31, 0x2d, 0x83, 0x12, 0x14, 0x4, 0x18, 0x1a, 0x1c, 0x14, 0x26, 0x22, 0x1e, 0x1c, 0x18, 0x1e, 0x22, 0xc, 0x14, 
    // unused space
    0xff, 0xff, 0xff, },

    /* a401 (41985) */
    .FreqRegLookupTbl = {0x0, 0x88, 0x0, 0x2f, 0x0, 0x0, 0x2, 0xa6, 0x2, 0x80, 0x2, 0x5c, 0x2, 0x3a, 0x2, 0x1a, 0x1, 0xdf, 0x1, 0xc4, 0x1, 0xab, 0x1, 0x93, 0x1, 0x7c, 0x1, 0x67, 0x1, 0x53, 0x1, 0x40, 0x1, 0x2e, 0x1, 0x1d, 0x1, 0xd, 0x0, 0xfe, 0x0, 0xef, 0x0, 0xe2, 0x0, 0xd5, 0x0, 0xc9, 0x0, 0xbe, 0x0, 0xb3, 0x0, 0xa9, 0x0, 0xa0, 0x0, 0x97, 0x0, 0x8e, 0x0, 0x86, 0x0, 0x77, 0x0, 0x7e, 0x0, 0x71, 0x0, 0x54, 0x0, 0x64, 0x0, 0x5f, 0x0, 0x59, 0x0, 0x50, 0x0, 0x47, 0x0, 0x43, 0x0, 0x3b, 0x0, 0x35, 0x0, 0x2a, 0x0, 0x23, 0x4, 0x75, 0x3, 0x57, 0x2, 0xf9, 0x2, 0xcf, 0x1, 0xfc, 0x0, 0x6a, },

    /* a467 (42087) */
    .MusicLengthLookupTbl = {0x5, 0xa, 0x14, 0x28, 0x50, 0x1e, 0x3c, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x18, 0x30, 0xc, 0x3, 0x6, 0xc, 0x18, 0x30, 0x12, 0x24, 0x8, 0x36, 0x3, 0x9, 0x6, 0x12, 0x1b, 0x24, 0xc, 0x24, 0x2, 0x6, 0x4, 0xc, 0x12, 0x18, 0x8, 0x12, 0x1, 0x3, 0x2, 0x6, 0x9, 0xc, 0x4, },

    /* a497 (42135) */
    .EndOfCastleMusicEnvData = {0x98, 0x99, 0x9a, 0x9b, },

    /* a49b (42139) */
    .AreaMusicEnvData = {0x90, 0x94, 0x94, 0x95, 0x95, 0x96, 0x97, 0x98, },

    /* a4a3 (42147) */
    .WaterEventMusEnvData = {0x90, 0x91, 0x92, 0x92, 0x93, 0x93, 0x93, 0x94, 0x94, 0x94, 0x94, 0x94, 0x94, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x95, 0x95, 0x94, 0x93, },

    /* a4cb (42187) */
    .BowserFlameEnvData = {0x15, 0x16, 0x16, 0x17, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1a, 0x1c, 0x1d, 0x1d, 0x1e, 0x1e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1e, 0x1d, 0x1c, 0x1e, 0x1f, 0x1f, 0x1e, 0x1d, 0x1c, 0x1a, 0x18, 0x16, 0x14, },

    /* a4eb (42219) */
    .BrickShatterEnvData = {0x15, 0x16, 0x16, 0x17, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1a, 0x1c, 0x1d, 0x1d, 0x1e, 0x1e, 0x1f, },
};
Memory::ROM gROM((byte*) &g);

void preStart() {                 
    m.addRegion(                    
        Memory::Region {            
            gROM, 0x8000, 0x7fff });
}

void Start() {
    _debug("Start", __FILE__, __LINE__);
    // pretty standard 6502 type init here
    sei();
    cld();
    // init PPU control register 1
    lda(IMM(0b10000));
    sta(ABS(PPU_CTRL_REG1));
    // reset stack pointer
    ldx(IMM(0xff));
    txs();
    JMP(VBlank1);
}
void VBlank1() {
    _debug("VBlank1", __FILE__, __LINE__);
    // wait two frames
    lda(ABS(PPU_STATUS));
    BPL(VBlank1);
    JMP(VBlank2);
}
void VBlank2() {
    _debug("VBlank2", __FILE__, __LINE__);
    lda(ABS(PPU_STATUS));
    BPL(VBlank2);
    // load default cold boot pointer
    ldy(IMM(ColdBootOffset));
    // this is where we check for a warm boot
    ldx(IMM(0x5));
    JMP(WBootCheck);
}
void WBootCheck() {
    _debug("WBootCheck", __FILE__, __LINE__);
    // check each score digit in the top score
    lda(ABSX(TopScoreDisplay));
    // to see if we have a valid digit
    cmp(IMM(10));
    // if not, give up and proceed with cold boot
    BCS(ColdBoot);
    dex();
    BPL(WBootCheck);
    // second checkpoint, check to see if
    lda(ABS(WarmBootValidation));
    // another location has a specific value
    cmp(IMM(0xa5));
    BNE(ColdBoot);
    // if passed both, load warm boot pointer
    ldy(IMM(WarmBootOffset));
    JMP(ColdBoot);
}
void ColdBoot() {
    _debug("ColdBoot", __FILE__, __LINE__);
    // clear memory using pointer in Y
    JSR(InitializeMemory);
    // reset delta counter load register
    sta(ABS(((SND_DELTA_REG) + (1))));
    // reset primary mode of operation
    sta(ABS(OperMode));
    // set warm boot flag
    lda(IMM(0xa5));
    sta(ABS(WarmBootValidation));
    // set seed for pseudorandom register
    sta(ABS(PseudoRandomBitReg));
    lda(IMM(0b1111));
    // enable all sound channels except dmc
    sta(ABS(SND_MASTERCTRL_REG));
    lda(IMM(0b110));
    // turn off clipping for OAM and background
    sta(ABS(PPU_CTRL_REG2));
    JSR(MoveAllSpritesOffscreen);
    // initialize both name tables
    JSR(InitializeNameTables);
    // set flag to disable screen output
    inc(ABS(DisableScreenFlag));
    lda(ABS(Mirror_PPU_CTRL_REG1));
    // enable NMIs
    ora(IMM(0b10000000));
    JSR(WritePPUReg1);
    return;
}
void NonMaskableInterrupt() {
    _debug("NonMaskableInterrupt", __FILE__, __LINE__);
    // disable NMIs in mirror reg
    lda(ABS(Mirror_PPU_CTRL_REG1));
    // save all other bits
    anda(IMM(0b1111111));
    sta(ABS(Mirror_PPU_CTRL_REG1));
    // alter name table address to be $2800
    anda(IMM(0b1111110));
    // (essentially $2000) but save other bits
    sta(ABS(PPU_CTRL_REG1));
    // disable OAM and background display by default
    lda(ABS(Mirror_PPU_CTRL_REG2));
    anda(IMM(0b11100110));
    // get screen disable flag
    ldy(ABS(DisableScreenFlag));
    // if set, used bits as-is
    BNE(ScreenOff);
    // otherwise reenable bits and save them
    lda(ABS(Mirror_PPU_CTRL_REG2));
    ora(IMM(0b11110));
    JMP(ScreenOff);
}
void ScreenOff() {
    _debug("ScreenOff", __FILE__, __LINE__);
    // save bits for later but not in register at the moment
    sta(ABS(Mirror_PPU_CTRL_REG2));
    // disable screen for now
    anda(IMM(0b11100111));
    sta(ABS(PPU_CTRL_REG2));
    // reset flip-flop and reset scroll registers to zero
    ldx(ABS(PPU_STATUS));
    lda(IMM(0x0));
    JSR(InitScroll);
    // reset spr-ram address register
    sta(ABS(PPU_SPR_ADDR));
    // perform spr-ram DMA access on $0200-$02ff
    lda(IMM(0x2));
    sta(ABS(SPR_DMA));
    // load control for pointer to buffer contents
    ldx(ABS(VRAM_Buffer_AddrCtrl));
    // set indirect at $00 to pointer
    lda(ABSX(0x8000+offsetof(G, VRAM_AddrTable_Low)));
    sta(ABS(0x0));
    lda(ABSX(0x8000+offsetof(G, VRAM_AddrTable_High)));
    sta(ABS(0x1));
    // update screen with buffer contents
    JSR(UpdateScreen);
    ldy(IMM(0x0));
    // check for usage of $0341
    ldx(ABS(VRAM_Buffer_AddrCtrl));
    cpx(IMM(0x6));
    BNE(InitBuffer);
    // get offset based on usage
    iny();
    JMP(InitBuffer);
}
void InitBuffer() {
    _debug("InitBuffer", __FILE__, __LINE__);
    ldx(ABSY(0x8000+offsetof(G, VRAM_Buffer_Offset)));
    // clear buffer header at last location
    lda(IMM(0x0));
    sta(ABSX(VRAM_Buffer1_Offset));
    sta(ABSX(VRAM_Buffer1));
    // reinit address control to $0301
    sta(ABS(VRAM_Buffer_AddrCtrl));
    // copy mirror of $2001 to register
    lda(ABS(Mirror_PPU_CTRL_REG2));
    sta(ABS(PPU_CTRL_REG2));
    // play sound
    JSR(SoundEngine);
    // read joypads
    JSR(ReadJoypads);
    // handle pause
    JSR(PauseRoutine);
    JSR(UpdateTopScore);
    // check for pause status
    lda(ABS(GamePauseStatus));
    lsr();
    BCS(PauseSkip);
    // if master timer control not set, decrement
    lda(ABS(TimerControl));
    // all frame and interval timers
    BEQ(DecTimers);
    dec(ABS(TimerControl));
    BNE(NoDecTimers);
    JMP(DecTimers);
}
void DecTimers() {
    _debug("DecTimers", __FILE__, __LINE__);
    // load end offset for end of frame timers
    ldx(IMM(0x14));
    // decrement interval timer control,
    dec(ABS(IntervalTimerControl));
    // if not expired, only frame timers will decrement
    BPL(DecTimersLoop);
    lda(IMM(0x14));
    // if control for interval timers expired,
    sta(ABS(IntervalTimerControl));
    // interval timers will decrement along with frame timers
    ldx(IMM(0x23));
    JMP(DecTimersLoop);
}
void DecTimersLoop() {
    _debug("DecTimersLoop", __FILE__, __LINE__);
    // check current timer
    lda(ABSX(Timers));
    // if current timer expired, branch to skip,
    BEQ(SkipExpTimer);
    // otherwise decrement the current timer
    dec(ABSX(Timers));
    JMP(SkipExpTimer);
}
void SkipExpTimer() {
    _debug("SkipExpTimer", __FILE__, __LINE__);
    // move onto next timer
    dex();
    // do this until all timers are dealt with
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}
void NoDecTimers() {
    _debug("NoDecTimers", __FILE__, __LINE__);
    // increment frame counter
    inc(ABS(FrameCounter));
    JMP(PauseSkip);
}
void PauseSkip() {
    _debug("PauseSkip", __FILE__, __LINE__);
    ldx(IMM(0x0));
    ldy(IMM(0x7));
    // get first memory location of LSFR bytes
    lda(ABS(PseudoRandomBitReg));
    // mask out all but d1
    anda(IMM(0b10));
    // save here
    sta(ABS(0x0));
    // get second memory location
    lda(ABS(((PseudoRandomBitReg) + (1))));
    // mask out all but d1
    anda(IMM(0b10));
    // perform exclusive-OR on d1 from first and second bytes
    eor(ABS(0x0));
    // if neither or both are set, carry will be clear
    clc();
    BEQ(RotPRandomBit);
    // if one or the other is set, carry will be set
    sec();
    JMP(RotPRandomBit);
}
void RotPRandomBit() {
    _debug("RotPRandomBit", __FILE__, __LINE__);
    // rotate carry into d7, and rotate last bit into carry
    ror(ABSX(PseudoRandomBitReg));
    // increment to next byte
    inx();
    // decrement for loop
    dey();
    BNE(RotPRandomBit);
    // check for flag here
    lda(ABS(Sprite0HitDetectFlag));
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}
void Sprite0Clr() {
    _debug("Sprite0Clr", __FILE__, __LINE__);
    // wait for sprite 0 flag to clear, which will
    lda(ABS(PPU_STATUS));
    // not happen until vblank has ended
    anda(IMM(0b1000000));
    BNE(Sprite0Clr);
    // if in pause mode, do not bother with sprites at all
    lda(ABS(GamePauseStatus));
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}
void Sprite0Hit() {
    _debug("Sprite0Hit", __FILE__, __LINE__);
    // do sprite #0 hit detection
    lda(ABS(PPU_STATUS));
    anda(IMM(0b1000000));
    BEQ(Sprite0Hit);
    // small delay, to wait until we hit horizontal blank time
    ldy(IMM(0x14));
    JMP(HBlankDelay);
}
void HBlankDelay() {
    _debug("HBlankDelay", __FILE__, __LINE__);
    dey();
    BNE(HBlankDelay);
    JMP(SkipSprite0);
}
void SkipSprite0() {
    _debug("SkipSprite0", __FILE__, __LINE__);
    // set scroll registers from variables
    lda(ABS(HorizontalScroll));
    sta(ABS(PPU_SCROLL_REG));
    lda(ABS(VerticalScroll));
    sta(ABS(PPU_SCROLL_REG));
    // load saved mirror of $2000
    lda(ABS(Mirror_PPU_CTRL_REG1));
    pha();
    sta(ABS(PPU_CTRL_REG1));
    // if in pause mode, do not perform operation mode stuff
    lda(ABS(GamePauseStatus));
    lsr();
    BCS(SkipMainOper);
    // otherwise do one of many, many possible subroutines
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}
void SkipMainOper() {
    _debug("SkipMainOper", __FILE__, __LINE__);
    // reset flip-flop
    lda(ABS(PPU_STATUS));
    pla();
    // reactivate NMIs
    ora(IMM(0b10000000));
    sta(ABS(PPU_CTRL_REG1));
    // we are done until the next frame!
    return;
}
void PauseRoutine() {
    _debug("PauseRoutine", __FILE__, __LINE__);
    // are we in victory mode?
    lda(ABS(OperMode));
    // if so, go ahead
    cmp(IMM(VictoryModeValue));
    BEQ(ChkPauseTimer);
    // are we in game mode?
    cmp(IMM(GameModeValue));
    // if not, leave
    BNE(ExitPause);
    // if we are in game mode, are we running game engine?
    lda(ABS(OperMode_Task));
    cmp(IMM(0x3));
    // if not, leave
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}
void ChkPauseTimer() {
    _debug("ChkPauseTimer", __FILE__, __LINE__);
    // check if pause timer is still counting down
    lda(ABS(GamePauseTimer));
    BEQ(ChkStart);
    // if so, decrement and leave
    dec(ABS(GamePauseTimer));
    return;
}
void ChkStart() {
    _debug("ChkStart", __FILE__, __LINE__);
    // check to see if start is pressed
    lda(ABS(SavedJoypad1Bits));
    // on controller 1
    anda(IMM(Start_Button));
    BEQ(ClrPauseTimer);
    // check to see if timer flag is set
    lda(ABS(GamePauseStatus));
    // and if so, do not reset timer (residual,
    anda(IMM(0b10000000));
    // joypad reading routine makes this unnecessary)
    BNE(ExitPause);
    // set pause timer
    lda(IMM(0x2b));
    sta(ABS(GamePauseTimer));
    lda(ABS(GamePauseStatus));
    tay();
    // set pause sfx queue for next pause mode
    iny();
    sty(ABS(PauseSoundQueue));
    // invert d0 and set d7
    eor(IMM(0b1));
    ora(IMM(0b10000000));
    // unconditional branch
    BNE(SetPause);
    JMP(ClrPauseTimer);
}
void ClrPauseTimer() {
    _debug("ClrPauseTimer", __FILE__, __LINE__);
    // clear timer flag if timer is at zero and start button
    lda(ABS(GamePauseStatus));
    // is not pressed
    anda(IMM(0b1111111));
    JMP(SetPause);
}
void SetPause() {
    _debug("SetPause", __FILE__, __LINE__);
    sta(ABS(GamePauseStatus));
    JMP(ExitPause);
}
void ExitPause() {
    _debug("ExitPause", __FILE__, __LINE__);
    return;
}
// $00 - used for preset value
void SpriteShuffler() {
    _debug("SpriteShuffler", __FILE__, __LINE__);
    // load level type, likely residual code
    ldy(ABS(AreaType));
    // load preset value which will put it at
    lda(IMM(0x28));
    // sprite #10
    sta(ABS(0x0));
    // start at the end of OAM data offsets
    ldx(IMM(0xe));
    JMP(ShuffleLoop);
}
void ShuffleLoop() {
    _debug("ShuffleLoop", __FILE__, __LINE__);
    // check for offset value against
    lda(ABSX(SprDataOffset));
    // the preset value
    cmp(ABS(0x0));
    // if less, skip this part
    BCC(NextSprOffset);
    // get current offset to preset value we want to add
    ldy(ABS(SprShuffleAmtOffset));
    clc();
    // get shuffle amount, add to current sprite offset
    adc(ABSY(SprShuffleAmt));
    // if not exceeded $ff, skip second add
    BCC(StrSprOffset);
    clc();
    // otherwise add preset value $28 to offset
    adc(ABS(0x0));
    JMP(StrSprOffset);
}
void StrSprOffset() {
    _debug("StrSprOffset", __FILE__, __LINE__);
    // store new offset here or old one if branched to here
    sta(ABSX(SprDataOffset));
    JMP(NextSprOffset);
}
void NextSprOffset() {
    _debug("NextSprOffset", __FILE__, __LINE__);
    // move backwards to next one
    dex();
    BPL(ShuffleLoop);
    // load offset
    ldx(ABS(SprShuffleAmtOffset));
    inx();
    // check if offset + 1 goes to 3
    cpx(IMM(0x3));
    // if offset + 1 not 3, store
    BNE(SetAmtOffset);
    // otherwise, init to 0
    ldx(IMM(0x0));
    JMP(SetAmtOffset);
}
void SetAmtOffset() {
    _debug("SetAmtOffset", __FILE__, __LINE__);
    stx(ABS(SprShuffleAmtOffset));
    // load offsets for values and storage
    ldx(IMM(0x8));
    ldy(IMM(0x2));
    JMP(SetMiscOffset);
}
void SetMiscOffset() {
    _debug("SetMiscOffset", __FILE__, __LINE__);
    // load one of three OAM data offsets
    lda(ABSY(((SprDataOffset) + (5))));
    // store first one unmodified, but
    sta(ABSX(((Misc_SprDataOffset) - (2))));
    // add eight to the second and eight
    clc();
    // more to the third one
    adc(IMM(0x8));
    // note that due to the way X is set up,
    sta(ABSX(((Misc_SprDataOffset) - (1))));
    // this code loads into the misc sprite offsets
    clc();
    adc(IMM(0x8));
    sta(ABSX(Misc_SprDataOffset));
    dex();
    dex();
    dex();
    dey();
    // do this until all misc spr offsets are loaded
    BPL(SetMiscOffset);
    return;
}
void OperModeExecutionTree() {
    _debug("OperModeExecutionTree", __FILE__, __LINE__);
    // this is the heart of the entire program,
    lda(ABS(OperMode));
    static JUMP_ENTRY jumptable[4] = {
        TitleScreenMode,
        GameMode,
        VictoryMode,
        GameOverMode,
    };
    JMP(jumptable[a.read()]);
}
void MoveAllSpritesOffscreen() {
    _debug("MoveAllSpritesOffscreen", __FILE__, __LINE__);
    // this routine moves all sprites off the screen
    ldy(IMM(0x0));
    JMP(MoveSpritesOffscreen_Skip);
    JMP(MoveSpritesOffscreen);
}
void MoveSpritesOffscreen() {
    _debug("MoveSpritesOffscreen", __FILE__, __LINE__);
    // this routine moves all but sprite 0
    ldy(IMM(0x4));
    JMP(MoveSpritesOffscreen_Skip);
}
void MoveSpritesOffscreen_Skip() {
    _debug("MoveSpritesOffscreen_Skip", __FILE__, __LINE__);
    // off the screen
    lda(IMM(0xf8));
    JMP(SprInitLoop);
}
void SprInitLoop() {
    _debug("SprInitLoop", __FILE__, __LINE__);
    // write 248 into OAM data's Y coordinate
    sta(ABSY(Sprite_Y_Position));
    // which will move it off the screen
    iny();
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    return;
}
void TitleScreenMode() {
    _debug("TitleScreenMode", __FILE__, __LINE__);
    lda(ABS(OperMode_Task));
    static JUMP_ENTRY jumptable[4] = {
        InitializeGame,
        ScreenRoutines,
        PrimaryGameSetup,
        GameMenuRoutine,
    };
    JMP(jumptable[a.read()]);
}
void GameMenuRoutine() {
    _debug("GameMenuRoutine", __FILE__, __LINE__);
    ldy(IMM(0x0));
    // check to see if either player pressed
    lda(ABS(SavedJoypad1Bits));
    // only the start button (either joypad)
    ora(ABS(SavedJoypad2Bits));
    cmp(IMM(Start_Button));
    BEQ(StartGame);
    // check to see if A + start was pressed
    cmp(IMM(((A_Button) + (Start_Button))));
    // if not, branch to check select button
    BNE(ChkSelect);
    JMP(StartGame);
}
void StartGame() {
    _debug("StartGame", __FILE__, __LINE__);
    // if either start or A + start, execute here
    JMP(ChkContinue);
    JMP(ChkSelect);
}
void ChkSelect() {
    _debug("ChkSelect", __FILE__, __LINE__);
    // check to see if the select button was pressed
    cmp(IMM(Select_Button));
    // if so, branch reset demo timer
    BEQ(SelectBLogic);
    // otherwise check demo timer
    ldx(ABS(DemoTimer));
    // if demo timer not expired, branch to check world selection
    BNE(ChkWorldSel);
    // set controller bits here if running demo
    sta(ABS(SelectTimer));
    // run through the demo actions
    JSR(DemoEngine);
    // if carry flag set, demo over, thus branch
    BCS(ResetTitle);
    // otherwise, run game engine for demo
    JMP(RunDemo);
    JMP(ChkWorldSel);
}
void ChkWorldSel() {
    _debug("ChkWorldSel", __FILE__, __LINE__);
    // check to see if world selection has been enabled
    ldx(ABS(WorldSelectEnableFlag));
    BEQ(NullJoypad);
    // if so, check to see if the B button was pressed
    cmp(IMM(B_Button));
    BNE(NullJoypad);
    // if so, increment Y and execute same code as select
    iny();
    JMP(SelectBLogic);
}
void SelectBLogic() {
    _debug("SelectBLogic", __FILE__, __LINE__);
    // if select or B pressed, check demo timer one last time
    lda(ABS(DemoTimer));
    // if demo timer expired, branch to reset title screen mode
    BEQ(ResetTitle);
    // otherwise reset demo timer
    lda(IMM(0x18));
    sta(ABS(DemoTimer));
    // check select/B button timer
    lda(ABS(SelectTimer));
    // if not expired, branch
    BNE(NullJoypad);
    // otherwise reset select button timer
    lda(IMM(0x10));
    sta(ABS(SelectTimer));
    // was the B button pressed earlier?  if so, branch
    cpy(IMM(0x1));
    // note this will not be run if world selection is disabled
    BEQ(IncWorldSel);
    // if no, must have been the select button, therefore
    lda(ABS(NumberOfPlayers));
    // change number of players and draw icon accordingly
    eor(IMM(0b1));
    sta(ABS(NumberOfPlayers));
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}
void IncWorldSel() {
    _debug("IncWorldSel", __FILE__, __LINE__);
    // increment world select number
    ldx(ABS(WorldSelectNumber));
    inx();
    txa();
    // mask out higher bits
    anda(IMM(0b111));
    // store as current world select number
    sta(ABS(WorldSelectNumber));
    JSR(GoContinue);
    JMP(UpdateShroom);
}
void UpdateShroom() {
    _debug("UpdateShroom", __FILE__, __LINE__);
    // write template for world select in vram buffer
    lda(ABSX(0x8000+offsetof(G, WSelectBufferTemplate)));
    // do this until all bytes are written
    sta(ABSX(((VRAM_Buffer1) - (1))));
    inx();
    cpx(IMM(0x6));
    BMI(UpdateShroom);
    // get world number from variable and increment for
    ldy(ABS(WorldNumber));
    // proper display, and put in blank byte before
    iny();
    // null terminator
    sty(ABS(((VRAM_Buffer1) + (3))));
    JMP(NullJoypad);
}
void NullJoypad() {
    _debug("NullJoypad", __FILE__, __LINE__);
    // clear joypad bits for player 1
    lda(IMM(0x0));
    sta(ABS(SavedJoypad1Bits));
    JMP(RunDemo);
}
void RunDemo() {
    _debug("RunDemo", __FILE__, __LINE__);
    // run game engine
    JSR(GameCoreRoutine);
    // check to see if we're running lose life routine
    lda(ABS(GameEngineSubroutine));
    cmp(IMM(0x6));
    // if not, do not do all the resetting below
    BNE(ExitMenu);
    JMP(ResetTitle);
}
void ResetTitle() {
    _debug("ResetTitle", __FILE__, __LINE__);
    // reset game modes, disable
    lda(IMM(0x0));
    // sprite 0 check and disable
    sta(ABS(OperMode));
    // screen output
    sta(ABS(OperMode_Task));
    sta(ABS(Sprite0HitDetectFlag));
    inc(ABS(DisableScreenFlag));
    return;
}
void ChkContinue() {
    _debug("ChkContinue", __FILE__, __LINE__);
    // if timer for demo has expired, reset modes
    ldy(ABS(DemoTimer));
    BEQ(ResetTitle);
    // check to see if A button was also pushed
    asl();
    // if not, don't load continue function's world number
    BCC(StartWorld1);
    // load previously saved world number for secret
    lda(ABS(ContinueWorld));
    // continue function when pressing A + start
    JSR(GoContinue);
    JMP(StartWorld1);
}
void StartWorld1() {
    _debug("StartWorld1", __FILE__, __LINE__);
    JSR(LoadAreaPointer);
    // set 1-up box flag for both players
    inc(ABS(Hidden1UpFlag));
    inc(ABS(OffScr_Hidden1UpFlag));
    // set fetch new game timer flag
    inc(ABS(FetchNewGameTimerFlag));
    // set next game mode
    inc(ABS(OperMode));
    // if world select flag is on, then primary
    lda(ABS(WorldSelectEnableFlag));
    // hard mode must be on as well
    sta(ABS(PrimaryHardMode));
    lda(IMM(0x0));
    // set game mode here, and clear demo timer
    sta(ABS(OperMode_Task));
    sta(ABS(DemoTimer));
    ldx(IMM(0x17));
    lda(IMM(0x0));
    JMP(InitScores);
}
void InitScores() {
    _debug("InitScores", __FILE__, __LINE__);
    // clear player scores and coin displays
    sta(ABSX(ScoreAndCoinDisplay));
    dex();
    BPL(InitScores);
    JMP(ExitMenu);
}
void ExitMenu() {
    _debug("ExitMenu", __FILE__, __LINE__);
    return;
}
void GoContinue() {
    _debug("GoContinue", __FILE__, __LINE__);
    // start both players at the first area
    sta(ABS(WorldNumber));
    // of the previously saved world number
    sta(ABS(OffScr_WorldNumber));
    // note that on power-up using this function
    ldx(IMM(0x0));
    // will make no difference
    stx(ABS(AreaNumber));
    stx(ABS(OffScr_AreaNumber));
    return;
}
void DrawMushroomIcon() {
    _debug("DrawMushroomIcon", __FILE__, __LINE__);
    // read eight bytes to be read by transfer routine
    ldy(IMM(0x7));
    JMP(IconDataRead);
}
void IconDataRead() {
    _debug("IconDataRead", __FILE__, __LINE__);
    // note that the default position is set for a
    lda(ABSY(0x8000+offsetof(G, MushroomIconData)));
    // 1-player game
    sta(ABSY(((VRAM_Buffer1) - (1))));
    dey();
    BPL(IconDataRead);
    // check number of players
    lda(ABS(NumberOfPlayers));
    // if set to 1-player game, we're done
    BEQ(ExitIcon);
    // otherwise, load blank tile in 1-player position
    lda(IMM(0x24));
    sta(ABS(((VRAM_Buffer1) + (3))));
    // then load shroom icon tile in 2-player position
    lda(IMM(0xce));
    sta(ABS(((VRAM_Buffer1) + (5))));
    JMP(ExitIcon);
}
void ExitIcon() {
    _debug("ExitIcon", __FILE__, __LINE__);
    return;
}
void DemoEngine() {
    _debug("DemoEngine", __FILE__, __LINE__);
    // load current demo action
    ldx(ABS(DemoAction));
    // load current action timer
    lda(ABS(DemoActionTimer));
    // if timer still counting down, skip
    BNE(DoAction);
    inx();
    // if expired, increment action, X, and
    inc(ABS(DemoAction));
    // set carry by default for demo over
    sec();
    // get next timer
    lda(ABSX(((0x8000+offsetof(G, DemoTimingData)) - (1))));
    // store as current timer
    sta(ABS(DemoActionTimer));
    // if timer already at zero, skip
    BEQ(DemoOver);
    JMP(DoAction);
}
void DoAction() {
    _debug("DoAction", __FILE__, __LINE__);
    // get and perform action (current or next)
    lda(ABSX(((0x8000+offsetof(G, DemoActionData)) - (1))));
    sta(ABS(SavedJoypad1Bits));
    // decrement action timer
    dec(ABS(DemoActionTimer));
    // clear carry if demo still going
    clc();
    JMP(DemoOver);
}
void DemoOver() {
    _debug("DemoOver", __FILE__, __LINE__);
    return;
}
void VictoryMode() {
    _debug("VictoryMode", __FILE__, __LINE__);
    // run victory mode subroutines
    JSR(VictoryModeSubroutines);
    // get current task of victory mode
    lda(ABS(OperMode_Task));
    // if on bridge collapse, skip enemy processing
    BEQ(AutoPlayer);
    ldx(IMM(0x0));
    // otherwise reset enemy object offset
    stx(ABS(ObjectOffset));
    // and run enemy code
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}
void AutoPlayer() {
    _debug("AutoPlayer", __FILE__, __LINE__);
    // get player's relative coordinates
    JSR(RelativePlayerPosition);
    // draw the player, then leave
    JMP(PlayerGfxHandler);
    JMP(VictoryModeSubroutines);
}
void VictoryModeSubroutines() {
    _debug("VictoryModeSubroutines", __FILE__, __LINE__);
    lda(ABS(OperMode_Task));
    static JUMP_ENTRY jumptable[5] = {
        BridgeCollapse,
        SetupVictoryMode,
        PlayerVictoryWalk,
        PrintVictoryMessages,
        PlayerEndWorld,
    };
    JMP(jumptable[a.read()]);
}
void SetupVictoryMode() {
    _debug("SetupVictoryMode", __FILE__, __LINE__);
    // get page location of right side of screen
    ldx(ABS(ScreenRight_PageLoc));
    // increment to next page
    inx();
    // store here
    stx(ABS(DestinationPageLoc));
    lda(IMM(EndOfCastleMusic));
    // play win castle music
    sta(ABS(EventMusicQueue));
    // jump to set next major task in victory mode
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}
void PlayerVictoryWalk() {
    _debug("PlayerVictoryWalk", __FILE__, __LINE__);
    // set value here to not walk player by default
    ldy(IMM(0x0));
    sty(ABS(VictoryWalkControl));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // compare with destination page location
    cmp(ABS(DestinationPageLoc));
    // if page locations don't match, branch
    BNE(PerformWalk);
    // otherwise get player's horizontal position
    lda(ABS(Player_X_Position));
    // compare with preset horizontal position
    cmp(IMM(0x60));
    // if still on other page, branch ahead
    BCS(DontWalk);
    JMP(PerformWalk);
}
void PerformWalk() {
    _debug("PerformWalk", __FILE__, __LINE__);
    // otherwise increment value and Y
    inc(ABS(VictoryWalkControl));
    // note Y will be used to walk the player
    iny();
    JMP(DontWalk);
}
void DontWalk() {
    _debug("DontWalk", __FILE__, __LINE__);
    // put contents of Y in A and
    tya();
    // use A to move player to the right or not
    JSR(AutoControlPlayer);
    // check page location of left side of screen
    lda(ABS(ScreenLeft_PageLoc));
    // against set value here
    cmp(ABS(DestinationPageLoc));
    // branch if equal to change modes if necessary
    BEQ(ExitVWalk);
    lda(ABS(ScrollFractional));
    // do fixed point math on fractional part of scroll
    clc();
    adc(IMM(0x80));
    // save fractional movement amount
    sta(ABS(ScrollFractional));
    // set 1 pixel per frame
    lda(IMM(0x1));
    // add carry from previous addition
    adc(IMM(0x0));
    // use as scroll amount
    tay();
    // do sub to scroll the screen
    JSR(ScrollScreen);
    // do another sub to update screen and scroll variables
    JSR(UpdScrollVar);
    // increment value to stay in this routine
    inc(ABS(VictoryWalkControl));
    JMP(ExitVWalk);
}
void ExitVWalk() {
    _debug("ExitVWalk", __FILE__, __LINE__);
    // load value set here
    lda(ABS(VictoryWalkControl));
    // if zero, branch to change modes
    BEQ(IncModeTask_A);
    // otherwise leave
    return;
}
void PrintVictoryMessages() {
    _debug("PrintVictoryMessages", __FILE__, __LINE__);
    // load secondary message counter
    lda(ABS(SecondaryMsgCounter));
    // if set, branch to increment message counters
    BNE(IncMsgCounter);
    // otherwise load primary message counter
    lda(ABS(PrimaryMsgCounter));
    // if set to zero, branch to print first message
    BEQ(ThankPlayer);
    // if at 9 or above, branch elsewhere (this comparison
    cmp(IMM(0x9));
    // is residual code, counter never reaches 9)
    BCS(IncMsgCounter);
    // check world number
    ldy(ABS(WorldNumber));
    cpy(IMM(World8));
    // if not at world 8, skip to next part
    BNE(MRetainerMsg);
    // check primary message counter again
    cmp(IMM(0x3));
    // if not at 3 yet (world 8 only), branch to increment
    BCC(IncMsgCounter);
    // otherwise subtract one
    sbc(IMM(0x1));
    // and skip to next part
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}
void MRetainerMsg() {
    _debug("MRetainerMsg", __FILE__, __LINE__);
    // check primary message counter
    cmp(IMM(0x2));
    // if not at 2 yet (world 1-7 only), branch
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}
void ThankPlayer() {
    _debug("ThankPlayer", __FILE__, __LINE__);
    // put primary message counter into Y
    tay();
    // if counter nonzero, skip this part, do not print first message
    BNE(SecondPartMsg);
    // otherwise get player currently on the screen
    lda(ABS(CurrentPlayer));
    // if mario, branch
    BEQ(EvalForMusic);
    // otherwise increment Y once for luigi and
    iny();
    // do an unconditional branch to the same place
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}
void SecondPartMsg() {
    _debug("SecondPartMsg", __FILE__, __LINE__);
    // increment Y to do world 8's message
    iny();
    lda(ABS(WorldNumber));
    // check world number
    cmp(IMM(World8));
    // if at world 8, branch to next part
    BEQ(EvalForMusic);
    // otherwise decrement Y for world 1-7's message
    dey();
    // if counter at 4 (world 1-7 only)
    cpy(IMM(0x4));
    // branch to set victory end timer
    BCS(SetEndTimer);
    // if counter at 3 (world 1-7 only)
    cpy(IMM(0x3));
    // branch to keep counting
    BCS(IncMsgCounter);
    JMP(EvalForMusic);
}
void EvalForMusic() {
    _debug("EvalForMusic", __FILE__, __LINE__);
    // if counter not yet at 3 (world 8 only), branch
    cpy(IMM(0x3));
    // to print message only (note world 1-7 will only
    BNE(PrintMsg);
    // reach this code if counter = 0, and will always branch)
    lda(IMM(VictoryMusic));
    // otherwise load victory music first (world 8 only)
    sta(ABS(EventMusicQueue));
    JMP(PrintMsg);
}
void PrintMsg() {
    _debug("PrintMsg", __FILE__, __LINE__);
    // put primary message counter in A
    tya();
    // add $0c or 12 to counter thus giving an appropriate value,
    clc();
    // ($0c-$0d = first), ($0e = world 1-7's), ($0f-$12 = world 8's)
    adc(IMM(0xc));
    // write message counter to vram address controller
    sta(ABS(VRAM_Buffer_AddrCtrl));
    JMP(IncMsgCounter);
}
void IncMsgCounter() {
    _debug("IncMsgCounter", __FILE__, __LINE__);
    lda(ABS(SecondaryMsgCounter));
    clc();
    // add four to secondary message counter
    adc(IMM(0x4));
    sta(ABS(SecondaryMsgCounter));
    lda(ABS(PrimaryMsgCounter));
    // add carry to primary message counter
    adc(IMM(0x0));
    sta(ABS(PrimaryMsgCounter));
    // check primary counter one more time
    cmp(IMM(0x7));
    JMP(SetEndTimer);
}
void SetEndTimer() {
    _debug("SetEndTimer", __FILE__, __LINE__);
    // if not reached value yet, branch to leave
    BCC(ExitMsgs);
    lda(IMM(0x6));
    // otherwise set world end timer
    sta(ABS(WorldEndTimer));
    JMP(IncModeTask_A);
}
void IncModeTask_A() {
    _debug("IncModeTask_A", __FILE__, __LINE__);
    // move onto next task in mode
    inc(ABS(OperMode_Task));
    JMP(ExitMsgs);
}
void ExitMsgs() {
    _debug("ExitMsgs", __FILE__, __LINE__);
    // leave
    return;
}
void PlayerEndWorld() {
    _debug("PlayerEndWorld", __FILE__, __LINE__);
    // check to see if world end timer expired
    lda(ABS(WorldEndTimer));
    // branch to leave if not
    BNE(EndExitOne);
    // check world number
    ldy(ABS(WorldNumber));
    // if on world 8, player is done with game,
    cpy(IMM(World8));
    // thus branch to read controller
    BCS(EndChkBButton);
    lda(IMM(0x0));
    // otherwise initialize area number used as offset
    sta(ABS(AreaNumber));
    // and level number control to start at area 1
    sta(ABS(LevelNumber));
    // initialize secondary mode of operation
    sta(ABS(OperMode_Task));
    // increment world number to move onto the next world
    inc(ABS(WorldNumber));
    // get area address offset for the next area
    JSR(LoadAreaPointer);
    // set flag to load game timer from header
    inc(ABS(FetchNewGameTimerFlag));
    lda(IMM(GameModeValue));
    // set mode of operation to game mode
    sta(ABS(OperMode));
    JMP(EndExitOne);
}
void EndExitOne() {
    _debug("EndExitOne", __FILE__, __LINE__);
    // and leave
    return;
}
void EndChkBButton() {
    _debug("EndChkBButton", __FILE__, __LINE__);
    lda(ABS(SavedJoypad1Bits));
    // check to see if B button was pressed on
    ora(ABS(SavedJoypad2Bits));
    // either controller
    anda(IMM(B_Button));
    // branch to leave if not
    BEQ(EndExitTwo);
    // otherwise set world selection flag
    lda(IMM(0x1));
    sta(ABS(WorldSelectEnableFlag));
    // remove onscreen player's lives
    lda(IMM(0xff));
    sta(ABS(NumberofLives));
    // do sub to continue other player or end game
    JSR(TerminateGame);
    JMP(EndExitTwo);
}
void EndExitTwo() {
    _debug("EndExitTwo", __FILE__, __LINE__);
    // leave
    return;
}
void FloateyNumbersRoutine() {
    _debug("FloateyNumbersRoutine", __FILE__, __LINE__);
    // load control for floatey number
    lda(ABSX(FloateyNum_Control));
    // if zero, branch to leave
    BEQ(EndExitOne);
    // if less than $0b, branch
    cmp(IMM(0xb));
    BCC(ChkNumTimer);
    // otherwise set to $0b, thus keeping
    lda(IMM(0xb));
    // it in range
    sta(ABSX(FloateyNum_Control));
    JMP(ChkNumTimer);
}
void ChkNumTimer() {
    _debug("ChkNumTimer", __FILE__, __LINE__);
    // use as Y
    tay();
    // check value here
    lda(ABSX(FloateyNum_Timer));
    // if nonzero, branch ahead
    BNE(DecNumTimer);
    // initialize floatey number control and leave
    sta(ABSX(FloateyNum_Control));
    return;
}
void DecNumTimer() {
    _debug("DecNumTimer", __FILE__, __LINE__);
    // decrement value here
    dec(ABSX(FloateyNum_Timer));
    // if not reached a certain point, branch
    cmp(IMM(0x2b));
    BNE(ChkTallEnemy);
    // check offset for $0b
    cpy(IMM(0xb));
    // branch ahead if not found
    BNE(LoadNumTiles);
    // give player one extra life (1-up)
    inc(ABS(NumberofLives));
    lda(IMM(Sfx_ExtraLife));
    // and play the 1-up sound
    sta(ABS(Square2SoundQueue));
    JMP(LoadNumTiles);
}
void LoadNumTiles() {
    _debug("LoadNumTiles", __FILE__, __LINE__);
    // load point value here
    lda(ABSY(0x8000+offsetof(G, ScoreUpdateData)));
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // use as X offset, essentially the digit
    tax();
    // load again and this time
    lda(ABSY(0x8000+offsetof(G, ScoreUpdateData)));
    // mask out the high nybble
    anda(IMM(0b1111));
    // store as amount to add to the digit
    sta(ABSX(DigitModifier));
    // update the score accordingly
    JSR(AddToScore);
    JMP(ChkTallEnemy);
}
void ChkTallEnemy() {
    _debug("ChkTallEnemy", __FILE__, __LINE__);
    // get OAM data offset for enemy object
    ldy(ABSX(Enemy_SprDataOffset));
    // get enemy object identifier
    lda(ABSX(Enemy_ID));
    cmp(IMM(Spiny));
    // branch if spiny
    BEQ(FloateyPart);
    cmp(IMM(PiranhaPlant));
    // branch if piranha plant
    BEQ(FloateyPart);
    cmp(IMM(HammerBro));
    // branch elsewhere if hammer bro
    BEQ(GetAltOffset);
    cmp(IMM(GreyCheepCheep));
    // branch if cheep-cheep of either color
    BEQ(FloateyPart);
    cmp(IMM(RedCheepCheep));
    BEQ(FloateyPart);
    cmp(IMM(TallEnemy));
    // branch elsewhere if enemy object => $09
    BCS(GetAltOffset);
    lda(ABSX(Enemy_State));
    // if enemy state defeated or otherwise
    cmp(IMM(0x2));
    // $02 or greater, branch beyond this part
    BCS(FloateyPart);
    JMP(GetAltOffset);
}
void GetAltOffset() {
    _debug("GetAltOffset", __FILE__, __LINE__);
    // load some kind of control bit
    ldx(ABS(SprDataOffset_Ctrl));
    // get alternate OAM data offset
    ldy(ABSX(Alt_SprDataOffset));
    // get enemy object offset again
    ldx(ABS(ObjectOffset));
    JMP(FloateyPart);
}
void FloateyPart() {
    _debug("FloateyPart", __FILE__, __LINE__);
    // get vertical coordinate for
    lda(ABSX(FloateyNum_Y_Pos));
    // floatey number, if coordinate in the
    cmp(IMM(0x18));
    // status bar, branch
    BCC(SetupNumSpr);
    sbc(IMM(0x1));
    // otherwise subtract one and store as new
    sta(ABSX(FloateyNum_Y_Pos));
    JMP(SetupNumSpr);
}
void SetupNumSpr() {
    _debug("SetupNumSpr", __FILE__, __LINE__);
    // get vertical coordinate
    lda(ABSX(FloateyNum_Y_Pos));
    // subtract eight and dump into the
    sbc(IMM(0x8));
    // left and right sprite's Y coordinates
    JSR(DumpTwoSpr);
    // get horizontal coordinate
    lda(ABSX(FloateyNum_X_Pos));
    // store into X coordinate of left sprite
    sta(ABSY(Sprite_X_Position));
    clc();
    // add eight pixels and store into X
    adc(IMM(0x8));
    // coordinate of right sprite
    sta(ABSY(((Sprite_X_Position) + (4))));
    lda(IMM(0x2));
    // set palette control in attribute bytes
    sta(ABSY(Sprite_Attributes));
    // of left and right sprites
    sta(ABSY(((Sprite_Attributes) + (4))));
    lda(ABSX(FloateyNum_Control));
    // multiply our floatey number control by 2
    asl();
    // and use as offset for look-up table
    tax();
    lda(ABSX(0x8000+offsetof(G, FloateyNumTileData)));
    // display first half of number of points
    sta(ABSY(Sprite_Tilenumber));
    lda(ABSX(((0x8000+offsetof(G, FloateyNumTileData)) + (1))));
    // display the second half
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void ScreenRoutines() {
    _debug("ScreenRoutines", __FILE__, __LINE__);
    // run one of the following subroutines
    lda(ABS(ScreenRoutineTask));
    static JUMP_ENTRY jumptable[15] = {
        InitScreen,
        SetupIntermediate,
        WriteTopStatusLine,
        WriteBottomStatusLine,
        DisplayTimeUp,
        ResetSpritesAndScreenTimer,
        DisplayIntermediate,
        ResetSpritesAndScreenTimer,
        AreaParserTaskControl,
        GetAreaPalette,
        GetBackgroundColor,
        GetAlternatePalette1,
        DrawTitleScreen,
        ClearBuffersDrawIcon,
        WriteTopScore,
    };
    JMP(jumptable[a.read()]);
}
void InitScreen() {
    _debug("InitScreen", __FILE__, __LINE__);
    // initialize all sprites including sprite #0
    JSR(MoveAllSpritesOffscreen);
    // and erase both name and attribute tables
    JSR(InitializeNameTables);
    lda(ABS(OperMode));
    // if mode still 0, do not load
    BEQ(NextSubtask);
    // into buffer pointer
    ldx(IMM(0x3));
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}
void SetupIntermediate() {
    _debug("SetupIntermediate", __FILE__, __LINE__);
    // save current background color control
    lda(ABS(BackgroundColorCtrl));
    // and player status to stack
    pha();
    lda(ABS(PlayerStatus));
    pha();
    // set background color to black
    lda(IMM(0x0));
    // and player status to not fiery
    sta(ABS(PlayerStatus));
    // this is the ONLY time background color control
    lda(IMM(0x2));
    // is set to less than 4
    sta(ABS(BackgroundColorCtrl));
    JSR(GetPlayerColors);
    // we only execute this routine for
    pla();
    // the intermediate lives display
    sta(ABS(PlayerStatus));
    // and once we're done, we return bg
    pla();
    // color ctrl and player status from stack
    sta(ABS(BackgroundColorCtrl));
    // then move onto the next task
    JMP(IncSubtask);
    JMP(GetAreaPalette);
}
void GetAreaPalette() {
    _debug("GetAreaPalette", __FILE__, __LINE__);
    // select appropriate palette to load
    ldy(ABS(AreaType));
    // based on area type
    ldx(ABSY(0x8000+offsetof(G, AreaPalette)));
    JMP(SetVRAMAddr_A);
}
void SetVRAMAddr_A() {
    _debug("SetVRAMAddr_A", __FILE__, __LINE__);
    // store offset into buffer control
    stx(ABS(VRAM_Buffer_AddrCtrl));
    JMP(NextSubtask);
}
void NextSubtask() {
    _debug("NextSubtask", __FILE__, __LINE__);
    // move onto next task
    JMP(IncSubtask);
    JMP(GetBackgroundColor);
}
void GetBackgroundColor() {
    _debug("GetBackgroundColor", __FILE__, __LINE__);
    // check background color control
    ldy(ABS(BackgroundColorCtrl));
    // if not set, increment task and fetch palette
    BEQ(NoBGColor);
    // put appropriate palette into vram
    lda(ABSY(((0x8000+offsetof(G, BGColorCtrl_Addr)) - (4))));
    // note that if set to 5-7, $0301 will not be read
    sta(ABS(VRAM_Buffer_AddrCtrl));
    JMP(NoBGColor);
}
void NoBGColor() {
    _debug("NoBGColor", __FILE__, __LINE__);
    // increment to next subtask and plod on through
    inc(ABS(ScreenRoutineTask));
    JMP(GetPlayerColors);
}
void GetPlayerColors() {
    _debug("GetPlayerColors", __FILE__, __LINE__);
    // get current buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    ldy(IMM(0x0));
    // check which player is on the screen
    lda(ABS(CurrentPlayer));
    BEQ(ChkFiery);
    // load offset for luigi
    ldy(IMM(0x4));
    JMP(ChkFiery);
}
void ChkFiery() {
    _debug("ChkFiery", __FILE__, __LINE__);
    // check player status
    lda(ABS(PlayerStatus));
    cmp(IMM(0x2));
    // if fiery, load alternate offset for fiery player
    BNE(StartClrGet);
    ldy(IMM(0x8));
    JMP(StartClrGet);
}
void StartClrGet() {
    _debug("StartClrGet", __FILE__, __LINE__);
    // do four colors
    lda(IMM(0x3));
    sta(ABS(0x0));
    JMP(ClrGetLoop);
}
void ClrGetLoop() {
    _debug("ClrGetLoop", __FILE__, __LINE__);
    // fetch player colors and store them
    lda(ABSY(0x8000+offsetof(G, PlayerColors)));
    // in the buffer
    sta(ABSX(((VRAM_Buffer1) + (3))));
    iny();
    inx();
    dec(ABS(0x0));
    BPL(ClrGetLoop);
    // load original offset from before
    ldx(ABS(VRAM_Buffer1_Offset));
    // if this value is four or greater, it will be set
    ldy(ABS(BackgroundColorCtrl));
    // therefore use it as offset to background color
    BNE(SetBGColor);
    // otherwise use area type bits from area offset as offset
    ldy(ABS(AreaType));
    JMP(SetBGColor);
}
void SetBGColor() {
    _debug("SetBGColor", __FILE__, __LINE__);
    // to background color instead
    lda(ABSY(0x8000+offsetof(G, BackgroundColors)));
    sta(ABSX(((VRAM_Buffer1) + (3))));
    // set for sprite palette address
    lda(IMM(0x3f));
    // save to buffer
    sta(ABSX(VRAM_Buffer1));
    lda(IMM(0x10));
    sta(ABSX(((VRAM_Buffer1) + (1))));
    // write length byte to buffer
    lda(IMM(0x4));
    sta(ABSX(((VRAM_Buffer1) + (2))));
    // now the null terminator
    lda(IMM(0x0));
    sta(ABSX(((VRAM_Buffer1) + (7))));
    // move the buffer pointer ahead 7 bytes
    txa();
    // in case we want to write anything else later
    clc();
    adc(IMM(0x7));
    JMP(SetVRAMOffset);
}
void SetVRAMOffset() {
    _debug("SetVRAMOffset", __FILE__, __LINE__);
    // store as new vram buffer offset
    sta(ABS(VRAM_Buffer1_Offset));
    return;
}
void GetAlternatePalette1() {
    _debug("GetAlternatePalette1", __FILE__, __LINE__);
    // check for mushroom level style
    lda(ABS(AreaStyle));
    cmp(IMM(0x1));
    BNE(NoAltPal);
    // if found, load appropriate palette
    lda(IMM(0xb));
    JMP(SetVRAMAddr_B);
}
void SetVRAMAddr_B() {
    _debug("SetVRAMAddr_B", __FILE__, __LINE__);
    sta(ABS(VRAM_Buffer_AddrCtrl));
    JMP(NoAltPal);
}
void NoAltPal() {
    _debug("NoAltPal", __FILE__, __LINE__);
    // now onto the next task
    JMP(IncSubtask);
    JMP(WriteTopStatusLine);
}
void WriteTopStatusLine() {
    _debug("WriteTopStatusLine", __FILE__, __LINE__);
    // select main status bar
    lda(IMM(0x0));
    // output it
    JSR(WriteGameText);
    // onto the next task
    JMP(IncSubtask);
    JMP(WriteBottomStatusLine);
}
void WriteBottomStatusLine() {
    _debug("WriteBottomStatusLine", __FILE__, __LINE__);
    // write player's score and coin tally to screen
    JSR(GetSBNybbles);
    ldx(ABS(VRAM_Buffer1_Offset));
    // write address for world-area number on screen
    lda(IMM(0x20));
    sta(ABSX(VRAM_Buffer1));
    lda(IMM(0x73));
    sta(ABSX(((VRAM_Buffer1) + (1))));
    // write length for it
    lda(IMM(0x3));
    sta(ABSX(((VRAM_Buffer1) + (2))));
    // first the world number
    ldy(ABS(WorldNumber));
    iny();
    tya();
    sta(ABSX(((VRAM_Buffer1) + (3))));
    // next the dash
    lda(IMM(0x28));
    sta(ABSX(((VRAM_Buffer1) + (4))));
    // next the level number
    ldy(ABS(LevelNumber));
    // increment for proper number display
    iny();
    tya();
    sta(ABSX(((VRAM_Buffer1) + (5))));
    // put null terminator on
    lda(IMM(0x0));
    sta(ABSX(((VRAM_Buffer1) + (6))));
    // move the buffer offset up by 6 bytes
    txa();
    clc();
    adc(IMM(0x6));
    sta(ABS(VRAM_Buffer1_Offset));
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}
void DisplayTimeUp() {
    _debug("DisplayTimeUp", __FILE__, __LINE__);
    // if game timer not expired, increment task
    lda(ABS(GameTimerExpiredFlag));
    // control 2 tasks forward, otherwise, stay here
    BEQ(NoTimeUp);
    lda(IMM(0x0));
    // reset timer expiration flag
    sta(ABS(GameTimerExpiredFlag));
    // output time-up screen to buffer
    lda(IMM(0x2));
    JMP(OutputInter);
    JMP(NoTimeUp);
}
void NoTimeUp() {
    _debug("NoTimeUp", __FILE__, __LINE__);
    // increment control task 2 tasks forward
    inc(ABS(ScreenRoutineTask));
    JMP(IncSubtask);
    JMP(DisplayIntermediate);
}
void DisplayIntermediate() {
    _debug("DisplayIntermediate", __FILE__, __LINE__);
    // check primary mode of operation
    lda(ABS(OperMode));
    // if in title screen mode, skip this
    BEQ(NoInter);
    // are we in game over mode?
    cmp(IMM(GameOverModeValue));
    // if so, proceed to display game over screen
    BEQ(GameOverInter);
    // otherwise check for mode of alternate entry
    lda(ABS(AltEntranceControl));
    // and branch if found
    BNE(NoInter);
    // check if we are on castle level
    ldy(ABS(AreaType));
    // and if so, branch (possibly residual)
    cpy(IMM(0x3));
    BEQ(PlayerInter);
    // if this flag is set, skip intermediate lives display
    lda(ABS(DisableIntermediate));
    // and jump to specific task, otherwise
    BNE(NoInter);
    JMP(PlayerInter);
}
void PlayerInter() {
    _debug("PlayerInter", __FILE__, __LINE__);
    // put player in appropriate place for
    JSR(DrawPlayer_Intermediate);
    // lives display, then output lives display to buffer
    lda(IMM(0x1));
    JMP(OutputInter);
}
void OutputInter() {
    _debug("OutputInter", __FILE__, __LINE__);
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(IMM(0x0));
    // reenable screen output
    sta(ABS(DisableScreenFlag));
    return;
}
void GameOverInter() {
    _debug("GameOverInter", __FILE__, __LINE__);
    // set screen timer
    lda(IMM(0x12));
    sta(ABS(ScreenTimer));
    // output game over screen to buffer
    lda(IMM(0x3));
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}
void NoInter() {
    _debug("NoInter", __FILE__, __LINE__);
    // set for specific task and leave
    lda(IMM(0x8));
    sta(ABS(ScreenRoutineTask));
    return;
}
void AreaParserTaskControl() {
    _debug("AreaParserTaskControl", __FILE__, __LINE__);
    // turn off screen
    inc(ABS(DisableScreenFlag));
    JMP(TaskLoop);
}
void TaskLoop() {
    _debug("TaskLoop", __FILE__, __LINE__);
    // render column set of current area
    JSR(AreaParserTaskHandler);
    // check number of tasks
    lda(ABS(AreaParserTaskNum));
    // if tasks still not all done, do another one
    BNE(TaskLoop);
    // do we need to render more column sets?
    dec(ABS(ColumnSets));
    BPL(OutputCol);
    // if not, move on to the next task
    inc(ABS(ScreenRoutineTask));
    JMP(OutputCol);
}
void OutputCol() {
    _debug("OutputCol", __FILE__, __LINE__);
    // set vram buffer to output rendered column set
    lda(IMM(0x6));
    // on next NMI
    sta(ABS(VRAM_Buffer_AddrCtrl));
    return;
}
// $00 - vram buffer address table low
// $01 - vram buffer address table high
void DrawTitleScreen() {
    _debug("DrawTitleScreen", __FILE__, __LINE__);
    // are we in title screen mode?
    lda(ABS(OperMode));
    // if not, exit
    BNE(IncModeTask_B);
    // load address $1ec0 into
    lda(IMM(HI8(TitleScreenDataOffset)));
    // the vram address register
    sta(ABS(PPU_ADDRESS));
    lda(IMM(LO8(TitleScreenDataOffset)));
    sta(ABS(PPU_ADDRESS));
    // put address $0300 into
    lda(IMM(0x3));
    // the indirect at $00
    sta(ABS(0x1));
    ldy(IMM(0x0));
    sty(ABS(0x0));
    // do one garbage read
    lda(ABS(PPU_DATA));
    JMP(OutputTScr);
}
void OutputTScr() {
    _debug("OutputTScr", __FILE__, __LINE__);
    // get title screen from chr-rom
    lda(ABS(PPU_DATA));
    // store 256 bytes into buffer
    sta(INDY((0x0)));
    iny();
    // if not past 256 bytes, do not increment
    BNE(ChkHiByte);
    // otherwise increment high byte of indirect
    inc(ABS(0x1));
    JMP(ChkHiByte);
}
void ChkHiByte() {
    _debug("ChkHiByte", __FILE__, __LINE__);
    // check high byte?
    lda(ABS(0x1));
    // at $0400?
    cmp(IMM(0x4));
    // if not, loop back and do another
    BNE(OutputTScr);
    // check if offset points past end of data
    cpy(IMM(0x3a));
    // if not, loop back and do another
    BCC(OutputTScr);
    // set buffer transfer control to $0300,
    lda(IMM(0x5));
    // increment task and exit
    JMP(SetVRAMAddr_B);
    JMP(ClearBuffersDrawIcon);
}
void ClearBuffersDrawIcon() {
    _debug("ClearBuffersDrawIcon", __FILE__, __LINE__);
    // check game mode
    lda(ABS(OperMode));
    // if not title screen mode, leave
    BNE(IncModeTask_B);
    // otherwise, clear buffer space
    ldx(IMM(0x0));
    JMP(TScrClear);
}
void TScrClear() {
    _debug("TScrClear", __FILE__, __LINE__);
    sta(ABSX(((VRAM_Buffer1) - (1))));
    sta(ABSX(((((VRAM_Buffer1) - (1))) + (0x100))));
    dex();
    BNE(TScrClear);
    // draw player select icon
    JSR(DrawMushroomIcon);
    JMP(IncSubtask);
}
void IncSubtask() {
    _debug("IncSubtask", __FILE__, __LINE__);
    // move onto next task
    inc(ABS(ScreenRoutineTask));
    return;
}
void WriteTopScore() {
    _debug("WriteTopScore", __FILE__, __LINE__);
    // run display routine to display top score on title
    lda(IMM(0xfa));
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}
void IncModeTask_B() {
    _debug("IncModeTask_B", __FILE__, __LINE__);
    // move onto next mode
    inc(ABS(OperMode_Task));
    return;
}
void WriteGameText() {
    _debug("WriteGameText", __FILE__, __LINE__);
    // save text number to stack
    pha();
    asl();
    // multiply by 2 and use as offset
    tay();
    // if set to do top status bar or world/lives display,
    cpy(IMM(0x4));
    // branch to use current offset as-is
    BCC(LdGameText);
    // if set to do time-up or game over,
    cpy(IMM(0x8));
    // branch to check players
    BCC(Chk2Players);
    // otherwise warp zone, therefore set offset
    ldy(IMM(0x8));
    JMP(Chk2Players);
}
void Chk2Players() {
    _debug("Chk2Players", __FILE__, __LINE__);
    // check for number of players
    lda(ABS(NumberOfPlayers));
    // if there are two, use current offset to also print name
    BNE(LdGameText);
    // otherwise increment offset by one to not print name
    iny();
    JMP(LdGameText);
}
void LdGameText() {
    _debug("LdGameText", __FILE__, __LINE__);
    // get offset to message we want to print
    ldx(ABSY(0x8000+offsetof(G, GameTextOffsets)));
    ldy(IMM(0x0));
    JMP(GameTextLoop);
}
void GameTextLoop() {
    _debug("GameTextLoop", __FILE__, __LINE__);
    // load message data
    lda(ABSX(0x8000+offsetof(G, GameText)));
    // check for terminator
    cmp(IMM(0xff));
    // branch to end text if found
    BEQ(EndGameText);
    // otherwise write data to buffer
    sta(ABSY(VRAM_Buffer1));
    // and increment increment
    inx();
    iny();
    // do this for 256 bytes if no terminator found
    BNE(GameTextLoop);
    JMP(EndGameText);
}
void EndGameText() {
    _debug("EndGameText", __FILE__, __LINE__);
    // put null terminator at end
    lda(IMM(0x0));
    sta(ABSY(VRAM_Buffer1));
    // pull original text number from stack
    pla();
    tax();
    // are we printing warp zone?
    cmp(IMM(0x4));
    BCS(PrintWarpZoneNumbers);
    // are we printing the world/lives display?
    dex();
    // if not, branch to check player's name
    BNE(CheckPlayerName);
    // otherwise, check number of lives
    lda(ABS(NumberofLives));
    // and increment by one for display
    clc();
    adc(IMM(0x1));
    // more than 9 lives?
    cmp(IMM(10));
    BCC(PutLives);
    // if so, subtract 10 and put a crown tile
    sbc(IMM(10));
    // next to the difference...strange things happen if
    ldy(IMM(0x9f));
    // the number of lives exceeds 19
    sty(ABS(((VRAM_Buffer1) + (7))));
    JMP(PutLives);
}
void PutLives() {
    _debug("PutLives", __FILE__, __LINE__);
    sta(ABS(((VRAM_Buffer1) + (8))));
    // write world and level numbers (incremented for display)
    ldy(ABS(WorldNumber));
    // to the buffer in the spaces surrounding the dash
    iny();
    sty(ABS(((VRAM_Buffer1) + (19))));
    ldy(ABS(LevelNumber));
    iny();
    // we're done here
    sty(ABS(((VRAM_Buffer1) + (21))));
    return;
}
void CheckPlayerName() {
    _debug("CheckPlayerName", __FILE__, __LINE__);
    // check number of players
    lda(ABS(NumberOfPlayers));
    // if only 1 player, leave
    BEQ(ExitChkName);
    // load current player
    lda(ABS(CurrentPlayer));
    // check to see if current message number is for time up
    dex();
    BNE(ChkLuigi);
    // check for game over mode
    ldy(ABS(OperMode));
    cpy(IMM(GameOverModeValue));
    BEQ(ChkLuigi);
    // if not, must be time up, invert d0 to do other player
    eor(IMM(0b1));
    JMP(ChkLuigi);
}
void ChkLuigi() {
    _debug("ChkLuigi", __FILE__, __LINE__);
    lsr();
    // if mario is current player, do not change the name
    BCC(ExitChkName);
    ldy(IMM(0x4));
    JMP(NameLoop);
}
void NameLoop() {
    _debug("NameLoop", __FILE__, __LINE__);
    // otherwise, replace "MARIO" with "LUIGI"
    lda(ABSY(0x8000+offsetof(G, LuigiName)));
    sta(ABSY(((VRAM_Buffer1) + (3))));
    dey();
    // do this until each letter is replaced
    BPL(NameLoop);
    JMP(ExitChkName);
}
void ExitChkName() {
    _debug("ExitChkName", __FILE__, __LINE__);
    return;
}
void PrintWarpZoneNumbers() {
    _debug("PrintWarpZoneNumbers", __FILE__, __LINE__);
    // subtract 4 and then shift to the left
    sbc(IMM(0x4));
    // twice to get proper warp zone number
    asl();
    // offset
    asl();
    tax();
    ldy(IMM(0x0));
    JMP(WarpNumLoop);
}
void WarpNumLoop() {
    _debug("WarpNumLoop", __FILE__, __LINE__);
    // print warp zone numbers into the
    lda(ABSX(0x8000+offsetof(G, WarpZoneNumbers)));
    // placeholders from earlier
    sta(ABSY(((VRAM_Buffer1) + (27))));
    inx();
    // put a number in every fourth space
    iny();
    iny();
    iny();
    iny();
    cpy(IMM(0xc));
    BCC(WarpNumLoop);
    // load new buffer pointer at end of message
    lda(IMM(0x2c));
    JMP(SetVRAMOffset);
    JMP(ResetSpritesAndScreenTimer);
}
void ResetSpritesAndScreenTimer() {
    _debug("ResetSpritesAndScreenTimer", __FILE__, __LINE__);
    // check if screen timer has expired
    lda(ABS(ScreenTimer));
    // if not, branch to leave
    BNE(NoReset);
    // otherwise reset sprites now
    JSR(MoveAllSpritesOffscreen);
    JMP(ResetScreenTimer);
}
void ResetScreenTimer() {
    _debug("ResetScreenTimer", __FILE__, __LINE__);
    // reset timer again
    lda(IMM(0x7));
    sta(ABS(ScreenTimer));
    // move onto next task
    inc(ABS(ScreenRoutineTask));
    JMP(NoReset);
}
void NoReset() {
    _debug("NoReset", __FILE__, __LINE__);
    return;
}
// $00 - temp vram buffer offset
// $01 - temp metatile buffer offset
// $02 - temp metatile graphics table offset
// $03 - used to store attribute bits
// $04 - used to determine attribute table row
// $05 - used to determine attribute table column
// $06 - metatile graphics table address low
// $07 - metatile graphics table address high
void RenderAreaGraphics() {
    _debug("RenderAreaGraphics", __FILE__, __LINE__);
    // store LSB of where we're at
    lda(ABS(CurrentColumnPos));
    anda(IMM(0x1));
    sta(ABS(0x5));
    // store vram buffer offset
    ldy(ABS(VRAM_Buffer2_Offset));
    sty(ABS(0x0));
    // get current name table address we're supposed to render
    lda(ABS(CurrentNTAddr_Low));
    sta(ABSY(((VRAM_Buffer2) + (1))));
    lda(ABS(CurrentNTAddr_High));
    sta(ABSY(VRAM_Buffer2));
    // store length byte of 26 here with d7 set
    lda(IMM(0x9a));
    // to increment by 32 (in columns)
    sta(ABSY(((VRAM_Buffer2) + (2))));
    // init attribute row
    lda(IMM(0x0));
    sta(ABS(0x4));
    tax();
    JMP(DrawMTLoop);
}
void DrawMTLoop() {
    _debug("DrawMTLoop", __FILE__, __LINE__);
    // store init value of 0 or incremented offset for buffer
    stx(ABS(0x1));
    // get first metatile number, and mask out all but 2 MSB
    lda(ABSX(MetatileBuffer));
    anda(IMM(0b11000000));
    // store attribute table bits here
    sta(ABS(0x3));
    // note that metatile format is:
    asl();
    // %xx000000 - attribute table bits,
    rol();
    // %00xxxxxx - metatile number
    rol();
    // rotate bits to d1-d0 and use as offset here
    tay();
    // get address to graphics table from here
    lda(ABSY(0x8000+offsetof(G, MetatileGraphics_Low)));
    sta(ABS(0x6));
    lda(ABSY(0x8000+offsetof(G, MetatileGraphics_High)));
    sta(ABS(0x7));
    // get metatile number again
    lda(ABSX(MetatileBuffer));
    // multiply by 4 and use as tile offset
    asl();
    asl();
    sta(ABS(0x2));
    // get current task number for level processing and
    lda(ABS(AreaParserTaskNum));
    // mask out all but LSB, then invert LSB, multiply by 2
    anda(IMM(0b1));
    // to get the correct column position in the metatile,
    eor(IMM(0b1));
    // then add to the tile offset so we can draw either side
    asl();
    // of the metatiles
    adc(ABS(0x2));
    tay();
    // use vram buffer offset from before as X
    ldx(ABS(0x0));
    lda(INDY((0x6)));
    // get first tile number (top left or top right) and store
    sta(ABSX(((VRAM_Buffer2) + (3))));
    iny();
    // now get the second (bottom left or bottom right) and store
    lda(INDY((0x6)));
    sta(ABSX(((VRAM_Buffer2) + (4))));
    // get current attribute row
    ldy(ABS(0x4));
    // get LSB of current column where we're at, and
    lda(ABS(0x5));
    // branch if set (clear = left attrib, set = right)
    BNE(RightCheck);
    // get current row we're rendering
    lda(ABS(0x1));
    // branch if LSB set (clear = top left, set = bottom left)
    lsr();
    BCS(LLeft);
    // rotate attribute bits 3 to the left
    rol(ABS(0x3));
    // thus in d1-d0, for upper left square
    rol(ABS(0x3));
    rol(ABS(0x3));
    JMP(SetAttrib);
    JMP(RightCheck);
}
void RightCheck() {
    _debug("RightCheck", __FILE__, __LINE__);
    // get LSB of current row we're rendering
    lda(ABS(0x1));
    // branch if set (clear = top right, set = bottom right)
    lsr();
    BCS(NextMTRow);
    // shift attribute bits 4 to the right
    lsr(ABS(0x3));
    // thus in d3-d2, for upper right square
    lsr(ABS(0x3));
    lsr(ABS(0x3));
    lsr(ABS(0x3));
    JMP(SetAttrib);
    JMP(LLeft);
}
void LLeft() {
    _debug("LLeft", __FILE__, __LINE__);
    // shift attribute bits 2 to the right
    lsr(ABS(0x3));
    // thus in d5-d4 for lower left square
    lsr(ABS(0x3));
    JMP(NextMTRow);
}
void NextMTRow() {
    _debug("NextMTRow", __FILE__, __LINE__);
    // move onto next attribute row
    inc(ABS(0x4));
    JMP(SetAttrib);
}
void SetAttrib() {
    _debug("SetAttrib", __FILE__, __LINE__);
    // get previously saved bits from before
    lda(ABSY(AttributeBuffer));
    // if any, and put new bits, if any, onto
    ora(ABS(0x3));
    // the old, and store
    sta(ABSY(AttributeBuffer));
    // increment vram buffer offset by 2
    inc(ABS(0x0));
    inc(ABS(0x0));
    // get current gfx buffer row, and check for
    ldx(ABS(0x1));
    // the bottom of the screen
    inx();
    cpx(IMM(0xd));
    // if not there yet, loop back
    BCC(DrawMTLoop);
    // get current vram buffer offset, increment by 3
    ldy(ABS(0x0));
    // (for name table address and length bytes)
    iny();
    iny();
    iny();
    lda(IMM(0x0));
    // put null terminator at end of data for name table
    sta(ABSY(VRAM_Buffer2));
    // store new buffer offset
    sty(ABS(VRAM_Buffer2_Offset));
    // increment name table address low
    inc(ABS(CurrentNTAddr_Low));
    // check current low byte
    lda(ABS(CurrentNTAddr_Low));
    // if no wraparound, just skip this part
    anda(IMM(0b11111));
    BNE(ExitDrawM);
    // if wraparound occurs, make sure low byte stays
    lda(IMM(0x80));
    // just under the status bar
    sta(ABS(CurrentNTAddr_Low));
    // and then invert d2 of the name table address high
    lda(ABS(CurrentNTAddr_High));
    // to move onto the next appropriate name table
    eor(IMM(0b100));
    sta(ABS(CurrentNTAddr_High));
    JMP(ExitDrawM);
}
void ExitDrawM() {
    _debug("ExitDrawM", __FILE__, __LINE__);
    // jump to set buffer to $0341 and leave
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}
// $00 - temp attribute table address high (big endian order this time!)
// $01 - temp attribute table address low
void RenderAttributeTables() {
    _debug("RenderAttributeTables", __FILE__, __LINE__);
    // get low byte of next name table address
    lda(ABS(CurrentNTAddr_Low));
    // to be written to, mask out all but 5 LSB,
    anda(IMM(0b11111));
    // subtract four
    sec();
    sbc(IMM(0x4));
    // mask out bits again and store
    anda(IMM(0b11111));
    sta(ABS(0x1));
    // get high byte and branch if borrow not set
    lda(ABS(CurrentNTAddr_High));
    BCS(SetATHigh);
    // otherwise invert d2
    eor(IMM(0b100));
    JMP(SetATHigh);
}
void SetATHigh() {
    _debug("SetATHigh", __FILE__, __LINE__);
    // mask out all other bits
    anda(IMM(0b100));
    // add $2300 to the high byte and store
    ora(IMM(0x23));
    sta(ABS(0x0));
    // get low byte - 4, divide by 4, add offset for
    lda(ABS(0x1));
    // attribute table and store
    lsr();
    lsr();
    // we should now have the appropriate block of
    adc(IMM(0xc0));
    // attribute table in our temp address
    sta(ABS(0x1));
    ldx(IMM(0x0));
    // get buffer offset
    ldy(ABS(VRAM_Buffer2_Offset));
    JMP(AttribLoop);
}
void AttribLoop() {
    _debug("AttribLoop", __FILE__, __LINE__);
    lda(ABS(0x0));
    // store high byte of attribute table address
    sta(ABSY(VRAM_Buffer2));
    lda(ABS(0x1));
    // get low byte, add 8 because we want to start
    clc();
    // below the status bar, and store
    adc(IMM(0x8));
    sta(ABSY(((VRAM_Buffer2) + (1))));
    // also store in temp again
    sta(ABS(0x1));
    // fetch current attribute table byte and store
    lda(ABSX(AttributeBuffer));
    // in the buffer
    sta(ABSY(((VRAM_Buffer2) + (3))));
    lda(IMM(0x1));
    // store length of 1 in buffer
    sta(ABSY(((VRAM_Buffer2) + (2))));
    lsr();
    // clear current byte in attribute buffer
    sta(ABSX(AttributeBuffer));
    // increment buffer offset by 4 bytes
    iny();
    iny();
    iny();
    iny();
    // increment attribute offset and check to see
    inx();
    // if we're at the end yet
    cpx(IMM(0x7));
    BCC(AttribLoop);
    // put null terminator at the end
    sta(ABSY(VRAM_Buffer2));
    // store offset in case we want to do any more
    sty(ABS(VRAM_Buffer2_Offset));
    JMP(SetVRAMCtrl);
}
void SetVRAMCtrl() {
    _debug("SetVRAMCtrl", __FILE__, __LINE__);
    lda(IMM(0x6));
    // set buffer to $0341 and leave
    sta(ABS(VRAM_Buffer_AddrCtrl));
    return;
}
void ColorRotation() {
    _debug("ColorRotation", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // mask out all but three LSB
    anda(IMM(0x7));
    // branch if not set to zero to do this every eighth frame
    BNE(ExitColorRot);
    // check vram buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    cpx(IMM(0x31));
    // if offset over 48 bytes, branch to leave
    BCS(ExitColorRot);
    // otherwise use frame counter's 3 LSB as offset here
    tay();
    JMP(GetBlankPal);
}
void GetBlankPal() {
    _debug("GetBlankPal", __FILE__, __LINE__);
    // get blank palette for palette 3
    lda(ABSY(0x8000+offsetof(G, BlankPalette)));
    // store it in the vram buffer
    sta(ABSX(VRAM_Buffer1));
    // increment offsets
    inx();
    iny();
    cpy(IMM(0x8));
    // do this until all bytes are copied
    BCC(GetBlankPal);
    // get current vram buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    lda(IMM(0x3));
    // set counter here
    sta(ABS(0x0));
    // get area type
    lda(ABS(AreaType));
    // multiply by 4 to get proper offset
    asl();
    asl();
    // save as offset here
    tay();
    JMP(GetAreaPal);
}
void GetAreaPal() {
    _debug("GetAreaPal", __FILE__, __LINE__);
    // fetch palette to be written based on area type
    lda(ABSY(0x8000+offsetof(G, Palette3Data)));
    // store it to overwrite blank palette in vram buffer
    sta(ABSX(((VRAM_Buffer1) + (3))));
    iny();
    inx();
    // decrement counter
    dec(ABS(0x0));
    // do this until the palette is all copied
    BPL(GetAreaPal);
    // get current vram buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    // get color cycling offset
    ldy(ABS(ColorRotateOffset));
    lda(ABSY(0x8000+offsetof(G, ColorRotatePalette)));
    // get and store current color in second slot of palette
    sta(ABSX(((VRAM_Buffer1) + (4))));
    lda(ABS(VRAM_Buffer1_Offset));
    // add seven bytes to vram buffer offset
    clc();
    adc(IMM(0x7));
    sta(ABS(VRAM_Buffer1_Offset));
    // increment color cycling offset
    inc(ABS(ColorRotateOffset));
    lda(ABS(ColorRotateOffset));
    // check to see if it's still in range
    cmp(IMM(0x6));
    // if so, branch to leave
    BCC(ExitColorRot);
    lda(IMM(0x0));
    // otherwise, init to keep it in range
    sta(ABS(ColorRotateOffset));
    JMP(ExitColorRot);
}
void ExitColorRot() {
    _debug("ExitColorRot", __FILE__, __LINE__);
    // leave
    return;
}
void RemoveCoin_Axe() {
    _debug("RemoveCoin_Axe", __FILE__, __LINE__);
    // set low byte so offset points to $0341
    ldy(IMM(0x41));
    // load offset for default blank metatile
    lda(IMM(0x3));
    // check area type
    ldx(ABS(AreaType));
    // if not water type, use offset
    BNE(WriteBlankMT);
    // otherwise load offset for blank metatile used in water
    lda(IMM(0x4));
    JMP(WriteBlankMT);
}
void WriteBlankMT() {
    _debug("WriteBlankMT", __FILE__, __LINE__);
    // do a sub to write blank metatile to vram buffer
    JSR(PutBlockMetatile);
    lda(IMM(0x6));
    // set vram address controller to $0341 and leave
    sta(ABS(VRAM_Buffer_AddrCtrl));
    return;
}
void ReplaceBlockMetatile() {
    _debug("ReplaceBlockMetatile", __FILE__, __LINE__);
    // write metatile to vram buffer to replace block object
    JSR(WriteBlockMetatile);
    // increment unused counter (residual code)
    inc(ABS(Block_ResidualCounter));
    // decrement flag (residual code)
    dec(ABSX(Block_RepFlag));
    // leave
    return;
}
void DestroyBlockMetatile() {
    _debug("DestroyBlockMetatile", __FILE__, __LINE__);
    // force blank metatile if branched/jumped to this point
    lda(IMM(0x0));
    JMP(WriteBlockMetatile);
}
void WriteBlockMetatile() {
    _debug("WriteBlockMetatile", __FILE__, __LINE__);
    // load offset for blank metatile
    ldy(IMM(0x3));
    // check contents of A for blank metatile
    cmp(IMM(0x0));
    // branch if found (unconditional if branched from 8a6b)
    BEQ(UseBOffset);
    // load offset for brick metatile w/ line
    ldy(IMM(0x0));
    cmp(IMM(0x58));
    // use offset if metatile is brick with coins (w/ line)
    BEQ(UseBOffset);
    cmp(IMM(0x51));
    // use offset if metatile is breakable brick w/ line
    BEQ(UseBOffset);
    // increment offset for brick metatile w/o line
    iny();
    cmp(IMM(0x5d));
    // use offset if metatile is brick with coins (w/o line)
    BEQ(UseBOffset);
    cmp(IMM(0x52));
    // use offset if metatile is breakable brick w/o line
    BEQ(UseBOffset);
    // if any other metatile, increment offset for empty block
    iny();
    JMP(UseBOffset);
}
void UseBOffset() {
    _debug("UseBOffset", __FILE__, __LINE__);
    // put Y in A
    tya();
    // get vram buffer offset
    ldy(ABS(VRAM_Buffer1_Offset));
    // move onto next byte
    iny();
    // get appropriate block data and write to vram buffer
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}
void MoveVOffset() {
    _debug("MoveVOffset", __FILE__, __LINE__);
    // decrement vram buffer offset
    dey();
    // add 10 bytes to it
    tya();
    clc();
    adc(IMM(10));
    // branch to store as new vram buffer offset
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}
void PutBlockMetatile() {
    _debug("PutBlockMetatile", __FILE__, __LINE__);
    // store control bit from SprDataOffset_Ctrl
    stx(ABS(0x0));
    // store vram buffer offset for next byte
    sty(ABS(0x1));
    asl();
    // multiply A by four and use as X
    asl();
    tax();
    // load high byte for name table 0
    ldy(IMM(0x20));
    // get low byte of block buffer pointer
    lda(ABS(0x6));
    // check to see if we're on odd-page block buffer
    cmp(IMM(0xd0));
    // if not, use current high byte
    BCC(SaveHAdder);
    // otherwise load high byte for name table 1
    ldy(IMM(0x24));
    JMP(SaveHAdder);
}
void SaveHAdder() {
    _debug("SaveHAdder", __FILE__, __LINE__);
    // save high byte here
    sty(ABS(0x3));
    // mask out high nybble of block buffer pointer
    anda(IMM(0xf));
    // multiply by 2 to get appropriate name table low byte
    asl();
    // and then store it here
    sta(ABS(0x4));
    lda(IMM(0x0));
    // initialize temp high byte
    sta(ABS(0x5));
    // get vertical high nybble offset used in block buffer routine
    lda(ABS(0x2));
    clc();
    // add 32 pixels for the status bar
    adc(IMM(0x20));
    asl();
    // shift and rotate d7 onto d0 and d6 into carry
    rol(ABS(0x5));
    asl();
    // shift and rotate d6 onto d0 and d5 into carry
    rol(ABS(0x5));
    // add low byte of name table and carry to vertical high nybble
    adc(ABS(0x4));
    // and store here
    sta(ABS(0x4));
    // get whatever was in d7 and d6 of vertical high nybble
    lda(ABS(0x5));
    // add carry
    adc(IMM(0x0));
    clc();
    // then add high byte of name table
    adc(ABS(0x3));
    // store here
    sta(ABS(0x5));
    // get vram buffer offset to be used
    ldy(ABS(0x1));
    JMP(RemBridge);
}
void RemBridge() {
    _debug("RemBridge", __FILE__, __LINE__);
    // write top left and top right
    lda(ABSX(0x8000+offsetof(G, BlockGfxData)));
    // tile numbers into first spot
    sta(ABSY(((VRAM_Buffer1) + (2))));
    lda(ABSX(((0x8000+offsetof(G, BlockGfxData)) + (1))));
    sta(ABSY(((VRAM_Buffer1) + (3))));
    // write bottom left and bottom
    lda(ABSX(((0x8000+offsetof(G, BlockGfxData)) + (2))));
    // right tiles numbers into
    sta(ABSY(((VRAM_Buffer1) + (7))));
    // second spot
    lda(ABSX(((0x8000+offsetof(G, BlockGfxData)) + (3))));
    sta(ABSY(((VRAM_Buffer1) + (8))));
    lda(ABS(0x4));
    // write low byte of name table
    sta(ABSY(VRAM_Buffer1));
    // into first slot as read
    clc();
    // add 32 bytes to value
    adc(IMM(0x20));
    // write low byte of name table
    sta(ABSY(((VRAM_Buffer1) + (5))));
    // plus 32 bytes into second slot
    lda(ABS(0x5));
    // write high byte of name
    sta(ABSY(((VRAM_Buffer1) - (1))));
    // table address to both slots
    sta(ABSY(((VRAM_Buffer1) + (4))));
    lda(IMM(0x2));
    // put length of 2 in
    sta(ABSY(((VRAM_Buffer1) + (1))));
    // both slots
    sta(ABSY(((VRAM_Buffer1) + (6))));
    lda(IMM(0x0));
    // put null terminator at end
    sta(ABSY(((VRAM_Buffer1) + (9))));
    // get offset control bit here
    ldx(ABS(0x0));
    // and leave
    return;
}
void InitializeNameTables() {
    _debug("InitializeNameTables", __FILE__, __LINE__);
    // reset flip-flop
    lda(ABS(PPU_STATUS));
    // load mirror of ppu reg $2000
    lda(ABS(Mirror_PPU_CTRL_REG1));
    // set sprites for first 4k and background for second 4k
    ora(IMM(0b10000));
    // clear rest of lower nybble, leave higher alone
    anda(IMM(0b11110000));
    JSR(WritePPUReg1);
    // set vram address to start of name table 1
    lda(IMM(0x24));
    JSR(WriteNTAddr);
    // and then set it to name table 0
    lda(IMM(0x20));
    JMP(WriteNTAddr);
}
void WriteNTAddr() {
    _debug("WriteNTAddr", __FILE__, __LINE__);
    sta(ABS(PPU_ADDRESS));
    lda(IMM(0x0));
    sta(ABS(PPU_ADDRESS));
    // clear name table with blank tile #24
    ldx(IMM(0x4));
    ldy(IMM(0xc0));
    lda(IMM(0x24));
    JMP(InitNTLoop);
}
void InitNTLoop() {
    _debug("InitNTLoop", __FILE__, __LINE__);
    // count out exactly 768 tiles
    sta(ABS(PPU_DATA));
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    // now to clear the attribute table (with zero this time)
    ldy(IMM(64));
    txa();
    // init vram buffer 1 offset
    sta(ABS(VRAM_Buffer1_Offset));
    // init vram buffer 1
    sta(ABS(VRAM_Buffer1));
    JMP(InitATLoop);
}
void InitATLoop() {
    _debug("InitATLoop", __FILE__, __LINE__);
    sta(ABS(PPU_DATA));
    dey();
    BNE(InitATLoop);
    // reset scroll variables
    sta(ABS(HorizontalScroll));
    sta(ABS(VerticalScroll));
    // initialize scroll registers to zero
    JMP(InitScroll);
    JMP(ReadJoypads);
}
// $00 - temp joypad bit
void ReadJoypads() {
    _debug("ReadJoypads", __FILE__, __LINE__);
    // reset and clear strobe of joypad ports
    lda(IMM(0x1));
    sta(ABS(JOYPAD_PORT));
    lsr();
    // start with joypad 1's port
    tax();
    sta(ABS(JOYPAD_PORT));
    JSR(ReadPortBits);
    // increment for joypad 2's port
    inx();
    JMP(ReadPortBits);
}
void ReadPortBits() {
    _debug("ReadPortBits", __FILE__, __LINE__);
    ldy(IMM(0x8));
    JMP(PortLoop);
}
void PortLoop() {
    _debug("PortLoop", __FILE__, __LINE__);
    // push previous bit onto stack
    pha();
    // read current bit on joypad port
    lda(ABSX(JOYPAD_PORT));
    // check d1 and d0 of port output
    sta(ABS(0x0));
    // this is necessary on the old
    lsr();
    // famicom systems in japan
    ora(ABS(0x0));
    lsr();
    // read bits from stack
    pla();
    // rotate bit from carry flag
    rol();
    dey();
    // count down bits left
    BNE(PortLoop);
    // save controller status here always
    sta(ABSX(SavedJoypadBits));
    pha();
    // check for select or start
    anda(IMM(0b110000));
    // if neither saved state nor current state
    anda(ABSX(JoypadBitMask));
    // have any of these two set, branch
    BEQ(Save8Bits);
    pla();
    // otherwise store without select
    anda(IMM(0b11001111));
    // or start bits and leave
    sta(ABSX(SavedJoypadBits));
    return;
}
void Save8Bits() {
    _debug("Save8Bits", __FILE__, __LINE__);
    pla();
    // save with all bits in another place and leave
    sta(ABSX(JoypadBitMask));
    return;
}
// $00 - vram buffer address table low
// $01 - vram buffer address table high
void WriteBufferToScreen() {
    _debug("WriteBufferToScreen", __FILE__, __LINE__);
    // store high byte of vram address
    sta(ABS(PPU_ADDRESS));
    iny();
    // load next byte (second)
    lda(INDY((0x0)));
    // store low byte of vram address
    sta(ABS(PPU_ADDRESS));
    iny();
    // load next byte (third)
    lda(INDY((0x0)));
    // shift to left and save in stack
    asl();
    pha();
    // load mirror of $2000,
    lda(ABS(Mirror_PPU_CTRL_REG1));
    // set ppu to increment by 32 by default
    ora(IMM(0b100));
    // if d7 of third byte was clear, ppu will
    BCS(SetupWrites);
    // only increment by 1
    anda(IMM(0b11111011));
    JMP(SetupWrites);
}
void SetupWrites() {
    _debug("SetupWrites", __FILE__, __LINE__);
    // write to register
    JSR(WritePPUReg1);
    // pull from stack and shift to left again
    pla();
    asl();
    // if d6 of third byte was clear, do not repeat byte
    BCC(GetLength);
    // otherwise set d1 and increment Y
    ora(IMM(0b10));
    iny();
    JMP(GetLength);
}
void GetLength() {
    _debug("GetLength", __FILE__, __LINE__);
    // shift back to the right to get proper length
    lsr();
    // note that d1 will now be in carry
    lsr();
    tax();
    JMP(OutputToVRAM);
}
void OutputToVRAM() {
    _debug("OutputToVRAM", __FILE__, __LINE__);
    // if carry set, repeat loading the same byte
    BCS(RepeatByte);
    // otherwise increment Y to load next byte
    iny();
    JMP(RepeatByte);
}
void RepeatByte() {
    _debug("RepeatByte", __FILE__, __LINE__);
    // load more data from buffer and write to vram
    lda(INDY((0x0)));
    sta(ABS(PPU_DATA));
    // done writing?
    dex();
    BNE(OutputToVRAM);
    sec();
    tya();
    // add end length plus one to the indirect at $00
    adc(ABS(0x0));
    // to allow this routine to read another set of updates
    sta(ABS(0x0));
    lda(IMM(0x0));
    adc(ABS(0x1));
    sta(ABS(0x1));
    // sets vram address to $3f00
    lda(IMM(0x3f));
    sta(ABS(PPU_ADDRESS));
    lda(IMM(0x0));
    sta(ABS(PPU_ADDRESS));
    // then reinitializes it for some reason
    sta(ABS(PPU_ADDRESS));
    sta(ABS(PPU_ADDRESS));
    JMP(UpdateScreen);
}
void UpdateScreen() {
    _debug("UpdateScreen", __FILE__, __LINE__);
    // reset flip-flop
    ldx(ABS(PPU_STATUS));
    // load first byte from indirect as a pointer
    ldy(IMM(0x0));
    lda(INDY((0x0)));
    // if byte is zero we have no further updates to make here
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}
void InitScroll() {
    _debug("InitScroll", __FILE__, __LINE__);
    // store contents of A into scroll registers
    sta(ABS(PPU_SCROLL_REG));
    // and end whatever subroutine led us here
    sta(ABS(PPU_SCROLL_REG));
    return;
}
void WritePPUReg1() {
    _debug("WritePPUReg1", __FILE__, __LINE__);
    // write contents of A to PPU register 1
    sta(ABS(PPU_CTRL_REG1));
    // and its mirror
    sta(ABS(Mirror_PPU_CTRL_REG1));
    return;
}
void PrintStatusBarNumbers() {
    _debug("PrintStatusBarNumbers", __FILE__, __LINE__);
    // store player-specific offset
    sta(ABS(0x0));
    // use first nybble to print the coin display
    JSR(OutputNumbers);
    // move high nybble to low
    lda(ABS(0x0));
    // and print to score display
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}
void OutputNumbers() {
    _debug("OutputNumbers", __FILE__, __LINE__);
    // add 1 to low nybble
    clc();
    adc(IMM(0x1));
    // mask out high nybble
    anda(IMM(0b1111));
    cmp(IMM(0x6));
    BCS(ExitOutputN);
    // save incremented value to stack for now and
    pha();
    // shift to left and use as offset
    asl();
    tay();
    // get current buffer pointer
    ldx(ABS(VRAM_Buffer1_Offset));
    // put at top of screen by default
    lda(IMM(0x20));
    // are we writing top score on title screen?
    cpy(IMM(0x0));
    BNE(SetupNums);
    // if so, put further down on the screen
    lda(IMM(0x22));
    JMP(SetupNums);
}
void SetupNums() {
    _debug("SetupNums", __FILE__, __LINE__);
    sta(ABSX(VRAM_Buffer1));
    // write low vram address and length of thing
    lda(ABSY(0x8000+offsetof(G, StatusBarData)));
    // we're printing to the buffer
    sta(ABSX(((VRAM_Buffer1) + (1))));
    lda(ABSY(((0x8000+offsetof(G, StatusBarData)) + (1))));
    sta(ABSX(((VRAM_Buffer1) + (2))));
    // save length byte in counter
    sta(ABS(0x3));
    // and buffer pointer elsewhere for now
    stx(ABS(0x2));
    // pull original incremented value from stack
    pla();
    tax();
    // load offset to value we want to write
    lda(ABSX(0x8000+offsetof(G, StatusBarOffset)));
    sec();
    // subtract from length byte we read before
    sbc(ABSY(((0x8000+offsetof(G, StatusBarData)) + (1))));
    // use value as offset to display digits
    tay();
    ldx(ABS(0x2));
    JMP(DigitPLoop);
}
void DigitPLoop() {
    _debug("DigitPLoop", __FILE__, __LINE__);
    // write digits to the buffer
    lda(ABSY(DisplayDigits));
    sta(ABSX(((VRAM_Buffer1) + (3))));
    inx();
    iny();
    // do this until all the digits are written
    dec(ABS(0x3));
    BNE(DigitPLoop);
    // put null terminator at end
    lda(IMM(0x0));
    sta(ABSX(((VRAM_Buffer1) + (3))));
    // increment buffer pointer by 3
    inx();
    inx();
    inx();
    // store it in case we want to use it again
    stx(ABS(VRAM_Buffer1_Offset));
    JMP(ExitOutputN);
}
void ExitOutputN() {
    _debug("ExitOutputN", __FILE__, __LINE__);
    return;
}
void DigitsMathRoutine() {
    _debug("DigitsMathRoutine", __FILE__, __LINE__);
    // check mode of operation
    lda(ABS(OperMode));
    cmp(IMM(TitleScreenModeValue));
    // if in title screen mode, branch to lock score
    BEQ(EraseDMods);
    ldx(IMM(0x5));
    JMP(AddModLoop);
}
void AddModLoop() {
    _debug("AddModLoop", __FILE__, __LINE__);
    // load digit amount to increment
    lda(ABSX(DigitModifier));
    clc();
    // add to current digit
    adc(ABSY(DisplayDigits));
    // if result is a negative number, branch to subtract
    BMI(BorrowOne);
    cmp(IMM(10));
    // if digit greater than $09, branch to add
    BCS(CarryOne);
    JMP(StoreNewD);
}
void StoreNewD() {
    _debug("StoreNewD", __FILE__, __LINE__);
    // store as new score or game timer digit
    sta(ABSY(DisplayDigits));
    // move onto next digits in score or game timer
    dey();
    // and digit amounts to increment
    dex();
    // loop back if we're not done yet
    BPL(AddModLoop);
    JMP(EraseDMods);
}
void EraseDMods() {
    _debug("EraseDMods", __FILE__, __LINE__);
    // store zero here
    lda(IMM(0x0));
    // start with the last digit
    ldx(IMM(0x6));
    JMP(EraseMLoop);
}
void EraseMLoop() {
    _debug("EraseMLoop", __FILE__, __LINE__);
    // initialize the digit amounts to increment
    sta(ABSX(((DigitModifier) - (1))));
    dex();
    // do this until they're all reset, then leave
    BPL(EraseMLoop);
    return;
}
void BorrowOne() {
    _debug("BorrowOne", __FILE__, __LINE__);
    // decrement the previous digit, then put $09 in
    dec(ABSX(((DigitModifier) - (1))));
    // the game timer digit we're currently on to "borrow
    lda(IMM(0x9));
    // the one", then do an unconditional branch back
    BNE(StoreNewD);
    JMP(CarryOne);
}
void CarryOne() {
    _debug("CarryOne", __FILE__, __LINE__);
    // subtract ten from our digit to make it a
    sec();
    // proper BCD number, then increment the digit
    sbc(IMM(10));
    // preceding current digit to "carry the one" properly
    inc(ABSX(((DigitModifier) - (1))));
    // go back to just after we branched here
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}
void UpdateTopScore() {
    _debug("UpdateTopScore", __FILE__, __LINE__);
    // start with mario's score
    ldx(IMM(0x5));
    JSR(TopScoreCheck);
    // now do luigi's score
    ldx(IMM(0xb));
    JMP(TopScoreCheck);
}
void TopScoreCheck() {
    _debug("TopScoreCheck", __FILE__, __LINE__);
    // start with the lowest digit
    ldy(IMM(0x5));
    sec();
    JMP(GetScoreDiff);
}
void GetScoreDiff() {
    _debug("GetScoreDiff", __FILE__, __LINE__);
    // subtract each player digit from each high score digit
    lda(ABSX(PlayerScoreDisplay));
    // from lowest to highest, if any top score digit exceeds
    sbc(ABSY(TopScoreDisplay));
    // any player digit, borrow will be set until a subsequent
    dex();
    // subtraction clears it (player digit is higher than top)
    dey();
    BPL(GetScoreDiff);
    // check to see if borrow is still set, if so, no new high score
    BCC(NoTopSc);
    // increment X and Y once to the start of the score
    inx();
    iny();
    JMP(CopyScore);
}
void CopyScore() {
    _debug("CopyScore", __FILE__, __LINE__);
    // store player's score digits into high score memory area
    lda(ABSX(PlayerScoreDisplay));
    sta(ABSY(TopScoreDisplay));
    inx();
    iny();
    // do this until we have stored them all
    cpy(IMM(0x6));
    BCC(CopyScore);
    JMP(NoTopSc);
}
void NoTopSc() {
    _debug("NoTopSc", __FILE__, __LINE__);
    return;
}
void InitializeGame() {
    _debug("InitializeGame", __FILE__, __LINE__);
    // clear all memory as in initialization procedure,
    ldy(IMM(0x6f));
    // but this time, clear only as far as $076f
    JSR(InitializeMemory);
    ldy(IMM(0x1f));
    JMP(ClrSndLoop);
}
void ClrSndLoop() {
    _debug("ClrSndLoop", __FILE__, __LINE__);
    // clear out memory used
    sta(ABSY(SoundMemory));
    // by the sound engines
    dey();
    BPL(ClrSndLoop);
    // set demo timer
    lda(IMM(0x18));
    sta(ABS(DemoTimer));
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}
void InitializeArea() {
    _debug("InitializeArea", __FILE__, __LINE__);
    // clear all memory again, only as far as $074b
    ldy(IMM(0x4b));
    // this is only necessary if branching from
    JSR(InitializeMemory);
    ldx(IMM(0x21));
    lda(IMM(0x0));
    JMP(ClrTimersLoop);
}
void ClrTimersLoop() {
    _debug("ClrTimersLoop", __FILE__, __LINE__);
    // clear out memory between
    sta(ABSX(Timers));
    // $0780 and $07a1
    dex();
    BPL(ClrTimersLoop);
    lda(ABS(HalfwayPage));
    // if AltEntranceControl not set, use halfway page, if any found
    ldy(ABS(AltEntranceControl));
    BEQ(StartPage);
    // otherwise use saved entry page number here
    lda(ABS(EntrancePage));
    JMP(StartPage);
}
void StartPage() {
    _debug("StartPage", __FILE__, __LINE__);
    // set as value here
    sta(ABS(ScreenLeft_PageLoc));
    // also set as current page
    sta(ABS(CurrentPageLoc));
    // set flag here if halfway page or saved entry page number found
    sta(ABS(BackloadingFlag));
    // get pixel coordinates for screen borders
    JSR(GetScreenPosition);
    // if on odd numbered page, use $2480 as start of rendering
    ldy(IMM(0x20));
    // otherwise use $2080, this address used later as name table
    anda(IMM(0b1));
    // address for rendering of game area
    BEQ(SetInitNTHigh);
    ldy(IMM(0x24));
    JMP(SetInitNTHigh);
}
void SetInitNTHigh() {
    _debug("SetInitNTHigh", __FILE__, __LINE__);
    // store name table address
    sty(ABS(CurrentNTAddr_High));
    ldy(IMM(0x80));
    sty(ABS(CurrentNTAddr_Low));
    // store LSB of page number in high nybble
    asl();
    // of block buffer column position
    asl();
    asl();
    asl();
    sta(ABS(BlockBufferColumnPos));
    // set area object lengths for all empty
    dec(ABS(AreaObjectLength));
    dec(ABS(((AreaObjectLength) + (1))));
    dec(ABS(((AreaObjectLength) + (2))));
    // set value for renderer to update 12 column sets
    lda(IMM(0xb));
    // 12 column sets = 24 metatile columns = 1 1/2 screens
    sta(ABS(ColumnSets));
    // get enemy and level addresses and load header
    JSR(GetAreaDataAddrs);
    // check to see if primary hard mode has been activated
    lda(ABS(PrimaryHardMode));
    // if so, activate the secondary no matter where we're at
    BNE(SetSecHard);
    // otherwise check world number
    lda(ABS(WorldNumber));
    // if less than 5, do not activate secondary
    cmp(IMM(World5));
    BCC(CheckHalfway);
    // if not equal to, then world > 5, thus activate
    BNE(SetSecHard);
    // otherwise, world 5, so check level number
    lda(ABS(LevelNumber));
    // if 1 or 2, do not set secondary hard mode flag
    cmp(IMM(Level3));
    BCC(CheckHalfway);
    JMP(SetSecHard);
}
void SetSecHard() {
    _debug("SetSecHard", __FILE__, __LINE__);
    // set secondary hard mode flag for areas 5-3 and beyond
    inc(ABS(SecondaryHardMode));
    JMP(CheckHalfway);
}
void CheckHalfway() {
    _debug("CheckHalfway", __FILE__, __LINE__);
    lda(ABS(HalfwayPage));
    BEQ(DoneInitArea);
    // if halfway page set, overwrite start position from header
    lda(IMM(0x2));
    sta(ABS(PlayerEntranceCtrl));
    JMP(DoneInitArea);
}
void DoneInitArea() {
    _debug("DoneInitArea", __FILE__, __LINE__);
    // silence music
    lda(IMM(Silence));
    sta(ABS(AreaMusicQueue));
    // disable screen output
    lda(IMM(0x1));
    sta(ABS(DisableScreenFlag));
    // increment one of the modes
    inc(ABS(OperMode_Task));
    return;
}
void PrimaryGameSetup() {
    _debug("PrimaryGameSetup", __FILE__, __LINE__);
    lda(IMM(0x1));
    // set flag to load game timer from header
    sta(ABS(FetchNewGameTimerFlag));
    // set player's size to small
    sta(ABS(PlayerSize));
    lda(IMM(0x2));
    // give each player three lives
    sta(ABS(NumberofLives));
    sta(ABS(OffScr_NumberofLives));
    JMP(SecondaryGameSetup);
}
void SecondaryGameSetup() {
    _debug("SecondaryGameSetup", __FILE__, __LINE__);
    lda(IMM(0x0));
    // enable screen output
    sta(ABS(DisableScreenFlag));
    tay();
    JMP(ClearVRLoop);
}
void ClearVRLoop() {
    _debug("ClearVRLoop", __FILE__, __LINE__);
    // clear buffer at $0300-$03ff
    sta(ABSY(((VRAM_Buffer1) - (1))));
    iny();
    BNE(ClearVRLoop);
    // clear game timer exp flag
    sta(ABS(GameTimerExpiredFlag));
    // clear skip lives display flag
    sta(ABS(DisableIntermediate));
    // clear value here
    sta(ABS(BackloadingFlag));
    lda(IMM(0xff));
    // initialize balance platform assignment flag
    sta(ABS(BalPlatformAlignment));
    // get left side page location
    lda(ABS(ScreenLeft_PageLoc));
    // shift LSB of ppu register #1 mirror out
    lsr(ABS(Mirror_PPU_CTRL_REG1));
    // mask out all but LSB of page location
    anda(IMM(0x1));
    // rotate LSB of page location into carry then onto mirror
    ror();
    // this is to set the proper PPU name table
    rol(ABS(Mirror_PPU_CTRL_REG1));
    // load proper music into queue
    JSR(GetAreaMusic);
    // load sprite shuffle amounts to be used later
    lda(IMM(0x38));
    sta(ABS(((SprShuffleAmt) + (2))));
    lda(IMM(0x48));
    sta(ABS(((SprShuffleAmt) + (1))));
    lda(IMM(0x58));
    sta(ABS(SprShuffleAmt));
    // load default OAM offsets into $06e4-$06f2
    ldx(IMM(0xe));
    JMP(ShufAmtLoop);
}
void ShufAmtLoop() {
    _debug("ShufAmtLoop", __FILE__, __LINE__);
    lda(ABSX(0x8000+offsetof(G, DefaultSprOffsets)));
    sta(ABSX(SprDataOffset));
    // do this until they're all set
    dex();
    BPL(ShufAmtLoop);
    // set up sprite #0
    ldy(IMM(0x3));
    JMP(ISpr0Loop);
}
void ISpr0Loop() {
    _debug("ISpr0Loop", __FILE__, __LINE__);
    lda(ABSY(0x8000+offsetof(G, Sprite0Data)));
    sta(ABSY(Sprite_Data));
    dey();
    BPL(ISpr0Loop);
    // these jsrs doesn't do anything useful
    JSR(DoNothing2);
    JSR(DoNothing1);
    // set sprite #0 check flag
    inc(ABS(Sprite0HitDetectFlag));
    // increment to next task
    inc(ABS(OperMode_Task));
    return;
}
// $06 - RAM address low
// $07 - RAM address high
void InitializeMemory() {
    _debug("InitializeMemory", __FILE__, __LINE__);
    // set initial high byte to $0700-$07ff
    ldx(IMM(0x7));
    // set initial low byte to start of page (at $00 of page)
    lda(IMM(0x0));
    sta(ABS(0x6));
    JMP(InitPageLoop);
}
void InitPageLoop() {
    _debug("InitPageLoop", __FILE__, __LINE__);
    stx(ABS(0x7));
    JMP(InitByteLoop);
}
void InitByteLoop() {
    _debug("InitByteLoop", __FILE__, __LINE__);
    // check to see if we're on the stack ($0100-$01ff)
    cpx(IMM(0x1));
    // if not, go ahead anyway
    BNE(InitByte);
    // otherwise, check to see if we're at $0160-$01ff
    cpy(IMM(0x60));
    // if so, skip write
    BCS(SkipByte);
    JMP(InitByte);
}
void InitByte() {
    _debug("InitByte", __FILE__, __LINE__);
    // otherwise, initialize byte with current low byte in Y
    sta(INDY((0x6)));
    JMP(SkipByte);
}
void SkipByte() {
    _debug("SkipByte", __FILE__, __LINE__);
    dey();
    // do this until all bytes in page have been erased
    cpy(IMM(0xff));
    BNE(InitByteLoop);
    // go onto the next page
    dex();
    // do this until all pages of memory have been erased
    BPL(InitPageLoop);
    return;
}
void GetAreaMusic() {
    _debug("GetAreaMusic", __FILE__, __LINE__);
    // if in title screen mode, leave
    lda(ABS(OperMode));
    BEQ(ExitGetM);
    // check for specific alternate mode of entry
    lda(ABS(AltEntranceControl));
    // if found, branch without checking starting position
    cmp(IMM(0x2));
    // from area object data header
    BEQ(ChkAreaType);
    // select music for pipe intro scene by default
    ldy(IMM(0x5));
    // check value from level header for certain values
    lda(ABS(PlayerEntranceCtrl));
    cmp(IMM(0x6));
    // load music for pipe intro scene if header
    BEQ(StoreMusic);
    // start position either value $06 or $07
    cmp(IMM(0x7));
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}
void ChkAreaType() {
    _debug("ChkAreaType", __FILE__, __LINE__);
    // load area type as offset for music bit
    ldy(ABS(AreaType));
    lda(ABS(CloudTypeOverride));
    // check for cloud type override
    BEQ(StoreMusic);
    // select music for cloud type level if found
    ldy(IMM(0x4));
    JMP(StoreMusic);
}
void StoreMusic() {
    _debug("StoreMusic", __FILE__, __LINE__);
    // otherwise select appropriate music for level type
    lda(ABSY(0x8000+offsetof(G, MusicSelectData)));
    // store in queue and leave
    sta(ABS(AreaMusicQueue));
    JMP(ExitGetM);
}
void ExitGetM() {
    _debug("ExitGetM", __FILE__, __LINE__);
    return;
}
void Entrance_GameTimerSetup() {
    _debug("Entrance_GameTimerSetup", __FILE__, __LINE__);
    // set current page for area objects
    lda(ABS(ScreenLeft_PageLoc));
    // as page location for player
    sta(ABS(Player_PageLoc));
    // store value here
    lda(IMM(0x28));
    // for fractional movement downwards if necessary
    sta(ABS(VerticalForceDown));
    // set high byte of player position and
    lda(IMM(0x1));
    // set facing direction so that player faces right
    sta(ABS(PlayerFacingDir));
    sta(ABS(Player_Y_HighPos));
    // set player state to on the ground by default
    lda(IMM(0x0));
    sta(ABS(Player_State));
    // initialize player's collision bits
    dec(ABS(Player_CollisionBits));
    // initialize halfway page
    ldy(IMM(0x0));
    sty(ABS(HalfwayPage));
    // check area type
    lda(ABS(AreaType));
    // if water type, set swimming flag, otherwise do not set
    BNE(ChkStPos);
    iny();
    JMP(ChkStPos);
}
void ChkStPos() {
    _debug("ChkStPos", __FILE__, __LINE__);
    sty(ABS(SwimmingFlag));
    // get starting position loaded from header
    ldx(ABS(PlayerEntranceCtrl));
    // check alternate mode of entry flag for 0 or 1
    ldy(ABS(AltEntranceControl));
    BEQ(SetStPos);
    cpy(IMM(0x1));
    BEQ(SetStPos);
    // if not 0 or 1, override $0710 with new offset in X
    ldx(ABSY(((0x8000+offsetof(G, AltYPosOffset)) - (2))));
    JMP(SetStPos);
}
void SetStPos() {
    _debug("SetStPos", __FILE__, __LINE__);
    // load appropriate horizontal position
    lda(ABSY(0x8000+offsetof(G, PlayerStarting_X_Pos)));
    // and vertical positions for the player, using
    sta(ABS(Player_X_Position));
    // AltEntranceControl as offset for horizontal and either $0710
    lda(ABSX(0x8000+offsetof(G, PlayerStarting_Y_Pos)));
    // or value that overwrote $0710 as offset for vertical
    sta(ABS(Player_Y_Position));
    lda(ABSX(0x8000+offsetof(G, PlayerBGPriorityData)));
    // set player sprite attributes using offset in X
    sta(ABS(Player_SprAttrib));
    // get appropriate player palette
    JSR(GetPlayerColors);
    // get timer control value from header
    ldy(ABS(GameTimerSetting));
    // if set to zero, branch (do not use dummy byte for this)
    BEQ(ChkOverR);
    // do we need to set the game timer? if not, use
    lda(ABS(FetchNewGameTimerFlag));
    // old game timer setting
    BEQ(ChkOverR);
    // if game timer is set and game timer flag is also set,
    lda(ABSY(0x8000+offsetof(G, GameTimerData)));
    // use value of game timer control for first digit of game timer
    sta(ABS(GameTimerDisplay));
    lda(IMM(0x1));
    // set last digit of game timer to 1
    sta(ABS(((GameTimerDisplay) + (2))));
    lsr();
    // set second digit of game timer
    sta(ABS(((GameTimerDisplay) + (1))));
    // clear flag for game timer reset
    sta(ABS(FetchNewGameTimerFlag));
    // clear star mario timer
    sta(ABS(StarInvincibleTimer));
    JMP(ChkOverR);
}
void ChkOverR() {
    _debug("ChkOverR", __FILE__, __LINE__);
    // if controller bits not set, branch to skip this part
    ldy(ABS(JoypadOverride));
    BEQ(ChkSwimE);
    // set player state to climbing
    lda(IMM(0x3));
    sta(ABS(Player_State));
    // set offset for first slot, for block object
    ldx(IMM(0x0));
    JSR(InitBlock_XY_Pos);
    // set vertical coordinate for block object
    lda(IMM(0xf0));
    sta(ABS(Block_Y_Position));
    // set offset in X for last enemy object buffer slot
    ldx(IMM(0x5));
    // set offset in Y for object coordinates used earlier
    ldy(IMM(0x0));
    // do a sub to grow vine
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}
void ChkSwimE() {
    _debug("ChkSwimE", __FILE__, __LINE__);
    // if level not water-type,
    ldy(ABS(AreaType));
    // skip this subroutine
    BNE(SetPESub);
    // otherwise, execute sub to set up air bubbles
    JSR(SetupBubble);
    JMP(SetPESub);
}
void SetPESub() {
    _debug("SetPESub", __FILE__, __LINE__);
    // set to run player entrance subroutine
    lda(IMM(0x7));
    // on the next frame of game engine
    sta(ABS(GameEngineSubroutine));
    return;
}
void PlayerLoseLife() {
    _debug("PlayerLoseLife", __FILE__, __LINE__);
    // disable screen and sprite 0 check
    inc(ABS(DisableScreenFlag));
    lda(IMM(0x0));
    sta(ABS(Sprite0HitDetectFlag));
    // silence music
    lda(IMM(Silence));
    sta(ABS(EventMusicQueue));
    // take one life from player
    dec(ABS(NumberofLives));
    // if player still has lives, branch
    BPL(StillInGame);
    lda(IMM(0x0));
    // initialize mode task,
    sta(ABS(OperMode_Task));
    // switch to game over mode
    lda(IMM(GameOverModeValue));
    // and leave
    sta(ABS(OperMode));
    return;
}
void StillInGame() {
    _debug("StillInGame", __FILE__, __LINE__);
    // multiply world number by 2 and use
    lda(ABS(WorldNumber));
    // as offset
    asl();
    tax();
    // if in area -3 or -4, increment
    lda(ABS(LevelNumber));
    // offset by one byte, otherwise
    anda(IMM(0x2));
    // leave offset alone
    BEQ(GetHalfway);
    inx();
    JMP(GetHalfway);
}
void GetHalfway() {
    _debug("GetHalfway", __FILE__, __LINE__);
    // get halfway page number with offset
    ldy(ABSX(0x8000+offsetof(G, HalfwayPageNybbles)));
    // check area number's LSB
    lda(ABS(LevelNumber));
    lsr();
    // if in area -2 or -4, use lower nybble
    tya();
    BCS(MaskHPNyb);
    // move higher nybble to lower if area
    lsr();
    // number is -1 or -3
    lsr();
    lsr();
    lsr();
    JMP(MaskHPNyb);
}
void MaskHPNyb() {
    _debug("MaskHPNyb", __FILE__, __LINE__);
    // mask out all but lower nybble
    anda(IMM(0b1111));
    cmp(ABS(ScreenLeft_PageLoc));
    // left side of screen must be at the halfway page,
    BEQ(SetHalfway);
    // otherwise player must start at the
    BCC(SetHalfway);
    // beginning of the level
    lda(IMM(0x0));
    JMP(SetHalfway);
}
void SetHalfway() {
    _debug("SetHalfway", __FILE__, __LINE__);
    // store as halfway page for player
    sta(ABS(HalfwayPage));
    // switch players around if 2-player game
    JSR(TransposePlayers);
    // continue the game
    JMP(ContinueGame);
    JMP(GameOverMode);
}
void GameOverMode() {
    _debug("GameOverMode", __FILE__, __LINE__);
    lda(ABS(OperMode_Task));
    static JUMP_ENTRY jumptable[3] = {
        SetupGameOver,
        ScreenRoutines,
        RunGameOver,
    };
    JMP(jumptable[a.read()]);
}
void SetupGameOver() {
    _debug("SetupGameOver", __FILE__, __LINE__);
    // reset screen routine task control for title screen, game,
    lda(IMM(0x0));
    // and game over modes
    sta(ABS(ScreenRoutineTask));
    // disable sprite 0 check
    sta(ABS(Sprite0HitDetectFlag));
    lda(IMM(GameOverMusic));
    // put game over music in secondary queue
    sta(ABS(EventMusicQueue));
    // disable screen output
    inc(ABS(DisableScreenFlag));
    // set secondary mode to 1
    inc(ABS(OperMode_Task));
    return;
}
void RunGameOver() {
    _debug("RunGameOver", __FILE__, __LINE__);
    // reenable screen
    lda(IMM(0x0));
    sta(ABS(DisableScreenFlag));
    // check controller for start pressed
    lda(ABS(SavedJoypad1Bits));
    anda(IMM(Start_Button));
    BNE(TerminateGame);
    // if not pressed, wait for
    lda(ABS(ScreenTimer));
    // screen timer to expire
    BNE(GameIsOn);
    JMP(TerminateGame);
}
void TerminateGame() {
    _debug("TerminateGame", __FILE__, __LINE__);
    // silence music
    lda(IMM(Silence));
    sta(ABS(EventMusicQueue));
    // check if other player can keep
    JSR(TransposePlayers);
    // going, and do so if possible
    BCC(ContinueGame);
    // otherwise put world number of current
    lda(ABS(WorldNumber));
    // player into secret continue function variable
    sta(ABS(ContinueWorld));
    lda(IMM(0x0));
    // residual ASL instruction
    asl();
    // reset all modes to title screen and
    sta(ABS(OperMode_Task));
    // leave
    sta(ABS(ScreenTimer));
    sta(ABS(OperMode));
    return;
}
void ContinueGame() {
    _debug("ContinueGame", __FILE__, __LINE__);
    // update level pointer with
    JSR(LoadAreaPointer);
    // actual world and area numbers, then
    lda(IMM(0x1));
    // reset player's size, status, and
    sta(ABS(PlayerSize));
    // set game timer flag to reload
    inc(ABS(FetchNewGameTimerFlag));
    // game timer from header
    lda(IMM(0x0));
    // also set flag for timers to count again
    sta(ABS(TimerControl));
    sta(ABS(PlayerStatus));
    // reset task for game core
    sta(ABS(GameEngineSubroutine));
    // set modes and leave
    sta(ABS(OperMode_Task));
    // if in game over mode, switch back to
    lda(IMM(0x1));
    // game mode, because game is still on
    sta(ABS(OperMode));
    JMP(GameIsOn);
}
void GameIsOn() {
    _debug("GameIsOn", __FILE__, __LINE__);
    return;
}
void TransposePlayers() {
    _debug("TransposePlayers", __FILE__, __LINE__);
    // set carry flag by default to end game
    sec();
    // if only a 1 player game, leave
    lda(ABS(NumberOfPlayers));
    BEQ(ExTrans);
    // does offscreen player have any lives left?
    lda(ABS(OffScr_NumberofLives));
    // branch if not
    BMI(ExTrans);
    // invert bit to update
    lda(ABS(CurrentPlayer));
    // which player is on the screen
    eor(IMM(0b1));
    sta(ABS(CurrentPlayer));
    ldx(IMM(0x6));
    JMP(TransLoop);
}
void TransLoop() {
    _debug("TransLoop", __FILE__, __LINE__);
    // transpose the information
    lda(ABSX(OnscreenPlayerInfo));
    // of the onscreen player
    pha();
    // with that of the offscreen player
    lda(ABSX(OffscreenPlayerInfo));
    sta(ABSX(OnscreenPlayerInfo));
    pla();
    sta(ABSX(OffscreenPlayerInfo));
    dex();
    BPL(TransLoop);
    // clear carry flag to get game going
    clc();
    JMP(ExTrans);
}
void ExTrans() {
    _debug("ExTrans", __FILE__, __LINE__);
    return;
}
void DoNothing1() {
    _debug("DoNothing1", __FILE__, __LINE__);
    // this is residual code, this value is
    lda(IMM(0xff));
    // not used anywhere in the program
    sta(ABS(0x6c9));
    JMP(DoNothing2);
}
void DoNothing2() {
    _debug("DoNothing2", __FILE__, __LINE__);
    return;
}
void AreaParserTaskHandler() {
    _debug("AreaParserTaskHandler", __FILE__, __LINE__);
    // check number of tasks here
    ldy(ABS(AreaParserTaskNum));
    // if already set, go ahead
    BNE(DoAPTasks);
    ldy(IMM(0x8));
    // otherwise, set eight by default
    sty(ABS(AreaParserTaskNum));
    JMP(DoAPTasks);
}
void DoAPTasks() {
    _debug("DoAPTasks", __FILE__, __LINE__);
    dey();
    tya();
    JSR(AreaParserTasks);
    // if all tasks not complete do not
    dec(ABS(AreaParserTaskNum));
    // render attribute table yet
    BNE(SkipATRender);
    JSR(RenderAttributeTables);
    JMP(SkipATRender);
}
void SkipATRender() {
    _debug("SkipATRender", __FILE__, __LINE__);
    return;
}
void AreaParserTasks() {
    _debug("AreaParserTasks", __FILE__, __LINE__);
    static JUMP_ENTRY jumptable[8] = {
        IncrementColumnPos,
        RenderAreaGraphics,
        RenderAreaGraphics,
        AreaParserCore,
        IncrementColumnPos,
        RenderAreaGraphics,
        RenderAreaGraphics,
        AreaParserCore,
    };
    JMP(jumptable[a.read()]);
}
void IncrementColumnPos() {
    _debug("IncrementColumnPos", __FILE__, __LINE__);
    // increment column where we're at
    inc(ABS(CurrentColumnPos));
    lda(ABS(CurrentColumnPos));
    // mask out higher nybble
    anda(IMM(0b1111));
    BNE(NoColWrap);
    // if no bits left set, wrap back to zero (0-f)
    sta(ABS(CurrentColumnPos));
    // and increment page number where we're at
    inc(ABS(CurrentPageLoc));
    JMP(NoColWrap);
}
void NoColWrap() {
    _debug("NoColWrap", __FILE__, __LINE__);
    // increment column offset where we're at
    inc(ABS(BlockBufferColumnPos));
    lda(ABS(BlockBufferColumnPos));
    // mask out all but 5 LSB (0-1f)
    anda(IMM(0b11111));
    // and save
    sta(ABS(BlockBufferColumnPos));
    return;
}
void AreaParserCore() {
    _debug("AreaParserCore", __FILE__, __LINE__);
    // check to see if we are starting right of start
    lda(ABS(BackloadingFlag));
    // if not, go ahead and render background, foreground and terrain
    BEQ(RenderSceneryTerrain);
    // otherwise skip ahead and load level data
    JSR(ProcessAreaData);
    JMP(RenderSceneryTerrain);
}
void RenderSceneryTerrain() {
    _debug("RenderSceneryTerrain", __FILE__, __LINE__);
    ldx(IMM(0xc));
    lda(IMM(0x0));
    JMP(ClrMTBuf);
}
void ClrMTBuf() {
    _debug("ClrMTBuf", __FILE__, __LINE__);
    // clear out metatile buffer
    sta(ABSX(MetatileBuffer));
    dex();
    BPL(ClrMTBuf);
    // do we need to render the background scenery?
    ldy(ABS(BackgroundScenery));
    // if not, skip to check the foreground
    BEQ(RendFore);
    // otherwise check for every third page
    lda(ABS(CurrentPageLoc));
    JMP(ThirdP);
}
void ThirdP() {
    _debug("ThirdP", __FILE__, __LINE__);
    cmp(IMM(0x3));
    // if less than three we're there
    BMI(RendBack);
    sec();
    // if 3 or more, subtract 3 and
    sbc(IMM(0x3));
    // do an unconditional branch
    BPL(ThirdP);
    JMP(RendBack);
}
void RendBack() {
    _debug("RendBack", __FILE__, __LINE__);
    // move results to higher nybble
    asl();
    asl();
    asl();
    asl();
    // add to it offset loaded from here
    adc(ABSY(((0x8000+offsetof(G, BSceneDataOffsets)) - (1))));
    // add to the result our current column position
    adc(ABS(CurrentColumnPos));
    tax();
    // load data from sum of offsets
    lda(ABSX(0x8000+offsetof(G, BackSceneryData)));
    // if zero, no scenery for that part
    BEQ(RendFore);
    pha();
    // save to stack and clear high nybble
    anda(IMM(0xf));
    sec();
    // subtract one (because low nybble is $01-$0c)
    sbc(IMM(0x1));
    // save low nybble
    sta(ABS(0x0));
    // multiply by three (shift to left and add result to old one)
    asl();
    // note that since d7 was nulled, the carry flag is always clear
    adc(ABS(0x0));
    // save as offset for background scenery metatile data
    tax();
    // get high nybble from stack, move low
    pla();
    lsr();
    lsr();
    lsr();
    lsr();
    // use as second offset (used to determine height)
    tay();
    // use previously saved memory location for counter
    lda(IMM(0x3));
    sta(ABS(0x0));
    JMP(SceLoop1);
}
void SceLoop1() {
    _debug("SceLoop1", __FILE__, __LINE__);
    // load metatile data from offset of (lsb - 1) * 3
    lda(ABSX(0x8000+offsetof(G, BackSceneryMetatiles)));
    // store into buffer from offset of (msb / 16)
    sta(ABSY(MetatileBuffer));
    inx();
    iny();
    // if at this location, leave loop
    cpy(IMM(0xb));
    BEQ(RendFore);
    // decrement until counter expires, barring exception
    dec(ABS(0x0));
    BNE(SceLoop1);
    JMP(RendFore);
}
void RendFore() {
    _debug("RendFore", __FILE__, __LINE__);
    // check for foreground data needed or not
    ldx(ABS(ForegroundScenery));
    // if not, skip this part
    BEQ(RendTerr);
    // load offset from location offset by header value, then
    ldy(ABSX(((0x8000+offsetof(G, FSceneDataOffsets)) - (1))));
    // reinit X
    ldx(IMM(0x0));
    JMP(SceLoop2);
}
void SceLoop2() {
    _debug("SceLoop2", __FILE__, __LINE__);
    // load data until counter expires
    lda(ABSY(0x8000+offsetof(G, ForeSceneryData)));
    // do not store if zero found
    BEQ(NoFore);
    sta(ABSX(MetatileBuffer));
    JMP(NoFore);
}
void NoFore() {
    _debug("NoFore", __FILE__, __LINE__);
    iny();
    inx();
    // store up to end of metatile buffer
    cpx(IMM(0xd));
    BNE(SceLoop2);
    JMP(RendTerr);
}
void RendTerr() {
    _debug("RendTerr", __FILE__, __LINE__);
    // check world type for water level
    ldy(ABS(AreaType));
    // if not water level, skip this part
    BNE(TerMTile);
    // check world number, if not world number eight
    lda(ABS(WorldNumber));
    // then skip this part
    cmp(IMM(World8));
    BNE(TerMTile);
    // if set as water level and world number eight,
    lda(IMM(0x62));
    // use castle wall metatile as terrain type
    JMP(StoreMT);
    JMP(TerMTile);
}
void TerMTile() {
    _debug("TerMTile", __FILE__, __LINE__);
    // otherwise get appropriate metatile for area type
    lda(ABSY(0x8000+offsetof(G, TerrainMetatiles)));
    // check for cloud type override
    ldy(ABS(CloudTypeOverride));
    // if not set, keep value otherwise
    BEQ(StoreMT);
    // use cloud block terrain
    lda(IMM(0x88));
    JMP(StoreMT);
}
void StoreMT() {
    _debug("StoreMT", __FILE__, __LINE__);
    // store value here
    sta(ABS(0x7));
    // initialize X, use as metatile buffer offset
    ldx(IMM(0x0));
    // use yet another value from the header
    lda(ABS(TerrainControl));
    // multiply by 2 and use as yet another offset
    asl();
    tay();
    JMP(TerrLoop);
}
void TerrLoop() {
    _debug("TerrLoop", __FILE__, __LINE__);
    // get one of the terrain rendering bit data
    lda(ABSY(0x8000+offsetof(G, TerrainRenderBits)));
    sta(ABS(0x0));
    // increment Y and use as offset next time around
    iny();
    sty(ABS(0x1));
    // skip if value here is zero
    lda(ABS(CloudTypeOverride));
    BEQ(NoCloud2);
    // otherwise, check if we're doing the ceiling byte
    cpx(IMM(0x0));
    BEQ(NoCloud2);
    // if not, mask out all but d3
    lda(ABS(0x0));
    anda(IMM(0b1000));
    sta(ABS(0x0));
    JMP(NoCloud2);
}
void NoCloud2() {
    _debug("NoCloud2", __FILE__, __LINE__);
    // start at beginning of bitmasks
    ldy(IMM(0x0));
    JMP(TerrBChk);
}
void TerrBChk() {
    _debug("TerrBChk", __FILE__, __LINE__);
    // load bitmask, then perform AND on contents of first byte
    lda(ABSY(0x8000+offsetof(G, Bitmasks)));
    bit(ABS(0x0));
    // if not set, skip this part (do not write terrain to buffer)
    BEQ(NextTBit);
    lda(ABS(0x7));
    // load terrain type metatile number and store into buffer here
    sta(ABSX(MetatileBuffer));
    JMP(NextTBit);
}
void NextTBit() {
    _debug("NextTBit", __FILE__, __LINE__);
    // continue until end of buffer
    inx();
    cpx(IMM(0xd));
    // if we're at the end, break out of this loop
    BEQ(RendBBuf);
    // check world type for underground area
    lda(ABS(AreaType));
    cmp(IMM(0x2));
    // if not underground, skip this part
    BNE(EndUChk);
    cpx(IMM(0xb));
    // if we're at the bottom of the screen, override
    BNE(EndUChk);
    // old terrain type with ground level terrain type
    lda(IMM(0x54));
    sta(ABS(0x7));
    JMP(EndUChk);
}
void EndUChk() {
    _debug("EndUChk", __FILE__, __LINE__);
    // increment bitmasks offset in Y
    iny();
    cpy(IMM(0x8));
    // if not all bits checked, loop back
    BNE(TerrBChk);
    ldy(ABS(0x1));
    // unconditional branch, use Y to load next byte
    BNE(TerrLoop);
    JMP(RendBBuf);
}
void RendBBuf() {
    _debug("RendBBuf", __FILE__, __LINE__);
    // do the area data loading routine now
    JSR(ProcessAreaData);
    lda(ABS(BlockBufferColumnPos));
    // get block buffer address from where we're at
    JSR(GetBlockBufferAddr);
    ldx(IMM(0x0));
    // init index regs and start at beginning of smaller buffer
    ldy(IMM(0x0));
    JMP(ChkMTLow);
}
void ChkMTLow() {
    _debug("ChkMTLow", __FILE__, __LINE__);
    sty(ABS(0x0));
    // load stored metatile number
    lda(ABSX(MetatileBuffer));
    // mask out all but 2 MSB
    anda(IMM(0b11000000));
    asl();
    // make %xx000000 into %000000xx
    rol();
    rol();
    // use as offset in Y
    tay();
    // reload original unmasked value here
    lda(ABSX(MetatileBuffer));
    // check for certain values depending on bits set
    cmp(ABSY(0x8000+offsetof(G, BlockBuffLowBounds)));
    // if equal or greater, branch
    BCS(StrBlock);
    // if less, init value before storing
    lda(IMM(0x0));
    JMP(StrBlock);
}
void StrBlock() {
    _debug("StrBlock", __FILE__, __LINE__);
    // get offset for block buffer
    ldy(ABS(0x0));
    // store value into block buffer
    sta(INDY((0x6)));
    tya();
    // add 16 (move down one row) to offset
    clc();
    adc(IMM(0x10));
    tay();
    // increment column value
    inx();
    cpx(IMM(0xd));
    // continue until we pass last row, then leave
    BCC(ChkMTLow);
    return;
}
// $00 - used to store area object identifier
// $07 - used as adder to find proper area object code
void ProcessAreaData() {
    _debug("ProcessAreaData", __FILE__, __LINE__);
    // start at the end of area object buffer
    ldx(IMM(0x2));
    JMP(ProcADLoop);
}
void ProcADLoop() {
    _debug("ProcADLoop", __FILE__, __LINE__);
    stx(ABS(ObjectOffset));
    // reset flag
    lda(IMM(0x0));
    sta(ABS(BehindAreaParserFlag));
    // get offset of area data pointer
    ldy(ABS(AreaDataOffset));
    // get first byte of area object
    lda(INDY((AreaData)));
    // if end-of-area, skip all this crap
    cmp(IMM(0xfd));
    BEQ(RdyDecode);
    // check area object buffer flag
    lda(ABSX(AreaObjectLength));
    // if buffer not negative, branch, otherwise
    BPL(RdyDecode);
    iny();
    // get second byte of area object
    lda(INDY((AreaData)));
    // check for page select bit (d7), branch if not set
    asl();
    BCC(Chk1Row13);
    // check page select
    lda(ABS(AreaObjectPageSel));
    BNE(Chk1Row13);
    // if not already set, set it now
    inc(ABS(AreaObjectPageSel));
    // and increment page location
    inc(ABS(AreaObjectPageLoc));
    JMP(Chk1Row13);
}
void Chk1Row13() {
    _debug("Chk1Row13", __FILE__, __LINE__);
    dey();
    // reread first byte of level object
    lda(INDY((AreaData)));
    // mask out high nybble
    anda(IMM(0xf));
    // row 13?
    cmp(IMM(0xd));
    BNE(Chk1Row14);
    // if so, reread second byte of level object
    iny();
    lda(INDY((AreaData)));
    // decrement to get ready to read first byte
    dey();
    // check for d6 set (if not, object is page control)
    anda(IMM(0b1000000));
    BNE(CheckRear);
    // if page select is set, do not reread
    lda(ABS(AreaObjectPageSel));
    BNE(CheckRear);
    // if d6 not set, reread second byte
    iny();
    lda(INDY((AreaData)));
    // mask out all but 5 LSB and store in page control
    anda(IMM(0b11111));
    sta(ABS(AreaObjectPageLoc));
    // increment page select
    inc(ABS(AreaObjectPageSel));
    JMP(NextAObj);
    JMP(Chk1Row14);
}
void Chk1Row14() {
    _debug("Chk1Row14", __FILE__, __LINE__);
    // row 14?
    cmp(IMM(0xe));
    BNE(CheckRear);
    // check flag for saved page number and branch if set
    lda(ABS(BackloadingFlag));
    // to render the object (otherwise bg might not look right)
    BNE(RdyDecode);
    JMP(CheckRear);
}
void CheckRear() {
    _debug("CheckRear", __FILE__, __LINE__);
    // check to see if current page of level object is
    lda(ABS(AreaObjectPageLoc));
    // behind current page of renderer
    cmp(ABS(CurrentPageLoc));
    // if so branch
    BCC(SetBehind);
    JMP(RdyDecode);
}
void RdyDecode() {
    _debug("RdyDecode", __FILE__, __LINE__);
    // do sub and do not turn on flag
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}
void SetBehind() {
    _debug("SetBehind", __FILE__, __LINE__);
    // turn on flag if object is behind renderer
    inc(ABS(BehindAreaParserFlag));
    JMP(NextAObj);
}
void NextAObj() {
    _debug("NextAObj", __FILE__, __LINE__);
    // increment buffer offset and move on
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}
void ChkLength() {
    _debug("ChkLength", __FILE__, __LINE__);
    // get buffer offset
    ldx(ABS(ObjectOffset));
    // check object length for anything stored here
    lda(ABSX(AreaObjectLength));
    // if not, branch to handle loopback
    BMI(ProcLoopb);
    // otherwise decrement length or get rid of it
    dec(ABSX(AreaObjectLength));
    JMP(ProcLoopb);
}
void ProcLoopb() {
    _debug("ProcLoopb", __FILE__, __LINE__);
    // decrement buffer offset
    dex();
    // and loopback unless exceeded buffer
    BPL(ProcADLoop);
    // check for flag set if objects were behind renderer
    lda(ABS(BehindAreaParserFlag));
    // branch if true to load more level data, otherwise
    BNE(ProcessAreaData);
    // check for flag set if starting right of page $00
    lda(ABS(BackloadingFlag));
    // branch if true to load more level data, otherwise leave
    BNE(ProcessAreaData);
    JMP(EndAParse);
}
void EndAParse() {
    _debug("EndAParse", __FILE__, __LINE__);
    return;
}
void IncAreaObjOffset() {
    _debug("IncAreaObjOffset", __FILE__, __LINE__);
    // increment offset of level pointer
    inc(ABS(AreaDataOffset));
    inc(ABS(AreaDataOffset));
    // reset page select
    lda(IMM(0x0));
    sta(ABS(AreaObjectPageSel));
    return;
}
void DecodeAreaData() {
    _debug("DecodeAreaData", __FILE__, __LINE__);
    // check current buffer flag
    lda(ABSX(AreaObjectLength));
    BMI(Chk1stB);
    // if not, get offset from buffer
    ldy(ABSX(AreaObjOffsetBuffer));
    JMP(Chk1stB);
}
void Chk1stB() {
    _debug("Chk1stB", __FILE__, __LINE__);
    // load offset of 16 for special row 15
    ldx(IMM(0x10));
    // get first byte of level object again
    lda(INDY((AreaData)));
    cmp(IMM(0xfd));
    // if end of level, leave this routine
    BEQ(EndAParse);
    // otherwise, mask out low nybble
    anda(IMM(0xf));
    // row 15?
    cmp(IMM(0xf));
    // if so, keep the offset of 16
    BEQ(ChkRow14);
    // otherwise load offset of 8 for special row 12
    ldx(IMM(0x8));
    // row 12?
    cmp(IMM(0xc));
    // if so, keep the offset value of 8
    BEQ(ChkRow14);
    // otherwise nullify value by default
    ldx(IMM(0x0));
    JMP(ChkRow14);
}
void ChkRow14() {
    _debug("ChkRow14", __FILE__, __LINE__);
    // store whatever value we just loaded here
    stx(ABS(0x7));
    // get object offset again
    ldx(ABS(ObjectOffset));
    // row 14?
    cmp(IMM(0xe));
    BNE(ChkRow13);
    // if so, load offset with $00
    lda(IMM(0x0));
    sta(ABS(0x7));
    // and load A with another value
    lda(IMM(0x2e));
    // unconditional branch
    BNE(NormObj);
    JMP(ChkRow13);
}
void ChkRow13() {
    _debug("ChkRow13", __FILE__, __LINE__);
    // row 13?
    cmp(IMM(0xd));
    BNE(ChkSRows);
    // if so, load offset with 34
    lda(IMM(0x22));
    sta(ABS(0x7));
    // get next byte
    iny();
    lda(INDY((AreaData)));
    // mask out all but d6 (page control obj bit)
    anda(IMM(0b1000000));
    // if d6 clear, branch to leave (we handled this earlier)
    BEQ(LeavePar);
    // otherwise, get byte again
    lda(INDY((AreaData)));
    // mask out d7
    anda(IMM(0b1111111));
    // check for loop command in low nybble
    cmp(IMM(0x4b));
    // (plus d6 set for object other than page control)
    BNE(Mask2MSB);
    // if loop command, set loop command flag
    inc(ABS(LoopCommand));
    JMP(Mask2MSB);
}
void Mask2MSB() {
    _debug("Mask2MSB", __FILE__, __LINE__);
    // mask out d7 and d6
    anda(IMM(0b111111));
    // and jump
    JMP(NormObj);
    JMP(ChkSRows);
}
void ChkSRows() {
    _debug("ChkSRows", __FILE__, __LINE__);
    // row 12-15?
    cmp(IMM(0xc));
    BCS(SpecObj);
    // if not, get second byte of level object
    iny();
    lda(INDY((AreaData)));
    // mask out all but d6-d4
    anda(IMM(0b1110000));
    // if any bits set, branch to handle large object
    BNE(LrgObj);
    lda(IMM(0x16));
    // otherwise set offset of 24 for small object
    sta(ABS(0x7));
    // reload second byte of level object
    lda(INDY((AreaData)));
    // mask out higher nybble and jump
    anda(IMM(0b1111));
    JMP(NormObj);
    JMP(LrgObj);
}
void LrgObj() {
    _debug("LrgObj", __FILE__, __LINE__);
    // store value here (branch for large objects)
    sta(ABS(0x0));
    // check for vertical pipe object
    cmp(IMM(0x70));
    BNE(NotWPipe);
    // if not, reload second byte
    lda(INDY((AreaData)));
    // mask out all but d3 (usage control bit)
    anda(IMM(0b1000));
    // if d3 clear, branch to get original value
    BEQ(NotWPipe);
    // otherwise, nullify value for warp pipe
    lda(IMM(0x0));
    sta(ABS(0x0));
    JMP(NotWPipe);
}
void NotWPipe() {
    _debug("NotWPipe", __FILE__, __LINE__);
    // get value and jump ahead
    lda(ABS(0x0));
    JMP(MoveAOId);
    JMP(SpecObj);
}
void SpecObj() {
    _debug("SpecObj", __FILE__, __LINE__);
    // branch here for rows 12-15
    iny();
    lda(INDY((AreaData)));
    // get next byte and mask out all but d6-d4
    anda(IMM(0b1110000));
    JMP(MoveAOId);
}
void MoveAOId() {
    _debug("MoveAOId", __FILE__, __LINE__);
    // move d6-d4 to lower nybble
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}
void NormObj() {
    _debug("NormObj", __FILE__, __LINE__);
    // store value here (branch for small objects and rows 13 and 14)
    sta(ABS(0x0));
    // is there something stored here already?
    lda(ABSX(AreaObjectLength));
    // if so, branch to do its particular sub
    BPL(RunAObj);
    // otherwise check to see if the object we've loaded is on the
    lda(ABS(AreaObjectPageLoc));
    // same page as the renderer, and if so, branch
    cmp(ABS(CurrentPageLoc));
    BEQ(InitRear);
    // if not, get old offset of level pointer
    ldy(ABS(AreaDataOffset));
    // and reload first byte
    lda(INDY((AreaData)));
    anda(IMM(0b1111));
    // row 14?
    cmp(IMM(0xe));
    BNE(LeavePar);
    // if so, check backloading flag
    lda(ABS(BackloadingFlag));
    // if set, branch to render object, else leave
    BNE(StrAObj);
    JMP(LeavePar);
}
void LeavePar() {
    _debug("LeavePar", __FILE__, __LINE__);
    return;
}
void InitRear() {
    _debug("InitRear", __FILE__, __LINE__);
    // check backloading flag to see if it's been initialized
    lda(ABS(BackloadingFlag));
    // branch to column-wise check
    BEQ(BackColC);
    // if not, initialize both backloading and
    lda(IMM(0x0));
    // behind-renderer flags and leave
    sta(ABS(BackloadingFlag));
    sta(ABS(BehindAreaParserFlag));
    sta(ABS(ObjectOffset));
    JMP(LoopCmdE);
}
void LoopCmdE() {
    _debug("LoopCmdE", __FILE__, __LINE__);
    return;
}
void BackColC() {
    _debug("BackColC", __FILE__, __LINE__);
    // get first byte again
    ldy(ABS(AreaDataOffset));
    lda(INDY((AreaData)));
    // mask out low nybble and move high to low
    anda(IMM(0b11110000));
    lsr();
    lsr();
    lsr();
    lsr();
    // is this where we're at?
    cmp(ABS(CurrentColumnPos));
    // if not, branch to leave
    BNE(LeavePar);
    JMP(StrAObj);
}
void StrAObj() {
    _debug("StrAObj", __FILE__, __LINE__);
    // if so, load area obj offset and store in buffer
    lda(ABS(AreaDataOffset));
    sta(ABSX(AreaObjOffsetBuffer));
    // do sub to increment to next object data
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}
void RunAObj() {
    _debug("RunAObj", __FILE__, __LINE__);
    // get stored value and add offset to it
    lda(ABS(0x0));
    // then use the jump engine with current contents of A
    clc();
    adc(ABS(0x7));
    static JUMP_ENTRY jumptable[47] = {
        VerticalPipe,
        AreaStyleObject,
        RowOfBricks,
        RowOfSolidBlocks,
        RowOfCoins,
        ColumnOfBricks,
        ColumnOfSolidBlocks,
        VerticalPipe,
        Hole_Empty,
        PulleyRopeObject,
        Bridge_High,
        Bridge_Middle,
        Bridge_Low,
        Hole_Water,
        QuestionBlockRow_High,
        QuestionBlockRow_Low,
        EndlessRope,
        BalancePlatRope,
        CastleObject,
        StaircaseObject,
        ExitPipe,
        FlagBalls_Residual,
        QuestionBlock,
        QuestionBlock,
        QuestionBlock,
        Hidden1UpBlock,
        BrickWithItem,
        BrickWithItem,
        BrickWithItem,
        BrickWithCoins,
        BrickWithItem,
        WaterPipe,
        EmptyBlock,
        Jumpspring,
        IntroPipe,
        FlagpoleObject,
        AxeObj,
        ChainObj,
        CastleBridgeObj,
        ScrollLockObject_Warp,
        ScrollLockObject,
        ScrollLockObject,
        AreaFrenzy,
        AreaFrenzy,
        AreaFrenzy,
        LoopCmdE,
        AlterAreaAttributes,
    };
    JMP(jumptable[a.read()]);
}
// (these apply to all area object subroutines in this section unless otherwise stated)
// $00 - used to store offset used to find object code
// $07 - starts with adder from area parser, used to store row offset
void AlterAreaAttributes() {
    _debug("AlterAreaAttributes", __FILE__, __LINE__);
    // load offset for level object data saved in buffer
    ldy(ABSX(AreaObjOffsetBuffer));
    // load second byte
    iny();
    lda(INDY((AreaData)));
    // save in stack for now
    pha();
    anda(IMM(0b1000000));
    // branch if d6 is set
    BNE(Alter2);
    pla();
    // pull and push offset to copy to A
    pha();
    // mask out high nybble and store as
    anda(IMM(0b1111));
    // new terrain height type bits
    sta(ABS(TerrainControl));
    pla();
    // pull and mask out all but d5 and d4
    anda(IMM(0b110000));
    // move bits to lower nybble and store
    lsr();
    // as new background scenery bits
    lsr();
    lsr();
    lsr();
    // then leave
    sta(ABS(BackgroundScenery));
    return;
}
void Alter2() {
    _debug("Alter2", __FILE__, __LINE__);
    pla();
    // mask out all but 3 LSB
    anda(IMM(0b111));
    // if four or greater, set color control bits
    cmp(IMM(0x4));
    // and nullify foreground scenery bits
    BCC(SetFore);
    sta(ABS(BackgroundColorCtrl));
    lda(IMM(0x0));
    JMP(SetFore);
}
void SetFore() {
    _debug("SetFore", __FILE__, __LINE__);
    // otherwise set new foreground scenery bits
    sta(ABS(ForegroundScenery));
    return;
}
void ScrollLockObject_Warp() {
    _debug("ScrollLockObject_Warp", __FILE__, __LINE__);
    // load value of 4 for game text routine as default
    ldx(IMM(0x4));
    // warp zone (4-3-2), then check world number
    lda(ABS(WorldNumber));
    BEQ(WarpNum);
    // if world number > 1, increment for next warp zone (5)
    inx();
    // check area type
    ldy(ABS(AreaType));
    dey();
    // if ground area type, increment for last warp zone
    BNE(WarpNum);
    // (8-7-6) and move on
    inx();
    JMP(WarpNum);
}
void WarpNum() {
    _debug("WarpNum", __FILE__, __LINE__);
    txa();
    // store number here to be used by warp zone routine
    sta(ABS(WarpZoneControl));
    // print text and warp zone numbers
    JSR(WriteGameText);
    lda(IMM(PiranhaPlant));
    // load identifier for piranha plants and do sub
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}
void ScrollLockObject() {
    _debug("ScrollLockObject", __FILE__, __LINE__);
    // invert scroll lock to turn it on
    lda(ABS(ScrollLock));
    eor(IMM(0b1));
    sta(ABS(ScrollLock));
    return;
}
// $00 - used to store enemy identifier in KillEnemies
void KillEnemies() {
    _debug("KillEnemies", __FILE__, __LINE__);
    // store identifier here
    sta(ABS(0x0));
    lda(IMM(0x0));
    // check for identifier in enemy object buffer
    ldx(IMM(0x4));
    JMP(KillELoop);
}
void KillELoop() {
    _debug("KillELoop", __FILE__, __LINE__);
    ldy(ABSX(Enemy_ID));
    // if not found, branch
    cpy(ABS(0x0));
    BNE(NoKillE);
    // if found, deactivate enemy object flag
    sta(ABSX(Enemy_Flag));
    JMP(NoKillE);
}
void NoKillE() {
    _debug("NoKillE", __FILE__, __LINE__);
    // do this until all slots are checked
    dex();
    BPL(KillELoop);
    return;
}
void AreaFrenzy() {
    _debug("AreaFrenzy", __FILE__, __LINE__);
    // use area object identifier bit as offset
    ldx(ABS(0x0));
    // note that it starts at 8, thus weird address here
    lda(ABSX(((0x8000+offsetof(G, FrenzyIDData)) - (8))));
    ldy(IMM(0x5));
    JMP(FreCompLoop);
}
void FreCompLoop() {
    _debug("FreCompLoop", __FILE__, __LINE__);
    // check regular slots of enemy object buffer
    dey();
    // if all slots checked and enemy object not found, branch to store
    BMI(ExitAFrenzy);
    // check for enemy object in buffer versus frenzy object
    cmp(ABSY(Enemy_ID));
    BNE(FreCompLoop);
    // if enemy object already present, nullify queue and leave
    lda(IMM(0x0));
    JMP(ExitAFrenzy);
}
void ExitAFrenzy() {
    _debug("ExitAFrenzy", __FILE__, __LINE__);
    // store enemy into frenzy queue
    sta(ABS(EnemyFrenzyQueue));
    return;
}
// $06 - used by MushroomLedge to store length
void AreaStyleObject() {
    _debug("AreaStyleObject", __FILE__, __LINE__);
    // load level object style and jump to the right sub
    lda(ABS(AreaStyle));
    static JUMP_ENTRY jumptable[3] = {
        TreeLedge,
        MushroomLedge,
        BulletBillCannon,
    };
    JMP(jumptable[a.read()]);
}
void TreeLedge() {
    _debug("TreeLedge", __FILE__, __LINE__);
    // get row and length of green ledge
    JSR(GetLrgObjAttrib);
    // check length counter for expiration
    lda(ABSX(AreaObjectLength));
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    // store lower nybble into buffer flag as length of ledge
    sta(ABSX(AreaObjectLength));
    lda(ABS(CurrentPageLoc));
    // are we at the start of the level?
    ora(ABS(CurrentColumnPos));
    BEQ(MidTreeL);
    // render start of tree ledge
    lda(IMM(0x16));
    JMP(NoUnder);
    JMP(MidTreeL);
}
void MidTreeL() {
    _debug("MidTreeL", __FILE__, __LINE__);
    ldx(ABS(0x7));
    // render middle of tree ledge
    lda(IMM(0x17));
    // note that this is also used if ledge position is
    sta(ABSX(MetatileBuffer));
    // at the start of level for continuous effect
    lda(IMM(0x4c));
    // now render the part underneath
    JMP(AllUnder);
    JMP(EndTreeL);
}
void EndTreeL() {
    _debug("EndTreeL", __FILE__, __LINE__);
    // render end of tree ledge
    lda(IMM(0x18));
    JMP(NoUnder);
    JMP(MushroomLedge);
}
void MushroomLedge() {
    _debug("MushroomLedge", __FILE__, __LINE__);
    // get shroom dimensions
    JSR(ChkLrgObjLength);
    // store length here for now
    sty(ABS(0x6));
    BCC(EndMushL);
    // divide length by 2 and store elsewhere
    lda(ABSX(AreaObjectLength));
    lsr();
    sta(ABSX(MushroomLedgeHalfLen));
    // render start of mushroom
    lda(IMM(0x19));
    JMP(NoUnder);
    JMP(EndMushL);
}
void EndMushL() {
    _debug("EndMushL", __FILE__, __LINE__);
    // if at the end, render end of mushroom
    lda(IMM(0x1b));
    ldy(ABSX(AreaObjectLength));
    BEQ(NoUnder);
    // get divided length and store where length
    lda(ABSX(MushroomLedgeHalfLen));
    // was stored originally
    sta(ABS(0x6));
    ldx(ABS(0x7));
    lda(IMM(0x1a));
    // render middle of mushroom
    sta(ABSX(MetatileBuffer));
    // are we smack dab in the center?
    cpy(ABS(0x6));
    // if not, branch to leave
    BNE(MushLExit);
    inx();
    lda(IMM(0x4f));
    // render stem top of mushroom underneath the middle
    sta(ABSX(MetatileBuffer));
    lda(IMM(0x50));
    JMP(AllUnder);
}
void AllUnder() {
    _debug("AllUnder", __FILE__, __LINE__);
    inx();
    // set $0f to render all way down
    ldy(IMM(0xf));
    // now render the stem of mushroom
    JMP(RenderUnderPart);
    JMP(NoUnder);
}
void NoUnder() {
    _debug("NoUnder", __FILE__, __LINE__);
    // load row of ledge
    ldx(ABS(0x7));
    // set 0 for no bottom on this part
    ldy(IMM(0x0));
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}
void PulleyRopeObject() {
    _debug("PulleyRopeObject", __FILE__, __LINE__);
    // get length of pulley/rope object
    JSR(ChkLrgObjLength);
    // initialize metatile offset
    ldy(IMM(0x0));
    // if starting, render left pulley
    BCS(RenderPul);
    iny();
    // if not at the end, render rope
    lda(ABSX(AreaObjectLength));
    BNE(RenderPul);
    // otherwise render right pulley
    iny();
    JMP(RenderPul);
}
void RenderPul() {
    _debug("RenderPul", __FILE__, __LINE__);
    lda(ABSY(0x8000+offsetof(G, PulleyRopeMetatiles)));
    // render at the top of the screen
    sta(ABS(MetatileBuffer));
    JMP(MushLExit);
}
void MushLExit() {
    _debug("MushLExit", __FILE__, __LINE__);
    // and leave
    return;
}
void CastleObject() {
    _debug("CastleObject", __FILE__, __LINE__);
    // save lower nybble as starting row
    JSR(GetLrgObjAttrib);
    // if starting row is above $0a, game will crash!!!
    sty(ABS(0x7));
    ldy(IMM(0x4));
    // load length of castle if not already loaded
    JSR(ChkLrgObjFixedLength);
    txa();
    // save obj buffer offset to stack
    pha();
    // use current length as offset for castle data
    ldy(ABSX(AreaObjectLength));
    // begin at starting row
    ldx(ABS(0x7));
    lda(IMM(0xb));
    // load upper limit of number of rows to print
    sta(ABS(0x6));
    JMP(CRendLoop);
}
void CRendLoop() {
    _debug("CRendLoop", __FILE__, __LINE__);
    // load current byte using offset
    lda(ABSY(0x8000+offsetof(G, CastleMetatiles)));
    sta(ABSX(MetatileBuffer));
    // store in buffer and increment buffer offset
    inx();
    lda(ABS(0x6));
    // have we reached upper limit yet?
    BEQ(ChkCFloor);
    // if not, increment column-wise
    iny();
    // to byte in next row
    iny();
    iny();
    iny();
    iny();
    // move closer to upper limit
    dec(ABS(0x6));
    JMP(ChkCFloor);
}
void ChkCFloor() {
    _debug("ChkCFloor", __FILE__, __LINE__);
    // have we reached the row just before floor?
    cpx(IMM(0xb));
    // if not, go back and do another row
    BNE(CRendLoop);
    pla();
    // get obj buffer offset from before
    tax();
    lda(ABS(CurrentPageLoc));
    // if we're at page 0, we do not need to do anything else
    BEQ(ExitCastle);
    // check length
    lda(ABSX(AreaObjectLength));
    // if length almost about to expire, put brick at floor
    cmp(IMM(0x1));
    BEQ(PlayerStop);
    // check starting row for tall castle ($00)
    ldy(ABS(0x7));
    BNE(NotTall);
    // if found, then check to see if we're at the second column
    cmp(IMM(0x3));
    BEQ(PlayerStop);
    JMP(NotTall);
}
void NotTall() {
    _debug("NotTall", __FILE__, __LINE__);
    // if not tall castle, check to see if we're at the third column
    cmp(IMM(0x2));
    // if we aren't and the castle is tall, don't create flag yet
    BNE(ExitCastle);
    // otherwise, obtain and save horizontal pixel coordinate
    JSR(GetAreaObjXPosition);
    pha();
    // find an empty place on the enemy object buffer
    JSR(FindEmptyEnemySlot);
    pla();
    // then write horizontal coordinate for star flag
    sta(ABSX(Enemy_X_Position));
    lda(ABS(CurrentPageLoc));
    // set page location for star flag
    sta(ABSX(Enemy_PageLoc));
    lda(IMM(0x1));
    // set vertical high byte
    sta(ABSX(Enemy_Y_HighPos));
    // set flag for buffer
    sta(ABSX(Enemy_Flag));
    lda(IMM(0x90));
    // set vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    // set star flag value in buffer itself
    lda(IMM(StarFlagObject));
    sta(ABSX(Enemy_ID));
    return;
}
void PlayerStop() {
    _debug("PlayerStop", __FILE__, __LINE__);
    // put brick at floor to stop player at end of level
    ldy(IMM(0x52));
    // this is only done if we're on the second column
    sty(ABS(((MetatileBuffer) + (10))));
    JMP(ExitCastle);
}
void ExitCastle() {
    _debug("ExitCastle", __FILE__, __LINE__);
    return;
}
void WaterPipe() {
    _debug("WaterPipe", __FILE__, __LINE__);
    // get row and lower nybble
    JSR(GetLrgObjAttrib);
    // get length (residual code, water pipe is 1 col thick)
    ldy(ABSX(AreaObjectLength));
    // get row
    ldx(ABS(0x7));
    lda(IMM(0x6b));
    // draw something here and below it
    sta(ABSX(MetatileBuffer));
    lda(IMM(0x6c));
    sta(ABSX(((MetatileBuffer) + (1))));
    return;
}
// $05 - used to store length of vertical shaft in RenderSidewaysPipe
// $06 - used to store leftover horizontal length in RenderSidewaysPipe
// and vertical length in VerticalPipe and GetPipeHeight
void IntroPipe() {
    _debug("IntroPipe", __FILE__, __LINE__);
    // check if length set, if not set, set it
    ldy(IMM(0x3));
    JSR(ChkLrgObjFixedLength);
    // set fixed value and render the sideways part
    ldy(IMM(0xa));
    JSR(RenderSidewaysPipe);
    // if carry flag set, not time to draw vertical pipe part
    BCS(NoBlankP);
    // blank everything above the vertical pipe part
    ldx(IMM(0x6));
    JMP(VPipeSectLoop);
}
void VPipeSectLoop() {
    _debug("VPipeSectLoop", __FILE__, __LINE__);
    // all the way to the top of the screen
    lda(IMM(0x0));
    // because otherwise it will look like exit pipe
    sta(ABSX(MetatileBuffer));
    dex();
    BPL(VPipeSectLoop);
    // draw the end of the vertical pipe part
    lda(ABSY(0x8000+offsetof(G, VerticalPipeData)));
    sta(ABS(((MetatileBuffer) + (7))));
    JMP(NoBlankP);
}
void NoBlankP() {
    _debug("NoBlankP", __FILE__, __LINE__);
    return;
}
void ExitPipe() {
    _debug("ExitPipe", __FILE__, __LINE__);
    // check if length set, if not set, set it
    ldy(IMM(0x3));
    JSR(ChkLrgObjFixedLength);
    // get vertical length, then plow on through RenderSidewaysPipe
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}
void RenderSidewaysPipe() {
    _debug("RenderSidewaysPipe", __FILE__, __LINE__);
    // decrement twice to make room for shaft at bottom
    dey();
    // and store here for now as vertical length
    dey();
    sty(ABS(0x5));
    // get length left over and store here
    ldy(ABSX(AreaObjectLength));
    sty(ABS(0x6));
    // get vertical length plus one, use as buffer offset
    ldx(ABS(0x5));
    inx();
    // check for value $00 based on horizontal offset
    lda(ABSY(0x8000+offsetof(G, SidePipeShaftData)));
    cmp(IMM(0x0));
    // if found, do not draw the vertical pipe shaft
    BEQ(DrawSidePart);
    ldx(IMM(0x0));
    // init buffer offset and get vertical length
    ldy(ABS(0x5));
    // and render vertical shaft using tile number in A
    JSR(RenderUnderPart);
    // clear carry flag to be used by IntroPipe
    clc();
    JMP(DrawSidePart);
}
void DrawSidePart() {
    _debug("DrawSidePart", __FILE__, __LINE__);
    // render side pipe part at the bottom
    ldy(ABS(0x6));
    lda(ABSY(0x8000+offsetof(G, SidePipeTopPart)));
    // note that the pipe parts are stored
    sta(ABSX(MetatileBuffer));
    // backwards horizontally
    lda(ABSY(0x8000+offsetof(G, SidePipeBottomPart)));
    sta(ABSX(((MetatileBuffer) + (1))));
    return;
}
void VerticalPipe() {
    _debug("VerticalPipe", __FILE__, __LINE__);
    JSR(GetPipeHeight);
    // check to see if value was nullified earlier
    lda(ABS(0x0));
    // (if d3, the usage control bit of second byte, was set)
    BEQ(WarpPipe);
    iny();
    iny();
    iny();
    // add four if usage control bit was not set
    iny();
    JMP(WarpPipe);
}
void WarpPipe() {
    _debug("WarpPipe", __FILE__, __LINE__);
    // save value in stack
    tya();
    pha();
    lda(ABS(AreaNumber));
    // if at world 1-1, do not add piranha plant ever
    ora(ABS(WorldNumber));
    BEQ(DrawPipe);
    // if on second column of pipe, branch
    ldy(ABSX(AreaObjectLength));
    // (because we only need to do this once)
    BEQ(DrawPipe);
    // check for an empty moving data buffer space
    JSR(FindEmptyEnemySlot);
    // if not found, too many enemies, thus skip
    BCS(DrawPipe);
    // get horizontal pixel coordinate
    JSR(GetAreaObjXPosition);
    clc();
    // add eight to put the piranha plant in the center
    adc(IMM(0x8));
    // store as enemy's horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    // add carry to current page number
    lda(ABS(CurrentPageLoc));
    adc(IMM(0x0));
    // store as enemy's page coordinate
    sta(ABSX(Enemy_PageLoc));
    lda(IMM(0x1));
    sta(ABSX(Enemy_Y_HighPos));
    // activate enemy flag
    sta(ABSX(Enemy_Flag));
    // get piranha plant's vertical coordinate and store here
    JSR(GetAreaObjYPosition);
    sta(ABSX(Enemy_Y_Position));
    // write piranha plant's value into buffer
    lda(IMM(PiranhaPlant));
    sta(ABSX(Enemy_ID));
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}
void DrawPipe() {
    _debug("DrawPipe", __FILE__, __LINE__);
    // get value saved earlier and use as Y
    pla();
    tay();
    // get buffer offset
    ldx(ABS(0x7));
    // draw the appropriate pipe with the Y we loaded earlier
    lda(ABSY(0x8000+offsetof(G, VerticalPipeData)));
    // render the top of the pipe
    sta(ABSX(MetatileBuffer));
    inx();
    // render the rest of the pipe
    lda(ABSY(((0x8000+offsetof(G, VerticalPipeData)) + (2))));
    // subtract one from length and render the part underneath
    ldy(ABS(0x6));
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}
void GetPipeHeight() {
    _debug("GetPipeHeight", __FILE__, __LINE__);
    // check for length loaded, if not, load
    ldy(IMM(0x1));
    // pipe length of 2 (horizontal)
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    // get saved lower nybble as height
    tya();
    // save only the three lower bits as
    anda(IMM(0x7));
    // vertical length, then load Y with
    sta(ABS(0x6));
    // length left over
    ldy(ABSX(AreaObjectLength));
    return;
}
void FindEmptyEnemySlot() {
    _debug("FindEmptyEnemySlot", __FILE__, __LINE__);
    // start at first enemy slot
    ldx(IMM(0x0));
    JMP(EmptyChkLoop);
}
void EmptyChkLoop() {
    _debug("EmptyChkLoop", __FILE__, __LINE__);
    // clear carry flag by default
    clc();
    // check enemy buffer for nonzero
    lda(ABSX(Enemy_Flag));
    // if zero, leave
    BEQ(ExitEmptyChk);
    inx();
    // if nonzero, check next value
    cpx(IMM(0x5));
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}
void ExitEmptyChk() {
    _debug("ExitEmptyChk", __FILE__, __LINE__);
    // if all values nonzero, carry flag is set
    return;
}
void Hole_Water() {
    _debug("Hole_Water", __FILE__, __LINE__);
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    // render waves
    lda(IMM(0x86));
    sta(ABS(((MetatileBuffer) + (10))));
    ldx(IMM(0xb));
    // now render the water underneath
    ldy(IMM(0x1));
    lda(IMM(0x87));
    JMP(RenderUnderPart);
    JMP(QuestionBlockRow_High);
}
void QuestionBlockRow_High() {
    _debug("QuestionBlockRow_High", __FILE__, __LINE__);
    // start on the fourth row
    lda(IMM(0x3));
    JMP(QuestionBlockRow_Low_Skip);
    JMP(QuestionBlockRow_Low);
}
void QuestionBlockRow_Low() {
    _debug("QuestionBlockRow_Low", __FILE__, __LINE__);
    // start on the eighth row
    lda(IMM(0x7));
    JMP(QuestionBlockRow_Low_Skip);
}
void QuestionBlockRow_Low_Skip() {
    _debug("QuestionBlockRow_Low_Skip", __FILE__, __LINE__);
    // save whatever row to the stack for now
    pha();
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    pla();
    // render question boxes with coins
    tax();
    lda(IMM(0xc0));
    sta(ABSX(MetatileBuffer));
    return;
}
void Bridge_High() {
    _debug("Bridge_High", __FILE__, __LINE__);
    // start on the seventh row from top of screen
    lda(IMM(0x6));
    JMP(Bridge_Middle_Skip);
    JMP(Bridge_Middle);
}
void Bridge_Middle() {
    _debug("Bridge_Middle", __FILE__, __LINE__);
    // start on the eighth row
    lda(IMM(0x7));
    JMP(Bridge_Middle_Skip);
}
void Bridge_Middle_Skip() {
    _debug("Bridge_Middle_Skip", __FILE__, __LINE__);
    JMP(Bridge_Low_Skip);
    JMP(Bridge_Low);
}
void Bridge_Low() {
    _debug("Bridge_Low", __FILE__, __LINE__);
    // start on the tenth row
    lda(IMM(0x9));
    JMP(Bridge_Low_Skip);
}
void Bridge_Low_Skip() {
    _debug("Bridge_Low_Skip", __FILE__, __LINE__);
    // save whatever row to the stack for now
    pha();
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    pla();
    // render bridge railing
    tax();
    lda(IMM(0xb));
    sta(ABSX(MetatileBuffer));
    inx();
    // now render the bridge itself
    ldy(IMM(0x0));
    lda(IMM(0x63));
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}
void FlagBalls_Residual() {
    _debug("FlagBalls_Residual", __FILE__, __LINE__);
    // get low nybble from object byte
    JSR(GetLrgObjAttrib);
    // render flag balls on third row from top
    ldx(IMM(0x2));
    // of screen downwards based on low nybble
    lda(IMM(0x6d));
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}
void FlagpoleObject() {
    _debug("FlagpoleObject", __FILE__, __LINE__);
    // render flagpole ball on top
    lda(IMM(0x24));
    sta(ABS(MetatileBuffer));
    // now render the flagpole shaft
    ldx(IMM(0x1));
    ldy(IMM(0x8));
    lda(IMM(0x25));
    JSR(RenderUnderPart);
    // render solid block at the bottom
    lda(IMM(0x61));
    sta(ABS(((MetatileBuffer) + (10))));
    JSR(GetAreaObjXPosition);
    // get pixel coordinate of where the flagpole is,
    sec();
    // subtract eight pixels and use as horizontal
    sbc(IMM(0x8));
    // coordinate for the flag
    sta(ABS(((Enemy_X_Position) + (5))));
    lda(ABS(CurrentPageLoc));
    // subtract borrow from page location and use as
    sbc(IMM(0x0));
    // page location for the flag
    sta(ABS(((Enemy_PageLoc) + (5))));
    lda(IMM(0x30));
    // set vertical coordinate for flag
    sta(ABS(((Enemy_Y_Position) + (5))));
    lda(IMM(0xb0));
    // set initial vertical coordinate for flagpole's floatey number
    sta(ABS(FlagpoleFNum_Y_Pos));
    lda(IMM(FlagpoleFlagObject));
    // set flag identifier, note that identifier and coordinates
    sta(ABS(((Enemy_ID) + (5))));
    // use last space in enemy object buffer
    inc(ABS(((Enemy_Flag) + (5))));
    return;
}
void EndlessRope() {
    _debug("EndlessRope", __FILE__, __LINE__);
    // render rope from the top to the bottom of screen
    ldx(IMM(0x0));
    ldy(IMM(0xf));
    JMP(DrawRope);
    JMP(BalancePlatRope);
}
void BalancePlatRope() {
    _debug("BalancePlatRope", __FILE__, __LINE__);
    // save object buffer offset for now
    txa();
    pha();
    // blank out all from second row to the bottom
    ldx(IMM(0x1));
    // with blank used for balance platform rope
    ldy(IMM(0xf));
    lda(IMM(0x44));
    JSR(RenderUnderPart);
    // get back object buffer offset
    pla();
    tax();
    // get vertical length from lower nybble
    JSR(GetLrgObjAttrib);
    ldx(IMM(0x1));
    JMP(DrawRope);
}
void DrawRope() {
    _debug("DrawRope", __FILE__, __LINE__);
    // render the actual rope
    lda(IMM(0x40));
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}
void RowOfCoins() {
    _debug("RowOfCoins", __FILE__, __LINE__);
    // get area type
    ldy(ABS(AreaType));
    // load appropriate coin metatile
    lda(ABSY(0x8000+offsetof(G, CoinMetatileData)));
    JMP(GetRow);
    JMP(CastleBridgeObj);
}
void CastleBridgeObj() {
    _debug("CastleBridgeObj", __FILE__, __LINE__);
    // load length of 13 columns
    ldy(IMM(0xc));
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}
void AxeObj() {
    _debug("AxeObj", __FILE__, __LINE__);
    // load bowser's palette into sprite portion of palette
    lda(IMM(0x8));
    sta(ABS(VRAM_Buffer_AddrCtrl));
    JMP(ChainObj);
}
void ChainObj() {
    _debug("ChainObj", __FILE__, __LINE__);
    // get value loaded earlier from decoder
    ldy(ABS(0x0));
    // get appropriate row and metatile for object
    ldx(ABSY(((0x8000+offsetof(G, C_ObjectRow)) - (2))));
    lda(ABSY(((0x8000+offsetof(G, C_ObjectMetatile)) - (2))));
    JMP(ColObj);
    JMP(EmptyBlock);
}
void EmptyBlock() {
    _debug("EmptyBlock", __FILE__, __LINE__);
    // get row location
    JSR(GetLrgObjAttrib);
    ldx(ABS(0x7));
    lda(IMM(0xc4));
    JMP(ColObj);
}
void ColObj() {
    _debug("ColObj", __FILE__, __LINE__);
    // column length of 1
    ldy(IMM(0x0));
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}
void RowOfBricks() {
    _debug("RowOfBricks", __FILE__, __LINE__);
    // load area type obtained from area offset pointer
    ldy(ABS(AreaType));
    // check for cloud type override
    lda(ABS(CloudTypeOverride));
    BEQ(DrawBricks);
    // if cloud type, override area type
    ldy(IMM(0x4));
    JMP(DrawBricks);
}
void DrawBricks() {
    _debug("DrawBricks", __FILE__, __LINE__);
    // get appropriate metatile
    lda(ABSY(0x8000+offsetof(G, BrickMetatiles)));
    // and go render it
    JMP(GetRow);
    JMP(RowOfSolidBlocks);
}
void RowOfSolidBlocks() {
    _debug("RowOfSolidBlocks", __FILE__, __LINE__);
    // load area type obtained from area offset pointer
    ldy(ABS(AreaType));
    // get metatile
    lda(ABSY(0x8000+offsetof(G, SolidBlockMetatiles)));
    JMP(GetRow);
}
void GetRow() {
    _debug("GetRow", __FILE__, __LINE__);
    // store metatile here
    pha();
    // get row number, load length
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}
void DrawRow() {
    _debug("DrawRow", __FILE__, __LINE__);
    ldx(ABS(0x7));
    // set vertical height of 1
    ldy(IMM(0x0));
    pla();
    // render object
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}
void ColumnOfBricks() {
    _debug("ColumnOfBricks", __FILE__, __LINE__);
    // load area type obtained from area offset
    ldy(ABS(AreaType));
    // get metatile (no cloud override as for row)
    lda(ABSY(0x8000+offsetof(G, BrickMetatiles)));
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}
void ColumnOfSolidBlocks() {
    _debug("ColumnOfSolidBlocks", __FILE__, __LINE__);
    // load area type obtained from area offset
    ldy(ABS(AreaType));
    // get metatile
    lda(ABSY(0x8000+offsetof(G, SolidBlockMetatiles)));
    JMP(GetRow2);
}
void GetRow2() {
    _debug("GetRow2", __FILE__, __LINE__);
    // save metatile to stack for now
    pha();
    // get length and row
    JSR(GetLrgObjAttrib);
    // restore metatile
    pla();
    // get starting row
    ldx(ABS(0x7));
    // now render the column
    JMP(RenderUnderPart);
    JMP(BulletBillCannon);
}
void BulletBillCannon() {
    _debug("BulletBillCannon", __FILE__, __LINE__);
    // get row and length of bullet bill cannon
    JSR(GetLrgObjAttrib);
    // start at first row
    ldx(ABS(0x7));
    // render bullet bill cannon
    lda(IMM(0x64));
    sta(ABSX(MetatileBuffer));
    inx();
    // done yet?
    dey();
    BMI(SetupCannon);
    // if not, render middle part
    lda(IMM(0x65));
    sta(ABSX(MetatileBuffer));
    inx();
    // done yet?
    dey();
    BMI(SetupCannon);
    // if not, render bottom until length expires
    lda(IMM(0x66));
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}
void SetupCannon() {
    _debug("SetupCannon", __FILE__, __LINE__);
    // get offset for data used by cannons and whirlpools
    ldx(ABS(Cannon_Offset));
    // get proper vertical coordinate for cannon
    JSR(GetAreaObjYPosition);
    // and store it here
    sta(ABSX(Cannon_Y_Position));
    lda(ABS(CurrentPageLoc));
    // store page number for cannon here
    sta(ABSX(Cannon_PageLoc));
    // get proper horizontal coordinate for cannon
    JSR(GetAreaObjXPosition);
    // and store it here
    sta(ABSX(Cannon_X_Position));
    inx();
    // increment and check offset
    cpx(IMM(0x6));
    // if not yet reached sixth cannon, branch to save offset
    BCC(StrCOffset);
    // otherwise initialize it
    ldx(IMM(0x0));
    JMP(StrCOffset);
}
void StrCOffset() {
    _debug("StrCOffset", __FILE__, __LINE__);
    // save new offset and leave
    stx(ABS(Cannon_Offset));
    return;
}
void StaircaseObject() {
    _debug("StaircaseObject", __FILE__, __LINE__);
    // check and load length
    JSR(ChkLrgObjLength);
    // if length already loaded, skip init part
    BCC(NextStair);
    // start past the end for the bottom
    lda(IMM(0x9));
    // of the staircase
    sta(ABS(StaircaseControl));
    JMP(NextStair);
}
void NextStair() {
    _debug("NextStair", __FILE__, __LINE__);
    // move onto next step (or first if starting)
    dec(ABS(StaircaseControl));
    ldy(ABS(StaircaseControl));
    // get starting row and height to render
    ldx(ABSY(0x8000+offsetof(G, StaircaseRowData)));
    lda(ABSY(0x8000+offsetof(G, StaircaseHeightData)));
    tay();
    // now render solid block staircase
    lda(IMM(0x61));
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}
void Jumpspring() {
    _debug("Jumpspring", __FILE__, __LINE__);
    JSR(GetLrgObjAttrib);
    // find empty space in enemy object buffer
    JSR(FindEmptyEnemySlot);
    // get horizontal coordinate for jumpspring
    JSR(GetAreaObjXPosition);
    // and store
    sta(ABSX(Enemy_X_Position));
    // store page location of jumpspring
    lda(ABS(CurrentPageLoc));
    sta(ABSX(Enemy_PageLoc));
    // get vertical coordinate for jumpspring
    JSR(GetAreaObjYPosition);
    // and store
    sta(ABSX(Enemy_Y_Position));
    // store as permanent coordinate here
    sta(ABSX(Jumpspring_FixedYPos));
    lda(IMM(JumpspringObject));
    // write jumpspring object to enemy object buffer
    sta(ABSX(Enemy_ID));
    ldy(IMM(0x1));
    // store vertical high byte
    sty(ABSX(Enemy_Y_HighPos));
    // set flag for enemy object buffer
    inc(ABSX(Enemy_Flag));
    ldx(ABS(0x7));
    // draw metatiles in two rows where jumpspring is
    lda(IMM(0x67));
    sta(ABSX(MetatileBuffer));
    lda(IMM(0x68));
    sta(ABSX(((MetatileBuffer) + (1))));
    return;
}
// $07 - used to save ID of brick object
void Hidden1UpBlock() {
    _debug("Hidden1UpBlock", __FILE__, __LINE__);
    // if flag not set, do not render object
    lda(ABS(Hidden1UpFlag));
    BEQ(ExitDecBlock);
    // if set, init for the next one
    lda(IMM(0x0));
    sta(ABS(Hidden1UpFlag));
    // jump to code shared with unbreakable bricks
    JMP(BrickWithItem);
    JMP(QuestionBlock);
}
void QuestionBlock() {
    _debug("QuestionBlock", __FILE__, __LINE__);
    // get value from level decoder routine
    JSR(GetAreaObjectID);
    // go to render it
    JMP(DrawQBlk);
    JMP(BrickWithCoins);
}
void BrickWithCoins() {
    _debug("BrickWithCoins", __FILE__, __LINE__);
    // initialize multi-coin timer flag
    lda(IMM(0x0));
    sta(ABS(BrickCoinTimerFlag));
    JMP(BrickWithItem);
}
void BrickWithItem() {
    _debug("BrickWithItem", __FILE__, __LINE__);
    // save area object ID
    JSR(GetAreaObjectID);
    sty(ABS(0x7));
    // load default adder for bricks with lines
    lda(IMM(0x0));
    // check level type for ground level
    ldy(ABS(AreaType));
    dey();
    // if ground type, do not start with 5
    BEQ(BWithL);
    // otherwise use adder for bricks without lines
    lda(IMM(0x5));
    JMP(BWithL);
}
void BWithL() {
    _debug("BWithL", __FILE__, __LINE__);
    // add object ID to adder
    clc();
    adc(ABS(0x7));
    // use as offset for metatile
    tay();
    JMP(DrawQBlk);
}
void DrawQBlk() {
    _debug("DrawQBlk", __FILE__, __LINE__);
    // get appropriate metatile for brick (question block
    lda(ABSY(0x8000+offsetof(G, BrickQBlockMetatiles)));
    // if branched to here from question block routine)
    pha();
    // get row from location byte
    JSR(GetLrgObjAttrib);
    // now render the object
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}
void GetAreaObjectID() {
    _debug("GetAreaObjectID", __FILE__, __LINE__);
    // get value saved from area parser routine
    lda(ABS(0x0));
    sec();
    // possibly residual code
    sbc(IMM(0x0));
    // save to Y
    tay();
    JMP(ExitDecBlock);
}
void ExitDecBlock() {
    _debug("ExitDecBlock", __FILE__, __LINE__);
    return;
}
void Hole_Empty() {
    _debug("Hole_Empty", __FILE__, __LINE__);
    // get lower nybble and save as length
    JSR(ChkLrgObjLength);
    // skip this part if length already loaded
    BCC(NoWhirlP);
    // check for water type level
    lda(ABS(AreaType));
    // if not water type, skip this part
    BNE(NoWhirlP);
    // get offset for data used by cannons and whirlpools
    ldx(ABS(Whirlpool_Offset));
    // get proper vertical coordinate of where we're at
    JSR(GetAreaObjXPosition);
    sec();
    // subtract 16 pixels
    sbc(IMM(0x10));
    // store as left extent of whirlpool
    sta(ABSX(Whirlpool_LeftExtent));
    // get page location of where we're at
    lda(ABS(CurrentPageLoc));
    // subtract borrow
    sbc(IMM(0x0));
    // save as page location of whirlpool
    sta(ABSX(Whirlpool_PageLoc));
    iny();
    // increment length by 2
    iny();
    tya();
    // multiply by 16 to get size of whirlpool
    asl();
    // note that whirlpool will always be
    asl();
    // two blocks bigger than actual size of hole
    asl();
    // and extend one block beyond each edge
    asl();
    // save size of whirlpool here
    sta(ABSX(Whirlpool_Length));
    inx();
    // increment and check offset
    cpx(IMM(0x5));
    // if not yet reached fifth whirlpool, branch to save offset
    BCC(StrWOffset);
    // otherwise initialize it
    ldx(IMM(0x0));
    JMP(StrWOffset);
}
void StrWOffset() {
    _debug("StrWOffset", __FILE__, __LINE__);
    // save new offset here
    stx(ABS(Whirlpool_Offset));
    JMP(NoWhirlP);
}
void NoWhirlP() {
    _debug("NoWhirlP", __FILE__, __LINE__);
    // get appropriate metatile, then
    ldx(ABS(AreaType));
    // render the hole proper
    lda(ABSX(0x8000+offsetof(G, HoleMetatiles)));
    ldx(IMM(0x8));
    // start at ninth row and go to bottom, run RenderUnderPart
    ldy(IMM(0xf));
    JMP(RenderUnderPart);
}
void RenderUnderPart() {
    _debug("RenderUnderPart", __FILE__, __LINE__);
    // store vertical length to render
    sty(ABS(AreaObjectHeight));
    // check current spot to see if there's something
    ldy(ABSX(MetatileBuffer));
    // we need to keep, if nothing, go ahead
    BEQ(DrawThisRow);
    cpy(IMM(0x17));
    // if middle part (tree ledge), wait until next row
    BEQ(WaitOneRow);
    cpy(IMM(0x1a));
    // if middle part (mushroom ledge), wait until next row
    BEQ(WaitOneRow);
    cpy(IMM(0xc0));
    // if question block w/ coin, overwrite
    BEQ(DrawThisRow);
    cpy(IMM(0xc0));
    // if any other metatile with palette 3, wait until next row
    BCS(WaitOneRow);
    cpy(IMM(0x54));
    // if cracked rock terrain, overwrite
    BNE(DrawThisRow);
    cmp(IMM(0x50));
    // if stem top of mushroom, wait until next row
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}
void DrawThisRow() {
    _debug("DrawThisRow", __FILE__, __LINE__);
    // render contents of A from routine that called this
    sta(ABSX(MetatileBuffer));
    JMP(WaitOneRow);
}
void WaitOneRow() {
    _debug("WaitOneRow", __FILE__, __LINE__);
    inx();
    // stop rendering if we're at the bottom of the screen
    cpx(IMM(0xd));
    BCS(ExitUPartR);
    // decrement, and stop rendering if there is no more length
    ldy(ABS(AreaObjectHeight));
    dey();
    BPL(RenderUnderPart);
    JMP(ExitUPartR);
}
void ExitUPartR() {
    _debug("ExitUPartR", __FILE__, __LINE__);
    return;
}
void ChkLrgObjLength() {
    _debug("ChkLrgObjLength", __FILE__, __LINE__);
    // get row location and size (length if branched to from here)
    JSR(GetLrgObjAttrib);
    JMP(ChkLrgObjFixedLength);
}
void ChkLrgObjFixedLength() {
    _debug("ChkLrgObjFixedLength", __FILE__, __LINE__);
    // check for set length counter
    lda(ABSX(AreaObjectLength));
    // clear carry flag for not just starting
    clc();
    // if counter not set, load it, otherwise leave alone
    BPL(LenSet);
    // save length into length counter
    tya();
    sta(ABSX(AreaObjectLength));
    // set carry flag if just starting
    sec();
    JMP(LenSet);
}
void LenSet() {
    _debug("LenSet", __FILE__, __LINE__);
    return;
}
void GetLrgObjAttrib() {
    _debug("GetLrgObjAttrib", __FILE__, __LINE__);
    // get offset saved from area obj decoding routine
    ldy(ABSX(AreaObjOffsetBuffer));
    // get first byte of level object
    lda(INDY((AreaData)));
    anda(IMM(0b1111));
    // save row location
    sta(ABS(0x7));
    iny();
    // get next byte, save lower nybble (length or height)
    lda(INDY((AreaData)));
    // as Y, then leave
    anda(IMM(0b1111));
    tay();
    return;
}
void GetAreaObjXPosition() {
    _debug("GetAreaObjXPosition", __FILE__, __LINE__);
    // multiply current offset where we're at by 16
    lda(ABS(CurrentColumnPos));
    // to obtain horizontal pixel coordinate
    asl();
    asl();
    asl();
    asl();
    return;
}
void GetAreaObjYPosition() {
    _debug("GetAreaObjYPosition", __FILE__, __LINE__);
    // multiply value by 16
    lda(ABS(0x7));
    asl();
    // this will give us the proper vertical pixel coordinate
    asl();
    asl();
    asl();
    clc();
    // add 32 pixels for the status bar
    adc(IMM(32));
    return;
}
void GetBlockBufferAddr() {
    _debug("GetBlockBufferAddr", __FILE__, __LINE__);
    // take value of A, save
    pha();
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // use nybble as pointer to high byte
    tay();
    // of indirect here
    lda(ABSY(((0x8000+offsetof(G, BlockBufferAddr)) + (2))));
    sta(ABS(0x7));
    pla();
    // pull from stack, mask out high nybble
    anda(IMM(0b1111));
    clc();
    // add to low byte
    adc(ABSY(0x8000+offsetof(G, BlockBufferAddr)));
    // store here and leave
    sta(ABS(0x6));
    return;
}
void LoadAreaPointer() {
    _debug("LoadAreaPointer", __FILE__, __LINE__);
    // find it and store it here
    JSR(FindAreaPointer);
    sta(ABS(AreaPointer));
    JMP(GetAreaType);
}
void GetAreaType() {
    _debug("GetAreaType", __FILE__, __LINE__);
    // mask out all but d6 and d5
    anda(IMM(0b1100000));
    asl();
    rol();
    rol();
    // make %0xx00000 into %000000xx
    rol();
    // save 2 MSB as area type
    sta(ABS(AreaType));
    return;
}
void FindAreaPointer() {
    _debug("FindAreaPointer", __FILE__, __LINE__);
    // load offset from world variable
    ldy(ABS(WorldNumber));
    lda(ABSY(0x8000+offsetof(G, WorldAddrOffsets)));
    // add area number used to find data
    clc();
    adc(ABS(AreaNumber));
    tay();
    // from there we have our area pointer
    lda(ABSY(0x8000+offsetof(G, AreaAddrOffsets)));
    return;
}
void GetAreaDataAddrs() {
    _debug("GetAreaDataAddrs", __FILE__, __LINE__);
    // use 2 MSB for Y
    lda(ABS(AreaPointer));
    JSR(GetAreaType);
    tay();
    // mask out all but 5 LSB
    lda(ABS(AreaPointer));
    anda(IMM(0b11111));
    // save as low offset
    sta(ABS(AreaAddrsLOffset));
    // load base value with 2 altered MSB,
    lda(ABSY(0x8000+offsetof(G, EnemyAddrHOffsets)));
    // then add base value to 5 LSB, result
    clc();
    // becomes offset for level data
    adc(ABS(AreaAddrsLOffset));
    tay();
    // use offset to load pointer
    lda(ABSY(0x8000+offsetof(G, EnemyDataAddrLow)));
    sta(ABS(EnemyDataLow));
    lda(ABSY(0x8000+offsetof(G, EnemyDataAddrHigh)));
    sta(ABS(EnemyDataHigh));
    // use area type as offset
    ldy(ABS(AreaType));
    // do the same thing but with different base value
    lda(ABSY(0x8000+offsetof(G, AreaDataHOffsets)));
    clc();
    adc(ABS(AreaAddrsLOffset));
    tay();
    // use this offset to load another pointer
    lda(ABSY(0x8000+offsetof(G, AreaDataAddrLow)));
    sta(ABS(AreaDataLow));
    lda(ABSY(0x8000+offsetof(G, AreaDataAddrHigh)));
    sta(ABS(AreaDataHigh));
    // load first byte of header
    ldy(IMM(0x0));
    lda(INDY((AreaData)));
    // save it to the stack for now
    pha();
    // save 3 LSB for foreground scenery or bg color control
    anda(IMM(0b111));
    cmp(IMM(0x4));
    BCC(StoreFore);
    // if 4 or greater, save value here as bg color control
    sta(ABS(BackgroundColorCtrl));
    lda(IMM(0x0));
    JMP(StoreFore);
}
void StoreFore() {
    _debug("StoreFore", __FILE__, __LINE__);
    // if less, save value here as foreground scenery
    sta(ABS(ForegroundScenery));
    // pull byte from stack and push it back
    pla();
    pha();
    // save player entrance control bits
    anda(IMM(0b111000));
    // shift bits over to LSBs
    lsr();
    lsr();
    lsr();
    // save value here as player entrance control
    sta(ABS(PlayerEntranceCtrl));
    // pull byte again but do not push it back
    pla();
    // save 2 MSB for game timer setting
    anda(IMM(0b11000000));
    clc();
    // rotate bits over to LSBs
    rol();
    rol();
    rol();
    // save value here as game timer setting
    sta(ABS(GameTimerSetting));
    iny();
    // load second byte of header
    lda(INDY((AreaData)));
    // save to stack
    pha();
    // mask out all but lower nybble
    anda(IMM(0b1111));
    sta(ABS(TerrainControl));
    // pull and push byte to copy it to A
    pla();
    pha();
    // save 2 MSB for background scenery type
    anda(IMM(0b110000));
    lsr();
    // shift bits to LSBs
    lsr();
    lsr();
    lsr();
    // save as background scenery
    sta(ABS(BackgroundScenery));
    pla();
    anda(IMM(0b11000000));
    clc();
    // rotate bits over to LSBs
    rol();
    rol();
    rol();
    // if set to 3, store here
    cmp(IMM(0b11));
    // and nullify other value
    BNE(StoreStyle);
    // otherwise store value in other place
    sta(ABS(CloudTypeOverride));
    lda(IMM(0x0));
    JMP(StoreStyle);
}
void StoreStyle() {
    _debug("StoreStyle", __FILE__, __LINE__);
    sta(ABS(AreaStyle));
    // increment area data address by 2 bytes
    lda(ABS(AreaDataLow));
    clc();
    adc(IMM(0x2));
    sta(ABS(AreaDataLow));
    lda(ABS(AreaDataHigh));
    adc(IMM(0x0));
    sta(ABS(AreaDataHigh));
    return;
}
// indirect jump routine called when
// $0770 is set to 1
void GameMode() {
    _debug("GameMode", __FILE__, __LINE__);
    lda(ABS(OperMode_Task));
    static JUMP_ENTRY jumptable[4] = {
        InitializeArea,
        ScreenRoutines,
        SecondaryGameSetup,
        GameCoreRoutine,
    };
    JMP(jumptable[a.read()]);
}
void GameCoreRoutine() {
    _debug("GameCoreRoutine", __FILE__, __LINE__);
    // get which player is on the screen
    ldx(ABS(CurrentPlayer));
    // use appropriate player's controller bits
    lda(ABSX(SavedJoypadBits));
    // as the master controller bits
    sta(ABS(SavedJoypadBits));
    // execute one of many possible subs
    JSR(GameRoutines);
    // check major task of operating mode
    lda(ABS(OperMode_Task));
    // if we are supposed to be here,
    cmp(IMM(0x3));
    // branch to the game engine itself
    BCS(GameEngine);
    return;
}
void GameEngine() {
    _debug("GameEngine", __FILE__, __LINE__);
    // process fireballs and air bubbles
    JSR(ProcFireball_Bubble);
    ldx(IMM(0x0));
    JMP(ProcELoop);
}
void ProcELoop() {
    _debug("ProcELoop", __FILE__, __LINE__);
    // put incremented offset in X as enemy object offset
    stx(ABS(ObjectOffset));
    // process enemy objects
    JSR(EnemiesAndLoopsCore);
    // process floatey numbers
    JSR(FloateyNumbersRoutine);
    inx();
    // do these two subroutines until the whole buffer is done
    cpx(IMM(0x6));
    BNE(ProcELoop);
    // get offscreen bits for player object
    JSR(GetPlayerOffscreenBits);
    // get relative coordinates for player object
    JSR(RelativePlayerPosition);
    // draw the player
    JSR(PlayerGfxHandler);
    // replace block objects with metatiles if necessary
    JSR(BlockObjMT_Updater);
    ldx(IMM(0x1));
    // set offset for second
    stx(ABS(ObjectOffset));
    // process second block object
    JSR(BlockObjectsCore);
    dex();
    // set offset for first
    stx(ABS(ObjectOffset));
    // process first block object
    JSR(BlockObjectsCore);
    // process misc objects (hammer, jumping coins)
    JSR(MiscObjectsCore);
    // process bullet bill cannons
    JSR(ProcessCannons);
    // process whirlpools
    JSR(ProcessWhirlpools);
    // process the flagpole
    JSR(FlagpoleRoutine);
    // count down the game timer
    JSR(RunGameTimer);
    // cycle one of the background colors
    JSR(ColorRotation);
    lda(ABS(Player_Y_HighPos));
    // if player is below the screen, don't bother with the music
    cmp(IMM(0x2));
    BPL(NoChgMus);
    // if star mario invincibility timer at zero,
    lda(ABS(StarInvincibleTimer));
    // skip this part
    BEQ(ClrPlrPal);
    cmp(IMM(0x4));
    // if not yet at a certain point, continue
    BNE(NoChgMus);
    // if interval timer not yet expired,
    lda(ABS(IntervalTimerControl));
    // branch ahead, don't bother with the music
    BNE(NoChgMus);
    // to re-attain appropriate level music
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}
void NoChgMus() {
    _debug("NoChgMus", __FILE__, __LINE__);
    // get invincibility timer
    ldy(ABS(StarInvincibleTimer));
    // get frame counter
    lda(ABS(FrameCounter));
    // if timer still above certain point,
    cpy(IMM(0x8));
    // branch to cycle player's palette quickly
    BCS(CycleTwo);
    // otherwise, divide by 8 to cycle every eighth frame
    lsr();
    lsr();
    JMP(CycleTwo);
}
void CycleTwo() {
    _debug("CycleTwo", __FILE__, __LINE__);
    // if branched here, divide by 2 to cycle every other frame
    lsr();
    // do sub to cycle the palette (note: shares fire flower code)
    JSR(CyclePlayerPalette);
    // then skip this sub to finish up the game engine
    JMP(SaveAB);
    JMP(ClrPlrPal);
}
void ClrPlrPal() {
    _debug("ClrPlrPal", __FILE__, __LINE__);
    // do sub to clear player's palette bits in attributes
    JSR(ResetPalStar);
    JMP(SaveAB);
}
void SaveAB() {
    _debug("SaveAB", __FILE__, __LINE__);
    // save current A and B button
    lda(ABS(A_B_Buttons));
    // into temp variable to be used on next frame
    sta(ABS(PreviousA_B_Buttons));
    lda(IMM(0x0));
    // nullify left and right buttons temp variable
    sta(ABS(Left_Right_Buttons));
    JMP(UpdScrollVar);
}
void UpdScrollVar() {
    _debug("UpdScrollVar", __FILE__, __LINE__);
    lda(ABS(VRAM_Buffer_AddrCtrl));
    // if vram address controller set to 6 (one of two $0341s)
    cmp(IMM(0x6));
    // then branch to leave
    BEQ(ExitEng);
    // otherwise check number of tasks
    lda(ABS(AreaParserTaskNum));
    BNE(RunParser);
    // get horizontal scroll in 0-31 or $00-$20 range
    lda(ABS(ScrollThirtyTwo));
    // check to see if exceeded $21
    cmp(IMM(0x20));
    // branch to leave if not
    BMI(ExitEng);
    lda(ABS(ScrollThirtyTwo));
    // otherwise subtract $20 to set appropriately
    sbc(IMM(0x20));
    // and store
    sta(ABS(ScrollThirtyTwo));
    // reset vram buffer offset used in conjunction with
    lda(IMM(0x0));
    // level graphics buffer at $0341-$035f
    sta(ABS(VRAM_Buffer2_Offset));
    JMP(RunParser);
}
void RunParser() {
    _debug("RunParser", __FILE__, __LINE__);
    // update the name table with more level graphics
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}
void ExitEng() {
    _debug("ExitEng", __FILE__, __LINE__);
    // and after all that, we're finally done!
    return;
}
void ScrollHandler() {
    _debug("ScrollHandler", __FILE__, __LINE__);
    // load value saved here
    lda(ABS(Player_X_Scroll));
    clc();
    // add value used by left/right platforms
    adc(ABS(Platform_X_Scroll));
    // save as new value here to impose force on scroll
    sta(ABS(Player_X_Scroll));
    // check scroll lock flag
    lda(ABS(ScrollLock));
    // skip a bunch of code here if set
    BNE(InitScrlAmt);
    lda(ABS(Player_Pos_ForScroll));
    // check player's horizontal screen position
    cmp(IMM(0x50));
    // if less than 80 pixels to the right, branch
    BCC(InitScrlAmt);
    // if timer related to player's side collision
    lda(ABS(SideCollisionTimer));
    // not expired, branch
    BNE(InitScrlAmt);
    // get value and decrement by one
    ldy(ABS(Player_X_Scroll));
    // if value originally set to zero or otherwise
    dey();
    // negative for left movement, branch
    BMI(InitScrlAmt);
    iny();
    // if value $01, branch and do not decrement
    cpy(IMM(0x2));
    BCC(ChkNearMid);
    // otherwise decrement by one
    dey();
    JMP(ChkNearMid);
}
void ChkNearMid() {
    _debug("ChkNearMid", __FILE__, __LINE__);
    lda(ABS(Player_Pos_ForScroll));
    // check player's horizontal screen position
    cmp(IMM(0x70));
    // if less than 112 pixels to the right, branch
    BCC(ScrollScreen);
    // otherwise get original value undecremented
    ldy(ABS(Player_X_Scroll));
    JMP(ScrollScreen);
}
void ScrollScreen() {
    _debug("ScrollScreen", __FILE__, __LINE__);
    tya();
    // save value here
    sta(ABS(ScrollAmount));
    clc();
    // add to value already set here
    adc(ABS(ScrollThirtyTwo));
    // save as new value here
    sta(ABS(ScrollThirtyTwo));
    tya();
    clc();
    // add to left side coordinate
    adc(ABS(ScreenLeft_X_Pos));
    // save as new left side coordinate
    sta(ABS(ScreenLeft_X_Pos));
    // save here also
    sta(ABS(HorizontalScroll));
    lda(ABS(ScreenLeft_PageLoc));
    // add carry to page location for left
    adc(IMM(0x0));
    // side of the screen
    sta(ABS(ScreenLeft_PageLoc));
    // get LSB of page location
    anda(IMM(0x1));
    // save as temp variable for PPU register 1 mirror
    sta(ABS(0x0));
    // get PPU register 1 mirror
    lda(ABS(Mirror_PPU_CTRL_REG1));
    // save all bits except d0
    anda(IMM(0b11111110));
    // get saved bit here and save in PPU register 1
    ora(ABS(0x0));
    // mirror to be used to set name table later
    sta(ABS(Mirror_PPU_CTRL_REG1));
    // figure out where the right side is
    JSR(GetScreenPosition);
    lda(IMM(0x8));
    // set scroll timer (residual, not used elsewhere)
    sta(ABS(ScrollIntervalTimer));
    // skip this part
    JMP(ChkPOffscr);
    JMP(InitScrlAmt);
}
void InitScrlAmt() {
    _debug("InitScrlAmt", __FILE__, __LINE__);
    lda(IMM(0x0));
    // initialize value here
    sta(ABS(ScrollAmount));
    JMP(ChkPOffscr);
}
void ChkPOffscr() {
    _debug("ChkPOffscr", __FILE__, __LINE__);
    // set X for player offset
    ldx(IMM(0x0));
    // get horizontal offscreen bits for player
    JSR(GetXOffscreenBits);
    // save them here
    sta(ABS(0x0));
    // load default offset (left side)
    ldy(IMM(0x0));
    // if d7 of offscreen bits are set,
    asl();
    // branch with default offset
    BCS(KeepOnscr);
    // otherwise use different offset (right side)
    iny();
    lda(ABS(0x0));
    // check offscreen bits for d5 set
    anda(IMM(0b100000));
    // if not set, branch ahead of this part
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}
void KeepOnscr() {
    _debug("KeepOnscr", __FILE__, __LINE__);
    // get left or right side coordinate based on offset
    lda(ABSY(ScreenEdge_X_Pos));
    sec();
    // subtract amount based on offset
    sbc(ABSY(0x8000+offsetof(G, X_SubtracterData)));
    // store as player position to prevent movement further
    sta(ABS(Player_X_Position));
    // get left or right page location based on offset
    lda(ABSY(ScreenEdge_PageLoc));
    // subtract borrow
    sbc(IMM(0x0));
    // save as player's page location
    sta(ABS(Player_PageLoc));
    // check saved controller bits
    lda(ABS(Left_Right_Buttons));
    // against bits based on offset
    cmp(ABSY(0x8000+offsetof(G, OffscrJoypadBitsData)));
    // if not equal, branch
    BEQ(InitPlatScrl);
    lda(IMM(0x0));
    // otherwise nullify horizontal speed of player
    sta(ABS(Player_X_Speed));
    JMP(InitPlatScrl);
}
void InitPlatScrl() {
    _debug("InitPlatScrl", __FILE__, __LINE__);
    // nullify platform force imposed on scroll
    lda(IMM(0x0));
    sta(ABS(Platform_X_Scroll));
    return;
}
void GetScreenPosition() {
    _debug("GetScreenPosition", __FILE__, __LINE__);
    // get coordinate of screen's left boundary
    lda(ABS(ScreenLeft_X_Pos));
    clc();
    // add 255 pixels
    adc(IMM(0xff));
    // store as coordinate of screen's right boundary
    sta(ABS(ScreenRight_X_Pos));
    // get page number where left boundary is
    lda(ABS(ScreenLeft_PageLoc));
    // add carry from before
    adc(IMM(0x0));
    // store as page number where right boundary is
    sta(ABS(ScreenRight_PageLoc));
    return;
}
void GameRoutines() {
    _debug("GameRoutines", __FILE__, __LINE__);
    // run routine based on number (a few of these routines are
    lda(ABS(GameEngineSubroutine));
    static JUMP_ENTRY jumptable[13] = {
        Entrance_GameTimerSetup,
        Vine_AutoClimb,
        SideExitPipeEntry,
        VerticalPipeEntry,
        FlagpoleSlide,
        PlayerEndLevel,
        PlayerLoseLife,
        PlayerEntrance,
        PlayerCtrlRoutine,
        PlayerChangeSize,
        PlayerInjuryBlink,
        PlayerDeath,
        PlayerFireFlower,
    };
    JMP(jumptable[a.read()]);
}
void PlayerEntrance() {
    _debug("PlayerEntrance", __FILE__, __LINE__);
    // check for mode of alternate entry
    lda(ABS(AltEntranceControl));
    cmp(IMM(0x2));
    // if found, branch to enter from pipe or with vine
    BEQ(EntrMode2);
    lda(IMM(0x0));
    // if vertical position above a certain
    ldy(ABS(Player_Y_Position));
    // point, nullify controller bits and continue
    cpy(IMM(0x30));
    // with player movement code, do not return
    BCC(AutoControlPlayer);
    // check player entry bits from header
    lda(ABS(PlayerEntranceCtrl));
    cmp(IMM(0x6));
    // if set to 6 or 7, execute pipe intro code
    BEQ(ChkBehPipe);
    // otherwise branch to normal entry
    cmp(IMM(0x7));
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}
void ChkBehPipe() {
    _debug("ChkBehPipe", __FILE__, __LINE__);
    // check for sprite attributes
    lda(ABS(Player_SprAttrib));
    // branch if found
    BNE(IntroEntr);
    lda(IMM(0x1));
    // force player to walk to the right
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}
void IntroEntr() {
    _debug("IntroEntr", __FILE__, __LINE__);
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    // decrement timer for change of area
    dec(ABS(ChangeAreaTimer));
    // branch to exit if not yet expired
    BNE(ExitEntr);
    // set flag to skip world and lives display
    inc(ABS(DisableIntermediate));
    // jump to increment to next area and set modes
    JMP(NextArea);
    JMP(EntrMode2);
}
void EntrMode2() {
    _debug("EntrMode2", __FILE__, __LINE__);
    // if controller override bits set here,
    lda(ABS(JoypadOverride));
    // branch to enter with vine
    BNE(VineEntr);
    // otherwise, set value here then execute sub
    lda(IMM(0xff));
    // to move player upwards (note $ff = -1)
    JSR(MovePlayerYAxis);
    // check to see if player is at a specific coordinate
    lda(ABS(Player_Y_Position));
    // if player risen to a certain point (this requires pipes
    cmp(IMM(0x91));
    // to be at specific height to look/function right) branch
    BCC(PlayerRdy);
    // to the last part, otherwise leave
    return;
}
void VineEntr() {
    _debug("VineEntr", __FILE__, __LINE__);
    lda(ABS(VineHeight));
    // check vine height
    cmp(IMM(0x60));
    // if vine not yet reached maximum height, branch to leave
    BNE(ExitEntr);
    // get player's vertical coordinate
    lda(ABS(Player_Y_Position));
    // check player's vertical coordinate against preset value
    cmp(IMM(0x99));
    // load default values to be written to
    ldy(IMM(0x0));
    // this value moves player to the right off the vine
    lda(IMM(0x1));
    // if vertical coordinate < preset value, use defaults
    BCC(OffVine);
    lda(IMM(0x3));
    // otherwise set player state to climbing
    sta(ABS(Player_State));
    // increment value in Y
    iny();
    // set block in block buffer to cover hole, then
    lda(IMM(0x8));
    // use same value to force player to climb
    sta(ABS(((Block_Buffer_1) + (0xb4))));
    JMP(OffVine);
}
void OffVine() {
    _debug("OffVine", __FILE__, __LINE__);
    // set collision detection disable flag
    sty(ABS(DisableCollisionDet));
    // use contents of A to move player up or right, execute sub
    JSR(AutoControlPlayer);
    lda(ABS(Player_X_Position));
    // check player's horizontal position
    cmp(IMM(0x48));
    // if not far enough to the right, branch to leave
    BCC(ExitEntr);
    JMP(PlayerRdy);
}
void PlayerRdy() {
    _debug("PlayerRdy", __FILE__, __LINE__);
    // set routine to be executed by game engine next frame
    lda(IMM(0x8));
    sta(ABS(GameEngineSubroutine));
    // set to face player to the right
    lda(IMM(0x1));
    sta(ABS(PlayerFacingDir));
    // init A
    lsr();
    // init mode of entry
    sta(ABS(AltEntranceControl));
    // init collision detection disable flag
    sta(ABS(DisableCollisionDet));
    // nullify controller override bits
    sta(ABS(JoypadOverride));
    JMP(ExitEntr);
}
void ExitEntr() {
    _debug("ExitEntr", __FILE__, __LINE__);
    // leave!
    return;
}
// $07 - used to hold upper limit of high byte when player falls down hole
void AutoControlPlayer() {
    _debug("AutoControlPlayer", __FILE__, __LINE__);
    // override controller bits with contents of A if executing here
    sta(ABS(SavedJoypadBits));
    JMP(PlayerCtrlRoutine);
}
void PlayerCtrlRoutine() {
    _debug("PlayerCtrlRoutine", __FILE__, __LINE__);
    // check task here
    lda(ABS(GameEngineSubroutine));
    // if certain value is set, branch to skip controller bit loading
    cmp(IMM(0xb));
    BEQ(SizeChk);
    // are we in a water type area?
    lda(ABS(AreaType));
    // if not, branch
    BNE(SaveJoyp);
    ldy(ABS(Player_Y_HighPos));
    // if not in vertical area between
    dey();
    // status bar and bottom, branch
    BNE(DisJoyp);
    lda(ABS(Player_Y_Position));
    // if nearing the bottom of the screen or
    cmp(IMM(0xd0));
    // not in the vertical area between status bar or bottom,
    BCC(SaveJoyp);
    JMP(DisJoyp);
}
void DisJoyp() {
    _debug("DisJoyp", __FILE__, __LINE__);
    // disable controller bits
    lda(IMM(0x0));
    sta(ABS(SavedJoypadBits));
    JMP(SaveJoyp);
}
void SaveJoyp() {
    _debug("SaveJoyp", __FILE__, __LINE__);
    // otherwise store A and B buttons in $0a
    lda(ABS(SavedJoypadBits));
    anda(IMM(0b11000000));
    sta(ABS(A_B_Buttons));
    // store left and right buttons in $0c
    lda(ABS(SavedJoypadBits));
    anda(IMM(0b11));
    sta(ABS(Left_Right_Buttons));
    // store up and down buttons in $0b
    lda(ABS(SavedJoypadBits));
    anda(IMM(0b1100));
    sta(ABS(Up_Down_Buttons));
    // check for pressing down
    anda(IMM(0b100));
    // if not, branch
    BEQ(SizeChk);
    // check player's state
    lda(ABS(Player_State));
    // if not on the ground, branch
    BNE(SizeChk);
    // check left and right
    ldy(ABS(Left_Right_Buttons));
    // if neither pressed, branch
    BEQ(SizeChk);
    lda(IMM(0x0));
    // if pressing down while on the ground,
    sta(ABS(Left_Right_Buttons));
    // nullify directional bits
    sta(ABS(Up_Down_Buttons));
    JMP(SizeChk);
}
void SizeChk() {
    _debug("SizeChk", __FILE__, __LINE__);
    // run movement subroutines
    JSR(PlayerMovementSubs);
    // is player small?
    ldy(IMM(0x1));
    lda(ABS(PlayerSize));
    BNE(ChkMoveDir);
    // check for if crouching
    ldy(IMM(0x0));
    lda(ABS(CrouchingFlag));
    // if not, branch ahead
    BEQ(ChkMoveDir);
    // if big and crouching, load y with 2
    ldy(IMM(0x2));
    JMP(ChkMoveDir);
}
void ChkMoveDir() {
    _debug("ChkMoveDir", __FILE__, __LINE__);
    // set contents of Y as player's bounding box size control
    sty(ABS(Player_BoundBoxCtrl));
    // set moving direction to right by default
    lda(IMM(0x1));
    // check player's horizontal speed
    ldy(ABS(Player_X_Speed));
    // if not moving at all horizontally, skip this part
    BEQ(PlayerSubs);
    // if moving to the right, use default moving direction
    BPL(SetMoveDir);
    // otherwise change to move to the left
    asl();
    JMP(SetMoveDir);
}
void SetMoveDir() {
    _debug("SetMoveDir", __FILE__, __LINE__);
    // set moving direction
    sta(ABS(Player_MovingDir));
    JMP(PlayerSubs);
}
void PlayerSubs() {
    _debug("PlayerSubs", __FILE__, __LINE__);
    // move the screen if necessary
    JSR(ScrollHandler);
    // get player's offscreen bits
    JSR(GetPlayerOffscreenBits);
    // get coordinates relative to the screen
    JSR(RelativePlayerPosition);
    // set offset for player object
    ldx(IMM(0x0));
    // get player's bounding box coordinates
    JSR(BoundingBoxCore);
    // do collision detection and process
    JSR(PlayerBGCollision);
    lda(ABS(Player_Y_Position));
    // check to see if player is higher than 64th pixel
    cmp(IMM(0x40));
    // if so, branch ahead
    BCC(PlayerHole);
    lda(ABS(GameEngineSubroutine));
    // if running end-of-level routine, branch ahead
    cmp(IMM(0x5));
    BEQ(PlayerHole);
    // if running player entrance routine, branch ahead
    cmp(IMM(0x7));
    BEQ(PlayerHole);
    // if running routines $00-$03, branch ahead
    cmp(IMM(0x4));
    BCC(PlayerHole);
    lda(ABS(Player_SprAttrib));
    // otherwise nullify player's
    anda(IMM(0b11011111));
    // background priority flag
    sta(ABS(Player_SprAttrib));
    JMP(PlayerHole);
}
void PlayerHole() {
    _debug("PlayerHole", __FILE__, __LINE__);
    // check player's vertical high byte
    lda(ABS(Player_Y_HighPos));
    // for below the screen
    cmp(IMM(0x2));
    // branch to leave if not that far down
    BMI(ExitCtrl);
    ldx(IMM(0x1));
    // set scroll lock
    stx(ABS(ScrollLock));
    ldy(IMM(0x4));
    // set value here
    sty(ABS(0x7));
    // use X as flag, and clear for cloud level
    ldx(IMM(0x0));
    // check game timer expiration flag
    ldy(ABS(GameTimerExpiredFlag));
    // if set, branch
    BNE(HoleDie);
    // check for cloud type override
    ldy(ABS(CloudTypeOverride));
    // skip to last part if found
    BNE(ChkHoleX);
    JMP(HoleDie);
}
void HoleDie() {
    _debug("HoleDie", __FILE__, __LINE__);
    // set flag in X for player death
    inx();
    ldy(ABS(GameEngineSubroutine));
    // check for some other routine running
    cpy(IMM(0xb));
    // if so, branch ahead
    BEQ(ChkHoleX);
    // check value here
    ldy(ABS(DeathMusicLoaded));
    // if already set, branch to next part
    BNE(HoleBottom);
    iny();
    // otherwise play death music
    sty(ABS(EventMusicQueue));
    // and set value here
    sty(ABS(DeathMusicLoaded));
    JMP(HoleBottom);
}
void HoleBottom() {
    _debug("HoleBottom", __FILE__, __LINE__);
    ldy(IMM(0x6));
    // change value here
    sty(ABS(0x7));
    JMP(ChkHoleX);
}
void ChkHoleX() {
    _debug("ChkHoleX", __FILE__, __LINE__);
    // compare vertical high byte with value set here
    cmp(ABS(0x7));
    // if less, branch to leave
    BMI(ExitCtrl);
    // otherwise decrement flag in X
    dex();
    // if flag was clear, branch to set modes and other values
    BMI(CloudExit);
    // check to see if music is still playing
    ldy(ABS(EventMusicBuffer));
    // branch to leave if so
    BNE(ExitCtrl);
    // otherwise set to run lose life routine
    lda(IMM(0x6));
    // on next frame
    sta(ABS(GameEngineSubroutine));
    JMP(ExitCtrl);
}
void ExitCtrl() {
    _debug("ExitCtrl", __FILE__, __LINE__);
    // leave
    return;
}
void CloudExit() {
    _debug("CloudExit", __FILE__, __LINE__);
    lda(IMM(0x0));
    // clear controller override bits if any are set
    sta(ABS(JoypadOverride));
    // do sub to set secondary mode
    JSR(SetEntr);
    // set mode of entry to 3
    inc(ABS(AltEntranceControl));
    return;
}
void Vine_AutoClimb() {
    _debug("Vine_AutoClimb", __FILE__, __LINE__);
    // check to see whether player reached position
    lda(ABS(Player_Y_HighPos));
    // above the status bar yet and if so, set modes
    BNE(AutoClimb);
    lda(ABS(Player_Y_Position));
    cmp(IMM(0xe4));
    BCC(SetEntr);
    JMP(AutoClimb);
}
void AutoClimb() {
    _debug("AutoClimb", __FILE__, __LINE__);
    // set controller bits override to up
    lda(IMM(0b1000));
    sta(ABS(JoypadOverride));
    // set player state to climbing
    ldy(IMM(0x3));
    sty(ABS(Player_State));
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}
void SetEntr() {
    _debug("SetEntr", __FILE__, __LINE__);
    // set starting position to override
    lda(IMM(0x2));
    sta(ABS(AltEntranceControl));
    // set modes
    JMP(ChgAreaMode);
    JMP(VerticalPipeEntry);
}
void VerticalPipeEntry() {
    _debug("VerticalPipeEntry", __FILE__, __LINE__);
    // set 1 as movement amount
    lda(IMM(0x1));
    // do sub to move player downwards
    JSR(MovePlayerYAxis);
    // do sub to scroll screen with saved force if necessary
    JSR(ScrollHandler);
    // load default mode of entry
    ldy(IMM(0x0));
    // check warp zone control variable/flag
    lda(ABS(WarpZoneControl));
    // if set, branch to use mode 0
    BNE(ChgAreaPipe);
    iny();
    // check for castle level type
    lda(ABS(AreaType));
    cmp(IMM(0x3));
    // if not castle type level, use mode 1
    BNE(ChgAreaPipe);
    iny();
    // otherwise use mode 2
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}
void MovePlayerYAxis() {
    _debug("MovePlayerYAxis", __FILE__, __LINE__);
    clc();
    // add contents of A to player position
    adc(ABS(Player_Y_Position));
    sta(ABS(Player_Y_Position));
    return;
}
void SideExitPipeEntry() {
    _debug("SideExitPipeEntry", __FILE__, __LINE__);
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    ldy(IMM(0x2));
    JMP(ChgAreaPipe);
}
void ChgAreaPipe() {
    _debug("ChgAreaPipe", __FILE__, __LINE__);
    // decrement timer for change of area
    dec(ABS(ChangeAreaTimer));
    BNE(ExitCAPipe);
    // when timer expires set mode of alternate entry
    sty(ABS(AltEntranceControl));
    JMP(ChgAreaMode);
}
void ChgAreaMode() {
    _debug("ChgAreaMode", __FILE__, __LINE__);
    // set flag to disable screen output
    inc(ABS(DisableScreenFlag));
    lda(IMM(0x0));
    // set secondary mode of operation
    sta(ABS(OperMode_Task));
    // disable sprite 0 check
    sta(ABS(Sprite0HitDetectFlag));
    JMP(ExitCAPipe);
}
void ExitCAPipe() {
    _debug("ExitCAPipe", __FILE__, __LINE__);
    // leave
    return;
}
void EnterSidePipe() {
    _debug("EnterSidePipe", __FILE__, __LINE__);
    // set player's horizontal speed
    lda(IMM(0x8));
    sta(ABS(Player_X_Speed));
    // set controller right button by default
    ldy(IMM(0x1));
    // mask out higher nybble of player's
    lda(ABS(Player_X_Position));
    // horizontal position
    anda(IMM(0b1111));
    BNE(RightPipe);
    // if lower nybble = 0, set as horizontal speed
    sta(ABS(Player_X_Speed));
    // and nullify controller bit override here
    tay();
    JMP(RightPipe);
}
void RightPipe() {
    _debug("RightPipe", __FILE__, __LINE__);
    // use contents of Y to
    tya();
    // execute player control routine with ctrl bits nulled
    JSR(AutoControlPlayer);
    return;
}
void PlayerChangeSize() {
    _debug("PlayerChangeSize", __FILE__, __LINE__);
    // check master timer control
    lda(ABS(TimerControl));
    // for specific moment in time
    cmp(IMM(0xf8));
    // branch if before or after that point
    BNE(EndChgSize);
    // otherwise run code to get growing/shrinking going
    JMP(InitChangeSize);
    JMP(EndChgSize);
}
void EndChgSize() {
    _debug("EndChgSize", __FILE__, __LINE__);
    // check again for another specific moment
    cmp(IMM(0xc4));
    // and branch to leave if before or after that point
    BNE(ExitChgSize);
    // otherwise do sub to init timer control and set routine
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}
void ExitChgSize() {
    _debug("ExitChgSize", __FILE__, __LINE__);
    // and then leave
    return;
}
void PlayerInjuryBlink() {
    _debug("PlayerInjuryBlink", __FILE__, __LINE__);
    // check master timer control
    lda(ABS(TimerControl));
    // for specific moment in time
    cmp(IMM(0xf0));
    // branch if before that point
    BCS(ExitBlink);
    // check again for another specific point
    cmp(IMM(0xc8));
    // branch if at that point, and not before or after
    BEQ(DonePlayerTask);
    // otherwise run player control routine
    JMP(PlayerCtrlRoutine);
    JMP(ExitBlink);
}
void ExitBlink() {
    _debug("ExitBlink", __FILE__, __LINE__);
    // do unconditional branch to leave
    BNE(ExitBoth);
    JMP(InitChangeSize);
}
void InitChangeSize() {
    _debug("InitChangeSize", __FILE__, __LINE__);
    // if growing/shrinking flag already set
    ldy(ABS(PlayerChangeSizeFlag));
    // then branch to leave
    BNE(ExitBoth);
    // otherwise initialize player's animation frame control
    sty(ABS(PlayerAnimCtrl));
    // set growing/shrinking flag
    inc(ABS(PlayerChangeSizeFlag));
    lda(ABS(PlayerSize));
    // invert player's size
    eor(IMM(0x1));
    sta(ABS(PlayerSize));
    JMP(ExitBoth);
}
void ExitBoth() {
    _debug("ExitBoth", __FILE__, __LINE__);
    // leave
    return;
}
// $00 - used in CyclePlayerPalette to store current palette to cycle
void PlayerDeath() {
    _debug("PlayerDeath", __FILE__, __LINE__);
    // check master timer control
    lda(ABS(TimerControl));
    // for specific moment in time
    cmp(IMM(0xf0));
    // branch to leave if before that point
    BCS(ExitDeath);
    // otherwise run player control routine
    JMP(PlayerCtrlRoutine);
    JMP(DonePlayerTask);
}
void DonePlayerTask() {
    _debug("DonePlayerTask", __FILE__, __LINE__);
    lda(IMM(0x0));
    // initialize master timer control to continue timers
    sta(ABS(TimerControl));
    lda(IMM(0x8));
    // set player control routine to run next frame
    sta(ABS(GameEngineSubroutine));
    // leave
    return;
}
void PlayerFireFlower() {
    _debug("PlayerFireFlower", __FILE__, __LINE__);
    // check master timer control
    lda(ABS(TimerControl));
    // for specific moment in time
    cmp(IMM(0xc0));
    // branch if at moment, not before or after
    BEQ(ResetPalFireFlower);
    // get frame counter
    lda(ABS(FrameCounter));
    lsr();
    // divide by four to change every four frames
    lsr();
    JMP(CyclePlayerPalette);
}
void CyclePlayerPalette() {
    _debug("CyclePlayerPalette", __FILE__, __LINE__);
    // mask out all but d1-d0 (previously d3-d2)
    anda(IMM(0x3));
    // store result here to use as palette bits
    sta(ABS(0x0));
    // get player attributes
    lda(ABS(Player_SprAttrib));
    // save any other bits but palette bits
    anda(IMM(0b11111100));
    // add palette bits
    ora(ABS(0x0));
    // store as new player attributes
    sta(ABS(Player_SprAttrib));
    // and leave
    return;
}
void ResetPalFireFlower() {
    _debug("ResetPalFireFlower", __FILE__, __LINE__);
    // do sub to init timer control and run player control routine
    JSR(DonePlayerTask);
    JMP(ResetPalStar);
}
void ResetPalStar() {
    _debug("ResetPalStar", __FILE__, __LINE__);
    // get player attributes
    lda(ABS(Player_SprAttrib));
    // mask out palette bits to force palette 0
    anda(IMM(0b11111100));
    // store as new player attributes
    sta(ABS(Player_SprAttrib));
    // and leave
    return;
}
void ExitDeath() {
    _debug("ExitDeath", __FILE__, __LINE__);
    // leave from death routine
    return;
}
void FlagpoleSlide() {
    _debug("FlagpoleSlide", __FILE__, __LINE__);
    // check special use enemy slot
    lda(ABS(((Enemy_ID) + (5))));
    // for flagpole flag object
    cmp(IMM(FlagpoleFlagObject));
    // if not found, branch to something residual
    BNE(NoFPObj);
    // load flagpole sound
    lda(ABS(FlagpoleSoundQueue));
    // into square 1's sfx queue
    sta(ABS(Square1SoundQueue));
    lda(IMM(0x0));
    // init flagpole sound queue
    sta(ABS(FlagpoleSoundQueue));
    ldy(ABS(Player_Y_Position));
    // check to see if player has slid down
    cpy(IMM(0x9e));
    // far enough, and if so, branch with no controller bits set
    BCS(SlidePlayer);
    // otherwise force player to climb down (to slide)
    lda(IMM(0x4));
    JMP(SlidePlayer);
}
void SlidePlayer() {
    _debug("SlidePlayer", __FILE__, __LINE__);
    // jump to player control routine
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}
void NoFPObj() {
    _debug("NoFPObj", __FILE__, __LINE__);
    // increment to next routine (this may
    inc(ABS(GameEngineSubroutine));
    // be residual code)
    return;
}
void PlayerEndLevel() {
    _debug("PlayerEndLevel", __FILE__, __LINE__);
    // force player to walk to the right
    lda(IMM(0x1));
    JSR(AutoControlPlayer);
    // check player's vertical position
    lda(ABS(Player_Y_Position));
    cmp(IMM(0xae));
    // if player is not yet off the flagpole, skip this part
    BCC(ChkStop);
    // if scroll lock not set, branch ahead to next part
    lda(ABS(ScrollLock));
    // because we only need to do this part once
    BEQ(ChkStop);
    lda(IMM(EndOfLevelMusic));
    // load win level music in event music queue
    sta(ABS(EventMusicQueue));
    lda(IMM(0x0));
    // turn off scroll lock to skip this part later
    sta(ABS(ScrollLock));
    JMP(ChkStop);
}
void ChkStop() {
    _debug("ChkStop", __FILE__, __LINE__);
    // get player collision bits
    lda(ABS(Player_CollisionBits));
    // check for d0 set
    lsr();
    // if d0 set, skip to next part
    BCS(RdyNextA);
    // if star flag task control already set,
    lda(ABS(StarFlagTaskControl));
    // go ahead with the rest of the code
    BNE(InCastle);
    // otherwise set task control now (this gets ball rolling!)
    inc(ABS(StarFlagTaskControl));
    JMP(InCastle);
}
void InCastle() {
    _debug("InCastle", __FILE__, __LINE__);
    // set player's background priority bit to
    lda(IMM(0b100000));
    // give illusion of being inside the castle
    sta(ABS(Player_SprAttrib));
    JMP(RdyNextA);
}
void RdyNextA() {
    _debug("RdyNextA", __FILE__, __LINE__);
    lda(ABS(StarFlagTaskControl));
    // if star flag task control not yet set
    cmp(IMM(0x5));
    // beyond last valid task number, branch to leave
    BNE(ExitNA);
    // increment level number used for game logic
    inc(ABS(LevelNumber));
    lda(ABS(LevelNumber));
    // check to see if we have yet reached level -4
    cmp(IMM(0x3));
    // and skip this last part here if not
    BNE(NextArea);
    // get world number as offset
    ldy(ABS(WorldNumber));
    // check third area coin tally for bonus 1-ups
    lda(ABS(CoinTallyFor1Ups));
    // against minimum value, if player has not collected
    cmp(ABSY(0x8000+offsetof(G, Hidden1UpCoinAmts)));
    // at least this number of coins, leave flag clear
    BCC(NextArea);
    // otherwise set hidden 1-up box control flag
    inc(ABS(Hidden1UpFlag));
    JMP(NextArea);
}
void NextArea() {
    _debug("NextArea", __FILE__, __LINE__);
    // increment area number used for address loader
    inc(ABS(AreaNumber));
    // get new level pointer
    JSR(LoadAreaPointer);
    // set flag to load new game timer
    inc(ABS(FetchNewGameTimerFlag));
    // do sub to set secondary mode, disable screen and sprite 0
    JSR(ChgAreaMode);
    // reset halfway page to 0 (beginning)
    sta(ABS(HalfwayPage));
    lda(IMM(Silence));
    // silence music and leave
    sta(ABS(EventMusicQueue));
    JMP(ExitNA);
}
void ExitNA() {
    _debug("ExitNA", __FILE__, __LINE__);
    return;
}
void PlayerMovementSubs() {
    _debug("PlayerMovementSubs", __FILE__, __LINE__);
    // set A to init crouch flag by default
    lda(IMM(0x0));
    // is player small?
    ldy(ABS(PlayerSize));
    // if so, branch
    BNE(SetCrouch);
    // check state of player
    lda(ABS(Player_State));
    // if not on the ground, branch
    BNE(ProcMove);
    // load controller bits for up and down
    lda(ABS(Up_Down_Buttons));
    // single out bit for down button
    anda(IMM(0b100));
    JMP(SetCrouch);
}
void SetCrouch() {
    _debug("SetCrouch", __FILE__, __LINE__);
    // store value in crouch flag
    sta(ABS(CrouchingFlag));
    JMP(ProcMove);
}
void ProcMove() {
    _debug("ProcMove", __FILE__, __LINE__);
    // run sub related to jumping and swimming
    JSR(PlayerPhysicsSub);
    // if growing/shrinking flag set,
    lda(ABS(PlayerChangeSizeFlag));
    // branch to leave
    BNE(NoMoveSub);
    lda(ABS(Player_State));
    // get player state
    cmp(IMM(0x3));
    // if climbing, branch ahead, leave timer unset
    BEQ(MoveSubs);
    ldy(IMM(0x18));
    // otherwise reset timer now
    sty(ABS(ClimbSideTimer));
    JMP(MoveSubs);
}
void MoveSubs() {
    _debug("MoveSubs", __FILE__, __LINE__);
    static JUMP_ENTRY jumptable[4] = {
        OnGroundStateSub,
        JumpSwimSub,
        FallingSub,
        ClimbingSub,
    };
    JMP(jumptable[a.read()]);
}
void NoMoveSub() {
    _debug("NoMoveSub", __FILE__, __LINE__);
    return;
}
// $00 - used by ClimbingSub to store high vertical adder
void OnGroundStateSub() {
    _debug("OnGroundStateSub", __FILE__, __LINE__);
    // do a sub to set animation frame timing
    JSR(GetPlayerAnimSpeed);
    lda(ABS(Left_Right_Buttons));
    // if left/right controller bits not set, skip instruction
    BEQ(GndMove);
    // otherwise set new facing direction
    sta(ABS(PlayerFacingDir));
    JMP(GndMove);
}
void GndMove() {
    _debug("GndMove", __FILE__, __LINE__);
    // do a sub to impose friction on player's walk/run
    JSR(ImposeFriction);
    // do another sub to move player horizontally
    JSR(MovePlayerHorizontally);
    // set returned value as player's movement speed for scroll
    sta(ABS(Player_X_Scroll));
    return;
}
void FallingSub() {
    _debug("FallingSub", __FILE__, __LINE__);
    lda(ABS(VerticalForceDown));
    // dump vertical movement force for falling into main one
    sta(ABS(VerticalForce));
    // movement force, then skip ahead to process left/right movement
    JMP(LRAir);
    JMP(JumpSwimSub);
}
void JumpSwimSub() {
    _debug("JumpSwimSub", __FILE__, __LINE__);
    // if player's vertical speed zero
    ldy(ABS(Player_Y_Speed));
    // or moving downwards, branch to falling
    BPL(DumpFall);
    lda(ABS(A_B_Buttons));
    // check to see if A button is being pressed
    anda(IMM(A_Button));
    // and was pressed in previous frame
    anda(ABS(PreviousA_B_Buttons));
    // if so, branch elsewhere
    BNE(ProcSwim);
    // get vertical position player jumped from
    lda(ABS(JumpOrigin_Y_Position));
    sec();
    // subtract current from original vertical coordinate
    sbc(ABS(Player_Y_Position));
    // compare to value set here to see if player is in mid-jump
    cmp(ABS(DiffToHaltJump));
    // or just starting to jump, if just starting, skip ahead
    BCC(ProcSwim);
    JMP(DumpFall);
}
void DumpFall() {
    _debug("DumpFall", __FILE__, __LINE__);
    // otherwise dump falling into main fractional
    lda(ABS(VerticalForceDown));
    sta(ABS(VerticalForce));
    JMP(ProcSwim);
}
void ProcSwim() {
    _debug("ProcSwim", __FILE__, __LINE__);
    // if swimming flag not set,
    lda(ABS(SwimmingFlag));
    // branch ahead to last part
    BEQ(LRAir);
    // do a sub to get animation frame timing
    JSR(GetPlayerAnimSpeed);
    lda(ABS(Player_Y_Position));
    // check vertical position against preset value
    cmp(IMM(0x14));
    // if not yet reached a certain position, branch ahead
    BCS(LRWater);
    lda(IMM(0x18));
    // otherwise set fractional
    sta(ABS(VerticalForce));
    JMP(LRWater);
}
void LRWater() {
    _debug("LRWater", __FILE__, __LINE__);
    // check left/right controller bits (check for swimming)
    lda(ABS(Left_Right_Buttons));
    // if not pressing any, skip
    BEQ(LRAir);
    // otherwise set facing direction accordingly
    sta(ABS(PlayerFacingDir));
    JMP(LRAir);
}
void LRAir() {
    _debug("LRAir", __FILE__, __LINE__);
    // check left/right controller bits (check for jumping/falling)
    lda(ABS(Left_Right_Buttons));
    // if not pressing any, skip
    BEQ(JSMove);
    // otherwise process horizontal movement
    JSR(ImposeFriction);
    JMP(JSMove);
}
void JSMove() {
    _debug("JSMove", __FILE__, __LINE__);
    // do a sub to move player horizontally
    JSR(MovePlayerHorizontally);
    // set player's speed here, to be used for scroll later
    sta(ABS(Player_X_Scroll));
    lda(ABS(GameEngineSubroutine));
    // check for specific routine selected
    cmp(IMM(0xb));
    // branch if not set to run
    BNE(ExitMov1);
    lda(IMM(0x28));
    // otherwise set fractional
    sta(ABS(VerticalForce));
    JMP(ExitMov1);
}
void ExitMov1() {
    _debug("ExitMov1", __FILE__, __LINE__);
    // jump to move player vertically, then leave
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}
void ClimbingSub() {
    _debug("ClimbingSub", __FILE__, __LINE__);
    lda(ABS(Player_YMF_Dummy));
    // add movement force to dummy variable
    clc();
    // save with carry
    adc(ABS(Player_Y_MoveForce));
    sta(ABS(Player_YMF_Dummy));
    // set default adder here
    ldy(IMM(0x0));
    // get player's vertical speed
    lda(ABS(Player_Y_Speed));
    // if not moving upwards, branch
    BPL(MoveOnVine);
    // otherwise set adder to $ff
    dey();
    JMP(MoveOnVine);
}
void MoveOnVine() {
    _debug("MoveOnVine", __FILE__, __LINE__);
    // store adder here
    sty(ABS(0x0));
    // add carry to player's vertical position
    adc(ABS(Player_Y_Position));
    // and store to move player up or down
    sta(ABS(Player_Y_Position));
    lda(ABS(Player_Y_HighPos));
    // add carry to player's page location
    adc(ABS(0x0));
    // and store
    sta(ABS(Player_Y_HighPos));
    // compare left/right controller bits
    lda(ABS(Left_Right_Buttons));
    // to collision flag
    anda(ABS(Player_CollisionBits));
    // if not set, skip to end
    BEQ(InitCSTimer);
    // otherwise check timer
    ldy(ABS(ClimbSideTimer));
    // if timer not expired, branch to leave
    BNE(ExitCSub);
    ldy(IMM(0x18));
    // otherwise set timer now
    sty(ABS(ClimbSideTimer));
    // set default offset here
    ldx(IMM(0x0));
    // get facing direction
    ldy(ABS(PlayerFacingDir));
    // move right button controller bit to carry
    lsr();
    // if controller right pressed, branch ahead
    BCS(ClimbFD);
    inx();
    // otherwise increment offset by 2 bytes
    inx();
    JMP(ClimbFD);
}
void ClimbFD() {
    _debug("ClimbFD", __FILE__, __LINE__);
    // check to see if facing right
    dey();
    // if so, branch, do not increment
    BEQ(CSetFDir);
    // otherwise increment by 1 byte
    inx();
    JMP(CSetFDir);
}
void CSetFDir() {
    _debug("CSetFDir", __FILE__, __LINE__);
    lda(ABS(Player_X_Position));
    // add or subtract from player's horizontal position
    clc();
    // using value here as adder and X as offset
    adc(ABSX(0x8000+offsetof(G, ClimbAdderLow)));
    sta(ABS(Player_X_Position));
    // add or subtract carry or borrow using value here
    lda(ABS(Player_PageLoc));
    // from the player's page location
    adc(ABSX(0x8000+offsetof(G, ClimbAdderHigh)));
    sta(ABS(Player_PageLoc));
    // get left/right controller bits again
    lda(ABS(Left_Right_Buttons));
    // invert them and store them while player
    eor(IMM(0b11));
    // is on vine to face player in opposite direction
    sta(ABS(PlayerFacingDir));
    JMP(ExitCSub);
}
void ExitCSub() {
    _debug("ExitCSub", __FILE__, __LINE__);
    // then leave
    return;
}
void InitCSTimer() {
    _debug("InitCSTimer", __FILE__, __LINE__);
    // initialize timer here
    sta(ABS(ClimbSideTimer));
    return;
}
void PlayerPhysicsSub() {
    _debug("PlayerPhysicsSub", __FILE__, __LINE__);
    // check player state
    lda(ABS(Player_State));
    cmp(IMM(0x3));
    // if not climbing, branch
    BNE(CheckForJumping);
    ldy(IMM(0x0));
    // get controller bits for up/down
    lda(ABS(Up_Down_Buttons));
    // check against player's collision detection bits
    anda(ABS(Player_CollisionBits));
    // if not pressing up or down, branch
    BEQ(ProcClimb);
    iny();
    // check for pressing up
    anda(IMM(0b1000));
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}
void ProcClimb() {
    _debug("ProcClimb", __FILE__, __LINE__);
    // load value here
    ldx(ABSY(0x8000+offsetof(G, Climb_Y_MForceData)));
    // store as vertical movement force
    stx(ABS(Player_Y_MoveForce));
    // load default animation timing
    lda(IMM(0x8));
    // load some other value here
    ldx(ABSY(0x8000+offsetof(G, Climb_Y_SpeedData)));
    // store as vertical speed
    stx(ABS(Player_Y_Speed));
    // if climbing down, use default animation timing value
    BMI(SetCAnim);
    // otherwise divide timer setting by 2
    lsr();
    JMP(SetCAnim);
}
void SetCAnim() {
    _debug("SetCAnim", __FILE__, __LINE__);
    // store animation timer setting and leave
    sta(ABS(PlayerAnimTimerSet));
    return;
}
void CheckForJumping() {
    _debug("CheckForJumping", __FILE__, __LINE__);
    // if jumpspring animating,
    lda(ABS(JumpspringAnimCtrl));
    // skip ahead to something else
    BNE(NoJump);
    // check for A button press
    lda(ABS(A_B_Buttons));
    anda(IMM(A_Button));
    // if not, branch to something else
    BEQ(NoJump);
    // if button not pressed in previous frame, branch
    anda(ABS(PreviousA_B_Buttons));
    BEQ(ProcJumping);
    JMP(NoJump);
}
void NoJump() {
    _debug("NoJump", __FILE__, __LINE__);
    // otherwise, jump to something else
    JMP(X_Physics);
    JMP(ProcJumping);
}
void ProcJumping() {
    _debug("ProcJumping", __FILE__, __LINE__);
    // check player state
    lda(ABS(Player_State));
    // if on the ground, branch
    BEQ(InitJS);
    // if swimming flag not set, jump to do something else
    lda(ABS(SwimmingFlag));
    // to prevent midair jumping, otherwise continue
    BEQ(NoJump);
    // if jump/swim timer nonzero, branch
    lda(ABS(JumpSwimTimer));
    BNE(InitJS);
    // check player's vertical speed
    lda(ABS(Player_Y_Speed));
    // if player's vertical speed motionless or down, branch
    BPL(InitJS);
    // if timer at zero and player still rising, do not swim
    JMP(X_Physics);
    JMP(InitJS);
}
void InitJS() {
    _debug("InitJS", __FILE__, __LINE__);
    // set jump/swim timer
    lda(IMM(0x20));
    sta(ABS(JumpSwimTimer));
    // initialize vertical force and dummy variable
    ldy(IMM(0x0));
    sty(ABS(Player_YMF_Dummy));
    sty(ABS(Player_Y_MoveForce));
    // get vertical high and low bytes of jump origin
    lda(ABS(Player_Y_HighPos));
    // and store them next to each other here
    sta(ABS(JumpOrigin_Y_HighPos));
    lda(ABS(Player_Y_Position));
    sta(ABS(JumpOrigin_Y_Position));
    // set player state to jumping/swimming
    lda(IMM(0x1));
    sta(ABS(Player_State));
    // check value related to walking/running speed
    lda(ABS(Player_XSpeedAbsolute));
    cmp(IMM(0x9));
    // branch if below certain values, increment Y
    BCC(ChkWtr);
    // for each amount equal or exceeded
    iny();
    cmp(IMM(0x10));
    BCC(ChkWtr);
    iny();
    cmp(IMM(0x19));
    BCC(ChkWtr);
    iny();
    cmp(IMM(0x1c));
    // note that for jumping, range is 0-4 for Y
    BCC(ChkWtr);
    iny();
    JMP(ChkWtr);
}
void ChkWtr() {
    _debug("ChkWtr", __FILE__, __LINE__);
    // set value here (apparently always set to 1)
    lda(IMM(0x1));
    sta(ABS(DiffToHaltJump));
    // if swimming flag disabled, branch
    lda(ABS(SwimmingFlag));
    BEQ(GetYPhy);
    // otherwise set Y to 5, range is 5-6
    ldy(IMM(0x5));
    // if whirlpool flag not set, branch
    lda(ABS(Whirlpool_Flag));
    BEQ(GetYPhy);
    // otherwise increment to 6
    iny();
    JMP(GetYPhy);
}
void GetYPhy() {
    _debug("GetYPhy", __FILE__, __LINE__);
    // store appropriate jump/swim
    lda(ABSY(0x8000+offsetof(G, JumpMForceData)));
    // data here
    sta(ABS(VerticalForce));
    lda(ABSY(0x8000+offsetof(G, FallMForceData)));
    sta(ABS(VerticalForceDown));
    lda(ABSY(0x8000+offsetof(G, InitMForceData)));
    sta(ABS(Player_Y_MoveForce));
    lda(ABSY(0x8000+offsetof(G, PlayerYSpdData)));
    sta(ABS(Player_Y_Speed));
    // if swimming flag disabled, branch
    lda(ABS(SwimmingFlag));
    BEQ(PJumpSnd);
    // load swim/goomba stomp sound into
    lda(IMM(Sfx_EnemyStomp));
    // square 1's sfx queue
    sta(ABS(Square1SoundQueue));
    lda(ABS(Player_Y_Position));
    // check vertical low byte of player position
    cmp(IMM(0x14));
    // if below a certain point, branch
    BCS(X_Physics);
    // otherwise reset player's vertical speed
    lda(IMM(0x0));
    // and jump to something else to keep player
    sta(ABS(Player_Y_Speed));
    // from swimming above water level
    JMP(X_Physics);
    JMP(PJumpSnd);
}
void PJumpSnd() {
    _debug("PJumpSnd", __FILE__, __LINE__);
    // load big mario's jump sound by default
    lda(IMM(Sfx_BigJump));
    // is mario big?
    ldy(ABS(PlayerSize));
    BEQ(SJumpSnd);
    // if not, load small mario's jump sound
    lda(IMM(Sfx_SmallJump));
    JMP(SJumpSnd);
}
void SJumpSnd() {
    _debug("SJumpSnd", __FILE__, __LINE__);
    // store appropriate jump sound in square 1 sfx queue
    sta(ABS(Square1SoundQueue));
    JMP(X_Physics);
}
void X_Physics() {
    _debug("X_Physics", __FILE__, __LINE__);
    ldy(IMM(0x0));
    // init value here
    sty(ABS(0x0));
    // if mario is on the ground, branch
    lda(ABS(Player_State));
    BEQ(ProcPRun);
    // check something that seems to be related
    lda(ABS(Player_XSpeedAbsolute));
    // to mario's speed
    cmp(IMM(0x19));
    // if =>$19 branch here
    BCS(GetXPhy);
    // if not branch elsewhere
    BCC(ChkRFast);
    JMP(ProcPRun);
}
void ProcPRun() {
    _debug("ProcPRun", __FILE__, __LINE__);
    // if mario on the ground, increment Y
    iny();
    // check area type
    lda(ABS(AreaType));
    // if water type, branch
    BEQ(ChkRFast);
    // decrement Y by default for non-water type area
    dey();
    // get left/right controller bits
    lda(ABS(Left_Right_Buttons));
    // check against moving direction
    cmp(ABS(Player_MovingDir));
    // if controller bits <> moving direction, skip this part
    BNE(ChkRFast);
    // check for b button pressed
    lda(ABS(A_B_Buttons));
    anda(IMM(B_Button));
    // if pressed, skip ahead to set timer
    BNE(SetRTmr);
    // check for running timer set
    lda(ABS(RunningTimer));
    // if set, branch
    BNE(GetXPhy);
    JMP(ChkRFast);
}
void ChkRFast() {
    _debug("ChkRFast", __FILE__, __LINE__);
    // if running timer not set or level type is water,
    iny();
    // increment Y again and temp variable in memory
    inc(ABS(0x0));
    lda(ABS(RunningSpeed));
    // if running speed set here, branch
    BNE(FastXSp);
    lda(ABS(Player_XSpeedAbsolute));
    // otherwise check player's walking/running speed
    cmp(IMM(0x21));
    // if less than a certain amount, branch ahead
    BCC(GetXPhy);
    JMP(FastXSp);
}
void FastXSp() {
    _debug("FastXSp", __FILE__, __LINE__);
    // if running speed set or speed => $21 increment $00
    inc(ABS(0x0));
    // and jump ahead
    JMP(GetXPhy);
    JMP(SetRTmr);
}
void SetRTmr() {
    _debug("SetRTmr", __FILE__, __LINE__);
    // if b button pressed, set running timer
    lda(IMM(0xa));
    sta(ABS(RunningTimer));
    JMP(GetXPhy);
}
void GetXPhy() {
    _debug("GetXPhy", __FILE__, __LINE__);
    // get maximum speed to the left
    lda(ABSY(0x8000+offsetof(G, MaxLeftXSpdData)));
    sta(ABS(MaximumLeftSpeed));
    // check for specific routine running
    lda(ABS(GameEngineSubroutine));
    // (player entrance)
    cmp(IMM(0x7));
    // if not running, skip and use old value of Y
    BNE(GetXPhy2);
    // otherwise set Y to 3
    ldy(IMM(0x3));
    JMP(GetXPhy2);
}
void GetXPhy2() {
    _debug("GetXPhy2", __FILE__, __LINE__);
    // get maximum speed to the right
    lda(ABSY(0x8000+offsetof(G, MaxRightXSpdData)));
    sta(ABS(MaximumRightSpeed));
    // get other value in memory
    ldy(ABS(0x0));
    // get value using value in memory as offset
    lda(ABSY(0x8000+offsetof(G, FrictionData)));
    sta(ABS(FrictionAdderLow));
    lda(IMM(0x0));
    // init something here
    sta(ABS(FrictionAdderHigh));
    lda(ABS(PlayerFacingDir));
    // check facing direction against moving direction
    cmp(ABS(Player_MovingDir));
    // if the same, branch to leave
    BEQ(ExitPhy);
    // otherwise shift d7 of friction adder low into carry
    asl(ABS(FrictionAdderLow));
    // then rotate carry onto d0 of friction adder high
    rol(ABS(FrictionAdderHigh));
    JMP(ExitPhy);
}
void ExitPhy() {
    _debug("ExitPhy", __FILE__, __LINE__);
    // and then leave
    return;
}
void GetPlayerAnimSpeed() {
    _debug("GetPlayerAnimSpeed", __FILE__, __LINE__);
    // initialize offset in Y
    ldy(IMM(0x0));
    // check player's walking/running speed
    lda(ABS(Player_XSpeedAbsolute));
    // against preset amount
    cmp(IMM(0x1c));
    // if greater than a certain amount, branch ahead
    BCS(SetRunSpd);
    // otherwise increment Y
    iny();
    // compare against lower amount
    cmp(IMM(0xe));
    // if greater than this but not greater than first, skip increment
    BCS(ChkSkid);
    // otherwise increment Y again
    iny();
    JMP(ChkSkid);
}
void ChkSkid() {
    _debug("ChkSkid", __FILE__, __LINE__);
    // get controller bits
    lda(ABS(SavedJoypadBits));
    // mask out A button
    anda(IMM(0b1111111));
    // if no other buttons pressed, branch ahead of all this
    BEQ(SetAnimSpd);
    // mask out all others except left and right
    anda(IMM(0x3));
    // check against moving direction
    cmp(ABS(Player_MovingDir));
    // if left/right controller bits <> moving direction, branch
    BNE(ProcSkid);
    // otherwise set zero value here
    lda(IMM(0x0));
    JMP(SetRunSpd);
}
void SetRunSpd() {
    _debug("SetRunSpd", __FILE__, __LINE__);
    // store zero or running speed here
    sta(ABS(RunningSpeed));
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}
void ProcSkid() {
    _debug("ProcSkid", __FILE__, __LINE__);
    // check player's walking/running speed
    lda(ABS(Player_XSpeedAbsolute));
    // against one last amount
    cmp(IMM(0xb));
    // if greater than this amount, branch
    BCS(SetAnimSpd);
    lda(ABS(PlayerFacingDir));
    // otherwise use facing direction to set moving direction
    sta(ABS(Player_MovingDir));
    lda(IMM(0x0));
    // nullify player's horizontal speed
    sta(ABS(Player_X_Speed));
    // and dummy variable for player
    sta(ABS(Player_X_MoveForce));
    JMP(SetAnimSpd);
}
void SetAnimSpd() {
    _debug("SetAnimSpd", __FILE__, __LINE__);
    // get animation timer setting using Y as offset
    lda(ABSY(0x8000+offsetof(G, PlayerAnimTmrData)));
    sta(ABS(PlayerAnimTimerSet));
    return;
}
void ImposeFriction() {
    _debug("ImposeFriction", __FILE__, __LINE__);
    // perform AND between left/right controller bits and collision flag
    anda(ABS(Player_CollisionBits));
    // then compare to zero (this instruction is redundant)
    cmp(IMM(0x0));
    // if any bits set, branch to next part
    BNE(JoypFrict);
    lda(ABS(Player_X_Speed));
    // if player has no horizontal speed, branch ahead to last part
    BEQ(SetAbsSpd);
    // if player moving to the right, branch to slow
    BPL(RghtFrict);
    // otherwise logic dictates player moving left, branch to slow
    BMI(LeftFrict);
    JMP(JoypFrict);
}
void JoypFrict() {
    _debug("JoypFrict", __FILE__, __LINE__);
    // put right controller bit into carry
    lsr();
    // if left button pressed, carry = 0, thus branch
    BCC(RghtFrict);
    JMP(LeftFrict);
}
void LeftFrict() {
    _debug("LeftFrict", __FILE__, __LINE__);
    // load value set here
    lda(ABS(Player_X_MoveForce));
    clc();
    // add to it another value set here
    adc(ABS(FrictionAdderLow));
    // store here
    sta(ABS(Player_X_MoveForce));
    lda(ABS(Player_X_Speed));
    // add value plus carry to horizontal speed
    adc(ABS(FrictionAdderHigh));
    // set as new horizontal speed
    sta(ABS(Player_X_Speed));
    // compare against maximum value for right movement
    cmp(ABS(MaximumRightSpeed));
    // if horizontal speed greater negatively, branch
    BMI(XSpdSign);
    // otherwise set preset value as horizontal speed
    lda(ABS(MaximumRightSpeed));
    // thus slowing the player's left movement down
    sta(ABS(Player_X_Speed));
    // skip to the end
    JMP(SetAbsSpd);
    JMP(RghtFrict);
}
void RghtFrict() {
    _debug("RghtFrict", __FILE__, __LINE__);
    // load value set here
    lda(ABS(Player_X_MoveForce));
    sec();
    // subtract from it another value set here
    sbc(ABS(FrictionAdderLow));
    // store here
    sta(ABS(Player_X_MoveForce));
    lda(ABS(Player_X_Speed));
    // subtract value plus borrow from horizontal speed
    sbc(ABS(FrictionAdderHigh));
    // set as new horizontal speed
    sta(ABS(Player_X_Speed));
    // compare against maximum value for left movement
    cmp(ABS(MaximumLeftSpeed));
    // if horizontal speed greater positively, branch
    BPL(XSpdSign);
    // otherwise set preset value as horizontal speed
    lda(ABS(MaximumLeftSpeed));
    // thus slowing the player's right movement down
    sta(ABS(Player_X_Speed));
    JMP(XSpdSign);
}
void XSpdSign() {
    _debug("XSpdSign", __FILE__, __LINE__);
    // if player not moving or moving to the right,
    cmp(IMM(0x0));
    // branch and leave horizontal speed value unmodified
    BPL(SetAbsSpd);
    eor(IMM(0xff));
    // otherwise get two's compliment to get absolute
    clc();
    // unsigned walking/running speed
    adc(IMM(0x1));
    JMP(SetAbsSpd);
}
void SetAbsSpd() {
    _debug("SetAbsSpd", __FILE__, __LINE__);
    // store walking/running speed here and leave
    sta(ABS(Player_XSpeedAbsolute));
    return;
}
// $00 - used to store downward movement force in FireballObjCore
// $02 - used to store maximum vertical speed in FireballObjCore
// $07 - used to store pseudorandom bit in BubbleCheck
void ProcFireball_Bubble() {
    _debug("ProcFireball_Bubble", __FILE__, __LINE__);
    // check player's status
    lda(ABS(PlayerStatus));
    cmp(IMM(0x2));
    // if not fiery, branch
    BCC(ProcAirBubbles);
    lda(ABS(A_B_Buttons));
    // check for b button pressed
    anda(IMM(B_Button));
    // branch if not pressed
    BEQ(ProcFireballs);
    anda(ABS(PreviousA_B_Buttons));
    // if button pressed in previous frame, branch
    BNE(ProcFireballs);
    // load fireball counter
    lda(ABS(FireballCounter));
    // get LSB and use as offset for buffer
    anda(IMM(0b1));
    tax();
    // load fireball state
    lda(ABSX(Fireball_State));
    // if not inactive, branch
    BNE(ProcFireballs);
    // if player too high or too low, branch
    ldy(ABS(Player_Y_HighPos));
    dey();
    BNE(ProcFireballs);
    // if player crouching, branch
    lda(ABS(CrouchingFlag));
    BNE(ProcFireballs);
    // if player's state = climbing, branch
    lda(ABS(Player_State));
    cmp(IMM(0x3));
    BEQ(ProcFireballs);
    // play fireball sound effect
    lda(IMM(Sfx_Fireball));
    sta(ABS(Square1SoundQueue));
    // load state
    lda(IMM(0x2));
    sta(ABSX(Fireball_State));
    // copy animation frame timer setting
    ldy(ABS(PlayerAnimTimerSet));
    // into fireball throwing timer
    sty(ABS(FireballThrowingTimer));
    dey();
    // decrement and store in player's animation timer
    sty(ABS(PlayerAnimTimer));
    // increment fireball counter
    inc(ABS(FireballCounter));
    JMP(ProcFireballs);
}
void ProcFireballs() {
    _debug("ProcFireballs", __FILE__, __LINE__);
    ldx(IMM(0x0));
    // process first fireball object
    JSR(FireballObjCore);
    ldx(IMM(0x1));
    // process second fireball object, then do air bubbles
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}
void ProcAirBubbles() {
    _debug("ProcAirBubbles", __FILE__, __LINE__);
    // if not water type level, skip the rest of this
    lda(ABS(AreaType));
    BNE(BublExit);
    // otherwise load counter and use as offset
    ldx(IMM(0x2));
    JMP(BublLoop);
}
void BublLoop() {
    _debug("BublLoop", __FILE__, __LINE__);
    // store offset
    stx(ABS(ObjectOffset));
    // check timers and coordinates, create air bubble
    JSR(BubbleCheck);
    // get relative coordinates
    JSR(RelativeBubblePosition);
    // get offscreen information
    JSR(GetBubbleOffscreenBits);
    // draw the air bubble
    JSR(DrawBubble);
    dex();
    // do this until all three are handled
    BPL(BublLoop);
    JMP(BublExit);
}
void BublExit() {
    _debug("BublExit", __FILE__, __LINE__);
    // then leave
    return;
}
void FireballObjCore() {
    _debug("FireballObjCore", __FILE__, __LINE__);
    // store offset as current object
    stx(ABS(ObjectOffset));
    // check for d7 = 1
    lda(ABSX(Fireball_State));
    asl();
    // if so, branch to get relative coordinates and draw explosion
    BCS(FireballExplosion);
    // if fireball inactive, branch to leave
    ldy(ABSX(Fireball_State));
    BEQ(NoFBall);
    // if fireball state set to 1, skip this part and just run it
    dey();
    BEQ(RunFB);
    // get player's horizontal position
    lda(ABS(Player_X_Position));
    // add four pixels and store as fireball's horizontal position
    adc(IMM(0x4));
    sta(ABSX(Fireball_X_Position));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // add carry and store as fireball's page location
    adc(IMM(0x0));
    sta(ABSX(Fireball_PageLoc));
    // get player's vertical position and store
    lda(ABS(Player_Y_Position));
    sta(ABSX(Fireball_Y_Position));
    // set high byte of vertical position
    lda(IMM(0x1));
    sta(ABSX(Fireball_Y_HighPos));
    // get player's facing direction
    ldy(ABS(PlayerFacingDir));
    // decrement to use as offset here
    dey();
    // set horizontal speed of fireball accordingly
    lda(ABSY(0x8000+offsetof(G, FireballXSpdData)));
    sta(ABSX(Fireball_X_Speed));
    // set vertical speed of fireball
    lda(IMM(0x4));
    sta(ABSX(Fireball_Y_Speed));
    lda(IMM(0x7));
    // set bounding box size control for fireball
    sta(ABSX(Fireball_BoundBoxCtrl));
    // decrement state to 1 to skip this part from now on
    dec(ABSX(Fireball_State));
    JMP(RunFB);
}
void RunFB() {
    _debug("RunFB", __FILE__, __LINE__);
    // add 7 to offset to use
    txa();
    // as fireball offset for next routines
    clc();
    adc(IMM(0x7));
    tax();
    // set downward movement force here
    lda(IMM(0x50));
    sta(ABS(0x0));
    // set maximum speed here
    lda(IMM(0x3));
    sta(ABS(0x2));
    lda(IMM(0x0));
    // do sub here to impose gravity on fireball and move vertically
    JSR(ImposeGravity);
    // do another sub to move it horizontally
    JSR(MoveObjectHorizontally);
    // return fireball offset to X
    ldx(ABS(ObjectOffset));
    // get relative coordinates
    JSR(RelativeFireballPosition);
    // get offscreen information
    JSR(GetFireballOffscreenBits);
    // get bounding box coordinates
    JSR(GetFireballBoundBox);
    // do fireball to background collision detection
    JSR(FireballBGCollision);
    // get fireball offscreen bits
    lda(ABS(FBall_OffscreenBits));
    // mask out certain bits
    anda(IMM(0b11001100));
    // if any bits still set, branch to kill fireball
    BNE(EraseFB);
    // do fireball to enemy collision detection and deal with collisions
    JSR(FireballEnemyCollision);
    // draw fireball appropriately and leave
    JMP(DrawFireball);
    JMP(EraseFB);
}
void EraseFB() {
    _debug("EraseFB", __FILE__, __LINE__);
    // erase fireball state
    lda(IMM(0x0));
    sta(ABSX(Fireball_State));
    JMP(NoFBall);
}
void NoFBall() {
    _debug("NoFBall", __FILE__, __LINE__);
    // leave
    return;
}
void FireballExplosion() {
    _debug("FireballExplosion", __FILE__, __LINE__);
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
    JMP(BubbleCheck);
}
void BubbleCheck() {
    _debug("BubbleCheck", __FILE__, __LINE__);
    // get part of LSFR
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    anda(IMM(0x1));
    // store pseudorandom bit here
    sta(ABS(0x7));
    // get vertical coordinate for air bubble
    lda(ABSX(Bubble_Y_Position));
    // if offscreen coordinate not set,
    cmp(IMM(0xf8));
    // branch to move air bubble
    BNE(MoveBubl);
    // if air bubble timer not expired,
    lda(ABS(AirBubbleTimer));
    // branch to leave, otherwise create new air bubble
    BNE(ExitBubl);
    JMP(SetupBubble);
}
void SetupBubble() {
    _debug("SetupBubble", __FILE__, __LINE__);
    // load default value here
    ldy(IMM(0x0));
    // get player's facing direction
    lda(ABS(PlayerFacingDir));
    // move d0 to carry
    lsr();
    // branch to use default value if facing left
    BCC(PosBubl);
    // otherwise load alternate value here
    ldy(IMM(0x8));
    JMP(PosBubl);
}
void PosBubl() {
    _debug("PosBubl", __FILE__, __LINE__);
    // use value loaded as adder
    tya();
    // add to player's horizontal position
    adc(ABS(Player_X_Position));
    // save as horizontal position for airbubble
    sta(ABSX(Bubble_X_Position));
    lda(ABS(Player_PageLoc));
    // add carry to player's page location
    adc(IMM(0x0));
    // save as page location for airbubble
    sta(ABSX(Bubble_PageLoc));
    lda(ABS(Player_Y_Position));
    // add eight pixels to player's vertical position
    clc();
    adc(IMM(0x8));
    // save as vertical position for air bubble
    sta(ABSX(Bubble_Y_Position));
    lda(IMM(0x1));
    // set vertical high byte for air bubble
    sta(ABSX(Bubble_Y_HighPos));
    // get pseudorandom bit, use as offset
    ldy(ABS(0x7));
    // get data for air bubble timer
    lda(ABSY(0x8000+offsetof(G, BubbleTimerData)));
    // set air bubble timer
    sta(ABS(AirBubbleTimer));
    JMP(MoveBubl);
}
void MoveBubl() {
    _debug("MoveBubl", __FILE__, __LINE__);
    // get pseudorandom bit again, use as offset
    ldy(ABS(0x7));
    lda(ABSX(Bubble_YMF_Dummy));
    // subtract pseudorandom amount from dummy variable
    sec();
    sbc(ABSY(0x8000+offsetof(G, Bubble_MForceData)));
    // save dummy variable
    sta(ABSX(Bubble_YMF_Dummy));
    lda(ABSX(Bubble_Y_Position));
    // subtract borrow from airbubble's vertical coordinate
    sbc(IMM(0x0));
    // if below the status bar,
    cmp(IMM(0x20));
    // branch to go ahead and use to move air bubble upwards
    BCS(Y_Bubl);
    // otherwise set offscreen coordinate
    lda(IMM(0xf8));
    JMP(Y_Bubl);
}
void Y_Bubl() {
    _debug("Y_Bubl", __FILE__, __LINE__);
    // store as new vertical coordinate for air bubble
    sta(ABSX(Bubble_Y_Position));
    JMP(ExitBubl);
}
void ExitBubl() {
    _debug("ExitBubl", __FILE__, __LINE__);
    // leave
    return;
}
void RunGameTimer() {
    _debug("RunGameTimer", __FILE__, __LINE__);
    // get primary mode of operation
    lda(ABS(OperMode));
    // branch to leave if in title screen mode
    BEQ(ExGTimer);
    lda(ABS(GameEngineSubroutine));
    // if routine number less than eight running,
    cmp(IMM(0x8));
    // branch to leave
    BCC(ExGTimer);
    // if running death routine,
    cmp(IMM(0xb));
    // branch to leave
    BEQ(ExGTimer);
    lda(ABS(Player_Y_HighPos));
    // if player below the screen,
    cmp(IMM(0x2));
    // branch to leave regardless of level type
    BCS(ExGTimer);
    // if game timer control not yet expired,
    lda(ABS(GameTimerCtrlTimer));
    // branch to leave
    BNE(ExGTimer);
    lda(ABS(GameTimerDisplay));
    // otherwise check game timer digits
    ora(ABS(((GameTimerDisplay) + (1))));
    ora(ABS(((GameTimerDisplay) + (2))));
    // if game timer digits at 000, branch to time-up code
    BEQ(TimeUpOn);
    // otherwise check first digit
    ldy(ABS(GameTimerDisplay));
    // if first digit not on 1,
    dey();
    // branch to reset game timer control
    BNE(ResGTCtrl);
    // otherwise check second and third digits
    lda(ABS(((GameTimerDisplay) + (1))));
    ora(ABS(((GameTimerDisplay) + (2))));
    // if timer not at 100, branch to reset game timer control
    BNE(ResGTCtrl);
    lda(IMM(TimeRunningOutMusic));
    // otherwise load time running out music
    sta(ABS(EventMusicQueue));
    JMP(ResGTCtrl);
}
void ResGTCtrl() {
    _debug("ResGTCtrl", __FILE__, __LINE__);
    // reset game timer control
    lda(IMM(0x18));
    sta(ABS(GameTimerCtrlTimer));
    // set offset for last digit
    ldy(IMM(0x23));
    // set value to decrement game timer digit
    lda(IMM(0xff));
    sta(ABS(((DigitModifier) + (5))));
    // do sub to decrement game timer slowly
    JSR(DigitsMathRoutine);
    // set status nybbles to update game timer display
    lda(IMM(0xa4));
    // do sub to update the display
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}
void TimeUpOn() {
    _debug("TimeUpOn", __FILE__, __LINE__);
    // init player status (note A will always be zero here)
    sta(ABS(PlayerStatus));
    // do sub to kill the player (note player is small here)
    JSR(ForceInjury);
    // set game timer expiration flag
    inc(ABS(GameTimerExpiredFlag));
    JMP(ExGTimer);
}
void ExGTimer() {
    _debug("ExGTimer", __FILE__, __LINE__);
    // leave
    return;
}
void WarpZoneObject() {
    _debug("WarpZoneObject", __FILE__, __LINE__);
    // check for scroll lock flag
    lda(ABS(ScrollLock));
    // branch if not set to leave
    BEQ(ExGTimer);
    // check to see if player's vertical coordinate has
    lda(ABS(Player_Y_Position));
    // same bits set as in vertical high byte (why?)
    anda(ABS(Player_Y_HighPos));
    // if so, branch to leave
    BNE(ExGTimer);
    // otherwise nullify scroll lock flag
    sta(ABS(ScrollLock));
    // increment warp zone flag to make warp pipes for warp zone
    inc(ABS(WarpZoneControl));
    // kill this object
    JMP(EraseEnemyObject);
    JMP(ProcessWhirlpools);
}
// $00 - used in WhirlpoolActivate to store whirlpool length / 2, page location of center of whirlpool
// and also to store movement force exerted on player
// $01 - used in ProcessWhirlpools to store page location of right extent of whirlpool
// and in WhirlpoolActivate to store center of whirlpool
// $02 - used in ProcessWhirlpools to store right extent of whirlpool and in
// WhirlpoolActivate to store maximum vertical speed
void ProcessWhirlpools() {
    _debug("ProcessWhirlpools", __FILE__, __LINE__);
    // check for water type level
    lda(ABS(AreaType));
    // branch to leave if not found
    BNE(ExitWh);
    // otherwise initialize whirlpool flag
    sta(ABS(Whirlpool_Flag));
    // if master timer control set,
    lda(ABS(TimerControl));
    // branch to leave
    BNE(ExitWh);
    // otherwise start with last whirlpool data
    ldy(IMM(0x4));
    JMP(WhLoop);
}
void WhLoop() {
    _debug("WhLoop", __FILE__, __LINE__);
    // get left extent of whirlpool
    lda(ABSY(Whirlpool_LeftExtent));
    clc();
    // add length of whirlpool
    adc(ABSY(Whirlpool_Length));
    // store result as right extent here
    sta(ABS(0x2));
    // get page location
    lda(ABSY(Whirlpool_PageLoc));
    // if none or page 0, branch to get next data
    BEQ(NextWh);
    // add carry
    adc(IMM(0x0));
    // store result as page location of right extent here
    sta(ABS(0x1));
    // get player's horizontal position
    lda(ABS(Player_X_Position));
    sec();
    // subtract left extent
    sbc(ABSY(Whirlpool_LeftExtent));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // subtract borrow
    sbc(ABSY(Whirlpool_PageLoc));
    // if player too far left, branch to get next data
    BMI(NextWh);
    // otherwise get right extent
    lda(ABS(0x2));
    sec();
    // subtract player's horizontal coordinate
    sbc(ABS(Player_X_Position));
    // get right extent's page location
    lda(ABS(0x1));
    // subtract borrow
    sbc(ABS(Player_PageLoc));
    // if player within right extent, branch to whirlpool code
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}
void NextWh() {
    _debug("NextWh", __FILE__, __LINE__);
    // move onto next whirlpool data
    dey();
    // do this until all whirlpools are checked
    BPL(WhLoop);
    JMP(ExitWh);
}
void ExitWh() {
    _debug("ExitWh", __FILE__, __LINE__);
    // leave
    return;
}
void WhirlpoolActivate() {
    _debug("WhirlpoolActivate", __FILE__, __LINE__);
    // get length of whirlpool
    lda(ABSY(Whirlpool_Length));
    // divide by 2
    lsr();
    // save here
    sta(ABS(0x0));
    // get left extent of whirlpool
    lda(ABSY(Whirlpool_LeftExtent));
    clc();
    // add length divided by 2
    adc(ABS(0x0));
    // save as center of whirlpool
    sta(ABS(0x1));
    // get page location
    lda(ABSY(Whirlpool_PageLoc));
    // add carry
    adc(IMM(0x0));
    // save as page location of whirlpool center
    sta(ABS(0x0));
    // get frame counter
    lda(ABS(FrameCounter));
    // shift d0 into carry (to run on every other frame)
    lsr();
    // if d0 not set, branch to last part of code
    BCC(WhPull);
    // get center
    lda(ABS(0x1));
    sec();
    // subtract player's horizontal coordinate
    sbc(ABS(Player_X_Position));
    // get page location of center
    lda(ABS(0x0));
    // subtract borrow
    sbc(ABS(Player_PageLoc));
    // if player to the left of center, branch
    BPL(LeftWh);
    // otherwise slowly pull player left, towards the center
    lda(ABS(Player_X_Position));
    sec();
    // subtract one pixel
    sbc(IMM(0x1));
    // set player's new horizontal coordinate
    sta(ABS(Player_X_Position));
    lda(ABS(Player_PageLoc));
    // subtract borrow
    sbc(IMM(0x0));
    // jump to set player's new page location
    JMP(SetPWh);
    JMP(LeftWh);
}
void LeftWh() {
    _debug("LeftWh", __FILE__, __LINE__);
    // get player's collision bits
    lda(ABS(Player_CollisionBits));
    // shift d0 into carry
    lsr();
    // if d0 not set, branch
    BCC(WhPull);
    // otherwise slowly pull player right, towards the center
    lda(ABS(Player_X_Position));
    clc();
    // add one pixel
    adc(IMM(0x1));
    // set player's new horizontal coordinate
    sta(ABS(Player_X_Position));
    lda(ABS(Player_PageLoc));
    // add carry
    adc(IMM(0x0));
    JMP(SetPWh);
}
void SetPWh() {
    _debug("SetPWh", __FILE__, __LINE__);
    // set player's new page location
    sta(ABS(Player_PageLoc));
    JMP(WhPull);
}
void WhPull() {
    _debug("WhPull", __FILE__, __LINE__);
    lda(IMM(0x10));
    // set vertical movement force
    sta(ABS(0x0));
    lda(IMM(0x1));
    // set whirlpool flag to be used later
    sta(ABS(Whirlpool_Flag));
    // also set maximum vertical speed
    sta(ABS(0x2));
    lsr();
    // set X for player offset
    tax();
    // jump to put whirlpool effect on player vertically, do not return
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}
void FlagpoleRoutine() {
    _debug("FlagpoleRoutine", __FILE__, __LINE__);
    // set enemy object offset
    ldx(IMM(0x5));
    // to special use slot
    stx(ABS(ObjectOffset));
    lda(ABSX(Enemy_ID));
    // if flagpole flag not found,
    cmp(IMM(FlagpoleFlagObject));
    // branch to leave
    BNE(ExitFlagP);
    lda(ABS(GameEngineSubroutine));
    // if flagpole slide routine not running,
    cmp(IMM(0x4));
    // branch to near the end of code
    BNE(SkipScore);
    lda(ABS(Player_State));
    // if player state not climbing,
    cmp(IMM(0x3));
    // branch to near the end of code
    BNE(SkipScore);
    // check flagpole flag's vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // if flagpole flag down to a certain point,
    cmp(IMM(0xaa));
    // branch to end the level
    BCS(GiveFPScr);
    // check player's vertical coordinate
    lda(ABS(Player_Y_Position));
    // if player down to a certain point,
    cmp(IMM(0xa2));
    // branch to end the level
    BCS(GiveFPScr);
    lda(ABSX(Enemy_YMF_Dummy));
    // add movement amount to dummy variable
    adc(IMM(0xff));
    // save dummy variable
    sta(ABSX(Enemy_YMF_Dummy));
    // get flag's vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // add 1 plus carry to move flag, and
    adc(IMM(0x1));
    // store vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    lda(ABS(FlagpoleFNum_YMFDummy));
    // subtract movement amount from dummy variable
    sec();
    sbc(IMM(0xff));
    // save dummy variable
    sta(ABS(FlagpoleFNum_YMFDummy));
    lda(ABS(FlagpoleFNum_Y_Pos));
    // subtract one plus borrow to move floatey number,
    sbc(IMM(0x1));
    // and store vertical coordinate here
    sta(ABS(FlagpoleFNum_Y_Pos));
    JMP(SkipScore);
}
void SkipScore() {
    _debug("SkipScore", __FILE__, __LINE__);
    // jump to skip ahead and draw flag and floatey number
    JMP(FPGfx);
    JMP(GiveFPScr);
}
void GiveFPScr() {
    _debug("GiveFPScr", __FILE__, __LINE__);
    // get score offset from earlier (when player touched flagpole)
    ldy(ABS(FlagpoleScore));
    // get amount to award player points
    lda(ABSY(0x8000+offsetof(G, FlagpoleScoreMods)));
    // get digit with which to award points
    ldx(ABSY(0x8000+offsetof(G, FlagpoleScoreDigits)));
    // store in digit modifier
    sta(ABSX(DigitModifier));
    // do sub to award player points depending on height of collision
    JSR(AddToScore);
    lda(IMM(0x5));
    // set to run end-of-level subroutine on next frame
    sta(ABS(GameEngineSubroutine));
    JMP(FPGfx);
}
void FPGfx() {
    _debug("FPGfx", __FILE__, __LINE__);
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // get relative coordinates
    JSR(RelativeEnemyPosition);
    // draw flagpole flag and floatey number
    JSR(FlagpoleGfxHandler);
    JMP(ExitFlagP);
}
void ExitFlagP() {
    _debug("ExitFlagP", __FILE__, __LINE__);
    return;
}
void JumpspringHandler() {
    _debug("JumpspringHandler", __FILE__, __LINE__);
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // check master timer control
    lda(ABS(TimerControl));
    // branch to last section if set
    BNE(DrawJSpr);
    // check jumpspring frame control
    lda(ABS(JumpspringAnimCtrl));
    // branch to last section if not set
    BEQ(DrawJSpr);
    tay();
    // subtract one from frame control,
    dey();
    // the only way a poor nmos 6502 can
    tya();
    // mask out all but d1, original value still in Y
    anda(IMM(0b10));
    // if set, branch to move player up
    BNE(DownJSpr);
    inc(ABS(Player_Y_Position));
    // move player's vertical position down two pixels
    inc(ABS(Player_Y_Position));
    // skip to next part
    JMP(PosJSpr);
    JMP(DownJSpr);
}
void DownJSpr() {
    _debug("DownJSpr", __FILE__, __LINE__);
    // move player's vertical position up two pixels
    dec(ABS(Player_Y_Position));
    dec(ABS(Player_Y_Position));
    JMP(PosJSpr);
}
void PosJSpr() {
    _debug("PosJSpr", __FILE__, __LINE__);
    // get permanent vertical position
    lda(ABSX(Jumpspring_FixedYPos));
    clc();
    // add value using frame control as offset
    adc(ABSY(0x8000+offsetof(G, Jumpspring_Y_PosData)));
    // store as new vertical position
    sta(ABSX(Enemy_Y_Position));
    // check frame control offset (second frame is $00)
    cpy(IMM(0x1));
    // if offset not yet at third frame ($01), skip to next part
    BCC(BounceJS);
    lda(ABS(A_B_Buttons));
    // check saved controller bits for A button press
    anda(IMM(A_Button));
    // skip to next part if A not pressed
    BEQ(BounceJS);
    // check for A button pressed in previous frame
    anda(ABS(PreviousA_B_Buttons));
    // skip to next part if so
    BNE(BounceJS);
    lda(IMM(0xf4));
    // otherwise write new jumpspring force here
    sta(ABS(JumpspringForce));
    JMP(BounceJS);
}
void BounceJS() {
    _debug("BounceJS", __FILE__, __LINE__);
    // check frame control offset again
    cpy(IMM(0x3));
    // skip to last part if not yet at fifth frame ($03)
    BNE(DrawJSpr);
    lda(ABS(JumpspringForce));
    // store jumpspring force as player's new vertical speed
    sta(ABS(Player_Y_Speed));
    lda(IMM(0x0));
    // initialize jumpspring frame control
    sta(ABS(JumpspringAnimCtrl));
    JMP(DrawJSpr);
}
void DrawJSpr() {
    _debug("DrawJSpr", __FILE__, __LINE__);
    // get jumpspring's relative coordinates
    JSR(RelativeEnemyPosition);
    // draw jumpspring
    JSR(EnemyGfxHandler);
    // check to see if we need to kill it
    JSR(OffscreenBoundsCheck);
    // if frame control at zero, don't bother
    lda(ABS(JumpspringAnimCtrl));
    // trying to animate it, just leave
    BEQ(ExJSpring);
    lda(ABS(JumpspringTimer));
    // if jumpspring timer not expired yet, leave
    BNE(ExJSpring);
    lda(IMM(0x4));
    // otherwise initialize jumpspring timer
    sta(ABS(JumpspringTimer));
    // increment frame control to animate jumpspring
    inc(ABS(JumpspringAnimCtrl));
    JMP(ExJSpring);
}
void ExJSpring() {
    _debug("ExJSpring", __FILE__, __LINE__);
    // leave
    return;
}
void Setup_Vine() {
    _debug("Setup_Vine", __FILE__, __LINE__);
    // load identifier for vine object
    lda(IMM(VineObject));
    // store in buffer
    sta(ABSX(Enemy_ID));
    lda(IMM(0x1));
    // set flag for enemy object buffer
    sta(ABSX(Enemy_Flag));
    lda(ABSY(Block_PageLoc));
    // copy page location from previous object
    sta(ABSX(Enemy_PageLoc));
    lda(ABSY(Block_X_Position));
    // copy horizontal coordinate from previous object
    sta(ABSX(Enemy_X_Position));
    lda(ABSY(Block_Y_Position));
    // copy vertical coordinate from previous object
    sta(ABSX(Enemy_Y_Position));
    // load vine flag/offset to next available vine slot
    ldy(ABS(VineFlagOffset));
    // if set at all, don't bother to store vertical
    BNE(NextVO);
    // otherwise store vertical coordinate here
    sta(ABS(VineStart_Y_Position));
    JMP(NextVO);
}
void NextVO() {
    _debug("NextVO", __FILE__, __LINE__);
    // store object offset to next available vine slot
    txa();
    // using vine flag as offset
    sta(ABSY(VineObjOffset));
    // increment vine flag offset
    inc(ABS(VineFlagOffset));
    lda(IMM(Sfx_GrowVine));
    // load vine grow sound
    sta(ABS(Square2SoundQueue));
    return;
}
void VineObjectHandler() {
    _debug("VineObjectHandler", __FILE__, __LINE__);
    // check enemy offset for special use slot
    cpx(IMM(0x5));
    // if not in last slot, branch to leave
    BNE(ExitVH);
    ldy(ABS(VineFlagOffset));
    // decrement vine flag in Y, use as offset
    dey();
    lda(ABS(VineHeight));
    // if vine has reached certain height,
    cmp(ABSY(0x8000+offsetof(G, VineHeightData)));
    // branch ahead to skip this part
    BEQ(RunVSubs);
    // get frame counter
    lda(ABS(FrameCounter));
    // shift d1 into carry
    lsr();
    lsr();
    // if d1 not set (2 frames every 4) skip this part
    BCC(RunVSubs);
    lda(ABS(((Enemy_Y_Position) + (5))));
    // subtract vertical position of vine
    sbc(IMM(0x1));
    // one pixel every frame it's time
    sta(ABS(((Enemy_Y_Position) + (5))));
    // increment vine height
    inc(ABS(VineHeight));
    JMP(RunVSubs);
}
void RunVSubs() {
    _debug("RunVSubs", __FILE__, __LINE__);
    // if vine still very small,
    lda(ABS(VineHeight));
    // branch to leave
    cmp(IMM(0x8));
    BCC(ExitVH);
    // get relative coordinates of vine,
    JSR(RelativeEnemyPosition);
    // and any offscreen bits
    JSR(GetEnemyOffscreenBits);
    // initialize offset used in draw vine sub
    ldy(IMM(0x0));
    JMP(VDrawLoop);
}
void VDrawLoop() {
    _debug("VDrawLoop", __FILE__, __LINE__);
    // draw vine
    JSR(DrawVine);
    // increment offset
    iny();
    // if offset in Y and offset here
    cpy(ABS(VineFlagOffset));
    // do not yet match, loop back to draw more vine
    BNE(VDrawLoop);
    lda(ABS(Enemy_OffscreenBits));
    // mask offscreen bits
    anda(IMM(0b1100));
    // if none of the saved offscreen bits set, skip ahead
    BEQ(WrCMTile);
    // otherwise decrement Y to get proper offset again
    dey();
    JMP(KillVine);
}
void KillVine() {
    _debug("KillVine", __FILE__, __LINE__);
    // get enemy object offset for this vine object
    ldx(ABSY(VineObjOffset));
    // kill this vine object
    JSR(EraseEnemyObject);
    // decrement Y
    dey();
    // if any vine objects left, loop back to kill it
    BPL(KillVine);
    // initialize vine flag/offset
    sta(ABS(VineFlagOffset));
    // initialize vine height
    sta(ABS(VineHeight));
    JMP(WrCMTile);
}
void WrCMTile() {
    _debug("WrCMTile", __FILE__, __LINE__);
    // check vine height
    lda(ABS(VineHeight));
    // if vine small (less than 32 pixels tall)
    cmp(IMM(0x20));
    // then branch ahead to leave
    BCC(ExitVH);
    // set offset in X to last enemy slot
    ldx(IMM(0x6));
    // set A to obtain horizontal in $04, but we don't care
    lda(IMM(0x1));
    // set Y to offset to get block at ($04, $10) of coordinates
    ldy(IMM(0x1b));
    // do a sub to get block buffer address set, return contents
    JSR(BlockBufferCollision);
    ldy(ABS(0x2));
    // if vertical high nybble offset beyond extent of
    cpy(IMM(0xd0));
    // current block buffer, branch to leave, do not write
    BCS(ExitVH);
    // otherwise check contents of block buffer at
    lda(INDY((0x6)));
    // current offset, if not empty, branch to leave
    BNE(ExitVH);
    lda(IMM(0x26));
    // otherwise, write climbing metatile to block buffer
    sta(INDY((0x6)));
    JMP(ExitVH);
}
void ExitVH() {
    _debug("ExitVH", __FILE__, __LINE__);
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void ProcessCannons() {
    _debug("ProcessCannons", __FILE__, __LINE__);
    // get area type
    lda(ABS(AreaType));
    // if water type area, branch to leave
    BEQ(ExCannon);
    ldx(IMM(0x2));
    JMP(ThreeSChk);
}
void ThreeSChk() {
    _debug("ThreeSChk", __FILE__, __LINE__);
    // start at third enemy slot
    stx(ABS(ObjectOffset));
    // check enemy buffer flag
    lda(ABSX(Enemy_Flag));
    // if set, branch to check enemy
    BNE(Chk_BB);
    // otherwise get part of LSFR
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // get secondary hard mode flag, use as offset
    ldy(ABS(SecondaryHardMode));
    // mask out bits of LSFR as decided by flag
    anda(ABSY(0x8000+offsetof(G, CannonBitmasks)));
    // check to see if lower nybble is above certain value
    cmp(IMM(0x6));
    // if so, branch to check enemy
    BCS(Chk_BB);
    // transfer masked contents of LSFR to Y as pseudorandom offset
    tay();
    // get page location
    lda(ABSY(Cannon_PageLoc));
    // if not set or on page 0, branch to check enemy
    BEQ(Chk_BB);
    // get cannon timer
    lda(ABSY(Cannon_Timer));
    // if expired, branch to fire cannon
    BEQ(FireCannon);
    // otherwise subtract borrow (note carry will always be clear here)
    sbc(IMM(0x0));
    // to count timer down
    sta(ABSY(Cannon_Timer));
    // then jump ahead to check enemy
    JMP(Chk_BB);
    JMP(FireCannon);
}
void FireCannon() {
    _debug("FireCannon", __FILE__, __LINE__);
    // if master timer control set,
    lda(ABS(TimerControl));
    // branch to check enemy
    BNE(Chk_BB);
    // otherwise we start creating one
    lda(IMM(0xe));
    // first, reset cannon timer
    sta(ABSY(Cannon_Timer));
    // get page location of cannon
    lda(ABSY(Cannon_PageLoc));
    // save as page location of bullet bill
    sta(ABSX(Enemy_PageLoc));
    // get horizontal coordinate of cannon
    lda(ABSY(Cannon_X_Position));
    // save as horizontal coordinate of bullet bill
    sta(ABSX(Enemy_X_Position));
    // get vertical coordinate of cannon
    lda(ABSY(Cannon_Y_Position));
    sec();
    // subtract eight pixels (because enemies are 24 pixels tall)
    sbc(IMM(0x8));
    // save as vertical coordinate of bullet bill
    sta(ABSX(Enemy_Y_Position));
    lda(IMM(0x1));
    // set vertical high byte of bullet bill
    sta(ABSX(Enemy_Y_HighPos));
    // set buffer flag
    sta(ABSX(Enemy_Flag));
    // shift right once to init A
    lsr();
    // then initialize enemy's state
    sta(ABSX(Enemy_State));
    lda(IMM(0x9));
    // set bounding box size control for bullet bill
    sta(ABSX(Enemy_BoundBoxCtrl));
    lda(IMM(BulletBill_CannonVar));
    // load identifier for bullet bill (cannon variant)
    sta(ABSX(Enemy_ID));
    // move onto next slot
    JMP(Next3Slt);
    JMP(Chk_BB);
}
void Chk_BB() {
    _debug("Chk_BB", __FILE__, __LINE__);
    // check enemy identifier for bullet bill (cannon variant)
    lda(ABSX(Enemy_ID));
    cmp(IMM(BulletBill_CannonVar));
    // if not found, branch to get next slot
    BNE(Next3Slt);
    // otherwise, check to see if it went offscreen
    JSR(OffscreenBoundsCheck);
    // check enemy buffer flag
    lda(ABSX(Enemy_Flag));
    // if not set, branch to get next slot
    BEQ(Next3Slt);
    // otherwise, get offscreen information
    JSR(GetEnemyOffscreenBits);
    // then do sub to handle bullet bill
    JSR(BulletBillHandler);
    JMP(Next3Slt);
}
void Next3Slt() {
    _debug("Next3Slt", __FILE__, __LINE__);
    // move onto next slot
    dex();
    // do this until first three slots are checked
    BPL(ThreeSChk);
    JMP(ExCannon);
}
void ExCannon() {
    _debug("ExCannon", __FILE__, __LINE__);
    // then leave
    return;
}
void BulletBillHandler() {
    _debug("BulletBillHandler", __FILE__, __LINE__);
    // if master timer control set,
    lda(ABS(TimerControl));
    // branch to run subroutines except movement sub
    BNE(RunBBSubs);
    lda(ABSX(Enemy_State));
    // if bullet bill's state set, branch to check defeated state
    BNE(ChkDSte);
    // otherwise load offscreen bits
    lda(ABS(Enemy_OffscreenBits));
    // mask out bits
    anda(IMM(0b1100));
    // check to see if all bits are set
    cmp(IMM(0b1100));
    // if so, branch to kill this object
    BEQ(KillBB);
    // set to move right by default
    ldy(IMM(0x1));
    // get horizontal difference between player and bullet bill
    JSR(PlayerEnemyDiff);
    // if enemy to the left of player, branch
    BMI(SetupBB);
    // otherwise increment to move left
    iny();
    JMP(SetupBB);
}
void SetupBB() {
    _debug("SetupBB", __FILE__, __LINE__);
    // set bullet bill's moving direction
    sty(ABSX(Enemy_MovingDir));
    // decrement to use as offset
    dey();
    // get horizontal speed based on moving direction
    lda(ABSY(0x8000+offsetof(G, BulletBillXSpdData)));
    // and store it
    sta(ABSX(Enemy_X_Speed));
    // get horizontal difference
    lda(ABS(0x0));
    // add 40 pixels
    adc(IMM(0x28));
    // if less than a certain amount, player is too close
    cmp(IMM(0x50));
    // to cannon either on left or right side, thus branch
    BCC(KillBB);
    lda(IMM(0x1));
    // otherwise set bullet bill's state
    sta(ABSX(Enemy_State));
    lda(IMM(0xa));
    // set enemy frame timer
    sta(ABSX(EnemyFrameTimer));
    lda(IMM(Sfx_Blast));
    // play fireworks/gunfire sound
    sta(ABS(Square2SoundQueue));
    JMP(ChkDSte);
}
void ChkDSte() {
    _debug("ChkDSte", __FILE__, __LINE__);
    // check enemy state for d5 set
    lda(ABSX(Enemy_State));
    anda(IMM(0b100000));
    // if not set, skip to move horizontally
    BEQ(BBFly);
    // otherwise do sub to move bullet bill vertically
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}
void BBFly() {
    _debug("BBFly", __FILE__, __LINE__);
    // do sub to move bullet bill horizontally
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}
void RunBBSubs() {
    _debug("RunBBSubs", __FILE__, __LINE__);
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // get relative coordinates
    JSR(RelativeEnemyPosition);
    // get bounding box coordinates
    JSR(GetEnemyBoundBox);
    // handle player to enemy collisions
    JSR(PlayerEnemyCollision);
    // draw the bullet bill and leave
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}
void KillBB() {
    _debug("KillBB", __FILE__, __LINE__);
    // kill bullet bill and leave
    JSR(EraseEnemyObject);
    return;
}
void SpawnHammerObj() {
    _debug("SpawnHammerObj", __FILE__, __LINE__);
    // get pseudorandom bits from
    lda(ABS(((PseudoRandomBitReg) + (1))));
    // second part of LSFR
    anda(IMM(0b111));
    // if any bits are set, branch and use as offset
    BNE(SetMOfs);
    lda(ABS(((PseudoRandomBitReg) + (1))));
    // get d3 from same part of LSFR
    anda(IMM(0b1000));
    JMP(SetMOfs);
}
void SetMOfs() {
    _debug("SetMOfs", __FILE__, __LINE__);
    // use either d3 or d2-d0 for offset here
    tay();
    // if any values loaded in
    lda(ABSY(Misc_State));
    // $2a-$32 where offset is then leave with carry clear
    BNE(NoHammer);
    // get offset of enemy slot to check using Y as offset
    ldx(ABSY(0x8000+offsetof(G, HammerEnemyOfsData)));
    // check enemy buffer flag at offset
    lda(ABSX(Enemy_Flag));
    // if buffer flag set, branch to leave with carry clear
    BNE(NoHammer);
    // get original enemy object offset
    ldx(ABS(ObjectOffset));
    txa();
    // save here
    sta(ABSY(HammerEnemyOffset));
    lda(IMM(0x90));
    // save hammer's state here
    sta(ABSY(Misc_State));
    lda(IMM(0x7));
    // set something else entirely, here
    sta(ABSY(Misc_BoundBoxCtrl));
    // return with carry set
    sec();
    return;
}
void NoHammer() {
    _debug("NoHammer", __FILE__, __LINE__);
    // get original enemy object offset
    ldx(ABS(ObjectOffset));
    // return with carry clear
    clc();
    return;
}
// $00 - used to set downward force
// $01 - used to set upward force (residual)
// $02 - used to set maximum speed
void ProcHammerObj() {
    _debug("ProcHammerObj", __FILE__, __LINE__);
    // if master timer control set
    lda(ABS(TimerControl));
    // skip all of this code and go to last subs at the end
    BNE(RunHSubs);
    // otherwise get hammer's state
    lda(ABSX(Misc_State));
    // mask out d7
    anda(IMM(0b1111111));
    // get enemy object offset that spawned this hammer
    ldy(ABSX(HammerEnemyOffset));
    // check hammer's state
    cmp(IMM(0x2));
    // if currently at 2, branch
    BEQ(SetHSpd);
    // if greater than 2, branch elsewhere
    BCS(SetHPos);
    txa();
    // add 13 bytes to use
    clc();
    // proper misc object
    adc(IMM(0xd));
    // return offset to X
    tax();
    lda(IMM(0x10));
    // set downward movement force
    sta(ABS(0x0));
    lda(IMM(0xf));
    // set upward movement force (not used)
    sta(ABS(0x1));
    lda(IMM(0x4));
    // set maximum vertical speed
    sta(ABS(0x2));
    // set A to impose gravity on hammer
    lda(IMM(0x0));
    // do sub to impose gravity on hammer and move vertically
    JSR(ImposeGravity);
    // do sub to move it horizontally
    JSR(MoveObjectHorizontally);
    // get original misc object offset
    ldx(ABS(ObjectOffset));
    // branch to essential subroutines
    JMP(RunAllH);
    JMP(SetHSpd);
}
void SetHSpd() {
    _debug("SetHSpd", __FILE__, __LINE__);
    lda(IMM(0xfe));
    // set hammer's vertical speed
    sta(ABSX(Misc_Y_Speed));
    // get enemy object state
    lda(ABSY(Enemy_State));
    // mask out d3
    anda(IMM(0b11110111));
    // store new state
    sta(ABSY(Enemy_State));
    // get enemy's moving direction
    ldx(ABSY(Enemy_MovingDir));
    // decrement to use as offset
    dex();
    // get proper speed to use based on moving direction
    lda(ABSX(0x8000+offsetof(G, HammerXSpdData)));
    // reobtain hammer's buffer offset
    ldx(ABS(ObjectOffset));
    // set hammer's horizontal speed
    sta(ABSX(Misc_X_Speed));
    JMP(SetHPos);
}
void SetHPos() {
    _debug("SetHPos", __FILE__, __LINE__);
    // decrement hammer's state
    dec(ABSX(Misc_State));
    // get enemy's horizontal position
    lda(ABSY(Enemy_X_Position));
    clc();
    // set position 2 pixels to the right
    adc(IMM(0x2));
    // store as hammer's horizontal position
    sta(ABSX(Misc_X_Position));
    // get enemy's page location
    lda(ABSY(Enemy_PageLoc));
    // add carry
    adc(IMM(0x0));
    // store as hammer's page location
    sta(ABSX(Misc_PageLoc));
    // get enemy's vertical position
    lda(ABSY(Enemy_Y_Position));
    sec();
    // move position 10 pixels upward
    sbc(IMM(0xa));
    // store as hammer's vertical position
    sta(ABSX(Misc_Y_Position));
    lda(IMM(0x1));
    // set hammer's vertical high byte
    sta(ABSX(Misc_Y_HighPos));
    // unconditional branch to skip first routine
    BNE(RunHSubs);
    JMP(RunAllH);
}
void RunAllH() {
    _debug("RunAllH", __FILE__, __LINE__);
    // handle collisions
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}
void RunHSubs() {
    _debug("RunHSubs", __FILE__, __LINE__);
    // get offscreen information
    JSR(GetMiscOffscreenBits);
    // get relative coordinates
    JSR(RelativeMiscPosition);
    // get bounding box coordinates
    JSR(GetMiscBoundBox);
    // draw the hammer
    JSR(DrawHammer);
    // and we are done here
    return;
}
// $02 - used to store vertical high nybble offset from block buffer routine
// $06 - used to store low byte of block buffer address
void CoinBlock() {
    _debug("CoinBlock", __FILE__, __LINE__);
    // set offset for empty or last misc object buffer slot
    JSR(FindEmptyMiscSlot);
    // get page location of block object
    lda(ABSX(Block_PageLoc));
    // store as page location of misc object
    sta(ABSY(Misc_PageLoc));
    // get horizontal coordinate of block object
    lda(ABSX(Block_X_Position));
    // add 5 pixels
    ora(IMM(0x5));
    // store as horizontal coordinate of misc object
    sta(ABSY(Misc_X_Position));
    // get vertical coordinate of block object
    lda(ABSX(Block_Y_Position));
    // subtract 16 pixels
    sbc(IMM(0x10));
    // store as vertical coordinate of misc object
    sta(ABSY(Misc_Y_Position));
    // jump to rest of code as applies to this misc object
    JMP(JCoinC);
    JMP(SetupJumpCoin);
}
void SetupJumpCoin() {
    _debug("SetupJumpCoin", __FILE__, __LINE__);
    // set offset for empty or last misc object buffer slot
    JSR(FindEmptyMiscSlot);
    // get page location saved earlier
    lda(ABSX(Block_PageLoc2));
    // and save as page location for misc object
    sta(ABSY(Misc_PageLoc));
    // get low byte of block buffer offset
    lda(ABS(0x6));
    asl();
    // multiply by 16 to use lower nybble
    asl();
    asl();
    asl();
    // add five pixels
    ora(IMM(0x5));
    // save as horizontal coordinate for misc object
    sta(ABSY(Misc_X_Position));
    // get vertical high nybble offset from earlier
    lda(ABS(0x2));
    // add 32 pixels for the status bar
    adc(IMM(0x20));
    // store as vertical coordinate
    sta(ABSY(Misc_Y_Position));
    JMP(JCoinC);
}
void JCoinC() {
    _debug("JCoinC", __FILE__, __LINE__);
    lda(IMM(0xfb));
    // set vertical speed
    sta(ABSY(Misc_Y_Speed));
    lda(IMM(0x1));
    // set vertical high byte
    sta(ABSY(Misc_Y_HighPos));
    // set state for misc object
    sta(ABSY(Misc_State));
    // load coin grab sound
    sta(ABS(Square2SoundQueue));
    // store current control bit as misc object offset
    stx(ABS(ObjectOffset));
    // update coin tally on the screen and coin amount variable
    JSR(GiveOneCoin);
    // increment coin tally used to activate 1-up block flag
    inc(ABS(CoinTallyFor1Ups));
    return;
}
void FindEmptyMiscSlot() {
    _debug("FindEmptyMiscSlot", __FILE__, __LINE__);
    // start at end of misc objects buffer
    ldy(IMM(0x8));
    JMP(FMiscLoop);
}
void FMiscLoop() {
    _debug("FMiscLoop", __FILE__, __LINE__);
    // get misc object state
    lda(ABSY(Misc_State));
    // branch if none found to use current offset
    BEQ(UseMiscS);
    // decrement offset
    dey();
    // do this for three slots
    cpy(IMM(0x5));
    // do this until all slots are checked
    BNE(FMiscLoop);
    // if no empty slots found, use last slot
    ldy(IMM(0x8));
    JMP(UseMiscS);
}
void UseMiscS() {
    _debug("UseMiscS", __FILE__, __LINE__);
    // store offset of misc object buffer here (residual)
    sty(ABS(JumpCoinMiscOffset));
    return;
}
void MiscObjectsCore() {
    _debug("MiscObjectsCore", __FILE__, __LINE__);
    // set at end of misc object buffer
    ldx(IMM(0x8));
    JMP(MiscLoop);
}
void MiscLoop() {
    _debug("MiscLoop", __FILE__, __LINE__);
    // store misc object offset here
    stx(ABS(ObjectOffset));
    // check misc object state
    lda(ABSX(Misc_State));
    // branch to check next slot
    BEQ(MiscLoopBack);
    // otherwise shift d7 into carry
    asl();
    // if d7 not set, jumping coin, thus skip to rest of code here
    BCC(ProcJumpCoin);
    // otherwise go to process hammer,
    JSR(ProcHammerObj);
    // then check next slot
    JMP(MiscLoopBack);
    JMP(ProcJumpCoin);
}
// $00 - used to set downward force
// $01 - used to set upward force (residual)
// $02 - used to set maximum speed
void ProcJumpCoin() {
    _debug("ProcJumpCoin", __FILE__, __LINE__);
    // check misc object state
    ldy(ABSX(Misc_State));
    // decrement to see if it's set to 1
    dey();
    // if so, branch to handle jumping coin
    BEQ(JCoinRun);
    // otherwise increment state to either start off or as timer
    inc(ABSX(Misc_State));
    // get horizontal coordinate for misc object
    lda(ABSX(Misc_X_Position));
    // whether its jumping coin (state 0 only) or floatey number
    clc();
    // add current scroll speed
    adc(ABS(ScrollAmount));
    // store as new horizontal coordinate
    sta(ABSX(Misc_X_Position));
    // get page location
    lda(ABSX(Misc_PageLoc));
    // add carry
    adc(IMM(0x0));
    // store as new page location
    sta(ABSX(Misc_PageLoc));
    lda(ABSX(Misc_State));
    // check state of object for preset value
    cmp(IMM(0x30));
    // if not yet reached, branch to subroutines
    BNE(RunJCSubs);
    lda(IMM(0x0));
    // otherwise nullify object state
    sta(ABSX(Misc_State));
    // and move onto next slot
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}
void JCoinRun() {
    _debug("JCoinRun", __FILE__, __LINE__);
    txa();
    // add 13 bytes to offset for next subroutine
    clc();
    adc(IMM(0xd));
    tax();
    // set downward movement amount
    lda(IMM(0x50));
    sta(ABS(0x0));
    // set maximum vertical speed
    lda(IMM(0x6));
    sta(ABS(0x2));
    // divide by 2 and set
    lsr();
    // as upward movement amount (apparently residual)
    sta(ABS(0x1));
    // set A to impose gravity on jumping coin
    lda(IMM(0x0));
    // do sub to move coin vertically and impose gravity on it
    JSR(ImposeGravity);
    // get original misc object offset
    ldx(ABS(ObjectOffset));
    // check vertical speed
    lda(ABSX(Misc_Y_Speed));
    cmp(IMM(0x5));
    // if not moving downward fast enough, keep state as-is
    BNE(RunJCSubs);
    // otherwise increment state to change to floatey number
    inc(ABSX(Misc_State));
    JMP(RunJCSubs);
}
void RunJCSubs() {
    _debug("RunJCSubs", __FILE__, __LINE__);
    // get relative coordinates
    JSR(RelativeMiscPosition);
    // get offscreen information
    JSR(GetMiscOffscreenBits);
    // get bounding box coordinates (why?)
    JSR(GetMiscBoundBox);
    // draw the coin or floatey number
    JSR(JCoinGfxHandler);
    JMP(MiscLoopBack);
}
void MiscLoopBack() {
    _debug("MiscLoopBack", __FILE__, __LINE__);
    // decrement misc object offset
    dex();
    // loop back until all misc objects handled
    BPL(MiscLoop);
    // then leave
    return;
}
void GiveOneCoin() {
    _debug("GiveOneCoin", __FILE__, __LINE__);
    // set digit modifier to add 1 coin
    lda(IMM(0x1));
    // to the current player's coin tally
    sta(ABS(((DigitModifier) + (5))));
    // get current player on the screen
    ldx(ABS(CurrentPlayer));
    // get offset for player's coin tally
    ldy(ABSX(0x8000+offsetof(G, CoinTallyOffsets)));
    // update the coin tally
    JSR(DigitsMathRoutine);
    // increment onscreen player's coin amount
    inc(ABS(CoinTally));
    lda(ABS(CoinTally));
    // does player have 100 coins yet?
    cmp(IMM(100));
    // if not, skip all of this
    BNE(CoinPoints);
    lda(IMM(0x0));
    // otherwise, reinitialize coin amount
    sta(ABS(CoinTally));
    // give the player an extra life
    inc(ABS(NumberofLives));
    lda(IMM(Sfx_ExtraLife));
    // play 1-up sound
    sta(ABS(Square2SoundQueue));
    JMP(CoinPoints);
}
void CoinPoints() {
    _debug("CoinPoints", __FILE__, __LINE__);
    // set digit modifier to award
    lda(IMM(0x2));
    // 200 points to the player
    sta(ABS(((DigitModifier) + (4))));
    JMP(AddToScore);
}
void AddToScore() {
    _debug("AddToScore", __FILE__, __LINE__);
    // get current player
    ldx(ABS(CurrentPlayer));
    // get offset for player's score
    ldy(ABSX(0x8000+offsetof(G, ScoreOffsets)));
    // update the score internally with value in digit modifier
    JSR(DigitsMathRoutine);
    JMP(GetSBNybbles);
}
void GetSBNybbles() {
    _debug("GetSBNybbles", __FILE__, __LINE__);
    // get current player
    ldy(ABS(CurrentPlayer));
    // get nybbles based on player, use to update score and coins
    lda(ABSY(0x8000+offsetof(G, StatusBarNybbles)));
    JMP(UpdateNumber);
}
void UpdateNumber() {
    _debug("UpdateNumber", __FILE__, __LINE__);
    // print status bar numbers based on nybbles, whatever they be
    JSR(PrintStatusBarNumbers);
    ldy(ABS(VRAM_Buffer1_Offset));
    // check highest digit of score
    lda(ABSY(((VRAM_Buffer1) - (6))));
    // if zero, overwrite with space tile for zero suppression
    BNE(NoZSup);
    lda(IMM(0x24));
    sta(ABSY(((VRAM_Buffer1) - (6))));
    JMP(NoZSup);
}
void NoZSup() {
    _debug("NoZSup", __FILE__, __LINE__);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    return;
}
void SetupPowerUp() {
    _debug("SetupPowerUp", __FILE__, __LINE__);
    // load power-up identifier into
    lda(IMM(PowerUpObject));
    // special use slot of enemy object buffer
    sta(ABS(((Enemy_ID) + (5))));
    // store page location of block object
    lda(ABSX(Block_PageLoc));
    // as page location of power-up object
    sta(ABS(((Enemy_PageLoc) + (5))));
    // store horizontal coordinate of block object
    lda(ABSX(Block_X_Position));
    // as horizontal coordinate of power-up object
    sta(ABS(((Enemy_X_Position) + (5))));
    lda(IMM(0x1));
    // set vertical high byte of power-up object
    sta(ABS(((Enemy_Y_HighPos) + (5))));
    // get vertical coordinate of block object
    lda(ABSX(Block_Y_Position));
    sec();
    // subtract 8 pixels
    sbc(IMM(0x8));
    // and use as vertical coordinate of power-up object
    sta(ABS(((Enemy_Y_Position) + (5))));
    JMP(PwrUpJmp);
}
void PwrUpJmp() {
    _debug("PwrUpJmp", __FILE__, __LINE__);
    // this is a residual jump point in enemy object jump table
    lda(IMM(0x1));
    // set power-up object's state
    sta(ABS(((Enemy_State) + (5))));
    // set buffer flag
    sta(ABS(((Enemy_Flag) + (5))));
    lda(IMM(0x3));
    // set bounding box size control for power-up object
    sta(ABS(((Enemy_BoundBoxCtrl) + (5))));
    lda(ABS(PowerUpType));
    // check currently loaded power-up type
    cmp(IMM(0x2));
    // if star or 1-up, branch ahead
    BCS(PutBehind);
    // otherwise check player's current status
    lda(ABS(PlayerStatus));
    cmp(IMM(0x2));
    // if player not fiery, use status as power-up type
    BCC(StrType);
    // otherwise shift right to force fire flower type
    lsr();
    JMP(StrType);
}
void StrType() {
    _debug("StrType", __FILE__, __LINE__);
    // store type here
    sta(ABS(PowerUpType));
    JMP(PutBehind);
}
void PutBehind() {
    _debug("PutBehind", __FILE__, __LINE__);
    lda(IMM(0b100000));
    // set background priority bit
    sta(ABS(((Enemy_SprAttrib) + (5))));
    lda(IMM(Sfx_GrowPowerUp));
    // load power-up reveal sound and leave
    sta(ABS(Square2SoundQueue));
    return;
}
void PowerUpObjHandler() {
    _debug("PowerUpObjHandler", __FILE__, __LINE__);
    // set object offset for last slot in enemy object buffer
    ldx(IMM(0x5));
    stx(ABS(ObjectOffset));
    // check power-up object's state
    lda(ABS(((Enemy_State) + (5))));
    // if not set, branch to leave
    BEQ(ExitPUp);
    // shift to check if d7 was set in object state
    asl();
    // if not set, branch ahead to skip this part
    BCC(GrowThePowerUp);
    // if master timer control set,
    lda(ABS(TimerControl));
    // branch ahead to enemy object routines
    BNE(RunPUSubs);
    // check power-up type
    lda(ABS(PowerUpType));
    // if normal mushroom, branch ahead to move it
    BEQ(ShroomM);
    cmp(IMM(0x3));
    // if 1-up mushroom, branch ahead to move it
    BEQ(ShroomM);
    cmp(IMM(0x2));
    // if not star, branch elsewhere to skip movement
    BNE(RunPUSubs);
    // otherwise impose gravity on star power-up and make it jump
    JSR(MoveJumpingEnemy);
    // note that green paratroopa shares the same code here
    JSR(EnemyJump);
    // then jump to other power-up subroutines
    JMP(RunPUSubs);
    JMP(ShroomM);
}
void ShroomM() {
    _debug("ShroomM", __FILE__, __LINE__);
    // do sub to make mushrooms move
    JSR(MoveNormalEnemy);
    // deal with collisions
    JSR(EnemyToBGCollisionDet);
    // run the other subroutines
    JMP(RunPUSubs);
    JMP(GrowThePowerUp);
}
void GrowThePowerUp() {
    _debug("GrowThePowerUp", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // mask out all but 2 LSB
    anda(IMM(0x3));
    // if any bits set here, branch
    BNE(ChkPUSte);
    // otherwise decrement vertical coordinate slowly
    dec(ABS(((Enemy_Y_Position) + (5))));
    // load power-up object state
    lda(ABS(((Enemy_State) + (5))));
    // increment state for next frame (to make power-up rise)
    inc(ABS(((Enemy_State) + (5))));
    // if power-up object state not yet past 16th pixel,
    cmp(IMM(0x11));
    // branch ahead to last part here
    BCC(ChkPUSte);
    lda(IMM(0x10));
    // otherwise set horizontal speed
    sta(ABSX(Enemy_X_Speed));
    lda(IMM(0b10000000));
    // and then set d7 in power-up object's state
    sta(ABS(((Enemy_State) + (5))));
    // shift once to init A
    asl();
    // initialize background priority bit set here
    sta(ABS(((Enemy_SprAttrib) + (5))));
    // rotate A to set right moving direction
    rol();
    // set moving direction
    sta(ABSX(Enemy_MovingDir));
    JMP(ChkPUSte);
}
void ChkPUSte() {
    _debug("ChkPUSte", __FILE__, __LINE__);
    // check power-up object's state
    lda(ABS(((Enemy_State) + (5))));
    // for if power-up has risen enough
    cmp(IMM(0x6));
    // if not, don't even bother running these routines
    BCC(ExitPUp);
    JMP(RunPUSubs);
}
void RunPUSubs() {
    _debug("RunPUSubs", __FILE__, __LINE__);
    // get coordinates relative to screen
    JSR(RelativeEnemyPosition);
    // get offscreen bits
    JSR(GetEnemyOffscreenBits);
    // get bounding box coordinates
    JSR(GetEnemyBoundBox);
    // draw the power-up object
    JSR(DrawPowerUp);
    // check for collision with player
    JSR(PlayerEnemyCollision);
    // check to see if it went offscreen
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}
void ExitPUp() {
    _debug("ExitPUp", __FILE__, __LINE__);
    // and we're done
    return;
}
void PlayerHeadCollision() {
    _debug("PlayerHeadCollision", __FILE__, __LINE__);
    // store metatile number to stack
    pha();
    // load unbreakable block object state by default
    lda(IMM(0x11));
    // load offset control bit here
    ldx(ABS(SprDataOffset_Ctrl));
    // check player's size
    ldy(ABS(PlayerSize));
    // if small, branch
    BNE(DBlockSte);
    // otherwise load breakable block object state
    lda(IMM(0x12));
    JMP(DBlockSte);
}
void DBlockSte() {
    _debug("DBlockSte", __FILE__, __LINE__);
    // store into block object buffer
    sta(ABSX(Block_State));
    // store blank metatile in vram buffer to write to name table
    JSR(DestroyBlockMetatile);
    // load offset control bit
    ldx(ABS(SprDataOffset_Ctrl));
    // get vertical high nybble offset used in block buffer routine
    lda(ABS(0x2));
    // set as vertical coordinate for block object
    sta(ABSX(Block_Orig_YPos));
    tay();
    // get low byte of block buffer address used in same routine
    lda(ABS(0x6));
    // save as offset here to be used later
    sta(ABSX(Block_BBuf_Low));
    // get contents of block buffer at old address at $06, $07
    lda(INDY((0x6)));
    // do a sub to check which block player bumped head on
    JSR(BlockBumpedChk);
    // store metatile here
    sta(ABS(0x0));
    // check player's size
    ldy(ABS(PlayerSize));
    // if small, use metatile itself as contents of A
    BNE(ChkBrick);
    // otherwise init A (note: big = 0)
    tya();
    JMP(ChkBrick);
}
void ChkBrick() {
    _debug("ChkBrick", __FILE__, __LINE__);
    // if no match was found in previous sub, skip ahead
    BCC(PutMTileB);
    // otherwise load unbreakable state into block object buffer
    ldy(IMM(0x11));
    // note this applies to both player sizes
    sty(ABSX(Block_State));
    // load empty block metatile into A for now
    lda(IMM(0xc4));
    // get metatile from before
    ldy(ABS(0x0));
    // is it brick with coins (with line)?
    cpy(IMM(0x58));
    // if so, branch
    BEQ(StartBTmr);
    // is it brick with coins (without line)?
    cpy(IMM(0x5d));
    // if not, branch ahead to store empty block metatile
    BNE(PutMTileB);
    JMP(StartBTmr);
}
void StartBTmr() {
    _debug("StartBTmr", __FILE__, __LINE__);
    // check brick coin timer flag
    lda(ABS(BrickCoinTimerFlag));
    // if set, timer expired or counting down, thus branch
    BNE(ContBTmr);
    lda(IMM(0xb));
    // if not set, set brick coin timer
    sta(ABS(BrickCoinTimer));
    // and set flag linked to it
    inc(ABS(BrickCoinTimerFlag));
    JMP(ContBTmr);
}
void ContBTmr() {
    _debug("ContBTmr", __FILE__, __LINE__);
    // check brick coin timer
    lda(ABS(BrickCoinTimer));
    // if not yet expired, branch to use current metatile
    BNE(PutOldMT);
    // otherwise use empty block metatile
    ldy(IMM(0xc4));
    JMP(PutOldMT);
}
void PutOldMT() {
    _debug("PutOldMT", __FILE__, __LINE__);
    // put metatile into A
    tya();
    JMP(PutMTileB);
}
void PutMTileB() {
    _debug("PutMTileB", __FILE__, __LINE__);
    // store whatever metatile be appropriate here
    sta(ABSX(Block_Metatile));
    // get block object horizontal coordinates saved
    JSR(InitBlock_XY_Pos);
    // get vertical high nybble offset
    ldy(ABS(0x2));
    lda(IMM(0x23));
    // write blank metatile $23 to block buffer
    sta(INDY((0x6)));
    lda(IMM(0x10));
    // set block bounce timer
    sta(ABS(BlockBounceTimer));
    // pull original metatile from stack
    pla();
    // and save here
    sta(ABS(0x5));
    // set default offset
    ldy(IMM(0x0));
    // is player crouching?
    lda(ABS(CrouchingFlag));
    // if so, branch to increment offset
    BNE(SmallBP);
    // is player big?
    lda(ABS(PlayerSize));
    // if so, branch to use default offset
    BEQ(BigBP);
    JMP(SmallBP);
}
void SmallBP() {
    _debug("SmallBP", __FILE__, __LINE__);
    // increment for small or big and crouching
    iny();
    JMP(BigBP);
}
void BigBP() {
    _debug("BigBP", __FILE__, __LINE__);
    // get player's vertical coordinate
    lda(ABS(Player_Y_Position));
    clc();
    // add value determined by size
    adc(ABSY(0x8000+offsetof(G, BlockYPosAdderData)));
    // mask out low nybble to get 16-pixel correspondence
    anda(IMM(0xf0));
    // save as vertical coordinate for block object
    sta(ABSX(Block_Y_Position));
    // get block object state
    ldy(ABSX(Block_State));
    cpy(IMM(0x11));
    // if set to value loaded for unbreakable, branch
    BEQ(Unbreak);
    // execute code for breakable brick
    JSR(BrickShatter);
    // skip subroutine to do last part of code here
    JMP(InvOBit);
    JMP(Unbreak);
}
void Unbreak() {
    _debug("Unbreak", __FILE__, __LINE__);
    // execute code for unbreakable brick or question block
    JSR(BumpBlock);
    JMP(InvOBit);
}
void InvOBit() {
    _debug("InvOBit", __FILE__, __LINE__);
    // invert control bit used by block objects
    lda(ABS(SprDataOffset_Ctrl));
    // and floatey numbers
    eor(IMM(0x1));
    sta(ABS(SprDataOffset_Ctrl));
    // leave!
    return;
}
void InitBlock_XY_Pos() {
    _debug("InitBlock_XY_Pos", __FILE__, __LINE__);
    // get player's horizontal coordinate
    lda(ABS(Player_X_Position));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // mask out low nybble to give 16-pixel correspondence
    anda(IMM(0xf0));
    // save as horizontal coordinate for block object
    sta(ABSX(Block_X_Position));
    lda(ABS(Player_PageLoc));
    // add carry to page location of player
    adc(IMM(0x0));
    // save as page location of block object
    sta(ABSX(Block_PageLoc));
    // save elsewhere to be used later
    sta(ABSX(Block_PageLoc2));
    lda(ABS(Player_Y_HighPos));
    // save vertical high byte of player into
    sta(ABSX(Block_Y_HighPos));
    // vertical high byte of block object and leave
    return;
}
void BumpBlock() {
    _debug("BumpBlock", __FILE__, __LINE__);
    // check to see if there's a coin directly above this block
    JSR(CheckTopOfBlock);
    lda(IMM(Sfx_Bump));
    // play bump sound
    sta(ABS(Square1SoundQueue));
    lda(IMM(0x0));
    // initialize horizontal speed for block object
    sta(ABSX(Block_X_Speed));
    // init fractional movement force
    sta(ABSX(Block_Y_MoveForce));
    // init player's vertical speed
    sta(ABS(Player_Y_Speed));
    lda(IMM(0xfe));
    // set vertical speed for block object
    sta(ABSX(Block_Y_Speed));
    // get original metatile from stack
    lda(ABS(0x5));
    // do a sub to check which block player bumped head on
    JSR(BlockBumpedChk);
    // if no match was found, branch to leave
    BCC(ExitBlockChk);
    // move block number to A
    tya();
    // if block number was within 0-8 range,
    cmp(IMM(0x9));
    // branch to use current number
    BCC(BlockCode);
    // otherwise subtract 5 for second set to get proper number
    sbc(IMM(0x5));
    JMP(BlockCode);
}
void BlockCode() {
    _debug("BlockCode", __FILE__, __LINE__);
    static JUMP_ENTRY jumptable[9] = {
        MushFlowerBlock,
        CoinBlock,
        CoinBlock,
        ExtraLifeMushBlock,
        MushFlowerBlock,
        VineBlock,
        StarBlock,
        CoinBlock,
        ExtraLifeMushBlock,
    };
    JMP(jumptable[a.read()]);
}
void MushFlowerBlock() {
    _debug("MushFlowerBlock", __FILE__, __LINE__);
    // load mushroom/fire flower into power-up type
    lda(IMM(0x0));
    JMP(StarBlock_Skip);
    JMP(StarBlock);
}
void StarBlock() {
    _debug("StarBlock", __FILE__, __LINE__);
    // load star into power-up type
    lda(IMM(0x2));
    JMP(StarBlock_Skip);
}
void StarBlock_Skip() {
    _debug("StarBlock_Skip", __FILE__, __LINE__);
    JMP(ExtraLifeMushBlock_Skip);
    JMP(ExtraLifeMushBlock);
}
void ExtraLifeMushBlock() {
    _debug("ExtraLifeMushBlock", __FILE__, __LINE__);
    // load 1-up mushroom into power-up type
    lda(IMM(0x3));
    JMP(ExtraLifeMushBlock_Skip);
}
void ExtraLifeMushBlock_Skip() {
    _debug("ExtraLifeMushBlock_Skip", __FILE__, __LINE__);
    // store correct power-up type
    sta(ABS(0x39));
    JMP(SetupPowerUp);
    JMP(VineBlock);
}
void VineBlock() {
    _debug("VineBlock", __FILE__, __LINE__);
    // load last slot for enemy object buffer
    ldx(IMM(0x5));
    // get control bit
    ldy(ABS(SprDataOffset_Ctrl));
    // set up vine object
    JSR(Setup_Vine);
    JMP(ExitBlockChk);
}
void ExitBlockChk() {
    _debug("ExitBlockChk", __FILE__, __LINE__);
    // leave
    return;
}
void BlockBumpedChk() {
    _debug("BlockBumpedChk", __FILE__, __LINE__);
    // start at end of metatile data
    ldy(IMM(0xd));
    JMP(BumpChkLoop);
}
void BumpChkLoop() {
    _debug("BumpChkLoop", __FILE__, __LINE__);
    // check to see if current metatile matches
    cmp(ABSY(0x8000+offsetof(G, BrickQBlockMetatiles)));
    // metatile found in block buffer, branch if so
    BEQ(MatchBump);
    // otherwise move onto next metatile
    dey();
    // do this until all metatiles are checked
    BPL(BumpChkLoop);
    // if none match, return with carry clear
    clc();
    JMP(MatchBump);
}
void MatchBump() {
    _debug("MatchBump", __FILE__, __LINE__);
    // note carry is set if found match
    return;
}
void BrickShatter() {
    _debug("BrickShatter", __FILE__, __LINE__);
    // check to see if there's a coin directly above this block
    JSR(CheckTopOfBlock);
    lda(IMM(Sfx_BrickShatter));
    // set flag for block object to immediately replace metatile
    sta(ABSX(Block_RepFlag));
    // load brick shatter sound
    sta(ABS(NoiseSoundQueue));
    // create brick chunk objects
    JSR(SpawnBrickChunks);
    lda(IMM(0xfe));
    // set vertical speed for player
    sta(ABS(Player_Y_Speed));
    lda(IMM(0x5));
    // set digit modifier to give player 50 points
    sta(ABS(((DigitModifier) + (5))));
    // do sub to update the score
    JSR(AddToScore);
    // load control bit and leave
    ldx(ABS(SprDataOffset_Ctrl));
    return;
}
void CheckTopOfBlock() {
    _debug("CheckTopOfBlock", __FILE__, __LINE__);
    // load control bit
    ldx(ABS(SprDataOffset_Ctrl));
    // get vertical high nybble offset used in block buffer
    ldy(ABS(0x2));
    // branch to leave if set to zero, because we're at the top
    BEQ(TopEx);
    // otherwise set to A
    tya();
    sec();
    // subtract $10 to move up one row in the block buffer
    sbc(IMM(0x10));
    // store as new vertical high nybble offset
    sta(ABS(0x2));
    tay();
    // get contents of block buffer in same column, one row up
    lda(INDY((0x6)));
    // is it a coin? (not underwater)
    cmp(IMM(0xc2));
    // if not, branch to leave
    BNE(TopEx);
    lda(IMM(0x0));
    // otherwise put blank metatile where coin was
    sta(INDY((0x6)));
    // write blank metatile to vram buffer
    JSR(RemoveCoin_Axe);
    // get control bit
    ldx(ABS(SprDataOffset_Ctrl));
    // create jumping coin object and update coin variables
    JSR(SetupJumpCoin);
    JMP(TopEx);
}
void TopEx() {
    _debug("TopEx", __FILE__, __LINE__);
    // leave!
    return;
}
void SpawnBrickChunks() {
    _debug("SpawnBrickChunks", __FILE__, __LINE__);
    // set horizontal coordinate of block object
    lda(ABSX(Block_X_Position));
    // as original horizontal coordinate here
    sta(ABSX(Block_Orig_XPos));
    lda(IMM(0xf0));
    // set horizontal speed for brick chunk objects
    sta(ABSX(Block_X_Speed));
    sta(ABSX(((Block_X_Speed) + (2))));
    lda(IMM(0xfa));
    // set vertical speed for one
    sta(ABSX(Block_Y_Speed));
    lda(IMM(0xfc));
    // set lower vertical speed for the other
    sta(ABSX(((Block_Y_Speed) + (2))));
    lda(IMM(0x0));
    // init fractional movement force for both
    sta(ABSX(Block_Y_MoveForce));
    sta(ABSX(((Block_Y_MoveForce) + (2))));
    lda(ABSX(Block_PageLoc));
    // copy page location
    sta(ABSX(((Block_PageLoc) + (2))));
    lda(ABSX(Block_X_Position));
    // copy horizontal coordinate
    sta(ABSX(((Block_X_Position) + (2))));
    lda(ABSX(Block_Y_Position));
    // add 8 pixels to vertical coordinate
    clc();
    // and save as vertical coordinate for one of them
    adc(IMM(0x8));
    sta(ABSX(((Block_Y_Position) + (2))));
    lda(IMM(0xfa));
    // set vertical speed...again??? (redundant)
    sta(ABSX(Block_Y_Speed));
    return;
}
void BlockObjectsCore() {
    _debug("BlockObjectsCore", __FILE__, __LINE__);
    // get state of block object
    lda(ABSX(Block_State));
    // if not set, branch to leave
    BEQ(UpdSte);
    // mask out high nybble
    anda(IMM(0xf));
    // push to stack
    pha();
    // put in Y for now
    tay();
    txa();
    clc();
    // add 9 bytes to offset (note two block objects are created
    adc(IMM(0x9));
    // when using brick chunks, but only one offset for both)
    tax();
    // decrement Y to check for solid block state
    dey();
    // branch if found, otherwise continue for brick chunks
    BEQ(BouncingBlockHandler);
    // do sub to impose gravity on one block object object
    JSR(ImposeGravityBlock);
    // do another sub to move horizontally
    JSR(MoveObjectHorizontally);
    txa();
    // move onto next block object
    clc();
    adc(IMM(0x2));
    tax();
    // do sub to impose gravity on other block object
    JSR(ImposeGravityBlock);
    // do another sub to move horizontally
    JSR(MoveObjectHorizontally);
    // get block object offset used for both
    ldx(ABS(ObjectOffset));
    // get relative coordinates
    JSR(RelativeBlockPosition);
    // get offscreen information
    JSR(GetBlockOffscreenBits);
    // draw the brick chunks
    JSR(DrawBrickChunks);
    // get lower nybble of saved state
    pla();
    // check vertical high byte of block object
    ldy(ABSX(Block_Y_HighPos));
    // if above the screen, branch to kill it
    BEQ(UpdSte);
    // otherwise save state back into stack
    pha();
    lda(IMM(0xf0));
    // check to see if bottom block object went
    cmp(ABSX(((Block_Y_Position) + (2))));
    // to the bottom of the screen, and branch if not
    BCS(ChkTop);
    // otherwise set offscreen coordinate
    sta(ABSX(((Block_Y_Position) + (2))));
    JMP(ChkTop);
}
void ChkTop() {
    _debug("ChkTop", __FILE__, __LINE__);
    // get top block object's vertical coordinate
    lda(ABSX(Block_Y_Position));
    // see if it went to the bottom of the screen
    cmp(IMM(0xf0));
    // pull block object state from stack
    pla();
    // if not, branch to save state
    BCC(UpdSte);
    // otherwise do unconditional branch to kill it
    BCS(KillBlock);
    JMP(BouncingBlockHandler);
}
void BouncingBlockHandler() {
    _debug("BouncingBlockHandler", __FILE__, __LINE__);
    // do sub to impose gravity on block object
    JSR(ImposeGravityBlock);
    // get block object offset
    ldx(ABS(ObjectOffset));
    // get relative coordinates
    JSR(RelativeBlockPosition);
    // get offscreen information
    JSR(GetBlockOffscreenBits);
    // draw the block
    JSR(DrawBlock);
    // get vertical coordinate
    lda(ABSX(Block_Y_Position));
    // mask out high nybble
    anda(IMM(0xf));
    // check to see if low nybble wrapped around
    cmp(IMM(0x5));
    // pull state from stack
    pla();
    // if still above amount, not time to kill block yet, thus branch
    BCS(UpdSte);
    lda(IMM(0x1));
    // otherwise set flag to replace metatile
    sta(ABSX(Block_RepFlag));
    JMP(KillBlock);
}
void KillBlock() {
    _debug("KillBlock", __FILE__, __LINE__);
    // if branched here, nullify object state
    lda(IMM(0x0));
    JMP(UpdSte);
}
void UpdSte() {
    _debug("UpdSte", __FILE__, __LINE__);
    // store contents of A in block object state
    sta(ABSX(Block_State));
    return;
}
// $02 - used to store offset to block buffer
// $06-$07 - used to store block buffer address
void BlockObjMT_Updater() {
    _debug("BlockObjMT_Updater", __FILE__, __LINE__);
    // set offset to start with second block object
    ldx(IMM(0x1));
    JMP(UpdateLoop);
}
void UpdateLoop() {
    _debug("UpdateLoop", __FILE__, __LINE__);
    // set offset here
    stx(ABS(ObjectOffset));
    // if vram buffer already being used here,
    lda(ABS(VRAM_Buffer1));
    // branch to move onto next block object
    BNE(NextBUpd);
    // if flag for block object already clear,
    lda(ABSX(Block_RepFlag));
    // branch to move onto next block object
    BEQ(NextBUpd);
    // get low byte of block buffer
    lda(ABSX(Block_BBuf_Low));
    // store into block buffer address
    sta(ABS(0x6));
    lda(IMM(0x5));
    // set high byte of block buffer address
    sta(ABS(0x7));
    // get original vertical coordinate of block object
    lda(ABSX(Block_Orig_YPos));
    // store here and use as offset to block buffer
    sta(ABS(0x2));
    tay();
    // get metatile to be written
    lda(ABSX(Block_Metatile));
    // write it to the block buffer
    sta(INDY((0x6)));
    // do sub to replace metatile where block object is
    JSR(ReplaceBlockMetatile);
    lda(IMM(0x0));
    // clear block object flag
    sta(ABSX(Block_RepFlag));
    JMP(NextBUpd);
}
void NextBUpd() {
    _debug("NextBUpd", __FILE__, __LINE__);
    // decrement block object offset
    dex();
    // do this until both block objects are dealt with
    BPL(UpdateLoop);
    // then leave
    return;
}
// $00 - used to store high nybble of horizontal speed as adder
// $01 - used to store low nybble of horizontal speed
// $02 - used to store adder to page location
void MoveEnemyHorizontally() {
    _debug("MoveEnemyHorizontally", __FILE__, __LINE__);
    // increment offset for enemy offset
    inx();
    // position object horizontally according to
    JSR(MoveObjectHorizontally);
    // counters, return with saved value in A,
    ldx(ABS(ObjectOffset));
    // put enemy offset back in X and leave
    return;
}
void MovePlayerHorizontally() {
    _debug("MovePlayerHorizontally", __FILE__, __LINE__);
    // if jumpspring currently animating,
    lda(ABS(JumpspringAnimCtrl));
    // branch to leave
    BNE(ExXMove);
    // otherwise set zero for offset to use player's stuff
    tax();
    JMP(MoveObjectHorizontally);
}
void MoveObjectHorizontally() {
    _debug("MoveObjectHorizontally", __FILE__, __LINE__);
    // get currently saved value (horizontal
    lda(ABSX(SprObject_X_Speed));
    // speed, secondary counter, whatever)
    asl();
    // and move low nybble to high
    asl();
    asl();
    asl();
    // store result here
    sta(ABS(0x1));
    // get saved value again
    lda(ABSX(SprObject_X_Speed));
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // if < 8, branch, do not change
    cmp(IMM(0x8));
    BCC(SaveXSpd);
    // otherwise alter high nybble
    ora(IMM(0b11110000));
    JMP(SaveXSpd);
}
void SaveXSpd() {
    _debug("SaveXSpd", __FILE__, __LINE__);
    // save result here
    sta(ABS(0x0));
    // load default Y value here
    ldy(IMM(0x0));
    // if result positive, leave Y alone
    cmp(IMM(0x0));
    BPL(UseAdder);
    // otherwise decrement Y
    dey();
    JMP(UseAdder);
}
void UseAdder() {
    _debug("UseAdder", __FILE__, __LINE__);
    // save Y here
    sty(ABS(0x2));
    // get whatever number's here
    lda(ABSX(SprObject_X_MoveForce));
    clc();
    // add low nybble moved to high
    adc(ABS(0x1));
    // store result here
    sta(ABSX(SprObject_X_MoveForce));
    // init A
    lda(IMM(0x0));
    // rotate carry into d0
    rol();
    // push onto stack
    pha();
    // rotate d0 back onto carry
    ror();
    lda(ABSX(SprObject_X_Position));
    // add carry plus saved value (high nybble moved to low
    adc(ABS(0x0));
    // plus $f0 if necessary) to object's horizontal position
    sta(ABSX(SprObject_X_Position));
    lda(ABSX(SprObject_PageLoc));
    // add carry plus other saved value to the
    adc(ABS(0x2));
    // object's page location and save
    sta(ABSX(SprObject_PageLoc));
    pla();
    // pull old carry from stack and add
    clc();
    // to high nybble moved to low
    adc(ABS(0x0));
    JMP(ExXMove);
}
void ExXMove() {
    _debug("ExXMove", __FILE__, __LINE__);
    // and leave
    return;
}
// $00 - used for downward force
// $01 - used for upward force
// $02 - used for maximum vertical speed
void MovePlayerVertically() {
    _debug("MovePlayerVertically", __FILE__, __LINE__);
    // set X for player offset
    ldx(IMM(0x0));
    lda(ABS(TimerControl));
    // if master timer control set, branch ahead
    BNE(NoJSChk);
    // otherwise check to see if jumpspring is animating
    lda(ABS(JumpspringAnimCtrl));
    // branch to leave if so
    BNE(ExXMove);
    JMP(NoJSChk);
}
void NoJSChk() {
    _debug("NoJSChk", __FILE__, __LINE__);
    // dump vertical force
    lda(ABS(VerticalForce));
    sta(ABS(0x0));
    // set maximum vertical speed here
    lda(IMM(0x4));
    // then jump to move player vertically
    JMP(ImposeGravitySprObj);
    JMP(MoveD_EnemyVertically);
}
void MoveD_EnemyVertically() {
    _debug("MoveD_EnemyVertically", __FILE__, __LINE__);
    // set quick movement amount downwards
    ldy(IMM(0x3d));
    // then check enemy state
    lda(ABSX(Enemy_State));
    // if not set to unique state for spiny's egg, go ahead
    cmp(IMM(0x5));
    // and use, otherwise set different movement amount, continue on
    BNE(ContVMove);
    JMP(MoveFallingPlatform);
}
void MoveFallingPlatform() {
    _debug("MoveFallingPlatform", __FILE__, __LINE__);
    // set movement amount
    ldy(IMM(0x20));
    JMP(ContVMove);
}
void ContVMove() {
    _debug("ContVMove", __FILE__, __LINE__);
    // jump to skip the rest of this
    JMP(SetHiMax);
    JMP(MoveRedPTroopaDown);
}
void MoveRedPTroopaDown() {
    _debug("MoveRedPTroopaDown", __FILE__, __LINE__);
    // set Y to move downwards
    ldy(IMM(0x0));
    // skip to movement routine
    JMP(MoveRedPTroopa);
    JMP(MoveRedPTroopaUp);
}
void MoveRedPTroopaUp() {
    _debug("MoveRedPTroopaUp", __FILE__, __LINE__);
    // set Y to move upwards
    ldy(IMM(0x1));
    JMP(MoveRedPTroopa);
}
void MoveRedPTroopa() {
    _debug("MoveRedPTroopa", __FILE__, __LINE__);
    // increment X for enemy offset
    inx();
    lda(IMM(0x3));
    // set downward movement amount here
    sta(ABS(0x0));
    lda(IMM(0x6));
    // set upward movement amount here
    sta(ABS(0x1));
    lda(IMM(0x2));
    // set maximum speed here
    sta(ABS(0x2));
    // set movement direction in A, and
    tya();
    // jump to move this thing
    JMP(RedPTroopaGrav);
    JMP(MoveDropPlatform);
}
void MoveDropPlatform() {
    _debug("MoveDropPlatform", __FILE__, __LINE__);
    // set movement amount for drop platform
    ldy(IMM(0x7f));
    // skip ahead of other value set here
    BNE(SetMdMax);
    JMP(MoveEnemySlowVert);
}
void MoveEnemySlowVert() {
    _debug("MoveEnemySlowVert", __FILE__, __LINE__);
    // set movement amount for bowser/other objects
    ldy(IMM(0xf));
    JMP(SetMdMax);
}
void SetMdMax() {
    _debug("SetMdMax", __FILE__, __LINE__);
    // set maximum speed in A
    lda(IMM(0x2));
    // unconditional branch
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}
void MoveJ_EnemyVertically() {
    _debug("MoveJ_EnemyVertically", __FILE__, __LINE__);
    // set movement amount for podoboo/other objects
    ldy(IMM(0x1c));
    JMP(SetHiMax);
}
void SetHiMax() {
    _debug("SetHiMax", __FILE__, __LINE__);
    // set maximum speed in A
    lda(IMM(0x3));
    JMP(SetXMoveAmt);
}
void SetXMoveAmt() {
    _debug("SetXMoveAmt", __FILE__, __LINE__);
    // set movement amount here
    sty(ABS(0x0));
    // increment X for enemy offset
    inx();
    // do a sub to move enemy object downwards
    JSR(ImposeGravitySprObj);
    // get enemy object buffer offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void ResidualGravityCode() {
    _debug("ResidualGravityCode", __FILE__, __LINE__);
    // this part appears to be residual,
    ldy(IMM(0x0));
    JMP(ImposeGravityBlock_Skip);
    JMP(ImposeGravityBlock);
}
void ImposeGravityBlock() {
    _debug("ImposeGravityBlock", __FILE__, __LINE__);
    // set offset for maximum speed
    ldy(IMM(0x1));
    JMP(ImposeGravityBlock_Skip);
}
void ImposeGravityBlock_Skip() {
    _debug("ImposeGravityBlock_Skip", __FILE__, __LINE__);
    // set movement amount here
    lda(IMM(0x50));
    sta(ABS(0x0));
    // get maximum speed
    lda(ABSY(0x8000+offsetof(G, MaxSpdBlockData)));
    JMP(ImposeGravitySprObj);
}
void ImposeGravitySprObj() {
    _debug("ImposeGravitySprObj", __FILE__, __LINE__);
    // set maximum speed here
    sta(ABS(0x2));
    // set value to move downwards
    lda(IMM(0x0));
    // jump to the code that actually moves it
    JMP(ImposeGravity);
    JMP(MovePlatformDown);
}
void MovePlatformDown() {
    _debug("MovePlatformDown", __FILE__, __LINE__);
    // save value to stack (if branching here, execute next
    lda(IMM(0x0));
    JMP(MovePlatformUp_Skip);
    JMP(MovePlatformUp);
}
void MovePlatformUp() {
    _debug("MovePlatformUp", __FILE__, __LINE__);
    // save value to stack
    lda(IMM(0x1));
    JMP(MovePlatformUp_Skip);
}
void MovePlatformUp_Skip() {
    _debug("MovePlatformUp_Skip", __FILE__, __LINE__);
    pha();
    // get enemy object identifier
    ldy(ABSX(Enemy_ID));
    // increment offset for enemy object
    inx();
    // load default value here
    lda(IMM(0x5));
    // residual comparison, object #29 never executes
    cpy(IMM(0x29));
    // this code, thus unconditional branch here
    BNE(SetDplSpd);
    // residual code
    lda(IMM(0x9));
    JMP(SetDplSpd);
}
void SetDplSpd() {
    _debug("SetDplSpd", __FILE__, __LINE__);
    // save downward movement amount here
    sta(ABS(0x0));
    // save upward movement amount here
    lda(IMM(0xa));
    sta(ABS(0x1));
    // save maximum vertical speed here
    lda(IMM(0x3));
    sta(ABS(0x2));
    // get value from stack
    pla();
    // use as Y, then move onto code shared by red koopa
    tay();
    JMP(RedPTroopaGrav);
}
void RedPTroopaGrav() {
    _debug("RedPTroopaGrav", __FILE__, __LINE__);
    // do a sub to move object gradually
    JSR(ImposeGravity);
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
// $00 - used for downward force
// $01 - used for upward force
// $07 - used as adder for vertical position
void ImposeGravity() {
    _debug("ImposeGravity", __FILE__, __LINE__);
    // push value to stack
    pha();
    lda(ABSX(SprObject_YMF_Dummy));
    // add value in movement force to contents of dummy variable
    clc();
    adc(ABSX(SprObject_Y_MoveForce));
    sta(ABSX(SprObject_YMF_Dummy));
    // set Y to zero by default
    ldy(IMM(0x0));
    // get current vertical speed
    lda(ABSX(SprObject_Y_Speed));
    // if currently moving downwards, do not decrement Y
    BPL(AlterYP);
    // otherwise decrement Y
    dey();
    JMP(AlterYP);
}
void AlterYP() {
    _debug("AlterYP", __FILE__, __LINE__);
    // store Y here
    sty(ABS(0x7));
    // add vertical position to vertical speed plus carry
    adc(ABSX(SprObject_Y_Position));
    // store as new vertical position
    sta(ABSX(SprObject_Y_Position));
    lda(ABSX(SprObject_Y_HighPos));
    // add carry plus contents of $07 to vertical high byte
    adc(ABS(0x7));
    // store as new vertical high byte
    sta(ABSX(SprObject_Y_HighPos));
    lda(ABSX(SprObject_Y_MoveForce));
    clc();
    // add downward movement amount to contents of $0433
    adc(ABS(0x0));
    sta(ABSX(SprObject_Y_MoveForce));
    // add carry to vertical speed and store
    lda(ABSX(SprObject_Y_Speed));
    adc(IMM(0x0));
    sta(ABSX(SprObject_Y_Speed));
    // compare to maximum speed
    cmp(ABS(0x2));
    // if less than preset value, skip this part
    BMI(ChkUpM);
    lda(ABSX(SprObject_Y_MoveForce));
    // if less positively than preset maximum, skip this part
    cmp(IMM(0x80));
    BCC(ChkUpM);
    lda(ABS(0x2));
    // keep vertical speed within maximum value
    sta(ABSX(SprObject_Y_Speed));
    lda(IMM(0x0));
    // clear fractional
    sta(ABSX(SprObject_Y_MoveForce));
    JMP(ChkUpM);
}
void ChkUpM() {
    _debug("ChkUpM", __FILE__, __LINE__);
    // get value from stack
    pla();
    // if set to zero, branch to leave
    BEQ(ExVMove);
    lda(ABS(0x2));
    // otherwise get two's compliment of maximum speed
    eor(IMM(0b11111111));
    tay();
    iny();
    // store two's compliment here
    sty(ABS(0x7));
    lda(ABSX(SprObject_Y_MoveForce));
    // subtract upward movement amount from contents
    sec();
    // of movement force, note that $01 is twice as large as $00,
    sbc(ABS(0x1));
    // thus it effectively undoes add we did earlier
    sta(ABSX(SprObject_Y_MoveForce));
    lda(ABSX(SprObject_Y_Speed));
    // subtract borrow from vertical speed and store
    sbc(IMM(0x0));
    sta(ABSX(SprObject_Y_Speed));
    // compare vertical speed to two's compliment
    cmp(ABS(0x7));
    // if less negatively than preset maximum, skip this part
    BPL(ExVMove);
    lda(ABSX(SprObject_Y_MoveForce));
    // check if fractional part is above certain amount,
    cmp(IMM(0x80));
    // and if so, branch to leave
    BCS(ExVMove);
    lda(ABS(0x7));
    // keep vertical speed within maximum value
    sta(ABSX(SprObject_Y_Speed));
    lda(IMM(0xff));
    // clear fractional
    sta(ABSX(SprObject_Y_MoveForce));
    JMP(ExVMove);
}
void ExVMove() {
    _debug("ExVMove", __FILE__, __LINE__);
    // leave!
    return;
}
void EnemiesAndLoopsCore() {
    _debug("EnemiesAndLoopsCore", __FILE__, __LINE__);
    // check data here for MSB set
    lda(ABSX(Enemy_Flag));
    // save in stack
    pha();
    asl();
    // if MSB set in enemy flag, branch ahead of jumps
    BCS(ChkBowserF);
    // get from stack
    pla();
    // if data zero, branch
    BEQ(ChkAreaTsk);
    // otherwise, jump to run enemy subroutines
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}
void ChkAreaTsk() {
    _debug("ChkAreaTsk", __FILE__, __LINE__);
    // check number of tasks to perform
    lda(ABS(AreaParserTaskNum));
    anda(IMM(0x7));
    // if at a specific task, jump and leave
    cmp(IMM(0x7));
    BEQ(ExitELCore);
    // otherwise, jump to process loop command/load enemies
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}
void ChkBowserF() {
    _debug("ChkBowserF", __FILE__, __LINE__);
    // get data from stack
    pla();
    // mask out high nybble
    anda(IMM(0b1111));
    tay();
    // use as pointer and load same place with different offset
    lda(ABSY(Enemy_Flag));
    BNE(ExitELCore);
    // if second enemy flag not set, also clear first one
    sta(ABSX(Enemy_Flag));
    JMP(ExitELCore);
}
void ExitELCore() {
    _debug("ExitELCore", __FILE__, __LINE__);
    return;
}
void ExecGameLoopback() {
    _debug("ExecGameLoopback", __FILE__, __LINE__);
    // send player back four pages
    lda(ABS(Player_PageLoc));
    sec();
    sbc(IMM(0x4));
    sta(ABS(Player_PageLoc));
    // send current page back four pages
    lda(ABS(CurrentPageLoc));
    sec();
    sbc(IMM(0x4));
    sta(ABS(CurrentPageLoc));
    // subtract four from page location
    lda(ABS(ScreenLeft_PageLoc));
    // of screen's left border
    sec();
    sbc(IMM(0x4));
    sta(ABS(ScreenLeft_PageLoc));
    // do the same for the page location
    lda(ABS(ScreenRight_PageLoc));
    // of screen's right border
    sec();
    sbc(IMM(0x4));
    sta(ABS(ScreenRight_PageLoc));
    // subtract four from page control
    lda(ABS(AreaObjectPageLoc));
    // for area objects
    sec();
    sbc(IMM(0x4));
    sta(ABS(AreaObjectPageLoc));
    // initialize page select for both
    lda(IMM(0x0));
    // area and enemy objects
    sta(ABS(EnemyObjectPageSel));
    sta(ABS(AreaObjectPageSel));
    // initialize enemy object data offset
    sta(ABS(EnemyDataOffset));
    // and enemy object page control
    sta(ABS(EnemyObjectPageLoc));
    // adjust area object offset based on
    lda(ABSY(0x8000+offsetof(G, AreaDataOfsLoopback)));
    // which loop command we encountered
    sta(ABS(AreaDataOffset));
    return;
}
void ProcLoopCommand() {
    _debug("ProcLoopCommand", __FILE__, __LINE__);
    // check if loop command was found
    lda(ABS(LoopCommand));
    BEQ(ChkEnemyFrenzy);
    // check to see if we're still on the first page
    lda(ABS(CurrentColumnPos));
    // if not, do not loop yet
    BNE(ChkEnemyFrenzy);
    // start at the end of each set of loop data
    ldy(IMM(0xb));
    JMP(FindLoop);
}
void FindLoop() {
    _debug("FindLoop", __FILE__, __LINE__);
    dey();
    // if all data is checked and not match, do not loop
    BMI(ChkEnemyFrenzy);
    // check to see if one of the world numbers
    lda(ABS(WorldNumber));
    // matches our current world number
    cmp(ABSY(0x8000+offsetof(G, LoopCmdWorldNumber)));
    BNE(FindLoop);
    // check to see if one of the page numbers
    lda(ABS(CurrentPageLoc));
    // matches the page we're currently on
    cmp(ABSY(0x8000+offsetof(G, LoopCmdPageNumber)));
    BNE(FindLoop);
    // check to see if the player is at the correct position
    lda(ABS(Player_Y_Position));
    // if not, branch to check for world 7
    cmp(ABSY(0x8000+offsetof(G, LoopCmdYPosition)));
    BNE(WrongChk);
    // check to see if the player is
    lda(ABS(Player_State));
    // on solid ground (i.e. not jumping or falling)
    cmp(IMM(0x0));
    // if not, player fails to pass loop, and loopback
    BNE(WrongChk);
    // are we in world 7? (check performed on correct
    lda(ABS(WorldNumber));
    // vertical position and on solid ground)
    cmp(IMM(World7));
    // if not, initialize flags used there, otherwise
    BNE(InitMLp);
    // increment counter for correct progression
    inc(ABS(MultiLoopCorrectCntr));
    JMP(IncMLoop);
}
void IncMLoop() {
    _debug("IncMLoop", __FILE__, __LINE__);
    // increment master multi-part counter
    inc(ABS(MultiLoopPassCntr));
    // have we done all three parts?
    lda(ABS(MultiLoopPassCntr));
    cmp(IMM(0x3));
    // if not, skip this part
    BNE(InitLCmd);
    // if so, have we done them all correctly?
    lda(ABS(MultiLoopCorrectCntr));
    cmp(IMM(0x3));
    // if so, branch past unnecessary check here
    BEQ(InitMLp);
    // unconditional branch if previous branch fails
    BNE(DoLpBack);
    JMP(WrongChk);
}
void WrongChk() {
    _debug("WrongChk", __FILE__, __LINE__);
    // are we in world 7? (check performed on
    lda(ABS(WorldNumber));
    // incorrect vertical position or not on solid ground)
    cmp(IMM(World7));
    BEQ(IncMLoop);
    JMP(DoLpBack);
}
void DoLpBack() {
    _debug("DoLpBack", __FILE__, __LINE__);
    // if player is not in right place, loop back
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}
void InitMLp() {
    _debug("InitMLp", __FILE__, __LINE__);
    // initialize counters used for multi-part loop commands
    lda(IMM(0x0));
    sta(ABS(MultiLoopPassCntr));
    sta(ABS(MultiLoopCorrectCntr));
    JMP(InitLCmd);
}
void InitLCmd() {
    _debug("InitLCmd", __FILE__, __LINE__);
    // initialize loop command flag
    lda(IMM(0x0));
    sta(ABS(LoopCommand));
    JMP(ChkEnemyFrenzy);
}
void ChkEnemyFrenzy() {
    _debug("ChkEnemyFrenzy", __FILE__, __LINE__);
    // check for enemy object in frenzy queue
    lda(ABS(EnemyFrenzyQueue));
    // if not, skip this part
    BEQ(ProcessEnemyData);
    // store as enemy object identifier here
    sta(ABSX(Enemy_ID));
    lda(IMM(0x1));
    // activate enemy object flag
    sta(ABSX(Enemy_Flag));
    lda(IMM(0x0));
    // initialize state and frenzy queue
    sta(ABSX(Enemy_State));
    sta(ABS(EnemyFrenzyQueue));
    // and then jump to deal with this enemy
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}
// $06 - used to hold page location of extended right boundary
// $07 - used to hold high nybble of position of extended right boundary
void ProcessEnemyData() {
    _debug("ProcessEnemyData", __FILE__, __LINE__);
    // get offset of enemy object data
    ldy(ABS(EnemyDataOffset));
    // load first byte
    lda(INDY((EnemyData)));
    // check for EOD terminator
    cmp(IMM(0xff));
    BNE(CheckEndofBuffer);
    // if found, jump to check frenzy buffer, otherwise
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}
void CheckEndofBuffer() {
    _debug("CheckEndofBuffer", __FILE__, __LINE__);
    // check for special row $0e
    anda(IMM(0b1111));
    cmp(IMM(0xe));
    // if found, branch, otherwise
    BEQ(CheckRightBounds);
    // check for end of buffer
    cpx(IMM(0x5));
    // if not at end of buffer, branch
    BCC(CheckRightBounds);
    iny();
    // check for specific value here
    lda(INDY((EnemyData)));
    // not sure what this was intended for, exactly
    anda(IMM(0b111111));
    // this part is quite possibly residual code
    cmp(IMM(0x2e));
    // but it has the effect of keeping enemies out of
    BEQ(CheckRightBounds);
    // the sixth slot
    return;
}
void CheckRightBounds() {
    _debug("CheckRightBounds", __FILE__, __LINE__);
    // add 48 to pixel coordinate of right boundary
    lda(ABS(ScreenRight_X_Pos));
    clc();
    adc(IMM(0x30));
    // store high nybble
    anda(IMM(0b11110000));
    sta(ABS(0x7));
    // add carry to page location of right boundary
    lda(ABS(ScreenRight_PageLoc));
    adc(IMM(0x0));
    // store page location + carry
    sta(ABS(0x6));
    ldy(ABS(EnemyDataOffset));
    iny();
    // if MSB of enemy object is clear, branch to check for row $0f
    lda(INDY((EnemyData)));
    asl();
    BCC(CheckPageCtrlRow);
    // if page select already set, do not set again
    lda(ABS(EnemyObjectPageSel));
    BNE(CheckPageCtrlRow);
    // otherwise, if MSB is set, set page select
    inc(ABS(EnemyObjectPageSel));
    // and increment page control
    inc(ABS(EnemyObjectPageLoc));
    JMP(CheckPageCtrlRow);
}
void CheckPageCtrlRow() {
    _debug("CheckPageCtrlRow", __FILE__, __LINE__);
    dey();
    // reread first byte
    lda(INDY((EnemyData)));
    anda(IMM(0xf));
    // check for special row $0f
    cmp(IMM(0xf));
    // if not found, branch to position enemy object
    BNE(PositionEnemyObj);
    // if page select set,
    lda(ABS(EnemyObjectPageSel));
    // branch without reading second byte
    BNE(PositionEnemyObj);
    iny();
    // otherwise, get second byte, mask out 2 MSB
    lda(INDY((EnemyData)));
    anda(IMM(0b111111));
    // store as page control for enemy object data
    sta(ABS(EnemyObjectPageLoc));
    // increment enemy object data offset 2 bytes
    inc(ABS(EnemyDataOffset));
    inc(ABS(EnemyDataOffset));
    // set page select for enemy object data and
    inc(ABS(EnemyObjectPageSel));
    // jump back to process loop commands again
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}
void PositionEnemyObj() {
    _debug("PositionEnemyObj", __FILE__, __LINE__);
    // store page control as page location
    lda(ABS(EnemyObjectPageLoc));
    // for enemy object
    sta(ABSX(Enemy_PageLoc));
    // get first byte of enemy object
    lda(INDY((EnemyData)));
    anda(IMM(0b11110000));
    // store column position
    sta(ABSX(Enemy_X_Position));
    // check column position against right boundary
    cmp(ABS(ScreenRight_X_Pos));
    // without subtracting, then subtract borrow
    lda(ABSX(Enemy_PageLoc));
    // from page location
    sbc(ABS(ScreenRight_PageLoc));
    // if enemy object beyond or at boundary, branch
    BCS(CheckRightExtBounds);
    lda(INDY((EnemyData)));
    // check for special row $0e
    anda(IMM(0b1111));
    // if found, jump elsewhere
    cmp(IMM(0xe));
    BEQ(ParseRow0e);
    // if not found, unconditional jump
    JMP(CheckThreeBytes);
    JMP(CheckRightExtBounds);
}
void CheckRightExtBounds() {
    _debug("CheckRightExtBounds", __FILE__, __LINE__);
    // check right boundary + 48 against
    lda(ABS(0x7));
    // column position without subtracting,
    cmp(ABSX(Enemy_X_Position));
    // then subtract borrow from page control temp
    lda(ABS(0x6));
    // plus carry
    sbc(ABSX(Enemy_PageLoc));
    // if enemy object beyond extended boundary, branch
    BCC(CheckFrenzyBuffer);
    // store value in vertical high byte
    lda(IMM(0x1));
    sta(ABSX(Enemy_Y_HighPos));
    // get first byte again
    lda(INDY((EnemyData)));
    // multiply by four to get the vertical
    asl();
    // coordinate
    asl();
    asl();
    asl();
    sta(ABSX(Enemy_Y_Position));
    // do one last check for special row $0e
    cmp(IMM(0xe0));
    // (necessary if branched to $c1cb)
    BEQ(ParseRow0e);
    iny();
    // get second byte of object
    lda(INDY((EnemyData)));
    // check to see if hard mode bit is set
    anda(IMM(0b1000000));
    // if not, branch to check for group enemy objects
    BEQ(CheckForEnemyGroup);
    // if set, check to see if secondary hard mode flag
    lda(ABS(SecondaryHardMode));
    // is on, and if not, branch to skip this object completely
    BEQ(Inc2B);
    JMP(CheckForEnemyGroup);
}
void CheckForEnemyGroup() {
    _debug("CheckForEnemyGroup", __FILE__, __LINE__);
    // get second byte and mask out 2 MSB
    lda(INDY((EnemyData)));
    anda(IMM(0b111111));
    // check for value below $37
    cmp(IMM(0x37));
    BCC(BuzzyBeetleMutate);
    // if $37 or greater, check for value
    cmp(IMM(0x3f));
    // below $3f, branch if below $3f
    BCC(DoGroup);
    JMP(BuzzyBeetleMutate);
}
void BuzzyBeetleMutate() {
    _debug("BuzzyBeetleMutate", __FILE__, __LINE__);
    // if below $37, check for goomba
    cmp(IMM(Goomba));
    // value ($3f or more always fails)
    BNE(StrID);
    // check if primary hard mode flag is set
    ldy(ABS(PrimaryHardMode));
    // and if so, change goomba to buzzy beetle
    BEQ(StrID);
    lda(IMM(BuzzyBeetle));
    JMP(StrID);
}
void StrID() {
    _debug("StrID", __FILE__, __LINE__);
    // store enemy object number into buffer
    sta(ABSX(Enemy_ID));
    lda(IMM(0x1));
    // set flag for enemy in buffer
    sta(ABSX(Enemy_Flag));
    JSR(InitEnemyObject);
    // check to see if flag is set
    lda(ABSX(Enemy_Flag));
    // if not, leave, otherwise branch
    BNE(Inc2B);
    return;
}
void CheckFrenzyBuffer() {
    _debug("CheckFrenzyBuffer", __FILE__, __LINE__);
    // if enemy object stored in frenzy buffer
    lda(ABS(EnemyFrenzyBuffer));
    // then branch ahead to store in enemy object buffer
    BNE(StrFre);
    // otherwise check vine flag offset
    lda(ABS(VineFlagOffset));
    cmp(IMM(0x1));
    // if other value <> 1, leave
    BNE(ExEPar);
    // otherwise put vine in enemy identifier
    lda(IMM(VineObject));
    JMP(StrFre);
}
void StrFre() {
    _debug("StrFre", __FILE__, __LINE__);
    // store contents of frenzy buffer into enemy identifier value
    sta(ABSX(Enemy_ID));
    JMP(InitEnemyObject);
}
void InitEnemyObject() {
    _debug("InitEnemyObject", __FILE__, __LINE__);
    // initialize enemy state
    lda(IMM(0x0));
    sta(ABSX(Enemy_State));
    // jump ahead to run jump engine and subroutines
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}
void ExEPar() {
    _debug("ExEPar", __FILE__, __LINE__);
    // then leave
    return;
}
void DoGroup() {
    _debug("DoGroup", __FILE__, __LINE__);
    // handle enemy group objects
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}
void ParseRow0e() {
    _debug("ParseRow0e", __FILE__, __LINE__);
    // increment Y to load third byte of object
    iny();
    iny();
    lda(INDY((EnemyData)));
    // move 3 MSB to the bottom, effectively
    lsr();
    // making %xxx00000 into %00000xxx
    lsr();
    lsr();
    lsr();
    lsr();
    // is it the same world number as we're on?
    cmp(ABS(WorldNumber));
    // if not, do not use (this allows multiple uses
    BNE(NotUse);
    // of the same area, like the underground bonus areas)
    dey();
    // otherwise, get second byte and use as offset
    lda(INDY((EnemyData)));
    // to addresses for level and enemy object data
    sta(ABS(AreaPointer));
    iny();
    // get third byte again, and this time mask out
    lda(INDY((EnemyData)));
    // the 3 MSB from before, save as page number to be
    anda(IMM(0b11111));
    // used upon entry to area, if area is entered
    sta(ABS(EntrancePage));
    JMP(NotUse);
}
void NotUse() {
    _debug("NotUse", __FILE__, __LINE__);
    JMP(Inc3B);
    JMP(CheckThreeBytes);
}
void CheckThreeBytes() {
    _debug("CheckThreeBytes", __FILE__, __LINE__);
    // load current offset for enemy object data
    ldy(ABS(EnemyDataOffset));
    // get first byte
    lda(INDY((EnemyData)));
    // check for special row $0e
    anda(IMM(0b1111));
    cmp(IMM(0xe));
    BNE(Inc2B);
    JMP(Inc3B);
}
void Inc3B() {
    _debug("Inc3B", __FILE__, __LINE__);
    // if row = $0e, increment three bytes
    inc(ABS(EnemyDataOffset));
    JMP(Inc2B);
}
void Inc2B() {
    _debug("Inc2B", __FILE__, __LINE__);
    // otherwise increment two bytes
    inc(ABS(EnemyDataOffset));
    inc(ABS(EnemyDataOffset));
    // init page select for enemy objects
    lda(IMM(0x0));
    sta(ABS(EnemyObjectPageSel));
    // reload current offset in enemy buffers
    ldx(ABS(ObjectOffset));
    // and leave
    return;
}
void CheckpointEnemyID() {
    _debug("CheckpointEnemyID", __FILE__, __LINE__);
    lda(ABSX(Enemy_ID));
    // check enemy object identifier for $15 or greater
    cmp(IMM(0x15));
    // and branch straight to the jump engine if found
    BCS(InitEnemyRoutines);
    // save identifier in Y register for now
    tay();
    lda(ABSX(Enemy_Y_Position));
    // add eight pixels to what will eventually be the
    adc(IMM(0x8));
    // enemy object's vertical coordinate ($00-$14 only)
    sta(ABSX(Enemy_Y_Position));
    lda(IMM(0x1));
    // set offscreen masked bit
    sta(ABSX(EnemyOffscrBitsMasked));
    // get identifier back and use as offset for jump engine
    tya();
    JMP(InitEnemyRoutines);
}
void InitEnemyRoutines() {
    _debug("InitEnemyRoutines", __FILE__, __LINE__);
    static JUMP_ENTRY jumptable[55] = {
        InitNormalEnemy,
        InitNormalEnemy,
        InitNormalEnemy,
        InitRedKoopa,
        NoInitCode,
        InitHammerBro,
        InitGoomba,
        InitBloober,
        InitBulletBill,
        NoInitCode,
        InitCheepCheep,
        InitCheepCheep,
        InitPodoboo,
        InitPiranhaPlant,
        InitJumpGPTroopa,
        InitRedPTroopa,
        InitHorizFlySwimEnemy,
        InitLakitu,
        InitEnemyFrenzy,
        NoInitCode,
        InitEnemyFrenzy,
        InitEnemyFrenzy,
        InitEnemyFrenzy,
        InitEnemyFrenzy,
        EndFrenzy,
        NoInitCode,
        NoInitCode,
        InitShortFirebar,
        InitShortFirebar,
        InitShortFirebar,
        InitShortFirebar,
        InitLongFirebar,
        NoInitCode,
        NoInitCode,
        NoInitCode,
        NoInitCode,
        InitBalPlatform,
        InitVertPlatform,
        LargeLiftUp,
        LargeLiftDown,
        InitHoriPlatform,
        InitDropPlatform,
        InitHoriPlatform,
        PlatLiftUp,
        PlatLiftDown,
        InitBowser,
        PwrUpJmp,
        Setup_Vine,
        NoInitCode,
        NoInitCode,
        NoInitCode,
        NoInitCode,
        NoInitCode,
        InitRetainerObj,
        EndOfEnemyInitCode,
    };
    JMP(jumptable[a.read()]);
}
void NoInitCode() {
    _debug("NoInitCode", __FILE__, __LINE__);
    // this executed when enemy object has no init code
    return;
}
void InitGoomba() {
    _debug("InitGoomba", __FILE__, __LINE__);
    // set appropriate horizontal speed
    JSR(InitNormalEnemy);
    // set $09 as bounding box control, set other values
    JMP(SmallBBox);
    JMP(InitPodoboo);
}
void InitPodoboo() {
    _debug("InitPodoboo", __FILE__, __LINE__);
    // set enemy position to below
    lda(IMM(0x2));
    // the bottom of the screen
    sta(ABSX(Enemy_Y_HighPos));
    sta(ABSX(Enemy_Y_Position));
    lsr();
    // set timer for enemy
    sta(ABSX(EnemyIntervalTimer));
    lsr();
    // initialize enemy state, then jump to use
    sta(ABSX(Enemy_State));
    // $09 as bounding box size and set other things
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}
void InitRetainerObj() {
    _debug("InitRetainerObj", __FILE__, __LINE__);
    // set fixed vertical position for
    lda(IMM(0xb8));
    // princess/mushroom retainer object
    sta(ABSX(Enemy_Y_Position));
    return;
}
void InitNormalEnemy() {
    _debug("InitNormalEnemy", __FILE__, __LINE__);
    // load offset of 1 by default
    ldy(IMM(0x1));
    // check for primary hard mode flag set
    lda(ABS(PrimaryHardMode));
    BNE(GetESpd);
    // if not set, decrement offset
    dey();
    JMP(GetESpd);
}
void GetESpd() {
    _debug("GetESpd", __FILE__, __LINE__);
    // get appropriate horizontal speed
    lda(ABSY(0x8000+offsetof(G, NormalXSpdData)));
    JMP(SetESpd);
}
void SetESpd() {
    _debug("SetESpd", __FILE__, __LINE__);
    // store as speed for enemy object
    sta(ABSX(Enemy_X_Speed));
    // branch to set bounding box control and other data
    JMP(TallBBox);
    JMP(InitRedKoopa);
}
void InitRedKoopa() {
    _debug("InitRedKoopa", __FILE__, __LINE__);
    // load appropriate horizontal speed
    JSR(InitNormalEnemy);
    // set enemy state for red koopa troopa $03
    lda(IMM(0x1));
    sta(ABSX(Enemy_State));
    return;
}
void InitHammerBro() {
    _debug("InitHammerBro", __FILE__, __LINE__);
    // init horizontal speed and timer used by hammer bro
    lda(IMM(0x0));
    // apparently to time hammer throwing
    sta(ABSX(HammerThrowingTimer));
    sta(ABSX(Enemy_X_Speed));
    // get secondary hard mode flag
    ldy(ABS(SecondaryHardMode));
    lda(ABSY(0x8000+offsetof(G, HBroWalkingTimerData)));
    // set value as delay for hammer bro to walk left
    sta(ABSX(EnemyIntervalTimer));
    // set specific value for bounding box size control
    lda(IMM(0xb));
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}
void InitHorizFlySwimEnemy() {
    _debug("InitHorizFlySwimEnemy", __FILE__, __LINE__);
    // initialize horizontal speed
    lda(IMM(0x0));
    JMP(SetESpd);
    JMP(InitBloober);
}
void InitBloober() {
    _debug("InitBloober", __FILE__, __LINE__);
    // initialize horizontal speed
    lda(IMM(0x0));
    sta(ABSX(BlooperMoveSpeed));
    JMP(SmallBBox);
}
void SmallBBox() {
    _debug("SmallBBox", __FILE__, __LINE__);
    // set specific bounding box size control
    lda(IMM(0x9));
    // unconditional branch
    BNE(SetBBox);
    JMP(InitRedPTroopa);
}
void InitRedPTroopa() {
    _debug("InitRedPTroopa", __FILE__, __LINE__);
    // load central position adder for 48 pixels down
    ldy(IMM(0x30));
    // set vertical coordinate into location to
    lda(ABSX(Enemy_Y_Position));
    // be used as original vertical coordinate
    sta(ABSX(RedPTroopaOrigXPos));
    // if vertical coordinate < $80
    BPL(GetCent);
    // if => $80, load position adder for 32 pixels up
    ldy(IMM(0xe0));
    JMP(GetCent);
}
void GetCent() {
    _debug("GetCent", __FILE__, __LINE__);
    // send central position adder to A
    tya();
    // add to current vertical coordinate
    adc(ABSX(Enemy_Y_Position));
    // store as central vertical coordinate
    sta(ABSX(RedPTroopaCenterYPos));
    JMP(TallBBox);
}
void TallBBox() {
    _debug("TallBBox", __FILE__, __LINE__);
    // set specific bounding box size control
    lda(IMM(0x3));
    JMP(SetBBox);
}
void SetBBox() {
    _debug("SetBBox", __FILE__, __LINE__);
    // set bounding box control here
    sta(ABSX(Enemy_BoundBoxCtrl));
    // set moving direction for left
    lda(IMM(0x2));
    sta(ABSX(Enemy_MovingDir));
    JMP(InitVStf);
}
void InitVStf() {
    _debug("InitVStf", __FILE__, __LINE__);
    // initialize vertical speed
    lda(IMM(0x0));
    // and movement force
    sta(ABSX(Enemy_Y_Speed));
    sta(ABSX(Enemy_Y_MoveForce));
    return;
}
void InitBulletBill() {
    _debug("InitBulletBill", __FILE__, __LINE__);
    // set moving direction for left
    lda(IMM(0x2));
    sta(ABSX(Enemy_MovingDir));
    // set bounding box control for $09
    lda(IMM(0x9));
    sta(ABSX(Enemy_BoundBoxCtrl));
    return;
}
void InitCheepCheep() {
    _debug("InitCheepCheep", __FILE__, __LINE__);
    // set vertical bounding box, speed, init others
    JSR(SmallBBox);
    // check one portion of LSFR
    lda(ABSX(PseudoRandomBitReg));
    // get d4 from it
    anda(IMM(0b10000));
    // save as movement flag of some sort
    sta(ABSX(CheepCheepMoveMFlag));
    lda(ABSX(Enemy_Y_Position));
    // save original vertical coordinate here
    sta(ABSX(CheepCheepOrigYPos));
    return;
}
void InitLakitu() {
    _debug("InitLakitu", __FILE__, __LINE__);
    // check to see if an enemy is already in
    lda(ABS(EnemyFrenzyBuffer));
    // the frenzy buffer, and branch to kill lakitu if so
    BNE(KillLakitu);
    JMP(SetupLakitu);
}
void SetupLakitu() {
    _debug("SetupLakitu", __FILE__, __LINE__);
    // erase counter for lakitu's reappearance
    lda(IMM(0x0));
    sta(ABS(LakituReappearTimer));
    // set $03 as bounding box, set other attributes
    JSR(InitHorizFlySwimEnemy);
    // set $03 as bounding box again (not necessary) and leave
    JMP(TallBBox2);
    JMP(KillLakitu);
}
void KillLakitu() {
    _debug("KillLakitu", __FILE__, __LINE__);
    JMP(EraseEnemyObject);
    JMP(LakituAndSpinyHandler);
}
void LakituAndSpinyHandler() {
    _debug("LakituAndSpinyHandler", __FILE__, __LINE__);
    // if timer here not expired, leave
    lda(ABS(FrenzyEnemyTimer));
    BNE(ExLSHand);
    // if we are on the special use slot, leave
    cpx(IMM(0x5));
    BCS(ExLSHand);
    // set timer
    lda(IMM(0x80));
    sta(ABS(FrenzyEnemyTimer));
    // start with the last enemy slot
    ldy(IMM(0x4));
    JMP(ChkLak);
}
void ChkLak() {
    _debug("ChkLak", __FILE__, __LINE__);
    // check all enemy slots to see
    lda(ABSY(Enemy_ID));
    // if lakitu is on one of them
    cmp(IMM(Lakitu));
    // if so, branch out of this loop
    BEQ(CreateSpiny);
    // otherwise check another slot
    dey();
    // loop until all slots are checked
    BPL(ChkLak);
    // increment reappearance timer
    inc(ABS(LakituReappearTimer));
    lda(ABS(LakituReappearTimer));
    // check to see if we're up to a certain value yet
    cmp(IMM(0x7));
    // if not, leave
    BCC(ExLSHand);
    // start with the last enemy slot again
    ldx(IMM(0x4));
    JMP(ChkNoEn);
}
void ChkNoEn() {
    _debug("ChkNoEn", __FILE__, __LINE__);
    // check enemy buffer flag for non-active enemy slot
    lda(ABSX(Enemy_Flag));
    // branch out of loop if found
    BEQ(CreateL);
    // otherwise check next slot
    dex();
    // branch until all slots are checked
    BPL(ChkNoEn);
    // if no empty slots were found, branch to leave
    BMI(RetEOfs);
    JMP(CreateL);
}
void CreateL() {
    _debug("CreateL", __FILE__, __LINE__);
    // initialize enemy state
    lda(IMM(0x0));
    sta(ABSX(Enemy_State));
    // create lakitu enemy object
    lda(IMM(Lakitu));
    sta(ABSX(Enemy_ID));
    // do a sub to set up lakitu
    JSR(SetupLakitu);
    lda(IMM(0x20));
    // finish setting up lakitu
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}
void RetEOfs() {
    _debug("RetEOfs", __FILE__, __LINE__);
    // get enemy object buffer offset again and leave
    ldx(ABS(ObjectOffset));
    JMP(ExLSHand);
}
void ExLSHand() {
    _debug("ExLSHand", __FILE__, __LINE__);
    return;
}
void CreateSpiny() {
    _debug("CreateSpiny", __FILE__, __LINE__);
    // if player above a certain point, branch to leave
    lda(ABS(Player_Y_Position));
    cmp(IMM(0x2c));
    BCC(ExLSHand);
    // if lakitu is not in normal state, branch to leave
    lda(ABSY(Enemy_State));
    BNE(ExLSHand);
    // store horizontal coordinates (high and low) of lakitu
    lda(ABSY(Enemy_PageLoc));
    // into the coordinates of the spiny we're going to create
    sta(ABSX(Enemy_PageLoc));
    lda(ABSY(Enemy_X_Position));
    sta(ABSX(Enemy_X_Position));
    // put spiny within vertical screen unit
    lda(IMM(0x1));
    sta(ABSX(Enemy_Y_HighPos));
    // put spiny eight pixels above where lakitu is
    lda(ABSY(Enemy_Y_Position));
    sec();
    sbc(IMM(0x8));
    sta(ABSX(Enemy_Y_Position));
    // get 2 LSB of LSFR and save to Y
    lda(ABSX(PseudoRandomBitReg));
    anda(IMM(0b11));
    tay();
    ldx(IMM(0x2));
    JMP(DifLoop);
}
void DifLoop() {
    _debug("DifLoop", __FILE__, __LINE__);
    // get three values and save them
    lda(ABSY(0x8000+offsetof(G, PRDiffAdjustData)));
    // to $01-$03
    sta(ABSX(0x1));
    iny();
    // increment Y four bytes for each value
    iny();
    iny();
    iny();
    // decrement X for each one
    dex();
    // loop until all three are written
    BPL(DifLoop);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    // move enemy, change direction, get value - difference
    JSR(PlayerLakituDiff);
    // check player's horizontal speed
    ldy(ABS(Player_X_Speed));
    cpy(IMM(0x8));
    // if moving faster than a certain amount, branch elsewhere
    BCS(SetSpSpd);
    // otherwise save value in A to Y for now
    tay();
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // get one of the LSFR parts and save the 2 LSB
    anda(IMM(0b11));
    // branch if neither bits are set
    BEQ(UsePosv);
    tya();
    // otherwise get two's compliment of Y
    eor(IMM(0b11111111));
    tay();
    iny();
    JMP(UsePosv);
}
void UsePosv() {
    _debug("UsePosv", __FILE__, __LINE__);
    // put value from A in Y back to A (they will be lost anyway)
    tya();
    JMP(SetSpSpd);
}
void SetSpSpd() {
    _debug("SetSpSpd", __FILE__, __LINE__);
    // set bounding box control, init attributes, lose contents of A
    JSR(SmallBBox);
    ldy(IMM(0x2));
    // set horizontal speed to zero because previous contents
    sta(ABSX(Enemy_X_Speed));
    // of A were lost...branch here will never be taken for
    cmp(IMM(0x0));
    // the same reason
    BMI(SpinyRte);
    dey();
    JMP(SpinyRte);
}
void SpinyRte() {
    _debug("SpinyRte", __FILE__, __LINE__);
    // set moving direction to the right
    sty(ABSX(Enemy_MovingDir));
    lda(IMM(0xfd));
    // set vertical speed to move upwards
    sta(ABSX(Enemy_Y_Speed));
    lda(IMM(0x1));
    // enable enemy object by setting flag
    sta(ABSX(Enemy_Flag));
    lda(IMM(0x5));
    // put spiny in egg state and leave
    sta(ABSX(Enemy_State));
    JMP(ChpChpEx);
}
void ChpChpEx() {
    _debug("ChpChpEx", __FILE__, __LINE__);
    return;
}
void InitLongFirebar() {
    _debug("InitLongFirebar", __FILE__, __LINE__);
    // create enemy object for long firebar
    JSR(DuplicateEnemyObj);
    JMP(InitShortFirebar);
}
void InitShortFirebar() {
    _debug("InitShortFirebar", __FILE__, __LINE__);
    // initialize low byte of spin state
    lda(IMM(0x0));
    sta(ABSX(FirebarSpinState_Low));
    // subtract $1b from enemy identifier
    lda(ABSX(Enemy_ID));
    // to get proper offset for firebar data
    sec();
    sbc(IMM(0x1b));
    tay();
    // get spinning speed of firebar
    lda(ABSY(0x8000+offsetof(G, FirebarSpinSpdData)));
    sta(ABSX(FirebarSpinSpeed));
    // get spinning direction of firebar
    lda(ABSY(0x8000+offsetof(G, FirebarSpinDirData)));
    sta(ABSX(FirebarSpinDirection));
    lda(ABSX(Enemy_Y_Position));
    // add four pixels to vertical coordinate
    clc();
    adc(IMM(0x4));
    sta(ABSX(Enemy_Y_Position));
    lda(ABSX(Enemy_X_Position));
    // add four pixels to horizontal coordinate
    clc();
    adc(IMM(0x4));
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // add carry to page location
    adc(IMM(0x0));
    sta(ABSX(Enemy_PageLoc));
    // set bounding box control (not used) and leave
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}
void InitFlyingCheepCheep() {
    _debug("InitFlyingCheepCheep", __FILE__, __LINE__);
    // if timer here not expired yet, branch to leave
    lda(ABS(FrenzyEnemyTimer));
    BNE(ChpChpEx);
    // jump to set bounding box size $09 and init other values
    JSR(SmallBBox);
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // set pseudorandom offset here
    anda(IMM(0b11));
    tay();
    // load timer with pseudorandom offset
    lda(ABSY(0x8000+offsetof(G, FlyCCTimerData)));
    sta(ABS(FrenzyEnemyTimer));
    // load Y with default value
    ldy(IMM(0x3));
    lda(ABS(SecondaryHardMode));
    // if secondary hard mode flag not set, do not increment Y
    BEQ(MaxCC);
    // otherwise, increment Y to allow as many as four onscreen
    iny();
    JMP(MaxCC);
}
void MaxCC() {
    _debug("MaxCC", __FILE__, __LINE__);
    // store whatever pseudorandom bits are in Y
    sty(ABS(0x0));
    // compare enemy object buffer offset with Y
    cpx(ABS(0x0));
    // if X => Y, branch to leave
    BCS(ChpChpEx);
    lda(ABSX(PseudoRandomBitReg));
    // get last two bits of LSFR, first part
    anda(IMM(0b11));
    // and store in two places
    sta(ABS(0x0));
    sta(ABS(0x1));
    // set vertical speed for cheep-cheep
    lda(IMM(0xfb));
    sta(ABSX(Enemy_Y_Speed));
    // load default value
    lda(IMM(0x0));
    // check player's horizontal speed
    ldy(ABS(Player_X_Speed));
    // if player not moving left or right, skip this part
    BEQ(GSeed);
    lda(IMM(0x4));
    // if moving to the right but not very quickly,
    cpy(IMM(0x19));
    // do not change A
    BCC(GSeed);
    // otherwise, multiply A by 2
    asl();
    JMP(GSeed);
}
void GSeed() {
    _debug("GSeed", __FILE__, __LINE__);
    // save to stack
    pha();
    clc();
    // add to last two bits of LSFR we saved earlier
    adc(ABS(0x0));
    // save it there
    sta(ABS(0x0));
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // if neither of the last two bits of second LSFR set,
    anda(IMM(0b11));
    // skip this part and save contents of $00
    BEQ(RSeed);
    lda(ABSX(((PseudoRandomBitReg) + (2))));
    // otherwise overwrite with lower nybble of
    anda(IMM(0b1111));
    // third LSFR part
    sta(ABS(0x0));
    JMP(RSeed);
}
void RSeed() {
    _debug("RSeed", __FILE__, __LINE__);
    // get value from stack we saved earlier
    pla();
    clc();
    // add to last two bits of LSFR we saved in other place
    adc(ABS(0x1));
    // use as pseudorandom offset here
    tay();
    // get horizontal speed using pseudorandom offset
    lda(ABSY(0x8000+offsetof(G, FlyCCXSpeedData)));
    sta(ABSX(Enemy_X_Speed));
    // set to move towards the right
    lda(IMM(0x1));
    sta(ABSX(Enemy_MovingDir));
    // if player moving left or right, branch ahead of this part
    lda(ABS(Player_X_Speed));
    BNE(D2XPos1);
    // get first LSFR or third LSFR lower nybble
    ldy(ABS(0x0));
    // and check for d1 set
    tya();
    anda(IMM(0b10));
    // if d1 not set, branch
    BEQ(D2XPos1);
    lda(ABSX(Enemy_X_Speed));
    // if d1 set, change horizontal speed
    eor(IMM(0xff));
    // into two's compliment, thus moving in the opposite
    clc();
    // direction
    adc(IMM(0x1));
    sta(ABSX(Enemy_X_Speed));
    // increment to move towards the left
    inc(ABSX(Enemy_MovingDir));
    JMP(D2XPos1);
}
void D2XPos1() {
    _debug("D2XPos1", __FILE__, __LINE__);
    // get first LSFR or third LSFR lower nybble again
    tya();
    anda(IMM(0b10));
    // check for d1 set again, branch again if not set
    BEQ(D2XPos2);
    // get player's horizontal position
    lda(ABS(Player_X_Position));
    clc();
    // if d1 set, add value obtained from pseudorandom offset
    adc(ABSY(0x8000+offsetof(G, FlyCCXPositionData)));
    // and save as enemy's horizontal position
    sta(ABSX(Enemy_X_Position));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // add carry and jump past this part
    adc(IMM(0x0));
    JMP(FinCCSt);
    JMP(D2XPos2);
}
void D2XPos2() {
    _debug("D2XPos2", __FILE__, __LINE__);
    // get player's horizontal position
    lda(ABS(Player_X_Position));
    sec();
    // if d1 not set, subtract value obtained from pseudorandom
    sbc(ABSY(0x8000+offsetof(G, FlyCCXPositionData)));
    // offset and save as enemy's horizontal position
    sta(ABSX(Enemy_X_Position));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // subtract borrow
    sbc(IMM(0x0));
    JMP(FinCCSt);
}
void FinCCSt() {
    _debug("FinCCSt", __FILE__, __LINE__);
    // save as enemy's page location
    sta(ABSX(Enemy_PageLoc));
    lda(IMM(0x1));
    // set enemy's buffer flag
    sta(ABSX(Enemy_Flag));
    // set enemy's high vertical byte
    sta(ABSX(Enemy_Y_HighPos));
    lda(IMM(0xf8));
    // put enemy below the screen, and we are done
    sta(ABSX(Enemy_Y_Position));
    return;
}
void InitBowser() {
    _debug("InitBowser", __FILE__, __LINE__);
    // jump to create another bowser object
    JSR(DuplicateEnemyObj);
    // save offset of first here
    stx(ABS(BowserFront_Offset));
    lda(IMM(0x0));
    // initialize bowser's body controls
    sta(ABS(BowserBodyControls));
    // and bridge collapse offset
    sta(ABS(BridgeCollapseOffset));
    lda(ABSX(Enemy_X_Position));
    // store original horizontal position here
    sta(ABS(BowserOrigXPos));
    lda(IMM(0xdf));
    // store something here
    sta(ABS(BowserFireBreathTimer));
    // and in moving direction
    sta(ABSX(Enemy_MovingDir));
    lda(IMM(0x20));
    // set bowser's feet timer and in enemy timer
    sta(ABS(BowserFeetCounter));
    sta(ABSX(EnemyFrameTimer));
    lda(IMM(0x5));
    // give bowser 5 hit points
    sta(ABS(BowserHitPoints));
    lsr();
    // set default movement speed here
    sta(ABS(BowserMovementSpeed));
    return;
}
void DuplicateEnemyObj() {
    _debug("DuplicateEnemyObj", __FILE__, __LINE__);
    // start at beginning of enemy slots
    ldy(IMM(0xff));
    JMP(FSLoop);
}
void FSLoop() {
    _debug("FSLoop", __FILE__, __LINE__);
    // increment one slot
    iny();
    // check enemy buffer flag for empty slot
    lda(ABSY(Enemy_Flag));
    // if set, branch and keep checking
    BNE(FSLoop);
    // otherwise set offset here
    sty(ABS(DuplicateObj_Offset));
    // transfer original enemy buffer offset
    txa();
    // store with d7 set as flag in new enemy
    ora(IMM(0b10000000));
    // slot as well as enemy offset
    sta(ABSY(Enemy_Flag));
    lda(ABSX(Enemy_PageLoc));
    // copy page location and horizontal coordinates
    sta(ABSY(Enemy_PageLoc));
    // from original enemy to new enemy
    lda(ABSX(Enemy_X_Position));
    sta(ABSY(Enemy_X_Position));
    lda(IMM(0x1));
    // set flag as normal for original enemy
    sta(ABSX(Enemy_Flag));
    // set high vertical byte for new enemy
    sta(ABSY(Enemy_Y_HighPos));
    lda(ABSX(Enemy_Y_Position));
    // copy vertical coordinate from original to new
    sta(ABSY(Enemy_Y_Position));
    JMP(FlmEx);
}
void FlmEx() {
    _debug("FlmEx", __FILE__, __LINE__);
    // and then leave
    return;
}
void InitBowserFlame() {
    _debug("InitBowserFlame", __FILE__, __LINE__);
    // if timer not expired yet, branch to leave
    lda(ABS(FrenzyEnemyTimer));
    BNE(FlmEx);
    // reset something here
    sta(ABSX(Enemy_Y_MoveForce));
    lda(ABS(NoiseSoundQueue));
    // load bowser's flame sound into queue
    ora(IMM(Sfx_BowserFlame));
    sta(ABS(NoiseSoundQueue));
    // get bowser's buffer offset
    ldy(ABS(BowserFront_Offset));
    // check for bowser
    lda(ABSY(Enemy_ID));
    cmp(IMM(Bowser));
    // branch if found
    BEQ(SpawnFromMouth);
    // get timer data based on flame counter
    JSR(SetFlameTimer);
    clc();
    // add 32 frames by default
    adc(IMM(0x20));
    ldy(ABS(SecondaryHardMode));
    // if secondary mode flag not set, use as timer setting
    BEQ(SetFrT);
    sec();
    // otherwise subtract 16 frames for secondary hard mode
    sbc(IMM(0x10));
    JMP(SetFrT);
}
void SetFrT() {
    _debug("SetFrT", __FILE__, __LINE__);
    // set timer accordingly
    sta(ABS(FrenzyEnemyTimer));
    lda(ABSX(PseudoRandomBitReg));
    // get 2 LSB from first part of LSFR
    anda(IMM(0b11));
    // set here
    sta(ABSX(BowserFlamePRandomOfs));
    // use as offset
    tay();
    // load vertical position based on pseudorandom offset
    lda(ABSY(0x8000+offsetof(G, FlameYPosData)));
    JMP(PutAtRightExtent);
}
void PutAtRightExtent() {
    _debug("PutAtRightExtent", __FILE__, __LINE__);
    // set vertical position
    sta(ABSX(Enemy_Y_Position));
    lda(ABS(ScreenRight_X_Pos));
    clc();
    // place enemy 32 pixels beyond right side of screen
    adc(IMM(0x20));
    sta(ABSX(Enemy_X_Position));
    lda(ABS(ScreenRight_PageLoc));
    // add carry
    adc(IMM(0x0));
    sta(ABSX(Enemy_PageLoc));
    // skip this part to finish setting values
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}
void SpawnFromMouth() {
    _debug("SpawnFromMouth", __FILE__, __LINE__);
    // get bowser's horizontal position
    lda(ABSY(Enemy_X_Position));
    sec();
    // subtract 14 pixels
    sbc(IMM(0xe));
    // save as flame's horizontal position
    sta(ABSX(Enemy_X_Position));
    lda(ABSY(Enemy_PageLoc));
    // copy page location from bowser to flame
    sta(ABSX(Enemy_PageLoc));
    lda(ABSY(Enemy_Y_Position));
    // add 8 pixels to bowser's vertical position
    clc();
    adc(IMM(0x8));
    // save as flame's vertical position
    sta(ABSX(Enemy_Y_Position));
    lda(ABSX(PseudoRandomBitReg));
    // get 2 LSB from first part of LSFR
    anda(IMM(0b11));
    // save here
    sta(ABSX(Enemy_YMF_Dummy));
    // use as offset
    tay();
    // get value here using bits as offset
    lda(ABSY(0x8000+offsetof(G, FlameYPosData)));
    // load default offset
    ldy(IMM(0x0));
    // compare value to flame's current vertical position
    cmp(ABSX(Enemy_Y_Position));
    // if less, do not increment offset
    BCC(SetMF);
    // otherwise increment now
    iny();
    JMP(SetMF);
}
void SetMF() {
    _debug("SetMF", __FILE__, __LINE__);
    // get value here and save
    lda(ABSY(0x8000+offsetof(G, FlameYMFAdderData)));
    // to vertical movement force
    sta(ABSX(Enemy_Y_MoveForce));
    lda(IMM(0x0));
    // clear enemy frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    JMP(FinishFlame);
}
void FinishFlame() {
    _debug("FinishFlame", __FILE__, __LINE__);
    // set $08 for bounding box control
    lda(IMM(0x8));
    sta(ABSX(Enemy_BoundBoxCtrl));
    // set high byte of vertical and
    lda(IMM(0x1));
    // enemy buffer flag
    sta(ABSX(Enemy_Y_HighPos));
    sta(ABSX(Enemy_Flag));
    lsr();
    // initialize horizontal movement force, and
    sta(ABSX(Enemy_X_MoveForce));
    // enemy state
    sta(ABSX(Enemy_State));
    return;
}
void InitFireworks() {
    _debug("InitFireworks", __FILE__, __LINE__);
    // if timer not expired yet, branch to leave
    lda(ABS(FrenzyEnemyTimer));
    BNE(ExitFWk);
    // otherwise reset timer
    lda(IMM(0x20));
    sta(ABS(FrenzyEnemyTimer));
    // decrement for each explosion
    dec(ABS(FireworksCounter));
    // start at last slot
    ldy(IMM(0x6));
    JMP(StarFChk);
}
void StarFChk() {
    _debug("StarFChk", __FILE__, __LINE__);
    dey();
    // check for presence of star flag object
    lda(ABSY(Enemy_ID));
    // if there isn't a star flag object,
    cmp(IMM(StarFlagObject));
    // routine goes into infinite loop = crash
    BNE(StarFChk);
    lda(ABSY(Enemy_X_Position));
    // get horizontal coordinate of star flag object, then
    sec();
    // subtract 48 pixels from it and save to
    sbc(IMM(0x30));
    // the stack
    pha();
    lda(ABSY(Enemy_PageLoc));
    // subtract the carry from the page location
    sbc(IMM(0x0));
    // of the star flag object
    sta(ABS(0x0));
    // get fireworks counter
    lda(ABS(FireworksCounter));
    clc();
    // add state of star flag object (possibly not necessary)
    adc(ABSY(Enemy_State));
    // use as offset
    tay();
    // get saved horizontal coordinate of star flag - 48 pixels
    pla();
    clc();
    // add number based on offset of fireworks counter
    adc(ABSY(0x8000+offsetof(G, FireworksXPosData)));
    // store as the fireworks object horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    lda(ABS(0x0));
    // add carry and store as page location for
    adc(IMM(0x0));
    // the fireworks object
    sta(ABSX(Enemy_PageLoc));
    // get vertical position using same offset
    lda(ABSY(0x8000+offsetof(G, FireworksYPosData)));
    // and store as vertical coordinate for fireworks object
    sta(ABSX(Enemy_Y_Position));
    lda(IMM(0x1));
    // store in vertical high byte
    sta(ABSX(Enemy_Y_HighPos));
    // and activate enemy buffer flag
    sta(ABSX(Enemy_Flag));
    lsr();
    // initialize explosion counter
    sta(ABSX(ExplosionGfxCounter));
    lda(IMM(0x8));
    // set explosion timing counter
    sta(ABSX(ExplosionTimerCounter));
    JMP(ExitFWk);
}
void ExitFWk() {
    _debug("ExitFWk", __FILE__, __LINE__);
    return;
}
void BulletBillCheepCheep() {
    _debug("BulletBillCheepCheep", __FILE__, __LINE__);
    // if timer not expired yet, branch to leave
    lda(ABS(FrenzyEnemyTimer));
    BNE(ExF17);
    // are we in a water-type level?
    lda(ABS(AreaType));
    // if not, branch elsewhere
    BNE(DoBulletBills);
    // are we past third enemy slot?
    cpx(IMM(0x3));
    // if so, branch to leave
    BCS(ExF17);
    // load default offset
    ldy(IMM(0x0));
    lda(ABSX(PseudoRandomBitReg));
    // check first part of LSFR against preset value
    cmp(IMM(0xaa));
    // if less than preset, do not increment offset
    BCC(ChkW2);
    // otherwise increment
    iny();
    JMP(ChkW2);
}
void ChkW2() {
    _debug("ChkW2", __FILE__, __LINE__);
    // check world number
    lda(ABS(WorldNumber));
    cmp(IMM(World2));
    // if we're on world 2, do not increment offset
    BEQ(Get17ID);
    // otherwise increment
    iny();
    JMP(Get17ID);
}
void Get17ID() {
    _debug("Get17ID", __FILE__, __LINE__);
    tya();
    // mask out all but last bit of offset
    anda(IMM(0b1));
    tay();
    // load identifier for cheep-cheeps
    lda(ABSY(0x8000+offsetof(G, SwimCC_IDData)));
    JMP(Set17ID);
}
void Set17ID() {
    _debug("Set17ID", __FILE__, __LINE__);
    // store whatever's in A as enemy identifier
    sta(ABSX(Enemy_ID));
    lda(ABS(BitMFilter));
    // if not all bits set, skip init part and compare bits
    cmp(IMM(0xff));
    BNE(GetRBit);
    // initialize vertical position filter
    lda(IMM(0x0));
    sta(ABS(BitMFilter));
    JMP(GetRBit);
}
void GetRBit() {
    _debug("GetRBit", __FILE__, __LINE__);
    // get first part of LSFR
    lda(ABSX(PseudoRandomBitReg));
    // mask out all but 3 LSB
    anda(IMM(0b111));
    JMP(ChkRBit);
}
void ChkRBit() {
    _debug("ChkRBit", __FILE__, __LINE__);
    // use as offset
    tay();
    // load bitmask
    lda(ABSY(0x8000+offsetof(G, Bitmasks)));
    // perform AND on filter without changing it
    bit(ABS(BitMFilter));
    BEQ(AddFBit);
    // increment offset
    iny();
    tya();
    // mask out all but 3 LSB thus keeping it 0-7
    anda(IMM(0b111));
    // do another check
    JMP(ChkRBit);
    JMP(AddFBit);
}
void AddFBit() {
    _debug("AddFBit", __FILE__, __LINE__);
    // add bit to already set bits in filter
    ora(ABS(BitMFilter));
    // and store
    sta(ABS(BitMFilter));
    // load vertical position using offset
    lda(ABSY(0x8000+offsetof(G, Enemy17YPosData)));
    // set vertical position and other values
    JSR(PutAtRightExtent);
    // initialize dummy variable
    sta(ABSX(Enemy_YMF_Dummy));
    // set timer
    lda(IMM(0x20));
    sta(ABS(FrenzyEnemyTimer));
    // process our new enemy object
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}
void DoBulletBills() {
    _debug("DoBulletBills", __FILE__, __LINE__);
    // start at beginning of enemy slots
    ldy(IMM(0xff));
    JMP(BB_SLoop);
}
void BB_SLoop() {
    _debug("BB_SLoop", __FILE__, __LINE__);
    // move onto the next slot
    iny();
    // branch to play sound if we've done all slots
    cpy(IMM(0x5));
    BCS(FireBulletBill);
    // if enemy buffer flag not set,
    lda(ABSY(Enemy_Flag));
    // loop back and check another slot
    BEQ(BB_SLoop);
    lda(ABSY(Enemy_ID));
    // check enemy identifier for
    cmp(IMM(BulletBill_FrenzyVar));
    // bullet bill object (frenzy variant)
    BNE(BB_SLoop);
    JMP(ExF17);
}
void ExF17() {
    _debug("ExF17", __FILE__, __LINE__);
    // if found, leave
    return;
}
void FireBulletBill() {
    _debug("FireBulletBill", __FILE__, __LINE__);
    lda(ABS(Square2SoundQueue));
    // play fireworks/gunfire sound
    ora(IMM(Sfx_Blast));
    sta(ABS(Square2SoundQueue));
    // load identifier for bullet bill object
    lda(IMM(BulletBill_FrenzyVar));
    // unconditional branch
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}
// $00 - used to store Y position of group enemies
// $01 - used to store enemy ID
// $02 - used to store page location of right side of screen
// $03 - used to store X position of right side of screen
void HandleGroupEnemies() {
    _debug("HandleGroupEnemies", __FILE__, __LINE__);
    // load value for green koopa troopa
    ldy(IMM(0x0));
    sec();
    // subtract $37 from second byte read
    sbc(IMM(0x37));
    // save result in stack for now
    pha();
    // was byte in $3b-$3e range?
    cmp(IMM(0x4));
    // if so, branch
    BCS(SnglID);
    // save another copy to stack
    pha();
    // load value for goomba enemy
    ldy(IMM(Goomba));
    // if primary hard mode flag not set,
    lda(ABS(PrimaryHardMode));
    // branch, otherwise change to value
    BEQ(PullID);
    // for buzzy beetle
    ldy(IMM(BuzzyBeetle));
    JMP(PullID);
}
void PullID() {
    _debug("PullID", __FILE__, __LINE__);
    // get second copy from stack
    pla();
    JMP(SnglID);
}
void SnglID() {
    _debug("SnglID", __FILE__, __LINE__);
    // save enemy id here
    sty(ABS(0x1));
    // load default y coordinate
    ldy(IMM(0xb0));
    // check to see if d1 was set
    anda(IMM(0x2));
    // if so, move y coordinate up,
    BEQ(SetYGp);
    // otherwise branch and use default
    ldy(IMM(0x70));
    JMP(SetYGp);
}
void SetYGp() {
    _debug("SetYGp", __FILE__, __LINE__);
    // save y coordinate here
    sty(ABS(0x0));
    // get page number of right edge of screen
    lda(ABS(ScreenRight_PageLoc));
    // save here
    sta(ABS(0x2));
    // get pixel coordinate of right edge
    lda(ABS(ScreenRight_X_Pos));
    // save here
    sta(ABS(0x3));
    // load two enemies by default
    ldy(IMM(0x2));
    // get first copy from stack
    pla();
    // check to see if d0 was set
    lsr();
    // if not, use default value
    BCC(CntGrp);
    // otherwise increment to three enemies
    iny();
    JMP(CntGrp);
}
void CntGrp() {
    _debug("CntGrp", __FILE__, __LINE__);
    // save number of enemies here
    sty(ABS(NumberofGroupEnemies));
    JMP(GrLoop);
}
void GrLoop() {
    _debug("GrLoop", __FILE__, __LINE__);
    // start at beginning of enemy buffers
    ldx(IMM(0xff));
    JMP(GSltLp);
}
void GSltLp() {
    _debug("GSltLp", __FILE__, __LINE__);
    // increment and branch if past
    inx();
    // end of buffers
    cpx(IMM(0x5));
    BCS(NextED);
    // check to see if enemy is already
    lda(ABSX(Enemy_Flag));
    // stored in buffer, and branch if so
    BNE(GSltLp);
    lda(ABS(0x1));
    // store enemy object identifier
    sta(ABSX(Enemy_ID));
    lda(ABS(0x2));
    // store page location for enemy object
    sta(ABSX(Enemy_PageLoc));
    lda(ABS(0x3));
    // store x coordinate for enemy object
    sta(ABSX(Enemy_X_Position));
    clc();
    // add 24 pixels for next enemy
    adc(IMM(0x18));
    sta(ABS(0x3));
    // add carry to page location for
    lda(ABS(0x2));
    // next enemy
    adc(IMM(0x0));
    sta(ABS(0x2));
    // store y coordinate for enemy object
    lda(ABS(0x0));
    sta(ABSX(Enemy_Y_Position));
    // activate flag for buffer, and
    lda(IMM(0x1));
    // put enemy within the screen vertically
    sta(ABSX(Enemy_Y_HighPos));
    sta(ABSX(Enemy_Flag));
    // process each enemy object separately
    JSR(CheckpointEnemyID);
    // do this until we run out of enemy objects
    dec(ABS(NumberofGroupEnemies));
    BNE(GrLoop);
    JMP(NextED);
}
void NextED() {
    _debug("NextED", __FILE__, __LINE__);
    // jump to increment data offset and leave
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}
void InitPiranhaPlant() {
    _debug("InitPiranhaPlant", __FILE__, __LINE__);
    // set initial speed
    lda(IMM(0x1));
    sta(ABSX(PiranhaPlant_Y_Speed));
    lsr();
    // initialize enemy state and what would normally
    sta(ABSX(Enemy_State));
    // be used as vertical speed, but not in this case
    sta(ABSX(PiranhaPlant_MoveFlag));
    lda(ABSX(Enemy_Y_Position));
    // save original vertical coordinate here
    sta(ABSX(PiranhaPlantDownYPos));
    sec();
    sbc(IMM(0x18));
    // save original vertical coordinate - 24 pixels here
    sta(ABSX(PiranhaPlantUpYPos));
    lda(IMM(0x9));
    // set specific value for bounding box control
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}
void InitEnemyFrenzy() {
    _debug("InitEnemyFrenzy", __FILE__, __LINE__);
    // load enemy identifier
    lda(ABSX(Enemy_ID));
    // save in enemy frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    sec();
    // subtract 12 and use as offset for jump engine
    sbc(IMM(0x12));
    static JUMP_ENTRY jumptable[6] = {
        LakituAndSpinyHandler,
        NoFrenzyCode,
        InitFlyingCheepCheep,
        InitBowserFlame,
        InitFireworks,
        BulletBillCheepCheep,
    };
    JMP(jumptable[a.read()]);
}
void NoFrenzyCode() {
    _debug("NoFrenzyCode", __FILE__, __LINE__);
    return;
}
void EndFrenzy() {
    _debug("EndFrenzy", __FILE__, __LINE__);
    // start at last slot
    ldy(IMM(0x5));
    JMP(LakituChk);
}
void LakituChk() {
    _debug("LakituChk", __FILE__, __LINE__);
    // check enemy identifiers
    lda(ABSY(Enemy_ID));
    // for lakitu
    cmp(IMM(Lakitu));
    BNE(NextFSlot);
    // if found, set state
    lda(IMM(0x1));
    sta(ABSY(Enemy_State));
    JMP(NextFSlot);
}
void NextFSlot() {
    _debug("NextFSlot", __FILE__, __LINE__);
    // move onto the next slot
    dey();
    // do this until all slots are checked
    BPL(LakituChk);
    lda(IMM(0x0));
    // empty enemy frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    // disable enemy buffer flag for this object
    sta(ABSX(Enemy_Flag));
    return;
}
void InitJumpGPTroopa() {
    _debug("InitJumpGPTroopa", __FILE__, __LINE__);
    // set for movement to the left
    lda(IMM(0x2));
    sta(ABSX(Enemy_MovingDir));
    // set horizontal speed
    lda(IMM(0xf8));
    sta(ABSX(Enemy_X_Speed));
    JMP(TallBBox2);
}
void TallBBox2() {
    _debug("TallBBox2", __FILE__, __LINE__);
    // set specific value for bounding box control
    lda(IMM(0x3));
    JMP(SetBBox2);
}
void SetBBox2() {
    _debug("SetBBox2", __FILE__, __LINE__);
    // set bounding box control then leave
    sta(ABSX(Enemy_BoundBoxCtrl));
    return;
}
void InitBalPlatform() {
    _debug("InitBalPlatform", __FILE__, __LINE__);
    // raise vertical position by two pixels
    dec(ABSX(Enemy_Y_Position));
    dec(ABSX(Enemy_Y_Position));
    // if secondary hard mode flag not set,
    ldy(ABS(SecondaryHardMode));
    // branch ahead
    BNE(AlignP);
    // otherwise set value here
    ldy(IMM(0x2));
    // do a sub to add or subtract pixels
    JSR(PosPlatform);
    JMP(AlignP);
}
void AlignP() {
    _debug("AlignP", __FILE__, __LINE__);
    // set default value here for now
    ldy(IMM(0xff));
    // get current balance platform alignment
    lda(ABS(BalPlatformAlignment));
    // set platform alignment to object state here
    sta(ABSX(Enemy_State));
    // if old alignment $ff, put $ff as alignment for negative
    BPL(SetBPA);
    // if old contents already $ff, put
    txa();
    // object offset as alignment to make next positive
    tay();
    JMP(SetBPA);
}
void SetBPA() {
    _debug("SetBPA", __FILE__, __LINE__);
    // store whatever value's in Y here
    sty(ABS(BalPlatformAlignment));
    lda(IMM(0x0));
    // init moving direction
    sta(ABSX(Enemy_MovingDir));
    // init Y
    tay();
    // do a sub to add 8 pixels, then run shared code here
    JSR(PosPlatform);
    JMP(InitDropPlatform);
}
void InitDropPlatform() {
    _debug("InitDropPlatform", __FILE__, __LINE__);
    lda(IMM(0xff));
    // set some value here
    sta(ABSX(PlatformCollisionFlag));
    // then jump ahead to execute more code
    JMP(CommonPlatCode);
    JMP(InitHoriPlatform);
}
void InitHoriPlatform() {
    _debug("InitHoriPlatform", __FILE__, __LINE__);
    lda(IMM(0x0));
    // init one of the moving counters
    sta(ABSX(XMoveSecondaryCounter));
    // jump ahead to execute more code
    JMP(CommonPlatCode);
    JMP(InitVertPlatform);
}
void InitVertPlatform() {
    _debug("InitVertPlatform", __FILE__, __LINE__);
    // set default value here
    ldy(IMM(0x40));
    // check vertical position
    lda(ABSX(Enemy_Y_Position));
    // if above a certain point, skip this part
    BPL(SetYO);
    eor(IMM(0xff));
    // otherwise get two's compliment
    clc();
    adc(IMM(0x1));
    // get alternate value to add to vertical position
    ldy(IMM(0xc0));
    JMP(SetYO);
}
void SetYO() {
    _debug("SetYO", __FILE__, __LINE__);
    // save as top vertical position
    sta(ABSX(YPlatformTopYPos));
    tya();
    // load value from earlier, add number of pixels
    clc();
    // to vertical position
    adc(ABSX(Enemy_Y_Position));
    // save result as central vertical position
    sta(ABSX(YPlatformCenterYPos));
    JMP(CommonPlatCode);
}
void CommonPlatCode() {
    _debug("CommonPlatCode", __FILE__, __LINE__);
    // do a sub to init certain other values
    JSR(InitVStf);
    JMP(SPBBox);
}
void SPBBox() {
    _debug("SPBBox", __FILE__, __LINE__);
    // set default bounding box size control
    lda(IMM(0x5));
    ldy(ABS(AreaType));
    // check for castle-type level
    cpy(IMM(0x3));
    // use default value if found
    BEQ(CasPBB);
    // otherwise check for secondary hard mode flag
    ldy(ABS(SecondaryHardMode));
    // if set, use default value
    BNE(CasPBB);
    // use alternate value if not castle or secondary not set
    lda(IMM(0x6));
    JMP(CasPBB);
}
void CasPBB() {
    _debug("CasPBB", __FILE__, __LINE__);
    // set bounding box size control here and leave
    sta(ABSX(Enemy_BoundBoxCtrl));
    return;
}
void LargeLiftUp() {
    _debug("LargeLiftUp", __FILE__, __LINE__);
    // execute code for platforms going up
    JSR(PlatLiftUp);
    // overwrite bounding box for large platforms
    JMP(LargeLiftBBox);
    JMP(LargeLiftDown);
}
void LargeLiftDown() {
    _debug("LargeLiftDown", __FILE__, __LINE__);
    // execute code for platforms going down
    JSR(PlatLiftDown);
    JMP(LargeLiftBBox);
}
void LargeLiftBBox() {
    _debug("LargeLiftBBox", __FILE__, __LINE__);
    // jump to overwrite bounding box size control
    JMP(SPBBox);
    JMP(PlatLiftUp);
}
void PlatLiftUp() {
    _debug("PlatLiftUp", __FILE__, __LINE__);
    // set movement amount here
    lda(IMM(0x10));
    sta(ABSX(Enemy_Y_MoveForce));
    // set moving speed for platforms going up
    lda(IMM(0xff));
    sta(ABSX(Enemy_Y_Speed));
    // skip ahead to part we should be executing
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}
void PlatLiftDown() {
    _debug("PlatLiftDown", __FILE__, __LINE__);
    // set movement amount here
    lda(IMM(0xf0));
    sta(ABSX(Enemy_Y_MoveForce));
    // set moving speed for platforms going down
    lda(IMM(0x0));
    sta(ABSX(Enemy_Y_Speed));
    JMP(CommonSmallLift);
}
void CommonSmallLift() {
    _debug("CommonSmallLift", __FILE__, __LINE__);
    ldy(IMM(0x1));
    // do a sub to add 12 pixels due to preset value
    JSR(PosPlatform);
    lda(IMM(0x4));
    // set bounding box control for small platforms
    sta(ABSX(Enemy_BoundBoxCtrl));
    return;
}
void PosPlatform() {
    _debug("PosPlatform", __FILE__, __LINE__);
    // get horizontal coordinate
    lda(ABSX(Enemy_X_Position));
    clc();
    // add or subtract pixels depending on offset
    adc(ABSY(0x8000+offsetof(G, PlatPosDataLow)));
    // store as new horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // add or subtract page location depending on offset
    adc(ABSY(0x8000+offsetof(G, PlatPosDataHigh)));
    // store as new page location
    sta(ABSX(Enemy_PageLoc));
    // and go back
    return;
}
void EndOfEnemyInitCode() {
    _debug("EndOfEnemyInitCode", __FILE__, __LINE__);
    return;
}
void RunEnemyObjectsCore() {
    _debug("RunEnemyObjectsCore", __FILE__, __LINE__);
    // get offset for enemy object buffer
    ldx(ABS(ObjectOffset));
    // load value 0 for jump engine by default
    lda(IMM(0x0));
    ldy(ABSX(Enemy_ID));
    // if enemy object < $15, use default value
    cpy(IMM(0x15));
    BCC(JmpEO);
    // otherwise subtract $14 from the value and use
    tya();
    // as value for jump engine
    sbc(IMM(0x14));
    JMP(JmpEO);
}
void JmpEO() {
    _debug("JmpEO", __FILE__, __LINE__);
    static JUMP_ENTRY jumptable[34] = {
        RunNormalEnemies,
        RunBowserFlame,
        RunFireworks,
        NoRunCode,
        NoRunCode,
        NoRunCode,
        NoRunCode,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        RunFirebarObj,
        NoRunCode,
        RunLargePlatform,
        RunLargePlatform,
        RunLargePlatform,
        RunLargePlatform,
        RunLargePlatform,
        RunLargePlatform,
        RunLargePlatform,
        RunSmallPlatform,
        RunSmallPlatform,
        RunBowser,
        PowerUpObjHandler,
        VineObjectHandler,
        NoRunCode,
        RunStarFlagObj,
        JumpspringHandler,
        NoRunCode,
        WarpZoneObject,
        RunRetainerObj,
    };
    JMP(jumptable[a.read()]);
}
void NoRunCode() {
    _debug("NoRunCode", __FILE__, __LINE__);
    return;
}
void RunRetainerObj() {
    _debug("RunRetainerObj", __FILE__, __LINE__);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JMP(EnemyGfxHandler);
    JMP(RunNormalEnemies);
}
void RunNormalEnemies() {
    _debug("RunNormalEnemies", __FILE__, __LINE__);
    // init sprite attributes
    lda(IMM(0x0));
    sta(ABSX(Enemy_SprAttrib));
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    // if master timer control set, skip to last routine
    ldy(ABS(TimerControl));
    BNE(SkipMove);
    JSR(EnemyMovementSubs);
    JMP(SkipMove);
}
void SkipMove() {
    _debug("SkipMove", __FILE__, __LINE__);
    JMP(OffscreenBoundsCheck);
    JMP(EnemyMovementSubs);
}
void EnemyMovementSubs() {
    _debug("EnemyMovementSubs", __FILE__, __LINE__);
    lda(ABSX(Enemy_ID));
    static JUMP_ENTRY jumptable[21] = {
        MoveNormalEnemy,
        MoveNormalEnemy,
        MoveNormalEnemy,
        MoveNormalEnemy,
        MoveNormalEnemy,
        ProcHammerBro,
        MoveNormalEnemy,
        MoveBloober,
        MoveBulletBill,
        NoMoveCode,
        MoveSwimmingCheepCheep,
        MoveSwimmingCheepCheep,
        MovePodoboo,
        MovePiranhaPlant,
        MoveJumpingEnemy,
        ProcMoveRedPTroopa,
        MoveFlyGreenPTroopa,
        MoveLakitu,
        MoveNormalEnemy,
        NoMoveCode,
        MoveFlyingCheepCheep,
    };
    JMP(jumptable[a.read()]);
}
void NoMoveCode() {
    _debug("NoMoveCode", __FILE__, __LINE__);
    return;
}
void RunBowserFlame() {
    _debug("RunBowserFlame", __FILE__, __LINE__);
    JSR(ProcBowserFlame);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(OffscreenBoundsCheck);
    JMP(RunFirebarObj);
}
void RunFirebarObj() {
    _debug("RunFirebarObj", __FILE__, __LINE__);
    JSR(ProcFirebar);
    JMP(OffscreenBoundsCheck);
    JMP(RunSmallPlatform);
}
void RunSmallPlatform() {
    _debug("RunSmallPlatform", __FILE__, __LINE__);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(SmallPlatformBoundBox);
    JSR(SmallPlatformCollision);
    JSR(RelativeEnemyPosition);
    JSR(DrawSmallPlatform);
    JSR(MoveSmallPlatform);
    JMP(OffscreenBoundsCheck);
    JMP(RunLargePlatform);
}
void RunLargePlatform() {
    _debug("RunLargePlatform", __FILE__, __LINE__);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(LargePlatformBoundBox);
    JSR(LargePlatformCollision);
    // if master timer control set,
    lda(ABS(TimerControl));
    // skip subroutine tree
    BNE(SkipPT);
    JSR(LargePlatformSubroutines);
    JMP(SkipPT);
}
void SkipPT() {
    _debug("SkipPT", __FILE__, __LINE__);
    JSR(RelativeEnemyPosition);
    JSR(DrawLargePlatform);
    JMP(OffscreenBoundsCheck);
    JMP(LargePlatformSubroutines);
}
void LargePlatformSubroutines() {
    _debug("LargePlatformSubroutines", __FILE__, __LINE__);
    // subtract $24 to get proper offset for jump table
    lda(ABSX(Enemy_ID));
    sec();
    sbc(IMM(0x24));
    static JUMP_ENTRY jumptable[7] = {
        BalancePlatform,
        YMovingPlatform,
        MoveLargeLiftPlat,
        MoveLargeLiftPlat,
        XMovingPlatform,
        DropPlatform,
        RightPlatform,
    };
    JMP(jumptable[a.read()]);
}
void EraseEnemyObject() {
    _debug("EraseEnemyObject", __FILE__, __LINE__);
    // clear all enemy object variables
    lda(IMM(0x0));
    sta(ABSX(Enemy_Flag));
    sta(ABSX(Enemy_ID));
    sta(ABSX(Enemy_State));
    sta(ABSX(FloateyNum_Control));
    sta(ABSX(EnemyIntervalTimer));
    sta(ABSX(ShellChainCounter));
    sta(ABSX(Enemy_SprAttrib));
    sta(ABSX(EnemyFrameTimer));
    return;
}
void MovePodoboo() {
    _debug("MovePodoboo", __FILE__, __LINE__);
    // check enemy timer
    lda(ABSX(EnemyIntervalTimer));
    // branch to move enemy if not expired
    BNE(PdbM);
    // otherwise set up podoboo again
    JSR(InitPodoboo);
    // get part of LSFR
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // set d7
    ora(IMM(0b10000000));
    // store as movement force
    sta(ABSX(Enemy_Y_MoveForce));
    // mask out high nybble
    anda(IMM(0b1111));
    // set for at least six intervals
    ora(IMM(0x6));
    // store as new enemy timer
    sta(ABSX(EnemyIntervalTimer));
    lda(IMM(0xf9));
    // set vertical speed to move podoboo upwards
    sta(ABSX(Enemy_Y_Speed));
    JMP(PdbM);
}
void PdbM() {
    _debug("PdbM", __FILE__, __LINE__);
    // branch to impose gravity on podoboo
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}
void ProcHammerBro() {
    _debug("ProcHammerBro", __FILE__, __LINE__);
    // check hammer bro's enemy state for d5 set
    lda(ABSX(Enemy_State));
    anda(IMM(0b100000));
    // if not set, go ahead with code
    BEQ(ChkJH);
    // otherwise jump to something else
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}
void ChkJH() {
    _debug("ChkJH", __FILE__, __LINE__);
    // check jump timer
    lda(ABSX(HammerBroJumpTimer));
    // if expired, branch to jump
    BEQ(HammerBroJumpCode);
    // otherwise decrement jump timer
    dec(ABSX(HammerBroJumpTimer));
    lda(ABS(Enemy_OffscreenBits));
    // check offscreen bits
    anda(IMM(0b1100));
    // if hammer bro a little offscreen, skip to movement code
    BNE(MoveHammerBroXDir);
    // check hammer throwing timer
    lda(ABSX(HammerThrowingTimer));
    // if not expired, skip ahead, do not throw hammer
    BNE(DecHT);
    // otherwise get secondary hard mode flag
    ldy(ABS(SecondaryHardMode));
    // get timer data using flag as offset
    lda(ABSY(0x8000+offsetof(G, HammerThrowTmrData)));
    // set as new timer
    sta(ABSX(HammerThrowingTimer));
    // do a sub here to spawn hammer object
    JSR(SpawnHammerObj);
    // if carry clear, hammer not spawned, skip to decrement timer
    BCC(DecHT);
    lda(ABSX(Enemy_State));
    // set d3 in enemy state for hammer throw
    ora(IMM(0b1000));
    sta(ABSX(Enemy_State));
    // jump to move hammer bro
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}
void DecHT() {
    _debug("DecHT", __FILE__, __LINE__);
    // decrement timer
    dec(ABSX(HammerThrowingTimer));
    // jump to move hammer bro
    JMP(MoveHammerBroXDir);
    JMP(HammerBroJumpCode);
}
void HammerBroJumpCode() {
    _debug("HammerBroJumpCode", __FILE__, __LINE__);
    // get hammer bro's enemy state
    lda(ABSX(Enemy_State));
    // mask out all but 3 LSB
    anda(IMM(0b111));
    // check for d0 set (for jumping)
    cmp(IMM(0x1));
    // if set, branch ahead to moving code
    BEQ(MoveHammerBroXDir);
    // load default value here
    lda(IMM(0x0));
    // save into temp variable for now
    sta(ABS(0x0));
    // set default vertical speed
    ldy(IMM(0xfa));
    // check hammer bro's vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // if on the bottom half of the screen, use current speed
    BMI(SetHJ);
    // otherwise set alternate vertical speed
    ldy(IMM(0xfd));
    // check to see if hammer bro is above the middle of screen
    cmp(IMM(0x70));
    // increment preset value to $01
    inc(ABS(0x0));
    // if above the middle of the screen, use current speed and $01
    BCC(SetHJ);
    // otherwise return value to $00
    dec(ABS(0x0));
    // get part of LSFR, mask out all but LSB
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    anda(IMM(0x1));
    // if d0 of LSFR set, branch and use current speed and $00
    BNE(SetHJ);
    // otherwise reset to default vertical speed
    ldy(IMM(0xfa));
    JMP(SetHJ);
}
void SetHJ() {
    _debug("SetHJ", __FILE__, __LINE__);
    // set vertical speed for jumping
    sty(ABSX(Enemy_Y_Speed));
    // set d0 in enemy state for jumping
    lda(ABSX(Enemy_State));
    ora(IMM(0x1));
    sta(ABSX(Enemy_State));
    // load preset value here to use as bitmask
    lda(ABS(0x0));
    // and do bit-wise comparison with part of LSFR
    anda(ABSX(((PseudoRandomBitReg) + (2))));
    // then use as offset
    tay();
    // check secondary hard mode flag
    lda(ABS(SecondaryHardMode));
    BNE(HJump);
    // if secondary hard mode flag clear, set offset to 0
    tay();
    JMP(HJump);
}
void HJump() {
    _debug("HJump", __FILE__, __LINE__);
    // get jump length timer data using offset from before
    lda(ABSY(0x8000+offsetof(G, HammerBroJumpLData)));
    // save in enemy timer
    sta(ABSX(EnemyFrameTimer));
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // get contents of part of LSFR, set d7 and d6, then
    ora(IMM(0b11000000));
    // store in jump timer
    sta(ABSX(HammerBroJumpTimer));
    JMP(MoveHammerBroXDir);
}
void MoveHammerBroXDir() {
    _debug("MoveHammerBroXDir", __FILE__, __LINE__);
    // move hammer bro a little to the left
    ldy(IMM(0xfc));
    lda(ABS(FrameCounter));
    // change hammer bro's direction every 64 frames
    anda(IMM(0b1000000));
    BNE(Shimmy);
    // if d6 set in counter, move him a little to the right
    ldy(IMM(0x4));
    JMP(Shimmy);
}
void Shimmy() {
    _debug("Shimmy", __FILE__, __LINE__);
    // store horizontal speed
    sty(ABSX(Enemy_X_Speed));
    // set to face right by default
    ldy(IMM(0x1));
    // get horizontal difference between player and hammer bro
    JSR(PlayerEnemyDiff);
    // if enemy to the left of player, skip this part
    BMI(SetShim);
    // set to face left
    iny();
    // check walking timer
    lda(ABSX(EnemyIntervalTimer));
    // if not yet expired, skip to set moving direction
    BNE(SetShim);
    lda(IMM(0xf8));
    // otherwise, make the hammer bro walk left towards player
    sta(ABSX(Enemy_X_Speed));
    JMP(SetShim);
}
void SetShim() {
    _debug("SetShim", __FILE__, __LINE__);
    // set moving direction
    sty(ABSX(Enemy_MovingDir));
    JMP(MoveNormalEnemy);
}
void MoveNormalEnemy() {
    _debug("MoveNormalEnemy", __FILE__, __LINE__);
    // init Y to leave horizontal movement as-is
    ldy(IMM(0x0));
    lda(ABSX(Enemy_State));
    // check enemy state for d6 set, if set skip
    anda(IMM(0b1000000));
    // to move enemy vertically, then horizontally if necessary
    BNE(FallE);
    lda(ABSX(Enemy_State));
    // check enemy state for d7 set
    asl();
    // if set, branch to move enemy horizontally
    BCS(SteadM);
    lda(ABSX(Enemy_State));
    // check enemy state for d5 set
    anda(IMM(0b100000));
    // if set, branch to move defeated enemy object
    BNE(MoveDefeatedEnemy);
    lda(ABSX(Enemy_State));
    // check d2-d0 of enemy state for any set bits
    anda(IMM(0b111));
    // if enemy in normal state, branch to move enemy horizontally
    BEQ(SteadM);
    cmp(IMM(0x5));
    // if enemy in state used by spiny's egg, go ahead here
    BEQ(FallE);
    cmp(IMM(0x3));
    // if enemy in states $03 or $04, skip ahead to yet another part
    BCS(ReviveStunned);
    JMP(FallE);
}
void FallE() {
    _debug("FallE", __FILE__, __LINE__);
    // do a sub here to move enemy downwards
    JSR(MoveD_EnemyVertically);
    ldy(IMM(0x0));
    // check for enemy state $02
    lda(ABSX(Enemy_State));
    cmp(IMM(0x2));
    // if found, branch to move enemy horizontally
    BEQ(MEHor);
    // check for d6 set
    anda(IMM(0b1000000));
    // if not set, branch to something else
    BEQ(SteadM);
    lda(ABSX(Enemy_ID));
    // check for power-up object
    cmp(IMM(PowerUpObject));
    BEQ(SteadM);
    // if any other object where d6 set, jump to set Y
    BNE(SlowM);
    JMP(MEHor);
}
void MEHor() {
    _debug("MEHor", __FILE__, __LINE__);
    // jump here to move enemy horizontally for <> $2e and d6 set
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}
void SlowM() {
    _debug("SlowM", __FILE__, __LINE__);
    // if branched here, increment Y to slow horizontal movement
    ldy(IMM(0x1));
    JMP(SteadM);
}
void SteadM() {
    _debug("SteadM", __FILE__, __LINE__);
    // get current horizontal speed
    lda(ABSX(Enemy_X_Speed));
    // save to stack
    pha();
    // if not moving or moving right, skip, leave Y alone
    BPL(AddHS);
    iny();
    // otherwise increment Y to next data
    iny();
    JMP(AddHS);
}
void AddHS() {
    _debug("AddHS", __FILE__, __LINE__);
    clc();
    // add value here to slow enemy down if necessary
    adc(ABSY(0x8000+offsetof(G, XSpeedAdderData)));
    // save as horizontal speed temporarily
    sta(ABSX(Enemy_X_Speed));
    // then do a sub to move horizontally
    JSR(MoveEnemyHorizontally);
    pla();
    // get old horizontal speed from stack and return to
    sta(ABSX(Enemy_X_Speed));
    // original memory location, then leave
    return;
}
void ReviveStunned() {
    _debug("ReviveStunned", __FILE__, __LINE__);
    // if enemy timer not expired yet,
    lda(ABSX(EnemyIntervalTimer));
    // skip ahead to something else
    BNE(ChkKillGoomba);
    // otherwise initialize enemy state to normal
    sta(ABSX(Enemy_State));
    lda(ABS(FrameCounter));
    // get d0 of frame counter
    anda(IMM(0x1));
    // use as Y and increment for movement direction
    tay();
    iny();
    // store as pseudorandom movement direction
    sty(ABSX(Enemy_MovingDir));
    // decrement for use as pointer
    dey();
    // check primary hard mode flag
    lda(ABS(PrimaryHardMode));
    // if not set, use pointer as-is
    BEQ(SetRSpd);
    iny();
    // otherwise increment 2 bytes to next data
    iny();
    JMP(SetRSpd);
}
void SetRSpd() {
    _debug("SetRSpd", __FILE__, __LINE__);
    // load and store new horizontal speed
    lda(ABSY(0x8000+offsetof(G, RevivedXSpeed)));
    // and leave
    sta(ABSX(Enemy_X_Speed));
    return;
}
void MoveDefeatedEnemy() {
    _debug("MoveDefeatedEnemy", __FILE__, __LINE__);
    // execute sub to move defeated enemy downwards
    JSR(MoveD_EnemyVertically);
    // now move defeated enemy horizontally
    JMP(MoveEnemyHorizontally);
    JMP(ChkKillGoomba);
}
void ChkKillGoomba() {
    _debug("ChkKillGoomba", __FILE__, __LINE__);
    // check to see if enemy timer has reached
    cmp(IMM(0xe));
    // a certain point, and branch to leave if not
    BNE(NKGmba);
    lda(ABSX(Enemy_ID));
    // check for goomba object
    cmp(IMM(Goomba));
    // branch if not found
    BNE(NKGmba);
    // otherwise, kill this goomba object
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}
void NKGmba() {
    _debug("NKGmba", __FILE__, __LINE__);
    // leave!
    return;
}
void MoveJumpingEnemy() {
    _debug("MoveJumpingEnemy", __FILE__, __LINE__);
    // do a sub to impose gravity on green paratroopa
    JSR(MoveJ_EnemyVertically);
    // jump to move enemy horizontally
    JMP(MoveEnemyHorizontally);
    JMP(ProcMoveRedPTroopa);
}
void ProcMoveRedPTroopa() {
    _debug("ProcMoveRedPTroopa", __FILE__, __LINE__);
    lda(ABSX(Enemy_Y_Speed));
    // check for any vertical force or speed
    ora(ABSX(Enemy_Y_MoveForce));
    // branch if any found
    BNE(MoveRedPTUpOrDown);
    // initialize something here
    sta(ABSX(Enemy_YMF_Dummy));
    // check current vs. original vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    cmp(ABSX(RedPTroopaOrigXPos));
    // if current => original, skip ahead to more code
    BCS(MoveRedPTUpOrDown);
    // get frame counter
    lda(ABS(FrameCounter));
    // mask out all but 3 LSB
    anda(IMM(0b111));
    // if any bits set, branch to leave
    BNE(NoIncPT);
    // otherwise increment red paratroopa's vertical position
    inc(ABSX(Enemy_Y_Position));
    JMP(NoIncPT);
}
void NoIncPT() {
    _debug("NoIncPT", __FILE__, __LINE__);
    // leave
    return;
}
void MoveRedPTUpOrDown() {
    _debug("MoveRedPTUpOrDown", __FILE__, __LINE__);
    // check current vs. central vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    cmp(ABSX(RedPTroopaCenterYPos));
    // if current < central, jump to move downwards
    BCC(MovPTDwn);
    // otherwise jump to move upwards
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}
void MovPTDwn() {
    _debug("MovPTDwn", __FILE__, __LINE__);
    // move downwards
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}
// $00 - used to store adder for movement, also used as adder for platform
// $01 - used to store maximum value for secondary counter
void MoveFlyGreenPTroopa() {
    _debug("MoveFlyGreenPTroopa", __FILE__, __LINE__);
    // do sub to increment primary and secondary counters
    JSR(XMoveCntr_GreenPTroopa);
    // do sub to move green paratroopa accordingly, and horizontally
    JSR(MoveWithXMCntrs);
    // set Y to move green paratroopa down
    ldy(IMM(0x1));
    lda(ABS(FrameCounter));
    // check frame counter 2 LSB for any bits set
    anda(IMM(0b11));
    // branch to leave if set to move up/down every fourth frame
    BNE(NoMGPT);
    lda(ABS(FrameCounter));
    // check frame counter for d6 set
    anda(IMM(0b1000000));
    // branch to move green paratroopa down if set
    BNE(YSway);
    // otherwise set Y to move green paratroopa up
    ldy(IMM(0xff));
    JMP(YSway);
}
void YSway() {
    _debug("YSway", __FILE__, __LINE__);
    // store adder here
    sty(ABS(0x0));
    lda(ABSX(Enemy_Y_Position));
    // add or subtract from vertical position
    clc();
    // to give green paratroopa a wavy flight
    adc(ABS(0x0));
    sta(ABSX(Enemy_Y_Position));
    JMP(NoMGPT);
}
void NoMGPT() {
    _debug("NoMGPT", __FILE__, __LINE__);
    // leave!
    return;
}
void XMoveCntr_GreenPTroopa() {
    _debug("XMoveCntr_GreenPTroopa", __FILE__, __LINE__);
    // load preset maximum value for secondary counter
    lda(IMM(0x13));
    JMP(XMoveCntr_Platform);
}
void XMoveCntr_Platform() {
    _debug("XMoveCntr_Platform", __FILE__, __LINE__);
    // store value here
    sta(ABS(0x1));
    lda(ABS(FrameCounter));
    // branch to leave if not on
    anda(IMM(0b11));
    // every fourth frame
    BNE(NoIncXM);
    // get secondary counter
    ldy(ABSX(XMoveSecondaryCounter));
    // get primary counter
    lda(ABSX(XMovePrimaryCounter));
    lsr();
    // if d0 of primary counter set, branch elsewhere
    BCS(DecSeXM);
    // compare secondary counter to preset maximum value
    cpy(ABS(0x1));
    // if equal, branch ahead of this part
    BEQ(IncPXM);
    // increment secondary counter and leave
    inc(ABSX(XMoveSecondaryCounter));
    JMP(NoIncXM);
}
void NoIncXM() {
    _debug("NoIncXM", __FILE__, __LINE__);
    return;
}
void IncPXM() {
    _debug("IncPXM", __FILE__, __LINE__);
    // increment primary counter and leave
    inc(ABSX(XMovePrimaryCounter));
    return;
}
void DecSeXM() {
    _debug("DecSeXM", __FILE__, __LINE__);
    // put secondary counter in A
    tya();
    // if secondary counter at zero, branch back
    BEQ(IncPXM);
    // otherwise decrement secondary counter and leave
    dec(ABSX(XMoveSecondaryCounter));
    return;
}
void MoveWithXMCntrs() {
    _debug("MoveWithXMCntrs", __FILE__, __LINE__);
    // save secondary counter to stack
    lda(ABSX(XMoveSecondaryCounter));
    pha();
    // set value here by default
    ldy(IMM(0x1));
    lda(ABSX(XMovePrimaryCounter));
    // if d1 of primary counter is
    anda(IMM(0b10));
    // set, branch ahead of this part here
    BNE(XMRight);
    lda(ABSX(XMoveSecondaryCounter));
    // otherwise change secondary
    eor(IMM(0xff));
    // counter to two's compliment
    clc();
    adc(IMM(0x1));
    sta(ABSX(XMoveSecondaryCounter));
    // load alternate value here
    ldy(IMM(0x2));
    JMP(XMRight);
}
void XMRight() {
    _debug("XMRight", __FILE__, __LINE__);
    // store as moving direction
    sty(ABSX(Enemy_MovingDir));
    JSR(MoveEnemyHorizontally);
    // save value obtained from sub here
    sta(ABS(0x0));
    // get secondary counter from stack
    pla();
    // and return to original place
    sta(ABSX(XMoveSecondaryCounter));
    return;
}
void MoveBloober() {
    _debug("MoveBloober", __FILE__, __LINE__);
    lda(ABSX(Enemy_State));
    // check enemy state for d5 set
    anda(IMM(0b100000));
    // branch if set to move defeated bloober
    BNE(MoveDefeatedBloober);
    // use secondary hard mode flag as offset
    ldy(ABS(SecondaryHardMode));
    // get LSFR
    lda(ABSX(((PseudoRandomBitReg) + (1))));
    // mask out bits in LSFR using bitmask loaded with offset
    anda(ABSY(0x8000+offsetof(G, BlooberBitmasks)));
    // if any bits set, skip ahead to make swim
    BNE(BlooberSwim);
    txa();
    // check to see if on second or fourth slot (1 or 3)
    lsr();
    // if not, branch to figure out moving direction
    BCC(FBLeft);
    // otherwise, load player's moving direction and
    ldy(ABS(Player_MovingDir));
    // do an unconditional branch to set
    BCS(SBMDir);
    JMP(FBLeft);
}
void FBLeft() {
    _debug("FBLeft", __FILE__, __LINE__);
    // set left moving direction by default
    ldy(IMM(0x2));
    // get horizontal difference between player and bloober
    JSR(PlayerEnemyDiff);
    // if enemy to the right of player, keep left
    BPL(SBMDir);
    // otherwise decrement to set right moving direction
    dey();
    JMP(SBMDir);
}
void SBMDir() {
    _debug("SBMDir", __FILE__, __LINE__);
    // set moving direction of bloober, then continue on here
    sty(ABSX(Enemy_MovingDir));
    JMP(BlooberSwim);
}
void BlooberSwim() {
    _debug("BlooberSwim", __FILE__, __LINE__);
    // execute sub to make bloober swim characteristically
    JSR(ProcSwimmingB);
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    sec();
    // subtract movement force
    sbc(ABSX(Enemy_Y_MoveForce));
    // check to see if position is above edge of status bar
    cmp(IMM(0x20));
    // if so, don't do it
    BCC(SwimX);
    // otherwise, set new vertical position, make bloober swim
    sta(ABSX(Enemy_Y_Position));
    JMP(SwimX);
}
void SwimX() {
    _debug("SwimX", __FILE__, __LINE__);
    // check moving direction
    ldy(ABSX(Enemy_MovingDir));
    dey();
    // if moving to the left, branch to second part
    BNE(LeftSwim);
    lda(ABSX(Enemy_X_Position));
    // add movement speed to horizontal coordinate
    clc();
    adc(ABSX(BlooperMoveSpeed));
    // store result as new horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // add carry to page location
    adc(IMM(0x0));
    // store as new page location and leave
    sta(ABSX(Enemy_PageLoc));
    return;
}
void LeftSwim() {
    _debug("LeftSwim", __FILE__, __LINE__);
    lda(ABSX(Enemy_X_Position));
    // subtract movement speed from horizontal coordinate
    sec();
    sbc(ABSX(BlooperMoveSpeed));
    // store result as new horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // subtract borrow from page location
    sbc(IMM(0x0));
    // store as new page location and leave
    sta(ABSX(Enemy_PageLoc));
    return;
}
void MoveDefeatedBloober() {
    _debug("MoveDefeatedBloober", __FILE__, __LINE__);
    // jump to move defeated bloober downwards
    JMP(MoveEnemySlowVert);
    JMP(ProcSwimmingB);
}
void ProcSwimmingB() {
    _debug("ProcSwimmingB", __FILE__, __LINE__);
    // get enemy's movement counter
    lda(ABSX(BlooperMoveCounter));
    // check for d1 set
    anda(IMM(0b10));
    // branch if set
    BNE(ChkForFloatdown);
    lda(ABS(FrameCounter));
    // get 3 LSB of frame counter
    anda(IMM(0b111));
    // and save it to the stack
    pha();
    // get enemy's movement counter
    lda(ABSX(BlooperMoveCounter));
    // check for d0 set
    lsr();
    // branch if set
    BCS(SlowSwim);
    // pull 3 LSB of frame counter from the stack
    pla();
    // branch to leave, execute code only every eighth frame
    BNE(BSwimE);
    lda(ABSX(Enemy_Y_MoveForce));
    // add to movement force to speed up swim
    clc();
    adc(IMM(0x1));
    // set movement force
    sta(ABSX(Enemy_Y_MoveForce));
    // set as movement speed
    sta(ABSX(BlooperMoveSpeed));
    cmp(IMM(0x2));
    // if certain horizontal speed, branch to leave
    BNE(BSwimE);
    // otherwise increment movement counter
    inc(ABSX(BlooperMoveCounter));
    JMP(BSwimE);
}
void BSwimE() {
    _debug("BSwimE", __FILE__, __LINE__);
    return;
}
void SlowSwim() {
    _debug("SlowSwim", __FILE__, __LINE__);
    // pull 3 LSB of frame counter from the stack
    pla();
    // branch to leave, execute code only every eighth frame
    BNE(NoSSw);
    lda(ABSX(Enemy_Y_MoveForce));
    // subtract from movement force to slow swim
    sec();
    sbc(IMM(0x1));
    // set movement force
    sta(ABSX(Enemy_Y_MoveForce));
    // set as movement speed
    sta(ABSX(BlooperMoveSpeed));
    // if any speed, branch to leave
    BNE(NoSSw);
    // otherwise increment movement counter
    inc(ABSX(BlooperMoveCounter));
    lda(IMM(0x2));
    // set enemy's timer
    sta(ABSX(EnemyIntervalTimer));
    JMP(NoSSw);
}
void NoSSw() {
    _debug("NoSSw", __FILE__, __LINE__);
    // leave
    return;
}
void ChkForFloatdown() {
    _debug("ChkForFloatdown", __FILE__, __LINE__);
    // get enemy timer
    lda(ABSX(EnemyIntervalTimer));
    // branch if expired
    BEQ(ChkNearPlayer);
    JMP(Floatdown);
}
void Floatdown() {
    _debug("Floatdown", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // check for d0 set
    lsr();
    // branch to leave on every other frame
    BCS(NoFD);
    // otherwise increment vertical coordinate
    inc(ABSX(Enemy_Y_Position));
    JMP(NoFD);
}
void NoFD() {
    _debug("NoFD", __FILE__, __LINE__);
    // leave
    return;
}
void ChkNearPlayer() {
    _debug("ChkNearPlayer", __FILE__, __LINE__);
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // add sixteen pixels
    adc(IMM(0x10));
    // compare result with player's vertical coordinate
    cmp(ABS(Player_Y_Position));
    // if modified vertical less than player's, branch
    BCC(Floatdown);
    lda(IMM(0x0));
    // otherwise nullify movement counter
    sta(ABSX(BlooperMoveCounter));
    return;
}
void MoveBulletBill() {
    _debug("MoveBulletBill", __FILE__, __LINE__);
    // check bullet bill's enemy object state for d5 set
    lda(ABSX(Enemy_State));
    anda(IMM(0b100000));
    // if not set, continue with movement code
    BEQ(NotDefB);
    // otherwise jump to move defeated bullet bill downwards
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}
void NotDefB() {
    _debug("NotDefB", __FILE__, __LINE__);
    // set bullet bill's horizontal speed
    lda(IMM(0xe8));
    // and move it accordingly (note: this bullet bill
    sta(ABSX(Enemy_X_Speed));
    // object occurs in frenzy object $17, not from cannons)
    JMP(MoveEnemyHorizontally);
    JMP(MoveSwimmingCheepCheep);
}
void MoveSwimmingCheepCheep() {
    _debug("MoveSwimmingCheepCheep", __FILE__, __LINE__);
    // check cheep-cheep's enemy object state
    lda(ABSX(Enemy_State));
    // for d5 set
    anda(IMM(0b100000));
    // if not set, continue with movement code
    BEQ(CCSwim);
    // otherwise jump to move defeated cheep-cheep downwards
    JMP(MoveEnemySlowVert);
    JMP(CCSwim);
}
void CCSwim() {
    _debug("CCSwim", __FILE__, __LINE__);
    // save enemy state in $03
    sta(ABS(0x3));
    // get enemy identifier
    lda(ABSX(Enemy_ID));
    sec();
    // subtract ten for cheep-cheep identifiers
    sbc(IMM(0xa));
    // use as offset
    tay();
    // load value here
    lda(ABSY(0x8000+offsetof(G, SwimCCXMoveData)));
    sta(ABS(0x2));
    // load horizontal force
    lda(ABSX(Enemy_X_MoveForce));
    sec();
    // subtract preset value from horizontal force
    sbc(ABS(0x2));
    // store as new horizontal force
    sta(ABSX(Enemy_X_MoveForce));
    // get horizontal coordinate
    lda(ABSX(Enemy_X_Position));
    // subtract borrow (thus moving it slowly)
    sbc(IMM(0x0));
    // and save as new horizontal coordinate
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // subtract borrow again, this time from the
    sbc(IMM(0x0));
    // page location, then save
    sta(ABSX(Enemy_PageLoc));
    lda(IMM(0x20));
    // save new value here
    sta(ABS(0x2));
    // check enemy object offset
    cpx(IMM(0x2));
    // if in first or second slot, branch to leave
    BCC(ExSwCC);
    // check movement flag
    lda(ABSX(CheepCheepMoveMFlag));
    // if movement speed set to $00,
    cmp(IMM(0x10));
    // branch to move upwards
    BCC(CCSwimUpwards);
    lda(ABSX(Enemy_YMF_Dummy));
    clc();
    // add preset value to dummy variable to get carry
    adc(ABS(0x2));
    // and save dummy
    sta(ABSX(Enemy_YMF_Dummy));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // add carry to it plus enemy state to slowly move it downwards
    adc(ABS(0x3));
    // save as new vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    lda(ABSX(Enemy_Y_HighPos));
    // add carry to page location and
    adc(IMM(0x0));
    // jump to end of movement code
    JMP(ChkSwimYPos);
    JMP(CCSwimUpwards);
}
void CCSwimUpwards() {
    _debug("CCSwimUpwards", __FILE__, __LINE__);
    lda(ABSX(Enemy_YMF_Dummy));
    sec();
    // subtract preset value to dummy variable to get borrow
    sbc(ABS(0x2));
    // and save dummy
    sta(ABSX(Enemy_YMF_Dummy));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // subtract borrow to it plus enemy state to slowly move it upwards
    sbc(ABS(0x3));
    // save as new vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    lda(ABSX(Enemy_Y_HighPos));
    // subtract borrow from page location
    sbc(IMM(0x0));
    JMP(ChkSwimYPos);
}
void ChkSwimYPos() {
    _debug("ChkSwimYPos", __FILE__, __LINE__);
    // save new page location here
    sta(ABSX(Enemy_Y_HighPos));
    // load movement speed to upwards by default
    ldy(IMM(0x0));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    sec();
    // subtract original coordinate from current
    sbc(ABSX(CheepCheepOrigYPos));
    // if result positive, skip to next part
    BPL(YPDiff);
    // otherwise load movement speed to downwards
    ldy(IMM(0x10));
    eor(IMM(0xff));
    // get two's compliment of result
    clc();
    // to obtain total difference of original vs. current
    adc(IMM(0x1));
    JMP(YPDiff);
}
void YPDiff() {
    _debug("YPDiff", __FILE__, __LINE__);
    // if difference between original vs. current vertical
    cmp(IMM(0xf));
    // coordinates < 15 pixels, leave movement speed alone
    BCC(ExSwCC);
    tya();
    // otherwise change movement speed
    sta(ABSX(CheepCheepMoveMFlag));
    JMP(ExSwCC);
}
void ExSwCC() {
    _debug("ExSwCC", __FILE__, __LINE__);
    // leave
    return;
}
void ProcFirebar() {
    _debug("ProcFirebar", __FILE__, __LINE__);
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // check for d3 set
    lda(ABS(Enemy_OffscreenBits));
    // if so, branch to leave
    anda(IMM(0b1000));
    BNE(SkipFBar);
    // if master timer control set, branch
    lda(ABS(TimerControl));
    // ahead of this part
    BNE(SusFbar);
    // load spinning speed of firebar
    lda(ABSX(FirebarSpinSpeed));
    // modify current spinstate
    JSR(FirebarSpin);
    // mask out all but 5 LSB
    anda(IMM(0b11111));
    // and store as new high byte of spinstate
    sta(ABSX(FirebarSpinState_High));
    JMP(SusFbar);
}
void SusFbar() {
    _debug("SusFbar", __FILE__, __LINE__);
    // get high byte of spinstate
    lda(ABSX(FirebarSpinState_High));
    // check enemy identifier
    ldy(ABSX(Enemy_ID));
    cpy(IMM(0x1f));
    // if < $1f (long firebar), branch
    BCC(SetupGFB);
    // check high byte of spinstate
    cmp(IMM(0x8));
    // if eight, branch to change
    BEQ(SkpFSte);
    cmp(IMM(0x18));
    // if not at twenty-four branch to not change
    BNE(SetupGFB);
    JMP(SkpFSte);
}
void SkpFSte() {
    _debug("SkpFSte", __FILE__, __LINE__);
    clc();
    // add one to spinning thing to avoid horizontal state
    adc(IMM(0x1));
    sta(ABSX(FirebarSpinState_High));
    JMP(SetupGFB);
}
void SetupGFB() {
    _debug("SetupGFB", __FILE__, __LINE__);
    // save high byte of spinning thing, modified or otherwise
    sta(ABS(0xef));
    // get relative coordinates to screen
    JSR(RelativeEnemyPosition);
    // do a sub here (residual, too early to be used now)
    JSR(GetFirebarPosition);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // get relative vertical coordinate
    lda(ABS(Enemy_Rel_YPos));
    // store as Y in OAM data
    sta(ABSY(Sprite_Y_Position));
    // also save here
    sta(ABS(0x7));
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    // store as X in OAM data
    sta(ABSY(Sprite_X_Position));
    // also save here
    sta(ABS(0x6));
    lda(IMM(0x1));
    // set $01 value here (not necessary)
    sta(ABS(0x0));
    // draw fireball part and do collision detection
    JSR(FirebarCollision);
    // load value for short firebars by default
    ldy(IMM(0x5));
    lda(ABSX(Enemy_ID));
    // are we doing a long firebar?
    cmp(IMM(0x1f));
    // no, branch then
    BCC(SetMFbar);
    // otherwise load value for long firebars
    ldy(IMM(0xb));
    JMP(SetMFbar);
}
void SetMFbar() {
    _debug("SetMFbar", __FILE__, __LINE__);
    // store maximum value for length of firebars
    sty(ABS(0xed));
    lda(IMM(0x0));
    // initialize counter here
    sta(ABS(0x0));
    JMP(DrawFbar);
}
void DrawFbar() {
    _debug("DrawFbar", __FILE__, __LINE__);
    // load high byte of spinstate
    lda(ABS(0xef));
    // get fireball position data depending on firebar part
    JSR(GetFirebarPosition);
    // position it properly, draw it and do collision detection
    JSR(DrawFirebar_Collision);
    // check which firebar part
    lda(ABS(0x0));
    cmp(IMM(0x4));
    BNE(NextFbar);
    // if we arrive at fifth firebar part,
    ldy(ABS(DuplicateObj_Offset));
    // get offset from long firebar and load OAM data offset
    lda(ABSY(Enemy_SprDataOffset));
    // using long firebar offset, then store as new one here
    sta(ABS(0x6));
    JMP(NextFbar);
}
void NextFbar() {
    _debug("NextFbar", __FILE__, __LINE__);
    // move onto the next firebar part
    inc(ABS(0x0));
    lda(ABS(0x0));
    // if we end up at the maximum part, go on and leave
    cmp(ABS(0xed));
    // otherwise go back and do another
    BCC(DrawFbar);
    JMP(SkipFBar);
}
void SkipFBar() {
    _debug("SkipFBar", __FILE__, __LINE__);
    return;
}
void DrawFirebar_Collision() {
    _debug("DrawFirebar_Collision", __FILE__, __LINE__);
    // store mirror data elsewhere
    lda(ABS(0x3));
    sta(ABS(0x5));
    // load OAM data offset for firebar
    ldy(ABS(0x6));
    // load horizontal adder we got from position loader
    lda(ABS(0x1));
    // shift LSB of mirror data
    lsr(ABS(0x5));
    // if carry was set, skip this part
    BCS(AddHA);
    eor(IMM(0xff));
    // otherwise get two's compliment of horizontal adder
    adc(IMM(0x1));
    JMP(AddHA);
}
void AddHA() {
    _debug("AddHA", __FILE__, __LINE__);
    // add horizontal coordinate relative to screen to
    clc();
    // horizontal adder, modified or otherwise
    adc(ABS(Enemy_Rel_XPos));
    // store as X coordinate here
    sta(ABSY(Sprite_X_Position));
    // store here for now, note offset is saved in Y still
    sta(ABS(0x6));
    // compare X coordinate of sprite to original X of firebar
    cmp(ABS(Enemy_Rel_XPos));
    // if sprite coordinate => original coordinate, branch
    BCS(SubtR1);
    lda(ABS(Enemy_Rel_XPos));
    // otherwise subtract sprite X from the
    sec();
    // original one and skip this part
    sbc(ABS(0x6));
    JMP(ChkFOfs);
    JMP(SubtR1);
}
void SubtR1() {
    _debug("SubtR1", __FILE__, __LINE__);
    // subtract original X from the
    sec();
    // current sprite X
    sbc(ABS(Enemy_Rel_XPos));
    JMP(ChkFOfs);
}
void ChkFOfs() {
    _debug("ChkFOfs", __FILE__, __LINE__);
    // if difference of coordinates within a certain range,
    cmp(IMM(0x59));
    // continue by handling vertical adder
    BCC(VAHandl);
    // otherwise, load offscreen Y coordinate
    lda(IMM(0xf8));
    // and unconditionally branch to move sprite offscreen
    BNE(SetVFbr);
    JMP(VAHandl);
}
void VAHandl() {
    _debug("VAHandl", __FILE__, __LINE__);
    // if vertical relative coordinate offscreen,
    lda(ABS(Enemy_Rel_YPos));
    // skip ahead of this part and write into sprite Y coordinate
    cmp(IMM(0xf8));
    BEQ(SetVFbr);
    // load vertical adder we got from position loader
    lda(ABS(0x2));
    // shift LSB of mirror data one more time
    lsr(ABS(0x5));
    // if carry was set, skip this part
    BCS(AddVA);
    eor(IMM(0xff));
    // otherwise get two's compliment of second part
    adc(IMM(0x1));
    JMP(AddVA);
}
void AddVA() {
    _debug("AddVA", __FILE__, __LINE__);
    // add vertical coordinate relative to screen to
    clc();
    // the second data, modified or otherwise
    adc(ABS(Enemy_Rel_YPos));
    JMP(SetVFbr);
}
void SetVFbr() {
    _debug("SetVFbr", __FILE__, __LINE__);
    // store as Y coordinate here
    sta(ABSY(Sprite_Y_Position));
    // also store here for now
    sta(ABS(0x7));
    JMP(FirebarCollision);
}
void FirebarCollision() {
    _debug("FirebarCollision", __FILE__, __LINE__);
    // run sub here to draw current tile of firebar
    JSR(DrawFirebar);
    // return OAM data offset and save
    tya();
    // to the stack for now
    pha();
    // if star mario invincibility timer
    lda(ABS(StarInvincibleTimer));
    // or master timer controls set
    ora(ABS(TimerControl));
    // then skip all of this
    BNE(NoColFB);
    // otherwise initialize counter
    sta(ABS(0x5));
    ldy(ABS(Player_Y_HighPos));
    // if player's vertical high byte offscreen,
    dey();
    // skip all of this
    BNE(NoColFB);
    // get player's vertical position
    ldy(ABS(Player_Y_Position));
    // get player's size
    lda(ABS(PlayerSize));
    // if player small, branch to alter variables
    BNE(AdjSm);
    lda(ABS(CrouchingFlag));
    // if player big and not crouching, jump ahead
    BEQ(BigJp);
    JMP(AdjSm);
}
void AdjSm() {
    _debug("AdjSm", __FILE__, __LINE__);
    // if small or big but crouching, execute this part
    inc(ABS(0x5));
    // first increment our counter twice (setting $02 as flag)
    inc(ABS(0x5));
    tya();
    // then add 24 pixels to the player's
    clc();
    // vertical coordinate
    adc(IMM(0x18));
    tay();
    JMP(BigJp);
}
void BigJp() {
    _debug("BigJp", __FILE__, __LINE__);
    // get vertical coordinate, altered or otherwise, from Y
    tya();
    JMP(FBCLoop);
}
void FBCLoop() {
    _debug("FBCLoop", __FILE__, __LINE__);
    // subtract vertical position of firebar
    sec();
    // from the vertical coordinate of the player
    sbc(ABS(0x7));
    // if player lower on the screen than firebar,
    BPL(ChkVFBD);
    // skip two's compliment part
    eor(IMM(0xff));
    // otherwise get two's compliment
    clc();
    adc(IMM(0x1));
    JMP(ChkVFBD);
}
void ChkVFBD() {
    _debug("ChkVFBD", __FILE__, __LINE__);
    // if difference => 8 pixels, skip ahead of this part
    cmp(IMM(0x8));
    BCS(Chk2Ofs);
    // if firebar on far right on the screen, skip this,
    lda(ABS(0x6));
    // because, really, what's the point?
    cmp(IMM(0xf0));
    BCS(Chk2Ofs);
    // get OAM X coordinate for sprite #1
    lda(ABS(((Sprite_X_Position) + (4))));
    clc();
    // add four pixels
    adc(IMM(0x4));
    // store here
    sta(ABS(0x4));
    // subtract horizontal coordinate of firebar
    sec();
    // from the X coordinate of player's sprite 1
    sbc(ABS(0x6));
    // if modded X coordinate to the right of firebar
    BPL(ChkFBCl);
    // skip two's compliment part
    eor(IMM(0xff));
    // otherwise get two's compliment
    clc();
    adc(IMM(0x1));
    JMP(ChkFBCl);
}
void ChkFBCl() {
    _debug("ChkFBCl", __FILE__, __LINE__);
    // if difference < 8 pixels, collision, thus branch
    cmp(IMM(0x8));
    // to process
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}
void Chk2Ofs() {
    _debug("Chk2Ofs", __FILE__, __LINE__);
    // if value of $02 was set earlier for whatever reason,
    lda(ABS(0x5));
    // branch to increment OAM offset and leave, no collision
    cmp(IMM(0x2));
    BEQ(NoColFB);
    // otherwise get temp here and use as offset
    ldy(ABS(0x5));
    lda(ABS(Player_Y_Position));
    clc();
    // add value loaded with offset to player's vertical coordinate
    adc(ABSY(0x8000+offsetof(G, FirebarYPos)));
    // then increment temp and jump back
    inc(ABS(0x5));
    JMP(FBCLoop);
    JMP(ChgSDir);
}
void ChgSDir() {
    _debug("ChgSDir", __FILE__, __LINE__);
    // set movement direction by default
    ldx(IMM(0x1));
    // if OAM X coordinate of player's sprite 1
    lda(ABS(0x4));
    // is greater than horizontal coordinate of firebar
    cmp(ABS(0x6));
    // then do not alter movement direction
    BCS(SetSDir);
    // otherwise increment it
    inx();
    JMP(SetSDir);
}
void SetSDir() {
    _debug("SetSDir", __FILE__, __LINE__);
    // store movement direction here
    stx(ABS(Enemy_MovingDir));
    ldx(IMM(0x0));
    // save value written to $00 to stack
    lda(ABS(0x0));
    pha();
    // perform sub to hurt or kill player
    JSR(InjurePlayer);
    pla();
    // get value of $00 from stack
    sta(ABS(0x0));
    JMP(NoColFB);
}
void NoColFB() {
    _debug("NoColFB", __FILE__, __LINE__);
    // get OAM data offset
    pla();
    // add four to it and save
    clc();
    adc(IMM(0x4));
    sta(ABS(0x6));
    // get enemy object buffer offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void GetFirebarPosition() {
    _debug("GetFirebarPosition", __FILE__, __LINE__);
    // save high byte of spinstate to the stack
    pha();
    // mask out low nybble
    anda(IMM(0b1111));
    cmp(IMM(0x9));
    // if lower than $09, branch ahead
    BCC(GetHAdder);
    // otherwise get two's compliment to oscillate
    eor(IMM(0b1111));
    clc();
    adc(IMM(0x1));
    JMP(GetHAdder);
}
void GetHAdder() {
    _debug("GetHAdder", __FILE__, __LINE__);
    // store result, modified or not, here
    sta(ABS(0x1));
    // load number of firebar ball where we're at
    ldy(ABS(0x0));
    // load offset to firebar position data
    lda(ABSY(0x8000+offsetof(G, FirebarTblOffsets)));
    clc();
    // add oscillated high byte of spinstate
    adc(ABS(0x1));
    // to offset here and use as new offset
    tay();
    // get data here and store as horizontal adder
    lda(ABSY(0x8000+offsetof(G, FirebarPosLookupTbl)));
    sta(ABS(0x1));
    // pull whatever was in A from the stack
    pla();
    // save it again because we still need it
    pha();
    clc();
    // add eight this time, to get vertical adder
    adc(IMM(0x8));
    // mask out high nybble
    anda(IMM(0b1111));
    // if lower than $09, branch ahead
    cmp(IMM(0x9));
    BCC(GetVAdder);
    // otherwise get two's compliment
    eor(IMM(0b1111));
    clc();
    adc(IMM(0x1));
    JMP(GetVAdder);
}
void GetVAdder() {
    _debug("GetVAdder", __FILE__, __LINE__);
    // store result here
    sta(ABS(0x2));
    ldy(ABS(0x0));
    // load offset to firebar position data again
    lda(ABSY(0x8000+offsetof(G, FirebarTblOffsets)));
    clc();
    // this time add value in $02 to offset here and use as offset
    adc(ABS(0x2));
    tay();
    // get data here and store as vertica adder
    lda(ABSY(0x8000+offsetof(G, FirebarPosLookupTbl)));
    sta(ABS(0x2));
    // pull out whatever was in A one last time
    pla();
    // divide by eight or shift three to the right
    lsr();
    lsr();
    lsr();
    // use as offset
    tay();
    // load mirroring data here
    lda(ABSY(0x8000+offsetof(G, FirebarMirrorData)));
    // store
    sta(ABS(0x3));
    return;
}
void MoveFlyingCheepCheep() {
    _debug("MoveFlyingCheepCheep", __FILE__, __LINE__);
    // check cheep-cheep's enemy state
    lda(ABSX(Enemy_State));
    // for d5 set
    anda(IMM(0b100000));
    // branch to continue code if not set
    BEQ(FlyCC);
    lda(IMM(0x0));
    // otherwise clear sprite attributes
    sta(ABSX(Enemy_SprAttrib));
    // and jump to move defeated cheep-cheep downwards
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}
void FlyCC() {
    _debug("FlyCC", __FILE__, __LINE__);
    // move cheep-cheep horizontally based on speed and force
    JSR(MoveEnemyHorizontally);
    // set vertical movement amount
    ldy(IMM(0xd));
    // set maximum speed
    lda(IMM(0x5));
    // branch to impose gravity on flying cheep-cheep
    JSR(SetXMoveAmt);
    lda(ABSX(Enemy_Y_MoveForce));
    // get vertical movement force and
    lsr();
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    // save as offset (note this tends to go into reach of code)
    tay();
    // get vertical position
    lda(ABSX(Enemy_Y_Position));
    // subtract pseudorandom value based on offset from position
    sec();
    sbc(ABSY(0x8000+offsetof(G, PRandomSubtracter)));
    // if result within top half of screen, skip this part
    BPL(AddCCF);
    eor(IMM(0xff));
    // otherwise get two's compliment
    clc();
    adc(IMM(0x1));
    JMP(AddCCF);
}
void AddCCF() {
    _debug("AddCCF", __FILE__, __LINE__);
    // if result or two's compliment greater than eight,
    cmp(IMM(0x8));
    // skip to the end without changing movement force
    BCS(BPGet);
    lda(ABSX(Enemy_Y_MoveForce));
    clc();
    // otherwise add to it
    adc(IMM(0x10));
    sta(ABSX(Enemy_Y_MoveForce));
    // move high nybble to low again
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}
void BPGet() {
    _debug("BPGet", __FILE__, __LINE__);
    // load bg priority data and store (this is very likely
    lda(ABSY(0x8000+offsetof(G, FlyCCBPriority)));
    // broken or residual code, value is overwritten before
    sta(ABSX(Enemy_SprAttrib));
    // drawing it next frame), then leave
    return;
}
void MoveLakitu() {
    _debug("MoveLakitu", __FILE__, __LINE__);
    // check lakitu's enemy state
    lda(ABSX(Enemy_State));
    // for d5 set
    anda(IMM(0b100000));
    // if not set, continue with code
    BEQ(ChkLS);
    // otherwise jump to move defeated lakitu downwards
    JMP(MoveD_EnemyVertically);
    JMP(ChkLS);
}
void ChkLS() {
    _debug("ChkLS", __FILE__, __LINE__);
    // if lakitu's enemy state not set at all,
    lda(ABSX(Enemy_State));
    // go ahead and continue with code
    BEQ(Fr12S);
    lda(IMM(0x0));
    // otherwise initialize moving direction to move to left
    sta(ABSX(LakituMoveDirection));
    // initialize frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    lda(IMM(0x10));
    // load horizontal speed and do unconditional branch
    BNE(SetLSpd);
    JMP(Fr12S);
}
void Fr12S() {
    _debug("Fr12S", __FILE__, __LINE__);
    lda(IMM(Spiny));
    // set spiny identifier in frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    ldy(IMM(0x2));
    JMP(LdLDa);
}
void LdLDa() {
    _debug("LdLDa", __FILE__, __LINE__);
    // load values
    lda(ABSY(0x8000+offsetof(G, LakituDiffAdj)));
    // store in zero page
    sta(ABSY(0x1));
    dey();
    // do this until all values are stired
    BPL(LdLDa);
    // execute sub to set speed and create spinys
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}
void SetLSpd() {
    _debug("SetLSpd", __FILE__, __LINE__);
    // set movement speed returned from sub
    sta(ABSX(LakituMoveSpeed));
    // set moving direction to right by default
    ldy(IMM(0x1));
    lda(ABSX(LakituMoveDirection));
    // get LSB of moving direction
    anda(IMM(0x1));
    // if set, branch to the end to use moving direction
    BNE(SetLMov);
    lda(ABSX(LakituMoveSpeed));
    // get two's compliment of moving speed
    eor(IMM(0xff));
    clc();
    adc(IMM(0x1));
    // store as new moving speed
    sta(ABSX(LakituMoveSpeed));
    // increment moving direction to left
    iny();
    JMP(SetLMov);
}
void SetLMov() {
    _debug("SetLMov", __FILE__, __LINE__);
    // store moving direction
    sty(ABSX(Enemy_MovingDir));
    // move lakitu horizontally
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}
void PlayerLakituDiff() {
    _debug("PlayerLakituDiff", __FILE__, __LINE__);
    // set Y for default value
    ldy(IMM(0x0));
    // get horizontal difference between enemy and player
    JSR(PlayerEnemyDiff);
    // branch if enemy is to the right of the player
    BPL(ChkLakDif);
    // increment Y for left of player
    iny();
    lda(ABS(0x0));
    // get two's compliment of low byte of horizontal difference
    eor(IMM(0xff));
    clc();
    // store two's compliment as horizontal difference
    adc(IMM(0x1));
    sta(ABS(0x0));
    JMP(ChkLakDif);
}
void ChkLakDif() {
    _debug("ChkLakDif", __FILE__, __LINE__);
    // get low byte of horizontal difference
    lda(ABS(0x0));
    // if within a certain distance of player, branch
    cmp(IMM(0x3c));
    BCC(ChkPSpeed);
    // otherwise set maximum distance
    lda(IMM(0x3c));
    sta(ABS(0x0));
    // check if lakitu is in our current enemy slot
    lda(ABSX(Enemy_ID));
    cmp(IMM(Lakitu));
    // if not, branch elsewhere
    BNE(ChkPSpeed);
    // compare contents of Y, now in A
    tya();
    // to what is being used as horizontal movement direction
    cmp(ABSX(LakituMoveDirection));
    // if moving toward the player, branch, do not alter
    BEQ(ChkPSpeed);
    // if moving to the left beyond maximum distance,
    lda(ABSX(LakituMoveDirection));
    // branch and alter without delay
    BEQ(SetLMovD);
    // decrement horizontal speed
    dec(ABSX(LakituMoveSpeed));
    // if horizontal speed not yet at zero, branch to leave
    lda(ABSX(LakituMoveSpeed));
    BNE(ExMoveLak);
    JMP(SetLMovD);
}
void SetLMovD() {
    _debug("SetLMovD", __FILE__, __LINE__);
    // set horizontal direction depending on horizontal
    tya();
    // difference between enemy and player if necessary
    sta(ABSX(LakituMoveDirection));
    JMP(ChkPSpeed);
}
void ChkPSpeed() {
    _debug("ChkPSpeed", __FILE__, __LINE__);
    lda(ABS(0x0));
    // mask out all but four bits in the middle
    anda(IMM(0b111100));
    // divide masked difference by four
    lsr();
    lsr();
    // store as new value
    sta(ABS(0x0));
    // init offset
    ldy(IMM(0x0));
    lda(ABS(Player_X_Speed));
    // if player not moving horizontally, branch
    BEQ(SubDifAdj);
    lda(ABS(ScrollAmount));
    // if scroll speed not set, branch to same place
    BEQ(SubDifAdj);
    // otherwise increment offset
    iny();
    lda(ABS(Player_X_Speed));
    // if player not running, branch
    cmp(IMM(0x19));
    BCC(ChkSpinyO);
    lda(ABS(ScrollAmount));
    // if scroll speed below a certain amount, branch
    cmp(IMM(0x2));
    // to same place
    BCC(ChkSpinyO);
    // otherwise increment once more
    iny();
    JMP(ChkSpinyO);
}
void ChkSpinyO() {
    _debug("ChkSpinyO", __FILE__, __LINE__);
    // check for spiny object
    lda(ABSX(Enemy_ID));
    cmp(IMM(Spiny));
    // branch if not found
    BNE(ChkEmySpd);
    // if player not moving, skip this part
    lda(ABS(Player_X_Speed));
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}
void ChkEmySpd() {
    _debug("ChkEmySpd", __FILE__, __LINE__);
    // check vertical speed
    lda(ABSX(Enemy_Y_Speed));
    // branch if nonzero
    BNE(SubDifAdj);
    // otherwise reinit offset
    ldy(IMM(0x0));
    JMP(SubDifAdj);
}
void SubDifAdj() {
    _debug("SubDifAdj", __FILE__, __LINE__);
    // get one of three saved values from earlier
    lda(ABSY(0x1));
    // get saved horizontal difference
    ldy(ABS(0x0));
    JMP(SPixelLak);
}
void SPixelLak() {
    _debug("SPixelLak", __FILE__, __LINE__);
    // subtract one for each pixel of horizontal difference
    sec();
    // from one of three saved values
    sbc(IMM(0x1));
    dey();
    // branch until all pixels are subtracted, to adjust difference
    BPL(SPixelLak);
    JMP(ExMoveLak);
}
void ExMoveLak() {
    _debug("ExMoveLak", __FILE__, __LINE__);
    // leave!!!
    return;
}
void BridgeCollapse() {
    _debug("BridgeCollapse", __FILE__, __LINE__);
    // get enemy offset for bowser
    ldx(ABS(BowserFront_Offset));
    // check enemy object identifier for bowser
    lda(ABSX(Enemy_ID));
    // if not found, branch ahead,
    cmp(IMM(Bowser));
    // metatile removal not necessary
    BNE(SetM2);
    // store as enemy offset here
    stx(ABS(ObjectOffset));
    // if bowser in normal state, skip all of this
    lda(ABSX(Enemy_State));
    BEQ(RemoveBridge);
    // if bowser's state has d6 clear, skip to silence music
    anda(IMM(0b1000000));
    BEQ(SetM2);
    // check bowser's vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // if bowser not yet low enough, skip this part ahead
    cmp(IMM(0xe0));
    BCC(MoveD_Bowser);
    JMP(SetM2);
}
void SetM2() {
    _debug("SetM2", __FILE__, __LINE__);
    // silence music
    lda(IMM(Silence));
    sta(ABS(EventMusicQueue));
    // move onto next secondary mode in autoctrl mode
    inc(ABS(OperMode_Task));
    // jump to empty all enemy slots and then leave
    JMP(KillAllEnemies);
    JMP(MoveD_Bowser);
}
void MoveD_Bowser() {
    _debug("MoveD_Bowser", __FILE__, __LINE__);
    // do a sub to move bowser downwards
    JSR(MoveEnemySlowVert);
    // jump to draw bowser's front and rear, then leave
    JMP(BowserGfxHandler);
    JMP(RemoveBridge);
}
void RemoveBridge() {
    _debug("RemoveBridge", __FILE__, __LINE__);
    // decrement timer to control bowser's feet
    dec(ABS(BowserFeetCounter));
    // if not expired, skip all of this
    BNE(NoBFall);
    lda(IMM(0x4));
    // otherwise, set timer now
    sta(ABS(BowserFeetCounter));
    lda(ABS(BowserBodyControls));
    // invert bit to control bowser's feet
    eor(IMM(0x1));
    sta(ABS(BowserBodyControls));
    // put high byte of name table address here for now
    lda(IMM(0x22));
    sta(ABS(0x5));
    // get bridge collapse offset here
    ldy(ABS(BridgeCollapseOffset));
    // load low byte of name table address and store here
    lda(ABSY(0x8000+offsetof(G, BridgeCollapseData)));
    sta(ABS(0x4));
    // increment vram buffer offset
    ldy(ABS(VRAM_Buffer1_Offset));
    iny();
    // set offset for tile data for sub to draw blank metatile
    ldx(IMM(0xc));
    // do sub here to remove bowser's bridge metatiles
    JSR(RemBridge);
    // get enemy offset
    ldx(ABS(ObjectOffset));
    // set new vram buffer offset
    JSR(MoveVOffset);
    // load the fireworks/gunfire sound into the square 2 sfx
    lda(IMM(Sfx_Blast));
    // queue while at the same time loading the brick
    sta(ABS(Square2SoundQueue));
    // shatter sound into the noise sfx queue thus
    lda(IMM(Sfx_BrickShatter));
    // producing the unique sound of the bridge collapsing
    sta(ABS(NoiseSoundQueue));
    // increment bridge collapse offset
    inc(ABS(BridgeCollapseOffset));
    lda(ABS(BridgeCollapseOffset));
    // if bridge collapse offset has not yet reached
    cmp(IMM(0xf));
    // the end, go ahead and skip this part
    BNE(NoBFall);
    // initialize whatever vertical speed bowser has
    JSR(InitVStf);
    lda(IMM(0b1000000));
    // set bowser's state to one of defeated states (d6 set)
    sta(ABSX(Enemy_State));
    lda(IMM(Sfx_BowserFall));
    // play bowser defeat sound
    sta(ABS(Square2SoundQueue));
    JMP(NoBFall);
}
void NoBFall() {
    _debug("NoBFall", __FILE__, __LINE__);
    // jump to code that draws bowser
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}
void RunBowser() {
    _debug("RunBowser", __FILE__, __LINE__);
    // if d5 in enemy state is not set
    lda(ABSX(Enemy_State));
    // then branch elsewhere to run bowser
    anda(IMM(0b100000));
    BEQ(BowserControl);
    // otherwise check vertical position
    lda(ABSX(Enemy_Y_Position));
    // if above a certain point, branch to move defeated bowser
    cmp(IMM(0xe0));
    // otherwise proceed to KillAllEnemies
    BCC(MoveD_Bowser);
    JMP(KillAllEnemies);
}
void KillAllEnemies() {
    _debug("KillAllEnemies", __FILE__, __LINE__);
    // start with last enemy slot
    ldx(IMM(0x4));
    JMP(KillLoop);
}
void KillLoop() {
    _debug("KillLoop", __FILE__, __LINE__);
    // branch to kill enemy objects
    JSR(EraseEnemyObject);
    // move onto next enemy slot
    dex();
    // do this until all slots are emptied
    BPL(KillLoop);
    // empty frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void BowserControl() {
    _debug("BowserControl", __FILE__, __LINE__);
    lda(IMM(0x0));
    // empty frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    // if master timer control not set,
    lda(ABS(TimerControl));
    // skip jump and execute code here
    BEQ(ChkMouth);
    // otherwise, jump over a bunch of code
    JMP(SkipToFB);
    JMP(ChkMouth);
}
void ChkMouth() {
    _debug("ChkMouth", __FILE__, __LINE__);
    // check bowser's mouth
    lda(ABS(BowserBodyControls));
    // if bit clear, go ahead with code here
    BPL(FeetTmr);
    // otherwise skip a whole section starting here
    JMP(HammerChk);
    JMP(FeetTmr);
}
void FeetTmr() {
    _debug("FeetTmr", __FILE__, __LINE__);
    // decrement timer to control bowser's feet
    dec(ABS(BowserFeetCounter));
    // if not expired, skip this part
    BNE(ResetMDr);
    // otherwise, reset timer
    lda(IMM(0x20));
    sta(ABS(BowserFeetCounter));
    // and invert bit used
    lda(ABS(BowserBodyControls));
    // to control bowser's feet
    eor(IMM(0b1));
    sta(ABS(BowserBodyControls));
    JMP(ResetMDr);
}
void ResetMDr() {
    _debug("ResetMDr", __FILE__, __LINE__);
    // check frame counter
    lda(ABS(FrameCounter));
    // if not on every sixteenth frame, skip
    anda(IMM(0b1111));
    // ahead to continue code
    BNE(B_FaceP);
    // otherwise reset moving/facing direction every
    lda(IMM(0x2));
    // sixteen frames
    sta(ABSX(Enemy_MovingDir));
    JMP(B_FaceP);
}
void B_FaceP() {
    _debug("B_FaceP", __FILE__, __LINE__);
    // if timer set here expired,
    lda(ABSX(EnemyFrameTimer));
    // branch to next section
    BEQ(GetPRCmp);
    // get horizontal difference between player and bowser,
    JSR(PlayerEnemyDiff);
    // and branch if bowser to the right of the player
    BPL(GetPRCmp);
    lda(IMM(0x1));
    // set bowser to move and face to the right
    sta(ABSX(Enemy_MovingDir));
    lda(IMM(0x2));
    // set movement speed
    sta(ABS(BowserMovementSpeed));
    lda(IMM(0x20));
    // set timer here
    sta(ABSX(EnemyFrameTimer));
    // set timer used for bowser's flame
    sta(ABS(BowserFireBreathTimer));
    lda(ABSX(Enemy_X_Position));
    // if bowser to the right past a certain point,
    cmp(IMM(0xc8));
    // skip ahead to some other section
    BCS(HammerChk);
    JMP(GetPRCmp);
}
void GetPRCmp() {
    _debug("GetPRCmp", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    anda(IMM(0b11));
    // execute this code every fourth frame, otherwise branch
    BNE(HammerChk);
    lda(ABSX(Enemy_X_Position));
    // if bowser not at original horizontal position,
    cmp(ABS(BowserOrigXPos));
    // branch to skip this part
    BNE(GetDToO);
    lda(ABSX(PseudoRandomBitReg));
    // get pseudorandom offset
    anda(IMM(0b11));
    tay();
    // load value using pseudorandom offset
    lda(ABSY(0x8000+offsetof(G, PRandomRange)));
    // and store here
    sta(ABS(MaxRangeFromOrigin));
    JMP(GetDToO);
}
void GetDToO() {
    _debug("GetDToO", __FILE__, __LINE__);
    lda(ABSX(Enemy_X_Position));
    // add movement speed to bowser's horizontal
    clc();
    // coordinate and save as new horizontal position
    adc(ABS(BowserMovementSpeed));
    sta(ABSX(Enemy_X_Position));
    ldy(ABSX(Enemy_MovingDir));
    // if bowser moving and facing to the right, skip ahead
    cpy(IMM(0x1));
    BEQ(HammerChk);
    // set default movement speed here (move left)
    ldy(IMM(0xff));
    // get difference of current vs. original
    sec();
    // horizontal position
    sbc(ABS(BowserOrigXPos));
    // if current position to the right of original, skip ahead
    BPL(CompDToO);
    eor(IMM(0xff));
    // get two's compliment
    clc();
    adc(IMM(0x1));
    // set alternate movement speed here (move right)
    ldy(IMM(0x1));
    JMP(CompDToO);
}
void CompDToO() {
    _debug("CompDToO", __FILE__, __LINE__);
    // compare difference with pseudorandom value
    cmp(ABS(MaxRangeFromOrigin));
    // if difference < pseudorandom value, leave speed alone
    BCC(HammerChk);
    // otherwise change bowser's movement speed
    sty(ABS(BowserMovementSpeed));
    JMP(HammerChk);
}
void HammerChk() {
    _debug("HammerChk", __FILE__, __LINE__);
    // if timer set here not expired yet, skip ahead to
    lda(ABSX(EnemyFrameTimer));
    // some other section of code
    BNE(MakeBJump);
    // otherwise start by moving bowser downwards
    JSR(MoveEnemySlowVert);
    // check world number
    lda(ABS(WorldNumber));
    cmp(IMM(World6));
    // if world 1-5, skip this part (not time to throw hammers yet)
    BCC(SetHmrTmr);
    lda(ABS(FrameCounter));
    // check to see if it's time to execute sub
    anda(IMM(0b11));
    // if not, skip sub, otherwise
    BNE(SetHmrTmr);
    // execute sub on every fourth frame to spawn misc object (hammer)
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}
void SetHmrTmr() {
    _debug("SetHmrTmr", __FILE__, __LINE__);
    // get current vertical position
    lda(ABSX(Enemy_Y_Position));
    // if still above a certain point
    cmp(IMM(0x80));
    // then skip to world number check for flames
    BCC(ChkFireB);
    lda(ABSX(PseudoRandomBitReg));
    // get pseudorandom offset
    anda(IMM(0b11));
    tay();
    // get value using pseudorandom offset
    lda(ABSY(0x8000+offsetof(G, PRandomRange)));
    // set for timer here
    sta(ABSX(EnemyFrameTimer));
    JMP(SkipToFB);
}
void SkipToFB() {
    _debug("SkipToFB", __FILE__, __LINE__);
    // jump to execute flames code
    JMP(ChkFireB);
    JMP(MakeBJump);
}
void MakeBJump() {
    _debug("MakeBJump", __FILE__, __LINE__);
    // if timer not yet about to expire,
    cmp(IMM(0x1));
    // skip ahead to next part
    BNE(ChkFireB);
    // otherwise decrement vertical coordinate
    dec(ABSX(Enemy_Y_Position));
    // initialize movement amount
    JSR(InitVStf);
    lda(IMM(0xfe));
    // set vertical speed to move bowser upwards
    sta(ABSX(Enemy_Y_Speed));
    JMP(ChkFireB);
}
void ChkFireB() {
    _debug("ChkFireB", __FILE__, __LINE__);
    // check world number here
    lda(ABS(WorldNumber));
    // world 8?
    cmp(IMM(World8));
    // if so, execute this part here
    BEQ(SpawnFBr);
    // world 6-7?
    cmp(IMM(World6));
    // if so, skip this part here
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}
void SpawnFBr() {
    _debug("SpawnFBr", __FILE__, __LINE__);
    // check timer here
    lda(ABS(BowserFireBreathTimer));
    // if not expired yet, skip all of this
    BNE(BowserGfxHandler);
    lda(IMM(0x20));
    // set timer here
    sta(ABS(BowserFireBreathTimer));
    lda(ABS(BowserBodyControls));
    // invert bowser's mouth bit to open
    eor(IMM(0b10000000));
    // and close bowser's mouth
    sta(ABS(BowserBodyControls));
    // if bowser's mouth open, loop back
    BMI(ChkFireB);
    // get timing for bowser's flame
    JSR(SetFlameTimer);
    ldy(ABS(SecondaryHardMode));
    // if secondary hard mode flag not set, skip this
    BEQ(SetFBTmr);
    sec();
    // otherwise subtract from value in A
    sbc(IMM(0x10));
    JMP(SetFBTmr);
}
void SetFBTmr() {
    _debug("SetFBTmr", __FILE__, __LINE__);
    // set value as timer here
    sta(ABS(BowserFireBreathTimer));
    // put bowser's flame identifier
    lda(IMM(BowserFlame));
    // in enemy frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    JMP(BowserGfxHandler);
}
void BowserGfxHandler() {
    _debug("BowserGfxHandler", __FILE__, __LINE__);
    // do a sub here to process bowser's front
    JSR(ProcessBowserHalf);
    // load default value here to position bowser's rear
    ldy(IMM(0x10));
    // check moving direction
    lda(ABSX(Enemy_MovingDir));
    lsr();
    // if moving left, use default
    BCC(CopyFToR);
    // otherwise load alternate positioning value here
    ldy(IMM(0xf0));
    JMP(CopyFToR);
}
void CopyFToR() {
    _debug("CopyFToR", __FILE__, __LINE__);
    // move bowser's rear object position value to A
    tya();
    clc();
    // add to bowser's front object horizontal coordinate
    adc(ABSX(Enemy_X_Position));
    // get bowser's rear object offset
    ldy(ABS(DuplicateObj_Offset));
    // store A as bowser's rear horizontal coordinate
    sta(ABSY(Enemy_X_Position));
    lda(ABSX(Enemy_Y_Position));
    // add eight pixels to bowser's front object
    clc();
    // vertical coordinate and store as vertical coordinate
    adc(IMM(0x8));
    // for bowser's rear
    sta(ABSY(Enemy_Y_Position));
    lda(ABSX(Enemy_State));
    // copy enemy state directly from front to rear
    sta(ABSY(Enemy_State));
    lda(ABSX(Enemy_MovingDir));
    // copy moving direction also
    sta(ABSY(Enemy_MovingDir));
    // save enemy object offset of front to stack
    lda(ABS(ObjectOffset));
    pha();
    // put enemy object offset of rear as current
    ldx(ABS(DuplicateObj_Offset));
    stx(ABS(ObjectOffset));
    // set bowser's enemy identifier
    lda(IMM(Bowser));
    // store in bowser's rear object
    sta(ABSX(Enemy_ID));
    // do a sub here to process bowser's rear
    JSR(ProcessBowserHalf);
    pla();
    // get original enemy object offset
    sta(ABS(ObjectOffset));
    tax();
    // nullify bowser's front/rear graphics flag
    lda(IMM(0x0));
    sta(ABS(BowserGfxFlag));
    JMP(ExBGfxH);
}
void ExBGfxH() {
    _debug("ExBGfxH", __FILE__, __LINE__);
    // leave!
    return;
}
void ProcessBowserHalf() {
    _debug("ProcessBowserHalf", __FILE__, __LINE__);
    // increment bowser's graphics flag, then run subroutines
    inc(ABS(BowserGfxFlag));
    // to get offscreen bits, relative position and draw bowser (finally!)
    JSR(RunRetainerObj);
    lda(ABSX(Enemy_State));
    // if either enemy object not in normal state, branch to leave
    BNE(ExBGfxH);
    lda(IMM(0xa));
    // set bounding box size control
    sta(ABSX(Enemy_BoundBoxCtrl));
    // get bounding box coordinates
    JSR(GetEnemyBoundBox);
    // do player-to-enemy collision detection
    JMP(PlayerEnemyCollision);
    JMP(SetFlameTimer);
}
void SetFlameTimer() {
    _debug("SetFlameTimer", __FILE__, __LINE__);
    // load counter as offset
    ldy(ABS(BowserFlameTimerCtrl));
    // increment
    inc(ABS(BowserFlameTimerCtrl));
    // mask out all but 3 LSB
    lda(ABS(BowserFlameTimerCtrl));
    // to keep in range of 0-7
    anda(IMM(0b111));
    sta(ABS(BowserFlameTimerCtrl));
    // load value to be used then leave
    lda(ABSY(0x8000+offsetof(G, FlameTimerData)));
    JMP(ExFl);
}
void ExFl() {
    _debug("ExFl", __FILE__, __LINE__);
    return;
}
void ProcBowserFlame() {
    _debug("ProcBowserFlame", __FILE__, __LINE__);
    // if master timer control flag set,
    lda(ABS(TimerControl));
    // skip all of this
    BNE(SetGfxF);
    // load default movement force
    lda(IMM(0x40));
    ldy(ABS(SecondaryHardMode));
    // if secondary hard mode flag not set, use default
    BEQ(SFlmX);
    // otherwise load alternate movement force to go faster
    lda(IMM(0x60));
    JMP(SFlmX);
}
void SFlmX() {
    _debug("SFlmX", __FILE__, __LINE__);
    // store value here
    sta(ABS(0x0));
    lda(ABSX(Enemy_X_MoveForce));
    // subtract value from movement force
    sec();
    sbc(ABS(0x0));
    // save new value
    sta(ABSX(Enemy_X_MoveForce));
    lda(ABSX(Enemy_X_Position));
    // subtract one from horizontal position to move
    sbc(IMM(0x1));
    // to the left
    sta(ABSX(Enemy_X_Position));
    lda(ABSX(Enemy_PageLoc));
    // subtract borrow from page location
    sbc(IMM(0x0));
    sta(ABSX(Enemy_PageLoc));
    // get some value here and use as offset
    ldy(ABSX(BowserFlamePRandomOfs));
    // load vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // compare against coordinate data using $0417,x as offset
    cmp(ABSY(0x8000+offsetof(G, FlameYPosData)));
    // if equal, branch and do not modify coordinate
    BEQ(SetGfxF);
    clc();
    // otherwise add value here to coordinate and store
    adc(ABSX(Enemy_Y_MoveForce));
    // as new vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    JMP(SetGfxF);
}
void SetGfxF() {
    _debug("SetGfxF", __FILE__, __LINE__);
    // get new relative coordinates
    JSR(RelativeEnemyPosition);
    // if bowser's flame not in normal state,
    lda(ABSX(Enemy_State));
    // branch to leave
    BNE(ExFl);
    // otherwise, continue
    lda(IMM(0x51));
    // write first tile number
    sta(ABS(0x0));
    // load attributes without vertical flip by default
    ldy(IMM(0x2));
    lda(ABS(FrameCounter));
    // invert vertical flip bit every 2 frames
    anda(IMM(0b10));
    // if d1 not set, write default value
    BEQ(FlmeAt);
    // otherwise write value with vertical flip bit set
    ldy(IMM(0x82));
    JMP(FlmeAt);
}
void FlmeAt() {
    _debug("FlmeAt", __FILE__, __LINE__);
    // set bowser's flame sprite attributes here
    sty(ABS(0x1));
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    ldx(IMM(0x0));
    JMP(DrawFlameLoop);
}
void DrawFlameLoop() {
    _debug("DrawFlameLoop", __FILE__, __LINE__);
    // get Y relative coordinate of current enemy object
    lda(ABS(Enemy_Rel_YPos));
    // write into Y coordinate of OAM data
    sta(ABSY(Sprite_Y_Position));
    lda(ABS(0x0));
    // write current tile number into OAM data
    sta(ABSY(Sprite_Tilenumber));
    // increment tile number to draw more bowser's flame
    inc(ABS(0x0));
    lda(ABS(0x1));
    // write saved attributes into OAM data
    sta(ABSY(Sprite_Attributes));
    lda(ABS(Enemy_Rel_XPos));
    // write X relative coordinate of current enemy object
    sta(ABSY(Sprite_X_Position));
    clc();
    adc(IMM(0x8));
    // then add eight to it and store
    sta(ABS(Enemy_Rel_XPos));
    iny();
    iny();
    iny();
    // increment Y four times to move onto the next OAM
    iny();
    // move onto the next OAM, and branch if three
    inx();
    // have not yet been done
    cpx(IMM(0x3));
    BCC(DrawFlameLoop);
    // reload original enemy offset
    ldx(ABS(ObjectOffset));
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // get enemy object offscreen bits
    lda(ABS(Enemy_OffscreenBits));
    // move d0 to carry and result to stack
    lsr();
    pha();
    // branch if carry not set
    BCC(M3FOfs);
    // otherwise move sprite offscreen, this part likely
    lda(IMM(0xf8));
    // residual since flame is only made of three sprites
    sta(ABSY(((Sprite_Y_Position) + (12))));
    JMP(M3FOfs);
}
void M3FOfs() {
    _debug("M3FOfs", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // move d1 to carry and move bits back to stack
    lsr();
    pha();
    // branch if carry not set again
    BCC(M2FOfs);
    // otherwise move third sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (8))));
    JMP(M2FOfs);
}
void M2FOfs() {
    _debug("M2FOfs", __FILE__, __LINE__);
    // get bits from stack again
    pla();
    // move d2 to carry and move bits back to stack again
    lsr();
    pha();
    // branch if carry not set yet again
    BCC(M1FOfs);
    // otherwise move second sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (4))));
    JMP(M1FOfs);
}
void M1FOfs() {
    _debug("M1FOfs", __FILE__, __LINE__);
    // get bits from stack one last time
    pla();
    // move d3 to carry
    lsr();
    // branch if carry not set one last time
    BCC(ExFlmeD);
    lda(IMM(0xf8));
    // otherwise move first sprite offscreen
    sta(ABSY(Sprite_Y_Position));
    JMP(ExFlmeD);
}
void ExFlmeD() {
    _debug("ExFlmeD", __FILE__, __LINE__);
    // leave
    return;
}
void RunFireworks() {
    _debug("RunFireworks", __FILE__, __LINE__);
    // decrement explosion timing counter here
    dec(ABSX(ExplosionTimerCounter));
    // if not expired, skip this part
    BNE(SetupExpl);
    lda(IMM(0x8));
    // reset counter
    sta(ABSX(ExplosionTimerCounter));
    // increment explosion graphics counter
    inc(ABSX(ExplosionGfxCounter));
    lda(ABSX(ExplosionGfxCounter));
    // check explosion graphics counter
    cmp(IMM(0x3));
    // if at a certain point, branch to kill this object
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}
void SetupExpl() {
    _debug("SetupExpl", __FILE__, __LINE__);
    // get relative coordinates of explosion
    JSR(RelativeEnemyPosition);
    // copy relative coordinates
    lda(ABS(Enemy_Rel_YPos));
    // from the enemy object to the fireball object
    sta(ABS(Fireball_Rel_YPos));
    // first vertical, then horizontal
    lda(ABS(Enemy_Rel_XPos));
    sta(ABS(Fireball_Rel_XPos));
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // get explosion graphics counter
    lda(ABSX(ExplosionGfxCounter));
    // do a sub to draw the explosion then leave
    JSR(DrawExplosion_Fireworks);
    return;
}
void FireworksSoundScore() {
    _debug("FireworksSoundScore", __FILE__, __LINE__);
    // disable enemy buffer flag
    lda(IMM(0x0));
    sta(ABSX(Enemy_Flag));
    // play fireworks/gunfire sound
    lda(IMM(Sfx_Blast));
    sta(ABS(Square2SoundQueue));
    // set part of score modifier for 500 points
    lda(IMM(0x5));
    sta(ABS(((DigitModifier) + (4))));
    // jump to award points accordingly then leave
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}
void RunStarFlagObj() {
    _debug("RunStarFlagObj", __FILE__, __LINE__);
    // initialize enemy frenzy buffer
    lda(IMM(0x0));
    sta(ABS(EnemyFrenzyBuffer));
    // check star flag object task number here
    lda(ABS(StarFlagTaskControl));
    // if greater than 5, branch to exit
    cmp(IMM(0x5));
    BCS(StarFlagExit);
    static JUMP_ENTRY jumptable[5] = {
        StarFlagExit,
        GameTimerFireworks,
        AwardGameTimerPoints,
        RaiseFlagSetoffFWorks,
        DelayToAreaEnd,
    };
    JMP(jumptable[a.read()]);
}
void GameTimerFireworks() {
    _debug("GameTimerFireworks", __FILE__, __LINE__);
    // set default state for star flag object
    ldy(IMM(0x5));
    // get game timer's last digit
    lda(ABS(((GameTimerDisplay) + (2))));
    cmp(IMM(0x1));
    // if last digit of game timer set to 1, skip ahead
    BEQ(SetFWC);
    // otherwise load new value for state
    ldy(IMM(0x3));
    cmp(IMM(0x3));
    // if last digit of game timer set to 3, skip ahead
    BEQ(SetFWC);
    // otherwise load one more potential value for state
    ldy(IMM(0x0));
    cmp(IMM(0x6));
    // if last digit of game timer set to 6, skip ahead
    BEQ(SetFWC);
    // otherwise set value for no fireworks
    lda(IMM(0xff));
    JMP(SetFWC);
}
void SetFWC() {
    _debug("SetFWC", __FILE__, __LINE__);
    // set fireworks counter here
    sta(ABS(FireworksCounter));
    // set whatever state we have in star flag object
    sty(ABSX(Enemy_State));
    JMP(IncrementSFTask1);
}
void IncrementSFTask1() {
    _debug("IncrementSFTask1", __FILE__, __LINE__);
    // increment star flag object task number
    inc(ABS(StarFlagTaskControl));
    JMP(StarFlagExit);
}
void StarFlagExit() {
    _debug("StarFlagExit", __FILE__, __LINE__);
    // leave
    return;
}
void AwardGameTimerPoints() {
    _debug("AwardGameTimerPoints", __FILE__, __LINE__);
    // check all game timer digits for any intervals left
    lda(ABS(GameTimerDisplay));
    ora(ABS(((GameTimerDisplay) + (1))));
    ora(ABS(((GameTimerDisplay) + (2))));
    // if no time left on game timer at all, branch to next task
    BEQ(IncrementSFTask1);
    lda(ABS(FrameCounter));
    // check frame counter for d2 set (skip ahead
    anda(IMM(0b100));
    // for four frames every four frames) branch if not set
    BEQ(NoTTick);
    lda(IMM(Sfx_TimerTick));
    // load timer tick sound
    sta(ABS(Square2SoundQueue));
    JMP(NoTTick);
}
void NoTTick() {
    _debug("NoTTick", __FILE__, __LINE__);
    // set offset here to subtract from game timer's last digit
    ldy(IMM(0x23));
    // set adder here to $ff, or -1, to subtract one
    lda(IMM(0xff));
    // from the last digit of the game timer
    sta(ABS(((DigitModifier) + (5))));
    // subtract digit
    JSR(DigitsMathRoutine);
    // set now to add 50 points
    lda(IMM(0x5));
    // per game timer interval subtracted
    sta(ABS(((DigitModifier) + (5))));
    JMP(EndAreaPoints);
}
void EndAreaPoints() {
    _debug("EndAreaPoints", __FILE__, __LINE__);
    // load offset for mario's score by default
    ldy(IMM(0xb));
    // check player on the screen
    lda(ABS(CurrentPlayer));
    // if mario, do not change
    BEQ(ELPGive);
    // otherwise load offset for luigi's score
    ldy(IMM(0x11));
    JMP(ELPGive);
}
void ELPGive() {
    _debug("ELPGive", __FILE__, __LINE__);
    // award 50 points per game timer interval
    JSR(DigitsMathRoutine);
    // get player on the screen (or 500 points per
    lda(ABS(CurrentPlayer));
    // fireworks explosion if branched here from there)
    asl();
    // shift to high nybble
    asl();
    asl();
    asl();
    // add four to set nybble for game timer
    ora(IMM(0b100));
    // jump to print the new score and game timer
    JMP(UpdateNumber);
    JMP(RaiseFlagSetoffFWorks);
}
void RaiseFlagSetoffFWorks() {
    _debug("RaiseFlagSetoffFWorks", __FILE__, __LINE__);
    // check star flag's vertical position
    lda(ABSX(Enemy_Y_Position));
    // against preset value
    cmp(IMM(0x72));
    // if star flag higher vertically, branch to other code
    BCC(SetoffF);
    // otherwise, raise star flag by one pixel
    dec(ABSX(Enemy_Y_Position));
    // and skip this part here
    JMP(DrawStarFlag);
    JMP(SetoffF);
}
void SetoffF() {
    _debug("SetoffF", __FILE__, __LINE__);
    // check fireworks counter
    lda(ABS(FireworksCounter));
    // if no fireworks left to go off, skip this part
    BEQ(DrawFlagSetTimer);
    // if no fireworks set to go off, skip this part
    BMI(DrawFlagSetTimer);
    lda(IMM(Fireworks));
    // otherwise set fireworks object in frenzy queue
    sta(ABS(EnemyFrenzyBuffer));
    JMP(DrawStarFlag);
}
void DrawStarFlag() {
    _debug("DrawStarFlag", __FILE__, __LINE__);
    // get relative coordinates of star flag
    JSR(RelativeEnemyPosition);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // do four sprites
    ldx(IMM(0x3));
    JMP(DSFLoop);
}
void DSFLoop() {
    _debug("DSFLoop", __FILE__, __LINE__);
    // get relative vertical coordinate
    lda(ABS(Enemy_Rel_YPos));
    clc();
    // add Y coordinate adder data
    adc(ABSX(0x8000+offsetof(G, StarFlagYPosAdder)));
    // store as Y coordinate
    sta(ABSY(Sprite_Y_Position));
    // get tile number
    lda(ABSX(0x8000+offsetof(G, StarFlagTileData)));
    // store as tile number
    sta(ABSY(Sprite_Tilenumber));
    // set palette and background priority bits
    lda(IMM(0x22));
    // store as attributes
    sta(ABSY(Sprite_Attributes));
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    clc();
    // add X coordinate adder data
    adc(ABSX(0x8000+offsetof(G, StarFlagXPosAdder)));
    // store as X coordinate
    sta(ABSY(Sprite_X_Position));
    iny();
    // increment OAM data offset four bytes
    iny();
    // for next sprite
    iny();
    iny();
    // move onto next sprite
    dex();
    // do this until all sprites are done
    BPL(DSFLoop);
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void DrawFlagSetTimer() {
    _debug("DrawFlagSetTimer", __FILE__, __LINE__);
    // do sub to draw star flag
    JSR(DrawStarFlag);
    lda(IMM(0x6));
    // set interval timer here
    sta(ABSX(EnemyIntervalTimer));
    JMP(IncrementSFTask2);
}
void IncrementSFTask2() {
    _debug("IncrementSFTask2", __FILE__, __LINE__);
    // move onto next task
    inc(ABS(StarFlagTaskControl));
    return;
}
void DelayToAreaEnd() {
    _debug("DelayToAreaEnd", __FILE__, __LINE__);
    // do sub to draw star flag
    JSR(DrawStarFlag);
    // if interval timer set in previous task
    lda(ABSX(EnemyIntervalTimer));
    // not yet expired, branch to leave
    BNE(StarFlagExit2);
    // if event music buffer empty,
    lda(ABS(EventMusicBuffer));
    // branch to increment task
    BEQ(IncrementSFTask2);
    JMP(StarFlagExit2);
}
void StarFlagExit2() {
    _debug("StarFlagExit2", __FILE__, __LINE__);
    // otherwise leave
    return;
}
// $00 - used to store horizontal difference between player and piranha plant
void MovePiranhaPlant() {
    _debug("MovePiranhaPlant", __FILE__, __LINE__);
    // check enemy state
    lda(ABSX(Enemy_State));
    // if set at all, branch to leave
    BNE(PutinPipe);
    // check enemy's timer here
    lda(ABSX(EnemyFrameTimer));
    // branch to end if not yet expired
    BNE(PutinPipe);
    // check movement flag
    lda(ABSX(PiranhaPlant_MoveFlag));
    // if moving, skip to part ahead
    BNE(SetupToMovePPlant);
    // if currently rising, branch
    lda(ABSX(PiranhaPlant_Y_Speed));
    // to move enemy upwards out of pipe
    BMI(ReversePlantSpeed);
    // get horizontal difference between player and
    JSR(PlayerEnemyDiff);
    // piranha plant, and branch if enemy to right of player
    BPL(ChkPlayerNearPipe);
    // otherwise get saved horizontal difference
    lda(ABS(0x0));
    eor(IMM(0xff));
    // and change to two's compliment
    clc();
    adc(IMM(0x1));
    // save as new horizontal difference
    sta(ABS(0x0));
    JMP(ChkPlayerNearPipe);
}
void ChkPlayerNearPipe() {
    _debug("ChkPlayerNearPipe", __FILE__, __LINE__);
    // get saved horizontal difference
    lda(ABS(0x0));
    cmp(IMM(0x21));
    // if player within a certain distance, branch to leave
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}
void ReversePlantSpeed() {
    _debug("ReversePlantSpeed", __FILE__, __LINE__);
    // get vertical speed
    lda(ABSX(PiranhaPlant_Y_Speed));
    eor(IMM(0xff));
    // change to two's compliment
    clc();
    adc(IMM(0x1));
    // save as new vertical speed
    sta(ABSX(PiranhaPlant_Y_Speed));
    // increment to set movement flag
    inc(ABSX(PiranhaPlant_MoveFlag));
    JMP(SetupToMovePPlant);
}
void SetupToMovePPlant() {
    _debug("SetupToMovePPlant", __FILE__, __LINE__);
    // get original vertical coordinate (lowest point)
    lda(ABSX(PiranhaPlantDownYPos));
    // get vertical speed
    ldy(ABSX(PiranhaPlant_Y_Speed));
    // branch if moving downwards
    BPL(RiseFallPiranhaPlant);
    // otherwise get other vertical coordinate (highest point)
    lda(ABSX(PiranhaPlantUpYPos));
    JMP(RiseFallPiranhaPlant);
}
void RiseFallPiranhaPlant() {
    _debug("RiseFallPiranhaPlant", __FILE__, __LINE__);
    // save vertical coordinate here
    sta(ABS(0x0));
    // get frame counter
    lda(ABS(FrameCounter));
    lsr();
    // branch to leave if d0 set (execute code every other frame)
    BCC(PutinPipe);
    // get master timer control
    lda(ABS(TimerControl));
    // branch to leave if set (likely not necessary)
    BNE(PutinPipe);
    // get current vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    clc();
    // add vertical speed to move up or down
    adc(ABSX(PiranhaPlant_Y_Speed));
    // save as new vertical coordinate
    sta(ABSX(Enemy_Y_Position));
    // compare against low or high coordinate
    cmp(ABS(0x0));
    // branch to leave if not yet reached
    BNE(PutinPipe);
    lda(IMM(0x0));
    // otherwise clear movement flag
    sta(ABSX(PiranhaPlant_MoveFlag));
    lda(IMM(0x40));
    // set timer to delay piranha plant movement
    sta(ABSX(EnemyFrameTimer));
    JMP(PutinPipe);
}
void PutinPipe() {
    _debug("PutinPipe", __FILE__, __LINE__);
    // set background priority bit in sprite
    lda(IMM(0b100000));
    // attributes to give illusion of being inside pipe
    sta(ABSX(Enemy_SprAttrib));
    // then leave
    return;
}
// $07 - spinning speed
void FirebarSpin() {
    _debug("FirebarSpin", __FILE__, __LINE__);
    // save spinning speed here
    sta(ABS(0x7));
    // check spinning direction
    lda(ABSX(FirebarSpinDirection));
    // if moving counter-clockwise, branch to other part
    BNE(SpinCounterClockwise);
    // possibly residual ldy
    ldy(IMM(0x18));
    lda(ABSX(FirebarSpinState_Low));
    // add spinning speed to what would normally be
    clc();
    // the horizontal speed
    adc(ABS(0x7));
    sta(ABSX(FirebarSpinState_Low));
    // add carry to what would normally be the vertical speed
    lda(ABSX(FirebarSpinState_High));
    adc(IMM(0x0));
    return;
}
void SpinCounterClockwise() {
    _debug("SpinCounterClockwise", __FILE__, __LINE__);
    // possibly residual ldy
    ldy(IMM(0x8));
    lda(ABSX(FirebarSpinState_Low));
    // subtract spinning speed to what would normally be
    sec();
    // the horizontal speed
    sbc(ABS(0x7));
    sta(ABSX(FirebarSpinState_Low));
    // add carry to what would normally be the vertical speed
    lda(ABSX(FirebarSpinState_High));
    sbc(IMM(0x0));
    return;
}
// $00 - used to hold collision flag, Y movement force + 5 or low byte of name table for rope
// $01 - used to hold high byte of name table for rope
// $02 - used to hold page location of rope
void BalancePlatform() {
    _debug("BalancePlatform", __FILE__, __LINE__);
    // check high byte of vertical position
    lda(ABSX(Enemy_Y_HighPos));
    cmp(IMM(0x3));
    BNE(DoBPl);
    // if far below screen, kill the object
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}
void DoBPl() {
    _debug("DoBPl", __FILE__, __LINE__);
    // get object's state (set to $ff or other platform offset)
    lda(ABSX(Enemy_State));
    // if doing other balance platform, branch to leave
    BPL(CheckBalPlatform);
    return;
}
void CheckBalPlatform() {
    _debug("CheckBalPlatform", __FILE__, __LINE__);
    // save offset from state as Y
    tay();
    // get collision flag of platform
    lda(ABSX(PlatformCollisionFlag));
    // store here
    sta(ABS(0x0));
    // get moving direction
    lda(ABSX(Enemy_MovingDir));
    BEQ(ChkForFall);
    // if set, jump here
    JMP(PlatformFall);
    JMP(ChkForFall);
}
void ChkForFall() {
    _debug("ChkForFall", __FILE__, __LINE__);
    // check if platform is above a certain point
    lda(IMM(0x2d));
    cmp(ABSX(Enemy_Y_Position));
    // if not, branch elsewhere
    BCC(ChkOtherForFall);
    // if collision flag is set to same value as
    cpy(ABS(0x0));
    // enemy state, branch to make platforms fall
    BEQ(MakePlatformFall);
    clc();
    // otherwise add 2 pixels to vertical position
    adc(IMM(0x2));
    // of current platform and branch elsewhere
    sta(ABSX(Enemy_Y_Position));
    // to make platforms stop
    JMP(StopPlatforms);
    JMP(MakePlatformFall);
}
void MakePlatformFall() {
    _debug("MakePlatformFall", __FILE__, __LINE__);
    // make platforms fall
    JMP(InitPlatformFall);
    JMP(ChkOtherForFall);
}
void ChkOtherForFall() {
    _debug("ChkOtherForFall", __FILE__, __LINE__);
    // check if other platform is above a certain point
    cmp(ABSY(Enemy_Y_Position));
    // if not, branch elsewhere
    BCC(ChkToMoveBalPlat);
    // if collision flag is set to same value as
    cpx(ABS(0x0));
    // enemy state, branch to make platforms fall
    BEQ(MakePlatformFall);
    clc();
    // otherwise add 2 pixels to vertical position
    adc(IMM(0x2));
    // of other platform and branch elsewhere
    sta(ABSY(Enemy_Y_Position));
    // jump to stop movement and do not return
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}
void ChkToMoveBalPlat() {
    _debug("ChkToMoveBalPlat", __FILE__, __LINE__);
    // save vertical position to stack
    lda(ABSX(Enemy_Y_Position));
    pha();
    // get collision flag
    lda(ABSX(PlatformCollisionFlag));
    // branch if collision
    BPL(ColFlg);
    lda(ABSX(Enemy_Y_MoveForce));
    // add $05 to contents of moveforce, whatever they be
    clc();
    adc(IMM(0x5));
    // store here
    sta(ABS(0x0));
    lda(ABSX(Enemy_Y_Speed));
    // add carry to vertical speed
    adc(IMM(0x0));
    // branch if moving downwards
    BMI(PlatDn);
    // branch elsewhere if moving upwards
    BNE(PlatUp);
    lda(ABS(0x0));
    // check if there's still a little force left
    cmp(IMM(0xb));
    // if not enough, branch to stop movement
    BCC(PlatSt);
    // otherwise keep branch to move upwards
    BCS(PlatUp);
    JMP(ColFlg);
}
void ColFlg() {
    _debug("ColFlg", __FILE__, __LINE__);
    // if collision flag matches
    cmp(ABS(ObjectOffset));
    // current enemy object offset, branch
    BEQ(PlatDn);
    JMP(PlatUp);
}
void PlatUp() {
    _debug("PlatUp", __FILE__, __LINE__);
    // do a sub to move upwards
    JSR(MovePlatformUp);
    // jump ahead to remaining code
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}
void PlatSt() {
    _debug("PlatSt", __FILE__, __LINE__);
    // do a sub to stop movement
    JSR(StopPlatforms);
    // jump ahead to remaining code
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}
void PlatDn() {
    _debug("PlatDn", __FILE__, __LINE__);
    // do a sub to move downwards
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}
void DoOtherPlatform() {
    _debug("DoOtherPlatform", __FILE__, __LINE__);
    // get offset of other platform
    ldy(ABSX(Enemy_State));
    // get old vertical coordinate from stack
    pla();
    sec();
    // get difference of old vs. new coordinate
    sbc(ABSX(Enemy_Y_Position));
    clc();
    // add difference to vertical coordinate of other
    adc(ABSY(Enemy_Y_Position));
    // platform to move it in the opposite direction
    sta(ABSY(Enemy_Y_Position));
    // if no collision, skip this part here
    lda(ABSX(PlatformCollisionFlag));
    BMI(DrawEraseRope);
    // put offset which collision occurred here
    tax();
    // and use it to position player accordingly
    JSR(PositionPlayerOnVPlat);
    JMP(DrawEraseRope);
}
void DrawEraseRope() {
    _debug("DrawEraseRope", __FILE__, __LINE__);
    // get enemy object offset
    ldy(ABS(ObjectOffset));
    // check to see if current platform is
    lda(ABSY(Enemy_Y_Speed));
    // moving at all
    ora(ABSY(Enemy_Y_MoveForce));
    // if not, skip all of this and branch to leave
    BEQ(ExitRp);
    // get vram buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    // if offset beyond a certain point, go ahead
    cpx(IMM(0x20));
    // and skip this, branch to leave
    BCS(ExitRp);
    lda(ABSY(Enemy_Y_Speed));
    // save two copies of vertical speed to stack
    pha();
    pha();
    // do a sub to figure out where to put new bg tiles
    JSR(SetupPlatformRope);
    // write name table address to vram buffer
    lda(ABS(0x1));
    // first the high byte, then the low
    sta(ABSX(VRAM_Buffer1));
    lda(ABS(0x0));
    sta(ABSX(((VRAM_Buffer1) + (1))));
    // set length for 2 bytes
    lda(IMM(0x2));
    sta(ABSX(((VRAM_Buffer1) + (2))));
    // if platform moving upwards, branch
    lda(ABSY(Enemy_Y_Speed));
    // to do something else
    BMI(EraseR1);
    lda(IMM(0xa2));
    // otherwise put tile numbers for left
    sta(ABSX(((VRAM_Buffer1) + (3))));
    // and right sides of rope in vram buffer
    lda(IMM(0xa3));
    sta(ABSX(((VRAM_Buffer1) + (4))));
    // jump to skip this part
    JMP(OtherRope);
    JMP(EraseR1);
}
void EraseR1() {
    _debug("EraseR1", __FILE__, __LINE__);
    // put blank tiles in vram buffer
    lda(IMM(0x24));
    // to erase rope
    sta(ABSX(((VRAM_Buffer1) + (3))));
    sta(ABSX(((VRAM_Buffer1) + (4))));
    JMP(OtherRope);
}
void OtherRope() {
    _debug("OtherRope", __FILE__, __LINE__);
    // get offset of other platform from state
    lda(ABSY(Enemy_State));
    // use as Y here
    tay();
    // pull second copy of vertical speed from stack
    pla();
    // invert bits to reverse speed
    eor(IMM(0xff));
    // do sub again to figure out where to put bg tiles
    JSR(SetupPlatformRope);
    // write name table address to vram buffer
    lda(ABS(0x1));
    // this time we're doing putting tiles for
    sta(ABSX(((VRAM_Buffer1) + (5))));
    // the other platform
    lda(ABS(0x0));
    sta(ABSX(((VRAM_Buffer1) + (6))));
    lda(IMM(0x2));
    // set length again for 2 bytes
    sta(ABSX(((VRAM_Buffer1) + (7))));
    // pull first copy of vertical speed from stack
    pla();
    // if moving upwards (note inversion earlier), skip this
    BPL(EraseR2);
    lda(IMM(0xa2));
    // otherwise put tile numbers for left
    sta(ABSX(((VRAM_Buffer1) + (8))));
    // and right sides of rope in vram
    lda(IMM(0xa3));
    // transfer buffer
    sta(ABSX(((VRAM_Buffer1) + (9))));
    // jump to skip this part
    JMP(EndRp);
    JMP(EraseR2);
}
void EraseR2() {
    _debug("EraseR2", __FILE__, __LINE__);
    // put blank tiles in vram buffer
    lda(IMM(0x24));
    // to erase rope
    sta(ABSX(((VRAM_Buffer1) + (8))));
    sta(ABSX(((VRAM_Buffer1) + (9))));
    JMP(EndRp);
}
void EndRp() {
    _debug("EndRp", __FILE__, __LINE__);
    // put null terminator at the end
    lda(IMM(0x0));
    sta(ABSX(((VRAM_Buffer1) + (10))));
    // add ten bytes to the vram buffer offset
    lda(ABS(VRAM_Buffer1_Offset));
    // and store
    clc();
    adc(IMM(10));
    sta(ABS(VRAM_Buffer1_Offset));
    JMP(ExitRp);
}
void ExitRp() {
    _debug("ExitRp", __FILE__, __LINE__);
    // get enemy object buffer offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void SetupPlatformRope() {
    _debug("SetupPlatformRope", __FILE__, __LINE__);
    // save second/third copy to stack
    pha();
    // get horizontal coordinate
    lda(ABSY(Enemy_X_Position));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // if secondary hard mode flag set,
    ldx(ABS(SecondaryHardMode));
    // use coordinate as-is
    BNE(GetLRp);
    clc();
    // otherwise add sixteen more pixels
    adc(IMM(0x10));
    JMP(GetLRp);
}
void GetLRp() {
    _debug("GetLRp", __FILE__, __LINE__);
    // save modified horizontal coordinate to stack
    pha();
    lda(ABSY(Enemy_PageLoc));
    // add carry to page location
    adc(IMM(0x0));
    // and save here
    sta(ABS(0x2));
    // pull modified horizontal coordinate
    pla();
    // from the stack, mask out low nybble
    anda(IMM(0b11110000));
    // and shift three bits to the right
    lsr();
    lsr();
    lsr();
    // store result here as part of name table low byte
    sta(ABS(0x0));
    // get vertical coordinate
    ldx(ABSY(Enemy_Y_Position));
    // get second/third copy of vertical speed from stack
    pla();
    // skip this part if moving downwards or not at all
    BPL(GetHRp);
    txa();
    clc();
    // add eight to vertical coordinate and
    adc(IMM(0x8));
    // save as X
    tax();
    JMP(GetHRp);
}
void GetHRp() {
    _debug("GetHRp", __FILE__, __LINE__);
    // move vertical coordinate to A
    txa();
    // get vram buffer offset
    ldx(ABS(VRAM_Buffer1_Offset));
    asl();
    // rotate d7 to d0 and d6 into carry
    rol();
    // save modified vertical coordinate to stack
    pha();
    // rotate carry to d0, thus d7 and d6 are at 2 LSB
    rol();
    // mask out all bits but d7 and d6, then set
    anda(IMM(0b11));
    // d5 to get appropriate high byte of name table
    ora(IMM(0b100000));
    // address, then store
    sta(ABS(0x1));
    // get saved page location from earlier
    lda(ABS(0x2));
    // mask out all but LSB
    anda(IMM(0x1));
    asl();
    // shift twice to the left and save with the
    asl();
    // rest of the bits of the high byte, to get
    ora(ABS(0x1));
    // the proper name table and the right place on it
    sta(ABS(0x1));
    // get modified vertical coordinate from stack
    pla();
    // mask out low nybble and LSB of high nybble
    anda(IMM(0b11100000));
    clc();
    // add to horizontal part saved here
    adc(ABS(0x0));
    // save as name table low byte
    sta(ABS(0x0));
    lda(ABSY(Enemy_Y_Position));
    // if vertical position not below the
    cmp(IMM(0xe8));
    // bottom of the screen, we're done, branch to leave
    BCC(ExPRp);
    lda(ABS(0x0));
    // mask out d6 of low byte of name table address
    anda(IMM(0b10111111));
    sta(ABS(0x0));
    JMP(ExPRp);
}
void ExPRp() {
    _debug("ExPRp", __FILE__, __LINE__);
    // leave!
    return;
}
void InitPlatformFall() {
    _debug("InitPlatformFall", __FILE__, __LINE__);
    // move offset of other platform from Y to X
    tya();
    tax();
    // get offscreen bits
    JSR(GetEnemyOffscreenBits);
    lda(IMM(0x6));
    // award 1000 points to player
    JSR(SetupFloateyNumber);
    lda(ABS(Player_Rel_XPos));
    // put floatey number coordinates where player is
    sta(ABSX(FloateyNum_X_Pos));
    lda(ABS(Player_Y_Position));
    sta(ABSX(FloateyNum_Y_Pos));
    // set moving direction as flag for
    lda(IMM(0x1));
    // falling platforms
    sta(ABSX(Enemy_MovingDir));
    JMP(StopPlatforms);
}
void StopPlatforms() {
    _debug("StopPlatforms", __FILE__, __LINE__);
    // initialize vertical speed and low byte
    JSR(InitVStf);
    // for both platforms and leave
    sta(ABSY(Enemy_Y_Speed));
    sta(ABSY(Enemy_Y_MoveForce));
    return;
}
void PlatformFall() {
    _debug("PlatformFall", __FILE__, __LINE__);
    // save offset for other platform to stack
    tya();
    pha();
    // make current platform fall
    JSR(MoveFallingPlatform);
    pla();
    // pull offset from stack and save to X
    tax();
    // make other platform fall
    JSR(MoveFallingPlatform);
    ldx(ABS(ObjectOffset));
    // if player not standing on either platform,
    lda(ABSX(PlatformCollisionFlag));
    // skip this part
    BMI(ExPF);
    // transfer collision flag offset as offset to X
    tax();
    // and position player appropriately
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}
void ExPF() {
    _debug("ExPF", __FILE__, __LINE__);
    // get enemy object buffer offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void YMovingPlatform() {
    _debug("YMovingPlatform", __FILE__, __LINE__);
    // if platform moving up or down, skip ahead to
    lda(ABSX(Enemy_Y_Speed));
    // check on other position
    ora(ABSX(Enemy_Y_MoveForce));
    BNE(ChkYCenterPos);
    // initialize dummy variable
    sta(ABSX(Enemy_YMF_Dummy));
    lda(ABSX(Enemy_Y_Position));
    // if current vertical position => top position, branch
    cmp(ABSX(YPlatformTopYPos));
    // ahead of all this
    BCS(ChkYCenterPos);
    lda(ABS(FrameCounter));
    // check for every eighth frame
    anda(IMM(0b111));
    BNE(SkipIY);
    // increase vertical position every eighth frame
    inc(ABSX(Enemy_Y_Position));
    JMP(SkipIY);
}
void SkipIY() {
    _debug("SkipIY", __FILE__, __LINE__);
    // skip ahead to last part
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}
void ChkYCenterPos() {
    _debug("ChkYCenterPos", __FILE__, __LINE__);
    // if current vertical position < central position, branch
    lda(ABSX(Enemy_Y_Position));
    // to slow ascent/move downwards
    cmp(ABSX(YPlatformCenterYPos));
    BCC(YMDown);
    // otherwise start slowing descent/moving upwards
    JSR(MovePlatformUp);
    JMP(ChkYPCollision);
    JMP(YMDown);
}
void YMDown() {
    _debug("YMDown", __FILE__, __LINE__);
    // start slowing ascent/moving downwards
    JSR(MovePlatformDown);
    JMP(ChkYPCollision);
}
void ChkYPCollision() {
    _debug("ChkYPCollision", __FILE__, __LINE__);
    // if collision flag not set here, branch
    lda(ABSX(PlatformCollisionFlag));
    // to leave
    BMI(ExYPl);
    // otherwise position player appropriately
    JSR(PositionPlayerOnVPlat);
    JMP(ExYPl);
}
void ExYPl() {
    _debug("ExYPl", __FILE__, __LINE__);
    // leave
    return;
}
// $00 - used as adder to position player hotizontally
void XMovingPlatform() {
    _debug("XMovingPlatform", __FILE__, __LINE__);
    // load preset maximum value for secondary counter
    lda(IMM(0xe));
    // do a sub to increment counters for movement
    JSR(XMoveCntr_Platform);
    // do a sub to move platform accordingly, and return value
    JSR(MoveWithXMCntrs);
    // if no collision with player,
    lda(ABSX(PlatformCollisionFlag));
    // branch ahead to leave
    BMI(ExXMP);
    JMP(PositionPlayerOnHPlat);
}
void PositionPlayerOnHPlat() {
    _debug("PositionPlayerOnHPlat", __FILE__, __LINE__);
    lda(ABS(Player_X_Position));
    // add saved value from second subroutine to
    clc();
    // current player's position to position
    adc(ABS(0x0));
    // player accordingly in horizontal position
    sta(ABS(Player_X_Position));
    // get player's page location
    lda(ABS(Player_PageLoc));
    // check to see if saved value here is positive or negative
    ldy(ABS(0x0));
    // if negative, branch to subtract
    BMI(PPHSubt);
    // otherwise add carry to page location
    adc(IMM(0x0));
    // jump to skip subtraction
    JMP(SetPVar);
    JMP(PPHSubt);
}
void PPHSubt() {
    _debug("PPHSubt", __FILE__, __LINE__);
    // subtract borrow from page location
    sbc(IMM(0x0));
    JMP(SetPVar);
}
void SetPVar() {
    _debug("SetPVar", __FILE__, __LINE__);
    // save result to player's page location
    sta(ABS(Player_PageLoc));
    // put saved value from second sub here to be used later
    sty(ABS(Platform_X_Scroll));
    // position player vertically and appropriately
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}
void ExXMP() {
    _debug("ExXMP", __FILE__, __LINE__);
    // and we are done here
    return;
}
void DropPlatform() {
    _debug("DropPlatform", __FILE__, __LINE__);
    // if no collision between platform and player
    lda(ABSX(PlatformCollisionFlag));
    // occurred, just leave without moving anything
    BMI(ExDPl);
    // otherwise do a sub to move platform down very quickly
    JSR(MoveDropPlatform);
    // do a sub to position player appropriately
    JSR(PositionPlayerOnVPlat);
    JMP(ExDPl);
}
void ExDPl() {
    _debug("ExDPl", __FILE__, __LINE__);
    // leave
    return;
}
// $00 - residual value from sub
void RightPlatform() {
    _debug("RightPlatform", __FILE__, __LINE__);
    // move platform with current horizontal speed, if any
    JSR(MoveEnemyHorizontally);
    // store saved value here (residual code)
    sta(ABS(0x0));
    // check collision flag, if no collision between player
    lda(ABSX(PlatformCollisionFlag));
    // and platform, branch ahead, leave speed unaltered
    BMI(ExRPl);
    lda(IMM(0x10));
    // otherwise set new speed (gets moving if motionless)
    sta(ABSX(Enemy_X_Speed));
    // use saved value from earlier sub to position player
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}
void ExRPl() {
    _debug("ExRPl", __FILE__, __LINE__);
    // then leave
    return;
}
void MoveLargeLiftPlat() {
    _debug("MoveLargeLiftPlat", __FILE__, __LINE__);
    // execute common to all large and small lift platforms
    JSR(MoveLiftPlatforms);
    // branch to position player correctly
    JMP(ChkYPCollision);
    JMP(MoveSmallPlatform);
}
void MoveSmallPlatform() {
    _debug("MoveSmallPlatform", __FILE__, __LINE__);
    // execute common to all large and small lift platforms
    JSR(MoveLiftPlatforms);
    // branch to position player correctly
    JMP(ChkSmallPlatCollision);
    JMP(MoveLiftPlatforms);
}
void MoveLiftPlatforms() {
    _debug("MoveLiftPlatforms", __FILE__, __LINE__);
    // if master timer control set, skip all of this
    lda(ABS(TimerControl));
    // and branch to leave
    BNE(ExLiftP);
    lda(ABSX(Enemy_YMF_Dummy));
    // add contents of movement amount to whatever's here
    clc();
    adc(ABSX(Enemy_Y_MoveForce));
    sta(ABSX(Enemy_YMF_Dummy));
    // add whatever vertical speed is set to current
    lda(ABSX(Enemy_Y_Position));
    // vertical position plus carry to move up or down
    adc(ABSX(Enemy_Y_Speed));
    // and then leave
    sta(ABSX(Enemy_Y_Position));
    return;
}
void ChkSmallPlatCollision() {
    _debug("ChkSmallPlatCollision", __FILE__, __LINE__);
    // get bounding box counter saved in collision flag
    lda(ABSX(PlatformCollisionFlag));
    // if none found, leave player position alone
    BEQ(ExLiftP);
    // use to position player correctly
    JSR(PositionPlayerOnS_Plat);
    JMP(ExLiftP);
}
void ExLiftP() {
    _debug("ExLiftP", __FILE__, __LINE__);
    // then leave
    return;
}
// $00 - page location of extended left boundary
// $01 - extended left boundary position
// $02 - page location of extended right boundary
// $03 - extended right boundary position
void OffscreenBoundsCheck() {
    _debug("OffscreenBoundsCheck", __FILE__, __LINE__);
    // check for cheep-cheep object
    lda(ABSX(Enemy_ID));
    // branch to leave if found
    cmp(IMM(FlyingCheepCheep));
    BEQ(ExScrnBd);
    // get horizontal coordinate for left side of screen
    lda(ABS(ScreenLeft_X_Pos));
    ldy(ABSX(Enemy_ID));
    // check for hammer bro object
    cpy(IMM(HammerBro));
    BEQ(LimitB);
    // check for piranha plant object
    cpy(IMM(PiranhaPlant));
    // these two will be erased sooner than others if too far left
    BNE(ExtendLB);
    JMP(LimitB);
}
void LimitB() {
    _debug("LimitB", __FILE__, __LINE__);
    // add 56 pixels to coordinate if hammer bro or piranha plant
    adc(IMM(0x38));
    JMP(ExtendLB);
}
void ExtendLB() {
    _debug("ExtendLB", __FILE__, __LINE__);
    // subtract 72 pixels regardless of enemy object
    sbc(IMM(0x48));
    // store result here
    sta(ABS(0x1));
    lda(ABS(ScreenLeft_PageLoc));
    // subtract borrow from page location of left side
    sbc(IMM(0x0));
    // store result here
    sta(ABS(0x0));
    // add 72 pixels to the right side horizontal coordinate
    lda(ABS(ScreenRight_X_Pos));
    adc(IMM(0x48));
    // store result here
    sta(ABS(0x3));
    lda(ABS(ScreenRight_PageLoc));
    // then add the carry to the page location
    adc(IMM(0x0));
    // and store result here
    sta(ABS(0x2));
    // compare horizontal coordinate of the enemy object
    lda(ABSX(Enemy_X_Position));
    // to modified horizontal left edge coordinate to get carry
    cmp(ABS(0x1));
    lda(ABSX(Enemy_PageLoc));
    // then subtract it from the page coordinate of the enemy object
    sbc(ABS(0x0));
    // if enemy object is too far left, branch to erase it
    BMI(TooFar);
    // compare horizontal coordinate of the enemy object
    lda(ABSX(Enemy_X_Position));
    // to modified horizontal right edge coordinate to get carry
    cmp(ABS(0x3));
    lda(ABSX(Enemy_PageLoc));
    // then subtract it from the page coordinate of the enemy object
    sbc(ABS(0x2));
    // if enemy object is on the screen, leave, do not erase enemy
    BMI(ExScrnBd);
    // if at this point, enemy is offscreen to the right, so check
    lda(ABSX(Enemy_State));
    // if in state used by spiny's egg, do not erase
    cmp(IMM(HammerBro));
    BEQ(ExScrnBd);
    // if piranha plant, do not erase
    cpy(IMM(PiranhaPlant));
    BEQ(ExScrnBd);
    // if flagpole flag, do not erase
    cpy(IMM(FlagpoleFlagObject));
    BEQ(ExScrnBd);
    // if star flag, do not erase
    cpy(IMM(StarFlagObject));
    BEQ(ExScrnBd);
    // if jumpspring, do not erase
    cpy(IMM(JumpspringObject));
    // erase all others too far to the right
    BEQ(ExScrnBd);
    JMP(TooFar);
}
void TooFar() {
    _debug("TooFar", __FILE__, __LINE__);
    // erase object if necessary
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}
void ExScrnBd() {
    _debug("ExScrnBd", __FILE__, __LINE__);
    // leave
    return;
}
// $01 - enemy buffer offset
void FireballEnemyCollision() {
    _debug("FireballEnemyCollision", __FILE__, __LINE__);
    // check to see if fireball state is set at all
    lda(ABSX(Fireball_State));
    // branch to leave if not
    BEQ(ExitFBallEnemy);
    asl();
    // branch to leave also if d7 in state is set
    BCS(ExitFBallEnemy);
    lda(ABS(FrameCounter));
    // get LSB of frame counter
    lsr();
    // branch to leave if set (do routine every other frame)
    BCS(ExitFBallEnemy);
    txa();
    // multiply fireball offset by four
    asl();
    asl();
    clc();
    // then add $1c or 28 bytes to it
    adc(IMM(0x1c));
    // to use fireball's bounding box coordinates
    tay();
    ldx(IMM(0x4));
    JMP(FireballEnemyCDLoop);
}
void FireballEnemyCDLoop() {
    _debug("FireballEnemyCDLoop", __FILE__, __LINE__);
    // store enemy object offset here
    stx(ABS(0x1));
    tya();
    // push fireball offset to the stack
    pha();
    lda(ABSX(Enemy_State));
    // check to see if d5 is set in enemy state
    anda(IMM(0b100000));
    // if so, skip to next enemy slot
    BNE(NoFToECol);
    // check to see if buffer flag is set
    lda(ABSX(Enemy_Flag));
    // if not, skip to next enemy slot
    BEQ(NoFToECol);
    // check enemy identifier
    lda(ABSX(Enemy_ID));
    cmp(IMM(0x24));
    // if < $24, branch to check further
    BCC(GoombaDie);
    cmp(IMM(0x2b));
    // if in range $24-$2a, skip to next enemy slot
    BCC(NoFToECol);
    JMP(GoombaDie);
}
void GoombaDie() {
    _debug("GoombaDie", __FILE__, __LINE__);
    // check for goomba identifier
    cmp(IMM(Goomba));
    // if not found, continue with code
    BNE(NotGoomba);
    // otherwise check for defeated state
    lda(ABSX(Enemy_State));
    // if stomped or otherwise defeated,
    cmp(IMM(0x2));
    // skip to next enemy slot
    BCS(NoFToECol);
    JMP(NotGoomba);
}
void NotGoomba() {
    _debug("NotGoomba", __FILE__, __LINE__);
    // if any masked offscreen bits set,
    lda(ABSX(EnemyOffscrBitsMasked));
    // skip to next enemy slot
    BNE(NoFToECol);
    txa();
    // otherwise multiply enemy offset by four
    asl();
    asl();
    clc();
    // add 4 bytes to it
    adc(IMM(0x4));
    // to use enemy's bounding box coordinates
    tax();
    // do fireball-to-enemy collision detection
    JSR(SprObjectCollisionCore);
    // return fireball's original offset
    ldx(ABS(ObjectOffset));
    // if carry clear, no collision, thus do next enemy slot
    BCC(NoFToECol);
    lda(IMM(0b10000000));
    // set d7 in enemy state
    sta(ABSX(Fireball_State));
    // get enemy offset
    ldx(ABS(0x1));
    // jump to handle fireball to enemy collision
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}
void NoFToECol() {
    _debug("NoFToECol", __FILE__, __LINE__);
    // pull fireball offset from stack
    pla();
    // put it in Y
    tay();
    // get enemy object offset
    ldx(ABS(0x1));
    // decrement it
    dex();
    // loop back until collision detection done on all enemies
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}
void ExitFBallEnemy() {
    _debug("ExitFBallEnemy", __FILE__, __LINE__);
    // get original fireball offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void HandleEnemyFBallCol() {
    _debug("HandleEnemyFBallCol", __FILE__, __LINE__);
    // get relative coordinate of enemy
    JSR(RelativeEnemyPosition);
    // get current enemy object offset
    ldx(ABS(0x1));
    // check buffer flag for d7 set
    lda(ABSX(Enemy_Flag));
    // branch if not set to continue
    BPL(ChkBuzzyBeetle);
    // otherwise mask out high nybble and
    anda(IMM(0b1111));
    // use low nybble as enemy offset
    tax();
    lda(ABSX(Enemy_ID));
    // check enemy identifier for bowser
    cmp(IMM(Bowser));
    // branch if found
    BEQ(HurtBowser);
    // otherwise retrieve current enemy offset
    ldx(ABS(0x1));
    JMP(ChkBuzzyBeetle);
}
void ChkBuzzyBeetle() {
    _debug("ChkBuzzyBeetle", __FILE__, __LINE__);
    lda(ABSX(Enemy_ID));
    // check for buzzy beetle
    cmp(IMM(BuzzyBeetle));
    // branch if found to leave (buzzy beetles fireproof)
    BEQ(ExHCF);
    // check for bowser one more time (necessary if d7 of flag was clear)
    cmp(IMM(Bowser));
    // if not found, branch to check other enemies
    BNE(ChkOtherEnemies);
    JMP(HurtBowser);
}
void HurtBowser() {
    _debug("HurtBowser", __FILE__, __LINE__);
    // decrement bowser's hit points
    dec(ABS(BowserHitPoints));
    // if bowser still has hit points, branch to leave
    BNE(ExHCF);
    // otherwise do sub to init vertical speed and movement force
    JSR(InitVStf);
    // initialize horizontal speed
    sta(ABSX(Enemy_X_Speed));
    // init enemy frenzy buffer
    sta(ABS(EnemyFrenzyBuffer));
    lda(IMM(0xfe));
    // set vertical speed to make defeated bowser jump a little
    sta(ABSX(Enemy_Y_Speed));
    // use world number as offset
    ldy(ABS(WorldNumber));
    // get enemy identifier to replace bowser with
    lda(ABSY(0x8000+offsetof(G, BowserIdentities)));
    // set as new enemy identifier
    sta(ABSX(Enemy_ID));
    // set A to use starting value for state
    lda(IMM(0x20));
    // check to see if using offset of 3 or more
    cpy(IMM(0x3));
    // branch if so
    BCS(SetDBSte);
    // otherwise add 3 to enemy state
    ora(IMM(0x3));
    JMP(SetDBSte);
}
void SetDBSte() {
    _debug("SetDBSte", __FILE__, __LINE__);
    // set defeated enemy state
    sta(ABSX(Enemy_State));
    lda(IMM(Sfx_BowserFall));
    // load bowser defeat sound
    sta(ABS(Square2SoundQueue));
    // get enemy offset
    ldx(ABS(0x1));
    // award 5000 points to player for defeating bowser
    lda(IMM(0x9));
    // unconditional branch to award points
    BNE(EnemySmackScore);
    JMP(ChkOtherEnemies);
}
void ChkOtherEnemies() {
    _debug("ChkOtherEnemies", __FILE__, __LINE__);
    cmp(IMM(BulletBill_FrenzyVar));
    // branch to leave if bullet bill (frenzy variant)
    BEQ(ExHCF);
    cmp(IMM(Podoboo));
    // branch to leave if podoboo
    BEQ(ExHCF);
    cmp(IMM(0x15));
    // branch to leave if identifier => $15
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}
void ShellOrBlockDefeat() {
    _debug("ShellOrBlockDefeat", __FILE__, __LINE__);
    // check for piranha plant
    lda(ABSX(Enemy_ID));
    cmp(IMM(PiranhaPlant));
    // branch if not found
    BNE(StnE);
    lda(ABSX(Enemy_Y_Position));
    // add 24 pixels to enemy object's vertical position
    adc(IMM(0x18));
    sta(ABSX(Enemy_Y_Position));
    JMP(StnE);
}
void StnE() {
    _debug("StnE", __FILE__, __LINE__);
    // do yet another sub
    JSR(ChkToStunEnemies);
    lda(ABSX(Enemy_State));
    // mask out 2 MSB of enemy object's state
    anda(IMM(0b11111));
    // set d5 to defeat enemy and save as new state
    ora(IMM(0b100000));
    sta(ABSX(Enemy_State));
    // award 200 points by default
    lda(IMM(0x2));
    // check for hammer bro
    ldy(ABSX(Enemy_ID));
    cpy(IMM(HammerBro));
    // branch if not found
    BNE(GoombaPoints);
    // award 1000 points for hammer bro
    lda(IMM(0x6));
    JMP(GoombaPoints);
}
void GoombaPoints() {
    _debug("GoombaPoints", __FILE__, __LINE__);
    // check for goomba
    cpy(IMM(Goomba));
    // branch if not found
    BNE(EnemySmackScore);
    // award 100 points for goomba
    lda(IMM(0x1));
    JMP(EnemySmackScore);
}
void EnemySmackScore() {
    _debug("EnemySmackScore", __FILE__, __LINE__);
    // update necessary score variables
    JSR(SetupFloateyNumber);
    // play smack enemy sound
    lda(IMM(Sfx_EnemySmack));
    sta(ABS(Square1SoundQueue));
    JMP(ExHCF);
}
void ExHCF() {
    _debug("ExHCF", __FILE__, __LINE__);
    // and now let's leave
    return;
}
void PlayerHammerCollision() {
    _debug("PlayerHammerCollision", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // shift d0 into carry
    lsr();
    // branch to leave if d0 not set to execute every other frame
    BCC(ExPHC);
    // if either master timer control
    lda(ABS(TimerControl));
    // or any offscreen bits for hammer are set,
    ora(ABS(Misc_OffscreenBits));
    // branch to leave
    BNE(ExPHC);
    txa();
    // multiply misc object offset by four
    asl();
    asl();
    clc();
    // add 36 or $24 bytes to get proper offset
    adc(IMM(0x24));
    // for misc object bounding box coordinates
    tay();
    // do player-to-hammer collision detection
    JSR(PlayerCollisionCore);
    // get misc object offset
    ldx(ABS(ObjectOffset));
    // if no collision, then branch
    BCC(ClHCol);
    // otherwise read collision flag
    lda(ABSX(Misc_Collision_Flag));
    // if collision flag already set, branch to leave
    BNE(ExPHC);
    lda(IMM(0x1));
    // otherwise set collision flag now
    sta(ABSX(Misc_Collision_Flag));
    lda(ABSX(Misc_X_Speed));
    // get two's compliment of
    eor(IMM(0xff));
    // hammer's horizontal speed
    clc();
    adc(IMM(0x1));
    // set to send hammer flying the opposite direction
    sta(ABSX(Misc_X_Speed));
    // if star mario invincibility timer set,
    lda(ABS(StarInvincibleTimer));
    // branch to leave
    BNE(ExPHC);
    // otherwise jump to hurt player, do not return
    JMP(InjurePlayer);
    JMP(ClHCol);
}
void ClHCol() {
    _debug("ClHCol", __FILE__, __LINE__);
    // clear collision flag
    lda(IMM(0x0));
    sta(ABSX(Misc_Collision_Flag));
    JMP(ExPHC);
}
void ExPHC() {
    _debug("ExPHC", __FILE__, __LINE__);
    return;
}
void HandlePowerUpCollision() {
    _debug("HandlePowerUpCollision", __FILE__, __LINE__);
    // erase the power-up object
    JSR(EraseEnemyObject);
    lda(IMM(0x6));
    // award 1000 points to player by default
    JSR(SetupFloateyNumber);
    lda(IMM(Sfx_PowerUpGrab));
    // play the power-up sound
    sta(ABS(Square2SoundQueue));
    // check power-up type
    lda(ABS(PowerUpType));
    cmp(IMM(0x2));
    // if mushroom or fire flower, branch
    BCC(Shroom_Flower_PUp);
    cmp(IMM(0x3));
    // if 1-up mushroom, branch
    BEQ(SetFor1Up);
    // otherwise set star mario invincibility
    lda(IMM(0x23));
    // timer, and load the star mario music
    sta(ABS(StarInvincibleTimer));
    // into the area music queue, then leave
    lda(IMM(StarPowerMusic));
    sta(ABS(AreaMusicQueue));
    return;
}
void Shroom_Flower_PUp() {
    _debug("Shroom_Flower_PUp", __FILE__, __LINE__);
    // if player status = small, branch
    lda(ABS(PlayerStatus));
    BEQ(UpToSuper);
    // if player status not super, leave
    cmp(IMM(0x1));
    BNE(NoPUp);
    // get enemy offset, not necessary
    ldx(ABS(ObjectOffset));
    // set player status to fiery
    lda(IMM(0x2));
    sta(ABS(PlayerStatus));
    // run sub to change colors of player
    JSR(GetPlayerColors);
    // get enemy offset again, and again not necessary
    ldx(ABS(ObjectOffset));
    // set value to be used by subroutine tree (fiery)
    lda(IMM(0xc));
    // jump to set values accordingly
    JMP(UpToFiery);
    JMP(SetFor1Up);
}
void SetFor1Up() {
    _debug("SetFor1Up", __FILE__, __LINE__);
    // change 1000 points into 1-up instead
    lda(IMM(0xb));
    // and then leave
    sta(ABSX(FloateyNum_Control));
    return;
}
void UpToSuper() {
    _debug("UpToSuper", __FILE__, __LINE__);
    // set player status to super
    lda(IMM(0x1));
    sta(ABS(PlayerStatus));
    // set value to be used by subroutine tree (super)
    lda(IMM(0x9));
    JMP(UpToFiery);
}
void UpToFiery() {
    _debug("UpToFiery", __FILE__, __LINE__);
    // set value to be used as new player state
    ldy(IMM(0x0));
    // set values to stop certain things in motion
    JSR(SetPRout);
    JMP(NoPUp);
}
void NoPUp() {
    _debug("NoPUp", __FILE__, __LINE__);
    return;
}
void PlayerEnemyCollision() {
    _debug("PlayerEnemyCollision", __FILE__, __LINE__);
    // check counter for d0 set
    lda(ABS(FrameCounter));
    lsr();
    // if set, branch to leave
    BCS(NoPUp);
    // if player object is completely offscreen or
    JSR(CheckPlayerVertical);
    // if down past 224th pixel row, branch to leave
    BCS(NoPECol);
    // if current enemy is offscreen by any amount,
    lda(ABSX(EnemyOffscrBitsMasked));
    // go ahead and branch to leave
    BNE(NoPECol);
    lda(ABS(GameEngineSubroutine));
    // if not set to run player control routine
    cmp(IMM(0x8));
    // on next frame, branch to leave
    BNE(NoPECol);
    lda(ABSX(Enemy_State));
    // if enemy state has d5 set, branch to leave
    anda(IMM(0b100000));
    BNE(NoPECol);
    // get bounding box offset for current enemy object
    JSR(GetEnemyBoundBoxOfs);
    // do collision detection on player vs. enemy
    JSR(PlayerCollisionCore);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    // if collision, branch past this part here
    BCS(CheckForPUpCollision);
    lda(ABSX(Enemy_CollisionBits));
    // otherwise, clear d0 of current enemy object's
    anda(IMM(0b11111110));
    // collision bit
    sta(ABSX(Enemy_CollisionBits));
    JMP(NoPECol);
}
void NoPECol() {
    _debug("NoPECol", __FILE__, __LINE__);
    return;
}
void CheckForPUpCollision() {
    _debug("CheckForPUpCollision", __FILE__, __LINE__);
    ldy(ABSX(Enemy_ID));
    // check for power-up object
    cpy(IMM(PowerUpObject));
    // if not found, branch to next part
    BNE(EColl);
    // otherwise, unconditional jump backwards
    JMP(HandlePowerUpCollision);
    JMP(EColl);
}
void EColl() {
    _debug("EColl", __FILE__, __LINE__);
    // if star mario invincibility timer expired,
    lda(ABS(StarInvincibleTimer));
    // perform task here, otherwise kill enemy like
    BEQ(HandlePECollisions);
    // hit with a shell, or from beneath
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}
void HandlePECollisions() {
    _debug("HandlePECollisions", __FILE__, __LINE__);
    // check enemy collision bits for d0 set
    lda(ABSX(Enemy_CollisionBits));
    // or for being offscreen at all
    anda(IMM(0b1));
    ora(ABSX(EnemyOffscrBitsMasked));
    // branch to leave if either is true
    BNE(ExPEC);
    lda(IMM(0x1));
    // otherwise set d0 now
    ora(ABSX(Enemy_CollisionBits));
    sta(ABSX(Enemy_CollisionBits));
    // branch if spiny
    cpy(IMM(Spiny));
    BEQ(ChkForPlayerInjury);
    // branch if piranha plant
    cpy(IMM(PiranhaPlant));
    BEQ(InjurePlayer);
    // branch if podoboo
    cpy(IMM(Podoboo));
    BEQ(InjurePlayer);
    // branch if bullet bill
    cpy(IMM(BulletBill_CannonVar));
    BEQ(ChkForPlayerInjury);
    // branch if object => $15
    cpy(IMM(0x15));
    BCS(InjurePlayer);
    // branch if water type level
    lda(ABS(AreaType));
    BEQ(InjurePlayer);
    // branch if d7 of enemy state was set
    lda(ABSX(Enemy_State));
    asl();
    BCS(ChkForPlayerInjury);
    // mask out all but 3 LSB of enemy state
    lda(ABSX(Enemy_State));
    anda(IMM(0b111));
    // branch if enemy is in normal or falling state
    cmp(IMM(0x2));
    BCC(ChkForPlayerInjury);
    // branch to leave if goomba in defeated state
    lda(ABSX(Enemy_ID));
    cmp(IMM(Goomba));
    BEQ(ExPEC);
    // play smack enemy sound
    lda(IMM(Sfx_EnemySmack));
    sta(ABS(Square1SoundQueue));
    // set d7 in enemy state, thus become moving shell
    lda(ABSX(Enemy_State));
    ora(IMM(0b10000000));
    sta(ABSX(Enemy_State));
    // set moving direction and get offset
    JSR(EnemyFacePlayer);
    // load and set horizontal speed data with offset
    lda(ABSY(0x8000+offsetof(G, KickedShellXSpdData)));
    sta(ABSX(Enemy_X_Speed));
    // add three to whatever the stomp counter contains
    lda(IMM(0x3));
    // to give points for kicking the shell
    clc();
    adc(ABS(StompChainCounter));
    // check shell enemy's timer
    ldy(ABSX(EnemyIntervalTimer));
    // if above a certain point, branch using the points
    cpy(IMM(0x3));
    // data obtained from the stomp counter + 3
    BCS(KSPts);
    // otherwise, set points based on proximity to timer expiration
    lda(ABSY(0x8000+offsetof(G, KickedShellPtsData)));
    JMP(KSPts);
}
void KSPts() {
    _debug("KSPts", __FILE__, __LINE__);
    // set values for floatey number now
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}
void ExPEC() {
    _debug("ExPEC", __FILE__, __LINE__);
    // leave!!!
    return;
}
void ChkForPlayerInjury() {
    _debug("ChkForPlayerInjury", __FILE__, __LINE__);
    // check player's vertical speed
    lda(ABS(Player_Y_Speed));
    // perform procedure below if player moving upwards
    BMI(ChkInj);
    // or not at all, and branch elsewhere if moving downwards
    BNE(EnemyStomped);
    JMP(ChkInj);
}
void ChkInj() {
    _debug("ChkInj", __FILE__, __LINE__);
    // branch if enemy object < $07
    lda(ABSX(Enemy_ID));
    cmp(IMM(Bloober));
    BCC(ChkETmrs);
    // add 12 pixels to player's vertical position
    lda(ABS(Player_Y_Position));
    clc();
    adc(IMM(0xc));
    // compare modified player's position to enemy's position
    cmp(ABSX(Enemy_Y_Position));
    // branch if this player's position above (less than) enemy's
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}
void ChkETmrs() {
    _debug("ChkETmrs", __FILE__, __LINE__);
    // check stomp timer
    lda(ABS(StompTimer));
    // branch if set
    BNE(EnemyStomped);
    // check to see if injured invincibility timer still
    lda(ABS(InjuryTimer));
    // counting down, and branch elsewhere to leave if so
    BNE(ExInjColRoutines);
    lda(ABS(Player_Rel_XPos));
    // if player's relative position to the left of enemy's
    cmp(ABS(Enemy_Rel_XPos));
    // relative position, branch here
    BCC(TInjE);
    // otherwise do a jump here
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}
void TInjE() {
    _debug("TInjE", __FILE__, __LINE__);
    // if enemy moving towards the left,
    lda(ABSX(Enemy_MovingDir));
    // branch, otherwise do a jump here
    cmp(IMM(0x1));
    // to turn the enemy around
    BNE(InjurePlayer);
    JMP(LInj);
    JMP(InjurePlayer);
}
void InjurePlayer() {
    _debug("InjurePlayer", __FILE__, __LINE__);
    // check again to see if injured invincibility timer is
    lda(ABS(InjuryTimer));
    // at zero, and branch to leave if so
    BNE(ExInjColRoutines);
    JMP(ForceInjury);
}
void ForceInjury() {
    _debug("ForceInjury", __FILE__, __LINE__);
    // check player's status
    ldx(ABS(PlayerStatus));
    // branch if small
    BEQ(KillPlayer);
    // otherwise set player's status to small
    sta(ABS(PlayerStatus));
    lda(IMM(0x8));
    // set injured invincibility timer
    sta(ABS(InjuryTimer));
    asl();
    // play pipedown/injury sound
    sta(ABS(Square1SoundQueue));
    // change player's palette if necessary
    JSR(GetPlayerColors);
    // set subroutine to run on next frame
    lda(IMM(0xa));
    JMP(SetKRout);
}
void SetKRout() {
    _debug("SetKRout", __FILE__, __LINE__);
    // set new player state
    ldy(IMM(0x1));
    JMP(SetPRout);
}
void SetPRout() {
    _debug("SetPRout", __FILE__, __LINE__);
    // load new value to run subroutine on next frame
    sta(ABS(GameEngineSubroutine));
    // store new player state
    sty(ABS(Player_State));
    ldy(IMM(0xff));
    // set master timer control flag to halt timers
    sty(ABS(TimerControl));
    iny();
    // initialize scroll speed
    sty(ABS(ScrollAmount));
    JMP(ExInjColRoutines);
}
void ExInjColRoutines() {
    _debug("ExInjColRoutines", __FILE__, __LINE__);
    // get enemy offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void KillPlayer() {
    _debug("KillPlayer", __FILE__, __LINE__);
    // halt player's horizontal movement by initializing speed
    stx(ABS(Player_X_Speed));
    inx();
    // set event music queue to death music
    stx(ABS(EventMusicQueue));
    lda(IMM(0xfc));
    // set new vertical speed
    sta(ABS(Player_Y_Speed));
    // set subroutine to run on next frame
    lda(IMM(0xb));
    // branch to set player's state and other things
    BNE(SetKRout);
    JMP(EnemyStomped);
}
void EnemyStomped() {
    _debug("EnemyStomped", __FILE__, __LINE__);
    // check for spiny, branch to hurt player
    lda(ABSX(Enemy_ID));
    // if found
    cmp(IMM(Spiny));
    BEQ(InjurePlayer);
    // otherwise play stomp/swim sound
    lda(IMM(Sfx_EnemyStomp));
    sta(ABS(Square1SoundQueue));
    lda(ABSX(Enemy_ID));
    // initialize points data offset for stomped enemies
    ldy(IMM(0x0));
    // branch for cheep-cheep
    cmp(IMM(FlyingCheepCheep));
    BEQ(EnemyStompedPts);
    // branch for either bullet bill object
    cmp(IMM(BulletBill_FrenzyVar));
    BEQ(EnemyStompedPts);
    cmp(IMM(BulletBill_CannonVar));
    BEQ(EnemyStompedPts);
    // branch for podoboo (this branch is logically impossible
    cmp(IMM(Podoboo));
    // for cpu to take due to earlier checking of podoboo)
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch for hammer bro
    cmp(IMM(HammerBro));
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch for lakitu
    cmp(IMM(Lakitu));
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch if NOT bloober
    cmp(IMM(Bloober));
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}
void EnemyStompedPts() {
    _debug("EnemyStompedPts", __FILE__, __LINE__);
    // load points data using offset in Y
    lda(ABSY(0x8000+offsetof(G, StompedEnemyPtsData)));
    // run sub to set floatey number controls
    JSR(SetupFloateyNumber);
    lda(ABSX(Enemy_MovingDir));
    // save enemy movement direction to stack
    pha();
    // run sub to kill enemy
    JSR(SetStun);
    pla();
    // return enemy movement direction from stack
    sta(ABSX(Enemy_MovingDir));
    lda(IMM(0b100000));
    // set d5 in enemy state
    sta(ABSX(Enemy_State));
    // nullify vertical speed, physics-related thing,
    JSR(InitVStf);
    // and horizontal speed
    sta(ABSX(Enemy_X_Speed));
    // set player's vertical speed, to give bounce
    lda(IMM(0xfd));
    sta(ABS(Player_Y_Speed));
    return;
}
void ChkForDemoteKoopa() {
    _debug("ChkForDemoteKoopa", __FILE__, __LINE__);
    // branch elsewhere if enemy object < $09
    cmp(IMM(0x9));
    BCC(HandleStompedShellE);
    // demote koopa paratroopas to ordinary troopas
    anda(IMM(0b1));
    sta(ABSX(Enemy_ID));
    // return enemy to normal state
    ldy(IMM(0x0));
    sty(ABSX(Enemy_State));
    // award 400 points to the player
    lda(IMM(0x3));
    JSR(SetupFloateyNumber);
    // nullify physics-related thing and vertical speed
    JSR(InitVStf);
    // turn enemy around if necessary
    JSR(EnemyFacePlayer);
    lda(ABSY(0x8000+offsetof(G, DemotedKoopaXSpdData)));
    // set appropriate moving speed based on direction
    sta(ABSX(Enemy_X_Speed));
    // then move onto something else
    JMP(SBnce);
    JMP(HandleStompedShellE);
}
void HandleStompedShellE() {
    _debug("HandleStompedShellE", __FILE__, __LINE__);
    // set defeated state for enemy
    lda(IMM(0x4));
    sta(ABSX(Enemy_State));
    // increment the stomp counter
    inc(ABS(StompChainCounter));
    // add whatever is in the stomp counter
    lda(ABS(StompChainCounter));
    // to whatever is in the stomp timer
    clc();
    adc(ABS(StompTimer));
    // award points accordingly
    JSR(SetupFloateyNumber);
    // increment stomp timer of some sort
    inc(ABS(StompTimer));
    // check primary hard mode flag
    ldy(ABS(PrimaryHardMode));
    // load timer setting according to flag
    lda(ABSY(0x8000+offsetof(G, RevivalRateData)));
    // set as enemy timer to revive stomped enemy
    sta(ABSX(EnemyIntervalTimer));
    JMP(SBnce);
}
void SBnce() {
    _debug("SBnce", __FILE__, __LINE__);
    // set player's vertical speed for bounce
    lda(IMM(0xfc));
    // and then leave!!!
    sta(ABS(Player_Y_Speed));
    return;
}
void ChkEnemyFaceRight() {
    _debug("ChkEnemyFaceRight", __FILE__, __LINE__);
    // check to see if enemy is moving to the right
    lda(ABSX(Enemy_MovingDir));
    cmp(IMM(0x1));
    // if not, branch
    BNE(LInj);
    // otherwise go back to hurt player
    JMP(InjurePlayer);
    JMP(LInj);
}
void LInj() {
    _debug("LInj", __FILE__, __LINE__);
    // turn the enemy around, if necessary
    JSR(EnemyTurnAround);
    // go back to hurt player
    JMP(InjurePlayer);
    JMP(EnemyFacePlayer);
}
void EnemyFacePlayer() {
    _debug("EnemyFacePlayer", __FILE__, __LINE__);
    // set to move right by default
    ldy(IMM(0x1));
    // get horizontal difference between player and enemy
    JSR(PlayerEnemyDiff);
    // if enemy is to the right of player, do not increment
    BPL(SFcRt);
    // otherwise, increment to set to move to the left
    iny();
    JMP(SFcRt);
}
void SFcRt() {
    _debug("SFcRt", __FILE__, __LINE__);
    // set moving direction here
    sty(ABSX(Enemy_MovingDir));
    // then decrement to use as a proper offset
    dey();
    return;
}
void SetupFloateyNumber() {
    _debug("SetupFloateyNumber", __FILE__, __LINE__);
    // set number of points control for floatey numbers
    sta(ABSX(FloateyNum_Control));
    lda(IMM(0x30));
    // set timer for floatey numbers
    sta(ABSX(FloateyNum_Timer));
    lda(ABSX(Enemy_Y_Position));
    // set vertical coordinate
    sta(ABSX(FloateyNum_Y_Pos));
    lda(ABS(Enemy_Rel_XPos));
    // set horizontal coordinate and leave
    sta(ABSX(FloateyNum_X_Pos));
    JMP(ExSFN);
}
void ExSFN() {
    _debug("ExSFN", __FILE__, __LINE__);
    return;
}
void EnemiesCollision() {
    _debug("EnemiesCollision", __FILE__, __LINE__);
    // check counter for d0 set
    lda(ABS(FrameCounter));
    lsr();
    // if d0 not set, leave
    BCC(ExSFN);
    lda(ABS(AreaType));
    // if water area type, leave
    BEQ(ExSFN);
    lda(ABSX(Enemy_ID));
    // if enemy object => $15, branch to leave
    cmp(IMM(0x15));
    BCS(ExitECRoutine);
    // if lakitu, branch to leave
    cmp(IMM(Lakitu));
    BEQ(ExitECRoutine);
    // if piranha plant, branch to leave
    cmp(IMM(PiranhaPlant));
    BEQ(ExitECRoutine);
    // if masked offscreen bits nonzero, branch to leave
    lda(ABSX(EnemyOffscrBitsMasked));
    BNE(ExitECRoutine);
    // otherwise, do sub, get appropriate bounding box offset for
    JSR(GetEnemyBoundBoxOfs);
    // first enemy we're going to compare, then decrement for second
    dex();
    // branch to leave if there are no other enemies
    BMI(ExitECRoutine);
    JMP(ECLoop);
}
void ECLoop() {
    _debug("ECLoop", __FILE__, __LINE__);
    // save enemy object buffer offset for second enemy here
    stx(ABS(0x1));
    // save first enemy's bounding box offset to stack
    tya();
    pha();
    // check enemy object enable flag
    lda(ABSX(Enemy_Flag));
    // branch if flag not set
    BEQ(ReadyNextEnemy);
    lda(ABSX(Enemy_ID));
    // check for enemy object => $15
    cmp(IMM(0x15));
    // branch if true
    BCS(ReadyNextEnemy);
    cmp(IMM(Lakitu));
    // branch if enemy object is lakitu
    BEQ(ReadyNextEnemy);
    cmp(IMM(PiranhaPlant));
    // branch if enemy object is piranha plant
    BEQ(ReadyNextEnemy);
    lda(ABSX(EnemyOffscrBitsMasked));
    // branch if masked offscreen bits set
    BNE(ReadyNextEnemy);
    // get second enemy object's bounding box offset
    txa();
    // multiply by four, then add four
    asl();
    asl();
    clc();
    adc(IMM(0x4));
    // use as new contents of X
    tax();
    // do collision detection using the two enemies here
    JSR(SprObjectCollisionCore);
    // use first enemy offset for X
    ldx(ABS(ObjectOffset));
    // use second enemy offset for Y
    ldy(ABS(0x1));
    // if carry clear, no collision, branch ahead of this
    BCC(NoEnemyCollision);
    lda(ABSX(Enemy_State));
    // check both enemy states for d7 set
    ora(ABSY(Enemy_State));
    anda(IMM(0b10000000));
    // branch if at least one of them is set
    BNE(YesEC);
    // load first enemy's collision-related bits
    lda(ABSY(Enemy_CollisionBits));
    // check to see if bit connected to second enemy is
    anda(ABSX(0x8000+offsetof(G, SetBitsMask)));
    // already set, and move onto next enemy slot if set
    BNE(ReadyNextEnemy);
    lda(ABSY(Enemy_CollisionBits));
    // if the bit is not set, set it now
    ora(ABSX(0x8000+offsetof(G, SetBitsMask)));
    sta(ABSY(Enemy_CollisionBits));
    JMP(YesEC);
}
void YesEC() {
    _debug("YesEC", __FILE__, __LINE__);
    // react according to the nature of collision
    JSR(ProcEnemyCollisions);
    // move onto next enemy slot
    JMP(ReadyNextEnemy);
    JMP(NoEnemyCollision);
}
void NoEnemyCollision() {
    _debug("NoEnemyCollision", __FILE__, __LINE__);
    // load first enemy's collision-related bits
    lda(ABSY(Enemy_CollisionBits));
    // clear bit connected to second enemy
    anda(ABSX(0x8000+offsetof(G, ClearBitsMask)));
    // then move onto next enemy slot
    sta(ABSY(Enemy_CollisionBits));
    JMP(ReadyNextEnemy);
}
void ReadyNextEnemy() {
    _debug("ReadyNextEnemy", __FILE__, __LINE__);
    // get first enemy's bounding box offset from the stack
    pla();
    // use as Y again
    tay();
    // get and decrement second enemy's object buffer offset
    ldx(ABS(0x1));
    dex();
    // loop until all enemy slots have been checked
    BPL(ECLoop);
    JMP(ExitECRoutine);
}
void ExitECRoutine() {
    _debug("ExitECRoutine", __FILE__, __LINE__);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    // leave
    return;
}
void ProcEnemyCollisions() {
    _debug("ProcEnemyCollisions", __FILE__, __LINE__);
    // check both enemy states for d5 set
    lda(ABSY(Enemy_State));
    ora(ABSX(Enemy_State));
    // if d5 is set in either state, or both, branch
    anda(IMM(0b100000));
    // to leave and do nothing else at this point
    BNE(ExitProcessEColl);
    lda(ABSX(Enemy_State));
    // if second enemy state < $06, branch elsewhere
    cmp(IMM(0x6));
    BCC(ProcSecondEnemyColl);
    // check second enemy identifier for hammer bro
    lda(ABSX(Enemy_ID));
    // if hammer bro found in alt state, branch to leave
    cmp(IMM(HammerBro));
    BEQ(ExitProcessEColl);
    // check first enemy state for d7 set
    lda(ABSY(Enemy_State));
    asl();
    // branch if d7 is clear
    BCC(ShellCollisions);
    lda(IMM(0x6));
    // award 1000 points for killing enemy
    JSR(SetupFloateyNumber);
    // then kill enemy, then load
    JSR(ShellOrBlockDefeat);
    // original offset of second enemy
    ldy(ABS(0x1));
    JMP(ShellCollisions);
}
void ShellCollisions() {
    _debug("ShellCollisions", __FILE__, __LINE__);
    // move Y to X
    tya();
    tax();
    // kill second enemy
    JSR(ShellOrBlockDefeat);
    ldx(ABS(ObjectOffset));
    // get chain counter for shell
    lda(ABSX(ShellChainCounter));
    clc();
    // add four to get appropriate point offset
    adc(IMM(0x4));
    ldx(ABS(0x1));
    // award appropriate number of points for second enemy
    JSR(SetupFloateyNumber);
    // load original offset of first enemy
    ldx(ABS(ObjectOffset));
    // increment chain counter for additional enemies
    inc(ABSX(ShellChainCounter));
    JMP(ExitProcessEColl);
}
void ExitProcessEColl() {
    _debug("ExitProcessEColl", __FILE__, __LINE__);
    // leave!!!
    return;
}
void ProcSecondEnemyColl() {
    _debug("ProcSecondEnemyColl", __FILE__, __LINE__);
    // if first enemy state < $06, branch elsewhere
    lda(ABSY(Enemy_State));
    cmp(IMM(0x6));
    BCC(MoveEOfs);
    // check first enemy identifier for hammer bro
    lda(ABSY(Enemy_ID));
    // if hammer bro found in alt state, branch to leave
    cmp(IMM(HammerBro));
    BEQ(ExitProcessEColl);
    // otherwise, kill first enemy
    JSR(ShellOrBlockDefeat);
    ldy(ABS(0x1));
    // get chain counter for shell
    lda(ABSY(ShellChainCounter));
    clc();
    // add four to get appropriate point offset
    adc(IMM(0x4));
    ldx(ABS(ObjectOffset));
    // award appropriate number of points for first enemy
    JSR(SetupFloateyNumber);
    // load original offset of second enemy
    ldx(ABS(0x1));
    // increment chain counter for additional enemies
    inc(ABSX(ShellChainCounter));
    // leave!!!
    return;
}
void MoveEOfs() {
    _debug("MoveEOfs", __FILE__, __LINE__);
    // move Y ($01) to X
    tya();
    tax();
    // do the sub here using value from $01
    JSR(EnemyTurnAround);
    // then do it again using value from $08
    ldx(ABS(ObjectOffset));
    JMP(EnemyTurnAround);
}
void EnemyTurnAround() {
    _debug("EnemyTurnAround", __FILE__, __LINE__);
    // check for specific enemies
    lda(ABSX(Enemy_ID));
    cmp(IMM(PiranhaPlant));
    // if piranha plant, leave
    BEQ(ExTA);
    cmp(IMM(Lakitu));
    // if lakitu, leave
    BEQ(ExTA);
    cmp(IMM(HammerBro));
    // if hammer bro, leave
    BEQ(ExTA);
    cmp(IMM(Spiny));
    // if spiny, turn it around
    BEQ(RXSpd);
    cmp(IMM(GreenParatroopaJump));
    // if green paratroopa, turn it around
    BEQ(RXSpd);
    cmp(IMM(0x7));
    // if any OTHER enemy object => $07, leave
    BCS(ExTA);
    JMP(RXSpd);
}
void RXSpd() {
    _debug("RXSpd", __FILE__, __LINE__);
    // load horizontal speed
    lda(ABSX(Enemy_X_Speed));
    // get two's compliment for horizontal speed
    eor(IMM(0xff));
    tay();
    iny();
    // store as new horizontal speed
    sty(ABSX(Enemy_X_Speed));
    lda(ABSX(Enemy_MovingDir));
    // invert moving direction and store, then leave
    eor(IMM(0b11));
    // thus effectively turning the enemy around
    sta(ABSX(Enemy_MovingDir));
    JMP(ExTA);
}
void ExTA() {
    _debug("ExTA", __FILE__, __LINE__);
    // leave!!!
    return;
}
// $00 - vertical position of platform
void LargePlatformCollision() {
    _debug("LargePlatformCollision", __FILE__, __LINE__);
    // save value here
    lda(IMM(0xff));
    sta(ABSX(PlatformCollisionFlag));
    // check master timer control
    lda(ABS(TimerControl));
    // if set, branch to leave
    BNE(ExLPC);
    // if d7 set in object state,
    lda(ABSX(Enemy_State));
    // branch to leave
    BMI(ExLPC);
    lda(ABSX(Enemy_ID));
    // check enemy object identifier for
    cmp(IMM(0x24));
    // balance platform, branch if not found
    BNE(ChkForPlayerC_LargeP);
    lda(ABSX(Enemy_State));
    // set state as enemy offset here
    tax();
    // perform code with state offset, then original offset, in X
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}
void ChkForPlayerC_LargeP() {
    _debug("ChkForPlayerC_LargeP", __FILE__, __LINE__);
    // figure out if player is below a certain point
    JSR(CheckPlayerVertical);
    // or offscreen, branch to leave if true
    BCS(ExLPC);
    txa();
    // get bounding box offset in Y
    JSR(GetEnemyBoundBoxOfsArg);
    // store vertical coordinate in
    lda(ABSX(Enemy_Y_Position));
    // temp variable for now
    sta(ABS(0x0));
    // send offset we're on to the stack
    txa();
    pha();
    // do player-to-platform collision detection
    JSR(PlayerCollisionCore);
    // retrieve offset from the stack
    pla();
    tax();
    // if no collision, branch to leave
    BCC(ExLPC);
    // otherwise collision, perform sub
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}
void ExLPC() {
    _debug("ExLPC", __FILE__, __LINE__);
    // get enemy object buffer offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
// $00 - counter for bounding boxes
void SmallPlatformCollision() {
    _debug("SmallPlatformCollision", __FILE__, __LINE__);
    // if master timer control set,
    lda(ABS(TimerControl));
    // branch to leave
    BNE(ExSPC);
    // otherwise initialize collision flag
    sta(ABSX(PlatformCollisionFlag));
    // do a sub to see if player is below a certain point
    JSR(CheckPlayerVertical);
    // or entirely offscreen, and branch to leave if true
    BCS(ExSPC);
    lda(IMM(0x2));
    // load counter here for 2 bounding boxes
    sta(ABS(0x0));
    JMP(ChkSmallPlatLoop);
}
void ChkSmallPlatLoop() {
    _debug("ChkSmallPlatLoop", __FILE__, __LINE__);
    // get enemy object offset
    ldx(ABS(ObjectOffset));
    // get bounding box offset in Y
    JSR(GetEnemyBoundBoxOfs);
    // if d1 of offscreen lower nybble bits was set
    anda(IMM(0b10));
    // then branch to leave
    BNE(ExSPC);
    // check top of platform's bounding box for being
    lda(ABSY(BoundingBox_UL_YPos));
    // above a specific point
    cmp(IMM(0x20));
    // if so, branch, don't do collision detection
    BCC(MoveBoundBox);
    // otherwise, perform player-to-platform collision detection
    JSR(PlayerCollisionCore);
    // skip ahead if collision
    BCS(ProcSPlatCollisions);
    JMP(MoveBoundBox);
}
void MoveBoundBox() {
    _debug("MoveBoundBox", __FILE__, __LINE__);
    // move bounding box vertical coordinates
    lda(ABSY(BoundingBox_UL_YPos));
    // 128 pixels downwards
    clc();
    adc(IMM(0x80));
    sta(ABSY(BoundingBox_UL_YPos));
    lda(ABSY(BoundingBox_DR_YPos));
    clc();
    adc(IMM(0x80));
    sta(ABSY(BoundingBox_DR_YPos));
    // decrement counter we set earlier
    dec(ABS(0x0));
    // loop back until both bounding boxes are checked
    BNE(ChkSmallPlatLoop);
    JMP(ExSPC);
}
void ExSPC() {
    _debug("ExSPC", __FILE__, __LINE__);
    // get enemy object buffer offset, then leave
    ldx(ABS(ObjectOffset));
    return;
}
void ProcSPlatCollisions() {
    _debug("ProcSPlatCollisions", __FILE__, __LINE__);
    // return enemy object buffer offset to X, then continue
    ldx(ABS(ObjectOffset));
    JMP(ProcLPlatCollisions);
}
void ProcLPlatCollisions() {
    _debug("ProcLPlatCollisions", __FILE__, __LINE__);
    // get difference by subtracting the top
    lda(ABSY(BoundingBox_DR_YPos));
    // of the player's bounding box from the bottom
    sec();
    // of the platform's bounding box
    sbc(ABS(BoundingBox_UL_YPos));
    // if difference too large or negative,
    cmp(IMM(0x4));
    // branch, do not alter vertical speed of player
    BCS(ChkForTopCollision);
    // check to see if player's vertical speed is moving down
    lda(ABS(Player_Y_Speed));
    // if so, don't mess with it
    BPL(ChkForTopCollision);
    // otherwise, set vertical
    lda(IMM(0x1));
    // speed of player to kill jump
    sta(ABS(Player_Y_Speed));
    JMP(ChkForTopCollision);
}
void ChkForTopCollision() {
    _debug("ChkForTopCollision", __FILE__, __LINE__);
    // get difference by subtracting the top
    lda(ABS(BoundingBox_DR_YPos));
    // of the platform's bounding box from the bottom
    sec();
    // of the player's bounding box
    sbc(ABSY(BoundingBox_UL_YPos));
    cmp(IMM(0x6));
    // if difference not close enough, skip all of this
    BCS(PlatformSideCollisions);
    lda(ABS(Player_Y_Speed));
    // if player's vertical speed moving upwards, skip this
    BMI(PlatformSideCollisions);
    // get saved bounding box counter from earlier
    lda(ABS(0x0));
    ldy(ABSX(Enemy_ID));
    // if either of the two small platform objects are found,
    cpy(IMM(0x2b));
    // regardless of which one, branch to use bounding box counter
    BEQ(SetCollisionFlag);
    // as contents of collision flag
    cpy(IMM(0x2c));
    BEQ(SetCollisionFlag);
    // otherwise use enemy object buffer offset
    txa();
    JMP(SetCollisionFlag);
}
void SetCollisionFlag() {
    _debug("SetCollisionFlag", __FILE__, __LINE__);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    // save either bounding box counter or enemy offset here
    sta(ABSX(PlatformCollisionFlag));
    lda(IMM(0x0));
    // set player state to normal then leave
    sta(ABS(Player_State));
    return;
}
void PlatformSideCollisions() {
    _debug("PlatformSideCollisions", __FILE__, __LINE__);
    // set value here to indicate possible horizontal
    lda(IMM(0x1));
    // collision on left side of platform
    sta(ABS(0x0));
    // get difference by subtracting platform's left edge
    lda(ABS(BoundingBox_DR_XPos));
    // from player's right edge
    sec();
    sbc(ABSY(BoundingBox_UL_XPos));
    // if difference close enough, skip all of this
    cmp(IMM(0x8));
    BCC(SideC);
    // otherwise increment value set here for right side collision
    inc(ABS(0x0));
    // get difference by subtracting player's left edge
    lda(ABSY(BoundingBox_DR_XPos));
    // from platform's right edge
    clc();
    sbc(ABS(BoundingBox_UL_XPos));
    // if difference not close enough, skip subroutine
    cmp(IMM(0x9));
    // and instead branch to leave (no collision)
    BCS(NoSideC);
    JMP(SideC);
}
void SideC() {
    _debug("SideC", __FILE__, __LINE__);
    // deal with horizontal collision
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}
void NoSideC() {
    _debug("NoSideC", __FILE__, __LINE__);
    // return with enemy object buffer offset
    ldx(ABS(ObjectOffset));
    return;
}
void PositionPlayerOnS_Plat() {
    _debug("PositionPlayerOnS_Plat", __FILE__, __LINE__);
    // use bounding box counter saved in collision flag
    tay();
    // for offset
    lda(ABSX(Enemy_Y_Position));
    // add positioning data using offset to the vertical
    clc();
    // coordinate
    adc(ABSY(((0x8000+offsetof(G, PlayerPosSPlatData)) - (1))));
    JMP(PositionPlayerOnVPlat_Skip);
    JMP(PositionPlayerOnVPlat);
}
void PositionPlayerOnVPlat() {
    _debug("PositionPlayerOnVPlat", __FILE__, __LINE__);
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    JMP(PositionPlayerOnVPlat_Skip);
}
void PositionPlayerOnVPlat_Skip() {
    _debug("PositionPlayerOnVPlat_Skip", __FILE__, __LINE__);
    ldy(ABS(GameEngineSubroutine));
    // if certain routine being executed on this frame,
    cpy(IMM(0xb));
    // skip all of this
    BEQ(ExPlPos);
    ldy(ABSX(Enemy_Y_HighPos));
    // if vertical high byte offscreen, skip this
    cpy(IMM(0x1));
    BNE(ExPlPos);
    // subtract 32 pixels from vertical coordinate
    sec();
    // for the player object's height
    sbc(IMM(0x20));
    // save as player's new vertical coordinate
    sta(ABS(Player_Y_Position));
    tya();
    // subtract borrow and store as player's
    sbc(IMM(0x0));
    // new vertical high byte
    sta(ABS(Player_Y_HighPos));
    lda(IMM(0x0));
    // initialize vertical speed and low byte of force
    sta(ABS(Player_Y_Speed));
    // and then leave
    sta(ABS(Player_Y_MoveForce));
    JMP(ExPlPos);
}
void ExPlPos() {
    _debug("ExPlPos", __FILE__, __LINE__);
    return;
}
void CheckPlayerVertical() {
    _debug("CheckPlayerVertical", __FILE__, __LINE__);
    // if player object is completely offscreen
    lda(ABS(Player_OffscreenBits));
    // vertically, leave this routine
    cmp(IMM(0xf0));
    BCS(ExCPV);
    // if player high vertical byte is not
    ldy(ABS(Player_Y_HighPos));
    // within the screen, leave this routine
    dey();
    BNE(ExCPV);
    // if on the screen, check to see how far down
    lda(ABS(Player_Y_Position));
    // the player is vertically
    cmp(IMM(0xd0));
    JMP(ExCPV);
}
void ExCPV() {
    _debug("ExCPV", __FILE__, __LINE__);
    return;
}
void GetEnemyBoundBoxOfs() {
    _debug("GetEnemyBoundBoxOfs", __FILE__, __LINE__);
    // get enemy object buffer offset
    lda(ABS(ObjectOffset));
    JMP(GetEnemyBoundBoxOfsArg);
}
void GetEnemyBoundBoxOfsArg() {
    _debug("GetEnemyBoundBoxOfsArg", __FILE__, __LINE__);
    // multiply A by four, then add four
    asl();
    // to skip player's bounding box
    asl();
    clc();
    adc(IMM(0x4));
    // send to Y
    tay();
    // get offscreen bits for enemy object
    lda(ABS(Enemy_OffscreenBits));
    // save low nybble
    anda(IMM(0b1111));
    // check for all bits set
    cmp(IMM(0b1111));
    return;
}
void PlayerBGCollision() {
    _debug("PlayerBGCollision", __FILE__, __LINE__);
    // if collision detection disabled flag set,
    lda(ABS(DisableCollisionDet));
    // branch to leave
    BNE(ExPBGCol);
    lda(ABS(GameEngineSubroutine));
    // if running routine #11 or $0b
    cmp(IMM(0xb));
    // branch to leave
    BEQ(ExPBGCol);
    cmp(IMM(0x4));
    // if running routines $00-$03 branch to leave
    BCC(ExPBGCol);
    // load default player state for swimming
    lda(IMM(0x1));
    // if swimming flag set,
    ldy(ABS(SwimmingFlag));
    // branch ahead to set default state
    BNE(SetPSte);
    // if player in normal state,
    lda(ABS(Player_State));
    // branch to set default state for falling
    BEQ(SetFallS);
    cmp(IMM(0x3));
    // if in any other state besides climbing, skip to next part
    BNE(ChkOnScr);
    JMP(SetFallS);
}
void SetFallS() {
    _debug("SetFallS", __FILE__, __LINE__);
    // load default player state for falling
    lda(IMM(0x2));
    JMP(SetPSte);
}
void SetPSte() {
    _debug("SetPSte", __FILE__, __LINE__);
    // set whatever player state is appropriate
    sta(ABS(Player_State));
    JMP(ChkOnScr);
}
void ChkOnScr() {
    _debug("ChkOnScr", __FILE__, __LINE__);
    lda(ABS(Player_Y_HighPos));
    // check player's vertical high byte for still on the screen
    cmp(IMM(0x1));
    // branch to leave if not
    BNE(ExPBGCol);
    lda(IMM(0xff));
    // initialize player's collision flag
    sta(ABS(Player_CollisionBits));
    lda(ABS(Player_Y_Position));
    // check player's vertical coordinate
    cmp(IMM(0xcf));
    // if not too close to the bottom of screen, continue
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}
void ExPBGCol() {
    _debug("ExPBGCol", __FILE__, __LINE__);
    // otherwise leave
    return;
}
void ChkCollSize() {
    _debug("ChkCollSize", __FILE__, __LINE__);
    // load default offset
    ldy(IMM(0x2));
    lda(ABS(CrouchingFlag));
    // if player crouching, skip ahead
    BNE(GBBAdr);
    lda(ABS(PlayerSize));
    // if player small, skip ahead
    BNE(GBBAdr);
    // otherwise decrement offset for big player not crouching
    dey();
    lda(ABS(SwimmingFlag));
    // if swimming flag set, skip ahead
    BNE(GBBAdr);
    // otherwise decrement offset
    dey();
    JMP(GBBAdr);
}
void GBBAdr() {
    _debug("GBBAdr", __FILE__, __LINE__);
    // get value using offset
    lda(ABSY(0x8000+offsetof(G, BlockBufferAdderData)));
    // store value here
    sta(ABS(0xeb));
    // put value into Y, as offset for block buffer routine
    tay();
    // get player's size as offset
    ldx(ABS(PlayerSize));
    lda(ABS(CrouchingFlag));
    // if player not crouching, branch ahead
    BEQ(HeadChk);
    // otherwise increment size as offset
    inx();
    JMP(HeadChk);
}
void HeadChk() {
    _debug("HeadChk", __FILE__, __LINE__);
    // get player's vertical coordinate
    lda(ABS(Player_Y_Position));
    // compare with upper extent value based on offset
    cmp(ABSX(0x8000+offsetof(G, PlayerBGUpperExtent)));
    // if player is too high, skip this part
    BCC(DoFootCheck);
    // do player-to-bg collision detection on top of
    JSR(BlockBufferColli_Head);
    // player, and branch if nothing above player's head
    BEQ(DoFootCheck);
    // check to see if player touched coin with their head
    JSR(CheckForCoinMTiles);
    // if so, branch to some other part of code
    BCS(AwardTouchedCoin);
    // check player's vertical speed
    ldy(ABS(Player_Y_Speed));
    // if player not moving upwards, branch elsewhere
    BPL(DoFootCheck);
    // check lower nybble of vertical coordinate returned
    ldy(ABS(0x4));
    // from collision detection routine
    cpy(IMM(0x4));
    // if low nybble < 4, branch
    BCC(DoFootCheck);
    // check to see what player's head bumped on
    JSR(CheckForSolidMTiles);
    // if player collided with solid metatile, branch
    BCS(SolidOrClimb);
    // otherwise check area type
    ldy(ABS(AreaType));
    // if water level, branch ahead
    BEQ(NYSpd);
    // if block bounce timer not expired,
    ldy(ABS(BlockBounceTimer));
    // branch ahead, do not process collision
    BNE(NYSpd);
    // otherwise do a sub to process collision
    JSR(PlayerHeadCollision);
    // jump ahead to skip these other parts here
    JMP(DoFootCheck);
    JMP(SolidOrClimb);
}
void SolidOrClimb() {
    _debug("SolidOrClimb", __FILE__, __LINE__);
    // if climbing metatile,
    cmp(IMM(0x26));
    // branch ahead and do not play sound
    BEQ(NYSpd);
    lda(IMM(Sfx_Bump));
    // otherwise load bump sound
    sta(ABS(Square1SoundQueue));
    JMP(NYSpd);
}
void NYSpd() {
    _debug("NYSpd", __FILE__, __LINE__);
    // set player's vertical speed to nullify
    lda(IMM(0x1));
    // jump or swim
    sta(ABS(Player_Y_Speed));
    JMP(DoFootCheck);
}
void DoFootCheck() {
    _debug("DoFootCheck", __FILE__, __LINE__);
    // get block buffer adder offset
    ldy(ABS(0xeb));
    lda(ABS(Player_Y_Position));
    // check to see how low player is
    cmp(IMM(0xcf));
    // if player is too far down on screen, skip all of this
    BCS(DoPlayerSideCheck);
    // do player-to-bg collision detection on bottom left of player
    JSR(BlockBufferColli_Feet);
    // check to see if player touched coin with their left foot
    JSR(CheckForCoinMTiles);
    // if so, branch to some other part of code
    BCS(AwardTouchedCoin);
    // save bottom left metatile to stack
    pha();
    // do player-to-bg collision detection on bottom right of player
    JSR(BlockBufferColli_Feet);
    // save bottom right metatile here
    sta(ABS(0x0));
    pla();
    // pull bottom left metatile and save here
    sta(ABS(0x1));
    // if anything here, skip this part
    BNE(ChkFootMTile);
    // otherwise check for anything in bottom right metatile
    lda(ABS(0x0));
    // and skip ahead if not
    BEQ(DoPlayerSideCheck);
    // check to see if player touched coin with their right foot
    JSR(CheckForCoinMTiles);
    // if not, skip unconditional jump and continue code
    BCC(ChkFootMTile);
    JMP(AwardTouchedCoin);
}
void AwardTouchedCoin() {
    _debug("AwardTouchedCoin", __FILE__, __LINE__);
    // follow the code to erase coin and award to player 1 coin
    JMP(HandleCoinMetatile);
    JMP(ChkFootMTile);
}
void ChkFootMTile() {
    _debug("ChkFootMTile", __FILE__, __LINE__);
    // check to see if player landed on climbable metatiles
    JSR(CheckForClimbMTiles);
    // if so, branch
    BCS(DoPlayerSideCheck);
    // check player's vertical speed
    ldy(ABS(Player_Y_Speed));
    // if player moving upwards, branch
    BMI(DoPlayerSideCheck);
    cmp(IMM(0xc5));
    // if player did not touch axe, skip ahead
    BNE(ContChk);
    // otherwise jump to set modes of operation
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}
void ContChk() {
    _debug("ContChk", __FILE__, __LINE__);
    // do sub to check for hidden coin or 1-up blocks
    JSR(ChkInvisibleMTiles);
    // if either found, branch
    BEQ(DoPlayerSideCheck);
    // if jumpspring animating right now,
    ldy(ABS(JumpspringAnimCtrl));
    // branch ahead
    BNE(InitSteP);
    // check lower nybble of vertical coordinate returned
    ldy(ABS(0x4));
    // from collision detection routine
    cpy(IMM(0x5));
    // if lower nybble < 5, branch
    BCC(LandPlyr);
    lda(ABS(Player_MovingDir));
    // use player's moving direction as temp variable
    sta(ABS(0x0));
    // jump to impede player's movement in that direction
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}
void LandPlyr() {
    _debug("LandPlyr", __FILE__, __LINE__);
    // do sub to check for jumpspring metatiles and deal with it
    JSR(ChkForLandJumpSpring);
    lda(IMM(0xf0));
    // mask out lower nybble of player's vertical position
    anda(ABS(Player_Y_Position));
    // and store as new vertical position to land player properly
    sta(ABS(Player_Y_Position));
    // do sub to process potential pipe entry
    JSR(HandlePipeEntry);
    lda(IMM(0x0));
    // initialize vertical speed and fractional
    sta(ABS(Player_Y_Speed));
    // movement force to stop player's vertical movement
    sta(ABS(Player_Y_MoveForce));
    // initialize enemy stomp counter
    sta(ABS(StompChainCounter));
    JMP(InitSteP);
}
void InitSteP() {
    _debug("InitSteP", __FILE__, __LINE__);
    lda(IMM(0x0));
    // set player's state to normal
    sta(ABS(Player_State));
    JMP(DoPlayerSideCheck);
}
void DoPlayerSideCheck() {
    _debug("DoPlayerSideCheck", __FILE__, __LINE__);
    // get block buffer adder offset
    ldy(ABS(0xeb));
    iny();
    // increment offset 2 bytes to use adders for side collisions
    iny();
    // set value here to be used as counter
    lda(IMM(0x2));
    sta(ABS(0x0));
    JMP(SideCheckLoop);
}
void SideCheckLoop() {
    _debug("SideCheckLoop", __FILE__, __LINE__);
    // move onto the next one
    iny();
    // store it
    sty(ABS(0xeb));
    lda(ABS(Player_Y_Position));
    // check player's vertical position
    cmp(IMM(0x20));
    // if player is in status bar area, branch ahead to skip this part
    BCC(BHalf);
    cmp(IMM(0xe4));
    // branch to leave if player is too far down
    BCS(ExSCH);
    // do player-to-bg collision detection on one half of player
    JSR(BlockBufferColli_Side);
    // branch ahead if nothing found
    BEQ(BHalf);
    // otherwise check for pipe metatiles
    cmp(IMM(0x1c));
    // if collided with sideways pipe (top), branch ahead
    BEQ(BHalf);
    cmp(IMM(0x6b));
    // if collided with water pipe (top), branch ahead
    BEQ(BHalf);
    // do sub to see if player bumped into anything climbable
    JSR(CheckForClimbMTiles);
    // if not, branch to alternate section of code
    BCC(CheckSideMTiles);
    JMP(BHalf);
}
void BHalf() {
    _debug("BHalf", __FILE__, __LINE__);
    // load block adder offset
    ldy(ABS(0xeb));
    // increment it
    iny();
    // get player's vertical position
    lda(ABS(Player_Y_Position));
    cmp(IMM(0x8));
    // if too high, branch to leave
    BCC(ExSCH);
    cmp(IMM(0xd0));
    // if too low, branch to leave
    BCS(ExSCH);
    // do player-to-bg collision detection on other half of player
    JSR(BlockBufferColli_Side);
    // if something found, branch
    BNE(CheckSideMTiles);
    // otherwise decrement counter
    dec(ABS(0x0));
    // run code until both sides of player are checked
    BNE(SideCheckLoop);
    JMP(ExSCH);
}
void ExSCH() {
    _debug("ExSCH", __FILE__, __LINE__);
    // leave
    return;
}
void CheckSideMTiles() {
    _debug("CheckSideMTiles", __FILE__, __LINE__);
    // check for hidden or coin 1-up blocks
    JSR(ChkInvisibleMTiles);
    // branch to leave if either found
    BEQ(ExCSM);
    // check for climbable metatiles
    JSR(CheckForClimbMTiles);
    // if not found, skip and continue with code
    BCC(ContSChk);
    // otherwise jump to handle climbing
    JMP(HandleClimbing);
    JMP(ContSChk);
}
void ContSChk() {
    _debug("ContSChk", __FILE__, __LINE__);
    // check to see if player touched coin
    JSR(CheckForCoinMTiles);
    // if so, execute code to erase coin and award to player 1 coin
    BCS(HandleCoinMetatile);
    // check for jumpspring metatiles
    JSR(ChkJumpspringMetatiles);
    // if not found, branch ahead to continue cude
    BCC(ChkPBtm);
    // otherwise check jumpspring animation control
    lda(ABS(JumpspringAnimCtrl));
    // branch to leave if set
    BNE(ExCSM);
    // otherwise jump to impede player's movement
    JMP(StopPlayerMove);
    JMP(ChkPBtm);
}
void ChkPBtm() {
    _debug("ChkPBtm", __FILE__, __LINE__);
    // get player's state
    ldy(ABS(Player_State));
    // check for player's state set to normal
    cpy(IMM(0x0));
    // if not, branch to impede player's movement
    BNE(StopPlayerMove);
    // get player's facing direction
    ldy(ABS(PlayerFacingDir));
    dey();
    // if facing left, branch to impede movement
    BNE(StopPlayerMove);
    // otherwise check for pipe metatiles
    cmp(IMM(0x6c));
    // if collided with sideways pipe (bottom), branch
    BEQ(PipeDwnS);
    // if collided with water pipe (bottom), continue
    cmp(IMM(0x1f));
    // otherwise branch to impede player's movement
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}
void PipeDwnS() {
    _debug("PipeDwnS", __FILE__, __LINE__);
    // check player's attributes
    lda(ABS(Player_SprAttrib));
    // if already set, branch, do not play sound again
    BNE(PlyrPipe);
    ldy(IMM(Sfx_PipeDown_Injury));
    // otherwise load pipedown/injury sound
    sty(ABS(Square1SoundQueue));
    JMP(PlyrPipe);
}
void PlyrPipe() {
    _debug("PlyrPipe", __FILE__, __LINE__);
    ora(IMM(0b100000));
    // set background priority bit in player attributes
    sta(ABS(Player_SprAttrib));
    lda(ABS(Player_X_Position));
    // get lower nybble of player's horizontal coordinate
    anda(IMM(0b1111));
    // if at zero, branch ahead to skip this part
    BEQ(ChkGERtn);
    // set default offset for timer setting data
    ldy(IMM(0x0));
    // load page location for left side of screen
    lda(ABS(ScreenLeft_PageLoc));
    // if at page zero, use default offset
    BEQ(SetCATmr);
    // otherwise increment offset
    iny();
    JMP(SetCATmr);
}
void SetCATmr() {
    _debug("SetCATmr", __FILE__, __LINE__);
    // set timer for change of area as appropriate
    lda(ABSY(0x8000+offsetof(G, AreaChangeTimerData)));
    sta(ABS(ChangeAreaTimer));
    JMP(ChkGERtn);
}
void ChkGERtn() {
    _debug("ChkGERtn", __FILE__, __LINE__);
    // get number of game engine routine running
    lda(ABS(GameEngineSubroutine));
    cmp(IMM(0x7));
    // if running player entrance routine or
    BEQ(ExCSM);
    // player control routine, go ahead and branch to leave
    cmp(IMM(0x8));
    BNE(ExCSM);
    lda(IMM(0x2));
    // otherwise set sideways pipe entry routine to run
    sta(ABS(GameEngineSubroutine));
    // and leave
    return;
}
// $02 - high nybble of vertical coordinate from block buffer
// $04 - low nybble of horizontal coordinate from block buffer
// $06-$07 - block buffer address
void StopPlayerMove() {
    _debug("StopPlayerMove", __FILE__, __LINE__);
    // stop player's movement
    JSR(ImpedePlayerMove);
    JMP(ExCSM);
}
void ExCSM() {
    _debug("ExCSM", __FILE__, __LINE__);
    // leave
    return;
}
void HandleCoinMetatile() {
    _debug("HandleCoinMetatile", __FILE__, __LINE__);
    // do sub to erase coin metatile from block buffer
    JSR(ErACM);
    // increment coin tally used for 1-up blocks
    inc(ABS(CoinTallyFor1Ups));
    // update coin amount and tally on the screen
    JMP(GiveOneCoin);
    JMP(HandleAxeMetatile);
}
void HandleAxeMetatile() {
    _debug("HandleAxeMetatile", __FILE__, __LINE__);
    lda(IMM(0x0));
    // reset secondary mode
    sta(ABS(OperMode_Task));
    lda(IMM(0x2));
    // set primary mode to autoctrl mode
    sta(ABS(OperMode));
    lda(IMM(0x18));
    // set horizontal speed and continue to erase axe metatile
    sta(ABS(Player_X_Speed));
    JMP(ErACM);
}
void ErACM() {
    _debug("ErACM", __FILE__, __LINE__);
    // load vertical high nybble offset for block buffer
    ldy(ABS(0x2));
    // load blank metatile
    lda(IMM(0x0));
    // store to remove old contents from block buffer
    sta(INDY((0x6)));
    // update the screen accordingly
    JMP(RemoveCoin_Axe);
    JMP(HandleClimbing);
}
void HandleClimbing() {
    _debug("HandleClimbing", __FILE__, __LINE__);
    // check low nybble of horizontal coordinate returned from
    ldy(ABS(0x4));
    // collision detection routine against certain values, this
    cpy(IMM(0x6));
    // makes actual physical part of vine or flagpole thinner
    BCC(ExHC);
    // than 16 pixels
    cpy(IMM(0xa));
    BCC(ChkForFlagpole);
    JMP(ExHC);
}
void ExHC() {
    _debug("ExHC", __FILE__, __LINE__);
    // leave if too far left or too far right
    return;
}
void ChkForFlagpole() {
    _debug("ChkForFlagpole", __FILE__, __LINE__);
    // check climbing metatiles
    cmp(IMM(0x24));
    // branch if flagpole ball found
    BEQ(FlagpoleCollision);
    cmp(IMM(0x25));
    // branch to alternate code if flagpole shaft not found
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}
void FlagpoleCollision() {
    _debug("FlagpoleCollision", __FILE__, __LINE__);
    lda(ABS(GameEngineSubroutine));
    // check for end-of-level routine running
    cmp(IMM(0x5));
    // if running, branch to end of climbing code
    BEQ(PutPlayerOnVine);
    lda(IMM(0x1));
    // set player's facing direction to right
    sta(ABS(PlayerFacingDir));
    // set scroll lock flag
    inc(ABS(ScrollLock));
    lda(ABS(GameEngineSubroutine));
    // check for flagpole slide routine running
    cmp(IMM(0x4));
    // if running, branch to end of flagpole code here
    BEQ(RunFR);
    // load identifier for bullet bills (cannon variant)
    lda(IMM(BulletBill_CannonVar));
    // get rid of them
    JSR(KillEnemies);
    lda(IMM(Silence));
    // silence music
    sta(ABS(EventMusicQueue));
    lsr();
    // load flagpole sound into flagpole sound queue
    sta(ABS(FlagpoleSoundQueue));
    // start at end of vertical coordinate data
    ldx(IMM(0x4));
    lda(ABS(Player_Y_Position));
    // store player's vertical coordinate here to be used later
    sta(ABS(FlagpoleCollisionYPos));
    JMP(ChkFlagpoleYPosLoop);
}
void ChkFlagpoleYPosLoop() {
    _debug("ChkFlagpoleYPosLoop", __FILE__, __LINE__);
    // compare with current vertical coordinate data
    cmp(ABSX(0x8000+offsetof(G, FlagpoleYPosData)));
    // if player's => current, branch to use current offset
    BCS(MtchF);
    // otherwise decrement offset to use
    dex();
    // do this until all data is checked (use last one if all checked)
    BNE(ChkFlagpoleYPosLoop);
    JMP(MtchF);
}
void MtchF() {
    _debug("MtchF", __FILE__, __LINE__);
    // store offset here to be used later
    stx(ABS(FlagpoleScore));
    JMP(RunFR);
}
void RunFR() {
    _debug("RunFR", __FILE__, __LINE__);
    lda(IMM(0x4));
    // set value to run flagpole slide routine
    sta(ABS(GameEngineSubroutine));
    // jump to end of climbing code
    JMP(PutPlayerOnVine);
    JMP(VineCollision);
}
void VineCollision() {
    _debug("VineCollision", __FILE__, __LINE__);
    // check for climbing metatile used on vines
    cmp(IMM(0x26));
    BNE(PutPlayerOnVine);
    // check player's vertical coordinate
    lda(ABS(Player_Y_Position));
    // for being in status bar area
    cmp(IMM(0x20));
    // branch if not that far up
    BCS(PutPlayerOnVine);
    lda(IMM(0x1));
    // otherwise set to run autoclimb routine next frame
    sta(ABS(GameEngineSubroutine));
    JMP(PutPlayerOnVine);
}
void PutPlayerOnVine() {
    _debug("PutPlayerOnVine", __FILE__, __LINE__);
    // set player state to climbing
    lda(IMM(0x3));
    sta(ABS(Player_State));
    // nullify player's horizontal speed
    lda(IMM(0x0));
    // and fractional horizontal movement force
    sta(ABS(Player_X_Speed));
    sta(ABS(Player_X_MoveForce));
    // get player's horizontal coordinate
    lda(ABS(Player_X_Position));
    sec();
    // subtract from left side horizontal coordinate
    sbc(ABS(ScreenLeft_X_Pos));
    cmp(IMM(0x10));
    // if 16 or more pixels difference, do not alter facing direction
    BCS(SetVXPl);
    lda(IMM(0x2));
    // otherwise force player to face left
    sta(ABS(PlayerFacingDir));
    JMP(SetVXPl);
}
void SetVXPl() {
    _debug("SetVXPl", __FILE__, __LINE__);
    // get current facing direction, use as offset
    ldy(ABS(PlayerFacingDir));
    // get low byte of block buffer address
    lda(ABS(0x6));
    asl();
    // move low nybble to high
    asl();
    asl();
    asl();
    clc();
    // add pixels depending on facing direction
    adc(ABSY(((0x8000+offsetof(G, ClimbXPosAdder)) - (1))));
    // store as player's horizontal coordinate
    sta(ABS(Player_X_Position));
    // get low byte of block buffer address again
    lda(ABS(0x6));
    // if not zero, branch
    BNE(ExPVne);
    // load page location of right side of screen
    lda(ABS(ScreenRight_PageLoc));
    clc();
    // add depending on facing location
    adc(ABSY(((0x8000+offsetof(G, ClimbPLocAdder)) - (1))));
    // store as player's page location
    sta(ABS(Player_PageLoc));
    JMP(ExPVne);
}
void ExPVne() {
    _debug("ExPVne", __FILE__, __LINE__);
    // finally, we're done!
    return;
}
void ChkInvisibleMTiles() {
    _debug("ChkInvisibleMTiles", __FILE__, __LINE__);
    // check for hidden coin block
    cmp(IMM(0x5f));
    // branch to leave if found
    BEQ(ExCInvT);
    // check for hidden 1-up block
    cmp(IMM(0x60));
    JMP(ExCInvT);
}
void ExCInvT() {
    _debug("ExCInvT", __FILE__, __LINE__);
    // leave with zero flag set if either found
    return;
}
// $00-$01 - used to hold bottom right and bottom left metatiles (in that order)
// $00 - used as flag by ImpedePlayerMove to restrict specific movement
void ChkForLandJumpSpring() {
    _debug("ChkForLandJumpSpring", __FILE__, __LINE__);
    // do sub to check if player landed on jumpspring
    JSR(ChkJumpspringMetatiles);
    // if carry not set, jumpspring not found, therefore leave
    BCC(ExCJSp);
    lda(IMM(0x70));
    // otherwise set vertical movement force for player
    sta(ABS(VerticalForce));
    lda(IMM(0xf9));
    // set default jumpspring force
    sta(ABS(JumpspringForce));
    lda(IMM(0x3));
    // set jumpspring timer to be used later
    sta(ABS(JumpspringTimer));
    lsr();
    // set jumpspring animation control to start animating
    sta(ABS(JumpspringAnimCtrl));
    JMP(ExCJSp);
}
void ExCJSp() {
    _debug("ExCJSp", __FILE__, __LINE__);
    // and leave
    return;
}
void ChkJumpspringMetatiles() {
    _debug("ChkJumpspringMetatiles", __FILE__, __LINE__);
    // check for top jumpspring metatile
    cmp(IMM(0x67));
    // branch to set carry if found
    BEQ(JSFnd);
    // check for bottom jumpspring metatile
    cmp(IMM(0x68));
    // clear carry flag
    clc();
    // branch to use cleared carry if not found
    BNE(NoJSFnd);
    JMP(JSFnd);
}
void JSFnd() {
    _debug("JSFnd", __FILE__, __LINE__);
    // set carry if found
    sec();
    JMP(NoJSFnd);
}
void NoJSFnd() {
    _debug("NoJSFnd", __FILE__, __LINE__);
    // leave
    return;
}
void HandlePipeEntry() {
    _debug("HandlePipeEntry", __FILE__, __LINE__);
    // check saved controller bits from earlier
    lda(ABS(Up_Down_Buttons));
    // for pressing down
    anda(IMM(0b100));
    // if not pressing down, branch to leave
    BEQ(ExPipeE);
    lda(ABS(0x0));
    // check right foot metatile for warp pipe right metatile
    cmp(IMM(0x11));
    // branch to leave if not found
    BNE(ExPipeE);
    lda(ABS(0x1));
    // check left foot metatile for warp pipe left metatile
    cmp(IMM(0x10));
    // branch to leave if not found
    BNE(ExPipeE);
    lda(IMM(0x30));
    // set timer for change of area
    sta(ABS(ChangeAreaTimer));
    lda(IMM(0x3));
    // set to run vertical pipe entry routine on next frame
    sta(ABS(GameEngineSubroutine));
    lda(IMM(Sfx_PipeDown_Injury));
    // load pipedown/injury sound
    sta(ABS(Square1SoundQueue));
    lda(IMM(0b100000));
    // set background priority bit in player's attributes
    sta(ABS(Player_SprAttrib));
    // check warp zone control
    lda(ABS(WarpZoneControl));
    // branch to leave if none found
    BEQ(ExPipeE);
    // mask out all but 2 LSB
    anda(IMM(0b11));
    asl();
    // multiply by four
    asl();
    // save as offset to warp zone numbers (starts at left pipe)
    tax();
    // get player's horizontal position
    lda(ABS(Player_X_Position));
    cmp(IMM(0x60));
    // if player at left, not near middle, use offset and skip ahead
    BCC(GetWNum);
    // otherwise increment for middle pipe
    inx();
    cmp(IMM(0xa0));
    // if player at middle, but not too far right, use offset and skip
    BCC(GetWNum);
    // otherwise increment for last pipe
    inx();
    JMP(GetWNum);
}
void GetWNum() {
    _debug("GetWNum", __FILE__, __LINE__);
    // get warp zone numbers
    ldy(ABSX(0x8000+offsetof(G, WarpZoneNumbers)));
    // decrement for use as world number
    dey();
    // store as world number and offset
    sty(ABS(WorldNumber));
    // get offset to where this world's area offsets are
    ldx(ABSY(0x8000+offsetof(G, WorldAddrOffsets)));
    // get area offset based on world offset
    lda(ABSX(0x8000+offsetof(G, AreaAddrOffsets)));
    // store area offset here to be used to change areas
    sta(ABS(AreaPointer));
    lda(IMM(Silence));
    // silence music
    sta(ABS(EventMusicQueue));
    lda(IMM(0x0));
    // initialize starting page number
    sta(ABS(EntrancePage));
    // initialize area number used for area address offset
    sta(ABS(AreaNumber));
    // initialize level number used for world display
    sta(ABS(LevelNumber));
    // initialize mode of entry
    sta(ABS(AltEntranceControl));
    // set flag for hidden 1-up blocks
    inc(ABS(Hidden1UpFlag));
    // set flag to load new game timer
    inc(ABS(FetchNewGameTimerFlag));
    JMP(ExPipeE);
}
void ExPipeE() {
    _debug("ExPipeE", __FILE__, __LINE__);
    // leave!!!
    return;
}
void ImpedePlayerMove() {
    _debug("ImpedePlayerMove", __FILE__, __LINE__);
    // initialize value here
    lda(IMM(0x0));
    // get player's horizontal speed
    ldy(ABS(Player_X_Speed));
    // check value set earlier for
    ldx(ABS(0x0));
    // left side collision
    dex();
    // if right side collision, skip this part
    BNE(RImpd);
    // return value to X
    inx();
    // if player moving to the left,
    cpy(IMM(0x0));
    // branch to invert bit and leave
    BMI(ExIPM);
    // otherwise load A with value to be used later
    lda(IMM(0xff));
    // and jump to affect movement
    JMP(NXSpd);
    JMP(RImpd);
}
void RImpd() {
    _debug("RImpd", __FILE__, __LINE__);
    // return $02 to X
    ldx(IMM(0x2));
    // if player moving to the right,
    cpy(IMM(0x1));
    // branch to invert bit and leave
    BPL(ExIPM);
    // otherwise load A with value to be used here
    lda(IMM(0x1));
    JMP(NXSpd);
}
void NXSpd() {
    _debug("NXSpd", __FILE__, __LINE__);
    ldy(IMM(0x10));
    // set timer of some sort
    sty(ABS(SideCollisionTimer));
    ldy(IMM(0x0));
    // nullify player's horizontal speed
    sty(ABS(Player_X_Speed));
    // if value set in A not set to $ff,
    cmp(IMM(0x0));
    // branch ahead, do not decrement Y
    BPL(PlatF);
    // otherwise decrement Y now
    dey();
    JMP(PlatF);
}
void PlatF() {
    _debug("PlatF", __FILE__, __LINE__);
    // store Y as high bits of horizontal adder
    sty(ABS(0x0));
    clc();
    // add contents of A to player's horizontal
    adc(ABS(Player_X_Position));
    // position to move player left or right
    sta(ABS(Player_X_Position));
    lda(ABS(Player_PageLoc));
    // add high bits and carry to
    adc(ABS(0x0));
    // page location if necessary
    sta(ABS(Player_PageLoc));
    JMP(ExIPM);
}
void ExIPM() {
    _debug("ExIPM", __FILE__, __LINE__);
    // invert contents of X
    txa();
    eor(IMM(0xff));
    // mask out bit that was set here
    anda(ABS(Player_CollisionBits));
    // store to clear bit
    sta(ABS(Player_CollisionBits));
    return;
}
void CheckForSolidMTiles() {
    _debug("CheckForSolidMTiles", __FILE__, __LINE__);
    // find appropriate offset based on metatile's 2 MSB
    JSR(GetMTileAttrib);
    // compare current metatile with solid metatiles
    cmp(ABSX(0x8000+offsetof(G, SolidMTileUpperExt)));
    return;
}
void CheckForClimbMTiles() {
    _debug("CheckForClimbMTiles", __FILE__, __LINE__);
    // find appropriate offset based on metatile's 2 MSB
    JSR(GetMTileAttrib);
    // compare current metatile with climbable metatiles
    cmp(ABSX(0x8000+offsetof(G, ClimbMTileUpperExt)));
    return;
}
void CheckForCoinMTiles() {
    _debug("CheckForCoinMTiles", __FILE__, __LINE__);
    // check for regular coin
    cmp(IMM(0xc2));
    // branch if found
    BEQ(CoinSd);
    // check for underwater coin
    cmp(IMM(0xc3));
    // branch if found
    BEQ(CoinSd);
    // otherwise clear carry and leave
    clc();
    return;
}
void CoinSd() {
    _debug("CoinSd", __FILE__, __LINE__);
    lda(IMM(Sfx_CoinGrab));
    // load coin grab sound and leave
    sta(ABS(Square2SoundQueue));
    return;
}
void GetMTileAttrib() {
    _debug("GetMTileAttrib", __FILE__, __LINE__);
    // save metatile value into Y
    tay();
    // mask out all but 2 MSB
    anda(IMM(0b11000000));
    asl();
    // shift and rotate d7-d6 to d1-d0
    rol();
    rol();
    // use as offset for metatile data
    tax();
    // get original metatile value back
    tya();
    JMP(ExEBG);
}
void ExEBG() {
    _debug("ExEBG", __FILE__, __LINE__);
    // leave
    return;
}
void EnemyToBGCollisionDet() {
    _debug("EnemyToBGCollisionDet", __FILE__, __LINE__);
    // check enemy state for d6 set
    lda(ABSX(Enemy_State));
    anda(IMM(0b100000));
    // if set, branch to leave
    BNE(ExEBG);
    // otherwise, do a subroutine here
    JSR(SubtEnemyYPos);
    // if enemy vertical coord + 62 < 68, branch to leave
    BCC(ExEBG);
    ldy(ABSX(Enemy_ID));
    // if enemy object is not spiny, branch elsewhere
    cpy(IMM(Spiny));
    BNE(DoIDCheckBGColl);
    lda(ABSX(Enemy_Y_Position));
    // if enemy vertical coordinate < 36 branch to leave
    cmp(IMM(0x25));
    BCC(ExEBG);
    JMP(DoIDCheckBGColl);
}
void DoIDCheckBGColl() {
    _debug("DoIDCheckBGColl", __FILE__, __LINE__);
    // check for some other enemy object
    cpy(IMM(GreenParatroopaJump));
    // branch if not found
    BNE(HBChk);
    // otherwise jump elsewhere
    JMP(EnemyJump);
    JMP(HBChk);
}
void HBChk() {
    _debug("HBChk", __FILE__, __LINE__);
    // check for hammer bro
    cpy(IMM(HammerBro));
    // branch if not found
    BNE(CInvu);
    // otherwise jump elsewhere
    JMP(HammerBroBGColl);
    JMP(CInvu);
}
void CInvu() {
    _debug("CInvu", __FILE__, __LINE__);
    // if enemy object is spiny, branch
    cpy(IMM(Spiny));
    BEQ(YesIn);
    // if special power-up object, branch
    cpy(IMM(PowerUpObject));
    BEQ(YesIn);
    // if enemy object =>$07, branch to leave
    cpy(IMM(0x7));
    BCS(ExEBGChk);
    JMP(YesIn);
}
void YesIn() {
    _debug("YesIn", __FILE__, __LINE__);
    // if enemy object < $07, or = $12 or $2e, do this sub
    JSR(ChkUnderEnemy);
    // if block underneath enemy, branch
    BNE(HandleEToBGCollision);
    JMP(NoEToBGCollision);
}
void NoEToBGCollision() {
    _debug("NoEToBGCollision", __FILE__, __LINE__);
    // otherwise skip and do something else
    JMP(ChkForRedKoopa);
    JMP(HandleEToBGCollision);
}
// $02 - vertical coordinate from block buffer routine
void HandleEToBGCollision() {
    _debug("HandleEToBGCollision", __FILE__, __LINE__);
    // if something is underneath enemy, find out what
    JSR(ChkForNonSolids);
    // if blank $26, coins, or hidden blocks, jump, enemy falls through
    BEQ(NoEToBGCollision);
    cmp(IMM(0x23));
    // check for blank metatile $23 and branch if not found
    BNE(LandEnemyProperly);
    // get vertical coordinate used to find block
    ldy(ABS(0x2));
    // store default blank metatile in that spot so we won't
    lda(IMM(0x0));
    // trigger this routine accidentally again
    sta(INDY((0x6)));
    lda(ABSX(Enemy_ID));
    // if enemy object => $15, branch ahead
    cmp(IMM(0x15));
    BCS(ChkToStunEnemies);
    // if enemy object not goomba, branch ahead of this routine
    cmp(IMM(Goomba));
    BNE(GiveOEPoints);
    // if enemy object IS goomba, do this sub
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}
void GiveOEPoints() {
    _debug("GiveOEPoints", __FILE__, __LINE__);
    // award 100 points for hitting block beneath enemy
    lda(IMM(0x1));
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}
void ChkToStunEnemies() {
    _debug("ChkToStunEnemies", __FILE__, __LINE__);
    // perform many comparisons on enemy object identifier
    cmp(IMM(0x9));
    BCC(SetStun);
    // if the enemy object identifier is equal to the values
    cmp(IMM(0x11));
    // $09, $0e, $0f or $10, it will be modified, and not
    BCS(SetStun);
    // modified if not any of those values, note that piranha plant will
    cmp(IMM(0xa));
    // always fail this test because A will still have vertical
    BCC(Demote);
    // coordinate from previous addition, also these comparisons
    cmp(IMM(PiranhaPlant));
    // are only necessary if branching from $d7a1
    BCC(SetStun);
    JMP(Demote);
}
void Demote() {
    _debug("Demote", __FILE__, __LINE__);
    // erase all but LSB, essentially turning enemy object
    anda(IMM(0b1));
    // into green or red koopa troopa to demote them
    sta(ABSX(Enemy_ID));
    JMP(SetStun);
}
void SetStun() {
    _debug("SetStun", __FILE__, __LINE__);
    // load enemy state
    lda(ABSX(Enemy_State));
    // save high nybble
    anda(IMM(0b11110000));
    ora(IMM(0b10));
    // set d1 of enemy state
    sta(ABSX(Enemy_State));
    dec(ABSX(Enemy_Y_Position));
    // subtract two pixels from enemy's vertical position
    dec(ABSX(Enemy_Y_Position));
    lda(ABSX(Enemy_ID));
    // check for bloober object
    cmp(IMM(Bloober));
    BEQ(SetWYSpd);
    // set default vertical speed
    lda(IMM(0xfd));
    ldy(ABS(AreaType));
    // if area type not water, set as speed, otherwise
    BNE(SetNotW);
    JMP(SetWYSpd);
}
void SetWYSpd() {
    _debug("SetWYSpd", __FILE__, __LINE__);
    // change the vertical speed
    lda(IMM(0xff));
    JMP(SetNotW);
}
void SetNotW() {
    _debug("SetNotW", __FILE__, __LINE__);
    // set vertical speed now
    sta(ABSX(Enemy_Y_Speed));
    ldy(IMM(0x1));
    // get horizontal difference between player and enemy object
    JSR(PlayerEnemyDiff);
    // branch if enemy is to the right of player
    BPL(ChkBBill);
    // increment Y if not
    iny();
    JMP(ChkBBill);
}
void ChkBBill() {
    _debug("ChkBBill", __FILE__, __LINE__);
    lda(ABSX(Enemy_ID));
    // check for bullet bill (cannon variant)
    cmp(IMM(BulletBill_CannonVar));
    BEQ(NoCDirF);
    // check for bullet bill (frenzy variant)
    cmp(IMM(BulletBill_FrenzyVar));
    // branch if either found, direction does not change
    BEQ(NoCDirF);
    // store as moving direction
    sty(ABSX(Enemy_MovingDir));
    JMP(NoCDirF);
}
void NoCDirF() {
    _debug("NoCDirF", __FILE__, __LINE__);
    // decrement and use as offset
    dey();
    // get proper horizontal speed
    lda(ABSY(0x8000+offsetof(G, EnemyBGCXSpdData)));
    // and store, then leave
    sta(ABSX(Enemy_X_Speed));
    JMP(ExEBGChk);
}
void ExEBGChk() {
    _debug("ExEBGChk", __FILE__, __LINE__);
    return;
}
// $04 - low nybble of vertical coordinate from block buffer routine
void LandEnemyProperly() {
    _debug("LandEnemyProperly", __FILE__, __LINE__);
    // check lower nybble of vertical coordinate saved earlier
    lda(ABS(0x4));
    sec();
    // subtract eight pixels
    sbc(IMM(0x8));
    // used to determine whether enemy landed from falling
    cmp(IMM(0x5));
    // branch if lower nybble in range of $0d-$0f before subtract
    BCS(ChkForRedKoopa);
    lda(ABSX(Enemy_State));
    // branch if d6 in enemy state is set
    anda(IMM(0b1000000));
    BNE(LandEnemyInitState);
    lda(ABSX(Enemy_State));
    // branch if d7 in enemy state is not set
    asl();
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}
void SChkA() {
    _debug("SChkA", __FILE__, __LINE__);
    // if lower nybble < $0d, d7 set but d6 not set, jump here
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}
void ChkLandedEnemyState() {
    _debug("ChkLandedEnemyState", __FILE__, __LINE__);
    // if enemy in normal state, branch back to jump here
    lda(ABSX(Enemy_State));
    BEQ(SChkA);
    // if in state used by spiny's egg
    cmp(IMM(0x5));
    // then branch elsewhere
    BEQ(ProcEnemyDirection);
    // if already in state used by koopas and buzzy beetles
    cmp(IMM(0x3));
    // or in higher numbered state, branch to leave
    BCS(ExSteChk);
    // load enemy state again (why?)
    lda(ABSX(Enemy_State));
    // if not in $02 state (used by koopas and buzzy beetles)
    cmp(IMM(0x2));
    // then branch elsewhere
    BNE(ProcEnemyDirection);
    // load default timer here
    lda(IMM(0x10));
    // check enemy identifier for spiny
    ldy(ABSX(Enemy_ID));
    cpy(IMM(Spiny));
    // branch if not found
    BNE(SetForStn);
    // set timer for $00 if spiny
    lda(IMM(0x0));
    JMP(SetForStn);
}
void SetForStn() {
    _debug("SetForStn", __FILE__, __LINE__);
    // set timer here
    sta(ABSX(EnemyIntervalTimer));
    // set state here, apparently used to render
    lda(IMM(0x3));
    // upside-down koopas and buzzy beetles
    sta(ABSX(Enemy_State));
    // then land it properly
    JSR(EnemyLanding);
    JMP(ExSteChk);
}
void ExSteChk() {
    _debug("ExSteChk", __FILE__, __LINE__);
    // then leave
    return;
}
void ProcEnemyDirection() {
    _debug("ProcEnemyDirection", __FILE__, __LINE__);
    // check enemy identifier for goomba
    lda(ABSX(Enemy_ID));
    // branch if found
    cmp(IMM(Goomba));
    BEQ(LandEnemyInitState);
    // check for spiny
    cmp(IMM(Spiny));
    // branch if not found
    BNE(InvtD);
    lda(IMM(0x1));
    // send enemy moving to the right by default
    sta(ABSX(Enemy_MovingDir));
    lda(IMM(0x8));
    // set horizontal speed accordingly
    sta(ABSX(Enemy_X_Speed));
    lda(ABS(FrameCounter));
    // if timed appropriately, spiny will skip over
    anda(IMM(0b111));
    // trying to face the player
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}
void InvtD() {
    _debug("InvtD", __FILE__, __LINE__);
    // load 1 for enemy to face the left (inverted here)
    ldy(IMM(0x1));
    // get horizontal difference between player and enemy
    JSR(PlayerEnemyDiff);
    // if enemy to the right of player, branch
    BPL(CNwCDir);
    // if to the left, increment by one for enemy to face right (inverted)
    iny();
    JMP(CNwCDir);
}
void CNwCDir() {
    _debug("CNwCDir", __FILE__, __LINE__);
    tya();
    // compare direction in A with current direction in memory
    cmp(ABSX(Enemy_MovingDir));
    BNE(LandEnemyInitState);
    // if equal, not facing in correct dir, do sub to turn around
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}
void LandEnemyInitState() {
    _debug("LandEnemyInitState", __FILE__, __LINE__);
    // land enemy properly
    JSR(EnemyLanding);
    lda(ABSX(Enemy_State));
    // if d7 of enemy state is set, branch
    anda(IMM(0b10000000));
    BNE(NMovShellFallBit);
    // otherwise initialize enemy state and leave
    lda(IMM(0x0));
    // note this will also turn spiny's egg into spiny
    sta(ABSX(Enemy_State));
    return;
}
void NMovShellFallBit() {
    _debug("NMovShellFallBit", __FILE__, __LINE__);
    // nullify d6 of enemy state, save other bits
    lda(ABSX(Enemy_State));
    // and store, then leave
    anda(IMM(0b10111111));
    sta(ABSX(Enemy_State));
    return;
}
void ChkForRedKoopa() {
    _debug("ChkForRedKoopa", __FILE__, __LINE__);
    // check for red koopa troopa $03
    lda(ABSX(Enemy_ID));
    cmp(IMM(RedKoopa));
    // branch if not found
    BNE(Chk2MSBSt);
    lda(ABSX(Enemy_State));
    // if enemy found and in normal state, branch
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}
void Chk2MSBSt() {
    _debug("Chk2MSBSt", __FILE__, __LINE__);
    // save enemy state into Y
    lda(ABSX(Enemy_State));
    tay();
    // check for d7 set
    asl();
    // branch if not set
    BCC(GetSteFromD);
    lda(ABSX(Enemy_State));
    // set d6
    ora(IMM(0b1000000));
    // jump ahead of this part
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}
void GetSteFromD() {
    _debug("GetSteFromD", __FILE__, __LINE__);
    // load new enemy state with old as offset
    lda(ABSY(0x8000+offsetof(G, EnemyBGCStateData)));
    JMP(SetD6Ste);
}
void SetD6Ste() {
    _debug("SetD6Ste", __FILE__, __LINE__);
    // set as new state
    sta(ABSX(Enemy_State));
    JMP(DoEnemySideCheck);
}
// $00 - used to store bitmask (not used but initialized here)
// $eb - used in DoEnemySideCheck as counter and to compare moving directions
void DoEnemySideCheck() {
    _debug("DoEnemySideCheck", __FILE__, __LINE__);
    // if enemy within status bar, branch to leave
    lda(ABSX(Enemy_Y_Position));
    // because there's nothing there that impedes movement
    cmp(IMM(0x20));
    BCC(ExESdeC);
    // start by finding block to the left of enemy ($00,$14)
    ldy(IMM(0x16));
    // set value here in what is also used as
    lda(IMM(0x2));
    // OAM data offset
    sta(ABS(0xeb));
    JMP(SdeCLoop);
}
void SdeCLoop() {
    _debug("SdeCLoop", __FILE__, __LINE__);
    // check value
    lda(ABS(0xeb));
    // compare value against moving direction
    cmp(ABSX(Enemy_MovingDir));
    // branch if different and do not seek block there
    BNE(NextSdeC);
    // set flag in A for save horizontal coordinate
    lda(IMM(0x1));
    // find block to left or right of enemy object
    JSR(BlockBufferChk_Enemy);
    // if nothing found, branch
    BEQ(NextSdeC);
    // check for non-solid blocks
    JSR(ChkForNonSolids);
    // branch if not found
    BNE(ChkForBump_HammerBroJ);
    JMP(NextSdeC);
}
void NextSdeC() {
    _debug("NextSdeC", __FILE__, __LINE__);
    // move to the next direction
    dec(ABS(0xeb));
    iny();
    // increment Y, loop only if Y < $18, thus we check
    cpy(IMM(0x18));
    // enemy ($00, $14) and ($10, $14) pixel coordinates
    BCC(SdeCLoop);
    JMP(ExESdeC);
}
void ExESdeC() {
    _debug("ExESdeC", __FILE__, __LINE__);
    return;
}
void ChkForBump_HammerBroJ() {
    _debug("ChkForBump_HammerBroJ", __FILE__, __LINE__);
    // check if we're on the special use slot
    cpx(IMM(0x5));
    // and if so, branch ahead and do not play sound
    BEQ(NoBump);
    // if enemy state d7 not set, branch
    lda(ABSX(Enemy_State));
    // ahead and do not play sound
    asl();
    BCC(NoBump);
    // otherwise, play bump sound
    lda(IMM(Sfx_Bump));
    // sound will never be played if branching from ChkForRedKoopa
    sta(ABS(Square1SoundQueue));
    JMP(NoBump);
}
void NoBump() {
    _debug("NoBump", __FILE__, __LINE__);
    // check for hammer bro
    lda(ABSX(Enemy_ID));
    cmp(IMM(0x5));
    // branch if not found
    BNE(InvEnemyDir);
    lda(IMM(0x0));
    // initialize value here for bitmask
    sta(ABS(0x0));
    // load default vertical speed for jumping
    ldy(IMM(0xfa));
    // jump to code that makes hammer bro jump
    JMP(SetHJ);
    JMP(InvEnemyDir);
}
void InvEnemyDir() {
    _debug("InvEnemyDir", __FILE__, __LINE__);
    // jump to turn the enemy around
    JMP(RXSpd);
    JMP(PlayerEnemyDiff);
}
// $00 - used to hold horizontal difference between player and enemy
void PlayerEnemyDiff() {
    _debug("PlayerEnemyDiff", __FILE__, __LINE__);
    // get distance between enemy object's
    lda(ABSX(Enemy_X_Position));
    // horizontal coordinate and the player's
    sec();
    // horizontal coordinate
    sbc(ABS(Player_X_Position));
    // and store here
    sta(ABS(0x0));
    lda(ABSX(Enemy_PageLoc));
    // subtract borrow, then leave
    sbc(ABS(Player_PageLoc));
    return;
}
void EnemyLanding() {
    _debug("EnemyLanding", __FILE__, __LINE__);
    // do something here to vertical speed and something else
    JSR(InitVStf);
    lda(ABSX(Enemy_Y_Position));
    // save high nybble of vertical coordinate, and
    anda(IMM(0b11110000));
    // set d3, then store, probably used to set enemy object
    ora(IMM(0b1000));
    // neatly on whatever it's landing on
    sta(ABSX(Enemy_Y_Position));
    return;
}
void SubtEnemyYPos() {
    _debug("SubtEnemyYPos", __FILE__, __LINE__);
    // add 62 pixels to enemy object's
    lda(ABSX(Enemy_Y_Position));
    // vertical coordinate
    clc();
    adc(IMM(0x3e));
    // compare against a certain range
    cmp(IMM(0x44));
    // and leave with flags set for conditional branch
    return;
}
void EnemyJump() {
    _debug("EnemyJump", __FILE__, __LINE__);
    // do a sub here
    JSR(SubtEnemyYPos);
    // if enemy vertical coord + 62 < 68, branch to leave
    BCC(DoSide);
    lda(ABSX(Enemy_Y_Speed));
    // add two to vertical speed
    clc();
    adc(IMM(0x2));
    // if green paratroopa not falling, branch ahead
    cmp(IMM(0x3));
    BCC(DoSide);
    // otherwise, check to see if green paratroopa is
    JSR(ChkUnderEnemy);
    // standing on anything, then branch to same place if not
    BEQ(DoSide);
    // check for non-solid blocks
    JSR(ChkForNonSolids);
    // branch if found
    BEQ(DoSide);
    // change vertical coordinate and speed
    JSR(EnemyLanding);
    lda(IMM(0xfd));
    // make the paratroopa jump again
    sta(ABSX(Enemy_Y_Speed));
    JMP(DoSide);
}
void DoSide() {
    _debug("DoSide", __FILE__, __LINE__);
    // check for horizontal blockage, then leave
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}
void HammerBroBGColl() {
    _debug("HammerBroBGColl", __FILE__, __LINE__);
    // check to see if hammer bro is standing on anything
    JSR(ChkUnderEnemy);
    BEQ(NoUnderHammerBro);
    // check for blank metatile $23 and branch if not found
    cmp(IMM(0x23));
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}
void KillEnemyAboveBlock() {
    _debug("KillEnemyAboveBlock", __FILE__, __LINE__);
    // do this sub to kill enemy
    JSR(ShellOrBlockDefeat);
    // alter vertical speed of enemy and leave
    lda(IMM(0xfc));
    sta(ABSX(Enemy_Y_Speed));
    return;
}
void UnderHammerBro() {
    _debug("UnderHammerBro", __FILE__, __LINE__);
    // check timer used by hammer bro
    lda(ABSX(EnemyFrameTimer));
    // branch if not expired
    BNE(NoUnderHammerBro);
    lda(ABSX(Enemy_State));
    // save d7 and d3 from enemy state, nullify other bits
    anda(IMM(0b10001000));
    // and store
    sta(ABSX(Enemy_State));
    // modify vertical coordinate, speed and something else
    JSR(EnemyLanding);
    // then check for horizontal blockage and leave
    JMP(DoEnemySideCheck);
    JMP(NoUnderHammerBro);
}
void NoUnderHammerBro() {
    _debug("NoUnderHammerBro", __FILE__, __LINE__);
    // if hammer bro is not standing on anything, set d0
    lda(ABSX(Enemy_State));
    // in the enemy state to indicate jumping or falling, then leave
    ora(IMM(0x1));
    sta(ABSX(Enemy_State));
    return;
}
void ChkUnderEnemy() {
    _debug("ChkUnderEnemy", __FILE__, __LINE__);
    // set flag in A for save vertical coordinate
    lda(IMM(0x0));
    // set Y to check the bottom middle (8,18) of enemy object
    ldy(IMM(0x15));
    // hop to it!
    JMP(BlockBufferChk_Enemy);
    JMP(ChkForNonSolids);
}
void ChkForNonSolids() {
    _debug("ChkForNonSolids", __FILE__, __LINE__);
    // blank metatile used for vines?
    cmp(IMM(0x26));
    BEQ(NSFnd);
    // regular coin?
    cmp(IMM(0xc2));
    BEQ(NSFnd);
    // underwater coin?
    cmp(IMM(0xc3));
    BEQ(NSFnd);
    // hidden coin block?
    cmp(IMM(0x5f));
    BEQ(NSFnd);
    // hidden 1-up block?
    cmp(IMM(0x60));
    JMP(NSFnd);
}
void NSFnd() {
    _debug("NSFnd", __FILE__, __LINE__);
    return;
}
void FireballBGCollision() {
    _debug("FireballBGCollision", __FILE__, __LINE__);
    // check fireball's vertical coordinate
    lda(ABSX(Fireball_Y_Position));
    cmp(IMM(0x18));
    // if within the status bar area of the screen, branch ahead
    BCC(ClearBounceFlag);
    // do fireball to background collision detection on bottom of it
    JSR(BlockBufferChk_FBall);
    // if nothing underneath fireball, branch
    BEQ(ClearBounceFlag);
    // check for non-solid metatiles
    JSR(ChkForNonSolids);
    // branch if any found
    BEQ(ClearBounceFlag);
    // if fireball's vertical speed set to move upwards,
    lda(ABSX(Fireball_Y_Speed));
    // branch to set exploding bit in fireball's state
    BMI(InitFireballExplode);
    // if bouncing flag already set,
    lda(ABSX(FireballBouncingFlag));
    // branch to set exploding bit in fireball's state
    BNE(InitFireballExplode);
    lda(IMM(0xfd));
    // otherwise set vertical speed to move upwards (give it bounce)
    sta(ABSX(Fireball_Y_Speed));
    lda(IMM(0x1));
    // set bouncing flag
    sta(ABSX(FireballBouncingFlag));
    lda(ABSX(Fireball_Y_Position));
    // modify vertical coordinate to land it properly
    anda(IMM(0xf8));
    // store as new vertical coordinate
    sta(ABSX(Fireball_Y_Position));
    // leave
    return;
}
void ClearBounceFlag() {
    _debug("ClearBounceFlag", __FILE__, __LINE__);
    lda(IMM(0x0));
    // clear bouncing flag by default
    sta(ABSX(FireballBouncingFlag));
    // leave
    return;
}
void InitFireballExplode() {
    _debug("InitFireballExplode", __FILE__, __LINE__);
    lda(IMM(0x80));
    // set exploding flag in fireball's state
    sta(ABSX(Fireball_State));
    lda(IMM(Sfx_Bump));
    // load bump sound
    sta(ABS(Square1SoundQueue));
    // leave
    return;
}
void GetFireballBoundBox() {
    _debug("GetFireballBoundBox", __FILE__, __LINE__);
    // add seven bytes to offset
    txa();
    // to use in routines as offset for fireball
    clc();
    adc(IMM(0x7));
    tax();
    // set offset for relative coordinates
    ldy(IMM(0x2));
    // unconditional branch
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}
void GetMiscBoundBox() {
    _debug("GetMiscBoundBox", __FILE__, __LINE__);
    // add nine bytes to offset
    txa();
    // to use in routines as offset for misc object
    clc();
    adc(IMM(0x9));
    tax();
    // set offset for relative coordinates
    ldy(IMM(0x6));
    JMP(FBallB);
}
void FBallB() {
    _debug("FBallB", __FILE__, __LINE__);
    // get bounding box coordinates
    JSR(BoundingBoxCore);
    // jump to handle any offscreen coordinates
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}
void GetEnemyBoundBox() {
    _debug("GetEnemyBoundBox", __FILE__, __LINE__);
    // store bitmask here for now
    ldy(IMM(0x48));
    sty(ABS(0x0));
    // store another bitmask here for now and jump
    ldy(IMM(0x44));
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}
void SmallPlatformBoundBox() {
    _debug("SmallPlatformBoundBox", __FILE__, __LINE__);
    // store bitmask here for now
    ldy(IMM(0x8));
    sty(ABS(0x0));
    // store another bitmask here for now
    ldy(IMM(0x4));
    JMP(GetMaskedOffScrBits);
}
void GetMaskedOffScrBits() {
    _debug("GetMaskedOffScrBits", __FILE__, __LINE__);
    // get enemy object position relative
    lda(ABSX(Enemy_X_Position));
    // to the left side of the screen
    sec();
    sbc(ABS(ScreenLeft_X_Pos));
    // store here
    sta(ABS(0x1));
    // subtract borrow from current page location
    lda(ABSX(Enemy_PageLoc));
    // of left side
    sbc(ABS(ScreenLeft_PageLoc));
    // if enemy object is beyond left edge, branch
    BMI(CMBits);
    ora(ABS(0x1));
    // if precisely at the left edge, branch
    BEQ(CMBits);
    // if to the right of left edge, use value in $00 for A
    ldy(ABS(0x0));
    JMP(CMBits);
}
void CMBits() {
    _debug("CMBits", __FILE__, __LINE__);
    // otherwise use contents of Y
    tya();
    // preserve bitwise whatever's in here
    anda(ABS(Enemy_OffscreenBits));
    // save masked offscreen bits here
    sta(ABSX(EnemyOffscrBitsMasked));
    // if anything set here, branch
    BNE(MoveBoundBoxOffscreen);
    // otherwise, do something else
    JMP(SetupEOffsetFBBox);
    JMP(LargePlatformBoundBox);
}
void LargePlatformBoundBox() {
    _debug("LargePlatformBoundBox", __FILE__, __LINE__);
    // increment X to get the proper offset
    inx();
    // then jump directly to the sub for horizontal offscreen bits
    JSR(GetXOffscreenBits);
    // decrement to return to original offset
    dex();
    // if completely offscreen, branch to put entire bounding
    cmp(IMM(0xfe));
    // box offscreen, otherwise start getting coordinates
    BCS(MoveBoundBoxOffscreen);
    JMP(SetupEOffsetFBBox);
}
void SetupEOffsetFBBox() {
    _debug("SetupEOffsetFBBox", __FILE__, __LINE__);
    // add 1 to offset to properly address
    txa();
    // the enemy object memory locations
    clc();
    adc(IMM(0x1));
    tax();
    // load 1 as offset here, same reason
    ldy(IMM(0x1));
    // do a sub to get the coordinates of the bounding box
    JSR(BoundingBoxCore);
    // jump to handle offscreen coordinates of bounding box
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}
void MoveBoundBoxOffscreen() {
    _debug("MoveBoundBoxOffscreen", __FILE__, __LINE__);
    // multiply offset by 4
    txa();
    asl();
    asl();
    // use as offset here
    tay();
    lda(IMM(0xff));
    // load value into four locations here and leave
    sta(ABSY(EnemyBoundingBoxCoord));
    sta(ABSY(((EnemyBoundingBoxCoord) + (1))));
    sta(ABSY(((EnemyBoundingBoxCoord) + (2))));
    sta(ABSY(((EnemyBoundingBoxCoord) + (3))));
    return;
}
void BoundingBoxCore() {
    _debug("BoundingBoxCore", __FILE__, __LINE__);
    // save offset here
    stx(ABS(0x0));
    // store object coordinates relative to screen
    lda(ABSY(SprObject_Rel_YPos));
    // vertically and horizontally, respectively
    sta(ABS(0x2));
    lda(ABSY(SprObject_Rel_XPos));
    sta(ABS(0x1));
    // multiply offset by four and save to stack
    txa();
    asl();
    asl();
    pha();
    // use as offset for Y, X is left alone
    tay();
    // load value here to be used as offset for X
    lda(ABSX(SprObj_BoundBoxCtrl));
    // multiply that by four and use as X
    asl();
    asl();
    tax();
    // add the first number in the bounding box data to the
    lda(ABS(0x1));
    // relative horizontal coordinate using enemy object offset
    clc();
    // and store somewhere using same offset * 4
    adc(ABSX(0x8000+offsetof(G, BoundBoxCtrlData)));
    // store here
    sta(ABSY(BoundingBox_UL_Corner));
    lda(ABS(0x1));
    clc();
    // add the third number in the bounding box data to the
    adc(ABSX(((0x8000+offsetof(G, BoundBoxCtrlData)) + (2))));
    // relative horizontal coordinate and store
    sta(ABSY(BoundingBox_LR_Corner));
    // increment both offsets
    inx();
    iny();
    // add the second number to the relative vertical coordinate
    lda(ABS(0x2));
    // using incremented offset and store using the other
    clc();
    // incremented offset
    adc(ABSX(0x8000+offsetof(G, BoundBoxCtrlData)));
    sta(ABSY(BoundingBox_UL_Corner));
    lda(ABS(0x2));
    clc();
    // add the fourth number to the relative vertical coordinate
    adc(ABSX(((0x8000+offsetof(G, BoundBoxCtrlData)) + (2))));
    // and store
    sta(ABSY(BoundingBox_LR_Corner));
    // get original offset loaded into $00 * y from stack
    pla();
    // use as Y
    tay();
    // get original offset and use as X again
    ldx(ABS(0x0));
    return;
}
void CheckRightScreenBBox() {
    _debug("CheckRightScreenBBox", __FILE__, __LINE__);
    // add 128 pixels to left side of screen
    lda(ABS(ScreenLeft_X_Pos));
    // and store as horizontal coordinate of middle
    clc();
    adc(IMM(0x80));
    sta(ABS(0x2));
    // add carry to page location of left side of screen
    lda(ABS(ScreenLeft_PageLoc));
    // and store as page location of middle
    adc(IMM(0x0));
    sta(ABS(0x1));
    // get horizontal coordinate
    lda(ABSX(SprObject_X_Position));
    // compare against middle horizontal coordinate
    cmp(ABS(0x2));
    // get page location
    lda(ABSX(SprObject_PageLoc));
    // subtract from middle page location
    sbc(ABS(0x1));
    // if object is on the left side of the screen, branch
    BCC(CheckLeftScreenBBox);
    // check right-side edge of bounding box for offscreen
    lda(ABSY(BoundingBox_DR_XPos));
    // coordinates, branch if still on the screen
    BMI(NoOfs);
    // load offscreen value here to use on one or both horizontal sides
    lda(IMM(0xff));
    // check left-side edge of bounding box for offscreen
    ldx(ABSY(BoundingBox_UL_XPos));
    // coordinates, and branch if still on the screen
    BMI(SORte);
    // store offscreen value for left side
    sta(ABSY(BoundingBox_UL_XPos));
    JMP(SORte);
}
void SORte() {
    _debug("SORte", __FILE__, __LINE__);
    // store offscreen value for right side
    sta(ABSY(BoundingBox_DR_XPos));
    JMP(NoOfs);
}
void NoOfs() {
    _debug("NoOfs", __FILE__, __LINE__);
    // get object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void CheckLeftScreenBBox() {
    _debug("CheckLeftScreenBBox", __FILE__, __LINE__);
    // check left-side edge of bounding box for offscreen
    lda(ABSY(BoundingBox_UL_XPos));
    // coordinates, and branch if still on the screen
    BPL(NoOfs2);
    // check to see if left-side edge is in the middle of the
    cmp(IMM(0xa0));
    // screen or really offscreen, and branch if still on
    BCC(NoOfs2);
    lda(IMM(0x0));
    // check right-side edge of bounding box for offscreen
    ldx(ABSY(BoundingBox_DR_XPos));
    // coordinates, branch if still onscreen
    BPL(SOLft);
    // store offscreen value for right side
    sta(ABSY(BoundingBox_DR_XPos));
    JMP(SOLft);
}
void SOLft() {
    _debug("SOLft", __FILE__, __LINE__);
    // store offscreen value for left side
    sta(ABSY(BoundingBox_UL_XPos));
    JMP(NoOfs2);
}
void NoOfs2() {
    _debug("NoOfs2", __FILE__, __LINE__);
    // get object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
// $06 - second object's offset
// $07 - counter
void PlayerCollisionCore() {
    _debug("PlayerCollisionCore", __FILE__, __LINE__);
    // initialize X to use player's bounding box for comparison
    ldx(IMM(0x0));
    JMP(SprObjectCollisionCore);
}
void SprObjectCollisionCore() {
    _debug("SprObjectCollisionCore", __FILE__, __LINE__);
    // save contents of Y here
    sty(ABS(0x6));
    lda(IMM(0x1));
    // save value 1 here as counter, compare horizontal coordinates first
    sta(ABS(0x7));
    JMP(CollisionCoreLoop);
}
void CollisionCoreLoop() {
    _debug("CollisionCoreLoop", __FILE__, __LINE__);
    // compare left/top coordinates
    lda(ABSY(BoundingBox_UL_Corner));
    // of first and second objects' bounding boxes
    cmp(ABSX(BoundingBox_UL_Corner));
    // if first left/top => second, branch
    BCS(FirstBoxGreater);
    // otherwise compare to right/bottom of second
    cmp(ABSX(BoundingBox_LR_Corner));
    // if first left/top < second right/bottom, branch elsewhere
    BCC(SecondBoxVerticalChk);
    // if somehow equal, collision, thus branch
    BEQ(CollisionFound);
    // if somehow greater, check to see if bottom of
    lda(ABSY(BoundingBox_LR_Corner));
    // first object's bounding box is greater than its top
    cmp(ABSY(BoundingBox_UL_Corner));
    // if somehow less, vertical wrap collision, thus branch
    BCC(CollisionFound);
    // otherwise compare bottom of first bounding box to the top
    cmp(ABSX(BoundingBox_UL_Corner));
    // of second box, and if equal or greater, collision, thus branch
    BCS(CollisionFound);
    // otherwise return with carry clear and Y = $0006
    ldy(ABS(0x6));
    // note horizontal wrapping never occurs
    return;
}
void SecondBoxVerticalChk() {
    _debug("SecondBoxVerticalChk", __FILE__, __LINE__);
    // check to see if the vertical bottom of the box
    lda(ABSX(BoundingBox_LR_Corner));
    // is greater than the vertical top
    cmp(ABSX(BoundingBox_UL_Corner));
    // if somehow less, vertical wrap collision, thus branch
    BCC(CollisionFound);
    // otherwise compare horizontal right or vertical bottom
    lda(ABSY(BoundingBox_LR_Corner));
    // of first box with horizontal left or vertical top of second box
    cmp(ABSX(BoundingBox_UL_Corner));
    // if equal or greater, collision, thus branch
    BCS(CollisionFound);
    // otherwise return with carry clear and Y = $0006
    ldy(ABS(0x6));
    return;
}
void FirstBoxGreater() {
    _debug("FirstBoxGreater", __FILE__, __LINE__);
    // compare first and second box horizontal left/vertical top again
    cmp(ABSX(BoundingBox_UL_Corner));
    // if first coordinate = second, collision, thus branch
    BEQ(CollisionFound);
    // if not, compare with second object right or bottom edge
    cmp(ABSX(BoundingBox_LR_Corner));
    // if left/top of first less than or equal to right/bottom of second
    BCC(CollisionFound);
    // then collision, thus branch
    BEQ(CollisionFound);
    // otherwise check to see if top of first box is greater than bottom
    cmp(ABSY(BoundingBox_LR_Corner));
    // if less than or equal, no collision, branch to end
    BCC(NoCollisionFound);
    BEQ(NoCollisionFound);
    // otherwise compare bottom of first to top of second
    lda(ABSY(BoundingBox_LR_Corner));
    // if bottom of first is greater than top of second, vertical wrap
    cmp(ABSX(BoundingBox_UL_Corner));
    // collision, and branch, otherwise, proceed onwards here
    BCS(CollisionFound);
    JMP(NoCollisionFound);
}
void NoCollisionFound() {
    _debug("NoCollisionFound", __FILE__, __LINE__);
    // clear carry, then load value set earlier, then leave
    clc();
    // like previous ones, if horizontal coordinates do not collide, we do
    ldy(ABS(0x6));
    // not bother checking vertical ones, because what's the point?
    return;
}
void CollisionFound() {
    _debug("CollisionFound", __FILE__, __LINE__);
    // increment offsets on both objects to check
    inx();
    // the vertical coordinates
    iny();
    // decrement counter to reflect this
    dec(ABS(0x7));
    // if counter not expired, branch to loop
    BPL(CollisionCoreLoop);
    // otherwise we already did both sets, therefore collision, so set carry
    sec();
    // load original value set here earlier, then leave
    ldy(ABS(0x6));
    return;
}
// $02 - modified y coordinate
// $03 - stores metatile involved in block buffer collisions
// $04 - comes in with offset to block buffer adder data, goes out with low nybble x/y coordinate
// $05 - modified x coordinate
// $06-$07 - block buffer address
void BlockBufferChk_Enemy() {
    _debug("BlockBufferChk_Enemy", __FILE__, __LINE__);
    // save contents of A to stack
    pha();
    txa();
    // add 1 to X to run sub with enemy offset in mind
    clc();
    adc(IMM(0x1));
    tax();
    // pull A from stack and jump elsewhere
    pla();
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}
void ResidualMiscObjectCode() {
    _debug("ResidualMiscObjectCode", __FILE__, __LINE__);
    txa();
    // supposedly used once to set offset for
    clc();
    // miscellaneous objects
    adc(IMM(0xd));
    tax();
    // supposedly used once to set offset for block buffer data
    ldy(IMM(0x1b));
    // probably used in early stages to do misc to bg collision detection
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}
void BlockBufferChk_FBall() {
    _debug("BlockBufferChk_FBall", __FILE__, __LINE__);
    // set offset for block buffer adder data
    ldy(IMM(0x1a));
    txa();
    clc();
    // add seven bytes to use
    adc(IMM(0x7));
    tax();
    JMP(ResJmpM);
}
void ResJmpM() {
    _debug("ResJmpM", __FILE__, __LINE__);
    // set A to return vertical coordinate
    lda(IMM(0x0));
    JMP(BBChk_E);
}
void BBChk_E() {
    _debug("BBChk_E", __FILE__, __LINE__);
    // do collision detection subroutine for sprite object
    JSR(BlockBufferCollision);
    // get object offset
    ldx(ABS(ObjectOffset));
    // check to see if object bumped into anything
    cmp(IMM(0x0));
    return;
}
void BlockBufferColli_Feet() {
    _debug("BlockBufferColli_Feet", __FILE__, __LINE__);
    // if branched here, increment to next set of adders
    iny();
    JMP(BlockBufferColli_Head);
}
void BlockBufferColli_Head() {
    _debug("BlockBufferColli_Head", __FILE__, __LINE__);
    // set flag to return vertical coordinate
    lda(IMM(0x0));
    JMP(BlockBufferColli_Side_Skip);
    JMP(BlockBufferColli_Side);
}
void BlockBufferColli_Side() {
    _debug("BlockBufferColli_Side", __FILE__, __LINE__);
    // set flag to return horizontal coordinate
    lda(IMM(0x1));
    JMP(BlockBufferColli_Side_Skip);
}
void BlockBufferColli_Side_Skip() {
    _debug("BlockBufferColli_Side_Skip", __FILE__, __LINE__);
    // set offset for player object
    ldx(IMM(0x0));
    JMP(BlockBufferCollision);
}
void BlockBufferCollision() {
    _debug("BlockBufferCollision", __FILE__, __LINE__);
    // save contents of A to stack
    pha();
    // save contents of Y here
    sty(ABS(0x4));
    // add horizontal coordinate
    lda(ABSY(0x8000+offsetof(G, BlockBuffer_X_Adder)));
    // of object to value obtained using Y as offset
    clc();
    adc(ABSX(SprObject_X_Position));
    // store here
    sta(ABS(0x5));
    lda(ABSX(SprObject_PageLoc));
    // add carry to page location
    adc(IMM(0x0));
    // get LSB, mask out all other bits
    anda(IMM(0x1));
    // move to carry
    lsr();
    // get stored value
    ora(ABS(0x5));
    // rotate carry to MSB of A
    ror();
    // and effectively move high nybble to
    lsr();
    // lower, LSB which became MSB will be
    lsr();
    // d4 at this point
    lsr();
    // get address of block buffer into $06, $07
    JSR(GetBlockBufferAddr);
    // get old contents of Y
    ldy(ABS(0x4));
    // get vertical coordinate of object
    lda(ABSX(SprObject_Y_Position));
    clc();
    // add it to value obtained using Y as offset
    adc(ABSY(0x8000+offsetof(G, BlockBuffer_Y_Adder)));
    // mask out low nybble
    anda(IMM(0b11110000));
    sec();
    // subtract 32 pixels for the status bar
    sbc(IMM(0x20));
    // store result here
    sta(ABS(0x2));
    // use as offset for block buffer
    tay();
    // check current content of block buffer
    lda(INDY((0x6)));
    // and store here
    sta(ABS(0x3));
    // get old contents of Y again
    ldy(ABS(0x4));
    // pull A from stack
    pla();
    // if A = 1, branch
    BNE(RetXC);
    // if A = 0, load vertical coordinate
    lda(ABSX(SprObject_Y_Position));
    // and jump
    JMP(RetYC);
    JMP(RetXC);
}
void RetXC() {
    _debug("RetXC", __FILE__, __LINE__);
    // otherwise load horizontal coordinate
    lda(ABSX(SprObject_X_Position));
    JMP(RetYC);
}
void RetYC() {
    _debug("RetYC", __FILE__, __LINE__);
    // and mask out high nybble
    anda(IMM(0b1111));
    // store masked out result here
    sta(ABS(0x4));
    // get saved content of block buffer
    lda(ABS(0x3));
    // and leave
    return;
}
void DrawVine() {
    _debug("DrawVine", __FILE__, __LINE__);
    // save offset here
    sty(ABS(0x0));
    // get relative vertical coordinate
    lda(ABS(Enemy_Rel_YPos));
    clc();
    // add value using offset in Y to get value
    adc(ABSY(0x8000+offsetof(G, VineYPosAdder)));
    // get offset to vine
    ldx(ABSY(VineObjOffset));
    // get sprite data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // store sprite data offset here
    sty(ABS(0x2));
    // stack six sprites on top of each other vertically
    JSR(SixSpriteStacker);
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    // store in first, third and fifth sprites
    sta(ABSY(Sprite_X_Position));
    sta(ABSY(((Sprite_X_Position) + (8))));
    sta(ABSY(((Sprite_X_Position) + (16))));
    clc();
    // add six pixels to second, fourth and sixth sprites
    adc(IMM(0x6));
    // to give characteristic staggered vine shape to
    sta(ABSY(((Sprite_X_Position) + (4))));
    // our vertical stack of sprites
    sta(ABSY(((Sprite_X_Position) + (12))));
    sta(ABSY(((Sprite_X_Position) + (20))));
    // set bg priority and palette attribute bits
    lda(IMM(0b100001));
    // set in first, third and fifth sprites
    sta(ABSY(Sprite_Attributes));
    sta(ABSY(((Sprite_Attributes) + (8))));
    sta(ABSY(((Sprite_Attributes) + (16))));
    // additionally, set horizontal flip bit
    ora(IMM(0b1000000));
    // for second, fourth and sixth sprites
    sta(ABSY(((Sprite_Attributes) + (4))));
    sta(ABSY(((Sprite_Attributes) + (12))));
    sta(ABSY(((Sprite_Attributes) + (20))));
    // set tiles for six sprites
    ldx(IMM(0x5));
    JMP(VineTL);
}
void VineTL() {
    _debug("VineTL", __FILE__, __LINE__);
    // set tile number for sprite
    lda(IMM(0xe1));
    sta(ABSY(Sprite_Tilenumber));
    // move offset to next sprite data
    iny();
    iny();
    iny();
    iny();
    // move onto next sprite
    dex();
    // loop until all sprites are done
    BPL(VineTL);
    // get original offset
    ldy(ABS(0x2));
    // get offset to vine adding data
    lda(ABS(0x0));
    // if offset not zero, skip this part
    BNE(SkpVTop);
    lda(IMM(0xe0));
    // set other tile number for top of vine
    sta(ABSY(Sprite_Tilenumber));
    JMP(SkpVTop);
}
void SkpVTop() {
    _debug("SkpVTop", __FILE__, __LINE__);
    // start with the first sprite again
    ldx(IMM(0x0));
    JMP(ChkFTop);
}
void ChkFTop() {
    _debug("ChkFTop", __FILE__, __LINE__);
    // get original starting vertical coordinate
    lda(ABS(VineStart_Y_Position));
    sec();
    // subtract top-most sprite's Y coordinate
    sbc(ABSY(Sprite_Y_Position));
    // if two coordinates are less than 100/$64 pixels
    cmp(IMM(0x64));
    // apart, skip this to leave sprite alone
    BCC(NextVSp);
    lda(IMM(0xf8));
    // otherwise move sprite offscreen
    sta(ABSY(Sprite_Y_Position));
    JMP(NextVSp);
}
void NextVSp() {
    _debug("NextVSp", __FILE__, __LINE__);
    // move offset to next OAM data
    iny();
    iny();
    iny();
    iny();
    // move onto next sprite
    inx();
    // do this until all sprites are checked
    cpx(IMM(0x6));
    BNE(ChkFTop);
    // return offset set earlier
    ldy(ABS(0x0));
    return;
}
void SixSpriteStacker() {
    _debug("SixSpriteStacker", __FILE__, __LINE__);
    // do six sprites
    ldx(IMM(0x6));
    JMP(StkLp);
}
void StkLp() {
    _debug("StkLp", __FILE__, __LINE__);
    // store X or Y coordinate into OAM data
    sta(ABSY(Sprite_Data));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    iny();
    // move offset four bytes forward
    iny();
    iny();
    iny();
    // do another sprite
    dex();
    // do this until all sprites are done
    BNE(StkLp);
    // get saved OAM data offset and leave
    ldy(ABS(0x2));
    return;
}
void DrawHammer() {
    _debug("DrawHammer", __FILE__, __LINE__);
    // get misc object OAM data offset
    ldy(ABSX(Misc_SprDataOffset));
    lda(ABS(TimerControl));
    // if master timer control set, skip this part
    BNE(ForceHPose);
    // otherwise get hammer's state
    lda(ABSX(Misc_State));
    // mask out d7
    anda(IMM(0b1111111));
    // check to see if set to 1 yet
    cmp(IMM(0x1));
    // if so, branch
    BEQ(GetHPose);
    JMP(ForceHPose);
}
void ForceHPose() {
    _debug("ForceHPose", __FILE__, __LINE__);
    // reset offset here
    ldx(IMM(0x0));
    // do unconditional branch to rendering part
    BEQ(RenderH);
    JMP(GetHPose);
}
void GetHPose() {
    _debug("GetHPose", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // move d3-d2 to d1-d0
    lsr();
    lsr();
    // mask out all but d1-d0 (changes every four frames)
    anda(IMM(0b11));
    // use as timing offset
    tax();
    JMP(RenderH);
}
void RenderH() {
    _debug("RenderH", __FILE__, __LINE__);
    // get relative vertical coordinate
    lda(ABS(Misc_Rel_YPos));
    clc();
    // add first sprite vertical adder based on offset
    adc(ABSX(0x8000+offsetof(G, FirstSprYPos)));
    // store as sprite Y coordinate for first sprite
    sta(ABSY(Sprite_Y_Position));
    clc();
    // add second sprite vertical adder based on offset
    adc(ABSX(0x8000+offsetof(G, SecondSprYPos)));
    // store as sprite Y coordinate for second sprite
    sta(ABSY(((Sprite_Y_Position) + (4))));
    // get relative horizontal coordinate
    lda(ABS(Misc_Rel_XPos));
    clc();
    // add first sprite horizontal adder based on offset
    adc(ABSX(0x8000+offsetof(G, FirstSprXPos)));
    // store as sprite X coordinate for first sprite
    sta(ABSY(Sprite_X_Position));
    clc();
    // add second sprite horizontal adder based on offset
    adc(ABSX(0x8000+offsetof(G, SecondSprXPos)));
    // store as sprite X coordinate for second sprite
    sta(ABSY(((Sprite_X_Position) + (4))));
    lda(ABSX(0x8000+offsetof(G, FirstSprTilenum)));
    // get and store tile number of first sprite
    sta(ABSY(Sprite_Tilenumber));
    lda(ABSX(0x8000+offsetof(G, SecondSprTilenum)));
    // get and store tile number of second sprite
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    lda(ABSX(0x8000+offsetof(G, HammerSprAttrib)));
    // get and store attribute bytes for both
    sta(ABSY(Sprite_Attributes));
    // note in this case they use the same data
    sta(ABSY(((Sprite_Attributes) + (4))));
    // get misc object offset
    ldx(ABS(ObjectOffset));
    lda(ABS(Misc_OffscreenBits));
    // check offscreen bits
    anda(IMM(0b11111100));
    // if all bits clear, leave object alone
    BEQ(NoHOffscr);
    lda(IMM(0x0));
    // otherwise nullify misc object state
    sta(ABSX(Misc_State));
    lda(IMM(0xf8));
    // do sub to move hammer sprites offscreen
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}
void NoHOffscr() {
    _debug("NoHOffscr", __FILE__, __LINE__);
    // leave
    return;
}
void FlagpoleGfxHandler() {
    _debug("FlagpoleGfxHandler", __FILE__, __LINE__);
    // get sprite data offset for flagpole flag
    ldy(ABSX(Enemy_SprDataOffset));
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    // store as X coordinate for first sprite
    sta(ABSY(Sprite_X_Position));
    clc();
    // add eight pixels and store
    adc(IMM(0x8));
    // as X coordinate for second and third sprites
    sta(ABSY(((Sprite_X_Position) + (4))));
    sta(ABSY(((Sprite_X_Position) + (8))));
    clc();
    // add twelve more pixels and
    adc(IMM(0xc));
    // store here to be used later by floatey number
    sta(ABS(0x5));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // and do sub to dump into first and second sprites
    JSR(DumpTwoSpr);
    // add eight pixels
    adc(IMM(0x8));
    // and store into third sprite
    sta(ABSY(((Sprite_Y_Position) + (8))));
    // get vertical coordinate for floatey number
    lda(ABS(FlagpoleFNum_Y_Pos));
    // store it here
    sta(ABS(0x2));
    lda(IMM(0x1));
    // set value for flip which will not be used, and
    sta(ABS(0x3));
    // attribute byte for floatey number
    sta(ABS(0x4));
    // set attribute bytes for all three sprites
    sta(ABSY(Sprite_Attributes));
    sta(ABSY(((Sprite_Attributes) + (4))));
    sta(ABSY(((Sprite_Attributes) + (8))));
    lda(IMM(0x7e));
    // put triangle shaped tile
    sta(ABSY(Sprite_Tilenumber));
    // into first and third sprites
    sta(ABSY(((Sprite_Tilenumber) + (8))));
    lda(IMM(0x7f));
    // put skull tile into second sprite
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    // get vertical coordinate at time of collision
    lda(ABS(FlagpoleCollisionYPos));
    // if zero, branch ahead
    BEQ(ChkFlagOffscreen);
    tya();
    // add 12 bytes to sprite data offset
    clc();
    adc(IMM(0xc));
    // put back in Y
    tay();
    // get offset used to award points for touching flagpole
    lda(ABS(FlagpoleScore));
    // multiply by 2 to get proper offset here
    asl();
    tax();
    // get appropriate tile data
    lda(ABSX(0x8000+offsetof(G, FlagpoleScoreNumTiles)));
    sta(ABS(0x0));
    lda(ABSX(((0x8000+offsetof(G, FlagpoleScoreNumTiles)) + (1))));
    // use it to render floatey number
    JSR(DrawOneSpriteRow);
    JMP(ChkFlagOffscreen);
}
void ChkFlagOffscreen() {
    _debug("ChkFlagOffscreen", __FILE__, __LINE__);
    // get object offset for flag
    ldx(ABS(ObjectOffset));
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // get offscreen bits
    lda(ABS(Enemy_OffscreenBits));
    // mask out all but d3-d1
    anda(IMM(0b1110));
    // if none of these bits set, branch to leave
    BEQ(ExitDumpSpr);
    JMP(MoveSixSpritesOffscreen);
}
void MoveSixSpritesOffscreen() {
    _debug("MoveSixSpritesOffscreen", __FILE__, __LINE__);
    // set offscreen coordinate if jumping here
    lda(IMM(0xf8));
    JMP(DumpSixSpr);
}
void DumpSixSpr() {
    _debug("DumpSixSpr", __FILE__, __LINE__);
    // dump A contents
    sta(ABSY(((Sprite_Data) + (20))));
    // into third row sprites
    sta(ABSY(((Sprite_Data) + (16))));
    JMP(DumpFourSpr);
}
void DumpFourSpr() {
    _debug("DumpFourSpr", __FILE__, __LINE__);
    // into second row sprites
    sta(ABSY(((Sprite_Data) + (12))));
    JMP(DumpThreeSpr);
}
void DumpThreeSpr() {
    _debug("DumpThreeSpr", __FILE__, __LINE__);
    sta(ABSY(((Sprite_Data) + (8))));
    JMP(DumpTwoSpr);
}
void DumpTwoSpr() {
    _debug("DumpTwoSpr", __FILE__, __LINE__);
    // and into first row sprites
    sta(ABSY(((Sprite_Data) + (4))));
    sta(ABSY(Sprite_Data));
    JMP(ExitDumpSpr);
}
void ExitDumpSpr() {
    _debug("ExitDumpSpr", __FILE__, __LINE__);
    return;
}
void DrawLargePlatform() {
    _debug("DrawLargePlatform", __FILE__, __LINE__);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // store here
    sty(ABS(0x2));
    // add 3 to it for offset
    iny();
    // to X coordinate
    iny();
    iny();
    // get horizontal relative coordinate
    lda(ABS(Enemy_Rel_XPos));
    // store X coordinates using A as base, stack horizontally
    JSR(SixSpriteStacker);
    ldx(ABS(ObjectOffset));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    // dump into first four sprites as Y coordinate
    JSR(DumpFourSpr);
    ldy(ABS(AreaType));
    // check for castle-type level
    cpy(IMM(0x3));
    BEQ(ShrinkPlatform);
    // check for secondary hard mode flag set
    ldy(ABS(SecondaryHardMode));
    // branch if not set elsewhere
    BEQ(SetLast2Platform);
    JMP(ShrinkPlatform);
}
void ShrinkPlatform() {
    _debug("ShrinkPlatform", __FILE__, __LINE__);
    // load offscreen coordinate if flag set or castle-type level
    lda(IMM(0xf8));
    JMP(SetLast2Platform);
}
void SetLast2Platform() {
    _debug("SetLast2Platform", __FILE__, __LINE__);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // store vertical coordinate or offscreen
    sta(ABSY(((Sprite_Y_Position) + (16))));
    // coordinate into last two sprites as Y coordinate
    sta(ABSY(((Sprite_Y_Position) + (20))));
    // load default tile for platform (girder)
    lda(IMM(0x5b));
    ldx(ABS(CloudTypeOverride));
    // if cloud level override flag not set, use
    BEQ(SetPlatformTilenum);
    // otherwise load other tile for platform (puff)
    lda(IMM(0x75));
    JMP(SetPlatformTilenum);
}
void SetPlatformTilenum() {
    _debug("SetPlatformTilenum", __FILE__, __LINE__);
    // get enemy object buffer offset
    ldx(ABS(ObjectOffset));
    // increment Y for tile offset
    iny();
    // dump tile number into all six sprites
    JSR(DumpSixSpr);
    // set palette controls
    lda(IMM(0x2));
    // increment Y for sprite attributes
    iny();
    // dump attributes into all six sprites
    JSR(DumpSixSpr);
    // increment X for enemy objects
    inx();
    // get offscreen bits again
    JSR(GetXOffscreenBits);
    dex();
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // rotate d7 into carry, save remaining
    asl();
    // bits to the stack
    pha();
    BCC(SChk2);
    // if d7 was set, move first sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(Sprite_Y_Position));
    JMP(SChk2);
}
void SChk2() {
    _debug("SChk2", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // rotate d6 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk3);
    // if d6 was set, move second sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (4))));
    JMP(SChk3);
}
void SChk3() {
    _debug("SChk3", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // rotate d5 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk4);
    // if d5 was set, move third sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (8))));
    JMP(SChk4);
}
void SChk4() {
    _debug("SChk4", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // rotate d4 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk5);
    // if d4 was set, move fourth sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (12))));
    JMP(SChk5);
}
void SChk5() {
    _debug("SChk5", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // rotate d3 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk6);
    // if d3 was set, move fifth sprite offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (16))));
    JMP(SChk6);
}
void SChk6() {
    _debug("SChk6", __FILE__, __LINE__);
    // get bits from stack
    pla();
    // rotate d2 into carry
    asl();
    // save to stack
    BCC(SLChk);
    lda(IMM(0xf8));
    // if d2 was set, move sixth sprite offscreen
    sta(ABSY(((Sprite_Y_Position) + (20))));
    JMP(SLChk);
}
void SLChk() {
    _debug("SLChk", __FILE__, __LINE__);
    // check d7 of offscreen bits
    lda(ABS(Enemy_OffscreenBits));
    // and if d7 is not set, skip sub
    asl();
    BCC(ExDLPl);
    // otherwise branch to move all sprites offscreen
    JSR(MoveSixSpritesOffscreen);
    JMP(ExDLPl);
}
void ExDLPl() {
    _debug("ExDLPl", __FILE__, __LINE__);
    return;
}
void DrawFloateyNumber_Coin() {
    _debug("DrawFloateyNumber_Coin", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // divide by 2
    lsr();
    // branch if d0 not set to raise number every other frame
    BCS(NotRsNum);
    // otherwise, decrement vertical coordinate
    dec(ABSX(Misc_Y_Position));
    JMP(NotRsNum);
}
void NotRsNum() {
    _debug("NotRsNum", __FILE__, __LINE__);
    // get vertical coordinate
    lda(ABSX(Misc_Y_Position));
    // dump into both sprites
    JSR(DumpTwoSpr);
    // get relative horizontal coordinate
    lda(ABS(Misc_Rel_XPos));
    // store as X coordinate for first sprite
    sta(ABSY(Sprite_X_Position));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // store as X coordinate for second sprite
    sta(ABSY(((Sprite_X_Position) + (4))));
    lda(IMM(0x2));
    // store attribute byte in both sprites
    sta(ABSY(Sprite_Attributes));
    sta(ABSY(((Sprite_Attributes) + (4))));
    lda(IMM(0xf7));
    // put tile numbers into both sprites
    sta(ABSY(Sprite_Tilenumber));
    // that resemble "200"
    lda(IMM(0xfb));
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    // then jump to leave (why not an rts here instead?)
    JMP(ExJCGfx);
    JMP(JCoinGfxHandler);
}
void JCoinGfxHandler() {
    _debug("JCoinGfxHandler", __FILE__, __LINE__);
    // get coin/floatey number's OAM data offset
    ldy(ABSX(Misc_SprDataOffset));
    // get state of misc object
    lda(ABSX(Misc_State));
    // if 2 or greater,
    cmp(IMM(0x2));
    // branch to draw floatey number
    BCS(DrawFloateyNumber_Coin);
    // store vertical coordinate as
    lda(ABSX(Misc_Y_Position));
    // Y coordinate for first sprite
    sta(ABSY(Sprite_Y_Position));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // store as Y coordinate for second sprite
    sta(ABSY(((Sprite_Y_Position) + (4))));
    // get relative horizontal coordinate
    lda(ABS(Misc_Rel_XPos));
    sta(ABSY(Sprite_X_Position));
    // store as X coordinate for first and second sprites
    sta(ABSY(((Sprite_X_Position) + (4))));
    // get frame counter
    lda(ABS(FrameCounter));
    // divide by 2 to alter every other frame
    lsr();
    // mask out d2-d1
    anda(IMM(0b11));
    // use as graphical offset
    tax();
    // load tile number
    lda(ABSX(0x8000+offsetof(G, JumpingCoinTiles)));
    // increment OAM data offset to write tile numbers
    iny();
    // do sub to dump tile number into both sprites
    JSR(DumpTwoSpr);
    // decrement to get old offset
    dey();
    lda(IMM(0x2));
    // set attribute byte in first sprite
    sta(ABSY(Sprite_Attributes));
    lda(IMM(0x82));
    // set attribute byte with vertical flip in second sprite
    sta(ABSY(((Sprite_Attributes) + (4))));
    // get misc object offset
    ldx(ABS(ObjectOffset));
    JMP(ExJCGfx);
}
void ExJCGfx() {
    _debug("ExJCGfx", __FILE__, __LINE__);
    // leave
    return;
}
void DrawPowerUp() {
    _debug("DrawPowerUp", __FILE__, __LINE__);
    // get power-up's sprite data offset
    ldy(ABS(((Enemy_SprDataOffset) + (5))));
    // get relative vertical coordinate
    lda(ABS(Enemy_Rel_YPos));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // store result here
    sta(ABS(0x2));
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    // store here
    sta(ABS(0x5));
    // get power-up type
    ldx(ABS(PowerUpType));
    // get attribute data for power-up type
    lda(ABSX(0x8000+offsetof(G, PowerUpAttributes)));
    // add background priority bit if set
    ora(ABS(((Enemy_SprAttrib) + (5))));
    // store attributes here
    sta(ABS(0x4));
    txa();
    // save power-up type to the stack
    pha();
    asl();
    // multiply by four to get proper offset
    asl();
    // use as X
    tax();
    lda(IMM(0x1));
    // set counter here to draw two rows of sprite object
    sta(ABS(0x7));
    // init d1 of flip control
    sta(ABS(0x3));
    JMP(PUpDrawLoop);
}
void PUpDrawLoop() {
    _debug("PUpDrawLoop", __FILE__, __LINE__);
    // load left tile of power-up object
    lda(ABSX(0x8000+offsetof(G, PowerUpGfxTable)));
    sta(ABS(0x0));
    // load right tile
    lda(ABSX(((0x8000+offsetof(G, PowerUpGfxTable)) + (1))));
    // branch to draw one row of our power-up object
    JSR(DrawOneSpriteRow);
    // decrement counter
    dec(ABS(0x7));
    // branch until two rows are drawn
    BPL(PUpDrawLoop);
    // get sprite data offset again
    ldy(ABS(((Enemy_SprDataOffset) + (5))));
    // pull saved power-up type from the stack
    pla();
    // if regular mushroom, branch, do not change colors or flip
    BEQ(PUpOfs);
    cmp(IMM(0x3));
    // if 1-up mushroom, branch, do not change colors or flip
    BEQ(PUpOfs);
    // store power-up type here now
    sta(ABS(0x0));
    // get frame counter
    lda(ABS(FrameCounter));
    // divide by 2 to change colors every two frames
    lsr();
    // mask out all but d1 and d0 (previously d2 and d1)
    anda(IMM(0b11));
    // add background priority bit if any set
    ora(ABS(((Enemy_SprAttrib) + (5))));
    // set as new palette bits for top left and
    sta(ABSY(Sprite_Attributes));
    // top right sprites for fire flower and star
    sta(ABSY(((Sprite_Attributes) + (4))));
    ldx(ABS(0x0));
    // check power-up type for fire flower
    dex();
    // if found, skip this part
    BEQ(FlipPUpRightSide);
    // otherwise set new palette bits  for bottom left
    sta(ABSY(((Sprite_Attributes) + (8))));
    // and bottom right sprites as well for star only
    sta(ABSY(((Sprite_Attributes) + (12))));
    JMP(FlipPUpRightSide);
}
void FlipPUpRightSide() {
    _debug("FlipPUpRightSide", __FILE__, __LINE__);
    lda(ABSY(((Sprite_Attributes) + (4))));
    // set horizontal flip bit for top right sprite
    ora(IMM(0b1000000));
    sta(ABSY(((Sprite_Attributes) + (4))));
    lda(ABSY(((Sprite_Attributes) + (12))));
    // set horizontal flip bit for bottom right sprite
    ora(IMM(0b1000000));
    // note these are only done for fire flower and star power-ups
    sta(ABSY(((Sprite_Attributes) + (12))));
    JMP(PUpOfs);
}
void PUpOfs() {
    _debug("PUpOfs", __FILE__, __LINE__);
    // jump to check to see if power-up is offscreen at all, then leave
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}
void EnemyGfxHandler() {
    _debug("EnemyGfxHandler", __FILE__, __LINE__);
    // get enemy object vertical position
    lda(ABSX(Enemy_Y_Position));
    sta(ABS(0x2));
    // get enemy object horizontal position
    lda(ABS(Enemy_Rel_XPos));
    // relative to screen
    sta(ABS(0x5));
    ldy(ABSX(Enemy_SprDataOffset));
    // get sprite data offset
    sty(ABS(0xeb));
    lda(IMM(0x0));
    // initialize vertical flip flag by default
    sta(ABS(VerticalFlipFlag));
    lda(ABSX(Enemy_MovingDir));
    // get enemy object moving direction
    sta(ABS(0x3));
    lda(ABSX(Enemy_SprAttrib));
    // get enemy object sprite attributes
    sta(ABS(0x4));
    lda(ABSX(Enemy_ID));
    // is enemy object piranha plant?
    cmp(IMM(PiranhaPlant));
    // if not, branch
    BNE(CheckForRetainerObj);
    ldy(ABSX(PiranhaPlant_Y_Speed));
    // if piranha plant moving upwards, branch
    BMI(CheckForRetainerObj);
    ldy(ABSX(EnemyFrameTimer));
    // if timer for movement expired, branch
    BEQ(CheckForRetainerObj);
    // if all conditions fail, leave
    return;
}
void CheckForRetainerObj() {
    _debug("CheckForRetainerObj", __FILE__, __LINE__);
    // store enemy state
    lda(ABSX(Enemy_State));
    sta(ABS(0xed));
    // nullify all but 5 LSB and use as Y
    anda(IMM(0b11111));
    tay();
    // check for mushroom retainer/princess object
    lda(ABSX(Enemy_ID));
    cmp(IMM(RetainerObject));
    // if not found, branch
    BNE(CheckForBulletBillCV);
    // if found, nullify saved state in Y
    ldy(IMM(0x0));
    // set value that will not be used
    lda(IMM(0x1));
    sta(ABS(0x3));
    // set value $15 as code for mushroom retainer/princess object
    lda(IMM(0x15));
    JMP(CheckForBulletBillCV);
}
void CheckForBulletBillCV() {
    _debug("CheckForBulletBillCV", __FILE__, __LINE__);
    // otherwise check for bullet bill object
    cmp(IMM(BulletBill_CannonVar));
    // if not found, branch again
    BNE(CheckForJumpspring);
    // decrement saved vertical position
    dec(ABS(0x2));
    lda(IMM(0x3));
    // get timer for enemy object
    ldy(ABSX(EnemyFrameTimer));
    // if expired, do not set priority bit
    BEQ(SBBAt);
    // otherwise do so
    ora(IMM(0b100000));
    JMP(SBBAt);
}
void SBBAt() {
    _debug("SBBAt", __FILE__, __LINE__);
    // set new sprite attributes
    sta(ABS(0x4));
    // nullify saved enemy state both in Y and in
    ldy(IMM(0x0));
    // memory location here
    sty(ABS(0xed));
    // set specific value to unconditionally branch once
    lda(IMM(0x8));
    JMP(CheckForJumpspring);
}
void CheckForJumpspring() {
    _debug("CheckForJumpspring", __FILE__, __LINE__);
    // check for jumpspring object
    cmp(IMM(JumpspringObject));
    BNE(CheckForPodoboo);
    // set enemy state -2 MSB here for jumpspring object
    ldy(IMM(0x3));
    // get current frame number for jumpspring object
    ldx(ABS(JumpspringAnimCtrl));
    // load data using frame number as offset
    lda(ABSX(0x8000+offsetof(G, JumpspringFrameOffsets)));
    JMP(CheckForPodoboo);
}
void CheckForPodoboo() {
    _debug("CheckForPodoboo", __FILE__, __LINE__);
    // store saved enemy object value here
    sta(ABS(0xef));
    // and Y here (enemy state -2 MSB if not changed)
    sty(ABS(0xec));
    // get enemy object offset
    ldx(ABS(ObjectOffset));
    // check for podoboo object
    cmp(IMM(0xc));
    // branch if not found
    BNE(CheckBowserGfxFlag);
    // if moving upwards, branch
    lda(ABSX(Enemy_Y_Speed));
    BMI(CheckBowserGfxFlag);
    // otherwise, set flag for vertical flip
    inc(ABS(VerticalFlipFlag));
    JMP(CheckBowserGfxFlag);
}
void CheckBowserGfxFlag() {
    _debug("CheckBowserGfxFlag", __FILE__, __LINE__);
    // if not drawing bowser at all, skip to something else
    lda(ABS(BowserGfxFlag));
    BEQ(CheckForGoomba);
    // if set to 1, draw bowser's front
    ldy(IMM(0x16));
    cmp(IMM(0x1));
    BEQ(SBwsrGfxOfs);
    // otherwise draw bowser's rear
    iny();
    JMP(SBwsrGfxOfs);
}
void SBwsrGfxOfs() {
    _debug("SBwsrGfxOfs", __FILE__, __LINE__);
    sty(ABS(0xef));
    JMP(CheckForGoomba);
}
void CheckForGoomba() {
    _debug("CheckForGoomba", __FILE__, __LINE__);
    // check value for goomba object
    ldy(ABS(0xef));
    cpy(IMM(Goomba));
    // branch if not found
    BNE(CheckBowserFront);
    lda(ABSX(Enemy_State));
    // check for defeated state
    cmp(IMM(0x2));
    // if not defeated, go ahead and animate
    BCC(GmbaAnim);
    // if defeated, write new value here
    ldx(IMM(0x4));
    stx(ABS(0xec));
    JMP(GmbaAnim);
}
void GmbaAnim() {
    _debug("GmbaAnim", __FILE__, __LINE__);
    // check for d5 set in enemy object state
    anda(IMM(0b100000));
    // or timer disable flag set
    ora(ABS(TimerControl));
    // if either condition true, do not animate goomba
    BNE(CheckBowserFront);
    lda(ABS(FrameCounter));
    // check for every eighth frame
    anda(IMM(0b1000));
    BNE(CheckBowserFront);
    lda(ABS(0x3));
    // invert bits to flip horizontally every eight frames
    eor(IMM(0b11));
    // leave alone otherwise
    sta(ABS(0x3));
    JMP(CheckBowserFront);
}
void CheckBowserFront() {
    _debug("CheckBowserFront", __FILE__, __LINE__);
    // load sprite attribute using enemy object
    lda(ABSY(0x8000+offsetof(G, EnemyAttributeData)));
    // as offset, and add to bits already loaded
    ora(ABS(0x4));
    sta(ABS(0x4));
    // load value based on enemy object as offset
    lda(ABSY(0x8000+offsetof(G, EnemyGfxTableOffsets)));
    // save as X
    tax();
    // get previously saved value
    ldy(ABS(0xec));
    lda(ABS(BowserGfxFlag));
    // if not drawing bowser object at all, skip all of this
    BEQ(CheckForSpiny);
    cmp(IMM(0x1));
    // if not drawing front part, branch to draw the rear part
    BNE(CheckBowserRear);
    // check bowser's body control bits
    lda(ABS(BowserBodyControls));
    // branch if d7 not set (control's bowser's mouth)
    BPL(ChkFrontSte);
    // otherwise load offset for second frame
    ldx(IMM(0xde));
    JMP(ChkFrontSte);
}
void ChkFrontSte() {
    _debug("ChkFrontSte", __FILE__, __LINE__);
    // check saved enemy state
    lda(ABS(0xed));
    // if bowser not defeated, do not set flag
    anda(IMM(0b100000));
    BEQ(DrawBowser);
    JMP(FlipBowserOver);
}
void FlipBowserOver() {
    _debug("FlipBowserOver", __FILE__, __LINE__);
    // set vertical flip flag to nonzero
    stx(ABS(VerticalFlipFlag));
    JMP(DrawBowser);
}
void DrawBowser() {
    _debug("DrawBowser", __FILE__, __LINE__);
    // draw bowser's graphics now
    JMP(DrawEnemyObject);
    JMP(CheckBowserRear);
}
void CheckBowserRear() {
    _debug("CheckBowserRear", __FILE__, __LINE__);
    // check bowser's body control bits
    lda(ABS(BowserBodyControls));
    anda(IMM(0x1));
    // branch if d0 not set (control's bowser's feet)
    BEQ(ChkRearSte);
    // otherwise load offset for second frame
    ldx(IMM(0xe4));
    JMP(ChkRearSte);
}
void ChkRearSte() {
    _debug("ChkRearSte", __FILE__, __LINE__);
    // check saved enemy state
    lda(ABS(0xed));
    // if bowser not defeated, do not set flag
    anda(IMM(0b100000));
    BEQ(DrawBowser);
    // subtract 16 pixels from
    lda(ABS(0x2));
    // saved vertical coordinate
    sec();
    sbc(IMM(0x10));
    sta(ABS(0x2));
    // jump to set vertical flip flag
    JMP(FlipBowserOver);
    JMP(CheckForSpiny);
}
void CheckForSpiny() {
    _debug("CheckForSpiny", __FILE__, __LINE__);
    // check if value loaded is for spiny
    cpx(IMM(0x24));
    // if not found, branch
    BNE(CheckForLakitu);
    // if enemy state set to $05, do this,
    cpy(IMM(0x5));
    // otherwise branch
    BNE(NotEgg);
    // set to spiny egg offset
    ldx(IMM(0x30));
    lda(IMM(0x2));
    // set enemy direction to reverse sprites horizontally
    sta(ABS(0x3));
    lda(IMM(0x5));
    // set enemy state
    sta(ABS(0xec));
    JMP(NotEgg);
}
void NotEgg() {
    _debug("NotEgg", __FILE__, __LINE__);
    // skip a big chunk of this if we found spiny but not in egg
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}
void CheckForLakitu() {
    _debug("CheckForLakitu", __FILE__, __LINE__);
    // check value for lakitu's offset loaded
    cpx(IMM(0x90));
    // branch if not loaded
    BNE(CheckUpsideDownShell);
    lda(ABS(0xed));
    // check for d5 set in enemy state
    anda(IMM(0b100000));
    // branch if set
    BNE(NoLAFr);
    lda(ABS(FrenzyEnemyTimer));
    // check timer to see if we've reached a certain range
    cmp(IMM(0x10));
    // branch if not
    BCS(NoLAFr);
    // if d6 not set and timer in range, load alt frame for lakitu
    ldx(IMM(0x96));
    JMP(NoLAFr);
}
void NoLAFr() {
    _debug("NoLAFr", __FILE__, __LINE__);
    // skip this next part if we found lakitu but alt frame not needed
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}
void CheckUpsideDownShell() {
    _debug("CheckUpsideDownShell", __FILE__, __LINE__);
    // check for enemy object => $04
    lda(ABS(0xef));
    cmp(IMM(0x4));
    // branch if true
    BCS(CheckRightSideUpShell);
    cpy(IMM(0x2));
    // branch if enemy state < $02
    BCC(CheckRightSideUpShell);
    // set for upside-down koopa shell by default
    ldx(IMM(0x5a));
    ldy(ABS(0xef));
    // check for buzzy beetle object
    cpy(IMM(BuzzyBeetle));
    BNE(CheckRightSideUpShell);
    // set for upside-down buzzy beetle shell if found
    ldx(IMM(0x7e));
    // increment vertical position by one pixel
    inc(ABS(0x2));
    JMP(CheckRightSideUpShell);
}
void CheckRightSideUpShell() {
    _debug("CheckRightSideUpShell", __FILE__, __LINE__);
    // check for value set here
    lda(ABS(0xec));
    // if enemy state < $02, do not change to shell, if
    cmp(IMM(0x4));
    // enemy state => $02 but not = $04, leave shell upside-down
    BNE(CheckForHammerBro);
    // set right-side up buzzy beetle shell by default
    ldx(IMM(0x72));
    // increment saved vertical position by one pixel
    inc(ABS(0x2));
    ldy(ABS(0xef));
    // check for buzzy beetle object
    cpy(IMM(BuzzyBeetle));
    // branch if found
    BEQ(CheckForDefdGoomba);
    // change to right-side up koopa shell if not found
    ldx(IMM(0x66));
    // and increment saved vertical position again
    inc(ABS(0x2));
    JMP(CheckForDefdGoomba);
}
void CheckForDefdGoomba() {
    _debug("CheckForDefdGoomba", __FILE__, __LINE__);
    // check for goomba object (necessary if previously
    cpy(IMM(Goomba));
    // failed buzzy beetle object test)
    BNE(CheckForHammerBro);
    // load for regular goomba
    ldx(IMM(0x54));
    // note that this only gets performed if enemy state => $02
    lda(ABS(0xed));
    // check saved enemy state for d5 set
    anda(IMM(0b100000));
    // branch if set
    BNE(CheckForHammerBro);
    // load offset for defeated goomba
    ldx(IMM(0x8a));
    // set different value and decrement saved vertical position
    dec(ABS(0x2));
    JMP(CheckForHammerBro);
}
void CheckForHammerBro() {
    _debug("CheckForHammerBro", __FILE__, __LINE__);
    ldy(ABS(ObjectOffset));
    // check for hammer bro object
    lda(ABS(0xef));
    cmp(IMM(HammerBro));
    // branch if not found
    BNE(CheckForBloober);
    lda(ABS(0xed));
    // branch if not in normal enemy state
    BEQ(CheckToAnimateEnemy);
    anda(IMM(0b1000));
    // if d3 not set, branch further away
    BEQ(CheckDefeatedState);
    // otherwise load offset for different frame
    ldx(IMM(0xb4));
    // unconditional branch
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}
void CheckForBloober() {
    _debug("CheckForBloober", __FILE__, __LINE__);
    // check for cheep-cheep offset loaded
    cpx(IMM(0x48));
    // branch if found
    BEQ(CheckToAnimateEnemy);
    lda(ABSY(EnemyIntervalTimer));
    cmp(IMM(0x5));
    // branch if some timer is above a certain point
    BCS(CheckDefeatedState);
    // check for bloober offset loaded
    cpx(IMM(0x3c));
    // branch if not found this time
    BNE(CheckToAnimateEnemy);
    cmp(IMM(0x1));
    // branch if timer is set to certain point
    BEQ(CheckDefeatedState);
    // increment saved vertical coordinate three pixels
    inc(ABS(0x2));
    inc(ABS(0x2));
    inc(ABS(0x2));
    // and do something else
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}
void CheckToAnimateEnemy() {
    _debug("CheckToAnimateEnemy", __FILE__, __LINE__);
    // check for specific enemy objects
    lda(ABS(0xef));
    cmp(IMM(Goomba));
    // branch if goomba
    BEQ(CheckDefeatedState);
    cmp(IMM(0x8));
    // branch if bullet bill (note both variants use $08 here)
    BEQ(CheckDefeatedState);
    cmp(IMM(Podoboo));
    // branch if podoboo
    BEQ(CheckDefeatedState);
    // branch if => $18
    cmp(IMM(0x18));
    BCS(CheckDefeatedState);
    ldy(IMM(0x0));
    // check for mushroom retainer/princess object
    cmp(IMM(0x15));
    // which uses different code here, branch if not found
    BNE(CheckForSecondFrame);
    // residual instruction
    iny();
    // are we on world 8?
    lda(ABS(WorldNumber));
    cmp(IMM(World8));
    // if so, leave the offset alone (use princess)
    BCS(CheckDefeatedState);
    // otherwise, set for mushroom retainer object instead
    ldx(IMM(0xa2));
    // set alternate state here
    lda(IMM(0x3));
    sta(ABS(0xec));
    // unconditional branch
    BNE(CheckDefeatedState);
    JMP(CheckForSecondFrame);
}
void CheckForSecondFrame() {
    _debug("CheckForSecondFrame", __FILE__, __LINE__);
    // load frame counter
    lda(ABS(FrameCounter));
    // mask it (partly residual, one byte not ever used)
    anda(ABSY(0x8000+offsetof(G, EnemyAnimTimingBMask)));
    // branch if timing is off
    BNE(CheckDefeatedState);
    JMP(CheckAnimationStop);
}
void CheckAnimationStop() {
    _debug("CheckAnimationStop", __FILE__, __LINE__);
    // check saved enemy state
    lda(ABS(0xed));
    // for d7 or d5, or check for timers stopped
    anda(IMM(0b10100000));
    ora(ABS(TimerControl));
    // if either condition true, branch
    BNE(CheckDefeatedState);
    txa();
    clc();
    // add $06 to current enemy offset
    adc(IMM(0x6));
    // to animate various enemy objects
    tax();
    JMP(CheckDefeatedState);
}
void CheckDefeatedState() {
    _debug("CheckDefeatedState", __FILE__, __LINE__);
    // check saved enemy state
    lda(ABS(0xed));
    // for d5 set
    anda(IMM(0b100000));
    // branch if not set
    BEQ(DrawEnemyObject);
    lda(ABS(0xef));
    // check for saved enemy object => $04
    cmp(IMM(0x4));
    // branch if less
    BCC(DrawEnemyObject);
    ldy(IMM(0x1));
    // set vertical flip flag
    sty(ABS(VerticalFlipFlag));
    dey();
    // init saved value here
    sty(ABS(0xec));
    JMP(DrawEnemyObject);
}
void DrawEnemyObject() {
    _debug("DrawEnemyObject", __FILE__, __LINE__);
    // load sprite data offset
    ldy(ABS(0xeb));
    // draw six tiles of data
    JSR(DrawEnemyObjRow);
    // into sprite data
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // get enemy object offset
    ldx(ABS(ObjectOffset));
    // get sprite data offset
    ldy(ABSX(Enemy_SprDataOffset));
    lda(ABS(0xef));
    // get saved enemy object and check
    cmp(IMM(0x8));
    // for bullet bill, branch if not found
    BNE(CheckForVerticalFlip);
    JMP(SkipToOffScrChk);
}
void SkipToOffScrChk() {
    _debug("SkipToOffScrChk", __FILE__, __LINE__);
    // jump if found
    JMP(SprObjectOffscrChk);
    JMP(CheckForVerticalFlip);
}
void CheckForVerticalFlip() {
    _debug("CheckForVerticalFlip", __FILE__, __LINE__);
    // check if vertical flip flag is set here
    lda(ABS(VerticalFlipFlag));
    // branch if not
    BEQ(CheckForESymmetry);
    // get attributes of first sprite we dealt with
    lda(ABSY(Sprite_Attributes));
    // set bit for vertical flip
    ora(IMM(0b10000000));
    iny();
    // increment two bytes so that we store the vertical flip
    iny();
    // in attribute bytes of enemy obj sprite data
    JSR(DumpSixSpr);
    dey();
    // now go back to the Y coordinate offset
    dey();
    tya();
    // give offset to X
    tax();
    lda(ABS(0xef));
    // check saved enemy object for hammer bro
    cmp(IMM(HammerBro));
    BEQ(FlipEnemyVertically);
    // check saved enemy object for lakitu
    cmp(IMM(Lakitu));
    // branch for hammer bro or lakitu
    BEQ(FlipEnemyVertically);
    cmp(IMM(0x15));
    // also branch if enemy object => $15
    BCS(FlipEnemyVertically);
    txa();
    clc();
    // if not selected objects or => $15, set
    adc(IMM(0x8));
    // offset in X for next row
    tax();
    JMP(FlipEnemyVertically);
}
void FlipEnemyVertically() {
    _debug("FlipEnemyVertically", __FILE__, __LINE__);
    // load first or second row tiles
    lda(ABSX(Sprite_Tilenumber));
    // and save tiles to the stack
    pha();
    lda(ABSX(((Sprite_Tilenumber) + (4))));
    pha();
    // exchange third row tiles
    lda(ABSY(((Sprite_Tilenumber) + (16))));
    // with first or second row tiles
    sta(ABSX(Sprite_Tilenumber));
    lda(ABSY(((Sprite_Tilenumber) + (20))));
    sta(ABSX(((Sprite_Tilenumber) + (4))));
    // pull first or second row tiles from stack
    pla();
    // and save in third row
    sta(ABSY(((Sprite_Tilenumber) + (20))));
    pla();
    sta(ABSY(((Sprite_Tilenumber) + (16))));
    JMP(CheckForESymmetry);
}
void CheckForESymmetry() {
    _debug("CheckForESymmetry", __FILE__, __LINE__);
    // are we drawing bowser at all?
    lda(ABS(BowserGfxFlag));
    // branch if so
    BNE(SkipToOffScrChk);
    lda(ABS(0xef));
    // get alternate enemy state
    ldx(ABS(0xec));
    // check for hammer bro object
    cmp(IMM(0x5));
    BNE(ContES);
    // jump if found
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}
void ContES() {
    _debug("ContES", __FILE__, __LINE__);
    // check for bloober object
    cmp(IMM(Bloober));
    BEQ(MirrorEnemyGfx);
    // check for piranha plant object
    cmp(IMM(PiranhaPlant));
    BEQ(MirrorEnemyGfx);
    // check for podoboo object
    cmp(IMM(Podoboo));
    // branch if either of three are found
    BEQ(MirrorEnemyGfx);
    // check for spiny object
    cmp(IMM(Spiny));
    // branch closer if not found
    BNE(ESRtnr);
    // check spiny's state
    cpx(IMM(0x5));
    // branch if not an egg, otherwise
    BNE(CheckToMirrorLakitu);
    JMP(ESRtnr);
}
void ESRtnr() {
    _debug("ESRtnr", __FILE__, __LINE__);
    // check for princess/mushroom retainer object
    cmp(IMM(0x15));
    BNE(SpnySC);
    // set horizontal flip on bottom right sprite
    lda(IMM(0x42));
    // note that palette bits were already set earlier
    sta(ABSY(((Sprite_Attributes) + (20))));
    JMP(SpnySC);
}
void SpnySC() {
    _debug("SpnySC", __FILE__, __LINE__);
    // if alternate enemy state set to 1 or 0, branch
    cpx(IMM(0x2));
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}
void MirrorEnemyGfx() {
    _debug("MirrorEnemyGfx", __FILE__, __LINE__);
    // if enemy object is bowser, skip all of this
    lda(ABS(BowserGfxFlag));
    BNE(CheckToMirrorLakitu);
    // load attribute bits of first sprite
    lda(ABSY(Sprite_Attributes));
    anda(IMM(0b10100011));
    // save vertical flip, priority, and palette bits
    sta(ABSY(Sprite_Attributes));
    // in left sprite column of enemy object OAM data
    sta(ABSY(((Sprite_Attributes) + (8))));
    sta(ABSY(((Sprite_Attributes) + (16))));
    // set horizontal flip
    ora(IMM(0b1000000));
    // check for state used by spiny's egg
    cpx(IMM(0x5));
    // if alternate state not set to $05, branch
    BNE(EggExc);
    // otherwise set vertical flip
    ora(IMM(0b10000000));
    JMP(EggExc);
}
void EggExc() {
    _debug("EggExc", __FILE__, __LINE__);
    // set bits of right sprite column
    sta(ABSY(((Sprite_Attributes) + (4))));
    // of enemy object sprite data
    sta(ABSY(((Sprite_Attributes) + (12))));
    sta(ABSY(((Sprite_Attributes) + (20))));
    // check alternate enemy state
    cpx(IMM(0x4));
    // branch if not $04
    BNE(CheckToMirrorLakitu);
    // get second row left sprite attributes
    lda(ABSY(((Sprite_Attributes) + (8))));
    ora(IMM(0b10000000));
    // store bits with vertical flip in
    sta(ABSY(((Sprite_Attributes) + (8))));
    // second and third row left sprites
    sta(ABSY(((Sprite_Attributes) + (16))));
    ora(IMM(0b1000000));
    // store with horizontal and vertical flip in
    sta(ABSY(((Sprite_Attributes) + (12))));
    // second and third row right sprites
    sta(ABSY(((Sprite_Attributes) + (20))));
    JMP(CheckToMirrorLakitu);
}
void CheckToMirrorLakitu() {
    _debug("CheckToMirrorLakitu", __FILE__, __LINE__);
    // check for lakitu enemy object
    lda(ABS(0xef));
    cmp(IMM(Lakitu));
    // branch if not found
    BNE(CheckToMirrorJSpring);
    lda(ABS(VerticalFlipFlag));
    // branch if vertical flip flag not set
    BNE(NVFLak);
    // save vertical flip and palette bits
    lda(ABSY(((Sprite_Attributes) + (16))));
    // in third row left sprite
    anda(IMM(0b10000001));
    sta(ABSY(((Sprite_Attributes) + (16))));
    // set horizontal flip and palette bits
    lda(ABSY(((Sprite_Attributes) + (20))));
    // in third row right sprite
    ora(IMM(0b1000001));
    sta(ABSY(((Sprite_Attributes) + (20))));
    // check timer
    ldx(ABS(FrenzyEnemyTimer));
    cpx(IMM(0x10));
    // branch if timer has not reached a certain range
    BCS(SprObjectOffscrChk);
    // otherwise set same for second row right sprite
    sta(ABSY(((Sprite_Attributes) + (12))));
    anda(IMM(0b10000001));
    // preserve vertical flip and palette bits for left sprite
    sta(ABSY(((Sprite_Attributes) + (8))));
    // unconditional branch
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}
void NVFLak() {
    _debug("NVFLak", __FILE__, __LINE__);
    // get first row left sprite attributes
    lda(ABSY(Sprite_Attributes));
    anda(IMM(0b10000001));
    // save vertical flip and palette bits
    sta(ABSY(Sprite_Attributes));
    // get first row right sprite attributes
    lda(ABSY(((Sprite_Attributes) + (4))));
    // set horizontal flip and palette bits
    ora(IMM(0b1000001));
    // note that vertical flip is left as-is
    sta(ABSY(((Sprite_Attributes) + (4))));
    JMP(CheckToMirrorJSpring);
}
void CheckToMirrorJSpring() {
    _debug("CheckToMirrorJSpring", __FILE__, __LINE__);
    // check for jumpspring object (any frame)
    lda(ABS(0xef));
    cmp(IMM(0x18));
    // branch if not jumpspring object at all
    BCC(SprObjectOffscrChk);
    lda(IMM(0x82));
    // set vertical flip and palette bits of
    sta(ABSY(((Sprite_Attributes) + (8))));
    // second and third row left sprites
    sta(ABSY(((Sprite_Attributes) + (16))));
    ora(IMM(0b1000000));
    // set, in addition to those, horizontal flip
    sta(ABSY(((Sprite_Attributes) + (12))));
    // for second and third row right sprites
    sta(ABSY(((Sprite_Attributes) + (20))));
    JMP(SprObjectOffscrChk);
}
void SprObjectOffscrChk() {
    _debug("SprObjectOffscrChk", __FILE__, __LINE__);
    // get enemy buffer offset
    ldx(ABS(ObjectOffset));
    // check offscreen information
    lda(ABS(Enemy_OffscreenBits));
    lsr();
    // shift three times to the right
    lsr();
    // which puts d2 into carry
    lsr();
    // save to stack
    pha();
    // branch if not set
    BCC(LcChk);
    // set for right column sprites
    lda(IMM(0x4));
    // and move them offscreen
    JSR(MoveESprColOffscreen);
    JMP(LcChk);
}
void LcChk() {
    _debug("LcChk", __FILE__, __LINE__);
    // get from stack
    pla();
    // move d3 to carry
    lsr();
    // save to stack
    pha();
    // branch if not set
    BCC(Row3C);
    // set for left column sprites,
    lda(IMM(0x0));
    // move them offscreen
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}
void Row3C() {
    _debug("Row3C", __FILE__, __LINE__);
    // get from stack again
    pla();
    // move d5 to carry this time
    lsr();
    lsr();
    // save to stack again
    pha();
    // branch if carry not set
    BCC(Row23C);
    // set for third row of sprites
    lda(IMM(0x10));
    // and move them offscreen
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}
void Row23C() {
    _debug("Row23C", __FILE__, __LINE__);
    // get from stack
    pla();
    // move d6 into carry
    lsr();
    // save to stack
    pha();
    BCC(AllRowC);
    // set for second and third rows
    lda(IMM(0x8));
    // move them offscreen
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}
void AllRowC() {
    _debug("AllRowC", __FILE__, __LINE__);
    // get from stack once more
    pla();
    // move d7 into carry
    lsr();
    BCC(ExEGHandler);
    // move all sprites offscreen (A should be 0 by now)
    JSR(MoveESprRowOffscreen);
    lda(ABSX(Enemy_ID));
    // check enemy identifier for podoboo
    cmp(IMM(Podoboo));
    // skip this part if found, we do not want to erase podoboo!
    BEQ(ExEGHandler);
    // check high byte of vertical position
    lda(ABSX(Enemy_Y_HighPos));
    // if not yet past the bottom of the screen, branch
    cmp(IMM(0x2));
    BNE(ExEGHandler);
    // what it says
    JSR(EraseEnemyObject);
    JMP(ExEGHandler);
}
void ExEGHandler() {
    _debug("ExEGHandler", __FILE__, __LINE__);
    return;
}
void DrawEnemyObjRow() {
    _debug("DrawEnemyObjRow", __FILE__, __LINE__);
    // load two tiles of enemy graphics
    lda(ABSX(0x8000+offsetof(G, EnemyGraphicsTable)));
    sta(ABS(0x0));
    lda(ABSX(((0x8000+offsetof(G, EnemyGraphicsTable)) + (1))));
    JMP(DrawOneSpriteRow);
}
void DrawOneSpriteRow() {
    _debug("DrawOneSpriteRow", __FILE__, __LINE__);
    sta(ABS(0x1));
    // draw them
    JMP(DrawSpriteObject);
    JMP(MoveESprRowOffscreen);
}
void MoveESprRowOffscreen() {
    _debug("MoveESprRowOffscreen", __FILE__, __LINE__);
    // add A to enemy object OAM data offset
    clc();
    adc(ABSX(Enemy_SprDataOffset));
    // use as offset
    tay();
    lda(IMM(0xf8));
    // move first row of sprites offscreen
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}
void MoveESprColOffscreen() {
    _debug("MoveESprColOffscreen", __FILE__, __LINE__);
    // add A to enemy object OAM data offset
    clc();
    adc(ABSX(Enemy_SprDataOffset));
    // use as offset
    tay();
    // move first and second row sprites in column offscreen
    JSR(MoveColOffscreen);
    // move third row sprite in column offscreen
    sta(ABSY(((Sprite_Data) + (16))));
    return;
}
void DrawBlock() {
    _debug("DrawBlock", __FILE__, __LINE__);
    // get relative vertical coordinate of block object
    lda(ABS(Block_Rel_YPos));
    // store here
    sta(ABS(0x2));
    // get relative horizontal coordinate of block object
    lda(ABS(Block_Rel_XPos));
    // store here
    sta(ABS(0x5));
    lda(IMM(0x3));
    // set attribute byte here
    sta(ABS(0x4));
    lsr();
    // set horizontal flip bit here (will not be used)
    sta(ABS(0x3));
    // get sprite data offset
    ldy(ABSX(Block_SprDataOffset));
    // reset X for use as offset to tile data
    ldx(IMM(0x0));
    JMP(DBlkLoop);
}
void DBlkLoop() {
    _debug("DBlkLoop", __FILE__, __LINE__);
    // get left tile number
    lda(ABSX(0x8000+offsetof(G, DefaultBlockObjTiles)));
    // set here
    sta(ABS(0x0));
    // get right tile number
    lda(ABSX(((0x8000+offsetof(G, DefaultBlockObjTiles)) + (1))));
    // do sub to write tile numbers to first row of sprites
    JSR(DrawOneSpriteRow);
    // check incremented offset
    cpx(IMM(0x4));
    // and loop back until all four sprites are done
    BNE(DBlkLoop);
    // get block object offset
    ldx(ABS(ObjectOffset));
    // get sprite data offset
    ldy(ABSX(Block_SprDataOffset));
    lda(ABS(AreaType));
    // check for ground level type area
    cmp(IMM(0x1));
    // if found, branch to next part
    BEQ(ChkRep);
    lda(IMM(0x86));
    // otherwise remove brick tiles with lines
    sta(ABSY(Sprite_Tilenumber));
    // and replace then with lineless brick tiles
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    JMP(ChkRep);
}
void ChkRep() {
    _debug("ChkRep", __FILE__, __LINE__);
    // check replacement metatile
    lda(ABSX(Block_Metatile));
    // if not used block metatile, then
    cmp(IMM(0xc4));
    // branch ahead to use current graphics
    BNE(BlkOffscr);
    // set A for used block tile
    lda(IMM(0x87));
    // increment Y to write to tile bytes
    iny();
    // do sub to dump into all four sprites
    JSR(DumpFourSpr);
    // return Y to original offset
    dey();
    // set palette bits
    lda(IMM(0x3));
    ldx(ABS(AreaType));
    // check for ground level type area again
    dex();
    // if found, use current palette bits
    BEQ(SetBFlip);
    // otherwise set to $01
    lsr();
    JMP(SetBFlip);
}
void SetBFlip() {
    _debug("SetBFlip", __FILE__, __LINE__);
    // put block object offset back in X
    ldx(ABS(ObjectOffset));
    // store attribute byte as-is in first sprite
    sta(ABSY(Sprite_Attributes));
    ora(IMM(0b1000000));
    // set horizontal flip bit for second sprite
    sta(ABSY(((Sprite_Attributes) + (4))));
    ora(IMM(0b10000000));
    // set both flip bits for fourth sprite
    sta(ABSY(((Sprite_Attributes) + (12))));
    anda(IMM(0b10000011));
    // set vertical flip bit for third sprite
    sta(ABSY(((Sprite_Attributes) + (8))));
    JMP(BlkOffscr);
}
void BlkOffscr() {
    _debug("BlkOffscr", __FILE__, __LINE__);
    // get offscreen bits for block object
    lda(ABS(Block_OffscreenBits));
    // save to stack
    pha();
    // check to see if d2 in offscreen bits are set
    anda(IMM(0b100));
    // if not set, branch, otherwise move sprites offscreen
    BEQ(PullOfsB);
    // move offscreen two OAMs
    lda(IMM(0xf8));
    // on the right side
    sta(ABSY(((Sprite_Y_Position) + (4))));
    sta(ABSY(((Sprite_Y_Position) + (12))));
    JMP(PullOfsB);
}
void PullOfsB() {
    _debug("PullOfsB", __FILE__, __LINE__);
    // pull offscreen bits from stack
    pla();
    JMP(ChkLeftCo);
}
void ChkLeftCo() {
    _debug("ChkLeftCo", __FILE__, __LINE__);
    // check to see if d3 in offscreen bits are set
    anda(IMM(0b1000));
    // if not set, branch, otherwise move sprites offscreen
    BEQ(ExDBlk);
    JMP(MoveColOffscreen);
}
void MoveColOffscreen() {
    _debug("MoveColOffscreen", __FILE__, __LINE__);
    // move offscreen two OAMs
    lda(IMM(0xf8));
    // on the left side (or two rows of enemy on either side
    sta(ABSY(Sprite_Y_Position));
    // if branched here from enemy graphics handler)
    sta(ABSY(((Sprite_Y_Position) + (8))));
    JMP(ExDBlk);
}
void ExDBlk() {
    _debug("ExDBlk", __FILE__, __LINE__);
    return;
}
// $00 - used to hold palette bits for attribute byte or relative X position
void DrawBrickChunks() {
    _debug("DrawBrickChunks", __FILE__, __LINE__);
    // set palette bits here
    lda(IMM(0x2));
    sta(ABS(0x0));
    // set tile number for ball (something residual, likely)
    lda(IMM(0x75));
    ldy(ABS(GameEngineSubroutine));
    // if end-of-level routine running,
    cpy(IMM(0x5));
    // use palette and tile number assigned
    BEQ(DChunks);
    // otherwise set different palette bits
    lda(IMM(0x3));
    sta(ABS(0x0));
    // and set tile number for brick chunks
    lda(IMM(0x84));
    JMP(DChunks);
}
void DChunks() {
    _debug("DChunks", __FILE__, __LINE__);
    // get OAM data offset
    ldy(ABSX(Block_SprDataOffset));
    // increment to start with tile bytes in OAM
    iny();
    // do sub to dump tile number into all four sprites
    JSR(DumpFourSpr);
    // get frame counter
    lda(ABS(FrameCounter));
    asl();
    asl();
    // move low nybble to high
    asl();
    asl();
    // get what was originally d3-d2 of low nybble
    anda(IMM(0xc0));
    // add palette bits
    ora(ABS(0x0));
    // increment offset for attribute bytes
    iny();
    // do sub to dump attribute data into all four sprites
    JSR(DumpFourSpr);
    dey();
    // decrement offset to Y coordinate
    dey();
    // get first block object's relative vertical coordinate
    lda(ABS(Block_Rel_YPos));
    // do sub to dump current Y coordinate into two sprites
    JSR(DumpTwoSpr);
    // get first block object's relative horizontal coordinate
    lda(ABS(Block_Rel_XPos));
    // save into X coordinate of first sprite
    sta(ABSY(Sprite_X_Position));
    // get original horizontal coordinate
    lda(ABSX(Block_Orig_XPos));
    sec();
    // subtract coordinate of left side from original coordinate
    sbc(ABS(ScreenLeft_X_Pos));
    // store result as relative horizontal coordinate of original
    sta(ABS(0x0));
    sec();
    // get difference of relative positions of original - current
    sbc(ABS(Block_Rel_XPos));
    // add original relative position to result
    adc(ABS(0x0));
    // plus 6 pixels to position second brick chunk correctly
    adc(IMM(0x6));
    // save into X coordinate of second sprite
    sta(ABSY(((Sprite_X_Position) + (4))));
    // get second block object's relative vertical coordinate
    lda(ABS(((Block_Rel_YPos) + (1))));
    sta(ABSY(((Sprite_Y_Position) + (8))));
    // dump into Y coordinates of third and fourth sprites
    sta(ABSY(((Sprite_Y_Position) + (12))));
    // get second block object's relative horizontal coordinate
    lda(ABS(((Block_Rel_XPos) + (1))));
    // save into X coordinate of third sprite
    sta(ABSY(((Sprite_X_Position) + (8))));
    // use original relative horizontal position
    lda(ABS(0x0));
    sec();
    // get difference of relative positions of original - current
    sbc(ABS(((Block_Rel_XPos) + (1))));
    // add original relative position to result
    adc(ABS(0x0));
    // plus 6 pixels to position fourth brick chunk correctly
    adc(IMM(0x6));
    // save into X coordinate of fourth sprite
    sta(ABSY(((Sprite_X_Position) + (12))));
    // get offscreen bits for block object
    lda(ABS(Block_OffscreenBits));
    // do sub to move left half of sprites offscreen if necessary
    JSR(ChkLeftCo);
    // get offscreen bits again
    lda(ABS(Block_OffscreenBits));
    // shift d7 into carry
    asl();
    // if d7 not set, branch to last part
    BCC(ChnkOfs);
    lda(IMM(0xf8));
    // otherwise move top sprites offscreen
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}
void ChnkOfs() {
    _debug("ChnkOfs", __FILE__, __LINE__);
    // if relative position on left side of screen,
    lda(ABS(0x0));
    // go ahead and leave
    BPL(ExBCDr);
    // otherwise compare left-side X coordinate
    lda(ABSY(Sprite_X_Position));
    // to right-side X coordinate
    cmp(ABSY(((Sprite_X_Position) + (4))));
    // branch to leave if less
    BCC(ExBCDr);
    // otherwise move right half of sprites offscreen
    lda(IMM(0xf8));
    sta(ABSY(((Sprite_Y_Position) + (4))));
    sta(ABSY(((Sprite_Y_Position) + (12))));
    JMP(ExBCDr);
}
void ExBCDr() {
    _debug("ExBCDr", __FILE__, __LINE__);
    // leave
    return;
}
void DrawFireball() {
    _debug("DrawFireball", __FILE__, __LINE__);
    // get fireball's sprite data offset
    ldy(ABSX(FBall_SprDataOffset));
    // get relative vertical coordinate
    lda(ABS(Fireball_Rel_YPos));
    // store as sprite Y coordinate
    sta(ABSY(Sprite_Y_Position));
    // get relative horizontal coordinate
    lda(ABS(Fireball_Rel_XPos));
    // store as sprite X coordinate, then do shared code
    sta(ABSY(Sprite_X_Position));
    JMP(DrawFirebar);
}
void DrawFirebar() {
    _debug("DrawFirebar", __FILE__, __LINE__);
    // get frame counter
    lda(ABS(FrameCounter));
    // divide by four
    lsr();
    lsr();
    // save result to stack
    pha();
    // mask out all but last bit
    anda(IMM(0x1));
    // set either tile $64 or $65 as fireball tile
    eor(IMM(0x64));
    // thus tile changes every four frames
    sta(ABSY(Sprite_Tilenumber));
    // get from stack
    pla();
    // divide by four again
    lsr();
    lsr();
    // load value $02 to set palette in attrib byte
    lda(IMM(0x2));
    // if last bit shifted out was not set, skip this
    BCC(FireA);
    // otherwise flip both ways every eight frames
    ora(IMM(0b11000000));
    JMP(FireA);
}
void FireA() {
    _debug("FireA", __FILE__, __LINE__);
    // store attribute byte and leave
    sta(ABSY(Sprite_Attributes));
    return;
}
void DrawExplosion_Fireball() {
    _debug("DrawExplosion_Fireball", __FILE__, __LINE__);
    // get OAM data offset of alternate sort for fireball's explosion
    ldy(ABSX(Alt_SprDataOffset));
    // load fireball state
    lda(ABSX(Fireball_State));
    // increment state for next frame
    inc(ABSX(Fireball_State));
    // divide by 2
    lsr();
    // mask out all but d3-d1
    anda(IMM(0b111));
    // check to see if time to kill fireball
    cmp(IMM(0x3));
    // branch if so, otherwise continue to draw explosion
    BCS(KillFireBall);
    JMP(DrawExplosion_Fireworks);
}
void DrawExplosion_Fireworks() {
    _debug("DrawExplosion_Fireworks", __FILE__, __LINE__);
    // use whatever's in A for offset
    tax();
    // get tile number using offset
    lda(ABSX(0x8000+offsetof(G, ExplosionTiles)));
    // increment Y (contains sprite data offset)
    iny();
    // and dump into tile number part of sprite data
    JSR(DumpFourSpr);
    // decrement Y so we have the proper offset again
    dey();
    // return enemy object buffer offset to X
    ldx(ABS(ObjectOffset));
    // get relative vertical coordinate
    lda(ABS(Fireball_Rel_YPos));
    // subtract four pixels vertically
    sec();
    // for first and third sprites
    sbc(IMM(0x4));
    sta(ABSY(Sprite_Y_Position));
    sta(ABSY(((Sprite_Y_Position) + (8))));
    // add eight pixels vertically
    clc();
    // for second and fourth sprites
    adc(IMM(0x8));
    sta(ABSY(((Sprite_Y_Position) + (4))));
    sta(ABSY(((Sprite_Y_Position) + (12))));
    // get relative horizontal coordinate
    lda(ABS(Fireball_Rel_XPos));
    // subtract four pixels horizontally
    sec();
    // for first and second sprites
    sbc(IMM(0x4));
    sta(ABSY(Sprite_X_Position));
    sta(ABSY(((Sprite_X_Position) + (4))));
    // add eight pixels horizontally
    clc();
    // for third and fourth sprites
    adc(IMM(0x8));
    sta(ABSY(((Sprite_X_Position) + (8))));
    sta(ABSY(((Sprite_X_Position) + (12))));
    // set palette attributes for all sprites, but
    lda(IMM(0x2));
    // set no flip at all for first sprite
    sta(ABSY(Sprite_Attributes));
    lda(IMM(0x82));
    // set vertical flip for second sprite
    sta(ABSY(((Sprite_Attributes) + (4))));
    lda(IMM(0x42));
    // set horizontal flip for third sprite
    sta(ABSY(((Sprite_Attributes) + (8))));
    lda(IMM(0xc2));
    // set both flips for fourth sprite
    sta(ABSY(((Sprite_Attributes) + (12))));
    // we are done
    return;
}
void KillFireBall() {
    _debug("KillFireBall", __FILE__, __LINE__);
    // clear fireball state to kill it
    lda(IMM(0x0));
    sta(ABSX(Fireball_State));
    return;
}
void DrawSmallPlatform() {
    _debug("DrawSmallPlatform", __FILE__, __LINE__);
    // get OAM data offset
    ldy(ABSX(Enemy_SprDataOffset));
    // load tile number for small platforms
    lda(IMM(0x5b));
    // increment offset for tile numbers
    iny();
    // dump tile number into all six sprites
    JSR(DumpSixSpr);
    // increment offset for attributes
    iny();
    // load palette controls
    lda(IMM(0x2));
    // dump attributes into all six sprites
    JSR(DumpSixSpr);
    // decrement for original offset
    dey();
    dey();
    // get relative horizontal coordinate
    lda(ABS(Enemy_Rel_XPos));
    sta(ABSY(Sprite_X_Position));
    // dump as X coordinate into first and fourth sprites
    sta(ABSY(((Sprite_X_Position) + (12))));
    clc();
    // add eight pixels
    adc(IMM(0x8));
    // dump into second and fifth sprites
    sta(ABSY(((Sprite_X_Position) + (4))));
    sta(ABSY(((Sprite_X_Position) + (16))));
    clc();
    // add eight more pixels
    adc(IMM(0x8));
    // dump into third and sixth sprites
    sta(ABSY(((Sprite_X_Position) + (8))));
    sta(ABSY(((Sprite_X_Position) + (20))));
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
    tax();
    // save to stack
    pha();
    // if vertical coordinate below status bar,
    cpx(IMM(0x20));
    // do not mess with it
    BCS(TopSP);
    // otherwise move first three sprites offscreen
    lda(IMM(0xf8));
    JMP(TopSP);
}
void TopSP() {
    _debug("TopSP", __FILE__, __LINE__);
    // dump vertical coordinate into Y coordinates
    JSR(DumpThreeSpr);
    // pull from stack
    pla();
    clc();
    // add 128 pixels
    adc(IMM(0x80));
    tax();
    // if below status bar (taking wrap into account)
    cpx(IMM(0x20));
    // then do not change altered coordinate
    BCS(BotSP);
    // otherwise move last three sprites offscreen
    lda(IMM(0xf8));
    JMP(BotSP);
}
void BotSP() {
    _debug("BotSP", __FILE__, __LINE__);
    // dump vertical coordinate + 128 pixels
    sta(ABSY(((Sprite_Y_Position) + (12))));
    // into Y coordinates
    sta(ABSY(((Sprite_Y_Position) + (16))));
    sta(ABSY(((Sprite_Y_Position) + (20))));
    // get offscreen bits
    lda(ABS(Enemy_OffscreenBits));
    // save to stack
    pha();
    // check d3
    anda(IMM(0b1000));
    BEQ(SOfs);
    // if d3 was set, move first and
    lda(IMM(0xf8));
    // fourth sprites offscreen
    sta(ABSY(Sprite_Y_Position));
    sta(ABSY(((Sprite_Y_Position) + (12))));
    JMP(SOfs);
}
void SOfs() {
    _debug("SOfs", __FILE__, __LINE__);
    // move out and back into stack
    pla();
    pha();
    // check d2
    anda(IMM(0b100));
    BEQ(SOfs2);
    // if d2 was set, move second and
    lda(IMM(0xf8));
    // fifth sprites offscreen
    sta(ABSY(((Sprite_Y_Position) + (4))));
    sta(ABSY(((Sprite_Y_Position) + (16))));
    JMP(SOfs2);
}
void SOfs2() {
    _debug("SOfs2", __FILE__, __LINE__);
    // get from stack
    pla();
    // check d1
    anda(IMM(0b10));
    BEQ(ExSPl);
    // if d1 was set, move third and
    lda(IMM(0xf8));
    // sixth sprites offscreen
    sta(ABSY(((Sprite_Y_Position) + (8))));
    sta(ABSY(((Sprite_Y_Position) + (20))));
    JMP(ExSPl);
}
void ExSPl() {
    _debug("ExSPl", __FILE__, __LINE__);
    // get enemy object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void DrawBubble() {
    _debug("DrawBubble", __FILE__, __LINE__);
    // if player's vertical high position
    ldy(ABS(Player_Y_HighPos));
    // not within screen, skip all of this
    dey();
    BNE(ExDBub);
    // check air bubble's offscreen bits
    lda(ABS(Bubble_OffscreenBits));
    anda(IMM(0b1000));
    // if bit set, branch to leave
    BNE(ExDBub);
    // get air bubble's OAM data offset
    ldy(ABSX(Bubble_SprDataOffset));
    // get relative horizontal coordinate
    lda(ABS(Bubble_Rel_XPos));
    // store as X coordinate here
    sta(ABSY(Sprite_X_Position));
    // get relative vertical coordinate
    lda(ABS(Bubble_Rel_YPos));
    // store as Y coordinate here
    sta(ABSY(Sprite_Y_Position));
    lda(IMM(0x74));
    // put air bubble tile into OAM data
    sta(ABSY(Sprite_Tilenumber));
    lda(IMM(0x2));
    // set attribute byte
    sta(ABSY(Sprite_Attributes));
    JMP(ExDBub);
}
void ExDBub() {
    _debug("ExDBub", __FILE__, __LINE__);
    // leave
    return;
}
void PlayerGfxHandler() {
    _debug("PlayerGfxHandler", __FILE__, __LINE__);
    // if player's injured invincibility timer
    lda(ABS(InjuryTimer));
    // not set, skip checkpoint and continue code
    BEQ(CntPl);
    lda(ABS(FrameCounter));
    // otherwise check frame counter and branch
    lsr();
    // to leave on every other frame (when d0 is set)
    BCS(ExPGH);
    JMP(CntPl);
}
void CntPl() {
    _debug("CntPl", __FILE__, __LINE__);
    // if executing specific game engine routine,
    lda(ABS(GameEngineSubroutine));
    // branch ahead to some other part
    cmp(IMM(0xb));
    BEQ(PlayerKilled);
    // if grow/shrink flag set
    lda(ABS(PlayerChangeSizeFlag));
    // then branch to some other code
    BNE(DoChangeSize);
    // if swimming flag set, branch to
    ldy(ABS(SwimmingFlag));
    // different part, do not return
    BEQ(FindPlayerAction);
    lda(ABS(Player_State));
    // if player status normal,
    cmp(IMM(0x0));
    // branch and do not return
    BEQ(FindPlayerAction);
    // otherwise jump and return
    JSR(FindPlayerAction);
    lda(ABS(FrameCounter));
    // check frame counter for d2 set (8 frames every
    anda(IMM(0b100));
    // eighth frame), and branch if set to leave
    BNE(ExPGH);
    // initialize X to zero
    tax();
    // get player sprite data offset
    ldy(ABS(Player_SprDataOffset));
    // get player's facing direction
    lda(ABS(PlayerFacingDir));
    lsr();
    // if player facing to the right, use current offset
    BCS(SwimKT);
    iny();
    // otherwise move to next OAM data
    iny();
    iny();
    iny();
    JMP(SwimKT);
}
void SwimKT() {
    _debug("SwimKT", __FILE__, __LINE__);
    // check player's size
    lda(ABS(PlayerSize));
    // if big, use first tile
    BEQ(BigKTS);
    // check tile number of seventh/eighth sprite
    lda(ABSY(((Sprite_Tilenumber) + (24))));
    // against tile number in player graphics table
    cmp(ABS(SwimTileRepOffset));
    // if spr7/spr8 tile number = value, branch to leave
    BEQ(ExPGH);
    // otherwise increment X for second tile
    inx();
    JMP(BigKTS);
}
void BigKTS() {
    _debug("BigKTS", __FILE__, __LINE__);
    // overwrite tile number in sprite 7/8
    lda(ABSX(0x8000+offsetof(G, SwimKickTileNum)));
    // to animate player's feet when swimming
    sta(ABSY(((Sprite_Tilenumber) + (24))));
    JMP(ExPGH);
}
void ExPGH() {
    _debug("ExPGH", __FILE__, __LINE__);
    // then leave
    return;
}
void FindPlayerAction() {
    _debug("FindPlayerAction", __FILE__, __LINE__);
    // find proper offset to graphics table by player's actions
    JSR(ProcessPlayerAction);
    // draw player, then process for fireball throwing
    JMP(PlayerGfxProcessing);
    JMP(DoChangeSize);
}
void DoChangeSize() {
    _debug("DoChangeSize", __FILE__, __LINE__);
    // find proper offset to graphics table for grow/shrink
    JSR(HandleChangeSize);
    // draw player, then process for fireball throwing
    JMP(PlayerGfxProcessing);
    JMP(PlayerKilled);
}
void PlayerKilled() {
    _debug("PlayerKilled", __FILE__, __LINE__);
    // load offset for player killed
    ldy(IMM(0xe));
    // get offset to graphics table
    lda(ABSY(0x8000+offsetof(G, PlayerGfxTblOffsets)));
    JMP(PlayerGfxProcessing);
}
void PlayerGfxProcessing() {
    _debug("PlayerGfxProcessing", __FILE__, __LINE__);
    // store offset to graphics table here
    sta(ABS(PlayerGfxOffset));
    lda(IMM(0x4));
    // draw player based on offset loaded
    JSR(RenderPlayerSub);
    // set horizontal flip bits as necessary
    JSR(ChkForPlayerAttrib);
    lda(ABS(FireballThrowingTimer));
    // if fireball throw timer not set, skip to the end
    BEQ(PlayerOffscreenChk);
    // set value to initialize by default
    ldy(IMM(0x0));
    // get animation frame timer
    lda(ABS(PlayerAnimTimer));
    // compare to fireball throw timer
    cmp(ABS(FireballThrowingTimer));
    // initialize fireball throw timer
    sty(ABS(FireballThrowingTimer));
    // if animation frame timer => fireball throw timer skip to end
    BCS(PlayerOffscreenChk);
    // otherwise store animation timer into fireball throw timer
    sta(ABS(FireballThrowingTimer));
    // load offset for throwing
    ldy(IMM(0x7));
    // get offset to graphics table
    lda(ABSY(0x8000+offsetof(G, PlayerGfxTblOffsets)));
    // store it for use later
    sta(ABS(PlayerGfxOffset));
    // set to update four sprite rows by default
    ldy(IMM(0x4));
    lda(ABS(Player_X_Speed));
    // check for horizontal speed or left/right button press
    ora(ABS(Left_Right_Buttons));
    // if no speed or button press, branch using set value in Y
    BEQ(SUpdR);
    // otherwise set to update only three sprite rows
    dey();
    JMP(SUpdR);
}
void SUpdR() {
    _debug("SUpdR", __FILE__, __LINE__);
    // save in A for use
    tya();
    // in sub, draw player object again
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}
void PlayerOffscreenChk() {
    _debug("PlayerOffscreenChk", __FILE__, __LINE__);
    // get player's offscreen bits
    lda(ABS(Player_OffscreenBits));
    lsr();
    // move vertical bits to low nybble
    lsr();
    lsr();
    lsr();
    // store here
    sta(ABS(0x0));
    // check all four rows of player sprites
    ldx(IMM(0x3));
    // get player's sprite data offset
    lda(ABS(Player_SprDataOffset));
    clc();
    // add 24 bytes to start at bottom row
    adc(IMM(0x18));
    // set as offset here
    tay();
    JMP(PROfsLoop);
}
void PROfsLoop() {
    _debug("PROfsLoop", __FILE__, __LINE__);
    // load offscreen Y coordinate just in case
    lda(IMM(0xf8));
    // shift bit into carry
    lsr(ABS(0x0));
    // if bit not set, skip, do not move sprites
    BCC(NPROffscr);
    // otherwise dump offscreen Y coordinate into sprite data
    JSR(DumpTwoSpr);
    JMP(NPROffscr);
}
void NPROffscr() {
    _debug("NPROffscr", __FILE__, __LINE__);
    tya();
    // subtract eight bytes to do
    sec();
    // next row up
    sbc(IMM(0x8));
    tay();
    // decrement row counter
    dex();
    // do this until all sprite rows are checked
    BPL(PROfsLoop);
    // then we are done!
    return;
}
void DrawPlayer_Intermediate() {
    _debug("DrawPlayer_Intermediate", __FILE__, __LINE__);
    // store data into zero page memory
    ldx(IMM(0x5));
    JMP(PIntLoop);
}
void PIntLoop() {
    _debug("PIntLoop", __FILE__, __LINE__);
    // load data to display player as he always
    lda(ABSX(0x8000+offsetof(G, IntermediatePlayerData)));
    // appears on world/lives display
    sta(ABSX(0x2));
    dex();
    // do this until all data is loaded
    BPL(PIntLoop);
    // load offset for small standing
    ldx(IMM(0xb8));
    // load sprite data offset
    ldy(IMM(0x4));
    // draw player accordingly
    JSR(DrawPlayerLoop);
    // get empty sprite attributes
    lda(ABS(((Sprite_Attributes) + (36))));
    // set horizontal flip bit for bottom-right sprite
    ora(IMM(0b1000000));
    // store and leave
    sta(ABS(((Sprite_Attributes) + (32))));
    return;
}
// $00-$01 - used to hold tile numbers, $00 also used to hold upper extent of animation frames
// $02 - vertical position
// $03 - facing direction, used as horizontal flip control
// $04 - attributes
// $05 - horizontal position
// $07 - number of rows to draw
// these also used in IntermediatePlayerData
void RenderPlayerSub() {
    _debug("RenderPlayerSub", __FILE__, __LINE__);
    // store number of rows of sprites to draw
    sta(ABS(0x7));
    lda(ABS(Player_Rel_XPos));
    // store player's relative horizontal position
    sta(ABS(Player_Pos_ForScroll));
    // store it here also
    sta(ABS(0x5));
    lda(ABS(Player_Rel_YPos));
    // store player's vertical position
    sta(ABS(0x2));
    lda(ABS(PlayerFacingDir));
    // store player's facing direction
    sta(ABS(0x3));
    lda(ABS(Player_SprAttrib));
    // store player's sprite attributes
    sta(ABS(0x4));
    // load graphics table offset
    ldx(ABS(PlayerGfxOffset));
    // get player's sprite data offset
    ldy(ABS(Player_SprDataOffset));
    JMP(DrawPlayerLoop);
}
void DrawPlayerLoop() {
    _debug("DrawPlayerLoop", __FILE__, __LINE__);
    // load player's left side
    lda(ABSX(0x8000+offsetof(G, PlayerGraphicsTable)));
    sta(ABS(0x0));
    // now load right side
    lda(ABSX(((0x8000+offsetof(G, PlayerGraphicsTable)) + (1))));
    JSR(DrawOneSpriteRow);
    // decrement rows of sprites to draw
    dec(ABS(0x7));
    // do this until all rows are drawn
    BNE(DrawPlayerLoop);
    return;
}
void ProcessPlayerAction() {
    _debug("ProcessPlayerAction", __FILE__, __LINE__);
    // get player's state
    lda(ABS(Player_State));
    cmp(IMM(0x3));
    // if climbing, branch here
    BEQ(ActionClimbing);
    cmp(IMM(0x2));
    // if falling, branch here
    BEQ(ActionFalling);
    cmp(IMM(0x1));
    // if not jumping, branch here
    BNE(ProcOnGroundActs);
    lda(ABS(SwimmingFlag));
    // if swimming flag set, branch elsewhere
    BNE(ActionSwimming);
    // load offset for crouching
    ldy(IMM(0x6));
    // get crouching flag
    lda(ABS(CrouchingFlag));
    // if set, branch to get offset for graphics table
    BNE(NonAnimatedActs);
    // otherwise load offset for jumping
    ldy(IMM(0x0));
    // go to get offset to graphics table
    JMP(NonAnimatedActs);
    JMP(ProcOnGroundActs);
}
void ProcOnGroundActs() {
    _debug("ProcOnGroundActs", __FILE__, __LINE__);
    // load offset for crouching
    ldy(IMM(0x6));
    // get crouching flag
    lda(ABS(CrouchingFlag));
    // if set, branch to get offset for graphics table
    BNE(NonAnimatedActs);
    // load offset for standing
    ldy(IMM(0x2));
    // check player's horizontal speed
    lda(ABS(Player_X_Speed));
    // and left/right controller bits
    ora(ABS(Left_Right_Buttons));
    // if no speed or buttons pressed, use standing offset
    BEQ(NonAnimatedActs);
    // load walking/running speed
    lda(ABS(Player_XSpeedAbsolute));
    cmp(IMM(0x9));
    // if less than a certain amount, branch, too slow to skid
    BCC(ActionWalkRun);
    // otherwise check to see if moving direction
    lda(ABS(Player_MovingDir));
    // and facing direction are the same
    anda(ABS(PlayerFacingDir));
    // if moving direction = facing direction, branch, don't skid
    BNE(ActionWalkRun);
    // otherwise increment to skid offset ($03)
    iny();
    JMP(NonAnimatedActs);
}
void NonAnimatedActs() {
    _debug("NonAnimatedActs", __FILE__, __LINE__);
    // do a sub here to get offset adder for graphics table
    JSR(GetGfxOffsetAdder);
    lda(IMM(0x0));
    // initialize animation frame control
    sta(ABS(PlayerAnimCtrl));
    // load offset to graphics table using size as offset
    lda(ABSY(0x8000+offsetof(G, PlayerGfxTblOffsets)));
    return;
}
void ActionFalling() {
    _debug("ActionFalling", __FILE__, __LINE__);
    // load offset for walking/running
    ldy(IMM(0x4));
    // get offset to graphics table
    JSR(GetGfxOffsetAdder);
    // execute instructions for falling state
    JMP(GetCurrentAnimOffset);
    JMP(ActionWalkRun);
}
void ActionWalkRun() {
    _debug("ActionWalkRun", __FILE__, __LINE__);
    // load offset for walking/running
    ldy(IMM(0x4));
    // get offset to graphics table
    JSR(GetGfxOffsetAdder);
    // execute instructions for normal state
    JMP(FourFrameExtent);
    JMP(ActionClimbing);
}
void ActionClimbing() {
    _debug("ActionClimbing", __FILE__, __LINE__);
    // load offset for climbing
    ldy(IMM(0x5));
    // check player's vertical speed
    lda(ABS(Player_Y_Speed));
    // if no speed, branch, use offset as-is
    BEQ(NonAnimatedActs);
    // otherwise get offset for graphics table
    JSR(GetGfxOffsetAdder);
    // then skip ahead to more code
    JMP(ThreeFrameExtent);
    JMP(ActionSwimming);
}
void ActionSwimming() {
    _debug("ActionSwimming", __FILE__, __LINE__);
    // load offset for swimming
    ldy(IMM(0x1));
    JSR(GetGfxOffsetAdder);
    // check jump/swim timer
    lda(ABS(JumpSwimTimer));
    // and animation frame control
    ora(ABS(PlayerAnimCtrl));
    // if any one of these set, branch ahead
    BNE(FourFrameExtent);
    lda(ABS(A_B_Buttons));
    // check for A button pressed
    asl();
    // branch to same place if A button pressed
    BCS(FourFrameExtent);
    JMP(GetCurrentAnimOffset);
}
void GetCurrentAnimOffset() {
    _debug("GetCurrentAnimOffset", __FILE__, __LINE__);
    // get animation frame control
    lda(ABS(PlayerAnimCtrl));
    // jump to get proper offset to graphics table
    JMP(GetOffsetFromAnimCtrl);
    JMP(FourFrameExtent);
}
void FourFrameExtent() {
    _debug("FourFrameExtent", __FILE__, __LINE__);
    // load upper extent for frame control
    lda(IMM(0x3));
    // jump to get offset and animate player object
    JMP(AnimationControl);
    JMP(ThreeFrameExtent);
}
void ThreeFrameExtent() {
    _debug("ThreeFrameExtent", __FILE__, __LINE__);
    // load upper extent for frame control for climbing
    lda(IMM(0x2));
    JMP(AnimationControl);
}
void AnimationControl() {
    _debug("AnimationControl", __FILE__, __LINE__);
    // store upper extent here
    sta(ABS(0x0));
    // get proper offset to graphics table
    JSR(GetCurrentAnimOffset);
    // save offset to stack
    pha();
    // load animation frame timer
    lda(ABS(PlayerAnimTimer));
    // branch if not expired
    BNE(ExAnimC);
    // get animation frame timer amount
    lda(ABS(PlayerAnimTimerSet));
    // and set timer accordingly
    sta(ABS(PlayerAnimTimer));
    lda(ABS(PlayerAnimCtrl));
    // add one to animation frame control
    clc();
    adc(IMM(0x1));
    // compare to upper extent
    cmp(ABS(0x0));
    // if frame control + 1 < upper extent, use as next
    BCC(SetAnimC);
    // otherwise initialize frame control
    lda(IMM(0x0));
    JMP(SetAnimC);
}
void SetAnimC() {
    _debug("SetAnimC", __FILE__, __LINE__);
    // store as new animation frame control
    sta(ABS(PlayerAnimCtrl));
    JMP(ExAnimC);
}
void ExAnimC() {
    _debug("ExAnimC", __FILE__, __LINE__);
    // get offset to graphics table from stack and leave
    pla();
    return;
}
void GetGfxOffsetAdder() {
    _debug("GetGfxOffsetAdder", __FILE__, __LINE__);
    // get player's size
    lda(ABS(PlayerSize));
    // if player big, use current offset as-is
    BEQ(SzOfs);
    // for big player
    tya();
    // otherwise add eight bytes to offset
    clc();
    // for small player
    adc(IMM(0x8));
    tay();
    JMP(SzOfs);
}
void SzOfs() {
    _debug("SzOfs", __FILE__, __LINE__);
    // go back
    return;
}
void HandleChangeSize() {
    _debug("HandleChangeSize", __FILE__, __LINE__);
    // get animation frame control
    ldy(ABS(PlayerAnimCtrl));
    lda(ABS(FrameCounter));
    // get frame counter and execute this code every
    anda(IMM(0b11));
    // fourth frame, otherwise branch ahead
    BNE(GorSLog);
    // increment frame control
    iny();
    // check for preset upper extent
    cpy(IMM(0xa));
    // if not there yet, skip ahead to use
    BCC(CSzNext);
    // otherwise initialize both grow/shrink flag
    ldy(IMM(0x0));
    // and animation frame control
    sty(ABS(PlayerChangeSizeFlag));
    JMP(CSzNext);
}
void CSzNext() {
    _debug("CSzNext", __FILE__, __LINE__);
    // store proper frame control
    sty(ABS(PlayerAnimCtrl));
    JMP(GorSLog);
}
void GorSLog() {
    _debug("GorSLog", __FILE__, __LINE__);
    // get player's size
    lda(ABS(PlayerSize));
    // if player small, skip ahead to next part
    BNE(ShrinkPlayer);
    // get offset adder based on frame control as offset
    lda(ABSY(0x8000+offsetof(G, ChangeSizeOffsetAdder)));
    // load offset for player growing
    ldy(IMM(0xf));
    JMP(GetOffsetFromAnimCtrl);
}
void GetOffsetFromAnimCtrl() {
    _debug("GetOffsetFromAnimCtrl", __FILE__, __LINE__);
    // multiply animation frame control
    asl();
    // by eight to get proper amount
    asl();
    // to add to our offset
    asl();
    // add to offset to graphics table
    adc(ABSY(0x8000+offsetof(G, PlayerGfxTblOffsets)));
    // and return with result in A
    return;
}
void ShrinkPlayer() {
    _debug("ShrinkPlayer", __FILE__, __LINE__);
    // add ten bytes to frame control as offset
    tya();
    clc();
    // this thing apparently uses two of the swimming frames
    adc(IMM(0xa));
    // to draw the player shrinking
    tax();
    // load offset for small player swimming
    ldy(IMM(0x9));
    // get what would normally be offset adder
    lda(ABSX(0x8000+offsetof(G, ChangeSizeOffsetAdder)));
    // and branch to use offset if nonzero
    BNE(ShrPlF);
    // otherwise load offset for big player swimming
    ldy(IMM(0x1));
    JMP(ShrPlF);
}
void ShrPlF() {
    _debug("ShrPlF", __FILE__, __LINE__);
    // get offset to graphics table based on offset loaded
    lda(ABSY(0x8000+offsetof(G, PlayerGfxTblOffsets)));
    // and leave
    return;
}
void ChkForPlayerAttrib() {
    _debug("ChkForPlayerAttrib", __FILE__, __LINE__);
    // get sprite data offset
    ldy(ABS(Player_SprDataOffset));
    lda(ABS(GameEngineSubroutine));
    // if executing specific game engine routine,
    cmp(IMM(0xb));
    // branch to change third and fourth row OAM attributes
    BEQ(KilledAtt);
    // get graphics table offset
    lda(ABS(PlayerGfxOffset));
    cmp(IMM(0x50));
    // if crouch offset, either standing offset,
    BEQ(C_S_IGAtt);
    // or intermediate growing offset,
    cmp(IMM(0xb8));
    // go ahead and execute code to change
    BEQ(C_S_IGAtt);
    // fourth row OAM attributes only
    cmp(IMM(0xc0));
    BEQ(C_S_IGAtt);
    cmp(IMM(0xc8));
    // if none of these, branch to leave
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}
void KilledAtt() {
    _debug("KilledAtt", __FILE__, __LINE__);
    lda(ABSY(((Sprite_Attributes) + (16))));
    // mask out horizontal and vertical flip bits
    anda(IMM(0b111111));
    // for third row sprites and save
    sta(ABSY(((Sprite_Attributes) + (16))));
    lda(ABSY(((Sprite_Attributes) + (20))));
    anda(IMM(0b111111));
    // set horizontal flip bit for second
    ora(IMM(0b1000000));
    // sprite in the third row
    sta(ABSY(((Sprite_Attributes) + (20))));
    JMP(C_S_IGAtt);
}
void C_S_IGAtt() {
    _debug("C_S_IGAtt", __FILE__, __LINE__);
    lda(ABSY(((Sprite_Attributes) + (24))));
    // mask out horizontal and vertical flip bits
    anda(IMM(0b111111));
    // for fourth row sprites and save
    sta(ABSY(((Sprite_Attributes) + (24))));
    lda(ABSY(((Sprite_Attributes) + (28))));
    anda(IMM(0b111111));
    // set horizontal flip bit for second
    ora(IMM(0b1000000));
    // sprite in the fourth row
    sta(ABSY(((Sprite_Attributes) + (28))));
    JMP(ExPlyrAt);
}
void ExPlyrAt() {
    _debug("ExPlyrAt", __FILE__, __LINE__);
    // leave
    return;
}
// $00 - used in adding to get proper offset
void RelativePlayerPosition() {
    _debug("RelativePlayerPosition", __FILE__, __LINE__);
    // set offsets for relative cooordinates
    ldx(IMM(0x0));
    // routine to correspond to player object
    ldy(IMM(0x0));
    // get the coordinates
    JMP(RelWOfs);
    JMP(RelativeBubblePosition);
}
void RelativeBubblePosition() {
    _debug("RelativeBubblePosition", __FILE__, __LINE__);
    // set for air bubble offsets
    ldy(IMM(0x1));
    // modify X to get proper air bubble offset
    JSR(GetProperObjOffset);
    ldy(IMM(0x3));
    // get the coordinates
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}
void RelativeFireballPosition() {
    _debug("RelativeFireballPosition", __FILE__, __LINE__);
    // set for fireball offsets
    ldy(IMM(0x0));
    // modify X to get proper fireball offset
    JSR(GetProperObjOffset);
    ldy(IMM(0x2));
    JMP(RelWOfs);
}
void RelWOfs() {
    _debug("RelWOfs", __FILE__, __LINE__);
    // get the coordinates
    JSR(GetObjRelativePosition);
    // return original offset
    ldx(ABS(ObjectOffset));
    // leave
    return;
}
void RelativeMiscPosition() {
    _debug("RelativeMiscPosition", __FILE__, __LINE__);
    // set for misc object offsets
    ldy(IMM(0x2));
    // modify X to get proper misc object offset
    JSR(GetProperObjOffset);
    ldy(IMM(0x6));
    // get the coordinates
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}
void RelativeEnemyPosition() {
    _debug("RelativeEnemyPosition", __FILE__, __LINE__);
    // get coordinates of enemy object
    lda(IMM(0x1));
    // relative to the screen
    ldy(IMM(0x1));
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}
void RelativeBlockPosition() {
    _debug("RelativeBlockPosition", __FILE__, __LINE__);
    // get coordinates of one block object
    lda(IMM(0x9));
    // relative to the screen
    ldy(IMM(0x4));
    JSR(VariableObjOfsRelPos);
    // adjust offset for other block object if any
    inx();
    inx();
    lda(IMM(0x9));
    // adjust other and get coordinates for other one
    iny();
    JMP(VariableObjOfsRelPos);
}
void VariableObjOfsRelPos() {
    _debug("VariableObjOfsRelPos", __FILE__, __LINE__);
    // store value to add to A here
    stx(ABS(0x0));
    clc();
    // add A to value stored
    adc(ABS(0x0));
    // use as enemy offset
    tax();
    JSR(GetObjRelativePosition);
    // reload old object offset and leave
    ldx(ABS(ObjectOffset));
    return;
}
void GetObjRelativePosition() {
    _debug("GetObjRelativePosition", __FILE__, __LINE__);
    // load vertical coordinate low
    lda(ABSX(SprObject_Y_Position));
    // store here
    sta(ABSY(SprObject_Rel_YPos));
    // load horizontal coordinate
    lda(ABSX(SprObject_X_Position));
    // subtract left edge coordinate
    sec();
    sbc(ABS(ScreenLeft_X_Pos));
    // store result here
    sta(ABSY(SprObject_Rel_XPos));
    return;
}
// $00 - used as temp variable to hold offscreen bits
void GetPlayerOffscreenBits() {
    _debug("GetPlayerOffscreenBits", __FILE__, __LINE__);
    // set offsets for player-specific variables
    ldx(IMM(0x0));
    // and get offscreen information about player
    ldy(IMM(0x0));
    JMP(GetOffScreenBitsSet);
    JMP(GetFireballOffscreenBits);
}
void GetFireballOffscreenBits() {
    _debug("GetFireballOffscreenBits", __FILE__, __LINE__);
    // set for fireball offsets
    ldy(IMM(0x0));
    // modify X to get proper fireball offset
    JSR(GetProperObjOffset);
    // set other offset for fireball's offscreen bits
    ldy(IMM(0x2));
    // and get offscreen information about fireball
    JMP(GetOffScreenBitsSet);
    JMP(GetBubbleOffscreenBits);
}
void GetBubbleOffscreenBits() {
    _debug("GetBubbleOffscreenBits", __FILE__, __LINE__);
    // set for air bubble offsets
    ldy(IMM(0x1));
    // modify X to get proper air bubble offset
    JSR(GetProperObjOffset);
    // set other offset for airbubble's offscreen bits
    ldy(IMM(0x3));
    // and get offscreen information about air bubble
    JMP(GetOffScreenBitsSet);
    JMP(GetMiscOffscreenBits);
}
void GetMiscOffscreenBits() {
    _debug("GetMiscOffscreenBits", __FILE__, __LINE__);
    // set for misc object offsets
    ldy(IMM(0x2));
    // modify X to get proper misc object offset
    JSR(GetProperObjOffset);
    // set other offset for misc object's offscreen bits
    ldy(IMM(0x6));
    // and get offscreen information about misc object
    JMP(GetOffScreenBitsSet);
    JMP(GetProperObjOffset);
}
void GetProperObjOffset() {
    _debug("GetProperObjOffset", __FILE__, __LINE__);
    // move offset to A
    txa();
    clc();
    // add amount of bytes to offset depending on setting in Y
    adc(ABSY(0x8000+offsetof(G, ObjOffsetData)));
    // put back in X and leave
    tax();
    return;
}
void GetEnemyOffscreenBits() {
    _debug("GetEnemyOffscreenBits", __FILE__, __LINE__);
    // set A to add 1 byte in order to get enemy offset
    lda(IMM(0x1));
    // set Y to put offscreen bits in Enemy_OffscreenBits
    ldy(IMM(0x1));
    JMP(SetOffscrBitsOffset);
    JMP(GetBlockOffscreenBits);
}
void GetBlockOffscreenBits() {
    _debug("GetBlockOffscreenBits", __FILE__, __LINE__);
    // set A to add 9 bytes in order to get block obj offset
    lda(IMM(0x9));
    // set Y to put offscreen bits in Block_OffscreenBits
    ldy(IMM(0x4));
    JMP(SetOffscrBitsOffset);
}
void SetOffscrBitsOffset() {
    _debug("SetOffscrBitsOffset", __FILE__, __LINE__);
    stx(ABS(0x0));
    // add contents of X to A to get
    clc();
    // appropriate offset, then give back to X
    adc(ABS(0x0));
    tax();
    JMP(GetOffScreenBitsSet);
}
void GetOffScreenBitsSet() {
    _debug("GetOffScreenBitsSet", __FILE__, __LINE__);
    // save offscreen bits offset to stack for now
    tya();
    pha();
    JSR(RunOffscrBitsSubs);
    // move low nybble to high nybble
    asl();
    asl();
    asl();
    asl();
    // mask together with previously saved low nybble
    ora(ABS(0x0));
    // store both here
    sta(ABS(0x0));
    // get offscreen bits offset from stack
    pla();
    tay();
    // get value here and store elsewhere
    lda(ABS(0x0));
    sta(ABSY(SprObject_OffscrBits));
    ldx(ABS(ObjectOffset));
    return;
}
void RunOffscrBitsSubs() {
    _debug("RunOffscrBitsSubs", __FILE__, __LINE__);
    // do subroutine here
    JSR(GetXOffscreenBits);
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // store here
    sta(ABS(0x0));
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}
void GetXOffscreenBits() {
    _debug("GetXOffscreenBits", __FILE__, __LINE__);
    // save position in buffer to here
    stx(ABS(0x4));
    // start with right side of screen
    ldy(IMM(0x1));
    JMP(XOfsLoop);
}
void XOfsLoop() {
    _debug("XOfsLoop", __FILE__, __LINE__);
    // get pixel coordinate of edge
    lda(ABSY(ScreenEdge_X_Pos));
    // get difference between pixel coordinate of edge
    sec();
    // and pixel coordinate of object position
    sbc(ABSX(SprObject_X_Position));
    // store here
    sta(ABS(0x7));
    // get page location of edge
    lda(ABSY(ScreenEdge_PageLoc));
    // subtract from page location of object position
    sbc(ABSX(SprObject_PageLoc));
    // load offset value here
    ldx(ABSY(0x8000+offsetof(G, DefaultXOnscreenOfs)));
    cmp(IMM(0x0));
    // if beyond right edge or in front of left edge, branch
    BMI(XLdBData);
    // if not, load alternate offset value here
    ldx(ABSY(((0x8000+offsetof(G, DefaultXOnscreenOfs)) + (1))));
    cmp(IMM(0x1));
    // if one page or more to the left of either edge, branch
    BPL(XLdBData);
    // if no branching, load value here and store
    lda(IMM(0x38));
    sta(ABS(0x6));
    // load some other value and execute subroutine
    lda(IMM(0x8));
    JSR(DividePDiff);
    JMP(XLdBData);
}
void XLdBData() {
    _debug("XLdBData", __FILE__, __LINE__);
    // get bits here
    lda(ABSX(0x8000+offsetof(G, XOffscreenBitsData)));
    // reobtain position in buffer
    ldx(ABS(0x4));
    // if bits not zero, branch to leave
    cmp(IMM(0x0));
    BNE(ExXOfsBS);
    // otherwise, do left side of screen now
    dey();
    // branch if not already done with left side
    BPL(XOfsLoop);
    JMP(ExXOfsBS);
}
void ExXOfsBS() {
    _debug("ExXOfsBS", __FILE__, __LINE__);
    return;
}
void GetYOffscreenBits() {
    _debug("GetYOffscreenBits", __FILE__, __LINE__);
    // save position in buffer to here
    stx(ABS(0x4));
    // start with top of screen
    ldy(IMM(0x1));
    JMP(YOfsLoop);
}
void YOfsLoop() {
    _debug("YOfsLoop", __FILE__, __LINE__);
    // load coordinate for edge of vertical unit
    lda(ABSY(0x8000+offsetof(G, HighPosUnitData)));
    sec();
    // subtract from vertical coordinate of object
    sbc(ABSX(SprObject_Y_Position));
    // store here
    sta(ABS(0x7));
    // subtract one from vertical high byte of object
    lda(IMM(0x1));
    sbc(ABSX(SprObject_Y_HighPos));
    // load offset value here
    ldx(ABSY(0x8000+offsetof(G, DefaultYOnscreenOfs)));
    cmp(IMM(0x0));
    // if under top of the screen or beyond bottom, branch
    BMI(YLdBData);
    // if not, load alternate offset value here
    ldx(ABSY(((0x8000+offsetof(G, DefaultYOnscreenOfs)) + (1))));
    cmp(IMM(0x1));
    // if one vertical unit or more above the screen, branch
    BPL(YLdBData);
    // if no branching, load value here and store
    lda(IMM(0x20));
    sta(ABS(0x6));
    // load some other value and execute subroutine
    lda(IMM(0x4));
    JSR(DividePDiff);
    JMP(YLdBData);
}
void YLdBData() {
    _debug("YLdBData", __FILE__, __LINE__);
    // get offscreen data bits using offset
    lda(ABSX(0x8000+offsetof(G, YOffscreenBitsData)));
    // reobtain position in buffer
    ldx(ABS(0x4));
    cmp(IMM(0x0));
    // if bits not zero, branch to leave
    BNE(ExYOfsBS);
    // otherwise, do bottom of the screen now
    dey();
    BPL(YOfsLoop);
    JMP(ExYOfsBS);
}
void ExYOfsBS() {
    _debug("ExYOfsBS", __FILE__, __LINE__);
    return;
}
void DividePDiff() {
    _debug("DividePDiff", __FILE__, __LINE__);
    // store current value in A here
    sta(ABS(0x5));
    // get pixel difference
    lda(ABS(0x7));
    // compare to preset value
    cmp(ABS(0x6));
    // if pixel difference >= preset value, branch
    BCS(ExDivPD);
    // divide by eight
    lsr();
    lsr();
    lsr();
    // mask out all but 3 LSB
    anda(IMM(0x7));
    // right side of the screen or top?
    cpy(IMM(0x1));
    // if so, branch, use difference / 8 as offset
    BCS(SetOscrO);
    // if not, add value to difference / 8
    adc(ABS(0x5));
    JMP(SetOscrO);
}
void SetOscrO() {
    _debug("SetOscrO", __FILE__, __LINE__);
    // use as offset
    tax();
    JMP(ExDivPD);
}
void ExDivPD() {
    _debug("ExDivPD", __FILE__, __LINE__);
    // leave
    return;
}
// $00-$01 - tile numbers
// $02 - Y coordinate
// $03 - flip control
// $04 - sprite attributes
// $05 - X coordinate
void DrawSpriteObject() {
    _debug("DrawSpriteObject", __FILE__, __LINE__);
    // get saved flip control bits
    lda(ABS(0x3));
    lsr();
    // move d1 into carry
    lsr();
    lda(ABS(0x0));
    // if d1 not set, branch
    BCC(NoHFlip);
    // store first tile into second sprite
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    // and second into first sprite
    lda(ABS(0x1));
    sta(ABSY(Sprite_Tilenumber));
    // activate horizontal flip OAM attribute
    lda(IMM(0x40));
    // and unconditionally branch
    BNE(SetHFAt);
    JMP(NoHFlip);
}
void NoHFlip() {
    _debug("NoHFlip", __FILE__, __LINE__);
    // store first tile into first sprite
    sta(ABSY(Sprite_Tilenumber));
    // and second into second sprite
    lda(ABS(0x1));
    sta(ABSY(((Sprite_Tilenumber) + (4))));
    // clear bit for horizontal flip
    lda(IMM(0x0));
    JMP(SetHFAt);
}
void SetHFAt() {
    _debug("SetHFAt", __FILE__, __LINE__);
    // add other OAM attributes if necessary
    ora(ABS(0x4));
    // store sprite attributes
    sta(ABSY(Sprite_Attributes));
    sta(ABSY(((Sprite_Attributes) + (4))));
    // now the y coordinates
    lda(ABS(0x2));
    // note because they are
    sta(ABSY(Sprite_Y_Position));
    // side by side, they are the same
    sta(ABSY(((Sprite_Y_Position) + (4))));
    lda(ABS(0x5));
    // store x coordinate, then
    sta(ABSY(Sprite_X_Position));
    // add 8 pixels and store another to
    clc();
    // put them side by side
    adc(IMM(0x8));
    sta(ABSY(((Sprite_X_Position) + (4))));
    // add eight pixels to the next y
    lda(ABS(0x2));
    // coordinate
    clc();
    adc(IMM(0x8));
    sta(ABS(0x2));
    // add eight to the offset in Y to
    tya();
    // move to the next two sprites
    clc();
    adc(IMM(0x8));
    tay();
    // increment offset to return it to the
    inx();
    // routine that called this subroutine
    inx();
    return;
}
void SoundEngine() {
    _debug("SoundEngine", __FILE__, __LINE__);
    // are we in title screen mode?
    lda(ABS(OperMode));
    BNE(SndOn);
    // if so, disable sound and leave
    sta(ABS(SND_MASTERCTRL_REG));
    return;
}
void SndOn() {
    _debug("SndOn", __FILE__, __LINE__);
    lda(IMM(0xff));
    // disable irqs and set frame counter mode???
    sta(ABS(JOYPAD_PORT2));
    lda(IMM(0xf));
    // enable first four channels
    sta(ABS(SND_MASTERCTRL_REG));
    // is sound already in pause mode?
    lda(ABS(PauseModeFlag));
    BNE(InPause);
    // if not, check pause sfx queue
    lda(ABS(PauseSoundQueue));
    cmp(IMM(0x1));
    // if queue is empty, skip pause mode routine
    BNE(RunSoundSubroutines);
    JMP(InPause);
}
void InPause() {
    _debug("InPause", __FILE__, __LINE__);
    // check pause sfx buffer
    lda(ABS(PauseSoundBuffer));
    BNE(ContPau);
    // check pause queue
    lda(ABS(PauseSoundQueue));
    BEQ(SkipSoundSubroutines);
    // if queue full, store in buffer and activate
    sta(ABS(PauseSoundBuffer));
    // pause mode to interrupt game sounds
    sta(ABS(PauseModeFlag));
    // disable sound and clear sfx buffers
    lda(IMM(0x0));
    sta(ABS(SND_MASTERCTRL_REG));
    sta(ABS(Square1SoundBuffer));
    sta(ABS(Square2SoundBuffer));
    sta(ABS(NoiseSoundBuffer));
    lda(IMM(0xf));
    // enable sound again
    sta(ABS(SND_MASTERCTRL_REG));
    // store length of sound in pause counter
    lda(IMM(0x2a));
    sta(ABS(Squ1_SfxLenCounter));
    JMP(PTone1F);
}
void PTone1F() {
    _debug("PTone1F", __FILE__, __LINE__);
    // play first tone
    lda(IMM(0x44));
    // unconditional branch
    BNE(PTRegC);
    JMP(ContPau);
}
void ContPau() {
    _debug("ContPau", __FILE__, __LINE__);
    // check pause length left
    lda(ABS(Squ1_SfxLenCounter));
    // time to play second?
    cmp(IMM(0x24));
    BEQ(PTone2F);
    // time to play first again?
    cmp(IMM(0x1e));
    BEQ(PTone1F);
    // time to play second again?
    cmp(IMM(0x18));
    // only load regs during times, otherwise skip
    BNE(DecPauC);
    JMP(PTone2F);
}
void PTone2F() {
    _debug("PTone2F", __FILE__, __LINE__);
    // store reg contents and play the pause sfx
    lda(IMM(0x64));
    JMP(PTRegC);
}
void PTRegC() {
    _debug("PTRegC", __FILE__, __LINE__);
    ldx(IMM(0x84));
    ldy(IMM(0x7f));
    JSR(PlaySqu1Sfx);
    JMP(DecPauC);
}
void DecPauC() {
    _debug("DecPauC", __FILE__, __LINE__);
    // decrement pause sfx counter
    dec(ABS(Squ1_SfxLenCounter));
    BNE(SkipSoundSubroutines);
    // disable sound if in pause mode and
    lda(IMM(0x0));
    // not currently playing the pause sfx
    sta(ABS(SND_MASTERCTRL_REG));
    // if no longer playing pause sfx, check to see
    lda(ABS(PauseSoundBuffer));
    // if we need to be playing sound again
    cmp(IMM(0x2));
    BNE(SkipPIn);
    // clear pause mode to allow game sounds again
    lda(IMM(0x0));
    sta(ABS(PauseModeFlag));
    JMP(SkipPIn);
}
void SkipPIn() {
    _debug("SkipPIn", __FILE__, __LINE__);
    // clear pause sfx buffer
    lda(IMM(0x0));
    sta(ABS(PauseSoundBuffer));
    BEQ(SkipSoundSubroutines);
    JMP(RunSoundSubroutines);
}
void RunSoundSubroutines() {
    _debug("RunSoundSubroutines", __FILE__, __LINE__);
    // play sfx on square channel 1
    JSR(Square1SfxHandler);
    // ''  ''  '' square channel 2
    JSR(Square2SfxHandler);
    // ''  ''  '' noise channel
    JSR(NoiseSfxHandler);
    // play music on all channels
    JSR(MusicHandler);
    // clear the music queues
    lda(IMM(0x0));
    sta(ABS(AreaMusicQueue));
    sta(ABS(EventMusicQueue));
    JMP(SkipSoundSubroutines);
}
void SkipSoundSubroutines() {
    _debug("SkipSoundSubroutines", __FILE__, __LINE__);
    // clear the sound effects queues
    lda(IMM(0x0));
    sta(ABS(Square1SoundQueue));
    sta(ABS(Square2SoundQueue));
    sta(ABS(NoiseSoundQueue));
    sta(ABS(PauseSoundQueue));
    // load some sort of counter
    ldy(ABS(DAC_Counter));
    lda(ABS(AreaMusicBuffer));
    // check for specific music
    anda(IMM(0b11));
    BEQ(NoIncDAC);
    // increment and check counter
    inc(ABS(DAC_Counter));
    cpy(IMM(0x30));
    // if not there yet, just store it
    BCC(StrWave);
    JMP(NoIncDAC);
}
void NoIncDAC() {
    _debug("NoIncDAC", __FILE__, __LINE__);
    tya();
    // if we are at zero, do not decrement
    BEQ(StrWave);
    // decrement counter
    dec(ABS(DAC_Counter));
    JMP(StrWave);
}
void StrWave() {
    _debug("StrWave", __FILE__, __LINE__);
    // store into DMC load register (??)
    sty(ABS(((SND_DELTA_REG) + (1))));
    // we are done here
    return;
}
void Dump_Squ1_Regs() {
    _debug("Dump_Squ1_Regs", __FILE__, __LINE__);
    // dump the contents of X and Y into square 1's control regs
    sty(ABS(((SND_SQUARE1_REG) + (1))));
    stx(ABS(SND_SQUARE1_REG));
    return;
}
void PlaySqu1Sfx() {
    _debug("PlaySqu1Sfx", __FILE__, __LINE__);
    // do sub to set ctrl regs for square 1, then set frequency regs
    JSR(Dump_Squ1_Regs);
    JMP(SetFreq_Squ1);
}
void SetFreq_Squ1() {
    _debug("SetFreq_Squ1", __FILE__, __LINE__);
    // set frequency reg offset for square 1 sound channel
    ldx(IMM(0x0));
    JMP(Dump_Freq_Regs);
}
void Dump_Freq_Regs() {
    _debug("Dump_Freq_Regs", __FILE__, __LINE__);
    tay();
    // use previous contents of A for sound reg offset
    lda(ABSY(((0x8000+offsetof(G, FreqRegLookupTbl)) + (1))));
    // if zero, then do not load
    BEQ(NoTone);
    // first byte goes into LSB of frequency divider
    sta(ABSX(((SND_REGISTER) + (2))));
    // second byte goes into 3 MSB plus extra bit for
    lda(ABSY(0x8000+offsetof(G, FreqRegLookupTbl)));
    // length counter
    ora(IMM(0b1000));
    sta(ABSX(((SND_REGISTER) + (3))));
    JMP(NoTone);
}
void NoTone() {
    _debug("NoTone", __FILE__, __LINE__);
    return;
}
void Dump_Sq2_Regs() {
    _debug("Dump_Sq2_Regs", __FILE__, __LINE__);
    // dump the contents of X and Y into square 2's control regs
    stx(ABS(SND_SQUARE2_REG));
    sty(ABS(((SND_SQUARE2_REG) + (1))));
    return;
}
void PlaySqu2Sfx() {
    _debug("PlaySqu2Sfx", __FILE__, __LINE__);
    // do sub to set ctrl regs for square 2, then set frequency regs
    JSR(Dump_Sq2_Regs);
    JMP(SetFreq_Squ2);
}
void SetFreq_Squ2() {
    _debug("SetFreq_Squ2", __FILE__, __LINE__);
    // set frequency reg offset for square 2 sound channel
    ldx(IMM(0x4));
    // unconditional branch
    BNE(Dump_Freq_Regs);
    JMP(SetFreq_Tri);
}
void SetFreq_Tri() {
    _debug("SetFreq_Tri", __FILE__, __LINE__);
    // set frequency reg offset for triangle sound channel
    ldx(IMM(0x8));
    // unconditional branch
    BNE(Dump_Freq_Regs);
    JMP(PlayFlagpoleSlide);
}
void PlayFlagpoleSlide() {
    _debug("PlayFlagpoleSlide", __FILE__, __LINE__);
    // store length of flagpole sound
    lda(IMM(0x40));
    sta(ABS(Squ1_SfxLenCounter));
    // load part of reg contents for flagpole sound
    lda(IMM(0x62));
    JSR(SetFreq_Squ1);
    // now load the rest
    ldx(IMM(0x99));
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}
void PlaySmallJump() {
    _debug("PlaySmallJump", __FILE__, __LINE__);
    // branch here for small mario jumping sound
    lda(IMM(0x26));
    BNE(JumpRegContents);
    JMP(PlayBigJump);
}
void PlayBigJump() {
    _debug("PlayBigJump", __FILE__, __LINE__);
    // branch here for big mario jumping sound
    lda(IMM(0x18));
    JMP(JumpRegContents);
}
void JumpRegContents() {
    _debug("JumpRegContents", __FILE__, __LINE__);
    // note that small and big jump borrow each others' reg contents
    ldx(IMM(0x82));
    // anyway, this loads the first part of mario's jumping sound
    ldy(IMM(0xa7));
    JSR(PlaySqu1Sfx);
    // store length of sfx for both jumping sounds
    lda(IMM(0x28));
    // then continue on here
    sta(ABS(Squ1_SfxLenCounter));
    JMP(ContinueSndJump);
}
void ContinueSndJump() {
    _debug("ContinueSndJump", __FILE__, __LINE__);
    // jumping sounds seem to be composed of three parts
    lda(ABS(Squ1_SfxLenCounter));
    // check for time to play second part yet
    cmp(IMM(0x25));
    BNE(N2Prt);
    // load second part
    ldx(IMM(0x5f));
    ldy(IMM(0xf6));
    // unconditional branch
    BNE(DmpJpFPS);
    JMP(N2Prt);
}
void N2Prt() {
    _debug("N2Prt", __FILE__, __LINE__);
    // check for third part
    cmp(IMM(0x20));
    BNE(DecJpFPS);
    // load third part
    ldx(IMM(0x48));
    JMP(FPS2nd);
}
void FPS2nd() {
    _debug("FPS2nd", __FILE__, __LINE__);
    // the flagpole slide sound shares part of third part
    ldy(IMM(0xbc));
    JMP(DmpJpFPS);
}
void DmpJpFPS() {
    _debug("DmpJpFPS", __FILE__, __LINE__);
    JSR(Dump_Squ1_Regs);
    // unconditional branch outta here
    BNE(DecJpFPS);
    JMP(PlayFireballThrow);
}
void PlayFireballThrow() {
    _debug("PlayFireballThrow", __FILE__, __LINE__);
    lda(IMM(0x5));
    // load reg contents for fireball throw sound
    ldy(IMM(0x99));
    // unconditional branch
    BNE(Fthrow);
    JMP(PlayBump);
}
void PlayBump() {
    _debug("PlayBump", __FILE__, __LINE__);
    // load length of sfx and reg contents for bump sound
    lda(IMM(0xa));
    ldy(IMM(0x93));
    JMP(Fthrow);
}
void Fthrow() {
    _debug("Fthrow", __FILE__, __LINE__);
    // the fireball sound shares reg contents with the bump sound
    ldx(IMM(0x9e));
    sta(ABS(Squ1_SfxLenCounter));
    // load offset for bump sound
    lda(IMM(0xc));
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}
void ContinueBumpThrow() {
    _debug("ContinueBumpThrow", __FILE__, __LINE__);
    // check for second part of bump sound
    lda(ABS(Squ1_SfxLenCounter));
    cmp(IMM(0x6));
    BNE(DecJpFPS);
    // load second part directly
    lda(IMM(0xbb));
    sta(ABS(((SND_SQUARE1_REG) + (1))));
    JMP(DecJpFPS);
}
void DecJpFPS() {
    _debug("DecJpFPS", __FILE__, __LINE__);
    // unconditional branch
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}
void Square1SfxHandler() {
    _debug("Square1SfxHandler", __FILE__, __LINE__);
    // check for sfx in queue
    ldy(ABS(Square1SoundQueue));
    BEQ(CheckSfx1Buffer);
    // if found, put in buffer
    sty(ABS(Square1SoundBuffer));
    // small jump
    BMI(PlaySmallJump);
    lsr(ABS(Square1SoundQueue));
    // big jump
    BCS(PlayBigJump);
    lsr(ABS(Square1SoundQueue));
    // bump
    BCS(PlayBump);
    lsr(ABS(Square1SoundQueue));
    // swim/stomp
    BCS(PlaySwimStomp);
    lsr(ABS(Square1SoundQueue));
    // smack enemy
    BCS(PlaySmackEnemy);
    lsr(ABS(Square1SoundQueue));
    // pipedown/injury
    BCS(PlayPipeDownInj);
    lsr(ABS(Square1SoundQueue));
    // fireball throw
    BCS(PlayFireballThrow);
    lsr(ABS(Square1SoundQueue));
    // slide flagpole
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}
void CheckSfx1Buffer() {
    _debug("CheckSfx1Buffer", __FILE__, __LINE__);
    // check for sfx in buffer
    lda(ABS(Square1SoundBuffer));
    // if not found, exit sub
    BEQ(ExS1H);
    // small mario jump
    BMI(ContinueSndJump);
    lsr();
    // big mario jump
    BCS(ContinueSndJump);
    lsr();
    // bump
    BCS(ContinueBumpThrow);
    lsr();
    // swim/stomp
    BCS(ContinueSwimStomp);
    lsr();
    // smack enemy
    BCS(ContinueSmackEnemy);
    lsr();
    // pipedown/injury
    BCS(ContinuePipeDownInj);
    lsr();
    // fireball throw
    BCS(ContinueBumpThrow);
    lsr();
    // slide flagpole
    BCS(DecrementSfx1Length);
    JMP(ExS1H);
}
void ExS1H() {
    _debug("ExS1H", __FILE__, __LINE__);
    return;
}
void PlaySwimStomp() {
    _debug("PlaySwimStomp", __FILE__, __LINE__);
    // store length of swim/stomp sound
    lda(IMM(0xe));
    sta(ABS(Squ1_SfxLenCounter));
    // store reg contents for swim/stomp sound
    ldy(IMM(0x9c));
    ldx(IMM(0x9e));
    lda(IMM(0x26));
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}
void ContinueSwimStomp() {
    _debug("ContinueSwimStomp", __FILE__, __LINE__);
    // look up reg contents in data section based on
    ldy(ABS(Squ1_SfxLenCounter));
    // length of sound left, used to control sound's
    lda(ABSY(((0x8000+offsetof(G, SwimStompEnvelopeData)) - (1))));
    // envelope
    sta(ABS(SND_SQUARE1_REG));
    cpy(IMM(0x6));
    BNE(BranchToDecLength1);
    // when the length counts down to a certain point, put this
    lda(IMM(0x9e));
    // directly into the LSB of square 1's frequency divider
    sta(ABS(((SND_SQUARE1_REG) + (2))));
    JMP(BranchToDecLength1);
}
void BranchToDecLength1() {
    _debug("BranchToDecLength1", __FILE__, __LINE__);
    // unconditional branch (regardless of how we got here)
    BNE(DecrementSfx1Length);
    JMP(PlaySmackEnemy);
}
void PlaySmackEnemy() {
    _debug("PlaySmackEnemy", __FILE__, __LINE__);
    // store length of smack enemy sound
    lda(IMM(0xe));
    ldy(IMM(0xcb));
    ldx(IMM(0x9f));
    sta(ABS(Squ1_SfxLenCounter));
    // store reg contents for smack enemy sound
    lda(IMM(0x28));
    JSR(PlaySqu1Sfx);
    // unconditional branch
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}
void ContinueSmackEnemy() {
    _debug("ContinueSmackEnemy", __FILE__, __LINE__);
    // check about halfway through
    ldy(ABS(Squ1_SfxLenCounter));
    cpy(IMM(0x8));
    BNE(SmSpc);
    // if we're at the about-halfway point, make the second tone
    lda(IMM(0xa0));
    // in the smack enemy sound
    sta(ABS(((SND_SQUARE1_REG) + (2))));
    lda(IMM(0x9f));
    BNE(SmTick);
    JMP(SmSpc);
}
void SmSpc() {
    _debug("SmSpc", __FILE__, __LINE__);
    // this creates spaces in the sound, giving it its distinct noise
    lda(IMM(0x90));
    JMP(SmTick);
}
void SmTick() {
    _debug("SmTick", __FILE__, __LINE__);
    sta(ABS(SND_SQUARE1_REG));
    JMP(DecrementSfx1Length);
}
void DecrementSfx1Length() {
    _debug("DecrementSfx1Length", __FILE__, __LINE__);
    // decrement length of sfx
    dec(ABS(Squ1_SfxLenCounter));
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}
void StopSquare1Sfx() {
    _debug("StopSquare1Sfx", __FILE__, __LINE__);
    // if end of sfx reached, clear buffer
    ldx(IMM(0x0));
    // and stop making the sfx
    stx(ABS(0xf1));
    ldx(IMM(0xe));
    stx(ABS(SND_MASTERCTRL_REG));
    ldx(IMM(0xf));
    stx(ABS(SND_MASTERCTRL_REG));
    JMP(ExSfx1);
}
void ExSfx1() {
    _debug("ExSfx1", __FILE__, __LINE__);
    return;
}
void PlayPipeDownInj() {
    _debug("PlayPipeDownInj", __FILE__, __LINE__);
    // load length of pipedown sound
    lda(IMM(0x2f));
    sta(ABS(Squ1_SfxLenCounter));
    JMP(ContinuePipeDownInj);
}
void ContinuePipeDownInj() {
    _debug("ContinuePipeDownInj", __FILE__, __LINE__);
    // some bitwise logic, forces the regs
    lda(ABS(Squ1_SfxLenCounter));
    // to be written to only during six specific times
    lsr();
    // during which d3 must be set and d1-0 must be clear
    BCS(NoPDwnL);
    lsr();
    BCS(NoPDwnL);
    anda(IMM(0b10));
    BEQ(NoPDwnL);
    // and this is where it actually gets written in
    ldy(IMM(0x91));
    ldx(IMM(0x9a));
    lda(IMM(0x44));
    JSR(PlaySqu1Sfx);
    JMP(NoPDwnL);
}
void NoPDwnL() {
    _debug("NoPDwnL", __FILE__, __LINE__);
    JMP(DecrementSfx1Length);
    JMP(PlayCoinGrab);
}
void PlayCoinGrab() {
    _debug("PlayCoinGrab", __FILE__, __LINE__);
    // load length of coin grab sound
    lda(IMM(0x35));
    // and part of reg contents
    ldx(IMM(0x8d));
    BNE(CGrab_TTickRegL);
    JMP(PlayTimerTick);
}
void PlayTimerTick() {
    _debug("PlayTimerTick", __FILE__, __LINE__);
    // load length of timer tick sound
    lda(IMM(0x6));
    // and part of reg contents
    ldx(IMM(0x98));
    JMP(CGrab_TTickRegL);
}
void CGrab_TTickRegL() {
    _debug("CGrab_TTickRegL", __FILE__, __LINE__);
    sta(ABS(Squ2_SfxLenCounter));
    // load the rest of reg contents
    ldy(IMM(0x7f));
    // of coin grab and timer tick sound
    lda(IMM(0x42));
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}
void ContinueCGrabTTick() {
    _debug("ContinueCGrabTTick", __FILE__, __LINE__);
    // check for time to play second tone yet
    lda(ABS(Squ2_SfxLenCounter));
    // timer tick sound also executes this, not sure why
    cmp(IMM(0x30));
    BNE(N2Tone);
    // if so, load the tone directly into the reg
    lda(IMM(0x54));
    sta(ABS(((SND_SQUARE2_REG) + (2))));
    JMP(N2Tone);
}
void N2Tone() {
    _debug("N2Tone", __FILE__, __LINE__);
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}
void PlayBlast() {
    _debug("PlayBlast", __FILE__, __LINE__);
    // load length of fireworks/gunfire sound
    lda(IMM(0x20));
    sta(ABS(Squ2_SfxLenCounter));
    // load reg contents of fireworks/gunfire sound
    ldy(IMM(0x94));
    lda(IMM(0x5e));
    BNE(SBlasJ);
    JMP(ContinueBlast);
}
void ContinueBlast() {
    _debug("ContinueBlast", __FILE__, __LINE__);
    // check for time to play second part
    lda(ABS(Squ2_SfxLenCounter));
    cmp(IMM(0x18));
    BNE(DecrementSfx2Length);
    // load second part reg contents then
    ldy(IMM(0x93));
    lda(IMM(0x18));
    JMP(SBlasJ);
}
void SBlasJ() {
    _debug("SBlasJ", __FILE__, __LINE__);
    // unconditional branch to load rest of reg contents
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}
void PlayPowerUpGrab() {
    _debug("PlayPowerUpGrab", __FILE__, __LINE__);
    // load length of power-up grab sound
    lda(IMM(0x36));
    sta(ABS(Squ2_SfxLenCounter));
    JMP(ContinuePowerUpGrab);
}
void ContinuePowerUpGrab() {
    _debug("ContinuePowerUpGrab", __FILE__, __LINE__);
    // load frequency reg based on length left over
    lda(ABS(Squ2_SfxLenCounter));
    // divide by 2
    lsr();
    // alter frequency every other frame
    BCS(DecrementSfx2Length);
    tay();
    // use length left over / 2 for frequency offset
    lda(ABSY(((0x8000+offsetof(G, PowerUpGrabFreqData)) - (1))));
    // store reg contents of power-up grab sound
    ldx(IMM(0x5d));
    ldy(IMM(0x7f));
    JMP(LoadSqu2Regs);
}
void LoadSqu2Regs() {
    _debug("LoadSqu2Regs", __FILE__, __LINE__);
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}
void DecrementSfx2Length() {
    _debug("DecrementSfx2Length", __FILE__, __LINE__);
    // decrement length of sfx
    dec(ABS(Squ2_SfxLenCounter));
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}
void EmptySfx2Buffer() {
    _debug("EmptySfx2Buffer", __FILE__, __LINE__);
    // initialize square 2's sound effects buffer
    ldx(IMM(0x0));
    stx(ABS(Square2SoundBuffer));
    JMP(StopSquare2Sfx);
}
void StopSquare2Sfx() {
    _debug("StopSquare2Sfx", __FILE__, __LINE__);
    // stop playing the sfx
    ldx(IMM(0xd));
    stx(ABS(SND_MASTERCTRL_REG));
    ldx(IMM(0xf));
    stx(ABS(SND_MASTERCTRL_REG));
    JMP(ExSfx2);
}
void ExSfx2() {
    _debug("ExSfx2", __FILE__, __LINE__);
    return;
}
void Square2SfxHandler() {
    _debug("Square2SfxHandler", __FILE__, __LINE__);
    // special handling for the 1-up sound to keep it
    lda(ABS(Square2SoundBuffer));
    // from being interrupted by other sounds on square 2
    anda(IMM(Sfx_ExtraLife));
    BNE(ContinueExtraLife);
    // check for sfx in queue
    ldy(ABS(Square2SoundQueue));
    BEQ(CheckSfx2Buffer);
    // if found, put in buffer and check for the following
    sty(ABS(Square2SoundBuffer));
    // bowser fall
    BMI(PlayBowserFall);
    lsr(ABS(Square2SoundQueue));
    // coin grab
    BCS(PlayCoinGrab);
    lsr(ABS(Square2SoundQueue));
    // power-up reveal
    BCS(PlayGrowPowerUp);
    lsr(ABS(Square2SoundQueue));
    // vine grow
    BCS(PlayGrowVine);
    lsr(ABS(Square2SoundQueue));
    // fireworks/gunfire
    BCS(PlayBlast);
    lsr(ABS(Square2SoundQueue));
    // timer tick
    BCS(PlayTimerTick);
    lsr(ABS(Square2SoundQueue));
    // power-up grab
    BCS(PlayPowerUpGrab);
    lsr(ABS(Square2SoundQueue));
    // 1-up
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}
void CheckSfx2Buffer() {
    _debug("CheckSfx2Buffer", __FILE__, __LINE__);
    // check for sfx in buffer
    lda(ABS(Square2SoundBuffer));
    // if not found, exit sub
    BEQ(ExS2H);
    // bowser fall
    BMI(ContinueBowserFall);
    lsr();
    // coin grab
    BCS(Cont_CGrab_TTick);
    lsr();
    // power-up reveal
    BCS(ContinueGrowItems);
    lsr();
    // vine grow
    BCS(ContinueGrowItems);
    lsr();
    // fireworks/gunfire
    BCS(ContinueBlast);
    lsr();
    // timer tick
    BCS(Cont_CGrab_TTick);
    lsr();
    // power-up grab
    BCS(ContinuePowerUpGrab);
    lsr();
    // 1-up
    BCS(ContinueExtraLife);
    JMP(ExS2H);
}
void ExS2H() {
    _debug("ExS2H", __FILE__, __LINE__);
    return;
}
void Cont_CGrab_TTick() {
    _debug("Cont_CGrab_TTick", __FILE__, __LINE__);
    JMP(ContinueCGrabTTick);
    JMP(JumpToDecLength2);
}
void JumpToDecLength2() {
    _debug("JumpToDecLength2", __FILE__, __LINE__);
    JMP(DecrementSfx2Length);
    JMP(PlayBowserFall);
}
void PlayBowserFall() {
    _debug("PlayBowserFall", __FILE__, __LINE__);
    // load length of bowser defeat sound
    lda(IMM(0x38));
    sta(ABS(Squ2_SfxLenCounter));
    // load contents of reg for bowser defeat sound
    ldy(IMM(0xc4));
    lda(IMM(0x18));
    JMP(BlstSJp);
}
void BlstSJp() {
    _debug("BlstSJp", __FILE__, __LINE__);
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}
void ContinueBowserFall() {
    _debug("ContinueBowserFall", __FILE__, __LINE__);
    // check for almost near the end
    lda(ABS(Squ2_SfxLenCounter));
    cmp(IMM(0x8));
    BNE(DecrementSfx2Length);
    // if so, load the rest of reg contents for bowser defeat sound
    ldy(IMM(0xa4));
    lda(IMM(0x5a));
    JMP(PBFRegs);
}
void PBFRegs() {
    _debug("PBFRegs", __FILE__, __LINE__);
    // the fireworks/gunfire sound shares part of reg contents here
    ldx(IMM(0x9f));
    JMP(EL_LRegs);
}
void EL_LRegs() {
    _debug("EL_LRegs", __FILE__, __LINE__);
    // this is an unconditional branch outta here
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}
void PlayExtraLife() {
    _debug("PlayExtraLife", __FILE__, __LINE__);
    // load length of 1-up sound
    lda(IMM(0x30));
    sta(ABS(Squ2_SfxLenCounter));
    JMP(ContinueExtraLife);
}
void ContinueExtraLife() {
    _debug("ContinueExtraLife", __FILE__, __LINE__);
    lda(ABS(Squ2_SfxLenCounter));
    // load new tones only every eight frames
    ldx(IMM(0x3));
    JMP(DivLLoop);
}
void DivLLoop() {
    _debug("DivLLoop", __FILE__, __LINE__);
    lsr();
    // if any bits set here, branch to dec the length
    BCS(JumpToDecLength2);
    dex();
    // do this until all bits checked, if none set, continue
    BNE(DivLLoop);
    tay();
    // load our reg contents
    lda(ABSY(((0x8000+offsetof(G, ExtraLifeFreqData)) - (1))));
    ldx(IMM(0x82));
    ldy(IMM(0x7f));
    // unconditional branch
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}
void PlayGrowPowerUp() {
    _debug("PlayGrowPowerUp", __FILE__, __LINE__);
    // load length of power-up reveal sound
    lda(IMM(0x10));
    BNE(GrowItemRegs);
    JMP(PlayGrowVine);
}
void PlayGrowVine() {
    _debug("PlayGrowVine", __FILE__, __LINE__);
    // load length of vine grow sound
    lda(IMM(0x20));
    JMP(GrowItemRegs);
}
void GrowItemRegs() {
    _debug("GrowItemRegs", __FILE__, __LINE__);
    sta(ABS(Squ2_SfxLenCounter));
    // load contents of reg for both sounds directly
    lda(IMM(0x7f));
    sta(ABS(((SND_SQUARE2_REG) + (1))));
    // start secondary counter for both sounds
    lda(IMM(0x0));
    sta(ABS(Sfx_SecondaryCounter));
    JMP(ContinueGrowItems);
}
void ContinueGrowItems() {
    _debug("ContinueGrowItems", __FILE__, __LINE__);
    // increment secondary counter for both sounds
    inc(ABS(Sfx_SecondaryCounter));
    // this sound doesn't decrement the usual counter
    lda(ABS(Sfx_SecondaryCounter));
    // divide by 2 to get the offset
    lsr();
    tay();
    // have we reached the end yet?
    cpy(ABS(Squ2_SfxLenCounter));
    // if so, branch to jump, and stop playing sounds
    BEQ(StopGrowItems);
    // load contents of other reg directly
    lda(IMM(0x9d));
    sta(ABS(SND_SQUARE2_REG));
    // use secondary counter / 2 as offset for frequency regs
    lda(ABSY(0x8000+offsetof(G, PUp_VGrow_FreqData)));
    JSR(SetFreq_Squ2);
    return;
}
void StopGrowItems() {
    _debug("StopGrowItems", __FILE__, __LINE__);
    // branch to stop playing sounds
    JMP(EmptySfx2Buffer);
    JMP(PlayBrickShatter);
}
void PlayBrickShatter() {
    _debug("PlayBrickShatter", __FILE__, __LINE__);
    // load length of brick shatter sound
    lda(IMM(0x20));
    sta(ABS(Noise_SfxLenCounter));
    JMP(ContinueBrickShatter);
}
void ContinueBrickShatter() {
    _debug("ContinueBrickShatter", __FILE__, __LINE__);
    lda(ABS(Noise_SfxLenCounter));
    // divide by 2 and check for bit set to use offset
    lsr();
    BCC(DecrementSfx3Length);
    tay();
    // load reg contents of brick shatter sound
    ldx(ABSY(0x8000+offsetof(G, BrickShatterFreqData)));
    lda(ABSY(0x8000+offsetof(G, BrickShatterEnvData)));
    JMP(PlayNoiseSfx);
}
void PlayNoiseSfx() {
    _debug("PlayNoiseSfx", __FILE__, __LINE__);
    // play the sfx
    sta(ABS(SND_NOISE_REG));
    stx(ABS(((SND_NOISE_REG) + (2))));
    lda(IMM(0x18));
    sta(ABS(((SND_NOISE_REG) + (3))));
    JMP(DecrementSfx3Length);
}
void DecrementSfx3Length() {
    _debug("DecrementSfx3Length", __FILE__, __LINE__);
    // decrement length of sfx
    dec(ABS(Noise_SfxLenCounter));
    BNE(ExSfx3);
    // if done, stop playing the sfx
    lda(IMM(0xf0));
    sta(ABS(SND_NOISE_REG));
    lda(IMM(0x0));
    sta(ABS(NoiseSoundBuffer));
    JMP(ExSfx3);
}
void ExSfx3() {
    _debug("ExSfx3", __FILE__, __LINE__);
    return;
}
void NoiseSfxHandler() {
    _debug("NoiseSfxHandler", __FILE__, __LINE__);
    // check for sfx in queue
    ldy(ABS(NoiseSoundQueue));
    BEQ(CheckNoiseBuffer);
    // if found, put in buffer
    sty(ABS(NoiseSoundBuffer));
    lsr(ABS(NoiseSoundQueue));
    // brick shatter
    BCS(PlayBrickShatter);
    lsr(ABS(NoiseSoundQueue));
    // bowser flame
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}
void CheckNoiseBuffer() {
    _debug("CheckNoiseBuffer", __FILE__, __LINE__);
    // check for sfx in buffer
    lda(ABS(NoiseSoundBuffer));
    // if not found, exit sub
    BEQ(ExNH);
    lsr();
    // brick shatter
    BCS(ContinueBrickShatter);
    lsr();
    // bowser flame
    BCS(ContinueBowserFlame);
    JMP(ExNH);
}
void ExNH() {
    _debug("ExNH", __FILE__, __LINE__);
    return;
}
void PlayBowserFlame() {
    _debug("PlayBowserFlame", __FILE__, __LINE__);
    // load length of bowser flame sound
    lda(IMM(0x40));
    sta(ABS(Noise_SfxLenCounter));
    JMP(ContinueBowserFlame);
}
void ContinueBowserFlame() {
    _debug("ContinueBowserFlame", __FILE__, __LINE__);
    lda(ABS(Noise_SfxLenCounter));
    lsr();
    tay();
    // load reg contents of bowser flame sound
    ldx(IMM(0xf));
    lda(ABSY(((0x8000+offsetof(G, BowserFlameEnvData)) - (1))));
    // unconditional branch here
    BNE(PlayNoiseSfx);
    JMP(ContinueMusic);
}
void ContinueMusic() {
    _debug("ContinueMusic", __FILE__, __LINE__);
    // if we have music, start with square 2 channel
    JMP(HandleSquare2Music);
    JMP(MusicHandler);
}
void MusicHandler() {
    _debug("MusicHandler", __FILE__, __LINE__);
    // check event music queue
    lda(ABS(EventMusicQueue));
    BNE(LoadEventMusic);
    // check area music queue
    lda(ABS(AreaMusicQueue));
    BNE(LoadAreaMusic);
    // check both buffers
    lda(ABS(EventMusicBuffer));
    ora(ABS(AreaMusicBuffer));
    BNE(ContinueMusic);
    // no music, then leave
    return;
}
void LoadEventMusic() {
    _debug("LoadEventMusic", __FILE__, __LINE__);
    // copy event music queue contents to buffer
    sta(ABS(EventMusicBuffer));
    // is it death music?
    cmp(IMM(DeathMusic));
    // if not, jump elsewhere
    BNE(NoStopSfx);
    // stop sfx in square 1 and 2
    JSR(StopSquare1Sfx);
    // but clear only square 1's sfx buffer
    JSR(StopSquare2Sfx);
    JMP(NoStopSfx);
}
void NoStopSfx() {
    _debug("NoStopSfx", __FILE__, __LINE__);
    ldx(ABS(AreaMusicBuffer));
    // save current area music buffer to be re-obtained later
    stx(ABS(AreaMusicBuffer_Alt));
    ldy(IMM(0x0));
    // default value for additional length byte offset
    sty(ABS(NoteLengthTblAdder));
    // clear area music buffer
    sty(ABS(AreaMusicBuffer));
    // is it time running out music?
    cmp(IMM(TimeRunningOutMusic));
    BNE(FindEventMusicHeader);
    // load offset to be added to length byte of header
    ldx(IMM(0x8));
    stx(ABS(NoteLengthTblAdder));
    // unconditional branch
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}
void LoadAreaMusic() {
    _debug("LoadAreaMusic", __FILE__, __LINE__);
    // is it underground music?
    cmp(IMM(0x4));
    // no, do not stop square 1 sfx
    BNE(NoStop1);
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}
void NoStop1() {
    _debug("NoStop1", __FILE__, __LINE__);
    // start counter used only by ground level music
    ldy(IMM(0x10));
    JMP(GMLoopB);
}
void GMLoopB() {
    _debug("GMLoopB", __FILE__, __LINE__);
    sty(ABS(GroundMusicHeaderOfs));
    JMP(HandleAreaMusicLoopB);
}
void HandleAreaMusicLoopB() {
    _debug("HandleAreaMusicLoopB", __FILE__, __LINE__);
    // clear event music buffer
    ldy(IMM(0x0));
    sty(ABS(EventMusicBuffer));
    // copy area music queue contents to buffer
    sta(ABS(AreaMusicBuffer));
    // is it ground level music?
    cmp(IMM(0x1));
    BNE(FindAreaMusicHeader);
    // increment but only if playing ground level music
    inc(ABS(GroundMusicHeaderOfs));
    // is it time to loopback ground level music?
    ldy(ABS(GroundMusicHeaderOfs));
    cpy(IMM(0x32));
    // branch ahead with alternate offset
    BNE(LoadHeader);
    ldy(IMM(0x11));
    // unconditional branch
    BNE(GMLoopB);
    JMP(FindAreaMusicHeader);
}
void FindAreaMusicHeader() {
    _debug("FindAreaMusicHeader", __FILE__, __LINE__);
    // load Y for offset of area music
    ldy(IMM(0x8));
    // residual instruction here
    sty(ABS(MusicOffset_Square2));
    JMP(FindEventMusicHeader);
}
void FindEventMusicHeader() {
    _debug("FindEventMusicHeader", __FILE__, __LINE__);
    // increment Y pointer based on previously loaded queue contents
    iny();
    // bit shift and increment until we find a set bit for music
    lsr();
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}
void LoadHeader() {
    _debug("LoadHeader", __FILE__, __LINE__);
    // load offset for header
    lda(ABSY(MusicHeaderOffsetData));
    tay();
    // now load the header
    lda(ABSY(0x8000+offsetof(G, MusicHeaderData)));
    sta(ABS(NoteLenLookupTblOfs));
    lda(ABSY(((0x8000+offsetof(G, MusicHeaderData)) + (1))));
    sta(ABS(MusicDataLow));
    lda(ABSY(((0x8000+offsetof(G, MusicHeaderData)) + (2))));
    sta(ABS(MusicDataHigh));
    lda(ABSY(((0x8000+offsetof(G, MusicHeaderData)) + (3))));
    sta(ABS(MusicOffset_Triangle));
    lda(ABSY(((0x8000+offsetof(G, MusicHeaderData)) + (4))));
    sta(ABS(MusicOffset_Square1));
    lda(ABSY(((0x8000+offsetof(G, MusicHeaderData)) + (5))));
    sta(ABS(MusicOffset_Noise));
    sta(ABS(NoiseDataLoopbackOfs));
    // initialize music note counters
    lda(IMM(0x1));
    sta(ABS(Squ2_NoteLenCounter));
    sta(ABS(Squ1_NoteLenCounter));
    sta(ABS(Tri_NoteLenCounter));
    sta(ABS(Noise_BeatLenCounter));
    // initialize music data offset for square 2
    lda(IMM(0x0));
    sta(ABS(MusicOffset_Square2));
    // initialize alternate control reg data used by square 1
    sta(ABS(AltRegContentFlag));
    // disable triangle channel and reenable it
    lda(IMM(0xb));
    sta(ABS(SND_MASTERCTRL_REG));
    lda(IMM(0xf));
    sta(ABS(SND_MASTERCTRL_REG));
    JMP(HandleSquare2Music);
}
void HandleSquare2Music() {
    _debug("HandleSquare2Music", __FILE__, __LINE__);
    // decrement square 2 note length
    dec(ABS(Squ2_NoteLenCounter));
    // is it time for more data?  if not, branch to end tasks
    BNE(MiscSqu2MusicTasks);
    // increment square 2 music offset and fetch data
    ldy(ABS(MusicOffset_Square2));
    inc(ABS(MusicOffset_Square2));
    lda(INDY((MusicData)));
    // if zero, the data is a null terminator
    BEQ(EndOfMusicData);
    // if non-negative, data is a note
    BPL(Squ2NoteHandler);
    // otherwise it is length data
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}
void EndOfMusicData() {
    _debug("EndOfMusicData", __FILE__, __LINE__);
    // check secondary buffer for time running out music
    lda(ABS(EventMusicBuffer));
    cmp(IMM(TimeRunningOutMusic));
    BNE(NotTRO);
    // load previously saved contents of primary buffer
    lda(ABS(AreaMusicBuffer_Alt));
    // and start playing the song again if there is one
    BNE(MusicLoopBack);
    JMP(NotTRO);
}
void NotTRO() {
    _debug("NotTRO", __FILE__, __LINE__);
    // check for victory music (the only secondary that loops)
    anda(IMM(VictoryMusic));
    BNE(VictoryMLoopBack);
    // check primary buffer for any music except pipe intro
    lda(ABS(AreaMusicBuffer));
    anda(IMM(0b1011111));
    // if any area music except pipe intro, music loops
    BNE(MusicLoopBack);
    // clear primary and secondary buffers and initialize
    lda(IMM(0x0));
    // control regs of square and triangle channels
    sta(ABS(AreaMusicBuffer));
    sta(ABS(EventMusicBuffer));
    sta(ABS(SND_TRIANGLE_REG));
    lda(IMM(0x90));
    sta(ABS(SND_SQUARE1_REG));
    sta(ABS(SND_SQUARE2_REG));
    return;
}
void MusicLoopBack() {
    _debug("MusicLoopBack", __FILE__, __LINE__);
    JMP(HandleAreaMusicLoopB);
    JMP(VictoryMLoopBack);
}
void VictoryMLoopBack() {
    _debug("VictoryMLoopBack", __FILE__, __LINE__);
    JMP(LoadEventMusic);
    JMP(Squ2LengthHandler);
}
void Squ2LengthHandler() {
    _debug("Squ2LengthHandler", __FILE__, __LINE__);
    // store length of note
    JSR(ProcessLengthData);
    sta(ABS(Squ2_NoteLenBuffer));
    // fetch another byte (MUST NOT BE LENGTH BYTE!)
    ldy(ABS(MusicOffset_Square2));
    inc(ABS(MusicOffset_Square2));
    lda(INDY((MusicData)));
    JMP(Squ2NoteHandler);
}
void Squ2NoteHandler() {
    _debug("Squ2NoteHandler", __FILE__, __LINE__);
    // is there a sound playing on this channel?
    ldx(ABS(Square2SoundBuffer));
    BNE(SkipFqL1);
    // no, then play the note
    JSR(SetFreq_Squ2);
    // check to see if note is rest
    BEQ(Rest);
    // if not, load control regs for square 2
    JSR(LoadControlRegs);
    JMP(Rest);
}
void Rest() {
    _debug("Rest", __FILE__, __LINE__);
    // save contents of A
    sta(ABS(Squ2_EnvelopeDataCtrl));
    // dump X and Y into square 2 control regs
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}
void SkipFqL1() {
    _debug("SkipFqL1", __FILE__, __LINE__);
    // save length in square 2 note counter
    lda(ABS(Squ2_NoteLenBuffer));
    sta(ABS(Squ2_NoteLenCounter));
    JMP(MiscSqu2MusicTasks);
}
void MiscSqu2MusicTasks() {
    _debug("MiscSqu2MusicTasks", __FILE__, __LINE__);
    // is there a sound playing on square 2?
    lda(ABS(Square2SoundBuffer));
    BNE(HandleSquare1Music);
    // check for death music or d4 set on secondary buffer
    lda(ABS(EventMusicBuffer));
    // note that regs for death music or d4 are loaded by default
    anda(IMM(0b10010001));
    BNE(HandleSquare1Music);
    // check for contents saved from LoadControlRegs
    ldy(ABS(Squ2_EnvelopeDataCtrl));
    BEQ(NoDecEnv1);
    // decrement unless already zero
    dec(ABS(Squ2_EnvelopeDataCtrl));
    JMP(NoDecEnv1);
}
void NoDecEnv1() {
    _debug("NoDecEnv1", __FILE__, __LINE__);
    // do a load of envelope data to replace default
    JSR(LoadEnvelopeData);
    // based on offset set by first load unless playing
    sta(ABS(SND_SQUARE2_REG));
    // death music or d4 set on secondary buffer
    ldx(IMM(0x7f));
    stx(ABS(((SND_SQUARE2_REG) + (1))));
    JMP(HandleSquare1Music);
}
void HandleSquare1Music() {
    _debug("HandleSquare1Music", __FILE__, __LINE__);
    // is there a nonzero offset here?
    ldy(ABS(MusicOffset_Square1));
    // if not, skip ahead to the triangle channel
    BEQ(HandleTriangleMusic);
    // decrement square 1 note length
    dec(ABS(Squ1_NoteLenCounter));
    // is it time for more data?
    BNE(MiscSqu1MusicTasks);
    JMP(FetchSqu1MusicData);
}
void FetchSqu1MusicData() {
    _debug("FetchSqu1MusicData", __FILE__, __LINE__);
    // increment square 1 music offset and fetch data
    ldy(ABS(MusicOffset_Square1));
    inc(ABS(MusicOffset_Square1));
    lda(INDY((MusicData)));
    // if nonzero, then skip this part
    BNE(Squ1NoteHandler);
    lda(IMM(0x83));
    // store some data into control regs for square 1
    sta(ABS(SND_SQUARE1_REG));
    // and fetch another byte of data, used to give
    lda(IMM(0x94));
    // death music its unique sound
    sta(ABS(((SND_SQUARE1_REG) + (1))));
    sta(ABS(AltRegContentFlag));
    // unconditional branch
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}
void Squ1NoteHandler() {
    _debug("Squ1NoteHandler", __FILE__, __LINE__);
    JSR(AlternateLengthHandler);
    // save contents of A in square 1 note counter
    sta(ABS(Squ1_NoteLenCounter));
    // is there a sound playing on square 1?
    ldy(ABS(Square1SoundBuffer));
    BNE(HandleTriangleMusic);
    txa();
    // change saved data to appropriate note format
    anda(IMM(0b111110));
    // play the note
    JSR(SetFreq_Squ1);
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}
void SkipCtrlL() {
    _debug("SkipCtrlL", __FILE__, __LINE__);
    // save envelope offset
    sta(ABS(Squ1_EnvelopeDataCtrl));
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}
void MiscSqu1MusicTasks() {
    _debug("MiscSqu1MusicTasks", __FILE__, __LINE__);
    // is there a sound playing on square 1?
    lda(ABS(Square1SoundBuffer));
    BNE(HandleTriangleMusic);
    // check for death music or d4 set on secondary buffer
    lda(ABS(EventMusicBuffer));
    anda(IMM(0b10010001));
    BNE(DeathMAltReg);
    // check saved envelope offset
    ldy(ABS(Squ1_EnvelopeDataCtrl));
    BEQ(NoDecEnv2);
    // decrement unless already zero
    dec(ABS(Squ1_EnvelopeDataCtrl));
    JMP(NoDecEnv2);
}
void NoDecEnv2() {
    _debug("NoDecEnv2", __FILE__, __LINE__);
    // do a load of envelope data
    JSR(LoadEnvelopeData);
    // based on offset set by first load
    sta(ABS(SND_SQUARE1_REG));
    JMP(DeathMAltReg);
}
void DeathMAltReg() {
    _debug("DeathMAltReg", __FILE__, __LINE__);
    // check for alternate control reg data
    lda(ABS(AltRegContentFlag));
    BNE(DoAltLoad);
    // load this value if zero, the alternate value
    lda(IMM(0x7f));
    JMP(DoAltLoad);
}
void DoAltLoad() {
    _debug("DoAltLoad", __FILE__, __LINE__);
    // if nonzero, and let's move on
    sta(ABS(((SND_SQUARE1_REG) + (1))));
    JMP(HandleTriangleMusic);
}
void HandleTriangleMusic() {
    _debug("HandleTriangleMusic", __FILE__, __LINE__);
    lda(ABS(MusicOffset_Triangle));
    // decrement triangle note length
    dec(ABS(Tri_NoteLenCounter));
    // is it time for more data?
    BNE(HandleNoiseMusic);
    // increment square 1 music offset and fetch data
    ldy(ABS(MusicOffset_Triangle));
    inc(ABS(MusicOffset_Triangle));
    lda(INDY((MusicData)));
    // if zero, skip all this and move on to noise
    BEQ(LoadTriCtrlReg);
    // if non-negative, data is note
    BPL(TriNoteHandler);
    // otherwise, it is length data
    JSR(ProcessLengthData);
    // save contents of A
    sta(ABS(Tri_NoteLenBuffer));
    lda(IMM(0x1f));
    // load some default data for triangle control reg
    sta(ABS(SND_TRIANGLE_REG));
    // fetch another byte
    ldy(ABS(MusicOffset_Triangle));
    inc(ABS(MusicOffset_Triangle));
    lda(INDY((MusicData)));
    // check once more for nonzero data
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}
void TriNoteHandler() {
    _debug("TriNoteHandler", __FILE__, __LINE__);
    JSR(SetFreq_Tri);
    // save length in triangle note counter
    ldx(ABS(Tri_NoteLenBuffer));
    stx(ABS(Tri_NoteLenCounter));
    lda(ABS(EventMusicBuffer));
    // check for death music or d4 set on secondary buffer
    anda(IMM(0b1101110));
    // if playing any other secondary, skip primary buffer check
    BNE(NotDOrD4);
    // check primary buffer for water or castle level music
    lda(ABS(AreaMusicBuffer));
    anda(IMM(0b1010));
    // if playing any other primary, or death or d4, go on to noise routine
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}
void NotDOrD4() {
    _debug("NotDOrD4", __FILE__, __LINE__);
    // if playing water or castle music or any secondary
    txa();
    // besides death music or d4 set, check length of note
    cmp(IMM(0x12));
    BCS(LongN);
    // check for win castle music again if not playing a long note
    lda(ABS(EventMusicBuffer));
    anda(IMM(EndOfCastleMusic));
    BEQ(MediN);
    // load value $0f if playing the win castle music and playing a short
    lda(IMM(0xf));
    // note, load value $1f if playing water or castle level music or any
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}
void MediN() {
    _debug("MediN", __FILE__, __LINE__);
    // secondary besides death and d4 except win castle or win castle and playing
    lda(IMM(0x1f));
    // a short note, and load value $ff if playing a long note on water, castle
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}
void LongN() {
    _debug("LongN", __FILE__, __LINE__);
    // or any secondary (including win castle) except death and d4
    lda(IMM(0xff));
    JMP(LoadTriCtrlReg);
}
void LoadTriCtrlReg() {
    _debug("LoadTriCtrlReg", __FILE__, __LINE__);
    // save final contents of A into control reg for triangle
    sta(ABS(SND_TRIANGLE_REG));
    JMP(HandleNoiseMusic);
}
void HandleNoiseMusic() {
    _debug("HandleNoiseMusic", __FILE__, __LINE__);
    // check if playing underground or castle music
    lda(ABS(AreaMusicBuffer));
    anda(IMM(0b11110011));
    // if so, skip the noise routine
    BEQ(ExitMusicHandler);
    // decrement noise beat length
    dec(ABS(Noise_BeatLenCounter));
    // is it time for more data?
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}
void FetchNoiseBeatData() {
    _debug("FetchNoiseBeatData", __FILE__, __LINE__);
    // increment noise beat offset and fetch data
    ldy(ABS(MusicOffset_Noise));
    inc(ABS(MusicOffset_Noise));
    // get noise beat data, if nonzero, branch to handle
    lda(INDY((MusicData)));
    BNE(NoiseBeatHandler);
    // if data is zero, reload original noise beat offset
    lda(ABS(NoiseDataLoopbackOfs));
    // and loopback next time around
    sta(ABS(MusicOffset_Noise));
    // unconditional branch
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}
void NoiseBeatHandler() {
    _debug("NoiseBeatHandler", __FILE__, __LINE__);
    JSR(AlternateLengthHandler);
    // store length in noise beat counter
    sta(ABS(Noise_BeatLenCounter));
    txa();
    // reload data and erase length bits
    anda(IMM(0b111110));
    // if no beat data, silence
    BEQ(SilentBeat);
    // check the beat data and play the appropriate
    cmp(IMM(0x30));
    // noise accordingly
    BEQ(LongBeat);
    cmp(IMM(0x20));
    BEQ(StrongBeat);
    anda(IMM(0b10000));
    BEQ(SilentBeat);
    // short beat data
    lda(IMM(0x1c));
    ldx(IMM(0x3));
    ldy(IMM(0x18));
    BNE(PlayBeat);
    JMP(StrongBeat);
}
void StrongBeat() {
    _debug("StrongBeat", __FILE__, __LINE__);
    // strong beat data
    lda(IMM(0x1c));
    ldx(IMM(0xc));
    ldy(IMM(0x18));
    BNE(PlayBeat);
    JMP(LongBeat);
}
void LongBeat() {
    _debug("LongBeat", __FILE__, __LINE__);
    // long beat data
    lda(IMM(0x1c));
    ldx(IMM(0x3));
    ldy(IMM(0x58));
    BNE(PlayBeat);
    JMP(SilentBeat);
}
void SilentBeat() {
    _debug("SilentBeat", __FILE__, __LINE__);
    // silence
    lda(IMM(0x10));
    JMP(PlayBeat);
}
void PlayBeat() {
    _debug("PlayBeat", __FILE__, __LINE__);
    // load beat data into noise regs
    sta(ABS(SND_NOISE_REG));
    stx(ABS(((SND_NOISE_REG) + (2))));
    sty(ABS(((SND_NOISE_REG) + (3))));
    JMP(ExitMusicHandler);
}
void ExitMusicHandler() {
    _debug("ExitMusicHandler", __FILE__, __LINE__);
    return;
}
void AlternateLengthHandler() {
    _debug("AlternateLengthHandler", __FILE__, __LINE__);
    // save a copy of original byte into X
    tax();
    // save LSB from original byte into carry
    ror();
    // reload original byte and rotate three times
    txa();
    // turning xx00000x into 00000xxx, with the
    rol();
    // bit in carry as the MSB here
    rol();
    rol();
    JMP(ProcessLengthData);
}
void ProcessLengthData() {
    _debug("ProcessLengthData", __FILE__, __LINE__);
    // clear all but the three LSBs
    anda(IMM(0b111));
    clc();
    // add offset loaded from first header byte
    adc(ABS(0xf0));
    // add extra if time running out music
    adc(ABS(NoteLengthTblAdder));
    tay();
    // load length
    lda(ABSY(0x8000+offsetof(G, MusicLengthLookupTbl)));
    return;
}
void LoadControlRegs() {
    _debug("LoadControlRegs", __FILE__, __LINE__);
    // check secondary buffer for win castle music
    lda(ABS(EventMusicBuffer));
    anda(IMM(EndOfCastleMusic));
    BEQ(NotECstlM);
    // this value is only used for win castle music
    lda(IMM(0x4));
    // unconditional branch
    BNE(AllMus);
    JMP(NotECstlM);
}
void NotECstlM() {
    _debug("NotECstlM", __FILE__, __LINE__);
    lda(ABS(AreaMusicBuffer));
    // check primary buffer for water music
    anda(IMM(0b1111101));
    BEQ(WaterMus);
    // this is the default value for all other music
    lda(IMM(0x8));
    BNE(AllMus);
    JMP(WaterMus);
}
void WaterMus() {
    _debug("WaterMus", __FILE__, __LINE__);
    // this value is used for water music and all other event music
    lda(IMM(0x28));
    JMP(AllMus);
}
void AllMus() {
    _debug("AllMus", __FILE__, __LINE__);
    // load contents of other sound regs for square 2
    ldx(IMM(0x82));
    ldy(IMM(0x7f));
    return;
}
void LoadEnvelopeData() {
    _debug("LoadEnvelopeData", __FILE__, __LINE__);
    // check secondary buffer for win castle music
    lda(ABS(EventMusicBuffer));
    anda(IMM(EndOfCastleMusic));
    BEQ(LoadUsualEnvData);
    // load data from offset for win castle music
    lda(ABSY(0x8000+offsetof(G, EndOfCastleMusicEnvData)));
    return;
}
void LoadUsualEnvData() {
    _debug("LoadUsualEnvData", __FILE__, __LINE__);
    // check primary buffer for water music
    lda(ABS(AreaMusicBuffer));
    anda(IMM(0b1111101));
    BEQ(LoadWaterEventMusEnvData);
    // load default data from offset for all other music
    lda(ABSY(0x8000+offsetof(G, AreaMusicEnvData)));
    return;
}
void LoadWaterEventMusEnvData() {
    _debug("LoadWaterEventMusEnvData", __FILE__, __LINE__);
    // load data from offset for water music and all other event music
    lda(ABSY(0x8000+offsetof(G, WaterEventMusEnvData)));
    return;
}
