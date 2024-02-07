#include <cstddef>
#include "main.h"

G g {
    {},  // space is zeroed
    .VRAM_AddrTable_Low = {LO8(offsetof(G, VRAM_Buffer1)), LO8(offsetof(G, WaterPaletteData)), LO8(offsetof(G, GroundPaletteData)), LO8(offsetof(G, UndergroundPaletteData)), LO8(offsetof(G, CastlePaletteData)), LO8(offsetof(G, VRAM_Buffer1_Offset)), LO8(offsetof(G, VRAM_Buffer2)), LO8(offsetof(G, VRAM_Buffer2)), LO8(offsetof(G, BowserPaletteData)), LO8(offsetof(G, DaySnowPaletteData)), LO8(offsetof(G, NightSnowPaletteData)), LO8(offsetof(G, MushroomPaletteData)), LO8(offsetof(G, MarioThanksMessage)), LO8(offsetof(G, LuigiThanksMessage)), LO8(offsetof(G, MushroomRetainerSaved)), LO8(offsetof(G, PrincessSaved1)), LO8(offsetof(G, PrincessSaved2)), LO8(offsetof(G, WorldSelectMessage1)), LO8(offsetof(G, WorldSelectMessage2))},
    .VRAM_AddrTable_High = {HI8(offsetof(G, VRAM_Buffer1)), HI8(offsetof(G, WaterPaletteData)), HI8(offsetof(G, GroundPaletteData)), HI8(offsetof(G, UndergroundPaletteData)), HI8(offsetof(G, CastlePaletteData)), HI8(offsetof(G, VRAM_Buffer1_Offset)), HI8(offsetof(G, VRAM_Buffer2)), HI8(offsetof(G, VRAM_Buffer2)), HI8(offsetof(G, BowserPaletteData)), HI8(offsetof(G, DaySnowPaletteData)), HI8(offsetof(G, NightSnowPaletteData)), HI8(offsetof(G, MushroomPaletteData)), HI8(offsetof(G, MarioThanksMessage)), HI8(offsetof(G, LuigiThanksMessage)), HI8(offsetof(G, MushroomRetainerSaved)), HI8(offsetof(G, PrincessSaved1)), HI8(offsetof(G, PrincessSaved2)), HI8(offsetof(G, WorldSelectMessage1)), HI8(offsetof(G, WorldSelectMessage2))},
    .VRAM_Buffer_Offset = {LO8(offsetof(G, VRAM_Buffer1_Offset)), LO8(offsetof(G, VRAM_Buffer2_Offset))},
    .WSelectBufferTemplate = {0x4, 0x20, 0x73, 0x1, 0x0, 0x0},
    .MushroomIconData = {0x7, 0x22, 0x49, 0x83, 0xce, 0x24, 0x24, 0x0},
    .DemoActionData = {0x1, 0x80, 0x2, 0x81, 0x41, 0x80, 0x1, 0x42, 0xc2, 0x2, 0x80, 0x41, 0xc1, 0x41, 0xc1, 0x1, 0xc1, 0x1, 0x2, 0x80, 0x0},
    .DemoTimingData = {0x9b, 0x10, 0x18, 0x5, 0x2c, 0x20, 0x24, 0x15, 0x5a, 0x10, 0x20, 0x28, 0x30, 0x20, 0x10, 0x80, 0x20, 0x30, 0x30, 0x1, 0xff, 0x0},
    .FloateyNumTileData = {0xff, 0xff, 0xf6, 0xfb, 0xf7, 0xfb, 0xf8, 0xfb, 0xf9, 0xfb, 0xfa, 0xfb, 0xf6, 0x50, 0xf7, 0x50, 0xf8, 0x50, 0xf9, 0x50, 0xfa, 0x50, 0xfd, 0xfe},
    .ScoreUpdateData = {0xff, 0x41, 0x42, 0x44, 0x45, 0x48, 0x31, 0x32, 0x34, 0x35, 0x38, 0x0},
    .AreaPalette = {0x1, 0x2, 0x3, 0x4},
    .BGColorCtrl_Addr = {0x0, 0x9, 0xa, 0x4},
    .BackgroundColors = {0x22, 0x22, 0xf, 0xf, 0xf, 0x22, 0xf, 0xf},
    .PlayerColors = {0x22, 0x16, 0x27, 0x18, 0x22, 0x30, 0x27, 0x19, 0x22, 0x37, 0x27, 0x16},
    .GameText = {0xee},
    .TopStatusBarLine = {0x20, 0x43, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18, 0x20, 0x52, 0xb, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x24, 0x24, 0x1d, 0x12, 0x16, 0xe, 0x20, 0x68, 0x5, 0x0, 0x24, 0x24, 0x2e, 0x29, 0x23, 0xc0, 0x7f, 0xaa, 0x23, 0xc2, 0x1, 0xea, 0xff},
    .WorldLivesDisplay = {0x21, 0xcd, 0x7, 0x24, 0x24, 0x29, 0x24, 0x24, 0x24, 0x24, 0x21, 0x4b, 0x9, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x24, 0x24, 0x28, 0x24, 0x22, 0xc, 0x47, 0x24, 0x23, 0xdc, 0x1, 0xba, 0xff},
    .TwoPlayerTimeUp = {0x21, 0xcd, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18},
    .OnePlayerTimeUp = {0x22, 0xc, 0x7, 0x1d, 0x12, 0x16, 0xe, 0x24, 0x1e, 0x19, 0xff},
    .TwoPlayerGameOver = {0x21, 0xcd, 0x5, 0x16, 0xa, 0x1b, 0x12, 0x18},
    .OnePlayerGameOver = {0x22, 0xb, 0x9, 0x10, 0xa, 0x16, 0xe, 0x24, 0x18, 0x1f, 0xe, 0x1b, 0xff},
    .WarpZoneWelcome = {0x25, 0x84, 0x15, 0x20, 0xe, 0x15, 0xc, 0x18, 0x16, 0xe, 0x24, 0x1d, 0x18, 0x24, 0x20, 0xa, 0x1b, 0x19, 0x24, 0x23, 0x18, 0x17, 0xe, 0x2b, 0x26, 0x25, 0x1, 0x24, 0x26, 0x2d, 0x1, 0x24, 0x26, 0x35, 0x1, 0x24, 0x27, 0xd9, 0x46, 0xaa, 0x27, 0xe1, 0x45, 0xaa, 0xff},
    .LuigiName = {0x15, 0x1e, 0x12, 0x10, 0x12},
    .WarpZoneNumbers = {0x4, 0x3, 0x2, 0x0, 0x24, 0x5, 0x24, 0x0, 0x8, 0x7, 0x6, 0x0},
    .GameTextOffsets = {((offsetof(G, TopStatusBarLine)) - (offsetof(G, GameText))), ((offsetof(G, TopStatusBarLine)) - (offsetof(G, GameText))), ((offsetof(G, WorldLivesDisplay)) - (offsetof(G, GameText))), ((offsetof(G, WorldLivesDisplay)) - (offsetof(G, GameText))), ((offsetof(G, TwoPlayerTimeUp)) - (offsetof(G, GameText))), ((offsetof(G, OnePlayerTimeUp)) - (offsetof(G, GameText))), ((offsetof(G, TwoPlayerGameOver)) - (offsetof(G, GameText))), ((offsetof(G, OnePlayerGameOver)) - (offsetof(G, GameText))), ((offsetof(G, WarpZoneWelcome)) - (offsetof(G, GameText))), ((offsetof(G, WarpZoneWelcome)) - (offsetof(G, GameText)))},
    .ColorRotatePalette = {0x27, 0x27, 0x27, 0x17, 0x7, 0x17},
    .BlankPalette = {0x3f, 0xc, 0x4, 0xff, 0xff, 0xff, 0xff, 0x0},
    .Palette3Data = {0xf, 0x7, 0x12, 0xf, 0xf, 0x7, 0x17, 0xf, 0xf, 0x7, 0x17, 0x1c, 0xf, 0x7, 0x17, 0x0},
    .BlockGfxData = {0x45, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x57, 0x58, 0x59, 0x5a, 0x24, 0x24, 0x24, 0x24, 0x26, 0x26, 0x26, 0x26},
    .MetatileGraphics_Low = {LO8(offsetof(G, Palette0_MTiles)), LO8(offsetof(G, Palette1_MTiles)), LO8(offsetof(G, Palette2_MTiles)), LO8(offsetof(G, Palette3_MTiles))},
    .MetatileGraphics_High = {HI8(offsetof(G, Palette0_MTiles)), HI8(offsetof(G, Palette1_MTiles)), HI8(offsetof(G, Palette2_MTiles)), HI8(offsetof(G, Palette3_MTiles))},
    .Palette0_MTiles = {0x24, 0x24, 0x24, 0x24, 0x27, 0x27, 0x27, 0x27, 0x24, 0x24, 0x24, 0x35, 0x36, 0x25, 0x37, 0x25, 0x24, 0x38, 0x24, 0x24, 0x24, 0x30, 0x30, 0x26, 0x26, 0x26, 0x34, 0x26, 0x24, 0x31, 0x24, 0x32, 0x33, 0x26, 0x24, 0x33, 0x34, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x24, 0xc0, 0x24, 0xc0, 0x24, 0x7f, 0x7f, 0x24, 0xb8, 0xba, 0xb9, 0xbb, 0xb8, 0xbc, 0xb9, 0xbd, 0xba, 0xbc, 0xbb, 0xbd, 0x60, 0x64, 0x61, 0x65, 0x62, 0x66, 0x63, 0x67, 0x60, 0x64, 0x61, 0x65, 0x62, 0x66, 0x63, 0x67, 0x68, 0x68, 0x69, 0x69, 0x26, 0x26, 0x6a, 0x6a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4d, 0x4f, 0x4d, 0x4f, 0x4d, 0x4e, 0x50, 0x51, 0x6b, 0x70, 0x2c, 0x2d, 0x6c, 0x71, 0x6d, 0x72, 0x6e, 0x73, 0x6f, 0x74, 0x86, 0x8a, 0x87, 0x8b, 0x88, 0x8c, 0x88, 0x8c, 0x89, 0x8d, 0x69, 0x69, 0x8e, 0x91, 0x8f, 0x92, 0x26, 0x93, 0x26, 0x93, 0x90, 0x94, 0x69, 0x69, 0xa4, 0xe9, 0xea, 0xeb, 0x24, 0x24, 0x24, 0x24, 0x24, 0x2f, 0x24, 0x3d, 0xa2, 0xa2, 0xa3, 0xa3, 0x24, 0x24, 0x24, 0x24},
    .Palette1_MTiles = {0xa2, 0xa2, 0xa3, 0xa3, 0x99, 0x24, 0x99, 0x24, 0x24, 0xa2, 0x3e, 0x3f, 0x5b, 0x5c, 0x24, 0xa3, 0x24, 0x24, 0x24, 0x24, 0x9d, 0x47, 0x9e, 0x47, 0x47, 0x47, 0x27, 0x27, 0x47, 0x47, 0x47, 0x47, 0x27, 0x27, 0x47, 0x47, 0xa9, 0x47, 0xaa, 0x47, 0x9b, 0x27, 0x9c, 0x27, 0x27, 0x27, 0x27, 0x27, 0x52, 0x52, 0x52, 0x52, 0x80, 0xa0, 0x81, 0xa1, 0xbe, 0xbe, 0xbf, 0xbf, 0x75, 0xba, 0x76, 0xbb, 0xba, 0xba, 0xbb, 0xbb, 0x45, 0x47, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x45, 0x47, 0x45, 0x47, 0xb4, 0xb6, 0xb5, 0xb7, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0xab, 0xac, 0xad, 0xae, 0x5d, 0x5e, 0x5d, 0x5e, 0xc1, 0x24, 0xc1, 0x24, 0xc6, 0xc8, 0xc7, 0xc9, 0xca, 0xcc, 0xcb, 0xcd, 0x2a, 0x2a, 0x40, 0x40, 0x24, 0x24, 0x24, 0x24, 0x24, 0x47, 0x24, 0x47, 0x82, 0x83, 0x84, 0x85, 0x24, 0x47, 0x24, 0x47, 0x86, 0x8a, 0x87, 0x8b, 0x8e, 0x91, 0x8f, 0x92, 0x24, 0x2f, 0x24, 0x3d},
    .Palette2_MTiles = {0x24, 0x24, 0x24, 0x35, 0x36, 0x25, 0x37, 0x25, 0x24, 0x38, 0x24, 0x24, 0x24, 0x24, 0x39, 0x24, 0x3a, 0x24, 0x3b, 0x24, 0x3c, 0x24, 0x24, 0x24, 0x41, 0x26, 0x41, 0x26, 0x26, 0x26, 0x26, 0x26, 0xb0, 0xb1, 0xb2, 0xb3, 0x77, 0x79, 0x77, 0x79},
    .Palette3_MTiles = {0x53, 0x55, 0x54, 0x56, 0x53, 0x55, 0x54, 0x56, 0xa5, 0xa7, 0xa6, 0xa8, 0xc2, 0xc4, 0xc3, 0xc5, 0x57, 0x59, 0x58, 0x5a, 0x7b, 0x7d, 0x7c, 0x7e},
    .WaterPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x15, 0x12, 0x25, 0xf, 0x3a, 0x1a, 0xf, 0xf, 0x30, 0x12, 0xf, 0xf, 0x27, 0x12, 0xf, 0x22, 0x16, 0x27, 0x18, 0xf, 0x10, 0x30, 0x27, 0xf, 0x16, 0x30, 0x27, 0xf, 0xf, 0x30, 0x10, 0x0},
    .GroundPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x29, 0x1a, 0xf, 0xf, 0x36, 0x17, 0xf, 0xf, 0x30, 0x21, 0xf, 0xf, 0x27, 0x17, 0xf, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1a, 0x30, 0x27, 0xf, 0x16, 0x30, 0x27, 0xf, 0xf, 0x36, 0x17, 0x0},
    .UndergroundPaletteData = {0x3f, 0x0, 0x20, 0xf, 0x29, 0x1a, 0x9, 0xf, 0x3c, 0x1c, 0xf, 0xf, 0x30, 0x21, 0x1c, 0xf, 0x27, 0x17, 0x1c, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1c, 0x36, 0x17, 0xf, 0x16, 0x30, 0x27, 0xf, 0xc, 0x3c, 0x1c, 0x0},
    .CastlePaletteData = {0x3f, 0x0, 0x20, 0xf, 0x30, 0x10, 0x0, 0xf, 0x30, 0x10, 0x0, 0xf, 0x30, 0x16, 0x0, 0xf, 0x27, 0x17, 0x0, 0xf, 0x16, 0x27, 0x18, 0xf, 0x1c, 0x36, 0x17, 0xf, 0x16, 0x30, 0x27, 0xf, 0x0, 0x30, 0x10, 0x0},
    .DaySnowPaletteData = {0x3f, 0x0, 0x4, 0x22, 0x30, 0x0, 0x10, 0x0},
    .NightSnowPaletteData = {0x3f, 0x0, 0x4, 0xf, 0x30, 0x0, 0x10, 0x0},
    .MushroomPaletteData = {0x3f, 0x0, 0x4, 0x22, 0x27, 0x16, 0xf, 0x0},
    .BowserPaletteData = {0x3f, 0x14, 0x4, 0xf, 0x1a, 0x30, 0x27, 0x0},
    .MarioThanksMessage = {0x25, 0x48, 0x10, 0x1d, 0x11, 0xa, 0x17, 0x14, 0x24, 0x22, 0x18, 0x1e, 0x24, 0x16, 0xa, 0x1b, 0x12, 0x18, 0x2b, 0x0},
    .LuigiThanksMessage = {0x25, 0x48, 0x10, 0x1d, 0x11, 0xa, 0x17, 0x14, 0x24, 0x22, 0x18, 0x1e, 0x24, 0x15, 0x1e, 0x12, 0x10, 0x12, 0x2b, 0x0},
    .MushroomRetainerSaved = {0x25, 0xc5, 0x16, 0xb, 0x1e, 0x1d, 0x24, 0x18, 0x1e, 0x1b, 0x24, 0x19, 0x1b, 0x12, 0x17, 0xc, 0xe, 0x1c, 0x1c, 0x24, 0x12, 0x1c, 0x24, 0x12, 0x17, 0x26, 0x5, 0xf, 0xa, 0x17, 0x18, 0x1d, 0x11, 0xe, 0x1b, 0x24, 0xc, 0xa, 0x1c, 0x1d, 0x15, 0xe, 0x2b, 0x0},
    .PrincessSaved1 = {0x25, 0xa7, 0x13, 0x22, 0x18, 0x1e, 0x1b, 0x24, 0x1a, 0x1e, 0xe, 0x1c, 0x1d, 0x24, 0x12, 0x1c, 0x24, 0x18, 0x1f, 0xe, 0x1b, 0xaf, 0x0},
    .PrincessSaved2 = {0x25, 0xe3, 0x1b, 0x20, 0xe, 0x24, 0x19, 0x1b, 0xe, 0x1c, 0xe, 0x17, 0x1d, 0x24, 0x22, 0x18, 0x1e, 0x24, 0xa, 0x24, 0x17, 0xe, 0x20, 0x24, 0x1a, 0x1e, 0xe, 0x1c, 0x1d, 0xaf, 0x0},
    .WorldSelectMessage1 = {0x26, 0x4a, 0xd, 0x19, 0x1e, 0x1c, 0x11, 0x24, 0xb, 0x1e, 0x1d, 0x1d, 0x18, 0x17, 0x24, 0xb, 0x0},
    .WorldSelectMessage2 = {0x26, 0x88, 0x11, 0x1d, 0x18, 0x24, 0x1c, 0xe, 0x15, 0xe, 0xc, 0x1d, 0x24, 0xa, 0x24, 0x20, 0x18, 0x1b, 0x15, 0xd, 0x0},
    .StatusBarData = {0xf0, 0x6, 0x62, 0x6, 0x62, 0x6, 0x6d, 0x2, 0x6d, 0x2, 0x7a, 0x3},
    .StatusBarOffset = {0x6, 0xc, 0x12, 0x18, 0x1e, 0x24},
    .DefaultSprOffsets = {0x4, 0x30, 0x48, 0x60, 0x78, 0x90, 0xa8, 0xc0, 0xd8, 0xe8, 0x24, 0xf8, 0xfc, 0x28, 0x2c},
    .Sprite0Data = {0x18, 0xff, 0x23, 0x58},
    .MusicSelectData = {offsetof(G, WaterMusic), offsetof(G, GroundMusic), offsetof(G, UndergroundMusic), offsetof(G, CastleMusic), offsetof(G, CloudMusic), offsetof(G, PipeIntroMusic)},
    .PlayerStarting_X_Pos = {0x28, 0x18, 0x38, 0x28},
    .AltYPosOffset = {0x8, 0x0},
    .PlayerStarting_Y_Pos = {0x0, 0x20, 0xb0, 0x50, 0x0, 0x0, 0xb0, 0xb0, 0xf0},
    .PlayerBGPriorityData = {0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
    .GameTimerData = {0x20, 0x4, 0x3, 0x2},
    .HalfwayPageNybbles = {0x56, 0x40, 0x65, 0x70, 0x66, 0x40, 0x66, 0x40, 0x66, 0x40, 0x66, 0x60, 0x65, 0x70, 0x0, 0x0},
    .BSceneDataOffsets = {0x0, 0x30, 0x60},
    .BackSceneryData = {0x93, 0x0, 0x0, 0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x51, 0x52, 0x53, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x2, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x91, 0x92, 0x93, 0x0, 0x0, 0x0, 0x0, 0x51, 0x52, 0x53, 0x41, 0x42, 0x43, 0x0, 0x0, 0x0, 0x0, 0x0, 0x91, 0x92, 0x97, 0x87, 0x88, 0x89, 0x99, 0x0, 0x0, 0x0, 0x11, 0x12, 0x13, 0xa4, 0xa5, 0xa5, 0xa5, 0xa6, 0x97, 0x98, 0x99, 0x1, 0x2, 0x3, 0x0, 0xa4, 0xa5, 0xa6, 0x0, 0x11, 0x12, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x2, 0x3, 0x0, 0xa4, 0xa5, 0xa5, 0xa6, 0x0, 0x0, 0x0, 0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x8b, 0xaa, 0xaa, 0xaa, 0xaa, 0x11, 0x12, 0x13, 0x8b, 0x0, 0x9c, 0x9c, 0x0, 0x0, 0x1, 0x2, 0x3, 0x11, 0x12, 0x12, 0x13, 0x0, 0x0, 0x0, 0x0, 0xaa, 0xaa, 0x9c, 0xaa, 0x0, 0x8b, 0x0, 0x1, 0x2, 0x3},
    .BackSceneryMetatiles = {0x80, 0x83, 0x0, 0x81, 0x84, 0x0, 0x82, 0x85, 0x0, 0x2, 0x0, 0x0, 0x3, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x5, 0x6, 0x7, 0x6, 0xa, 0x0, 0x8, 0x9, 0x4d, 0x0, 0x0, 0xd, 0xf, 0x4e, 0xe, 0x4e, 0x4e},
    .FSceneDataOffsets = {0x0, 0xd, 0x1a},
    .ForeSceneryData = {0x86, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x69, 0x69, 0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0x47, 0x47, 0x47, 0x47, 0x47, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x86, 0x87},
    .TerrainMetatiles = {0x69, 0x54, 0x52, 0x62},
    .TerrainRenderBits = {0b0, 0b0, 0b0, 0b11000, 0b1, 0b11000, 0b111, 0b11000, 0b1111, 0b11000, 0b11111111, 0b11000, 0b1, 0b11111, 0b111, 0b11111, 0b1111, 0b11111, 0b10000001, 0b11111, 0b1, 0b0, 0b10001111, 0b11111, 0b11110001, 0b11111, 0b11111001, 0b11000, 0b11110001, 0b11000, 0b11111111, 0b11111},
    .BlockBuffLowBounds = {0x10, 0x51, 0x88, 0xc0},
    .FrenzyIDData = {offsetof(G, FlyCheepCheepFrenzy), offsetof(G, BBill_CCheep_Frenzy), offsetof(G, Stop_Frenzy)},
    .PulleyRopeMetatiles = {0x42, 0x41, 0x43},
    .CastleMetatiles = {0x0, 0x45, 0x45, 0x45, 0x0, 0x0, 0x48, 0x47, 0x46, 0x0, 0x45, 0x49, 0x49, 0x49, 0x45, 0x47, 0x47, 0x4a, 0x47, 0x47, 0x47, 0x47, 0x4b, 0x47, 0x47, 0x49, 0x49, 0x49, 0x49, 0x49, 0x47, 0x4a, 0x47, 0x4a, 0x47, 0x47, 0x4b, 0x47, 0x4b, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x4a, 0x47, 0x4a, 0x47, 0x4a, 0x4b, 0x47, 0x4b, 0x47, 0x4b},
    .SidePipeShaftData = {0x15, 0x14, 0x0, 0x0},
    .SidePipeTopPart = {0x15, 0x1e, 0x1d, 0x1c},
    .SidePipeBottomPart = {0x15, 0x21, 0x20, 0x1f},
    .VerticalPipeData = {0x11, 0x10, 0x15, 0x14, 0x13, 0x12, 0x15, 0x14},
    .CoinMetatileData = {0xc3, 0xc2, 0xc2, 0xc2},
    .C_ObjectRow = {0x6, 0x7, 0x8},
    .C_ObjectMetatile = {0xc5, 0xc, 0x89},
    .SolidBlockMetatiles = {0x69, 0x61, 0x61, 0x62},
    .BrickMetatiles = {0x22, 0x51, 0x52, 0x52, 0x88},
    .StaircaseHeightData = {0x7, 0x7, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0},
    .StaircaseRowData = {0x3, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa},
    .HoleMetatiles = {0x87, 0x0, 0x0, 0x0},
    .BlockBufferAddr = {LO8(offsetof(G, Block_Buffer_1)), LO8(offsetof(G, Block_Buffer_2)), HI8(offsetof(G, Block_Buffer_1)), HI8(offsetof(G, Block_Buffer_2))},
    .AreaDataOfsLoopback = {0x12, 0x36, 0xe, 0xe, 0xe, 0x32, 0x32, 0x32, 0xa, 0x26, 0x40},
    .WorldAddrOffsets = {((offsetof(G, World1Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World2Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World3Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World4Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World5Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World6Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World7Areas)) - (offsetof(G, AreaAddrOffsets))), ((offsetof(G, World8Areas)) - (offsetof(G, AreaAddrOffsets)))},
    .AreaAddrOffsets = {0xee},
    .World1Areas = {0x25, 0x29, 0xc0, 0x26, 0x60},
    .World2Areas = {0x28, 0x29, 0x1, 0x27, 0x62},
    .World3Areas = {0x24, 0x35, 0x20, 0x63},
    .World4Areas = {0x22, 0x29, 0x41, 0x2c, 0x61},
    .World5Areas = {0x2a, 0x31, 0x26, 0x62},
    .World6Areas = {0x2e, 0x23, 0x2d, 0x60},
    .World7Areas = {0x33, 0x29, 0x1, 0x27, 0x64},
    .World8Areas = {0x30, 0x32, 0x21, 0x65},
    .EnemyAddrHOffsets = {0x1f, 0x6, 0x1c, 0x0},
    .EnemyDataAddrLow = {LO8(offsetof(G, E_CastleArea1)), LO8(offsetof(G, E_CastleArea2)), LO8(offsetof(G, E_CastleArea3)), LO8(offsetof(G, E_CastleArea4)), LO8(offsetof(G, E_CastleArea5)), LO8(offsetof(G, E_CastleArea6)), LO8(offsetof(G, E_GroundArea1)), LO8(offsetof(G, E_GroundArea2)), LO8(offsetof(G, E_GroundArea3)), LO8(offsetof(G, E_GroundArea4)), LO8(offsetof(G, E_GroundArea5)), LO8(offsetof(G, E_GroundArea6)), LO8(offsetof(G, E_GroundArea7)), LO8(offsetof(G, E_GroundArea8)), LO8(offsetof(G, E_GroundArea9)), LO8(offsetof(G, E_GroundArea10)), LO8(offsetof(G, E_GroundArea11)), LO8(offsetof(G, E_GroundArea12)), LO8(offsetof(G, E_GroundArea13)), LO8(offsetof(G, E_GroundArea14)), LO8(offsetof(G, E_GroundArea15)), LO8(offsetof(G, E_GroundArea16)), LO8(offsetof(G, E_GroundArea17)), LO8(offsetof(G, E_GroundArea18)), LO8(offsetof(G, E_GroundArea19)), LO8(offsetof(G, E_GroundArea20)), LO8(offsetof(G, E_GroundArea21)), LO8(offsetof(G, E_GroundArea22)), LO8(offsetof(G, E_UndergroundArea1)), LO8(offsetof(G, E_UndergroundArea2)), LO8(offsetof(G, E_UndergroundArea3)), LO8(offsetof(G, E_WaterArea1)), LO8(offsetof(G, E_WaterArea2)), LO8(offsetof(G, E_WaterArea3))},
    .EnemyDataAddrHigh = {HI8(offsetof(G, E_CastleArea1)), HI8(offsetof(G, E_CastleArea2)), HI8(offsetof(G, E_CastleArea3)), HI8(offsetof(G, E_CastleArea4)), HI8(offsetof(G, E_CastleArea5)), HI8(offsetof(G, E_CastleArea6)), HI8(offsetof(G, E_GroundArea1)), HI8(offsetof(G, E_GroundArea2)), HI8(offsetof(G, E_GroundArea3)), HI8(offsetof(G, E_GroundArea4)), HI8(offsetof(G, E_GroundArea5)), HI8(offsetof(G, E_GroundArea6)), HI8(offsetof(G, E_GroundArea7)), HI8(offsetof(G, E_GroundArea8)), HI8(offsetof(G, E_GroundArea9)), HI8(offsetof(G, E_GroundArea10)), HI8(offsetof(G, E_GroundArea11)), HI8(offsetof(G, E_GroundArea12)), HI8(offsetof(G, E_GroundArea13)), HI8(offsetof(G, E_GroundArea14)), HI8(offsetof(G, E_GroundArea15)), HI8(offsetof(G, E_GroundArea16)), HI8(offsetof(G, E_GroundArea17)), HI8(offsetof(G, E_GroundArea18)), HI8(offsetof(G, E_GroundArea19)), HI8(offsetof(G, E_GroundArea20)), HI8(offsetof(G, E_GroundArea21)), HI8(offsetof(G, E_GroundArea22)), HI8(offsetof(G, E_UndergroundArea1)), HI8(offsetof(G, E_UndergroundArea2)), HI8(offsetof(G, E_UndergroundArea3)), HI8(offsetof(G, E_WaterArea1)), HI8(offsetof(G, E_WaterArea2)), HI8(offsetof(G, E_WaterArea3))},
    .AreaDataHOffsets = {0x0, 0x3, 0x19, 0x1c},
    .AreaDataAddrLow = {LO8(offsetof(G, L_WaterArea1)), LO8(offsetof(G, L_WaterArea2)), LO8(offsetof(G, L_WaterArea3)), LO8(offsetof(G, L_GroundArea1)), LO8(offsetof(G, L_GroundArea2)), LO8(offsetof(G, L_GroundArea3)), LO8(offsetof(G, L_GroundArea4)), LO8(offsetof(G, L_GroundArea5)), LO8(offsetof(G, L_GroundArea6)), LO8(offsetof(G, L_GroundArea7)), LO8(offsetof(G, L_GroundArea8)), LO8(offsetof(G, L_GroundArea9)), LO8(offsetof(G, L_GroundArea10)), LO8(offsetof(G, L_GroundArea11)), LO8(offsetof(G, L_GroundArea12)), LO8(offsetof(G, L_GroundArea13)), LO8(offsetof(G, L_GroundArea14)), LO8(offsetof(G, L_GroundArea15)), LO8(offsetof(G, L_GroundArea16)), LO8(offsetof(G, L_GroundArea17)), LO8(offsetof(G, L_GroundArea18)), LO8(offsetof(G, L_GroundArea19)), LO8(offsetof(G, L_GroundArea20)), LO8(offsetof(G, L_GroundArea21)), LO8(offsetof(G, L_GroundArea22)), LO8(offsetof(G, L_UndergroundArea1)), LO8(offsetof(G, L_UndergroundArea2)), LO8(offsetof(G, L_UndergroundArea3)), LO8(offsetof(G, L_CastleArea1)), LO8(offsetof(G, L_CastleArea2)), LO8(offsetof(G, L_CastleArea3)), LO8(offsetof(G, L_CastleArea4)), LO8(offsetof(G, L_CastleArea5)), LO8(offsetof(G, L_CastleArea6))},
    .AreaDataAddrHigh = {HI8(offsetof(G, L_WaterArea1)), HI8(offsetof(G, L_WaterArea2)), HI8(offsetof(G, L_WaterArea3)), HI8(offsetof(G, L_GroundArea1)), HI8(offsetof(G, L_GroundArea2)), HI8(offsetof(G, L_GroundArea3)), HI8(offsetof(G, L_GroundArea4)), HI8(offsetof(G, L_GroundArea5)), HI8(offsetof(G, L_GroundArea6)), HI8(offsetof(G, L_GroundArea7)), HI8(offsetof(G, L_GroundArea8)), HI8(offsetof(G, L_GroundArea9)), HI8(offsetof(G, L_GroundArea10)), HI8(offsetof(G, L_GroundArea11)), HI8(offsetof(G, L_GroundArea12)), HI8(offsetof(G, L_GroundArea13)), HI8(offsetof(G, L_GroundArea14)), HI8(offsetof(G, L_GroundArea15)), HI8(offsetof(G, L_GroundArea16)), HI8(offsetof(G, L_GroundArea17)), HI8(offsetof(G, L_GroundArea18)), HI8(offsetof(G, L_GroundArea19)), HI8(offsetof(G, L_GroundArea20)), HI8(offsetof(G, L_GroundArea21)), HI8(offsetof(G, L_GroundArea22)), HI8(offsetof(G, L_UndergroundArea1)), HI8(offsetof(G, L_UndergroundArea2)), HI8(offsetof(G, L_UndergroundArea3)), HI8(offsetof(G, L_CastleArea1)), HI8(offsetof(G, L_CastleArea2)), HI8(offsetof(G, L_CastleArea3)), HI8(offsetof(G, L_CastleArea4)), HI8(offsetof(G, L_CastleArea5)), HI8(offsetof(G, L_CastleArea6))},
    .E_CastleArea1 = {0x76, 0xdd, 0xbb, 0x4c, 0xea, 0x1d, 0x1b, 0xcc, 0x56, 0x5d, 0x16, 0x9d, 0xc6, 0x1d, 0x36, 0x9d, 0xc9, 0x1d, 0x4, 0xdb, 0x49, 0x1d, 0x84, 0x1b, 0xc9, 0x5d, 0x88, 0x95, 0xf, 0x8, 0x30, 0x4c, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff},
    .E_CastleArea2 = {0xf, 0x3, 0x56, 0x1b, 0xc9, 0x1b, 0xf, 0x7, 0x36, 0x1b, 0xaa, 0x1b, 0x48, 0x95, 0xf, 0xa, 0x2a, 0x1b, 0x5b, 0xc, 0x78, 0x2d, 0x90, 0xb5, 0xff},
    .E_CastleArea3 = {0xb, 0x8c, 0x4b, 0x4c, 0x77, 0x5f, 0xeb, 0xc, 0xbd, 0xdb, 0x19, 0x9d, 0x75, 0x1d, 0x7d, 0x5b, 0xd9, 0x1d, 0x3d, 0xdd, 0x99, 0x1d, 0x26, 0x9d, 0x5a, 0x2b, 0x8a, 0x2c, 0xca, 0x1b, 0x20, 0x95, 0x7b, 0x5c, 0xdb, 0x4c, 0x1b, 0xcc, 0x3b, 0xcc, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff},
    .E_CastleArea4 = {0xb, 0x8c, 0x3b, 0x1d, 0x8b, 0x1d, 0xab, 0xc, 0xdb, 0x1d, 0xf, 0x3, 0x65, 0x1d, 0x6b, 0x1b, 0x5, 0x9d, 0xb, 0x1b, 0x5, 0x9b, 0xb, 0x1d, 0x8b, 0xc, 0x1b, 0x8c, 0x70, 0x15, 0x7b, 0xc, 0xdb, 0xc, 0xf, 0x8, 0x78, 0x2d, 0xa6, 0x28, 0x90, 0xb5, 0xff},
    .E_CastleArea5 = {0x27, 0xa9, 0x4b, 0xc, 0x68, 0x29, 0xf, 0x6, 0x77, 0x1b, 0xf, 0xb, 0x60, 0x15, 0x4b, 0x8c, 0x78, 0x2d, 0x90, 0xb5, 0xff},
    .E_CastleArea6 = {0xf, 0x3, 0x8e, 0x65, 0xe1, 0xbb, 0x38, 0x6d, 0xa8, 0x3e, 0xe5, 0xe7, 0xf, 0x8, 0xb, 0x2, 0x2b, 0x2, 0x5e, 0x65, 0xe1, 0xbb, 0xe, 0xdb, 0xe, 0xbb, 0x8e, 0xdb, 0xe, 0xfe, 0x65, 0xec, 0xf, 0xd, 0x4e, 0x65, 0xe1, 0xf, 0xe, 0x4e, 0x2, 0xe0, 0xf, 0x10, 0xfe, 0xe5, 0xe1, 0x1b, 0x85, 0x7b, 0xc, 0x5b, 0x95, 0x78, 0x2d, 0x90, 0xb5, 0xff},
    .E_GroundArea1 = {0xa5, 0x86, 0xe4, 0x28, 0x18, 0xa8, 0x45, 0x83, 0x69, 0x3, 0xc6, 0x29, 0x9b, 0x83, 0x16, 0xa4, 0x88, 0x24, 0xe9, 0x28, 0x5, 0xa8, 0x7b, 0x28, 0x24, 0x8f, 0xc8, 0x3, 0xe8, 0x3, 0x46, 0xa8, 0x85, 0x24, 0xc8, 0x24, 0xff},
    .E_GroundArea2 = {0xeb, 0x8e, 0xf, 0x3, 0xfb, 0x5, 0x17, 0x85, 0xdb, 0x8e, 0xf, 0x7, 0x57, 0x5, 0x7b, 0x5, 0x9b, 0x80, 0x2b, 0x85, 0xfb, 0x5, 0xf, 0xb, 0x1b, 0x5, 0x9b, 0x5, 0xff},
    .E_GroundArea3 = {0x2e, 0xc2, 0x66, 0xe2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xf, 0xc, 0x12, 0x11, 0xff},
    .E_GroundArea4 = {0xe, 0xc2, 0xa8, 0xab, 0x0, 0xbb, 0x8e, 0x6b, 0x82, 0xde, 0x0, 0xa0, 0x33, 0x86, 0x43, 0x6, 0x3e, 0xb4, 0xa0, 0xcb, 0x2, 0xf, 0x7, 0x7e, 0x42, 0xa6, 0x83, 0x2, 0xf, 0xa, 0x3b, 0x2, 0xcb, 0x37, 0xf, 0xc, 0xe3, 0xe, 0xff},
    .E_GroundArea5 = {0x9b, 0x8e, 0xca, 0xe, 0xee, 0x42, 0x44, 0x5b, 0x86, 0x80, 0xb8, 0x1b, 0x80, 0x50, 0xba, 0x10, 0xb7, 0x5b, 0x0, 0x17, 0x85, 0x4b, 0x5, 0xfe, 0x34, 0x40, 0xb7, 0x86, 0xc6, 0x6, 0x5b, 0x80, 0x83, 0x0, 0xd0, 0x38, 0x5b, 0x8e, 0x8a, 0xe, 0xa6, 0x0, 0xbb, 0xe, 0xc5, 0x80, 0xf3, 0x0, 0xff},
    .E_GroundArea6 = {0x1e, 0xc2, 0x0, 0x6b, 0x6, 0x8b, 0x86, 0x63, 0xb7, 0xf, 0x5, 0x3, 0x6, 0x23, 0x6, 0x4b, 0xb7, 0xbb, 0x0, 0x5b, 0xb7, 0xfb, 0x37, 0x3b, 0xb7, 0xf, 0xb, 0x1b, 0x37, 0xff},
    .E_GroundArea7 = {0x2b, 0xd7, 0xe3, 0x3, 0xc2, 0x86, 0xe2, 0x6, 0x76, 0xa5, 0xa3, 0x8f, 0x3, 0x86, 0x2b, 0x57, 0x68, 0x28, 0xe9, 0x28, 0xe5, 0x83, 0x24, 0x8f, 0x36, 0xa8, 0x5b, 0x3, 0xff},
    .E_GroundArea8 = {0xf, 0x2, 0x78, 0x40, 0x48, 0xce, 0xf8, 0xc3, 0xf8, 0xc3, 0xf, 0x7, 0x7b, 0x43, 0xc6, 0xd0, 0xf, 0x8a, 0xc8, 0x50, 0xff},
    .E_GroundArea9 = {0x85, 0x86, 0xb, 0x80, 0x1b, 0x0, 0xdb, 0x37, 0x77, 0x80, 0xeb, 0x37, 0xfe, 0x2b, 0x20, 0x2b, 0x80, 0x7b, 0x38, 0xab, 0xb8, 0x77, 0x86, 0xfe, 0x42, 0x20, 0x49, 0x86, 0x8b, 0x6, 0x9b, 0x80, 0x7b, 0x8e, 0x5b, 0xb7, 0x9b, 0xe, 0xbb, 0xe, 0x9b, 0x80},
    .E_GroundArea10 = {0xff},
    .E_GroundArea11 = {0xb, 0x80, 0x60, 0x38, 0x10, 0xb8, 0xc0, 0x3b, 0xdb, 0x8e, 0x40, 0xb8, 0xf0, 0x38, 0x7b, 0x8e, 0xa0, 0xb8, 0xc0, 0xb8, 0xfb, 0x0, 0xa0, 0xb8, 0x30, 0xbb, 0xee, 0x42, 0x88, 0xf, 0xb, 0x2b, 0xe, 0x67, 0xe, 0xff},
    .E_GroundArea12 = {0xa, 0xaa, 0xe, 0x28, 0x2a, 0xe, 0x31, 0x88, 0xff},
    .E_GroundArea13 = {0xc7, 0x83, 0xd7, 0x3, 0x42, 0x8f, 0x7a, 0x3, 0x5, 0xa4, 0x78, 0x24, 0xa6, 0x25, 0xe4, 0x25, 0x4b, 0x83, 0xe3, 0x3, 0x5, 0xa4, 0x89, 0x24, 0xb5, 0x24, 0x9, 0xa4, 0x65, 0x24, 0xc9, 0x24, 0xf, 0x8, 0x85, 0x25, 0xff},
    .E_GroundArea14 = {0xcd, 0xa5, 0xb5, 0xa8, 0x7, 0xa8, 0x76, 0x28, 0xcc, 0x25, 0x65, 0xa4, 0xa9, 0x24, 0xe5, 0x24, 0x19, 0xa4, 0xf, 0x7, 0x95, 0x28, 0xe6, 0x24, 0x19, 0xa4, 0xd7, 0x29, 0x16, 0xa9, 0x58, 0x29, 0x97, 0x29, 0xff},
    .E_GroundArea15 = {0xf, 0x2, 0x2, 0x11, 0xf, 0x7, 0x2, 0x11, 0xff},
    .E_GroundArea16 = {0xff},
    .E_GroundArea17 = {0x2b, 0x82, 0xab, 0x38, 0xde, 0x42, 0xe2, 0x1b, 0xb8, 0xeb, 0x3b, 0xdb, 0x80, 0x8b, 0xb8, 0x1b, 0x82, 0xfb, 0xb8, 0x7b, 0x80, 0xfb, 0x3c, 0x5b, 0xbc, 0x7b, 0xb8, 0x1b, 0x8e, 0xcb, 0xe, 0x1b, 0x8e, 0xf, 0xd, 0x2b, 0x3b, 0xbb, 0xb8, 0xeb, 0x82, 0x4b, 0xb8, 0xbb, 0x38, 0x3b, 0xb7, 0xbb, 0x2, 0xf, 0x13, 0x1b, 0x0, 0xcb, 0x80, 0x6b, 0xbc, 0xff},
    .E_GroundArea18 = {0x7b, 0x80, 0xae, 0x0, 0x80, 0x8b, 0x8e, 0xe8, 0x5, 0xf9, 0x86, 0x17, 0x86, 0x16, 0x85, 0x4e, 0x2b, 0x80, 0xab, 0x8e, 0x87, 0x85, 0xc3, 0x5, 0x8b, 0x82, 0x9b, 0x2, 0xab, 0x2, 0xbb, 0x86, 0xcb, 0x6, 0xd3, 0x3, 0x3b, 0x8e, 0x6b, 0xe, 0xa7, 0x8e, 0xff},
    .E_GroundArea19 = {0x29, 0x8e, 0x52, 0x11, 0x83, 0xe, 0xf, 0x3, 0x9b, 0xe, 0x2b, 0x8e, 0x5b, 0xe, 0xcb, 0x8e, 0xfb, 0xe, 0xfb, 0x82, 0x9b, 0x82, 0xbb, 0x2, 0xfe, 0x42, 0xe8, 0xbb, 0x8e, 0xf, 0xa, 0xab, 0xe, 0xcb, 0xe, 0xf9, 0xe, 0x88, 0x86, 0xa6, 0x6, 0xdb, 0x2, 0xb6, 0x8e, 0xff},
    .E_GroundArea20 = {0xab, 0xce, 0xde, 0x42, 0xc0, 0xcb, 0xce, 0x5b, 0x8e, 0x1b, 0xce, 0x4b, 0x85, 0x67, 0x45, 0xf, 0x7, 0x2b, 0x0, 0x7b, 0x85, 0x97, 0x5, 0xf, 0xa, 0x92, 0x2, 0xff},
    .E_GroundArea21 = {0xa, 0xaa, 0xe, 0x24, 0x4a, 0x1e, 0x23, 0xaa, 0xff},
    .E_GroundArea22 = {0x1b, 0x80, 0xbb, 0x38, 0x4b, 0xbc, 0xeb, 0x3b, 0xf, 0x4, 0x2b, 0x0, 0xab, 0x38, 0xeb, 0x0, 0xcb, 0x8e, 0xfb, 0x80, 0xab, 0xb8, 0x6b, 0x80, 0xfb, 0x3c, 0x9b, 0xbb, 0x5b, 0xbc, 0xfb, 0x0, 0x6b, 0xb8, 0xfb, 0x38, 0xff},
    .E_UndergroundArea1 = {0xb, 0x86, 0x1a, 0x6, 0xdb, 0x6, 0xde, 0xc2, 0x2, 0xf0, 0x3b, 0xbb, 0x80, 0xeb, 0x6, 0xb, 0x86, 0x93, 0x6, 0xf0, 0x39, 0xf, 0x6, 0x60, 0xb8, 0x1b, 0x86, 0xa0, 0xb9, 0xb7, 0x27, 0xbd, 0x27, 0x2b, 0x83, 0xa1, 0x26, 0xa9, 0x26, 0xee, 0x25, 0xb, 0x27, 0xb4, 0xff},
    .E_UndergroundArea2 = {0xf, 0x2, 0x1e, 0x2f, 0x60, 0xe0, 0x3a, 0xa5, 0xa7, 0xdb, 0x80, 0x3b, 0x82, 0x8b, 0x2, 0xfe, 0x42, 0x68, 0x70, 0xbb, 0x25, 0xa7, 0x2c, 0x27, 0xb2, 0x26, 0xb9, 0x26, 0x9b, 0x80, 0xa8, 0x82, 0xb5, 0x27, 0xbc, 0x27, 0xb0, 0xbb, 0x3b, 0x82, 0x87, 0x34, 0xee, 0x25, 0x6b, 0xff},
    .E_UndergroundArea3 = {0x1e, 0xa5, 0xa, 0x2e, 0x28, 0x27, 0x2e, 0x33, 0xc7, 0xf, 0x3, 0x1e, 0x40, 0x7, 0x2e, 0x30, 0xe7, 0xf, 0x5, 0x1e, 0x24, 0x44, 0xf, 0x7, 0x1e, 0x22, 0x6a, 0x2e, 0x23, 0xab, 0xf, 0x9, 0x1e, 0x41, 0x68, 0x1e, 0x2a, 0x8a, 0x2e, 0x23, 0xa2, 0x2e, 0x32, 0xea, 0xff},
    .E_WaterArea1 = {0x3b, 0x87, 0x66, 0x27, 0xcc, 0x27, 0xee, 0x31, 0x87, 0xee, 0x23, 0xa7, 0x3b, 0x87, 0xdb, 0x7, 0xff},
    .E_WaterArea2 = {0xf, 0x1, 0x2e, 0x25, 0x2b, 0x2e, 0x25, 0x4b, 0x4e, 0x25, 0xcb, 0x6b, 0x7, 0x97, 0x47, 0xe9, 0x87, 0x47, 0xc7, 0x7a, 0x7, 0xd6, 0xc7, 0x78, 0x7, 0x38, 0x87, 0xab, 0x47, 0xe3, 0x7, 0x9b, 0x87, 0xf, 0x9, 0x68, 0x47, 0xdb, 0xc7, 0x3b, 0xc7, 0xff},
    .E_WaterArea3 = {0x47, 0x9b, 0xcb, 0x7, 0xfa, 0x1d, 0x86, 0x9b, 0x3a, 0x87, 0x56, 0x7, 0x88, 0x1b, 0x7, 0x9d, 0x2e, 0x65, 0xf0, 0xff},
    .L_CastleArea1 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xce, 0x3, 0xdc, 0x51, 0xee, 0x7, 0x73, 0xe0, 0x74, 0xa, 0x7e, 0x6, 0x9e, 0xa, 0xce, 0x6, 0xe4, 0x0, 0xe8, 0xa, 0xfe, 0xa, 0x2e, 0x89, 0x4e, 0xb, 0x54, 0xa, 0x14, 0x8a, 0xc4, 0xa, 0x34, 0x8a, 0x7e, 0x6, 0xc7, 0xa, 0x1, 0xe0, 0x2, 0xa, 0x47, 0xa, 0x81, 0x60, 0x82, 0xa, 0xc7, 0xa, 0xe, 0x87, 0x7e, 0x2, 0xa7, 0x2, 0xb3, 0x2, 0xd7, 0x2, 0xe3, 0x2, 0x7, 0x82, 0x13, 0x2, 0x3e, 0x6, 0x7e, 0x2, 0xae, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_CastleArea2 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0x68, 0x64, 0x98, 0x64, 0xa8, 0x64, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x1, 0x1e, 0xe, 0x7e, 0x2, 0x94, 0x63, 0xb4, 0x63, 0xd4, 0x63, 0xf4, 0x63, 0x14, 0xe3, 0x2e, 0xe, 0x5e, 0x2, 0x64, 0x35, 0x88, 0x72, 0xbe, 0xe, 0xd, 0x4, 0xae, 0x2, 0xce, 0x8, 0xcd, 0x4b, 0xfe, 0x2, 0xd, 0x5, 0x68, 0x31, 0x7e, 0xa, 0x96, 0x31, 0xa9, 0x63, 0xa8, 0x33, 0xd5, 0x30, 0xee, 0x2, 0xe6, 0x62, 0xf4, 0x61, 0x4, 0xb1, 0x8, 0x3f, 0x44, 0x33, 0x94, 0x63, 0xa4, 0x31, 0xe4, 0x31, 0x4, 0xbf, 0x8, 0x3f, 0x4, 0xbf, 0x8, 0x3f, 0xcd, 0x4b, 0x3, 0xe4, 0xe, 0x3, 0x2e, 0x1, 0x7e, 0x6, 0xbe, 0x2, 0xde, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_CastleArea3 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x0, 0x27, 0xb1, 0x65, 0x32, 0x75, 0xa, 0x71, 0x0, 0xb7, 0x31, 0x8, 0xe4, 0x18, 0x64, 0x1e, 0x4, 0x57, 0x3b, 0xbb, 0xa, 0x17, 0x8a, 0x27, 0x3a, 0x73, 0xa, 0x7b, 0xa, 0xd7, 0xa, 0xe7, 0x3a, 0x3b, 0x8a, 0x97, 0xa, 0xfe, 0x8, 0x24, 0x8a, 0x2e, 0x0, 0x3e, 0x40, 0x38, 0x64, 0x6f, 0x0, 0x9f, 0x0, 0xbe, 0x43, 0xc8, 0xa, 0xc9, 0x63, 0xce, 0x7, 0xfe, 0x7, 0x2e, 0x81, 0x66, 0x42, 0x6a, 0x42, 0x79, 0xa, 0xbe, 0x0, 0xc8, 0x64, 0xf8, 0x64, 0x8, 0xe4, 0x2e, 0x7, 0x7e, 0x3, 0x9e, 0x7, 0xbe, 0x3, 0xde, 0x7, 0xfe, 0xa, 0x3, 0xa5, 0xd, 0x44, 0xcd, 0x43, 0xce, 0x9, 0xdd, 0x42, 0xde, 0xb, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_CastleArea4 = {0x9b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0x6, 0xc, 0x81, 0x39, 0xa, 0x5c, 0x1, 0x89, 0xa, 0xac, 0x1, 0xd9, 0xa, 0xfc, 0x1, 0x2e, 0x83, 0xa7, 0x1, 0xb7, 0x0, 0xc7, 0x1, 0xde, 0xa, 0xfe, 0x2, 0x4e, 0x83, 0x5a, 0x32, 0x63, 0xa, 0x69, 0xa, 0x7e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x1e, 0x2, 0xee, 0x3, 0xfa, 0x32, 0x3, 0x8a, 0x9, 0xa, 0x14, 0x42, 0x1e, 0x2, 0x7e, 0xa, 0x9e, 0x7, 0xfe, 0xa, 0x2e, 0x86, 0x5e, 0xa, 0x8e, 0x6, 0xbe, 0xa, 0xee, 0x7, 0x3e, 0x83, 0x5e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0x41, 0x52, 0x51, 0x52, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_CastleArea5 = {0x5b, 0x7, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0xfe, 0xa, 0xae, 0x86, 0xbe, 0x7, 0xfe, 0x2, 0xd, 0x2, 0x27, 0x32, 0x46, 0x61, 0x55, 0x62, 0x5e, 0xe, 0x1e, 0x82, 0x68, 0x3c, 0x74, 0x3a, 0x7d, 0x4b, 0x5e, 0x8e, 0x7d, 0x4b, 0x7e, 0x82, 0x84, 0x62, 0x94, 0x61, 0xa4, 0x31, 0xbd, 0x4b, 0xce, 0x6, 0xfe, 0x2, 0xd, 0x6, 0x34, 0x31, 0x3e, 0xa, 0x64, 0x32, 0x75, 0xa, 0x7b, 0x61, 0xa4, 0x33, 0xae, 0x2, 0xde, 0xe, 0x3e, 0x82, 0x64, 0x32, 0x78, 0x32, 0xb4, 0x36, 0xc8, 0x36, 0xdd, 0x4b, 0x44, 0xb2, 0x58, 0x32, 0x94, 0x63, 0xa4, 0x3e, 0xba, 0x30, 0xc9, 0x61, 0xce, 0x6, 0xdd, 0x4b, 0xce, 0x86, 0xdd, 0x4b, 0xfe, 0x2, 0x2e, 0x86, 0x5e, 0x2, 0x7e, 0x6, 0xfe, 0x2, 0x1e, 0x86, 0x3e, 0x2, 0x5e, 0x6, 0x7e, 0x2, 0x9e, 0x6, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_CastleArea6 = {0x5b, 0x6, 0x5, 0x32, 0x6, 0x33, 0x7, 0x34, 0x5e, 0xa, 0xae, 0x2, 0xd, 0x1, 0x39, 0x73, 0xd, 0x3, 0x39, 0x7b, 0x4d, 0x4b, 0xde, 0x6, 0x1e, 0x8a, 0xae, 0x6, 0xc4, 0x33, 0x16, 0xfe, 0xa5, 0x77, 0xfe, 0x2, 0xfe, 0x82, 0xd, 0x7, 0x39, 0x73, 0xa8, 0x74, 0xed, 0x4b, 0x49, 0xfb, 0xe8, 0x74, 0xfe, 0xa, 0x2e, 0x82, 0x67, 0x2, 0x84, 0x7a, 0x87, 0x31, 0xd, 0xb, 0xfe, 0x2, 0xd, 0xc, 0x39, 0x73, 0x5e, 0x6, 0xc6, 0x76, 0x45, 0xff, 0xbe, 0xa, 0xdd, 0x48, 0xfe, 0x6, 0x3d, 0xcb, 0x46, 0x7e, 0xad, 0x4a, 0xfe, 0x82, 0x39, 0xf3, 0xa9, 0x7b, 0x4e, 0x8a, 0x9e, 0x7, 0xfe, 0xa, 0xd, 0xc4, 0xcd, 0x43, 0xce, 0x9, 0xde, 0xb, 0xdd, 0x42, 0xfe, 0x2, 0x5d, 0xc7, 0xfd},
    .L_GroundArea1 = {0x94, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x28, 0x94, 0x65, 0x15, 0xeb, 0x12, 0xfa, 0x41, 0x4a, 0x96, 0x54, 0x40, 0xa4, 0x42, 0xb7, 0x13, 0xe9, 0x19, 0xf5, 0x15, 0x11, 0x80, 0x47, 0x42, 0x71, 0x13, 0x80, 0x41, 0x15, 0x92, 0x1b, 0x1f, 0x24, 0x40, 0x55, 0x12, 0x64, 0x40, 0x95, 0x12, 0xa4, 0x40, 0xd2, 0x12, 0xe1, 0x40, 0x13, 0xc0, 0x2c, 0x17, 0x2f, 0x12, 0x49, 0x13, 0x83, 0x40, 0x9f, 0x14, 0xa3, 0x40, 0x17, 0x92, 0x83, 0x13, 0x92, 0x41, 0xb9, 0x14, 0xc5, 0x12, 0xc8, 0x40, 0xd4, 0x40, 0x4b, 0x92, 0x78, 0x1b, 0x9c, 0x94, 0x9f, 0x11, 0xdf, 0x14, 0xfe, 0x11, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd},
    .L_GroundArea2 = {0x90, 0xb1, 0xf, 0x26, 0x29, 0x91, 0x7e, 0x42, 0xfe, 0x40, 0x28, 0x92, 0x4e, 0x42, 0x2e, 0xc0, 0x57, 0x73, 0xc3, 0x25, 0xc7, 0x27, 0x23, 0x84, 0x33, 0x20, 0x5c, 0x1, 0x77, 0x63, 0x88, 0x62, 0x99, 0x61, 0xaa, 0x60, 0xbc, 0x1, 0xee, 0x42, 0x4e, 0xc0, 0x69, 0x11, 0x7e, 0x42, 0xde, 0x40, 0xf8, 0x62, 0xe, 0xc2, 0xae, 0x40, 0xd7, 0x63, 0xe7, 0x63, 0x33, 0xa7, 0x37, 0x27, 0x43, 0x4, 0xcc, 0x1, 0xe7, 0x73, 0xc, 0x81, 0x3e, 0x42, 0xd, 0xa, 0x5e, 0x40, 0x88, 0x72, 0xbe, 0x42, 0xe7, 0x87, 0xfe, 0x40, 0x39, 0xe1, 0x4e, 0x0, 0x69, 0x60, 0x87, 0x60, 0xa5, 0x60, 0xc3, 0x31, 0xfe, 0x31, 0x6d, 0xc1, 0xbe, 0x42, 0xef, 0x20, 0xfd},
    .L_GroundArea3 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x40, 0x58, 0xf2, 0x93, 0x1, 0x97, 0x0, 0xc, 0x81, 0x97, 0x40, 0xa6, 0x41, 0xc7, 0x40, 0xd, 0x4, 0x3, 0x1, 0x7, 0x1, 0x23, 0x1, 0x27, 0x1, 0xec, 0x3, 0xac, 0xf3, 0xc3, 0x3, 0x78, 0xe2, 0x94, 0x43, 0x47, 0xf3, 0x74, 0x43, 0x47, 0xfb, 0x74, 0x43, 0x2c, 0xf1, 0x4c, 0x63, 0x47, 0x0, 0x57, 0x21, 0x5c, 0x1, 0x7c, 0x72, 0x39, 0xf1, 0xec, 0x2, 0x4c, 0x81, 0xd8, 0x62, 0xec, 0x1, 0xd, 0xd, 0xf, 0x38, 0xc7, 0x7, 0xed, 0x4a, 0x1d, 0xc1, 0x5f, 0x26, 0xfd},
    .L_GroundArea4 = {0x54, 0x21, 0xf, 0x26, 0xa7, 0x22, 0x37, 0xfb, 0x73, 0x20, 0x83, 0x7, 0x87, 0x2, 0x93, 0x20, 0xc7, 0x73, 0x4, 0xf1, 0x6, 0x31, 0x39, 0x71, 0x59, 0x71, 0xe7, 0x73, 0x37, 0xa0, 0x47, 0x4, 0x86, 0x7c, 0xe5, 0x71, 0xe7, 0x31, 0x33, 0xa4, 0x39, 0x71, 0xa9, 0x71, 0xd3, 0x23, 0x8, 0xf2, 0x13, 0x5, 0x27, 0x2, 0x49, 0x71, 0x75, 0x75, 0xe8, 0x72, 0x67, 0xf3, 0x99, 0x71, 0xe7, 0x20, 0xf4, 0x72, 0xf7, 0x31, 0x17, 0xa0, 0x33, 0x20, 0x39, 0x71, 0x73, 0x28, 0xbc, 0x5, 0x39, 0xf1, 0x79, 0x71, 0xa6, 0x21, 0xc3, 0x6, 0xd3, 0x20, 0xdc, 0x0, 0xfc, 0x0, 0x7, 0xa2, 0x13, 0x21, 0x5f, 0x32, 0x8c, 0x0, 0x98, 0x7a, 0xc7, 0x63, 0xd9, 0x61, 0x3, 0xa2, 0x7, 0x22, 0x74, 0x72, 0x77, 0x31, 0xe7, 0x73, 0x39, 0xf1, 0x58, 0x72, 0x77, 0x73, 0xd8, 0x72, 0x7f, 0xb1, 0x97, 0x73, 0xb6, 0x64, 0xc5, 0x65, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea5 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x66, 0x7, 0x81, 0x36, 0x1, 0x66, 0x0, 0xa7, 0x22, 0x8, 0xf2, 0x67, 0x7b, 0xdc, 0x2, 0x98, 0xf2, 0xd7, 0x20, 0x39, 0xf1, 0x9f, 0x33, 0xdc, 0x27, 0xdc, 0x57, 0x23, 0x83, 0x57, 0x63, 0x6c, 0x51, 0x87, 0x63, 0x99, 0x61, 0xa3, 0x6, 0xb3, 0x21, 0x77, 0xf3, 0xf3, 0x21, 0xf7, 0x2a, 0x13, 0x81, 0x23, 0x22, 0x53, 0x0, 0x63, 0x22, 0xe9, 0xb, 0xc, 0x83, 0x13, 0x21, 0x16, 0x22, 0x33, 0x5, 0x8f, 0x35, 0xec, 0x1, 0x63, 0xa0, 0x67, 0x20, 0x73, 0x1, 0x77, 0x1, 0x83, 0x20, 0x87, 0x20, 0xb3, 0x20, 0xb7, 0x20, 0xc3, 0x1, 0xc7, 0x0, 0xd3, 0x20, 0xd7, 0x20, 0x67, 0xa0, 0x77, 0x7, 0x87, 0x22, 0xe8, 0x62, 0xf5, 0x65, 0x1c, 0x82, 0x7f, 0x38, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea6 = {0x50, 0x21, 0x7, 0x81, 0x47, 0x24, 0x57, 0x0, 0x63, 0x1, 0x77, 0x1, 0xc9, 0x71, 0x68, 0xf2, 0xe7, 0x73, 0x97, 0xfb, 0x6, 0x83, 0x5c, 0x1, 0xd7, 0x22, 0xe7, 0x0, 0x3, 0xa7, 0x6c, 0x2, 0xb3, 0x22, 0xe3, 0x1, 0xe7, 0x7, 0x47, 0xa0, 0x57, 0x6, 0xa7, 0x1, 0xd3, 0x0, 0xd7, 0x1, 0x7, 0x81, 0x67, 0x20, 0x93, 0x22, 0x3, 0xa3, 0x1c, 0x61, 0x17, 0x21, 0x6f, 0x33, 0xc7, 0x63, 0xd8, 0x62, 0xe9, 0x61, 0xfa, 0x60, 0x4f, 0xb3, 0x87, 0x63, 0x9c, 0x1, 0xb7, 0x63, 0xc8, 0x62, 0xd9, 0x61, 0xea, 0x60, 0x39, 0xf1, 0x87, 0x21, 0xa7, 0x1, 0xb7, 0x20, 0x39, 0xf1, 0x5f, 0x38, 0x6d, 0xc1, 0xaf, 0x26, 0xfd},
    .L_GroundArea7 = {0x90, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2a, 0x93, 0x87, 0x17, 0xa3, 0x14, 0xb2, 0x42, 0xa, 0x92, 0x19, 0x40, 0x36, 0x14, 0x50, 0x41, 0x82, 0x16, 0x2b, 0x93, 0x24, 0x41, 0xbb, 0x14, 0xb8, 0x0, 0xc2, 0x43, 0xc3, 0x13, 0x1b, 0x94, 0x67, 0x12, 0xc4, 0x15, 0x53, 0xc1, 0xd2, 0x41, 0x12, 0xc1, 0x29, 0x13, 0x85, 0x17, 0x1b, 0x92, 0x1a, 0x42, 0x47, 0x13, 0x83, 0x41, 0xa7, 0x13, 0xe, 0x91, 0xa7, 0x63, 0xb7, 0x63, 0xc5, 0x65, 0xd5, 0x65, 0xdd, 0x4a, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xae, 0x42, 0xdf, 0x20, 0xfd},
    .L_GroundArea8 = {0x90, 0x11, 0xf, 0x26, 0x6e, 0x10, 0x8b, 0x17, 0xaf, 0x32, 0xd8, 0x62, 0xe8, 0x62, 0xfc, 0x3f, 0xad, 0xc8, 0xf8, 0x64, 0xc, 0xbe, 0x43, 0x43, 0xf8, 0x64, 0xc, 0xbf, 0x73, 0x40, 0x84, 0x40, 0x93, 0x40, 0xa4, 0x40, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0x83, 0x40, 0x92, 0x41, 0xb3, 0x40, 0xf8, 0x64, 0x48, 0xe4, 0x5c, 0x39, 0xf8, 0x64, 0x13, 0xc2, 0x37, 0x65, 0x4c, 0x24, 0x63, 0x0, 0x97, 0x65, 0xc3, 0x42, 0xb, 0x97, 0xac, 0x32, 0xf8, 0x64, 0xc, 0xbe, 0x53, 0x45, 0x9d, 0x48, 0xf8, 0x64, 0x2a, 0xe2, 0x3c, 0x47, 0x56, 0x43, 0xba, 0x62, 0xf8, 0x64, 0xc, 0xb7, 0x88, 0x64, 0xbc, 0x31, 0xd4, 0x45, 0xfc, 0x31, 0x3c, 0xb1, 0x78, 0x64, 0x8c, 0x38, 0xb, 0x9c, 0x1a, 0x33, 0x18, 0x61, 0x28, 0x61, 0x39, 0x60, 0x5d, 0x4a, 0xee, 0x11, 0xf, 0xb8, 0x1d, 0xc1, 0x3e, 0x42, 0x6f, 0x20, 0xfd},
    .L_GroundArea9 = {0x52, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xf7, 0x20, 0x7, 0x84, 0x17, 0x20, 0x4f, 0x34, 0xc3, 0x3, 0xc7, 0x2, 0xd3, 0x22, 0x27, 0xe3, 0x39, 0x61, 0xe7, 0x73, 0x5c, 0xe4, 0x57, 0x0, 0x6c, 0x73, 0x47, 0xa0, 0x53, 0x6, 0x63, 0x22, 0xa7, 0x73, 0xfc, 0x73, 0x13, 0xa1, 0x33, 0x5, 0x43, 0x21, 0x5c, 0x72, 0xc3, 0x23, 0xcc, 0x3, 0x77, 0xfb, 0xac, 0x2, 0x39, 0xf1, 0xa7, 0x73, 0xd3, 0x4, 0xe8, 0x72, 0xe3, 0x22, 0x26, 0xf4, 0xbc, 0x2, 0x8c, 0x81, 0xa8, 0x62, 0x17, 0x87, 0x43, 0x24, 0xa7, 0x1, 0xc3, 0x4, 0x8, 0xf2, 0x97, 0x21, 0xa3, 0x2, 0xc9, 0xb, 0xe1, 0x69, 0xf1, 0x69, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea10 = {0x38, 0x11, 0xf, 0x26, 0xad, 0x40, 0x3d, 0xc7, 0xfd},
    .L_GroundArea11 = {0x95, 0xb1, 0xf, 0x26, 0xd, 0x2, 0xc8, 0x72, 0x1c, 0x81, 0x38, 0x72, 0xd, 0x5, 0x97, 0x34, 0x98, 0x62, 0xa3, 0x20, 0xb3, 0x6, 0xc3, 0x20, 0xcc, 0x3, 0xf9, 0x91, 0x2c, 0x81, 0x48, 0x62, 0xd, 0x9, 0x37, 0x63, 0x47, 0x3, 0x57, 0x21, 0x8c, 0x2, 0xc5, 0x79, 0xc7, 0x31, 0xf9, 0x11, 0x39, 0xf1, 0xa9, 0x11, 0x6f, 0xb4, 0xd3, 0x65, 0xe3, 0x65, 0x7d, 0xc1, 0xbf, 0x26, 0xfd},
    .L_GroundArea12 = {0x0, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x2, 0x42, 0x43, 0x4f, 0x52, 0xc2, 0xde, 0x0, 0x5a, 0xc2, 0x4d, 0xc7, 0xfd},
    .L_GroundArea13 = {0x90, 0x51, 0xf, 0x26, 0xee, 0x10, 0xb, 0x94, 0x33, 0x14, 0x42, 0x42, 0x77, 0x16, 0x86, 0x44, 0x2, 0x92, 0x4a, 0x16, 0x69, 0x42, 0x73, 0x14, 0xb0, 0x0, 0xc7, 0x12, 0x5, 0xc0, 0x1c, 0x17, 0x1f, 0x11, 0x36, 0x12, 0x8f, 0x14, 0x91, 0x40, 0x1b, 0x94, 0x35, 0x12, 0x34, 0x42, 0x60, 0x42, 0x61, 0x12, 0x87, 0x12, 0x96, 0x40, 0xa3, 0x14, 0x1c, 0x98, 0x1f, 0x11, 0x47, 0x12, 0x9f, 0x15, 0xcc, 0x15, 0xcf, 0x11, 0x5, 0xc0, 0x1f, 0x15, 0x39, 0x12, 0x7c, 0x16, 0x7f, 0x11, 0x82, 0x40, 0x98, 0x12, 0xdf, 0x15, 0x16, 0xc4, 0x17, 0x14, 0x54, 0x12, 0x9b, 0x16, 0x28, 0x94, 0xce, 0x1, 0x3d, 0xc1, 0x5e, 0x42, 0x8f, 0x20, 0xfd},
    .L_GroundArea14 = {0x97, 0x11, 0xf, 0x26, 0xfe, 0x10, 0x2b, 0x92, 0x57, 0x12, 0x8b, 0x12, 0xc0, 0x41, 0xf7, 0x13, 0x5b, 0x92, 0x69, 0xb, 0xbb, 0x12, 0xb2, 0x46, 0x19, 0x93, 0x71, 0x0, 0x17, 0x94, 0x7c, 0x14, 0x7f, 0x11, 0x93, 0x41, 0xbf, 0x15, 0xfc, 0x13, 0xff, 0x11, 0x2f, 0x95, 0x50, 0x42, 0x51, 0x12, 0x58, 0x14, 0xa6, 0x12, 0xdb, 0x12, 0x1b, 0x93, 0x46, 0x43, 0x7b, 0x12, 0x8d, 0x49, 0xb7, 0x14, 0x1b, 0x94, 0x49, 0xb, 0xbb, 0x12, 0xfc, 0x13, 0xff, 0x12, 0x3, 0xc1, 0x2f, 0x15, 0x43, 0x12, 0x4b, 0x13, 0x77, 0x13, 0x9d, 0x4a, 0x15, 0xc1, 0xa1, 0x41, 0xc3, 0x12, 0xfe, 0x1, 0x7d, 0xc1, 0x9e, 0x42, 0xcf, 0x20, 0xfd},
    .L_GroundArea15 = {0x52, 0x21, 0xf, 0x20, 0x6e, 0x44, 0xc, 0xf1, 0x4c, 0x1, 0xaa, 0x35, 0xd9, 0x34, 0xee, 0x20, 0x8, 0xb3, 0x37, 0x32, 0x43, 0x4, 0x4e, 0x21, 0x53, 0x20, 0x7c, 0x1, 0x97, 0x21, 0xb7, 0x7, 0x9c, 0x81, 0xe7, 0x42, 0x5f, 0xb3, 0x97, 0x63, 0xac, 0x2, 0xc5, 0x41, 0x49, 0xe0, 0x58, 0x61, 0x76, 0x64, 0x85, 0x65, 0x94, 0x66, 0xa4, 0x22, 0xa6, 0x3, 0xc8, 0x22, 0xdc, 0x2, 0x68, 0xf2, 0x96, 0x42, 0x13, 0x82, 0x17, 0x2, 0xaf, 0x34, 0xf6, 0x21, 0xfc, 0x6, 0x26, 0x80, 0x2a, 0x24, 0x36, 0x1, 0x8c, 0x0, 0xff, 0x35, 0x4e, 0xa0, 0x55, 0x21, 0x77, 0x20, 0x87, 0x7, 0x89, 0x22, 0xae, 0x21, 0x4c, 0x82, 0x9f, 0x34, 0xec, 0x1, 0x3, 0xe7, 0x13, 0x67, 0x8d, 0x4a, 0xad, 0x41, 0xf, 0xa6, 0xfd},
    .L_GroundArea16 = {0x10, 0x51, 0x4c, 0x0, 0xc7, 0x12, 0xc6, 0x42, 0x3, 0x92, 0x2, 0x42, 0x29, 0x12, 0x63, 0x12, 0x62, 0x42, 0x69, 0x14, 0xa5, 0x12, 0xa4, 0x42, 0xe2, 0x14, 0xe1, 0x44, 0xf8, 0x16, 0x37, 0xc1, 0x8f, 0x38, 0x2, 0xbb, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xe0, 0x6a, 0xf0, 0x6a, 0x6d, 0xc5, 0xfd},
    .L_GroundArea17 = {0x92, 0x31, 0xf, 0x20, 0x6e, 0x40, 0xd, 0x2, 0x37, 0x73, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x6c, 0x0, 0x9c, 0x0, 0x6, 0xc0, 0xc7, 0x73, 0x6, 0x83, 0x28, 0x72, 0x96, 0x40, 0xe7, 0x73, 0x26, 0xc0, 0x87, 0x7b, 0xd2, 0x41, 0x39, 0xf1, 0xc8, 0xf2, 0x97, 0xe3, 0xa3, 0x23, 0xe7, 0x2, 0xe3, 0x7, 0xf3, 0x22, 0x37, 0xe3, 0x9c, 0x0, 0xbc, 0x0, 0xec, 0x0, 0xc, 0x80, 0x3c, 0x0, 0x86, 0x21, 0xa6, 0x6, 0xb6, 0x24, 0x5c, 0x80, 0x7c, 0x0, 0x9c, 0x0, 0x29, 0xe1, 0xdc, 0x5, 0xf6, 0x41, 0xdc, 0x80, 0xe8, 0x72, 0xc, 0x81, 0x27, 0x73, 0x4c, 0x1, 0x66, 0x74, 0xd, 0x11, 0x3f, 0x35, 0xb6, 0x41, 0x2c, 0x82, 0x36, 0x40, 0x7c, 0x2, 0x86, 0x40, 0xf9, 0x61, 0x39, 0xe1, 0xac, 0x4, 0xc6, 0x41, 0xc, 0x83, 0x16, 0x41, 0x88, 0xf2, 0x39, 0xf1, 0x7c, 0x0, 0x89, 0x61, 0x9c, 0x0, 0xa7, 0x63, 0xbc, 0x0, 0xc5, 0x65, 0xdc, 0x0, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea18 = {0x55, 0xb1, 0xf, 0x26, 0xcf, 0x33, 0x7, 0xb2, 0x15, 0x11, 0x52, 0x42, 0x99, 0xb, 0xac, 0x2, 0xd3, 0x24, 0xd6, 0x42, 0xd7, 0x25, 0x23, 0x84, 0xcf, 0x33, 0x7, 0xe3, 0x19, 0x61, 0x78, 0x7a, 0xef, 0x33, 0x2c, 0x81, 0x46, 0x64, 0x55, 0x65, 0x65, 0x65, 0xec, 0x74, 0x47, 0x82, 0x53, 0x5, 0x63, 0x21, 0x62, 0x41, 0x96, 0x22, 0x9a, 0x41, 0xcc, 0x3, 0xb9, 0x91, 0x39, 0xf1, 0x63, 0x26, 0x67, 0x27, 0xd3, 0x6, 0xfc, 0x1, 0x18, 0xe2, 0xd9, 0x7, 0xe9, 0x4, 0xc, 0x86, 0x37, 0x22, 0x93, 0x24, 0x87, 0x84, 0xac, 0x2, 0xc2, 0x41, 0xc3, 0x23, 0xd9, 0x71, 0xfc, 0x1, 0x7f, 0xb1, 0x9c, 0x0, 0xa7, 0x63, 0xb6, 0x64, 0xcc, 0x0, 0xd4, 0x66, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea19 = {0x50, 0xb1, 0xf, 0x26, 0xfc, 0x0, 0x1f, 0xb3, 0x5c, 0x0, 0x65, 0x65, 0x74, 0x66, 0x83, 0x67, 0x93, 0x67, 0xdc, 0x73, 0x4c, 0x80, 0xb3, 0x20, 0xc9, 0xb, 0xc3, 0x8, 0xd3, 0x2f, 0xdc, 0x0, 0x2c, 0x80, 0x4c, 0x0, 0x8c, 0x0, 0xd3, 0x2e, 0xed, 0x4a, 0xfc, 0x0, 0xd7, 0xa1, 0xec, 0x1, 0x4c, 0x80, 0x59, 0x11, 0xd8, 0x11, 0xda, 0x10, 0x37, 0xa0, 0x47, 0x4, 0x99, 0x11, 0xe7, 0x21, 0x3a, 0x90, 0x67, 0x20, 0x76, 0x10, 0x77, 0x60, 0x87, 0x7, 0xd8, 0x12, 0x39, 0xf1, 0xac, 0x0, 0xe9, 0x71, 0xc, 0x80, 0x2c, 0x0, 0x4c, 0x5, 0xc7, 0x7b, 0x39, 0xf1, 0xec, 0x0, 0xf9, 0x11, 0xc, 0x82, 0x6f, 0x34, 0xf8, 0x11, 0xfa, 0x10, 0x7f, 0xb2, 0xac, 0x0, 0xb6, 0x64, 0xcc, 0x1, 0xe3, 0x67, 0xf3, 0x67, 0x8d, 0xc1, 0xcf, 0x26, 0xfd},
    .L_GroundArea20 = {0x52, 0xb1, 0xf, 0x20, 0x6e, 0x45, 0x39, 0x91, 0xb3, 0x4, 0xc3, 0x21, 0xc8, 0x11, 0xca, 0x10, 0x49, 0x91, 0x7c, 0x73, 0xe8, 0x12, 0x88, 0x91, 0x8a, 0x10, 0xe7, 0x21, 0x5, 0x91, 0x7, 0x30, 0x17, 0x7, 0x27, 0x20, 0x49, 0x11, 0x9c, 0x1, 0xc8, 0x72, 0x23, 0xa6, 0x27, 0x26, 0xd3, 0x3, 0xd8, 0x7a, 0x89, 0x91, 0xd8, 0x72, 0x39, 0xf1, 0xa9, 0x11, 0x9, 0xf1, 0x63, 0x24, 0x67, 0x24, 0xd8, 0x62, 0x28, 0x91, 0x2a, 0x10, 0x56, 0x21, 0x70, 0x4, 0x79, 0xb, 0x8c, 0x0, 0x94, 0x21, 0x9f, 0x35, 0x2f, 0xb8, 0x3d, 0xc1, 0x7f, 0x26, 0xfd},
    .L_GroundArea21 = {0x6, 0xc1, 0x4c, 0x0, 0xf4, 0x4f, 0xd, 0x2, 0x6, 0x20, 0x24, 0x4f, 0x35, 0xa0, 0x36, 0x20, 0x53, 0x46, 0xd5, 0x20, 0xd6, 0x20, 0x34, 0xa1, 0x73, 0x49, 0x74, 0x20, 0x94, 0x20, 0xb4, 0x20, 0xd4, 0x20, 0xf4, 0x20, 0x2e, 0x80, 0x59, 0x42, 0x4d, 0xc7, 0xfd},
    .L_GroundArea22 = {0x96, 0x31, 0xf, 0x26, 0xd, 0x3, 0x1a, 0x60, 0x77, 0x42, 0xc4, 0x0, 0xc8, 0x62, 0xb9, 0xe1, 0xd3, 0x6, 0xd7, 0x7, 0xf9, 0x61, 0xc, 0x81, 0x4e, 0xb1, 0x8e, 0xb1, 0xbc, 0x1, 0xe4, 0x50, 0xe9, 0x61, 0xc, 0x81, 0xd, 0xa, 0x84, 0x43, 0x98, 0x72, 0xd, 0xc, 0xf, 0x38, 0x1d, 0xc1, 0x5f, 0x26, 0xfd},
    .L_UndergroundArea1 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xa7, 0x0, 0xbc, 0x73, 0x1a, 0xe0, 0x39, 0x61, 0x58, 0x62, 0x77, 0x63, 0x97, 0x63, 0xb8, 0x62, 0xd6, 0x7, 0xf8, 0x62, 0x19, 0xe1, 0x75, 0x52, 0x86, 0x40, 0x87, 0x50, 0x95, 0x52, 0x93, 0x43, 0xa5, 0x21, 0xc5, 0x52, 0xd6, 0x40, 0xd7, 0x20, 0xe5, 0x6, 0xe6, 0x51, 0x3e, 0x8d, 0x5e, 0x3, 0x67, 0x52, 0x77, 0x52, 0x7e, 0x2, 0x9e, 0x3, 0xa6, 0x43, 0xa7, 0x23, 0xde, 0x5, 0xfe, 0x2, 0x1e, 0x83, 0x33, 0x54, 0x46, 0x40, 0x47, 0x21, 0x56, 0x4, 0x5e, 0x2, 0x83, 0x54, 0x93, 0x52, 0x96, 0x7, 0x97, 0x50, 0xbe, 0x3, 0xc7, 0x23, 0xfe, 0x2, 0xc, 0x82, 0x43, 0x45, 0x45, 0x24, 0x46, 0x24, 0x90, 0x8, 0x95, 0x51, 0x78, 0xfa, 0xd7, 0x73, 0x39, 0xf1, 0x8c, 0x1, 0xa8, 0x52, 0xb8, 0x52, 0xcc, 0x1, 0x5f, 0xb3, 0x97, 0x63, 0x9e, 0x0, 0xe, 0x81, 0x16, 0x24, 0x66, 0x4, 0x8e, 0x0, 0xfe, 0x1, 0x8, 0xd2, 0xe, 0x6, 0x6f, 0x47, 0x9e, 0xf, 0xe, 0x82, 0x2d, 0x47, 0x28, 0x7a, 0x68, 0x7a, 0xa8, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd},
    .L_UndergroundArea2 = {0x48, 0xf, 0xe, 0x1, 0x5e, 0x2, 0xbc, 0x1, 0xfc, 0x1, 0x2c, 0x82, 0x41, 0x52, 0x4e, 0x4, 0x67, 0x25, 0x68, 0x24, 0x69, 0x24, 0xba, 0x42, 0xc7, 0x4, 0xde, 0xb, 0xb2, 0x87, 0xfe, 0x2, 0x2c, 0xe1, 0x2c, 0x71, 0x67, 0x1, 0x77, 0x0, 0x87, 0x1, 0x8e, 0x0, 0xee, 0x1, 0xf6, 0x2, 0x3, 0x85, 0x5, 0x2, 0x13, 0x21, 0x16, 0x2, 0x27, 0x2, 0x2e, 0x2, 0x88, 0x72, 0xc7, 0x20, 0xd7, 0x7, 0xe4, 0x76, 0x7, 0xa0, 0x17, 0x6, 0x48, 0x7a, 0x76, 0x20, 0x98, 0x72, 0x79, 0xe1, 0x88, 0x62, 0x9c, 0x1, 0xb7, 0x73, 0xdc, 0x1, 0xf8, 0x62, 0xfe, 0x1, 0x8, 0xe2, 0xe, 0x0, 0x6e, 0x2, 0x73, 0x20, 0x77, 0x23, 0x83, 0x4, 0x93, 0x20, 0xae, 0x0, 0xfe, 0xa, 0xe, 0x82, 0x39, 0x71, 0xa8, 0x72, 0xe7, 0x73, 0xc, 0x81, 0x8f, 0x32, 0xae, 0x0, 0xfe, 0x4, 0x4, 0xd1, 0x17, 0x4, 0x26, 0x49, 0x27, 0x29, 0xdf, 0x33, 0xfe, 0x2, 0x44, 0xf6, 0x7c, 0x1, 0x8e, 0x6, 0xbf, 0x47, 0xee, 0xf, 0x4d, 0xc7, 0xe, 0x82, 0x68, 0x7a, 0xae, 0x1, 0xde, 0xf, 0x6d, 0xc5, 0xfd},
    .L_UndergroundArea3 = {0x48, 0x1, 0xe, 0x1, 0x0, 0x5a, 0x3e, 0x6, 0x45, 0x46, 0x47, 0x46, 0x53, 0x44, 0xae, 0x1, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x4, 0x37, 0x28, 0x3a, 0x48, 0x46, 0x47, 0xc7, 0x7, 0xce, 0xf, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x33, 0x53, 0x43, 0x51, 0x46, 0x40, 0x47, 0x50, 0x53, 0x4, 0x55, 0x40, 0x56, 0x50, 0x62, 0x43, 0x64, 0x40, 0x65, 0x50, 0x71, 0x41, 0x73, 0x51, 0x83, 0x51, 0x94, 0x40, 0x95, 0x50, 0xa3, 0x50, 0xa5, 0x40, 0xa6, 0x50, 0xb3, 0x51, 0xb6, 0x40, 0xb7, 0x50, 0xc3, 0x53, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x2e, 0x2, 0x36, 0x47, 0x37, 0x52, 0x3a, 0x49, 0x47, 0x25, 0xa7, 0x52, 0xd7, 0x4, 0xdf, 0x4a, 0x4d, 0xc7, 0xe, 0x81, 0x0, 0x5a, 0x3e, 0x2, 0x44, 0x51, 0x53, 0x44, 0x54, 0x44, 0x55, 0x24, 0xa1, 0x54, 0xae, 0x1, 0xb4, 0x21, 0xdf, 0x4a, 0xe5, 0x7, 0x4d, 0xc7, 0xfd},
    .L_WaterArea1 = {0x41, 0x1, 0xb4, 0x34, 0xc8, 0x52, 0xf2, 0x51, 0x47, 0xd3, 0x6c, 0x3, 0x65, 0x49, 0x9e, 0x7, 0xbe, 0x1, 0xcc, 0x3, 0xfe, 0x7, 0xd, 0xc9, 0x1e, 0x1, 0x6c, 0x1, 0x62, 0x35, 0x63, 0x53, 0x8a, 0x41, 0xac, 0x1, 0xb3, 0x53, 0xe9, 0x51, 0x26, 0xc3, 0x27, 0x33, 0x63, 0x43, 0x64, 0x33, 0xba, 0x60, 0xc9, 0x61, 0xce, 0xb, 0xe5, 0x9, 0xee, 0xf, 0x7d, 0xca, 0x7d, 0x47, 0xfd},
    .L_WaterArea2 = {0x41, 0x1, 0xb8, 0x52, 0xea, 0x41, 0x27, 0xb2, 0xb3, 0x42, 0x16, 0xd4, 0x4a, 0x42, 0xa5, 0x51, 0xa7, 0x31, 0x27, 0xd3, 0x8, 0xe2, 0x16, 0x64, 0x2c, 0x4, 0x38, 0x42, 0x76, 0x64, 0x88, 0x62, 0xde, 0x7, 0xfe, 0x1, 0xd, 0xc9, 0x23, 0x32, 0x31, 0x51, 0x98, 0x52, 0xd, 0xc9, 0x59, 0x42, 0x63, 0x53, 0x67, 0x31, 0x14, 0xc2, 0x36, 0x31, 0x87, 0x53, 0x17, 0xe3, 0x29, 0x61, 0x30, 0x62, 0x3c, 0x8, 0x42, 0x37, 0x59, 0x40, 0x6a, 0x42, 0x99, 0x40, 0xc9, 0x61, 0xd7, 0x63, 0x39, 0xd1, 0x58, 0x52, 0xc3, 0x67, 0xd3, 0x31, 0xdc, 0x6, 0xf7, 0x42, 0xfa, 0x42, 0x23, 0xb1, 0x43, 0x67, 0xc3, 0x34, 0xc7, 0x34, 0xd1, 0x51, 0x43, 0xb3, 0x47, 0x33, 0x9a, 0x30, 0xa9, 0x61, 0xb8, 0x62, 0xbe, 0xb, 0xd5, 0x9, 0xde, 0xf, 0xd, 0xca, 0x7d, 0x47, 0xfd},
    .L_WaterArea3 = {0x49, 0xf, 0x1e, 0x1, 0x39, 0x73, 0x5e, 0x7, 0xae, 0xb, 0x1e, 0x82, 0x6e, 0x88, 0x9e, 0x2, 0xd, 0x4, 0x2e, 0xb, 0x45, 0x9, 0x4e, 0xf, 0xed, 0x47, 0xfd, 0xff},
    .X_SubtracterData = {0x0, 0x10},
    .OffscrJoypadBitsData = {0x1, 0x2},
    .Hidden1UpCoinAmts = {0x15, 0x23, 0x16, 0x1b, 0x17, 0x18, 0x23, 0x63},
    .ClimbAdderLow = {0xe, 0x4, 0xfc, 0xf2},
    .ClimbAdderHigh = {0x0, 0x0, 0xff, 0xff},
    .JumpMForceData = {0x20, 0x20, 0x1e, 0x28, 0x28, 0xd, 0x4},
    .FallMForceData = {0x70, 0x70, 0x60, 0x90, 0x90, 0xa, 0x9},
    .PlayerYSpdData = {0xfc, 0xfc, 0xfc, 0xfb, 0xfb, 0xfe, 0xff},
    .InitMForceData = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x0},
    .MaxLeftXSpdData = {0xd8, 0xe8, 0xf0},
    .MaxRightXSpdData = {0x28, 0x18, 0x10, 0xc},
    .FrictionData = {0xe4, 0x98, 0xd0},
    .Climb_Y_SpeedData = {0x0, 0xff, 0x1},
    .Climb_Y_MForceData = {0x0, 0x20, 0xff},
    .PlayerAnimTmrData = {0x2, 0x4, 0x7},
    .FireballXSpdData = {0x40, 0xc0},
    .Bubble_MForceData = {0xff, 0x50},
    .BubbleTimerData = {0x40, 0x20},
    .FlagpoleScoreMods = {0x5, 0x2, 0x8, 0x4, 0x1},
    .FlagpoleScoreDigits = {0x3, 0x3, 0x4, 0x4, 0x4},
    .Jumpspring_Y_PosData = {0x8, 0x10, 0x8, 0x0},
    .VineHeightData = {0x30, 0x60},
    .CannonBitmasks = {0b1111, 0b111},
    .BulletBillXSpdData = {0x18, 0xe8},
    .HammerEnemyOfsData = {0x4, 0x4, 0x4, 0x5, 0x5, 0x5, 0x6, 0x6, 0x6},
    .HammerXSpdData = {0x10, 0xf0},
    .CoinTallyOffsets = {0x17, 0x1d},
    .ScoreOffsets = {0xb, 0x11},
    .StatusBarNybbles = {0x2, 0x13},
    .BlockYPosAdderData = {0x4, 0x12},
    .BrickQBlockMetatiles = {0xc1, 0xc0, 0x5f, 0x60, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e},
    .MaxSpdBlockData = {0x6, 0x8},
    .LoopCmdWorldNumber = {0x3, 0x3, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7, 0x7, 0x7},
    .LoopCmdPageNumber = {0x5, 0x9, 0x4, 0x5, 0x6, 0x8, 0x9, 0xa, 0x6, 0xb, 0x10},
    .LoopCmdYPosition = {0x40, 0xb0, 0xb0, 0x80, 0x40, 0x40, 0x80, 0x40, 0xf0, 0xf0, 0xf0},
    .NormalXSpdData = {0xf8, 0xf4},
    .HBroWalkingTimerData = {0x80, 0x50},
    .PRDiffAdjustData = {0x26, 0x2c, 0x32, 0x38, 0x20, 0x22, 0x24, 0x26, 0x13, 0x14, 0x15, 0x16},
    .FirebarSpinSpdData = {0x28, 0x38, 0x28, 0x38, 0x28},
    .FirebarSpinDirData = {0x0, 0x0, 0x10, 0x10, 0x0},
    .FlyCCXPositionData = {0x80, 0x30, 0x40, 0x80, 0x30, 0x50, 0x50, 0x70, 0x20, 0x40, 0x80, 0xa0, 0x70, 0x40, 0x90, 0x68},
    .FlyCCXSpeedData = {0xe, 0x5, 0x6, 0xe, 0x1c, 0x20, 0x10, 0xc, 0x1e, 0x22, 0x18, 0x14},
    .FlyCCTimerData = {0x10, 0x60, 0x20, 0x48},
    .FlameYPosData = {0x90, 0x80, 0x70, 0x90},
    .FlameYMFAdderData = {0xff, 0x1},
    .FireworksXPosData = {0x0, 0x30, 0x60, 0x60, 0x0, 0x20},
    .FireworksYPosData = {0x60, 0x40, 0x70, 0x40, 0x60, 0x30},
    .Bitmasks = {0b1, 0b10, 0b100, 0b1000, 0b10000, 0b100000, 0b1000000, 0b10000000},
    .Enemy17YPosData = {0x40, 0x30, 0x90, 0x50, 0x20, 0x60, 0xa0, 0x70},
    .SwimCC_IDData = {0xa, 0xb},
    .PlatPosDataLow = {0x8, 0xc, 0xf8},
    .PlatPosDataHigh = {0x0, 0x0, 0xff},
    .HammerThrowTmrData = {0x30, 0x1c},
    .XSpeedAdderData = {0x0, 0xe8, 0x0, 0x18},
    .RevivedXSpeed = {0x8, 0xf8, 0xc, 0xf4},
    .HammerBroJumpLData = {0x20, 0x37},
    .BlooberBitmasks = {0b111111, 0b11},
    .SwimCCXMoveData = {0x40, 0x80, 0x4, 0x4},
    .FirebarPosLookupTbl = {0x0, 0x1, 0x3, 0x4, 0x5, 0x6, 0x7, 0x7, 0x8, 0x0, 0x3, 0x6, 0x9, 0xb, 0xd, 0xe, 0xf, 0x10, 0x0, 0x4, 0x9, 0xd, 0x10, 0x13, 0x16, 0x17, 0x18, 0x0, 0x6, 0xc, 0x12, 0x16, 0x1a, 0x1d, 0x1f, 0x20, 0x0, 0x7, 0xf, 0x16, 0x1c, 0x21, 0x25, 0x27, 0x28, 0x0, 0x9, 0x12, 0x1b, 0x21, 0x27, 0x2c, 0x2f, 0x30, 0x0, 0xb, 0x15, 0x1f, 0x27, 0x2e, 0x33, 0x37, 0x38, 0x0, 0xc, 0x18, 0x24, 0x2d, 0x35, 0x3b, 0x3e, 0x40, 0x0, 0xe, 0x1b, 0x28, 0x32, 0x3b, 0x42, 0x46, 0x48, 0x0, 0xf, 0x1f, 0x2d, 0x38, 0x42, 0x4a, 0x4e, 0x50, 0x0, 0x11, 0x22, 0x31, 0x3e, 0x49, 0x51, 0x56, 0x58},
    .FirebarMirrorData = {0x1, 0x3, 0x2, 0x0},
    .FirebarTblOffsets = {0x0, 0x9, 0x12, 0x1b, 0x24, 0x2d, 0x36, 0x3f, 0x48, 0x51, 0x5a, 0x63},
    .FirebarYPos = {0xc, 0x18},
    .PRandomSubtracter = {0xf8, 0xa0, 0x70, 0xbd, 0x0},
    .FlyCCBPriority = {0x20, 0x20, 0x20, 0x0, 0x0},
    .LakituDiffAdj = {0x15, 0x30, 0x40},
    .BridgeCollapseData = {0x1a, 0x58, 0x98, 0x96, 0x94, 0x92, 0x90, 0x8e, 0x8c, 0x8a, 0x88, 0x86, 0x84, 0x82, 0x80},
    .PRandomRange = {0x21, 0x41, 0x11, 0x31},
    .FlameTimerData = {0xbf, 0x40, 0xbf, 0xbf, 0xbf, 0x40, 0x40, 0xbf},
    .StarFlagYPosAdder = {0x0, 0x0, 0x8, 0x8},
    .StarFlagXPosAdder = {0x0, 0x8, 0x0, 0x8},
    .StarFlagTileData = {0x54, 0x55, 0x56, 0x57},
    .BowserIdentities = {offsetof(G, Goomba), offsetof(G, GreenKoopa), offsetof(G, BuzzyBeetle), offsetof(G, Spiny), offsetof(G, Lakitu), offsetof(G, Bloober), offsetof(G, HammerBro), offsetof(G, Bowser)},
    .ResidualXSpdData = {0x18, 0xe8},
    .KickedShellXSpdData = {0x30, 0xd0},
    .DemotedKoopaXSpdData = {0x8, 0xf8},
    .KickedShellPtsData = {0xa, 0x6, 0x4},
    .StompedEnemyPtsData = {0x2, 0x6, 0x5, 0x6},
    .RevivalRateData = {0x10, 0xb},
    .SetBitsMask = {0b10000000, 0b1000000, 0b100000, 0b10000, 0b1000, 0b100, 0b10},
    .ClearBitsMask = {0b1111111, 0b10111111, 0b11011111, 0b11101111, 0b11110111, 0b11111011, 0b11111101},
    .PlayerPosSPlatData = {0x80, 0x0},
    .PlayerBGUpperExtent = {0x20, 0x10},
    .AreaChangeTimerData = {0xa0, 0x34},
    .ClimbXPosAdder = {0xf9, 0x7},
    .ClimbPLocAdder = {0xff, 0x0},
    .FlagpoleYPosData = {0x18, 0x22, 0x50, 0x68, 0x90},
    .SolidMTileUpperExt = {0x10, 0x61, 0x88, 0xc4},
    .ClimbMTileUpperExt = {0x24, 0x6d, 0x8a, 0xc6},
    .EnemyBGCStateData = {0x1, 0x1, 0x2, 0x2, 0x2, 0x5},
    .EnemyBGCXSpdData = {0x10, 0xf0},
    .BoundBoxCtrlData = {0x2, 0x8, 0xe, 0x20, 0x3, 0x14, 0xd, 0x20, 0x2, 0x14, 0xe, 0x20, 0x2, 0x9, 0xe, 0x15, 0x0, 0x0, 0x18, 0x6, 0x0, 0x0, 0x20, 0xd, 0x0, 0x0, 0x30, 0xd, 0x0, 0x0, 0x8, 0x8, 0x6, 0x4, 0xa, 0x8, 0x3, 0xe, 0xd, 0x14, 0x0, 0x2, 0x10, 0x15, 0x4, 0x4, 0xc, 0x1c},
    .BlockBufferAdderData = {0x0, 0x7, 0xe},
    .BlockBuffer_X_Adder = {0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x3, 0xc, 0x2, 0x2, 0xd, 0xd, 0x8, 0x0, 0x10, 0x4, 0x14, 0x4, 0x4},
    .BlockBuffer_Y_Adder = {0x4, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x2, 0x20, 0x20, 0x8, 0x18, 0x8, 0x18, 0x12, 0x20, 0x20, 0x18, 0x18, 0x18, 0x18, 0x18, 0x14, 0x14, 0x6, 0x6, 0x8, 0x10},
    .VineYPosAdder = {0x0, 0x30},
    .FirstSprXPos = {0x4, 0x0, 0x4, 0x0},
    .FirstSprYPos = {0x0, 0x4, 0x0, 0x4},
    .SecondSprXPos = {0x0, 0x8, 0x0, 0x8},
    .SecondSprYPos = {0x8, 0x0, 0x8, 0x0},
    .FirstSprTilenum = {0x80, 0x82, 0x81, 0x83},
    .SecondSprTilenum = {0x81, 0x83, 0x80, 0x82},
    .HammerSprAttrib = {0x3, 0x3, 0xc3, 0xc3},
    .FlagpoleScoreNumTiles = {0xf9, 0x50, 0xf7, 0x50, 0xfa, 0xfb, 0xf8, 0xfb, 0xf6, 0xfb},
    .JumpingCoinTiles = {0x60, 0x61, 0x62, 0x63},
    .PowerUpGfxTable = {0x76, 0x77, 0x78, 0x79, 0xd6, 0xd6, 0xd9, 0xd9, 0x8d, 0x8d, 0xe4, 0xe4, 0x76, 0x77, 0x78, 0x79},
    .PowerUpAttributes = {0x2, 0x1, 0x2, 0x1},
    .EnemyGraphicsTable = {0xfc, 0xfc, 0xaa, 0xab, 0xac, 0xad, 0xfc, 0xfc, 0xae, 0xaf, 0xb0, 0xb1, 0xfc, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xfc, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0x69, 0xa5, 0x6a, 0xa7, 0xa8, 0xa9, 0x6b, 0xa0, 0x6c, 0xa2, 0xa3, 0xa4, 0xfc, 0xfc, 0x96, 0x97, 0x98, 0x99, 0xfc, 0xfc, 0x9a, 0x9b, 0x9c, 0x9d, 0xfc, 0xfc, 0x8f, 0x8e, 0x8e, 0x8f, 0xfc, 0xfc, 0x95, 0x94, 0x94, 0x95, 0xfc, 0xfc, 0xdc, 0xdc, 0xdf, 0xdf, 0xdc, 0xdc, 0xdd, 0xdd, 0xde, 0xde, 0xfc, 0xfc, 0xb2, 0xb3, 0xb4, 0xb5, 0xfc, 0xfc, 0xb6, 0xb3, 0xb7, 0xb5, 0xfc, 0xfc, 0x70, 0x71, 0x72, 0x73, 0xfc, 0xfc, 0x6e, 0x6e, 0x6f, 0x6f, 0xfc, 0xfc, 0x6d, 0x6d, 0x6f, 0x6f, 0xfc, 0xfc, 0x6f, 0x6f, 0x6e, 0x6e, 0xfc, 0xfc, 0x6f, 0x6f, 0x6d, 0x6d, 0xfc, 0xfc, 0xf4, 0xf4, 0xf5, 0xf5, 0xfc, 0xfc, 0xf4, 0xf4, 0xf5, 0xf5, 0xfc, 0xfc, 0xf5, 0xf5, 0xf4, 0xf4, 0xfc, 0xfc, 0xf5, 0xf5, 0xf4, 0xf4, 0xfc, 0xfc, 0xfc, 0xfc, 0xef, 0xef, 0xb9, 0xb8, 0xbb, 0xba, 0xbc, 0xbc, 0xfc, 0xfc, 0xbd, 0xbd, 0xbc, 0xbc, 0x7a, 0x7b, 0xda, 0xdb, 0xd8, 0xd8, 0xcd, 0xcd, 0xce, 0xce, 0xcf, 0xcf, 0x7d, 0x7c, 0xd1, 0x8c, 0xd3, 0xd2, 0x7d, 0x7c, 0x89, 0x88, 0x8b, 0x8a, 0xd5, 0xd4, 0xe3, 0xe2, 0xd3, 0xd2, 0xd5, 0xd4, 0xe3, 0xe2, 0x8b, 0x8a, 0xe5, 0xe5, 0xe6, 0xe6, 0xeb, 0xeb, 0xec, 0xec, 0xed, 0xed, 0xee, 0xee, 0xfc, 0xfc, 0xd0, 0xd0, 0xd7, 0xd7, 0xbf, 0xbe, 0xc1, 0xc0, 0xc2, 0xfc, 0xc4, 0xc3, 0xc6, 0xc5, 0xc8, 0xc7, 0xbf, 0xbe, 0xca, 0xc9, 0xc2, 0xfc, 0xc4, 0xc3, 0xc6, 0xc5, 0xcc, 0xcb, 0xfc, 0xfc, 0xe8, 0xe7, 0xea, 0xe9, 0xf2, 0xf2, 0xf3, 0xf3, 0xf2, 0xf2, 0xf1, 0xf1, 0xf1, 0xf1, 0xfc, 0xfc, 0xf0, 0xf0, 0xfc, 0xfc, 0xfc, 0xfc},
    .EnemyGfxTableOffsets = {0xc, 0xc, 0x0, 0xc, 0xc, 0xa8, 0x54, 0x3c, 0xea, 0x18, 0x48, 0x48, 0xcc, 0xc0, 0x18, 0x18, 0x18, 0x90, 0x24, 0xff, 0x48, 0x9c, 0xd2, 0xd8, 0xf0, 0xf6, 0xfc},
    .EnemyAttributeData = {0x1, 0x2, 0x3, 0x2, 0x1, 0x1, 0x3, 0x3, 0x3, 0x1, 0x1, 0x2, 0x2, 0x21, 0x1, 0x2, 0x1, 0x1, 0x2, 0xff, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2},
    .EnemyAnimTimingBMask = {0x8, 0x18},
    .JumpspringFrameOffsets = {0x18, 0x19, 0x1a, 0x19, 0x18},
    .DefaultBlockObjTiles = {0x85, 0x85, 0x86, 0x86},
    .ExplosionTiles = {0x68, 0x67, 0x66},
    .PlayerGfxTblOffsets = {0x20, 0x28, 0xc8, 0x18, 0x0, 0x40, 0x50, 0x58, 0x80, 0x88, 0xb8, 0x78, 0x60, 0xa0, 0xb0, 0xb8},
    .PlayerGraphicsTable = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x8, 0x9, 0xa, 0xb, 0xc, 0x30, 0x2c, 0x2d, 0x8, 0x9, 0xa, 0xb, 0x2e, 0x2f, 0x2c, 0x2d, 0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0x5c, 0x5d, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0x5e, 0x5f, 0xfc, 0xfc, 0x8, 0x9, 0x58, 0x59, 0x5a, 0x5a, 0x8, 0x9, 0x28, 0x29, 0x2a, 0x2b, 0xe, 0xf, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x34, 0x35, 0xfc, 0xfc, 0xfc, 0xfc, 0x36, 0x37, 0x38, 0x39, 0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x3b, 0x3c, 0xfc, 0xfc, 0xfc, 0xfc, 0x3d, 0x3e, 0x3f, 0x40, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x41, 0x42, 0x43, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x44, 0x45, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x44, 0x47, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x48, 0x49, 0xfc, 0xfc, 0xfc, 0xfc, 0x32, 0x33, 0x90, 0x91, 0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x92, 0x93, 0xfc, 0xfc, 0xfc, 0xfc, 0x9e, 0x9e, 0x9f, 0x9f, 0xfc, 0xfc, 0xfc, 0xfc, 0x3a, 0x37, 0x4f, 0x4f, 0xfc, 0xfc, 0x0, 0x1, 0x4c, 0x4d, 0x4e, 0x4e, 0x0, 0x1, 0x4c, 0x4d, 0x4a, 0x4a, 0x4b, 0x4b},
    .SwimKickTileNum = {0x31, 0x46},
    .IntermediatePlayerData = {0x58, 0x1, 0x0, 0x60, 0xff, 0x4},
    .ChangeSizeOffsetAdder = {0x0, 0x1, 0x0, 0x1, 0x0, 0x1, 0x2, 0x0, 0x1, 0x2, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0, 0x2, 0x0},
    .ObjOffsetData = {0x7, 0x16, 0xd},
    .XOffscreenBitsData = {0x7f, 0x3f, 0x1f, 0xf, 0x7, 0x3, 0x1, 0x0, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff},
    .DefaultXOnscreenOfs = {0x7, 0xf, 0x7},
    .YOffscreenBitsData = {0x0, 0x8, 0xc, 0xe, 0xf, 0x7, 0x3, 0x1, 0x0},
    .DefaultYOnscreenOfs = {0x4, 0x0, 0x4},
    .HighPosUnitData = {0xff, 0x0},
    .SwimStompEnvelopeData = {0x9f, 0x9b, 0x98, 0x96, 0x95, 0x94, 0x92, 0x90, 0x90, 0x9a, 0x97, 0x95, 0x93, 0x92},
    .ExtraLifeFreqData = {0x58, 0x2, 0x54, 0x56, 0x4e, 0x44},
    .PowerUpGrabFreqData = {0x4c, 0x52, 0x4c, 0x48, 0x3e, 0x36, 0x3e, 0x36, 0x30, 0x28, 0x4a, 0x50, 0x4a, 0x64, 0x3c, 0x32, 0x3c, 0x32, 0x2c, 0x24, 0x3a, 0x64, 0x3a, 0x34, 0x2c, 0x22, 0x2c, 0x22, 0x1c, 0x14},
    .PUp_VGrow_FreqData = {0x14, 0x4, 0x22, 0x24, 0x16, 0x4, 0x24, 0x26, 0x18, 0x4, 0x26, 0x28, 0x1a, 0x4, 0x28, 0x2a, 0x1c, 0x4, 0x2a, 0x2c, 0x1e, 0x4, 0x2c, 0x2e, 0x20, 0x4, 0x2e, 0x30, 0x22, 0x4, 0x30, 0x32},
    .BrickShatterFreqData = {0x1, 0xe, 0xe, 0xd, 0xb, 0x6, 0xc, 0xf, 0xa, 0x9, 0x3, 0xd, 0x8, 0xd, 0x6, 0xc},
    .MusicHeaderData = {((offsetof(G, DeathMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, GameOverMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, VictoryMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, WinCastleMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, GameOverMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, EndOfLevelMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, TimeRunningOutHdr)) - (offsetof(G, MHD))), ((offsetof(G, SilenceHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart1Hdr)) - (offsetof(G, MHD))), ((offsetof(G, WaterMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, UndergroundMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, CastleMusHdr)) - (offsetof(G, MHD))), ((offsetof(G, Star_CloudHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelLeadInHdr)) - (offsetof(G, MHD))), ((offsetof(G, Star_CloudHdr)) - (offsetof(G, MHD))), ((offsetof(G, SilenceHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelLeadInHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart1Hdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart1Hdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2CHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart2CHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelLeadInHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart1Hdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart1Hdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4CHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4CHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart3AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelLeadInHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4BHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4AHdr)) - (offsetof(G, MHD))), ((offsetof(G, GroundLevelPart4CHdr)) - (offsetof(G, MHD)))},
    .TimeRunningOutHdr = {0x8, LO8(offsetof(G, TimeRunOutMusData)), HI8(offsetof(G, TimeRunOutMusData)), 0x27, 0x18},
    .Star_CloudHdr = {0x20, LO8(offsetof(G, Star_CloudMData)), HI8(offsetof(G, Star_CloudMData)), 0x2e, 0x1a, 0x40},
    .EndOfLevelMusHdr = {0x20, LO8(offsetof(G, WinLevelMusData)), HI8(offsetof(G, WinLevelMusData)), 0x3d, 0x21},
    .ResidualHeaderData = {0x20, 0xc4, 0xfc, 0x3f, 0x1d},
    .UndergroundMusHdr = {0x18, LO8(offsetof(G, UndergroundMusData)), HI8(offsetof(G, UndergroundMusData)), 0x0, 0x0},
    .SilenceHdr = {0x8, LO8(offsetof(G, SilenceData)), HI8(offsetof(G, SilenceData)), 0x0},
    .CastleMusHdr = {0x0, LO8(offsetof(G, CastleMusData)), HI8(offsetof(G, CastleMusData)), 0x93, 0x62},
    .VictoryMusHdr = {0x10, LO8(offsetof(G, VictoryMusData)), HI8(offsetof(G, VictoryMusData)), 0x24, 0x14},
    .GameOverMusHdr = {0x18, LO8(offsetof(G, GameOverMusData)), HI8(offsetof(G, GameOverMusData)), 0x1e, 0x14},
    .WaterMusHdr = {0x8, LO8(offsetof(G, WaterMusData)), HI8(offsetof(G, WaterMusData)), 0xa0, 0x70, 0x68},
    .WinCastleMusHdr = {0x8, LO8(offsetof(G, EndOfCastleMusData)), HI8(offsetof(G, EndOfCastleMusData)), 0x4c, 0x24},
    .GroundLevelPart1Hdr = {0x18, LO8(offsetof(G, GroundM_P1Data)), HI8(offsetof(G, GroundM_P1Data)), 0x2d, 0x1c, 0xb8},
    .GroundLevelPart2AHdr = {0x18, LO8(offsetof(G, GroundM_P2AData)), HI8(offsetof(G, GroundM_P2AData)), 0x20, 0x12, 0x70},
    .GroundLevelPart2BHdr = {0x18, LO8(offsetof(G, GroundM_P2BData)), HI8(offsetof(G, GroundM_P2BData)), 0x1b, 0x10, 0x44},
    .GroundLevelPart2CHdr = {0x18, LO8(offsetof(G, GroundM_P2CData)), HI8(offsetof(G, GroundM_P2CData)), 0x11, 0xa, 0x1c},
    .GroundLevelPart3AHdr = {0x18, LO8(offsetof(G, GroundM_P3AData)), HI8(offsetof(G, GroundM_P3AData)), 0x2d, 0x10, 0x58},
    .GroundLevelPart3BHdr = {0x18, LO8(offsetof(G, GroundM_P3BData)), HI8(offsetof(G, GroundM_P3BData)), 0x14, 0xd, 0x3f},
    .GroundLevelLeadInHdr = {0x18, LO8(offsetof(G, GroundMLdInData)), HI8(offsetof(G, GroundMLdInData)), 0x15, 0xd, 0x21},
    .GroundLevelPart4AHdr = {0x18, LO8(offsetof(G, GroundM_P4AData)), HI8(offsetof(G, GroundM_P4AData)), 0x18, 0x10, 0x7a},
    .GroundLevelPart4BHdr = {0x18, LO8(offsetof(G, GroundM_P4BData)), HI8(offsetof(G, GroundM_P4BData)), 0x19, 0xf, 0x54},
    .GroundLevelPart4CHdr = {0x18, LO8(offsetof(G, GroundM_P4CData)), HI8(offsetof(G, GroundM_P4CData)), 0x1e, 0x12, 0x2b},
    .DeathMusHdr = {0x18, LO8(offsetof(G, DeathMusData)), HI8(offsetof(G, DeathMusData)), 0x1e, 0xf, 0x2d},
    .Star_CloudMData = {0x84, 0x2c, 0x2c, 0x2c, 0x82, 0x4, 0x2c, 0x4, 0x85, 0x2c, 0x84, 0x2c, 0x2c, 0x2a, 0x2a, 0x2a, 0x82, 0x4, 0x2a, 0x4, 0x85, 0x2a, 0x84, 0x2a, 0x2a, 0x0, 0x1f, 0x1f, 0x1f, 0x98, 0x1f, 0x1f, 0x98, 0x9e, 0x98, 0x1f, 0x1d, 0x1d, 0x1d, 0x94, 0x1d, 0x1d, 0x94, 0x9c, 0x94, 0x1d, 0x86, 0x18, 0x85, 0x26, 0x30, 0x84, 0x4, 0x26, 0x30, 0x86, 0x14, 0x85, 0x22, 0x2c, 0x84, 0x4, 0x22, 0x2c, 0x21, 0xd0, 0xc4, 0xd0, 0x31, 0xd0, 0xc4, 0xd0, 0x0},
    .GroundM_P1Data = {0x85, 0x2c, 0x22, 0x1c, 0x84, 0x26, 0x2a, 0x82, 0x28, 0x26, 0x4, 0x87, 0x22, 0x34, 0x3a, 0x82, 0x40, 0x4, 0x36, 0x84, 0x3a, 0x34, 0x82, 0x2c, 0x30, 0x85, 0x2a},
    .SilenceData = {0x0, 0x5d, 0x55, 0x4d, 0x15, 0x19, 0x96, 0x15, 0xd5, 0xe3, 0xeb, 0x2d, 0xa6, 0x2b, 0x27, 0x9c, 0x9e, 0x59, 0x85, 0x22, 0x1c, 0x14, 0x84, 0x1e, 0x22, 0x82, 0x20, 0x1e, 0x4, 0x87, 0x1c, 0x2c, 0x34, 0x82, 0x36, 0x4, 0x30, 0x34, 0x4, 0x2c, 0x4, 0x26, 0x2a, 0x85, 0x22},
    .GroundM_P2AData = {0x84, 0x4, 0x82, 0x3a, 0x38, 0x36, 0x32, 0x4, 0x34, 0x4, 0x24, 0x26, 0x2c, 0x4, 0x26, 0x2c, 0x30, 0x0, 0x5, 0xb4, 0xb2, 0xb0, 0x2b, 0xac, 0x84, 0x9c, 0x9e, 0xa2, 0x84, 0x94, 0x9c, 0x9e, 0x85, 0x14, 0x22, 0x84, 0x2c, 0x85, 0x1e, 0x82, 0x2c, 0x84, 0x2c, 0x1e},
    .GroundM_P2BData = {0x84, 0x4, 0x82, 0x3a, 0x38, 0x36, 0x32, 0x4, 0x34, 0x4, 0x64, 0x4, 0x64, 0x86, 0x64, 0x0, 0x5, 0xb4, 0xb2, 0xb0, 0x2b, 0xac, 0x84, 0x37, 0xb6, 0xb6, 0x45, 0x85, 0x14, 0x1c, 0x82, 0x22, 0x84, 0x2c, 0x4e, 0x82, 0x4e, 0x84, 0x4e, 0x22},
    .GroundM_P2CData = {0x84, 0x4, 0x85, 0x32, 0x85, 0x30, 0x86, 0x2c, 0x4, 0x0, 0x5, 0xa4, 0x5, 0x9e, 0x5, 0x9d, 0x85, 0x84, 0x14, 0x85, 0x24, 0x28, 0x2c, 0x82, 0x22, 0x84, 0x22, 0x14, 0x21, 0xd0, 0xc4, 0xd0, 0x31, 0xd0, 0xc4, 0xd0, 0x0},
    .GroundM_P3AData = {0x82, 0x2c, 0x84, 0x2c, 0x2c, 0x82, 0x2c, 0x30, 0x4, 0x34, 0x2c, 0x4, 0x26, 0x86, 0x22, 0x0, 0xa4, 0x25, 0x25, 0xa4, 0x29, 0xa2, 0x1d, 0x9c, 0x95},
    .GroundM_P3BData = {0x82, 0x2c, 0x2c, 0x4, 0x2c, 0x4, 0x2c, 0x30, 0x85, 0x34, 0x4, 0x4, 0x0, 0xa4, 0x25, 0x25, 0xa4, 0xa8, 0x63, 0x4, 0x85, 0xe, 0x1a, 0x84, 0x24, 0x85, 0x22, 0x14, 0x84, 0xc},
    .GroundMLdInData = {0x82, 0x34, 0x84, 0x34, 0x34, 0x82, 0x2c, 0x84, 0x34, 0x86, 0x3a, 0x4, 0x0, 0xa0, 0x21, 0x21, 0xa0, 0x21, 0x2b, 0x5, 0xa3, 0x82, 0x18, 0x84, 0x18, 0x18, 0x82, 0x18, 0x18, 0x4, 0x86, 0x3a, 0x22, 0x31, 0x90, 0x31, 0x90, 0x31, 0x71, 0x31, 0x90, 0x90, 0x90, 0x0},
    .GroundM_P4AData = {0x82, 0x34, 0x84, 0x2c, 0x85, 0x22, 0x84, 0x24, 0x82, 0x26, 0x36, 0x4, 0x36, 0x86, 0x26, 0x0, 0xac, 0x27, 0x5d, 0x1d, 0x9e, 0x2d, 0xac, 0x9f, 0x85, 0x14, 0x82, 0x20, 0x84, 0x22, 0x2c, 0x1e, 0x1e, 0x82, 0x2c, 0x2c, 0x1e, 0x4},
    .GroundM_P4BData = {0x87, 0x2a, 0x40, 0x40, 0x40, 0x3a, 0x36, 0x82, 0x34, 0x2c, 0x4, 0x26, 0x86, 0x22, 0x0, 0xe3, 0xf7, 0xf7, 0xf7, 0xf5, 0xf1, 0xac, 0x27, 0x9e, 0x9d, 0x85, 0x18, 0x82, 0x1e, 0x84, 0x22, 0x2a, 0x22, 0x22, 0x82, 0x2c, 0x2c, 0x22, 0x4},
    .DeathMusData = {0x86, 0x4},
    .GroundM_P4CData = {0x82, 0x2a, 0x36, 0x4, 0x36, 0x87, 0x36, 0x34, 0x30, 0x86, 0x2c, 0x4, 0x0, 0x0, 0x68, 0x6a, 0x6c, 0x45, 0xa2, 0x31, 0xb0, 0xf1, 0xed, 0xeb, 0xa2, 0x1d, 0x9c, 0x95, 0x86, 0x4, 0x85, 0x22, 0x82, 0x22, 0x87, 0x22, 0x26, 0x2a, 0x84, 0x2c, 0x22, 0x86, 0x14, 0x51, 0x90, 0x31, 0x11, 0x0},
    .CastleMusData = {0x80, 0x22, 0x28, 0x22, 0x26, 0x22, 0x24, 0x22, 0x26, 0x22, 0x28, 0x22, 0x2a, 0x22, 0x28, 0x22, 0x26, 0x22, 0x28, 0x22, 0x26, 0x22, 0x24, 0x22, 0x26, 0x22, 0x28, 0x22, 0x2a, 0x22, 0x28, 0x22, 0x26, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x24, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x28, 0x20, 0x26, 0x20, 0x24, 0x28, 0x30, 0x28, 0x32, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x2c, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x32, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x30, 0x28, 0x2e, 0x28, 0x2c, 0x28, 0x2e, 0x0, 0x4, 0x70, 0x6e, 0x6c, 0x6e, 0x70, 0x72, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x6e, 0x70, 0x72, 0x70, 0x6e, 0x6e, 0x6c, 0x6e, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x6e, 0x6c, 0x6e, 0x70, 0x6e, 0x70, 0x6e, 0x6c, 0x76, 0x78, 0x76, 0x74, 0x76, 0x74, 0x72, 0x74, 0x76, 0x78, 0x76, 0x74, 0x76, 0x74, 0x72, 0x74, 0x84, 0x1a, 0x83, 0x18, 0x20, 0x84, 0x1e, 0x83, 0x1c, 0x28, 0x26, 0x1c, 0x1a, 0x1c},
    .GameOverMusData = {0x82, 0x2c, 0x4, 0x4, 0x22, 0x4, 0x4, 0x84, 0x1c, 0x87, 0x26, 0x2a, 0x26, 0x84, 0x24, 0x28, 0x24, 0x80, 0x22, 0x0, 0x9c, 0x5, 0x94, 0x5, 0xd, 0x9f, 0x1e, 0x9c, 0x98, 0x9d, 0x82, 0x22, 0x4, 0x4, 0x1c, 0x4, 0x4, 0x84, 0x14, 0x86, 0x1e, 0x80, 0x16, 0x80, 0x14},
    .TimeRunOutMusData = {0x81, 0x1c, 0x30, 0x4, 0x30, 0x30, 0x4, 0x1e, 0x32, 0x4, 0x32, 0x32, 0x4, 0x20, 0x34, 0x4, 0x34, 0x34, 0x4, 0x36, 0x4, 0x84, 0x36, 0x0, 0x46, 0xa4, 0x64, 0xa4, 0x48, 0xa6, 0x66, 0xa6, 0x4a, 0xa8, 0x68, 0xa8, 0x6a, 0x44, 0x2b, 0x81, 0x2a, 0x42, 0x4, 0x42, 0x42, 0x4, 0x2c, 0x64, 0x4, 0x64, 0x64, 0x4, 0x2e, 0x46, 0x4, 0x46, 0x46, 0x4, 0x22, 0x4, 0x84, 0x22},
    .WinLevelMusData = {0x87, 0x4, 0x6, 0xc, 0x14, 0x1c, 0x22, 0x86, 0x2c, 0x22, 0x87, 0x4, 0x60, 0xe, 0x14, 0x1a, 0x24, 0x86, 0x2c, 0x24, 0x87, 0x4, 0x8, 0x10, 0x18, 0x1e, 0x28, 0x86, 0x30, 0x30, 0x80, 0x64, 0x0, 0xcd, 0xd5, 0xdd, 0xe3, 0xed, 0xf5, 0xbb, 0xb5, 0xcf, 0xd5, 0xdb, 0xe5, 0xed, 0xf3, 0xbd, 0xb3, 0xd1, 0xd9, 0xdf, 0xe9, 0xf1, 0xf7, 0xbf, 0xff, 0xff, 0xff, 0x34, 0x0, 0x86, 0x4, 0x87, 0x14, 0x1c, 0x22, 0x86, 0x34, 0x84, 0x2c, 0x4, 0x4, 0x4, 0x87, 0x14, 0x1a, 0x24, 0x86, 0x32, 0x84, 0x2c, 0x4, 0x86, 0x4, 0x87, 0x18, 0x1e, 0x28, 0x86, 0x36, 0x87, 0x30, 0x30, 0x30, 0x80, 0x2c},
    .UndergroundMusData = {0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x14, 0x2c, 0x62, 0x26, 0x10, 0x28, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x80, 0x4, 0x82, 0x8, 0x1e, 0x5e, 0x18, 0x60, 0x1a, 0x86, 0x4, 0x83, 0x1a, 0x18, 0x16, 0x84, 0x14, 0x1a, 0x18, 0xe, 0xc, 0x16, 0x83, 0x14, 0x20, 0x1e, 0x1c, 0x28, 0x26, 0x87, 0x24, 0x1a, 0x12, 0x10, 0x62, 0xe, 0x80, 0x4, 0x4, 0x0},
    .WaterMusData = {0x82, 0x18, 0x1c, 0x20, 0x22, 0x26, 0x28, 0x81, 0x2a, 0x2a, 0x2a, 0x4, 0x2a, 0x4, 0x83, 0x2a, 0x82, 0x22, 0x86, 0x34, 0x32, 0x34, 0x81, 0x4, 0x22, 0x26, 0x2a, 0x2c, 0x30, 0x86, 0x34, 0x83, 0x32, 0x82, 0x36, 0x84, 0x34, 0x85, 0x4, 0x81, 0x22, 0x86, 0x30, 0x2e, 0x30, 0x81, 0x4, 0x22, 0x26, 0x2a, 0x2c, 0x2e, 0x86, 0x30, 0x83, 0x22, 0x82, 0x36, 0x84, 0x34, 0x85, 0x4, 0x81, 0x22, 0x86, 0x3a, 0x3a, 0x3a, 0x82, 0x3a, 0x81, 0x40, 0x82, 0x4, 0x81, 0x3a, 0x86, 0x36, 0x36, 0x36, 0x82, 0x36, 0x81, 0x3a, 0x82, 0x4, 0x81, 0x36, 0x86, 0x34, 0x82, 0x26, 0x2a, 0x36, 0x81, 0x34, 0x34, 0x85, 0x34, 0x81, 0x2a, 0x86, 0x2c, 0x0, 0x84, 0x90, 0xb0, 0x84, 0x50, 0x50, 0xb0, 0x0, 0x98, 0x96, 0x94, 0x92, 0x94, 0x96, 0x58, 0x58, 0x58, 0x44, 0x5c, 0x44, 0x9f, 0xa3, 0xa1, 0xa3, 0x85, 0xa3, 0xe0, 0xa6, 0x23, 0xc4, 0x9f, 0x9d, 0x9f, 0x85, 0x9f, 0xd2, 0xa6, 0x23, 0xc4, 0xb5, 0xb1, 0xaf, 0x85, 0xb1, 0xaf, 0xad, 0x85, 0x95, 0x9e, 0xa2, 0xaa, 0x6a, 0x6a, 0x6b, 0x5e, 0x9d, 0x84, 0x4, 0x4, 0x82, 0x22, 0x86, 0x22, 0x82, 0x14, 0x22, 0x2c, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0x1c, 0x22, 0x2c, 0x14, 0x22, 0x2c, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0x1c, 0x22, 0x2c, 0x18, 0x22, 0x2a, 0x16, 0x20, 0x28, 0x18, 0x22, 0x2a, 0x12, 0x22, 0x2a, 0x18, 0x22, 0x2a, 0x12, 0x22, 0x2a, 0x14, 0x22, 0x2c, 0xc, 0x22, 0x2c, 0x14, 0x22, 0x34, 0x12, 0x22, 0x30, 0x10, 0x22, 0x2e, 0x16, 0x22, 0x34, 0x18, 0x26, 0x36, 0x16, 0x26, 0x36, 0x14, 0x26, 0x36, 0x12, 0x22, 0x36, 0x5c, 0x22, 0x34, 0xc, 0x22, 0x22, 0x81, 0x1e, 0x1e, 0x85, 0x1e, 0x81, 0x12, 0x86, 0x14},
    .EndOfCastleMusData = {0x81, 0x2c, 0x22, 0x1c, 0x2c, 0x22, 0x1c, 0x85, 0x2c, 0x4, 0x81, 0x2e, 0x24, 0x1e, 0x2e, 0x24, 0x1e, 0x85, 0x2e, 0x4, 0x81, 0x32, 0x28, 0x22, 0x32, 0x28, 0x22, 0x85, 0x32, 0x87, 0x36, 0x36, 0x36, 0x84, 0x3a, 0x0, 0x5c, 0x54, 0x4c, 0x5c, 0x54, 0x4c, 0x5c, 0x1c, 0x1c, 0x5c, 0x5c, 0x5c, 0x5c, 0x5e, 0x56, 0x4e, 0x5e, 0x56, 0x4e, 0x5e, 0x1e, 0x1e, 0x5e, 0x5e, 0x5e, 0x5e, 0x62, 0x5a, 0x50, 0x62, 0x5a, 0x50, 0x62, 0x22, 0x22, 0x62, 0xe7, 0xe7, 0xe7, 0x2b, 0x86, 0x14, 0x81, 0x14, 0x80, 0x14, 0x14, 0x81, 0x14, 0x14, 0x14, 0x14, 0x86, 0x16, 0x81, 0x16, 0x80, 0x16, 0x16, 0x81, 0x16, 0x16, 0x16, 0x16, 0x81, 0x28, 0x22, 0x1a, 0x28, 0x22, 0x1a, 0x28, 0x80, 0x28, 0x28, 0x81, 0x28, 0x87, 0x2c, 0x2c, 0x2c, 0x84, 0x30},
    .VictoryMusData = {0x83, 0x4, 0x84, 0xc, 0x83, 0x62, 0x10, 0x84, 0x12, 0x83, 0x1c, 0x22, 0x1e, 0x22, 0x26, 0x18, 0x1e, 0x4, 0x1c, 0x0, 0xe3, 0xe1, 0xe3, 0x1d, 0xde, 0xe0, 0x23, 0xec, 0x75, 0x74, 0xf0, 0xf4, 0xf6, 0xea, 0x31, 0x2d, 0x83, 0x12, 0x14, 0x4, 0x18, 0x1a, 0x1c, 0x14, 0x26, 0x22, 0x1e, 0x1c, 0x18, 0x1e, 0x22, 0xc, 0x14, 0xff, 0xff, 0xff},
    .FreqRegLookupTbl = {0x0, 0x88, 0x0, 0x2f, 0x0, 0x0, 0x2, 0xa6, 0x2, 0x80, 0x2, 0x5c, 0x2, 0x3a, 0x2, 0x1a, 0x1, 0xdf, 0x1, 0xc4, 0x1, 0xab, 0x1, 0x93, 0x1, 0x7c, 0x1, 0x67, 0x1, 0x53, 0x1, 0x40, 0x1, 0x2e, 0x1, 0x1d, 0x1, 0xd, 0x0, 0xfe, 0x0, 0xef, 0x0, 0xe2, 0x0, 0xd5, 0x0, 0xc9, 0x0, 0xbe, 0x0, 0xb3, 0x0, 0xa9, 0x0, 0xa0, 0x0, 0x97, 0x0, 0x8e, 0x0, 0x86, 0x0, 0x77, 0x0, 0x7e, 0x0, 0x71, 0x0, 0x54, 0x0, 0x64, 0x0, 0x5f, 0x0, 0x59, 0x0, 0x50, 0x0, 0x47, 0x0, 0x43, 0x0, 0x3b, 0x0, 0x35, 0x0, 0x2a, 0x0, 0x23, 0x4, 0x75, 0x3, 0x57, 0x2, 0xf9, 0x2, 0xcf, 0x1, 0xfc, 0x0, 0x6a},
    .MusicLengthLookupTbl = {0x5, 0xa, 0x14, 0x28, 0x50, 0x1e, 0x3c, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x18, 0x30, 0xc, 0x3, 0x6, 0xc, 0x18, 0x30, 0x12, 0x24, 0x8, 0x36, 0x3, 0x9, 0x6, 0x12, 0x1b, 0x24, 0xc, 0x24, 0x2, 0x6, 0x4, 0xc, 0x12, 0x18, 0x8, 0x12, 0x1, 0x3, 0x2, 0x6, 0x9, 0xc, 0x4},
    .EndOfCastleMusicEnvData = {0x98, 0x99, 0x9a, 0x9b},
    .AreaMusicEnvData = {0x90, 0x94, 0x94, 0x95, 0x95, 0x96, 0x97, 0x98},
    .WaterEventMusEnvData = {0x90, 0x91, 0x92, 0x92, 0x93, 0x93, 0x93, 0x94, 0x94, 0x94, 0x94, 0x94, 0x94, 0x95, 0x95, 0x95, 0x95, 0x95, 0x95, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x95, 0x95, 0x94, 0x93},
    .BowserFlameEnvData = {0x15, 0x16, 0x16, 0x17, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1a, 0x1c, 0x1d, 0x1d, 0x1e, 0x1e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1e, 0x1d, 0x1c, 0x1e, 0x1f, 0x1f, 0x1e, 0x1d, 0x1c, 0x1a, 0x18, 0x16, 0x14},
    .BrickShatterEnvData = {0x15, 0x16, 0x16, 0x17, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1a, 0x1c, 0x1d, 0x1d, 0x1e, 0x1e, 0x1f},
};

int Start() {
    sei();
    // <conv.chunks.Comment object at 0x1008249b0>
    cld();
    lda(0b10000);
    // <conv.chunks.Comment object at 0x100824a70>
    sta(offsetof(G, PPU_CTRL_REG1));
    ldx(0xff);
    // <conv.chunks.Comment object at 0x100824c20>
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // <conv.chunks.Comment object at 0x100824d70>
    lda(offsetof(G, PPU_STATUS));
    BPL(VBlank1);
    JMP(VBlank2);
}

int VBlank2() {
    lda(offsetof(G, PPU_STATUS));
    BPL(VBlank2);
    ldy(offsetof(G, ColdBootOffset));
    ldx(0x5);
    JMP(WBootCheck);
}

int WBootCheck() {
    // <conv.chunks.Comment object at 0x1008251c0>
    // <conv.chunks.Comment object at 0x1008252b0>
    // <conv.chunks.Comment object at 0x100825340>
    lda(offsetof(G, TopScoreDisplay), x);
    cmp(10);
    BCS(ColdBoot);
    // <conv.chunks.Comment object at 0x100825520>
    // <conv.chunks.Comment object at 0x1008255b0>
    dex();
    BPL(WBootCheck);
    lda(offsetof(G, WarmBootValidation));
    cmp(0xa5);
    // <conv.chunks.Comment object at 0x1008257f0>
    // <conv.chunks.Comment object at 0x1008258e0>
    BNE(ColdBoot);
    ldy(offsetof(G, WarmBootOffset));
    JMP(ColdBoot);
}

int ColdBoot() {
    // <conv.chunks.Comment object at 0x100825a90>
    // <conv.chunks.Comment object at 0x100825b80>
    JSR(InitializeMemory);
    sta(((offsetof(G, SND_DELTA_REG)) + (1)));
    sta(offsetof(G, OperMode));
    lda(0xa5);
    // <conv.chunks.Comment object at 0x100825ca0>
    // <conv.chunks.Comment object at 0x100825e20>
    // <conv.chunks.Comment object at 0x100825f10>
    sta(offsetof(G, WarmBootValidation));
    sta(offsetof(G, PseudoRandomBitReg));
    // <conv.chunks.Comment object at 0x100826120>
    lda(0b1111);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    // <conv.chunks.Comment object at 0x100826330>
    lda(0b110);
    sta(offsetof(G, PPU_CTRL_REG2));
    // <conv.chunks.Comment object at 0x100826540>
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc(offsetof(G, DisableScreenFlag));
    // <conv.chunks.Comment object at 0x100826750>
    // <conv.chunks.Comment object at 0x100826870>
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x100826ae0>
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    anda(0b1111111);
    // <conv.chunks.Comment object at 0x100830cb0>
    // <conv.chunks.Comment object at 0x100830f50>
    sta(offsetof(G, Mirror_PPU_CTRL_REG1));
    anda(0b1111110);
    sta(offsetof(G, PPU_CTRL_REG1));
    lda(offsetof(G, Mirror_PPU_CTRL_REG2));
    // <conv.chunks.Comment object at 0x100831160>
    // <conv.chunks.Comment object at 0x100831280>
    // <conv.chunks.Comment object at 0x1008313a0>
    anda(0b11100110);
    ldy(offsetof(G, DisableScreenFlag));
    BNE(ScreenOff);
    lda(offsetof(G, Mirror_PPU_CTRL_REG2));
    // <conv.chunks.Comment object at 0x1008315b0>
    // <conv.chunks.Comment object at 0x1008316d0>
    // <conv.chunks.Comment object at 0x1008317f0>
    ora(0b11110);
    JMP(ScreenOff);
}

int ScreenOff() {
    // <conv.chunks.Comment object at 0x100831a00>
    sta(offsetof(G, Mirror_PPU_CTRL_REG2));
    anda(0b11100111);
    // <conv.chunks.Comment object at 0x100831b50>
    sta(offsetof(G, PPU_CTRL_REG2));
    ldx(offsetof(G, PPU_STATUS));
    // <conv.chunks.Comment object at 0x100831d60>
    lda(0x0);
    JSR(InitScroll);
    sta(offsetof(G, PPU_SPR_ADDR));
    lda(0x2);
    // <conv.chunks.Comment object at 0x100832060>
    // <conv.chunks.Comment object at 0x100832180>
    sta(offsetof(G, SPR_DMA));
    ldx(offsetof(G, VRAM_Buffer_AddrCtrl));
    lda(offsetof(G, VRAM_AddrTable_Low), x);
    // <conv.chunks.Comment object at 0x1008323c0>
    // <conv.chunks.Comment object at 0x1008324e0>
    sta(0x0);
    lda(offsetof(G, VRAM_AddrTable_High), x);
    sta(0x1);
    JSR(UpdateScreen);
    // <conv.chunks.Comment object at 0x100832840>
    ldy(0x0);
    ldx(offsetof(G, VRAM_Buffer_AddrCtrl));
    // <conv.chunks.Comment object at 0x100832ab0>
    cpx(0x6);
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx(offsetof(G, VRAM_Buffer_Offset), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100833050>
    sta(offsetof(G, VRAM_Buffer1_Offset), x);
    sta(offsetof(G, VRAM_Buffer1), x);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    lda(offsetof(G, Mirror_PPU_CTRL_REG2));
    // <conv.chunks.Comment object at 0x1008333b0>
    // <conv.chunks.Comment object at 0x1008334d0>
    sta(offsetof(G, PPU_CTRL_REG2));
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // <conv.chunks.Comment object at 0x1008336e0>
    // <conv.chunks.Comment object at 0x100833800>
    // <conv.chunks.Comment object at 0x100833920>
    JSR(UpdateTopScore);
    lda(offsetof(G, GamePauseStatus));
    // <conv.chunks.Comment object at 0x100833b30>
    lsr();
    BCS(PauseSkip);
    lda(offsetof(G, TimerControl));
    BEQ(DecTimers);
    // <conv.chunks.Comment object at 0x100833dd0>
    // <conv.chunks.Comment object at 0x100833ef0>
    dec(offsetof(G, TimerControl));
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // <conv.chunks.Comment object at 0x10083c230>
    ldx(0x14);
    dec(offsetof(G, IntervalTimerControl));
    BPL(DecTimersLoop);
    // <conv.chunks.Comment object at 0x10083c2f0>
    // <conv.chunks.Comment object at 0x10083c4a0>
    lda(0x14);
    sta(offsetof(G, IntervalTimerControl));
    ldx(0x23);
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // <conv.chunks.Comment object at 0x10083c620>
    // <conv.chunks.Comment object at 0x10083c7d0>
    // <conv.chunks.Comment object at 0x10083c860>
    lda(offsetof(G, Timers), x);
    BEQ(SkipExpTimer);
    dec(offsetof(G, Timers), x);
    JMP(SkipExpTimer);
}

int SkipExpTimer() {
    // <conv.chunks.Comment object at 0x10083caa0>
    // <conv.chunks.Comment object at 0x10083cbc0>
    // <conv.chunks.Comment object at 0x10083cd40>
    dex();
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}

int NoDecTimers() {
    // <conv.chunks.Comment object at 0x10083ce30>
    // <conv.chunks.Comment object at 0x10083cf50>
    inc(offsetof(G, FrameCounter));
    JMP(PauseSkip);
}

int PauseSkip() {
    ldx(0x0);
    ldy(0x7);
    lda(offsetof(G, PseudoRandomBitReg));
    anda(0b10);
    sta(0x0);
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)));
    anda(0b10);
    eor(0x0);
    clc();
    // <conv.chunks.Comment object at 0x10083d220>
    // <conv.chunks.Comment object at 0x10083d3d0>
    // <conv.chunks.Comment object at 0x10083d520>
    // <conv.chunks.Comment object at 0x10083d5b0>
    // <conv.chunks.Comment object at 0x10083d7c0>
    // <conv.chunks.Comment object at 0x10083d910>
    // <conv.chunks.Comment object at 0x10083d8e0>
    BEQ(RotPRandomBit);
    sec();
    JMP(RotPRandomBit);
}

int RotPRandomBit() {
    // <conv.chunks.Comment object at 0x10083dbe0>
    // <conv.chunks.Comment object at 0x10083dc70>
    ror(offsetof(G, PseudoRandomBitReg), x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x10083de20>
    // <conv.chunks.Comment object at 0x10083dee0>
    BNE(RotPRandomBit);
    lda(offsetof(G, Sprite0HitDetectFlag));
    // <conv.chunks.Comment object at 0x10083e060>
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // <conv.chunks.Comment object at 0x10083e270>
    lda(offsetof(G, PPU_STATUS));
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x10083e3c0>
    BNE(Sprite0Clr);
    lda(offsetof(G, GamePauseStatus));
    // <conv.chunks.Comment object at 0x10083e5d0>
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // <conv.chunks.Comment object at 0x10083ea50>
    lda(offsetof(G, PPU_STATUS));
    anda(0b1000000);
    BEQ(Sprite0Hit);
    ldy(0x14);
    JMP(HBlankDelay);
}

int HBlankDelay() {
    dey();
    BNE(HBlankDelay);
    JMP(SkipSprite0);
}

int SkipSprite0() {
    // <conv.chunks.Comment object at 0x10083f050>
    lda(offsetof(G, HorizontalScroll));
    sta(offsetof(G, PPU_SCROLL_REG));
    lda(offsetof(G, VerticalScroll));
    sta(offsetof(G, PPU_SCROLL_REG));
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    // <conv.chunks.Comment object at 0x10083f470>
    pha();
    sta(offsetof(G, PPU_CTRL_REG1));
    lda(offsetof(G, GamePauseStatus));
    // <conv.chunks.Comment object at 0x10083f710>
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // <conv.chunks.Comment object at 0x10083f9b0>
    // <conv.chunks.Comment object at 0x10083fad0>
    lda(offsetof(G, PPU_STATUS));
    pla();
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x10083fcb0>
    sta(offsetof(G, PPU_CTRL_REG1));
    rti();
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda(offsetof(G, OperMode));
    cmp(offsetof(G, VictoryModeValue));
    // <conv.chunks.Comment object at 0x10083ffe0>
    // <conv.chunks.Comment object at 0x10084c140>
    BEQ(ChkPauseTimer);
    cmp(offsetof(G, GameModeValue));
    BNE(ExitPause);
    lda(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x10084c350>
    // <conv.chunks.Comment object at 0x10084c470>
    // <conv.chunks.Comment object at 0x10084c590>
    cmp(0x3);
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // <conv.chunks.Comment object at 0x10084c710>
    // <conv.chunks.Comment object at 0x10084c8c0>
    lda(offsetof(G, GamePauseTimer));
    BEQ(ChkStart);
    dec(offsetof(G, GamePauseTimer));
    // <conv.chunks.Comment object at 0x10084cb00>
    rts();
    JMP(ChkStart);
}

int ChkStart() {
    // <conv.chunks.Comment object at 0x10084ccb0>
    lda(offsetof(G, SavedJoypad1Bits));
    anda(offsetof(G, Start_Button));
    // <conv.chunks.Comment object at 0x10084ce00>
    BEQ(ClrPauseTimer);
    lda(offsetof(G, GamePauseStatus));
    anda(0b10000000);
    BNE(ExitPause);
    lda(0x2b);
    // <conv.chunks.Comment object at 0x10084d010>
    // <conv.chunks.Comment object at 0x10084d130>
    // <conv.chunks.Comment object at 0x10084d250>
    // <conv.chunks.Comment object at 0x10084d370>
    sta(offsetof(G, GamePauseTimer));
    lda(offsetof(G, GamePauseStatus));
    tay();
    iny();
    // <conv.chunks.Comment object at 0x10084d730>
    sty(offsetof(G, PauseSoundQueue));
    eor(0b1);
    // <conv.chunks.Comment object at 0x10084d8b0>
    ora(0b10000000);
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // <conv.chunks.Comment object at 0x10084dac0>
    // <conv.chunks.Comment object at 0x10084dbe0>
    lda(offsetof(G, GamePauseStatus));
    anda(0b1111111);
    JMP(SetPause);
}

int SetPause() {
    sta(offsetof(G, GamePauseStatus));
    JMP(ExitPause);
}

int ExitPause() {
    rts();
    JMP(SpriteShuffler);
}

int SpriteShuffler() {
    ldy(offsetof(G, AreaType));
    lda(0x28);
    sta(0x0);
    ldx(0xe);
    JMP(ShuffleLoop);
}

int ShuffleLoop() {
    // <conv.chunks.Comment object at 0x10084e060>
    // <conv.chunks.Comment object at 0x10084e0c0>
    // <conv.chunks.Comment object at 0x10084e1e0>
    // <conv.chunks.Comment object at 0x10084e330>
    // <conv.chunks.Comment object at 0x10084e3c0>
    // <conv.chunks.Comment object at 0x10084e4b0>
    lda(offsetof(G, SprDataOffset), x);
    cmp(0x0);
    BCC(NextSprOffset);
    ldy(offsetof(G, SprShuffleAmtOffset));
    // <conv.chunks.Comment object at 0x10084e6f0>
    // <conv.chunks.Comment object at 0x10084e780>
    // <conv.chunks.Comment object at 0x10084e900>
    clc();
    adc(offsetof(G, SprShuffleAmt), y);
    BCC(StrSprOffset);
    // <conv.chunks.Comment object at 0x10084eab0>
    // <conv.chunks.Comment object at 0x10084ec00>
    clc();
    adc(0x0);
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // <conv.chunks.Comment object at 0x10084ede0>
    // <conv.chunks.Comment object at 0x10084ee70>
    sta(offsetof(G, SprDataOffset), x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // <conv.chunks.Comment object at 0x10084f050>
    dex();
    BPL(ShuffleLoop);
    ldx(offsetof(G, SprShuffleAmtOffset));
    // <conv.chunks.Comment object at 0x10084f230>
    inx();
    cpx(0x3);
    BNE(SetAmtOffset);
    ldx(0x0);
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx(offsetof(G, SprShuffleAmtOffset));
    ldx(0x8);
    // <conv.chunks.Comment object at 0x10084f860>
    ldy(0x2);
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // <conv.chunks.Comment object at 0x10084f9e0>
    lda(((offsetof(G, SprDataOffset)) + (5)), y);
    sta(((offsetof(G, Misc_SprDataOffset)) - (2)), x);
    clc();
    adc(0x8);
    sta(((offsetof(G, Misc_SprDataOffset)) - (1)), x);
    clc();
    // <conv.chunks.Comment object at 0x10084fc80>
    // <conv.chunks.Comment object at 0x10084fe90>
    // <conv.chunks.Comment object at 0x10084ff20>
    // <conv.chunks.Comment object at 0x10084ffb0>
    // <conv.chunks.Comment object at 0x100854290>
    adc(0x8);
    sta(offsetof(G, Misc_SprDataOffset), x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // <conv.chunks.Comment object at 0x100854770>
    rts();
    JMP(OperModeExecutionTree);
}

int OperModeExecutionTree() {
    lda(offsetof(G, OperMode));
    JSR(JumpEngine);
    JMP(MoveAllSpritesOffscreen);
}

int MoveAllSpritesOffscreen() {
    ldy(0x0);
    JMP(MoveSpritesOffscreen);
}

int MoveSpritesOffscreen() {
    ldy(0x4);
    lda(0xf8);
    JMP(SprInitLoop);
}

int SprInitLoop() {
    // <conv.chunks.Comment object at 0x100855010>
    // <conv.chunks.Comment object at 0x100855100>
    // <conv.chunks.Comment object at 0x100855220>
    sta(offsetof(G, Sprite_Y_Position), y);
    iny();
    // <conv.chunks.Comment object at 0x100855460>
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    rts();
    JMP(TitleScreenMode);
}

int TitleScreenMode() {
    lda(offsetof(G, OperMode_Task));
    JSR(JumpEngine);
    JMP(GameMenuRoutine);
}

int GameMenuRoutine() {
    ldy(0x0);
    lda(offsetof(G, SavedJoypad1Bits));
    ora(offsetof(G, SavedJoypad2Bits));
    // <conv.chunks.Comment object at 0x100855dc0>
    // <conv.chunks.Comment object at 0x1008562a0>
    cmp(offsetof(G, Start_Button));
    BEQ(StartGame);
    cmp(((offsetof(G, A_Button)) + (offsetof(G, Start_Button))));
    BNE(ChkSelect);
    JMP(StartGame);
}

int StartGame() {
    // <conv.chunks.Comment object at 0x1008565a0>
    // <conv.chunks.Comment object at 0x100856750>
    // <conv.chunks.Comment object at 0x100856870>
    JMP(ChkContinue);
    JMP(ChkSelect);
}

int ChkSelect() {
    // <conv.chunks.Comment object at 0x1008569c0>
    cmp(offsetof(G, Select_Button));
    BEQ(SelectBLogic);
    ldx(offsetof(G, DemoTimer));
    BNE(ChkWorldSel);
    sta(offsetof(G, SelectTimer));
    JSR(DemoEngine);
    BCS(ResetTitle);
    JMP(RunDemo);
    JMP(ChkWorldSel);
}

int ChkWorldSel() {
    // <conv.chunks.Comment object at 0x100856b10>
    // <conv.chunks.Comment object at 0x100856c30>
    // <conv.chunks.Comment object at 0x100856d50>
    // <conv.chunks.Comment object at 0x100856e70>
    // <conv.chunks.Comment object at 0x100856f90>
    // <conv.chunks.Comment object at 0x1008570b0>
    // <conv.chunks.Comment object at 0x1008571d0>
    // <conv.chunks.Comment object at 0x100857320>
    ldx(offsetof(G, WorldSelectEnableFlag));
    BEQ(NullJoypad);
    cmp(offsetof(G, B_Button));
    // <conv.chunks.Comment object at 0x100857560>
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // <conv.chunks.Comment object at 0x1008577a0>
    // <conv.chunks.Comment object at 0x100857830>
    lda(offsetof(G, DemoTimer));
    BEQ(ResetTitle);
    lda(0x18);
    // <conv.chunks.Comment object at 0x100857980>
    // <conv.chunks.Comment object at 0x100857aa0>
    sta(offsetof(G, DemoTimer));
    lda(offsetof(G, SelectTimer));
    BNE(NullJoypad);
    lda(0x10);
    // <conv.chunks.Comment object at 0x100857cb0>
    // <conv.chunks.Comment object at 0x100857dd0>
    // <conv.chunks.Comment object at 0x100857ef0>
    sta(offsetof(G, SelectTimer));
    cpy(0x1);
    BEQ(IncWorldSel);
    lda(offsetof(G, NumberOfPlayers));
    eor(0b1);
    // <conv.chunks.Comment object at 0x100864140>
    // <conv.chunks.Comment object at 0x1008641d0>
    // <conv.chunks.Comment object at 0x100864380>
    // <conv.chunks.Comment object at 0x1008644a0>
    sta(offsetof(G, NumberOfPlayers));
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // <conv.chunks.Comment object at 0x100864890>
    ldx(offsetof(G, WorldSelectNumber));
    inx();
    txa();
    anda(0b111);
    sta(offsetof(G, WorldSelectNumber));
    // <conv.chunks.Comment object at 0x100864b00>
    // <conv.chunks.Comment object at 0x100864c20>
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // <conv.chunks.Comment object at 0x100864e30>
    lda(offsetof(G, WSelectBufferTemplate), x);
    sta(((offsetof(G, VRAM_Buffer1)) - (1)), x);
    // <conv.chunks.Comment object at 0x100864fb0>
    inx();
    cpx(0x6);
    BMI(UpdateShroom);
    ldy(offsetof(G, WorldNumber));
    iny();
    sty(((offsetof(G, VRAM_Buffer1)) + (3)));
    JMP(NullJoypad);
}

int NullJoypad() {
    // <conv.chunks.Comment object at 0x100865400>
    // <conv.chunks.Comment object at 0x100865550>
    // <conv.chunks.Comment object at 0x1008655e0>
    // <conv.chunks.Comment object at 0x100865790>
    lda(0x0);
    sta(offsetof(G, SavedJoypad1Bits));
    JMP(RunDemo);
}

int RunDemo() {
    // <conv.chunks.Comment object at 0x1008659d0>
    JSR(GameCoreRoutine);
    lda(offsetof(G, GameEngineSubroutine));
    // <conv.chunks.Comment object at 0x100865b50>
    cmp(0x6);
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // <conv.chunks.Comment object at 0x100865cd0>
    // <conv.chunks.Comment object at 0x100865e80>
    lda(0x0);
    sta(offsetof(G, OperMode));
    sta(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x100865f40>
    // <conv.chunks.Comment object at 0x1008660f0>
    sta(offsetof(G, Sprite0HitDetectFlag));
    inc(offsetof(G, DisableScreenFlag));
    rts();
    JMP(ChkContinue);
}

int ChkContinue() {
    // <conv.chunks.Comment object at 0x100866480>
    ldy(offsetof(G, DemoTimer));
    BEQ(ResetTitle);
    asl();
    BCC(StartWorld1);
    lda(offsetof(G, ContinueWorld));
    JSR(GoContinue);
    JMP(StartWorld1);
}

int StartWorld1() {
    JSR(LoadAreaPointer);
    inc(offsetof(G, Hidden1UpFlag));
    // <conv.chunks.Comment object at 0x100866c00>
    inc(offsetof(G, OffScr_Hidden1UpFlag));
    inc(offsetof(G, FetchNewGameTimerFlag));
    inc(offsetof(G, OperMode));
    lda(offsetof(G, WorldSelectEnableFlag));
    sta(offsetof(G, PrimaryHardMode));
    // <conv.chunks.Comment object at 0x100866e10>
    // <conv.chunks.Comment object at 0x100866f30>
    // <conv.chunks.Comment object at 0x100867050>
    // <conv.chunks.Comment object at 0x100867170>
    lda(0x0);
    sta(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x1008672f0>
    sta(offsetof(G, DemoTimer));
    ldx(0x17);
    lda(0x0);
    JMP(InitScores);
}

int InitScores() {
    // <conv.chunks.Comment object at 0x1008676e0>
    sta(offsetof(G, ScoreAndCoinDisplay), x);
    dex();
    BPL(InitScores);
    JMP(ExitMenu);
}

int ExitMenu() {
    rts();
    JMP(GoContinue);
}

int GoContinue() {
    // <conv.chunks.Comment object at 0x100867b30>
    sta(offsetof(G, WorldNumber));
    sta(offsetof(G, OffScr_WorldNumber));
    ldx(0x0);
    stx(offsetof(G, AreaNumber));
    // <conv.chunks.Comment object at 0x100867c80>
    // <conv.chunks.Comment object at 0x100867da0>
    // <conv.chunks.Comment object at 0x100867e30>
    stx(offsetof(G, OffScr_AreaNumber));
    rts();
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(0x7);
    JMP(IconDataRead);
}

int IconDataRead() {
    // <conv.chunks.Comment object at 0x100870260>
    // <conv.chunks.Comment object at 0x1008702f0>
    lda(offsetof(G, MushroomIconData), y);
    sta(((offsetof(G, VRAM_Buffer1)) - (1)), y);
    // <conv.chunks.Comment object at 0x100870950>
    dey();
    BPL(IconDataRead);
    lda(offsetof(G, NumberOfPlayers));
    BEQ(ExitIcon);
    lda(0x24);
    // <conv.chunks.Comment object at 0x100870cb0>
    // <conv.chunks.Comment object at 0x100870dd0>
    // <conv.chunks.Comment object at 0x100870ef0>
    sta(((offsetof(G, VRAM_Buffer1)) + (3)));
    lda(0xce);
    // <conv.chunks.Comment object at 0x100871190>
    sta(((offsetof(G, VRAM_Buffer1)) + (5)));
    JMP(ExitIcon);
}

int ExitIcon() {
    rts();
    JMP(DemoEngine);
}

int DemoEngine() {
    ldx(offsetof(G, DemoAction));
    lda(offsetof(G, DemoActionTimer));
    BNE(DoAction);
    // <conv.chunks.Comment object at 0x100871550>
    // <conv.chunks.Comment object at 0x100871670>
    // <conv.chunks.Comment object at 0x100873020>
    inx();
    inc(offsetof(G, DemoAction));
    sec();
    lda(((offsetof(G, DemoTimingData)) - (1)), x);
    sta(offsetof(G, DemoActionTimer));
    BEQ(DemoOver);
    JMP(DoAction);
}

int DoAction() {
    // <conv.chunks.Comment object at 0x1008731d0>
    // <conv.chunks.Comment object at 0x100873320>
    // <conv.chunks.Comment object at 0x1008733b0>
    // <conv.chunks.Comment object at 0x100873590>
    // <conv.chunks.Comment object at 0x1008736b0>
    // <conv.chunks.Comment object at 0x1008737d0>
    lda(((offsetof(G, DemoActionData)) - (1)), x);
    sta(offsetof(G, SavedJoypad1Bits));
    dec(offsetof(G, DemoActionTimer));
    clc();
    JMP(DemoOver);
}

int DemoOver() {
    rts();
    JMP(VictoryMode);
}

int VictoryMode() {
    JSR(VictoryModeSubroutines);
    lda(offsetof(G, OperMode_Task));
    BEQ(AutoPlayer);
    // <conv.chunks.Comment object at 0x100873dd0>
    // <conv.chunks.Comment object at 0x100873ef0>
    // <conv.chunks.Comment object at 0x100880050>
    ldx(0x0);
    stx(offsetof(G, ObjectOffset));
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}

int AutoPlayer() {
    // <conv.chunks.Comment object at 0x1008801d0>
    // <conv.chunks.Comment object at 0x100880380>
    // <conv.chunks.Comment object at 0x1008804a0>
    JSR(RelativePlayerPosition);
    JMP(PlayerGfxHandler);
    JMP(VictoryModeSubroutines);
}

int VictoryModeSubroutines() {
    lda(offsetof(G, OperMode_Task));
    JSR(JumpEngine);
    JMP(SetupVictoryMode);
}

int SetupVictoryMode() {
    ldx(offsetof(G, ScreenRight_PageLoc));
    inx();
    stx(offsetof(G, DestinationPageLoc));
    // <conv.chunks.Comment object at 0x100880c50>
    // <conv.chunks.Comment object at 0x100880da0>
    // <conv.chunks.Comment object at 0x100880e30>
    lda(offsetof(G, EndOfCastleMusic));
    sta(offsetof(G, EventMusicQueue));
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1008812e0>
    sty(offsetof(G, VictoryWalkControl));
    lda(offsetof(G, Player_PageLoc));
    cmp(offsetof(G, DestinationPageLoc));
    BNE(PerformWalk);
    lda(offsetof(G, Player_X_Position));
    cmp(0x60);
    BCS(DontWalk);
    JMP(PerformWalk);
}

int PerformWalk() {
    // <conv.chunks.Comment object at 0x1008814f0>
    // <conv.chunks.Comment object at 0x100881610>
    // <conv.chunks.Comment object at 0x100881730>
    // <conv.chunks.Comment object at 0x100881850>
    // <conv.chunks.Comment object at 0x100881970>
    // <conv.chunks.Comment object at 0x100881a00>
    // <conv.chunks.Comment object at 0x100881bb0>
    inc(offsetof(G, VictoryWalkControl));
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // <conv.chunks.Comment object at 0x100881d30>
    // <conv.chunks.Comment object at 0x100881dc0>
    tya();
    JSR(AutoControlPlayer);
    lda(offsetof(G, ScreenLeft_PageLoc));
    cmp(offsetof(G, DestinationPageLoc));
    BEQ(ExitVWalk);
    // <conv.chunks.Comment object at 0x100881eb0>
    // <conv.chunks.Comment object at 0x100881fd0>
    // <conv.chunks.Comment object at 0x1008820f0>
    // <conv.chunks.Comment object at 0x100882210>
    lda(offsetof(G, ScrollFractional));
    clc();
    // <conv.chunks.Comment object at 0x100882450>
    adc(0x80);
    sta(offsetof(G, ScrollFractional));
    lda(0x1);
    adc(0x0);
    tay();
    JSR(ScrollScreen);
    JSR(UpdScrollVar);
    inc(offsetof(G, VictoryWalkControl));
    JMP(ExitVWalk);
}

int ExitVWalk() {
    // <conv.chunks.Comment object at 0x100882540>
    // <conv.chunks.Comment object at 0x1008826f0>
    // <conv.chunks.Comment object at 0x100882780>
    // <conv.chunks.Comment object at 0x100882960>
    // <conv.chunks.Comment object at 0x1008829f0>
    // <conv.chunks.Comment object at 0x100882b10>
    // <conv.chunks.Comment object at 0x100882c30>
    // <conv.chunks.Comment object at 0x100882d50>
    lda(offsetof(G, VictoryWalkControl));
    BEQ(IncModeTask_A);
    rts();
    JMP(PrintVictoryMessages);
}

int PrintVictoryMessages() {
    lda(offsetof(G, SecondaryMsgCounter));
    BNE(IncMsgCounter);
    lda(offsetof(G, PrimaryMsgCounter));
    BEQ(ThankPlayer);
    cmp(0x9);
    BCS(IncMsgCounter);
    ldy(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x1008830e0>
    // <conv.chunks.Comment object at 0x100883200>
    // <conv.chunks.Comment object at 0x100883320>
    // <conv.chunks.Comment object at 0x100883440>
    // <conv.chunks.Comment object at 0x100883560>
    // <conv.chunks.Comment object at 0x1008835f0>
    // <conv.chunks.Comment object at 0x1008837a0>
    cpy(offsetof(G, World8));
    BNE(MRetainerMsg);
    cmp(0x3);
    BCC(IncMsgCounter);
    sbc(0x1);
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}

int MRetainerMsg() {
    // <conv.chunks.Comment object at 0x1008838f0>
    // <conv.chunks.Comment object at 0x100883b00>
    // <conv.chunks.Comment object at 0x100883b90>
    // <conv.chunks.Comment object at 0x100883d40>
    // <conv.chunks.Comment object at 0x100883dd0>
    // <conv.chunks.Comment object at 0x100883f80>
    cmp(0x2);
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // <conv.chunks.Comment object at 0x100888080>
    // <conv.chunks.Comment object at 0x100888230>
    tay();
    BNE(SecondPartMsg);
    lda(offsetof(G, CurrentPlayer));
    BEQ(EvalForMusic);
    iny();
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}

int SecondPartMsg() {
    // <conv.chunks.Comment object at 0x100888320>
    // <conv.chunks.Comment object at 0x100888440>
    // <conv.chunks.Comment object at 0x100888560>
    // <conv.chunks.Comment object at 0x1008886b0>
    // <conv.chunks.Comment object at 0x100888740>
    // <conv.chunks.Comment object at 0x100888860>
    iny();
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World8));
    BEQ(EvalForMusic);
    dey();
    cpy(0x4);
    BCS(SetEndTimer);
    cpy(0x3);
    BCS(IncMsgCounter);
    JMP(EvalForMusic);
}

int EvalForMusic() {
    // <conv.chunks.Comment object at 0x100888a40>
    // <conv.chunks.Comment object at 0x100888aa0>
    // <conv.chunks.Comment object at 0x100888ce0>
    // <conv.chunks.Comment object at 0x100888d70>
    // <conv.chunks.Comment object at 0x100888e00>
    // <conv.chunks.Comment object at 0x100888fb0>
    // <conv.chunks.Comment object at 0x100889040>
    // <conv.chunks.Comment object at 0x1008891f0>
    cpy(0x3);
    BNE(PrintMsg);
    lda(offsetof(G, VictoryMusic));
    sta(offsetof(G, EventMusicQueue));
    JMP(PrintMsg);
}

int PrintMsg() {
    // <conv.chunks.Comment object at 0x1008892b0>
    // <conv.chunks.Comment object at 0x100889460>
    // <conv.chunks.Comment object at 0x100889580>
    // <conv.chunks.Comment object at 0x1008896a0>
    tya();
    clc();
    adc(0xc);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    JMP(IncMsgCounter);
}

int IncMsgCounter() {
    lda(offsetof(G, SecondaryMsgCounter));
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x100889c40>
    sta(offsetof(G, SecondaryMsgCounter));
    lda(offsetof(G, PrimaryMsgCounter));
    adc(0x0);
    // <conv.chunks.Comment object at 0x100889f40>
    sta(offsetof(G, PrimaryMsgCounter));
    cmp(0x7);
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // <conv.chunks.Comment object at 0x10088a150>
    // <conv.chunks.Comment object at 0x10088a1e0>
    BCC(ExitMsgs);
    lda(0x6);
    sta(offsetof(G, WorldEndTimer));
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // <conv.chunks.Comment object at 0x10088a420>
    // <conv.chunks.Comment object at 0x10088a5d0>
    inc(offsetof(G, OperMode_Task));
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // <conv.chunks.Comment object at 0x10088a750>
    rts();
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda(offsetof(G, WorldEndTimer));
    BNE(EndExitOne);
    ldy(offsetof(G, WorldNumber));
    cpy(offsetof(G, World8));
    BCS(EndChkBButton);
    // <conv.chunks.Comment object at 0x10088a8a0>
    // <conv.chunks.Comment object at 0x10088a9c0>
    // <conv.chunks.Comment object at 0x10088aae0>
    // <conv.chunks.Comment object at 0x10088ac00>
    // <conv.chunks.Comment object at 0x10088ac60>
    lda(0x0);
    sta(offsetof(G, AreaNumber));
    sta(offsetof(G, LevelNumber));
    sta(offsetof(G, OperMode_Task));
    inc(offsetof(G, WorldNumber));
    JSR(LoadAreaPointer);
    inc(offsetof(G, FetchNewGameTimerFlag));
    // <conv.chunks.Comment object at 0x10088aed0>
    // <conv.chunks.Comment object at 0x10088b080>
    // <conv.chunks.Comment object at 0x10088b1a0>
    // <conv.chunks.Comment object at 0x10088b2c0>
    // <conv.chunks.Comment object at 0x10088b3e0>
    // <conv.chunks.Comment object at 0x10088b500>
    lda(offsetof(G, GameModeValue));
    sta(offsetof(G, OperMode));
    JMP(EndExitOne);
}

int EndExitOne() {
    // <conv.chunks.Comment object at 0x10088b710>
    // <conv.chunks.Comment object at 0x10088b830>
    rts();
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda(offsetof(G, SavedJoypad1Bits));
    ora(offsetof(G, SavedJoypad2Bits));
    anda(offsetof(G, B_Button));
    BEQ(EndExitTwo);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10088ba40>
    // <conv.chunks.Comment object at 0x10088bb60>
    // <conv.chunks.Comment object at 0x10088bc80>
    // <conv.chunks.Comment object at 0x10088bda0>
    sta(offsetof(G, WorldSelectEnableFlag));
    lda(0xff);
    // <conv.chunks.Comment object at 0x10088bfb0>
    sta(offsetof(G, NumberofLives));
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // <conv.chunks.Comment object at 0x100894200>
    // <conv.chunks.Comment object at 0x100894350>
    rts();
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda(offsetof(G, FloateyNum_Control), x);
    BEQ(EndExitOne);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x1008958b0>
    // <conv.chunks.Comment object at 0x100896060>
    // <conv.chunks.Comment object at 0x100896180>
    BCC(ChkNumTimer);
    lda(0xb);
    sta(offsetof(G, FloateyNum_Control), x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // <conv.chunks.Comment object at 0x100896390>
    // <conv.chunks.Comment object at 0x100896420>
    // <conv.chunks.Comment object at 0x100896630>
    tay();
    lda(offsetof(G, FloateyNum_Timer), x);
    BNE(DecNumTimer);
    sta(offsetof(G, FloateyNum_Control), x);
    // <conv.chunks.Comment object at 0x100896720>
    // <conv.chunks.Comment object at 0x100896870>
    // <conv.chunks.Comment object at 0x100896990>
    rts();
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // <conv.chunks.Comment object at 0x100896b70>
    dec(offsetof(G, FloateyNum_Timer), x);
    cmp(0x2b);
    // <conv.chunks.Comment object at 0x100896cf0>
    BNE(ChkTallEnemy);
    cpy(0xb);
    BNE(LoadNumTiles);
    inc(offsetof(G, NumberofLives));
    // <conv.chunks.Comment object at 0x100896f00>
    // <conv.chunks.Comment object at 0x100896f90>
    // <conv.chunks.Comment object at 0x100897140>
    lda(offsetof(G, Sfx_ExtraLife));
    sta(offsetof(G, Square2SoundQueue));
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // <conv.chunks.Comment object at 0x100897350>
    // <conv.chunks.Comment object at 0x100897470>
    lda(offsetof(G, ScoreUpdateData), y);
    lsr();
    // <conv.chunks.Comment object at 0x100897620>
    lsr();
    lsr();
    lsr();
    tax();
    lda(offsetof(G, ScoreUpdateData), y);
    anda(0b1111);
    sta(offsetof(G, DigitModifier), x);
    JSR(AddToScore);
    JMP(ChkTallEnemy);
}

int ChkTallEnemy() {
    // <conv.chunks.Comment object at 0x100897890>
    // <conv.chunks.Comment object at 0x100897920>
    // <conv.chunks.Comment object at 0x100897a70>
    // <conv.chunks.Comment object at 0x100897b90>
    // <conv.chunks.Comment object at 0x100897ce0>
    // <conv.chunks.Comment object at 0x100897e00>
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x100897f80>
    cmp(offsetof(G, Spiny));
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100a2c170>
    cmp(offsetof(G, PiranhaPlant));
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100a2c440>
    cmp(offsetof(G, HammerBro));
    BEQ(GetAltOffset);
    // <conv.chunks.Comment object at 0x100a2c650>
    cmp(offsetof(G, GreyCheepCheep));
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100a2c860>
    cmp(offsetof(G, RedCheepCheep));
    BEQ(FloateyPart);
    cmp(offsetof(G, TallEnemy));
    BCS(GetAltOffset);
    // <conv.chunks.Comment object at 0x100a2cc50>
    lda(offsetof(G, Enemy_State), x);
    cmp(0x2);
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // <conv.chunks.Comment object at 0x100a2ce90>
    // <conv.chunks.Comment object at 0x100a2cf20>
    // <conv.chunks.Comment object at 0x100a2d0d0>
    ldx(offsetof(G, SprDataOffset_Ctrl));
    ldy(offsetof(G, Alt_SprDataOffset), x);
    ldx(offsetof(G, ObjectOffset));
    JMP(FloateyPart);
}

int FloateyPart() {
    // <conv.chunks.Comment object at 0x100a2d220>
    // <conv.chunks.Comment object at 0x100a2d370>
    // <conv.chunks.Comment object at 0x100a2d490>
    lda(offsetof(G, FloateyNum_Y_Pos), x);
    cmp(0x18);
    BCC(SetupNumSpr);
    // <conv.chunks.Comment object at 0x100a2d610>
    // <conv.chunks.Comment object at 0x100a2d6a0>
    sbc(0x1);
    sta(offsetof(G, FloateyNum_Y_Pos), x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // <conv.chunks.Comment object at 0x100a2d8b0>
    // <conv.chunks.Comment object at 0x100a2da90>
    lda(offsetof(G, FloateyNum_Y_Pos), x);
    sbc(0x8);
    JSR(DumpTwoSpr);
    lda(offsetof(G, FloateyNum_X_Pos), x);
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x100a2dc10>
    // <conv.chunks.Comment object at 0x100a2dca0>
    // <conv.chunks.Comment object at 0x100a2de50>
    // <conv.chunks.Comment object at 0x100a2dfa0>
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x100a2e180>
    // <conv.chunks.Comment object at 0x100a2e210>
    lda(0x2);
    sta(offsetof(G, Sprite_Attributes), y);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    // <conv.chunks.Comment object at 0x100a2e4e0>
    // <conv.chunks.Comment object at 0x100a2e6c0>
    lda(offsetof(G, FloateyNum_Control), x);
    asl();
    tax();
    // <conv.chunks.Comment object at 0x100a2e9f0>
    // <conv.chunks.Comment object at 0x100a2eab0>
    lda(offsetof(G, FloateyNumTileData), x);
    sta(offsetof(G, Sprite_Tilenumber), y);
    // <conv.chunks.Comment object at 0x100a2ec60>
    lda(((offsetof(G, FloateyNumTileData)) + (1)), x);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x100a2ef60>
    // <conv.chunks.Comment object at 0x100a2f140>
    rts();
    JMP(ScreenRoutines);
}

int ScreenRoutines() {
    lda(offsetof(G, ScreenRoutineTask));
    // <conv.chunks.Comment object at 0x100a2f350>
    JSR(JumpEngine);
    JMP(InitScreen);
}

int InitScreen() {
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    // <conv.chunks.Comment object at 0x100a2fe90>
    // <conv.chunks.Comment object at 0x100a2ffb0>
    lda(offsetof(G, OperMode));
    BEQ(NextSubtask);
    ldx(0x3);
    // <conv.chunks.Comment object at 0x100a38200>
    // <conv.chunks.Comment object at 0x100a38320>
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda(offsetof(G, BackgroundColorCtrl));
    pha();
    // <conv.chunks.Comment object at 0x100a38590>
    // <conv.chunks.Comment object at 0x100a386e0>
    lda(offsetof(G, PlayerStatus));
    pha();
    lda(0x0);
    sta(offsetof(G, PlayerStatus));
    lda(0x2);
    sta(offsetof(G, BackgroundColorCtrl));
    // <conv.chunks.Comment object at 0x100a388f0>
    // <conv.chunks.Comment object at 0x100a38980>
    // <conv.chunks.Comment object at 0x100a38b30>
    // <conv.chunks.Comment object at 0x100a38bc0>
    JSR(GetPlayerColors);
    pla();
    sta(offsetof(G, PlayerStatus));
    pla();
    sta(offsetof(G, BackgroundColorCtrl));
    JMP(IncSubtask);
    JMP(GetAreaPalette);
}

int GetAreaPalette() {
    ldy(offsetof(G, AreaType));
    ldx(offsetof(G, AreaPalette), y);
    JMP(SetVRAMAddr_A);
}

int SetVRAMAddr_A() {
    // <conv.chunks.Comment object at 0x100a39400>
    // <conv.chunks.Comment object at 0x100a39730>
    // <conv.chunks.Comment object at 0x100a39880>
    stx(offsetof(G, VRAM_Buffer_AddrCtrl));
    JMP(NextSubtask);
}

int NextSubtask() {
    // <conv.chunks.Comment object at 0x100a399d0>
    JMP(IncSubtask);
    JMP(GetBackgroundColor);
}

int GetBackgroundColor() {
    ldy(offsetof(G, BackgroundColorCtrl));
    BEQ(NoBGColor);
    lda(((offsetof(G, BGColorCtrl_Addr)) - (4)), y);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    JMP(NoBGColor);
}

int NoBGColor() {
    // <conv.chunks.Comment object at 0x100a3a450>
    // <conv.chunks.Comment object at 0x100a3abd0>
    // <conv.chunks.Comment object at 0x100a3acf0>
    // <conv.chunks.Comment object at 0x100a3aed0>
    // <conv.chunks.Comment object at 0x100a3aff0>
    inc(offsetof(G, ScreenRoutineTask));
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    // <conv.chunks.Comment object at 0x100a3b170>
    ldy(0x0);
    lda(offsetof(G, CurrentPlayer));
    // <conv.chunks.Comment object at 0x100a3b2f0>
    BEQ(ChkFiery);
    ldy(0x4);
    JMP(ChkFiery);
}

int ChkFiery() {
    // <conv.chunks.Comment object at 0x100a3b590>
    // <conv.chunks.Comment object at 0x100a3b620>
    lda(offsetof(G, PlayerStatus));
    cmp(0x2);
    BNE(StartClrGet);
    // <conv.chunks.Comment object at 0x100a3b860>
    ldy(0x8);
    JMP(StartClrGet);
}

int StartClrGet() {
    // <conv.chunks.Comment object at 0x100a3ba70>
    lda(0x3);
    sta(0x0);
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // <conv.chunks.Comment object at 0x100a3bbc0>
    lda(offsetof(G, PlayerColors), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    // <conv.chunks.Comment object at 0x100a3bec0>
    iny();
    inx();
    dec(0x0);
    BPL(ClrGetLoop);
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    ldy(offsetof(G, BackgroundColorCtrl));
    BNE(SetBGColor);
    ldy(offsetof(G, AreaType));
    JMP(SetBGColor);
}

int SetBGColor() {
    // <conv.chunks.Comment object at 0x100a443e0>
    // <conv.chunks.Comment object at 0x100a44500>
    // <conv.chunks.Comment object at 0x100a44620>
    // <conv.chunks.Comment object at 0x100a44740>
    // <conv.chunks.Comment object at 0x100a44860>
    lda(offsetof(G, BackgroundColors), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    lda(0x3f);
    sta(offsetof(G, VRAM_Buffer1), x);
    // <conv.chunks.Comment object at 0x100a44b90>
    // <conv.chunks.Comment object at 0x100a44c20>
    lda(0x10);
    sta(((offsetof(G, VRAM_Buffer1)) + (1)), x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x100a450a0>
    sta(((offsetof(G, VRAM_Buffer1)) + (2)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100a45370>
    sta(((offsetof(G, VRAM_Buffer1)) + (7)), x);
    txa();
    clc();
    // <conv.chunks.Comment object at 0x100a45670>
    // <conv.chunks.Comment object at 0x100a45730>
    adc(0x7);
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // <conv.chunks.Comment object at 0x100a45820>
    sta(offsetof(G, VRAM_Buffer1_Offset));
    rts();
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda(offsetof(G, AreaStyle));
    // <conv.chunks.Comment object at 0x100a45b20>
    cmp(0x1);
    BNE(NoAltPal);
    lda(0xb);
    JMP(SetVRAMAddr_B);
}

int SetVRAMAddr_B() {
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    JMP(NoAltPal);
}

int NoAltPal() {
    // <conv.chunks.Comment object at 0x100a46060>
    JMP(IncSubtask);
    JMP(WriteTopStatusLine);
}

int WriteTopStatusLine() {
    lda(0x0);
    JSR(WriteGameText);
    JMP(IncSubtask);
    JMP(WriteBottomStatusLine);
}

int WriteBottomStatusLine() {
    JSR(GetSBNybbles);
    // <conv.chunks.Comment object at 0x100a46600>
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    lda(0x20);
    // <conv.chunks.Comment object at 0x100a46810>
    sta(offsetof(G, VRAM_Buffer1), x);
    lda(0x73);
    sta(((offsetof(G, VRAM_Buffer1)) + (1)), x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100a46cf0>
    sta(((offsetof(G, VRAM_Buffer1)) + (2)), x);
    ldy(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x100a46fc0>
    iny();
    tya();
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    lda(0x28);
    // <conv.chunks.Comment object at 0x100a473b0>
    sta(((offsetof(G, VRAM_Buffer1)) + (4)), x);
    ldy(offsetof(G, LevelNumber));
    iny();
    // <conv.chunks.Comment object at 0x100a47680>
    // <conv.chunks.Comment object at 0x100a477d0>
    tya();
    sta(((offsetof(G, VRAM_Buffer1)) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100a47aa0>
    sta(((offsetof(G, VRAM_Buffer1)) + (6)), x);
    txa();
    // <conv.chunks.Comment object at 0x100a47da0>
    clc();
    adc(0x6);
    sta(offsetof(G, VRAM_Buffer1_Offset));
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda(offsetof(G, GameTimerExpiredFlag));
    BEQ(NoTimeUp);
    // <conv.chunks.Comment object at 0x100a4c230>
    // <conv.chunks.Comment object at 0x100a4c350>
    lda(0x0);
    sta(offsetof(G, GameTimerExpiredFlag));
    lda(0x2);
    // <conv.chunks.Comment object at 0x100a4c4d0>
    // <conv.chunks.Comment object at 0x100a4c680>
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // <conv.chunks.Comment object at 0x100a4c890>
    inc(offsetof(G, ScreenRoutineTask));
    JMP(IncSubtask);
    JMP(DisplayIntermediate);
}

int DisplayIntermediate() {
    lda(offsetof(G, OperMode));
    BEQ(NoInter);
    cmp(offsetof(G, GameOverModeValue));
    BEQ(GameOverInter);
    lda(offsetof(G, AltEntranceControl));
    BNE(NoInter);
    ldy(offsetof(G, AreaType));
    cpy(0x3);
    // <conv.chunks.Comment object at 0x100a4cb30>
    // <conv.chunks.Comment object at 0x100a4cc50>
    // <conv.chunks.Comment object at 0x100a4cda0>
    // <conv.chunks.Comment object at 0x100a4cec0>
    // <conv.chunks.Comment object at 0x100a4cfe0>
    // <conv.chunks.Comment object at 0x100a4d100>
    // <conv.chunks.Comment object at 0x100a4d250>
    // <conv.chunks.Comment object at 0x100a4d370>
    BEQ(PlayerInter);
    lda(offsetof(G, DisableIntermediate));
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // <conv.chunks.Comment object at 0x100a4d580>
    // <conv.chunks.Comment object at 0x100a4d6a0>
    // <conv.chunks.Comment object at 0x100a4d7f0>
    JSR(DrawPlayer_Intermediate);
    lda(0x1);
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(0x0);
    sta(offsetof(G, DisableScreenFlag));
    // <conv.chunks.Comment object at 0x100a4dcd0>
    rts();
    JMP(GameOverInter);
}

int GameOverInter() {
    // <conv.chunks.Comment object at 0x100a4df10>
    lda(0x12);
    sta(offsetof(G, ScreenTimer));
    lda(0x3);
    // <conv.chunks.Comment object at 0x100a4e150>
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // <conv.chunks.Comment object at 0x100a4e450>
    lda(0x8);
    sta(offsetof(G, ScreenRoutineTask));
    rts();
    JMP(AreaParserTaskControl);
}

int AreaParserTaskControl() {
    inc(offsetof(G, DisableScreenFlag));
    JMP(TaskLoop);
}

int TaskLoop() {
    // <conv.chunks.Comment object at 0x100a4e7b0>
    // <conv.chunks.Comment object at 0x100a4e8d0>
    JSR(AreaParserTaskHandler);
    lda(offsetof(G, AreaParserTaskNum));
    BNE(TaskLoop);
    dec(offsetof(G, ColumnSets));
    // <conv.chunks.Comment object at 0x100a4ea20>
    // <conv.chunks.Comment object at 0x100a4eb40>
    // <conv.chunks.Comment object at 0x100a4ec60>
    BPL(OutputCol);
    inc(offsetof(G, ScreenRoutineTask));
    JMP(OutputCol);
}

int OutputCol() {
    // <conv.chunks.Comment object at 0x100a4ee70>
    // <conv.chunks.Comment object at 0x100a4ef90>
    lda(0x6);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    // <conv.chunks.Comment object at 0x100a4f050>
    rts();
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda(offsetof(G, OperMode));
    BNE(IncModeTask_B);
    lda(HI8(offsetof(G, TitleScreenDataOffset)));
    sta(offsetof(G, PPU_ADDRESS));
    // <conv.chunks.Comment object at 0x100a4f350>
    // <conv.chunks.Comment object at 0x100a4f470>
    // <conv.chunks.Comment object at 0x100a4f590>
    // <conv.chunks.Comment object at 0x100a4f6e0>
    lda(LO8(offsetof(G, TitleScreenDataOffset)));
    sta(offsetof(G, PPU_ADDRESS));
    lda(0x3);
    sta(0x1);
    // <conv.chunks.Comment object at 0x100a4fa10>
    // <conv.chunks.Comment object at 0x100a4fb60>
    ldy(0x0);
    sty(0x0);
    lda(offsetof(G, PPU_DATA));
    JMP(OutputTScr);
}

int OutputTScr() {
    // <conv.chunks.Comment object at 0x100a4fcb0>
    // <conv.chunks.Comment object at 0x100a4ff50>
    lda(offsetof(G, PPU_DATA));
    sta((0x0), y);
    // <conv.chunks.Comment object at 0x100a580e0>
    iny();
    BNE(ChkHiByte);
    inc(0x1);
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // <conv.chunks.Comment object at 0x100a582f0>
    // <conv.chunks.Comment object at 0x100a58440>
    // <conv.chunks.Comment object at 0x100a584d0>
    lda(0x1);
    cmp(0x4);
    BNE(OutputTScr);
    cpy(0x3a);
    BCC(OutputTScr);
    lda(0x5);
    JMP(SetVRAMAddr_B);
    JMP(ClearBuffersDrawIcon);
}

int ClearBuffersDrawIcon() {
    lda(offsetof(G, OperMode));
    BNE(IncModeTask_B);
    ldx(0x0);
    JMP(TScrClear);
}

int TScrClear() {
    sta(((offsetof(G, VRAM_Buffer1)) - (1)), x);
    sta(((((offsetof(G, VRAM_Buffer1)) - (1))) + (0x100)), x);
    dex();
    BNE(TScrClear);
    JSR(DrawMushroomIcon);
    JMP(IncSubtask);
}

int IncSubtask() {
    // <conv.chunks.Comment object at 0x100a596a0>
    // <conv.chunks.Comment object at 0x100a597c0>
    inc(offsetof(G, ScreenRoutineTask));
    rts();
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(0xfa);
    // <conv.chunks.Comment object at 0x100a59a00>
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // <conv.chunks.Comment object at 0x100a59c10>
    inc(offsetof(G, OperMode_Task));
    rts();
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // <conv.chunks.Comment object at 0x100a6d220>
    asl();
    tay();
    cpy(0x4);
    BCC(LdGameText);
    cpy(0x8);
    BCC(Chk2Players);
    ldy(0x8);
    JMP(Chk2Players);
}

int Chk2Players() {
    // <conv.chunks.Comment object at 0x100a6d370>
    // <conv.chunks.Comment object at 0x100a6d400>
    // <conv.chunks.Comment object at 0x100a6d490>
    // <conv.chunks.Comment object at 0x100a6d640>
    // <conv.chunks.Comment object at 0x100a6d6d0>
    // <conv.chunks.Comment object at 0x100a6d880>
    // <conv.chunks.Comment object at 0x100a6d910>
    lda(offsetof(G, NumberOfPlayers));
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // <conv.chunks.Comment object at 0x100a6daf0>
    // <conv.chunks.Comment object at 0x100a6dc40>
    // <conv.chunks.Comment object at 0x100a6dcd0>
    ldx(offsetof(G, GameTextOffsets), y);
    ldy(0x0);
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // <conv.chunks.Comment object at 0x100a6deb0>
    lda(offsetof(G, GameText), x);
    cmp(0xff);
    BEQ(EndGameText);
    sta(offsetof(G, VRAM_Buffer1), y);
    inx();
    // <conv.chunks.Comment object at 0x100a6e0c0>
    // <conv.chunks.Comment object at 0x100a6e150>
    // <conv.chunks.Comment object at 0x100a6e300>
    // <conv.chunks.Comment object at 0x100a6e480>
    iny();
    BNE(GameTextLoop);
    JMP(EndGameText);
}

int EndGameText() {
    // <conv.chunks.Comment object at 0x100a6e5a0>
    // <conv.chunks.Comment object at 0x100a6e6c0>
    lda(0x0);
    sta(offsetof(G, VRAM_Buffer1), y);
    pla();
    // <conv.chunks.Comment object at 0x100a6e960>
    tax();
    cmp(0x4);
    // <conv.chunks.Comment object at 0x100a6ea80>
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda(offsetof(G, NumberofLives));
    clc();
    // <conv.chunks.Comment object at 0x100a6ecc0>
    // <conv.chunks.Comment object at 0x100a6ed50>
    // <conv.chunks.Comment object at 0x100a6ee70>
    // <conv.chunks.Comment object at 0x100a6efc0>
    adc(0x1);
    cmp(10);
    // <conv.chunks.Comment object at 0x100a6f170>
    BCC(PutLives);
    sbc(10);
    ldy(0x9f);
    sty(((offsetof(G, VRAM_Buffer1)) + (7)));
    JMP(PutLives);
}

int PutLives() {
    sta(((offsetof(G, VRAM_Buffer1)) + (8)));
    ldy(offsetof(G, WorldNumber));
    iny();
    // <conv.chunks.Comment object at 0x100a6f950>
    // <conv.chunks.Comment object at 0x100a6faa0>
    sty(((offsetof(G, VRAM_Buffer1)) + (19)));
    ldy(offsetof(G, LevelNumber));
    iny();
    sty(((offsetof(G, VRAM_Buffer1)) + (21)));
    // <conv.chunks.Comment object at 0x100a6fe60>
    rts();
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda(offsetof(G, NumberOfPlayers));
    BEQ(ExitChkName);
    lda(offsetof(G, CurrentPlayer));
    dex();
    // <conv.chunks.Comment object at 0x100a74140>
    // <conv.chunks.Comment object at 0x100a74260>
    // <conv.chunks.Comment object at 0x100a74380>
    // <conv.chunks.Comment object at 0x100a744d0>
    BNE(ChkLuigi);
    ldy(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x100a74650>
    cpy(offsetof(G, GameOverModeValue));
    BEQ(ChkLuigi);
    eor(0b1);
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // <conv.chunks.Comment object at 0x100a74b30>
    ldy(0x4);
    JMP(NameLoop);
}

int NameLoop() {
    // <conv.chunks.Comment object at 0x100a74cb0>
    lda(offsetof(G, LuigiName), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), y);
    dey();
    BPL(NameLoop);
    JMP(ExitChkName);
}

int ExitChkName() {
    rts();
    JMP(PrintWarpZoneNumbers);
}

int PrintWarpZoneNumbers() {
    sbc(0x4);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100a75340>
    // <conv.chunks.Comment object at 0x100a75490>
    // <conv.chunks.Comment object at 0x100a75580>
    tax();
    ldy(0x0);
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // <conv.chunks.Comment object at 0x100a75700>
    lda(offsetof(G, WarpZoneNumbers), x);
    sta(((offsetof(G, VRAM_Buffer1)) + (27)), y);
    // <conv.chunks.Comment object at 0x100a75910>
    inx();
    iny();
    // <conv.chunks.Comment object at 0x100a75be0>
    iny();
    iny();
    iny();
    cpy(0xc);
    BCC(WarpNumLoop);
    lda(0x2c);
    // <conv.chunks.Comment object at 0x100a76000>
    JMP(SetVRAMOffset);
    JMP(ResetSpritesAndScreenTimer);
}

int ResetSpritesAndScreenTimer() {
    lda(offsetof(G, ScreenTimer));
    BNE(NoReset);
    JSR(MoveAllSpritesOffscreen);
    JMP(ResetScreenTimer);
}

int ResetScreenTimer() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x100a76630>
    sta(offsetof(G, ScreenTimer));
    inc(offsetof(G, ScreenRoutineTask));
    JMP(NoReset);
}

int NoReset() {
    rts();
    JMP(RenderAreaGraphics);
}

int RenderAreaGraphics() {
    lda(offsetof(G, CurrentColumnPos));
    // <conv.chunks.Comment object at 0x100a76c30>
    anda(0x1);
    sta(0x5);
    ldy(offsetof(G, VRAM_Buffer2_Offset));
    // <conv.chunks.Comment object at 0x100a76db0>
    sty(0x0);
    lda(offsetof(G, CurrentNTAddr_Low));
    // <conv.chunks.Comment object at 0x100a77050>
    sta(((offsetof(G, VRAM_Buffer2)) + (1)), y);
    lda(offsetof(G, CurrentNTAddr_High));
    sta(offsetof(G, VRAM_Buffer2), y);
    lda(0x9a);
    sta(((offsetof(G, VRAM_Buffer2)) + (2)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100a77650>
    // <conv.chunks.Comment object at 0x100a776e0>
    // <conv.chunks.Comment object at 0x100a77980>
    sta(0x4);
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // <conv.chunks.Comment object at 0x100a77c20>
    stx(0x1);
    lda(offsetof(G, MetatileBuffer), x);
    // <conv.chunks.Comment object at 0x100a77d10>
    anda(0b11000000);
    sta(0x3);
    asl();
    rol();
    rol();
    tay();
    lda(offsetof(G, MetatileGraphics_Low), y);
    // <conv.chunks.Comment object at 0x100a77fe0>
    // <conv.chunks.Comment object at 0x100a880b0>
    // <conv.chunks.Comment object at 0x100a88200>
    // <conv.chunks.Comment object at 0x100a882c0>
    // <conv.chunks.Comment object at 0x100a88380>
    // <conv.chunks.Comment object at 0x100a88410>
    sta(0x6);
    lda(offsetof(G, MetatileGraphics_High), y);
    sta(0x7);
    lda(offsetof(G, MetatileBuffer), x);
    asl();
    // <conv.chunks.Comment object at 0x100a88770>
    // <conv.chunks.Comment object at 0x100a889e0>
    asl();
    sta(0x2);
    lda(offsetof(G, AreaParserTaskNum));
    anda(0b1);
    eor(0b1);
    asl();
    adc(0x2);
    // <conv.chunks.Comment object at 0x100a88b00>
    // <conv.chunks.Comment object at 0x100a88d10>
    // <conv.chunks.Comment object at 0x100a88e30>
    // <conv.chunks.Comment object at 0x100a88f80>
    // <conv.chunks.Comment object at 0x100a89040>
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100a891f0>
    lda((0x6), y);
    sta(((offsetof(G, VRAM_Buffer2)) + (3)), x);
    // <conv.chunks.Comment object at 0x100a891c0>
    iny();
    lda((0x6), y);
    // <conv.chunks.Comment object at 0x100a896d0>
    sta(((offsetof(G, VRAM_Buffer2)) + (4)), x);
    ldy(0x4);
    lda(0x5);
    BNE(RightCheck);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100a89a60>
    // <conv.chunks.Comment object at 0x100a89a30>
    // <conv.chunks.Comment object at 0x100a89c10>
    // <conv.chunks.Comment object at 0x100a89dc0>
    // <conv.chunks.Comment object at 0x100a89d90>
    BCS(LLeft);
    rol(0x3);
    rol(0x3);
    // <conv.chunks.Comment object at 0x100a8a0c0>
    // <conv.chunks.Comment object at 0x100a8a090>
    rol(0x3);
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // <conv.chunks.Comment object at 0x100a8a4b0>
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100a8a4e0>
    BCS(NextMTRow);
    lsr(0x3);
    lsr(0x3);
    // <conv.chunks.Comment object at 0x100a8a7e0>
    // <conv.chunks.Comment object at 0x100a8a7b0>
    lsr(0x3);
    lsr(0x3);
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // <conv.chunks.Comment object at 0x100a8acc0>
    lsr(0x3);
    lsr(0x3);
    JMP(NextMTRow);
}

int NextMTRow() {
    // <conv.chunks.Comment object at 0x100a8ad20>
    // <conv.chunks.Comment object at 0x100a8af00>
    inc(0x4);
    JMP(SetAttrib);
}

int SetAttrib() {
    // <conv.chunks.Comment object at 0x100a8b050>
    lda(offsetof(G, AttributeBuffer), y);
    ora(0x3);
    sta(offsetof(G, AttributeBuffer), y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x100a8b260>
    // <conv.chunks.Comment object at 0x100a8b2f0>
    // <conv.chunks.Comment object at 0x100a8b4d0>
    inc(0x0);
    ldx(0x1);
    inx();
    // <conv.chunks.Comment object at 0x100a8b650>
    // <conv.chunks.Comment object at 0x100a8b560>
    cpx(0xd);
    BCC(DrawMTLoop);
    ldy(0x0);
    iny();
    // <conv.chunks.Comment object at 0x100a8b8f0>
    // <conv.chunks.Comment object at 0x100a8bad0>
    // <conv.chunks.Comment object at 0x100a8baa0>
    iny();
    iny();
    lda(0x0);
    sta(offsetof(G, VRAM_Buffer2), y);
    sty(offsetof(G, VRAM_Buffer2_Offset));
    inc(offsetof(G, CurrentNTAddr_Low));
    lda(offsetof(G, CurrentNTAddr_Low));
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100a8be00>
    // <conv.chunks.Comment object at 0x100a8bfe0>
    // <conv.chunks.Comment object at 0x100a94140>
    // <conv.chunks.Comment object at 0x100a94260>
    // <conv.chunks.Comment object at 0x100a94380>
    BNE(ExitDrawM);
    lda(0x80);
    sta(offsetof(G, CurrentNTAddr_Low));
    lda(offsetof(G, CurrentNTAddr_High));
    eor(0b100);
    // <conv.chunks.Comment object at 0x100a94590>
    // <conv.chunks.Comment object at 0x100a94620>
    // <conv.chunks.Comment object at 0x100a947d0>
    // <conv.chunks.Comment object at 0x100a948f0>
    sta(offsetof(G, CurrentNTAddr_High));
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // <conv.chunks.Comment object at 0x100a94b00>
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda(offsetof(G, CurrentNTAddr_Low));
    anda(0b11111);
    sec();
    // <conv.chunks.Comment object at 0x100a94d10>
    // <conv.chunks.Comment object at 0x100a94e30>
    // <conv.chunks.Comment object at 0x100a94f80>
    sbc(0x4);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100a95070>
    sta(0x1);
    lda(offsetof(G, CurrentNTAddr_High));
    // <conv.chunks.Comment object at 0x100a95220>
    BCS(SetATHigh);
    eor(0b100);
    JMP(SetATHigh);
}

int SetATHigh() {
    // <conv.chunks.Comment object at 0x100a95520>
    // <conv.chunks.Comment object at 0x100a95640>
    anda(0b100);
    ora(0x23);
    // <conv.chunks.Comment object at 0x100a95790>
    sta(0x0);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100a95940>
    // <conv.chunks.Comment object at 0x100a95820>
    lsr();
    adc(0xc0);
    sta(0x1);
    // <conv.chunks.Comment object at 0x100a95c10>
    // <conv.chunks.Comment object at 0x100a95d60>
    ldx(0x0);
    ldy(offsetof(G, VRAM_Buffer2_Offset));
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(0x0);
    sta(offsetof(G, VRAM_Buffer2), y);
    // <conv.chunks.Comment object at 0x100a96120>
    lda(0x1);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x100a96360>
    // <conv.chunks.Comment object at 0x100a96480>
    sta(((offsetof(G, VRAM_Buffer2)) + (1)), y);
    sta(0x1);
    lda(offsetof(G, AttributeBuffer), x);
    sta(((offsetof(G, VRAM_Buffer2)) + (3)), y);
    // <conv.chunks.Comment object at 0x100a967b0>
    // <conv.chunks.Comment object at 0x100a96840>
    // <conv.chunks.Comment object at 0x100a969f0>
    lda(0x1);
    sta(((offsetof(G, VRAM_Buffer2)) + (2)), y);
    // <conv.chunks.Comment object at 0x100a96c60>
    lsr();
    sta(offsetof(G, AttributeBuffer), x);
    iny();
    // <conv.chunks.Comment object at 0x100a96f90>
    // <conv.chunks.Comment object at 0x100a97110>
    iny();
    iny();
    iny();
    inx();
    cpx(0x7);
    // <conv.chunks.Comment object at 0x100a97380>
    // <conv.chunks.Comment object at 0x100a97410>
    BCC(AttribLoop);
    sta(offsetof(G, VRAM_Buffer2), y);
    sty(offsetof(G, VRAM_Buffer2_Offset));
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(0x6);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    // <conv.chunks.Comment object at 0x100a97920>
    rts();
    JMP(ColorRotation);
}

int ColorRotation() {
    lda(offsetof(G, FrameCounter));
    anda(0x7);
    BNE(ExitColorRot);
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    // <conv.chunks.Comment object at 0x100a97ce0>
    // <conv.chunks.Comment object at 0x100a9cef0>
    // <conv.chunks.Comment object at 0x100a9cf80>
    // <conv.chunks.Comment object at 0x100a9d130>
    cpx(0x31);
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // <conv.chunks.Comment object at 0x100a9d2b0>
    // <conv.chunks.Comment object at 0x100a9d490>
    // <conv.chunks.Comment object at 0x100a9d520>
    lda(offsetof(G, BlankPalette), y);
    sta(offsetof(G, VRAM_Buffer1), x);
    inx();
    // <conv.chunks.Comment object at 0x100a9d6a0>
    // <conv.chunks.Comment object at 0x100a9d820>
    iny();
    cpy(0x8);
    BCC(GetBlankPal);
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    // <conv.chunks.Comment object at 0x100a9d9a0>
    // <conv.chunks.Comment object at 0x100a9db50>
    lda(0x3);
    sta(0x0);
    lda(offsetof(G, AreaType));
    asl();
    // <conv.chunks.Comment object at 0x100a9dd90>
    // <conv.chunks.Comment object at 0x100a9de20>
    // <conv.chunks.Comment object at 0x100a9dfd0>
    asl();
    tay();
    JMP(GetAreaPal);
}

int GetAreaPal() {
    // <conv.chunks.Comment object at 0x100a9e120>
    // <conv.chunks.Comment object at 0x100a9e1b0>
    lda(offsetof(G, Palette3Data), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    // <conv.chunks.Comment object at 0x100a9e330>
    iny();
    inx();
    dec(0x0);
    BPL(GetAreaPal);
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    ldy(offsetof(G, ColorRotateOffset));
    // <conv.chunks.Comment object at 0x100a9e690>
    // <conv.chunks.Comment object at 0x100a9e720>
    // <conv.chunks.Comment object at 0x100a9e8a0>
    // <conv.chunks.Comment object at 0x100a9e9c0>
    lda(offsetof(G, ColorRotatePalette), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (4)), x);
    // <conv.chunks.Comment object at 0x100a9ec00>
    lda(offsetof(G, VRAM_Buffer1_Offset));
    clc();
    // <conv.chunks.Comment object at 0x100a9ef30>
    adc(0x7);
    sta(offsetof(G, VRAM_Buffer1_Offset));
    inc(offsetof(G, ColorRotateOffset));
    // <conv.chunks.Comment object at 0x100a9f1a0>
    lda(offsetof(G, ColorRotateOffset));
    cmp(0x6);
    BCC(ExitColorRot);
    // <conv.chunks.Comment object at 0x100a9f3b0>
    // <conv.chunks.Comment object at 0x100a9f440>
    lda(0x0);
    sta(offsetof(G, ColorRotateOffset));
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // <conv.chunks.Comment object at 0x100a9f650>
    // <conv.chunks.Comment object at 0x100a9f830>
    rts();
    JMP(RemoveCoin_Axe);
}

int RemoveCoin_Axe() {
    ldy(0x41);
    lda(0x3);
    ldx(offsetof(G, AreaType));
    BNE(WriteBlankMT);
    lda(0x4);
    JMP(WriteBlankMT);
}

int WriteBlankMT() {
    // <conv.chunks.Comment object at 0x100a9fad0>
    // <conv.chunks.Comment object at 0x100a9fb60>
    // <conv.chunks.Comment object at 0x100aa4800>
    // <conv.chunks.Comment object at 0x100aa49b0>
    // <conv.chunks.Comment object at 0x100aa4ad0>
    // <conv.chunks.Comment object at 0x100aa4b60>
    JSR(PutBlockMetatile);
    lda(0x6);
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    // <conv.chunks.Comment object at 0x100aa4da0>
    rts();
    JMP(ReplaceBlockMetatile);
}

int ReplaceBlockMetatile() {
    JSR(WriteBlockMetatile);
    inc(offsetof(G, Block_ResidualCounter));
    dec(offsetof(G, Block_RepFlag), x);
    rts();
    JMP(DestroyBlockMetatile);
}

int DestroyBlockMetatile() {
    lda(0x0);
    JMP(WriteBlockMetatile);
}

int WriteBlockMetatile() {
    ldy(0x3);
    cmp(0x0);
    BEQ(UseBOffset);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100aa5610>
    // <conv.chunks.Comment object at 0x100aa56a0>
    // <conv.chunks.Comment object at 0x100aa57c0>
    // <conv.chunks.Comment object at 0x100aa5970>
    cmp(0x58);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x100aa5af0>
    cmp(0x51);
    BEQ(UseBOffset);
    iny();
    // <conv.chunks.Comment object at 0x100aa5d00>
    // <conv.chunks.Comment object at 0x100aa5ee0>
    cmp(0x5d);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x100aa5fd0>
    cmp(0x52);
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // <conv.chunks.Comment object at 0x100aa61e0>
    // <conv.chunks.Comment object at 0x100aa63c0>
    // <conv.chunks.Comment object at 0x100aa6450>
    tya();
    ldy(offsetof(G, VRAM_Buffer1_Offset));
    iny();
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}

int MoveVOffset() {
    // <conv.chunks.Comment object at 0x100aa6540>
    // <conv.chunks.Comment object at 0x100aa6690>
    // <conv.chunks.Comment object at 0x100aa6720>
    // <conv.chunks.Comment object at 0x100aa6840>
    dey();
    tya();
    // <conv.chunks.Comment object at 0x100aa6960>
    clc();
    adc(10);
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(0x0);
    sty(0x1);
    // <conv.chunks.Comment object at 0x100aa6cf0>
    // <conv.chunks.Comment object at 0x100aa6cc0>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100aa6fc0>
    tax();
    ldy(0x20);
    lda(0x6);
    cmp(0xd0);
    BCC(SaveHAdder);
    ldy(0x24);
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // <conv.chunks.Comment object at 0x100aa70e0>
    // <conv.chunks.Comment object at 0x100aa7230>
    // <conv.chunks.Comment object at 0x100aa72c0>
    // <conv.chunks.Comment object at 0x100aa73b0>
    // <conv.chunks.Comment object at 0x100aa7560>
    // <conv.chunks.Comment object at 0x100aa75f0>
    sty(0x3);
    anda(0xf);
    asl();
    sta(0x4);
    // <conv.chunks.Comment object at 0x100aa7770>
    // <conv.chunks.Comment object at 0x100aa7920>
    // <conv.chunks.Comment object at 0x100aa79e0>
    lda(0x0);
    sta(0x5);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100aa7bf0>
    // <conv.chunks.Comment object at 0x100aa7b30>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x100aa7e90>
    asl();
    rol(0x5);
    // <conv.chunks.Comment object at 0x100aac0b0>
    asl();
    rol(0x5);
    adc(0x4);
    sta(0x4);
    lda(0x5);
    adc(0x0);
    // <conv.chunks.Comment object at 0x100aac260>
    // <conv.chunks.Comment object at 0x100aac230>
    // <conv.chunks.Comment object at 0x100aac2f0>
    // <conv.chunks.Comment object at 0x100aac410>
    // <conv.chunks.Comment object at 0x100aac650>
    clc();
    adc(0x3);
    sta(0x5);
    ldy(0x1);
    JMP(RemBridge);
}

int RemBridge() {
    // <conv.chunks.Comment object at 0x100aac890>
    // <conv.chunks.Comment object at 0x100aac860>
    // <conv.chunks.Comment object at 0x100aac920>
    // <conv.chunks.Comment object at 0x100aacb60>
    lda(offsetof(G, BlockGfxData), x);
    sta(((offsetof(G, VRAM_Buffer1)) + (2)), y);
    // <conv.chunks.Comment object at 0x100aacd40>
    lda(((offsetof(G, BlockGfxData)) + (1)), x);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), y);
    lda(((offsetof(G, BlockGfxData)) + (2)), x);
    sta(((offsetof(G, VRAM_Buffer1)) + (7)), y);
    lda(((offsetof(G, BlockGfxData)) + (3)), x);
    // <conv.chunks.Comment object at 0x100aad310>
    // <conv.chunks.Comment object at 0x100aad520>
    // <conv.chunks.Comment object at 0x100aad730>
    sta(((offsetof(G, VRAM_Buffer1)) + (8)), y);
    lda(0x4);
    sta(offsetof(G, VRAM_Buffer1), y);
    clc();
    adc(0x20);
    sta(((offsetof(G, VRAM_Buffer1)) + (5)), y);
    lda(0x5);
    sta(((offsetof(G, VRAM_Buffer1)) - (1)), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (4)), y);
    // <conv.chunks.Comment object at 0x100aadb20>
    // <conv.chunks.Comment object at 0x100aadd90>
    // <conv.chunks.Comment object at 0x100aade20>
    // <conv.chunks.Comment object at 0x100aadeb0>
    // <conv.chunks.Comment object at 0x100aae180>
    // <conv.chunks.Comment object at 0x100aae210>
    // <conv.chunks.Comment object at 0x100aae450>
    lda(0x2);
    sta(((offsetof(G, VRAM_Buffer1)) + (1)), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (6)), y);
    // <conv.chunks.Comment object at 0x100aae6c0>
    // <conv.chunks.Comment object at 0x100aae960>
    lda(0x0);
    sta(((offsetof(G, VRAM_Buffer1)) + (9)), y);
    ldx(0x0);
    rts();
    JMP(InitializeNameTables);
}

int InitializeNameTables() {
    lda(offsetof(G, PPU_STATUS));
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    ora(0b10000);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x100af4a10>
    // <conv.chunks.Comment object at 0x100af4b30>
    // <conv.chunks.Comment object at 0x100af4c50>
    // <conv.chunks.Comment object at 0x100af4d70>
    JSR(WritePPUReg1);
    lda(0x24);
    // <conv.chunks.Comment object at 0x100af4f80>
    JSR(WriteNTAddr);
    lda(0x20);
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta(offsetof(G, PPU_ADDRESS));
    lda(0x0);
    sta(offsetof(G, PPU_ADDRESS));
    ldx(0x4);
    // <conv.chunks.Comment object at 0x100af55b0>
    ldy(0xc0);
    lda(0x24);
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // <conv.chunks.Comment object at 0x100af5820>
    sta(offsetof(G, PPU_DATA));
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(64);
    // <conv.chunks.Comment object at 0x100af5d30>
    txa();
    sta(offsetof(G, VRAM_Buffer1_Offset));
    sta(offsetof(G, VRAM_Buffer1));
    JMP(InitATLoop);
}

int InitATLoop() {
    sta(offsetof(G, PPU_DATA));
    dey();
    BNE(InitATLoop);
    sta(offsetof(G, HorizontalScroll));
    // <conv.chunks.Comment object at 0x100af6390>
    sta(offsetof(G, VerticalScroll));
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x100af65a0>
    // <conv.chunks.Comment object at 0x100af66f0>
    // <conv.chunks.Comment object at 0x100af6750>
    sta(offsetof(G, JOYPAD_PORT));
    lsr();
    tax();
    // <conv.chunks.Comment object at 0x100af6a20>
    sta(offsetof(G, JOYPAD_PORT));
    JSR(ReadPortBits);
    inx();
    JMP(ReadPortBits);
}

int ReadPortBits() {
    ldy(0x8);
    JMP(PortLoop);
}

int PortLoop() {
    // <conv.chunks.Comment object at 0x100af6de0>
    pha();
    lda(offsetof(G, JOYPAD_PORT), x);
    sta(0x0);
    lsr();
    ora(0x0);
    // <conv.chunks.Comment object at 0x100af6f60>
    // <conv.chunks.Comment object at 0x100af70e0>
    // <conv.chunks.Comment object at 0x100af70b0>
    // <conv.chunks.Comment object at 0x100af72c0>
    lsr();
    pla();
    rol();
    // <conv.chunks.Comment object at 0x100af7470>
    // <conv.chunks.Comment object at 0x100af7530>
    dey();
    BNE(PortLoop);
    sta(offsetof(G, SavedJoypadBits), x);
    // <conv.chunks.Comment object at 0x100af7650>
    // <conv.chunks.Comment object at 0x100af7770>
    pha();
    anda(0b110000);
    anda(offsetof(G, JoypadBitMask), x);
    BEQ(Save8Bits);
    // <conv.chunks.Comment object at 0x100af7950>
    // <conv.chunks.Comment object at 0x100af7a70>
    // <conv.chunks.Comment object at 0x100af7bc0>
    pla();
    anda(0b11001111);
    sta(offsetof(G, SavedJoypadBits), x);
    // <conv.chunks.Comment object at 0x100af7d70>
    // <conv.chunks.Comment object at 0x100af7e90>
    rts();
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta(offsetof(G, JoypadBitMask), x);
    // <conv.chunks.Comment object at 0x100b04170>
    rts();
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta(offsetof(G, PPU_ADDRESS));
    // <conv.chunks.Comment object at 0x100b04410>
    iny();
    lda((0x0), y);
    sta(offsetof(G, PPU_ADDRESS));
    // <conv.chunks.Comment object at 0x100b045c0>
    // <conv.chunks.Comment object at 0x100b04620>
    iny();
    lda((0x0), y);
    asl();
    // <conv.chunks.Comment object at 0x100b048f0>
    // <conv.chunks.Comment object at 0x100b04aa0>
    pha();
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    ora(0b100);
    BCS(SetupWrites);
    anda(0b11111011);
    JMP(SetupWrites);
}

int SetupWrites() {
    // <conv.chunks.Comment object at 0x100b04bc0>
    // <conv.chunks.Comment object at 0x100b04ce0>
    // <conv.chunks.Comment object at 0x100b04e00>
    // <conv.chunks.Comment object at 0x100b04f20>
    // <conv.chunks.Comment object at 0x100b05040>
    JSR(WritePPUReg1);
    pla();
    // <conv.chunks.Comment object at 0x100b051c0>
    asl();
    BCC(GetLength);
    ora(0b10);
    // <conv.chunks.Comment object at 0x100b052e0>
    // <conv.chunks.Comment object at 0x100b05400>
    iny();
    JMP(GetLength);
}

int GetLength() {
    // <conv.chunks.Comment object at 0x100b055b0>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100b056d0>
    tax();
    JMP(OutputToVRAM);
}

int OutputToVRAM() {
    // <conv.chunks.Comment object at 0x100b057f0>
    BCS(RepeatByte);
    iny();
    JMP(RepeatByte);
}

int RepeatByte() {
    // <conv.chunks.Comment object at 0x100b05970>
    // <conv.chunks.Comment object at 0x100b05a00>
    lda((0x0), y);
    sta(offsetof(G, PPU_DATA));
    dex();
    // <conv.chunks.Comment object at 0x100b05cd0>
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x100b05fa0>
    // <conv.chunks.Comment object at 0x100b05f70>
    lda(0x0);
    adc(0x1);
    sta(0x1);
    lda(0x3f);
    // <conv.chunks.Comment object at 0x100b06210>
    sta(offsetof(G, PPU_ADDRESS));
    lda(0x0);
    sta(offsetof(G, PPU_ADDRESS));
    sta(offsetof(G, PPU_ADDRESS));
    // <conv.chunks.Comment object at 0x100b06870>
    sta(offsetof(G, PPU_ADDRESS));
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // <conv.chunks.Comment object at 0x100b06a80>
    ldx(offsetof(G, PPU_STATUS));
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100b06bd0>
    lda((0x0), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // <conv.chunks.Comment object at 0x100b06d20>
    // <conv.chunks.Comment object at 0x100b06f60>
    sta(offsetof(G, PPU_SCROLL_REG));
    sta(offsetof(G, PPU_SCROLL_REG));
    // <conv.chunks.Comment object at 0x100b070b0>
    rts();
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta(offsetof(G, PPU_CTRL_REG1));
    sta(offsetof(G, Mirror_PPU_CTRL_REG1));
    // <conv.chunks.Comment object at 0x100b072c0>
    // <conv.chunks.Comment object at 0x100b073e0>
    rts();
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(0x0);
    JSR(OutputNumbers);
    lda(0x0);
    lsr();
    // <conv.chunks.Comment object at 0x100b07ef0>
    // <conv.chunks.Comment object at 0x100b07f80>
    // <conv.chunks.Comment object at 0x100b0c4a0>
    // <conv.chunks.Comment object at 0x100b0c470>
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}

int OutputNumbers() {
    clc();
    // <conv.chunks.Comment object at 0x100b0c860>
    adc(0x1);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100b0c950>
    cmp(0x6);
    BCS(ExitOutputN);
    pha();
    asl();
    // <conv.chunks.Comment object at 0x100b0cd10>
    // <conv.chunks.Comment object at 0x100b0cdd0>
    tay();
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    lda(0x20);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x100b0cef0>
    // <conv.chunks.Comment object at 0x100b0d010>
    // <conv.chunks.Comment object at 0x100b0d0a0>
    BNE(SetupNums);
    lda(0x22);
    JMP(SetupNums);
}

int SetupNums() {
    sta(offsetof(G, VRAM_Buffer1), x);
    lda(offsetof(G, StatusBarData), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (1)), x);
    // <conv.chunks.Comment object at 0x100b0d5b0>
    // <conv.chunks.Comment object at 0x100b0d700>
    lda(((offsetof(G, StatusBarData)) + (1)), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (2)), x);
    sta(0x3);
    stx(0x2);
    pla();
    // <conv.chunks.Comment object at 0x100b0dd00>
    // <conv.chunks.Comment object at 0x100b0dcd0>
    // <conv.chunks.Comment object at 0x100b0dd90>
    tax();
    lda(offsetof(G, StatusBarOffset), x);
    // <conv.chunks.Comment object at 0x100b0e060>
    sec();
    sbc(((offsetof(G, StatusBarData)) + (1)), y);
    tay();
    // <conv.chunks.Comment object at 0x100b0e240>
    // <conv.chunks.Comment object at 0x100b0e480>
    ldx(0x2);
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // <conv.chunks.Comment object at 0x100b0e510>
    lda(offsetof(G, DisplayDigits), y);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    inx();
    iny();
    dec(0x3);
    // <conv.chunks.Comment object at 0x100b0eab0>
    BNE(DigitPLoop);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b0ec90>
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    inx();
    // <conv.chunks.Comment object at 0x100b0efc0>
    inx();
    inx();
    stx(offsetof(G, VRAM_Buffer1_Offset));
    JMP(ExitOutputN);
}

int ExitOutputN() {
    rts();
    JMP(DigitsMathRoutine);
}

int DigitsMathRoutine() {
    lda(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x100b0f3b0>
    cmp(offsetof(G, TitleScreenModeValue));
    BEQ(EraseDMods);
    // <conv.chunks.Comment object at 0x100b0f5c0>
    ldx(0x5);
    JMP(AddModLoop);
}

int AddModLoop() {
    // <conv.chunks.Comment object at 0x100b0f740>
    lda(offsetof(G, DigitModifier), x);
    clc();
    adc(offsetof(G, DisplayDigits), y);
    BMI(BorrowOne);
    // <conv.chunks.Comment object at 0x100b0f9e0>
    // <conv.chunks.Comment object at 0x100b0fb30>
    cmp(10);
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // <conv.chunks.Comment object at 0x100b0fc50>
    // <conv.chunks.Comment object at 0x100b0fe60>
    sta(offsetof(G, DisplayDigits), y);
    dey();
    dex();
    BPL(AddModLoop);
    JMP(EraseDMods);
}

int EraseDMods() {
    // <conv.chunks.Comment object at 0x100b14050>
    // <conv.chunks.Comment object at 0x100b14110>
    // <conv.chunks.Comment object at 0x100b141a0>
    // <conv.chunks.Comment object at 0x100b142c0>
    lda(0x0);
    ldx(0x6);
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // <conv.chunks.Comment object at 0x100b14380>
    // <conv.chunks.Comment object at 0x100b144a0>
    sta(((offsetof(G, DigitModifier)) - (1)), x);
    dex();
    BPL(EraseMLoop);
    // <conv.chunks.Comment object at 0x100b147d0>
    rts();
    JMP(BorrowOne);
}

int BorrowOne() {
    // <conv.chunks.Comment object at 0x100b14980>
    dec(((offsetof(G, DigitModifier)) - (1)), x);
    lda(0x9);
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // <conv.chunks.Comment object at 0x100b14b90>
    // <conv.chunks.Comment object at 0x100b14c20>
    // <conv.chunks.Comment object at 0x100b14dd0>
    sec();
    sbc(10);
    inc(((offsetof(G, DigitModifier)) - (1)), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x100b15340>
    JSR(TopScoreCheck);
    ldx(0xb);
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(0x5);
    // <conv.chunks.Comment object at 0x100b156a0>
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // <conv.chunks.Comment object at 0x100b15850>
    lda(offsetof(G, PlayerScoreDisplay), x);
    sbc(offsetof(G, TopScoreDisplay), y);
    dex();
    dey();
    // <conv.chunks.Comment object at 0x100b159d0>
    // <conv.chunks.Comment object at 0x100b15b50>
    // <conv.chunks.Comment object at 0x100b15c10>
    BPL(GetScoreDiff);
    BCC(NoTopSc);
    inx();
    // <conv.chunks.Comment object at 0x100b15d90>
    // <conv.chunks.Comment object at 0x100b15f10>
    iny();
    JMP(CopyScore);
}

int CopyScore() {
    // <conv.chunks.Comment object at 0x100b16030>
    lda(offsetof(G, PlayerScoreDisplay), x);
    sta(offsetof(G, TopScoreDisplay), y);
    inx();
    iny();
    cpy(0x6);
    // <conv.chunks.Comment object at 0x100b163f0>
    BCC(CopyScore);
    JMP(NoTopSc);
}

int NoTopSc() {
    rts();
    JMP(InitializeGame);
}

int InitializeGame() {
    ldy(0x6f);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x100b16870>
    // <conv.chunks.Comment object at 0x100b168d0>
    ldy(0x1f);
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // <conv.chunks.Comment object at 0x100b17530>
    sta(offsetof(G, SoundMemory), y);
    dey();
    // <conv.chunks.Comment object at 0x100b17770>
    BPL(ClrSndLoop);
    lda(0x18);
    // <conv.chunks.Comment object at 0x100b178f0>
    sta(offsetof(G, DemoTimer));
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(0x4b);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x100b17c20>
    // <conv.chunks.Comment object at 0x100b17cb0>
    ldx(0x21);
    lda(0x0);
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // <conv.chunks.Comment object at 0x100b17fb0>
    sta(offsetof(G, Timers), x);
    dex();
    // <conv.chunks.Comment object at 0x100b20260>
    BPL(ClrTimersLoop);
    lda(offsetof(G, HalfwayPage));
    ldy(offsetof(G, AltEntranceControl));
    // <conv.chunks.Comment object at 0x100b204d0>
    BEQ(StartPage);
    lda(offsetof(G, EntrancePage));
    JMP(StartPage);
}

int StartPage() {
    // <conv.chunks.Comment object at 0x100b206e0>
    // <conv.chunks.Comment object at 0x100b20800>
    sta(offsetof(G, ScreenLeft_PageLoc));
    sta(offsetof(G, CurrentPageLoc));
    sta(offsetof(G, BackloadingFlag));
    JSR(GetScreenPosition);
    ldy(0x20);
    anda(0b1);
    BEQ(SetInitNTHigh);
    // <conv.chunks.Comment object at 0x100b20950>
    // <conv.chunks.Comment object at 0x100b20a70>
    // <conv.chunks.Comment object at 0x100b20b90>
    // <conv.chunks.Comment object at 0x100b20cb0>
    // <conv.chunks.Comment object at 0x100b20d40>
    // <conv.chunks.Comment object at 0x100b20ef0>
    ldy(0x24);
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // <conv.chunks.Comment object at 0x100b21070>
    sty(offsetof(G, CurrentNTAddr_High));
    ldy(0x80);
    sty(offsetof(G, CurrentNTAddr_Low));
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100b21460>
    // <conv.chunks.Comment object at 0x100b21520>
    asl();
    asl();
    sta(offsetof(G, BlockBufferColumnPos));
    dec(offsetof(G, AreaObjectLength));
    // <conv.chunks.Comment object at 0x100b217c0>
    dec(((offsetof(G, AreaObjectLength)) + (1)));
    dec(((offsetof(G, AreaObjectLength)) + (2)));
    lda(0xb);
    sta(offsetof(G, ColumnSets));
    JSR(GetAreaDataAddrs);
    lda(offsetof(G, PrimaryHardMode));
    BNE(SetSecHard);
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World5));
    // <conv.chunks.Comment object at 0x100b21c40>
    // <conv.chunks.Comment object at 0x100b21cd0>
    // <conv.chunks.Comment object at 0x100b21e80>
    // <conv.chunks.Comment object at 0x100b21fa0>
    // <conv.chunks.Comment object at 0x100b220c0>
    // <conv.chunks.Comment object at 0x100b221e0>
    // <conv.chunks.Comment object at 0x100b22300>
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda(offsetof(G, LevelNumber));
    cmp(offsetof(G, Level3));
    // <conv.chunks.Comment object at 0x100b22540>
    // <conv.chunks.Comment object at 0x100b22660>
    // <conv.chunks.Comment object at 0x100b22780>
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // <conv.chunks.Comment object at 0x100b229c0>
    inc(offsetof(G, SecondaryHardMode));
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda(offsetof(G, HalfwayPage));
    BEQ(DoneInitArea);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100b22d20>
    sta(offsetof(G, PlayerEntranceCtrl));
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // <conv.chunks.Comment object at 0x100b22f30>
    lda(offsetof(G, Silence));
    sta(offsetof(G, AreaMusicQueue));
    lda(0x1);
    // <conv.chunks.Comment object at 0x100b231a0>
    sta(offsetof(G, DisableScreenFlag));
    inc(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x100b233b0>
    rts();
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(0x1);
    sta(offsetof(G, FetchNewGameTimerFlag));
    sta(offsetof(G, PlayerSize));
    // <conv.chunks.Comment object at 0x100b23620>
    // <conv.chunks.Comment object at 0x100b237d0>
    lda(0x2);
    sta(offsetof(G, NumberofLives));
    // <conv.chunks.Comment object at 0x100b23950>
    sta(offsetof(G, OffScr_NumberofLives));
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(0x0);
    sta(offsetof(G, DisableScreenFlag));
    // <conv.chunks.Comment object at 0x100b23c80>
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // <conv.chunks.Comment object at 0x100b23ec0>
    sta(((offsetof(G, VRAM_Buffer1)) - (1)), y);
    iny();
    BNE(ClearVRLoop);
    sta(offsetof(G, GameTimerExpiredFlag));
    sta(offsetof(G, DisableIntermediate));
    sta(offsetof(G, BackloadingFlag));
    // <conv.chunks.Comment object at 0x100b282c0>
    // <conv.chunks.Comment object at 0x100b283e0>
    // <conv.chunks.Comment object at 0x100b28500>
    lda(0xff);
    sta(offsetof(G, BalPlatformAlignment));
    lda(offsetof(G, ScreenLeft_PageLoc));
    lsr(offsetof(G, Mirror_PPU_CTRL_REG1));
    anda(0x1);
    ror();
    rol(offsetof(G, Mirror_PPU_CTRL_REG1));
    JSR(GetAreaMusic);
    lda(0x38);
    // <conv.chunks.Comment object at 0x100b28680>
    // <conv.chunks.Comment object at 0x100b28830>
    // <conv.chunks.Comment object at 0x100b28950>
    // <conv.chunks.Comment object at 0x100b28a70>
    // <conv.chunks.Comment object at 0x100b28bc0>
    // <conv.chunks.Comment object at 0x100b28c50>
    // <conv.chunks.Comment object at 0x100b28d70>
    // <conv.chunks.Comment object at 0x100b28e90>
    sta(((offsetof(G, SprShuffleAmt)) + (2)));
    lda(0x48);
    sta(((offsetof(G, SprShuffleAmt)) + (1)));
    lda(0x58);
    sta(offsetof(G, SprShuffleAmt));
    ldx(0xe);
    JMP(ShufAmtLoop);
}

int ShufAmtLoop() {
    lda(offsetof(G, DefaultSprOffsets), x);
    sta(offsetof(G, SprDataOffset), x);
    dex();
    // <conv.chunks.Comment object at 0x100b299a0>
    BPL(ShufAmtLoop);
    ldy(0x3);
    JMP(ISpr0Loop);
}

int ISpr0Loop() {
    lda(offsetof(G, Sprite0Data), y);
    sta(offsetof(G, Sprite_Data), y);
    dey();
    BPL(ISpr0Loop);
    JSR(DoNothing2);
    // <conv.chunks.Comment object at 0x100b2a030>
    JSR(DoNothing1);
    inc(offsetof(G, Sprite0HitDetectFlag));
    inc(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x100b2a240>
    // <conv.chunks.Comment object at 0x100b2a360>
    rts();
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(0x7);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b2a5d0>
    // <conv.chunks.Comment object at 0x100b2a660>
    sta(0x6);
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(0x7);
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // <conv.chunks.Comment object at 0x100b2a9c0>
    cpx(0x1);
    BNE(InitByte);
    cpy(0x60);
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // <conv.chunks.Comment object at 0x100b2aae0>
    // <conv.chunks.Comment object at 0x100b2ac90>
    // <conv.chunks.Comment object at 0x100b2ad20>
    // <conv.chunks.Comment object at 0x100b2aed0>
    sta((0x6), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(0xff);
    // <conv.chunks.Comment object at 0x100b2b140>
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // <conv.chunks.Comment object at 0x100b2b380>
    // <conv.chunks.Comment object at 0x100b2b410>
    rts();
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x100b2b650>
    BEQ(ExitGetM);
    lda(offsetof(G, AltEntranceControl));
    cmp(0x2);
    BEQ(ChkAreaType);
    ldy(0x5);
    lda(offsetof(G, PlayerEntranceCtrl));
    // <conv.chunks.Comment object at 0x100b2bbc0>
    // <conv.chunks.Comment object at 0x100b2bce0>
    // <conv.chunks.Comment object at 0x100b2bd70>
    // <conv.chunks.Comment object at 0x100b2bf20>
    // <conv.chunks.Comment object at 0x100b2bfb0>
    cmp(0x6);
    BEQ(StoreMusic);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x100b38200>
    // <conv.chunks.Comment object at 0x100b383b0>
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // <conv.chunks.Comment object at 0x100b385c0>
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, CloudTypeOverride));
    BEQ(StoreMusic);
    ldy(0x4);
    JMP(StoreMusic);
}

int StoreMusic() {
    // <conv.chunks.Comment object at 0x100b38800>
    // <conv.chunks.Comment object at 0x100b38920>
    // <conv.chunks.Comment object at 0x100b389b0>
    lda(offsetof(G, MusicSelectData), y);
    sta(offsetof(G, AreaMusicQueue));
    JMP(ExitGetM);
}

int ExitGetM() {
    rts();
    JMP(Entrance_GameTimerSetup);
}

int Entrance_GameTimerSetup() {
    lda(offsetof(G, ScreenLeft_PageLoc));
    sta(offsetof(G, Player_PageLoc));
    lda(0x28);
    sta(offsetof(G, VerticalForceDown));
    lda(0x1);
    sta(offsetof(G, PlayerFacingDir));
    // <conv.chunks.Comment object at 0x100b392b0>
    // <conv.chunks.Comment object at 0x100b39f70>
    // <conv.chunks.Comment object at 0x100b3a090>
    // <conv.chunks.Comment object at 0x100b3a120>
    // <conv.chunks.Comment object at 0x100b3a2d0>
    // <conv.chunks.Comment object at 0x100b3a360>
    sta(offsetof(G, Player_Y_HighPos));
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b3a600>
    sta(offsetof(G, Player_State));
    dec(offsetof(G, Player_CollisionBits));
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100b3a810>
    // <conv.chunks.Comment object at 0x100b3a930>
    sty(offsetof(G, HalfwayPage));
    lda(offsetof(G, AreaType));
    BNE(ChkStPos);
    // <conv.chunks.Comment object at 0x100b3ab40>
    // <conv.chunks.Comment object at 0x100b3ac60>
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty(offsetof(G, SwimmingFlag));
    ldx(offsetof(G, PlayerEntranceCtrl));
    ldy(offsetof(G, AltEntranceControl));
    // <conv.chunks.Comment object at 0x100b3af30>
    // <conv.chunks.Comment object at 0x100b3b050>
    BEQ(SetStPos);
    cpy(0x1);
    BEQ(SetStPos);
    ldx(((offsetof(G, AltYPosOffset)) - (2)), y);
    JMP(SetStPos);
}

int SetStPos() {
    // <conv.chunks.Comment object at 0x100b3b440>
    // <conv.chunks.Comment object at 0x100b3b650>
    lda(offsetof(G, PlayerStarting_X_Pos), y);
    sta(offsetof(G, Player_X_Position));
    lda(offsetof(G, PlayerStarting_Y_Pos), x);
    sta(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x100b3b7d0>
    // <conv.chunks.Comment object at 0x100b3b8f0>
    // <conv.chunks.Comment object at 0x100b3ba40>
    lda(offsetof(G, PlayerBGPriorityData), x);
    sta(offsetof(G, Player_SprAttrib));
    JSR(GetPlayerColors);
    ldy(offsetof(G, GameTimerSetting));
    BEQ(ChkOverR);
    lda(offsetof(G, FetchNewGameTimerFlag));
    BEQ(ChkOverR);
    lda(offsetof(G, GameTimerData), y);
    sta(offsetof(G, GameTimerDisplay));
    // <conv.chunks.Comment object at 0x100b3bc80>
    // <conv.chunks.Comment object at 0x100b3bda0>
    // <conv.chunks.Comment object at 0x100b3bec0>
    // <conv.chunks.Comment object at 0x100b3bfe0>
    // <conv.chunks.Comment object at 0x100b44140>
    // <conv.chunks.Comment object at 0x100b44260>
    // <conv.chunks.Comment object at 0x100b44380>
    // <conv.chunks.Comment object at 0x100b444d0>
    lda(0x1);
    sta(((offsetof(G, GameTimerDisplay)) + (2)));
    // <conv.chunks.Comment object at 0x100b44650>
    lsr();
    sta(((offsetof(G, GameTimerDisplay)) + (1)));
    sta(offsetof(G, FetchNewGameTimerFlag));
    sta(offsetof(G, StarInvincibleTimer));
    JMP(ChkOverR);
}

int ChkOverR() {
    // <conv.chunks.Comment object at 0x100b44950>
    // <conv.chunks.Comment object at 0x100b44b30>
    // <conv.chunks.Comment object at 0x100b44c50>
    // <conv.chunks.Comment object at 0x100b44d70>
    ldy(offsetof(G, JoypadOverride));
    BEQ(ChkSwimE);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100b44fb0>
    sta(offsetof(G, Player_State));
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100b451c0>
    JSR(InitBlock_XY_Pos);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x100b453d0>
    sta(offsetof(G, Block_Y_Position));
    ldx(0x5);
    ldy(0x0);
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // <conv.chunks.Comment object at 0x100b455e0>
    // <conv.chunks.Comment object at 0x100b45670>
    // <conv.chunks.Comment object at 0x100b45790>
    // <conv.chunks.Comment object at 0x100b45940>
    ldy(offsetof(G, AreaType));
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // <conv.chunks.Comment object at 0x100b45a90>
    // <conv.chunks.Comment object at 0x100b45bb0>
    // <conv.chunks.Comment object at 0x100b45cd0>
    lda(0x7);
    sta(offsetof(G, GameEngineSubroutine));
    // <conv.chunks.Comment object at 0x100b45d90>
    rts();
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc(offsetof(G, DisableScreenFlag));
    // <conv.chunks.Comment object at 0x100b46060>
    lda(0x0);
    sta(offsetof(G, Sprite0HitDetectFlag));
    lda(offsetof(G, Silence));
    // <conv.chunks.Comment object at 0x100b46c90>
    sta(offsetof(G, EventMusicQueue));
    dec(offsetof(G, NumberofLives));
    BPL(StillInGame);
    // <conv.chunks.Comment object at 0x100b46ed0>
    // <conv.chunks.Comment object at 0x100b46ff0>
    lda(0x0);
    sta(offsetof(G, OperMode_Task));
    lda(offsetof(G, GameOverModeValue));
    sta(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x100b47170>
    // <conv.chunks.Comment object at 0x100b47320>
    // <conv.chunks.Comment object at 0x100b47440>
    rts();
    JMP(StillInGame);
}

int StillInGame() {
    // <conv.chunks.Comment object at 0x100b475f0>
    lda(offsetof(G, WorldNumber));
    asl();
    // <conv.chunks.Comment object at 0x100b47770>
    tax();
    lda(offsetof(G, LevelNumber));
    anda(0x2);
    BEQ(GetHalfway);
    // <conv.chunks.Comment object at 0x100b47890>
    // <conv.chunks.Comment object at 0x100b479b0>
    // <conv.chunks.Comment object at 0x100b47a40>
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // <conv.chunks.Comment object at 0x100b47c80>
    ldy(offsetof(G, HalfwayPageNybbles), x);
    lda(offsetof(G, LevelNumber));
    // <conv.chunks.Comment object at 0x100b47e00>
    lsr();
    tya();
    // <conv.chunks.Comment object at 0x100b47fe0>
    BCS(MaskHPNyb);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100b4c1d0>
    // <conv.chunks.Comment object at 0x100b4c290>
    lsr();
    lsr();
    JMP(MaskHPNyb);
}

int MaskHPNyb() {
    // <conv.chunks.Comment object at 0x100b4c440>
    anda(0b1111);
    cmp(offsetof(G, ScreenLeft_PageLoc));
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(0x0);
    JMP(SetHalfway);
}

int SetHalfway() {
    // <conv.chunks.Comment object at 0x100b4c680>
    // <conv.chunks.Comment object at 0x100b4c7a0>
    // <conv.chunks.Comment object at 0x100b4c8c0>
    // <conv.chunks.Comment object at 0x100b4c950>
    sta(offsetof(G, HalfwayPage));
    JSR(TransposePlayers);
    JMP(ContinueGame);
    JMP(GameOverMode);
}

int GameOverMode() {
    lda(offsetof(G, OperMode_Task));
    JSR(JumpEngine);
    JMP(SetupGameOver);
}

int SetupGameOver() {
    lda(0x0);
    sta(offsetof(G, ScreenRoutineTask));
    sta(offsetof(G, Sprite0HitDetectFlag));
    // <conv.chunks.Comment object at 0x100b4d1c0>
    // <conv.chunks.Comment object at 0x100b4d250>
    // <conv.chunks.Comment object at 0x100b4d400>
    lda(offsetof(G, GameOverMusic));
    sta(offsetof(G, EventMusicQueue));
    inc(offsetof(G, DisableScreenFlag));
    inc(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x100b4d610>
    // <conv.chunks.Comment object at 0x100b4d730>
    // <conv.chunks.Comment object at 0x100b4d850>
    rts();
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b4da60>
    sta(offsetof(G, DisableScreenFlag));
    lda(offsetof(G, SavedJoypad1Bits));
    // <conv.chunks.Comment object at 0x100b4dc70>
    anda(offsetof(G, Start_Button));
    BNE(TerminateGame);
    lda(offsetof(G, ScreenTimer));
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda(offsetof(G, Silence));
    // <conv.chunks.Comment object at 0x100b4e1e0>
    sta(offsetof(G, EventMusicQueue));
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda(offsetof(G, WorldNumber));
    sta(offsetof(G, ContinueWorld));
    // <conv.chunks.Comment object at 0x100b4e420>
    // <conv.chunks.Comment object at 0x100b4e540>
    // <conv.chunks.Comment object at 0x100b4e660>
    // <conv.chunks.Comment object at 0x100b4e780>
    lda(0x0);
    asl();
    sta(offsetof(G, OperMode_Task));
    sta(offsetof(G, ScreenTimer));
    // <conv.chunks.Comment object at 0x100b4e9c0>
    // <conv.chunks.Comment object at 0x100b4ea50>
    // <conv.chunks.Comment object at 0x100b4eba0>
    sta(offsetof(G, OperMode));
    rts();
    JMP(ContinueGame);
}

int ContinueGame() {
    JSR(LoadAreaPointer);
    lda(0x1);
    sta(offsetof(G, PlayerSize));
    inc(offsetof(G, FetchNewGameTimerFlag));
    lda(0x0);
    sta(offsetof(G, TimerControl));
    // <conv.chunks.Comment object at 0x100b4ee70>
    // <conv.chunks.Comment object at 0x100b4ef90>
    // <conv.chunks.Comment object at 0x100b4f020>
    // <conv.chunks.Comment object at 0x100b4f1d0>
    // <conv.chunks.Comment object at 0x100b4f2f0>
    // <conv.chunks.Comment object at 0x100b4f380>
    sta(offsetof(G, PlayerStatus));
    sta(offsetof(G, GameEngineSubroutine));
    sta(offsetof(G, OperMode_Task));
    lda(0x1);
    sta(offsetof(G, OperMode));
    JMP(GameIsOn);
}

int GameIsOn() {
    rts();
    JMP(TransposePlayers);
}

int TransposePlayers() {
    sec();
    lda(offsetof(G, NumberOfPlayers));
    // <conv.chunks.Comment object at 0x100b4fbc0>
    // <conv.chunks.Comment object at 0x100b4fc50>
    BEQ(ExTrans);
    lda(offsetof(G, OffScr_NumberofLives));
    BMI(ExTrans);
    lda(offsetof(G, CurrentPlayer));
    eor(0b1);
    // <conv.chunks.Comment object at 0x100b4fe90>
    // <conv.chunks.Comment object at 0x100b4ffb0>
    // <conv.chunks.Comment object at 0x100b60140>
    // <conv.chunks.Comment object at 0x100b60260>
    sta(offsetof(G, CurrentPlayer));
    ldx(0x6);
    JMP(TransLoop);
}

int TransLoop() {
    // <conv.chunks.Comment object at 0x100b604d0>
    lda(offsetof(G, OnscreenPlayerInfo), x);
    pha();
    lda(offsetof(G, OffscreenPlayerInfo), x);
    // <conv.chunks.Comment object at 0x100b60710>
    // <conv.chunks.Comment object at 0x100b607a0>
    sta(offsetof(G, OnscreenPlayerInfo), x);
    pla();
    sta(offsetof(G, OffscreenPlayerInfo), x);
    dex();
    BPL(TransLoop);
    clc();
    JMP(ExTrans);
}

int ExTrans() {
    rts();
    JMP(DoNothing1);
}

int DoNothing1() {
    lda(0xff);
    sta(0x6c9);
    JMP(DoNothing2);
}

int DoNothing2() {
    rts();
    JMP(AreaParserTaskHandler);
}

int AreaParserTaskHandler() {
    ldy(offsetof(G, AreaParserTaskNum));
    BNE(DoAPTasks);
    // <conv.chunks.Comment object at 0x100b612b0>
    // <conv.chunks.Comment object at 0x100b613d0>
    ldy(0x8);
    sty(offsetof(G, AreaParserTaskNum));
    JMP(DoAPTasks);
}

int DoAPTasks() {
    dey();
    tya();
    JSR(AreaParserTasks);
    dec(offsetof(G, AreaParserTaskNum));
    BNE(SkipATRender);
    // <conv.chunks.Comment object at 0x100b61940>
    // <conv.chunks.Comment object at 0x100b61a60>
    JSR(RenderAttributeTables);
    JMP(SkipATRender);
}

int SkipATRender() {
    rts();
    JMP(AreaParserTasks);
}

int AreaParserTasks() {
    JSR(JumpEngine);
    JMP(IncrementColumnPos);
}

int IncrementColumnPos() {
    inc(offsetof(G, CurrentColumnPos));
    // <conv.chunks.Comment object at 0x100b62330>
    lda(offsetof(G, CurrentColumnPos));
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100b62540>
    BNE(NoColWrap);
    sta(offsetof(G, CurrentColumnPos));
    inc(offsetof(G, CurrentPageLoc));
    JMP(NoColWrap);
}

int NoColWrap() {
    // <conv.chunks.Comment object at 0x100b62750>
    // <conv.chunks.Comment object at 0x100b62870>
    // <conv.chunks.Comment object at 0x100b62990>
    inc(offsetof(G, BlockBufferColumnPos));
    lda(offsetof(G, BlockBufferColumnPos));
    anda(0b11111);
    sta(offsetof(G, BlockBufferColumnPos));
    // <conv.chunks.Comment object at 0x100b62bd0>
    // <conv.chunks.Comment object at 0x100b62cf0>
    rts();
    JMP(AreaParserCore);
}

int AreaParserCore() {
    lda(offsetof(G, BackloadingFlag));
    BEQ(RenderSceneryTerrain);
    JSR(ProcessAreaData);
    JMP(RenderSceneryTerrain);
}

int RenderSceneryTerrain() {
    ldx(0xc);
    lda(0x0);
    JMP(ClrMTBuf);
}

int ClrMTBuf() {
    // <conv.chunks.Comment object at 0x100b79070>
    sta(offsetof(G, MetatileBuffer), x);
    dex();
    BPL(ClrMTBuf);
    ldy(offsetof(G, BackgroundScenery));
    BEQ(RendFore);
    lda(offsetof(G, CurrentPageLoc));
    JMP(ThirdP);
}

int ThirdP() {
    cmp(0x3);
    BMI(RendBack);
    // <conv.chunks.Comment object at 0x100b79820>
    sec();
    sbc(0x3);
    BPL(ThirdP);
    JMP(RendBack);
}

int RendBack() {
    // <conv.chunks.Comment object at 0x100b79a60>
    // <conv.chunks.Comment object at 0x100b79af0>
    // <conv.chunks.Comment object at 0x100b79cd0>
    asl();
    asl();
    asl();
    asl();
    adc(((offsetof(G, BSceneDataOffsets)) - (1)), y);
    adc(offsetof(G, CurrentColumnPos));
    // <conv.chunks.Comment object at 0x100b79f70>
    // <conv.chunks.Comment object at 0x100b7a180>
    tax();
    lda(offsetof(G, BackSceneryData), x);
    BEQ(RendFore);
    // <conv.chunks.Comment object at 0x100b7a330>
    // <conv.chunks.Comment object at 0x100b7a480>
    pha();
    anda(0xf);
    // <conv.chunks.Comment object at 0x100b7a630>
    sec();
    sbc(0x1);
    sta(0x0);
    asl();
    adc(0x0);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x100b7a7e0>
    // <conv.chunks.Comment object at 0x100b7a930>
    // <conv.chunks.Comment object at 0x100b7a870>
    // <conv.chunks.Comment object at 0x100b7ab10>
    // <conv.chunks.Comment object at 0x100b7aae0>
    // <conv.chunks.Comment object at 0x100b7acf0>
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    lda(0x3);
    // <conv.chunks.Comment object at 0x100b7aff0>
    // <conv.chunks.Comment object at 0x100b7b080>
    sta(0x0);
    JMP(SceLoop1);
}

int SceLoop1() {
    // <conv.chunks.Comment object at 0x100b7b110>
    lda(offsetof(G, BackSceneryMetatiles), x);
    sta(offsetof(G, MetatileBuffer), y);
    // <conv.chunks.Comment object at 0x100b7b410>
    inx();
    iny();
    cpy(0xb);
    // <conv.chunks.Comment object at 0x100b7b680>
    BEQ(RendFore);
    dec(0x0);
    // <conv.chunks.Comment object at 0x100b7b8c0>
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // <conv.chunks.Comment object at 0x100b7baa0>
    ldx(offsetof(G, ForegroundScenery));
    BEQ(RendTerr);
    ldy(((offsetof(G, FSceneDataOffsets)) - (1)), x);
    ldx(0x0);
    JMP(SceLoop2);
}

int SceLoop2() {
    // <conv.chunks.Comment object at 0x100b7bbf0>
    // <conv.chunks.Comment object at 0x100b7bd10>
    // <conv.chunks.Comment object at 0x100b7bf20>
    // <conv.chunks.Comment object at 0x100b7bfb0>
    lda(offsetof(G, ForeSceneryData), y);
    BEQ(NoFore);
    // <conv.chunks.Comment object at 0x100b80200>
    sta(offsetof(G, MetatileBuffer), x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x100b805f0>
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // <conv.chunks.Comment object at 0x100b80800>
    ldy(offsetof(G, AreaType));
    BNE(TerMTile);
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World8));
    // <conv.chunks.Comment object at 0x100b80950>
    // <conv.chunks.Comment object at 0x100b80a70>
    // <conv.chunks.Comment object at 0x100b80b90>
    BNE(TerMTile);
    lda(0x62);
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // <conv.chunks.Comment object at 0x100b80dd0>
    // <conv.chunks.Comment object at 0x100b80e60>
    // <conv.chunks.Comment object at 0x100b81040>
    lda(offsetof(G, TerrainMetatiles), y);
    ldy(offsetof(G, CloudTypeOverride));
    BEQ(StoreMT);
    lda(0x88);
    JMP(StoreMT);
}

int StoreMT() {
    // <conv.chunks.Comment object at 0x100b811c0>
    // <conv.chunks.Comment object at 0x100b812e0>
    // <conv.chunks.Comment object at 0x100b81430>
    // <conv.chunks.Comment object at 0x100b814c0>
    sta(0x7);
    ldx(0x0);
    lda(offsetof(G, TerrainControl));
    asl();
    // <conv.chunks.Comment object at 0x100b81670>
    // <conv.chunks.Comment object at 0x100b81760>
    // <conv.chunks.Comment object at 0x100b81940>
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // <conv.chunks.Comment object at 0x100b81a60>
    lda(offsetof(G, TerrainRenderBits), y);
    sta(0x0);
    iny();
    // <conv.chunks.Comment object at 0x100b81c70>
    sty(0x1);
    lda(offsetof(G, CloudTypeOverride));
    // <conv.chunks.Comment object at 0x100b81d90>
    BEQ(NoCloud2);
    cpx(0x0);
    // <conv.chunks.Comment object at 0x100b82090>
    BEQ(NoCloud2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b822d0>
    anda(0b1000);
    sta(0x0);
    JMP(NoCloud2);
}

int NoCloud2() {
    // <conv.chunks.Comment object at 0x100b824b0>
    ldy(0x0);
    JMP(TerrBChk);
}

int TerrBChk() {
    // <conv.chunks.Comment object at 0x100b82660>
    lda(offsetof(G, Bitmasks), y);
    bit(0x0);
    BEQ(NextTBit);
    // <conv.chunks.Comment object at 0x100b82870>
    lda(0x7);
    sta(offsetof(G, MetatileBuffer), x);
    JMP(NextTBit);
}

int NextTBit() {
    // <conv.chunks.Comment object at 0x100b82a80>
    // <conv.chunks.Comment object at 0x100b82cc0>
    inx();
    cpx(0xd);
    BEQ(RendBBuf);
    lda(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100b82e10>
    // <conv.chunks.Comment object at 0x100b82fc0>
    cmp(0x2);
    BNE(EndUChk);
    // <conv.chunks.Comment object at 0x100b83140>
    cpx(0xb);
    BNE(EndUChk);
    lda(0x54);
    // <conv.chunks.Comment object at 0x100b83380>
    // <conv.chunks.Comment object at 0x100b83560>
    sta(0x7);
    JMP(EndUChk);
}

int EndUChk() {
    // <conv.chunks.Comment object at 0x100b835f0>
    iny();
    cpy(0x8);
    BNE(TerrBChk);
    // <conv.chunks.Comment object at 0x100b838f0>
    ldy(0x1);
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // <conv.chunks.Comment object at 0x100b83aa0>
    // <conv.chunks.Comment object at 0x100b83cb0>
    JSR(ProcessAreaData);
    lda(offsetof(G, BlockBufferColumnPos));
    JSR(GetBlockBufferAddr);
    // <conv.chunks.Comment object at 0x100b83ef0>
    ldx(0x0);
    ldy(0x0);
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(0x0);
    lda(offsetof(G, MetatileBuffer), x);
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x100b8c320>
    // <conv.chunks.Comment object at 0x100b8c4d0>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x100b8c6b0>
    rol();
    tay();
    lda(offsetof(G, MetatileBuffer), x);
    cmp(offsetof(G, BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(0x0);
    JMP(StrBlock);
}

int StrBlock() {
    // <conv.chunks.Comment object at 0x100b8c800>
    // <conv.chunks.Comment object at 0x100b8c890>
    // <conv.chunks.Comment object at 0x100b8c9e0>
    // <conv.chunks.Comment object at 0x100b8cb30>
    // <conv.chunks.Comment object at 0x100b8cc50>
    // <conv.chunks.Comment object at 0x100b8cce0>
    ldy(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x100b8ce60>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x100b8d100>
    adc(0x10);
    tay();
    inx();
    // <conv.chunks.Comment object at 0x100b8d340>
    cpx(0xd);
    BCC(ChkMTLow);
    // <conv.chunks.Comment object at 0x100b8d430>
    rts();
    JMP(ProcessAreaData);
}

int ProcessAreaData() {
    ldx(0x2);
    JMP(ProcADLoop);
}

int ProcADLoop() {
    stx(offsetof(G, ObjectOffset));
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b8dc40>
    sta(offsetof(G, BehindAreaParserFlag));
    ldy(offsetof(G, AreaDataOffset));
    lda((offsetof(G, AreaData)), y);
    cmp(0xfd);
    // <conv.chunks.Comment object at 0x100b8de50>
    // <conv.chunks.Comment object at 0x100b8df70>
    // <conv.chunks.Comment object at 0x100b8e0f0>
    BEQ(RdyDecode);
    lda(offsetof(G, AreaObjectLength), x);
    BPL(RdyDecode);
    // <conv.chunks.Comment object at 0x100b8e300>
    // <conv.chunks.Comment object at 0x100b8e450>
    iny();
    lda((offsetof(G, AreaData)), y);
    asl();
    // <conv.chunks.Comment object at 0x100b8e600>
    // <conv.chunks.Comment object at 0x100b8e7b0>
    BCC(Chk1Row13);
    lda(offsetof(G, AreaObjectPageSel));
    // <conv.chunks.Comment object at 0x100b8e930>
    BNE(Chk1Row13);
    inc(offsetof(G, AreaObjectPageSel));
    inc(offsetof(G, AreaObjectPageLoc));
    JMP(Chk1Row13);
}

int Chk1Row13() {
    dey();
    lda((offsetof(G, AreaData)), y);
    anda(0xf);
    cmp(0xd);
    // <conv.chunks.Comment object at 0x100b8ee40>
    // <conv.chunks.Comment object at 0x100b8efc0>
    // <conv.chunks.Comment object at 0x100b8f110>
    BNE(Chk1Row14);
    iny();
    // <conv.chunks.Comment object at 0x100b8f350>
    lda((offsetof(G, AreaData)), y);
    dey();
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x100b8f560>
    // <conv.chunks.Comment object at 0x100b8f5f0>
    BNE(CheckRear);
    lda(offsetof(G, AreaObjectPageSel));
    // <conv.chunks.Comment object at 0x100b8f800>
    BNE(CheckRear);
    iny();
    // <conv.chunks.Comment object at 0x100b8fa40>
    lda((offsetof(G, AreaData)), y);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100b8fc20>
    sta(offsetof(G, AreaObjectPageLoc));
    inc(offsetof(G, AreaObjectPageSel));
    // <conv.chunks.Comment object at 0x100b8fe30>
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // <conv.chunks.Comment object at 0x100b980b0>
    cmp(0xe);
    BNE(CheckRear);
    lda(offsetof(G, BackloadingFlag));
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // <conv.chunks.Comment object at 0x100b982f0>
    // <conv.chunks.Comment object at 0x100b98410>
    // <conv.chunks.Comment object at 0x100b98530>
    lda(offsetof(G, AreaObjectPageLoc));
    cmp(offsetof(G, CurrentPageLoc));
    BCC(SetBehind);
    JMP(RdyDecode);
}

int RdyDecode() {
    // <conv.chunks.Comment object at 0x100b98680>
    // <conv.chunks.Comment object at 0x100b987a0>
    // <conv.chunks.Comment object at 0x100b988c0>
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}

int SetBehind() {
    // <conv.chunks.Comment object at 0x100b98b00>
    inc(offsetof(G, BehindAreaParserFlag));
    JMP(NextAObj);
}

int NextAObj() {
    // <conv.chunks.Comment object at 0x100b98c50>
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // <conv.chunks.Comment object at 0x100b98da0>
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, AreaObjectLength), x);
    BMI(ProcLoopb);
    dec(offsetof(G, AreaObjectLength), x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // <conv.chunks.Comment object at 0x100b98ef0>
    // <conv.chunks.Comment object at 0x100b99040>
    // <conv.chunks.Comment object at 0x100b99160>
    // <conv.chunks.Comment object at 0x100b992b0>
    dex();
    BPL(ProcADLoop);
    lda(offsetof(G, BehindAreaParserFlag));
    BNE(ProcessAreaData);
    lda(offsetof(G, BackloadingFlag));
    BNE(ProcessAreaData);
    JMP(EndAParse);
}

int EndAParse() {
    rts();
    JMP(IncAreaObjOffset);
}

int IncAreaObjOffset() {
    inc(offsetof(G, AreaDataOffset));
    // <conv.chunks.Comment object at 0x100b99a30>
    inc(offsetof(G, AreaDataOffset));
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b99c40>
    sta(offsetof(G, AreaObjectPageSel));
    rts();
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100b99f10>
    BMI(Chk1stB);
    ldy(offsetof(G, AreaObjOffsetBuffer), x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // <conv.chunks.Comment object at 0x100b9a180>
    // <conv.chunks.Comment object at 0x100b9a2d0>
    ldx(0x10);
    lda((offsetof(G, AreaData)), y);
    // <conv.chunks.Comment object at 0x100b9a3c0>
    cmp(0xfd);
    BEQ(EndAParse);
    anda(0xf);
    cmp(0xf);
    BEQ(ChkRow14);
    ldx(0x8);
    cmp(0xc);
    BEQ(ChkRow14);
    ldx(0x0);
    JMP(ChkRow14);
}

int ChkRow14() {
    // <conv.chunks.Comment object at 0x100b9a630>
    // <conv.chunks.Comment object at 0x100b9a7e0>
    // <conv.chunks.Comment object at 0x100b9a930>
    // <conv.chunks.Comment object at 0x100b9a9c0>
    // <conv.chunks.Comment object at 0x100b9ab70>
    // <conv.chunks.Comment object at 0x100b9acc0>
    // <conv.chunks.Comment object at 0x100b9ad50>
    // <conv.chunks.Comment object at 0x100b9af00>
    // <conv.chunks.Comment object at 0x100b9af90>
    stx(0x7);
    ldx(offsetof(G, ObjectOffset));
    cmp(0xe);
    // <conv.chunks.Comment object at 0x100b9b110>
    // <conv.chunks.Comment object at 0x100b9b2c0>
    BNE(ChkRow13);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b9b4d0>
    sta(0x7);
    lda(0x2e);
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // <conv.chunks.Comment object at 0x100b9b560>
    // <conv.chunks.Comment object at 0x100b9b770>
    // <conv.chunks.Comment object at 0x100b9b980>
    cmp(0xd);
    BNE(ChkSRows);
    lda(0x22);
    // <conv.chunks.Comment object at 0x100b9bbc0>
    sta(0x7);
    iny();
    // <conv.chunks.Comment object at 0x100b9bd70>
    lda((offsetof(G, AreaData)), y);
    anda(0b1000000);
    BEQ(LeavePar);
    lda((offsetof(G, AreaData)), y);
    anda(0b1111111);
    cmp(0x4b);
    BNE(Mask2MSB);
    inc(offsetof(G, LoopCommand));
    JMP(Mask2MSB);
}

int Mask2MSB() {
    // <conv.chunks.Comment object at 0x100b9bfe0>
    // <conv.chunks.Comment object at 0x100ba0140>
    // <conv.chunks.Comment object at 0x100ba0260>
    // <conv.chunks.Comment object at 0x100ba03e0>
    // <conv.chunks.Comment object at 0x100ba0500>
    // <conv.chunks.Comment object at 0x100ba0590>
    // <conv.chunks.Comment object at 0x100ba0740>
    // <conv.chunks.Comment object at 0x100ba0860>
    anda(0b111111);
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // <conv.chunks.Comment object at 0x100ba09b0>
    // <conv.chunks.Comment object at 0x100ba0b00>
    cmp(0xc);
    BCS(SpecObj);
    iny();
    // <conv.chunks.Comment object at 0x100ba0da0>
    lda((offsetof(G, AreaData)), y);
    anda(0b1110000);
    BNE(LrgObj);
    // <conv.chunks.Comment object at 0x100ba0f80>
    // <conv.chunks.Comment object at 0x100ba10a0>
    lda(0x16);
    sta(0x7);
    lda((offsetof(G, AreaData)), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100ba1310>
    // <conv.chunks.Comment object at 0x100ba13a0>
    // <conv.chunks.Comment object at 0x100ba1580>
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // <conv.chunks.Comment object at 0x100ba17c0>
    sta(0x0);
    cmp(0x70);
    // <conv.chunks.Comment object at 0x100ba18e0>
    BNE(NotWPipe);
    lda((offsetof(G, AreaData)), y);
    anda(0b1000);
    BEQ(NotWPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100ba1b50>
    // <conv.chunks.Comment object at 0x100ba1cd0>
    // <conv.chunks.Comment object at 0x100ba1df0>
    // <conv.chunks.Comment object at 0x100ba1f10>
    sta(0x0);
    JMP(NotWPipe);
}

int NotWPipe() {
    // <conv.chunks.Comment object at 0x100ba1fa0>
    lda(0x0);
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // <conv.chunks.Comment object at 0x100ba2360>
    iny();
    lda((offsetof(G, AreaData)), y);
    anda(0b1110000);
    JMP(MoveAOId);
}

int MoveAOId() {
    // <conv.chunks.Comment object at 0x100ba25d0>
    // <conv.chunks.Comment object at 0x100ba26f0>
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}

int NormObj() {
    // <conv.chunks.Comment object at 0x100ba2990>
    sta(0x0);
    lda(offsetof(G, AreaObjectLength), x);
    BPL(RunAObj);
    lda(offsetof(G, AreaObjectPageLoc));
    cmp(offsetof(G, CurrentPageLoc));
    // <conv.chunks.Comment object at 0x100ba2ab0>
    // <conv.chunks.Comment object at 0x100ba2c60>
    // <conv.chunks.Comment object at 0x100ba2db0>
    // <conv.chunks.Comment object at 0x100ba2ed0>
    BEQ(InitRear);
    ldy(offsetof(G, AreaDataOffset));
    lda((offsetof(G, AreaData)), y);
    // <conv.chunks.Comment object at 0x100ba30e0>
    // <conv.chunks.Comment object at 0x100ba3200>
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x100ba34d0>
    BNE(LeavePar);
    lda(offsetof(G, BackloadingFlag));
    BNE(StrAObj);
    JMP(LeavePar);
}

int LeavePar() {
    rts();
    JMP(InitRear);
}

int InitRear() {
    // <conv.chunks.Comment object at 0x100ba3a10>
    lda(offsetof(G, BackloadingFlag));
    BEQ(BackColC);
    lda(0x0);
    sta(offsetof(G, BackloadingFlag));
    // <conv.chunks.Comment object at 0x100ba3b60>
    // <conv.chunks.Comment object at 0x100ba3c80>
    // <conv.chunks.Comment object at 0x100ba3d10>
    sta(offsetof(G, BehindAreaParserFlag));
    sta(offsetof(G, ObjectOffset));
    JMP(LoopCmdE);
}

int LoopCmdE() {
    rts();
    JMP(BackColC);
}

int BackColC() {
    // <conv.chunks.Comment object at 0x100ba81a0>
    ldy(offsetof(G, AreaDataOffset));
    lda((offsetof(G, AreaData)), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x100ba8470>
    lsr();
    lsr();
    lsr();
    lsr();
    cmp(offsetof(G, CurrentColumnPos));
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // <conv.chunks.Comment object at 0x100ba87d0>
    // <conv.chunks.Comment object at 0x100ba88f0>
    // <conv.chunks.Comment object at 0x100ba8a10>
    lda(offsetof(G, AreaDataOffset));
    sta(offsetof(G, AreaObjOffsetBuffer), x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // <conv.chunks.Comment object at 0x100ba8cb0>
    // <conv.chunks.Comment object at 0x100ba8dd0>
    lda(0x0);
    clc();
    // <conv.chunks.Comment object at 0x100ba8e30>
    adc(0x7);
    JSR(JumpEngine);
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy(offsetof(G, AreaObjOffsetBuffer), x);
    iny();
    // <conv.chunks.Comment object at 0x100baae10>
    // <conv.chunks.Comment object at 0x100bab020>
    // <conv.chunks.Comment object at 0x100bab110>
    // <conv.chunks.Comment object at 0x100bab170>
    // <conv.chunks.Comment object at 0x100bab2f0>
    lda((offsetof(G, AreaData)), y);
    pha();
    // <conv.chunks.Comment object at 0x100bab500>
    anda(0b1000000);
    BNE(Alter2);
    // <conv.chunks.Comment object at 0x100bab680>
    pla();
    pha();
    anda(0b1111);
    sta(offsetof(G, TerrainControl));
    // <conv.chunks.Comment object at 0x100bab890>
    // <conv.chunks.Comment object at 0x100bab920>
    // <conv.chunks.Comment object at 0x100baba40>
    pla();
    anda(0b110000);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100babbf0>
    // <conv.chunks.Comment object at 0x100babd40>
    // <conv.chunks.Comment object at 0x100babe00>
    lsr();
    lsr();
    sta(offsetof(G, BackgroundScenery));
    // <conv.chunks.Comment object at 0x100babfb0>
    rts();
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(0b111);
    cmp(0x4);
    BCC(SetFore);
    // <conv.chunks.Comment object at 0x100bb8290>
    // <conv.chunks.Comment object at 0x100bb83b0>
    // <conv.chunks.Comment object at 0x100bb8440>
    sta(offsetof(G, BackgroundColorCtrl));
    lda(0x0);
    JMP(SetFore);
}

int SetFore() {
    // <conv.chunks.Comment object at 0x100bb8770>
    sta(offsetof(G, ForegroundScenery));
    rts();
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(0x4);
    lda(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x100bb8a70>
    // <conv.chunks.Comment object at 0x100bb8b00>
    BEQ(WarpNum);
    inx();
    ldy(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100bb8e00>
    // <conv.chunks.Comment object at 0x100bb8e90>
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta(offsetof(G, WarpZoneControl));
    JSR(WriteGameText);
    // <conv.chunks.Comment object at 0x100bb9340>
    // <conv.chunks.Comment object at 0x100bb9460>
    lda(offsetof(G, PiranhaPlant));
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda(offsetof(G, ScrollLock));
    // <conv.chunks.Comment object at 0x100bb97c0>
    eor(0b1);
    sta(offsetof(G, ScrollLock));
    rts();
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(0x0);
    // <conv.chunks.Comment object at 0x100bb9b80>
    // <conv.chunks.Comment object at 0x100bb9c10>
    lda(0x0);
    ldx(0x4);
    JMP(KillELoop);
}

int KillELoop() {
    ldy(offsetof(G, Enemy_ID), x);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x100bba090>
    BNE(NoKillE);
    sta(offsetof(G, Enemy_Flag), x);
    JMP(NoKillE);
}

int NoKillE() {
    // <conv.chunks.Comment object at 0x100bba2a0>
    // <conv.chunks.Comment object at 0x100bba3f0>
    dex();
    BPL(KillELoop);
    rts();
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // <conv.chunks.Comment object at 0x100bba6f0>
    ldx(0x0);
    lda(((offsetof(G, FrenzyIDData)) - (8)), x);
    // <conv.chunks.Comment object at 0x100bba990>
    ldy(0x5);
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // <conv.chunks.Comment object at 0x100bbac60>
    dey();
    BMI(ExitAFrenzy);
    cmp(offsetof(G, Enemy_ID), y);
    // <conv.chunks.Comment object at 0x100bbade0>
    // <conv.chunks.Comment object at 0x100bbaf00>
    BNE(FreCompLoop);
    lda(0x0);
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // <conv.chunks.Comment object at 0x100bbb140>
    // <conv.chunks.Comment object at 0x100bbb1d0>
    sta(offsetof(G, EnemyFrenzyQueue));
    rts();
    JMP(AreaStyleObject);
}

int AreaStyleObject() {
    lda(offsetof(G, AreaStyle));
    // <conv.chunks.Comment object at 0x100bbb470>
    // <conv.chunks.Comment object at 0x100bbb4d0>
    JSR(JumpEngine);
    JMP(TreeLedge);
}

int TreeLedge() {
    JSR(GetLrgObjAttrib);
    lda(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100bbb740>
    // <conv.chunks.Comment object at 0x100bbba10>
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100bbbdd0>
    lda(offsetof(G, CurrentPageLoc));
    ora(offsetof(G, CurrentColumnPos));
    // <conv.chunks.Comment object at 0x100bc4050>
    BEQ(MidTreeL);
    lda(0x16);
    // <conv.chunks.Comment object at 0x100bc4260>
    JMP(NoUnder);
    JMP(MidTreeL);
}

int MidTreeL() {
    ldx(0x7);
    lda(0x17);
    sta(offsetof(G, MetatileBuffer), x);
    lda(0x4c);
    JMP(AllUnder);
    JMP(EndTreeL);
}

int EndTreeL() {
    // <conv.chunks.Comment object at 0x100bc4560>
    // <conv.chunks.Comment object at 0x100bc4650>
    // <conv.chunks.Comment object at 0x100bc4830>
    // <conv.chunks.Comment object at 0x100bc48c0>
    // <conv.chunks.Comment object at 0x100bc4a70>
    lda(0x18);
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(0x6);
    // <conv.chunks.Comment object at 0x100bc4d10>
    // <conv.chunks.Comment object at 0x100bc4e60>
    BCC(EndMushL);
    lda(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100bc5040>
    lsr();
    sta(offsetof(G, MushroomLedgeHalfLen), x);
    lda(0x19);
    // <conv.chunks.Comment object at 0x100bc5340>
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // <conv.chunks.Comment object at 0x100bc5580>
    lda(0x1b);
    ldy(offsetof(G, AreaObjectLength), x);
    BEQ(NoUnder);
    lda(offsetof(G, MushroomLedgeHalfLen), x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x100bc5910>
    // <conv.chunks.Comment object at 0x100bc5a90>
    ldx(0x7);
    lda(0x1a);
    sta(offsetof(G, MetatileBuffer), x);
    cpy(0x6);
    BNE(MushLExit);
    // <conv.chunks.Comment object at 0x100bc5cd0>
    // <conv.chunks.Comment object at 0x100bc5ee0>
    // <conv.chunks.Comment object at 0x100bc5f70>
    inx();
    lda(0x4f);
    sta(offsetof(G, MetatileBuffer), x);
    // <conv.chunks.Comment object at 0x100bc61e0>
    lda(0x50);
    JMP(AllUnder);
}

int AllUnder() {
    inx();
    ldy(0xf);
    JMP(RenderUnderPart);
    JMP(NoUnder);
}

int NoUnder() {
    // <conv.chunks.Comment object at 0x100bc6570>
    // <conv.chunks.Comment object at 0x100bc6600>
    // <conv.chunks.Comment object at 0x100bc67b0>
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100bc68d0>
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(0x0);
    BCS(RenderPul);
    // <conv.chunks.Comment object at 0x100bc6c30>
    // <conv.chunks.Comment object at 0x100bc6ed0>
    // <conv.chunks.Comment object at 0x100bc6f60>
    iny();
    lda(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100bc71a0>
    BNE(RenderPul);
    iny();
    JMP(RenderPul);
}

int RenderPul() {
    lda(offsetof(G, PulleyRopeMetatiles), y);
    sta(offsetof(G, MetatileBuffer));
    JMP(MushLExit);
}

int MushLExit() {
    // <conv.chunks.Comment object at 0x100bc75f0>
    // <conv.chunks.Comment object at 0x100bc7710>
    rts();
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(0x7);
    // <conv.chunks.Comment object at 0x100bc7890>
    // <conv.chunks.Comment object at 0x100bd1940>
    ldy(0x4);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x100bd1a90>
    txa();
    pha();
    ldy(offsetof(G, AreaObjectLength), x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x100bd1d00>
    // <conv.chunks.Comment object at 0x100bd1d90>
    // <conv.chunks.Comment object at 0x100bd1f10>
    lda(0xb);
    sta(0x6);
    JMP(CRendLoop);
}

int CRendLoop() {
    // <conv.chunks.Comment object at 0x100bd2120>
    // <conv.chunks.Comment object at 0x100bd21b0>
    lda(offsetof(G, CastleMetatiles), y);
    sta(offsetof(G, MetatileBuffer), x);
    inx();
    // <conv.chunks.Comment object at 0x100bd24e0>
    lda(0x6);
    BEQ(ChkCFloor);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x100bd2570>
    // <conv.chunks.Comment object at 0x100bd27b0>
    // <conv.chunks.Comment object at 0x100bd2870>
    iny();
    iny();
    iny();
    dec(0x6);
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // <conv.chunks.Comment object at 0x100bd2ae0>
    // <conv.chunks.Comment object at 0x100bd2b70>
    cpx(0xb);
    BNE(CRendLoop);
    // <conv.chunks.Comment object at 0x100bd2c90>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100bd2f00>
    lda(offsetof(G, CurrentPageLoc));
    BEQ(ExitCastle);
    lda(offsetof(G, AreaObjectLength), x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x100bd3080>
    // <conv.chunks.Comment object at 0x100bd31a0>
    // <conv.chunks.Comment object at 0x100bd32f0>
    BEQ(PlayerStop);
    ldy(0x7);
    // <conv.chunks.Comment object at 0x100bd3530>
    BNE(NotTall);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x100bd3740>
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // <conv.chunks.Comment object at 0x100bd3950>
    cmp(0x2);
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100bd3a40>
    // <conv.chunks.Comment object at 0x100bd3bf0>
    pha();
    JSR(FindEmptyEnemySlot);
    // <conv.chunks.Comment object at 0x100bd3da0>
    pla();
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x100bd3f50>
    lda(offsetof(G, CurrentPageLoc));
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x100bdc1d0>
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x100bdc380>
    // <conv.chunks.Comment object at 0x100bdc560>
    lda(0x90);
    sta(offsetof(G, Enemy_Y_Position), x);
    lda(offsetof(G, StarFlagObject));
    // <conv.chunks.Comment object at 0x100bdc710>
    // <conv.chunks.Comment object at 0x100bdc8f0>
    sta(offsetof(G, Enemy_ID), x);
    rts();
    JMP(PlayerStop);
}

int PlayerStop() {
    // <conv.chunks.Comment object at 0x100bdcbc0>
    ldy(0x52);
    sty(((offsetof(G, MetatileBuffer)) + (10)));
    JMP(ExitCastle);
}

int ExitCastle() {
    rts();
    JMP(WaterPipe);
}

int WaterPipe() {
    JSR(GetLrgObjAttrib);
    ldy(offsetof(G, AreaObjectLength), x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x100bdd010>
    // <conv.chunks.Comment object at 0x100bdd130>
    // <conv.chunks.Comment object at 0x100bdd2e0>
    lda(0x6b);
    sta(offsetof(G, MetatileBuffer), x);
    // <conv.chunks.Comment object at 0x100bdd430>
    lda(0x6c);
    sta(((offsetof(G, MetatileBuffer)) + (1)), x);
    rts();
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x100bdd9a0>
    // <conv.chunks.Comment object at 0x100bdda00>
    // <conv.chunks.Comment object at 0x100bdda60>
    JSR(ChkLrgObjFixedLength);
    ldy(0xa);
    // <conv.chunks.Comment object at 0x100bddc70>
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(0x6);
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // <conv.chunks.Comment object at 0x100bdde80>
    // <conv.chunks.Comment object at 0x100bddfa0>
    // <conv.chunks.Comment object at 0x100bde030>
    lda(0x0);
    sta(offsetof(G, MetatileBuffer), x);
    // <conv.chunks.Comment object at 0x100bde180>
    dex();
    BPL(VPipeSectLoop);
    lda(offsetof(G, VerticalPipeData), y);
    // <conv.chunks.Comment object at 0x100bde4e0>
    sta(((offsetof(G, MetatileBuffer)) + (7)));
    JMP(NoBlankP);
}

int NoBlankP() {
    rts();
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x100bdeae0>
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}

int RenderSidewaysPipe() {
    dey();
    dey();
    // <conv.chunks.Comment object at 0x100bdf470>
    // <conv.chunks.Comment object at 0x100bdf530>
    sty(0x5);
    ldy(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100bdf5c0>
    sty(0x6);
    ldx(0x5);
    // <conv.chunks.Comment object at 0x100bdf890>
    inx();
    lda(offsetof(G, SidePipeShaftData), y);
    // <conv.chunks.Comment object at 0x100bdfaa0>
    cmp(0x0);
    BEQ(DrawSidePart);
    // <conv.chunks.Comment object at 0x100bdfc50>
    ldx(0x0);
    ldy(0x5);
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // <conv.chunks.Comment object at 0x100bdff20>
    // <conv.chunks.Comment object at 0x100bdffb0>
    // <conv.chunks.Comment object at 0x100be41a0>
    // <conv.chunks.Comment object at 0x100be4230>
    ldy(0x6);
    lda(offsetof(G, SidePipeTopPart), y);
    sta(offsetof(G, MetatileBuffer), x);
    lda(offsetof(G, SidePipeBottomPart), y);
    // <conv.chunks.Comment object at 0x100be44a0>
    // <conv.chunks.Comment object at 0x100be45f0>
    sta(((offsetof(G, MetatileBuffer)) + (1)), x);
    rts();
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(0x0);
    BEQ(WarpPipe);
    // <conv.chunks.Comment object at 0x100be5010>
    // <conv.chunks.Comment object at 0x100be50a0>
    iny();
    iny();
    iny();
    iny();
    JMP(WarpPipe);
}

int WarpPipe() {
    // <conv.chunks.Comment object at 0x100be5400>
    // <conv.chunks.Comment object at 0x100be5490>
    tya();
    pha();
    lda(offsetof(G, AreaNumber));
    ora(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x100be5700>
    BEQ(DrawPipe);
    ldy(offsetof(G, AreaObjectLength), x);
    BEQ(DrawPipe);
    JSR(FindEmptyEnemySlot);
    BCS(DrawPipe);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100be5910>
    // <conv.chunks.Comment object at 0x100be5a60>
    // <conv.chunks.Comment object at 0x100be5b80>
    // <conv.chunks.Comment object at 0x100be5ca0>
    // <conv.chunks.Comment object at 0x100be5dc0>
    clc();
    adc(0x8);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, CurrentPageLoc));
    // <conv.chunks.Comment object at 0x100be5f70>
    // <conv.chunks.Comment object at 0x100be6000>
    // <conv.chunks.Comment object at 0x100be61e0>
    adc(0x0);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x100be6360>
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    sta(offsetof(G, Enemy_Flag), x);
    JSR(GetAreaObjYPosition);
    // <conv.chunks.Comment object at 0x100be6750>
    // <conv.chunks.Comment object at 0x100be68a0>
    sta(offsetof(G, Enemy_Y_Position), x);
    lda(offsetof(G, PiranhaPlant));
    // <conv.chunks.Comment object at 0x100be6ae0>
    sta(offsetof(G, Enemy_ID), x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // <conv.chunks.Comment object at 0x100be6e10>
    pla();
    tay();
    ldx(0x7);
    lda(offsetof(G, VerticalPipeData), y);
    sta(offsetof(G, MetatileBuffer), x);
    // <conv.chunks.Comment object at 0x100be6fc0>
    // <conv.chunks.Comment object at 0x100be7050>
    // <conv.chunks.Comment object at 0x100be7200>
    inx();
    lda(((offsetof(G, VerticalPipeData)) + (2)), y);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x100be73e0>
    // <conv.chunks.Comment object at 0x100be7620>
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(0x1);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x100be78c0>
    // <conv.chunks.Comment object at 0x100be7950>
    JSR(GetLrgObjAttrib);
    tya();
    anda(0x7);
    sta(0x6);
    ldy(offsetof(G, AreaObjectLength), x);
    // <conv.chunks.Comment object at 0x100be7c20>
    // <conv.chunks.Comment object at 0x100be7cb0>
    // <conv.chunks.Comment object at 0x100be7e00>
    // <conv.chunks.Comment object at 0x100be7e90>
    rts();
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(0x0);
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // <conv.chunks.Comment object at 0x100bf0140>
    // <conv.chunks.Comment object at 0x100bf01d0>
    clc();
    lda(offsetof(G, Enemy_Flag), x);
    BEQ(ExitEmptyChk);
    // <conv.chunks.Comment object at 0x100bf0350>
    // <conv.chunks.Comment object at 0x100bf04a0>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x100bf0650>
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // <conv.chunks.Comment object at 0x100bf0860>
    rts();
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(0x86);
    // <conv.chunks.Comment object at 0x100bf09b0>
    // <conv.chunks.Comment object at 0x100bf0ad0>
    sta(((offsetof(G, MetatileBuffer)) + (10)));
    ldx(0xb);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x100bf0e00>
    lda(0x87);
    JMP(RenderUnderPart);
    JMP(QuestionBlockRow_High);
}

int QuestionBlockRow_High() {
    lda(0x3);
    JMP(QuestionBlockRow_Low);
}

int QuestionBlockRow_Low() {
    lda(0x7);
    pha();
    JSR(ChkLrgObjLength);
    // <conv.chunks.Comment object at 0x100bf13a0>
    // <conv.chunks.Comment object at 0x100bf1550>
    // <conv.chunks.Comment object at 0x100bf15e0>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100bf17c0>
    lda(0xc0);
    sta(offsetof(G, MetatileBuffer), x);
    rts();
    JMP(Bridge_High);
}

int Bridge_High() {
    lda(0x6);
    JMP(Bridge_Middle);
}

int Bridge_Middle() {
    lda(0x7);
    JMP(Bridge_Low);
}

int Bridge_Low() {
    lda(0x9);
    pha();
    JSR(ChkLrgObjLength);
    // <conv.chunks.Comment object at 0x100bf1f10>
    // <conv.chunks.Comment object at 0x100bf20c0>
    // <conv.chunks.Comment object at 0x100bf2150>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100bf2330>
    lda(0xb);
    sta(offsetof(G, MetatileBuffer), x);
    inx();
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100bf2660>
    lda(0x63);
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(0x2);
    lda(0x6d);
    // <conv.chunks.Comment object at 0x100bf29c0>
    // <conv.chunks.Comment object at 0x100bf2ae0>
    // <conv.chunks.Comment object at 0x100bf2b70>
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(0x24);
    // <conv.chunks.Comment object at 0x100bf2e70>
    sta(offsetof(G, MetatileBuffer));
    ldx(0x1);
    // <conv.chunks.Comment object at 0x100bf3080>
    ldy(0x8);
    lda(0x25);
    JSR(RenderUnderPart);
    lda(0x61);
    // <conv.chunks.Comment object at 0x100bf3470>
    sta(((offsetof(G, MetatileBuffer)) + (10)));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(0x8);
    sta(((offsetof(G, Enemy_X_Position)) + (5)));
    // <conv.chunks.Comment object at 0x100bf3860>
    // <conv.chunks.Comment object at 0x100bf38f0>
    // <conv.chunks.Comment object at 0x100bf3980>
    lda(offsetof(G, CurrentPageLoc));
    sbc(0x0);
    sta(((offsetof(G, Enemy_PageLoc)) + (5)));
    // <conv.chunks.Comment object at 0x100bf3ce0>
    // <conv.chunks.Comment object at 0x100bf3d70>
    lda(0x30);
    sta(((offsetof(G, Enemy_Y_Position)) + (5)));
    // <conv.chunks.Comment object at 0x100bf8080>
    lda(0xb0);
    sta(offsetof(G, FlagpoleFNum_Y_Pos));
    // <conv.chunks.Comment object at 0x100bf8350>
    lda(offsetof(G, FlagpoleFlagObject));
    sta(((offsetof(G, Enemy_ID)) + (5)));
    inc(((offsetof(G, Enemy_Flag)) + (5)));
    // <conv.chunks.Comment object at 0x100bf85f0>
    // <conv.chunks.Comment object at 0x100bf87d0>
    rts();
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100bf8aa0>
    ldy(0xf);
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // <conv.chunks.Comment object at 0x100bf8e00>
    pha();
    ldx(0x1);
    ldy(0xf);
    // <conv.chunks.Comment object at 0x100bf8f20>
    // <conv.chunks.Comment object at 0x100bf8fb0>
    lda(0x44);
    JSR(RenderUnderPart);
    pla();
    // <conv.chunks.Comment object at 0x100bf9370>
    tax();
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x100bf9490>
    ldx(0x1);
    JMP(DrawRope);
}

int DrawRope() {
    // <conv.chunks.Comment object at 0x100bf9610>
    lda(0x40);
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, CoinMetatileData), y);
    // <conv.chunks.Comment object at 0x100bf99a0>
    // <conv.chunks.Comment object at 0x100bf9cd0>
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(0xc);
    // <conv.chunks.Comment object at 0x100bf9fa0>
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x100bfa660>
    sta(offsetof(G, VRAM_Buffer_AddrCtrl));
    JMP(ChainObj);
}

int ChainObj() {
    ldy(0x0);
    ldx(((offsetof(G, C_ObjectRow)) - (2)), y);
    // <conv.chunks.Comment object at 0x100bfa930>
    // <conv.chunks.Comment object at 0x100bfa9c0>
    lda(((offsetof(G, C_ObjectMetatile)) - (2)), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x100bfaf60>
    ldx(0x7);
    lda(0xc4);
    JMP(ColObj);
}

int ColObj() {
    // <conv.chunks.Comment object at 0x100bfb1d0>
    ldy(0x0);
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, CloudTypeOverride));
    // <conv.chunks.Comment object at 0x100bfb620>
    // <conv.chunks.Comment object at 0x100bfbbf0>
    BEQ(DrawBricks);
    ldy(0x4);
    JMP(DrawBricks);
}

int DrawBricks() {
    // <conv.chunks.Comment object at 0x100bfbe00>
    // <conv.chunks.Comment object at 0x100bfbe90>
    lda(offsetof(G, BrickMetatiles), y);
    JMP(GetRow);
    JMP(RowOfSolidBlocks);
}

int RowOfSolidBlocks() {
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow);
}

int GetRow() {
    // <conv.chunks.Comment object at 0x100c00260>
    // <conv.chunks.Comment object at 0x100c00380>
    // <conv.chunks.Comment object at 0x100c004d0>
    pha();
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}

int DrawRow() {
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100c00800>
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, BrickMetatiles), y);
    // <conv.chunks.Comment object at 0x100c00b60>
    // <conv.chunks.Comment object at 0x100c00c80>
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // <conv.chunks.Comment object at 0x100c00f20>
    // <conv.chunks.Comment object at 0x100c01040>
    // <conv.chunks.Comment object at 0x100c01190>
    pha();
    JSR(GetLrgObjAttrib);
    pla();
    ldx(0x7);
    JMP(RenderUnderPart);
    JMP(BulletBillCannon);
}

int BulletBillCannon() {
    JSR(GetLrgObjAttrib);
    ldx(0x7);
    lda(0x64);
    // <conv.chunks.Comment object at 0x100c01730>
    // <conv.chunks.Comment object at 0x100c01880>
    // <conv.chunks.Comment object at 0x100c01910>
    sta(offsetof(G, MetatileBuffer), x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x100c01c70>
    BMI(SetupCannon);
    lda(0x65);
    // <conv.chunks.Comment object at 0x100c01df0>
    sta(offsetof(G, MetatileBuffer), x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x100c020f0>
    BMI(SetupCannon);
    lda(0x66);
    // <conv.chunks.Comment object at 0x100c02270>
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // <conv.chunks.Comment object at 0x100c02480>
    ldx(offsetof(G, Cannon_Offset));
    JSR(GetAreaObjYPosition);
    sta(offsetof(G, Cannon_Y_Position), x);
    // <conv.chunks.Comment object at 0x100c025d0>
    // <conv.chunks.Comment object at 0x100c026f0>
    lda(offsetof(G, CurrentPageLoc));
    sta(offsetof(G, Cannon_PageLoc), x);
    JSR(GetAreaObjXPosition);
    sta(offsetof(G, Cannon_X_Position), x);
    // <conv.chunks.Comment object at 0x100c02930>
    // <conv.chunks.Comment object at 0x100c02a80>
    // <conv.chunks.Comment object at 0x100c02ba0>
    inx();
    cpx(0x6);
    BCC(StrCOffset);
    ldx(0x0);
    JMP(StrCOffset);
}

int StrCOffset() {
    // <conv.chunks.Comment object at 0x100c02d80>
    // <conv.chunks.Comment object at 0x100c02e10>
    // <conv.chunks.Comment object at 0x100c02fc0>
    // <conv.chunks.Comment object at 0x100c03050>
    stx(offsetof(G, Cannon_Offset));
    rts();
    JMP(StaircaseObject);
}

int StaircaseObject() {
    JSR(ChkLrgObjLength);
    BCC(NextStair);
    lda(0x9);
    sta(offsetof(G, StaircaseControl));
    JMP(NextStair);
}

int NextStair() {
    // <conv.chunks.Comment object at 0x100c033e0>
    // <conv.chunks.Comment object at 0x100c03320>
    // <conv.chunks.Comment object at 0x100c03fe0>
    // <conv.chunks.Comment object at 0x100c100b0>
    // <conv.chunks.Comment object at 0x100c10260>
    dec(offsetof(G, StaircaseControl));
    ldy(offsetof(G, StaircaseControl));
    ldx(offsetof(G, StaircaseRowData), y);
    // <conv.chunks.Comment object at 0x100c104a0>
    lda(offsetof(G, StaircaseHeightData), y);
    tay();
    lda(0x61);
    // <conv.chunks.Comment object at 0x100c107a0>
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, CurrentPageLoc));
    // <conv.chunks.Comment object at 0x100c10b00>
    // <conv.chunks.Comment object at 0x100c10c20>
    // <conv.chunks.Comment object at 0x100c10d40>
    // <conv.chunks.Comment object at 0x100c10e90>
    sta(offsetof(G, Enemy_PageLoc), x);
    JSR(GetAreaObjYPosition);
    sta(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, Jumpspring_FixedYPos), x);
    // <conv.chunks.Comment object at 0x100c110d0>
    // <conv.chunks.Comment object at 0x100c111f0>
    // <conv.chunks.Comment object at 0x100c11340>
    lda(offsetof(G, JumpspringObject));
    sta(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x100c11580>
    ldy(0x1);
    sty(offsetof(G, Enemy_Y_HighPos), x);
    inc(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x100c11730>
    // <conv.chunks.Comment object at 0x100c11910>
    ldx(0x7);
    lda(0x67);
    // <conv.chunks.Comment object at 0x100c11a60>
    sta(offsetof(G, MetatileBuffer), x);
    lda(0x68);
    sta(((offsetof(G, MetatileBuffer)) + (1)), x);
    rts();
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda(offsetof(G, Hidden1UpFlag));
    // <conv.chunks.Comment object at 0x100c12120>
    // <conv.chunks.Comment object at 0x100c12180>
    BEQ(ExitDecBlock);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100c12390>
    sta(offsetof(G, Hidden1UpFlag));
    JMP(BrickWithItem);
    JMP(QuestionBlock);
}

int QuestionBlock() {
    JSR(GetAreaObjectID);
    JMP(DrawQBlk);
    JMP(BrickWithCoins);
}

int BrickWithCoins() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x100c12960>
    sta(offsetof(G, BrickCoinTimerFlag));
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // <conv.chunks.Comment object at 0x100c12ba0>
    sty(0x7);
    lda(0x0);
    ldy(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100c12cc0>
    // <conv.chunks.Comment object at 0x100c12e40>
    dey();
    BEQ(BWithL);
    lda(0x5);
    JMP(BWithL);
}

int BWithL() {
    // <conv.chunks.Comment object at 0x100c13080>
    // <conv.chunks.Comment object at 0x100c131d0>
    // <conv.chunks.Comment object at 0x100c13260>
    clc();
    adc(0x7);
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // <conv.chunks.Comment object at 0x100c134a0>
    // <conv.chunks.Comment object at 0x100c135c0>
    lda(offsetof(G, BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x100c13ad0>
    sec();
    sbc(0x0);
    tay();
    JMP(ExitDecBlock);
}

int ExitDecBlock() {
    rts();
    JMP(Hole_Empty);
}

int Hole_Empty() {
    JSR(ChkLrgObjLength);
    BCC(NoWhirlP);
    lda(offsetof(G, AreaType));
    BNE(NoWhirlP);
    ldx(offsetof(G, Whirlpool_Offset));
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100c13fb0>
    // <conv.chunks.Comment object at 0x100c18320>
    // <conv.chunks.Comment object at 0x100c18440>
    // <conv.chunks.Comment object at 0x100c18560>
    // <conv.chunks.Comment object at 0x100c18680>
    // <conv.chunks.Comment object at 0x100c187a0>
    sec();
    sbc(0x10);
    sta(offsetof(G, Whirlpool_LeftExtent), x);
    lda(offsetof(G, CurrentPageLoc));
    sbc(0x0);
    sta(offsetof(G, Whirlpool_PageLoc), x);
    // <conv.chunks.Comment object at 0x100c18950>
    // <conv.chunks.Comment object at 0x100c189e0>
    // <conv.chunks.Comment object at 0x100c18bc0>
    // <conv.chunks.Comment object at 0x100c18ce0>
    // <conv.chunks.Comment object at 0x100c18d70>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x100c19010>
    tya();
    asl();
    asl();
    asl();
    asl();
    sta(offsetof(G, Whirlpool_Length), x);
    // <conv.chunks.Comment object at 0x100c19160>
    // <conv.chunks.Comment object at 0x100c19220>
    // <conv.chunks.Comment object at 0x100c192e0>
    // <conv.chunks.Comment object at 0x100c193a0>
    // <conv.chunks.Comment object at 0x100c19430>
    inx();
    cpx(0x5);
    BCC(StrWOffset);
    ldx(0x0);
    JMP(StrWOffset);
}

int StrWOffset() {
    // <conv.chunks.Comment object at 0x100c19610>
    // <conv.chunks.Comment object at 0x100c196a0>
    // <conv.chunks.Comment object at 0x100c19850>
    // <conv.chunks.Comment object at 0x100c198e0>
    stx(offsetof(G, Whirlpool_Offset));
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // <conv.chunks.Comment object at 0x100c19ac0>
    ldx(offsetof(G, AreaType));
    lda(offsetof(G, HoleMetatiles), x);
    // <conv.chunks.Comment object at 0x100c19c10>
    ldx(0x8);
    ldy(0xf);
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty(offsetof(G, AreaObjectHeight));
    ldy(offsetof(G, MetatileBuffer), x);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x100c19fd0>
    // <conv.chunks.Comment object at 0x100c1a0f0>
    // <conv.chunks.Comment object at 0x100c1a240>
    cpy(0x17);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x100c1a3c0>
    cpy(0x1a);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x100c1a5d0>
    cpy(0xc0);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x100c1a7e0>
    cpy(0xc0);
    BCS(WaitOneRow);
    // <conv.chunks.Comment object at 0x100c1a9f0>
    cpy(0x54);
    BNE(DrawThisRow);
    // <conv.chunks.Comment object at 0x100c1ac00>
    cmp(0x50);
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // <conv.chunks.Comment object at 0x100c1ae10>
    // <conv.chunks.Comment object at 0x100c1afc0>
    sta(offsetof(G, MetatileBuffer), x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x100c1b200>
    BCS(ExitUPartR);
    ldy(offsetof(G, AreaObjectHeight));
    // <conv.chunks.Comment object at 0x100c1b410>
    dey();
    BPL(RenderUnderPart);
    JMP(ExitUPartR);
}

int ExitUPartR() {
    rts();
    JMP(ChkLrgObjLength);
}

int ChkLrgObjLength() {
    JSR(GetLrgObjAttrib);
    JMP(ChkLrgObjFixedLength);
}

int ChkLrgObjFixedLength() {
    lda(offsetof(G, AreaObjectLength), x);
    clc();
    BPL(LenSet);
    tya();
    // <conv.chunks.Comment object at 0x100c1b920>
    // <conv.chunks.Comment object at 0x100c1baa0>
    // <conv.chunks.Comment object at 0x100c1bb30>
    // <conv.chunks.Comment object at 0x100c1bcb0>
    sta(offsetof(G, AreaObjectLength), x);
    sec();
    JMP(LenSet);
}

int LenSet() {
    rts();
    JMP(GetLrgObjAttrib);
}

int GetLrgObjAttrib() {
    ldy(offsetof(G, AreaObjOffsetBuffer), x);
    lda((offsetof(G, AreaData)), y);
    // <conv.chunks.Comment object at 0x100c24080>
    // <conv.chunks.Comment object at 0x100c241d0>
    anda(0b1111);
    sta(0x7);
    // <conv.chunks.Comment object at 0x100c24470>
    iny();
    lda((offsetof(G, AreaData)), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100c245f0>
    // <conv.chunks.Comment object at 0x100c24770>
    tay();
    rts();
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda(offsetof(G, CurrentColumnPos));
    asl();
    // <conv.chunks.Comment object at 0x100c24a10>
    // <conv.chunks.Comment object at 0x100c24b60>
    asl();
    asl();
    asl();
    rts();
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x100c24ec0>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100c25070>
    asl();
    asl();
    clc();
    adc(32);
    // <conv.chunks.Comment object at 0x100c252e0>
    rts();
    JMP(GetBlockBufferAddr);
}

int GetBlockBufferAddr() {
    pha();
    lsr();
    // <conv.chunks.Comment object at 0x100c258b0>
    // <conv.chunks.Comment object at 0x100c25970>
    lsr();
    lsr();
    lsr();
    tay();
    lda(((offsetof(G, BlockBufferAddr)) + (2)), y);
    // <conv.chunks.Comment object at 0x100c25be0>
    // <conv.chunks.Comment object at 0x100c25c70>
    sta(0x7);
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100c26000>
    clc();
    adc(offsetof(G, BlockBufferAddr), y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x100c261b0>
    // <conv.chunks.Comment object at 0x100c26330>
    rts();
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // <conv.chunks.Comment object at 0x100c26720>
    sta(offsetof(G, AreaPointer));
    JMP(GetAreaType);
}

int GetAreaType() {
    // <conv.chunks.Comment object at 0x100c26f30>
    anda(0b1100000);
    asl();
    rol();
    rol();
    rol();
    sta(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100c27260>
    // <conv.chunks.Comment object at 0x100c272f0>
    rts();
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x100c274d0>
    lda(offsetof(G, WorldAddrOffsets), y);
    clc();
    // <conv.chunks.Comment object at 0x100c27740>
    adc(offsetof(G, AreaNumber));
    tay();
    lda(offsetof(G, AreaAddrOffsets), y);
    // <conv.chunks.Comment object at 0x100c27950>
    rts();
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda(offsetof(G, AreaPointer));
    // <conv.chunks.Comment object at 0x100c27b60>
    JSR(GetAreaType);
    tay();
    lda(offsetof(G, AreaPointer));
    // <conv.chunks.Comment object at 0x100c27e00>
    anda(0b11111);
    sta(offsetof(G, AreaAddrsLOffset));
    lda(offsetof(G, EnemyAddrHOffsets), y);
    clc();
    adc(offsetof(G, AreaAddrsLOffset));
    // <conv.chunks.Comment object at 0x100c30050>
    // <conv.chunks.Comment object at 0x100c30170>
    // <conv.chunks.Comment object at 0x100c302f0>
    // <conv.chunks.Comment object at 0x100c30380>
    tay();
    lda(offsetof(G, EnemyDataAddrLow), y);
    // <conv.chunks.Comment object at 0x100c30530>
    sta(offsetof(G, EnemyDataLow));
    lda(offsetof(G, EnemyDataAddrHigh), y);
    sta(offsetof(G, EnemyDataHigh));
    ldy(offsetof(G, AreaType));
    lda(offsetof(G, AreaDataHOffsets), y);
    // <conv.chunks.Comment object at 0x100c30980>
    // <conv.chunks.Comment object at 0x100c30aa0>
    clc();
    adc(offsetof(G, AreaAddrsLOffset));
    tay();
    lda(offsetof(G, AreaDataAddrLow), y);
    // <conv.chunks.Comment object at 0x100c30e00>
    sta(offsetof(G, AreaDataLow));
    lda(offsetof(G, AreaDataAddrHigh), y);
    sta(offsetof(G, AreaDataHigh));
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100c31250>
    lda((offsetof(G, AreaData)), y);
    pha();
    anda(0b111);
    // <conv.chunks.Comment object at 0x100c314f0>
    // <conv.chunks.Comment object at 0x100c31580>
    cmp(0x4);
    BCC(StoreFore);
    sta(offsetof(G, BackgroundColorCtrl));
    // <conv.chunks.Comment object at 0x100c31880>
    lda(0x0);
    JMP(StoreFore);
}

int StoreFore() {
    // <conv.chunks.Comment object at 0x100c31a00>
    sta(offsetof(G, ForegroundScenery));
    pla();
    // <conv.chunks.Comment object at 0x100c31c10>
    pha();
    anda(0b111000);
    lsr();
    // <conv.chunks.Comment object at 0x100c31d30>
    // <conv.chunks.Comment object at 0x100c31e80>
    lsr();
    lsr();
    sta(offsetof(G, PlayerEntranceCtrl));
    pla();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x100c32030>
    // <conv.chunks.Comment object at 0x100c32180>
    // <conv.chunks.Comment object at 0x100c32210>
    clc();
    rol();
    // <conv.chunks.Comment object at 0x100c323f0>
    rol();
    rol();
    sta(offsetof(G, GameTimerSetting));
    // <conv.chunks.Comment object at 0x100c325a0>
    iny();
    lda((offsetof(G, AreaData)), y);
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100c32750>
    // <conv.chunks.Comment object at 0x100c32900>
    // <conv.chunks.Comment object at 0x100c32990>
    sta(offsetof(G, TerrainControl));
    pla();
    // <conv.chunks.Comment object at 0x100c32bd0>
    pha();
    anda(0b110000);
    // <conv.chunks.Comment object at 0x100c32cf0>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100c32ed0>
    lsr();
    lsr();
    sta(offsetof(G, BackgroundScenery));
    // <conv.chunks.Comment object at 0x100c33080>
    pla();
    anda(0b11000000);
    clc();
    rol();
    // <conv.chunks.Comment object at 0x100c333e0>
    rol();
    rol();
    cmp(0b11);
    BNE(StoreStyle);
    sta(offsetof(G, CloudTypeOverride));
    // <conv.chunks.Comment object at 0x100c33590>
    // <conv.chunks.Comment object at 0x100c336b0>
    // <conv.chunks.Comment object at 0x100c337d0>
    lda(0x0);
    JMP(StoreStyle);
}

int StoreStyle() {
    sta(offsetof(G, AreaStyle));
    lda(offsetof(G, AreaDataLow));
    // <conv.chunks.Comment object at 0x100c33b00>
    clc();
    adc(0x2);
    sta(offsetof(G, AreaDataLow));
    lda(offsetof(G, AreaDataHigh));
    adc(0x0);
    sta(offsetof(G, AreaDataHigh));
    rts();
    JMP(GameMode);
}

int GameMode() {
    lda(offsetof(G, OperMode_Task));
    JSR(JumpEngine);
    JMP(GameCoreRoutine);
}

int GameCoreRoutine() {
    ldx(offsetof(G, CurrentPlayer));
    lda(offsetof(G, SavedJoypadBits), x);
    sta(offsetof(G, SavedJoypadBits));
    JSR(GameRoutines);
    lda(offsetof(G, OperMode_Task));
    cmp(0x3);
    BCS(GameEngine);
    // <conv.chunks.Comment object at 0x100dac6e0>
    // <conv.chunks.Comment object at 0x100dac800>
    // <conv.chunks.Comment object at 0x100dac950>
    // <conv.chunks.Comment object at 0x100daca70>
    // <conv.chunks.Comment object at 0x100dacb90>
    // <conv.chunks.Comment object at 0x100daccb0>
    // <conv.chunks.Comment object at 0x100dacd40>
    rts();
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // <conv.chunks.Comment object at 0x100dacfb0>
    ldx(0x0);
    JMP(ProcELoop);
}

int ProcELoop() {
    // <conv.chunks.Comment object at 0x100dad130>
    stx(offsetof(G, ObjectOffset));
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // <conv.chunks.Comment object at 0x100dad310>
    // <conv.chunks.Comment object at 0x100dad430>
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x100dad5e0>
    BNE(ProcELoop);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    JSR(PlayerGfxHandler);
    JSR(BlockObjMT_Updater);
    // <conv.chunks.Comment object at 0x100dad7f0>
    // <conv.chunks.Comment object at 0x100dad910>
    // <conv.chunks.Comment object at 0x100dada30>
    // <conv.chunks.Comment object at 0x100dadb50>
    ldx(0x1);
    stx(offsetof(G, ObjectOffset));
    JSR(BlockObjectsCore);
    // <conv.chunks.Comment object at 0x100dadcd0>
    // <conv.chunks.Comment object at 0x100dade80>
    dex();
    stx(offsetof(G, ObjectOffset));
    JSR(BlockObjectsCore);
    JSR(MiscObjectsCore);
    JSR(ProcessCannons);
    JSR(ProcessWhirlpools);
    JSR(FlagpoleRoutine);
    JSR(RunGameTimer);
    JSR(ColorRotation);
    // <conv.chunks.Comment object at 0x100dae030>
    // <conv.chunks.Comment object at 0x100dae150>
    // <conv.chunks.Comment object at 0x100dae270>
    // <conv.chunks.Comment object at 0x100dae390>
    // <conv.chunks.Comment object at 0x100dae4b0>
    // <conv.chunks.Comment object at 0x100dae5d0>
    // <conv.chunks.Comment object at 0x100dae6f0>
    // <conv.chunks.Comment object at 0x100dae810>
    lda(offsetof(G, Player_Y_HighPos));
    cmp(0x2);
    // <conv.chunks.Comment object at 0x100daea20>
    BPL(NoChgMus);
    lda(offsetof(G, StarInvincibleTimer));
    BEQ(ClrPlrPal);
    // <conv.chunks.Comment object at 0x100daec30>
    // <conv.chunks.Comment object at 0x100daed50>
    cmp(0x4);
    BNE(NoChgMus);
    lda(offsetof(G, IntervalTimerControl));
    BNE(NoChgMus);
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}

int NoChgMus() {
    // <conv.chunks.Comment object at 0x100daeed0>
    // <conv.chunks.Comment object at 0x100daf080>
    // <conv.chunks.Comment object at 0x100daf1a0>
    // <conv.chunks.Comment object at 0x100daf2c0>
    // <conv.chunks.Comment object at 0x100daf3e0>
    ldy(offsetof(G, StarInvincibleTimer));
    lda(offsetof(G, FrameCounter));
    cpy(0x8);
    BCS(CycleTwo);
    lsr();
    // <conv.chunks.Comment object at 0x100daf530>
    // <conv.chunks.Comment object at 0x100daf650>
    // <conv.chunks.Comment object at 0x100daf6e0>
    // <conv.chunks.Comment object at 0x100daf8c0>
    lsr();
    JMP(CycleTwo);
}

int CycleTwo() {
    // <conv.chunks.Comment object at 0x100daf9e0>
    lsr();
    JSR(CyclePlayerPalette);
    JMP(SaveAB);
    JMP(ClrPlrPal);
}

int ClrPlrPal() {
    // <conv.chunks.Comment object at 0x100dafad0>
    // <conv.chunks.Comment object at 0x100dafbf0>
    // <conv.chunks.Comment object at 0x100dafd40>
    JSR(ResetPalStar);
    JMP(SaveAB);
}

int SaveAB() {
    // <conv.chunks.Comment object at 0x100dafe90>
    lda(offsetof(G, A_B_Buttons));
    sta(offsetof(G, PreviousA_B_Buttons));
    // <conv.chunks.Comment object at 0x100db8050>
    lda(0x0);
    sta(offsetof(G, Left_Right_Buttons));
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda(offsetof(G, VRAM_Buffer_AddrCtrl));
    cmp(0x6);
    BEQ(ExitEng);
    lda(offsetof(G, AreaParserTaskNum));
    // <conv.chunks.Comment object at 0x100db84a0>
    // <conv.chunks.Comment object at 0x100db8530>
    // <conv.chunks.Comment object at 0x100db8710>
    BNE(RunParser);
    lda(offsetof(G, ScrollThirtyTwo));
    cmp(0x20);
    BMI(ExitEng);
    // <conv.chunks.Comment object at 0x100db8920>
    // <conv.chunks.Comment object at 0x100db8a40>
    // <conv.chunks.Comment object at 0x100db8ad0>
    lda(offsetof(G, ScrollThirtyTwo));
    sbc(0x20);
    sta(offsetof(G, ScrollThirtyTwo));
    lda(0x0);
    sta(offsetof(G, VRAM_Buffer2_Offset));
    JMP(RunParser);
}

int RunParser() {
    // <conv.chunks.Comment object at 0x100db8da0>
    // <conv.chunks.Comment object at 0x100db8e30>
    // <conv.chunks.Comment object at 0x100db8fe0>
    // <conv.chunks.Comment object at 0x100db9070>
    // <conv.chunks.Comment object at 0x100db9220>
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}

int ExitEng() {
    // <conv.chunks.Comment object at 0x100db9370>
    rts();
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda(offsetof(G, Player_X_Scroll));
    // <conv.chunks.Comment object at 0x100db94f0>
    clc();
    adc(offsetof(G, Platform_X_Scroll));
    sta(offsetof(G, Player_X_Scroll));
    lda(offsetof(G, ScrollLock));
    BNE(InitScrlAmt);
    // <conv.chunks.Comment object at 0x100db96a0>
    // <conv.chunks.Comment object at 0x100db97c0>
    // <conv.chunks.Comment object at 0x100db98e0>
    // <conv.chunks.Comment object at 0x100db9a00>
    lda(offsetof(G, Player_Pos_ForScroll));
    cmp(0x50);
    BCC(InitScrlAmt);
    lda(offsetof(G, SideCollisionTimer));
    BNE(InitScrlAmt);
    ldy(offsetof(G, Player_X_Scroll));
    dey();
    BMI(InitScrlAmt);
    // <conv.chunks.Comment object at 0x100db9c10>
    // <conv.chunks.Comment object at 0x100db9ca0>
    // <conv.chunks.Comment object at 0x100db9e50>
    // <conv.chunks.Comment object at 0x100db9f70>
    // <conv.chunks.Comment object at 0x100dba090>
    // <conv.chunks.Comment object at 0x100dba1e0>
    // <conv.chunks.Comment object at 0x100dba270>
    iny();
    cpy(0x2);
    // <conv.chunks.Comment object at 0x100dba420>
    BCC(ChkNearMid);
    dey();
    JMP(ChkNearMid);
}

int ChkNearMid() {
    lda(offsetof(G, Player_Pos_ForScroll));
    cmp(0x70);
    BCC(ScrollScreen);
    ldy(offsetof(G, Player_X_Scroll));
    JMP(ScrollScreen);
}

int ScrollScreen() {
    tya();
    sta(offsetof(G, ScrollAmount));
    // <conv.chunks.Comment object at 0x100dbac30>
    clc();
    adc(offsetof(G, ScrollThirtyTwo));
    sta(offsetof(G, ScrollThirtyTwo));
    // <conv.chunks.Comment object at 0x100dbade0>
    // <conv.chunks.Comment object at 0x100dbaf00>
    tya();
    clc();
    adc(offsetof(G, ScreenLeft_X_Pos));
    sta(offsetof(G, ScreenLeft_X_Pos));
    sta(offsetof(G, HorizontalScroll));
    // <conv.chunks.Comment object at 0x100dbb140>
    // <conv.chunks.Comment object at 0x100dbb260>
    // <conv.chunks.Comment object at 0x100dbb380>
    lda(offsetof(G, ScreenLeft_PageLoc));
    adc(0x0);
    sta(offsetof(G, ScreenLeft_PageLoc));
    anda(0x1);
    sta(0x0);
    lda(offsetof(G, Mirror_PPU_CTRL_REG1));
    anda(0b11111110);
    ora(0x0);
    sta(offsetof(G, Mirror_PPU_CTRL_REG1));
    JSR(GetScreenPosition);
    // <conv.chunks.Comment object at 0x100dbb590>
    // <conv.chunks.Comment object at 0x100dbb620>
    // <conv.chunks.Comment object at 0x100dbb7d0>
    // <conv.chunks.Comment object at 0x100dbb920>
    // <conv.chunks.Comment object at 0x100dbb9b0>
    // <conv.chunks.Comment object at 0x100dbbb30>
    // <conv.chunks.Comment object at 0x100dbbc80>
    // <conv.chunks.Comment object at 0x100dbbd10>
    // <conv.chunks.Comment object at 0x100dbbe90>
    lda(0x8);
    sta(offsetof(G, ScrollIntervalTimer));
    JMP(ChkPOffscr);
    JMP(InitScrlAmt);
}

int InitScrlAmt() {
    lda(0x0);
    sta(offsetof(G, ScrollAmount));
    JMP(ChkPOffscr);
}

int ChkPOffscr() {
    // <conv.chunks.Comment object at 0x100dc03b0>
    // <conv.chunks.Comment object at 0x100dc0560>
    ldx(0x0);
    JSR(GetXOffscreenBits);
    sta(0x0);
    ldy(0x0);
    asl();
    BCS(KeepOnscr);
    iny();
    // <conv.chunks.Comment object at 0x100dc0620>
    // <conv.chunks.Comment object at 0x100dc0800>
    // <conv.chunks.Comment object at 0x100dc0890>
    // <conv.chunks.Comment object at 0x100dc0a40>
    // <conv.chunks.Comment object at 0x100dc0ad0>
    // <conv.chunks.Comment object at 0x100dc0c20>
    lda(0x0);
    anda(0b100000);
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // <conv.chunks.Comment object at 0x100dc0cb0>
    // <conv.chunks.Comment object at 0x100dc0ec0>
    // <conv.chunks.Comment object at 0x100dc0fe0>
    lda(offsetof(G, ScreenEdge_X_Pos), y);
    sec();
    sbc(offsetof(G, X_SubtracterData), y);
    sta(offsetof(G, Player_X_Position));
    lda(offsetof(G, ScreenEdge_PageLoc), y);
    sbc(0x0);
    sta(offsetof(G, Player_PageLoc));
    lda(offsetof(G, Left_Right_Buttons));
    cmp(offsetof(G, OffscrJoypadBitsData), y);
    BEQ(InitPlatScrl);
    // <conv.chunks.Comment object at 0x100dc11f0>
    // <conv.chunks.Comment object at 0x100dc1340>
    // <conv.chunks.Comment object at 0x100dc1460>
    // <conv.chunks.Comment object at 0x100dc15b0>
    // <conv.chunks.Comment object at 0x100dc1640>
    // <conv.chunks.Comment object at 0x100dc17f0>
    // <conv.chunks.Comment object at 0x100dc1910>
    // <conv.chunks.Comment object at 0x100dc1a60>
    lda(0x0);
    sta(offsetof(G, Player_X_Speed));
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // <conv.chunks.Comment object at 0x100dc1be0>
    // <conv.chunks.Comment object at 0x100dc1d90>
    lda(0x0);
    sta(offsetof(G, Platform_X_Scroll));
    rts();
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda(offsetof(G, ScreenLeft_X_Pos));
    // <conv.chunks.Comment object at 0x100dc20f0>
    clc();
    adc(0xff);
    sta(offsetof(G, ScreenRight_X_Pos));
    lda(offsetof(G, ScreenLeft_PageLoc));
    adc(0x0);
    sta(offsetof(G, ScreenRight_PageLoc));
    // <conv.chunks.Comment object at 0x100dc2510>
    // <conv.chunks.Comment object at 0x100dc25a0>
    // <conv.chunks.Comment object at 0x100dc2750>
    // <conv.chunks.Comment object at 0x100dc2870>
    // <conv.chunks.Comment object at 0x100dc2900>
    rts();
    JMP(GameRoutines);
}

int GameRoutines() {
    lda(offsetof(G, GameEngineSubroutine));
    JSR(JumpEngine);
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda(offsetof(G, AltEntranceControl));
    // <conv.chunks.Comment object at 0x100dc3590>
    cmp(0x2);
    BEQ(EntrMode2);
    // <conv.chunks.Comment object at 0x100dc3710>
    lda(0x0);
    ldy(offsetof(G, Player_Y_Position));
    cpy(0x30);
    BCC(AutoControlPlayer);
    lda(offsetof(G, PlayerEntranceCtrl));
    // <conv.chunks.Comment object at 0x100dc3920>
    // <conv.chunks.Comment object at 0x100dc3ad0>
    // <conv.chunks.Comment object at 0x100dc3b60>
    // <conv.chunks.Comment object at 0x100dc3d10>
    cmp(0x6);
    BEQ(ChkBehPipe);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x100dc3e90>
    // <conv.chunks.Comment object at 0x100dd0080>
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // <conv.chunks.Comment object at 0x100dd0290>
    lda(offsetof(G, Player_SprAttrib));
    BNE(IntroEntr);
    // <conv.chunks.Comment object at 0x100dd03e0>
    lda(0x1);
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // <conv.chunks.Comment object at 0x100dd0560>
    // <conv.chunks.Comment object at 0x100dd0710>
    JSR(EnterSidePipe);
    dec(offsetof(G, ChangeAreaTimer));
    BNE(ExitEntr);
    inc(offsetof(G, DisableIntermediate));
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // <conv.chunks.Comment object at 0x100dd0860>
    // <conv.chunks.Comment object at 0x100dd0980>
    // <conv.chunks.Comment object at 0x100dd0aa0>
    // <conv.chunks.Comment object at 0x100dd0bc0>
    // <conv.chunks.Comment object at 0x100dd0ce0>
    lda(offsetof(G, JoypadOverride));
    BNE(VineEntr);
    lda(0xff);
    JSR(MovePlayerYAxis);
    lda(offsetof(G, Player_Y_Position));
    cmp(0x91);
    BCC(PlayerRdy);
    rts();
    JMP(VineEntr);
}

int VineEntr() {
    lda(offsetof(G, VineHeight));
    cmp(0x60);
    BNE(ExitEntr);
    lda(offsetof(G, Player_Y_Position));
    cmp(0x99);
    ldy(0x0);
    lda(0x1);
    BCC(OffVine);
    // <conv.chunks.Comment object at 0x100dd16d0>
    // <conv.chunks.Comment object at 0x100dd1760>
    // <conv.chunks.Comment object at 0x100dd1910>
    // <conv.chunks.Comment object at 0x100dd1a30>
    // <conv.chunks.Comment object at 0x100dd1ac0>
    // <conv.chunks.Comment object at 0x100dd1be0>
    // <conv.chunks.Comment object at 0x100dd1d00>
    lda(0x3);
    sta(offsetof(G, Player_State));
    iny();
    lda(0x8);
    sta(((offsetof(G, Block_Buffer_1)) + (0xb4)));
    JMP(OffVine);
}

int OffVine() {
    // <conv.chunks.Comment object at 0x100dd1f40>
    // <conv.chunks.Comment object at 0x100dd2120>
    // <conv.chunks.Comment object at 0x100dd21b0>
    // <conv.chunks.Comment object at 0x100dd2240>
    // <conv.chunks.Comment object at 0x100dd24b0>
    sty(offsetof(G, DisableCollisionDet));
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x100dd2630>
    lda(offsetof(G, Player_X_Position));
    cmp(0x48);
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // <conv.chunks.Comment object at 0x100dd2840>
    // <conv.chunks.Comment object at 0x100dd28d0>
    // <conv.chunks.Comment object at 0x100dd2a80>
    lda(0x8);
    sta(offsetof(G, GameEngineSubroutine));
    lda(0x1);
    // <conv.chunks.Comment object at 0x100dd2cc0>
    sta(offsetof(G, PlayerFacingDir));
    lsr();
    sta(offsetof(G, AltEntranceControl));
    sta(offsetof(G, DisableCollisionDet));
    sta(offsetof(G, JoypadOverride));
    JMP(ExitEntr);
}

int ExitEntr() {
    // <conv.chunks.Comment object at 0x100dd2f30>
    // <conv.chunks.Comment object at 0x100dd2fc0>
    // <conv.chunks.Comment object at 0x100dd30e0>
    // <conv.chunks.Comment object at 0x100dd3200>
    // <conv.chunks.Comment object at 0x100dd3350>
    rts();
    JMP(AutoControlPlayer);
}

int AutoControlPlayer() {
    sta(offsetof(G, SavedJoypadBits));
    JMP(PlayerCtrlRoutine);
}

int PlayerCtrlRoutine() {
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0xb);
    // <conv.chunks.Comment object at 0x100dd3620>
    // <conv.chunks.Comment object at 0x100dd3740>
    BEQ(SizeChk);
    lda(offsetof(G, AreaType));
    BNE(SaveJoyp);
    // <conv.chunks.Comment object at 0x100dd3980>
    // <conv.chunks.Comment object at 0x100dd3aa0>
    ldy(offsetof(G, Player_Y_HighPos));
    dey();
    BNE(DisJoyp);
    // <conv.chunks.Comment object at 0x100dd3ce0>
    // <conv.chunks.Comment object at 0x100dd3d70>
    lda(offsetof(G, Player_Y_Position));
    cmp(0xd0);
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // <conv.chunks.Comment object at 0x100dd3fb0>
    // <conv.chunks.Comment object at 0x100ddc080>
    // <conv.chunks.Comment object at 0x100ddc230>
    lda(0x0);
    sta(offsetof(G, SavedJoypadBits));
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // <conv.chunks.Comment object at 0x100ddc4a0>
    lda(offsetof(G, SavedJoypadBits));
    anda(0b11000000);
    sta(offsetof(G, A_B_Buttons));
    lda(offsetof(G, SavedJoypadBits));
    // <conv.chunks.Comment object at 0x100ddc7d0>
    anda(0b11);
    sta(offsetof(G, Left_Right_Buttons));
    lda(offsetof(G, SavedJoypadBits));
    // <conv.chunks.Comment object at 0x100ddcad0>
    anda(0b1100);
    sta(offsetof(G, Up_Down_Buttons));
    anda(0b100);
    BEQ(SizeChk);
    lda(offsetof(G, Player_State));
    BNE(SizeChk);
    ldy(offsetof(G, Left_Right_Buttons));
    BEQ(SizeChk);
    // <conv.chunks.Comment object at 0x100ddcdd0>
    // <conv.chunks.Comment object at 0x100ddcef0>
    // <conv.chunks.Comment object at 0x100ddd040>
    // <conv.chunks.Comment object at 0x100ddd160>
    // <conv.chunks.Comment object at 0x100ddd2b0>
    // <conv.chunks.Comment object at 0x100ddd3d0>
    lda(0x0);
    sta(offsetof(G, Left_Right_Buttons));
    sta(offsetof(G, Up_Down_Buttons));
    JMP(SizeChk);
}

int SizeChk() {
    // <conv.chunks.Comment object at 0x100ddd580>
    // <conv.chunks.Comment object at 0x100ddd730>
    // <conv.chunks.Comment object at 0x100ddd850>
    JSR(PlayerMovementSubs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x100ddd9d0>
    lda(offsetof(G, PlayerSize));
    BNE(ChkMoveDir);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100dddcd0>
    lda(offsetof(G, CrouchingFlag));
    BEQ(ChkMoveDir);
    ldy(0x2);
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // <conv.chunks.Comment object at 0x100dddee0>
    // <conv.chunks.Comment object at 0x100dde000>
    // <conv.chunks.Comment object at 0x100dde090>
    sty(offsetof(G, Player_BoundBoxCtrl));
    lda(0x1);
    ldy(offsetof(G, Player_X_Speed));
    BEQ(PlayerSubs);
    BPL(SetMoveDir);
    asl();
    JMP(SetMoveDir);
}

int SetMoveDir() {
    // <conv.chunks.Comment object at 0x100dde270>
    // <conv.chunks.Comment object at 0x100dde300>
    // <conv.chunks.Comment object at 0x100dde4b0>
    // <conv.chunks.Comment object at 0x100dde5d0>
    // <conv.chunks.Comment object at 0x100dde720>
    // <conv.chunks.Comment object at 0x100dde7b0>
    sta(offsetof(G, Player_MovingDir));
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // <conv.chunks.Comment object at 0x100dde900>
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(0x0);
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // <conv.chunks.Comment object at 0x100ddea50>
    // <conv.chunks.Comment object at 0x100ddeb70>
    // <conv.chunks.Comment object at 0x100ddec90>
    // <conv.chunks.Comment object at 0x100dded20>
    // <conv.chunks.Comment object at 0x100ddeed0>
    lda(offsetof(G, Player_Y_Position));
    cmp(0x40);
    BCC(PlayerHole);
    // <conv.chunks.Comment object at 0x100ddf0e0>
    // <conv.chunks.Comment object at 0x100ddf170>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x5);
    // <conv.chunks.Comment object at 0x100ddf410>
    BEQ(PlayerHole);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x100ddf620>
    BEQ(PlayerHole);
    cmp(0x4);
    // <conv.chunks.Comment object at 0x100ddf830>
    BCC(PlayerHole);
    lda(offsetof(G, Player_SprAttrib));
    anda(0b11011111);
    sta(offsetof(G, Player_SprAttrib));
    JMP(PlayerHole);
}

int PlayerHole() {
    // <conv.chunks.Comment object at 0x100ddfb30>
    // <conv.chunks.Comment object at 0x100ddfc50>
    // <conv.chunks.Comment object at 0x100ddfd70>
    lda(offsetof(G, Player_Y_HighPos));
    cmp(0x2);
    BMI(ExitCtrl);
    // <conv.chunks.Comment object at 0x100ddfec0>
    // <conv.chunks.Comment object at 0x100ddff50>
    ldx(0x1);
    stx(offsetof(G, ScrollLock));
    // <conv.chunks.Comment object at 0x100de41a0>
    ldy(0x4);
    sty(0x7);
    ldx(0x0);
    ldy(offsetof(G, GameTimerExpiredFlag));
    BNE(HoleDie);
    ldy(offsetof(G, CloudTypeOverride));
    BNE(ChkHoleX);
    JMP(HoleDie);
}

int HoleDie() {
    // <conv.chunks.Comment object at 0x100de4470>
    // <conv.chunks.Comment object at 0x100de4500>
    // <conv.chunks.Comment object at 0x100de45f0>
    // <conv.chunks.Comment object at 0x100de47a0>
    // <conv.chunks.Comment object at 0x100de48f0>
    // <conv.chunks.Comment object at 0x100de4a10>
    // <conv.chunks.Comment object at 0x100de4b30>
    inx();
    ldy(offsetof(G, GameEngineSubroutine));
    cpy(0xb);
    BEQ(ChkHoleX);
    ldy(offsetof(G, DeathMusicLoaded));
    BNE(HoleBottom);
    // <conv.chunks.Comment object at 0x100de4d40>
    // <conv.chunks.Comment object at 0x100de4dd0>
    // <conv.chunks.Comment object at 0x100de4f80>
    // <conv.chunks.Comment object at 0x100de50a0>
    iny();
    sty(offsetof(G, EventMusicQueue));
    sty(offsetof(G, DeathMusicLoaded));
    JMP(HoleBottom);
}

int HoleBottom() {
    ldy(0x6);
    sty(0x7);
    JMP(ChkHoleX);
}

int ChkHoleX() {
    // <conv.chunks.Comment object at 0x100de55e0>
    // <conv.chunks.Comment object at 0x100de5670>
    cmp(0x7);
    BMI(ExitCtrl);
    dex();
    BMI(CloudExit);
    ldy(offsetof(G, EventMusicBuffer));
    BNE(ExitCtrl);
    lda(0x6);
    sta(offsetof(G, GameEngineSubroutine));
    JMP(ExitCtrl);
}

int ExitCtrl() {
    // <conv.chunks.Comment object at 0x100de57c0>
    // <conv.chunks.Comment object at 0x100de5970>
    // <conv.chunks.Comment object at 0x100de5a00>
    // <conv.chunks.Comment object at 0x100de5b20>
    // <conv.chunks.Comment object at 0x100de5c40>
    // <conv.chunks.Comment object at 0x100de5d60>
    // <conv.chunks.Comment object at 0x100de5df0>
    // <conv.chunks.Comment object at 0x100de5fd0>
    rts();
    JMP(CloudExit);
}

int CloudExit() {
    lda(0x0);
    sta(offsetof(G, JoypadOverride));
    JSR(SetEntr);
    inc(offsetof(G, AltEntranceControl));
    // <conv.chunks.Comment object at 0x100de6150>
    // <conv.chunks.Comment object at 0x100de6300>
    // <conv.chunks.Comment object at 0x100de6450>
    rts();
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda(offsetof(G, Player_Y_HighPos));
    BNE(AutoClimb);
    // <conv.chunks.Comment object at 0x100de6660>
    // <conv.chunks.Comment object at 0x100de6780>
    lda(offsetof(G, Player_Y_Position));
    cmp(0xe4);
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // <conv.chunks.Comment object at 0x100de6ba0>
    lda(0b1000);
    sta(offsetof(G, JoypadOverride));
    ldy(0x3);
    // <conv.chunks.Comment object at 0x100de6de0>
    sty(offsetof(G, Player_State));
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // <conv.chunks.Comment object at 0x100de70e0>
    lda(0x2);
    sta(offsetof(G, AltEntranceControl));
    JMP(ChgAreaMode);
    JMP(VerticalPipeEntry);
}

int VerticalPipeEntry() {
    lda(0x1);
    JSR(MovePlayerYAxis);
    JSR(ScrollHandler);
    ldy(0x0);
    lda(offsetof(G, WarpZoneControl));
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x100de74d0>
    // <conv.chunks.Comment object at 0x100de7560>
    // <conv.chunks.Comment object at 0x100de7710>
    // <conv.chunks.Comment object at 0x100de7830>
    // <conv.chunks.Comment object at 0x100de78c0>
    // <conv.chunks.Comment object at 0x100de7a70>
    iny();
    lda(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100de7c20>
    cmp(0x3);
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x100de7da0>
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x100df0200>
    sta(offsetof(G, Player_Y_Position));
    rts();
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // <conv.chunks.Comment object at 0x100df0500>
    ldy(0x2);
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // <conv.chunks.Comment object at 0x100df0680>
    dec(offsetof(G, ChangeAreaTimer));
    BNE(ExitCAPipe);
    sty(offsetof(G, AltEntranceControl));
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // <conv.chunks.Comment object at 0x100df0950>
    // <conv.chunks.Comment object at 0x100df0a70>
    inc(offsetof(G, DisableScreenFlag));
    lda(0x0);
    sta(offsetof(G, OperMode_Task));
    sta(offsetof(G, Sprite0HitDetectFlag));
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // <conv.chunks.Comment object at 0x100df0c20>
    // <conv.chunks.Comment object at 0x100df0dd0>
    // <conv.chunks.Comment object at 0x100df0f20>
    rts();
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x100df1040>
    sta(offsetof(G, Player_X_Speed));
    ldy(0x1);
    lda(offsetof(G, Player_X_Position));
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100df1250>
    // <conv.chunks.Comment object at 0x100df12e0>
    // <conv.chunks.Comment object at 0x100df1490>
    BNE(RightPipe);
    sta(offsetof(G, Player_X_Speed));
    tay();
    JMP(RightPipe);
}

int RightPipe() {
    // <conv.chunks.Comment object at 0x100df16a0>
    // <conv.chunks.Comment object at 0x100df17f0>
    // <conv.chunks.Comment object at 0x100df1880>
    tya();
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x100df1970>
    rts();
    JMP(PlayerChangeSize);
}

int PlayerChangeSize() {
    lda(offsetof(G, TimerControl));
    cmp(0xf8);
    BNE(EndChgSize);
    JMP(InitChangeSize);
    JMP(EndChgSize);
}

int EndChgSize() {
    // <conv.chunks.Comment object at 0x100df1b80>
    // <conv.chunks.Comment object at 0x100df1ca0>
    // <conv.chunks.Comment object at 0x100df1d30>
    // <conv.chunks.Comment object at 0x100df1ee0>
    // <conv.chunks.Comment object at 0x100df2000>
    cmp(0xc4);
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // <conv.chunks.Comment object at 0x100df20c0>
    // <conv.chunks.Comment object at 0x100df2270>
    // <conv.chunks.Comment object at 0x100df2390>
    rts();
    JMP(PlayerInjuryBlink);
}

int PlayerInjuryBlink() {
    lda(offsetof(G, TimerControl));
    cmp(0xf0);
    BCS(ExitBlink);
    cmp(0xc8);
    BEQ(DonePlayerTask);
    JMP(PlayerCtrlRoutine);
    JMP(ExitBlink);
}

int ExitBlink() {
    // <conv.chunks.Comment object at 0x100df24e0>
    // <conv.chunks.Comment object at 0x100df2600>
    // <conv.chunks.Comment object at 0x100df2690>
    // <conv.chunks.Comment object at 0x100df2840>
    // <conv.chunks.Comment object at 0x100df28d0>
    // <conv.chunks.Comment object at 0x100df2a80>
    // <conv.chunks.Comment object at 0x100df2ba0>
    BNE(ExitBoth);
    JMP(InitChangeSize);
}

int InitChangeSize() {
    ldy(offsetof(G, PlayerChangeSizeFlag));
    BNE(ExitBoth);
    sty(offsetof(G, PlayerAnimCtrl));
    inc(offsetof(G, PlayerChangeSizeFlag));
    // <conv.chunks.Comment object at 0x100df2d20>
    // <conv.chunks.Comment object at 0x100df2e40>
    // <conv.chunks.Comment object at 0x100df2f60>
    // <conv.chunks.Comment object at 0x100df3080>
    lda(offsetof(G, PlayerSize));
    eor(0x1);
    // <conv.chunks.Comment object at 0x100df3290>
    sta(offsetof(G, PlayerSize));
    JMP(ExitBoth);
}

int ExitBoth() {
    // <conv.chunks.Comment object at 0x100df34d0>
    rts();
    JMP(PlayerDeath);
}

int PlayerDeath() {
    lda(offsetof(G, TimerControl));
    cmp(0xf0);
    BCS(ExitDeath);
    JMP(PlayerCtrlRoutine);
    JMP(DonePlayerTask);
}

int DonePlayerTask() {
    lda(0x0);
    sta(offsetof(G, TimerControl));
    // <conv.chunks.Comment object at 0x100df3b60>
    lda(0x8);
    sta(offsetof(G, GameEngineSubroutine));
    rts();
    JMP(PlayerFireFlower);
}

int PlayerFireFlower() {
    lda(offsetof(G, TimerControl));
    cmp(0xc0);
    BEQ(ResetPalFireFlower);
    lda(offsetof(G, FrameCounter));
    // <conv.chunks.Comment object at 0x100df8080>
    // <conv.chunks.Comment object at 0x100df81a0>
    // <conv.chunks.Comment object at 0x100df8230>
    // <conv.chunks.Comment object at 0x100df83e0>
    lsr();
    lsr();
    JMP(CyclePlayerPalette);
}

int CyclePlayerPalette() {
    anda(0x3);
    sta(0x0);
    lda(offsetof(G, Player_SprAttrib));
    anda(0b11111100);
    ora(0x0);
    sta(offsetof(G, Player_SprAttrib));
    rts();
    JMP(ResetPalFireFlower);
}

int ResetPalFireFlower() {
    JSR(DonePlayerTask);
    JMP(ResetPalStar);
}

int ResetPalStar() {
    lda(offsetof(G, Player_SprAttrib));
    anda(0b11111100);
    sta(offsetof(G, Player_SprAttrib));
    rts();
    JMP(ExitDeath);
}

int ExitDeath() {
    rts();
    JMP(FlagpoleSlide);
}

int FlagpoleSlide() {
    lda(((offsetof(G, Enemy_ID)) + (5)));
    cmp(offsetof(G, FlagpoleFlagObject));
    BNE(NoFPObj);
    lda(offsetof(G, FlagpoleSoundQueue));
    sta(offsetof(G, Square1SoundQueue));
    // <conv.chunks.Comment object at 0x100df94f0>
    // <conv.chunks.Comment object at 0x100df96d0>
    // <conv.chunks.Comment object at 0x100df97f0>
    // <conv.chunks.Comment object at 0x100df9940>
    // <conv.chunks.Comment object at 0x100df9a60>
    lda(0x0);
    sta(offsetof(G, FlagpoleSoundQueue));
    // <conv.chunks.Comment object at 0x100df9be0>
    ldy(offsetof(G, Player_Y_Position));
    cpy(0x9e);
    BCS(SlidePlayer);
    lda(0x4);
    JMP(SlidePlayer);
}

int SlidePlayer() {
    // <conv.chunks.Comment object at 0x100df9e80>
    // <conv.chunks.Comment object at 0x100df9f10>
    // <conv.chunks.Comment object at 0x100dfa0c0>
    // <conv.chunks.Comment object at 0x100dfa150>
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}

int NoFPObj() {
    // <conv.chunks.Comment object at 0x100dfa330>
    inc(offsetof(G, GameEngineSubroutine));
    rts();
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x100dfa630>
    JSR(AutoControlPlayer);
    lda(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x100dfac90>
    cmp(0xae);
    BCC(ChkStop);
    lda(offsetof(G, ScrollLock));
    BEQ(ChkStop);
    // <conv.chunks.Comment object at 0x100dfae10>
    // <conv.chunks.Comment object at 0x100dfaff0>
    // <conv.chunks.Comment object at 0x100dfb110>
    lda(offsetof(G, EndOfLevelMusic));
    sta(offsetof(G, EventMusicQueue));
    // <conv.chunks.Comment object at 0x100dfb350>
    lda(0x0);
    sta(offsetof(G, ScrollLock));
    JMP(ChkStop);
}

int ChkStop() {
    // <conv.chunks.Comment object at 0x100dfb4d0>
    // <conv.chunks.Comment object at 0x100dfb680>
    lda(offsetof(G, Player_CollisionBits));
    lsr();
    BCS(RdyNextA);
    lda(offsetof(G, StarFlagTaskControl));
    BNE(InCastle);
    inc(offsetof(G, StarFlagTaskControl));
    JMP(InCastle);
}

int InCastle() {
    // <conv.chunks.Comment object at 0x100dfb830>
    // <conv.chunks.Comment object at 0x100dfb8c0>
    // <conv.chunks.Comment object at 0x100dfb9e0>
    // <conv.chunks.Comment object at 0x100dfbb00>
    // <conv.chunks.Comment object at 0x100dfbc20>
    // <conv.chunks.Comment object at 0x100dfbd40>
    lda(0b100000);
    sta(offsetof(G, Player_SprAttrib));
    JMP(RdyNextA);
}

int RdyNextA() {
    lda(offsetof(G, StarFlagTaskControl));
    cmp(0x5);
    BNE(ExitNA);
    inc(offsetof(G, LevelNumber));
    // <conv.chunks.Comment object at 0x100e08110>
    // <conv.chunks.Comment object at 0x100e081a0>
    // <conv.chunks.Comment object at 0x100e08380>
    lda(offsetof(G, LevelNumber));
    cmp(0x3);
    BNE(NextArea);
    ldy(offsetof(G, WorldNumber));
    lda(offsetof(G, CoinTallyFor1Ups));
    cmp(offsetof(G, Hidden1UpCoinAmts), y);
    BCC(NextArea);
    inc(offsetof(G, Hidden1UpFlag));
    JMP(NextArea);
}

int NextArea() {
    // <conv.chunks.Comment object at 0x100e08590>
    // <conv.chunks.Comment object at 0x100e08620>
    // <conv.chunks.Comment object at 0x100e087d0>
    // <conv.chunks.Comment object at 0x100e088f0>
    // <conv.chunks.Comment object at 0x100e08a10>
    // <conv.chunks.Comment object at 0x100e08b60>
    // <conv.chunks.Comment object at 0x100e08c80>
    // <conv.chunks.Comment object at 0x100e08da0>
    inc(offsetof(G, AreaNumber));
    JSR(LoadAreaPointer);
    inc(offsetof(G, FetchNewGameTimerFlag));
    JSR(ChgAreaMode);
    sta(offsetof(G, HalfwayPage));
    // <conv.chunks.Comment object at 0x100e08ef0>
    // <conv.chunks.Comment object at 0x100e09010>
    // <conv.chunks.Comment object at 0x100e09130>
    // <conv.chunks.Comment object at 0x100e09250>
    lda(offsetof(G, Silence));
    sta(offsetof(G, EventMusicQueue));
    JMP(ExitNA);
}

int ExitNA() {
    rts();
    JMP(PlayerMovementSubs);
}

int PlayerMovementSubs() {
    lda(0x0);
    ldy(offsetof(G, PlayerSize));
    BNE(SetCrouch);
    lda(offsetof(G, Player_State));
    BNE(ProcMove);
    lda(offsetof(G, Up_Down_Buttons));
    anda(0b100);
    JMP(SetCrouch);
}

int SetCrouch() {
    // <conv.chunks.Comment object at 0x100e09700>
    // <conv.chunks.Comment object at 0x100e09790>
    // <conv.chunks.Comment object at 0x100e09940>
    // <conv.chunks.Comment object at 0x100e09a60>
    // <conv.chunks.Comment object at 0x100e09b80>
    // <conv.chunks.Comment object at 0x100e09ca0>
    // <conv.chunks.Comment object at 0x100e09dc0>
    // <conv.chunks.Comment object at 0x100e09ee0>
    sta(offsetof(G, CrouchingFlag));
    JMP(ProcMove);
}

int ProcMove() {
    // <conv.chunks.Comment object at 0x100e0a030>
    JSR(PlayerPhysicsSub);
    lda(offsetof(G, PlayerChangeSizeFlag));
    BNE(NoMoveSub);
    // <conv.chunks.Comment object at 0x100e0a180>
    // <conv.chunks.Comment object at 0x100e0a2a0>
    lda(offsetof(G, Player_State));
    cmp(0x3);
    BEQ(MoveSubs);
    // <conv.chunks.Comment object at 0x100e0a4b0>
    // <conv.chunks.Comment object at 0x100e0a540>
    ldy(0x18);
    sty(offsetof(G, ClimbSideTimer));
    JMP(MoveSubs);
}

int MoveSubs() {
    JSR(JumpEngine);
    JMP(NoMoveSub);
}

int NoMoveSub() {
    rts();
    JMP(OnGroundStateSub);
}

int OnGroundStateSub() {
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x100e0ad50>
    // <conv.chunks.Comment object at 0x100e0adb0>
    lda(offsetof(G, Left_Right_Buttons));
    BEQ(GndMove);
    sta(offsetof(G, PlayerFacingDir));
    JMP(GndMove);
}

int GndMove() {
    // <conv.chunks.Comment object at 0x100e0afc0>
    // <conv.chunks.Comment object at 0x100e0b110>
    // <conv.chunks.Comment object at 0x100e0b230>
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta(offsetof(G, Player_X_Scroll));
    // <conv.chunks.Comment object at 0x100e0b3b0>
    // <conv.chunks.Comment object at 0x100e0b4d0>
    rts();
    JMP(FallingSub);
}

int FallingSub() {
    lda(offsetof(G, VerticalForceDown));
    sta(offsetof(G, VerticalForce));
    JMP(LRAir);
    JMP(JumpSwimSub);
}

int JumpSwimSub() {
    ldy(offsetof(G, Player_Y_Speed));
    BPL(DumpFall);
    // <conv.chunks.Comment object at 0x100e0baa0>
    // <conv.chunks.Comment object at 0x100e0bbc0>
    lda(offsetof(G, A_B_Buttons));
    anda(offsetof(G, A_Button));
    anda(offsetof(G, PreviousA_B_Buttons));
    BNE(ProcSwim);
    lda(offsetof(G, JumpOrigin_Y_Position));
    // <conv.chunks.Comment object at 0x100e0bdd0>
    // <conv.chunks.Comment object at 0x100e0bef0>
    // <conv.chunks.Comment object at 0x100e10050>
    // <conv.chunks.Comment object at 0x100e10170>
    sec();
    sbc(offsetof(G, Player_Y_Position));
    cmp(offsetof(G, DiffToHaltJump));
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // <conv.chunks.Comment object at 0x100e10320>
    // <conv.chunks.Comment object at 0x100e10440>
    // <conv.chunks.Comment object at 0x100e10560>
    // <conv.chunks.Comment object at 0x100e10680>
    lda(offsetof(G, VerticalForceDown));
    sta(offsetof(G, VerticalForce));
    JMP(ProcSwim);
}

int ProcSwim() {
    // <conv.chunks.Comment object at 0x100e108c0>
    lda(offsetof(G, SwimmingFlag));
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x100e10a10>
    // <conv.chunks.Comment object at 0x100e10b60>
    lda(offsetof(G, Player_Y_Position));
    cmp(0x14);
    BCS(LRWater);
    // <conv.chunks.Comment object at 0x100e10d70>
    // <conv.chunks.Comment object at 0x100e10e00>
    lda(0x18);
    sta(offsetof(G, VerticalForce));
    JMP(LRWater);
}

int LRWater() {
    // <conv.chunks.Comment object at 0x100e11040>
    // <conv.chunks.Comment object at 0x100e111f0>
    lda(offsetof(G, Left_Right_Buttons));
    BEQ(LRAir);
    sta(offsetof(G, PlayerFacingDir));
    JMP(LRAir);
}

int LRAir() {
    // <conv.chunks.Comment object at 0x100e11370>
    // <conv.chunks.Comment object at 0x100e114c0>
    // <conv.chunks.Comment object at 0x100e115e0>
    lda(offsetof(G, Left_Right_Buttons));
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // <conv.chunks.Comment object at 0x100e11760>
    // <conv.chunks.Comment object at 0x100e118b0>
    // <conv.chunks.Comment object at 0x100e119d0>
    JSR(MovePlayerHorizontally);
    sta(offsetof(G, Player_X_Scroll));
    // <conv.chunks.Comment object at 0x100e11b50>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0xb);
    BNE(ExitMov1);
    // <conv.chunks.Comment object at 0x100e11d60>
    // <conv.chunks.Comment object at 0x100e11df0>
    lda(0x28);
    sta(offsetof(G, VerticalForce));
    JMP(ExitMov1);
}

int ExitMov1() {
    // <conv.chunks.Comment object at 0x100e12000>
    // <conv.chunks.Comment object at 0x100e121b0>
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda(offsetof(G, Player_YMF_Dummy));
    clc();
    adc(offsetof(G, Player_Y_MoveForce));
    // <conv.chunks.Comment object at 0x100e12960>
    // <conv.chunks.Comment object at 0x100e129f0>
    sta(offsetof(G, Player_YMF_Dummy));
    ldy(0x0);
    lda(offsetof(G, Player_Y_Speed));
    BPL(MoveOnVine);
    dey();
    JMP(MoveOnVine);
}

int MoveOnVine() {
    // <conv.chunks.Comment object at 0x100e12c00>
    // <conv.chunks.Comment object at 0x100e12c90>
    // <conv.chunks.Comment object at 0x100e12e40>
    // <conv.chunks.Comment object at 0x100e12f90>
    // <conv.chunks.Comment object at 0x100e13020>
    sty(0x0);
    adc(offsetof(G, Player_Y_Position));
    sta(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x100e13110>
    // <conv.chunks.Comment object at 0x100e13290>
    lda(offsetof(G, Player_Y_HighPos));
    adc(0x0);
    sta(offsetof(G, Player_Y_HighPos));
    lda(offsetof(G, Left_Right_Buttons));
    anda(offsetof(G, Player_CollisionBits));
    BEQ(InitCSTimer);
    ldy(offsetof(G, ClimbSideTimer));
    BNE(ExitCSub);
    // <conv.chunks.Comment object at 0x100e134d0>
    // <conv.chunks.Comment object at 0x100e13560>
    // <conv.chunks.Comment object at 0x100e136e0>
    // <conv.chunks.Comment object at 0x100e13800>
    // <conv.chunks.Comment object at 0x100e13920>
    // <conv.chunks.Comment object at 0x100e13a40>
    // <conv.chunks.Comment object at 0x100e13b60>
    ldy(0x18);
    sty(offsetof(G, ClimbSideTimer));
    ldx(0x0);
    ldy(offsetof(G, PlayerFacingDir));
    lsr();
    BCS(ClimbFD);
    // <conv.chunks.Comment object at 0x100e13ce0>
    // <conv.chunks.Comment object at 0x100e13e90>
    // <conv.chunks.Comment object at 0x100e13f20>
    // <conv.chunks.Comment object at 0x100e1c140>
    // <conv.chunks.Comment object at 0x100e1c1d0>
    inx();
    inx();
    JMP(ClimbFD);
}

int ClimbFD() {
    // <conv.chunks.Comment object at 0x100e1c3e0>
    // <conv.chunks.Comment object at 0x100e1c470>
    dey();
    BEQ(CSetFDir);
    inx();
    JMP(CSetFDir);
}

int CSetFDir() {
    lda(offsetof(G, Player_X_Position));
    clc();
    adc(offsetof(G, ClimbAdderLow), x);
    // <conv.chunks.Comment object at 0x100e1c8c0>
    // <conv.chunks.Comment object at 0x100e1c950>
    sta(offsetof(G, Player_X_Position));
    lda(offsetof(G, Player_PageLoc));
    adc(offsetof(G, ClimbAdderHigh), x);
    // <conv.chunks.Comment object at 0x100e1cb90>
    // <conv.chunks.Comment object at 0x100e1ccb0>
    sta(offsetof(G, Player_PageLoc));
    lda(offsetof(G, Left_Right_Buttons));
    eor(0b11);
    sta(offsetof(G, PlayerFacingDir));
    JMP(ExitCSub);
}

int ExitCSub() {
    // <conv.chunks.Comment object at 0x100e1cef0>
    // <conv.chunks.Comment object at 0x100e1d010>
    // <conv.chunks.Comment object at 0x100e1d130>
    // <conv.chunks.Comment object at 0x100e1d250>
    rts();
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // <conv.chunks.Comment object at 0x100e1d340>
    sta(offsetof(G, ClimbSideTimer));
    rts();
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x100e1eab0>
    cmp(0x3);
    BNE(CheckForJumping);
    // <conv.chunks.Comment object at 0x100e1f1d0>
    ldy(0x0);
    lda(offsetof(G, Up_Down_Buttons));
    anda(offsetof(G, Player_CollisionBits));
    BEQ(ProcClimb);
    // <conv.chunks.Comment object at 0x100e1f3e0>
    // <conv.chunks.Comment object at 0x100e1f590>
    // <conv.chunks.Comment object at 0x100e1f6b0>
    iny();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x100e1f860>
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // <conv.chunks.Comment object at 0x100e1fb00>
    ldx(offsetof(G, Climb_Y_MForceData), y);
    stx(offsetof(G, Player_Y_MoveForce));
    lda(0x8);
    ldx(offsetof(G, Climb_Y_SpeedData), y);
    stx(offsetof(G, Player_Y_Speed));
    BMI(SetCAnim);
    lsr();
    JMP(SetCAnim);
}

int SetCAnim() {
    // <conv.chunks.Comment object at 0x100e1fc80>
    // <conv.chunks.Comment object at 0x100e1fda0>
    // <conv.chunks.Comment object at 0x100e1fe30>
    // <conv.chunks.Comment object at 0x100e28050>
    // <conv.chunks.Comment object at 0x100e28170>
    // <conv.chunks.Comment object at 0x100e282c0>
    // <conv.chunks.Comment object at 0x100e28350>
    sta(offsetof(G, PlayerAnimTimerSet));
    rts();
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda(offsetof(G, JumpspringAnimCtrl));
    BNE(NoJump);
    lda(offsetof(G, A_B_Buttons));
    // <conv.chunks.Comment object at 0x100e28560>
    // <conv.chunks.Comment object at 0x100e28680>
    // <conv.chunks.Comment object at 0x100e287d0>
    anda(offsetof(G, A_Button));
    BEQ(NoJump);
    anda(offsetof(G, PreviousA_B_Buttons));
    // <conv.chunks.Comment object at 0x100e289e0>
    // <conv.chunks.Comment object at 0x100e28b30>
    BEQ(ProcJumping);
    JMP(NoJump);
}

int NoJump() {
    // <conv.chunks.Comment object at 0x100e28d40>
    JMP(X_Physics);
    JMP(ProcJumping);
}

int ProcJumping() {
    lda(offsetof(G, Player_State));
    BEQ(InitJS);
    lda(offsetof(G, SwimmingFlag));
    BEQ(NoJump);
    lda(offsetof(G, JumpSwimTimer));
    // <conv.chunks.Comment object at 0x100e28ef0>
    // <conv.chunks.Comment object at 0x100e29010>
    // <conv.chunks.Comment object at 0x100e29160>
    // <conv.chunks.Comment object at 0x100e29280>
    // <conv.chunks.Comment object at 0x100e293d0>
    BNE(InitJS);
    lda(offsetof(G, Player_Y_Speed));
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // <conv.chunks.Comment object at 0x100e29610>
    // <conv.chunks.Comment object at 0x100e29730>
    // <conv.chunks.Comment object at 0x100e29880>
    // <conv.chunks.Comment object at 0x100e299a0>
    lda(0x20);
    sta(offsetof(G, JumpSwimTimer));
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100e29c10>
    sty(offsetof(G, Player_YMF_Dummy));
    sty(offsetof(G, Player_Y_MoveForce));
    lda(offsetof(G, Player_Y_HighPos));
    sta(offsetof(G, JumpOrigin_Y_HighPos));
    // <conv.chunks.Comment object at 0x100e29f10>
    // <conv.chunks.Comment object at 0x100e2a030>
    lda(offsetof(G, Player_Y_Position));
    sta(offsetof(G, JumpOrigin_Y_Position));
    lda(0x1);
    // <conv.chunks.Comment object at 0x100e2a330>
    sta(offsetof(G, Player_State));
    lda(offsetof(G, Player_XSpeedAbsolute));
    // <conv.chunks.Comment object at 0x100e2a540>
    cmp(0x9);
    BCC(ChkWtr);
    iny();
    // <conv.chunks.Comment object at 0x100e2a6c0>
    // <conv.chunks.Comment object at 0x100e2a8d0>
    cmp(0x10);
    BCC(ChkWtr);
    iny();
    cmp(0x19);
    BCC(ChkWtr);
    iny();
    cmp(0x1c);
    BCC(ChkWtr);
    // <conv.chunks.Comment object at 0x100e2af00>
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // <conv.chunks.Comment object at 0x100e2b170>
    lda(0x1);
    sta(offsetof(G, DiffToHaltJump));
    lda(offsetof(G, SwimmingFlag));
    // <conv.chunks.Comment object at 0x100e2b3e0>
    BEQ(GetYPhy);
    ldy(0x5);
    lda(offsetof(G, Whirlpool_Flag));
    // <conv.chunks.Comment object at 0x100e2b620>
    // <conv.chunks.Comment object at 0x100e2b6b0>
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // <conv.chunks.Comment object at 0x100e2b9b0>
    // <conv.chunks.Comment object at 0x100e2ba40>
    lda(offsetof(G, JumpMForceData), y);
    sta(offsetof(G, VerticalForce));
    // <conv.chunks.Comment object at 0x100e2bbf0>
    lda(offsetof(G, FallMForceData), y);
    sta(offsetof(G, VerticalForceDown));
    lda(offsetof(G, InitMForceData), y);
    sta(offsetof(G, Player_Y_MoveForce));
    lda(offsetof(G, PlayerYSpdData), y);
    sta(offsetof(G, Player_Y_Speed));
    lda(offsetof(G, SwimmingFlag));
    // <conv.chunks.Comment object at 0x100e30380>
    BEQ(PJumpSnd);
    lda(offsetof(G, Sfx_EnemyStomp));
    sta(offsetof(G, Square1SoundQueue));
    // <conv.chunks.Comment object at 0x100e30590>
    // <conv.chunks.Comment object at 0x100e306b0>
    lda(offsetof(G, Player_Y_Position));
    cmp(0x14);
    BCS(X_Physics);
    lda(0x0);
    sta(offsetof(G, Player_Y_Speed));
    JMP(X_Physics);
    JMP(PJumpSnd);
}

int PJumpSnd() {
    // <conv.chunks.Comment object at 0x100e308c0>
    // <conv.chunks.Comment object at 0x100e30950>
    // <conv.chunks.Comment object at 0x100e30b00>
    // <conv.chunks.Comment object at 0x100e30b90>
    // <conv.chunks.Comment object at 0x100e30d40>
    // <conv.chunks.Comment object at 0x100e30e60>
    lda(offsetof(G, Sfx_BigJump));
    ldy(offsetof(G, PlayerSize));
    // <conv.chunks.Comment object at 0x100e30fb0>
    BEQ(SJumpSnd);
    lda(offsetof(G, Sfx_SmallJump));
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // <conv.chunks.Comment object at 0x100e311c0>
    // <conv.chunks.Comment object at 0x100e312e0>
    sta(offsetof(G, Square1SoundQueue));
    JMP(X_Physics);
}

int X_Physics() {
    ldy(0x0);
    sty(0x0);
    lda(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x100e31580>
    // <conv.chunks.Comment object at 0x100e31610>
    BEQ(ProcPRun);
    lda(offsetof(G, Player_XSpeedAbsolute));
    cmp(0x19);
    BCS(GetXPhy);
    BCC(ChkRFast);
    JMP(ProcPRun);
}

int ProcPRun() {
    // <conv.chunks.Comment object at 0x100e31880>
    // <conv.chunks.Comment object at 0x100e319a0>
    // <conv.chunks.Comment object at 0x100e31a30>
    // <conv.chunks.Comment object at 0x100e31c10>
    // <conv.chunks.Comment object at 0x100e31d30>
    iny();
    lda(offsetof(G, AreaType));
    BEQ(ChkRFast);
    dey();
    lda(offsetof(G, Left_Right_Buttons));
    cmp(offsetof(G, Player_MovingDir));
    BNE(ChkRFast);
    lda(offsetof(G, A_B_Buttons));
    // <conv.chunks.Comment object at 0x100e31e20>
    // <conv.chunks.Comment object at 0x100e31f40>
    // <conv.chunks.Comment object at 0x100e32090>
    // <conv.chunks.Comment object at 0x100e32120>
    // <conv.chunks.Comment object at 0x100e32240>
    // <conv.chunks.Comment object at 0x100e32360>
    // <conv.chunks.Comment object at 0x100e32480>
    anda(offsetof(G, B_Button));
    BNE(SetRTmr);
    lda(offsetof(G, RunningTimer));
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // <conv.chunks.Comment object at 0x100e32690>
    // <conv.chunks.Comment object at 0x100e327e0>
    // <conv.chunks.Comment object at 0x100e32900>
    // <conv.chunks.Comment object at 0x100e32a50>
    iny();
    inc(0x0);
    // <conv.chunks.Comment object at 0x100e32b70>
    lda(offsetof(G, RunningSpeed));
    BNE(FastXSp);
    // <conv.chunks.Comment object at 0x100e32d50>
    lda(offsetof(G, Player_XSpeedAbsolute));
    cmp(0x21);
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // <conv.chunks.Comment object at 0x100e32f90>
    // <conv.chunks.Comment object at 0x100e33020>
    // <conv.chunks.Comment object at 0x100e33200>
    inc(0x0);
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // <conv.chunks.Comment object at 0x100e33320>
    // <conv.chunks.Comment object at 0x100e334d0>
    lda(0xa);
    sta(offsetof(G, RunningTimer));
    JMP(GetXPhy);
}

int GetXPhy() {
    // <conv.chunks.Comment object at 0x100e33740>
    lda(offsetof(G, MaxLeftXSpdData), y);
    sta(offsetof(G, MaximumLeftSpeed));
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x7);
    BNE(GetXPhy2);
    ldy(0x3);
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // <conv.chunks.Comment object at 0x100e339e0>
    // <conv.chunks.Comment object at 0x100e33b00>
    // <conv.chunks.Comment object at 0x100e33b90>
    // <conv.chunks.Comment object at 0x100e33d40>
    // <conv.chunks.Comment object at 0x100e33dd0>
    lda(offsetof(G, MaxRightXSpdData), y);
    sta(offsetof(G, MaximumRightSpeed));
    ldy(0x0);
    lda(offsetof(G, FrictionData), y);
    // <conv.chunks.Comment object at 0x100e44140>
    // <conv.chunks.Comment object at 0x100e441d0>
    sta(offsetof(G, FrictionAdderLow));
    lda(0x0);
    sta(offsetof(G, FrictionAdderHigh));
    // <conv.chunks.Comment object at 0x100e444d0>
    lda(offsetof(G, PlayerFacingDir));
    cmp(offsetof(G, Player_MovingDir));
    BEQ(ExitPhy);
    asl(offsetof(G, FrictionAdderLow));
    rol(offsetof(G, FrictionAdderHigh));
    JMP(ExitPhy);
}

int ExitPhy() {
    // <conv.chunks.Comment object at 0x100e44770>
    // <conv.chunks.Comment object at 0x100e44890>
    // <conv.chunks.Comment object at 0x100e449e0>
    // <conv.chunks.Comment object at 0x100e44b00>
    // <conv.chunks.Comment object at 0x100e44c20>
    rts();
    JMP(GetPlayerAnimSpeed);
}

int GetPlayerAnimSpeed() {
    ldy(0x0);
    lda(offsetof(G, Player_XSpeedAbsolute));
    cmp(0x1c);
    BCS(SetRunSpd);
    iny();
    cmp(0xe);
    BCS(ChkSkid);
    iny();
    JMP(ChkSkid);
}

int ChkSkid() {
    // <conv.chunks.Comment object at 0x100e44e00>
    // <conv.chunks.Comment object at 0x100e44e60>
    // <conv.chunks.Comment object at 0x100e451c0>
    // <conv.chunks.Comment object at 0x100e45250>
    // <conv.chunks.Comment object at 0x100e45430>
    // <conv.chunks.Comment object at 0x100e454c0>
    // <conv.chunks.Comment object at 0x100e45550>
    // <conv.chunks.Comment object at 0x100e45760>
    // <conv.chunks.Comment object at 0x100e457f0>
    lda(offsetof(G, SavedJoypadBits));
    anda(0b1111111);
    BEQ(SetAnimSpd);
    anda(0x3);
    cmp(offsetof(G, Player_MovingDir));
    BNE(ProcSkid);
    lda(0x0);
    JMP(SetRunSpd);
}

int SetRunSpd() {
    // <conv.chunks.Comment object at 0x100e45970>
    // <conv.chunks.Comment object at 0x100e45a90>
    // <conv.chunks.Comment object at 0x100e45bb0>
    // <conv.chunks.Comment object at 0x100e45c40>
    // <conv.chunks.Comment object at 0x100e45df0>
    // <conv.chunks.Comment object at 0x100e45f10>
    // <conv.chunks.Comment object at 0x100e45fa0>
    sta(offsetof(G, RunningSpeed));
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // <conv.chunks.Comment object at 0x100e46270>
    lda(offsetof(G, Player_XSpeedAbsolute));
    cmp(0xb);
    BCS(SetAnimSpd);
    // <conv.chunks.Comment object at 0x100e463c0>
    // <conv.chunks.Comment object at 0x100e46450>
    lda(offsetof(G, PlayerFacingDir));
    sta(offsetof(G, Player_MovingDir));
    // <conv.chunks.Comment object at 0x100e466f0>
    lda(0x0);
    sta(offsetof(G, Player_X_Speed));
    sta(offsetof(G, Player_X_MoveForce));
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // <conv.chunks.Comment object at 0x100e46870>
    // <conv.chunks.Comment object at 0x100e46a20>
    // <conv.chunks.Comment object at 0x100e46b40>
    lda(offsetof(G, PlayerAnimTmrData), y);
    sta(offsetof(G, PlayerAnimTimerSet));
    rts();
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda(offsetof(G, Player_CollisionBits));
    cmp(0x0);
    BNE(JoypFrict);
    // <conv.chunks.Comment object at 0x100e46ea0>
    // <conv.chunks.Comment object at 0x100e46fc0>
    // <conv.chunks.Comment object at 0x100e47050>
    lda(offsetof(G, Player_X_Speed));
    BEQ(SetAbsSpd);
    BPL(RghtFrict);
    BMI(LeftFrict);
    JMP(JoypFrict);
}

int JoypFrict() {
    // <conv.chunks.Comment object at 0x100e472f0>
    // <conv.chunks.Comment object at 0x100e47410>
    // <conv.chunks.Comment object at 0x100e47530>
    // <conv.chunks.Comment object at 0x100e47650>
    lsr();
    BCC(RghtFrict);
    JMP(LeftFrict);
}

int LeftFrict() {
    // <conv.chunks.Comment object at 0x100e47740>
    // <conv.chunks.Comment object at 0x100e47860>
    lda(offsetof(G, Player_X_MoveForce));
    clc();
    adc(offsetof(G, FrictionAdderLow));
    sta(offsetof(G, Player_X_MoveForce));
    // <conv.chunks.Comment object at 0x100e47a40>
    // <conv.chunks.Comment object at 0x100e47b60>
    lda(offsetof(G, Player_X_Speed));
    adc(offsetof(G, FrictionAdderHigh));
    sta(offsetof(G, Player_X_Speed));
    cmp(offsetof(G, MaximumRightSpeed));
    BMI(XSpdSign);
    lda(offsetof(G, MaximumRightSpeed));
    sta(offsetof(G, Player_X_Speed));
    JMP(SetAbsSpd);
    JMP(RghtFrict);
}

int RghtFrict() {
    // <conv.chunks.Comment object at 0x100e47d70>
    // <conv.chunks.Comment object at 0x100e47e90>
    // <conv.chunks.Comment object at 0x100e47fb0>
    // <conv.chunks.Comment object at 0x100e4c110>
    // <conv.chunks.Comment object at 0x100e4c230>
    // <conv.chunks.Comment object at 0x100e4c350>
    // <conv.chunks.Comment object at 0x100e4c470>
    // <conv.chunks.Comment object at 0x100e4c590>
    lda(offsetof(G, Player_X_MoveForce));
    sec();
    sbc(offsetof(G, FrictionAdderLow));
    sta(offsetof(G, Player_X_MoveForce));
    // <conv.chunks.Comment object at 0x100e4c770>
    // <conv.chunks.Comment object at 0x100e4c890>
    lda(offsetof(G, Player_X_Speed));
    sbc(offsetof(G, FrictionAdderHigh));
    sta(offsetof(G, Player_X_Speed));
    cmp(offsetof(G, MaximumLeftSpeed));
    BPL(XSpdSign);
    lda(offsetof(G, MaximumLeftSpeed));
    sta(offsetof(G, Player_X_Speed));
    JMP(XSpdSign);
}

int XSpdSign() {
    // <conv.chunks.Comment object at 0x100e4caa0>
    // <conv.chunks.Comment object at 0x100e4cbc0>
    // <conv.chunks.Comment object at 0x100e4cce0>
    // <conv.chunks.Comment object at 0x100e4ce00>
    // <conv.chunks.Comment object at 0x100e4cf20>
    // <conv.chunks.Comment object at 0x100e4d040>
    // <conv.chunks.Comment object at 0x100e4d160>
    cmp(0x0);
    BPL(SetAbsSpd);
    // <conv.chunks.Comment object at 0x100e4d220>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // <conv.chunks.Comment object at 0x100e4d4f0>
    // <conv.chunks.Comment object at 0x100e4d580>
    // <conv.chunks.Comment object at 0x100e4d610>
    sta(offsetof(G, Player_XSpeedAbsolute));
    rts();
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda(offsetof(G, PlayerStatus));
    // <conv.chunks.Comment object at 0x100e4d8b0>
    // <conv.chunks.Comment object at 0x100e4d910>
    // <conv.chunks.Comment object at 0x100e4d970>
    cmp(0x2);
    BCC(ProcAirBubbles);
    // <conv.chunks.Comment object at 0x100e4daf0>
    lda(offsetof(G, A_B_Buttons));
    anda(offsetof(G, B_Button));
    BEQ(ProcFireballs);
    // <conv.chunks.Comment object at 0x100e4dd90>
    // <conv.chunks.Comment object at 0x100e4deb0>
    anda(offsetof(G, PreviousA_B_Buttons));
    BNE(ProcFireballs);
    lda(offsetof(G, FireballCounter));
    anda(0b1);
    // <conv.chunks.Comment object at 0x100e4e0c0>
    // <conv.chunks.Comment object at 0x100e4e1e0>
    // <conv.chunks.Comment object at 0x100e4e300>
    tax();
    lda(offsetof(G, Fireball_State), x);
    BNE(ProcFireballs);
    ldy(offsetof(G, Player_Y_HighPos));
    // <conv.chunks.Comment object at 0x100e4e4b0>
    // <conv.chunks.Comment object at 0x100e4e600>
    // <conv.chunks.Comment object at 0x100e4e720>
    dey();
    BNE(ProcFireballs);
    lda(offsetof(G, CrouchingFlag));
    // <conv.chunks.Comment object at 0x100e4e9c0>
    BNE(ProcFireballs);
    lda(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x100e4ebd0>
    cmp(0x3);
    BEQ(ProcFireballs);
    lda(offsetof(G, Sfx_Fireball));
    // <conv.chunks.Comment object at 0x100e4eed0>
    sta(offsetof(G, Square1SoundQueue));
    lda(0x2);
    // <conv.chunks.Comment object at 0x100e4f0e0>
    sta(offsetof(G, Fireball_State), x);
    ldy(offsetof(G, PlayerAnimTimerSet));
    sty(offsetof(G, FireballThrowingTimer));
    // <conv.chunks.Comment object at 0x100e4f320>
    // <conv.chunks.Comment object at 0x100e4f440>
    dey();
    sty(offsetof(G, PlayerAnimTimer));
    inc(offsetof(G, FireballCounter));
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(0x0);
    JSR(FireballObjCore);
    // <conv.chunks.Comment object at 0x100e4f8c0>
    ldx(0x1);
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x100e4fcb0>
    BNE(BublExit);
    ldx(0x2);
    JMP(BublLoop);
}

int BublLoop() {
    // <conv.chunks.Comment object at 0x100e4fec0>
    // <conv.chunks.Comment object at 0x100e4ff50>
    stx(offsetof(G, ObjectOffset));
    JSR(BubbleCheck);
    JSR(RelativeBubblePosition);
    JSR(GetBubbleOffscreenBits);
    JSR(DrawBubble);
    // <conv.chunks.Comment object at 0x100e5c170>
    // <conv.chunks.Comment object at 0x100e5c290>
    // <conv.chunks.Comment object at 0x100e5c3b0>
    // <conv.chunks.Comment object at 0x100e5c4d0>
    dex();
    BPL(BublLoop);
    JMP(BublExit);
}

int BublExit() {
    // <conv.chunks.Comment object at 0x100e5c680>
    // <conv.chunks.Comment object at 0x100e5c7a0>
    rts();
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Fireball_State), x);
    // <conv.chunks.Comment object at 0x100e5c920>
    // <conv.chunks.Comment object at 0x100e5cb30>
    asl();
    BCS(FireballExplosion);
    ldy(offsetof(G, Fireball_State), x);
    // <conv.chunks.Comment object at 0x100e5cd10>
    // <conv.chunks.Comment object at 0x100e5ce30>
    BEQ(NoFBall);
    dey();
    // <conv.chunks.Comment object at 0x100e5d0d0>
    BEQ(RunFB);
    lda(offsetof(G, Player_X_Position));
    adc(0x4);
    // <conv.chunks.Comment object at 0x100e5d280>
    // <conv.chunks.Comment object at 0x100e5d3a0>
    sta(offsetof(G, Fireball_X_Position), x);
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    // <conv.chunks.Comment object at 0x100e5d5e0>
    // <conv.chunks.Comment object at 0x100e5d700>
    sta(offsetof(G, Fireball_PageLoc), x);
    lda(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x100e5d940>
    sta(offsetof(G, Fireball_Y_Position), x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x100e5db80>
    sta(offsetof(G, Fireball_Y_HighPos), x);
    ldy(offsetof(G, PlayerFacingDir));
    dey();
    lda(offsetof(G, FireballXSpdData), y);
    // <conv.chunks.Comment object at 0x100e5ddc0>
    // <conv.chunks.Comment object at 0x100e5df10>
    // <conv.chunks.Comment object at 0x100e5dfa0>
    sta(offsetof(G, Fireball_X_Speed), x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x100e5e210>
    sta(offsetof(G, Fireball_Y_Speed), x);
    lda(0x7);
    sta(offsetof(G, Fireball_BoundBoxCtrl), x);
    dec(offsetof(G, Fireball_State), x);
    JMP(RunFB);
}

int RunFB() {
    // <conv.chunks.Comment object at 0x100e5e4b0>
    // <conv.chunks.Comment object at 0x100e5e690>
    // <conv.chunks.Comment object at 0x100e5e7e0>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x100e5e930>
    adc(0x7);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x100e5eb40>
    sta(0x0);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100e5ebd0>
    sta(0x2);
    lda(0x0);
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx(offsetof(G, ObjectOffset));
    JSR(RelativeFireballPosition);
    JSR(GetFireballOffscreenBits);
    JSR(GetFireballBoundBox);
    JSR(FireballBGCollision);
    lda(offsetof(G, FBall_OffscreenBits));
    anda(0b11001100);
    BNE(EraseFB);
    JSR(FireballEnemyCollision);
    JMP(DrawFireball);
    JMP(EraseFB);
}

int EraseFB() {
    // <conv.chunks.Comment object at 0x100e5efc0>
    // <conv.chunks.Comment object at 0x100e5f170>
    // <conv.chunks.Comment object at 0x100e5f290>
    // <conv.chunks.Comment object at 0x100e5f3b0>
    // <conv.chunks.Comment object at 0x100e5f4d0>
    // <conv.chunks.Comment object at 0x100e5f5f0>
    // <conv.chunks.Comment object at 0x100e5f710>
    // <conv.chunks.Comment object at 0x100e5f830>
    // <conv.chunks.Comment object at 0x100e5f950>
    // <conv.chunks.Comment object at 0x100e5fa70>
    // <conv.chunks.Comment object at 0x100e5fbc0>
    // <conv.chunks.Comment object at 0x100e5fce0>
    // <conv.chunks.Comment object at 0x100e5fe00>
    lda(0x0);
    sta(offsetof(G, Fireball_State), x);
    JMP(NoFBall);
}

int NoFBall() {
    // <conv.chunks.Comment object at 0x100e64110>
    rts();
    JMP(FireballExplosion);
}

int FireballExplosion() {
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
    JMP(BubbleCheck);
}

int BubbleCheck() {
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    // <conv.chunks.Comment object at 0x100e64470>
    anda(0x1);
    sta(0x7);
    lda(offsetof(G, Bubble_Y_Position), x);
    cmp(0xf8);
    BNE(MoveBubl);
    lda(offsetof(G, AirBubbleTimer));
    BNE(ExitBubl);
    JMP(SetupBubble);
}

int SetupBubble() {
    ldy(0x0);
    lda(offsetof(G, PlayerFacingDir));
    lsr();
    BCC(PosBubl);
    ldy(0x8);
    JMP(PosBubl);
}

int PosBubl() {
    // <conv.chunks.Comment object at 0x100e64e90>
    // <conv.chunks.Comment object at 0x100e64f20>
    // <conv.chunks.Comment object at 0x100e65100>
    // <conv.chunks.Comment object at 0x100e65190>
    // <conv.chunks.Comment object at 0x100e652e0>
    // <conv.chunks.Comment object at 0x100e65370>
    tya();
    adc(offsetof(G, Player_X_Position));
    sta(offsetof(G, Bubble_X_Position), x);
    // <conv.chunks.Comment object at 0x100e65520>
    // <conv.chunks.Comment object at 0x100e65640>
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    sta(offsetof(G, Bubble_PageLoc), x);
    // <conv.chunks.Comment object at 0x100e65880>
    // <conv.chunks.Comment object at 0x100e65910>
    lda(offsetof(G, Player_Y_Position));
    clc();
    // <conv.chunks.Comment object at 0x100e65c10>
    adc(0x8);
    sta(offsetof(G, Bubble_Y_Position), x);
    // <conv.chunks.Comment object at 0x100e65d00>
    lda(0x1);
    sta(offsetof(G, Bubble_Y_HighPos), x);
    ldy(0x7);
    lda(offsetof(G, BubbleTimerData), y);
    sta(offsetof(G, AirBubbleTimer));
    JMP(MoveBubl);
}

int MoveBubl() {
    // <conv.chunks.Comment object at 0x100e65f40>
    // <conv.chunks.Comment object at 0x100e66150>
    // <conv.chunks.Comment object at 0x100e661e0>
    // <conv.chunks.Comment object at 0x100e66390>
    // <conv.chunks.Comment object at 0x100e664b0>
    ldy(0x7);
    lda(offsetof(G, Bubble_YMF_Dummy), x);
    sec();
    // <conv.chunks.Comment object at 0x100e66750>
    sbc(offsetof(G, Bubble_MForceData), y);
    sta(offsetof(G, Bubble_YMF_Dummy), x);
    // <conv.chunks.Comment object at 0x100e66900>
    lda(offsetof(G, Bubble_Y_Position), x);
    sbc(0x0);
    cmp(0x20);
    BCS(Y_Bubl);
    lda(0xf8);
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // <conv.chunks.Comment object at 0x100e66b70>
    // <conv.chunks.Comment object at 0x100e66c00>
    // <conv.chunks.Comment object at 0x100e66d20>
    // <conv.chunks.Comment object at 0x100e66f00>
    // <conv.chunks.Comment object at 0x100e66f90>
    sta(offsetof(G, Bubble_Y_Position), x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // <conv.chunks.Comment object at 0x100e67200>
    rts();
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda(offsetof(G, OperMode));
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x100e67380>
    // <conv.chunks.Comment object at 0x100e67710>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x8);
    BCC(ExGTimer);
    cmp(0xb);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x100e67920>
    // <conv.chunks.Comment object at 0x100e679b0>
    // <conv.chunks.Comment object at 0x100e67b60>
    // <conv.chunks.Comment object at 0x100e67bf0>
    lda(offsetof(G, Player_Y_HighPos));
    cmp(0x2);
    BCS(ExGTimer);
    lda(offsetof(G, GameTimerCtrlTimer));
    BNE(ExGTimer);
    // <conv.chunks.Comment object at 0x100e67e90>
    // <conv.chunks.Comment object at 0x100e67f20>
    // <conv.chunks.Comment object at 0x100e6c110>
    // <conv.chunks.Comment object at 0x100e6c230>
    lda(offsetof(G, GameTimerDisplay));
    ora(((offsetof(G, GameTimerDisplay)) + (1)));
    // <conv.chunks.Comment object at 0x100e6c440>
    ora(((offsetof(G, GameTimerDisplay)) + (2)));
    BEQ(TimeUpOn);
    ldy(offsetof(G, GameTimerDisplay));
    dey();
    BNE(ResGTCtrl);
    lda(((offsetof(G, GameTimerDisplay)) + (1)));
    // <conv.chunks.Comment object at 0x100e6c7d0>
    // <conv.chunks.Comment object at 0x100e6c8f0>
    // <conv.chunks.Comment object at 0x100e6ca40>
    // <conv.chunks.Comment object at 0x100e6cad0>
    // <conv.chunks.Comment object at 0x100e6cbf0>
    ora(((offsetof(G, GameTimerDisplay)) + (2)));
    BNE(ResGTCtrl);
    // <conv.chunks.Comment object at 0x100e6cf80>
    lda(offsetof(G, TimeRunningOutMusic));
    sta(offsetof(G, EventMusicQueue));
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // <conv.chunks.Comment object at 0x100e6d190>
    // <conv.chunks.Comment object at 0x100e6d2b0>
    lda(0x18);
    sta(offsetof(G, GameTimerCtrlTimer));
    ldy(0x23);
    lda(0xff);
    // <conv.chunks.Comment object at 0x100e6d4f0>
    // <conv.chunks.Comment object at 0x100e6d580>
    sta(((offsetof(G, DigitModifier)) + (5)));
    JSR(DigitsMathRoutine);
    lda(0xa4);
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // <conv.chunks.Comment object at 0x100e6d8e0>
    // <conv.chunks.Comment object at 0x100e6da00>
    // <conv.chunks.Comment object at 0x100e6da90>
    // <conv.chunks.Comment object at 0x100e6dc40>
    sta(offsetof(G, PlayerStatus));
    JSR(ForceInjury);
    inc(offsetof(G, GameTimerExpiredFlag));
    JMP(ExGTimer);
}

int ExGTimer() {
    // <conv.chunks.Comment object at 0x100e6dd90>
    // <conv.chunks.Comment object at 0x100e6deb0>
    // <conv.chunks.Comment object at 0x100e6e000>
    rts();
    JMP(WarpZoneObject);
}

int WarpZoneObject() {
    lda(offsetof(G, ScrollLock));
    BEQ(ExGTimer);
    lda(offsetof(G, Player_Y_Position));
    anda(offsetof(G, Player_Y_HighPos));
    BNE(ExGTimer);
    sta(offsetof(G, ScrollLock));
    inc(offsetof(G, WarpZoneControl));
    JMP(EraseEnemyObject);
    JMP(ProcessWhirlpools);
}

int ProcessWhirlpools() {
    lda(offsetof(G, AreaType));
    BNE(ExitWh);
    sta(offsetof(G, Whirlpool_Flag));
    lda(offsetof(G, TimerControl));
    BNE(ExitWh);
    ldy(0x4);
    JMP(WhLoop);
}

int WhLoop() {
    // <conv.chunks.Comment object at 0x100e6ebd0>
    // <conv.chunks.Comment object at 0x100e6ecf0>
    // <conv.chunks.Comment object at 0x100e6ee40>
    // <conv.chunks.Comment object at 0x100e6ef60>
    // <conv.chunks.Comment object at 0x100e6f080>
    // <conv.chunks.Comment object at 0x100e6f1d0>
    // <conv.chunks.Comment object at 0x100e6f260>
    lda(offsetof(G, Whirlpool_LeftExtent), y);
    clc();
    adc(offsetof(G, Whirlpool_Length), y);
    sta(0x2);
    lda(offsetof(G, Whirlpool_PageLoc), y);
    BEQ(NextWh);
    adc(0x0);
    sta(0x1);
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100e6f530>
    // <conv.chunks.Comment object at 0x100e6f6b0>
    // <conv.chunks.Comment object at 0x100e6f740>
    // <conv.chunks.Comment object at 0x100e6f8f0>
    // <conv.chunks.Comment object at 0x100e6fa40>
    // <conv.chunks.Comment object at 0x100e6fb90>
    // <conv.chunks.Comment object at 0x100e6fc20>
    sec();
    sbc(offsetof(G, Whirlpool_LeftExtent), y);
    lda(offsetof(G, Player_PageLoc));
    sbc(offsetof(G, Whirlpool_PageLoc), y);
    BMI(NextWh);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100e6fe30>
    // <conv.chunks.Comment object at 0x100e6ff80>
    // <conv.chunks.Comment object at 0x100e780e0>
    // <conv.chunks.Comment object at 0x100e78230>
    // <conv.chunks.Comment object at 0x100e783b0>
    sec();
    sbc(offsetof(G, Player_X_Position));
    lda(0x1);
    sbc(offsetof(G, Player_PageLoc));
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}

int NextWh() {
    // <conv.chunks.Comment object at 0x100e78530>
    // <conv.chunks.Comment object at 0x100e78680>
    // <conv.chunks.Comment object at 0x100e78710>
    // <conv.chunks.Comment object at 0x100e78890>
    // <conv.chunks.Comment object at 0x100e789b0>
    dey();
    BPL(WhLoop);
    JMP(ExitWh);
}

int ExitWh() {
    // <conv.chunks.Comment object at 0x100e78ad0>
    // <conv.chunks.Comment object at 0x100e78c50>
    rts();
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda(offsetof(G, Whirlpool_Length), y);
    lsr();
    sta(0x0);
    lda(offsetof(G, Whirlpool_LeftExtent), y);
    // <conv.chunks.Comment object at 0x100e78da0>
    // <conv.chunks.Comment object at 0x100e78f20>
    // <conv.chunks.Comment object at 0x100e78fe0>
    // <conv.chunks.Comment object at 0x100e79070>
    clc();
    adc(0x0);
    sta(0x1);
    lda(offsetof(G, Whirlpool_PageLoc), y);
    adc(0x0);
    sta(0x0);
    lda(offsetof(G, FrameCounter));
    lsr();
    BCC(WhPull);
    lda(0x1);
    // <conv.chunks.Comment object at 0x100e792e0>
    // <conv.chunks.Comment object at 0x100e792b0>
    // <conv.chunks.Comment object at 0x100e79490>
    // <conv.chunks.Comment object at 0x100e79640>
    // <conv.chunks.Comment object at 0x100e79790>
    // <conv.chunks.Comment object at 0x100e79820>
    // <conv.chunks.Comment object at 0x100e799d0>
    // <conv.chunks.Comment object at 0x100e79a60>
    // <conv.chunks.Comment object at 0x100e79be0>
    sec();
    sbc(offsetof(G, Player_X_Position));
    lda(0x0);
    sbc(offsetof(G, Player_PageLoc));
    BPL(LeftWh);
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100e79d60>
    // <conv.chunks.Comment object at 0x100e79eb0>
    // <conv.chunks.Comment object at 0x100e79f40>
    // <conv.chunks.Comment object at 0x100e7a0c0>
    // <conv.chunks.Comment object at 0x100e7a210>
    sec();
    sbc(0x1);
    sta(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100e7a3c0>
    // <conv.chunks.Comment object at 0x100e7a450>
    lda(offsetof(G, Player_PageLoc));
    sbc(0x0);
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // <conv.chunks.Comment object at 0x100e7a6f0>
    // <conv.chunks.Comment object at 0x100e7a780>
    // <conv.chunks.Comment object at 0x100e7a960>
    lda(offsetof(G, Player_CollisionBits));
    lsr();
    BCC(WhPull);
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100e7ab10>
    // <conv.chunks.Comment object at 0x100e7aba0>
    // <conv.chunks.Comment object at 0x100e7acf0>
    clc();
    adc(0x1);
    sta(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100e7aea0>
    // <conv.chunks.Comment object at 0x100e7af30>
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    JMP(SetPWh);
}

int SetPWh() {
    // <conv.chunks.Comment object at 0x100e7b1d0>
    // <conv.chunks.Comment object at 0x100e7b260>
    sta(offsetof(G, Player_PageLoc));
    JMP(WhPull);
}

int WhPull() {
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x100e7b5f0>
    lda(0x1);
    sta(offsetof(G, Whirlpool_Flag));
    sta(0x2);
    // <conv.chunks.Comment object at 0x100e7b740>
    // <conv.chunks.Comment object at 0x100e7b920>
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(0x5);
    stx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x100e7bda0>
    // <conv.chunks.Comment object at 0x100e7be00>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, FlagpoleFlagObject));
    BNE(ExitFlagP);
    // <conv.chunks.Comment object at 0x100e84680>
    // <conv.chunks.Comment object at 0x100e847a0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x4);
    BNE(SkipScore);
    // <conv.chunks.Comment object at 0x100e849b0>
    // <conv.chunks.Comment object at 0x100e84a40>
    lda(offsetof(G, Player_State));
    cmp(0x3);
    BNE(SkipScore);
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0xaa);
    BCS(GiveFPScr);
    lda(offsetof(G, Player_Y_Position));
    cmp(0xa2);
    BCS(GiveFPScr);
    // <conv.chunks.Comment object at 0x100e84ce0>
    // <conv.chunks.Comment object at 0x100e84d70>
    // <conv.chunks.Comment object at 0x100e84f20>
    // <conv.chunks.Comment object at 0x100e85070>
    // <conv.chunks.Comment object at 0x100e85100>
    // <conv.chunks.Comment object at 0x100e852b0>
    // <conv.chunks.Comment object at 0x100e853d0>
    // <conv.chunks.Comment object at 0x100e85460>
    lda(offsetof(G, Enemy_YMF_Dummy), x);
    adc(0xff);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(0x1);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x100e85730>
    // <conv.chunks.Comment object at 0x100e857c0>
    // <conv.chunks.Comment object at 0x100e859a0>
    // <conv.chunks.Comment object at 0x100e85af0>
    // <conv.chunks.Comment object at 0x100e85b80>
    lda(offsetof(G, FlagpoleFNum_YMFDummy));
    sec();
    // <conv.chunks.Comment object at 0x100e85e80>
    sbc(0xff);
    sta(offsetof(G, FlagpoleFNum_YMFDummy));
    // <conv.chunks.Comment object at 0x100e85f70>
    lda(offsetof(G, FlagpoleFNum_Y_Pos));
    sbc(0x1);
    sta(offsetof(G, FlagpoleFNum_Y_Pos));
    JMP(SkipScore);
}

int SkipScore() {
    // <conv.chunks.Comment object at 0x100e86210>
    // <conv.chunks.Comment object at 0x100e862a0>
    // <conv.chunks.Comment object at 0x100e86450>
    JMP(FPGfx);
    JMP(GiveFPScr);
}

int GiveFPScr() {
    // <conv.chunks.Comment object at 0x100e865d0>
    ldy(offsetof(G, FlagpoleScore));
    lda(offsetof(G, FlagpoleScoreMods), y);
    ldx(offsetof(G, FlagpoleScoreDigits), y);
    sta(offsetof(G, DigitModifier), x);
    JSR(AddToScore);
    // <conv.chunks.Comment object at 0x100e86720>
    // <conv.chunks.Comment object at 0x100e86870>
    // <conv.chunks.Comment object at 0x100e869c0>
    // <conv.chunks.Comment object at 0x100e86b10>
    lda(0x5);
    sta(offsetof(G, GameEngineSubroutine));
    JMP(FPGfx);
}

int FPGfx() {
    // <conv.chunks.Comment object at 0x100e86c90>
    // <conv.chunks.Comment object at 0x100e86e40>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(FlagpoleGfxHandler);
    JMP(ExitFlagP);
}

int ExitFlagP() {
    rts();
    JMP(JumpspringHandler);
}

int JumpspringHandler() {
    JSR(GetEnemyOffscreenBits);
    lda(offsetof(G, TimerControl));
    BNE(DrawJSpr);
    lda(offsetof(G, JumpspringAnimCtrl));
    BEQ(DrawJSpr);
    // <conv.chunks.Comment object at 0x100e87380>
    // <conv.chunks.Comment object at 0x100e876b0>
    // <conv.chunks.Comment object at 0x100e877d0>
    // <conv.chunks.Comment object at 0x100e878f0>
    // <conv.chunks.Comment object at 0x100e87a10>
    tay();
    dey();
    tya();
    anda(0b10);
    BNE(DownJSpr);
    // <conv.chunks.Comment object at 0x100e87bf0>
    // <conv.chunks.Comment object at 0x100e87cb0>
    // <conv.chunks.Comment object at 0x100e87d40>
    // <conv.chunks.Comment object at 0x100e87e60>
    inc(offsetof(G, Player_Y_Position));
    inc(offsetof(G, Player_Y_Position));
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // <conv.chunks.Comment object at 0x100e900b0>
    // <conv.chunks.Comment object at 0x100e901d0>
    // <conv.chunks.Comment object at 0x100e90320>
    dec(offsetof(G, Player_Y_Position));
    dec(offsetof(G, Player_Y_Position));
    JMP(PosJSpr);
}

int PosJSpr() {
    // <conv.chunks.Comment object at 0x100e90560>
    lda(offsetof(G, Jumpspring_FixedYPos), x);
    clc();
    adc(offsetof(G, Jumpspring_Y_PosData), y);
    sta(offsetof(G, Enemy_Y_Position), x);
    cpy(0x1);
    BCC(BounceJS);
    // <conv.chunks.Comment object at 0x100e907a0>
    // <conv.chunks.Comment object at 0x100e908f0>
    // <conv.chunks.Comment object at 0x100e90a40>
    // <conv.chunks.Comment object at 0x100e90ad0>
    lda(offsetof(G, A_B_Buttons));
    anda(offsetof(G, A_Button));
    BEQ(BounceJS);
    anda(offsetof(G, PreviousA_B_Buttons));
    BNE(BounceJS);
    // <conv.chunks.Comment object at 0x100e90d70>
    // <conv.chunks.Comment object at 0x100e90e90>
    // <conv.chunks.Comment object at 0x100e90fb0>
    // <conv.chunks.Comment object at 0x100e910d0>
    lda(0xf4);
    sta(offsetof(G, JumpspringForce));
    JMP(BounceJS);
}

int BounceJS() {
    // <conv.chunks.Comment object at 0x100e91250>
    // <conv.chunks.Comment object at 0x100e91400>
    cpy(0x3);
    BNE(DrawJSpr);
    // <conv.chunks.Comment object at 0x100e914c0>
    lda(offsetof(G, JumpspringForce));
    sta(offsetof(G, Player_Y_Speed));
    // <conv.chunks.Comment object at 0x100e91760>
    lda(0x0);
    sta(offsetof(G, JumpspringAnimCtrl));
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // <conv.chunks.Comment object at 0x100e918e0>
    // <conv.chunks.Comment object at 0x100e91a90>
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda(offsetof(G, JumpspringAnimCtrl));
    BEQ(ExJSpring);
    // <conv.chunks.Comment object at 0x100e91be0>
    // <conv.chunks.Comment object at 0x100e91d00>
    // <conv.chunks.Comment object at 0x100e91e20>
    // <conv.chunks.Comment object at 0x100e91f40>
    lda(offsetof(G, JumpspringTimer));
    BNE(ExJSpring);
    // <conv.chunks.Comment object at 0x100e92150>
    lda(0x4);
    sta(offsetof(G, JumpspringTimer));
    inc(offsetof(G, JumpspringAnimCtrl));
    JMP(ExJSpring);
}

int ExJSpring() {
    // <conv.chunks.Comment object at 0x100e922d0>
    // <conv.chunks.Comment object at 0x100e92480>
    // <conv.chunks.Comment object at 0x100e925d0>
    rts();
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda(offsetof(G, VineObject));
    sta(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x100e92720>
    // <conv.chunks.Comment object at 0x100e92840>
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x100e929f0>
    lda(offsetof(G, Block_PageLoc), y);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x100e92cf0>
    lda(offsetof(G, Block_X_Position), y);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x100e92f60>
    lda(offsetof(G, Block_Y_Position), y);
    sta(offsetof(G, Enemy_Y_Position), x);
    ldy(offsetof(G, VineFlagOffset));
    BNE(NextVO);
    sta(offsetof(G, VineStart_Y_Position));
    JMP(NextVO);
}

int NextVO() {
    // <conv.chunks.Comment object at 0x100e931d0>
    // <conv.chunks.Comment object at 0x100e93320>
    // <conv.chunks.Comment object at 0x100e93440>
    // <conv.chunks.Comment object at 0x100e93590>
    // <conv.chunks.Comment object at 0x100e936b0>
    txa();
    sta(offsetof(G, VineObjOffset), y);
    inc(offsetof(G, VineFlagOffset));
    // <conv.chunks.Comment object at 0x100e937d0>
    // <conv.chunks.Comment object at 0x100e93920>
    lda(offsetof(G, Sfx_GrowVine));
    sta(offsetof(G, Square2SoundQueue));
    // <conv.chunks.Comment object at 0x100e93b30>
    rts();
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(0x5);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x100e93e00>
    // <conv.chunks.Comment object at 0x100e93f80>
    ldy(offsetof(G, VineFlagOffset));
    dey();
    // <conv.chunks.Comment object at 0x100e982c0>
    lda(offsetof(G, VineHeight));
    cmp(offsetof(G, VineHeightData), y);
    BEQ(RunVSubs);
    lda(offsetof(G, FrameCounter));
    lsr();
    // <conv.chunks.Comment object at 0x100e98440>
    // <conv.chunks.Comment object at 0x100e98590>
    // <conv.chunks.Comment object at 0x100e986b0>
    // <conv.chunks.Comment object at 0x100e98800>
    lsr();
    BCC(RunVSubs);
    // <conv.chunks.Comment object at 0x100e98920>
    lda(((offsetof(G, Enemy_Y_Position)) + (5)));
    sbc(0x1);
    sta(((offsetof(G, Enemy_Y_Position)) + (5)));
    inc(offsetof(G, VineHeight));
    JMP(RunVSubs);
}

int RunVSubs() {
    // <conv.chunks.Comment object at 0x100e98bf0>
    // <conv.chunks.Comment object at 0x100e98c80>
    // <conv.chunks.Comment object at 0x100e98ef0>
    // <conv.chunks.Comment object at 0x100e99010>
    lda(offsetof(G, VineHeight));
    cmp(0x8);
    // <conv.chunks.Comment object at 0x100e99160>
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(0x0);
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // <conv.chunks.Comment object at 0x100e993a0>
    // <conv.chunks.Comment object at 0x100e994c0>
    // <conv.chunks.Comment object at 0x100e995e0>
    // <conv.chunks.Comment object at 0x100e99670>
    JSR(DrawVine);
    iny();
    cpy(offsetof(G, VineFlagOffset));
    BNE(VDrawLoop);
    // <conv.chunks.Comment object at 0x100e99880>
    // <conv.chunks.Comment object at 0x100e99910>
    // <conv.chunks.Comment object at 0x100e99a30>
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1100);
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // <conv.chunks.Comment object at 0x100e99c40>
    // <conv.chunks.Comment object at 0x100e99d60>
    // <conv.chunks.Comment object at 0x100e99eb0>
    // <conv.chunks.Comment object at 0x100e99f40>
    ldx(offsetof(G, VineObjOffset), y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta(offsetof(G, VineFlagOffset));
    sta(offsetof(G, VineHeight));
    JMP(WrCMTile);
}

int WrCMTile() {
    // <conv.chunks.Comment object at 0x100e9a0c0>
    // <conv.chunks.Comment object at 0x100e9a210>
    // <conv.chunks.Comment object at 0x100e9a2a0>
    // <conv.chunks.Comment object at 0x100e9a3c0>
    // <conv.chunks.Comment object at 0x100e9a4e0>
    // <conv.chunks.Comment object at 0x100e9a600>
    lda(offsetof(G, VineHeight));
    cmp(0x20);
    BCC(ExitVH);
    ldx(0x6);
    lda(0x1);
    ldy(0x1b);
    JSR(BlockBufferCollision);
    // <conv.chunks.Comment object at 0x100e9a750>
    // <conv.chunks.Comment object at 0x100e9a7e0>
    // <conv.chunks.Comment object at 0x100e9a9c0>
    // <conv.chunks.Comment object at 0x100e9aa50>
    // <conv.chunks.Comment object at 0x100e9ab70>
    // <conv.chunks.Comment object at 0x100e9ac90>
    ldy(0x2);
    cpy(0xd0);
    BCS(ExitVH);
    lda((0x6), y);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x100e9ae40>
    // <conv.chunks.Comment object at 0x100e9afc0>
    // <conv.chunks.Comment object at 0x100e9b1a0>
    // <conv.chunks.Comment object at 0x100e9b200>
    lda(0x26);
    sta((0x6), y);
    JMP(ExitVH);
}

int ExitVH() {
    // <conv.chunks.Comment object at 0x100e9b4d0>
    // <conv.chunks.Comment object at 0x100e9b5c0>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda(offsetof(G, AreaType));
    BEQ(ExCannon);
    // <conv.chunks.Comment object at 0x100e9b980>
    // <conv.chunks.Comment object at 0x100e9bbc0>
    ldx(0x2);
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // <conv.chunks.Comment object at 0x100e9bd40>
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Enemy_Flag), x);
    BNE(Chk_BB);
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    ldy(offsetof(G, SecondaryHardMode));
    anda(offsetof(G, CannonBitmasks), y);
    cmp(0x6);
    BCS(Chk_BB);
    tay();
    lda(offsetof(G, Cannon_PageLoc), y);
    BEQ(Chk_BB);
    lda(offsetof(G, Cannon_Timer), y);
    BEQ(FireCannon);
    sbc(0x0);
    sta(offsetof(G, Cannon_Timer), y);
    JMP(Chk_BB);
    JMP(FireCannon);
}

int FireCannon() {
    lda(offsetof(G, TimerControl));
    BNE(Chk_BB);
    lda(0xe);
    sta(offsetof(G, Cannon_Timer), y);
    lda(offsetof(G, Cannon_PageLoc), y);
    sta(offsetof(G, Enemy_PageLoc), x);
    lda(offsetof(G, Cannon_X_Position), y);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, Cannon_Y_Position), y);
    // <conv.chunks.Comment object at 0x100ea52b0>
    // <conv.chunks.Comment object at 0x100ea53d0>
    // <conv.chunks.Comment object at 0x100ea5520>
    // <conv.chunks.Comment object at 0x100ea55b0>
    // <conv.chunks.Comment object at 0x100ea5790>
    // <conv.chunks.Comment object at 0x100ea58e0>
    // <conv.chunks.Comment object at 0x100ea5a30>
    // <conv.chunks.Comment object at 0x100ea5b80>
    // <conv.chunks.Comment object at 0x100ea5cd0>
    sec();
    sbc(0x8);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x100ea5eb0>
    // <conv.chunks.Comment object at 0x100ea5f40>
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    sta(offsetof(G, Enemy_Flag), x);
    lsr();
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x100ea6180>
    // <conv.chunks.Comment object at 0x100ea6360>
    // <conv.chunks.Comment object at 0x100ea64e0>
    // <conv.chunks.Comment object at 0x100ea6570>
    lda(0x9);
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    // <conv.chunks.Comment object at 0x100ea6720>
    lda(offsetof(G, BulletBill_CannonVar));
    sta(offsetof(G, Enemy_ID), x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // <conv.chunks.Comment object at 0x100ea69f0>
    // <conv.chunks.Comment object at 0x100ea6b40>
    // <conv.chunks.Comment object at 0x100ea6c60>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, BulletBill_CannonVar));
    BNE(Next3Slt);
    JSR(OffscreenBoundsCheck);
    lda(offsetof(G, Enemy_Flag), x);
    BEQ(Next3Slt);
    JSR(GetEnemyOffscreenBits);
    JSR(BulletBillHandler);
    JMP(Next3Slt);
}

int Next3Slt() {
    // <conv.chunks.Comment object at 0x100ea6f00>
    // <conv.chunks.Comment object at 0x100ea7020>
    // <conv.chunks.Comment object at 0x100ea7140>
    // <conv.chunks.Comment object at 0x100ea7290>
    // <conv.chunks.Comment object at 0x100ea73b0>
    // <conv.chunks.Comment object at 0x100ea74d0>
    // <conv.chunks.Comment object at 0x100ea75f0>
    dex();
    BPL(ThreeSChk);
    JMP(ExCannon);
}

int ExCannon() {
    // <conv.chunks.Comment object at 0x100ea76e0>
    // <conv.chunks.Comment object at 0x100ea7800>
    rts();
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda(offsetof(G, TimerControl));
    BNE(RunBBSubs);
    // <conv.chunks.Comment object at 0x100ea79b0>
    // <conv.chunks.Comment object at 0x100ea7bc0>
    lda(offsetof(G, Enemy_State), x);
    BNE(ChkDSte);
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1100);
    cmp(0b1100);
    BEQ(KillBB);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetupBB);
    iny();
    JMP(SetupBB);
}

int SetupBB() {
    // <conv.chunks.Comment object at 0x100ea7e00>
    // <conv.chunks.Comment object at 0x100ea7f50>
    // <conv.chunks.Comment object at 0x100eb00b0>
    // <conv.chunks.Comment object at 0x100eb01d0>
    // <conv.chunks.Comment object at 0x100eb02f0>
    // <conv.chunks.Comment object at 0x100eb0440>
    // <conv.chunks.Comment object at 0x100eb04d0>
    // <conv.chunks.Comment object at 0x100eb0680>
    // <conv.chunks.Comment object at 0x100eb0800>
    // <conv.chunks.Comment object at 0x100eb0890>
    sty(offsetof(G, Enemy_MovingDir), x);
    dey();
    lda(offsetof(G, BulletBillXSpdData), y);
    sta(offsetof(G, Enemy_X_Speed), x);
    lda(0x0);
    adc(0x28);
    cmp(0x50);
    BCC(KillBB);
    // <conv.chunks.Comment object at 0x100eb0a70>
    // <conv.chunks.Comment object at 0x100eb0b00>
    // <conv.chunks.Comment object at 0x100eb0c50>
    // <conv.chunks.Comment object at 0x100eb0dd0>
    // <conv.chunks.Comment object at 0x100eb0e60>
    // <conv.chunks.Comment object at 0x100eb0f50>
    // <conv.chunks.Comment object at 0x100eb1070>
    lda(0x1);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x100eb12b0>
    lda(0xa);
    sta(offsetof(G, EnemyFrameTimer), x);
    // <conv.chunks.Comment object at 0x100eb14f0>
    lda(offsetof(G, Sfx_Blast));
    sta(offsetof(G, Square2SoundQueue));
    JMP(ChkDSte);
}

int ChkDSte() {
    // <conv.chunks.Comment object at 0x100eb17c0>
    // <conv.chunks.Comment object at 0x100eb18e0>
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BEQ(BBFly);
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}

int BBFly() {
    // <conv.chunks.Comment object at 0x100eb1b80>
    // <conv.chunks.Comment object at 0x100eb1cd0>
    // <conv.chunks.Comment object at 0x100eb1df0>
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}

int RunBBSubs() {
    // <conv.chunks.Comment object at 0x100eb1f70>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}

int KillBB() {
    // <conv.chunks.Comment object at 0x100eb20c0>
    // <conv.chunks.Comment object at 0x100eb21e0>
    // <conv.chunks.Comment object at 0x100eb2300>
    // <conv.chunks.Comment object at 0x100eb2420>
    // <conv.chunks.Comment object at 0x100eb2540>
    JSR(EraseEnemyObject);
    rts();
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)));
    anda(0b111);
    BNE(SetMOfs);
    // <conv.chunks.Comment object at 0x100eb27e0>
    // <conv.chunks.Comment object at 0x100eb3020>
    // <conv.chunks.Comment object at 0x100eb3140>
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)));
    anda(0b1000);
    JMP(SetMOfs);
}

int SetMOfs() {
    // <conv.chunks.Comment object at 0x100eb3440>
    // <conv.chunks.Comment object at 0x100eb3560>
    tay();
    lda(offsetof(G, Misc_State), y);
    BNE(NoHammer);
    ldx(offsetof(G, HammerEnemyOfsData), y);
    lda(offsetof(G, Enemy_Flag), x);
    BNE(NoHammer);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x100eb3680>
    // <conv.chunks.Comment object at 0x100eb37d0>
    // <conv.chunks.Comment object at 0x100eb38f0>
    // <conv.chunks.Comment object at 0x100eb3a40>
    // <conv.chunks.Comment object at 0x100eb3b90>
    // <conv.chunks.Comment object at 0x100eb3cb0>
    txa();
    sta(offsetof(G, HammerEnemyOffset), y);
    // <conv.chunks.Comment object at 0x100eb3e60>
    lda(0x90);
    sta(offsetof(G, Misc_State), y);
    // <conv.chunks.Comment object at 0x100ebc050>
    lda(0x7);
    sta(offsetof(G, Misc_BoundBoxCtrl), y);
    sec();
    // <conv.chunks.Comment object at 0x100ebc290>
    // <conv.chunks.Comment object at 0x100ebc4a0>
    rts();
    JMP(NoHammer);
}

int NoHammer() {
    // <conv.chunks.Comment object at 0x100ebc5c0>
    ldx(offsetof(G, ObjectOffset));
    clc();
    // <conv.chunks.Comment object at 0x100ebc740>
    rts();
    JMP(ProcHammerObj);
}

int ProcHammerObj() {
    lda(offsetof(G, TimerControl));
    BNE(RunHSubs);
    lda(offsetof(G, Misc_State), x);
    anda(0b1111111);
    ldy(offsetof(G, HammerEnemyOffset), x);
    cmp(0x2);
    BEQ(SetHSpd);
    BCS(SetHPos);
    // <conv.chunks.Comment object at 0x100ebc890>
    // <conv.chunks.Comment object at 0x100ebc8f0>
    // <conv.chunks.Comment object at 0x100ebc950>
    // <conv.chunks.Comment object at 0x100ebca70>
    // <conv.chunks.Comment object at 0x100ebcb90>
    // <conv.chunks.Comment object at 0x100ebcce0>
    // <conv.chunks.Comment object at 0x100ebce00>
    // <conv.chunks.Comment object at 0x100ebcf50>
    // <conv.chunks.Comment object at 0x100ebcfe0>
    // <conv.chunks.Comment object at 0x100ebd1c0>
    txa();
    clc();
    adc(0xd);
    tax();
    // <conv.chunks.Comment object at 0x100ebd3d0>
    // <conv.chunks.Comment object at 0x100ebd460>
    // <conv.chunks.Comment object at 0x100ebd5b0>
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x100ebd760>
    lda(0xf);
    sta(0x1);
    // <conv.chunks.Comment object at 0x100ebd970>
    lda(0x4);
    sta(0x2);
    lda(0x0);
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx(offsetof(G, ObjectOffset));
    JMP(RunAllH);
    JMP(SetHSpd);
}

int SetHSpd() {
    lda(0xfe);
    sta(offsetof(G, Misc_Y_Speed), x);
    lda(offsetof(G, Enemy_State), y);
    anda(0b11110111);
    sta(offsetof(G, Enemy_State), y);
    ldx(offsetof(G, Enemy_MovingDir), y);
    dex();
    lda(offsetof(G, HammerXSpdData), x);
    ldx(offsetof(G, ObjectOffset));
    sta(offsetof(G, Misc_X_Speed), x);
    JMP(SetHPos);
}

int SetHPos() {
    // <conv.chunks.Comment object at 0x100ebe300>
    // <conv.chunks.Comment object at 0x100ebe4e0>
    // <conv.chunks.Comment object at 0x100ebe630>
    // <conv.chunks.Comment object at 0x100ebe750>
    // <conv.chunks.Comment object at 0x100ebe8a0>
    // <conv.chunks.Comment object at 0x100ebea20>
    // <conv.chunks.Comment object at 0x100ebeab0>
    // <conv.chunks.Comment object at 0x100ebec00>
    // <conv.chunks.Comment object at 0x100ebed20>
    // <conv.chunks.Comment object at 0x100ebee70>
    dec(offsetof(G, Misc_State), x);
    lda(offsetof(G, Enemy_X_Position), y);
    // <conv.chunks.Comment object at 0x100ebf020>
    clc();
    adc(0x2);
    sta(offsetof(G, Misc_X_Position), x);
    lda(offsetof(G, Enemy_PageLoc), y);
    adc(0x0);
    sta(offsetof(G, Misc_PageLoc), x);
    lda(offsetof(G, Enemy_Y_Position), y);
    // <conv.chunks.Comment object at 0x100ebf200>
    // <conv.chunks.Comment object at 0x100ebf290>
    // <conv.chunks.Comment object at 0x100ebf470>
    // <conv.chunks.Comment object at 0x100ebf5c0>
    // <conv.chunks.Comment object at 0x100ebf650>
    // <conv.chunks.Comment object at 0x100ebf830>
    sec();
    sbc(0xa);
    sta(offsetof(G, Misc_Y_Position), x);
    // <conv.chunks.Comment object at 0x100ebfa10>
    // <conv.chunks.Comment object at 0x100ebfaa0>
    lda(0x1);
    sta(offsetof(G, Misc_Y_HighPos), x);
    BNE(RunHSubs);
    JMP(RunAllH);
}

int RunAllH() {
    // <conv.chunks.Comment object at 0x100ebfce0>
    // <conv.chunks.Comment object at 0x100ebfec0>
    // <conv.chunks.Comment object at 0x100ebffe0>
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}

int RunHSubs() {
    // <conv.chunks.Comment object at 0x100ec41a0>
    JSR(GetMiscOffscreenBits);
    JSR(RelativeMiscPosition);
    JSR(GetMiscBoundBox);
    JSR(DrawHammer);
    rts();
    JMP(CoinBlock);
}

int CoinBlock() {
    JSR(FindEmptyMiscSlot);
    lda(offsetof(G, Block_PageLoc), x);
    sta(offsetof(G, Misc_PageLoc), y);
    lda(offsetof(G, Block_X_Position), x);
    ora(0x5);
    sta(offsetof(G, Misc_X_Position), y);
    lda(offsetof(G, Block_Y_Position), x);
    sbc(0x10);
    sta(offsetof(G, Misc_Y_Position), y);
    JMP(JCoinC);
    JMP(SetupJumpCoin);
}

int SetupJumpCoin() {
    JSR(FindEmptyMiscSlot);
    lda(offsetof(G, Block_PageLoc2), x);
    sta(offsetof(G, Misc_PageLoc), y);
    lda(0x6);
    // <conv.chunks.Comment object at 0x100ec5490>
    // <conv.chunks.Comment object at 0x100ec55b0>
    // <conv.chunks.Comment object at 0x100ec5700>
    // <conv.chunks.Comment object at 0x100ec5880>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100ec5a30>
    asl();
    asl();
    ora(0x5);
    sta(offsetof(G, Misc_X_Position), y);
    lda(0x2);
    adc(0x20);
    sta(offsetof(G, Misc_Y_Position), y);
    JMP(JCoinC);
}

int JCoinC() {
    lda(0xfb);
    sta(offsetof(G, Misc_Y_Speed), y);
    // <conv.chunks.Comment object at 0x100ec62a0>
    lda(0x1);
    sta(offsetof(G, Misc_Y_HighPos), y);
    sta(offsetof(G, Misc_State), y);
    sta(offsetof(G, Square2SoundQueue));
    stx(offsetof(G, ObjectOffset));
    JSR(GiveOneCoin);
    inc(offsetof(G, CoinTallyFor1Ups));
    // <conv.chunks.Comment object at 0x100ec64e0>
    // <conv.chunks.Comment object at 0x100ec66c0>
    // <conv.chunks.Comment object at 0x100ec6810>
    // <conv.chunks.Comment object at 0x100ec6930>
    // <conv.chunks.Comment object at 0x100ec6a50>
    // <conv.chunks.Comment object at 0x100ec6b70>
    rts();
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(0x8);
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // <conv.chunks.Comment object at 0x100ec6d50>
    // <conv.chunks.Comment object at 0x100ec6de0>
    lda(offsetof(G, Misc_State), y);
    BEQ(UseMiscS);
    dey();
    cpy(0x5);
    BNE(FMiscLoop);
    ldy(0x8);
    JMP(UseMiscS);
}

int UseMiscS() {
    // <conv.chunks.Comment object at 0x100ec6ff0>
    // <conv.chunks.Comment object at 0x100ec7140>
    // <conv.chunks.Comment object at 0x100ec71d0>
    // <conv.chunks.Comment object at 0x100ec7260>
    // <conv.chunks.Comment object at 0x100ec7410>
    // <conv.chunks.Comment object at 0x100ec74a0>
    sty(offsetof(G, JumpCoinMiscOffset));
    rts();
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(0x8);
    JMP(MiscLoop);
}

int MiscLoop() {
    // <conv.chunks.Comment object at 0x100ec7770>
    // <conv.chunks.Comment object at 0x100ec7800>
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Misc_State), x);
    BEQ(MiscLoopBack);
    asl();
    BCC(ProcJumpCoin);
    JSR(ProcHammerObj);
    JMP(MiscLoopBack);
    JMP(ProcJumpCoin);
}

int ProcJumpCoin() {
    ldy(offsetof(G, Misc_State), x);
    dey();
    BEQ(JCoinRun);
    inc(offsetof(G, Misc_State), x);
    lda(offsetof(G, Misc_X_Position), x);
    clc();
    adc(offsetof(G, ScrollAmount));
    sta(offsetof(G, Misc_X_Position), x);
    lda(offsetof(G, Misc_PageLoc), x);
    adc(0x0);
    sta(offsetof(G, Misc_PageLoc), x);
    // <conv.chunks.Comment object at 0x100ec79e0>
    // <conv.chunks.Comment object at 0x100ec7b30>
    // <conv.chunks.Comment object at 0x100ec7c80>
    // <conv.chunks.Comment object at 0x100ec7d10>
    // <conv.chunks.Comment object at 0x100ec7e30>
    // <conv.chunks.Comment object at 0x100ec7f50>
    // <conv.chunks.Comment object at 0x100ed40e0>
    // <conv.chunks.Comment object at 0x100ed4140>
    // <conv.chunks.Comment object at 0x100ed41a0>
    // <conv.chunks.Comment object at 0x100ed4320>
    // <conv.chunks.Comment object at 0x100ed43b0>
    // <conv.chunks.Comment object at 0x100ed44d0>
    // <conv.chunks.Comment object at 0x100ed4620>
    // <conv.chunks.Comment object at 0x100ed47a0>
    // <conv.chunks.Comment object at 0x100ed4830>
    // <conv.chunks.Comment object at 0x100ed4950>
    // <conv.chunks.Comment object at 0x100ed4aa0>
    // <conv.chunks.Comment object at 0x100ed4bf0>
    // <conv.chunks.Comment object at 0x100ed4c80>
    lda(offsetof(G, Misc_State), x);
    cmp(0x30);
    BNE(RunJCSubs);
    // <conv.chunks.Comment object at 0x100ed4f80>
    // <conv.chunks.Comment object at 0x100ed5010>
    lda(0x0);
    sta(offsetof(G, Misc_State), x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x100ed5610>
    adc(0xd);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x100ed5820>
    sta(0x0);
    lda(0x6);
    // <conv.chunks.Comment object at 0x100ed58b0>
    sta(0x2);
    lsr();
    sta(0x1);
    lda(0x0);
    JSR(ImposeGravity);
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Misc_Y_Speed), x);
    // <conv.chunks.Comment object at 0x100ed5be0>
    // <conv.chunks.Comment object at 0x100ed5d30>
    // <conv.chunks.Comment object at 0x100ed5dc0>
    // <conv.chunks.Comment object at 0x100ed5eb0>
    // <conv.chunks.Comment object at 0x100ed6060>
    // <conv.chunks.Comment object at 0x100ed6180>
    cmp(0x5);
    BNE(RunJCSubs);
    inc(offsetof(G, Misc_State), x);
    JMP(RunJCSubs);
}

int RunJCSubs() {
    // <conv.chunks.Comment object at 0x100ed6330>
    // <conv.chunks.Comment object at 0x100ed64e0>
    // <conv.chunks.Comment object at 0x100ed6630>
    JSR(RelativeMiscPosition);
    JSR(GetMiscOffscreenBits);
    JSR(GetMiscBoundBox);
    JSR(JCoinGfxHandler);
    JMP(MiscLoopBack);
}

int MiscLoopBack() {
    dex();
    BPL(MiscLoop);
    rts();
    JMP(GiveOneCoin);
}

int GiveOneCoin() {
    lda(0x1);
    sta(((offsetof(G, DigitModifier)) + (5)));
    ldx(offsetof(G, CurrentPlayer));
    ldy(offsetof(G, CoinTallyOffsets), x);
    JSR(DigitsMathRoutine);
    inc(offsetof(G, CoinTally));
    // <conv.chunks.Comment object at 0x100ed6ff0>
    // <conv.chunks.Comment object at 0x100ed7290>
    // <conv.chunks.Comment object at 0x100ed7500>
    // <conv.chunks.Comment object at 0x100ed7620>
    // <conv.chunks.Comment object at 0x100ed7770>
    // <conv.chunks.Comment object at 0x100ed7890>
    lda(offsetof(G, CoinTally));
    cmp(100);
    BNE(CoinPoints);
    // <conv.chunks.Comment object at 0x100ed7aa0>
    // <conv.chunks.Comment object at 0x100ed7b30>
    lda(0x0);
    sta(offsetof(G, CoinTally));
    inc(offsetof(G, NumberofLives));
    // <conv.chunks.Comment object at 0x100ed7d40>
    // <conv.chunks.Comment object at 0x100ed7ef0>
    lda(offsetof(G, Sfx_ExtraLife));
    sta(offsetof(G, Square2SoundQueue));
    JMP(CoinPoints);
}

int CoinPoints() {
    lda(0x2);
    sta(((offsetof(G, DigitModifier)) + (4)));
    JMP(AddToScore);
}

int AddToScore() {
    ldx(offsetof(G, CurrentPlayer));
    ldy(offsetof(G, ScoreOffsets), x);
    JSR(DigitsMathRoutine);
    JMP(GetSBNybbles);
}

int GetSBNybbles() {
    ldy(offsetof(G, CurrentPlayer));
    lda(offsetof(G, StatusBarNybbles), y);
    JMP(UpdateNumber);
}

int UpdateNumber() {
    JSR(PrintStatusBarNumbers);
    // <conv.chunks.Comment object at 0x100edcc20>
    ldy(offsetof(G, VRAM_Buffer1_Offset));
    lda(((offsetof(G, VRAM_Buffer1)) - (6)), y);
    BNE(NoZSup);
    // <conv.chunks.Comment object at 0x100edce30>
    // <conv.chunks.Comment object at 0x100edd040>
    lda(0x24);
    sta(((offsetof(G, VRAM_Buffer1)) - (6)), y);
    JMP(NoZSup);
}

int NoZSup() {
    // <conv.chunks.Comment object at 0x100edd460>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(SetupPowerUp);
}

int SetupPowerUp() {
    lda(offsetof(G, PowerUpObject));
    sta(((offsetof(G, Enemy_ID)) + (5)));
    lda(offsetof(G, Block_PageLoc), x);
    sta(((offsetof(G, Enemy_PageLoc)) + (5)));
    lda(offsetof(G, Block_X_Position), x);
    sta(((offsetof(G, Enemy_X_Position)) + (5)));
    // <conv.chunks.Comment object at 0x100edd6d0>
    // <conv.chunks.Comment object at 0x100edd7f0>
    // <conv.chunks.Comment object at 0x100edd9d0>
    // <conv.chunks.Comment object at 0x100eddb20>
    // <conv.chunks.Comment object at 0x100eddd00>
    // <conv.chunks.Comment object at 0x100edde50>
    lda(0x1);
    sta(((offsetof(G, Enemy_Y_HighPos)) + (5)));
    lda(offsetof(G, Block_Y_Position), x);
    // <conv.chunks.Comment object at 0x100ede090>
    // <conv.chunks.Comment object at 0x100ede300>
    sec();
    sbc(0x8);
    sta(((offsetof(G, Enemy_Y_Position)) + (5)));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // <conv.chunks.Comment object at 0x100ede4e0>
    // <conv.chunks.Comment object at 0x100ede570>
    // <conv.chunks.Comment object at 0x100ede7e0>
    lda(0x1);
    sta(((offsetof(G, Enemy_State)) + (5)));
    sta(((offsetof(G, Enemy_Flag)) + (5)));
    // <conv.chunks.Comment object at 0x100ede8a0>
    // <conv.chunks.Comment object at 0x100edeb10>
    lda(0x3);
    sta(((offsetof(G, Enemy_BoundBoxCtrl)) + (5)));
    // <conv.chunks.Comment object at 0x100eded50>
    lda(offsetof(G, PowerUpType));
    cmp(0x2);
    BCS(PutBehind);
    lda(offsetof(G, PlayerStatus));
    // <conv.chunks.Comment object at 0x100edf0b0>
    // <conv.chunks.Comment object at 0x100edf140>
    // <conv.chunks.Comment object at 0x100edf2f0>
    cmp(0x2);
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // <conv.chunks.Comment object at 0x100edf470>
    // <conv.chunks.Comment object at 0x100edf680>
    // <conv.chunks.Comment object at 0x100edf710>
    sta(offsetof(G, PowerUpType));
    JMP(PutBehind);
}

int PutBehind() {
    lda(0b100000);
    sta(((offsetof(G, Enemy_SprAttrib)) + (5)));
    // <conv.chunks.Comment object at 0x100edf9b0>
    lda(offsetof(G, Sfx_GrowPowerUp));
    sta(offsetof(G, Square2SoundQueue));
    // <conv.chunks.Comment object at 0x100edfc80>
    rts();
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x100edfe90>
    stx(offsetof(G, ObjectOffset));
    lda(((offsetof(G, Enemy_State)) + (5)));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda(offsetof(G, TimerControl));
    BNE(RunPUSubs);
    lda(offsetof(G, PowerUpType));
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x100eec0e0>
    // <conv.chunks.Comment object at 0x100eec2c0>
    // <conv.chunks.Comment object at 0x100eec440>
    // <conv.chunks.Comment object at 0x100eec4d0>
    // <conv.chunks.Comment object at 0x100eec5f0>
    // <conv.chunks.Comment object at 0x100eec710>
    // <conv.chunks.Comment object at 0x100eec830>
    // <conv.chunks.Comment object at 0x100eec950>
    cmp(0x3);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x100eecb00>
    cmp(0x2);
    BNE(RunPUSubs);
    JSR(MoveJumpingEnemy);
    JSR(EnemyJump);
    JMP(RunPUSubs);
    JMP(ShroomM);
}

int ShroomM() {
    // <conv.chunks.Comment object at 0x100eecd40>
    // <conv.chunks.Comment object at 0x100eecef0>
    // <conv.chunks.Comment object at 0x100eed010>
    // <conv.chunks.Comment object at 0x100eed130>
    // <conv.chunks.Comment object at 0x100eed250>
    JSR(MoveNormalEnemy);
    JSR(EnemyToBGCollisionDet);
    JMP(RunPUSubs);
    JMP(GrowThePowerUp);
}

int GrowThePowerUp() {
    lda(offsetof(G, FrameCounter));
    anda(0x3);
    BNE(ChkPUSte);
    dec(((offsetof(G, Enemy_Y_Position)) + (5)));
    lda(((offsetof(G, Enemy_State)) + (5)));
    inc(((offsetof(G, Enemy_State)) + (5)));
    cmp(0x11);
    BCC(ChkPUSte);
    // <conv.chunks.Comment object at 0x100eed640>
    // <conv.chunks.Comment object at 0x100eed760>
    // <conv.chunks.Comment object at 0x100eed7f0>
    // <conv.chunks.Comment object at 0x100eed9a0>
    // <conv.chunks.Comment object at 0x100eedb80>
    // <conv.chunks.Comment object at 0x100eedd60>
    // <conv.chunks.Comment object at 0x100eedf40>
    // <conv.chunks.Comment object at 0x100eedfd0>
    lda(0x10);
    sta(offsetof(G, Enemy_X_Speed), x);
    // <conv.chunks.Comment object at 0x100eee1e0>
    lda(0b10000000);
    sta(((offsetof(G, Enemy_State)) + (5)));
    asl();
    sta(((offsetof(G, Enemy_SprAttrib)) + (5)));
    rol();
    sta(offsetof(G, Enemy_MovingDir), x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // <conv.chunks.Comment object at 0x100eee4b0>
    // <conv.chunks.Comment object at 0x100eee6c0>
    // <conv.chunks.Comment object at 0x100eee750>
    // <conv.chunks.Comment object at 0x100eee960>
    // <conv.chunks.Comment object at 0x100eee9f0>
    // <conv.chunks.Comment object at 0x100eeeb40>
    lda(((offsetof(G, Enemy_State)) + (5)));
    cmp(0x6);
    BCC(ExitPUp);
    JMP(RunPUSubs);
}

int RunPUSubs() {
    // <conv.chunks.Comment object at 0x100eeed50>
    // <conv.chunks.Comment object at 0x100eeede0>
    // <conv.chunks.Comment object at 0x100eeefc0>
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    JSR(GetEnemyBoundBox);
    JSR(DrawPowerUp);
    JSR(PlayerEnemyCollision);
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}

int ExitPUp() {
    // <conv.chunks.Comment object at 0x100eef110>
    // <conv.chunks.Comment object at 0x100eef230>
    // <conv.chunks.Comment object at 0x100eef350>
    // <conv.chunks.Comment object at 0x100eef470>
    // <conv.chunks.Comment object at 0x100eef590>
    // <conv.chunks.Comment object at 0x100eef6b0>
    rts();
    JMP(PlayerHeadCollision);
}

int PlayerHeadCollision() {
    pha();
    lda(0x11);
    ldx(offsetof(G, SprDataOffset_Ctrl));
    ldy(offsetof(G, PlayerSize));
    BNE(DBlockSte);
    lda(0x12);
    JMP(DBlockSte);
}

int DBlockSte() {
    // <conv.chunks.Comment object at 0x100eef920>
    // <conv.chunks.Comment object at 0x100eefb30>
    // <conv.chunks.Comment object at 0x100eefbc0>
    // <conv.chunks.Comment object at 0x100eefd70>
    // <conv.chunks.Comment object at 0x100eefe90>
    // <conv.chunks.Comment object at 0x100eeffb0>
    // <conv.chunks.Comment object at 0x100ef4080>
    sta(offsetof(G, Block_State), x);
    JSR(DestroyBlockMetatile);
    ldx(offsetof(G, SprDataOffset_Ctrl));
    lda(0x2);
    sta(offsetof(G, Block_Orig_YPos), x);
    // <conv.chunks.Comment object at 0x100ef4290>
    // <conv.chunks.Comment object at 0x100ef43b0>
    // <conv.chunks.Comment object at 0x100ef4500>
    // <conv.chunks.Comment object at 0x100ef4590>
    tay();
    lda(0x6);
    sta(offsetof(G, Block_BBuf_Low), x);
    lda((0x6), y);
    JSR(BlockBumpedChk);
    sta(0x0);
    ldy(offsetof(G, PlayerSize));
    BNE(ChkBrick);
    tya();
    JMP(ChkBrick);
}

int ChkBrick() {
    // <conv.chunks.Comment object at 0x100ef4800>
    // <conv.chunks.Comment object at 0x100ef4890>
    // <conv.chunks.Comment object at 0x100ef4a40>
    // <conv.chunks.Comment object at 0x100ef4aa0>
    // <conv.chunks.Comment object at 0x100ef4d10>
    // <conv.chunks.Comment object at 0x100ef4da0>
    // <conv.chunks.Comment object at 0x100ef4f20>
    // <conv.chunks.Comment object at 0x100ef5070>
    // <conv.chunks.Comment object at 0x100ef5100>
    BCC(PutMTileB);
    ldy(0x11);
    sty(offsetof(G, Block_State), x);
    lda(0xc4);
    ldy(0x0);
    cpy(0x58);
    BEQ(StartBTmr);
    cpy(0x5d);
    BNE(PutMTileB);
    JMP(StartBTmr);
}

int StartBTmr() {
    // <conv.chunks.Comment object at 0x100ef5250>
    // <conv.chunks.Comment object at 0x100ef52e0>
    // <conv.chunks.Comment object at 0x100ef54c0>
    // <conv.chunks.Comment object at 0x100ef5610>
    // <conv.chunks.Comment object at 0x100ef56a0>
    // <conv.chunks.Comment object at 0x100ef5790>
    // <conv.chunks.Comment object at 0x100ef5940>
    // <conv.chunks.Comment object at 0x100ef59d0>
    // <conv.chunks.Comment object at 0x100ef5b80>
    lda(offsetof(G, BrickCoinTimerFlag));
    BNE(ContBTmr);
    // <conv.chunks.Comment object at 0x100ef5cd0>
    lda(0xb);
    sta(offsetof(G, BrickCoinTimer));
    inc(offsetof(G, BrickCoinTimerFlag));
    JMP(ContBTmr);
}

int ContBTmr() {
    // <conv.chunks.Comment object at 0x100ef5e50>
    // <conv.chunks.Comment object at 0x100ef6000>
    // <conv.chunks.Comment object at 0x100ef6120>
    lda(offsetof(G, BrickCoinTimer));
    BNE(PutOldMT);
    ldy(0xc4);
    JMP(PutOldMT);
}

int PutOldMT() {
    // <conv.chunks.Comment object at 0x100ef6270>
    // <conv.chunks.Comment object at 0x100ef6390>
    // <conv.chunks.Comment object at 0x100ef6420>
    tya();
    JMP(PutMTileB);
}

int PutMTileB() {
    // <conv.chunks.Comment object at 0x100ef65a0>
    sta(offsetof(G, Block_Metatile), x);
    JSR(InitBlock_XY_Pos);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x100ef6720>
    // <conv.chunks.Comment object at 0x100ef6870>
    lda(0x23);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x100ef69c0>
    lda(0x10);
    sta(offsetof(G, BlockBounceTimer));
    pla();
    sta(0x5);
    ldy(0x0);
    lda(offsetof(G, CrouchingFlag));
    BNE(SmallBP);
    lda(offsetof(G, PlayerSize));
    BEQ(BigBP);
    JMP(SmallBP);
}

int SmallBP() {
    // <conv.chunks.Comment object at 0x100ef6c30>
    // <conv.chunks.Comment object at 0x100ef6e10>
    // <conv.chunks.Comment object at 0x100ef6ed0>
    // <conv.chunks.Comment object at 0x100ef6f60>
    // <conv.chunks.Comment object at 0x100ef7050>
    // <conv.chunks.Comment object at 0x100ef7200>
    // <conv.chunks.Comment object at 0x100ef7350>
    // <conv.chunks.Comment object at 0x100ef7470>
    // <conv.chunks.Comment object at 0x100ef75c0>
    iny();
    JMP(BigBP);
}

int BigBP() {
    // <conv.chunks.Comment object at 0x100ef76e0>
    lda(offsetof(G, Player_Y_Position));
    clc();
    adc(offsetof(G, BlockYPosAdderData), y);
    anda(0xf0);
    sta(offsetof(G, Block_Y_Position), x);
    ldy(offsetof(G, Block_State), x);
    // <conv.chunks.Comment object at 0x100ef78f0>
    // <conv.chunks.Comment object at 0x100ef7a40>
    // <conv.chunks.Comment object at 0x100ef7ad0>
    // <conv.chunks.Comment object at 0x100ef7cb0>
    cpy(0x11);
    BEQ(Unbreak);
    JSR(BrickShatter);
    JMP(InvOBit);
    JMP(Unbreak);
}

int Unbreak() {
    // <conv.chunks.Comment object at 0x100ef7e60>
    // <conv.chunks.Comment object at 0x100f00080>
    // <conv.chunks.Comment object at 0x100f001a0>
    // <conv.chunks.Comment object at 0x100f002f0>
    JSR(BumpBlock);
    JMP(InvOBit);
}

int InvOBit() {
    // <conv.chunks.Comment object at 0x100f00470>
    lda(offsetof(G, SprDataOffset_Ctrl));
    eor(0x1);
    // <conv.chunks.Comment object at 0x100f005f0>
    sta(offsetof(G, SprDataOffset_Ctrl));
    rts();
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x100f00950>
    clc();
    adc(0x8);
    anda(0xf0);
    sta(offsetof(G, Block_X_Position), x);
    // <conv.chunks.Comment object at 0x100f00b00>
    // <conv.chunks.Comment object at 0x100f00b90>
    // <conv.chunks.Comment object at 0x100f00cb0>
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    sta(offsetof(G, Block_PageLoc), x);
    sta(offsetof(G, Block_PageLoc2), x);
    // <conv.chunks.Comment object at 0x100f00f80>
    // <conv.chunks.Comment object at 0x100f01010>
    // <conv.chunks.Comment object at 0x100f011f0>
    lda(offsetof(G, Player_Y_HighPos));
    sta(offsetof(G, Block_Y_HighPos), x);
    rts();
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x100f016a0>
    lda(offsetof(G, Sfx_Bump));
    sta(offsetof(G, Square1SoundQueue));
    // <conv.chunks.Comment object at 0x100f018b0>
    lda(0x0);
    sta(offsetof(G, Block_X_Speed), x);
    sta(offsetof(G, Block_Y_MoveForce), x);
    sta(offsetof(G, Player_Y_Speed));
    // <conv.chunks.Comment object at 0x100f01a30>
    // <conv.chunks.Comment object at 0x100f01c10>
    // <conv.chunks.Comment object at 0x100f01d60>
    lda(0xfe);
    sta(offsetof(G, Block_Y_Speed), x);
    lda(0x5);
    JSR(BlockBumpedChk);
    BCC(ExitBlockChk);
    tya();
    cmp(0x9);
    BCC(BlockCode);
    sbc(0x5);
    JMP(BlockCode);
}

int BlockCode() {
    // <conv.chunks.Comment object at 0x100f01ee0>
    // <conv.chunks.Comment object at 0x100f020f0>
    // <conv.chunks.Comment object at 0x100f02180>
    // <conv.chunks.Comment object at 0x100f02300>
    // <conv.chunks.Comment object at 0x100f02450>
    // <conv.chunks.Comment object at 0x100f024e0>
    // <conv.chunks.Comment object at 0x100f02570>
    // <conv.chunks.Comment object at 0x100f02720>
    // <conv.chunks.Comment object at 0x100f027b0>
    JSR(JumpEngine);
    JMP(MushFlowerBlock);
}

int MushFlowerBlock() {
    lda(0x0);
    JMP(StarBlock);
}

int StarBlock() {
    lda(0x2);
    JMP(ExtraLifeMushBlock);
}

int ExtraLifeMushBlock() {
    lda(0x3);
    sta(0x39);
    // <conv.chunks.Comment object at 0x100f032c0>
    // <conv.chunks.Comment object at 0x100f03470>
    JMP(SetupPowerUp);
    JMP(VineBlock);
}

int VineBlock() {
    ldx(0x5);
    ldy(offsetof(G, SprDataOffset_Ctrl));
    JSR(Setup_Vine);
    JMP(ExitBlockChk);
}

int ExitBlockChk() {
    rts();
    JMP(BlockBumpedChk);
}

int BlockBumpedChk() {
    ldy(0xd);
    JMP(BumpChkLoop);
}

int BumpChkLoop() {
    // <conv.chunks.Comment object at 0x100f03ef0>
    // <conv.chunks.Comment object at 0x100f03f50>
    cmp(offsetof(G, BrickQBlockMetatiles), y);
    BEQ(MatchBump);
    dey();
    BPL(BumpChkLoop);
    clc();
    JMP(MatchBump);
}

int MatchBump() {
    // <conv.chunks.Comment object at 0x100f0c710>
    // <conv.chunks.Comment object at 0x100f0c860>
    // <conv.chunks.Comment object at 0x100f0c8f0>
    // <conv.chunks.Comment object at 0x100f0ca40>
    // <conv.chunks.Comment object at 0x100f0cad0>
    rts();
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x100f0cc20>
    lda(offsetof(G, Sfx_BrickShatter));
    sta(offsetof(G, Block_RepFlag), x);
    sta(offsetof(G, NoiseSoundQueue));
    JSR(SpawnBrickChunks);
    // <conv.chunks.Comment object at 0x100f0ce30>
    // <conv.chunks.Comment object at 0x100f0cf80>
    // <conv.chunks.Comment object at 0x100f0d0a0>
    lda(0xfe);
    sta(offsetof(G, Player_Y_Speed));
    // <conv.chunks.Comment object at 0x100f0d220>
    lda(0x5);
    sta(((offsetof(G, DigitModifier)) + (5)));
    JSR(AddToScore);
    ldx(offsetof(G, SprDataOffset_Ctrl));
    // <conv.chunks.Comment object at 0x100f0d430>
    // <conv.chunks.Comment object at 0x100f0d6a0>
    // <conv.chunks.Comment object at 0x100f0d7c0>
    rts();
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx(offsetof(G, SprDataOffset_Ctrl));
    ldy(0x2);
    BEQ(TopEx);
    tya();
    // <conv.chunks.Comment object at 0x100f0d9d0>
    // <conv.chunks.Comment object at 0x100f0db20>
    // <conv.chunks.Comment object at 0x100f0dbb0>
    // <conv.chunks.Comment object at 0x100f0dd90>
    sec();
    sbc(0x10);
    sta(0x2);
    // <conv.chunks.Comment object at 0x100f0deb0>
    // <conv.chunks.Comment object at 0x100f0e000>
    tay();
    lda((0x6), y);
    cmp(0xc2);
    BNE(TopEx);
    // <conv.chunks.Comment object at 0x100f0e180>
    // <conv.chunks.Comment object at 0x100f0e1e0>
    // <conv.chunks.Comment object at 0x100f0e390>
    lda(0x0);
    sta((0x6), y);
    JSR(RemoveCoin_Axe);
    ldx(offsetof(G, SprDataOffset_Ctrl));
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // <conv.chunks.Comment object at 0x100f0e5d0>
    // <conv.chunks.Comment object at 0x100f0e6c0>
    // <conv.chunks.Comment object at 0x100f0e900>
    // <conv.chunks.Comment object at 0x100f0ea20>
    // <conv.chunks.Comment object at 0x100f0eb70>
    rts();
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda(offsetof(G, Block_X_Position), x);
    sta(offsetof(G, Block_Orig_XPos), x);
    // <conv.chunks.Comment object at 0x100f0ecf0>
    // <conv.chunks.Comment object at 0x100f0ee40>
    lda(0xf0);
    sta(offsetof(G, Block_X_Speed), x);
    // <conv.chunks.Comment object at 0x100f0eff0>
    sta(((offsetof(G, Block_X_Speed)) + (2)), x);
    lda(0xfa);
    sta(offsetof(G, Block_Y_Speed), x);
    // <conv.chunks.Comment object at 0x100f0f410>
    lda(0xfc);
    sta(((offsetof(G, Block_Y_Speed)) + (2)), x);
    // <conv.chunks.Comment object at 0x100f0f650>
    lda(0x0);
    sta(offsetof(G, Block_Y_MoveForce), x);
    // <conv.chunks.Comment object at 0x100f0f950>
    sta(((offsetof(G, Block_Y_MoveForce)) + (2)), x);
    lda(offsetof(G, Block_PageLoc), x);
    sta(((offsetof(G, Block_PageLoc)) + (2)), x);
    // <conv.chunks.Comment object at 0x100f0fe30>
    lda(offsetof(G, Block_X_Position), x);
    sta(((offsetof(G, Block_X_Position)) + (2)), x);
    // <conv.chunks.Comment object at 0x100f141a0>
    lda(offsetof(G, Block_Y_Position), x);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x100f14500>
    // <conv.chunks.Comment object at 0x100f14590>
    sta(((offsetof(G, Block_Y_Position)) + (2)), x);
    lda(0xfa);
    sta(offsetof(G, Block_Y_Speed), x);
    // <conv.chunks.Comment object at 0x100f148f0>
    rts();
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda(offsetof(G, Block_State), x);
    BEQ(UpdSte);
    anda(0xf);
    pha();
    tay();
    // <conv.chunks.Comment object at 0x100f14bc0>
    // <conv.chunks.Comment object at 0x100f14d10>
    // <conv.chunks.Comment object at 0x100f14e60>
    // <conv.chunks.Comment object at 0x100f14fb0>
    // <conv.chunks.Comment object at 0x100f15070>
    txa();
    clc();
    adc(0x9);
    tax();
    dey();
    BEQ(BouncingBlockHandler);
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    // <conv.chunks.Comment object at 0x100f15220>
    // <conv.chunks.Comment object at 0x100f15370>
    // <conv.chunks.Comment object at 0x100f15430>
    // <conv.chunks.Comment object at 0x100f154c0>
    // <conv.chunks.Comment object at 0x100f155e0>
    // <conv.chunks.Comment object at 0x100f15700>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x100f158e0>
    adc(0x2);
    tax();
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    ldx(offsetof(G, ObjectOffset));
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBrickChunks);
    pla();
    ldy(offsetof(G, Block_Y_HighPos), x);
    BEQ(UpdSte);
    pha();
    // <conv.chunks.Comment object at 0x100f15af0>
    // <conv.chunks.Comment object at 0x100f15c10>
    // <conv.chunks.Comment object at 0x100f15d30>
    // <conv.chunks.Comment object at 0x100f15e50>
    // <conv.chunks.Comment object at 0x100f15f70>
    // <conv.chunks.Comment object at 0x100f16090>
    // <conv.chunks.Comment object at 0x100f161e0>
    // <conv.chunks.Comment object at 0x100f16270>
    // <conv.chunks.Comment object at 0x100f163c0>
    // <conv.chunks.Comment object at 0x100f16540>
    lda(0xf0);
    cmp(((offsetof(G, Block_Y_Position)) + (2)), x);
    BCS(ChkTop);
    sta(((offsetof(G, Block_Y_Position)) + (2)), x);
    JMP(ChkTop);
}

int ChkTop() {
    // <conv.chunks.Comment object at 0x100f16630>
    // <conv.chunks.Comment object at 0x100f168d0>
    // <conv.chunks.Comment object at 0x100f16a20>
    // <conv.chunks.Comment object at 0x100f16c30>
    lda(offsetof(G, Block_Y_Position), x);
    cmp(0xf0);
    pla();
    BCC(UpdSte);
    BCS(KillBlock);
    JMP(BouncingBlockHandler);
}

int BouncingBlockHandler() {
    JSR(ImposeGravityBlock);
    ldx(offsetof(G, ObjectOffset));
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBlock);
    lda(offsetof(G, Block_Y_Position), x);
    anda(0xf);
    cmp(0x5);
    pla();
    BCS(UpdSte);
    // <conv.chunks.Comment object at 0x100f17260>
    // <conv.chunks.Comment object at 0x100f17380>
    // <conv.chunks.Comment object at 0x100f174a0>
    // <conv.chunks.Comment object at 0x100f175c0>
    // <conv.chunks.Comment object at 0x100f176e0>
    // <conv.chunks.Comment object at 0x100f17800>
    // <conv.chunks.Comment object at 0x100f17950>
    // <conv.chunks.Comment object at 0x100f179e0>
    // <conv.chunks.Comment object at 0x100f17bc0>
    // <conv.chunks.Comment object at 0x100f17c50>
    lda(0x1);
    sta(offsetof(G, Block_RepFlag), x);
    JMP(KillBlock);
}

int KillBlock() {
    // <conv.chunks.Comment object at 0x100f17e00>
    // <conv.chunks.Comment object at 0x100f17fe0>
    lda(0x0);
    JMP(UpdSte);
}

int UpdSte() {
    // <conv.chunks.Comment object at 0x100f200e0>
    sta(offsetof(G, Block_State), x);
    rts();
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(0x1);
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // <conv.chunks.Comment object at 0x100f20470>
    // <conv.chunks.Comment object at 0x100f20500>
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, VRAM_Buffer1));
    BNE(NextBUpd);
    lda(offsetof(G, Block_RepFlag), x);
    BEQ(NextBUpd);
    lda(offsetof(G, Block_BBuf_Low), x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x100f206e0>
    // <conv.chunks.Comment object at 0x100f20800>
    // <conv.chunks.Comment object at 0x100f20920>
    // <conv.chunks.Comment object at 0x100f20a70>
    // <conv.chunks.Comment object at 0x100f20b90>
    // <conv.chunks.Comment object at 0x100f20d10>
    lda(0x5);
    sta(0x7);
    lda(offsetof(G, Block_Orig_YPos), x);
    sta(0x2);
    // <conv.chunks.Comment object at 0x100f20f20>
    // <conv.chunks.Comment object at 0x100f20fb0>
    // <conv.chunks.Comment object at 0x100f21190>
    tay();
    lda(offsetof(G, Block_Metatile), x);
    sta((0x6), y);
    JSR(ReplaceBlockMetatile);
    // <conv.chunks.Comment object at 0x100f21310>
    // <conv.chunks.Comment object at 0x100f21460>
    // <conv.chunks.Comment object at 0x100f214c0>
    lda(0x0);
    sta(offsetof(G, Block_RepFlag), x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // <conv.chunks.Comment object at 0x100f21760>
    // <conv.chunks.Comment object at 0x100f21940>
    dex();
    BPL(UpdateLoop);
    rts();
    JMP(MoveEnemyHorizontally);
}

int MoveEnemyHorizontally() {
    inx();
    JSR(MoveObjectHorizontally);
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(MovePlayerHorizontally);
}

int MovePlayerHorizontally() {
    lda(offsetof(G, JumpspringAnimCtrl));
    BNE(ExXMove);
    tax();
    JMP(MoveObjectHorizontally);
}

int MoveObjectHorizontally() {
    lda(offsetof(G, SprObject_X_Speed), x);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100f22450>
    // <conv.chunks.Comment object at 0x100f225d0>
    // <conv.chunks.Comment object at 0x100f22690>
    asl();
    asl();
    sta(0x1);
    lda(offsetof(G, SprObject_X_Speed), x);
    lsr();
    // <conv.chunks.Comment object at 0x100f22870>
    // <conv.chunks.Comment object at 0x100f22900>
    // <conv.chunks.Comment object at 0x100f22ae0>
    lsr();
    lsr();
    lsr();
    cmp(0x8);
    // <conv.chunks.Comment object at 0x100f22d20>
    BCC(SaveXSpd);
    ora(0b11110000);
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // <conv.chunks.Comment object at 0x100f22f30>
    // <conv.chunks.Comment object at 0x100f23050>
    sta(0x0);
    ldy(0x0);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x100f23140>
    // <conv.chunks.Comment object at 0x100f23230>
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // <conv.chunks.Comment object at 0x100f23500>
    // <conv.chunks.Comment object at 0x100f23590>
    sty(0x2);
    lda(offsetof(G, SprObject_X_MoveForce), x);
    // <conv.chunks.Comment object at 0x100f23680>
    clc();
    adc(0x1);
    sta(offsetof(G, SprObject_X_MoveForce), x);
    lda(0x0);
    rol();
    pha();
    ror();
    // <conv.chunks.Comment object at 0x100f238f0>
    // <conv.chunks.Comment object at 0x100f23980>
    // <conv.chunks.Comment object at 0x100f23b60>
    // <conv.chunks.Comment object at 0x100f23cb0>
    // <conv.chunks.Comment object at 0x100f23d70>
    // <conv.chunks.Comment object at 0x100f23e30>
    lda(offsetof(G, SprObject_X_Position), x);
    adc(0x0);
    sta(offsetof(G, SprObject_X_Position), x);
    // <conv.chunks.Comment object at 0x101570050>
    // <conv.chunks.Comment object at 0x100f23fe0>
    lda(offsetof(G, SprObject_PageLoc), x);
    adc(0x2);
    sta(offsetof(G, SprObject_PageLoc), x);
    // <conv.chunks.Comment object at 0x1015703e0>
    // <conv.chunks.Comment object at 0x101570470>
    pla();
    clc();
    adc(0x0);
    JMP(ExXMove);
}

int ExXMove() {
    // <conv.chunks.Comment object at 0x1015706e0>
    // <conv.chunks.Comment object at 0x1015707a0>
    // <conv.chunks.Comment object at 0x101570830>
    rts();
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x1015709e0>
    // <conv.chunks.Comment object at 0x101570a40>
    // <conv.chunks.Comment object at 0x101570aa0>
    lda(offsetof(G, TimerControl));
    BNE(NoJSChk);
    lda(offsetof(G, JumpspringAnimCtrl));
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // <conv.chunks.Comment object at 0x101570cb0>
    // <conv.chunks.Comment object at 0x101570e00>
    // <conv.chunks.Comment object at 0x101570f20>
    // <conv.chunks.Comment object at 0x101571070>
    lda(offsetof(G, VerticalForce));
    sta(0x0);
    lda(0x4);
    JMP(ImposeGravitySprObj);
    JMP(MoveD_EnemyVertically);
}

int MoveD_EnemyVertically() {
    ldy(0x3d);
    lda(offsetof(G, Enemy_State), x);
    cmp(0x5);
    BNE(ContVMove);
    JMP(MoveFallingPlatform);
}

int MoveFallingPlatform() {
    ldy(0x20);
    JMP(ContVMove);
}

int ContVMove() {
    // <conv.chunks.Comment object at 0x101571a60>
    // <conv.chunks.Comment object at 0x101571af0>
    JMP(SetHiMax);
    JMP(MoveRedPTroopaDown);
}

int MoveRedPTroopaDown() {
    ldy(0x0);
    JMP(MoveRedPTroopa);
    JMP(MoveRedPTroopaUp);
}

int MoveRedPTroopaUp() {
    ldy(0x1);
    JMP(MoveRedPTroopa);
}

int MoveRedPTroopa() {
    inx();
    // <conv.chunks.Comment object at 0x101572120>
    lda(0x3);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1015722d0>
    lda(0x6);
    sta(0x1);
    // <conv.chunks.Comment object at 0x1015724e0>
    lda(0x2);
    sta(0x2);
    tya();
    JMP(RedPTroopaGrav);
    JMP(MoveDropPlatform);
}

int MoveDropPlatform() {
    ldy(0x7f);
    BNE(SetMdMax);
    JMP(MoveEnemySlowVert);
}

int MoveEnemySlowVert() {
    ldy(0xf);
    JMP(SetMdMax);
}

int SetMdMax() {
    // <conv.chunks.Comment object at 0x101572c90>
    // <conv.chunks.Comment object at 0x101572d20>
    lda(0x2);
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(0x1c);
    JMP(SetHiMax);
}

int SetHiMax() {
    // <conv.chunks.Comment object at 0x101573080>
    // <conv.chunks.Comment object at 0x101573110>
    lda(0x3);
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // <conv.chunks.Comment object at 0x101573260>
    sty(0x0);
    inx();
    JSR(ImposeGravitySprObj);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x101573320>
    // <conv.chunks.Comment object at 0x101573500>
    // <conv.chunks.Comment object at 0x101573620>
    rts();
    JMP(ResidualGravityCode);
}

int ResidualGravityCode() {
    ldy(0x0);
    JMP(ImposeGravityBlock);
}

int ImposeGravityBlock() {
    ldy(0x1);
    lda(0x50);
    // <conv.chunks.Comment object at 0x101573b30>
    // <conv.chunks.Comment object at 0x101573c20>
    sta(0x0);
    lda(offsetof(G, MaxSpdBlockData), y);
    JMP(ImposeGravitySprObj);
}

int ImposeGravitySprObj() {
    sta(0x2);
    lda(0x0);
    JMP(ImposeGravity);
    JMP(MovePlatformDown);
}

int MovePlatformDown() {
    lda(0x0);
    JMP(MovePlatformUp);
}

int MovePlatformUp() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1015785f0>
    pha();
    ldy(offsetof(G, Enemy_ID), x);
    inx();
    lda(0x5);
    cpy(0x29);
    BNE(SetDplSpd);
    lda(0x9);
    JMP(SetDplSpd);
}

int SetDplSpd() {
    // <conv.chunks.Comment object at 0x101578800>
    // <conv.chunks.Comment object at 0x101578980>
    // <conv.chunks.Comment object at 0x101578a10>
    // <conv.chunks.Comment object at 0x101578aa0>
    // <conv.chunks.Comment object at 0x101578bc0>
    // <conv.chunks.Comment object at 0x101578d70>
    // <conv.chunks.Comment object at 0x101578e00>
    sta(0x0);
    lda(0xa);
    // <conv.chunks.Comment object at 0x101578f80>
    sta(0x1);
    lda(0x3);
    // <conv.chunks.Comment object at 0x101579070>
    sta(0x2);
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1015795b0>
    // <conv.chunks.Comment object at 0x1015796d0>
    rts();
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // <conv.chunks.Comment object at 0x1015798b0>
    // <conv.chunks.Comment object at 0x101579910>
    // <conv.chunks.Comment object at 0x1015799a0>
    lda(offsetof(G, SprObject_YMF_Dummy), x);
    clc();
    // <conv.chunks.Comment object at 0x101579b80>
    adc(offsetof(G, SprObject_Y_MoveForce), x);
    sta(offsetof(G, SprObject_YMF_Dummy), x);
    ldy(0x0);
    lda(offsetof(G, SprObject_Y_Speed), x);
    BPL(AlterYP);
    dey();
    JMP(AlterYP);
}

int AlterYP() {
    // <conv.chunks.Comment object at 0x101579e50>
    // <conv.chunks.Comment object at 0x101579ee0>
    // <conv.chunks.Comment object at 0x10157a0c0>
    // <conv.chunks.Comment object at 0x10157a240>
    // <conv.chunks.Comment object at 0x10157a2d0>
    sty(0x7);
    adc(offsetof(G, SprObject_Y_Position), x);
    sta(offsetof(G, SprObject_Y_Position), x);
    // <conv.chunks.Comment object at 0x10157a3f0>
    // <conv.chunks.Comment object at 0x10157a5a0>
    lda(offsetof(G, SprObject_Y_HighPos), x);
    adc(0x7);
    sta(offsetof(G, SprObject_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x10157a840>
    // <conv.chunks.Comment object at 0x10157a8d0>
    lda(offsetof(G, SprObject_Y_MoveForce), x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x10157ac60>
    sta(offsetof(G, SprObject_Y_MoveForce), x);
    lda(offsetof(G, SprObject_Y_Speed), x);
    // <conv.chunks.Comment object at 0x10157ae70>
    adc(0x0);
    sta(offsetof(G, SprObject_Y_Speed), x);
    cmp(0x2);
    BMI(ChkUpM);
    // <conv.chunks.Comment object at 0x10157b200>
    // <conv.chunks.Comment object at 0x10157b290>
    lda(offsetof(G, SprObject_Y_MoveForce), x);
    cmp(0x80);
    // <conv.chunks.Comment object at 0x10157b560>
    BCC(ChkUpM);
    lda(0x2);
    sta(offsetof(G, SprObject_Y_Speed), x);
    // <conv.chunks.Comment object at 0x10157b7a0>
    lda(0x0);
    sta(offsetof(G, SprObject_Y_MoveForce), x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // <conv.chunks.Comment object at 0x10157ba40>
    // <conv.chunks.Comment object at 0x10157bc20>
    pla();
    BEQ(ExVMove);
    // <conv.chunks.Comment object at 0x10157bd40>
    lda(0x2);
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x10157be90>
    tay();
    iny();
    sty(0x7);
    // <conv.chunks.Comment object at 0x101584230>
    lda(offsetof(G, SprObject_Y_MoveForce), x);
    sec();
    sbc(0x1);
    sta(offsetof(G, SprObject_Y_MoveForce), x);
    // <conv.chunks.Comment object at 0x101584470>
    // <conv.chunks.Comment object at 0x101584530>
    // <conv.chunks.Comment object at 0x1015845c0>
    lda(offsetof(G, SprObject_Y_Speed), x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x101584890>
    sta(offsetof(G, SprObject_Y_Speed), x);
    cmp(0x7);
    BPL(ExVMove);
    // <conv.chunks.Comment object at 0x101584b00>
    // <conv.chunks.Comment object at 0x101584b90>
    lda(offsetof(G, SprObject_Y_MoveForce), x);
    cmp(0x80);
    BCS(ExVMove);
    // <conv.chunks.Comment object at 0x101584e60>
    // <conv.chunks.Comment object at 0x101584ef0>
    lda(0x7);
    sta(offsetof(G, SprObject_Y_Speed), x);
    // <conv.chunks.Comment object at 0x1015850d0>
    lda(0xff);
    sta(offsetof(G, SprObject_Y_MoveForce), x);
    JMP(ExVMove);
}

int ExVMove() {
    // <conv.chunks.Comment object at 0x101585370>
    // <conv.chunks.Comment object at 0x101585580>
    rts();
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda(offsetof(G, Enemy_Flag), x);
    pha();
    // <conv.chunks.Comment object at 0x101585700>
    // <conv.chunks.Comment object at 0x101585880>
    asl();
    BCS(ChkBowserF);
    pla();
    BEQ(ChkAreaTsk);
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}

int ChkAreaTsk() {
    // <conv.chunks.Comment object at 0x1015859a0>
    // <conv.chunks.Comment object at 0x101585af0>
    // <conv.chunks.Comment object at 0x101585b80>
    // <conv.chunks.Comment object at 0x101585ca0>
    // <conv.chunks.Comment object at 0x101585dc0>
    lda(offsetof(G, AreaParserTaskNum));
    anda(0x7);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x101585f70>
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // <conv.chunks.Comment object at 0x101586210>
    // <conv.chunks.Comment object at 0x101586330>
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x101586420>
    tay();
    lda(offsetof(G, Enemy_Flag), y);
    // <conv.chunks.Comment object at 0x1015865d0>
    BNE(ExitELCore);
    sta(offsetof(G, Enemy_Flag), x);
    JMP(ExitELCore);
}

int ExitELCore() {
    rts();
    JMP(ExecGameLoopback);
}

int ExecGameLoopback() {
    lda(offsetof(G, Player_PageLoc));
    // <conv.chunks.Comment object at 0x101586bd0>
    sec();
    sbc(0x4);
    sta(offsetof(G, Player_PageLoc));
    lda(offsetof(G, CurrentPageLoc));
    // <conv.chunks.Comment object at 0x1015941a0>
    sec();
    sbc(0x4);
    sta(offsetof(G, CurrentPageLoc));
    lda(offsetof(G, ScreenLeft_PageLoc));
    sec();
    // <conv.chunks.Comment object at 0x101594530>
    // <conv.chunks.Comment object at 0x101594680>
    sbc(0x4);
    sta(offsetof(G, ScreenLeft_PageLoc));
    lda(offsetof(G, ScreenRight_PageLoc));
    sec();
    // <conv.chunks.Comment object at 0x1015948f0>
    // <conv.chunks.Comment object at 0x101594a40>
    sbc(0x4);
    sta(offsetof(G, ScreenRight_PageLoc));
    lda(offsetof(G, AreaObjectPageLoc));
    sec();
    // <conv.chunks.Comment object at 0x101594cb0>
    // <conv.chunks.Comment object at 0x101594e00>
    sbc(0x4);
    sta(offsetof(G, AreaObjectPageLoc));
    lda(0x0);
    sta(offsetof(G, EnemyObjectPageSel));
    // <conv.chunks.Comment object at 0x101595070>
    // <conv.chunks.Comment object at 0x101595100>
    sta(offsetof(G, AreaObjectPageSel));
    sta(offsetof(G, EnemyDataOffset));
    sta(offsetof(G, EnemyObjectPageLoc));
    lda(offsetof(G, AreaDataOfsLoopback), y);
    sta(offsetof(G, AreaDataOffset));
    // <conv.chunks.Comment object at 0x1015953a0>
    // <conv.chunks.Comment object at 0x1015954c0>
    // <conv.chunks.Comment object at 0x1015955e0>
    // <conv.chunks.Comment object at 0x101595730>
    rts();
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda(offsetof(G, LoopCommand));
    // <conv.chunks.Comment object at 0x101595910>
    BEQ(ChkEnemyFrenzy);
    lda(offsetof(G, CurrentColumnPos));
    BNE(ChkEnemyFrenzy);
    ldy(0xb);
    JMP(FindLoop);
}

int FindLoop() {
    dey();
    BMI(ChkEnemyFrenzy);
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, LoopCmdWorldNumber), y);
    // <conv.chunks.Comment object at 0x101595f40>
    // <conv.chunks.Comment object at 0x101596060>
    // <conv.chunks.Comment object at 0x101596180>
    BNE(FindLoop);
    lda(offsetof(G, CurrentPageLoc));
    cmp(offsetof(G, LoopCmdPageNumber), y);
    // <conv.chunks.Comment object at 0x1015963c0>
    // <conv.chunks.Comment object at 0x1015964e0>
    BNE(FindLoop);
    lda(offsetof(G, Player_Y_Position));
    cmp(offsetof(G, LoopCmdYPosition), y);
    // <conv.chunks.Comment object at 0x101596720>
    // <conv.chunks.Comment object at 0x101596840>
    BNE(WrongChk);
    lda(offsetof(G, Player_State));
    cmp(0x0);
    BNE(WrongChk);
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World7));
    BNE(InitMLp);
    inc(offsetof(G, MultiLoopCorrectCntr));
    JMP(IncMLoop);
}

int IncMLoop() {
    // <conv.chunks.Comment object at 0x101596a80>
    // <conv.chunks.Comment object at 0x101596ba0>
    // <conv.chunks.Comment object at 0x101596c30>
    // <conv.chunks.Comment object at 0x101596de0>
    // <conv.chunks.Comment object at 0x101596f00>
    // <conv.chunks.Comment object at 0x101596f60>
    // <conv.chunks.Comment object at 0x1015971a0>
    // <conv.chunks.Comment object at 0x1015972c0>
    inc(offsetof(G, MultiLoopPassCntr));
    lda(offsetof(G, MultiLoopPassCntr));
    // <conv.chunks.Comment object at 0x101597410>
    cmp(0x3);
    BNE(InitLCmd);
    lda(offsetof(G, MultiLoopCorrectCntr));
    // <conv.chunks.Comment object at 0x101597590>
    // <conv.chunks.Comment object at 0x101597740>
    cmp(0x3);
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // <conv.chunks.Comment object at 0x1015978c0>
    // <conv.chunks.Comment object at 0x101597aa0>
    // <conv.chunks.Comment object at 0x101597bc0>
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World7));
    // <conv.chunks.Comment object at 0x101597d10>
    BEQ(IncMLoop);
    JMP(DoLpBack);
}

int DoLpBack() {
    // <conv.chunks.Comment object at 0x101597f50>
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}

int InitMLp() {
    // <conv.chunks.Comment object at 0x10159c1d0>
    lda(0x0);
    sta(offsetof(G, MultiLoopPassCntr));
    sta(offsetof(G, MultiLoopCorrectCntr));
    JMP(InitLCmd);
}

int InitLCmd() {
    // <conv.chunks.Comment object at 0x10159c530>
    lda(0x0);
    sta(offsetof(G, LoopCommand));
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda(offsetof(G, EnemyFrenzyQueue));
    BEQ(ProcessEnemyData);
    sta(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x10159c7d0>
    // <conv.chunks.Comment object at 0x10159c8f0>
    // <conv.chunks.Comment object at 0x10159ca10>
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x10159cbc0>
    lda(0x0);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x10159ce00>
    sta(offsetof(G, EnemyFrenzyQueue));
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy(offsetof(G, EnemyDataOffset));
    lda((offsetof(G, EnemyData)), y);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x10159d2b0>
    // <conv.chunks.Comment object at 0x10159d3d0>
    // <conv.chunks.Comment object at 0x10159d550>
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(0b1111);
    // <conv.chunks.Comment object at 0x10159d8b0>
    cmp(0xe);
    BEQ(CheckRightBounds);
    cpx(0x5);
    BCC(CheckRightBounds);
    // <conv.chunks.Comment object at 0x10159da30>
    // <conv.chunks.Comment object at 0x10159dbe0>
    // <conv.chunks.Comment object at 0x10159dc70>
    iny();
    lda((offsetof(G, EnemyData)), y);
    anda(0b111111);
    cmp(0x2e);
    BEQ(CheckRightBounds);
    rts();
    JMP(CheckRightBounds);
}

int CheckRightBounds() {
    lda(offsetof(G, ScreenRight_X_Pos));
    // <conv.chunks.Comment object at 0x10159e480>
    clc();
    adc(0x30);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x10159e690>
    sta(0x7);
    lda(offsetof(G, ScreenRight_PageLoc));
    // <conv.chunks.Comment object at 0x10159e840>
    adc(0x0);
    sta(0x6);
    // <conv.chunks.Comment object at 0x10159eb70>
    ldy(offsetof(G, EnemyDataOffset));
    iny();
    lda((offsetof(G, EnemyData)), y);
    // <conv.chunks.Comment object at 0x10159ede0>
    asl();
    BCC(CheckPageCtrlRow);
    lda(offsetof(G, EnemyObjectPageSel));
    // <conv.chunks.Comment object at 0x10159f0e0>
    BNE(CheckPageCtrlRow);
    inc(offsetof(G, EnemyObjectPageSel));
    inc(offsetof(G, EnemyObjectPageLoc));
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda((offsetof(G, EnemyData)), y);
    // <conv.chunks.Comment object at 0x10159f5f0>
    anda(0xf);
    cmp(0xf);
    BNE(PositionEnemyObj);
    lda(offsetof(G, EnemyObjectPageSel));
    BNE(PositionEnemyObj);
    // <conv.chunks.Comment object at 0x10159f7d0>
    // <conv.chunks.Comment object at 0x10159f8f0>
    // <conv.chunks.Comment object at 0x10159faa0>
    // <conv.chunks.Comment object at 0x10159fbc0>
    iny();
    lda((offsetof(G, EnemyData)), y);
    // <conv.chunks.Comment object at 0x10159fd70>
    anda(0b111111);
    sta(offsetof(G, EnemyObjectPageLoc));
    inc(offsetof(G, EnemyDataOffset));
    // <conv.chunks.Comment object at 0x10159ffe0>
    // <conv.chunks.Comment object at 0x1015a4140>
    inc(offsetof(G, EnemyDataOffset));
    inc(offsetof(G, EnemyObjectPageSel));
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda(offsetof(G, EnemyObjectPageLoc));
    sta(offsetof(G, Enemy_PageLoc), x);
    lda((offsetof(G, EnemyData)), y);
    // <conv.chunks.Comment object at 0x1015a45c0>
    // <conv.chunks.Comment object at 0x1015a46e0>
    // <conv.chunks.Comment object at 0x1015a4830>
    anda(0b11110000);
    sta(offsetof(G, Enemy_X_Position), x);
    cmp(offsetof(G, ScreenRight_X_Pos));
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(offsetof(G, ScreenRight_PageLoc));
    BCS(CheckRightExtBounds);
    // <conv.chunks.Comment object at 0x1015a4aa0>
    // <conv.chunks.Comment object at 0x1015a4bf0>
    // <conv.chunks.Comment object at 0x1015a4d10>
    // <conv.chunks.Comment object at 0x1015a4e60>
    // <conv.chunks.Comment object at 0x1015a4f80>
    lda((offsetof(G, EnemyData)), y);
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x1015a51f0>
    // <conv.chunks.Comment object at 0x1015a5310>
    BEQ(ParseRow0e);
    JMP(CheckThreeBytes);
    JMP(CheckRightExtBounds);
}

int CheckRightExtBounds() {
    lda(0x7);
    cmp(offsetof(G, Enemy_X_Position), x);
    lda(0x6);
    sbc(offsetof(G, Enemy_PageLoc), x);
    BCC(CheckFrenzyBuffer);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1015a56a0>
    // <conv.chunks.Comment object at 0x1015a5730>
    // <conv.chunks.Comment object at 0x1015a5910>
    // <conv.chunks.Comment object at 0x1015a59a0>
    // <conv.chunks.Comment object at 0x1015a5b50>
    // <conv.chunks.Comment object at 0x1015a5c70>
    sta(offsetof(G, Enemy_Y_HighPos), x);
    lda((offsetof(G, EnemyData)), y);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1015a5eb0>
    // <conv.chunks.Comment object at 0x1015a6060>
    // <conv.chunks.Comment object at 0x1015a6120>
    asl();
    asl();
    sta(offsetof(G, Enemy_Y_Position), x);
    cmp(0xe0);
    BEQ(ParseRow0e);
    // <conv.chunks.Comment object at 0x1015a63f0>
    // <conv.chunks.Comment object at 0x1015a6480>
    iny();
    lda((offsetof(G, EnemyData)), y);
    anda(0b1000000);
    BEQ(CheckForEnemyGroup);
    lda(offsetof(G, SecondaryHardMode));
    BEQ(Inc2B);
    JMP(CheckForEnemyGroup);
}

int CheckForEnemyGroup() {
    lda((offsetof(G, EnemyData)), y);
    // <conv.chunks.Comment object at 0x1015a6d20>
    anda(0b111111);
    cmp(0x37);
    // <conv.chunks.Comment object at 0x1015a6f90>
    BCC(BuzzyBeetleMutate);
    cmp(0x3f);
    BCC(DoGroup);
    JMP(BuzzyBeetleMutate);
}

int BuzzyBeetleMutate() {
    cmp(offsetof(G, Goomba));
    BNE(StrID);
    ldy(offsetof(G, PrimaryHardMode));
    BEQ(StrID);
    // <conv.chunks.Comment object at 0x1015a7440>
    // <conv.chunks.Comment object at 0x1015a74a0>
    // <conv.chunks.Comment object at 0x1015a76e0>
    // <conv.chunks.Comment object at 0x1015a7800>
    lda(offsetof(G, BuzzyBeetle));
    JMP(StrID);
}

int StrID() {
    // <conv.chunks.Comment object at 0x1015a7a40>
    sta(offsetof(G, Enemy_ID), x);
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x1015a7c50>
    JSR(InitEnemyObject);
    lda(offsetof(G, Enemy_Flag), x);
    BNE(Inc2B);
    // <conv.chunks.Comment object at 0x1015a7f20>
    // <conv.chunks.Comment object at 0x1015b00b0>
    rts();
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda(offsetof(G, EnemyFrenzyBuffer));
    BNE(StrFre);
    lda(offsetof(G, VineFlagOffset));
    // <conv.chunks.Comment object at 0x1015b02c0>
    // <conv.chunks.Comment object at 0x1015b03e0>
    // <conv.chunks.Comment object at 0x1015b0530>
    cmp(0x1);
    BNE(ExEPar);
    lda(offsetof(G, VineObject));
    JMP(StrFre);
}

int StrFre() {
    // <conv.chunks.Comment object at 0x1015b06b0>
    // <conv.chunks.Comment object at 0x1015b0890>
    // <conv.chunks.Comment object at 0x1015b09b0>
    sta(offsetof(G, Enemy_ID), x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015b0b90>
    sta(offsetof(G, Enemy_State), x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // <conv.chunks.Comment object at 0x1015b0dd0>
    // <conv.chunks.Comment object at 0x1015b0ef0>
    rts();
    JMP(DoGroup);
}

int DoGroup() {
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}

int ParseRow0e() {
    iny();
    // <conv.chunks.Comment object at 0x1015b11f0>
    iny();
    lda((offsetof(G, EnemyData)), y);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1015b1490>
    // <conv.chunks.Comment object at 0x1015b1550>
    lsr();
    lsr();
    lsr();
    cmp(offsetof(G, WorldNumber));
    BNE(NotUse);
    dey();
    lda((offsetof(G, EnemyData)), y);
    sta(offsetof(G, AreaPointer));
    // <conv.chunks.Comment object at 0x1015b1790>
    // <conv.chunks.Comment object at 0x1015b18b0>
    // <conv.chunks.Comment object at 0x1015b1a30>
    // <conv.chunks.Comment object at 0x1015b1ac0>
    // <conv.chunks.Comment object at 0x1015b1c40>
    iny();
    lda((offsetof(G, EnemyData)), y);
    anda(0b11111);
    sta(offsetof(G, EntrancePage));
    JMP(NotUse);
}

int NotUse() {
    JMP(Inc3B);
    JMP(CheckThreeBytes);
}

int CheckThreeBytes() {
    ldy(offsetof(G, EnemyDataOffset));
    lda((offsetof(G, EnemyData)), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1015b2360>
    // <conv.chunks.Comment object at 0x1015b2480>
    // <conv.chunks.Comment object at 0x1015b2600>
    cmp(0xe);
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // <conv.chunks.Comment object at 0x1015b2930>
    inc(offsetof(G, EnemyDataOffset));
    JMP(Inc2B);
}

int Inc2B() {
    // <conv.chunks.Comment object at 0x1015b2ab0>
    inc(offsetof(G, EnemyDataOffset));
    inc(offsetof(G, EnemyDataOffset));
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015b2d20>
    sta(offsetof(G, EnemyObjectPageSel));
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(CheckpointEnemyID);
}

int CheckpointEnemyID() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x15);
    BCS(InitEnemyRoutines);
    tay();
    // <conv.chunks.Comment object at 0x1015b3260>
    // <conv.chunks.Comment object at 0x1015b32f0>
    // <conv.chunks.Comment object at 0x1015b34d0>
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(0x8);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1015b3680>
    // <conv.chunks.Comment object at 0x1015b3710>
    lda(0x1);
    sta(offsetof(G, EnemyOffscrBitsMasked), x);
    tya();
    JMP(InitEnemyRoutines);
}

int InitEnemyRoutines() {
    JSR(JumpEngine);
    JMP(NoInitCode);
}

int NoInitCode() {
    rts();
    JMP(InitGoomba);
}

int InitGoomba() {
    JSR(InitNormalEnemy);
    JMP(SmallBBox);
    JMP(InitPodoboo);
}

int InitPodoboo() {
    lda(0x2);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x1015be180>
    // <conv.chunks.Comment object at 0x1015be210>
    sta(offsetof(G, Enemy_Y_Position), x);
    lsr();
    sta(offsetof(G, EnemyIntervalTimer), x);
    // <conv.chunks.Comment object at 0x1015be5a0>
    lsr();
    sta(offsetof(G, Enemy_State), x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(0xb8);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1015bea50>
    // <conv.chunks.Comment object at 0x1015beae0>
    rts();
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(0x1);
    lda(offsetof(G, PrimaryHardMode));
    // <conv.chunks.Comment object at 0x1015bee10>
    // <conv.chunks.Comment object at 0x1015bef90>
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // <conv.chunks.Comment object at 0x1015bf290>
    // <conv.chunks.Comment object at 0x1015bf320>
    lda(offsetof(G, NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // <conv.chunks.Comment object at 0x1015bf4d0>
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1015bf800>
    // <conv.chunks.Comment object at 0x1015bf920>
    sta(offsetof(G, Enemy_State), x);
    rts();
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(0x0);
    sta(offsetof(G, HammerThrowingTimer), x);
    // <conv.chunks.Comment object at 0x1015bfcb0>
    // <conv.chunks.Comment object at 0x1015bfe30>
    sta(offsetof(G, Enemy_X_Speed), x);
    ldy(offsetof(G, SecondaryHardMode));
    // <conv.chunks.Comment object at 0x1015cc170>
    lda(offsetof(G, HBroWalkingTimerData), y);
    sta(offsetof(G, EnemyIntervalTimer), x);
    lda(0xb);
    // <conv.chunks.Comment object at 0x1015cc3b0>
    // <conv.chunks.Comment object at 0x1015cc500>
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015cc7a0>
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015cca40>
    sta(offsetof(G, BlooperMoveSpeed), x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // <conv.chunks.Comment object at 0x1015ccc80>
    lda(0x9);
    BNE(SetBBox);
    JMP(InitRedPTroopa);
}

int InitRedPTroopa() {
    ldy(0x30);
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, RedPTroopaOrigXPos), x);
    BPL(GetCent);
    ldy(0xe0);
    JMP(GetCent);
}

int GetCent() {
    // <conv.chunks.Comment object at 0x1015ccf80>
    // <conv.chunks.Comment object at 0x1015cd010>
    // <conv.chunks.Comment object at 0x1015cd1f0>
    // <conv.chunks.Comment object at 0x1015cd340>
    // <conv.chunks.Comment object at 0x1015cd490>
    // <conv.chunks.Comment object at 0x1015cd520>
    tya();
    adc(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, RedPTroopaCenterYPos), x);
    JMP(TallBBox);
}

int TallBBox() {
    // <conv.chunks.Comment object at 0x1015cd6d0>
    // <conv.chunks.Comment object at 0x1015cd820>
    // <conv.chunks.Comment object at 0x1015cd970>
    lda(0x3);
    JMP(SetBBox);
}

int SetBBox() {
    // <conv.chunks.Comment object at 0x1015cda30>
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1015cdc70>
    sta(offsetof(G, Enemy_MovingDir), x);
    JMP(InitVStf);
}

int InitVStf() {
    // <conv.chunks.Comment object at 0x1015cdeb0>
    lda(0x0);
    sta(offsetof(G, Enemy_Y_Speed), x);
    // <conv.chunks.Comment object at 0x1015cdf70>
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    rts();
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x1015ce360>
    sta(offsetof(G, Enemy_MovingDir), x);
    lda(0x9);
    // <conv.chunks.Comment object at 0x1015ce5a0>
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    rts();
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b10000);
    sta(offsetof(G, CheepCheepMoveMFlag), x);
    // <conv.chunks.Comment object at 0x1015ce8d0>
    // <conv.chunks.Comment object at 0x1015ce9f0>
    // <conv.chunks.Comment object at 0x1015ceb40>
    // <conv.chunks.Comment object at 0x1015cec60>
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, CheepCheepOrigYPos), x);
    // <conv.chunks.Comment object at 0x1015ceed0>
    rts();
    JMP(InitLakitu);
}

int InitLakitu() {
    lda(offsetof(G, EnemyFrenzyBuffer));
    BNE(KillLakitu);
    JMP(SetupLakitu);
}

int SetupLakitu() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015cf380>
    sta(offsetof(G, LakituReappearTimer));
    JSR(InitHorizFlySwimEnemy);
    JMP(TallBBox2);
    JMP(KillLakitu);
}

int KillLakitu() {
    JMP(EraseEnemyObject);
    JMP(LakituAndSpinyHandler);
}

int LakituAndSpinyHandler() {
    lda(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x1015cfa40>
    BNE(ExLSHand);
    cpx(0x5);
    // <conv.chunks.Comment object at 0x1015d42c0>
    BCS(ExLSHand);
    lda(0x80);
    // <conv.chunks.Comment object at 0x1015d44d0>
    sta(offsetof(G, FrenzyEnemyTimer));
    ldy(0x4);
    JMP(ChkLak);
}

int ChkLak() {
    // <conv.chunks.Comment object at 0x1015d46e0>
    // <conv.chunks.Comment object at 0x1015d4770>
    lda(offsetof(G, Enemy_ID), y);
    cmp(offsetof(G, Lakitu));
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc(offsetof(G, LakituReappearTimer));
    // <conv.chunks.Comment object at 0x1015d49b0>
    // <conv.chunks.Comment object at 0x1015d4a10>
    // <conv.chunks.Comment object at 0x1015d4c50>
    // <conv.chunks.Comment object at 0x1015d4ce0>
    // <conv.chunks.Comment object at 0x1015d4e30>
    lda(offsetof(G, LakituReappearTimer));
    cmp(0x7);
    BCC(ExLSHand);
    ldx(0x4);
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // <conv.chunks.Comment object at 0x1015d5040>
    // <conv.chunks.Comment object at 0x1015d50d0>
    // <conv.chunks.Comment object at 0x1015d5280>
    // <conv.chunks.Comment object at 0x1015d5310>
    lda(offsetof(G, Enemy_Flag), x);
    BEQ(CreateL);
    dex();
    BPL(ChkNoEn);
    BMI(RetEOfs);
    JMP(CreateL);
}

int CreateL() {
    // <conv.chunks.Comment object at 0x1015d5550>
    // <conv.chunks.Comment object at 0x1015d56d0>
    // <conv.chunks.Comment object at 0x1015d5760>
    // <conv.chunks.Comment object at 0x1015d58b0>
    // <conv.chunks.Comment object at 0x1015d5a00>
    lda(0x0);
    sta(offsetof(G, Enemy_State), x);
    lda(offsetof(G, Lakitu));
    // <conv.chunks.Comment object at 0x1015d5ca0>
    sta(offsetof(G, Enemy_ID), x);
    JSR(SetupLakitu);
    // <conv.chunks.Comment object at 0x1015d5f10>
    lda(0x20);
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // <conv.chunks.Comment object at 0x1015d6090>
    // <conv.chunks.Comment object at 0x1015d6240>
    ldx(offsetof(G, ObjectOffset));
    JMP(ExLSHand);
}

int ExLSHand() {
    rts();
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x1015d64e0>
    cmp(0x2c);
    BCC(ExLSHand);
    lda(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1015d67e0>
    BNE(ExLSHand);
    lda(offsetof(G, Enemy_PageLoc), y);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x1015d6a20>
    // <conv.chunks.Comment object at 0x1015d6b70>
    lda(offsetof(G, Enemy_X_Position), y);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1015d6f00>
    sta(offsetof(G, Enemy_Y_HighPos), x);
    lda(offsetof(G, Enemy_Y_Position), y);
    // <conv.chunks.Comment object at 0x1015d7140>
    sec();
    sbc(0x8);
    sta(offsetof(G, Enemy_Y_Position), x);
    lda(offsetof(G, PseudoRandomBitReg), x);
    // <conv.chunks.Comment object at 0x1015d7530>
    anda(0b11);
    tay();
    ldx(0x2);
    JMP(DifLoop);
}

int DifLoop() {
    // <conv.chunks.Comment object at 0x1015d7860>
    lda(offsetof(G, PRDiffAdjustData), y);
    sta(0x1, x);
    // <conv.chunks.Comment object at 0x1015d7aa0>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1015d7cb0>
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx(offsetof(G, ObjectOffset));
    JSR(PlayerLakituDiff);
    ldy(offsetof(G, Player_X_Speed));
    // <conv.chunks.Comment object at 0x1015d7e90>
    // <conv.chunks.Comment object at 0x1015d7f20>
    // <conv.chunks.Comment object at 0x1015e40b0>
    // <conv.chunks.Comment object at 0x1015e41d0>
    // <conv.chunks.Comment object at 0x1015e42f0>
    cpy(0x8);
    BCS(SetSpSpd);
    tay();
    // <conv.chunks.Comment object at 0x1015e4470>
    // <conv.chunks.Comment object at 0x1015e4650>
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    anda(0b11);
    BEQ(UsePosv);
    // <conv.chunks.Comment object at 0x1015e48c0>
    // <conv.chunks.Comment object at 0x1015e49e0>
    tya();
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x1015e4bc0>
    tay();
    iny();
    JMP(UsePosv);
}

int UsePosv() {
    // <conv.chunks.Comment object at 0x1015e4e00>
    tya();
    JMP(SetSpSpd);
}

int SetSpSpd() {
    // <conv.chunks.Comment object at 0x1015e4f20>
    JSR(SmallBBox);
    ldy(0x2);
    sta(offsetof(G, Enemy_X_Speed), x);
    cmp(0x0);
    BMI(SpinyRte);
    // <conv.chunks.Comment object at 0x1015e50d0>
    // <conv.chunks.Comment object at 0x1015e52b0>
    // <conv.chunks.Comment object at 0x1015e5340>
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // <conv.chunks.Comment object at 0x1015e5580>
    sty(offsetof(G, Enemy_MovingDir), x);
    lda(0xfd);
    sta(offsetof(G, Enemy_Y_Speed), x);
    // <conv.chunks.Comment object at 0x1015e5760>
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x1015e59a0>
    lda(0x5);
    sta(offsetof(G, Enemy_State), x);
    JMP(ChpChpEx);
}

int ChpChpEx() {
    rts();
    JMP(InitLongFirebar);
}

int InitLongFirebar() {
    JSR(DuplicateEnemyObj);
    JMP(InitShortFirebar);
}

int InitShortFirebar() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1015e6630>
    sta(offsetof(G, FirebarSpinState_Low), x);
    lda(offsetof(G, Enemy_ID), x);
    sec();
    // <conv.chunks.Comment object at 0x1015e6870>
    // <conv.chunks.Comment object at 0x1015e69f0>
    sbc(0x1b);
    tay();
    lda(offsetof(G, FirebarSpinSpdData), y);
    // <conv.chunks.Comment object at 0x1015e6c00>
    sta(offsetof(G, FirebarSpinSpeed), x);
    lda(offsetof(G, FirebarSpinDirData), y);
    // <conv.chunks.Comment object at 0x1015e6e70>
    sta(offsetof(G, FirebarSpinDirection), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    clc();
    // <conv.chunks.Comment object at 0x1015e7230>
    adc(0x4);
    sta(offsetof(G, Enemy_Y_Position), x);
    lda(offsetof(G, Enemy_X_Position), x);
    clc();
    // <conv.chunks.Comment object at 0x1015e7620>
    adc(0x4);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, Enemy_PageLoc), x);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1015e79e0>
    sta(offsetof(G, Enemy_PageLoc), x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x1015e7e00>
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // <conv.chunks.Comment object at 0x1015f12b0>
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1015f15b0>
    tay();
    lda(offsetof(G, FlyCCTimerData), y);
    // <conv.chunks.Comment object at 0x1015f1760>
    sta(offsetof(G, FrenzyEnemyTimer));
    ldy(0x3);
    // <conv.chunks.Comment object at 0x1015f19a0>
    lda(offsetof(G, SecondaryHardMode));
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // <conv.chunks.Comment object at 0x1015f1bb0>
    // <conv.chunks.Comment object at 0x1015f1d30>
    // <conv.chunks.Comment object at 0x1015f1dc0>
    sty(0x0);
    cpx(0x0);
    BCS(ChpChpEx);
    // <conv.chunks.Comment object at 0x1015f1e20>
    // <conv.chunks.Comment object at 0x1015f2000>
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b11);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1015f22a0>
    // <conv.chunks.Comment object at 0x1015f23f0>
    sta(0x1);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x1015f2480>
    sta(offsetof(G, Enemy_Y_Speed), x);
    lda(0x0);
    ldy(offsetof(G, Player_X_Speed));
    BEQ(GSeed);
    // <conv.chunks.Comment object at 0x1015f2810>
    // <conv.chunks.Comment object at 0x1015f28a0>
    // <conv.chunks.Comment object at 0x1015f2a50>
    lda(0x4);
    cpy(0x19);
    BCC(GSeed);
    asl();
    JMP(GSeed);
}

int GSeed() {
    // <conv.chunks.Comment object at 0x1015f2c00>
    // <conv.chunks.Comment object at 0x1015f2d20>
    // <conv.chunks.Comment object at 0x1015f2f30>
    // <conv.chunks.Comment object at 0x1015f2fc0>
    pha();
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1015f31a0>
    // <conv.chunks.Comment object at 0x1015f3170>
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    anda(0b11);
    BEQ(RSeed);
    // <conv.chunks.Comment object at 0x1015f3590>
    // <conv.chunks.Comment object at 0x1015f36b0>
    lda(((offsetof(G, PseudoRandomBitReg)) + (2)), x);
    anda(0b1111);
    sta(0x0);
    JMP(RSeed);
}

int RSeed() {
    // <conv.chunks.Comment object at 0x1015f39e0>
    // <conv.chunks.Comment object at 0x1015f3b30>
    // <conv.chunks.Comment object at 0x1015f3bc0>
    pla();
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FlyCCXSpeedData), y);
    // <conv.chunks.Comment object at 0x1015f3e00>
    // <conv.chunks.Comment object at 0x1015f3dd0>
    // <conv.chunks.Comment object at 0x1015f3fb0>
    sta(offsetof(G, Enemy_X_Speed), x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1015f8260>
    sta(offsetof(G, Enemy_MovingDir), x);
    lda(offsetof(G, Player_X_Speed));
    // <conv.chunks.Comment object at 0x1015f84a0>
    BNE(D2XPos1);
    ldy(0x0);
    tya();
    // <conv.chunks.Comment object at 0x1015f8710>
    // <conv.chunks.Comment object at 0x1015f86e0>
    anda(0b10);
    BEQ(D2XPos1);
    // <conv.chunks.Comment object at 0x1015f89b0>
    lda(offsetof(G, Enemy_X_Speed), x);
    eor(0xff);
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1015f8c20>
    // <conv.chunks.Comment object at 0x1015f8d70>
    // <conv.chunks.Comment object at 0x1015f8e00>
    sta(offsetof(G, Enemy_X_Speed), x);
    inc(offsetof(G, Enemy_MovingDir), x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // <conv.chunks.Comment object at 0x1015f9040>
    // <conv.chunks.Comment object at 0x1015f9190>
    tya();
    anda(0b10);
    BEQ(D2XPos2);
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x1015f93a0>
    // <conv.chunks.Comment object at 0x1015f94f0>
    clc();
    adc(offsetof(G, FlyCCXPositionData), y);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    // <conv.chunks.Comment object at 0x1015f96a0>
    // <conv.chunks.Comment object at 0x1015f97f0>
    // <conv.chunks.Comment object at 0x1015f9940>
    // <conv.chunks.Comment object at 0x1015f9a60>
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // <conv.chunks.Comment object at 0x1015f9ca0>
    lda(offsetof(G, Player_X_Position));
    sec();
    sbc(offsetof(G, FlyCCXPositionData), y);
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, Player_PageLoc));
    sbc(0x0);
    JMP(FinCCSt);
}

int FinCCSt() {
    // <conv.chunks.Comment object at 0x1015f9eb0>
    // <conv.chunks.Comment object at 0x1015fa000>
    // <conv.chunks.Comment object at 0x1015fa150>
    // <conv.chunks.Comment object at 0x1015fa270>
    // <conv.chunks.Comment object at 0x1015fa300>
    sta(offsetof(G, Enemy_PageLoc), x);
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x1015fa5a0>
    // <conv.chunks.Comment object at 0x1015fa780>
    lda(0xf8);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1015fa930>
    rts();
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx(offsetof(G, BowserFront_Offset));
    // <conv.chunks.Comment object at 0x1015fac00>
    // <conv.chunks.Comment object at 0x1015fad20>
    lda(0x0);
    sta(offsetof(G, BowserBodyControls));
    sta(offsetof(G, BridgeCollapseOffset));
    // <conv.chunks.Comment object at 0x1015faea0>
    // <conv.chunks.Comment object at 0x1015fb050>
    lda(offsetof(G, Enemy_X_Position), x);
    sta(offsetof(G, BowserOrigXPos));
    // <conv.chunks.Comment object at 0x1015fb290>
    lda(0xdf);
    sta(offsetof(G, BowserFireBreathTimer));
    sta(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x1015fb410>
    // <conv.chunks.Comment object at 0x1015fb5c0>
    lda(0x20);
    sta(offsetof(G, BowserFeetCounter));
    // <conv.chunks.Comment object at 0x1015fb770>
    sta(offsetof(G, EnemyFrameTimer), x);
    lda(0x5);
    sta(offsetof(G, BowserHitPoints));
    // <conv.chunks.Comment object at 0x1015fbaa0>
    lsr();
    sta(offsetof(G, BowserMovementSpeed));
    // <conv.chunks.Comment object at 0x1015fbce0>
    rts();
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(0xff);
    JMP(FSLoop);
}

int FSLoop() {
    // <conv.chunks.Comment object at 0x1015fbef0>
    // <conv.chunks.Comment object at 0x1015fbf80>
    iny();
    lda(offsetof(G, Enemy_Flag), y);
    BNE(FSLoop);
    sty(offsetof(G, DuplicateObj_Offset));
    txa();
    ora(0b10000000);
    sta(offsetof(G, Enemy_Flag), y);
    // <conv.chunks.Comment object at 0x101600170>
    // <conv.chunks.Comment object at 0x1016002c0>
    // <conv.chunks.Comment object at 0x101600410>
    // <conv.chunks.Comment object at 0x101600560>
    // <conv.chunks.Comment object at 0x1016005f0>
    // <conv.chunks.Comment object at 0x101600710>
    lda(offsetof(G, Enemy_PageLoc), x);
    sta(offsetof(G, Enemy_PageLoc), y);
    lda(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101600980>
    // <conv.chunks.Comment object at 0x101600ad0>
    sta(offsetof(G, Enemy_X_Position), y);
    lda(0x1);
    sta(offsetof(G, Enemy_Flag), x);
    sta(offsetof(G, Enemy_Y_HighPos), y);
    // <conv.chunks.Comment object at 0x101600da0>
    // <conv.chunks.Comment object at 0x101600f80>
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, Enemy_Y_Position), y);
    JMP(FlmEx);
}

int FlmEx() {
    // <conv.chunks.Comment object at 0x1016011f0>
    // <conv.chunks.Comment object at 0x101601340>
    rts();
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x101601580>
    BNE(FlmEx);
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    // <conv.chunks.Comment object at 0x101601ac0>
    lda(offsetof(G, NoiseSoundQueue));
    ora(offsetof(G, Sfx_BowserFlame));
    // <conv.chunks.Comment object at 0x101601d00>
    sta(offsetof(G, NoiseSoundQueue));
    ldy(offsetof(G, BowserFront_Offset));
    lda(offsetof(G, Enemy_ID), y);
    // <conv.chunks.Comment object at 0x101601f10>
    // <conv.chunks.Comment object at 0x101602030>
    cmp(offsetof(G, Bowser));
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x1016021b0>
    // <conv.chunks.Comment object at 0x1016023c0>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x101602570>
    ldy(offsetof(G, SecondaryHardMode));
    BEQ(SetFrT);
    // <conv.chunks.Comment object at 0x101602780>
    sec();
    sbc(0x10);
    JMP(SetFrT);
}

int SetFrT() {
    // <conv.chunks.Comment object at 0x101602960>
    // <conv.chunks.Comment object at 0x1016029f0>
    sta(offsetof(G, FrenzyEnemyTimer));
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b11);
    sta(offsetof(G, BowserFlamePRandomOfs), x);
    tay();
    lda(offsetof(G, FlameYPosData), y);
    JMP(PutAtRightExtent);
}

int PutAtRightExtent() {
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016031d0>
    lda(offsetof(G, ScreenRight_X_Pos));
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x1016034a0>
    sta(offsetof(G, Enemy_X_Position), x);
    lda(offsetof(G, ScreenRight_PageLoc));
    adc(0x0);
    // <conv.chunks.Comment object at 0x1016037d0>
    sta(offsetof(G, Enemy_PageLoc), x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda(offsetof(G, Enemy_X_Position), y);
    // <conv.chunks.Comment object at 0x101603b60>
    sec();
    sbc(0xe);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101603d40>
    // <conv.chunks.Comment object at 0x101603dd0>
    lda(offsetof(G, Enemy_PageLoc), y);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x101610110>
    lda(offsetof(G, Enemy_Y_Position), y);
    clc();
    // <conv.chunks.Comment object at 0x1016103b0>
    adc(0x8);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016104a0>
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b11);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    tay();
    lda(offsetof(G, FlameYPosData), y);
    ldy(0x0);
    cmp(offsetof(G, Enemy_Y_Position), x);
    BCC(SetMF);
    iny();
    JMP(SetMF);
}

int SetMF() {
    // <conv.chunks.Comment object at 0x1016107a0>
    // <conv.chunks.Comment object at 0x1016108c0>
    // <conv.chunks.Comment object at 0x101610a40>
    // <conv.chunks.Comment object at 0x101610ad0>
    // <conv.chunks.Comment object at 0x101610c20>
    // <conv.chunks.Comment object at 0x101610cb0>
    // <conv.chunks.Comment object at 0x101610e90>
    // <conv.chunks.Comment object at 0x101611010>
    // <conv.chunks.Comment object at 0x1016110a0>
    lda(offsetof(G, FlameYMFAdderData), y);
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    // <conv.chunks.Comment object at 0x101611250>
    lda(0x0);
    sta(offsetof(G, EnemyFrenzyBuffer));
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x1016115e0>
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x101611820>
    // <conv.chunks.Comment object at 0x1016118b0>
    sta(offsetof(G, Enemy_Flag), x);
    lsr();
    sta(offsetof(G, Enemy_X_MoveForce), x);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x101611c40>
    // <conv.chunks.Comment object at 0x101611d90>
    rts();
    JMP(InitFireworks);
}

int InitFireworks() {
    lda(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x101612090>
    BNE(ExitFWk);
    lda(0x20);
    // <conv.chunks.Comment object at 0x101612930>
    sta(offsetof(G, FrenzyEnemyTimer));
    dec(offsetof(G, FireworksCounter));
    ldy(0x6);
    JMP(StarFChk);
}

int StarFChk() {
    dey();
    lda(offsetof(G, Enemy_ID), y);
    cmp(offsetof(G, StarFlagObject));
    BNE(StarFChk);
    // <conv.chunks.Comment object at 0x101612e40>
    // <conv.chunks.Comment object at 0x101612f90>
    // <conv.chunks.Comment object at 0x1016130b0>
    lda(offsetof(G, Enemy_X_Position), y);
    sec();
    sbc(0x30);
    pha();
    // <conv.chunks.Comment object at 0x101613320>
    // <conv.chunks.Comment object at 0x1016133b0>
    // <conv.chunks.Comment object at 0x101613500>
    lda(offsetof(G, Enemy_PageLoc), y);
    sbc(0x0);
    sta(0x0);
    lda(offsetof(G, FireworksCounter));
    // <conv.chunks.Comment object at 0x1016136b0>
    // <conv.chunks.Comment object at 0x101613800>
    // <conv.chunks.Comment object at 0x101613890>
    clc();
    adc(offsetof(G, Enemy_State), y);
    tay();
    pla();
    // <conv.chunks.Comment object at 0x101613aa0>
    // <conv.chunks.Comment object at 0x101613c20>
    // <conv.chunks.Comment object at 0x101613ce0>
    clc();
    adc(offsetof(G, FireworksXPosData), y);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101613e00>
    // <conv.chunks.Comment object at 0x101613f50>
    lda(0x0);
    adc(0x0);
    sta(offsetof(G, Enemy_PageLoc), x);
    lda(offsetof(G, FireworksYPosData), y);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016180e0>
    // <conv.chunks.Comment object at 0x101618260>
    // <conv.chunks.Comment object at 0x101618440>
    // <conv.chunks.Comment object at 0x101618590>
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x101618740>
    // <conv.chunks.Comment object at 0x101618920>
    lsr();
    sta(offsetof(G, ExplosionGfxCounter), x);
    // <conv.chunks.Comment object at 0x101618b00>
    lda(0x8);
    sta(offsetof(G, ExplosionTimerCounter), x);
    JMP(ExitFWk);
}

int ExitFWk() {
    rts();
    JMP(BulletBillCheepCheep);
}

int BulletBillCheepCheep() {
    lda(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x101619550>
    BNE(ExF17);
    lda(offsetof(G, AreaType));
    BNE(DoBulletBills);
    cpx(0x3);
    BCS(ExF17);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101619cd0>
    // <conv.chunks.Comment object at 0x101619df0>
    // <conv.chunks.Comment object at 0x101619f10>
    // <conv.chunks.Comment object at 0x101619fa0>
    // <conv.chunks.Comment object at 0x10161a180>
    lda(offsetof(G, PseudoRandomBitReg), x);
    cmp(0xaa);
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // <conv.chunks.Comment object at 0x10161a3c0>
    // <conv.chunks.Comment object at 0x10161a450>
    // <conv.chunks.Comment object at 0x10161a660>
    // <conv.chunks.Comment object at 0x10161a6f0>
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World2));
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(0b1);
    // <conv.chunks.Comment object at 0x10161ac90>
    tay();
    lda(offsetof(G, SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // <conv.chunks.Comment object at 0x10161ae40>
    // <conv.chunks.Comment object at 0x10161af90>
    sta(offsetof(G, Enemy_ID), x);
    lda(offsetof(G, BitMFilter));
    cmp(0xff);
    // <conv.chunks.Comment object at 0x10161b230>
    BNE(GetRBit);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10161b470>
    sta(offsetof(G, BitMFilter));
    JMP(GetRBit);
}

int GetRBit() {
    // <conv.chunks.Comment object at 0x10161b680>
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b111);
    JMP(ChkRBit);
}

int ChkRBit() {
    // <conv.chunks.Comment object at 0x10161b830>
    // <conv.chunks.Comment object at 0x10161b950>
    tay();
    lda(offsetof(G, Bitmasks), y);
    bit(offsetof(G, BitMFilter));
    // <conv.chunks.Comment object at 0x10161ba70>
    // <conv.chunks.Comment object at 0x10161bbc0>
    BEQ(AddFBit);
    iny();
    // <conv.chunks.Comment object at 0x10161be30>
    tya();
    anda(0b111);
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // <conv.chunks.Comment object at 0x10161bf50>
    // <conv.chunks.Comment object at 0x1016200b0>
    // <conv.chunks.Comment object at 0x101620200>
    ora(offsetof(G, BitMFilter));
    sta(offsetof(G, BitMFilter));
    lda(offsetof(G, Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(0x20);
    // <conv.chunks.Comment object at 0x101620380>
    // <conv.chunks.Comment object at 0x1016204a0>
    // <conv.chunks.Comment object at 0x1016205f0>
    // <conv.chunks.Comment object at 0x101620710>
    // <conv.chunks.Comment object at 0x101620860>
    sta(offsetof(G, FrenzyEnemyTimer));
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(0xff);
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // <conv.chunks.Comment object at 0x101620bc0>
    // <conv.chunks.Comment object at 0x101620c50>
    iny();
    cpy(0x5);
    // <conv.chunks.Comment object at 0x101620dd0>
    BCS(FireBulletBill);
    lda(offsetof(G, Enemy_Flag), y);
    BEQ(BB_SLoop);
    // <conv.chunks.Comment object at 0x101620fe0>
    // <conv.chunks.Comment object at 0x101621130>
    lda(offsetof(G, Enemy_ID), y);
    cmp(offsetof(G, BulletBill_FrenzyVar));
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // <conv.chunks.Comment object at 0x101621370>
    // <conv.chunks.Comment object at 0x101621490>
    // <conv.chunks.Comment object at 0x1016215b0>
    rts();
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda(offsetof(G, Square2SoundQueue));
    ora(offsetof(G, Sfx_Blast));
    // <conv.chunks.Comment object at 0x1016217f0>
    sta(offsetof(G, Square2SoundQueue));
    lda(offsetof(G, BulletBill_FrenzyVar));
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101621d90>
    sec();
    sbc(0x37);
    pha();
    cmp(0x4);
    BCS(SnglID);
    pha();
    ldy(offsetof(G, Goomba));
    lda(offsetof(G, PrimaryHardMode));
    BEQ(PullID);
    ldy(offsetof(G, BuzzyBeetle));
    JMP(PullID);
}

int PullID() {
    // <conv.chunks.Comment object at 0x101621f40>
    // <conv.chunks.Comment object at 0x101622090>
    // <conv.chunks.Comment object at 0x101622120>
    // <conv.chunks.Comment object at 0x1016221b0>
    // <conv.chunks.Comment object at 0x1016223c0>
    // <conv.chunks.Comment object at 0x101622450>
    // <conv.chunks.Comment object at 0x1016224b0>
    // <conv.chunks.Comment object at 0x1016226c0>
    // <conv.chunks.Comment object at 0x101622810>
    // <conv.chunks.Comment object at 0x101622930>
    pla();
    JMP(SnglID);
}

int SnglID() {
    // <conv.chunks.Comment object at 0x101622a50>
    sty(0x1);
    ldy(0xb0);
    anda(0x2);
    BEQ(SetYGp);
    ldy(0x70);
    JMP(SetYGp);
}

int SetYGp() {
    // <conv.chunks.Comment object at 0x101622b70>
    // <conv.chunks.Comment object at 0x101622c60>
    // <conv.chunks.Comment object at 0x101622d80>
    // <conv.chunks.Comment object at 0x101622f60>
    // <conv.chunks.Comment object at 0x101622ff0>
    sty(0x0);
    lda(offsetof(G, ScreenRight_PageLoc));
    sta(0x2);
    lda(offsetof(G, ScreenRight_X_Pos));
    sta(0x3);
    ldy(0x2);
    pla();
    lsr();
    BCC(CntGrp);
    iny();
    JMP(CntGrp);
}

int CntGrp() {
    // <conv.chunks.Comment object at 0x1016231a0>
    // <conv.chunks.Comment object at 0x101623350>
    // <conv.chunks.Comment object at 0x1016233e0>
    // <conv.chunks.Comment object at 0x101623590>
    // <conv.chunks.Comment object at 0x101623620>
    // <conv.chunks.Comment object at 0x1016237d0>
    // <conv.chunks.Comment object at 0x101623890>
    // <conv.chunks.Comment object at 0x101623920>
    // <conv.chunks.Comment object at 0x101623aa0>
    // <conv.chunks.Comment object at 0x101623b30>
    sty(offsetof(G, NumberofGroupEnemies));
    JMP(GrLoop);
}

int GrLoop() {
    // <conv.chunks.Comment object at 0x101623cb0>
    ldx(0xff);
    JMP(GSltLp);
}

int GSltLp() {
    // <conv.chunks.Comment object at 0x101623da0>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x101623f50>
    BCS(NextED);
    lda(offsetof(G, Enemy_Flag), x);
    BNE(GSltLp);
    // <conv.chunks.Comment object at 0x10162c1d0>
    // <conv.chunks.Comment object at 0x10162c320>
    lda(0x1);
    sta(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x10162c470>
    lda(0x2);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x10162c6b0>
    lda(0x3);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x10162c8f0>
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x10162cbc0>
    sta(0x3);
    lda(0x2);
    adc(0x0);
    // <conv.chunks.Comment object at 0x10162cd70>
    // <conv.chunks.Comment object at 0x10162ce90>
    sta(0x2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10162d0a0>
    sta(offsetof(G, Enemy_Y_Position), x);
    lda(0x1);
    sta(offsetof(G, Enemy_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x10162d340>
    // <conv.chunks.Comment object at 0x10162d3d0>
    sta(offsetof(G, Enemy_Flag), x);
    JSR(CheckpointEnemyID);
    dec(offsetof(G, NumberofGroupEnemies));
    // <conv.chunks.Comment object at 0x10162d6d0>
    // <conv.chunks.Comment object at 0x10162d7f0>
    BNE(GrLoop);
    JMP(NextED);
}

int NextED() {
    // <conv.chunks.Comment object at 0x10162da30>
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}

int InitPiranhaPlant() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x10162dc40>
    sta(offsetof(G, PiranhaPlant_Y_Speed), x);
    lsr();
    sta(offsetof(G, Enemy_State), x);
    sta(offsetof(G, PiranhaPlant_MoveFlag), x);
    // <conv.chunks.Comment object at 0x10162df10>
    // <conv.chunks.Comment object at 0x10162e060>
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, PiranhaPlantDownYPos), x);
    // <conv.chunks.Comment object at 0x10162e2d0>
    sec();
    sbc(0x18);
    sta(offsetof(G, PiranhaPlantUpYPos), x);
    // <conv.chunks.Comment object at 0x10162e510>
    lda(0x9);
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda(offsetof(G, Enemy_ID), x);
    sta(offsetof(G, EnemyFrenzyBuffer));
    // <conv.chunks.Comment object at 0x10162e960>
    // <conv.chunks.Comment object at 0x10162eab0>
    sec();
    sbc(0x12);
    // <conv.chunks.Comment object at 0x10162ec60>
    JSR(JumpEngine);
    JMP(NoFrenzyCode);
}

int NoFrenzyCode() {
    rts();
    JMP(EndFrenzy);
}

int EndFrenzy() {
    ldy(0x5);
    JMP(LakituChk);
}

int LakituChk() {
    // <conv.chunks.Comment object at 0x10162f350>
    // <conv.chunks.Comment object at 0x10162f3e0>
    lda(offsetof(G, Enemy_ID), y);
    cmp(offsetof(G, Lakitu));
    // <conv.chunks.Comment object at 0x10162f5f0>
    BNE(NextFSlot);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10162f830>
    sta(offsetof(G, Enemy_State), y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // <conv.chunks.Comment object at 0x10162fa70>
    dey();
    BPL(LakituChk);
    // <conv.chunks.Comment object at 0x10162fb60>
    lda(0x0);
    sta(offsetof(G, EnemyFrenzyBuffer));
    sta(offsetof(G, Enemy_Flag), x);
    // <conv.chunks.Comment object at 0x10162fce0>
    // <conv.chunks.Comment object at 0x10162fe90>
    rts();
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x101638110>
    sta(offsetof(G, Enemy_MovingDir), x);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101638350>
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // <conv.chunks.Comment object at 0x101638590>
    lda(0x3);
    JMP(SetBBox2);
}

int SetBBox2() {
    // <conv.chunks.Comment object at 0x101638650>
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    rts();
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101638950>
    dec(offsetof(G, Enemy_Y_Position), x);
    ldy(offsetof(G, SecondaryHardMode));
    BNE(AlignP);
    ldy(0x2);
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // <conv.chunks.Comment object at 0x101638bc0>
    // <conv.chunks.Comment object at 0x101638ce0>
    // <conv.chunks.Comment object at 0x101638e30>
    // <conv.chunks.Comment object at 0x101638ec0>
    // <conv.chunks.Comment object at 0x101639070>
    ldy(0xff);
    lda(offsetof(G, BalPlatformAlignment));
    sta(offsetof(G, Enemy_State), x);
    BPL(SetBPA);
    txa();
    tay();
    JMP(SetBPA);
}

int SetBPA() {
    // <conv.chunks.Comment object at 0x101639160>
    // <conv.chunks.Comment object at 0x101639310>
    // <conv.chunks.Comment object at 0x101639460>
    // <conv.chunks.Comment object at 0x1016395e0>
    // <conv.chunks.Comment object at 0x1016396a0>
    // <conv.chunks.Comment object at 0x101639730>
    sty(offsetof(G, BalPlatformAlignment));
    lda(0x0);
    sta(offsetof(G, Enemy_MovingDir), x);
    tay();
    JSR(PosPlatform);
    JMP(InitDropPlatform);
}

int InitDropPlatform() {
    lda(0xff);
    sta(offsetof(G, PlatformCollisionFlag), x);
    JMP(CommonPlatCode);
    JMP(InitHoriPlatform);
}

int InitHoriPlatform() {
    lda(0x0);
    sta(offsetof(G, XMoveSecondaryCounter), x);
    JMP(CommonPlatCode);
    JMP(InitVertPlatform);
}

int InitVertPlatform() {
    ldy(0x40);
    lda(offsetof(G, Enemy_Y_Position), x);
    BPL(SetYO);
    // <conv.chunks.Comment object at 0x10163a4e0>
    // <conv.chunks.Comment object at 0x10163a570>
    // <conv.chunks.Comment object at 0x10163a750>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10163a9c0>
    adc(0x1);
    ldy(0xc0);
    JMP(SetYO);
}

int SetYO() {
    // <conv.chunks.Comment object at 0x10163aab0>
    // <conv.chunks.Comment object at 0x10163abd0>
    sta(offsetof(G, YPlatformTopYPos), x);
    tya();
    clc();
    adc(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, YPlatformCenterYPos), x);
    JMP(CommonPlatCode);
}

int CommonPlatCode() {
    JSR(InitVStf);
    JMP(SPBBox);
}

int SPBBox() {
    // <conv.chunks.Comment object at 0x10163b260>
    // <conv.chunks.Comment object at 0x10163b380>
    lda(0x5);
    ldy(offsetof(G, AreaType));
    cpy(0x3);
    BEQ(CasPBB);
    ldy(offsetof(G, SecondaryHardMode));
    BNE(CasPBB);
    lda(0x6);
    JMP(CasPBB);
}

int CasPBB() {
    // <conv.chunks.Comment object at 0x10163b5f0>
    // <conv.chunks.Comment object at 0x10163b680>
    // <conv.chunks.Comment object at 0x10163b860>
    // <conv.chunks.Comment object at 0x10163b980>
    // <conv.chunks.Comment object at 0x10163bad0>
    // <conv.chunks.Comment object at 0x10163bb60>
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    rts();
    JMP(LargeLiftUp);
}

int LargeLiftUp() {
    JSR(PlatLiftUp);
    JMP(LargeLiftBBox);
    JMP(LargeLiftDown);
}

int LargeLiftDown() {
    JSR(PlatLiftDown);
    JMP(LargeLiftBBox);
}

int LargeLiftBBox() {
    JMP(SPBBox);
    JMP(PlatLiftUp);
}

int PlatLiftUp() {
    lda(0x10);
    // <conv.chunks.Comment object at 0x101640440>
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    lda(0xff);
    // <conv.chunks.Comment object at 0x101640680>
    sta(offsetof(G, Enemy_Y_Speed), x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(0xf0);
    // <conv.chunks.Comment object at 0x101640a40>
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101640c80>
    sta(offsetof(G, Enemy_Y_Speed), x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(0x1);
    JSR(PosPlatform);
    // <conv.chunks.Comment object at 0x101640f80>
    lda(0x4);
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    // <conv.chunks.Comment object at 0x101641190>
    rts();
    JMP(PosPlatform);
}

int PosPlatform() {
    lda(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101641460>
    clc();
    adc(offsetof(G, PlatPosDataLow), y);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101641a00>
    // <conv.chunks.Comment object at 0x101641b50>
    lda(offsetof(G, Enemy_PageLoc), x);
    adc(offsetof(G, PlatPosDataHigh), y);
    sta(offsetof(G, Enemy_PageLoc), x);
    rts();
    JMP(EndOfEnemyInitCode);
}

int EndOfEnemyInitCode() {
    rts();
    JMP(RunEnemyObjectsCore);
}

int RunEnemyObjectsCore() {
    ldx(offsetof(G, ObjectOffset));
    lda(0x0);
    // <conv.chunks.Comment object at 0x101642270>
    // <conv.chunks.Comment object at 0x101642390>
    ldy(offsetof(G, Enemy_ID), x);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x1016425d0>
    BCC(JmpEO);
    tya();
    sbc(0x14);
    JMP(JmpEO);
}

int JmpEO() {
    JSR(JumpEngine);
    JMP(NoRunCode);
}

int NoRunCode() {
    rts();
    JMP(RunRetainerObj);
}

int RunRetainerObj() {
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JMP(EnemyGfxHandler);
    JMP(RunNormalEnemies);
}

int RunNormalEnemies() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x10164c3e0>
    sta(offsetof(G, Enemy_SprAttrib), x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy(offsetof(G, TimerControl));
    // <conv.chunks.Comment object at 0x10164ccb0>
    BNE(SkipMove);
    JSR(EnemyMovementSubs);
    JMP(SkipMove);
}

int SkipMove() {
    JMP(OffscreenBoundsCheck);
    JMP(EnemyMovementSubs);
}

int EnemyMovementSubs() {
    lda(offsetof(G, Enemy_ID), x);
    JSR(JumpEngine);
    JMP(NoMoveCode);
}

int NoMoveCode() {
    rts();
    JMP(RunBowserFlame);
}

int RunBowserFlame() {
    JSR(ProcBowserFlame);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(OffscreenBoundsCheck);
    JMP(RunFirebarObj);
}

int RunFirebarObj() {
    JSR(ProcFirebar);
    JMP(OffscreenBoundsCheck);
    JMP(RunSmallPlatform);
}

int RunSmallPlatform() {
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

int RunLargePlatform() {
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(LargePlatformBoundBox);
    JSR(LargePlatformCollision);
    lda(offsetof(G, TimerControl));
    BNE(SkipPT);
    // <conv.chunks.Comment object at 0x10164f4a0>
    // <conv.chunks.Comment object at 0x10164f5c0>
    JSR(LargePlatformSubroutines);
    JMP(SkipPT);
}

int SkipPT() {
    JSR(RelativeEnemyPosition);
    JSR(DrawLargePlatform);
    JMP(OffscreenBoundsCheck);
    JMP(LargePlatformSubroutines);
}

int LargePlatformSubroutines() {
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x10164fb90>
    sec();
    sbc(0x24);
    JSR(JumpEngine);
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x10165c410>
    sta(offsetof(G, Enemy_Flag), x);
    sta(offsetof(G, Enemy_ID), x);
    sta(offsetof(G, Enemy_State), x);
    sta(offsetof(G, FloateyNum_Control), x);
    sta(offsetof(G, EnemyIntervalTimer), x);
    sta(offsetof(G, ShellChainCounter), x);
    sta(offsetof(G, Enemy_SprAttrib), x);
    sta(offsetof(G, EnemyFrameTimer), x);
    rts();
    JMP(MovePodoboo);
}

int MovePodoboo() {
    lda(offsetof(G, EnemyIntervalTimer), x);
    BNE(PdbM);
    JSR(InitPodoboo);
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    ora(0b10000000);
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    anda(0b1111);
    ora(0x6);
    sta(offsetof(G, EnemyIntervalTimer), x);
    // <conv.chunks.Comment object at 0x10165cf20>
    // <conv.chunks.Comment object at 0x10165d070>
    // <conv.chunks.Comment object at 0x10165d1c0>
    // <conv.chunks.Comment object at 0x10165d2e0>
    // <conv.chunks.Comment object at 0x10165d520>
    // <conv.chunks.Comment object at 0x10165d640>
    // <conv.chunks.Comment object at 0x10165d790>
    // <conv.chunks.Comment object at 0x10165d8b0>
    // <conv.chunks.Comment object at 0x10165d940>
    lda(0xf9);
    sta(offsetof(G, Enemy_Y_Speed), x);
    JMP(PdbM);
}

int PdbM() {
    // <conv.chunks.Comment object at 0x10165db80>
    // <conv.chunks.Comment object at 0x10165dd60>
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x10165e180>
    anda(0b100000);
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // <conv.chunks.Comment object at 0x10165e7e0>
    // <conv.chunks.Comment object at 0x10165e930>
    // <conv.chunks.Comment object at 0x10165ea50>
    lda(offsetof(G, HammerBroJumpTimer), x);
    BEQ(HammerBroJumpCode);
    dec(offsetof(G, HammerBroJumpTimer), x);
    // <conv.chunks.Comment object at 0x10165ec00>
    // <conv.chunks.Comment object at 0x10165ed20>
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1100);
    BNE(MoveHammerBroXDir);
    lda(offsetof(G, HammerThrowingTimer), x);
    BNE(DecHT);
    ldy(offsetof(G, SecondaryHardMode));
    lda(offsetof(G, HammerThrowTmrData), y);
    sta(offsetof(G, HammerThrowingTimer), x);
    JSR(SpawnHammerObj);
    BCC(DecHT);
    // <conv.chunks.Comment object at 0x10165ef60>
    // <conv.chunks.Comment object at 0x10165f080>
    // <conv.chunks.Comment object at 0x10165f1a0>
    // <conv.chunks.Comment object at 0x10165f2f0>
    // <conv.chunks.Comment object at 0x10165f440>
    // <conv.chunks.Comment object at 0x10165f560>
    // <conv.chunks.Comment object at 0x10165f6b0>
    // <conv.chunks.Comment object at 0x10165f800>
    // <conv.chunks.Comment object at 0x10165f920>
    lda(offsetof(G, Enemy_State), x);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x10165fb90>
    sta(offsetof(G, Enemy_State), x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // <conv.chunks.Comment object at 0x10165fdd0>
    // <conv.chunks.Comment object at 0x10165fef0>
    dec(offsetof(G, HammerThrowingTimer), x);
    JMP(MoveHammerBroXDir);
    JMP(HammerBroJumpCode);
}

int HammerBroJumpCode() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b111);
    cmp(0x1);
    BEQ(MoveHammerBroXDir);
    lda(0x0);
    sta(0x0);
    ldy(0xfa);
    lda(offsetof(G, Enemy_Y_Position), x);
    BMI(SetHJ);
    ldy(0xfd);
    cmp(0x70);
    inc(0x0);
    BCC(SetHJ);
    dec(0x0);
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    // <conv.chunks.Comment object at 0x101664290>
    // <conv.chunks.Comment object at 0x1016644d0>
    // <conv.chunks.Comment object at 0x1016645f0>
    // <conv.chunks.Comment object at 0x101664680>
    // <conv.chunks.Comment object at 0x101664830>
    // <conv.chunks.Comment object at 0x101664980>
    // <conv.chunks.Comment object at 0x101664a10>
    // <conv.chunks.Comment object at 0x101664b00>
    // <conv.chunks.Comment object at 0x101664ce0>
    // <conv.chunks.Comment object at 0x101664e30>
    // <conv.chunks.Comment object at 0x101664ec0>
    // <conv.chunks.Comment object at 0x1016650a0>
    // <conv.chunks.Comment object at 0x101665130>
    // <conv.chunks.Comment object at 0x101665310>
    // <conv.chunks.Comment object at 0x1016653a0>
    anda(0x1);
    BNE(SetHJ);
    ldy(0xfa);
    JMP(SetHJ);
}

int SetHJ() {
    // <conv.chunks.Comment object at 0x101665670>
    // <conv.chunks.Comment object at 0x101665850>
    // <conv.chunks.Comment object at 0x1016658e0>
    sty(offsetof(G, Enemy_Y_Speed), x);
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x101665b20>
    ora(0x1);
    sta(offsetof(G, Enemy_State), x);
    lda(0x0);
    anda(((offsetof(G, PseudoRandomBitReg)) + (2)), x);
    tay();
    lda(offsetof(G, SecondaryHardMode));
    // <conv.chunks.Comment object at 0x101665eb0>
    // <conv.chunks.Comment object at 0x101665f40>
    // <conv.chunks.Comment object at 0x1016661e0>
    // <conv.chunks.Comment object at 0x101666270>
    BNE(HJump);
    tay();
    JMP(HJump);
}

int HJump() {
    // <conv.chunks.Comment object at 0x1016664e0>
    // <conv.chunks.Comment object at 0x101666570>
    lda(offsetof(G, HammerBroJumpLData), y);
    sta(offsetof(G, EnemyFrameTimer), x);
    // <conv.chunks.Comment object at 0x101666720>
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    ora(0b11000000);
    sta(offsetof(G, HammerBroJumpTimer), x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(0xfc);
    // <conv.chunks.Comment object at 0x101666cf0>
    lda(offsetof(G, FrameCounter));
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x101666f00>
    BNE(Shimmy);
    ldy(0x4);
    JMP(Shimmy);
}

int Shimmy() {
    // <conv.chunks.Comment object at 0x101667140>
    // <conv.chunks.Comment object at 0x1016671d0>
    sty(offsetof(G, Enemy_X_Speed), x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda(offsetof(G, EnemyIntervalTimer), x);
    BNE(SetShim);
    // <conv.chunks.Comment object at 0x101667410>
    // <conv.chunks.Comment object at 0x1016674a0>
    // <conv.chunks.Comment object at 0x101667650>
    // <conv.chunks.Comment object at 0x1016677d0>
    // <conv.chunks.Comment object at 0x101667860>
    // <conv.chunks.Comment object at 0x1016679b0>
    lda(0xf8);
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(SetShim);
}

int SetShim() {
    // <conv.chunks.Comment object at 0x101667b60>
    // <conv.chunks.Comment object at 0x101667d40>
    sty(offsetof(G, Enemy_MovingDir), x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101667f20>
    lda(offsetof(G, Enemy_State), x);
    anda(0b1000000);
    BNE(FallE);
    // <conv.chunks.Comment object at 0x10166c1a0>
    // <conv.chunks.Comment object at 0x10166c2c0>
    lda(offsetof(G, Enemy_State), x);
    asl();
    BCS(SteadM);
    // <conv.chunks.Comment object at 0x10166c560>
    // <conv.chunks.Comment object at 0x10166c5f0>
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BNE(MoveDefeatedEnemy);
    // <conv.chunks.Comment object at 0x10166c860>
    // <conv.chunks.Comment object at 0x10166c980>
    lda(offsetof(G, Enemy_State), x);
    anda(0b111);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x10166cbc0>
    // <conv.chunks.Comment object at 0x10166cce0>
    cmp(0x5);
    BEQ(FallE);
    // <conv.chunks.Comment object at 0x10166ce90>
    cmp(0x3);
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // <conv.chunks.Comment object at 0x10166d0d0>
    // <conv.chunks.Comment object at 0x10166d280>
    JSR(MoveD_EnemyVertically);
    ldy(0x0);
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x10166d460>
    cmp(0x2);
    BEQ(MEHor);
    anda(0b1000000);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x10166d6a0>
    // <conv.chunks.Comment object at 0x10166d880>
    // <conv.chunks.Comment object at 0x10166d9a0>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, PowerUpObject));
    // <conv.chunks.Comment object at 0x10166dc10>
    BEQ(SteadM);
    BNE(SlowM);
    JMP(MEHor);
}

int MEHor() {
    // <conv.chunks.Comment object at 0x10166de50>
    // <conv.chunks.Comment object at 0x10166dfa0>
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}

int SlowM() {
    // <conv.chunks.Comment object at 0x10166e120>
    ldy(0x1);
    JMP(SteadM);
}

int SteadM() {
    // <conv.chunks.Comment object at 0x10166e210>
    lda(offsetof(G, Enemy_X_Speed), x);
    pha();
    BPL(AddHS);
    // <conv.chunks.Comment object at 0x10166e480>
    // <conv.chunks.Comment object at 0x10166e510>
    iny();
    iny();
    JMP(AddHS);
}

int AddHS() {
    clc();
    adc(offsetof(G, XSpeedAdderData), y);
    sta(offsetof(G, Enemy_X_Speed), x);
    JSR(MoveEnemyHorizontally);
    // <conv.chunks.Comment object at 0x10166e8a0>
    // <conv.chunks.Comment object at 0x10166e9f0>
    // <conv.chunks.Comment object at 0x10166eb40>
    pla();
    sta(offsetof(G, Enemy_X_Speed), x);
    rts();
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda(offsetof(G, EnemyIntervalTimer), x);
    BNE(ChkKillGoomba);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x10166ef30>
    // <conv.chunks.Comment object at 0x10166f080>
    // <conv.chunks.Comment object at 0x10166f1a0>
    lda(offsetof(G, FrameCounter));
    anda(0x1);
    tay();
    // <conv.chunks.Comment object at 0x10166f3e0>
    // <conv.chunks.Comment object at 0x10166f530>
    iny();
    sty(offsetof(G, Enemy_MovingDir), x);
    dey();
    lda(offsetof(G, PrimaryHardMode));
    BEQ(SetRSpd);
    // <conv.chunks.Comment object at 0x10166f650>
    // <conv.chunks.Comment object at 0x10166f7d0>
    // <conv.chunks.Comment object at 0x10166f860>
    // <conv.chunks.Comment object at 0x10166f980>
    iny();
    iny();
    JMP(SetRSpd);
}

int SetRSpd() {
    // <conv.chunks.Comment object at 0x10166fb90>
    // <conv.chunks.Comment object at 0x10166fc20>
    lda(offsetof(G, RevivedXSpeed), y);
    sta(offsetof(G, Enemy_X_Speed), x);
    // <conv.chunks.Comment object at 0x10166fdd0>
    rts();
    JMP(MoveDefeatedEnemy);
}

int MoveDefeatedEnemy() {
    JSR(MoveD_EnemyVertically);
    JMP(MoveEnemyHorizontally);
    JMP(ChkKillGoomba);
}

int ChkKillGoomba() {
    cmp(0xe);
    BNE(NKGmba);
    // <conv.chunks.Comment object at 0x10167c290>
    // <conv.chunks.Comment object at 0x10167c320>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Goomba));
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // <conv.chunks.Comment object at 0x10167c620>
    // <conv.chunks.Comment object at 0x10167c680>
    // <conv.chunks.Comment object at 0x10167c8c0>
    // <conv.chunks.Comment object at 0x10167ca10>
    rts();
    JMP(MoveJumpingEnemy);
}

int MoveJumpingEnemy() {
    JSR(MoveJ_EnemyVertically);
    JMP(MoveEnemyHorizontally);
    JMP(ProcMoveRedPTroopa);
}

int ProcMoveRedPTroopa() {
    lda(offsetof(G, Enemy_Y_Speed), x);
    ora(offsetof(G, Enemy_Y_MoveForce), x);
    BNE(MoveRedPTUpOrDown);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x10167cf50>
    // <conv.chunks.Comment object at 0x10167d0a0>
    // <conv.chunks.Comment object at 0x10167d1c0>
    // <conv.chunks.Comment object at 0x10167d310>
    cmp(offsetof(G, RedPTroopaOrigXPos), x);
    BCS(MoveRedPTUpOrDown);
    lda(offsetof(G, FrameCounter));
    anda(0b111);
    BNE(NoIncPT);
    inc(offsetof(G, Enemy_Y_Position), x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // <conv.chunks.Comment object at 0x10167d580>
    // <conv.chunks.Comment object at 0x10167d6a0>
    // <conv.chunks.Comment object at 0x10167d7c0>
    // <conv.chunks.Comment object at 0x10167d8e0>
    // <conv.chunks.Comment object at 0x10167da30>
    // <conv.chunks.Comment object at 0x10167dbb0>
    rts();
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x10167dd00>
    cmp(offsetof(G, RedPTroopaCenterYPos), x);
    BCC(MovPTDwn);
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}

int MovPTDwn() {
    // <conv.chunks.Comment object at 0x10167df70>
    // <conv.chunks.Comment object at 0x10167e090>
    // <conv.chunks.Comment object at 0x10167e1b0>
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}

int MoveFlyGreenPTroopa() {
    JSR(XMoveCntr_GreenPTroopa);
    JSR(MoveWithXMCntrs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x10167e3c0>
    // <conv.chunks.Comment object at 0x10167e4e0>
    // <conv.chunks.Comment object at 0x10167e600>
    lda(offsetof(G, FrameCounter));
    anda(0b11);
    BNE(NoMGPT);
    // <conv.chunks.Comment object at 0x10167e810>
    // <conv.chunks.Comment object at 0x10167e930>
    lda(offsetof(G, FrameCounter));
    anda(0b1000000);
    BNE(YSway);
    ldy(0xff);
    JMP(YSway);
}

int YSway() {
    // <conv.chunks.Comment object at 0x10167eb70>
    // <conv.chunks.Comment object at 0x10167ec90>
    // <conv.chunks.Comment object at 0x10167ede0>
    // <conv.chunks.Comment object at 0x10167ee70>
    sty(0x0);
    lda(offsetof(G, Enemy_Y_Position), x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x10167f1d0>
    // <conv.chunks.Comment object at 0x10167f290>
    sta(offsetof(G, Enemy_Y_Position), x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // <conv.chunks.Comment object at 0x10167f4d0>
    rts();
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(0x13);
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(0x1);
    // <conv.chunks.Comment object at 0x10167f7a0>
    lda(offsetof(G, FrameCounter));
    anda(0b11);
    BNE(NoIncXM);
    ldy(offsetof(G, XMoveSecondaryCounter), x);
    lda(offsetof(G, XMovePrimaryCounter), x);
    // <conv.chunks.Comment object at 0x10167f980>
    // <conv.chunks.Comment object at 0x10167faa0>
    // <conv.chunks.Comment object at 0x10167fbf0>
    // <conv.chunks.Comment object at 0x10167fd40>
    lsr();
    BCS(DecSeXM);
    cpy(0x1);
    BEQ(IncPXM);
    inc(offsetof(G, XMoveSecondaryCounter), x);
    JMP(NoIncXM);
}

int NoIncXM() {
    rts();
    JMP(IncPXM);
}

int IncPXM() {
    // <conv.chunks.Comment object at 0x101688560>
    inc(offsetof(G, XMovePrimaryCounter), x);
    rts();
    JMP(DecSeXM);
}

int DecSeXM() {
    // <conv.chunks.Comment object at 0x1016887a0>
    tya();
    BEQ(IncPXM);
    dec(offsetof(G, XMoveSecondaryCounter), x);
    // <conv.chunks.Comment object at 0x1016888c0>
    // <conv.chunks.Comment object at 0x101688a10>
    rts();
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda(offsetof(G, XMoveSecondaryCounter), x);
    // <conv.chunks.Comment object at 0x101688c20>
    pha();
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101688e00>
    lda(offsetof(G, XMovePrimaryCounter), x);
    anda(0b10);
    BNE(XMRight);
    // <conv.chunks.Comment object at 0x101689040>
    // <conv.chunks.Comment object at 0x101689160>
    lda(offsetof(G, XMoveSecondaryCounter), x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1016893d0>
    // <conv.chunks.Comment object at 0x101689520>
    adc(0x1);
    sta(offsetof(G, XMoveSecondaryCounter), x);
    ldy(0x2);
    JMP(XMRight);
}

int XMRight() {
    // <conv.chunks.Comment object at 0x1016897c0>
    // <conv.chunks.Comment object at 0x101689850>
    sty(offsetof(G, Enemy_MovingDir), x);
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    pla();
    sta(offsetof(G, XMoveSecondaryCounter), x);
    // <conv.chunks.Comment object at 0x101689bb0>
    // <conv.chunks.Comment object at 0x101689b80>
    // <conv.chunks.Comment object at 0x101689d60>
    rts();
    JMP(MoveBloober);
}

int MoveBloober() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BNE(MoveDefeatedBloober);
    ldy(offsetof(G, SecondaryHardMode));
    lda(((offsetof(G, PseudoRandomBitReg)) + (1)), x);
    anda(offsetof(G, BlooberBitmasks), y);
    BNE(BlooberSwim);
    // <conv.chunks.Comment object at 0x10168a210>
    // <conv.chunks.Comment object at 0x10168a330>
    // <conv.chunks.Comment object at 0x10168a450>
    // <conv.chunks.Comment object at 0x10168a570>
    // <conv.chunks.Comment object at 0x10168a780>
    // <conv.chunks.Comment object at 0x10168a8d0>
    txa();
    lsr();
    BCC(FBLeft);
    ldy(offsetof(G, Player_MovingDir));
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // <conv.chunks.Comment object at 0x10168aab0>
    // <conv.chunks.Comment object at 0x10168ab40>
    // <conv.chunks.Comment object at 0x10168ac90>
    // <conv.chunks.Comment object at 0x10168adb0>
    // <conv.chunks.Comment object at 0x10168af00>
    ldy(0x2);
    JSR(PlayerEnemyDiff);
    BPL(SBMDir);
    dey();
    JMP(SBMDir);
}

int SBMDir() {
    // <conv.chunks.Comment object at 0x10168aff0>
    // <conv.chunks.Comment object at 0x10168b1a0>
    // <conv.chunks.Comment object at 0x10168b320>
    // <conv.chunks.Comment object at 0x10168b3b0>
    sty(offsetof(G, Enemy_MovingDir), x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x10168b590>
    // <conv.chunks.Comment object at 0x10168b6b0>
    sec();
    sbc(offsetof(G, Enemy_Y_MoveForce), x);
    cmp(0x20);
    BCC(SwimX);
    sta(offsetof(G, Enemy_Y_Position), x);
    JMP(SwimX);
}

int SwimX() {
    // <conv.chunks.Comment object at 0x10168b890>
    // <conv.chunks.Comment object at 0x10168b9e0>
    // <conv.chunks.Comment object at 0x10168ba70>
    // <conv.chunks.Comment object at 0x10168bc50>
    // <conv.chunks.Comment object at 0x10168bda0>
    ldy(offsetof(G, Enemy_MovingDir), x);
    dey();
    BNE(LeftSwim);
    // <conv.chunks.Comment object at 0x10168bfe0>
    lda(offsetof(G, Enemy_X_Position), x);
    clc();
    // <conv.chunks.Comment object at 0x101694290>
    adc(offsetof(G, BlooperMoveSpeed), x);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101694440>
    lda(offsetof(G, Enemy_PageLoc), x);
    adc(0x0);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x1016946b0>
    // <conv.chunks.Comment object at 0x101694740>
    rts();
    JMP(LeftSwim);
}

int LeftSwim() {
    lda(offsetof(G, Enemy_X_Position), x);
    sec();
    // <conv.chunks.Comment object at 0x101694b30>
    sbc(offsetof(G, BlooperMoveSpeed), x);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101694ce0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(0x0);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x101694f50>
    // <conv.chunks.Comment object at 0x101694fe0>
    rts();
    JMP(MoveDefeatedBloober);
}

int MoveDefeatedBloober() {
    JMP(MoveEnemySlowVert);
    JMP(ProcSwimmingB);
}

int ProcSwimmingB() {
    lda(offsetof(G, BlooperMoveCounter), x);
    anda(0b10);
    BNE(ChkForFloatdown);
    // <conv.chunks.Comment object at 0x1016953d0>
    // <conv.chunks.Comment object at 0x101695520>
    // <conv.chunks.Comment object at 0x101695640>
    lda(offsetof(G, FrameCounter));
    anda(0b111);
    pha();
    lda(offsetof(G, BlooperMoveCounter), x);
    lsr();
    BCS(SlowSwim);
    pla();
    BNE(BSwimE);
    // <conv.chunks.Comment object at 0x101695850>
    // <conv.chunks.Comment object at 0x1016959a0>
    // <conv.chunks.Comment object at 0x101695a30>
    // <conv.chunks.Comment object at 0x101695bb0>
    // <conv.chunks.Comment object at 0x101695c40>
    // <conv.chunks.Comment object at 0x101695d90>
    // <conv.chunks.Comment object at 0x101695e20>
    lda(offsetof(G, Enemy_Y_MoveForce), x);
    clc();
    // <conv.chunks.Comment object at 0x1016960c0>
    adc(0x1);
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    sta(offsetof(G, BlooperMoveSpeed), x);
    // <conv.chunks.Comment object at 0x1016961b0>
    // <conv.chunks.Comment object at 0x101696390>
    cmp(0x2);
    BNE(BSwimE);
    inc(offsetof(G, BlooperMoveCounter), x);
    JMP(BSwimE);
}

int BSwimE() {
    rts();
    JMP(SlowSwim);
}

int SlowSwim() {
    pla();
    BNE(NoSSw);
    // <conv.chunks.Comment object at 0x1016969c0>
    // <conv.chunks.Comment object at 0x101696a50>
    lda(offsetof(G, Enemy_Y_MoveForce), x);
    sec();
    // <conv.chunks.Comment object at 0x101696cf0>
    sbc(0x1);
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    sta(offsetof(G, BlooperMoveSpeed), x);
    BNE(NoSSw);
    inc(offsetof(G, BlooperMoveCounter), x);
    // <conv.chunks.Comment object at 0x101696de0>
    // <conv.chunks.Comment object at 0x101696fc0>
    // <conv.chunks.Comment object at 0x101697110>
    // <conv.chunks.Comment object at 0x101697260>
    lda(0x2);
    sta(offsetof(G, EnemyIntervalTimer), x);
    JMP(NoSSw);
}

int NoSSw() {
    // <conv.chunks.Comment object at 0x101697410>
    // <conv.chunks.Comment object at 0x101697620>
    rts();
    JMP(ChkForFloatdown);
}

int ChkForFloatdown() {
    lda(offsetof(G, EnemyIntervalTimer), x);
    BEQ(ChkNearPlayer);
    JMP(Floatdown);
}

int Floatdown() {
    lda(offsetof(G, FrameCounter));
    lsr();
    BCS(NoFD);
    inc(offsetof(G, Enemy_Y_Position), x);
    JMP(NoFD);
}

int NoFD() {
    // <conv.chunks.Comment object at 0x101697a10>
    // <conv.chunks.Comment object at 0x101697b60>
    // <conv.chunks.Comment object at 0x101697bf0>
    // <conv.chunks.Comment object at 0x101697d40>
    // <conv.chunks.Comment object at 0x101697ec0>
    rts();
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(0x10);
    cmp(offsetof(G, Player_Y_Position));
    BCC(Floatdown);
    // <conv.chunks.Comment object at 0x1016a0050>
    // <conv.chunks.Comment object at 0x1016a01a0>
    // <conv.chunks.Comment object at 0x1016a0230>
    // <conv.chunks.Comment object at 0x1016a03e0>
    lda(0x0);
    sta(offsetof(G, BlooperMoveCounter), x);
    // <conv.chunks.Comment object at 0x1016a0560>
    rts();
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1016a0830>
    anda(0b100000);
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // <conv.chunks.Comment object at 0x1016a0a70>
    // <conv.chunks.Comment object at 0x1016a0bc0>
    // <conv.chunks.Comment object at 0x1016a0ce0>
    lda(0xe8);
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(MoveEnemyHorizontally);
    JMP(MoveSwimmingCheepCheep);
}

int MoveSwimmingCheepCheep() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BEQ(CCSwim);
    JMP(MoveEnemySlowVert);
    JMP(CCSwim);
}

int CCSwim() {
    // <conv.chunks.Comment object at 0x1016a1220>
    // <conv.chunks.Comment object at 0x1016a1580>
    // <conv.chunks.Comment object at 0x1016a16a0>
    // <conv.chunks.Comment object at 0x1016a17f0>
    // <conv.chunks.Comment object at 0x1016a1910>
    sta(0x3);
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1016a1a30>
    sec();
    sbc(0xa);
    tay();
    lda(offsetof(G, SwimCCXMoveData), y);
    // <conv.chunks.Comment object at 0x1016a1c70>
    // <conv.chunks.Comment object at 0x1016a1dc0>
    // <conv.chunks.Comment object at 0x1016a1e50>
    sta(0x2);
    lda(offsetof(G, Enemy_X_MoveForce), x);
    // <conv.chunks.Comment object at 0x1016a1fa0>
    sec();
    sbc(0x2);
    sta(offsetof(G, Enemy_X_MoveForce), x);
    lda(offsetof(G, Enemy_X_Position), x);
    sbc(0x0);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x1016a22a0>
    // <conv.chunks.Comment object at 0x1016a2330>
    // <conv.chunks.Comment object at 0x1016a24e0>
    // <conv.chunks.Comment object at 0x1016a2630>
    // <conv.chunks.Comment object at 0x1016a26c0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(0x0);
    sta(offsetof(G, Enemy_PageLoc), x);
    // <conv.chunks.Comment object at 0x1016a29c0>
    // <conv.chunks.Comment object at 0x1016a2a50>
    lda(0x20);
    sta(0x2);
    cpx(0x2);
    BCC(ExSwCC);
    lda(offsetof(G, CheepCheepMoveMFlag), x);
    cmp(0x10);
    BCC(CCSwimUpwards);
    // <conv.chunks.Comment object at 0x1016a2d50>
    // <conv.chunks.Comment object at 0x1016a2de0>
    // <conv.chunks.Comment object at 0x1016a2ed0>
    // <conv.chunks.Comment object at 0x1016a30b0>
    // <conv.chunks.Comment object at 0x1016a3200>
    // <conv.chunks.Comment object at 0x1016a3290>
    lda(offsetof(G, Enemy_YMF_Dummy), x);
    clc();
    adc(0x2);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(0x3);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016a3620>
    // <conv.chunks.Comment object at 0x1016a36b0>
    // <conv.chunks.Comment object at 0x1016a3860>
    // <conv.chunks.Comment object at 0x1016a39e0>
    // <conv.chunks.Comment object at 0x1016a3a70>
    lda(offsetof(G, Enemy_Y_HighPos), x);
    adc(0x0);
    JMP(ChkSwimYPos);
    JMP(CCSwimUpwards);
}

int CCSwimUpwards() {
    lda(offsetof(G, Enemy_YMF_Dummy), x);
    sec();
    sbc(0x2);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    sbc(0x3);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016a81d0>
    // <conv.chunks.Comment object at 0x1016a8260>
    // <conv.chunks.Comment object at 0x1016a8410>
    // <conv.chunks.Comment object at 0x1016a8590>
    // <conv.chunks.Comment object at 0x1016a8620>
    lda(offsetof(G, Enemy_Y_HighPos), x);
    sbc(0x0);
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta(offsetof(G, Enemy_Y_HighPos), x);
    ldy(0x0);
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1016a8a40>
    // <conv.chunks.Comment object at 0x1016a8b90>
    // <conv.chunks.Comment object at 0x1016a8c20>
    sec();
    sbc(offsetof(G, CheepCheepOrigYPos), x);
    BPL(YPDiff);
    ldy(0x10);
    // <conv.chunks.Comment object at 0x1016a8e90>
    // <conv.chunks.Comment object at 0x1016a8fe0>
    // <conv.chunks.Comment object at 0x1016a9130>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(YPDiff);
}

int YPDiff() {
    // <conv.chunks.Comment object at 0x1016a9370>
    // <conv.chunks.Comment object at 0x1016a9400>
    // <conv.chunks.Comment object at 0x1016a9490>
    cmp(0xf);
    BCC(ExSwCC);
    // <conv.chunks.Comment object at 0x1016a9610>
    tya();
    sta(offsetof(G, CheepCheepMoveMFlag), x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // <conv.chunks.Comment object at 0x1016a9880>
    // <conv.chunks.Comment object at 0x1016a9a00>
    rts();
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1000);
    // <conv.chunks.Comment object at 0x1016a9eb0>
    // <conv.chunks.Comment object at 0x1016b61e0>
    // <conv.chunks.Comment object at 0x1016b6300>
    BNE(SkipFBar);
    lda(offsetof(G, TimerControl));
    BNE(SusFbar);
    lda(offsetof(G, FirebarSpinSpeed), x);
    JSR(FirebarSpin);
    anda(0b11111);
    sta(offsetof(G, FirebarSpinState_High), x);
    JMP(SusFbar);
}

int SusFbar() {
    // <conv.chunks.Comment object at 0x1016b6510>
    // <conv.chunks.Comment object at 0x1016b6630>
    // <conv.chunks.Comment object at 0x1016b6780>
    // <conv.chunks.Comment object at 0x1016b68d0>
    // <conv.chunks.Comment object at 0x1016b69f0>
    // <conv.chunks.Comment object at 0x1016b6b10>
    // <conv.chunks.Comment object at 0x1016b6c60>
    lda(offsetof(G, FirebarSpinState_High), x);
    ldy(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1016b6e10>
    cpy(0x1f);
    BCC(SetupGFB);
    cmp(0x8);
    BEQ(SkpFSte);
    // <conv.chunks.Comment object at 0x1016b6fc0>
    // <conv.chunks.Comment object at 0x1016b7170>
    // <conv.chunks.Comment object at 0x1016b7200>
    cmp(0x18);
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1016b76e0>
    sta(offsetof(G, FirebarSpinState_High), x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // <conv.chunks.Comment object at 0x1016b7920>
    sta(0xef);
    JSR(RelativeEnemyPosition);
    JSR(GetFirebarPosition);
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, Enemy_Rel_YPos));
    sta(offsetof(G, Sprite_Y_Position), y);
    sta(0x7);
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x1016b7a10>
    // <conv.chunks.Comment object at 0x1016b7b90>
    // <conv.chunks.Comment object at 0x1016b7cb0>
    // <conv.chunks.Comment object at 0x1016b7e00>
    // <conv.chunks.Comment object at 0x1016b7f20>
    // <conv.chunks.Comment object at 0x1016bc0e0>
    // <conv.chunks.Comment object at 0x1016bc170>
    // <conv.chunks.Comment object at 0x1016bc2f0>
    // <conv.chunks.Comment object at 0x1016bc470>
    lda(0x1);
    sta(0x0);
    JSR(FirebarCollision);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1016bc680>
    // <conv.chunks.Comment object at 0x1016bc710>
    // <conv.chunks.Comment object at 0x1016bc890>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x1f);
    BCC(SetMFbar);
    ldy(0xb);
    JMP(SetMFbar);
}

int SetMFbar() {
    // <conv.chunks.Comment object at 0x1016bcad0>
    // <conv.chunks.Comment object at 0x1016bcb60>
    // <conv.chunks.Comment object at 0x1016bcd10>
    // <conv.chunks.Comment object at 0x1016bcda0>
    sty(0xed);
    lda(0x0);
    sta(0x0);
    JMP(DrawFbar);
}

int DrawFbar() {
    // <conv.chunks.Comment object at 0x1016bd0a0>
    // <conv.chunks.Comment object at 0x1016bd130>
    lda(0xef);
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1016bd280>
    // <conv.chunks.Comment object at 0x1016bd400>
    // <conv.chunks.Comment object at 0x1016bd550>
    cmp(0x4);
    BNE(NextFbar);
    ldy(offsetof(G, DuplicateObj_Offset));
    lda(offsetof(G, Enemy_SprDataOffset), y);
    sta(0x6);
    JMP(NextFbar);
}

int NextFbar() {
    // <conv.chunks.Comment object at 0x1016bd820>
    // <conv.chunks.Comment object at 0x1016bd940>
    // <conv.chunks.Comment object at 0x1016bdac0>
    // <conv.chunks.Comment object at 0x1016bdb50>
    inc(0x0);
    lda(0x0);
    cmp(0xed);
    BCC(DrawFbar);
    JMP(SkipFBar);
}

int SkipFBar() {
    rts();
    JMP(DrawFirebar_Collision);
}

int DrawFirebar_Collision() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x1016be150>
    sta(0x5);
    ldy(0x6);
    lda(0x1);
    lsr(0x5);
    BCS(AddHA);
    // <conv.chunks.Comment object at 0x1016be2d0>
    // <conv.chunks.Comment object at 0x1016be1e0>
    // <conv.chunks.Comment object at 0x1016be3f0>
    // <conv.chunks.Comment object at 0x1016be630>
    eor(0xff);
    adc(0x1);
    JMP(AddHA);
}

int AddHA() {
    // <conv.chunks.Comment object at 0x1016be840>
    // <conv.chunks.Comment object at 0x1016be960>
    clc();
    adc(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    sta(0x6);
    cmp(offsetof(G, Enemy_Rel_XPos));
    BCS(SubtR1);
    // <conv.chunks.Comment object at 0x1016beb10>
    // <conv.chunks.Comment object at 0x1016bec30>
    // <conv.chunks.Comment object at 0x1016bedb0>
    // <conv.chunks.Comment object at 0x1016bee40>
    // <conv.chunks.Comment object at 0x1016befc0>
    lda(offsetof(G, Enemy_Rel_XPos));
    sec();
    sbc(0x6);
    // <conv.chunks.Comment object at 0x1016bf230>
    // <conv.chunks.Comment object at 0x1016bf2f0>
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // <conv.chunks.Comment object at 0x1016bf500>
    sec();
    sbc(offsetof(G, Enemy_Rel_XPos));
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // <conv.chunks.Comment object at 0x1016bf620>
    // <conv.chunks.Comment object at 0x1016bf740>
    cmp(0x59);
    BCC(VAHandl);
    lda(0xf8);
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // <conv.chunks.Comment object at 0x1016bf830>
    // <conv.chunks.Comment object at 0x1016bfa10>
    // <conv.chunks.Comment object at 0x1016bfaa0>
    // <conv.chunks.Comment object at 0x1016bfc80>
    lda(offsetof(G, Enemy_Rel_YPos));
    cmp(0xf8);
    // <conv.chunks.Comment object at 0x1016bfe00>
    BEQ(SetVFbr);
    lda(0x2);
    lsr(0x5);
    BCS(AddVA);
    // <conv.chunks.Comment object at 0x1016c80b0>
    // <conv.chunks.Comment object at 0x1016c8080>
    // <conv.chunks.Comment object at 0x1016c8260>
    eor(0xff);
    adc(0x1);
    JMP(AddVA);
}

int AddVA() {
    // <conv.chunks.Comment object at 0x1016c8470>
    // <conv.chunks.Comment object at 0x1016c8590>
    clc();
    adc(offsetof(G, Enemy_Rel_YPos));
    JMP(SetVFbr);
}

int SetVFbr() {
    // <conv.chunks.Comment object at 0x1016c8740>
    // <conv.chunks.Comment object at 0x1016c8860>
    sta(offsetof(G, Sprite_Y_Position), y);
    sta(0x7);
    JMP(FirebarCollision);
}

int FirebarCollision() {
    JSR(DrawFirebar);
    tya();
    pha();
    lda(offsetof(G, StarInvincibleTimer));
    ora(offsetof(G, TimerControl));
    BNE(NoColFB);
    sta(0x5);
    // <conv.chunks.Comment object at 0x1016c8a10>
    // <conv.chunks.Comment object at 0x1016c8cb0>
    // <conv.chunks.Comment object at 0x1016c8d70>
    // <conv.chunks.Comment object at 0x1016c8e00>
    // <conv.chunks.Comment object at 0x1016c8f20>
    // <conv.chunks.Comment object at 0x1016c9040>
    // <conv.chunks.Comment object at 0x1016c91c0>
    ldy(offsetof(G, Player_Y_HighPos));
    dey();
    BNE(NoColFB);
    ldy(offsetof(G, Player_Y_Position));
    lda(offsetof(G, PlayerSize));
    BNE(AdjSm);
    // <conv.chunks.Comment object at 0x1016c93d0>
    // <conv.chunks.Comment object at 0x1016c9460>
    // <conv.chunks.Comment object at 0x1016c95b0>
    // <conv.chunks.Comment object at 0x1016c96d0>
    // <conv.chunks.Comment object at 0x1016c97f0>
    lda(offsetof(G, CrouchingFlag));
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // <conv.chunks.Comment object at 0x1016c9a30>
    // <conv.chunks.Comment object at 0x1016c9b80>
    inc(0x5);
    inc(0x5);
    // <conv.chunks.Comment object at 0x1016c9be0>
    tya();
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x1016c9ee0>
    // <conv.chunks.Comment object at 0x1016c9f70>
    tay();
    JMP(BigJp);
}

int BigJp() {
    // <conv.chunks.Comment object at 0x1016ca120>
    tya();
    JMP(FBCLoop);
}

int FBCLoop() {
    // <conv.chunks.Comment object at 0x1016ca240>
    sec();
    sbc(0x7);
    BPL(ChkVFBD);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1016ca390>
    // <conv.chunks.Comment object at 0x1016ca420>
    // <conv.chunks.Comment object at 0x1016ca5d0>
    // <conv.chunks.Comment object at 0x1016ca720>
    adc(0x1);
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // <conv.chunks.Comment object at 0x1016ca810>
    cmp(0x8);
    BCS(Chk2Ofs);
    lda(0x6);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x1016cab70>
    // <conv.chunks.Comment object at 0x1016cac00>
    BCS(Chk2Ofs);
    lda(((offsetof(G, Sprite_X_Position)) + (4)));
    // <conv.chunks.Comment object at 0x1016caea0>
    clc();
    adc(0x4);
    sta(0x4);
    sec();
    sbc(0x6);
    BPL(ChkFBCl);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1016cb110>
    // <conv.chunks.Comment object at 0x1016cb260>
    // <conv.chunks.Comment object at 0x1016cb1a0>
    // <conv.chunks.Comment object at 0x1016cb440>
    // <conv.chunks.Comment object at 0x1016cb4d0>
    // <conv.chunks.Comment object at 0x1016cb680>
    // <conv.chunks.Comment object at 0x1016cb7d0>
    adc(0x1);
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // <conv.chunks.Comment object at 0x1016cb8c0>
    cmp(0x8);
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // <conv.chunks.Comment object at 0x1016cba40>
    // <conv.chunks.Comment object at 0x1016cbc20>
    lda(0x5);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x1016cbd40>
    BEQ(NoColFB);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1016d0050>
    lda(offsetof(G, Player_Y_Position));
    clc();
    adc(offsetof(G, FirebarYPos), y);
    inc(0x5);
    // <conv.chunks.Comment object at 0x1016d02c0>
    // <conv.chunks.Comment object at 0x1016d0440>
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // <conv.chunks.Comment object at 0x1016d0650>
    ldx(0x1);
    lda(0x4);
    cmp(0x6);
    BCS(SetSDir);
    inx();
    JMP(SetSDir);
}

int SetSDir() {
    // <conv.chunks.Comment object at 0x1016d0800>
    // <conv.chunks.Comment object at 0x1016d0740>
    // <conv.chunks.Comment object at 0x1016d09b0>
    // <conv.chunks.Comment object at 0x1016d0b90>
    // <conv.chunks.Comment object at 0x1016d0c20>
    stx(offsetof(G, Enemy_MovingDir));
    ldx(0x0);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1016d0ec0>
    pha();
    JSR(InjurePlayer);
    // <conv.chunks.Comment object at 0x1016d1040>
    pla();
    sta(0x0);
    JMP(NoColFB);
}

int NoColFB() {
    // <conv.chunks.Comment object at 0x1016d1220>
    // <conv.chunks.Comment object at 0x1016d12b0>
    pla();
    clc();
    // <conv.chunks.Comment object at 0x1016d1460>
    adc(0x4);
    sta(0x6);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1016d1550>
    rts();
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1016d18e0>
    // <conv.chunks.Comment object at 0x1016d1970>
    cmp(0x9);
    BCC(GetHAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1016d1af0>
    // <conv.chunks.Comment object at 0x1016d1ca0>
    clc();
    adc(0x1);
    JMP(GetHAdder);
}

int GetHAdder() {
    // <conv.chunks.Comment object at 0x1016d1eb0>
    sta(0x1);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1016d1f70>
    // <conv.chunks.Comment object at 0x1016d2150>
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1016d23c0>
    // <conv.chunks.Comment object at 0x1016d2390>
    // <conv.chunks.Comment object at 0x1016d2570>
    sta(0x1);
    pla();
    pha();
    // <conv.chunks.Comment object at 0x1016d2750>
    // <conv.chunks.Comment object at 0x1016d28a0>
    clc();
    adc(0x8);
    anda(0b1111);
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1016d29c0>
    // <conv.chunks.Comment object at 0x1016d2a50>
    // <conv.chunks.Comment object at 0x1016d2c00>
    BCC(GetVAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1016d2e10>
    clc();
    adc(0x1);
    JMP(GetVAdder);
}

int GetVAdder() {
    // <conv.chunks.Comment object at 0x1016d3020>
    sta(0x2);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1016d31a0>
    clc();
    adc(0x2);
    // <conv.chunks.Comment object at 0x1016d3500>
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1016d3680>
    sta(0x2);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1016d3860>
    // <conv.chunks.Comment object at 0x1016d39b0>
    lsr();
    lsr();
    tay();
    lda(offsetof(G, FirebarMirrorData), y);
    sta(0x3);
    // <conv.chunks.Comment object at 0x1016d3b90>
    // <conv.chunks.Comment object at 0x1016d3c20>
    // <conv.chunks.Comment object at 0x1016d3dd0>
    rts();
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BEQ(FlyCC);
    // <conv.chunks.Comment object at 0x1016dc050>
    // <conv.chunks.Comment object at 0x1016dc740>
    // <conv.chunks.Comment object at 0x1016dc860>
    lda(0x0);
    sta(offsetof(G, Enemy_SprAttrib), x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // <conv.chunks.Comment object at 0x1016dca10>
    // <conv.chunks.Comment object at 0x1016dcbf0>
    // <conv.chunks.Comment object at 0x1016dcd10>
    JSR(MoveEnemyHorizontally);
    ldy(0xd);
    lda(0x5);
    JSR(SetXMoveAmt);
    // <conv.chunks.Comment object at 0x1016dce90>
    // <conv.chunks.Comment object at 0x1016dcf20>
    // <conv.chunks.Comment object at 0x1016dd040>
    lda(offsetof(G, Enemy_Y_MoveForce), x);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1016dd340>
    // <conv.chunks.Comment object at 0x1016dd400>
    lsr();
    lsr();
    tay();
    lda(offsetof(G, Enemy_Y_Position), x);
    sec();
    // <conv.chunks.Comment object at 0x1016dd5e0>
    // <conv.chunks.Comment object at 0x1016dd670>
    // <conv.chunks.Comment object at 0x1016dd7f0>
    sbc(offsetof(G, PRandomSubtracter), y);
    BPL(AddCCF);
    // <conv.chunks.Comment object at 0x1016dd9a0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1016ddc10>
    adc(0x1);
    JMP(AddCCF);
}

int AddCCF() {
    // <conv.chunks.Comment object at 0x1016ddd00>
    cmp(0x8);
    BCS(BPGet);
    // <conv.chunks.Comment object at 0x1016dde80>
    lda(offsetof(G, Enemy_Y_MoveForce), x);
    clc();
    adc(0x10);
    // <conv.chunks.Comment object at 0x1016de210>
    sta(offsetof(G, Enemy_Y_MoveForce), x);
    lsr();
    // <conv.chunks.Comment object at 0x1016de480>
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}

int BPGet() {
    // <conv.chunks.Comment object at 0x1016de750>
    lda(offsetof(G, FlyCCBPriority), y);
    sta(offsetof(G, Enemy_SprAttrib), x);
    rts();
    JMP(MoveLakitu);
}

int MoveLakitu() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BEQ(ChkLS);
    JMP(MoveD_EnemyVertically);
    JMP(ChkLS);
}

int ChkLS() {
    // <conv.chunks.Comment object at 0x1016dec30>
    // <conv.chunks.Comment object at 0x1016def00>
    // <conv.chunks.Comment object at 0x1016df020>
    // <conv.chunks.Comment object at 0x1016df170>
    // <conv.chunks.Comment object at 0x1016df290>
    lda(offsetof(G, Enemy_State), x);
    BEQ(Fr12S);
    // <conv.chunks.Comment object at 0x1016df440>
    lda(0x0);
    sta(offsetof(G, LakituMoveDirection), x);
    sta(offsetof(G, EnemyFrenzyBuffer));
    // <conv.chunks.Comment object at 0x1016df5f0>
    // <conv.chunks.Comment object at 0x1016df7d0>
    lda(0x10);
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda(offsetof(G, Spiny));
    sta(offsetof(G, EnemyFrenzyBuffer));
    // <conv.chunks.Comment object at 0x1016dfbf0>
    ldy(0x2);
    JMP(LdLDa);
}

int LdLDa() {
    // <conv.chunks.Comment object at 0x1016dfe30>
    lda(offsetof(G, LakituDiffAdj), y);
    sta(0x1, y);
    // <conv.chunks.Comment object at 0x1016e40b0>
    dey();
    BPL(LdLDa);
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}

int SetLSpd() {
    // <conv.chunks.Comment object at 0x1016e4290>
    // <conv.chunks.Comment object at 0x1016e43e0>
    // <conv.chunks.Comment object at 0x1016e4500>
    sta(offsetof(G, LakituMoveSpeed), x);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1016e46b0>
    lda(offsetof(G, LakituMoveDirection), x);
    anda(0x1);
    BNE(SetLMov);
    // <conv.chunks.Comment object at 0x1016e48f0>
    // <conv.chunks.Comment object at 0x1016e4980>
    lda(offsetof(G, LakituMoveSpeed), x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1016e4c80>
    clc();
    adc(0x1);
    sta(offsetof(G, LakituMoveSpeed), x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // <conv.chunks.Comment object at 0x1016e4e90>
    // <conv.chunks.Comment object at 0x1016e50a0>
    // <conv.chunks.Comment object at 0x1016e5130>
    sty(offsetof(G, Enemy_MovingDir), x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(0x0);
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // <conv.chunks.Comment object at 0x1016e5430>
    // <conv.chunks.Comment object at 0x1016e54c0>
    // <conv.chunks.Comment object at 0x1016e5670>
    // <conv.chunks.Comment object at 0x1016e57c0>
    lda(0x0);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1016e5850>
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1016e5af0>
    sta(0x0);
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // <conv.chunks.Comment object at 0x1016e5b80>
    lda(0x0);
    cmp(0x3c);
    // <conv.chunks.Comment object at 0x1016e5df0>
    BCC(ChkPSpeed);
    lda(0x3c);
    // <conv.chunks.Comment object at 0x1016e6060>
    sta(0x0);
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1016e60f0>
    cmp(offsetof(G, Lakitu));
    BNE(ChkPSpeed);
    tya();
    cmp(offsetof(G, LakituMoveDirection), x);
    BEQ(ChkPSpeed);
    lda(offsetof(G, LakituMoveDirection), x);
    BEQ(SetLMovD);
    dec(offsetof(G, LakituMoveSpeed), x);
    lda(offsetof(G, LakituMoveSpeed), x);
    // <conv.chunks.Comment object at 0x1016e63f0>
    // <conv.chunks.Comment object at 0x1016e6630>
    // <conv.chunks.Comment object at 0x1016e66c0>
    // <conv.chunks.Comment object at 0x1016e6810>
    // <conv.chunks.Comment object at 0x1016e6930>
    // <conv.chunks.Comment object at 0x1016e6a80>
    // <conv.chunks.Comment object at 0x1016e6ba0>
    // <conv.chunks.Comment object at 0x1016e6cf0>
    BNE(ExMoveLak);
    JMP(SetLMovD);
}

int SetLMovD() {
    // <conv.chunks.Comment object at 0x1016e6f30>
    tya();
    sta(offsetof(G, LakituMoveDirection), x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(0x0);
    anda(0b111100);
    lsr();
    // <conv.chunks.Comment object at 0x1016e7230>
    // <conv.chunks.Comment object at 0x1016e73e0>
    lsr();
    sta(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1016e7530>
    // <conv.chunks.Comment object at 0x1016e75c0>
    lda(offsetof(G, Player_X_Speed));
    BEQ(SubDifAdj);
    // <conv.chunks.Comment object at 0x1016e7830>
    lda(offsetof(G, ScrollAmount));
    BEQ(SubDifAdj);
    iny();
    // <conv.chunks.Comment object at 0x1016e7a40>
    // <conv.chunks.Comment object at 0x1016e7b90>
    lda(offsetof(G, Player_X_Speed));
    cmp(0x19);
    // <conv.chunks.Comment object at 0x1016e7d10>
    BCC(ChkSpinyO);
    lda(offsetof(G, ScrollAmount));
    cmp(0x2);
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // <conv.chunks.Comment object at 0x1016ec050>
    // <conv.chunks.Comment object at 0x1016ec0e0>
    // <conv.chunks.Comment object at 0x1016ec2c0>
    // <conv.chunks.Comment object at 0x1016ec350>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Spiny));
    BNE(ChkEmySpd);
    lda(offsetof(G, Player_X_Speed));
    // <conv.chunks.Comment object at 0x1016ec530>
    // <conv.chunks.Comment object at 0x1016ec710>
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // <conv.chunks.Comment object at 0x1016ec920>
    lda(offsetof(G, Enemy_Y_Speed), x);
    BNE(SubDifAdj);
    ldy(0x0);
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // <conv.chunks.Comment object at 0x1016ecaa0>
    // <conv.chunks.Comment object at 0x1016ecbc0>
    // <conv.chunks.Comment object at 0x1016ecc50>
    lda(0x1, y);
    ldy(0x0);
    JMP(SPixelLak);
}

int SPixelLak() {
    // <conv.chunks.Comment object at 0x1016ece90>
    // <conv.chunks.Comment object at 0x1016ecf20>
    sec();
    sbc(0x1);
    // <conv.chunks.Comment object at 0x1016ed070>
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // <conv.chunks.Comment object at 0x1016ed220>
    // <conv.chunks.Comment object at 0x1016ed340>
    rts();
    JMP(BridgeCollapse);
}

int BridgeCollapse() {
    ldx(offsetof(G, BowserFront_Offset));
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Bowser));
    BNE(SetM2);
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1016ed790>
    // <conv.chunks.Comment object at 0x1016ed580>
    // <conv.chunks.Comment object at 0x1016ee0f0>
    // <conv.chunks.Comment object at 0x1016ee150>
    // <conv.chunks.Comment object at 0x1016ee390>
    // <conv.chunks.Comment object at 0x1016ee4b0>
    BEQ(RemoveBridge);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1016ee6f0>
    BEQ(SetM2);
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0xe0);
    // <conv.chunks.Comment object at 0x1016ee930>
    // <conv.chunks.Comment object at 0x1016eea80>
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // <conv.chunks.Comment object at 0x1016eec90>
    lda(offsetof(G, Silence));
    sta(offsetof(G, EventMusicQueue));
    inc(offsetof(G, OperMode_Task));
    JMP(KillAllEnemies);
    JMP(MoveD_Bowser);
}

int MoveD_Bowser() {
    JSR(MoveEnemySlowVert);
    JMP(BowserGfxHandler);
    JMP(RemoveBridge);
}

int RemoveBridge() {
    dec(offsetof(G, BowserFeetCounter));
    BNE(NoBFall);
    // <conv.chunks.Comment object at 0x1016ef410>
    // <conv.chunks.Comment object at 0x1016ef530>
    lda(0x4);
    sta(offsetof(G, BowserFeetCounter));
    // <conv.chunks.Comment object at 0x1016ef6e0>
    lda(offsetof(G, BowserBodyControls));
    eor(0x1);
    // <conv.chunks.Comment object at 0x1016ef980>
    sta(offsetof(G, BowserBodyControls));
    lda(0x22);
    // <conv.chunks.Comment object at 0x1016efb90>
    sta(0x5);
    ldy(offsetof(G, BridgeCollapseOffset));
    lda(offsetof(G, BridgeCollapseData), y);
    // <conv.chunks.Comment object at 0x1016efc20>
    // <conv.chunks.Comment object at 0x1016efec0>
    sta(0x4);
    ldy(offsetof(G, VRAM_Buffer1_Offset));
    // <conv.chunks.Comment object at 0x1016f8050>
    iny();
    ldx(0xc);
    JSR(RemBridge);
    ldx(offsetof(G, ObjectOffset));
    JSR(MoveVOffset);
    lda(offsetof(G, Sfx_Blast));
    sta(offsetof(G, Square2SoundQueue));
    lda(offsetof(G, Sfx_BrickShatter));
    sta(offsetof(G, NoiseSoundQueue));
    inc(offsetof(G, BridgeCollapseOffset));
    // <conv.chunks.Comment object at 0x1016f82f0>
    // <conv.chunks.Comment object at 0x1016f8380>
    // <conv.chunks.Comment object at 0x1016f8530>
    // <conv.chunks.Comment object at 0x1016f8650>
    // <conv.chunks.Comment object at 0x1016f8770>
    // <conv.chunks.Comment object at 0x1016f8890>
    // <conv.chunks.Comment object at 0x1016f89b0>
    // <conv.chunks.Comment object at 0x1016f8ad0>
    // <conv.chunks.Comment object at 0x1016f8bf0>
    lda(offsetof(G, BridgeCollapseOffset));
    cmp(0xf);
    BNE(NoBFall);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x1016f8e00>
    // <conv.chunks.Comment object at 0x1016f8e90>
    // <conv.chunks.Comment object at 0x1016f9070>
    lda(0b1000000);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1016f9280>
    lda(offsetof(G, Sfx_BowserFall));
    sta(offsetof(G, Square2SoundQueue));
    JMP(NoBFall);
}

int NoBFall() {
    // <conv.chunks.Comment object at 0x1016f94c0>
    // <conv.chunks.Comment object at 0x1016f95e0>
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x1016f9820>
    // <conv.chunks.Comment object at 0x1016f9b80>
    BEQ(BowserControl);
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0xe0);
    BCC(MoveD_Bowser);
    JMP(KillAllEnemies);
}

int KillAllEnemies() {
    ldx(0x4);
    JMP(KillLoop);
}

int KillLoop() {
    // <conv.chunks.Comment object at 0x1016fa150>
    // <conv.chunks.Comment object at 0x1016fa1e0>
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta(offsetof(G, EnemyFrenzyBuffer));
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1016fa3f0>
    // <conv.chunks.Comment object at 0x1016fa480>
    // <conv.chunks.Comment object at 0x1016fa5a0>
    // <conv.chunks.Comment object at 0x1016fa6c0>
    rts();
    JMP(BowserControl);
}

int BowserControl() {
    lda(0x0);
    sta(offsetof(G, EnemyFrenzyBuffer));
    lda(offsetof(G, TimerControl));
    BEQ(ChkMouth);
    JMP(SkipToFB);
    JMP(ChkMouth);
}

int ChkMouth() {
    // <conv.chunks.Comment object at 0x1016fa900>
    // <conv.chunks.Comment object at 0x1016faab0>
    // <conv.chunks.Comment object at 0x1016fabd0>
    // <conv.chunks.Comment object at 0x1016facf0>
    // <conv.chunks.Comment object at 0x1016fae10>
    lda(offsetof(G, BowserBodyControls));
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // <conv.chunks.Comment object at 0x1016faf60>
    // <conv.chunks.Comment object at 0x1016fb0b0>
    // <conv.chunks.Comment object at 0x1016fb1d0>
    dec(offsetof(G, BowserFeetCounter));
    BNE(ResetMDr);
    lda(0x20);
    // <conv.chunks.Comment object at 0x1016fb350>
    // <conv.chunks.Comment object at 0x1016fb470>
    sta(offsetof(G, BowserFeetCounter));
    lda(offsetof(G, BowserBodyControls));
    eor(0b1);
    // <conv.chunks.Comment object at 0x1016fb680>
    // <conv.chunks.Comment object at 0x1016fb7a0>
    sta(offsetof(G, BowserBodyControls));
    JMP(ResetMDr);
}

int ResetMDr() {
    // <conv.chunks.Comment object at 0x1016fb9b0>
    lda(offsetof(G, FrameCounter));
    anda(0b1111);
    BNE(B_FaceP);
    lda(0x2);
    sta(offsetof(G, Enemy_MovingDir), x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // <conv.chunks.Comment object at 0x1016fbb00>
    // <conv.chunks.Comment object at 0x1016fbc20>
    // <conv.chunks.Comment object at 0x1016fbd70>
    // <conv.chunks.Comment object at 0x1016fbe00>
    // <conv.chunks.Comment object at 0x1016fbfe0>
    lda(offsetof(G, EnemyFrameTimer), x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // <conv.chunks.Comment object at 0x1017081d0>
    // <conv.chunks.Comment object at 0x1017082f0>
    // <conv.chunks.Comment object at 0x101708410>
    lda(0x1);
    sta(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x101708590>
    lda(0x2);
    sta(offsetof(G, BowserMovementSpeed));
    // <conv.chunks.Comment object at 0x1017087d0>
    lda(0x20);
    sta(offsetof(G, EnemyFrameTimer), x);
    sta(offsetof(G, BowserFireBreathTimer));
    // <conv.chunks.Comment object at 0x1017089e0>
    // <conv.chunks.Comment object at 0x101708bc0>
    lda(offsetof(G, Enemy_X_Position), x);
    cmp(0xc8);
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // <conv.chunks.Comment object at 0x101708e00>
    // <conv.chunks.Comment object at 0x101708e90>
    // <conv.chunks.Comment object at 0x101709040>
    lda(offsetof(G, FrameCounter));
    anda(0b11);
    BNE(HammerChk);
    // <conv.chunks.Comment object at 0x101709280>
    lda(offsetof(G, Enemy_X_Position), x);
    cmp(offsetof(G, BowserOrigXPos));
    BNE(GetDToO);
    // <conv.chunks.Comment object at 0x1017094c0>
    // <conv.chunks.Comment object at 0x1017095e0>
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x101709850>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(offsetof(G, MaxRangeFromOrigin));
    JMP(GetDToO);
}

int GetDToO() {
    lda(offsetof(G, Enemy_X_Position), x);
    clc();
    adc(offsetof(G, BowserMovementSpeed));
    // <conv.chunks.Comment object at 0x101709e20>
    // <conv.chunks.Comment object at 0x101709eb0>
    sta(offsetof(G, Enemy_X_Position), x);
    ldy(offsetof(G, Enemy_MovingDir), x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x10170a210>
    BEQ(HammerChk);
    ldy(0xff);
    sec();
    sbc(offsetof(G, BowserOrigXPos));
    BPL(CompDToO);
    // <conv.chunks.Comment object at 0x10170a420>
    // <conv.chunks.Comment object at 0x10170a570>
    // <conv.chunks.Comment object at 0x10170a600>
    // <conv.chunks.Comment object at 0x10170a720>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10170a960>
    adc(0x1);
    ldy(0x1);
    JMP(CompDToO);
}

int CompDToO() {
    // <conv.chunks.Comment object at 0x10170aa50>
    // <conv.chunks.Comment object at 0x10170ab70>
    cmp(offsetof(G, MaxRangeFromOrigin));
    BCC(HammerChk);
    sty(offsetof(G, BowserMovementSpeed));
    JMP(HammerChk);
}

int HammerChk() {
    // <conv.chunks.Comment object at 0x10170ad50>
    // <conv.chunks.Comment object at 0x10170ae70>
    // <conv.chunks.Comment object at 0x10170af90>
    lda(offsetof(G, EnemyFrameTimer), x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x10170b110>
    // <conv.chunks.Comment object at 0x10170b230>
    // <conv.chunks.Comment object at 0x10170b350>
    cmp(offsetof(G, World6));
    BCC(SetHmrTmr);
    // <conv.chunks.Comment object at 0x10170b4a0>
    lda(offsetof(G, FrameCounter));
    anda(0b11);
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // <conv.chunks.Comment object at 0x10170b7a0>
    // <conv.chunks.Comment object at 0x10170b8c0>
    // <conv.chunks.Comment object at 0x10170b9e0>
    // <conv.chunks.Comment object at 0x10170bb00>
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0x80);
    BCC(ChkFireB);
    // <conv.chunks.Comment object at 0x10170bc80>
    // <conv.chunks.Comment object at 0x10170bd10>
    lda(offsetof(G, PseudoRandomBitReg), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x10170bfe0>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(offsetof(G, EnemyFrameTimer), x);
    JMP(SkipToFB);
}

int SkipToFB() {
    // <conv.chunks.Comment object at 0x1017141d0>
    // <conv.chunks.Comment object at 0x101714320>
    // <conv.chunks.Comment object at 0x101714470>
    JMP(ChkFireB);
    JMP(MakeBJump);
}

int MakeBJump() {
    // <conv.chunks.Comment object at 0x1017145c0>
    cmp(0x1);
    BNE(ChkFireB);
    dec(offsetof(G, Enemy_Y_Position), x);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x101714680>
    // <conv.chunks.Comment object at 0x101714830>
    // <conv.chunks.Comment object at 0x101714980>
    lda(0xfe);
    sta(offsetof(G, Enemy_Y_Speed), x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // <conv.chunks.Comment object at 0x101714b00>
    // <conv.chunks.Comment object at 0x101714ce0>
    lda(offsetof(G, WorldNumber));
    cmp(offsetof(G, World8));
    BEQ(SpawnFBr);
    cmp(offsetof(G, World6));
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // <conv.chunks.Comment object at 0x101714e30>
    // <conv.chunks.Comment object at 0x101714e90>
    // <conv.chunks.Comment object at 0x1017150a0>
    // <conv.chunks.Comment object at 0x101715100>
    // <conv.chunks.Comment object at 0x101715310>
    lda(offsetof(G, BowserFireBreathTimer));
    BNE(BowserGfxHandler);
    // <conv.chunks.Comment object at 0x101715460>
    lda(0x20);
    sta(offsetof(G, BowserFireBreathTimer));
    // <conv.chunks.Comment object at 0x1017155e0>
    lda(offsetof(G, BowserBodyControls));
    eor(0b10000000);
    sta(offsetof(G, BowserBodyControls));
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x101715880>
    // <conv.chunks.Comment object at 0x1017159a0>
    // <conv.chunks.Comment object at 0x101715ac0>
    // <conv.chunks.Comment object at 0x101715be0>
    ldy(offsetof(G, SecondaryHardMode));
    BEQ(SetFBTmr);
    // <conv.chunks.Comment object at 0x101715df0>
    sec();
    sbc(0x10);
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // <conv.chunks.Comment object at 0x101715fa0>
    // <conv.chunks.Comment object at 0x101716030>
    sta(offsetof(G, BowserFireBreathTimer));
    lda(offsetof(G, BowserFlame));
    sta(offsetof(G, EnemyFrenzyBuffer));
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(0x10);
    lda(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x1017164b0>
    // <conv.chunks.Comment object at 0x1017165d0>
    // <conv.chunks.Comment object at 0x101716660>
    lsr();
    BCC(CopyFToR);
    ldy(0xf0);
    JMP(CopyFToR);
}

int CopyFToR() {
    // <conv.chunks.Comment object at 0x1017168d0>
    // <conv.chunks.Comment object at 0x1017169f0>
    // <conv.chunks.Comment object at 0x101716a80>
    tya();
    clc();
    adc(offsetof(G, Enemy_X_Position), x);
    ldy(offsetof(G, DuplicateObj_Offset));
    sta(offsetof(G, Enemy_X_Position), y);
    // <conv.chunks.Comment object at 0x101716c90>
    // <conv.chunks.Comment object at 0x101716de0>
    // <conv.chunks.Comment object at 0x101716f00>
    lda(offsetof(G, Enemy_Y_Position), x);
    clc();
    adc(0x8);
    sta(offsetof(G, Enemy_Y_Position), y);
    // <conv.chunks.Comment object at 0x1017171a0>
    // <conv.chunks.Comment object at 0x101717230>
    // <conv.chunks.Comment object at 0x1017172c0>
    lda(offsetof(G, Enemy_State), x);
    sta(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1017175c0>
    lda(offsetof(G, Enemy_MovingDir), x);
    sta(offsetof(G, Enemy_MovingDir), y);
    lda(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x101717830>
    // <conv.chunks.Comment object at 0x101717980>
    pha();
    ldx(offsetof(G, DuplicateObj_Offset));
    // <conv.chunks.Comment object at 0x101717b30>
    stx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Bowser));
    sta(offsetof(G, Enemy_ID), x);
    JSR(ProcessBowserHalf);
    // <conv.chunks.Comment object at 0x101717d40>
    // <conv.chunks.Comment object at 0x101717da0>
    // <conv.chunks.Comment object at 0x101717fe0>
    pla();
    sta(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1017201d0>
    tax();
    lda(0x0);
    // <conv.chunks.Comment object at 0x101720380>
    sta(offsetof(G, BowserGfxFlag));
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // <conv.chunks.Comment object at 0x1017205c0>
    rts();
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc(offsetof(G, BowserGfxFlag));
    JSR(RunRetainerObj);
    // <conv.chunks.Comment object at 0x101720710>
    // <conv.chunks.Comment object at 0x101720830>
    lda(offsetof(G, Enemy_State), x);
    BNE(ExBGfxH);
    // <conv.chunks.Comment object at 0x101720a70>
    lda(0xa);
    sta(offsetof(G, Enemy_BoundBoxCtrl), x);
    JSR(GetEnemyBoundBox);
    JMP(PlayerEnemyCollision);
    JMP(SetFlameTimer);
}

int SetFlameTimer() {
    ldy(offsetof(G, BowserFlameTimerCtrl));
    inc(offsetof(G, BowserFlameTimerCtrl));
    lda(offsetof(G, BowserFlameTimerCtrl));
    anda(0b111);
    // <conv.chunks.Comment object at 0x101721160>
    // <conv.chunks.Comment object at 0x101721280>
    // <conv.chunks.Comment object at 0x1017217f0>
    // <conv.chunks.Comment object at 0x101721910>
    sta(offsetof(G, BowserFlameTimerCtrl));
    lda(offsetof(G, FlameTimerData), y);
    JMP(ExFl);
}

int ExFl() {
    rts();
    JMP(ProcBowserFlame);
}

int ProcBowserFlame() {
    lda(offsetof(G, TimerControl));
    BNE(SetGfxF);
    lda(0x40);
    // <conv.chunks.Comment object at 0x101721d90>
    // <conv.chunks.Comment object at 0x101721eb0>
    // <conv.chunks.Comment object at 0x101722000>
    ldy(offsetof(G, SecondaryHardMode));
    BEQ(SFlmX);
    lda(0x60);
    JMP(SFlmX);
}

int SFlmX() {
    // <conv.chunks.Comment object at 0x101722210>
    // <conv.chunks.Comment object at 0x101722360>
    // <conv.chunks.Comment object at 0x1017223f0>
    sta(0x0);
    lda(offsetof(G, Enemy_X_MoveForce), x);
    sec();
    // <conv.chunks.Comment object at 0x101722750>
    sbc(0x0);
    sta(offsetof(G, Enemy_X_MoveForce), x);
    // <conv.chunks.Comment object at 0x1017227e0>
    lda(offsetof(G, Enemy_X_Position), x);
    sbc(0x1);
    sta(offsetof(G, Enemy_X_Position), x);
    // <conv.chunks.Comment object at 0x101722b40>
    // <conv.chunks.Comment object at 0x101722bd0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x101722ed0>
    sta(offsetof(G, Enemy_PageLoc), x);
    ldy(offsetof(G, BowserFlamePRandomOfs), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(offsetof(G, FlameYPosData), y);
    BEQ(SetGfxF);
    // <conv.chunks.Comment object at 0x101723110>
    // <conv.chunks.Comment object at 0x101723260>
    // <conv.chunks.Comment object at 0x1017233b0>
    // <conv.chunks.Comment object at 0x101723500>
    clc();
    adc(offsetof(G, Enemy_Y_MoveForce), x);
    sta(offsetof(G, Enemy_Y_Position), x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // <conv.chunks.Comment object at 0x1017236e0>
    // <conv.chunks.Comment object at 0x101723830>
    // <conv.chunks.Comment object at 0x101723980>
    JSR(RelativeEnemyPosition);
    lda(offsetof(G, Enemy_State), x);
    BNE(ExFl);
    lda(0x51);
    sta(0x0);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x101723b00>
    // <conv.chunks.Comment object at 0x101723c50>
    // <conv.chunks.Comment object at 0x101723da0>
    // <conv.chunks.Comment object at 0x101723ef0>
    // <conv.chunks.Comment object at 0x101723f80>
    lda(offsetof(G, FrameCounter));
    anda(0b10);
    BEQ(FlmeAt);
    ldy(0x82);
    JMP(FlmeAt);
}

int FlmeAt() {
    // <conv.chunks.Comment object at 0x10172c230>
    // <conv.chunks.Comment object at 0x10172c350>
    // <conv.chunks.Comment object at 0x10172c4a0>
    // <conv.chunks.Comment object at 0x10172c530>
    sty(0x1);
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    // <conv.chunks.Comment object at 0x10172c6e0>
    ldx(0x0);
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda(offsetof(G, Enemy_Rel_YPos));
    sta(offsetof(G, Sprite_Y_Position), y);
    // <conv.chunks.Comment object at 0x10172c9b0>
    // <conv.chunks.Comment object at 0x10172cad0>
    lda(0x0);
    sta(offsetof(G, Sprite_Tilenumber), y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x10172cc20>
    // <conv.chunks.Comment object at 0x10172ce90>
    lda(0x1);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x10172cf20>
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x10172d2b0>
    clc();
    adc(0x8);
    sta(offsetof(G, Enemy_Rel_XPos));
    // <conv.chunks.Comment object at 0x10172d4f0>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x3);
    // <conv.chunks.Comment object at 0x10172d880>
    // <conv.chunks.Comment object at 0x10172d8e0>
    // <conv.chunks.Comment object at 0x10172d9a0>
    BCC(DrawFlameLoop);
    ldx(offsetof(G, ObjectOffset));
    JSR(GetEnemyOffscreenBits);
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, Enemy_OffscreenBits));
    lsr();
    // <conv.chunks.Comment object at 0x10172dbe0>
    // <conv.chunks.Comment object at 0x10172dd00>
    // <conv.chunks.Comment object at 0x10172de20>
    // <conv.chunks.Comment object at 0x10172df70>
    // <conv.chunks.Comment object at 0x10172e0c0>
    pha();
    BCC(M3FOfs);
    lda(0xf8);
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    JMP(M3FOfs);
}

int M3FOfs() {
    // <conv.chunks.Comment object at 0x10172e1e0>
    // <conv.chunks.Comment object at 0x10172e330>
    // <conv.chunks.Comment object at 0x10172e3c0>
    // <conv.chunks.Comment object at 0x10172e660>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10172e7b0>
    pha();
    BCC(M2FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10172e8d0>
    // <conv.chunks.Comment object at 0x10172ea20>
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // <conv.chunks.Comment object at 0x10172ed20>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10172ee70>
    pha();
    BCC(M1FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10172ef90>
    // <conv.chunks.Comment object at 0x10172f0e0>
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // <conv.chunks.Comment object at 0x10172f3e0>
    pla();
    lsr();
    BCC(ExFlmeD);
    // <conv.chunks.Comment object at 0x10172f530>
    // <conv.chunks.Comment object at 0x10172f5c0>
    lda(0xf8);
    sta(offsetof(G, Sprite_Y_Position), y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // <conv.chunks.Comment object at 0x10172f770>
    // <conv.chunks.Comment object at 0x10172f980>
    rts();
    JMP(RunFireworks);
}

int RunFireworks() {
    dec(offsetof(G, ExplosionTimerCounter), x);
    BNE(SetupExpl);
    // <conv.chunks.Comment object at 0x10172fb00>
    // <conv.chunks.Comment object at 0x10172fc50>
    lda(0x8);
    sta(offsetof(G, ExplosionTimerCounter), x);
    inc(offsetof(G, ExplosionGfxCounter), x);
    // <conv.chunks.Comment object at 0x10172fdd0>
    // <conv.chunks.Comment object at 0x10172ffb0>
    lda(offsetof(G, ExplosionGfxCounter), x);
    cmp(0x3);
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // <conv.chunks.Comment object at 0x101734260>
    // <conv.chunks.Comment object at 0x1017342f0>
    // <conv.chunks.Comment object at 0x1017344a0>
    JSR(RelativeEnemyPosition);
    lda(offsetof(G, Enemy_Rel_YPos));
    sta(offsetof(G, Fireball_Rel_YPos));
    lda(offsetof(G, Enemy_Rel_XPos));
    // <conv.chunks.Comment object at 0x1017345f0>
    // <conv.chunks.Comment object at 0x101734710>
    // <conv.chunks.Comment object at 0x101734830>
    sta(offsetof(G, Fireball_Rel_XPos));
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, ExplosionGfxCounter), x);
    JSR(DrawExplosion_Fireworks);
    // <conv.chunks.Comment object at 0x101734a40>
    // <conv.chunks.Comment object at 0x101734b90>
    // <conv.chunks.Comment object at 0x101734ce0>
    rts();
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101734ec0>
    sta(offsetof(G, Enemy_Flag), x);
    lda(offsetof(G, Sfx_Blast));
    // <conv.chunks.Comment object at 0x101735100>
    sta(offsetof(G, Square2SoundQueue));
    lda(0x5);
    // <conv.chunks.Comment object at 0x101735310>
    sta(((offsetof(G, DigitModifier)) + (4)));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101735850>
    sta(offsetof(G, EnemyFrenzyBuffer));
    lda(offsetof(G, StarFlagTaskControl));
    cmp(0x5);
    // <conv.chunks.Comment object at 0x1017360c0>
    // <conv.chunks.Comment object at 0x1017361e0>
    BCS(StarFlagExit);
    JSR(JumpEngine);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(0x5);
    lda(((offsetof(G, GameTimerDisplay)) + (2)));
    // <conv.chunks.Comment object at 0x101736540>
    // <conv.chunks.Comment object at 0x1017368a0>
    cmp(0x1);
    BEQ(SetFWC);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x101736b70>
    // <conv.chunks.Comment object at 0x101736d50>
    cmp(0x3);
    BEQ(SetFWC);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101736ed0>
    // <conv.chunks.Comment object at 0x1017370b0>
    cmp(0x6);
    BEQ(SetFWC);
    lda(0xff);
    JMP(SetFWC);
}

int SetFWC() {
    // <conv.chunks.Comment object at 0x101737230>
    // <conv.chunks.Comment object at 0x101737410>
    // <conv.chunks.Comment object at 0x1017374a0>
    sta(offsetof(G, FireworksCounter));
    sty(offsetof(G, Enemy_State), x);
    JMP(IncrementSFTask1);
}

int IncrementSFTask1() {
    inc(offsetof(G, StarFlagTaskControl));
    JMP(StarFlagExit);
}

int StarFlagExit() {
    rts();
    JMP(AwardGameTimerPoints);
}

int AwardGameTimerPoints() {
    lda(offsetof(G, GameTimerDisplay));
    // <conv.chunks.Comment object at 0x101737aa0>
    ora(((offsetof(G, GameTimerDisplay)) + (1)));
    ora(((offsetof(G, GameTimerDisplay)) + (2)));
    BEQ(IncrementSFTask1);
    // <conv.chunks.Comment object at 0x101737f20>
    lda(offsetof(G, FrameCounter));
    anda(0b100);
    BEQ(NoTTick);
    // <conv.chunks.Comment object at 0x10173c170>
    // <conv.chunks.Comment object at 0x10173c290>
    lda(offsetof(G, Sfx_TimerTick));
    sta(offsetof(G, Square2SoundQueue));
    JMP(NoTTick);
}

int NoTTick() {
    // <conv.chunks.Comment object at 0x10173c4d0>
    // <conv.chunks.Comment object at 0x10173c5f0>
    ldy(0x23);
    lda(0xff);
    sta(((offsetof(G, DigitModifier)) + (5)));
    JSR(DigitsMathRoutine);
    lda(0x5);
    sta(((offsetof(G, DigitModifier)) + (5)));
    JMP(EndAreaPoints);
}

int EndAreaPoints() {
    ldy(0xb);
    lda(offsetof(G, CurrentPlayer));
    BEQ(ELPGive);
    ldy(0x11);
    JMP(ELPGive);
}

int ELPGive() {
    // <conv.chunks.Comment object at 0x10173cec0>
    // <conv.chunks.Comment object at 0x10173cf50>
    // <conv.chunks.Comment object at 0x10173d100>
    // <conv.chunks.Comment object at 0x10173d250>
    // <conv.chunks.Comment object at 0x10173d2e0>
    JSR(DigitsMathRoutine);
    lda(offsetof(G, CurrentPlayer));
    asl();
    asl();
    // <conv.chunks.Comment object at 0x10173d4f0>
    // <conv.chunks.Comment object at 0x10173d640>
    // <conv.chunks.Comment object at 0x10173d700>
    asl();
    asl();
    ora(0b100);
    JMP(UpdateNumber);
    JMP(RaiseFlagSetoffFWorks);
}

int RaiseFlagSetoffFWorks() {
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0x72);
    BCC(SetoffF);
    dec(offsetof(G, Enemy_Y_Position), x);
    JMP(DrawStarFlag);
    JMP(SetoffF);
}

int SetoffF() {
    // <conv.chunks.Comment object at 0x10173db20>
    // <conv.chunks.Comment object at 0x10173dc70>
    // <conv.chunks.Comment object at 0x10173dd00>
    // <conv.chunks.Comment object at 0x10173dee0>
    // <conv.chunks.Comment object at 0x10173e030>
    // <conv.chunks.Comment object at 0x10173e150>
    lda(offsetof(G, FireworksCounter));
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // <conv.chunks.Comment object at 0x10173e2d0>
    // <conv.chunks.Comment object at 0x10173e3f0>
    lda(offsetof(G, Fireworks));
    sta(offsetof(G, EnemyFrenzyBuffer));
    JMP(DrawStarFlag);
}

int DrawStarFlag() {
    JSR(RelativeEnemyPosition);
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    ldx(0x3);
    JMP(DSFLoop);
}

int DSFLoop() {
    // <conv.chunks.Comment object at 0x10173e750>
    // <conv.chunks.Comment object at 0x10173e870>
    // <conv.chunks.Comment object at 0x10173e9c0>
    // <conv.chunks.Comment object at 0x10173ea50>
    lda(offsetof(G, Enemy_Rel_YPos));
    clc();
    adc(offsetof(G, StarFlagYPosAdder), x);
    sta(offsetof(G, Sprite_Y_Position), y);
    lda(offsetof(G, StarFlagTileData), x);
    sta(offsetof(G, Sprite_Tilenumber), y);
    lda(0x22);
    sta(offsetof(G, Sprite_Attributes), y);
    lda(offsetof(G, Enemy_Rel_XPos));
    // <conv.chunks.Comment object at 0x10173ecf0>
    // <conv.chunks.Comment object at 0x10173ee40>
    // <conv.chunks.Comment object at 0x10173ef90>
    // <conv.chunks.Comment object at 0x10173f0e0>
    // <conv.chunks.Comment object at 0x10173f230>
    // <conv.chunks.Comment object at 0x10173f2c0>
    // <conv.chunks.Comment object at 0x10173f4a0>
    clc();
    adc(offsetof(G, StarFlagXPosAdder), x);
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x10173f650>
    // <conv.chunks.Comment object at 0x10173f7a0>
    iny();
    iny();
    iny();
    // <conv.chunks.Comment object at 0x10173f9b0>
    // <conv.chunks.Comment object at 0x10173fa70>
    iny();
    dex();
    BPL(DSFLoop);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x10173fbc0>
    // <conv.chunks.Comment object at 0x10173fc50>
    // <conv.chunks.Comment object at 0x10173fda0>
    rts();
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // <conv.chunks.Comment object at 0x10173ff80>
    lda(0x6);
    sta(offsetof(G, EnemyIntervalTimer), x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc(offsetof(G, StarFlagTaskControl));
    // <conv.chunks.Comment object at 0x101744350>
    rts();
    JMP(DelayToAreaEnd);
}

int DelayToAreaEnd() {
    JSR(DrawStarFlag);
    lda(offsetof(G, EnemyIntervalTimer), x);
    BNE(StarFlagExit2);
    lda(offsetof(G, EventMusicBuffer));
    BEQ(IncrementSFTask2);
    JMP(StarFlagExit2);
}

int StarFlagExit2() {
    rts();
    JMP(MovePiranhaPlant);
}

int MovePiranhaPlant() {
    lda(offsetof(G, Enemy_State), x);
    BNE(PutinPipe);
    lda(offsetof(G, EnemyFrameTimer), x);
    BNE(PutinPipe);
    lda(offsetof(G, PiranhaPlant_MoveFlag), x);
    BNE(SetupToMovePPlant);
    lda(offsetof(G, PiranhaPlant_Y_Speed), x);
    BMI(ReversePlantSpeed);
    JSR(PlayerEnemyDiff);
    BPL(ChkPlayerNearPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101744b60>
    // <conv.chunks.Comment object at 0x101744c20>
    // <conv.chunks.Comment object at 0x101744c80>
    // <conv.chunks.Comment object at 0x101744dd0>
    // <conv.chunks.Comment object at 0x101744ef0>
    // <conv.chunks.Comment object at 0x101745040>
    // <conv.chunks.Comment object at 0x101745160>
    // <conv.chunks.Comment object at 0x1017452b0>
    // <conv.chunks.Comment object at 0x1017453d0>
    // <conv.chunks.Comment object at 0x101745520>
    // <conv.chunks.Comment object at 0x101745640>
    // <conv.chunks.Comment object at 0x101745760>
    // <conv.chunks.Comment object at 0x1017458b0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101745ac0>
    adc(0x1);
    sta(0x0);
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101745dc0>
    cmp(0x21);
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda(offsetof(G, PiranhaPlant_Y_Speed), x);
    // <conv.chunks.Comment object at 0x1017460f0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101746360>
    adc(0x1);
    sta(offsetof(G, PiranhaPlant_Y_Speed), x);
    inc(offsetof(G, PiranhaPlant_MoveFlag), x);
    JMP(SetupToMovePPlant);
}

int SetupToMovePPlant() {
    lda(offsetof(G, PiranhaPlantDownYPos), x);
    ldy(offsetof(G, PiranhaPlant_Y_Speed), x);
    BPL(RiseFallPiranhaPlant);
    lda(offsetof(G, PiranhaPlantUpYPos), x);
    JMP(RiseFallPiranhaPlant);
}

int RiseFallPiranhaPlant() {
    sta(0x0);
    lda(offsetof(G, FrameCounter));
    // <conv.chunks.Comment object at 0x101746d20>
    // <conv.chunks.Comment object at 0x101746db0>
    lsr();
    BCC(PutinPipe);
    lda(offsetof(G, TimerControl));
    BNE(PutinPipe);
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101746fc0>
    // <conv.chunks.Comment object at 0x1017470e0>
    // <conv.chunks.Comment object at 0x101747200>
    // <conv.chunks.Comment object at 0x101747320>
    clc();
    adc(offsetof(G, PiranhaPlant_Y_Speed), x);
    sta(offsetof(G, Enemy_Y_Position), x);
    cmp(0x0);
    BNE(PutinPipe);
    // <conv.chunks.Comment object at 0x101747500>
    // <conv.chunks.Comment object at 0x101747650>
    // <conv.chunks.Comment object at 0x1017477d0>
    // <conv.chunks.Comment object at 0x101747860>
    lda(0x0);
    sta(offsetof(G, PiranhaPlant_MoveFlag), x);
    // <conv.chunks.Comment object at 0x101747a40>
    lda(0x40);
    sta(offsetof(G, EnemyFrameTimer), x);
    JMP(PutinPipe);
}

int PutinPipe() {
    lda(0b100000);
    sta(offsetof(G, Enemy_SprAttrib), x);
    rts();
    JMP(FirebarSpin);
}

int FirebarSpin() {
    sta(0x7);
    lda(offsetof(G, FirebarSpinDirection), x);
    BNE(SpinCounterClockwise);
    ldy(0x18);
    // <conv.chunks.Comment object at 0x101747e90>
    // <conv.chunks.Comment object at 0x101747fb0>
    // <conv.chunks.Comment object at 0x101754170>
    // <conv.chunks.Comment object at 0x101754230>
    // <conv.chunks.Comment object at 0x1017542c0>
    // <conv.chunks.Comment object at 0x101754350>
    // <conv.chunks.Comment object at 0x101754500>
    // <conv.chunks.Comment object at 0x101754620>
    lda(offsetof(G, FirebarSpinState_Low), x);
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x101754890>
    // <conv.chunks.Comment object at 0x101754950>
    sta(offsetof(G, FirebarSpinState_Low), x);
    lda(offsetof(G, FirebarSpinState_High), x);
    // <conv.chunks.Comment object at 0x101754b60>
    adc(0x0);
    rts();
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x101754e60>
    lda(offsetof(G, FirebarSpinState_Low), x);
    sec();
    sbc(0x7);
    // <conv.chunks.Comment object at 0x1017550d0>
    // <conv.chunks.Comment object at 0x101755190>
    sta(offsetof(G, FirebarSpinState_Low), x);
    lda(offsetof(G, FirebarSpinState_High), x);
    // <conv.chunks.Comment object at 0x1017553a0>
    sbc(0x0);
    rts();
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda(offsetof(G, Enemy_Y_HighPos), x);
    // <conv.chunks.Comment object at 0x1017556a0>
    // <conv.chunks.Comment object at 0x101755700>
    // <conv.chunks.Comment object at 0x101755760>
    cmp(0x3);
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // <conv.chunks.Comment object at 0x101755ac0>
    // <conv.chunks.Comment object at 0x101755be0>
    lda(offsetof(G, Enemy_State), x);
    BPL(CheckBalPlatform);
    // <conv.chunks.Comment object at 0x101755d90>
    rts();
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda(offsetof(G, PlatformCollisionFlag), x);
    sta(0x0);
    lda(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x101755fa0>
    // <conv.chunks.Comment object at 0x101756030>
    // <conv.chunks.Comment object at 0x1017561b0>
    // <conv.chunks.Comment object at 0x101756240>
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(0x2d);
    // <conv.chunks.Comment object at 0x101756630>
    cmp(offsetof(G, Enemy_Y_Position), x);
    BCC(ChkOtherForFall);
    cpy(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x101756870>
    // <conv.chunks.Comment object at 0x1017569c0>
    // <conv.chunks.Comment object at 0x101756a50>
    clc();
    adc(0x2);
    sta(offsetof(G, Enemy_Y_Position), x);
    JMP(StopPlatforms);
    JMP(MakePlatformFall);
}

int MakePlatformFall() {
    JMP(InitPlatformFall);
    JMP(ChkOtherForFall);
}

int ChkOtherForFall() {
    cmp(offsetof(G, Enemy_Y_Position), y);
    BCC(ChkToMoveBalPlat);
    cpx(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x101757170>
    // <conv.chunks.Comment object at 0x1017572c0>
    // <conv.chunks.Comment object at 0x101757410>
    // <conv.chunks.Comment object at 0x1017574a0>
    clc();
    adc(0x2);
    sta(offsetof(G, Enemy_Y_Position), y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101757a70>
    pha();
    lda(offsetof(G, PlatformCollisionFlag), x);
    BPL(ColFlg);
    // <conv.chunks.Comment object at 0x101757c50>
    // <conv.chunks.Comment object at 0x101757da0>
    lda(offsetof(G, Enemy_Y_MoveForce), x);
    clc();
    // <conv.chunks.Comment object at 0x10175c080>
    adc(0x5);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10175c230>
    lda(offsetof(G, Enemy_Y_Speed), x);
    adc(0x0);
    BMI(PlatDn);
    BNE(PlatUp);
    // <conv.chunks.Comment object at 0x10175c440>
    // <conv.chunks.Comment object at 0x10175c4d0>
    // <conv.chunks.Comment object at 0x10175c6b0>
    lda(0x0);
    cmp(0xb);
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // <conv.chunks.Comment object at 0x10175c800>
    // <conv.chunks.Comment object at 0x10175c980>
    // <conv.chunks.Comment object at 0x10175cb60>
    // <conv.chunks.Comment object at 0x10175ccb0>
    cmp(offsetof(G, ObjectOffset));
    BEQ(PlatDn);
    JMP(PlatUp);
}

int PlatUp() {
    // <conv.chunks.Comment object at 0x10175ce30>
    // <conv.chunks.Comment object at 0x10175cf80>
    JSR(MovePlatformUp);
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}

int PlatSt() {
    // <conv.chunks.Comment object at 0x10175d100>
    // <conv.chunks.Comment object at 0x10175d220>
    JSR(StopPlatforms);
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}

int PlatDn() {
    // <conv.chunks.Comment object at 0x10175d3a0>
    // <conv.chunks.Comment object at 0x10175d4c0>
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}

int DoOtherPlatform() {
    ldy(offsetof(G, Enemy_State), x);
    pla();
    // <conv.chunks.Comment object at 0x10175d670>
    // <conv.chunks.Comment object at 0x10175d7f0>
    sec();
    sbc(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x10175d910>
    clc();
    adc(offsetof(G, Enemy_Y_Position), y);
    sta(offsetof(G, Enemy_Y_Position), y);
    lda(offsetof(G, PlatformCollisionFlag), x);
    // <conv.chunks.Comment object at 0x10175daf0>
    // <conv.chunks.Comment object at 0x10175dc40>
    // <conv.chunks.Comment object at 0x10175dd90>
    BMI(DrawEraseRope);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(DrawEraseRope);
}

int DrawEraseRope() {
    ldy(offsetof(G, ObjectOffset));
    lda(offsetof(G, Enemy_Y_Speed), y);
    ora(offsetof(G, Enemy_Y_MoveForce), y);
    BEQ(ExitRp);
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    cpx(0x20);
    BCS(ExitRp);
    // <conv.chunks.Comment object at 0x10175e1e0>
    // <conv.chunks.Comment object at 0x10175e300>
    // <conv.chunks.Comment object at 0x10175e450>
    // <conv.chunks.Comment object at 0x10175e5a0>
    // <conv.chunks.Comment object at 0x10175e6f0>
    // <conv.chunks.Comment object at 0x10175e810>
    // <conv.chunks.Comment object at 0x10175e8a0>
    lda(offsetof(G, Enemy_Y_Speed), y);
    pha();
    // <conv.chunks.Comment object at 0x10175ebd0>
    pha();
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(offsetof(G, VRAM_Buffer1), x);
    // <conv.chunks.Comment object at 0x10175ecf0>
    // <conv.chunks.Comment object at 0x10175ee40>
    // <conv.chunks.Comment object at 0x10175eed0>
    lda(0x0);
    sta(((offsetof(G, VRAM_Buffer1)) + (1)), x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x10175f350>
    sta(((offsetof(G, VRAM_Buffer1)) + (2)), x);
    lda(offsetof(G, Enemy_Y_Speed), y);
    BMI(EraseR1);
    // <conv.chunks.Comment object at 0x10175f650>
    // <conv.chunks.Comment object at 0x10175f7a0>
    lda(0xa2);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    lda(0xa3);
    // <conv.chunks.Comment object at 0x10175f950>
    // <conv.chunks.Comment object at 0x10175fbf0>
    sta(((offsetof(G, VRAM_Buffer1)) + (4)), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // <conv.chunks.Comment object at 0x10175fef0>
    // <conv.chunks.Comment object at 0x101768050>
    lda(0x24);
    sta(((offsetof(G, VRAM_Buffer1)) + (3)), x);
    // <conv.chunks.Comment object at 0x101768140>
    sta(((offsetof(G, VRAM_Buffer1)) + (4)), x);
    JMP(OtherRope);
}

int OtherRope() {
    lda(offsetof(G, Enemy_State), y);
    tay();
    pla();
    eor(0xff);
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(((offsetof(G, VRAM_Buffer1)) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1017685f0>
    // <conv.chunks.Comment object at 0x101768770>
    // <conv.chunks.Comment object at 0x101768830>
    // <conv.chunks.Comment object at 0x1017688c0>
    // <conv.chunks.Comment object at 0x101768950>
    // <conv.chunks.Comment object at 0x101768b30>
    // <conv.chunks.Comment object at 0x101768bc0>
    // <conv.chunks.Comment object at 0x101768e60>
    sta(((offsetof(G, VRAM_Buffer1)) + (6)), x);
    lda(0x2);
    sta(((offsetof(G, VRAM_Buffer1)) + (7)), x);
    pla();
    BPL(EraseR2);
    // <conv.chunks.Comment object at 0x101769190>
    // <conv.chunks.Comment object at 0x101769460>
    // <conv.chunks.Comment object at 0x1017694f0>
    lda(0xa2);
    sta(((offsetof(G, VRAM_Buffer1)) + (8)), x);
    lda(0xa3);
    sta(((offsetof(G, VRAM_Buffer1)) + (9)), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // <conv.chunks.Comment object at 0x1017696a0>
    // <conv.chunks.Comment object at 0x101769940>
    // <conv.chunks.Comment object at 0x1017699d0>
    // <conv.chunks.Comment object at 0x101769c70>
    // <conv.chunks.Comment object at 0x101769dc0>
    lda(0x24);
    sta(((offsetof(G, VRAM_Buffer1)) + (8)), x);
    // <conv.chunks.Comment object at 0x101769eb0>
    sta(((offsetof(G, VRAM_Buffer1)) + (9)), x);
    JMP(EndRp);
}

int EndRp() {
    // <conv.chunks.Comment object at 0x10176a330>
    lda(0x0);
    sta(((offsetof(G, VRAM_Buffer1)) + (10)), x);
    lda(offsetof(G, VRAM_Buffer1_Offset));
    clc();
    // <conv.chunks.Comment object at 0x10176a690>
    // <conv.chunks.Comment object at 0x10176a7e0>
    adc(10);
    sta(offsetof(G, VRAM_Buffer1_Offset));
    JMP(ExitRp);
}

int ExitRp() {
    // <conv.chunks.Comment object at 0x10176aa50>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda(offsetof(G, Enemy_X_Position), y);
    // <conv.chunks.Comment object at 0x10176acc0>
    // <conv.chunks.Comment object at 0x10176ad50>
    clc();
    adc(0x8);
    ldx(offsetof(G, SecondaryHardMode));
    BNE(GetLRp);
    // <conv.chunks.Comment object at 0x10176af30>
    // <conv.chunks.Comment object at 0x10176afc0>
    // <conv.chunks.Comment object at 0x10176b170>
    clc();
    adc(0x10);
    JMP(GetLRp);
}

int GetLRp() {
    // <conv.chunks.Comment object at 0x10176b350>
    // <conv.chunks.Comment object at 0x10176b3e0>
    pha();
    lda(offsetof(G, Enemy_PageLoc), y);
    adc(0x0);
    sta(0x2);
    pla();
    anda(0b11110000);
    lsr();
    // <conv.chunks.Comment object at 0x10176b6b0>
    // <conv.chunks.Comment object at 0x10176b800>
    // <conv.chunks.Comment object at 0x10176b740>
    // <conv.chunks.Comment object at 0x10176b9b0>
    // <conv.chunks.Comment object at 0x10176bb00>
    lsr();
    lsr();
    sta(0x0);
    ldx(offsetof(G, Enemy_Y_Position), y);
    pla();
    BPL(GetHRp);
    // <conv.chunks.Comment object at 0x10176bce0>
    // <conv.chunks.Comment object at 0x10176bd70>
    // <conv.chunks.Comment object at 0x10176bf50>
    // <conv.chunks.Comment object at 0x10176bfe0>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // <conv.chunks.Comment object at 0x101770290>
    // <conv.chunks.Comment object at 0x1017703e0>
    // <conv.chunks.Comment object at 0x101770470>
    txa();
    ldx(offsetof(G, VRAM_Buffer1_Offset));
    // <conv.chunks.Comment object at 0x101770590>
    asl();
    rol();
    pha();
    rol();
    anda(0b11);
    ora(0b100000);
    sta(0x1);
    lda(0x2);
    anda(0x1);
    // <conv.chunks.Comment object at 0x101770770>
    // <conv.chunks.Comment object at 0x101770830>
    // <conv.chunks.Comment object at 0x1017708f0>
    // <conv.chunks.Comment object at 0x101770980>
    // <conv.chunks.Comment object at 0x101770aa0>
    // <conv.chunks.Comment object at 0x101770bf0>
    // <conv.chunks.Comment object at 0x101770bc0>
    // <conv.chunks.Comment object at 0x101770da0>
    asl();
    asl();
    ora(0x1);
    sta(0x1);
    pla();
    anda(0b11100000);
    // <conv.chunks.Comment object at 0x101770fe0>
    // <conv.chunks.Comment object at 0x1017710a0>
    // <conv.chunks.Comment object at 0x101771070>
    // <conv.chunks.Comment object at 0x101771130>
    // <conv.chunks.Comment object at 0x101771370>
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101771550>
    // <conv.chunks.Comment object at 0x101771520>
    lda(offsetof(G, Enemy_Y_Position), y);
    cmp(0xe8);
    BCC(ExPRp);
    // <conv.chunks.Comment object at 0x101771880>
    // <conv.chunks.Comment object at 0x101771910>
    lda(0x0);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x101771af0>
    sta(0x0);
    JMP(ExPRp);
}

int ExPRp() {
    // <conv.chunks.Comment object at 0x101771d90>
    rts();
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x101771fa0>
    tax();
    JSR(GetEnemyOffscreenBits);
    // <conv.chunks.Comment object at 0x1017720c0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x101772240>
    lda(offsetof(G, Player_Rel_XPos));
    sta(offsetof(G, FloateyNum_X_Pos), x);
    // <conv.chunks.Comment object at 0x1017724e0>
    lda(offsetof(G, Player_Y_Position));
    sta(offsetof(G, FloateyNum_Y_Pos), x);
    lda(0x1);
    sta(offsetof(G, Enemy_MovingDir), x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta(offsetof(G, Enemy_Y_Speed), y);
    // <conv.chunks.Comment object at 0x101772ae0>
    // <conv.chunks.Comment object at 0x101772c00>
    sta(offsetof(G, Enemy_Y_MoveForce), y);
    rts();
    JMP(PlatformFall);
}

int PlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x101772f60>
    pha();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x101773080>
    pla();
    tax();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x101773260>
    // <conv.chunks.Comment object at 0x1017732f0>
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, PlatformCollisionFlag), x);
    BMI(ExPF);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}

int ExPF() {
    // <conv.chunks.Comment object at 0x101773500>
    // <conv.chunks.Comment object at 0x101773650>
    // <conv.chunks.Comment object at 0x1017737d0>
    // <conv.chunks.Comment object at 0x101773860>
    // <conv.chunks.Comment object at 0x101773980>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda(offsetof(G, Enemy_Y_Speed), x);
    ora(offsetof(G, Enemy_Y_MoveForce), x);
    // <conv.chunks.Comment object at 0x101773bf0>
    // <conv.chunks.Comment object at 0x101773d40>
    BNE(ChkYCenterPos);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    // <conv.chunks.Comment object at 0x101773f80>
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(offsetof(G, YPlatformTopYPos), x);
    BCS(ChkYCenterPos);
    // <conv.chunks.Comment object at 0x101780230>
    // <conv.chunks.Comment object at 0x101780380>
    lda(offsetof(G, FrameCounter));
    anda(0b111);
    // <conv.chunks.Comment object at 0x101780590>
    BNE(SkipIY);
    inc(offsetof(G, Enemy_Y_Position), x);
    JMP(SkipIY);
}

int SkipIY() {
    // <conv.chunks.Comment object at 0x1017807d0>
    // <conv.chunks.Comment object at 0x101780920>
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(offsetof(G, YPlatformCenterYPos), x);
    // <conv.chunks.Comment object at 0x101780ad0>
    // <conv.chunks.Comment object at 0x101780c20>
    BCC(YMDown);
    JSR(MovePlatformUp);
    // <conv.chunks.Comment object at 0x101780e90>
    JMP(ChkYPCollision);
    JMP(YMDown);
}

int YMDown() {
    // <conv.chunks.Comment object at 0x1017810a0>
    JSR(MovePlatformDown);
    JMP(ChkYPCollision);
}

int ChkYPCollision() {
    lda(offsetof(G, PlatformCollisionFlag), x);
    BMI(ExYPl);
    JSR(PositionPlayerOnVPlat);
    JMP(ExYPl);
}

int ExYPl() {
    // <conv.chunks.Comment object at 0x101781250>
    // <conv.chunks.Comment object at 0x1017813a0>
    // <conv.chunks.Comment object at 0x1017814f0>
    // <conv.chunks.Comment object at 0x101781640>
    rts();
    JMP(XMovingPlatform);
}

int XMovingPlatform() {
    lda(0xe);
    JSR(XMoveCntr_Platform);
    JSR(MoveWithXMCntrs);
    lda(offsetof(G, PlatformCollisionFlag), x);
    BMI(ExXMP);
    JMP(PositionPlayerOnHPlat);
}

int PositionPlayerOnHPlat() {
    lda(offsetof(G, Player_X_Position));
    clc();
    adc(0x0);
    sta(offsetof(G, Player_X_Position));
    lda(offsetof(G, Player_PageLoc));
    ldy(0x0);
    BMI(PPHSubt);
    adc(0x0);
    JMP(SetPVar);
    JMP(PPHSubt);
}

int PPHSubt() {
    // <conv.chunks.Comment object at 0x101781f40>
    // <conv.chunks.Comment object at 0x101782000>
    // <conv.chunks.Comment object at 0x101782090>
    // <conv.chunks.Comment object at 0x101782210>
    // <conv.chunks.Comment object at 0x101782360>
    // <conv.chunks.Comment object at 0x1017823f0>
    // <conv.chunks.Comment object at 0x1017825a0>
    // <conv.chunks.Comment object at 0x101782630>
    // <conv.chunks.Comment object at 0x101782810>
    sbc(0x0);
    JMP(SetPVar);
}

int SetPVar() {
    // <conv.chunks.Comment object at 0x101782900>
    sta(offsetof(G, Player_PageLoc));
    sty(offsetof(G, Platform_X_Scroll));
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // <conv.chunks.Comment object at 0x101782b10>
    // <conv.chunks.Comment object at 0x101782c30>
    // <conv.chunks.Comment object at 0x101782d50>
    rts();
    JMP(DropPlatform);
}

int DropPlatform() {
    lda(offsetof(G, PlatformCollisionFlag), x);
    BMI(ExDPl);
    JSR(MoveDropPlatform);
    JSR(PositionPlayerOnVPlat);
    JMP(ExDPl);
}

int ExDPl() {
    // <conv.chunks.Comment object at 0x101782ed0>
    // <conv.chunks.Comment object at 0x101783020>
    // <conv.chunks.Comment object at 0x101783170>
    // <conv.chunks.Comment object at 0x101783290>
    // <conv.chunks.Comment object at 0x1017833e0>
    rts();
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    lda(offsetof(G, PlatformCollisionFlag), x);
    BMI(ExRPl);
    // <conv.chunks.Comment object at 0x101783530>
    // <conv.chunks.Comment object at 0x101783590>
    // <conv.chunks.Comment object at 0x1017836e0>
    // <conv.chunks.Comment object at 0x101783770>
    // <conv.chunks.Comment object at 0x101783920>
    lda(0x10);
    sta(offsetof(G, Enemy_X_Speed), x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // <conv.chunks.Comment object at 0x101783ad0>
    // <conv.chunks.Comment object at 0x101783cb0>
    // <conv.chunks.Comment object at 0x101783dd0>
    rts();
    JMP(MoveLargeLiftPlat);
}

int MoveLargeLiftPlat() {
    JSR(MoveLiftPlatforms);
    JMP(ChkYPCollision);
    JMP(MoveSmallPlatform);
}

int MoveSmallPlatform() {
    JSR(MoveLiftPlatforms);
    JMP(ChkSmallPlatCollision);
    JMP(MoveLiftPlatforms);
}

int MoveLiftPlatforms() {
    lda(offsetof(G, TimerControl));
    BNE(ExLiftP);
    // <conv.chunks.Comment object at 0x101788470>
    // <conv.chunks.Comment object at 0x101788590>
    lda(offsetof(G, Enemy_YMF_Dummy), x);
    clc();
    // <conv.chunks.Comment object at 0x101788830>
    adc(offsetof(G, Enemy_Y_MoveForce), x);
    sta(offsetof(G, Enemy_YMF_Dummy), x);
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(offsetof(G, Enemy_Y_Speed), x);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101788b00>
    // <conv.chunks.Comment object at 0x101788c50>
    // <conv.chunks.Comment object at 0x101788da0>
    rts();
    JMP(ChkSmallPlatCollision);
}

int ChkSmallPlatCollision() {
    lda(offsetof(G, PlatformCollisionFlag), x);
    BEQ(ExLiftP);
    JSR(PositionPlayerOnS_Plat);
    JMP(ExLiftP);
}

int ExLiftP() {
    // <conv.chunks.Comment object at 0x101788fb0>
    // <conv.chunks.Comment object at 0x101789100>
    // <conv.chunks.Comment object at 0x101789250>
    // <conv.chunks.Comment object at 0x101789370>
    rts();
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, FlyingCheepCheep));
    // <conv.chunks.Comment object at 0x1017895b0>
    // <conv.chunks.Comment object at 0x101789700>
    BEQ(ExScrnBd);
    lda(offsetof(G, ScreenLeft_X_Pos));
    // <conv.chunks.Comment object at 0x101789910>
    ldy(offsetof(G, Enemy_ID), x);
    cpy(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x101789b50>
    BEQ(LimitB);
    cpy(offsetof(G, PiranhaPlant));
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // <conv.chunks.Comment object at 0x101789d90>
    // <conv.chunks.Comment object at 0x101789eb0>
    // <conv.chunks.Comment object at 0x101789fd0>
    adc(0x38);
    JMP(ExtendLB);
}

int ExtendLB() {
    // <conv.chunks.Comment object at 0x10178a0c0>
    sbc(0x48);
    sta(0x1);
    // <conv.chunks.Comment object at 0x10178a2d0>
    lda(offsetof(G, ScreenLeft_PageLoc));
    sbc(0x0);
    sta(0x0);
    lda(offsetof(G, ScreenRight_X_Pos));
    // <conv.chunks.Comment object at 0x10178a4b0>
    // <conv.chunks.Comment object at 0x10178a600>
    // <conv.chunks.Comment object at 0x10178a690>
    adc(0x48);
    sta(0x3);
    // <conv.chunks.Comment object at 0x10178a930>
    lda(offsetof(G, ScreenRight_PageLoc));
    adc(0x0);
    sta(0x2);
    lda(offsetof(G, Enemy_X_Position), x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x10178ab10>
    // <conv.chunks.Comment object at 0x10178ac60>
    // <conv.chunks.Comment object at 0x10178acf0>
    // <conv.chunks.Comment object at 0x10178aed0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(0x0);
    BMI(TooFar);
    lda(offsetof(G, Enemy_X_Position), x);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x10178b110>
    // <conv.chunks.Comment object at 0x10178b1a0>
    // <conv.chunks.Comment object at 0x10178b350>
    // <conv.chunks.Comment object at 0x10178b4d0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(0x2);
    BMI(ExScrnBd);
    lda(offsetof(G, Enemy_State), x);
    cmp(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x10178b710>
    // <conv.chunks.Comment object at 0x10178b7a0>
    // <conv.chunks.Comment object at 0x10178b920>
    // <conv.chunks.Comment object at 0x10178ba70>
    BEQ(ExScrnBd);
    cpy(offsetof(G, PiranhaPlant));
    // <conv.chunks.Comment object at 0x10178bc80>
    BEQ(ExScrnBd);
    cpy(offsetof(G, FlagpoleFlagObject));
    // <conv.chunks.Comment object at 0x10178be90>
    BEQ(ExScrnBd);
    cpy(offsetof(G, StarFlagObject));
    // <conv.chunks.Comment object at 0x1017940e0>
    BEQ(ExScrnBd);
    cpy(offsetof(G, JumpspringObject));
    BEQ(ExScrnBd);
    JMP(TooFar);
}

int TooFar() {
    // <conv.chunks.Comment object at 0x1017942f0>
    // <conv.chunks.Comment object at 0x101794410>
    // <conv.chunks.Comment object at 0x101794530>
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}

int ExScrnBd() {
    // <conv.chunks.Comment object at 0x1017946e0>
    rts();
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda(offsetof(G, Fireball_State), x);
    BEQ(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101794890>
    // <conv.chunks.Comment object at 0x101794830>
    // <conv.chunks.Comment object at 0x101794bc0>
    asl();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101794d70>
    lda(offsetof(G, FrameCounter));
    lsr();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101794fb0>
    // <conv.chunks.Comment object at 0x101795040>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101795220>
    asl();
    clc();
    adc(0x1c);
    tay();
    // <conv.chunks.Comment object at 0x1017953d0>
    // <conv.chunks.Comment object at 0x101795520>
    ldx(0x4);
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(0x1);
    // <conv.chunks.Comment object at 0x101795700>
    tya();
    pha();
    // <conv.chunks.Comment object at 0x1017958b0>
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BNE(NoFToECol);
    lda(offsetof(G, Enemy_Flag), x);
    BEQ(NoFToECol);
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x101795a60>
    // <conv.chunks.Comment object at 0x101795b80>
    // <conv.chunks.Comment object at 0x101795ca0>
    // <conv.chunks.Comment object at 0x101795df0>
    // <conv.chunks.Comment object at 0x101795f10>
    cmp(0x24);
    BCC(GoombaDie);
    // <conv.chunks.Comment object at 0x1017960c0>
    cmp(0x2b);
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // <conv.chunks.Comment object at 0x1017962d0>
    // <conv.chunks.Comment object at 0x101796480>
    cmp(offsetof(G, Goomba));
    BNE(NotGoomba);
    lda(offsetof(G, Enemy_State), x);
    cmp(0x2);
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // <conv.chunks.Comment object at 0x101796510>
    // <conv.chunks.Comment object at 0x101796720>
    // <conv.chunks.Comment object at 0x101796870>
    // <conv.chunks.Comment object at 0x101796900>
    // <conv.chunks.Comment object at 0x101796ab0>
    lda(offsetof(G, EnemyOffscrBitsMasked), x);
    BNE(NoFToECol);
    // <conv.chunks.Comment object at 0x101796c30>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101796e10>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(offsetof(G, ObjectOffset));
    BCC(NoFToECol);
    // <conv.chunks.Comment object at 0x101796fc0>
    // <conv.chunks.Comment object at 0x101797110>
    // <conv.chunks.Comment object at 0x1017971a0>
    // <conv.chunks.Comment object at 0x1017972c0>
    // <conv.chunks.Comment object at 0x1017973e0>
    lda(0b10000000);
    sta(offsetof(G, Fireball_State), x);
    ldx(0x1);
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}

int NoFToECol() {
    // <conv.chunks.Comment object at 0x1017975f0>
    // <conv.chunks.Comment object at 0x101797770>
    // <conv.chunks.Comment object at 0x101797800>
    // <conv.chunks.Comment object at 0x101797980>
    pla();
    tay();
    ldx(0x1);
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x101797e60>
    rts();
    JMP(HandleEnemyFBallCol);
}

int HandleEnemyFBallCol() {
    JSR(RelativeEnemyPosition);
    ldx(0x1);
    lda(offsetof(G, Enemy_Flag), x);
    BPL(ChkBuzzyBeetle);
    anda(0b1111);
    tax();
    // <conv.chunks.Comment object at 0x10179c1a0>
    // <conv.chunks.Comment object at 0x10179c770>
    // <conv.chunks.Comment object at 0x10179c800>
    // <conv.chunks.Comment object at 0x10179c9b0>
    // <conv.chunks.Comment object at 0x10179cad0>
    // <conv.chunks.Comment object at 0x10179cc20>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Bowser));
    BEQ(HurtBowser);
    ldx(0x1);
    JMP(ChkBuzzyBeetle);
}

int ChkBuzzyBeetle() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, BuzzyBeetle));
    BEQ(ExHCF);
    cmp(offsetof(G, Bowser));
    BNE(ChkOtherEnemies);
    JMP(HurtBowser);
}

int HurtBowser() {
    dec(offsetof(G, BowserHitPoints));
    BNE(ExHCF);
    JSR(InitVStf);
    sta(offsetof(G, Enemy_X_Speed), x);
    sta(offsetof(G, EnemyFrenzyBuffer));
    // <conv.chunks.Comment object at 0x10179d7c0>
    // <conv.chunks.Comment object at 0x10179d8e0>
    // <conv.chunks.Comment object at 0x10179da30>
    // <conv.chunks.Comment object at 0x10179db50>
    // <conv.chunks.Comment object at 0x10179dca0>
    lda(0xfe);
    sta(offsetof(G, Enemy_Y_Speed), x);
    ldy(offsetof(G, WorldNumber));
    lda(offsetof(G, BowserIdentities), y);
    sta(offsetof(G, Enemy_ID), x);
    lda(0x20);
    cpy(0x3);
    BCS(SetDBSte);
    ora(0x3);
    JMP(SetDBSte);
}

int SetDBSte() {
    // <conv.chunks.Comment object at 0x10179de20>
    // <conv.chunks.Comment object at 0x10179e000>
    // <conv.chunks.Comment object at 0x10179e120>
    // <conv.chunks.Comment object at 0x10179e270>
    // <conv.chunks.Comment object at 0x10179e3c0>
    // <conv.chunks.Comment object at 0x10179e450>
    // <conv.chunks.Comment object at 0x10179e570>
    // <conv.chunks.Comment object at 0x10179e720>
    // <conv.chunks.Comment object at 0x10179e7b0>
    sta(offsetof(G, Enemy_State), x);
    lda(offsetof(G, Sfx_BowserFall));
    sta(offsetof(G, Square2SoundQueue));
    ldx(0x1);
    lda(0x9);
    BNE(EnemySmackScore);
    JMP(ChkOtherEnemies);
}

int ChkOtherEnemies() {
    cmp(offsetof(G, BulletBill_FrenzyVar));
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x10179f050>
    cmp(offsetof(G, Podoboo));
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x10179f2c0>
    cmp(0x15);
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x10179f680>
    cmp(offsetof(G, PiranhaPlant));
    BNE(StnE);
    // <conv.chunks.Comment object at 0x10179f8c0>
    lda(offsetof(G, Enemy_Y_Position), x);
    adc(0x18);
    // <conv.chunks.Comment object at 0x10179fb30>
    sta(offsetof(G, Enemy_Y_Position), x);
    JMP(StnE);
}

int StnE() {
    // <conv.chunks.Comment object at 0x10179fd70>
    JSR(ChkToStunEnemies);
    lda(offsetof(G, Enemy_State), x);
    anda(0b11111);
    ora(0b100000);
    // <conv.chunks.Comment object at 0x1017ac050>
    // <conv.chunks.Comment object at 0x1017ac170>
    sta(offsetof(G, Enemy_State), x);
    lda(0x2);
    ldy(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1017ac3b0>
    // <conv.chunks.Comment object at 0x1017ac440>
    cpy(offsetof(G, HammerBro));
    BNE(GoombaPoints);
    lda(0x6);
    JMP(GoombaPoints);
}

int GoombaPoints() {
    cpy(offsetof(G, Goomba));
    BNE(EnemySmackScore);
    lda(0x1);
    JMP(EnemySmackScore);
}

int EnemySmackScore() {
    JSR(SetupFloateyNumber);
    lda(offsetof(G, Sfx_EnemySmack));
    // <conv.chunks.Comment object at 0x1017acd40>
    // <conv.chunks.Comment object at 0x1017ace60>
    sta(offsetof(G, Square1SoundQueue));
    JMP(ExHCF);
}

int ExHCF() {
    // <conv.chunks.Comment object at 0x1017ad070>
    rts();
    JMP(PlayerHammerCollision);
}

int PlayerHammerCollision() {
    lda(offsetof(G, FrameCounter));
    lsr();
    BCC(ExPHC);
    lda(offsetof(G, TimerControl));
    ora(offsetof(G, Misc_OffscreenBits));
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x1017ad1f0>
    // <conv.chunks.Comment object at 0x1017ad340>
    // <conv.chunks.Comment object at 0x1017ad3d0>
    // <conv.chunks.Comment object at 0x1017ad520>
    // <conv.chunks.Comment object at 0x1017ad640>
    // <conv.chunks.Comment object at 0x1017ad760>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1017ad970>
    asl();
    clc();
    adc(0x24);
    tay();
    JSR(PlayerCollisionCore);
    ldx(offsetof(G, ObjectOffset));
    BCC(ClHCol);
    lda(offsetof(G, Misc_Collision_Flag), x);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x1017adb20>
    // <conv.chunks.Comment object at 0x1017adc70>
    // <conv.chunks.Comment object at 0x1017add00>
    // <conv.chunks.Comment object at 0x1017ade20>
    // <conv.chunks.Comment object at 0x1017adf40>
    // <conv.chunks.Comment object at 0x1017ae090>
    // <conv.chunks.Comment object at 0x1017ae1e0>
    lda(0x1);
    sta(offsetof(G, Misc_Collision_Flag), x);
    // <conv.chunks.Comment object at 0x1017ae390>
    lda(offsetof(G, Misc_X_Speed), x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1017ae690>
    // <conv.chunks.Comment object at 0x1017ae7e0>
    adc(0x1);
    sta(offsetof(G, Misc_X_Speed), x);
    lda(offsetof(G, StarInvincibleTimer));
    BNE(ExPHC);
    JMP(InjurePlayer);
    JMP(ClHCol);
}

int ClHCol() {
    // <conv.chunks.Comment object at 0x1017ae8d0>
    // <conv.chunks.Comment object at 0x1017aeab0>
    // <conv.chunks.Comment object at 0x1017aebd0>
    // <conv.chunks.Comment object at 0x1017aed20>
    // <conv.chunks.Comment object at 0x1017aee40>
    lda(0x0);
    sta(offsetof(G, Misc_Collision_Flag), x);
    JMP(ExPHC);
}

int ExPHC() {
    rts();
    JMP(HandlePowerUpCollision);
}

int HandlePowerUpCollision() {
    JSR(EraseEnemyObject);
    // <conv.chunks.Comment object at 0x1017af230>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1017af3b0>
    lda(offsetof(G, Sfx_PowerUpGrab));
    sta(offsetof(G, Square2SoundQueue));
    lda(offsetof(G, PowerUpType));
    // <conv.chunks.Comment object at 0x1017af650>
    // <conv.chunks.Comment object at 0x1017af770>
    cmp(0x2);
    BCC(Shroom_Flower_PUp);
    // <conv.chunks.Comment object at 0x1017af8f0>
    cmp(0x3);
    BEQ(SetFor1Up);
    lda(0x23);
    sta(offsetof(G, StarInvincibleTimer));
    lda(offsetof(G, StarPowerMusic));
    // <conv.chunks.Comment object at 0x1017afb00>
    // <conv.chunks.Comment object at 0x1017afcb0>
    // <conv.chunks.Comment object at 0x1017afd40>
    // <conv.chunks.Comment object at 0x1017afef0>
    sta(offsetof(G, AreaMusicQueue));
    rts();
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda(offsetof(G, PlayerStatus));
    // <conv.chunks.Comment object at 0x1017b4200>
    BEQ(UpToSuper);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x1017b4410>
    BNE(NoPUp);
    ldx(offsetof(G, ObjectOffset));
    lda(0x2);
    // <conv.chunks.Comment object at 0x1017b4650>
    // <conv.chunks.Comment object at 0x1017b4770>
    sta(offsetof(G, PlayerStatus));
    JSR(GetPlayerColors);
    ldx(offsetof(G, ObjectOffset));
    lda(0xc);
    JMP(UpToFiery);
    JMP(SetFor1Up);
}

int SetFor1Up() {
    lda(0xb);
    sta(offsetof(G, FloateyNum_Control), x);
    // <conv.chunks.Comment object at 0x1017b4e30>
    // <conv.chunks.Comment object at 0x1017b4ec0>
    rts();
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1017b5160>
    sta(offsetof(G, PlayerStatus));
    lda(0x9);
    JMP(UpToFiery);
}

int UpToFiery() {
    ldy(0x0);
    JSR(SetPRout);
    JMP(NoPUp);
}

int NoPUp() {
    rts();
    JMP(PlayerEnemyCollision);
}

int PlayerEnemyCollision() {
    lda(offsetof(G, FrameCounter));
    // <conv.chunks.Comment object at 0x1017b5a30>
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda(offsetof(G, EnemyOffscrBitsMasked), x);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x1017b5df0>
    // <conv.chunks.Comment object at 0x1017b5f40>
    // <conv.chunks.Comment object at 0x1017b6060>
    // <conv.chunks.Comment object at 0x1017b61b0>
    // <conv.chunks.Comment object at 0x1017b6300>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x8);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x1017b6540>
    // <conv.chunks.Comment object at 0x1017b65d0>
    lda(offsetof(G, Enemy_State), x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x1017b68d0>
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx(offsetof(G, ObjectOffset));
    BCS(CheckForPUpCollision);
    // <conv.chunks.Comment object at 0x1017b6b10>
    // <conv.chunks.Comment object at 0x1017b6c30>
    // <conv.chunks.Comment object at 0x1017b6d50>
    // <conv.chunks.Comment object at 0x1017b6e70>
    lda(offsetof(G, Enemy_CollisionBits), x);
    anda(0b11111110);
    sta(offsetof(G, Enemy_CollisionBits), x);
    JMP(NoPECol);
}

int NoPECol() {
    rts();
    JMP(CheckForPUpCollision);
}

int CheckForPUpCollision() {
    ldy(offsetof(G, Enemy_ID), x);
    cpy(offsetof(G, PowerUpObject));
    BNE(EColl);
    JMP(HandlePowerUpCollision);
    JMP(EColl);
}

int EColl() {
    // <conv.chunks.Comment object at 0x1017b7560>
    // <conv.chunks.Comment object at 0x1017b7680>
    // <conv.chunks.Comment object at 0x1017b77d0>
    // <conv.chunks.Comment object at 0x1017b78f0>
    lda(offsetof(G, StarInvincibleTimer));
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda(offsetof(G, Enemy_CollisionBits), x);
    anda(0b1);
    // <conv.chunks.Comment object at 0x1017b7d40>
    // <conv.chunks.Comment object at 0x1017bc050>
    ora(offsetof(G, EnemyOffscrBitsMasked), x);
    BNE(ExPEC);
    // <conv.chunks.Comment object at 0x1017bc290>
    lda(0x1);
    ora(offsetof(G, Enemy_CollisionBits), x);
    // <conv.chunks.Comment object at 0x1017bc440>
    sta(offsetof(G, Enemy_CollisionBits), x);
    cpy(offsetof(G, Spiny));
    // <conv.chunks.Comment object at 0x1017bc740>
    BEQ(ChkForPlayerInjury);
    cpy(offsetof(G, PiranhaPlant));
    // <conv.chunks.Comment object at 0x1017bc980>
    BEQ(InjurePlayer);
    cpy(offsetof(G, Podoboo));
    // <conv.chunks.Comment object at 0x1017bcb90>
    BEQ(InjurePlayer);
    cpy(offsetof(G, BulletBill_CannonVar));
    // <conv.chunks.Comment object at 0x1017bcdd0>
    BEQ(ChkForPlayerInjury);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x1017bcfe0>
    BCS(InjurePlayer);
    lda(offsetof(G, AreaType));
    // <conv.chunks.Comment object at 0x1017bd1f0>
    BEQ(InjurePlayer);
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1017bd400>
    asl();
    BCS(ChkForPlayerInjury);
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1017bd6d0>
    anda(0b111);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x1017bd910>
    BCC(ChkForPlayerInjury);
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1017bdb20>
    cmp(offsetof(G, Goomba));
    BEQ(ExPEC);
    lda(offsetof(G, Sfx_EnemySmack));
    // <conv.chunks.Comment object at 0x1017bdeb0>
    sta(offsetof(G, Square1SoundQueue));
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1017be0c0>
    ora(0b10000000);
    sta(offsetof(G, Enemy_State), x);
    JSR(EnemyFacePlayer);
    lda(offsetof(G, KickedShellXSpdData), y);
    // <conv.chunks.Comment object at 0x1017be420>
    // <conv.chunks.Comment object at 0x1017be540>
    sta(offsetof(G, Enemy_X_Speed), x);
    lda(0x3);
    clc();
    // <conv.chunks.Comment object at 0x1017be7b0>
    // <conv.chunks.Comment object at 0x1017be900>
    adc(offsetof(G, StompChainCounter));
    ldy(offsetof(G, EnemyIntervalTimer), x);
    cpy(0x3);
    BCS(KSPts);
    lda(offsetof(G, KickedShellPtsData), y);
    JMP(KSPts);
}

int KSPts() {
    // <conv.chunks.Comment object at 0x1017bea80>
    // <conv.chunks.Comment object at 0x1017bebd0>
    // <conv.chunks.Comment object at 0x1017bec60>
    // <conv.chunks.Comment object at 0x1017bee40>
    // <conv.chunks.Comment object at 0x1017bef90>
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}

int ExPEC() {
    // <conv.chunks.Comment object at 0x1017bf110>
    rts();
    JMP(ChkForPlayerInjury);
}

int ChkForPlayerInjury() {
    lda(offsetof(G, Player_Y_Speed));
    BMI(ChkInj);
    BNE(EnemyStomped);
    JMP(ChkInj);
}

int ChkInj() {
    // <conv.chunks.Comment object at 0x1017bf260>
    // <conv.chunks.Comment object at 0x1017bf380>
    // <conv.chunks.Comment object at 0x1017bf4d0>
    // <conv.chunks.Comment object at 0x1017bf5f0>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Bloober));
    BCC(ChkETmrs);
    lda(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x1017bf9b0>
    clc();
    adc(0xc);
    cmp(offsetof(G, Enemy_Y_Position), x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // <conv.chunks.Comment object at 0x1017bfbc0>
    // <conv.chunks.Comment object at 0x1017bfda0>
    // <conv.chunks.Comment object at 0x1017bfec0>
    lda(offsetof(G, StompTimer));
    BNE(EnemyStomped);
    lda(offsetof(G, InjuryTimer));
    BNE(ExInjColRoutines);
    // <conv.chunks.Comment object at 0x1017d0050>
    // <conv.chunks.Comment object at 0x1017d0170>
    // <conv.chunks.Comment object at 0x1017d0290>
    lda(offsetof(G, Player_Rel_XPos));
    cmp(offsetof(G, Enemy_Rel_XPos));
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // <conv.chunks.Comment object at 0x1017d04a0>
    // <conv.chunks.Comment object at 0x1017d05c0>
    // <conv.chunks.Comment object at 0x1017d0710>
    // <conv.chunks.Comment object at 0x1017d0830>
    lda(offsetof(G, Enemy_MovingDir), x);
    cmp(0x1);
    BNE(InjurePlayer);
    // <conv.chunks.Comment object at 0x1017d09e0>
    // <conv.chunks.Comment object at 0x1017d0a70>
    JMP(LInj);
    JMP(InjurePlayer);
}

int InjurePlayer() {
    lda(offsetof(G, InjuryTimer));
    BNE(ExInjColRoutines);
    JMP(ForceInjury);
}

int ForceInjury() {
    ldx(offsetof(G, PlayerStatus));
    BEQ(KillPlayer);
    sta(offsetof(G, PlayerStatus));
    // <conv.chunks.Comment object at 0x1017d0fe0>
    // <conv.chunks.Comment object at 0x1017d1100>
    // <conv.chunks.Comment object at 0x1017d1220>
    lda(0x8);
    sta(offsetof(G, InjuryTimer));
    // <conv.chunks.Comment object at 0x1017d13a0>
    asl();
    sta(offsetof(G, Square1SoundQueue));
    JSR(GetPlayerColors);
    lda(0xa);
    JMP(SetKRout);
}

int SetKRout() {
    // <conv.chunks.Comment object at 0x1017d15e0>
    // <conv.chunks.Comment object at 0x1017d1700>
    // <conv.chunks.Comment object at 0x1017d1820>
    // <conv.chunks.Comment object at 0x1017d18b0>
    ldy(0x1);
    JMP(SetPRout);
}

int SetPRout() {
    // <conv.chunks.Comment object at 0x1017d1a00>
    sta(offsetof(G, GameEngineSubroutine));
    sty(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x1017d1be0>
    ldy(0xff);
    sty(offsetof(G, TimerControl));
    // <conv.chunks.Comment object at 0x1017d1d60>
    iny();
    sty(offsetof(G, ScrollAmount));
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1017d20f0>
    rts();
    JMP(KillPlayer);
}

int KillPlayer() {
    stx(offsetof(G, Player_X_Speed));
    // <conv.chunks.Comment object at 0x1017d22d0>
    inx();
    stx(offsetof(G, EventMusicQueue));
    // <conv.chunks.Comment object at 0x1017d2480>
    lda(0xfc);
    sta(offsetof(G, Player_Y_Speed));
    lda(0xb);
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Spiny));
    // <conv.chunks.Comment object at 0x1017d2a80>
    // <conv.chunks.Comment object at 0x1017d2de0>
    BEQ(InjurePlayer);
    lda(offsetof(G, Sfx_EnemyStomp));
    // <conv.chunks.Comment object at 0x1017d3020>
    sta(offsetof(G, Square1SoundQueue));
    lda(offsetof(G, Enemy_ID), x);
    ldy(0x0);
    cmp(offsetof(G, FlyingCheepCheep));
    // <conv.chunks.Comment object at 0x1017d3350>
    // <conv.chunks.Comment object at 0x1017d33e0>
    BEQ(EnemyStompedPts);
    cmp(offsetof(G, BulletBill_FrenzyVar));
    // <conv.chunks.Comment object at 0x1017d3680>
    BEQ(EnemyStompedPts);
    cmp(offsetof(G, BulletBill_CannonVar));
    BEQ(EnemyStompedPts);
    cmp(offsetof(G, Podoboo));
    BEQ(EnemyStompedPts);
    iny();
    cmp(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x1017d3a70>
    // <conv.chunks.Comment object at 0x1017d3bc0>
    // <conv.chunks.Comment object at 0x1017d3d10>
    // <conv.chunks.Comment object at 0x1017d3da0>
    BEQ(EnemyStompedPts);
    iny();
    cmp(offsetof(G, Lakitu));
    // <conv.chunks.Comment object at 0x1017d3fe0>
    // <conv.chunks.Comment object at 0x1017d80b0>
    BEQ(EnemyStompedPts);
    iny();
    cmp(offsetof(G, Bloober));
    // <conv.chunks.Comment object at 0x1017d8320>
    // <conv.chunks.Comment object at 0x1017d83b0>
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda(offsetof(G, StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1017d8620>
    // <conv.chunks.Comment object at 0x1017d8770>
    lda(offsetof(G, Enemy_MovingDir), x);
    pha();
    JSR(SetStun);
    // <conv.chunks.Comment object at 0x1017d89e0>
    // <conv.chunks.Comment object at 0x1017d8a70>
    pla();
    sta(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x1017d8c50>
    lda(0b100000);
    sta(offsetof(G, Enemy_State), x);
    JSR(InitVStf);
    sta(offsetof(G, Enemy_X_Speed), x);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x1017d8e90>
    // <conv.chunks.Comment object at 0x1017d8fe0>
    // <conv.chunks.Comment object at 0x1017d9100>
    // <conv.chunks.Comment object at 0x1017d9250>
    sta(offsetof(G, Player_Y_Speed));
    rts();
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1017d9520>
    BCC(HandleStompedShellE);
    anda(0b1);
    // <conv.chunks.Comment object at 0x1017d9730>
    sta(offsetof(G, Enemy_ID), x);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1017d9970>
    sty(offsetof(G, Enemy_State), x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x1017d9bb0>
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // <conv.chunks.Comment object at 0x1017d9dc0>
    // <conv.chunks.Comment object at 0x1017d9ee0>
    lda(offsetof(G, DemotedKoopaXSpdData), y);
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x1017da450>
    sta(offsetof(G, Enemy_State), x);
    inc(offsetof(G, StompChainCounter));
    lda(offsetof(G, StompChainCounter));
    clc();
    // <conv.chunks.Comment object at 0x1017da780>
    // <conv.chunks.Comment object at 0x1017da8a0>
    // <conv.chunks.Comment object at 0x1017da9f0>
    adc(offsetof(G, StompTimer));
    JSR(SetupFloateyNumber);
    inc(offsetof(G, StompTimer));
    ldy(offsetof(G, PrimaryHardMode));
    lda(offsetof(G, RevivalRateData), y);
    sta(offsetof(G, EnemyIntervalTimer), x);
    JMP(SBnce);
}

int SBnce() {
    // <conv.chunks.Comment object at 0x1017dab70>
    // <conv.chunks.Comment object at 0x1017dac90>
    // <conv.chunks.Comment object at 0x1017dadb0>
    // <conv.chunks.Comment object at 0x1017daed0>
    // <conv.chunks.Comment object at 0x1017db020>
    // <conv.chunks.Comment object at 0x1017db170>
    lda(0xfc);
    sta(offsetof(G, Player_Y_Speed));
    // <conv.chunks.Comment object at 0x1017db260>
    rts();
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x1017db4d0>
    cmp(0x1);
    BNE(LInj);
    JMP(InjurePlayer);
    JMP(LInj);
}

int LInj() {
    // <conv.chunks.Comment object at 0x1017db680>
    // <conv.chunks.Comment object at 0x1017db860>
    // <conv.chunks.Comment object at 0x1017db980>
    JSR(EnemyTurnAround);
    JMP(InjurePlayer);
    JMP(EnemyFacePlayer);
}

int EnemyFacePlayer() {
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(SFcRt);
    iny();
    JMP(SFcRt);
}

int SFcRt() {
    // <conv.chunks.Comment object at 0x1017dbc50>
    // <conv.chunks.Comment object at 0x1017dbce0>
    // <conv.chunks.Comment object at 0x1017dbe90>
    // <conv.chunks.Comment object at 0x1017e4050>
    // <conv.chunks.Comment object at 0x1017e40e0>
    sty(offsetof(G, Enemy_MovingDir), x);
    dey();
    // <conv.chunks.Comment object at 0x1017e42c0>
    rts();
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta(offsetof(G, FloateyNum_Control), x);
    // <conv.chunks.Comment object at 0x1017e4410>
    lda(0x30);
    sta(offsetof(G, FloateyNum_Timer), x);
    // <conv.chunks.Comment object at 0x1017e45c0>
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(offsetof(G, FloateyNum_Y_Pos), x);
    // <conv.chunks.Comment object at 0x1017e48c0>
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, FloateyNum_X_Pos), x);
    JMP(ExSFN);
}

int ExSFN() {
    rts();
    JMP(EnemiesCollision);
}

int EnemiesCollision() {
    lda(offsetof(G, FrameCounter));
    // <conv.chunks.Comment object at 0x1017e5220>
    lsr();
    BCC(ExSFN);
    // <conv.chunks.Comment object at 0x1017e57c0>
    lda(offsetof(G, AreaType));
    BEQ(ExSFN);
    // <conv.chunks.Comment object at 0x1017e5a00>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x1017e5c70>
    BCS(ExitECRoutine);
    cmp(offsetof(G, Lakitu));
    // <conv.chunks.Comment object at 0x1017e5e80>
    BEQ(ExitECRoutine);
    cmp(offsetof(G, PiranhaPlant));
    // <conv.chunks.Comment object at 0x1017e60c0>
    BEQ(ExitECRoutine);
    lda(offsetof(G, EnemyOffscrBitsMasked), x);
    // <conv.chunks.Comment object at 0x1017e62d0>
    BNE(ExitECRoutine);
    JSR(GetEnemyBoundBoxOfs);
    dex();
    BMI(ExitECRoutine);
    JMP(ECLoop);
}

int ECLoop() {
    // <conv.chunks.Comment object at 0x1017e6510>
    // <conv.chunks.Comment object at 0x1017e6660>
    // <conv.chunks.Comment object at 0x1017e66f0>
    // <conv.chunks.Comment object at 0x1017e6810>
    stx(0x1);
    tya();
    // <conv.chunks.Comment object at 0x1017e6870>
    pha();
    lda(offsetof(G, Enemy_Flag), x);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1017e6ae0>
    // <conv.chunks.Comment object at 0x1017e6c30>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x15);
    BCS(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1017e6e70>
    // <conv.chunks.Comment object at 0x1017e6f00>
    cmp(offsetof(G, Lakitu));
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1017e70e0>
    cmp(offsetof(G, PiranhaPlant));
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1017e73e0>
    lda(offsetof(G, EnemyOffscrBitsMasked), x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1017e7620>
    // <conv.chunks.Comment object at 0x1017e7770>
    // <conv.chunks.Comment object at 0x1017e7830>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(offsetof(G, ObjectOffset));
    ldy(0x1);
    BCC(NoEnemyCollision);
    // <conv.chunks.Comment object at 0x1017e7b00>
    // <conv.chunks.Comment object at 0x1017e7b90>
    // <conv.chunks.Comment object at 0x1017e7cb0>
    // <conv.chunks.Comment object at 0x1017e7e00>
    // <conv.chunks.Comment object at 0x1017e7e90>
    lda(offsetof(G, Enemy_State), x);
    ora(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1017ec170>
    anda(0b10000000);
    BNE(YesEC);
    lda(offsetof(G, Enemy_CollisionBits), y);
    anda(offsetof(G, SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1017ec3b0>
    // <conv.chunks.Comment object at 0x1017ec500>
    // <conv.chunks.Comment object at 0x1017ec650>
    // <conv.chunks.Comment object at 0x1017ec7a0>
    lda(offsetof(G, Enemy_CollisionBits), y);
    ora(offsetof(G, SetBitsMask), x);
    // <conv.chunks.Comment object at 0x1017ec9e0>
    sta(offsetof(G, Enemy_CollisionBits), y);
    JMP(YesEC);
}

int YesEC() {
    // <conv.chunks.Comment object at 0x1017ecc50>
    JSR(ProcEnemyCollisions);
    JMP(ReadyNextEnemy);
    JMP(NoEnemyCollision);
}

int NoEnemyCollision() {
    lda(offsetof(G, Enemy_CollisionBits), y);
    anda(offsetof(G, ClearBitsMask), x);
    sta(offsetof(G, Enemy_CollisionBits), y);
    JMP(ReadyNextEnemy);
}

int ReadyNextEnemy() {
    pla();
    tay();
    ldx(0x1);
    // <conv.chunks.Comment object at 0x1017ed370>
    // <conv.chunks.Comment object at 0x1017ed430>
    // <conv.chunks.Comment object at 0x1017ed4f0>
    dex();
    BPL(ECLoop);
    JMP(ExitECRoutine);
}

int ExitECRoutine() {
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(ProcEnemyCollisions);
}

int ProcEnemyCollisions() {
    lda(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1017eda30>
    ora(offsetof(G, Enemy_State), x);
    anda(0b100000);
    BNE(ExitProcessEColl);
    // <conv.chunks.Comment object at 0x1017edca0>
    // <conv.chunks.Comment object at 0x1017eddc0>
    lda(offsetof(G, Enemy_State), x);
    cmp(0x6);
    // <conv.chunks.Comment object at 0x1017ee000>
    BCC(ProcSecondEnemyColl);
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x1017ee210>
    // <conv.chunks.Comment object at 0x1017ee360>
    BEQ(ExitProcessEColl);
    lda(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1017ee570>
    asl();
    BCC(ShellCollisions);
    // <conv.chunks.Comment object at 0x1017ee750>
    lda(0x6);
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(0x1);
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // <conv.chunks.Comment object at 0x1017eed20>
    tax();
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x1017eee40>
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, ShellChainCounter), x);
    // <conv.chunks.Comment object at 0x1017ef050>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x1017ef230>
    ldx(0x1);
    JSR(SetupFloateyNumber);
    ldx(offsetof(G, ObjectOffset));
    inc(offsetof(G, ShellChainCounter), x);
    JMP(ExitProcessEColl);
}

int ExitProcessEColl() {
    rts();
    JMP(ProcSecondEnemyColl);
}

int ProcSecondEnemyColl() {
    lda(offsetof(G, Enemy_State), y);
    // <conv.chunks.Comment object at 0x1017ef8f0>
    cmp(0x6);
    BCC(MoveEOfs);
    lda(offsetof(G, Enemy_ID), y);
    cmp(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x1017efc20>
    // <conv.chunks.Comment object at 0x1017efd70>
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x1017eff80>
    ldy(0x1);
    lda(offsetof(G, ShellChainCounter), y);
    // <conv.chunks.Comment object at 0x1017f80e0>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x1017f83b0>
    ldx(offsetof(G, ObjectOffset));
    JSR(SetupFloateyNumber);
    ldx(0x1);
    inc(offsetof(G, ShellChainCounter), x);
    rts();
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // <conv.chunks.Comment object at 0x1017f8a70>
    tax();
    JSR(EnemyTurnAround);
    ldx(offsetof(G, ObjectOffset));
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x1017f8e00>
    cmp(offsetof(G, PiranhaPlant));
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1017f9040>
    cmp(offsetof(G, Lakitu));
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1017f91c0>
    cmp(offsetof(G, HammerBro));
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1017f94f0>
    cmp(offsetof(G, Spiny));
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x1017f96a0>
    cmp(offsetof(G, GreenParatroopaJump));
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x1017f99a0>
    cmp(0x7);
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // <conv.chunks.Comment object at 0x1017f9b50>
    // <conv.chunks.Comment object at 0x1017f9d30>
    lda(offsetof(G, Enemy_X_Speed), x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1017f9ee0>
    tay();
    iny();
    sty(offsetof(G, Enemy_X_Speed), x);
    // <conv.chunks.Comment object at 0x1017fa120>
    lda(offsetof(G, Enemy_MovingDir), x);
    eor(0b11);
    sta(offsetof(G, Enemy_MovingDir), x);
    JMP(ExTA);
}

int ExTA() {
    // <conv.chunks.Comment object at 0x1017fa390>
    // <conv.chunks.Comment object at 0x1017fa4b0>
    // <conv.chunks.Comment object at 0x1017fa600>
    rts();
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(0xff);
    // <conv.chunks.Comment object at 0x1017fa750>
    // <conv.chunks.Comment object at 0x1017fa7b0>
    sta(offsetof(G, PlatformCollisionFlag), x);
    lda(offsetof(G, TimerControl));
    BNE(ExLPC);
    lda(offsetof(G, Enemy_State), x);
    BMI(ExLPC);
    // <conv.chunks.Comment object at 0x1017fa9f0>
    // <conv.chunks.Comment object at 0x1017fab10>
    // <conv.chunks.Comment object at 0x1017fac60>
    // <conv.chunks.Comment object at 0x1017fadb0>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x24);
    BNE(ChkForPlayerC_LargeP);
    // <conv.chunks.Comment object at 0x1017fb020>
    // <conv.chunks.Comment object at 0x1017fb0b0>
    lda(offsetof(G, Enemy_State), x);
    tax();
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    JSR(CheckPlayerVertical);
    BCS(ExLPC);
    // <conv.chunks.Comment object at 0x1017fb590>
    // <conv.chunks.Comment object at 0x1017fb6b0>
    txa();
    JSR(GetEnemyBoundBoxOfsArg);
    lda(offsetof(G, Enemy_Y_Position), x);
    sta(0x0);
    txa();
    // <conv.chunks.Comment object at 0x1017fb890>
    // <conv.chunks.Comment object at 0x1017fb9b0>
    // <conv.chunks.Comment object at 0x1017fbb30>
    // <conv.chunks.Comment object at 0x1017fbb00>
    pha();
    JSR(PlayerCollisionCore);
    pla();
    // <conv.chunks.Comment object at 0x1017fbd70>
    // <conv.chunks.Comment object at 0x1017fbec0>
    tax();
    BCC(ExLPC);
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}

int ExLPC() {
    // <conv.chunks.Comment object at 0x1017fbfe0>
    // <conv.chunks.Comment object at 0x101808170>
    // <conv.chunks.Comment object at 0x101808290>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(SmallPlatformCollision);
}

int SmallPlatformCollision() {
    lda(offsetof(G, TimerControl));
    BNE(ExSPC);
    sta(offsetof(G, PlatformCollisionFlag), x);
    JSR(CheckPlayerVertical);
    BCS(ExSPC);
    // <conv.chunks.Comment object at 0x1018084d0>
    // <conv.chunks.Comment object at 0x101808530>
    // <conv.chunks.Comment object at 0x101808650>
    // <conv.chunks.Comment object at 0x1018087a0>
    // <conv.chunks.Comment object at 0x1018088f0>
    // <conv.chunks.Comment object at 0x101808a10>
    lda(0x2);
    sta(0x0);
    JMP(ChkSmallPlatLoop);
}

int ChkSmallPlatLoop() {
    ldx(offsetof(G, ObjectOffset));
    JSR(GetEnemyBoundBoxOfs);
    anda(0b10);
    BNE(ExSPC);
    lda(offsetof(G, BoundingBox_UL_YPos), y);
    cmp(0x20);
    BCC(MoveBoundBox);
    JSR(PlayerCollisionCore);
    BCS(ProcSPlatCollisions);
    JMP(MoveBoundBox);
}

int MoveBoundBox() {
    lda(offsetof(G, BoundingBox_UL_YPos), y);
    clc();
    // <conv.chunks.Comment object at 0x101809850>
    // <conv.chunks.Comment object at 0x1018099d0>
    adc(0x80);
    sta(offsetof(G, BoundingBox_UL_YPos), y);
    lda(offsetof(G, BoundingBox_DR_YPos), y);
    clc();
    adc(0x80);
    sta(offsetof(G, BoundingBox_DR_YPos), y);
    dec(0x0);
    BNE(ChkSmallPlatLoop);
    JMP(ExSPC);
}

int ExSPC() {
    // <conv.chunks.Comment object at 0x10180a060>
    // <conv.chunks.Comment object at 0x10180a0f0>
    // <conv.chunks.Comment object at 0x10180a270>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(ProcSPlatCollisions);
}

int ProcSPlatCollisions() {
    ldx(offsetof(G, ObjectOffset));
    JMP(ProcLPlatCollisions);
}

int ProcLPlatCollisions() {
    lda(offsetof(G, BoundingBox_DR_YPos), y);
    sec();
    sbc(offsetof(G, BoundingBox_UL_YPos));
    cmp(0x4);
    BCS(ChkForTopCollision);
    lda(offsetof(G, Player_Y_Speed));
    BPL(ChkForTopCollision);
    lda(0x1);
    sta(offsetof(G, Player_Y_Speed));
    JMP(ChkForTopCollision);
}

int ChkForTopCollision() {
    lda(offsetof(G, BoundingBox_DR_YPos));
    sec();
    sbc(offsetof(G, BoundingBox_UL_YPos), y);
    // <conv.chunks.Comment object at 0x10180b050>
    // <conv.chunks.Comment object at 0x10180b1a0>
    // <conv.chunks.Comment object at 0x10180b230>
    cmp(0x6);
    BCS(PlatformSideCollisions);
    // <conv.chunks.Comment object at 0x10180b3e0>
    lda(offsetof(G, Player_Y_Speed));
    BMI(PlatformSideCollisions);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10180b680>
    // <conv.chunks.Comment object at 0x10180b7d0>
    ldy(offsetof(G, Enemy_ID), x);
    cpy(0x2b);
    BEQ(SetCollisionFlag);
    cpy(0x2c);
    // <conv.chunks.Comment object at 0x10180b9e0>
    // <conv.chunks.Comment object at 0x10180ba70>
    // <conv.chunks.Comment object at 0x10180bc20>
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx(offsetof(G, ObjectOffset));
    sta(offsetof(G, PlatformCollisionFlag), x);
    // <conv.chunks.Comment object at 0x10180bf20>
    // <conv.chunks.Comment object at 0x101810080>
    lda(0x0);
    sta(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x101810230>
    rts();
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(0x1);
    sta(0x0);
    lda(offsetof(G, BoundingBox_DR_XPos));
    sec();
    // <conv.chunks.Comment object at 0x1018104a0>
    // <conv.chunks.Comment object at 0x1018105f0>
    // <conv.chunks.Comment object at 0x101810680>
    // <conv.chunks.Comment object at 0x101810830>
    sbc(offsetof(G, BoundingBox_UL_XPos), y);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x1018109e0>
    BCC(SideC);
    inc(0x0);
    lda(offsetof(G, BoundingBox_DR_XPos), y);
    clc();
    // <conv.chunks.Comment object at 0x101810c50>
    // <conv.chunks.Comment object at 0x101810ce0>
    // <conv.chunks.Comment object at 0x101810ec0>
    sbc(offsetof(G, BoundingBox_UL_XPos));
    cmp(0x9);
    BCS(NoSideC);
    JMP(SideC);
}

int SideC() {
    // <conv.chunks.Comment object at 0x101811040>
    // <conv.chunks.Comment object at 0x1018110d0>
    // <conv.chunks.Comment object at 0x1018112b0>
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}

int NoSideC() {
    // <conv.chunks.Comment object at 0x101811430>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(PositionPlayerOnS_Plat);
}

int PositionPlayerOnS_Plat() {
    tay();
    lda(offsetof(G, Enemy_Y_Position), x);
    clc();
    adc(((offsetof(G, PlayerPosSPlatData)) - (1)), y);
    JMP(PositionPlayerOnVPlat);
}

int PositionPlayerOnVPlat() {
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101811d60>
    ldy(offsetof(G, GameEngineSubroutine));
    cpy(0xb);
    BEQ(ExPlPos);
    // <conv.chunks.Comment object at 0x101812000>
    // <conv.chunks.Comment object at 0x101812090>
    ldy(offsetof(G, Enemy_Y_HighPos), x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x101812390>
    BNE(ExPlPos);
    sec();
    sbc(0x20);
    sta(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x101812600>
    // <conv.chunks.Comment object at 0x101812690>
    // <conv.chunks.Comment object at 0x101812720>
    tya();
    sbc(0x0);
    sta(offsetof(G, Player_Y_HighPos));
    // <conv.chunks.Comment object at 0x101812960>
    // <conv.chunks.Comment object at 0x1018129f0>
    lda(0x0);
    sta(offsetof(G, Player_Y_Speed));
    sta(offsetof(G, Player_Y_MoveForce));
    JMP(ExPlPos);
}

int ExPlPos() {
    rts();
    JMP(CheckPlayerVertical);
}

int CheckPlayerVertical() {
    lda(offsetof(G, Player_OffscreenBits));
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x101813020>
    // <conv.chunks.Comment object at 0x101813140>
    BCS(ExCPV);
    ldy(offsetof(G, Player_Y_HighPos));
    dey();
    // <conv.chunks.Comment object at 0x101813380>
    // <conv.chunks.Comment object at 0x1018134d0>
    BNE(ExCPV);
    lda(offsetof(G, Player_Y_Position));
    cmp(0xd0);
    JMP(ExCPV);
}

int ExCPV() {
    rts();
    JMP(GetEnemyBoundBoxOfs);
}

int GetEnemyBoundBoxOfs() {
    lda(offsetof(G, ObjectOffset));
    JMP(GetEnemyBoundBoxOfsArg);
}

int GetEnemyBoundBoxOfsArg() {
    asl();
    asl();
    // <conv.chunks.Comment object at 0x101813b90>
    // <conv.chunks.Comment object at 0x101813c50>
    clc();
    adc(0x4);
    tay();
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1111);
    cmp(0b1111);
    // <conv.chunks.Comment object at 0x101813e90>
    // <conv.chunks.Comment object at 0x101813f20>
    // <conv.chunks.Comment object at 0x101818080>
    // <conv.chunks.Comment object at 0x1018181a0>
    rts();
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda(offsetof(G, DisableCollisionDet));
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x1018184a0>
    // <conv.chunks.Comment object at 0x1018186b0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0xb);
    BEQ(ExPBGCol);
    // <conv.chunks.Comment object at 0x1018188c0>
    // <conv.chunks.Comment object at 0x101818950>
    cmp(0x4);
    BCC(ExPBGCol);
    lda(0x1);
    ldy(offsetof(G, SwimmingFlag));
    BNE(SetPSte);
    lda(offsetof(G, Player_State));
    BEQ(SetFallS);
    // <conv.chunks.Comment object at 0x101818b60>
    // <conv.chunks.Comment object at 0x101818d10>
    // <conv.chunks.Comment object at 0x101818da0>
    // <conv.chunks.Comment object at 0x101818f50>
    // <conv.chunks.Comment object at 0x1018190a0>
    // <conv.chunks.Comment object at 0x1018191c0>
    cmp(0x3);
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // <conv.chunks.Comment object at 0x101819340>
    // <conv.chunks.Comment object at 0x1018194f0>
    lda(0x2);
    JMP(SetPSte);
}

int SetPSte() {
    // <conv.chunks.Comment object at 0x1018195b0>
    sta(offsetof(G, Player_State));
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda(offsetof(G, Player_Y_HighPos));
    cmp(0x1);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x1018198e0>
    // <conv.chunks.Comment object at 0x101819970>
    lda(0xff);
    sta(offsetof(G, Player_CollisionBits));
    // <conv.chunks.Comment object at 0x101819b80>
    lda(offsetof(G, Player_Y_Position));
    cmp(0xcf);
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // <conv.chunks.Comment object at 0x101819e20>
    // <conv.chunks.Comment object at 0x101819eb0>
    // <conv.chunks.Comment object at 0x10181a060>
    rts();
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(0x2);
    // <conv.chunks.Comment object at 0x10181a180>
    lda(offsetof(G, CrouchingFlag));
    BNE(GBBAdr);
    // <conv.chunks.Comment object at 0x10181a390>
    lda(offsetof(G, PlayerSize));
    BNE(GBBAdr);
    dey();
    // <conv.chunks.Comment object at 0x10181a5d0>
    // <conv.chunks.Comment object at 0x10181a750>
    lda(offsetof(G, SwimmingFlag));
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // <conv.chunks.Comment object at 0x10181a8d0>
    // <conv.chunks.Comment object at 0x10181aa50>
    // <conv.chunks.Comment object at 0x10181aae0>
    lda(offsetof(G, BlockBufferAdderData), y);
    sta(0xeb);
    tay();
    ldx(offsetof(G, PlayerSize));
    // <conv.chunks.Comment object at 0x10181acc0>
    // <conv.chunks.Comment object at 0x10181ac90>
    // <conv.chunks.Comment object at 0x10181ae70>
    lda(offsetof(G, CrouchingFlag));
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // <conv.chunks.Comment object at 0x10181b080>
    // <conv.chunks.Comment object at 0x10181b200>
    // <conv.chunks.Comment object at 0x10181b290>
    lda(offsetof(G, Player_Y_Position));
    cmp(offsetof(G, PlayerBGUpperExtent), x);
    BCC(DoFootCheck);
    JSR(BlockBufferColli_Head);
    BEQ(DoFootCheck);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    ldy(offsetof(G, Player_Y_Speed));
    BPL(DoFootCheck);
    ldy(0x4);
    cpy(0x4);
    BCC(DoFootCheck);
    JSR(CheckForSolidMTiles);
    BCS(SolidOrClimb);
    ldy(offsetof(G, AreaType));
    BEQ(NYSpd);
    ldy(offsetof(G, BlockBounceTimer));
    BNE(NYSpd);
    JSR(PlayerHeadCollision);
    JMP(DoFootCheck);
    JMP(SolidOrClimb);
}

int SolidOrClimb() {
    cmp(0x26);
    BEQ(NYSpd);
    // <conv.chunks.Comment object at 0x101828a70>
    // <conv.chunks.Comment object at 0x101828b00>
    lda(offsetof(G, Sfx_Bump));
    sta(offsetof(G, Square1SoundQueue));
    JMP(NYSpd);
}

int NYSpd() {
    // <conv.chunks.Comment object at 0x101828dd0>
    // <conv.chunks.Comment object at 0x101828ef0>
    lda(0x1);
    sta(offsetof(G, Player_Y_Speed));
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x1018291f0>
    lda(offsetof(G, Player_Y_Position));
    cmp(0xcf);
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1018293d0>
    // <conv.chunks.Comment object at 0x101829460>
    // <conv.chunks.Comment object at 0x101829610>
    // <conv.chunks.Comment object at 0x101829730>
    // <conv.chunks.Comment object at 0x101829850>
    // <conv.chunks.Comment object at 0x1018299a0>
    // <conv.chunks.Comment object at 0x101829a30>
    // <conv.chunks.Comment object at 0x101829b80>
    pla();
    sta(0x1);
    BNE(ChkFootMTile);
    lda(0x0);
    BEQ(DoPlayerSideCheck);
    JSR(CheckForCoinMTiles);
    BCC(ChkFootMTile);
    JMP(AwardTouchedCoin);
}

int AwardTouchedCoin() {
    JMP(HandleCoinMetatile);
    JMP(ChkFootMTile);
}

int ChkFootMTile() {
    JSR(CheckForClimbMTiles);
    BCS(DoPlayerSideCheck);
    ldy(offsetof(G, Player_Y_Speed));
    BMI(DoPlayerSideCheck);
    // <conv.chunks.Comment object at 0x10182a540>
    // <conv.chunks.Comment object at 0x10182a660>
    // <conv.chunks.Comment object at 0x10182a780>
    // <conv.chunks.Comment object at 0x10182a8a0>
    cmp(0xc5);
    BNE(ContChk);
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}

int ContChk() {
    // <conv.chunks.Comment object at 0x10182aa20>
    // <conv.chunks.Comment object at 0x10182ac00>
    // <conv.chunks.Comment object at 0x10182ad20>
    JSR(ChkInvisibleMTiles);
    BEQ(DoPlayerSideCheck);
    ldy(offsetof(G, JumpspringAnimCtrl));
    BNE(InitSteP);
    ldy(0x4);
    cpy(0x5);
    BCC(LandPlyr);
    // <conv.chunks.Comment object at 0x10182aea0>
    // <conv.chunks.Comment object at 0x10182afc0>
    // <conv.chunks.Comment object at 0x10182b0e0>
    // <conv.chunks.Comment object at 0x10182b230>
    // <conv.chunks.Comment object at 0x10182b2c0>
    // <conv.chunks.Comment object at 0x10182b3b0>
    lda(offsetof(G, Player_MovingDir));
    sta(0x0);
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // <conv.chunks.Comment object at 0x10182b680>
    // <conv.chunks.Comment object at 0x10182b710>
    // <conv.chunks.Comment object at 0x10182b890>
    JSR(ChkForLandJumpSpring);
    lda(0xf0);
    anda(offsetof(G, Player_Y_Position));
    sta(offsetof(G, Player_Y_Position));
    JSR(HandlePipeEntry);
    // <conv.chunks.Comment object at 0x10182ba40>
    // <conv.chunks.Comment object at 0x10182bbf0>
    // <conv.chunks.Comment object at 0x10182bd10>
    lda(0x0);
    sta(offsetof(G, Player_Y_Speed));
    sta(offsetof(G, Player_Y_MoveForce));
    sta(offsetof(G, StompChainCounter));
    JMP(InitSteP);
}

int InitSteP() {
    lda(0x0);
    sta(offsetof(G, Player_State));
    JMP(DoPlayerSideCheck);
}

int DoPlayerSideCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x101830560>
    iny();
    iny();
    lda(0x2);
    // <conv.chunks.Comment object at 0x101830710>
    // <conv.chunks.Comment object at 0x1018307a0>
    sta(0x0);
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(0xeb);
    // <conv.chunks.Comment object at 0x101830a10>
    // <conv.chunks.Comment object at 0x101830ad0>
    lda(offsetof(G, Player_Y_Position));
    cmp(0x20);
    BCC(BHalf);
    // <conv.chunks.Comment object at 0x101830cb0>
    // <conv.chunks.Comment object at 0x101830d40>
    cmp(0xe4);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(0x1c);
    BEQ(BHalf);
    // <conv.chunks.Comment object at 0x101830f80>
    // <conv.chunks.Comment object at 0x101831160>
    // <conv.chunks.Comment object at 0x101831280>
    // <conv.chunks.Comment object at 0x1018313d0>
    // <conv.chunks.Comment object at 0x101831460>
    cmp(0x6b);
    BEQ(BHalf);
    JSR(CheckForClimbMTiles);
    BCC(CheckSideMTiles);
    JMP(BHalf);
}

int BHalf() {
    // <conv.chunks.Comment object at 0x1018316a0>
    // <conv.chunks.Comment object at 0x101831880>
    // <conv.chunks.Comment object at 0x1018319a0>
    // <conv.chunks.Comment object at 0x101831ac0>
    ldy(0xeb);
    iny();
    lda(offsetof(G, Player_Y_Position));
    // <conv.chunks.Comment object at 0x101831b20>
    // <conv.chunks.Comment object at 0x101831d00>
    cmp(0x8);
    BCC(ExSCH);
    // <conv.chunks.Comment object at 0x101831e80>
    cmp(0xd0);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(0x0);
    BNE(SideCheckLoop);
    JMP(ExSCH);
}

int ExSCH() {
    // <conv.chunks.Comment object at 0x1018320c0>
    // <conv.chunks.Comment object at 0x1018322a0>
    // <conv.chunks.Comment object at 0x1018323c0>
    // <conv.chunks.Comment object at 0x101832510>
    // <conv.chunks.Comment object at 0x1018325a0>
    // <conv.chunks.Comment object at 0x101832750>
    rts();
    JMP(CheckSideMTiles);
}

int CheckSideMTiles() {
    JSR(ChkInvisibleMTiles);
    BEQ(ExCSM);
    JSR(CheckForClimbMTiles);
    BCC(ContSChk);
    JMP(HandleClimbing);
    JMP(ContSChk);
}

int ContSChk() {
    // <conv.chunks.Comment object at 0x1018328a0>
    // <conv.chunks.Comment object at 0x1018329c0>
    // <conv.chunks.Comment object at 0x101832b10>
    // <conv.chunks.Comment object at 0x101832c30>
    // <conv.chunks.Comment object at 0x101832d50>
    // <conv.chunks.Comment object at 0x101832e70>
    JSR(CheckForCoinMTiles);
    BCS(HandleCoinMetatile);
    JSR(ChkJumpspringMetatiles);
    BCC(ChkPBtm);
    lda(offsetof(G, JumpspringAnimCtrl));
    BNE(ExCSM);
    JMP(StopPlayerMove);
    JMP(ChkPBtm);
}

int ChkPBtm() {
    // <conv.chunks.Comment object at 0x101832fc0>
    // <conv.chunks.Comment object at 0x1018330e0>
    // <conv.chunks.Comment object at 0x101833200>
    // <conv.chunks.Comment object at 0x101833350>
    // <conv.chunks.Comment object at 0x101833470>
    // <conv.chunks.Comment object at 0x1018335c0>
    // <conv.chunks.Comment object at 0x1018336e0>
    ldy(offsetof(G, Player_State));
    cpy(0x0);
    BNE(StopPlayerMove);
    ldy(offsetof(G, PlayerFacingDir));
    // <conv.chunks.Comment object at 0x101833860>
    // <conv.chunks.Comment object at 0x1018338f0>
    // <conv.chunks.Comment object at 0x101833aa0>
    dey();
    BNE(StopPlayerMove);
    cmp(0x6c);
    BEQ(PipeDwnS);
    cmp(0x1f);
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}

int PipeDwnS() {
    // <conv.chunks.Comment object at 0x101833c50>
    // <conv.chunks.Comment object at 0x101833d70>
    // <conv.chunks.Comment object at 0x101833e00>
    // <conv.chunks.Comment object at 0x101833fb0>
    // <conv.chunks.Comment object at 0x10183c080>
    // <conv.chunks.Comment object at 0x10183c230>
    lda(offsetof(G, Player_SprAttrib));
    BNE(PlyrPipe);
    // <conv.chunks.Comment object at 0x10183c380>
    ldy(offsetof(G, Sfx_PipeDown_Injury));
    sty(offsetof(G, Square1SoundQueue));
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(0b100000);
    sta(offsetof(G, Player_SprAttrib));
    // <conv.chunks.Comment object at 0x10183c7d0>
    lda(offsetof(G, Player_X_Position));
    anda(0b1111);
    BEQ(ChkGERtn);
    ldy(0x0);
    lda(offsetof(G, ScreenLeft_PageLoc));
    BEQ(SetCATmr);
    iny();
    JMP(SetCATmr);
}

int SetCATmr() {
    // <conv.chunks.Comment object at 0x10183c9e0>
    // <conv.chunks.Comment object at 0x10183cb00>
    // <conv.chunks.Comment object at 0x10183cc20>
    // <conv.chunks.Comment object at 0x10183ccb0>
    // <conv.chunks.Comment object at 0x10183ce60>
    // <conv.chunks.Comment object at 0x10183cfb0>
    // <conv.chunks.Comment object at 0x10183d040>
    lda(offsetof(G, AreaChangeTimerData), y);
    sta(offsetof(G, ChangeAreaTimer));
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // <conv.chunks.Comment object at 0x10183d2b0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x7);
    BEQ(ExCSM);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x10183d460>
    // <conv.chunks.Comment object at 0x10183d640>
    BNE(ExCSM);
    lda(0x2);
    sta(offsetof(G, GameEngineSubroutine));
    rts();
    JMP(StopPlayerMove);
}

int StopPlayerMove() {
    JSR(ImpedePlayerMove);
    JMP(ExCSM);
}

int ExCSM() {
    // <conv.chunks.Comment object at 0x10183d8e0>
    // <conv.chunks.Comment object at 0x10183dac0>
    // <conv.chunks.Comment object at 0x10183db80>
    // <conv.chunks.Comment object at 0x10183dbe0>
    // <conv.chunks.Comment object at 0x10183dc40>
    // <conv.chunks.Comment object at 0x10183dd90>
    rts();
    JMP(HandleCoinMetatile);
}

int HandleCoinMetatile() {
    JSR(ErACM);
    inc(offsetof(G, CoinTallyFor1Ups));
    JMP(GiveOneCoin);
    JMP(HandleAxeMetatile);
}

int HandleAxeMetatile() {
    lda(0x0);
    sta(offsetof(G, OperMode_Task));
    // <conv.chunks.Comment object at 0x10183e450>
    lda(0x2);
    sta(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x10183e660>
    lda(0x18);
    sta(offsetof(G, Player_X_Speed));
    JMP(ErACM);
}

int ErACM() {
    // <conv.chunks.Comment object at 0x10183e870>
    // <conv.chunks.Comment object at 0x10183ea20>
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    JMP(RemoveCoin_Axe);
    JMP(HandleClimbing);
}

int HandleClimbing() {
    ldy(0x4);
    cpy(0x6);
    BCC(ExHC);
    cpy(0xa);
    // <conv.chunks.Comment object at 0x10183f380>
    // <conv.chunks.Comment object at 0x10183f0e0>
    // <conv.chunks.Comment object at 0x10183f7a0>
    // <conv.chunks.Comment object at 0x10183f980>
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // <conv.chunks.Comment object at 0x10183fb90>
    rts();
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(0x24);
    BEQ(FlagpoleCollision);
    // <conv.chunks.Comment object at 0x10183fce0>
    // <conv.chunks.Comment object at 0x10183fd70>
    cmp(0x25);
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x5);
    BEQ(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x101848290>
    // <conv.chunks.Comment object at 0x101848320>
    lda(0x1);
    sta(offsetof(G, PlayerFacingDir));
    inc(offsetof(G, ScrollLock));
    // <conv.chunks.Comment object at 0x101848530>
    // <conv.chunks.Comment object at 0x1018486e0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0x4);
    BEQ(RunFR);
    lda(offsetof(G, BulletBill_CannonVar));
    JSR(KillEnemies);
    // <conv.chunks.Comment object at 0x1018488f0>
    // <conv.chunks.Comment object at 0x101848980>
    // <conv.chunks.Comment object at 0x101848b60>
    // <conv.chunks.Comment object at 0x101848c80>
    lda(offsetof(G, Silence));
    sta(offsetof(G, EventMusicQueue));
    // <conv.chunks.Comment object at 0x101848ec0>
    lsr();
    sta(offsetof(G, FlagpoleSoundQueue));
    ldx(0x4);
    // <conv.chunks.Comment object at 0x101849070>
    // <conv.chunks.Comment object at 0x101849190>
    lda(offsetof(G, Player_Y_Position));
    sta(offsetof(G, FlagpoleCollisionYPos));
    JMP(ChkFlagpoleYPosLoop);
}

int ChkFlagpoleYPosLoop() {
    cmp(offsetof(G, FlagpoleYPosData), x);
    BCS(MtchF);
    dex();
    BNE(ChkFlagpoleYPosLoop);
    JMP(MtchF);
}

int MtchF() {
    // <conv.chunks.Comment object at 0x1018494f0>
    // <conv.chunks.Comment object at 0x101849640>
    // <conv.chunks.Comment object at 0x1018497c0>
    // <conv.chunks.Comment object at 0x101849850>
    // <conv.chunks.Comment object at 0x101849970>
    stx(offsetof(G, FlagpoleScore));
    JMP(RunFR);
}

int RunFR() {
    lda(0x4);
    sta(offsetof(G, GameEngineSubroutine));
    JMP(PutPlayerOnVine);
    JMP(VineCollision);
}

int VineCollision() {
    cmp(0x26);
    // <conv.chunks.Comment object at 0x101849eb0>
    BNE(PutPlayerOnVine);
    lda(offsetof(G, Player_Y_Position));
    cmp(0x20);
    BCS(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x10184a0c0>
    // <conv.chunks.Comment object at 0x10184a1e0>
    // <conv.chunks.Comment object at 0x10184a270>
    lda(0x1);
    sta(offsetof(G, GameEngineSubroutine));
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x10184a660>
    sta(offsetof(G, Player_State));
    lda(0x0);
    sta(offsetof(G, Player_X_Speed));
    // <conv.chunks.Comment object at 0x10184a870>
    // <conv.chunks.Comment object at 0x10184a900>
    sta(offsetof(G, Player_X_MoveForce));
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x10184aba0>
    sec();
    sbc(offsetof(G, ScreenLeft_X_Pos));
    // <conv.chunks.Comment object at 0x10184ad50>
    cmp(0x10);
    BCS(SetVXPl);
    // <conv.chunks.Comment object at 0x10184aed0>
    lda(0x2);
    sta(offsetof(G, PlayerFacingDir));
    JMP(SetVXPl);
}

int SetVXPl() {
    // <conv.chunks.Comment object at 0x10184b110>
    // <conv.chunks.Comment object at 0x10184b2c0>
    ldy(offsetof(G, PlayerFacingDir));
    lda(0x6);
    // <conv.chunks.Comment object at 0x10184b470>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x10184b620>
    asl();
    asl();
    clc();
    adc(((offsetof(G, ClimbXPosAdder)) - (1)), y);
    sta(offsetof(G, Player_X_Position));
    lda(0x6);
    BNE(ExPVne);
    lda(offsetof(G, ScreenRight_PageLoc));
    // <conv.chunks.Comment object at 0x10184b860>
    // <conv.chunks.Comment object at 0x10184ba70>
    // <conv.chunks.Comment object at 0x10184bbc0>
    // <conv.chunks.Comment object at 0x10184bc50>
    // <conv.chunks.Comment object at 0x10184be00>
    clc();
    adc(((offsetof(G, ClimbPLocAdder)) - (1)), y);
    sta(offsetof(G, Player_PageLoc));
    JMP(ExPVne);
}

int ExPVne() {
    // <conv.chunks.Comment object at 0x10184bfb0>
    // <conv.chunks.Comment object at 0x101854200>
    // <conv.chunks.Comment object at 0x101854320>
    rts();
    JMP(ChkInvisibleMTiles);
}

int ChkInvisibleMTiles() {
    cmp(0x5f);
    BEQ(ExCInvT);
    cmp(0x60);
    JMP(ExCInvT);
}

int ExCInvT() {
    // <conv.chunks.Comment object at 0x1018544a0>
    // <conv.chunks.Comment object at 0x101854530>
    // <conv.chunks.Comment object at 0x101854710>
    // <conv.chunks.Comment object at 0x1018547a0>
    rts();
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // <conv.chunks.Comment object at 0x101854a10>
    // <conv.chunks.Comment object at 0x101854b30>
    lda(0x70);
    sta(offsetof(G, VerticalForce));
    // <conv.chunks.Comment object at 0x101854ce0>
    lda(0xf9);
    sta(offsetof(G, JumpspringForce));
    // <conv.chunks.Comment object at 0x101854ef0>
    lda(0x3);
    sta(offsetof(G, JumpspringTimer));
    // <conv.chunks.Comment object at 0x101855100>
    lsr();
    sta(offsetof(G, JumpspringAnimCtrl));
    JMP(ExCJSp);
}

int ExCJSp() {
    // <conv.chunks.Comment object at 0x101855340>
    // <conv.chunks.Comment object at 0x101855460>
    rts();
    JMP(ChkJumpspringMetatiles);
}

int ChkJumpspringMetatiles() {
    cmp(0x67);
    BEQ(JSFnd);
    cmp(0x68);
    clc();
    BNE(NoJSFnd);
    JMP(JSFnd);
}

int JSFnd() {
    // <conv.chunks.Comment object at 0x1018555b0>
    // <conv.chunks.Comment object at 0x101855640>
    // <conv.chunks.Comment object at 0x101855820>
    // <conv.chunks.Comment object at 0x101855970>
    // <conv.chunks.Comment object at 0x101855a00>
    // <conv.chunks.Comment object at 0x101855b50>
    sec();
    JMP(NoJSFnd);
}

int NoJSFnd() {
    // <conv.chunks.Comment object at 0x101855ca0>
    rts();
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda(offsetof(G, Up_Down_Buttons));
    anda(0b100);
    BEQ(ExPipeE);
    // <conv.chunks.Comment object at 0x101855df0>
    // <conv.chunks.Comment object at 0x101855f10>
    // <conv.chunks.Comment object at 0x101856030>
    lda(0x0);
    cmp(0x11);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x101856180>
    // <conv.chunks.Comment object at 0x101856300>
    lda(0x1);
    cmp(0x10);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x1018564e0>
    // <conv.chunks.Comment object at 0x101856660>
    lda(0x30);
    sta(offsetof(G, ChangeAreaTimer));
    // <conv.chunks.Comment object at 0x1018568a0>
    lda(0x3);
    sta(offsetof(G, GameEngineSubroutine));
    // <conv.chunks.Comment object at 0x101856ab0>
    lda(offsetof(G, Sfx_PipeDown_Injury));
    sta(offsetof(G, Square1SoundQueue));
    // <conv.chunks.Comment object at 0x101856d50>
    lda(0b100000);
    sta(offsetof(G, Player_SprAttrib));
    lda(offsetof(G, WarpZoneControl));
    BEQ(ExPipeE);
    anda(0b11);
    // <conv.chunks.Comment object at 0x101856f60>
    // <conv.chunks.Comment object at 0x101857080>
    // <conv.chunks.Comment object at 0x1018571a0>
    // <conv.chunks.Comment object at 0x1018572f0>
    asl();
    asl();
    tax();
    lda(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x1018574d0>
    // <conv.chunks.Comment object at 0x101857590>
    // <conv.chunks.Comment object at 0x101857620>
    cmp(0x60);
    BCC(GetWNum);
    inx();
    // <conv.chunks.Comment object at 0x1018577a0>
    // <conv.chunks.Comment object at 0x1018579b0>
    cmp(0xa0);
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // <conv.chunks.Comment object at 0x101857aa0>
    // <conv.chunks.Comment object at 0x101857cb0>
    // <conv.chunks.Comment object at 0x101857d40>
    ldy(offsetof(G, WarpZoneNumbers), x);
    dey();
    sty(offsetof(G, WorldNumber));
    ldx(offsetof(G, WorldAddrOffsets), y);
    lda(offsetof(G, AreaAddrOffsets), x);
    sta(offsetof(G, AreaPointer));
    // <conv.chunks.Comment object at 0x101857f20>
    // <conv.chunks.Comment object at 0x101857fb0>
    // <conv.chunks.Comment object at 0x10185c110>
    // <conv.chunks.Comment object at 0x10185c260>
    // <conv.chunks.Comment object at 0x10185c3b0>
    lda(offsetof(G, Silence));
    sta(offsetof(G, EventMusicQueue));
    // <conv.chunks.Comment object at 0x10185c5f0>
    lda(0x0);
    sta(offsetof(G, EntrancePage));
    sta(offsetof(G, AreaNumber));
    sta(offsetof(G, LevelNumber));
    sta(offsetof(G, AltEntranceControl));
    inc(offsetof(G, Hidden1UpFlag));
    inc(offsetof(G, FetchNewGameTimerFlag));
    JMP(ExPipeE);
}

int ExPipeE() {
    // <conv.chunks.Comment object at 0x10185c770>
    // <conv.chunks.Comment object at 0x10185c920>
    // <conv.chunks.Comment object at 0x10185ca40>
    // <conv.chunks.Comment object at 0x10185cb60>
    // <conv.chunks.Comment object at 0x10185cc80>
    // <conv.chunks.Comment object at 0x10185cda0>
    // <conv.chunks.Comment object at 0x10185cec0>
    rts();
    JMP(ImpedePlayerMove);
}

int ImpedePlayerMove() {
    lda(0x0);
    ldy(offsetof(G, Player_X_Speed));
    ldx(0x0);
    dex();
    BNE(RImpd);
    inx();
    cpy(0x0);
    BMI(ExIPM);
    lda(0xff);
    JMP(NXSpd);
    JMP(RImpd);
}

int RImpd() {
    // <conv.chunks.Comment object at 0x10185d010>
    // <conv.chunks.Comment object at 0x10185d0a0>
    // <conv.chunks.Comment object at 0x10185d280>
    // <conv.chunks.Comment object at 0x10185d250>
    // <conv.chunks.Comment object at 0x10185d430>
    // <conv.chunks.Comment object at 0x10185d5b0>
    // <conv.chunks.Comment object at 0x10185d640>
    // <conv.chunks.Comment object at 0x10185d6d0>
    // <conv.chunks.Comment object at 0x10185d8b0>
    // <conv.chunks.Comment object at 0x10185d940>
    // <conv.chunks.Comment object at 0x10185db20>
    ldx(0x2);
    cpy(0x1);
    BPL(ExIPM);
    lda(0x1);
    JMP(NXSpd);
}

int NXSpd() {
    ldy(0x10);
    sty(offsetof(G, SideCollisionTimer));
    // <conv.chunks.Comment object at 0x10185e0f0>
    ldy(0x0);
    sty(offsetof(G, Player_X_Speed));
    cmp(0x0);
    BPL(PlatF);
    dey();
    JMP(PlatF);
}

int PlatF() {
    // <conv.chunks.Comment object at 0x10185e300>
    // <conv.chunks.Comment object at 0x10185e4b0>
    // <conv.chunks.Comment object at 0x10185e540>
    // <conv.chunks.Comment object at 0x10185e750>
    // <conv.chunks.Comment object at 0x10185e7e0>
    sty(0x0);
    clc();
    adc(offsetof(G, Player_X_Position));
    sta(offsetof(G, Player_X_Position));
    // <conv.chunks.Comment object at 0x10185e9f0>
    // <conv.chunks.Comment object at 0x10185eb10>
    lda(offsetof(G, Player_PageLoc));
    adc(0x0);
    sta(offsetof(G, Player_PageLoc));
    JMP(ExIPM);
}

int ExIPM() {
    // <conv.chunks.Comment object at 0x10185ed50>
    // <conv.chunks.Comment object at 0x10185ede0>
    // <conv.chunks.Comment object at 0x10185ef60>
    txa();
    eor(0xff);
    anda(offsetof(G, Player_CollisionBits));
    sta(offsetof(G, Player_CollisionBits));
    // <conv.chunks.Comment object at 0x10185f0e0>
    // <conv.chunks.Comment object at 0x10185f290>
    rts();
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, SolidMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x10185f500>
    // <conv.chunks.Comment object at 0x10185f830>
    rts();
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, ClimbMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x10185faa0>
    // <conv.chunks.Comment object at 0x10185fdd0>
    rts();
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(0xc2);
    BEQ(CoinSd);
    cmp(0xc3);
    BEQ(CoinSd);
    clc();
    // <conv.chunks.Comment object at 0x10185ffe0>
    // <conv.chunks.Comment object at 0x1018680b0>
    // <conv.chunks.Comment object at 0x101868290>
    // <conv.chunks.Comment object at 0x101868320>
    // <conv.chunks.Comment object at 0x101868530>
    rts();
    JMP(CoinSd);
}

int CoinSd() {
    lda(offsetof(G, Sfx_CoinGrab));
    sta(offsetof(G, Square2SoundQueue));
    // <conv.chunks.Comment object at 0x1018687a0>
    rts();
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x1018689b0>
    // <conv.chunks.Comment object at 0x101868a40>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x101868c20>
    rol();
    tax();
    tya();
    JMP(ExEBG);
}

int ExEBG() {
    // <conv.chunks.Comment object at 0x101868d70>
    // <conv.chunks.Comment object at 0x101868e30>
    // <conv.chunks.Comment object at 0x101868ef0>
    rts();
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x101869160>
    anda(0b100000);
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // <conv.chunks.Comment object at 0x1018697c0>
    // <conv.chunks.Comment object at 0x101869910>
    // <conv.chunks.Comment object at 0x101869a30>
    ldy(offsetof(G, Enemy_ID), x);
    cpy(offsetof(G, Spiny));
    // <conv.chunks.Comment object at 0x101869ca0>
    BNE(DoIDCheckBGColl);
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x10186a000>
    BCC(ExEBG);
    JMP(DoIDCheckBGColl);
}

int DoIDCheckBGColl() {
    cpy(offsetof(G, GreenParatroopaJump));
    BNE(HBChk);
    JMP(EnemyJump);
    JMP(HBChk);
}

int HBChk() {
    // <conv.chunks.Comment object at 0x10186a270>
    // <conv.chunks.Comment object at 0x10186a390>
    // <conv.chunks.Comment object at 0x10186a4e0>
    // <conv.chunks.Comment object at 0x10186a600>
    cpy(offsetof(G, HammerBro));
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // <conv.chunks.Comment object at 0x10186a780>
    // <conv.chunks.Comment object at 0x10186a8d0>
    // <conv.chunks.Comment object at 0x10186a9f0>
    cpy(offsetof(G, Spiny));
    BEQ(YesIn);
    cpy(offsetof(G, PowerUpObject));
    // <conv.chunks.Comment object at 0x10186acc0>
    BEQ(YesIn);
    cpy(0x7);
    // <conv.chunks.Comment object at 0x10186af00>
    BCS(ExEBGChk);
    JMP(YesIn);
}

int YesIn() {
    // <conv.chunks.Comment object at 0x10186b110>
    JSR(ChkUnderEnemy);
    BNE(HandleEToBGCollision);
    JMP(NoEToBGCollision);
}

int NoEToBGCollision() {
    JMP(ChkForRedKoopa);
    JMP(HandleEToBGCollision);
}

int HandleEToBGCollision() {
    JSR(ChkForNonSolids);
    BEQ(NoEToBGCollision);
    // <conv.chunks.Comment object at 0x10186b3e0>
    // <conv.chunks.Comment object at 0x10186b530>
    // <conv.chunks.Comment object at 0x10186b590>
    // <conv.chunks.Comment object at 0x10186b6b0>
    cmp(0x23);
    BNE(LandEnemyProperly);
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x10186b830>
    // <conv.chunks.Comment object at 0x10186ba10>
    // <conv.chunks.Comment object at 0x10186baa0>
    // <conv.chunks.Comment object at 0x10186bb90>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x10186bec0>
    BCS(ChkToStunEnemies);
    cmp(offsetof(G, Goomba));
    // <conv.chunks.Comment object at 0x101874110>
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1018744a0>
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1018746e0>
    BCC(SetStun);
    cmp(0x11);
    BCS(SetStun);
    cmp(0xa);
    BCC(Demote);
    cmp(offsetof(G, PiranhaPlant));
    BCC(SetStun);
    JMP(Demote);
}

int Demote() {
    // <conv.chunks.Comment object at 0x101874920>
    // <conv.chunks.Comment object at 0x1018749b0>
    // <conv.chunks.Comment object at 0x101874b90>
    // <conv.chunks.Comment object at 0x101874c20>
    // <conv.chunks.Comment object at 0x101874e00>
    // <conv.chunks.Comment object at 0x101874f20>
    // <conv.chunks.Comment object at 0x101875070>
    anda(0b1);
    sta(offsetof(G, Enemy_ID), x);
    JMP(SetStun);
}

int SetStun() {
    // <conv.chunks.Comment object at 0x1018751f0>
    // <conv.chunks.Comment object at 0x101875340>
    lda(offsetof(G, Enemy_State), x);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x1018754f0>
    ora(0b10);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x101875700>
    dec(offsetof(G, Enemy_Y_Position), x);
    dec(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101875970>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Bloober));
    // <conv.chunks.Comment object at 0x101875be0>
    BEQ(SetWYSpd);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x101875e20>
    ldy(offsetof(G, AreaType));
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // <conv.chunks.Comment object at 0x101876030>
    // <conv.chunks.Comment object at 0x101876180>
    lda(0xff);
    JMP(SetNotW);
}

int SetNotW() {
    // <conv.chunks.Comment object at 0x101876240>
    sta(offsetof(G, Enemy_Y_Speed), x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(ChkBBill);
    iny();
    JMP(ChkBBill);
}

int ChkBBill() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, BulletBill_CannonVar));
    // <conv.chunks.Comment object at 0x1018769c0>
    BEQ(NoCDirF);
    cmp(offsetof(G, BulletBill_FrenzyVar));
    BEQ(NoCDirF);
    sty(offsetof(G, Enemy_MovingDir), x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // <conv.chunks.Comment object at 0x101876c00>
    // <conv.chunks.Comment object at 0x101876d20>
    // <conv.chunks.Comment object at 0x101876e70>
    // <conv.chunks.Comment object at 0x101876fc0>
    dey();
    lda(offsetof(G, EnemyBGCXSpdData), y);
    sta(offsetof(G, Enemy_X_Speed), x);
    JMP(ExEBGChk);
}

int ExEBGChk() {
    rts();
    JMP(LandEnemyProperly);
}

int LandEnemyProperly() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x101877470>
    // <conv.chunks.Comment object at 0x101877500>
    sec();
    sbc(0x8);
    cmp(0x5);
    BCS(ChkForRedKoopa);
    // <conv.chunks.Comment object at 0x101877680>
    // <conv.chunks.Comment object at 0x101877710>
    // <conv.chunks.Comment object at 0x101877830>
    lda(offsetof(G, Enemy_State), x);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x101877b00>
    BNE(LandEnemyInitState);
    lda(offsetof(G, Enemy_State), x);
    asl();
    // <conv.chunks.Comment object at 0x101877e60>
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}

int SChkA() {
    // <conv.chunks.Comment object at 0x101877fe0>
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}

int ChkLandedEnemyState() {
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1018801d0>
    BEQ(SChkA);
    cmp(0x5);
    BEQ(ProcEnemyDirection);
    cmp(0x3);
    BCS(ExSteChk);
    lda(offsetof(G, Enemy_State), x);
    cmp(0x2);
    BNE(ProcEnemyDirection);
    lda(0x10);
    ldy(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x101880440>
    // <conv.chunks.Comment object at 0x1018804d0>
    // <conv.chunks.Comment object at 0x101880680>
    // <conv.chunks.Comment object at 0x101880710>
    // <conv.chunks.Comment object at 0x1018808c0>
    // <conv.chunks.Comment object at 0x101880a10>
    // <conv.chunks.Comment object at 0x101880aa0>
    // <conv.chunks.Comment object at 0x101880c50>
    // <conv.chunks.Comment object at 0x101880ce0>
    cpy(offsetof(G, Spiny));
    BNE(SetForStn);
    lda(0x0);
    JMP(SetForStn);
}

int SetForStn() {
    // <conv.chunks.Comment object at 0x101880f20>
    // <conv.chunks.Comment object at 0x101881100>
    // <conv.chunks.Comment object at 0x101881190>
    sta(offsetof(G, EnemyIntervalTimer), x);
    lda(0x3);
    sta(offsetof(G, Enemy_State), x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // <conv.chunks.Comment object at 0x1018813a0>
    // <conv.chunks.Comment object at 0x101881430>
    // <conv.chunks.Comment object at 0x101881610>
    // <conv.chunks.Comment object at 0x101881730>
    rts();
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Goomba));
    // <conv.chunks.Comment object at 0x101881850>
    // <conv.chunks.Comment object at 0x1018819a0>
    BEQ(LandEnemyInitState);
    cmp(offsetof(G, Spiny));
    BNE(InvtD);
    // <conv.chunks.Comment object at 0x101881be0>
    // <conv.chunks.Comment object at 0x101881c70>
    lda(0x1);
    sta(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x101881ee0>
    lda(0x8);
    sta(offsetof(G, Enemy_X_Speed), x);
    // <conv.chunks.Comment object at 0x101882120>
    lda(offsetof(G, FrameCounter));
    anda(0b111);
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // <conv.chunks.Comment object at 0x1018823f0>
    // <conv.chunks.Comment object at 0x101882510>
    // <conv.chunks.Comment object at 0x101882630>
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp(offsetof(G, Enemy_MovingDir), x);
    // <conv.chunks.Comment object at 0x101882bd0>
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x101882f60>
    lda(offsetof(G, Enemy_State), x);
    anda(0b10000000);
    // <conv.chunks.Comment object at 0x1018831a0>
    BNE(NMovShellFallBit);
    lda(0x0);
    sta(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x1018833b0>
    // <conv.chunks.Comment object at 0x101883440>
    rts();
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda(offsetof(G, Enemy_State), x);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x1018836e0>
    // <conv.chunks.Comment object at 0x101883830>
    sta(offsetof(G, Enemy_State), x);
    rts();
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x101883b60>
    cmp(offsetof(G, RedKoopa));
    BNE(Chk2MSBSt);
    // <conv.chunks.Comment object at 0x101883da0>
    lda(offsetof(G, Enemy_State), x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // <conv.chunks.Comment object at 0x101883fe0>
    // <conv.chunks.Comment object at 0x10188c140>
    lda(offsetof(G, Enemy_State), x);
    tay();
    asl();
    BCC(GetSteFromD);
    // <conv.chunks.Comment object at 0x10188c380>
    // <conv.chunks.Comment object at 0x10188c410>
    lda(offsetof(G, Enemy_State), x);
    ora(0b1000000);
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // <conv.chunks.Comment object at 0x10188c680>
    // <conv.chunks.Comment object at 0x10188c7a0>
    // <conv.chunks.Comment object at 0x10188c8c0>
    lda(offsetof(G, EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // <conv.chunks.Comment object at 0x10188ca40>
    sta(offsetof(G, Enemy_State), x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda(offsetof(G, Enemy_Y_Position), x);
    cmp(0x20);
    // <conv.chunks.Comment object at 0x10188cc80>
    // <conv.chunks.Comment object at 0x10188cdd0>
    BCC(ExESdeC);
    ldy(0x16);
    lda(0x2);
    sta(0xeb);
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // <conv.chunks.Comment object at 0x10188d010>
    // <conv.chunks.Comment object at 0x10188d0a0>
    // <conv.chunks.Comment object at 0x10188d280>
    // <conv.chunks.Comment object at 0x10188d310>
    lda(0xeb);
    cmp(offsetof(G, Enemy_MovingDir), x);
    BNE(NextSdeC);
    lda(0x1);
    JSR(BlockBufferChk_Enemy);
    BEQ(NextSdeC);
    JSR(ChkForNonSolids);
    BNE(ChkForBump_HammerBroJ);
    JMP(NextSdeC);
}

int NextSdeC() {
    // <conv.chunks.Comment object at 0x10188d460>
    // <conv.chunks.Comment object at 0x10188d610>
    // <conv.chunks.Comment object at 0x10188d730>
    // <conv.chunks.Comment object at 0x10188d7c0>
    // <conv.chunks.Comment object at 0x10188d970>
    // <conv.chunks.Comment object at 0x10188da90>
    // <conv.chunks.Comment object at 0x10188dbb0>
    // <conv.chunks.Comment object at 0x10188dcd0>
    dec(0xeb);
    iny();
    cpy(0x18);
    BCC(SdeCLoop);
    JMP(ExESdeC);
}

int ExESdeC() {
    rts();
    JMP(ChkForBump_HammerBroJ);
}

int ChkForBump_HammerBroJ() {
    cpx(0x5);
    BEQ(NoBump);
    lda(offsetof(G, Enemy_State), x);
    asl();
    // <conv.chunks.Comment object at 0x10188e210>
    // <conv.chunks.Comment object at 0x10188e2a0>
    // <conv.chunks.Comment object at 0x10188e480>
    // <conv.chunks.Comment object at 0x10188e600>
    BCC(NoBump);
    lda(offsetof(G, Sfx_Bump));
    sta(offsetof(G, Square1SoundQueue));
    JMP(NoBump);
}

int NoBump() {
    // <conv.chunks.Comment object at 0x10188e7b0>
    // <conv.chunks.Comment object at 0x10188e8d0>
    // <conv.chunks.Comment object at 0x10188e9f0>
    lda(offsetof(G, Enemy_ID), x);
    cmp(0x5);
    BNE(InvEnemyDir);
    // <conv.chunks.Comment object at 0x10188ec00>
    lda(0x0);
    sta(0x0);
    ldy(0xfa);
    JMP(SetHJ);
    JMP(InvEnemyDir);
}

int InvEnemyDir() {
    JMP(RXSpd);
    JMP(PlayerEnemyDiff);
}

int PlayerEnemyDiff() {
    lda(offsetof(G, Enemy_X_Position), x);
    sec();
    sbc(offsetof(G, Player_X_Position));
    sta(0x0);
    // <conv.chunks.Comment object at 0x10188f260>
    // <conv.chunks.Comment object at 0x10188f3e0>
    // <conv.chunks.Comment object at 0x10188f440>
    // <conv.chunks.Comment object at 0x10188f5c0>
    // <conv.chunks.Comment object at 0x10188f650>
    // <conv.chunks.Comment object at 0x10188f7a0>
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(offsetof(G, Player_PageLoc));
    // <conv.chunks.Comment object at 0x10188f9b0>
    rts();
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x10188fbc0>
    lda(offsetof(G, Enemy_Y_Position), x);
    anda(0b11110000);
    ora(0b1000);
    sta(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x10188fe00>
    // <conv.chunks.Comment object at 0x10188ff20>
    // <conv.chunks.Comment object at 0x101894080>
    rts();
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda(offsetof(G, Enemy_Y_Position), x);
    clc();
    // <conv.chunks.Comment object at 0x101894290>
    // <conv.chunks.Comment object at 0x101894410>
    adc(0x3e);
    cmp(0x44);
    rts();
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // <conv.chunks.Comment object at 0x1018947a0>
    // <conv.chunks.Comment object at 0x1018948c0>
    lda(offsetof(G, Enemy_Y_Speed), x);
    clc();
    // <conv.chunks.Comment object at 0x101894b60>
    adc(0x2);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x101894c50>
    BCC(DoSide);
    JSR(ChkUnderEnemy);
    BEQ(DoSide);
    JSR(ChkForNonSolids);
    BEQ(DoSide);
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x101894f20>
    // <conv.chunks.Comment object at 0x101895040>
    // <conv.chunks.Comment object at 0x101895190>
    // <conv.chunks.Comment object at 0x1018952b0>
    // <conv.chunks.Comment object at 0x101895400>
    lda(0xfd);
    sta(offsetof(G, Enemy_Y_Speed), x);
    JMP(DoSide);
}

int DoSide() {
    // <conv.chunks.Comment object at 0x101895580>
    // <conv.chunks.Comment object at 0x101895760>
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}

int HammerBroBGColl() {
    JSR(ChkUnderEnemy);
    // <conv.chunks.Comment object at 0x101895940>
    BEQ(NoUnderHammerBro);
    cmp(0x23);
    // <conv.chunks.Comment object at 0x101895b50>
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(0xfc);
    // <conv.chunks.Comment object at 0x101895d90>
    // <conv.chunks.Comment object at 0x101895eb0>
    sta(offsetof(G, Enemy_Y_Speed), x);
    rts();
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda(offsetof(G, EnemyFrameTimer), x);
    BNE(NoUnderHammerBro);
    // <conv.chunks.Comment object at 0x1018961b0>
    // <conv.chunks.Comment object at 0x101896300>
    lda(offsetof(G, Enemy_State), x);
    anda(0b10001000);
    sta(offsetof(G, Enemy_State), x);
    JSR(EnemyLanding);
    JMP(DoEnemySideCheck);
    JMP(NoUnderHammerBro);
}

int NoUnderHammerBro() {
    lda(offsetof(G, Enemy_State), x);
    ora(0x1);
    // <conv.chunks.Comment object at 0x101896a20>
    // <conv.chunks.Comment object at 0x101896b70>
    sta(offsetof(G, Enemy_State), x);
    rts();
    JMP(ChkUnderEnemy);
}

int ChkUnderEnemy() {
    lda(0x0);
    ldy(0x15);
    JMP(BlockBufferChk_Enemy);
    JMP(ChkForNonSolids);
}

int ChkForNonSolids() {
    cmp(0x26);
    // <conv.chunks.Comment object at 0x101897200>
    BEQ(NSFnd);
    cmp(0xc2);
    // <conv.chunks.Comment object at 0x101897440>
    BEQ(NSFnd);
    cmp(0xc3);
    // <conv.chunks.Comment object at 0x101897680>
    BEQ(NSFnd);
    cmp(0x5f);
    // <conv.chunks.Comment object at 0x1018978c0>
    BEQ(NSFnd);
    cmp(0x60);
    JMP(NSFnd);
}

int NSFnd() {
    rts();
    JMP(FireballBGCollision);
}

int FireballBGCollision() {
    lda(offsetof(G, Fireball_Y_Position), x);
    // <conv.chunks.Comment object at 0x101897d70>
    cmp(0x18);
    BCC(ClearBounceFlag);
    JSR(BlockBufferChk_FBall);
    BEQ(ClearBounceFlag);
    JSR(ChkForNonSolids);
    BEQ(ClearBounceFlag);
    lda(offsetof(G, Fireball_Y_Speed), x);
    BMI(InitFireballExplode);
    lda(offsetof(G, FireballBouncingFlag), x);
    BNE(InitFireballExplode);
    // <conv.chunks.Comment object at 0x101897f20>
    // <conv.chunks.Comment object at 0x1018a4110>
    // <conv.chunks.Comment object at 0x1018a4230>
    // <conv.chunks.Comment object at 0x1018a4350>
    // <conv.chunks.Comment object at 0x1018a4470>
    // <conv.chunks.Comment object at 0x1018a4590>
    // <conv.chunks.Comment object at 0x1018a46e0>
    // <conv.chunks.Comment object at 0x1018a4800>
    // <conv.chunks.Comment object at 0x1018a4950>
    lda(0xfd);
    sta(offsetof(G, Fireball_Y_Speed), x);
    // <conv.chunks.Comment object at 0x1018a4ad0>
    lda(0x1);
    sta(offsetof(G, FireballBouncingFlag), x);
    // <conv.chunks.Comment object at 0x1018a4d10>
    lda(offsetof(G, Fireball_Y_Position), x);
    anda(0xf8);
    sta(offsetof(G, Fireball_Y_Position), x);
    rts();
    JMP(ClearBounceFlag);
}

int ClearBounceFlag() {
    lda(0x0);
    sta(offsetof(G, FireballBouncingFlag), x);
    rts();
    JMP(InitFireballExplode);
}

int InitFireballExplode() {
    lda(0x80);
    sta(offsetof(G, Fireball_State), x);
    // <conv.chunks.Comment object at 0x1018a5760>
    lda(offsetof(G, Sfx_Bump));
    sta(offsetof(G, Square1SoundQueue));
    rts();
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1018a5e50>
    // <conv.chunks.Comment object at 0x1018a79b0>
    adc(0x7);
    tax();
    ldy(0x2);
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1018a7e90>
    // <conv.chunks.Comment object at 0x1018a7f50>
    adc(0x9);
    tax();
    ldy(0x6);
    JMP(FBallB);
}

int FBallB() {
    // <conv.chunks.Comment object at 0x1018ac1a0>
    // <conv.chunks.Comment object at 0x1018ac230>
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}

int GetEnemyBoundBox() {
    ldy(0x48);
    // <conv.chunks.Comment object at 0x1018ac590>
    sty(0x0);
    ldy(0x44);
    // <conv.chunks.Comment object at 0x1018ac620>
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x1018ac9e0>
    sty(0x0);
    ldy(0x4);
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda(offsetof(G, Enemy_X_Position), x);
    sec();
    // <conv.chunks.Comment object at 0x1018acd40>
    // <conv.chunks.Comment object at 0x1018acec0>
    sbc(offsetof(G, ScreenLeft_X_Pos));
    sta(0x1);
    lda(offsetof(G, Enemy_PageLoc), x);
    sbc(offsetof(G, ScreenLeft_PageLoc));
    BMI(CMBits);
    // <conv.chunks.Comment object at 0x1018ad070>
    // <conv.chunks.Comment object at 0x1018ad100>
    // <conv.chunks.Comment object at 0x1018ad2b0>
    // <conv.chunks.Comment object at 0x1018ad3d0>
    ora(0x1);
    BEQ(CMBits);
    ldy(0x0);
    JMP(CMBits);
}

int CMBits() {
    // <conv.chunks.Comment object at 0x1018ad520>
    // <conv.chunks.Comment object at 0x1018ad790>
    // <conv.chunks.Comment object at 0x1018ad820>
    tya();
    anda(offsetof(G, Enemy_OffscreenBits));
    sta(offsetof(G, EnemyOffscrBitsMasked), x);
    BNE(MoveBoundBoxOffscreen);
    JMP(SetupEOffsetFBBox);
    JMP(LargePlatformBoundBox);
}

int LargePlatformBoundBox() {
    inx();
    JSR(GetXOffscreenBits);
    dex();
    cmp(0xfe);
    BCS(MoveBoundBoxOffscreen);
    JMP(SetupEOffsetFBBox);
}

int SetupEOffsetFBBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1018ae3c0>
    // <conv.chunks.Comment object at 0x1018ae480>
    adc(0x1);
    tax();
    ldy(0x1);
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}

int MoveBoundBoxOffscreen() {
    txa();
    // <conv.chunks.Comment object at 0x1018aea50>
    asl();
    asl();
    tay();
    // <conv.chunks.Comment object at 0x1018aec30>
    lda(0xff);
    sta(offsetof(G, EnemyBoundingBoxCoord), y);
    // <conv.chunks.Comment object at 0x1018aed20>
    sta(((offsetof(G, EnemyBoundingBoxCoord)) + (1)), y);
    sta(((offsetof(G, EnemyBoundingBoxCoord)) + (2)), y);
    sta(((offsetof(G, EnemyBoundingBoxCoord)) + (3)), y);
    rts();
    JMP(BoundingBoxCore);
}

int BoundingBoxCore() {
    stx(0x0);
    lda(offsetof(G, SprObject_Rel_YPos), y);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1018af590>
    // <conv.chunks.Comment object at 0x1018af620>
    // <conv.chunks.Comment object at 0x1018af800>
    lda(offsetof(G, SprObject_Rel_XPos), y);
    sta(0x1);
    txa();
    // <conv.chunks.Comment object at 0x1018afaa0>
    asl();
    asl();
    pha();
    tay();
    lda(offsetof(G, SprObj_BoundBoxCtrl), x);
    asl();
    // <conv.chunks.Comment object at 0x1018afda0>
    // <conv.chunks.Comment object at 0x1018afe30>
    // <conv.chunks.Comment object at 0x1018affb0>
    asl();
    tax();
    lda(0x1);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    sta(offsetof(G, BoundingBox_UL_Corner), y);
    // <conv.chunks.Comment object at 0x1018b41d0>
    // <conv.chunks.Comment object at 0x1018b41a0>
    // <conv.chunks.Comment object at 0x1018b4380>
    // <conv.chunks.Comment object at 0x1018b44d0>
    lda(0x1);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(offsetof(G, BoundingBox_LR_Corner), y);
    inx();
    // <conv.chunks.Comment object at 0x1018b47a0>
    // <conv.chunks.Comment object at 0x1018b49b0>
    // <conv.chunks.Comment object at 0x1018b4b30>
    iny();
    lda(0x2);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    // <conv.chunks.Comment object at 0x1018b4c80>
    // <conv.chunks.Comment object at 0x1018b4c50>
    // <conv.chunks.Comment object at 0x1018b4e30>
    sta(offsetof(G, BoundingBox_UL_Corner), y);
    lda(0x2);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(offsetof(G, BoundingBox_LR_Corner), y);
    pla();
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x1018b5220>
    // <conv.chunks.Comment object at 0x1018b5430>
    // <conv.chunks.Comment object at 0x1018b55b0>
    // <conv.chunks.Comment object at 0x1018b5670>
    // <conv.chunks.Comment object at 0x1018b5730>
    rts();
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda(offsetof(G, ScreenLeft_X_Pos));
    clc();
    // <conv.chunks.Comment object at 0x1018b58e0>
    // <conv.chunks.Comment object at 0x1018b5a30>
    adc(0x80);
    sta(0x2);
    lda(offsetof(G, ScreenLeft_PageLoc));
    adc(0x0);
    // <conv.chunks.Comment object at 0x1018b5b20>
    // <conv.chunks.Comment object at 0x1018b5dc0>
    sta(0x1);
    lda(offsetof(G, SprObject_X_Position), x);
    cmp(0x2);
    lda(offsetof(G, SprObject_PageLoc), x);
    sbc(0x1);
    BCC(CheckLeftScreenBBox);
    lda(offsetof(G, BoundingBox_DR_XPos), y);
    BMI(NoOfs);
    lda(0xff);
    ldx(offsetof(G, BoundingBox_UL_XPos), y);
    BMI(SORte);
    sta(offsetof(G, BoundingBox_UL_XPos), y);
    JMP(SORte);
}

int SORte() {
    // <conv.chunks.Comment object at 0x1018b5e50>
    // <conv.chunks.Comment object at 0x1018b6150>
    // <conv.chunks.Comment object at 0x1018b61e0>
    // <conv.chunks.Comment object at 0x1018b63c0>
    // <conv.chunks.Comment object at 0x1018b6450>
    // <conv.chunks.Comment object at 0x1018b65d0>
    // <conv.chunks.Comment object at 0x1018b6720>
    // <conv.chunks.Comment object at 0x1018b6870>
    // <conv.chunks.Comment object at 0x1018b6900>
    // <conv.chunks.Comment object at 0x1018b6ae0>
    // <conv.chunks.Comment object at 0x1018b6c30>
    // <conv.chunks.Comment object at 0x1018b6d80>
    sta(offsetof(G, BoundingBox_DR_XPos), y);
    JMP(NoOfs);
}

int NoOfs() {
    // <conv.chunks.Comment object at 0x1018b6f30>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda(offsetof(G, BoundingBox_UL_XPos), y);
    BPL(NoOfs2);
    cmp(0xa0);
    BCC(NoOfs2);
    // <conv.chunks.Comment object at 0x1018b7170>
    // <conv.chunks.Comment object at 0x1018b72c0>
    // <conv.chunks.Comment object at 0x1018b7410>
    // <conv.chunks.Comment object at 0x1018b74a0>
    lda(0x0);
    ldx(offsetof(G, BoundingBox_DR_XPos), y);
    BPL(SOLft);
    sta(offsetof(G, BoundingBox_DR_XPos), y);
    JMP(SOLft);
}

int SOLft() {
    // <conv.chunks.Comment object at 0x1018b76e0>
    // <conv.chunks.Comment object at 0x1018b78c0>
    // <conv.chunks.Comment object at 0x1018b7a10>
    // <conv.chunks.Comment object at 0x1018b7b60>
    sta(offsetof(G, BoundingBox_UL_XPos), y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // <conv.chunks.Comment object at 0x1018b7d10>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(PlayerCollisionCore);
}

int PlayerCollisionCore() {
    ldx(0x0);
    JMP(SprObjectCollisionCore);
}

int SprObjectCollisionCore() {
    sty(0x6);
    // <conv.chunks.Comment object at 0x1018bc1a0>
    lda(0x1);
    sta(0x7);
    JMP(CollisionCoreLoop);
}

int CollisionCoreLoop() {
    lda(offsetof(G, BoundingBox_UL_Corner), y);
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BCS(FirstBoxGreater);
    cmp(offsetof(G, BoundingBox_LR_Corner), x);
    BCC(SecondBoxVerticalChk);
    BEQ(CollisionFound);
    lda(offsetof(G, BoundingBox_LR_Corner), y);
    cmp(offsetof(G, BoundingBox_UL_Corner), y);
    BCC(CollisionFound);
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    ldy(0x6);
    rts();
    JMP(SecondBoxVerticalChk);
}

int SecondBoxVerticalChk() {
    lda(offsetof(G, BoundingBox_LR_Corner), x);
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BCC(CollisionFound);
    lda(offsetof(G, BoundingBox_LR_Corner), y);
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x1018bd460>
    // <conv.chunks.Comment object at 0x1018bd5b0>
    // <conv.chunks.Comment object at 0x1018bd700>
    // <conv.chunks.Comment object at 0x1018bd820>
    // <conv.chunks.Comment object at 0x1018bd970>
    // <conv.chunks.Comment object at 0x1018bdac0>
    // <conv.chunks.Comment object at 0x1018bdc10>
    rts();
    JMP(FirstBoxGreater);
}

int FirstBoxGreater() {
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BEQ(CollisionFound);
    cmp(offsetof(G, BoundingBox_LR_Corner), x);
    BCC(CollisionFound);
    BEQ(CollisionFound);
    cmp(offsetof(G, BoundingBox_LR_Corner), y);
    BCC(NoCollisionFound);
    // <conv.chunks.Comment object at 0x1018bddc0>
    // <conv.chunks.Comment object at 0x1018bdf10>
    // <conv.chunks.Comment object at 0x1018be030>
    // <conv.chunks.Comment object at 0x1018be180>
    // <conv.chunks.Comment object at 0x1018be2a0>
    // <conv.chunks.Comment object at 0x1018be3c0>
    // <conv.chunks.Comment object at 0x1018be510>
    BEQ(NoCollisionFound);
    lda(offsetof(G, BoundingBox_LR_Corner), y);
    cmp(offsetof(G, BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    JMP(NoCollisionFound);
}

int NoCollisionFound() {
    clc();
    ldy(0x6);
    rts();
    JMP(CollisionFound);
}

int CollisionFound() {
    inx();
    iny();
    dec(0x7);
    BPL(CollisionCoreLoop);
    sec();
    ldy(0x6);
    // <conv.chunks.Comment object at 0x1018bee10>
    // <conv.chunks.Comment object at 0x1018beed0>
    // <conv.chunks.Comment object at 0x1018bef90>
    // <conv.chunks.Comment object at 0x1018bf020>
    // <conv.chunks.Comment object at 0x1018bf1d0>
    // <conv.chunks.Comment object at 0x1018bf290>
    rts();
    JMP(BlockBufferChk_Enemy);
}

int BlockBufferChk_Enemy() {
    pha();
    // <conv.chunks.Comment object at 0x1018bf440>
    // <conv.chunks.Comment object at 0x1018bf4a0>
    // <conv.chunks.Comment object at 0x1018bf500>
    // <conv.chunks.Comment object at 0x1018bf590>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1018bf6e0>
    adc(0x1);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x1018bf920>
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(0xd);
    // <conv.chunks.Comment object at 0x1018bfbc0>
    // <conv.chunks.Comment object at 0x1018bfc50>
    tax();
    ldy(0x1b);
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(0x1a);
    // <conv.chunks.Comment object at 0x1018cc0e0>
    txa();
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x1018cc320>
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // <conv.chunks.Comment object at 0x1018cc4d0>
    lda(0x0);
    JMP(BBChk_E);
}

int BBChk_E() {
    // <conv.chunks.Comment object at 0x1018cc5c0>
    JSR(BlockBufferCollision);
    ldx(offsetof(G, ObjectOffset));
    cmp(0x0);
    // <conv.chunks.Comment object at 0x1018cc7d0>
    // <conv.chunks.Comment object at 0x1018cc8f0>
    rts();
    JMP(BlockBufferColli_Feet);
}

int BlockBufferColli_Feet() {
    iny();
    JMP(BlockBufferColli_Head);
}

int BlockBufferColli_Head() {
    lda(0x0);
    JMP(BlockBufferColli_Side);
}

int BlockBufferColli_Side() {
    lda(0x1);
    ldx(0x0);
    JMP(BlockBufferCollision);
}

int BlockBufferCollision() {
    pha();
    sty(0x4);
    lda(offsetof(G, BlockBuffer_X_Adder), y);
    clc();
    // <conv.chunks.Comment object at 0x1018cf230>
    // <conv.chunks.Comment object at 0x1018cf2f0>
    // <conv.chunks.Comment object at 0x1018cf380>
    // <conv.chunks.Comment object at 0x1018cf560>
    adc(offsetof(G, SprObject_X_Position), x);
    sta(0x5);
    // <conv.chunks.Comment object at 0x1018cf740>
    lda(offsetof(G, SprObject_PageLoc), x);
    adc(0x0);
    anda(0x1);
    lsr();
    ora(0x5);
    ror();
    lsr();
    lsr();
    lsr();
    JSR(GetBlockBufferAddr);
    ldy(0x4);
    lda(offsetof(G, SprObject_Y_Position), x);
    // <conv.chunks.Comment object at 0x1018cf950>
    // <conv.chunks.Comment object at 0x1018cf9e0>
    // <conv.chunks.Comment object at 0x1018cfbc0>
    // <conv.chunks.Comment object at 0x1018cfc80>
    // <conv.chunks.Comment object at 0x1018cfc50>
    // <conv.chunks.Comment object at 0x1018cfe60>
    // <conv.chunks.Comment object at 0x1018cff20>
    // <conv.chunks.Comment object at 0x1018cffe0>
    // <conv.chunks.Comment object at 0x1018d40b0>
    // <conv.chunks.Comment object at 0x1018d4200>
    // <conv.chunks.Comment object at 0x1018d4290>
    clc();
    adc(offsetof(G, BlockBuffer_Y_Adder), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x1018d44d0>
    // <conv.chunks.Comment object at 0x1018d4620>
    sec();
    sbc(0x20);
    sta(0x2);
    tay();
    lda((0x6), y);
    sta(0x3);
    ldy(0x4);
    pla();
    BNE(RetXC);
    lda(offsetof(G, SprObject_Y_Position), x);
    JMP(RetYC);
    JMP(RetXC);
}

int RetXC() {
    // <conv.chunks.Comment object at 0x1018d47d0>
    // <conv.chunks.Comment object at 0x1018d4920>
    // <conv.chunks.Comment object at 0x1018d4860>
    // <conv.chunks.Comment object at 0x1018d4ad0>
    // <conv.chunks.Comment object at 0x1018d4c80>
    // <conv.chunks.Comment object at 0x1018d4b30>
    // <conv.chunks.Comment object at 0x1018d4d10>
    // <conv.chunks.Comment object at 0x1018d4f50>
    // <conv.chunks.Comment object at 0x1018d50a0>
    // <conv.chunks.Comment object at 0x1018d51f0>
    // <conv.chunks.Comment object at 0x1018d5340>
    lda(offsetof(G, SprObject_X_Position), x);
    JMP(RetYC);
}

int RetYC() {
    // <conv.chunks.Comment object at 0x1018d54f0>
    anda(0b1111);
    sta(0x4);
    lda(0x3);
    rts();
    JMP(DrawVine);
}

int DrawVine() {
    sty(0x0);
    lda(offsetof(G, Enemy_Rel_YPos));
    // <conv.chunks.Comment object at 0x1018d5b20>
    // <conv.chunks.Comment object at 0x1018d5d30>
    clc();
    adc(offsetof(G, VineYPosAdder), y);
    ldx(offsetof(G, VineObjOffset), y);
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    sty(0x2);
    JSR(SixSpriteStacker);
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x1018d5f40>
    // <conv.chunks.Comment object at 0x1018d6090>
    // <conv.chunks.Comment object at 0x1018d61e0>
    // <conv.chunks.Comment object at 0x1018d6360>
    // <conv.chunks.Comment object at 0x1018d63f0>
    // <conv.chunks.Comment object at 0x1018d6570>
    // <conv.chunks.Comment object at 0x1018d6690>
    sta(((offsetof(G, Sprite_X_Position)) + (8)), y);
    sta(((offsetof(G, Sprite_X_Position)) + (16)), y);
    clc();
    adc(0x6);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    sta(((offsetof(G, Sprite_X_Position)) + (12)), y);
    // <conv.chunks.Comment object at 0x1018d6c30>
    // <conv.chunks.Comment object at 0x1018d6cc0>
    // <conv.chunks.Comment object at 0x1018d6f60>
    sta(((offsetof(G, Sprite_X_Position)) + (20)), y);
    lda(0b100001);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x1018d7350>
    // <conv.chunks.Comment object at 0x1018d7470>
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    // <conv.chunks.Comment object at 0x1018d7980>
    // <conv.chunks.Comment object at 0x1018d7aa0>
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    ldx(0x5);
    JMP(VineTL);
}

int VineTL() {
    // <conv.chunks.Comment object at 0x1018e00b0>
    // <conv.chunks.Comment object at 0x1018e0140>
    lda(0xe1);
    sta(offsetof(G, Sprite_Tilenumber), y);
    iny();
    // <conv.chunks.Comment object at 0x1018e04a0>
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(0x2);
    lda(0x0);
    BNE(SkpVTop);
    // <conv.chunks.Comment object at 0x1018e0710>
    // <conv.chunks.Comment object at 0x1018e07a0>
    // <conv.chunks.Comment object at 0x1018e0920>
    // <conv.chunks.Comment object at 0x1018e08f0>
    // <conv.chunks.Comment object at 0x1018e0ad0>
    lda(0xe0);
    sta(offsetof(G, Sprite_Tilenumber), y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // <conv.chunks.Comment object at 0x1018e0ce0>
    // <conv.chunks.Comment object at 0x1018e0ec0>
    ldx(0x0);
    JMP(ChkFTop);
}

int ChkFTop() {
    // <conv.chunks.Comment object at 0x1018e0fb0>
    lda(offsetof(G, VineStart_Y_Position));
    sec();
    sbc(offsetof(G, Sprite_Y_Position), y);
    cmp(0x64);
    BCC(NextVSp);
    // <conv.chunks.Comment object at 0x1018e1250>
    // <conv.chunks.Comment object at 0x1018e13a0>
    // <conv.chunks.Comment object at 0x1018e1430>
    lda(0xf8);
    sta(offsetof(G, Sprite_Y_Position), y);
    JMP(NextVSp);
}

int NextVSp() {
    // <conv.chunks.Comment object at 0x1018e1670>
    // <conv.chunks.Comment object at 0x1018e1850>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x1018e1b50>
    // <conv.chunks.Comment object at 0x1018e1be0>
    BNE(ChkFTop);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1018e1e50>
    rts();
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(0x6);
    JMP(StkLp);
}

int StkLp() {
    // <conv.chunks.Comment object at 0x1018e2000>
    // <conv.chunks.Comment object at 0x1018e2090>
    sta(offsetof(G, Sprite_Data), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1018e2360>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1018e2540>
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x1018e2720>
    // <conv.chunks.Comment object at 0x1018e27b0>
    // <conv.chunks.Comment object at 0x1018e2930>
    rts();
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy(offsetof(G, Misc_SprDataOffset), x);
    // <conv.chunks.Comment object at 0x1018e35c0>
    lda(offsetof(G, TimerControl));
    BNE(ForceHPose);
    lda(offsetof(G, Misc_State), x);
    anda(0b1111111);
    cmp(0x1);
    BEQ(GetHPose);
    JMP(ForceHPose);
}

int ForceHPose() {
    // <conv.chunks.Comment object at 0x1018e3e60>
    // <conv.chunks.Comment object at 0x1018e3f80>
    // <conv.chunks.Comment object at 0x1018e8110>
    // <conv.chunks.Comment object at 0x1018e8230>
    // <conv.chunks.Comment object at 0x1018e82c0>
    // <conv.chunks.Comment object at 0x1018e8470>
    ldx(0x0);
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // <conv.chunks.Comment object at 0x1018e8530>
    // <conv.chunks.Comment object at 0x1018e8710>
    lda(offsetof(G, FrameCounter));
    lsr();
    // <conv.chunks.Comment object at 0x1018e8890>
    lsr();
    anda(0b11);
    tax();
    JMP(RenderH);
}

int RenderH() {
    // <conv.chunks.Comment object at 0x1018e89b0>
    // <conv.chunks.Comment object at 0x1018e8b00>
    // <conv.chunks.Comment object at 0x1018e8b90>
    lda(offsetof(G, Misc_Rel_YPos));
    clc();
    adc(offsetof(G, FirstSprYPos), x);
    sta(offsetof(G, Sprite_Y_Position), y);
    // <conv.chunks.Comment object at 0x1018e8da0>
    // <conv.chunks.Comment object at 0x1018e8ef0>
    clc();
    adc(offsetof(G, SecondSprYPos), x);
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    lda(offsetof(G, Misc_Rel_XPos));
    // <conv.chunks.Comment object at 0x1018e90d0>
    // <conv.chunks.Comment object at 0x1018e9220>
    // <conv.chunks.Comment object at 0x1018e9430>
    clc();
    adc(offsetof(G, FirstSprXPos), x);
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x1018e95e0>
    // <conv.chunks.Comment object at 0x1018e9730>
    clc();
    adc(offsetof(G, SecondSprXPos), x);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x1018e9910>
    // <conv.chunks.Comment object at 0x1018e9a60>
    lda(offsetof(G, FirstSprTilenum), x);
    sta(offsetof(G, Sprite_Tilenumber), y);
    // <conv.chunks.Comment object at 0x1018e9d90>
    lda(offsetof(G, SecondSprTilenum), x);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    // <conv.chunks.Comment object at 0x1018ea000>
    lda(offsetof(G, HammerSprAttrib), x);
    sta(offsetof(G, Sprite_Attributes), y);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x1018ea330>
    // <conv.chunks.Comment object at 0x1018ea480>
    // <conv.chunks.Comment object at 0x1018ea690>
    lda(offsetof(G, Misc_OffscreenBits));
    anda(0b11111100);
    BEQ(NoHOffscr);
    // <conv.chunks.Comment object at 0x1018ea8a0>
    // <conv.chunks.Comment object at 0x1018ea9c0>
    lda(0x0);
    sta(offsetof(G, Misc_State), x);
    // <conv.chunks.Comment object at 0x1018eab40>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // <conv.chunks.Comment object at 0x1018ead80>
    // <conv.chunks.Comment object at 0x1018eaf60>
    rts();
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x1018eb1a0>
    // <conv.chunks.Comment object at 0x1018eb8c0>
    // <conv.chunks.Comment object at 0x1018eb9e0>
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x1018ebbc0>
    // <conv.chunks.Comment object at 0x1018ebc50>
    sta(((offsetof(G, Sprite_X_Position)) + (8)), y);
    clc();
    adc(0xc);
    sta(0x5);
    lda(offsetof(G, Enemy_Y_Position), x);
    JSR(DumpTwoSpr);
    adc(0x8);
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    lda(offsetof(G, FlagpoleFNum_Y_Pos));
    sta(0x2);
    // <conv.chunks.Comment object at 0x1018f41a0>
    // <conv.chunks.Comment object at 0x1018f42f0>
    // <conv.chunks.Comment object at 0x1018f4380>
    // <conv.chunks.Comment object at 0x1018f4530>
    // <conv.chunks.Comment object at 0x1018f4650>
    // <conv.chunks.Comment object at 0x1018f46e0>
    // <conv.chunks.Comment object at 0x1018f4980>
    // <conv.chunks.Comment object at 0x1018f4ad0>
    lda(0x1);
    sta(0x3);
    sta(0x4);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x1018f4ce0>
    // <conv.chunks.Comment object at 0x1018f4c20>
    // <conv.chunks.Comment object at 0x1018f4e90>
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    lda(0x7e);
    sta(offsetof(G, Sprite_Tilenumber), y);
    sta(((offsetof(G, Sprite_Tilenumber)) + (8)), y);
    // <conv.chunks.Comment object at 0x1018f5460>
    // <conv.chunks.Comment object at 0x1018f5640>
    lda(0x7f);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    lda(offsetof(G, FlagpoleCollisionYPos));
    BEQ(ChkFlagOffscreen);
    // <conv.chunks.Comment object at 0x1018f58b0>
    // <conv.chunks.Comment object at 0x1018f5b50>
    // <conv.chunks.Comment object at 0x1018f5c70>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x1018f5e50>
    adc(0xc);
    tay();
    lda(offsetof(G, FlagpoleScore));
    asl();
    // <conv.chunks.Comment object at 0x1018f6000>
    // <conv.chunks.Comment object at 0x1018f6090>
    // <conv.chunks.Comment object at 0x1018f61e0>
    tax();
    lda(offsetof(G, FlagpoleScoreNumTiles), x);
    // <conv.chunks.Comment object at 0x1018f6300>
    sta(0x0);
    lda(((offsetof(G, FlagpoleScoreNumTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    JMP(ChkFlagOffscreen);
}

int ChkFlagOffscreen() {
    ldx(offsetof(G, ObjectOffset));
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(offsetof(G, Enemy_OffscreenBits));
    anda(0b1110);
    BEQ(ExitDumpSpr);
    JMP(MoveSixSpritesOffscreen);
}

int MoveSixSpritesOffscreen() {
    lda(0xf8);
    JMP(DumpSixSpr);
}

int DumpSixSpr() {
    sta(((offsetof(G, Sprite_Data)) + (20)), y);
    sta(((offsetof(G, Sprite_Data)) + (16)), y);
    JMP(DumpFourSpr);
}

int DumpFourSpr() {
    sta(((offsetof(G, Sprite_Data)) + (12)), y);
    JMP(DumpThreeSpr);
}

int DumpThreeSpr() {
    sta(((offsetof(G, Sprite_Data)) + (8)), y);
    JMP(DumpTwoSpr);
}

int DumpTwoSpr() {
    sta(((offsetof(G, Sprite_Data)) + (4)), y);
    // <conv.chunks.Comment object at 0x1018f7890>
    sta(offsetof(G, Sprite_Data), y);
    JMP(ExitDumpSpr);
}

int ExitDumpSpr() {
    rts();
    JMP(DrawLargePlatform);
}

int DrawLargePlatform() {
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    sty(0x2);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1018f7ce0>
    // <conv.chunks.Comment object at 0x1018f7e60>
    // <conv.chunks.Comment object at 0x1018f7e30>
    // <conv.chunks.Comment object at 0x101900080>
    iny();
    lda(offsetof(G, Enemy_Rel_XPos));
    JSR(SixSpriteStacker);
    // <conv.chunks.Comment object at 0x1019001a0>
    // <conv.chunks.Comment object at 0x1019002c0>
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Enemy_Y_Position), x);
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x1019004d0>
    // <conv.chunks.Comment object at 0x101900620>
    ldy(offsetof(G, AreaType));
    cpy(0x3);
    // <conv.chunks.Comment object at 0x101900830>
    BEQ(ShrinkPlatform);
    ldy(offsetof(G, SecondaryHardMode));
    BEQ(SetLast2Platform);
    JMP(ShrinkPlatform);
}

int ShrinkPlatform() {
    lda(0xf8);
    JMP(SetLast2Platform);
}

int SetLast2Platform() {
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    sta(((offsetof(G, Sprite_Y_Position)) + (16)), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (20)), y);
    lda(0x5b);
    // <conv.chunks.Comment object at 0x101900e00>
    // <conv.chunks.Comment object at 0x101900f50>
    // <conv.chunks.Comment object at 0x101901160>
    // <conv.chunks.Comment object at 0x101901370>
    ldx(offsetof(G, CloudTypeOverride));
    BEQ(SetPlatformTilenum);
    lda(0x75);
    JMP(SetPlatformTilenum);
}

int SetPlatformTilenum() {
    ldx(offsetof(G, ObjectOffset));
    iny();
    JSR(DumpSixSpr);
    lda(0x2);
    iny();
    JSR(DumpSixSpr);
    inx();
    JSR(GetXOffscreenBits);
    // <conv.chunks.Comment object at 0x1019017f0>
    // <conv.chunks.Comment object at 0x101901940>
    // <conv.chunks.Comment object at 0x1019019d0>
    // <conv.chunks.Comment object at 0x101901af0>
    // <conv.chunks.Comment object at 0x101901c40>
    // <conv.chunks.Comment object at 0x101901cd0>
    // <conv.chunks.Comment object at 0x101901e20>
    // <conv.chunks.Comment object at 0x101901eb0>
    dex();
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101902060>
    // <conv.chunks.Comment object at 0x1019021e0>
    // <conv.chunks.Comment object at 0x1019022a0>
    BCC(SChk2);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101902450>
    sta(offsetof(G, Sprite_Y_Position), y);
    JMP(SChk2);
}

int SChk2() {
    // <conv.chunks.Comment object at 0x101902690>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1019027e0>
    // <conv.chunks.Comment object at 0x1019028a0>
    BCC(SChk3);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101902a50>
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    JMP(SChk3);
}

int SChk3() {
    // <conv.chunks.Comment object at 0x101902d50>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101902ea0>
    // <conv.chunks.Comment object at 0x101902f60>
    BCC(SChk4);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101903110>
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    JMP(SChk4);
}

int SChk4() {
    // <conv.chunks.Comment object at 0x101903410>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101903560>
    // <conv.chunks.Comment object at 0x101903620>
    BCC(SChk5);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1019037d0>
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    JMP(SChk5);
}

int SChk5() {
    // <conv.chunks.Comment object at 0x101903ad0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101903c20>
    // <conv.chunks.Comment object at 0x101903ce0>
    BCC(SChk6);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101903e90>
    sta(((offsetof(G, Sprite_Y_Position)) + (16)), y);
    JMP(SChk6);
}

int SChk6() {
    // <conv.chunks.Comment object at 0x1019081d0>
    pla();
    asl();
    BCC(SLChk);
    // <conv.chunks.Comment object at 0x101908320>
    // <conv.chunks.Comment object at 0x1019083b0>
    lda(0xf8);
    sta(((offsetof(G, Sprite_Y_Position)) + (20)), y);
    JMP(SLChk);
}

int SLChk() {
    // <conv.chunks.Comment object at 0x101908560>
    // <conv.chunks.Comment object at 0x101908800>
    lda(offsetof(G, Enemy_OffscreenBits));
    asl();
    // <conv.chunks.Comment object at 0x1019089b0>
    BCC(ExDLPl);
    JSR(MoveSixSpritesOffscreen);
    JMP(ExDLPl);
}

int ExDLPl() {
    rts();
    JMP(DrawFloateyNumber_Coin);
}

int DrawFloateyNumber_Coin() {
    lda(offsetof(G, FrameCounter));
    lsr();
    BCS(NotRsNum);
    dec(offsetof(G, Misc_Y_Position), x);
    JMP(NotRsNum);
}

int NotRsNum() {
    // <conv.chunks.Comment object at 0x101908dd0>
    // <conv.chunks.Comment object at 0x101908f20>
    // <conv.chunks.Comment object at 0x101908fb0>
    // <conv.chunks.Comment object at 0x1019090d0>
    // <conv.chunks.Comment object at 0x101909220>
    lda(offsetof(G, Misc_Y_Position), x);
    JSR(DumpTwoSpr);
    lda(offsetof(G, Misc_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    // <conv.chunks.Comment object at 0x1019093a0>
    // <conv.chunks.Comment object at 0x1019094c0>
    // <conv.chunks.Comment object at 0x1019095e0>
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x1019097c0>
    // <conv.chunks.Comment object at 0x101909850>
    lda(0x2);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x101909b50>
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    lda(0xf7);
    sta(offsetof(G, Sprite_Tilenumber), y);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x101909f70>
    // <conv.chunks.Comment object at 0x10190a150>
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    JMP(ExJCGfx);
    JMP(JCoinGfxHandler);
}

int JCoinGfxHandler() {
    ldy(offsetof(G, Misc_SprDataOffset), x);
    lda(offsetof(G, Misc_State), x);
    cmp(0x2);
    BCS(DrawFloateyNumber_Coin);
    lda(offsetof(G, Misc_Y_Position), x);
    sta(offsetof(G, Sprite_Y_Position), y);
    // <conv.chunks.Comment object at 0x10190a630>
    // <conv.chunks.Comment object at 0x10190a990>
    // <conv.chunks.Comment object at 0x10190aae0>
    // <conv.chunks.Comment object at 0x10190ab70>
    // <conv.chunks.Comment object at 0x10190ad20>
    // <conv.chunks.Comment object at 0x10190ae70>
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    lda(offsetof(G, Misc_Rel_XPos));
    // <conv.chunks.Comment object at 0x10190b050>
    // <conv.chunks.Comment object at 0x10190b0e0>
    // <conv.chunks.Comment object at 0x10190b380>
    sta(offsetof(G, Sprite_X_Position), y);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    lda(offsetof(G, FrameCounter));
    lsr();
    anda(0b11);
    tax();
    lda(offsetof(G, JumpingCoinTiles), x);
    iny();
    JSR(DumpTwoSpr);
    dey();
    // <conv.chunks.Comment object at 0x10190b5c0>
    // <conv.chunks.Comment object at 0x10190b7d0>
    // <conv.chunks.Comment object at 0x10190b920>
    // <conv.chunks.Comment object at 0x10190b9b0>
    // <conv.chunks.Comment object at 0x10190bb00>
    // <conv.chunks.Comment object at 0x10190bb90>
    // <conv.chunks.Comment object at 0x10190bd10>
    // <conv.chunks.Comment object at 0x10190bda0>
    // <conv.chunks.Comment object at 0x10190bef0>
    lda(0x2);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x10190bfe0>
    lda(0x82);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    ldx(offsetof(G, ObjectOffset));
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // <conv.chunks.Comment object at 0x101910260>
    // <conv.chunks.Comment object at 0x101910500>
    // <conv.chunks.Comment object at 0x101910650>
    rts();
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy(((offsetof(G, Enemy_SprDataOffset)) + (5)));
    lda(offsetof(G, Enemy_Rel_YPos));
    // <conv.chunks.Comment object at 0x101910f50>
    // <conv.chunks.Comment object at 0x101911790>
    clc();
    adc(0x8);
    sta(0x2);
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(0x5);
    ldx(offsetof(G, PowerUpType));
    lda(offsetof(G, PowerUpAttributes), x);
    ora(((offsetof(G, Enemy_SprAttrib)) + (5)));
    sta(0x4);
    // <conv.chunks.Comment object at 0x101911940>
    // <conv.chunks.Comment object at 0x101911a90>
    // <conv.chunks.Comment object at 0x101911b20>
    // <conv.chunks.Comment object at 0x101911cd0>
    // <conv.chunks.Comment object at 0x101911d60>
    // <conv.chunks.Comment object at 0x101911ee0>
    // <conv.chunks.Comment object at 0x101912030>
    // <conv.chunks.Comment object at 0x101912240>
    txa();
    pha();
    // <conv.chunks.Comment object at 0x1019123f0>
    asl();
    asl();
    tax();
    // <conv.chunks.Comment object at 0x101912540>
    // <conv.chunks.Comment object at 0x101912600>
    lda(0x1);
    sta(0x7);
    sta(0x3);
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda(offsetof(G, PowerUpGfxTable), x);
    // <conv.chunks.Comment object at 0x101912840>
    sta(0x0);
    lda(((offsetof(G, PowerUpGfxTable)) + (1)), x);
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BPL(PUpDrawLoop);
    ldy(((offsetof(G, Enemy_SprDataOffset)) + (5)));
    pla();
    BEQ(PUpOfs);
    // <conv.chunks.Comment object at 0x101912b40>
    // <conv.chunks.Comment object at 0x101912e40>
    // <conv.chunks.Comment object at 0x101912f90>
    // <conv.chunks.Comment object at 0x101913020>
    // <conv.chunks.Comment object at 0x1019131a0>
    // <conv.chunks.Comment object at 0x1019133b0>
    // <conv.chunks.Comment object at 0x101913440>
    cmp(0x3);
    BEQ(PUpOfs);
    sta(0x0);
    lda(offsetof(G, FrameCounter));
    lsr();
    anda(0b11);
    ora(((offsetof(G, Enemy_SprAttrib)) + (5)));
    sta(offsetof(G, Sprite_Attributes), y);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    // <conv.chunks.Comment object at 0x1019135f0>
    // <conv.chunks.Comment object at 0x101913800>
    // <conv.chunks.Comment object at 0x101913890>
    // <conv.chunks.Comment object at 0x101913a40>
    // <conv.chunks.Comment object at 0x101913ad0>
    // <conv.chunks.Comment object at 0x101913bf0>
    // <conv.chunks.Comment object at 0x101913dd0>
    // <conv.chunks.Comment object at 0x101913f20>
    ldx(0x0);
    dex();
    BEQ(FlipPUpRightSide);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    JMP(FlipPUpRightSide);
}

int FlipPUpRightSide() {
    lda(((offsetof(G, Sprite_Attributes)) + (4)), y);
    ora(0b1000000);
    // <conv.chunks.Comment object at 0x101924a70>
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    lda(((offsetof(G, Sprite_Attributes)) + (12)), y);
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    JMP(PUpOfs);
}

int PUpOfs() {
    // <conv.chunks.Comment object at 0x101924f50>
    // <conv.chunks.Comment object at 0x101925070>
    // <conv.chunks.Comment object at 0x101925280>
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}

int EnemyGfxHandler() {
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x101933530>
    sta(0x2);
    lda(offsetof(G, Enemy_Rel_XPos));
    sta(0x5);
    // <conv.chunks.Comment object at 0x101939880>
    // <conv.chunks.Comment object at 0x101939ac0>
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    sty(0xeb);
    // <conv.chunks.Comment object at 0x101939d00>
    lda(0x0);
    sta(offsetof(G, VerticalFlipFlag));
    // <conv.chunks.Comment object at 0x101939e50>
    lda(offsetof(G, Enemy_MovingDir), x);
    sta(0x3);
    // <conv.chunks.Comment object at 0x10193a150>
    lda(offsetof(G, Enemy_SprAttrib), x);
    sta(0x4);
    // <conv.chunks.Comment object at 0x10193a390>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, PiranhaPlant));
    BNE(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x10193a5a0>
    // <conv.chunks.Comment object at 0x10193a6c0>
    ldy(offsetof(G, PiranhaPlant_Y_Speed), x);
    BMI(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x10193a900>
    ldy(offsetof(G, EnemyFrameTimer), x);
    BEQ(CheckForRetainerObj);
    rts();
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda(offsetof(G, Enemy_State), x);
    // <conv.chunks.Comment object at 0x10193ad50>
    sta(0xed);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x10193aea0>
    tay();
    lda(offsetof(G, Enemy_ID), x);
    // <conv.chunks.Comment object at 0x10193b140>
    cmp(offsetof(G, RetainerObject));
    BNE(CheckForBulletBillCV);
    ldy(0x0);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10193b380>
    // <conv.chunks.Comment object at 0x10193b4a0>
    // <conv.chunks.Comment object at 0x10193b530>
    sta(0x3);
    lda(0x15);
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp(offsetof(G, BulletBill_CannonVar));
    BNE(CheckForJumpspring);
    dec(0x2);
    // <conv.chunks.Comment object at 0x10193b920>
    // <conv.chunks.Comment object at 0x10193ba40>
    // <conv.chunks.Comment object at 0x10193bb90>
    lda(0x3);
    ldy(offsetof(G, EnemyFrameTimer), x);
    BEQ(SBBAt);
    ora(0b100000);
    JMP(SBBAt);
}

int SBBAt() {
    // <conv.chunks.Comment object at 0x10193bce0>
    // <conv.chunks.Comment object at 0x10193bec0>
    // <conv.chunks.Comment object at 0x101948050>
    // <conv.chunks.Comment object at 0x101948170>
    sta(0x4);
    ldy(0x0);
    sty(0xed);
    lda(0x8);
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp(offsetof(G, JumpspringObject));
    // <conv.chunks.Comment object at 0x101948680>
    BNE(CheckForPodoboo);
    ldy(0x3);
    ldx(offsetof(G, JumpspringAnimCtrl));
    lda(offsetof(G, JumpspringFrameOffsets), x);
    JMP(CheckForPodoboo);
}

int CheckForPodoboo() {
    sta(0xef);
    sty(0xec);
    ldx(offsetof(G, ObjectOffset));
    cmp(0xc);
    BNE(CheckBowserGfxFlag);
    lda(offsetof(G, Enemy_Y_Speed), x);
    // <conv.chunks.Comment object at 0x101948c80>
    // <conv.chunks.Comment object at 0x101948c50>
    // <conv.chunks.Comment object at 0x101948e30>
    // <conv.chunks.Comment object at 0x101948fb0>
    // <conv.chunks.Comment object at 0x101949040>
    // <conv.chunks.Comment object at 0x1019491f0>
    BMI(CheckBowserGfxFlag);
    inc(offsetof(G, VerticalFlipFlag));
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda(offsetof(G, BowserGfxFlag));
    // <conv.chunks.Comment object at 0x101949580>
    BEQ(CheckForGoomba);
    ldy(0x16);
    // <conv.chunks.Comment object at 0x101949790>
    cmp(0x1);
    BEQ(SBwsrGfxOfs);
    iny();
    JMP(SBwsrGfxOfs);
}

int SBwsrGfxOfs() {
    sty(0xef);
    JMP(CheckForGoomba);
}

int CheckForGoomba() {
    ldy(0xef);
    // <conv.chunks.Comment object at 0x101949cd0>
    cpy(offsetof(G, Goomba));
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x101949b50>
    lda(offsetof(G, Enemy_State), x);
    cmp(0x2);
    BCC(GmbaAnim);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x10194a120>
    // <conv.chunks.Comment object at 0x10194a1b0>
    // <conv.chunks.Comment object at 0x10194a360>
    stx(0xec);
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // <conv.chunks.Comment object at 0x10194a3f0>
    anda(0b100000);
    ora(offsetof(G, TimerControl));
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x10194a6c0>
    // <conv.chunks.Comment object at 0x10194a7e0>
    lda(offsetof(G, FrameCounter));
    anda(0b1000);
    // <conv.chunks.Comment object at 0x10194a9f0>
    BNE(CheckBowserFront);
    lda(0x3);
    eor(0b11);
    sta(0x3);
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda(offsetof(G, EnemyAttributeData), y);
    ora(0x4);
    // <conv.chunks.Comment object at 0x10194ae10>
    // <conv.chunks.Comment object at 0x10194b0e0>
    sta(0x4);
    lda(offsetof(G, EnemyGfxTableOffsets), y);
    tax();
    ldy(0xec);
    // <conv.chunks.Comment object at 0x10194b170>
    // <conv.chunks.Comment object at 0x10194b440>
    // <conv.chunks.Comment object at 0x10194b500>
    lda(offsetof(G, BowserGfxFlag));
    BEQ(CheckForSpiny);
    // <conv.chunks.Comment object at 0x10194b6e0>
    cmp(0x1);
    BNE(CheckBowserRear);
    lda(offsetof(G, BowserBodyControls));
    BPL(ChkFrontSte);
    ldx(0xde);
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // <conv.chunks.Comment object at 0x10194b860>
    // <conv.chunks.Comment object at 0x10194ba10>
    // <conv.chunks.Comment object at 0x10194bb30>
    // <conv.chunks.Comment object at 0x10194bc50>
    // <conv.chunks.Comment object at 0x10194bce0>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x10194be60>
    BEQ(DrawBowser);
    JMP(FlipBowserOver);
}

int FlipBowserOver() {
    stx(offsetof(G, VerticalFlipFlag));
    JMP(DrawBowser);
}

int DrawBowser() {
    JMP(DrawEnemyObject);
    JMP(CheckBowserRear);
}

int CheckBowserRear() {
    lda(offsetof(G, BowserBodyControls));
    // <conv.chunks.Comment object at 0x1019503e0>
    anda(0x1);
    BEQ(ChkRearSte);
    ldx(0xe4);
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // <conv.chunks.Comment object at 0x101950560>
    // <conv.chunks.Comment object at 0x101950710>
    // <conv.chunks.Comment object at 0x1019507a0>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x101950920>
    BEQ(DrawBowser);
    lda(0x2);
    sec();
    // <conv.chunks.Comment object at 0x101950bc0>
    // <conv.chunks.Comment object at 0x101950b90>
    sbc(0x10);
    sta(0x2);
    JMP(FlipBowserOver);
    JMP(CheckForSpiny);
}

int CheckForSpiny() {
    cpx(0x24);
    BNE(CheckForLakitu);
    cpy(0x5);
    BNE(NotEgg);
    ldx(0x30);
    // <conv.chunks.Comment object at 0x1019510a0>
    // <conv.chunks.Comment object at 0x101951130>
    // <conv.chunks.Comment object at 0x1019512e0>
    // <conv.chunks.Comment object at 0x101951370>
    // <conv.chunks.Comment object at 0x101951550>
    lda(0x2);
    sta(0x3);
    // <conv.chunks.Comment object at 0x101951790>
    lda(0x5);
    sta(0xec);
    JMP(NotEgg);
}

int NotEgg() {
    // <conv.chunks.Comment object at 0x1019519a0>
    // <conv.chunks.Comment object at 0x101951a30>
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(0x90);
    BNE(CheckUpsideDownShell);
    // <conv.chunks.Comment object at 0x101951c40>
    // <conv.chunks.Comment object at 0x101951cd0>
    lda(0xed);
    anda(0b100000);
    BNE(NoLAFr);
    // <conv.chunks.Comment object at 0x101951e80>
    // <conv.chunks.Comment object at 0x101952090>
    lda(offsetof(G, FrenzyEnemyTimer));
    cmp(0x10);
    BCS(NoLAFr);
    ldx(0x96);
    JMP(NoLAFr);
}

int NoLAFr() {
    // <conv.chunks.Comment object at 0x1019522d0>
    // <conv.chunks.Comment object at 0x101952360>
    // <conv.chunks.Comment object at 0x101952540>
    // <conv.chunks.Comment object at 0x1019525d0>
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}

int CheckUpsideDownShell() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101952840>
    cmp(0x4);
    BCS(CheckRightSideUpShell);
    // <conv.chunks.Comment object at 0x101952990>
    cpy(0x2);
    BCC(CheckRightSideUpShell);
    ldx(0x5a);
    // <conv.chunks.Comment object at 0x101952ba0>
    // <conv.chunks.Comment object at 0x101952d50>
    ldy(0xef);
    cpy(offsetof(G, BuzzyBeetle));
    // <conv.chunks.Comment object at 0x101952de0>
    BNE(CheckRightSideUpShell);
    ldx(0x7e);
    inc(0x2);
    JMP(CheckRightSideUpShell);
}

int CheckRightSideUpShell() {
    lda(0xec);
    cmp(0x4);
    BNE(CheckForHammerBro);
    ldx(0x72);
    inc(0x2);
    // <conv.chunks.Comment object at 0x101953410>
    // <conv.chunks.Comment object at 0x1019534a0>
    // <conv.chunks.Comment object at 0x101953590>
    // <conv.chunks.Comment object at 0x101953740>
    // <conv.chunks.Comment object at 0x101953890>
    ldy(0xef);
    cpy(offsetof(G, BuzzyBeetle));
    BEQ(CheckForDefdGoomba);
    ldx(0x66);
    inc(0x2);
    JMP(CheckForDefdGoomba);
}

int CheckForDefdGoomba() {
    cpy(offsetof(G, Goomba));
    BNE(CheckForHammerBro);
    ldx(0x54);
    lda(0xed);
    anda(0b100000);
    BNE(CheckForHammerBro);
    ldx(0x8a);
    dec(0x2);
    JMP(CheckForHammerBro);
}

int CheckForHammerBro() {
    ldy(offsetof(G, ObjectOffset));
    lda(0xef);
    // <conv.chunks.Comment object at 0x1019589e0>
    cmp(offsetof(G, HammerBro));
    BNE(CheckForBloober);
    // <conv.chunks.Comment object at 0x101958bc0>
    lda(0xed);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101958ce0>
    anda(0b1000);
    BEQ(CheckDefeatedState);
    ldx(0xb4);
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(0x48);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101959370>
    // <conv.chunks.Comment object at 0x101959400>
    lda(offsetof(G, EnemyIntervalTimer), y);
    cmp(0x5);
    BCS(CheckDefeatedState);
    cpx(0x3c);
    BNE(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101959730>
    // <conv.chunks.Comment object at 0x1019598e0>
    // <conv.chunks.Comment object at 0x101959970>
    cmp(0x1);
    BEQ(CheckDefeatedState);
    inc(0x2);
    // <conv.chunks.Comment object at 0x101959b80>
    // <conv.chunks.Comment object at 0x101959d60>
    inc(0x2);
    inc(0x2);
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x10195a1b0>
    cmp(offsetof(G, Goomba));
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x10195a180>
    cmp(0x8);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x10195a540>
    cmp(offsetof(G, Podoboo));
    BEQ(CheckDefeatedState);
    cmp(0x18);
    // <conv.chunks.Comment object at 0x10195a810>
    // <conv.chunks.Comment object at 0x10195a930>
    BCS(CheckDefeatedState);
    ldy(0x0);
    cmp(0x15);
    BNE(CheckForSecondFrame);
    iny();
    lda(offsetof(G, WorldNumber));
    // <conv.chunks.Comment object at 0x10195aba0>
    // <conv.chunks.Comment object at 0x10195acc0>
    // <conv.chunks.Comment object at 0x10195aea0>
    // <conv.chunks.Comment object at 0x10195af30>
    cmp(offsetof(G, World8));
    BCS(CheckDefeatedState);
    ldx(0xa2);
    lda(0x3);
    // <conv.chunks.Comment object at 0x10195b080>
    // <conv.chunks.Comment object at 0x10195b290>
    // <conv.chunks.Comment object at 0x10195b320>
    sta(0xec);
    BNE(CheckDefeatedState);
    JMP(CheckForSecondFrame);
}

int CheckForSecondFrame() {
    lda(offsetof(G, FrameCounter));
    anda(offsetof(G, EnemyAnimTimingBMask), y);
    BNE(CheckDefeatedState);
    JMP(CheckAnimationStop);
}

int CheckAnimationStop() {
    lda(0xed);
    anda(0b10100000);
    // <conv.chunks.Comment object at 0x10195bb00>
    // <conv.chunks.Comment object at 0x10195bb90>
    ora(offsetof(G, TimerControl));
    BNE(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x10195be00>
    txa();
    clc();
    adc(0x6);
    tax();
    JMP(CheckDefeatedState);
}

int CheckDefeatedState() {
    lda(0xed);
    anda(0b100000);
    BEQ(DrawEnemyObject);
    // <conv.chunks.Comment object at 0x1019602c0>
    // <conv.chunks.Comment object at 0x101960350>
    // <conv.chunks.Comment object at 0x1019604d0>
    lda(0xef);
    cmp(0x4);
    BCC(DrawEnemyObject);
    // <conv.chunks.Comment object at 0x1019605f0>
    // <conv.chunks.Comment object at 0x101960770>
    ldy(0x1);
    sty(offsetof(G, VerticalFlipFlag));
    // <conv.chunks.Comment object at 0x101960980>
    dey();
    sty(0xec);
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(0xeb);
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // <conv.chunks.Comment object at 0x101960d40>
    // <conv.chunks.Comment object at 0x101960dd0>
    // <conv.chunks.Comment object at 0x101960f50>
    JSR(DrawEnemyObjRow);
    ldx(offsetof(G, ObjectOffset));
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    // <conv.chunks.Comment object at 0x101961160>
    // <conv.chunks.Comment object at 0x101961280>
    lda(0xef);
    cmp(0x8);
    BNE(CheckForVerticalFlip);
    JMP(SkipToOffScrChk);
}

int SkipToOffScrChk() {
    JMP(SprObjectOffscrChk);
    JMP(CheckForVerticalFlip);
}

int CheckForVerticalFlip() {
    lda(offsetof(G, VerticalFlipFlag));
    BEQ(CheckForESymmetry);
    lda(offsetof(G, Sprite_Attributes), y);
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x101961880>
    // <conv.chunks.Comment object at 0x1019619a0>
    // <conv.chunks.Comment object at 0x101961ac0>
    // <conv.chunks.Comment object at 0x101961c10>
    iny();
    iny();
    JSR(DumpSixSpr);
    // <conv.chunks.Comment object at 0x101961df0>
    // <conv.chunks.Comment object at 0x101961e80>
    dey();
    dey();
    // <conv.chunks.Comment object at 0x101962060>
    tya();
    tax();
    // <conv.chunks.Comment object at 0x1019621b0>
    lda(0xef);
    cmp(offsetof(G, HammerBro));
    // <conv.chunks.Comment object at 0x101962240>
    BEQ(FlipEnemyVertically);
    cmp(offsetof(G, Lakitu));
    BEQ(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x101962540>
    // <conv.chunks.Comment object at 0x1019625a0>
    cmp(0x15);
    BCS(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x101962810>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda(offsetof(G, Sprite_Tilenumber), x);
    pha();
    // <conv.chunks.Comment object at 0x101962cf0>
    // <conv.chunks.Comment object at 0x101962e70>
    lda(((offsetof(G, Sprite_Tilenumber)) + (4)), x);
    pha();
    lda(((offsetof(G, Sprite_Tilenumber)) + (16)), y);
    sta(offsetof(G, Sprite_Tilenumber), x);
    // <conv.chunks.Comment object at 0x101963170>
    // <conv.chunks.Comment object at 0x101963380>
    lda(((offsetof(G, Sprite_Tilenumber)) + (20)), y);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), x);
    pla();
    sta(((offsetof(G, Sprite_Tilenumber)) + (20)), y);
    // <conv.chunks.Comment object at 0x1019638c0>
    // <conv.chunks.Comment object at 0x101963950>
    pla();
    sta(((offsetof(G, Sprite_Tilenumber)) + (16)), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda(offsetof(G, BowserGfxFlag));
    BNE(SkipToOffScrChk);
    // <conv.chunks.Comment object at 0x101963e00>
    // <conv.chunks.Comment object at 0x101963f20>
    lda(0xef);
    ldx(0xec);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x101970110>
    // <conv.chunks.Comment object at 0x101970230>
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // <conv.chunks.Comment object at 0x1019704d0>
    // <conv.chunks.Comment object at 0x1019705f0>
    cmp(offsetof(G, Bloober));
    BEQ(MirrorEnemyGfx);
    cmp(offsetof(G, PiranhaPlant));
    // <conv.chunks.Comment object at 0x101970890>
    BEQ(MirrorEnemyGfx);
    cmp(offsetof(G, Podoboo));
    BEQ(MirrorEnemyGfx);
    cmp(offsetof(G, Spiny));
    BNE(ESRtnr);
    cpx(0x5);
    BNE(CheckToMirrorLakitu);
    JMP(ESRtnr);
}

int ESRtnr() {
    // <conv.chunks.Comment object at 0x101970aa0>
    // <conv.chunks.Comment object at 0x101970bf0>
    // <conv.chunks.Comment object at 0x101970d10>
    // <conv.chunks.Comment object at 0x101970da0>
    // <conv.chunks.Comment object at 0x101970fb0>
    // <conv.chunks.Comment object at 0x101971040>
    // <conv.chunks.Comment object at 0x1019711f0>
    cmp(0x15);
    BNE(SpnySC);
    lda(0x42);
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    JMP(SpnySC);
}

int SpnySC() {
    // <conv.chunks.Comment object at 0x101971490>
    // <conv.chunks.Comment object at 0x101971520>
    // <conv.chunks.Comment object at 0x1019717c0>
    cpx(0x2);
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda(offsetof(G, BowserGfxFlag));
    // <conv.chunks.Comment object at 0x101971a60>
    BNE(CheckToMirrorLakitu);
    lda(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x101971c70>
    anda(0b10100011);
    sta(offsetof(G, Sprite_Attributes), y);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    // <conv.chunks.Comment object at 0x101971eb0>
    // <conv.chunks.Comment object at 0x101972000>
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    ora(0b1000000);
    cpx(0x5);
    BNE(EggExc);
    ora(0b10000000);
    JMP(EggExc);
}

int EggExc() {
    // <conv.chunks.Comment object at 0x1019723f0>
    // <conv.chunks.Comment object at 0x101972510>
    // <conv.chunks.Comment object at 0x1019725a0>
    // <conv.chunks.Comment object at 0x101972780>
    // <conv.chunks.Comment object at 0x1019728a0>
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    // <conv.chunks.Comment object at 0x101972b10>
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    cpx(0x4);
    BNE(CheckToMirrorLakitu);
    lda(((offsetof(G, Sprite_Attributes)) + (8)), y);
    // <conv.chunks.Comment object at 0x101972f00>
    // <conv.chunks.Comment object at 0x101972f90>
    // <conv.chunks.Comment object at 0x101973140>
    ora(0b10000000);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    // <conv.chunks.Comment object at 0x101973440>
    // <conv.chunks.Comment object at 0x101973650>
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101973dd0>
    cmp(offsetof(G, Lakitu));
    BNE(CheckToMirrorJSpring);
    // <conv.chunks.Comment object at 0x101973da0>
    lda(offsetof(G, VerticalFlipFlag));
    BNE(NVFLak);
    lda(((offsetof(G, Sprite_Attributes)) + (16)), y);
    anda(0b10000001);
    // <conv.chunks.Comment object at 0x101978230>
    // <conv.chunks.Comment object at 0x101978380>
    // <conv.chunks.Comment object at 0x101978590>
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    lda(((offsetof(G, Sprite_Attributes)) + (20)), y);
    ora(0b1000001);
    // <conv.chunks.Comment object at 0x101978890>
    // <conv.chunks.Comment object at 0x101978aa0>
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    ldx(offsetof(G, FrenzyEnemyTimer));
    // <conv.chunks.Comment object at 0x101978da0>
    cpx(0x10);
    BCS(SprObjectOffscrChk);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    // <conv.chunks.Comment object at 0x101978f20>
    // <conv.chunks.Comment object at 0x1019790d0>
    anda(0b10000001);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // <conv.chunks.Comment object at 0x1019793d0>
    // <conv.chunks.Comment object at 0x1019795e0>
    // <conv.chunks.Comment object at 0x101979700>
    lda(offsetof(G, Sprite_Attributes), y);
    anda(0b10000001);
    sta(offsetof(G, Sprite_Attributes), y);
    lda(((offsetof(G, Sprite_Attributes)) + (4)), y);
    ora(0b1000001);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    JMP(CheckToMirrorJSpring);
}

int CheckToMirrorJSpring() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x10197a090>
    cmp(0x18);
    BCC(SprObjectOffscrChk);
    // <conv.chunks.Comment object at 0x10197a1e0>
    lda(0x82);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    // <conv.chunks.Comment object at 0x10197a3f0>
    // <conv.chunks.Comment object at 0x10197a690>
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Enemy_OffscreenBits));
    // <conv.chunks.Comment object at 0x10197ade0>
    // <conv.chunks.Comment object at 0x10197af00>
    lsr();
    lsr();
    lsr();
    pha();
    BCC(LcChk);
    lda(0x4);
    JSR(MoveESprColOffscreen);
    JMP(LcChk);
}

int LcChk() {
    // <conv.chunks.Comment object at 0x10197b0e0>
    // <conv.chunks.Comment object at 0x10197b1a0>
    // <conv.chunks.Comment object at 0x10197b260>
    // <conv.chunks.Comment object at 0x10197b2f0>
    // <conv.chunks.Comment object at 0x10197b440>
    // <conv.chunks.Comment object at 0x10197b4d0>
    // <conv.chunks.Comment object at 0x10197b680>
    pla();
    lsr();
    pha();
    BCC(Row3C);
    lda(0x0);
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}

int Row3C() {
    // <conv.chunks.Comment object at 0x10197b7d0>
    // <conv.chunks.Comment object at 0x10197b890>
    // <conv.chunks.Comment object at 0x10197b920>
    // <conv.chunks.Comment object at 0x10197ba70>
    // <conv.chunks.Comment object at 0x10197bb00>
    // <conv.chunks.Comment object at 0x10197bcb0>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10197be00>
    lsr();
    pha();
    BCC(Row23C);
    lda(0x10);
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}

int Row23C() {
    // <conv.chunks.Comment object at 0x10197bf50>
    // <conv.chunks.Comment object at 0x10197bfe0>
    // <conv.chunks.Comment object at 0x101980170>
    // <conv.chunks.Comment object at 0x101980200>
    // <conv.chunks.Comment object at 0x1019803b0>
    pla();
    lsr();
    pha();
    // <conv.chunks.Comment object at 0x101980500>
    // <conv.chunks.Comment object at 0x1019805c0>
    BCC(AllRowC);
    lda(0x8);
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}

int AllRowC() {
    // <conv.chunks.Comment object at 0x101980770>
    // <conv.chunks.Comment object at 0x101980800>
    // <conv.chunks.Comment object at 0x1019809b0>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x101980b00>
    BCC(ExEGHandler);
    JSR(MoveESprRowOffscreen);
    // <conv.chunks.Comment object at 0x101980c80>
    lda(offsetof(G, Enemy_ID), x);
    cmp(offsetof(G, Podoboo));
    BEQ(ExEGHandler);
    lda(offsetof(G, Enemy_Y_HighPos), x);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101980ec0>
    // <conv.chunks.Comment object at 0x101981010>
    // <conv.chunks.Comment object at 0x101981130>
    // <conv.chunks.Comment object at 0x101981280>
    BNE(ExEGHandler);
    JSR(EraseEnemyObject);
    JMP(ExEGHandler);
}

int ExEGHandler() {
    rts();
    JMP(DrawEnemyObjRow);
}

int DrawEnemyObjRow() {
    lda(offsetof(G, EnemyGraphicsTable), x);
    // <conv.chunks.Comment object at 0x1019816a0>
    sta(0x0);
    lda(((offsetof(G, EnemyGraphicsTable)) + (1)), x);
    JMP(DrawOneSpriteRow);
}

int DrawOneSpriteRow() {
    sta(0x1);
    JMP(DrawSpriteObject);
    JMP(MoveESprRowOffscreen);
}

int MoveESprRowOffscreen() {
    clc();
    // <conv.chunks.Comment object at 0x101981d60>
    adc(offsetof(G, Enemy_SprDataOffset), x);
    tay();
    // <conv.chunks.Comment object at 0x101981f40>
    lda(0xf8);
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // <conv.chunks.Comment object at 0x101982240>
    adc(offsetof(G, Enemy_SprDataOffset), x);
    tay();
    JSR(MoveColOffscreen);
    sta(((offsetof(G, Sprite_Data)) + (16)), y);
    // <conv.chunks.Comment object at 0x101982420>
    // <conv.chunks.Comment object at 0x1019824b0>
    // <conv.chunks.Comment object at 0x1019825d0>
    rts();
    JMP(DrawBlock);
}

int DrawBlock() {
    lda(offsetof(G, Block_Rel_YPos));
    sta(0x2);
    lda(offsetof(G, Block_Rel_XPos));
    sta(0x5);
    // <conv.chunks.Comment object at 0x101982a50>
    // <conv.chunks.Comment object at 0x101982db0>
    // <conv.chunks.Comment object at 0x101982e40>
    // <conv.chunks.Comment object at 0x101982ff0>
    lda(0x3);
    sta(0x4);
    // <conv.chunks.Comment object at 0x101983200>
    lsr();
    sta(0x3);
    ldy(offsetof(G, Block_SprDataOffset), x);
    ldx(0x0);
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // <conv.chunks.Comment object at 0x1019833b0>
    // <conv.chunks.Comment object at 0x101983440>
    // <conv.chunks.Comment object at 0x1019835f0>
    // <conv.chunks.Comment object at 0x101983680>
    lda(offsetof(G, DefaultBlockObjTiles), x);
    sta(0x0);
    lda(((offsetof(G, DefaultBlockObjTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    cpx(0x4);
    BNE(DBlkLoop);
    ldx(offsetof(G, ObjectOffset));
    ldy(offsetof(G, Block_SprDataOffset), x);
    // <conv.chunks.Comment object at 0x1019838c0>
    // <conv.chunks.Comment object at 0x101983950>
    // <conv.chunks.Comment object at 0x101983bc0>
    // <conv.chunks.Comment object at 0x101983ce0>
    // <conv.chunks.Comment object at 0x101983d70>
    // <conv.chunks.Comment object at 0x101983f20>
    // <conv.chunks.Comment object at 0x10198c080>
    lda(offsetof(G, AreaType));
    cmp(0x1);
    BEQ(ChkRep);
    // <conv.chunks.Comment object at 0x10198c2c0>
    // <conv.chunks.Comment object at 0x10198c350>
    lda(0x86);
    sta(offsetof(G, Sprite_Tilenumber), y);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    JMP(ChkRep);
}

int ChkRep() {
    // <conv.chunks.Comment object at 0x10198c590>
    // <conv.chunks.Comment object at 0x10198c770>
    // <conv.chunks.Comment object at 0x10198c980>
    lda(offsetof(G, Block_Metatile), x);
    cmp(0xc4);
    BNE(BlkOffscr);
    lda(0x87);
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(0x3);
    // <conv.chunks.Comment object at 0x10198cb30>
    // <conv.chunks.Comment object at 0x10198cbc0>
    // <conv.chunks.Comment object at 0x10198cd70>
    // <conv.chunks.Comment object at 0x10198cec0>
    // <conv.chunks.Comment object at 0x10198cf50>
    // <conv.chunks.Comment object at 0x10198d0a0>
    // <conv.chunks.Comment object at 0x10198d130>
    ldx(offsetof(G, AreaType));
    dex();
    BEQ(SetBFlip);
    lsr();
    JMP(SetBFlip);
}

int SetBFlip() {
    // <conv.chunks.Comment object at 0x10198d370>
    // <conv.chunks.Comment object at 0x10198d400>
    // <conv.chunks.Comment object at 0x10198d550>
    // <conv.chunks.Comment object at 0x10198d5e0>
    ldx(offsetof(G, ObjectOffset));
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x10198d730>
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    // <conv.chunks.Comment object at 0x10198d970>
    ora(0b10000000);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    // <conv.chunks.Comment object at 0x10198dc70>
    anda(0b10000011);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // <conv.chunks.Comment object at 0x10198df70>
    // <conv.chunks.Comment object at 0x10198e180>
    lda(offsetof(G, Block_OffscreenBits));
    pha();
    anda(0b100);
    BEQ(PullOfsB);
    lda(0xf8);
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x10198e300>
    // <conv.chunks.Comment object at 0x10198e390>
    // <conv.chunks.Comment object at 0x10198e4b0>
    // <conv.chunks.Comment object at 0x10198e5d0>
    // <conv.chunks.Comment object at 0x10198e660>
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // <conv.chunks.Comment object at 0x10198eae0>
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // <conv.chunks.Comment object at 0x10198ebd0>
    anda(0b1000);
    BEQ(ExDBlk);
    JMP(MoveColOffscreen);
}

int MoveColOffscreen() {
    lda(0xf8);
    sta(offsetof(G, Sprite_Y_Position), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    JMP(ExDBlk);
}

int ExDBlk() {
    rts();
    JMP(DrawBrickChunks);
}

int DrawBrickChunks() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x10198f440>
    // <conv.chunks.Comment object at 0x10198f4a0>
    sta(0x0);
    lda(0x75);
    // <conv.chunks.Comment object at 0x10198f530>
    ldy(offsetof(G, GameEngineSubroutine));
    cpy(0x5);
    BEQ(DChunks);
    lda(0x3);
    // <conv.chunks.Comment object at 0x10198f8c0>
    // <conv.chunks.Comment object at 0x10198f950>
    // <conv.chunks.Comment object at 0x10198fb30>
    sta(0x0);
    lda(0x84);
    JMP(DChunks);
}

int DChunks() {
    // <conv.chunks.Comment object at 0x10198fbc0>
    // <conv.chunks.Comment object at 0x10198fdd0>
    ldy(offsetof(G, Block_SprDataOffset), x);
    iny();
    JSR(DumpFourSpr);
    lda(offsetof(G, FrameCounter));
    // <conv.chunks.Comment object at 0x101994080>
    // <conv.chunks.Comment object at 0x101994110>
    // <conv.chunks.Comment object at 0x101994230>
    asl();
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1019944a0>
    asl();
    anda(0xc0);
    ora(0x0);
    iny();
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x1019945c0>
    // <conv.chunks.Comment object at 0x101994710>
    // <conv.chunks.Comment object at 0x101994650>
    // <conv.chunks.Comment object at 0x1019948c0>
    dey();
    dey();
    lda(offsetof(G, Block_Rel_YPos));
    JSR(DumpTwoSpr);
    lda(offsetof(G, Block_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    lda(offsetof(G, Block_Orig_XPos), x);
    // <conv.chunks.Comment object at 0x101994aa0>
    // <conv.chunks.Comment object at 0x101994b30>
    // <conv.chunks.Comment object at 0x101994c50>
    // <conv.chunks.Comment object at 0x101994d70>
    // <conv.chunks.Comment object at 0x101994e90>
    // <conv.chunks.Comment object at 0x101994fe0>
    sec();
    sbc(offsetof(G, ScreenLeft_X_Pos));
    sta(0x0);
    // <conv.chunks.Comment object at 0x1019951c0>
    // <conv.chunks.Comment object at 0x101995310>
    sec();
    sbc(offsetof(G, Block_Rel_XPos));
    adc(0x0);
    adc(0x6);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    lda(((offsetof(G, Block_Rel_YPos)) + (1)));
    // <conv.chunks.Comment object at 0x101995490>
    // <conv.chunks.Comment object at 0x1019955e0>
    // <conv.chunks.Comment object at 0x101995670>
    // <conv.chunks.Comment object at 0x101995760>
    // <conv.chunks.Comment object at 0x101995a00>
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    lda(((offsetof(G, Block_Rel_XPos)) + (1)));
    sta(((offsetof(G, Sprite_X_Position)) + (8)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101995dc0>
    // <conv.chunks.Comment object at 0x101995fd0>
    // <conv.chunks.Comment object at 0x1019961b0>
    // <conv.chunks.Comment object at 0x1019963f0>
    sec();
    sbc(((offsetof(G, Block_Rel_XPos)) + (1)));
    adc(0x0);
    adc(0x6);
    sta(((offsetof(G, Sprite_X_Position)) + (12)), y);
    lda(offsetof(G, Block_OffscreenBits));
    JSR(ChkLeftCo);
    lda(offsetof(G, Block_OffscreenBits));
    asl();
    BCC(ChnkOfs);
    // <conv.chunks.Comment object at 0x101996570>
    // <conv.chunks.Comment object at 0x101996780>
    // <conv.chunks.Comment object at 0x101996810>
    // <conv.chunks.Comment object at 0x101996900>
    // <conv.chunks.Comment object at 0x101996ba0>
    // <conv.chunks.Comment object at 0x101996cc0>
    // <conv.chunks.Comment object at 0x101996de0>
    // <conv.chunks.Comment object at 0x101996f30>
    // <conv.chunks.Comment object at 0x101996fc0>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // <conv.chunks.Comment object at 0x101997170>
    // <conv.chunks.Comment object at 0x101997320>
    lda(0x0);
    BPL(ExBCDr);
    lda(offsetof(G, Sprite_X_Position), y);
    cmp(((offsetof(G, Sprite_X_Position)) + (4)), y);
    BCC(ExBCDr);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101997440>
    // <conv.chunks.Comment object at 0x1019975f0>
    // <conv.chunks.Comment object at 0x101997740>
    // <conv.chunks.Comment object at 0x101997950>
    // <conv.chunks.Comment object at 0x101997aa0>
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // <conv.chunks.Comment object at 0x101997fb0>
    rts();
    JMP(DrawFireball);
}

int DrawFireball() {
    ldy(offsetof(G, FBall_SprDataOffset), x);
    lda(offsetof(G, Fireball_Rel_YPos));
    sta(offsetof(G, Sprite_Y_Position), y);
    lda(offsetof(G, Fireball_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    JMP(DrawFirebar);
}

int DrawFirebar() {
    lda(offsetof(G, FrameCounter));
    lsr();
    // <conv.chunks.Comment object at 0x1019a07d0>
    // <conv.chunks.Comment object at 0x1019a0920>
    lsr();
    pha();
    anda(0x1);
    eor(0x64);
    sta(offsetof(G, Sprite_Tilenumber), y);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1019a0a70>
    // <conv.chunks.Comment object at 0x1019a0b00>
    // <conv.chunks.Comment object at 0x1019a0b90>
    // <conv.chunks.Comment object at 0x1019a0cb0>
    // <conv.chunks.Comment object at 0x1019a0ec0>
    // <conv.chunks.Comment object at 0x1019a0f80>
    lsr();
    lda(0x2);
    BCC(FireA);
    ora(0b11000000);
    JMP(FireA);
}

int FireA() {
    // <conv.chunks.Comment object at 0x1019a10a0>
    // <conv.chunks.Comment object at 0x1019a1130>
    // <conv.chunks.Comment object at 0x1019a1310>
    // <conv.chunks.Comment object at 0x1019a1430>
    sta(offsetof(G, Sprite_Attributes), y);
    rts();
    JMP(DrawExplosion_Fireball);
}

int DrawExplosion_Fireball() {
    ldy(offsetof(G, Alt_SprDataOffset), x);
    lda(offsetof(G, Fireball_State), x);
    inc(offsetof(G, Fireball_State), x);
    lsr();
    anda(0b111);
    cmp(0x3);
    BCS(KillFireBall);
    JMP(DrawExplosion_Fireworks);
}

int DrawExplosion_Fireworks() {
    tax();
    lda(offsetof(G, ExplosionTiles), x);
    iny();
    JSR(DumpFourSpr);
    dey();
    ldx(offsetof(G, ObjectOffset));
    lda(offsetof(G, Fireball_Rel_YPos));
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x1019a2120>
    // <conv.chunks.Comment object at 0x1019a21b0>
    // <conv.chunks.Comment object at 0x1019a2330>
    // <conv.chunks.Comment object at 0x1019a23c0>
    // <conv.chunks.Comment object at 0x1019a2510>
    // <conv.chunks.Comment object at 0x1019a25a0>
    // <conv.chunks.Comment object at 0x1019a26c0>
    // <conv.chunks.Comment object at 0x1019a2810>
    // <conv.chunks.Comment object at 0x1019a28a0>
    sta(offsetof(G, Sprite_Y_Position), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1019a2cf0>
    // <conv.chunks.Comment object at 0x1019a2d80>
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    lda(offsetof(G, Fireball_Rel_XPos));
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x1019a3260>
    // <conv.chunks.Comment object at 0x1019a33b0>
    // <conv.chunks.Comment object at 0x1019a3440>
    sta(offsetof(G, Sprite_X_Position), y);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1019a3890>
    // <conv.chunks.Comment object at 0x1019a3920>
    sta(((offsetof(G, Sprite_X_Position)) + (8)), y);
    sta(((offsetof(G, Sprite_X_Position)) + (12)), y);
    lda(0x2);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x1019a3e00>
    // <conv.chunks.Comment object at 0x1019a3e90>
    lda(0x82);
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    // <conv.chunks.Comment object at 0x1019b4110>
    lda(0x42);
    sta(((offsetof(G, Sprite_Attributes)) + (8)), y);
    // <conv.chunks.Comment object at 0x1019b4410>
    lda(0xc2);
    sta(((offsetof(G, Sprite_Attributes)) + (12)), y);
    rts();
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1019b4aa0>
    sta(offsetof(G, Fireball_State), x);
    rts();
    JMP(DrawSmallPlatform);
}

int DrawSmallPlatform() {
    ldy(offsetof(G, Enemy_SprDataOffset), x);
    lda(0x5b);
    iny();
    JSR(DumpSixSpr);
    iny();
    lda(0x2);
    JSR(DumpSixSpr);
    dey();
    // <conv.chunks.Comment object at 0x1019b4dd0>
    // <conv.chunks.Comment object at 0x1019b4f20>
    // <conv.chunks.Comment object at 0x1019b5070>
    // <conv.chunks.Comment object at 0x1019b5100>
    // <conv.chunks.Comment object at 0x1019b5250>
    // <conv.chunks.Comment object at 0x1019b52e0>
    // <conv.chunks.Comment object at 0x1019b5370>
    // <conv.chunks.Comment object at 0x1019b5550>
    dey();
    lda(offsetof(G, Enemy_Rel_XPos));
    // <conv.chunks.Comment object at 0x1019b5670>
    sta(offsetof(G, Sprite_X_Position), y);
    sta(((offsetof(G, Sprite_X_Position)) + (12)), y);
    // <conv.chunks.Comment object at 0x1019b58b0>
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x1019b5b50>
    // <conv.chunks.Comment object at 0x1019b5be0>
    sta(((offsetof(G, Sprite_X_Position)) + (16)), y);
    clc();
    adc(0x8);
    sta(((offsetof(G, Sprite_X_Position)) + (8)), y);
    // <conv.chunks.Comment object at 0x1019b60f0>
    // <conv.chunks.Comment object at 0x1019b6180>
    sta(((offsetof(G, Sprite_X_Position)) + (20)), y);
    lda(offsetof(G, Enemy_Y_Position), x);
    // <conv.chunks.Comment object at 0x1019b6600>
    tax();
    pha();
    cpx(0x20);
    BCS(TopSP);
    lda(0xf8);
    JMP(TopSP);
}

int TopSP() {
    // <conv.chunks.Comment object at 0x1019b6810>
    // <conv.chunks.Comment object at 0x1019b68a0>
    // <conv.chunks.Comment object at 0x1019b6930>
    // <conv.chunks.Comment object at 0x1019b6b10>
    // <conv.chunks.Comment object at 0x1019b6ba0>
    JSR(DumpThreeSpr);
    pla();
    // <conv.chunks.Comment object at 0x1019b6de0>
    clc();
    adc(0x80);
    // <conv.chunks.Comment object at 0x1019b6f00>
    tax();
    cpx(0x20);
    BCS(BotSP);
    lda(0xf8);
    JMP(BotSP);
}

int BotSP() {
    // <conv.chunks.Comment object at 0x1019b70b0>
    // <conv.chunks.Comment object at 0x1019b7140>
    // <conv.chunks.Comment object at 0x1019b7320>
    // <conv.chunks.Comment object at 0x1019b73b0>
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (16)), y);
    // <conv.chunks.Comment object at 0x1019b76b0>
    sta(((offsetof(G, Sprite_Y_Position)) + (20)), y);
    lda(offsetof(G, Enemy_OffscreenBits));
    pha();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x1019b7aa0>
    // <conv.chunks.Comment object at 0x1019b7bf0>
    // <conv.chunks.Comment object at 0x1019b7c80>
    BEQ(SOfs);
    lda(0xf8);
    sta(offsetof(G, Sprite_Y_Position), y);
    // <conv.chunks.Comment object at 0x1019b7ec0>
    // <conv.chunks.Comment object at 0x1019b7f50>
    sta(((offsetof(G, Sprite_Y_Position)) + (12)), y);
    JMP(SOfs);
}

int SOfs() {
    // <conv.chunks.Comment object at 0x1019bc350>
    pla();
    pha();
    anda(0b100);
    // <conv.chunks.Comment object at 0x1019bc500>
    BEQ(SOfs2);
    lda(0xf8);
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x1019bc740>
    // <conv.chunks.Comment object at 0x1019bc7d0>
    sta(((offsetof(G, Sprite_Y_Position)) + (16)), y);
    JMP(SOfs2);
}

int SOfs2() {
    // <conv.chunks.Comment object at 0x1019bcc50>
    pla();
    anda(0b10);
    // <conv.chunks.Comment object at 0x1019bcd70>
    BEQ(ExSPl);
    lda(0xf8);
    sta(((offsetof(G, Sprite_Y_Position)) + (8)), y);
    // <conv.chunks.Comment object at 0x1019bcfb0>
    // <conv.chunks.Comment object at 0x1019bd040>
    sta(((offsetof(G, Sprite_Y_Position)) + (20)), y);
    JMP(ExSPl);
}

int ExSPl() {
    // <conv.chunks.Comment object at 0x1019bd4c0>
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy(offsetof(G, Player_Y_HighPos));
    dey();
    // <conv.chunks.Comment object at 0x1019bd730>
    // <conv.chunks.Comment object at 0x1019bd880>
    BNE(ExDBub);
    lda(offsetof(G, Bubble_OffscreenBits));
    // <conv.chunks.Comment object at 0x1019bda30>
    anda(0b1000);
    BNE(ExDBub);
    ldy(offsetof(G, Bubble_SprDataOffset), x);
    lda(offsetof(G, Bubble_Rel_XPos));
    sta(offsetof(G, Sprite_X_Position), y);
    lda(offsetof(G, Bubble_Rel_YPos));
    sta(offsetof(G, Sprite_Y_Position), y);
    // <conv.chunks.Comment object at 0x1019bdc40>
    // <conv.chunks.Comment object at 0x1019bdd90>
    // <conv.chunks.Comment object at 0x1019bdee0>
    // <conv.chunks.Comment object at 0x1019be000>
    // <conv.chunks.Comment object at 0x1019be150>
    // <conv.chunks.Comment object at 0x1019be270>
    lda(0x74);
    sta(offsetof(G, Sprite_Tilenumber), y);
    // <conv.chunks.Comment object at 0x1019be420>
    lda(0x2);
    sta(offsetof(G, Sprite_Attributes), y);
    JMP(ExDBub);
}

int ExDBub() {
    // <conv.chunks.Comment object at 0x1019be660>
    // <conv.chunks.Comment object at 0x1019be870>
    rts();
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda(offsetof(G, InjuryTimer));
    BEQ(CntPl);
    // <conv.chunks.Comment object at 0x1019c6480>
    // <conv.chunks.Comment object at 0x1019c7380>
    lda(offsetof(G, FrameCounter));
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // <conv.chunks.Comment object at 0x1019c75f0>
    // <conv.chunks.Comment object at 0x1019c7680>
    // <conv.chunks.Comment object at 0x1019c77d0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0xb);
    // <conv.chunks.Comment object at 0x1019c7950>
    BEQ(PlayerKilled);
    lda(offsetof(G, PlayerChangeSizeFlag));
    BNE(DoChangeSize);
    ldy(offsetof(G, SwimmingFlag));
    BEQ(FindPlayerAction);
    // <conv.chunks.Comment object at 0x1019c7b60>
    // <conv.chunks.Comment object at 0x1019c7c80>
    // <conv.chunks.Comment object at 0x1019c7da0>
    // <conv.chunks.Comment object at 0x1019c7ec0>
    lda(offsetof(G, Player_State));
    cmp(0x0);
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // <conv.chunks.Comment object at 0x1019d4110>
    // <conv.chunks.Comment object at 0x1019d41a0>
    // <conv.chunks.Comment object at 0x1019d4350>
    lda(offsetof(G, FrameCounter));
    anda(0b100);
    BNE(ExPGH);
    tax();
    ldy(offsetof(G, Player_SprDataOffset));
    lda(offsetof(G, PlayerFacingDir));
    // <conv.chunks.Comment object at 0x1019d4560>
    // <conv.chunks.Comment object at 0x1019d4680>
    // <conv.chunks.Comment object at 0x1019d4800>
    // <conv.chunks.Comment object at 0x1019d4890>
    // <conv.chunks.Comment object at 0x1019d49b0>
    lsr();
    BCS(SwimKT);
    // <conv.chunks.Comment object at 0x1019d4b60>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1019d4d70>
    iny();
    iny();
    JMP(SwimKT);
}

int SwimKT() {
    // <conv.chunks.Comment object at 0x1019d4f20>
    lda(offsetof(G, PlayerSize));
    BEQ(BigKTS);
    lda(((offsetof(G, Sprite_Tilenumber)) + (24)), y);
    cmp(offsetof(G, SwimTileRepOffset));
    BEQ(ExPGH);
    inx();
    JMP(BigKTS);
}

int BigKTS() {
    // <conv.chunks.Comment object at 0x1019d50a0>
    // <conv.chunks.Comment object at 0x1019d51f0>
    // <conv.chunks.Comment object at 0x1019d5400>
    // <conv.chunks.Comment object at 0x1019d5520>
    // <conv.chunks.Comment object at 0x1019d56a0>
    // <conv.chunks.Comment object at 0x1019d5730>
    lda(offsetof(G, SwimKickTileNum), x);
    sta(((offsetof(G, Sprite_Tilenumber)) + (24)), y);
    JMP(ExPGH);
}

int ExPGH() {
    // <conv.chunks.Comment object at 0x1019d58e0>
    // <conv.chunks.Comment object at 0x1019d5af0>
    rts();
    JMP(FindPlayerAction);
}

int FindPlayerAction() {
    JSR(ProcessPlayerAction);
    JMP(PlayerGfxProcessing);
    JMP(DoChangeSize);
}

int DoChangeSize() {
    JSR(HandleChangeSize);
    JMP(PlayerGfxProcessing);
    JMP(PlayerKilled);
}

int PlayerKilled() {
    ldy(0xe);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    JMP(PlayerGfxProcessing);
}

int PlayerGfxProcessing() {
    sta(offsetof(G, PlayerGfxOffset));
    // <conv.chunks.Comment object at 0x1019d63c0>
    lda(0x4);
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // <conv.chunks.Comment object at 0x1019d6540>
    // <conv.chunks.Comment object at 0x1019d66f0>
    lda(offsetof(G, FireballThrowingTimer));
    BEQ(PlayerOffscreenChk);
    ldy(0x0);
    lda(offsetof(G, PlayerAnimTimer));
    cmp(offsetof(G, FireballThrowingTimer));
    sty(offsetof(G, FireballThrowingTimer));
    BCS(PlayerOffscreenChk);
    sta(offsetof(G, FireballThrowingTimer));
    ldy(0x7);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    sta(offsetof(G, PlayerGfxOffset));
    ldy(0x4);
    // <conv.chunks.Comment object at 0x1019d6900>
    // <conv.chunks.Comment object at 0x1019d6a20>
    // <conv.chunks.Comment object at 0x1019d6ab0>
    // <conv.chunks.Comment object at 0x1019d6c60>
    // <conv.chunks.Comment object at 0x1019d6d80>
    // <conv.chunks.Comment object at 0x1019d6ea0>
    // <conv.chunks.Comment object at 0x1019d6fc0>
    // <conv.chunks.Comment object at 0x1019d70e0>
    // <conv.chunks.Comment object at 0x1019d7170>
    // <conv.chunks.Comment object at 0x1019d7350>
    // <conv.chunks.Comment object at 0x1019d7470>
    lda(offsetof(G, Player_X_Speed));
    ora(offsetof(G, Left_Right_Buttons));
    BEQ(SUpdR);
    dey();
    JMP(SUpdR);
}

int SUpdR() {
    // <conv.chunks.Comment object at 0x1019d7680>
    // <conv.chunks.Comment object at 0x1019d77a0>
    // <conv.chunks.Comment object at 0x1019d7920>
    // <conv.chunks.Comment object at 0x1019d79b0>
    tya();
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}

int PlayerOffscreenChk() {
    lda(offsetof(G, Player_OffscreenBits));
    // <conv.chunks.Comment object at 0x1019d7c20>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1019d7e00>
    lsr();
    lsr();
    sta(0x0);
    ldx(0x3);
    lda(offsetof(G, Player_SprDataOffset));
    // <conv.chunks.Comment object at 0x1019d7fe0>
    // <conv.chunks.Comment object at 0x1019d7fb0>
    // <conv.chunks.Comment object at 0x1019e41a0>
    clc();
    adc(0x18);
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // <conv.chunks.Comment object at 0x1019e43e0>
    // <conv.chunks.Comment object at 0x1019e4530>
    // <conv.chunks.Comment object at 0x1019e45c0>
    lda(0xf8);
    lsr(0x0);
    BCC(NPROffscr);
    JSR(DumpTwoSpr);
    JMP(NPROffscr);
}

int NPROffscr() {
    tya();
    sec();
    sbc(0x8);
    // <conv.chunks.Comment object at 0x1019e4b60>
    // <conv.chunks.Comment object at 0x1019e4bf0>
    tay();
    dex();
    BPL(PROfsLoop);
    rts();
    JMP(DrawPlayer_Intermediate);
}

int DrawPlayer_Intermediate() {
    ldx(0x5);
    JMP(PIntLoop);
}

int PIntLoop() {
    // <conv.chunks.Comment object at 0x1019e5100>
    // <conv.chunks.Comment object at 0x1019e5190>
    lda(offsetof(G, IntermediatePlayerData), x);
    sta(0x2, x);
    // <conv.chunks.Comment object at 0x1019e56d0>
    dex();
    BPL(PIntLoop);
    ldx(0xb8);
    ldy(0x4);
    JSR(DrawPlayerLoop);
    lda(((offsetof(G, Sprite_Attributes)) + (36)));
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (32)));
    // <conv.chunks.Comment object at 0x1019e58b0>
    // <conv.chunks.Comment object at 0x1019e59d0>
    // <conv.chunks.Comment object at 0x1019e5a60>
    // <conv.chunks.Comment object at 0x1019e5b80>
    // <conv.chunks.Comment object at 0x1019e5d30>
    // <conv.chunks.Comment object at 0x1019e5f10>
    // <conv.chunks.Comment object at 0x1019e6030>
    rts();
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(0x7);
    // <conv.chunks.Comment object at 0x1019e62d0>
    // <conv.chunks.Comment object at 0x1019e6330>
    // <conv.chunks.Comment object at 0x1019e6390>
    // <conv.chunks.Comment object at 0x1019e63f0>
    // <conv.chunks.Comment object at 0x1019e6480>
    lda(offsetof(G, Player_Rel_XPos));
    sta(offsetof(G, Player_Pos_ForScroll));
    sta(0x5);
    // <conv.chunks.Comment object at 0x1019e6660>
    // <conv.chunks.Comment object at 0x1019e67b0>
    lda(offsetof(G, Player_Rel_YPos));
    sta(0x2);
    // <conv.chunks.Comment object at 0x1019e69c0>
    lda(offsetof(G, PlayerFacingDir));
    sta(0x3);
    // <conv.chunks.Comment object at 0x1019e6bd0>
    lda(offsetof(G, Player_SprAttrib));
    sta(0x4);
    ldx(offsetof(G, PlayerGfxOffset));
    ldy(offsetof(G, Player_SprDataOffset));
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda(offsetof(G, PlayerGraphicsTable), x);
    // <conv.chunks.Comment object at 0x1019e7140>
    sta(0x0);
    lda(((offsetof(G, PlayerGraphicsTable)) + (1)), x);
    // <conv.chunks.Comment object at 0x1019e7290>
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BNE(DrawPlayerLoop);
    // <conv.chunks.Comment object at 0x1019e76b0>
    // <conv.chunks.Comment object at 0x1019e7740>
    rts();
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda(offsetof(G, Player_State));
    // <conv.chunks.Comment object at 0x1019e7980>
    cmp(0x3);
    BEQ(ActionClimbing);
    // <conv.chunks.Comment object at 0x1019e7b00>
    cmp(0x2);
    BEQ(ActionFalling);
    // <conv.chunks.Comment object at 0x1019e7d10>
    cmp(0x1);
    BNE(ProcOnGroundActs);
    // <conv.chunks.Comment object at 0x1019e7f20>
    lda(offsetof(G, SwimmingFlag));
    BNE(ActionSwimming);
    ldy(0x6);
    lda(offsetof(G, CrouchingFlag));
    BNE(NonAnimatedActs);
    ldy(0x0);
    JMP(NonAnimatedActs);
    JMP(ProcOnGroundActs);
}

int ProcOnGroundActs() {
    ldy(0x6);
    lda(offsetof(G, CrouchingFlag));
    BNE(NonAnimatedActs);
    ldy(0x2);
    lda(offsetof(G, Player_X_Speed));
    ora(offsetof(G, Left_Right_Buttons));
    BEQ(NonAnimatedActs);
    lda(offsetof(G, Player_XSpeedAbsolute));
    // <conv.chunks.Comment object at 0x1019ec8f0>
    // <conv.chunks.Comment object at 0x1019ec980>
    // <conv.chunks.Comment object at 0x1019ecb30>
    // <conv.chunks.Comment object at 0x1019ecc50>
    // <conv.chunks.Comment object at 0x1019ecce0>
    // <conv.chunks.Comment object at 0x1019ece90>
    // <conv.chunks.Comment object at 0x1019ecfb0>
    // <conv.chunks.Comment object at 0x1019ed0d0>
    cmp(0x9);
    BCC(ActionWalkRun);
    lda(offsetof(G, Player_MovingDir));
    anda(offsetof(G, PlayerFacingDir));
    BNE(ActionWalkRun);
    iny();
    JMP(NonAnimatedActs);
}

int NonAnimatedActs() {
    JSR(GetGfxOffsetAdder);
    // <conv.chunks.Comment object at 0x1019ed850>
    lda(0x0);
    sta(offsetof(G, PlayerAnimCtrl));
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    // <conv.chunks.Comment object at 0x1019ed9d0>
    // <conv.chunks.Comment object at 0x1019edb80>
    rts();
    JMP(ActionFalling);
}

int ActionFalling() {
    ldy(0x4);
    JSR(GetGfxOffsetAdder);
    JMP(GetCurrentAnimOffset);
    JMP(ActionWalkRun);
}

int ActionWalkRun() {
    ldy(0x4);
    JSR(GetGfxOffsetAdder);
    JMP(FourFrameExtent);
    JMP(ActionClimbing);
}

int ActionClimbing() {
    ldy(0x5);
    lda(offsetof(G, Player_Y_Speed));
    BEQ(NonAnimatedActs);
    JSR(GetGfxOffsetAdder);
    JMP(ThreeFrameExtent);
    JMP(ActionSwimming);
}

int ActionSwimming() {
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1019eea80>
    JSR(GetGfxOffsetAdder);
    lda(offsetof(G, JumpSwimTimer));
    ora(offsetof(G, PlayerAnimCtrl));
    BNE(FourFrameExtent);
    // <conv.chunks.Comment object at 0x1019eec90>
    // <conv.chunks.Comment object at 0x1019eedb0>
    // <conv.chunks.Comment object at 0x1019eeed0>
    lda(offsetof(G, A_B_Buttons));
    asl();
    BCS(FourFrameExtent);
    JMP(GetCurrentAnimOffset);
}

int GetCurrentAnimOffset() {
    lda(offsetof(G, PlayerAnimCtrl));
    JMP(GetOffsetFromAnimCtrl);
    JMP(FourFrameExtent);
}

int FourFrameExtent() {
    lda(0x3);
    JMP(AnimationControl);
    JMP(ThreeFrameExtent);
}

int ThreeFrameExtent() {
    lda(0x2);
    JMP(AnimationControl);
}

int AnimationControl() {
    sta(0x0);
    JSR(GetCurrentAnimOffset);
    pha();
    lda(offsetof(G, PlayerAnimTimer));
    BNE(ExAnimC);
    lda(offsetof(G, PlayerAnimTimerSet));
    sta(offsetof(G, PlayerAnimTimer));
    // <conv.chunks.Comment object at 0x1019ef950>
    // <conv.chunks.Comment object at 0x1019ef9e0>
    // <conv.chunks.Comment object at 0x1019efb90>
    // <conv.chunks.Comment object at 0x1019efc20>
    // <conv.chunks.Comment object at 0x1019efd40>
    // <conv.chunks.Comment object at 0x1019efe90>
    // <conv.chunks.Comment object at 0x1019effb0>
    lda(offsetof(G, PlayerAnimCtrl));
    clc();
    // <conv.chunks.Comment object at 0x1019fc230>
    adc(0x1);
    cmp(0x0);
    BCC(SetAnimC);
    lda(0x0);
    JMP(SetAnimC);
}

int SetAnimC() {
    // <conv.chunks.Comment object at 0x1019fc3e0>
    // <conv.chunks.Comment object at 0x1019fc470>
    // <conv.chunks.Comment object at 0x1019fc5f0>
    // <conv.chunks.Comment object at 0x1019fc680>
    sta(offsetof(G, PlayerAnimCtrl));
    JMP(ExAnimC);
}

int ExAnimC() {
    // <conv.chunks.Comment object at 0x1019fc860>
    pla();
    rts();
    JMP(GetGfxOffsetAdder);
}

int GetGfxOffsetAdder() {
    lda(offsetof(G, PlayerSize));
    BEQ(SzOfs);
    tya();
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1019fca40>
    // <conv.chunks.Comment object at 0x1019fcb60>
    // <conv.chunks.Comment object at 0x1019fcce0>
    // <conv.chunks.Comment object at 0x1019fcda0>
    // <conv.chunks.Comment object at 0x1019fce30>
    tay();
    JMP(SzOfs);
}

int SzOfs() {
    // <conv.chunks.Comment object at 0x1019fd010>
    rts();
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy(offsetof(G, PlayerAnimCtrl));
    // <conv.chunks.Comment object at 0x1019fd1f0>
    lda(offsetof(G, FrameCounter));
    anda(0b11);
    BNE(GorSLog);
    iny();
    cpy(0xa);
    BCC(CSzNext);
    ldy(0x0);
    sty(offsetof(G, PlayerChangeSizeFlag));
    JMP(CSzNext);
}

int CSzNext() {
    // <conv.chunks.Comment object at 0x1019fdee0>
    // <conv.chunks.Comment object at 0x1019fe000>
    // <conv.chunks.Comment object at 0x1019fe180>
    // <conv.chunks.Comment object at 0x1019fe210>
    // <conv.chunks.Comment object at 0x1019fe2a0>
    // <conv.chunks.Comment object at 0x1019fe480>
    // <conv.chunks.Comment object at 0x1019fe510>
    // <conv.chunks.Comment object at 0x1019fe6c0>
    sty(offsetof(G, PlayerAnimCtrl));
    JMP(GorSLog);
}

int GorSLog() {
    // <conv.chunks.Comment object at 0x1019fe840>
    lda(offsetof(G, PlayerSize));
    BNE(ShrinkPlayer);
    lda(offsetof(G, ChangeSizeOffsetAdder), y);
    ldy(0xf);
    JMP(GetOffsetFromAnimCtrl);
}

int GetOffsetFromAnimCtrl() {
    asl();
    asl();
    asl();
    adc(offsetof(G, PlayerGfxTblOffsets), y);
    rts();
    JMP(ShrinkPlayer);
}

int ShrinkPlayer() {
    tya();
    // <conv.chunks.Comment object at 0x1019ff230>
    clc();
    adc(0xa);
    tax();
    ldy(0x9);
    lda(offsetof(G, ChangeSizeOffsetAdder), x);
    BNE(ShrPlF);
    ldy(0x1);
    JMP(ShrPlF);
}

int ShrPlF() {
    // <conv.chunks.Comment object at 0x1019ff350>
    // <conv.chunks.Comment object at 0x1019ff4a0>
    // <conv.chunks.Comment object at 0x1019ff530>
    // <conv.chunks.Comment object at 0x1019ff5c0>
    // <conv.chunks.Comment object at 0x1019ff7a0>
    // <conv.chunks.Comment object at 0x1019ff8f0>
    // <conv.chunks.Comment object at 0x1019ff980>
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    rts();
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy(offsetof(G, Player_SprDataOffset));
    // <conv.chunks.Comment object at 0x1019ffcb0>
    lda(offsetof(G, GameEngineSubroutine));
    cmp(0xb);
    BEQ(KilledAtt);
    lda(offsetof(G, PlayerGfxOffset));
    // <conv.chunks.Comment object at 0x1019ffec0>
    // <conv.chunks.Comment object at 0x1019fff50>
    // <conv.chunks.Comment object at 0x101a04140>
    cmp(0x50);
    BEQ(C_S_IGAtt);
    cmp(0xb8);
    BEQ(C_S_IGAtt);
    cmp(0xc0);
    // <conv.chunks.Comment object at 0x101a042c0>
    // <conv.chunks.Comment object at 0x101a04470>
    // <conv.chunks.Comment object at 0x101a04500>
    // <conv.chunks.Comment object at 0x101a046b0>
    BEQ(C_S_IGAtt);
    cmp(0xc8);
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda(((offsetof(G, Sprite_Attributes)) + (16)), y);
    anda(0b111111);
    sta(((offsetof(G, Sprite_Attributes)) + (16)), y);
    // <conv.chunks.Comment object at 0x101a04ce0>
    // <conv.chunks.Comment object at 0x101a04e00>
    lda(((offsetof(G, Sprite_Attributes)) + (20)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (20)), y);
    JMP(C_S_IGAtt);
}

int C_S_IGAtt() {
    lda(((offsetof(G, Sprite_Attributes)) + (24)), y);
    anda(0b111111);
    sta(((offsetof(G, Sprite_Attributes)) + (24)), y);
    // <conv.chunks.Comment object at 0x101a05820>
    // <conv.chunks.Comment object at 0x101a05940>
    lda(((offsetof(G, Sprite_Attributes)) + (28)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((offsetof(G, Sprite_Attributes)) + (28)), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // <conv.chunks.Comment object at 0x101a05e20>
    // <conv.chunks.Comment object at 0x101a05f40>
    // <conv.chunks.Comment object at 0x101a06180>
    rts();
    JMP(RelativePlayerPosition);
}

int RelativePlayerPosition() {
    ldx(0x0);
    ldy(0x0);
    JMP(RelWOfs);
    JMP(RelativeBubblePosition);
}

int RelativeBubblePosition() {
    ldy(0x1);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x101a066c0>
    // <conv.chunks.Comment object at 0x101a06750>
    ldy(0x3);
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x101a06b70>
    // <conv.chunks.Comment object at 0x101a06c00>
    ldy(0x2);
    JMP(RelWOfs);
}

int RelWOfs() {
    // <conv.chunks.Comment object at 0x101a06e10>
    JSR(GetObjRelativePosition);
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x101a07260>
    // <conv.chunks.Comment object at 0x101a072f0>
    ldy(0x6);
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101a07710>
    // <conv.chunks.Comment object at 0x101a077a0>
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(0x9);
    ldy(0x4);
    // <conv.chunks.Comment object at 0x101a07a70>
    // <conv.chunks.Comment object at 0x101a07b00>
    JSR(VariableObjOfsRelPos);
    inx();
    // <conv.chunks.Comment object at 0x101a07dd0>
    inx();
    lda(0x9);
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(0x0);
    // <conv.chunks.Comment object at 0x101a0c140>
    clc();
    adc(0x0);
    tax();
    // <conv.chunks.Comment object at 0x101a0c2f0>
    // <conv.chunks.Comment object at 0x101a0c2c0>
    JSR(GetObjRelativePosition);
    ldx(offsetof(G, ObjectOffset));
    // <conv.chunks.Comment object at 0x101a0c590>
    rts();
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda(offsetof(G, SprObject_Y_Position), x);
    sta(offsetof(G, SprObject_Rel_YPos), y);
    lda(offsetof(G, SprObject_X_Position), x);
    sec();
    // <conv.chunks.Comment object at 0x101a0c770>
    // <conv.chunks.Comment object at 0x101a0c8c0>
    // <conv.chunks.Comment object at 0x101a0ca10>
    // <conv.chunks.Comment object at 0x101a0cb90>
    sbc(offsetof(G, ScreenLeft_X_Pos));
    sta(offsetof(G, SprObject_Rel_XPos), y);
    // <conv.chunks.Comment object at 0x101a0cd10>
    rts();
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101a0cf20>
    // <conv.chunks.Comment object at 0x101a0cf80>
    // <conv.chunks.Comment object at 0x101a0d010>
    JMP(GetOffScreenBitsSet);
    JMP(GetFireballOffscreenBits);
}

int GetFireballOffscreenBits() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    ldy(0x2);
    JMP(GetOffScreenBitsSet);
    JMP(GetBubbleOffscreenBits);
}

int GetBubbleOffscreenBits() {
    ldy(0x1);
    JSR(GetProperObjOffset);
    ldy(0x3);
    JMP(GetOffScreenBitsSet);
    JMP(GetMiscOffscreenBits);
}

int GetMiscOffscreenBits() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    ldy(0x6);
    JMP(GetOffScreenBitsSet);
    JMP(GetProperObjOffset);
}

int GetProperObjOffset() {
    txa();
    // <conv.chunks.Comment object at 0x101a0e180>
    clc();
    adc(offsetof(G, ObjOffsetData), y);
    tax();
    // <conv.chunks.Comment object at 0x101a0e420>
    // <conv.chunks.Comment object at 0x101a0e5a0>
    rts();
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101a0e6f0>
    // <conv.chunks.Comment object at 0x101a0e780>
    JMP(SetOffscrBitsOffset);
    JMP(GetBlockOffscreenBits);
}

int GetBlockOffscreenBits() {
    lda(0x9);
    ldy(0x4);
    JMP(SetOffscrBitsOffset);
}

int SetOffscrBitsOffset() {
    stx(0x0);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x101a0ed50>
    // <conv.chunks.Comment object at 0x101a0eea0>
    tax();
    JMP(GetOffScreenBitsSet);
}

int GetOffScreenBitsSet() {
    tya();
    // <conv.chunks.Comment object at 0x101a0f080>
    pha();
    JSR(RunOffscrBitsSubs);
    asl();
    // <conv.chunks.Comment object at 0x101a0f2c0>
    asl();
    asl();
    asl();
    ora(0x0);
    sta(0x0);
    pla();
    // <conv.chunks.Comment object at 0x101a0f530>
    // <conv.chunks.Comment object at 0x101a0f500>
    // <conv.chunks.Comment object at 0x101a0f5c0>
    tay();
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a0f8c0>
    sta(offsetof(G, SprObject_OffscrBits), y);
    ldx(offsetof(G, ObjectOffset));
    rts();
    JMP(RunOffscrBitsSubs);
}

int RunOffscrBitsSubs() {
    JSR(GetXOffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x101a0fc80>
    // <conv.chunks.Comment object at 0x101a0fdd0>
    lsr();
    lsr();
    lsr();
    sta(0x0);
    // <conv.chunks.Comment object at 0x101a18080>
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // <conv.chunks.Comment object at 0x101a184d0>
    // <conv.chunks.Comment object at 0x101a18f80>
    // <conv.chunks.Comment object at 0x101a19070>
    lda(offsetof(G, ScreenEdge_X_Pos), y);
    sec();
    sbc(offsetof(G, SprObject_X_Position), x);
    sta(0x7);
    lda(offsetof(G, ScreenEdge_PageLoc), y);
    sbc(offsetof(G, SprObject_PageLoc), x);
    ldx(offsetof(G, DefaultXOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x101a192b0>
    // <conv.chunks.Comment object at 0x101a19340>
    // <conv.chunks.Comment object at 0x101a194c0>
    // <conv.chunks.Comment object at 0x101a19550>
    // <conv.chunks.Comment object at 0x101a19700>
    // <conv.chunks.Comment object at 0x101a19850>
    cmp(0x0);
    BMI(XLdBData);
    ldx(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x101a19a00>
    // <conv.chunks.Comment object at 0x101a19bb0>
    cmp(0x1);
    BPL(XLdBData);
    lda(0x38);
    // <conv.chunks.Comment object at 0x101a19e20>
    // <conv.chunks.Comment object at 0x101a19fd0>
    sta(0x6);
    lda(0x8);
    // <conv.chunks.Comment object at 0x101a1a060>
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // <conv.chunks.Comment object at 0x101a1a3f0>
    lda(offsetof(G, XOffscreenBitsData), x);
    ldx(0x4);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x101a1a5a0>
    // <conv.chunks.Comment object at 0x101a1a630>
    BNE(ExXOfsBS);
    dey();
    BPL(XOfsLoop);
    JMP(ExXOfsBS);
}

int ExXOfsBS() {
    rts();
    JMP(GetYOffscreenBits);
}

int GetYOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(YOfsLoop);
}

int YOfsLoop() {
    // <conv.chunks.Comment object at 0x101a1abd0>
    // <conv.chunks.Comment object at 0x101a1b4d0>
    // <conv.chunks.Comment object at 0x101a1b5c0>
    lda(offsetof(G, HighPosUnitData), y);
    sec();
    sbc(offsetof(G, SprObject_Y_Position), x);
    sta(0x7);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101a1b860>
    // <conv.chunks.Comment object at 0x101a1b9e0>
    // <conv.chunks.Comment object at 0x101a1ba70>
    sbc(offsetof(G, SprObject_Y_HighPos), x);
    ldx(offsetof(G, DefaultYOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x101a1bd10>
    cmp(0x0);
    BMI(YLdBData);
    ldx(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x101a1bec0>
    // <conv.chunks.Comment object at 0x101a240b0>
    cmp(0x1);
    BPL(YLdBData);
    lda(0x20);
    // <conv.chunks.Comment object at 0x101a24320>
    // <conv.chunks.Comment object at 0x101a244d0>
    sta(0x6);
    lda(0x4);
    // <conv.chunks.Comment object at 0x101a24560>
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // <conv.chunks.Comment object at 0x101a248f0>
    lda(offsetof(G, YOffscreenBitsData), x);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x101a24aa0>
    cmp(0x0);
    BNE(ExYOfsBS);
    dey();
    // <conv.chunks.Comment object at 0x101a24bf0>
    // <conv.chunks.Comment object at 0x101a24dd0>
    BPL(YOfsLoop);
    JMP(ExYOfsBS);
}

int ExYOfsBS() {
    rts();
    JMP(DividePDiff);
}

int DividePDiff() {
    sta(0x5);
    lda(0x7);
    cmp(0x6);
    BCS(ExDivPD);
    lsr();
    // <conv.chunks.Comment object at 0x101a250a0>
    // <conv.chunks.Comment object at 0x101a25070>
    // <conv.chunks.Comment object at 0x101a25130>
    // <conv.chunks.Comment object at 0x101a25370>
    // <conv.chunks.Comment object at 0x101a25550>
    lsr();
    lsr();
    anda(0x7);
    cpy(0x1);
    BCS(SetOscrO);
    adc(0x5);
    JMP(SetOscrO);
}

int SetOscrO() {
    // <conv.chunks.Comment object at 0x101a25700>
    // <conv.chunks.Comment object at 0x101a25790>
    // <conv.chunks.Comment object at 0x101a258b0>
    // <conv.chunks.Comment object at 0x101a25a90>
    // <conv.chunks.Comment object at 0x101a25b20>
    tax();
    JMP(ExDivPD);
}

int ExDivPD() {
    // <conv.chunks.Comment object at 0x101a25ca0>
    rts();
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x101a25df0>
    // <conv.chunks.Comment object at 0x101a25e50>
    // <conv.chunks.Comment object at 0x101a25eb0>
    // <conv.chunks.Comment object at 0x101a25f40>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x101a260f0>
    lda(0x0);
    BCC(NoHFlip);
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101a26180>
    // <conv.chunks.Comment object at 0x101a263c0>
    // <conv.chunks.Comment object at 0x101a26600>
    sta(offsetof(G, Sprite_Tilenumber), y);
    lda(0x40);
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // <conv.chunks.Comment object at 0x101a26810>
    // <conv.chunks.Comment object at 0x101a268a0>
    // <conv.chunks.Comment object at 0x101a26a80>
    sta(offsetof(G, Sprite_Tilenumber), y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101a26c60>
    sta(((offsetof(G, Sprite_Tilenumber)) + (4)), y);
    lda(0x0);
    JMP(SetHFAt);
}

int SetHFAt() {
    // <conv.chunks.Comment object at 0x101a26f30>
    // <conv.chunks.Comment object at 0x101a26fc0>
    ora(0x4);
    sta(offsetof(G, Sprite_Attributes), y);
    // <conv.chunks.Comment object at 0x101a27170>
    sta(((offsetof(G, Sprite_Attributes)) + (4)), y);
    lda(0x2);
    sta(offsetof(G, Sprite_Y_Position), y);
    sta(((offsetof(G, Sprite_Y_Position)) + (4)), y);
    // <conv.chunks.Comment object at 0x101a27530>
    // <conv.chunks.Comment object at 0x101a275c0>
    // <conv.chunks.Comment object at 0x101a27770>
    lda(0x5);
    sta(offsetof(G, Sprite_X_Position), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101a27980>
    // <conv.chunks.Comment object at 0x101a27bf0>
    // <conv.chunks.Comment object at 0x101a27c80>
    sta(((offsetof(G, Sprite_X_Position)) + (4)), y);
    lda(0x2);
    clc();
    // <conv.chunks.Comment object at 0x101a27fb0>
    // <conv.chunks.Comment object at 0x101a30080>
    adc(0x8);
    sta(0x2);
    tya();
    clc();
    // <conv.chunks.Comment object at 0x101a30320>
    // <conv.chunks.Comment object at 0x101a30470>
    adc(0x8);
    tay();
    inx();
    inx();
    // <conv.chunks.Comment object at 0x101a306b0>
    // <conv.chunks.Comment object at 0x101a30770>
    rts();
    JMP(SoundEngine);
}

int SoundEngine() {
    lda(offsetof(G, OperMode));
    // <conv.chunks.Comment object at 0x101a30980>
    BNE(SndOn);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    // <conv.chunks.Comment object at 0x101a30ef0>
    rts();
    JMP(SndOn);
}

int SndOn() {
    lda(0xff);
    sta(offsetof(G, JOYPAD_PORT2));
    // <conv.chunks.Comment object at 0x101a31160>
    lda(0xf);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    lda(offsetof(G, PauseModeFlag));
    // <conv.chunks.Comment object at 0x101a31370>
    // <conv.chunks.Comment object at 0x101a31520>
    BNE(InPause);
    lda(offsetof(G, PauseSoundQueue));
    // <conv.chunks.Comment object at 0x101a31760>
    cmp(0x1);
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // <conv.chunks.Comment object at 0x101a318e0>
    // <conv.chunks.Comment object at 0x101a31a90>
    lda(offsetof(G, PauseSoundBuffer));
    BNE(ContPau);
    lda(offsetof(G, PauseSoundQueue));
    // <conv.chunks.Comment object at 0x101a31d30>
    BEQ(SkipSoundSubroutines);
    sta(offsetof(G, PauseSoundBuffer));
    sta(offsetof(G, PauseModeFlag));
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a31f40>
    // <conv.chunks.Comment object at 0x101a32060>
    // <conv.chunks.Comment object at 0x101a32180>
    sta(offsetof(G, SND_MASTERCTRL_REG));
    sta(offsetof(G, Square1SoundBuffer));
    sta(offsetof(G, Square2SoundBuffer));
    sta(offsetof(G, NoiseSoundBuffer));
    lda(0xf);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    lda(0x2a);
    // <conv.chunks.Comment object at 0x101a326c0>
    // <conv.chunks.Comment object at 0x101a32870>
    sta(offsetof(G, Squ1_SfxLenCounter));
    JMP(PTone1F);
}

int PTone1F() {
    // <conv.chunks.Comment object at 0x101a32a80>
    lda(0x44);
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // <conv.chunks.Comment object at 0x101a32b70>
    // <conv.chunks.Comment object at 0x101a32d50>
    lda(offsetof(G, Squ1_SfxLenCounter));
    cmp(0x24);
    // <conv.chunks.Comment object at 0x101a32ed0>
    BEQ(PTone2F);
    cmp(0x1e);
    // <conv.chunks.Comment object at 0x101a33110>
    BEQ(PTone1F);
    cmp(0x18);
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // <conv.chunks.Comment object at 0x101a33350>
    // <conv.chunks.Comment object at 0x101a333e0>
    // <conv.chunks.Comment object at 0x101a335c0>
    lda(0x64);
    JMP(PTRegC);
}

int PTRegC() {
    ldx(0x84);
    ldy(0x7f);
    JSR(PlaySqu1Sfx);
    JMP(DecPauC);
}

int DecPauC() {
    // <conv.chunks.Comment object at 0x101a33a70>
    dec(offsetof(G, Squ1_SfxLenCounter));
    BNE(SkipSoundSubroutines);
    lda(0x0);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    lda(offsetof(G, PauseSoundBuffer));
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101a33ce0>
    // <conv.chunks.Comment object at 0x101a33d70>
    // <conv.chunks.Comment object at 0x101a33f20>
    // <conv.chunks.Comment object at 0x101a38080>
    BNE(SkipPIn);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a382c0>
    sta(offsetof(G, PauseModeFlag));
    JMP(SkipPIn);
}

int SkipPIn() {
    // <conv.chunks.Comment object at 0x101a384d0>
    lda(0x0);
    sta(offsetof(G, PauseSoundBuffer));
    BEQ(SkipSoundSubroutines);
    JMP(RunSoundSubroutines);
}

int RunSoundSubroutines() {
    JSR(Square1SfxHandler);
    JSR(Square2SfxHandler);
    JSR(NoiseSfxHandler);
    JSR(MusicHandler);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a38860>
    // <conv.chunks.Comment object at 0x101a38980>
    // <conv.chunks.Comment object at 0x101a38aa0>
    // <conv.chunks.Comment object at 0x101a38bc0>
    // <conv.chunks.Comment object at 0x101a38ce0>
    sta(offsetof(G, AreaMusicQueue));
    sta(offsetof(G, EventMusicQueue));
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a39010>
    sta(offsetof(G, Square1SoundQueue));
    sta(offsetof(G, Square2SoundQueue));
    sta(offsetof(G, NoiseSoundQueue));
    sta(offsetof(G, PauseSoundQueue));
    ldy(offsetof(G, DAC_Counter));
    // <conv.chunks.Comment object at 0x101a394f0>
    lda(offsetof(G, AreaMusicBuffer));
    anda(0b11);
    // <conv.chunks.Comment object at 0x101a39700>
    BEQ(NoIncDAC);
    inc(offsetof(G, DAC_Counter));
    // <conv.chunks.Comment object at 0x101a39910>
    cpy(0x30);
    BCC(StrWave);
    JMP(NoIncDAC);
}

int NoIncDAC() {
    tya();
    BEQ(StrWave);
    dec(offsetof(G, DAC_Counter));
    JMP(StrWave);
}

int StrWave() {
    // <conv.chunks.Comment object at 0x101a39d30>
    // <conv.chunks.Comment object at 0x101a39e80>
    // <conv.chunks.Comment object at 0x101a39fa0>
    sty(((offsetof(G, SND_DELTA_REG)) + (1)));
    rts();
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty(((offsetof(G, SND_SQUARE1_REG)) + (1)));
    // <conv.chunks.Comment object at 0x101a3a300>
    stx(offsetof(G, SND_SQUARE1_REG));
    rts();
    JMP(PlaySqu1Sfx);
}

int PlaySqu1Sfx() {
    JSR(Dump_Squ1_Regs);
    JMP(SetFreq_Squ1);
}

int SetFreq_Squ1() {
    ldx(0x0);
    JMP(Dump_Freq_Regs);
}

int Dump_Freq_Regs() {
    tay();
    lda(((offsetof(G, FreqRegLookupTbl)) + (1)), y);
    BEQ(NoTone);
    sta(((offsetof(G, SND_REGISTER)) + (2)), x);
    lda(offsetof(G, FreqRegLookupTbl), y);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x101a3a9c0>
    // <conv.chunks.Comment object at 0x101a3abd0>
    // <conv.chunks.Comment object at 0x101a3ad20>
    // <conv.chunks.Comment object at 0x101a3af30>
    // <conv.chunks.Comment object at 0x101a3b080>
    sta(((offsetof(G, SND_REGISTER)) + (3)), x);
    JMP(NoTone);
}

int NoTone() {
    rts();
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx(offsetof(G, SND_SQUARE2_REG));
    // <conv.chunks.Comment object at 0x101a3b4a0>
    sty(((offsetof(G, SND_SQUARE2_REG)) + (1)));
    rts();
    JMP(PlaySqu2Sfx);
}

int PlaySqu2Sfx() {
    JSR(Dump_Sq2_Regs);
    JMP(SetFreq_Squ2);
}

int SetFreq_Squ2() {
    ldx(0x4);
    BNE(Dump_Freq_Regs);
    JMP(SetFreq_Tri);
}

int SetFreq_Tri() {
    ldx(0x8);
    BNE(Dump_Freq_Regs);
    JMP(PlayFlagpoleSlide);
}

int PlayFlagpoleSlide() {
    lda(0x40);
    // <conv.chunks.Comment object at 0x101a3bf20>
    sta(offsetof(G, Squ1_SfxLenCounter));
    lda(0x62);
    // <conv.chunks.Comment object at 0x101a448f0>
    JSR(SetFreq_Squ1);
    ldx(0x99);
    // <conv.chunks.Comment object at 0x101a44b00>
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(0x26);
    // <conv.chunks.Comment object at 0x101a44d70>
    BNE(JumpRegContents);
    JMP(PlayBigJump);
}

int PlayBigJump() {
    lda(0x18);
    JMP(JumpRegContents);
}

int JumpRegContents() {
    ldx(0x82);
    ldy(0xa7);
    // <conv.chunks.Comment object at 0x101a45100>
    // <conv.chunks.Comment object at 0x101a45190>
    JSR(PlaySqu1Sfx);
    lda(0x28);
    sta(offsetof(G, Squ1_SfxLenCounter));
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda(offsetof(G, Squ1_SfxLenCounter));
    cmp(0x25);
    // <conv.chunks.Comment object at 0x101a456a0>
    // <conv.chunks.Comment object at 0x101a457c0>
    BNE(N2Prt);
    ldx(0x5f);
    // <conv.chunks.Comment object at 0x101a45a00>
    ldy(0xf6);
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // <conv.chunks.Comment object at 0x101a45b80>
    // <conv.chunks.Comment object at 0x101a45d30>
    cmp(0x20);
    BNE(DecJpFPS);
    ldx(0x48);
    JMP(FPS2nd);
}

int FPS2nd() {
    // <conv.chunks.Comment object at 0x101a45fa0>
    // <conv.chunks.Comment object at 0x101a46030>
    ldy(0xbc);
    JMP(DmpJpFPS);
}

int DmpJpFPS() {
    JSR(Dump_Squ1_Regs);
    BNE(DecJpFPS);
    JMP(PlayFireballThrow);
}

int PlayFireballThrow() {
    lda(0x5);
    ldy(0x99);
    BNE(Fthrow);
    JMP(PlayBump);
}

int PlayBump() {
    lda(0xa);
    // <conv.chunks.Comment object at 0x101a46840>
    ldy(0x93);
    JMP(Fthrow);
}

int Fthrow() {
    // <conv.chunks.Comment object at 0x101a469c0>
    ldx(0x9e);
    sta(offsetof(G, Squ1_SfxLenCounter));
    lda(0xc);
    // <conv.chunks.Comment object at 0x101a46cc0>
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda(offsetof(G, Squ1_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a46f00>
    cmp(0x6);
    BNE(DecJpFPS);
    lda(0xbb);
    // <conv.chunks.Comment object at 0x101a47200>
    sta(((offsetof(G, SND_SQUARE1_REG)) + (1)));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // <conv.chunks.Comment object at 0x101a474d0>
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy(offsetof(G, Square1SoundQueue));
    // <conv.chunks.Comment object at 0x101a47650>
    BEQ(CheckSfx1Buffer);
    sty(offsetof(G, Square1SoundBuffer));
    BMI(PlaySmallJump);
    // <conv.chunks.Comment object at 0x101a47860>
    // <conv.chunks.Comment object at 0x101a47980>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlayBigJump);
    // <conv.chunks.Comment object at 0x101a47b90>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlayBump);
    // <conv.chunks.Comment object at 0x101a47dd0>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlaySwimStomp);
    // <conv.chunks.Comment object at 0x101a47fe0>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlaySmackEnemy);
    // <conv.chunks.Comment object at 0x101a50230>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlayPipeDownInj);
    // <conv.chunks.Comment object at 0x101a50440>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlayFireballThrow);
    // <conv.chunks.Comment object at 0x101a50650>
    lsr(offsetof(G, Square1SoundQueue));
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda(offsetof(G, Square1SoundBuffer));
    BEQ(ExS1H);
    BMI(ContinueSndJump);
    // <conv.chunks.Comment object at 0x101a509b0>
    // <conv.chunks.Comment object at 0x101a50ad0>
    // <conv.chunks.Comment object at 0x101a50c20>
    lsr();
    BCS(ContinueSndJump);
    // <conv.chunks.Comment object at 0x101a50dd0>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x101a50fb0>
    lsr();
    BCS(ContinueSwimStomp);
    // <conv.chunks.Comment object at 0x101a51160>
    lsr();
    BCS(ContinueSmackEnemy);
    // <conv.chunks.Comment object at 0x101a51310>
    lsr();
    BCS(ContinuePipeDownInj);
    // <conv.chunks.Comment object at 0x101a514c0>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x101a51670>
    lsr();
    BCS(DecrementSfx1Length);
    JMP(ExS1H);
}

int ExS1H() {
    rts();
    JMP(PlaySwimStomp);
}

int PlaySwimStomp() {
    lda(0xe);
    // <conv.chunks.Comment object at 0x101a51a60>
    sta(offsetof(G, Squ1_SfxLenCounter));
    ldy(0x9c);
    // <conv.chunks.Comment object at 0x101a51c70>
    ldx(0x9e);
    lda(0x26);
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy(offsetof(G, Squ1_SfxLenCounter));
    lda(((offsetof(G, SwimStompEnvelopeData)) - (1)), y);
    sta(offsetof(G, SND_SQUARE1_REG));
    // <conv.chunks.Comment object at 0x101a52090>
    // <conv.chunks.Comment object at 0x101a521b0>
    // <conv.chunks.Comment object at 0x101a523c0>
    cpy(0x6);
    BNE(BranchToDecLength1);
    lda(0x9e);
    sta(((offsetof(G, SND_SQUARE1_REG)) + (2)));
    JMP(BranchToDecLength1);
}

int BranchToDecLength1() {
    BNE(DecrementSfx1Length);
    JMP(PlaySmackEnemy);
}

int PlaySmackEnemy() {
    lda(0xe);
    // <conv.chunks.Comment object at 0x101a52b40>
    ldy(0xcb);
    ldx(0x9f);
    sta(offsetof(G, Squ1_SfxLenCounter));
    lda(0x28);
    // <conv.chunks.Comment object at 0x101a52f30>
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy(offsetof(G, Squ1_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a53290>
    cpy(0x8);
    BNE(SmSpc);
    lda(0xa0);
    sta(((offsetof(G, SND_SQUARE1_REG)) + (2)));
    // <conv.chunks.Comment object at 0x101a535c0>
    // <conv.chunks.Comment object at 0x101a53650>
    lda(0x9f);
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // <conv.chunks.Comment object at 0x101a53ad0>
    lda(0x90);
    JMP(SmTick);
}

int SmTick() {
    sta(offsetof(G, SND_SQUARE1_REG));
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec(offsetof(G, Squ1_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a53dd0>
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(0x0);
    stx(0xf1);
    // <conv.chunks.Comment object at 0x101a5c080>
    // <conv.chunks.Comment object at 0x101a5c1d0>
    ldx(0xe);
    stx(offsetof(G, SND_MASTERCTRL_REG));
    ldx(0xf);
    stx(offsetof(G, SND_MASTERCTRL_REG));
    JMP(ExSfx1);
}

int ExSfx1() {
    rts();
    JMP(PlayPipeDownInj);
}

int PlayPipeDownInj() {
    lda(0x2f);
    // <conv.chunks.Comment object at 0x101a5c7a0>
    sta(offsetof(G, Squ1_SfxLenCounter));
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda(offsetof(G, Squ1_SfxLenCounter));
    lsr();
    BCS(NoPDwnL);
    // <conv.chunks.Comment object at 0x101a5c9e0>
    // <conv.chunks.Comment object at 0x101a5cb30>
    // <conv.chunks.Comment object at 0x101a5cbc0>
    lsr();
    BCS(NoPDwnL);
    anda(0b10);
    BEQ(NoPDwnL);
    ldy(0x91);
    // <conv.chunks.Comment object at 0x101a5d0d0>
    ldx(0x9a);
    lda(0x44);
    JSR(PlaySqu1Sfx);
    JMP(NoPDwnL);
}

int NoPDwnL() {
    JMP(DecrementSfx1Length);
    JMP(PlayCoinGrab);
}

int PlayCoinGrab() {
    lda(0x35);
    ldx(0x8d);
    // <conv.chunks.Comment object at 0x101a5ec90>
    // <conv.chunks.Comment object at 0x101a5db50>
    BNE(CGrab_TTickRegL);
    JMP(PlayTimerTick);
}

int PlayTimerTick() {
    lda(0x6);
    ldx(0x98);
    JMP(CGrab_TTickRegL);
}

int CGrab_TTickRegL() {
    sta(offsetof(G, Squ2_SfxLenCounter));
    ldy(0x7f);
    lda(0x42);
    // <conv.chunks.Comment object at 0x101a644d0>
    // <conv.chunks.Comment object at 0x101a64560>
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda(offsetof(G, Squ2_SfxLenCounter));
    cmp(0x30);
    // <conv.chunks.Comment object at 0x101a64830>
    // <conv.chunks.Comment object at 0x101a64950>
    BNE(N2Tone);
    lda(0x54);
    // <conv.chunks.Comment object at 0x101a64b90>
    sta(((offsetof(G, SND_SQUARE2_REG)) + (2)));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x101a64fe0>
    sta(offsetof(G, Squ2_SfxLenCounter));
    ldy(0x94);
    // <conv.chunks.Comment object at 0x101a651f0>
    lda(0x5e);
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda(offsetof(G, Squ2_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a65550>
    cmp(0x18);
    BNE(DecrementSfx2Length);
    ldy(0x93);
    // <conv.chunks.Comment object at 0x101a65850>
    lda(0x18);
    JMP(SBlasJ);
}

int SBlasJ() {
    // <conv.chunks.Comment object at 0x101a659d0>
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(0x36);
    // <conv.chunks.Comment object at 0x101a65c40>
    sta(offsetof(G, Squ2_SfxLenCounter));
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda(offsetof(G, Squ2_SfxLenCounter));
    lsr();
    BCS(DecrementSfx2Length);
    // <conv.chunks.Comment object at 0x101a65e80>
    // <conv.chunks.Comment object at 0x101a65fd0>
    // <conv.chunks.Comment object at 0x101a66060>
    tay();
    lda(((offsetof(G, PowerUpGrabFreqData)) - (1)), y);
    ldx(0x5d);
    // <conv.chunks.Comment object at 0x101a66210>
    // <conv.chunks.Comment object at 0x101a66420>
    ldy(0x7f);
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec(offsetof(G, Squ2_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a66780>
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x101a669f0>
    stx(offsetof(G, Square2SoundBuffer));
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(0xd);
    // <conv.chunks.Comment object at 0x101a66c30>
    stx(offsetof(G, SND_MASTERCTRL_REG));
    ldx(0xf);
    stx(offsetof(G, SND_MASTERCTRL_REG));
    JMP(ExSfx2);
}

int ExSfx2() {
    rts();
    JMP(Square2SfxHandler);
}

int Square2SfxHandler() {
    lda(offsetof(G, Square2SoundBuffer));
    anda(offsetof(G, Sfx_ExtraLife));
    // <conv.chunks.Comment object at 0x101a67140>
    // <conv.chunks.Comment object at 0x101a67260>
    BNE(ContinueExtraLife);
    ldy(offsetof(G, Square2SoundQueue));
    // <conv.chunks.Comment object at 0x101a67470>
    BEQ(CheckSfx2Buffer);
    sty(offsetof(G, Square2SoundBuffer));
    BMI(PlayBowserFall);
    // <conv.chunks.Comment object at 0x101a67680>
    // <conv.chunks.Comment object at 0x101a677a0>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayCoinGrab);
    // <conv.chunks.Comment object at 0x101a679b0>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayGrowPowerUp);
    // <conv.chunks.Comment object at 0x101a67bc0>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayGrowVine);
    // <conv.chunks.Comment object at 0x101a67dd0>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayBlast);
    // <conv.chunks.Comment object at 0x101a67fe0>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayTimerTick);
    // <conv.chunks.Comment object at 0x101a6c230>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayPowerUpGrab);
    // <conv.chunks.Comment object at 0x101a6c440>
    lsr(offsetof(G, Square2SoundQueue));
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda(offsetof(G, Square2SoundBuffer));
    BEQ(ExS2H);
    BMI(ContinueBowserFall);
    // <conv.chunks.Comment object at 0x101a6c7d0>
    // <conv.chunks.Comment object at 0x101a6c8f0>
    // <conv.chunks.Comment object at 0x101a6ca40>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x101a6cbf0>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x101a6cda0>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x101a6cf50>
    lsr();
    BCS(ContinueBlast);
    // <conv.chunks.Comment object at 0x101a6d100>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x101a6d2b0>
    lsr();
    BCS(ContinuePowerUpGrab);
    // <conv.chunks.Comment object at 0x101a6d460>
    lsr();
    BCS(ContinueExtraLife);
    JMP(ExS2H);
}

int ExS2H() {
    rts();
    JMP(Cont_CGrab_TTick);
}

int Cont_CGrab_TTick() {
    JMP(ContinueCGrabTTick);
    JMP(JumpToDecLength2);
}

int JumpToDecLength2() {
    JMP(DecrementSfx2Length);
    JMP(PlayBowserFall);
}

int PlayBowserFall() {
    lda(0x38);
    // <conv.chunks.Comment object at 0x101a6dac0>
    sta(offsetof(G, Squ2_SfxLenCounter));
    ldy(0xc4);
    // <conv.chunks.Comment object at 0x101a6dcd0>
    lda(0x18);
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda(offsetof(G, Squ2_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a6e090>
    cmp(0x8);
    BNE(DecrementSfx2Length);
    ldy(0xa4);
    // <conv.chunks.Comment object at 0x101a6e390>
    lda(0x5a);
    JMP(PBFRegs);
}

int PBFRegs() {
    // <conv.chunks.Comment object at 0x101a6e510>
    ldx(0x9f);
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // <conv.chunks.Comment object at 0x101a6e690>
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(0x30);
    // <conv.chunks.Comment object at 0x101a6e8a0>
    sta(offsetof(G, Squ2_SfxLenCounter));
    JMP(ContinueExtraLife);
}

int ContinueExtraLife() {
    lda(offsetof(G, Squ2_SfxLenCounter));
    ldx(0x3);
    JMP(DivLLoop);
}

int DivLLoop() {
    lsr();
    BCS(JumpToDecLength2);
    // <conv.chunks.Comment object at 0x101a6edb0>
    dex();
    BNE(DivLLoop);
    // <conv.chunks.Comment object at 0x101a6ef60>
    tay();
    lda(((offsetof(G, ExtraLifeFreqData)) - (1)), y);
    // <conv.chunks.Comment object at 0x101a6f110>
    ldx(0x82);
    ldy(0x7f);
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(0x10);
    // <conv.chunks.Comment object at 0x101a6f650>
    BNE(GrowItemRegs);
    JMP(PlayGrowVine);
}

int PlayGrowVine() {
    lda(0x20);
    JMP(GrowItemRegs);
}

int GrowItemRegs() {
    sta(offsetof(G, Squ2_SfxLenCounter));
    lda(0x7f);
    // <conv.chunks.Comment object at 0x101a6fad0>
    sta(((offsetof(G, SND_SQUARE2_REG)) + (1)));
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a6fda0>
    sta(offsetof(G, Sfx_SecondaryCounter));
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc(offsetof(G, Sfx_SecondaryCounter));
    lda(offsetof(G, Sfx_SecondaryCounter));
    lsr();
    // <conv.chunks.Comment object at 0x101a6ffe0>
    // <conv.chunks.Comment object at 0x101a78140>
    // <conv.chunks.Comment object at 0x101a78290>
    tay();
    cpy(offsetof(G, Squ2_SfxLenCounter));
    BEQ(StopGrowItems);
    lda(0x9d);
    // <conv.chunks.Comment object at 0x101a783b0>
    // <conv.chunks.Comment object at 0x101a784d0>
    // <conv.chunks.Comment object at 0x101a785f0>
    sta(offsetof(G, SND_SQUARE2_REG));
    lda(offsetof(G, PUp_VGrow_FreqData), y);
    // <conv.chunks.Comment object at 0x101a78800>
    JSR(SetFreq_Squ2);
    rts();
    JMP(StopGrowItems);
}

int StopGrowItems() {
    JMP(EmptySfx2Buffer);
    JMP(PlayBrickShatter);
}

int PlayBrickShatter() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x101a78d10>
    sta(offsetof(G, Noise_SfxLenCounter));
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda(offsetof(G, Noise_SfxLenCounter));
    lsr();
    // <conv.chunks.Comment object at 0x101a79910>
    BCC(DecrementSfx3Length);
    tay();
    ldx(offsetof(G, BrickShatterFreqData), y);
    // <conv.chunks.Comment object at 0x101a79b20>
    lda(offsetof(G, BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta(offsetof(G, SND_NOISE_REG));
    // <conv.chunks.Comment object at 0x101a79dc0>
    stx(((offsetof(G, SND_NOISE_REG)) + (2)));
    lda(0x18);
    sta(((offsetof(G, SND_NOISE_REG)) + (3)));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec(offsetof(G, Noise_SfxLenCounter));
    // <conv.chunks.Comment object at 0x101a7a360>
    BNE(ExSfx3);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x101a7a5a0>
    sta(offsetof(G, SND_NOISE_REG));
    lda(0x0);
    sta(offsetof(G, NoiseSoundBuffer));
    JMP(ExSfx3);
}

int ExSfx3() {
    rts();
    JMP(NoiseSfxHandler);
}

int NoiseSfxHandler() {
    ldy(offsetof(G, NoiseSoundQueue));
    // <conv.chunks.Comment object at 0x101a7aab0>
    BEQ(CheckNoiseBuffer);
    sty(offsetof(G, NoiseSoundBuffer));
    // <conv.chunks.Comment object at 0x101a7acc0>
    lsr(offsetof(G, NoiseSoundQueue));
    BCS(PlayBrickShatter);
    // <conv.chunks.Comment object at 0x101a7aed0>
    lsr(offsetof(G, NoiseSoundQueue));
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda(offsetof(G, NoiseSoundBuffer));
    BEQ(ExNH);
    // <conv.chunks.Comment object at 0x101a7b230>
    // <conv.chunks.Comment object at 0x101a7b350>
    lsr();
    BCS(ContinueBrickShatter);
    // <conv.chunks.Comment object at 0x101a7b530>
    lsr();
    BCS(ContinueBowserFlame);
    JMP(ExNH);
}

int ExNH() {
    rts();
    JMP(PlayBowserFlame);
}

int PlayBowserFlame() {
    lda(0x40);
    // <conv.chunks.Comment object at 0x101a7b920>
    sta(offsetof(G, Noise_SfxLenCounter));
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda(offsetof(G, Noise_SfxLenCounter));
    lsr();
    tay();
    ldx(0xf);
    // <conv.chunks.Comment object at 0x101a7bd70>
    lda(((offsetof(G, BowserFlameEnvData)) - (1)), y);
    BNE(PlayNoiseSfx);
    JMP(ContinueMusic);
}

int ContinueMusic() {
    JMP(HandleSquare2Music);
    JMP(MusicHandler);
}

int MusicHandler() {
    lda(offsetof(G, EventMusicQueue));
    // <conv.chunks.Comment object at 0x101a84380>
    BNE(LoadEventMusic);
    lda(offsetof(G, AreaMusicQueue));
    // <conv.chunks.Comment object at 0x101a84590>
    BNE(LoadAreaMusic);
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101a847a0>
    ora(offsetof(G, AreaMusicBuffer));
    BNE(ContinueMusic);
    rts();
    JMP(LoadEventMusic);
}

int LoadEventMusic() {
    sta(offsetof(G, EventMusicBuffer));
    cmp(offsetof(G, DeathMusic));
    BNE(NoStopSfx);
    JSR(StopSquare1Sfx);
    JSR(StopSquare2Sfx);
    JMP(NoStopSfx);
}

int NoStopSfx() {
    ldx(offsetof(G, AreaMusicBuffer));
    stx(offsetof(G, AreaMusicBuffer_Alt));
    // <conv.chunks.Comment object at 0x101a85250>
    ldy(0x0);
    sty(offsetof(G, NoteLengthTblAdder));
    sty(offsetof(G, AreaMusicBuffer));
    cmp(offsetof(G, TimeRunningOutMusic));
    // <conv.chunks.Comment object at 0x101a853d0>
    // <conv.chunks.Comment object at 0x101a85580>
    // <conv.chunks.Comment object at 0x101a856a0>
    BNE(FindEventMusicHeader);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x101a858b0>
    stx(offsetof(G, NoteLengthTblAdder));
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(0x4);
    BNE(NoStop1);
    // <conv.chunks.Comment object at 0x101a85c10>
    // <conv.chunks.Comment object at 0x101a85ca0>
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // <conv.chunks.Comment object at 0x101a85f70>
    ldy(0x10);
    JMP(GMLoopB);
}

int GMLoopB() {
    sty(offsetof(G, GroundMusicHeaderOfs));
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101a86270>
    sty(offsetof(G, EventMusicBuffer));
    sta(offsetof(G, AreaMusicBuffer));
    cmp(0x1);
    // <conv.chunks.Comment object at 0x101a86480>
    // <conv.chunks.Comment object at 0x101a865a0>
    BNE(FindAreaMusicHeader);
    inc(offsetof(G, GroundMusicHeaderOfs));
    ldy(offsetof(G, GroundMusicHeaderOfs));
    // <conv.chunks.Comment object at 0x101a867b0>
    // <conv.chunks.Comment object at 0x101a868d0>
    cpy(0x32);
    BNE(LoadHeader);
    // <conv.chunks.Comment object at 0x101a86a50>
    ldy(0x11);
    BNE(GMLoopB);
    JMP(FindAreaMusicHeader);
}

int FindAreaMusicHeader() {
    ldy(0x8);
    sty(offsetof(G, MusicOffset_Square2));
    JMP(FindEventMusicHeader);
}

int FindEventMusicHeader() {
    iny();
    lsr();
    // <conv.chunks.Comment object at 0x101a87110>
    // <conv.chunks.Comment object at 0x101a871d0>
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}

int LoadHeader() {
    lda(offsetof(G, MusicHeaderOffsetData), y);
    // <conv.chunks.Comment object at 0x101a87380>
    tay();
    lda(offsetof(G, MusicHeaderData), y);
    // <conv.chunks.Comment object at 0x101a87560>
    sta(offsetof(G, NoteLenLookupTblOfs));
    lda(((offsetof(G, MusicHeaderData)) + (1)), y);
    sta(offsetof(G, MusicDataLow));
    lda(((offsetof(G, MusicHeaderData)) + (2)), y);
    sta(offsetof(G, MusicDataHigh));
    lda(((offsetof(G, MusicHeaderData)) + (3)), y);
    sta(offsetof(G, MusicOffset_Triangle));
    lda(((offsetof(G, MusicHeaderData)) + (4)), y);
    sta(offsetof(G, MusicOffset_Square1));
    lda(((offsetof(G, MusicHeaderData)) + (5)), y);
    sta(offsetof(G, MusicOffset_Noise));
    sta(offsetof(G, NoiseDataLoopbackOfs));
    lda(0x1);
    // <conv.chunks.Comment object at 0x101a8c6e0>
    sta(offsetof(G, Squ2_NoteLenCounter));
    sta(offsetof(G, Squ1_NoteLenCounter));
    sta(offsetof(G, Tri_NoteLenCounter));
    sta(offsetof(G, Noise_BeatLenCounter));
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a8cbc0>
    sta(offsetof(G, MusicOffset_Square2));
    sta(offsetof(G, AltRegContentFlag));
    lda(0xb);
    // <conv.chunks.Comment object at 0x101a8cdd0>
    // <conv.chunks.Comment object at 0x101a8cef0>
    sta(offsetof(G, SND_MASTERCTRL_REG));
    lda(0xf);
    sta(offsetof(G, SND_MASTERCTRL_REG));
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec(offsetof(G, Squ2_NoteLenCounter));
    BNE(MiscSqu2MusicTasks);
    ldy(offsetof(G, MusicOffset_Square2));
    // <conv.chunks.Comment object at 0x101a8d310>
    // <conv.chunks.Comment object at 0x101a8d430>
    // <conv.chunks.Comment object at 0x101a8d550>
    inc(offsetof(G, MusicOffset_Square2));
    lda((offsetof(G, MusicData)), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101a8dc40>
    cmp(offsetof(G, TimeRunningOutMusic));
    BNE(NotTRO);
    lda(offsetof(G, AreaMusicBuffer_Alt));
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // <conv.chunks.Comment object at 0x101a8df70>
    // <conv.chunks.Comment object at 0x101a8e090>
    // <conv.chunks.Comment object at 0x101a8e1b0>
    anda(offsetof(G, VictoryMusic));
    BNE(VictoryMLoopBack);
    lda(offsetof(G, AreaMusicBuffer));
    // <conv.chunks.Comment object at 0x101a8e420>
    anda(0b1011111);
    BNE(MusicLoopBack);
    lda(0x0);
    sta(offsetof(G, AreaMusicBuffer));
    // <conv.chunks.Comment object at 0x101a8e630>
    // <conv.chunks.Comment object at 0x101a8e750>
    // <conv.chunks.Comment object at 0x101a8e7e0>
    sta(offsetof(G, EventMusicBuffer));
    sta(offsetof(G, SND_TRIANGLE_REG));
    lda(0x90);
    sta(offsetof(G, SND_SQUARE1_REG));
    sta(offsetof(G, SND_SQUARE2_REG));
    rts();
    JMP(MusicLoopBack);
}

int MusicLoopBack() {
    JMP(HandleAreaMusicLoopB);
    JMP(VictoryMLoopBack);
}

int VictoryMLoopBack() {
    JMP(LoadEventMusic);
    JMP(Squ2LengthHandler);
}

int Squ2LengthHandler() {
    JSR(ProcessLengthData);
    // <conv.chunks.Comment object at 0x101a8f140>
    sta(offsetof(G, Squ2_NoteLenBuffer));
    ldy(offsetof(G, MusicOffset_Square2));
    // <conv.chunks.Comment object at 0x101a8f350>
    inc(offsetof(G, MusicOffset_Square2));
    lda((offsetof(G, MusicData)), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx(offsetof(G, Square2SoundBuffer));
    // <conv.chunks.Comment object at 0x101a8f6e0>
    BNE(SkipFqL1);
    JSR(SetFreq_Squ2);
    BEQ(Rest);
    JSR(LoadControlRegs);
    JMP(Rest);
}

int Rest() {
    // <conv.chunks.Comment object at 0x101a8f8f0>
    // <conv.chunks.Comment object at 0x101a8fa10>
    // <conv.chunks.Comment object at 0x101a8fb60>
    // <conv.chunks.Comment object at 0x101a8fc80>
    sta(offsetof(G, Squ2_EnvelopeDataCtrl));
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // <conv.chunks.Comment object at 0x101a8fe00>
    // <conv.chunks.Comment object at 0x101a8ff20>
    lda(offsetof(G, Squ2_NoteLenBuffer));
    sta(offsetof(G, Squ2_NoteLenCounter));
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda(offsetof(G, Square2SoundBuffer));
    // <conv.chunks.Comment object at 0x101a9c1d0>
    BNE(HandleSquare1Music);
    lda(offsetof(G, EventMusicBuffer));
    anda(0b10010001);
    // <conv.chunks.Comment object at 0x101a9c3e0>
    // <conv.chunks.Comment object at 0x101a9c500>
    BNE(HandleSquare1Music);
    ldy(offsetof(G, Squ2_EnvelopeDataCtrl));
    // <conv.chunks.Comment object at 0x101a9c710>
    BEQ(NoDecEnv1);
    dec(offsetof(G, Squ2_EnvelopeDataCtrl));
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // <conv.chunks.Comment object at 0x101a9c920>
    // <conv.chunks.Comment object at 0x101a9ca40>
    JSR(LoadEnvelopeData);
    sta(offsetof(G, SND_SQUARE2_REG));
    ldx(0x7f);
    // <conv.chunks.Comment object at 0x101a9cb90>
    // <conv.chunks.Comment object at 0x101a9ccb0>
    stx(((offsetof(G, SND_SQUARE2_REG)) + (1)));
    JMP(HandleSquare1Music);
}

int HandleSquare1Music() {
    ldy(offsetof(G, MusicOffset_Square1));
    BEQ(HandleTriangleMusic);
    dec(offsetof(G, Squ1_NoteLenCounter));
    BNE(MiscSqu1MusicTasks);
    JMP(FetchSqu1MusicData);
}

int FetchSqu1MusicData() {
    ldy(offsetof(G, MusicOffset_Square1));
    // <conv.chunks.Comment object at 0x101a9d460>
    inc(offsetof(G, MusicOffset_Square1));
    lda((offsetof(G, MusicData)), y);
    BNE(Squ1NoteHandler);
    // <conv.chunks.Comment object at 0x101a9d7c0>
    lda(0x83);
    sta(offsetof(G, SND_SQUARE1_REG));
    lda(0x94);
    sta(((offsetof(G, SND_SQUARE1_REG)) + (1)));
    // <conv.chunks.Comment object at 0x101a9d940>
    // <conv.chunks.Comment object at 0x101a9daf0>
    // <conv.chunks.Comment object at 0x101a9db80>
    sta(offsetof(G, AltRegContentFlag));
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta(offsetof(G, Squ1_NoteLenCounter));
    ldy(offsetof(G, Square1SoundBuffer));
    // <conv.chunks.Comment object at 0x101a9e120>
    // <conv.chunks.Comment object at 0x101a9e240>
    BNE(HandleTriangleMusic);
    txa();
    anda(0b111110);
    JSR(SetFreq_Squ1);
    // <conv.chunks.Comment object at 0x101a9e4e0>
    // <conv.chunks.Comment object at 0x101a9e600>
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // <conv.chunks.Comment object at 0x101a9e900>
    sta(offsetof(G, Squ1_EnvelopeDataCtrl));
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda(offsetof(G, Square1SoundBuffer));
    // <conv.chunks.Comment object at 0x101a9eb70>
    BNE(HandleTriangleMusic);
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101a9ed80>
    anda(0b10010001);
    BNE(DeathMAltReg);
    ldy(offsetof(G, Squ1_EnvelopeDataCtrl));
    // <conv.chunks.Comment object at 0x101a9f080>
    BEQ(NoDecEnv2);
    dec(offsetof(G, Squ1_EnvelopeDataCtrl));
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // <conv.chunks.Comment object at 0x101a9f290>
    // <conv.chunks.Comment object at 0x101a9f3b0>
    JSR(LoadEnvelopeData);
    sta(offsetof(G, SND_SQUARE1_REG));
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // <conv.chunks.Comment object at 0x101a9f500>
    // <conv.chunks.Comment object at 0x101a9f620>
    lda(offsetof(G, AltRegContentFlag));
    BNE(DoAltLoad);
    lda(0x7f);
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // <conv.chunks.Comment object at 0x101a9f860>
    // <conv.chunks.Comment object at 0x101a9f8f0>
    sta(((offsetof(G, SND_SQUARE1_REG)) + (1)));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda(offsetof(G, MusicOffset_Triangle));
    dec(offsetof(G, Tri_NoteLenCounter));
    BNE(HandleNoiseMusic);
    ldy(offsetof(G, MusicOffset_Triangle));
    // <conv.chunks.Comment object at 0x101a9fcb0>
    // <conv.chunks.Comment object at 0x101a9fdd0>
    // <conv.chunks.Comment object at 0x101a9fef0>
    inc(offsetof(G, MusicOffset_Triangle));
    lda((offsetof(G, MusicData)), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta(offsetof(G, Tri_NoteLenBuffer));
    // <conv.chunks.Comment object at 0x101aa8290>
    // <conv.chunks.Comment object at 0x101aa83b0>
    // <conv.chunks.Comment object at 0x101aa84d0>
    // <conv.chunks.Comment object at 0x101aa85f0>
    lda(0x1f);
    sta(offsetof(G, SND_TRIANGLE_REG));
    ldy(offsetof(G, MusicOffset_Triangle));
    // <conv.chunks.Comment object at 0x101aa8770>
    // <conv.chunks.Comment object at 0x101aa8920>
    inc(offsetof(G, MusicOffset_Triangle));
    lda((offsetof(G, MusicData)), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx(offsetof(G, Tri_NoteLenBuffer));
    // <conv.chunks.Comment object at 0x101aa8ec0>
    stx(offsetof(G, Tri_NoteLenCounter));
    lda(offsetof(G, EventMusicBuffer));
    anda(0b1101110);
    BNE(NotDOrD4);
    lda(offsetof(G, AreaMusicBuffer));
    // <conv.chunks.Comment object at 0x101aa91c0>
    // <conv.chunks.Comment object at 0x101aa92e0>
    // <conv.chunks.Comment object at 0x101aa9400>
    anda(0b1010);
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // <conv.chunks.Comment object at 0x101aa9610>
    // <conv.chunks.Comment object at 0x101aa9730>
    txa();
    cmp(0x12);
    // <conv.chunks.Comment object at 0x101aa9820>
    BCS(LongN);
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101aa9a60>
    anda(offsetof(G, EndOfCastleMusic));
    BEQ(MediN);
    lda(0xf);
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // <conv.chunks.Comment object at 0x101aa9d90>
    // <conv.chunks.Comment object at 0x101aa9e20>
    // <conv.chunks.Comment object at 0x101aa9fd0>
    lda(0x1f);
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // <conv.chunks.Comment object at 0x101aaa0c0>
    // <conv.chunks.Comment object at 0x101aaa270>
    lda(0xff);
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta(offsetof(G, SND_TRIANGLE_REG));
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda(offsetof(G, AreaMusicBuffer));
    // <conv.chunks.Comment object at 0x101aaa570>
    anda(0b11110011);
    BEQ(ExitMusicHandler);
    dec(offsetof(G, Noise_BeatLenCounter));
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy(offsetof(G, MusicOffset_Noise));
    // <conv.chunks.Comment object at 0x101aaab10>
    inc(offsetof(G, MusicOffset_Noise));
    lda((offsetof(G, MusicData)), y);
    // <conv.chunks.Comment object at 0x101aaad20>
    BNE(NoiseBeatHandler);
    lda(offsetof(G, NoiseDataLoopbackOfs));
    sta(offsetof(G, MusicOffset_Noise));
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta(offsetof(G, Noise_BeatLenCounter));
    // <conv.chunks.Comment object at 0x101aab410>
    txa();
    anda(0b111110);
    BEQ(SilentBeat);
    cmp(0x30);
    BEQ(LongBeat);
    // <conv.chunks.Comment object at 0x101aab5c0>
    // <conv.chunks.Comment object at 0x101aab6e0>
    // <conv.chunks.Comment object at 0x101aab800>
    // <conv.chunks.Comment object at 0x101aab890>
    cmp(0x20);
    BEQ(StrongBeat);
    anda(0b10000);
    BEQ(SilentBeat);
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101aabe00>
    ldx(0x3);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101ab4260>
    ldx(0xc);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101ab4680>
    ldx(0x3);
    ldy(0x58);
    BNE(PlayBeat);
    JMP(SilentBeat);
}

int SilentBeat() {
    lda(0x10);
    JMP(PlayBeat);
}

int PlayBeat() {
    sta(offsetof(G, SND_NOISE_REG));
    // <conv.chunks.Comment object at 0x101ab4c20>
    stx(((offsetof(G, SND_NOISE_REG)) + (2)));
    sty(((offsetof(G, SND_NOISE_REG)) + (3)));
    JMP(ExitMusicHandler);
}

int ExitMusicHandler() {
    rts();
    JMP(AlternateLengthHandler);
}

int AlternateLengthHandler() {
    tax();
    ror();
    txa();
    rol();
    rol();
    // <conv.chunks.Comment object at 0x101ab51c0>
    // <conv.chunks.Comment object at 0x101ab5280>
    // <conv.chunks.Comment object at 0x101ab5340>
    // <conv.chunks.Comment object at 0x101ab5400>
    // <conv.chunks.Comment object at 0x101ab54c0>
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(0b111);
    // <conv.chunks.Comment object at 0x101ab5610>
    clc();
    adc(0xf0);
    adc(offsetof(G, NoteLengthTblAdder));
    // <conv.chunks.Comment object at 0x101ab57f0>
    // <conv.chunks.Comment object at 0x101ab5880>
    tay();
    lda(offsetof(G, MusicLengthLookupTbl), y);
    // <conv.chunks.Comment object at 0x101ab5a90>
    rts();
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101ab5ca0>
    anda(offsetof(G, EndOfCastleMusic));
    BEQ(NotECstlM);
    lda(0x4);
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda(offsetof(G, AreaMusicBuffer));
    anda(0b1111101);
    // <conv.chunks.Comment object at 0x101ab6330>
    BEQ(WaterMus);
    lda(0x8);
    // <conv.chunks.Comment object at 0x101ab6540>
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // <conv.chunks.Comment object at 0x101ab6780>
    lda(0x28);
    JMP(AllMus);
}

int AllMus() {
    // <conv.chunks.Comment object at 0x101ab6840>
    ldx(0x82);
    ldy(0x7f);
    rts();
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda(offsetof(G, EventMusicBuffer));
    // <conv.chunks.Comment object at 0x101ab6c00>
    anda(offsetof(G, EndOfCastleMusic));
    BEQ(LoadUsualEnvData);
    lda(offsetof(G, EndOfCastleMusicEnvData), y);
    // <conv.chunks.Comment object at 0x101ab6f00>
    rts();
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda(offsetof(G, AreaMusicBuffer));
    // <conv.chunks.Comment object at 0x101ab7110>
    anda(0b1111101);
    BEQ(LoadWaterEventMusEnvData);
    lda(offsetof(G, AreaMusicEnvData), y);
    // <conv.chunks.Comment object at 0x101ab7410>
    rts();
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda(offsetof(G, WaterEventMusEnvData), y);
    // <conv.chunks.Comment object at 0x101ab7620>
    rts();
}

