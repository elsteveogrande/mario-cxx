#include <cstddef>
#include "main.h"

G g {
    .space={},
    .VRAM_AddrTable_Low = {LO8(VRAM_Buffer1), LO8(offsetof(G, WaterPaletteData)), LO8(offsetof(G, GroundPaletteData)), LO8(offsetof(G, UndergroundPaletteData)), LO8(offsetof(G, CastlePaletteData)), LO8(VRAM_Buffer1_Offset), LO8(VRAM_Buffer2), LO8(VRAM_Buffer2), LO8(offsetof(G, BowserPaletteData)), LO8(offsetof(G, DaySnowPaletteData)), LO8(offsetof(G, NightSnowPaletteData)), LO8(offsetof(G, MushroomPaletteData)), LO8(offsetof(G, MarioThanksMessage)), LO8(offsetof(G, LuigiThanksMessage)), LO8(offsetof(G, MushroomRetainerSaved)), LO8(offsetof(G, PrincessSaved1)), LO8(offsetof(G, PrincessSaved2)), LO8(offsetof(G, WorldSelectMessage1)), LO8(offsetof(G, WorldSelectMessage2))},
    .VRAM_AddrTable_High = {HI8(VRAM_Buffer1), HI8(offsetof(G, WaterPaletteData)), HI8(offsetof(G, GroundPaletteData)), HI8(offsetof(G, UndergroundPaletteData)), HI8(offsetof(G, CastlePaletteData)), HI8(VRAM_Buffer1_Offset), HI8(VRAM_Buffer2), HI8(VRAM_Buffer2), HI8(offsetof(G, BowserPaletteData)), HI8(offsetof(G, DaySnowPaletteData)), HI8(offsetof(G, NightSnowPaletteData)), HI8(offsetof(G, MushroomPaletteData)), HI8(offsetof(G, MarioThanksMessage)), HI8(offsetof(G, LuigiThanksMessage)), HI8(offsetof(G, MushroomRetainerSaved)), HI8(offsetof(G, PrincessSaved1)), HI8(offsetof(G, PrincessSaved2)), HI8(offsetof(G, WorldSelectMessage1)), HI8(offsetof(G, WorldSelectMessage2))},
    .VRAM_Buffer_Offset = {LO8(VRAM_Buffer1_Offset), LO8(VRAM_Buffer2_Offset)},
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
    .MusicSelectData = {WaterMusic, GroundMusic, UndergroundMusic, CastleMusic, CloudMusic, PipeIntroMusic},
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
    .FrenzyIDData = {FlyCheepCheepFrenzy, BBill_CCheep_Frenzy, Stop_Frenzy},
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
    .BlockBufferAddr = {LO8(Block_Buffer_1), LO8(Block_Buffer_2), HI8(Block_Buffer_1), HI8(Block_Buffer_2)},
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
    .BowserIdentities = {Goomba, GreenKoopa, BuzzyBeetle, Spiny, Lakitu, Bloober, HammerBro, Bowser},
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
    .MusicHeaderData = {((offsetof(G, DeathMusHdr)) - (MHD)), ((offsetof(G, GameOverMusHdr)) - (MHD)), ((offsetof(G, VictoryMusHdr)) - (MHD)), ((offsetof(G, WinCastleMusHdr)) - (MHD)), ((offsetof(G, GameOverMusHdr)) - (MHD)), ((offsetof(G, EndOfLevelMusHdr)) - (MHD)), ((offsetof(G, TimeRunningOutHdr)) - (MHD)), ((offsetof(G, SilenceHdr)) - (MHD)), ((offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((offsetof(G, WaterMusHdr)) - (MHD)), ((offsetof(G, UndergroundMusHdr)) - (MHD)), ((offsetof(G, CastleMusHdr)) - (MHD)), ((offsetof(G, Star_CloudHdr)) - (MHD)), ((offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((offsetof(G, Star_CloudHdr)) - (MHD)), ((offsetof(G, SilenceHdr)) - (MHD)), ((offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart2CHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((offsetof(G, GroundLevelPart1Hdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4CHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart3AHdr)) - (MHD)), ((offsetof(G, GroundLevelLeadInHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4BHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4AHdr)) - (MHD)), ((offsetof(G, GroundLevelPart4CHdr)) - (MHD))},
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
    // <conv.chunks.Comment object at 0x100b19370>
    cld();
    lda(0b10000);
    // <conv.chunks.Comment object at 0x100b19430>
    sta(PPU_CTRL_REG1);
    ldx(0xff);
    // <conv.chunks.Comment object at 0x100b195e0>
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // <conv.chunks.Comment object at 0x100b19730>
    lda(PPU_STATUS);
    BPL(VBlank1);
    JMP(VBlank2);
}

int VBlank2() {
    lda(PPU_STATUS);
    BPL(VBlank2);
    ldy(ColdBootOffset);
    ldx(0x5);
    JMP(WBootCheck);
}

int WBootCheck() {
    // <conv.chunks.Comment object at 0x100b19b80>
    // <conv.chunks.Comment object at 0x100b19c70>
    // <conv.chunks.Comment object at 0x100b19d00>
    lda(TopScoreDisplay, x);
    cmp(10);
    BCS(ColdBoot);
    // <conv.chunks.Comment object at 0x100b19ee0>
    // <conv.chunks.Comment object at 0x100b19f70>
    dex();
    BPL(WBootCheck);
    lda(WarmBootValidation);
    cmp(0xa5);
    // <conv.chunks.Comment object at 0x100b1a1b0>
    // <conv.chunks.Comment object at 0x100b1a2a0>
    BNE(ColdBoot);
    ldy(WarmBootOffset);
    JMP(ColdBoot);
}

int ColdBoot() {
    // <conv.chunks.Comment object at 0x100b1a450>
    // <conv.chunks.Comment object at 0x100b1a540>
    JSR(InitializeMemory);
    sta(((SND_DELTA_REG) + (1)));
    sta(OperMode);
    lda(0xa5);
    // <conv.chunks.Comment object at 0x100b1a660>
    // <conv.chunks.Comment object at 0x100b1a7e0>
    // <conv.chunks.Comment object at 0x100b1a8d0>
    sta(WarmBootValidation);
    sta(PseudoRandomBitReg);
    // <conv.chunks.Comment object at 0x100b1aae0>
    lda(0b1111);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x100b1acf0>
    lda(0b110);
    sta(PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x100b1af00>
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x100b1b110>
    // <conv.chunks.Comment object at 0x100b1b230>
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x100b1b500>
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda(Mirror_PPU_CTRL_REG1);
    anda(0b1111111);
    // <conv.chunks.Comment object at 0x100b216d0>
    // <conv.chunks.Comment object at 0x100b21970>
    sta(Mirror_PPU_CTRL_REG1);
    anda(0b1111110);
    sta(PPU_CTRL_REG1);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x100b21b80>
    // <conv.chunks.Comment object at 0x100b21ca0>
    // <conv.chunks.Comment object at 0x100b21dc0>
    anda(0b11100110);
    ldy(DisableScreenFlag);
    BNE(ScreenOff);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x100b21fd0>
    // <conv.chunks.Comment object at 0x100b220f0>
    // <conv.chunks.Comment object at 0x100b22210>
    ora(0b11110);
    JMP(ScreenOff);
}

int ScreenOff() {
    // <conv.chunks.Comment object at 0x100b22420>
    sta(Mirror_PPU_CTRL_REG2);
    anda(0b11100111);
    // <conv.chunks.Comment object at 0x100b22570>
    sta(PPU_CTRL_REG2);
    ldx(PPU_STATUS);
    // <conv.chunks.Comment object at 0x100b22780>
    lda(0x0);
    JSR(InitScroll);
    sta(PPU_SPR_ADDR);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100b22a80>
    // <conv.chunks.Comment object at 0x100b22ba0>
    sta(SPR_DMA);
    ldx(VRAM_Buffer_AddrCtrl);
    lda(offsetof(G, VRAM_AddrTable_Low), x);
    // <conv.chunks.Comment object at 0x100b22de0>
    // <conv.chunks.Comment object at 0x100b22f00>
    sta(0x0);
    lda(offsetof(G, VRAM_AddrTable_High), x);
    sta(0x1);
    JSR(UpdateScreen);
    // <conv.chunks.Comment object at 0x100b23260>
    ldy(0x0);
    ldx(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x100b234d0>
    cpx(0x6);
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx(offsetof(G, VRAM_Buffer_Offset), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100b23a70>
    sta(VRAM_Buffer1_Offset, x);
    sta(VRAM_Buffer1, x);
    sta(VRAM_Buffer_AddrCtrl);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x100b23dd0>
    // <conv.chunks.Comment object at 0x100b23ef0>
    sta(PPU_CTRL_REG2);
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // <conv.chunks.Comment object at 0x100b34140>
    // <conv.chunks.Comment object at 0x100b34260>
    // <conv.chunks.Comment object at 0x100b34380>
    JSR(UpdateTopScore);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x100b34590>
    lsr();
    BCS(PauseSkip);
    lda(TimerControl);
    BEQ(DecTimers);
    // <conv.chunks.Comment object at 0x100b34830>
    // <conv.chunks.Comment object at 0x100b34950>
    dec(TimerControl);
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // <conv.chunks.Comment object at 0x100b34c50>
    ldx(0x14);
    dec(IntervalTimerControl);
    BPL(DecTimersLoop);
    // <conv.chunks.Comment object at 0x100b34d10>
    // <conv.chunks.Comment object at 0x100b34ec0>
    lda(0x14);
    sta(IntervalTimerControl);
    ldx(0x23);
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // <conv.chunks.Comment object at 0x100b35040>
    // <conv.chunks.Comment object at 0x100b351f0>
    // <conv.chunks.Comment object at 0x100b35280>
    lda(Timers, x);
    BEQ(SkipExpTimer);
    dec(Timers, x);
    JMP(SkipExpTimer);
}

int SkipExpTimer() {
    // <conv.chunks.Comment object at 0x100b354c0>
    // <conv.chunks.Comment object at 0x100b355e0>
    // <conv.chunks.Comment object at 0x100b35760>
    dex();
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}

int NoDecTimers() {
    // <conv.chunks.Comment object at 0x100b35850>
    // <conv.chunks.Comment object at 0x100b35970>
    inc(FrameCounter);
    JMP(PauseSkip);
}

int PauseSkip() {
    ldx(0x0);
    ldy(0x7);
    lda(PseudoRandomBitReg);
    anda(0b10);
    sta(0x0);
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b10);
    eor(0x0);
    clc();
    // <conv.chunks.Comment object at 0x100b35c40>
    // <conv.chunks.Comment object at 0x100b35df0>
    // <conv.chunks.Comment object at 0x100b35f40>
    // <conv.chunks.Comment object at 0x100b35fd0>
    // <conv.chunks.Comment object at 0x100b361e0>
    // <conv.chunks.Comment object at 0x100b36330>
    // <conv.chunks.Comment object at 0x100b36300>
    BEQ(RotPRandomBit);
    sec();
    JMP(RotPRandomBit);
}

int RotPRandomBit() {
    // <conv.chunks.Comment object at 0x100b36600>
    // <conv.chunks.Comment object at 0x100b36690>
    ror(PseudoRandomBitReg, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x100b36840>
    // <conv.chunks.Comment object at 0x100b36900>
    BNE(RotPRandomBit);
    lda(Sprite0HitDetectFlag);
    // <conv.chunks.Comment object at 0x100b36a80>
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // <conv.chunks.Comment object at 0x100b36c90>
    lda(PPU_STATUS);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x100b36de0>
    BNE(Sprite0Clr);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x100b36ff0>
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // <conv.chunks.Comment object at 0x100b37470>
    lda(PPU_STATUS);
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
    // <conv.chunks.Comment object at 0x100b37a70>
    lda(HorizontalScroll);
    sta(PPU_SCROLL_REG);
    lda(VerticalScroll);
    sta(PPU_SCROLL_REG);
    lda(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x100b37e90>
    pha();
    sta(PPU_CTRL_REG1);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x100b40170>
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // <conv.chunks.Comment object at 0x100b40410>
    // <conv.chunks.Comment object at 0x100b40530>
    lda(PPU_STATUS);
    pla();
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x100b40710>
    sta(PPU_CTRL_REG1);
    return 0;
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda(OperMode);
    cmp(VictoryModeValue);
    // <conv.chunks.Comment object at 0x100b40a40>
    // <conv.chunks.Comment object at 0x100b40b60>
    BEQ(ChkPauseTimer);
    cmp(GameModeValue);
    BNE(ExitPause);
    lda(OperMode_Task);
    // <conv.chunks.Comment object at 0x100b40d70>
    // <conv.chunks.Comment object at 0x100b40e90>
    // <conv.chunks.Comment object at 0x100b40fb0>
    cmp(0x3);
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // <conv.chunks.Comment object at 0x100b41130>
    // <conv.chunks.Comment object at 0x100b412e0>
    lda(GamePauseTimer);
    BEQ(ChkStart);
    dec(GamePauseTimer);
    // <conv.chunks.Comment object at 0x100b41520>
    return 0;
    JMP(ChkStart);
}

int ChkStart() {
    // <conv.chunks.Comment object at 0x100b416d0>
    lda(SavedJoypad1Bits);
    anda(Start_Button);
    // <conv.chunks.Comment object at 0x100b41820>
    BEQ(ClrPauseTimer);
    lda(GamePauseStatus);
    anda(0b10000000);
    BNE(ExitPause);
    lda(0x2b);
    // <conv.chunks.Comment object at 0x100b41a30>
    // <conv.chunks.Comment object at 0x100b41b50>
    // <conv.chunks.Comment object at 0x100b41c70>
    // <conv.chunks.Comment object at 0x100b41d90>
    sta(GamePauseTimer);
    lda(GamePauseStatus);
    tay();
    iny();
    // <conv.chunks.Comment object at 0x100b42150>
    sty(PauseSoundQueue);
    eor(0b1);
    // <conv.chunks.Comment object at 0x100b422d0>
    ora(0b10000000);
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // <conv.chunks.Comment object at 0x100b424e0>
    // <conv.chunks.Comment object at 0x100b42600>
    lda(GamePauseStatus);
    anda(0b1111111);
    JMP(SetPause);
}

int SetPause() {
    sta(GamePauseStatus);
    JMP(ExitPause);
}

int ExitPause() {
    return 0;
    JMP(SpriteShuffler);
}

int SpriteShuffler() {
    ldy(AreaType);
    lda(0x28);
    sta(0x0);
    ldx(0xe);
    JMP(ShuffleLoop);
}

int ShuffleLoop() {
    // <conv.chunks.Comment object at 0x100b42a80>
    // <conv.chunks.Comment object at 0x100b42ae0>
    // <conv.chunks.Comment object at 0x100b42c00>
    // <conv.chunks.Comment object at 0x100b42d50>
    // <conv.chunks.Comment object at 0x100b42de0>
    // <conv.chunks.Comment object at 0x100b42ed0>
    lda(SprDataOffset, x);
    cmp(0x0);
    BCC(NextSprOffset);
    ldy(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x100b43110>
    // <conv.chunks.Comment object at 0x100b431a0>
    // <conv.chunks.Comment object at 0x100b43320>
    clc();
    adc(SprShuffleAmt, y);
    BCC(StrSprOffset);
    // <conv.chunks.Comment object at 0x100b434d0>
    // <conv.chunks.Comment object at 0x100b43620>
    clc();
    adc(0x0);
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // <conv.chunks.Comment object at 0x100b43800>
    // <conv.chunks.Comment object at 0x100b43890>
    sta(SprDataOffset, x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // <conv.chunks.Comment object at 0x100b43a70>
    dex();
    BPL(ShuffleLoop);
    ldx(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x100b43c50>
    inx();
    cpx(0x3);
    BNE(SetAmtOffset);
    ldx(0x0);
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx(SprShuffleAmtOffset);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x100b482c0>
    ldy(0x2);
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // <conv.chunks.Comment object at 0x100b48440>
    lda(((SprDataOffset) + (5)), y);
    sta(((Misc_SprDataOffset) - (2)), x);
    clc();
    adc(0x8);
    sta(((Misc_SprDataOffset) - (1)), x);
    clc();
    // <conv.chunks.Comment object at 0x100b486e0>
    // <conv.chunks.Comment object at 0x100b488f0>
    // <conv.chunks.Comment object at 0x100b48980>
    // <conv.chunks.Comment object at 0x100b48a10>
    // <conv.chunks.Comment object at 0x100b48cb0>
    adc(0x8);
    sta(Misc_SprDataOffset, x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // <conv.chunks.Comment object at 0x100b49190>
    return 0;
    JMP(OperModeExecutionTree);
}

int OperModeExecutionTree() {
    lda(OperMode);
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
    // <conv.chunks.Comment object at 0x100b49a30>
    // <conv.chunks.Comment object at 0x100b49b20>
    // <conv.chunks.Comment object at 0x100b49c40>
    sta(Sprite_Y_Position, y);
    iny();
    // <conv.chunks.Comment object at 0x100b49e80>
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    return 0;
    JMP(TitleScreenMode);
}

int TitleScreenMode() {
    lda(OperMode_Task);
    JMP(GameMenuRoutine);
}

int GameMenuRoutine() {
    ldy(0x0);
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    // <conv.chunks.Comment object at 0x100b4a7e0>
    // <conv.chunks.Comment object at 0x100b4acc0>
    cmp(Start_Button);
    BEQ(StartGame);
    cmp(((A_Button) + (Start_Button)));
    BNE(ChkSelect);
    JMP(StartGame);
}

int StartGame() {
    // <conv.chunks.Comment object at 0x100b4afc0>
    // <conv.chunks.Comment object at 0x100b4b170>
    // <conv.chunks.Comment object at 0x100b4b290>
    JMP(ChkContinue);
    JMP(ChkSelect);
}

int ChkSelect() {
    // <conv.chunks.Comment object at 0x100b4b3e0>
    cmp(Select_Button);
    BEQ(SelectBLogic);
    ldx(DemoTimer);
    BNE(ChkWorldSel);
    sta(SelectTimer);
    JSR(DemoEngine);
    BCS(ResetTitle);
    JMP(RunDemo);
    JMP(ChkWorldSel);
}

int ChkWorldSel() {
    // <conv.chunks.Comment object at 0x100b4b530>
    // <conv.chunks.Comment object at 0x100b4b650>
    // <conv.chunks.Comment object at 0x100b4b770>
    // <conv.chunks.Comment object at 0x100b4b890>
    // <conv.chunks.Comment object at 0x100b4b9b0>
    // <conv.chunks.Comment object at 0x100b4bad0>
    // <conv.chunks.Comment object at 0x100b4bbf0>
    // <conv.chunks.Comment object at 0x100b4bd40>
    ldx(WorldSelectEnableFlag);
    BEQ(NullJoypad);
    cmp(B_Button);
    // <conv.chunks.Comment object at 0x100b4bf80>
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // <conv.chunks.Comment object at 0x100b50200>
    // <conv.chunks.Comment object at 0x100b50290>
    lda(DemoTimer);
    BEQ(ResetTitle);
    lda(0x18);
    // <conv.chunks.Comment object at 0x100b503e0>
    // <conv.chunks.Comment object at 0x100b50500>
    sta(DemoTimer);
    lda(SelectTimer);
    BNE(NullJoypad);
    lda(0x10);
    // <conv.chunks.Comment object at 0x100b50710>
    // <conv.chunks.Comment object at 0x100b50830>
    // <conv.chunks.Comment object at 0x100b50950>
    sta(SelectTimer);
    cpy(0x1);
    BEQ(IncWorldSel);
    lda(NumberOfPlayers);
    eor(0b1);
    // <conv.chunks.Comment object at 0x100b50b60>
    // <conv.chunks.Comment object at 0x100b50bf0>
    // <conv.chunks.Comment object at 0x100b50da0>
    // <conv.chunks.Comment object at 0x100b50ec0>
    sta(NumberOfPlayers);
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // <conv.chunks.Comment object at 0x100b512b0>
    ldx(WorldSelectNumber);
    inx();
    txa();
    anda(0b111);
    sta(WorldSelectNumber);
    // <conv.chunks.Comment object at 0x100b51520>
    // <conv.chunks.Comment object at 0x100b51640>
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // <conv.chunks.Comment object at 0x100b51850>
    lda(offsetof(G, WSelectBufferTemplate), x);
    sta(((VRAM_Buffer1) - (1)), x);
    // <conv.chunks.Comment object at 0x100b519d0>
    inx();
    cpx(0x6);
    BMI(UpdateShroom);
    ldy(WorldNumber);
    iny();
    sty(((VRAM_Buffer1) + (3)));
    JMP(NullJoypad);
}

int NullJoypad() {
    // <conv.chunks.Comment object at 0x100b51e20>
    // <conv.chunks.Comment object at 0x100b51f70>
    // <conv.chunks.Comment object at 0x100b52000>
    // <conv.chunks.Comment object at 0x100b521b0>
    lda(0x0);
    sta(SavedJoypad1Bits);
    JMP(RunDemo);
}

int RunDemo() {
    // <conv.chunks.Comment object at 0x100b523f0>
    JSR(GameCoreRoutine);
    lda(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x100b52570>
    cmp(0x6);
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // <conv.chunks.Comment object at 0x100b526f0>
    // <conv.chunks.Comment object at 0x100b528a0>
    lda(0x0);
    sta(OperMode);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x100b52960>
    // <conv.chunks.Comment object at 0x100b52b10>
    sta(Sprite0HitDetectFlag);
    inc(DisableScreenFlag);
    return 0;
    JMP(ChkContinue);
}

int ChkContinue() {
    // <conv.chunks.Comment object at 0x100b52ea0>
    ldy(DemoTimer);
    BEQ(ResetTitle);
    asl();
    BCC(StartWorld1);
    lda(ContinueWorld);
    JSR(GoContinue);
    JMP(StartWorld1);
}

int StartWorld1() {
    JSR(LoadAreaPointer);
    inc(Hidden1UpFlag);
    // <conv.chunks.Comment object at 0x100b53620>
    inc(OffScr_Hidden1UpFlag);
    inc(FetchNewGameTimerFlag);
    inc(OperMode);
    lda(WorldSelectEnableFlag);
    sta(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x100b53830>
    // <conv.chunks.Comment object at 0x100b53950>
    // <conv.chunks.Comment object at 0x100b53a70>
    // <conv.chunks.Comment object at 0x100b53b90>
    lda(0x0);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x100b53d10>
    sta(DemoTimer);
    ldx(0x17);
    lda(0x0);
    JMP(InitScores);
}

int InitScores() {
    // <conv.chunks.Comment object at 0x100b60140>
    sta(ScoreAndCoinDisplay, x);
    dex();
    BPL(InitScores);
    JMP(ExitMenu);
}

int ExitMenu() {
    return 0;
    JMP(GoContinue);
}

int GoContinue() {
    // <conv.chunks.Comment object at 0x100b60590>
    sta(WorldNumber);
    sta(OffScr_WorldNumber);
    ldx(0x0);
    stx(AreaNumber);
    // <conv.chunks.Comment object at 0x100b606e0>
    // <conv.chunks.Comment object at 0x100b60800>
    // <conv.chunks.Comment object at 0x100b60890>
    stx(OffScr_AreaNumber);
    return 0;
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(0x7);
    JMP(IconDataRead);
}

int IconDataRead() {
    // <conv.chunks.Comment object at 0x100b60c80>
    // <conv.chunks.Comment object at 0x100b60d10>
    lda(offsetof(G, MushroomIconData), y);
    sta(((VRAM_Buffer1) - (1)), y);
    // <conv.chunks.Comment object at 0x100b61370>
    dey();
    BPL(IconDataRead);
    lda(NumberOfPlayers);
    BEQ(ExitIcon);
    lda(0x24);
    // <conv.chunks.Comment object at 0x100b616d0>
    // <conv.chunks.Comment object at 0x100b617f0>
    // <conv.chunks.Comment object at 0x100b61910>
    sta(((VRAM_Buffer1) + (3)));
    lda(0xce);
    // <conv.chunks.Comment object at 0x100b61bb0>
    sta(((VRAM_Buffer1) + (5)));
    JMP(ExitIcon);
}

int ExitIcon() {
    return 0;
    JMP(DemoEngine);
}

int DemoEngine() {
    ldx(DemoAction);
    lda(DemoActionTimer);
    BNE(DoAction);
    // <conv.chunks.Comment object at 0x100b61f70>
    // <conv.chunks.Comment object at 0x100b62090>
    // <conv.chunks.Comment object at 0x100b63a40>
    inx();
    inc(DemoAction);
    sec();
    lda(((offsetof(G, DemoTimingData)) - (1)), x);
    sta(DemoActionTimer);
    BEQ(DemoOver);
    JMP(DoAction);
}

int DoAction() {
    // <conv.chunks.Comment object at 0x100b63bf0>
    // <conv.chunks.Comment object at 0x100b63d40>
    // <conv.chunks.Comment object at 0x100b63dd0>
    // <conv.chunks.Comment object at 0x100b63fb0>
    // <conv.chunks.Comment object at 0x100b68110>
    // <conv.chunks.Comment object at 0x100b68230>
    lda(((offsetof(G, DemoActionData)) - (1)), x);
    sta(SavedJoypad1Bits);
    dec(DemoActionTimer);
    clc();
    JMP(DemoOver);
}

int DemoOver() {
    return 0;
    JMP(VictoryMode);
}

int VictoryMode() {
    JSR(VictoryModeSubroutines);
    lda(OperMode_Task);
    BEQ(AutoPlayer);
    // <conv.chunks.Comment object at 0x100b68830>
    // <conv.chunks.Comment object at 0x100b68950>
    // <conv.chunks.Comment object at 0x100b68a70>
    ldx(0x0);
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}

int AutoPlayer() {
    // <conv.chunks.Comment object at 0x100b68bf0>
    // <conv.chunks.Comment object at 0x100b68da0>
    // <conv.chunks.Comment object at 0x100b68ec0>
    JSR(RelativePlayerPosition);
    JMP(PlayerGfxHandler);
    JMP(VictoryModeSubroutines);
}

int VictoryModeSubroutines() {
    lda(OperMode_Task);
    JMP(SetupVictoryMode);
}

int SetupVictoryMode() {
    ldx(ScreenRight_PageLoc);
    inx();
    stx(DestinationPageLoc);
    // <conv.chunks.Comment object at 0x100b69670>
    // <conv.chunks.Comment object at 0x100b697c0>
    // <conv.chunks.Comment object at 0x100b69850>
    lda(EndOfCastleMusic);
    sta(EventMusicQueue);
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100b69d00>
    sty(VictoryWalkControl);
    lda(Player_PageLoc);
    cmp(DestinationPageLoc);
    BNE(PerformWalk);
    lda(Player_X_Position);
    cmp(0x60);
    BCS(DontWalk);
    JMP(PerformWalk);
}

int PerformWalk() {
    // <conv.chunks.Comment object at 0x100b69f10>
    // <conv.chunks.Comment object at 0x100b6a030>
    // <conv.chunks.Comment object at 0x100b6a150>
    // <conv.chunks.Comment object at 0x100b6a270>
    // <conv.chunks.Comment object at 0x100b6a390>
    // <conv.chunks.Comment object at 0x100b6a420>
    // <conv.chunks.Comment object at 0x100b6a5d0>
    inc(VictoryWalkControl);
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // <conv.chunks.Comment object at 0x100b6a750>
    // <conv.chunks.Comment object at 0x100b6a7e0>
    tya();
    JSR(AutoControlPlayer);
    lda(ScreenLeft_PageLoc);
    cmp(DestinationPageLoc);
    BEQ(ExitVWalk);
    // <conv.chunks.Comment object at 0x100b6a8d0>
    // <conv.chunks.Comment object at 0x100b6a9f0>
    // <conv.chunks.Comment object at 0x100b6ab10>
    // <conv.chunks.Comment object at 0x100b6ac30>
    lda(ScrollFractional);
    clc();
    // <conv.chunks.Comment object at 0x100b6ae70>
    adc(0x80);
    sta(ScrollFractional);
    lda(0x1);
    adc(0x0);
    tay();
    JSR(ScrollScreen);
    JSR(UpdScrollVar);
    inc(VictoryWalkControl);
    JMP(ExitVWalk);
}

int ExitVWalk() {
    // <conv.chunks.Comment object at 0x100b6af60>
    // <conv.chunks.Comment object at 0x100b6b110>
    // <conv.chunks.Comment object at 0x100b6b1a0>
    // <conv.chunks.Comment object at 0x100b6b380>
    // <conv.chunks.Comment object at 0x100b6b410>
    // <conv.chunks.Comment object at 0x100b6b530>
    // <conv.chunks.Comment object at 0x100b6b650>
    // <conv.chunks.Comment object at 0x100b6b770>
    lda(VictoryWalkControl);
    BEQ(IncModeTask_A);
    return 0;
    JMP(PrintVictoryMessages);
}

int PrintVictoryMessages() {
    lda(SecondaryMsgCounter);
    BNE(IncMsgCounter);
    lda(PrimaryMsgCounter);
    BEQ(ThankPlayer);
    cmp(0x9);
    BCS(IncMsgCounter);
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x100b6bb00>
    // <conv.chunks.Comment object at 0x100b6bc20>
    // <conv.chunks.Comment object at 0x100b6bd40>
    // <conv.chunks.Comment object at 0x100b6be60>
    // <conv.chunks.Comment object at 0x100b6bf80>
    // <conv.chunks.Comment object at 0x100b70050>
    // <conv.chunks.Comment object at 0x100b70200>
    cpy(World8);
    BNE(MRetainerMsg);
    cmp(0x3);
    BCC(IncMsgCounter);
    sbc(0x1);
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}

int MRetainerMsg() {
    // <conv.chunks.Comment object at 0x100b70350>
    // <conv.chunks.Comment object at 0x100b70560>
    // <conv.chunks.Comment object at 0x100b705f0>
    // <conv.chunks.Comment object at 0x100b707a0>
    // <conv.chunks.Comment object at 0x100b70830>
    // <conv.chunks.Comment object at 0x100b709e0>
    cmp(0x2);
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // <conv.chunks.Comment object at 0x100b70aa0>
    // <conv.chunks.Comment object at 0x100b70c50>
    tay();
    BNE(SecondPartMsg);
    lda(CurrentPlayer);
    BEQ(EvalForMusic);
    iny();
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}

int SecondPartMsg() {
    // <conv.chunks.Comment object at 0x100b70d40>
    // <conv.chunks.Comment object at 0x100b70e60>
    // <conv.chunks.Comment object at 0x100b70f80>
    // <conv.chunks.Comment object at 0x100b710d0>
    // <conv.chunks.Comment object at 0x100b71160>
    // <conv.chunks.Comment object at 0x100b71280>
    iny();
    lda(WorldNumber);
    cmp(World8);
    BEQ(EvalForMusic);
    dey();
    cpy(0x4);
    BCS(SetEndTimer);
    cpy(0x3);
    BCS(IncMsgCounter);
    JMP(EvalForMusic);
}

int EvalForMusic() {
    // <conv.chunks.Comment object at 0x100b71460>
    // <conv.chunks.Comment object at 0x100b714c0>
    // <conv.chunks.Comment object at 0x100b71700>
    // <conv.chunks.Comment object at 0x100b71790>
    // <conv.chunks.Comment object at 0x100b71820>
    // <conv.chunks.Comment object at 0x100b719d0>
    // <conv.chunks.Comment object at 0x100b71a60>
    // <conv.chunks.Comment object at 0x100b71c10>
    cpy(0x3);
    BNE(PrintMsg);
    lda(VictoryMusic);
    sta(EventMusicQueue);
    JMP(PrintMsg);
}

int PrintMsg() {
    // <conv.chunks.Comment object at 0x100b71cd0>
    // <conv.chunks.Comment object at 0x100b71e80>
    // <conv.chunks.Comment object at 0x100b71fa0>
    // <conv.chunks.Comment object at 0x100b720c0>
    tya();
    clc();
    adc(0xc);
    sta(VRAM_Buffer_AddrCtrl);
    JMP(IncMsgCounter);
}

int IncMsgCounter() {
    lda(SecondaryMsgCounter);
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x100b72660>
    sta(SecondaryMsgCounter);
    lda(PrimaryMsgCounter);
    adc(0x0);
    // <conv.chunks.Comment object at 0x100b72960>
    sta(PrimaryMsgCounter);
    cmp(0x7);
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // <conv.chunks.Comment object at 0x100b72b70>
    // <conv.chunks.Comment object at 0x100b72c00>
    BCC(ExitMsgs);
    lda(0x6);
    sta(WorldEndTimer);
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // <conv.chunks.Comment object at 0x100b72e40>
    // <conv.chunks.Comment object at 0x100b72ff0>
    inc(OperMode_Task);
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // <conv.chunks.Comment object at 0x100b73170>
    return 0;
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda(WorldEndTimer);
    BNE(EndExitOne);
    ldy(WorldNumber);
    cpy(World8);
    BCS(EndChkBButton);
    // <conv.chunks.Comment object at 0x100b732c0>
    // <conv.chunks.Comment object at 0x100b733e0>
    // <conv.chunks.Comment object at 0x100b73500>
    // <conv.chunks.Comment object at 0x100b73620>
    // <conv.chunks.Comment object at 0x100b73680>
    lda(0x0);
    sta(AreaNumber);
    sta(LevelNumber);
    sta(OperMode_Task);
    inc(WorldNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    // <conv.chunks.Comment object at 0x100b738f0>
    // <conv.chunks.Comment object at 0x100b73aa0>
    // <conv.chunks.Comment object at 0x100b73bc0>
    // <conv.chunks.Comment object at 0x100b73ce0>
    // <conv.chunks.Comment object at 0x100b73e00>
    // <conv.chunks.Comment object at 0x100b73f20>
    lda(GameModeValue);
    sta(OperMode);
    JMP(EndExitOne);
}

int EndExitOne() {
    // <conv.chunks.Comment object at 0x100b7c170>
    // <conv.chunks.Comment object at 0x100b7c290>
    return 0;
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    anda(B_Button);
    BEQ(EndExitTwo);
    lda(0x1);
    // <conv.chunks.Comment object at 0x100b7c4a0>
    // <conv.chunks.Comment object at 0x100b7c5c0>
    // <conv.chunks.Comment object at 0x100b7c6e0>
    // <conv.chunks.Comment object at 0x100b7c800>
    sta(WorldSelectEnableFlag);
    lda(0xff);
    // <conv.chunks.Comment object at 0x100b7ca10>
    sta(NumberofLives);
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // <conv.chunks.Comment object at 0x100b7cc20>
    // <conv.chunks.Comment object at 0x100b7cd70>
    return 0;
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda(FloateyNum_Control, x);
    BEQ(EndExitOne);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x100b7e2d0>
    // <conv.chunks.Comment object at 0x100b7ea80>
    // <conv.chunks.Comment object at 0x100b7eba0>
    BCC(ChkNumTimer);
    lda(0xb);
    sta(FloateyNum_Control, x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // <conv.chunks.Comment object at 0x100b7edb0>
    // <conv.chunks.Comment object at 0x100b7ee40>
    // <conv.chunks.Comment object at 0x100b7f050>
    tay();
    lda(FloateyNum_Timer, x);
    BNE(DecNumTimer);
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x100b7f140>
    // <conv.chunks.Comment object at 0x100b7f290>
    // <conv.chunks.Comment object at 0x100b7f3b0>
    return 0;
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // <conv.chunks.Comment object at 0x100b7f590>
    dec(FloateyNum_Timer, x);
    cmp(0x2b);
    // <conv.chunks.Comment object at 0x100b7f710>
    BNE(ChkTallEnemy);
    cpy(0xb);
    BNE(LoadNumTiles);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x100b7f920>
    // <conv.chunks.Comment object at 0x100b7f9b0>
    // <conv.chunks.Comment object at 0x100b7fb60>
    lda(Sfx_ExtraLife);
    sta(Square2SoundQueue);
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // <conv.chunks.Comment object at 0x100b7fd70>
    // <conv.chunks.Comment object at 0x100b7fe90>
    lda(offsetof(G, ScoreUpdateData), y);
    lsr();
    // <conv.chunks.Comment object at 0x100d18080>
    lsr();
    lsr();
    lsr();
    tax();
    lda(offsetof(G, ScoreUpdateData), y);
    anda(0b1111);
    sta(DigitModifier, x);
    JSR(AddToScore);
    JMP(ChkTallEnemy);
}

int ChkTallEnemy() {
    // <conv.chunks.Comment object at 0x100d182f0>
    // <conv.chunks.Comment object at 0x100d18380>
    // <conv.chunks.Comment object at 0x100d184d0>
    // <conv.chunks.Comment object at 0x100d185f0>
    // <conv.chunks.Comment object at 0x100d18740>
    // <conv.chunks.Comment object at 0x100d18860>
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x100d189e0>
    cmp(Spiny);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100d18b90>
    cmp(PiranhaPlant);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100d18e60>
    cmp(HammerBro);
    BEQ(GetAltOffset);
    // <conv.chunks.Comment object at 0x100d19070>
    cmp(GreyCheepCheep);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x100d19280>
    cmp(RedCheepCheep);
    BEQ(FloateyPart);
    cmp(TallEnemy);
    BCS(GetAltOffset);
    // <conv.chunks.Comment object at 0x100d19670>
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // <conv.chunks.Comment object at 0x100d198b0>
    // <conv.chunks.Comment object at 0x100d19940>
    // <conv.chunks.Comment object at 0x100d19af0>
    ldx(SprDataOffset_Ctrl);
    ldy(Alt_SprDataOffset, x);
    ldx(ObjectOffset);
    JMP(FloateyPart);
}

int FloateyPart() {
    // <conv.chunks.Comment object at 0x100d19c40>
    // <conv.chunks.Comment object at 0x100d19d90>
    // <conv.chunks.Comment object at 0x100d19eb0>
    lda(FloateyNum_Y_Pos, x);
    cmp(0x18);
    BCC(SetupNumSpr);
    // <conv.chunks.Comment object at 0x100d1a030>
    // <conv.chunks.Comment object at 0x100d1a0c0>
    sbc(0x1);
    sta(FloateyNum_Y_Pos, x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // <conv.chunks.Comment object at 0x100d1a2d0>
    // <conv.chunks.Comment object at 0x100d1a4b0>
    lda(FloateyNum_Y_Pos, x);
    sbc(0x8);
    JSR(DumpTwoSpr);
    lda(FloateyNum_X_Pos, x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x100d1a630>
    // <conv.chunks.Comment object at 0x100d1a6c0>
    // <conv.chunks.Comment object at 0x100d1a870>
    // <conv.chunks.Comment object at 0x100d1a9c0>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x100d1aba0>
    // <conv.chunks.Comment object at 0x100d1ac30>
    lda(0x2);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x100d1af00>
    // <conv.chunks.Comment object at 0x100d1b0e0>
    lda(FloateyNum_Control, x);
    asl();
    tax();
    // <conv.chunks.Comment object at 0x100d1b410>
    // <conv.chunks.Comment object at 0x100d1b4d0>
    lda(offsetof(G, FloateyNumTileData), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x100d1b680>
    lda(((offsetof(G, FloateyNumTileData)) + (1)), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x100d1b980>
    // <conv.chunks.Comment object at 0x100d1bb60>
    return 0;
    JMP(ScreenRoutines);
}

int ScreenRoutines() {
    lda(ScreenRoutineTask);
    JMP(InitScreen);
}

int InitScreen() {
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    // <conv.chunks.Comment object at 0x100d208f0>
    // <conv.chunks.Comment object at 0x100d20a10>
    lda(OperMode);
    BEQ(NextSubtask);
    ldx(0x3);
    // <conv.chunks.Comment object at 0x100d20c20>
    // <conv.chunks.Comment object at 0x100d20d40>
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda(BackgroundColorCtrl);
    pha();
    // <conv.chunks.Comment object at 0x100d20fb0>
    // <conv.chunks.Comment object at 0x100d21100>
    lda(PlayerStatus);
    pha();
    lda(0x0);
    sta(PlayerStatus);
    lda(0x2);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x100d21310>
    // <conv.chunks.Comment object at 0x100d213a0>
    // <conv.chunks.Comment object at 0x100d21550>
    // <conv.chunks.Comment object at 0x100d215e0>
    JSR(GetPlayerColors);
    pla();
    sta(PlayerStatus);
    pla();
    sta(BackgroundColorCtrl);
    JMP(IncSubtask);
    JMP(GetAreaPalette);
}

int GetAreaPalette() {
    ldy(AreaType);
    ldx(offsetof(G, AreaPalette), y);
    JMP(SetVRAMAddr_A);
}

int SetVRAMAddr_A() {
    // <conv.chunks.Comment object at 0x100d21e20>
    // <conv.chunks.Comment object at 0x100d22150>
    // <conv.chunks.Comment object at 0x100d222a0>
    stx(VRAM_Buffer_AddrCtrl);
    JMP(NextSubtask);
}

int NextSubtask() {
    // <conv.chunks.Comment object at 0x100d223f0>
    JMP(IncSubtask);
    JMP(GetBackgroundColor);
}

int GetBackgroundColor() {
    ldy(BackgroundColorCtrl);
    BEQ(NoBGColor);
    lda(((offsetof(G, BGColorCtrl_Addr)) - (4)), y);
    sta(VRAM_Buffer_AddrCtrl);
    JMP(NoBGColor);
}

int NoBGColor() {
    // <conv.chunks.Comment object at 0x100d22e70>
    // <conv.chunks.Comment object at 0x100d235f0>
    // <conv.chunks.Comment object at 0x100d23710>
    // <conv.chunks.Comment object at 0x100d238f0>
    // <conv.chunks.Comment object at 0x100d23a10>
    inc(ScreenRoutineTask);
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x100d23b90>
    ldy(0x0);
    lda(CurrentPlayer);
    // <conv.chunks.Comment object at 0x100d23d10>
    BEQ(ChkFiery);
    ldy(0x4);
    JMP(ChkFiery);
}

int ChkFiery() {
    // <conv.chunks.Comment object at 0x100d23fb0>
    // <conv.chunks.Comment object at 0x100d2c080>
    lda(PlayerStatus);
    cmp(0x2);
    BNE(StartClrGet);
    // <conv.chunks.Comment object at 0x100d2c2c0>
    ldy(0x8);
    JMP(StartClrGet);
}

int StartClrGet() {
    // <conv.chunks.Comment object at 0x100d2c4d0>
    lda(0x3);
    sta(0x0);
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // <conv.chunks.Comment object at 0x100d2c620>
    lda(offsetof(G, PlayerColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x100d2c920>
    iny();
    inx();
    dec(0x0);
    BPL(ClrGetLoop);
    ldx(VRAM_Buffer1_Offset);
    ldy(BackgroundColorCtrl);
    BNE(SetBGColor);
    ldy(AreaType);
    JMP(SetBGColor);
}

int SetBGColor() {
    // <conv.chunks.Comment object at 0x100d2ce00>
    // <conv.chunks.Comment object at 0x100d2cf20>
    // <conv.chunks.Comment object at 0x100d2d040>
    // <conv.chunks.Comment object at 0x100d2d160>
    // <conv.chunks.Comment object at 0x100d2d280>
    lda(offsetof(G, BackgroundColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x3f);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x100d2d5b0>
    // <conv.chunks.Comment object at 0x100d2d640>
    lda(0x10);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x100d2dac0>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100d2dd90>
    sta(((VRAM_Buffer1) + (7)), x);
    txa();
    clc();
    // <conv.chunks.Comment object at 0x100d2e090>
    // <conv.chunks.Comment object at 0x100d2e150>
    adc(0x7);
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // <conv.chunks.Comment object at 0x100d2e240>
    sta(VRAM_Buffer1_Offset);
    return 0;
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda(AreaStyle);
    // <conv.chunks.Comment object at 0x100d2e540>
    cmp(0x1);
    BNE(NoAltPal);
    lda(0xb);
    JMP(SetVRAMAddr_B);
}

int SetVRAMAddr_B() {
    sta(VRAM_Buffer_AddrCtrl);
    JMP(NoAltPal);
}

int NoAltPal() {
    // <conv.chunks.Comment object at 0x100d2ea80>
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
    // <conv.chunks.Comment object at 0x100d2f020>
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    // <conv.chunks.Comment object at 0x100d2f230>
    sta(VRAM_Buffer1, x);
    lda(0x73);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100d2f710>
    sta(((VRAM_Buffer1) + (2)), x);
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x100d2f9e0>
    iny();
    tya();
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x28);
    // <conv.chunks.Comment object at 0x100d2fdd0>
    sta(((VRAM_Buffer1) + (4)), x);
    ldy(LevelNumber);
    iny();
    // <conv.chunks.Comment object at 0x100d340e0>
    // <conv.chunks.Comment object at 0x100d34230>
    tya();
    sta(((VRAM_Buffer1) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100d34500>
    sta(((VRAM_Buffer1) + (6)), x);
    txa();
    // <conv.chunks.Comment object at 0x100d34800>
    clc();
    adc(0x6);
    sta(VRAM_Buffer1_Offset);
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda(GameTimerExpiredFlag);
    BEQ(NoTimeUp);
    // <conv.chunks.Comment object at 0x100d34c50>
    // <conv.chunks.Comment object at 0x100d34d70>
    lda(0x0);
    sta(GameTimerExpiredFlag);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100d34ef0>
    // <conv.chunks.Comment object at 0x100d350a0>
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // <conv.chunks.Comment object at 0x100d352b0>
    inc(ScreenRoutineTask);
    JMP(IncSubtask);
    JMP(DisplayIntermediate);
}

int DisplayIntermediate() {
    lda(OperMode);
    BEQ(NoInter);
    cmp(GameOverModeValue);
    BEQ(GameOverInter);
    lda(AltEntranceControl);
    BNE(NoInter);
    ldy(AreaType);
    cpy(0x3);
    // <conv.chunks.Comment object at 0x100d35550>
    // <conv.chunks.Comment object at 0x100d35670>
    // <conv.chunks.Comment object at 0x100d357c0>
    // <conv.chunks.Comment object at 0x100d358e0>
    // <conv.chunks.Comment object at 0x100d35a00>
    // <conv.chunks.Comment object at 0x100d35b20>
    // <conv.chunks.Comment object at 0x100d35c70>
    // <conv.chunks.Comment object at 0x100d35d90>
    BEQ(PlayerInter);
    lda(DisableIntermediate);
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // <conv.chunks.Comment object at 0x100d35fa0>
    // <conv.chunks.Comment object at 0x100d360c0>
    // <conv.chunks.Comment object at 0x100d36210>
    JSR(DrawPlayer_Intermediate);
    lda(0x1);
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x100d366f0>
    return 0;
    JMP(GameOverInter);
}

int GameOverInter() {
    // <conv.chunks.Comment object at 0x100d36930>
    lda(0x12);
    sta(ScreenTimer);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100d36b70>
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // <conv.chunks.Comment object at 0x100d36e70>
    lda(0x8);
    sta(ScreenRoutineTask);
    return 0;
    JMP(AreaParserTaskControl);
}

int AreaParserTaskControl() {
    inc(DisableScreenFlag);
    JMP(TaskLoop);
}

int TaskLoop() {
    // <conv.chunks.Comment object at 0x100d371d0>
    // <conv.chunks.Comment object at 0x100d372f0>
    JSR(AreaParserTaskHandler);
    lda(AreaParserTaskNum);
    BNE(TaskLoop);
    dec(ColumnSets);
    // <conv.chunks.Comment object at 0x100d37440>
    // <conv.chunks.Comment object at 0x100d37560>
    // <conv.chunks.Comment object at 0x100d37680>
    BPL(OutputCol);
    inc(ScreenRoutineTask);
    JMP(OutputCol);
}

int OutputCol() {
    // <conv.chunks.Comment object at 0x100d37890>
    // <conv.chunks.Comment object at 0x100d379b0>
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x100d37a70>
    return 0;
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda(OperMode);
    BNE(IncModeTask_B);
    lda(HI8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x100d37d70>
    // <conv.chunks.Comment object at 0x100d37e90>
    // <conv.chunks.Comment object at 0x100d37fb0>
    // <conv.chunks.Comment object at 0x100d44140>
    lda(LO8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    lda(0x3);
    sta(0x1);
    // <conv.chunks.Comment object at 0x100d44470>
    // <conv.chunks.Comment object at 0x100d445c0>
    ldy(0x0);
    sty(0x0);
    lda(PPU_DATA);
    JMP(OutputTScr);
}

int OutputTScr() {
    // <conv.chunks.Comment object at 0x100d44710>
    // <conv.chunks.Comment object at 0x100d449b0>
    lda(PPU_DATA);
    sta((0x0), y);
    // <conv.chunks.Comment object at 0x100d44b00>
    iny();
    BNE(ChkHiByte);
    inc(0x1);
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // <conv.chunks.Comment object at 0x100d44d10>
    // <conv.chunks.Comment object at 0x100d44e60>
    // <conv.chunks.Comment object at 0x100d44ef0>
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
    lda(OperMode);
    BNE(IncModeTask_B);
    ldx(0x0);
    JMP(TScrClear);
}

int TScrClear() {
    sta(((VRAM_Buffer1) - (1)), x);
    sta(((((VRAM_Buffer1) - (1))) + (0x100)), x);
    dex();
    BNE(TScrClear);
    JSR(DrawMushroomIcon);
    JMP(IncSubtask);
}

int IncSubtask() {
    // <conv.chunks.Comment object at 0x100d460c0>
    // <conv.chunks.Comment object at 0x100d461e0>
    inc(ScreenRoutineTask);
    return 0;
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(0xfa);
    // <conv.chunks.Comment object at 0x100d46420>
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // <conv.chunks.Comment object at 0x100d46630>
    inc(OperMode_Task);
    return 0;
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // <conv.chunks.Comment object at 0x100d59c40>
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
    // <conv.chunks.Comment object at 0x100d59d90>
    // <conv.chunks.Comment object at 0x100d59e20>
    // <conv.chunks.Comment object at 0x100d59eb0>
    // <conv.chunks.Comment object at 0x100d5a060>
    // <conv.chunks.Comment object at 0x100d5a0f0>
    // <conv.chunks.Comment object at 0x100d5a2a0>
    // <conv.chunks.Comment object at 0x100d5a330>
    lda(NumberOfPlayers);
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // <conv.chunks.Comment object at 0x100d5a510>
    // <conv.chunks.Comment object at 0x100d5a660>
    // <conv.chunks.Comment object at 0x100d5a6f0>
    ldx(offsetof(G, GameTextOffsets), y);
    ldy(0x0);
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // <conv.chunks.Comment object at 0x100d5a8d0>
    lda(offsetof(G, GameText), x);
    cmp(0xff);
    BEQ(EndGameText);
    sta(VRAM_Buffer1, y);
    inx();
    // <conv.chunks.Comment object at 0x100d5aae0>
    // <conv.chunks.Comment object at 0x100d5ab70>
    // <conv.chunks.Comment object at 0x100d5ad20>
    // <conv.chunks.Comment object at 0x100d5aea0>
    iny();
    BNE(GameTextLoop);
    JMP(EndGameText);
}

int EndGameText() {
    // <conv.chunks.Comment object at 0x100d5afc0>
    // <conv.chunks.Comment object at 0x100d5b0e0>
    lda(0x0);
    sta(VRAM_Buffer1, y);
    pla();
    // <conv.chunks.Comment object at 0x100d5b380>
    tax();
    cmp(0x4);
    // <conv.chunks.Comment object at 0x100d5b4a0>
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda(NumberofLives);
    clc();
    // <conv.chunks.Comment object at 0x100d5b6e0>
    // <conv.chunks.Comment object at 0x100d5b770>
    // <conv.chunks.Comment object at 0x100d5b890>
    // <conv.chunks.Comment object at 0x100d5b9e0>
    adc(0x1);
    cmp(10);
    // <conv.chunks.Comment object at 0x100d5bb90>
    BCC(PutLives);
    sbc(10);
    ldy(0x9f);
    sty(((VRAM_Buffer1) + (7)));
    JMP(PutLives);
}

int PutLives() {
    sta(((VRAM_Buffer1) + (8)));
    ldy(WorldNumber);
    iny();
    // <conv.chunks.Comment object at 0x100d603b0>
    // <conv.chunks.Comment object at 0x100d60500>
    sty(((VRAM_Buffer1) + (19)));
    ldy(LevelNumber);
    iny();
    sty(((VRAM_Buffer1) + (21)));
    // <conv.chunks.Comment object at 0x100d608c0>
    return 0;
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda(NumberOfPlayers);
    BEQ(ExitChkName);
    lda(CurrentPlayer);
    dex();
    // <conv.chunks.Comment object at 0x100d60b60>
    // <conv.chunks.Comment object at 0x100d60c80>
    // <conv.chunks.Comment object at 0x100d60da0>
    // <conv.chunks.Comment object at 0x100d60ef0>
    BNE(ChkLuigi);
    ldy(OperMode);
    // <conv.chunks.Comment object at 0x100d61070>
    cpy(GameOverModeValue);
    BEQ(ChkLuigi);
    eor(0b1);
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // <conv.chunks.Comment object at 0x100d61550>
    ldy(0x4);
    JMP(NameLoop);
}

int NameLoop() {
    // <conv.chunks.Comment object at 0x100d616d0>
    lda(offsetof(G, LuigiName), y);
    sta(((VRAM_Buffer1) + (3)), y);
    dey();
    BPL(NameLoop);
    JMP(ExitChkName);
}

int ExitChkName() {
    return 0;
    JMP(PrintWarpZoneNumbers);
}

int PrintWarpZoneNumbers() {
    sbc(0x4);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100d61d60>
    // <conv.chunks.Comment object at 0x100d61eb0>
    // <conv.chunks.Comment object at 0x100d61fa0>
    tax();
    ldy(0x0);
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // <conv.chunks.Comment object at 0x100d62120>
    lda(offsetof(G, WarpZoneNumbers), x);
    sta(((VRAM_Buffer1) + (27)), y);
    // <conv.chunks.Comment object at 0x100d62330>
    inx();
    iny();
    // <conv.chunks.Comment object at 0x100d62600>
    iny();
    iny();
    iny();
    cpy(0xc);
    BCC(WarpNumLoop);
    lda(0x2c);
    // <conv.chunks.Comment object at 0x100d62a20>
    JMP(SetVRAMOffset);
    JMP(ResetSpritesAndScreenTimer);
}

int ResetSpritesAndScreenTimer() {
    lda(ScreenTimer);
    BNE(NoReset);
    JSR(MoveAllSpritesOffscreen);
    JMP(ResetScreenTimer);
}

int ResetScreenTimer() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x100d63050>
    sta(ScreenTimer);
    inc(ScreenRoutineTask);
    JMP(NoReset);
}

int NoReset() {
    return 0;
    JMP(RenderAreaGraphics);
}

int RenderAreaGraphics() {
    lda(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x100d63650>
    anda(0x1);
    sta(0x5);
    ldy(VRAM_Buffer2_Offset);
    // <conv.chunks.Comment object at 0x100d637d0>
    sty(0x0);
    lda(CurrentNTAddr_Low);
    // <conv.chunks.Comment object at 0x100d63a70>
    sta(((VRAM_Buffer2) + (1)), y);
    lda(CurrentNTAddr_High);
    sta(VRAM_Buffer2, y);
    lda(0x9a);
    sta(((VRAM_Buffer2) + (2)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100d6c0b0>
    // <conv.chunks.Comment object at 0x100d6c140>
    // <conv.chunks.Comment object at 0x100d6c3e0>
    sta(0x4);
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // <conv.chunks.Comment object at 0x100d6c680>
    stx(0x1);
    lda(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x100d6c770>
    anda(0b11000000);
    sta(0x3);
    asl();
    rol();
    rol();
    tay();
    lda(offsetof(G, MetatileGraphics_Low), y);
    // <conv.chunks.Comment object at 0x100d6ca40>
    // <conv.chunks.Comment object at 0x100d6ca10>
    // <conv.chunks.Comment object at 0x100d6cc20>
    // <conv.chunks.Comment object at 0x100d6cce0>
    // <conv.chunks.Comment object at 0x100d6cda0>
    // <conv.chunks.Comment object at 0x100d6ce30>
    sta(0x6);
    lda(offsetof(G, MetatileGraphics_High), y);
    sta(0x7);
    lda(MetatileBuffer, x);
    asl();
    // <conv.chunks.Comment object at 0x100d6d190>
    // <conv.chunks.Comment object at 0x100d6d400>
    asl();
    sta(0x2);
    lda(AreaParserTaskNum);
    anda(0b1);
    eor(0b1);
    asl();
    adc(0x2);
    // <conv.chunks.Comment object at 0x100d6d520>
    // <conv.chunks.Comment object at 0x100d6d730>
    // <conv.chunks.Comment object at 0x100d6d850>
    // <conv.chunks.Comment object at 0x100d6d9a0>
    // <conv.chunks.Comment object at 0x100d6da60>
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100d6dc10>
    lda((0x6), y);
    sta(((VRAM_Buffer2) + (3)), x);
    // <conv.chunks.Comment object at 0x100d6dbe0>
    iny();
    lda((0x6), y);
    // <conv.chunks.Comment object at 0x100d6e0f0>
    sta(((VRAM_Buffer2) + (4)), x);
    ldy(0x4);
    lda(0x5);
    BNE(RightCheck);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100d6e480>
    // <conv.chunks.Comment object at 0x100d6e450>
    // <conv.chunks.Comment object at 0x100d6e630>
    // <conv.chunks.Comment object at 0x100d6e7e0>
    // <conv.chunks.Comment object at 0x100d6e7b0>
    BCS(LLeft);
    rol(0x3);
    rol(0x3);
    // <conv.chunks.Comment object at 0x100d6eae0>
    // <conv.chunks.Comment object at 0x100d6eab0>
    rol(0x3);
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // <conv.chunks.Comment object at 0x100d6eed0>
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100d6ef00>
    BCS(NextMTRow);
    lsr(0x3);
    lsr(0x3);
    // <conv.chunks.Comment object at 0x100d6f200>
    // <conv.chunks.Comment object at 0x100d6f1d0>
    lsr(0x3);
    lsr(0x3);
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // <conv.chunks.Comment object at 0x100d6f6e0>
    lsr(0x3);
    lsr(0x3);
    JMP(NextMTRow);
}

int NextMTRow() {
    // <conv.chunks.Comment object at 0x100d6f740>
    // <conv.chunks.Comment object at 0x100d6f920>
    inc(0x4);
    JMP(SetAttrib);
}

int SetAttrib() {
    // <conv.chunks.Comment object at 0x100d6fa70>
    lda(AttributeBuffer, y);
    ora(0x3);
    sta(AttributeBuffer, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x100d6fc80>
    // <conv.chunks.Comment object at 0x100d6fd10>
    // <conv.chunks.Comment object at 0x100d6fef0>
    inc(0x0);
    ldx(0x1);
    inx();
    // <conv.chunks.Comment object at 0x100d780b0>
    // <conv.chunks.Comment object at 0x100d781d0>
    cpx(0xd);
    BCC(DrawMTLoop);
    ldy(0x0);
    iny();
    // <conv.chunks.Comment object at 0x100d78350>
    // <conv.chunks.Comment object at 0x100d78530>
    // <conv.chunks.Comment object at 0x100d78500>
    iny();
    iny();
    lda(0x0);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    inc(CurrentNTAddr_Low);
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100d78860>
    // <conv.chunks.Comment object at 0x100d78a40>
    // <conv.chunks.Comment object at 0x100d78b60>
    // <conv.chunks.Comment object at 0x100d78c80>
    // <conv.chunks.Comment object at 0x100d78da0>
    BNE(ExitDrawM);
    lda(0x80);
    sta(CurrentNTAddr_Low);
    lda(CurrentNTAddr_High);
    eor(0b100);
    // <conv.chunks.Comment object at 0x100d78fb0>
    // <conv.chunks.Comment object at 0x100d79040>
    // <conv.chunks.Comment object at 0x100d791f0>
    // <conv.chunks.Comment object at 0x100d79310>
    sta(CurrentNTAddr_High);
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // <conv.chunks.Comment object at 0x100d79520>
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    sec();
    // <conv.chunks.Comment object at 0x100d79730>
    // <conv.chunks.Comment object at 0x100d79850>
    // <conv.chunks.Comment object at 0x100d799a0>
    sbc(0x4);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100d79a90>
    sta(0x1);
    lda(CurrentNTAddr_High);
    // <conv.chunks.Comment object at 0x100d79c40>
    BCS(SetATHigh);
    eor(0b100);
    JMP(SetATHigh);
}

int SetATHigh() {
    // <conv.chunks.Comment object at 0x100d79f40>
    // <conv.chunks.Comment object at 0x100d7a060>
    anda(0b100);
    ora(0x23);
    // <conv.chunks.Comment object at 0x100d7a1b0>
    sta(0x0);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x100d7a360>
    // <conv.chunks.Comment object at 0x100d7a240>
    lsr();
    adc(0xc0);
    sta(0x1);
    // <conv.chunks.Comment object at 0x100d7a630>
    // <conv.chunks.Comment object at 0x100d7a780>
    ldx(0x0);
    ldy(VRAM_Buffer2_Offset);
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(0x0);
    sta(VRAM_Buffer2, y);
    // <conv.chunks.Comment object at 0x100d7ab40>
    lda(0x1);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x100d7ad80>
    // <conv.chunks.Comment object at 0x100d7aea0>
    sta(((VRAM_Buffer2) + (1)), y);
    sta(0x1);
    lda(AttributeBuffer, x);
    sta(((VRAM_Buffer2) + (3)), y);
    // <conv.chunks.Comment object at 0x100d7b1d0>
    // <conv.chunks.Comment object at 0x100d7b260>
    // <conv.chunks.Comment object at 0x100d7b410>
    lda(0x1);
    sta(((VRAM_Buffer2) + (2)), y);
    // <conv.chunks.Comment object at 0x100d7b680>
    lsr();
    sta(AttributeBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x100d7b9b0>
    // <conv.chunks.Comment object at 0x100d7bb30>
    iny();
    iny();
    iny();
    inx();
    cpx(0x7);
    // <conv.chunks.Comment object at 0x100d7bda0>
    // <conv.chunks.Comment object at 0x100d7be30>
    BCC(AttribLoop);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x100d84380>
    return 0;
    JMP(ColorRotation);
}

int ColorRotation() {
    lda(FrameCounter);
    anda(0x7);
    BNE(ExitColorRot);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x100d84740>
    // <conv.chunks.Comment object at 0x100d85910>
    // <conv.chunks.Comment object at 0x100d859a0>
    // <conv.chunks.Comment object at 0x100d85b50>
    cpx(0x31);
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // <conv.chunks.Comment object at 0x100d85cd0>
    // <conv.chunks.Comment object at 0x100d85eb0>
    // <conv.chunks.Comment object at 0x100d85f40>
    lda(offsetof(G, BlankPalette), y);
    sta(VRAM_Buffer1, x);
    inx();
    // <conv.chunks.Comment object at 0x100d860c0>
    // <conv.chunks.Comment object at 0x100d86240>
    iny();
    cpy(0x8);
    BCC(GetBlankPal);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x100d863c0>
    // <conv.chunks.Comment object at 0x100d86570>
    lda(0x3);
    sta(0x0);
    lda(AreaType);
    asl();
    // <conv.chunks.Comment object at 0x100d867b0>
    // <conv.chunks.Comment object at 0x100d86840>
    // <conv.chunks.Comment object at 0x100d869f0>
    asl();
    tay();
    JMP(GetAreaPal);
}

int GetAreaPal() {
    // <conv.chunks.Comment object at 0x100d86b40>
    // <conv.chunks.Comment object at 0x100d86bd0>
    lda(offsetof(G, Palette3Data), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x100d86d50>
    iny();
    inx();
    dec(0x0);
    BPL(GetAreaPal);
    ldx(VRAM_Buffer1_Offset);
    ldy(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x100d870b0>
    // <conv.chunks.Comment object at 0x100d87140>
    // <conv.chunks.Comment object at 0x100d872c0>
    // <conv.chunks.Comment object at 0x100d873e0>
    lda(offsetof(G, ColorRotatePalette), y);
    sta(((VRAM_Buffer1) + (4)), x);
    // <conv.chunks.Comment object at 0x100d87620>
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x100d87950>
    adc(0x7);
    sta(VRAM_Buffer1_Offset);
    inc(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x100d87bc0>
    lda(ColorRotateOffset);
    cmp(0x6);
    BCC(ExitColorRot);
    // <conv.chunks.Comment object at 0x100d87dd0>
    // <conv.chunks.Comment object at 0x100d87e60>
    lda(0x0);
    sta(ColorRotateOffset);
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // <conv.chunks.Comment object at 0x100d8c0b0>
    // <conv.chunks.Comment object at 0x100d8c290>
    return 0;
    JMP(RemoveCoin_Axe);
}

int RemoveCoin_Axe() {
    ldy(0x41);
    lda(0x3);
    ldx(AreaType);
    BNE(WriteBlankMT);
    lda(0x4);
    JMP(WriteBlankMT);
}

int WriteBlankMT() {
    // <conv.chunks.Comment object at 0x100d8c530>
    // <conv.chunks.Comment object at 0x100d8c5c0>
    // <conv.chunks.Comment object at 0x100d8d220>
    // <conv.chunks.Comment object at 0x100d8d3d0>
    // <conv.chunks.Comment object at 0x100d8d4f0>
    // <conv.chunks.Comment object at 0x100d8d580>
    JSR(PutBlockMetatile);
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x100d8d7c0>
    return 0;
    JMP(ReplaceBlockMetatile);
}

int ReplaceBlockMetatile() {
    JSR(WriteBlockMetatile);
    inc(Block_ResidualCounter);
    dec(Block_RepFlag, x);
    return 0;
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
    // <conv.chunks.Comment object at 0x100d8e030>
    // <conv.chunks.Comment object at 0x100d8e0c0>
    // <conv.chunks.Comment object at 0x100d8e1e0>
    // <conv.chunks.Comment object at 0x100d8e390>
    cmp(0x58);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x100d8e510>
    cmp(0x51);
    BEQ(UseBOffset);
    iny();
    // <conv.chunks.Comment object at 0x100d8e720>
    // <conv.chunks.Comment object at 0x100d8e900>
    cmp(0x5d);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x100d8e9f0>
    cmp(0x52);
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // <conv.chunks.Comment object at 0x100d8ec00>
    // <conv.chunks.Comment object at 0x100d8ede0>
    // <conv.chunks.Comment object at 0x100d8ee70>
    tya();
    ldy(VRAM_Buffer1_Offset);
    iny();
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}

int MoveVOffset() {
    // <conv.chunks.Comment object at 0x100d8ef60>
    // <conv.chunks.Comment object at 0x100d8f0b0>
    // <conv.chunks.Comment object at 0x100d8f140>
    // <conv.chunks.Comment object at 0x100d8f260>
    dey();
    tya();
    // <conv.chunks.Comment object at 0x100d8f380>
    clc();
    adc(10);
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(0x0);
    sty(0x1);
    // <conv.chunks.Comment object at 0x100d8f710>
    // <conv.chunks.Comment object at 0x100d8f6e0>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100d8f9e0>
    tax();
    ldy(0x20);
    lda(0x6);
    cmp(0xd0);
    BCC(SaveHAdder);
    ldy(0x24);
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // <conv.chunks.Comment object at 0x100d8fb00>
    // <conv.chunks.Comment object at 0x100d8fc50>
    // <conv.chunks.Comment object at 0x100d8fce0>
    // <conv.chunks.Comment object at 0x100d8fdd0>
    // <conv.chunks.Comment object at 0x100d8ff80>
    // <conv.chunks.Comment object at 0x100d98050>
    sty(0x3);
    anda(0xf);
    asl();
    sta(0x4);
    // <conv.chunks.Comment object at 0x100d981d0>
    // <conv.chunks.Comment object at 0x100d98380>
    // <conv.chunks.Comment object at 0x100d98440>
    lda(0x0);
    sta(0x5);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100d98650>
    // <conv.chunks.Comment object at 0x100d98590>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x100d988f0>
    asl();
    rol(0x5);
    // <conv.chunks.Comment object at 0x100d98ad0>
    asl();
    rol(0x5);
    adc(0x4);
    sta(0x4);
    lda(0x5);
    adc(0x0);
    // <conv.chunks.Comment object at 0x100d98c80>
    // <conv.chunks.Comment object at 0x100d98c50>
    // <conv.chunks.Comment object at 0x100d98d10>
    // <conv.chunks.Comment object at 0x100d98e30>
    // <conv.chunks.Comment object at 0x100d99070>
    clc();
    adc(0x3);
    sta(0x5);
    ldy(0x1);
    JMP(RemBridge);
}

int RemBridge() {
    // <conv.chunks.Comment object at 0x100d992b0>
    // <conv.chunks.Comment object at 0x100d99280>
    // <conv.chunks.Comment object at 0x100d99340>
    // <conv.chunks.Comment object at 0x100d99580>
    lda(offsetof(G, BlockGfxData), x);
    sta(((VRAM_Buffer1) + (2)), y);
    // <conv.chunks.Comment object at 0x100d99760>
    lda(((offsetof(G, BlockGfxData)) + (1)), x);
    sta(((VRAM_Buffer1) + (3)), y);
    lda(((offsetof(G, BlockGfxData)) + (2)), x);
    sta(((VRAM_Buffer1) + (7)), y);
    lda(((offsetof(G, BlockGfxData)) + (3)), x);
    // <conv.chunks.Comment object at 0x100d99d30>
    // <conv.chunks.Comment object at 0x100d99f40>
    // <conv.chunks.Comment object at 0x100d9a150>
    sta(((VRAM_Buffer1) + (8)), y);
    lda(0x4);
    sta(VRAM_Buffer1, y);
    clc();
    adc(0x20);
    sta(((VRAM_Buffer1) + (5)), y);
    lda(0x5);
    sta(((VRAM_Buffer1) - (1)), y);
    sta(((VRAM_Buffer1) + (4)), y);
    // <conv.chunks.Comment object at 0x100d9a540>
    // <conv.chunks.Comment object at 0x100d9a7b0>
    // <conv.chunks.Comment object at 0x100d9a840>
    // <conv.chunks.Comment object at 0x100d9a8d0>
    // <conv.chunks.Comment object at 0x100d9aba0>
    // <conv.chunks.Comment object at 0x100d9ac30>
    // <conv.chunks.Comment object at 0x100d9ae70>
    lda(0x2);
    sta(((VRAM_Buffer1) + (1)), y);
    sta(((VRAM_Buffer1) + (6)), y);
    // <conv.chunks.Comment object at 0x100d9b0e0>
    // <conv.chunks.Comment object at 0x100d9b380>
    lda(0x0);
    sta(((VRAM_Buffer1) + (9)), y);
    ldx(0x0);
    return 0;
    JMP(InitializeNameTables);
}

int InitializeNameTables() {
    lda(PPU_STATUS);
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x100de1430>
    // <conv.chunks.Comment object at 0x100de1550>
    // <conv.chunks.Comment object at 0x100de1670>
    // <conv.chunks.Comment object at 0x100de1790>
    JSR(WritePPUReg1);
    lda(0x24);
    // <conv.chunks.Comment object at 0x100de19a0>
    JSR(WriteNTAddr);
    lda(0x20);
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x100de1fd0>
    ldy(0xc0);
    lda(0x24);
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // <conv.chunks.Comment object at 0x100de2240>
    sta(PPU_DATA);
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(64);
    // <conv.chunks.Comment object at 0x100de2750>
    txa();
    sta(VRAM_Buffer1_Offset);
    sta(VRAM_Buffer1);
    JMP(InitATLoop);
}

int InitATLoop() {
    sta(PPU_DATA);
    dey();
    BNE(InitATLoop);
    sta(HorizontalScroll);
    // <conv.chunks.Comment object at 0x100de2db0>
    sta(VerticalScroll);
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x100de2fc0>
    // <conv.chunks.Comment object at 0x100de3110>
    // <conv.chunks.Comment object at 0x100de3170>
    sta(JOYPAD_PORT);
    lsr();
    tax();
    // <conv.chunks.Comment object at 0x100de3440>
    sta(JOYPAD_PORT);
    JSR(ReadPortBits);
    inx();
    JMP(ReadPortBits);
}

int ReadPortBits() {
    ldy(0x8);
    JMP(PortLoop);
}

int PortLoop() {
    // <conv.chunks.Comment object at 0x100de3800>
    pha();
    lda(JOYPAD_PORT, x);
    sta(0x0);
    lsr();
    ora(0x0);
    // <conv.chunks.Comment object at 0x100de3980>
    // <conv.chunks.Comment object at 0x100de3b00>
    // <conv.chunks.Comment object at 0x100de3ad0>
    // <conv.chunks.Comment object at 0x100de3ce0>
    lsr();
    pla();
    rol();
    // <conv.chunks.Comment object at 0x100de3e90>
    // <conv.chunks.Comment object at 0x100de3f50>
    dey();
    BNE(PortLoop);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x100de80b0>
    // <conv.chunks.Comment object at 0x100de81d0>
    pha();
    anda(0b110000);
    anda(JoypadBitMask, x);
    BEQ(Save8Bits);
    // <conv.chunks.Comment object at 0x100de83b0>
    // <conv.chunks.Comment object at 0x100de84d0>
    // <conv.chunks.Comment object at 0x100de8620>
    pla();
    anda(0b11001111);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x100de87d0>
    // <conv.chunks.Comment object at 0x100de88f0>
    return 0;
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta(JoypadBitMask, x);
    // <conv.chunks.Comment object at 0x100de8b90>
    return 0;
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x100de8e30>
    iny();
    lda((0x0), y);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x100de8fe0>
    // <conv.chunks.Comment object at 0x100de9040>
    iny();
    lda((0x0), y);
    asl();
    // <conv.chunks.Comment object at 0x100de9310>
    // <conv.chunks.Comment object at 0x100de94c0>
    pha();
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b100);
    BCS(SetupWrites);
    anda(0b11111011);
    JMP(SetupWrites);
}

int SetupWrites() {
    // <conv.chunks.Comment object at 0x100de95e0>
    // <conv.chunks.Comment object at 0x100de9700>
    // <conv.chunks.Comment object at 0x100de9820>
    // <conv.chunks.Comment object at 0x100de9940>
    // <conv.chunks.Comment object at 0x100de9a60>
    JSR(WritePPUReg1);
    pla();
    // <conv.chunks.Comment object at 0x100de9be0>
    asl();
    BCC(GetLength);
    ora(0b10);
    // <conv.chunks.Comment object at 0x100de9d00>
    // <conv.chunks.Comment object at 0x100de9e20>
    iny();
    JMP(GetLength);
}

int GetLength() {
    // <conv.chunks.Comment object at 0x100de9fd0>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100dea0f0>
    tax();
    JMP(OutputToVRAM);
}

int OutputToVRAM() {
    // <conv.chunks.Comment object at 0x100dea210>
    BCS(RepeatByte);
    iny();
    JMP(RepeatByte);
}

int RepeatByte() {
    // <conv.chunks.Comment object at 0x100dea390>
    // <conv.chunks.Comment object at 0x100dea420>
    lda((0x0), y);
    sta(PPU_DATA);
    dex();
    // <conv.chunks.Comment object at 0x100dea6f0>
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x100dea9c0>
    // <conv.chunks.Comment object at 0x100dea990>
    lda(0x0);
    adc(0x1);
    sta(0x1);
    lda(0x3f);
    // <conv.chunks.Comment object at 0x100deac30>
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x100deb290>
    sta(PPU_ADDRESS);
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // <conv.chunks.Comment object at 0x100deb4a0>
    ldx(PPU_STATUS);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100deb5f0>
    lda((0x0), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // <conv.chunks.Comment object at 0x100deb740>
    // <conv.chunks.Comment object at 0x100deb980>
    sta(PPU_SCROLL_REG);
    sta(PPU_SCROLL_REG);
    // <conv.chunks.Comment object at 0x100debad0>
    return 0;
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta(PPU_CTRL_REG1);
    sta(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x100debce0>
    // <conv.chunks.Comment object at 0x100debe00>
    return 0;
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(0x0);
    JSR(OutputNumbers);
    lda(0x0);
    lsr();
    // <conv.chunks.Comment object at 0x100df4950>
    // <conv.chunks.Comment object at 0x100df49e0>
    // <conv.chunks.Comment object at 0x100df4ec0>
    // <conv.chunks.Comment object at 0x100df4e90>
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}

int OutputNumbers() {
    clc();
    // <conv.chunks.Comment object at 0x100df5280>
    adc(0x1);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100df5370>
    cmp(0x6);
    BCS(ExitOutputN);
    pha();
    asl();
    // <conv.chunks.Comment object at 0x100df5730>
    // <conv.chunks.Comment object at 0x100df57f0>
    tay();
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x100df5910>
    // <conv.chunks.Comment object at 0x100df5a30>
    // <conv.chunks.Comment object at 0x100df5ac0>
    BNE(SetupNums);
    lda(0x22);
    JMP(SetupNums);
}

int SetupNums() {
    sta(VRAM_Buffer1, x);
    lda(offsetof(G, StatusBarData), y);
    sta(((VRAM_Buffer1) + (1)), x);
    // <conv.chunks.Comment object at 0x100df5fd0>
    // <conv.chunks.Comment object at 0x100df6120>
    lda(((offsetof(G, StatusBarData)) + (1)), y);
    sta(((VRAM_Buffer1) + (2)), x);
    sta(0x3);
    stx(0x2);
    pla();
    // <conv.chunks.Comment object at 0x100df6720>
    // <conv.chunks.Comment object at 0x100df66f0>
    // <conv.chunks.Comment object at 0x100df67b0>
    tax();
    lda(offsetof(G, StatusBarOffset), x);
    // <conv.chunks.Comment object at 0x100df6a80>
    sec();
    sbc(((offsetof(G, StatusBarData)) + (1)), y);
    tay();
    // <conv.chunks.Comment object at 0x100df6c60>
    // <conv.chunks.Comment object at 0x100df6ea0>
    ldx(0x2);
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // <conv.chunks.Comment object at 0x100df6f30>
    lda(DisplayDigits, y);
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    iny();
    dec(0x3);
    // <conv.chunks.Comment object at 0x100df74d0>
    BNE(DigitPLoop);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100df76b0>
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    // <conv.chunks.Comment object at 0x100df79e0>
    inx();
    inx();
    stx(VRAM_Buffer1_Offset);
    JMP(ExitOutputN);
}

int ExitOutputN() {
    return 0;
    JMP(DigitsMathRoutine);
}

int DigitsMathRoutine() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x100df7dd0>
    cmp(TitleScreenModeValue);
    BEQ(EraseDMods);
    // <conv.chunks.Comment object at 0x100df7fe0>
    ldx(0x5);
    JMP(AddModLoop);
}

int AddModLoop() {
    // <conv.chunks.Comment object at 0x100dfc1a0>
    lda(DigitModifier, x);
    clc();
    adc(DisplayDigits, y);
    BMI(BorrowOne);
    // <conv.chunks.Comment object at 0x100dfc440>
    // <conv.chunks.Comment object at 0x100dfc590>
    cmp(10);
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // <conv.chunks.Comment object at 0x100dfc6b0>
    // <conv.chunks.Comment object at 0x100dfc8c0>
    sta(DisplayDigits, y);
    dey();
    dex();
    BPL(AddModLoop);
    JMP(EraseDMods);
}

int EraseDMods() {
    // <conv.chunks.Comment object at 0x100dfca70>
    // <conv.chunks.Comment object at 0x100dfcb30>
    // <conv.chunks.Comment object at 0x100dfcbc0>
    // <conv.chunks.Comment object at 0x100dfcce0>
    lda(0x0);
    ldx(0x6);
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // <conv.chunks.Comment object at 0x100dfcda0>
    // <conv.chunks.Comment object at 0x100dfcec0>
    sta(((DigitModifier) - (1)), x);
    dex();
    BPL(EraseMLoop);
    // <conv.chunks.Comment object at 0x100dfd1f0>
    return 0;
    JMP(BorrowOne);
}

int BorrowOne() {
    // <conv.chunks.Comment object at 0x100dfd3a0>
    dec(((DigitModifier) - (1)), x);
    lda(0x9);
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // <conv.chunks.Comment object at 0x100dfd5b0>
    // <conv.chunks.Comment object at 0x100dfd640>
    // <conv.chunks.Comment object at 0x100dfd7f0>
    sec();
    sbc(10);
    inc(((DigitModifier) - (1)), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x100dfdd60>
    JSR(TopScoreCheck);
    ldx(0xb);
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(0x5);
    // <conv.chunks.Comment object at 0x100dfe0c0>
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // <conv.chunks.Comment object at 0x100dfe270>
    lda(PlayerScoreDisplay, x);
    sbc(TopScoreDisplay, y);
    dex();
    dey();
    // <conv.chunks.Comment object at 0x100dfe3f0>
    // <conv.chunks.Comment object at 0x100dfe570>
    // <conv.chunks.Comment object at 0x100dfe630>
    BPL(GetScoreDiff);
    BCC(NoTopSc);
    inx();
    // <conv.chunks.Comment object at 0x100dfe7b0>
    // <conv.chunks.Comment object at 0x100dfe930>
    iny();
    JMP(CopyScore);
}

int CopyScore() {
    // <conv.chunks.Comment object at 0x100dfea50>
    lda(PlayerScoreDisplay, x);
    sta(TopScoreDisplay, y);
    inx();
    iny();
    cpy(0x6);
    // <conv.chunks.Comment object at 0x100dfee10>
    BCC(CopyScore);
    JMP(NoTopSc);
}

int NoTopSc() {
    return 0;
    JMP(InitializeGame);
}

int InitializeGame() {
    ldy(0x6f);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x100dff290>
    // <conv.chunks.Comment object at 0x100dff2f0>
    ldy(0x1f);
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // <conv.chunks.Comment object at 0x100dfff50>
    sta(SoundMemory, y);
    dey();
    // <conv.chunks.Comment object at 0x100e0c1d0>
    BPL(ClrSndLoop);
    lda(0x18);
    // <conv.chunks.Comment object at 0x100e0c350>
    sta(DemoTimer);
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(0x4b);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x100e0c680>
    // <conv.chunks.Comment object at 0x100e0c710>
    ldx(0x21);
    lda(0x0);
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // <conv.chunks.Comment object at 0x100e0ca10>
    sta(Timers, x);
    dex();
    // <conv.chunks.Comment object at 0x100e0cc80>
    BPL(ClrTimersLoop);
    lda(HalfwayPage);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x100e0cef0>
    BEQ(StartPage);
    lda(EntrancePage);
    JMP(StartPage);
}

int StartPage() {
    // <conv.chunks.Comment object at 0x100e0d100>
    // <conv.chunks.Comment object at 0x100e0d220>
    sta(ScreenLeft_PageLoc);
    sta(CurrentPageLoc);
    sta(BackloadingFlag);
    JSR(GetScreenPosition);
    ldy(0x20);
    anda(0b1);
    BEQ(SetInitNTHigh);
    // <conv.chunks.Comment object at 0x100e0d370>
    // <conv.chunks.Comment object at 0x100e0d490>
    // <conv.chunks.Comment object at 0x100e0d5b0>
    // <conv.chunks.Comment object at 0x100e0d6d0>
    // <conv.chunks.Comment object at 0x100e0d760>
    // <conv.chunks.Comment object at 0x100e0d910>
    ldy(0x24);
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // <conv.chunks.Comment object at 0x100e0da90>
    sty(CurrentNTAddr_High);
    ldy(0x80);
    sty(CurrentNTAddr_Low);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100e0de80>
    // <conv.chunks.Comment object at 0x100e0df40>
    asl();
    asl();
    sta(BlockBufferColumnPos);
    dec(AreaObjectLength);
    // <conv.chunks.Comment object at 0x100e0e1e0>
    dec(((AreaObjectLength) + (1)));
    dec(((AreaObjectLength) + (2)));
    lda(0xb);
    sta(ColumnSets);
    JSR(GetAreaDataAddrs);
    lda(PrimaryHardMode);
    BNE(SetSecHard);
    lda(WorldNumber);
    cmp(World5);
    // <conv.chunks.Comment object at 0x100e0e660>
    // <conv.chunks.Comment object at 0x100e0e6f0>
    // <conv.chunks.Comment object at 0x100e0e8a0>
    // <conv.chunks.Comment object at 0x100e0e9c0>
    // <conv.chunks.Comment object at 0x100e0eae0>
    // <conv.chunks.Comment object at 0x100e0ec00>
    // <conv.chunks.Comment object at 0x100e0ed20>
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda(LevelNumber);
    cmp(Level3);
    // <conv.chunks.Comment object at 0x100e0ef60>
    // <conv.chunks.Comment object at 0x100e0f080>
    // <conv.chunks.Comment object at 0x100e0f1a0>
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // <conv.chunks.Comment object at 0x100e0f3e0>
    inc(SecondaryHardMode);
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda(HalfwayPage);
    BEQ(DoneInitArea);
    lda(0x2);
    // <conv.chunks.Comment object at 0x100e0f740>
    sta(PlayerEntranceCtrl);
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // <conv.chunks.Comment object at 0x100e0f950>
    lda(Silence);
    sta(AreaMusicQueue);
    lda(0x1);
    // <conv.chunks.Comment object at 0x100e0fbc0>
    sta(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x100e0fdd0>
    return 0;
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(0x1);
    sta(FetchNewGameTimerFlag);
    sta(PlayerSize);
    // <conv.chunks.Comment object at 0x100e14080>
    // <conv.chunks.Comment object at 0x100e14230>
    lda(0x2);
    sta(NumberofLives);
    // <conv.chunks.Comment object at 0x100e143b0>
    sta(OffScr_NumberofLives);
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x100e146e0>
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // <conv.chunks.Comment object at 0x100e14920>
    sta(((VRAM_Buffer1) - (1)), y);
    iny();
    BNE(ClearVRLoop);
    sta(GameTimerExpiredFlag);
    sta(DisableIntermediate);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x100e14ce0>
    // <conv.chunks.Comment object at 0x100e14e00>
    // <conv.chunks.Comment object at 0x100e14f20>
    lda(0xff);
    sta(BalPlatformAlignment);
    lda(ScreenLeft_PageLoc);
    lsr(Mirror_PPU_CTRL_REG1);
    anda(0x1);
    ror();
    rol(Mirror_PPU_CTRL_REG1);
    JSR(GetAreaMusic);
    lda(0x38);
    // <conv.chunks.Comment object at 0x100e150a0>
    // <conv.chunks.Comment object at 0x100e15250>
    // <conv.chunks.Comment object at 0x100e15370>
    // <conv.chunks.Comment object at 0x100e15490>
    // <conv.chunks.Comment object at 0x100e155e0>
    // <conv.chunks.Comment object at 0x100e15670>
    // <conv.chunks.Comment object at 0x100e15790>
    // <conv.chunks.Comment object at 0x100e158b0>
    sta(((SprShuffleAmt) + (2)));
    lda(0x48);
    sta(((SprShuffleAmt) + (1)));
    lda(0x58);
    sta(SprShuffleAmt);
    ldx(0xe);
    JMP(ShufAmtLoop);
}

int ShufAmtLoop() {
    lda(offsetof(G, DefaultSprOffsets), x);
    sta(SprDataOffset, x);
    dex();
    // <conv.chunks.Comment object at 0x100e163c0>
    BPL(ShufAmtLoop);
    ldy(0x3);
    JMP(ISpr0Loop);
}

int ISpr0Loop() {
    lda(offsetof(G, Sprite0Data), y);
    sta(Sprite_Data, y);
    dey();
    BPL(ISpr0Loop);
    JSR(DoNothing2);
    // <conv.chunks.Comment object at 0x100e16a50>
    JSR(DoNothing1);
    inc(Sprite0HitDetectFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x100e16c60>
    // <conv.chunks.Comment object at 0x100e16d80>
    return 0;
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(0x7);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e16ff0>
    // <conv.chunks.Comment object at 0x100e17080>
    sta(0x6);
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(0x7);
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // <conv.chunks.Comment object at 0x100e173e0>
    cpx(0x1);
    BNE(InitByte);
    cpy(0x60);
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // <conv.chunks.Comment object at 0x100e17500>
    // <conv.chunks.Comment object at 0x100e176b0>
    // <conv.chunks.Comment object at 0x100e17740>
    // <conv.chunks.Comment object at 0x100e178f0>
    sta((0x6), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(0xff);
    // <conv.chunks.Comment object at 0x100e17b60>
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // <conv.chunks.Comment object at 0x100e17da0>
    // <conv.chunks.Comment object at 0x100e17e30>
    return 0;
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x100e1c0b0>
    BEQ(ExitGetM);
    lda(AltEntranceControl);
    cmp(0x2);
    BEQ(ChkAreaType);
    ldy(0x5);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x100e1c620>
    // <conv.chunks.Comment object at 0x100e1c740>
    // <conv.chunks.Comment object at 0x100e1c7d0>
    // <conv.chunks.Comment object at 0x100e1c980>
    // <conv.chunks.Comment object at 0x100e1ca10>
    cmp(0x6);
    BEQ(StoreMusic);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x100e1cc20>
    // <conv.chunks.Comment object at 0x100e1cdd0>
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // <conv.chunks.Comment object at 0x100e1cfe0>
    ldy(AreaType);
    lda(CloudTypeOverride);
    BEQ(StoreMusic);
    ldy(0x4);
    JMP(StoreMusic);
}

int StoreMusic() {
    // <conv.chunks.Comment object at 0x100e1d220>
    // <conv.chunks.Comment object at 0x100e1d340>
    // <conv.chunks.Comment object at 0x100e1d3d0>
    lda(offsetof(G, MusicSelectData), y);
    sta(AreaMusicQueue);
    JMP(ExitGetM);
}

int ExitGetM() {
    return 0;
    JMP(Entrance_GameTimerSetup);
}

int Entrance_GameTimerSetup() {
    lda(ScreenLeft_PageLoc);
    sta(Player_PageLoc);
    lda(0x28);
    sta(VerticalForceDown);
    lda(0x1);
    sta(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x100e1dcd0>
    // <conv.chunks.Comment object at 0x100e1e990>
    // <conv.chunks.Comment object at 0x100e1eab0>
    // <conv.chunks.Comment object at 0x100e1eb40>
    // <conv.chunks.Comment object at 0x100e1ecf0>
    // <conv.chunks.Comment object at 0x100e1ed80>
    sta(Player_Y_HighPos);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e1f020>
    sta(Player_State);
    dec(Player_CollisionBits);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100e1f230>
    // <conv.chunks.Comment object at 0x100e1f350>
    sty(HalfwayPage);
    lda(AreaType);
    BNE(ChkStPos);
    // <conv.chunks.Comment object at 0x100e1f560>
    // <conv.chunks.Comment object at 0x100e1f680>
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty(SwimmingFlag);
    ldx(PlayerEntranceCtrl);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x100e1f950>
    // <conv.chunks.Comment object at 0x100e1fa70>
    BEQ(SetStPos);
    cpy(0x1);
    BEQ(SetStPos);
    ldx(((offsetof(G, AltYPosOffset)) - (2)), y);
    JMP(SetStPos);
}

int SetStPos() {
    // <conv.chunks.Comment object at 0x100e1fe60>
    // <conv.chunks.Comment object at 0x100e280b0>
    lda(offsetof(G, PlayerStarting_X_Pos), y);
    sta(Player_X_Position);
    lda(offsetof(G, PlayerStarting_Y_Pos), x);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x100e28230>
    // <conv.chunks.Comment object at 0x100e28350>
    // <conv.chunks.Comment object at 0x100e284a0>
    lda(offsetof(G, PlayerBGPriorityData), x);
    sta(Player_SprAttrib);
    JSR(GetPlayerColors);
    ldy(GameTimerSetting);
    BEQ(ChkOverR);
    lda(FetchNewGameTimerFlag);
    BEQ(ChkOverR);
    lda(offsetof(G, GameTimerData), y);
    sta(GameTimerDisplay);
    // <conv.chunks.Comment object at 0x100e286e0>
    // <conv.chunks.Comment object at 0x100e28800>
    // <conv.chunks.Comment object at 0x100e28920>
    // <conv.chunks.Comment object at 0x100e28a40>
    // <conv.chunks.Comment object at 0x100e28b60>
    // <conv.chunks.Comment object at 0x100e28c80>
    // <conv.chunks.Comment object at 0x100e28da0>
    // <conv.chunks.Comment object at 0x100e28ef0>
    lda(0x1);
    sta(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x100e29070>
    lsr();
    sta(((GameTimerDisplay) + (1)));
    sta(FetchNewGameTimerFlag);
    sta(StarInvincibleTimer);
    JMP(ChkOverR);
}

int ChkOverR() {
    // <conv.chunks.Comment object at 0x100e29370>
    // <conv.chunks.Comment object at 0x100e29550>
    // <conv.chunks.Comment object at 0x100e29670>
    // <conv.chunks.Comment object at 0x100e29790>
    ldy(JoypadOverride);
    BEQ(ChkSwimE);
    lda(0x3);
    // <conv.chunks.Comment object at 0x100e299d0>
    sta(Player_State);
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100e29be0>
    JSR(InitBlock_XY_Pos);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x100e29df0>
    sta(Block_Y_Position);
    ldx(0x5);
    ldy(0x0);
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // <conv.chunks.Comment object at 0x100e2a000>
    // <conv.chunks.Comment object at 0x100e2a090>
    // <conv.chunks.Comment object at 0x100e2a1b0>
    // <conv.chunks.Comment object at 0x100e2a360>
    ldy(AreaType);
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // <conv.chunks.Comment object at 0x100e2a4b0>
    // <conv.chunks.Comment object at 0x100e2a5d0>
    // <conv.chunks.Comment object at 0x100e2a6f0>
    lda(0x7);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x100e2a7b0>
    return 0;
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x100e2aa80>
    lda(0x0);
    sta(Sprite0HitDetectFlag);
    lda(Silence);
    // <conv.chunks.Comment object at 0x100e2b6b0>
    sta(EventMusicQueue);
    dec(NumberofLives);
    BPL(StillInGame);
    // <conv.chunks.Comment object at 0x100e2b8f0>
    // <conv.chunks.Comment object at 0x100e2ba10>
    lda(0x0);
    sta(OperMode_Task);
    lda(GameOverModeValue);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x100e2bb90>
    // <conv.chunks.Comment object at 0x100e2bd40>
    // <conv.chunks.Comment object at 0x100e2be60>
    return 0;
    JMP(StillInGame);
}

int StillInGame() {
    // <conv.chunks.Comment object at 0x100e34050>
    lda(WorldNumber);
    asl();
    // <conv.chunks.Comment object at 0x100e341d0>
    tax();
    lda(LevelNumber);
    anda(0x2);
    BEQ(GetHalfway);
    // <conv.chunks.Comment object at 0x100e342f0>
    // <conv.chunks.Comment object at 0x100e34410>
    // <conv.chunks.Comment object at 0x100e344a0>
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // <conv.chunks.Comment object at 0x100e346e0>
    ldy(offsetof(G, HalfwayPageNybbles), x);
    lda(LevelNumber);
    // <conv.chunks.Comment object at 0x100e34860>
    lsr();
    tya();
    // <conv.chunks.Comment object at 0x100e34a40>
    BCS(MaskHPNyb);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100e34bf0>
    // <conv.chunks.Comment object at 0x100e34cb0>
    lsr();
    lsr();
    JMP(MaskHPNyb);
}

int MaskHPNyb() {
    // <conv.chunks.Comment object at 0x100e34e60>
    anda(0b1111);
    cmp(ScreenLeft_PageLoc);
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(0x0);
    JMP(SetHalfway);
}

int SetHalfway() {
    // <conv.chunks.Comment object at 0x100e350a0>
    // <conv.chunks.Comment object at 0x100e351c0>
    // <conv.chunks.Comment object at 0x100e352e0>
    // <conv.chunks.Comment object at 0x100e35370>
    sta(HalfwayPage);
    JSR(TransposePlayers);
    JMP(ContinueGame);
    JMP(GameOverMode);
}

int GameOverMode() {
    lda(OperMode_Task);
    JMP(SetupGameOver);
}

int SetupGameOver() {
    lda(0x0);
    sta(ScreenRoutineTask);
    sta(Sprite0HitDetectFlag);
    // <conv.chunks.Comment object at 0x100e35be0>
    // <conv.chunks.Comment object at 0x100e35c70>
    // <conv.chunks.Comment object at 0x100e35e20>
    lda(GameOverMusic);
    sta(EventMusicQueue);
    inc(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x100e36030>
    // <conv.chunks.Comment object at 0x100e36150>
    // <conv.chunks.Comment object at 0x100e36270>
    return 0;
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e36480>
    sta(DisableScreenFlag);
    lda(SavedJoypad1Bits);
    // <conv.chunks.Comment object at 0x100e36690>
    anda(Start_Button);
    BNE(TerminateGame);
    lda(ScreenTimer);
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda(Silence);
    // <conv.chunks.Comment object at 0x100e36c00>
    sta(EventMusicQueue);
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda(WorldNumber);
    sta(ContinueWorld);
    // <conv.chunks.Comment object at 0x100e36e40>
    // <conv.chunks.Comment object at 0x100e36f60>
    // <conv.chunks.Comment object at 0x100e37080>
    // <conv.chunks.Comment object at 0x100e371a0>
    lda(0x0);
    asl();
    sta(OperMode_Task);
    sta(ScreenTimer);
    // <conv.chunks.Comment object at 0x100e373e0>
    // <conv.chunks.Comment object at 0x100e37470>
    // <conv.chunks.Comment object at 0x100e375c0>
    sta(OperMode);
    return 0;
    JMP(ContinueGame);
}

int ContinueGame() {
    JSR(LoadAreaPointer);
    lda(0x1);
    sta(PlayerSize);
    inc(FetchNewGameTimerFlag);
    lda(0x0);
    sta(TimerControl);
    // <conv.chunks.Comment object at 0x100e37890>
    // <conv.chunks.Comment object at 0x100e379b0>
    // <conv.chunks.Comment object at 0x100e37a40>
    // <conv.chunks.Comment object at 0x100e37bf0>
    // <conv.chunks.Comment object at 0x100e37d10>
    // <conv.chunks.Comment object at 0x100e37da0>
    sta(PlayerStatus);
    sta(GameEngineSubroutine);
    sta(OperMode_Task);
    lda(0x1);
    sta(OperMode);
    JMP(GameIsOn);
}

int GameIsOn() {
    return 0;
    JMP(TransposePlayers);
}

int TransposePlayers() {
    sec();
    lda(NumberOfPlayers);
    // <conv.chunks.Comment object at 0x100e3c620>
    // <conv.chunks.Comment object at 0x100e3c6b0>
    BEQ(ExTrans);
    lda(OffScr_NumberofLives);
    BMI(ExTrans);
    lda(CurrentPlayer);
    eor(0b1);
    // <conv.chunks.Comment object at 0x100e3c8f0>
    // <conv.chunks.Comment object at 0x100e3ca10>
    // <conv.chunks.Comment object at 0x100e3cb60>
    // <conv.chunks.Comment object at 0x100e3cc80>
    sta(CurrentPlayer);
    ldx(0x6);
    JMP(TransLoop);
}

int TransLoop() {
    // <conv.chunks.Comment object at 0x100e3cef0>
    lda(OnscreenPlayerInfo, x);
    pha();
    lda(OffscreenPlayerInfo, x);
    // <conv.chunks.Comment object at 0x100e3d130>
    // <conv.chunks.Comment object at 0x100e3d1c0>
    sta(OnscreenPlayerInfo, x);
    pla();
    sta(OffscreenPlayerInfo, x);
    dex();
    BPL(TransLoop);
    clc();
    JMP(ExTrans);
}

int ExTrans() {
    return 0;
    JMP(DoNothing1);
}

int DoNothing1() {
    lda(0xff);
    sta(0x6c9);
    JMP(DoNothing2);
}

int DoNothing2() {
    return 0;
    JMP(AreaParserTaskHandler);
}

int AreaParserTaskHandler() {
    ldy(AreaParserTaskNum);
    BNE(DoAPTasks);
    // <conv.chunks.Comment object at 0x100e3dcd0>
    // <conv.chunks.Comment object at 0x100e3ddf0>
    ldy(0x8);
    sty(AreaParserTaskNum);
    JMP(DoAPTasks);
}

int DoAPTasks() {
    dey();
    tya();
    JSR(AreaParserTasks);
    dec(AreaParserTaskNum);
    BNE(SkipATRender);
    // <conv.chunks.Comment object at 0x100e3e360>
    // <conv.chunks.Comment object at 0x100e3e480>
    JSR(RenderAttributeTables);
    JMP(SkipATRender);
}

int SkipATRender() {
    return 0;
    JMP(AreaParserTasks);
}

int AreaParserTasks() {
    JMP(IncrementColumnPos);
}

int IncrementColumnPos() {
    inc(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x100e3ed50>
    lda(CurrentColumnPos);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100e3ef60>
    BNE(NoColWrap);
    sta(CurrentColumnPos);
    inc(CurrentPageLoc);
    JMP(NoColWrap);
}

int NoColWrap() {
    // <conv.chunks.Comment object at 0x100e3f170>
    // <conv.chunks.Comment object at 0x100e3f290>
    // <conv.chunks.Comment object at 0x100e3f3b0>
    inc(BlockBufferColumnPos);
    lda(BlockBufferColumnPos);
    anda(0b11111);
    sta(BlockBufferColumnPos);
    // <conv.chunks.Comment object at 0x100e3f5f0>
    // <conv.chunks.Comment object at 0x100e3f710>
    return 0;
    JMP(AreaParserCore);
}

int AreaParserCore() {
    lda(BackloadingFlag);
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
    // <conv.chunks.Comment object at 0x100e59a90>
    sta(MetatileBuffer, x);
    dex();
    BPL(ClrMTBuf);
    ldy(BackgroundScenery);
    BEQ(RendFore);
    lda(CurrentPageLoc);
    JMP(ThirdP);
}

int ThirdP() {
    cmp(0x3);
    BMI(RendBack);
    // <conv.chunks.Comment object at 0x100e5a240>
    sec();
    sbc(0x3);
    BPL(ThirdP);
    JMP(RendBack);
}

int RendBack() {
    // <conv.chunks.Comment object at 0x100e5a480>
    // <conv.chunks.Comment object at 0x100e5a510>
    // <conv.chunks.Comment object at 0x100e5a6f0>
    asl();
    asl();
    asl();
    asl();
    adc(((offsetof(G, BSceneDataOffsets)) - (1)), y);
    adc(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x100e5a990>
    // <conv.chunks.Comment object at 0x100e5aba0>
    tax();
    lda(offsetof(G, BackSceneryData), x);
    BEQ(RendFore);
    // <conv.chunks.Comment object at 0x100e5ad50>
    // <conv.chunks.Comment object at 0x100e5aea0>
    pha();
    anda(0xf);
    // <conv.chunks.Comment object at 0x100e5b050>
    sec();
    sbc(0x1);
    sta(0x0);
    asl();
    adc(0x0);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x100e5b200>
    // <conv.chunks.Comment object at 0x100e5b350>
    // <conv.chunks.Comment object at 0x100e5b290>
    // <conv.chunks.Comment object at 0x100e5b530>
    // <conv.chunks.Comment object at 0x100e5b500>
    // <conv.chunks.Comment object at 0x100e5b710>
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    lda(0x3);
    // <conv.chunks.Comment object at 0x100e5ba10>
    // <conv.chunks.Comment object at 0x100e5baa0>
    sta(0x0);
    JMP(SceLoop1);
}

int SceLoop1() {
    // <conv.chunks.Comment object at 0x100e5bb30>
    lda(offsetof(G, BackSceneryMetatiles), x);
    sta(MetatileBuffer, y);
    // <conv.chunks.Comment object at 0x100e5be30>
    inx();
    iny();
    cpy(0xb);
    // <conv.chunks.Comment object at 0x100e640e0>
    BEQ(RendFore);
    dec(0x0);
    // <conv.chunks.Comment object at 0x100e64320>
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // <conv.chunks.Comment object at 0x100e64500>
    ldx(ForegroundScenery);
    BEQ(RendTerr);
    ldy(((offsetof(G, FSceneDataOffsets)) - (1)), x);
    ldx(0x0);
    JMP(SceLoop2);
}

int SceLoop2() {
    // <conv.chunks.Comment object at 0x100e64650>
    // <conv.chunks.Comment object at 0x100e64770>
    // <conv.chunks.Comment object at 0x100e64980>
    // <conv.chunks.Comment object at 0x100e64a10>
    lda(offsetof(G, ForeSceneryData), y);
    BEQ(NoFore);
    // <conv.chunks.Comment object at 0x100e64c20>
    sta(MetatileBuffer, x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x100e65010>
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // <conv.chunks.Comment object at 0x100e65220>
    ldy(AreaType);
    BNE(TerMTile);
    lda(WorldNumber);
    cmp(World8);
    // <conv.chunks.Comment object at 0x100e65370>
    // <conv.chunks.Comment object at 0x100e65490>
    // <conv.chunks.Comment object at 0x100e655b0>
    BNE(TerMTile);
    lda(0x62);
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // <conv.chunks.Comment object at 0x100e657f0>
    // <conv.chunks.Comment object at 0x100e65880>
    // <conv.chunks.Comment object at 0x100e65a60>
    lda(offsetof(G, TerrainMetatiles), y);
    ldy(CloudTypeOverride);
    BEQ(StoreMT);
    lda(0x88);
    JMP(StoreMT);
}

int StoreMT() {
    // <conv.chunks.Comment object at 0x100e65be0>
    // <conv.chunks.Comment object at 0x100e65d00>
    // <conv.chunks.Comment object at 0x100e65e50>
    // <conv.chunks.Comment object at 0x100e65ee0>
    sta(0x7);
    ldx(0x0);
    lda(TerrainControl);
    asl();
    // <conv.chunks.Comment object at 0x100e66090>
    // <conv.chunks.Comment object at 0x100e66180>
    // <conv.chunks.Comment object at 0x100e66360>
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // <conv.chunks.Comment object at 0x100e66480>
    lda(offsetof(G, TerrainRenderBits), y);
    sta(0x0);
    iny();
    // <conv.chunks.Comment object at 0x100e66690>
    sty(0x1);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x100e667b0>
    BEQ(NoCloud2);
    cpx(0x0);
    // <conv.chunks.Comment object at 0x100e66ab0>
    BEQ(NoCloud2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e66cf0>
    anda(0b1000);
    sta(0x0);
    JMP(NoCloud2);
}

int NoCloud2() {
    // <conv.chunks.Comment object at 0x100e66ed0>
    ldy(0x0);
    JMP(TerrBChk);
}

int TerrBChk() {
    // <conv.chunks.Comment object at 0x100e67080>
    lda(offsetof(G, Bitmasks), y);
    bit(0x0);
    BEQ(NextTBit);
    // <conv.chunks.Comment object at 0x100e67290>
    lda(0x7);
    sta(MetatileBuffer, x);
    JMP(NextTBit);
}

int NextTBit() {
    // <conv.chunks.Comment object at 0x100e674a0>
    // <conv.chunks.Comment object at 0x100e676e0>
    inx();
    cpx(0xd);
    BEQ(RendBBuf);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x100e67830>
    // <conv.chunks.Comment object at 0x100e679e0>
    cmp(0x2);
    BNE(EndUChk);
    // <conv.chunks.Comment object at 0x100e67b60>
    cpx(0xb);
    BNE(EndUChk);
    lda(0x54);
    // <conv.chunks.Comment object at 0x100e67da0>
    // <conv.chunks.Comment object at 0x100e67f80>
    sta(0x7);
    JMP(EndUChk);
}

int EndUChk() {
    // <conv.chunks.Comment object at 0x100e70050>
    iny();
    cpy(0x8);
    BNE(TerrBChk);
    // <conv.chunks.Comment object at 0x100e70350>
    ldy(0x1);
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // <conv.chunks.Comment object at 0x100e70500>
    // <conv.chunks.Comment object at 0x100e70710>
    JSR(ProcessAreaData);
    lda(BlockBufferColumnPos);
    JSR(GetBlockBufferAddr);
    // <conv.chunks.Comment object at 0x100e70950>
    ldx(0x0);
    ldy(0x0);
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(0x0);
    lda(MetatileBuffer, x);
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x100e70d40>
    // <conv.chunks.Comment object at 0x100e70ef0>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x100e710d0>
    rol();
    tay();
    lda(MetatileBuffer, x);
    cmp(offsetof(G, BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(0x0);
    JMP(StrBlock);
}

int StrBlock() {
    // <conv.chunks.Comment object at 0x100e71220>
    // <conv.chunks.Comment object at 0x100e712b0>
    // <conv.chunks.Comment object at 0x100e71400>
    // <conv.chunks.Comment object at 0x100e71550>
    // <conv.chunks.Comment object at 0x100e71670>
    // <conv.chunks.Comment object at 0x100e71700>
    ldy(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x100e71880>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x100e71b20>
    adc(0x10);
    tay();
    inx();
    // <conv.chunks.Comment object at 0x100e71d60>
    cpx(0xd);
    BCC(ChkMTLow);
    // <conv.chunks.Comment object at 0x100e71e50>
    return 0;
    JMP(ProcessAreaData);
}

int ProcessAreaData() {
    ldx(0x2);
    JMP(ProcADLoop);
}

int ProcADLoop() {
    stx(ObjectOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e72660>
    sta(BehindAreaParserFlag);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    cmp(0xfd);
    // <conv.chunks.Comment object at 0x100e72870>
    // <conv.chunks.Comment object at 0x100e72990>
    // <conv.chunks.Comment object at 0x100e72b10>
    BEQ(RdyDecode);
    lda(AreaObjectLength, x);
    BPL(RdyDecode);
    // <conv.chunks.Comment object at 0x100e72d20>
    // <conv.chunks.Comment object at 0x100e72e70>
    iny();
    lda((AreaData), y);
    asl();
    // <conv.chunks.Comment object at 0x100e73020>
    // <conv.chunks.Comment object at 0x100e731d0>
    BCC(Chk1Row13);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x100e73350>
    BNE(Chk1Row13);
    inc(AreaObjectPageSel);
    inc(AreaObjectPageLoc);
    JMP(Chk1Row13);
}

int Chk1Row13() {
    dey();
    lda((AreaData), y);
    anda(0xf);
    cmp(0xd);
    // <conv.chunks.Comment object at 0x100e73860>
    // <conv.chunks.Comment object at 0x100e739e0>
    // <conv.chunks.Comment object at 0x100e73b30>
    BNE(Chk1Row14);
    iny();
    // <conv.chunks.Comment object at 0x100e73d70>
    lda((AreaData), y);
    dey();
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x100e73f80>
    // <conv.chunks.Comment object at 0x100e7c050>
    BNE(CheckRear);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x100e7c260>
    BNE(CheckRear);
    iny();
    // <conv.chunks.Comment object at 0x100e7c4a0>
    lda((AreaData), y);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x100e7c680>
    sta(AreaObjectPageLoc);
    inc(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x100e7c890>
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // <conv.chunks.Comment object at 0x100e7cad0>
    cmp(0xe);
    BNE(CheckRear);
    lda(BackloadingFlag);
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // <conv.chunks.Comment object at 0x100e7cd10>
    // <conv.chunks.Comment object at 0x100e7ce30>
    // <conv.chunks.Comment object at 0x100e7cf50>
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    BCC(SetBehind);
    JMP(RdyDecode);
}

int RdyDecode() {
    // <conv.chunks.Comment object at 0x100e7d0a0>
    // <conv.chunks.Comment object at 0x100e7d1c0>
    // <conv.chunks.Comment object at 0x100e7d2e0>
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}

int SetBehind() {
    // <conv.chunks.Comment object at 0x100e7d520>
    inc(BehindAreaParserFlag);
    JMP(NextAObj);
}

int NextAObj() {
    // <conv.chunks.Comment object at 0x100e7d670>
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // <conv.chunks.Comment object at 0x100e7d7c0>
    ldx(ObjectOffset);
    lda(AreaObjectLength, x);
    BMI(ProcLoopb);
    dec(AreaObjectLength, x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // <conv.chunks.Comment object at 0x100e7d910>
    // <conv.chunks.Comment object at 0x100e7da60>
    // <conv.chunks.Comment object at 0x100e7db80>
    // <conv.chunks.Comment object at 0x100e7dcd0>
    dex();
    BPL(ProcADLoop);
    lda(BehindAreaParserFlag);
    BNE(ProcessAreaData);
    lda(BackloadingFlag);
    BNE(ProcessAreaData);
    JMP(EndAParse);
}

int EndAParse() {
    return 0;
    JMP(IncAreaObjOffset);
}

int IncAreaObjOffset() {
    inc(AreaDataOffset);
    // <conv.chunks.Comment object at 0x100e7e450>
    inc(AreaDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e7e660>
    sta(AreaObjectPageSel);
    return 0;
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100e7e930>
    BMI(Chk1stB);
    ldy(AreaObjOffsetBuffer, x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // <conv.chunks.Comment object at 0x100e7eba0>
    // <conv.chunks.Comment object at 0x100e7ecf0>
    ldx(0x10);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x100e7ede0>
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
    // <conv.chunks.Comment object at 0x100e7f050>
    // <conv.chunks.Comment object at 0x100e7f200>
    // <conv.chunks.Comment object at 0x100e7f350>
    // <conv.chunks.Comment object at 0x100e7f3e0>
    // <conv.chunks.Comment object at 0x100e7f590>
    // <conv.chunks.Comment object at 0x100e7f6e0>
    // <conv.chunks.Comment object at 0x100e7f770>
    // <conv.chunks.Comment object at 0x100e7f920>
    // <conv.chunks.Comment object at 0x100e7f9b0>
    stx(0x7);
    ldx(ObjectOffset);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x100e7fb30>
    // <conv.chunks.Comment object at 0x100e7fce0>
    BNE(ChkRow13);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e7fef0>
    sta(0x7);
    lda(0x2e);
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // <conv.chunks.Comment object at 0x100e7ff80>
    // <conv.chunks.Comment object at 0x100e841d0>
    // <conv.chunks.Comment object at 0x100e843e0>
    cmp(0xd);
    BNE(ChkSRows);
    lda(0x22);
    // <conv.chunks.Comment object at 0x100e84620>
    sta(0x7);
    iny();
    // <conv.chunks.Comment object at 0x100e847d0>
    lda((AreaData), y);
    anda(0b1000000);
    BEQ(LeavePar);
    lda((AreaData), y);
    anda(0b1111111);
    cmp(0x4b);
    BNE(Mask2MSB);
    inc(LoopCommand);
    JMP(Mask2MSB);
}

int Mask2MSB() {
    // <conv.chunks.Comment object at 0x100e84a40>
    // <conv.chunks.Comment object at 0x100e84b60>
    // <conv.chunks.Comment object at 0x100e84c80>
    // <conv.chunks.Comment object at 0x100e84e00>
    // <conv.chunks.Comment object at 0x100e84f20>
    // <conv.chunks.Comment object at 0x100e84fb0>
    // <conv.chunks.Comment object at 0x100e85160>
    // <conv.chunks.Comment object at 0x100e85280>
    anda(0b111111);
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // <conv.chunks.Comment object at 0x100e853d0>
    // <conv.chunks.Comment object at 0x100e85520>
    cmp(0xc);
    BCS(SpecObj);
    iny();
    // <conv.chunks.Comment object at 0x100e857c0>
    lda((AreaData), y);
    anda(0b1110000);
    BNE(LrgObj);
    // <conv.chunks.Comment object at 0x100e859a0>
    // <conv.chunks.Comment object at 0x100e85ac0>
    lda(0x16);
    sta(0x7);
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100e85d30>
    // <conv.chunks.Comment object at 0x100e85dc0>
    // <conv.chunks.Comment object at 0x100e85fa0>
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // <conv.chunks.Comment object at 0x100e861e0>
    sta(0x0);
    cmp(0x70);
    // <conv.chunks.Comment object at 0x100e86300>
    BNE(NotWPipe);
    lda((AreaData), y);
    anda(0b1000);
    BEQ(NotWPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100e86570>
    // <conv.chunks.Comment object at 0x100e866f0>
    // <conv.chunks.Comment object at 0x100e86810>
    // <conv.chunks.Comment object at 0x100e86930>
    sta(0x0);
    JMP(NotWPipe);
}

int NotWPipe() {
    // <conv.chunks.Comment object at 0x100e869c0>
    lda(0x0);
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // <conv.chunks.Comment object at 0x100e86d80>
    iny();
    lda((AreaData), y);
    anda(0b1110000);
    JMP(MoveAOId);
}

int MoveAOId() {
    // <conv.chunks.Comment object at 0x100e86ff0>
    // <conv.chunks.Comment object at 0x100e87110>
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}

int NormObj() {
    // <conv.chunks.Comment object at 0x100e873b0>
    sta(0x0);
    lda(AreaObjectLength, x);
    BPL(RunAObj);
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x100e874d0>
    // <conv.chunks.Comment object at 0x100e87680>
    // <conv.chunks.Comment object at 0x100e877d0>
    // <conv.chunks.Comment object at 0x100e878f0>
    BEQ(InitRear);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x100e87b00>
    // <conv.chunks.Comment object at 0x100e87c20>
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x100e87ef0>
    BNE(LeavePar);
    lda(BackloadingFlag);
    BNE(StrAObj);
    JMP(LeavePar);
}

int LeavePar() {
    return 0;
    JMP(InitRear);
}

int InitRear() {
    // <conv.chunks.Comment object at 0x100e94470>
    lda(BackloadingFlag);
    BEQ(BackColC);
    lda(0x0);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x100e945c0>
    // <conv.chunks.Comment object at 0x100e946e0>
    // <conv.chunks.Comment object at 0x100e94770>
    sta(BehindAreaParserFlag);
    sta(ObjectOffset);
    JMP(LoopCmdE);
}

int LoopCmdE() {
    return 0;
    JMP(BackColC);
}

int BackColC() {
    // <conv.chunks.Comment object at 0x100e94bc0>
    ldy(AreaDataOffset);
    lda((AreaData), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x100e94e90>
    lsr();
    lsr();
    lsr();
    lsr();
    cmp(CurrentColumnPos);
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // <conv.chunks.Comment object at 0x100e951f0>
    // <conv.chunks.Comment object at 0x100e95310>
    // <conv.chunks.Comment object at 0x100e95430>
    lda(AreaDataOffset);
    sta(AreaObjOffsetBuffer, x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // <conv.chunks.Comment object at 0x100e956d0>
    // <conv.chunks.Comment object at 0x100e957f0>
    lda(0x0);
    clc();
    // <conv.chunks.Comment object at 0x100e95850>
    adc(0x7);
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy(AreaObjOffsetBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x100e97830>
    // <conv.chunks.Comment object at 0x100e97a40>
    // <conv.chunks.Comment object at 0x100e97b30>
    // <conv.chunks.Comment object at 0x100e97b90>
    // <conv.chunks.Comment object at 0x100e97d10>
    lda((AreaData), y);
    pha();
    // <conv.chunks.Comment object at 0x100e97f20>
    anda(0b1000000);
    BNE(Alter2);
    // <conv.chunks.Comment object at 0x100ea00e0>
    pla();
    pha();
    anda(0b1111);
    sta(TerrainControl);
    // <conv.chunks.Comment object at 0x100ea02f0>
    // <conv.chunks.Comment object at 0x100ea0380>
    // <conv.chunks.Comment object at 0x100ea04a0>
    pla();
    anda(0b110000);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100ea0650>
    // <conv.chunks.Comment object at 0x100ea07a0>
    // <conv.chunks.Comment object at 0x100ea0860>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x100ea0a10>
    return 0;
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(0b111);
    cmp(0x4);
    BCC(SetFore);
    // <conv.chunks.Comment object at 0x100ea0cb0>
    // <conv.chunks.Comment object at 0x100ea0dd0>
    // <conv.chunks.Comment object at 0x100ea0e60>
    sta(BackgroundColorCtrl);
    lda(0x0);
    JMP(SetFore);
}

int SetFore() {
    // <conv.chunks.Comment object at 0x100ea1190>
    sta(ForegroundScenery);
    return 0;
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(0x4);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x100ea1490>
    // <conv.chunks.Comment object at 0x100ea1520>
    BEQ(WarpNum);
    inx();
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x100ea1820>
    // <conv.chunks.Comment object at 0x100ea18b0>
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta(WarpZoneControl);
    JSR(WriteGameText);
    // <conv.chunks.Comment object at 0x100ea1d60>
    // <conv.chunks.Comment object at 0x100ea1e80>
    lda(PiranhaPlant);
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda(ScrollLock);
    // <conv.chunks.Comment object at 0x100ea21e0>
    eor(0b1);
    sta(ScrollLock);
    return 0;
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(0x0);
    // <conv.chunks.Comment object at 0x100ea25a0>
    // <conv.chunks.Comment object at 0x100ea2630>
    lda(0x0);
    ldx(0x4);
    JMP(KillELoop);
}

int KillELoop() {
    ldy(Enemy_ID, x);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x100ea2ab0>
    BNE(NoKillE);
    sta(Enemy_Flag, x);
    JMP(NoKillE);
}

int NoKillE() {
    // <conv.chunks.Comment object at 0x100ea2cc0>
    // <conv.chunks.Comment object at 0x100ea2e10>
    dex();
    BPL(KillELoop);
    return 0;
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // <conv.chunks.Comment object at 0x100ea3110>
    ldx(0x0);
    lda(((offsetof(G, FrenzyIDData)) - (8)), x);
    // <conv.chunks.Comment object at 0x100ea33b0>
    ldy(0x5);
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // <conv.chunks.Comment object at 0x100ea3680>
    dey();
    BMI(ExitAFrenzy);
    cmp(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x100ea3800>
    // <conv.chunks.Comment object at 0x100ea3920>
    BNE(FreCompLoop);
    lda(0x0);
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // <conv.chunks.Comment object at 0x100ea3b60>
    // <conv.chunks.Comment object at 0x100ea3bf0>
    sta(EnemyFrenzyQueue);
    return 0;
    JMP(AreaStyleObject);
}

int AreaStyleObject() {
    lda(AreaStyle);
    JMP(TreeLedge);
}

int TreeLedge() {
    JSR(GetLrgObjAttrib);
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100ea81a0>
    // <conv.chunks.Comment object at 0x100ea8470>
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100ea8830>
    lda(CurrentPageLoc);
    ora(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x100ea8a70>
    BEQ(MidTreeL);
    lda(0x16);
    // <conv.chunks.Comment object at 0x100ea8c80>
    JMP(NoUnder);
    JMP(MidTreeL);
}

int MidTreeL() {
    ldx(0x7);
    lda(0x17);
    sta(MetatileBuffer, x);
    lda(0x4c);
    JMP(AllUnder);
    JMP(EndTreeL);
}

int EndTreeL() {
    // <conv.chunks.Comment object at 0x100ea8f80>
    // <conv.chunks.Comment object at 0x100ea9070>
    // <conv.chunks.Comment object at 0x100ea9250>
    // <conv.chunks.Comment object at 0x100ea92e0>
    // <conv.chunks.Comment object at 0x100ea9490>
    lda(0x18);
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(0x6);
    // <conv.chunks.Comment object at 0x100ea9730>
    // <conv.chunks.Comment object at 0x100ea9880>
    BCC(EndMushL);
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100ea9a60>
    lsr();
    sta(MushroomLedgeHalfLen, x);
    lda(0x19);
    // <conv.chunks.Comment object at 0x100ea9d60>
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // <conv.chunks.Comment object at 0x100ea9fa0>
    lda(0x1b);
    ldy(AreaObjectLength, x);
    BEQ(NoUnder);
    lda(MushroomLedgeHalfLen, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x100eaa330>
    // <conv.chunks.Comment object at 0x100eaa4b0>
    ldx(0x7);
    lda(0x1a);
    sta(MetatileBuffer, x);
    cpy(0x6);
    BNE(MushLExit);
    // <conv.chunks.Comment object at 0x100eaa6f0>
    // <conv.chunks.Comment object at 0x100eaa900>
    // <conv.chunks.Comment object at 0x100eaa990>
    inx();
    lda(0x4f);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x100eaac00>
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
    // <conv.chunks.Comment object at 0x100eaaf90>
    // <conv.chunks.Comment object at 0x100eab020>
    // <conv.chunks.Comment object at 0x100eab1d0>
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100eab2f0>
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(0x0);
    BCS(RenderPul);
    // <conv.chunks.Comment object at 0x100eab650>
    // <conv.chunks.Comment object at 0x100eab8f0>
    // <conv.chunks.Comment object at 0x100eab980>
    iny();
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100eabbc0>
    BNE(RenderPul);
    iny();
    JMP(RenderPul);
}

int RenderPul() {
    lda(offsetof(G, PulleyRopeMetatiles), y);
    sta(MetatileBuffer);
    JMP(MushLExit);
}

int MushLExit() {
    // <conv.chunks.Comment object at 0x100eb4050>
    // <conv.chunks.Comment object at 0x100eb4170>
    return 0;
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(0x7);
    // <conv.chunks.Comment object at 0x100eb42f0>
    // <conv.chunks.Comment object at 0x100eb6360>
    ldy(0x4);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x100eb64b0>
    txa();
    pha();
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x100eb6720>
    // <conv.chunks.Comment object at 0x100eb67b0>
    // <conv.chunks.Comment object at 0x100eb6930>
    lda(0xb);
    sta(0x6);
    JMP(CRendLoop);
}

int CRendLoop() {
    // <conv.chunks.Comment object at 0x100eb6b40>
    // <conv.chunks.Comment object at 0x100eb6bd0>
    lda(offsetof(G, CastleMetatiles), y);
    sta(MetatileBuffer, x);
    inx();
    // <conv.chunks.Comment object at 0x100eb6f00>
    lda(0x6);
    BEQ(ChkCFloor);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x100eb6f90>
    // <conv.chunks.Comment object at 0x100eb71d0>
    // <conv.chunks.Comment object at 0x100eb7290>
    iny();
    iny();
    iny();
    dec(0x6);
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // <conv.chunks.Comment object at 0x100eb7500>
    // <conv.chunks.Comment object at 0x100eb7590>
    cpx(0xb);
    BNE(CRendLoop);
    // <conv.chunks.Comment object at 0x100eb76b0>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100eb7920>
    lda(CurrentPageLoc);
    BEQ(ExitCastle);
    lda(AreaObjectLength, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x100eb7aa0>
    // <conv.chunks.Comment object at 0x100eb7bc0>
    // <conv.chunks.Comment object at 0x100eb7d10>
    BEQ(PlayerStop);
    ldy(0x7);
    // <conv.chunks.Comment object at 0x100eb7f50>
    BNE(NotTall);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x100ebc1a0>
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // <conv.chunks.Comment object at 0x100ebc3b0>
    cmp(0x2);
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100ebc4a0>
    // <conv.chunks.Comment object at 0x100ebc650>
    pha();
    JSR(FindEmptyEnemySlot);
    // <conv.chunks.Comment object at 0x100ebc800>
    pla();
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x100ebc9b0>
    lda(CurrentPageLoc);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x100ebcbf0>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x100ebcda0>
    // <conv.chunks.Comment object at 0x100ebcf80>
    lda(0x90);
    sta(Enemy_Y_Position, x);
    lda(StarFlagObject);
    // <conv.chunks.Comment object at 0x100ebd130>
    // <conv.chunks.Comment object at 0x100ebd310>
    sta(Enemy_ID, x);
    return 0;
    JMP(PlayerStop);
}

int PlayerStop() {
    // <conv.chunks.Comment object at 0x100ebd5e0>
    ldy(0x52);
    sty(((MetatileBuffer) + (10)));
    JMP(ExitCastle);
}

int ExitCastle() {
    return 0;
    JMP(WaterPipe);
}

int WaterPipe() {
    JSR(GetLrgObjAttrib);
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x100ebda30>
    // <conv.chunks.Comment object at 0x100ebdb50>
    // <conv.chunks.Comment object at 0x100ebdd00>
    lda(0x6b);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x100ebde50>
    lda(0x6c);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x100ebe3c0>
    // <conv.chunks.Comment object at 0x100ebe420>
    // <conv.chunks.Comment object at 0x100ebe480>
    JSR(ChkLrgObjFixedLength);
    ldy(0xa);
    // <conv.chunks.Comment object at 0x100ebe690>
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(0x6);
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // <conv.chunks.Comment object at 0x100ebe8a0>
    // <conv.chunks.Comment object at 0x100ebe9c0>
    // <conv.chunks.Comment object at 0x100ebea50>
    lda(0x0);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x100ebeba0>
    dex();
    BPL(VPipeSectLoop);
    lda(offsetof(G, VerticalPipeData), y);
    // <conv.chunks.Comment object at 0x100ebef00>
    sta(((MetatileBuffer) + (7)));
    JMP(NoBlankP);
}

int NoBlankP() {
    return 0;
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x100ebf500>
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}

int RenderSidewaysPipe() {
    dey();
    dey();
    // <conv.chunks.Comment object at 0x100ebfe90>
    // <conv.chunks.Comment object at 0x100ebff50>
    sty(0x5);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100ebffe0>
    sty(0x6);
    ldx(0x5);
    // <conv.chunks.Comment object at 0x100ec42f0>
    inx();
    lda(offsetof(G, SidePipeShaftData), y);
    // <conv.chunks.Comment object at 0x100ec4500>
    cmp(0x0);
    BEQ(DrawSidePart);
    // <conv.chunks.Comment object at 0x100ec46b0>
    ldx(0x0);
    ldy(0x5);
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // <conv.chunks.Comment object at 0x100ec4980>
    // <conv.chunks.Comment object at 0x100ec4a10>
    // <conv.chunks.Comment object at 0x100ec4bc0>
    // <conv.chunks.Comment object at 0x100ec4c50>
    ldy(0x6);
    lda(offsetof(G, SidePipeTopPart), y);
    sta(MetatileBuffer, x);
    lda(offsetof(G, SidePipeBottomPart), y);
    // <conv.chunks.Comment object at 0x100ec4ec0>
    // <conv.chunks.Comment object at 0x100ec5010>
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(0x0);
    BEQ(WarpPipe);
    // <conv.chunks.Comment object at 0x100ec5a30>
    // <conv.chunks.Comment object at 0x100ec5ac0>
    iny();
    iny();
    iny();
    iny();
    JMP(WarpPipe);
}

int WarpPipe() {
    // <conv.chunks.Comment object at 0x100ec5e20>
    // <conv.chunks.Comment object at 0x100ec5eb0>
    tya();
    pha();
    lda(AreaNumber);
    ora(WorldNumber);
    // <conv.chunks.Comment object at 0x100ec6120>
    BEQ(DrawPipe);
    ldy(AreaObjectLength, x);
    BEQ(DrawPipe);
    JSR(FindEmptyEnemySlot);
    BCS(DrawPipe);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100ec6330>
    // <conv.chunks.Comment object at 0x100ec6480>
    // <conv.chunks.Comment object at 0x100ec65a0>
    // <conv.chunks.Comment object at 0x100ec66c0>
    // <conv.chunks.Comment object at 0x100ec67e0>
    clc();
    adc(0x8);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x100ec6990>
    // <conv.chunks.Comment object at 0x100ec6a20>
    // <conv.chunks.Comment object at 0x100ec6c00>
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x100ec6d80>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    JSR(GetAreaObjYPosition);
    // <conv.chunks.Comment object at 0x100ec7170>
    // <conv.chunks.Comment object at 0x100ec72c0>
    sta(Enemy_Y_Position, x);
    lda(PiranhaPlant);
    // <conv.chunks.Comment object at 0x100ec7500>
    sta(Enemy_ID, x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // <conv.chunks.Comment object at 0x100ec7830>
    pla();
    tay();
    ldx(0x7);
    lda(offsetof(G, VerticalPipeData), y);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x100ec79e0>
    // <conv.chunks.Comment object at 0x100ec7a70>
    // <conv.chunks.Comment object at 0x100ec7c20>
    inx();
    lda(((offsetof(G, VerticalPipeData)) + (2)), y);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x100ec7e00>
    // <conv.chunks.Comment object at 0x100ed4080>
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(0x1);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x100ed4320>
    // <conv.chunks.Comment object at 0x100ed43b0>
    JSR(GetLrgObjAttrib);
    tya();
    anda(0x7);
    sta(0x6);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x100ed4680>
    // <conv.chunks.Comment object at 0x100ed4710>
    // <conv.chunks.Comment object at 0x100ed4860>
    // <conv.chunks.Comment object at 0x100ed48f0>
    return 0;
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(0x0);
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // <conv.chunks.Comment object at 0x100ed4b60>
    // <conv.chunks.Comment object at 0x100ed4bf0>
    clc();
    lda(Enemy_Flag, x);
    BEQ(ExitEmptyChk);
    // <conv.chunks.Comment object at 0x100ed4d70>
    // <conv.chunks.Comment object at 0x100ed4ec0>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x100ed5070>
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // <conv.chunks.Comment object at 0x100ed5280>
    return 0;
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(0x86);
    // <conv.chunks.Comment object at 0x100ed53d0>
    // <conv.chunks.Comment object at 0x100ed54f0>
    sta(((MetatileBuffer) + (10)));
    ldx(0xb);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x100ed5820>
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
    // <conv.chunks.Comment object at 0x100ed5dc0>
    // <conv.chunks.Comment object at 0x100ed5f70>
    // <conv.chunks.Comment object at 0x100ed6000>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100ed61e0>
    lda(0xc0);
    sta(MetatileBuffer, x);
    return 0;
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
    // <conv.chunks.Comment object at 0x100ed6930>
    // <conv.chunks.Comment object at 0x100ed6ae0>
    // <conv.chunks.Comment object at 0x100ed6b70>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x100ed6d50>
    lda(0xb);
    sta(MetatileBuffer, x);
    inx();
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100ed7080>
    lda(0x63);
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(0x2);
    lda(0x6d);
    // <conv.chunks.Comment object at 0x100ed73e0>
    // <conv.chunks.Comment object at 0x100ed7500>
    // <conv.chunks.Comment object at 0x100ed7590>
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(0x24);
    // <conv.chunks.Comment object at 0x100ed7890>
    sta(MetatileBuffer);
    ldx(0x1);
    // <conv.chunks.Comment object at 0x100ed7aa0>
    ldy(0x8);
    lda(0x25);
    JSR(RenderUnderPart);
    lda(0x61);
    // <conv.chunks.Comment object at 0x100ed7e90>
    sta(((MetatileBuffer) + (10)));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(0x8);
    sta(((Enemy_X_Position) + (5)));
    // <conv.chunks.Comment object at 0x100edc2c0>
    // <conv.chunks.Comment object at 0x100edc350>
    // <conv.chunks.Comment object at 0x100edc3e0>
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(((Enemy_PageLoc) + (5)));
    // <conv.chunks.Comment object at 0x100edc740>
    // <conv.chunks.Comment object at 0x100edc7d0>
    lda(0x30);
    sta(((Enemy_Y_Position) + (5)));
    // <conv.chunks.Comment object at 0x100edcaa0>
    lda(0xb0);
    sta(FlagpoleFNum_Y_Pos);
    // <conv.chunks.Comment object at 0x100edcd70>
    lda(FlagpoleFlagObject);
    sta(((Enemy_ID) + (5)));
    inc(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x100edd010>
    // <conv.chunks.Comment object at 0x100edd1f0>
    return 0;
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x100edd4c0>
    ldy(0xf);
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // <conv.chunks.Comment object at 0x100edd820>
    pha();
    ldx(0x1);
    ldy(0xf);
    // <conv.chunks.Comment object at 0x100edd940>
    // <conv.chunks.Comment object at 0x100edd9d0>
    lda(0x44);
    JSR(RenderUnderPart);
    pla();
    // <conv.chunks.Comment object at 0x100eddd90>
    tax();
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x100eddeb0>
    ldx(0x1);
    JMP(DrawRope);
}

int DrawRope() {
    // <conv.chunks.Comment object at 0x100ede030>
    lda(0x40);
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy(AreaType);
    lda(offsetof(G, CoinMetatileData), y);
    // <conv.chunks.Comment object at 0x100ede3c0>
    // <conv.chunks.Comment object at 0x100ede6f0>
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(0xc);
    // <conv.chunks.Comment object at 0x100ede9c0>
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x100edf080>
    sta(VRAM_Buffer_AddrCtrl);
    JMP(ChainObj);
}

int ChainObj() {
    ldy(0x0);
    ldx(((offsetof(G, C_ObjectRow)) - (2)), y);
    // <conv.chunks.Comment object at 0x100edf350>
    // <conv.chunks.Comment object at 0x100edf3e0>
    lda(((offsetof(G, C_ObjectMetatile)) - (2)), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x100edf980>
    ldx(0x7);
    lda(0xc4);
    JMP(ColObj);
}

int ColObj() {
    // <conv.chunks.Comment object at 0x100edfbf0>
    ldy(0x0);
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy(AreaType);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x100edffb0>
    // <conv.chunks.Comment object at 0x100ee4650>
    BEQ(DrawBricks);
    ldy(0x4);
    JMP(DrawBricks);
}

int DrawBricks() {
    // <conv.chunks.Comment object at 0x100ee4860>
    // <conv.chunks.Comment object at 0x100ee48f0>
    lda(offsetof(G, BrickMetatiles), y);
    JMP(GetRow);
    JMP(RowOfSolidBlocks);
}

int RowOfSolidBlocks() {
    ldy(AreaType);
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow);
}

int GetRow() {
    // <conv.chunks.Comment object at 0x100ee4c80>
    // <conv.chunks.Comment object at 0x100ee4da0>
    // <conv.chunks.Comment object at 0x100ee4ef0>
    pha();
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}

int DrawRow() {
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100ee5220>
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy(AreaType);
    lda(offsetof(G, BrickMetatiles), y);
    // <conv.chunks.Comment object at 0x100ee5580>
    // <conv.chunks.Comment object at 0x100ee56a0>
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy(AreaType);
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // <conv.chunks.Comment object at 0x100ee5940>
    // <conv.chunks.Comment object at 0x100ee5a60>
    // <conv.chunks.Comment object at 0x100ee5bb0>
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
    // <conv.chunks.Comment object at 0x100ee6150>
    // <conv.chunks.Comment object at 0x100ee62a0>
    // <conv.chunks.Comment object at 0x100ee6330>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x100ee6690>
    BMI(SetupCannon);
    lda(0x65);
    // <conv.chunks.Comment object at 0x100ee6810>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x100ee6b10>
    BMI(SetupCannon);
    lda(0x66);
    // <conv.chunks.Comment object at 0x100ee6c90>
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // <conv.chunks.Comment object at 0x100ee6ea0>
    ldx(Cannon_Offset);
    JSR(GetAreaObjYPosition);
    sta(Cannon_Y_Position, x);
    // <conv.chunks.Comment object at 0x100ee6ff0>
    // <conv.chunks.Comment object at 0x100ee7110>
    lda(CurrentPageLoc);
    sta(Cannon_PageLoc, x);
    JSR(GetAreaObjXPosition);
    sta(Cannon_X_Position, x);
    // <conv.chunks.Comment object at 0x100ee7350>
    // <conv.chunks.Comment object at 0x100ee74a0>
    // <conv.chunks.Comment object at 0x100ee75c0>
    inx();
    cpx(0x6);
    BCC(StrCOffset);
    ldx(0x0);
    JMP(StrCOffset);
}

int StrCOffset() {
    // <conv.chunks.Comment object at 0x100ee77a0>
    // <conv.chunks.Comment object at 0x100ee7830>
    // <conv.chunks.Comment object at 0x100ee79e0>
    // <conv.chunks.Comment object at 0x100ee7a70>
    stx(Cannon_Offset);
    return 0;
    JMP(StaircaseObject);
}

int StaircaseObject() {
    JSR(ChkLrgObjLength);
    BCC(NextStair);
    lda(0x9);
    sta(StaircaseControl);
    JMP(NextStair);
}

int NextStair() {
    // <conv.chunks.Comment object at 0x100ee7e00>
    // <conv.chunks.Comment object at 0x100ee7d40>
    // <conv.chunks.Comment object at 0x100eeca40>
    // <conv.chunks.Comment object at 0x100eecad0>
    // <conv.chunks.Comment object at 0x100eecc80>
    dec(StaircaseControl);
    ldy(StaircaseControl);
    ldx(offsetof(G, StaircaseRowData), y);
    // <conv.chunks.Comment object at 0x100eecec0>
    lda(offsetof(G, StaircaseHeightData), y);
    tay();
    lda(0x61);
    // <conv.chunks.Comment object at 0x100eed1c0>
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x100eed520>
    // <conv.chunks.Comment object at 0x100eed640>
    // <conv.chunks.Comment object at 0x100eed760>
    // <conv.chunks.Comment object at 0x100eed8b0>
    sta(Enemy_PageLoc, x);
    JSR(GetAreaObjYPosition);
    sta(Enemy_Y_Position, x);
    sta(Jumpspring_FixedYPos, x);
    // <conv.chunks.Comment object at 0x100eedaf0>
    // <conv.chunks.Comment object at 0x100eedc10>
    // <conv.chunks.Comment object at 0x100eedd60>
    lda(JumpspringObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x100eedfa0>
    ldy(0x1);
    sty(Enemy_Y_HighPos, x);
    inc(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x100eee150>
    // <conv.chunks.Comment object at 0x100eee330>
    ldx(0x7);
    lda(0x67);
    // <conv.chunks.Comment object at 0x100eee480>
    sta(MetatileBuffer, x);
    lda(0x68);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda(Hidden1UpFlag);
    // <conv.chunks.Comment object at 0x100eeeb40>
    // <conv.chunks.Comment object at 0x100eeeba0>
    BEQ(ExitDecBlock);
    lda(0x0);
    // <conv.chunks.Comment object at 0x100eeedb0>
    sta(Hidden1UpFlag);
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
    // <conv.chunks.Comment object at 0x100eef380>
    sta(BrickCoinTimerFlag);
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // <conv.chunks.Comment object at 0x100eef5c0>
    sty(0x7);
    lda(0x0);
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x100eef6e0>
    // <conv.chunks.Comment object at 0x100eef860>
    dey();
    BEQ(BWithL);
    lda(0x5);
    JMP(BWithL);
}

int BWithL() {
    // <conv.chunks.Comment object at 0x100eefaa0>
    // <conv.chunks.Comment object at 0x100eefbf0>
    // <conv.chunks.Comment object at 0x100eefc80>
    clc();
    adc(0x7);
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // <conv.chunks.Comment object at 0x100eefec0>
    // <conv.chunks.Comment object at 0x100eeffe0>
    lda(offsetof(G, BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x100ef8530>
    sec();
    sbc(0x0);
    tay();
    JMP(ExitDecBlock);
}

int ExitDecBlock() {
    return 0;
    JMP(Hole_Empty);
}

int Hole_Empty() {
    JSR(ChkLrgObjLength);
    BCC(NoWhirlP);
    lda(AreaType);
    BNE(NoWhirlP);
    ldx(Whirlpool_Offset);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x100ef8a10>
    // <conv.chunks.Comment object at 0x100ef8d40>
    // <conv.chunks.Comment object at 0x100ef8e60>
    // <conv.chunks.Comment object at 0x100ef8f80>
    // <conv.chunks.Comment object at 0x100ef90a0>
    // <conv.chunks.Comment object at 0x100ef91c0>
    sec();
    sbc(0x10);
    sta(Whirlpool_LeftExtent, x);
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(Whirlpool_PageLoc, x);
    // <conv.chunks.Comment object at 0x100ef9370>
    // <conv.chunks.Comment object at 0x100ef9400>
    // <conv.chunks.Comment object at 0x100ef95e0>
    // <conv.chunks.Comment object at 0x100ef9700>
    // <conv.chunks.Comment object at 0x100ef9790>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x100ef9a30>
    tya();
    asl();
    asl();
    asl();
    asl();
    sta(Whirlpool_Length, x);
    // <conv.chunks.Comment object at 0x100ef9b80>
    // <conv.chunks.Comment object at 0x100ef9c40>
    // <conv.chunks.Comment object at 0x100ef9d00>
    // <conv.chunks.Comment object at 0x100ef9dc0>
    // <conv.chunks.Comment object at 0x100ef9e50>
    inx();
    cpx(0x5);
    BCC(StrWOffset);
    ldx(0x0);
    JMP(StrWOffset);
}

int StrWOffset() {
    // <conv.chunks.Comment object at 0x100efa030>
    // <conv.chunks.Comment object at 0x100efa0c0>
    // <conv.chunks.Comment object at 0x100efa270>
    // <conv.chunks.Comment object at 0x100efa300>
    stx(Whirlpool_Offset);
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // <conv.chunks.Comment object at 0x100efa4e0>
    ldx(AreaType);
    lda(offsetof(G, HoleMetatiles), x);
    // <conv.chunks.Comment object at 0x100efa630>
    ldx(0x8);
    ldy(0xf);
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty(AreaObjectHeight);
    ldy(MetatileBuffer, x);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x100efa9f0>
    // <conv.chunks.Comment object at 0x100efab10>
    // <conv.chunks.Comment object at 0x100efac60>
    cpy(0x17);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x100efade0>
    cpy(0x1a);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x100efaff0>
    cpy(0xc0);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x100efb200>
    cpy(0xc0);
    BCS(WaitOneRow);
    // <conv.chunks.Comment object at 0x100efb410>
    cpy(0x54);
    BNE(DrawThisRow);
    // <conv.chunks.Comment object at 0x100efb620>
    cmp(0x50);
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // <conv.chunks.Comment object at 0x100efb830>
    // <conv.chunks.Comment object at 0x100efb9e0>
    sta(MetatileBuffer, x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x100efbc20>
    BCS(ExitUPartR);
    ldy(AreaObjectHeight);
    // <conv.chunks.Comment object at 0x100efbe30>
    dey();
    BPL(RenderUnderPart);
    JMP(ExitUPartR);
}

int ExitUPartR() {
    return 0;
    JMP(ChkLrgObjLength);
}

int ChkLrgObjLength() {
    JSR(GetLrgObjAttrib);
    JMP(ChkLrgObjFixedLength);
}

int ChkLrgObjFixedLength() {
    lda(AreaObjectLength, x);
    clc();
    BPL(LenSet);
    tya();
    // <conv.chunks.Comment object at 0x100f04380>
    // <conv.chunks.Comment object at 0x100f04500>
    // <conv.chunks.Comment object at 0x100f04590>
    // <conv.chunks.Comment object at 0x100f04710>
    sta(AreaObjectLength, x);
    sec();
    JMP(LenSet);
}

int LenSet() {
    return 0;
    JMP(GetLrgObjAttrib);
}

int GetLrgObjAttrib() {
    ldy(AreaObjOffsetBuffer, x);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x100f04aa0>
    // <conv.chunks.Comment object at 0x100f04bf0>
    anda(0b1111);
    sta(0x7);
    // <conv.chunks.Comment object at 0x100f04e90>
    iny();
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100f05010>
    // <conv.chunks.Comment object at 0x100f05190>
    tay();
    return 0;
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda(CurrentColumnPos);
    asl();
    // <conv.chunks.Comment object at 0x100f05430>
    // <conv.chunks.Comment object at 0x100f05580>
    asl();
    asl();
    asl();
    return 0;
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x100f058e0>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x100f05a90>
    asl();
    asl();
    clc();
    adc(32);
    // <conv.chunks.Comment object at 0x100f05d00>
    return 0;
    JMP(GetBlockBufferAddr);
}

int GetBlockBufferAddr() {
    pha();
    lsr();
    // <conv.chunks.Comment object at 0x100f062d0>
    // <conv.chunks.Comment object at 0x100f06390>
    lsr();
    lsr();
    lsr();
    tay();
    lda(((offsetof(G, BlockBufferAddr)) + (2)), y);
    // <conv.chunks.Comment object at 0x100f06600>
    // <conv.chunks.Comment object at 0x100f06690>
    sta(0x7);
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100f06a20>
    clc();
    adc(offsetof(G, BlockBufferAddr), y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x100f06bd0>
    // <conv.chunks.Comment object at 0x100f06d50>
    return 0;
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // <conv.chunks.Comment object at 0x100f07140>
    sta(AreaPointer);
    JMP(GetAreaType);
}

int GetAreaType() {
    // <conv.chunks.Comment object at 0x100f07950>
    anda(0b1100000);
    asl();
    rol();
    rol();
    rol();
    sta(AreaType);
    // <conv.chunks.Comment object at 0x100f07c80>
    // <conv.chunks.Comment object at 0x100f07d10>
    return 0;
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x100f07ef0>
    lda(offsetof(G, WorldAddrOffsets), y);
    clc();
    // <conv.chunks.Comment object at 0x100f101a0>
    adc(AreaNumber);
    tay();
    lda(offsetof(G, AreaAddrOffsets), y);
    // <conv.chunks.Comment object at 0x100f103b0>
    return 0;
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x100f105c0>
    JSR(GetAreaType);
    tay();
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x100f10860>
    anda(0b11111);
    sta(AreaAddrsLOffset);
    lda(offsetof(G, EnemyAddrHOffsets), y);
    clc();
    adc(AreaAddrsLOffset);
    // <conv.chunks.Comment object at 0x100f10a70>
    // <conv.chunks.Comment object at 0x100f10b90>
    // <conv.chunks.Comment object at 0x100f10d10>
    // <conv.chunks.Comment object at 0x100f10da0>
    tay();
    lda(offsetof(G, EnemyDataAddrLow), y);
    // <conv.chunks.Comment object at 0x100f10f50>
    sta(EnemyDataLow);
    lda(offsetof(G, EnemyDataAddrHigh), y);
    sta(EnemyDataHigh);
    ldy(AreaType);
    lda(offsetof(G, AreaDataHOffsets), y);
    // <conv.chunks.Comment object at 0x100f113a0>
    // <conv.chunks.Comment object at 0x100f114c0>
    clc();
    adc(AreaAddrsLOffset);
    tay();
    lda(offsetof(G, AreaDataAddrLow), y);
    // <conv.chunks.Comment object at 0x100f11820>
    sta(AreaDataLow);
    lda(offsetof(G, AreaDataAddrHigh), y);
    sta(AreaDataHigh);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x100f11c70>
    lda((AreaData), y);
    pha();
    anda(0b111);
    // <conv.chunks.Comment object at 0x100f11f10>
    // <conv.chunks.Comment object at 0x100f11fa0>
    cmp(0x4);
    BCC(StoreFore);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x100f122a0>
    lda(0x0);
    JMP(StoreFore);
}

int StoreFore() {
    // <conv.chunks.Comment object at 0x100f12420>
    sta(ForegroundScenery);
    pla();
    // <conv.chunks.Comment object at 0x100f12630>
    pha();
    anda(0b111000);
    lsr();
    // <conv.chunks.Comment object at 0x100f12750>
    // <conv.chunks.Comment object at 0x100f128a0>
    lsr();
    lsr();
    sta(PlayerEntranceCtrl);
    pla();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x100f12a50>
    // <conv.chunks.Comment object at 0x100f12ba0>
    // <conv.chunks.Comment object at 0x100f12c30>
    clc();
    rol();
    // <conv.chunks.Comment object at 0x100f12e10>
    rol();
    rol();
    sta(GameTimerSetting);
    // <conv.chunks.Comment object at 0x100f12fc0>
    iny();
    lda((AreaData), y);
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x100f13170>
    // <conv.chunks.Comment object at 0x100f13320>
    // <conv.chunks.Comment object at 0x100f133b0>
    sta(TerrainControl);
    pla();
    // <conv.chunks.Comment object at 0x100f135f0>
    pha();
    anda(0b110000);
    // <conv.chunks.Comment object at 0x100f13710>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x100f138f0>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x100f13aa0>
    pla();
    anda(0b11000000);
    clc();
    rol();
    // <conv.chunks.Comment object at 0x100f13e00>
    rol();
    rol();
    cmp(0b11);
    BNE(StoreStyle);
    sta(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x100f13fb0>
    // <conv.chunks.Comment object at 0x100f1c110>
    // <conv.chunks.Comment object at 0x100f1c230>
    lda(0x0);
    JMP(StoreStyle);
}

int StoreStyle() {
    sta(AreaStyle);
    lda(AreaDataLow);
    // <conv.chunks.Comment object at 0x100f1c560>
    clc();
    adc(0x2);
    sta(AreaDataLow);
    lda(AreaDataHigh);
    adc(0x0);
    sta(AreaDataHigh);
    return 0;
    JMP(GameMode);
}

int GameMode() {
    lda(OperMode_Task);
    JMP(GameCoreRoutine);
}

int GameCoreRoutine() {
    ldx(CurrentPlayer);
    lda(SavedJoypadBits, x);
    sta(SavedJoypadBits);
    JSR(GameRoutines);
    lda(OperMode_Task);
    cmp(0x3);
    BCS(GameEngine);
    // <conv.chunks.Comment object at 0x101091100>
    // <conv.chunks.Comment object at 0x101091220>
    // <conv.chunks.Comment object at 0x101091370>
    // <conv.chunks.Comment object at 0x101091490>
    // <conv.chunks.Comment object at 0x1010915b0>
    // <conv.chunks.Comment object at 0x1010916d0>
    // <conv.chunks.Comment object at 0x101091760>
    return 0;
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // <conv.chunks.Comment object at 0x1010919d0>
    ldx(0x0);
    JMP(ProcELoop);
}

int ProcELoop() {
    // <conv.chunks.Comment object at 0x101091b50>
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // <conv.chunks.Comment object at 0x101091d30>
    // <conv.chunks.Comment object at 0x101091e50>
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x101092000>
    BNE(ProcELoop);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    JSR(PlayerGfxHandler);
    JSR(BlockObjMT_Updater);
    // <conv.chunks.Comment object at 0x101092210>
    // <conv.chunks.Comment object at 0x101092330>
    // <conv.chunks.Comment object at 0x101092450>
    // <conv.chunks.Comment object at 0x101092570>
    ldx(0x1);
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    // <conv.chunks.Comment object at 0x1010926f0>
    // <conv.chunks.Comment object at 0x1010928a0>
    dex();
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    JSR(MiscObjectsCore);
    JSR(ProcessCannons);
    JSR(ProcessWhirlpools);
    JSR(FlagpoleRoutine);
    JSR(RunGameTimer);
    JSR(ColorRotation);
    // <conv.chunks.Comment object at 0x101092a50>
    // <conv.chunks.Comment object at 0x101092b70>
    // <conv.chunks.Comment object at 0x101092c90>
    // <conv.chunks.Comment object at 0x101092db0>
    // <conv.chunks.Comment object at 0x101092ed0>
    // <conv.chunks.Comment object at 0x101092ff0>
    // <conv.chunks.Comment object at 0x101093110>
    // <conv.chunks.Comment object at 0x101093230>
    lda(Player_Y_HighPos);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101093440>
    BPL(NoChgMus);
    lda(StarInvincibleTimer);
    BEQ(ClrPlrPal);
    // <conv.chunks.Comment object at 0x101093650>
    // <conv.chunks.Comment object at 0x101093770>
    cmp(0x4);
    BNE(NoChgMus);
    lda(IntervalTimerControl);
    BNE(NoChgMus);
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}

int NoChgMus() {
    // <conv.chunks.Comment object at 0x1010938f0>
    // <conv.chunks.Comment object at 0x101093aa0>
    // <conv.chunks.Comment object at 0x101093bc0>
    // <conv.chunks.Comment object at 0x101093ce0>
    // <conv.chunks.Comment object at 0x101093e00>
    ldy(StarInvincibleTimer);
    lda(FrameCounter);
    cpy(0x8);
    BCS(CycleTwo);
    lsr();
    // <conv.chunks.Comment object at 0x101093f50>
    // <conv.chunks.Comment object at 0x1010980b0>
    // <conv.chunks.Comment object at 0x101098140>
    // <conv.chunks.Comment object at 0x101098320>
    lsr();
    JMP(CycleTwo);
}

int CycleTwo() {
    // <conv.chunks.Comment object at 0x101098440>
    lsr();
    JSR(CyclePlayerPalette);
    JMP(SaveAB);
    JMP(ClrPlrPal);
}

int ClrPlrPal() {
    // <conv.chunks.Comment object at 0x101098530>
    // <conv.chunks.Comment object at 0x101098650>
    // <conv.chunks.Comment object at 0x1010987a0>
    JSR(ResetPalStar);
    JMP(SaveAB);
}

int SaveAB() {
    // <conv.chunks.Comment object at 0x1010988f0>
    lda(A_B_Buttons);
    sta(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x101098a70>
    lda(0x0);
    sta(Left_Right_Buttons);
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda(VRAM_Buffer_AddrCtrl);
    cmp(0x6);
    BEQ(ExitEng);
    lda(AreaParserTaskNum);
    // <conv.chunks.Comment object at 0x101098ec0>
    // <conv.chunks.Comment object at 0x101098f50>
    // <conv.chunks.Comment object at 0x101099130>
    BNE(RunParser);
    lda(ScrollThirtyTwo);
    cmp(0x20);
    BMI(ExitEng);
    // <conv.chunks.Comment object at 0x101099340>
    // <conv.chunks.Comment object at 0x101099460>
    // <conv.chunks.Comment object at 0x1010994f0>
    lda(ScrollThirtyTwo);
    sbc(0x20);
    sta(ScrollThirtyTwo);
    lda(0x0);
    sta(VRAM_Buffer2_Offset);
    JMP(RunParser);
}

int RunParser() {
    // <conv.chunks.Comment object at 0x1010997c0>
    // <conv.chunks.Comment object at 0x101099850>
    // <conv.chunks.Comment object at 0x101099a00>
    // <conv.chunks.Comment object at 0x101099a90>
    // <conv.chunks.Comment object at 0x101099c40>
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}

int ExitEng() {
    // <conv.chunks.Comment object at 0x101099d90>
    return 0;
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x101099f10>
    clc();
    adc(Platform_X_Scroll);
    sta(Player_X_Scroll);
    lda(ScrollLock);
    BNE(InitScrlAmt);
    // <conv.chunks.Comment object at 0x10109a0c0>
    // <conv.chunks.Comment object at 0x10109a1e0>
    // <conv.chunks.Comment object at 0x10109a300>
    // <conv.chunks.Comment object at 0x10109a420>
    lda(Player_Pos_ForScroll);
    cmp(0x50);
    BCC(InitScrlAmt);
    lda(SideCollisionTimer);
    BNE(InitScrlAmt);
    ldy(Player_X_Scroll);
    dey();
    BMI(InitScrlAmt);
    // <conv.chunks.Comment object at 0x10109a630>
    // <conv.chunks.Comment object at 0x10109a6c0>
    // <conv.chunks.Comment object at 0x10109a870>
    // <conv.chunks.Comment object at 0x10109a990>
    // <conv.chunks.Comment object at 0x10109aab0>
    // <conv.chunks.Comment object at 0x10109ac00>
    // <conv.chunks.Comment object at 0x10109ac90>
    iny();
    cpy(0x2);
    // <conv.chunks.Comment object at 0x10109ae40>
    BCC(ChkNearMid);
    dey();
    JMP(ChkNearMid);
}

int ChkNearMid() {
    lda(Player_Pos_ForScroll);
    cmp(0x70);
    BCC(ScrollScreen);
    ldy(Player_X_Scroll);
    JMP(ScrollScreen);
}

int ScrollScreen() {
    tya();
    sta(ScrollAmount);
    // <conv.chunks.Comment object at 0x10109b650>
    clc();
    adc(ScrollThirtyTwo);
    sta(ScrollThirtyTwo);
    // <conv.chunks.Comment object at 0x10109b800>
    // <conv.chunks.Comment object at 0x10109b920>
    tya();
    clc();
    adc(ScreenLeft_X_Pos);
    sta(ScreenLeft_X_Pos);
    sta(HorizontalScroll);
    // <conv.chunks.Comment object at 0x10109bb60>
    // <conv.chunks.Comment object at 0x10109bc80>
    // <conv.chunks.Comment object at 0x10109bda0>
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    sta(ScreenLeft_PageLoc);
    anda(0x1);
    sta(0x0);
    lda(Mirror_PPU_CTRL_REG1);
    anda(0b11111110);
    ora(0x0);
    sta(Mirror_PPU_CTRL_REG1);
    JSR(GetScreenPosition);
    // <conv.chunks.Comment object at 0x10109bfb0>
    // <conv.chunks.Comment object at 0x1010a4080>
    // <conv.chunks.Comment object at 0x1010a4230>
    // <conv.chunks.Comment object at 0x1010a4380>
    // <conv.chunks.Comment object at 0x1010a4410>
    // <conv.chunks.Comment object at 0x1010a4590>
    // <conv.chunks.Comment object at 0x1010a46e0>
    // <conv.chunks.Comment object at 0x1010a4770>
    // <conv.chunks.Comment object at 0x1010a48f0>
    lda(0x8);
    sta(ScrollIntervalTimer);
    JMP(ChkPOffscr);
    JMP(InitScrlAmt);
}

int InitScrlAmt() {
    lda(0x0);
    sta(ScrollAmount);
    JMP(ChkPOffscr);
}

int ChkPOffscr() {
    // <conv.chunks.Comment object at 0x1010a4dd0>
    // <conv.chunks.Comment object at 0x1010a4f80>
    ldx(0x0);
    JSR(GetXOffscreenBits);
    sta(0x0);
    ldy(0x0);
    asl();
    BCS(KeepOnscr);
    iny();
    // <conv.chunks.Comment object at 0x1010a5040>
    // <conv.chunks.Comment object at 0x1010a5220>
    // <conv.chunks.Comment object at 0x1010a52b0>
    // <conv.chunks.Comment object at 0x1010a5460>
    // <conv.chunks.Comment object at 0x1010a54f0>
    // <conv.chunks.Comment object at 0x1010a5640>
    lda(0x0);
    anda(0b100000);
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // <conv.chunks.Comment object at 0x1010a56d0>
    // <conv.chunks.Comment object at 0x1010a58e0>
    // <conv.chunks.Comment object at 0x1010a5a00>
    lda(ScreenEdge_X_Pos, y);
    sec();
    sbc(offsetof(G, X_SubtracterData), y);
    sta(Player_X_Position);
    lda(ScreenEdge_PageLoc, y);
    sbc(0x0);
    sta(Player_PageLoc);
    lda(Left_Right_Buttons);
    cmp(offsetof(G, OffscrJoypadBitsData), y);
    BEQ(InitPlatScrl);
    // <conv.chunks.Comment object at 0x1010a5c10>
    // <conv.chunks.Comment object at 0x1010a5d60>
    // <conv.chunks.Comment object at 0x1010a5e80>
    // <conv.chunks.Comment object at 0x1010a5fd0>
    // <conv.chunks.Comment object at 0x1010a6060>
    // <conv.chunks.Comment object at 0x1010a6210>
    // <conv.chunks.Comment object at 0x1010a6330>
    // <conv.chunks.Comment object at 0x1010a6480>
    lda(0x0);
    sta(Player_X_Speed);
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // <conv.chunks.Comment object at 0x1010a6600>
    // <conv.chunks.Comment object at 0x1010a67b0>
    lda(0x0);
    sta(Platform_X_Scroll);
    return 0;
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x1010a6b10>
    clc();
    adc(0xff);
    sta(ScreenRight_X_Pos);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    sta(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x1010a6f30>
    // <conv.chunks.Comment object at 0x1010a6fc0>
    // <conv.chunks.Comment object at 0x1010a7170>
    // <conv.chunks.Comment object at 0x1010a7290>
    // <conv.chunks.Comment object at 0x1010a7320>
    return 0;
    JMP(GameRoutines);
}

int GameRoutines() {
    lda(GameEngineSubroutine);
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda(AltEntranceControl);
    // <conv.chunks.Comment object at 0x1010a7fb0>
    cmp(0x2);
    BEQ(EntrMode2);
    // <conv.chunks.Comment object at 0x1010b0170>
    lda(0x0);
    ldy(Player_Y_Position);
    cpy(0x30);
    BCC(AutoControlPlayer);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x1010b0380>
    // <conv.chunks.Comment object at 0x1010b0530>
    // <conv.chunks.Comment object at 0x1010b05c0>
    // <conv.chunks.Comment object at 0x1010b0770>
    cmp(0x6);
    BEQ(ChkBehPipe);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x1010b08f0>
    // <conv.chunks.Comment object at 0x1010b0aa0>
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // <conv.chunks.Comment object at 0x1010b0cb0>
    lda(Player_SprAttrib);
    BNE(IntroEntr);
    // <conv.chunks.Comment object at 0x1010b0e00>
    lda(0x1);
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // <conv.chunks.Comment object at 0x1010b0f80>
    // <conv.chunks.Comment object at 0x1010b1130>
    JSR(EnterSidePipe);
    dec(ChangeAreaTimer);
    BNE(ExitEntr);
    inc(DisableIntermediate);
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // <conv.chunks.Comment object at 0x1010b1280>
    // <conv.chunks.Comment object at 0x1010b13a0>
    // <conv.chunks.Comment object at 0x1010b14c0>
    // <conv.chunks.Comment object at 0x1010b15e0>
    // <conv.chunks.Comment object at 0x1010b1700>
    lda(JoypadOverride);
    BNE(VineEntr);
    lda(0xff);
    JSR(MovePlayerYAxis);
    lda(Player_Y_Position);
    cmp(0x91);
    BCC(PlayerRdy);
    return 0;
    JMP(VineEntr);
}

int VineEntr() {
    lda(VineHeight);
    cmp(0x60);
    BNE(ExitEntr);
    lda(Player_Y_Position);
    cmp(0x99);
    ldy(0x0);
    lda(0x1);
    BCC(OffVine);
    // <conv.chunks.Comment object at 0x1010b20f0>
    // <conv.chunks.Comment object at 0x1010b2180>
    // <conv.chunks.Comment object at 0x1010b2330>
    // <conv.chunks.Comment object at 0x1010b2450>
    // <conv.chunks.Comment object at 0x1010b24e0>
    // <conv.chunks.Comment object at 0x1010b2600>
    // <conv.chunks.Comment object at 0x1010b2720>
    lda(0x3);
    sta(Player_State);
    iny();
    lda(0x8);
    sta(((Block_Buffer_1) + (0xb4)));
    JMP(OffVine);
}

int OffVine() {
    // <conv.chunks.Comment object at 0x1010b2960>
    // <conv.chunks.Comment object at 0x1010b2b40>
    // <conv.chunks.Comment object at 0x1010b2bd0>
    // <conv.chunks.Comment object at 0x1010b2c60>
    // <conv.chunks.Comment object at 0x1010b2ed0>
    sty(DisableCollisionDet);
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x1010b3050>
    lda(Player_X_Position);
    cmp(0x48);
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // <conv.chunks.Comment object at 0x1010b3260>
    // <conv.chunks.Comment object at 0x1010b32f0>
    // <conv.chunks.Comment object at 0x1010b34a0>
    lda(0x8);
    sta(GameEngineSubroutine);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1010b36e0>
    sta(PlayerFacingDir);
    lsr();
    sta(AltEntranceControl);
    sta(DisableCollisionDet);
    sta(JoypadOverride);
    JMP(ExitEntr);
}

int ExitEntr() {
    // <conv.chunks.Comment object at 0x1010b3950>
    // <conv.chunks.Comment object at 0x1010b39e0>
    // <conv.chunks.Comment object at 0x1010b3b00>
    // <conv.chunks.Comment object at 0x1010b3c20>
    // <conv.chunks.Comment object at 0x1010b3d70>
    return 0;
    JMP(AutoControlPlayer);
}

int AutoControlPlayer() {
    sta(SavedJoypadBits);
    JMP(PlayerCtrlRoutine);
}

int PlayerCtrlRoutine() {
    lda(GameEngineSubroutine);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x1010b8080>
    // <conv.chunks.Comment object at 0x1010b81a0>
    BEQ(SizeChk);
    lda(AreaType);
    BNE(SaveJoyp);
    // <conv.chunks.Comment object at 0x1010b83e0>
    // <conv.chunks.Comment object at 0x1010b8500>
    ldy(Player_Y_HighPos);
    dey();
    BNE(DisJoyp);
    // <conv.chunks.Comment object at 0x1010b8740>
    // <conv.chunks.Comment object at 0x1010b87d0>
    lda(Player_Y_Position);
    cmp(0xd0);
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // <conv.chunks.Comment object at 0x1010b8a10>
    // <conv.chunks.Comment object at 0x1010b8aa0>
    // <conv.chunks.Comment object at 0x1010b8c50>
    lda(0x0);
    sta(SavedJoypadBits);
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // <conv.chunks.Comment object at 0x1010b8ec0>
    lda(SavedJoypadBits);
    anda(0b11000000);
    sta(A_B_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x1010b91f0>
    anda(0b11);
    sta(Left_Right_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x1010b94f0>
    anda(0b1100);
    sta(Up_Down_Buttons);
    anda(0b100);
    BEQ(SizeChk);
    lda(Player_State);
    BNE(SizeChk);
    ldy(Left_Right_Buttons);
    BEQ(SizeChk);
    // <conv.chunks.Comment object at 0x1010b97f0>
    // <conv.chunks.Comment object at 0x1010b9910>
    // <conv.chunks.Comment object at 0x1010b9a60>
    // <conv.chunks.Comment object at 0x1010b9b80>
    // <conv.chunks.Comment object at 0x1010b9cd0>
    // <conv.chunks.Comment object at 0x1010b9df0>
    lda(0x0);
    sta(Left_Right_Buttons);
    sta(Up_Down_Buttons);
    JMP(SizeChk);
}

int SizeChk() {
    // <conv.chunks.Comment object at 0x1010b9fa0>
    // <conv.chunks.Comment object at 0x1010ba150>
    // <conv.chunks.Comment object at 0x1010ba270>
    JSR(PlayerMovementSubs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1010ba3f0>
    lda(PlayerSize);
    BNE(ChkMoveDir);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1010ba6f0>
    lda(CrouchingFlag);
    BEQ(ChkMoveDir);
    ldy(0x2);
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // <conv.chunks.Comment object at 0x1010ba900>
    // <conv.chunks.Comment object at 0x1010baa20>
    // <conv.chunks.Comment object at 0x1010baab0>
    sty(Player_BoundBoxCtrl);
    lda(0x1);
    ldy(Player_X_Speed);
    BEQ(PlayerSubs);
    BPL(SetMoveDir);
    asl();
    JMP(SetMoveDir);
}

int SetMoveDir() {
    // <conv.chunks.Comment object at 0x1010bac90>
    // <conv.chunks.Comment object at 0x1010bad20>
    // <conv.chunks.Comment object at 0x1010baed0>
    // <conv.chunks.Comment object at 0x1010baff0>
    // <conv.chunks.Comment object at 0x1010bb140>
    // <conv.chunks.Comment object at 0x1010bb1d0>
    sta(Player_MovingDir);
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // <conv.chunks.Comment object at 0x1010bb320>
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(0x0);
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // <conv.chunks.Comment object at 0x1010bb470>
    // <conv.chunks.Comment object at 0x1010bb590>
    // <conv.chunks.Comment object at 0x1010bb6b0>
    // <conv.chunks.Comment object at 0x1010bb740>
    // <conv.chunks.Comment object at 0x1010bb8f0>
    lda(Player_Y_Position);
    cmp(0x40);
    BCC(PlayerHole);
    // <conv.chunks.Comment object at 0x1010bbb00>
    // <conv.chunks.Comment object at 0x1010bbb90>
    lda(GameEngineSubroutine);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x1010bbe30>
    BEQ(PlayerHole);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x1010c4080>
    BEQ(PlayerHole);
    cmp(0x4);
    // <conv.chunks.Comment object at 0x1010c4290>
    BCC(PlayerHole);
    lda(Player_SprAttrib);
    anda(0b11011111);
    sta(Player_SprAttrib);
    JMP(PlayerHole);
}

int PlayerHole() {
    // <conv.chunks.Comment object at 0x1010c4590>
    // <conv.chunks.Comment object at 0x1010c46b0>
    // <conv.chunks.Comment object at 0x1010c47d0>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BMI(ExitCtrl);
    // <conv.chunks.Comment object at 0x1010c4920>
    // <conv.chunks.Comment object at 0x1010c49b0>
    ldx(0x1);
    stx(ScrollLock);
    // <conv.chunks.Comment object at 0x1010c4bc0>
    ldy(0x4);
    sty(0x7);
    ldx(0x0);
    ldy(GameTimerExpiredFlag);
    BNE(HoleDie);
    ldy(CloudTypeOverride);
    BNE(ChkHoleX);
    JMP(HoleDie);
}

int HoleDie() {
    // <conv.chunks.Comment object at 0x1010c4e90>
    // <conv.chunks.Comment object at 0x1010c4f20>
    // <conv.chunks.Comment object at 0x1010c5010>
    // <conv.chunks.Comment object at 0x1010c51c0>
    // <conv.chunks.Comment object at 0x1010c5310>
    // <conv.chunks.Comment object at 0x1010c5430>
    // <conv.chunks.Comment object at 0x1010c5550>
    inx();
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ChkHoleX);
    ldy(DeathMusicLoaded);
    BNE(HoleBottom);
    // <conv.chunks.Comment object at 0x1010c5760>
    // <conv.chunks.Comment object at 0x1010c57f0>
    // <conv.chunks.Comment object at 0x1010c59a0>
    // <conv.chunks.Comment object at 0x1010c5ac0>
    iny();
    sty(EventMusicQueue);
    sty(DeathMusicLoaded);
    JMP(HoleBottom);
}

int HoleBottom() {
    ldy(0x6);
    sty(0x7);
    JMP(ChkHoleX);
}

int ChkHoleX() {
    // <conv.chunks.Comment object at 0x1010c6000>
    // <conv.chunks.Comment object at 0x1010c6090>
    cmp(0x7);
    BMI(ExitCtrl);
    dex();
    BMI(CloudExit);
    ldy(EventMusicBuffer);
    BNE(ExitCtrl);
    lda(0x6);
    sta(GameEngineSubroutine);
    JMP(ExitCtrl);
}

int ExitCtrl() {
    // <conv.chunks.Comment object at 0x1010c61e0>
    // <conv.chunks.Comment object at 0x1010c6390>
    // <conv.chunks.Comment object at 0x1010c6420>
    // <conv.chunks.Comment object at 0x1010c6540>
    // <conv.chunks.Comment object at 0x1010c6660>
    // <conv.chunks.Comment object at 0x1010c6780>
    // <conv.chunks.Comment object at 0x1010c6810>
    // <conv.chunks.Comment object at 0x1010c69f0>
    return 0;
    JMP(CloudExit);
}

int CloudExit() {
    lda(0x0);
    sta(JoypadOverride);
    JSR(SetEntr);
    inc(AltEntranceControl);
    // <conv.chunks.Comment object at 0x1010c6b70>
    // <conv.chunks.Comment object at 0x1010c6d20>
    // <conv.chunks.Comment object at 0x1010c6e70>
    return 0;
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda(Player_Y_HighPos);
    BNE(AutoClimb);
    // <conv.chunks.Comment object at 0x1010c7080>
    // <conv.chunks.Comment object at 0x1010c71a0>
    lda(Player_Y_Position);
    cmp(0xe4);
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // <conv.chunks.Comment object at 0x1010c75c0>
    lda(0b1000);
    sta(JoypadOverride);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x1010c7800>
    sty(Player_State);
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // <conv.chunks.Comment object at 0x1010c7b00>
    lda(0x2);
    sta(AltEntranceControl);
    JMP(ChgAreaMode);
    JMP(VerticalPipeEntry);
}

int VerticalPipeEntry() {
    lda(0x1);
    JSR(MovePlayerYAxis);
    JSR(ScrollHandler);
    ldy(0x0);
    lda(WarpZoneControl);
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x1010c7ef0>
    // <conv.chunks.Comment object at 0x1010c7f80>
    // <conv.chunks.Comment object at 0x1010d0170>
    // <conv.chunks.Comment object at 0x1010d0290>
    // <conv.chunks.Comment object at 0x1010d0320>
    // <conv.chunks.Comment object at 0x1010d04d0>
    iny();
    lda(AreaType);
    // <conv.chunks.Comment object at 0x1010d0680>
    cmp(0x3);
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x1010d0800>
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1010d0c20>
    sta(Player_Y_Position);
    return 0;
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // <conv.chunks.Comment object at 0x1010d0f20>
    ldy(0x2);
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // <conv.chunks.Comment object at 0x1010d10a0>
    dec(ChangeAreaTimer);
    BNE(ExitCAPipe);
    sty(AltEntranceControl);
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // <conv.chunks.Comment object at 0x1010d1370>
    // <conv.chunks.Comment object at 0x1010d1490>
    inc(DisableScreenFlag);
    lda(0x0);
    sta(OperMode_Task);
    sta(Sprite0HitDetectFlag);
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // <conv.chunks.Comment object at 0x1010d1640>
    // <conv.chunks.Comment object at 0x1010d17f0>
    // <conv.chunks.Comment object at 0x1010d1940>
    return 0;
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x1010d1a60>
    sta(Player_X_Speed);
    ldy(0x1);
    lda(Player_X_Position);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1010d1c70>
    // <conv.chunks.Comment object at 0x1010d1d00>
    // <conv.chunks.Comment object at 0x1010d1eb0>
    BNE(RightPipe);
    sta(Player_X_Speed);
    tay();
    JMP(RightPipe);
}

int RightPipe() {
    // <conv.chunks.Comment object at 0x1010d20c0>
    // <conv.chunks.Comment object at 0x1010d2210>
    // <conv.chunks.Comment object at 0x1010d22a0>
    tya();
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x1010d2390>
    return 0;
    JMP(PlayerChangeSize);
}

int PlayerChangeSize() {
    lda(TimerControl);
    cmp(0xf8);
    BNE(EndChgSize);
    JMP(InitChangeSize);
    JMP(EndChgSize);
}

int EndChgSize() {
    // <conv.chunks.Comment object at 0x1010d25a0>
    // <conv.chunks.Comment object at 0x1010d26c0>
    // <conv.chunks.Comment object at 0x1010d2750>
    // <conv.chunks.Comment object at 0x1010d2900>
    // <conv.chunks.Comment object at 0x1010d2a20>
    cmp(0xc4);
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // <conv.chunks.Comment object at 0x1010d2ae0>
    // <conv.chunks.Comment object at 0x1010d2c90>
    // <conv.chunks.Comment object at 0x1010d2db0>
    return 0;
    JMP(PlayerInjuryBlink);
}

int PlayerInjuryBlink() {
    lda(TimerControl);
    cmp(0xf0);
    BCS(ExitBlink);
    cmp(0xc8);
    BEQ(DonePlayerTask);
    JMP(PlayerCtrlRoutine);
    JMP(ExitBlink);
}

int ExitBlink() {
    // <conv.chunks.Comment object at 0x1010d2f00>
    // <conv.chunks.Comment object at 0x1010d3020>
    // <conv.chunks.Comment object at 0x1010d30b0>
    // <conv.chunks.Comment object at 0x1010d3260>
    // <conv.chunks.Comment object at 0x1010d32f0>
    // <conv.chunks.Comment object at 0x1010d34a0>
    // <conv.chunks.Comment object at 0x1010d35c0>
    BNE(ExitBoth);
    JMP(InitChangeSize);
}

int InitChangeSize() {
    ldy(PlayerChangeSizeFlag);
    BNE(ExitBoth);
    sty(PlayerAnimCtrl);
    inc(PlayerChangeSizeFlag);
    // <conv.chunks.Comment object at 0x1010d3740>
    // <conv.chunks.Comment object at 0x1010d3860>
    // <conv.chunks.Comment object at 0x1010d3980>
    // <conv.chunks.Comment object at 0x1010d3aa0>
    lda(PlayerSize);
    eor(0x1);
    // <conv.chunks.Comment object at 0x1010d3cb0>
    sta(PlayerSize);
    JMP(ExitBoth);
}

int ExitBoth() {
    // <conv.chunks.Comment object at 0x1010d3ef0>
    return 0;
    JMP(PlayerDeath);
}

int PlayerDeath() {
    lda(TimerControl);
    cmp(0xf0);
    BCS(ExitDeath);
    JMP(PlayerCtrlRoutine);
    JMP(DonePlayerTask);
}

int DonePlayerTask() {
    lda(0x0);
    sta(TimerControl);
    // <conv.chunks.Comment object at 0x1010d85c0>
    lda(0x8);
    sta(GameEngineSubroutine);
    return 0;
    JMP(PlayerFireFlower);
}

int PlayerFireFlower() {
    lda(TimerControl);
    cmp(0xc0);
    BEQ(ResetPalFireFlower);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x1010d8aa0>
    // <conv.chunks.Comment object at 0x1010d8bc0>
    // <conv.chunks.Comment object at 0x1010d8c50>
    // <conv.chunks.Comment object at 0x1010d8e00>
    lsr();
    lsr();
    JMP(CyclePlayerPalette);
}

int CyclePlayerPalette() {
    anda(0x3);
    sta(0x0);
    lda(Player_SprAttrib);
    anda(0b11111100);
    ora(0x0);
    sta(Player_SprAttrib);
    return 0;
    JMP(ResetPalFireFlower);
}

int ResetPalFireFlower() {
    JSR(DonePlayerTask);
    JMP(ResetPalStar);
}

int ResetPalStar() {
    lda(Player_SprAttrib);
    anda(0b11111100);
    sta(Player_SprAttrib);
    return 0;
    JMP(ExitDeath);
}

int ExitDeath() {
    return 0;
    JMP(FlagpoleSlide);
}

int FlagpoleSlide() {
    lda(((Enemy_ID) + (5)));
    cmp(FlagpoleFlagObject);
    BNE(NoFPObj);
    lda(FlagpoleSoundQueue);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x1010d9f10>
    // <conv.chunks.Comment object at 0x1010da0f0>
    // <conv.chunks.Comment object at 0x1010da210>
    // <conv.chunks.Comment object at 0x1010da360>
    // <conv.chunks.Comment object at 0x1010da480>
    lda(0x0);
    sta(FlagpoleSoundQueue);
    // <conv.chunks.Comment object at 0x1010da600>
    ldy(Player_Y_Position);
    cpy(0x9e);
    BCS(SlidePlayer);
    lda(0x4);
    JMP(SlidePlayer);
}

int SlidePlayer() {
    // <conv.chunks.Comment object at 0x1010da8a0>
    // <conv.chunks.Comment object at 0x1010da930>
    // <conv.chunks.Comment object at 0x1010daae0>
    // <conv.chunks.Comment object at 0x1010dab70>
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}

int NoFPObj() {
    // <conv.chunks.Comment object at 0x1010dad50>
    inc(GameEngineSubroutine);
    return 0;
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1010db050>
    JSR(AutoControlPlayer);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1010db6b0>
    cmp(0xae);
    BCC(ChkStop);
    lda(ScrollLock);
    BEQ(ChkStop);
    // <conv.chunks.Comment object at 0x1010db830>
    // <conv.chunks.Comment object at 0x1010dba10>
    // <conv.chunks.Comment object at 0x1010dbb30>
    lda(EndOfLevelMusic);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x1010dbd70>
    lda(0x0);
    sta(ScrollLock);
    JMP(ChkStop);
}

int ChkStop() {
    // <conv.chunks.Comment object at 0x1010dbef0>
    // <conv.chunks.Comment object at 0x1010e40e0>
    lda(Player_CollisionBits);
    lsr();
    BCS(RdyNextA);
    lda(StarFlagTaskControl);
    BNE(InCastle);
    inc(StarFlagTaskControl);
    JMP(InCastle);
}

int InCastle() {
    // <conv.chunks.Comment object at 0x1010e4290>
    // <conv.chunks.Comment object at 0x1010e4320>
    // <conv.chunks.Comment object at 0x1010e4440>
    // <conv.chunks.Comment object at 0x1010e4560>
    // <conv.chunks.Comment object at 0x1010e4680>
    // <conv.chunks.Comment object at 0x1010e47a0>
    lda(0b100000);
    sta(Player_SprAttrib);
    JMP(RdyNextA);
}

int RdyNextA() {
    lda(StarFlagTaskControl);
    cmp(0x5);
    BNE(ExitNA);
    inc(LevelNumber);
    // <conv.chunks.Comment object at 0x1010e4b30>
    // <conv.chunks.Comment object at 0x1010e4bc0>
    // <conv.chunks.Comment object at 0x1010e4da0>
    lda(LevelNumber);
    cmp(0x3);
    BNE(NextArea);
    ldy(WorldNumber);
    lda(CoinTallyFor1Ups);
    cmp(offsetof(G, Hidden1UpCoinAmts), y);
    BCC(NextArea);
    inc(Hidden1UpFlag);
    JMP(NextArea);
}

int NextArea() {
    // <conv.chunks.Comment object at 0x1010e4fb0>
    // <conv.chunks.Comment object at 0x1010e5040>
    // <conv.chunks.Comment object at 0x1010e51f0>
    // <conv.chunks.Comment object at 0x1010e5310>
    // <conv.chunks.Comment object at 0x1010e5430>
    // <conv.chunks.Comment object at 0x1010e5580>
    // <conv.chunks.Comment object at 0x1010e56a0>
    // <conv.chunks.Comment object at 0x1010e57c0>
    inc(AreaNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    JSR(ChgAreaMode);
    sta(HalfwayPage);
    // <conv.chunks.Comment object at 0x1010e5910>
    // <conv.chunks.Comment object at 0x1010e5a30>
    // <conv.chunks.Comment object at 0x1010e5b50>
    // <conv.chunks.Comment object at 0x1010e5c70>
    lda(Silence);
    sta(EventMusicQueue);
    JMP(ExitNA);
}

int ExitNA() {
    return 0;
    JMP(PlayerMovementSubs);
}

int PlayerMovementSubs() {
    lda(0x0);
    ldy(PlayerSize);
    BNE(SetCrouch);
    lda(Player_State);
    BNE(ProcMove);
    lda(Up_Down_Buttons);
    anda(0b100);
    JMP(SetCrouch);
}

int SetCrouch() {
    // <conv.chunks.Comment object at 0x1010e6120>
    // <conv.chunks.Comment object at 0x1010e61b0>
    // <conv.chunks.Comment object at 0x1010e6360>
    // <conv.chunks.Comment object at 0x1010e6480>
    // <conv.chunks.Comment object at 0x1010e65a0>
    // <conv.chunks.Comment object at 0x1010e66c0>
    // <conv.chunks.Comment object at 0x1010e67e0>
    // <conv.chunks.Comment object at 0x1010e6900>
    sta(CrouchingFlag);
    JMP(ProcMove);
}

int ProcMove() {
    // <conv.chunks.Comment object at 0x1010e6a50>
    JSR(PlayerPhysicsSub);
    lda(PlayerChangeSizeFlag);
    BNE(NoMoveSub);
    // <conv.chunks.Comment object at 0x1010e6ba0>
    // <conv.chunks.Comment object at 0x1010e6cc0>
    lda(Player_State);
    cmp(0x3);
    BEQ(MoveSubs);
    // <conv.chunks.Comment object at 0x1010e6ed0>
    // <conv.chunks.Comment object at 0x1010e6f60>
    ldy(0x18);
    sty(ClimbSideTimer);
    JMP(MoveSubs);
}

int MoveSubs() {
    JMP(NoMoveSub);
}

int NoMoveSub() {
    return 0;
    JMP(OnGroundStateSub);
}

int OnGroundStateSub() {
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x1010e7770>
    // <conv.chunks.Comment object at 0x1010e77d0>
    lda(Left_Right_Buttons);
    BEQ(GndMove);
    sta(PlayerFacingDir);
    JMP(GndMove);
}

int GndMove() {
    // <conv.chunks.Comment object at 0x1010e79e0>
    // <conv.chunks.Comment object at 0x1010e7b30>
    // <conv.chunks.Comment object at 0x1010e7c50>
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x1010e7dd0>
    // <conv.chunks.Comment object at 0x1010e7ef0>
    return 0;
    JMP(FallingSub);
}

int FallingSub() {
    lda(VerticalForceDown);
    sta(VerticalForce);
    JMP(LRAir);
    JMP(JumpSwimSub);
}

int JumpSwimSub() {
    ldy(Player_Y_Speed);
    BPL(DumpFall);
    // <conv.chunks.Comment object at 0x1010ec500>
    // <conv.chunks.Comment object at 0x1010ec620>
    lda(A_B_Buttons);
    anda(A_Button);
    anda(PreviousA_B_Buttons);
    BNE(ProcSwim);
    lda(JumpOrigin_Y_Position);
    // <conv.chunks.Comment object at 0x1010ec830>
    // <conv.chunks.Comment object at 0x1010ec950>
    // <conv.chunks.Comment object at 0x1010eca70>
    // <conv.chunks.Comment object at 0x1010ecb90>
    sec();
    sbc(Player_Y_Position);
    cmp(DiffToHaltJump);
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // <conv.chunks.Comment object at 0x1010ecd40>
    // <conv.chunks.Comment object at 0x1010ece60>
    // <conv.chunks.Comment object at 0x1010ecf80>
    // <conv.chunks.Comment object at 0x1010ed0a0>
    lda(VerticalForceDown);
    sta(VerticalForce);
    JMP(ProcSwim);
}

int ProcSwim() {
    // <conv.chunks.Comment object at 0x1010ed2e0>
    lda(SwimmingFlag);
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x1010ed430>
    // <conv.chunks.Comment object at 0x1010ed580>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(LRWater);
    // <conv.chunks.Comment object at 0x1010ed790>
    // <conv.chunks.Comment object at 0x1010ed820>
    lda(0x18);
    sta(VerticalForce);
    JMP(LRWater);
}

int LRWater() {
    // <conv.chunks.Comment object at 0x1010eda60>
    // <conv.chunks.Comment object at 0x1010edc10>
    lda(Left_Right_Buttons);
    BEQ(LRAir);
    sta(PlayerFacingDir);
    JMP(LRAir);
}

int LRAir() {
    // <conv.chunks.Comment object at 0x1010edd90>
    // <conv.chunks.Comment object at 0x1010edee0>
    // <conv.chunks.Comment object at 0x1010ee000>
    lda(Left_Right_Buttons);
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // <conv.chunks.Comment object at 0x1010ee180>
    // <conv.chunks.Comment object at 0x1010ee2d0>
    // <conv.chunks.Comment object at 0x1010ee3f0>
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x1010ee570>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BNE(ExitMov1);
    // <conv.chunks.Comment object at 0x1010ee780>
    // <conv.chunks.Comment object at 0x1010ee810>
    lda(0x28);
    sta(VerticalForce);
    JMP(ExitMov1);
}

int ExitMov1() {
    // <conv.chunks.Comment object at 0x1010eea20>
    // <conv.chunks.Comment object at 0x1010eebd0>
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda(Player_YMF_Dummy);
    clc();
    adc(Player_Y_MoveForce);
    // <conv.chunks.Comment object at 0x1010ef380>
    // <conv.chunks.Comment object at 0x1010ef410>
    sta(Player_YMF_Dummy);
    ldy(0x0);
    lda(Player_Y_Speed);
    BPL(MoveOnVine);
    dey();
    JMP(MoveOnVine);
}

int MoveOnVine() {
    // <conv.chunks.Comment object at 0x1010ef620>
    // <conv.chunks.Comment object at 0x1010ef6b0>
    // <conv.chunks.Comment object at 0x1010ef860>
    // <conv.chunks.Comment object at 0x1010ef9b0>
    // <conv.chunks.Comment object at 0x1010efa40>
    sty(0x0);
    adc(Player_Y_Position);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1010efb30>
    // <conv.chunks.Comment object at 0x1010efcb0>
    lda(Player_Y_HighPos);
    adc(0x0);
    sta(Player_Y_HighPos);
    lda(Left_Right_Buttons);
    anda(Player_CollisionBits);
    BEQ(InitCSTimer);
    ldy(ClimbSideTimer);
    BNE(ExitCSub);
    // <conv.chunks.Comment object at 0x1010efef0>
    // <conv.chunks.Comment object at 0x1010eff80>
    // <conv.chunks.Comment object at 0x1010fc140>
    // <conv.chunks.Comment object at 0x1010fc260>
    // <conv.chunks.Comment object at 0x1010fc380>
    // <conv.chunks.Comment object at 0x1010fc4a0>
    // <conv.chunks.Comment object at 0x1010fc5c0>
    ldy(0x18);
    sty(ClimbSideTimer);
    ldx(0x0);
    ldy(PlayerFacingDir);
    lsr();
    BCS(ClimbFD);
    // <conv.chunks.Comment object at 0x1010fc740>
    // <conv.chunks.Comment object at 0x1010fc8f0>
    // <conv.chunks.Comment object at 0x1010fc980>
    // <conv.chunks.Comment object at 0x1010fcb60>
    // <conv.chunks.Comment object at 0x1010fcbf0>
    inx();
    inx();
    JMP(ClimbFD);
}

int ClimbFD() {
    // <conv.chunks.Comment object at 0x1010fce00>
    // <conv.chunks.Comment object at 0x1010fce90>
    dey();
    BEQ(CSetFDir);
    inx();
    JMP(CSetFDir);
}

int CSetFDir() {
    lda(Player_X_Position);
    clc();
    adc(offsetof(G, ClimbAdderLow), x);
    // <conv.chunks.Comment object at 0x1010fd2e0>
    // <conv.chunks.Comment object at 0x1010fd370>
    sta(Player_X_Position);
    lda(Player_PageLoc);
    adc(offsetof(G, ClimbAdderHigh), x);
    // <conv.chunks.Comment object at 0x1010fd5b0>
    // <conv.chunks.Comment object at 0x1010fd6d0>
    sta(Player_PageLoc);
    lda(Left_Right_Buttons);
    eor(0b11);
    sta(PlayerFacingDir);
    JMP(ExitCSub);
}

int ExitCSub() {
    // <conv.chunks.Comment object at 0x1010fd910>
    // <conv.chunks.Comment object at 0x1010fda30>
    // <conv.chunks.Comment object at 0x1010fdb50>
    // <conv.chunks.Comment object at 0x1010fdc70>
    return 0;
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // <conv.chunks.Comment object at 0x1010fdd60>
    sta(ClimbSideTimer);
    return 0;
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x1010ff4d0>
    cmp(0x3);
    BNE(CheckForJumping);
    // <conv.chunks.Comment object at 0x1010ffbf0>
    ldy(0x0);
    lda(Up_Down_Buttons);
    anda(Player_CollisionBits);
    BEQ(ProcClimb);
    // <conv.chunks.Comment object at 0x1010ffe00>
    // <conv.chunks.Comment object at 0x1010fffb0>
    // <conv.chunks.Comment object at 0x101108110>
    iny();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x1011082c0>
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // <conv.chunks.Comment object at 0x101108560>
    ldx(offsetof(G, Climb_Y_MForceData), y);
    stx(Player_Y_MoveForce);
    lda(0x8);
    ldx(offsetof(G, Climb_Y_SpeedData), y);
    stx(Player_Y_Speed);
    BMI(SetCAnim);
    lsr();
    JMP(SetCAnim);
}

int SetCAnim() {
    // <conv.chunks.Comment object at 0x1011086e0>
    // <conv.chunks.Comment object at 0x101108800>
    // <conv.chunks.Comment object at 0x101108890>
    // <conv.chunks.Comment object at 0x101108a70>
    // <conv.chunks.Comment object at 0x101108b90>
    // <conv.chunks.Comment object at 0x101108ce0>
    // <conv.chunks.Comment object at 0x101108d70>
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda(JumpspringAnimCtrl);
    BNE(NoJump);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x101108f80>
    // <conv.chunks.Comment object at 0x1011090a0>
    // <conv.chunks.Comment object at 0x1011091f0>
    anda(A_Button);
    BEQ(NoJump);
    anda(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x101109400>
    // <conv.chunks.Comment object at 0x101109550>
    BEQ(ProcJumping);
    JMP(NoJump);
}

int NoJump() {
    // <conv.chunks.Comment object at 0x101109760>
    JMP(X_Physics);
    JMP(ProcJumping);
}

int ProcJumping() {
    lda(Player_State);
    BEQ(InitJS);
    lda(SwimmingFlag);
    BEQ(NoJump);
    lda(JumpSwimTimer);
    // <conv.chunks.Comment object at 0x101109910>
    // <conv.chunks.Comment object at 0x101109a30>
    // <conv.chunks.Comment object at 0x101109b80>
    // <conv.chunks.Comment object at 0x101109ca0>
    // <conv.chunks.Comment object at 0x101109df0>
    BNE(InitJS);
    lda(Player_Y_Speed);
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // <conv.chunks.Comment object at 0x10110a030>
    // <conv.chunks.Comment object at 0x10110a150>
    // <conv.chunks.Comment object at 0x10110a2a0>
    // <conv.chunks.Comment object at 0x10110a3c0>
    lda(0x20);
    sta(JumpSwimTimer);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10110a630>
    sty(Player_YMF_Dummy);
    sty(Player_Y_MoveForce);
    lda(Player_Y_HighPos);
    sta(JumpOrigin_Y_HighPos);
    // <conv.chunks.Comment object at 0x10110a930>
    // <conv.chunks.Comment object at 0x10110aa50>
    lda(Player_Y_Position);
    sta(JumpOrigin_Y_Position);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10110ad50>
    sta(Player_State);
    lda(Player_XSpeedAbsolute);
    // <conv.chunks.Comment object at 0x10110af60>
    cmp(0x9);
    BCC(ChkWtr);
    iny();
    // <conv.chunks.Comment object at 0x10110b0e0>
    // <conv.chunks.Comment object at 0x10110b2f0>
    cmp(0x10);
    BCC(ChkWtr);
    iny();
    cmp(0x19);
    BCC(ChkWtr);
    iny();
    cmp(0x1c);
    BCC(ChkWtr);
    // <conv.chunks.Comment object at 0x10110b920>
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // <conv.chunks.Comment object at 0x10110bb90>
    lda(0x1);
    sta(DiffToHaltJump);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x10110be00>
    BEQ(GetYPhy);
    ldy(0x5);
    lda(Whirlpool_Flag);
    // <conv.chunks.Comment object at 0x101110080>
    // <conv.chunks.Comment object at 0x101110110>
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // <conv.chunks.Comment object at 0x101110410>
    // <conv.chunks.Comment object at 0x1011104a0>
    lda(offsetof(G, JumpMForceData), y);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x101110650>
    lda(offsetof(G, FallMForceData), y);
    sta(VerticalForceDown);
    lda(offsetof(G, InitMForceData), y);
    sta(Player_Y_MoveForce);
    lda(offsetof(G, PlayerYSpdData), y);
    sta(Player_Y_Speed);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x101110da0>
    BEQ(PJumpSnd);
    lda(Sfx_EnemyStomp);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x101110fb0>
    // <conv.chunks.Comment object at 0x1011110d0>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(X_Physics);
    lda(0x0);
    sta(Player_Y_Speed);
    JMP(X_Physics);
    JMP(PJumpSnd);
}

int PJumpSnd() {
    // <conv.chunks.Comment object at 0x1011112e0>
    // <conv.chunks.Comment object at 0x101111370>
    // <conv.chunks.Comment object at 0x101111520>
    // <conv.chunks.Comment object at 0x1011115b0>
    // <conv.chunks.Comment object at 0x101111760>
    // <conv.chunks.Comment object at 0x101111880>
    lda(Sfx_BigJump);
    ldy(PlayerSize);
    // <conv.chunks.Comment object at 0x1011119d0>
    BEQ(SJumpSnd);
    lda(Sfx_SmallJump);
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // <conv.chunks.Comment object at 0x101111be0>
    // <conv.chunks.Comment object at 0x101111d00>
    sta(Square1SoundQueue);
    JMP(X_Physics);
}

int X_Physics() {
    ldy(0x0);
    sty(0x0);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x101111fa0>
    // <conv.chunks.Comment object at 0x101112030>
    BEQ(ProcPRun);
    lda(Player_XSpeedAbsolute);
    cmp(0x19);
    BCS(GetXPhy);
    BCC(ChkRFast);
    JMP(ProcPRun);
}

int ProcPRun() {
    // <conv.chunks.Comment object at 0x1011122a0>
    // <conv.chunks.Comment object at 0x1011123c0>
    // <conv.chunks.Comment object at 0x101112450>
    // <conv.chunks.Comment object at 0x101112630>
    // <conv.chunks.Comment object at 0x101112750>
    iny();
    lda(AreaType);
    BEQ(ChkRFast);
    dey();
    lda(Left_Right_Buttons);
    cmp(Player_MovingDir);
    BNE(ChkRFast);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x101112840>
    // <conv.chunks.Comment object at 0x101112960>
    // <conv.chunks.Comment object at 0x101112ab0>
    // <conv.chunks.Comment object at 0x101112b40>
    // <conv.chunks.Comment object at 0x101112c60>
    // <conv.chunks.Comment object at 0x101112d80>
    // <conv.chunks.Comment object at 0x101112ea0>
    anda(B_Button);
    BNE(SetRTmr);
    lda(RunningTimer);
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // <conv.chunks.Comment object at 0x1011130b0>
    // <conv.chunks.Comment object at 0x101113200>
    // <conv.chunks.Comment object at 0x101113320>
    // <conv.chunks.Comment object at 0x101113470>
    iny();
    inc(0x0);
    // <conv.chunks.Comment object at 0x101113590>
    lda(RunningSpeed);
    BNE(FastXSp);
    // <conv.chunks.Comment object at 0x101113770>
    lda(Player_XSpeedAbsolute);
    cmp(0x21);
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // <conv.chunks.Comment object at 0x1011139b0>
    // <conv.chunks.Comment object at 0x101113a40>
    // <conv.chunks.Comment object at 0x101113c20>
    inc(0x0);
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // <conv.chunks.Comment object at 0x101113d40>
    // <conv.chunks.Comment object at 0x101113ef0>
    lda(0xa);
    sta(RunningTimer);
    JMP(GetXPhy);
}

int GetXPhy() {
    // <conv.chunks.Comment object at 0x1011181a0>
    lda(offsetof(G, MaxLeftXSpdData), y);
    sta(MaximumLeftSpeed);
    lda(GameEngineSubroutine);
    cmp(0x7);
    BNE(GetXPhy2);
    ldy(0x3);
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // <conv.chunks.Comment object at 0x101118440>
    // <conv.chunks.Comment object at 0x101118560>
    // <conv.chunks.Comment object at 0x1011185f0>
    // <conv.chunks.Comment object at 0x1011187a0>
    // <conv.chunks.Comment object at 0x101118830>
    lda(offsetof(G, MaxRightXSpdData), y);
    sta(MaximumRightSpeed);
    ldy(0x0);
    lda(offsetof(G, FrictionData), y);
    // <conv.chunks.Comment object at 0x101118b60>
    // <conv.chunks.Comment object at 0x101118bf0>
    sta(FrictionAdderLow);
    lda(0x0);
    sta(FrictionAdderHigh);
    // <conv.chunks.Comment object at 0x101118ef0>
    lda(PlayerFacingDir);
    cmp(Player_MovingDir);
    BEQ(ExitPhy);
    asl(FrictionAdderLow);
    rol(FrictionAdderHigh);
    JMP(ExitPhy);
}

int ExitPhy() {
    // <conv.chunks.Comment object at 0x101119190>
    // <conv.chunks.Comment object at 0x1011192b0>
    // <conv.chunks.Comment object at 0x101119400>
    // <conv.chunks.Comment object at 0x101119520>
    // <conv.chunks.Comment object at 0x101119640>
    return 0;
    JMP(GetPlayerAnimSpeed);
}

int GetPlayerAnimSpeed() {
    ldy(0x0);
    lda(Player_XSpeedAbsolute);
    cmp(0x1c);
    BCS(SetRunSpd);
    iny();
    cmp(0xe);
    BCS(ChkSkid);
    iny();
    JMP(ChkSkid);
}

int ChkSkid() {
    // <conv.chunks.Comment object at 0x101119820>
    // <conv.chunks.Comment object at 0x101119880>
    // <conv.chunks.Comment object at 0x101119be0>
    // <conv.chunks.Comment object at 0x101119c70>
    // <conv.chunks.Comment object at 0x101119e50>
    // <conv.chunks.Comment object at 0x101119ee0>
    // <conv.chunks.Comment object at 0x101119f70>
    // <conv.chunks.Comment object at 0x10111a180>
    // <conv.chunks.Comment object at 0x10111a210>
    lda(SavedJoypadBits);
    anda(0b1111111);
    BEQ(SetAnimSpd);
    anda(0x3);
    cmp(Player_MovingDir);
    BNE(ProcSkid);
    lda(0x0);
    JMP(SetRunSpd);
}

int SetRunSpd() {
    // <conv.chunks.Comment object at 0x10111a390>
    // <conv.chunks.Comment object at 0x10111a4b0>
    // <conv.chunks.Comment object at 0x10111a5d0>
    // <conv.chunks.Comment object at 0x10111a660>
    // <conv.chunks.Comment object at 0x10111a810>
    // <conv.chunks.Comment object at 0x10111a930>
    // <conv.chunks.Comment object at 0x10111a9c0>
    sta(RunningSpeed);
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // <conv.chunks.Comment object at 0x10111ac90>
    lda(Player_XSpeedAbsolute);
    cmp(0xb);
    BCS(SetAnimSpd);
    // <conv.chunks.Comment object at 0x10111ade0>
    // <conv.chunks.Comment object at 0x10111ae70>
    lda(PlayerFacingDir);
    sta(Player_MovingDir);
    // <conv.chunks.Comment object at 0x10111b110>
    lda(0x0);
    sta(Player_X_Speed);
    sta(Player_X_MoveForce);
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // <conv.chunks.Comment object at 0x10111b290>
    // <conv.chunks.Comment object at 0x10111b440>
    // <conv.chunks.Comment object at 0x10111b560>
    lda(offsetof(G, PlayerAnimTmrData), y);
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda(Player_CollisionBits);
    cmp(0x0);
    BNE(JoypFrict);
    // <conv.chunks.Comment object at 0x10111b8c0>
    // <conv.chunks.Comment object at 0x10111b9e0>
    // <conv.chunks.Comment object at 0x10111ba70>
    lda(Player_X_Speed);
    BEQ(SetAbsSpd);
    BPL(RghtFrict);
    BMI(LeftFrict);
    JMP(JoypFrict);
}

int JoypFrict() {
    // <conv.chunks.Comment object at 0x10111bd10>
    // <conv.chunks.Comment object at 0x10111be30>
    // <conv.chunks.Comment object at 0x10111bf50>
    // <conv.chunks.Comment object at 0x10112c0b0>
    lsr();
    BCC(RghtFrict);
    JMP(LeftFrict);
}

int LeftFrict() {
    // <conv.chunks.Comment object at 0x10112c1a0>
    // <conv.chunks.Comment object at 0x10112c2c0>
    lda(Player_X_MoveForce);
    clc();
    adc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x10112c4a0>
    // <conv.chunks.Comment object at 0x10112c5c0>
    lda(Player_X_Speed);
    adc(FrictionAdderHigh);
    sta(Player_X_Speed);
    cmp(MaximumRightSpeed);
    BMI(XSpdSign);
    lda(MaximumRightSpeed);
    sta(Player_X_Speed);
    JMP(SetAbsSpd);
    JMP(RghtFrict);
}

int RghtFrict() {
    // <conv.chunks.Comment object at 0x10112c7d0>
    // <conv.chunks.Comment object at 0x10112c8f0>
    // <conv.chunks.Comment object at 0x10112ca10>
    // <conv.chunks.Comment object at 0x10112cb30>
    // <conv.chunks.Comment object at 0x10112cc50>
    // <conv.chunks.Comment object at 0x10112cd70>
    // <conv.chunks.Comment object at 0x10112ce90>
    // <conv.chunks.Comment object at 0x10112cfb0>
    lda(Player_X_MoveForce);
    sec();
    sbc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x10112d190>
    // <conv.chunks.Comment object at 0x10112d2b0>
    lda(Player_X_Speed);
    sbc(FrictionAdderHigh);
    sta(Player_X_Speed);
    cmp(MaximumLeftSpeed);
    BPL(XSpdSign);
    lda(MaximumLeftSpeed);
    sta(Player_X_Speed);
    JMP(XSpdSign);
}

int XSpdSign() {
    // <conv.chunks.Comment object at 0x10112d4c0>
    // <conv.chunks.Comment object at 0x10112d5e0>
    // <conv.chunks.Comment object at 0x10112d700>
    // <conv.chunks.Comment object at 0x10112d820>
    // <conv.chunks.Comment object at 0x10112d940>
    // <conv.chunks.Comment object at 0x10112da60>
    // <conv.chunks.Comment object at 0x10112db80>
    cmp(0x0);
    BPL(SetAbsSpd);
    // <conv.chunks.Comment object at 0x10112dc40>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // <conv.chunks.Comment object at 0x10112df10>
    // <conv.chunks.Comment object at 0x10112dfa0>
    // <conv.chunks.Comment object at 0x10112e030>
    sta(Player_XSpeedAbsolute);
    return 0;
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x10112e2d0>
    // <conv.chunks.Comment object at 0x10112e330>
    // <conv.chunks.Comment object at 0x10112e390>
    cmp(0x2);
    BCC(ProcAirBubbles);
    // <conv.chunks.Comment object at 0x10112e510>
    lda(A_B_Buttons);
    anda(B_Button);
    BEQ(ProcFireballs);
    // <conv.chunks.Comment object at 0x10112e7b0>
    // <conv.chunks.Comment object at 0x10112e8d0>
    anda(PreviousA_B_Buttons);
    BNE(ProcFireballs);
    lda(FireballCounter);
    anda(0b1);
    // <conv.chunks.Comment object at 0x10112eae0>
    // <conv.chunks.Comment object at 0x10112ec00>
    // <conv.chunks.Comment object at 0x10112ed20>
    tax();
    lda(Fireball_State, x);
    BNE(ProcFireballs);
    ldy(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x10112eed0>
    // <conv.chunks.Comment object at 0x10112f020>
    // <conv.chunks.Comment object at 0x10112f140>
    dey();
    BNE(ProcFireballs);
    lda(CrouchingFlag);
    // <conv.chunks.Comment object at 0x10112f3e0>
    BNE(ProcFireballs);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x10112f5f0>
    cmp(0x3);
    BEQ(ProcFireballs);
    lda(Sfx_Fireball);
    // <conv.chunks.Comment object at 0x10112f8f0>
    sta(Square1SoundQueue);
    lda(0x2);
    // <conv.chunks.Comment object at 0x10112fb00>
    sta(Fireball_State, x);
    ldy(PlayerAnimTimerSet);
    sty(FireballThrowingTimer);
    // <conv.chunks.Comment object at 0x10112fd40>
    // <conv.chunks.Comment object at 0x10112fe60>
    dey();
    sty(PlayerAnimTimer);
    inc(FireballCounter);
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(0x0);
    JSR(FireballObjCore);
    // <conv.chunks.Comment object at 0x101134320>
    ldx(0x1);
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda(AreaType);
    // <conv.chunks.Comment object at 0x101134710>
    BNE(BublExit);
    ldx(0x2);
    JMP(BublLoop);
}

int BublLoop() {
    // <conv.chunks.Comment object at 0x101134920>
    // <conv.chunks.Comment object at 0x1011349b0>
    stx(ObjectOffset);
    JSR(BubbleCheck);
    JSR(RelativeBubblePosition);
    JSR(GetBubbleOffscreenBits);
    JSR(DrawBubble);
    // <conv.chunks.Comment object at 0x101134b90>
    // <conv.chunks.Comment object at 0x101134cb0>
    // <conv.chunks.Comment object at 0x101134dd0>
    // <conv.chunks.Comment object at 0x101134ef0>
    dex();
    BPL(BublLoop);
    JMP(BublExit);
}

int BublExit() {
    // <conv.chunks.Comment object at 0x1011350a0>
    // <conv.chunks.Comment object at 0x1011351c0>
    return 0;
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx(ObjectOffset);
    lda(Fireball_State, x);
    // <conv.chunks.Comment object at 0x101135340>
    // <conv.chunks.Comment object at 0x101135550>
    asl();
    BCS(FireballExplosion);
    ldy(Fireball_State, x);
    // <conv.chunks.Comment object at 0x101135730>
    // <conv.chunks.Comment object at 0x101135850>
    BEQ(NoFBall);
    dey();
    // <conv.chunks.Comment object at 0x101135af0>
    BEQ(RunFB);
    lda(Player_X_Position);
    adc(0x4);
    // <conv.chunks.Comment object at 0x101135ca0>
    // <conv.chunks.Comment object at 0x101135dc0>
    sta(Fireball_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x101136000>
    // <conv.chunks.Comment object at 0x101136120>
    sta(Fireball_PageLoc, x);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x101136360>
    sta(Fireball_Y_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1011365a0>
    sta(Fireball_Y_HighPos, x);
    ldy(PlayerFacingDir);
    dey();
    lda(offsetof(G, FireballXSpdData), y);
    // <conv.chunks.Comment object at 0x1011367e0>
    // <conv.chunks.Comment object at 0x101136930>
    // <conv.chunks.Comment object at 0x1011369c0>
    sta(Fireball_X_Speed, x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x101136c30>
    sta(Fireball_Y_Speed, x);
    lda(0x7);
    sta(Fireball_BoundBoxCtrl, x);
    dec(Fireball_State, x);
    JMP(RunFB);
}

int RunFB() {
    // <conv.chunks.Comment object at 0x101136ed0>
    // <conv.chunks.Comment object at 0x1011370b0>
    // <conv.chunks.Comment object at 0x101137200>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x101137350>
    adc(0x7);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x101137560>
    sta(0x0);
    lda(0x3);
    // <conv.chunks.Comment object at 0x1011375f0>
    sta(0x2);
    lda(0x0);
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx(ObjectOffset);
    JSR(RelativeFireballPosition);
    JSR(GetFireballOffscreenBits);
    JSR(GetFireballBoundBox);
    JSR(FireballBGCollision);
    lda(FBall_OffscreenBits);
    anda(0b11001100);
    BNE(EraseFB);
    JSR(FireballEnemyCollision);
    JMP(DrawFireball);
    JMP(EraseFB);
}

int EraseFB() {
    // <conv.chunks.Comment object at 0x1011379e0>
    // <conv.chunks.Comment object at 0x101137b90>
    // <conv.chunks.Comment object at 0x101137cb0>
    // <conv.chunks.Comment object at 0x101137dd0>
    // <conv.chunks.Comment object at 0x101137ef0>
    // <conv.chunks.Comment object at 0x10113c050>
    // <conv.chunks.Comment object at 0x10113c170>
    // <conv.chunks.Comment object at 0x10113c290>
    // <conv.chunks.Comment object at 0x10113c3b0>
    // <conv.chunks.Comment object at 0x10113c4d0>
    // <conv.chunks.Comment object at 0x10113c620>
    // <conv.chunks.Comment object at 0x10113c740>
    // <conv.chunks.Comment object at 0x10113c860>
    lda(0x0);
    sta(Fireball_State, x);
    JMP(NoFBall);
}

int NoFBall() {
    // <conv.chunks.Comment object at 0x10113cb30>
    return 0;
    JMP(FireballExplosion);
}

int FireballExplosion() {
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
    JMP(BubbleCheck);
}

int BubbleCheck() {
    lda(((PseudoRandomBitReg) + (1)), x);
    // <conv.chunks.Comment object at 0x10113ce90>
    anda(0x1);
    sta(0x7);
    lda(Bubble_Y_Position, x);
    cmp(0xf8);
    BNE(MoveBubl);
    lda(AirBubbleTimer);
    BNE(ExitBubl);
    JMP(SetupBubble);
}

int SetupBubble() {
    ldy(0x0);
    lda(PlayerFacingDir);
    lsr();
    BCC(PosBubl);
    ldy(0x8);
    JMP(PosBubl);
}

int PosBubl() {
    // <conv.chunks.Comment object at 0x10113d8b0>
    // <conv.chunks.Comment object at 0x10113d940>
    // <conv.chunks.Comment object at 0x10113db20>
    // <conv.chunks.Comment object at 0x10113dbb0>
    // <conv.chunks.Comment object at 0x10113dd00>
    // <conv.chunks.Comment object at 0x10113dd90>
    tya();
    adc(Player_X_Position);
    sta(Bubble_X_Position, x);
    // <conv.chunks.Comment object at 0x10113df40>
    // <conv.chunks.Comment object at 0x10113e060>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Bubble_PageLoc, x);
    // <conv.chunks.Comment object at 0x10113e2a0>
    // <conv.chunks.Comment object at 0x10113e330>
    lda(Player_Y_Position);
    clc();
    // <conv.chunks.Comment object at 0x10113e630>
    adc(0x8);
    sta(Bubble_Y_Position, x);
    // <conv.chunks.Comment object at 0x10113e720>
    lda(0x1);
    sta(Bubble_Y_HighPos, x);
    ldy(0x7);
    lda(offsetof(G, BubbleTimerData), y);
    sta(AirBubbleTimer);
    JMP(MoveBubl);
}

int MoveBubl() {
    // <conv.chunks.Comment object at 0x10113e960>
    // <conv.chunks.Comment object at 0x10113eb70>
    // <conv.chunks.Comment object at 0x10113ec00>
    // <conv.chunks.Comment object at 0x10113edb0>
    // <conv.chunks.Comment object at 0x10113eed0>
    ldy(0x7);
    lda(Bubble_YMF_Dummy, x);
    sec();
    // <conv.chunks.Comment object at 0x10113f170>
    sbc(offsetof(G, Bubble_MForceData), y);
    sta(Bubble_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x10113f320>
    lda(Bubble_Y_Position, x);
    sbc(0x0);
    cmp(0x20);
    BCS(Y_Bubl);
    lda(0xf8);
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // <conv.chunks.Comment object at 0x10113f590>
    // <conv.chunks.Comment object at 0x10113f620>
    // <conv.chunks.Comment object at 0x10113f740>
    // <conv.chunks.Comment object at 0x10113f920>
    // <conv.chunks.Comment object at 0x10113f9b0>
    sta(Bubble_Y_Position, x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // <conv.chunks.Comment object at 0x10113fc20>
    return 0;
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda(OperMode);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x10113fda0>
    // <conv.chunks.Comment object at 0x101148170>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BCC(ExGTimer);
    cmp(0xb);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x101148380>
    // <conv.chunks.Comment object at 0x101148410>
    // <conv.chunks.Comment object at 0x1011485c0>
    // <conv.chunks.Comment object at 0x101148650>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BCS(ExGTimer);
    lda(GameTimerCtrlTimer);
    BNE(ExGTimer);
    // <conv.chunks.Comment object at 0x1011488f0>
    // <conv.chunks.Comment object at 0x101148980>
    // <conv.chunks.Comment object at 0x101148b30>
    // <conv.chunks.Comment object at 0x101148c50>
    lda(GameTimerDisplay);
    ora(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x101148e60>
    ora(((GameTimerDisplay) + (2)));
    BEQ(TimeUpOn);
    ldy(GameTimerDisplay);
    dey();
    BNE(ResGTCtrl);
    lda(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x1011491f0>
    // <conv.chunks.Comment object at 0x101149310>
    // <conv.chunks.Comment object at 0x101149460>
    // <conv.chunks.Comment object at 0x1011494f0>
    // <conv.chunks.Comment object at 0x101149610>
    ora(((GameTimerDisplay) + (2)));
    BNE(ResGTCtrl);
    // <conv.chunks.Comment object at 0x1011499a0>
    lda(TimeRunningOutMusic);
    sta(EventMusicQueue);
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // <conv.chunks.Comment object at 0x101149bb0>
    // <conv.chunks.Comment object at 0x101149cd0>
    lda(0x18);
    sta(GameTimerCtrlTimer);
    ldy(0x23);
    lda(0xff);
    // <conv.chunks.Comment object at 0x101149f10>
    // <conv.chunks.Comment object at 0x101149fa0>
    sta(((DigitModifier) + (5)));
    JSR(DigitsMathRoutine);
    lda(0xa4);
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // <conv.chunks.Comment object at 0x10114a300>
    // <conv.chunks.Comment object at 0x10114a420>
    // <conv.chunks.Comment object at 0x10114a4b0>
    // <conv.chunks.Comment object at 0x10114a660>
    sta(PlayerStatus);
    JSR(ForceInjury);
    inc(GameTimerExpiredFlag);
    JMP(ExGTimer);
}

int ExGTimer() {
    // <conv.chunks.Comment object at 0x10114a7b0>
    // <conv.chunks.Comment object at 0x10114a8d0>
    // <conv.chunks.Comment object at 0x10114aa20>
    return 0;
    JMP(WarpZoneObject);
}

int WarpZoneObject() {
    lda(ScrollLock);
    BEQ(ExGTimer);
    lda(Player_Y_Position);
    anda(Player_Y_HighPos);
    BNE(ExGTimer);
    sta(ScrollLock);
    inc(WarpZoneControl);
    JMP(EraseEnemyObject);
    JMP(ProcessWhirlpools);
}

int ProcessWhirlpools() {
    lda(AreaType);
    BNE(ExitWh);
    sta(Whirlpool_Flag);
    lda(TimerControl);
    BNE(ExitWh);
    ldy(0x4);
    JMP(WhLoop);
}

int WhLoop() {
    // <conv.chunks.Comment object at 0x10114b5f0>
    // <conv.chunks.Comment object at 0x10114b710>
    // <conv.chunks.Comment object at 0x10114b860>
    // <conv.chunks.Comment object at 0x10114b980>
    // <conv.chunks.Comment object at 0x10114baa0>
    // <conv.chunks.Comment object at 0x10114bbf0>
    // <conv.chunks.Comment object at 0x10114bc80>
    lda(Whirlpool_LeftExtent, y);
    clc();
    adc(Whirlpool_Length, y);
    sta(0x2);
    lda(Whirlpool_PageLoc, y);
    BEQ(NextWh);
    adc(0x0);
    sta(0x1);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x10114bf50>
    // <conv.chunks.Comment object at 0x101154110>
    // <conv.chunks.Comment object at 0x1011541a0>
    // <conv.chunks.Comment object at 0x101154350>
    // <conv.chunks.Comment object at 0x1011544a0>
    // <conv.chunks.Comment object at 0x1011545f0>
    // <conv.chunks.Comment object at 0x101154680>
    sec();
    sbc(Whirlpool_LeftExtent, y);
    lda(Player_PageLoc);
    sbc(Whirlpool_PageLoc, y);
    BMI(NextWh);
    lda(0x2);
    // <conv.chunks.Comment object at 0x101154890>
    // <conv.chunks.Comment object at 0x1011549e0>
    // <conv.chunks.Comment object at 0x101154b00>
    // <conv.chunks.Comment object at 0x101154c50>
    // <conv.chunks.Comment object at 0x101154dd0>
    sec();
    sbc(Player_X_Position);
    lda(0x1);
    sbc(Player_PageLoc);
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}

int NextWh() {
    // <conv.chunks.Comment object at 0x101154f50>
    // <conv.chunks.Comment object at 0x1011550a0>
    // <conv.chunks.Comment object at 0x101155130>
    // <conv.chunks.Comment object at 0x1011552b0>
    // <conv.chunks.Comment object at 0x1011553d0>
    dey();
    BPL(WhLoop);
    JMP(ExitWh);
}

int ExitWh() {
    // <conv.chunks.Comment object at 0x1011554f0>
    // <conv.chunks.Comment object at 0x101155670>
    return 0;
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda(Whirlpool_Length, y);
    lsr();
    sta(0x0);
    lda(Whirlpool_LeftExtent, y);
    // <conv.chunks.Comment object at 0x1011557c0>
    // <conv.chunks.Comment object at 0x101155940>
    // <conv.chunks.Comment object at 0x101155a00>
    // <conv.chunks.Comment object at 0x101155a90>
    clc();
    adc(0x0);
    sta(0x1);
    lda(Whirlpool_PageLoc, y);
    adc(0x0);
    sta(0x0);
    lda(FrameCounter);
    lsr();
    BCC(WhPull);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101155d00>
    // <conv.chunks.Comment object at 0x101155cd0>
    // <conv.chunks.Comment object at 0x101155eb0>
    // <conv.chunks.Comment object at 0x101156060>
    // <conv.chunks.Comment object at 0x1011561b0>
    // <conv.chunks.Comment object at 0x101156240>
    // <conv.chunks.Comment object at 0x1011563f0>
    // <conv.chunks.Comment object at 0x101156480>
    // <conv.chunks.Comment object at 0x101156600>
    sec();
    sbc(Player_X_Position);
    lda(0x0);
    sbc(Player_PageLoc);
    BPL(LeftWh);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x101156780>
    // <conv.chunks.Comment object at 0x1011568d0>
    // <conv.chunks.Comment object at 0x101156960>
    // <conv.chunks.Comment object at 0x101156ae0>
    // <conv.chunks.Comment object at 0x101156c30>
    sec();
    sbc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x101156de0>
    // <conv.chunks.Comment object at 0x101156e70>
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // <conv.chunks.Comment object at 0x101157110>
    // <conv.chunks.Comment object at 0x1011571a0>
    // <conv.chunks.Comment object at 0x101157380>
    lda(Player_CollisionBits);
    lsr();
    BCC(WhPull);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x101157530>
    // <conv.chunks.Comment object at 0x1011575c0>
    // <conv.chunks.Comment object at 0x101157710>
    clc();
    adc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x1011578c0>
    // <conv.chunks.Comment object at 0x101157950>
    lda(Player_PageLoc);
    adc(0x0);
    JMP(SetPWh);
}

int SetPWh() {
    // <conv.chunks.Comment object at 0x101157bf0>
    // <conv.chunks.Comment object at 0x101157c80>
    sta(Player_PageLoc);
    JMP(WhPull);
}

int WhPull() {
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10115c050>
    lda(0x1);
    sta(Whirlpool_Flag);
    sta(0x2);
    // <conv.chunks.Comment object at 0x10115c1a0>
    // <conv.chunks.Comment object at 0x10115c380>
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(0x5);
    stx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10115c800>
    // <conv.chunks.Comment object at 0x10115c860>
    lda(Enemy_ID, x);
    cmp(FlagpoleFlagObject);
    BNE(ExitFlagP);
    // <conv.chunks.Comment object at 0x10115d0a0>
    // <conv.chunks.Comment object at 0x10115d1c0>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BNE(SkipScore);
    // <conv.chunks.Comment object at 0x10115d3d0>
    // <conv.chunks.Comment object at 0x10115d460>
    lda(Player_State);
    cmp(0x3);
    BNE(SkipScore);
    lda(Enemy_Y_Position, x);
    cmp(0xaa);
    BCS(GiveFPScr);
    lda(Player_Y_Position);
    cmp(0xa2);
    BCS(GiveFPScr);
    // <conv.chunks.Comment object at 0x10115d700>
    // <conv.chunks.Comment object at 0x10115d790>
    // <conv.chunks.Comment object at 0x10115d940>
    // <conv.chunks.Comment object at 0x10115da90>
    // <conv.chunks.Comment object at 0x10115db20>
    // <conv.chunks.Comment object at 0x10115dcd0>
    // <conv.chunks.Comment object at 0x10115ddf0>
    // <conv.chunks.Comment object at 0x10115de80>
    lda(Enemy_YMF_Dummy, x);
    adc(0xff);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x1);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10115e150>
    // <conv.chunks.Comment object at 0x10115e1e0>
    // <conv.chunks.Comment object at 0x10115e3c0>
    // <conv.chunks.Comment object at 0x10115e510>
    // <conv.chunks.Comment object at 0x10115e5a0>
    lda(FlagpoleFNum_YMFDummy);
    sec();
    // <conv.chunks.Comment object at 0x10115e8a0>
    sbc(0xff);
    sta(FlagpoleFNum_YMFDummy);
    // <conv.chunks.Comment object at 0x10115e990>
    lda(FlagpoleFNum_Y_Pos);
    sbc(0x1);
    sta(FlagpoleFNum_Y_Pos);
    JMP(SkipScore);
}

int SkipScore() {
    // <conv.chunks.Comment object at 0x10115ec30>
    // <conv.chunks.Comment object at 0x10115ecc0>
    // <conv.chunks.Comment object at 0x10115ee70>
    JMP(FPGfx);
    JMP(GiveFPScr);
}

int GiveFPScr() {
    // <conv.chunks.Comment object at 0x10115eff0>
    ldy(FlagpoleScore);
    lda(offsetof(G, FlagpoleScoreMods), y);
    ldx(offsetof(G, FlagpoleScoreDigits), y);
    sta(DigitModifier, x);
    JSR(AddToScore);
    // <conv.chunks.Comment object at 0x10115f140>
    // <conv.chunks.Comment object at 0x10115f290>
    // <conv.chunks.Comment object at 0x10115f3e0>
    // <conv.chunks.Comment object at 0x10115f530>
    lda(0x5);
    sta(GameEngineSubroutine);
    JMP(FPGfx);
}

int FPGfx() {
    // <conv.chunks.Comment object at 0x10115f6b0>
    // <conv.chunks.Comment object at 0x10115f860>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(FlagpoleGfxHandler);
    JMP(ExitFlagP);
}

int ExitFlagP() {
    return 0;
    JMP(JumpspringHandler);
}

int JumpspringHandler() {
    JSR(GetEnemyOffscreenBits);
    lda(TimerControl);
    BNE(DrawJSpr);
    lda(JumpspringAnimCtrl);
    BEQ(DrawJSpr);
    // <conv.chunks.Comment object at 0x10115fda0>
    // <conv.chunks.Comment object at 0x101168110>
    // <conv.chunks.Comment object at 0x101168230>
    // <conv.chunks.Comment object at 0x101168350>
    // <conv.chunks.Comment object at 0x101168470>
    tay();
    dey();
    tya();
    anda(0b10);
    BNE(DownJSpr);
    // <conv.chunks.Comment object at 0x101168650>
    // <conv.chunks.Comment object at 0x101168710>
    // <conv.chunks.Comment object at 0x1011687a0>
    // <conv.chunks.Comment object at 0x1011688c0>
    inc(Player_Y_Position);
    inc(Player_Y_Position);
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // <conv.chunks.Comment object at 0x101168ad0>
    // <conv.chunks.Comment object at 0x101168bf0>
    // <conv.chunks.Comment object at 0x101168d40>
    dec(Player_Y_Position);
    dec(Player_Y_Position);
    JMP(PosJSpr);
}

int PosJSpr() {
    // <conv.chunks.Comment object at 0x101168f80>
    lda(Jumpspring_FixedYPos, x);
    clc();
    adc(offsetof(G, Jumpspring_Y_PosData), y);
    sta(Enemy_Y_Position, x);
    cpy(0x1);
    BCC(BounceJS);
    // <conv.chunks.Comment object at 0x1011691c0>
    // <conv.chunks.Comment object at 0x101169310>
    // <conv.chunks.Comment object at 0x101169460>
    // <conv.chunks.Comment object at 0x1011694f0>
    lda(A_B_Buttons);
    anda(A_Button);
    BEQ(BounceJS);
    anda(PreviousA_B_Buttons);
    BNE(BounceJS);
    // <conv.chunks.Comment object at 0x101169790>
    // <conv.chunks.Comment object at 0x1011698b0>
    // <conv.chunks.Comment object at 0x1011699d0>
    // <conv.chunks.Comment object at 0x101169af0>
    lda(0xf4);
    sta(JumpspringForce);
    JMP(BounceJS);
}

int BounceJS() {
    // <conv.chunks.Comment object at 0x101169c70>
    // <conv.chunks.Comment object at 0x101169e20>
    cpy(0x3);
    BNE(DrawJSpr);
    // <conv.chunks.Comment object at 0x101169ee0>
    lda(JumpspringForce);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x10116a180>
    lda(0x0);
    sta(JumpspringAnimCtrl);
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // <conv.chunks.Comment object at 0x10116a300>
    // <conv.chunks.Comment object at 0x10116a4b0>
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda(JumpspringAnimCtrl);
    BEQ(ExJSpring);
    // <conv.chunks.Comment object at 0x10116a600>
    // <conv.chunks.Comment object at 0x10116a720>
    // <conv.chunks.Comment object at 0x10116a840>
    // <conv.chunks.Comment object at 0x10116a960>
    lda(JumpspringTimer);
    BNE(ExJSpring);
    // <conv.chunks.Comment object at 0x10116ab70>
    lda(0x4);
    sta(JumpspringTimer);
    inc(JumpspringAnimCtrl);
    JMP(ExJSpring);
}

int ExJSpring() {
    // <conv.chunks.Comment object at 0x10116acf0>
    // <conv.chunks.Comment object at 0x10116aea0>
    // <conv.chunks.Comment object at 0x10116aff0>
    return 0;
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda(VineObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x10116b140>
    // <conv.chunks.Comment object at 0x10116b260>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x10116b410>
    lda(Block_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x10116b710>
    lda(Block_X_Position, y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10116b980>
    lda(Block_Y_Position, y);
    sta(Enemy_Y_Position, x);
    ldy(VineFlagOffset);
    BNE(NextVO);
    sta(VineStart_Y_Position);
    JMP(NextVO);
}

int NextVO() {
    // <conv.chunks.Comment object at 0x10116bbf0>
    // <conv.chunks.Comment object at 0x10116bd40>
    // <conv.chunks.Comment object at 0x10116be60>
    // <conv.chunks.Comment object at 0x10116bfb0>
    // <conv.chunks.Comment object at 0x101174110>
    txa();
    sta(VineObjOffset, y);
    inc(VineFlagOffset);
    // <conv.chunks.Comment object at 0x101174230>
    // <conv.chunks.Comment object at 0x101174380>
    lda(Sfx_GrowVine);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x101174590>
    return 0;
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(0x5);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x101174860>
    // <conv.chunks.Comment object at 0x1011749e0>
    ldy(VineFlagOffset);
    dey();
    // <conv.chunks.Comment object at 0x101174ce0>
    lda(VineHeight);
    cmp(offsetof(G, VineHeightData), y);
    BEQ(RunVSubs);
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x101174e60>
    // <conv.chunks.Comment object at 0x101174fb0>
    // <conv.chunks.Comment object at 0x1011750d0>
    // <conv.chunks.Comment object at 0x101175220>
    lsr();
    BCC(RunVSubs);
    // <conv.chunks.Comment object at 0x101175340>
    lda(((Enemy_Y_Position) + (5)));
    sbc(0x1);
    sta(((Enemy_Y_Position) + (5)));
    inc(VineHeight);
    JMP(RunVSubs);
}

int RunVSubs() {
    // <conv.chunks.Comment object at 0x101175610>
    // <conv.chunks.Comment object at 0x1011756a0>
    // <conv.chunks.Comment object at 0x101175910>
    // <conv.chunks.Comment object at 0x101175a30>
    lda(VineHeight);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x101175b80>
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(0x0);
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // <conv.chunks.Comment object at 0x101175dc0>
    // <conv.chunks.Comment object at 0x101175ee0>
    // <conv.chunks.Comment object at 0x101176000>
    // <conv.chunks.Comment object at 0x101176090>
    JSR(DrawVine);
    iny();
    cpy(VineFlagOffset);
    BNE(VDrawLoop);
    // <conv.chunks.Comment object at 0x1011762a0>
    // <conv.chunks.Comment object at 0x101176330>
    // <conv.chunks.Comment object at 0x101176450>
    lda(Enemy_OffscreenBits);
    anda(0b1100);
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // <conv.chunks.Comment object at 0x101176660>
    // <conv.chunks.Comment object at 0x101176780>
    // <conv.chunks.Comment object at 0x1011768d0>
    // <conv.chunks.Comment object at 0x101176960>
    ldx(VineObjOffset, y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta(VineFlagOffset);
    sta(VineHeight);
    JMP(WrCMTile);
}

int WrCMTile() {
    // <conv.chunks.Comment object at 0x101176ae0>
    // <conv.chunks.Comment object at 0x101176c30>
    // <conv.chunks.Comment object at 0x101176cc0>
    // <conv.chunks.Comment object at 0x101176de0>
    // <conv.chunks.Comment object at 0x101176f00>
    // <conv.chunks.Comment object at 0x101177020>
    lda(VineHeight);
    cmp(0x20);
    BCC(ExitVH);
    ldx(0x6);
    lda(0x1);
    ldy(0x1b);
    JSR(BlockBufferCollision);
    // <conv.chunks.Comment object at 0x101177170>
    // <conv.chunks.Comment object at 0x101177200>
    // <conv.chunks.Comment object at 0x1011773e0>
    // <conv.chunks.Comment object at 0x101177470>
    // <conv.chunks.Comment object at 0x101177590>
    // <conv.chunks.Comment object at 0x1011776b0>
    ldy(0x2);
    cpy(0xd0);
    BCS(ExitVH);
    lda((0x6), y);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x101177860>
    // <conv.chunks.Comment object at 0x1011779e0>
    // <conv.chunks.Comment object at 0x101177bc0>
    // <conv.chunks.Comment object at 0x101177c20>
    lda(0x26);
    sta((0x6), y);
    JMP(ExitVH);
}

int ExitVH() {
    // <conv.chunks.Comment object at 0x101177ef0>
    // <conv.chunks.Comment object at 0x101177fe0>
    ldx(ObjectOffset);
    return 0;
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda(AreaType);
    BEQ(ExCannon);
    // <conv.chunks.Comment object at 0x1011803e0>
    // <conv.chunks.Comment object at 0x101180620>
    ldx(0x2);
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // <conv.chunks.Comment object at 0x1011807a0>
    stx(ObjectOffset);
    lda(Enemy_Flag, x);
    BNE(Chk_BB);
    lda(((PseudoRandomBitReg) + (1)), x);
    ldy(SecondaryHardMode);
    anda(offsetof(G, CannonBitmasks), y);
    cmp(0x6);
    BCS(Chk_BB);
    tay();
    lda(Cannon_PageLoc, y);
    BEQ(Chk_BB);
    lda(Cannon_Timer, y);
    BEQ(FireCannon);
    sbc(0x0);
    sta(Cannon_Timer, y);
    JMP(Chk_BB);
    JMP(FireCannon);
}

int FireCannon() {
    lda(TimerControl);
    BNE(Chk_BB);
    lda(0xe);
    sta(Cannon_Timer, y);
    lda(Cannon_PageLoc, y);
    sta(Enemy_PageLoc, x);
    lda(Cannon_X_Position, y);
    sta(Enemy_X_Position, x);
    lda(Cannon_Y_Position, y);
    // <conv.chunks.Comment object at 0x101181cd0>
    // <conv.chunks.Comment object at 0x101181df0>
    // <conv.chunks.Comment object at 0x101181f40>
    // <conv.chunks.Comment object at 0x101181fd0>
    // <conv.chunks.Comment object at 0x1011821b0>
    // <conv.chunks.Comment object at 0x101182300>
    // <conv.chunks.Comment object at 0x101182450>
    // <conv.chunks.Comment object at 0x1011825a0>
    // <conv.chunks.Comment object at 0x1011826f0>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1011828d0>
    // <conv.chunks.Comment object at 0x101182960>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101182ba0>
    // <conv.chunks.Comment object at 0x101182d80>
    // <conv.chunks.Comment object at 0x101182f00>
    // <conv.chunks.Comment object at 0x101182f90>
    lda(0x9);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x101183140>
    lda(BulletBill_CannonVar);
    sta(Enemy_ID, x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // <conv.chunks.Comment object at 0x101183410>
    // <conv.chunks.Comment object at 0x101183560>
    // <conv.chunks.Comment object at 0x101183680>
    lda(Enemy_ID, x);
    cmp(BulletBill_CannonVar);
    BNE(Next3Slt);
    JSR(OffscreenBoundsCheck);
    lda(Enemy_Flag, x);
    BEQ(Next3Slt);
    JSR(GetEnemyOffscreenBits);
    JSR(BulletBillHandler);
    JMP(Next3Slt);
}

int Next3Slt() {
    // <conv.chunks.Comment object at 0x101183920>
    // <conv.chunks.Comment object at 0x101183a40>
    // <conv.chunks.Comment object at 0x101183b60>
    // <conv.chunks.Comment object at 0x101183cb0>
    // <conv.chunks.Comment object at 0x101183dd0>
    // <conv.chunks.Comment object at 0x101183ef0>
    // <conv.chunks.Comment object at 0x101190050>
    dex();
    BPL(ThreeSChk);
    JMP(ExCannon);
}

int ExCannon() {
    // <conv.chunks.Comment object at 0x101190140>
    // <conv.chunks.Comment object at 0x101190260>
    return 0;
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda(TimerControl);
    BNE(RunBBSubs);
    // <conv.chunks.Comment object at 0x101190410>
    // <conv.chunks.Comment object at 0x101190620>
    lda(Enemy_State, x);
    BNE(ChkDSte);
    lda(Enemy_OffscreenBits);
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
    // <conv.chunks.Comment object at 0x101190860>
    // <conv.chunks.Comment object at 0x1011909b0>
    // <conv.chunks.Comment object at 0x101190ad0>
    // <conv.chunks.Comment object at 0x101190bf0>
    // <conv.chunks.Comment object at 0x101190d10>
    // <conv.chunks.Comment object at 0x101190e60>
    // <conv.chunks.Comment object at 0x101190ef0>
    // <conv.chunks.Comment object at 0x1011910a0>
    // <conv.chunks.Comment object at 0x101191220>
    // <conv.chunks.Comment object at 0x1011912b0>
    sty(Enemy_MovingDir, x);
    dey();
    lda(offsetof(G, BulletBillXSpdData), y);
    sta(Enemy_X_Speed, x);
    lda(0x0);
    adc(0x28);
    cmp(0x50);
    BCC(KillBB);
    // <conv.chunks.Comment object at 0x101191490>
    // <conv.chunks.Comment object at 0x101191520>
    // <conv.chunks.Comment object at 0x101191670>
    // <conv.chunks.Comment object at 0x1011917f0>
    // <conv.chunks.Comment object at 0x101191880>
    // <conv.chunks.Comment object at 0x101191970>
    // <conv.chunks.Comment object at 0x101191a90>
    lda(0x1);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101191cd0>
    lda(0xa);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x101191f10>
    lda(Sfx_Blast);
    sta(Square2SoundQueue);
    JMP(ChkDSte);
}

int ChkDSte() {
    // <conv.chunks.Comment object at 0x1011921e0>
    // <conv.chunks.Comment object at 0x101192300>
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(BBFly);
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}

int BBFly() {
    // <conv.chunks.Comment object at 0x1011925a0>
    // <conv.chunks.Comment object at 0x1011926f0>
    // <conv.chunks.Comment object at 0x101192810>
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}

int RunBBSubs() {
    // <conv.chunks.Comment object at 0x101192990>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}

int KillBB() {
    // <conv.chunks.Comment object at 0x101192ae0>
    // <conv.chunks.Comment object at 0x101192c00>
    // <conv.chunks.Comment object at 0x101192d20>
    // <conv.chunks.Comment object at 0x101192e40>
    // <conv.chunks.Comment object at 0x101192f60>
    JSR(EraseEnemyObject);
    return 0;
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b111);
    BNE(SetMOfs);
    // <conv.chunks.Comment object at 0x101193200>
    // <conv.chunks.Comment object at 0x101193a40>
    // <conv.chunks.Comment object at 0x101193b60>
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b1000);
    JMP(SetMOfs);
}

int SetMOfs() {
    // <conv.chunks.Comment object at 0x101193e60>
    // <conv.chunks.Comment object at 0x101193f80>
    tay();
    lda(Misc_State, y);
    BNE(NoHammer);
    ldx(offsetof(G, HammerEnemyOfsData), y);
    lda(Enemy_Flag, x);
    BNE(NoHammer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1011980e0>
    // <conv.chunks.Comment object at 0x101198230>
    // <conv.chunks.Comment object at 0x101198350>
    // <conv.chunks.Comment object at 0x1011984a0>
    // <conv.chunks.Comment object at 0x1011985f0>
    // <conv.chunks.Comment object at 0x101198710>
    txa();
    sta(HammerEnemyOffset, y);
    // <conv.chunks.Comment object at 0x1011988c0>
    lda(0x90);
    sta(Misc_State, y);
    // <conv.chunks.Comment object at 0x101198a70>
    lda(0x7);
    sta(Misc_BoundBoxCtrl, y);
    sec();
    // <conv.chunks.Comment object at 0x101198cb0>
    // <conv.chunks.Comment object at 0x101198ec0>
    return 0;
    JMP(NoHammer);
}

int NoHammer() {
    // <conv.chunks.Comment object at 0x101198fe0>
    ldx(ObjectOffset);
    clc();
    // <conv.chunks.Comment object at 0x101199160>
    return 0;
    JMP(ProcHammerObj);
}

int ProcHammerObj() {
    lda(TimerControl);
    BNE(RunHSubs);
    lda(Misc_State, x);
    anda(0b1111111);
    ldy(HammerEnemyOffset, x);
    cmp(0x2);
    BEQ(SetHSpd);
    BCS(SetHPos);
    // <conv.chunks.Comment object at 0x1011992b0>
    // <conv.chunks.Comment object at 0x101199310>
    // <conv.chunks.Comment object at 0x101199370>
    // <conv.chunks.Comment object at 0x101199490>
    // <conv.chunks.Comment object at 0x1011995b0>
    // <conv.chunks.Comment object at 0x101199700>
    // <conv.chunks.Comment object at 0x101199820>
    // <conv.chunks.Comment object at 0x101199970>
    // <conv.chunks.Comment object at 0x101199a00>
    // <conv.chunks.Comment object at 0x101199be0>
    txa();
    clc();
    adc(0xd);
    tax();
    // <conv.chunks.Comment object at 0x101199df0>
    // <conv.chunks.Comment object at 0x101199e80>
    // <conv.chunks.Comment object at 0x101199fd0>
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10119a180>
    lda(0xf);
    sta(0x1);
    // <conv.chunks.Comment object at 0x10119a390>
    lda(0x4);
    sta(0x2);
    lda(0x0);
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx(ObjectOffset);
    JMP(RunAllH);
    JMP(SetHSpd);
}

int SetHSpd() {
    lda(0xfe);
    sta(Misc_Y_Speed, x);
    lda(Enemy_State, y);
    anda(0b11110111);
    sta(Enemy_State, y);
    ldx(Enemy_MovingDir, y);
    dex();
    lda(offsetof(G, HammerXSpdData), x);
    ldx(ObjectOffset);
    sta(Misc_X_Speed, x);
    JMP(SetHPos);
}

int SetHPos() {
    // <conv.chunks.Comment object at 0x10119ad20>
    // <conv.chunks.Comment object at 0x10119af00>
    // <conv.chunks.Comment object at 0x10119b050>
    // <conv.chunks.Comment object at 0x10119b170>
    // <conv.chunks.Comment object at 0x10119b2c0>
    // <conv.chunks.Comment object at 0x10119b440>
    // <conv.chunks.Comment object at 0x10119b4d0>
    // <conv.chunks.Comment object at 0x10119b620>
    // <conv.chunks.Comment object at 0x10119b740>
    // <conv.chunks.Comment object at 0x10119b890>
    dec(Misc_State, x);
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x10119ba40>
    clc();
    adc(0x2);
    sta(Misc_X_Position, x);
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(Misc_PageLoc, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x10119bc20>
    // <conv.chunks.Comment object at 0x10119bcb0>
    // <conv.chunks.Comment object at 0x10119be90>
    // <conv.chunks.Comment object at 0x10119bfe0>
    // <conv.chunks.Comment object at 0x1011a00b0>
    // <conv.chunks.Comment object at 0x1011a0290>
    sec();
    sbc(0xa);
    sta(Misc_Y_Position, x);
    // <conv.chunks.Comment object at 0x1011a0470>
    // <conv.chunks.Comment object at 0x1011a0500>
    lda(0x1);
    sta(Misc_Y_HighPos, x);
    BNE(RunHSubs);
    JMP(RunAllH);
}

int RunAllH() {
    // <conv.chunks.Comment object at 0x1011a0740>
    // <conv.chunks.Comment object at 0x1011a0920>
    // <conv.chunks.Comment object at 0x1011a0a40>
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}

int RunHSubs() {
    // <conv.chunks.Comment object at 0x1011a0bc0>
    JSR(GetMiscOffscreenBits);
    JSR(RelativeMiscPosition);
    JSR(GetMiscBoundBox);
    JSR(DrawHammer);
    return 0;
    JMP(CoinBlock);
}

int CoinBlock() {
    JSR(FindEmptyMiscSlot);
    lda(Block_PageLoc, x);
    sta(Misc_PageLoc, y);
    lda(Block_X_Position, x);
    ora(0x5);
    sta(Misc_X_Position, y);
    lda(Block_Y_Position, x);
    sbc(0x10);
    sta(Misc_Y_Position, y);
    JMP(JCoinC);
    JMP(SetupJumpCoin);
}

int SetupJumpCoin() {
    JSR(FindEmptyMiscSlot);
    lda(Block_PageLoc2, x);
    sta(Misc_PageLoc, y);
    lda(0x6);
    // <conv.chunks.Comment object at 0x1011a1eb0>
    // <conv.chunks.Comment object at 0x1011a1fd0>
    // <conv.chunks.Comment object at 0x1011a2120>
    // <conv.chunks.Comment object at 0x1011a22a0>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1011a2450>
    asl();
    asl();
    ora(0x5);
    sta(Misc_X_Position, y);
    lda(0x2);
    adc(0x20);
    sta(Misc_Y_Position, y);
    JMP(JCoinC);
}

int JCoinC() {
    lda(0xfb);
    sta(Misc_Y_Speed, y);
    // <conv.chunks.Comment object at 0x1011a2cc0>
    lda(0x1);
    sta(Misc_Y_HighPos, y);
    sta(Misc_State, y);
    sta(Square2SoundQueue);
    stx(ObjectOffset);
    JSR(GiveOneCoin);
    inc(CoinTallyFor1Ups);
    // <conv.chunks.Comment object at 0x1011a2f00>
    // <conv.chunks.Comment object at 0x1011a30e0>
    // <conv.chunks.Comment object at 0x1011a3230>
    // <conv.chunks.Comment object at 0x1011a3350>
    // <conv.chunks.Comment object at 0x1011a3470>
    // <conv.chunks.Comment object at 0x1011a3590>
    return 0;
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(0x8);
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // <conv.chunks.Comment object at 0x1011a3770>
    // <conv.chunks.Comment object at 0x1011a3800>
    lda(Misc_State, y);
    BEQ(UseMiscS);
    dey();
    cpy(0x5);
    BNE(FMiscLoop);
    ldy(0x8);
    JMP(UseMiscS);
}

int UseMiscS() {
    // <conv.chunks.Comment object at 0x1011a3a10>
    // <conv.chunks.Comment object at 0x1011a3b60>
    // <conv.chunks.Comment object at 0x1011a3bf0>
    // <conv.chunks.Comment object at 0x1011a3c80>
    // <conv.chunks.Comment object at 0x1011a3e30>
    // <conv.chunks.Comment object at 0x1011a3ec0>
    sty(JumpCoinMiscOffset);
    return 0;
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(0x8);
    JMP(MiscLoop);
}

int MiscLoop() {
    // <conv.chunks.Comment object at 0x1011b01d0>
    // <conv.chunks.Comment object at 0x1011b0260>
    stx(ObjectOffset);
    lda(Misc_State, x);
    BEQ(MiscLoopBack);
    asl();
    BCC(ProcJumpCoin);
    JSR(ProcHammerObj);
    JMP(MiscLoopBack);
    JMP(ProcJumpCoin);
}

int ProcJumpCoin() {
    ldy(Misc_State, x);
    dey();
    BEQ(JCoinRun);
    inc(Misc_State, x);
    lda(Misc_X_Position, x);
    clc();
    adc(ScrollAmount);
    sta(Misc_X_Position, x);
    lda(Misc_PageLoc, x);
    adc(0x0);
    sta(Misc_PageLoc, x);
    // <conv.chunks.Comment object at 0x1011b0440>
    // <conv.chunks.Comment object at 0x1011b0590>
    // <conv.chunks.Comment object at 0x1011b06e0>
    // <conv.chunks.Comment object at 0x1011b0770>
    // <conv.chunks.Comment object at 0x1011b0890>
    // <conv.chunks.Comment object at 0x1011b09b0>
    // <conv.chunks.Comment object at 0x1011b0b00>
    // <conv.chunks.Comment object at 0x1011b0b60>
    // <conv.chunks.Comment object at 0x1011b0bc0>
    // <conv.chunks.Comment object at 0x1011b0d40>
    // <conv.chunks.Comment object at 0x1011b0dd0>
    // <conv.chunks.Comment object at 0x1011b0ef0>
    // <conv.chunks.Comment object at 0x1011b1040>
    // <conv.chunks.Comment object at 0x1011b11c0>
    // <conv.chunks.Comment object at 0x1011b1250>
    // <conv.chunks.Comment object at 0x1011b1370>
    // <conv.chunks.Comment object at 0x1011b14c0>
    // <conv.chunks.Comment object at 0x1011b1610>
    // <conv.chunks.Comment object at 0x1011b16a0>
    lda(Misc_State, x);
    cmp(0x30);
    BNE(RunJCSubs);
    // <conv.chunks.Comment object at 0x1011b19a0>
    // <conv.chunks.Comment object at 0x1011b1a30>
    lda(0x0);
    sta(Misc_State, x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1011b2030>
    adc(0xd);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x1011b2240>
    sta(0x0);
    lda(0x6);
    // <conv.chunks.Comment object at 0x1011b22d0>
    sta(0x2);
    lsr();
    sta(0x1);
    lda(0x0);
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    lda(Misc_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1011b2600>
    // <conv.chunks.Comment object at 0x1011b2750>
    // <conv.chunks.Comment object at 0x1011b27e0>
    // <conv.chunks.Comment object at 0x1011b28d0>
    // <conv.chunks.Comment object at 0x1011b2a80>
    // <conv.chunks.Comment object at 0x1011b2ba0>
    cmp(0x5);
    BNE(RunJCSubs);
    inc(Misc_State, x);
    JMP(RunJCSubs);
}

int RunJCSubs() {
    // <conv.chunks.Comment object at 0x1011b2d50>
    // <conv.chunks.Comment object at 0x1011b2f00>
    // <conv.chunks.Comment object at 0x1011b3050>
    JSR(RelativeMiscPosition);
    JSR(GetMiscOffscreenBits);
    JSR(GetMiscBoundBox);
    JSR(JCoinGfxHandler);
    JMP(MiscLoopBack);
}

int MiscLoopBack() {
    dex();
    BPL(MiscLoop);
    return 0;
    JMP(GiveOneCoin);
}

int GiveOneCoin() {
    lda(0x1);
    sta(((DigitModifier) + (5)));
    ldx(CurrentPlayer);
    ldy(offsetof(G, CoinTallyOffsets), x);
    JSR(DigitsMathRoutine);
    inc(CoinTally);
    // <conv.chunks.Comment object at 0x1011b3a10>
    // <conv.chunks.Comment object at 0x1011b3cb0>
    // <conv.chunks.Comment object at 0x1011b3f20>
    // <conv.chunks.Comment object at 0x1011b8080>
    // <conv.chunks.Comment object at 0x1011b81d0>
    // <conv.chunks.Comment object at 0x1011b82f0>
    lda(CoinTally);
    cmp(100);
    BNE(CoinPoints);
    // <conv.chunks.Comment object at 0x1011b8500>
    // <conv.chunks.Comment object at 0x1011b8590>
    lda(0x0);
    sta(CoinTally);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x1011b87a0>
    // <conv.chunks.Comment object at 0x1011b8950>
    lda(Sfx_ExtraLife);
    sta(Square2SoundQueue);
    JMP(CoinPoints);
}

int CoinPoints() {
    lda(0x2);
    sta(((DigitModifier) + (4)));
    JMP(AddToScore);
}

int AddToScore() {
    ldx(CurrentPlayer);
    ldy(offsetof(G, ScoreOffsets), x);
    JSR(DigitsMathRoutine);
    JMP(GetSBNybbles);
}

int GetSBNybbles() {
    ldy(CurrentPlayer);
    lda(offsetof(G, StatusBarNybbles), y);
    JMP(UpdateNumber);
}

int UpdateNumber() {
    JSR(PrintStatusBarNumbers);
    // <conv.chunks.Comment object at 0x1011b9640>
    ldy(VRAM_Buffer1_Offset);
    lda(((VRAM_Buffer1) - (6)), y);
    BNE(NoZSup);
    // <conv.chunks.Comment object at 0x1011b9850>
    // <conv.chunks.Comment object at 0x1011b9a60>
    lda(0x24);
    sta(((VRAM_Buffer1) - (6)), y);
    JMP(NoZSup);
}

int NoZSup() {
    // <conv.chunks.Comment object at 0x1011b9e80>
    ldx(ObjectOffset);
    return 0;
    JMP(SetupPowerUp);
}

int SetupPowerUp() {
    lda(PowerUpObject);
    sta(((Enemy_ID) + (5)));
    lda(Block_PageLoc, x);
    sta(((Enemy_PageLoc) + (5)));
    lda(Block_X_Position, x);
    sta(((Enemy_X_Position) + (5)));
    // <conv.chunks.Comment object at 0x1011ba0f0>
    // <conv.chunks.Comment object at 0x1011ba210>
    // <conv.chunks.Comment object at 0x1011ba3f0>
    // <conv.chunks.Comment object at 0x1011ba540>
    // <conv.chunks.Comment object at 0x1011ba720>
    // <conv.chunks.Comment object at 0x1011ba870>
    lda(0x1);
    sta(((Enemy_Y_HighPos) + (5)));
    lda(Block_Y_Position, x);
    // <conv.chunks.Comment object at 0x1011baab0>
    // <conv.chunks.Comment object at 0x1011bad20>
    sec();
    sbc(0x8);
    sta(((Enemy_Y_Position) + (5)));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // <conv.chunks.Comment object at 0x1011baf00>
    // <conv.chunks.Comment object at 0x1011baf90>
    // <conv.chunks.Comment object at 0x1011bb200>
    lda(0x1);
    sta(((Enemy_State) + (5)));
    sta(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x1011bb2c0>
    // <conv.chunks.Comment object at 0x1011bb530>
    lda(0x3);
    sta(((Enemy_BoundBoxCtrl) + (5)));
    // <conv.chunks.Comment object at 0x1011bb770>
    lda(PowerUpType);
    cmp(0x2);
    BCS(PutBehind);
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x1011bbad0>
    // <conv.chunks.Comment object at 0x1011bbb60>
    // <conv.chunks.Comment object at 0x1011bbd10>
    cmp(0x2);
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // <conv.chunks.Comment object at 0x1011bbe90>
    // <conv.chunks.Comment object at 0x1011c00e0>
    // <conv.chunks.Comment object at 0x1011c0170>
    sta(PowerUpType);
    JMP(PutBehind);
}

int PutBehind() {
    lda(0b100000);
    sta(((Enemy_SprAttrib) + (5)));
    // <conv.chunks.Comment object at 0x1011c0410>
    lda(Sfx_GrowPowerUp);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x1011c06e0>
    return 0;
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x1011c08f0>
    stx(ObjectOffset);
    lda(((Enemy_State) + (5)));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda(TimerControl);
    BNE(RunPUSubs);
    lda(PowerUpType);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x1011c0b00>
    // <conv.chunks.Comment object at 0x1011c0ce0>
    // <conv.chunks.Comment object at 0x1011c0e60>
    // <conv.chunks.Comment object at 0x1011c0ef0>
    // <conv.chunks.Comment object at 0x1011c1010>
    // <conv.chunks.Comment object at 0x1011c1130>
    // <conv.chunks.Comment object at 0x1011c1250>
    // <conv.chunks.Comment object at 0x1011c1370>
    cmp(0x3);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x1011c1520>
    cmp(0x2);
    BNE(RunPUSubs);
    JSR(MoveJumpingEnemy);
    JSR(EnemyJump);
    JMP(RunPUSubs);
    JMP(ShroomM);
}

int ShroomM() {
    // <conv.chunks.Comment object at 0x1011c1760>
    // <conv.chunks.Comment object at 0x1011c1910>
    // <conv.chunks.Comment object at 0x1011c1a30>
    // <conv.chunks.Comment object at 0x1011c1b50>
    // <conv.chunks.Comment object at 0x1011c1c70>
    JSR(MoveNormalEnemy);
    JSR(EnemyToBGCollisionDet);
    JMP(RunPUSubs);
    JMP(GrowThePowerUp);
}

int GrowThePowerUp() {
    lda(FrameCounter);
    anda(0x3);
    BNE(ChkPUSte);
    dec(((Enemy_Y_Position) + (5)));
    lda(((Enemy_State) + (5)));
    inc(((Enemy_State) + (5)));
    cmp(0x11);
    BCC(ChkPUSte);
    // <conv.chunks.Comment object at 0x1011c2060>
    // <conv.chunks.Comment object at 0x1011c2180>
    // <conv.chunks.Comment object at 0x1011c2210>
    // <conv.chunks.Comment object at 0x1011c23c0>
    // <conv.chunks.Comment object at 0x1011c25a0>
    // <conv.chunks.Comment object at 0x1011c2780>
    // <conv.chunks.Comment object at 0x1011c2960>
    // <conv.chunks.Comment object at 0x1011c29f0>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x1011c2c00>
    lda(0b10000000);
    sta(((Enemy_State) + (5)));
    asl();
    sta(((Enemy_SprAttrib) + (5)));
    rol();
    sta(Enemy_MovingDir, x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // <conv.chunks.Comment object at 0x1011c2ed0>
    // <conv.chunks.Comment object at 0x1011c30e0>
    // <conv.chunks.Comment object at 0x1011c3170>
    // <conv.chunks.Comment object at 0x1011c3380>
    // <conv.chunks.Comment object at 0x1011c3410>
    // <conv.chunks.Comment object at 0x1011c3560>
    lda(((Enemy_State) + (5)));
    cmp(0x6);
    BCC(ExitPUp);
    JMP(RunPUSubs);
}

int RunPUSubs() {
    // <conv.chunks.Comment object at 0x1011c3770>
    // <conv.chunks.Comment object at 0x1011c3800>
    // <conv.chunks.Comment object at 0x1011c39e0>
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    JSR(GetEnemyBoundBox);
    JSR(DrawPowerUp);
    JSR(PlayerEnemyCollision);
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}

int ExitPUp() {
    // <conv.chunks.Comment object at 0x1011c3b30>
    // <conv.chunks.Comment object at 0x1011c3c50>
    // <conv.chunks.Comment object at 0x1011c3d70>
    // <conv.chunks.Comment object at 0x1011c3e90>
    // <conv.chunks.Comment object at 0x1011c3fb0>
    // <conv.chunks.Comment object at 0x1011d0110>
    return 0;
    JMP(PlayerHeadCollision);
}

int PlayerHeadCollision() {
    pha();
    lda(0x11);
    ldx(SprDataOffset_Ctrl);
    ldy(PlayerSize);
    BNE(DBlockSte);
    lda(0x12);
    JMP(DBlockSte);
}

int DBlockSte() {
    // <conv.chunks.Comment object at 0x1011d0380>
    // <conv.chunks.Comment object at 0x1011d0590>
    // <conv.chunks.Comment object at 0x1011d0620>
    // <conv.chunks.Comment object at 0x1011d07d0>
    // <conv.chunks.Comment object at 0x1011d08f0>
    // <conv.chunks.Comment object at 0x1011d0a10>
    // <conv.chunks.Comment object at 0x1011d0aa0>
    sta(Block_State, x);
    JSR(DestroyBlockMetatile);
    ldx(SprDataOffset_Ctrl);
    lda(0x2);
    sta(Block_Orig_YPos, x);
    // <conv.chunks.Comment object at 0x1011d0cb0>
    // <conv.chunks.Comment object at 0x1011d0dd0>
    // <conv.chunks.Comment object at 0x1011d0f20>
    // <conv.chunks.Comment object at 0x1011d0fb0>
    tay();
    lda(0x6);
    sta(Block_BBuf_Low, x);
    lda((0x6), y);
    JSR(BlockBumpedChk);
    sta(0x0);
    ldy(PlayerSize);
    BNE(ChkBrick);
    tya();
    JMP(ChkBrick);
}

int ChkBrick() {
    // <conv.chunks.Comment object at 0x1011d1220>
    // <conv.chunks.Comment object at 0x1011d12b0>
    // <conv.chunks.Comment object at 0x1011d1460>
    // <conv.chunks.Comment object at 0x1011d14c0>
    // <conv.chunks.Comment object at 0x1011d1730>
    // <conv.chunks.Comment object at 0x1011d17c0>
    // <conv.chunks.Comment object at 0x1011d1940>
    // <conv.chunks.Comment object at 0x1011d1a90>
    // <conv.chunks.Comment object at 0x1011d1b20>
    BCC(PutMTileB);
    ldy(0x11);
    sty(Block_State, x);
    lda(0xc4);
    ldy(0x0);
    cpy(0x58);
    BEQ(StartBTmr);
    cpy(0x5d);
    BNE(PutMTileB);
    JMP(StartBTmr);
}

int StartBTmr() {
    // <conv.chunks.Comment object at 0x1011d1c70>
    // <conv.chunks.Comment object at 0x1011d1d00>
    // <conv.chunks.Comment object at 0x1011d1ee0>
    // <conv.chunks.Comment object at 0x1011d2030>
    // <conv.chunks.Comment object at 0x1011d20c0>
    // <conv.chunks.Comment object at 0x1011d21b0>
    // <conv.chunks.Comment object at 0x1011d2360>
    // <conv.chunks.Comment object at 0x1011d23f0>
    // <conv.chunks.Comment object at 0x1011d25a0>
    lda(BrickCoinTimerFlag);
    BNE(ContBTmr);
    // <conv.chunks.Comment object at 0x1011d26f0>
    lda(0xb);
    sta(BrickCoinTimer);
    inc(BrickCoinTimerFlag);
    JMP(ContBTmr);
}

int ContBTmr() {
    // <conv.chunks.Comment object at 0x1011d2870>
    // <conv.chunks.Comment object at 0x1011d2a20>
    // <conv.chunks.Comment object at 0x1011d2b40>
    lda(BrickCoinTimer);
    BNE(PutOldMT);
    ldy(0xc4);
    JMP(PutOldMT);
}

int PutOldMT() {
    // <conv.chunks.Comment object at 0x1011d2c90>
    // <conv.chunks.Comment object at 0x1011d2db0>
    // <conv.chunks.Comment object at 0x1011d2e40>
    tya();
    JMP(PutMTileB);
}

int PutMTileB() {
    // <conv.chunks.Comment object at 0x1011d2fc0>
    sta(Block_Metatile, x);
    JSR(InitBlock_XY_Pos);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x1011d3140>
    // <conv.chunks.Comment object at 0x1011d3290>
    lda(0x23);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x1011d33e0>
    lda(0x10);
    sta(BlockBounceTimer);
    pla();
    sta(0x5);
    ldy(0x0);
    lda(CrouchingFlag);
    BNE(SmallBP);
    lda(PlayerSize);
    BEQ(BigBP);
    JMP(SmallBP);
}

int SmallBP() {
    // <conv.chunks.Comment object at 0x1011d3650>
    // <conv.chunks.Comment object at 0x1011d3830>
    // <conv.chunks.Comment object at 0x1011d38f0>
    // <conv.chunks.Comment object at 0x1011d3980>
    // <conv.chunks.Comment object at 0x1011d3a70>
    // <conv.chunks.Comment object at 0x1011d3c20>
    // <conv.chunks.Comment object at 0x1011d3d70>
    // <conv.chunks.Comment object at 0x1011d3e90>
    // <conv.chunks.Comment object at 0x1011d3fe0>
    iny();
    JMP(BigBP);
}

int BigBP() {
    // <conv.chunks.Comment object at 0x1011dc140>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, BlockYPosAdderData), y);
    anda(0xf0);
    sta(Block_Y_Position, x);
    ldy(Block_State, x);
    // <conv.chunks.Comment object at 0x1011dc350>
    // <conv.chunks.Comment object at 0x1011dc4a0>
    // <conv.chunks.Comment object at 0x1011dc530>
    // <conv.chunks.Comment object at 0x1011dc710>
    cpy(0x11);
    BEQ(Unbreak);
    JSR(BrickShatter);
    JMP(InvOBit);
    JMP(Unbreak);
}

int Unbreak() {
    // <conv.chunks.Comment object at 0x1011dc8c0>
    // <conv.chunks.Comment object at 0x1011dcaa0>
    // <conv.chunks.Comment object at 0x1011dcbc0>
    // <conv.chunks.Comment object at 0x1011dcd10>
    JSR(BumpBlock);
    JMP(InvOBit);
}

int InvOBit() {
    // <conv.chunks.Comment object at 0x1011dce90>
    lda(SprDataOffset_Ctrl);
    eor(0x1);
    // <conv.chunks.Comment object at 0x1011dd010>
    sta(SprDataOffset_Ctrl);
    return 0;
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1011dd370>
    clc();
    adc(0x8);
    anda(0xf0);
    sta(Block_X_Position, x);
    // <conv.chunks.Comment object at 0x1011dd520>
    // <conv.chunks.Comment object at 0x1011dd5b0>
    // <conv.chunks.Comment object at 0x1011dd6d0>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Block_PageLoc, x);
    sta(Block_PageLoc2, x);
    // <conv.chunks.Comment object at 0x1011dd9a0>
    // <conv.chunks.Comment object at 0x1011dda30>
    // <conv.chunks.Comment object at 0x1011ddc10>
    lda(Player_Y_HighPos);
    sta(Block_Y_HighPos, x);
    return 0;
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x1011de0c0>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x1011de2d0>
    lda(0x0);
    sta(Block_X_Speed, x);
    sta(Block_Y_MoveForce, x);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x1011de450>
    // <conv.chunks.Comment object at 0x1011de630>
    // <conv.chunks.Comment object at 0x1011de780>
    lda(0xfe);
    sta(Block_Y_Speed, x);
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
    // <conv.chunks.Comment object at 0x1011dfce0>
    // <conv.chunks.Comment object at 0x1011dfe90>
    JMP(SetupPowerUp);
    JMP(VineBlock);
}

int VineBlock() {
    ldx(0x5);
    ldy(SprDataOffset_Ctrl);
    JSR(Setup_Vine);
    JMP(ExitBlockChk);
}

int ExitBlockChk() {
    return 0;
    JMP(BlockBumpedChk);
}

int BlockBumpedChk() {
    ldy(0xd);
    JMP(BumpChkLoop);
}

int BumpChkLoop() {
    // <conv.chunks.Comment object at 0x1011e8950>
    // <conv.chunks.Comment object at 0x1011e89b0>
    cmp(offsetof(G, BrickQBlockMetatiles), y);
    BEQ(MatchBump);
    dey();
    BPL(BumpChkLoop);
    clc();
    JMP(MatchBump);
}

int MatchBump() {
    // <conv.chunks.Comment object at 0x1011e9130>
    // <conv.chunks.Comment object at 0x1011e9280>
    // <conv.chunks.Comment object at 0x1011e9310>
    // <conv.chunks.Comment object at 0x1011e9460>
    // <conv.chunks.Comment object at 0x1011e94f0>
    return 0;
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x1011e9640>
    lda(Sfx_BrickShatter);
    sta(Block_RepFlag, x);
    sta(NoiseSoundQueue);
    JSR(SpawnBrickChunks);
    // <conv.chunks.Comment object at 0x1011e9850>
    // <conv.chunks.Comment object at 0x1011e99a0>
    // <conv.chunks.Comment object at 0x1011e9ac0>
    lda(0xfe);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x1011e9c40>
    lda(0x5);
    sta(((DigitModifier) + (5)));
    JSR(AddToScore);
    ldx(SprDataOffset_Ctrl);
    // <conv.chunks.Comment object at 0x1011e9e50>
    // <conv.chunks.Comment object at 0x1011ea0c0>
    // <conv.chunks.Comment object at 0x1011ea1e0>
    return 0;
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx(SprDataOffset_Ctrl);
    ldy(0x2);
    BEQ(TopEx);
    tya();
    // <conv.chunks.Comment object at 0x1011ea3f0>
    // <conv.chunks.Comment object at 0x1011ea540>
    // <conv.chunks.Comment object at 0x1011ea5d0>
    // <conv.chunks.Comment object at 0x1011ea7b0>
    sec();
    sbc(0x10);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1011ea8d0>
    // <conv.chunks.Comment object at 0x1011eaa20>
    tay();
    lda((0x6), y);
    cmp(0xc2);
    BNE(TopEx);
    // <conv.chunks.Comment object at 0x1011eaba0>
    // <conv.chunks.Comment object at 0x1011eac00>
    // <conv.chunks.Comment object at 0x1011eadb0>
    lda(0x0);
    sta((0x6), y);
    JSR(RemoveCoin_Axe);
    ldx(SprDataOffset_Ctrl);
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // <conv.chunks.Comment object at 0x1011eaff0>
    // <conv.chunks.Comment object at 0x1011eb0e0>
    // <conv.chunks.Comment object at 0x1011eb320>
    // <conv.chunks.Comment object at 0x1011eb440>
    // <conv.chunks.Comment object at 0x1011eb590>
    return 0;
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda(Block_X_Position, x);
    sta(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x1011eb710>
    // <conv.chunks.Comment object at 0x1011eb860>
    lda(0xf0);
    sta(Block_X_Speed, x);
    // <conv.chunks.Comment object at 0x1011eba10>
    sta(((Block_X_Speed) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1011ebe30>
    lda(0xfc);
    sta(((Block_Y_Speed) + (2)), x);
    // <conv.chunks.Comment object at 0x1011f40b0>
    lda(0x0);
    sta(Block_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1011f43b0>
    sta(((Block_Y_MoveForce) + (2)), x);
    lda(Block_PageLoc, x);
    sta(((Block_PageLoc) + (2)), x);
    // <conv.chunks.Comment object at 0x1011f4890>
    lda(Block_X_Position, x);
    sta(((Block_X_Position) + (2)), x);
    // <conv.chunks.Comment object at 0x1011f4bc0>
    lda(Block_Y_Position, x);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1011f4f20>
    // <conv.chunks.Comment object at 0x1011f4fb0>
    sta(((Block_Y_Position) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1011f5310>
    return 0;
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda(Block_State, x);
    BEQ(UpdSte);
    anda(0xf);
    pha();
    tay();
    // <conv.chunks.Comment object at 0x1011f55e0>
    // <conv.chunks.Comment object at 0x1011f5730>
    // <conv.chunks.Comment object at 0x1011f5880>
    // <conv.chunks.Comment object at 0x1011f59d0>
    // <conv.chunks.Comment object at 0x1011f5a90>
    txa();
    clc();
    adc(0x9);
    tax();
    dey();
    BEQ(BouncingBlockHandler);
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    // <conv.chunks.Comment object at 0x1011f5c40>
    // <conv.chunks.Comment object at 0x1011f5d90>
    // <conv.chunks.Comment object at 0x1011f5e50>
    // <conv.chunks.Comment object at 0x1011f5ee0>
    // <conv.chunks.Comment object at 0x1011f6000>
    // <conv.chunks.Comment object at 0x1011f6120>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1011f6300>
    adc(0x2);
    tax();
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    ldx(ObjectOffset);
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBrickChunks);
    pla();
    ldy(Block_Y_HighPos, x);
    BEQ(UpdSte);
    pha();
    // <conv.chunks.Comment object at 0x1011f6510>
    // <conv.chunks.Comment object at 0x1011f6630>
    // <conv.chunks.Comment object at 0x1011f6750>
    // <conv.chunks.Comment object at 0x1011f6870>
    // <conv.chunks.Comment object at 0x1011f6990>
    // <conv.chunks.Comment object at 0x1011f6ab0>
    // <conv.chunks.Comment object at 0x1011f6c00>
    // <conv.chunks.Comment object at 0x1011f6c90>
    // <conv.chunks.Comment object at 0x1011f6de0>
    // <conv.chunks.Comment object at 0x1011f6f60>
    lda(0xf0);
    cmp(((Block_Y_Position) + (2)), x);
    BCS(ChkTop);
    sta(((Block_Y_Position) + (2)), x);
    JMP(ChkTop);
}

int ChkTop() {
    // <conv.chunks.Comment object at 0x1011f7050>
    // <conv.chunks.Comment object at 0x1011f72f0>
    // <conv.chunks.Comment object at 0x1011f7440>
    // <conv.chunks.Comment object at 0x1011f7650>
    lda(Block_Y_Position, x);
    cmp(0xf0);
    pla();
    BCC(UpdSte);
    BCS(KillBlock);
    JMP(BouncingBlockHandler);
}

int BouncingBlockHandler() {
    JSR(ImposeGravityBlock);
    ldx(ObjectOffset);
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBlock);
    lda(Block_Y_Position, x);
    anda(0xf);
    cmp(0x5);
    pla();
    BCS(UpdSte);
    // <conv.chunks.Comment object at 0x1011f7c80>
    // <conv.chunks.Comment object at 0x1011f7da0>
    // <conv.chunks.Comment object at 0x1011f7ec0>
    // <conv.chunks.Comment object at 0x1011f7fe0>
    // <conv.chunks.Comment object at 0x1011fc140>
    // <conv.chunks.Comment object at 0x1011fc260>
    // <conv.chunks.Comment object at 0x1011fc3b0>
    // <conv.chunks.Comment object at 0x1011fc440>
    // <conv.chunks.Comment object at 0x1011fc620>
    // <conv.chunks.Comment object at 0x1011fc6b0>
    lda(0x1);
    sta(Block_RepFlag, x);
    JMP(KillBlock);
}

int KillBlock() {
    // <conv.chunks.Comment object at 0x1011fc860>
    // <conv.chunks.Comment object at 0x1011fca40>
    lda(0x0);
    JMP(UpdSte);
}

int UpdSte() {
    // <conv.chunks.Comment object at 0x1011fcb00>
    sta(Block_State, x);
    return 0;
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(0x1);
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // <conv.chunks.Comment object at 0x1011fce90>
    // <conv.chunks.Comment object at 0x1011fcf20>
    stx(ObjectOffset);
    lda(VRAM_Buffer1);
    BNE(NextBUpd);
    lda(Block_RepFlag, x);
    BEQ(NextBUpd);
    lda(Block_BBuf_Low, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x1011fd100>
    // <conv.chunks.Comment object at 0x1011fd220>
    // <conv.chunks.Comment object at 0x1011fd340>
    // <conv.chunks.Comment object at 0x1011fd490>
    // <conv.chunks.Comment object at 0x1011fd5b0>
    // <conv.chunks.Comment object at 0x1011fd730>
    lda(0x5);
    sta(0x7);
    lda(Block_Orig_YPos, x);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1011fd940>
    // <conv.chunks.Comment object at 0x1011fd9d0>
    // <conv.chunks.Comment object at 0x1011fdbb0>
    tay();
    lda(Block_Metatile, x);
    sta((0x6), y);
    JSR(ReplaceBlockMetatile);
    // <conv.chunks.Comment object at 0x1011fdd30>
    // <conv.chunks.Comment object at 0x1011fde80>
    // <conv.chunks.Comment object at 0x1011fdee0>
    lda(0x0);
    sta(Block_RepFlag, x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // <conv.chunks.Comment object at 0x1011fe180>
    // <conv.chunks.Comment object at 0x1011fe360>
    dex();
    BPL(UpdateLoop);
    return 0;
    JMP(MoveEnemyHorizontally);
}

int MoveEnemyHorizontally() {
    inx();
    JSR(MoveObjectHorizontally);
    ldx(ObjectOffset);
    return 0;
    JMP(MovePlayerHorizontally);
}

int MovePlayerHorizontally() {
    lda(JumpspringAnimCtrl);
    BNE(ExXMove);
    tax();
    JMP(MoveObjectHorizontally);
}

int MoveObjectHorizontally() {
    lda(SprObject_X_Speed, x);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1011fee70>
    // <conv.chunks.Comment object at 0x1011feff0>
    // <conv.chunks.Comment object at 0x1011ff0b0>
    asl();
    asl();
    sta(0x1);
    lda(SprObject_X_Speed, x);
    lsr();
    // <conv.chunks.Comment object at 0x1011ff290>
    // <conv.chunks.Comment object at 0x1011ff320>
    // <conv.chunks.Comment object at 0x1011ff500>
    lsr();
    lsr();
    lsr();
    cmp(0x8);
    // <conv.chunks.Comment object at 0x1011ff740>
    BCC(SaveXSpd);
    ora(0b11110000);
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // <conv.chunks.Comment object at 0x1011ff950>
    // <conv.chunks.Comment object at 0x1011ffa70>
    sta(0x0);
    ldy(0x0);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x1011ffb60>
    // <conv.chunks.Comment object at 0x1011ffc50>
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // <conv.chunks.Comment object at 0x1011fff20>
    // <conv.chunks.Comment object at 0x1011fffb0>
    sty(0x2);
    lda(SprObject_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x1011fffe0>
    clc();
    adc(0x1);
    sta(SprObject_X_MoveForce, x);
    lda(0x0);
    rol();
    pha();
    ror();
    // <conv.chunks.Comment object at 0x101208350>
    // <conv.chunks.Comment object at 0x1012083e0>
    // <conv.chunks.Comment object at 0x1012085c0>
    // <conv.chunks.Comment object at 0x101208710>
    // <conv.chunks.Comment object at 0x1012087d0>
    // <conv.chunks.Comment object at 0x101208890>
    lda(SprObject_X_Position, x);
    adc(0x0);
    sta(SprObject_X_Position, x);
    // <conv.chunks.Comment object at 0x101208a70>
    // <conv.chunks.Comment object at 0x101208b00>
    lda(SprObject_PageLoc, x);
    adc(0x2);
    sta(SprObject_PageLoc, x);
    // <conv.chunks.Comment object at 0x101208e00>
    // <conv.chunks.Comment object at 0x101208e90>
    pla();
    clc();
    adc(0x0);
    JMP(ExXMove);
}

int ExXMove() {
    // <conv.chunks.Comment object at 0x101209100>
    // <conv.chunks.Comment object at 0x1012091c0>
    // <conv.chunks.Comment object at 0x101209250>
    return 0;
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x101209400>
    // <conv.chunks.Comment object at 0x101209460>
    // <conv.chunks.Comment object at 0x1012094c0>
    lda(TimerControl);
    BNE(NoJSChk);
    lda(JumpspringAnimCtrl);
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // <conv.chunks.Comment object at 0x1012096d0>
    // <conv.chunks.Comment object at 0x101209820>
    // <conv.chunks.Comment object at 0x101209940>
    // <conv.chunks.Comment object at 0x101209a90>
    lda(VerticalForce);
    sta(0x0);
    lda(0x4);
    JMP(ImposeGravitySprObj);
    JMP(MoveD_EnemyVertically);
}

int MoveD_EnemyVertically() {
    ldy(0x3d);
    lda(Enemy_State, x);
    cmp(0x5);
    BNE(ContVMove);
    JMP(MoveFallingPlatform);
}

int MoveFallingPlatform() {
    ldy(0x20);
    JMP(ContVMove);
}

int ContVMove() {
    // <conv.chunks.Comment object at 0x10120a480>
    // <conv.chunks.Comment object at 0x10120a510>
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
    // <conv.chunks.Comment object at 0x10120ab40>
    lda(0x3);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10120acf0>
    lda(0x6);
    sta(0x1);
    // <conv.chunks.Comment object at 0x10120af00>
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
    // <conv.chunks.Comment object at 0x10120b6b0>
    // <conv.chunks.Comment object at 0x10120b740>
    lda(0x2);
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(0x1c);
    JMP(SetHiMax);
}

int SetHiMax() {
    // <conv.chunks.Comment object at 0x10120baa0>
    // <conv.chunks.Comment object at 0x10120bb30>
    lda(0x3);
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // <conv.chunks.Comment object at 0x10120bc80>
    sty(0x0);
    inx();
    JSR(ImposeGravitySprObj);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10120bd40>
    // <conv.chunks.Comment object at 0x10120bf20>
    // <conv.chunks.Comment object at 0x101854080>
    return 0;
    JMP(ResidualGravityCode);
}

int ResidualGravityCode() {
    ldy(0x0);
    JMP(ImposeGravityBlock);
}

int ImposeGravityBlock() {
    ldy(0x1);
    lda(0x50);
    // <conv.chunks.Comment object at 0x101854590>
    // <conv.chunks.Comment object at 0x101854680>
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
    // <conv.chunks.Comment object at 0x101855010>
    pha();
    ldy(Enemy_ID, x);
    inx();
    lda(0x5);
    cpy(0x29);
    BNE(SetDplSpd);
    lda(0x9);
    JMP(SetDplSpd);
}

int SetDplSpd() {
    // <conv.chunks.Comment object at 0x101855220>
    // <conv.chunks.Comment object at 0x1018553a0>
    // <conv.chunks.Comment object at 0x101855430>
    // <conv.chunks.Comment object at 0x1018554c0>
    // <conv.chunks.Comment object at 0x1018555e0>
    // <conv.chunks.Comment object at 0x101855790>
    // <conv.chunks.Comment object at 0x101855820>
    sta(0x0);
    lda(0xa);
    // <conv.chunks.Comment object at 0x1018559a0>
    sta(0x1);
    lda(0x3);
    // <conv.chunks.Comment object at 0x101855a90>
    sta(0x2);
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101855fd0>
    // <conv.chunks.Comment object at 0x1018560f0>
    return 0;
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // <conv.chunks.Comment object at 0x1018562d0>
    // <conv.chunks.Comment object at 0x101856330>
    // <conv.chunks.Comment object at 0x1018563c0>
    lda(SprObject_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x1018565a0>
    adc(SprObject_Y_MoveForce, x);
    sta(SprObject_YMF_Dummy, x);
    ldy(0x0);
    lda(SprObject_Y_Speed, x);
    BPL(AlterYP);
    dey();
    JMP(AlterYP);
}

int AlterYP() {
    // <conv.chunks.Comment object at 0x101856870>
    // <conv.chunks.Comment object at 0x101856900>
    // <conv.chunks.Comment object at 0x101856ae0>
    // <conv.chunks.Comment object at 0x101856c60>
    // <conv.chunks.Comment object at 0x101856cf0>
    sty(0x7);
    adc(SprObject_Y_Position, x);
    sta(SprObject_Y_Position, x);
    // <conv.chunks.Comment object at 0x101856e10>
    // <conv.chunks.Comment object at 0x101856fc0>
    lda(SprObject_Y_HighPos, x);
    adc(0x7);
    sta(SprObject_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x101857260>
    // <conv.chunks.Comment object at 0x1018572f0>
    lda(SprObject_Y_MoveForce, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x101857680>
    sta(SprObject_Y_MoveForce, x);
    lda(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x101857890>
    adc(0x0);
    sta(SprObject_Y_Speed, x);
    cmp(0x2);
    BMI(ChkUpM);
    // <conv.chunks.Comment object at 0x101857c20>
    // <conv.chunks.Comment object at 0x101857cb0>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    // <conv.chunks.Comment object at 0x101857f80>
    BCC(ChkUpM);
    lda(0x2);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10185c200>
    lda(0x0);
    sta(SprObject_Y_MoveForce, x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // <conv.chunks.Comment object at 0x10185c4a0>
    // <conv.chunks.Comment object at 0x10185c680>
    pla();
    BEQ(ExVMove);
    // <conv.chunks.Comment object at 0x10185c7a0>
    lda(0x2);
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x10185c8f0>
    tay();
    iny();
    sty(0x7);
    // <conv.chunks.Comment object at 0x10185cc50>
    lda(SprObject_Y_MoveForce, x);
    sec();
    sbc(0x1);
    sta(SprObject_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x10185ce90>
    // <conv.chunks.Comment object at 0x10185cf50>
    // <conv.chunks.Comment object at 0x10185cfe0>
    lda(SprObject_Y_Speed, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x10185d2b0>
    sta(SprObject_Y_Speed, x);
    cmp(0x7);
    BPL(ExVMove);
    // <conv.chunks.Comment object at 0x10185d520>
    // <conv.chunks.Comment object at 0x10185d5b0>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    BCS(ExVMove);
    // <conv.chunks.Comment object at 0x10185d880>
    // <conv.chunks.Comment object at 0x10185d910>
    lda(0x7);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10185daf0>
    lda(0xff);
    sta(SprObject_Y_MoveForce, x);
    JMP(ExVMove);
}

int ExVMove() {
    // <conv.chunks.Comment object at 0x10185dd90>
    // <conv.chunks.Comment object at 0x10185dfa0>
    return 0;
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda(Enemy_Flag, x);
    pha();
    // <conv.chunks.Comment object at 0x10185e120>
    // <conv.chunks.Comment object at 0x10185e2a0>
    asl();
    BCS(ChkBowserF);
    pla();
    BEQ(ChkAreaTsk);
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}

int ChkAreaTsk() {
    // <conv.chunks.Comment object at 0x10185e3c0>
    // <conv.chunks.Comment object at 0x10185e510>
    // <conv.chunks.Comment object at 0x10185e5a0>
    // <conv.chunks.Comment object at 0x10185e6c0>
    // <conv.chunks.Comment object at 0x10185e7e0>
    lda(AreaParserTaskNum);
    anda(0x7);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x10185e990>
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // <conv.chunks.Comment object at 0x10185ec30>
    // <conv.chunks.Comment object at 0x10185ed50>
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x10185ee40>
    tay();
    lda(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x10185eff0>
    BNE(ExitELCore);
    sta(Enemy_Flag, x);
    JMP(ExitELCore);
}

int ExitELCore() {
    return 0;
    JMP(ExecGameLoopback);
}

int ExecGameLoopback() {
    lda(Player_PageLoc);
    // <conv.chunks.Comment object at 0x10185f5f0>
    sec();
    sbc(0x4);
    sta(Player_PageLoc);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x101864bc0>
    sec();
    sbc(0x4);
    sta(CurrentPageLoc);
    lda(ScreenLeft_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x101864f50>
    // <conv.chunks.Comment object at 0x1018650a0>
    sbc(0x4);
    sta(ScreenLeft_PageLoc);
    lda(ScreenRight_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x101865310>
    // <conv.chunks.Comment object at 0x101865460>
    sbc(0x4);
    sta(ScreenRight_PageLoc);
    lda(AreaObjectPageLoc);
    sec();
    // <conv.chunks.Comment object at 0x1018656d0>
    // <conv.chunks.Comment object at 0x101865820>
    sbc(0x4);
    sta(AreaObjectPageLoc);
    lda(0x0);
    sta(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x101865a90>
    // <conv.chunks.Comment object at 0x101865b20>
    sta(AreaObjectPageSel);
    sta(EnemyDataOffset);
    sta(EnemyObjectPageLoc);
    lda(offsetof(G, AreaDataOfsLoopback), y);
    sta(AreaDataOffset);
    // <conv.chunks.Comment object at 0x101865dc0>
    // <conv.chunks.Comment object at 0x101865ee0>
    // <conv.chunks.Comment object at 0x101866000>
    // <conv.chunks.Comment object at 0x101866150>
    return 0;
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda(LoopCommand);
    // <conv.chunks.Comment object at 0x101866330>
    BEQ(ChkEnemyFrenzy);
    lda(CurrentColumnPos);
    BNE(ChkEnemyFrenzy);
    ldy(0xb);
    JMP(FindLoop);
}

int FindLoop() {
    dey();
    BMI(ChkEnemyFrenzy);
    lda(WorldNumber);
    cmp(offsetof(G, LoopCmdWorldNumber), y);
    // <conv.chunks.Comment object at 0x101866960>
    // <conv.chunks.Comment object at 0x101866a80>
    // <conv.chunks.Comment object at 0x101866ba0>
    BNE(FindLoop);
    lda(CurrentPageLoc);
    cmp(offsetof(G, LoopCmdPageNumber), y);
    // <conv.chunks.Comment object at 0x101866de0>
    // <conv.chunks.Comment object at 0x101866f00>
    BNE(FindLoop);
    lda(Player_Y_Position);
    cmp(offsetof(G, LoopCmdYPosition), y);
    // <conv.chunks.Comment object at 0x101867140>
    // <conv.chunks.Comment object at 0x101867260>
    BNE(WrongChk);
    lda(Player_State);
    cmp(0x0);
    BNE(WrongChk);
    lda(WorldNumber);
    cmp(World7);
    BNE(InitMLp);
    inc(MultiLoopCorrectCntr);
    JMP(IncMLoop);
}

int IncMLoop() {
    // <conv.chunks.Comment object at 0x1018674a0>
    // <conv.chunks.Comment object at 0x1018675c0>
    // <conv.chunks.Comment object at 0x101867650>
    // <conv.chunks.Comment object at 0x101867800>
    // <conv.chunks.Comment object at 0x101867920>
    // <conv.chunks.Comment object at 0x101867980>
    // <conv.chunks.Comment object at 0x101867bc0>
    // <conv.chunks.Comment object at 0x101867ce0>
    inc(MultiLoopPassCntr);
    lda(MultiLoopPassCntr);
    // <conv.chunks.Comment object at 0x101867e30>
    cmp(0x3);
    BNE(InitLCmd);
    lda(MultiLoopCorrectCntr);
    // <conv.chunks.Comment object at 0x101867fb0>
    // <conv.chunks.Comment object at 0x1018701a0>
    cmp(0x3);
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // <conv.chunks.Comment object at 0x101870320>
    // <conv.chunks.Comment object at 0x101870500>
    // <conv.chunks.Comment object at 0x101870620>
    lda(WorldNumber);
    cmp(World7);
    // <conv.chunks.Comment object at 0x101870770>
    BEQ(IncMLoop);
    JMP(DoLpBack);
}

int DoLpBack() {
    // <conv.chunks.Comment object at 0x1018709b0>
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}

int InitMLp() {
    // <conv.chunks.Comment object at 0x101870bf0>
    lda(0x0);
    sta(MultiLoopPassCntr);
    sta(MultiLoopCorrectCntr);
    JMP(InitLCmd);
}

int InitLCmd() {
    // <conv.chunks.Comment object at 0x101870f50>
    lda(0x0);
    sta(LoopCommand);
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda(EnemyFrenzyQueue);
    BEQ(ProcessEnemyData);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1018711f0>
    // <conv.chunks.Comment object at 0x101871310>
    // <conv.chunks.Comment object at 0x101871430>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1018715e0>
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101871820>
    sta(EnemyFrenzyQueue);
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy(EnemyDataOffset);
    lda((EnemyData), y);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x101871cd0>
    // <conv.chunks.Comment object at 0x101871df0>
    // <conv.chunks.Comment object at 0x101871f70>
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1018722d0>
    cmp(0xe);
    BEQ(CheckRightBounds);
    cpx(0x5);
    BCC(CheckRightBounds);
    // <conv.chunks.Comment object at 0x101872450>
    // <conv.chunks.Comment object at 0x101872600>
    // <conv.chunks.Comment object at 0x101872690>
    iny();
    lda((EnemyData), y);
    anda(0b111111);
    cmp(0x2e);
    BEQ(CheckRightBounds);
    return 0;
    JMP(CheckRightBounds);
}

int CheckRightBounds() {
    lda(ScreenRight_X_Pos);
    // <conv.chunks.Comment object at 0x101872ea0>
    clc();
    adc(0x30);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x1018730b0>
    sta(0x7);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x101873260>
    adc(0x0);
    sta(0x6);
    // <conv.chunks.Comment object at 0x101873590>
    ldy(EnemyDataOffset);
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x101873800>
    asl();
    BCC(CheckPageCtrlRow);
    lda(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x101873b00>
    BNE(CheckPageCtrlRow);
    inc(EnemyObjectPageSel);
    inc(EnemyObjectPageLoc);
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10187c050>
    anda(0xf);
    cmp(0xf);
    BNE(PositionEnemyObj);
    lda(EnemyObjectPageSel);
    BNE(PositionEnemyObj);
    // <conv.chunks.Comment object at 0x10187c230>
    // <conv.chunks.Comment object at 0x10187c350>
    // <conv.chunks.Comment object at 0x10187c500>
    // <conv.chunks.Comment object at 0x10187c620>
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10187c7d0>
    anda(0b111111);
    sta(EnemyObjectPageLoc);
    inc(EnemyDataOffset);
    // <conv.chunks.Comment object at 0x10187ca40>
    // <conv.chunks.Comment object at 0x10187cb60>
    inc(EnemyDataOffset);
    inc(EnemyObjectPageSel);
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda(EnemyObjectPageLoc);
    sta(Enemy_PageLoc, x);
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10187cfe0>
    // <conv.chunks.Comment object at 0x10187d100>
    // <conv.chunks.Comment object at 0x10187d250>
    anda(0b11110000);
    sta(Enemy_X_Position, x);
    cmp(ScreenRight_X_Pos);
    lda(Enemy_PageLoc, x);
    sbc(ScreenRight_PageLoc);
    BCS(CheckRightExtBounds);
    // <conv.chunks.Comment object at 0x10187d4c0>
    // <conv.chunks.Comment object at 0x10187d610>
    // <conv.chunks.Comment object at 0x10187d730>
    // <conv.chunks.Comment object at 0x10187d880>
    // <conv.chunks.Comment object at 0x10187d9a0>
    lda((EnemyData), y);
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x10187dc10>
    // <conv.chunks.Comment object at 0x10187dd30>
    BEQ(ParseRow0e);
    JMP(CheckThreeBytes);
    JMP(CheckRightExtBounds);
}

int CheckRightExtBounds() {
    lda(0x7);
    cmp(Enemy_X_Position, x);
    lda(0x6);
    sbc(Enemy_PageLoc, x);
    BCC(CheckFrenzyBuffer);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10187e0c0>
    // <conv.chunks.Comment object at 0x10187e150>
    // <conv.chunks.Comment object at 0x10187e330>
    // <conv.chunks.Comment object at 0x10187e3c0>
    // <conv.chunks.Comment object at 0x10187e570>
    // <conv.chunks.Comment object at 0x10187e690>
    sta(Enemy_Y_HighPos, x);
    lda((EnemyData), y);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x10187e8d0>
    // <conv.chunks.Comment object at 0x10187ea80>
    // <conv.chunks.Comment object at 0x10187eb40>
    asl();
    asl();
    sta(Enemy_Y_Position, x);
    cmp(0xe0);
    BEQ(ParseRow0e);
    // <conv.chunks.Comment object at 0x10187ee10>
    // <conv.chunks.Comment object at 0x10187eea0>
    iny();
    lda((EnemyData), y);
    anda(0b1000000);
    BEQ(CheckForEnemyGroup);
    lda(SecondaryHardMode);
    BEQ(Inc2B);
    JMP(CheckForEnemyGroup);
}

int CheckForEnemyGroup() {
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10187f740>
    anda(0b111111);
    cmp(0x37);
    // <conv.chunks.Comment object at 0x10187f9b0>
    BCC(BuzzyBeetleMutate);
    cmp(0x3f);
    BCC(DoGroup);
    JMP(BuzzyBeetleMutate);
}

int BuzzyBeetleMutate() {
    cmp(Goomba);
    BNE(StrID);
    ldy(PrimaryHardMode);
    BEQ(StrID);
    // <conv.chunks.Comment object at 0x10187fe60>
    // <conv.chunks.Comment object at 0x10187fec0>
    // <conv.chunks.Comment object at 0x101884140>
    // <conv.chunks.Comment object at 0x101884260>
    lda(BuzzyBeetle);
    JMP(StrID);
}

int StrID() {
    // <conv.chunks.Comment object at 0x1018844a0>
    sta(Enemy_ID, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1018846b0>
    JSR(InitEnemyObject);
    lda(Enemy_Flag, x);
    BNE(Inc2B);
    // <conv.chunks.Comment object at 0x101884980>
    // <conv.chunks.Comment object at 0x101884ad0>
    return 0;
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda(EnemyFrenzyBuffer);
    BNE(StrFre);
    lda(VineFlagOffset);
    // <conv.chunks.Comment object at 0x101884ce0>
    // <conv.chunks.Comment object at 0x101884e00>
    // <conv.chunks.Comment object at 0x101884f50>
    cmp(0x1);
    BNE(ExEPar);
    lda(VineObject);
    JMP(StrFre);
}

int StrFre() {
    // <conv.chunks.Comment object at 0x1018850d0>
    // <conv.chunks.Comment object at 0x1018852b0>
    // <conv.chunks.Comment object at 0x1018853d0>
    sta(Enemy_ID, x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018855b0>
    sta(Enemy_State, x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // <conv.chunks.Comment object at 0x1018857f0>
    // <conv.chunks.Comment object at 0x101885910>
    return 0;
    JMP(DoGroup);
}

int DoGroup() {
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}

int ParseRow0e() {
    iny();
    // <conv.chunks.Comment object at 0x101885c10>
    iny();
    lda((EnemyData), y);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x101885eb0>
    // <conv.chunks.Comment object at 0x101885f70>
    lsr();
    lsr();
    lsr();
    cmp(WorldNumber);
    BNE(NotUse);
    dey();
    lda((EnemyData), y);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x1018861b0>
    // <conv.chunks.Comment object at 0x1018862d0>
    // <conv.chunks.Comment object at 0x101886450>
    // <conv.chunks.Comment object at 0x1018864e0>
    // <conv.chunks.Comment object at 0x101886660>
    iny();
    lda((EnemyData), y);
    anda(0b11111);
    sta(EntrancePage);
    JMP(NotUse);
}

int NotUse() {
    JMP(Inc3B);
    JMP(CheckThreeBytes);
}

int CheckThreeBytes() {
    ldy(EnemyDataOffset);
    lda((EnemyData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x101886d80>
    // <conv.chunks.Comment object at 0x101886ea0>
    // <conv.chunks.Comment object at 0x101887020>
    cmp(0xe);
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // <conv.chunks.Comment object at 0x101887350>
    inc(EnemyDataOffset);
    JMP(Inc2B);
}

int Inc2B() {
    // <conv.chunks.Comment object at 0x1018874d0>
    inc(EnemyDataOffset);
    inc(EnemyDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101887740>
    sta(EnemyObjectPageSel);
    ldx(ObjectOffset);
    return 0;
    JMP(CheckpointEnemyID);
}

int CheckpointEnemyID() {
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(InitEnemyRoutines);
    tay();
    // <conv.chunks.Comment object at 0x101887c80>
    // <conv.chunks.Comment object at 0x101887d10>
    // <conv.chunks.Comment object at 0x101887ef0>
    lda(Enemy_Y_Position, x);
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1018900e0>
    // <conv.chunks.Comment object at 0x101890170>
    lda(0x1);
    sta(EnemyOffscrBitsMasked, x);
    tya();
    JMP(InitEnemyRoutines);
}

int InitEnemyRoutines() {
    JMP(NoInitCode);
}

int NoInitCode() {
    return 0;
    JMP(InitGoomba);
}

int InitGoomba() {
    JSR(InitNormalEnemy);
    JMP(SmallBBox);
    JMP(InitPodoboo);
}

int InitPodoboo() {
    lda(0x2);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x101892ba0>
    // <conv.chunks.Comment object at 0x101892c30>
    sta(Enemy_Y_Position, x);
    lsr();
    sta(EnemyIntervalTimer, x);
    // <conv.chunks.Comment object at 0x101892fc0>
    lsr();
    sta(Enemy_State, x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(0xb8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101893470>
    // <conv.chunks.Comment object at 0x101893500>
    return 0;
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(0x1);
    lda(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x101893830>
    // <conv.chunks.Comment object at 0x1018939b0>
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // <conv.chunks.Comment object at 0x101893cb0>
    // <conv.chunks.Comment object at 0x101893d40>
    lda(offsetof(G, NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // <conv.chunks.Comment object at 0x101893ef0>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1018a0260>
    // <conv.chunks.Comment object at 0x1018a0380>
    sta(Enemy_State, x);
    return 0;
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(0x0);
    sta(HammerThrowingTimer, x);
    // <conv.chunks.Comment object at 0x1018a0710>
    // <conv.chunks.Comment object at 0x1018a0890>
    sta(Enemy_X_Speed, x);
    ldy(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x1018a0b90>
    lda(offsetof(G, HBroWalkingTimerData), y);
    sta(EnemyIntervalTimer, x);
    lda(0xb);
    // <conv.chunks.Comment object at 0x1018a0dd0>
    // <conv.chunks.Comment object at 0x1018a0f20>
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018a11c0>
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018a1460>
    sta(BlooperMoveSpeed, x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // <conv.chunks.Comment object at 0x1018a16a0>
    lda(0x9);
    BNE(SetBBox);
    JMP(InitRedPTroopa);
}

int InitRedPTroopa() {
    ldy(0x30);
    lda(Enemy_Y_Position, x);
    sta(RedPTroopaOrigXPos, x);
    BPL(GetCent);
    ldy(0xe0);
    JMP(GetCent);
}

int GetCent() {
    // <conv.chunks.Comment object at 0x1018a19a0>
    // <conv.chunks.Comment object at 0x1018a1a30>
    // <conv.chunks.Comment object at 0x1018a1c10>
    // <conv.chunks.Comment object at 0x1018a1d60>
    // <conv.chunks.Comment object at 0x1018a1eb0>
    // <conv.chunks.Comment object at 0x1018a1f40>
    tya();
    adc(Enemy_Y_Position, x);
    sta(RedPTroopaCenterYPos, x);
    JMP(TallBBox);
}

int TallBBox() {
    // <conv.chunks.Comment object at 0x1018a20f0>
    // <conv.chunks.Comment object at 0x1018a2240>
    // <conv.chunks.Comment object at 0x1018a2390>
    lda(0x3);
    JMP(SetBBox);
}

int SetBBox() {
    // <conv.chunks.Comment object at 0x1018a2450>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1018a2690>
    sta(Enemy_MovingDir, x);
    JMP(InitVStf);
}

int InitVStf() {
    // <conv.chunks.Comment object at 0x1018a28d0>
    lda(0x0);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1018a2990>
    sta(Enemy_Y_MoveForce, x);
    return 0;
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x1018a2d80>
    sta(Enemy_MovingDir, x);
    lda(0x9);
    // <conv.chunks.Comment object at 0x1018a2fc0>
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda(PseudoRandomBitReg, x);
    anda(0b10000);
    sta(CheepCheepMoveMFlag, x);
    // <conv.chunks.Comment object at 0x1018a32f0>
    // <conv.chunks.Comment object at 0x1018a3410>
    // <conv.chunks.Comment object at 0x1018a3560>
    // <conv.chunks.Comment object at 0x1018a3680>
    lda(Enemy_Y_Position, x);
    sta(CheepCheepOrigYPos, x);
    // <conv.chunks.Comment object at 0x1018a38f0>
    return 0;
    JMP(InitLakitu);
}

int InitLakitu() {
    lda(EnemyFrenzyBuffer);
    BNE(KillLakitu);
    JMP(SetupLakitu);
}

int SetupLakitu() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018a3da0>
    sta(LakituReappearTimer);
    JSR(InitHorizFlySwimEnemy);
    JMP(TallBBox2);
    JMP(KillLakitu);
}

int KillLakitu() {
    JMP(EraseEnemyObject);
    JMP(LakituAndSpinyHandler);
}

int LakituAndSpinyHandler() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1018b04a0>
    BNE(ExLSHand);
    cpx(0x5);
    // <conv.chunks.Comment object at 0x1018b0ce0>
    BCS(ExLSHand);
    lda(0x80);
    // <conv.chunks.Comment object at 0x1018b0ef0>
    sta(FrenzyEnemyTimer);
    ldy(0x4);
    JMP(ChkLak);
}

int ChkLak() {
    // <conv.chunks.Comment object at 0x1018b1100>
    // <conv.chunks.Comment object at 0x1018b1190>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc(LakituReappearTimer);
    // <conv.chunks.Comment object at 0x1018b13d0>
    // <conv.chunks.Comment object at 0x1018b1430>
    // <conv.chunks.Comment object at 0x1018b1670>
    // <conv.chunks.Comment object at 0x1018b1700>
    // <conv.chunks.Comment object at 0x1018b1850>
    lda(LakituReappearTimer);
    cmp(0x7);
    BCC(ExLSHand);
    ldx(0x4);
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // <conv.chunks.Comment object at 0x1018b1a60>
    // <conv.chunks.Comment object at 0x1018b1af0>
    // <conv.chunks.Comment object at 0x1018b1ca0>
    // <conv.chunks.Comment object at 0x1018b1d30>
    lda(Enemy_Flag, x);
    BEQ(CreateL);
    dex();
    BPL(ChkNoEn);
    BMI(RetEOfs);
    JMP(CreateL);
}

int CreateL() {
    // <conv.chunks.Comment object at 0x1018b1f70>
    // <conv.chunks.Comment object at 0x1018b20f0>
    // <conv.chunks.Comment object at 0x1018b2180>
    // <conv.chunks.Comment object at 0x1018b22d0>
    // <conv.chunks.Comment object at 0x1018b2420>
    lda(0x0);
    sta(Enemy_State, x);
    lda(Lakitu);
    // <conv.chunks.Comment object at 0x1018b26c0>
    sta(Enemy_ID, x);
    JSR(SetupLakitu);
    // <conv.chunks.Comment object at 0x1018b2930>
    lda(0x20);
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // <conv.chunks.Comment object at 0x1018b2ab0>
    // <conv.chunks.Comment object at 0x1018b2c60>
    ldx(ObjectOffset);
    JMP(ExLSHand);
}

int ExLSHand() {
    return 0;
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1018b2f00>
    cmp(0x2c);
    BCC(ExLSHand);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1018b3200>
    BNE(ExLSHand);
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1018b3440>
    // <conv.chunks.Comment object at 0x1018b3590>
    lda(Enemy_X_Position, y);
    sta(Enemy_X_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1018b3920>
    sta(Enemy_Y_HighPos, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x1018b3b60>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    lda(PseudoRandomBitReg, x);
    // <conv.chunks.Comment object at 0x1018b3f50>
    anda(0b11);
    tay();
    ldx(0x2);
    JMP(DifLoop);
}

int DifLoop() {
    // <conv.chunks.Comment object at 0x1018b82c0>
    lda(offsetof(G, PRDiffAdjustData), y);
    sta(0x1, x);
    // <conv.chunks.Comment object at 0x1018b8500>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1018b8710>
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx(ObjectOffset);
    JSR(PlayerLakituDiff);
    ldy(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1018b88f0>
    // <conv.chunks.Comment object at 0x1018b8980>
    // <conv.chunks.Comment object at 0x1018b8ad0>
    // <conv.chunks.Comment object at 0x1018b8bf0>
    // <conv.chunks.Comment object at 0x1018b8d10>
    cpy(0x8);
    BCS(SetSpSpd);
    tay();
    // <conv.chunks.Comment object at 0x1018b8e90>
    // <conv.chunks.Comment object at 0x1018b9070>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(UsePosv);
    // <conv.chunks.Comment object at 0x1018b92e0>
    // <conv.chunks.Comment object at 0x1018b9400>
    tya();
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x1018b95e0>
    tay();
    iny();
    JMP(UsePosv);
}

int UsePosv() {
    // <conv.chunks.Comment object at 0x1018b9820>
    tya();
    JMP(SetSpSpd);
}

int SetSpSpd() {
    // <conv.chunks.Comment object at 0x1018b9940>
    JSR(SmallBBox);
    ldy(0x2);
    sta(Enemy_X_Speed, x);
    cmp(0x0);
    BMI(SpinyRte);
    // <conv.chunks.Comment object at 0x1018b9af0>
    // <conv.chunks.Comment object at 0x1018b9cd0>
    // <conv.chunks.Comment object at 0x1018b9d60>
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // <conv.chunks.Comment object at 0x1018b9fa0>
    sty(Enemy_MovingDir, x);
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1018ba180>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1018ba3c0>
    lda(0x5);
    sta(Enemy_State, x);
    JMP(ChpChpEx);
}

int ChpChpEx() {
    return 0;
    JMP(InitLongFirebar);
}

int InitLongFirebar() {
    JSR(DuplicateEnemyObj);
    JMP(InitShortFirebar);
}

int InitShortFirebar() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018bb050>
    sta(FirebarSpinState_Low, x);
    lda(Enemy_ID, x);
    sec();
    // <conv.chunks.Comment object at 0x1018bb290>
    // <conv.chunks.Comment object at 0x1018bb410>
    sbc(0x1b);
    tay();
    lda(offsetof(G, FirebarSpinSpdData), y);
    // <conv.chunks.Comment object at 0x1018bb620>
    sta(FirebarSpinSpeed, x);
    lda(offsetof(G, FirebarSpinDirData), y);
    // <conv.chunks.Comment object at 0x1018bb890>
    sta(FirebarSpinDirection, x);
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x1018bbc50>
    adc(0x4);
    sta(Enemy_Y_Position, x);
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x1018c0080>
    adc(0x4);
    sta(Enemy_X_Position, x);
    lda(Enemy_PageLoc, x);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1018c0440>
    sta(Enemy_PageLoc, x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1018c0860>
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // <conv.chunks.Comment object at 0x1018c1cd0>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1018c1fd0>
    tay();
    lda(offsetof(G, FlyCCTimerData), y);
    // <conv.chunks.Comment object at 0x1018c2180>
    sta(FrenzyEnemyTimer);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x1018c23c0>
    lda(SecondaryHardMode);
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // <conv.chunks.Comment object at 0x1018c25d0>
    // <conv.chunks.Comment object at 0x1018c2750>
    // <conv.chunks.Comment object at 0x1018c27e0>
    sty(0x0);
    cpx(0x0);
    BCS(ChpChpEx);
    // <conv.chunks.Comment object at 0x1018c2840>
    // <conv.chunks.Comment object at 0x1018c2a20>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1018c2cc0>
    // <conv.chunks.Comment object at 0x1018c2e10>
    sta(0x1);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x1018c2ea0>
    sta(Enemy_Y_Speed, x);
    lda(0x0);
    ldy(Player_X_Speed);
    BEQ(GSeed);
    // <conv.chunks.Comment object at 0x1018c3230>
    // <conv.chunks.Comment object at 0x1018c32c0>
    // <conv.chunks.Comment object at 0x1018c3470>
    lda(0x4);
    cpy(0x19);
    BCC(GSeed);
    asl();
    JMP(GSeed);
}

int GSeed() {
    // <conv.chunks.Comment object at 0x1018c3620>
    // <conv.chunks.Comment object at 0x1018c3740>
    // <conv.chunks.Comment object at 0x1018c3950>
    // <conv.chunks.Comment object at 0x1018c39e0>
    pha();
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1018c3bc0>
    // <conv.chunks.Comment object at 0x1018c3b90>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(RSeed);
    // <conv.chunks.Comment object at 0x1018c3fb0>
    // <conv.chunks.Comment object at 0x1018c8110>
    lda(((PseudoRandomBitReg) + (2)), x);
    anda(0b1111);
    sta(0x0);
    JMP(RSeed);
}

int RSeed() {
    // <conv.chunks.Comment object at 0x1018c8440>
    // <conv.chunks.Comment object at 0x1018c8590>
    // <conv.chunks.Comment object at 0x1018c8620>
    pla();
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FlyCCXSpeedData), y);
    // <conv.chunks.Comment object at 0x1018c8860>
    // <conv.chunks.Comment object at 0x1018c8830>
    // <conv.chunks.Comment object at 0x1018c8a10>
    sta(Enemy_X_Speed, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1018c8c80>
    sta(Enemy_MovingDir, x);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1018c8ec0>
    BNE(D2XPos1);
    ldy(0x0);
    tya();
    // <conv.chunks.Comment object at 0x1018c9130>
    // <conv.chunks.Comment object at 0x1018c9100>
    anda(0b10);
    BEQ(D2XPos1);
    // <conv.chunks.Comment object at 0x1018c93d0>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1018c9640>
    // <conv.chunks.Comment object at 0x1018c9790>
    // <conv.chunks.Comment object at 0x1018c9820>
    sta(Enemy_X_Speed, x);
    inc(Enemy_MovingDir, x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // <conv.chunks.Comment object at 0x1018c9a60>
    // <conv.chunks.Comment object at 0x1018c9bb0>
    tya();
    anda(0b10);
    BEQ(D2XPos2);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1018c9dc0>
    // <conv.chunks.Comment object at 0x1018c9f10>
    clc();
    adc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1018ca0c0>
    // <conv.chunks.Comment object at 0x1018ca210>
    // <conv.chunks.Comment object at 0x1018ca360>
    // <conv.chunks.Comment object at 0x1018ca480>
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // <conv.chunks.Comment object at 0x1018ca6c0>
    lda(Player_X_Position);
    sec();
    sbc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(FinCCSt);
}

int FinCCSt() {
    // <conv.chunks.Comment object at 0x1018ca8d0>
    // <conv.chunks.Comment object at 0x1018caa20>
    // <conv.chunks.Comment object at 0x1018cab70>
    // <conv.chunks.Comment object at 0x1018cac90>
    // <conv.chunks.Comment object at 0x1018cad20>
    sta(Enemy_PageLoc, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1018cafc0>
    // <conv.chunks.Comment object at 0x1018cb1a0>
    lda(0xf8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1018cb350>
    return 0;
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx(BowserFront_Offset);
    // <conv.chunks.Comment object at 0x1018cb620>
    // <conv.chunks.Comment object at 0x1018cb740>
    lda(0x0);
    sta(BowserBodyControls);
    sta(BridgeCollapseOffset);
    // <conv.chunks.Comment object at 0x1018cb8c0>
    // <conv.chunks.Comment object at 0x1018cba70>
    lda(Enemy_X_Position, x);
    sta(BowserOrigXPos);
    // <conv.chunks.Comment object at 0x1018cbcb0>
    lda(0xdf);
    sta(BowserFireBreathTimer);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1018cbe30>
    // <conv.chunks.Comment object at 0x1018cbfe0>
    lda(0x20);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x1018d41d0>
    sta(EnemyFrameTimer, x);
    lda(0x5);
    sta(BowserHitPoints);
    // <conv.chunks.Comment object at 0x1018d4500>
    lsr();
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1018d4740>
    return 0;
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(0xff);
    JMP(FSLoop);
}

int FSLoop() {
    // <conv.chunks.Comment object at 0x1018d4950>
    // <conv.chunks.Comment object at 0x1018d49e0>
    iny();
    lda(Enemy_Flag, y);
    BNE(FSLoop);
    sty(DuplicateObj_Offset);
    txa();
    ora(0b10000000);
    sta(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x1018d4b90>
    // <conv.chunks.Comment object at 0x1018d4ce0>
    // <conv.chunks.Comment object at 0x1018d4e30>
    // <conv.chunks.Comment object at 0x1018d4f80>
    // <conv.chunks.Comment object at 0x1018d5010>
    // <conv.chunks.Comment object at 0x1018d5130>
    lda(Enemy_PageLoc, x);
    sta(Enemy_PageLoc, y);
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1018d53a0>
    // <conv.chunks.Comment object at 0x1018d54f0>
    sta(Enemy_X_Position, y);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, y);
    // <conv.chunks.Comment object at 0x1018d57c0>
    // <conv.chunks.Comment object at 0x1018d59a0>
    lda(Enemy_Y_Position, x);
    sta(Enemy_Y_Position, y);
    JMP(FlmEx);
}

int FlmEx() {
    // <conv.chunks.Comment object at 0x1018d5c10>
    // <conv.chunks.Comment object at 0x1018d5d60>
    return 0;
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1018d5fa0>
    BNE(FlmEx);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1018d64e0>
    lda(NoiseSoundQueue);
    ora(Sfx_BowserFlame);
    // <conv.chunks.Comment object at 0x1018d6720>
    sta(NoiseSoundQueue);
    ldy(BowserFront_Offset);
    lda(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x1018d6930>
    // <conv.chunks.Comment object at 0x1018d6a50>
    cmp(Bowser);
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x1018d6bd0>
    // <conv.chunks.Comment object at 0x1018d6de0>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x1018d6f90>
    ldy(SecondaryHardMode);
    BEQ(SetFrT);
    // <conv.chunks.Comment object at 0x1018d71a0>
    sec();
    sbc(0x10);
    JMP(SetFrT);
}

int SetFrT() {
    // <conv.chunks.Comment object at 0x1018d7380>
    // <conv.chunks.Comment object at 0x1018d7410>
    sta(FrenzyEnemyTimer);
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(BowserFlamePRandomOfs, x);
    tay();
    lda(offsetof(G, FlameYPosData), y);
    JMP(PutAtRightExtent);
}

int PutAtRightExtent() {
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1018d7bf0>
    lda(ScreenRight_X_Pos);
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x1018d7ec0>
    sta(Enemy_X_Position, x);
    lda(ScreenRight_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1018e0230>
    sta(Enemy_PageLoc, x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x1018e05c0>
    sec();
    sbc(0xe);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1018e07a0>
    // <conv.chunks.Comment object at 0x1018e0830>
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1018e0b30>
    lda(Enemy_Y_Position, y);
    clc();
    // <conv.chunks.Comment object at 0x1018e0dd0>
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1018e0ec0>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(Enemy_YMF_Dummy, x);
    tay();
    lda(offsetof(G, FlameYPosData), y);
    ldy(0x0);
    cmp(Enemy_Y_Position, x);
    BCC(SetMF);
    iny();
    JMP(SetMF);
}

int SetMF() {
    // <conv.chunks.Comment object at 0x1018e11c0>
    // <conv.chunks.Comment object at 0x1018e12e0>
    // <conv.chunks.Comment object at 0x1018e1460>
    // <conv.chunks.Comment object at 0x1018e14f0>
    // <conv.chunks.Comment object at 0x1018e1640>
    // <conv.chunks.Comment object at 0x1018e16d0>
    // <conv.chunks.Comment object at 0x1018e18b0>
    // <conv.chunks.Comment object at 0x1018e1a30>
    // <conv.chunks.Comment object at 0x1018e1ac0>
    lda(offsetof(G, FlameYMFAdderData), y);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1018e1c70>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x1018e2000>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1018e2240>
    // <conv.chunks.Comment object at 0x1018e22d0>
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_X_MoveForce, x);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1018e2660>
    // <conv.chunks.Comment object at 0x1018e27b0>
    return 0;
    JMP(InitFireworks);
}

int InitFireworks() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1018e2ab0>
    BNE(ExitFWk);
    lda(0x20);
    // <conv.chunks.Comment object at 0x1018e3350>
    sta(FrenzyEnemyTimer);
    dec(FireworksCounter);
    ldy(0x6);
    JMP(StarFChk);
}

int StarFChk() {
    dey();
    lda(Enemy_ID, y);
    cmp(StarFlagObject);
    BNE(StarFChk);
    // <conv.chunks.Comment object at 0x1018e3860>
    // <conv.chunks.Comment object at 0x1018e39b0>
    // <conv.chunks.Comment object at 0x1018e3ad0>
    lda(Enemy_X_Position, y);
    sec();
    sbc(0x30);
    pha();
    // <conv.chunks.Comment object at 0x1018e3d40>
    // <conv.chunks.Comment object at 0x1018e3dd0>
    // <conv.chunks.Comment object at 0x1018e3f20>
    lda(Enemy_PageLoc, y);
    sbc(0x0);
    sta(0x0);
    lda(FireworksCounter);
    // <conv.chunks.Comment object at 0x1018e8110>
    // <conv.chunks.Comment object at 0x1018e8260>
    // <conv.chunks.Comment object at 0x1018e82f0>
    clc();
    adc(Enemy_State, y);
    tay();
    pla();
    // <conv.chunks.Comment object at 0x1018e8500>
    // <conv.chunks.Comment object at 0x1018e8680>
    // <conv.chunks.Comment object at 0x1018e8740>
    clc();
    adc(offsetof(G, FireworksXPosData), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1018e8860>
    // <conv.chunks.Comment object at 0x1018e89b0>
    lda(0x0);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    lda(offsetof(G, FireworksYPosData), y);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1018e8b00>
    // <conv.chunks.Comment object at 0x1018e8c80>
    // <conv.chunks.Comment object at 0x1018e8e60>
    // <conv.chunks.Comment object at 0x1018e8fb0>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1018e9160>
    // <conv.chunks.Comment object at 0x1018e9340>
    lsr();
    sta(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x1018e9520>
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    JMP(ExitFWk);
}

int ExitFWk() {
    return 0;
    JMP(BulletBillCheepCheep);
}

int BulletBillCheepCheep() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1018e9f70>
    BNE(ExF17);
    lda(AreaType);
    BNE(DoBulletBills);
    cpx(0x3);
    BCS(ExF17);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1018ea6f0>
    // <conv.chunks.Comment object at 0x1018ea810>
    // <conv.chunks.Comment object at 0x1018ea930>
    // <conv.chunks.Comment object at 0x1018ea9c0>
    // <conv.chunks.Comment object at 0x1018eaba0>
    lda(PseudoRandomBitReg, x);
    cmp(0xaa);
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // <conv.chunks.Comment object at 0x1018eade0>
    // <conv.chunks.Comment object at 0x1018eae70>
    // <conv.chunks.Comment object at 0x1018eb080>
    // <conv.chunks.Comment object at 0x1018eb110>
    lda(WorldNumber);
    cmp(World2);
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(0b1);
    // <conv.chunks.Comment object at 0x1018eb6b0>
    tay();
    lda(offsetof(G, SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // <conv.chunks.Comment object at 0x1018eb860>
    // <conv.chunks.Comment object at 0x1018eb9b0>
    sta(Enemy_ID, x);
    lda(BitMFilter);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x1018ebc50>
    BNE(GetRBit);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018ebe90>
    sta(BitMFilter);
    JMP(GetRBit);
}

int GetRBit() {
    // <conv.chunks.Comment object at 0x1018f40e0>
    lda(PseudoRandomBitReg, x);
    anda(0b111);
    JMP(ChkRBit);
}

int ChkRBit() {
    // <conv.chunks.Comment object at 0x1018f4290>
    // <conv.chunks.Comment object at 0x1018f43b0>
    tay();
    lda(offsetof(G, Bitmasks), y);
    bit(BitMFilter);
    // <conv.chunks.Comment object at 0x1018f44d0>
    // <conv.chunks.Comment object at 0x1018f4620>
    BEQ(AddFBit);
    iny();
    // <conv.chunks.Comment object at 0x1018f4890>
    tya();
    anda(0b111);
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // <conv.chunks.Comment object at 0x1018f49b0>
    // <conv.chunks.Comment object at 0x1018f4ad0>
    // <conv.chunks.Comment object at 0x1018f4c20>
    ora(BitMFilter);
    sta(BitMFilter);
    lda(offsetof(G, Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta(Enemy_YMF_Dummy, x);
    lda(0x20);
    // <conv.chunks.Comment object at 0x1018f4da0>
    // <conv.chunks.Comment object at 0x1018f4ec0>
    // <conv.chunks.Comment object at 0x1018f5010>
    // <conv.chunks.Comment object at 0x1018f5130>
    // <conv.chunks.Comment object at 0x1018f5280>
    sta(FrenzyEnemyTimer);
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(0xff);
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // <conv.chunks.Comment object at 0x1018f55e0>
    // <conv.chunks.Comment object at 0x1018f5670>
    iny();
    cpy(0x5);
    // <conv.chunks.Comment object at 0x1018f57f0>
    BCS(FireBulletBill);
    lda(Enemy_Flag, y);
    BEQ(BB_SLoop);
    // <conv.chunks.Comment object at 0x1018f5a00>
    // <conv.chunks.Comment object at 0x1018f5b50>
    lda(Enemy_ID, y);
    cmp(BulletBill_FrenzyVar);
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // <conv.chunks.Comment object at 0x1018f5d90>
    // <conv.chunks.Comment object at 0x1018f5eb0>
    // <conv.chunks.Comment object at 0x1018f5fd0>
    return 0;
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda(Square2SoundQueue);
    ora(Sfx_Blast);
    // <conv.chunks.Comment object at 0x1018f6210>
    sta(Square2SoundQueue);
    lda(BulletBill_FrenzyVar);
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1018f67b0>
    sec();
    sbc(0x37);
    pha();
    cmp(0x4);
    BCS(SnglID);
    pha();
    ldy(Goomba);
    lda(PrimaryHardMode);
    BEQ(PullID);
    ldy(BuzzyBeetle);
    JMP(PullID);
}

int PullID() {
    // <conv.chunks.Comment object at 0x1018f6960>
    // <conv.chunks.Comment object at 0x1018f6ab0>
    // <conv.chunks.Comment object at 0x1018f6b40>
    // <conv.chunks.Comment object at 0x1018f6bd0>
    // <conv.chunks.Comment object at 0x1018f6de0>
    // <conv.chunks.Comment object at 0x1018f6e70>
    // <conv.chunks.Comment object at 0x1018f6ed0>
    // <conv.chunks.Comment object at 0x1018f70e0>
    // <conv.chunks.Comment object at 0x1018f7230>
    // <conv.chunks.Comment object at 0x1018f7350>
    pla();
    JMP(SnglID);
}

int SnglID() {
    // <conv.chunks.Comment object at 0x1018f7470>
    sty(0x1);
    ldy(0xb0);
    anda(0x2);
    BEQ(SetYGp);
    ldy(0x70);
    JMP(SetYGp);
}

int SetYGp() {
    // <conv.chunks.Comment object at 0x1018f7590>
    // <conv.chunks.Comment object at 0x1018f7680>
    // <conv.chunks.Comment object at 0x1018f77a0>
    // <conv.chunks.Comment object at 0x1018f7980>
    // <conv.chunks.Comment object at 0x1018f7a10>
    sty(0x0);
    lda(ScreenRight_PageLoc);
    sta(0x2);
    lda(ScreenRight_X_Pos);
    sta(0x3);
    ldy(0x2);
    pla();
    lsr();
    BCC(CntGrp);
    iny();
    JMP(CntGrp);
}

int CntGrp() {
    // <conv.chunks.Comment object at 0x1018f7bc0>
    // <conv.chunks.Comment object at 0x1018f7d70>
    // <conv.chunks.Comment object at 0x1018f7e00>
    // <conv.chunks.Comment object at 0x1018f7fb0>
    // <conv.chunks.Comment object at 0x1018f7f80>
    // <conv.chunks.Comment object at 0x1018fc230>
    // <conv.chunks.Comment object at 0x1018fc2f0>
    // <conv.chunks.Comment object at 0x1018fc380>
    // <conv.chunks.Comment object at 0x1018fc500>
    // <conv.chunks.Comment object at 0x1018fc590>
    sty(NumberofGroupEnemies);
    JMP(GrLoop);
}

int GrLoop() {
    // <conv.chunks.Comment object at 0x1018fc710>
    ldx(0xff);
    JMP(GSltLp);
}

int GSltLp() {
    // <conv.chunks.Comment object at 0x1018fc800>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x1018fc9b0>
    BCS(NextED);
    lda(Enemy_Flag, x);
    BNE(GSltLp);
    // <conv.chunks.Comment object at 0x1018fcbf0>
    // <conv.chunks.Comment object at 0x1018fcd40>
    lda(0x1);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1018fce90>
    lda(0x2);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1018fd0d0>
    lda(0x3);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1018fd310>
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x1018fd5e0>
    sta(0x3);
    lda(0x2);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1018fd790>
    // <conv.chunks.Comment object at 0x1018fd8b0>
    sta(0x2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1018fdac0>
    sta(Enemy_Y_Position, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1018fdd60>
    // <conv.chunks.Comment object at 0x1018fddf0>
    sta(Enemy_Flag, x);
    JSR(CheckpointEnemyID);
    dec(NumberofGroupEnemies);
    // <conv.chunks.Comment object at 0x1018fe0f0>
    // <conv.chunks.Comment object at 0x1018fe210>
    BNE(GrLoop);
    JMP(NextED);
}

int NextED() {
    // <conv.chunks.Comment object at 0x1018fe450>
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}

int InitPiranhaPlant() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1018fe660>
    sta(PiranhaPlant_Y_Speed, x);
    lsr();
    sta(Enemy_State, x);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x1018fe930>
    // <conv.chunks.Comment object at 0x1018fea80>
    lda(Enemy_Y_Position, x);
    sta(PiranhaPlantDownYPos, x);
    // <conv.chunks.Comment object at 0x1018fecf0>
    sec();
    sbc(0x18);
    sta(PiranhaPlantUpYPos, x);
    // <conv.chunks.Comment object at 0x1018fef30>
    lda(0x9);
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda(Enemy_ID, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x1018ff380>
    // <conv.chunks.Comment object at 0x1018ff4d0>
    sec();
    sbc(0x12);
    JMP(NoFrenzyCode);
}

int NoFrenzyCode() {
    return 0;
    JMP(EndFrenzy);
}

int EndFrenzy() {
    ldy(0x5);
    JMP(LakituChk);
}

int LakituChk() {
    // <conv.chunks.Comment object at 0x1018ffd70>
    // <conv.chunks.Comment object at 0x1018ffe00>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x101908050>
    BNE(NextFSlot);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101908290>
    sta(Enemy_State, y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // <conv.chunks.Comment object at 0x1019084d0>
    dey();
    BPL(LakituChk);
    // <conv.chunks.Comment object at 0x1019085c0>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x101908740>
    // <conv.chunks.Comment object at 0x1019088f0>
    return 0;
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x101908b30>
    sta(Enemy_MovingDir, x);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101908d70>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // <conv.chunks.Comment object at 0x101908fb0>
    lda(0x3);
    JMP(SetBBox2);
}

int SetBBox2() {
    // <conv.chunks.Comment object at 0x101909070>
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101909370>
    dec(Enemy_Y_Position, x);
    ldy(SecondaryHardMode);
    BNE(AlignP);
    ldy(0x2);
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // <conv.chunks.Comment object at 0x1019095e0>
    // <conv.chunks.Comment object at 0x101909700>
    // <conv.chunks.Comment object at 0x101909850>
    // <conv.chunks.Comment object at 0x1019098e0>
    // <conv.chunks.Comment object at 0x101909a90>
    ldy(0xff);
    lda(BalPlatformAlignment);
    sta(Enemy_State, x);
    BPL(SetBPA);
    txa();
    tay();
    JMP(SetBPA);
}

int SetBPA() {
    // <conv.chunks.Comment object at 0x101909b80>
    // <conv.chunks.Comment object at 0x101909d30>
    // <conv.chunks.Comment object at 0x101909e80>
    // <conv.chunks.Comment object at 0x10190a000>
    // <conv.chunks.Comment object at 0x10190a0c0>
    // <conv.chunks.Comment object at 0x10190a150>
    sty(BalPlatformAlignment);
    lda(0x0);
    sta(Enemy_MovingDir, x);
    tay();
    JSR(PosPlatform);
    JMP(InitDropPlatform);
}

int InitDropPlatform() {
    lda(0xff);
    sta(PlatformCollisionFlag, x);
    JMP(CommonPlatCode);
    JMP(InitHoriPlatform);
}

int InitHoriPlatform() {
    lda(0x0);
    sta(XMoveSecondaryCounter, x);
    JMP(CommonPlatCode);
    JMP(InitVertPlatform);
}

int InitVertPlatform() {
    ldy(0x40);
    lda(Enemy_Y_Position, x);
    BPL(SetYO);
    // <conv.chunks.Comment object at 0x10190af00>
    // <conv.chunks.Comment object at 0x10190af90>
    // <conv.chunks.Comment object at 0x10190b170>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10190b3e0>
    adc(0x1);
    ldy(0xc0);
    JMP(SetYO);
}

int SetYO() {
    // <conv.chunks.Comment object at 0x10190b4d0>
    // <conv.chunks.Comment object at 0x10190b5f0>
    sta(YPlatformTopYPos, x);
    tya();
    clc();
    adc(Enemy_Y_Position, x);
    sta(YPlatformCenterYPos, x);
    JMP(CommonPlatCode);
}

int CommonPlatCode() {
    JSR(InitVStf);
    JMP(SPBBox);
}

int SPBBox() {
    // <conv.chunks.Comment object at 0x10190bc80>
    // <conv.chunks.Comment object at 0x10190bda0>
    lda(0x5);
    ldy(AreaType);
    cpy(0x3);
    BEQ(CasPBB);
    ldy(SecondaryHardMode);
    BNE(CasPBB);
    lda(0x6);
    JMP(CasPBB);
}

int CasPBB() {
    // <conv.chunks.Comment object at 0x101918050>
    // <conv.chunks.Comment object at 0x1019180e0>
    // <conv.chunks.Comment object at 0x1019182c0>
    // <conv.chunks.Comment object at 0x1019183e0>
    // <conv.chunks.Comment object at 0x101918530>
    // <conv.chunks.Comment object at 0x1019185c0>
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
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
    // <conv.chunks.Comment object at 0x101918e60>
    sta(Enemy_Y_MoveForce, x);
    lda(0xff);
    // <conv.chunks.Comment object at 0x1019190a0>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(0xf0);
    // <conv.chunks.Comment object at 0x101919460>
    sta(Enemy_Y_MoveForce, x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1019196a0>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(0x1);
    JSR(PosPlatform);
    // <conv.chunks.Comment object at 0x1019199a0>
    lda(0x4);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x101919bb0>
    return 0;
    JMP(PosPlatform);
}

int PosPlatform() {
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x101919e80>
    clc();
    adc(offsetof(G, PlatPosDataLow), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10191a420>
    // <conv.chunks.Comment object at 0x10191a570>
    lda(Enemy_PageLoc, x);
    adc(offsetof(G, PlatPosDataHigh), y);
    sta(Enemy_PageLoc, x);
    return 0;
    JMP(EndOfEnemyInitCode);
}

int EndOfEnemyInitCode() {
    return 0;
    JMP(RunEnemyObjectsCore);
}

int RunEnemyObjectsCore() {
    ldx(ObjectOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10191ac90>
    // <conv.chunks.Comment object at 0x10191adb0>
    ldy(Enemy_ID, x);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x10191aff0>
    BCC(JmpEO);
    tya();
    sbc(0x14);
    JMP(JmpEO);
}

int JmpEO() {
    JMP(NoRunCode);
}

int NoRunCode() {
    return 0;
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
    // <conv.chunks.Comment object at 0x101920e00>
    sta(Enemy_SprAttrib, x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy(TimerControl);
    // <conv.chunks.Comment object at 0x1019216d0>
    BNE(SkipMove);
    JSR(EnemyMovementSubs);
    JMP(SkipMove);
}

int SkipMove() {
    JMP(OffscreenBoundsCheck);
    JMP(EnemyMovementSubs);
}

int EnemyMovementSubs() {
    lda(Enemy_ID, x);
    JMP(NoMoveCode);
}

int NoMoveCode() {
    return 0;
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
    lda(TimerControl);
    BNE(SkipPT);
    // <conv.chunks.Comment object at 0x101923ec0>
    // <conv.chunks.Comment object at 0x101923fe0>
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
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1019305f0>
    sec();
    sbc(0x24);
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101930e30>
    sta(Enemy_Flag, x);
    sta(Enemy_ID, x);
    sta(Enemy_State, x);
    sta(FloateyNum_Control, x);
    sta(EnemyIntervalTimer, x);
    sta(ShellChainCounter, x);
    sta(Enemy_SprAttrib, x);
    sta(EnemyFrameTimer, x);
    return 0;
    JMP(MovePodoboo);
}

int MovePodoboo() {
    lda(EnemyIntervalTimer, x);
    BNE(PdbM);
    JSR(InitPodoboo);
    lda(((PseudoRandomBitReg) + (1)), x);
    ora(0b10000000);
    sta(Enemy_Y_MoveForce, x);
    anda(0b1111);
    ora(0x6);
    sta(EnemyIntervalTimer, x);
    // <conv.chunks.Comment object at 0x101931940>
    // <conv.chunks.Comment object at 0x101931a90>
    // <conv.chunks.Comment object at 0x101931be0>
    // <conv.chunks.Comment object at 0x101931d00>
    // <conv.chunks.Comment object at 0x101931f40>
    // <conv.chunks.Comment object at 0x101932060>
    // <conv.chunks.Comment object at 0x1019321b0>
    // <conv.chunks.Comment object at 0x1019322d0>
    // <conv.chunks.Comment object at 0x101932360>
    lda(0xf9);
    sta(Enemy_Y_Speed, x);
    JMP(PdbM);
}

int PdbM() {
    // <conv.chunks.Comment object at 0x1019325a0>
    // <conv.chunks.Comment object at 0x101932780>
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101932ba0>
    anda(0b100000);
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // <conv.chunks.Comment object at 0x101933200>
    // <conv.chunks.Comment object at 0x101933350>
    // <conv.chunks.Comment object at 0x101933470>
    lda(HammerBroJumpTimer, x);
    BEQ(HammerBroJumpCode);
    dec(HammerBroJumpTimer, x);
    // <conv.chunks.Comment object at 0x101933620>
    // <conv.chunks.Comment object at 0x101933740>
    lda(Enemy_OffscreenBits);
    anda(0b1100);
    BNE(MoveHammerBroXDir);
    lda(HammerThrowingTimer, x);
    BNE(DecHT);
    ldy(SecondaryHardMode);
    lda(offsetof(G, HammerThrowTmrData), y);
    sta(HammerThrowingTimer, x);
    JSR(SpawnHammerObj);
    BCC(DecHT);
    // <conv.chunks.Comment object at 0x101933980>
    // <conv.chunks.Comment object at 0x101933aa0>
    // <conv.chunks.Comment object at 0x101933bc0>
    // <conv.chunks.Comment object at 0x101933d10>
    // <conv.chunks.Comment object at 0x101933e60>
    // <conv.chunks.Comment object at 0x101933f80>
    // <conv.chunks.Comment object at 0x101938110>
    // <conv.chunks.Comment object at 0x101938260>
    // <conv.chunks.Comment object at 0x101938380>
    lda(Enemy_State, x);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x1019385f0>
    sta(Enemy_State, x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // <conv.chunks.Comment object at 0x101938830>
    // <conv.chunks.Comment object at 0x101938950>
    dec(HammerThrowingTimer, x);
    JMP(MoveHammerBroXDir);
    JMP(HammerBroJumpCode);
}

int HammerBroJumpCode() {
    lda(Enemy_State, x);
    anda(0b111);
    cmp(0x1);
    BEQ(MoveHammerBroXDir);
    lda(0x0);
    sta(0x0);
    ldy(0xfa);
    lda(Enemy_Y_Position, x);
    BMI(SetHJ);
    ldy(0xfd);
    cmp(0x70);
    inc(0x0);
    BCC(SetHJ);
    dec(0x0);
    lda(((PseudoRandomBitReg) + (1)), x);
    // <conv.chunks.Comment object at 0x101938cb0>
    // <conv.chunks.Comment object at 0x101938ef0>
    // <conv.chunks.Comment object at 0x101939010>
    // <conv.chunks.Comment object at 0x1019390a0>
    // <conv.chunks.Comment object at 0x101939250>
    // <conv.chunks.Comment object at 0x1019393a0>
    // <conv.chunks.Comment object at 0x101939430>
    // <conv.chunks.Comment object at 0x101939520>
    // <conv.chunks.Comment object at 0x101939700>
    // <conv.chunks.Comment object at 0x101939850>
    // <conv.chunks.Comment object at 0x1019398e0>
    // <conv.chunks.Comment object at 0x101939ac0>
    // <conv.chunks.Comment object at 0x101939b50>
    // <conv.chunks.Comment object at 0x101939d30>
    // <conv.chunks.Comment object at 0x101939dc0>
    anda(0x1);
    BNE(SetHJ);
    ldy(0xfa);
    JMP(SetHJ);
}

int SetHJ() {
    // <conv.chunks.Comment object at 0x10193a090>
    // <conv.chunks.Comment object at 0x10193a270>
    // <conv.chunks.Comment object at 0x10193a300>
    sty(Enemy_Y_Speed, x);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x10193a540>
    ora(0x1);
    sta(Enemy_State, x);
    lda(0x0);
    anda(((PseudoRandomBitReg) + (2)), x);
    tay();
    lda(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x10193a8d0>
    // <conv.chunks.Comment object at 0x10193a960>
    // <conv.chunks.Comment object at 0x10193ac00>
    // <conv.chunks.Comment object at 0x10193ac90>
    BNE(HJump);
    tay();
    JMP(HJump);
}

int HJump() {
    // <conv.chunks.Comment object at 0x10193af00>
    // <conv.chunks.Comment object at 0x10193af90>
    lda(offsetof(G, HammerBroJumpLData), y);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x10193b140>
    lda(((PseudoRandomBitReg) + (1)), x);
    ora(0b11000000);
    sta(HammerBroJumpTimer, x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(0xfc);
    // <conv.chunks.Comment object at 0x10193b710>
    lda(FrameCounter);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x10193b920>
    BNE(Shimmy);
    ldy(0x4);
    JMP(Shimmy);
}

int Shimmy() {
    // <conv.chunks.Comment object at 0x10193bb60>
    // <conv.chunks.Comment object at 0x10193bbf0>
    sty(Enemy_X_Speed, x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda(EnemyIntervalTimer, x);
    BNE(SetShim);
    // <conv.chunks.Comment object at 0x10193be30>
    // <conv.chunks.Comment object at 0x10193bec0>
    // <conv.chunks.Comment object at 0x1019400b0>
    // <conv.chunks.Comment object at 0x101940230>
    // <conv.chunks.Comment object at 0x1019402c0>
    // <conv.chunks.Comment object at 0x101940410>
    lda(0xf8);
    sta(Enemy_X_Speed, x);
    JMP(SetShim);
}

int SetShim() {
    // <conv.chunks.Comment object at 0x1019405c0>
    // <conv.chunks.Comment object at 0x1019407a0>
    sty(Enemy_MovingDir, x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101940980>
    lda(Enemy_State, x);
    anda(0b1000000);
    BNE(FallE);
    // <conv.chunks.Comment object at 0x101940bc0>
    // <conv.chunks.Comment object at 0x101940ce0>
    lda(Enemy_State, x);
    asl();
    BCS(SteadM);
    // <conv.chunks.Comment object at 0x101940f80>
    // <conv.chunks.Comment object at 0x101941010>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(MoveDefeatedEnemy);
    // <conv.chunks.Comment object at 0x101941280>
    // <conv.chunks.Comment object at 0x1019413a0>
    lda(Enemy_State, x);
    anda(0b111);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x1019415e0>
    // <conv.chunks.Comment object at 0x101941700>
    cmp(0x5);
    BEQ(FallE);
    // <conv.chunks.Comment object at 0x1019418b0>
    cmp(0x3);
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // <conv.chunks.Comment object at 0x101941af0>
    // <conv.chunks.Comment object at 0x101941ca0>
    JSR(MoveD_EnemyVertically);
    ldy(0x0);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101941e80>
    cmp(0x2);
    BEQ(MEHor);
    anda(0b1000000);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x1019420c0>
    // <conv.chunks.Comment object at 0x1019422a0>
    // <conv.chunks.Comment object at 0x1019423c0>
    lda(Enemy_ID, x);
    cmp(PowerUpObject);
    // <conv.chunks.Comment object at 0x101942630>
    BEQ(SteadM);
    BNE(SlowM);
    JMP(MEHor);
}

int MEHor() {
    // <conv.chunks.Comment object at 0x101942870>
    // <conv.chunks.Comment object at 0x1019429c0>
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}

int SlowM() {
    // <conv.chunks.Comment object at 0x101942b40>
    ldy(0x1);
    JMP(SteadM);
}

int SteadM() {
    // <conv.chunks.Comment object at 0x101942c30>
    lda(Enemy_X_Speed, x);
    pha();
    BPL(AddHS);
    // <conv.chunks.Comment object at 0x101942ea0>
    // <conv.chunks.Comment object at 0x101942f30>
    iny();
    iny();
    JMP(AddHS);
}

int AddHS() {
    clc();
    adc(offsetof(G, XSpeedAdderData), y);
    sta(Enemy_X_Speed, x);
    JSR(MoveEnemyHorizontally);
    // <conv.chunks.Comment object at 0x1019432c0>
    // <conv.chunks.Comment object at 0x101943410>
    // <conv.chunks.Comment object at 0x101943560>
    pla();
    sta(Enemy_X_Speed, x);
    return 0;
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda(EnemyIntervalTimer, x);
    BNE(ChkKillGoomba);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101943950>
    // <conv.chunks.Comment object at 0x101943aa0>
    // <conv.chunks.Comment object at 0x101943bc0>
    lda(FrameCounter);
    anda(0x1);
    tay();
    // <conv.chunks.Comment object at 0x101943e00>
    // <conv.chunks.Comment object at 0x101943f50>
    iny();
    sty(Enemy_MovingDir, x);
    dey();
    lda(PrimaryHardMode);
    BEQ(SetRSpd);
    // <conv.chunks.Comment object at 0x10194c0b0>
    // <conv.chunks.Comment object at 0x10194c230>
    // <conv.chunks.Comment object at 0x10194c2c0>
    // <conv.chunks.Comment object at 0x10194c3e0>
    iny();
    iny();
    JMP(SetRSpd);
}

int SetRSpd() {
    // <conv.chunks.Comment object at 0x10194c5f0>
    // <conv.chunks.Comment object at 0x10194c680>
    lda(offsetof(G, RevivedXSpeed), y);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x10194c830>
    return 0;
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
    // <conv.chunks.Comment object at 0x10194ccb0>
    // <conv.chunks.Comment object at 0x10194cd40>
    lda(Enemy_ID, x);
    cmp(Goomba);
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // <conv.chunks.Comment object at 0x10194d040>
    // <conv.chunks.Comment object at 0x10194d0a0>
    // <conv.chunks.Comment object at 0x10194d2e0>
    // <conv.chunks.Comment object at 0x10194d430>
    return 0;
    JMP(MoveJumpingEnemy);
}

int MoveJumpingEnemy() {
    JSR(MoveJ_EnemyVertically);
    JMP(MoveEnemyHorizontally);
    JMP(ProcMoveRedPTroopa);
}

int ProcMoveRedPTroopa() {
    lda(Enemy_Y_Speed, x);
    ora(Enemy_Y_MoveForce, x);
    BNE(MoveRedPTUpOrDown);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10194d970>
    // <conv.chunks.Comment object at 0x10194dac0>
    // <conv.chunks.Comment object at 0x10194dbe0>
    // <conv.chunks.Comment object at 0x10194dd30>
    cmp(RedPTroopaOrigXPos, x);
    BCS(MoveRedPTUpOrDown);
    lda(FrameCounter);
    anda(0b111);
    BNE(NoIncPT);
    inc(Enemy_Y_Position, x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // <conv.chunks.Comment object at 0x10194dfa0>
    // <conv.chunks.Comment object at 0x10194e0c0>
    // <conv.chunks.Comment object at 0x10194e1e0>
    // <conv.chunks.Comment object at 0x10194e300>
    // <conv.chunks.Comment object at 0x10194e450>
    // <conv.chunks.Comment object at 0x10194e5d0>
    return 0;
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10194e720>
    cmp(RedPTroopaCenterYPos, x);
    BCC(MovPTDwn);
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}

int MovPTDwn() {
    // <conv.chunks.Comment object at 0x10194e990>
    // <conv.chunks.Comment object at 0x10194eab0>
    // <conv.chunks.Comment object at 0x10194ebd0>
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}

int MoveFlyGreenPTroopa() {
    JSR(XMoveCntr_GreenPTroopa);
    JSR(MoveWithXMCntrs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x10194ede0>
    // <conv.chunks.Comment object at 0x10194ef00>
    // <conv.chunks.Comment object at 0x10194f020>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoMGPT);
    // <conv.chunks.Comment object at 0x10194f230>
    // <conv.chunks.Comment object at 0x10194f350>
    lda(FrameCounter);
    anda(0b1000000);
    BNE(YSway);
    ldy(0xff);
    JMP(YSway);
}

int YSway() {
    // <conv.chunks.Comment object at 0x10194f590>
    // <conv.chunks.Comment object at 0x10194f6b0>
    // <conv.chunks.Comment object at 0x10194f800>
    // <conv.chunks.Comment object at 0x10194f890>
    sty(0x0);
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x10194fbf0>
    // <conv.chunks.Comment object at 0x10194fcb0>
    sta(Enemy_Y_Position, x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // <conv.chunks.Comment object at 0x10194fef0>
    return 0;
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(0x13);
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(0x1);
    // <conv.chunks.Comment object at 0x101958200>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoIncXM);
    ldy(XMoveSecondaryCounter, x);
    lda(XMovePrimaryCounter, x);
    // <conv.chunks.Comment object at 0x1019583e0>
    // <conv.chunks.Comment object at 0x101958500>
    // <conv.chunks.Comment object at 0x101958650>
    // <conv.chunks.Comment object at 0x1019587a0>
    lsr();
    BCS(DecSeXM);
    cpy(0x1);
    BEQ(IncPXM);
    inc(XMoveSecondaryCounter, x);
    JMP(NoIncXM);
}

int NoIncXM() {
    return 0;
    JMP(IncPXM);
}

int IncPXM() {
    // <conv.chunks.Comment object at 0x101958f80>
    inc(XMovePrimaryCounter, x);
    return 0;
    JMP(DecSeXM);
}

int DecSeXM() {
    // <conv.chunks.Comment object at 0x1019591c0>
    tya();
    BEQ(IncPXM);
    dec(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x1019592e0>
    // <conv.chunks.Comment object at 0x101959430>
    return 0;
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x101959640>
    pha();
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101959820>
    lda(XMovePrimaryCounter, x);
    anda(0b10);
    BNE(XMRight);
    // <conv.chunks.Comment object at 0x101959a60>
    // <conv.chunks.Comment object at 0x101959b80>
    lda(XMoveSecondaryCounter, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101959df0>
    // <conv.chunks.Comment object at 0x101959f40>
    adc(0x1);
    sta(XMoveSecondaryCounter, x);
    ldy(0x2);
    JMP(XMRight);
}

int XMRight() {
    // <conv.chunks.Comment object at 0x10195a1e0>
    // <conv.chunks.Comment object at 0x10195a270>
    sty(Enemy_MovingDir, x);
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    pla();
    sta(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x10195a5d0>
    // <conv.chunks.Comment object at 0x10195a5a0>
    // <conv.chunks.Comment object at 0x10195a780>
    return 0;
    JMP(MoveBloober);
}

int MoveBloober() {
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(MoveDefeatedBloober);
    ldy(SecondaryHardMode);
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(offsetof(G, BlooberBitmasks), y);
    BNE(BlooberSwim);
    // <conv.chunks.Comment object at 0x10195ac30>
    // <conv.chunks.Comment object at 0x10195ad50>
    // <conv.chunks.Comment object at 0x10195ae70>
    // <conv.chunks.Comment object at 0x10195af90>
    // <conv.chunks.Comment object at 0x10195b1a0>
    // <conv.chunks.Comment object at 0x10195b2f0>
    txa();
    lsr();
    BCC(FBLeft);
    ldy(Player_MovingDir);
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // <conv.chunks.Comment object at 0x10195b4d0>
    // <conv.chunks.Comment object at 0x10195b560>
    // <conv.chunks.Comment object at 0x10195b6b0>
    // <conv.chunks.Comment object at 0x10195b7d0>
    // <conv.chunks.Comment object at 0x10195b920>
    ldy(0x2);
    JSR(PlayerEnemyDiff);
    BPL(SBMDir);
    dey();
    JMP(SBMDir);
}

int SBMDir() {
    // <conv.chunks.Comment object at 0x10195ba10>
    // <conv.chunks.Comment object at 0x10195bbc0>
    // <conv.chunks.Comment object at 0x10195bd40>
    // <conv.chunks.Comment object at 0x10195bdd0>
    sty(Enemy_MovingDir, x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10195bfb0>
    // <conv.chunks.Comment object at 0x101960110>
    sec();
    sbc(Enemy_Y_MoveForce, x);
    cmp(0x20);
    BCC(SwimX);
    sta(Enemy_Y_Position, x);
    JMP(SwimX);
}

int SwimX() {
    // <conv.chunks.Comment object at 0x1019602f0>
    // <conv.chunks.Comment object at 0x101960440>
    // <conv.chunks.Comment object at 0x1019604d0>
    // <conv.chunks.Comment object at 0x1019606b0>
    // <conv.chunks.Comment object at 0x101960800>
    ldy(Enemy_MovingDir, x);
    dey();
    BNE(LeftSwim);
    // <conv.chunks.Comment object at 0x101960a40>
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x101960cb0>
    adc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x101960e60>
    lda(Enemy_PageLoc, x);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1019610d0>
    // <conv.chunks.Comment object at 0x101961160>
    return 0;
    JMP(LeftSwim);
}

int LeftSwim() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x101961550>
    sbc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x101961700>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x101961970>
    // <conv.chunks.Comment object at 0x101961a00>
    return 0;
    JMP(MoveDefeatedBloober);
}

int MoveDefeatedBloober() {
    JMP(MoveEnemySlowVert);
    JMP(ProcSwimmingB);
}

int ProcSwimmingB() {
    lda(BlooperMoveCounter, x);
    anda(0b10);
    BNE(ChkForFloatdown);
    // <conv.chunks.Comment object at 0x101961df0>
    // <conv.chunks.Comment object at 0x101961f40>
    // <conv.chunks.Comment object at 0x101962060>
    lda(FrameCounter);
    anda(0b111);
    pha();
    lda(BlooperMoveCounter, x);
    lsr();
    BCS(SlowSwim);
    pla();
    BNE(BSwimE);
    // <conv.chunks.Comment object at 0x101962270>
    // <conv.chunks.Comment object at 0x1019623c0>
    // <conv.chunks.Comment object at 0x101962450>
    // <conv.chunks.Comment object at 0x1019625d0>
    // <conv.chunks.Comment object at 0x101962660>
    // <conv.chunks.Comment object at 0x1019627b0>
    // <conv.chunks.Comment object at 0x101962840>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x101962ae0>
    adc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    // <conv.chunks.Comment object at 0x101962bd0>
    // <conv.chunks.Comment object at 0x101962db0>
    cmp(0x2);
    BNE(BSwimE);
    inc(BlooperMoveCounter, x);
    JMP(BSwimE);
}

int BSwimE() {
    return 0;
    JMP(SlowSwim);
}

int SlowSwim() {
    pla();
    BNE(NoSSw);
    // <conv.chunks.Comment object at 0x1019633e0>
    // <conv.chunks.Comment object at 0x101963470>
    lda(Enemy_Y_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x101963710>
    sbc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    BNE(NoSSw);
    inc(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x101963800>
    // <conv.chunks.Comment object at 0x1019639e0>
    // <conv.chunks.Comment object at 0x101963b30>
    // <conv.chunks.Comment object at 0x101963c80>
    lda(0x2);
    sta(EnemyIntervalTimer, x);
    JMP(NoSSw);
}

int NoSSw() {
    // <conv.chunks.Comment object at 0x101963e30>
    // <conv.chunks.Comment object at 0x101970080>
    return 0;
    JMP(ChkForFloatdown);
}

int ChkForFloatdown() {
    lda(EnemyIntervalTimer, x);
    BEQ(ChkNearPlayer);
    JMP(Floatdown);
}

int Floatdown() {
    lda(FrameCounter);
    lsr();
    BCS(NoFD);
    inc(Enemy_Y_Position, x);
    JMP(NoFD);
}

int NoFD() {
    // <conv.chunks.Comment object at 0x101970470>
    // <conv.chunks.Comment object at 0x1019705c0>
    // <conv.chunks.Comment object at 0x101970650>
    // <conv.chunks.Comment object at 0x1019707a0>
    // <conv.chunks.Comment object at 0x101970920>
    return 0;
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda(Enemy_Y_Position, x);
    adc(0x10);
    cmp(Player_Y_Position);
    BCC(Floatdown);
    // <conv.chunks.Comment object at 0x101970a70>
    // <conv.chunks.Comment object at 0x101970bc0>
    // <conv.chunks.Comment object at 0x101970c50>
    // <conv.chunks.Comment object at 0x101970e00>
    lda(0x0);
    sta(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x101970f80>
    return 0;
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101971250>
    anda(0b100000);
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // <conv.chunks.Comment object at 0x101971490>
    // <conv.chunks.Comment object at 0x1019715e0>
    // <conv.chunks.Comment object at 0x101971700>
    lda(0xe8);
    sta(Enemy_X_Speed, x);
    JMP(MoveEnemyHorizontally);
    JMP(MoveSwimmingCheepCheep);
}

int MoveSwimmingCheepCheep() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(CCSwim);
    JMP(MoveEnemySlowVert);
    JMP(CCSwim);
}

int CCSwim() {
    // <conv.chunks.Comment object at 0x101971c40>
    // <conv.chunks.Comment object at 0x101971fa0>
    // <conv.chunks.Comment object at 0x1019720c0>
    // <conv.chunks.Comment object at 0x101972210>
    // <conv.chunks.Comment object at 0x101972330>
    sta(0x3);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101972450>
    sec();
    sbc(0xa);
    tay();
    lda(offsetof(G, SwimCCXMoveData), y);
    // <conv.chunks.Comment object at 0x101972690>
    // <conv.chunks.Comment object at 0x1019727e0>
    // <conv.chunks.Comment object at 0x101972870>
    sta(0x2);
    lda(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x1019729c0>
    sec();
    sbc(0x2);
    sta(Enemy_X_MoveForce, x);
    lda(Enemy_X_Position, x);
    sbc(0x0);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x101972cc0>
    // <conv.chunks.Comment object at 0x101972d50>
    // <conv.chunks.Comment object at 0x101972f00>
    // <conv.chunks.Comment object at 0x101973050>
    // <conv.chunks.Comment object at 0x1019730e0>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1019733e0>
    // <conv.chunks.Comment object at 0x101973470>
    lda(0x20);
    sta(0x2);
    cpx(0x2);
    BCC(ExSwCC);
    lda(CheepCheepMoveMFlag, x);
    cmp(0x10);
    BCC(CCSwimUpwards);
    // <conv.chunks.Comment object at 0x101973770>
    // <conv.chunks.Comment object at 0x101973800>
    // <conv.chunks.Comment object at 0x1019738f0>
    // <conv.chunks.Comment object at 0x101973ad0>
    // <conv.chunks.Comment object at 0x101973c20>
    // <conv.chunks.Comment object at 0x101973cb0>
    lda(Enemy_YMF_Dummy, x);
    clc();
    adc(0x2);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x3);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101978080>
    // <conv.chunks.Comment object at 0x101978110>
    // <conv.chunks.Comment object at 0x1019782c0>
    // <conv.chunks.Comment object at 0x101978440>
    // <conv.chunks.Comment object at 0x1019784d0>
    lda(Enemy_Y_HighPos, x);
    adc(0x0);
    JMP(ChkSwimYPos);
    JMP(CCSwimUpwards);
}

int CCSwimUpwards() {
    lda(Enemy_YMF_Dummy, x);
    sec();
    sbc(0x2);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    sbc(0x3);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101978bf0>
    // <conv.chunks.Comment object at 0x101978c80>
    // <conv.chunks.Comment object at 0x101978e30>
    // <conv.chunks.Comment object at 0x101978fb0>
    // <conv.chunks.Comment object at 0x101979040>
    lda(Enemy_Y_HighPos, x);
    sbc(0x0);
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta(Enemy_Y_HighPos, x);
    ldy(0x0);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101979460>
    // <conv.chunks.Comment object at 0x1019795b0>
    // <conv.chunks.Comment object at 0x101979640>
    sec();
    sbc(CheepCheepOrigYPos, x);
    BPL(YPDiff);
    ldy(0x10);
    // <conv.chunks.Comment object at 0x1019798b0>
    // <conv.chunks.Comment object at 0x101979a00>
    // <conv.chunks.Comment object at 0x101979b50>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(YPDiff);
}

int YPDiff() {
    // <conv.chunks.Comment object at 0x101979d90>
    // <conv.chunks.Comment object at 0x101979e20>
    // <conv.chunks.Comment object at 0x101979eb0>
    cmp(0xf);
    BCC(ExSwCC);
    // <conv.chunks.Comment object at 0x10197a030>
    tya();
    sta(CheepCheepMoveMFlag, x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // <conv.chunks.Comment object at 0x10197a2a0>
    // <conv.chunks.Comment object at 0x10197a420>
    return 0;
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda(Enemy_OffscreenBits);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x10197a8d0>
    // <conv.chunks.Comment object at 0x101982c00>
    // <conv.chunks.Comment object at 0x101982d20>
    BNE(SkipFBar);
    lda(TimerControl);
    BNE(SusFbar);
    lda(FirebarSpinSpeed, x);
    JSR(FirebarSpin);
    anda(0b11111);
    sta(FirebarSpinState_High, x);
    JMP(SusFbar);
}

int SusFbar() {
    // <conv.chunks.Comment object at 0x101982f30>
    // <conv.chunks.Comment object at 0x101983050>
    // <conv.chunks.Comment object at 0x1019831a0>
    // <conv.chunks.Comment object at 0x1019832f0>
    // <conv.chunks.Comment object at 0x101983410>
    // <conv.chunks.Comment object at 0x101983530>
    // <conv.chunks.Comment object at 0x101983680>
    lda(FirebarSpinState_High, x);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101983830>
    cpy(0x1f);
    BCC(SetupGFB);
    cmp(0x8);
    BEQ(SkpFSte);
    // <conv.chunks.Comment object at 0x1019839e0>
    // <conv.chunks.Comment object at 0x101983b90>
    // <conv.chunks.Comment object at 0x101983c20>
    cmp(0x18);
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x10198c140>
    sta(FirebarSpinState_High, x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // <conv.chunks.Comment object at 0x10198c380>
    sta(0xef);
    JSR(RelativeEnemyPosition);
    JSR(GetFirebarPosition);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_Rel_YPos);
    sta(Sprite_Y_Position, y);
    sta(0x7);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x10198c470>
    // <conv.chunks.Comment object at 0x10198c5f0>
    // <conv.chunks.Comment object at 0x10198c710>
    // <conv.chunks.Comment object at 0x10198c860>
    // <conv.chunks.Comment object at 0x10198c980>
    // <conv.chunks.Comment object at 0x10198cb00>
    // <conv.chunks.Comment object at 0x10198cb90>
    // <conv.chunks.Comment object at 0x10198cd10>
    // <conv.chunks.Comment object at 0x10198ce90>
    lda(0x1);
    sta(0x0);
    JSR(FirebarCollision);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x10198d0a0>
    // <conv.chunks.Comment object at 0x10198d130>
    // <conv.chunks.Comment object at 0x10198d2b0>
    lda(Enemy_ID, x);
    cmp(0x1f);
    BCC(SetMFbar);
    ldy(0xb);
    JMP(SetMFbar);
}

int SetMFbar() {
    // <conv.chunks.Comment object at 0x10198d4f0>
    // <conv.chunks.Comment object at 0x10198d580>
    // <conv.chunks.Comment object at 0x10198d730>
    // <conv.chunks.Comment object at 0x10198d7c0>
    sty(0xed);
    lda(0x0);
    sta(0x0);
    JMP(DrawFbar);
}

int DrawFbar() {
    // <conv.chunks.Comment object at 0x10198dac0>
    // <conv.chunks.Comment object at 0x10198db50>
    lda(0xef);
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10198dca0>
    // <conv.chunks.Comment object at 0x10198de20>
    // <conv.chunks.Comment object at 0x10198df70>
    cmp(0x4);
    BNE(NextFbar);
    ldy(DuplicateObj_Offset);
    lda(Enemy_SprDataOffset, y);
    sta(0x6);
    JMP(NextFbar);
}

int NextFbar() {
    // <conv.chunks.Comment object at 0x10198e240>
    // <conv.chunks.Comment object at 0x10198e360>
    // <conv.chunks.Comment object at 0x10198e4e0>
    // <conv.chunks.Comment object at 0x10198e570>
    inc(0x0);
    lda(0x0);
    cmp(0xed);
    BCC(DrawFbar);
    JMP(SkipFBar);
}

int SkipFBar() {
    return 0;
    JMP(DrawFirebar_Collision);
}

int DrawFirebar_Collision() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x10198eb70>
    sta(0x5);
    ldy(0x6);
    lda(0x1);
    lsr(0x5);
    BCS(AddHA);
    // <conv.chunks.Comment object at 0x10198ecf0>
    // <conv.chunks.Comment object at 0x10198ec00>
    // <conv.chunks.Comment object at 0x10198ee10>
    // <conv.chunks.Comment object at 0x10198f050>
    eor(0xff);
    adc(0x1);
    JMP(AddHA);
}

int AddHA() {
    // <conv.chunks.Comment object at 0x10198f260>
    // <conv.chunks.Comment object at 0x10198f380>
    clc();
    adc(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    sta(0x6);
    cmp(Enemy_Rel_XPos);
    BCS(SubtR1);
    // <conv.chunks.Comment object at 0x10198f530>
    // <conv.chunks.Comment object at 0x10198f650>
    // <conv.chunks.Comment object at 0x10198f7d0>
    // <conv.chunks.Comment object at 0x10198f860>
    // <conv.chunks.Comment object at 0x10198f9e0>
    lda(Enemy_Rel_XPos);
    sec();
    sbc(0x6);
    // <conv.chunks.Comment object at 0x10198fc50>
    // <conv.chunks.Comment object at 0x10198fd10>
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // <conv.chunks.Comment object at 0x10198ff20>
    sec();
    sbc(Enemy_Rel_XPos);
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // <conv.chunks.Comment object at 0x101994080>
    // <conv.chunks.Comment object at 0x1019941a0>
    cmp(0x59);
    BCC(VAHandl);
    lda(0xf8);
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // <conv.chunks.Comment object at 0x101994290>
    // <conv.chunks.Comment object at 0x101994470>
    // <conv.chunks.Comment object at 0x101994500>
    // <conv.chunks.Comment object at 0x1019946e0>
    lda(Enemy_Rel_YPos);
    cmp(0xf8);
    // <conv.chunks.Comment object at 0x101994860>
    BEQ(SetVFbr);
    lda(0x2);
    lsr(0x5);
    BCS(AddVA);
    // <conv.chunks.Comment object at 0x101994ad0>
    // <conv.chunks.Comment object at 0x101994aa0>
    // <conv.chunks.Comment object at 0x101994c80>
    eor(0xff);
    adc(0x1);
    JMP(AddVA);
}

int AddVA() {
    // <conv.chunks.Comment object at 0x101994e90>
    // <conv.chunks.Comment object at 0x101994fb0>
    clc();
    adc(Enemy_Rel_YPos);
    JMP(SetVFbr);
}

int SetVFbr() {
    // <conv.chunks.Comment object at 0x101995160>
    // <conv.chunks.Comment object at 0x101995280>
    sta(Sprite_Y_Position, y);
    sta(0x7);
    JMP(FirebarCollision);
}

int FirebarCollision() {
    JSR(DrawFirebar);
    tya();
    pha();
    lda(StarInvincibleTimer);
    ora(TimerControl);
    BNE(NoColFB);
    sta(0x5);
    // <conv.chunks.Comment object at 0x101995430>
    // <conv.chunks.Comment object at 0x1019956d0>
    // <conv.chunks.Comment object at 0x101995790>
    // <conv.chunks.Comment object at 0x101995820>
    // <conv.chunks.Comment object at 0x101995940>
    // <conv.chunks.Comment object at 0x101995a60>
    // <conv.chunks.Comment object at 0x101995be0>
    ldy(Player_Y_HighPos);
    dey();
    BNE(NoColFB);
    ldy(Player_Y_Position);
    lda(PlayerSize);
    BNE(AdjSm);
    // <conv.chunks.Comment object at 0x101995df0>
    // <conv.chunks.Comment object at 0x101995e80>
    // <conv.chunks.Comment object at 0x101995fd0>
    // <conv.chunks.Comment object at 0x1019960f0>
    // <conv.chunks.Comment object at 0x101996210>
    lda(CrouchingFlag);
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // <conv.chunks.Comment object at 0x101996450>
    // <conv.chunks.Comment object at 0x1019965a0>
    inc(0x5);
    inc(0x5);
    // <conv.chunks.Comment object at 0x101996600>
    tya();
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x101996900>
    // <conv.chunks.Comment object at 0x101996990>
    tay();
    JMP(BigJp);
}

int BigJp() {
    // <conv.chunks.Comment object at 0x101996b40>
    tya();
    JMP(FBCLoop);
}

int FBCLoop() {
    // <conv.chunks.Comment object at 0x101996c60>
    sec();
    sbc(0x7);
    BPL(ChkVFBD);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101996db0>
    // <conv.chunks.Comment object at 0x101996e40>
    // <conv.chunks.Comment object at 0x101996ff0>
    // <conv.chunks.Comment object at 0x101997140>
    adc(0x1);
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // <conv.chunks.Comment object at 0x101997230>
    cmp(0x8);
    BCS(Chk2Ofs);
    lda(0x6);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x101997590>
    // <conv.chunks.Comment object at 0x101997620>
    BCS(Chk2Ofs);
    lda(((Sprite_X_Position) + (4)));
    // <conv.chunks.Comment object at 0x1019978c0>
    clc();
    adc(0x4);
    sta(0x4);
    sec();
    sbc(0x6);
    BPL(ChkFBCl);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101997b30>
    // <conv.chunks.Comment object at 0x101997c80>
    // <conv.chunks.Comment object at 0x101997bc0>
    // <conv.chunks.Comment object at 0x101997e60>
    // <conv.chunks.Comment object at 0x101997ef0>
    // <conv.chunks.Comment object at 0x1019a00e0>
    // <conv.chunks.Comment object at 0x1019a0230>
    adc(0x1);
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // <conv.chunks.Comment object at 0x1019a0320>
    cmp(0x8);
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // <conv.chunks.Comment object at 0x1019a04a0>
    // <conv.chunks.Comment object at 0x1019a0680>
    lda(0x5);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x1019a07a0>
    BEQ(NoColFB);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1019a0a70>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, FirebarYPos), y);
    inc(0x5);
    // <conv.chunks.Comment object at 0x1019a0ce0>
    // <conv.chunks.Comment object at 0x1019a0e60>
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // <conv.chunks.Comment object at 0x1019a1070>
    ldx(0x1);
    lda(0x4);
    cmp(0x6);
    BCS(SetSDir);
    inx();
    JMP(SetSDir);
}

int SetSDir() {
    // <conv.chunks.Comment object at 0x1019a1220>
    // <conv.chunks.Comment object at 0x1019a1160>
    // <conv.chunks.Comment object at 0x1019a13d0>
    // <conv.chunks.Comment object at 0x1019a15b0>
    // <conv.chunks.Comment object at 0x1019a1640>
    stx(Enemy_MovingDir);
    ldx(0x0);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1019a18e0>
    pha();
    JSR(InjurePlayer);
    // <conv.chunks.Comment object at 0x1019a1a60>
    pla();
    sta(0x0);
    JMP(NoColFB);
}

int NoColFB() {
    // <conv.chunks.Comment object at 0x1019a1c40>
    // <conv.chunks.Comment object at 0x1019a1cd0>
    pla();
    clc();
    // <conv.chunks.Comment object at 0x1019a1e80>
    adc(0x4);
    sta(0x6);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1019a1f70>
    return 0;
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1019a2300>
    // <conv.chunks.Comment object at 0x1019a2390>
    cmp(0x9);
    BCC(GetHAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1019a2510>
    // <conv.chunks.Comment object at 0x1019a26c0>
    clc();
    adc(0x1);
    JMP(GetHAdder);
}

int GetHAdder() {
    // <conv.chunks.Comment object at 0x1019a28d0>
    sta(0x1);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1019a2990>
    // <conv.chunks.Comment object at 0x1019a2b70>
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1019a2de0>
    // <conv.chunks.Comment object at 0x1019a2db0>
    // <conv.chunks.Comment object at 0x1019a2f90>
    sta(0x1);
    pla();
    pha();
    // <conv.chunks.Comment object at 0x1019a3170>
    // <conv.chunks.Comment object at 0x1019a32c0>
    clc();
    adc(0x8);
    anda(0b1111);
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1019a33e0>
    // <conv.chunks.Comment object at 0x1019a3470>
    // <conv.chunks.Comment object at 0x1019a3620>
    BCC(GetVAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1019a3830>
    clc();
    adc(0x1);
    JMP(GetVAdder);
}

int GetVAdder() {
    // <conv.chunks.Comment object at 0x1019a3a40>
    sta(0x2);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1019a3bc0>
    clc();
    adc(0x2);
    // <conv.chunks.Comment object at 0x1019a3f20>
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1019ac0e0>
    sta(0x2);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1019ac2c0>
    // <conv.chunks.Comment object at 0x1019ac410>
    lsr();
    lsr();
    tay();
    lda(offsetof(G, FirebarMirrorData), y);
    sta(0x3);
    // <conv.chunks.Comment object at 0x1019ac5f0>
    // <conv.chunks.Comment object at 0x1019ac680>
    // <conv.chunks.Comment object at 0x1019ac830>
    return 0;
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(FlyCC);
    // <conv.chunks.Comment object at 0x1019acad0>
    // <conv.chunks.Comment object at 0x1019ad160>
    // <conv.chunks.Comment object at 0x1019ad280>
    lda(0x0);
    sta(Enemy_SprAttrib, x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // <conv.chunks.Comment object at 0x1019ad430>
    // <conv.chunks.Comment object at 0x1019ad610>
    // <conv.chunks.Comment object at 0x1019ad730>
    JSR(MoveEnemyHorizontally);
    ldy(0xd);
    lda(0x5);
    JSR(SetXMoveAmt);
    // <conv.chunks.Comment object at 0x1019ad8b0>
    // <conv.chunks.Comment object at 0x1019ad940>
    // <conv.chunks.Comment object at 0x1019ada60>
    lda(Enemy_Y_MoveForce, x);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1019add60>
    // <conv.chunks.Comment object at 0x1019ade20>
    lsr();
    lsr();
    tay();
    lda(Enemy_Y_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x1019ae000>
    // <conv.chunks.Comment object at 0x1019ae090>
    // <conv.chunks.Comment object at 0x1019ae210>
    sbc(offsetof(G, PRandomSubtracter), y);
    BPL(AddCCF);
    // <conv.chunks.Comment object at 0x1019ae3c0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1019ae630>
    adc(0x1);
    JMP(AddCCF);
}

int AddCCF() {
    // <conv.chunks.Comment object at 0x1019ae720>
    cmp(0x8);
    BCS(BPGet);
    // <conv.chunks.Comment object at 0x1019ae8a0>
    lda(Enemy_Y_MoveForce, x);
    clc();
    adc(0x10);
    // <conv.chunks.Comment object at 0x1019aec30>
    sta(Enemy_Y_MoveForce, x);
    lsr();
    // <conv.chunks.Comment object at 0x1019aeea0>
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}

int BPGet() {
    // <conv.chunks.Comment object at 0x1019af170>
    lda(offsetof(G, FlyCCBPriority), y);
    sta(Enemy_SprAttrib, x);
    return 0;
    JMP(MoveLakitu);
}

int MoveLakitu() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(ChkLS);
    JMP(MoveD_EnemyVertically);
    JMP(ChkLS);
}

int ChkLS() {
    // <conv.chunks.Comment object at 0x1019af650>
    // <conv.chunks.Comment object at 0x1019af920>
    // <conv.chunks.Comment object at 0x1019afa40>
    // <conv.chunks.Comment object at 0x1019afb90>
    // <conv.chunks.Comment object at 0x1019afcb0>
    lda(Enemy_State, x);
    BEQ(Fr12S);
    // <conv.chunks.Comment object at 0x1019afe60>
    lda(0x0);
    sta(LakituMoveDirection, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x1019b8050>
    // <conv.chunks.Comment object at 0x1019b8230>
    lda(0x10);
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda(Spiny);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x1019b8650>
    ldy(0x2);
    JMP(LdLDa);
}

int LdLDa() {
    // <conv.chunks.Comment object at 0x1019b8890>
    lda(offsetof(G, LakituDiffAdj), y);
    sta(0x1, y);
    // <conv.chunks.Comment object at 0x1019b8ad0>
    dey();
    BPL(LdLDa);
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}

int SetLSpd() {
    // <conv.chunks.Comment object at 0x1019b8cb0>
    // <conv.chunks.Comment object at 0x1019b8e00>
    // <conv.chunks.Comment object at 0x1019b8f20>
    sta(LakituMoveSpeed, x);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1019b90d0>
    lda(LakituMoveDirection, x);
    anda(0x1);
    BNE(SetLMov);
    // <conv.chunks.Comment object at 0x1019b9310>
    // <conv.chunks.Comment object at 0x1019b93a0>
    lda(LakituMoveSpeed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1019b96a0>
    clc();
    adc(0x1);
    sta(LakituMoveSpeed, x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // <conv.chunks.Comment object at 0x1019b98b0>
    // <conv.chunks.Comment object at 0x1019b9ac0>
    // <conv.chunks.Comment object at 0x1019b9b50>
    sty(Enemy_MovingDir, x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(0x0);
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // <conv.chunks.Comment object at 0x1019b9e50>
    // <conv.chunks.Comment object at 0x1019b9ee0>
    // <conv.chunks.Comment object at 0x1019ba090>
    // <conv.chunks.Comment object at 0x1019ba1e0>
    lda(0x0);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1019ba270>
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1019ba510>
    sta(0x0);
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // <conv.chunks.Comment object at 0x1019ba5a0>
    lda(0x0);
    cmp(0x3c);
    // <conv.chunks.Comment object at 0x1019ba810>
    BCC(ChkPSpeed);
    lda(0x3c);
    // <conv.chunks.Comment object at 0x1019baa80>
    sta(0x0);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1019bab10>
    cmp(Lakitu);
    BNE(ChkPSpeed);
    tya();
    cmp(LakituMoveDirection, x);
    BEQ(ChkPSpeed);
    lda(LakituMoveDirection, x);
    BEQ(SetLMovD);
    dec(LakituMoveSpeed, x);
    lda(LakituMoveSpeed, x);
    // <conv.chunks.Comment object at 0x1019bae10>
    // <conv.chunks.Comment object at 0x1019bb050>
    // <conv.chunks.Comment object at 0x1019bb0e0>
    // <conv.chunks.Comment object at 0x1019bb230>
    // <conv.chunks.Comment object at 0x1019bb350>
    // <conv.chunks.Comment object at 0x1019bb4a0>
    // <conv.chunks.Comment object at 0x1019bb5c0>
    // <conv.chunks.Comment object at 0x1019bb710>
    BNE(ExMoveLak);
    JMP(SetLMovD);
}

int SetLMovD() {
    // <conv.chunks.Comment object at 0x1019bb950>
    tya();
    sta(LakituMoveDirection, x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(0x0);
    anda(0b111100);
    lsr();
    // <conv.chunks.Comment object at 0x1019bbc50>
    // <conv.chunks.Comment object at 0x1019bbe00>
    lsr();
    sta(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1019bbf50>
    // <conv.chunks.Comment object at 0x1019bbfe0>
    lda(Player_X_Speed);
    BEQ(SubDifAdj);
    // <conv.chunks.Comment object at 0x1019c0290>
    lda(ScrollAmount);
    BEQ(SubDifAdj);
    iny();
    // <conv.chunks.Comment object at 0x1019c04a0>
    // <conv.chunks.Comment object at 0x1019c05f0>
    lda(Player_X_Speed);
    cmp(0x19);
    // <conv.chunks.Comment object at 0x1019c0770>
    BCC(ChkSpinyO);
    lda(ScrollAmount);
    cmp(0x2);
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // <conv.chunks.Comment object at 0x1019c0a70>
    // <conv.chunks.Comment object at 0x1019c0b00>
    // <conv.chunks.Comment object at 0x1019c0ce0>
    // <conv.chunks.Comment object at 0x1019c0d70>
    lda(Enemy_ID, x);
    cmp(Spiny);
    BNE(ChkEmySpd);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1019c0f50>
    // <conv.chunks.Comment object at 0x1019c1130>
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // <conv.chunks.Comment object at 0x1019c1340>
    lda(Enemy_Y_Speed, x);
    BNE(SubDifAdj);
    ldy(0x0);
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // <conv.chunks.Comment object at 0x1019c14c0>
    // <conv.chunks.Comment object at 0x1019c15e0>
    // <conv.chunks.Comment object at 0x1019c1670>
    lda(0x1, y);
    ldy(0x0);
    JMP(SPixelLak);
}

int SPixelLak() {
    // <conv.chunks.Comment object at 0x1019c18b0>
    // <conv.chunks.Comment object at 0x1019c1940>
    sec();
    sbc(0x1);
    // <conv.chunks.Comment object at 0x1019c1a90>
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // <conv.chunks.Comment object at 0x1019c1c40>
    // <conv.chunks.Comment object at 0x1019c1d60>
    return 0;
    JMP(BridgeCollapse);
}

int BridgeCollapse() {
    ldx(BowserFront_Offset);
    lda(Enemy_ID, x);
    cmp(Bowser);
    BNE(SetM2);
    stx(ObjectOffset);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1019c21b0>
    // <conv.chunks.Comment object at 0x1019c1fa0>
    // <conv.chunks.Comment object at 0x1019c2b10>
    // <conv.chunks.Comment object at 0x1019c2b70>
    // <conv.chunks.Comment object at 0x1019c2db0>
    // <conv.chunks.Comment object at 0x1019c2ed0>
    BEQ(RemoveBridge);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1019c3110>
    BEQ(SetM2);
    lda(Enemy_Y_Position, x);
    cmp(0xe0);
    // <conv.chunks.Comment object at 0x1019c3350>
    // <conv.chunks.Comment object at 0x1019c34a0>
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // <conv.chunks.Comment object at 0x1019c36b0>
    lda(Silence);
    sta(EventMusicQueue);
    inc(OperMode_Task);
    JMP(KillAllEnemies);
    JMP(MoveD_Bowser);
}

int MoveD_Bowser() {
    JSR(MoveEnemySlowVert);
    JMP(BowserGfxHandler);
    JMP(RemoveBridge);
}

int RemoveBridge() {
    dec(BowserFeetCounter);
    BNE(NoBFall);
    // <conv.chunks.Comment object at 0x1019c3e30>
    // <conv.chunks.Comment object at 0x1019c3f50>
    lda(0x4);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x1019c8140>
    lda(BowserBodyControls);
    eor(0x1);
    // <conv.chunks.Comment object at 0x1019c83e0>
    sta(BowserBodyControls);
    lda(0x22);
    // <conv.chunks.Comment object at 0x1019c85f0>
    sta(0x5);
    ldy(BridgeCollapseOffset);
    lda(offsetof(G, BridgeCollapseData), y);
    // <conv.chunks.Comment object at 0x1019c8680>
    // <conv.chunks.Comment object at 0x1019c8920>
    sta(0x4);
    ldy(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x1019c8a70>
    iny();
    ldx(0xc);
    JSR(RemBridge);
    ldx(ObjectOffset);
    JSR(MoveVOffset);
    lda(Sfx_Blast);
    sta(Square2SoundQueue);
    lda(Sfx_BrickShatter);
    sta(NoiseSoundQueue);
    inc(BridgeCollapseOffset);
    // <conv.chunks.Comment object at 0x1019c8d10>
    // <conv.chunks.Comment object at 0x1019c8da0>
    // <conv.chunks.Comment object at 0x1019c8f50>
    // <conv.chunks.Comment object at 0x1019c9070>
    // <conv.chunks.Comment object at 0x1019c9190>
    // <conv.chunks.Comment object at 0x1019c92b0>
    // <conv.chunks.Comment object at 0x1019c93d0>
    // <conv.chunks.Comment object at 0x1019c94f0>
    // <conv.chunks.Comment object at 0x1019c9610>
    lda(BridgeCollapseOffset);
    cmp(0xf);
    BNE(NoBFall);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x1019c9820>
    // <conv.chunks.Comment object at 0x1019c98b0>
    // <conv.chunks.Comment object at 0x1019c9a90>
    lda(0b1000000);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1019c9ca0>
    lda(Sfx_BowserFall);
    sta(Square2SoundQueue);
    JMP(NoBFall);
}

int NoBFall() {
    // <conv.chunks.Comment object at 0x1019c9ee0>
    // <conv.chunks.Comment object at 0x1019ca000>
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x1019ca240>
    // <conv.chunks.Comment object at 0x1019ca5a0>
    BEQ(BowserControl);
    lda(Enemy_Y_Position, x);
    cmp(0xe0);
    BCC(MoveD_Bowser);
    JMP(KillAllEnemies);
}

int KillAllEnemies() {
    ldx(0x4);
    JMP(KillLoop);
}

int KillLoop() {
    // <conv.chunks.Comment object at 0x1019cab70>
    // <conv.chunks.Comment object at 0x1019cac00>
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta(EnemyFrenzyBuffer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1019cae10>
    // <conv.chunks.Comment object at 0x1019caea0>
    // <conv.chunks.Comment object at 0x1019cafc0>
    // <conv.chunks.Comment object at 0x1019cb0e0>
    return 0;
    JMP(BowserControl);
}

int BowserControl() {
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    lda(TimerControl);
    BEQ(ChkMouth);
    JMP(SkipToFB);
    JMP(ChkMouth);
}

int ChkMouth() {
    // <conv.chunks.Comment object at 0x1019cb320>
    // <conv.chunks.Comment object at 0x1019cb4d0>
    // <conv.chunks.Comment object at 0x1019cb5f0>
    // <conv.chunks.Comment object at 0x1019cb710>
    // <conv.chunks.Comment object at 0x1019cb830>
    lda(BowserBodyControls);
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // <conv.chunks.Comment object at 0x1019cb980>
    // <conv.chunks.Comment object at 0x1019cbad0>
    // <conv.chunks.Comment object at 0x1019cbbf0>
    dec(BowserFeetCounter);
    BNE(ResetMDr);
    lda(0x20);
    // <conv.chunks.Comment object at 0x1019cbd70>
    // <conv.chunks.Comment object at 0x1019cbe90>
    sta(BowserFeetCounter);
    lda(BowserBodyControls);
    eor(0b1);
    // <conv.chunks.Comment object at 0x1019d40e0>
    // <conv.chunks.Comment object at 0x1019d4200>
    sta(BowserBodyControls);
    JMP(ResetMDr);
}

int ResetMDr() {
    // <conv.chunks.Comment object at 0x1019d4410>
    lda(FrameCounter);
    anda(0b1111);
    BNE(B_FaceP);
    lda(0x2);
    sta(Enemy_MovingDir, x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // <conv.chunks.Comment object at 0x1019d4560>
    // <conv.chunks.Comment object at 0x1019d4680>
    // <conv.chunks.Comment object at 0x1019d47d0>
    // <conv.chunks.Comment object at 0x1019d4860>
    // <conv.chunks.Comment object at 0x1019d4a40>
    lda(EnemyFrameTimer, x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // <conv.chunks.Comment object at 0x1019d4bf0>
    // <conv.chunks.Comment object at 0x1019d4d10>
    // <conv.chunks.Comment object at 0x1019d4e30>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1019d4fb0>
    lda(0x2);
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1019d51f0>
    lda(0x20);
    sta(EnemyFrameTimer, x);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x1019d5400>
    // <conv.chunks.Comment object at 0x1019d55e0>
    lda(Enemy_X_Position, x);
    cmp(0xc8);
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // <conv.chunks.Comment object at 0x1019d5820>
    // <conv.chunks.Comment object at 0x1019d58b0>
    // <conv.chunks.Comment object at 0x1019d5a60>
    lda(FrameCounter);
    anda(0b11);
    BNE(HammerChk);
    // <conv.chunks.Comment object at 0x1019d5ca0>
    lda(Enemy_X_Position, x);
    cmp(BowserOrigXPos);
    BNE(GetDToO);
    // <conv.chunks.Comment object at 0x1019d5ee0>
    // <conv.chunks.Comment object at 0x1019d6000>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1019d6270>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(MaxRangeFromOrigin);
    JMP(GetDToO);
}

int GetDToO() {
    lda(Enemy_X_Position, x);
    clc();
    adc(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1019d6840>
    // <conv.chunks.Comment object at 0x1019d68d0>
    sta(Enemy_X_Position, x);
    ldy(Enemy_MovingDir, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x1019d6c30>
    BEQ(HammerChk);
    ldy(0xff);
    sec();
    sbc(BowserOrigXPos);
    BPL(CompDToO);
    // <conv.chunks.Comment object at 0x1019d6e40>
    // <conv.chunks.Comment object at 0x1019d6f90>
    // <conv.chunks.Comment object at 0x1019d7020>
    // <conv.chunks.Comment object at 0x1019d7140>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1019d7380>
    adc(0x1);
    ldy(0x1);
    JMP(CompDToO);
}

int CompDToO() {
    // <conv.chunks.Comment object at 0x1019d7470>
    // <conv.chunks.Comment object at 0x1019d7590>
    cmp(MaxRangeFromOrigin);
    BCC(HammerChk);
    sty(BowserMovementSpeed);
    JMP(HammerChk);
}

int HammerChk() {
    // <conv.chunks.Comment object at 0x1019d7770>
    // <conv.chunks.Comment object at 0x1019d7890>
    // <conv.chunks.Comment object at 0x1019d79b0>
    lda(EnemyFrameTimer, x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x1019d7b30>
    // <conv.chunks.Comment object at 0x1019d7c50>
    // <conv.chunks.Comment object at 0x1019d7d70>
    cmp(World6);
    BCC(SetHmrTmr);
    // <conv.chunks.Comment object at 0x1019d7ec0>
    lda(FrameCounter);
    anda(0b11);
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // <conv.chunks.Comment object at 0x1019e0200>
    // <conv.chunks.Comment object at 0x1019e0320>
    // <conv.chunks.Comment object at 0x1019e0440>
    // <conv.chunks.Comment object at 0x1019e0560>
    lda(Enemy_Y_Position, x);
    cmp(0x80);
    BCC(ChkFireB);
    // <conv.chunks.Comment object at 0x1019e06e0>
    // <conv.chunks.Comment object at 0x1019e0770>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1019e0a40>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(EnemyFrameTimer, x);
    JMP(SkipToFB);
}

int SkipToFB() {
    // <conv.chunks.Comment object at 0x1019e0bf0>
    // <conv.chunks.Comment object at 0x1019e0d40>
    // <conv.chunks.Comment object at 0x1019e0e90>
    JMP(ChkFireB);
    JMP(MakeBJump);
}

int MakeBJump() {
    // <conv.chunks.Comment object at 0x1019e0fe0>
    cmp(0x1);
    BNE(ChkFireB);
    dec(Enemy_Y_Position, x);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x1019e10a0>
    // <conv.chunks.Comment object at 0x1019e1250>
    // <conv.chunks.Comment object at 0x1019e13a0>
    lda(0xfe);
    sta(Enemy_Y_Speed, x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // <conv.chunks.Comment object at 0x1019e1520>
    // <conv.chunks.Comment object at 0x1019e1700>
    lda(WorldNumber);
    cmp(World8);
    BEQ(SpawnFBr);
    cmp(World6);
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // <conv.chunks.Comment object at 0x1019e1850>
    // <conv.chunks.Comment object at 0x1019e18b0>
    // <conv.chunks.Comment object at 0x1019e1ac0>
    // <conv.chunks.Comment object at 0x1019e1b20>
    // <conv.chunks.Comment object at 0x1019e1d30>
    lda(BowserFireBreathTimer);
    BNE(BowserGfxHandler);
    // <conv.chunks.Comment object at 0x1019e1e80>
    lda(0x20);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x1019e2000>
    lda(BowserBodyControls);
    eor(0b10000000);
    sta(BowserBodyControls);
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x1019e22a0>
    // <conv.chunks.Comment object at 0x1019e23c0>
    // <conv.chunks.Comment object at 0x1019e24e0>
    // <conv.chunks.Comment object at 0x1019e2600>
    ldy(SecondaryHardMode);
    BEQ(SetFBTmr);
    // <conv.chunks.Comment object at 0x1019e2810>
    sec();
    sbc(0x10);
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // <conv.chunks.Comment object at 0x1019e29c0>
    // <conv.chunks.Comment object at 0x1019e2a50>
    sta(BowserFireBreathTimer);
    lda(BowserFlame);
    sta(EnemyFrenzyBuffer);
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(0x10);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1019e2ed0>
    // <conv.chunks.Comment object at 0x1019e2ff0>
    // <conv.chunks.Comment object at 0x1019e3080>
    lsr();
    BCC(CopyFToR);
    ldy(0xf0);
    JMP(CopyFToR);
}

int CopyFToR() {
    // <conv.chunks.Comment object at 0x1019e32f0>
    // <conv.chunks.Comment object at 0x1019e3410>
    // <conv.chunks.Comment object at 0x1019e34a0>
    tya();
    clc();
    adc(Enemy_X_Position, x);
    ldy(DuplicateObj_Offset);
    sta(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x1019e36b0>
    // <conv.chunks.Comment object at 0x1019e3800>
    // <conv.chunks.Comment object at 0x1019e3920>
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x8);
    sta(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x1019e3bc0>
    // <conv.chunks.Comment object at 0x1019e3c50>
    // <conv.chunks.Comment object at 0x1019e3ce0>
    lda(Enemy_State, x);
    sta(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1019e3fe0>
    lda(Enemy_MovingDir, x);
    sta(Enemy_MovingDir, y);
    lda(ObjectOffset);
    // <conv.chunks.Comment object at 0x1019ec290>
    // <conv.chunks.Comment object at 0x1019ec3e0>
    pha();
    ldx(DuplicateObj_Offset);
    // <conv.chunks.Comment object at 0x1019ec590>
    stx(ObjectOffset);
    lda(Bowser);
    sta(Enemy_ID, x);
    JSR(ProcessBowserHalf);
    // <conv.chunks.Comment object at 0x1019ec7a0>
    // <conv.chunks.Comment object at 0x1019ec800>
    // <conv.chunks.Comment object at 0x1019eca40>
    pla();
    sta(ObjectOffset);
    // <conv.chunks.Comment object at 0x1019ecbf0>
    tax();
    lda(0x0);
    // <conv.chunks.Comment object at 0x1019ecda0>
    sta(BowserGfxFlag);
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // <conv.chunks.Comment object at 0x1019ecfe0>
    return 0;
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc(BowserGfxFlag);
    JSR(RunRetainerObj);
    // <conv.chunks.Comment object at 0x1019ed130>
    // <conv.chunks.Comment object at 0x1019ed250>
    lda(Enemy_State, x);
    BNE(ExBGfxH);
    // <conv.chunks.Comment object at 0x1019ed490>
    lda(0xa);
    sta(Enemy_BoundBoxCtrl, x);
    JSR(GetEnemyBoundBox);
    JMP(PlayerEnemyCollision);
    JMP(SetFlameTimer);
}

int SetFlameTimer() {
    ldy(BowserFlameTimerCtrl);
    inc(BowserFlameTimerCtrl);
    lda(BowserFlameTimerCtrl);
    anda(0b111);
    // <conv.chunks.Comment object at 0x1019edb80>
    // <conv.chunks.Comment object at 0x1019edca0>
    // <conv.chunks.Comment object at 0x1019ee210>
    // <conv.chunks.Comment object at 0x1019ee330>
    sta(BowserFlameTimerCtrl);
    lda(offsetof(G, FlameTimerData), y);
    JMP(ExFl);
}

int ExFl() {
    return 0;
    JMP(ProcBowserFlame);
}

int ProcBowserFlame() {
    lda(TimerControl);
    BNE(SetGfxF);
    lda(0x40);
    // <conv.chunks.Comment object at 0x1019ee7b0>
    // <conv.chunks.Comment object at 0x1019ee8d0>
    // <conv.chunks.Comment object at 0x1019eea20>
    ldy(SecondaryHardMode);
    BEQ(SFlmX);
    lda(0x60);
    JMP(SFlmX);
}

int SFlmX() {
    // <conv.chunks.Comment object at 0x1019eec30>
    // <conv.chunks.Comment object at 0x1019eed80>
    // <conv.chunks.Comment object at 0x1019eee10>
    sta(0x0);
    lda(Enemy_X_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x1019ef170>
    sbc(0x0);
    sta(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x1019ef200>
    lda(Enemy_X_Position, x);
    sbc(0x1);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1019ef560>
    // <conv.chunks.Comment object at 0x1019ef5f0>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x1019ef8f0>
    sta(Enemy_PageLoc, x);
    ldy(BowserFlamePRandomOfs, x);
    lda(Enemy_Y_Position, x);
    cmp(offsetof(G, FlameYPosData), y);
    BEQ(SetGfxF);
    // <conv.chunks.Comment object at 0x1019efb30>
    // <conv.chunks.Comment object at 0x1019efc80>
    // <conv.chunks.Comment object at 0x1019efdd0>
    // <conv.chunks.Comment object at 0x1019eff20>
    clc();
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_Y_Position, x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // <conv.chunks.Comment object at 0x1019f8140>
    // <conv.chunks.Comment object at 0x1019f8290>
    // <conv.chunks.Comment object at 0x1019f83e0>
    JSR(RelativeEnemyPosition);
    lda(Enemy_State, x);
    BNE(ExFl);
    lda(0x51);
    sta(0x0);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x1019f8560>
    // <conv.chunks.Comment object at 0x1019f86b0>
    // <conv.chunks.Comment object at 0x1019f8800>
    // <conv.chunks.Comment object at 0x1019f8950>
    // <conv.chunks.Comment object at 0x1019f89e0>
    lda(FrameCounter);
    anda(0b10);
    BEQ(FlmeAt);
    ldy(0x82);
    JMP(FlmeAt);
}

int FlmeAt() {
    // <conv.chunks.Comment object at 0x1019f8c50>
    // <conv.chunks.Comment object at 0x1019f8d70>
    // <conv.chunks.Comment object at 0x1019f8ec0>
    // <conv.chunks.Comment object at 0x1019f8f50>
    sty(0x1);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x1019f9100>
    ldx(0x0);
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda(Enemy_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x1019f93d0>
    // <conv.chunks.Comment object at 0x1019f94f0>
    lda(0x0);
    sta(Sprite_Tilenumber, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x1019f9640>
    // <conv.chunks.Comment object at 0x1019f98b0>
    lda(0x1);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x1019f9940>
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1019f9cd0>
    clc();
    adc(0x8);
    sta(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x1019f9f10>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x3);
    // <conv.chunks.Comment object at 0x1019fa2a0>
    // <conv.chunks.Comment object at 0x1019fa360>
    // <conv.chunks.Comment object at 0x1019fa3f0>
    BCC(DrawFlameLoop);
    ldx(ObjectOffset);
    JSR(GetEnemyOffscreenBits);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_OffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x1019fa600>
    // <conv.chunks.Comment object at 0x1019fa720>
    // <conv.chunks.Comment object at 0x1019fa840>
    // <conv.chunks.Comment object at 0x1019fa990>
    // <conv.chunks.Comment object at 0x1019faae0>
    pha();
    BCC(M3FOfs);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(M3FOfs);
}

int M3FOfs() {
    // <conv.chunks.Comment object at 0x1019fac00>
    // <conv.chunks.Comment object at 0x1019fad50>
    // <conv.chunks.Comment object at 0x1019fade0>
    // <conv.chunks.Comment object at 0x1019fb080>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1019fb1d0>
    pha();
    BCC(M2FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1019fb2f0>
    // <conv.chunks.Comment object at 0x1019fb440>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // <conv.chunks.Comment object at 0x1019fb740>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1019fb890>
    pha();
    BCC(M1FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1019fb9b0>
    // <conv.chunks.Comment object at 0x1019fbb00>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // <conv.chunks.Comment object at 0x1019fbe00>
    pla();
    lsr();
    BCC(ExFlmeD);
    // <conv.chunks.Comment object at 0x1019fbf50>
    // <conv.chunks.Comment object at 0x1019fbfe0>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // <conv.chunks.Comment object at 0x101a001d0>
    // <conv.chunks.Comment object at 0x101a003e0>
    return 0;
    JMP(RunFireworks);
}

int RunFireworks() {
    dec(ExplosionTimerCounter, x);
    BNE(SetupExpl);
    // <conv.chunks.Comment object at 0x101a00560>
    // <conv.chunks.Comment object at 0x101a006b0>
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    inc(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x101a00830>
    // <conv.chunks.Comment object at 0x101a00a10>
    lda(ExplosionGfxCounter, x);
    cmp(0x3);
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // <conv.chunks.Comment object at 0x101a00c80>
    // <conv.chunks.Comment object at 0x101a00d10>
    // <conv.chunks.Comment object at 0x101a00ec0>
    JSR(RelativeEnemyPosition);
    lda(Enemy_Rel_YPos);
    sta(Fireball_Rel_YPos);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x101a01010>
    // <conv.chunks.Comment object at 0x101a01130>
    // <conv.chunks.Comment object at 0x101a01250>
    sta(Fireball_Rel_XPos);
    ldy(Enemy_SprDataOffset, x);
    lda(ExplosionGfxCounter, x);
    JSR(DrawExplosion_Fireworks);
    // <conv.chunks.Comment object at 0x101a01460>
    // <conv.chunks.Comment object at 0x101a015b0>
    // <conv.chunks.Comment object at 0x101a01700>
    return 0;
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a018e0>
    sta(Enemy_Flag, x);
    lda(Sfx_Blast);
    // <conv.chunks.Comment object at 0x101a01b20>
    sta(Square2SoundQueue);
    lda(0x5);
    // <conv.chunks.Comment object at 0x101a01d30>
    sta(((DigitModifier) + (4)));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a02270>
    sta(EnemyFrenzyBuffer);
    lda(StarFlagTaskControl);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x101a02ae0>
    // <conv.chunks.Comment object at 0x101a02c00>
    BCS(StarFlagExit);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(0x5);
    lda(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x101a02f60>
    // <conv.chunks.Comment object at 0x101a032c0>
    cmp(0x1);
    BEQ(SetFWC);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x101a03590>
    // <conv.chunks.Comment object at 0x101a03770>
    cmp(0x3);
    BEQ(SetFWC);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101a038f0>
    // <conv.chunks.Comment object at 0x101a03ad0>
    cmp(0x6);
    BEQ(SetFWC);
    lda(0xff);
    JMP(SetFWC);
}

int SetFWC() {
    // <conv.chunks.Comment object at 0x101a03c50>
    // <conv.chunks.Comment object at 0x101a03e30>
    // <conv.chunks.Comment object at 0x101a03ec0>
    sta(FireworksCounter);
    sty(Enemy_State, x);
    JMP(IncrementSFTask1);
}

int IncrementSFTask1() {
    inc(StarFlagTaskControl);
    JMP(StarFlagExit);
}

int StarFlagExit() {
    return 0;
    JMP(AwardGameTimerPoints);
}

int AwardGameTimerPoints() {
    lda(GameTimerDisplay);
    // <conv.chunks.Comment object at 0x101a04500>
    ora(((GameTimerDisplay) + (1)));
    ora(((GameTimerDisplay) + (2)));
    BEQ(IncrementSFTask1);
    // <conv.chunks.Comment object at 0x101a04980>
    lda(FrameCounter);
    anda(0b100);
    BEQ(NoTTick);
    // <conv.chunks.Comment object at 0x101a04b90>
    // <conv.chunks.Comment object at 0x101a04cb0>
    lda(Sfx_TimerTick);
    sta(Square2SoundQueue);
    JMP(NoTTick);
}

int NoTTick() {
    // <conv.chunks.Comment object at 0x101a04ef0>
    // <conv.chunks.Comment object at 0x101a05010>
    ldy(0x23);
    lda(0xff);
    sta(((DigitModifier) + (5)));
    JSR(DigitsMathRoutine);
    lda(0x5);
    sta(((DigitModifier) + (5)));
    JMP(EndAreaPoints);
}

int EndAreaPoints() {
    ldy(0xb);
    lda(CurrentPlayer);
    BEQ(ELPGive);
    ldy(0x11);
    JMP(ELPGive);
}

int ELPGive() {
    // <conv.chunks.Comment object at 0x101a058e0>
    // <conv.chunks.Comment object at 0x101a05970>
    // <conv.chunks.Comment object at 0x101a05b20>
    // <conv.chunks.Comment object at 0x101a05c70>
    // <conv.chunks.Comment object at 0x101a05d00>
    JSR(DigitsMathRoutine);
    lda(CurrentPlayer);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x101a05f10>
    // <conv.chunks.Comment object at 0x101a06060>
    // <conv.chunks.Comment object at 0x101a06120>
    asl();
    asl();
    ora(0b100);
    JMP(UpdateNumber);
    JMP(RaiseFlagSetoffFWorks);
}

int RaiseFlagSetoffFWorks() {
    lda(Enemy_Y_Position, x);
    cmp(0x72);
    BCC(SetoffF);
    dec(Enemy_Y_Position, x);
    JMP(DrawStarFlag);
    JMP(SetoffF);
}

int SetoffF() {
    // <conv.chunks.Comment object at 0x101a06540>
    // <conv.chunks.Comment object at 0x101a06690>
    // <conv.chunks.Comment object at 0x101a06720>
    // <conv.chunks.Comment object at 0x101a06900>
    // <conv.chunks.Comment object at 0x101a06a50>
    // <conv.chunks.Comment object at 0x101a06b70>
    lda(FireworksCounter);
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // <conv.chunks.Comment object at 0x101a06cf0>
    // <conv.chunks.Comment object at 0x101a06e10>
    lda(Fireworks);
    sta(EnemyFrenzyBuffer);
    JMP(DrawStarFlag);
}

int DrawStarFlag() {
    JSR(RelativeEnemyPosition);
    ldy(Enemy_SprDataOffset, x);
    ldx(0x3);
    JMP(DSFLoop);
}

int DSFLoop() {
    // <conv.chunks.Comment object at 0x101a07170>
    // <conv.chunks.Comment object at 0x101a07290>
    // <conv.chunks.Comment object at 0x101a073e0>
    // <conv.chunks.Comment object at 0x101a07470>
    lda(Enemy_Rel_YPos);
    clc();
    adc(offsetof(G, StarFlagYPosAdder), x);
    sta(Sprite_Y_Position, y);
    lda(offsetof(G, StarFlagTileData), x);
    sta(Sprite_Tilenumber, y);
    lda(0x22);
    sta(Sprite_Attributes, y);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x101a07710>
    // <conv.chunks.Comment object at 0x101a07860>
    // <conv.chunks.Comment object at 0x101a079b0>
    // <conv.chunks.Comment object at 0x101a07b00>
    // <conv.chunks.Comment object at 0x101a07c50>
    // <conv.chunks.Comment object at 0x101a07ce0>
    // <conv.chunks.Comment object at 0x101a07ec0>
    clc();
    adc(offsetof(G, StarFlagXPosAdder), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x101a140b0>
    // <conv.chunks.Comment object at 0x101a14200>
    iny();
    iny();
    iny();
    // <conv.chunks.Comment object at 0x101a14410>
    // <conv.chunks.Comment object at 0x101a144d0>
    iny();
    dex();
    BPL(DSFLoop);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101a14620>
    // <conv.chunks.Comment object at 0x101a146b0>
    // <conv.chunks.Comment object at 0x101a14800>
    return 0;
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // <conv.chunks.Comment object at 0x101a149e0>
    lda(0x6);
    sta(EnemyIntervalTimer, x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc(StarFlagTaskControl);
    // <conv.chunks.Comment object at 0x101a14d70>
    return 0;
    JMP(DelayToAreaEnd);
}

int DelayToAreaEnd() {
    JSR(DrawStarFlag);
    lda(EnemyIntervalTimer, x);
    BNE(StarFlagExit2);
    lda(EventMusicBuffer);
    BEQ(IncrementSFTask2);
    JMP(StarFlagExit2);
}

int StarFlagExit2() {
    return 0;
    JMP(MovePiranhaPlant);
}

int MovePiranhaPlant() {
    lda(Enemy_State, x);
    BNE(PutinPipe);
    lda(EnemyFrameTimer, x);
    BNE(PutinPipe);
    lda(PiranhaPlant_MoveFlag, x);
    BNE(SetupToMovePPlant);
    lda(PiranhaPlant_Y_Speed, x);
    BMI(ReversePlantSpeed);
    JSR(PlayerEnemyDiff);
    BPL(ChkPlayerNearPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a15580>
    // <conv.chunks.Comment object at 0x101a15640>
    // <conv.chunks.Comment object at 0x101a156a0>
    // <conv.chunks.Comment object at 0x101a157f0>
    // <conv.chunks.Comment object at 0x101a15910>
    // <conv.chunks.Comment object at 0x101a15a60>
    // <conv.chunks.Comment object at 0x101a15b80>
    // <conv.chunks.Comment object at 0x101a15cd0>
    // <conv.chunks.Comment object at 0x101a15df0>
    // <conv.chunks.Comment object at 0x101a15f40>
    // <conv.chunks.Comment object at 0x101a16060>
    // <conv.chunks.Comment object at 0x101a16180>
    // <conv.chunks.Comment object at 0x101a162d0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101a164e0>
    adc(0x1);
    sta(0x0);
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a167e0>
    cmp(0x21);
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda(PiranhaPlant_Y_Speed, x);
    // <conv.chunks.Comment object at 0x101a16b10>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101a16d80>
    adc(0x1);
    sta(PiranhaPlant_Y_Speed, x);
    inc(PiranhaPlant_MoveFlag, x);
    JMP(SetupToMovePPlant);
}

int SetupToMovePPlant() {
    lda(PiranhaPlantDownYPos, x);
    ldy(PiranhaPlant_Y_Speed, x);
    BPL(RiseFallPiranhaPlant);
    lda(PiranhaPlantUpYPos, x);
    JMP(RiseFallPiranhaPlant);
}

int RiseFallPiranhaPlant() {
    sta(0x0);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x101a17740>
    // <conv.chunks.Comment object at 0x101a177d0>
    lsr();
    BCC(PutinPipe);
    lda(TimerControl);
    BNE(PutinPipe);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101a179e0>
    // <conv.chunks.Comment object at 0x101a17b00>
    // <conv.chunks.Comment object at 0x101a17c20>
    // <conv.chunks.Comment object at 0x101a17d40>
    clc();
    adc(PiranhaPlant_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    cmp(0x0);
    BNE(PutinPipe);
    // <conv.chunks.Comment object at 0x101a17f20>
    // <conv.chunks.Comment object at 0x101a1c0b0>
    // <conv.chunks.Comment object at 0x101a1c230>
    // <conv.chunks.Comment object at 0x101a1c2c0>
    lda(0x0);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x101a1c4a0>
    lda(0x40);
    sta(EnemyFrameTimer, x);
    JMP(PutinPipe);
}

int PutinPipe() {
    lda(0b100000);
    sta(Enemy_SprAttrib, x);
    return 0;
    JMP(FirebarSpin);
}

int FirebarSpin() {
    sta(0x7);
    lda(FirebarSpinDirection, x);
    BNE(SpinCounterClockwise);
    ldy(0x18);
    // <conv.chunks.Comment object at 0x101a1c8f0>
    // <conv.chunks.Comment object at 0x101a1ca10>
    // <conv.chunks.Comment object at 0x101a1cb90>
    // <conv.chunks.Comment object at 0x101a1cc50>
    // <conv.chunks.Comment object at 0x101a1cce0>
    // <conv.chunks.Comment object at 0x101a1cd70>
    // <conv.chunks.Comment object at 0x101a1cf20>
    // <conv.chunks.Comment object at 0x101a1d040>
    lda(FirebarSpinState_Low, x);
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x101a1d2b0>
    // <conv.chunks.Comment object at 0x101a1d370>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x101a1d580>
    adc(0x0);
    return 0;
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x101a1d880>
    lda(FirebarSpinState_Low, x);
    sec();
    sbc(0x7);
    // <conv.chunks.Comment object at 0x101a1daf0>
    // <conv.chunks.Comment object at 0x101a1dbb0>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x101a1ddc0>
    sbc(0x0);
    return 0;
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x101a1e0c0>
    // <conv.chunks.Comment object at 0x101a1e120>
    // <conv.chunks.Comment object at 0x101a1e180>
    cmp(0x3);
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // <conv.chunks.Comment object at 0x101a1e4e0>
    // <conv.chunks.Comment object at 0x101a1e600>
    lda(Enemy_State, x);
    BPL(CheckBalPlatform);
    // <conv.chunks.Comment object at 0x101a1e7b0>
    return 0;
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda(PlatformCollisionFlag, x);
    sta(0x0);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x101a1e9c0>
    // <conv.chunks.Comment object at 0x101a1ea50>
    // <conv.chunks.Comment object at 0x101a1ebd0>
    // <conv.chunks.Comment object at 0x101a1ec60>
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(0x2d);
    // <conv.chunks.Comment object at 0x101a1f050>
    cmp(Enemy_Y_Position, x);
    BCC(ChkOtherForFall);
    cpy(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x101a1f290>
    // <conv.chunks.Comment object at 0x101a1f3e0>
    // <conv.chunks.Comment object at 0x101a1f470>
    clc();
    adc(0x2);
    sta(Enemy_Y_Position, x);
    JMP(StopPlatforms);
    JMP(MakePlatformFall);
}

int MakePlatformFall() {
    JMP(InitPlatformFall);
    JMP(ChkOtherForFall);
}

int ChkOtherForFall() {
    cmp(Enemy_Y_Position, y);
    BCC(ChkToMoveBalPlat);
    cpx(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x101a1fb90>
    // <conv.chunks.Comment object at 0x101a1fce0>
    // <conv.chunks.Comment object at 0x101a1fe30>
    // <conv.chunks.Comment object at 0x101a1fec0>
    clc();
    adc(0x2);
    sta(Enemy_Y_Position, y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101a244d0>
    pha();
    lda(PlatformCollisionFlag, x);
    BPL(ColFlg);
    // <conv.chunks.Comment object at 0x101a246b0>
    // <conv.chunks.Comment object at 0x101a24800>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x101a24aa0>
    adc(0x5);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101a24c50>
    lda(Enemy_Y_Speed, x);
    adc(0x0);
    BMI(PlatDn);
    BNE(PlatUp);
    // <conv.chunks.Comment object at 0x101a24e60>
    // <conv.chunks.Comment object at 0x101a24ef0>
    // <conv.chunks.Comment object at 0x101a250d0>
    lda(0x0);
    cmp(0xb);
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // <conv.chunks.Comment object at 0x101a25220>
    // <conv.chunks.Comment object at 0x101a253a0>
    // <conv.chunks.Comment object at 0x101a25580>
    // <conv.chunks.Comment object at 0x101a256d0>
    cmp(ObjectOffset);
    BEQ(PlatDn);
    JMP(PlatUp);
}

int PlatUp() {
    // <conv.chunks.Comment object at 0x101a25850>
    // <conv.chunks.Comment object at 0x101a259a0>
    JSR(MovePlatformUp);
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}

int PlatSt() {
    // <conv.chunks.Comment object at 0x101a25b20>
    // <conv.chunks.Comment object at 0x101a25c40>
    JSR(StopPlatforms);
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}

int PlatDn() {
    // <conv.chunks.Comment object at 0x101a25dc0>
    // <conv.chunks.Comment object at 0x101a25ee0>
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}

int DoOtherPlatform() {
    ldy(Enemy_State, x);
    pla();
    // <conv.chunks.Comment object at 0x101a26090>
    // <conv.chunks.Comment object at 0x101a26210>
    sec();
    sbc(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101a26330>
    clc();
    adc(Enemy_Y_Position, y);
    sta(Enemy_Y_Position, y);
    lda(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x101a26510>
    // <conv.chunks.Comment object at 0x101a26660>
    // <conv.chunks.Comment object at 0x101a267b0>
    BMI(DrawEraseRope);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(DrawEraseRope);
}

int DrawEraseRope() {
    ldy(ObjectOffset);
    lda(Enemy_Y_Speed, y);
    ora(Enemy_Y_MoveForce, y);
    BEQ(ExitRp);
    ldx(VRAM_Buffer1_Offset);
    cpx(0x20);
    BCS(ExitRp);
    // <conv.chunks.Comment object at 0x101a26c00>
    // <conv.chunks.Comment object at 0x101a26d20>
    // <conv.chunks.Comment object at 0x101a26e70>
    // <conv.chunks.Comment object at 0x101a26fc0>
    // <conv.chunks.Comment object at 0x101a27110>
    // <conv.chunks.Comment object at 0x101a27230>
    // <conv.chunks.Comment object at 0x101a272c0>
    lda(Enemy_Y_Speed, y);
    pha();
    // <conv.chunks.Comment object at 0x101a275f0>
    pha();
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x101a27710>
    // <conv.chunks.Comment object at 0x101a27860>
    // <conv.chunks.Comment object at 0x101a278f0>
    lda(0x0);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x101a27d70>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(Enemy_Y_Speed, y);
    BMI(EraseR1);
    // <conv.chunks.Comment object at 0x101a340b0>
    // <conv.chunks.Comment object at 0x101a34200>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0xa3);
    // <conv.chunks.Comment object at 0x101a343b0>
    // <conv.chunks.Comment object at 0x101a34650>
    sta(((VRAM_Buffer1) + (4)), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // <conv.chunks.Comment object at 0x101a34950>
    // <conv.chunks.Comment object at 0x101a34a70>
    lda(0x24);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x101a34b60>
    sta(((VRAM_Buffer1) + (4)), x);
    JMP(OtherRope);
}

int OtherRope() {
    lda(Enemy_State, y);
    tay();
    pla();
    eor(0xff);
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(((VRAM_Buffer1) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101a35010>
    // <conv.chunks.Comment object at 0x101a35190>
    // <conv.chunks.Comment object at 0x101a35250>
    // <conv.chunks.Comment object at 0x101a352e0>
    // <conv.chunks.Comment object at 0x101a35370>
    // <conv.chunks.Comment object at 0x101a35550>
    // <conv.chunks.Comment object at 0x101a355e0>
    // <conv.chunks.Comment object at 0x101a35880>
    sta(((VRAM_Buffer1) + (6)), x);
    lda(0x2);
    sta(((VRAM_Buffer1) + (7)), x);
    pla();
    BPL(EraseR2);
    // <conv.chunks.Comment object at 0x101a35bb0>
    // <conv.chunks.Comment object at 0x101a35e80>
    // <conv.chunks.Comment object at 0x101a35f10>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (8)), x);
    lda(0xa3);
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // <conv.chunks.Comment object at 0x101a360c0>
    // <conv.chunks.Comment object at 0x101a36360>
    // <conv.chunks.Comment object at 0x101a363f0>
    // <conv.chunks.Comment object at 0x101a36690>
    // <conv.chunks.Comment object at 0x101a367e0>
    lda(0x24);
    sta(((VRAM_Buffer1) + (8)), x);
    // <conv.chunks.Comment object at 0x101a368d0>
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
}

int EndRp() {
    // <conv.chunks.Comment object at 0x101a36d50>
    lda(0x0);
    sta(((VRAM_Buffer1) + (10)), x);
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x101a370b0>
    // <conv.chunks.Comment object at 0x101a37200>
    adc(10);
    sta(VRAM_Buffer1_Offset);
    JMP(ExitRp);
}

int ExitRp() {
    // <conv.chunks.Comment object at 0x101a37470>
    ldx(ObjectOffset);
    return 0;
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x101a376e0>
    // <conv.chunks.Comment object at 0x101a37770>
    clc();
    adc(0x8);
    ldx(SecondaryHardMode);
    BNE(GetLRp);
    // <conv.chunks.Comment object at 0x101a37950>
    // <conv.chunks.Comment object at 0x101a379e0>
    // <conv.chunks.Comment object at 0x101a37b90>
    clc();
    adc(0x10);
    JMP(GetLRp);
}

int GetLRp() {
    // <conv.chunks.Comment object at 0x101a37d70>
    // <conv.chunks.Comment object at 0x101a37e00>
    pha();
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(0x2);
    pla();
    anda(0b11110000);
    lsr();
    // <conv.chunks.Comment object at 0x101a3c110>
    // <conv.chunks.Comment object at 0x101a3c260>
    // <conv.chunks.Comment object at 0x101a3c1a0>
    // <conv.chunks.Comment object at 0x101a3c410>
    // <conv.chunks.Comment object at 0x101a3c560>
    lsr();
    lsr();
    sta(0x0);
    ldx(Enemy_Y_Position, y);
    pla();
    BPL(GetHRp);
    // <conv.chunks.Comment object at 0x101a3c740>
    // <conv.chunks.Comment object at 0x101a3c7d0>
    // <conv.chunks.Comment object at 0x101a3c9b0>
    // <conv.chunks.Comment object at 0x101a3ca40>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // <conv.chunks.Comment object at 0x101a3ccb0>
    // <conv.chunks.Comment object at 0x101a3ce00>
    // <conv.chunks.Comment object at 0x101a3ce90>
    txa();
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x101a3cfb0>
    asl();
    rol();
    pha();
    rol();
    anda(0b11);
    ora(0b100000);
    sta(0x1);
    lda(0x2);
    anda(0x1);
    // <conv.chunks.Comment object at 0x101a3d190>
    // <conv.chunks.Comment object at 0x101a3d250>
    // <conv.chunks.Comment object at 0x101a3d310>
    // <conv.chunks.Comment object at 0x101a3d3a0>
    // <conv.chunks.Comment object at 0x101a3d4c0>
    // <conv.chunks.Comment object at 0x101a3d610>
    // <conv.chunks.Comment object at 0x101a3d5e0>
    // <conv.chunks.Comment object at 0x101a3d7c0>
    asl();
    asl();
    ora(0x1);
    sta(0x1);
    pla();
    anda(0b11100000);
    // <conv.chunks.Comment object at 0x101a3da00>
    // <conv.chunks.Comment object at 0x101a3dac0>
    // <conv.chunks.Comment object at 0x101a3da90>
    // <conv.chunks.Comment object at 0x101a3db50>
    // <conv.chunks.Comment object at 0x101a3dd90>
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101a3df70>
    // <conv.chunks.Comment object at 0x101a3df40>
    lda(Enemy_Y_Position, y);
    cmp(0xe8);
    BCC(ExPRp);
    // <conv.chunks.Comment object at 0x101a3e2a0>
    // <conv.chunks.Comment object at 0x101a3e330>
    lda(0x0);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x101a3e510>
    sta(0x0);
    JMP(ExPRp);
}

int ExPRp() {
    // <conv.chunks.Comment object at 0x101a3e7b0>
    return 0;
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x101a3e9c0>
    tax();
    JSR(GetEnemyOffscreenBits);
    // <conv.chunks.Comment object at 0x101a3eae0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x101a3ec60>
    lda(Player_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    // <conv.chunks.Comment object at 0x101a3ef00>
    lda(Player_Y_Position);
    sta(FloateyNum_Y_Pos, x);
    lda(0x1);
    sta(Enemy_MovingDir, x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta(Enemy_Y_Speed, y);
    // <conv.chunks.Comment object at 0x101a3f500>
    // <conv.chunks.Comment object at 0x101a3f620>
    sta(Enemy_Y_MoveForce, y);
    return 0;
    JMP(PlatformFall);
}

int PlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x101a3f980>
    pha();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x101a3faa0>
    pla();
    tax();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x101a3fc80>
    // <conv.chunks.Comment object at 0x101a3fd10>
    ldx(ObjectOffset);
    lda(PlatformCollisionFlag, x);
    BMI(ExPF);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}

int ExPF() {
    // <conv.chunks.Comment object at 0x101a3ff20>
    // <conv.chunks.Comment object at 0x101a480b0>
    // <conv.chunks.Comment object at 0x101a48230>
    // <conv.chunks.Comment object at 0x101a482c0>
    // <conv.chunks.Comment object at 0x101a483e0>
    ldx(ObjectOffset);
    return 0;
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda(Enemy_Y_Speed, x);
    ora(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x101a48650>
    // <conv.chunks.Comment object at 0x101a487a0>
    BNE(ChkYCenterPos);
    sta(Enemy_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x101a489e0>
    lda(Enemy_Y_Position, x);
    cmp(YPlatformTopYPos, x);
    BCS(ChkYCenterPos);
    // <conv.chunks.Comment object at 0x101a48c50>
    // <conv.chunks.Comment object at 0x101a48da0>
    lda(FrameCounter);
    anda(0b111);
    // <conv.chunks.Comment object at 0x101a48fb0>
    BNE(SkipIY);
    inc(Enemy_Y_Position, x);
    JMP(SkipIY);
}

int SkipIY() {
    // <conv.chunks.Comment object at 0x101a491f0>
    // <conv.chunks.Comment object at 0x101a49340>
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda(Enemy_Y_Position, x);
    cmp(YPlatformCenterYPos, x);
    // <conv.chunks.Comment object at 0x101a494f0>
    // <conv.chunks.Comment object at 0x101a49640>
    BCC(YMDown);
    JSR(MovePlatformUp);
    // <conv.chunks.Comment object at 0x101a498b0>
    JMP(ChkYPCollision);
    JMP(YMDown);
}

int YMDown() {
    // <conv.chunks.Comment object at 0x101a49ac0>
    JSR(MovePlatformDown);
    JMP(ChkYPCollision);
}

int ChkYPCollision() {
    lda(PlatformCollisionFlag, x);
    BMI(ExYPl);
    JSR(PositionPlayerOnVPlat);
    JMP(ExYPl);
}

int ExYPl() {
    // <conv.chunks.Comment object at 0x101a49c70>
    // <conv.chunks.Comment object at 0x101a49dc0>
    // <conv.chunks.Comment object at 0x101a49f10>
    // <conv.chunks.Comment object at 0x101a4a060>
    return 0;
    JMP(XMovingPlatform);
}

int XMovingPlatform() {
    lda(0xe);
    JSR(XMoveCntr_Platform);
    JSR(MoveWithXMCntrs);
    lda(PlatformCollisionFlag, x);
    BMI(ExXMP);
    JMP(PositionPlayerOnHPlat);
}

int PositionPlayerOnHPlat() {
    lda(Player_X_Position);
    clc();
    adc(0x0);
    sta(Player_X_Position);
    lda(Player_PageLoc);
    ldy(0x0);
    BMI(PPHSubt);
    adc(0x0);
    JMP(SetPVar);
    JMP(PPHSubt);
}

int PPHSubt() {
    // <conv.chunks.Comment object at 0x101a4a960>
    // <conv.chunks.Comment object at 0x101a4aa20>
    // <conv.chunks.Comment object at 0x101a4aab0>
    // <conv.chunks.Comment object at 0x101a4ac30>
    // <conv.chunks.Comment object at 0x101a4ad80>
    // <conv.chunks.Comment object at 0x101a4ae10>
    // <conv.chunks.Comment object at 0x101a4afc0>
    // <conv.chunks.Comment object at 0x101a4b050>
    // <conv.chunks.Comment object at 0x101a4b230>
    sbc(0x0);
    JMP(SetPVar);
}

int SetPVar() {
    // <conv.chunks.Comment object at 0x101a4b320>
    sta(Player_PageLoc);
    sty(Platform_X_Scroll);
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // <conv.chunks.Comment object at 0x101a4b530>
    // <conv.chunks.Comment object at 0x101a4b650>
    // <conv.chunks.Comment object at 0x101a4b770>
    return 0;
    JMP(DropPlatform);
}

int DropPlatform() {
    lda(PlatformCollisionFlag, x);
    BMI(ExDPl);
    JSR(MoveDropPlatform);
    JSR(PositionPlayerOnVPlat);
    JMP(ExDPl);
}

int ExDPl() {
    // <conv.chunks.Comment object at 0x101a4b8f0>
    // <conv.chunks.Comment object at 0x101a4ba40>
    // <conv.chunks.Comment object at 0x101a4bb90>
    // <conv.chunks.Comment object at 0x101a4bcb0>
    // <conv.chunks.Comment object at 0x101a4be00>
    return 0;
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    lda(PlatformCollisionFlag, x);
    BMI(ExRPl);
    // <conv.chunks.Comment object at 0x101a4bf50>
    // <conv.chunks.Comment object at 0x101a4bfb0>
    // <conv.chunks.Comment object at 0x101a54140>
    // <conv.chunks.Comment object at 0x101a541d0>
    // <conv.chunks.Comment object at 0x101a54380>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // <conv.chunks.Comment object at 0x101a54530>
    // <conv.chunks.Comment object at 0x101a54710>
    // <conv.chunks.Comment object at 0x101a54830>
    return 0;
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
    lda(TimerControl);
    BNE(ExLiftP);
    // <conv.chunks.Comment object at 0x101a54e90>
    // <conv.chunks.Comment object at 0x101a54fb0>
    lda(Enemy_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x101a55250>
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(Enemy_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101a55520>
    // <conv.chunks.Comment object at 0x101a55670>
    // <conv.chunks.Comment object at 0x101a557c0>
    return 0;
    JMP(ChkSmallPlatCollision);
}

int ChkSmallPlatCollision() {
    lda(PlatformCollisionFlag, x);
    BEQ(ExLiftP);
    JSR(PositionPlayerOnS_Plat);
    JMP(ExLiftP);
}

int ExLiftP() {
    // <conv.chunks.Comment object at 0x101a559d0>
    // <conv.chunks.Comment object at 0x101a55b20>
    // <conv.chunks.Comment object at 0x101a55c70>
    // <conv.chunks.Comment object at 0x101a55d90>
    return 0;
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda(Enemy_ID, x);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x101a55fd0>
    // <conv.chunks.Comment object at 0x101a56120>
    BEQ(ExScrnBd);
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x101a56330>
    ldy(Enemy_ID, x);
    cpy(HammerBro);
    // <conv.chunks.Comment object at 0x101a56570>
    BEQ(LimitB);
    cpy(PiranhaPlant);
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // <conv.chunks.Comment object at 0x101a567b0>
    // <conv.chunks.Comment object at 0x101a568d0>
    // <conv.chunks.Comment object at 0x101a569f0>
    adc(0x38);
    JMP(ExtendLB);
}

int ExtendLB() {
    // <conv.chunks.Comment object at 0x101a56ae0>
    sbc(0x48);
    sta(0x1);
    // <conv.chunks.Comment object at 0x101a56cf0>
    lda(ScreenLeft_PageLoc);
    sbc(0x0);
    sta(0x0);
    lda(ScreenRight_X_Pos);
    // <conv.chunks.Comment object at 0x101a56ed0>
    // <conv.chunks.Comment object at 0x101a57020>
    // <conv.chunks.Comment object at 0x101a570b0>
    adc(0x48);
    sta(0x3);
    // <conv.chunks.Comment object at 0x101a57350>
    lda(ScreenRight_PageLoc);
    adc(0x0);
    sta(0x2);
    lda(Enemy_X_Position, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x101a57530>
    // <conv.chunks.Comment object at 0x101a57680>
    // <conv.chunks.Comment object at 0x101a57710>
    // <conv.chunks.Comment object at 0x101a578f0>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    BMI(TooFar);
    lda(Enemy_X_Position, x);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x101a57b30>
    // <conv.chunks.Comment object at 0x101a57bc0>
    // <conv.chunks.Comment object at 0x101a57d70>
    // <conv.chunks.Comment object at 0x101a57ef0>
    lda(Enemy_PageLoc, x);
    sbc(0x2);
    BMI(ExScrnBd);
    lda(Enemy_State, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x101a5c170>
    // <conv.chunks.Comment object at 0x101a5c200>
    // <conv.chunks.Comment object at 0x101a5c380>
    // <conv.chunks.Comment object at 0x101a5c4d0>
    BEQ(ExScrnBd);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x101a5c6e0>
    BEQ(ExScrnBd);
    cpy(FlagpoleFlagObject);
    // <conv.chunks.Comment object at 0x101a5c8f0>
    BEQ(ExScrnBd);
    cpy(StarFlagObject);
    // <conv.chunks.Comment object at 0x101a5cb00>
    BEQ(ExScrnBd);
    cpy(JumpspringObject);
    BEQ(ExScrnBd);
    JMP(TooFar);
}

int TooFar() {
    // <conv.chunks.Comment object at 0x101a5cd10>
    // <conv.chunks.Comment object at 0x101a5ce30>
    // <conv.chunks.Comment object at 0x101a5cf50>
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}

int ExScrnBd() {
    // <conv.chunks.Comment object at 0x101a5d100>
    return 0;
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda(Fireball_State, x);
    BEQ(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101a5d2b0>
    // <conv.chunks.Comment object at 0x101a5d250>
    // <conv.chunks.Comment object at 0x101a5d5e0>
    asl();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101a5d790>
    lda(FrameCounter);
    lsr();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x101a5d9d0>
    // <conv.chunks.Comment object at 0x101a5da60>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101a5dc40>
    asl();
    clc();
    adc(0x1c);
    tay();
    // <conv.chunks.Comment object at 0x101a5ddf0>
    // <conv.chunks.Comment object at 0x101a5df40>
    ldx(0x4);
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(0x1);
    // <conv.chunks.Comment object at 0x101a5e120>
    tya();
    pha();
    // <conv.chunks.Comment object at 0x101a5e2d0>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(NoFToECol);
    lda(Enemy_Flag, x);
    BEQ(NoFToECol);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101a5e480>
    // <conv.chunks.Comment object at 0x101a5e5a0>
    // <conv.chunks.Comment object at 0x101a5e6c0>
    // <conv.chunks.Comment object at 0x101a5e810>
    // <conv.chunks.Comment object at 0x101a5e930>
    cmp(0x24);
    BCC(GoombaDie);
    // <conv.chunks.Comment object at 0x101a5eae0>
    cmp(0x2b);
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // <conv.chunks.Comment object at 0x101a5ecf0>
    // <conv.chunks.Comment object at 0x101a5eea0>
    cmp(Goomba);
    BNE(NotGoomba);
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // <conv.chunks.Comment object at 0x101a5ef30>
    // <conv.chunks.Comment object at 0x101a5f140>
    // <conv.chunks.Comment object at 0x101a5f290>
    // <conv.chunks.Comment object at 0x101a5f320>
    // <conv.chunks.Comment object at 0x101a5f4d0>
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoFToECol);
    // <conv.chunks.Comment object at 0x101a5f650>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101a5f830>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    BCC(NoFToECol);
    // <conv.chunks.Comment object at 0x101a5f9e0>
    // <conv.chunks.Comment object at 0x101a5fb30>
    // <conv.chunks.Comment object at 0x101a5fbc0>
    // <conv.chunks.Comment object at 0x101a5fce0>
    // <conv.chunks.Comment object at 0x101a5fe00>
    lda(0b10000000);
    sta(Fireball_State, x);
    ldx(0x1);
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}

int NoFToECol() {
    // <conv.chunks.Comment object at 0x101a64050>
    // <conv.chunks.Comment object at 0x101a641d0>
    // <conv.chunks.Comment object at 0x101a64260>
    // <conv.chunks.Comment object at 0x101a643e0>
    pla();
    tay();
    ldx(0x1);
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101a648c0>
    return 0;
    JMP(HandleEnemyFBallCol);
}

int HandleEnemyFBallCol() {
    JSR(RelativeEnemyPosition);
    ldx(0x1);
    lda(Enemy_Flag, x);
    BPL(ChkBuzzyBeetle);
    anda(0b1111);
    tax();
    // <conv.chunks.Comment object at 0x101a64bc0>
    // <conv.chunks.Comment object at 0x101a65190>
    // <conv.chunks.Comment object at 0x101a65220>
    // <conv.chunks.Comment object at 0x101a653d0>
    // <conv.chunks.Comment object at 0x101a654f0>
    // <conv.chunks.Comment object at 0x101a65640>
    lda(Enemy_ID, x);
    cmp(Bowser);
    BEQ(HurtBowser);
    ldx(0x1);
    JMP(ChkBuzzyBeetle);
}

int ChkBuzzyBeetle() {
    lda(Enemy_ID, x);
    cmp(BuzzyBeetle);
    BEQ(ExHCF);
    cmp(Bowser);
    BNE(ChkOtherEnemies);
    JMP(HurtBowser);
}

int HurtBowser() {
    dec(BowserHitPoints);
    BNE(ExHCF);
    JSR(InitVStf);
    sta(Enemy_X_Speed, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x101a661e0>
    // <conv.chunks.Comment object at 0x101a66300>
    // <conv.chunks.Comment object at 0x101a66450>
    // <conv.chunks.Comment object at 0x101a66570>
    // <conv.chunks.Comment object at 0x101a666c0>
    lda(0xfe);
    sta(Enemy_Y_Speed, x);
    ldy(WorldNumber);
    lda(offsetof(G, BowserIdentities), y);
    sta(Enemy_ID, x);
    lda(0x20);
    cpy(0x3);
    BCS(SetDBSte);
    ora(0x3);
    JMP(SetDBSte);
}

int SetDBSte() {
    // <conv.chunks.Comment object at 0x101a66840>
    // <conv.chunks.Comment object at 0x101a66a20>
    // <conv.chunks.Comment object at 0x101a66b40>
    // <conv.chunks.Comment object at 0x101a66c90>
    // <conv.chunks.Comment object at 0x101a66de0>
    // <conv.chunks.Comment object at 0x101a66e70>
    // <conv.chunks.Comment object at 0x101a66f90>
    // <conv.chunks.Comment object at 0x101a67140>
    // <conv.chunks.Comment object at 0x101a671d0>
    sta(Enemy_State, x);
    lda(Sfx_BowserFall);
    sta(Square2SoundQueue);
    ldx(0x1);
    lda(0x9);
    BNE(EnemySmackScore);
    JMP(ChkOtherEnemies);
}

int ChkOtherEnemies() {
    cmp(BulletBill_FrenzyVar);
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x101a67a70>
    cmp(Podoboo);
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x101a67ce0>
    cmp(0x15);
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101a740e0>
    cmp(PiranhaPlant);
    BNE(StnE);
    // <conv.chunks.Comment object at 0x101a74320>
    lda(Enemy_Y_Position, x);
    adc(0x18);
    // <conv.chunks.Comment object at 0x101a74590>
    sta(Enemy_Y_Position, x);
    JMP(StnE);
}

int StnE() {
    // <conv.chunks.Comment object at 0x101a747d0>
    JSR(ChkToStunEnemies);
    lda(Enemy_State, x);
    anda(0b11111);
    ora(0b100000);
    // <conv.chunks.Comment object at 0x101a74a70>
    // <conv.chunks.Comment object at 0x101a74b90>
    sta(Enemy_State, x);
    lda(0x2);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101a74dd0>
    // <conv.chunks.Comment object at 0x101a74e60>
    cpy(HammerBro);
    BNE(GoombaPoints);
    lda(0x6);
    JMP(GoombaPoints);
}

int GoombaPoints() {
    cpy(Goomba);
    BNE(EnemySmackScore);
    lda(0x1);
    JMP(EnemySmackScore);
}

int EnemySmackScore() {
    JSR(SetupFloateyNumber);
    lda(Sfx_EnemySmack);
    // <conv.chunks.Comment object at 0x101a75760>
    // <conv.chunks.Comment object at 0x101a75880>
    sta(Square1SoundQueue);
    JMP(ExHCF);
}

int ExHCF() {
    // <conv.chunks.Comment object at 0x101a75a90>
    return 0;
    JMP(PlayerHammerCollision);
}

int PlayerHammerCollision() {
    lda(FrameCounter);
    lsr();
    BCC(ExPHC);
    lda(TimerControl);
    ora(Misc_OffscreenBits);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x101a75c10>
    // <conv.chunks.Comment object at 0x101a75d60>
    // <conv.chunks.Comment object at 0x101a75df0>
    // <conv.chunks.Comment object at 0x101a75f40>
    // <conv.chunks.Comment object at 0x101a76060>
    // <conv.chunks.Comment object at 0x101a76180>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101a76390>
    asl();
    clc();
    adc(0x24);
    tay();
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCC(ClHCol);
    lda(Misc_Collision_Flag, x);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x101a76540>
    // <conv.chunks.Comment object at 0x101a76690>
    // <conv.chunks.Comment object at 0x101a76720>
    // <conv.chunks.Comment object at 0x101a76840>
    // <conv.chunks.Comment object at 0x101a76960>
    // <conv.chunks.Comment object at 0x101a76ab0>
    // <conv.chunks.Comment object at 0x101a76c00>
    lda(0x1);
    sta(Misc_Collision_Flag, x);
    // <conv.chunks.Comment object at 0x101a76db0>
    lda(Misc_X_Speed, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x101a770b0>
    // <conv.chunks.Comment object at 0x101a77200>
    adc(0x1);
    sta(Misc_X_Speed, x);
    lda(StarInvincibleTimer);
    BNE(ExPHC);
    JMP(InjurePlayer);
    JMP(ClHCol);
}

int ClHCol() {
    // <conv.chunks.Comment object at 0x101a772f0>
    // <conv.chunks.Comment object at 0x101a774d0>
    // <conv.chunks.Comment object at 0x101a775f0>
    // <conv.chunks.Comment object at 0x101a77740>
    // <conv.chunks.Comment object at 0x101a77860>
    lda(0x0);
    sta(Misc_Collision_Flag, x);
    JMP(ExPHC);
}

int ExPHC() {
    return 0;
    JMP(HandlePowerUpCollision);
}

int HandlePowerUpCollision() {
    JSR(EraseEnemyObject);
    // <conv.chunks.Comment object at 0x101a77c50>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x101a77dd0>
    lda(Sfx_PowerUpGrab);
    sta(Square2SoundQueue);
    lda(PowerUpType);
    // <conv.chunks.Comment object at 0x101a7c0b0>
    // <conv.chunks.Comment object at 0x101a7c1d0>
    cmp(0x2);
    BCC(Shroom_Flower_PUp);
    // <conv.chunks.Comment object at 0x101a7c350>
    cmp(0x3);
    BEQ(SetFor1Up);
    lda(0x23);
    sta(StarInvincibleTimer);
    lda(StarPowerMusic);
    // <conv.chunks.Comment object at 0x101a7c560>
    // <conv.chunks.Comment object at 0x101a7c710>
    // <conv.chunks.Comment object at 0x101a7c7a0>
    // <conv.chunks.Comment object at 0x101a7c950>
    sta(AreaMusicQueue);
    return 0;
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x101a7cc20>
    BEQ(UpToSuper);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x101a7ce30>
    BNE(NoPUp);
    ldx(ObjectOffset);
    lda(0x2);
    // <conv.chunks.Comment object at 0x101a7d070>
    // <conv.chunks.Comment object at 0x101a7d190>
    sta(PlayerStatus);
    JSR(GetPlayerColors);
    ldx(ObjectOffset);
    lda(0xc);
    JMP(UpToFiery);
    JMP(SetFor1Up);
}

int SetFor1Up() {
    lda(0xb);
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x101a7d850>
    // <conv.chunks.Comment object at 0x101a7d8e0>
    return 0;
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x101a7db80>
    sta(PlayerStatus);
    lda(0x9);
    JMP(UpToFiery);
}

int UpToFiery() {
    ldy(0x0);
    JSR(SetPRout);
    JMP(NoPUp);
}

int NoPUp() {
    return 0;
    JMP(PlayerEnemyCollision);
}

int PlayerEnemyCollision() {
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x101a7e450>
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x101a7e810>
    // <conv.chunks.Comment object at 0x101a7e960>
    // <conv.chunks.Comment object at 0x101a7ea80>
    // <conv.chunks.Comment object at 0x101a7ebd0>
    // <conv.chunks.Comment object at 0x101a7ed20>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x101a7ef60>
    // <conv.chunks.Comment object at 0x101a7eff0>
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x101a7f2f0>
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCS(CheckForPUpCollision);
    // <conv.chunks.Comment object at 0x101a7f530>
    // <conv.chunks.Comment object at 0x101a7f650>
    // <conv.chunks.Comment object at 0x101a7f770>
    // <conv.chunks.Comment object at 0x101a7f890>
    lda(Enemy_CollisionBits, x);
    anda(0b11111110);
    sta(Enemy_CollisionBits, x);
    JMP(NoPECol);
}

int NoPECol() {
    return 0;
    JMP(CheckForPUpCollision);
}

int CheckForPUpCollision() {
    ldy(Enemy_ID, x);
    cpy(PowerUpObject);
    BNE(EColl);
    JMP(HandlePowerUpCollision);
    JMP(EColl);
}

int EColl() {
    // <conv.chunks.Comment object at 0x101a7ff80>
    // <conv.chunks.Comment object at 0x101a880e0>
    // <conv.chunks.Comment object at 0x101a88230>
    // <conv.chunks.Comment object at 0x101a88350>
    lda(StarInvincibleTimer);
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda(Enemy_CollisionBits, x);
    anda(0b1);
    // <conv.chunks.Comment object at 0x101a887a0>
    // <conv.chunks.Comment object at 0x101a88a70>
    ora(EnemyOffscrBitsMasked, x);
    BNE(ExPEC);
    // <conv.chunks.Comment object at 0x101a88cb0>
    lda(0x1);
    ora(Enemy_CollisionBits, x);
    // <conv.chunks.Comment object at 0x101a88e60>
    sta(Enemy_CollisionBits, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x101a89160>
    BEQ(ChkForPlayerInjury);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x101a893a0>
    BEQ(InjurePlayer);
    cpy(Podoboo);
    // <conv.chunks.Comment object at 0x101a895b0>
    BEQ(InjurePlayer);
    cpy(BulletBill_CannonVar);
    // <conv.chunks.Comment object at 0x101a897f0>
    BEQ(ChkForPlayerInjury);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x101a89a00>
    BCS(InjurePlayer);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x101a89c10>
    BEQ(InjurePlayer);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101a89e20>
    asl();
    BCS(ChkForPlayerInjury);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101a8a0f0>
    anda(0b111);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101a8a330>
    BCC(ChkForPlayerInjury);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101a8a540>
    cmp(Goomba);
    BEQ(ExPEC);
    lda(Sfx_EnemySmack);
    // <conv.chunks.Comment object at 0x101a8a8d0>
    sta(Square1SoundQueue);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101a8aae0>
    ora(0b10000000);
    sta(Enemy_State, x);
    JSR(EnemyFacePlayer);
    lda(offsetof(G, KickedShellXSpdData), y);
    // <conv.chunks.Comment object at 0x101a8ae40>
    // <conv.chunks.Comment object at 0x101a8af60>
    sta(Enemy_X_Speed, x);
    lda(0x3);
    clc();
    // <conv.chunks.Comment object at 0x101a8b1d0>
    // <conv.chunks.Comment object at 0x101a8b320>
    adc(StompChainCounter);
    ldy(EnemyIntervalTimer, x);
    cpy(0x3);
    BCS(KSPts);
    lda(offsetof(G, KickedShellPtsData), y);
    JMP(KSPts);
}

int KSPts() {
    // <conv.chunks.Comment object at 0x101a8b4a0>
    // <conv.chunks.Comment object at 0x101a8b5f0>
    // <conv.chunks.Comment object at 0x101a8b680>
    // <conv.chunks.Comment object at 0x101a8b860>
    // <conv.chunks.Comment object at 0x101a8b9b0>
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}

int ExPEC() {
    // <conv.chunks.Comment object at 0x101a8bb30>
    return 0;
    JMP(ChkForPlayerInjury);
}

int ChkForPlayerInjury() {
    lda(Player_Y_Speed);
    BMI(ChkInj);
    BNE(EnemyStomped);
    JMP(ChkInj);
}

int ChkInj() {
    // <conv.chunks.Comment object at 0x101a8bc80>
    // <conv.chunks.Comment object at 0x101a8bda0>
    // <conv.chunks.Comment object at 0x101a8bef0>
    // <conv.chunks.Comment object at 0x101a94050>
    lda(Enemy_ID, x);
    cmp(Bloober);
    BCC(ChkETmrs);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x101a94410>
    clc();
    adc(0xc);
    cmp(Enemy_Y_Position, x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // <conv.chunks.Comment object at 0x101a94620>
    // <conv.chunks.Comment object at 0x101a94800>
    // <conv.chunks.Comment object at 0x101a94920>
    lda(StompTimer);
    BNE(EnemyStomped);
    lda(InjuryTimer);
    BNE(ExInjColRoutines);
    // <conv.chunks.Comment object at 0x101a94a70>
    // <conv.chunks.Comment object at 0x101a94b90>
    // <conv.chunks.Comment object at 0x101a94cb0>
    lda(Player_Rel_XPos);
    cmp(Enemy_Rel_XPos);
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // <conv.chunks.Comment object at 0x101a94ec0>
    // <conv.chunks.Comment object at 0x101a94fe0>
    // <conv.chunks.Comment object at 0x101a95130>
    // <conv.chunks.Comment object at 0x101a95250>
    lda(Enemy_MovingDir, x);
    cmp(0x1);
    BNE(InjurePlayer);
    // <conv.chunks.Comment object at 0x101a95400>
    // <conv.chunks.Comment object at 0x101a95490>
    JMP(LInj);
    JMP(InjurePlayer);
}

int InjurePlayer() {
    lda(InjuryTimer);
    BNE(ExInjColRoutines);
    JMP(ForceInjury);
}

int ForceInjury() {
    ldx(PlayerStatus);
    BEQ(KillPlayer);
    sta(PlayerStatus);
    // <conv.chunks.Comment object at 0x101a95a00>
    // <conv.chunks.Comment object at 0x101a95b20>
    // <conv.chunks.Comment object at 0x101a95c40>
    lda(0x8);
    sta(InjuryTimer);
    // <conv.chunks.Comment object at 0x101a95dc0>
    asl();
    sta(Square1SoundQueue);
    JSR(GetPlayerColors);
    lda(0xa);
    JMP(SetKRout);
}

int SetKRout() {
    // <conv.chunks.Comment object at 0x101a96000>
    // <conv.chunks.Comment object at 0x101a96120>
    // <conv.chunks.Comment object at 0x101a96240>
    // <conv.chunks.Comment object at 0x101a962d0>
    ldy(0x1);
    JMP(SetPRout);
}

int SetPRout() {
    // <conv.chunks.Comment object at 0x101a96420>
    sta(GameEngineSubroutine);
    sty(Player_State);
    // <conv.chunks.Comment object at 0x101a96600>
    ldy(0xff);
    sty(TimerControl);
    // <conv.chunks.Comment object at 0x101a96780>
    iny();
    sty(ScrollAmount);
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101a96b10>
    return 0;
    JMP(KillPlayer);
}

int KillPlayer() {
    stx(Player_X_Speed);
    // <conv.chunks.Comment object at 0x101a96cf0>
    inx();
    stx(EventMusicQueue);
    // <conv.chunks.Comment object at 0x101a96ea0>
    lda(0xfc);
    sta(Player_Y_Speed);
    lda(0xb);
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda(Enemy_ID, x);
    cmp(Spiny);
    // <conv.chunks.Comment object at 0x101a974a0>
    // <conv.chunks.Comment object at 0x101a97800>
    BEQ(InjurePlayer);
    lda(Sfx_EnemyStomp);
    // <conv.chunks.Comment object at 0x101a97a40>
    sta(Square1SoundQueue);
    lda(Enemy_ID, x);
    ldy(0x0);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x101a97d70>
    // <conv.chunks.Comment object at 0x101a97e00>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_FrenzyVar);
    // <conv.chunks.Comment object at 0x101aa00e0>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_CannonVar);
    BEQ(EnemyStompedPts);
    cmp(Podoboo);
    BEQ(EnemyStompedPts);
    iny();
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x101aa04d0>
    // <conv.chunks.Comment object at 0x101aa0620>
    // <conv.chunks.Comment object at 0x101aa0770>
    // <conv.chunks.Comment object at 0x101aa0800>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x101aa0a40>
    // <conv.chunks.Comment object at 0x101aa0ad0>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x101aa0d40>
    // <conv.chunks.Comment object at 0x101aa0dd0>
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda(offsetof(G, StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x101aa1040>
    // <conv.chunks.Comment object at 0x101aa1190>
    lda(Enemy_MovingDir, x);
    pha();
    JSR(SetStun);
    // <conv.chunks.Comment object at 0x101aa1400>
    // <conv.chunks.Comment object at 0x101aa1490>
    pla();
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x101aa1670>
    lda(0b100000);
    sta(Enemy_State, x);
    JSR(InitVStf);
    sta(Enemy_X_Speed, x);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x101aa18b0>
    // <conv.chunks.Comment object at 0x101aa1a00>
    // <conv.chunks.Comment object at 0x101aa1b20>
    // <conv.chunks.Comment object at 0x101aa1c70>
    sta(Player_Y_Speed);
    return 0;
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x101aa1f40>
    BCC(HandleStompedShellE);
    anda(0b1);
    // <conv.chunks.Comment object at 0x101aa2150>
    sta(Enemy_ID, x);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101aa2390>
    sty(Enemy_State, x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x101aa25d0>
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // <conv.chunks.Comment object at 0x101aa27e0>
    // <conv.chunks.Comment object at 0x101aa2900>
    lda(offsetof(G, DemotedKoopaXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x101aa2e70>
    sta(Enemy_State, x);
    inc(StompChainCounter);
    lda(StompChainCounter);
    clc();
    // <conv.chunks.Comment object at 0x101aa31a0>
    // <conv.chunks.Comment object at 0x101aa32c0>
    // <conv.chunks.Comment object at 0x101aa3410>
    adc(StompTimer);
    JSR(SetupFloateyNumber);
    inc(StompTimer);
    ldy(PrimaryHardMode);
    lda(offsetof(G, RevivalRateData), y);
    sta(EnemyIntervalTimer, x);
    JMP(SBnce);
}

int SBnce() {
    // <conv.chunks.Comment object at 0x101aa3590>
    // <conv.chunks.Comment object at 0x101aa36b0>
    // <conv.chunks.Comment object at 0x101aa37d0>
    // <conv.chunks.Comment object at 0x101aa38f0>
    // <conv.chunks.Comment object at 0x101aa3a40>
    // <conv.chunks.Comment object at 0x101aa3b90>
    lda(0xfc);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x101aa3c80>
    return 0;
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x101aa3ef0>
    cmp(0x1);
    BNE(LInj);
    JMP(InjurePlayer);
    JMP(LInj);
}

int LInj() {
    // <conv.chunks.Comment object at 0x101aac0e0>
    // <conv.chunks.Comment object at 0x101aac2c0>
    // <conv.chunks.Comment object at 0x101aac3e0>
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
    // <conv.chunks.Comment object at 0x101aac6b0>
    // <conv.chunks.Comment object at 0x101aac740>
    // <conv.chunks.Comment object at 0x101aac8f0>
    // <conv.chunks.Comment object at 0x101aaca70>
    // <conv.chunks.Comment object at 0x101aacb00>
    sty(Enemy_MovingDir, x);
    dey();
    // <conv.chunks.Comment object at 0x101aacce0>
    return 0;
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x101aace30>
    lda(0x30);
    sta(FloateyNum_Timer, x);
    // <conv.chunks.Comment object at 0x101aacfe0>
    lda(Enemy_Y_Position, x);
    sta(FloateyNum_Y_Pos, x);
    // <conv.chunks.Comment object at 0x101aad2e0>
    lda(Enemy_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    JMP(ExSFN);
}

int ExSFN() {
    return 0;
    JMP(EnemiesCollision);
}

int EnemiesCollision() {
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x101aadc40>
    lsr();
    BCC(ExSFN);
    // <conv.chunks.Comment object at 0x101aae1e0>
    lda(AreaType);
    BEQ(ExSFN);
    // <conv.chunks.Comment object at 0x101aae420>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x101aae690>
    BCS(ExitECRoutine);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x101aae8a0>
    BEQ(ExitECRoutine);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x101aaeae0>
    BEQ(ExitECRoutine);
    lda(EnemyOffscrBitsMasked, x);
    // <conv.chunks.Comment object at 0x101aaecf0>
    BNE(ExitECRoutine);
    JSR(GetEnemyBoundBoxOfs);
    dex();
    BMI(ExitECRoutine);
    JMP(ECLoop);
}

int ECLoop() {
    // <conv.chunks.Comment object at 0x101aaef30>
    // <conv.chunks.Comment object at 0x101aaf080>
    // <conv.chunks.Comment object at 0x101aaf110>
    // <conv.chunks.Comment object at 0x101aaf230>
    stx(0x1);
    tya();
    // <conv.chunks.Comment object at 0x101aaf290>
    pha();
    lda(Enemy_Flag, x);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x101aaf500>
    // <conv.chunks.Comment object at 0x101aaf650>
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x101aaf890>
    // <conv.chunks.Comment object at 0x101aaf920>
    cmp(Lakitu);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x101aafb00>
    cmp(PiranhaPlant);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x101aafe00>
    lda(EnemyOffscrBitsMasked, x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // <conv.chunks.Comment object at 0x101ab8080>
    // <conv.chunks.Comment object at 0x101ab81d0>
    // <conv.chunks.Comment object at 0x101ab8290>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    ldy(0x1);
    BCC(NoEnemyCollision);
    // <conv.chunks.Comment object at 0x101ab8560>
    // <conv.chunks.Comment object at 0x101ab85f0>
    // <conv.chunks.Comment object at 0x101ab8710>
    // <conv.chunks.Comment object at 0x101ab8860>
    // <conv.chunks.Comment object at 0x101ab88f0>
    lda(Enemy_State, x);
    ora(Enemy_State, y);
    // <conv.chunks.Comment object at 0x101ab8b90>
    anda(0b10000000);
    BNE(YesEC);
    lda(Enemy_CollisionBits, y);
    anda(offsetof(G, SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x101ab8dd0>
    // <conv.chunks.Comment object at 0x101ab8f20>
    // <conv.chunks.Comment object at 0x101ab9070>
    // <conv.chunks.Comment object at 0x101ab91c0>
    lda(Enemy_CollisionBits, y);
    ora(offsetof(G, SetBitsMask), x);
    // <conv.chunks.Comment object at 0x101ab9400>
    sta(Enemy_CollisionBits, y);
    JMP(YesEC);
}

int YesEC() {
    // <conv.chunks.Comment object at 0x101ab9670>
    JSR(ProcEnemyCollisions);
    JMP(ReadyNextEnemy);
    JMP(NoEnemyCollision);
}

int NoEnemyCollision() {
    lda(Enemy_CollisionBits, y);
    anda(offsetof(G, ClearBitsMask), x);
    sta(Enemy_CollisionBits, y);
    JMP(ReadyNextEnemy);
}

int ReadyNextEnemy() {
    pla();
    tay();
    ldx(0x1);
    // <conv.chunks.Comment object at 0x101ab9d90>
    // <conv.chunks.Comment object at 0x101ab9e50>
    // <conv.chunks.Comment object at 0x101ab9f10>
    dex();
    BPL(ECLoop);
    JMP(ExitECRoutine);
}

int ExitECRoutine() {
    ldx(ObjectOffset);
    return 0;
    JMP(ProcEnemyCollisions);
}

int ProcEnemyCollisions() {
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x101aba450>
    ora(Enemy_State, x);
    anda(0b100000);
    BNE(ExitProcessEColl);
    // <conv.chunks.Comment object at 0x101aba6c0>
    // <conv.chunks.Comment object at 0x101aba7e0>
    lda(Enemy_State, x);
    cmp(0x6);
    // <conv.chunks.Comment object at 0x101abaa20>
    BCC(ProcSecondEnemyColl);
    lda(Enemy_ID, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x101abac30>
    // <conv.chunks.Comment object at 0x101abad80>
    BEQ(ExitProcessEColl);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x101abaf90>
    asl();
    BCC(ShellCollisions);
    // <conv.chunks.Comment object at 0x101abb170>
    lda(0x6);
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(0x1);
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // <conv.chunks.Comment object at 0x101abb740>
    tax();
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x101abb860>
    ldx(ObjectOffset);
    lda(ShellChainCounter, x);
    // <conv.chunks.Comment object at 0x101abba70>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x101abbc50>
    ldx(0x1);
    JSR(SetupFloateyNumber);
    ldx(ObjectOffset);
    inc(ShellChainCounter, x);
    JMP(ExitProcessEColl);
}

int ExitProcessEColl() {
    return 0;
    JMP(ProcSecondEnemyColl);
}

int ProcSecondEnemyColl() {
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x101ac0350>
    cmp(0x6);
    BCC(MoveEOfs);
    lda(Enemy_ID, y);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x101ac0680>
    // <conv.chunks.Comment object at 0x101ac07d0>
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x101ac09e0>
    ldy(0x1);
    lda(ShellChainCounter, y);
    // <conv.chunks.Comment object at 0x101ac0b00>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x101ac0dd0>
    ldx(ObjectOffset);
    JSR(SetupFloateyNumber);
    ldx(0x1);
    inc(ShellChainCounter, x);
    return 0;
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // <conv.chunks.Comment object at 0x101ac1490>
    tax();
    JSR(EnemyTurnAround);
    ldx(ObjectOffset);
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101ac1820>
    cmp(PiranhaPlant);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x101ac1a60>
    cmp(Lakitu);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x101ac1be0>
    cmp(HammerBro);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x101ac1f10>
    cmp(Spiny);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x101ac20c0>
    cmp(GreenParatroopaJump);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x101ac23c0>
    cmp(0x7);
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // <conv.chunks.Comment object at 0x101ac2570>
    // <conv.chunks.Comment object at 0x101ac2750>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x101ac2900>
    tay();
    iny();
    sty(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x101ac2b40>
    lda(Enemy_MovingDir, x);
    eor(0b11);
    sta(Enemy_MovingDir, x);
    JMP(ExTA);
}

int ExTA() {
    // <conv.chunks.Comment object at 0x101ac2db0>
    // <conv.chunks.Comment object at 0x101ac2ed0>
    // <conv.chunks.Comment object at 0x101ac3020>
    return 0;
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(0xff);
    // <conv.chunks.Comment object at 0x101ac3170>
    // <conv.chunks.Comment object at 0x101ac31d0>
    sta(PlatformCollisionFlag, x);
    lda(TimerControl);
    BNE(ExLPC);
    lda(Enemy_State, x);
    BMI(ExLPC);
    // <conv.chunks.Comment object at 0x101ac3410>
    // <conv.chunks.Comment object at 0x101ac3530>
    // <conv.chunks.Comment object at 0x101ac3680>
    // <conv.chunks.Comment object at 0x101ac37d0>
    lda(Enemy_ID, x);
    cmp(0x24);
    BNE(ChkForPlayerC_LargeP);
    // <conv.chunks.Comment object at 0x101ac3a40>
    // <conv.chunks.Comment object at 0x101ac3ad0>
    lda(Enemy_State, x);
    tax();
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    JSR(CheckPlayerVertical);
    BCS(ExLPC);
    // <conv.chunks.Comment object at 0x101ac3fb0>
    // <conv.chunks.Comment object at 0x101ad0110>
    txa();
    JSR(GetEnemyBoundBoxOfsArg);
    lda(Enemy_Y_Position, x);
    sta(0x0);
    txa();
    // <conv.chunks.Comment object at 0x101ad02f0>
    // <conv.chunks.Comment object at 0x101ad0410>
    // <conv.chunks.Comment object at 0x101ad0590>
    // <conv.chunks.Comment object at 0x101ad0560>
    pha();
    JSR(PlayerCollisionCore);
    pla();
    // <conv.chunks.Comment object at 0x101ad07d0>
    // <conv.chunks.Comment object at 0x101ad0920>
    tax();
    BCC(ExLPC);
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}

int ExLPC() {
    // <conv.chunks.Comment object at 0x101ad0a40>
    // <conv.chunks.Comment object at 0x101ad0b90>
    // <conv.chunks.Comment object at 0x101ad0cb0>
    ldx(ObjectOffset);
    return 0;
    JMP(SmallPlatformCollision);
}

int SmallPlatformCollision() {
    lda(TimerControl);
    BNE(ExSPC);
    sta(PlatformCollisionFlag, x);
    JSR(CheckPlayerVertical);
    BCS(ExSPC);
    // <conv.chunks.Comment object at 0x101ad0ef0>
    // <conv.chunks.Comment object at 0x101ad0f50>
    // <conv.chunks.Comment object at 0x101ad1070>
    // <conv.chunks.Comment object at 0x101ad11c0>
    // <conv.chunks.Comment object at 0x101ad1310>
    // <conv.chunks.Comment object at 0x101ad1430>
    lda(0x2);
    sta(0x0);
    JMP(ChkSmallPlatLoop);
}

int ChkSmallPlatLoop() {
    ldx(ObjectOffset);
    JSR(GetEnemyBoundBoxOfs);
    anda(0b10);
    BNE(ExSPC);
    lda(BoundingBox_UL_YPos, y);
    cmp(0x20);
    BCC(MoveBoundBox);
    JSR(PlayerCollisionCore);
    BCS(ProcSPlatCollisions);
    JMP(MoveBoundBox);
}

int MoveBoundBox() {
    lda(BoundingBox_UL_YPos, y);
    clc();
    // <conv.chunks.Comment object at 0x101ad2270>
    // <conv.chunks.Comment object at 0x101ad23f0>
    adc(0x80);
    sta(BoundingBox_UL_YPos, y);
    lda(BoundingBox_DR_YPos, y);
    clc();
    adc(0x80);
    sta(BoundingBox_DR_YPos, y);
    dec(0x0);
    BNE(ChkSmallPlatLoop);
    JMP(ExSPC);
}

int ExSPC() {
    // <conv.chunks.Comment object at 0x101ad2a80>
    // <conv.chunks.Comment object at 0x101ad2b10>
    // <conv.chunks.Comment object at 0x101ad2c90>
    ldx(ObjectOffset);
    return 0;
    JMP(ProcSPlatCollisions);
}

int ProcSPlatCollisions() {
    ldx(ObjectOffset);
    JMP(ProcLPlatCollisions);
}

int ProcLPlatCollisions() {
    lda(BoundingBox_DR_YPos, y);
    sec();
    sbc(BoundingBox_UL_YPos);
    cmp(0x4);
    BCS(ChkForTopCollision);
    lda(Player_Y_Speed);
    BPL(ChkForTopCollision);
    lda(0x1);
    sta(Player_Y_Speed);
    JMP(ChkForTopCollision);
}

int ChkForTopCollision() {
    lda(BoundingBox_DR_YPos);
    sec();
    sbc(BoundingBox_UL_YPos, y);
    // <conv.chunks.Comment object at 0x101ad3a70>
    // <conv.chunks.Comment object at 0x101ad3bc0>
    // <conv.chunks.Comment object at 0x101ad3c50>
    cmp(0x6);
    BCS(PlatformSideCollisions);
    // <conv.chunks.Comment object at 0x101ad3e00>
    lda(Player_Y_Speed);
    BMI(PlatformSideCollisions);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101ad80e0>
    // <conv.chunks.Comment object at 0x101ad8230>
    ldy(Enemy_ID, x);
    cpy(0x2b);
    BEQ(SetCollisionFlag);
    cpy(0x2c);
    // <conv.chunks.Comment object at 0x101ad8440>
    // <conv.chunks.Comment object at 0x101ad84d0>
    // <conv.chunks.Comment object at 0x101ad8680>
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx(ObjectOffset);
    sta(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x101ad8980>
    // <conv.chunks.Comment object at 0x101ad8aa0>
    lda(0x0);
    sta(Player_State);
    // <conv.chunks.Comment object at 0x101ad8c50>
    return 0;
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(0x1);
    sta(0x0);
    lda(BoundingBox_DR_XPos);
    sec();
    // <conv.chunks.Comment object at 0x101ad8ec0>
    // <conv.chunks.Comment object at 0x101ad9010>
    // <conv.chunks.Comment object at 0x101ad90a0>
    // <conv.chunks.Comment object at 0x101ad9250>
    sbc(BoundingBox_UL_XPos, y);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x101ad9400>
    BCC(SideC);
    inc(0x0);
    lda(BoundingBox_DR_XPos, y);
    clc();
    // <conv.chunks.Comment object at 0x101ad9670>
    // <conv.chunks.Comment object at 0x101ad9700>
    // <conv.chunks.Comment object at 0x101ad98e0>
    sbc(BoundingBox_UL_XPos);
    cmp(0x9);
    BCS(NoSideC);
    JMP(SideC);
}

int SideC() {
    // <conv.chunks.Comment object at 0x101ad9a60>
    // <conv.chunks.Comment object at 0x101ad9af0>
    // <conv.chunks.Comment object at 0x101ad9cd0>
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}

int NoSideC() {
    // <conv.chunks.Comment object at 0x101ad9e50>
    ldx(ObjectOffset);
    return 0;
    JMP(PositionPlayerOnS_Plat);
}

int PositionPlayerOnS_Plat() {
    tay();
    lda(Enemy_Y_Position, x);
    clc();
    adc(((offsetof(G, PlayerPosSPlatData)) - (1)), y);
    JMP(PositionPlayerOnVPlat);
}

int PositionPlayerOnVPlat() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101ada780>
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ExPlPos);
    // <conv.chunks.Comment object at 0x101adaa20>
    // <conv.chunks.Comment object at 0x101adaab0>
    ldy(Enemy_Y_HighPos, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x101adadb0>
    BNE(ExPlPos);
    sec();
    sbc(0x20);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x101adb020>
    // <conv.chunks.Comment object at 0x101adb0b0>
    // <conv.chunks.Comment object at 0x101adb140>
    tya();
    sbc(0x0);
    sta(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x101adb380>
    // <conv.chunks.Comment object at 0x101adb410>
    lda(0x0);
    sta(Player_Y_Speed);
    sta(Player_Y_MoveForce);
    JMP(ExPlPos);
}

int ExPlPos() {
    return 0;
    JMP(CheckPlayerVertical);
}

int CheckPlayerVertical() {
    lda(Player_OffscreenBits);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x101adba40>
    // <conv.chunks.Comment object at 0x101adbb60>
    BCS(ExCPV);
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x101adbda0>
    // <conv.chunks.Comment object at 0x101adbef0>
    BNE(ExCPV);
    lda(Player_Y_Position);
    cmp(0xd0);
    JMP(ExCPV);
}

int ExCPV() {
    return 0;
    JMP(GetEnemyBoundBoxOfs);
}

int GetEnemyBoundBoxOfs() {
    lda(ObjectOffset);
    JMP(GetEnemyBoundBoxOfsArg);
}

int GetEnemyBoundBoxOfsArg() {
    asl();
    asl();
    // <conv.chunks.Comment object at 0x101ae05f0>
    // <conv.chunks.Comment object at 0x101ae06b0>
    clc();
    adc(0x4);
    tay();
    lda(Enemy_OffscreenBits);
    anda(0b1111);
    cmp(0b1111);
    // <conv.chunks.Comment object at 0x101ae08f0>
    // <conv.chunks.Comment object at 0x101ae0980>
    // <conv.chunks.Comment object at 0x101ae0aa0>
    // <conv.chunks.Comment object at 0x101ae0bc0>
    return 0;
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda(DisableCollisionDet);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x101ae0ec0>
    // <conv.chunks.Comment object at 0x101ae10d0>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(ExPBGCol);
    // <conv.chunks.Comment object at 0x101ae12e0>
    // <conv.chunks.Comment object at 0x101ae1370>
    cmp(0x4);
    BCC(ExPBGCol);
    lda(0x1);
    ldy(SwimmingFlag);
    BNE(SetPSte);
    lda(Player_State);
    BEQ(SetFallS);
    // <conv.chunks.Comment object at 0x101ae1580>
    // <conv.chunks.Comment object at 0x101ae1730>
    // <conv.chunks.Comment object at 0x101ae17c0>
    // <conv.chunks.Comment object at 0x101ae1970>
    // <conv.chunks.Comment object at 0x101ae1ac0>
    // <conv.chunks.Comment object at 0x101ae1be0>
    cmp(0x3);
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // <conv.chunks.Comment object at 0x101ae1d60>
    // <conv.chunks.Comment object at 0x101ae1f10>
    lda(0x2);
    JMP(SetPSte);
}

int SetPSte() {
    // <conv.chunks.Comment object at 0x101ae1fd0>
    sta(Player_State);
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda(Player_Y_HighPos);
    cmp(0x1);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x101ae2300>
    // <conv.chunks.Comment object at 0x101ae2390>
    lda(0xff);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x101ae25a0>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // <conv.chunks.Comment object at 0x101ae2840>
    // <conv.chunks.Comment object at 0x101ae28d0>
    // <conv.chunks.Comment object at 0x101ae2a80>
    return 0;
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(0x2);
    // <conv.chunks.Comment object at 0x101ae2ba0>
    lda(CrouchingFlag);
    BNE(GBBAdr);
    // <conv.chunks.Comment object at 0x101ae2db0>
    lda(PlayerSize);
    BNE(GBBAdr);
    dey();
    // <conv.chunks.Comment object at 0x101ae2ff0>
    // <conv.chunks.Comment object at 0x101ae3170>
    lda(SwimmingFlag);
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // <conv.chunks.Comment object at 0x101ae32f0>
    // <conv.chunks.Comment object at 0x101ae3470>
    // <conv.chunks.Comment object at 0x101ae3500>
    lda(offsetof(G, BlockBufferAdderData), y);
    sta(0xeb);
    tay();
    ldx(PlayerSize);
    // <conv.chunks.Comment object at 0x101ae36e0>
    // <conv.chunks.Comment object at 0x101ae36b0>
    // <conv.chunks.Comment object at 0x101ae3890>
    lda(CrouchingFlag);
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // <conv.chunks.Comment object at 0x101ae3aa0>
    // <conv.chunks.Comment object at 0x101ae3c20>
    // <conv.chunks.Comment object at 0x101ae3cb0>
    lda(Player_Y_Position);
    cmp(offsetof(G, PlayerBGUpperExtent), x);
    BCC(DoFootCheck);
    JSR(BlockBufferColli_Head);
    BEQ(DoFootCheck);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    ldy(Player_Y_Speed);
    BPL(DoFootCheck);
    ldy(0x4);
    cpy(0x4);
    BCC(DoFootCheck);
    JSR(CheckForSolidMTiles);
    BCS(SolidOrClimb);
    ldy(AreaType);
    BEQ(NYSpd);
    ldy(BlockBounceTimer);
    BNE(NYSpd);
    JSR(PlayerHeadCollision);
    JMP(DoFootCheck);
    JMP(SolidOrClimb);
}

int SolidOrClimb() {
    cmp(0x26);
    BEQ(NYSpd);
    // <conv.chunks.Comment object at 0x101ae9490>
    // <conv.chunks.Comment object at 0x101ae9520>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NYSpd);
}

int NYSpd() {
    // <conv.chunks.Comment object at 0x101ae97f0>
    // <conv.chunks.Comment object at 0x101ae9910>
    lda(0x1);
    sta(Player_Y_Speed);
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x101ae9c10>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101ae9df0>
    // <conv.chunks.Comment object at 0x101ae9e80>
    // <conv.chunks.Comment object at 0x101aea030>
    // <conv.chunks.Comment object at 0x101aea150>
    // <conv.chunks.Comment object at 0x101aea270>
    // <conv.chunks.Comment object at 0x101aea3c0>
    // <conv.chunks.Comment object at 0x101aea450>
    // <conv.chunks.Comment object at 0x101aea5a0>
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
    ldy(Player_Y_Speed);
    BMI(DoPlayerSideCheck);
    // <conv.chunks.Comment object at 0x101aeaf60>
    // <conv.chunks.Comment object at 0x101aeb080>
    // <conv.chunks.Comment object at 0x101aeb1a0>
    // <conv.chunks.Comment object at 0x101aeb2c0>
    cmp(0xc5);
    BNE(ContChk);
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}

int ContChk() {
    // <conv.chunks.Comment object at 0x101aeb440>
    // <conv.chunks.Comment object at 0x101aeb620>
    // <conv.chunks.Comment object at 0x101aeb740>
    JSR(ChkInvisibleMTiles);
    BEQ(DoPlayerSideCheck);
    ldy(JumpspringAnimCtrl);
    BNE(InitSteP);
    ldy(0x4);
    cpy(0x5);
    BCC(LandPlyr);
    // <conv.chunks.Comment object at 0x101aeb8c0>
    // <conv.chunks.Comment object at 0x101aeb9e0>
    // <conv.chunks.Comment object at 0x101aebb00>
    // <conv.chunks.Comment object at 0x101aebc50>
    // <conv.chunks.Comment object at 0x101aebce0>
    // <conv.chunks.Comment object at 0x101aebdd0>
    lda(Player_MovingDir);
    sta(0x0);
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // <conv.chunks.Comment object at 0x101af40e0>
    // <conv.chunks.Comment object at 0x101af4170>
    // <conv.chunks.Comment object at 0x101af42f0>
    JSR(ChkForLandJumpSpring);
    lda(0xf0);
    anda(Player_Y_Position);
    sta(Player_Y_Position);
    JSR(HandlePipeEntry);
    // <conv.chunks.Comment object at 0x101af44a0>
    // <conv.chunks.Comment object at 0x101af4650>
    // <conv.chunks.Comment object at 0x101af4770>
    lda(0x0);
    sta(Player_Y_Speed);
    sta(Player_Y_MoveForce);
    sta(StompChainCounter);
    JMP(InitSteP);
}

int InitSteP() {
    lda(0x0);
    sta(Player_State);
    JMP(DoPlayerSideCheck);
}

int DoPlayerSideCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x101af4f80>
    iny();
    iny();
    lda(0x2);
    // <conv.chunks.Comment object at 0x101af5130>
    // <conv.chunks.Comment object at 0x101af51c0>
    sta(0x0);
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(0xeb);
    // <conv.chunks.Comment object at 0x101af5430>
    // <conv.chunks.Comment object at 0x101af54f0>
    lda(Player_Y_Position);
    cmp(0x20);
    BCC(BHalf);
    // <conv.chunks.Comment object at 0x101af56d0>
    // <conv.chunks.Comment object at 0x101af5760>
    cmp(0xe4);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(0x1c);
    BEQ(BHalf);
    // <conv.chunks.Comment object at 0x101af59a0>
    // <conv.chunks.Comment object at 0x101af5b80>
    // <conv.chunks.Comment object at 0x101af5ca0>
    // <conv.chunks.Comment object at 0x101af5df0>
    // <conv.chunks.Comment object at 0x101af5e80>
    cmp(0x6b);
    BEQ(BHalf);
    JSR(CheckForClimbMTiles);
    BCC(CheckSideMTiles);
    JMP(BHalf);
}

int BHalf() {
    // <conv.chunks.Comment object at 0x101af60c0>
    // <conv.chunks.Comment object at 0x101af62a0>
    // <conv.chunks.Comment object at 0x101af63c0>
    // <conv.chunks.Comment object at 0x101af64e0>
    ldy(0xeb);
    iny();
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x101af6540>
    // <conv.chunks.Comment object at 0x101af6720>
    cmp(0x8);
    BCC(ExSCH);
    // <conv.chunks.Comment object at 0x101af68a0>
    cmp(0xd0);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(0x0);
    BNE(SideCheckLoop);
    JMP(ExSCH);
}

int ExSCH() {
    // <conv.chunks.Comment object at 0x101af6ae0>
    // <conv.chunks.Comment object at 0x101af6cc0>
    // <conv.chunks.Comment object at 0x101af6de0>
    // <conv.chunks.Comment object at 0x101af6f30>
    // <conv.chunks.Comment object at 0x101af6fc0>
    // <conv.chunks.Comment object at 0x101af7170>
    return 0;
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
    // <conv.chunks.Comment object at 0x101af72c0>
    // <conv.chunks.Comment object at 0x101af73e0>
    // <conv.chunks.Comment object at 0x101af7530>
    // <conv.chunks.Comment object at 0x101af7650>
    // <conv.chunks.Comment object at 0x101af7770>
    // <conv.chunks.Comment object at 0x101af7890>
    JSR(CheckForCoinMTiles);
    BCS(HandleCoinMetatile);
    JSR(ChkJumpspringMetatiles);
    BCC(ChkPBtm);
    lda(JumpspringAnimCtrl);
    BNE(ExCSM);
    JMP(StopPlayerMove);
    JMP(ChkPBtm);
}

int ChkPBtm() {
    // <conv.chunks.Comment object at 0x101af79e0>
    // <conv.chunks.Comment object at 0x101af7b00>
    // <conv.chunks.Comment object at 0x101af7c20>
    // <conv.chunks.Comment object at 0x101af7d70>
    // <conv.chunks.Comment object at 0x101af7e90>
    // <conv.chunks.Comment object at 0x101af7fe0>
    // <conv.chunks.Comment object at 0x101b00140>
    ldy(Player_State);
    cpy(0x0);
    BNE(StopPlayerMove);
    ldy(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x101b002c0>
    // <conv.chunks.Comment object at 0x101b00350>
    // <conv.chunks.Comment object at 0x101b00500>
    dey();
    BNE(StopPlayerMove);
    cmp(0x6c);
    BEQ(PipeDwnS);
    cmp(0x1f);
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}

int PipeDwnS() {
    // <conv.chunks.Comment object at 0x101b006b0>
    // <conv.chunks.Comment object at 0x101b007d0>
    // <conv.chunks.Comment object at 0x101b00860>
    // <conv.chunks.Comment object at 0x101b00a10>
    // <conv.chunks.Comment object at 0x101b00aa0>
    // <conv.chunks.Comment object at 0x101b00c50>
    lda(Player_SprAttrib);
    BNE(PlyrPipe);
    // <conv.chunks.Comment object at 0x101b00da0>
    ldy(Sfx_PipeDown_Injury);
    sty(Square1SoundQueue);
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(0b100000);
    sta(Player_SprAttrib);
    // <conv.chunks.Comment object at 0x101b011f0>
    lda(Player_X_Position);
    anda(0b1111);
    BEQ(ChkGERtn);
    ldy(0x0);
    lda(ScreenLeft_PageLoc);
    BEQ(SetCATmr);
    iny();
    JMP(SetCATmr);
}

int SetCATmr() {
    // <conv.chunks.Comment object at 0x101b01400>
    // <conv.chunks.Comment object at 0x101b01520>
    // <conv.chunks.Comment object at 0x101b01640>
    // <conv.chunks.Comment object at 0x101b016d0>
    // <conv.chunks.Comment object at 0x101b01880>
    // <conv.chunks.Comment object at 0x101b019d0>
    // <conv.chunks.Comment object at 0x101b01a60>
    lda(offsetof(G, AreaChangeTimerData), y);
    sta(ChangeAreaTimer);
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // <conv.chunks.Comment object at 0x101b01cd0>
    lda(GameEngineSubroutine);
    cmp(0x7);
    BEQ(ExCSM);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x101b01e80>
    // <conv.chunks.Comment object at 0x101b02060>
    BNE(ExCSM);
    lda(0x2);
    sta(GameEngineSubroutine);
    return 0;
    JMP(StopPlayerMove);
}

int StopPlayerMove() {
    JSR(ImpedePlayerMove);
    JMP(ExCSM);
}

int ExCSM() {
    // <conv.chunks.Comment object at 0x101b02300>
    // <conv.chunks.Comment object at 0x101b024e0>
    // <conv.chunks.Comment object at 0x101b025a0>
    // <conv.chunks.Comment object at 0x101b02600>
    // <conv.chunks.Comment object at 0x101b02660>
    // <conv.chunks.Comment object at 0x101b027b0>
    return 0;
    JMP(HandleCoinMetatile);
}

int HandleCoinMetatile() {
    JSR(ErACM);
    inc(CoinTallyFor1Ups);
    JMP(GiveOneCoin);
    JMP(HandleAxeMetatile);
}

int HandleAxeMetatile() {
    lda(0x0);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x101b02e70>
    lda(0x2);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x101b03080>
    lda(0x18);
    sta(Player_X_Speed);
    JMP(ErACM);
}

int ErACM() {
    // <conv.chunks.Comment object at 0x101b03290>
    // <conv.chunks.Comment object at 0x101b03440>
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
    // <conv.chunks.Comment object at 0x101b03da0>
    // <conv.chunks.Comment object at 0x101b03b00>
    // <conv.chunks.Comment object at 0x101b10200>
    // <conv.chunks.Comment object at 0x101b103e0>
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // <conv.chunks.Comment object at 0x101b105f0>
    return 0;
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(0x24);
    BEQ(FlagpoleCollision);
    // <conv.chunks.Comment object at 0x101b10740>
    // <conv.chunks.Comment object at 0x101b107d0>
    cmp(0x25);
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda(GameEngineSubroutine);
    cmp(0x5);
    BEQ(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x101b10cb0>
    // <conv.chunks.Comment object at 0x101b10d40>
    lda(0x1);
    sta(PlayerFacingDir);
    inc(ScrollLock);
    // <conv.chunks.Comment object at 0x101b10f50>
    // <conv.chunks.Comment object at 0x101b11100>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BEQ(RunFR);
    lda(BulletBill_CannonVar);
    JSR(KillEnemies);
    // <conv.chunks.Comment object at 0x101b11310>
    // <conv.chunks.Comment object at 0x101b113a0>
    // <conv.chunks.Comment object at 0x101b11580>
    // <conv.chunks.Comment object at 0x101b116a0>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x101b118e0>
    lsr();
    sta(FlagpoleSoundQueue);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x101b11a90>
    // <conv.chunks.Comment object at 0x101b11bb0>
    lda(Player_Y_Position);
    sta(FlagpoleCollisionYPos);
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
    // <conv.chunks.Comment object at 0x101b11f10>
    // <conv.chunks.Comment object at 0x101b12060>
    // <conv.chunks.Comment object at 0x101b121e0>
    // <conv.chunks.Comment object at 0x101b12270>
    // <conv.chunks.Comment object at 0x101b12390>
    stx(FlagpoleScore);
    JMP(RunFR);
}

int RunFR() {
    lda(0x4);
    sta(GameEngineSubroutine);
    JMP(PutPlayerOnVine);
    JMP(VineCollision);
}

int VineCollision() {
    cmp(0x26);
    // <conv.chunks.Comment object at 0x101b128d0>
    BNE(PutPlayerOnVine);
    lda(Player_Y_Position);
    cmp(0x20);
    BCS(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x101b12ae0>
    // <conv.chunks.Comment object at 0x101b12c00>
    // <conv.chunks.Comment object at 0x101b12c90>
    lda(0x1);
    sta(GameEngineSubroutine);
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x101b13080>
    sta(Player_State);
    lda(0x0);
    sta(Player_X_Speed);
    // <conv.chunks.Comment object at 0x101b13290>
    // <conv.chunks.Comment object at 0x101b13320>
    sta(Player_X_MoveForce);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x101b135c0>
    sec();
    sbc(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x101b13770>
    cmp(0x10);
    BCS(SetVXPl);
    // <conv.chunks.Comment object at 0x101b138f0>
    lda(0x2);
    sta(PlayerFacingDir);
    JMP(SetVXPl);
}

int SetVXPl() {
    // <conv.chunks.Comment object at 0x101b13b30>
    // <conv.chunks.Comment object at 0x101b13ce0>
    ldy(PlayerFacingDir);
    lda(0x6);
    // <conv.chunks.Comment object at 0x101b13e90>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x101b18080>
    asl();
    asl();
    clc();
    adc(((offsetof(G, ClimbXPosAdder)) - (1)), y);
    sta(Player_X_Position);
    lda(0x6);
    BNE(ExPVne);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x101b182c0>
    // <conv.chunks.Comment object at 0x101b184d0>
    // <conv.chunks.Comment object at 0x101b18620>
    // <conv.chunks.Comment object at 0x101b186b0>
    // <conv.chunks.Comment object at 0x101b18860>
    clc();
    adc(((offsetof(G, ClimbPLocAdder)) - (1)), y);
    sta(Player_PageLoc);
    JMP(ExPVne);
}

int ExPVne() {
    // <conv.chunks.Comment object at 0x101b18a10>
    // <conv.chunks.Comment object at 0x101b18c20>
    // <conv.chunks.Comment object at 0x101b18d40>
    return 0;
    JMP(ChkInvisibleMTiles);
}

int ChkInvisibleMTiles() {
    cmp(0x5f);
    BEQ(ExCInvT);
    cmp(0x60);
    JMP(ExCInvT);
}

int ExCInvT() {
    // <conv.chunks.Comment object at 0x101b18ec0>
    // <conv.chunks.Comment object at 0x101b18f50>
    // <conv.chunks.Comment object at 0x101b19130>
    // <conv.chunks.Comment object at 0x101b191c0>
    return 0;
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // <conv.chunks.Comment object at 0x101b19430>
    // <conv.chunks.Comment object at 0x101b19550>
    lda(0x70);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x101b19700>
    lda(0xf9);
    sta(JumpspringForce);
    // <conv.chunks.Comment object at 0x101b19910>
    lda(0x3);
    sta(JumpspringTimer);
    // <conv.chunks.Comment object at 0x101b19b20>
    lsr();
    sta(JumpspringAnimCtrl);
    JMP(ExCJSp);
}

int ExCJSp() {
    // <conv.chunks.Comment object at 0x101b19d60>
    // <conv.chunks.Comment object at 0x101b19e80>
    return 0;
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
    // <conv.chunks.Comment object at 0x101b19fd0>
    // <conv.chunks.Comment object at 0x101b1a060>
    // <conv.chunks.Comment object at 0x101b1a240>
    // <conv.chunks.Comment object at 0x101b1a390>
    // <conv.chunks.Comment object at 0x101b1a420>
    // <conv.chunks.Comment object at 0x101b1a570>
    sec();
    JMP(NoJSFnd);
}

int NoJSFnd() {
    // <conv.chunks.Comment object at 0x101b1a6c0>
    return 0;
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda(Up_Down_Buttons);
    anda(0b100);
    BEQ(ExPipeE);
    // <conv.chunks.Comment object at 0x101b1a810>
    // <conv.chunks.Comment object at 0x101b1a930>
    // <conv.chunks.Comment object at 0x101b1aa50>
    lda(0x0);
    cmp(0x11);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x101b1aba0>
    // <conv.chunks.Comment object at 0x101b1ad20>
    lda(0x1);
    cmp(0x10);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x101b1af00>
    // <conv.chunks.Comment object at 0x101b1b080>
    lda(0x30);
    sta(ChangeAreaTimer);
    // <conv.chunks.Comment object at 0x101b1b2c0>
    lda(0x3);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x101b1b4d0>
    lda(Sfx_PipeDown_Injury);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x101b1b770>
    lda(0b100000);
    sta(Player_SprAttrib);
    lda(WarpZoneControl);
    BEQ(ExPipeE);
    anda(0b11);
    // <conv.chunks.Comment object at 0x101b1b980>
    // <conv.chunks.Comment object at 0x101b1baa0>
    // <conv.chunks.Comment object at 0x101b1bbc0>
    // <conv.chunks.Comment object at 0x101b1bd10>
    asl();
    asl();
    tax();
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x101b1bef0>
    // <conv.chunks.Comment object at 0x101b1bfb0>
    // <conv.chunks.Comment object at 0x101b20080>
    cmp(0x60);
    BCC(GetWNum);
    inx();
    // <conv.chunks.Comment object at 0x101b20200>
    // <conv.chunks.Comment object at 0x101b20410>
    cmp(0xa0);
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // <conv.chunks.Comment object at 0x101b20500>
    // <conv.chunks.Comment object at 0x101b20710>
    // <conv.chunks.Comment object at 0x101b207a0>
    ldy(offsetof(G, WarpZoneNumbers), x);
    dey();
    sty(WorldNumber);
    ldx(offsetof(G, WorldAddrOffsets), y);
    lda(offsetof(G, AreaAddrOffsets), x);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x101b20980>
    // <conv.chunks.Comment object at 0x101b20a10>
    // <conv.chunks.Comment object at 0x101b20b30>
    // <conv.chunks.Comment object at 0x101b20c80>
    // <conv.chunks.Comment object at 0x101b20dd0>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x101b21010>
    lda(0x0);
    sta(EntrancePage);
    sta(AreaNumber);
    sta(LevelNumber);
    sta(AltEntranceControl);
    inc(Hidden1UpFlag);
    inc(FetchNewGameTimerFlag);
    JMP(ExPipeE);
}

int ExPipeE() {
    // <conv.chunks.Comment object at 0x101b21190>
    // <conv.chunks.Comment object at 0x101b21340>
    // <conv.chunks.Comment object at 0x101b21460>
    // <conv.chunks.Comment object at 0x101b21580>
    // <conv.chunks.Comment object at 0x101b216a0>
    // <conv.chunks.Comment object at 0x101b217c0>
    // <conv.chunks.Comment object at 0x101b218e0>
    return 0;
    JMP(ImpedePlayerMove);
}

int ImpedePlayerMove() {
    lda(0x0);
    ldy(Player_X_Speed);
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
    // <conv.chunks.Comment object at 0x101b21a30>
    // <conv.chunks.Comment object at 0x101b21ac0>
    // <conv.chunks.Comment object at 0x101b21ca0>
    // <conv.chunks.Comment object at 0x101b21c70>
    // <conv.chunks.Comment object at 0x101b21e50>
    // <conv.chunks.Comment object at 0x101b21fd0>
    // <conv.chunks.Comment object at 0x101b22060>
    // <conv.chunks.Comment object at 0x101b220f0>
    // <conv.chunks.Comment object at 0x101b222d0>
    // <conv.chunks.Comment object at 0x101b22360>
    // <conv.chunks.Comment object at 0x101b22540>
    ldx(0x2);
    cpy(0x1);
    BPL(ExIPM);
    lda(0x1);
    JMP(NXSpd);
}

int NXSpd() {
    ldy(0x10);
    sty(SideCollisionTimer);
    // <conv.chunks.Comment object at 0x101b22b10>
    ldy(0x0);
    sty(Player_X_Speed);
    cmp(0x0);
    BPL(PlatF);
    dey();
    JMP(PlatF);
}

int PlatF() {
    // <conv.chunks.Comment object at 0x101b22d20>
    // <conv.chunks.Comment object at 0x101b22ed0>
    // <conv.chunks.Comment object at 0x101b22f60>
    // <conv.chunks.Comment object at 0x101b23170>
    // <conv.chunks.Comment object at 0x101b23200>
    sty(0x0);
    clc();
    adc(Player_X_Position);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x101b23410>
    // <conv.chunks.Comment object at 0x101b23530>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Player_PageLoc);
    JMP(ExIPM);
}

int ExIPM() {
    // <conv.chunks.Comment object at 0x101b23770>
    // <conv.chunks.Comment object at 0x101b23800>
    // <conv.chunks.Comment object at 0x101b23980>
    txa();
    eor(0xff);
    anda(Player_CollisionBits);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x101b23b00>
    // <conv.chunks.Comment object at 0x101b23cb0>
    return 0;
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, SolidMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x101b23f20>
    // <conv.chunks.Comment object at 0x101b2c290>
    return 0;
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, ClimbMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x101b2c500>
    // <conv.chunks.Comment object at 0x101b2c830>
    return 0;
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(0xc2);
    BEQ(CoinSd);
    cmp(0xc3);
    BEQ(CoinSd);
    clc();
    // <conv.chunks.Comment object at 0x101b2ca40>
    // <conv.chunks.Comment object at 0x101b2cad0>
    // <conv.chunks.Comment object at 0x101b2ccb0>
    // <conv.chunks.Comment object at 0x101b2cd40>
    // <conv.chunks.Comment object at 0x101b2cf50>
    return 0;
    JMP(CoinSd);
}

int CoinSd() {
    lda(Sfx_CoinGrab);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x101b2d1c0>
    return 0;
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x101b2d3d0>
    // <conv.chunks.Comment object at 0x101b2d460>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x101b2d640>
    rol();
    tax();
    tya();
    JMP(ExEBG);
}

int ExEBG() {
    // <conv.chunks.Comment object at 0x101b2d790>
    // <conv.chunks.Comment object at 0x101b2d850>
    // <conv.chunks.Comment object at 0x101b2d910>
    return 0;
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101b2db80>
    anda(0b100000);
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // <conv.chunks.Comment object at 0x101b2e1e0>
    // <conv.chunks.Comment object at 0x101b2e330>
    // <conv.chunks.Comment object at 0x101b2e450>
    ldy(Enemy_ID, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x101b2e6c0>
    BNE(DoIDCheckBGColl);
    lda(Enemy_Y_Position, x);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x101b2ea20>
    BCC(ExEBG);
    JMP(DoIDCheckBGColl);
}

int DoIDCheckBGColl() {
    cpy(GreenParatroopaJump);
    BNE(HBChk);
    JMP(EnemyJump);
    JMP(HBChk);
}

int HBChk() {
    // <conv.chunks.Comment object at 0x101b2ec90>
    // <conv.chunks.Comment object at 0x101b2edb0>
    // <conv.chunks.Comment object at 0x101b2ef00>
    // <conv.chunks.Comment object at 0x101b2f020>
    cpy(HammerBro);
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // <conv.chunks.Comment object at 0x101b2f1a0>
    // <conv.chunks.Comment object at 0x101b2f2f0>
    // <conv.chunks.Comment object at 0x101b2f410>
    cpy(Spiny);
    BEQ(YesIn);
    cpy(PowerUpObject);
    // <conv.chunks.Comment object at 0x101b2f6e0>
    BEQ(YesIn);
    cpy(0x7);
    // <conv.chunks.Comment object at 0x101b2f920>
    BCS(ExEBGChk);
    JMP(YesIn);
}

int YesIn() {
    // <conv.chunks.Comment object at 0x101b2fb30>
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
    // <conv.chunks.Comment object at 0x101b2fe00>
    // <conv.chunks.Comment object at 0x101b2ff50>
    // <conv.chunks.Comment object at 0x101b2ffb0>
    // <conv.chunks.Comment object at 0x101b3c110>
    cmp(0x23);
    BNE(LandEnemyProperly);
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x101b3c290>
    // <conv.chunks.Comment object at 0x101b3c470>
    // <conv.chunks.Comment object at 0x101b3c500>
    // <conv.chunks.Comment object at 0x101b3c5f0>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x101b3c920>
    BCS(ChkToStunEnemies);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x101b3cb30>
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x101b3cec0>
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x101b3d100>
    BCC(SetStun);
    cmp(0x11);
    BCS(SetStun);
    cmp(0xa);
    BCC(Demote);
    cmp(PiranhaPlant);
    BCC(SetStun);
    JMP(Demote);
}

int Demote() {
    // <conv.chunks.Comment object at 0x101b3d340>
    // <conv.chunks.Comment object at 0x101b3d3d0>
    // <conv.chunks.Comment object at 0x101b3d5b0>
    // <conv.chunks.Comment object at 0x101b3d640>
    // <conv.chunks.Comment object at 0x101b3d820>
    // <conv.chunks.Comment object at 0x101b3d940>
    // <conv.chunks.Comment object at 0x101b3da90>
    anda(0b1);
    sta(Enemy_ID, x);
    JMP(SetStun);
}

int SetStun() {
    // <conv.chunks.Comment object at 0x101b3dc10>
    // <conv.chunks.Comment object at 0x101b3dd60>
    lda(Enemy_State, x);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x101b3df10>
    ora(0b10);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101b3e120>
    dec(Enemy_Y_Position, x);
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101b3e390>
    lda(Enemy_ID, x);
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x101b3e600>
    BEQ(SetWYSpd);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x101b3e840>
    ldy(AreaType);
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // <conv.chunks.Comment object at 0x101b3ea50>
    // <conv.chunks.Comment object at 0x101b3eba0>
    lda(0xff);
    JMP(SetNotW);
}

int SetNotW() {
    // <conv.chunks.Comment object at 0x101b3ec60>
    sta(Enemy_Y_Speed, x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(ChkBBill);
    iny();
    JMP(ChkBBill);
}

int ChkBBill() {
    lda(Enemy_ID, x);
    cmp(BulletBill_CannonVar);
    // <conv.chunks.Comment object at 0x101b3f3e0>
    BEQ(NoCDirF);
    cmp(BulletBill_FrenzyVar);
    BEQ(NoCDirF);
    sty(Enemy_MovingDir, x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // <conv.chunks.Comment object at 0x101b3f620>
    // <conv.chunks.Comment object at 0x101b3f740>
    // <conv.chunks.Comment object at 0x101b3f890>
    // <conv.chunks.Comment object at 0x101b3f9e0>
    dey();
    lda(offsetof(G, EnemyBGCXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(ExEBGChk);
}

int ExEBGChk() {
    return 0;
    JMP(LandEnemyProperly);
}

int LandEnemyProperly() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x101b3fe90>
    // <conv.chunks.Comment object at 0x101b3ff20>
    sec();
    sbc(0x8);
    cmp(0x5);
    BCS(ChkForRedKoopa);
    // <conv.chunks.Comment object at 0x101b440e0>
    // <conv.chunks.Comment object at 0x101b44170>
    // <conv.chunks.Comment object at 0x101b44290>
    lda(Enemy_State, x);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x101b44560>
    BNE(LandEnemyInitState);
    lda(Enemy_State, x);
    asl();
    // <conv.chunks.Comment object at 0x101b448c0>
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}

int SChkA() {
    // <conv.chunks.Comment object at 0x101b44a40>
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}

int ChkLandedEnemyState() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101b44bf0>
    BEQ(SChkA);
    cmp(0x5);
    BEQ(ProcEnemyDirection);
    cmp(0x3);
    BCS(ExSteChk);
    lda(Enemy_State, x);
    cmp(0x2);
    BNE(ProcEnemyDirection);
    lda(0x10);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101b44e60>
    // <conv.chunks.Comment object at 0x101b44ef0>
    // <conv.chunks.Comment object at 0x101b450a0>
    // <conv.chunks.Comment object at 0x101b45130>
    // <conv.chunks.Comment object at 0x101b452e0>
    // <conv.chunks.Comment object at 0x101b45430>
    // <conv.chunks.Comment object at 0x101b454c0>
    // <conv.chunks.Comment object at 0x101b45670>
    // <conv.chunks.Comment object at 0x101b45700>
    cpy(Spiny);
    BNE(SetForStn);
    lda(0x0);
    JMP(SetForStn);
}

int SetForStn() {
    // <conv.chunks.Comment object at 0x101b45940>
    // <conv.chunks.Comment object at 0x101b45b20>
    // <conv.chunks.Comment object at 0x101b45bb0>
    sta(EnemyIntervalTimer, x);
    lda(0x3);
    sta(Enemy_State, x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // <conv.chunks.Comment object at 0x101b45dc0>
    // <conv.chunks.Comment object at 0x101b45e50>
    // <conv.chunks.Comment object at 0x101b46030>
    // <conv.chunks.Comment object at 0x101b46150>
    return 0;
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda(Enemy_ID, x);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x101b46270>
    // <conv.chunks.Comment object at 0x101b463c0>
    BEQ(LandEnemyInitState);
    cmp(Spiny);
    BNE(InvtD);
    // <conv.chunks.Comment object at 0x101b46600>
    // <conv.chunks.Comment object at 0x101b46690>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x101b46900>
    lda(0x8);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x101b46b40>
    lda(FrameCounter);
    anda(0b111);
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // <conv.chunks.Comment object at 0x101b46e10>
    // <conv.chunks.Comment object at 0x101b46f30>
    // <conv.chunks.Comment object at 0x101b47050>
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x101b475f0>
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x101b47980>
    lda(Enemy_State, x);
    anda(0b10000000);
    // <conv.chunks.Comment object at 0x101b47bc0>
    BNE(NMovShellFallBit);
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101b47dd0>
    // <conv.chunks.Comment object at 0x101b47e60>
    return 0;
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda(Enemy_State, x);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x101b4c140>
    // <conv.chunks.Comment object at 0x101b4c290>
    sta(Enemy_State, x);
    return 0;
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101b4c5c0>
    cmp(RedKoopa);
    BNE(Chk2MSBSt);
    // <conv.chunks.Comment object at 0x101b4c800>
    lda(Enemy_State, x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // <conv.chunks.Comment object at 0x101b4ca40>
    // <conv.chunks.Comment object at 0x101b4cb60>
    lda(Enemy_State, x);
    tay();
    asl();
    BCC(GetSteFromD);
    // <conv.chunks.Comment object at 0x101b4cda0>
    // <conv.chunks.Comment object at 0x101b4ce30>
    lda(Enemy_State, x);
    ora(0b1000000);
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // <conv.chunks.Comment object at 0x101b4d0a0>
    // <conv.chunks.Comment object at 0x101b4d1c0>
    // <conv.chunks.Comment object at 0x101b4d2e0>
    lda(offsetof(G, EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // <conv.chunks.Comment object at 0x101b4d460>
    sta(Enemy_State, x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda(Enemy_Y_Position, x);
    cmp(0x20);
    // <conv.chunks.Comment object at 0x101b4d6a0>
    // <conv.chunks.Comment object at 0x101b4d7f0>
    BCC(ExESdeC);
    ldy(0x16);
    lda(0x2);
    sta(0xeb);
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // <conv.chunks.Comment object at 0x101b4da30>
    // <conv.chunks.Comment object at 0x101b4dac0>
    // <conv.chunks.Comment object at 0x101b4dca0>
    // <conv.chunks.Comment object at 0x101b4dd30>
    lda(0xeb);
    cmp(Enemy_MovingDir, x);
    BNE(NextSdeC);
    lda(0x1);
    JSR(BlockBufferChk_Enemy);
    BEQ(NextSdeC);
    JSR(ChkForNonSolids);
    BNE(ChkForBump_HammerBroJ);
    JMP(NextSdeC);
}

int NextSdeC() {
    // <conv.chunks.Comment object at 0x101b4de80>
    // <conv.chunks.Comment object at 0x101b4e030>
    // <conv.chunks.Comment object at 0x101b4e150>
    // <conv.chunks.Comment object at 0x101b4e1e0>
    // <conv.chunks.Comment object at 0x101b4e390>
    // <conv.chunks.Comment object at 0x101b4e4b0>
    // <conv.chunks.Comment object at 0x101b4e5d0>
    // <conv.chunks.Comment object at 0x101b4e6f0>
    dec(0xeb);
    iny();
    cpy(0x18);
    BCC(SdeCLoop);
    JMP(ExESdeC);
}

int ExESdeC() {
    return 0;
    JMP(ChkForBump_HammerBroJ);
}

int ChkForBump_HammerBroJ() {
    cpx(0x5);
    BEQ(NoBump);
    lda(Enemy_State, x);
    asl();
    // <conv.chunks.Comment object at 0x101b4ec30>
    // <conv.chunks.Comment object at 0x101b4ecc0>
    // <conv.chunks.Comment object at 0x101b4eea0>
    // <conv.chunks.Comment object at 0x101b4f020>
    BCC(NoBump);
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NoBump);
}

int NoBump() {
    // <conv.chunks.Comment object at 0x101b4f1d0>
    // <conv.chunks.Comment object at 0x101b4f2f0>
    // <conv.chunks.Comment object at 0x101b4f410>
    lda(Enemy_ID, x);
    cmp(0x5);
    BNE(InvEnemyDir);
    // <conv.chunks.Comment object at 0x101b4f620>
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
    lda(Enemy_X_Position, x);
    sec();
    sbc(Player_X_Position);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101b4fc80>
    // <conv.chunks.Comment object at 0x101b4fe00>
    // <conv.chunks.Comment object at 0x101b4fe60>
    // <conv.chunks.Comment object at 0x101b4ffe0>
    // <conv.chunks.Comment object at 0x101b580b0>
    // <conv.chunks.Comment object at 0x101b58200>
    lda(Enemy_PageLoc, x);
    sbc(Player_PageLoc);
    // <conv.chunks.Comment object at 0x101b58410>
    return 0;
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x101b58620>
    lda(Enemy_Y_Position, x);
    anda(0b11110000);
    ora(0b1000);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101b58860>
    // <conv.chunks.Comment object at 0x101b58980>
    // <conv.chunks.Comment object at 0x101b58aa0>
    return 0;
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x101b58cb0>
    // <conv.chunks.Comment object at 0x101b58e30>
    adc(0x3e);
    cmp(0x44);
    return 0;
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // <conv.chunks.Comment object at 0x101b591c0>
    // <conv.chunks.Comment object at 0x101b592e0>
    lda(Enemy_Y_Speed, x);
    clc();
    // <conv.chunks.Comment object at 0x101b59580>
    adc(0x2);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x101b59670>
    BCC(DoSide);
    JSR(ChkUnderEnemy);
    BEQ(DoSide);
    JSR(ChkForNonSolids);
    BEQ(DoSide);
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x101b59940>
    // <conv.chunks.Comment object at 0x101b59a60>
    // <conv.chunks.Comment object at 0x101b59bb0>
    // <conv.chunks.Comment object at 0x101b59cd0>
    // <conv.chunks.Comment object at 0x101b59e20>
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    JMP(DoSide);
}

int DoSide() {
    // <conv.chunks.Comment object at 0x101b59fa0>
    // <conv.chunks.Comment object at 0x101b5a180>
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}

int HammerBroBGColl() {
    JSR(ChkUnderEnemy);
    // <conv.chunks.Comment object at 0x101b5a360>
    BEQ(NoUnderHammerBro);
    cmp(0x23);
    // <conv.chunks.Comment object at 0x101b5a570>
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(0xfc);
    // <conv.chunks.Comment object at 0x101b5a7b0>
    // <conv.chunks.Comment object at 0x101b5a8d0>
    sta(Enemy_Y_Speed, x);
    return 0;
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda(EnemyFrameTimer, x);
    BNE(NoUnderHammerBro);
    // <conv.chunks.Comment object at 0x101b5abd0>
    // <conv.chunks.Comment object at 0x101b5ad20>
    lda(Enemy_State, x);
    anda(0b10001000);
    sta(Enemy_State, x);
    JSR(EnemyLanding);
    JMP(DoEnemySideCheck);
    JMP(NoUnderHammerBro);
}

int NoUnderHammerBro() {
    lda(Enemy_State, x);
    ora(0x1);
    // <conv.chunks.Comment object at 0x101b5b440>
    // <conv.chunks.Comment object at 0x101b5b590>
    sta(Enemy_State, x);
    return 0;
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
    // <conv.chunks.Comment object at 0x101b5bc20>
    BEQ(NSFnd);
    cmp(0xc2);
    // <conv.chunks.Comment object at 0x101b5be60>
    BEQ(NSFnd);
    cmp(0xc3);
    // <conv.chunks.Comment object at 0x101b600e0>
    BEQ(NSFnd);
    cmp(0x5f);
    // <conv.chunks.Comment object at 0x101b60320>
    BEQ(NSFnd);
    cmp(0x60);
    JMP(NSFnd);
}

int NSFnd() {
    return 0;
    JMP(FireballBGCollision);
}

int FireballBGCollision() {
    lda(Fireball_Y_Position, x);
    // <conv.chunks.Comment object at 0x101b607d0>
    cmp(0x18);
    BCC(ClearBounceFlag);
    JSR(BlockBufferChk_FBall);
    BEQ(ClearBounceFlag);
    JSR(ChkForNonSolids);
    BEQ(ClearBounceFlag);
    lda(Fireball_Y_Speed, x);
    BMI(InitFireballExplode);
    lda(FireballBouncingFlag, x);
    BNE(InitFireballExplode);
    // <conv.chunks.Comment object at 0x101b60980>
    // <conv.chunks.Comment object at 0x101b60b30>
    // <conv.chunks.Comment object at 0x101b60c50>
    // <conv.chunks.Comment object at 0x101b60d70>
    // <conv.chunks.Comment object at 0x101b60e90>
    // <conv.chunks.Comment object at 0x101b60fb0>
    // <conv.chunks.Comment object at 0x101b61100>
    // <conv.chunks.Comment object at 0x101b61220>
    // <conv.chunks.Comment object at 0x101b61370>
    lda(0xfd);
    sta(Fireball_Y_Speed, x);
    // <conv.chunks.Comment object at 0x101b614f0>
    lda(0x1);
    sta(FireballBouncingFlag, x);
    // <conv.chunks.Comment object at 0x101b61730>
    lda(Fireball_Y_Position, x);
    anda(0xf8);
    sta(Fireball_Y_Position, x);
    return 0;
    JMP(ClearBounceFlag);
}

int ClearBounceFlag() {
    lda(0x0);
    sta(FireballBouncingFlag, x);
    return 0;
    JMP(InitFireballExplode);
}

int InitFireballExplode() {
    lda(0x80);
    sta(Fireball_State, x);
    // <conv.chunks.Comment object at 0x101b62180>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    return 0;
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x101b62870>
    // <conv.chunks.Comment object at 0x101b6c410>
    adc(0x7);
    tax();
    ldy(0x2);
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x101b6c8f0>
    // <conv.chunks.Comment object at 0x101b6c9b0>
    adc(0x9);
    tax();
    ldy(0x6);
    JMP(FBallB);
}

int FBallB() {
    // <conv.chunks.Comment object at 0x101b6cbc0>
    // <conv.chunks.Comment object at 0x101b6cc50>
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}

int GetEnemyBoundBox() {
    ldy(0x48);
    // <conv.chunks.Comment object at 0x101b6cfb0>
    sty(0x0);
    ldy(0x44);
    // <conv.chunks.Comment object at 0x101b6d040>
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x101b6d400>
    sty(0x0);
    ldy(0x4);
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x101b6d760>
    // <conv.chunks.Comment object at 0x101b6d8e0>
    sbc(ScreenLeft_X_Pos);
    sta(0x1);
    lda(Enemy_PageLoc, x);
    sbc(ScreenLeft_PageLoc);
    BMI(CMBits);
    // <conv.chunks.Comment object at 0x101b6da90>
    // <conv.chunks.Comment object at 0x101b6db20>
    // <conv.chunks.Comment object at 0x101b6dcd0>
    // <conv.chunks.Comment object at 0x101b6ddf0>
    ora(0x1);
    BEQ(CMBits);
    ldy(0x0);
    JMP(CMBits);
}

int CMBits() {
    // <conv.chunks.Comment object at 0x101b6df40>
    // <conv.chunks.Comment object at 0x101b6e1b0>
    // <conv.chunks.Comment object at 0x101b6e240>
    tya();
    anda(Enemy_OffscreenBits);
    sta(EnemyOffscrBitsMasked, x);
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
    // <conv.chunks.Comment object at 0x101b6ede0>
    // <conv.chunks.Comment object at 0x101b6eea0>
    adc(0x1);
    tax();
    ldy(0x1);
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}

int MoveBoundBoxOffscreen() {
    txa();
    // <conv.chunks.Comment object at 0x101b6f470>
    asl();
    asl();
    tay();
    // <conv.chunks.Comment object at 0x101b6f650>
    lda(0xff);
    sta(EnemyBoundingBoxCoord, y);
    // <conv.chunks.Comment object at 0x101b6f740>
    sta(((EnemyBoundingBoxCoord) + (1)), y);
    sta(((EnemyBoundingBoxCoord) + (2)), y);
    sta(((EnemyBoundingBoxCoord) + (3)), y);
    return 0;
    JMP(BoundingBoxCore);
}

int BoundingBoxCore() {
    stx(0x0);
    lda(SprObject_Rel_YPos, y);
    sta(0x2);
    // <conv.chunks.Comment object at 0x101b6ffb0>
    // <conv.chunks.Comment object at 0x101b6ff80>
    // <conv.chunks.Comment object at 0x101b78260>
    lda(SprObject_Rel_XPos, y);
    sta(0x1);
    txa();
    // <conv.chunks.Comment object at 0x101b78500>
    asl();
    asl();
    pha();
    tay();
    lda(SprObj_BoundBoxCtrl, x);
    asl();
    // <conv.chunks.Comment object at 0x101b78800>
    // <conv.chunks.Comment object at 0x101b78890>
    // <conv.chunks.Comment object at 0x101b78a10>
    asl();
    tax();
    lda(0x1);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    sta(BoundingBox_UL_Corner, y);
    // <conv.chunks.Comment object at 0x101b78bf0>
    // <conv.chunks.Comment object at 0x101b78bc0>
    // <conv.chunks.Comment object at 0x101b78da0>
    // <conv.chunks.Comment object at 0x101b78ef0>
    lda(0x1);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    inx();
    // <conv.chunks.Comment object at 0x101b791c0>
    // <conv.chunks.Comment object at 0x101b793d0>
    // <conv.chunks.Comment object at 0x101b79550>
    iny();
    lda(0x2);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    // <conv.chunks.Comment object at 0x101b796a0>
    // <conv.chunks.Comment object at 0x101b79670>
    // <conv.chunks.Comment object at 0x101b79850>
    sta(BoundingBox_UL_Corner, y);
    lda(0x2);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    pla();
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x101b79c40>
    // <conv.chunks.Comment object at 0x101b79e50>
    // <conv.chunks.Comment object at 0x101b79fd0>
    // <conv.chunks.Comment object at 0x101b7a090>
    // <conv.chunks.Comment object at 0x101b7a150>
    return 0;
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda(ScreenLeft_X_Pos);
    clc();
    // <conv.chunks.Comment object at 0x101b7a300>
    // <conv.chunks.Comment object at 0x101b7a450>
    adc(0x80);
    sta(0x2);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x101b7a540>
    // <conv.chunks.Comment object at 0x101b7a7e0>
    sta(0x1);
    lda(SprObject_X_Position, x);
    cmp(0x2);
    lda(SprObject_PageLoc, x);
    sbc(0x1);
    BCC(CheckLeftScreenBBox);
    lda(BoundingBox_DR_XPos, y);
    BMI(NoOfs);
    lda(0xff);
    ldx(BoundingBox_UL_XPos, y);
    BMI(SORte);
    sta(BoundingBox_UL_XPos, y);
    JMP(SORte);
}

int SORte() {
    // <conv.chunks.Comment object at 0x101b7a870>
    // <conv.chunks.Comment object at 0x101b7ab70>
    // <conv.chunks.Comment object at 0x101b7ac00>
    // <conv.chunks.Comment object at 0x101b7ade0>
    // <conv.chunks.Comment object at 0x101b7ae70>
    // <conv.chunks.Comment object at 0x101b7aff0>
    // <conv.chunks.Comment object at 0x101b7b140>
    // <conv.chunks.Comment object at 0x101b7b290>
    // <conv.chunks.Comment object at 0x101b7b320>
    // <conv.chunks.Comment object at 0x101b7b500>
    // <conv.chunks.Comment object at 0x101b7b650>
    // <conv.chunks.Comment object at 0x101b7b7a0>
    sta(BoundingBox_DR_XPos, y);
    JMP(NoOfs);
}

int NoOfs() {
    // <conv.chunks.Comment object at 0x101b7b950>
    ldx(ObjectOffset);
    return 0;
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda(BoundingBox_UL_XPos, y);
    BPL(NoOfs2);
    cmp(0xa0);
    BCC(NoOfs2);
    // <conv.chunks.Comment object at 0x101b7bb90>
    // <conv.chunks.Comment object at 0x101b7bce0>
    // <conv.chunks.Comment object at 0x101b7be30>
    // <conv.chunks.Comment object at 0x101b7bec0>
    lda(0x0);
    ldx(BoundingBox_DR_XPos, y);
    BPL(SOLft);
    sta(BoundingBox_DR_XPos, y);
    JMP(SOLft);
}

int SOLft() {
    // <conv.chunks.Comment object at 0x101b80140>
    // <conv.chunks.Comment object at 0x101b80320>
    // <conv.chunks.Comment object at 0x101b80470>
    // <conv.chunks.Comment object at 0x101b805c0>
    sta(BoundingBox_UL_XPos, y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // <conv.chunks.Comment object at 0x101b80770>
    ldx(ObjectOffset);
    return 0;
    JMP(PlayerCollisionCore);
}

int PlayerCollisionCore() {
    ldx(0x0);
    JMP(SprObjectCollisionCore);
}

int SprObjectCollisionCore() {
    sty(0x6);
    // <conv.chunks.Comment object at 0x101b80bc0>
    lda(0x1);
    sta(0x7);
    JMP(CollisionCoreLoop);
}

int CollisionCoreLoop() {
    lda(BoundingBox_UL_Corner, y);
    cmp(BoundingBox_UL_Corner, x);
    BCS(FirstBoxGreater);
    cmp(BoundingBox_LR_Corner, x);
    BCC(SecondBoxVerticalChk);
    BEQ(CollisionFound);
    lda(BoundingBox_LR_Corner, y);
    cmp(BoundingBox_UL_Corner, y);
    BCC(CollisionFound);
    cmp(BoundingBox_UL_Corner, x);
    BCS(CollisionFound);
    ldy(0x6);
    return 0;
    JMP(SecondBoxVerticalChk);
}

int SecondBoxVerticalChk() {
    lda(BoundingBox_LR_Corner, x);
    cmp(BoundingBox_UL_Corner, x);
    BCC(CollisionFound);
    lda(BoundingBox_LR_Corner, y);
    cmp(BoundingBox_UL_Corner, x);
    BCS(CollisionFound);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x101b81e80>
    // <conv.chunks.Comment object at 0x101b81fd0>
    // <conv.chunks.Comment object at 0x101b82120>
    // <conv.chunks.Comment object at 0x101b82240>
    // <conv.chunks.Comment object at 0x101b82390>
    // <conv.chunks.Comment object at 0x101b824e0>
    // <conv.chunks.Comment object at 0x101b82630>
    return 0;
    JMP(FirstBoxGreater);
}

int FirstBoxGreater() {
    cmp(BoundingBox_UL_Corner, x);
    BEQ(CollisionFound);
    cmp(BoundingBox_LR_Corner, x);
    BCC(CollisionFound);
    BEQ(CollisionFound);
    cmp(BoundingBox_LR_Corner, y);
    BCC(NoCollisionFound);
    // <conv.chunks.Comment object at 0x101b827e0>
    // <conv.chunks.Comment object at 0x101b82930>
    // <conv.chunks.Comment object at 0x101b82a50>
    // <conv.chunks.Comment object at 0x101b82ba0>
    // <conv.chunks.Comment object at 0x101b82cc0>
    // <conv.chunks.Comment object at 0x101b82de0>
    // <conv.chunks.Comment object at 0x101b82f30>
    BEQ(NoCollisionFound);
    lda(BoundingBox_LR_Corner, y);
    cmp(BoundingBox_UL_Corner, x);
    BCS(CollisionFound);
    JMP(NoCollisionFound);
}

int NoCollisionFound() {
    clc();
    ldy(0x6);
    return 0;
    JMP(CollisionFound);
}

int CollisionFound() {
    inx();
    iny();
    dec(0x7);
    BPL(CollisionCoreLoop);
    sec();
    ldy(0x6);
    // <conv.chunks.Comment object at 0x101b83830>
    // <conv.chunks.Comment object at 0x101b838f0>
    // <conv.chunks.Comment object at 0x101b839b0>
    // <conv.chunks.Comment object at 0x101b83a40>
    // <conv.chunks.Comment object at 0x101b83bf0>
    // <conv.chunks.Comment object at 0x101b83cb0>
    return 0;
    JMP(BlockBufferChk_Enemy);
}

int BlockBufferChk_Enemy() {
    pha();
    // <conv.chunks.Comment object at 0x101b83e60>
    // <conv.chunks.Comment object at 0x101b83ec0>
    // <conv.chunks.Comment object at 0x101b83f20>
    // <conv.chunks.Comment object at 0x101b83fb0>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x101b8c140>
    adc(0x1);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x101b8c380>
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(0xd);
    // <conv.chunks.Comment object at 0x101b8c620>
    // <conv.chunks.Comment object at 0x101b8c6b0>
    tax();
    ldy(0x1b);
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(0x1a);
    // <conv.chunks.Comment object at 0x101b8cb00>
    txa();
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x101b8cd40>
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // <conv.chunks.Comment object at 0x101b8cef0>
    lda(0x0);
    JMP(BBChk_E);
}

int BBChk_E() {
    // <conv.chunks.Comment object at 0x101b8cfe0>
    JSR(BlockBufferCollision);
    ldx(ObjectOffset);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x101b8d1f0>
    // <conv.chunks.Comment object at 0x101b8d310>
    return 0;
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
    // <conv.chunks.Comment object at 0x101b8fc50>
    // <conv.chunks.Comment object at 0x101b8fd10>
    // <conv.chunks.Comment object at 0x101b8fda0>
    // <conv.chunks.Comment object at 0x101b8ff80>
    adc(SprObject_X_Position, x);
    sta(0x5);
    // <conv.chunks.Comment object at 0x101b981a0>
    lda(SprObject_PageLoc, x);
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
    lda(SprObject_Y_Position, x);
    // <conv.chunks.Comment object at 0x101b983b0>
    // <conv.chunks.Comment object at 0x101b98440>
    // <conv.chunks.Comment object at 0x101b98620>
    // <conv.chunks.Comment object at 0x101b986e0>
    // <conv.chunks.Comment object at 0x101b986b0>
    // <conv.chunks.Comment object at 0x101b988c0>
    // <conv.chunks.Comment object at 0x101b98980>
    // <conv.chunks.Comment object at 0x101b98a40>
    // <conv.chunks.Comment object at 0x101b98ad0>
    // <conv.chunks.Comment object at 0x101b98c20>
    // <conv.chunks.Comment object at 0x101b98cb0>
    clc();
    adc(offsetof(G, BlockBuffer_Y_Adder), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x101b98ef0>
    // <conv.chunks.Comment object at 0x101b99040>
    sec();
    sbc(0x20);
    sta(0x2);
    tay();
    lda((0x6), y);
    sta(0x3);
    ldy(0x4);
    pla();
    BNE(RetXC);
    lda(SprObject_Y_Position, x);
    JMP(RetYC);
    JMP(RetXC);
}

int RetXC() {
    // <conv.chunks.Comment object at 0x101b991f0>
    // <conv.chunks.Comment object at 0x101b99340>
    // <conv.chunks.Comment object at 0x101b99280>
    // <conv.chunks.Comment object at 0x101b994f0>
    // <conv.chunks.Comment object at 0x101b996a0>
    // <conv.chunks.Comment object at 0x101b99550>
    // <conv.chunks.Comment object at 0x101b99730>
    // <conv.chunks.Comment object at 0x101b99970>
    // <conv.chunks.Comment object at 0x101b99ac0>
    // <conv.chunks.Comment object at 0x101b99c10>
    // <conv.chunks.Comment object at 0x101b99d60>
    lda(SprObject_X_Position, x);
    JMP(RetYC);
}

int RetYC() {
    // <conv.chunks.Comment object at 0x101b99f10>
    anda(0b1111);
    sta(0x4);
    lda(0x3);
    return 0;
    JMP(DrawVine);
}

int DrawVine() {
    sty(0x0);
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x101b9a540>
    // <conv.chunks.Comment object at 0x101b9a750>
    clc();
    adc(offsetof(G, VineYPosAdder), y);
    ldx(VineObjOffset, y);
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    JSR(SixSpriteStacker);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x101b9a960>
    // <conv.chunks.Comment object at 0x101b9aab0>
    // <conv.chunks.Comment object at 0x101b9ac00>
    // <conv.chunks.Comment object at 0x101b9ad80>
    // <conv.chunks.Comment object at 0x101b9ae10>
    // <conv.chunks.Comment object at 0x101b9af90>
    // <conv.chunks.Comment object at 0x101b9b0b0>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x101b9b650>
    // <conv.chunks.Comment object at 0x101b9b6e0>
    // <conv.chunks.Comment object at 0x101b9b980>
    sta(((Sprite_X_Position) + (20)), y);
    lda(0b100001);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101b9bd70>
    // <conv.chunks.Comment object at 0x101b9be90>
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x101ba03e0>
    // <conv.chunks.Comment object at 0x101ba0500>
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    ldx(0x5);
    JMP(VineTL);
}

int VineTL() {
    // <conv.chunks.Comment object at 0x101ba0ad0>
    // <conv.chunks.Comment object at 0x101ba0b60>
    lda(0xe1);
    sta(Sprite_Tilenumber, y);
    iny();
    // <conv.chunks.Comment object at 0x101ba0ec0>
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(0x2);
    lda(0x0);
    BNE(SkpVTop);
    // <conv.chunks.Comment object at 0x101ba1130>
    // <conv.chunks.Comment object at 0x101ba11c0>
    // <conv.chunks.Comment object at 0x101ba1340>
    // <conv.chunks.Comment object at 0x101ba1310>
    // <conv.chunks.Comment object at 0x101ba14f0>
    lda(0xe0);
    sta(Sprite_Tilenumber, y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // <conv.chunks.Comment object at 0x101ba1700>
    // <conv.chunks.Comment object at 0x101ba18e0>
    ldx(0x0);
    JMP(ChkFTop);
}

int ChkFTop() {
    // <conv.chunks.Comment object at 0x101ba19d0>
    lda(VineStart_Y_Position);
    sec();
    sbc(Sprite_Y_Position, y);
    cmp(0x64);
    BCC(NextVSp);
    // <conv.chunks.Comment object at 0x101ba1c70>
    // <conv.chunks.Comment object at 0x101ba1dc0>
    // <conv.chunks.Comment object at 0x101ba1e50>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(NextVSp);
}

int NextVSp() {
    // <conv.chunks.Comment object at 0x101ba2090>
    // <conv.chunks.Comment object at 0x101ba2270>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x101ba2570>
    // <conv.chunks.Comment object at 0x101ba2600>
    BNE(ChkFTop);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101ba2870>
    return 0;
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(0x6);
    JMP(StkLp);
}

int StkLp() {
    // <conv.chunks.Comment object at 0x101ba2a20>
    // <conv.chunks.Comment object at 0x101ba2ab0>
    sta(Sprite_Data, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101ba2d80>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x101ba2f60>
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x101ba3140>
    // <conv.chunks.Comment object at 0x101ba31d0>
    // <conv.chunks.Comment object at 0x101ba3350>
    return 0;
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy(Misc_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x101ba3fe0>
    lda(TimerControl);
    BNE(ForceHPose);
    lda(Misc_State, x);
    anda(0b1111111);
    cmp(0x1);
    BEQ(GetHPose);
    JMP(ForceHPose);
}

int ForceHPose() {
    // <conv.chunks.Comment object at 0x101ba88c0>
    // <conv.chunks.Comment object at 0x101ba89e0>
    // <conv.chunks.Comment object at 0x101ba8b30>
    // <conv.chunks.Comment object at 0x101ba8c50>
    // <conv.chunks.Comment object at 0x101ba8ce0>
    // <conv.chunks.Comment object at 0x101ba8e90>
    ldx(0x0);
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // <conv.chunks.Comment object at 0x101ba8f50>
    // <conv.chunks.Comment object at 0x101ba9130>
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x101ba92b0>
    lsr();
    anda(0b11);
    tax();
    JMP(RenderH);
}

int RenderH() {
    // <conv.chunks.Comment object at 0x101ba93d0>
    // <conv.chunks.Comment object at 0x101ba9520>
    // <conv.chunks.Comment object at 0x101ba95b0>
    lda(Misc_Rel_YPos);
    clc();
    adc(offsetof(G, FirstSprYPos), x);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x101ba97c0>
    // <conv.chunks.Comment object at 0x101ba9910>
    clc();
    adc(offsetof(G, SecondSprYPos), x);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x101ba9af0>
    // <conv.chunks.Comment object at 0x101ba9c40>
    // <conv.chunks.Comment object at 0x101ba9e50>
    clc();
    adc(offsetof(G, FirstSprXPos), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x101baa000>
    // <conv.chunks.Comment object at 0x101baa150>
    clc();
    adc(offsetof(G, SecondSprXPos), x);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101baa330>
    // <conv.chunks.Comment object at 0x101baa480>
    lda(offsetof(G, FirstSprTilenum), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x101baa7b0>
    lda(offsetof(G, SecondSprTilenum), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    // <conv.chunks.Comment object at 0x101baaa20>
    lda(offsetof(G, HammerSprAttrib), x);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101baad50>
    // <conv.chunks.Comment object at 0x101baaea0>
    // <conv.chunks.Comment object at 0x101bab0b0>
    lda(Misc_OffscreenBits);
    anda(0b11111100);
    BEQ(NoHOffscr);
    // <conv.chunks.Comment object at 0x101bab2c0>
    // <conv.chunks.Comment object at 0x101bab3e0>
    lda(0x0);
    sta(Misc_State, x);
    // <conv.chunks.Comment object at 0x101bab560>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // <conv.chunks.Comment object at 0x101bab7a0>
    // <conv.chunks.Comment object at 0x101bab980>
    return 0;
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x101babbc0>
    // <conv.chunks.Comment object at 0x101bb8320>
    // <conv.chunks.Comment object at 0x101bb8440>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101bb8620>
    // <conv.chunks.Comment object at 0x101bb86b0>
    sta(((Sprite_X_Position) + (8)), y);
    clc();
    adc(0xc);
    sta(0x5);
    lda(Enemy_Y_Position, x);
    JSR(DumpTwoSpr);
    adc(0x8);
    sta(((Sprite_Y_Position) + (8)), y);
    lda(FlagpoleFNum_Y_Pos);
    sta(0x2);
    // <conv.chunks.Comment object at 0x101bb8bc0>
    // <conv.chunks.Comment object at 0x101bb8d10>
    // <conv.chunks.Comment object at 0x101bb8da0>
    // <conv.chunks.Comment object at 0x101bb8f50>
    // <conv.chunks.Comment object at 0x101bb9070>
    // <conv.chunks.Comment object at 0x101bb9100>
    // <conv.chunks.Comment object at 0x101bb93a0>
    // <conv.chunks.Comment object at 0x101bb94f0>
    lda(0x1);
    sta(0x3);
    sta(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101bb9700>
    // <conv.chunks.Comment object at 0x101bb9640>
    // <conv.chunks.Comment object at 0x101bb98b0>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (8)), y);
    lda(0x7e);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (8)), y);
    // <conv.chunks.Comment object at 0x101bb9e80>
    // <conv.chunks.Comment object at 0x101bba060>
    lda(0x7f);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(FlagpoleCollisionYPos);
    BEQ(ChkFlagOffscreen);
    // <conv.chunks.Comment object at 0x101bba2d0>
    // <conv.chunks.Comment object at 0x101bba570>
    // <conv.chunks.Comment object at 0x101bba690>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x101bba870>
    adc(0xc);
    tay();
    lda(FlagpoleScore);
    asl();
    // <conv.chunks.Comment object at 0x101bbaa20>
    // <conv.chunks.Comment object at 0x101bbaab0>
    // <conv.chunks.Comment object at 0x101bbac00>
    tax();
    lda(offsetof(G, FlagpoleScoreNumTiles), x);
    // <conv.chunks.Comment object at 0x101bbad20>
    sta(0x0);
    lda(((offsetof(G, FlagpoleScoreNumTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    JMP(ChkFlagOffscreen);
}

int ChkFlagOffscreen() {
    ldx(ObjectOffset);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_OffscreenBits);
    anda(0b1110);
    BEQ(ExitDumpSpr);
    JMP(MoveSixSpritesOffscreen);
}

int MoveSixSpritesOffscreen() {
    lda(0xf8);
    JMP(DumpSixSpr);
}

int DumpSixSpr() {
    sta(((Sprite_Data) + (20)), y);
    sta(((Sprite_Data) + (16)), y);
    JMP(DumpFourSpr);
}

int DumpFourSpr() {
    sta(((Sprite_Data) + (12)), y);
    JMP(DumpThreeSpr);
}

int DumpThreeSpr() {
    sta(((Sprite_Data) + (8)), y);
    JMP(DumpTwoSpr);
}

int DumpTwoSpr() {
    sta(((Sprite_Data) + (4)), y);
    // <conv.chunks.Comment object at 0x101bc42f0>
    sta(Sprite_Data, y);
    JMP(ExitDumpSpr);
}

int ExitDumpSpr() {
    return 0;
    JMP(DrawLargePlatform);
}

int DrawLargePlatform() {
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x101bc4740>
    // <conv.chunks.Comment object at 0x101bc48c0>
    // <conv.chunks.Comment object at 0x101bc4890>
    // <conv.chunks.Comment object at 0x101bc4aa0>
    iny();
    lda(Enemy_Rel_XPos);
    JSR(SixSpriteStacker);
    // <conv.chunks.Comment object at 0x101bc4bc0>
    // <conv.chunks.Comment object at 0x101bc4ce0>
    ldx(ObjectOffset);
    lda(Enemy_Y_Position, x);
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x101bc4ef0>
    // <conv.chunks.Comment object at 0x101bc5040>
    ldy(AreaType);
    cpy(0x3);
    // <conv.chunks.Comment object at 0x101bc5250>
    BEQ(ShrinkPlatform);
    ldy(SecondaryHardMode);
    BEQ(SetLast2Platform);
    JMP(ShrinkPlatform);
}

int ShrinkPlatform() {
    lda(0xf8);
    JMP(SetLast2Platform);
}

int SetLast2Platform() {
    ldy(Enemy_SprDataOffset, x);
    sta(((Sprite_Y_Position) + (16)), y);
    sta(((Sprite_Y_Position) + (20)), y);
    lda(0x5b);
    // <conv.chunks.Comment object at 0x101bc5820>
    // <conv.chunks.Comment object at 0x101bc5970>
    // <conv.chunks.Comment object at 0x101bc5b80>
    // <conv.chunks.Comment object at 0x101bc5d90>
    ldx(CloudTypeOverride);
    BEQ(SetPlatformTilenum);
    lda(0x75);
    JMP(SetPlatformTilenum);
}

int SetPlatformTilenum() {
    ldx(ObjectOffset);
    iny();
    JSR(DumpSixSpr);
    lda(0x2);
    iny();
    JSR(DumpSixSpr);
    inx();
    JSR(GetXOffscreenBits);
    // <conv.chunks.Comment object at 0x101bc6210>
    // <conv.chunks.Comment object at 0x101bc6360>
    // <conv.chunks.Comment object at 0x101bc63f0>
    // <conv.chunks.Comment object at 0x101bc6510>
    // <conv.chunks.Comment object at 0x101bc6660>
    // <conv.chunks.Comment object at 0x101bc66f0>
    // <conv.chunks.Comment object at 0x101bc6840>
    // <conv.chunks.Comment object at 0x101bc68d0>
    dex();
    ldy(Enemy_SprDataOffset, x);
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101bc6a80>
    // <conv.chunks.Comment object at 0x101bc6c00>
    // <conv.chunks.Comment object at 0x101bc6cc0>
    BCC(SChk2);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101bc6e70>
    sta(Sprite_Y_Position, y);
    JMP(SChk2);
}

int SChk2() {
    // <conv.chunks.Comment object at 0x101bc70b0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101bc7200>
    // <conv.chunks.Comment object at 0x101bc72c0>
    BCC(SChk3);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101bc7470>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(SChk3);
}

int SChk3() {
    // <conv.chunks.Comment object at 0x101bc7770>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101bc78c0>
    // <conv.chunks.Comment object at 0x101bc7980>
    BCC(SChk4);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101bc7b30>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(SChk4);
}

int SChk4() {
    // <conv.chunks.Comment object at 0x101bc7e30>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101bc7f80>
    // <conv.chunks.Comment object at 0x101bcc080>
    BCC(SChk5);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101bcc230>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SChk5);
}

int SChk5() {
    // <conv.chunks.Comment object at 0x101bcc530>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x101bcc680>
    // <conv.chunks.Comment object at 0x101bcc740>
    BCC(SChk6);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101bcc8f0>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SChk6);
}

int SChk6() {
    // <conv.chunks.Comment object at 0x101bccbf0>
    pla();
    asl();
    BCC(SLChk);
    // <conv.chunks.Comment object at 0x101bccd40>
    // <conv.chunks.Comment object at 0x101bccdd0>
    lda(0xf8);
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(SLChk);
}

int SLChk() {
    // <conv.chunks.Comment object at 0x101bccf80>
    // <conv.chunks.Comment object at 0x101bcd220>
    lda(Enemy_OffscreenBits);
    asl();
    // <conv.chunks.Comment object at 0x101bcd3d0>
    BCC(ExDLPl);
    JSR(MoveSixSpritesOffscreen);
    JMP(ExDLPl);
}

int ExDLPl() {
    return 0;
    JMP(DrawFloateyNumber_Coin);
}

int DrawFloateyNumber_Coin() {
    lda(FrameCounter);
    lsr();
    BCS(NotRsNum);
    dec(Misc_Y_Position, x);
    JMP(NotRsNum);
}

int NotRsNum() {
    // <conv.chunks.Comment object at 0x101bcd7f0>
    // <conv.chunks.Comment object at 0x101bcd940>
    // <conv.chunks.Comment object at 0x101bcd9d0>
    // <conv.chunks.Comment object at 0x101bcdaf0>
    // <conv.chunks.Comment object at 0x101bcdc40>
    lda(Misc_Y_Position, x);
    JSR(DumpTwoSpr);
    lda(Misc_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x101bcddc0>
    // <conv.chunks.Comment object at 0x101bcdee0>
    // <conv.chunks.Comment object at 0x101bce000>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101bce1e0>
    // <conv.chunks.Comment object at 0x101bce270>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101bce570>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0xf7);
    sta(Sprite_Tilenumber, y);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x101bce990>
    // <conv.chunks.Comment object at 0x101bceb70>
    sta(((Sprite_Tilenumber) + (4)), y);
    JMP(ExJCGfx);
    JMP(JCoinGfxHandler);
}

int JCoinGfxHandler() {
    ldy(Misc_SprDataOffset, x);
    lda(Misc_State, x);
    cmp(0x2);
    BCS(DrawFloateyNumber_Coin);
    lda(Misc_Y_Position, x);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x101bcf050>
    // <conv.chunks.Comment object at 0x101bcf3b0>
    // <conv.chunks.Comment object at 0x101bcf500>
    // <conv.chunks.Comment object at 0x101bcf590>
    // <conv.chunks.Comment object at 0x101bcf740>
    // <conv.chunks.Comment object at 0x101bcf890>
    clc();
    adc(0x8);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x101bcfa70>
    // <conv.chunks.Comment object at 0x101bcfb00>
    // <conv.chunks.Comment object at 0x101bcfda0>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (4)), y);
    lda(FrameCounter);
    lsr();
    anda(0b11);
    tax();
    lda(offsetof(G, JumpingCoinTiles), x);
    iny();
    JSR(DumpTwoSpr);
    dey();
    // <conv.chunks.Comment object at 0x101bcffe0>
    // <conv.chunks.Comment object at 0x101bd4230>
    // <conv.chunks.Comment object at 0x101bd4380>
    // <conv.chunks.Comment object at 0x101bd4410>
    // <conv.chunks.Comment object at 0x101bd4560>
    // <conv.chunks.Comment object at 0x101bd45f0>
    // <conv.chunks.Comment object at 0x101bd4770>
    // <conv.chunks.Comment object at 0x101bd4800>
    // <conv.chunks.Comment object at 0x101bd4950>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101bd4a40>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // <conv.chunks.Comment object at 0x101bd4c80>
    // <conv.chunks.Comment object at 0x101bd4f20>
    // <conv.chunks.Comment object at 0x101bd5070>
    return 0;
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy(((Enemy_SprDataOffset) + (5)));
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x101bd5970>
    // <conv.chunks.Comment object at 0x101bd61b0>
    clc();
    adc(0x8);
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    ldx(PowerUpType);
    lda(offsetof(G, PowerUpAttributes), x);
    ora(((Enemy_SprAttrib) + (5)));
    sta(0x4);
    // <conv.chunks.Comment object at 0x101bd6360>
    // <conv.chunks.Comment object at 0x101bd64b0>
    // <conv.chunks.Comment object at 0x101bd6540>
    // <conv.chunks.Comment object at 0x101bd66f0>
    // <conv.chunks.Comment object at 0x101bd6780>
    // <conv.chunks.Comment object at 0x101bd6900>
    // <conv.chunks.Comment object at 0x101bd6a50>
    // <conv.chunks.Comment object at 0x101bd6c60>
    txa();
    pha();
    // <conv.chunks.Comment object at 0x101bd6e10>
    asl();
    asl();
    tax();
    // <conv.chunks.Comment object at 0x101bd6f60>
    // <conv.chunks.Comment object at 0x101bd7020>
    lda(0x1);
    sta(0x7);
    sta(0x3);
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda(offsetof(G, PowerUpGfxTable), x);
    // <conv.chunks.Comment object at 0x101bd7260>
    sta(0x0);
    lda(((offsetof(G, PowerUpGfxTable)) + (1)), x);
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BPL(PUpDrawLoop);
    ldy(((Enemy_SprDataOffset) + (5)));
    pla();
    BEQ(PUpOfs);
    // <conv.chunks.Comment object at 0x101bd7560>
    // <conv.chunks.Comment object at 0x101bd7860>
    // <conv.chunks.Comment object at 0x101bd79b0>
    // <conv.chunks.Comment object at 0x101bd7a40>
    // <conv.chunks.Comment object at 0x101bd7bc0>
    // <conv.chunks.Comment object at 0x101bd7dd0>
    // <conv.chunks.Comment object at 0x101bd7e60>
    cmp(0x3);
    BEQ(PUpOfs);
    sta(0x0);
    lda(FrameCounter);
    lsr();
    anda(0b11);
    ora(((Enemy_SprAttrib) + (5)));
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x101be0050>
    // <conv.chunks.Comment object at 0x101be0260>
    // <conv.chunks.Comment object at 0x101be02f0>
    // <conv.chunks.Comment object at 0x101be04a0>
    // <conv.chunks.Comment object at 0x101be0530>
    // <conv.chunks.Comment object at 0x101be0650>
    // <conv.chunks.Comment object at 0x101be0830>
    // <conv.chunks.Comment object at 0x101be0980>
    ldx(0x0);
    dex();
    BEQ(FlipPUpRightSide);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (12)), y);
    JMP(FlipPUpRightSide);
}

int FlipPUpRightSide() {
    lda(((Sprite_Attributes) + (4)), y);
    ora(0b1000000);
    // <conv.chunks.Comment object at 0x101be1490>
    sta(((Sprite_Attributes) + (4)), y);
    lda(((Sprite_Attributes) + (12)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    JMP(PUpOfs);
}

int PUpOfs() {
    // <conv.chunks.Comment object at 0x101be1970>
    // <conv.chunks.Comment object at 0x101be1a90>
    // <conv.chunks.Comment object at 0x101be1ca0>
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}

int EnemyGfxHandler() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101bf3f50>
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x101bfa2a0>
    // <conv.chunks.Comment object at 0x101bfa4e0>
    ldy(Enemy_SprDataOffset, x);
    sty(0xeb);
    // <conv.chunks.Comment object at 0x101bfa720>
    lda(0x0);
    sta(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x101bfa870>
    lda(Enemy_MovingDir, x);
    sta(0x3);
    // <conv.chunks.Comment object at 0x101bfab70>
    lda(Enemy_SprAttrib, x);
    sta(0x4);
    // <conv.chunks.Comment object at 0x101bfadb0>
    lda(Enemy_ID, x);
    cmp(PiranhaPlant);
    BNE(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x101bfafc0>
    // <conv.chunks.Comment object at 0x101bfb0e0>
    ldy(PiranhaPlant_Y_Speed, x);
    BMI(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x101bfb320>
    ldy(EnemyFrameTimer, x);
    BEQ(CheckForRetainerObj);
    return 0;
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x101bfb770>
    sta(0xed);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x101bfb8c0>
    tay();
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x101bfbb60>
    cmp(RetainerObject);
    BNE(CheckForBulletBillCV);
    ldy(0x0);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101bfbda0>
    // <conv.chunks.Comment object at 0x101bfbec0>
    // <conv.chunks.Comment object at 0x101bfbf50>
    sta(0x3);
    lda(0x15);
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp(BulletBill_CannonVar);
    BNE(CheckForJumpspring);
    dec(0x2);
    // <conv.chunks.Comment object at 0x101c08380>
    // <conv.chunks.Comment object at 0x101c084a0>
    // <conv.chunks.Comment object at 0x101c085f0>
    lda(0x3);
    ldy(EnemyFrameTimer, x);
    BEQ(SBBAt);
    ora(0b100000);
    JMP(SBBAt);
}

int SBBAt() {
    // <conv.chunks.Comment object at 0x101c08740>
    // <conv.chunks.Comment object at 0x101c08920>
    // <conv.chunks.Comment object at 0x101c08a70>
    // <conv.chunks.Comment object at 0x101c08b90>
    sta(0x4);
    ldy(0x0);
    sty(0xed);
    lda(0x8);
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp(JumpspringObject);
    // <conv.chunks.Comment object at 0x101c090a0>
    BNE(CheckForPodoboo);
    ldy(0x3);
    ldx(JumpspringAnimCtrl);
    lda(offsetof(G, JumpspringFrameOffsets), x);
    JMP(CheckForPodoboo);
}

int CheckForPodoboo() {
    sta(0xef);
    sty(0xec);
    ldx(ObjectOffset);
    cmp(0xc);
    BNE(CheckBowserGfxFlag);
    lda(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x101c096a0>
    // <conv.chunks.Comment object at 0x101c09670>
    // <conv.chunks.Comment object at 0x101c09850>
    // <conv.chunks.Comment object at 0x101c099d0>
    // <conv.chunks.Comment object at 0x101c09a60>
    // <conv.chunks.Comment object at 0x101c09c10>
    BMI(CheckBowserGfxFlag);
    inc(VerticalFlipFlag);
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x101c09fa0>
    BEQ(CheckForGoomba);
    ldy(0x16);
    // <conv.chunks.Comment object at 0x101c0a1b0>
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
    // <conv.chunks.Comment object at 0x101c0a6f0>
    cpy(Goomba);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x101c0a570>
    lda(Enemy_State, x);
    cmp(0x2);
    BCC(GmbaAnim);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x101c0ab40>
    // <conv.chunks.Comment object at 0x101c0abd0>
    // <conv.chunks.Comment object at 0x101c0ad80>
    stx(0xec);
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // <conv.chunks.Comment object at 0x101c0ae10>
    anda(0b100000);
    ora(TimerControl);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x101c0b0e0>
    // <conv.chunks.Comment object at 0x101c0b200>
    lda(FrameCounter);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x101c0b410>
    BNE(CheckBowserFront);
    lda(0x3);
    eor(0b11);
    sta(0x3);
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda(offsetof(G, EnemyAttributeData), y);
    ora(0x4);
    // <conv.chunks.Comment object at 0x101c0b830>
    // <conv.chunks.Comment object at 0x101c0bb00>
    sta(0x4);
    lda(offsetof(G, EnemyGfxTableOffsets), y);
    tax();
    ldy(0xec);
    // <conv.chunks.Comment object at 0x101c0bb90>
    // <conv.chunks.Comment object at 0x101c0be60>
    // <conv.chunks.Comment object at 0x101c0bf20>
    lda(BowserGfxFlag);
    BEQ(CheckForSpiny);
    // <conv.chunks.Comment object at 0x101c10140>
    cmp(0x1);
    BNE(CheckBowserRear);
    lda(BowserBodyControls);
    BPL(ChkFrontSte);
    ldx(0xde);
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // <conv.chunks.Comment object at 0x101c102c0>
    // <conv.chunks.Comment object at 0x101c10470>
    // <conv.chunks.Comment object at 0x101c10590>
    // <conv.chunks.Comment object at 0x101c106b0>
    // <conv.chunks.Comment object at 0x101c10740>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x101c108c0>
    BEQ(DrawBowser);
    JMP(FlipBowserOver);
}

int FlipBowserOver() {
    stx(VerticalFlipFlag);
    JMP(DrawBowser);
}

int DrawBowser() {
    JMP(DrawEnemyObject);
    JMP(CheckBowserRear);
}

int CheckBowserRear() {
    lda(BowserBodyControls);
    // <conv.chunks.Comment object at 0x101c10e00>
    anda(0x1);
    BEQ(ChkRearSte);
    ldx(0xe4);
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // <conv.chunks.Comment object at 0x101c10f80>
    // <conv.chunks.Comment object at 0x101c11130>
    // <conv.chunks.Comment object at 0x101c111c0>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x101c11340>
    BEQ(DrawBowser);
    lda(0x2);
    sec();
    // <conv.chunks.Comment object at 0x101c115e0>
    // <conv.chunks.Comment object at 0x101c115b0>
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
    // <conv.chunks.Comment object at 0x101c11ac0>
    // <conv.chunks.Comment object at 0x101c11b50>
    // <conv.chunks.Comment object at 0x101c11d00>
    // <conv.chunks.Comment object at 0x101c11d90>
    // <conv.chunks.Comment object at 0x101c11f70>
    lda(0x2);
    sta(0x3);
    // <conv.chunks.Comment object at 0x101c121b0>
    lda(0x5);
    sta(0xec);
    JMP(NotEgg);
}

int NotEgg() {
    // <conv.chunks.Comment object at 0x101c123c0>
    // <conv.chunks.Comment object at 0x101c12450>
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(0x90);
    BNE(CheckUpsideDownShell);
    // <conv.chunks.Comment object at 0x101c12660>
    // <conv.chunks.Comment object at 0x101c126f0>
    lda(0xed);
    anda(0b100000);
    BNE(NoLAFr);
    // <conv.chunks.Comment object at 0x101c128a0>
    // <conv.chunks.Comment object at 0x101c12ab0>
    lda(FrenzyEnemyTimer);
    cmp(0x10);
    BCS(NoLAFr);
    ldx(0x96);
    JMP(NoLAFr);
}

int NoLAFr() {
    // <conv.chunks.Comment object at 0x101c12cf0>
    // <conv.chunks.Comment object at 0x101c12d80>
    // <conv.chunks.Comment object at 0x101c12f60>
    // <conv.chunks.Comment object at 0x101c12ff0>
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}

int CheckUpsideDownShell() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101c13260>
    cmp(0x4);
    BCS(CheckRightSideUpShell);
    // <conv.chunks.Comment object at 0x101c133b0>
    cpy(0x2);
    BCC(CheckRightSideUpShell);
    ldx(0x5a);
    // <conv.chunks.Comment object at 0x101c135c0>
    // <conv.chunks.Comment object at 0x101c13770>
    ldy(0xef);
    cpy(BuzzyBeetle);
    // <conv.chunks.Comment object at 0x101c13800>
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
    // <conv.chunks.Comment object at 0x101c13e30>
    // <conv.chunks.Comment object at 0x101c13ec0>
    // <conv.chunks.Comment object at 0x101c13fb0>
    // <conv.chunks.Comment object at 0x101c1c1a0>
    // <conv.chunks.Comment object at 0x101c1c2f0>
    ldy(0xef);
    cpy(BuzzyBeetle);
    BEQ(CheckForDefdGoomba);
    ldx(0x66);
    inc(0x2);
    JMP(CheckForDefdGoomba);
}

int CheckForDefdGoomba() {
    cpy(Goomba);
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
    ldy(ObjectOffset);
    lda(0xef);
    // <conv.chunks.Comment object at 0x101c1d400>
    cmp(HammerBro);
    BNE(CheckForBloober);
    // <conv.chunks.Comment object at 0x101c1d5e0>
    lda(0xed);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101c1d700>
    anda(0b1000);
    BEQ(CheckDefeatedState);
    ldx(0xb4);
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(0x48);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101c1dd90>
    // <conv.chunks.Comment object at 0x101c1de20>
    lda(EnemyIntervalTimer, y);
    cmp(0x5);
    BCS(CheckDefeatedState);
    cpx(0x3c);
    BNE(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x101c1e150>
    // <conv.chunks.Comment object at 0x101c1e300>
    // <conv.chunks.Comment object at 0x101c1e390>
    cmp(0x1);
    BEQ(CheckDefeatedState);
    inc(0x2);
    // <conv.chunks.Comment object at 0x101c1e5a0>
    // <conv.chunks.Comment object at 0x101c1e780>
    inc(0x2);
    inc(0x2);
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101c1ebd0>
    cmp(Goomba);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x101c1eba0>
    cmp(0x8);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x101c1ef60>
    cmp(Podoboo);
    BEQ(CheckDefeatedState);
    cmp(0x18);
    // <conv.chunks.Comment object at 0x101c1f230>
    // <conv.chunks.Comment object at 0x101c1f350>
    BCS(CheckDefeatedState);
    ldy(0x0);
    cmp(0x15);
    BNE(CheckForSecondFrame);
    iny();
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x101c1f5c0>
    // <conv.chunks.Comment object at 0x101c1f6e0>
    // <conv.chunks.Comment object at 0x101c1f8c0>
    // <conv.chunks.Comment object at 0x101c1f950>
    cmp(World8);
    BCS(CheckDefeatedState);
    ldx(0xa2);
    lda(0x3);
    // <conv.chunks.Comment object at 0x101c1faa0>
    // <conv.chunks.Comment object at 0x101c1fcb0>
    // <conv.chunks.Comment object at 0x101c1fd40>
    sta(0xec);
    BNE(CheckDefeatedState);
    JMP(CheckForSecondFrame);
}

int CheckForSecondFrame() {
    lda(FrameCounter);
    anda(offsetof(G, EnemyAnimTimingBMask), y);
    BNE(CheckDefeatedState);
    JMP(CheckAnimationStop);
}

int CheckAnimationStop() {
    lda(0xed);
    anda(0b10100000);
    // <conv.chunks.Comment object at 0x101c28560>
    // <conv.chunks.Comment object at 0x101c285f0>
    ora(TimerControl);
    BNE(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x101c28860>
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
    // <conv.chunks.Comment object at 0x101c28ce0>
    // <conv.chunks.Comment object at 0x101c28d70>
    // <conv.chunks.Comment object at 0x101c28ef0>
    lda(0xef);
    cmp(0x4);
    BCC(DrawEnemyObject);
    // <conv.chunks.Comment object at 0x101c29010>
    // <conv.chunks.Comment object at 0x101c29190>
    ldy(0x1);
    sty(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x101c293a0>
    dey();
    sty(0xec);
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(0xeb);
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // <conv.chunks.Comment object at 0x101c29760>
    // <conv.chunks.Comment object at 0x101c297f0>
    // <conv.chunks.Comment object at 0x101c29970>
    JSR(DrawEnemyObjRow);
    ldx(ObjectOffset);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x101c29b80>
    // <conv.chunks.Comment object at 0x101c29ca0>
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
    lda(VerticalFlipFlag);
    BEQ(CheckForESymmetry);
    lda(Sprite_Attributes, y);
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x101c2a2a0>
    // <conv.chunks.Comment object at 0x101c2a3c0>
    // <conv.chunks.Comment object at 0x101c2a4e0>
    // <conv.chunks.Comment object at 0x101c2a630>
    iny();
    iny();
    JSR(DumpSixSpr);
    // <conv.chunks.Comment object at 0x101c2a810>
    // <conv.chunks.Comment object at 0x101c2a8a0>
    dey();
    dey();
    // <conv.chunks.Comment object at 0x101c2aa80>
    tya();
    tax();
    // <conv.chunks.Comment object at 0x101c2abd0>
    lda(0xef);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x101c2ac60>
    BEQ(FlipEnemyVertically);
    cmp(Lakitu);
    BEQ(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x101c2af60>
    // <conv.chunks.Comment object at 0x101c2afc0>
    cmp(0x15);
    BCS(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x101c2b230>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda(Sprite_Tilenumber, x);
    pha();
    // <conv.chunks.Comment object at 0x101c2b710>
    // <conv.chunks.Comment object at 0x101c2b890>
    lda(((Sprite_Tilenumber) + (4)), x);
    pha();
    lda(((Sprite_Tilenumber) + (16)), y);
    sta(Sprite_Tilenumber, x);
    // <conv.chunks.Comment object at 0x101c2bb90>
    // <conv.chunks.Comment object at 0x101c2bda0>
    lda(((Sprite_Tilenumber) + (20)), y);
    sta(((Sprite_Tilenumber) + (4)), x);
    pla();
    sta(((Sprite_Tilenumber) + (20)), y);
    // <conv.chunks.Comment object at 0x101c30320>
    // <conv.chunks.Comment object at 0x101c303b0>
    pla();
    sta(((Sprite_Tilenumber) + (16)), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda(BowserGfxFlag);
    BNE(SkipToOffScrChk);
    // <conv.chunks.Comment object at 0x101c30860>
    // <conv.chunks.Comment object at 0x101c30980>
    lda(0xef);
    ldx(0xec);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x101c30b30>
    // <conv.chunks.Comment object at 0x101c30c50>
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // <conv.chunks.Comment object at 0x101c30ef0>
    // <conv.chunks.Comment object at 0x101c31010>
    cmp(Bloober);
    BEQ(MirrorEnemyGfx);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x101c312b0>
    BEQ(MirrorEnemyGfx);
    cmp(Podoboo);
    BEQ(MirrorEnemyGfx);
    cmp(Spiny);
    BNE(ESRtnr);
    cpx(0x5);
    BNE(CheckToMirrorLakitu);
    JMP(ESRtnr);
}

int ESRtnr() {
    // <conv.chunks.Comment object at 0x101c314c0>
    // <conv.chunks.Comment object at 0x101c31610>
    // <conv.chunks.Comment object at 0x101c31730>
    // <conv.chunks.Comment object at 0x101c317c0>
    // <conv.chunks.Comment object at 0x101c319d0>
    // <conv.chunks.Comment object at 0x101c31a60>
    // <conv.chunks.Comment object at 0x101c31c10>
    cmp(0x15);
    BNE(SpnySC);
    lda(0x42);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SpnySC);
}

int SpnySC() {
    // <conv.chunks.Comment object at 0x101c31eb0>
    // <conv.chunks.Comment object at 0x101c31f40>
    // <conv.chunks.Comment object at 0x101c321e0>
    cpx(0x2);
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x101c32480>
    BNE(CheckToMirrorLakitu);
    lda(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101c32690>
    anda(0b10100011);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x101c328d0>
    // <conv.chunks.Comment object at 0x101c32a20>
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    cpx(0x5);
    BNE(EggExc);
    ora(0b10000000);
    JMP(EggExc);
}

int EggExc() {
    // <conv.chunks.Comment object at 0x101c32e10>
    // <conv.chunks.Comment object at 0x101c32f30>
    // <conv.chunks.Comment object at 0x101c32fc0>
    // <conv.chunks.Comment object at 0x101c331a0>
    // <conv.chunks.Comment object at 0x101c332c0>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x101c33530>
    sta(((Sprite_Attributes) + (20)), y);
    cpx(0x4);
    BNE(CheckToMirrorLakitu);
    lda(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x101c33920>
    // <conv.chunks.Comment object at 0x101c339b0>
    // <conv.chunks.Comment object at 0x101c33b60>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x101c33e60>
    // <conv.chunks.Comment object at 0x101c380b0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101c38830>
    cmp(Lakitu);
    BNE(CheckToMirrorJSpring);
    // <conv.chunks.Comment object at 0x101c38800>
    lda(VerticalFlipFlag);
    BNE(NVFLak);
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b10000001);
    // <conv.chunks.Comment object at 0x101c38c50>
    // <conv.chunks.Comment object at 0x101c38da0>
    // <conv.chunks.Comment object at 0x101c38fb0>
    sta(((Sprite_Attributes) + (16)), y);
    lda(((Sprite_Attributes) + (20)), y);
    ora(0b1000001);
    // <conv.chunks.Comment object at 0x101c392b0>
    // <conv.chunks.Comment object at 0x101c394c0>
    sta(((Sprite_Attributes) + (20)), y);
    ldx(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x101c397c0>
    cpx(0x10);
    BCS(SprObjectOffscrChk);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x101c39940>
    // <conv.chunks.Comment object at 0x101c39af0>
    anda(0b10000001);
    sta(((Sprite_Attributes) + (8)), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // <conv.chunks.Comment object at 0x101c39df0>
    // <conv.chunks.Comment object at 0x101c3a000>
    // <conv.chunks.Comment object at 0x101c3a120>
    lda(Sprite_Attributes, y);
    anda(0b10000001);
    sta(Sprite_Attributes, y);
    lda(((Sprite_Attributes) + (4)), y);
    ora(0b1000001);
    sta(((Sprite_Attributes) + (4)), y);
    JMP(CheckToMirrorJSpring);
}

int CheckToMirrorJSpring() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x101c3aab0>
    cmp(0x18);
    BCC(SprObjectOffscrChk);
    // <conv.chunks.Comment object at 0x101c3ac00>
    lda(0x82);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x101c3ae10>
    // <conv.chunks.Comment object at 0x101c3b0b0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx(ObjectOffset);
    lda(Enemy_OffscreenBits);
    // <conv.chunks.Comment object at 0x101c3b800>
    // <conv.chunks.Comment object at 0x101c3b920>
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
    // <conv.chunks.Comment object at 0x101c3bb00>
    // <conv.chunks.Comment object at 0x101c3bbc0>
    // <conv.chunks.Comment object at 0x101c3bc80>
    // <conv.chunks.Comment object at 0x101c3bd10>
    // <conv.chunks.Comment object at 0x101c3be60>
    // <conv.chunks.Comment object at 0x101c3bef0>
    // <conv.chunks.Comment object at 0x101c400e0>
    pla();
    lsr();
    pha();
    BCC(Row3C);
    lda(0x0);
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}

int Row3C() {
    // <conv.chunks.Comment object at 0x101c40230>
    // <conv.chunks.Comment object at 0x101c402f0>
    // <conv.chunks.Comment object at 0x101c40380>
    // <conv.chunks.Comment object at 0x101c404d0>
    // <conv.chunks.Comment object at 0x101c40560>
    // <conv.chunks.Comment object at 0x101c40710>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x101c40860>
    lsr();
    pha();
    BCC(Row23C);
    lda(0x10);
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}

int Row23C() {
    // <conv.chunks.Comment object at 0x101c409b0>
    // <conv.chunks.Comment object at 0x101c40a40>
    // <conv.chunks.Comment object at 0x101c40b90>
    // <conv.chunks.Comment object at 0x101c40c20>
    // <conv.chunks.Comment object at 0x101c40dd0>
    pla();
    lsr();
    pha();
    // <conv.chunks.Comment object at 0x101c40f20>
    // <conv.chunks.Comment object at 0x101c40fe0>
    BCC(AllRowC);
    lda(0x8);
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}

int AllRowC() {
    // <conv.chunks.Comment object at 0x101c41190>
    // <conv.chunks.Comment object at 0x101c41220>
    // <conv.chunks.Comment object at 0x101c413d0>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x101c41520>
    BCC(ExEGHandler);
    JSR(MoveESprRowOffscreen);
    // <conv.chunks.Comment object at 0x101c416a0>
    lda(Enemy_ID, x);
    cmp(Podoboo);
    BEQ(ExEGHandler);
    lda(Enemy_Y_HighPos, x);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101c418e0>
    // <conv.chunks.Comment object at 0x101c41a30>
    // <conv.chunks.Comment object at 0x101c41b50>
    // <conv.chunks.Comment object at 0x101c41ca0>
    BNE(ExEGHandler);
    JSR(EraseEnemyObject);
    JMP(ExEGHandler);
}

int ExEGHandler() {
    return 0;
    JMP(DrawEnemyObjRow);
}

int DrawEnemyObjRow() {
    lda(offsetof(G, EnemyGraphicsTable), x);
    // <conv.chunks.Comment object at 0x101c420c0>
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
    // <conv.chunks.Comment object at 0x101c42780>
    adc(Enemy_SprDataOffset, x);
    tay();
    // <conv.chunks.Comment object at 0x101c42960>
    lda(0xf8);
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // <conv.chunks.Comment object at 0x101c42c60>
    adc(Enemy_SprDataOffset, x);
    tay();
    JSR(MoveColOffscreen);
    sta(((Sprite_Data) + (16)), y);
    // <conv.chunks.Comment object at 0x101c42e40>
    // <conv.chunks.Comment object at 0x101c42ed0>
    // <conv.chunks.Comment object at 0x101c42ff0>
    return 0;
    JMP(DrawBlock);
}

int DrawBlock() {
    lda(Block_Rel_YPos);
    sta(0x2);
    lda(Block_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x101c43470>
    // <conv.chunks.Comment object at 0x101c437d0>
    // <conv.chunks.Comment object at 0x101c43860>
    // <conv.chunks.Comment object at 0x101c43a10>
    lda(0x3);
    sta(0x4);
    // <conv.chunks.Comment object at 0x101c43c20>
    lsr();
    sta(0x3);
    ldy(Block_SprDataOffset, x);
    ldx(0x0);
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // <conv.chunks.Comment object at 0x101c43dd0>
    // <conv.chunks.Comment object at 0x101c43e60>
    // <conv.chunks.Comment object at 0x101c54050>
    // <conv.chunks.Comment object at 0x101c540e0>
    lda(offsetof(G, DefaultBlockObjTiles), x);
    sta(0x0);
    lda(((offsetof(G, DefaultBlockObjTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    cpx(0x4);
    BNE(DBlkLoop);
    ldx(ObjectOffset);
    ldy(Block_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x101c54320>
    // <conv.chunks.Comment object at 0x101c543b0>
    // <conv.chunks.Comment object at 0x101c54620>
    // <conv.chunks.Comment object at 0x101c54740>
    // <conv.chunks.Comment object at 0x101c547d0>
    // <conv.chunks.Comment object at 0x101c54980>
    // <conv.chunks.Comment object at 0x101c54aa0>
    lda(AreaType);
    cmp(0x1);
    BEQ(ChkRep);
    // <conv.chunks.Comment object at 0x101c54ce0>
    // <conv.chunks.Comment object at 0x101c54d70>
    lda(0x86);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (4)), y);
    JMP(ChkRep);
}

int ChkRep() {
    // <conv.chunks.Comment object at 0x101c54fb0>
    // <conv.chunks.Comment object at 0x101c55190>
    // <conv.chunks.Comment object at 0x101c553a0>
    lda(Block_Metatile, x);
    cmp(0xc4);
    BNE(BlkOffscr);
    lda(0x87);
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(0x3);
    // <conv.chunks.Comment object at 0x101c55550>
    // <conv.chunks.Comment object at 0x101c555e0>
    // <conv.chunks.Comment object at 0x101c55790>
    // <conv.chunks.Comment object at 0x101c558e0>
    // <conv.chunks.Comment object at 0x101c55970>
    // <conv.chunks.Comment object at 0x101c55ac0>
    // <conv.chunks.Comment object at 0x101c55b50>
    ldx(AreaType);
    dex();
    BEQ(SetBFlip);
    lsr();
    JMP(SetBFlip);
}

int SetBFlip() {
    // <conv.chunks.Comment object at 0x101c55d90>
    // <conv.chunks.Comment object at 0x101c55e20>
    // <conv.chunks.Comment object at 0x101c55f70>
    // <conv.chunks.Comment object at 0x101c56000>
    ldx(ObjectOffset);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101c56150>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x101c56390>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x101c56690>
    anda(0b10000011);
    sta(((Sprite_Attributes) + (8)), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // <conv.chunks.Comment object at 0x101c56990>
    // <conv.chunks.Comment object at 0x101c56ba0>
    lda(Block_OffscreenBits);
    pha();
    anda(0b100);
    BEQ(PullOfsB);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101c56d20>
    // <conv.chunks.Comment object at 0x101c56db0>
    // <conv.chunks.Comment object at 0x101c56ed0>
    // <conv.chunks.Comment object at 0x101c56ff0>
    // <conv.chunks.Comment object at 0x101c57080>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // <conv.chunks.Comment object at 0x101c57500>
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // <conv.chunks.Comment object at 0x101c575f0>
    anda(0b1000);
    BEQ(ExDBlk);
    JMP(MoveColOffscreen);
}

int MoveColOffscreen() {
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(ExDBlk);
}

int ExDBlk() {
    return 0;
    JMP(DrawBrickChunks);
}

int DrawBrickChunks() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x101c57e60>
    // <conv.chunks.Comment object at 0x101c57ec0>
    sta(0x0);
    lda(0x75);
    // <conv.chunks.Comment object at 0x101c57f50>
    ldy(GameEngineSubroutine);
    cpy(0x5);
    BEQ(DChunks);
    lda(0x3);
    // <conv.chunks.Comment object at 0x101c5c320>
    // <conv.chunks.Comment object at 0x101c5c3b0>
    // <conv.chunks.Comment object at 0x101c5c590>
    sta(0x0);
    lda(0x84);
    JMP(DChunks);
}

int DChunks() {
    // <conv.chunks.Comment object at 0x101c5c620>
    // <conv.chunks.Comment object at 0x101c5c830>
    ldy(Block_SprDataOffset, x);
    iny();
    JSR(DumpFourSpr);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x101c5caa0>
    // <conv.chunks.Comment object at 0x101c5cb30>
    // <conv.chunks.Comment object at 0x101c5cc50>
    asl();
    asl();
    asl();
    // <conv.chunks.Comment object at 0x101c5cec0>
    asl();
    anda(0xc0);
    ora(0x0);
    iny();
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x101c5cfe0>
    // <conv.chunks.Comment object at 0x101c5d130>
    // <conv.chunks.Comment object at 0x101c5d070>
    // <conv.chunks.Comment object at 0x101c5d2e0>
    dey();
    dey();
    lda(Block_Rel_YPos);
    JSR(DumpTwoSpr);
    lda(Block_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x101c5d4c0>
    // <conv.chunks.Comment object at 0x101c5d550>
    // <conv.chunks.Comment object at 0x101c5d670>
    // <conv.chunks.Comment object at 0x101c5d790>
    // <conv.chunks.Comment object at 0x101c5d8b0>
    // <conv.chunks.Comment object at 0x101c5da00>
    sec();
    sbc(ScreenLeft_X_Pos);
    sta(0x0);
    // <conv.chunks.Comment object at 0x101c5dbe0>
    // <conv.chunks.Comment object at 0x101c5dd30>
    sec();
    sbc(Block_Rel_XPos);
    adc(0x0);
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    lda(((Block_Rel_YPos) + (1)));
    // <conv.chunks.Comment object at 0x101c5deb0>
    // <conv.chunks.Comment object at 0x101c5e000>
    // <conv.chunks.Comment object at 0x101c5e090>
    // <conv.chunks.Comment object at 0x101c5e180>
    // <conv.chunks.Comment object at 0x101c5e420>
    sta(((Sprite_Y_Position) + (8)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(((Block_Rel_XPos) + (1)));
    sta(((Sprite_X_Position) + (8)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101c5e7e0>
    // <conv.chunks.Comment object at 0x101c5e9f0>
    // <conv.chunks.Comment object at 0x101c5ebd0>
    // <conv.chunks.Comment object at 0x101c5ee10>
    sec();
    sbc(((Block_Rel_XPos) + (1)));
    adc(0x0);
    adc(0x6);
    sta(((Sprite_X_Position) + (12)), y);
    lda(Block_OffscreenBits);
    JSR(ChkLeftCo);
    lda(Block_OffscreenBits);
    asl();
    BCC(ChnkOfs);
    // <conv.chunks.Comment object at 0x101c5ef90>
    // <conv.chunks.Comment object at 0x101c5f1a0>
    // <conv.chunks.Comment object at 0x101c5f230>
    // <conv.chunks.Comment object at 0x101c5f320>
    // <conv.chunks.Comment object at 0x101c5f5c0>
    // <conv.chunks.Comment object at 0x101c5f6e0>
    // <conv.chunks.Comment object at 0x101c5f800>
    // <conv.chunks.Comment object at 0x101c5f950>
    // <conv.chunks.Comment object at 0x101c5f9e0>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // <conv.chunks.Comment object at 0x101c5fb90>
    // <conv.chunks.Comment object at 0x101c5fd40>
    lda(0x0);
    BPL(ExBCDr);
    lda(Sprite_X_Position, y);
    cmp(((Sprite_X_Position) + (4)), y);
    BCC(ExBCDr);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x101c5fe60>
    // <conv.chunks.Comment object at 0x101c68050>
    // <conv.chunks.Comment object at 0x101c681a0>
    // <conv.chunks.Comment object at 0x101c683b0>
    // <conv.chunks.Comment object at 0x101c68500>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // <conv.chunks.Comment object at 0x101c68a10>
    return 0;
    JMP(DrawFireball);
}

int DrawFireball() {
    ldy(FBall_SprDataOffset, x);
    lda(Fireball_Rel_YPos);
    sta(Sprite_Y_Position, y);
    lda(Fireball_Rel_XPos);
    sta(Sprite_X_Position, y);
    JMP(DrawFirebar);
}

int DrawFirebar() {
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x101c691f0>
    // <conv.chunks.Comment object at 0x101c69340>
    lsr();
    pha();
    anda(0x1);
    eor(0x64);
    sta(Sprite_Tilenumber, y);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x101c69490>
    // <conv.chunks.Comment object at 0x101c69520>
    // <conv.chunks.Comment object at 0x101c695b0>
    // <conv.chunks.Comment object at 0x101c696d0>
    // <conv.chunks.Comment object at 0x101c698e0>
    // <conv.chunks.Comment object at 0x101c699a0>
    lsr();
    lda(0x2);
    BCC(FireA);
    ora(0b11000000);
    JMP(FireA);
}

int FireA() {
    // <conv.chunks.Comment object at 0x101c69ac0>
    // <conv.chunks.Comment object at 0x101c69b50>
    // <conv.chunks.Comment object at 0x101c69d30>
    // <conv.chunks.Comment object at 0x101c69e50>
    sta(Sprite_Attributes, y);
    return 0;
    JMP(DrawExplosion_Fireball);
}

int DrawExplosion_Fireball() {
    ldy(Alt_SprDataOffset, x);
    lda(Fireball_State, x);
    inc(Fireball_State, x);
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
    ldx(ObjectOffset);
    lda(Fireball_Rel_YPos);
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x101c6ab40>
    // <conv.chunks.Comment object at 0x101c6abd0>
    // <conv.chunks.Comment object at 0x101c6ad50>
    // <conv.chunks.Comment object at 0x101c6ade0>
    // <conv.chunks.Comment object at 0x101c6af30>
    // <conv.chunks.Comment object at 0x101c6afc0>
    // <conv.chunks.Comment object at 0x101c6b0e0>
    // <conv.chunks.Comment object at 0x101c6b230>
    // <conv.chunks.Comment object at 0x101c6b2c0>
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (8)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101c6b710>
    // <conv.chunks.Comment object at 0x101c6b7a0>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(Fireball_Rel_XPos);
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x101c6bc80>
    // <conv.chunks.Comment object at 0x101c6bdd0>
    // <conv.chunks.Comment object at 0x101c6be60>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (4)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101c742f0>
    // <conv.chunks.Comment object at 0x101c74380>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (12)), y);
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101c74860>
    // <conv.chunks.Comment object at 0x101c748f0>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x101c74b30>
    lda(0x42);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x101c74e30>
    lda(0xc2);
    sta(((Sprite_Attributes) + (12)), y);
    return 0;
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101c754c0>
    sta(Fireball_State, x);
    return 0;
    JMP(DrawSmallPlatform);
}

int DrawSmallPlatform() {
    ldy(Enemy_SprDataOffset, x);
    lda(0x5b);
    iny();
    JSR(DumpSixSpr);
    iny();
    lda(0x2);
    JSR(DumpSixSpr);
    dey();
    // <conv.chunks.Comment object at 0x101c757f0>
    // <conv.chunks.Comment object at 0x101c75940>
    // <conv.chunks.Comment object at 0x101c75a90>
    // <conv.chunks.Comment object at 0x101c75b20>
    // <conv.chunks.Comment object at 0x101c75c70>
    // <conv.chunks.Comment object at 0x101c75d00>
    // <conv.chunks.Comment object at 0x101c75d90>
    // <conv.chunks.Comment object at 0x101c75f70>
    dey();
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x101c76090>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x101c762d0>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101c76570>
    // <conv.chunks.Comment object at 0x101c76600>
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x101c76b10>
    // <conv.chunks.Comment object at 0x101c76ba0>
    sta(((Sprite_X_Position) + (20)), y);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x101c77020>
    tax();
    pha();
    cpx(0x20);
    BCS(TopSP);
    lda(0xf8);
    JMP(TopSP);
}

int TopSP() {
    // <conv.chunks.Comment object at 0x101c77230>
    // <conv.chunks.Comment object at 0x101c772c0>
    // <conv.chunks.Comment object at 0x101c77350>
    // <conv.chunks.Comment object at 0x101c77530>
    // <conv.chunks.Comment object at 0x101c775c0>
    JSR(DumpThreeSpr);
    pla();
    // <conv.chunks.Comment object at 0x101c77800>
    clc();
    adc(0x80);
    // <conv.chunks.Comment object at 0x101c77920>
    tax();
    cpx(0x20);
    BCS(BotSP);
    lda(0xf8);
    JMP(BotSP);
}

int BotSP() {
    // <conv.chunks.Comment object at 0x101c77ad0>
    // <conv.chunks.Comment object at 0x101c77b60>
    // <conv.chunks.Comment object at 0x101c77d40>
    // <conv.chunks.Comment object at 0x101c77dd0>
    sta(((Sprite_Y_Position) + (12)), y);
    sta(((Sprite_Y_Position) + (16)), y);
    // <conv.chunks.Comment object at 0x101c7c110>
    sta(((Sprite_Y_Position) + (20)), y);
    lda(Enemy_OffscreenBits);
    pha();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x101c7c500>
    // <conv.chunks.Comment object at 0x101c7c650>
    // <conv.chunks.Comment object at 0x101c7c6e0>
    BEQ(SOfs);
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x101c7c920>
    // <conv.chunks.Comment object at 0x101c7c9b0>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SOfs);
}

int SOfs() {
    // <conv.chunks.Comment object at 0x101c7cd70>
    pla();
    pha();
    anda(0b100);
    // <conv.chunks.Comment object at 0x101c7cf20>
    BEQ(SOfs2);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101c7d160>
    // <conv.chunks.Comment object at 0x101c7d1f0>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SOfs2);
}

int SOfs2() {
    // <conv.chunks.Comment object at 0x101c7d670>
    pla();
    anda(0b10);
    // <conv.chunks.Comment object at 0x101c7d790>
    BEQ(ExSPl);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x101c7d9d0>
    // <conv.chunks.Comment object at 0x101c7da60>
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(ExSPl);
}

int ExSPl() {
    // <conv.chunks.Comment object at 0x101c7dee0>
    ldx(ObjectOffset);
    return 0;
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x101c7e150>
    // <conv.chunks.Comment object at 0x101c7e2a0>
    BNE(ExDBub);
    lda(Bubble_OffscreenBits);
    // <conv.chunks.Comment object at 0x101c7e450>
    anda(0b1000);
    BNE(ExDBub);
    ldy(Bubble_SprDataOffset, x);
    lda(Bubble_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Bubble_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x101c7e660>
    // <conv.chunks.Comment object at 0x101c7e7b0>
    // <conv.chunks.Comment object at 0x101c7e900>
    // <conv.chunks.Comment object at 0x101c7ea20>
    // <conv.chunks.Comment object at 0x101c7eb70>
    // <conv.chunks.Comment object at 0x101c7ec90>
    lda(0x74);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x101c7ee40>
    lda(0x2);
    sta(Sprite_Attributes, y);
    JMP(ExDBub);
}

int ExDBub() {
    // <conv.chunks.Comment object at 0x101c7f080>
    // <conv.chunks.Comment object at 0x101c7f290>
    return 0;
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda(InjuryTimer);
    BEQ(CntPl);
    // <conv.chunks.Comment object at 0x101c8eea0>
    // <conv.chunks.Comment object at 0x101c8fda0>
    lda(FrameCounter);
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // <conv.chunks.Comment object at 0x101c98050>
    // <conv.chunks.Comment object at 0x101c980e0>
    // <conv.chunks.Comment object at 0x101c98230>
    lda(GameEngineSubroutine);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x101c983b0>
    BEQ(PlayerKilled);
    lda(PlayerChangeSizeFlag);
    BNE(DoChangeSize);
    ldy(SwimmingFlag);
    BEQ(FindPlayerAction);
    // <conv.chunks.Comment object at 0x101c985c0>
    // <conv.chunks.Comment object at 0x101c986e0>
    // <conv.chunks.Comment object at 0x101c98800>
    // <conv.chunks.Comment object at 0x101c98920>
    lda(Player_State);
    cmp(0x0);
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // <conv.chunks.Comment object at 0x101c98b30>
    // <conv.chunks.Comment object at 0x101c98bc0>
    // <conv.chunks.Comment object at 0x101c98d70>
    lda(FrameCounter);
    anda(0b100);
    BNE(ExPGH);
    tax();
    ldy(Player_SprDataOffset);
    lda(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x101c98f80>
    // <conv.chunks.Comment object at 0x101c990a0>
    // <conv.chunks.Comment object at 0x101c99220>
    // <conv.chunks.Comment object at 0x101c992b0>
    // <conv.chunks.Comment object at 0x101c993d0>
    lsr();
    BCS(SwimKT);
    // <conv.chunks.Comment object at 0x101c99580>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x101c99790>
    iny();
    iny();
    JMP(SwimKT);
}

int SwimKT() {
    // <conv.chunks.Comment object at 0x101c99940>
    lda(PlayerSize);
    BEQ(BigKTS);
    lda(((Sprite_Tilenumber) + (24)), y);
    cmp(SwimTileRepOffset);
    BEQ(ExPGH);
    inx();
    JMP(BigKTS);
}

int BigKTS() {
    // <conv.chunks.Comment object at 0x101c99ac0>
    // <conv.chunks.Comment object at 0x101c99c10>
    // <conv.chunks.Comment object at 0x101c99e20>
    // <conv.chunks.Comment object at 0x101c99f40>
    // <conv.chunks.Comment object at 0x101c9a0c0>
    // <conv.chunks.Comment object at 0x101c9a150>
    lda(offsetof(G, SwimKickTileNum), x);
    sta(((Sprite_Tilenumber) + (24)), y);
    JMP(ExPGH);
}

int ExPGH() {
    // <conv.chunks.Comment object at 0x101c9a300>
    // <conv.chunks.Comment object at 0x101c9a510>
    return 0;
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
    sta(PlayerGfxOffset);
    // <conv.chunks.Comment object at 0x101c9ade0>
    lda(0x4);
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // <conv.chunks.Comment object at 0x101c9af60>
    // <conv.chunks.Comment object at 0x101c9b110>
    lda(FireballThrowingTimer);
    BEQ(PlayerOffscreenChk);
    ldy(0x0);
    lda(PlayerAnimTimer);
    cmp(FireballThrowingTimer);
    sty(FireballThrowingTimer);
    BCS(PlayerOffscreenChk);
    sta(FireballThrowingTimer);
    ldy(0x7);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    sta(PlayerGfxOffset);
    ldy(0x4);
    // <conv.chunks.Comment object at 0x101c9b320>
    // <conv.chunks.Comment object at 0x101c9b440>
    // <conv.chunks.Comment object at 0x101c9b4d0>
    // <conv.chunks.Comment object at 0x101c9b680>
    // <conv.chunks.Comment object at 0x101c9b7a0>
    // <conv.chunks.Comment object at 0x101c9b8c0>
    // <conv.chunks.Comment object at 0x101c9b9e0>
    // <conv.chunks.Comment object at 0x101c9bb00>
    // <conv.chunks.Comment object at 0x101c9bb90>
    // <conv.chunks.Comment object at 0x101c9bd70>
    // <conv.chunks.Comment object at 0x101c9be90>
    lda(Player_X_Speed);
    ora(Left_Right_Buttons);
    BEQ(SUpdR);
    dey();
    JMP(SUpdR);
}

int SUpdR() {
    // <conv.chunks.Comment object at 0x101ca00e0>
    // <conv.chunks.Comment object at 0x101ca0200>
    // <conv.chunks.Comment object at 0x101ca0380>
    // <conv.chunks.Comment object at 0x101ca0410>
    tya();
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}

int PlayerOffscreenChk() {
    lda(Player_OffscreenBits);
    // <conv.chunks.Comment object at 0x101ca0680>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x101ca0860>
    lsr();
    lsr();
    sta(0x0);
    ldx(0x3);
    lda(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x101ca0a40>
    // <conv.chunks.Comment object at 0x101ca0ad0>
    // <conv.chunks.Comment object at 0x101ca0bc0>
    clc();
    adc(0x18);
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // <conv.chunks.Comment object at 0x101ca0e00>
    // <conv.chunks.Comment object at 0x101ca0f50>
    // <conv.chunks.Comment object at 0x101ca0fe0>
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
    // <conv.chunks.Comment object at 0x101ca1580>
    // <conv.chunks.Comment object at 0x101ca1610>
    tay();
    dex();
    BPL(PROfsLoop);
    return 0;
    JMP(DrawPlayer_Intermediate);
}

int DrawPlayer_Intermediate() {
    ldx(0x5);
    JMP(PIntLoop);
}

int PIntLoop() {
    // <conv.chunks.Comment object at 0x101ca1b20>
    // <conv.chunks.Comment object at 0x101ca1bb0>
    lda(offsetof(G, IntermediatePlayerData), x);
    sta(0x2, x);
    // <conv.chunks.Comment object at 0x101ca20f0>
    dex();
    BPL(PIntLoop);
    ldx(0xb8);
    ldy(0x4);
    JSR(DrawPlayerLoop);
    lda(((Sprite_Attributes) + (36)));
    ora(0b1000000);
    sta(((Sprite_Attributes) + (32)));
    // <conv.chunks.Comment object at 0x101ca22d0>
    // <conv.chunks.Comment object at 0x101ca23f0>
    // <conv.chunks.Comment object at 0x101ca2480>
    // <conv.chunks.Comment object at 0x101ca25a0>
    // <conv.chunks.Comment object at 0x101ca2750>
    // <conv.chunks.Comment object at 0x101ca2930>
    // <conv.chunks.Comment object at 0x101ca2a50>
    return 0;
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(0x7);
    // <conv.chunks.Comment object at 0x101ca2cf0>
    // <conv.chunks.Comment object at 0x101ca2d50>
    // <conv.chunks.Comment object at 0x101ca2db0>
    // <conv.chunks.Comment object at 0x101ca2e10>
    // <conv.chunks.Comment object at 0x101ca2ea0>
    lda(Player_Rel_XPos);
    sta(Player_Pos_ForScroll);
    sta(0x5);
    // <conv.chunks.Comment object at 0x101ca3080>
    // <conv.chunks.Comment object at 0x101ca31d0>
    lda(Player_Rel_YPos);
    sta(0x2);
    // <conv.chunks.Comment object at 0x101ca33e0>
    lda(PlayerFacingDir);
    sta(0x3);
    // <conv.chunks.Comment object at 0x101ca35f0>
    lda(Player_SprAttrib);
    sta(0x4);
    ldx(PlayerGfxOffset);
    ldy(Player_SprDataOffset);
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda(offsetof(G, PlayerGraphicsTable), x);
    // <conv.chunks.Comment object at 0x101ca3b60>
    sta(0x0);
    lda(((offsetof(G, PlayerGraphicsTable)) + (1)), x);
    // <conv.chunks.Comment object at 0x101ca3cb0>
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BNE(DrawPlayerLoop);
    // <conv.chunks.Comment object at 0x101cac110>
    // <conv.chunks.Comment object at 0x101cac1a0>
    return 0;
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x101cac3e0>
    cmp(0x3);
    BEQ(ActionClimbing);
    // <conv.chunks.Comment object at 0x101cac560>
    cmp(0x2);
    BEQ(ActionFalling);
    // <conv.chunks.Comment object at 0x101cac770>
    cmp(0x1);
    BNE(ProcOnGroundActs);
    // <conv.chunks.Comment object at 0x101cac980>
    lda(SwimmingFlag);
    BNE(ActionSwimming);
    ldy(0x6);
    lda(CrouchingFlag);
    BNE(NonAnimatedActs);
    ldy(0x0);
    JMP(NonAnimatedActs);
    JMP(ProcOnGroundActs);
}

int ProcOnGroundActs() {
    ldy(0x6);
    lda(CrouchingFlag);
    BNE(NonAnimatedActs);
    ldy(0x2);
    lda(Player_X_Speed);
    ora(Left_Right_Buttons);
    BEQ(NonAnimatedActs);
    lda(Player_XSpeedAbsolute);
    // <conv.chunks.Comment object at 0x101cad310>
    // <conv.chunks.Comment object at 0x101cad3a0>
    // <conv.chunks.Comment object at 0x101cad550>
    // <conv.chunks.Comment object at 0x101cad670>
    // <conv.chunks.Comment object at 0x101cad700>
    // <conv.chunks.Comment object at 0x101cad8b0>
    // <conv.chunks.Comment object at 0x101cad9d0>
    // <conv.chunks.Comment object at 0x101cadaf0>
    cmp(0x9);
    BCC(ActionWalkRun);
    lda(Player_MovingDir);
    anda(PlayerFacingDir);
    BNE(ActionWalkRun);
    iny();
    JMP(NonAnimatedActs);
}

int NonAnimatedActs() {
    JSR(GetGfxOffsetAdder);
    // <conv.chunks.Comment object at 0x101cae270>
    lda(0x0);
    sta(PlayerAnimCtrl);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    // <conv.chunks.Comment object at 0x101cae3f0>
    // <conv.chunks.Comment object at 0x101cae5a0>
    return 0;
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
    lda(Player_Y_Speed);
    BEQ(NonAnimatedActs);
    JSR(GetGfxOffsetAdder);
    JMP(ThreeFrameExtent);
    JMP(ActionSwimming);
}

int ActionSwimming() {
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101caf4a0>
    JSR(GetGfxOffsetAdder);
    lda(JumpSwimTimer);
    ora(PlayerAnimCtrl);
    BNE(FourFrameExtent);
    // <conv.chunks.Comment object at 0x101caf6b0>
    // <conv.chunks.Comment object at 0x101caf7d0>
    // <conv.chunks.Comment object at 0x101caf8f0>
    lda(A_B_Buttons);
    asl();
    BCS(FourFrameExtent);
    JMP(GetCurrentAnimOffset);
}

int GetCurrentAnimOffset() {
    lda(PlayerAnimCtrl);
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
    lda(PlayerAnimTimer);
    BNE(ExAnimC);
    lda(PlayerAnimTimerSet);
    sta(PlayerAnimTimer);
    // <conv.chunks.Comment object at 0x101cb83b0>
    // <conv.chunks.Comment object at 0x101cb8440>
    // <conv.chunks.Comment object at 0x101cb85f0>
    // <conv.chunks.Comment object at 0x101cb8680>
    // <conv.chunks.Comment object at 0x101cb87a0>
    // <conv.chunks.Comment object at 0x101cb88f0>
    // <conv.chunks.Comment object at 0x101cb8a10>
    lda(PlayerAnimCtrl);
    clc();
    // <conv.chunks.Comment object at 0x101cb8c50>
    adc(0x1);
    cmp(0x0);
    BCC(SetAnimC);
    lda(0x0);
    JMP(SetAnimC);
}

int SetAnimC() {
    // <conv.chunks.Comment object at 0x101cb8e00>
    // <conv.chunks.Comment object at 0x101cb8e90>
    // <conv.chunks.Comment object at 0x101cb9010>
    // <conv.chunks.Comment object at 0x101cb90a0>
    sta(PlayerAnimCtrl);
    JMP(ExAnimC);
}

int ExAnimC() {
    // <conv.chunks.Comment object at 0x101cb9280>
    pla();
    return 0;
    JMP(GetGfxOffsetAdder);
}

int GetGfxOffsetAdder() {
    lda(PlayerSize);
    BEQ(SzOfs);
    tya();
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101cb9460>
    // <conv.chunks.Comment object at 0x101cb9580>
    // <conv.chunks.Comment object at 0x101cb9700>
    // <conv.chunks.Comment object at 0x101cb97c0>
    // <conv.chunks.Comment object at 0x101cb9850>
    tay();
    JMP(SzOfs);
}

int SzOfs() {
    // <conv.chunks.Comment object at 0x101cb9a30>
    return 0;
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy(PlayerAnimCtrl);
    // <conv.chunks.Comment object at 0x101cb9c10>
    lda(FrameCounter);
    anda(0b11);
    BNE(GorSLog);
    iny();
    cpy(0xa);
    BCC(CSzNext);
    ldy(0x0);
    sty(PlayerChangeSizeFlag);
    JMP(CSzNext);
}

int CSzNext() {
    // <conv.chunks.Comment object at 0x101cba900>
    // <conv.chunks.Comment object at 0x101cbaa20>
    // <conv.chunks.Comment object at 0x101cbaba0>
    // <conv.chunks.Comment object at 0x101cbac30>
    // <conv.chunks.Comment object at 0x101cbacc0>
    // <conv.chunks.Comment object at 0x101cbaea0>
    // <conv.chunks.Comment object at 0x101cbaf30>
    // <conv.chunks.Comment object at 0x101cbb0e0>
    sty(PlayerAnimCtrl);
    JMP(GorSLog);
}

int GorSLog() {
    // <conv.chunks.Comment object at 0x101cbb260>
    lda(PlayerSize);
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
    return 0;
    JMP(ShrinkPlayer);
}

int ShrinkPlayer() {
    tya();
    // <conv.chunks.Comment object at 0x101cbbc50>
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
    // <conv.chunks.Comment object at 0x101cbbd70>
    // <conv.chunks.Comment object at 0x101cbbec0>
    // <conv.chunks.Comment object at 0x101cbbf50>
    // <conv.chunks.Comment object at 0x101cbbfe0>
    // <conv.chunks.Comment object at 0x101cc0200>
    // <conv.chunks.Comment object at 0x101cc0350>
    // <conv.chunks.Comment object at 0x101cc03e0>
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    return 0;
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x101cc0710>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(KilledAtt);
    lda(PlayerGfxOffset);
    // <conv.chunks.Comment object at 0x101cc0920>
    // <conv.chunks.Comment object at 0x101cc09b0>
    // <conv.chunks.Comment object at 0x101cc0b60>
    cmp(0x50);
    BEQ(C_S_IGAtt);
    cmp(0xb8);
    BEQ(C_S_IGAtt);
    cmp(0xc0);
    // <conv.chunks.Comment object at 0x101cc0ce0>
    // <conv.chunks.Comment object at 0x101cc0e90>
    // <conv.chunks.Comment object at 0x101cc0f20>
    // <conv.chunks.Comment object at 0x101cc10d0>
    BEQ(C_S_IGAtt);
    cmp(0xc8);
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b111111);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x101cc1700>
    // <conv.chunks.Comment object at 0x101cc1820>
    lda(((Sprite_Attributes) + (20)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(C_S_IGAtt);
}

int C_S_IGAtt() {
    lda(((Sprite_Attributes) + (24)), y);
    anda(0b111111);
    sta(((Sprite_Attributes) + (24)), y);
    // <conv.chunks.Comment object at 0x101cc2240>
    // <conv.chunks.Comment object at 0x101cc2360>
    lda(((Sprite_Attributes) + (28)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (28)), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // <conv.chunks.Comment object at 0x101cc2840>
    // <conv.chunks.Comment object at 0x101cc2960>
    // <conv.chunks.Comment object at 0x101cc2ba0>
    return 0;
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
    // <conv.chunks.Comment object at 0x101cc30e0>
    // <conv.chunks.Comment object at 0x101cc3170>
    ldy(0x3);
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x101cc3590>
    // <conv.chunks.Comment object at 0x101cc3620>
    ldy(0x2);
    JMP(RelWOfs);
}

int RelWOfs() {
    // <conv.chunks.Comment object at 0x101cc3830>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    return 0;
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x101cc3c80>
    // <conv.chunks.Comment object at 0x101cc3d10>
    ldy(0x6);
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101ccc170>
    // <conv.chunks.Comment object at 0x101ccc200>
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(0x9);
    ldy(0x4);
    // <conv.chunks.Comment object at 0x101ccc4d0>
    // <conv.chunks.Comment object at 0x101ccc560>
    JSR(VariableObjOfsRelPos);
    inx();
    // <conv.chunks.Comment object at 0x101ccc830>
    inx();
    lda(0x9);
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(0x0);
    // <conv.chunks.Comment object at 0x101cccb60>
    clc();
    adc(0x0);
    tax();
    // <conv.chunks.Comment object at 0x101cccd10>
    // <conv.chunks.Comment object at 0x101cccce0>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x101cccfb0>
    return 0;
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda(SprObject_Y_Position, x);
    sta(SprObject_Rel_YPos, y);
    lda(SprObject_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x101ccd190>
    // <conv.chunks.Comment object at 0x101ccd2e0>
    // <conv.chunks.Comment object at 0x101ccd430>
    // <conv.chunks.Comment object at 0x101ccd5b0>
    sbc(ScreenLeft_X_Pos);
    sta(SprObject_Rel_XPos, y);
    // <conv.chunks.Comment object at 0x101ccd730>
    return 0;
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101ccd940>
    // <conv.chunks.Comment object at 0x101ccd9a0>
    // <conv.chunks.Comment object at 0x101ccda30>
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
    // <conv.chunks.Comment object at 0x101cceba0>
    clc();
    adc(offsetof(G, ObjOffsetData), y);
    tax();
    // <conv.chunks.Comment object at 0x101ccee40>
    // <conv.chunks.Comment object at 0x101ccefc0>
    return 0;
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x101ccf110>
    // <conv.chunks.Comment object at 0x101ccf1a0>
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
    // <conv.chunks.Comment object at 0x101ccf770>
    // <conv.chunks.Comment object at 0x101ccf8c0>
    tax();
    JMP(GetOffScreenBitsSet);
}

int GetOffScreenBitsSet() {
    tya();
    // <conv.chunks.Comment object at 0x101ccfaa0>
    pha();
    JSR(RunOffscrBitsSubs);
    asl();
    // <conv.chunks.Comment object at 0x101ccfce0>
    asl();
    asl();
    asl();
    ora(0x0);
    sta(0x0);
    pla();
    // <conv.chunks.Comment object at 0x101ccff50>
    // <conv.chunks.Comment object at 0x101ccff20>
    // <conv.chunks.Comment object at 0x101cd4140>
    tay();
    lda(0x0);
    // <conv.chunks.Comment object at 0x101cd4320>
    sta(SprObject_OffscrBits, y);
    ldx(ObjectOffset);
    return 0;
    JMP(RunOffscrBitsSubs);
}

int RunOffscrBitsSubs() {
    JSR(GetXOffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x101cd46e0>
    // <conv.chunks.Comment object at 0x101cd4830>
    lsr();
    lsr();
    lsr();
    sta(0x0);
    // <conv.chunks.Comment object at 0x101cd4aa0>
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // <conv.chunks.Comment object at 0x101cd4ef0>
    // <conv.chunks.Comment object at 0x101cd59a0>
    // <conv.chunks.Comment object at 0x101cd5a90>
    lda(ScreenEdge_X_Pos, y);
    sec();
    sbc(SprObject_X_Position, x);
    sta(0x7);
    lda(ScreenEdge_PageLoc, y);
    sbc(SprObject_PageLoc, x);
    ldx(offsetof(G, DefaultXOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x101cd5cd0>
    // <conv.chunks.Comment object at 0x101cd5d60>
    // <conv.chunks.Comment object at 0x101cd5ee0>
    // <conv.chunks.Comment object at 0x101cd5f70>
    // <conv.chunks.Comment object at 0x101cd6120>
    // <conv.chunks.Comment object at 0x101cd6270>
    cmp(0x0);
    BMI(XLdBData);
    ldx(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x101cd6420>
    // <conv.chunks.Comment object at 0x101cd65d0>
    cmp(0x1);
    BPL(XLdBData);
    lda(0x38);
    // <conv.chunks.Comment object at 0x101cd6840>
    // <conv.chunks.Comment object at 0x101cd69f0>
    sta(0x6);
    lda(0x8);
    // <conv.chunks.Comment object at 0x101cd6a80>
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // <conv.chunks.Comment object at 0x101cd6e10>
    lda(offsetof(G, XOffscreenBitsData), x);
    ldx(0x4);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x101cd6fc0>
    // <conv.chunks.Comment object at 0x101cd7050>
    BNE(ExXOfsBS);
    dey();
    BPL(XOfsLoop);
    JMP(ExXOfsBS);
}

int ExXOfsBS() {
    return 0;
    JMP(GetYOffscreenBits);
}

int GetYOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(YOfsLoop);
}

int YOfsLoop() {
    // <conv.chunks.Comment object at 0x101cd75f0>
    // <conv.chunks.Comment object at 0x101cd7ef0>
    // <conv.chunks.Comment object at 0x101cd7fe0>
    lda(offsetof(G, HighPosUnitData), y);
    sec();
    sbc(SprObject_Y_Position, x);
    sta(0x7);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101ce42c0>
    // <conv.chunks.Comment object at 0x101ce4440>
    // <conv.chunks.Comment object at 0x101ce44d0>
    sbc(SprObject_Y_HighPos, x);
    ldx(offsetof(G, DefaultYOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x101ce4770>
    cmp(0x0);
    BMI(YLdBData);
    ldx(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x101ce4920>
    // <conv.chunks.Comment object at 0x101ce4ad0>
    cmp(0x1);
    BPL(YLdBData);
    lda(0x20);
    // <conv.chunks.Comment object at 0x101ce4d40>
    // <conv.chunks.Comment object at 0x101ce4ef0>
    sta(0x6);
    lda(0x4);
    // <conv.chunks.Comment object at 0x101ce4f80>
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // <conv.chunks.Comment object at 0x101ce5310>
    lda(offsetof(G, YOffscreenBitsData), x);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x101ce54c0>
    cmp(0x0);
    BNE(ExYOfsBS);
    dey();
    // <conv.chunks.Comment object at 0x101ce5610>
    // <conv.chunks.Comment object at 0x101ce57f0>
    BPL(YOfsLoop);
    JMP(ExYOfsBS);
}

int ExYOfsBS() {
    return 0;
    JMP(DividePDiff);
}

int DividePDiff() {
    sta(0x5);
    lda(0x7);
    cmp(0x6);
    BCS(ExDivPD);
    lsr();
    // <conv.chunks.Comment object at 0x101ce5ac0>
    // <conv.chunks.Comment object at 0x101ce5a90>
    // <conv.chunks.Comment object at 0x101ce5b50>
    // <conv.chunks.Comment object at 0x101ce5d90>
    // <conv.chunks.Comment object at 0x101ce5f70>
    lsr();
    lsr();
    anda(0x7);
    cpy(0x1);
    BCS(SetOscrO);
    adc(0x5);
    JMP(SetOscrO);
}

int SetOscrO() {
    // <conv.chunks.Comment object at 0x101ce6120>
    // <conv.chunks.Comment object at 0x101ce61b0>
    // <conv.chunks.Comment object at 0x101ce62d0>
    // <conv.chunks.Comment object at 0x101ce64b0>
    // <conv.chunks.Comment object at 0x101ce6540>
    tax();
    JMP(ExDivPD);
}

int ExDivPD() {
    // <conv.chunks.Comment object at 0x101ce66c0>
    return 0;
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x101ce6810>
    // <conv.chunks.Comment object at 0x101ce6870>
    // <conv.chunks.Comment object at 0x101ce68d0>
    // <conv.chunks.Comment object at 0x101ce6960>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x101ce6b10>
    lda(0x0);
    BCC(NoHFlip);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101ce6ba0>
    // <conv.chunks.Comment object at 0x101ce6de0>
    // <conv.chunks.Comment object at 0x101ce7020>
    sta(Sprite_Tilenumber, y);
    lda(0x40);
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // <conv.chunks.Comment object at 0x101ce7230>
    // <conv.chunks.Comment object at 0x101ce72c0>
    // <conv.chunks.Comment object at 0x101ce74a0>
    sta(Sprite_Tilenumber, y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101ce7680>
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x0);
    JMP(SetHFAt);
}

int SetHFAt() {
    // <conv.chunks.Comment object at 0x101ce7950>
    // <conv.chunks.Comment object at 0x101ce79e0>
    ora(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x101ce7b90>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0x2);
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x101ce7f50>
    // <conv.chunks.Comment object at 0x101ce7fe0>
    // <conv.chunks.Comment object at 0x101cec1d0>
    lda(0x5);
    sta(Sprite_X_Position, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x101cec3e0>
    // <conv.chunks.Comment object at 0x101cec650>
    // <conv.chunks.Comment object at 0x101cec6e0>
    sta(((Sprite_X_Position) + (4)), y);
    lda(0x2);
    clc();
    // <conv.chunks.Comment object at 0x101ceca10>
    // <conv.chunks.Comment object at 0x101cec9e0>
    adc(0x8);
    sta(0x2);
    tya();
    clc();
    // <conv.chunks.Comment object at 0x101cecd40>
    // <conv.chunks.Comment object at 0x101cece90>
    adc(0x8);
    tay();
    inx();
    inx();
    // <conv.chunks.Comment object at 0x101ced0d0>
    // <conv.chunks.Comment object at 0x101ced190>
    return 0;
    JMP(SoundEngine);
}

int SoundEngine() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x101ced3a0>
    BNE(SndOn);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x101ced910>
    return 0;
    JMP(SndOn);
}

int SndOn() {
    lda(0xff);
    sta(JOYPAD_PORT2);
    // <conv.chunks.Comment object at 0x101cedb80>
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(PauseModeFlag);
    // <conv.chunks.Comment object at 0x101cedd90>
    // <conv.chunks.Comment object at 0x101cedf40>
    BNE(InPause);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x101cee180>
    cmp(0x1);
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // <conv.chunks.Comment object at 0x101cee300>
    // <conv.chunks.Comment object at 0x101cee4b0>
    lda(PauseSoundBuffer);
    BNE(ContPau);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x101cee750>
    BEQ(SkipSoundSubroutines);
    sta(PauseSoundBuffer);
    sta(PauseModeFlag);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101cee960>
    // <conv.chunks.Comment object at 0x101ceea80>
    // <conv.chunks.Comment object at 0x101ceeba0>
    sta(SND_MASTERCTRL_REG);
    sta(Square1SoundBuffer);
    sta(Square2SoundBuffer);
    sta(NoiseSoundBuffer);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(0x2a);
    // <conv.chunks.Comment object at 0x101cef0e0>
    // <conv.chunks.Comment object at 0x101cef290>
    sta(Squ1_SfxLenCounter);
    JMP(PTone1F);
}

int PTone1F() {
    // <conv.chunks.Comment object at 0x101cef4a0>
    lda(0x44);
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // <conv.chunks.Comment object at 0x101cef590>
    // <conv.chunks.Comment object at 0x101cef770>
    lda(Squ1_SfxLenCounter);
    cmp(0x24);
    // <conv.chunks.Comment object at 0x101cef8f0>
    BEQ(PTone2F);
    cmp(0x1e);
    // <conv.chunks.Comment object at 0x101cefb30>
    BEQ(PTone1F);
    cmp(0x18);
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // <conv.chunks.Comment object at 0x101cefd70>
    // <conv.chunks.Comment object at 0x101cefe00>
    // <conv.chunks.Comment object at 0x101ceffe0>
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
    // <conv.chunks.Comment object at 0x101cf44d0>
    dec(Squ1_SfxLenCounter);
    BNE(SkipSoundSubroutines);
    lda(0x0);
    sta(SND_MASTERCTRL_REG);
    lda(PauseSoundBuffer);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x101cf4740>
    // <conv.chunks.Comment object at 0x101cf47d0>
    // <conv.chunks.Comment object at 0x101cf4980>
    // <conv.chunks.Comment object at 0x101cf4aa0>
    BNE(SkipPIn);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101cf4ce0>
    sta(PauseModeFlag);
    JMP(SkipPIn);
}

int SkipPIn() {
    // <conv.chunks.Comment object at 0x101cf4ef0>
    lda(0x0);
    sta(PauseSoundBuffer);
    BEQ(SkipSoundSubroutines);
    JMP(RunSoundSubroutines);
}

int RunSoundSubroutines() {
    JSR(Square1SfxHandler);
    JSR(Square2SfxHandler);
    JSR(NoiseSfxHandler);
    JSR(MusicHandler);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101cf5280>
    // <conv.chunks.Comment object at 0x101cf53a0>
    // <conv.chunks.Comment object at 0x101cf54c0>
    // <conv.chunks.Comment object at 0x101cf55e0>
    // <conv.chunks.Comment object at 0x101cf5700>
    sta(AreaMusicQueue);
    sta(EventMusicQueue);
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x101cf5a30>
    sta(Square1SoundQueue);
    sta(Square2SoundQueue);
    sta(NoiseSoundQueue);
    sta(PauseSoundQueue);
    ldy(DAC_Counter);
    // <conv.chunks.Comment object at 0x101cf5f10>
    lda(AreaMusicBuffer);
    anda(0b11);
    // <conv.chunks.Comment object at 0x101cf6120>
    BEQ(NoIncDAC);
    inc(DAC_Counter);
    // <conv.chunks.Comment object at 0x101cf6330>
    cpy(0x30);
    BCC(StrWave);
    JMP(NoIncDAC);
}

int NoIncDAC() {
    tya();
    BEQ(StrWave);
    dec(DAC_Counter);
    JMP(StrWave);
}

int StrWave() {
    // <conv.chunks.Comment object at 0x101cf6750>
    // <conv.chunks.Comment object at 0x101cf68a0>
    // <conv.chunks.Comment object at 0x101cf69c0>
    sty(((SND_DELTA_REG) + (1)));
    return 0;
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x101cf6d20>
    stx(SND_SQUARE1_REG);
    return 0;
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
    sta(((SND_REGISTER) + (2)), x);
    lda(offsetof(G, FreqRegLookupTbl), y);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x101cf73e0>
    // <conv.chunks.Comment object at 0x101cf75f0>
    // <conv.chunks.Comment object at 0x101cf7740>
    // <conv.chunks.Comment object at 0x101cf7950>
    // <conv.chunks.Comment object at 0x101cf7aa0>
    sta(((SND_REGISTER) + (3)), x);
    JMP(NoTone);
}

int NoTone() {
    return 0;
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx(SND_SQUARE2_REG);
    // <conv.chunks.Comment object at 0x101cf7ec0>
    sty(((SND_SQUARE2_REG) + (1)));
    return 0;
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
    // <conv.chunks.Comment object at 0x101d00980>
    sta(Squ1_SfxLenCounter);
    lda(0x62);
    // <conv.chunks.Comment object at 0x101d01310>
    JSR(SetFreq_Squ1);
    ldx(0x99);
    // <conv.chunks.Comment object at 0x101d01520>
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(0x26);
    // <conv.chunks.Comment object at 0x101d01790>
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
    // <conv.chunks.Comment object at 0x101d01b20>
    // <conv.chunks.Comment object at 0x101d01bb0>
    JSR(PlaySqu1Sfx);
    lda(0x28);
    sta(Squ1_SfxLenCounter);
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda(Squ1_SfxLenCounter);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x101d020c0>
    // <conv.chunks.Comment object at 0x101d021e0>
    BNE(N2Prt);
    ldx(0x5f);
    // <conv.chunks.Comment object at 0x101d02420>
    ldy(0xf6);
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // <conv.chunks.Comment object at 0x101d025a0>
    // <conv.chunks.Comment object at 0x101d02750>
    cmp(0x20);
    BNE(DecJpFPS);
    ldx(0x48);
    JMP(FPS2nd);
}

int FPS2nd() {
    // <conv.chunks.Comment object at 0x101d029c0>
    // <conv.chunks.Comment object at 0x101d02a50>
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
    // <conv.chunks.Comment object at 0x101d03260>
    ldy(0x93);
    JMP(Fthrow);
}

int Fthrow() {
    // <conv.chunks.Comment object at 0x101d033e0>
    ldx(0x9e);
    sta(Squ1_SfxLenCounter);
    lda(0xc);
    // <conv.chunks.Comment object at 0x101d036e0>
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d03920>
    cmp(0x6);
    BNE(DecJpFPS);
    lda(0xbb);
    // <conv.chunks.Comment object at 0x101d03c20>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // <conv.chunks.Comment object at 0x101d03ef0>
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x101d080b0>
    BEQ(CheckSfx1Buffer);
    sty(Square1SoundBuffer);
    BMI(PlaySmallJump);
    // <conv.chunks.Comment object at 0x101d082c0>
    // <conv.chunks.Comment object at 0x101d083e0>
    lsr(Square1SoundQueue);
    BCS(PlayBigJump);
    // <conv.chunks.Comment object at 0x101d085f0>
    lsr(Square1SoundQueue);
    BCS(PlayBump);
    // <conv.chunks.Comment object at 0x101d08830>
    lsr(Square1SoundQueue);
    BCS(PlaySwimStomp);
    // <conv.chunks.Comment object at 0x101d08a40>
    lsr(Square1SoundQueue);
    BCS(PlaySmackEnemy);
    // <conv.chunks.Comment object at 0x101d08c50>
    lsr(Square1SoundQueue);
    BCS(PlayPipeDownInj);
    // <conv.chunks.Comment object at 0x101d08e60>
    lsr(Square1SoundQueue);
    BCS(PlayFireballThrow);
    // <conv.chunks.Comment object at 0x101d09070>
    lsr(Square1SoundQueue);
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda(Square1SoundBuffer);
    BEQ(ExS1H);
    BMI(ContinueSndJump);
    // <conv.chunks.Comment object at 0x101d093d0>
    // <conv.chunks.Comment object at 0x101d094f0>
    // <conv.chunks.Comment object at 0x101d09640>
    lsr();
    BCS(ContinueSndJump);
    // <conv.chunks.Comment object at 0x101d097f0>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x101d099d0>
    lsr();
    BCS(ContinueSwimStomp);
    // <conv.chunks.Comment object at 0x101d09b80>
    lsr();
    BCS(ContinueSmackEnemy);
    // <conv.chunks.Comment object at 0x101d09d30>
    lsr();
    BCS(ContinuePipeDownInj);
    // <conv.chunks.Comment object at 0x101d09ee0>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x101d0a090>
    lsr();
    BCS(DecrementSfx1Length);
    JMP(ExS1H);
}

int ExS1H() {
    return 0;
    JMP(PlaySwimStomp);
}

int PlaySwimStomp() {
    lda(0xe);
    // <conv.chunks.Comment object at 0x101d0a480>
    sta(Squ1_SfxLenCounter);
    ldy(0x9c);
    // <conv.chunks.Comment object at 0x101d0a690>
    ldx(0x9e);
    lda(0x26);
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy(Squ1_SfxLenCounter);
    lda(((offsetof(G, SwimStompEnvelopeData)) - (1)), y);
    sta(SND_SQUARE1_REG);
    // <conv.chunks.Comment object at 0x101d0aab0>
    // <conv.chunks.Comment object at 0x101d0abd0>
    // <conv.chunks.Comment object at 0x101d0ade0>
    cpy(0x6);
    BNE(BranchToDecLength1);
    lda(0x9e);
    sta(((SND_SQUARE1_REG) + (2)));
    JMP(BranchToDecLength1);
}

int BranchToDecLength1() {
    BNE(DecrementSfx1Length);
    JMP(PlaySmackEnemy);
}

int PlaySmackEnemy() {
    lda(0xe);
    // <conv.chunks.Comment object at 0x101d0b560>
    ldy(0xcb);
    ldx(0x9f);
    sta(Squ1_SfxLenCounter);
    lda(0x28);
    // <conv.chunks.Comment object at 0x101d0b950>
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d0bcb0>
    cpy(0x8);
    BNE(SmSpc);
    lda(0xa0);
    sta(((SND_SQUARE1_REG) + (2)));
    // <conv.chunks.Comment object at 0x101d0bfe0>
    // <conv.chunks.Comment object at 0x101d140b0>
    lda(0x9f);
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // <conv.chunks.Comment object at 0x101d14530>
    lda(0x90);
    JMP(SmTick);
}

int SmTick() {
    sta(SND_SQUARE1_REG);
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d14830>
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(0x0);
    stx(0xf1);
    // <conv.chunks.Comment object at 0x101d14aa0>
    // <conv.chunks.Comment object at 0x101d14bf0>
    ldx(0xe);
    stx(SND_MASTERCTRL_REG);
    ldx(0xf);
    stx(SND_MASTERCTRL_REG);
    JMP(ExSfx1);
}

int ExSfx1() {
    return 0;
    JMP(PlayPipeDownInj);
}

int PlayPipeDownInj() {
    lda(0x2f);
    // <conv.chunks.Comment object at 0x101d151c0>
    sta(Squ1_SfxLenCounter);
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda(Squ1_SfxLenCounter);
    lsr();
    BCS(NoPDwnL);
    // <conv.chunks.Comment object at 0x101d15400>
    // <conv.chunks.Comment object at 0x101d15550>
    // <conv.chunks.Comment object at 0x101d155e0>
    lsr();
    BCS(NoPDwnL);
    anda(0b10);
    BEQ(NoPDwnL);
    ldy(0x91);
    // <conv.chunks.Comment object at 0x101d15af0>
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
    // <conv.chunks.Comment object at 0x101d176b0>
    // <conv.chunks.Comment object at 0x101d16570>
    BNE(CGrab_TTickRegL);
    JMP(PlayTimerTick);
}

int PlayTimerTick() {
    lda(0x6);
    ldx(0x98);
    JMP(CGrab_TTickRegL);
}

int CGrab_TTickRegL() {
    sta(Squ2_SfxLenCounter);
    ldy(0x7f);
    lda(0x42);
    // <conv.chunks.Comment object at 0x101d1cef0>
    // <conv.chunks.Comment object at 0x101d1cf80>
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda(Squ2_SfxLenCounter);
    cmp(0x30);
    // <conv.chunks.Comment object at 0x101d1d250>
    // <conv.chunks.Comment object at 0x101d1d370>
    BNE(N2Tone);
    lda(0x54);
    // <conv.chunks.Comment object at 0x101d1d5b0>
    sta(((SND_SQUARE2_REG) + (2)));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x101d1da00>
    sta(Squ2_SfxLenCounter);
    ldy(0x94);
    // <conv.chunks.Comment object at 0x101d1dc10>
    lda(0x5e);
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d1df70>
    cmp(0x18);
    BNE(DecrementSfx2Length);
    ldy(0x93);
    // <conv.chunks.Comment object at 0x101d1e270>
    lda(0x18);
    JMP(SBlasJ);
}

int SBlasJ() {
    // <conv.chunks.Comment object at 0x101d1e3f0>
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(0x36);
    // <conv.chunks.Comment object at 0x101d1e660>
    sta(Squ2_SfxLenCounter);
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda(Squ2_SfxLenCounter);
    lsr();
    BCS(DecrementSfx2Length);
    // <conv.chunks.Comment object at 0x101d1e8a0>
    // <conv.chunks.Comment object at 0x101d1e9f0>
    // <conv.chunks.Comment object at 0x101d1ea80>
    tay();
    lda(((offsetof(G, PowerUpGrabFreqData)) - (1)), y);
    ldx(0x5d);
    // <conv.chunks.Comment object at 0x101d1ec30>
    // <conv.chunks.Comment object at 0x101d1ee40>
    ldy(0x7f);
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d1f1a0>
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x101d1f410>
    stx(Square2SoundBuffer);
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(0xd);
    // <conv.chunks.Comment object at 0x101d1f650>
    stx(SND_MASTERCTRL_REG);
    ldx(0xf);
    stx(SND_MASTERCTRL_REG);
    JMP(ExSfx2);
}

int ExSfx2() {
    return 0;
    JMP(Square2SfxHandler);
}

int Square2SfxHandler() {
    lda(Square2SoundBuffer);
    anda(Sfx_ExtraLife);
    // <conv.chunks.Comment object at 0x101d1fb60>
    // <conv.chunks.Comment object at 0x101d1fc80>
    BNE(ContinueExtraLife);
    ldy(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x101d1fe90>
    BEQ(CheckSfx2Buffer);
    sty(Square2SoundBuffer);
    BMI(PlayBowserFall);
    // <conv.chunks.Comment object at 0x101d280e0>
    // <conv.chunks.Comment object at 0x101d28200>
    lsr(Square2SoundQueue);
    BCS(PlayCoinGrab);
    // <conv.chunks.Comment object at 0x101d28410>
    lsr(Square2SoundQueue);
    BCS(PlayGrowPowerUp);
    // <conv.chunks.Comment object at 0x101d28620>
    lsr(Square2SoundQueue);
    BCS(PlayGrowVine);
    // <conv.chunks.Comment object at 0x101d28830>
    lsr(Square2SoundQueue);
    BCS(PlayBlast);
    // <conv.chunks.Comment object at 0x101d28a40>
    lsr(Square2SoundQueue);
    BCS(PlayTimerTick);
    // <conv.chunks.Comment object at 0x101d28c50>
    lsr(Square2SoundQueue);
    BCS(PlayPowerUpGrab);
    // <conv.chunks.Comment object at 0x101d28e60>
    lsr(Square2SoundQueue);
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda(Square2SoundBuffer);
    BEQ(ExS2H);
    BMI(ContinueBowserFall);
    // <conv.chunks.Comment object at 0x101d291f0>
    // <conv.chunks.Comment object at 0x101d29310>
    // <conv.chunks.Comment object at 0x101d29460>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x101d29610>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x101d297c0>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x101d29970>
    lsr();
    BCS(ContinueBlast);
    // <conv.chunks.Comment object at 0x101d29b20>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x101d29cd0>
    lsr();
    BCS(ContinuePowerUpGrab);
    // <conv.chunks.Comment object at 0x101d29e80>
    lsr();
    BCS(ContinueExtraLife);
    JMP(ExS2H);
}

int ExS2H() {
    return 0;
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
    // <conv.chunks.Comment object at 0x101d2a4e0>
    sta(Squ2_SfxLenCounter);
    ldy(0xc4);
    // <conv.chunks.Comment object at 0x101d2a6f0>
    lda(0x18);
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d2aab0>
    cmp(0x8);
    BNE(DecrementSfx2Length);
    ldy(0xa4);
    // <conv.chunks.Comment object at 0x101d2adb0>
    lda(0x5a);
    JMP(PBFRegs);
}

int PBFRegs() {
    // <conv.chunks.Comment object at 0x101d2af30>
    ldx(0x9f);
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // <conv.chunks.Comment object at 0x101d2b0b0>
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(0x30);
    // <conv.chunks.Comment object at 0x101d2b2c0>
    sta(Squ2_SfxLenCounter);
    JMP(ContinueExtraLife);
}

int ContinueExtraLife() {
    lda(Squ2_SfxLenCounter);
    ldx(0x3);
    JMP(DivLLoop);
}

int DivLLoop() {
    lsr();
    BCS(JumpToDecLength2);
    // <conv.chunks.Comment object at 0x101d2b7d0>
    dex();
    BNE(DivLLoop);
    // <conv.chunks.Comment object at 0x101d2b980>
    tay();
    lda(((offsetof(G, ExtraLifeFreqData)) - (1)), y);
    // <conv.chunks.Comment object at 0x101d2bb30>
    ldx(0x82);
    ldy(0x7f);
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(0x10);
    // <conv.chunks.Comment object at 0x101d300b0>
    BNE(GrowItemRegs);
    JMP(PlayGrowVine);
}

int PlayGrowVine() {
    lda(0x20);
    JMP(GrowItemRegs);
}

int GrowItemRegs() {
    sta(Squ2_SfxLenCounter);
    lda(0x7f);
    // <conv.chunks.Comment object at 0x101d30530>
    sta(((SND_SQUARE2_REG) + (1)));
    lda(0x0);
    // <conv.chunks.Comment object at 0x101d30800>
    sta(Sfx_SecondaryCounter);
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc(Sfx_SecondaryCounter);
    lda(Sfx_SecondaryCounter);
    lsr();
    // <conv.chunks.Comment object at 0x101d30a40>
    // <conv.chunks.Comment object at 0x101d30b60>
    // <conv.chunks.Comment object at 0x101d30cb0>
    tay();
    cpy(Squ2_SfxLenCounter);
    BEQ(StopGrowItems);
    lda(0x9d);
    // <conv.chunks.Comment object at 0x101d30dd0>
    // <conv.chunks.Comment object at 0x101d30ef0>
    // <conv.chunks.Comment object at 0x101d31010>
    sta(SND_SQUARE2_REG);
    lda(offsetof(G, PUp_VGrow_FreqData), y);
    // <conv.chunks.Comment object at 0x101d31220>
    JSR(SetFreq_Squ2);
    return 0;
    JMP(StopGrowItems);
}

int StopGrowItems() {
    JMP(EmptySfx2Buffer);
    JMP(PlayBrickShatter);
}

int PlayBrickShatter() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x101d31730>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda(Noise_SfxLenCounter);
    lsr();
    // <conv.chunks.Comment object at 0x101d32330>
    BCC(DecrementSfx3Length);
    tay();
    ldx(offsetof(G, BrickShatterFreqData), y);
    // <conv.chunks.Comment object at 0x101d32540>
    lda(offsetof(G, BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta(SND_NOISE_REG);
    // <conv.chunks.Comment object at 0x101d327e0>
    stx(((SND_NOISE_REG) + (2)));
    lda(0x18);
    sta(((SND_NOISE_REG) + (3)));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec(Noise_SfxLenCounter);
    // <conv.chunks.Comment object at 0x101d32d80>
    BNE(ExSfx3);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x101d32fc0>
    sta(SND_NOISE_REG);
    lda(0x0);
    sta(NoiseSoundBuffer);
    JMP(ExSfx3);
}

int ExSfx3() {
    return 0;
    JMP(NoiseSfxHandler);
}

int NoiseSfxHandler() {
    ldy(NoiseSoundQueue);
    // <conv.chunks.Comment object at 0x101d334d0>
    BEQ(CheckNoiseBuffer);
    sty(NoiseSoundBuffer);
    // <conv.chunks.Comment object at 0x101d336e0>
    lsr(NoiseSoundQueue);
    BCS(PlayBrickShatter);
    // <conv.chunks.Comment object at 0x101d338f0>
    lsr(NoiseSoundQueue);
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda(NoiseSoundBuffer);
    BEQ(ExNH);
    // <conv.chunks.Comment object at 0x101d33c50>
    // <conv.chunks.Comment object at 0x101d33d70>
    lsr();
    BCS(ContinueBrickShatter);
    // <conv.chunks.Comment object at 0x101d33f50>
    lsr();
    BCS(ContinueBowserFlame);
    JMP(ExNH);
}

int ExNH() {
    return 0;
    JMP(PlayBowserFlame);
}

int PlayBowserFlame() {
    lda(0x40);
    // <conv.chunks.Comment object at 0x101d3c380>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda(Noise_SfxLenCounter);
    lsr();
    tay();
    ldx(0xf);
    // <conv.chunks.Comment object at 0x101d3c7d0>
    lda(((offsetof(G, BowserFlameEnvData)) - (1)), y);
    BNE(PlayNoiseSfx);
    JMP(ContinueMusic);
}

int ContinueMusic() {
    JMP(HandleSquare2Music);
    JMP(MusicHandler);
}

int MusicHandler() {
    lda(EventMusicQueue);
    // <conv.chunks.Comment object at 0x101d3cda0>
    BNE(LoadEventMusic);
    lda(AreaMusicQueue);
    // <conv.chunks.Comment object at 0x101d3cfb0>
    BNE(LoadAreaMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d3d1c0>
    ora(AreaMusicBuffer);
    BNE(ContinueMusic);
    return 0;
    JMP(LoadEventMusic);
}

int LoadEventMusic() {
    sta(EventMusicBuffer);
    cmp(DeathMusic);
    BNE(NoStopSfx);
    JSR(StopSquare1Sfx);
    JSR(StopSquare2Sfx);
    JMP(NoStopSfx);
}

int NoStopSfx() {
    ldx(AreaMusicBuffer);
    stx(AreaMusicBuffer_Alt);
    // <conv.chunks.Comment object at 0x101d3dc70>
    ldy(0x0);
    sty(NoteLengthTblAdder);
    sty(AreaMusicBuffer);
    cmp(TimeRunningOutMusic);
    // <conv.chunks.Comment object at 0x101d3ddf0>
    // <conv.chunks.Comment object at 0x101d3dfa0>
    // <conv.chunks.Comment object at 0x101d3e0c0>
    BNE(FindEventMusicHeader);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x101d3e2d0>
    stx(NoteLengthTblAdder);
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(0x4);
    BNE(NoStop1);
    // <conv.chunks.Comment object at 0x101d3e630>
    // <conv.chunks.Comment object at 0x101d3e6c0>
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // <conv.chunks.Comment object at 0x101d3e990>
    ldy(0x10);
    JMP(GMLoopB);
}

int GMLoopB() {
    sty(GroundMusicHeaderOfs);
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x101d3ec90>
    sty(EventMusicBuffer);
    sta(AreaMusicBuffer);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x101d3eea0>
    // <conv.chunks.Comment object at 0x101d3efc0>
    BNE(FindAreaMusicHeader);
    inc(GroundMusicHeaderOfs);
    ldy(GroundMusicHeaderOfs);
    // <conv.chunks.Comment object at 0x101d3f1d0>
    // <conv.chunks.Comment object at 0x101d3f2f0>
    cpy(0x32);
    BNE(LoadHeader);
    // <conv.chunks.Comment object at 0x101d3f470>
    ldy(0x11);
    BNE(GMLoopB);
    JMP(FindAreaMusicHeader);
}

int FindAreaMusicHeader() {
    ldy(0x8);
    sty(MusicOffset_Square2);
    JMP(FindEventMusicHeader);
}

int FindEventMusicHeader() {
    iny();
    lsr();
    // <conv.chunks.Comment object at 0x101d3fb30>
    // <conv.chunks.Comment object at 0x101d3fbf0>
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}

int LoadHeader() {
    lda(MusicHeaderOffsetData, y);
    // <conv.chunks.Comment object at 0x101d3fda0>
    tay();
    lda(offsetof(G, MusicHeaderData), y);
    // <conv.chunks.Comment object at 0x101d3ff80>
    sta(NoteLenLookupTblOfs);
    lda(((offsetof(G, MusicHeaderData)) + (1)), y);
    sta(MusicDataLow);
    lda(((offsetof(G, MusicHeaderData)) + (2)), y);
    sta(MusicDataHigh);
    lda(((offsetof(G, MusicHeaderData)) + (3)), y);
    sta(MusicOffset_Triangle);
    lda(((offsetof(G, MusicHeaderData)) + (4)), y);
    sta(MusicOffset_Square1);
    lda(((offsetof(G, MusicHeaderData)) + (5)), y);
    sta(MusicOffset_Noise);
    sta(NoiseDataLoopbackOfs);
    lda(0x1);
    // <conv.chunks.Comment object at 0x101d4d100>
    sta(Squ2_NoteLenCounter);
    sta(Squ1_NoteLenCounter);
    sta(Tri_NoteLenCounter);
    sta(Noise_BeatLenCounter);
    lda(0x0);
    // <conv.chunks.Comment object at 0x101d4d5e0>
    sta(MusicOffset_Square2);
    sta(AltRegContentFlag);
    lda(0xb);
    // <conv.chunks.Comment object at 0x101d4d7f0>
    // <conv.chunks.Comment object at 0x101d4d910>
    sta(SND_MASTERCTRL_REG);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec(Squ2_NoteLenCounter);
    BNE(MiscSqu2MusicTasks);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x101d4dd30>
    // <conv.chunks.Comment object at 0x101d4de50>
    // <conv.chunks.Comment object at 0x101d4df70>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d4e660>
    cmp(TimeRunningOutMusic);
    BNE(NotTRO);
    lda(AreaMusicBuffer_Alt);
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // <conv.chunks.Comment object at 0x101d4e990>
    // <conv.chunks.Comment object at 0x101d4eab0>
    // <conv.chunks.Comment object at 0x101d4ebd0>
    anda(VictoryMusic);
    BNE(VictoryMLoopBack);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x101d4ee40>
    anda(0b1011111);
    BNE(MusicLoopBack);
    lda(0x0);
    sta(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x101d4f050>
    // <conv.chunks.Comment object at 0x101d4f170>
    // <conv.chunks.Comment object at 0x101d4f200>
    sta(EventMusicBuffer);
    sta(SND_TRIANGLE_REG);
    lda(0x90);
    sta(SND_SQUARE1_REG);
    sta(SND_SQUARE2_REG);
    return 0;
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
    // <conv.chunks.Comment object at 0x101d4fb60>
    sta(Squ2_NoteLenBuffer);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x101d4fd70>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x101d54140>
    BNE(SkipFqL1);
    JSR(SetFreq_Squ2);
    BEQ(Rest);
    JSR(LoadControlRegs);
    JMP(Rest);
}

int Rest() {
    // <conv.chunks.Comment object at 0x101d54350>
    // <conv.chunks.Comment object at 0x101d54470>
    // <conv.chunks.Comment object at 0x101d545c0>
    // <conv.chunks.Comment object at 0x101d546e0>
    sta(Squ2_EnvelopeDataCtrl);
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // <conv.chunks.Comment object at 0x101d54860>
    // <conv.chunks.Comment object at 0x101d54980>
    lda(Squ2_NoteLenBuffer);
    sta(Squ2_NoteLenCounter);
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x101d54bf0>
    BNE(HandleSquare1Music);
    lda(EventMusicBuffer);
    anda(0b10010001);
    // <conv.chunks.Comment object at 0x101d54e00>
    // <conv.chunks.Comment object at 0x101d54f20>
    BNE(HandleSquare1Music);
    ldy(Squ2_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x101d55130>
    BEQ(NoDecEnv1);
    dec(Squ2_EnvelopeDataCtrl);
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // <conv.chunks.Comment object at 0x101d55340>
    // <conv.chunks.Comment object at 0x101d55460>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE2_REG);
    ldx(0x7f);
    // <conv.chunks.Comment object at 0x101d555b0>
    // <conv.chunks.Comment object at 0x101d556d0>
    stx(((SND_SQUARE2_REG) + (1)));
    JMP(HandleSquare1Music);
}

int HandleSquare1Music() {
    ldy(MusicOffset_Square1);
    BEQ(HandleTriangleMusic);
    dec(Squ1_NoteLenCounter);
    BNE(MiscSqu1MusicTasks);
    JMP(FetchSqu1MusicData);
}

int FetchSqu1MusicData() {
    ldy(MusicOffset_Square1);
    // <conv.chunks.Comment object at 0x101d55e80>
    inc(MusicOffset_Square1);
    lda((MusicData), y);
    BNE(Squ1NoteHandler);
    // <conv.chunks.Comment object at 0x101d561e0>
    lda(0x83);
    sta(SND_SQUARE1_REG);
    lda(0x94);
    sta(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x101d56360>
    // <conv.chunks.Comment object at 0x101d56510>
    // <conv.chunks.Comment object at 0x101d565a0>
    sta(AltRegContentFlag);
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta(Squ1_NoteLenCounter);
    ldy(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x101d56b40>
    // <conv.chunks.Comment object at 0x101d56c60>
    BNE(HandleTriangleMusic);
    txa();
    anda(0b111110);
    JSR(SetFreq_Squ1);
    // <conv.chunks.Comment object at 0x101d56f00>
    // <conv.chunks.Comment object at 0x101d57020>
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // <conv.chunks.Comment object at 0x101d57320>
    sta(Squ1_EnvelopeDataCtrl);
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x101d57590>
    BNE(HandleTriangleMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d577a0>
    anda(0b10010001);
    BNE(DeathMAltReg);
    ldy(Squ1_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x101d57aa0>
    BEQ(NoDecEnv2);
    dec(Squ1_EnvelopeDataCtrl);
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // <conv.chunks.Comment object at 0x101d57cb0>
    // <conv.chunks.Comment object at 0x101d57dd0>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE1_REG);
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // <conv.chunks.Comment object at 0x101d57f20>
    // <conv.chunks.Comment object at 0x101d5c080>
    lda(AltRegContentFlag);
    BNE(DoAltLoad);
    lda(0x7f);
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // <conv.chunks.Comment object at 0x101d5c2c0>
    // <conv.chunks.Comment object at 0x101d5c350>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda(MusicOffset_Triangle);
    dec(Tri_NoteLenCounter);
    BNE(HandleNoiseMusic);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x101d5c710>
    // <conv.chunks.Comment object at 0x101d5c830>
    // <conv.chunks.Comment object at 0x101d5c950>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x101d5ccb0>
    // <conv.chunks.Comment object at 0x101d5cdd0>
    // <conv.chunks.Comment object at 0x101d5cef0>
    // <conv.chunks.Comment object at 0x101d5d010>
    lda(0x1f);
    sta(SND_TRIANGLE_REG);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x101d5d190>
    // <conv.chunks.Comment object at 0x101d5d340>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x101d5d8e0>
    stx(Tri_NoteLenCounter);
    lda(EventMusicBuffer);
    anda(0b1101110);
    BNE(NotDOrD4);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x101d5dbe0>
    // <conv.chunks.Comment object at 0x101d5dd00>
    // <conv.chunks.Comment object at 0x101d5de20>
    anda(0b1010);
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // <conv.chunks.Comment object at 0x101d5e030>
    // <conv.chunks.Comment object at 0x101d5e150>
    txa();
    cmp(0x12);
    // <conv.chunks.Comment object at 0x101d5e240>
    BCS(LongN);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d5e480>
    anda(EndOfCastleMusic);
    BEQ(MediN);
    lda(0xf);
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // <conv.chunks.Comment object at 0x101d5e7b0>
    // <conv.chunks.Comment object at 0x101d5e840>
    // <conv.chunks.Comment object at 0x101d5e9f0>
    lda(0x1f);
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // <conv.chunks.Comment object at 0x101d5eae0>
    // <conv.chunks.Comment object at 0x101d5ec90>
    lda(0xff);
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta(SND_TRIANGLE_REG);
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x101d5ef90>
    anda(0b11110011);
    BEQ(ExitMusicHandler);
    dec(Noise_BeatLenCounter);
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy(MusicOffset_Noise);
    // <conv.chunks.Comment object at 0x101d5f530>
    inc(MusicOffset_Noise);
    lda((MusicData), y);
    // <conv.chunks.Comment object at 0x101d5f740>
    BNE(NoiseBeatHandler);
    lda(NoiseDataLoopbackOfs);
    sta(MusicOffset_Noise);
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta(Noise_BeatLenCounter);
    // <conv.chunks.Comment object at 0x101d5fe30>
    txa();
    anda(0b111110);
    BEQ(SilentBeat);
    cmp(0x30);
    BEQ(LongBeat);
    // <conv.chunks.Comment object at 0x101d5ffe0>
    // <conv.chunks.Comment object at 0x101d6c140>
    // <conv.chunks.Comment object at 0x101d6c260>
    // <conv.chunks.Comment object at 0x101d6c2f0>
    cmp(0x20);
    BEQ(StrongBeat);
    anda(0b10000);
    BEQ(SilentBeat);
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101d6c860>
    ldx(0x3);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101d6cc80>
    ldx(0xc);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x101d6d0a0>
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
    sta(SND_NOISE_REG);
    // <conv.chunks.Comment object at 0x101d6d640>
    stx(((SND_NOISE_REG) + (2)));
    sty(((SND_NOISE_REG) + (3)));
    JMP(ExitMusicHandler);
}

int ExitMusicHandler() {
    return 0;
    JMP(AlternateLengthHandler);
}

int AlternateLengthHandler() {
    tax();
    ror();
    txa();
    rol();
    rol();
    // <conv.chunks.Comment object at 0x101d6dbe0>
    // <conv.chunks.Comment object at 0x101d6dca0>
    // <conv.chunks.Comment object at 0x101d6dd60>
    // <conv.chunks.Comment object at 0x101d6de20>
    // <conv.chunks.Comment object at 0x101d6dee0>
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(0b111);
    // <conv.chunks.Comment object at 0x101d6e030>
    clc();
    adc(0xf0);
    adc(NoteLengthTblAdder);
    // <conv.chunks.Comment object at 0x101d6e210>
    // <conv.chunks.Comment object at 0x101d6e2a0>
    tay();
    lda(offsetof(G, MusicLengthLookupTbl), y);
    // <conv.chunks.Comment object at 0x101d6e4b0>
    return 0;
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d6e6c0>
    anda(EndOfCastleMusic);
    BEQ(NotECstlM);
    lda(0x4);
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda(AreaMusicBuffer);
    anda(0b1111101);
    // <conv.chunks.Comment object at 0x101d6ed50>
    BEQ(WaterMus);
    lda(0x8);
    // <conv.chunks.Comment object at 0x101d6ef60>
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // <conv.chunks.Comment object at 0x101d6f1a0>
    lda(0x28);
    JMP(AllMus);
}

int AllMus() {
    // <conv.chunks.Comment object at 0x101d6f260>
    ldx(0x82);
    ldy(0x7f);
    return 0;
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x101d6f620>
    anda(EndOfCastleMusic);
    BEQ(LoadUsualEnvData);
    lda(offsetof(G, EndOfCastleMusicEnvData), y);
    // <conv.chunks.Comment object at 0x101d6f920>
    return 0;
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x101d6fb30>
    anda(0b1111101);
    BEQ(LoadWaterEventMusEnvData);
    lda(offsetof(G, AreaMusicEnvData), y);
    // <conv.chunks.Comment object at 0x101d6fe30>
    return 0;
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda(offsetof(G, WaterEventMusEnvData), y);
    // <conv.chunks.Comment object at 0x101d74080>
    return 0;
}

