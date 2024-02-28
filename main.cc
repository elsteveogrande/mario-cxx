#include <cstddef>
#include "main.h"

G g {

    /* 8000 (32768) */
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

    /* 8061 (32865) */
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

    /* 8079 (32889) */
    .ScoreUpdateData = {
    // dummy
    0xff, 0x41, 0x42, 0x44, 0x45, 0x48, 0x31, 0x32, 0x34, 0x35, 0x38, 0x0, },

    /* 8085 (32901) */
    .AreaPalette = {0x1, 0x2, 0x3, 0x4, },

    /* 8089 (32905) */
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

    /* 8158 (33112) */
    .ColorRotatePalette = {0x27, 0x27, 0x27, 0x17, 0x7, 0x17, },

    /* 815e (33118) */
    .BlankPalette = {0x3f, 0xc, 0x4, 0xff, 0xff, 0xff, 0xff, 0x0, },

    /* 8166 (33126) */
    .Palette3Data = {0xf, 0x7, 0x12, 0xf, 0xf, 0x7, 0x17, 0xf, 0xf, 0x7, 0x17, 0x1c, 0xf, 0x7, 0x17, 0x0, },

    /* 8176 (33142) */
    .BlockGfxData = {0x45, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x57, 0x58, 0x59, 0x5a, 0x24, 0x24, 0x24, 0x24, 0x26, 0x26, 0x26, 0x26, },

    /* 818a (33162) */
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

    /* 8326 (33574) */
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

    /* 8486 (33926) */
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

    /* 84cc (33996) */
    .HalfwayPageNybbles = {0x56, 0x40, 0x65, 0x70, 0x66, 0x40, 0x66, 0x40, 0x66, 0x40, 0x66, 0x60, 0x65, 0x70, 0x0, 0x0, },

    /* 84dc (34012) */
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

    /* 85e1 (34273) */
    .BlockBuffLowBounds = {0x10, 0x51, 0x88, 0xc0, },

    /* 85e5 (34277) */
    .FrenzyIDData = {FlyCheepCheepFrenzy, BBill_CCheep_Frenzy, Stop_Frenzy, },

    /* 85e8 (34280) */
    .PulleyRopeMetatiles = {0x42, 0x41, 0x43, },

    /* 85eb (34283) */
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

    /* 865f (34399) */
    .BlockBufferAddr = {LO8(Block_Buffer_1), LO8(Block_Buffer_2), HI8(Block_Buffer_1), HI8(Block_Buffer_2), },

    /* 8663 (34403) */
    .AreaDataOfsLoopback = {0x12, 0x36, 0xe, 0xe, 0xe, 0x32, 0x32, 0x32, 0xa, 0x26, 0x40, },

    /* 866e (34414) */
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

    /* 869b (34459) */
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

    /* 872b (34603) */
    .E_CastleArea1 = {0x76, 0xdd, 0xbb, 0x4c, 0xea, 0x1d, 0x1b, 0xcc, 0x56, 0x5d, 0x16, 0x9d, 0xc6, 0x1d, 0x36, 0x9d, 0xc9, 0x1d, 0x4, 0xdb, 0x49, 0x1d, 0x84, 0x1b, 0xc9, 0x5d, 0x88, 0x95, 0xf, 0x8, 0x30, 0x4c, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },

    /* 8752 (34642) */
    .E_CastleArea2 = {0xf, 0x3, 0x56, 0x1b, 0xc9, 0x1b, 0xf, 0x7, 0x36, 0x1b, 0xaa, 0x1b, 0x48, 0x95, 0xf, 0xa, 0x2a, 0x1b, 0x5b, 0xc, 0x78, 0x2d, 0x90, 0xb5, 0xff, },

    /* 876b (34667) */
    .E_CastleArea3 = {0xb, 0x8c, 0x4b, 0x4c, 0x77, 0x5f, 0xeb, 0xc, 0xbd, 0xdb, 0x19, 0x9d, 0x75, 0x1d, 0x7d, 0x5b, 0xd9, 0x1d, 0x3d, 0xdd, 0x99, 0x1d, 0x26, 0x9d, 0x5a, 0x2b, 0x8a, 0x2c, 0xca, 0x1b, 0x20, 0x95, 0x7b, 0x5c, 0xdb, 0x4c, 0x1b, 0xcc, 0x3b, 0xcc, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },

    /* 879a (34714) */
    .E_CastleArea4 = {0xb, 0x8c, 0x3b, 0x1d, 0x8b, 0x1d, 0xab, 0xc, 0xdb, 0x1d, 0xf, 0x3, 0x65, 0x1d, 0x6b, 0x1b, 0x5, 0x9d, 0xb, 0x1b, 0x5, 0x9b, 0xb, 0x1d, 0x8b, 0xc, 0x1b, 0x8c, 0x70, 0x15, 0x7b, 0xc, 0xdb, 0xc, 0xf, 0x8, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff, },

    /* 87c5 (34757) */
    .E_CastleArea5 = {0x27, 0xa9, 0x4b, 0xc, 0x68, 0x29, 0xf, 0x6, 0x77, 0x1b, 0xf, 0xb, 0x60, 0x15, 0x4b, 0x8c, 0x78, 0x2d, 0x90, 0xb5, 0xff, },

    /* 87da (34778) */
    .E_CastleArea6 = {0xf, 0x3, 0x8e, 0x65, 0xe1, 0xbb, 0x38, 0x6d, 0xa8, 0x3e, 0xe5, 0xe7, 0xf, 0x8, 0xb, 0x2, 0x2b, 0x2, 0x5e, 0x65, 0xe1, 0xbb, 0xe, 0xdb, 0xe, 0xbb, 0x8e, 0xdb, 0xe, 0xfe, 0x65, 0xec, 0xf, 0xd, 0x4e, 0x65, 0xe1, 0xf, 0xe, 0x4e, 0x2, 0xe0, 0xf, 0x10, 0xfe, 0xe5, 0xe1, 0x1b, 0x85, 0x7b, 0xc, 0x5b, 0x95, 0x78, 0x2d, 0x90, 0xb5, 0xff, },

    /* 8814 (34836) */
    .E_GroundArea1 = {0xa5, 0x86, 0xe4, 0x28, 0x18, 0xa8, 0x45, 0x83, 0x69, 0x3, 0xc6, 0x29, 0x9b, 0x83, 0x16, 0xa4, 0x88, 0x24, 0xe9, 0x28, 0x5, 0xa8, 0x7b, 0x28, 0x24, 0x8f, 0xc8, 0x3, 0xe8, 0x3, 0x46, 0xa8, 0x85, 0x24, 0xc8, 0x24, 0xff, },

    /* 8839 (34873) */
    .E_GroundArea2 = {0xeb, 0x8e, 0xf, 0x3, 0xfb, 0x5, 0x17, 0x85, 0xdb, 0x8e, 0xf, 0x7, 0x57, 0x5, 0x7b, 0x5, 0x9b, 0x80, 0x2b, 0x85, 0xfb, 0x5, 0xf, 0xb, 0x1b, 0x5, 0x9b, 0x5, 0xff, },

    /* 8856 (34902) */
    .E_GroundArea3 = {0x2e, 0xc2, 0x66, 0xe2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xf, 0xc, 0x12, 0x11, 0xff, },

    /* 8864 (34916) */
    .E_GroundArea4 = {0xe, 0xc2, 0xa8, 0xab, 0x0, 0xbb, 0x8e, 0x6b, 0x82, 0xde, 0x0, 0xa0, 0x33, 0x86, 0x43, 0x6, 0x3e, 0xb4, 0xa0, 0xcb, 0x2, 0xf, 0x7, 0x7e, 0x42, 0xa6, 0x83, 0x2, 0xf, 0xa, 0x3b, 0x2, 0xcb, 0x37, 0xf, 0xc, 0xe3, 0xe, 0xff, },

    /* 888b (34955) */
    .E_GroundArea5 = {0x9b, 0x8e, 0xca, 0xe, 0xee, 0x42, 0x44, 0x5b, 0x86, 0x80, 0xb8, 0x1b, 0x80, 0x50, 0xba, 0x10, 0xb7, 0x5b, 0x0, 0x17, 0x85, 0x4b, 0x5, 0xfe, 0x34, 0x40, 0xb7, 0x86, 0xc6, 0x6, 0x5b, 0x80, 0x83, 0x0, 0xd0, 0x38, 0x5b, 0x8e, 0x8a, 0xe, 0xa6, 0x0, 0xbb, 0xe, 0xc5, 0x80, 0xf3, 0x0, 0xff, },

    /* 88bc (35004) */
    .E_GroundArea6 = {0x1e, 0xc2, 0x0, 0x6b, 0x6, 0x8b, 0x86, 0x63, 0xb7, 0xf, 0x5, 0x3, 0x6, 0x23, 0x6, 0x4b, 0xb7, 0xbb, 0x0, 0x5b, 0xb7, 0xfb, 0x37, 0x3b, 0xb7, 0xf, 0xb, 0x1b, 0x37, 0xff, },

    /* 88da (35034) */
    .E_GroundArea7 = {0x2b, 0xd7, 0xe3, 0x3, 0xc2, 0x86, 0xe2, 0x6, 0x76, 0xa5, 0xa3, 0x8f, 0x3, 0x86, 0x2b, 0x57, 0x68, 0x28, 0xe9, 0x28, 0xe5, 0x83, 0x24, 0x8f, 0x36, 0xa8, 0x5b, 0x3, 0xff, },

    /* 88f7 (35063) */
    .E_GroundArea8 = {0xf, 0x2, 0x78, 0x40, 0x48, 0xce, 0xf8, 0xc3, 0xf8, 0xc3, 0xf, 0x7, 0x7b, 0x43, 0xc6, 0xd0, 0xf, 0x8a, 0xc8, 0x50, 0xff, },

    /* 890c (35084) */
    .E_GroundArea9 = {0x85, 0x86, 0xb, 0x80, 0x1b, 0x0, 0xdb, 0x37, 0x77, 0x80, 0xeb, 0x37, 0xfe, 0x2b, 0x20, 0x2b, 0x80, 0x7b, 0x38, 0xab, 0xb8, 0x77, 0x86, 0xfe, 0x42, 0x20, 0x49, 0x86, 0x8b, 0x6, 0x9b, 0x80, 0x7b, 0x8e, 0x5b, 0xb7, 0x9b, 0xe, 0xbb, 0xe, 0x9b, 0x80, },

    /* 8936 (35126) */
    .E_GroundArea10 = {0xff, },

    /* 8937 (35127) */
    .E_GroundArea11 = {0xb, 0x80, 0x60, 0x38, 0x10, 0xb8, 0xc0, 0x3b, 0xdb, 0x8e, 0x40, 0xb8, 0xf0, 0x38, 0x7b, 0x8e, 0xa0, 0xb8, 0xc0, 0xb8, 0xfb, 0x0, 0xa0, 0xb8, 0x30, 0xbb, 0xee, 0x42, 0x88, 0xf, 0xb, 0x2b, 0xe, 0x67, 0xe, 0xff, },

    /* 895b (35163) */
    .E_GroundArea12 = {0xa, 0xaa, 0xe, 0x28, 0x2a, 0xe, 0x31, 0x88, 0xff, },

    /* 8964 (35172) */
    .E_GroundArea13 = {0xc7, 0x83, 0xd7, 0x3, 0x42, 0x8f, 0x7a, 0x3, 0x5, 0xa4, 0x78, 0x24, 0xa6, 0x25, 0xe4, 0x25, 0x4b, 0x83, 0xe3, 0x3, 0x5, 0xa4, 0x89, 0x24, 0xb5, 0x24, 0x9, 0xa4, 0x65, 0x24, 0xc9, 0x24, 0xf, 0x8, 0x85, 0x25, 0xff, },

    /* 8989 (35209) */
    .E_GroundArea14 = {0xcd, 0xa5, 0xb5, 0xa8, 0x7, 0xa8, 0x76, 0x28, 0xcc, 0x25, 0x65, 0xa4, 0xa9, 0x24, 0xe5, 0x24, 0x19, 0xa4, 0xf, 0x7, 0x95, 0x28, 0xe6, 0x24, 0x19, 0xa4, 0xd7, 0x29, 0x16, 0xa9, 0x58, 0x29, 0x97, 0x29, 0xff, },

    /* 89ac (35244) */
    .E_GroundArea15 = {0xf, 0x2, 0x2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xff, },

    /* 89b5 (35253) */
    .E_GroundArea16 = {0xff, },

    /* 89b6 (35254) */
    .E_GroundArea17 = {0x2b, 0x82, 0xab, 0x38, 0xde, 0x42, 0xe2, 0x1b, 0xb8, 0xeb, 0x3b, 0xdb, 0x80, 0x8b, 0xb8, 0x1b, 0x82, 0xfb, 0xb8, 0x7b, 0x80, 0xfb, 0x3c, 0x5b, 0xbc, 0x7b, 0xb8, 0x1b, 0x8e, 0xcb, 0xe, 0x1b, 0x8e, 0xf, 0xd, 0x2b, 0x3b, 0xbb, 0xb8, 0xeb, 0x82, 0x4b, 0xb8, 0xbb, 0x38, 0x3b, 0xb7, 0xbb, 0x2, 0xf, 0x13, 0x1b, 0x0, 0xcb, 0x80, 0x6b, 0xbc, 0xff, },

    /* 89f0 (35312) */
    .E_GroundArea18 = {0x7b, 0x80, 0xae, 0x0, 0x80, 0x8b, 0x8e, 0xe8, 0x5, 0xf9, 0x86, 0x17, 0x86, 0x16, 0x85, 0x4e, 0x2b, 0x80, 0xab, 0x8e, 0x87, 0x85, 0xc3, 0x5, 0x8b, 0x82, 0x9b, 0x2, 0xab, 0x2, 0xbb, 0x86, 0xcb, 0x6, 0xd3, 0x3, 0x3b, 0x8e, 0x6b, 0xe, 0xa7, 0x8e, 0xff, },

    /* 8a1b (35355) */
    .E_GroundArea19 = {0x29, 0x8e, 0x52, 0x11, 0x83, 0xe, 0xf, 0x3, 0x9b, 0xe, 0x2b, 0x8e, 0x5b, 0xe, 0xcb, 0x8e, 0xfb, 0xe, 0xfb, 0x82, 0x9b, 0x82, 0xbb, 0x2, 0xfe, 0x42, 0xe8, 0xbb, 0x8e, 0xf, 0xa, 0xab, 0xe, 0xcb, 0xe, 0xf9, 0xe, 0x88, 0x86, 0xa6, 0x6, 0xdb, 0x2, 0xb6, 0x8e, 0xff, },

    /* 8a49 (35401) */
    .E_GroundArea20 = {0xab, 0xce, 0xde, 0x42, 0xc0, 0xcb, 0xce, 0x5b, 0x8e, 0x1b, 0xce, 0x4b, 0x85, 0x67, 0x45, 0xf, 0x7, 0x2b, 0x0, 0x7b, 0x85, 0x97, 0x5, 0xf, 0xa, 0x92, 0x2, 0xff, },

    /* 8a65 (35429) */
    .E_GroundArea21 = {0xa, 0xaa, 0xe, 0x24, 0x4a, 0x1e, 0x23, 0xaa, 0xff, },

    /* 8a6e (35438) */
    .E_GroundArea22 = {0x1b, 0x80, 0xbb, 0x38, 0x4b, 0xbc, 0xeb, 0x3b, 0xf, 0x4, 0x2b, 0x0, 0xab, 0x38, 0xeb, 0x0, 0xcb, 0x8e, 0xfb, 0x80, 0xab, 0xb8, 0x6b, 0x80, 0xfb, 0x3c, 0x9b, 0xbb, 0x5b, 0xbc, 0xfb, 0x0, 0x6b, 0xb8, 0xfb, 0x38, 0xff, },

    /* 8a93 (35475) */
    .E_UndergroundArea1 = {0xb, 0x86, 0x1a, 0x6, 0xdb, 0x6, 0xde, 0xc2, 0x2, 0xf0, 0x3b, 0xbb, 0x80, 0xeb, 0x6, 0xb, 0x86, 0x93, 0x6, 0xf0, 0x39, 0xf, 0x6, 0x60, 0xb8, 0x1b, 0x86, 0xa0, 0xb9, 0xb7, 0x27, 0xbd, 0x27, 0x2b, 0x83, 0xa1, 0x26, 0xa9, 0x26, 0xee, 0x25, 0xb, 0x27, 0xb4, 0xff, },

    /* 8ac0 (35520) */
    .E_UndergroundArea2 = {0xf, 0x2, 0x1e, 0x2f, 0x60, 0xe0, 0x3a, 0xa5, 0xa7, 0xdb, 0x80, 0x3b, 0x82, 0x8b, 0x2, 0xfe, 0x42, 0x68, 0x70, 0xbb, 0x25, 0xa7, 0x2c, 0x27, 0xb2, 0x26, 0xb9, 0x26, 0x9b, 0x80, 0xa8, 0x82, 0xb5, 0x27, 0xbc, 0x27, 0xb0, 0xbb, 0x3b, 0x82, 0x87, 0x34, 0xee, 0x25, 0x6b, 0xff, },

    /* 8aee (35566) */
    .E_UndergroundArea3 = {0x1e, 0xa5, 0xa, 0x2e, 0x28, 0x27, 0x2e, 0x33, 0xc7, 0xf, 0x3, 0x1e, 0x40, 0x7, 0x2e, 0x30, 0xe7, 0xf, 0x5, 0x1e, 0x24, 0x44, 0xf, 0x7, 0x1e, 0x22, 0x6a, 0x2e, 0x23, 0xab, 0xf, 0x9, 0x1e, 0x41, 0x68, 0x1e, 0x2a, 0x8a, 0x2e, 0x23, 0xa2, 0x2e, 0x32, 0xea, 0xff, },

    /* 8b1b (35611) */
    .E_WaterArea1 = {0x3b, 0x87, 0x66, 0x27, 0xcc, 0x27, 0xee, 0x31, 0x87, 0xee, 0x23, 0xa7, 0x3b, 0x87, 0xdb, 0x7, 0xff, },

    /* 8b2c (35628) */
    .E_WaterArea2 = {0xf, 0x1, 0x2e, 0x25, 0x2b, 0x2e, 0x25, 0x4b, 0x4e, 0x25, 0xcb, 0x6b, 0x7, 0x97, 0x47, 0xe9, 0x87, 0x47, 0xc7, 0x7a, 0x7, 0xd6, 0xc7, 0x78, 0x7, 0x38, 0x87, 0xab, 0x47, 0xe3, 0x7, 0x9b, 0x87, 0xf, 0x9, 0x68, 0x47, 0xdb, 0xc7, 0x3b, 0xc7, 0xff, },

    /* 8b56 (35670) */
    .E_WaterArea3 = {0x47, 0x9b, 0xcb, 0x7, 0xfa, 0x1d, 0x86, 0x9b, 0x3a, 0x87, 0x56, 0x7, 0x88, 0x1b, 0x7, 0x9d, 0x2e, 0x65, 0xf0, 0xff, },

    /* 8b6a (35690) */
    .L_CastleArea1 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xce, 0x3, 0xdc, 0x51, 0xee, 0x7, 0x73, 0xe0, 0x74, 0xa, 0x7e, 0x6, 0x9e, 0xa, 0xce, 0x6, 0xe4, 0x0, 0xe8, 0xa, 0xfe, 0xa, 0x2e, 0x89, 0x4e, 0xb, 0x54, 0xa, 0x14, 0x8a, 0xc4, 0xa, 0x34, 0x8a, 0x7e, 0x6, 0xc7, 0xa, 0x1, 0xe0, 0x2, 0xa, 0x47, 0xa, 0x81, 0x60, 0x82, 0xa, 0xc7, 0xa, 0xe, 0x87, 0x7e, 0x2, 0xa7, 0x2, 0xb3, 0x2, 0xd7, 0x2, 0xe3, 0x2, 0x7, 0x82, 0x13, 0x2, 0x3e, 0x6, 0x7e, 0x2, 0xae, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8bcb (35787) */
    .L_CastleArea2 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0x68, 0x64, 0x98, 0x64, 0xa8, 0x64, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x1, 0x1e, 0xe, 0x7e, 0x2, 0x94, 0x63, 0xb4, 0x63, 0xd4, 0x63, 0xf4, 0x63, 0x14, 0xe3, 0x2e, 0xe, 0x5e, 0x2, 0x64, 0x35, 0x88, 0x72, 0xbe, 0xe, 0xd, 0x4, 0xae, 0x2, 0xce, 0x8, 0xcd, 0x4b, 0xfe, 0x2, 0xd, 0x5, 0x68, 0x31, 0x7e, 0xa, 0x96, 0x31, 0xa9, 0x63, 0xa8, 0x33, 0xd5, 0x30, 0xee, 0x2, 0xe6, 0x62, 0xf4, 0x61, 0x4, 0xb1, 0x8, 0x3f, 0x44, 0x33, 0x94, 0x63, 0xa4, 0x31, 0xe4, 0x31, 0x4, 0xbf, 0x8, 0x3f, 0x4, 0xbf, 0x8, 0x3f, 0xcd, 0x4b, 0x3, 0xe4, 0xe, 0x3, 0x2e, 0x1, 0x7e, 0x6, 0xbe, 0x2, 0xde, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8c4a (35914) */
    .L_CastleArea3 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x0, 0x27, 0xb1, 0x65, 0x32, 0x75, 0xa, 0x71, 0x0, 0xb7, 0x31, 0x8, 0xe4, 0x18, 0x64, 0x1e, 0x4, 0x57, 0x3b, 0xbb, 0xa, 0x17, 0x8a, 0x27, 0x3a, 0x73, 0xa, 0x7b, 0xa, 0xd7, 0xa, 0xe7, 0x3a, 0x3b, 0x8a, 0x97, 0xa, 0xfe, 0x8, 0x24, 0x8a, 0x2e, 0x0, 0x3e, 0x40, 0x38, 0x64, 0x6f, 0x0, 0x9f, 0x0, 0xbe, 0x43, 0xc8, 0xa, 0xc9, 0x63, 0xce, 0x7, 0xfe, 0x7, 0x2e, 0x81, 0x66, 0x42, 0x6a, 0x42, 0x79, 0xa, 0xbe, 0x0, 0xc8, 0x64, 0xf8, 0x64, 0x8, 0xe4, 0x2e, 0x7, 0x7e, 0x3, 0x9e, 0x7, 0xbe, 0x3, 0xde, 0x7, 0xfe, 0xa, 0x3, 0xa5, 0xd, 0x44, 0xcd, 0x43, 0xce, 0x9, 0xdd, 0x42, 0xde, 0xb, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8cbd (36029) */
    .L_CastleArea4 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x6, 0xc, 0x81, 0x39, 0xa, 0x5c, 0x1, 0x89, 0xa, 0xac, 0x1, 0xd9, 0xa, 0xfc, 0x1, 0x2e, 0x83, 0xa7, 0x1, 0xb7, 0x0, 0xc7, 0x1, 0xde, 0xa, 0xfe, 0x2, 0x4e, 0x83, 0x5a, 0x32, 0x63, 0xa, 0x69, 0xa, 0x7e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x1e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x14, 0x42, 0x1e, 0x2, 0x7e, 0xa, 0x9e, 0x7, 0xfe, 0xa, 0x2e, 0x86, 0x5e, 0xa, 0x8e, 0x6, 0xbe, 0xa, 0xee, 0x7, 0x3e, 0x83, 0x5e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0x41, 0x52, 0x51, 0x52, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8d2a (36138) */
    .L_CastleArea5 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0xa, 0xae, 0x86, 0xbe, 0x7, 0xfe, 0x2, 0xd, 0x2, 0x27, 0x32, 0x46, 0x61, 0x55, 0x62, 0x5e, 0xe, 0x1e, 0x82, 0x68, 0x3c, 0x74, 0x3a, 0x7d, 0x4b, 0x5e, 0x8e, 0x7d, 0x4b, 0x7e, 0x82, 0x84, 0x62, 0x94, 0x61, 0xa4, 0x31, 0xbd, 0x4b, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x6, 0x34, 0x31, 0x3e, 0xa, 0x64, 0x32, 0x75, 0xa, 0x7b, 0x61, 0xa4, 0x33, 0xae, 0x2, 0xde, 0xe, 0x3e, 0x82, 0x64, 0x32, 0x78, 0x32, 0xb4, 0x36, 0xc8, 0x36, 0xdd, 0x4b, 0x44, 0xb2, 0x58, 0x32, 0x94, 0x63, 0xa4, 0x3e, 0xba, 0x30, 0xc9, 0x61, 0xce, 0x6, 0xdd, 0x4b, 0xce, 0x86, 0xdd, 0x4b, 0xfe, 0x2, 0x2e, 0x86, 0x5e, 0x2, 0x7e, 0x6, 0xfe, 0x2, 0x1e, 0x86, 0x3e, 0x2, 0x5e, 0x6, 0x7e, 0x2, 0x9e, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8db5 (36277) */
    .L_CastleArea6 = {0x5b, 0x6, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0xae, 0x2, 0xd, 0x1, 0x39, 0x73, 0xd, 0x3, 0x39, 0x7b, 0x4d, 0x4b, 0xde, 0x6, 0x1e, 0x8a, 0xae, 0x6, 0xc4, 0x33, 0x16, 0xfe, 0xa5, 0x77, 0xfe, 0x2, 0xfe, 0x82, 0xd, 0x7, 0x39, 0x73, 0xa8, 0x74, 0xed, 0x4b, 0x49, 0xfb, 0xe8, 0x74, 0xfe, 0xa, 0x2e, 0x82, 0x67, 0x2, 0x84, 0x7a, 0x87, 0x31, 0xd, 0xb, 0xfe, 0x2, 0xd, 0xc, 0x39, 0x73, 0x5e, 0x6, 0xc6, 0x76, 0x45, 0xff, 0xbe, 0xa, 0xdd, 0x48, 0xfe, 0x6, 0x3d, 0xcb, 0x46, 0x7e, 0xad, 0x4a, 0xfe, 0x82, 0x39, 0xf3, 0xa9, 0x7b, 0x4e, 0x8a, 0x9e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd, },

    /* 8e26 (36390) */
    .L_GroundArea1 = {0x94, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x28, 0x94, 0x65, 0x15, 0xeb, 0x12, 0xfa, 0x41, 0x4a, 0x96, 0x54, 0x40, 0xa4, 0x42, 0xb7, 0x13, 0xe9, 0x19, 0xf5, 0x15, 0x11, 0x80, 0x47, 0x42, 0x71, 0x13, 0x80, 0x41, 0x15, 0x92, 0x1b, 0x1f, 0x24, 0x40, 0x55, 0x12, 0x64, 0x40, 0x95, 0x12, 0xa4, 0x40, 0xd2, 0x12, 0xe1, 0x40, 0x13, 0xc0, 0x2c, 0x17, 0x2f, 0x12, 0x49, 0x13, 0x83, 0x40, 0x9f, 0x14, 0xa3, 0x40, 0x17, 0x92, 0x83, 0x13, 0x92, 0x41, 0xb9, 0x14, 0xc5, 0x12, 0xc8, 0x40, 0xd4, 0x40, 0x4b, 0x92, 0x78, 0x1b, 0x9c, 0x94, 0x9f, 0x11, 0xdf, 0x14, 0xfe, 0x11, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd, },

    /* 8e89 (36489) */
    .L_GroundArea2 = {0x90, 0xb1, 0xf, 0x26, 0x29, 0x91, 0x7e, 0x42, 0xfe, 0x40, 0x28, 0x92, 0x4e, 0x42, 0x2e, 0xc0, 0x57, 0x73, 0xc3, 0x25, 0xc7, 0x27, 0x23, 0x84, 0x33, 0x20, 0x5c, 0x1, 0x77, 0x63, 0x88, 0x62, 0x99, 0x61, 0xaa, 0x60, 0xbc, 0x1, 0xee, 0x42, 0x4e, 0xc0, 0x69, 0x11, 0x7e, 0x42, 0xde, 0x40, 0xf8, 0x62, 0xe, 0xc2, 0xae, 0x40, 0xd7, 0x63, 0xe7, 0x63, 0x33, 0xa7, 0x37, 0x27, 0x43, 0x4, 0xcc, 0x1, 0xe7, 0x73, 0xc, 0x81, 0x3e, 0x42, 0xd, 0xa, 0x5e, 0x40, 0x88, 0x72, 0xbe, 0x42, 0xe7, 0x87, 0xfe, 0x40, 0x39, 0xe1, 0x4e, 0x0, 0x69, 0x60, 0x87, 0x60, 0xa5, 0x60, 0xc3, 0x31, 0xfe, 0x31, 0x6d, 0xc1, 0xbe, 0x42, 0xef, 0x20, 0xfd, },

    /* 8ef2 (36594) */
    .L_GroundArea3 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x40, 0x58, 0xf2, 0x93, 0x1, 0x97, 0x0, 0xc, 0x81, 0x97, 0x40, 0xa6, 0x41, 0xc7, 0x40, 0xd, 0x4, 0x3, 0x1, 0x7, 0x1, 0x23, 0x1, 0x27, 0x1, 0xec, 0x3, 0xac, 0xf3, 0xc3, 0x3, 0x78, 0xe2, 0x94, 0x43, 0x47, 0xf3, 0x74, 0x43, 0x47, 0xfb, 0x74, 0x43, 0x2c, 0xf1, 0x4c, 0x63, 0x47, 0x0, 0x57, 0x21, 0x5c, 0x1, 0x7c, 0x72, 0x39, 0xf1, 0xec, 0x2, 0x4c, 0x81, 0xd8, 0x62, 0xec, 0x1, 0xd, 0xd, 0xf, 0x38, 0xc7, 0x7, 0xed, 0x4a, 0x1d, 0xc1, 0x5f, 0x26, 0xfd, },

    /* 8f45 (36677) */
    .L_GroundArea4 = {0x54, 0x21, 0xf, 0x26, 0xa7, 0x22, 0x37, 0xfb, 0x73, 0x20, 0x83, 0x7, 0x87, 0x2, 0x93, 0x20, 0xc7, 0x73, 0x4, 0xf1, 0x6, 0x31, 0x39, 0x71, 0x59, 0x71, 0xe7, 0x73, 0x37, 0xa0, 0x47, 0x4, 0x86, 0x7c, 0xe5, 0x71, 0xe7, 0x31, 0x33, 0xa4, 0x39, 0x71, 0xa9, 0x71, 0xd3, 0x23, 0x8, 0xf2, 0x13, 0x5, 0x27, 0x2, 0x49, 0x71, 0x75, 0x75, 0xe8, 0x72, 0x67, 0xf3, 0x99, 0x71, 0xe7, 0x20, 0xf4, 0x72, 0xf7, 0x31, 0x17, 0xa0, 0x33, 0x20, 0x39, 0x71, 0x73, 0x28, 0xbc, 0x5, 0x39, 0xf1, 0x79, 0x71, 0xa6, 0x21, 0xc3, 0x6, 0xd3, 0x20, 0xdc, 0x0, 0xfc, 0x0, 0x7, 0xa2, 0x13, 0x21, 0x5f, 0x32, 0x8c, 0x0, 0x98, 0x7a, 0xc7, 0x63, 0xd9, 0x61, 0x3, 0xa2, 0x7, 0x22, 0x74, 0x72, 0x77, 0x31, 0xe7, 0x73, 0x39, 0xf1, 0x58, 0x72, 0x77, 0x73, 0xd8, 0x72, 0x7f, 0xb1, 0x97, 0x73, 0xb6, 0x64, 0xc5, 0x65, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 8fd4 (36820) */
    .L_GroundArea5 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x66, 0x7, 0x81, 0x36, 0x1, 0x66, 0x0, 0xa7, 0x22, 0x8, 0xf2, 0x67, 0x7b, 0xdc, 0x2, 0x98, 0xf2, 0xd7, 0x20, 0x39, 0xf1, 0x9f, 0x33, 0xdc, 0x27, 0xdc, 0x57, 0x23, 0x83, 0x57, 0x63, 0x6c, 0x51, 0x87, 0x63, 0x99, 0x61, 0xa3, 0x6, 0xb3, 0x21, 0x77, 0xf3, 0xf3, 0x21, 0xf7, 0x2a, 0x13, 0x81, 0x23, 0x22, 0x53, 0x0, 0x63, 0x22, 0xe9, 0xb, 0xc, 0x83, 0x13, 0x21, 0x16, 0x22, 0x33, 0x5, 0x8f, 0x35, 0xec, 0x1, 0x63, 0xa0, 0x67, 0x20, 0x73, 0x1, 0x77, 0x1, 0x83, 0x20, 0x87, 0x20, 0xb3, 0x20, 0xb7, 0x20, 0xc3, 0x1, 0xc7, 0x0, 0xd3, 0x20, 0xd7, 0x20, 0x67, 0xa0, 0x77, 0x7, 0x87, 0x22, 0xe8, 0x62, 0xf5, 0x65, 0x1c, 0x82, 0x7f, 0x38, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 9049 (36937) */
    .L_GroundArea6 = {0x50, 0x21, 0x7, 0x81, 0x47, 0x24, 0x57, 0x0, 0x63, 0x1, 0x77, 0x1, 0xc9, 0x71, 0x68, 0xf2, 0xe7, 0x73, 0x97, 0xfb, 0x6, 0x83, 0x5c, 0x1, 0xd7, 0x22, 0xe7, 0x0, 0x3, 0xa7, 0x6c, 0x2, 0xb3, 0x22, 0xe3, 0x1, 0xe7, 0x7, 0x47, 0xa0, 0x57, 0x6, 0xa7, 0x1, 0xd3, 0x0, 0xd7, 0x1, 0x7, 0x81, 0x67, 0x20, 0x93, 0x22, 0x3, 0xa3, 0x1c, 0x61, 0x17, 0x21, 0x6f, 0x33, 0xc7, 0x63, 0xd8, 0x62, 0xe9, 0x61, 0xfa, 0x60, 0x4f, 0xb3, 0x87, 0x63, 0x9c, 0x1, 0xb7, 0x63, 0xc8, 0x62, 0xd9, 0x61, 0xea, 0x60, 0x39, 0xf1, 0x87, 0x21, 0xa7, 0x1, 0xb7, 0x20, 0x39, 0xf1, 0x5f, 0x38, 0x6d, 0xc1, 0xaf, 0x26, 0xfd, },

    /* 90ae (37038) */
    .L_GroundArea7 = {0x90, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2a, 0x93, 0x87, 0x17, 0xa3, 0x14, 0xb2, 0x42, 0xa, 0x92, 0x19, 0x40, 0x36, 0x14, 0x50, 0x41, 0x82, 0x16, 0x2b, 0x93, 0x24, 0x41, 0xbb, 0x14, 0xb8, 0x0, 0xc2, 0x43, 0xc3, 0x13, 0x1b, 0x94, 0x67, 0x12, 0xc4, 0x15, 0x53, 0xc1, 0xd2, 0x41, 0x12, 0xc1, 0x29, 0x13, 0x85, 0x17, 0x1b, 0x92, 0x1a, 0x42, 0x47, 0x13, 0x83, 0x41, 0xa7, 0x13, 0xe, 0x91, 0xa7, 0x63, 0xb7, 0x63, 0xc5, 0x65, 0xd5, 0x65, 0xdd, 0x4a, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xae, 0x42, 0xdf, 0x20, 0xfd, },

    /* 9103 (37123) */
    .L_GroundArea8 = {0x90, 0x11, 0xf, 0x26, 0x6e, 0x10, 0x8b, 0x17, 0xaf, 0x32, 0xd8, 0x62, 0xe8, 0x62, 0xfc, 0x3f, 0xad, 0xc8, 0xf8, 0x64, 0xc, 0xbe, 0x43, 0x43, 0xf8, 0x64, 0xc, 0xbf, 0x73, 0x40, 0x84, 0x40, 0x93, 0x40, 0xa4, 0x40, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0x83, 0x40, 0x92, 0x41, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0xf8, 0x64, 0x13, 0xc2, 0x37, 0x65, 0x4c, 0x24, 0x63, 0x0, 0x97, 0x65, 0xc3, 0x42, 0xb, 0x97, 0xac, 0x32, 0xf8, 0x64, 0xc, 0xbe, 0x53, 0x45, 0x9d, 0x48, 0xf8, 0x64, 0x2a, 0xe2, 0x3c, 0x47, 0x56, 0x43, 0xba, 0x62, 0xf8, 0x64, 0xc, 0xb7, 0x88, 0x64, 0xbc, 0x31, 0xd4, 0x45, 0xfc, 0x31, 0x3c, 0xb1, 0x78, 0x64, 0x8c, 0x38, 0xb, 0x9c, 0x1a, 0x33, 0x18, 0x61, 0x28, 0x61, 0x39, 0x60, 0x5d, 0x4a, 0xee, 0x11, 0xf, 0xb8, 0x1d, 0xc1, 0x3e, 0x42, 0x6f, 0x20, 0xfd, },

    /* 9188 (37256) */
    .L_GroundArea9 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xf7, 0x20, 0x7, 0x84, 0x17, 0x20, 0x4f, 0x34, 0xc3, 0x3, 0xc7, 0x2, 0xd3, 0x22, 0x27, 0xe3, 0x39, 0x61, 0xe7, 0x73, 0x5c, 0xe4, 0x57, 0x0, 0x6c, 0x73, 0x47, 0xa0, 0x53, 0x6, 0x63, 0x22, 0xa7, 0x73, 0xfc, 0x73, 0x13, 0xa1, 0x33, 0x5, 0x43, 0x21, 0x5c, 0x72, 0xc3, 0x23, 0xcc, 0x3, 0x77, 0xfb, 0xac, 0x2, 0x39, 0xf1, 0xa7, 0x73, 0xd3, 0x4, 0xe8, 0x72, 0xe3, 0x22, 0x26, 0xf4, 0xbc, 0x2, 0x8c, 0x81, 0xa8, 0x62, 0x17, 0x87, 0x43, 0x24, 0xa7, 0x1, 0xc3, 0x4, 0x8, 0xf2, 0x97, 0x21, 0xa3, 0x2, 0xc9, 0xb, 0xe1, 0x69, 0xf1, 0x69, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 91ed (37357) */
    .L_GroundArea10 = {0x38, 0x11, 0xf, 0x26, 0xad, 0x40, 0x3d, 0xc7, 0xfd, },

    /* 91f6 (37366) */
    .L_GroundArea11 = {0x95, 0xb1, 0xf, 0x26, 0xd, 0x2, 0xc8, 0x72, 0x1c, 0x81, 0x38, 0x72, 0xd, 0x5, 0x97, 0x34, 0x98, 0x62, 0xa3, 0x20, 0xb3, 0x6, 0xc3, 0x20, 0xcc, 0x3, 0xf9, 0x91, 0x2c, 0x81, 0x48, 0x62, 0xd, 0x9, 0x37, 0x63, 0x47, 0x3, 0x57, 0x21, 0x8c, 0x2, 0xc5, 0x79, 0xc7, 0x31, 0xf9, 0x11, 0x39, 0xf1, 0xa9, 0x11, 0x6f, 0xb4, 0xd3, 0x65, 0xe3, 0x65, 0x7d, 0xc1, 0xbf, 0x26, 0xfd, },

    /* 9235 (37429) */
    .L_GroundArea12 = {0x0, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x2, 0x42, 0x43, 0x4f, 0x52, 0xc2, 0xde, 0x0, 0x5a, 0xc2, 0x4d, 0xc7, 0xfd, },

    /* 924a (37450) */
    .L_GroundArea13 = {0x90, 0x51, 0xf, 0x26, 0xee, 0x10, 0xb, 0x94, 0x33, 0x14, 0x42, 0x42, 0x77, 0x16, 0x86, 0x44, 0x2, 0x92, 0x4a, 0x16, 0x69, 0x42, 0x73, 0x14, 0xb0, 0x0, 0xc7, 0x12, 0x5, 0xc0, 0x1c, 0x17, 0x1f, 0x11, 0x36, 0x12, 0x8f, 0x14, 0x91, 0x40, 0x1b, 0x94, 0x35, 0x12, 0x34, 0x42, 0x60, 0x42, 0x61, 0x12, 0x87, 0x12, 0x96, 0x40, 0xa3, 0x14, 0x1c, 0x98, 0x1f, 0x11, 0x47, 0x12, 0x9f, 0x15, 0xcc, 0x15, 0xcf, 0x11, 0x5, 0xc0, 0x1f, 0x15, 0x39, 0x12, 0x7c, 0x16, 0x7f, 0x11, 0x82, 0x40, 0x98, 0x12, 0xdf, 0x15, 0x16, 0xc4, 0x17, 0x14, 0x54, 0x12, 0x9b, 0x16, 0x28, 0x94, 0xce, 0x1, 0x3d, 0xc1, 0x5e, 0x42, 0x8f, 0x20, 0xfd, },

    /* 92b1 (37553) */
    .L_GroundArea14 = {0x97, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2b, 0x92, 0x57, 0x12, 0x8b, 0x12, 0xc0, 0x41, 0xf7, 0x13, 0x5b, 0x92, 0x69, 0xb, 0xbb, 0x12, 0xb2, 0x46, 0x19, 0x93, 0x71, 0x0, 0x17, 0x94, 0x7c, 0x14, 0x7f, 0x11, 0x93, 0x41, 0xbf, 0x15, 0xfc, 0x13, 0xff, 0x11, 0x2f, 0x95, 0x50, 0x42, 0x51, 0x12, 0x58, 0x14, 0xa6, 0x12, 0xdb, 0x12, 0x1b, 0x93, 0x46, 0x43, 0x7b, 0x12, 0x8d, 0x49, 0xb7, 0x14, 0x1b, 0x94, 0x49, 0xb, 0xbb, 0x12, 0xfc, 0x13, 0xff, 0x12, 0x3, 0xc1, 0x2f, 0x15, 0x43, 0x12, 0x4b, 0x13, 0x77, 0x13, 0x9d, 0x4a, 0x15, 0xc1, 0xa1, 0x41, 0xc3, 0x12, 0xfe, 0x1, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd, },

    /* 9316 (37654) */
    .L_GroundArea15 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x44, 0xc, 0xf1, 0x4c, 0x1, 0xaa, 0x35, 0xd9, 0x34, 0xee, 0x20, 0x8, 0xb3, 0x37, 0x32, 0x43, 0x4, 0x4e, 0x21, 0x53, 0x20, 0x7c, 0x1, 0x97, 0x21, 0xb7, 0x7, 0x9c, 0x81, 0xe7, 0x42, 0x5f, 0xb3, 0x97, 0x63, 0xac, 0x2, 0xc5, 0x41, 0x49, 0xe0, 0x58, 0x61, 0x76, 0x64, 0x85, 0x65, 0x94, 0x66, 0xa4, 0x22, 0xa6, 0x3, 0xc8, 0x22, 0xdc, 0x2, 0x68, 0xf2, 0x96, 0x42, 0x13, 0x82, 0x17, 0x2, 0xaf, 0x34, 0xf6, 0x21, 0xfc, 0x6, 0x26, 0x80, 0x2a, 0x24, 0x36, 0x1, 0x8c, 0x0, 0xff, 0x35, 0x4e, 0xa0, 0x55, 0x21, 0x77, 0x20, 0x87, 0x7, 0x89, 0x22, 0xae, 0x21, 0x4c, 0x82, 0x9f, 0x34, 0xec, 0x1, 0x3, 0xe7, 0x13, 0x67, 0x8d, 0x4a, 0xad, 0x41, 0xf, 0xa6, 0xfd, },

    /* 9389 (37769) */
    .L_GroundArea16 = {0x10, 0x51, 0x4c, 0x0, 0xc7, 0x12, 0xc6, 0x42, 0x3, 0x92, 0x2, 0x42, 0x29, 0x12, 0x63, 0x12, 0x62, 0x42, 0x69, 0x14, 0xa5, 0x12, 0xa4, 0x42, 0xe2, 0x14, 0xe1, 0x44, 0xf8, 0x16, 0x37, 0xc1, 0x8f, 0x38, 0x2, 0xbb, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xe0, 0x6a, 0xf0, 0x6a, 0x6d, 0xc5, 0xfd, },

    /* 93ba (37818) */
    .L_GroundArea17 = {0x92, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xd, 0x2, 0x37, 0x73, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x6c, 0x0, 0x9c, 0x0, 0x6, 0xc0, 0xc7, 0x73, 0x6, 0x83, 0x28, 0x72, 0x96, 0x40, 0xe7, 0x73, 0x26, 0xc0, 0x87, 0x7b, 0xd2, 0x41, 0x39, 0xf1, 0xc8, 0xf2, 0x97, 0xe3, 0xa3, 0x23, 0xe7, 0x2, 0xe3, 0x7, 0xf3, 0x22, 0x37, 0xe3, 0x9c, 0x0, 0xbc, 0x0, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x86, 0x21, 0xa6, 0x6, 0xb6, 0x24, 0x5c, 0x80, 0x7c, 0x0, 0x9c, 0x0, 0x29, 0xe1, 0xdc, 0x5, 0xf6, 0x41, 0xdc, 0x80, 0xe8, 0x72, 0xc, 0x81, 0x27, 0x73, 0x4c, 0x1, 0x66, 0x74, 0xd, 0x11, 0x3f, 0x35, 0xb6, 0x41, 0x2c, 0x82, 0x36, 0x40, 0x7c, 0x2, 0x86, 0x40, 0xf9, 0x61, 0x39, 0xe1, 0xac, 0x4, 0xc6, 0x41, 0xc, 0x83, 0x16, 0x41, 0x88, 0xf2, 0x39, 0xf1, 0x7c, 0x0, 0x89, 0x61, 0x9c, 0x0, 0xa7, 0x63, 0xbc, 0x0, 0xc5, 0x65, 0xdc, 0x0, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 944d (37965) */
    .L_GroundArea18 = {0x55, 0xb1, 0xf, 0x26, 0xcf, 0x33, 0x7, 0xb2, 0x15, 0x11, 0x52, 0x42, 0x99, 0xb, 0xac, 0x2, 0xd3, 0x24, 0xd6, 0x42, 0xd7, 0x25, 0x23, 0x84, 0xcf, 0x33, 0x7, 0xe3, 0x19, 0x61, 0x78, 0x7a, 0xef, 0x33, 0x2c, 0x81, 0x46, 0x64, 0x55, 0x65, 0x65, 0x65, 0xec, 0x74, 0x47, 0x82, 0x53, 0x5, 0x63, 0x21, 0x62, 0x41, 0x96, 0x22, 0x9a, 0x41, 0xcc, 0x3, 0xb9, 0x91, 0x39, 0xf1, 0x63, 0x26, 0x67, 0x27, 0xd3, 0x6, 0xfc, 0x1, 0x18, 0xe2, 0xd9, 0x7, 0xe9, 0x4, 0xc, 0x86, 0x37, 0x22, 0x93, 0x24, 0x87, 0x84, 0xac, 0x2, 0xc2, 0x41, 0xc3, 0x23, 0xd9, 0x71, 0xfc, 0x1, 0x7f, 0xb1, 0x9c, 0x0, 0xa7, 0x63, 0xb6, 0x64, 0xcc, 0x0, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 94c0 (38080) */
    .L_GroundArea19 = {0x50, 0xb1, 0xf, 0x26, 0xfc, 0x0, 0x1f, 0xb3, 0x5c, 0x0, 0x65, 0x65, 0x74, 0x66, 0x83, 0x67, 0x93, 0x67, 0xdc, 0x73, 0x4c, 0x80, 0xb3, 0x20, 0xc9, 0xb, 0xc3, 0x8, 0xd3, 0x2f, 0xdc, 0x0, 0x2c, 0x80, 0x4c, 0x0, 0x8c, 0x0, 0xd3, 0x2e, 0xed, 0x4a, 0xfc, 0x0, 0xd7, 0xa1, 0xec, 0x1, 0x4c, 0x80, 0x59, 0x11, 0xd8, 0x11, 0xda, 0x10, 0x37, 0xa0, 0x47, 0x4, 0x99, 0x11, 0xe7, 0x21, 0x3a, 0x90, 0x67, 0x20, 0x76, 0x10, 0x77, 0x60, 0x87, 0x7, 0xd8, 0x12, 0x39, 0xf1, 0xac, 0x0, 0xe9, 0x71, 0xc, 0x80, 0x2c, 0x0, 0x4c, 0x5, 0xc7, 0x7b, 0x39, 0xf1, 0xec, 0x0, 0xf9, 0x11, 0xc, 0x82, 0x6f, 0x34, 0xf8, 0x11, 0xfa, 0x10, 0x7f, 0xb2, 0xac, 0x0, 0xb6, 0x64, 0xcc, 0x1, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd, },

    /* 9539 (38201) */
    .L_GroundArea20 = {0x52, 0xb1, 0xf, 0x20, 0x6e, 0x45, 0x39, 0x91, 0xb3, 0x4, 0xc3, 0x21, 0xc8, 0x11, 0xca, 0x10, 0x49, 0x91, 0x7c, 0x73, 0xe8, 0x12, 0x88, 0x91, 0x8a, 0x10, 0xe7, 0x21, 0x5, 0x91, 0x7, 0x30, 0x17, 0x7, 0x27, 0x20, 0x49, 0x11, 0x9c, 0x1, 0xc8, 0x72, 0x23, 0xa6, 0x27, 0x26, 0xd3, 0x3, 0xd8, 0x7a, 0x89, 0x91, 0xd8, 0x72, 0x39, 0xf1, 0xa9, 0x11, 0x9, 0xf1, 0x63, 0x24, 0x67, 0x24, 0xd8, 0x62, 0x28, 0x91, 0x2a, 0x10, 0x56, 0x21, 0x70, 0x4, 0x79, 0xb, 0x8c, 0x0, 0x94, 0x21, 0x9f, 0x35, 0x2f, 0xb8, 0x3d, 0xc1, 0x7f, 0x26, 0xfd, },

    /* 9592 (38290) */
    .L_GroundArea21 = {0x6, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x6, 0x20, 0x24, 0x4f, 0x35, 0xa0, 0x36, 0x20, 0x53, 0x46, 0xd5, 0x20, 0xd6, 0x20, 0x34, 0xa1, 0x73, 0x49, 0x74, 0x20, 0x94, 0x20, 0xb4, 0x20, 0xd4, 0x20, 0xf4, 0x20, 0x2e, 0x80, 0x59, 0x42, 0x4d, 0xc7, 0xfd, },

    /* 95bd (38333) */
    .L_GroundArea22 = {0x96, 0x31, 0xf, 0x26, 0xd, 0x3, 0x1a, 0x60, 0x77, 0x42, 0xc4, 0x0, 0xc8, 0x62, 0xb9, 0xe1, 0xd3, 0x6, 0xd7, 0x7, 0xf9, 0x61, 0xc, 0x81, 0x4e, 0xb1, 0x8e, 0xb1, 0xbc, 0x1, 0xe4, 0x50, 0xe9, 0x61, 0xc, 0x81, 0xd, 0xa, 0x84, 0x43, 0x98, 0x72, 0xd, 0xc, 0xf, 0x38, 0x1d, 0xc1, 0x5f, 0x26, 0xfd, },

    /* 95f0 (38384) */
    .L_UndergroundArea1 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xa7, 0x0, 0xbc, 0x73, 0x1a, 0xe0, 0x39, 0x61, 0x58, 0x62, 0x77, 0x63, 0x97, 0x63, 0xb8, 0x62, 0xd6, 0x7, 0xf8, 0x62, 0x19, 0xe1, 0x75, 0x52, 0x86, 0x40, 0x87, 0x50, 0x95, 0x52, 0x93, 0x43, 0xa5, 0x21, 0xc5, 0x52, 0xd6, 0x40, 0xd7, 0x20, 0xe5, 0x6, 0xe6, 0x51, 0x3e, 0x8d, 0x5e, 0x3, 0x67, 0x52, 0x77, 0x52, 0x7e, 0x2, 0x9e, 0x3, 0xa6, 0x43, 0xa7, 0x23, 0xde, 0x5, 0xfe, 0x2, 0x1e, 0x83, 0x33, 0x54, 0x46, 0x40, 0x47, 0x21, 0x56, 0x4, 0x5e, 0x2, 0x83, 0x54, 0x93, 0x52, 0x96, 0x7, 0x97, 0x50, 0xbe, 0x3, 0xc7, 0x23, 0xfe, 0x2, 0xc, 0x82, 0x43, 0x45, 0x45, 0x24, 0x46, 0x24, 0x90, 0x8, 0x95, 0x51, 0x78, 0xfa, 0xd7, 0x73, 0x39, 0xf1, 0x8c, 0x1, 0xa8, 0x52, 0xb8, 0x52, 0xcc, 0x1, 0x5f, 0xb3, 0x97, 0x63, 0x9e, 0x0, 0xe, 0x81, 0x16, 0x24, 0x66, 0x4, 0x8e, 0x0, 0xfe, 0x1, 0x8, 0xd2, 0xe, 0x6, 0x6f, 0x47, 0x9e, 0xf, 0xe, 0x82, 0x2d, 0x47, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd, },

    /* 9693 (38547) */
    .L_UndergroundArea2 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xbc, 0x1, 0xfc, 0x1, 0x2c, 0x82, 0x41, 0x52, 0x4e, 0x4, 0x67, 0x25, 0x68, 0x24, 0x69, 0x24, 0xba, 0x42, 0xc7, 0x4, 0xde, 0xb, 0xb2, 0x87, 0xfe, 0x2, 0x2c, 0xe1, 0x2c, 0x71, 0x67, 0x1, 0x77, 0x0, 0x87, 0x1, 0x8e, 0x0, 0xee, 0x1, 0xf6, 0x2, 0x3, 0x85, 0x5, 0x2, 0x13, 0x21, 0x16, 0x2, 0x27, 0x2, 0x2e, 0x2, 0x88, 0x72, 0xc7, 0x20, 0xd7, 0x7, 0xe4, 0x76, 0x7, 0xa0, 0x17, 0x6, 0x48, 0x7a, 0x76, 0x20, 0x98, 0x72, 0x79, 0xe1, 0x88, 0x62, 0x9c, 0x1, 0xb7, 0x73, 0xdc, 0x1, 0xf8, 0x62, 0xfe, 0x1, 0x8, 0xe2, 0xe, 0x0, 0x6e, 0x2, 0x73, 0x20, 0x77, 0x23, 0x83, 0x4, 0x93, 0x20, 0xae, 0x0, 0xfe, 0xa, 0xe, 0x82, 0x39, 0x71, 0xa8, 0x72, 0xe7, 0x73, 0xc, 0x81, 0x8f, 0x32, 0xae, 0x0, 0xfe, 0x4, 0x4, 0xd1, 0x17, 0x4, 0x26, 0x49, 0x27, 0x29, 0xdf, 0x33, 0xfe, 0x2, 0x44, 0xf6, 0x7c, 0x1, 0x8e, 0x6, 0xbf, 0x47, 0xee, 0xf, 0x4d, 0xc7, 0xe, 0x82, 0x68, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd, },

    /* 9734 (38708) */
    .L_UndergroundArea3 = {0x48, 0x1, 0xe, 0x1, 0x0, 0x5a, 0x3e, 0x6, 0x45, 0x46, 0x47, 0x46, 0x53, 0x44, 0xae, 0x1, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x4, 0x37, 0x28, 0x3a, 0x48, 0x46, 0x47, 0xc7, 0x7, 0xce, 0xf, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x33, 0x53, 0x43, 0x51, 0x46, 0x40, 0x47, 0x50, 0x53, 0x4, 0x55, 0x40, 0x56, 0x50, 0x62, 0x43, 0x64, 0x40, 0x65, 0x50, 0x71, 0x41, 0x73, 0x51, 0x83, 0x51, 0x94, 0x40, 0x95, 0x50, 0xa3, 0x50, 0xa5, 0x40, 0xa6, 0x50, 0xb3, 0x51, 0xb6, 0x40, 0xb7, 0x50, 0xc3, 0x53, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x2, 0x36, 0x47, 0x37, 0x52, 0x3a, 0x49, 0x47, 0x25, 0xa7, 0x52, 0xd7, 0x4, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x3e, 0x2, 0x44, 0x51, 0x53, 0x44, 0x54, 0x44, 0x55, 0x24, 0xa1, 0x54, 0xae, 0x1, 0xb4, 0x21, 0xdf, 0x4a, 0xe5, 0x7, 0x4d, 0xc7, 0xfd, },

    /* 97c1 (38849) */
    .L_WaterArea1 = {0x41, 0x1, 0xb4, 0x34, 0xc8, 0x52, 0xf2, 0x51, 0x47, 0xd3, 0x6c, 0x3, 0x65, 0x49, 0x9e, 0x7, 0xbe, 0x1, 0xcc, 0x3, 0xfe, 0x7, 0xd, 0xc9, 0x1e, 0x1, 0x6c, 0x1, 0x62, 0x35, 0x63, 0x53, 0x8a, 0x41, 0xac, 0x1, 0xb3, 0x53, 0xe9, 0x51, 0x26, 0xc3, 0x27, 0x33, 0x63, 0x43, 0x64, 0x33, 0xba, 0x60, 0xc9, 0x61, 0xce, 0xb, 0xe5, 0x9, 0xee, 0xf, 0x7d, 0xca, 0x7d, 0x47, 0xfd, },

    /* 9800 (38912) */
    .L_WaterArea2 = {0x41, 0x1, 0xb8, 0x52, 0xea, 0x41, 0x27, 0xb2, 0xb3, 0x42, 0x16, 0xd4, 0x4a, 0x42, 0xa5, 0x51, 0xa7, 0x31, 0x27, 0xd3, 0x8, 0xe2, 0x16, 0x64, 0x2c, 0x4, 0x38, 0x42, 0x76, 0x64, 0x88, 0x62, 0xde, 0x7, 0xfe, 0x1, 0xd, 0xc9, 0x23, 0x32, 0x31, 0x51, 0x98, 0x52, 0xd, 0xc9, 0x59, 0x42, 0x63, 0x53, 0x67, 0x31, 0x14, 0xc2, 0x36, 0x31, 0x87, 0x53, 0x17, 0xe3, 0x29, 0x61, 0x30, 0x62, 0x3c, 0x8, 0x42, 0x37, 0x59, 0x40, 0x6a, 0x42, 0x99, 0x40, 0xc9, 0x61, 0xd7, 0x63, 0x39, 0xd1, 0x58, 0x52, 0xc3, 0x67, 0xd3, 0x31, 0xdc, 0x6, 0xf7, 0x42, 0xfa, 0x42, 0x23, 0xb1, 0x43, 0x67, 0xc3, 0x34, 0xc7, 0x34, 0xd1, 0x51, 0x43, 0xb3, 0x47, 0x33, 0x9a, 0x30, 0xa9, 0x61, 0xb8, 0x62, 0xbe, 0xb, 0xd5, 0x9, 0xde, 0xf, 0xd, 0xca, 0x7d, 0x47, 0xfd, },

    /* 987b (39035) */
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

    /* 98ab (39083) */
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

    /* 98ee (39150) */
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

    /* 9905 (39173) */
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

    /* 9917 (39191) */
    .LoopCmdWorldNumber = {0x3, 0x3, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7, 0x7, 0x7, },

    /* 9922 (39202) */
    .LoopCmdPageNumber = {0x5, 0x9, 0x4, 0x5, 0x6, 0x8, 0x9, 0xa, 0x6, 0xb, 0x10, },

    /* 992d (39213) */
    .LoopCmdYPosition = {0x40, 0xb0, 0xb0, 0x80, 0x40, 0x40, 0x80, 0x40, 0xf0, 0xf0, 0xf0, },

    /* 9938 (39224) */
    .NormalXSpdData = {0xf8, 0xf4, },

    /* 993a (39226) */
    .HBroWalkingTimerData = {0x80, 0x50, },

    /* 993c (39228) */
    .PRDiffAdjustData = {0x26, 0x2c, 0x32, 0x38, 0x20, 0x22, 0x24, 0x26, 0x13, 0x14, 0x15, 0x16, },

    /* 9948 (39240) */
    .FirebarSpinSpdData = {0x28, 0x38, 0x28, 0x38, 0x28, },

    /* 994d (39245) */
    .FirebarSpinDirData = {0x0, 0x0, 0x10, 0x10, 0x0, },

    /* 9952 (39250) */
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

    /* 999c (39324) */
    .HammerThrowTmrData = {0x30, 0x1c, },

    /* 999e (39326) */
    .XSpeedAdderData = {0x0, 0xe8, 0x0, 0x18, },

    /* 99a2 (39330) */
    .RevivedXSpeed = {0x8, 0xf8, 0xc, 0xf4, },

    /* 99a6 (39334) */
    .HammerBroJumpLData = {0x20, 0x37, },

    /* 99a8 (39336) */
    .BlooberBitmasks = {0b111111, 0b11, },

    /* 99aa (39338) */
    .SwimCCXMoveData = {0x40, 0x80, 
    // residual data, not used
    0x4, 0x4, },

    /* 99ae (39342) */
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

    /* 9a2d (39469) */
    .LakituDiffAdj = {0x15, 0x30, 0x40, },

    /* 9a30 (39472) */
    .BridgeCollapseData = {
    // axe
    0x1a, 
    // chain
    0x58, 
    // bridge
    0x98, 0x96, 0x94, 0x92, 0x90, 0x8e, 0x8c, 0x8a, 0x88, 0x86, 0x84, 0x82, 0x80, },

    /* 9a3f (39487) */
    .PRandomRange = {0x21, 0x41, 0x11, 0x31, },

    /* 9a43 (39491) */
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

    /* 9a6e (39534) */
    .SetBitsMask = {0b10000000, 0b1000000, 0b100000, 0b10000, 0b1000, 0b100, 0b10, },

    /* 9a75 (39541) */
    .ClearBitsMask = {0b1111111, 0b10111111, 0b11011111, 0b11101111, 0b11110111, 0b11111011, 0b11111101, },

    /* 9a7c (39548) */
    .PlayerPosSPlatData = {0x80, 0x0, },

    /* 9a7e (39550) */
    .PlayerBGUpperExtent = {0x20, 0x10, },

    /* 9a80 (39552) */
    .AreaChangeTimerData = {0xa0, 0x34, },

    /* 9a82 (39554) */
    .ClimbXPosAdder = {0xf9, 0x7, },

    /* 9a84 (39556) */
    .ClimbPLocAdder = {0xff, 0x0, },

    /* 9a86 (39558) */
    .FlagpoleYPosData = {0x18, 0x22, 0x50, 0x68, 0x90, },

    /* 9a8b (39563) */
    .SolidMTileUpperExt = {0x10, 0x61, 0x88, 0xc4, },

    /* 9a8f (39567) */
    .ClimbMTileUpperExt = {0x24, 0x6d, 0x8a, 0xc6, },

    /* 9a93 (39571) */
    .EnemyBGCStateData = {0x1, 0x1, 0x2, 0x2, 0x2, 0x5, },

    /* 9a99 (39577) */
    .EnemyBGCXSpdData = {0x10, 0xf0, },

    /* 9a9b (39579) */
    .BoundBoxCtrlData = {0x2, 0x8, 0xe, 0x20, 0x3, 0x14, 0xd, 0x20, 0x2, 0x14, 0xe, 0x20, 0x2, 0x9, 0xe, 0x15, 0x0, 0x0, 0x18, 0x6, 0x0, 0x0, 0x20, 0xd, 0x0, 0x0, 0x30, 0xd, 0x0, 0x0, 0x8, 0x8, 0x6, 0x4, 0xa, 0x8, 0x3, 0xe, 0xd, 0x14, 0x0, 0x2, 0x10, 0x15, 0x4, 0x4, 0xc, 0x1c, },

    /* 9acb (39627) */
    .BlockBufferAdderData = {0x0, 0x7, 0xe, },

    /* 9ace (39630) */
    .BlockBuffer_X_Adder = {0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x0, 0x10, 0x4, 0x14, 0x4, 0x4, },

    /* 9aea (39658) */
    .BlockBuffer_Y_Adder = {0x4, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x2, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x12, 0x20, 0x20, 0x18, 0x18, 0x18, 0x18, 0x18, 0x14, 0x14, 0x6, 0x6, 0x8, 0x10, },

    /* 9b06 (39686) */
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

    /* 9b24 (39716) */
    .FlagpoleScoreNumTiles = {0xf9, 0x50, 0xf7, 0x50, 0xfa, 0xfb, 0xf8, 0xfb, 0xf6, 0xfb, },

    /* 9b2e (39726) */
    .JumpingCoinTiles = {0x60, 0x61, 0x62, 0x63, },

    /* 9b32 (39730) */
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

    /* 9b46 (39750) */
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

    /* 9c85 (40069) */
    .DefaultBlockObjTiles = {
    // brick w/ line (these are sprite tiles, not BG!)
    0x85, 0x85, 0x86, 0x86, },

    /* 9c89 (40073) */
    .ExplosionTiles = {0x68, 0x67, 0x66, },

    /* 9c8c (40076) */
    .PlayerGfxTblOffsets = {0x20, 0x28, 0xc8, 0x18, 0x0, 0x40, 0x50, 0x58, 0x80, 0x88, 0xb8, 0x78, 0x60, 0xa0, 0xb0, 0xb8, },

    /* 9c9c (40092) */
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

    /* 9d8b (40331) */
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

    /* 9e0e (40462) */
    .MusicHeaderData = {
    // event music
    ((0x8000+offsetof(G, DeathMusHdr)) - (MHD)), ((0x8000+offsetof(G, GameOverMusHdr)) - (MHD)), ((0x8000+offsetof(G, VictoryMusHdr)) - (MHD)), ((0x8000+offsetof(G, WinCastleMusHdr)) - (MHD)), ((0x8000+offsetof(G, GameOverMusHdr)) - (MHD)), ((0x8000+offsetof(G, EndOfLevelMusHdr)) - (MHD)), ((0x8000+offsetof(G, TimeRunningOutHdr)) - (MHD)), ((0x8000+offsetof(G, SilenceHdr)) - (MHD)), 
    // area music
    ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, WaterMusHdr)) - (MHD)), ((0x8000+offsetof(G, UndergroundMusHdr)) - (MHD)), ((0x8000+offsetof(G, CastleMusHdr)) - (MHD)), ((0x8000+offsetof(G, Star_CloudHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, Star_CloudHdr)) - (MHD)), ((0x8000+offsetof(G, SilenceHdr)) - (MHD)), 
    // ground level music layout
    ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((0x8000+offsetof(G, GroundLevelPart4CHdr)) - (MHD)), },

    /* 9e3f (40511) */
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

    /* 9eb9 (40633) */
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

    /* a212 (41490) */
    .UndergroundMusData = {0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x86, 0x4, 0x83, 0x1a, 0x18, 0x16, 0x84, 0x14, 0x1a, 0x18, 0xe, 0xc, 0x16, 0x83, 0x14, 0x20, 0x1e, 0x1c, 0x28, 0x26, 0x87, 0x24, 0x1a, 0x12, 0x10, 0x62, 0xe, 0x80, 0x4, 0x4, 0x0, },

    /* a253 (41555) */
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

// DIRECTIVES
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

void OperModeExecutionTree() {
    _debug("OperModeExecutionTree", __FILE__, __LINE__);
    // this is the heart of the entire program,
    lda(ABS(OperMode));
    // most of what goes on starts here
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
    JMP(MoveSpritesOffscreen);
}

void MoveSpritesOffscreen() {
    _debug("MoveSpritesOffscreen", __FILE__, __LINE__);
    // this routine moves all but sprite 0
    ldy(IMM(0x4));
    // off the screen
    lda(IMM(0xf8));
    JMP(SprInitLoop);
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

void AreaParserTaskControl() {
    _debug("AreaParserTaskControl", __FILE__, __LINE__);
    // turn off screen
    inc(ABS(DisableScreenFlag));
    JMP(TaskLoop);
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

void WriteTopScore() {
    _debug("WriteTopScore", __FILE__, __LINE__);
    // run display routine to display top score on title
    lda(IMM(0xfa));
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
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

void InitializeGame() {
    _debug("InitializeGame", __FILE__, __LINE__);
    // clear all memory as in initialization procedure,
    ldy(IMM(0x6f));
    // but this time, clear only as far as $076f
    JSR(InitializeMemory);
    ldy(IMM(0x1f));
    JMP(ClrSndLoop);
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

// $00 - used to store area object identifier
// $07 - used as adder to find proper area object code
void ProcessAreaData() {
    _debug("ProcessAreaData", __FILE__, __LINE__);
    // start at the end of area object buffer
    ldx(IMM(0x2));
    JMP(ProcADLoop);
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

void LoopCmdE() {
    _debug("LoopCmdE", __FILE__, __LINE__);
    return;
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

void AreaFrenzy() {
    _debug("AreaFrenzy", __FILE__, __LINE__);
    // use area object identifier bit as offset
    ldx(ABS(0x0));
    // note that it starts at 8, thus weird address here
    lda(ABSX(((0x8000+offsetof(G, FrenzyIDData)) - (8))));
    ldy(IMM(0x5));
    JMP(FreCompLoop);
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
    JMP(QuestionBlockRow_Low);
}

void QuestionBlockRow_Low() {
    _debug("QuestionBlockRow_Low", __FILE__, __LINE__);
    // start on the eighth row
    lda(IMM(0x7));
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
    JMP(Bridge_Middle);
}

void Bridge_Middle() {
    _debug("Bridge_Middle", __FILE__, __LINE__);
    // start on the eighth row
    lda(IMM(0x7));
    JMP(Bridge_Low);
}

void Bridge_Low() {
    _debug("Bridge_Low", __FILE__, __LINE__);
    // start on the tenth row
    lda(IMM(0x9));
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

void RowOfSolidBlocks() {
    _debug("RowOfSolidBlocks", __FILE__, __LINE__);
    // load area type obtained from area offset pointer
    ldy(ABS(AreaType));
    // get metatile
    lda(ABSY(0x8000+offsetof(G, SolidBlockMetatiles)));
    JMP(GetRow);
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
    // merely placeholders as conditions for other routines)
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

void ProcessCannons() {
    _debug("ProcessCannons", __FILE__, __LINE__);
    // get area type
    lda(ABS(AreaType));
    // if water type area, branch to leave
    BEQ(ExCannon);
    ldx(IMM(0x2));
    JMP(ThreeSChk);
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

void FindEmptyMiscSlot() {
    _debug("FindEmptyMiscSlot", __FILE__, __LINE__);
    // start at end of misc objects buffer
    ldy(IMM(0x8));
    JMP(FMiscLoop);
}

void MiscObjectsCore() {
    _debug("MiscObjectsCore", __FILE__, __LINE__);
    // set at end of misc object buffer
    ldx(IMM(0x8));
    JMP(MiscLoop);
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

void MushFlowerBlock() {
    _debug("MushFlowerBlock", __FILE__, __LINE__);
    // load mushroom/fire flower into power-up type
    lda(IMM(0x0));
    JMP(StarBlock);
}

void StarBlock() {
    _debug("StarBlock", __FILE__, __LINE__);
    // load star into power-up type
    lda(IMM(0x2));
    JMP(ExtraLifeMushBlock);
}

void ExtraLifeMushBlock() {
    _debug("ExtraLifeMushBlock", __FILE__, __LINE__);
    // load 1-up mushroom into power-up type
    lda(IMM(0x3));
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

void BlockBumpedChk() {
    _debug("BlockBumpedChk", __FILE__, __LINE__);
    // start at end of metatile data
    ldy(IMM(0xd));
    JMP(BumpChkLoop);
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

// $02 - used to store offset to block buffer
// $06-$07 - used to store block buffer address
void BlockObjMT_Updater() {
    _debug("BlockObjMT_Updater", __FILE__, __LINE__);
    // set offset to start with second block object
    ldx(IMM(0x1));
    JMP(UpdateLoop);
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

void MoveJ_EnemyVertically() {
    _debug("MoveJ_EnemyVertically", __FILE__, __LINE__);
    // set movement amount for podoboo/other objects
    ldy(IMM(0x1c));
    JMP(SetHiMax);
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

void ImposeGravityBlock() {
    _debug("ImposeGravityBlock", __FILE__, __LINE__);
    // set offset for maximum speed
    ldy(IMM(0x1));
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
    JMP(MovePlatformUp);
}

void MovePlatformUp() {
    _debug("MovePlatformUp", __FILE__, __LINE__);
    // save value to stack
    lda(IMM(0x1));
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

void InitEnemyObject() {
    _debug("InitEnemyObject", __FILE__, __LINE__);
    // initialize enemy state
    lda(IMM(0x0));
    sta(ABSX(Enemy_State));
    // jump ahead to run jump engine and subroutines
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
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
    // otherwise jump to appropriate sub
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

void StopPlatforms() {
    _debug("StopPlatforms", __FILE__, __LINE__);
    // initialize vertical speed and low byte
    JSR(InitVStf);
    // for both platforms and leave
    sta(ABSY(Enemy_Y_Speed));
    sta(ABSY(Enemy_Y_MoveForce));
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
    JMP(PositionPlayerOnVPlat);
}

void PositionPlayerOnVPlat() {
    _debug("PositionPlayerOnVPlat", __FILE__, __LINE__);
    // get vertical coordinate
    lda(ABSX(Enemy_Y_Position));
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

void KillEnemyAboveBlock() {
    _debug("KillEnemyAboveBlock", __FILE__, __LINE__);
    // do this sub to kill enemy
    JSR(ShellOrBlockDefeat);
    // alter vertical speed of enemy and leave
    lda(IMM(0xfc));
    sta(ABSX(Enemy_Y_Speed));
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
    JMP(BlockBufferColli_Side);
}

void BlockBufferColli_Side() {
    _debug("BlockBufferColli_Side", __FILE__, __LINE__);
    // set flag to return horizontal coordinate
    lda(IMM(0x1));
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

void SixSpriteStacker() {
    _debug("SixSpriteStacker", __FILE__, __LINE__);
    // do six sprites
    ldx(IMM(0x6));
    JMP(StkLp);
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

void FindPlayerAction() {
    _debug("FindPlayerAction", __FILE__, __LINE__);
    // find proper offset to graphics table by player's actions
    JSR(ProcessPlayerAction);
    // draw player, then process for fireball throwing
    JMP(PlayerGfxProcessing);
    JMP(DoChangeSize);
}

void DrawPlayer_Intermediate() {
    _debug("DrawPlayer_Intermediate", __FILE__, __LINE__);
    // store data into zero page memory
    ldx(IMM(0x5));
    JMP(PIntLoop);
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

void GetCurrentAnimOffset() {
    _debug("GetCurrentAnimOffset", __FILE__, __LINE__);
    // get animation frame control
    lda(ABS(PlayerAnimCtrl));
    // jump to get proper offset to graphics table
    JMP(GetOffsetFromAnimCtrl);
    JMP(FourFrameExtent);
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

void SoundEngine() {
    _debug("SoundEngine", __FILE__, __LINE__);
    // are we in title screen mode?
    lda(ABS(OperMode));
    BNE(SndOn);
    // if so, disable sound and leave
    sta(ABS(SND_MASTERCTRL_REG));
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

void StopSquare2Sfx() {
    _debug("StopSquare2Sfx", __FILE__, __LINE__);
    // stop playing the sfx
    ldx(IMM(0xd));
    stx(ABS(SND_MASTERCTRL_REG));
    ldx(IMM(0xf));
    stx(ABS(SND_MASTERCTRL_REG));
    JMP(ExSfx2);
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

