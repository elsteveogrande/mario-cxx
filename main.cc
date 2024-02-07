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
    // <conv.chunks.Comment object at 0x104934ef0>
    cld();
    lda(0b10000);
    // <conv.chunks.Comment object at 0x104934fb0>
    sta(PPU_CTRL_REG1);
    ldx(0xff);
    // <conv.chunks.Comment object at 0x104935160>
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // <conv.chunks.Comment object at 0x1049352b0>
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
    // <conv.chunks.Comment object at 0x104935700>
    // <conv.chunks.Comment object at 0x1049357f0>
    // <conv.chunks.Comment object at 0x104935880>
    lda(TopScoreDisplay, x);
    cmp(10);
    BCS(ColdBoot);
    // <conv.chunks.Comment object at 0x104935a60>
    // <conv.chunks.Comment object at 0x104935af0>
    dex();
    BPL(WBootCheck);
    lda(WarmBootValidation);
    cmp(0xa5);
    // <conv.chunks.Comment object at 0x104935d30>
    // <conv.chunks.Comment object at 0x104935e20>
    BNE(ColdBoot);
    ldy(WarmBootOffset);
    JMP(ColdBoot);
}

int ColdBoot() {
    // <conv.chunks.Comment object at 0x104935fd0>
    // <conv.chunks.Comment object at 0x1049360c0>
    JSR(InitializeMemory);
    sta(((SND_DELTA_REG) + (1)));
    sta(OperMode);
    lda(0xa5);
    // <conv.chunks.Comment object at 0x1049361e0>
    // <conv.chunks.Comment object at 0x104936360>
    // <conv.chunks.Comment object at 0x104936450>
    sta(WarmBootValidation);
    sta(PseudoRandomBitReg);
    // <conv.chunks.Comment object at 0x104936660>
    lda(0b1111);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x104936870>
    lda(0b110);
    sta(PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x104936a80>
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x104936c90>
    // <conv.chunks.Comment object at 0x104936db0>
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x104937080>
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda(Mirror_PPU_CTRL_REG1);
    anda(0b1111111);
    // <conv.chunks.Comment object at 0x104941250>
    // <conv.chunks.Comment object at 0x1049414f0>
    sta(Mirror_PPU_CTRL_REG1);
    anda(0b1111110);
    sta(PPU_CTRL_REG1);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x104941700>
    // <conv.chunks.Comment object at 0x104941820>
    // <conv.chunks.Comment object at 0x104941940>
    anda(0b11100110);
    ldy(DisableScreenFlag);
    BNE(ScreenOff);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x104941b50>
    // <conv.chunks.Comment object at 0x104941c70>
    // <conv.chunks.Comment object at 0x104941d90>
    ora(0b11110);
    JMP(ScreenOff);
}

int ScreenOff() {
    // <conv.chunks.Comment object at 0x104941fa0>
    sta(Mirror_PPU_CTRL_REG2);
    anda(0b11100111);
    // <conv.chunks.Comment object at 0x1049420f0>
    sta(PPU_CTRL_REG2);
    ldx(PPU_STATUS);
    // <conv.chunks.Comment object at 0x104942300>
    lda(0x0);
    JSR(InitScroll);
    sta(PPU_SPR_ADDR);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104942600>
    // <conv.chunks.Comment object at 0x104942720>
    sta(SPR_DMA);
    ldx(VRAM_Buffer_AddrCtrl);
    lda(offsetof(G, VRAM_AddrTable_Low), x);
    // <conv.chunks.Comment object at 0x104942960>
    // <conv.chunks.Comment object at 0x104942a80>
    sta(0x0);
    lda(offsetof(G, VRAM_AddrTable_High), x);
    sta(0x1);
    JSR(UpdateScreen);
    // <conv.chunks.Comment object at 0x104942de0>
    ldy(0x0);
    ldx(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x104943050>
    cpx(0x6);
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx(offsetof(G, VRAM_Buffer_Offset), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1049435f0>
    sta(VRAM_Buffer1_Offset, x);
    sta(VRAM_Buffer1, x);
    sta(VRAM_Buffer_AddrCtrl);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x104943950>
    // <conv.chunks.Comment object at 0x104943a70>
    sta(PPU_CTRL_REG2);
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // <conv.chunks.Comment object at 0x104943c80>
    // <conv.chunks.Comment object at 0x104943da0>
    // <conv.chunks.Comment object at 0x104943ec0>
    JSR(UpdateTopScore);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x10494c110>
    lsr();
    BCS(PauseSkip);
    lda(TimerControl);
    BEQ(DecTimers);
    // <conv.chunks.Comment object at 0x10494c3b0>
    // <conv.chunks.Comment object at 0x10494c4d0>
    dec(TimerControl);
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // <conv.chunks.Comment object at 0x10494c7d0>
    ldx(0x14);
    dec(IntervalTimerControl);
    BPL(DecTimersLoop);
    // <conv.chunks.Comment object at 0x10494c890>
    // <conv.chunks.Comment object at 0x10494ca40>
    lda(0x14);
    sta(IntervalTimerControl);
    ldx(0x23);
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // <conv.chunks.Comment object at 0x10494cbc0>
    // <conv.chunks.Comment object at 0x10494cd70>
    // <conv.chunks.Comment object at 0x10494ce00>
    lda(Timers, x);
    BEQ(SkipExpTimer);
    dec(Timers, x);
    JMP(SkipExpTimer);
}

int SkipExpTimer() {
    // <conv.chunks.Comment object at 0x10494d040>
    // <conv.chunks.Comment object at 0x10494d160>
    // <conv.chunks.Comment object at 0x10494d2e0>
    dex();
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}

int NoDecTimers() {
    // <conv.chunks.Comment object at 0x10494d3d0>
    // <conv.chunks.Comment object at 0x10494d4f0>
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
    // <conv.chunks.Comment object at 0x10494d7c0>
    // <conv.chunks.Comment object at 0x10494d970>
    // <conv.chunks.Comment object at 0x10494dac0>
    // <conv.chunks.Comment object at 0x10494db50>
    // <conv.chunks.Comment object at 0x10494dd60>
    // <conv.chunks.Comment object at 0x10494deb0>
    // <conv.chunks.Comment object at 0x10494de80>
    BEQ(RotPRandomBit);
    sec();
    JMP(RotPRandomBit);
}

int RotPRandomBit() {
    // <conv.chunks.Comment object at 0x10494e180>
    // <conv.chunks.Comment object at 0x10494e210>
    ror(PseudoRandomBitReg, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x10494e3c0>
    // <conv.chunks.Comment object at 0x10494e480>
    BNE(RotPRandomBit);
    lda(Sprite0HitDetectFlag);
    // <conv.chunks.Comment object at 0x10494e600>
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // <conv.chunks.Comment object at 0x10494e810>
    lda(PPU_STATUS);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x10494e960>
    BNE(Sprite0Clr);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x10494eb70>
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // <conv.chunks.Comment object at 0x10494eff0>
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
    // <conv.chunks.Comment object at 0x10494f5f0>
    lda(HorizontalScroll);
    sta(PPU_SCROLL_REG);
    lda(VerticalScroll);
    sta(PPU_SCROLL_REG);
    lda(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x10494fa10>
    pha();
    sta(PPU_CTRL_REG1);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x10494fcb0>
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // <conv.chunks.Comment object at 0x10494ff50>
    // <conv.chunks.Comment object at 0x1049600b0>
    lda(PPU_STATUS);
    pla();
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x104960290>
    sta(PPU_CTRL_REG1);
    rti();
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda(OperMode);
    cmp(VictoryModeValue);
    // <conv.chunks.Comment object at 0x1049605c0>
    // <conv.chunks.Comment object at 0x1049606e0>
    BEQ(ChkPauseTimer);
    cmp(GameModeValue);
    BNE(ExitPause);
    lda(OperMode_Task);
    // <conv.chunks.Comment object at 0x1049608f0>
    // <conv.chunks.Comment object at 0x104960a10>
    // <conv.chunks.Comment object at 0x104960b30>
    cmp(0x3);
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // <conv.chunks.Comment object at 0x104960cb0>
    // <conv.chunks.Comment object at 0x104960e60>
    lda(GamePauseTimer);
    BEQ(ChkStart);
    dec(GamePauseTimer);
    // <conv.chunks.Comment object at 0x1049610a0>
    rts();
    JMP(ChkStart);
}

int ChkStart() {
    // <conv.chunks.Comment object at 0x104961250>
    lda(SavedJoypad1Bits);
    anda(Start_Button);
    // <conv.chunks.Comment object at 0x1049613a0>
    BEQ(ClrPauseTimer);
    lda(GamePauseStatus);
    anda(0b10000000);
    BNE(ExitPause);
    lda(0x2b);
    // <conv.chunks.Comment object at 0x1049615b0>
    // <conv.chunks.Comment object at 0x1049616d0>
    // <conv.chunks.Comment object at 0x1049617f0>
    // <conv.chunks.Comment object at 0x104961910>
    sta(GamePauseTimer);
    lda(GamePauseStatus);
    tay();
    iny();
    // <conv.chunks.Comment object at 0x104961cd0>
    sty(PauseSoundQueue);
    eor(0b1);
    // <conv.chunks.Comment object at 0x104961e50>
    ora(0b10000000);
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // <conv.chunks.Comment object at 0x104962060>
    // <conv.chunks.Comment object at 0x104962180>
    lda(GamePauseStatus);
    anda(0b1111111);
    JMP(SetPause);
}

int SetPause() {
    sta(GamePauseStatus);
    JMP(ExitPause);
}

int ExitPause() {
    rts();
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
    // <conv.chunks.Comment object at 0x104962600>
    // <conv.chunks.Comment object at 0x104962660>
    // <conv.chunks.Comment object at 0x104962780>
    // <conv.chunks.Comment object at 0x1049628d0>
    // <conv.chunks.Comment object at 0x104962960>
    // <conv.chunks.Comment object at 0x104962a50>
    lda(SprDataOffset, x);
    cmp(0x0);
    BCC(NextSprOffset);
    ldy(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x104962c90>
    // <conv.chunks.Comment object at 0x104962d20>
    // <conv.chunks.Comment object at 0x104962ea0>
    clc();
    adc(SprShuffleAmt, y);
    BCC(StrSprOffset);
    // <conv.chunks.Comment object at 0x104963050>
    // <conv.chunks.Comment object at 0x1049631a0>
    clc();
    adc(0x0);
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // <conv.chunks.Comment object at 0x104963380>
    // <conv.chunks.Comment object at 0x104963410>
    sta(SprDataOffset, x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // <conv.chunks.Comment object at 0x1049635f0>
    dex();
    BPL(ShuffleLoop);
    ldx(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x1049637d0>
    inx();
    cpx(0x3);
    BNE(SetAmtOffset);
    ldx(0x0);
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx(SprShuffleAmtOffset);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x104963e00>
    ldy(0x2);
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // <conv.chunks.Comment object at 0x104963f80>
    lda(((SprDataOffset) + (5)), y);
    sta(((Misc_SprDataOffset) - (2)), x);
    clc();
    adc(0x8);
    sta(((Misc_SprDataOffset) - (1)), x);
    clc();
    // <conv.chunks.Comment object at 0x10496c260>
    // <conv.chunks.Comment object at 0x10496c470>
    // <conv.chunks.Comment object at 0x10496c500>
    // <conv.chunks.Comment object at 0x10496c590>
    // <conv.chunks.Comment object at 0x10496c830>
    adc(0x8);
    sta(Misc_SprDataOffset, x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // <conv.chunks.Comment object at 0x10496cd10>
    rts();
    JMP(OperModeExecutionTree);
}

int OperModeExecutionTree() {
    lda(OperMode);
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
    // <conv.chunks.Comment object at 0x10496d5b0>
    // <conv.chunks.Comment object at 0x10496d6a0>
    // <conv.chunks.Comment object at 0x10496d7c0>
    sta(Sprite_Y_Position, y);
    iny();
    // <conv.chunks.Comment object at 0x10496da00>
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    rts();
    JMP(TitleScreenMode);
}

int TitleScreenMode() {
    lda(OperMode_Task);
    JSR(JumpEngine);
    JMP(GameMenuRoutine);
}

int GameMenuRoutine() {
    ldy(0x0);
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    // <conv.chunks.Comment object at 0x10496e360>
    // <conv.chunks.Comment object at 0x10496e840>
    cmp(Start_Button);
    BEQ(StartGame);
    cmp(((A_Button) + (Start_Button)));
    BNE(ChkSelect);
    JMP(StartGame);
}

int StartGame() {
    // <conv.chunks.Comment object at 0x10496eb40>
    // <conv.chunks.Comment object at 0x10496ecf0>
    // <conv.chunks.Comment object at 0x10496ee10>
    JMP(ChkContinue);
    JMP(ChkSelect);
}

int ChkSelect() {
    // <conv.chunks.Comment object at 0x10496ef60>
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
    // <conv.chunks.Comment object at 0x10496f0b0>
    // <conv.chunks.Comment object at 0x10496f1d0>
    // <conv.chunks.Comment object at 0x10496f2f0>
    // <conv.chunks.Comment object at 0x10496f410>
    // <conv.chunks.Comment object at 0x10496f530>
    // <conv.chunks.Comment object at 0x10496f650>
    // <conv.chunks.Comment object at 0x10496f770>
    // <conv.chunks.Comment object at 0x10496f8c0>
    ldx(WorldSelectEnableFlag);
    BEQ(NullJoypad);
    cmp(B_Button);
    // <conv.chunks.Comment object at 0x10496fb00>
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // <conv.chunks.Comment object at 0x10496fd40>
    // <conv.chunks.Comment object at 0x10496fdd0>
    lda(DemoTimer);
    BEQ(ResetTitle);
    lda(0x18);
    // <conv.chunks.Comment object at 0x10496ff20>
    // <conv.chunks.Comment object at 0x104978080>
    sta(DemoTimer);
    lda(SelectTimer);
    BNE(NullJoypad);
    lda(0x10);
    // <conv.chunks.Comment object at 0x104978290>
    // <conv.chunks.Comment object at 0x1049783b0>
    // <conv.chunks.Comment object at 0x1049784d0>
    sta(SelectTimer);
    cpy(0x1);
    BEQ(IncWorldSel);
    lda(NumberOfPlayers);
    eor(0b1);
    // <conv.chunks.Comment object at 0x1049786e0>
    // <conv.chunks.Comment object at 0x104978770>
    // <conv.chunks.Comment object at 0x104978920>
    // <conv.chunks.Comment object at 0x104978a40>
    sta(NumberOfPlayers);
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // <conv.chunks.Comment object at 0x104978e30>
    ldx(WorldSelectNumber);
    inx();
    txa();
    anda(0b111);
    sta(WorldSelectNumber);
    // <conv.chunks.Comment object at 0x1049790a0>
    // <conv.chunks.Comment object at 0x1049791c0>
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // <conv.chunks.Comment object at 0x1049793d0>
    lda(offsetof(G, WSelectBufferTemplate), x);
    sta(((VRAM_Buffer1) - (1)), x);
    // <conv.chunks.Comment object at 0x104979550>
    inx();
    cpx(0x6);
    BMI(UpdateShroom);
    ldy(WorldNumber);
    iny();
    sty(((VRAM_Buffer1) + (3)));
    JMP(NullJoypad);
}

int NullJoypad() {
    // <conv.chunks.Comment object at 0x1049799a0>
    // <conv.chunks.Comment object at 0x104979af0>
    // <conv.chunks.Comment object at 0x104979b80>
    // <conv.chunks.Comment object at 0x104979d30>
    lda(0x0);
    sta(SavedJoypad1Bits);
    JMP(RunDemo);
}

int RunDemo() {
    // <conv.chunks.Comment object at 0x104979f70>
    JSR(GameCoreRoutine);
    lda(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x10497a0f0>
    cmp(0x6);
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // <conv.chunks.Comment object at 0x10497a270>
    // <conv.chunks.Comment object at 0x10497a420>
    lda(0x0);
    sta(OperMode);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x10497a4e0>
    // <conv.chunks.Comment object at 0x10497a690>
    sta(Sprite0HitDetectFlag);
    inc(DisableScreenFlag);
    rts();
    JMP(ChkContinue);
}

int ChkContinue() {
    // <conv.chunks.Comment object at 0x10497aa20>
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
    // <conv.chunks.Comment object at 0x10497b1a0>
    inc(OffScr_Hidden1UpFlag);
    inc(FetchNewGameTimerFlag);
    inc(OperMode);
    lda(WorldSelectEnableFlag);
    sta(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x10497b3b0>
    // <conv.chunks.Comment object at 0x10497b4d0>
    // <conv.chunks.Comment object at 0x10497b5f0>
    // <conv.chunks.Comment object at 0x10497b710>
    lda(0x0);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x10497b890>
    sta(DemoTimer);
    ldx(0x17);
    lda(0x0);
    JMP(InitScores);
}

int InitScores() {
    // <conv.chunks.Comment object at 0x10497bc80>
    sta(ScoreAndCoinDisplay, x);
    dex();
    BPL(InitScores);
    JMP(ExitMenu);
}

int ExitMenu() {
    rts();
    JMP(GoContinue);
}

int GoContinue() {
    // <conv.chunks.Comment object at 0x104984110>
    sta(WorldNumber);
    sta(OffScr_WorldNumber);
    ldx(0x0);
    stx(AreaNumber);
    // <conv.chunks.Comment object at 0x104984260>
    // <conv.chunks.Comment object at 0x104984380>
    // <conv.chunks.Comment object at 0x104984410>
    stx(OffScr_AreaNumber);
    rts();
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(0x7);
    JMP(IconDataRead);
}

int IconDataRead() {
    // <conv.chunks.Comment object at 0x104984800>
    // <conv.chunks.Comment object at 0x104984890>
    lda(offsetof(G, MushroomIconData), y);
    sta(((VRAM_Buffer1) - (1)), y);
    // <conv.chunks.Comment object at 0x104984ef0>
    dey();
    BPL(IconDataRead);
    lda(NumberOfPlayers);
    BEQ(ExitIcon);
    lda(0x24);
    // <conv.chunks.Comment object at 0x104985250>
    // <conv.chunks.Comment object at 0x104985370>
    // <conv.chunks.Comment object at 0x104985490>
    sta(((VRAM_Buffer1) + (3)));
    lda(0xce);
    // <conv.chunks.Comment object at 0x104985730>
    sta(((VRAM_Buffer1) + (5)));
    JMP(ExitIcon);
}

int ExitIcon() {
    rts();
    JMP(DemoEngine);
}

int DemoEngine() {
    ldx(DemoAction);
    lda(DemoActionTimer);
    BNE(DoAction);
    // <conv.chunks.Comment object at 0x104985af0>
    // <conv.chunks.Comment object at 0x104985c10>
    // <conv.chunks.Comment object at 0x1049875c0>
    inx();
    inc(DemoAction);
    sec();
    lda(((offsetof(G, DemoTimingData)) - (1)), x);
    sta(DemoActionTimer);
    BEQ(DemoOver);
    JMP(DoAction);
}

int DoAction() {
    // <conv.chunks.Comment object at 0x104987770>
    // <conv.chunks.Comment object at 0x1049878c0>
    // <conv.chunks.Comment object at 0x104987950>
    // <conv.chunks.Comment object at 0x104987b30>
    // <conv.chunks.Comment object at 0x104987c50>
    // <conv.chunks.Comment object at 0x104987d70>
    lda(((offsetof(G, DemoActionData)) - (1)), x);
    sta(SavedJoypad1Bits);
    dec(DemoActionTimer);
    clc();
    JMP(DemoOver);
}

int DemoOver() {
    rts();
    JMP(VictoryMode);
}

int VictoryMode() {
    JSR(VictoryModeSubroutines);
    lda(OperMode_Task);
    BEQ(AutoPlayer);
    // <conv.chunks.Comment object at 0x1049903b0>
    // <conv.chunks.Comment object at 0x1049904d0>
    // <conv.chunks.Comment object at 0x1049905f0>
    ldx(0x0);
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}

int AutoPlayer() {
    // <conv.chunks.Comment object at 0x104990770>
    // <conv.chunks.Comment object at 0x104990920>
    // <conv.chunks.Comment object at 0x104990a40>
    JSR(RelativePlayerPosition);
    JMP(PlayerGfxHandler);
    JMP(VictoryModeSubroutines);
}

int VictoryModeSubroutines() {
    lda(OperMode_Task);
    JSR(JumpEngine);
    JMP(SetupVictoryMode);
}

int SetupVictoryMode() {
    ldx(ScreenRight_PageLoc);
    inx();
    stx(DestinationPageLoc);
    // <conv.chunks.Comment object at 0x1049911f0>
    // <conv.chunks.Comment object at 0x104991340>
    // <conv.chunks.Comment object at 0x1049913d0>
    lda(EndOfCastleMusic);
    sta(EventMusicQueue);
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104991880>
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
    // <conv.chunks.Comment object at 0x104991a90>
    // <conv.chunks.Comment object at 0x104991bb0>
    // <conv.chunks.Comment object at 0x104991cd0>
    // <conv.chunks.Comment object at 0x104991df0>
    // <conv.chunks.Comment object at 0x104991f10>
    // <conv.chunks.Comment object at 0x104991fa0>
    // <conv.chunks.Comment object at 0x104992150>
    inc(VictoryWalkControl);
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // <conv.chunks.Comment object at 0x1049922d0>
    // <conv.chunks.Comment object at 0x104992360>
    tya();
    JSR(AutoControlPlayer);
    lda(ScreenLeft_PageLoc);
    cmp(DestinationPageLoc);
    BEQ(ExitVWalk);
    // <conv.chunks.Comment object at 0x104992450>
    // <conv.chunks.Comment object at 0x104992570>
    // <conv.chunks.Comment object at 0x104992690>
    // <conv.chunks.Comment object at 0x1049927b0>
    lda(ScrollFractional);
    clc();
    // <conv.chunks.Comment object at 0x1049929f0>
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
    // <conv.chunks.Comment object at 0x104992ae0>
    // <conv.chunks.Comment object at 0x104992c90>
    // <conv.chunks.Comment object at 0x104992d20>
    // <conv.chunks.Comment object at 0x104992f00>
    // <conv.chunks.Comment object at 0x104992f90>
    // <conv.chunks.Comment object at 0x1049930b0>
    // <conv.chunks.Comment object at 0x1049931d0>
    // <conv.chunks.Comment object at 0x1049932f0>
    lda(VictoryWalkControl);
    BEQ(IncModeTask_A);
    rts();
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
    // <conv.chunks.Comment object at 0x104993680>
    // <conv.chunks.Comment object at 0x1049937a0>
    // <conv.chunks.Comment object at 0x1049938c0>
    // <conv.chunks.Comment object at 0x1049939e0>
    // <conv.chunks.Comment object at 0x104993b00>
    // <conv.chunks.Comment object at 0x104993b90>
    // <conv.chunks.Comment object at 0x104993d40>
    cpy(World8);
    BNE(MRetainerMsg);
    cmp(0x3);
    BCC(IncMsgCounter);
    sbc(0x1);
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}

int MRetainerMsg() {
    // <conv.chunks.Comment object at 0x104993e90>
    // <conv.chunks.Comment object at 0x1049980e0>
    // <conv.chunks.Comment object at 0x104998170>
    // <conv.chunks.Comment object at 0x104998320>
    // <conv.chunks.Comment object at 0x1049983b0>
    // <conv.chunks.Comment object at 0x104998560>
    cmp(0x2);
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // <conv.chunks.Comment object at 0x104998620>
    // <conv.chunks.Comment object at 0x1049987d0>
    tay();
    BNE(SecondPartMsg);
    lda(CurrentPlayer);
    BEQ(EvalForMusic);
    iny();
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}

int SecondPartMsg() {
    // <conv.chunks.Comment object at 0x1049988c0>
    // <conv.chunks.Comment object at 0x1049989e0>
    // <conv.chunks.Comment object at 0x104998b00>
    // <conv.chunks.Comment object at 0x104998c50>
    // <conv.chunks.Comment object at 0x104998ce0>
    // <conv.chunks.Comment object at 0x104998e00>
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
    // <conv.chunks.Comment object at 0x104998fe0>
    // <conv.chunks.Comment object at 0x104999040>
    // <conv.chunks.Comment object at 0x104999280>
    // <conv.chunks.Comment object at 0x104999310>
    // <conv.chunks.Comment object at 0x1049993a0>
    // <conv.chunks.Comment object at 0x104999550>
    // <conv.chunks.Comment object at 0x1049995e0>
    // <conv.chunks.Comment object at 0x104999790>
    cpy(0x3);
    BNE(PrintMsg);
    lda(VictoryMusic);
    sta(EventMusicQueue);
    JMP(PrintMsg);
}

int PrintMsg() {
    // <conv.chunks.Comment object at 0x104999850>
    // <conv.chunks.Comment object at 0x104999a00>
    // <conv.chunks.Comment object at 0x104999b20>
    // <conv.chunks.Comment object at 0x104999c40>
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
    // <conv.chunks.Comment object at 0x10499a1e0>
    sta(SecondaryMsgCounter);
    lda(PrimaryMsgCounter);
    adc(0x0);
    // <conv.chunks.Comment object at 0x10499a4e0>
    sta(PrimaryMsgCounter);
    cmp(0x7);
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // <conv.chunks.Comment object at 0x10499a6f0>
    // <conv.chunks.Comment object at 0x10499a780>
    BCC(ExitMsgs);
    lda(0x6);
    sta(WorldEndTimer);
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // <conv.chunks.Comment object at 0x10499a9c0>
    // <conv.chunks.Comment object at 0x10499ab70>
    inc(OperMode_Task);
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // <conv.chunks.Comment object at 0x10499acf0>
    rts();
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda(WorldEndTimer);
    BNE(EndExitOne);
    ldy(WorldNumber);
    cpy(World8);
    BCS(EndChkBButton);
    // <conv.chunks.Comment object at 0x10499ae40>
    // <conv.chunks.Comment object at 0x10499af60>
    // <conv.chunks.Comment object at 0x10499b080>
    // <conv.chunks.Comment object at 0x10499b1a0>
    // <conv.chunks.Comment object at 0x10499b200>
    lda(0x0);
    sta(AreaNumber);
    sta(LevelNumber);
    sta(OperMode_Task);
    inc(WorldNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    // <conv.chunks.Comment object at 0x10499b470>
    // <conv.chunks.Comment object at 0x10499b620>
    // <conv.chunks.Comment object at 0x10499b740>
    // <conv.chunks.Comment object at 0x10499b860>
    // <conv.chunks.Comment object at 0x10499b980>
    // <conv.chunks.Comment object at 0x10499baa0>
    lda(GameModeValue);
    sta(OperMode);
    JMP(EndExitOne);
}

int EndExitOne() {
    // <conv.chunks.Comment object at 0x10499bcb0>
    // <conv.chunks.Comment object at 0x10499bdd0>
    rts();
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    anda(B_Button);
    BEQ(EndExitTwo);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10499bfe0>
    // <conv.chunks.Comment object at 0x1049a4140>
    // <conv.chunks.Comment object at 0x1049a4260>
    // <conv.chunks.Comment object at 0x1049a4380>
    sta(WorldSelectEnableFlag);
    lda(0xff);
    // <conv.chunks.Comment object at 0x1049a4590>
    sta(NumberofLives);
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // <conv.chunks.Comment object at 0x1049a47a0>
    // <conv.chunks.Comment object at 0x1049a48f0>
    rts();
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda(FloateyNum_Control, x);
    BEQ(EndExitOne);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x1049a5e50>
    // <conv.chunks.Comment object at 0x1049a6600>
    // <conv.chunks.Comment object at 0x1049a6720>
    BCC(ChkNumTimer);
    lda(0xb);
    sta(FloateyNum_Control, x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // <conv.chunks.Comment object at 0x1049a6930>
    // <conv.chunks.Comment object at 0x1049a69c0>
    // <conv.chunks.Comment object at 0x1049a6bd0>
    tay();
    lda(FloateyNum_Timer, x);
    BNE(DecNumTimer);
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x1049a6cc0>
    // <conv.chunks.Comment object at 0x1049a6e10>
    // <conv.chunks.Comment object at 0x1049a6f30>
    rts();
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // <conv.chunks.Comment object at 0x1049a7110>
    dec(FloateyNum_Timer, x);
    cmp(0x2b);
    // <conv.chunks.Comment object at 0x1049a7290>
    BNE(ChkTallEnemy);
    cpy(0xb);
    BNE(LoadNumTiles);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x1049a74a0>
    // <conv.chunks.Comment object at 0x1049a7530>
    // <conv.chunks.Comment object at 0x1049a76e0>
    lda(Sfx_ExtraLife);
    sta(Square2SoundQueue);
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // <conv.chunks.Comment object at 0x1049a78f0>
    // <conv.chunks.Comment object at 0x1049a7a10>
    lda(offsetof(G, ScoreUpdateData), y);
    lsr();
    // <conv.chunks.Comment object at 0x1049a7bc0>
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
    // <conv.chunks.Comment object at 0x1049a7e30>
    // <conv.chunks.Comment object at 0x1049a7ec0>
    // <conv.chunks.Comment object at 0x1049ac050>
    // <conv.chunks.Comment object at 0x1049ac170>
    // <conv.chunks.Comment object at 0x1049ac2c0>
    // <conv.chunks.Comment object at 0x1049ac3e0>
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1049ac560>
    cmp(Spiny);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x1049ac710>
    cmp(PiranhaPlant);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x1049ac9e0>
    cmp(HammerBro);
    BEQ(GetAltOffset);
    // <conv.chunks.Comment object at 0x1049acbf0>
    cmp(GreyCheepCheep);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x1049ace00>
    cmp(RedCheepCheep);
    BEQ(FloateyPart);
    cmp(TallEnemy);
    BCS(GetAltOffset);
    // <conv.chunks.Comment object at 0x1049ad1f0>
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // <conv.chunks.Comment object at 0x1049ad430>
    // <conv.chunks.Comment object at 0x1049ad4c0>
    // <conv.chunks.Comment object at 0x1049ad670>
    ldx(SprDataOffset_Ctrl);
    ldy(Alt_SprDataOffset, x);
    ldx(ObjectOffset);
    JMP(FloateyPart);
}

int FloateyPart() {
    // <conv.chunks.Comment object at 0x1049ad7c0>
    // <conv.chunks.Comment object at 0x1049ad910>
    // <conv.chunks.Comment object at 0x1049ada30>
    lda(FloateyNum_Y_Pos, x);
    cmp(0x18);
    BCC(SetupNumSpr);
    // <conv.chunks.Comment object at 0x1049adbb0>
    // <conv.chunks.Comment object at 0x1049adc40>
    sbc(0x1);
    sta(FloateyNum_Y_Pos, x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // <conv.chunks.Comment object at 0x1049ade50>
    // <conv.chunks.Comment object at 0x1049ae030>
    lda(FloateyNum_Y_Pos, x);
    sbc(0x8);
    JSR(DumpTwoSpr);
    lda(FloateyNum_X_Pos, x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1049ae1b0>
    // <conv.chunks.Comment object at 0x1049ae240>
    // <conv.chunks.Comment object at 0x1049ae3f0>
    // <conv.chunks.Comment object at 0x1049ae540>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x1049ae720>
    // <conv.chunks.Comment object at 0x1049ae7b0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x1049aea80>
    // <conv.chunks.Comment object at 0x1049aec60>
    lda(FloateyNum_Control, x);
    asl();
    tax();
    // <conv.chunks.Comment object at 0x1049aef90>
    // <conv.chunks.Comment object at 0x1049af050>
    lda(offsetof(G, FloateyNumTileData), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x1049af200>
    lda(((offsetof(G, FloateyNumTileData)) + (1)), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1049af500>
    // <conv.chunks.Comment object at 0x1049af6e0>
    rts();
    JMP(ScreenRoutines);
}

int ScreenRoutines() {
    lda(ScreenRoutineTask);
    // <conv.chunks.Comment object at 0x1049af8f0>
    JSR(JumpEngine);
    JMP(InitScreen);
}

int InitScreen() {
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    // <conv.chunks.Comment object at 0x104b48470>
    // <conv.chunks.Comment object at 0x104b48590>
    lda(OperMode);
    BEQ(NextSubtask);
    ldx(0x3);
    // <conv.chunks.Comment object at 0x104b487a0>
    // <conv.chunks.Comment object at 0x104b488c0>
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda(BackgroundColorCtrl);
    pha();
    // <conv.chunks.Comment object at 0x104b48b30>
    // <conv.chunks.Comment object at 0x104b48c80>
    lda(PlayerStatus);
    pha();
    lda(0x0);
    sta(PlayerStatus);
    lda(0x2);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x104b48e90>
    // <conv.chunks.Comment object at 0x104b48f20>
    // <conv.chunks.Comment object at 0x104b490d0>
    // <conv.chunks.Comment object at 0x104b49160>
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
    // <conv.chunks.Comment object at 0x104b499a0>
    // <conv.chunks.Comment object at 0x104b49cd0>
    // <conv.chunks.Comment object at 0x104b49e20>
    stx(VRAM_Buffer_AddrCtrl);
    JMP(NextSubtask);
}

int NextSubtask() {
    // <conv.chunks.Comment object at 0x104b49f70>
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
    // <conv.chunks.Comment object at 0x104b4a9f0>
    // <conv.chunks.Comment object at 0x104b4b170>
    // <conv.chunks.Comment object at 0x104b4b290>
    // <conv.chunks.Comment object at 0x104b4b470>
    // <conv.chunks.Comment object at 0x104b4b590>
    inc(ScreenRoutineTask);
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x104b4b710>
    ldy(0x0);
    lda(CurrentPlayer);
    // <conv.chunks.Comment object at 0x104b4b890>
    BEQ(ChkFiery);
    ldy(0x4);
    JMP(ChkFiery);
}

int ChkFiery() {
    // <conv.chunks.Comment object at 0x104b4bb30>
    // <conv.chunks.Comment object at 0x104b4bbc0>
    lda(PlayerStatus);
    cmp(0x2);
    BNE(StartClrGet);
    // <conv.chunks.Comment object at 0x104b4be00>
    ldy(0x8);
    JMP(StartClrGet);
}

int StartClrGet() {
    // <conv.chunks.Comment object at 0x104b54050>
    lda(0x3);
    sta(0x0);
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // <conv.chunks.Comment object at 0x104b541a0>
    lda(offsetof(G, PlayerColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x104b544a0>
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
    // <conv.chunks.Comment object at 0x104b54980>
    // <conv.chunks.Comment object at 0x104b54aa0>
    // <conv.chunks.Comment object at 0x104b54bc0>
    // <conv.chunks.Comment object at 0x104b54ce0>
    // <conv.chunks.Comment object at 0x104b54e00>
    lda(offsetof(G, BackgroundColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x3f);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x104b55130>
    // <conv.chunks.Comment object at 0x104b551c0>
    lda(0x10);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x104b55640>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104b55910>
    sta(((VRAM_Buffer1) + (7)), x);
    txa();
    clc();
    // <conv.chunks.Comment object at 0x104b55c10>
    // <conv.chunks.Comment object at 0x104b55cd0>
    adc(0x7);
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // <conv.chunks.Comment object at 0x104b55dc0>
    sta(VRAM_Buffer1_Offset);
    rts();
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda(AreaStyle);
    // <conv.chunks.Comment object at 0x104b560c0>
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
    // <conv.chunks.Comment object at 0x104b56600>
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
    // <conv.chunks.Comment object at 0x104b56ba0>
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    // <conv.chunks.Comment object at 0x104b56db0>
    sta(VRAM_Buffer1, x);
    lda(0x73);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x104b57290>
    sta(((VRAM_Buffer1) + (2)), x);
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x104b57560>
    iny();
    tya();
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x28);
    // <conv.chunks.Comment object at 0x104b57950>
    sta(((VRAM_Buffer1) + (4)), x);
    ldy(LevelNumber);
    iny();
    // <conv.chunks.Comment object at 0x104b57c20>
    // <conv.chunks.Comment object at 0x104b57d70>
    tya();
    sta(((VRAM_Buffer1) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104b5c080>
    sta(((VRAM_Buffer1) + (6)), x);
    txa();
    // <conv.chunks.Comment object at 0x104b5c380>
    clc();
    adc(0x6);
    sta(VRAM_Buffer1_Offset);
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda(GameTimerExpiredFlag);
    BEQ(NoTimeUp);
    // <conv.chunks.Comment object at 0x104b5c7d0>
    // <conv.chunks.Comment object at 0x104b5c8f0>
    lda(0x0);
    sta(GameTimerExpiredFlag);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104b5ca70>
    // <conv.chunks.Comment object at 0x104b5cc20>
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // <conv.chunks.Comment object at 0x104b5ce30>
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
    // <conv.chunks.Comment object at 0x104b5d0d0>
    // <conv.chunks.Comment object at 0x104b5d1f0>
    // <conv.chunks.Comment object at 0x104b5d340>
    // <conv.chunks.Comment object at 0x104b5d460>
    // <conv.chunks.Comment object at 0x104b5d580>
    // <conv.chunks.Comment object at 0x104b5d6a0>
    // <conv.chunks.Comment object at 0x104b5d7f0>
    // <conv.chunks.Comment object at 0x104b5d910>
    BEQ(PlayerInter);
    lda(DisableIntermediate);
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // <conv.chunks.Comment object at 0x104b5db20>
    // <conv.chunks.Comment object at 0x104b5dc40>
    // <conv.chunks.Comment object at 0x104b5dd90>
    JSR(DrawPlayer_Intermediate);
    lda(0x1);
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x104b5e270>
    rts();
    JMP(GameOverInter);
}

int GameOverInter() {
    // <conv.chunks.Comment object at 0x104b5e4b0>
    lda(0x12);
    sta(ScreenTimer);
    lda(0x3);
    // <conv.chunks.Comment object at 0x104b5e6f0>
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // <conv.chunks.Comment object at 0x104b5e9f0>
    lda(0x8);
    sta(ScreenRoutineTask);
    rts();
    JMP(AreaParserTaskControl);
}

int AreaParserTaskControl() {
    inc(DisableScreenFlag);
    JMP(TaskLoop);
}

int TaskLoop() {
    // <conv.chunks.Comment object at 0x104b5ed50>
    // <conv.chunks.Comment object at 0x104b5ee70>
    JSR(AreaParserTaskHandler);
    lda(AreaParserTaskNum);
    BNE(TaskLoop);
    dec(ColumnSets);
    // <conv.chunks.Comment object at 0x104b5efc0>
    // <conv.chunks.Comment object at 0x104b5f0e0>
    // <conv.chunks.Comment object at 0x104b5f200>
    BPL(OutputCol);
    inc(ScreenRoutineTask);
    JMP(OutputCol);
}

int OutputCol() {
    // <conv.chunks.Comment object at 0x104b5f410>
    // <conv.chunks.Comment object at 0x104b5f530>
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x104b5f5f0>
    rts();
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda(OperMode);
    BNE(IncModeTask_B);
    lda(HI8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x104b5f8f0>
    // <conv.chunks.Comment object at 0x104b5fa10>
    // <conv.chunks.Comment object at 0x104b5fb30>
    // <conv.chunks.Comment object at 0x104b5fc80>
    lda(LO8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    lda(0x3);
    sta(0x1);
    // <conv.chunks.Comment object at 0x104b5ffb0>
    // <conv.chunks.Comment object at 0x104b68140>
    ldy(0x0);
    sty(0x0);
    lda(PPU_DATA);
    JMP(OutputTScr);
}

int OutputTScr() {
    // <conv.chunks.Comment object at 0x104b68290>
    // <conv.chunks.Comment object at 0x104b68530>
    lda(PPU_DATA);
    sta((0x0), y);
    // <conv.chunks.Comment object at 0x104b68680>
    iny();
    BNE(ChkHiByte);
    inc(0x1);
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // <conv.chunks.Comment object at 0x104b68890>
    // <conv.chunks.Comment object at 0x104b689e0>
    // <conv.chunks.Comment object at 0x104b68a70>
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
    // <conv.chunks.Comment object at 0x104b69c40>
    // <conv.chunks.Comment object at 0x104b69d60>
    inc(ScreenRoutineTask);
    rts();
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(0xfa);
    // <conv.chunks.Comment object at 0x104b69fa0>
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // <conv.chunks.Comment object at 0x104b6a1b0>
    inc(OperMode_Task);
    rts();
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // <conv.chunks.Comment object at 0x104b817c0>
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
    // <conv.chunks.Comment object at 0x104b81910>
    // <conv.chunks.Comment object at 0x104b819a0>
    // <conv.chunks.Comment object at 0x104b81a30>
    // <conv.chunks.Comment object at 0x104b81be0>
    // <conv.chunks.Comment object at 0x104b81c70>
    // <conv.chunks.Comment object at 0x104b81e20>
    // <conv.chunks.Comment object at 0x104b81eb0>
    lda(NumberOfPlayers);
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // <conv.chunks.Comment object at 0x104b82090>
    // <conv.chunks.Comment object at 0x104b821e0>
    // <conv.chunks.Comment object at 0x104b82270>
    ldx(offsetof(G, GameTextOffsets), y);
    ldy(0x0);
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // <conv.chunks.Comment object at 0x104b82450>
    lda(offsetof(G, GameText), x);
    cmp(0xff);
    BEQ(EndGameText);
    sta(VRAM_Buffer1, y);
    inx();
    // <conv.chunks.Comment object at 0x104b82660>
    // <conv.chunks.Comment object at 0x104b826f0>
    // <conv.chunks.Comment object at 0x104b828a0>
    // <conv.chunks.Comment object at 0x104b82a20>
    iny();
    BNE(GameTextLoop);
    JMP(EndGameText);
}

int EndGameText() {
    // <conv.chunks.Comment object at 0x104b82b40>
    // <conv.chunks.Comment object at 0x104b82c60>
    lda(0x0);
    sta(VRAM_Buffer1, y);
    pla();
    // <conv.chunks.Comment object at 0x104b82f00>
    tax();
    cmp(0x4);
    // <conv.chunks.Comment object at 0x104b83020>
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda(NumberofLives);
    clc();
    // <conv.chunks.Comment object at 0x104b83260>
    // <conv.chunks.Comment object at 0x104b832f0>
    // <conv.chunks.Comment object at 0x104b83410>
    // <conv.chunks.Comment object at 0x104b83560>
    adc(0x1);
    cmp(10);
    // <conv.chunks.Comment object at 0x104b83710>
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
    // <conv.chunks.Comment object at 0x104b83ef0>
    // <conv.chunks.Comment object at 0x104b88080>
    sty(((VRAM_Buffer1) + (19)));
    ldy(LevelNumber);
    iny();
    sty(((VRAM_Buffer1) + (21)));
    // <conv.chunks.Comment object at 0x104b88440>
    rts();
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda(NumberOfPlayers);
    BEQ(ExitChkName);
    lda(CurrentPlayer);
    dex();
    // <conv.chunks.Comment object at 0x104b886e0>
    // <conv.chunks.Comment object at 0x104b88800>
    // <conv.chunks.Comment object at 0x104b88920>
    // <conv.chunks.Comment object at 0x104b88a70>
    BNE(ChkLuigi);
    ldy(OperMode);
    // <conv.chunks.Comment object at 0x104b88bf0>
    cpy(GameOverModeValue);
    BEQ(ChkLuigi);
    eor(0b1);
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // <conv.chunks.Comment object at 0x104b890d0>
    ldy(0x4);
    JMP(NameLoop);
}

int NameLoop() {
    // <conv.chunks.Comment object at 0x104b89250>
    lda(offsetof(G, LuigiName), y);
    sta(((VRAM_Buffer1) + (3)), y);
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
    // <conv.chunks.Comment object at 0x104b898e0>
    // <conv.chunks.Comment object at 0x104b89a30>
    // <conv.chunks.Comment object at 0x104b89b20>
    tax();
    ldy(0x0);
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // <conv.chunks.Comment object at 0x104b89ca0>
    lda(offsetof(G, WarpZoneNumbers), x);
    sta(((VRAM_Buffer1) + (27)), y);
    // <conv.chunks.Comment object at 0x104b89eb0>
    inx();
    iny();
    // <conv.chunks.Comment object at 0x104b8a180>
    iny();
    iny();
    iny();
    cpy(0xc);
    BCC(WarpNumLoop);
    lda(0x2c);
    // <conv.chunks.Comment object at 0x104b8a5a0>
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
    // <conv.chunks.Comment object at 0x104b8abd0>
    sta(ScreenTimer);
    inc(ScreenRoutineTask);
    JMP(NoReset);
}

int NoReset() {
    rts();
    JMP(RenderAreaGraphics);
}

int RenderAreaGraphics() {
    lda(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x104b8b1d0>
    anda(0x1);
    sta(0x5);
    ldy(VRAM_Buffer2_Offset);
    // <conv.chunks.Comment object at 0x104b8b350>
    sty(0x0);
    lda(CurrentNTAddr_Low);
    // <conv.chunks.Comment object at 0x104b8b5f0>
    sta(((VRAM_Buffer2) + (1)), y);
    lda(CurrentNTAddr_High);
    sta(VRAM_Buffer2, y);
    lda(0x9a);
    sta(((VRAM_Buffer2) + (2)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104b8bbf0>
    // <conv.chunks.Comment object at 0x104b8bc80>
    // <conv.chunks.Comment object at 0x104b8bf20>
    sta(0x4);
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // <conv.chunks.Comment object at 0x104b90200>
    stx(0x1);
    lda(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x104b902f0>
    anda(0b11000000);
    sta(0x3);
    asl();
    rol();
    rol();
    tay();
    lda(offsetof(G, MetatileGraphics_Low), y);
    // <conv.chunks.Comment object at 0x104b905c0>
    // <conv.chunks.Comment object at 0x104b90590>
    // <conv.chunks.Comment object at 0x104b907a0>
    // <conv.chunks.Comment object at 0x104b90860>
    // <conv.chunks.Comment object at 0x104b90920>
    // <conv.chunks.Comment object at 0x104b909b0>
    sta(0x6);
    lda(offsetof(G, MetatileGraphics_High), y);
    sta(0x7);
    lda(MetatileBuffer, x);
    asl();
    // <conv.chunks.Comment object at 0x104b90d10>
    // <conv.chunks.Comment object at 0x104b90f80>
    asl();
    sta(0x2);
    lda(AreaParserTaskNum);
    anda(0b1);
    eor(0b1);
    asl();
    adc(0x2);
    // <conv.chunks.Comment object at 0x104b910a0>
    // <conv.chunks.Comment object at 0x104b912b0>
    // <conv.chunks.Comment object at 0x104b913d0>
    // <conv.chunks.Comment object at 0x104b91520>
    // <conv.chunks.Comment object at 0x104b915e0>
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x104b91790>
    lda((0x6), y);
    sta(((VRAM_Buffer2) + (3)), x);
    // <conv.chunks.Comment object at 0x104b91760>
    iny();
    lda((0x6), y);
    // <conv.chunks.Comment object at 0x104b91c70>
    sta(((VRAM_Buffer2) + (4)), x);
    ldy(0x4);
    lda(0x5);
    BNE(RightCheck);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x104b92000>
    // <conv.chunks.Comment object at 0x104b91fd0>
    // <conv.chunks.Comment object at 0x104b921b0>
    // <conv.chunks.Comment object at 0x104b92360>
    // <conv.chunks.Comment object at 0x104b92330>
    BCS(LLeft);
    rol(0x3);
    rol(0x3);
    // <conv.chunks.Comment object at 0x104b92660>
    // <conv.chunks.Comment object at 0x104b92630>
    rol(0x3);
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // <conv.chunks.Comment object at 0x104b92a50>
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x104b92a80>
    BCS(NextMTRow);
    lsr(0x3);
    lsr(0x3);
    // <conv.chunks.Comment object at 0x104b92d80>
    // <conv.chunks.Comment object at 0x104b92d50>
    lsr(0x3);
    lsr(0x3);
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // <conv.chunks.Comment object at 0x104b93260>
    lsr(0x3);
    lsr(0x3);
    JMP(NextMTRow);
}

int NextMTRow() {
    // <conv.chunks.Comment object at 0x104b932c0>
    // <conv.chunks.Comment object at 0x104b934a0>
    inc(0x4);
    JMP(SetAttrib);
}

int SetAttrib() {
    // <conv.chunks.Comment object at 0x104b935f0>
    lda(AttributeBuffer, y);
    ora(0x3);
    sta(AttributeBuffer, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x104b93800>
    // <conv.chunks.Comment object at 0x104b93890>
    // <conv.chunks.Comment object at 0x104b93a70>
    inc(0x0);
    ldx(0x1);
    inx();
    // <conv.chunks.Comment object at 0x104b93bf0>
    // <conv.chunks.Comment object at 0x104b93b00>
    cpx(0xd);
    BCC(DrawMTLoop);
    ldy(0x0);
    iny();
    // <conv.chunks.Comment object at 0x104b93e90>
    // <conv.chunks.Comment object at 0x104b9c0b0>
    // <conv.chunks.Comment object at 0x104b9c080>
    iny();
    iny();
    lda(0x0);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    inc(CurrentNTAddr_Low);
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x104b9c3e0>
    // <conv.chunks.Comment object at 0x104b9c5c0>
    // <conv.chunks.Comment object at 0x104b9c6e0>
    // <conv.chunks.Comment object at 0x104b9c800>
    // <conv.chunks.Comment object at 0x104b9c920>
    BNE(ExitDrawM);
    lda(0x80);
    sta(CurrentNTAddr_Low);
    lda(CurrentNTAddr_High);
    eor(0b100);
    // <conv.chunks.Comment object at 0x104b9cb30>
    // <conv.chunks.Comment object at 0x104b9cbc0>
    // <conv.chunks.Comment object at 0x104b9cd70>
    // <conv.chunks.Comment object at 0x104b9ce90>
    sta(CurrentNTAddr_High);
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // <conv.chunks.Comment object at 0x104b9d0a0>
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    sec();
    // <conv.chunks.Comment object at 0x104b9d2b0>
    // <conv.chunks.Comment object at 0x104b9d3d0>
    // <conv.chunks.Comment object at 0x104b9d520>
    sbc(0x4);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x104b9d610>
    sta(0x1);
    lda(CurrentNTAddr_High);
    // <conv.chunks.Comment object at 0x104b9d7c0>
    BCS(SetATHigh);
    eor(0b100);
    JMP(SetATHigh);
}

int SetATHigh() {
    // <conv.chunks.Comment object at 0x104b9dac0>
    // <conv.chunks.Comment object at 0x104b9dbe0>
    anda(0b100);
    ora(0x23);
    // <conv.chunks.Comment object at 0x104b9dd30>
    sta(0x0);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x104b9dee0>
    // <conv.chunks.Comment object at 0x104b9ddc0>
    lsr();
    adc(0xc0);
    sta(0x1);
    // <conv.chunks.Comment object at 0x104b9e1b0>
    // <conv.chunks.Comment object at 0x104b9e300>
    ldx(0x0);
    ldy(VRAM_Buffer2_Offset);
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(0x0);
    sta(VRAM_Buffer2, y);
    // <conv.chunks.Comment object at 0x104b9e6c0>
    lda(0x1);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x104b9e900>
    // <conv.chunks.Comment object at 0x104b9ea20>
    sta(((VRAM_Buffer2) + (1)), y);
    sta(0x1);
    lda(AttributeBuffer, x);
    sta(((VRAM_Buffer2) + (3)), y);
    // <conv.chunks.Comment object at 0x104b9ed50>
    // <conv.chunks.Comment object at 0x104b9ede0>
    // <conv.chunks.Comment object at 0x104b9ef90>
    lda(0x1);
    sta(((VRAM_Buffer2) + (2)), y);
    // <conv.chunks.Comment object at 0x104b9f200>
    lsr();
    sta(AttributeBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x104b9f530>
    // <conv.chunks.Comment object at 0x104b9f6b0>
    iny();
    iny();
    iny();
    inx();
    cpx(0x7);
    // <conv.chunks.Comment object at 0x104b9f920>
    // <conv.chunks.Comment object at 0x104b9f9b0>
    BCC(AttribLoop);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x104b9fec0>
    rts();
    JMP(ColorRotation);
}

int ColorRotation() {
    lda(FrameCounter);
    anda(0x7);
    BNE(ExitColorRot);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x104ba82c0>
    // <conv.chunks.Comment object at 0x104ba9490>
    // <conv.chunks.Comment object at 0x104ba9520>
    // <conv.chunks.Comment object at 0x104ba96d0>
    cpx(0x31);
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // <conv.chunks.Comment object at 0x104ba9850>
    // <conv.chunks.Comment object at 0x104ba9a30>
    // <conv.chunks.Comment object at 0x104ba9ac0>
    lda(offsetof(G, BlankPalette), y);
    sta(VRAM_Buffer1, x);
    inx();
    // <conv.chunks.Comment object at 0x104ba9c40>
    // <conv.chunks.Comment object at 0x104ba9dc0>
    iny();
    cpy(0x8);
    BCC(GetBlankPal);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x104ba9f40>
    // <conv.chunks.Comment object at 0x104baa0f0>
    lda(0x3);
    sta(0x0);
    lda(AreaType);
    asl();
    // <conv.chunks.Comment object at 0x104baa330>
    // <conv.chunks.Comment object at 0x104baa3c0>
    // <conv.chunks.Comment object at 0x104baa570>
    asl();
    tay();
    JMP(GetAreaPal);
}

int GetAreaPal() {
    // <conv.chunks.Comment object at 0x104baa6c0>
    // <conv.chunks.Comment object at 0x104baa750>
    lda(offsetof(G, Palette3Data), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x104baa8d0>
    iny();
    inx();
    dec(0x0);
    BPL(GetAreaPal);
    ldx(VRAM_Buffer1_Offset);
    ldy(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x104baac30>
    // <conv.chunks.Comment object at 0x104baacc0>
    // <conv.chunks.Comment object at 0x104baae40>
    // <conv.chunks.Comment object at 0x104baaf60>
    lda(offsetof(G, ColorRotatePalette), y);
    sta(((VRAM_Buffer1) + (4)), x);
    // <conv.chunks.Comment object at 0x104bab1a0>
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x104bab4d0>
    adc(0x7);
    sta(VRAM_Buffer1_Offset);
    inc(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x104bab740>
    lda(ColorRotateOffset);
    cmp(0x6);
    BCC(ExitColorRot);
    // <conv.chunks.Comment object at 0x104bab950>
    // <conv.chunks.Comment object at 0x104bab9e0>
    lda(0x0);
    sta(ColorRotateOffset);
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // <conv.chunks.Comment object at 0x104babbf0>
    // <conv.chunks.Comment object at 0x104babdd0>
    rts();
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
    // <conv.chunks.Comment object at 0x104bb40b0>
    // <conv.chunks.Comment object at 0x104bb4140>
    // <conv.chunks.Comment object at 0x104bb4da0>
    // <conv.chunks.Comment object at 0x104bb4f50>
    // <conv.chunks.Comment object at 0x104bb5070>
    // <conv.chunks.Comment object at 0x104bb5100>
    JSR(PutBlockMetatile);
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x104bb5340>
    rts();
    JMP(ReplaceBlockMetatile);
}

int ReplaceBlockMetatile() {
    JSR(WriteBlockMetatile);
    inc(Block_ResidualCounter);
    dec(Block_RepFlag, x);
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
    // <conv.chunks.Comment object at 0x104bb5bb0>
    // <conv.chunks.Comment object at 0x104bb5c40>
    // <conv.chunks.Comment object at 0x104bb5d60>
    // <conv.chunks.Comment object at 0x104bb5f10>
    cmp(0x58);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x104bb6090>
    cmp(0x51);
    BEQ(UseBOffset);
    iny();
    // <conv.chunks.Comment object at 0x104bb62a0>
    // <conv.chunks.Comment object at 0x104bb6480>
    cmp(0x5d);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x104bb6570>
    cmp(0x52);
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // <conv.chunks.Comment object at 0x104bb6780>
    // <conv.chunks.Comment object at 0x104bb6960>
    // <conv.chunks.Comment object at 0x104bb69f0>
    tya();
    ldy(VRAM_Buffer1_Offset);
    iny();
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}

int MoveVOffset() {
    // <conv.chunks.Comment object at 0x104bb6ae0>
    // <conv.chunks.Comment object at 0x104bb6c30>
    // <conv.chunks.Comment object at 0x104bb6cc0>
    // <conv.chunks.Comment object at 0x104bb6de0>
    dey();
    tya();
    // <conv.chunks.Comment object at 0x104bb6f00>
    clc();
    adc(10);
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(0x0);
    sty(0x1);
    // <conv.chunks.Comment object at 0x104bb7290>
    // <conv.chunks.Comment object at 0x104bb7260>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x104bb7560>
    tax();
    ldy(0x20);
    lda(0x6);
    cmp(0xd0);
    BCC(SaveHAdder);
    ldy(0x24);
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // <conv.chunks.Comment object at 0x104bb7680>
    // <conv.chunks.Comment object at 0x104bb77d0>
    // <conv.chunks.Comment object at 0x104bb7860>
    // <conv.chunks.Comment object at 0x104bb7950>
    // <conv.chunks.Comment object at 0x104bb7b00>
    // <conv.chunks.Comment object at 0x104bb7b90>
    sty(0x3);
    anda(0xf);
    asl();
    sta(0x4);
    // <conv.chunks.Comment object at 0x104bb7d10>
    // <conv.chunks.Comment object at 0x104bb7ec0>
    // <conv.chunks.Comment object at 0x104bb7f80>
    lda(0x0);
    sta(0x5);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104bc01d0>
    // <conv.chunks.Comment object at 0x104bc0110>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x104bc0470>
    asl();
    rol(0x5);
    // <conv.chunks.Comment object at 0x104bc0650>
    asl();
    rol(0x5);
    adc(0x4);
    sta(0x4);
    lda(0x5);
    adc(0x0);
    // <conv.chunks.Comment object at 0x104bc0800>
    // <conv.chunks.Comment object at 0x104bc07d0>
    // <conv.chunks.Comment object at 0x104bc0890>
    // <conv.chunks.Comment object at 0x104bc09b0>
    // <conv.chunks.Comment object at 0x104bc0bf0>
    clc();
    adc(0x3);
    sta(0x5);
    ldy(0x1);
    JMP(RemBridge);
}

int RemBridge() {
    // <conv.chunks.Comment object at 0x104bc0e30>
    // <conv.chunks.Comment object at 0x104bc0e00>
    // <conv.chunks.Comment object at 0x104bc0ec0>
    // <conv.chunks.Comment object at 0x104bc1100>
    lda(offsetof(G, BlockGfxData), x);
    sta(((VRAM_Buffer1) + (2)), y);
    // <conv.chunks.Comment object at 0x104bc12e0>
    lda(((offsetof(G, BlockGfxData)) + (1)), x);
    sta(((VRAM_Buffer1) + (3)), y);
    lda(((offsetof(G, BlockGfxData)) + (2)), x);
    sta(((VRAM_Buffer1) + (7)), y);
    lda(((offsetof(G, BlockGfxData)) + (3)), x);
    // <conv.chunks.Comment object at 0x104bc18b0>
    // <conv.chunks.Comment object at 0x104bc1ac0>
    // <conv.chunks.Comment object at 0x104bc1cd0>
    sta(((VRAM_Buffer1) + (8)), y);
    lda(0x4);
    sta(VRAM_Buffer1, y);
    clc();
    adc(0x20);
    sta(((VRAM_Buffer1) + (5)), y);
    lda(0x5);
    sta(((VRAM_Buffer1) - (1)), y);
    sta(((VRAM_Buffer1) + (4)), y);
    // <conv.chunks.Comment object at 0x104bc20c0>
    // <conv.chunks.Comment object at 0x104bc2330>
    // <conv.chunks.Comment object at 0x104bc23c0>
    // <conv.chunks.Comment object at 0x104bc2450>
    // <conv.chunks.Comment object at 0x104bc2720>
    // <conv.chunks.Comment object at 0x104bc27b0>
    // <conv.chunks.Comment object at 0x104bc29f0>
    lda(0x2);
    sta(((VRAM_Buffer1) + (1)), y);
    sta(((VRAM_Buffer1) + (6)), y);
    // <conv.chunks.Comment object at 0x104bc2c60>
    // <conv.chunks.Comment object at 0x104bc2f00>
    lda(0x0);
    sta(((VRAM_Buffer1) + (9)), y);
    ldx(0x0);
    rts();
    JMP(InitializeNameTables);
}

int InitializeNameTables() {
    lda(PPU_STATUS);
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x104c08fb0>
    // <conv.chunks.Comment object at 0x104c090d0>
    // <conv.chunks.Comment object at 0x104c091f0>
    // <conv.chunks.Comment object at 0x104c09310>
    JSR(WritePPUReg1);
    lda(0x24);
    // <conv.chunks.Comment object at 0x104c09520>
    JSR(WriteNTAddr);
    lda(0x20);
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x104c09b50>
    ldy(0xc0);
    lda(0x24);
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // <conv.chunks.Comment object at 0x104c09dc0>
    sta(PPU_DATA);
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(64);
    // <conv.chunks.Comment object at 0x104c0a2d0>
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
    // <conv.chunks.Comment object at 0x104c0a930>
    sta(VerticalScroll);
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x104c0ab40>
    // <conv.chunks.Comment object at 0x104c0ac90>
    // <conv.chunks.Comment object at 0x104c0acf0>
    sta(JOYPAD_PORT);
    lsr();
    tax();
    // <conv.chunks.Comment object at 0x104c0afc0>
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
    // <conv.chunks.Comment object at 0x104c0b380>
    pha();
    lda(JOYPAD_PORT, x);
    sta(0x0);
    lsr();
    ora(0x0);
    // <conv.chunks.Comment object at 0x104c0b500>
    // <conv.chunks.Comment object at 0x104c0b680>
    // <conv.chunks.Comment object at 0x104c0b650>
    // <conv.chunks.Comment object at 0x104c0b860>
    lsr();
    pla();
    rol();
    // <conv.chunks.Comment object at 0x104c0ba10>
    // <conv.chunks.Comment object at 0x104c0bad0>
    dey();
    BNE(PortLoop);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x104c0bbf0>
    // <conv.chunks.Comment object at 0x104c0bd10>
    pha();
    anda(0b110000);
    anda(JoypadBitMask, x);
    BEQ(Save8Bits);
    // <conv.chunks.Comment object at 0x104c0bef0>
    // <conv.chunks.Comment object at 0x104c10050>
    // <conv.chunks.Comment object at 0x104c101a0>
    pla();
    anda(0b11001111);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x104c10350>
    // <conv.chunks.Comment object at 0x104c10470>
    rts();
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta(JoypadBitMask, x);
    // <conv.chunks.Comment object at 0x104c10710>
    rts();
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x104c109b0>
    iny();
    lda((0x0), y);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x104c10b60>
    // <conv.chunks.Comment object at 0x104c10bc0>
    iny();
    lda((0x0), y);
    asl();
    // <conv.chunks.Comment object at 0x104c10e90>
    // <conv.chunks.Comment object at 0x104c11040>
    pha();
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b100);
    BCS(SetupWrites);
    anda(0b11111011);
    JMP(SetupWrites);
}

int SetupWrites() {
    // <conv.chunks.Comment object at 0x104c11160>
    // <conv.chunks.Comment object at 0x104c11280>
    // <conv.chunks.Comment object at 0x104c113a0>
    // <conv.chunks.Comment object at 0x104c114c0>
    // <conv.chunks.Comment object at 0x104c115e0>
    JSR(WritePPUReg1);
    pla();
    // <conv.chunks.Comment object at 0x104c11760>
    asl();
    BCC(GetLength);
    ora(0b10);
    // <conv.chunks.Comment object at 0x104c11880>
    // <conv.chunks.Comment object at 0x104c119a0>
    iny();
    JMP(GetLength);
}

int GetLength() {
    // <conv.chunks.Comment object at 0x104c11b50>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x104c11c70>
    tax();
    JMP(OutputToVRAM);
}

int OutputToVRAM() {
    // <conv.chunks.Comment object at 0x104c11d90>
    BCS(RepeatByte);
    iny();
    JMP(RepeatByte);
}

int RepeatByte() {
    // <conv.chunks.Comment object at 0x104c11f10>
    // <conv.chunks.Comment object at 0x104c11fa0>
    lda((0x0), y);
    sta(PPU_DATA);
    dex();
    // <conv.chunks.Comment object at 0x104c12270>
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x104c12540>
    // <conv.chunks.Comment object at 0x104c12510>
    lda(0x0);
    adc(0x1);
    sta(0x1);
    lda(0x3f);
    // <conv.chunks.Comment object at 0x104c127b0>
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x104c12e10>
    sta(PPU_ADDRESS);
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // <conv.chunks.Comment object at 0x104c13020>
    ldx(PPU_STATUS);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104c13170>
    lda((0x0), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // <conv.chunks.Comment object at 0x104c132c0>
    // <conv.chunks.Comment object at 0x104c13500>
    sta(PPU_SCROLL_REG);
    sta(PPU_SCROLL_REG);
    // <conv.chunks.Comment object at 0x104c13650>
    rts();
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta(PPU_CTRL_REG1);
    sta(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x104c13860>
    // <conv.chunks.Comment object at 0x104c13980>
    rts();
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(0x0);
    JSR(OutputNumbers);
    lda(0x0);
    lsr();
    // <conv.chunks.Comment object at 0x104c18380>
    // <conv.chunks.Comment object at 0x104c18530>
    // <conv.chunks.Comment object at 0x104c18a40>
    // <conv.chunks.Comment object at 0x104c18a10>
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}

int OutputNumbers() {
    clc();
    // <conv.chunks.Comment object at 0x104c18e00>
    adc(0x1);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104c18ef0>
    cmp(0x6);
    BCS(ExitOutputN);
    pha();
    asl();
    // <conv.chunks.Comment object at 0x104c192b0>
    // <conv.chunks.Comment object at 0x104c19370>
    tay();
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x104c19490>
    // <conv.chunks.Comment object at 0x104c195b0>
    // <conv.chunks.Comment object at 0x104c19640>
    BNE(SetupNums);
    lda(0x22);
    JMP(SetupNums);
}

int SetupNums() {
    sta(VRAM_Buffer1, x);
    lda(offsetof(G, StatusBarData), y);
    sta(((VRAM_Buffer1) + (1)), x);
    // <conv.chunks.Comment object at 0x104c19b50>
    // <conv.chunks.Comment object at 0x104c19ca0>
    lda(((offsetof(G, StatusBarData)) + (1)), y);
    sta(((VRAM_Buffer1) + (2)), x);
    sta(0x3);
    stx(0x2);
    pla();
    // <conv.chunks.Comment object at 0x104c1a2a0>
    // <conv.chunks.Comment object at 0x104c1a270>
    // <conv.chunks.Comment object at 0x104c1a330>
    tax();
    lda(offsetof(G, StatusBarOffset), x);
    // <conv.chunks.Comment object at 0x104c1a600>
    sec();
    sbc(((offsetof(G, StatusBarData)) + (1)), y);
    tay();
    // <conv.chunks.Comment object at 0x104c1a7e0>
    // <conv.chunks.Comment object at 0x104c1aa20>
    ldx(0x2);
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // <conv.chunks.Comment object at 0x104c1aab0>
    lda(DisplayDigits, y);
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    iny();
    dec(0x3);
    // <conv.chunks.Comment object at 0x104c1b050>
    BNE(DigitPLoop);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c1b230>
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    // <conv.chunks.Comment object at 0x104c1b560>
    inx();
    inx();
    stx(VRAM_Buffer1_Offset);
    JMP(ExitOutputN);
}

int ExitOutputN() {
    rts();
    JMP(DigitsMathRoutine);
}

int DigitsMathRoutine() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x104c1b950>
    cmp(TitleScreenModeValue);
    BEQ(EraseDMods);
    // <conv.chunks.Comment object at 0x104c1bb60>
    ldx(0x5);
    JMP(AddModLoop);
}

int AddModLoop() {
    // <conv.chunks.Comment object at 0x104c1bce0>
    lda(DigitModifier, x);
    clc();
    adc(DisplayDigits, y);
    BMI(BorrowOne);
    // <conv.chunks.Comment object at 0x104c1bf80>
    // <conv.chunks.Comment object at 0x104c24110>
    cmp(10);
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // <conv.chunks.Comment object at 0x104c24230>
    // <conv.chunks.Comment object at 0x104c24440>
    sta(DisplayDigits, y);
    dey();
    dex();
    BPL(AddModLoop);
    JMP(EraseDMods);
}

int EraseDMods() {
    // <conv.chunks.Comment object at 0x104c245f0>
    // <conv.chunks.Comment object at 0x104c246b0>
    // <conv.chunks.Comment object at 0x104c24740>
    // <conv.chunks.Comment object at 0x104c24860>
    lda(0x0);
    ldx(0x6);
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // <conv.chunks.Comment object at 0x104c24920>
    // <conv.chunks.Comment object at 0x104c24a40>
    sta(((DigitModifier) - (1)), x);
    dex();
    BPL(EraseMLoop);
    // <conv.chunks.Comment object at 0x104c24d70>
    rts();
    JMP(BorrowOne);
}

int BorrowOne() {
    // <conv.chunks.Comment object at 0x104c24f20>
    dec(((DigitModifier) - (1)), x);
    lda(0x9);
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // <conv.chunks.Comment object at 0x104c25130>
    // <conv.chunks.Comment object at 0x104c251c0>
    // <conv.chunks.Comment object at 0x104c25370>
    sec();
    sbc(10);
    inc(((DigitModifier) - (1)), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x104c258e0>
    JSR(TopScoreCheck);
    ldx(0xb);
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(0x5);
    // <conv.chunks.Comment object at 0x104c25c40>
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // <conv.chunks.Comment object at 0x104c25df0>
    lda(PlayerScoreDisplay, x);
    sbc(TopScoreDisplay, y);
    dex();
    dey();
    // <conv.chunks.Comment object at 0x104c25f70>
    // <conv.chunks.Comment object at 0x104c260f0>
    // <conv.chunks.Comment object at 0x104c261b0>
    BPL(GetScoreDiff);
    BCC(NoTopSc);
    inx();
    // <conv.chunks.Comment object at 0x104c26330>
    // <conv.chunks.Comment object at 0x104c264b0>
    iny();
    JMP(CopyScore);
}

int CopyScore() {
    // <conv.chunks.Comment object at 0x104c265d0>
    lda(PlayerScoreDisplay, x);
    sta(TopScoreDisplay, y);
    inx();
    iny();
    cpy(0x6);
    // <conv.chunks.Comment object at 0x104c26990>
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
    // <conv.chunks.Comment object at 0x104c26e10>
    // <conv.chunks.Comment object at 0x104c26e70>
    ldy(0x1f);
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // <conv.chunks.Comment object at 0x104c27ad0>
    sta(SoundMemory, y);
    dey();
    // <conv.chunks.Comment object at 0x104c27d10>
    BPL(ClrSndLoop);
    lda(0x18);
    // <conv.chunks.Comment object at 0x104c27e90>
    sta(DemoTimer);
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(0x4b);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x104c30200>
    // <conv.chunks.Comment object at 0x104c30290>
    ldx(0x21);
    lda(0x0);
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // <conv.chunks.Comment object at 0x104c30590>
    sta(Timers, x);
    dex();
    // <conv.chunks.Comment object at 0x104c30800>
    BPL(ClrTimersLoop);
    lda(HalfwayPage);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x104c30a70>
    BEQ(StartPage);
    lda(EntrancePage);
    JMP(StartPage);
}

int StartPage() {
    // <conv.chunks.Comment object at 0x104c30c80>
    // <conv.chunks.Comment object at 0x104c30da0>
    sta(ScreenLeft_PageLoc);
    sta(CurrentPageLoc);
    sta(BackloadingFlag);
    JSR(GetScreenPosition);
    ldy(0x20);
    anda(0b1);
    BEQ(SetInitNTHigh);
    // <conv.chunks.Comment object at 0x104c30ef0>
    // <conv.chunks.Comment object at 0x104c31010>
    // <conv.chunks.Comment object at 0x104c31130>
    // <conv.chunks.Comment object at 0x104c31250>
    // <conv.chunks.Comment object at 0x104c312e0>
    // <conv.chunks.Comment object at 0x104c31490>
    ldy(0x24);
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // <conv.chunks.Comment object at 0x104c31610>
    sty(CurrentNTAddr_High);
    ldy(0x80);
    sty(CurrentNTAddr_Low);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x104c31a00>
    // <conv.chunks.Comment object at 0x104c31ac0>
    asl();
    asl();
    sta(BlockBufferColumnPos);
    dec(AreaObjectLength);
    // <conv.chunks.Comment object at 0x104c31d60>
    dec(((AreaObjectLength) + (1)));
    dec(((AreaObjectLength) + (2)));
    lda(0xb);
    sta(ColumnSets);
    JSR(GetAreaDataAddrs);
    lda(PrimaryHardMode);
    BNE(SetSecHard);
    lda(WorldNumber);
    cmp(World5);
    // <conv.chunks.Comment object at 0x104c321e0>
    // <conv.chunks.Comment object at 0x104c32270>
    // <conv.chunks.Comment object at 0x104c32420>
    // <conv.chunks.Comment object at 0x104c32540>
    // <conv.chunks.Comment object at 0x104c32660>
    // <conv.chunks.Comment object at 0x104c32780>
    // <conv.chunks.Comment object at 0x104c328a0>
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda(LevelNumber);
    cmp(Level3);
    // <conv.chunks.Comment object at 0x104c32ae0>
    // <conv.chunks.Comment object at 0x104c32c00>
    // <conv.chunks.Comment object at 0x104c32d20>
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // <conv.chunks.Comment object at 0x104c32f60>
    inc(SecondaryHardMode);
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda(HalfwayPage);
    BEQ(DoneInitArea);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104c332c0>
    sta(PlayerEntranceCtrl);
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // <conv.chunks.Comment object at 0x104c334d0>
    lda(Silence);
    sta(AreaMusicQueue);
    lda(0x1);
    // <conv.chunks.Comment object at 0x104c33740>
    sta(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x104c33950>
    rts();
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(0x1);
    sta(FetchNewGameTimerFlag);
    sta(PlayerSize);
    // <conv.chunks.Comment object at 0x104c33bc0>
    // <conv.chunks.Comment object at 0x104c33d70>
    lda(0x2);
    sta(NumberofLives);
    // <conv.chunks.Comment object at 0x104c33ef0>
    sta(OffScr_NumberofLives);
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x104c3c260>
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // <conv.chunks.Comment object at 0x104c3c4a0>
    sta(((VRAM_Buffer1) - (1)), y);
    iny();
    BNE(ClearVRLoop);
    sta(GameTimerExpiredFlag);
    sta(DisableIntermediate);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x104c3c860>
    // <conv.chunks.Comment object at 0x104c3c980>
    // <conv.chunks.Comment object at 0x104c3caa0>
    lda(0xff);
    sta(BalPlatformAlignment);
    lda(ScreenLeft_PageLoc);
    lsr(Mirror_PPU_CTRL_REG1);
    anda(0x1);
    ror();
    rol(Mirror_PPU_CTRL_REG1);
    JSR(GetAreaMusic);
    lda(0x38);
    // <conv.chunks.Comment object at 0x104c3cc20>
    // <conv.chunks.Comment object at 0x104c3cdd0>
    // <conv.chunks.Comment object at 0x104c3cef0>
    // <conv.chunks.Comment object at 0x104c3d010>
    // <conv.chunks.Comment object at 0x104c3d160>
    // <conv.chunks.Comment object at 0x104c3d1f0>
    // <conv.chunks.Comment object at 0x104c3d310>
    // <conv.chunks.Comment object at 0x104c3d430>
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
    // <conv.chunks.Comment object at 0x104c3df40>
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
    // <conv.chunks.Comment object at 0x104c3e5d0>
    JSR(DoNothing1);
    inc(Sprite0HitDetectFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x104c3e7e0>
    // <conv.chunks.Comment object at 0x104c3e900>
    rts();
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(0x7);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c3eb70>
    // <conv.chunks.Comment object at 0x104c3ec00>
    sta(0x6);
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(0x7);
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // <conv.chunks.Comment object at 0x104c3ef60>
    cpx(0x1);
    BNE(InitByte);
    cpy(0x60);
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // <conv.chunks.Comment object at 0x104c3f080>
    // <conv.chunks.Comment object at 0x104c3f230>
    // <conv.chunks.Comment object at 0x104c3f2c0>
    // <conv.chunks.Comment object at 0x104c3f470>
    sta((0x6), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(0xff);
    // <conv.chunks.Comment object at 0x104c3f6e0>
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // <conv.chunks.Comment object at 0x104c3f920>
    // <conv.chunks.Comment object at 0x104c3f9b0>
    rts();
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x104c3fbf0>
    BEQ(ExitGetM);
    lda(AltEntranceControl);
    cmp(0x2);
    BEQ(ChkAreaType);
    ldy(0x5);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x104c441a0>
    // <conv.chunks.Comment object at 0x104c442c0>
    // <conv.chunks.Comment object at 0x104c44350>
    // <conv.chunks.Comment object at 0x104c44500>
    // <conv.chunks.Comment object at 0x104c44590>
    cmp(0x6);
    BEQ(StoreMusic);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x104c447a0>
    // <conv.chunks.Comment object at 0x104c44950>
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // <conv.chunks.Comment object at 0x104c44b60>
    ldy(AreaType);
    lda(CloudTypeOverride);
    BEQ(StoreMusic);
    ldy(0x4);
    JMP(StoreMusic);
}

int StoreMusic() {
    // <conv.chunks.Comment object at 0x104c44da0>
    // <conv.chunks.Comment object at 0x104c44ec0>
    // <conv.chunks.Comment object at 0x104c44f50>
    lda(offsetof(G, MusicSelectData), y);
    sta(AreaMusicQueue);
    JMP(ExitGetM);
}

int ExitGetM() {
    rts();
    JMP(Entrance_GameTimerSetup);
}

int Entrance_GameTimerSetup() {
    lda(ScreenLeft_PageLoc);
    sta(Player_PageLoc);
    lda(0x28);
    sta(VerticalForceDown);
    lda(0x1);
    sta(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x104c45850>
    // <conv.chunks.Comment object at 0x104c46510>
    // <conv.chunks.Comment object at 0x104c46630>
    // <conv.chunks.Comment object at 0x104c466c0>
    // <conv.chunks.Comment object at 0x104c46870>
    // <conv.chunks.Comment object at 0x104c46900>
    sta(Player_Y_HighPos);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c46ba0>
    sta(Player_State);
    dec(Player_CollisionBits);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104c46db0>
    // <conv.chunks.Comment object at 0x104c46ed0>
    sty(HalfwayPage);
    lda(AreaType);
    BNE(ChkStPos);
    // <conv.chunks.Comment object at 0x104c470e0>
    // <conv.chunks.Comment object at 0x104c47200>
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty(SwimmingFlag);
    ldx(PlayerEntranceCtrl);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x104c474d0>
    // <conv.chunks.Comment object at 0x104c475f0>
    BEQ(SetStPos);
    cpy(0x1);
    BEQ(SetStPos);
    ldx(((offsetof(G, AltYPosOffset)) - (2)), y);
    JMP(SetStPos);
}

int SetStPos() {
    // <conv.chunks.Comment object at 0x104c479e0>
    // <conv.chunks.Comment object at 0x104c47bf0>
    lda(offsetof(G, PlayerStarting_X_Pos), y);
    sta(Player_X_Position);
    lda(offsetof(G, PlayerStarting_Y_Pos), x);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x104c47d70>
    // <conv.chunks.Comment object at 0x104c47e90>
    // <conv.chunks.Comment object at 0x104c47fe0>
    lda(offsetof(G, PlayerBGPriorityData), x);
    sta(Player_SprAttrib);
    JSR(GetPlayerColors);
    ldy(GameTimerSetting);
    BEQ(ChkOverR);
    lda(FetchNewGameTimerFlag);
    BEQ(ChkOverR);
    lda(offsetof(G, GameTimerData), y);
    sta(GameTimerDisplay);
    // <conv.chunks.Comment object at 0x104c50260>
    // <conv.chunks.Comment object at 0x104c50380>
    // <conv.chunks.Comment object at 0x104c504a0>
    // <conv.chunks.Comment object at 0x104c505c0>
    // <conv.chunks.Comment object at 0x104c506e0>
    // <conv.chunks.Comment object at 0x104c50800>
    // <conv.chunks.Comment object at 0x104c50920>
    // <conv.chunks.Comment object at 0x104c50a70>
    lda(0x1);
    sta(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x104c50bf0>
    lsr();
    sta(((GameTimerDisplay) + (1)));
    sta(FetchNewGameTimerFlag);
    sta(StarInvincibleTimer);
    JMP(ChkOverR);
}

int ChkOverR() {
    // <conv.chunks.Comment object at 0x104c50ef0>
    // <conv.chunks.Comment object at 0x104c510d0>
    // <conv.chunks.Comment object at 0x104c511f0>
    // <conv.chunks.Comment object at 0x104c51310>
    ldy(JoypadOverride);
    BEQ(ChkSwimE);
    lda(0x3);
    // <conv.chunks.Comment object at 0x104c51550>
    sta(Player_State);
    ldx(0x0);
    // <conv.chunks.Comment object at 0x104c51760>
    JSR(InitBlock_XY_Pos);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x104c51970>
    sta(Block_Y_Position);
    ldx(0x5);
    ldy(0x0);
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // <conv.chunks.Comment object at 0x104c51b80>
    // <conv.chunks.Comment object at 0x104c51c10>
    // <conv.chunks.Comment object at 0x104c51d30>
    // <conv.chunks.Comment object at 0x104c51ee0>
    ldy(AreaType);
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // <conv.chunks.Comment object at 0x104c52030>
    // <conv.chunks.Comment object at 0x104c52150>
    // <conv.chunks.Comment object at 0x104c52270>
    lda(0x7);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x104c52330>
    rts();
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x104c52600>
    lda(0x0);
    sta(Sprite0HitDetectFlag);
    lda(Silence);
    // <conv.chunks.Comment object at 0x104c53230>
    sta(EventMusicQueue);
    dec(NumberofLives);
    BPL(StillInGame);
    // <conv.chunks.Comment object at 0x104c53470>
    // <conv.chunks.Comment object at 0x104c53590>
    lda(0x0);
    sta(OperMode_Task);
    lda(GameOverModeValue);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x104c53710>
    // <conv.chunks.Comment object at 0x104c538c0>
    // <conv.chunks.Comment object at 0x104c539e0>
    rts();
    JMP(StillInGame);
}

int StillInGame() {
    // <conv.chunks.Comment object at 0x104c53b90>
    lda(WorldNumber);
    asl();
    // <conv.chunks.Comment object at 0x104c53d10>
    tax();
    lda(LevelNumber);
    anda(0x2);
    BEQ(GetHalfway);
    // <conv.chunks.Comment object at 0x104c53e30>
    // <conv.chunks.Comment object at 0x104c53f50>
    // <conv.chunks.Comment object at 0x104c53fe0>
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // <conv.chunks.Comment object at 0x104c58260>
    ldy(offsetof(G, HalfwayPageNybbles), x);
    lda(LevelNumber);
    // <conv.chunks.Comment object at 0x104c583e0>
    lsr();
    tya();
    // <conv.chunks.Comment object at 0x104c585c0>
    BCS(MaskHPNyb);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x104c58770>
    // <conv.chunks.Comment object at 0x104c58830>
    lsr();
    lsr();
    JMP(MaskHPNyb);
}

int MaskHPNyb() {
    // <conv.chunks.Comment object at 0x104c589e0>
    anda(0b1111);
    cmp(ScreenLeft_PageLoc);
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(0x0);
    JMP(SetHalfway);
}

int SetHalfway() {
    // <conv.chunks.Comment object at 0x104c58c20>
    // <conv.chunks.Comment object at 0x104c58d40>
    // <conv.chunks.Comment object at 0x104c58e60>
    // <conv.chunks.Comment object at 0x104c58ef0>
    sta(HalfwayPage);
    JSR(TransposePlayers);
    JMP(ContinueGame);
    JMP(GameOverMode);
}

int GameOverMode() {
    lda(OperMode_Task);
    JSR(JumpEngine);
    JMP(SetupGameOver);
}

int SetupGameOver() {
    lda(0x0);
    sta(ScreenRoutineTask);
    sta(Sprite0HitDetectFlag);
    // <conv.chunks.Comment object at 0x104c59760>
    // <conv.chunks.Comment object at 0x104c597f0>
    // <conv.chunks.Comment object at 0x104c599a0>
    lda(GameOverMusic);
    sta(EventMusicQueue);
    inc(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x104c59bb0>
    // <conv.chunks.Comment object at 0x104c59cd0>
    // <conv.chunks.Comment object at 0x104c59df0>
    rts();
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c5a000>
    sta(DisableScreenFlag);
    lda(SavedJoypad1Bits);
    // <conv.chunks.Comment object at 0x104c5a210>
    anda(Start_Button);
    BNE(TerminateGame);
    lda(ScreenTimer);
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda(Silence);
    // <conv.chunks.Comment object at 0x104c5a780>
    sta(EventMusicQueue);
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda(WorldNumber);
    sta(ContinueWorld);
    // <conv.chunks.Comment object at 0x104c5a9c0>
    // <conv.chunks.Comment object at 0x104c5aae0>
    // <conv.chunks.Comment object at 0x104c5ac00>
    // <conv.chunks.Comment object at 0x104c5ad20>
    lda(0x0);
    asl();
    sta(OperMode_Task);
    sta(ScreenTimer);
    // <conv.chunks.Comment object at 0x104c5af60>
    // <conv.chunks.Comment object at 0x104c5aff0>
    // <conv.chunks.Comment object at 0x104c5b140>
    sta(OperMode);
    rts();
    JMP(ContinueGame);
}

int ContinueGame() {
    JSR(LoadAreaPointer);
    lda(0x1);
    sta(PlayerSize);
    inc(FetchNewGameTimerFlag);
    lda(0x0);
    sta(TimerControl);
    // <conv.chunks.Comment object at 0x104c5b410>
    // <conv.chunks.Comment object at 0x104c5b530>
    // <conv.chunks.Comment object at 0x104c5b5c0>
    // <conv.chunks.Comment object at 0x104c5b770>
    // <conv.chunks.Comment object at 0x104c5b890>
    // <conv.chunks.Comment object at 0x104c5b920>
    sta(PlayerStatus);
    sta(GameEngineSubroutine);
    sta(OperMode_Task);
    lda(0x1);
    sta(OperMode);
    JMP(GameIsOn);
}

int GameIsOn() {
    rts();
    JMP(TransposePlayers);
}

int TransposePlayers() {
    sec();
    lda(NumberOfPlayers);
    // <conv.chunks.Comment object at 0x104c641a0>
    // <conv.chunks.Comment object at 0x104c64230>
    BEQ(ExTrans);
    lda(OffScr_NumberofLives);
    BMI(ExTrans);
    lda(CurrentPlayer);
    eor(0b1);
    // <conv.chunks.Comment object at 0x104c64470>
    // <conv.chunks.Comment object at 0x104c64590>
    // <conv.chunks.Comment object at 0x104c646e0>
    // <conv.chunks.Comment object at 0x104c64800>
    sta(CurrentPlayer);
    ldx(0x6);
    JMP(TransLoop);
}

int TransLoop() {
    // <conv.chunks.Comment object at 0x104c64a70>
    lda(OnscreenPlayerInfo, x);
    pha();
    lda(OffscreenPlayerInfo, x);
    // <conv.chunks.Comment object at 0x104c64cb0>
    // <conv.chunks.Comment object at 0x104c64d40>
    sta(OnscreenPlayerInfo, x);
    pla();
    sta(OffscreenPlayerInfo, x);
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
    ldy(AreaParserTaskNum);
    BNE(DoAPTasks);
    // <conv.chunks.Comment object at 0x104c65850>
    // <conv.chunks.Comment object at 0x104c65970>
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
    // <conv.chunks.Comment object at 0x104c65ee0>
    // <conv.chunks.Comment object at 0x104c66000>
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
    inc(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x104c668d0>
    lda(CurrentColumnPos);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104c66ae0>
    BNE(NoColWrap);
    sta(CurrentColumnPos);
    inc(CurrentPageLoc);
    JMP(NoColWrap);
}

int NoColWrap() {
    // <conv.chunks.Comment object at 0x104c66cf0>
    // <conv.chunks.Comment object at 0x104c66e10>
    // <conv.chunks.Comment object at 0x104c66f30>
    inc(BlockBufferColumnPos);
    lda(BlockBufferColumnPos);
    anda(0b11111);
    sta(BlockBufferColumnPos);
    // <conv.chunks.Comment object at 0x104c67170>
    // <conv.chunks.Comment object at 0x104c67290>
    rts();
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
    // <conv.chunks.Comment object at 0x104c81610>
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
    // <conv.chunks.Comment object at 0x104c81dc0>
    sec();
    sbc(0x3);
    BPL(ThirdP);
    JMP(RendBack);
}

int RendBack() {
    // <conv.chunks.Comment object at 0x104c82000>
    // <conv.chunks.Comment object at 0x104c82090>
    // <conv.chunks.Comment object at 0x104c82270>
    asl();
    asl();
    asl();
    asl();
    adc(((offsetof(G, BSceneDataOffsets)) - (1)), y);
    adc(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x104c82510>
    // <conv.chunks.Comment object at 0x104c82720>
    tax();
    lda(offsetof(G, BackSceneryData), x);
    BEQ(RendFore);
    // <conv.chunks.Comment object at 0x104c828d0>
    // <conv.chunks.Comment object at 0x104c82a20>
    pha();
    anda(0xf);
    // <conv.chunks.Comment object at 0x104c82bd0>
    sec();
    sbc(0x1);
    sta(0x0);
    asl();
    adc(0x0);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x104c82d80>
    // <conv.chunks.Comment object at 0x104c82ed0>
    // <conv.chunks.Comment object at 0x104c82e10>
    // <conv.chunks.Comment object at 0x104c830b0>
    // <conv.chunks.Comment object at 0x104c83080>
    // <conv.chunks.Comment object at 0x104c83290>
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    lda(0x3);
    // <conv.chunks.Comment object at 0x104c83590>
    // <conv.chunks.Comment object at 0x104c83620>
    sta(0x0);
    JMP(SceLoop1);
}

int SceLoop1() {
    // <conv.chunks.Comment object at 0x104c836b0>
    lda(offsetof(G, BackSceneryMetatiles), x);
    sta(MetatileBuffer, y);
    // <conv.chunks.Comment object at 0x104c839b0>
    inx();
    iny();
    cpy(0xb);
    // <conv.chunks.Comment object at 0x104c83c20>
    BEQ(RendFore);
    dec(0x0);
    // <conv.chunks.Comment object at 0x104c83e60>
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // <conv.chunks.Comment object at 0x104c88080>
    ldx(ForegroundScenery);
    BEQ(RendTerr);
    ldy(((offsetof(G, FSceneDataOffsets)) - (1)), x);
    ldx(0x0);
    JMP(SceLoop2);
}

int SceLoop2() {
    // <conv.chunks.Comment object at 0x104c881d0>
    // <conv.chunks.Comment object at 0x104c882f0>
    // <conv.chunks.Comment object at 0x104c88500>
    // <conv.chunks.Comment object at 0x104c88590>
    lda(offsetof(G, ForeSceneryData), y);
    BEQ(NoFore);
    // <conv.chunks.Comment object at 0x104c887a0>
    sta(MetatileBuffer, x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x104c88b90>
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // <conv.chunks.Comment object at 0x104c88da0>
    ldy(AreaType);
    BNE(TerMTile);
    lda(WorldNumber);
    cmp(World8);
    // <conv.chunks.Comment object at 0x104c88ef0>
    // <conv.chunks.Comment object at 0x104c89010>
    // <conv.chunks.Comment object at 0x104c89130>
    BNE(TerMTile);
    lda(0x62);
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // <conv.chunks.Comment object at 0x104c89370>
    // <conv.chunks.Comment object at 0x104c89400>
    // <conv.chunks.Comment object at 0x104c895e0>
    lda(offsetof(G, TerrainMetatiles), y);
    ldy(CloudTypeOverride);
    BEQ(StoreMT);
    lda(0x88);
    JMP(StoreMT);
}

int StoreMT() {
    // <conv.chunks.Comment object at 0x104c89760>
    // <conv.chunks.Comment object at 0x104c89880>
    // <conv.chunks.Comment object at 0x104c899d0>
    // <conv.chunks.Comment object at 0x104c89a60>
    sta(0x7);
    ldx(0x0);
    lda(TerrainControl);
    asl();
    // <conv.chunks.Comment object at 0x104c89c10>
    // <conv.chunks.Comment object at 0x104c89d00>
    // <conv.chunks.Comment object at 0x104c89ee0>
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // <conv.chunks.Comment object at 0x104c8a000>
    lda(offsetof(G, TerrainRenderBits), y);
    sta(0x0);
    iny();
    // <conv.chunks.Comment object at 0x104c8a210>
    sty(0x1);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x104c8a330>
    BEQ(NoCloud2);
    cpx(0x0);
    // <conv.chunks.Comment object at 0x104c8a630>
    BEQ(NoCloud2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c8a870>
    anda(0b1000);
    sta(0x0);
    JMP(NoCloud2);
}

int NoCloud2() {
    // <conv.chunks.Comment object at 0x104c8aa50>
    ldy(0x0);
    JMP(TerrBChk);
}

int TerrBChk() {
    // <conv.chunks.Comment object at 0x104c8ac00>
    lda(offsetof(G, Bitmasks), y);
    bit(0x0);
    BEQ(NextTBit);
    // <conv.chunks.Comment object at 0x104c8ae10>
    lda(0x7);
    sta(MetatileBuffer, x);
    JMP(NextTBit);
}

int NextTBit() {
    // <conv.chunks.Comment object at 0x104c8b020>
    // <conv.chunks.Comment object at 0x104c8b260>
    inx();
    cpx(0xd);
    BEQ(RendBBuf);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x104c8b3b0>
    // <conv.chunks.Comment object at 0x104c8b560>
    cmp(0x2);
    BNE(EndUChk);
    // <conv.chunks.Comment object at 0x104c8b6e0>
    cpx(0xb);
    BNE(EndUChk);
    lda(0x54);
    // <conv.chunks.Comment object at 0x104c8b920>
    // <conv.chunks.Comment object at 0x104c8bb00>
    sta(0x7);
    JMP(EndUChk);
}

int EndUChk() {
    // <conv.chunks.Comment object at 0x104c8bb90>
    iny();
    cpy(0x8);
    BNE(TerrBChk);
    // <conv.chunks.Comment object at 0x104c8be90>
    ldy(0x1);
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // <conv.chunks.Comment object at 0x104c98080>
    // <conv.chunks.Comment object at 0x104c98290>
    JSR(ProcessAreaData);
    lda(BlockBufferColumnPos);
    JSR(GetBlockBufferAddr);
    // <conv.chunks.Comment object at 0x104c984d0>
    ldx(0x0);
    ldy(0x0);
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(0x0);
    lda(MetatileBuffer, x);
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x104c988c0>
    // <conv.chunks.Comment object at 0x104c98a70>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x104c98c50>
    rol();
    tay();
    lda(MetatileBuffer, x);
    cmp(offsetof(G, BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(0x0);
    JMP(StrBlock);
}

int StrBlock() {
    // <conv.chunks.Comment object at 0x104c98da0>
    // <conv.chunks.Comment object at 0x104c98e30>
    // <conv.chunks.Comment object at 0x104c98f80>
    // <conv.chunks.Comment object at 0x104c990d0>
    // <conv.chunks.Comment object at 0x104c991f0>
    // <conv.chunks.Comment object at 0x104c99280>
    ldy(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x104c99400>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x104c996a0>
    adc(0x10);
    tay();
    inx();
    // <conv.chunks.Comment object at 0x104c998e0>
    cpx(0xd);
    BCC(ChkMTLow);
    // <conv.chunks.Comment object at 0x104c999d0>
    rts();
    JMP(ProcessAreaData);
}

int ProcessAreaData() {
    ldx(0x2);
    JMP(ProcADLoop);
}

int ProcADLoop() {
    stx(ObjectOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104c9a1e0>
    sta(BehindAreaParserFlag);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    cmp(0xfd);
    // <conv.chunks.Comment object at 0x104c9a3f0>
    // <conv.chunks.Comment object at 0x104c9a510>
    // <conv.chunks.Comment object at 0x104c9a690>
    BEQ(RdyDecode);
    lda(AreaObjectLength, x);
    BPL(RdyDecode);
    // <conv.chunks.Comment object at 0x104c9a8a0>
    // <conv.chunks.Comment object at 0x104c9a9f0>
    iny();
    lda((AreaData), y);
    asl();
    // <conv.chunks.Comment object at 0x104c9aba0>
    // <conv.chunks.Comment object at 0x104c9ad50>
    BCC(Chk1Row13);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x104c9aed0>
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
    // <conv.chunks.Comment object at 0x104c9b3e0>
    // <conv.chunks.Comment object at 0x104c9b560>
    // <conv.chunks.Comment object at 0x104c9b6b0>
    BNE(Chk1Row14);
    iny();
    // <conv.chunks.Comment object at 0x104c9b8f0>
    lda((AreaData), y);
    dey();
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x104c9bb00>
    // <conv.chunks.Comment object at 0x104c9bb90>
    BNE(CheckRear);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x104c9bda0>
    BNE(CheckRear);
    iny();
    // <conv.chunks.Comment object at 0x104c9bfe0>
    lda((AreaData), y);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x104ca4200>
    sta(AreaObjectPageLoc);
    inc(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x104ca4410>
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // <conv.chunks.Comment object at 0x104ca4650>
    cmp(0xe);
    BNE(CheckRear);
    lda(BackloadingFlag);
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // <conv.chunks.Comment object at 0x104ca4890>
    // <conv.chunks.Comment object at 0x104ca49b0>
    // <conv.chunks.Comment object at 0x104ca4ad0>
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    BCC(SetBehind);
    JMP(RdyDecode);
}

int RdyDecode() {
    // <conv.chunks.Comment object at 0x104ca4c20>
    // <conv.chunks.Comment object at 0x104ca4d40>
    // <conv.chunks.Comment object at 0x104ca4e60>
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}

int SetBehind() {
    // <conv.chunks.Comment object at 0x104ca50a0>
    inc(BehindAreaParserFlag);
    JMP(NextAObj);
}

int NextAObj() {
    // <conv.chunks.Comment object at 0x104ca51f0>
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // <conv.chunks.Comment object at 0x104ca5340>
    ldx(ObjectOffset);
    lda(AreaObjectLength, x);
    BMI(ProcLoopb);
    dec(AreaObjectLength, x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // <conv.chunks.Comment object at 0x104ca5490>
    // <conv.chunks.Comment object at 0x104ca55e0>
    // <conv.chunks.Comment object at 0x104ca5700>
    // <conv.chunks.Comment object at 0x104ca5850>
    dex();
    BPL(ProcADLoop);
    lda(BehindAreaParserFlag);
    BNE(ProcessAreaData);
    lda(BackloadingFlag);
    BNE(ProcessAreaData);
    JMP(EndAParse);
}

int EndAParse() {
    rts();
    JMP(IncAreaObjOffset);
}

int IncAreaObjOffset() {
    inc(AreaDataOffset);
    // <conv.chunks.Comment object at 0x104ca5fd0>
    inc(AreaDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104ca61e0>
    sta(AreaObjectPageSel);
    rts();
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104ca64b0>
    BMI(Chk1stB);
    ldy(AreaObjOffsetBuffer, x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // <conv.chunks.Comment object at 0x104ca6720>
    // <conv.chunks.Comment object at 0x104ca6870>
    ldx(0x10);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x104ca6960>
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
    // <conv.chunks.Comment object at 0x104ca6bd0>
    // <conv.chunks.Comment object at 0x104ca6d80>
    // <conv.chunks.Comment object at 0x104ca6ed0>
    // <conv.chunks.Comment object at 0x104ca6f60>
    // <conv.chunks.Comment object at 0x104ca7110>
    // <conv.chunks.Comment object at 0x104ca7260>
    // <conv.chunks.Comment object at 0x104ca72f0>
    // <conv.chunks.Comment object at 0x104ca74a0>
    // <conv.chunks.Comment object at 0x104ca7530>
    stx(0x7);
    ldx(ObjectOffset);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x104ca76b0>
    // <conv.chunks.Comment object at 0x104ca7860>
    BNE(ChkRow13);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104ca7a70>
    sta(0x7);
    lda(0x2e);
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // <conv.chunks.Comment object at 0x104ca7b00>
    // <conv.chunks.Comment object at 0x104ca7d10>
    // <conv.chunks.Comment object at 0x104ca7f20>
    cmp(0xd);
    BNE(ChkSRows);
    lda(0x22);
    // <conv.chunks.Comment object at 0x104cac1a0>
    sta(0x7);
    iny();
    // <conv.chunks.Comment object at 0x104cac350>
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
    // <conv.chunks.Comment object at 0x104cac5c0>
    // <conv.chunks.Comment object at 0x104cac6e0>
    // <conv.chunks.Comment object at 0x104cac800>
    // <conv.chunks.Comment object at 0x104cac980>
    // <conv.chunks.Comment object at 0x104cacaa0>
    // <conv.chunks.Comment object at 0x104cacb30>
    // <conv.chunks.Comment object at 0x104cacce0>
    // <conv.chunks.Comment object at 0x104cace00>
    anda(0b111111);
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // <conv.chunks.Comment object at 0x104cacf50>
    // <conv.chunks.Comment object at 0x104cad0a0>
    cmp(0xc);
    BCS(SpecObj);
    iny();
    // <conv.chunks.Comment object at 0x104cad340>
    lda((AreaData), y);
    anda(0b1110000);
    BNE(LrgObj);
    // <conv.chunks.Comment object at 0x104cad520>
    // <conv.chunks.Comment object at 0x104cad640>
    lda(0x16);
    sta(0x7);
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104cad8b0>
    // <conv.chunks.Comment object at 0x104cad940>
    // <conv.chunks.Comment object at 0x104cadb20>
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // <conv.chunks.Comment object at 0x104cadd60>
    sta(0x0);
    cmp(0x70);
    // <conv.chunks.Comment object at 0x104cade80>
    BNE(NotWPipe);
    lda((AreaData), y);
    anda(0b1000);
    BEQ(NotWPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104cae0f0>
    // <conv.chunks.Comment object at 0x104cae270>
    // <conv.chunks.Comment object at 0x104cae390>
    // <conv.chunks.Comment object at 0x104cae4b0>
    sta(0x0);
    JMP(NotWPipe);
}

int NotWPipe() {
    // <conv.chunks.Comment object at 0x104cae540>
    lda(0x0);
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // <conv.chunks.Comment object at 0x104cae900>
    iny();
    lda((AreaData), y);
    anda(0b1110000);
    JMP(MoveAOId);
}

int MoveAOId() {
    // <conv.chunks.Comment object at 0x104caeb70>
    // <conv.chunks.Comment object at 0x104caec90>
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}

int NormObj() {
    // <conv.chunks.Comment object at 0x104caef30>
    sta(0x0);
    lda(AreaObjectLength, x);
    BPL(RunAObj);
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x104caf050>
    // <conv.chunks.Comment object at 0x104caf200>
    // <conv.chunks.Comment object at 0x104caf350>
    // <conv.chunks.Comment object at 0x104caf470>
    BEQ(InitRear);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x104caf680>
    // <conv.chunks.Comment object at 0x104caf7a0>
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x104cafa70>
    BNE(LeavePar);
    lda(BackloadingFlag);
    BNE(StrAObj);
    JMP(LeavePar);
}

int LeavePar() {
    rts();
    JMP(InitRear);
}

int InitRear() {
    // <conv.chunks.Comment object at 0x104caffb0>
    lda(BackloadingFlag);
    BEQ(BackColC);
    lda(0x0);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x104cb8140>
    // <conv.chunks.Comment object at 0x104cb8260>
    // <conv.chunks.Comment object at 0x104cb82f0>
    sta(BehindAreaParserFlag);
    sta(ObjectOffset);
    JMP(LoopCmdE);
}

int LoopCmdE() {
    rts();
    JMP(BackColC);
}

int BackColC() {
    // <conv.chunks.Comment object at 0x104cb8740>
    ldy(AreaDataOffset);
    lda((AreaData), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x104cb8a10>
    lsr();
    lsr();
    lsr();
    lsr();
    cmp(CurrentColumnPos);
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // <conv.chunks.Comment object at 0x104cb8d70>
    // <conv.chunks.Comment object at 0x104cb8e90>
    // <conv.chunks.Comment object at 0x104cb8fb0>
    lda(AreaDataOffset);
    sta(AreaObjOffsetBuffer, x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // <conv.chunks.Comment object at 0x104cb9250>
    // <conv.chunks.Comment object at 0x104cb9370>
    lda(0x0);
    clc();
    // <conv.chunks.Comment object at 0x104cb93d0>
    adc(0x7);
    JSR(JumpEngine);
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy(AreaObjOffsetBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x104cbb3b0>
    // <conv.chunks.Comment object at 0x104cbb5c0>
    // <conv.chunks.Comment object at 0x104cbb6b0>
    // <conv.chunks.Comment object at 0x104cbb710>
    // <conv.chunks.Comment object at 0x104cbb890>
    lda((AreaData), y);
    pha();
    // <conv.chunks.Comment object at 0x104cbbaa0>
    anda(0b1000000);
    BNE(Alter2);
    // <conv.chunks.Comment object at 0x104cbbc20>
    pla();
    pha();
    anda(0b1111);
    sta(TerrainControl);
    // <conv.chunks.Comment object at 0x104cbbe30>
    // <conv.chunks.Comment object at 0x104cbbec0>
    // <conv.chunks.Comment object at 0x104cbbfe0>
    pla();
    anda(0b110000);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x104cc41d0>
    // <conv.chunks.Comment object at 0x104cc4320>
    // <conv.chunks.Comment object at 0x104cc43e0>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x104cc4590>
    rts();
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(0b111);
    cmp(0x4);
    BCC(SetFore);
    // <conv.chunks.Comment object at 0x104cc4830>
    // <conv.chunks.Comment object at 0x104cc4950>
    // <conv.chunks.Comment object at 0x104cc49e0>
    sta(BackgroundColorCtrl);
    lda(0x0);
    JMP(SetFore);
}

int SetFore() {
    // <conv.chunks.Comment object at 0x104cc4d10>
    sta(ForegroundScenery);
    rts();
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(0x4);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x104cc5010>
    // <conv.chunks.Comment object at 0x104cc50a0>
    BEQ(WarpNum);
    inx();
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x104cc53a0>
    // <conv.chunks.Comment object at 0x104cc5430>
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta(WarpZoneControl);
    JSR(WriteGameText);
    // <conv.chunks.Comment object at 0x104cc58e0>
    // <conv.chunks.Comment object at 0x104cc5a00>
    lda(PiranhaPlant);
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda(ScrollLock);
    // <conv.chunks.Comment object at 0x104cc5d60>
    eor(0b1);
    sta(ScrollLock);
    rts();
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(0x0);
    // <conv.chunks.Comment object at 0x104cc6120>
    // <conv.chunks.Comment object at 0x104cc61b0>
    lda(0x0);
    ldx(0x4);
    JMP(KillELoop);
}

int KillELoop() {
    ldy(Enemy_ID, x);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x104cc6630>
    BNE(NoKillE);
    sta(Enemy_Flag, x);
    JMP(NoKillE);
}

int NoKillE() {
    // <conv.chunks.Comment object at 0x104cc6840>
    // <conv.chunks.Comment object at 0x104cc6990>
    dex();
    BPL(KillELoop);
    rts();
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // <conv.chunks.Comment object at 0x104cc6c90>
    ldx(0x0);
    lda(((offsetof(G, FrenzyIDData)) - (8)), x);
    // <conv.chunks.Comment object at 0x104cc6f30>
    ldy(0x5);
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // <conv.chunks.Comment object at 0x104cc7200>
    dey();
    BMI(ExitAFrenzy);
    cmp(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x104cc7380>
    // <conv.chunks.Comment object at 0x104cc74a0>
    BNE(FreCompLoop);
    lda(0x0);
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // <conv.chunks.Comment object at 0x104cc76e0>
    // <conv.chunks.Comment object at 0x104cc7770>
    sta(EnemyFrenzyQueue);
    rts();
    JMP(AreaStyleObject);
}

int AreaStyleObject() {
    lda(AreaStyle);
    // <conv.chunks.Comment object at 0x104cc7a10>
    // <conv.chunks.Comment object at 0x104cc7a70>
    JSR(JumpEngine);
    JMP(TreeLedge);
}

int TreeLedge() {
    JSR(GetLrgObjAttrib);
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104cc7ce0>
    // <conv.chunks.Comment object at 0x104cc7fb0>
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104cd03b0>
    lda(CurrentPageLoc);
    ora(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x104cd05f0>
    BEQ(MidTreeL);
    lda(0x16);
    // <conv.chunks.Comment object at 0x104cd0800>
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
    // <conv.chunks.Comment object at 0x104cd0b00>
    // <conv.chunks.Comment object at 0x104cd0bf0>
    // <conv.chunks.Comment object at 0x104cd0dd0>
    // <conv.chunks.Comment object at 0x104cd0e60>
    // <conv.chunks.Comment object at 0x104cd1010>
    lda(0x18);
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(0x6);
    // <conv.chunks.Comment object at 0x104cd12b0>
    // <conv.chunks.Comment object at 0x104cd1400>
    BCC(EndMushL);
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104cd15e0>
    lsr();
    sta(MushroomLedgeHalfLen, x);
    lda(0x19);
    // <conv.chunks.Comment object at 0x104cd18e0>
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // <conv.chunks.Comment object at 0x104cd1b20>
    lda(0x1b);
    ldy(AreaObjectLength, x);
    BEQ(NoUnder);
    lda(MushroomLedgeHalfLen, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x104cd1eb0>
    // <conv.chunks.Comment object at 0x104cd2030>
    ldx(0x7);
    lda(0x1a);
    sta(MetatileBuffer, x);
    cpy(0x6);
    BNE(MushLExit);
    // <conv.chunks.Comment object at 0x104cd2270>
    // <conv.chunks.Comment object at 0x104cd2480>
    // <conv.chunks.Comment object at 0x104cd2510>
    inx();
    lda(0x4f);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x104cd2780>
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
    // <conv.chunks.Comment object at 0x104cd2b10>
    // <conv.chunks.Comment object at 0x104cd2ba0>
    // <conv.chunks.Comment object at 0x104cd2d50>
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104cd2e70>
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(0x0);
    BCS(RenderPul);
    // <conv.chunks.Comment object at 0x104cd31d0>
    // <conv.chunks.Comment object at 0x104cd3470>
    // <conv.chunks.Comment object at 0x104cd3500>
    iny();
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104cd3740>
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
    // <conv.chunks.Comment object at 0x104cd3b90>
    // <conv.chunks.Comment object at 0x104cd3cb0>
    rts();
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(0x7);
    // <conv.chunks.Comment object at 0x104cd3e30>
    // <conv.chunks.Comment object at 0x104cddee0>
    ldy(0x4);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x104cde030>
    txa();
    pha();
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x104cde2a0>
    // <conv.chunks.Comment object at 0x104cde330>
    // <conv.chunks.Comment object at 0x104cde4b0>
    lda(0xb);
    sta(0x6);
    JMP(CRendLoop);
}

int CRendLoop() {
    // <conv.chunks.Comment object at 0x104cde6c0>
    // <conv.chunks.Comment object at 0x104cde750>
    lda(offsetof(G, CastleMetatiles), y);
    sta(MetatileBuffer, x);
    inx();
    // <conv.chunks.Comment object at 0x104cdea80>
    lda(0x6);
    BEQ(ChkCFloor);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x104cdeb10>
    // <conv.chunks.Comment object at 0x104cded50>
    // <conv.chunks.Comment object at 0x104cdee10>
    iny();
    iny();
    iny();
    dec(0x6);
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // <conv.chunks.Comment object at 0x104cdf080>
    // <conv.chunks.Comment object at 0x104cdf110>
    cpx(0xb);
    BNE(CRendLoop);
    // <conv.chunks.Comment object at 0x104cdf230>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x104cdf4a0>
    lda(CurrentPageLoc);
    BEQ(ExitCastle);
    lda(AreaObjectLength, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x104cdf620>
    // <conv.chunks.Comment object at 0x104cdf740>
    // <conv.chunks.Comment object at 0x104cdf890>
    BEQ(PlayerStop);
    ldy(0x7);
    // <conv.chunks.Comment object at 0x104cdfad0>
    BNE(NotTall);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x104cdfce0>
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // <conv.chunks.Comment object at 0x104cdfef0>
    cmp(0x2);
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x104cdffe0>
    // <conv.chunks.Comment object at 0x104ce41d0>
    pha();
    JSR(FindEmptyEnemySlot);
    // <conv.chunks.Comment object at 0x104ce4380>
    pla();
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x104ce4530>
    lda(CurrentPageLoc);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x104ce4770>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x104ce4920>
    // <conv.chunks.Comment object at 0x104ce4b00>
    lda(0x90);
    sta(Enemy_Y_Position, x);
    lda(StarFlagObject);
    // <conv.chunks.Comment object at 0x104ce4cb0>
    // <conv.chunks.Comment object at 0x104ce4e90>
    sta(Enemy_ID, x);
    rts();
    JMP(PlayerStop);
}

int PlayerStop() {
    // <conv.chunks.Comment object at 0x104ce5160>
    ldy(0x52);
    sty(((MetatileBuffer) + (10)));
    JMP(ExitCastle);
}

int ExitCastle() {
    rts();
    JMP(WaterPipe);
}

int WaterPipe() {
    JSR(GetLrgObjAttrib);
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x104ce55b0>
    // <conv.chunks.Comment object at 0x104ce56d0>
    // <conv.chunks.Comment object at 0x104ce5880>
    lda(0x6b);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x104ce59d0>
    lda(0x6c);
    sta(((MetatileBuffer) + (1)), x);
    rts();
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x104ce5f40>
    // <conv.chunks.Comment object at 0x104ce5fa0>
    // <conv.chunks.Comment object at 0x104ce6000>
    JSR(ChkLrgObjFixedLength);
    ldy(0xa);
    // <conv.chunks.Comment object at 0x104ce6210>
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(0x6);
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // <conv.chunks.Comment object at 0x104ce6420>
    // <conv.chunks.Comment object at 0x104ce6540>
    // <conv.chunks.Comment object at 0x104ce65d0>
    lda(0x0);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x104ce6720>
    dex();
    BPL(VPipeSectLoop);
    lda(offsetof(G, VerticalPipeData), y);
    // <conv.chunks.Comment object at 0x104ce6a80>
    sta(((MetatileBuffer) + (7)));
    JMP(NoBlankP);
}

int NoBlankP() {
    rts();
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x104ce7080>
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}

int RenderSidewaysPipe() {
    dey();
    dey();
    // <conv.chunks.Comment object at 0x104ce7a10>
    // <conv.chunks.Comment object at 0x104ce7ad0>
    sty(0x5);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104ce7b60>
    sty(0x6);
    ldx(0x5);
    // <conv.chunks.Comment object at 0x104ce7e30>
    inx();
    lda(offsetof(G, SidePipeShaftData), y);
    // <conv.chunks.Comment object at 0x104cec080>
    cmp(0x0);
    BEQ(DrawSidePart);
    // <conv.chunks.Comment object at 0x104cec230>
    ldx(0x0);
    ldy(0x5);
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // <conv.chunks.Comment object at 0x104cec500>
    // <conv.chunks.Comment object at 0x104cec590>
    // <conv.chunks.Comment object at 0x104cec740>
    // <conv.chunks.Comment object at 0x104cec7d0>
    ldy(0x6);
    lda(offsetof(G, SidePipeTopPart), y);
    sta(MetatileBuffer, x);
    lda(offsetof(G, SidePipeBottomPart), y);
    // <conv.chunks.Comment object at 0x104ceca40>
    // <conv.chunks.Comment object at 0x104cecb90>
    sta(((MetatileBuffer) + (1)), x);
    rts();
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(0x0);
    BEQ(WarpPipe);
    // <conv.chunks.Comment object at 0x104ced5b0>
    // <conv.chunks.Comment object at 0x104ced640>
    iny();
    iny();
    iny();
    iny();
    JMP(WarpPipe);
}

int WarpPipe() {
    // <conv.chunks.Comment object at 0x104ced9a0>
    // <conv.chunks.Comment object at 0x104ceda30>
    tya();
    pha();
    lda(AreaNumber);
    ora(WorldNumber);
    // <conv.chunks.Comment object at 0x104cedca0>
    BEQ(DrawPipe);
    ldy(AreaObjectLength, x);
    BEQ(DrawPipe);
    JSR(FindEmptyEnemySlot);
    BCS(DrawPipe);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x104cedeb0>
    // <conv.chunks.Comment object at 0x104cee000>
    // <conv.chunks.Comment object at 0x104cee120>
    // <conv.chunks.Comment object at 0x104cee240>
    // <conv.chunks.Comment object at 0x104cee360>
    clc();
    adc(0x8);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x104cee510>
    // <conv.chunks.Comment object at 0x104cee5a0>
    // <conv.chunks.Comment object at 0x104cee780>
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x104cee900>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    JSR(GetAreaObjYPosition);
    // <conv.chunks.Comment object at 0x104ceecf0>
    // <conv.chunks.Comment object at 0x104ceee40>
    sta(Enemy_Y_Position, x);
    lda(PiranhaPlant);
    // <conv.chunks.Comment object at 0x104cef080>
    sta(Enemy_ID, x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // <conv.chunks.Comment object at 0x104cef3b0>
    pla();
    tay();
    ldx(0x7);
    lda(offsetof(G, VerticalPipeData), y);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x104cef560>
    // <conv.chunks.Comment object at 0x104cef5f0>
    // <conv.chunks.Comment object at 0x104cef7a0>
    inx();
    lda(((offsetof(G, VerticalPipeData)) + (2)), y);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x104cef980>
    // <conv.chunks.Comment object at 0x104cefbc0>
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(0x1);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x104cefe60>
    // <conv.chunks.Comment object at 0x104cefef0>
    JSR(GetLrgObjAttrib);
    tya();
    anda(0x7);
    sta(0x6);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x104cf8200>
    // <conv.chunks.Comment object at 0x104cf8290>
    // <conv.chunks.Comment object at 0x104cf83e0>
    // <conv.chunks.Comment object at 0x104cf8470>
    rts();
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(0x0);
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // <conv.chunks.Comment object at 0x104cf86e0>
    // <conv.chunks.Comment object at 0x104cf8770>
    clc();
    lda(Enemy_Flag, x);
    BEQ(ExitEmptyChk);
    // <conv.chunks.Comment object at 0x104cf88f0>
    // <conv.chunks.Comment object at 0x104cf8a40>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x104cf8bf0>
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // <conv.chunks.Comment object at 0x104cf8e00>
    rts();
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(0x86);
    // <conv.chunks.Comment object at 0x104cf8f50>
    // <conv.chunks.Comment object at 0x104cf9070>
    sta(((MetatileBuffer) + (10)));
    ldx(0xb);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x104cf93a0>
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
    // <conv.chunks.Comment object at 0x104cf9940>
    // <conv.chunks.Comment object at 0x104cf9af0>
    // <conv.chunks.Comment object at 0x104cf9b80>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x104cf9d60>
    lda(0xc0);
    sta(MetatileBuffer, x);
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
    // <conv.chunks.Comment object at 0x104cfa4b0>
    // <conv.chunks.Comment object at 0x104cfa660>
    // <conv.chunks.Comment object at 0x104cfa6f0>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x104cfa8d0>
    lda(0xb);
    sta(MetatileBuffer, x);
    inx();
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104cfac00>
    lda(0x63);
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(0x2);
    lda(0x6d);
    // <conv.chunks.Comment object at 0x104cfaf60>
    // <conv.chunks.Comment object at 0x104cfb080>
    // <conv.chunks.Comment object at 0x104cfb110>
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(0x24);
    // <conv.chunks.Comment object at 0x104cfb410>
    sta(MetatileBuffer);
    ldx(0x1);
    // <conv.chunks.Comment object at 0x104cfb620>
    ldy(0x8);
    lda(0x25);
    JSR(RenderUnderPart);
    lda(0x61);
    // <conv.chunks.Comment object at 0x104cfba10>
    sta(((MetatileBuffer) + (10)));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(0x8);
    sta(((Enemy_X_Position) + (5)));
    // <conv.chunks.Comment object at 0x104cfbe00>
    // <conv.chunks.Comment object at 0x104cfbe90>
    // <conv.chunks.Comment object at 0x104cfbf20>
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(((Enemy_PageLoc) + (5)));
    // <conv.chunks.Comment object at 0x104d042c0>
    // <conv.chunks.Comment object at 0x104d04350>
    lda(0x30);
    sta(((Enemy_Y_Position) + (5)));
    // <conv.chunks.Comment object at 0x104d04620>
    lda(0xb0);
    sta(FlagpoleFNum_Y_Pos);
    // <conv.chunks.Comment object at 0x104d048f0>
    lda(FlagpoleFlagObject);
    sta(((Enemy_ID) + (5)));
    inc(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x104d04b90>
    // <conv.chunks.Comment object at 0x104d04d70>
    rts();
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x104d05040>
    ldy(0xf);
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // <conv.chunks.Comment object at 0x104d053a0>
    pha();
    ldx(0x1);
    ldy(0xf);
    // <conv.chunks.Comment object at 0x104d054c0>
    // <conv.chunks.Comment object at 0x104d05550>
    lda(0x44);
    JSR(RenderUnderPart);
    pla();
    // <conv.chunks.Comment object at 0x104d05910>
    tax();
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x104d05a30>
    ldx(0x1);
    JMP(DrawRope);
}

int DrawRope() {
    // <conv.chunks.Comment object at 0x104d05bb0>
    lda(0x40);
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy(AreaType);
    lda(offsetof(G, CoinMetatileData), y);
    // <conv.chunks.Comment object at 0x104d05f40>
    // <conv.chunks.Comment object at 0x104d06270>
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(0xc);
    // <conv.chunks.Comment object at 0x104d06540>
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x104d06c00>
    sta(VRAM_Buffer_AddrCtrl);
    JMP(ChainObj);
}

int ChainObj() {
    ldy(0x0);
    ldx(((offsetof(G, C_ObjectRow)) - (2)), y);
    // <conv.chunks.Comment object at 0x104d06ed0>
    // <conv.chunks.Comment object at 0x104d06f60>
    lda(((offsetof(G, C_ObjectMetatile)) - (2)), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x104d07500>
    ldx(0x7);
    lda(0xc4);
    JMP(ColObj);
}

int ColObj() {
    // <conv.chunks.Comment object at 0x104d07770>
    ldy(0x0);
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy(AreaType);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x104d07bc0>
    // <conv.chunks.Comment object at 0x104d0c1d0>
    BEQ(DrawBricks);
    ldy(0x4);
    JMP(DrawBricks);
}

int DrawBricks() {
    // <conv.chunks.Comment object at 0x104d0c3e0>
    // <conv.chunks.Comment object at 0x104d0c470>
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
    // <conv.chunks.Comment object at 0x104d0c800>
    // <conv.chunks.Comment object at 0x104d0c920>
    // <conv.chunks.Comment object at 0x104d0ca70>
    pha();
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}

int DrawRow() {
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104d0cda0>
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy(AreaType);
    lda(offsetof(G, BrickMetatiles), y);
    // <conv.chunks.Comment object at 0x104d0d100>
    // <conv.chunks.Comment object at 0x104d0d220>
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy(AreaType);
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // <conv.chunks.Comment object at 0x104d0d4c0>
    // <conv.chunks.Comment object at 0x104d0d5e0>
    // <conv.chunks.Comment object at 0x104d0d730>
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
    // <conv.chunks.Comment object at 0x104d0dcd0>
    // <conv.chunks.Comment object at 0x104d0de20>
    // <conv.chunks.Comment object at 0x104d0deb0>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x104d0e210>
    BMI(SetupCannon);
    lda(0x65);
    // <conv.chunks.Comment object at 0x104d0e390>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x104d0e690>
    BMI(SetupCannon);
    lda(0x66);
    // <conv.chunks.Comment object at 0x104d0e810>
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // <conv.chunks.Comment object at 0x104d0ea20>
    ldx(Cannon_Offset);
    JSR(GetAreaObjYPosition);
    sta(Cannon_Y_Position, x);
    // <conv.chunks.Comment object at 0x104d0eb70>
    // <conv.chunks.Comment object at 0x104d0ec90>
    lda(CurrentPageLoc);
    sta(Cannon_PageLoc, x);
    JSR(GetAreaObjXPosition);
    sta(Cannon_X_Position, x);
    // <conv.chunks.Comment object at 0x104d0eed0>
    // <conv.chunks.Comment object at 0x104d0f020>
    // <conv.chunks.Comment object at 0x104d0f140>
    inx();
    cpx(0x6);
    BCC(StrCOffset);
    ldx(0x0);
    JMP(StrCOffset);
}

int StrCOffset() {
    // <conv.chunks.Comment object at 0x104d0f320>
    // <conv.chunks.Comment object at 0x104d0f3b0>
    // <conv.chunks.Comment object at 0x104d0f560>
    // <conv.chunks.Comment object at 0x104d0f5f0>
    stx(Cannon_Offset);
    rts();
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
    // <conv.chunks.Comment object at 0x104d0f980>
    // <conv.chunks.Comment object at 0x104d0f8c0>
    // <conv.chunks.Comment object at 0x104d145c0>
    // <conv.chunks.Comment object at 0x104d14650>
    // <conv.chunks.Comment object at 0x104d14800>
    dec(StaircaseControl);
    ldy(StaircaseControl);
    ldx(offsetof(G, StaircaseRowData), y);
    // <conv.chunks.Comment object at 0x104d14a40>
    lda(offsetof(G, StaircaseHeightData), y);
    tay();
    lda(0x61);
    // <conv.chunks.Comment object at 0x104d14d40>
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x104d150a0>
    // <conv.chunks.Comment object at 0x104d151c0>
    // <conv.chunks.Comment object at 0x104d152e0>
    // <conv.chunks.Comment object at 0x104d15430>
    sta(Enemy_PageLoc, x);
    JSR(GetAreaObjYPosition);
    sta(Enemy_Y_Position, x);
    sta(Jumpspring_FixedYPos, x);
    // <conv.chunks.Comment object at 0x104d15670>
    // <conv.chunks.Comment object at 0x104d15790>
    // <conv.chunks.Comment object at 0x104d158e0>
    lda(JumpspringObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x104d15b20>
    ldy(0x1);
    sty(Enemy_Y_HighPos, x);
    inc(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x104d15cd0>
    // <conv.chunks.Comment object at 0x104d15eb0>
    ldx(0x7);
    lda(0x67);
    // <conv.chunks.Comment object at 0x104d16000>
    sta(MetatileBuffer, x);
    lda(0x68);
    sta(((MetatileBuffer) + (1)), x);
    rts();
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda(Hidden1UpFlag);
    // <conv.chunks.Comment object at 0x104d166c0>
    // <conv.chunks.Comment object at 0x104d16720>
    BEQ(ExitDecBlock);
    lda(0x0);
    // <conv.chunks.Comment object at 0x104d16930>
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
    // <conv.chunks.Comment object at 0x104d16f00>
    sta(BrickCoinTimerFlag);
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // <conv.chunks.Comment object at 0x104d17140>
    sty(0x7);
    lda(0x0);
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x104d17260>
    // <conv.chunks.Comment object at 0x104d173e0>
    dey();
    BEQ(BWithL);
    lda(0x5);
    JMP(BWithL);
}

int BWithL() {
    // <conv.chunks.Comment object at 0x104d17620>
    // <conv.chunks.Comment object at 0x104d17770>
    // <conv.chunks.Comment object at 0x104d17800>
    clc();
    adc(0x7);
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // <conv.chunks.Comment object at 0x104d17a40>
    // <conv.chunks.Comment object at 0x104d17b60>
    lda(offsetof(G, BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x104d200b0>
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
    lda(AreaType);
    BNE(NoWhirlP);
    ldx(Whirlpool_Offset);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x104d20590>
    // <conv.chunks.Comment object at 0x104d208c0>
    // <conv.chunks.Comment object at 0x104d209e0>
    // <conv.chunks.Comment object at 0x104d20b00>
    // <conv.chunks.Comment object at 0x104d20c20>
    // <conv.chunks.Comment object at 0x104d20d40>
    sec();
    sbc(0x10);
    sta(Whirlpool_LeftExtent, x);
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(Whirlpool_PageLoc, x);
    // <conv.chunks.Comment object at 0x104d20ef0>
    // <conv.chunks.Comment object at 0x104d20f80>
    // <conv.chunks.Comment object at 0x104d21160>
    // <conv.chunks.Comment object at 0x104d21280>
    // <conv.chunks.Comment object at 0x104d21310>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x104d215b0>
    tya();
    asl();
    asl();
    asl();
    asl();
    sta(Whirlpool_Length, x);
    // <conv.chunks.Comment object at 0x104d21700>
    // <conv.chunks.Comment object at 0x104d217c0>
    // <conv.chunks.Comment object at 0x104d21880>
    // <conv.chunks.Comment object at 0x104d21940>
    // <conv.chunks.Comment object at 0x104d219d0>
    inx();
    cpx(0x5);
    BCC(StrWOffset);
    ldx(0x0);
    JMP(StrWOffset);
}

int StrWOffset() {
    // <conv.chunks.Comment object at 0x104d21bb0>
    // <conv.chunks.Comment object at 0x104d21c40>
    // <conv.chunks.Comment object at 0x104d21df0>
    // <conv.chunks.Comment object at 0x104d21e80>
    stx(Whirlpool_Offset);
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // <conv.chunks.Comment object at 0x104d22060>
    ldx(AreaType);
    lda(offsetof(G, HoleMetatiles), x);
    // <conv.chunks.Comment object at 0x104d221b0>
    ldx(0x8);
    ldy(0xf);
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty(AreaObjectHeight);
    ldy(MetatileBuffer, x);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x104d22570>
    // <conv.chunks.Comment object at 0x104d22690>
    // <conv.chunks.Comment object at 0x104d227e0>
    cpy(0x17);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x104d22960>
    cpy(0x1a);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x104d22b70>
    cpy(0xc0);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x104d22d80>
    cpy(0xc0);
    BCS(WaitOneRow);
    // <conv.chunks.Comment object at 0x104d22f90>
    cpy(0x54);
    BNE(DrawThisRow);
    // <conv.chunks.Comment object at 0x104d231a0>
    cmp(0x50);
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // <conv.chunks.Comment object at 0x104d233b0>
    // <conv.chunks.Comment object at 0x104d23560>
    sta(MetatileBuffer, x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x104d237a0>
    BCS(ExitUPartR);
    ldy(AreaObjectHeight);
    // <conv.chunks.Comment object at 0x104d239b0>
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
    lda(AreaObjectLength, x);
    clc();
    BPL(LenSet);
    tya();
    // <conv.chunks.Comment object at 0x104d23ec0>
    // <conv.chunks.Comment object at 0x104d2c080>
    // <conv.chunks.Comment object at 0x104d2c110>
    // <conv.chunks.Comment object at 0x104d2c290>
    sta(AreaObjectLength, x);
    sec();
    JMP(LenSet);
}

int LenSet() {
    rts();
    JMP(GetLrgObjAttrib);
}

int GetLrgObjAttrib() {
    ldy(AreaObjOffsetBuffer, x);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x104d2c620>
    // <conv.chunks.Comment object at 0x104d2c770>
    anda(0b1111);
    sta(0x7);
    // <conv.chunks.Comment object at 0x104d2ca10>
    iny();
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104d2cb90>
    // <conv.chunks.Comment object at 0x104d2cd10>
    tay();
    rts();
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda(CurrentColumnPos);
    asl();
    // <conv.chunks.Comment object at 0x104d2cfb0>
    // <conv.chunks.Comment object at 0x104d2d100>
    asl();
    asl();
    asl();
    rts();
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x104d2d460>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x104d2d610>
    asl();
    asl();
    clc();
    adc(32);
    // <conv.chunks.Comment object at 0x104d2d880>
    rts();
    JMP(GetBlockBufferAddr);
}

int GetBlockBufferAddr() {
    pha();
    lsr();
    // <conv.chunks.Comment object at 0x104d2de50>
    // <conv.chunks.Comment object at 0x104d2df10>
    lsr();
    lsr();
    lsr();
    tay();
    lda(((offsetof(G, BlockBufferAddr)) + (2)), y);
    // <conv.chunks.Comment object at 0x104d2e180>
    // <conv.chunks.Comment object at 0x104d2e210>
    sta(0x7);
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104d2e5a0>
    clc();
    adc(offsetof(G, BlockBufferAddr), y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x104d2e750>
    // <conv.chunks.Comment object at 0x104d2e8d0>
    rts();
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // <conv.chunks.Comment object at 0x104d2ecc0>
    sta(AreaPointer);
    JMP(GetAreaType);
}

int GetAreaType() {
    // <conv.chunks.Comment object at 0x104d2f4d0>
    anda(0b1100000);
    asl();
    rol();
    rol();
    rol();
    sta(AreaType);
    // <conv.chunks.Comment object at 0x104d2f800>
    // <conv.chunks.Comment object at 0x104d2f890>
    rts();
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x104d2fa70>
    lda(offsetof(G, WorldAddrOffsets), y);
    clc();
    // <conv.chunks.Comment object at 0x104d2fce0>
    adc(AreaNumber);
    tay();
    lda(offsetof(G, AreaAddrOffsets), y);
    // <conv.chunks.Comment object at 0x104d2fef0>
    rts();
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x104d34140>
    JSR(GetAreaType);
    tay();
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x104d343e0>
    anda(0b11111);
    sta(AreaAddrsLOffset);
    lda(offsetof(G, EnemyAddrHOffsets), y);
    clc();
    adc(AreaAddrsLOffset);
    // <conv.chunks.Comment object at 0x104d345f0>
    // <conv.chunks.Comment object at 0x104d34710>
    // <conv.chunks.Comment object at 0x104d34890>
    // <conv.chunks.Comment object at 0x104d34920>
    tay();
    lda(offsetof(G, EnemyDataAddrLow), y);
    // <conv.chunks.Comment object at 0x104d34ad0>
    sta(EnemyDataLow);
    lda(offsetof(G, EnemyDataAddrHigh), y);
    sta(EnemyDataHigh);
    ldy(AreaType);
    lda(offsetof(G, AreaDataHOffsets), y);
    // <conv.chunks.Comment object at 0x104d34f20>
    // <conv.chunks.Comment object at 0x104d35040>
    clc();
    adc(AreaAddrsLOffset);
    tay();
    lda(offsetof(G, AreaDataAddrLow), y);
    // <conv.chunks.Comment object at 0x104d353a0>
    sta(AreaDataLow);
    lda(offsetof(G, AreaDataAddrHigh), y);
    sta(AreaDataHigh);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104d357f0>
    lda((AreaData), y);
    pha();
    anda(0b111);
    // <conv.chunks.Comment object at 0x104d35a90>
    // <conv.chunks.Comment object at 0x104d35b20>
    cmp(0x4);
    BCC(StoreFore);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x104d35e20>
    lda(0x0);
    JMP(StoreFore);
}

int StoreFore() {
    // <conv.chunks.Comment object at 0x104d35fa0>
    sta(ForegroundScenery);
    pla();
    // <conv.chunks.Comment object at 0x104d361b0>
    pha();
    anda(0b111000);
    lsr();
    // <conv.chunks.Comment object at 0x104d362d0>
    // <conv.chunks.Comment object at 0x104d36420>
    lsr();
    lsr();
    sta(PlayerEntranceCtrl);
    pla();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x104d365d0>
    // <conv.chunks.Comment object at 0x104d36720>
    // <conv.chunks.Comment object at 0x104d367b0>
    clc();
    rol();
    // <conv.chunks.Comment object at 0x104d36990>
    rol();
    rol();
    sta(GameTimerSetting);
    // <conv.chunks.Comment object at 0x104d36b40>
    iny();
    lda((AreaData), y);
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104d36cf0>
    // <conv.chunks.Comment object at 0x104d36ea0>
    // <conv.chunks.Comment object at 0x104d36f30>
    sta(TerrainControl);
    pla();
    // <conv.chunks.Comment object at 0x104d37170>
    pha();
    anda(0b110000);
    // <conv.chunks.Comment object at 0x104d37290>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x104d37470>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x104d37620>
    pla();
    anda(0b11000000);
    clc();
    rol();
    // <conv.chunks.Comment object at 0x104d37980>
    rol();
    rol();
    cmp(0b11);
    BNE(StoreStyle);
    sta(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x104d37b30>
    // <conv.chunks.Comment object at 0x104d37c50>
    // <conv.chunks.Comment object at 0x104d37d70>
    lda(0x0);
    JMP(StoreStyle);
}

int StoreStyle() {
    sta(AreaStyle);
    lda(AreaDataLow);
    // <conv.chunks.Comment object at 0x104d400e0>
    clc();
    adc(0x2);
    sta(AreaDataLow);
    lda(AreaDataHigh);
    adc(0x0);
    sta(AreaDataHigh);
    rts();
    JMP(GameMode);
}

int GameMode() {
    lda(OperMode_Task);
    JSR(JumpEngine);
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
    // <conv.chunks.Comment object at 0x104eb4c80>
    // <conv.chunks.Comment object at 0x104eb4da0>
    // <conv.chunks.Comment object at 0x104eb4ef0>
    // <conv.chunks.Comment object at 0x104eb5010>
    // <conv.chunks.Comment object at 0x104eb5130>
    // <conv.chunks.Comment object at 0x104eb5250>
    // <conv.chunks.Comment object at 0x104eb52e0>
    rts();
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // <conv.chunks.Comment object at 0x104eb5550>
    ldx(0x0);
    JMP(ProcELoop);
}

int ProcELoop() {
    // <conv.chunks.Comment object at 0x104eb56d0>
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // <conv.chunks.Comment object at 0x104eb58b0>
    // <conv.chunks.Comment object at 0x104eb59d0>
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x104eb5b80>
    BNE(ProcELoop);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    JSR(PlayerGfxHandler);
    JSR(BlockObjMT_Updater);
    // <conv.chunks.Comment object at 0x104eb5d90>
    // <conv.chunks.Comment object at 0x104eb5eb0>
    // <conv.chunks.Comment object at 0x104eb5fd0>
    // <conv.chunks.Comment object at 0x104eb60f0>
    ldx(0x1);
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    // <conv.chunks.Comment object at 0x104eb6270>
    // <conv.chunks.Comment object at 0x104eb6420>
    dex();
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    JSR(MiscObjectsCore);
    JSR(ProcessCannons);
    JSR(ProcessWhirlpools);
    JSR(FlagpoleRoutine);
    JSR(RunGameTimer);
    JSR(ColorRotation);
    // <conv.chunks.Comment object at 0x104eb65d0>
    // <conv.chunks.Comment object at 0x104eb66f0>
    // <conv.chunks.Comment object at 0x104eb6810>
    // <conv.chunks.Comment object at 0x104eb6930>
    // <conv.chunks.Comment object at 0x104eb6a50>
    // <conv.chunks.Comment object at 0x104eb6b70>
    // <conv.chunks.Comment object at 0x104eb6c90>
    // <conv.chunks.Comment object at 0x104eb6db0>
    lda(Player_Y_HighPos);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x104eb6fc0>
    BPL(NoChgMus);
    lda(StarInvincibleTimer);
    BEQ(ClrPlrPal);
    // <conv.chunks.Comment object at 0x104eb71d0>
    // <conv.chunks.Comment object at 0x104eb72f0>
    cmp(0x4);
    BNE(NoChgMus);
    lda(IntervalTimerControl);
    BNE(NoChgMus);
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}

int NoChgMus() {
    // <conv.chunks.Comment object at 0x104eb7470>
    // <conv.chunks.Comment object at 0x104eb7620>
    // <conv.chunks.Comment object at 0x104eb7740>
    // <conv.chunks.Comment object at 0x104eb7860>
    // <conv.chunks.Comment object at 0x104eb7980>
    ldy(StarInvincibleTimer);
    lda(FrameCounter);
    cpy(0x8);
    BCS(CycleTwo);
    lsr();
    // <conv.chunks.Comment object at 0x104eb7ad0>
    // <conv.chunks.Comment object at 0x104eb7bf0>
    // <conv.chunks.Comment object at 0x104eb7c80>
    // <conv.chunks.Comment object at 0x104eb7e60>
    lsr();
    JMP(CycleTwo);
}

int CycleTwo() {
    // <conv.chunks.Comment object at 0x104eb7f80>
    lsr();
    JSR(CyclePlayerPalette);
    JMP(SaveAB);
    JMP(ClrPlrPal);
}

int ClrPlrPal() {
    // <conv.chunks.Comment object at 0x104ec00b0>
    // <conv.chunks.Comment object at 0x104ec01d0>
    // <conv.chunks.Comment object at 0x104ec0320>
    JSR(ResetPalStar);
    JMP(SaveAB);
}

int SaveAB() {
    // <conv.chunks.Comment object at 0x104ec0470>
    lda(A_B_Buttons);
    sta(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x104ec05f0>
    lda(0x0);
    sta(Left_Right_Buttons);
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda(VRAM_Buffer_AddrCtrl);
    cmp(0x6);
    BEQ(ExitEng);
    lda(AreaParserTaskNum);
    // <conv.chunks.Comment object at 0x104ec0a40>
    // <conv.chunks.Comment object at 0x104ec0ad0>
    // <conv.chunks.Comment object at 0x104ec0cb0>
    BNE(RunParser);
    lda(ScrollThirtyTwo);
    cmp(0x20);
    BMI(ExitEng);
    // <conv.chunks.Comment object at 0x104ec0ec0>
    // <conv.chunks.Comment object at 0x104ec0fe0>
    // <conv.chunks.Comment object at 0x104ec1070>
    lda(ScrollThirtyTwo);
    sbc(0x20);
    sta(ScrollThirtyTwo);
    lda(0x0);
    sta(VRAM_Buffer2_Offset);
    JMP(RunParser);
}

int RunParser() {
    // <conv.chunks.Comment object at 0x104ec1340>
    // <conv.chunks.Comment object at 0x104ec13d0>
    // <conv.chunks.Comment object at 0x104ec1580>
    // <conv.chunks.Comment object at 0x104ec1610>
    // <conv.chunks.Comment object at 0x104ec17c0>
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}

int ExitEng() {
    // <conv.chunks.Comment object at 0x104ec1910>
    rts();
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x104ec1a90>
    clc();
    adc(Platform_X_Scroll);
    sta(Player_X_Scroll);
    lda(ScrollLock);
    BNE(InitScrlAmt);
    // <conv.chunks.Comment object at 0x104ec1c40>
    // <conv.chunks.Comment object at 0x104ec1d60>
    // <conv.chunks.Comment object at 0x104ec1e80>
    // <conv.chunks.Comment object at 0x104ec1fa0>
    lda(Player_Pos_ForScroll);
    cmp(0x50);
    BCC(InitScrlAmt);
    lda(SideCollisionTimer);
    BNE(InitScrlAmt);
    ldy(Player_X_Scroll);
    dey();
    BMI(InitScrlAmt);
    // <conv.chunks.Comment object at 0x104ec21b0>
    // <conv.chunks.Comment object at 0x104ec2240>
    // <conv.chunks.Comment object at 0x104ec23f0>
    // <conv.chunks.Comment object at 0x104ec2510>
    // <conv.chunks.Comment object at 0x104ec2630>
    // <conv.chunks.Comment object at 0x104ec2780>
    // <conv.chunks.Comment object at 0x104ec2810>
    iny();
    cpy(0x2);
    // <conv.chunks.Comment object at 0x104ec29c0>
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
    // <conv.chunks.Comment object at 0x104ec31d0>
    clc();
    adc(ScrollThirtyTwo);
    sta(ScrollThirtyTwo);
    // <conv.chunks.Comment object at 0x104ec3380>
    // <conv.chunks.Comment object at 0x104ec34a0>
    tya();
    clc();
    adc(ScreenLeft_X_Pos);
    sta(ScreenLeft_X_Pos);
    sta(HorizontalScroll);
    // <conv.chunks.Comment object at 0x104ec36e0>
    // <conv.chunks.Comment object at 0x104ec3800>
    // <conv.chunks.Comment object at 0x104ec3920>
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
    // <conv.chunks.Comment object at 0x104ec3b30>
    // <conv.chunks.Comment object at 0x104ec3bc0>
    // <conv.chunks.Comment object at 0x104ec3d70>
    // <conv.chunks.Comment object at 0x104ec3ec0>
    // <conv.chunks.Comment object at 0x104ec3f50>
    // <conv.chunks.Comment object at 0x104ec8110>
    // <conv.chunks.Comment object at 0x104ec8260>
    // <conv.chunks.Comment object at 0x104ec82f0>
    // <conv.chunks.Comment object at 0x104ec8470>
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
    // <conv.chunks.Comment object at 0x104ec8950>
    // <conv.chunks.Comment object at 0x104ec8b00>
    ldx(0x0);
    JSR(GetXOffscreenBits);
    sta(0x0);
    ldy(0x0);
    asl();
    BCS(KeepOnscr);
    iny();
    // <conv.chunks.Comment object at 0x104ec8bc0>
    // <conv.chunks.Comment object at 0x104ec8da0>
    // <conv.chunks.Comment object at 0x104ec8e30>
    // <conv.chunks.Comment object at 0x104ec8fe0>
    // <conv.chunks.Comment object at 0x104ec9070>
    // <conv.chunks.Comment object at 0x104ec91c0>
    lda(0x0);
    anda(0b100000);
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // <conv.chunks.Comment object at 0x104ec9250>
    // <conv.chunks.Comment object at 0x104ec9460>
    // <conv.chunks.Comment object at 0x104ec9580>
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
    // <conv.chunks.Comment object at 0x104ec9790>
    // <conv.chunks.Comment object at 0x104ec98e0>
    // <conv.chunks.Comment object at 0x104ec9a00>
    // <conv.chunks.Comment object at 0x104ec9b50>
    // <conv.chunks.Comment object at 0x104ec9be0>
    // <conv.chunks.Comment object at 0x104ec9d90>
    // <conv.chunks.Comment object at 0x104ec9eb0>
    // <conv.chunks.Comment object at 0x104eca000>
    lda(0x0);
    sta(Player_X_Speed);
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // <conv.chunks.Comment object at 0x104eca180>
    // <conv.chunks.Comment object at 0x104eca330>
    lda(0x0);
    sta(Platform_X_Scroll);
    rts();
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x104eca690>
    clc();
    adc(0xff);
    sta(ScreenRight_X_Pos);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    sta(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x104ecaab0>
    // <conv.chunks.Comment object at 0x104ecab40>
    // <conv.chunks.Comment object at 0x104ecacf0>
    // <conv.chunks.Comment object at 0x104ecae10>
    // <conv.chunks.Comment object at 0x104ecaea0>
    rts();
    JMP(GameRoutines);
}

int GameRoutines() {
    lda(GameEngineSubroutine);
    JSR(JumpEngine);
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda(AltEntranceControl);
    // <conv.chunks.Comment object at 0x104ecbb30>
    cmp(0x2);
    BEQ(EntrMode2);
    // <conv.chunks.Comment object at 0x104ecbcb0>
    lda(0x0);
    ldy(Player_Y_Position);
    cpy(0x30);
    BCC(AutoControlPlayer);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x104ecbec0>
    // <conv.chunks.Comment object at 0x104ed80b0>
    // <conv.chunks.Comment object at 0x104ed8140>
    // <conv.chunks.Comment object at 0x104ed82f0>
    cmp(0x6);
    BEQ(ChkBehPipe);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x104ed8470>
    // <conv.chunks.Comment object at 0x104ed8620>
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // <conv.chunks.Comment object at 0x104ed8830>
    lda(Player_SprAttrib);
    BNE(IntroEntr);
    // <conv.chunks.Comment object at 0x104ed8980>
    lda(0x1);
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // <conv.chunks.Comment object at 0x104ed8b00>
    // <conv.chunks.Comment object at 0x104ed8cb0>
    JSR(EnterSidePipe);
    dec(ChangeAreaTimer);
    BNE(ExitEntr);
    inc(DisableIntermediate);
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // <conv.chunks.Comment object at 0x104ed8e00>
    // <conv.chunks.Comment object at 0x104ed8f20>
    // <conv.chunks.Comment object at 0x104ed9040>
    // <conv.chunks.Comment object at 0x104ed9160>
    // <conv.chunks.Comment object at 0x104ed9280>
    lda(JoypadOverride);
    BNE(VineEntr);
    lda(0xff);
    JSR(MovePlayerYAxis);
    lda(Player_Y_Position);
    cmp(0x91);
    BCC(PlayerRdy);
    rts();
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
    // <conv.chunks.Comment object at 0x104ed9c70>
    // <conv.chunks.Comment object at 0x104ed9d00>
    // <conv.chunks.Comment object at 0x104ed9eb0>
    // <conv.chunks.Comment object at 0x104ed9fd0>
    // <conv.chunks.Comment object at 0x104eda060>
    // <conv.chunks.Comment object at 0x104eda180>
    // <conv.chunks.Comment object at 0x104eda2a0>
    lda(0x3);
    sta(Player_State);
    iny();
    lda(0x8);
    sta(((Block_Buffer_1) + (0xb4)));
    JMP(OffVine);
}

int OffVine() {
    // <conv.chunks.Comment object at 0x104eda4e0>
    // <conv.chunks.Comment object at 0x104eda6c0>
    // <conv.chunks.Comment object at 0x104eda750>
    // <conv.chunks.Comment object at 0x104eda7e0>
    // <conv.chunks.Comment object at 0x104edaa50>
    sty(DisableCollisionDet);
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x104edabd0>
    lda(Player_X_Position);
    cmp(0x48);
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // <conv.chunks.Comment object at 0x104edade0>
    // <conv.chunks.Comment object at 0x104edae70>
    // <conv.chunks.Comment object at 0x104edb020>
    lda(0x8);
    sta(GameEngineSubroutine);
    lda(0x1);
    // <conv.chunks.Comment object at 0x104edb260>
    sta(PlayerFacingDir);
    lsr();
    sta(AltEntranceControl);
    sta(DisableCollisionDet);
    sta(JoypadOverride);
    JMP(ExitEntr);
}

int ExitEntr() {
    // <conv.chunks.Comment object at 0x104edb4d0>
    // <conv.chunks.Comment object at 0x104edb560>
    // <conv.chunks.Comment object at 0x104edb680>
    // <conv.chunks.Comment object at 0x104edb7a0>
    // <conv.chunks.Comment object at 0x104edb8f0>
    rts();
    JMP(AutoControlPlayer);
}

int AutoControlPlayer() {
    sta(SavedJoypadBits);
    JMP(PlayerCtrlRoutine);
}

int PlayerCtrlRoutine() {
    lda(GameEngineSubroutine);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x104edbbc0>
    // <conv.chunks.Comment object at 0x104edbce0>
    BEQ(SizeChk);
    lda(AreaType);
    BNE(SaveJoyp);
    // <conv.chunks.Comment object at 0x104edbf20>
    // <conv.chunks.Comment object at 0x104ee0080>
    ldy(Player_Y_HighPos);
    dey();
    BNE(DisJoyp);
    // <conv.chunks.Comment object at 0x104ee02c0>
    // <conv.chunks.Comment object at 0x104ee0350>
    lda(Player_Y_Position);
    cmp(0xd0);
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // <conv.chunks.Comment object at 0x104ee0590>
    // <conv.chunks.Comment object at 0x104ee0620>
    // <conv.chunks.Comment object at 0x104ee07d0>
    lda(0x0);
    sta(SavedJoypadBits);
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // <conv.chunks.Comment object at 0x104ee0a40>
    lda(SavedJoypadBits);
    anda(0b11000000);
    sta(A_B_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x104ee0d70>
    anda(0b11);
    sta(Left_Right_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x104ee1070>
    anda(0b1100);
    sta(Up_Down_Buttons);
    anda(0b100);
    BEQ(SizeChk);
    lda(Player_State);
    BNE(SizeChk);
    ldy(Left_Right_Buttons);
    BEQ(SizeChk);
    // <conv.chunks.Comment object at 0x104ee1370>
    // <conv.chunks.Comment object at 0x104ee1490>
    // <conv.chunks.Comment object at 0x104ee15e0>
    // <conv.chunks.Comment object at 0x104ee1700>
    // <conv.chunks.Comment object at 0x104ee1850>
    // <conv.chunks.Comment object at 0x104ee1970>
    lda(0x0);
    sta(Left_Right_Buttons);
    sta(Up_Down_Buttons);
    JMP(SizeChk);
}

int SizeChk() {
    // <conv.chunks.Comment object at 0x104ee1b20>
    // <conv.chunks.Comment object at 0x104ee1cd0>
    // <conv.chunks.Comment object at 0x104ee1df0>
    JSR(PlayerMovementSubs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x104ee1f70>
    lda(PlayerSize);
    BNE(ChkMoveDir);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104ee2270>
    lda(CrouchingFlag);
    BEQ(ChkMoveDir);
    ldy(0x2);
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // <conv.chunks.Comment object at 0x104ee2480>
    // <conv.chunks.Comment object at 0x104ee25a0>
    // <conv.chunks.Comment object at 0x104ee2630>
    sty(Player_BoundBoxCtrl);
    lda(0x1);
    ldy(Player_X_Speed);
    BEQ(PlayerSubs);
    BPL(SetMoveDir);
    asl();
    JMP(SetMoveDir);
}

int SetMoveDir() {
    // <conv.chunks.Comment object at 0x104ee2810>
    // <conv.chunks.Comment object at 0x104ee28a0>
    // <conv.chunks.Comment object at 0x104ee2a50>
    // <conv.chunks.Comment object at 0x104ee2b70>
    // <conv.chunks.Comment object at 0x104ee2cc0>
    // <conv.chunks.Comment object at 0x104ee2d50>
    sta(Player_MovingDir);
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // <conv.chunks.Comment object at 0x104ee2ea0>
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(0x0);
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // <conv.chunks.Comment object at 0x104ee2ff0>
    // <conv.chunks.Comment object at 0x104ee3110>
    // <conv.chunks.Comment object at 0x104ee3230>
    // <conv.chunks.Comment object at 0x104ee32c0>
    // <conv.chunks.Comment object at 0x104ee3470>
    lda(Player_Y_Position);
    cmp(0x40);
    BCC(PlayerHole);
    // <conv.chunks.Comment object at 0x104ee3680>
    // <conv.chunks.Comment object at 0x104ee3710>
    lda(GameEngineSubroutine);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x104ee39b0>
    BEQ(PlayerHole);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x104ee3bc0>
    BEQ(PlayerHole);
    cmp(0x4);
    // <conv.chunks.Comment object at 0x104ee3dd0>
    BCC(PlayerHole);
    lda(Player_SprAttrib);
    anda(0b11011111);
    sta(Player_SprAttrib);
    JMP(PlayerHole);
}

int PlayerHole() {
    // <conv.chunks.Comment object at 0x104ee8110>
    // <conv.chunks.Comment object at 0x104ee8230>
    // <conv.chunks.Comment object at 0x104ee8350>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BMI(ExitCtrl);
    // <conv.chunks.Comment object at 0x104ee84a0>
    // <conv.chunks.Comment object at 0x104ee8530>
    ldx(0x1);
    stx(ScrollLock);
    // <conv.chunks.Comment object at 0x104ee8740>
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
    // <conv.chunks.Comment object at 0x104ee8a10>
    // <conv.chunks.Comment object at 0x104ee8aa0>
    // <conv.chunks.Comment object at 0x104ee8b90>
    // <conv.chunks.Comment object at 0x104ee8d40>
    // <conv.chunks.Comment object at 0x104ee8e90>
    // <conv.chunks.Comment object at 0x104ee8fb0>
    // <conv.chunks.Comment object at 0x104ee90d0>
    inx();
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ChkHoleX);
    ldy(DeathMusicLoaded);
    BNE(HoleBottom);
    // <conv.chunks.Comment object at 0x104ee92e0>
    // <conv.chunks.Comment object at 0x104ee9370>
    // <conv.chunks.Comment object at 0x104ee9520>
    // <conv.chunks.Comment object at 0x104ee9640>
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
    // <conv.chunks.Comment object at 0x104ee9b80>
    // <conv.chunks.Comment object at 0x104ee9c10>
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
    // <conv.chunks.Comment object at 0x104ee9d60>
    // <conv.chunks.Comment object at 0x104ee9f10>
    // <conv.chunks.Comment object at 0x104ee9fa0>
    // <conv.chunks.Comment object at 0x104eea0c0>
    // <conv.chunks.Comment object at 0x104eea1e0>
    // <conv.chunks.Comment object at 0x104eea300>
    // <conv.chunks.Comment object at 0x104eea390>
    // <conv.chunks.Comment object at 0x104eea570>
    rts();
    JMP(CloudExit);
}

int CloudExit() {
    lda(0x0);
    sta(JoypadOverride);
    JSR(SetEntr);
    inc(AltEntranceControl);
    // <conv.chunks.Comment object at 0x104eea6f0>
    // <conv.chunks.Comment object at 0x104eea8a0>
    // <conv.chunks.Comment object at 0x104eea9f0>
    rts();
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda(Player_Y_HighPos);
    BNE(AutoClimb);
    // <conv.chunks.Comment object at 0x104eeac00>
    // <conv.chunks.Comment object at 0x104eead20>
    lda(Player_Y_Position);
    cmp(0xe4);
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // <conv.chunks.Comment object at 0x104eeb140>
    lda(0b1000);
    sta(JoypadOverride);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x104eeb380>
    sty(Player_State);
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // <conv.chunks.Comment object at 0x104eeb680>
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
    // <conv.chunks.Comment object at 0x104eeba70>
    // <conv.chunks.Comment object at 0x104eebb00>
    // <conv.chunks.Comment object at 0x104eebcb0>
    // <conv.chunks.Comment object at 0x104eebdd0>
    // <conv.chunks.Comment object at 0x104eebe60>
    // <conv.chunks.Comment object at 0x104ef4050>
    iny();
    lda(AreaType);
    // <conv.chunks.Comment object at 0x104ef4200>
    cmp(0x3);
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x104ef4380>
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc(Player_Y_Position);
    // <conv.chunks.Comment object at 0x104ef47a0>
    sta(Player_Y_Position);
    rts();
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // <conv.chunks.Comment object at 0x104ef4aa0>
    ldy(0x2);
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // <conv.chunks.Comment object at 0x104ef4c20>
    dec(ChangeAreaTimer);
    BNE(ExitCAPipe);
    sty(AltEntranceControl);
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // <conv.chunks.Comment object at 0x104ef4ef0>
    // <conv.chunks.Comment object at 0x104ef5010>
    inc(DisableScreenFlag);
    lda(0x0);
    sta(OperMode_Task);
    sta(Sprite0HitDetectFlag);
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // <conv.chunks.Comment object at 0x104ef51c0>
    // <conv.chunks.Comment object at 0x104ef5370>
    // <conv.chunks.Comment object at 0x104ef54c0>
    rts();
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x104ef55e0>
    sta(Player_X_Speed);
    ldy(0x1);
    lda(Player_X_Position);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x104ef57f0>
    // <conv.chunks.Comment object at 0x104ef5880>
    // <conv.chunks.Comment object at 0x104ef5a30>
    BNE(RightPipe);
    sta(Player_X_Speed);
    tay();
    JMP(RightPipe);
}

int RightPipe() {
    // <conv.chunks.Comment object at 0x104ef5c40>
    // <conv.chunks.Comment object at 0x104ef5d90>
    // <conv.chunks.Comment object at 0x104ef5e20>
    tya();
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x104ef5f10>
    rts();
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
    // <conv.chunks.Comment object at 0x104ef6120>
    // <conv.chunks.Comment object at 0x104ef6240>
    // <conv.chunks.Comment object at 0x104ef62d0>
    // <conv.chunks.Comment object at 0x104ef6480>
    // <conv.chunks.Comment object at 0x104ef65a0>
    cmp(0xc4);
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // <conv.chunks.Comment object at 0x104ef6660>
    // <conv.chunks.Comment object at 0x104ef6810>
    // <conv.chunks.Comment object at 0x104ef6930>
    rts();
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
    // <conv.chunks.Comment object at 0x104ef6a80>
    // <conv.chunks.Comment object at 0x104ef6ba0>
    // <conv.chunks.Comment object at 0x104ef6c30>
    // <conv.chunks.Comment object at 0x104ef6de0>
    // <conv.chunks.Comment object at 0x104ef6e70>
    // <conv.chunks.Comment object at 0x104ef7020>
    // <conv.chunks.Comment object at 0x104ef7140>
    BNE(ExitBoth);
    JMP(InitChangeSize);
}

int InitChangeSize() {
    ldy(PlayerChangeSizeFlag);
    BNE(ExitBoth);
    sty(PlayerAnimCtrl);
    inc(PlayerChangeSizeFlag);
    // <conv.chunks.Comment object at 0x104ef72c0>
    // <conv.chunks.Comment object at 0x104ef73e0>
    // <conv.chunks.Comment object at 0x104ef7500>
    // <conv.chunks.Comment object at 0x104ef7620>
    lda(PlayerSize);
    eor(0x1);
    // <conv.chunks.Comment object at 0x104ef7830>
    sta(PlayerSize);
    JMP(ExitBoth);
}

int ExitBoth() {
    // <conv.chunks.Comment object at 0x104ef7a70>
    rts();
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
    // <conv.chunks.Comment object at 0x104f00140>
    lda(0x8);
    sta(GameEngineSubroutine);
    rts();
    JMP(PlayerFireFlower);
}

int PlayerFireFlower() {
    lda(TimerControl);
    cmp(0xc0);
    BEQ(ResetPalFireFlower);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x104f00620>
    // <conv.chunks.Comment object at 0x104f00740>
    // <conv.chunks.Comment object at 0x104f007d0>
    // <conv.chunks.Comment object at 0x104f00980>
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
    rts();
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
    rts();
    JMP(ExitDeath);
}

int ExitDeath() {
    rts();
    JMP(FlagpoleSlide);
}

int FlagpoleSlide() {
    lda(((Enemy_ID) + (5)));
    cmp(FlagpoleFlagObject);
    BNE(NoFPObj);
    lda(FlagpoleSoundQueue);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x104f01a90>
    // <conv.chunks.Comment object at 0x104f01c70>
    // <conv.chunks.Comment object at 0x104f01d90>
    // <conv.chunks.Comment object at 0x104f01ee0>
    // <conv.chunks.Comment object at 0x104f02000>
    lda(0x0);
    sta(FlagpoleSoundQueue);
    // <conv.chunks.Comment object at 0x104f02180>
    ldy(Player_Y_Position);
    cpy(0x9e);
    BCS(SlidePlayer);
    lda(0x4);
    JMP(SlidePlayer);
}

int SlidePlayer() {
    // <conv.chunks.Comment object at 0x104f02420>
    // <conv.chunks.Comment object at 0x104f024b0>
    // <conv.chunks.Comment object at 0x104f02660>
    // <conv.chunks.Comment object at 0x104f026f0>
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}

int NoFPObj() {
    // <conv.chunks.Comment object at 0x104f028d0>
    inc(GameEngineSubroutine);
    rts();
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x104f02bd0>
    JSR(AutoControlPlayer);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x104f03230>
    cmp(0xae);
    BCC(ChkStop);
    lda(ScrollLock);
    BEQ(ChkStop);
    // <conv.chunks.Comment object at 0x104f033b0>
    // <conv.chunks.Comment object at 0x104f03590>
    // <conv.chunks.Comment object at 0x104f036b0>
    lda(EndOfLevelMusic);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x104f038f0>
    lda(0x0);
    sta(ScrollLock);
    JMP(ChkStop);
}

int ChkStop() {
    // <conv.chunks.Comment object at 0x104f03a70>
    // <conv.chunks.Comment object at 0x104f03c20>
    lda(Player_CollisionBits);
    lsr();
    BCS(RdyNextA);
    lda(StarFlagTaskControl);
    BNE(InCastle);
    inc(StarFlagTaskControl);
    JMP(InCastle);
}

int InCastle() {
    // <conv.chunks.Comment object at 0x104f03dd0>
    // <conv.chunks.Comment object at 0x104f03e60>
    // <conv.chunks.Comment object at 0x104f03f80>
    // <conv.chunks.Comment object at 0x104f080e0>
    // <conv.chunks.Comment object at 0x104f08200>
    // <conv.chunks.Comment object at 0x104f08320>
    lda(0b100000);
    sta(Player_SprAttrib);
    JMP(RdyNextA);
}

int RdyNextA() {
    lda(StarFlagTaskControl);
    cmp(0x5);
    BNE(ExitNA);
    inc(LevelNumber);
    // <conv.chunks.Comment object at 0x104f086b0>
    // <conv.chunks.Comment object at 0x104f08740>
    // <conv.chunks.Comment object at 0x104f08920>
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
    // <conv.chunks.Comment object at 0x104f08b30>
    // <conv.chunks.Comment object at 0x104f08bc0>
    // <conv.chunks.Comment object at 0x104f08d70>
    // <conv.chunks.Comment object at 0x104f08e90>
    // <conv.chunks.Comment object at 0x104f08fb0>
    // <conv.chunks.Comment object at 0x104f09100>
    // <conv.chunks.Comment object at 0x104f09220>
    // <conv.chunks.Comment object at 0x104f09340>
    inc(AreaNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    JSR(ChgAreaMode);
    sta(HalfwayPage);
    // <conv.chunks.Comment object at 0x104f09490>
    // <conv.chunks.Comment object at 0x104f095b0>
    // <conv.chunks.Comment object at 0x104f096d0>
    // <conv.chunks.Comment object at 0x104f097f0>
    lda(Silence);
    sta(EventMusicQueue);
    JMP(ExitNA);
}

int ExitNA() {
    rts();
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
    // <conv.chunks.Comment object at 0x104f09ca0>
    // <conv.chunks.Comment object at 0x104f09d30>
    // <conv.chunks.Comment object at 0x104f09ee0>
    // <conv.chunks.Comment object at 0x104f0a000>
    // <conv.chunks.Comment object at 0x104f0a120>
    // <conv.chunks.Comment object at 0x104f0a240>
    // <conv.chunks.Comment object at 0x104f0a360>
    // <conv.chunks.Comment object at 0x104f0a480>
    sta(CrouchingFlag);
    JMP(ProcMove);
}

int ProcMove() {
    // <conv.chunks.Comment object at 0x104f0a5d0>
    JSR(PlayerPhysicsSub);
    lda(PlayerChangeSizeFlag);
    BNE(NoMoveSub);
    // <conv.chunks.Comment object at 0x104f0a720>
    // <conv.chunks.Comment object at 0x104f0a840>
    lda(Player_State);
    cmp(0x3);
    BEQ(MoveSubs);
    // <conv.chunks.Comment object at 0x104f0aa50>
    // <conv.chunks.Comment object at 0x104f0aae0>
    ldy(0x18);
    sty(ClimbSideTimer);
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
    // <conv.chunks.Comment object at 0x104f0b2f0>
    // <conv.chunks.Comment object at 0x104f0b350>
    lda(Left_Right_Buttons);
    BEQ(GndMove);
    sta(PlayerFacingDir);
    JMP(GndMove);
}

int GndMove() {
    // <conv.chunks.Comment object at 0x104f0b560>
    // <conv.chunks.Comment object at 0x104f0b6b0>
    // <conv.chunks.Comment object at 0x104f0b7d0>
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x104f0b950>
    // <conv.chunks.Comment object at 0x104f0ba70>
    rts();
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
    // <conv.chunks.Comment object at 0x104f14080>
    // <conv.chunks.Comment object at 0x104f141a0>
    lda(A_B_Buttons);
    anda(A_Button);
    anda(PreviousA_B_Buttons);
    BNE(ProcSwim);
    lda(JumpOrigin_Y_Position);
    // <conv.chunks.Comment object at 0x104f143b0>
    // <conv.chunks.Comment object at 0x104f144d0>
    // <conv.chunks.Comment object at 0x104f145f0>
    // <conv.chunks.Comment object at 0x104f14710>
    sec();
    sbc(Player_Y_Position);
    cmp(DiffToHaltJump);
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // <conv.chunks.Comment object at 0x104f148c0>
    // <conv.chunks.Comment object at 0x104f149e0>
    // <conv.chunks.Comment object at 0x104f14b00>
    // <conv.chunks.Comment object at 0x104f14c20>
    lda(VerticalForceDown);
    sta(VerticalForce);
    JMP(ProcSwim);
}

int ProcSwim() {
    // <conv.chunks.Comment object at 0x104f14e60>
    lda(SwimmingFlag);
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x104f14fb0>
    // <conv.chunks.Comment object at 0x104f15100>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(LRWater);
    // <conv.chunks.Comment object at 0x104f15310>
    // <conv.chunks.Comment object at 0x104f153a0>
    lda(0x18);
    sta(VerticalForce);
    JMP(LRWater);
}

int LRWater() {
    // <conv.chunks.Comment object at 0x104f155e0>
    // <conv.chunks.Comment object at 0x104f15790>
    lda(Left_Right_Buttons);
    BEQ(LRAir);
    sta(PlayerFacingDir);
    JMP(LRAir);
}

int LRAir() {
    // <conv.chunks.Comment object at 0x104f15910>
    // <conv.chunks.Comment object at 0x104f15a60>
    // <conv.chunks.Comment object at 0x104f15b80>
    lda(Left_Right_Buttons);
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // <conv.chunks.Comment object at 0x104f15d00>
    // <conv.chunks.Comment object at 0x104f15e50>
    // <conv.chunks.Comment object at 0x104f15f70>
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x104f160f0>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BNE(ExitMov1);
    // <conv.chunks.Comment object at 0x104f16300>
    // <conv.chunks.Comment object at 0x104f16390>
    lda(0x28);
    sta(VerticalForce);
    JMP(ExitMov1);
}

int ExitMov1() {
    // <conv.chunks.Comment object at 0x104f165a0>
    // <conv.chunks.Comment object at 0x104f16750>
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda(Player_YMF_Dummy);
    clc();
    adc(Player_Y_MoveForce);
    // <conv.chunks.Comment object at 0x104f16f00>
    // <conv.chunks.Comment object at 0x104f16f90>
    sta(Player_YMF_Dummy);
    ldy(0x0);
    lda(Player_Y_Speed);
    BPL(MoveOnVine);
    dey();
    JMP(MoveOnVine);
}

int MoveOnVine() {
    // <conv.chunks.Comment object at 0x104f171a0>
    // <conv.chunks.Comment object at 0x104f17230>
    // <conv.chunks.Comment object at 0x104f173e0>
    // <conv.chunks.Comment object at 0x104f17530>
    // <conv.chunks.Comment object at 0x104f175c0>
    sty(0x0);
    adc(Player_Y_Position);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x104f176b0>
    // <conv.chunks.Comment object at 0x104f17830>
    lda(Player_Y_HighPos);
    adc(0x0);
    sta(Player_Y_HighPos);
    lda(Left_Right_Buttons);
    anda(Player_CollisionBits);
    BEQ(InitCSTimer);
    ldy(ClimbSideTimer);
    BNE(ExitCSub);
    // <conv.chunks.Comment object at 0x104f17a70>
    // <conv.chunks.Comment object at 0x104f17b00>
    // <conv.chunks.Comment object at 0x104f17c80>
    // <conv.chunks.Comment object at 0x104f17da0>
    // <conv.chunks.Comment object at 0x104f17ec0>
    // <conv.chunks.Comment object at 0x104f17fe0>
    // <conv.chunks.Comment object at 0x104f20140>
    ldy(0x18);
    sty(ClimbSideTimer);
    ldx(0x0);
    ldy(PlayerFacingDir);
    lsr();
    BCS(ClimbFD);
    // <conv.chunks.Comment object at 0x104f202c0>
    // <conv.chunks.Comment object at 0x104f20470>
    // <conv.chunks.Comment object at 0x104f20500>
    // <conv.chunks.Comment object at 0x104f206e0>
    // <conv.chunks.Comment object at 0x104f20770>
    inx();
    inx();
    JMP(ClimbFD);
}

int ClimbFD() {
    // <conv.chunks.Comment object at 0x104f20980>
    // <conv.chunks.Comment object at 0x104f20a10>
    dey();
    BEQ(CSetFDir);
    inx();
    JMP(CSetFDir);
}

int CSetFDir() {
    lda(Player_X_Position);
    clc();
    adc(offsetof(G, ClimbAdderLow), x);
    // <conv.chunks.Comment object at 0x104f20e60>
    // <conv.chunks.Comment object at 0x104f20ef0>
    sta(Player_X_Position);
    lda(Player_PageLoc);
    adc(offsetof(G, ClimbAdderHigh), x);
    // <conv.chunks.Comment object at 0x104f21130>
    // <conv.chunks.Comment object at 0x104f21250>
    sta(Player_PageLoc);
    lda(Left_Right_Buttons);
    eor(0b11);
    sta(PlayerFacingDir);
    JMP(ExitCSub);
}

int ExitCSub() {
    // <conv.chunks.Comment object at 0x104f21490>
    // <conv.chunks.Comment object at 0x104f215b0>
    // <conv.chunks.Comment object at 0x104f216d0>
    // <conv.chunks.Comment object at 0x104f217f0>
    rts();
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // <conv.chunks.Comment object at 0x104f218e0>
    sta(ClimbSideTimer);
    rts();
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x104f23050>
    cmp(0x3);
    BNE(CheckForJumping);
    // <conv.chunks.Comment object at 0x104f23770>
    ldy(0x0);
    lda(Up_Down_Buttons);
    anda(Player_CollisionBits);
    BEQ(ProcClimb);
    // <conv.chunks.Comment object at 0x104f23980>
    // <conv.chunks.Comment object at 0x104f23b30>
    // <conv.chunks.Comment object at 0x104f23c50>
    iny();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x104f23e00>
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // <conv.chunks.Comment object at 0x104f300e0>
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
    // <conv.chunks.Comment object at 0x104f30260>
    // <conv.chunks.Comment object at 0x104f30380>
    // <conv.chunks.Comment object at 0x104f30410>
    // <conv.chunks.Comment object at 0x104f305f0>
    // <conv.chunks.Comment object at 0x104f30710>
    // <conv.chunks.Comment object at 0x104f30860>
    // <conv.chunks.Comment object at 0x104f308f0>
    sta(PlayerAnimTimerSet);
    rts();
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda(JumpspringAnimCtrl);
    BNE(NoJump);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x104f30b00>
    // <conv.chunks.Comment object at 0x104f30c20>
    // <conv.chunks.Comment object at 0x104f30d70>
    anda(A_Button);
    BEQ(NoJump);
    anda(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x104f30f80>
    // <conv.chunks.Comment object at 0x104f310d0>
    BEQ(ProcJumping);
    JMP(NoJump);
}

int NoJump() {
    // <conv.chunks.Comment object at 0x104f312e0>
    JMP(X_Physics);
    JMP(ProcJumping);
}

int ProcJumping() {
    lda(Player_State);
    BEQ(InitJS);
    lda(SwimmingFlag);
    BEQ(NoJump);
    lda(JumpSwimTimer);
    // <conv.chunks.Comment object at 0x104f31490>
    // <conv.chunks.Comment object at 0x104f315b0>
    // <conv.chunks.Comment object at 0x104f31700>
    // <conv.chunks.Comment object at 0x104f31820>
    // <conv.chunks.Comment object at 0x104f31970>
    BNE(InitJS);
    lda(Player_Y_Speed);
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // <conv.chunks.Comment object at 0x104f31bb0>
    // <conv.chunks.Comment object at 0x104f31cd0>
    // <conv.chunks.Comment object at 0x104f31e20>
    // <conv.chunks.Comment object at 0x104f31f40>
    lda(0x20);
    sta(JumpSwimTimer);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x104f321b0>
    sty(Player_YMF_Dummy);
    sty(Player_Y_MoveForce);
    lda(Player_Y_HighPos);
    sta(JumpOrigin_Y_HighPos);
    // <conv.chunks.Comment object at 0x104f324b0>
    // <conv.chunks.Comment object at 0x104f325d0>
    lda(Player_Y_Position);
    sta(JumpOrigin_Y_Position);
    lda(0x1);
    // <conv.chunks.Comment object at 0x104f328d0>
    sta(Player_State);
    lda(Player_XSpeedAbsolute);
    // <conv.chunks.Comment object at 0x104f32ae0>
    cmp(0x9);
    BCC(ChkWtr);
    iny();
    // <conv.chunks.Comment object at 0x104f32c60>
    // <conv.chunks.Comment object at 0x104f32e70>
    cmp(0x10);
    BCC(ChkWtr);
    iny();
    cmp(0x19);
    BCC(ChkWtr);
    iny();
    cmp(0x1c);
    BCC(ChkWtr);
    // <conv.chunks.Comment object at 0x104f334a0>
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // <conv.chunks.Comment object at 0x104f33710>
    lda(0x1);
    sta(DiffToHaltJump);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x104f33980>
    BEQ(GetYPhy);
    ldy(0x5);
    lda(Whirlpool_Flag);
    // <conv.chunks.Comment object at 0x104f33bc0>
    // <conv.chunks.Comment object at 0x104f33c50>
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // <conv.chunks.Comment object at 0x104f33f50>
    // <conv.chunks.Comment object at 0x104f33fe0>
    lda(offsetof(G, JumpMForceData), y);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x104f381d0>
    lda(offsetof(G, FallMForceData), y);
    sta(VerticalForceDown);
    lda(offsetof(G, InitMForceData), y);
    sta(Player_Y_MoveForce);
    lda(offsetof(G, PlayerYSpdData), y);
    sta(Player_Y_Speed);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x104f38920>
    BEQ(PJumpSnd);
    lda(Sfx_EnemyStomp);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x104f38b30>
    // <conv.chunks.Comment object at 0x104f38c50>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(X_Physics);
    lda(0x0);
    sta(Player_Y_Speed);
    JMP(X_Physics);
    JMP(PJumpSnd);
}

int PJumpSnd() {
    // <conv.chunks.Comment object at 0x104f38e60>
    // <conv.chunks.Comment object at 0x104f38ef0>
    // <conv.chunks.Comment object at 0x104f390a0>
    // <conv.chunks.Comment object at 0x104f39130>
    // <conv.chunks.Comment object at 0x104f392e0>
    // <conv.chunks.Comment object at 0x104f39400>
    lda(Sfx_BigJump);
    ldy(PlayerSize);
    // <conv.chunks.Comment object at 0x104f39550>
    BEQ(SJumpSnd);
    lda(Sfx_SmallJump);
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // <conv.chunks.Comment object at 0x104f39760>
    // <conv.chunks.Comment object at 0x104f39880>
    sta(Square1SoundQueue);
    JMP(X_Physics);
}

int X_Physics() {
    ldy(0x0);
    sty(0x0);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x104f39b20>
    // <conv.chunks.Comment object at 0x104f39bb0>
    BEQ(ProcPRun);
    lda(Player_XSpeedAbsolute);
    cmp(0x19);
    BCS(GetXPhy);
    BCC(ChkRFast);
    JMP(ProcPRun);
}

int ProcPRun() {
    // <conv.chunks.Comment object at 0x104f39e20>
    // <conv.chunks.Comment object at 0x104f39f40>
    // <conv.chunks.Comment object at 0x104f39fd0>
    // <conv.chunks.Comment object at 0x104f3a1b0>
    // <conv.chunks.Comment object at 0x104f3a2d0>
    iny();
    lda(AreaType);
    BEQ(ChkRFast);
    dey();
    lda(Left_Right_Buttons);
    cmp(Player_MovingDir);
    BNE(ChkRFast);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x104f3a3c0>
    // <conv.chunks.Comment object at 0x104f3a4e0>
    // <conv.chunks.Comment object at 0x104f3a630>
    // <conv.chunks.Comment object at 0x104f3a6c0>
    // <conv.chunks.Comment object at 0x104f3a7e0>
    // <conv.chunks.Comment object at 0x104f3a900>
    // <conv.chunks.Comment object at 0x104f3aa20>
    anda(B_Button);
    BNE(SetRTmr);
    lda(RunningTimer);
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // <conv.chunks.Comment object at 0x104f3ac30>
    // <conv.chunks.Comment object at 0x104f3ad80>
    // <conv.chunks.Comment object at 0x104f3aea0>
    // <conv.chunks.Comment object at 0x104f3aff0>
    iny();
    inc(0x0);
    // <conv.chunks.Comment object at 0x104f3b110>
    lda(RunningSpeed);
    BNE(FastXSp);
    // <conv.chunks.Comment object at 0x104f3b2f0>
    lda(Player_XSpeedAbsolute);
    cmp(0x21);
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // <conv.chunks.Comment object at 0x104f3b530>
    // <conv.chunks.Comment object at 0x104f3b5c0>
    // <conv.chunks.Comment object at 0x104f3b7a0>
    inc(0x0);
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // <conv.chunks.Comment object at 0x104f3b8c0>
    // <conv.chunks.Comment object at 0x104f3ba70>
    lda(0xa);
    sta(RunningTimer);
    JMP(GetXPhy);
}

int GetXPhy() {
    // <conv.chunks.Comment object at 0x104f3bce0>
    lda(offsetof(G, MaxLeftXSpdData), y);
    sta(MaximumLeftSpeed);
    lda(GameEngineSubroutine);
    cmp(0x7);
    BNE(GetXPhy2);
    ldy(0x3);
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // <conv.chunks.Comment object at 0x104f3bf80>
    // <conv.chunks.Comment object at 0x104f400e0>
    // <conv.chunks.Comment object at 0x104f40170>
    // <conv.chunks.Comment object at 0x104f40320>
    // <conv.chunks.Comment object at 0x104f403b0>
    lda(offsetof(G, MaxRightXSpdData), y);
    sta(MaximumRightSpeed);
    ldy(0x0);
    lda(offsetof(G, FrictionData), y);
    // <conv.chunks.Comment object at 0x104f406e0>
    // <conv.chunks.Comment object at 0x104f40770>
    sta(FrictionAdderLow);
    lda(0x0);
    sta(FrictionAdderHigh);
    // <conv.chunks.Comment object at 0x104f40a70>
    lda(PlayerFacingDir);
    cmp(Player_MovingDir);
    BEQ(ExitPhy);
    asl(FrictionAdderLow);
    rol(FrictionAdderHigh);
    JMP(ExitPhy);
}

int ExitPhy() {
    // <conv.chunks.Comment object at 0x104f40d10>
    // <conv.chunks.Comment object at 0x104f40e30>
    // <conv.chunks.Comment object at 0x104f40f80>
    // <conv.chunks.Comment object at 0x104f410a0>
    // <conv.chunks.Comment object at 0x104f411c0>
    rts();
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
    // <conv.chunks.Comment object at 0x104f413a0>
    // <conv.chunks.Comment object at 0x104f41400>
    // <conv.chunks.Comment object at 0x104f41760>
    // <conv.chunks.Comment object at 0x104f417f0>
    // <conv.chunks.Comment object at 0x104f419d0>
    // <conv.chunks.Comment object at 0x104f41a60>
    // <conv.chunks.Comment object at 0x104f41af0>
    // <conv.chunks.Comment object at 0x104f41d00>
    // <conv.chunks.Comment object at 0x104f41d90>
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
    // <conv.chunks.Comment object at 0x104f41f10>
    // <conv.chunks.Comment object at 0x104f42030>
    // <conv.chunks.Comment object at 0x104f42150>
    // <conv.chunks.Comment object at 0x104f421e0>
    // <conv.chunks.Comment object at 0x104f42390>
    // <conv.chunks.Comment object at 0x104f424b0>
    // <conv.chunks.Comment object at 0x104f42540>
    sta(RunningSpeed);
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // <conv.chunks.Comment object at 0x104f42810>
    lda(Player_XSpeedAbsolute);
    cmp(0xb);
    BCS(SetAnimSpd);
    // <conv.chunks.Comment object at 0x104f42960>
    // <conv.chunks.Comment object at 0x104f429f0>
    lda(PlayerFacingDir);
    sta(Player_MovingDir);
    // <conv.chunks.Comment object at 0x104f42c90>
    lda(0x0);
    sta(Player_X_Speed);
    sta(Player_X_MoveForce);
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // <conv.chunks.Comment object at 0x104f42e10>
    // <conv.chunks.Comment object at 0x104f42fc0>
    // <conv.chunks.Comment object at 0x104f430e0>
    lda(offsetof(G, PlayerAnimTmrData), y);
    sta(PlayerAnimTimerSet);
    rts();
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda(Player_CollisionBits);
    cmp(0x0);
    BNE(JoypFrict);
    // <conv.chunks.Comment object at 0x104f43440>
    // <conv.chunks.Comment object at 0x104f43560>
    // <conv.chunks.Comment object at 0x104f435f0>
    lda(Player_X_Speed);
    BEQ(SetAbsSpd);
    BPL(RghtFrict);
    BMI(LeftFrict);
    JMP(JoypFrict);
}

int JoypFrict() {
    // <conv.chunks.Comment object at 0x104f43890>
    // <conv.chunks.Comment object at 0x104f439b0>
    // <conv.chunks.Comment object at 0x104f43ad0>
    // <conv.chunks.Comment object at 0x104f43bf0>
    lsr();
    BCC(RghtFrict);
    JMP(LeftFrict);
}

int LeftFrict() {
    // <conv.chunks.Comment object at 0x104f43ce0>
    // <conv.chunks.Comment object at 0x104f43e00>
    lda(Player_X_MoveForce);
    clc();
    adc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x104f43fe0>
    // <conv.chunks.Comment object at 0x104f50140>
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
    // <conv.chunks.Comment object at 0x104f50350>
    // <conv.chunks.Comment object at 0x104f50470>
    // <conv.chunks.Comment object at 0x104f50590>
    // <conv.chunks.Comment object at 0x104f506b0>
    // <conv.chunks.Comment object at 0x104f507d0>
    // <conv.chunks.Comment object at 0x104f508f0>
    // <conv.chunks.Comment object at 0x104f50a10>
    // <conv.chunks.Comment object at 0x104f50b30>
    lda(Player_X_MoveForce);
    sec();
    sbc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x104f50d10>
    // <conv.chunks.Comment object at 0x104f50e30>
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
    // <conv.chunks.Comment object at 0x104f51040>
    // <conv.chunks.Comment object at 0x104f51160>
    // <conv.chunks.Comment object at 0x104f51280>
    // <conv.chunks.Comment object at 0x104f513a0>
    // <conv.chunks.Comment object at 0x104f514c0>
    // <conv.chunks.Comment object at 0x104f515e0>
    // <conv.chunks.Comment object at 0x104f51700>
    cmp(0x0);
    BPL(SetAbsSpd);
    // <conv.chunks.Comment object at 0x104f517c0>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // <conv.chunks.Comment object at 0x104f51a90>
    // <conv.chunks.Comment object at 0x104f51b20>
    // <conv.chunks.Comment object at 0x104f51bb0>
    sta(Player_XSpeedAbsolute);
    rts();
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x104f51e50>
    // <conv.chunks.Comment object at 0x104f51eb0>
    // <conv.chunks.Comment object at 0x104f51f10>
    cmp(0x2);
    BCC(ProcAirBubbles);
    // <conv.chunks.Comment object at 0x104f52090>
    lda(A_B_Buttons);
    anda(B_Button);
    BEQ(ProcFireballs);
    // <conv.chunks.Comment object at 0x104f52330>
    // <conv.chunks.Comment object at 0x104f52450>
    anda(PreviousA_B_Buttons);
    BNE(ProcFireballs);
    lda(FireballCounter);
    anda(0b1);
    // <conv.chunks.Comment object at 0x104f52660>
    // <conv.chunks.Comment object at 0x104f52780>
    // <conv.chunks.Comment object at 0x104f528a0>
    tax();
    lda(Fireball_State, x);
    BNE(ProcFireballs);
    ldy(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x104f52a50>
    // <conv.chunks.Comment object at 0x104f52ba0>
    // <conv.chunks.Comment object at 0x104f52cc0>
    dey();
    BNE(ProcFireballs);
    lda(CrouchingFlag);
    // <conv.chunks.Comment object at 0x104f52f60>
    BNE(ProcFireballs);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x104f53170>
    cmp(0x3);
    BEQ(ProcFireballs);
    lda(Sfx_Fireball);
    // <conv.chunks.Comment object at 0x104f53470>
    sta(Square1SoundQueue);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104f53680>
    sta(Fireball_State, x);
    ldy(PlayerAnimTimerSet);
    sty(FireballThrowingTimer);
    // <conv.chunks.Comment object at 0x104f538c0>
    // <conv.chunks.Comment object at 0x104f539e0>
    dey();
    sty(PlayerAnimTimer);
    inc(FireballCounter);
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(0x0);
    JSR(FireballObjCore);
    // <conv.chunks.Comment object at 0x104f53e60>
    ldx(0x1);
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda(AreaType);
    // <conv.chunks.Comment object at 0x104f5c290>
    BNE(BublExit);
    ldx(0x2);
    JMP(BublLoop);
}

int BublLoop() {
    // <conv.chunks.Comment object at 0x104f5c4a0>
    // <conv.chunks.Comment object at 0x104f5c530>
    stx(ObjectOffset);
    JSR(BubbleCheck);
    JSR(RelativeBubblePosition);
    JSR(GetBubbleOffscreenBits);
    JSR(DrawBubble);
    // <conv.chunks.Comment object at 0x104f5c710>
    // <conv.chunks.Comment object at 0x104f5c830>
    // <conv.chunks.Comment object at 0x104f5c950>
    // <conv.chunks.Comment object at 0x104f5ca70>
    dex();
    BPL(BublLoop);
    JMP(BublExit);
}

int BublExit() {
    // <conv.chunks.Comment object at 0x104f5cc20>
    // <conv.chunks.Comment object at 0x104f5cd40>
    rts();
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx(ObjectOffset);
    lda(Fireball_State, x);
    // <conv.chunks.Comment object at 0x104f5cec0>
    // <conv.chunks.Comment object at 0x104f5d0d0>
    asl();
    BCS(FireballExplosion);
    ldy(Fireball_State, x);
    // <conv.chunks.Comment object at 0x104f5d2b0>
    // <conv.chunks.Comment object at 0x104f5d3d0>
    BEQ(NoFBall);
    dey();
    // <conv.chunks.Comment object at 0x104f5d670>
    BEQ(RunFB);
    lda(Player_X_Position);
    adc(0x4);
    // <conv.chunks.Comment object at 0x104f5d820>
    // <conv.chunks.Comment object at 0x104f5d940>
    sta(Fireball_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x104f5db80>
    // <conv.chunks.Comment object at 0x104f5dca0>
    sta(Fireball_PageLoc, x);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x104f5dee0>
    sta(Fireball_Y_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x104f5e120>
    sta(Fireball_Y_HighPos, x);
    ldy(PlayerFacingDir);
    dey();
    lda(offsetof(G, FireballXSpdData), y);
    // <conv.chunks.Comment object at 0x104f5e360>
    // <conv.chunks.Comment object at 0x104f5e4b0>
    // <conv.chunks.Comment object at 0x104f5e540>
    sta(Fireball_X_Speed, x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x104f5e7b0>
    sta(Fireball_Y_Speed, x);
    lda(0x7);
    sta(Fireball_BoundBoxCtrl, x);
    dec(Fireball_State, x);
    JMP(RunFB);
}

int RunFB() {
    // <conv.chunks.Comment object at 0x104f5ea50>
    // <conv.chunks.Comment object at 0x104f5ec30>
    // <conv.chunks.Comment object at 0x104f5ed80>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x104f5eed0>
    adc(0x7);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x104f5f0e0>
    sta(0x0);
    lda(0x3);
    // <conv.chunks.Comment object at 0x104f5f170>
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
    // <conv.chunks.Comment object at 0x104f5f560>
    // <conv.chunks.Comment object at 0x104f5f710>
    // <conv.chunks.Comment object at 0x104f5f830>
    // <conv.chunks.Comment object at 0x104f5f950>
    // <conv.chunks.Comment object at 0x104f5fa70>
    // <conv.chunks.Comment object at 0x104f5fb90>
    // <conv.chunks.Comment object at 0x104f5fcb0>
    // <conv.chunks.Comment object at 0x104f5fdd0>
    // <conv.chunks.Comment object at 0x104f5fef0>
    // <conv.chunks.Comment object at 0x104f64050>
    // <conv.chunks.Comment object at 0x104f641a0>
    // <conv.chunks.Comment object at 0x104f642c0>
    // <conv.chunks.Comment object at 0x104f643e0>
    lda(0x0);
    sta(Fireball_State, x);
    JMP(NoFBall);
}

int NoFBall() {
    // <conv.chunks.Comment object at 0x104f646b0>
    rts();
    JMP(FireballExplosion);
}

int FireballExplosion() {
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
    JMP(BubbleCheck);
}

int BubbleCheck() {
    lda(((PseudoRandomBitReg) + (1)), x);
    // <conv.chunks.Comment object at 0x104f64a10>
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
    // <conv.chunks.Comment object at 0x104f65430>
    // <conv.chunks.Comment object at 0x104f654c0>
    // <conv.chunks.Comment object at 0x104f656a0>
    // <conv.chunks.Comment object at 0x104f65730>
    // <conv.chunks.Comment object at 0x104f65880>
    // <conv.chunks.Comment object at 0x104f65910>
    tya();
    adc(Player_X_Position);
    sta(Bubble_X_Position, x);
    // <conv.chunks.Comment object at 0x104f65ac0>
    // <conv.chunks.Comment object at 0x104f65be0>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Bubble_PageLoc, x);
    // <conv.chunks.Comment object at 0x104f65e20>
    // <conv.chunks.Comment object at 0x104f65eb0>
    lda(Player_Y_Position);
    clc();
    // <conv.chunks.Comment object at 0x104f661b0>
    adc(0x8);
    sta(Bubble_Y_Position, x);
    // <conv.chunks.Comment object at 0x104f662a0>
    lda(0x1);
    sta(Bubble_Y_HighPos, x);
    ldy(0x7);
    lda(offsetof(G, BubbleTimerData), y);
    sta(AirBubbleTimer);
    JMP(MoveBubl);
}

int MoveBubl() {
    // <conv.chunks.Comment object at 0x104f664e0>
    // <conv.chunks.Comment object at 0x104f666f0>
    // <conv.chunks.Comment object at 0x104f66780>
    // <conv.chunks.Comment object at 0x104f66930>
    // <conv.chunks.Comment object at 0x104f66a50>
    ldy(0x7);
    lda(Bubble_YMF_Dummy, x);
    sec();
    // <conv.chunks.Comment object at 0x104f66cf0>
    sbc(offsetof(G, Bubble_MForceData), y);
    sta(Bubble_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x104f66ea0>
    lda(Bubble_Y_Position, x);
    sbc(0x0);
    cmp(0x20);
    BCS(Y_Bubl);
    lda(0xf8);
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // <conv.chunks.Comment object at 0x104f67110>
    // <conv.chunks.Comment object at 0x104f671a0>
    // <conv.chunks.Comment object at 0x104f672c0>
    // <conv.chunks.Comment object at 0x104f674a0>
    // <conv.chunks.Comment object at 0x104f67530>
    sta(Bubble_Y_Position, x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // <conv.chunks.Comment object at 0x104f677a0>
    rts();
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda(OperMode);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x104f67920>
    // <conv.chunks.Comment object at 0x104f67cb0>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BCC(ExGTimer);
    cmp(0xb);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x104f67ec0>
    // <conv.chunks.Comment object at 0x104f67f50>
    // <conv.chunks.Comment object at 0x104f70140>
    // <conv.chunks.Comment object at 0x104f701d0>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BCS(ExGTimer);
    lda(GameTimerCtrlTimer);
    BNE(ExGTimer);
    // <conv.chunks.Comment object at 0x104f70470>
    // <conv.chunks.Comment object at 0x104f70500>
    // <conv.chunks.Comment object at 0x104f706b0>
    // <conv.chunks.Comment object at 0x104f707d0>
    lda(GameTimerDisplay);
    ora(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x104f709e0>
    ora(((GameTimerDisplay) + (2)));
    BEQ(TimeUpOn);
    ldy(GameTimerDisplay);
    dey();
    BNE(ResGTCtrl);
    lda(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x104f70d70>
    // <conv.chunks.Comment object at 0x104f70e90>
    // <conv.chunks.Comment object at 0x104f70fe0>
    // <conv.chunks.Comment object at 0x104f71070>
    // <conv.chunks.Comment object at 0x104f71190>
    ora(((GameTimerDisplay) + (2)));
    BNE(ResGTCtrl);
    // <conv.chunks.Comment object at 0x104f71520>
    lda(TimeRunningOutMusic);
    sta(EventMusicQueue);
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // <conv.chunks.Comment object at 0x104f71730>
    // <conv.chunks.Comment object at 0x104f71850>
    lda(0x18);
    sta(GameTimerCtrlTimer);
    ldy(0x23);
    lda(0xff);
    // <conv.chunks.Comment object at 0x104f71a90>
    // <conv.chunks.Comment object at 0x104f71b20>
    sta(((DigitModifier) + (5)));
    JSR(DigitsMathRoutine);
    lda(0xa4);
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // <conv.chunks.Comment object at 0x104f71e80>
    // <conv.chunks.Comment object at 0x104f71fa0>
    // <conv.chunks.Comment object at 0x104f72030>
    // <conv.chunks.Comment object at 0x104f721e0>
    sta(PlayerStatus);
    JSR(ForceInjury);
    inc(GameTimerExpiredFlag);
    JMP(ExGTimer);
}

int ExGTimer() {
    // <conv.chunks.Comment object at 0x104f72330>
    // <conv.chunks.Comment object at 0x104f72450>
    // <conv.chunks.Comment object at 0x104f725a0>
    rts();
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
    // <conv.chunks.Comment object at 0x104f73170>
    // <conv.chunks.Comment object at 0x104f73290>
    // <conv.chunks.Comment object at 0x104f733e0>
    // <conv.chunks.Comment object at 0x104f73500>
    // <conv.chunks.Comment object at 0x104f73620>
    // <conv.chunks.Comment object at 0x104f73770>
    // <conv.chunks.Comment object at 0x104f73800>
    lda(Whirlpool_LeftExtent, y);
    clc();
    adc(Whirlpool_Length, y);
    sta(0x2);
    lda(Whirlpool_PageLoc, y);
    BEQ(NextWh);
    adc(0x0);
    sta(0x1);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x104f73ad0>
    // <conv.chunks.Comment object at 0x104f73c50>
    // <conv.chunks.Comment object at 0x104f73ce0>
    // <conv.chunks.Comment object at 0x104f73e90>
    // <conv.chunks.Comment object at 0x104f73fe0>
    // <conv.chunks.Comment object at 0x104f7c170>
    // <conv.chunks.Comment object at 0x104f7c200>
    sec();
    sbc(Whirlpool_LeftExtent, y);
    lda(Player_PageLoc);
    sbc(Whirlpool_PageLoc, y);
    BMI(NextWh);
    lda(0x2);
    // <conv.chunks.Comment object at 0x104f7c410>
    // <conv.chunks.Comment object at 0x104f7c560>
    // <conv.chunks.Comment object at 0x104f7c680>
    // <conv.chunks.Comment object at 0x104f7c7d0>
    // <conv.chunks.Comment object at 0x104f7c950>
    sec();
    sbc(Player_X_Position);
    lda(0x1);
    sbc(Player_PageLoc);
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}

int NextWh() {
    // <conv.chunks.Comment object at 0x104f7cad0>
    // <conv.chunks.Comment object at 0x104f7cc20>
    // <conv.chunks.Comment object at 0x104f7ccb0>
    // <conv.chunks.Comment object at 0x104f7ce30>
    // <conv.chunks.Comment object at 0x104f7cf50>
    dey();
    BPL(WhLoop);
    JMP(ExitWh);
}

int ExitWh() {
    // <conv.chunks.Comment object at 0x104f7d070>
    // <conv.chunks.Comment object at 0x104f7d1f0>
    rts();
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda(Whirlpool_Length, y);
    lsr();
    sta(0x0);
    lda(Whirlpool_LeftExtent, y);
    // <conv.chunks.Comment object at 0x104f7d340>
    // <conv.chunks.Comment object at 0x104f7d4c0>
    // <conv.chunks.Comment object at 0x104f7d580>
    // <conv.chunks.Comment object at 0x104f7d610>
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
    // <conv.chunks.Comment object at 0x104f7d880>
    // <conv.chunks.Comment object at 0x104f7d850>
    // <conv.chunks.Comment object at 0x104f7da30>
    // <conv.chunks.Comment object at 0x104f7dbe0>
    // <conv.chunks.Comment object at 0x104f7dd30>
    // <conv.chunks.Comment object at 0x104f7ddc0>
    // <conv.chunks.Comment object at 0x104f7df70>
    // <conv.chunks.Comment object at 0x104f7e000>
    // <conv.chunks.Comment object at 0x104f7e180>
    sec();
    sbc(Player_X_Position);
    lda(0x0);
    sbc(Player_PageLoc);
    BPL(LeftWh);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x104f7e300>
    // <conv.chunks.Comment object at 0x104f7e450>
    // <conv.chunks.Comment object at 0x104f7e4e0>
    // <conv.chunks.Comment object at 0x104f7e660>
    // <conv.chunks.Comment object at 0x104f7e7b0>
    sec();
    sbc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x104f7e960>
    // <conv.chunks.Comment object at 0x104f7e9f0>
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // <conv.chunks.Comment object at 0x104f7ec90>
    // <conv.chunks.Comment object at 0x104f7ed20>
    // <conv.chunks.Comment object at 0x104f7ef00>
    lda(Player_CollisionBits);
    lsr();
    BCC(WhPull);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x104f7f0b0>
    // <conv.chunks.Comment object at 0x104f7f140>
    // <conv.chunks.Comment object at 0x104f7f290>
    clc();
    adc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x104f7f440>
    // <conv.chunks.Comment object at 0x104f7f4d0>
    lda(Player_PageLoc);
    adc(0x0);
    JMP(SetPWh);
}

int SetPWh() {
    // <conv.chunks.Comment object at 0x104f7f770>
    // <conv.chunks.Comment object at 0x104f7f800>
    sta(Player_PageLoc);
    JMP(WhPull);
}

int WhPull() {
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x104f7fb90>
    lda(0x1);
    sta(Whirlpool_Flag);
    sta(0x2);
    // <conv.chunks.Comment object at 0x104f7fce0>
    // <conv.chunks.Comment object at 0x104f7fec0>
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(0x5);
    stx(ObjectOffset);
    // <conv.chunks.Comment object at 0x104f84380>
    // <conv.chunks.Comment object at 0x104f843e0>
    lda(Enemy_ID, x);
    cmp(FlagpoleFlagObject);
    BNE(ExitFlagP);
    // <conv.chunks.Comment object at 0x104f84c20>
    // <conv.chunks.Comment object at 0x104f84d40>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BNE(SkipScore);
    // <conv.chunks.Comment object at 0x104f84f50>
    // <conv.chunks.Comment object at 0x104f84fe0>
    lda(Player_State);
    cmp(0x3);
    BNE(SkipScore);
    lda(Enemy_Y_Position, x);
    cmp(0xaa);
    BCS(GiveFPScr);
    lda(Player_Y_Position);
    cmp(0xa2);
    BCS(GiveFPScr);
    // <conv.chunks.Comment object at 0x104f85280>
    // <conv.chunks.Comment object at 0x104f85310>
    // <conv.chunks.Comment object at 0x104f854c0>
    // <conv.chunks.Comment object at 0x104f85610>
    // <conv.chunks.Comment object at 0x104f856a0>
    // <conv.chunks.Comment object at 0x104f85850>
    // <conv.chunks.Comment object at 0x104f85970>
    // <conv.chunks.Comment object at 0x104f85a00>
    lda(Enemy_YMF_Dummy, x);
    adc(0xff);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x1);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x104f85cd0>
    // <conv.chunks.Comment object at 0x104f85d60>
    // <conv.chunks.Comment object at 0x104f85f40>
    // <conv.chunks.Comment object at 0x104f86090>
    // <conv.chunks.Comment object at 0x104f86120>
    lda(FlagpoleFNum_YMFDummy);
    sec();
    // <conv.chunks.Comment object at 0x104f86420>
    sbc(0xff);
    sta(FlagpoleFNum_YMFDummy);
    // <conv.chunks.Comment object at 0x104f86510>
    lda(FlagpoleFNum_Y_Pos);
    sbc(0x1);
    sta(FlagpoleFNum_Y_Pos);
    JMP(SkipScore);
}

int SkipScore() {
    // <conv.chunks.Comment object at 0x104f867b0>
    // <conv.chunks.Comment object at 0x104f86840>
    // <conv.chunks.Comment object at 0x104f869f0>
    JMP(FPGfx);
    JMP(GiveFPScr);
}

int GiveFPScr() {
    // <conv.chunks.Comment object at 0x104f86b70>
    ldy(FlagpoleScore);
    lda(offsetof(G, FlagpoleScoreMods), y);
    ldx(offsetof(G, FlagpoleScoreDigits), y);
    sta(DigitModifier, x);
    JSR(AddToScore);
    // <conv.chunks.Comment object at 0x104f86cc0>
    // <conv.chunks.Comment object at 0x104f86e10>
    // <conv.chunks.Comment object at 0x104f86f60>
    // <conv.chunks.Comment object at 0x104f870b0>
    lda(0x5);
    sta(GameEngineSubroutine);
    JMP(FPGfx);
}

int FPGfx() {
    // <conv.chunks.Comment object at 0x104f87230>
    // <conv.chunks.Comment object at 0x104f873e0>
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
    lda(TimerControl);
    BNE(DrawJSpr);
    lda(JumpspringAnimCtrl);
    BEQ(DrawJSpr);
    // <conv.chunks.Comment object at 0x104f87920>
    // <conv.chunks.Comment object at 0x104f87c50>
    // <conv.chunks.Comment object at 0x104f87d70>
    // <conv.chunks.Comment object at 0x104f87e90>
    // <conv.chunks.Comment object at 0x104f87fb0>
    tay();
    dey();
    tya();
    anda(0b10);
    BNE(DownJSpr);
    // <conv.chunks.Comment object at 0x104f901d0>
    // <conv.chunks.Comment object at 0x104f90290>
    // <conv.chunks.Comment object at 0x104f90320>
    // <conv.chunks.Comment object at 0x104f90440>
    inc(Player_Y_Position);
    inc(Player_Y_Position);
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // <conv.chunks.Comment object at 0x104f90650>
    // <conv.chunks.Comment object at 0x104f90770>
    // <conv.chunks.Comment object at 0x104f908c0>
    dec(Player_Y_Position);
    dec(Player_Y_Position);
    JMP(PosJSpr);
}

int PosJSpr() {
    // <conv.chunks.Comment object at 0x104f90b00>
    lda(Jumpspring_FixedYPos, x);
    clc();
    adc(offsetof(G, Jumpspring_Y_PosData), y);
    sta(Enemy_Y_Position, x);
    cpy(0x1);
    BCC(BounceJS);
    // <conv.chunks.Comment object at 0x104f90d40>
    // <conv.chunks.Comment object at 0x104f90e90>
    // <conv.chunks.Comment object at 0x104f90fe0>
    // <conv.chunks.Comment object at 0x104f91070>
    lda(A_B_Buttons);
    anda(A_Button);
    BEQ(BounceJS);
    anda(PreviousA_B_Buttons);
    BNE(BounceJS);
    // <conv.chunks.Comment object at 0x104f91310>
    // <conv.chunks.Comment object at 0x104f91430>
    // <conv.chunks.Comment object at 0x104f91550>
    // <conv.chunks.Comment object at 0x104f91670>
    lda(0xf4);
    sta(JumpspringForce);
    JMP(BounceJS);
}

int BounceJS() {
    // <conv.chunks.Comment object at 0x104f917f0>
    // <conv.chunks.Comment object at 0x104f919a0>
    cpy(0x3);
    BNE(DrawJSpr);
    // <conv.chunks.Comment object at 0x104f91a60>
    lda(JumpspringForce);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x104f91d00>
    lda(0x0);
    sta(JumpspringAnimCtrl);
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // <conv.chunks.Comment object at 0x104f91e80>
    // <conv.chunks.Comment object at 0x104f92030>
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda(JumpspringAnimCtrl);
    BEQ(ExJSpring);
    // <conv.chunks.Comment object at 0x104f92180>
    // <conv.chunks.Comment object at 0x104f922a0>
    // <conv.chunks.Comment object at 0x104f923c0>
    // <conv.chunks.Comment object at 0x104f924e0>
    lda(JumpspringTimer);
    BNE(ExJSpring);
    // <conv.chunks.Comment object at 0x104f926f0>
    lda(0x4);
    sta(JumpspringTimer);
    inc(JumpspringAnimCtrl);
    JMP(ExJSpring);
}

int ExJSpring() {
    // <conv.chunks.Comment object at 0x104f92870>
    // <conv.chunks.Comment object at 0x104f92a20>
    // <conv.chunks.Comment object at 0x104f92b70>
    rts();
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda(VineObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x104f92cc0>
    // <conv.chunks.Comment object at 0x104f92de0>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x104f92f90>
    lda(Block_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x104f93290>
    lda(Block_X_Position, y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x104f93500>
    lda(Block_Y_Position, y);
    sta(Enemy_Y_Position, x);
    ldy(VineFlagOffset);
    BNE(NextVO);
    sta(VineStart_Y_Position);
    JMP(NextVO);
}

int NextVO() {
    // <conv.chunks.Comment object at 0x104f93770>
    // <conv.chunks.Comment object at 0x104f938c0>
    // <conv.chunks.Comment object at 0x104f939e0>
    // <conv.chunks.Comment object at 0x104f93b30>
    // <conv.chunks.Comment object at 0x104f93c50>
    txa();
    sta(VineObjOffset, y);
    inc(VineFlagOffset);
    // <conv.chunks.Comment object at 0x104f93d70>
    // <conv.chunks.Comment object at 0x104f93ec0>
    lda(Sfx_GrowVine);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x104f98110>
    rts();
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(0x5);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x104f983e0>
    // <conv.chunks.Comment object at 0x104f98560>
    ldy(VineFlagOffset);
    dey();
    // <conv.chunks.Comment object at 0x104f98860>
    lda(VineHeight);
    cmp(offsetof(G, VineHeightData), y);
    BEQ(RunVSubs);
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x104f989e0>
    // <conv.chunks.Comment object at 0x104f98b30>
    // <conv.chunks.Comment object at 0x104f98c50>
    // <conv.chunks.Comment object at 0x104f98da0>
    lsr();
    BCC(RunVSubs);
    // <conv.chunks.Comment object at 0x104f98ec0>
    lda(((Enemy_Y_Position) + (5)));
    sbc(0x1);
    sta(((Enemy_Y_Position) + (5)));
    inc(VineHeight);
    JMP(RunVSubs);
}

int RunVSubs() {
    // <conv.chunks.Comment object at 0x104f99190>
    // <conv.chunks.Comment object at 0x104f99220>
    // <conv.chunks.Comment object at 0x104f99490>
    // <conv.chunks.Comment object at 0x104f995b0>
    lda(VineHeight);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x104f99700>
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(0x0);
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // <conv.chunks.Comment object at 0x104f99940>
    // <conv.chunks.Comment object at 0x104f99a60>
    // <conv.chunks.Comment object at 0x104f99b80>
    // <conv.chunks.Comment object at 0x104f99c10>
    JSR(DrawVine);
    iny();
    cpy(VineFlagOffset);
    BNE(VDrawLoop);
    // <conv.chunks.Comment object at 0x104f99e20>
    // <conv.chunks.Comment object at 0x104f99eb0>
    // <conv.chunks.Comment object at 0x104f99fd0>
    lda(Enemy_OffscreenBits);
    anda(0b1100);
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // <conv.chunks.Comment object at 0x104f9a1e0>
    // <conv.chunks.Comment object at 0x104f9a300>
    // <conv.chunks.Comment object at 0x104f9a450>
    // <conv.chunks.Comment object at 0x104f9a4e0>
    ldx(VineObjOffset, y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta(VineFlagOffset);
    sta(VineHeight);
    JMP(WrCMTile);
}

int WrCMTile() {
    // <conv.chunks.Comment object at 0x104f9a660>
    // <conv.chunks.Comment object at 0x104f9a7b0>
    // <conv.chunks.Comment object at 0x104f9a840>
    // <conv.chunks.Comment object at 0x104f9a960>
    // <conv.chunks.Comment object at 0x104f9aa80>
    // <conv.chunks.Comment object at 0x104f9aba0>
    lda(VineHeight);
    cmp(0x20);
    BCC(ExitVH);
    ldx(0x6);
    lda(0x1);
    ldy(0x1b);
    JSR(BlockBufferCollision);
    // <conv.chunks.Comment object at 0x104f9acf0>
    // <conv.chunks.Comment object at 0x104f9ad80>
    // <conv.chunks.Comment object at 0x104f9af60>
    // <conv.chunks.Comment object at 0x104f9aff0>
    // <conv.chunks.Comment object at 0x104f9b110>
    // <conv.chunks.Comment object at 0x104f9b230>
    ldy(0x2);
    cpy(0xd0);
    BCS(ExitVH);
    lda((0x6), y);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x104f9b3e0>
    // <conv.chunks.Comment object at 0x104f9b560>
    // <conv.chunks.Comment object at 0x104f9b740>
    // <conv.chunks.Comment object at 0x104f9b7a0>
    lda(0x26);
    sta((0x6), y);
    JMP(ExitVH);
}

int ExitVH() {
    // <conv.chunks.Comment object at 0x104f9ba70>
    // <conv.chunks.Comment object at 0x104f9bb60>
    ldx(ObjectOffset);
    rts();
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda(AreaType);
    BEQ(ExCannon);
    // <conv.chunks.Comment object at 0x104f9bf20>
    // <conv.chunks.Comment object at 0x104fa81a0>
    ldx(0x2);
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // <conv.chunks.Comment object at 0x104fa8320>
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
    // <conv.chunks.Comment object at 0x104fa9850>
    // <conv.chunks.Comment object at 0x104fa9970>
    // <conv.chunks.Comment object at 0x104fa9ac0>
    // <conv.chunks.Comment object at 0x104fa9b50>
    // <conv.chunks.Comment object at 0x104fa9d30>
    // <conv.chunks.Comment object at 0x104fa9e80>
    // <conv.chunks.Comment object at 0x104fa9fd0>
    // <conv.chunks.Comment object at 0x104faa120>
    // <conv.chunks.Comment object at 0x104faa270>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x104faa450>
    // <conv.chunks.Comment object at 0x104faa4e0>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x104faa720>
    // <conv.chunks.Comment object at 0x104faa900>
    // <conv.chunks.Comment object at 0x104faaa80>
    // <conv.chunks.Comment object at 0x104faab10>
    lda(0x9);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x104faacc0>
    lda(BulletBill_CannonVar);
    sta(Enemy_ID, x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // <conv.chunks.Comment object at 0x104faaf90>
    // <conv.chunks.Comment object at 0x104fab0e0>
    // <conv.chunks.Comment object at 0x104fab200>
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
    // <conv.chunks.Comment object at 0x104fab4a0>
    // <conv.chunks.Comment object at 0x104fab5c0>
    // <conv.chunks.Comment object at 0x104fab6e0>
    // <conv.chunks.Comment object at 0x104fab830>
    // <conv.chunks.Comment object at 0x104fab950>
    // <conv.chunks.Comment object at 0x104faba70>
    // <conv.chunks.Comment object at 0x104fabb90>
    dex();
    BPL(ThreeSChk);
    JMP(ExCannon);
}

int ExCannon() {
    // <conv.chunks.Comment object at 0x104fabc80>
    // <conv.chunks.Comment object at 0x104fabda0>
    rts();
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda(TimerControl);
    BNE(RunBBSubs);
    // <conv.chunks.Comment object at 0x104fabf50>
    // <conv.chunks.Comment object at 0x104fb41a0>
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
    // <conv.chunks.Comment object at 0x104fb43e0>
    // <conv.chunks.Comment object at 0x104fb4530>
    // <conv.chunks.Comment object at 0x104fb4650>
    // <conv.chunks.Comment object at 0x104fb4770>
    // <conv.chunks.Comment object at 0x104fb4890>
    // <conv.chunks.Comment object at 0x104fb49e0>
    // <conv.chunks.Comment object at 0x104fb4a70>
    // <conv.chunks.Comment object at 0x104fb4c20>
    // <conv.chunks.Comment object at 0x104fb4da0>
    // <conv.chunks.Comment object at 0x104fb4e30>
    sty(Enemy_MovingDir, x);
    dey();
    lda(offsetof(G, BulletBillXSpdData), y);
    sta(Enemy_X_Speed, x);
    lda(0x0);
    adc(0x28);
    cmp(0x50);
    BCC(KillBB);
    // <conv.chunks.Comment object at 0x104fb5010>
    // <conv.chunks.Comment object at 0x104fb50a0>
    // <conv.chunks.Comment object at 0x104fb51f0>
    // <conv.chunks.Comment object at 0x104fb5370>
    // <conv.chunks.Comment object at 0x104fb5400>
    // <conv.chunks.Comment object at 0x104fb54f0>
    // <conv.chunks.Comment object at 0x104fb5610>
    lda(0x1);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x104fb5850>
    lda(0xa);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x104fb5a90>
    lda(Sfx_Blast);
    sta(Square2SoundQueue);
    JMP(ChkDSte);
}

int ChkDSte() {
    // <conv.chunks.Comment object at 0x104fb5d60>
    // <conv.chunks.Comment object at 0x104fb5e80>
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(BBFly);
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}

int BBFly() {
    // <conv.chunks.Comment object at 0x104fb6120>
    // <conv.chunks.Comment object at 0x104fb6270>
    // <conv.chunks.Comment object at 0x104fb6390>
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}

int RunBBSubs() {
    // <conv.chunks.Comment object at 0x104fb6510>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}

int KillBB() {
    // <conv.chunks.Comment object at 0x104fb6660>
    // <conv.chunks.Comment object at 0x104fb6780>
    // <conv.chunks.Comment object at 0x104fb68a0>
    // <conv.chunks.Comment object at 0x104fb69c0>
    // <conv.chunks.Comment object at 0x104fb6ae0>
    JSR(EraseEnemyObject);
    rts();
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b111);
    BNE(SetMOfs);
    // <conv.chunks.Comment object at 0x104fb6d80>
    // <conv.chunks.Comment object at 0x104fb75c0>
    // <conv.chunks.Comment object at 0x104fb76e0>
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b1000);
    JMP(SetMOfs);
}

int SetMOfs() {
    // <conv.chunks.Comment object at 0x104fb79e0>
    // <conv.chunks.Comment object at 0x104fb7b00>
    tay();
    lda(Misc_State, y);
    BNE(NoHammer);
    ldx(offsetof(G, HammerEnemyOfsData), y);
    lda(Enemy_Flag, x);
    BNE(NoHammer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x104fb7c20>
    // <conv.chunks.Comment object at 0x104fb7d70>
    // <conv.chunks.Comment object at 0x104fb7e90>
    // <conv.chunks.Comment object at 0x104fb7fe0>
    // <conv.chunks.Comment object at 0x104fbc170>
    // <conv.chunks.Comment object at 0x104fbc290>
    txa();
    sta(HammerEnemyOffset, y);
    // <conv.chunks.Comment object at 0x104fbc440>
    lda(0x90);
    sta(Misc_State, y);
    // <conv.chunks.Comment object at 0x104fbc5f0>
    lda(0x7);
    sta(Misc_BoundBoxCtrl, y);
    sec();
    // <conv.chunks.Comment object at 0x104fbc830>
    // <conv.chunks.Comment object at 0x104fbca40>
    rts();
    JMP(NoHammer);
}

int NoHammer() {
    // <conv.chunks.Comment object at 0x104fbcb60>
    ldx(ObjectOffset);
    clc();
    // <conv.chunks.Comment object at 0x104fbcce0>
    rts();
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
    // <conv.chunks.Comment object at 0x104fbce30>
    // <conv.chunks.Comment object at 0x104fbce90>
    // <conv.chunks.Comment object at 0x104fbcef0>
    // <conv.chunks.Comment object at 0x104fbd010>
    // <conv.chunks.Comment object at 0x104fbd130>
    // <conv.chunks.Comment object at 0x104fbd280>
    // <conv.chunks.Comment object at 0x104fbd3a0>
    // <conv.chunks.Comment object at 0x104fbd4f0>
    // <conv.chunks.Comment object at 0x104fbd580>
    // <conv.chunks.Comment object at 0x104fbd760>
    txa();
    clc();
    adc(0xd);
    tax();
    // <conv.chunks.Comment object at 0x104fbd970>
    // <conv.chunks.Comment object at 0x104fbda00>
    // <conv.chunks.Comment object at 0x104fbdb50>
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x104fbdd00>
    lda(0xf);
    sta(0x1);
    // <conv.chunks.Comment object at 0x104fbdf10>
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
    // <conv.chunks.Comment object at 0x104fbe8a0>
    // <conv.chunks.Comment object at 0x104fbea80>
    // <conv.chunks.Comment object at 0x104fbebd0>
    // <conv.chunks.Comment object at 0x104fbecf0>
    // <conv.chunks.Comment object at 0x104fbee40>
    // <conv.chunks.Comment object at 0x104fbefc0>
    // <conv.chunks.Comment object at 0x104fbf050>
    // <conv.chunks.Comment object at 0x104fbf1a0>
    // <conv.chunks.Comment object at 0x104fbf2c0>
    // <conv.chunks.Comment object at 0x104fbf410>
    dec(Misc_State, x);
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x104fbf5c0>
    clc();
    adc(0x2);
    sta(Misc_X_Position, x);
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(Misc_PageLoc, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x104fbf7a0>
    // <conv.chunks.Comment object at 0x104fbf830>
    // <conv.chunks.Comment object at 0x104fbfa10>
    // <conv.chunks.Comment object at 0x104fbfb60>
    // <conv.chunks.Comment object at 0x104fbfbf0>
    // <conv.chunks.Comment object at 0x104fbfdd0>
    sec();
    sbc(0xa);
    sta(Misc_Y_Position, x);
    // <conv.chunks.Comment object at 0x104fbffb0>
    // <conv.chunks.Comment object at 0x104fc4080>
    lda(0x1);
    sta(Misc_Y_HighPos, x);
    BNE(RunHSubs);
    JMP(RunAllH);
}

int RunAllH() {
    // <conv.chunks.Comment object at 0x104fc42c0>
    // <conv.chunks.Comment object at 0x104fc44a0>
    // <conv.chunks.Comment object at 0x104fc45c0>
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}

int RunHSubs() {
    // <conv.chunks.Comment object at 0x104fc4740>
    JSR(GetMiscOffscreenBits);
    JSR(RelativeMiscPosition);
    JSR(GetMiscBoundBox);
    JSR(DrawHammer);
    rts();
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
    // <conv.chunks.Comment object at 0x104fc5a30>
    // <conv.chunks.Comment object at 0x104fc5b50>
    // <conv.chunks.Comment object at 0x104fc5ca0>
    // <conv.chunks.Comment object at 0x104fc5e20>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x104fc5fd0>
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
    // <conv.chunks.Comment object at 0x104fc6840>
    lda(0x1);
    sta(Misc_Y_HighPos, y);
    sta(Misc_State, y);
    sta(Square2SoundQueue);
    stx(ObjectOffset);
    JSR(GiveOneCoin);
    inc(CoinTallyFor1Ups);
    // <conv.chunks.Comment object at 0x104fc6a80>
    // <conv.chunks.Comment object at 0x104fc6c60>
    // <conv.chunks.Comment object at 0x104fc6db0>
    // <conv.chunks.Comment object at 0x104fc6ed0>
    // <conv.chunks.Comment object at 0x104fc6ff0>
    // <conv.chunks.Comment object at 0x104fc7110>
    rts();
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(0x8);
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // <conv.chunks.Comment object at 0x104fc72f0>
    // <conv.chunks.Comment object at 0x104fc7380>
    lda(Misc_State, y);
    BEQ(UseMiscS);
    dey();
    cpy(0x5);
    BNE(FMiscLoop);
    ldy(0x8);
    JMP(UseMiscS);
}

int UseMiscS() {
    // <conv.chunks.Comment object at 0x104fc7590>
    // <conv.chunks.Comment object at 0x104fc76e0>
    // <conv.chunks.Comment object at 0x104fc7770>
    // <conv.chunks.Comment object at 0x104fc7800>
    // <conv.chunks.Comment object at 0x104fc79b0>
    // <conv.chunks.Comment object at 0x104fc7a40>
    sty(JumpCoinMiscOffset);
    rts();
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(0x8);
    JMP(MiscLoop);
}

int MiscLoop() {
    // <conv.chunks.Comment object at 0x104fc7d10>
    // <conv.chunks.Comment object at 0x104fc7da0>
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
    // <conv.chunks.Comment object at 0x104fc7f80>
    // <conv.chunks.Comment object at 0x104fd4110>
    // <conv.chunks.Comment object at 0x104fd4260>
    // <conv.chunks.Comment object at 0x104fd42f0>
    // <conv.chunks.Comment object at 0x104fd4410>
    // <conv.chunks.Comment object at 0x104fd4530>
    // <conv.chunks.Comment object at 0x104fd4680>
    // <conv.chunks.Comment object at 0x104fd46e0>
    // <conv.chunks.Comment object at 0x104fd4740>
    // <conv.chunks.Comment object at 0x104fd48c0>
    // <conv.chunks.Comment object at 0x104fd4950>
    // <conv.chunks.Comment object at 0x104fd4a70>
    // <conv.chunks.Comment object at 0x104fd4bc0>
    // <conv.chunks.Comment object at 0x104fd4d40>
    // <conv.chunks.Comment object at 0x104fd4dd0>
    // <conv.chunks.Comment object at 0x104fd4ef0>
    // <conv.chunks.Comment object at 0x104fd5040>
    // <conv.chunks.Comment object at 0x104fd5190>
    // <conv.chunks.Comment object at 0x104fd5220>
    lda(Misc_State, x);
    cmp(0x30);
    BNE(RunJCSubs);
    // <conv.chunks.Comment object at 0x104fd5520>
    // <conv.chunks.Comment object at 0x104fd55b0>
    lda(0x0);
    sta(Misc_State, x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x104fd5bb0>
    adc(0xd);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x104fd5dc0>
    sta(0x0);
    lda(0x6);
    // <conv.chunks.Comment object at 0x104fd5e50>
    sta(0x2);
    lsr();
    sta(0x1);
    lda(0x0);
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    lda(Misc_Y_Speed, x);
    // <conv.chunks.Comment object at 0x104fd6180>
    // <conv.chunks.Comment object at 0x104fd62d0>
    // <conv.chunks.Comment object at 0x104fd6360>
    // <conv.chunks.Comment object at 0x104fd6450>
    // <conv.chunks.Comment object at 0x104fd6600>
    // <conv.chunks.Comment object at 0x104fd6720>
    cmp(0x5);
    BNE(RunJCSubs);
    inc(Misc_State, x);
    JMP(RunJCSubs);
}

int RunJCSubs() {
    // <conv.chunks.Comment object at 0x104fd68d0>
    // <conv.chunks.Comment object at 0x104fd6a80>
    // <conv.chunks.Comment object at 0x104fd6bd0>
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
    sta(((DigitModifier) + (5)));
    ldx(CurrentPlayer);
    ldy(offsetof(G, CoinTallyOffsets), x);
    JSR(DigitsMathRoutine);
    inc(CoinTally);
    // <conv.chunks.Comment object at 0x104fd7590>
    // <conv.chunks.Comment object at 0x104fd7830>
    // <conv.chunks.Comment object at 0x104fd7aa0>
    // <conv.chunks.Comment object at 0x104fd7bc0>
    // <conv.chunks.Comment object at 0x104fd7d10>
    // <conv.chunks.Comment object at 0x104fd7e30>
    lda(CoinTally);
    cmp(100);
    BNE(CoinPoints);
    // <conv.chunks.Comment object at 0x104fdc080>
    // <conv.chunks.Comment object at 0x104fdc110>
    lda(0x0);
    sta(CoinTally);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x104fdc320>
    // <conv.chunks.Comment object at 0x104fdc4d0>
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
    // <conv.chunks.Comment object at 0x104fdd1c0>
    ldy(VRAM_Buffer1_Offset);
    lda(((VRAM_Buffer1) - (6)), y);
    BNE(NoZSup);
    // <conv.chunks.Comment object at 0x104fdd3d0>
    // <conv.chunks.Comment object at 0x104fdd5e0>
    lda(0x24);
    sta(((VRAM_Buffer1) - (6)), y);
    JMP(NoZSup);
}

int NoZSup() {
    // <conv.chunks.Comment object at 0x104fdda00>
    ldx(ObjectOffset);
    rts();
    JMP(SetupPowerUp);
}

int SetupPowerUp() {
    lda(PowerUpObject);
    sta(((Enemy_ID) + (5)));
    lda(Block_PageLoc, x);
    sta(((Enemy_PageLoc) + (5)));
    lda(Block_X_Position, x);
    sta(((Enemy_X_Position) + (5)));
    // <conv.chunks.Comment object at 0x104fddc70>
    // <conv.chunks.Comment object at 0x104fddd90>
    // <conv.chunks.Comment object at 0x104fddf70>
    // <conv.chunks.Comment object at 0x104fde0c0>
    // <conv.chunks.Comment object at 0x104fde2a0>
    // <conv.chunks.Comment object at 0x104fde3f0>
    lda(0x1);
    sta(((Enemy_Y_HighPos) + (5)));
    lda(Block_Y_Position, x);
    // <conv.chunks.Comment object at 0x104fde630>
    // <conv.chunks.Comment object at 0x104fde8a0>
    sec();
    sbc(0x8);
    sta(((Enemy_Y_Position) + (5)));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // <conv.chunks.Comment object at 0x104fdea80>
    // <conv.chunks.Comment object at 0x104fdeb10>
    // <conv.chunks.Comment object at 0x104fded80>
    lda(0x1);
    sta(((Enemy_State) + (5)));
    sta(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x104fdee40>
    // <conv.chunks.Comment object at 0x104fdf0b0>
    lda(0x3);
    sta(((Enemy_BoundBoxCtrl) + (5)));
    // <conv.chunks.Comment object at 0x104fdf2f0>
    lda(PowerUpType);
    cmp(0x2);
    BCS(PutBehind);
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x104fdf650>
    // <conv.chunks.Comment object at 0x104fdf6e0>
    // <conv.chunks.Comment object at 0x104fdf890>
    cmp(0x2);
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // <conv.chunks.Comment object at 0x104fdfa10>
    // <conv.chunks.Comment object at 0x104fdfc20>
    // <conv.chunks.Comment object at 0x104fdfcb0>
    sta(PowerUpType);
    JMP(PutBehind);
}

int PutBehind() {
    lda(0b100000);
    sta(((Enemy_SprAttrib) + (5)));
    // <conv.chunks.Comment object at 0x104fdff50>
    lda(Sfx_GrowPowerUp);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x104fe4260>
    rts();
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x104fe4470>
    stx(ObjectOffset);
    lda(((Enemy_State) + (5)));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda(TimerControl);
    BNE(RunPUSubs);
    lda(PowerUpType);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x104fe4680>
    // <conv.chunks.Comment object at 0x104fe4860>
    // <conv.chunks.Comment object at 0x104fe49e0>
    // <conv.chunks.Comment object at 0x104fe4a70>
    // <conv.chunks.Comment object at 0x104fe4b90>
    // <conv.chunks.Comment object at 0x104fe4cb0>
    // <conv.chunks.Comment object at 0x104fe4dd0>
    // <conv.chunks.Comment object at 0x104fe4ef0>
    cmp(0x3);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x104fe50a0>
    cmp(0x2);
    BNE(RunPUSubs);
    JSR(MoveJumpingEnemy);
    JSR(EnemyJump);
    JMP(RunPUSubs);
    JMP(ShroomM);
}

int ShroomM() {
    // <conv.chunks.Comment object at 0x104fe52e0>
    // <conv.chunks.Comment object at 0x104fe5490>
    // <conv.chunks.Comment object at 0x104fe55b0>
    // <conv.chunks.Comment object at 0x104fe56d0>
    // <conv.chunks.Comment object at 0x104fe57f0>
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
    // <conv.chunks.Comment object at 0x104fe5be0>
    // <conv.chunks.Comment object at 0x104fe5d00>
    // <conv.chunks.Comment object at 0x104fe5d90>
    // <conv.chunks.Comment object at 0x104fe5f40>
    // <conv.chunks.Comment object at 0x104fe6120>
    // <conv.chunks.Comment object at 0x104fe6300>
    // <conv.chunks.Comment object at 0x104fe64e0>
    // <conv.chunks.Comment object at 0x104fe6570>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x104fe6780>
    lda(0b10000000);
    sta(((Enemy_State) + (5)));
    asl();
    sta(((Enemy_SprAttrib) + (5)));
    rol();
    sta(Enemy_MovingDir, x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // <conv.chunks.Comment object at 0x104fe6a50>
    // <conv.chunks.Comment object at 0x104fe6c60>
    // <conv.chunks.Comment object at 0x104fe6cf0>
    // <conv.chunks.Comment object at 0x104fe6f00>
    // <conv.chunks.Comment object at 0x104fe6f90>
    // <conv.chunks.Comment object at 0x104fe70e0>
    lda(((Enemy_State) + (5)));
    cmp(0x6);
    BCC(ExitPUp);
    JMP(RunPUSubs);
}

int RunPUSubs() {
    // <conv.chunks.Comment object at 0x104fe72f0>
    // <conv.chunks.Comment object at 0x104fe7380>
    // <conv.chunks.Comment object at 0x104fe7560>
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    JSR(GetEnemyBoundBox);
    JSR(DrawPowerUp);
    JSR(PlayerEnemyCollision);
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}

int ExitPUp() {
    // <conv.chunks.Comment object at 0x104fe76b0>
    // <conv.chunks.Comment object at 0x104fe77d0>
    // <conv.chunks.Comment object at 0x104fe78f0>
    // <conv.chunks.Comment object at 0x104fe7a10>
    // <conv.chunks.Comment object at 0x104fe7b30>
    // <conv.chunks.Comment object at 0x104fe7c50>
    rts();
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
    // <conv.chunks.Comment object at 0x104fe7ec0>
    // <conv.chunks.Comment object at 0x104ff0110>
    // <conv.chunks.Comment object at 0x104ff01a0>
    // <conv.chunks.Comment object at 0x104ff0350>
    // <conv.chunks.Comment object at 0x104ff0470>
    // <conv.chunks.Comment object at 0x104ff0590>
    // <conv.chunks.Comment object at 0x104ff0620>
    sta(Block_State, x);
    JSR(DestroyBlockMetatile);
    ldx(SprDataOffset_Ctrl);
    lda(0x2);
    sta(Block_Orig_YPos, x);
    // <conv.chunks.Comment object at 0x104ff0830>
    // <conv.chunks.Comment object at 0x104ff0950>
    // <conv.chunks.Comment object at 0x104ff0aa0>
    // <conv.chunks.Comment object at 0x104ff0b30>
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
    // <conv.chunks.Comment object at 0x104ff0da0>
    // <conv.chunks.Comment object at 0x104ff0e30>
    // <conv.chunks.Comment object at 0x104ff0fe0>
    // <conv.chunks.Comment object at 0x104ff1040>
    // <conv.chunks.Comment object at 0x104ff12b0>
    // <conv.chunks.Comment object at 0x104ff1340>
    // <conv.chunks.Comment object at 0x104ff14c0>
    // <conv.chunks.Comment object at 0x104ff1610>
    // <conv.chunks.Comment object at 0x104ff16a0>
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
    // <conv.chunks.Comment object at 0x104ff17f0>
    // <conv.chunks.Comment object at 0x104ff1880>
    // <conv.chunks.Comment object at 0x104ff1a60>
    // <conv.chunks.Comment object at 0x104ff1bb0>
    // <conv.chunks.Comment object at 0x104ff1c40>
    // <conv.chunks.Comment object at 0x104ff1d30>
    // <conv.chunks.Comment object at 0x104ff1ee0>
    // <conv.chunks.Comment object at 0x104ff1f70>
    // <conv.chunks.Comment object at 0x104ff2120>
    lda(BrickCoinTimerFlag);
    BNE(ContBTmr);
    // <conv.chunks.Comment object at 0x104ff2270>
    lda(0xb);
    sta(BrickCoinTimer);
    inc(BrickCoinTimerFlag);
    JMP(ContBTmr);
}

int ContBTmr() {
    // <conv.chunks.Comment object at 0x104ff23f0>
    // <conv.chunks.Comment object at 0x104ff25a0>
    // <conv.chunks.Comment object at 0x104ff26c0>
    lda(BrickCoinTimer);
    BNE(PutOldMT);
    ldy(0xc4);
    JMP(PutOldMT);
}

int PutOldMT() {
    // <conv.chunks.Comment object at 0x104ff2810>
    // <conv.chunks.Comment object at 0x104ff2930>
    // <conv.chunks.Comment object at 0x104ff29c0>
    tya();
    JMP(PutMTileB);
}

int PutMTileB() {
    // <conv.chunks.Comment object at 0x104ff2b40>
    sta(Block_Metatile, x);
    JSR(InitBlock_XY_Pos);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x104ff2cc0>
    // <conv.chunks.Comment object at 0x104ff2e10>
    lda(0x23);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x104ff2f60>
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
    // <conv.chunks.Comment object at 0x104ff31d0>
    // <conv.chunks.Comment object at 0x104ff33b0>
    // <conv.chunks.Comment object at 0x104ff3470>
    // <conv.chunks.Comment object at 0x104ff3500>
    // <conv.chunks.Comment object at 0x104ff35f0>
    // <conv.chunks.Comment object at 0x104ff37a0>
    // <conv.chunks.Comment object at 0x104ff38f0>
    // <conv.chunks.Comment object at 0x104ff3a10>
    // <conv.chunks.Comment object at 0x104ff3b60>
    iny();
    JMP(BigBP);
}

int BigBP() {
    // <conv.chunks.Comment object at 0x104ff3c80>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, BlockYPosAdderData), y);
    anda(0xf0);
    sta(Block_Y_Position, x);
    ldy(Block_State, x);
    // <conv.chunks.Comment object at 0x104ff3e90>
    // <conv.chunks.Comment object at 0x104ff3fe0>
    // <conv.chunks.Comment object at 0x104ffc0b0>
    // <conv.chunks.Comment object at 0x104ffc290>
    cpy(0x11);
    BEQ(Unbreak);
    JSR(BrickShatter);
    JMP(InvOBit);
    JMP(Unbreak);
}

int Unbreak() {
    // <conv.chunks.Comment object at 0x104ffc440>
    // <conv.chunks.Comment object at 0x104ffc620>
    // <conv.chunks.Comment object at 0x104ffc740>
    // <conv.chunks.Comment object at 0x104ffc890>
    JSR(BumpBlock);
    JMP(InvOBit);
}

int InvOBit() {
    // <conv.chunks.Comment object at 0x104ffca10>
    lda(SprDataOffset_Ctrl);
    eor(0x1);
    // <conv.chunks.Comment object at 0x104ffcb90>
    sta(SprDataOffset_Ctrl);
    rts();
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x104ffcef0>
    clc();
    adc(0x8);
    anda(0xf0);
    sta(Block_X_Position, x);
    // <conv.chunks.Comment object at 0x104ffd0a0>
    // <conv.chunks.Comment object at 0x104ffd130>
    // <conv.chunks.Comment object at 0x104ffd250>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Block_PageLoc, x);
    sta(Block_PageLoc2, x);
    // <conv.chunks.Comment object at 0x104ffd520>
    // <conv.chunks.Comment object at 0x104ffd5b0>
    // <conv.chunks.Comment object at 0x104ffd790>
    lda(Player_Y_HighPos);
    sta(Block_Y_HighPos, x);
    rts();
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x104ffdc40>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x104ffde50>
    lda(0x0);
    sta(Block_X_Speed, x);
    sta(Block_Y_MoveForce, x);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x104ffdfd0>
    // <conv.chunks.Comment object at 0x104ffe1b0>
    // <conv.chunks.Comment object at 0x104ffe300>
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
    // <conv.chunks.Comment object at 0x104ffe480>
    // <conv.chunks.Comment object at 0x104ffe690>
    // <conv.chunks.Comment object at 0x104ffe720>
    // <conv.chunks.Comment object at 0x104ffe8a0>
    // <conv.chunks.Comment object at 0x104ffe9f0>
    // <conv.chunks.Comment object at 0x104ffea80>
    // <conv.chunks.Comment object at 0x104ffeb10>
    // <conv.chunks.Comment object at 0x104ffecc0>
    // <conv.chunks.Comment object at 0x104ffed50>
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
    // <conv.chunks.Comment object at 0x104fff860>
    // <conv.chunks.Comment object at 0x104fffa10>
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
    rts();
    JMP(BlockBumpedChk);
}

int BlockBumpedChk() {
    ldy(0xd);
    JMP(BumpChkLoop);
}

int BumpChkLoop() {
    // <conv.chunks.Comment object at 0x10500c4d0>
    // <conv.chunks.Comment object at 0x10500c530>
    cmp(offsetof(G, BrickQBlockMetatiles), y);
    BEQ(MatchBump);
    dey();
    BPL(BumpChkLoop);
    clc();
    JMP(MatchBump);
}

int MatchBump() {
    // <conv.chunks.Comment object at 0x10500ccb0>
    // <conv.chunks.Comment object at 0x10500ce00>
    // <conv.chunks.Comment object at 0x10500ce90>
    // <conv.chunks.Comment object at 0x10500cfe0>
    // <conv.chunks.Comment object at 0x10500d070>
    rts();
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x10500d1c0>
    lda(Sfx_BrickShatter);
    sta(Block_RepFlag, x);
    sta(NoiseSoundQueue);
    JSR(SpawnBrickChunks);
    // <conv.chunks.Comment object at 0x10500d3d0>
    // <conv.chunks.Comment object at 0x10500d520>
    // <conv.chunks.Comment object at 0x10500d640>
    lda(0xfe);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x10500d7c0>
    lda(0x5);
    sta(((DigitModifier) + (5)));
    JSR(AddToScore);
    ldx(SprDataOffset_Ctrl);
    // <conv.chunks.Comment object at 0x10500d9d0>
    // <conv.chunks.Comment object at 0x10500dc40>
    // <conv.chunks.Comment object at 0x10500dd60>
    rts();
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx(SprDataOffset_Ctrl);
    ldy(0x2);
    BEQ(TopEx);
    tya();
    // <conv.chunks.Comment object at 0x10500df70>
    // <conv.chunks.Comment object at 0x10500e0c0>
    // <conv.chunks.Comment object at 0x10500e150>
    // <conv.chunks.Comment object at 0x10500e330>
    sec();
    sbc(0x10);
    sta(0x2);
    // <conv.chunks.Comment object at 0x10500e450>
    // <conv.chunks.Comment object at 0x10500e5a0>
    tay();
    lda((0x6), y);
    cmp(0xc2);
    BNE(TopEx);
    // <conv.chunks.Comment object at 0x10500e720>
    // <conv.chunks.Comment object at 0x10500e780>
    // <conv.chunks.Comment object at 0x10500e930>
    lda(0x0);
    sta((0x6), y);
    JSR(RemoveCoin_Axe);
    ldx(SprDataOffset_Ctrl);
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // <conv.chunks.Comment object at 0x10500eb70>
    // <conv.chunks.Comment object at 0x10500ec60>
    // <conv.chunks.Comment object at 0x10500eea0>
    // <conv.chunks.Comment object at 0x10500efc0>
    // <conv.chunks.Comment object at 0x10500f110>
    rts();
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda(Block_X_Position, x);
    sta(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x10500f290>
    // <conv.chunks.Comment object at 0x10500f3e0>
    lda(0xf0);
    sta(Block_X_Speed, x);
    // <conv.chunks.Comment object at 0x10500f590>
    sta(((Block_X_Speed) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10500f9b0>
    lda(0xfc);
    sta(((Block_Y_Speed) + (2)), x);
    // <conv.chunks.Comment object at 0x10500fbf0>
    lda(0x0);
    sta(Block_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x10500fef0>
    sta(((Block_Y_MoveForce) + (2)), x);
    lda(Block_PageLoc, x);
    sta(((Block_PageLoc) + (2)), x);
    // <conv.chunks.Comment object at 0x10501c410>
    lda(Block_X_Position, x);
    sta(((Block_X_Position) + (2)), x);
    // <conv.chunks.Comment object at 0x10501c740>
    lda(Block_Y_Position, x);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x10501caa0>
    // <conv.chunks.Comment object at 0x10501cb30>
    sta(((Block_Y_Position) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10501ce90>
    rts();
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda(Block_State, x);
    BEQ(UpdSte);
    anda(0xf);
    pha();
    tay();
    // <conv.chunks.Comment object at 0x10501d160>
    // <conv.chunks.Comment object at 0x10501d2b0>
    // <conv.chunks.Comment object at 0x10501d400>
    // <conv.chunks.Comment object at 0x10501d550>
    // <conv.chunks.Comment object at 0x10501d610>
    txa();
    clc();
    adc(0x9);
    tax();
    dey();
    BEQ(BouncingBlockHandler);
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    // <conv.chunks.Comment object at 0x10501d7c0>
    // <conv.chunks.Comment object at 0x10501d910>
    // <conv.chunks.Comment object at 0x10501d9d0>
    // <conv.chunks.Comment object at 0x10501da60>
    // <conv.chunks.Comment object at 0x10501db80>
    // <conv.chunks.Comment object at 0x10501dca0>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x10501de80>
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
    // <conv.chunks.Comment object at 0x10501e090>
    // <conv.chunks.Comment object at 0x10501e1b0>
    // <conv.chunks.Comment object at 0x10501e2d0>
    // <conv.chunks.Comment object at 0x10501e3f0>
    // <conv.chunks.Comment object at 0x10501e510>
    // <conv.chunks.Comment object at 0x10501e630>
    // <conv.chunks.Comment object at 0x10501e780>
    // <conv.chunks.Comment object at 0x10501e810>
    // <conv.chunks.Comment object at 0x10501e960>
    // <conv.chunks.Comment object at 0x10501eae0>
    lda(0xf0);
    cmp(((Block_Y_Position) + (2)), x);
    BCS(ChkTop);
    sta(((Block_Y_Position) + (2)), x);
    JMP(ChkTop);
}

int ChkTop() {
    // <conv.chunks.Comment object at 0x10501ebd0>
    // <conv.chunks.Comment object at 0x10501ee70>
    // <conv.chunks.Comment object at 0x10501efc0>
    // <conv.chunks.Comment object at 0x10501f1d0>
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
    // <conv.chunks.Comment object at 0x10501f800>
    // <conv.chunks.Comment object at 0x10501f920>
    // <conv.chunks.Comment object at 0x10501fa40>
    // <conv.chunks.Comment object at 0x10501fb60>
    // <conv.chunks.Comment object at 0x10501fc80>
    // <conv.chunks.Comment object at 0x10501fda0>
    // <conv.chunks.Comment object at 0x10501fef0>
    // <conv.chunks.Comment object at 0x10501ff80>
    // <conv.chunks.Comment object at 0x1050241a0>
    // <conv.chunks.Comment object at 0x105024230>
    lda(0x1);
    sta(Block_RepFlag, x);
    JMP(KillBlock);
}

int KillBlock() {
    // <conv.chunks.Comment object at 0x1050243e0>
    // <conv.chunks.Comment object at 0x1050245c0>
    lda(0x0);
    JMP(UpdSte);
}

int UpdSte() {
    // <conv.chunks.Comment object at 0x105024680>
    sta(Block_State, x);
    rts();
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(0x1);
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // <conv.chunks.Comment object at 0x105024a10>
    // <conv.chunks.Comment object at 0x105024aa0>
    stx(ObjectOffset);
    lda(VRAM_Buffer1);
    BNE(NextBUpd);
    lda(Block_RepFlag, x);
    BEQ(NextBUpd);
    lda(Block_BBuf_Low, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x105024c80>
    // <conv.chunks.Comment object at 0x105024da0>
    // <conv.chunks.Comment object at 0x105024ec0>
    // <conv.chunks.Comment object at 0x105025010>
    // <conv.chunks.Comment object at 0x105025130>
    // <conv.chunks.Comment object at 0x1050252b0>
    lda(0x5);
    sta(0x7);
    lda(Block_Orig_YPos, x);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1050254c0>
    // <conv.chunks.Comment object at 0x105025550>
    // <conv.chunks.Comment object at 0x105025730>
    tay();
    lda(Block_Metatile, x);
    sta((0x6), y);
    JSR(ReplaceBlockMetatile);
    // <conv.chunks.Comment object at 0x1050258b0>
    // <conv.chunks.Comment object at 0x105025a00>
    // <conv.chunks.Comment object at 0x105025a60>
    lda(0x0);
    sta(Block_RepFlag, x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // <conv.chunks.Comment object at 0x105025d00>
    // <conv.chunks.Comment object at 0x105025ee0>
    dex();
    BPL(UpdateLoop);
    rts();
    JMP(MoveEnemyHorizontally);
}

int MoveEnemyHorizontally() {
    inx();
    JSR(MoveObjectHorizontally);
    ldx(ObjectOffset);
    rts();
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
    // <conv.chunks.Comment object at 0x1050269f0>
    // <conv.chunks.Comment object at 0x105026b70>
    // <conv.chunks.Comment object at 0x105026c30>
    asl();
    asl();
    sta(0x1);
    lda(SprObject_X_Speed, x);
    lsr();
    // <conv.chunks.Comment object at 0x105026e10>
    // <conv.chunks.Comment object at 0x105026ea0>
    // <conv.chunks.Comment object at 0x105027080>
    lsr();
    lsr();
    lsr();
    cmp(0x8);
    // <conv.chunks.Comment object at 0x1050272c0>
    BCC(SaveXSpd);
    ora(0b11110000);
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // <conv.chunks.Comment object at 0x1050274d0>
    // <conv.chunks.Comment object at 0x1050275f0>
    sta(0x0);
    ldy(0x0);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x1050276e0>
    // <conv.chunks.Comment object at 0x1050277d0>
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // <conv.chunks.Comment object at 0x105027aa0>
    // <conv.chunks.Comment object at 0x105027b30>
    sty(0x2);
    lda(SprObject_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x105027c20>
    clc();
    adc(0x1);
    sta(SprObject_X_MoveForce, x);
    lda(0x0);
    rol();
    pha();
    ror();
    // <conv.chunks.Comment object at 0x105027e90>
    // <conv.chunks.Comment object at 0x105027f20>
    // <conv.chunks.Comment object at 0x10502c140>
    // <conv.chunks.Comment object at 0x10502c290>
    // <conv.chunks.Comment object at 0x10502c350>
    // <conv.chunks.Comment object at 0x10502c410>
    lda(SprObject_X_Position, x);
    adc(0x0);
    sta(SprObject_X_Position, x);
    // <conv.chunks.Comment object at 0x10502c5f0>
    // <conv.chunks.Comment object at 0x10502c680>
    lda(SprObject_PageLoc, x);
    adc(0x2);
    sta(SprObject_PageLoc, x);
    // <conv.chunks.Comment object at 0x10502c980>
    // <conv.chunks.Comment object at 0x10502ca10>
    pla();
    clc();
    adc(0x0);
    JMP(ExXMove);
}

int ExXMove() {
    // <conv.chunks.Comment object at 0x10502cc80>
    // <conv.chunks.Comment object at 0x10502cd40>
    // <conv.chunks.Comment object at 0x10502cdd0>
    rts();
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x10502cf80>
    // <conv.chunks.Comment object at 0x10502cfe0>
    // <conv.chunks.Comment object at 0x10502d040>
    lda(TimerControl);
    BNE(NoJSChk);
    lda(JumpspringAnimCtrl);
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // <conv.chunks.Comment object at 0x10502d250>
    // <conv.chunks.Comment object at 0x10502d3a0>
    // <conv.chunks.Comment object at 0x10502d4c0>
    // <conv.chunks.Comment object at 0x10502d610>
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
    // <conv.chunks.Comment object at 0x10502e000>
    // <conv.chunks.Comment object at 0x10502e090>
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
    // <conv.chunks.Comment object at 0x10502e6c0>
    lda(0x3);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10502e870>
    lda(0x6);
    sta(0x1);
    // <conv.chunks.Comment object at 0x10502ea80>
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
    // <conv.chunks.Comment object at 0x10502f230>
    // <conv.chunks.Comment object at 0x10502f2c0>
    lda(0x2);
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(0x1c);
    JMP(SetHiMax);
}

int SetHiMax() {
    // <conv.chunks.Comment object at 0x10502f620>
    // <conv.chunks.Comment object at 0x10502f6b0>
    lda(0x3);
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // <conv.chunks.Comment object at 0x10502f800>
    sty(0x0);
    inx();
    JSR(ImposeGravitySprObj);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10502f8c0>
    // <conv.chunks.Comment object at 0x10502faa0>
    // <conv.chunks.Comment object at 0x10502fbc0>
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
    // <conv.chunks.Comment object at 0x10503c140>
    // <conv.chunks.Comment object at 0x10503c200>
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
    // <conv.chunks.Comment object at 0x10503cb90>
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
    // <conv.chunks.Comment object at 0x10503cda0>
    // <conv.chunks.Comment object at 0x10503cf20>
    // <conv.chunks.Comment object at 0x10503cfb0>
    // <conv.chunks.Comment object at 0x10503d040>
    // <conv.chunks.Comment object at 0x10503d160>
    // <conv.chunks.Comment object at 0x10503d310>
    // <conv.chunks.Comment object at 0x10503d3a0>
    sta(0x0);
    lda(0xa);
    // <conv.chunks.Comment object at 0x10503d520>
    sta(0x1);
    lda(0x3);
    // <conv.chunks.Comment object at 0x10503d610>
    sta(0x2);
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10503db50>
    // <conv.chunks.Comment object at 0x10503dc70>
    rts();
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // <conv.chunks.Comment object at 0x10503de50>
    // <conv.chunks.Comment object at 0x10503deb0>
    // <conv.chunks.Comment object at 0x10503df40>
    lda(SprObject_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x10503e120>
    adc(SprObject_Y_MoveForce, x);
    sta(SprObject_YMF_Dummy, x);
    ldy(0x0);
    lda(SprObject_Y_Speed, x);
    BPL(AlterYP);
    dey();
    JMP(AlterYP);
}

int AlterYP() {
    // <conv.chunks.Comment object at 0x10503e3f0>
    // <conv.chunks.Comment object at 0x10503e480>
    // <conv.chunks.Comment object at 0x10503e660>
    // <conv.chunks.Comment object at 0x10503e7e0>
    // <conv.chunks.Comment object at 0x10503e870>
    sty(0x7);
    adc(SprObject_Y_Position, x);
    sta(SprObject_Y_Position, x);
    // <conv.chunks.Comment object at 0x10503e990>
    // <conv.chunks.Comment object at 0x10503eb40>
    lda(SprObject_Y_HighPos, x);
    adc(0x7);
    sta(SprObject_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x10503ede0>
    // <conv.chunks.Comment object at 0x10503ee70>
    lda(SprObject_Y_MoveForce, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x10503f200>
    sta(SprObject_Y_MoveForce, x);
    lda(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10503f410>
    adc(0x0);
    sta(SprObject_Y_Speed, x);
    cmp(0x2);
    BMI(ChkUpM);
    // <conv.chunks.Comment object at 0x10503f7a0>
    // <conv.chunks.Comment object at 0x10503f830>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    // <conv.chunks.Comment object at 0x10503fb00>
    BCC(ChkUpM);
    lda(0x2);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10503fd40>
    lda(0x0);
    sta(SprObject_Y_MoveForce, x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // <conv.chunks.Comment object at 0x10503ffe0>
    // <conv.chunks.Comment object at 0x105684200>
    pla();
    BEQ(ExVMove);
    // <conv.chunks.Comment object at 0x105684320>
    lda(0x2);
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x105684470>
    tay();
    iny();
    sty(0x7);
    // <conv.chunks.Comment object at 0x1056847d0>
    lda(SprObject_Y_MoveForce, x);
    sec();
    sbc(0x1);
    sta(SprObject_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x105684a10>
    // <conv.chunks.Comment object at 0x105684ad0>
    // <conv.chunks.Comment object at 0x105684b60>
    lda(SprObject_Y_Speed, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x105684e30>
    sta(SprObject_Y_Speed, x);
    cmp(0x7);
    BPL(ExVMove);
    // <conv.chunks.Comment object at 0x1056850a0>
    // <conv.chunks.Comment object at 0x105685130>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    BCS(ExVMove);
    // <conv.chunks.Comment object at 0x105685400>
    // <conv.chunks.Comment object at 0x105685490>
    lda(0x7);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x105685670>
    lda(0xff);
    sta(SprObject_Y_MoveForce, x);
    JMP(ExVMove);
}

int ExVMove() {
    // <conv.chunks.Comment object at 0x105685910>
    // <conv.chunks.Comment object at 0x105685b20>
    rts();
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda(Enemy_Flag, x);
    pha();
    // <conv.chunks.Comment object at 0x105685ca0>
    // <conv.chunks.Comment object at 0x105685e20>
    asl();
    BCS(ChkBowserF);
    pla();
    BEQ(ChkAreaTsk);
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}

int ChkAreaTsk() {
    // <conv.chunks.Comment object at 0x105685f40>
    // <conv.chunks.Comment object at 0x105686090>
    // <conv.chunks.Comment object at 0x105686120>
    // <conv.chunks.Comment object at 0x105686240>
    // <conv.chunks.Comment object at 0x105686360>
    lda(AreaParserTaskNum);
    anda(0x7);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x105686510>
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // <conv.chunks.Comment object at 0x1056867b0>
    // <conv.chunks.Comment object at 0x1056868d0>
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1056869c0>
    tay();
    lda(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x105686b70>
    BNE(ExitELCore);
    sta(Enemy_Flag, x);
    JMP(ExitELCore);
}

int ExitELCore() {
    rts();
    JMP(ExecGameLoopback);
}

int ExecGameLoopback() {
    lda(Player_PageLoc);
    // <conv.chunks.Comment object at 0x105687170>
    sec();
    sbc(0x4);
    sta(Player_PageLoc);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x10568c740>
    sec();
    sbc(0x4);
    sta(CurrentPageLoc);
    lda(ScreenLeft_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x10568cad0>
    // <conv.chunks.Comment object at 0x10568cc20>
    sbc(0x4);
    sta(ScreenLeft_PageLoc);
    lda(ScreenRight_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x10568ce90>
    // <conv.chunks.Comment object at 0x10568cfe0>
    sbc(0x4);
    sta(ScreenRight_PageLoc);
    lda(AreaObjectPageLoc);
    sec();
    // <conv.chunks.Comment object at 0x10568d250>
    // <conv.chunks.Comment object at 0x10568d3a0>
    sbc(0x4);
    sta(AreaObjectPageLoc);
    lda(0x0);
    sta(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x10568d610>
    // <conv.chunks.Comment object at 0x10568d6a0>
    sta(AreaObjectPageSel);
    sta(EnemyDataOffset);
    sta(EnemyObjectPageLoc);
    lda(offsetof(G, AreaDataOfsLoopback), y);
    sta(AreaDataOffset);
    // <conv.chunks.Comment object at 0x10568d940>
    // <conv.chunks.Comment object at 0x10568da60>
    // <conv.chunks.Comment object at 0x10568db80>
    // <conv.chunks.Comment object at 0x10568dcd0>
    rts();
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda(LoopCommand);
    // <conv.chunks.Comment object at 0x10568deb0>
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
    // <conv.chunks.Comment object at 0x10568e4e0>
    // <conv.chunks.Comment object at 0x10568e600>
    // <conv.chunks.Comment object at 0x10568e720>
    BNE(FindLoop);
    lda(CurrentPageLoc);
    cmp(offsetof(G, LoopCmdPageNumber), y);
    // <conv.chunks.Comment object at 0x10568e960>
    // <conv.chunks.Comment object at 0x10568ea80>
    BNE(FindLoop);
    lda(Player_Y_Position);
    cmp(offsetof(G, LoopCmdYPosition), y);
    // <conv.chunks.Comment object at 0x10568ecc0>
    // <conv.chunks.Comment object at 0x10568ede0>
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
    // <conv.chunks.Comment object at 0x10568f020>
    // <conv.chunks.Comment object at 0x10568f140>
    // <conv.chunks.Comment object at 0x10568f1d0>
    // <conv.chunks.Comment object at 0x10568f380>
    // <conv.chunks.Comment object at 0x10568f4a0>
    // <conv.chunks.Comment object at 0x10568f500>
    // <conv.chunks.Comment object at 0x10568f740>
    // <conv.chunks.Comment object at 0x10568f860>
    inc(MultiLoopPassCntr);
    lda(MultiLoopPassCntr);
    // <conv.chunks.Comment object at 0x10568f9b0>
    cmp(0x3);
    BNE(InitLCmd);
    lda(MultiLoopCorrectCntr);
    // <conv.chunks.Comment object at 0x10568fb30>
    // <conv.chunks.Comment object at 0x10568fce0>
    cmp(0x3);
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // <conv.chunks.Comment object at 0x10568fe60>
    // <conv.chunks.Comment object at 0x105698080>
    // <conv.chunks.Comment object at 0x1056981a0>
    lda(WorldNumber);
    cmp(World7);
    // <conv.chunks.Comment object at 0x1056982f0>
    BEQ(IncMLoop);
    JMP(DoLpBack);
}

int DoLpBack() {
    // <conv.chunks.Comment object at 0x105698530>
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}

int InitMLp() {
    // <conv.chunks.Comment object at 0x105698770>
    lda(0x0);
    sta(MultiLoopPassCntr);
    sta(MultiLoopCorrectCntr);
    JMP(InitLCmd);
}

int InitLCmd() {
    // <conv.chunks.Comment object at 0x105698ad0>
    lda(0x0);
    sta(LoopCommand);
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda(EnemyFrenzyQueue);
    BEQ(ProcessEnemyData);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105698d70>
    // <conv.chunks.Comment object at 0x105698e90>
    // <conv.chunks.Comment object at 0x105698fb0>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x105699160>
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1056993a0>
    sta(EnemyFrenzyQueue);
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy(EnemyDataOffset);
    lda((EnemyData), y);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x105699850>
    // <conv.chunks.Comment object at 0x105699970>
    // <conv.chunks.Comment object at 0x105699af0>
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(0b1111);
    // <conv.chunks.Comment object at 0x105699e50>
    cmp(0xe);
    BEQ(CheckRightBounds);
    cpx(0x5);
    BCC(CheckRightBounds);
    // <conv.chunks.Comment object at 0x105699fd0>
    // <conv.chunks.Comment object at 0x10569a180>
    // <conv.chunks.Comment object at 0x10569a210>
    iny();
    lda((EnemyData), y);
    anda(0b111111);
    cmp(0x2e);
    BEQ(CheckRightBounds);
    rts();
    JMP(CheckRightBounds);
}

int CheckRightBounds() {
    lda(ScreenRight_X_Pos);
    // <conv.chunks.Comment object at 0x10569aa20>
    clc();
    adc(0x30);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x10569ac30>
    sta(0x7);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x10569ade0>
    adc(0x0);
    sta(0x6);
    // <conv.chunks.Comment object at 0x10569b110>
    ldy(EnemyDataOffset);
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10569b380>
    asl();
    BCC(CheckPageCtrlRow);
    lda(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x10569b680>
    BNE(CheckPageCtrlRow);
    inc(EnemyObjectPageSel);
    inc(EnemyObjectPageLoc);
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x10569bb90>
    anda(0xf);
    cmp(0xf);
    BNE(PositionEnemyObj);
    lda(EnemyObjectPageSel);
    BNE(PositionEnemyObj);
    // <conv.chunks.Comment object at 0x10569bd70>
    // <conv.chunks.Comment object at 0x10569be90>
    // <conv.chunks.Comment object at 0x1056a0080>
    // <conv.chunks.Comment object at 0x1056a01a0>
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1056a0350>
    anda(0b111111);
    sta(EnemyObjectPageLoc);
    inc(EnemyDataOffset);
    // <conv.chunks.Comment object at 0x1056a05c0>
    // <conv.chunks.Comment object at 0x1056a06e0>
    inc(EnemyDataOffset);
    inc(EnemyObjectPageSel);
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda(EnemyObjectPageLoc);
    sta(Enemy_PageLoc, x);
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1056a0b60>
    // <conv.chunks.Comment object at 0x1056a0c80>
    // <conv.chunks.Comment object at 0x1056a0dd0>
    anda(0b11110000);
    sta(Enemy_X_Position, x);
    cmp(ScreenRight_X_Pos);
    lda(Enemy_PageLoc, x);
    sbc(ScreenRight_PageLoc);
    BCS(CheckRightExtBounds);
    // <conv.chunks.Comment object at 0x1056a1040>
    // <conv.chunks.Comment object at 0x1056a1190>
    // <conv.chunks.Comment object at 0x1056a12b0>
    // <conv.chunks.Comment object at 0x1056a1400>
    // <conv.chunks.Comment object at 0x1056a1520>
    lda((EnemyData), y);
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x1056a1790>
    // <conv.chunks.Comment object at 0x1056a18b0>
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
    // <conv.chunks.Comment object at 0x1056a1c40>
    // <conv.chunks.Comment object at 0x1056a1cd0>
    // <conv.chunks.Comment object at 0x1056a1eb0>
    // <conv.chunks.Comment object at 0x1056a1f40>
    // <conv.chunks.Comment object at 0x1056a20f0>
    // <conv.chunks.Comment object at 0x1056a2210>
    sta(Enemy_Y_HighPos, x);
    lda((EnemyData), y);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1056a2450>
    // <conv.chunks.Comment object at 0x1056a2600>
    // <conv.chunks.Comment object at 0x1056a26c0>
    asl();
    asl();
    sta(Enemy_Y_Position, x);
    cmp(0xe0);
    BEQ(ParseRow0e);
    // <conv.chunks.Comment object at 0x1056a2990>
    // <conv.chunks.Comment object at 0x1056a2a20>
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
    // <conv.chunks.Comment object at 0x1056a32c0>
    anda(0b111111);
    cmp(0x37);
    // <conv.chunks.Comment object at 0x1056a3530>
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
    // <conv.chunks.Comment object at 0x1056a39e0>
    // <conv.chunks.Comment object at 0x1056a3a40>
    // <conv.chunks.Comment object at 0x1056a3c80>
    // <conv.chunks.Comment object at 0x1056a3da0>
    lda(BuzzyBeetle);
    JMP(StrID);
}

int StrID() {
    // <conv.chunks.Comment object at 0x1056a3fe0>
    sta(Enemy_ID, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1056ac230>
    JSR(InitEnemyObject);
    lda(Enemy_Flag, x);
    BNE(Inc2B);
    // <conv.chunks.Comment object at 0x1056ac500>
    // <conv.chunks.Comment object at 0x1056ac650>
    rts();
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda(EnemyFrenzyBuffer);
    BNE(StrFre);
    lda(VineFlagOffset);
    // <conv.chunks.Comment object at 0x1056ac860>
    // <conv.chunks.Comment object at 0x1056ac980>
    // <conv.chunks.Comment object at 0x1056acad0>
    cmp(0x1);
    BNE(ExEPar);
    lda(VineObject);
    JMP(StrFre);
}

int StrFre() {
    // <conv.chunks.Comment object at 0x1056acc50>
    // <conv.chunks.Comment object at 0x1056ace30>
    // <conv.chunks.Comment object at 0x1056acf50>
    sta(Enemy_ID, x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1056ad130>
    sta(Enemy_State, x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // <conv.chunks.Comment object at 0x1056ad370>
    // <conv.chunks.Comment object at 0x1056ad490>
    rts();
    JMP(DoGroup);
}

int DoGroup() {
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}

int ParseRow0e() {
    iny();
    // <conv.chunks.Comment object at 0x1056ad790>
    iny();
    lda((EnemyData), y);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1056ada30>
    // <conv.chunks.Comment object at 0x1056adaf0>
    lsr();
    lsr();
    lsr();
    cmp(WorldNumber);
    BNE(NotUse);
    dey();
    lda((EnemyData), y);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x1056add30>
    // <conv.chunks.Comment object at 0x1056ade50>
    // <conv.chunks.Comment object at 0x1056adfd0>
    // <conv.chunks.Comment object at 0x1056ae060>
    // <conv.chunks.Comment object at 0x1056ae1e0>
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
    // <conv.chunks.Comment object at 0x1056ae900>
    // <conv.chunks.Comment object at 0x1056aea20>
    // <conv.chunks.Comment object at 0x1056aeba0>
    cmp(0xe);
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // <conv.chunks.Comment object at 0x1056aeed0>
    inc(EnemyDataOffset);
    JMP(Inc2B);
}

int Inc2B() {
    // <conv.chunks.Comment object at 0x1056af050>
    inc(EnemyDataOffset);
    inc(EnemyDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1056af2c0>
    sta(EnemyObjectPageSel);
    ldx(ObjectOffset);
    rts();
    JMP(CheckpointEnemyID);
}

int CheckpointEnemyID() {
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(InitEnemyRoutines);
    tay();
    // <conv.chunks.Comment object at 0x1056af800>
    // <conv.chunks.Comment object at 0x1056af890>
    // <conv.chunks.Comment object at 0x1056afa70>
    lda(Enemy_Y_Position, x);
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1056afc20>
    // <conv.chunks.Comment object at 0x1056afcb0>
    lda(0x1);
    sta(EnemyOffscrBitsMasked, x);
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
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1056ba720>
    // <conv.chunks.Comment object at 0x1056ba7b0>
    sta(Enemy_Y_Position, x);
    lsr();
    sta(EnemyIntervalTimer, x);
    // <conv.chunks.Comment object at 0x1056bab40>
    lsr();
    sta(Enemy_State, x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(0xb8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1056baff0>
    // <conv.chunks.Comment object at 0x1056bb080>
    rts();
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(0x1);
    lda(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x1056bb3b0>
    // <conv.chunks.Comment object at 0x1056bb530>
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // <conv.chunks.Comment object at 0x1056bb830>
    // <conv.chunks.Comment object at 0x1056bb8c0>
    lda(offsetof(G, NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // <conv.chunks.Comment object at 0x1056bba70>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1056bbda0>
    // <conv.chunks.Comment object at 0x1056bbec0>
    sta(Enemy_State, x);
    rts();
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(0x0);
    sta(HammerThrowingTimer, x);
    // <conv.chunks.Comment object at 0x1056c0290>
    // <conv.chunks.Comment object at 0x1056c0410>
    sta(Enemy_X_Speed, x);
    ldy(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x1056c0710>
    lda(offsetof(G, HBroWalkingTimerData), y);
    sta(EnemyIntervalTimer, x);
    lda(0xb);
    // <conv.chunks.Comment object at 0x1056c0950>
    // <conv.chunks.Comment object at 0x1056c0aa0>
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1056c0d40>
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1056c0fe0>
    sta(BlooperMoveSpeed, x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // <conv.chunks.Comment object at 0x1056c1220>
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
    // <conv.chunks.Comment object at 0x1056c1520>
    // <conv.chunks.Comment object at 0x1056c15b0>
    // <conv.chunks.Comment object at 0x1056c1790>
    // <conv.chunks.Comment object at 0x1056c18e0>
    // <conv.chunks.Comment object at 0x1056c1a30>
    // <conv.chunks.Comment object at 0x1056c1ac0>
    tya();
    adc(Enemy_Y_Position, x);
    sta(RedPTroopaCenterYPos, x);
    JMP(TallBBox);
}

int TallBBox() {
    // <conv.chunks.Comment object at 0x1056c1c70>
    // <conv.chunks.Comment object at 0x1056c1dc0>
    // <conv.chunks.Comment object at 0x1056c1f10>
    lda(0x3);
    JMP(SetBBox);
}

int SetBBox() {
    // <conv.chunks.Comment object at 0x1056c1fd0>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1056c2210>
    sta(Enemy_MovingDir, x);
    JMP(InitVStf);
}

int InitVStf() {
    // <conv.chunks.Comment object at 0x1056c2450>
    lda(0x0);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1056c2510>
    sta(Enemy_Y_MoveForce, x);
    rts();
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x1056c2900>
    sta(Enemy_MovingDir, x);
    lda(0x9);
    // <conv.chunks.Comment object at 0x1056c2b40>
    sta(Enemy_BoundBoxCtrl, x);
    rts();
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda(PseudoRandomBitReg, x);
    anda(0b10000);
    sta(CheepCheepMoveMFlag, x);
    // <conv.chunks.Comment object at 0x1056c2e70>
    // <conv.chunks.Comment object at 0x1056c2f90>
    // <conv.chunks.Comment object at 0x1056c30e0>
    // <conv.chunks.Comment object at 0x1056c3200>
    lda(Enemy_Y_Position, x);
    sta(CheepCheepOrigYPos, x);
    // <conv.chunks.Comment object at 0x1056c3470>
    rts();
    JMP(InitLakitu);
}

int InitLakitu() {
    lda(EnemyFrenzyBuffer);
    BNE(KillLakitu);
    JMP(SetupLakitu);
}

int SetupLakitu() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1056c3920>
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
    // <conv.chunks.Comment object at 0x1056c3fe0>
    BNE(ExLSHand);
    cpx(0x5);
    // <conv.chunks.Comment object at 0x1056d0860>
    BCS(ExLSHand);
    lda(0x80);
    // <conv.chunks.Comment object at 0x1056d0a70>
    sta(FrenzyEnemyTimer);
    ldy(0x4);
    JMP(ChkLak);
}

int ChkLak() {
    // <conv.chunks.Comment object at 0x1056d0c80>
    // <conv.chunks.Comment object at 0x1056d0d10>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc(LakituReappearTimer);
    // <conv.chunks.Comment object at 0x1056d0f50>
    // <conv.chunks.Comment object at 0x1056d0fb0>
    // <conv.chunks.Comment object at 0x1056d11f0>
    // <conv.chunks.Comment object at 0x1056d1280>
    // <conv.chunks.Comment object at 0x1056d13d0>
    lda(LakituReappearTimer);
    cmp(0x7);
    BCC(ExLSHand);
    ldx(0x4);
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // <conv.chunks.Comment object at 0x1056d15e0>
    // <conv.chunks.Comment object at 0x1056d1670>
    // <conv.chunks.Comment object at 0x1056d1820>
    // <conv.chunks.Comment object at 0x1056d18b0>
    lda(Enemy_Flag, x);
    BEQ(CreateL);
    dex();
    BPL(ChkNoEn);
    BMI(RetEOfs);
    JMP(CreateL);
}

int CreateL() {
    // <conv.chunks.Comment object at 0x1056d1af0>
    // <conv.chunks.Comment object at 0x1056d1c70>
    // <conv.chunks.Comment object at 0x1056d1d00>
    // <conv.chunks.Comment object at 0x1056d1e50>
    // <conv.chunks.Comment object at 0x1056d1fa0>
    lda(0x0);
    sta(Enemy_State, x);
    lda(Lakitu);
    // <conv.chunks.Comment object at 0x1056d2240>
    sta(Enemy_ID, x);
    JSR(SetupLakitu);
    // <conv.chunks.Comment object at 0x1056d24b0>
    lda(0x20);
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // <conv.chunks.Comment object at 0x1056d2630>
    // <conv.chunks.Comment object at 0x1056d27e0>
    ldx(ObjectOffset);
    JMP(ExLSHand);
}

int ExLSHand() {
    rts();
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1056d2a80>
    cmp(0x2c);
    BCC(ExLSHand);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1056d2d80>
    BNE(ExLSHand);
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1056d2fc0>
    // <conv.chunks.Comment object at 0x1056d3110>
    lda(Enemy_X_Position, y);
    sta(Enemy_X_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1056d34a0>
    sta(Enemy_Y_HighPos, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x1056d36e0>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    lda(PseudoRandomBitReg, x);
    // <conv.chunks.Comment object at 0x1056d3ad0>
    anda(0b11);
    tay();
    ldx(0x2);
    JMP(DifLoop);
}

int DifLoop() {
    // <conv.chunks.Comment object at 0x1056d3e00>
    lda(offsetof(G, PRDiffAdjustData), y);
    sta(0x1, x);
    // <conv.chunks.Comment object at 0x1056dc080>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1056dc290>
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx(ObjectOffset);
    JSR(PlayerLakituDiff);
    ldy(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1056dc470>
    // <conv.chunks.Comment object at 0x1056dc500>
    // <conv.chunks.Comment object at 0x1056dc650>
    // <conv.chunks.Comment object at 0x1056dc770>
    // <conv.chunks.Comment object at 0x1056dc890>
    cpy(0x8);
    BCS(SetSpSpd);
    tay();
    // <conv.chunks.Comment object at 0x1056dca10>
    // <conv.chunks.Comment object at 0x1056dcbf0>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(UsePosv);
    // <conv.chunks.Comment object at 0x1056dce60>
    // <conv.chunks.Comment object at 0x1056dcf80>
    tya();
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x1056dd160>
    tay();
    iny();
    JMP(UsePosv);
}

int UsePosv() {
    // <conv.chunks.Comment object at 0x1056dd3a0>
    tya();
    JMP(SetSpSpd);
}

int SetSpSpd() {
    // <conv.chunks.Comment object at 0x1056dd4c0>
    JSR(SmallBBox);
    ldy(0x2);
    sta(Enemy_X_Speed, x);
    cmp(0x0);
    BMI(SpinyRte);
    // <conv.chunks.Comment object at 0x1056dd670>
    // <conv.chunks.Comment object at 0x1056dd850>
    // <conv.chunks.Comment object at 0x1056dd8e0>
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // <conv.chunks.Comment object at 0x1056ddb20>
    sty(Enemy_MovingDir, x);
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1056ddd00>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1056ddf40>
    lda(0x5);
    sta(Enemy_State, x);
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
    // <conv.chunks.Comment object at 0x1056debd0>
    sta(FirebarSpinState_Low, x);
    lda(Enemy_ID, x);
    sec();
    // <conv.chunks.Comment object at 0x1056dee10>
    // <conv.chunks.Comment object at 0x1056def90>
    sbc(0x1b);
    tay();
    lda(offsetof(G, FirebarSpinSpdData), y);
    // <conv.chunks.Comment object at 0x1056df1a0>
    sta(FirebarSpinSpeed, x);
    lda(offsetof(G, FirebarSpinDirData), y);
    // <conv.chunks.Comment object at 0x1056df410>
    sta(FirebarSpinDirection, x);
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x1056df7d0>
    adc(0x4);
    sta(Enemy_Y_Position, x);
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x1056dfbc0>
    adc(0x4);
    sta(Enemy_X_Position, x);
    lda(Enemy_PageLoc, x);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1056dff80>
    sta(Enemy_PageLoc, x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1056e83e0>
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // <conv.chunks.Comment object at 0x1056e9850>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1056e9b50>
    tay();
    lda(offsetof(G, FlyCCTimerData), y);
    // <conv.chunks.Comment object at 0x1056e9d00>
    sta(FrenzyEnemyTimer);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x1056e9f40>
    lda(SecondaryHardMode);
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // <conv.chunks.Comment object at 0x1056ea150>
    // <conv.chunks.Comment object at 0x1056ea2d0>
    // <conv.chunks.Comment object at 0x1056ea360>
    sty(0x0);
    cpx(0x0);
    BCS(ChpChpEx);
    // <conv.chunks.Comment object at 0x1056ea3c0>
    // <conv.chunks.Comment object at 0x1056ea5a0>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1056ea840>
    // <conv.chunks.Comment object at 0x1056ea990>
    sta(0x1);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x1056eaa20>
    sta(Enemy_Y_Speed, x);
    lda(0x0);
    ldy(Player_X_Speed);
    BEQ(GSeed);
    // <conv.chunks.Comment object at 0x1056eadb0>
    // <conv.chunks.Comment object at 0x1056eae40>
    // <conv.chunks.Comment object at 0x1056eaff0>
    lda(0x4);
    cpy(0x19);
    BCC(GSeed);
    asl();
    JMP(GSeed);
}

int GSeed() {
    // <conv.chunks.Comment object at 0x1056eb1a0>
    // <conv.chunks.Comment object at 0x1056eb2c0>
    // <conv.chunks.Comment object at 0x1056eb4d0>
    // <conv.chunks.Comment object at 0x1056eb560>
    pha();
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1056eb740>
    // <conv.chunks.Comment object at 0x1056eb710>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(RSeed);
    // <conv.chunks.Comment object at 0x1056ebb30>
    // <conv.chunks.Comment object at 0x1056ebc50>
    lda(((PseudoRandomBitReg) + (2)), x);
    anda(0b1111);
    sta(0x0);
    JMP(RSeed);
}

int RSeed() {
    // <conv.chunks.Comment object at 0x1056ebf80>
    // <conv.chunks.Comment object at 0x1056f0110>
    // <conv.chunks.Comment object at 0x1056f01a0>
    pla();
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FlyCCXSpeedData), y);
    // <conv.chunks.Comment object at 0x1056f03e0>
    // <conv.chunks.Comment object at 0x1056f03b0>
    // <conv.chunks.Comment object at 0x1056f0590>
    sta(Enemy_X_Speed, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1056f0800>
    sta(Enemy_MovingDir, x);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1056f0a40>
    BNE(D2XPos1);
    ldy(0x0);
    tya();
    // <conv.chunks.Comment object at 0x1056f0cb0>
    // <conv.chunks.Comment object at 0x1056f0c80>
    anda(0b10);
    BEQ(D2XPos1);
    // <conv.chunks.Comment object at 0x1056f0f50>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1056f11c0>
    // <conv.chunks.Comment object at 0x1056f1310>
    // <conv.chunks.Comment object at 0x1056f13a0>
    sta(Enemy_X_Speed, x);
    inc(Enemy_MovingDir, x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // <conv.chunks.Comment object at 0x1056f15e0>
    // <conv.chunks.Comment object at 0x1056f1730>
    tya();
    anda(0b10);
    BEQ(D2XPos2);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1056f1940>
    // <conv.chunks.Comment object at 0x1056f1a90>
    clc();
    adc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1056f1c40>
    // <conv.chunks.Comment object at 0x1056f1d90>
    // <conv.chunks.Comment object at 0x1056f1ee0>
    // <conv.chunks.Comment object at 0x1056f2000>
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // <conv.chunks.Comment object at 0x1056f2240>
    lda(Player_X_Position);
    sec();
    sbc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(FinCCSt);
}

int FinCCSt() {
    // <conv.chunks.Comment object at 0x1056f2450>
    // <conv.chunks.Comment object at 0x1056f25a0>
    // <conv.chunks.Comment object at 0x1056f26f0>
    // <conv.chunks.Comment object at 0x1056f2810>
    // <conv.chunks.Comment object at 0x1056f28a0>
    sta(Enemy_PageLoc, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1056f2b40>
    // <conv.chunks.Comment object at 0x1056f2d20>
    lda(0xf8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1056f2ed0>
    rts();
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx(BowserFront_Offset);
    // <conv.chunks.Comment object at 0x1056f31a0>
    // <conv.chunks.Comment object at 0x1056f32c0>
    lda(0x0);
    sta(BowserBodyControls);
    sta(BridgeCollapseOffset);
    // <conv.chunks.Comment object at 0x1056f3440>
    // <conv.chunks.Comment object at 0x1056f35f0>
    lda(Enemy_X_Position, x);
    sta(BowserOrigXPos);
    // <conv.chunks.Comment object at 0x1056f3830>
    lda(0xdf);
    sta(BowserFireBreathTimer);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1056f39b0>
    // <conv.chunks.Comment object at 0x1056f3b60>
    lda(0x20);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x1056f3d10>
    sta(EnemyFrameTimer, x);
    lda(0x5);
    sta(BowserHitPoints);
    // <conv.chunks.Comment object at 0x1056fc080>
    lsr();
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1056fc2c0>
    rts();
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(0xff);
    JMP(FSLoop);
}

int FSLoop() {
    // <conv.chunks.Comment object at 0x1056fc4d0>
    // <conv.chunks.Comment object at 0x1056fc560>
    iny();
    lda(Enemy_Flag, y);
    BNE(FSLoop);
    sty(DuplicateObj_Offset);
    txa();
    ora(0b10000000);
    sta(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x1056fc710>
    // <conv.chunks.Comment object at 0x1056fc860>
    // <conv.chunks.Comment object at 0x1056fc9b0>
    // <conv.chunks.Comment object at 0x1056fcb00>
    // <conv.chunks.Comment object at 0x1056fcb90>
    // <conv.chunks.Comment object at 0x1056fccb0>
    lda(Enemy_PageLoc, x);
    sta(Enemy_PageLoc, y);
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1056fcf20>
    // <conv.chunks.Comment object at 0x1056fd070>
    sta(Enemy_X_Position, y);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, y);
    // <conv.chunks.Comment object at 0x1056fd340>
    // <conv.chunks.Comment object at 0x1056fd520>
    lda(Enemy_Y_Position, x);
    sta(Enemy_Y_Position, y);
    JMP(FlmEx);
}

int FlmEx() {
    // <conv.chunks.Comment object at 0x1056fd790>
    // <conv.chunks.Comment object at 0x1056fd8e0>
    rts();
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1056fdb20>
    BNE(FlmEx);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1056fe060>
    lda(NoiseSoundQueue);
    ora(Sfx_BowserFlame);
    // <conv.chunks.Comment object at 0x1056fe2a0>
    sta(NoiseSoundQueue);
    ldy(BowserFront_Offset);
    lda(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x1056fe4b0>
    // <conv.chunks.Comment object at 0x1056fe5d0>
    cmp(Bowser);
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x1056fe750>
    // <conv.chunks.Comment object at 0x1056fe960>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x1056feb10>
    ldy(SecondaryHardMode);
    BEQ(SetFrT);
    // <conv.chunks.Comment object at 0x1056fed20>
    sec();
    sbc(0x10);
    JMP(SetFrT);
}

int SetFrT() {
    // <conv.chunks.Comment object at 0x1056fef00>
    // <conv.chunks.Comment object at 0x1056fef90>
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
    // <conv.chunks.Comment object at 0x1056ff770>
    lda(ScreenRight_X_Pos);
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x1056ffa40>
    sta(Enemy_X_Position, x);
    lda(ScreenRight_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1056ffd70>
    sta(Enemy_PageLoc, x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x105708140>
    sec();
    sbc(0xe);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x105708320>
    // <conv.chunks.Comment object at 0x1057083b0>
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1057086b0>
    lda(Enemy_Y_Position, y);
    clc();
    // <conv.chunks.Comment object at 0x105708950>
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105708a40>
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
    // <conv.chunks.Comment object at 0x105708d40>
    // <conv.chunks.Comment object at 0x105708e60>
    // <conv.chunks.Comment object at 0x105708fe0>
    // <conv.chunks.Comment object at 0x105709070>
    // <conv.chunks.Comment object at 0x1057091c0>
    // <conv.chunks.Comment object at 0x105709250>
    // <conv.chunks.Comment object at 0x105709430>
    // <conv.chunks.Comment object at 0x1057095b0>
    // <conv.chunks.Comment object at 0x105709640>
    lda(offsetof(G, FlameYMFAdderData), y);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1057097f0>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x105709b80>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x105709dc0>
    // <conv.chunks.Comment object at 0x105709e50>
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_X_MoveForce, x);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x10570a1e0>
    // <conv.chunks.Comment object at 0x10570a330>
    rts();
    JMP(InitFireworks);
}

int InitFireworks() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x10570a630>
    BNE(ExitFWk);
    lda(0x20);
    // <conv.chunks.Comment object at 0x10570aed0>
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
    // <conv.chunks.Comment object at 0x10570b3e0>
    // <conv.chunks.Comment object at 0x10570b530>
    // <conv.chunks.Comment object at 0x10570b650>
    lda(Enemy_X_Position, y);
    sec();
    sbc(0x30);
    pha();
    // <conv.chunks.Comment object at 0x10570b8c0>
    // <conv.chunks.Comment object at 0x10570b950>
    // <conv.chunks.Comment object at 0x10570baa0>
    lda(Enemy_PageLoc, y);
    sbc(0x0);
    sta(0x0);
    lda(FireworksCounter);
    // <conv.chunks.Comment object at 0x10570bc50>
    // <conv.chunks.Comment object at 0x10570bda0>
    // <conv.chunks.Comment object at 0x10570be30>
    clc();
    adc(Enemy_State, y);
    tay();
    pla();
    // <conv.chunks.Comment object at 0x105710080>
    // <conv.chunks.Comment object at 0x105710200>
    // <conv.chunks.Comment object at 0x1057102c0>
    clc();
    adc(offsetof(G, FireworksXPosData), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1057103e0>
    // <conv.chunks.Comment object at 0x105710530>
    lda(0x0);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    lda(offsetof(G, FireworksYPosData), y);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105710680>
    // <conv.chunks.Comment object at 0x105710800>
    // <conv.chunks.Comment object at 0x1057109e0>
    // <conv.chunks.Comment object at 0x105710b30>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x105710ce0>
    // <conv.chunks.Comment object at 0x105710ec0>
    lsr();
    sta(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x1057110a0>
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    JMP(ExitFWk);
}

int ExitFWk() {
    rts();
    JMP(BulletBillCheepCheep);
}

int BulletBillCheepCheep() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x105711af0>
    BNE(ExF17);
    lda(AreaType);
    BNE(DoBulletBills);
    cpx(0x3);
    BCS(ExF17);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x105712270>
    // <conv.chunks.Comment object at 0x105712390>
    // <conv.chunks.Comment object at 0x1057124b0>
    // <conv.chunks.Comment object at 0x105712540>
    // <conv.chunks.Comment object at 0x105712720>
    lda(PseudoRandomBitReg, x);
    cmp(0xaa);
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // <conv.chunks.Comment object at 0x105712960>
    // <conv.chunks.Comment object at 0x1057129f0>
    // <conv.chunks.Comment object at 0x105712c00>
    // <conv.chunks.Comment object at 0x105712c90>
    lda(WorldNumber);
    cmp(World2);
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(0b1);
    // <conv.chunks.Comment object at 0x105713230>
    tay();
    lda(offsetof(G, SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // <conv.chunks.Comment object at 0x1057133e0>
    // <conv.chunks.Comment object at 0x105713530>
    sta(Enemy_ID, x);
    lda(BitMFilter);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x1057137d0>
    BNE(GetRBit);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105713a10>
    sta(BitMFilter);
    JMP(GetRBit);
}

int GetRBit() {
    // <conv.chunks.Comment object at 0x105713c20>
    lda(PseudoRandomBitReg, x);
    anda(0b111);
    JMP(ChkRBit);
}

int ChkRBit() {
    // <conv.chunks.Comment object at 0x105713dd0>
    // <conv.chunks.Comment object at 0x105713ef0>
    tay();
    lda(offsetof(G, Bitmasks), y);
    bit(BitMFilter);
    // <conv.chunks.Comment object at 0x10571c050>
    // <conv.chunks.Comment object at 0x10571c1a0>
    BEQ(AddFBit);
    iny();
    // <conv.chunks.Comment object at 0x10571c410>
    tya();
    anda(0b111);
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // <conv.chunks.Comment object at 0x10571c530>
    // <conv.chunks.Comment object at 0x10571c650>
    // <conv.chunks.Comment object at 0x10571c7a0>
    ora(BitMFilter);
    sta(BitMFilter);
    lda(offsetof(G, Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta(Enemy_YMF_Dummy, x);
    lda(0x20);
    // <conv.chunks.Comment object at 0x10571c920>
    // <conv.chunks.Comment object at 0x10571ca40>
    // <conv.chunks.Comment object at 0x10571cb90>
    // <conv.chunks.Comment object at 0x10571ccb0>
    // <conv.chunks.Comment object at 0x10571ce00>
    sta(FrenzyEnemyTimer);
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(0xff);
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // <conv.chunks.Comment object at 0x10571d160>
    // <conv.chunks.Comment object at 0x10571d1f0>
    iny();
    cpy(0x5);
    // <conv.chunks.Comment object at 0x10571d370>
    BCS(FireBulletBill);
    lda(Enemy_Flag, y);
    BEQ(BB_SLoop);
    // <conv.chunks.Comment object at 0x10571d580>
    // <conv.chunks.Comment object at 0x10571d6d0>
    lda(Enemy_ID, y);
    cmp(BulletBill_FrenzyVar);
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // <conv.chunks.Comment object at 0x10571d910>
    // <conv.chunks.Comment object at 0x10571da30>
    // <conv.chunks.Comment object at 0x10571db50>
    rts();
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda(Square2SoundQueue);
    ora(Sfx_Blast);
    // <conv.chunks.Comment object at 0x10571dd90>
    sta(Square2SoundQueue);
    lda(BulletBill_FrenzyVar);
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10571e330>
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
    // <conv.chunks.Comment object at 0x10571e4e0>
    // <conv.chunks.Comment object at 0x10571e630>
    // <conv.chunks.Comment object at 0x10571e6c0>
    // <conv.chunks.Comment object at 0x10571e750>
    // <conv.chunks.Comment object at 0x10571e960>
    // <conv.chunks.Comment object at 0x10571e9f0>
    // <conv.chunks.Comment object at 0x10571ea50>
    // <conv.chunks.Comment object at 0x10571ec60>
    // <conv.chunks.Comment object at 0x10571edb0>
    // <conv.chunks.Comment object at 0x10571eed0>
    pla();
    JMP(SnglID);
}

int SnglID() {
    // <conv.chunks.Comment object at 0x10571eff0>
    sty(0x1);
    ldy(0xb0);
    anda(0x2);
    BEQ(SetYGp);
    ldy(0x70);
    JMP(SetYGp);
}

int SetYGp() {
    // <conv.chunks.Comment object at 0x10571f110>
    // <conv.chunks.Comment object at 0x10571f200>
    // <conv.chunks.Comment object at 0x10571f320>
    // <conv.chunks.Comment object at 0x10571f500>
    // <conv.chunks.Comment object at 0x10571f590>
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
    // <conv.chunks.Comment object at 0x10571f740>
    // <conv.chunks.Comment object at 0x10571f8f0>
    // <conv.chunks.Comment object at 0x10571f980>
    // <conv.chunks.Comment object at 0x10571fb30>
    // <conv.chunks.Comment object at 0x10571fbc0>
    // <conv.chunks.Comment object at 0x10571fd70>
    // <conv.chunks.Comment object at 0x10571fe30>
    // <conv.chunks.Comment object at 0x10571fec0>
    // <conv.chunks.Comment object at 0x105724080>
    // <conv.chunks.Comment object at 0x105724110>
    sty(NumberofGroupEnemies);
    JMP(GrLoop);
}

int GrLoop() {
    // <conv.chunks.Comment object at 0x105724290>
    ldx(0xff);
    JMP(GSltLp);
}

int GSltLp() {
    // <conv.chunks.Comment object at 0x105724380>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x105724530>
    BCS(NextED);
    lda(Enemy_Flag, x);
    BNE(GSltLp);
    // <conv.chunks.Comment object at 0x105724770>
    // <conv.chunks.Comment object at 0x1057248c0>
    lda(0x1);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105724a10>
    lda(0x2);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x105724c50>
    lda(0x3);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x105724e90>
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x105725160>
    sta(0x3);
    lda(0x2);
    adc(0x0);
    // <conv.chunks.Comment object at 0x105725310>
    // <conv.chunks.Comment object at 0x105725430>
    sta(0x2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105725640>
    sta(Enemy_Y_Position, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1057258e0>
    // <conv.chunks.Comment object at 0x105725970>
    sta(Enemy_Flag, x);
    JSR(CheckpointEnemyID);
    dec(NumberofGroupEnemies);
    // <conv.chunks.Comment object at 0x105725c70>
    // <conv.chunks.Comment object at 0x105725d90>
    BNE(GrLoop);
    JMP(NextED);
}

int NextED() {
    // <conv.chunks.Comment object at 0x105725fd0>
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}

int InitPiranhaPlant() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1057261e0>
    sta(PiranhaPlant_Y_Speed, x);
    lsr();
    sta(Enemy_State, x);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x1057264b0>
    // <conv.chunks.Comment object at 0x105726600>
    lda(Enemy_Y_Position, x);
    sta(PiranhaPlantDownYPos, x);
    // <conv.chunks.Comment object at 0x105726870>
    sec();
    sbc(0x18);
    sta(PiranhaPlantUpYPos, x);
    // <conv.chunks.Comment object at 0x105726ab0>
    lda(0x9);
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda(Enemy_ID, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x105726f00>
    // <conv.chunks.Comment object at 0x105727050>
    sec();
    sbc(0x12);
    // <conv.chunks.Comment object at 0x105727200>
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
    // <conv.chunks.Comment object at 0x1057278f0>
    // <conv.chunks.Comment object at 0x105727980>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x105727b90>
    BNE(NextFSlot);
    lda(0x1);
    // <conv.chunks.Comment object at 0x105727dd0>
    sta(Enemy_State, y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // <conv.chunks.Comment object at 0x10572c050>
    dey();
    BPL(LakituChk);
    // <conv.chunks.Comment object at 0x10572c140>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x10572c2c0>
    // <conv.chunks.Comment object at 0x10572c470>
    rts();
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x10572c6b0>
    sta(Enemy_MovingDir, x);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10572c8f0>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // <conv.chunks.Comment object at 0x10572cb30>
    lda(0x3);
    JMP(SetBBox2);
}

int SetBBox2() {
    // <conv.chunks.Comment object at 0x10572cbf0>
    sta(Enemy_BoundBoxCtrl, x);
    rts();
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10572cef0>
    dec(Enemy_Y_Position, x);
    ldy(SecondaryHardMode);
    BNE(AlignP);
    ldy(0x2);
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // <conv.chunks.Comment object at 0x10572d160>
    // <conv.chunks.Comment object at 0x10572d280>
    // <conv.chunks.Comment object at 0x10572d3d0>
    // <conv.chunks.Comment object at 0x10572d460>
    // <conv.chunks.Comment object at 0x10572d610>
    ldy(0xff);
    lda(BalPlatformAlignment);
    sta(Enemy_State, x);
    BPL(SetBPA);
    txa();
    tay();
    JMP(SetBPA);
}

int SetBPA() {
    // <conv.chunks.Comment object at 0x10572d700>
    // <conv.chunks.Comment object at 0x10572d8b0>
    // <conv.chunks.Comment object at 0x10572da00>
    // <conv.chunks.Comment object at 0x10572db80>
    // <conv.chunks.Comment object at 0x10572dc40>
    // <conv.chunks.Comment object at 0x10572dcd0>
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
    // <conv.chunks.Comment object at 0x10572ea80>
    // <conv.chunks.Comment object at 0x10572eb10>
    // <conv.chunks.Comment object at 0x10572ecf0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10572ef60>
    adc(0x1);
    ldy(0xc0);
    JMP(SetYO);
}

int SetYO() {
    // <conv.chunks.Comment object at 0x10572f050>
    // <conv.chunks.Comment object at 0x10572f170>
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
    // <conv.chunks.Comment object at 0x10572f800>
    // <conv.chunks.Comment object at 0x10572f920>
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
    // <conv.chunks.Comment object at 0x10572fb90>
    // <conv.chunks.Comment object at 0x10572fc20>
    // <conv.chunks.Comment object at 0x10572fe00>
    // <conv.chunks.Comment object at 0x10572ff20>
    // <conv.chunks.Comment object at 0x10573c0b0>
    // <conv.chunks.Comment object at 0x10573c140>
    sta(Enemy_BoundBoxCtrl, x);
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
    // <conv.chunks.Comment object at 0x10573c9e0>
    sta(Enemy_Y_MoveForce, x);
    lda(0xff);
    // <conv.chunks.Comment object at 0x10573cc20>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(0xf0);
    // <conv.chunks.Comment object at 0x10573cfe0>
    sta(Enemy_Y_MoveForce, x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10573d220>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(0x1);
    JSR(PosPlatform);
    // <conv.chunks.Comment object at 0x10573d520>
    lda(0x4);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x10573d730>
    rts();
    JMP(PosPlatform);
}

int PosPlatform() {
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10573da00>
    clc();
    adc(offsetof(G, PlatPosDataLow), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10573dfa0>
    // <conv.chunks.Comment object at 0x10573e0f0>
    lda(Enemy_PageLoc, x);
    adc(offsetof(G, PlatPosDataHigh), y);
    sta(Enemy_PageLoc, x);
    rts();
    JMP(EndOfEnemyInitCode);
}

int EndOfEnemyInitCode() {
    rts();
    JMP(RunEnemyObjectsCore);
}

int RunEnemyObjectsCore() {
    ldx(ObjectOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10573e810>
    // <conv.chunks.Comment object at 0x10573e930>
    ldy(Enemy_ID, x);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x10573eb70>
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
    // <conv.chunks.Comment object at 0x105748980>
    sta(Enemy_SprAttrib, x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy(TimerControl);
    // <conv.chunks.Comment object at 0x105749250>
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
    lda(TimerControl);
    BNE(SkipPT);
    // <conv.chunks.Comment object at 0x10574ba40>
    // <conv.chunks.Comment object at 0x10574bb60>
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
    // <conv.chunks.Comment object at 0x105754170>
    sec();
    sbc(0x24);
    JSR(JumpEngine);
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1057549b0>
    sta(Enemy_Flag, x);
    sta(Enemy_ID, x);
    sta(Enemy_State, x);
    sta(FloateyNum_Control, x);
    sta(EnemyIntervalTimer, x);
    sta(ShellChainCounter, x);
    sta(Enemy_SprAttrib, x);
    sta(EnemyFrameTimer, x);
    rts();
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
    // <conv.chunks.Comment object at 0x1057554c0>
    // <conv.chunks.Comment object at 0x105755610>
    // <conv.chunks.Comment object at 0x105755760>
    // <conv.chunks.Comment object at 0x105755880>
    // <conv.chunks.Comment object at 0x105755ac0>
    // <conv.chunks.Comment object at 0x105755be0>
    // <conv.chunks.Comment object at 0x105755d30>
    // <conv.chunks.Comment object at 0x105755e50>
    // <conv.chunks.Comment object at 0x105755ee0>
    lda(0xf9);
    sta(Enemy_Y_Speed, x);
    JMP(PdbM);
}

int PdbM() {
    // <conv.chunks.Comment object at 0x105756120>
    // <conv.chunks.Comment object at 0x105756300>
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105756720>
    anda(0b100000);
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // <conv.chunks.Comment object at 0x105756d80>
    // <conv.chunks.Comment object at 0x105756ed0>
    // <conv.chunks.Comment object at 0x105756ff0>
    lda(HammerBroJumpTimer, x);
    BEQ(HammerBroJumpCode);
    dec(HammerBroJumpTimer, x);
    // <conv.chunks.Comment object at 0x1057571a0>
    // <conv.chunks.Comment object at 0x1057572c0>
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
    // <conv.chunks.Comment object at 0x105757500>
    // <conv.chunks.Comment object at 0x105757620>
    // <conv.chunks.Comment object at 0x105757740>
    // <conv.chunks.Comment object at 0x105757890>
    // <conv.chunks.Comment object at 0x1057579e0>
    // <conv.chunks.Comment object at 0x105757b00>
    // <conv.chunks.Comment object at 0x105757c50>
    // <conv.chunks.Comment object at 0x105757da0>
    // <conv.chunks.Comment object at 0x105757ec0>
    lda(Enemy_State, x);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x105760170>
    sta(Enemy_State, x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // <conv.chunks.Comment object at 0x1057603b0>
    // <conv.chunks.Comment object at 0x1057604d0>
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
    // <conv.chunks.Comment object at 0x105760830>
    // <conv.chunks.Comment object at 0x105760a70>
    // <conv.chunks.Comment object at 0x105760b90>
    // <conv.chunks.Comment object at 0x105760c20>
    // <conv.chunks.Comment object at 0x105760dd0>
    // <conv.chunks.Comment object at 0x105760f20>
    // <conv.chunks.Comment object at 0x105760fb0>
    // <conv.chunks.Comment object at 0x1057610a0>
    // <conv.chunks.Comment object at 0x105761280>
    // <conv.chunks.Comment object at 0x1057613d0>
    // <conv.chunks.Comment object at 0x105761460>
    // <conv.chunks.Comment object at 0x105761640>
    // <conv.chunks.Comment object at 0x1057616d0>
    // <conv.chunks.Comment object at 0x1057618b0>
    // <conv.chunks.Comment object at 0x105761940>
    anda(0x1);
    BNE(SetHJ);
    ldy(0xfa);
    JMP(SetHJ);
}

int SetHJ() {
    // <conv.chunks.Comment object at 0x105761c10>
    // <conv.chunks.Comment object at 0x105761df0>
    // <conv.chunks.Comment object at 0x105761e80>
    sty(Enemy_Y_Speed, x);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1057620c0>
    ora(0x1);
    sta(Enemy_State, x);
    lda(0x0);
    anda(((PseudoRandomBitReg) + (2)), x);
    tay();
    lda(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x105762450>
    // <conv.chunks.Comment object at 0x1057624e0>
    // <conv.chunks.Comment object at 0x105762780>
    // <conv.chunks.Comment object at 0x105762810>
    BNE(HJump);
    tay();
    JMP(HJump);
}

int HJump() {
    // <conv.chunks.Comment object at 0x105762a80>
    // <conv.chunks.Comment object at 0x105762b10>
    lda(offsetof(G, HammerBroJumpLData), y);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x105762cc0>
    lda(((PseudoRandomBitReg) + (1)), x);
    ora(0b11000000);
    sta(HammerBroJumpTimer, x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(0xfc);
    // <conv.chunks.Comment object at 0x105763290>
    lda(FrameCounter);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1057634a0>
    BNE(Shimmy);
    ldy(0x4);
    JMP(Shimmy);
}

int Shimmy() {
    // <conv.chunks.Comment object at 0x1057636e0>
    // <conv.chunks.Comment object at 0x105763770>
    sty(Enemy_X_Speed, x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda(EnemyIntervalTimer, x);
    BNE(SetShim);
    // <conv.chunks.Comment object at 0x1057639b0>
    // <conv.chunks.Comment object at 0x105763a40>
    // <conv.chunks.Comment object at 0x105763bf0>
    // <conv.chunks.Comment object at 0x105763d70>
    // <conv.chunks.Comment object at 0x105763e00>
    // <conv.chunks.Comment object at 0x105763f50>
    lda(0xf8);
    sta(Enemy_X_Speed, x);
    JMP(SetShim);
}

int SetShim() {
    // <conv.chunks.Comment object at 0x105768140>
    // <conv.chunks.Comment object at 0x105768320>
    sty(Enemy_MovingDir, x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x105768500>
    lda(Enemy_State, x);
    anda(0b1000000);
    BNE(FallE);
    // <conv.chunks.Comment object at 0x105768740>
    // <conv.chunks.Comment object at 0x105768860>
    lda(Enemy_State, x);
    asl();
    BCS(SteadM);
    // <conv.chunks.Comment object at 0x105768b00>
    // <conv.chunks.Comment object at 0x105768b90>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(MoveDefeatedEnemy);
    // <conv.chunks.Comment object at 0x105768e00>
    // <conv.chunks.Comment object at 0x105768f20>
    lda(Enemy_State, x);
    anda(0b111);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x105769160>
    // <conv.chunks.Comment object at 0x105769280>
    cmp(0x5);
    BEQ(FallE);
    // <conv.chunks.Comment object at 0x105769430>
    cmp(0x3);
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // <conv.chunks.Comment object at 0x105769670>
    // <conv.chunks.Comment object at 0x105769820>
    JSR(MoveD_EnemyVertically);
    ldy(0x0);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105769a00>
    cmp(0x2);
    BEQ(MEHor);
    anda(0b1000000);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x105769c40>
    // <conv.chunks.Comment object at 0x105769e20>
    // <conv.chunks.Comment object at 0x105769f40>
    lda(Enemy_ID, x);
    cmp(PowerUpObject);
    // <conv.chunks.Comment object at 0x10576a1b0>
    BEQ(SteadM);
    BNE(SlowM);
    JMP(MEHor);
}

int MEHor() {
    // <conv.chunks.Comment object at 0x10576a3f0>
    // <conv.chunks.Comment object at 0x10576a540>
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}

int SlowM() {
    // <conv.chunks.Comment object at 0x10576a6c0>
    ldy(0x1);
    JMP(SteadM);
}

int SteadM() {
    // <conv.chunks.Comment object at 0x10576a7b0>
    lda(Enemy_X_Speed, x);
    pha();
    BPL(AddHS);
    // <conv.chunks.Comment object at 0x10576aa20>
    // <conv.chunks.Comment object at 0x10576aab0>
    iny();
    iny();
    JMP(AddHS);
}

int AddHS() {
    clc();
    adc(offsetof(G, XSpeedAdderData), y);
    sta(Enemy_X_Speed, x);
    JSR(MoveEnemyHorizontally);
    // <conv.chunks.Comment object at 0x10576ae40>
    // <conv.chunks.Comment object at 0x10576af90>
    // <conv.chunks.Comment object at 0x10576b0e0>
    pla();
    sta(Enemy_X_Speed, x);
    rts();
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda(EnemyIntervalTimer, x);
    BNE(ChkKillGoomba);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x10576b4d0>
    // <conv.chunks.Comment object at 0x10576b620>
    // <conv.chunks.Comment object at 0x10576b740>
    lda(FrameCounter);
    anda(0x1);
    tay();
    // <conv.chunks.Comment object at 0x10576b980>
    // <conv.chunks.Comment object at 0x10576bad0>
    iny();
    sty(Enemy_MovingDir, x);
    dey();
    lda(PrimaryHardMode);
    BEQ(SetRSpd);
    // <conv.chunks.Comment object at 0x10576bbf0>
    // <conv.chunks.Comment object at 0x10576bd70>
    // <conv.chunks.Comment object at 0x10576be00>
    // <conv.chunks.Comment object at 0x10576bf20>
    iny();
    iny();
    JMP(SetRSpd);
}

int SetRSpd() {
    // <conv.chunks.Comment object at 0x105774170>
    // <conv.chunks.Comment object at 0x105774200>
    lda(offsetof(G, RevivedXSpeed), y);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x1057743b0>
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
    // <conv.chunks.Comment object at 0x105774830>
    // <conv.chunks.Comment object at 0x1057748c0>
    lda(Enemy_ID, x);
    cmp(Goomba);
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // <conv.chunks.Comment object at 0x105774bc0>
    // <conv.chunks.Comment object at 0x105774c20>
    // <conv.chunks.Comment object at 0x105774e60>
    // <conv.chunks.Comment object at 0x105774fb0>
    rts();
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
    // <conv.chunks.Comment object at 0x1057754f0>
    // <conv.chunks.Comment object at 0x105775640>
    // <conv.chunks.Comment object at 0x105775760>
    // <conv.chunks.Comment object at 0x1057758b0>
    cmp(RedPTroopaOrigXPos, x);
    BCS(MoveRedPTUpOrDown);
    lda(FrameCounter);
    anda(0b111);
    BNE(NoIncPT);
    inc(Enemy_Y_Position, x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // <conv.chunks.Comment object at 0x105775b20>
    // <conv.chunks.Comment object at 0x105775c40>
    // <conv.chunks.Comment object at 0x105775d60>
    // <conv.chunks.Comment object at 0x105775e80>
    // <conv.chunks.Comment object at 0x105775fd0>
    // <conv.chunks.Comment object at 0x105776150>
    rts();
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1057762a0>
    cmp(RedPTroopaCenterYPos, x);
    BCC(MovPTDwn);
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}

int MovPTDwn() {
    // <conv.chunks.Comment object at 0x105776510>
    // <conv.chunks.Comment object at 0x105776630>
    // <conv.chunks.Comment object at 0x105776750>
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}

int MoveFlyGreenPTroopa() {
    JSR(XMoveCntr_GreenPTroopa);
    JSR(MoveWithXMCntrs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x105776960>
    // <conv.chunks.Comment object at 0x105776a80>
    // <conv.chunks.Comment object at 0x105776ba0>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoMGPT);
    // <conv.chunks.Comment object at 0x105776db0>
    // <conv.chunks.Comment object at 0x105776ed0>
    lda(FrameCounter);
    anda(0b1000000);
    BNE(YSway);
    ldy(0xff);
    JMP(YSway);
}

int YSway() {
    // <conv.chunks.Comment object at 0x105777110>
    // <conv.chunks.Comment object at 0x105777230>
    // <conv.chunks.Comment object at 0x105777380>
    // <conv.chunks.Comment object at 0x105777410>
    sty(0x0);
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x105777770>
    // <conv.chunks.Comment object at 0x105777830>
    sta(Enemy_Y_Position, x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // <conv.chunks.Comment object at 0x105777a70>
    rts();
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(0x13);
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(0x1);
    // <conv.chunks.Comment object at 0x105777d40>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoIncXM);
    ldy(XMoveSecondaryCounter, x);
    lda(XMovePrimaryCounter, x);
    // <conv.chunks.Comment object at 0x105777f20>
    // <conv.chunks.Comment object at 0x10577c080>
    // <conv.chunks.Comment object at 0x10577c1d0>
    // <conv.chunks.Comment object at 0x10577c320>
    lsr();
    BCS(DecSeXM);
    cpy(0x1);
    BEQ(IncPXM);
    inc(XMoveSecondaryCounter, x);
    JMP(NoIncXM);
}

int NoIncXM() {
    rts();
    JMP(IncPXM);
}

int IncPXM() {
    // <conv.chunks.Comment object at 0x10577cb00>
    inc(XMovePrimaryCounter, x);
    rts();
    JMP(DecSeXM);
}

int DecSeXM() {
    // <conv.chunks.Comment object at 0x10577cd40>
    tya();
    BEQ(IncPXM);
    dec(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x10577ce60>
    // <conv.chunks.Comment object at 0x10577cfb0>
    rts();
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x10577d1c0>
    pha();
    ldy(0x1);
    // <conv.chunks.Comment object at 0x10577d3a0>
    lda(XMovePrimaryCounter, x);
    anda(0b10);
    BNE(XMRight);
    // <conv.chunks.Comment object at 0x10577d5e0>
    // <conv.chunks.Comment object at 0x10577d700>
    lda(XMoveSecondaryCounter, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10577d970>
    // <conv.chunks.Comment object at 0x10577dac0>
    adc(0x1);
    sta(XMoveSecondaryCounter, x);
    ldy(0x2);
    JMP(XMRight);
}

int XMRight() {
    // <conv.chunks.Comment object at 0x10577dd60>
    // <conv.chunks.Comment object at 0x10577ddf0>
    sty(Enemy_MovingDir, x);
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    pla();
    sta(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x10577e150>
    // <conv.chunks.Comment object at 0x10577e120>
    // <conv.chunks.Comment object at 0x10577e300>
    rts();
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
    // <conv.chunks.Comment object at 0x10577e7b0>
    // <conv.chunks.Comment object at 0x10577e8d0>
    // <conv.chunks.Comment object at 0x10577e9f0>
    // <conv.chunks.Comment object at 0x10577eb10>
    // <conv.chunks.Comment object at 0x10577ed20>
    // <conv.chunks.Comment object at 0x10577ee70>
    txa();
    lsr();
    BCC(FBLeft);
    ldy(Player_MovingDir);
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // <conv.chunks.Comment object at 0x10577f050>
    // <conv.chunks.Comment object at 0x10577f0e0>
    // <conv.chunks.Comment object at 0x10577f230>
    // <conv.chunks.Comment object at 0x10577f350>
    // <conv.chunks.Comment object at 0x10577f4a0>
    ldy(0x2);
    JSR(PlayerEnemyDiff);
    BPL(SBMDir);
    dey();
    JMP(SBMDir);
}

int SBMDir() {
    // <conv.chunks.Comment object at 0x10577f590>
    // <conv.chunks.Comment object at 0x10577f740>
    // <conv.chunks.Comment object at 0x10577f8c0>
    // <conv.chunks.Comment object at 0x10577f950>
    sty(Enemy_MovingDir, x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10577fb30>
    // <conv.chunks.Comment object at 0x10577fc50>
    sec();
    sbc(Enemy_Y_MoveForce, x);
    cmp(0x20);
    BCC(SwimX);
    sta(Enemy_Y_Position, x);
    JMP(SwimX);
}

int SwimX() {
    // <conv.chunks.Comment object at 0x10577fe30>
    // <conv.chunks.Comment object at 0x10577ff80>
    // <conv.chunks.Comment object at 0x105788050>
    // <conv.chunks.Comment object at 0x105788230>
    // <conv.chunks.Comment object at 0x105788380>
    ldy(Enemy_MovingDir, x);
    dey();
    BNE(LeftSwim);
    // <conv.chunks.Comment object at 0x1057885c0>
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x105788830>
    adc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1057889e0>
    lda(Enemy_PageLoc, x);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x105788c50>
    // <conv.chunks.Comment object at 0x105788ce0>
    rts();
    JMP(LeftSwim);
}

int LeftSwim() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x1057890d0>
    sbc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x105789280>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1057894f0>
    // <conv.chunks.Comment object at 0x105789580>
    rts();
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
    // <conv.chunks.Comment object at 0x105789970>
    // <conv.chunks.Comment object at 0x105789ac0>
    // <conv.chunks.Comment object at 0x105789be0>
    lda(FrameCounter);
    anda(0b111);
    pha();
    lda(BlooperMoveCounter, x);
    lsr();
    BCS(SlowSwim);
    pla();
    BNE(BSwimE);
    // <conv.chunks.Comment object at 0x105789df0>
    // <conv.chunks.Comment object at 0x105789f40>
    // <conv.chunks.Comment object at 0x105789fd0>
    // <conv.chunks.Comment object at 0x10578a150>
    // <conv.chunks.Comment object at 0x10578a1e0>
    // <conv.chunks.Comment object at 0x10578a330>
    // <conv.chunks.Comment object at 0x10578a3c0>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x10578a660>
    adc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    // <conv.chunks.Comment object at 0x10578a750>
    // <conv.chunks.Comment object at 0x10578a930>
    cmp(0x2);
    BNE(BSwimE);
    inc(BlooperMoveCounter, x);
    JMP(BSwimE);
}

int BSwimE() {
    rts();
    JMP(SlowSwim);
}

int SlowSwim() {
    pla();
    BNE(NoSSw);
    // <conv.chunks.Comment object at 0x10578af60>
    // <conv.chunks.Comment object at 0x10578aff0>
    lda(Enemy_Y_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x10578b290>
    sbc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    BNE(NoSSw);
    inc(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x10578b380>
    // <conv.chunks.Comment object at 0x10578b560>
    // <conv.chunks.Comment object at 0x10578b6b0>
    // <conv.chunks.Comment object at 0x10578b800>
    lda(0x2);
    sta(EnemyIntervalTimer, x);
    JMP(NoSSw);
}

int NoSSw() {
    // <conv.chunks.Comment object at 0x10578b9b0>
    // <conv.chunks.Comment object at 0x10578bbc0>
    rts();
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
    // <conv.chunks.Comment object at 0x10578bfb0>
    // <conv.chunks.Comment object at 0x105794140>
    // <conv.chunks.Comment object at 0x1057941d0>
    // <conv.chunks.Comment object at 0x105794320>
    // <conv.chunks.Comment object at 0x1057944a0>
    rts();
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda(Enemy_Y_Position, x);
    adc(0x10);
    cmp(Player_Y_Position);
    BCC(Floatdown);
    // <conv.chunks.Comment object at 0x1057945f0>
    // <conv.chunks.Comment object at 0x105794740>
    // <conv.chunks.Comment object at 0x1057947d0>
    // <conv.chunks.Comment object at 0x105794980>
    lda(0x0);
    sta(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x105794b00>
    rts();
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105794dd0>
    anda(0b100000);
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // <conv.chunks.Comment object at 0x105795010>
    // <conv.chunks.Comment object at 0x105795160>
    // <conv.chunks.Comment object at 0x105795280>
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
    // <conv.chunks.Comment object at 0x1057957c0>
    // <conv.chunks.Comment object at 0x105795b20>
    // <conv.chunks.Comment object at 0x105795c40>
    // <conv.chunks.Comment object at 0x105795d90>
    // <conv.chunks.Comment object at 0x105795eb0>
    sta(0x3);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105795fd0>
    sec();
    sbc(0xa);
    tay();
    lda(offsetof(G, SwimCCXMoveData), y);
    // <conv.chunks.Comment object at 0x105796210>
    // <conv.chunks.Comment object at 0x105796360>
    // <conv.chunks.Comment object at 0x1057963f0>
    sta(0x2);
    lda(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x105796540>
    sec();
    sbc(0x2);
    sta(Enemy_X_MoveForce, x);
    lda(Enemy_X_Position, x);
    sbc(0x0);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x105796840>
    // <conv.chunks.Comment object at 0x1057968d0>
    // <conv.chunks.Comment object at 0x105796a80>
    // <conv.chunks.Comment object at 0x105796bd0>
    // <conv.chunks.Comment object at 0x105796c60>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x105796f60>
    // <conv.chunks.Comment object at 0x105796ff0>
    lda(0x20);
    sta(0x2);
    cpx(0x2);
    BCC(ExSwCC);
    lda(CheepCheepMoveMFlag, x);
    cmp(0x10);
    BCC(CCSwimUpwards);
    // <conv.chunks.Comment object at 0x1057972f0>
    // <conv.chunks.Comment object at 0x105797380>
    // <conv.chunks.Comment object at 0x105797470>
    // <conv.chunks.Comment object at 0x105797650>
    // <conv.chunks.Comment object at 0x1057977a0>
    // <conv.chunks.Comment object at 0x105797830>
    lda(Enemy_YMF_Dummy, x);
    clc();
    adc(0x2);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x3);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105797bc0>
    // <conv.chunks.Comment object at 0x105797c50>
    // <conv.chunks.Comment object at 0x105797e00>
    // <conv.chunks.Comment object at 0x105797f80>
    // <conv.chunks.Comment object at 0x105797f50>
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
    // <conv.chunks.Comment object at 0x1057a0770>
    // <conv.chunks.Comment object at 0x1057a0800>
    // <conv.chunks.Comment object at 0x1057a09b0>
    // <conv.chunks.Comment object at 0x1057a0b30>
    // <conv.chunks.Comment object at 0x1057a0bc0>
    lda(Enemy_Y_HighPos, x);
    sbc(0x0);
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta(Enemy_Y_HighPos, x);
    ldy(0x0);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1057a0fe0>
    // <conv.chunks.Comment object at 0x1057a1130>
    // <conv.chunks.Comment object at 0x1057a11c0>
    sec();
    sbc(CheepCheepOrigYPos, x);
    BPL(YPDiff);
    ldy(0x10);
    // <conv.chunks.Comment object at 0x1057a1430>
    // <conv.chunks.Comment object at 0x1057a1580>
    // <conv.chunks.Comment object at 0x1057a16d0>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(YPDiff);
}

int YPDiff() {
    // <conv.chunks.Comment object at 0x1057a1910>
    // <conv.chunks.Comment object at 0x1057a19a0>
    // <conv.chunks.Comment object at 0x1057a1a30>
    cmp(0xf);
    BCC(ExSwCC);
    // <conv.chunks.Comment object at 0x1057a1bb0>
    tya();
    sta(CheepCheepMoveMFlag, x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // <conv.chunks.Comment object at 0x1057a1e20>
    // <conv.chunks.Comment object at 0x1057a1fa0>
    rts();
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda(Enemy_OffscreenBits);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x1057a2450>
    // <conv.chunks.Comment object at 0x1057aa780>
    // <conv.chunks.Comment object at 0x1057aa8a0>
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
    // <conv.chunks.Comment object at 0x1057aaab0>
    // <conv.chunks.Comment object at 0x1057aabd0>
    // <conv.chunks.Comment object at 0x1057aad20>
    // <conv.chunks.Comment object at 0x1057aae70>
    // <conv.chunks.Comment object at 0x1057aaf90>
    // <conv.chunks.Comment object at 0x1057ab0b0>
    // <conv.chunks.Comment object at 0x1057ab200>
    lda(FirebarSpinState_High, x);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1057ab3b0>
    cpy(0x1f);
    BCC(SetupGFB);
    cmp(0x8);
    BEQ(SkpFSte);
    // <conv.chunks.Comment object at 0x1057ab560>
    // <conv.chunks.Comment object at 0x1057ab710>
    // <conv.chunks.Comment object at 0x1057ab7a0>
    cmp(0x18);
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1057abc80>
    sta(FirebarSpinState_High, x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // <conv.chunks.Comment object at 0x1057abec0>
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
    // <conv.chunks.Comment object at 0x1057abfb0>
    // <conv.chunks.Comment object at 0x1057b4170>
    // <conv.chunks.Comment object at 0x1057b4290>
    // <conv.chunks.Comment object at 0x1057b43e0>
    // <conv.chunks.Comment object at 0x1057b4500>
    // <conv.chunks.Comment object at 0x1057b4680>
    // <conv.chunks.Comment object at 0x1057b4710>
    // <conv.chunks.Comment object at 0x1057b4890>
    // <conv.chunks.Comment object at 0x1057b4a10>
    lda(0x1);
    sta(0x0);
    JSR(FirebarCollision);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1057b4c20>
    // <conv.chunks.Comment object at 0x1057b4cb0>
    // <conv.chunks.Comment object at 0x1057b4e30>
    lda(Enemy_ID, x);
    cmp(0x1f);
    BCC(SetMFbar);
    ldy(0xb);
    JMP(SetMFbar);
}

int SetMFbar() {
    // <conv.chunks.Comment object at 0x1057b5070>
    // <conv.chunks.Comment object at 0x1057b5100>
    // <conv.chunks.Comment object at 0x1057b52b0>
    // <conv.chunks.Comment object at 0x1057b5340>
    sty(0xed);
    lda(0x0);
    sta(0x0);
    JMP(DrawFbar);
}

int DrawFbar() {
    // <conv.chunks.Comment object at 0x1057b5640>
    // <conv.chunks.Comment object at 0x1057b56d0>
    lda(0xef);
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1057b5820>
    // <conv.chunks.Comment object at 0x1057b59a0>
    // <conv.chunks.Comment object at 0x1057b5af0>
    cmp(0x4);
    BNE(NextFbar);
    ldy(DuplicateObj_Offset);
    lda(Enemy_SprDataOffset, y);
    sta(0x6);
    JMP(NextFbar);
}

int NextFbar() {
    // <conv.chunks.Comment object at 0x1057b5dc0>
    // <conv.chunks.Comment object at 0x1057b5ee0>
    // <conv.chunks.Comment object at 0x1057b6060>
    // <conv.chunks.Comment object at 0x1057b60f0>
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
    // <conv.chunks.Comment object at 0x1057b66f0>
    sta(0x5);
    ldy(0x6);
    lda(0x1);
    lsr(0x5);
    BCS(AddHA);
    // <conv.chunks.Comment object at 0x1057b6870>
    // <conv.chunks.Comment object at 0x1057b6780>
    // <conv.chunks.Comment object at 0x1057b6990>
    // <conv.chunks.Comment object at 0x1057b6bd0>
    eor(0xff);
    adc(0x1);
    JMP(AddHA);
}

int AddHA() {
    // <conv.chunks.Comment object at 0x1057b6de0>
    // <conv.chunks.Comment object at 0x1057b6f00>
    clc();
    adc(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    sta(0x6);
    cmp(Enemy_Rel_XPos);
    BCS(SubtR1);
    // <conv.chunks.Comment object at 0x1057b70b0>
    // <conv.chunks.Comment object at 0x1057b71d0>
    // <conv.chunks.Comment object at 0x1057b7350>
    // <conv.chunks.Comment object at 0x1057b73e0>
    // <conv.chunks.Comment object at 0x1057b7560>
    lda(Enemy_Rel_XPos);
    sec();
    sbc(0x6);
    // <conv.chunks.Comment object at 0x1057b77d0>
    // <conv.chunks.Comment object at 0x1057b7890>
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // <conv.chunks.Comment object at 0x1057b7aa0>
    sec();
    sbc(Enemy_Rel_XPos);
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // <conv.chunks.Comment object at 0x1057b7bc0>
    // <conv.chunks.Comment object at 0x1057b7ce0>
    cmp(0x59);
    BCC(VAHandl);
    lda(0xf8);
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // <conv.chunks.Comment object at 0x1057b7dd0>
    // <conv.chunks.Comment object at 0x1057b7fb0>
    // <conv.chunks.Comment object at 0x1057bc080>
    // <conv.chunks.Comment object at 0x1057bc260>
    lda(Enemy_Rel_YPos);
    cmp(0xf8);
    // <conv.chunks.Comment object at 0x1057bc3e0>
    BEQ(SetVFbr);
    lda(0x2);
    lsr(0x5);
    BCS(AddVA);
    // <conv.chunks.Comment object at 0x1057bc650>
    // <conv.chunks.Comment object at 0x1057bc620>
    // <conv.chunks.Comment object at 0x1057bc800>
    eor(0xff);
    adc(0x1);
    JMP(AddVA);
}

int AddVA() {
    // <conv.chunks.Comment object at 0x1057bca10>
    // <conv.chunks.Comment object at 0x1057bcb30>
    clc();
    adc(Enemy_Rel_YPos);
    JMP(SetVFbr);
}

int SetVFbr() {
    // <conv.chunks.Comment object at 0x1057bcce0>
    // <conv.chunks.Comment object at 0x1057bce00>
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
    // <conv.chunks.Comment object at 0x1057bcfb0>
    // <conv.chunks.Comment object at 0x1057bd250>
    // <conv.chunks.Comment object at 0x1057bd310>
    // <conv.chunks.Comment object at 0x1057bd3a0>
    // <conv.chunks.Comment object at 0x1057bd4c0>
    // <conv.chunks.Comment object at 0x1057bd5e0>
    // <conv.chunks.Comment object at 0x1057bd760>
    ldy(Player_Y_HighPos);
    dey();
    BNE(NoColFB);
    ldy(Player_Y_Position);
    lda(PlayerSize);
    BNE(AdjSm);
    // <conv.chunks.Comment object at 0x1057bd970>
    // <conv.chunks.Comment object at 0x1057bda00>
    // <conv.chunks.Comment object at 0x1057bdb50>
    // <conv.chunks.Comment object at 0x1057bdc70>
    // <conv.chunks.Comment object at 0x1057bdd90>
    lda(CrouchingFlag);
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // <conv.chunks.Comment object at 0x1057bdfd0>
    // <conv.chunks.Comment object at 0x1057be120>
    inc(0x5);
    inc(0x5);
    // <conv.chunks.Comment object at 0x1057be180>
    tya();
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x1057be480>
    // <conv.chunks.Comment object at 0x1057be510>
    tay();
    JMP(BigJp);
}

int BigJp() {
    // <conv.chunks.Comment object at 0x1057be6c0>
    tya();
    JMP(FBCLoop);
}

int FBCLoop() {
    // <conv.chunks.Comment object at 0x1057be7e0>
    sec();
    sbc(0x7);
    BPL(ChkVFBD);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1057be930>
    // <conv.chunks.Comment object at 0x1057be9c0>
    // <conv.chunks.Comment object at 0x1057beb70>
    // <conv.chunks.Comment object at 0x1057becc0>
    adc(0x1);
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // <conv.chunks.Comment object at 0x1057bedb0>
    cmp(0x8);
    BCS(Chk2Ofs);
    lda(0x6);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x1057bf110>
    // <conv.chunks.Comment object at 0x1057bf1a0>
    BCS(Chk2Ofs);
    lda(((Sprite_X_Position) + (4)));
    // <conv.chunks.Comment object at 0x1057bf440>
    clc();
    adc(0x4);
    sta(0x4);
    sec();
    sbc(0x6);
    BPL(ChkFBCl);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1057bf6b0>
    // <conv.chunks.Comment object at 0x1057bf800>
    // <conv.chunks.Comment object at 0x1057bf740>
    // <conv.chunks.Comment object at 0x1057bf9e0>
    // <conv.chunks.Comment object at 0x1057bfa70>
    // <conv.chunks.Comment object at 0x1057bfc20>
    // <conv.chunks.Comment object at 0x1057bfd70>
    adc(0x1);
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // <conv.chunks.Comment object at 0x1057bfe60>
    cmp(0x8);
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // <conv.chunks.Comment object at 0x1057bffe0>
    // <conv.chunks.Comment object at 0x1057c4200>
    lda(0x5);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x1057c4320>
    BEQ(NoColFB);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1057c45f0>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, FirebarYPos), y);
    inc(0x5);
    // <conv.chunks.Comment object at 0x1057c4860>
    // <conv.chunks.Comment object at 0x1057c49e0>
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // <conv.chunks.Comment object at 0x1057c4bf0>
    ldx(0x1);
    lda(0x4);
    cmp(0x6);
    BCS(SetSDir);
    inx();
    JMP(SetSDir);
}

int SetSDir() {
    // <conv.chunks.Comment object at 0x1057c4da0>
    // <conv.chunks.Comment object at 0x1057c4ce0>
    // <conv.chunks.Comment object at 0x1057c4f50>
    // <conv.chunks.Comment object at 0x1057c5130>
    // <conv.chunks.Comment object at 0x1057c51c0>
    stx(Enemy_MovingDir);
    ldx(0x0);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1057c5460>
    pha();
    JSR(InjurePlayer);
    // <conv.chunks.Comment object at 0x1057c55e0>
    pla();
    sta(0x0);
    JMP(NoColFB);
}

int NoColFB() {
    // <conv.chunks.Comment object at 0x1057c57c0>
    // <conv.chunks.Comment object at 0x1057c5850>
    pla();
    clc();
    // <conv.chunks.Comment object at 0x1057c5a00>
    adc(0x4);
    sta(0x6);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1057c5af0>
    rts();
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1057c5e80>
    // <conv.chunks.Comment object at 0x1057c5f10>
    cmp(0x9);
    BCC(GetHAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1057c6090>
    // <conv.chunks.Comment object at 0x1057c6240>
    clc();
    adc(0x1);
    JMP(GetHAdder);
}

int GetHAdder() {
    // <conv.chunks.Comment object at 0x1057c6450>
    sta(0x1);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1057c6510>
    // <conv.chunks.Comment object at 0x1057c66f0>
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1057c6960>
    // <conv.chunks.Comment object at 0x1057c6930>
    // <conv.chunks.Comment object at 0x1057c6b10>
    sta(0x1);
    pla();
    pha();
    // <conv.chunks.Comment object at 0x1057c6cf0>
    // <conv.chunks.Comment object at 0x1057c6e40>
    clc();
    adc(0x8);
    anda(0b1111);
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1057c6f60>
    // <conv.chunks.Comment object at 0x1057c6ff0>
    // <conv.chunks.Comment object at 0x1057c71a0>
    BCC(GetVAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1057c73b0>
    clc();
    adc(0x1);
    JMP(GetVAdder);
}

int GetVAdder() {
    // <conv.chunks.Comment object at 0x1057c75c0>
    sta(0x2);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x1057c7740>
    clc();
    adc(0x2);
    // <conv.chunks.Comment object at 0x1057c7aa0>
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x1057c7c20>
    sta(0x2);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x1057c7e00>
    // <conv.chunks.Comment object at 0x1057c7f50>
    lsr();
    lsr();
    tay();
    lda(offsetof(G, FirebarMirrorData), y);
    sta(0x3);
    // <conv.chunks.Comment object at 0x1057cc170>
    // <conv.chunks.Comment object at 0x1057cc200>
    // <conv.chunks.Comment object at 0x1057cc3b0>
    rts();
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(FlyCC);
    // <conv.chunks.Comment object at 0x1057cc650>
    // <conv.chunks.Comment object at 0x1057ccce0>
    // <conv.chunks.Comment object at 0x1057cce00>
    lda(0x0);
    sta(Enemy_SprAttrib, x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // <conv.chunks.Comment object at 0x1057ccfb0>
    // <conv.chunks.Comment object at 0x1057cd190>
    // <conv.chunks.Comment object at 0x1057cd2b0>
    JSR(MoveEnemyHorizontally);
    ldy(0xd);
    lda(0x5);
    JSR(SetXMoveAmt);
    // <conv.chunks.Comment object at 0x1057cd430>
    // <conv.chunks.Comment object at 0x1057cd4c0>
    // <conv.chunks.Comment object at 0x1057cd5e0>
    lda(Enemy_Y_MoveForce, x);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1057cd8e0>
    // <conv.chunks.Comment object at 0x1057cd9a0>
    lsr();
    lsr();
    tay();
    lda(Enemy_Y_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x1057cdb80>
    // <conv.chunks.Comment object at 0x1057cdc10>
    // <conv.chunks.Comment object at 0x1057cdd90>
    sbc(offsetof(G, PRandomSubtracter), y);
    BPL(AddCCF);
    // <conv.chunks.Comment object at 0x1057cdf40>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1057ce1b0>
    adc(0x1);
    JMP(AddCCF);
}

int AddCCF() {
    // <conv.chunks.Comment object at 0x1057ce2a0>
    cmp(0x8);
    BCS(BPGet);
    // <conv.chunks.Comment object at 0x1057ce420>
    lda(Enemy_Y_MoveForce, x);
    clc();
    adc(0x10);
    // <conv.chunks.Comment object at 0x1057ce7b0>
    sta(Enemy_Y_MoveForce, x);
    lsr();
    // <conv.chunks.Comment object at 0x1057cea20>
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}

int BPGet() {
    // <conv.chunks.Comment object at 0x1057cecf0>
    lda(offsetof(G, FlyCCBPriority), y);
    sta(Enemy_SprAttrib, x);
    rts();
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
    // <conv.chunks.Comment object at 0x1057cf1d0>
    // <conv.chunks.Comment object at 0x1057cf4a0>
    // <conv.chunks.Comment object at 0x1057cf5c0>
    // <conv.chunks.Comment object at 0x1057cf710>
    // <conv.chunks.Comment object at 0x1057cf830>
    lda(Enemy_State, x);
    BEQ(Fr12S);
    // <conv.chunks.Comment object at 0x1057cf9e0>
    lda(0x0);
    sta(LakituMoveDirection, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x1057cfb90>
    // <conv.chunks.Comment object at 0x1057cfd70>
    lda(0x10);
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda(Spiny);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x1057e01d0>
    ldy(0x2);
    JMP(LdLDa);
}

int LdLDa() {
    // <conv.chunks.Comment object at 0x1057e0410>
    lda(offsetof(G, LakituDiffAdj), y);
    sta(0x1, y);
    // <conv.chunks.Comment object at 0x1057e0650>
    dey();
    BPL(LdLDa);
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}

int SetLSpd() {
    // <conv.chunks.Comment object at 0x1057e0830>
    // <conv.chunks.Comment object at 0x1057e0980>
    // <conv.chunks.Comment object at 0x1057e0aa0>
    sta(LakituMoveSpeed, x);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1057e0c50>
    lda(LakituMoveDirection, x);
    anda(0x1);
    BNE(SetLMov);
    // <conv.chunks.Comment object at 0x1057e0e90>
    // <conv.chunks.Comment object at 0x1057e0f20>
    lda(LakituMoveSpeed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1057e1220>
    clc();
    adc(0x1);
    sta(LakituMoveSpeed, x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // <conv.chunks.Comment object at 0x1057e1430>
    // <conv.chunks.Comment object at 0x1057e1640>
    // <conv.chunks.Comment object at 0x1057e16d0>
    sty(Enemy_MovingDir, x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(0x0);
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // <conv.chunks.Comment object at 0x1057e19d0>
    // <conv.chunks.Comment object at 0x1057e1a60>
    // <conv.chunks.Comment object at 0x1057e1c10>
    // <conv.chunks.Comment object at 0x1057e1d60>
    lda(0x0);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1057e1df0>
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x1057e2090>
    sta(0x0);
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // <conv.chunks.Comment object at 0x1057e2120>
    lda(0x0);
    cmp(0x3c);
    // <conv.chunks.Comment object at 0x1057e2390>
    BCC(ChkPSpeed);
    lda(0x3c);
    // <conv.chunks.Comment object at 0x1057e2600>
    sta(0x0);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1057e2690>
    cmp(Lakitu);
    BNE(ChkPSpeed);
    tya();
    cmp(LakituMoveDirection, x);
    BEQ(ChkPSpeed);
    lda(LakituMoveDirection, x);
    BEQ(SetLMovD);
    dec(LakituMoveSpeed, x);
    lda(LakituMoveSpeed, x);
    // <conv.chunks.Comment object at 0x1057e2990>
    // <conv.chunks.Comment object at 0x1057e2bd0>
    // <conv.chunks.Comment object at 0x1057e2c60>
    // <conv.chunks.Comment object at 0x1057e2db0>
    // <conv.chunks.Comment object at 0x1057e2ed0>
    // <conv.chunks.Comment object at 0x1057e3020>
    // <conv.chunks.Comment object at 0x1057e3140>
    // <conv.chunks.Comment object at 0x1057e3290>
    BNE(ExMoveLak);
    JMP(SetLMovD);
}

int SetLMovD() {
    // <conv.chunks.Comment object at 0x1057e34d0>
    tya();
    sta(LakituMoveDirection, x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(0x0);
    anda(0b111100);
    lsr();
    // <conv.chunks.Comment object at 0x1057e37d0>
    // <conv.chunks.Comment object at 0x1057e3980>
    lsr();
    sta(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1057e3ad0>
    // <conv.chunks.Comment object at 0x1057e3b60>
    lda(Player_X_Speed);
    BEQ(SubDifAdj);
    // <conv.chunks.Comment object at 0x1057e3dd0>
    lda(ScrollAmount);
    BEQ(SubDifAdj);
    iny();
    // <conv.chunks.Comment object at 0x1057e3fe0>
    // <conv.chunks.Comment object at 0x1057e8170>
    lda(Player_X_Speed);
    cmp(0x19);
    // <conv.chunks.Comment object at 0x1057e82f0>
    BCC(ChkSpinyO);
    lda(ScrollAmount);
    cmp(0x2);
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // <conv.chunks.Comment object at 0x1057e85f0>
    // <conv.chunks.Comment object at 0x1057e8680>
    // <conv.chunks.Comment object at 0x1057e8860>
    // <conv.chunks.Comment object at 0x1057e88f0>
    lda(Enemy_ID, x);
    cmp(Spiny);
    BNE(ChkEmySpd);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1057e8ad0>
    // <conv.chunks.Comment object at 0x1057e8cb0>
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // <conv.chunks.Comment object at 0x1057e8ec0>
    lda(Enemy_Y_Speed, x);
    BNE(SubDifAdj);
    ldy(0x0);
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // <conv.chunks.Comment object at 0x1057e9040>
    // <conv.chunks.Comment object at 0x1057e9160>
    // <conv.chunks.Comment object at 0x1057e91f0>
    lda(0x1, y);
    ldy(0x0);
    JMP(SPixelLak);
}

int SPixelLak() {
    // <conv.chunks.Comment object at 0x1057e9430>
    // <conv.chunks.Comment object at 0x1057e94c0>
    sec();
    sbc(0x1);
    // <conv.chunks.Comment object at 0x1057e9610>
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // <conv.chunks.Comment object at 0x1057e97c0>
    // <conv.chunks.Comment object at 0x1057e98e0>
    rts();
    JMP(BridgeCollapse);
}

int BridgeCollapse() {
    ldx(BowserFront_Offset);
    lda(Enemy_ID, x);
    cmp(Bowser);
    BNE(SetM2);
    stx(ObjectOffset);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1057e9d30>
    // <conv.chunks.Comment object at 0x1057e9b20>
    // <conv.chunks.Comment object at 0x1057ea690>
    // <conv.chunks.Comment object at 0x1057ea6f0>
    // <conv.chunks.Comment object at 0x1057ea930>
    // <conv.chunks.Comment object at 0x1057eaa50>
    BEQ(RemoveBridge);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1057eac90>
    BEQ(SetM2);
    lda(Enemy_Y_Position, x);
    cmp(0xe0);
    // <conv.chunks.Comment object at 0x1057eaed0>
    // <conv.chunks.Comment object at 0x1057eb020>
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // <conv.chunks.Comment object at 0x1057eb230>
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
    // <conv.chunks.Comment object at 0x1057eb9b0>
    // <conv.chunks.Comment object at 0x1057ebad0>
    lda(0x4);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x1057ebc80>
    lda(BowserBodyControls);
    eor(0x1);
    // <conv.chunks.Comment object at 0x1057ebf20>
    sta(BowserBodyControls);
    lda(0x22);
    // <conv.chunks.Comment object at 0x1057f0170>
    sta(0x5);
    ldy(BridgeCollapseOffset);
    lda(offsetof(G, BridgeCollapseData), y);
    // <conv.chunks.Comment object at 0x1057f0200>
    // <conv.chunks.Comment object at 0x1057f04a0>
    sta(0x4);
    ldy(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x1057f05f0>
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
    // <conv.chunks.Comment object at 0x1057f0890>
    // <conv.chunks.Comment object at 0x1057f0920>
    // <conv.chunks.Comment object at 0x1057f0ad0>
    // <conv.chunks.Comment object at 0x1057f0bf0>
    // <conv.chunks.Comment object at 0x1057f0d10>
    // <conv.chunks.Comment object at 0x1057f0e30>
    // <conv.chunks.Comment object at 0x1057f0f50>
    // <conv.chunks.Comment object at 0x1057f1070>
    // <conv.chunks.Comment object at 0x1057f1190>
    lda(BridgeCollapseOffset);
    cmp(0xf);
    BNE(NoBFall);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x1057f13a0>
    // <conv.chunks.Comment object at 0x1057f1430>
    // <conv.chunks.Comment object at 0x1057f1610>
    lda(0b1000000);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1057f1820>
    lda(Sfx_BowserFall);
    sta(Square2SoundQueue);
    JMP(NoBFall);
}

int NoBFall() {
    // <conv.chunks.Comment object at 0x1057f1a60>
    // <conv.chunks.Comment object at 0x1057f1b80>
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x1057f1dc0>
    // <conv.chunks.Comment object at 0x1057f2120>
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
    // <conv.chunks.Comment object at 0x1057f26f0>
    // <conv.chunks.Comment object at 0x1057f2780>
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta(EnemyFrenzyBuffer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1057f2990>
    // <conv.chunks.Comment object at 0x1057f2a20>
    // <conv.chunks.Comment object at 0x1057f2b40>
    // <conv.chunks.Comment object at 0x1057f2c60>
    rts();
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
    // <conv.chunks.Comment object at 0x1057f2ea0>
    // <conv.chunks.Comment object at 0x1057f3050>
    // <conv.chunks.Comment object at 0x1057f3170>
    // <conv.chunks.Comment object at 0x1057f3290>
    // <conv.chunks.Comment object at 0x1057f33b0>
    lda(BowserBodyControls);
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // <conv.chunks.Comment object at 0x1057f3500>
    // <conv.chunks.Comment object at 0x1057f3650>
    // <conv.chunks.Comment object at 0x1057f3770>
    dec(BowserFeetCounter);
    BNE(ResetMDr);
    lda(0x20);
    // <conv.chunks.Comment object at 0x1057f38f0>
    // <conv.chunks.Comment object at 0x1057f3a10>
    sta(BowserFeetCounter);
    lda(BowserBodyControls);
    eor(0b1);
    // <conv.chunks.Comment object at 0x1057f3c20>
    // <conv.chunks.Comment object at 0x1057f3d40>
    sta(BowserBodyControls);
    JMP(ResetMDr);
}

int ResetMDr() {
    // <conv.chunks.Comment object at 0x1057f3f50>
    lda(FrameCounter);
    anda(0b1111);
    BNE(B_FaceP);
    lda(0x2);
    sta(Enemy_MovingDir, x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // <conv.chunks.Comment object at 0x1057fc0e0>
    // <conv.chunks.Comment object at 0x1057fc200>
    // <conv.chunks.Comment object at 0x1057fc350>
    // <conv.chunks.Comment object at 0x1057fc3e0>
    // <conv.chunks.Comment object at 0x1057fc5c0>
    lda(EnemyFrameTimer, x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // <conv.chunks.Comment object at 0x1057fc770>
    // <conv.chunks.Comment object at 0x1057fc890>
    // <conv.chunks.Comment object at 0x1057fc9b0>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1057fcb30>
    lda(0x2);
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1057fcd70>
    lda(0x20);
    sta(EnemyFrameTimer, x);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x1057fcf80>
    // <conv.chunks.Comment object at 0x1057fd160>
    lda(Enemy_X_Position, x);
    cmp(0xc8);
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // <conv.chunks.Comment object at 0x1057fd3a0>
    // <conv.chunks.Comment object at 0x1057fd430>
    // <conv.chunks.Comment object at 0x1057fd5e0>
    lda(FrameCounter);
    anda(0b11);
    BNE(HammerChk);
    // <conv.chunks.Comment object at 0x1057fd820>
    lda(Enemy_X_Position, x);
    cmp(BowserOrigXPos);
    BNE(GetDToO);
    // <conv.chunks.Comment object at 0x1057fda60>
    // <conv.chunks.Comment object at 0x1057fdb80>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1057fddf0>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(MaxRangeFromOrigin);
    JMP(GetDToO);
}

int GetDToO() {
    lda(Enemy_X_Position, x);
    clc();
    adc(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1057fe3c0>
    // <conv.chunks.Comment object at 0x1057fe450>
    sta(Enemy_X_Position, x);
    ldy(Enemy_MovingDir, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x1057fe7b0>
    BEQ(HammerChk);
    ldy(0xff);
    sec();
    sbc(BowserOrigXPos);
    BPL(CompDToO);
    // <conv.chunks.Comment object at 0x1057fe9c0>
    // <conv.chunks.Comment object at 0x1057feb10>
    // <conv.chunks.Comment object at 0x1057feba0>
    // <conv.chunks.Comment object at 0x1057fecc0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1057fef00>
    adc(0x1);
    ldy(0x1);
    JMP(CompDToO);
}

int CompDToO() {
    // <conv.chunks.Comment object at 0x1057feff0>
    // <conv.chunks.Comment object at 0x1057ff110>
    cmp(MaxRangeFromOrigin);
    BCC(HammerChk);
    sty(BowserMovementSpeed);
    JMP(HammerChk);
}

int HammerChk() {
    // <conv.chunks.Comment object at 0x1057ff2f0>
    // <conv.chunks.Comment object at 0x1057ff410>
    // <conv.chunks.Comment object at 0x1057ff530>
    lda(EnemyFrameTimer, x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x1057ff6b0>
    // <conv.chunks.Comment object at 0x1057ff7d0>
    // <conv.chunks.Comment object at 0x1057ff8f0>
    cmp(World6);
    BCC(SetHmrTmr);
    // <conv.chunks.Comment object at 0x1057ffa40>
    lda(FrameCounter);
    anda(0b11);
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // <conv.chunks.Comment object at 0x1057ffd40>
    // <conv.chunks.Comment object at 0x1057ffe60>
    // <conv.chunks.Comment object at 0x1057fff80>
    // <conv.chunks.Comment object at 0x1058040e0>
    lda(Enemy_Y_Position, x);
    cmp(0x80);
    BCC(ChkFireB);
    // <conv.chunks.Comment object at 0x105804260>
    // <conv.chunks.Comment object at 0x1058042f0>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1058045c0>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(EnemyFrameTimer, x);
    JMP(SkipToFB);
}

int SkipToFB() {
    // <conv.chunks.Comment object at 0x105804770>
    // <conv.chunks.Comment object at 0x1058048c0>
    // <conv.chunks.Comment object at 0x105804a10>
    JMP(ChkFireB);
    JMP(MakeBJump);
}

int MakeBJump() {
    // <conv.chunks.Comment object at 0x105804b60>
    cmp(0x1);
    BNE(ChkFireB);
    dec(Enemy_Y_Position, x);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x105804c20>
    // <conv.chunks.Comment object at 0x105804dd0>
    // <conv.chunks.Comment object at 0x105804f20>
    lda(0xfe);
    sta(Enemy_Y_Speed, x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // <conv.chunks.Comment object at 0x1058050a0>
    // <conv.chunks.Comment object at 0x105805280>
    lda(WorldNumber);
    cmp(World8);
    BEQ(SpawnFBr);
    cmp(World6);
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // <conv.chunks.Comment object at 0x1058053d0>
    // <conv.chunks.Comment object at 0x105805430>
    // <conv.chunks.Comment object at 0x105805640>
    // <conv.chunks.Comment object at 0x1058056a0>
    // <conv.chunks.Comment object at 0x1058058b0>
    lda(BowserFireBreathTimer);
    BNE(BowserGfxHandler);
    // <conv.chunks.Comment object at 0x105805a00>
    lda(0x20);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x105805b80>
    lda(BowserBodyControls);
    eor(0b10000000);
    sta(BowserBodyControls);
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x105805e20>
    // <conv.chunks.Comment object at 0x105805f40>
    // <conv.chunks.Comment object at 0x105806060>
    // <conv.chunks.Comment object at 0x105806180>
    ldy(SecondaryHardMode);
    BEQ(SetFBTmr);
    // <conv.chunks.Comment object at 0x105806390>
    sec();
    sbc(0x10);
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // <conv.chunks.Comment object at 0x105806540>
    // <conv.chunks.Comment object at 0x1058065d0>
    sta(BowserFireBreathTimer);
    lda(BowserFlame);
    sta(EnemyFrenzyBuffer);
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(0x10);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x105806a50>
    // <conv.chunks.Comment object at 0x105806b70>
    // <conv.chunks.Comment object at 0x105806c00>
    lsr();
    BCC(CopyFToR);
    ldy(0xf0);
    JMP(CopyFToR);
}

int CopyFToR() {
    // <conv.chunks.Comment object at 0x105806e70>
    // <conv.chunks.Comment object at 0x105806f90>
    // <conv.chunks.Comment object at 0x105807020>
    tya();
    clc();
    adc(Enemy_X_Position, x);
    ldy(DuplicateObj_Offset);
    sta(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x105807230>
    // <conv.chunks.Comment object at 0x105807380>
    // <conv.chunks.Comment object at 0x1058074a0>
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x8);
    sta(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x105807740>
    // <conv.chunks.Comment object at 0x1058077d0>
    // <conv.chunks.Comment object at 0x105807860>
    lda(Enemy_State, x);
    sta(Enemy_State, y);
    // <conv.chunks.Comment object at 0x105807b60>
    lda(Enemy_MovingDir, x);
    sta(Enemy_MovingDir, y);
    lda(ObjectOffset);
    // <conv.chunks.Comment object at 0x105807dd0>
    // <conv.chunks.Comment object at 0x105807f20>
    pha();
    ldx(DuplicateObj_Offset);
    // <conv.chunks.Comment object at 0x105810110>
    stx(ObjectOffset);
    lda(Bowser);
    sta(Enemy_ID, x);
    JSR(ProcessBowserHalf);
    // <conv.chunks.Comment object at 0x105810320>
    // <conv.chunks.Comment object at 0x105810380>
    // <conv.chunks.Comment object at 0x1058105c0>
    pla();
    sta(ObjectOffset);
    // <conv.chunks.Comment object at 0x105810770>
    tax();
    lda(0x0);
    // <conv.chunks.Comment object at 0x105810920>
    sta(BowserGfxFlag);
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // <conv.chunks.Comment object at 0x105810b60>
    rts();
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc(BowserGfxFlag);
    JSR(RunRetainerObj);
    // <conv.chunks.Comment object at 0x105810cb0>
    // <conv.chunks.Comment object at 0x105810dd0>
    lda(Enemy_State, x);
    BNE(ExBGfxH);
    // <conv.chunks.Comment object at 0x105811010>
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
    // <conv.chunks.Comment object at 0x105811700>
    // <conv.chunks.Comment object at 0x105811820>
    // <conv.chunks.Comment object at 0x105811d90>
    // <conv.chunks.Comment object at 0x105811eb0>
    sta(BowserFlameTimerCtrl);
    lda(offsetof(G, FlameTimerData), y);
    JMP(ExFl);
}

int ExFl() {
    rts();
    JMP(ProcBowserFlame);
}

int ProcBowserFlame() {
    lda(TimerControl);
    BNE(SetGfxF);
    lda(0x40);
    // <conv.chunks.Comment object at 0x105812330>
    // <conv.chunks.Comment object at 0x105812450>
    // <conv.chunks.Comment object at 0x1058125a0>
    ldy(SecondaryHardMode);
    BEQ(SFlmX);
    lda(0x60);
    JMP(SFlmX);
}

int SFlmX() {
    // <conv.chunks.Comment object at 0x1058127b0>
    // <conv.chunks.Comment object at 0x105812900>
    // <conv.chunks.Comment object at 0x105812990>
    sta(0x0);
    lda(Enemy_X_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x105812cf0>
    sbc(0x0);
    sta(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x105812d80>
    lda(Enemy_X_Position, x);
    sbc(0x1);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1058130e0>
    // <conv.chunks.Comment object at 0x105813170>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x105813470>
    sta(Enemy_PageLoc, x);
    ldy(BowserFlamePRandomOfs, x);
    lda(Enemy_Y_Position, x);
    cmp(offsetof(G, FlameYPosData), y);
    BEQ(SetGfxF);
    // <conv.chunks.Comment object at 0x1058136b0>
    // <conv.chunks.Comment object at 0x105813800>
    // <conv.chunks.Comment object at 0x105813950>
    // <conv.chunks.Comment object at 0x105813aa0>
    clc();
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_Y_Position, x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // <conv.chunks.Comment object at 0x105813c80>
    // <conv.chunks.Comment object at 0x105813dd0>
    // <conv.chunks.Comment object at 0x105813f20>
    JSR(RelativeEnemyPosition);
    lda(Enemy_State, x);
    BNE(ExFl);
    lda(0x51);
    sta(0x0);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x10581c0e0>
    // <conv.chunks.Comment object at 0x10581c230>
    // <conv.chunks.Comment object at 0x10581c380>
    // <conv.chunks.Comment object at 0x10581c4d0>
    // <conv.chunks.Comment object at 0x10581c560>
    lda(FrameCounter);
    anda(0b10);
    BEQ(FlmeAt);
    ldy(0x82);
    JMP(FlmeAt);
}

int FlmeAt() {
    // <conv.chunks.Comment object at 0x10581c7d0>
    // <conv.chunks.Comment object at 0x10581c8f0>
    // <conv.chunks.Comment object at 0x10581ca40>
    // <conv.chunks.Comment object at 0x10581cad0>
    sty(0x1);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x10581cc80>
    ldx(0x0);
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda(Enemy_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x10581cf50>
    // <conv.chunks.Comment object at 0x10581d070>
    lda(0x0);
    sta(Sprite_Tilenumber, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x10581d1c0>
    // <conv.chunks.Comment object at 0x10581d430>
    lda(0x1);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x10581d4c0>
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x10581d850>
    clc();
    adc(0x8);
    sta(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x10581da90>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x3);
    // <conv.chunks.Comment object at 0x10581de20>
    // <conv.chunks.Comment object at 0x10581dee0>
    // <conv.chunks.Comment object at 0x10581df70>
    BCC(DrawFlameLoop);
    ldx(ObjectOffset);
    JSR(GetEnemyOffscreenBits);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_OffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x10581e180>
    // <conv.chunks.Comment object at 0x10581e2a0>
    // <conv.chunks.Comment object at 0x10581e3c0>
    // <conv.chunks.Comment object at 0x10581e510>
    // <conv.chunks.Comment object at 0x10581e660>
    pha();
    BCC(M3FOfs);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(M3FOfs);
}

int M3FOfs() {
    // <conv.chunks.Comment object at 0x10581e780>
    // <conv.chunks.Comment object at 0x10581e8d0>
    // <conv.chunks.Comment object at 0x10581e960>
    // <conv.chunks.Comment object at 0x10581ec00>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10581ed50>
    pha();
    BCC(M2FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10581ee70>
    // <conv.chunks.Comment object at 0x10581efc0>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // <conv.chunks.Comment object at 0x10581f2c0>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10581f410>
    pha();
    BCC(M1FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10581f530>
    // <conv.chunks.Comment object at 0x10581f680>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // <conv.chunks.Comment object at 0x10581f980>
    pla();
    lsr();
    BCC(ExFlmeD);
    // <conv.chunks.Comment object at 0x10581fad0>
    // <conv.chunks.Comment object at 0x10581fb60>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // <conv.chunks.Comment object at 0x10581fd10>
    // <conv.chunks.Comment object at 0x10581ff20>
    rts();
    JMP(RunFireworks);
}

int RunFireworks() {
    dec(ExplosionTimerCounter, x);
    BNE(SetupExpl);
    // <conv.chunks.Comment object at 0x1058280e0>
    // <conv.chunks.Comment object at 0x105828230>
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    inc(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x1058283b0>
    // <conv.chunks.Comment object at 0x105828590>
    lda(ExplosionGfxCounter, x);
    cmp(0x3);
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // <conv.chunks.Comment object at 0x105828800>
    // <conv.chunks.Comment object at 0x105828890>
    // <conv.chunks.Comment object at 0x105828a40>
    JSR(RelativeEnemyPosition);
    lda(Enemy_Rel_YPos);
    sta(Fireball_Rel_YPos);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x105828b90>
    // <conv.chunks.Comment object at 0x105828cb0>
    // <conv.chunks.Comment object at 0x105828dd0>
    sta(Fireball_Rel_XPos);
    ldy(Enemy_SprDataOffset, x);
    lda(ExplosionGfxCounter, x);
    JSR(DrawExplosion_Fireworks);
    // <conv.chunks.Comment object at 0x105828fe0>
    // <conv.chunks.Comment object at 0x105829130>
    // <conv.chunks.Comment object at 0x105829280>
    rts();
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x105829460>
    sta(Enemy_Flag, x);
    lda(Sfx_Blast);
    // <conv.chunks.Comment object at 0x1058296a0>
    sta(Square2SoundQueue);
    lda(0x5);
    // <conv.chunks.Comment object at 0x1058298b0>
    sta(((DigitModifier) + (4)));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x105829df0>
    sta(EnemyFrenzyBuffer);
    lda(StarFlagTaskControl);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x10582a660>
    // <conv.chunks.Comment object at 0x10582a780>
    BCS(StarFlagExit);
    JSR(JumpEngine);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(0x5);
    lda(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x10582aae0>
    // <conv.chunks.Comment object at 0x10582ae40>
    cmp(0x1);
    BEQ(SetFWC);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x10582b110>
    // <conv.chunks.Comment object at 0x10582b2f0>
    cmp(0x3);
    BEQ(SetFWC);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10582b470>
    // <conv.chunks.Comment object at 0x10582b650>
    cmp(0x6);
    BEQ(SetFWC);
    lda(0xff);
    JMP(SetFWC);
}

int SetFWC() {
    // <conv.chunks.Comment object at 0x10582b7d0>
    // <conv.chunks.Comment object at 0x10582b9b0>
    // <conv.chunks.Comment object at 0x10582ba40>
    sta(FireworksCounter);
    sty(Enemy_State, x);
    JMP(IncrementSFTask1);
}

int IncrementSFTask1() {
    inc(StarFlagTaskControl);
    JMP(StarFlagExit);
}

int StarFlagExit() {
    rts();
    JMP(AwardGameTimerPoints);
}

int AwardGameTimerPoints() {
    lda(GameTimerDisplay);
    // <conv.chunks.Comment object at 0x105830080>
    ora(((GameTimerDisplay) + (1)));
    ora(((GameTimerDisplay) + (2)));
    BEQ(IncrementSFTask1);
    // <conv.chunks.Comment object at 0x105830500>
    lda(FrameCounter);
    anda(0b100);
    BEQ(NoTTick);
    // <conv.chunks.Comment object at 0x105830710>
    // <conv.chunks.Comment object at 0x105830830>
    lda(Sfx_TimerTick);
    sta(Square2SoundQueue);
    JMP(NoTTick);
}

int NoTTick() {
    // <conv.chunks.Comment object at 0x105830a70>
    // <conv.chunks.Comment object at 0x105830b90>
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
    // <conv.chunks.Comment object at 0x105831460>
    // <conv.chunks.Comment object at 0x1058314f0>
    // <conv.chunks.Comment object at 0x1058316a0>
    // <conv.chunks.Comment object at 0x1058317f0>
    // <conv.chunks.Comment object at 0x105831880>
    JSR(DigitsMathRoutine);
    lda(CurrentPlayer);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x105831a90>
    // <conv.chunks.Comment object at 0x105831be0>
    // <conv.chunks.Comment object at 0x105831ca0>
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
    // <conv.chunks.Comment object at 0x1058320c0>
    // <conv.chunks.Comment object at 0x105832210>
    // <conv.chunks.Comment object at 0x1058322a0>
    // <conv.chunks.Comment object at 0x105832480>
    // <conv.chunks.Comment object at 0x1058325d0>
    // <conv.chunks.Comment object at 0x1058326f0>
    lda(FireworksCounter);
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // <conv.chunks.Comment object at 0x105832870>
    // <conv.chunks.Comment object at 0x105832990>
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
    // <conv.chunks.Comment object at 0x105832cf0>
    // <conv.chunks.Comment object at 0x105832e10>
    // <conv.chunks.Comment object at 0x105832f60>
    // <conv.chunks.Comment object at 0x105832ff0>
    lda(Enemy_Rel_YPos);
    clc();
    adc(offsetof(G, StarFlagYPosAdder), x);
    sta(Sprite_Y_Position, y);
    lda(offsetof(G, StarFlagTileData), x);
    sta(Sprite_Tilenumber, y);
    lda(0x22);
    sta(Sprite_Attributes, y);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x105833290>
    // <conv.chunks.Comment object at 0x1058333e0>
    // <conv.chunks.Comment object at 0x105833530>
    // <conv.chunks.Comment object at 0x105833680>
    // <conv.chunks.Comment object at 0x1058337d0>
    // <conv.chunks.Comment object at 0x105833860>
    // <conv.chunks.Comment object at 0x105833a40>
    clc();
    adc(offsetof(G, StarFlagXPosAdder), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x105833bf0>
    // <conv.chunks.Comment object at 0x105833d40>
    iny();
    iny();
    iny();
    // <conv.chunks.Comment object at 0x105833f50>
    // <conv.chunks.Comment object at 0x105840050>
    iny();
    dex();
    BPL(DSFLoop);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1058401a0>
    // <conv.chunks.Comment object at 0x105840230>
    // <conv.chunks.Comment object at 0x105840380>
    rts();
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // <conv.chunks.Comment object at 0x105840560>
    lda(0x6);
    sta(EnemyIntervalTimer, x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc(StarFlagTaskControl);
    // <conv.chunks.Comment object at 0x1058408f0>
    rts();
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
    rts();
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
    // <conv.chunks.Comment object at 0x105841100>
    // <conv.chunks.Comment object at 0x1058411c0>
    // <conv.chunks.Comment object at 0x105841220>
    // <conv.chunks.Comment object at 0x105841370>
    // <conv.chunks.Comment object at 0x105841490>
    // <conv.chunks.Comment object at 0x1058415e0>
    // <conv.chunks.Comment object at 0x105841700>
    // <conv.chunks.Comment object at 0x105841850>
    // <conv.chunks.Comment object at 0x105841970>
    // <conv.chunks.Comment object at 0x105841ac0>
    // <conv.chunks.Comment object at 0x105841be0>
    // <conv.chunks.Comment object at 0x105841d00>
    // <conv.chunks.Comment object at 0x105841e50>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x105842060>
    adc(0x1);
    sta(0x0);
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x105842360>
    cmp(0x21);
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda(PiranhaPlant_Y_Speed, x);
    // <conv.chunks.Comment object at 0x105842690>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x105842900>
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
    // <conv.chunks.Comment object at 0x1058432c0>
    // <conv.chunks.Comment object at 0x105843350>
    lsr();
    BCC(PutinPipe);
    lda(TimerControl);
    BNE(PutinPipe);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105843560>
    // <conv.chunks.Comment object at 0x105843680>
    // <conv.chunks.Comment object at 0x1058437a0>
    // <conv.chunks.Comment object at 0x1058438c0>
    clc();
    adc(PiranhaPlant_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    cmp(0x0);
    BNE(PutinPipe);
    // <conv.chunks.Comment object at 0x105843aa0>
    // <conv.chunks.Comment object at 0x105843bf0>
    // <conv.chunks.Comment object at 0x105843d70>
    // <conv.chunks.Comment object at 0x105843e00>
    lda(0x0);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x105843fe0>
    lda(0x40);
    sta(EnemyFrameTimer, x);
    JMP(PutinPipe);
}

int PutinPipe() {
    lda(0b100000);
    sta(Enemy_SprAttrib, x);
    rts();
    JMP(FirebarSpin);
}

int FirebarSpin() {
    sta(0x7);
    lda(FirebarSpinDirection, x);
    BNE(SpinCounterClockwise);
    ldy(0x18);
    // <conv.chunks.Comment object at 0x105848470>
    // <conv.chunks.Comment object at 0x105848590>
    // <conv.chunks.Comment object at 0x105848710>
    // <conv.chunks.Comment object at 0x1058487d0>
    // <conv.chunks.Comment object at 0x105848860>
    // <conv.chunks.Comment object at 0x1058488f0>
    // <conv.chunks.Comment object at 0x105848aa0>
    // <conv.chunks.Comment object at 0x105848bc0>
    lda(FirebarSpinState_Low, x);
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x105848e30>
    // <conv.chunks.Comment object at 0x105848ef0>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x105849100>
    adc(0x0);
    rts();
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x105849400>
    lda(FirebarSpinState_Low, x);
    sec();
    sbc(0x7);
    // <conv.chunks.Comment object at 0x105849670>
    // <conv.chunks.Comment object at 0x105849730>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x105849940>
    sbc(0x0);
    rts();
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x105849c40>
    // <conv.chunks.Comment object at 0x105849ca0>
    // <conv.chunks.Comment object at 0x105849d00>
    cmp(0x3);
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // <conv.chunks.Comment object at 0x10584a060>
    // <conv.chunks.Comment object at 0x10584a180>
    lda(Enemy_State, x);
    BPL(CheckBalPlatform);
    // <conv.chunks.Comment object at 0x10584a330>
    rts();
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda(PlatformCollisionFlag, x);
    sta(0x0);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x10584a540>
    // <conv.chunks.Comment object at 0x10584a5d0>
    // <conv.chunks.Comment object at 0x10584a750>
    // <conv.chunks.Comment object at 0x10584a7e0>
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(0x2d);
    // <conv.chunks.Comment object at 0x10584abd0>
    cmp(Enemy_Y_Position, x);
    BCC(ChkOtherForFall);
    cpy(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x10584ae10>
    // <conv.chunks.Comment object at 0x10584af60>
    // <conv.chunks.Comment object at 0x10584aff0>
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
    // <conv.chunks.Comment object at 0x10584b710>
    // <conv.chunks.Comment object at 0x10584b860>
    // <conv.chunks.Comment object at 0x10584b9b0>
    // <conv.chunks.Comment object at 0x10584ba40>
    clc();
    adc(0x2);
    sta(Enemy_Y_Position, y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105850050>
    pha();
    lda(PlatformCollisionFlag, x);
    BPL(ColFlg);
    // <conv.chunks.Comment object at 0x105850230>
    // <conv.chunks.Comment object at 0x105850380>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x105850620>
    adc(0x5);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1058507d0>
    lda(Enemy_Y_Speed, x);
    adc(0x0);
    BMI(PlatDn);
    BNE(PlatUp);
    // <conv.chunks.Comment object at 0x1058509e0>
    // <conv.chunks.Comment object at 0x105850a70>
    // <conv.chunks.Comment object at 0x105850c50>
    lda(0x0);
    cmp(0xb);
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // <conv.chunks.Comment object at 0x105850da0>
    // <conv.chunks.Comment object at 0x105850f20>
    // <conv.chunks.Comment object at 0x105851100>
    // <conv.chunks.Comment object at 0x105851250>
    cmp(ObjectOffset);
    BEQ(PlatDn);
    JMP(PlatUp);
}

int PlatUp() {
    // <conv.chunks.Comment object at 0x1058513d0>
    // <conv.chunks.Comment object at 0x105851520>
    JSR(MovePlatformUp);
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}

int PlatSt() {
    // <conv.chunks.Comment object at 0x1058516a0>
    // <conv.chunks.Comment object at 0x1058517c0>
    JSR(StopPlatforms);
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}

int PlatDn() {
    // <conv.chunks.Comment object at 0x105851940>
    // <conv.chunks.Comment object at 0x105851a60>
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}

int DoOtherPlatform() {
    ldy(Enemy_State, x);
    pla();
    // <conv.chunks.Comment object at 0x105851c10>
    // <conv.chunks.Comment object at 0x105851d90>
    sec();
    sbc(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105851eb0>
    clc();
    adc(Enemy_Y_Position, y);
    sta(Enemy_Y_Position, y);
    lda(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x105852090>
    // <conv.chunks.Comment object at 0x1058521e0>
    // <conv.chunks.Comment object at 0x105852330>
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
    // <conv.chunks.Comment object at 0x105852780>
    // <conv.chunks.Comment object at 0x1058528a0>
    // <conv.chunks.Comment object at 0x1058529f0>
    // <conv.chunks.Comment object at 0x105852b40>
    // <conv.chunks.Comment object at 0x105852c90>
    // <conv.chunks.Comment object at 0x105852db0>
    // <conv.chunks.Comment object at 0x105852e40>
    lda(Enemy_Y_Speed, y);
    pha();
    // <conv.chunks.Comment object at 0x105853170>
    pha();
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x105853290>
    // <conv.chunks.Comment object at 0x1058533e0>
    // <conv.chunks.Comment object at 0x105853470>
    lda(0x0);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1058538f0>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(Enemy_Y_Speed, y);
    BMI(EraseR1);
    // <conv.chunks.Comment object at 0x105853bf0>
    // <conv.chunks.Comment object at 0x105853d40>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0xa3);
    // <conv.chunks.Comment object at 0x105853ef0>
    // <conv.chunks.Comment object at 0x1058601d0>
    sta(((VRAM_Buffer1) + (4)), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // <conv.chunks.Comment object at 0x1058604d0>
    // <conv.chunks.Comment object at 0x1058605f0>
    lda(0x24);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x1058606e0>
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
    // <conv.chunks.Comment object at 0x105860b90>
    // <conv.chunks.Comment object at 0x105860d10>
    // <conv.chunks.Comment object at 0x105860dd0>
    // <conv.chunks.Comment object at 0x105860e60>
    // <conv.chunks.Comment object at 0x105860ef0>
    // <conv.chunks.Comment object at 0x1058610d0>
    // <conv.chunks.Comment object at 0x105861160>
    // <conv.chunks.Comment object at 0x105861400>
    sta(((VRAM_Buffer1) + (6)), x);
    lda(0x2);
    sta(((VRAM_Buffer1) + (7)), x);
    pla();
    BPL(EraseR2);
    // <conv.chunks.Comment object at 0x105861730>
    // <conv.chunks.Comment object at 0x105861a00>
    // <conv.chunks.Comment object at 0x105861a90>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (8)), x);
    lda(0xa3);
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // <conv.chunks.Comment object at 0x105861c40>
    // <conv.chunks.Comment object at 0x105861ee0>
    // <conv.chunks.Comment object at 0x105861f70>
    // <conv.chunks.Comment object at 0x105862210>
    // <conv.chunks.Comment object at 0x105862360>
    lda(0x24);
    sta(((VRAM_Buffer1) + (8)), x);
    // <conv.chunks.Comment object at 0x105862450>
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
}

int EndRp() {
    // <conv.chunks.Comment object at 0x1058628d0>
    lda(0x0);
    sta(((VRAM_Buffer1) + (10)), x);
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x105862c30>
    // <conv.chunks.Comment object at 0x105862d80>
    adc(10);
    sta(VRAM_Buffer1_Offset);
    JMP(ExitRp);
}

int ExitRp() {
    // <conv.chunks.Comment object at 0x105862ff0>
    ldx(ObjectOffset);
    rts();
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x105863260>
    // <conv.chunks.Comment object at 0x1058632f0>
    clc();
    adc(0x8);
    ldx(SecondaryHardMode);
    BNE(GetLRp);
    // <conv.chunks.Comment object at 0x1058634d0>
    // <conv.chunks.Comment object at 0x105863560>
    // <conv.chunks.Comment object at 0x105863710>
    clc();
    adc(0x10);
    JMP(GetLRp);
}

int GetLRp() {
    // <conv.chunks.Comment object at 0x1058638f0>
    // <conv.chunks.Comment object at 0x105863980>
    pha();
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(0x2);
    pla();
    anda(0b11110000);
    lsr();
    // <conv.chunks.Comment object at 0x105863c50>
    // <conv.chunks.Comment object at 0x105863da0>
    // <conv.chunks.Comment object at 0x105863ce0>
    // <conv.chunks.Comment object at 0x105863f50>
    // <conv.chunks.Comment object at 0x1058680e0>
    lsr();
    lsr();
    sta(0x0);
    ldx(Enemy_Y_Position, y);
    pla();
    BPL(GetHRp);
    // <conv.chunks.Comment object at 0x1058682c0>
    // <conv.chunks.Comment object at 0x105868350>
    // <conv.chunks.Comment object at 0x105868530>
    // <conv.chunks.Comment object at 0x1058685c0>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // <conv.chunks.Comment object at 0x105868830>
    // <conv.chunks.Comment object at 0x105868980>
    // <conv.chunks.Comment object at 0x105868a10>
    txa();
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x105868b30>
    asl();
    rol();
    pha();
    rol();
    anda(0b11);
    ora(0b100000);
    sta(0x1);
    lda(0x2);
    anda(0x1);
    // <conv.chunks.Comment object at 0x105868d10>
    // <conv.chunks.Comment object at 0x105868dd0>
    // <conv.chunks.Comment object at 0x105868e90>
    // <conv.chunks.Comment object at 0x105868f20>
    // <conv.chunks.Comment object at 0x105869040>
    // <conv.chunks.Comment object at 0x105869190>
    // <conv.chunks.Comment object at 0x105869160>
    // <conv.chunks.Comment object at 0x105869340>
    asl();
    asl();
    ora(0x1);
    sta(0x1);
    pla();
    anda(0b11100000);
    // <conv.chunks.Comment object at 0x105869580>
    // <conv.chunks.Comment object at 0x105869640>
    // <conv.chunks.Comment object at 0x105869610>
    // <conv.chunks.Comment object at 0x1058696d0>
    // <conv.chunks.Comment object at 0x105869910>
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x105869af0>
    // <conv.chunks.Comment object at 0x105869ac0>
    lda(Enemy_Y_Position, y);
    cmp(0xe8);
    BCC(ExPRp);
    // <conv.chunks.Comment object at 0x105869e20>
    // <conv.chunks.Comment object at 0x105869eb0>
    lda(0x0);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x10586a090>
    sta(0x0);
    JMP(ExPRp);
}

int ExPRp() {
    // <conv.chunks.Comment object at 0x10586a330>
    rts();
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x10586a540>
    tax();
    JSR(GetEnemyOffscreenBits);
    // <conv.chunks.Comment object at 0x10586a660>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x10586a7e0>
    lda(Player_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    // <conv.chunks.Comment object at 0x10586aa80>
    lda(Player_Y_Position);
    sta(FloateyNum_Y_Pos, x);
    lda(0x1);
    sta(Enemy_MovingDir, x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta(Enemy_Y_Speed, y);
    // <conv.chunks.Comment object at 0x10586b080>
    // <conv.chunks.Comment object at 0x10586b1a0>
    sta(Enemy_Y_MoveForce, y);
    rts();
    JMP(PlatformFall);
}

int PlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x10586b500>
    pha();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x10586b620>
    pla();
    tax();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x10586b800>
    // <conv.chunks.Comment object at 0x10586b890>
    ldx(ObjectOffset);
    lda(PlatformCollisionFlag, x);
    BMI(ExPF);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}

int ExPF() {
    // <conv.chunks.Comment object at 0x10586baa0>
    // <conv.chunks.Comment object at 0x10586bbf0>
    // <conv.chunks.Comment object at 0x10586bd70>
    // <conv.chunks.Comment object at 0x10586be00>
    // <conv.chunks.Comment object at 0x10586bf20>
    ldx(ObjectOffset);
    rts();
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda(Enemy_Y_Speed, x);
    ora(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1058741d0>
    // <conv.chunks.Comment object at 0x105874320>
    BNE(ChkYCenterPos);
    sta(Enemy_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x105874560>
    lda(Enemy_Y_Position, x);
    cmp(YPlatformTopYPos, x);
    BCS(ChkYCenterPos);
    // <conv.chunks.Comment object at 0x1058747d0>
    // <conv.chunks.Comment object at 0x105874920>
    lda(FrameCounter);
    anda(0b111);
    // <conv.chunks.Comment object at 0x105874b30>
    BNE(SkipIY);
    inc(Enemy_Y_Position, x);
    JMP(SkipIY);
}

int SkipIY() {
    // <conv.chunks.Comment object at 0x105874d70>
    // <conv.chunks.Comment object at 0x105874ec0>
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda(Enemy_Y_Position, x);
    cmp(YPlatformCenterYPos, x);
    // <conv.chunks.Comment object at 0x105875070>
    // <conv.chunks.Comment object at 0x1058751c0>
    BCC(YMDown);
    JSR(MovePlatformUp);
    // <conv.chunks.Comment object at 0x105875430>
    JMP(ChkYPCollision);
    JMP(YMDown);
}

int YMDown() {
    // <conv.chunks.Comment object at 0x105875640>
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
    // <conv.chunks.Comment object at 0x1058757f0>
    // <conv.chunks.Comment object at 0x105875940>
    // <conv.chunks.Comment object at 0x105875a90>
    // <conv.chunks.Comment object at 0x105875be0>
    rts();
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
    // <conv.chunks.Comment object at 0x1058764e0>
    // <conv.chunks.Comment object at 0x1058765a0>
    // <conv.chunks.Comment object at 0x105876630>
    // <conv.chunks.Comment object at 0x1058767b0>
    // <conv.chunks.Comment object at 0x105876900>
    // <conv.chunks.Comment object at 0x105876990>
    // <conv.chunks.Comment object at 0x105876b40>
    // <conv.chunks.Comment object at 0x105876bd0>
    // <conv.chunks.Comment object at 0x105876db0>
    sbc(0x0);
    JMP(SetPVar);
}

int SetPVar() {
    // <conv.chunks.Comment object at 0x105876ea0>
    sta(Player_PageLoc);
    sty(Platform_X_Scroll);
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // <conv.chunks.Comment object at 0x1058770b0>
    // <conv.chunks.Comment object at 0x1058771d0>
    // <conv.chunks.Comment object at 0x1058772f0>
    rts();
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
    // <conv.chunks.Comment object at 0x105877470>
    // <conv.chunks.Comment object at 0x1058775c0>
    // <conv.chunks.Comment object at 0x105877710>
    // <conv.chunks.Comment object at 0x105877830>
    // <conv.chunks.Comment object at 0x105877980>
    rts();
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    lda(PlatformCollisionFlag, x);
    BMI(ExRPl);
    // <conv.chunks.Comment object at 0x105877ad0>
    // <conv.chunks.Comment object at 0x105877b30>
    // <conv.chunks.Comment object at 0x105877c80>
    // <conv.chunks.Comment object at 0x105877d10>
    // <conv.chunks.Comment object at 0x105877ec0>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // <conv.chunks.Comment object at 0x1058800b0>
    // <conv.chunks.Comment object at 0x105880290>
    // <conv.chunks.Comment object at 0x1058803b0>
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
    lda(TimerControl);
    BNE(ExLiftP);
    // <conv.chunks.Comment object at 0x105880a10>
    // <conv.chunks.Comment object at 0x105880b30>
    lda(Enemy_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x105880dd0>
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(Enemy_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1058810a0>
    // <conv.chunks.Comment object at 0x1058811f0>
    // <conv.chunks.Comment object at 0x105881340>
    rts();
    JMP(ChkSmallPlatCollision);
}

int ChkSmallPlatCollision() {
    lda(PlatformCollisionFlag, x);
    BEQ(ExLiftP);
    JSR(PositionPlayerOnS_Plat);
    JMP(ExLiftP);
}

int ExLiftP() {
    // <conv.chunks.Comment object at 0x105881550>
    // <conv.chunks.Comment object at 0x1058816a0>
    // <conv.chunks.Comment object at 0x1058817f0>
    // <conv.chunks.Comment object at 0x105881910>
    rts();
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda(Enemy_ID, x);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x105881b50>
    // <conv.chunks.Comment object at 0x105881ca0>
    BEQ(ExScrnBd);
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x105881eb0>
    ldy(Enemy_ID, x);
    cpy(HammerBro);
    // <conv.chunks.Comment object at 0x1058820f0>
    BEQ(LimitB);
    cpy(PiranhaPlant);
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // <conv.chunks.Comment object at 0x105882330>
    // <conv.chunks.Comment object at 0x105882450>
    // <conv.chunks.Comment object at 0x105882570>
    adc(0x38);
    JMP(ExtendLB);
}

int ExtendLB() {
    // <conv.chunks.Comment object at 0x105882660>
    sbc(0x48);
    sta(0x1);
    // <conv.chunks.Comment object at 0x105882870>
    lda(ScreenLeft_PageLoc);
    sbc(0x0);
    sta(0x0);
    lda(ScreenRight_X_Pos);
    // <conv.chunks.Comment object at 0x105882a50>
    // <conv.chunks.Comment object at 0x105882ba0>
    // <conv.chunks.Comment object at 0x105882c30>
    adc(0x48);
    sta(0x3);
    // <conv.chunks.Comment object at 0x105882ed0>
    lda(ScreenRight_PageLoc);
    adc(0x0);
    sta(0x2);
    lda(Enemy_X_Position, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x1058830b0>
    // <conv.chunks.Comment object at 0x105883200>
    // <conv.chunks.Comment object at 0x105883290>
    // <conv.chunks.Comment object at 0x105883470>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    BMI(TooFar);
    lda(Enemy_X_Position, x);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x1058836b0>
    // <conv.chunks.Comment object at 0x105883740>
    // <conv.chunks.Comment object at 0x1058838f0>
    // <conv.chunks.Comment object at 0x105883a70>
    lda(Enemy_PageLoc, x);
    sbc(0x2);
    BMI(ExScrnBd);
    lda(Enemy_State, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x105883cb0>
    // <conv.chunks.Comment object at 0x105883d40>
    // <conv.chunks.Comment object at 0x105883ec0>
    // <conv.chunks.Comment object at 0x105888050>
    BEQ(ExScrnBd);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x105888260>
    BEQ(ExScrnBd);
    cpy(FlagpoleFlagObject);
    // <conv.chunks.Comment object at 0x105888470>
    BEQ(ExScrnBd);
    cpy(StarFlagObject);
    // <conv.chunks.Comment object at 0x105888680>
    BEQ(ExScrnBd);
    cpy(JumpspringObject);
    BEQ(ExScrnBd);
    JMP(TooFar);
}

int TooFar() {
    // <conv.chunks.Comment object at 0x105888890>
    // <conv.chunks.Comment object at 0x1058889b0>
    // <conv.chunks.Comment object at 0x105888ad0>
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}

int ExScrnBd() {
    // <conv.chunks.Comment object at 0x105888c80>
    rts();
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda(Fireball_State, x);
    BEQ(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x105888e30>
    // <conv.chunks.Comment object at 0x105888dd0>
    // <conv.chunks.Comment object at 0x105889160>
    asl();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x105889310>
    lda(FrameCounter);
    lsr();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x105889550>
    // <conv.chunks.Comment object at 0x1058895e0>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1058897c0>
    asl();
    clc();
    adc(0x1c);
    tay();
    // <conv.chunks.Comment object at 0x105889970>
    // <conv.chunks.Comment object at 0x105889ac0>
    ldx(0x4);
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(0x1);
    // <conv.chunks.Comment object at 0x105889ca0>
    tya();
    pha();
    // <conv.chunks.Comment object at 0x105889e50>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(NoFToECol);
    lda(Enemy_Flag, x);
    BEQ(NoFToECol);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x10588a000>
    // <conv.chunks.Comment object at 0x10588a120>
    // <conv.chunks.Comment object at 0x10588a240>
    // <conv.chunks.Comment object at 0x10588a390>
    // <conv.chunks.Comment object at 0x10588a4b0>
    cmp(0x24);
    BCC(GoombaDie);
    // <conv.chunks.Comment object at 0x10588a660>
    cmp(0x2b);
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // <conv.chunks.Comment object at 0x10588a870>
    // <conv.chunks.Comment object at 0x10588aa20>
    cmp(Goomba);
    BNE(NotGoomba);
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // <conv.chunks.Comment object at 0x10588aab0>
    // <conv.chunks.Comment object at 0x10588acc0>
    // <conv.chunks.Comment object at 0x10588ae10>
    // <conv.chunks.Comment object at 0x10588aea0>
    // <conv.chunks.Comment object at 0x10588b050>
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoFToECol);
    // <conv.chunks.Comment object at 0x10588b1d0>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x10588b3b0>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    BCC(NoFToECol);
    // <conv.chunks.Comment object at 0x10588b560>
    // <conv.chunks.Comment object at 0x10588b6b0>
    // <conv.chunks.Comment object at 0x10588b740>
    // <conv.chunks.Comment object at 0x10588b860>
    // <conv.chunks.Comment object at 0x10588b980>
    lda(0b10000000);
    sta(Fireball_State, x);
    ldx(0x1);
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}

int NoFToECol() {
    // <conv.chunks.Comment object at 0x10588bb90>
    // <conv.chunks.Comment object at 0x10588bd10>
    // <conv.chunks.Comment object at 0x10588bda0>
    // <conv.chunks.Comment object at 0x10588bf20>
    pla();
    tay();
    ldx(0x1);
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x105890440>
    rts();
    JMP(HandleEnemyFBallCol);
}

int HandleEnemyFBallCol() {
    JSR(RelativeEnemyPosition);
    ldx(0x1);
    lda(Enemy_Flag, x);
    BPL(ChkBuzzyBeetle);
    anda(0b1111);
    tax();
    // <conv.chunks.Comment object at 0x105890740>
    // <conv.chunks.Comment object at 0x105890d10>
    // <conv.chunks.Comment object at 0x105890da0>
    // <conv.chunks.Comment object at 0x105890f50>
    // <conv.chunks.Comment object at 0x105891070>
    // <conv.chunks.Comment object at 0x1058911c0>
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
    // <conv.chunks.Comment object at 0x105891d60>
    // <conv.chunks.Comment object at 0x105891e80>
    // <conv.chunks.Comment object at 0x105891fd0>
    // <conv.chunks.Comment object at 0x1058920f0>
    // <conv.chunks.Comment object at 0x105892240>
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
    // <conv.chunks.Comment object at 0x1058923c0>
    // <conv.chunks.Comment object at 0x1058925a0>
    // <conv.chunks.Comment object at 0x1058926c0>
    // <conv.chunks.Comment object at 0x105892810>
    // <conv.chunks.Comment object at 0x105892960>
    // <conv.chunks.Comment object at 0x1058929f0>
    // <conv.chunks.Comment object at 0x105892b10>
    // <conv.chunks.Comment object at 0x105892cc0>
    // <conv.chunks.Comment object at 0x105892d50>
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
    // <conv.chunks.Comment object at 0x1058935f0>
    cmp(Podoboo);
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x105893860>
    cmp(0x15);
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105893c20>
    cmp(PiranhaPlant);
    BNE(StnE);
    // <conv.chunks.Comment object at 0x105893e60>
    lda(Enemy_Y_Position, x);
    adc(0x18);
    // <conv.chunks.Comment object at 0x1058a0110>
    sta(Enemy_Y_Position, x);
    JMP(StnE);
}

int StnE() {
    // <conv.chunks.Comment object at 0x1058a0350>
    JSR(ChkToStunEnemies);
    lda(Enemy_State, x);
    anda(0b11111);
    ora(0b100000);
    // <conv.chunks.Comment object at 0x1058a05f0>
    // <conv.chunks.Comment object at 0x1058a0710>
    sta(Enemy_State, x);
    lda(0x2);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1058a0950>
    // <conv.chunks.Comment object at 0x1058a09e0>
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
    // <conv.chunks.Comment object at 0x1058a12e0>
    // <conv.chunks.Comment object at 0x1058a1400>
    sta(Square1SoundQueue);
    JMP(ExHCF);
}

int ExHCF() {
    // <conv.chunks.Comment object at 0x1058a1610>
    rts();
    JMP(PlayerHammerCollision);
}

int PlayerHammerCollision() {
    lda(FrameCounter);
    lsr();
    BCC(ExPHC);
    lda(TimerControl);
    ora(Misc_OffscreenBits);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x1058a1790>
    // <conv.chunks.Comment object at 0x1058a18e0>
    // <conv.chunks.Comment object at 0x1058a1970>
    // <conv.chunks.Comment object at 0x1058a1ac0>
    // <conv.chunks.Comment object at 0x1058a1be0>
    // <conv.chunks.Comment object at 0x1058a1d00>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1058a1f10>
    asl();
    clc();
    adc(0x24);
    tay();
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCC(ClHCol);
    lda(Misc_Collision_Flag, x);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x1058a20c0>
    // <conv.chunks.Comment object at 0x1058a2210>
    // <conv.chunks.Comment object at 0x1058a22a0>
    // <conv.chunks.Comment object at 0x1058a23c0>
    // <conv.chunks.Comment object at 0x1058a24e0>
    // <conv.chunks.Comment object at 0x1058a2630>
    // <conv.chunks.Comment object at 0x1058a2780>
    lda(0x1);
    sta(Misc_Collision_Flag, x);
    // <conv.chunks.Comment object at 0x1058a2930>
    lda(Misc_X_Speed, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1058a2c30>
    // <conv.chunks.Comment object at 0x1058a2d80>
    adc(0x1);
    sta(Misc_X_Speed, x);
    lda(StarInvincibleTimer);
    BNE(ExPHC);
    JMP(InjurePlayer);
    JMP(ClHCol);
}

int ClHCol() {
    // <conv.chunks.Comment object at 0x1058a2e70>
    // <conv.chunks.Comment object at 0x1058a3050>
    // <conv.chunks.Comment object at 0x1058a3170>
    // <conv.chunks.Comment object at 0x1058a32c0>
    // <conv.chunks.Comment object at 0x1058a33e0>
    lda(0x0);
    sta(Misc_Collision_Flag, x);
    JMP(ExPHC);
}

int ExPHC() {
    rts();
    JMP(HandlePowerUpCollision);
}

int HandlePowerUpCollision() {
    JSR(EraseEnemyObject);
    // <conv.chunks.Comment object at 0x1058a37d0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1058a3950>
    lda(Sfx_PowerUpGrab);
    sta(Square2SoundQueue);
    lda(PowerUpType);
    // <conv.chunks.Comment object at 0x1058a3bf0>
    // <conv.chunks.Comment object at 0x1058a3d10>
    cmp(0x2);
    BCC(Shroom_Flower_PUp);
    // <conv.chunks.Comment object at 0x1058a3e90>
    cmp(0x3);
    BEQ(SetFor1Up);
    lda(0x23);
    sta(StarInvincibleTimer);
    lda(StarPowerMusic);
    // <conv.chunks.Comment object at 0x1058a80e0>
    // <conv.chunks.Comment object at 0x1058a8290>
    // <conv.chunks.Comment object at 0x1058a8320>
    // <conv.chunks.Comment object at 0x1058a84d0>
    sta(AreaMusicQueue);
    rts();
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x1058a87a0>
    BEQ(UpToSuper);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x1058a89b0>
    BNE(NoPUp);
    ldx(ObjectOffset);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1058a8bf0>
    // <conv.chunks.Comment object at 0x1058a8d10>
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
    // <conv.chunks.Comment object at 0x1058a93d0>
    // <conv.chunks.Comment object at 0x1058a9460>
    rts();
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1058a9700>
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
    rts();
    JMP(PlayerEnemyCollision);
}

int PlayerEnemyCollision() {
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x1058a9fd0>
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x1058aa390>
    // <conv.chunks.Comment object at 0x1058aa4e0>
    // <conv.chunks.Comment object at 0x1058aa600>
    // <conv.chunks.Comment object at 0x1058aa750>
    // <conv.chunks.Comment object at 0x1058aa8a0>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x1058aaae0>
    // <conv.chunks.Comment object at 0x1058aab70>
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x1058aae70>
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCS(CheckForPUpCollision);
    // <conv.chunks.Comment object at 0x1058ab0b0>
    // <conv.chunks.Comment object at 0x1058ab1d0>
    // <conv.chunks.Comment object at 0x1058ab2f0>
    // <conv.chunks.Comment object at 0x1058ab410>
    lda(Enemy_CollisionBits, x);
    anda(0b11111110);
    sta(Enemy_CollisionBits, x);
    JMP(NoPECol);
}

int NoPECol() {
    rts();
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
    // <conv.chunks.Comment object at 0x1058abb00>
    // <conv.chunks.Comment object at 0x1058abc20>
    // <conv.chunks.Comment object at 0x1058abd70>
    // <conv.chunks.Comment object at 0x1058abe90>
    lda(StarInvincibleTimer);
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda(Enemy_CollisionBits, x);
    anda(0b1);
    // <conv.chunks.Comment object at 0x1058b0320>
    // <conv.chunks.Comment object at 0x1058b05f0>
    ora(EnemyOffscrBitsMasked, x);
    BNE(ExPEC);
    // <conv.chunks.Comment object at 0x1058b0830>
    lda(0x1);
    ora(Enemy_CollisionBits, x);
    // <conv.chunks.Comment object at 0x1058b09e0>
    sta(Enemy_CollisionBits, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x1058b0ce0>
    BEQ(ChkForPlayerInjury);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x1058b0f20>
    BEQ(InjurePlayer);
    cpy(Podoboo);
    // <conv.chunks.Comment object at 0x1058b1130>
    BEQ(InjurePlayer);
    cpy(BulletBill_CannonVar);
    // <conv.chunks.Comment object at 0x1058b1370>
    BEQ(ChkForPlayerInjury);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x1058b1580>
    BCS(InjurePlayer);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x1058b1790>
    BEQ(InjurePlayer);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1058b19a0>
    asl();
    BCS(ChkForPlayerInjury);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1058b1c70>
    anda(0b111);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x1058b1eb0>
    BCC(ChkForPlayerInjury);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1058b20c0>
    cmp(Goomba);
    BEQ(ExPEC);
    lda(Sfx_EnemySmack);
    // <conv.chunks.Comment object at 0x1058b2450>
    sta(Square1SoundQueue);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1058b2660>
    ora(0b10000000);
    sta(Enemy_State, x);
    JSR(EnemyFacePlayer);
    lda(offsetof(G, KickedShellXSpdData), y);
    // <conv.chunks.Comment object at 0x1058b29c0>
    // <conv.chunks.Comment object at 0x1058b2ae0>
    sta(Enemy_X_Speed, x);
    lda(0x3);
    clc();
    // <conv.chunks.Comment object at 0x1058b2d50>
    // <conv.chunks.Comment object at 0x1058b2ea0>
    adc(StompChainCounter);
    ldy(EnemyIntervalTimer, x);
    cpy(0x3);
    BCS(KSPts);
    lda(offsetof(G, KickedShellPtsData), y);
    JMP(KSPts);
}

int KSPts() {
    // <conv.chunks.Comment object at 0x1058b3020>
    // <conv.chunks.Comment object at 0x1058b3170>
    // <conv.chunks.Comment object at 0x1058b3200>
    // <conv.chunks.Comment object at 0x1058b33e0>
    // <conv.chunks.Comment object at 0x1058b3530>
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}

int ExPEC() {
    // <conv.chunks.Comment object at 0x1058b36b0>
    rts();
    JMP(ChkForPlayerInjury);
}

int ChkForPlayerInjury() {
    lda(Player_Y_Speed);
    BMI(ChkInj);
    BNE(EnemyStomped);
    JMP(ChkInj);
}

int ChkInj() {
    // <conv.chunks.Comment object at 0x1058b3800>
    // <conv.chunks.Comment object at 0x1058b3920>
    // <conv.chunks.Comment object at 0x1058b3a70>
    // <conv.chunks.Comment object at 0x1058b3b90>
    lda(Enemy_ID, x);
    cmp(Bloober);
    BCC(ChkETmrs);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1058b3f50>
    clc();
    adc(0xc);
    cmp(Enemy_Y_Position, x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // <conv.chunks.Comment object at 0x1058c01a0>
    // <conv.chunks.Comment object at 0x1058c0380>
    // <conv.chunks.Comment object at 0x1058c04a0>
    lda(StompTimer);
    BNE(EnemyStomped);
    lda(InjuryTimer);
    BNE(ExInjColRoutines);
    // <conv.chunks.Comment object at 0x1058c05f0>
    // <conv.chunks.Comment object at 0x1058c0710>
    // <conv.chunks.Comment object at 0x1058c0830>
    lda(Player_Rel_XPos);
    cmp(Enemy_Rel_XPos);
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // <conv.chunks.Comment object at 0x1058c0a40>
    // <conv.chunks.Comment object at 0x1058c0b60>
    // <conv.chunks.Comment object at 0x1058c0cb0>
    // <conv.chunks.Comment object at 0x1058c0dd0>
    lda(Enemy_MovingDir, x);
    cmp(0x1);
    BNE(InjurePlayer);
    // <conv.chunks.Comment object at 0x1058c0f80>
    // <conv.chunks.Comment object at 0x1058c1010>
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
    // <conv.chunks.Comment object at 0x1058c1580>
    // <conv.chunks.Comment object at 0x1058c16a0>
    // <conv.chunks.Comment object at 0x1058c17c0>
    lda(0x8);
    sta(InjuryTimer);
    // <conv.chunks.Comment object at 0x1058c1940>
    asl();
    sta(Square1SoundQueue);
    JSR(GetPlayerColors);
    lda(0xa);
    JMP(SetKRout);
}

int SetKRout() {
    // <conv.chunks.Comment object at 0x1058c1b80>
    // <conv.chunks.Comment object at 0x1058c1ca0>
    // <conv.chunks.Comment object at 0x1058c1dc0>
    // <conv.chunks.Comment object at 0x1058c1e50>
    ldy(0x1);
    JMP(SetPRout);
}

int SetPRout() {
    // <conv.chunks.Comment object at 0x1058c1fa0>
    sta(GameEngineSubroutine);
    sty(Player_State);
    // <conv.chunks.Comment object at 0x1058c2180>
    ldy(0xff);
    sty(TimerControl);
    // <conv.chunks.Comment object at 0x1058c2300>
    iny();
    sty(ScrollAmount);
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1058c2690>
    rts();
    JMP(KillPlayer);
}

int KillPlayer() {
    stx(Player_X_Speed);
    // <conv.chunks.Comment object at 0x1058c2870>
    inx();
    stx(EventMusicQueue);
    // <conv.chunks.Comment object at 0x1058c2a20>
    lda(0xfc);
    sta(Player_Y_Speed);
    lda(0xb);
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda(Enemy_ID, x);
    cmp(Spiny);
    // <conv.chunks.Comment object at 0x1058c3020>
    // <conv.chunks.Comment object at 0x1058c3380>
    BEQ(InjurePlayer);
    lda(Sfx_EnemyStomp);
    // <conv.chunks.Comment object at 0x1058c35c0>
    sta(Square1SoundQueue);
    lda(Enemy_ID, x);
    ldy(0x0);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x1058c38f0>
    // <conv.chunks.Comment object at 0x1058c3980>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_FrenzyVar);
    // <conv.chunks.Comment object at 0x1058c3c20>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_CannonVar);
    BEQ(EnemyStompedPts);
    cmp(Podoboo);
    BEQ(EnemyStompedPts);
    iny();
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x1058cc050>
    // <conv.chunks.Comment object at 0x1058cc1a0>
    // <conv.chunks.Comment object at 0x1058cc2f0>
    // <conv.chunks.Comment object at 0x1058cc380>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x1058cc5c0>
    // <conv.chunks.Comment object at 0x1058cc650>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x1058cc8c0>
    // <conv.chunks.Comment object at 0x1058cc950>
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda(offsetof(G, StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1058ccbc0>
    // <conv.chunks.Comment object at 0x1058ccd10>
    lda(Enemy_MovingDir, x);
    pha();
    JSR(SetStun);
    // <conv.chunks.Comment object at 0x1058ccf80>
    // <conv.chunks.Comment object at 0x1058cd010>
    pla();
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1058cd1f0>
    lda(0b100000);
    sta(Enemy_State, x);
    JSR(InitVStf);
    sta(Enemy_X_Speed, x);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x1058cd430>
    // <conv.chunks.Comment object at 0x1058cd580>
    // <conv.chunks.Comment object at 0x1058cd6a0>
    // <conv.chunks.Comment object at 0x1058cd7f0>
    sta(Player_Y_Speed);
    rts();
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x1058cdac0>
    BCC(HandleStompedShellE);
    anda(0b1);
    // <conv.chunks.Comment object at 0x1058cdcd0>
    sta(Enemy_ID, x);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1058cdf10>
    sty(Enemy_State, x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x1058ce150>
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // <conv.chunks.Comment object at 0x1058ce360>
    // <conv.chunks.Comment object at 0x1058ce480>
    lda(offsetof(G, DemotedKoopaXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x1058ce9f0>
    sta(Enemy_State, x);
    inc(StompChainCounter);
    lda(StompChainCounter);
    clc();
    // <conv.chunks.Comment object at 0x1058ced20>
    // <conv.chunks.Comment object at 0x1058cee40>
    // <conv.chunks.Comment object at 0x1058cef90>
    adc(StompTimer);
    JSR(SetupFloateyNumber);
    inc(StompTimer);
    ldy(PrimaryHardMode);
    lda(offsetof(G, RevivalRateData), y);
    sta(EnemyIntervalTimer, x);
    JMP(SBnce);
}

int SBnce() {
    // <conv.chunks.Comment object at 0x1058cf110>
    // <conv.chunks.Comment object at 0x1058cf230>
    // <conv.chunks.Comment object at 0x1058cf350>
    // <conv.chunks.Comment object at 0x1058cf470>
    // <conv.chunks.Comment object at 0x1058cf5c0>
    // <conv.chunks.Comment object at 0x1058cf710>
    lda(0xfc);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x1058cf800>
    rts();
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1058cfa70>
    cmp(0x1);
    BNE(LInj);
    JMP(InjurePlayer);
    JMP(LInj);
}

int LInj() {
    // <conv.chunks.Comment object at 0x1058cfc20>
    // <conv.chunks.Comment object at 0x1058cfe00>
    // <conv.chunks.Comment object at 0x1058cff20>
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
    // <conv.chunks.Comment object at 0x1058d8230>
    // <conv.chunks.Comment object at 0x1058d82c0>
    // <conv.chunks.Comment object at 0x1058d8470>
    // <conv.chunks.Comment object at 0x1058d85f0>
    // <conv.chunks.Comment object at 0x1058d8680>
    sty(Enemy_MovingDir, x);
    dey();
    // <conv.chunks.Comment object at 0x1058d8860>
    rts();
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x1058d89b0>
    lda(0x30);
    sta(FloateyNum_Timer, x);
    // <conv.chunks.Comment object at 0x1058d8b60>
    lda(Enemy_Y_Position, x);
    sta(FloateyNum_Y_Pos, x);
    // <conv.chunks.Comment object at 0x1058d8e60>
    lda(Enemy_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    JMP(ExSFN);
}

int ExSFN() {
    rts();
    JMP(EnemiesCollision);
}

int EnemiesCollision() {
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x1058d97c0>
    lsr();
    BCC(ExSFN);
    // <conv.chunks.Comment object at 0x1058d9d60>
    lda(AreaType);
    BEQ(ExSFN);
    // <conv.chunks.Comment object at 0x1058d9fa0>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x1058da210>
    BCS(ExitECRoutine);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x1058da420>
    BEQ(ExitECRoutine);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x1058da660>
    BEQ(ExitECRoutine);
    lda(EnemyOffscrBitsMasked, x);
    // <conv.chunks.Comment object at 0x1058da870>
    BNE(ExitECRoutine);
    JSR(GetEnemyBoundBoxOfs);
    dex();
    BMI(ExitECRoutine);
    JMP(ECLoop);
}

int ECLoop() {
    // <conv.chunks.Comment object at 0x1058daab0>
    // <conv.chunks.Comment object at 0x1058dac00>
    // <conv.chunks.Comment object at 0x1058dac90>
    // <conv.chunks.Comment object at 0x1058dadb0>
    stx(0x1);
    tya();
    // <conv.chunks.Comment object at 0x1058dae10>
    pha();
    lda(Enemy_Flag, x);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1058db080>
    // <conv.chunks.Comment object at 0x1058db1d0>
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1058db410>
    // <conv.chunks.Comment object at 0x1058db4a0>
    cmp(Lakitu);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1058db680>
    cmp(PiranhaPlant);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1058db980>
    lda(EnemyOffscrBitsMasked, x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1058dbbc0>
    // <conv.chunks.Comment object at 0x1058dbd10>
    // <conv.chunks.Comment object at 0x1058dbdd0>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    ldy(0x1);
    BCC(NoEnemyCollision);
    // <conv.chunks.Comment object at 0x1058e40e0>
    // <conv.chunks.Comment object at 0x1058e4170>
    // <conv.chunks.Comment object at 0x1058e4290>
    // <conv.chunks.Comment object at 0x1058e43e0>
    // <conv.chunks.Comment object at 0x1058e4470>
    lda(Enemy_State, x);
    ora(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1058e4710>
    anda(0b10000000);
    BNE(YesEC);
    lda(Enemy_CollisionBits, y);
    anda(offsetof(G, SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x1058e4950>
    // <conv.chunks.Comment object at 0x1058e4aa0>
    // <conv.chunks.Comment object at 0x1058e4bf0>
    // <conv.chunks.Comment object at 0x1058e4d40>
    lda(Enemy_CollisionBits, y);
    ora(offsetof(G, SetBitsMask), x);
    // <conv.chunks.Comment object at 0x1058e4f80>
    sta(Enemy_CollisionBits, y);
    JMP(YesEC);
}

int YesEC() {
    // <conv.chunks.Comment object at 0x1058e51f0>
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
    // <conv.chunks.Comment object at 0x1058e5910>
    // <conv.chunks.Comment object at 0x1058e59d0>
    // <conv.chunks.Comment object at 0x1058e5a90>
    dex();
    BPL(ECLoop);
    JMP(ExitECRoutine);
}

int ExitECRoutine() {
    ldx(ObjectOffset);
    rts();
    JMP(ProcEnemyCollisions);
}

int ProcEnemyCollisions() {
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1058e5fd0>
    ora(Enemy_State, x);
    anda(0b100000);
    BNE(ExitProcessEColl);
    // <conv.chunks.Comment object at 0x1058e6240>
    // <conv.chunks.Comment object at 0x1058e6360>
    lda(Enemy_State, x);
    cmp(0x6);
    // <conv.chunks.Comment object at 0x1058e65a0>
    BCC(ProcSecondEnemyColl);
    lda(Enemy_ID, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x1058e67b0>
    // <conv.chunks.Comment object at 0x1058e6900>
    BEQ(ExitProcessEColl);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1058e6b10>
    asl();
    BCC(ShellCollisions);
    // <conv.chunks.Comment object at 0x1058e6cf0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(0x1);
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // <conv.chunks.Comment object at 0x1058e72c0>
    tax();
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x1058e73e0>
    ldx(ObjectOffset);
    lda(ShellChainCounter, x);
    // <conv.chunks.Comment object at 0x1058e75f0>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x1058e77d0>
    ldx(0x1);
    JSR(SetupFloateyNumber);
    ldx(ObjectOffset);
    inc(ShellChainCounter, x);
    JMP(ExitProcessEColl);
}

int ExitProcessEColl() {
    rts();
    JMP(ProcSecondEnemyColl);
}

int ProcSecondEnemyColl() {
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x1058e7e90>
    cmp(0x6);
    BCC(MoveEOfs);
    lda(Enemy_ID, y);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x1058ec200>
    // <conv.chunks.Comment object at 0x1058ec350>
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x1058ec560>
    ldy(0x1);
    lda(ShellChainCounter, y);
    // <conv.chunks.Comment object at 0x1058ec680>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x1058ec950>
    ldx(ObjectOffset);
    JSR(SetupFloateyNumber);
    ldx(0x1);
    inc(ShellChainCounter, x);
    rts();
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // <conv.chunks.Comment object at 0x1058ed010>
    tax();
    JSR(EnemyTurnAround);
    ldx(ObjectOffset);
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1058ed3a0>
    cmp(PiranhaPlant);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1058ed5e0>
    cmp(Lakitu);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1058ed760>
    cmp(HammerBro);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x1058eda90>
    cmp(Spiny);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x1058edc40>
    cmp(GreenParatroopaJump);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x1058edf40>
    cmp(0x7);
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // <conv.chunks.Comment object at 0x1058ee0f0>
    // <conv.chunks.Comment object at 0x1058ee2d0>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x1058ee480>
    tay();
    iny();
    sty(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x1058ee6c0>
    lda(Enemy_MovingDir, x);
    eor(0b11);
    sta(Enemy_MovingDir, x);
    JMP(ExTA);
}

int ExTA() {
    // <conv.chunks.Comment object at 0x1058ee930>
    // <conv.chunks.Comment object at 0x1058eea50>
    // <conv.chunks.Comment object at 0x1058eeba0>
    rts();
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(0xff);
    // <conv.chunks.Comment object at 0x1058eecf0>
    // <conv.chunks.Comment object at 0x1058eed50>
    sta(PlatformCollisionFlag, x);
    lda(TimerControl);
    BNE(ExLPC);
    lda(Enemy_State, x);
    BMI(ExLPC);
    // <conv.chunks.Comment object at 0x1058eef90>
    // <conv.chunks.Comment object at 0x1058ef0b0>
    // <conv.chunks.Comment object at 0x1058ef200>
    // <conv.chunks.Comment object at 0x1058ef350>
    lda(Enemy_ID, x);
    cmp(0x24);
    BNE(ChkForPlayerC_LargeP);
    // <conv.chunks.Comment object at 0x1058ef5c0>
    // <conv.chunks.Comment object at 0x1058ef650>
    lda(Enemy_State, x);
    tax();
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    JSR(CheckPlayerVertical);
    BCS(ExLPC);
    // <conv.chunks.Comment object at 0x1058efb30>
    // <conv.chunks.Comment object at 0x1058efc50>
    txa();
    JSR(GetEnemyBoundBoxOfsArg);
    lda(Enemy_Y_Position, x);
    sta(0x0);
    txa();
    // <conv.chunks.Comment object at 0x1058efe30>
    // <conv.chunks.Comment object at 0x1058eff50>
    // <conv.chunks.Comment object at 0x1058f8110>
    // <conv.chunks.Comment object at 0x1058f80e0>
    pha();
    JSR(PlayerCollisionCore);
    pla();
    // <conv.chunks.Comment object at 0x1058f8350>
    // <conv.chunks.Comment object at 0x1058f84a0>
    tax();
    BCC(ExLPC);
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}

int ExLPC() {
    // <conv.chunks.Comment object at 0x1058f85c0>
    // <conv.chunks.Comment object at 0x1058f8710>
    // <conv.chunks.Comment object at 0x1058f8830>
    ldx(ObjectOffset);
    rts();
    JMP(SmallPlatformCollision);
}

int SmallPlatformCollision() {
    lda(TimerControl);
    BNE(ExSPC);
    sta(PlatformCollisionFlag, x);
    JSR(CheckPlayerVertical);
    BCS(ExSPC);
    // <conv.chunks.Comment object at 0x1058f8a70>
    // <conv.chunks.Comment object at 0x1058f8ad0>
    // <conv.chunks.Comment object at 0x1058f8bf0>
    // <conv.chunks.Comment object at 0x1058f8d40>
    // <conv.chunks.Comment object at 0x1058f8e90>
    // <conv.chunks.Comment object at 0x1058f8fb0>
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
    // <conv.chunks.Comment object at 0x1058f9df0>
    // <conv.chunks.Comment object at 0x1058f9f70>
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
    // <conv.chunks.Comment object at 0x1058fa600>
    // <conv.chunks.Comment object at 0x1058fa690>
    // <conv.chunks.Comment object at 0x1058fa810>
    ldx(ObjectOffset);
    rts();
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
    // <conv.chunks.Comment object at 0x1058fb5f0>
    // <conv.chunks.Comment object at 0x1058fb740>
    // <conv.chunks.Comment object at 0x1058fb7d0>
    cmp(0x6);
    BCS(PlatformSideCollisions);
    // <conv.chunks.Comment object at 0x1058fb980>
    lda(Player_Y_Speed);
    BMI(PlatformSideCollisions);
    lda(0x0);
    // <conv.chunks.Comment object at 0x1058fbc20>
    // <conv.chunks.Comment object at 0x1058fbd70>
    ldy(Enemy_ID, x);
    cpy(0x2b);
    BEQ(SetCollisionFlag);
    cpy(0x2c);
    // <conv.chunks.Comment object at 0x1058fbf80>
    // <conv.chunks.Comment object at 0x105904050>
    // <conv.chunks.Comment object at 0x105904200>
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx(ObjectOffset);
    sta(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x105904500>
    // <conv.chunks.Comment object at 0x105904620>
    lda(0x0);
    sta(Player_State);
    // <conv.chunks.Comment object at 0x1059047d0>
    rts();
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(0x1);
    sta(0x0);
    lda(BoundingBox_DR_XPos);
    sec();
    // <conv.chunks.Comment object at 0x105904a40>
    // <conv.chunks.Comment object at 0x105904b90>
    // <conv.chunks.Comment object at 0x105904c20>
    // <conv.chunks.Comment object at 0x105904dd0>
    sbc(BoundingBox_UL_XPos, y);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x105904f80>
    BCC(SideC);
    inc(0x0);
    lda(BoundingBox_DR_XPos, y);
    clc();
    // <conv.chunks.Comment object at 0x1059051f0>
    // <conv.chunks.Comment object at 0x105905280>
    // <conv.chunks.Comment object at 0x105905460>
    sbc(BoundingBox_UL_XPos);
    cmp(0x9);
    BCS(NoSideC);
    JMP(SideC);
}

int SideC() {
    // <conv.chunks.Comment object at 0x1059055e0>
    // <conv.chunks.Comment object at 0x105905670>
    // <conv.chunks.Comment object at 0x105905850>
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}

int NoSideC() {
    // <conv.chunks.Comment object at 0x1059059d0>
    ldx(ObjectOffset);
    rts();
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
    // <conv.chunks.Comment object at 0x105906300>
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ExPlPos);
    // <conv.chunks.Comment object at 0x1059065a0>
    // <conv.chunks.Comment object at 0x105906630>
    ldy(Enemy_Y_HighPos, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x105906930>
    BNE(ExPlPos);
    sec();
    sbc(0x20);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x105906ba0>
    // <conv.chunks.Comment object at 0x105906c30>
    // <conv.chunks.Comment object at 0x105906cc0>
    tya();
    sbc(0x0);
    sta(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x105906f00>
    // <conv.chunks.Comment object at 0x105906f90>
    lda(0x0);
    sta(Player_Y_Speed);
    sta(Player_Y_MoveForce);
    JMP(ExPlPos);
}

int ExPlPos() {
    rts();
    JMP(CheckPlayerVertical);
}

int CheckPlayerVertical() {
    lda(Player_OffscreenBits);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x1059075c0>
    // <conv.chunks.Comment object at 0x1059076e0>
    BCS(ExCPV);
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x105907920>
    // <conv.chunks.Comment object at 0x105907a70>
    BNE(ExCPV);
    lda(Player_Y_Position);
    cmp(0xd0);
    JMP(ExCPV);
}

int ExCPV() {
    rts();
    JMP(GetEnemyBoundBoxOfs);
}

int GetEnemyBoundBoxOfs() {
    lda(ObjectOffset);
    JMP(GetEnemyBoundBoxOfsArg);
}

int GetEnemyBoundBoxOfsArg() {
    asl();
    asl();
    // <conv.chunks.Comment object at 0x10590c170>
    // <conv.chunks.Comment object at 0x10590c230>
    clc();
    adc(0x4);
    tay();
    lda(Enemy_OffscreenBits);
    anda(0b1111);
    cmp(0b1111);
    // <conv.chunks.Comment object at 0x10590c470>
    // <conv.chunks.Comment object at 0x10590c500>
    // <conv.chunks.Comment object at 0x10590c620>
    // <conv.chunks.Comment object at 0x10590c740>
    rts();
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda(DisableCollisionDet);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x10590ca40>
    // <conv.chunks.Comment object at 0x10590cc50>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(ExPBGCol);
    // <conv.chunks.Comment object at 0x10590ce60>
    // <conv.chunks.Comment object at 0x10590cef0>
    cmp(0x4);
    BCC(ExPBGCol);
    lda(0x1);
    ldy(SwimmingFlag);
    BNE(SetPSte);
    lda(Player_State);
    BEQ(SetFallS);
    // <conv.chunks.Comment object at 0x10590d100>
    // <conv.chunks.Comment object at 0x10590d2b0>
    // <conv.chunks.Comment object at 0x10590d340>
    // <conv.chunks.Comment object at 0x10590d4f0>
    // <conv.chunks.Comment object at 0x10590d640>
    // <conv.chunks.Comment object at 0x10590d760>
    cmp(0x3);
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // <conv.chunks.Comment object at 0x10590d8e0>
    // <conv.chunks.Comment object at 0x10590da90>
    lda(0x2);
    JMP(SetPSte);
}

int SetPSte() {
    // <conv.chunks.Comment object at 0x10590db50>
    sta(Player_State);
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda(Player_Y_HighPos);
    cmp(0x1);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x10590de80>
    // <conv.chunks.Comment object at 0x10590df10>
    lda(0xff);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x10590e120>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // <conv.chunks.Comment object at 0x10590e3c0>
    // <conv.chunks.Comment object at 0x10590e450>
    // <conv.chunks.Comment object at 0x10590e600>
    rts();
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(0x2);
    // <conv.chunks.Comment object at 0x10590e720>
    lda(CrouchingFlag);
    BNE(GBBAdr);
    // <conv.chunks.Comment object at 0x10590e930>
    lda(PlayerSize);
    BNE(GBBAdr);
    dey();
    // <conv.chunks.Comment object at 0x10590eb70>
    // <conv.chunks.Comment object at 0x10590ecf0>
    lda(SwimmingFlag);
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // <conv.chunks.Comment object at 0x10590ee70>
    // <conv.chunks.Comment object at 0x10590eff0>
    // <conv.chunks.Comment object at 0x10590f080>
    lda(offsetof(G, BlockBufferAdderData), y);
    sta(0xeb);
    tay();
    ldx(PlayerSize);
    // <conv.chunks.Comment object at 0x10590f260>
    // <conv.chunks.Comment object at 0x10590f230>
    // <conv.chunks.Comment object at 0x10590f410>
    lda(CrouchingFlag);
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // <conv.chunks.Comment object at 0x10590f620>
    // <conv.chunks.Comment object at 0x10590f7a0>
    // <conv.chunks.Comment object at 0x10590f830>
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
    // <conv.chunks.Comment object at 0x105915010>
    // <conv.chunks.Comment object at 0x1059150a0>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NYSpd);
}

int NYSpd() {
    // <conv.chunks.Comment object at 0x105915370>
    // <conv.chunks.Comment object at 0x105915490>
    lda(0x1);
    sta(Player_Y_Speed);
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x105915790>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(0x0);
    // <conv.chunks.Comment object at 0x105915970>
    // <conv.chunks.Comment object at 0x105915a00>
    // <conv.chunks.Comment object at 0x105915bb0>
    // <conv.chunks.Comment object at 0x105915cd0>
    // <conv.chunks.Comment object at 0x105915df0>
    // <conv.chunks.Comment object at 0x105915f40>
    // <conv.chunks.Comment object at 0x105915fd0>
    // <conv.chunks.Comment object at 0x105916120>
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
    // <conv.chunks.Comment object at 0x105916ae0>
    // <conv.chunks.Comment object at 0x105916c00>
    // <conv.chunks.Comment object at 0x105916d20>
    // <conv.chunks.Comment object at 0x105916e40>
    cmp(0xc5);
    BNE(ContChk);
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}

int ContChk() {
    // <conv.chunks.Comment object at 0x105916fc0>
    // <conv.chunks.Comment object at 0x1059171a0>
    // <conv.chunks.Comment object at 0x1059172c0>
    JSR(ChkInvisibleMTiles);
    BEQ(DoPlayerSideCheck);
    ldy(JumpspringAnimCtrl);
    BNE(InitSteP);
    ldy(0x4);
    cpy(0x5);
    BCC(LandPlyr);
    // <conv.chunks.Comment object at 0x105917440>
    // <conv.chunks.Comment object at 0x105917560>
    // <conv.chunks.Comment object at 0x105917680>
    // <conv.chunks.Comment object at 0x1059177d0>
    // <conv.chunks.Comment object at 0x105917860>
    // <conv.chunks.Comment object at 0x105917950>
    lda(Player_MovingDir);
    sta(0x0);
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // <conv.chunks.Comment object at 0x105917c20>
    // <conv.chunks.Comment object at 0x105917cb0>
    // <conv.chunks.Comment object at 0x105917e30>
    JSR(ChkForLandJumpSpring);
    lda(0xf0);
    anda(Player_Y_Position);
    sta(Player_Y_Position);
    JSR(HandlePipeEntry);
    // <conv.chunks.Comment object at 0x105917fe0>
    // <conv.chunks.Comment object at 0x1059201d0>
    // <conv.chunks.Comment object at 0x1059202f0>
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
    // <conv.chunks.Comment object at 0x105920b00>
    iny();
    iny();
    lda(0x2);
    // <conv.chunks.Comment object at 0x105920cb0>
    // <conv.chunks.Comment object at 0x105920d40>
    sta(0x0);
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(0xeb);
    // <conv.chunks.Comment object at 0x105920fb0>
    // <conv.chunks.Comment object at 0x105921070>
    lda(Player_Y_Position);
    cmp(0x20);
    BCC(BHalf);
    // <conv.chunks.Comment object at 0x105921250>
    // <conv.chunks.Comment object at 0x1059212e0>
    cmp(0xe4);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(0x1c);
    BEQ(BHalf);
    // <conv.chunks.Comment object at 0x105921520>
    // <conv.chunks.Comment object at 0x105921700>
    // <conv.chunks.Comment object at 0x105921820>
    // <conv.chunks.Comment object at 0x105921970>
    // <conv.chunks.Comment object at 0x105921a00>
    cmp(0x6b);
    BEQ(BHalf);
    JSR(CheckForClimbMTiles);
    BCC(CheckSideMTiles);
    JMP(BHalf);
}

int BHalf() {
    // <conv.chunks.Comment object at 0x105921c40>
    // <conv.chunks.Comment object at 0x105921e20>
    // <conv.chunks.Comment object at 0x105921f40>
    // <conv.chunks.Comment object at 0x105922060>
    ldy(0xeb);
    iny();
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1059220c0>
    // <conv.chunks.Comment object at 0x1059222a0>
    cmp(0x8);
    BCC(ExSCH);
    // <conv.chunks.Comment object at 0x105922420>
    cmp(0xd0);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(0x0);
    BNE(SideCheckLoop);
    JMP(ExSCH);
}

int ExSCH() {
    // <conv.chunks.Comment object at 0x105922660>
    // <conv.chunks.Comment object at 0x105922840>
    // <conv.chunks.Comment object at 0x105922960>
    // <conv.chunks.Comment object at 0x105922ab0>
    // <conv.chunks.Comment object at 0x105922b40>
    // <conv.chunks.Comment object at 0x105922cf0>
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
    // <conv.chunks.Comment object at 0x105922e40>
    // <conv.chunks.Comment object at 0x105922f60>
    // <conv.chunks.Comment object at 0x1059230b0>
    // <conv.chunks.Comment object at 0x1059231d0>
    // <conv.chunks.Comment object at 0x1059232f0>
    // <conv.chunks.Comment object at 0x105923410>
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
    // <conv.chunks.Comment object at 0x105923560>
    // <conv.chunks.Comment object at 0x105923680>
    // <conv.chunks.Comment object at 0x1059237a0>
    // <conv.chunks.Comment object at 0x1059238f0>
    // <conv.chunks.Comment object at 0x105923a10>
    // <conv.chunks.Comment object at 0x105923b60>
    // <conv.chunks.Comment object at 0x105923c80>
    ldy(Player_State);
    cpy(0x0);
    BNE(StopPlayerMove);
    ldy(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x105923e00>
    // <conv.chunks.Comment object at 0x105923e90>
    // <conv.chunks.Comment object at 0x10592c080>
    dey();
    BNE(StopPlayerMove);
    cmp(0x6c);
    BEQ(PipeDwnS);
    cmp(0x1f);
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}

int PipeDwnS() {
    // <conv.chunks.Comment object at 0x10592c230>
    // <conv.chunks.Comment object at 0x10592c350>
    // <conv.chunks.Comment object at 0x10592c3e0>
    // <conv.chunks.Comment object at 0x10592c590>
    // <conv.chunks.Comment object at 0x10592c620>
    // <conv.chunks.Comment object at 0x10592c7d0>
    lda(Player_SprAttrib);
    BNE(PlyrPipe);
    // <conv.chunks.Comment object at 0x10592c920>
    ldy(Sfx_PipeDown_Injury);
    sty(Square1SoundQueue);
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(0b100000);
    sta(Player_SprAttrib);
    // <conv.chunks.Comment object at 0x10592cd70>
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
    // <conv.chunks.Comment object at 0x10592cf80>
    // <conv.chunks.Comment object at 0x10592d0a0>
    // <conv.chunks.Comment object at 0x10592d1c0>
    // <conv.chunks.Comment object at 0x10592d250>
    // <conv.chunks.Comment object at 0x10592d400>
    // <conv.chunks.Comment object at 0x10592d550>
    // <conv.chunks.Comment object at 0x10592d5e0>
    lda(offsetof(G, AreaChangeTimerData), y);
    sta(ChangeAreaTimer);
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // <conv.chunks.Comment object at 0x10592d850>
    lda(GameEngineSubroutine);
    cmp(0x7);
    BEQ(ExCSM);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x10592da00>
    // <conv.chunks.Comment object at 0x10592dbe0>
    BNE(ExCSM);
    lda(0x2);
    sta(GameEngineSubroutine);
    rts();
    JMP(StopPlayerMove);
}

int StopPlayerMove() {
    JSR(ImpedePlayerMove);
    JMP(ExCSM);
}

int ExCSM() {
    // <conv.chunks.Comment object at 0x10592de80>
    // <conv.chunks.Comment object at 0x10592e060>
    // <conv.chunks.Comment object at 0x10592e120>
    // <conv.chunks.Comment object at 0x10592e180>
    // <conv.chunks.Comment object at 0x10592e1e0>
    // <conv.chunks.Comment object at 0x10592e330>
    rts();
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
    // <conv.chunks.Comment object at 0x10592e9f0>
    lda(0x2);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x10592ec00>
    lda(0x18);
    sta(Player_X_Speed);
    JMP(ErACM);
}

int ErACM() {
    // <conv.chunks.Comment object at 0x10592ee10>
    // <conv.chunks.Comment object at 0x10592efc0>
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
    // <conv.chunks.Comment object at 0x10592f920>
    // <conv.chunks.Comment object at 0x10592f680>
    // <conv.chunks.Comment object at 0x10592fd40>
    // <conv.chunks.Comment object at 0x10592ff20>
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // <conv.chunks.Comment object at 0x105934170>
    rts();
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(0x24);
    BEQ(FlagpoleCollision);
    // <conv.chunks.Comment object at 0x1059342c0>
    // <conv.chunks.Comment object at 0x105934350>
    cmp(0x25);
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda(GameEngineSubroutine);
    cmp(0x5);
    BEQ(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x105934830>
    // <conv.chunks.Comment object at 0x1059348c0>
    lda(0x1);
    sta(PlayerFacingDir);
    inc(ScrollLock);
    // <conv.chunks.Comment object at 0x105934ad0>
    // <conv.chunks.Comment object at 0x105934c80>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BEQ(RunFR);
    lda(BulletBill_CannonVar);
    JSR(KillEnemies);
    // <conv.chunks.Comment object at 0x105934e90>
    // <conv.chunks.Comment object at 0x105934f20>
    // <conv.chunks.Comment object at 0x105935100>
    // <conv.chunks.Comment object at 0x105935220>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x105935460>
    lsr();
    sta(FlagpoleSoundQueue);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x105935610>
    // <conv.chunks.Comment object at 0x105935730>
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
    // <conv.chunks.Comment object at 0x105935a90>
    // <conv.chunks.Comment object at 0x105935be0>
    // <conv.chunks.Comment object at 0x105935d60>
    // <conv.chunks.Comment object at 0x105935df0>
    // <conv.chunks.Comment object at 0x105935f10>
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
    // <conv.chunks.Comment object at 0x105936450>
    BNE(PutPlayerOnVine);
    lda(Player_Y_Position);
    cmp(0x20);
    BCS(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x105936660>
    // <conv.chunks.Comment object at 0x105936780>
    // <conv.chunks.Comment object at 0x105936810>
    lda(0x1);
    sta(GameEngineSubroutine);
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x105936c00>
    sta(Player_State);
    lda(0x0);
    sta(Player_X_Speed);
    // <conv.chunks.Comment object at 0x105936e10>
    // <conv.chunks.Comment object at 0x105936ea0>
    sta(Player_X_MoveForce);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x105937140>
    sec();
    sbc(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x1059372f0>
    cmp(0x10);
    BCS(SetVXPl);
    // <conv.chunks.Comment object at 0x105937470>
    lda(0x2);
    sta(PlayerFacingDir);
    JMP(SetVXPl);
}

int SetVXPl() {
    // <conv.chunks.Comment object at 0x1059376b0>
    // <conv.chunks.Comment object at 0x105937860>
    ldy(PlayerFacingDir);
    lda(0x6);
    // <conv.chunks.Comment object at 0x105937a10>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x105937bc0>
    asl();
    asl();
    clc();
    adc(((offsetof(G, ClimbXPosAdder)) - (1)), y);
    sta(Player_X_Position);
    lda(0x6);
    BNE(ExPVne);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x105937e00>
    // <conv.chunks.Comment object at 0x105944050>
    // <conv.chunks.Comment object at 0x1059441a0>
    // <conv.chunks.Comment object at 0x105944230>
    // <conv.chunks.Comment object at 0x1059443e0>
    clc();
    adc(((offsetof(G, ClimbPLocAdder)) - (1)), y);
    sta(Player_PageLoc);
    JMP(ExPVne);
}

int ExPVne() {
    // <conv.chunks.Comment object at 0x105944590>
    // <conv.chunks.Comment object at 0x1059447a0>
    // <conv.chunks.Comment object at 0x1059448c0>
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
    // <conv.chunks.Comment object at 0x105944a40>
    // <conv.chunks.Comment object at 0x105944ad0>
    // <conv.chunks.Comment object at 0x105944cb0>
    // <conv.chunks.Comment object at 0x105944d40>
    rts();
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // <conv.chunks.Comment object at 0x105944fb0>
    // <conv.chunks.Comment object at 0x1059450d0>
    lda(0x70);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x105945280>
    lda(0xf9);
    sta(JumpspringForce);
    // <conv.chunks.Comment object at 0x105945490>
    lda(0x3);
    sta(JumpspringTimer);
    // <conv.chunks.Comment object at 0x1059456a0>
    lsr();
    sta(JumpspringAnimCtrl);
    JMP(ExCJSp);
}

int ExCJSp() {
    // <conv.chunks.Comment object at 0x1059458e0>
    // <conv.chunks.Comment object at 0x105945a00>
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
    // <conv.chunks.Comment object at 0x105945b50>
    // <conv.chunks.Comment object at 0x105945be0>
    // <conv.chunks.Comment object at 0x105945dc0>
    // <conv.chunks.Comment object at 0x105945f10>
    // <conv.chunks.Comment object at 0x105945fa0>
    // <conv.chunks.Comment object at 0x1059460f0>
    sec();
    JMP(NoJSFnd);
}

int NoJSFnd() {
    // <conv.chunks.Comment object at 0x105946240>
    rts();
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda(Up_Down_Buttons);
    anda(0b100);
    BEQ(ExPipeE);
    // <conv.chunks.Comment object at 0x105946390>
    // <conv.chunks.Comment object at 0x1059464b0>
    // <conv.chunks.Comment object at 0x1059465d0>
    lda(0x0);
    cmp(0x11);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x105946720>
    // <conv.chunks.Comment object at 0x1059468a0>
    lda(0x1);
    cmp(0x10);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x105946a80>
    // <conv.chunks.Comment object at 0x105946c00>
    lda(0x30);
    sta(ChangeAreaTimer);
    // <conv.chunks.Comment object at 0x105946e40>
    lda(0x3);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x105947050>
    lda(Sfx_PipeDown_Injury);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x1059472f0>
    lda(0b100000);
    sta(Player_SprAttrib);
    lda(WarpZoneControl);
    BEQ(ExPipeE);
    anda(0b11);
    // <conv.chunks.Comment object at 0x105947500>
    // <conv.chunks.Comment object at 0x105947620>
    // <conv.chunks.Comment object at 0x105947740>
    // <conv.chunks.Comment object at 0x105947890>
    asl();
    asl();
    tax();
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x105947a70>
    // <conv.chunks.Comment object at 0x105947b30>
    // <conv.chunks.Comment object at 0x105947bc0>
    cmp(0x60);
    BCC(GetWNum);
    inx();
    // <conv.chunks.Comment object at 0x105947d40>
    // <conv.chunks.Comment object at 0x105947f50>
    cmp(0xa0);
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // <conv.chunks.Comment object at 0x10594c080>
    // <conv.chunks.Comment object at 0x10594c290>
    // <conv.chunks.Comment object at 0x10594c320>
    ldy(offsetof(G, WarpZoneNumbers), x);
    dey();
    sty(WorldNumber);
    ldx(offsetof(G, WorldAddrOffsets), y);
    lda(offsetof(G, AreaAddrOffsets), x);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x10594c500>
    // <conv.chunks.Comment object at 0x10594c590>
    // <conv.chunks.Comment object at 0x10594c6b0>
    // <conv.chunks.Comment object at 0x10594c800>
    // <conv.chunks.Comment object at 0x10594c950>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x10594cb90>
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
    // <conv.chunks.Comment object at 0x10594cd10>
    // <conv.chunks.Comment object at 0x10594cec0>
    // <conv.chunks.Comment object at 0x10594cfe0>
    // <conv.chunks.Comment object at 0x10594d100>
    // <conv.chunks.Comment object at 0x10594d220>
    // <conv.chunks.Comment object at 0x10594d340>
    // <conv.chunks.Comment object at 0x10594d460>
    rts();
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
    // <conv.chunks.Comment object at 0x10594d5b0>
    // <conv.chunks.Comment object at 0x10594d640>
    // <conv.chunks.Comment object at 0x10594d820>
    // <conv.chunks.Comment object at 0x10594d7f0>
    // <conv.chunks.Comment object at 0x10594d9d0>
    // <conv.chunks.Comment object at 0x10594db50>
    // <conv.chunks.Comment object at 0x10594dbe0>
    // <conv.chunks.Comment object at 0x10594dc70>
    // <conv.chunks.Comment object at 0x10594de50>
    // <conv.chunks.Comment object at 0x10594dee0>
    // <conv.chunks.Comment object at 0x10594e0c0>
    ldx(0x2);
    cpy(0x1);
    BPL(ExIPM);
    lda(0x1);
    JMP(NXSpd);
}

int NXSpd() {
    ldy(0x10);
    sty(SideCollisionTimer);
    // <conv.chunks.Comment object at 0x10594e690>
    ldy(0x0);
    sty(Player_X_Speed);
    cmp(0x0);
    BPL(PlatF);
    dey();
    JMP(PlatF);
}

int PlatF() {
    // <conv.chunks.Comment object at 0x10594e8a0>
    // <conv.chunks.Comment object at 0x10594ea50>
    // <conv.chunks.Comment object at 0x10594eae0>
    // <conv.chunks.Comment object at 0x10594ecf0>
    // <conv.chunks.Comment object at 0x10594ed80>
    sty(0x0);
    clc();
    adc(Player_X_Position);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x10594ef90>
    // <conv.chunks.Comment object at 0x10594f0b0>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Player_PageLoc);
    JMP(ExIPM);
}

int ExIPM() {
    // <conv.chunks.Comment object at 0x10594f2f0>
    // <conv.chunks.Comment object at 0x10594f380>
    // <conv.chunks.Comment object at 0x10594f500>
    txa();
    eor(0xff);
    anda(Player_CollisionBits);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x10594f680>
    // <conv.chunks.Comment object at 0x10594f830>
    rts();
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, SolidMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x10594faa0>
    // <conv.chunks.Comment object at 0x10594fdd0>
    rts();
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, ClimbMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x105958050>
    // <conv.chunks.Comment object at 0x1059583b0>
    rts();
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(0xc2);
    BEQ(CoinSd);
    cmp(0xc3);
    BEQ(CoinSd);
    clc();
    // <conv.chunks.Comment object at 0x1059585c0>
    // <conv.chunks.Comment object at 0x105958650>
    // <conv.chunks.Comment object at 0x105958830>
    // <conv.chunks.Comment object at 0x1059588c0>
    // <conv.chunks.Comment object at 0x105958ad0>
    rts();
    JMP(CoinSd);
}

int CoinSd() {
    lda(Sfx_CoinGrab);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x105958d40>
    rts();
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x105958f50>
    // <conv.chunks.Comment object at 0x105958fe0>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x1059591c0>
    rol();
    tax();
    tya();
    JMP(ExEBG);
}

int ExEBG() {
    // <conv.chunks.Comment object at 0x105959310>
    // <conv.chunks.Comment object at 0x1059593d0>
    // <conv.chunks.Comment object at 0x105959490>
    rts();
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105959700>
    anda(0b100000);
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // <conv.chunks.Comment object at 0x105959d60>
    // <conv.chunks.Comment object at 0x105959eb0>
    // <conv.chunks.Comment object at 0x105959fd0>
    ldy(Enemy_ID, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x10595a240>
    BNE(DoIDCheckBGColl);
    lda(Enemy_Y_Position, x);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x10595a5a0>
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
    // <conv.chunks.Comment object at 0x10595a810>
    // <conv.chunks.Comment object at 0x10595a930>
    // <conv.chunks.Comment object at 0x10595aa80>
    // <conv.chunks.Comment object at 0x10595aba0>
    cpy(HammerBro);
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // <conv.chunks.Comment object at 0x10595ad20>
    // <conv.chunks.Comment object at 0x10595ae70>
    // <conv.chunks.Comment object at 0x10595af90>
    cpy(Spiny);
    BEQ(YesIn);
    cpy(PowerUpObject);
    // <conv.chunks.Comment object at 0x10595b260>
    BEQ(YesIn);
    cpy(0x7);
    // <conv.chunks.Comment object at 0x10595b4a0>
    BCS(ExEBGChk);
    JMP(YesIn);
}

int YesIn() {
    // <conv.chunks.Comment object at 0x10595b6b0>
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
    // <conv.chunks.Comment object at 0x10595b980>
    // <conv.chunks.Comment object at 0x10595bad0>
    // <conv.chunks.Comment object at 0x10595bb30>
    // <conv.chunks.Comment object at 0x10595bc50>
    cmp(0x23);
    BNE(LandEnemyProperly);
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x10595bdd0>
    // <conv.chunks.Comment object at 0x10595bfb0>
    // <conv.chunks.Comment object at 0x10595bf80>
    // <conv.chunks.Comment object at 0x105968170>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x1059684a0>
    BCS(ChkToStunEnemies);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x1059686b0>
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x105968a40>
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x105968c80>
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
    // <conv.chunks.Comment object at 0x105968ec0>
    // <conv.chunks.Comment object at 0x105968f50>
    // <conv.chunks.Comment object at 0x105969130>
    // <conv.chunks.Comment object at 0x1059691c0>
    // <conv.chunks.Comment object at 0x1059693a0>
    // <conv.chunks.Comment object at 0x1059694c0>
    // <conv.chunks.Comment object at 0x105969610>
    anda(0b1);
    sta(Enemy_ID, x);
    JMP(SetStun);
}

int SetStun() {
    // <conv.chunks.Comment object at 0x105969790>
    // <conv.chunks.Comment object at 0x1059698e0>
    lda(Enemy_State, x);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x105969a90>
    ora(0b10);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105969ca0>
    dec(Enemy_Y_Position, x);
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105969f10>
    lda(Enemy_ID, x);
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x10596a180>
    BEQ(SetWYSpd);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x10596a3c0>
    ldy(AreaType);
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // <conv.chunks.Comment object at 0x10596a5d0>
    // <conv.chunks.Comment object at 0x10596a720>
    lda(0xff);
    JMP(SetNotW);
}

int SetNotW() {
    // <conv.chunks.Comment object at 0x10596a7e0>
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
    // <conv.chunks.Comment object at 0x10596af60>
    BEQ(NoCDirF);
    cmp(BulletBill_FrenzyVar);
    BEQ(NoCDirF);
    sty(Enemy_MovingDir, x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // <conv.chunks.Comment object at 0x10596b1a0>
    // <conv.chunks.Comment object at 0x10596b2c0>
    // <conv.chunks.Comment object at 0x10596b410>
    // <conv.chunks.Comment object at 0x10596b560>
    dey();
    lda(offsetof(G, EnemyBGCXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(ExEBGChk);
}

int ExEBGChk() {
    rts();
    JMP(LandEnemyProperly);
}

int LandEnemyProperly() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x10596ba10>
    // <conv.chunks.Comment object at 0x10596baa0>
    sec();
    sbc(0x8);
    cmp(0x5);
    BCS(ChkForRedKoopa);
    // <conv.chunks.Comment object at 0x10596bc20>
    // <conv.chunks.Comment object at 0x10596bcb0>
    // <conv.chunks.Comment object at 0x10596bdd0>
    lda(Enemy_State, x);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1059700e0>
    BNE(LandEnemyInitState);
    lda(Enemy_State, x);
    asl();
    // <conv.chunks.Comment object at 0x105970440>
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}

int SChkA() {
    // <conv.chunks.Comment object at 0x1059705c0>
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}

int ChkLandedEnemyState() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105970770>
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
    // <conv.chunks.Comment object at 0x1059709e0>
    // <conv.chunks.Comment object at 0x105970a70>
    // <conv.chunks.Comment object at 0x105970c20>
    // <conv.chunks.Comment object at 0x105970cb0>
    // <conv.chunks.Comment object at 0x105970e60>
    // <conv.chunks.Comment object at 0x105970fb0>
    // <conv.chunks.Comment object at 0x105971040>
    // <conv.chunks.Comment object at 0x1059711f0>
    // <conv.chunks.Comment object at 0x105971280>
    cpy(Spiny);
    BNE(SetForStn);
    lda(0x0);
    JMP(SetForStn);
}

int SetForStn() {
    // <conv.chunks.Comment object at 0x1059714c0>
    // <conv.chunks.Comment object at 0x1059716a0>
    // <conv.chunks.Comment object at 0x105971730>
    sta(EnemyIntervalTimer, x);
    lda(0x3);
    sta(Enemy_State, x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // <conv.chunks.Comment object at 0x105971940>
    // <conv.chunks.Comment object at 0x1059719d0>
    // <conv.chunks.Comment object at 0x105971bb0>
    // <conv.chunks.Comment object at 0x105971cd0>
    rts();
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda(Enemy_ID, x);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x105971df0>
    // <conv.chunks.Comment object at 0x105971f40>
    BEQ(LandEnemyInitState);
    cmp(Spiny);
    BNE(InvtD);
    // <conv.chunks.Comment object at 0x105972180>
    // <conv.chunks.Comment object at 0x105972210>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x105972480>
    lda(0x8);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x1059726c0>
    lda(FrameCounter);
    anda(0b111);
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // <conv.chunks.Comment object at 0x105972990>
    // <conv.chunks.Comment object at 0x105972ab0>
    // <conv.chunks.Comment object at 0x105972bd0>
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x105973170>
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x105973500>
    lda(Enemy_State, x);
    anda(0b10000000);
    // <conv.chunks.Comment object at 0x105973740>
    BNE(NMovShellFallBit);
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105973950>
    // <conv.chunks.Comment object at 0x1059739e0>
    rts();
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda(Enemy_State, x);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x105973c80>
    // <conv.chunks.Comment object at 0x105973dd0>
    sta(Enemy_State, x);
    rts();
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105978140>
    cmp(RedKoopa);
    BNE(Chk2MSBSt);
    // <conv.chunks.Comment object at 0x105978380>
    lda(Enemy_State, x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // <conv.chunks.Comment object at 0x1059785c0>
    // <conv.chunks.Comment object at 0x1059786e0>
    lda(Enemy_State, x);
    tay();
    asl();
    BCC(GetSteFromD);
    // <conv.chunks.Comment object at 0x105978920>
    // <conv.chunks.Comment object at 0x1059789b0>
    lda(Enemy_State, x);
    ora(0b1000000);
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // <conv.chunks.Comment object at 0x105978c20>
    // <conv.chunks.Comment object at 0x105978d40>
    // <conv.chunks.Comment object at 0x105978e60>
    lda(offsetof(G, EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // <conv.chunks.Comment object at 0x105978fe0>
    sta(Enemy_State, x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda(Enemy_Y_Position, x);
    cmp(0x20);
    // <conv.chunks.Comment object at 0x105979220>
    // <conv.chunks.Comment object at 0x105979370>
    BCC(ExESdeC);
    ldy(0x16);
    lda(0x2);
    sta(0xeb);
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // <conv.chunks.Comment object at 0x1059795b0>
    // <conv.chunks.Comment object at 0x105979640>
    // <conv.chunks.Comment object at 0x105979820>
    // <conv.chunks.Comment object at 0x1059798b0>
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
    // <conv.chunks.Comment object at 0x105979a00>
    // <conv.chunks.Comment object at 0x105979bb0>
    // <conv.chunks.Comment object at 0x105979cd0>
    // <conv.chunks.Comment object at 0x105979d60>
    // <conv.chunks.Comment object at 0x105979f10>
    // <conv.chunks.Comment object at 0x10597a030>
    // <conv.chunks.Comment object at 0x10597a150>
    // <conv.chunks.Comment object at 0x10597a270>
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
    lda(Enemy_State, x);
    asl();
    // <conv.chunks.Comment object at 0x10597a7b0>
    // <conv.chunks.Comment object at 0x10597a840>
    // <conv.chunks.Comment object at 0x10597aa20>
    // <conv.chunks.Comment object at 0x10597aba0>
    BCC(NoBump);
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NoBump);
}

int NoBump() {
    // <conv.chunks.Comment object at 0x10597ad50>
    // <conv.chunks.Comment object at 0x10597ae70>
    // <conv.chunks.Comment object at 0x10597af90>
    lda(Enemy_ID, x);
    cmp(0x5);
    BNE(InvEnemyDir);
    // <conv.chunks.Comment object at 0x10597b1a0>
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
    // <conv.chunks.Comment object at 0x10597b800>
    // <conv.chunks.Comment object at 0x10597b980>
    // <conv.chunks.Comment object at 0x10597b9e0>
    // <conv.chunks.Comment object at 0x10597bb60>
    // <conv.chunks.Comment object at 0x10597bbf0>
    // <conv.chunks.Comment object at 0x10597bd40>
    lda(Enemy_PageLoc, x);
    sbc(Player_PageLoc);
    // <conv.chunks.Comment object at 0x10597bf50>
    rts();
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x1059841a0>
    lda(Enemy_Y_Position, x);
    anda(0b11110000);
    ora(0b1000);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1059843e0>
    // <conv.chunks.Comment object at 0x105984500>
    // <conv.chunks.Comment object at 0x105984620>
    rts();
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x105984830>
    // <conv.chunks.Comment object at 0x1059849b0>
    adc(0x3e);
    cmp(0x44);
    rts();
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // <conv.chunks.Comment object at 0x105984d40>
    // <conv.chunks.Comment object at 0x105984e60>
    lda(Enemy_Y_Speed, x);
    clc();
    // <conv.chunks.Comment object at 0x105985100>
    adc(0x2);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x1059851f0>
    BCC(DoSide);
    JSR(ChkUnderEnemy);
    BEQ(DoSide);
    JSR(ChkForNonSolids);
    BEQ(DoSide);
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x1059854c0>
    // <conv.chunks.Comment object at 0x1059855e0>
    // <conv.chunks.Comment object at 0x105985730>
    // <conv.chunks.Comment object at 0x105985850>
    // <conv.chunks.Comment object at 0x1059859a0>
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    JMP(DoSide);
}

int DoSide() {
    // <conv.chunks.Comment object at 0x105985b20>
    // <conv.chunks.Comment object at 0x105985d00>
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}

int HammerBroBGColl() {
    JSR(ChkUnderEnemy);
    // <conv.chunks.Comment object at 0x105985ee0>
    BEQ(NoUnderHammerBro);
    cmp(0x23);
    // <conv.chunks.Comment object at 0x1059860f0>
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(0xfc);
    // <conv.chunks.Comment object at 0x105986330>
    // <conv.chunks.Comment object at 0x105986450>
    sta(Enemy_Y_Speed, x);
    rts();
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda(EnemyFrameTimer, x);
    BNE(NoUnderHammerBro);
    // <conv.chunks.Comment object at 0x105986750>
    // <conv.chunks.Comment object at 0x1059868a0>
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
    // <conv.chunks.Comment object at 0x105986fc0>
    // <conv.chunks.Comment object at 0x105987110>
    sta(Enemy_State, x);
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
    // <conv.chunks.Comment object at 0x1059877a0>
    BEQ(NSFnd);
    cmp(0xc2);
    // <conv.chunks.Comment object at 0x1059879e0>
    BEQ(NSFnd);
    cmp(0xc3);
    // <conv.chunks.Comment object at 0x105987c20>
    BEQ(NSFnd);
    cmp(0x5f);
    // <conv.chunks.Comment object at 0x105987e60>
    BEQ(NSFnd);
    cmp(0x60);
    JMP(NSFnd);
}

int NSFnd() {
    rts();
    JMP(FireballBGCollision);
}

int FireballBGCollision() {
    lda(Fireball_Y_Position, x);
    // <conv.chunks.Comment object at 0x105990350>
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
    // <conv.chunks.Comment object at 0x105990500>
    // <conv.chunks.Comment object at 0x1059906b0>
    // <conv.chunks.Comment object at 0x1059907d0>
    // <conv.chunks.Comment object at 0x1059908f0>
    // <conv.chunks.Comment object at 0x105990a10>
    // <conv.chunks.Comment object at 0x105990b30>
    // <conv.chunks.Comment object at 0x105990c80>
    // <conv.chunks.Comment object at 0x105990da0>
    // <conv.chunks.Comment object at 0x105990ef0>
    lda(0xfd);
    sta(Fireball_Y_Speed, x);
    // <conv.chunks.Comment object at 0x105991070>
    lda(0x1);
    sta(FireballBouncingFlag, x);
    // <conv.chunks.Comment object at 0x1059912b0>
    lda(Fireball_Y_Position, x);
    anda(0xf8);
    sta(Fireball_Y_Position, x);
    rts();
    JMP(ClearBounceFlag);
}

int ClearBounceFlag() {
    lda(0x0);
    sta(FireballBouncingFlag, x);
    rts();
    JMP(InitFireballExplode);
}

int InitFireballExplode() {
    lda(0x80);
    sta(Fireball_State, x);
    // <conv.chunks.Comment object at 0x105991d00>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    rts();
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1059923f0>
    // <conv.chunks.Comment object at 0x105993f50>
    adc(0x7);
    tax();
    ldy(0x2);
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x105998470>
    // <conv.chunks.Comment object at 0x105998530>
    adc(0x9);
    tax();
    ldy(0x6);
    JMP(FBallB);
}

int FBallB() {
    // <conv.chunks.Comment object at 0x105998740>
    // <conv.chunks.Comment object at 0x1059987d0>
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}

int GetEnemyBoundBox() {
    ldy(0x48);
    // <conv.chunks.Comment object at 0x105998b30>
    sty(0x0);
    ldy(0x44);
    // <conv.chunks.Comment object at 0x105998bc0>
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x105998f80>
    sty(0x0);
    ldy(0x4);
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x1059992e0>
    // <conv.chunks.Comment object at 0x105999460>
    sbc(ScreenLeft_X_Pos);
    sta(0x1);
    lda(Enemy_PageLoc, x);
    sbc(ScreenLeft_PageLoc);
    BMI(CMBits);
    // <conv.chunks.Comment object at 0x105999610>
    // <conv.chunks.Comment object at 0x1059996a0>
    // <conv.chunks.Comment object at 0x105999850>
    // <conv.chunks.Comment object at 0x105999970>
    ora(0x1);
    BEQ(CMBits);
    ldy(0x0);
    JMP(CMBits);
}

int CMBits() {
    // <conv.chunks.Comment object at 0x105999ac0>
    // <conv.chunks.Comment object at 0x105999d30>
    // <conv.chunks.Comment object at 0x105999dc0>
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
    // <conv.chunks.Comment object at 0x10599a960>
    // <conv.chunks.Comment object at 0x10599aa20>
    adc(0x1);
    tax();
    ldy(0x1);
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}

int MoveBoundBoxOffscreen() {
    txa();
    // <conv.chunks.Comment object at 0x10599aff0>
    asl();
    asl();
    tay();
    // <conv.chunks.Comment object at 0x10599b1d0>
    lda(0xff);
    sta(EnemyBoundingBoxCoord, y);
    // <conv.chunks.Comment object at 0x10599b2c0>
    sta(((EnemyBoundingBoxCoord) + (1)), y);
    sta(((EnemyBoundingBoxCoord) + (2)), y);
    sta(((EnemyBoundingBoxCoord) + (3)), y);
    rts();
    JMP(BoundingBoxCore);
}

int BoundingBoxCore() {
    stx(0x0);
    lda(SprObject_Rel_YPos, y);
    sta(0x2);
    // <conv.chunks.Comment object at 0x10599bb30>
    // <conv.chunks.Comment object at 0x10599bbc0>
    // <conv.chunks.Comment object at 0x10599bda0>
    lda(SprObject_Rel_XPos, y);
    sta(0x1);
    txa();
    // <conv.chunks.Comment object at 0x1059a4080>
    asl();
    asl();
    pha();
    tay();
    lda(SprObj_BoundBoxCtrl, x);
    asl();
    // <conv.chunks.Comment object at 0x1059a4380>
    // <conv.chunks.Comment object at 0x1059a4410>
    // <conv.chunks.Comment object at 0x1059a4590>
    asl();
    tax();
    lda(0x1);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    sta(BoundingBox_UL_Corner, y);
    // <conv.chunks.Comment object at 0x1059a4770>
    // <conv.chunks.Comment object at 0x1059a4740>
    // <conv.chunks.Comment object at 0x1059a4920>
    // <conv.chunks.Comment object at 0x1059a4a70>
    lda(0x1);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    inx();
    // <conv.chunks.Comment object at 0x1059a4d40>
    // <conv.chunks.Comment object at 0x1059a4f50>
    // <conv.chunks.Comment object at 0x1059a50d0>
    iny();
    lda(0x2);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    // <conv.chunks.Comment object at 0x1059a5220>
    // <conv.chunks.Comment object at 0x1059a51f0>
    // <conv.chunks.Comment object at 0x1059a53d0>
    sta(BoundingBox_UL_Corner, y);
    lda(0x2);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    pla();
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x1059a57c0>
    // <conv.chunks.Comment object at 0x1059a59d0>
    // <conv.chunks.Comment object at 0x1059a5b50>
    // <conv.chunks.Comment object at 0x1059a5c10>
    // <conv.chunks.Comment object at 0x1059a5cd0>
    rts();
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda(ScreenLeft_X_Pos);
    clc();
    // <conv.chunks.Comment object at 0x1059a5e80>
    // <conv.chunks.Comment object at 0x1059a5fd0>
    adc(0x80);
    sta(0x2);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1059a60c0>
    // <conv.chunks.Comment object at 0x1059a6360>
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
    // <conv.chunks.Comment object at 0x1059a63f0>
    // <conv.chunks.Comment object at 0x1059a66f0>
    // <conv.chunks.Comment object at 0x1059a6780>
    // <conv.chunks.Comment object at 0x1059a6960>
    // <conv.chunks.Comment object at 0x1059a69f0>
    // <conv.chunks.Comment object at 0x1059a6b70>
    // <conv.chunks.Comment object at 0x1059a6cc0>
    // <conv.chunks.Comment object at 0x1059a6e10>
    // <conv.chunks.Comment object at 0x1059a6ea0>
    // <conv.chunks.Comment object at 0x1059a7080>
    // <conv.chunks.Comment object at 0x1059a71d0>
    // <conv.chunks.Comment object at 0x1059a7320>
    sta(BoundingBox_DR_XPos, y);
    JMP(NoOfs);
}

int NoOfs() {
    // <conv.chunks.Comment object at 0x1059a74d0>
    ldx(ObjectOffset);
    rts();
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda(BoundingBox_UL_XPos, y);
    BPL(NoOfs2);
    cmp(0xa0);
    BCC(NoOfs2);
    // <conv.chunks.Comment object at 0x1059a7710>
    // <conv.chunks.Comment object at 0x1059a7860>
    // <conv.chunks.Comment object at 0x1059a79b0>
    // <conv.chunks.Comment object at 0x1059a7a40>
    lda(0x0);
    ldx(BoundingBox_DR_XPos, y);
    BPL(SOLft);
    sta(BoundingBox_DR_XPos, y);
    JMP(SOLft);
}

int SOLft() {
    // <conv.chunks.Comment object at 0x1059a7c80>
    // <conv.chunks.Comment object at 0x1059a7e60>
    // <conv.chunks.Comment object at 0x1059a7fb0>
    // <conv.chunks.Comment object at 0x1059ac140>
    sta(BoundingBox_UL_XPos, y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // <conv.chunks.Comment object at 0x1059ac2f0>
    ldx(ObjectOffset);
    rts();
    JMP(PlayerCollisionCore);
}

int PlayerCollisionCore() {
    ldx(0x0);
    JMP(SprObjectCollisionCore);
}

int SprObjectCollisionCore() {
    sty(0x6);
    // <conv.chunks.Comment object at 0x1059ac740>
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
    rts();
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
    // <conv.chunks.Comment object at 0x1059ada00>
    // <conv.chunks.Comment object at 0x1059adb50>
    // <conv.chunks.Comment object at 0x1059adca0>
    // <conv.chunks.Comment object at 0x1059addc0>
    // <conv.chunks.Comment object at 0x1059adf10>
    // <conv.chunks.Comment object at 0x1059ae060>
    // <conv.chunks.Comment object at 0x1059ae1b0>
    rts();
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
    // <conv.chunks.Comment object at 0x1059ae360>
    // <conv.chunks.Comment object at 0x1059ae4b0>
    // <conv.chunks.Comment object at 0x1059ae5d0>
    // <conv.chunks.Comment object at 0x1059ae720>
    // <conv.chunks.Comment object at 0x1059ae840>
    // <conv.chunks.Comment object at 0x1059ae960>
    // <conv.chunks.Comment object at 0x1059aeab0>
    BEQ(NoCollisionFound);
    lda(BoundingBox_LR_Corner, y);
    cmp(BoundingBox_UL_Corner, x);
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
    // <conv.chunks.Comment object at 0x1059af3b0>
    // <conv.chunks.Comment object at 0x1059af470>
    // <conv.chunks.Comment object at 0x1059af530>
    // <conv.chunks.Comment object at 0x1059af5c0>
    // <conv.chunks.Comment object at 0x1059af770>
    // <conv.chunks.Comment object at 0x1059af830>
    rts();
    JMP(BlockBufferChk_Enemy);
}

int BlockBufferChk_Enemy() {
    pha();
    // <conv.chunks.Comment object at 0x1059af9e0>
    // <conv.chunks.Comment object at 0x1059afa40>
    // <conv.chunks.Comment object at 0x1059afaa0>
    // <conv.chunks.Comment object at 0x1059afb30>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1059afc80>
    adc(0x1);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x1059afec0>
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(0xd);
    // <conv.chunks.Comment object at 0x1059b41a0>
    // <conv.chunks.Comment object at 0x1059b4230>
    tax();
    ldy(0x1b);
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(0x1a);
    // <conv.chunks.Comment object at 0x1059b4680>
    txa();
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x1059b48c0>
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // <conv.chunks.Comment object at 0x1059b4a70>
    lda(0x0);
    JMP(BBChk_E);
}

int BBChk_E() {
    // <conv.chunks.Comment object at 0x1059b4b60>
    JSR(BlockBufferCollision);
    ldx(ObjectOffset);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x1059b4d70>
    // <conv.chunks.Comment object at 0x1059b4e90>
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
    // <conv.chunks.Comment object at 0x1059b77d0>
    // <conv.chunks.Comment object at 0x1059b7890>
    // <conv.chunks.Comment object at 0x1059b7920>
    // <conv.chunks.Comment object at 0x1059b7b00>
    adc(SprObject_X_Position, x);
    sta(0x5);
    // <conv.chunks.Comment object at 0x1059b7ce0>
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
    // <conv.chunks.Comment object at 0x1059b7ef0>
    // <conv.chunks.Comment object at 0x1059b7f80>
    // <conv.chunks.Comment object at 0x1059bc1a0>
    // <conv.chunks.Comment object at 0x1059bc260>
    // <conv.chunks.Comment object at 0x1059bc230>
    // <conv.chunks.Comment object at 0x1059bc440>
    // <conv.chunks.Comment object at 0x1059bc500>
    // <conv.chunks.Comment object at 0x1059bc5c0>
    // <conv.chunks.Comment object at 0x1059bc650>
    // <conv.chunks.Comment object at 0x1059bc7a0>
    // <conv.chunks.Comment object at 0x1059bc830>
    clc();
    adc(offsetof(G, BlockBuffer_Y_Adder), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x1059bca70>
    // <conv.chunks.Comment object at 0x1059bcbc0>
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
    // <conv.chunks.Comment object at 0x1059bcd70>
    // <conv.chunks.Comment object at 0x1059bcec0>
    // <conv.chunks.Comment object at 0x1059bce00>
    // <conv.chunks.Comment object at 0x1059bd070>
    // <conv.chunks.Comment object at 0x1059bd220>
    // <conv.chunks.Comment object at 0x1059bd0d0>
    // <conv.chunks.Comment object at 0x1059bd2b0>
    // <conv.chunks.Comment object at 0x1059bd4f0>
    // <conv.chunks.Comment object at 0x1059bd640>
    // <conv.chunks.Comment object at 0x1059bd790>
    // <conv.chunks.Comment object at 0x1059bd8e0>
    lda(SprObject_X_Position, x);
    JMP(RetYC);
}

int RetYC() {
    // <conv.chunks.Comment object at 0x1059bda90>
    anda(0b1111);
    sta(0x4);
    lda(0x3);
    rts();
    JMP(DrawVine);
}

int DrawVine() {
    sty(0x0);
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x1059be0c0>
    // <conv.chunks.Comment object at 0x1059be2d0>
    clc();
    adc(offsetof(G, VineYPosAdder), y);
    ldx(VineObjOffset, y);
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    JSR(SixSpriteStacker);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1059be4e0>
    // <conv.chunks.Comment object at 0x1059be630>
    // <conv.chunks.Comment object at 0x1059be780>
    // <conv.chunks.Comment object at 0x1059be900>
    // <conv.chunks.Comment object at 0x1059be990>
    // <conv.chunks.Comment object at 0x1059beb10>
    // <conv.chunks.Comment object at 0x1059bec30>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x1059bf1d0>
    // <conv.chunks.Comment object at 0x1059bf260>
    // <conv.chunks.Comment object at 0x1059bf500>
    sta(((Sprite_X_Position) + (20)), y);
    lda(0b100001);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x1059bf8f0>
    // <conv.chunks.Comment object at 0x1059bfa10>
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x1059bff20>
    // <conv.chunks.Comment object at 0x1059cc080>
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    ldx(0x5);
    JMP(VineTL);
}

int VineTL() {
    // <conv.chunks.Comment object at 0x1059cc650>
    // <conv.chunks.Comment object at 0x1059cc6e0>
    lda(0xe1);
    sta(Sprite_Tilenumber, y);
    iny();
    // <conv.chunks.Comment object at 0x1059cca40>
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(0x2);
    lda(0x0);
    BNE(SkpVTop);
    // <conv.chunks.Comment object at 0x1059cccb0>
    // <conv.chunks.Comment object at 0x1059ccd40>
    // <conv.chunks.Comment object at 0x1059ccec0>
    // <conv.chunks.Comment object at 0x1059cce90>
    // <conv.chunks.Comment object at 0x1059cd070>
    lda(0xe0);
    sta(Sprite_Tilenumber, y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // <conv.chunks.Comment object at 0x1059cd280>
    // <conv.chunks.Comment object at 0x1059cd460>
    ldx(0x0);
    JMP(ChkFTop);
}

int ChkFTop() {
    // <conv.chunks.Comment object at 0x1059cd550>
    lda(VineStart_Y_Position);
    sec();
    sbc(Sprite_Y_Position, y);
    cmp(0x64);
    BCC(NextVSp);
    // <conv.chunks.Comment object at 0x1059cd7f0>
    // <conv.chunks.Comment object at 0x1059cd940>
    // <conv.chunks.Comment object at 0x1059cd9d0>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(NextVSp);
}

int NextVSp() {
    // <conv.chunks.Comment object at 0x1059cdc10>
    // <conv.chunks.Comment object at 0x1059cddf0>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x1059ce0f0>
    // <conv.chunks.Comment object at 0x1059ce180>
    BNE(ChkFTop);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1059ce3f0>
    rts();
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(0x6);
    JMP(StkLp);
}

int StkLp() {
    // <conv.chunks.Comment object at 0x1059ce5a0>
    // <conv.chunks.Comment object at 0x1059ce630>
    sta(Sprite_Data, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x1059ce900>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1059ceae0>
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x1059cecc0>
    // <conv.chunks.Comment object at 0x1059ced50>
    // <conv.chunks.Comment object at 0x1059ceed0>
    rts();
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy(Misc_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x1059cfb60>
    lda(TimerControl);
    BNE(ForceHPose);
    lda(Misc_State, x);
    anda(0b1111111);
    cmp(0x1);
    BEQ(GetHPose);
    JMP(ForceHPose);
}

int ForceHPose() {
    // <conv.chunks.Comment object at 0x1059d4440>
    // <conv.chunks.Comment object at 0x1059d4560>
    // <conv.chunks.Comment object at 0x1059d46b0>
    // <conv.chunks.Comment object at 0x1059d47d0>
    // <conv.chunks.Comment object at 0x1059d4860>
    // <conv.chunks.Comment object at 0x1059d4a10>
    ldx(0x0);
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // <conv.chunks.Comment object at 0x1059d4ad0>
    // <conv.chunks.Comment object at 0x1059d4cb0>
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x1059d4e30>
    lsr();
    anda(0b11);
    tax();
    JMP(RenderH);
}

int RenderH() {
    // <conv.chunks.Comment object at 0x1059d4f50>
    // <conv.chunks.Comment object at 0x1059d50a0>
    // <conv.chunks.Comment object at 0x1059d5130>
    lda(Misc_Rel_YPos);
    clc();
    adc(offsetof(G, FirstSprYPos), x);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x1059d5340>
    // <conv.chunks.Comment object at 0x1059d5490>
    clc();
    adc(offsetof(G, SecondSprYPos), x);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x1059d5670>
    // <conv.chunks.Comment object at 0x1059d57c0>
    // <conv.chunks.Comment object at 0x1059d59d0>
    clc();
    adc(offsetof(G, FirstSprXPos), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1059d5b80>
    // <conv.chunks.Comment object at 0x1059d5cd0>
    clc();
    adc(offsetof(G, SecondSprXPos), x);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x1059d5eb0>
    // <conv.chunks.Comment object at 0x1059d6000>
    lda(offsetof(G, FirstSprTilenum), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x1059d6330>
    lda(offsetof(G, SecondSprTilenum), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    // <conv.chunks.Comment object at 0x1059d65a0>
    lda(offsetof(G, HammerSprAttrib), x);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1059d68d0>
    // <conv.chunks.Comment object at 0x1059d6a20>
    // <conv.chunks.Comment object at 0x1059d6c30>
    lda(Misc_OffscreenBits);
    anda(0b11111100);
    BEQ(NoHOffscr);
    // <conv.chunks.Comment object at 0x1059d6e40>
    // <conv.chunks.Comment object at 0x1059d6f60>
    lda(0x0);
    sta(Misc_State, x);
    // <conv.chunks.Comment object at 0x1059d70e0>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // <conv.chunks.Comment object at 0x1059d7320>
    // <conv.chunks.Comment object at 0x1059d7500>
    rts();
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1059d7740>
    // <conv.chunks.Comment object at 0x1059d7e60>
    // <conv.chunks.Comment object at 0x1059d7f80>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x1059e41a0>
    // <conv.chunks.Comment object at 0x1059e4230>
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
    // <conv.chunks.Comment object at 0x1059e4740>
    // <conv.chunks.Comment object at 0x1059e4890>
    // <conv.chunks.Comment object at 0x1059e4920>
    // <conv.chunks.Comment object at 0x1059e4ad0>
    // <conv.chunks.Comment object at 0x1059e4bf0>
    // <conv.chunks.Comment object at 0x1059e4c80>
    // <conv.chunks.Comment object at 0x1059e4f20>
    // <conv.chunks.Comment object at 0x1059e5070>
    lda(0x1);
    sta(0x3);
    sta(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x1059e5280>
    // <conv.chunks.Comment object at 0x1059e51c0>
    // <conv.chunks.Comment object at 0x1059e5430>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (8)), y);
    lda(0x7e);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (8)), y);
    // <conv.chunks.Comment object at 0x1059e5a00>
    // <conv.chunks.Comment object at 0x1059e5be0>
    lda(0x7f);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(FlagpoleCollisionYPos);
    BEQ(ChkFlagOffscreen);
    // <conv.chunks.Comment object at 0x1059e5e50>
    // <conv.chunks.Comment object at 0x1059e60f0>
    // <conv.chunks.Comment object at 0x1059e6210>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x1059e63f0>
    adc(0xc);
    tay();
    lda(FlagpoleScore);
    asl();
    // <conv.chunks.Comment object at 0x1059e65a0>
    // <conv.chunks.Comment object at 0x1059e6630>
    // <conv.chunks.Comment object at 0x1059e6780>
    tax();
    lda(offsetof(G, FlagpoleScoreNumTiles), x);
    // <conv.chunks.Comment object at 0x1059e68a0>
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
    // <conv.chunks.Comment object at 0x1059e7e30>
    sta(Sprite_Data, y);
    JMP(ExitDumpSpr);
}

int ExitDumpSpr() {
    rts();
    JMP(DrawLargePlatform);
}

int DrawLargePlatform() {
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x1059f02c0>
    // <conv.chunks.Comment object at 0x1059f0440>
    // <conv.chunks.Comment object at 0x1059f0410>
    // <conv.chunks.Comment object at 0x1059f0620>
    iny();
    lda(Enemy_Rel_XPos);
    JSR(SixSpriteStacker);
    // <conv.chunks.Comment object at 0x1059f0740>
    // <conv.chunks.Comment object at 0x1059f0860>
    ldx(ObjectOffset);
    lda(Enemy_Y_Position, x);
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x1059f0a70>
    // <conv.chunks.Comment object at 0x1059f0bc0>
    ldy(AreaType);
    cpy(0x3);
    // <conv.chunks.Comment object at 0x1059f0dd0>
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
    // <conv.chunks.Comment object at 0x1059f13a0>
    // <conv.chunks.Comment object at 0x1059f14f0>
    // <conv.chunks.Comment object at 0x1059f1700>
    // <conv.chunks.Comment object at 0x1059f1910>
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
    // <conv.chunks.Comment object at 0x1059f1d90>
    // <conv.chunks.Comment object at 0x1059f1ee0>
    // <conv.chunks.Comment object at 0x1059f1f70>
    // <conv.chunks.Comment object at 0x1059f2090>
    // <conv.chunks.Comment object at 0x1059f21e0>
    // <conv.chunks.Comment object at 0x1059f2270>
    // <conv.chunks.Comment object at 0x1059f23c0>
    // <conv.chunks.Comment object at 0x1059f2450>
    dex();
    ldy(Enemy_SprDataOffset, x);
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1059f2600>
    // <conv.chunks.Comment object at 0x1059f2780>
    // <conv.chunks.Comment object at 0x1059f2840>
    BCC(SChk2);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1059f29f0>
    sta(Sprite_Y_Position, y);
    JMP(SChk2);
}

int SChk2() {
    // <conv.chunks.Comment object at 0x1059f2c30>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1059f2d80>
    // <conv.chunks.Comment object at 0x1059f2e40>
    BCC(SChk3);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1059f2ff0>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(SChk3);
}

int SChk3() {
    // <conv.chunks.Comment object at 0x1059f32f0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1059f3440>
    // <conv.chunks.Comment object at 0x1059f3500>
    BCC(SChk4);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1059f36b0>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(SChk4);
}

int SChk4() {
    // <conv.chunks.Comment object at 0x1059f39b0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1059f3b00>
    // <conv.chunks.Comment object at 0x1059f3bc0>
    BCC(SChk5);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1059f3d70>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SChk5);
}

int SChk5() {
    // <conv.chunks.Comment object at 0x1059f80b0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x1059f8200>
    // <conv.chunks.Comment object at 0x1059f82c0>
    BCC(SChk6);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1059f8470>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SChk6);
}

int SChk6() {
    // <conv.chunks.Comment object at 0x1059f8770>
    pla();
    asl();
    BCC(SLChk);
    // <conv.chunks.Comment object at 0x1059f88c0>
    // <conv.chunks.Comment object at 0x1059f8950>
    lda(0xf8);
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(SLChk);
}

int SLChk() {
    // <conv.chunks.Comment object at 0x1059f8b00>
    // <conv.chunks.Comment object at 0x1059f8da0>
    lda(Enemy_OffscreenBits);
    asl();
    // <conv.chunks.Comment object at 0x1059f8f50>
    BCC(ExDLPl);
    JSR(MoveSixSpritesOffscreen);
    JMP(ExDLPl);
}

int ExDLPl() {
    rts();
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
    // <conv.chunks.Comment object at 0x1059f9370>
    // <conv.chunks.Comment object at 0x1059f94c0>
    // <conv.chunks.Comment object at 0x1059f9550>
    // <conv.chunks.Comment object at 0x1059f9670>
    // <conv.chunks.Comment object at 0x1059f97c0>
    lda(Misc_Y_Position, x);
    JSR(DumpTwoSpr);
    lda(Misc_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x1059f9940>
    // <conv.chunks.Comment object at 0x1059f9a60>
    // <conv.chunks.Comment object at 0x1059f9b80>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x1059f9d60>
    // <conv.chunks.Comment object at 0x1059f9df0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x1059fa0f0>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0xf7);
    sta(Sprite_Tilenumber, y);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x1059fa510>
    // <conv.chunks.Comment object at 0x1059fa6f0>
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
    // <conv.chunks.Comment object at 0x1059fabd0>
    // <conv.chunks.Comment object at 0x1059faf30>
    // <conv.chunks.Comment object at 0x1059fb080>
    // <conv.chunks.Comment object at 0x1059fb110>
    // <conv.chunks.Comment object at 0x1059fb2c0>
    // <conv.chunks.Comment object at 0x1059fb410>
    clc();
    adc(0x8);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x1059fb5f0>
    // <conv.chunks.Comment object at 0x1059fb680>
    // <conv.chunks.Comment object at 0x1059fb920>
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
    // <conv.chunks.Comment object at 0x1059fbb60>
    // <conv.chunks.Comment object at 0x1059fbd70>
    // <conv.chunks.Comment object at 0x1059fbec0>
    // <conv.chunks.Comment object at 0x1059fbf50>
    // <conv.chunks.Comment object at 0x105a000e0>
    // <conv.chunks.Comment object at 0x105a00170>
    // <conv.chunks.Comment object at 0x105a002f0>
    // <conv.chunks.Comment object at 0x105a00380>
    // <conv.chunks.Comment object at 0x105a004d0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x105a005c0>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // <conv.chunks.Comment object at 0x105a00800>
    // <conv.chunks.Comment object at 0x105a00aa0>
    // <conv.chunks.Comment object at 0x105a00bf0>
    rts();
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy(((Enemy_SprDataOffset) + (5)));
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x105a014f0>
    // <conv.chunks.Comment object at 0x105a01d30>
    clc();
    adc(0x8);
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    ldx(PowerUpType);
    lda(offsetof(G, PowerUpAttributes), x);
    ora(((Enemy_SprAttrib) + (5)));
    sta(0x4);
    // <conv.chunks.Comment object at 0x105a01ee0>
    // <conv.chunks.Comment object at 0x105a02030>
    // <conv.chunks.Comment object at 0x105a020c0>
    // <conv.chunks.Comment object at 0x105a02270>
    // <conv.chunks.Comment object at 0x105a02300>
    // <conv.chunks.Comment object at 0x105a02480>
    // <conv.chunks.Comment object at 0x105a025d0>
    // <conv.chunks.Comment object at 0x105a027e0>
    txa();
    pha();
    // <conv.chunks.Comment object at 0x105a02990>
    asl();
    asl();
    tax();
    // <conv.chunks.Comment object at 0x105a02ae0>
    // <conv.chunks.Comment object at 0x105a02ba0>
    lda(0x1);
    sta(0x7);
    sta(0x3);
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda(offsetof(G, PowerUpGfxTable), x);
    // <conv.chunks.Comment object at 0x105a02de0>
    sta(0x0);
    lda(((offsetof(G, PowerUpGfxTable)) + (1)), x);
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BPL(PUpDrawLoop);
    ldy(((Enemy_SprDataOffset) + (5)));
    pla();
    BEQ(PUpOfs);
    // <conv.chunks.Comment object at 0x105a030e0>
    // <conv.chunks.Comment object at 0x105a033e0>
    // <conv.chunks.Comment object at 0x105a03530>
    // <conv.chunks.Comment object at 0x105a035c0>
    // <conv.chunks.Comment object at 0x105a03740>
    // <conv.chunks.Comment object at 0x105a03950>
    // <conv.chunks.Comment object at 0x105a039e0>
    cmp(0x3);
    BEQ(PUpOfs);
    sta(0x0);
    lda(FrameCounter);
    lsr();
    anda(0b11);
    ora(((Enemy_SprAttrib) + (5)));
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x105a03b90>
    // <conv.chunks.Comment object at 0x105a03da0>
    // <conv.chunks.Comment object at 0x105a03e30>
    // <conv.chunks.Comment object at 0x105a03fe0>
    // <conv.chunks.Comment object at 0x105a0c0b0>
    // <conv.chunks.Comment object at 0x105a0c1d0>
    // <conv.chunks.Comment object at 0x105a0c3b0>
    // <conv.chunks.Comment object at 0x105a0c500>
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
    // <conv.chunks.Comment object at 0x105a0d010>
    sta(((Sprite_Attributes) + (4)), y);
    lda(((Sprite_Attributes) + (12)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    JMP(PUpOfs);
}

int PUpOfs() {
    // <conv.chunks.Comment object at 0x105a0d4f0>
    // <conv.chunks.Comment object at 0x105a0d610>
    // <conv.chunks.Comment object at 0x105a0d820>
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}

int EnemyGfxHandler() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105a1fad0>
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x105a25e20>
    // <conv.chunks.Comment object at 0x105a26060>
    ldy(Enemy_SprDataOffset, x);
    sty(0xeb);
    // <conv.chunks.Comment object at 0x105a262a0>
    lda(0x0);
    sta(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x105a263f0>
    lda(Enemy_MovingDir, x);
    sta(0x3);
    // <conv.chunks.Comment object at 0x105a266f0>
    lda(Enemy_SprAttrib, x);
    sta(0x4);
    // <conv.chunks.Comment object at 0x105a26930>
    lda(Enemy_ID, x);
    cmp(PiranhaPlant);
    BNE(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x105a26b40>
    // <conv.chunks.Comment object at 0x105a26c60>
    ldy(PiranhaPlant_Y_Speed, x);
    BMI(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x105a26ea0>
    ldy(EnemyFrameTimer, x);
    BEQ(CheckForRetainerObj);
    rts();
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x105a272f0>
    sta(0xed);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x105a27440>
    tay();
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x105a276e0>
    cmp(RetainerObject);
    BNE(CheckForBulletBillCV);
    ldy(0x0);
    lda(0x1);
    // <conv.chunks.Comment object at 0x105a27920>
    // <conv.chunks.Comment object at 0x105a27a40>
    // <conv.chunks.Comment object at 0x105a27ad0>
    sta(0x3);
    lda(0x15);
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp(BulletBill_CannonVar);
    BNE(CheckForJumpspring);
    dec(0x2);
    // <conv.chunks.Comment object at 0x105a27ec0>
    // <conv.chunks.Comment object at 0x105a27fe0>
    // <conv.chunks.Comment object at 0x105a30170>
    lda(0x3);
    ldy(EnemyFrameTimer, x);
    BEQ(SBBAt);
    ora(0b100000);
    JMP(SBBAt);
}

int SBBAt() {
    // <conv.chunks.Comment object at 0x105a302c0>
    // <conv.chunks.Comment object at 0x105a304a0>
    // <conv.chunks.Comment object at 0x105a305f0>
    // <conv.chunks.Comment object at 0x105a30710>
    sta(0x4);
    ldy(0x0);
    sty(0xed);
    lda(0x8);
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp(JumpspringObject);
    // <conv.chunks.Comment object at 0x105a30c20>
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
    // <conv.chunks.Comment object at 0x105a31220>
    // <conv.chunks.Comment object at 0x105a311f0>
    // <conv.chunks.Comment object at 0x105a313d0>
    // <conv.chunks.Comment object at 0x105a31550>
    // <conv.chunks.Comment object at 0x105a315e0>
    // <conv.chunks.Comment object at 0x105a31790>
    BMI(CheckBowserGfxFlag);
    inc(VerticalFlipFlag);
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x105a31b20>
    BEQ(CheckForGoomba);
    ldy(0x16);
    // <conv.chunks.Comment object at 0x105a31d30>
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
    // <conv.chunks.Comment object at 0x105a32270>
    cpy(Goomba);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x105a320f0>
    lda(Enemy_State, x);
    cmp(0x2);
    BCC(GmbaAnim);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x105a326c0>
    // <conv.chunks.Comment object at 0x105a32750>
    // <conv.chunks.Comment object at 0x105a32900>
    stx(0xec);
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // <conv.chunks.Comment object at 0x105a32990>
    anda(0b100000);
    ora(TimerControl);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x105a32c60>
    // <conv.chunks.Comment object at 0x105a32d80>
    lda(FrameCounter);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x105a32f90>
    BNE(CheckBowserFront);
    lda(0x3);
    eor(0b11);
    sta(0x3);
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda(offsetof(G, EnemyAttributeData), y);
    ora(0x4);
    // <conv.chunks.Comment object at 0x105a333b0>
    // <conv.chunks.Comment object at 0x105a33680>
    sta(0x4);
    lda(offsetof(G, EnemyGfxTableOffsets), y);
    tax();
    ldy(0xec);
    // <conv.chunks.Comment object at 0x105a33710>
    // <conv.chunks.Comment object at 0x105a339e0>
    // <conv.chunks.Comment object at 0x105a33aa0>
    lda(BowserGfxFlag);
    BEQ(CheckForSpiny);
    // <conv.chunks.Comment object at 0x105a33c80>
    cmp(0x1);
    BNE(CheckBowserRear);
    lda(BowserBodyControls);
    BPL(ChkFrontSte);
    ldx(0xde);
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // <conv.chunks.Comment object at 0x105a33e00>
    // <conv.chunks.Comment object at 0x105a33fb0>
    // <conv.chunks.Comment object at 0x105a3c110>
    // <conv.chunks.Comment object at 0x105a3c230>
    // <conv.chunks.Comment object at 0x105a3c2c0>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x105a3c440>
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
    // <conv.chunks.Comment object at 0x105a3c980>
    anda(0x1);
    BEQ(ChkRearSte);
    ldx(0xe4);
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // <conv.chunks.Comment object at 0x105a3cb00>
    // <conv.chunks.Comment object at 0x105a3ccb0>
    // <conv.chunks.Comment object at 0x105a3cd40>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x105a3cec0>
    BEQ(DrawBowser);
    lda(0x2);
    sec();
    // <conv.chunks.Comment object at 0x105a3d160>
    // <conv.chunks.Comment object at 0x105a3d130>
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
    // <conv.chunks.Comment object at 0x105a3d640>
    // <conv.chunks.Comment object at 0x105a3d6d0>
    // <conv.chunks.Comment object at 0x105a3d880>
    // <conv.chunks.Comment object at 0x105a3d910>
    // <conv.chunks.Comment object at 0x105a3daf0>
    lda(0x2);
    sta(0x3);
    // <conv.chunks.Comment object at 0x105a3dd30>
    lda(0x5);
    sta(0xec);
    JMP(NotEgg);
}

int NotEgg() {
    // <conv.chunks.Comment object at 0x105a3df40>
    // <conv.chunks.Comment object at 0x105a3dfd0>
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(0x90);
    BNE(CheckUpsideDownShell);
    // <conv.chunks.Comment object at 0x105a3e1e0>
    // <conv.chunks.Comment object at 0x105a3e270>
    lda(0xed);
    anda(0b100000);
    BNE(NoLAFr);
    // <conv.chunks.Comment object at 0x105a3e420>
    // <conv.chunks.Comment object at 0x105a3e630>
    lda(FrenzyEnemyTimer);
    cmp(0x10);
    BCS(NoLAFr);
    ldx(0x96);
    JMP(NoLAFr);
}

int NoLAFr() {
    // <conv.chunks.Comment object at 0x105a3e870>
    // <conv.chunks.Comment object at 0x105a3e900>
    // <conv.chunks.Comment object at 0x105a3eae0>
    // <conv.chunks.Comment object at 0x105a3eb70>
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}

int CheckUpsideDownShell() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x105a3ede0>
    cmp(0x4);
    BCS(CheckRightSideUpShell);
    // <conv.chunks.Comment object at 0x105a3ef30>
    cpy(0x2);
    BCC(CheckRightSideUpShell);
    ldx(0x5a);
    // <conv.chunks.Comment object at 0x105a3f140>
    // <conv.chunks.Comment object at 0x105a3f2f0>
    ldy(0xef);
    cpy(BuzzyBeetle);
    // <conv.chunks.Comment object at 0x105a3f380>
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
    // <conv.chunks.Comment object at 0x105a3f9b0>
    // <conv.chunks.Comment object at 0x105a3fa40>
    // <conv.chunks.Comment object at 0x105a3fb30>
    // <conv.chunks.Comment object at 0x105a3fce0>
    // <conv.chunks.Comment object at 0x105a3fe30>
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
    // <conv.chunks.Comment object at 0x105a44f80>
    cmp(HammerBro);
    BNE(CheckForBloober);
    // <conv.chunks.Comment object at 0x105a45160>
    lda(0xed);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x105a45280>
    anda(0b1000);
    BEQ(CheckDefeatedState);
    ldx(0xb4);
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(0x48);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x105a45910>
    // <conv.chunks.Comment object at 0x105a459a0>
    lda(EnemyIntervalTimer, y);
    cmp(0x5);
    BCS(CheckDefeatedState);
    cpx(0x3c);
    BNE(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x105a45cd0>
    // <conv.chunks.Comment object at 0x105a45e80>
    // <conv.chunks.Comment object at 0x105a45f10>
    cmp(0x1);
    BEQ(CheckDefeatedState);
    inc(0x2);
    // <conv.chunks.Comment object at 0x105a46120>
    // <conv.chunks.Comment object at 0x105a46300>
    inc(0x2);
    inc(0x2);
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x105a46750>
    cmp(Goomba);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x105a46720>
    cmp(0x8);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x105a46ae0>
    cmp(Podoboo);
    BEQ(CheckDefeatedState);
    cmp(0x18);
    // <conv.chunks.Comment object at 0x105a46db0>
    // <conv.chunks.Comment object at 0x105a46ed0>
    BCS(CheckDefeatedState);
    ldy(0x0);
    cmp(0x15);
    BNE(CheckForSecondFrame);
    iny();
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x105a47140>
    // <conv.chunks.Comment object at 0x105a47260>
    // <conv.chunks.Comment object at 0x105a47440>
    // <conv.chunks.Comment object at 0x105a474d0>
    cmp(World8);
    BCS(CheckDefeatedState);
    ldx(0xa2);
    lda(0x3);
    // <conv.chunks.Comment object at 0x105a47620>
    // <conv.chunks.Comment object at 0x105a47830>
    // <conv.chunks.Comment object at 0x105a478c0>
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
    // <conv.chunks.Comment object at 0x105a4c0e0>
    // <conv.chunks.Comment object at 0x105a4c170>
    ora(TimerControl);
    BNE(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x105a4c3e0>
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
    // <conv.chunks.Comment object at 0x105a4c860>
    // <conv.chunks.Comment object at 0x105a4c8f0>
    // <conv.chunks.Comment object at 0x105a4ca70>
    lda(0xef);
    cmp(0x4);
    BCC(DrawEnemyObject);
    // <conv.chunks.Comment object at 0x105a4cb90>
    // <conv.chunks.Comment object at 0x105a4cd10>
    ldy(0x1);
    sty(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x105a4cf20>
    dey();
    sty(0xec);
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(0xeb);
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // <conv.chunks.Comment object at 0x105a4d2e0>
    // <conv.chunks.Comment object at 0x105a4d370>
    // <conv.chunks.Comment object at 0x105a4d4f0>
    JSR(DrawEnemyObjRow);
    ldx(ObjectOffset);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x105a4d700>
    // <conv.chunks.Comment object at 0x105a4d820>
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
    // <conv.chunks.Comment object at 0x105a4de20>
    // <conv.chunks.Comment object at 0x105a4df40>
    // <conv.chunks.Comment object at 0x105a4e060>
    // <conv.chunks.Comment object at 0x105a4e1b0>
    iny();
    iny();
    JSR(DumpSixSpr);
    // <conv.chunks.Comment object at 0x105a4e390>
    // <conv.chunks.Comment object at 0x105a4e420>
    dey();
    dey();
    // <conv.chunks.Comment object at 0x105a4e600>
    tya();
    tax();
    // <conv.chunks.Comment object at 0x105a4e750>
    lda(0xef);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x105a4e7e0>
    BEQ(FlipEnemyVertically);
    cmp(Lakitu);
    BEQ(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x105a4eae0>
    // <conv.chunks.Comment object at 0x105a4eb40>
    cmp(0x15);
    BCS(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x105a4edb0>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda(Sprite_Tilenumber, x);
    pha();
    // <conv.chunks.Comment object at 0x105a4f290>
    // <conv.chunks.Comment object at 0x105a4f410>
    lda(((Sprite_Tilenumber) + (4)), x);
    pha();
    lda(((Sprite_Tilenumber) + (16)), y);
    sta(Sprite_Tilenumber, x);
    // <conv.chunks.Comment object at 0x105a4f710>
    // <conv.chunks.Comment object at 0x105a4f920>
    lda(((Sprite_Tilenumber) + (20)), y);
    sta(((Sprite_Tilenumber) + (4)), x);
    pla();
    sta(((Sprite_Tilenumber) + (20)), y);
    // <conv.chunks.Comment object at 0x105a4fe60>
    // <conv.chunks.Comment object at 0x105a4fef0>
    pla();
    sta(((Sprite_Tilenumber) + (16)), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda(BowserGfxFlag);
    BNE(SkipToOffScrChk);
    // <conv.chunks.Comment object at 0x105a583e0>
    // <conv.chunks.Comment object at 0x105a58500>
    lda(0xef);
    ldx(0xec);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x105a586b0>
    // <conv.chunks.Comment object at 0x105a587d0>
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // <conv.chunks.Comment object at 0x105a58a70>
    // <conv.chunks.Comment object at 0x105a58b90>
    cmp(Bloober);
    BEQ(MirrorEnemyGfx);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x105a58e30>
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
    // <conv.chunks.Comment object at 0x105a59040>
    // <conv.chunks.Comment object at 0x105a59190>
    // <conv.chunks.Comment object at 0x105a592b0>
    // <conv.chunks.Comment object at 0x105a59340>
    // <conv.chunks.Comment object at 0x105a59550>
    // <conv.chunks.Comment object at 0x105a595e0>
    // <conv.chunks.Comment object at 0x105a59790>
    cmp(0x15);
    BNE(SpnySC);
    lda(0x42);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SpnySC);
}

int SpnySC() {
    // <conv.chunks.Comment object at 0x105a59a30>
    // <conv.chunks.Comment object at 0x105a59ac0>
    // <conv.chunks.Comment object at 0x105a59d60>
    cpx(0x2);
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x105a5a000>
    BNE(CheckToMirrorLakitu);
    lda(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x105a5a210>
    anda(0b10100011);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x105a5a450>
    // <conv.chunks.Comment object at 0x105a5a5a0>
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    cpx(0x5);
    BNE(EggExc);
    ora(0b10000000);
    JMP(EggExc);
}

int EggExc() {
    // <conv.chunks.Comment object at 0x105a5a990>
    // <conv.chunks.Comment object at 0x105a5aab0>
    // <conv.chunks.Comment object at 0x105a5ab40>
    // <conv.chunks.Comment object at 0x105a5ad20>
    // <conv.chunks.Comment object at 0x105a5ae40>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x105a5b0b0>
    sta(((Sprite_Attributes) + (20)), y);
    cpx(0x4);
    BNE(CheckToMirrorLakitu);
    lda(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x105a5b4a0>
    // <conv.chunks.Comment object at 0x105a5b530>
    // <conv.chunks.Comment object at 0x105a5b6e0>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x105a5b9e0>
    // <conv.chunks.Comment object at 0x105a5bbf0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x105a603b0>
    cmp(Lakitu);
    BNE(CheckToMirrorJSpring);
    // <conv.chunks.Comment object at 0x105a60380>
    lda(VerticalFlipFlag);
    BNE(NVFLak);
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b10000001);
    // <conv.chunks.Comment object at 0x105a607d0>
    // <conv.chunks.Comment object at 0x105a60920>
    // <conv.chunks.Comment object at 0x105a60b30>
    sta(((Sprite_Attributes) + (16)), y);
    lda(((Sprite_Attributes) + (20)), y);
    ora(0b1000001);
    // <conv.chunks.Comment object at 0x105a60e30>
    // <conv.chunks.Comment object at 0x105a61040>
    sta(((Sprite_Attributes) + (20)), y);
    ldx(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x105a61340>
    cpx(0x10);
    BCS(SprObjectOffscrChk);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x105a614c0>
    // <conv.chunks.Comment object at 0x105a61670>
    anda(0b10000001);
    sta(((Sprite_Attributes) + (8)), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // <conv.chunks.Comment object at 0x105a61970>
    // <conv.chunks.Comment object at 0x105a61b80>
    // <conv.chunks.Comment object at 0x105a61ca0>
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
    // <conv.chunks.Comment object at 0x105a62630>
    cmp(0x18);
    BCC(SprObjectOffscrChk);
    // <conv.chunks.Comment object at 0x105a62780>
    lda(0x82);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x105a62990>
    // <conv.chunks.Comment object at 0x105a62c30>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx(ObjectOffset);
    lda(Enemy_OffscreenBits);
    // <conv.chunks.Comment object at 0x105a63380>
    // <conv.chunks.Comment object at 0x105a634a0>
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
    // <conv.chunks.Comment object at 0x105a63680>
    // <conv.chunks.Comment object at 0x105a63740>
    // <conv.chunks.Comment object at 0x105a63800>
    // <conv.chunks.Comment object at 0x105a63890>
    // <conv.chunks.Comment object at 0x105a639e0>
    // <conv.chunks.Comment object at 0x105a63a70>
    // <conv.chunks.Comment object at 0x105a63c20>
    pla();
    lsr();
    pha();
    BCC(Row3C);
    lda(0x0);
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}

int Row3C() {
    // <conv.chunks.Comment object at 0x105a63d70>
    // <conv.chunks.Comment object at 0x105a63e30>
    // <conv.chunks.Comment object at 0x105a63ec0>
    // <conv.chunks.Comment object at 0x105a68050>
    // <conv.chunks.Comment object at 0x105a680e0>
    // <conv.chunks.Comment object at 0x105a68290>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x105a683e0>
    lsr();
    pha();
    BCC(Row23C);
    lda(0x10);
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}

int Row23C() {
    // <conv.chunks.Comment object at 0x105a68530>
    // <conv.chunks.Comment object at 0x105a685c0>
    // <conv.chunks.Comment object at 0x105a68710>
    // <conv.chunks.Comment object at 0x105a687a0>
    // <conv.chunks.Comment object at 0x105a68950>
    pla();
    lsr();
    pha();
    // <conv.chunks.Comment object at 0x105a68aa0>
    // <conv.chunks.Comment object at 0x105a68b60>
    BCC(AllRowC);
    lda(0x8);
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}

int AllRowC() {
    // <conv.chunks.Comment object at 0x105a68d10>
    // <conv.chunks.Comment object at 0x105a68da0>
    // <conv.chunks.Comment object at 0x105a68f50>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x105a690a0>
    BCC(ExEGHandler);
    JSR(MoveESprRowOffscreen);
    // <conv.chunks.Comment object at 0x105a69220>
    lda(Enemy_ID, x);
    cmp(Podoboo);
    BEQ(ExEGHandler);
    lda(Enemy_Y_HighPos, x);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x105a69460>
    // <conv.chunks.Comment object at 0x105a695b0>
    // <conv.chunks.Comment object at 0x105a696d0>
    // <conv.chunks.Comment object at 0x105a69820>
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
    // <conv.chunks.Comment object at 0x105a69c40>
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
    // <conv.chunks.Comment object at 0x105a6a300>
    adc(Enemy_SprDataOffset, x);
    tay();
    // <conv.chunks.Comment object at 0x105a6a4e0>
    lda(0xf8);
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // <conv.chunks.Comment object at 0x105a6a7e0>
    adc(Enemy_SprDataOffset, x);
    tay();
    JSR(MoveColOffscreen);
    sta(((Sprite_Data) + (16)), y);
    // <conv.chunks.Comment object at 0x105a6a9c0>
    // <conv.chunks.Comment object at 0x105a6aa50>
    // <conv.chunks.Comment object at 0x105a6ab70>
    rts();
    JMP(DrawBlock);
}

int DrawBlock() {
    lda(Block_Rel_YPos);
    sta(0x2);
    lda(Block_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x105a6aff0>
    // <conv.chunks.Comment object at 0x105a6b350>
    // <conv.chunks.Comment object at 0x105a6b3e0>
    // <conv.chunks.Comment object at 0x105a6b590>
    lda(0x3);
    sta(0x4);
    // <conv.chunks.Comment object at 0x105a6b7a0>
    lsr();
    sta(0x3);
    ldy(Block_SprDataOffset, x);
    ldx(0x0);
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // <conv.chunks.Comment object at 0x105a6b950>
    // <conv.chunks.Comment object at 0x105a6b9e0>
    // <conv.chunks.Comment object at 0x105a6bb90>
    // <conv.chunks.Comment object at 0x105a6bc20>
    lda(offsetof(G, DefaultBlockObjTiles), x);
    sta(0x0);
    lda(((offsetof(G, DefaultBlockObjTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    cpx(0x4);
    BNE(DBlkLoop);
    ldx(ObjectOffset);
    ldy(Block_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x105a6be60>
    // <conv.chunks.Comment object at 0x105a6bef0>
    // <conv.chunks.Comment object at 0x105a7c1a0>
    // <conv.chunks.Comment object at 0x105a7c2c0>
    // <conv.chunks.Comment object at 0x105a7c350>
    // <conv.chunks.Comment object at 0x105a7c500>
    // <conv.chunks.Comment object at 0x105a7c620>
    lda(AreaType);
    cmp(0x1);
    BEQ(ChkRep);
    // <conv.chunks.Comment object at 0x105a7c860>
    // <conv.chunks.Comment object at 0x105a7c8f0>
    lda(0x86);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (4)), y);
    JMP(ChkRep);
}

int ChkRep() {
    // <conv.chunks.Comment object at 0x105a7cb30>
    // <conv.chunks.Comment object at 0x105a7cd10>
    // <conv.chunks.Comment object at 0x105a7cf20>
    lda(Block_Metatile, x);
    cmp(0xc4);
    BNE(BlkOffscr);
    lda(0x87);
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(0x3);
    // <conv.chunks.Comment object at 0x105a7d0d0>
    // <conv.chunks.Comment object at 0x105a7d160>
    // <conv.chunks.Comment object at 0x105a7d310>
    // <conv.chunks.Comment object at 0x105a7d460>
    // <conv.chunks.Comment object at 0x105a7d4f0>
    // <conv.chunks.Comment object at 0x105a7d640>
    // <conv.chunks.Comment object at 0x105a7d6d0>
    ldx(AreaType);
    dex();
    BEQ(SetBFlip);
    lsr();
    JMP(SetBFlip);
}

int SetBFlip() {
    // <conv.chunks.Comment object at 0x105a7d910>
    // <conv.chunks.Comment object at 0x105a7d9a0>
    // <conv.chunks.Comment object at 0x105a7daf0>
    // <conv.chunks.Comment object at 0x105a7db80>
    ldx(ObjectOffset);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x105a7dcd0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x105a7df10>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x105a7e210>
    anda(0b10000011);
    sta(((Sprite_Attributes) + (8)), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // <conv.chunks.Comment object at 0x105a7e510>
    // <conv.chunks.Comment object at 0x105a7e720>
    lda(Block_OffscreenBits);
    pha();
    anda(0b100);
    BEQ(PullOfsB);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x105a7e8a0>
    // <conv.chunks.Comment object at 0x105a7e930>
    // <conv.chunks.Comment object at 0x105a7ea50>
    // <conv.chunks.Comment object at 0x105a7eb70>
    // <conv.chunks.Comment object at 0x105a7ec00>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // <conv.chunks.Comment object at 0x105a7f080>
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // <conv.chunks.Comment object at 0x105a7f170>
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
    rts();
    JMP(DrawBrickChunks);
}

int DrawBrickChunks() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x105a7f9e0>
    // <conv.chunks.Comment object at 0x105a7fa40>
    sta(0x0);
    lda(0x75);
    // <conv.chunks.Comment object at 0x105a7fad0>
    ldy(GameEngineSubroutine);
    cpy(0x5);
    BEQ(DChunks);
    lda(0x3);
    // <conv.chunks.Comment object at 0x105a7fe60>
    // <conv.chunks.Comment object at 0x105a7fef0>
    // <conv.chunks.Comment object at 0x105a88110>
    sta(0x0);
    lda(0x84);
    JMP(DChunks);
}

int DChunks() {
    // <conv.chunks.Comment object at 0x105a881a0>
    // <conv.chunks.Comment object at 0x105a883b0>
    ldy(Block_SprDataOffset, x);
    iny();
    JSR(DumpFourSpr);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x105a88620>
    // <conv.chunks.Comment object at 0x105a886b0>
    // <conv.chunks.Comment object at 0x105a887d0>
    asl();
    asl();
    asl();
    // <conv.chunks.Comment object at 0x105a88a40>
    asl();
    anda(0xc0);
    ora(0x0);
    iny();
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x105a88b60>
    // <conv.chunks.Comment object at 0x105a88cb0>
    // <conv.chunks.Comment object at 0x105a88bf0>
    // <conv.chunks.Comment object at 0x105a88e60>
    dey();
    dey();
    lda(Block_Rel_YPos);
    JSR(DumpTwoSpr);
    lda(Block_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x105a89040>
    // <conv.chunks.Comment object at 0x105a890d0>
    // <conv.chunks.Comment object at 0x105a891f0>
    // <conv.chunks.Comment object at 0x105a89310>
    // <conv.chunks.Comment object at 0x105a89430>
    // <conv.chunks.Comment object at 0x105a89580>
    sec();
    sbc(ScreenLeft_X_Pos);
    sta(0x0);
    // <conv.chunks.Comment object at 0x105a89760>
    // <conv.chunks.Comment object at 0x105a898b0>
    sec();
    sbc(Block_Rel_XPos);
    adc(0x0);
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    lda(((Block_Rel_YPos) + (1)));
    // <conv.chunks.Comment object at 0x105a89a30>
    // <conv.chunks.Comment object at 0x105a89b80>
    // <conv.chunks.Comment object at 0x105a89c10>
    // <conv.chunks.Comment object at 0x105a89d00>
    // <conv.chunks.Comment object at 0x105a89fa0>
    sta(((Sprite_Y_Position) + (8)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(((Block_Rel_XPos) + (1)));
    sta(((Sprite_X_Position) + (8)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105a8a360>
    // <conv.chunks.Comment object at 0x105a8a570>
    // <conv.chunks.Comment object at 0x105a8a750>
    // <conv.chunks.Comment object at 0x105a8a990>
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
    // <conv.chunks.Comment object at 0x105a8ab10>
    // <conv.chunks.Comment object at 0x105a8ad20>
    // <conv.chunks.Comment object at 0x105a8adb0>
    // <conv.chunks.Comment object at 0x105a8aea0>
    // <conv.chunks.Comment object at 0x105a8b140>
    // <conv.chunks.Comment object at 0x105a8b260>
    // <conv.chunks.Comment object at 0x105a8b380>
    // <conv.chunks.Comment object at 0x105a8b4d0>
    // <conv.chunks.Comment object at 0x105a8b560>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // <conv.chunks.Comment object at 0x105a8b710>
    // <conv.chunks.Comment object at 0x105a8b8c0>
    lda(0x0);
    BPL(ExBCDr);
    lda(Sprite_X_Position, y);
    cmp(((Sprite_X_Position) + (4)), y);
    BCC(ExBCDr);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x105a8b9e0>
    // <conv.chunks.Comment object at 0x105a8bb90>
    // <conv.chunks.Comment object at 0x105a8bce0>
    // <conv.chunks.Comment object at 0x105a8bef0>
    // <conv.chunks.Comment object at 0x105a90080>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // <conv.chunks.Comment object at 0x105a90590>
    rts();
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
    // <conv.chunks.Comment object at 0x105a90d70>
    // <conv.chunks.Comment object at 0x105a90ec0>
    lsr();
    pha();
    anda(0x1);
    eor(0x64);
    sta(Sprite_Tilenumber, y);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x105a91010>
    // <conv.chunks.Comment object at 0x105a910a0>
    // <conv.chunks.Comment object at 0x105a91130>
    // <conv.chunks.Comment object at 0x105a91250>
    // <conv.chunks.Comment object at 0x105a91460>
    // <conv.chunks.Comment object at 0x105a91520>
    lsr();
    lda(0x2);
    BCC(FireA);
    ora(0b11000000);
    JMP(FireA);
}

int FireA() {
    // <conv.chunks.Comment object at 0x105a91640>
    // <conv.chunks.Comment object at 0x105a916d0>
    // <conv.chunks.Comment object at 0x105a918b0>
    // <conv.chunks.Comment object at 0x105a919d0>
    sta(Sprite_Attributes, y);
    rts();
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
    // <conv.chunks.Comment object at 0x105a926c0>
    // <conv.chunks.Comment object at 0x105a92750>
    // <conv.chunks.Comment object at 0x105a928d0>
    // <conv.chunks.Comment object at 0x105a92960>
    // <conv.chunks.Comment object at 0x105a92ab0>
    // <conv.chunks.Comment object at 0x105a92b40>
    // <conv.chunks.Comment object at 0x105a92c60>
    // <conv.chunks.Comment object at 0x105a92db0>
    // <conv.chunks.Comment object at 0x105a92e40>
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (8)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x105a93290>
    // <conv.chunks.Comment object at 0x105a93320>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(Fireball_Rel_XPos);
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x105a93800>
    // <conv.chunks.Comment object at 0x105a93950>
    // <conv.chunks.Comment object at 0x105a939e0>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (4)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x105a93e30>
    // <conv.chunks.Comment object at 0x105a93ec0>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (12)), y);
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x105a9c3e0>
    // <conv.chunks.Comment object at 0x105a9c470>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x105a9c6b0>
    lda(0x42);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x105a9c9b0>
    lda(0xc2);
    sta(((Sprite_Attributes) + (12)), y);
    rts();
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x105a9d040>
    sta(Fireball_State, x);
    rts();
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
    // <conv.chunks.Comment object at 0x105a9d370>
    // <conv.chunks.Comment object at 0x105a9d4c0>
    // <conv.chunks.Comment object at 0x105a9d610>
    // <conv.chunks.Comment object at 0x105a9d6a0>
    // <conv.chunks.Comment object at 0x105a9d7f0>
    // <conv.chunks.Comment object at 0x105a9d880>
    // <conv.chunks.Comment object at 0x105a9d910>
    // <conv.chunks.Comment object at 0x105a9daf0>
    dey();
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x105a9dc10>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x105a9de50>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x105a9e0f0>
    // <conv.chunks.Comment object at 0x105a9e180>
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x105a9e690>
    // <conv.chunks.Comment object at 0x105a9e720>
    sta(((Sprite_X_Position) + (20)), y);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x105a9eba0>
    tax();
    pha();
    cpx(0x20);
    BCS(TopSP);
    lda(0xf8);
    JMP(TopSP);
}

int TopSP() {
    // <conv.chunks.Comment object at 0x105a9edb0>
    // <conv.chunks.Comment object at 0x105a9ee40>
    // <conv.chunks.Comment object at 0x105a9eed0>
    // <conv.chunks.Comment object at 0x105a9f0b0>
    // <conv.chunks.Comment object at 0x105a9f140>
    JSR(DumpThreeSpr);
    pla();
    // <conv.chunks.Comment object at 0x105a9f380>
    clc();
    adc(0x80);
    // <conv.chunks.Comment object at 0x105a9f4a0>
    tax();
    cpx(0x20);
    BCS(BotSP);
    lda(0xf8);
    JMP(BotSP);
}

int BotSP() {
    // <conv.chunks.Comment object at 0x105a9f650>
    // <conv.chunks.Comment object at 0x105a9f6e0>
    // <conv.chunks.Comment object at 0x105a9f8c0>
    // <conv.chunks.Comment object at 0x105a9f950>
    sta(((Sprite_Y_Position) + (12)), y);
    sta(((Sprite_Y_Position) + (16)), y);
    // <conv.chunks.Comment object at 0x105a9fc50>
    sta(((Sprite_Y_Position) + (20)), y);
    lda(Enemy_OffscreenBits);
    pha();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x105aa8080>
    // <conv.chunks.Comment object at 0x105aa81d0>
    // <conv.chunks.Comment object at 0x105aa8260>
    BEQ(SOfs);
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x105aa84a0>
    // <conv.chunks.Comment object at 0x105aa8530>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SOfs);
}

int SOfs() {
    // <conv.chunks.Comment object at 0x105aa88f0>
    pla();
    pha();
    anda(0b100);
    // <conv.chunks.Comment object at 0x105aa8aa0>
    BEQ(SOfs2);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x105aa8ce0>
    // <conv.chunks.Comment object at 0x105aa8d70>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SOfs2);
}

int SOfs2() {
    // <conv.chunks.Comment object at 0x105aa91f0>
    pla();
    anda(0b10);
    // <conv.chunks.Comment object at 0x105aa9310>
    BEQ(ExSPl);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x105aa9550>
    // <conv.chunks.Comment object at 0x105aa95e0>
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(ExSPl);
}

int ExSPl() {
    // <conv.chunks.Comment object at 0x105aa9a60>
    ldx(ObjectOffset);
    rts();
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x105aa9cd0>
    // <conv.chunks.Comment object at 0x105aa9e20>
    BNE(ExDBub);
    lda(Bubble_OffscreenBits);
    // <conv.chunks.Comment object at 0x105aa9fd0>
    anda(0b1000);
    BNE(ExDBub);
    ldy(Bubble_SprDataOffset, x);
    lda(Bubble_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Bubble_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x105aaa1e0>
    // <conv.chunks.Comment object at 0x105aaa330>
    // <conv.chunks.Comment object at 0x105aaa480>
    // <conv.chunks.Comment object at 0x105aaa5a0>
    // <conv.chunks.Comment object at 0x105aaa6f0>
    // <conv.chunks.Comment object at 0x105aaa810>
    lda(0x74);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x105aaa9c0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    JMP(ExDBub);
}

int ExDBub() {
    // <conv.chunks.Comment object at 0x105aaac00>
    // <conv.chunks.Comment object at 0x105aaae10>
    rts();
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda(InjuryTimer);
    BEQ(CntPl);
    // <conv.chunks.Comment object at 0x105abaa20>
    // <conv.chunks.Comment object at 0x105abb920>
    lda(FrameCounter);
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // <conv.chunks.Comment object at 0x105abbb90>
    // <conv.chunks.Comment object at 0x105abbc20>
    // <conv.chunks.Comment object at 0x105abbd70>
    lda(GameEngineSubroutine);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x105abbef0>
    BEQ(PlayerKilled);
    lda(PlayerChangeSizeFlag);
    BNE(DoChangeSize);
    ldy(SwimmingFlag);
    BEQ(FindPlayerAction);
    // <conv.chunks.Comment object at 0x105ac4140>
    // <conv.chunks.Comment object at 0x105ac4260>
    // <conv.chunks.Comment object at 0x105ac4380>
    // <conv.chunks.Comment object at 0x105ac44a0>
    lda(Player_State);
    cmp(0x0);
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // <conv.chunks.Comment object at 0x105ac46b0>
    // <conv.chunks.Comment object at 0x105ac4740>
    // <conv.chunks.Comment object at 0x105ac48f0>
    lda(FrameCounter);
    anda(0b100);
    BNE(ExPGH);
    tax();
    ldy(Player_SprDataOffset);
    lda(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x105ac4b00>
    // <conv.chunks.Comment object at 0x105ac4c20>
    // <conv.chunks.Comment object at 0x105ac4da0>
    // <conv.chunks.Comment object at 0x105ac4e30>
    // <conv.chunks.Comment object at 0x105ac4f50>
    lsr();
    BCS(SwimKT);
    // <conv.chunks.Comment object at 0x105ac5100>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x105ac5310>
    iny();
    iny();
    JMP(SwimKT);
}

int SwimKT() {
    // <conv.chunks.Comment object at 0x105ac54c0>
    lda(PlayerSize);
    BEQ(BigKTS);
    lda(((Sprite_Tilenumber) + (24)), y);
    cmp(SwimTileRepOffset);
    BEQ(ExPGH);
    inx();
    JMP(BigKTS);
}

int BigKTS() {
    // <conv.chunks.Comment object at 0x105ac5640>
    // <conv.chunks.Comment object at 0x105ac5790>
    // <conv.chunks.Comment object at 0x105ac59a0>
    // <conv.chunks.Comment object at 0x105ac5ac0>
    // <conv.chunks.Comment object at 0x105ac5c40>
    // <conv.chunks.Comment object at 0x105ac5cd0>
    lda(offsetof(G, SwimKickTileNum), x);
    sta(((Sprite_Tilenumber) + (24)), y);
    JMP(ExPGH);
}

int ExPGH() {
    // <conv.chunks.Comment object at 0x105ac5e80>
    // <conv.chunks.Comment object at 0x105ac6090>
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
    sta(PlayerGfxOffset);
    // <conv.chunks.Comment object at 0x105ac6960>
    lda(0x4);
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // <conv.chunks.Comment object at 0x105ac6ae0>
    // <conv.chunks.Comment object at 0x105ac6c90>
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
    // <conv.chunks.Comment object at 0x105ac6ea0>
    // <conv.chunks.Comment object at 0x105ac6fc0>
    // <conv.chunks.Comment object at 0x105ac7050>
    // <conv.chunks.Comment object at 0x105ac7200>
    // <conv.chunks.Comment object at 0x105ac7320>
    // <conv.chunks.Comment object at 0x105ac7440>
    // <conv.chunks.Comment object at 0x105ac7560>
    // <conv.chunks.Comment object at 0x105ac7680>
    // <conv.chunks.Comment object at 0x105ac7710>
    // <conv.chunks.Comment object at 0x105ac78f0>
    // <conv.chunks.Comment object at 0x105ac7a10>
    lda(Player_X_Speed);
    ora(Left_Right_Buttons);
    BEQ(SUpdR);
    dey();
    JMP(SUpdR);
}

int SUpdR() {
    // <conv.chunks.Comment object at 0x105ac7c20>
    // <conv.chunks.Comment object at 0x105ac7d40>
    // <conv.chunks.Comment object at 0x105ac7ec0>
    // <conv.chunks.Comment object at 0x105ac7f50>
    tya();
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}

int PlayerOffscreenChk() {
    lda(Player_OffscreenBits);
    // <conv.chunks.Comment object at 0x105acc200>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x105acc3e0>
    lsr();
    lsr();
    sta(0x0);
    ldx(0x3);
    lda(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x105acc5c0>
    // <conv.chunks.Comment object at 0x105acc650>
    // <conv.chunks.Comment object at 0x105acc740>
    clc();
    adc(0x18);
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // <conv.chunks.Comment object at 0x105acc980>
    // <conv.chunks.Comment object at 0x105accad0>
    // <conv.chunks.Comment object at 0x105accb60>
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
    // <conv.chunks.Comment object at 0x105acd100>
    // <conv.chunks.Comment object at 0x105acd190>
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
    // <conv.chunks.Comment object at 0x105acd6a0>
    // <conv.chunks.Comment object at 0x105acd730>
    lda(offsetof(G, IntermediatePlayerData), x);
    sta(0x2, x);
    // <conv.chunks.Comment object at 0x105acdc70>
    dex();
    BPL(PIntLoop);
    ldx(0xb8);
    ldy(0x4);
    JSR(DrawPlayerLoop);
    lda(((Sprite_Attributes) + (36)));
    ora(0b1000000);
    sta(((Sprite_Attributes) + (32)));
    // <conv.chunks.Comment object at 0x105acde50>
    // <conv.chunks.Comment object at 0x105acdf70>
    // <conv.chunks.Comment object at 0x105ace000>
    // <conv.chunks.Comment object at 0x105ace120>
    // <conv.chunks.Comment object at 0x105ace2d0>
    // <conv.chunks.Comment object at 0x105ace4b0>
    // <conv.chunks.Comment object at 0x105ace5d0>
    rts();
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(0x7);
    // <conv.chunks.Comment object at 0x105ace870>
    // <conv.chunks.Comment object at 0x105ace8d0>
    // <conv.chunks.Comment object at 0x105ace930>
    // <conv.chunks.Comment object at 0x105ace990>
    // <conv.chunks.Comment object at 0x105acea20>
    lda(Player_Rel_XPos);
    sta(Player_Pos_ForScroll);
    sta(0x5);
    // <conv.chunks.Comment object at 0x105acec00>
    // <conv.chunks.Comment object at 0x105aced50>
    lda(Player_Rel_YPos);
    sta(0x2);
    // <conv.chunks.Comment object at 0x105acef60>
    lda(PlayerFacingDir);
    sta(0x3);
    // <conv.chunks.Comment object at 0x105acf170>
    lda(Player_SprAttrib);
    sta(0x4);
    ldx(PlayerGfxOffset);
    ldy(Player_SprDataOffset);
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda(offsetof(G, PlayerGraphicsTable), x);
    // <conv.chunks.Comment object at 0x105acf6e0>
    sta(0x0);
    lda(((offsetof(G, PlayerGraphicsTable)) + (1)), x);
    // <conv.chunks.Comment object at 0x105acf830>
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BNE(DrawPlayerLoop);
    // <conv.chunks.Comment object at 0x105acfc50>
    // <conv.chunks.Comment object at 0x105acfce0>
    rts();
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x105acff20>
    cmp(0x3);
    BEQ(ActionClimbing);
    // <conv.chunks.Comment object at 0x105ad80e0>
    cmp(0x2);
    BEQ(ActionFalling);
    // <conv.chunks.Comment object at 0x105ad82f0>
    cmp(0x1);
    BNE(ProcOnGroundActs);
    // <conv.chunks.Comment object at 0x105ad8500>
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
    // <conv.chunks.Comment object at 0x105ad8e90>
    // <conv.chunks.Comment object at 0x105ad8f20>
    // <conv.chunks.Comment object at 0x105ad90d0>
    // <conv.chunks.Comment object at 0x105ad91f0>
    // <conv.chunks.Comment object at 0x105ad9280>
    // <conv.chunks.Comment object at 0x105ad9430>
    // <conv.chunks.Comment object at 0x105ad9550>
    // <conv.chunks.Comment object at 0x105ad9670>
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
    // <conv.chunks.Comment object at 0x105ad9df0>
    lda(0x0);
    sta(PlayerAnimCtrl);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    // <conv.chunks.Comment object at 0x105ad9f70>
    // <conv.chunks.Comment object at 0x105ada120>
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
    lda(Player_Y_Speed);
    BEQ(NonAnimatedActs);
    JSR(GetGfxOffsetAdder);
    JMP(ThreeFrameExtent);
    JMP(ActionSwimming);
}

int ActionSwimming() {
    ldy(0x1);
    // <conv.chunks.Comment object at 0x105adb020>
    JSR(GetGfxOffsetAdder);
    lda(JumpSwimTimer);
    ora(PlayerAnimCtrl);
    BNE(FourFrameExtent);
    // <conv.chunks.Comment object at 0x105adb230>
    // <conv.chunks.Comment object at 0x105adb350>
    // <conv.chunks.Comment object at 0x105adb470>
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
    // <conv.chunks.Comment object at 0x105adbef0>
    // <conv.chunks.Comment object at 0x105adbf80>
    // <conv.chunks.Comment object at 0x105ae4170>
    // <conv.chunks.Comment object at 0x105ae4200>
    // <conv.chunks.Comment object at 0x105ae4320>
    // <conv.chunks.Comment object at 0x105ae4470>
    // <conv.chunks.Comment object at 0x105ae4590>
    lda(PlayerAnimCtrl);
    clc();
    // <conv.chunks.Comment object at 0x105ae47d0>
    adc(0x1);
    cmp(0x0);
    BCC(SetAnimC);
    lda(0x0);
    JMP(SetAnimC);
}

int SetAnimC() {
    // <conv.chunks.Comment object at 0x105ae4980>
    // <conv.chunks.Comment object at 0x105ae4a10>
    // <conv.chunks.Comment object at 0x105ae4b90>
    // <conv.chunks.Comment object at 0x105ae4c20>
    sta(PlayerAnimCtrl);
    JMP(ExAnimC);
}

int ExAnimC() {
    // <conv.chunks.Comment object at 0x105ae4e00>
    pla();
    rts();
    JMP(GetGfxOffsetAdder);
}

int GetGfxOffsetAdder() {
    lda(PlayerSize);
    BEQ(SzOfs);
    tya();
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x105ae4fe0>
    // <conv.chunks.Comment object at 0x105ae5100>
    // <conv.chunks.Comment object at 0x105ae5280>
    // <conv.chunks.Comment object at 0x105ae5340>
    // <conv.chunks.Comment object at 0x105ae53d0>
    tay();
    JMP(SzOfs);
}

int SzOfs() {
    // <conv.chunks.Comment object at 0x105ae55b0>
    rts();
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy(PlayerAnimCtrl);
    // <conv.chunks.Comment object at 0x105ae5790>
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
    // <conv.chunks.Comment object at 0x105ae6480>
    // <conv.chunks.Comment object at 0x105ae65a0>
    // <conv.chunks.Comment object at 0x105ae6720>
    // <conv.chunks.Comment object at 0x105ae67b0>
    // <conv.chunks.Comment object at 0x105ae6840>
    // <conv.chunks.Comment object at 0x105ae6a20>
    // <conv.chunks.Comment object at 0x105ae6ab0>
    // <conv.chunks.Comment object at 0x105ae6c60>
    sty(PlayerAnimCtrl);
    JMP(GorSLog);
}

int GorSLog() {
    // <conv.chunks.Comment object at 0x105ae6de0>
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
    rts();
    JMP(ShrinkPlayer);
}

int ShrinkPlayer() {
    tya();
    // <conv.chunks.Comment object at 0x105ae77d0>
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
    // <conv.chunks.Comment object at 0x105ae78f0>
    // <conv.chunks.Comment object at 0x105ae7a40>
    // <conv.chunks.Comment object at 0x105ae7ad0>
    // <conv.chunks.Comment object at 0x105ae7b60>
    // <conv.chunks.Comment object at 0x105ae7d40>
    // <conv.chunks.Comment object at 0x105ae7e90>
    // <conv.chunks.Comment object at 0x105ae7f20>
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    rts();
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x105aec290>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(KilledAtt);
    lda(PlayerGfxOffset);
    // <conv.chunks.Comment object at 0x105aec4a0>
    // <conv.chunks.Comment object at 0x105aec530>
    // <conv.chunks.Comment object at 0x105aec6e0>
    cmp(0x50);
    BEQ(C_S_IGAtt);
    cmp(0xb8);
    BEQ(C_S_IGAtt);
    cmp(0xc0);
    // <conv.chunks.Comment object at 0x105aec860>
    // <conv.chunks.Comment object at 0x105aeca10>
    // <conv.chunks.Comment object at 0x105aecaa0>
    // <conv.chunks.Comment object at 0x105aecc50>
    BEQ(C_S_IGAtt);
    cmp(0xc8);
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b111111);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x105aed280>
    // <conv.chunks.Comment object at 0x105aed3a0>
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
    // <conv.chunks.Comment object at 0x105aeddc0>
    // <conv.chunks.Comment object at 0x105aedee0>
    lda(((Sprite_Attributes) + (28)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (28)), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // <conv.chunks.Comment object at 0x105aee3c0>
    // <conv.chunks.Comment object at 0x105aee4e0>
    // <conv.chunks.Comment object at 0x105aee720>
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
    // <conv.chunks.Comment object at 0x105aeec60>
    // <conv.chunks.Comment object at 0x105aeecf0>
    ldy(0x3);
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x105aef110>
    // <conv.chunks.Comment object at 0x105aef1a0>
    ldy(0x2);
    JMP(RelWOfs);
}

int RelWOfs() {
    // <conv.chunks.Comment object at 0x105aef3b0>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    rts();
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x105aef800>
    // <conv.chunks.Comment object at 0x105aef890>
    ldy(0x6);
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x105aefcb0>
    // <conv.chunks.Comment object at 0x105aefd40>
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(0x9);
    ldy(0x4);
    // <conv.chunks.Comment object at 0x105af8050>
    // <conv.chunks.Comment object at 0x105af80e0>
    JSR(VariableObjOfsRelPos);
    inx();
    // <conv.chunks.Comment object at 0x105af83b0>
    inx();
    lda(0x9);
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(0x0);
    // <conv.chunks.Comment object at 0x105af86e0>
    clc();
    adc(0x0);
    tax();
    // <conv.chunks.Comment object at 0x105af8890>
    // <conv.chunks.Comment object at 0x105af8860>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x105af8b30>
    rts();
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda(SprObject_Y_Position, x);
    sta(SprObject_Rel_YPos, y);
    lda(SprObject_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x105af8d10>
    // <conv.chunks.Comment object at 0x105af8e60>
    // <conv.chunks.Comment object at 0x105af8fb0>
    // <conv.chunks.Comment object at 0x105af9130>
    sbc(ScreenLeft_X_Pos);
    sta(SprObject_Rel_XPos, y);
    // <conv.chunks.Comment object at 0x105af92b0>
    rts();
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x105af94c0>
    // <conv.chunks.Comment object at 0x105af9520>
    // <conv.chunks.Comment object at 0x105af95b0>
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
    // <conv.chunks.Comment object at 0x105afa720>
    clc();
    adc(offsetof(G, ObjOffsetData), y);
    tax();
    // <conv.chunks.Comment object at 0x105afa9c0>
    // <conv.chunks.Comment object at 0x105afab40>
    rts();
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x105afac90>
    // <conv.chunks.Comment object at 0x105afad20>
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
    // <conv.chunks.Comment object at 0x105afb2f0>
    // <conv.chunks.Comment object at 0x105afb440>
    tax();
    JMP(GetOffScreenBitsSet);
}

int GetOffScreenBitsSet() {
    tya();
    // <conv.chunks.Comment object at 0x105afb620>
    pha();
    JSR(RunOffscrBitsSubs);
    asl();
    // <conv.chunks.Comment object at 0x105afb860>
    asl();
    asl();
    asl();
    ora(0x0);
    sta(0x0);
    pla();
    // <conv.chunks.Comment object at 0x105afbad0>
    // <conv.chunks.Comment object at 0x105afbaa0>
    // <conv.chunks.Comment object at 0x105afbb60>
    tay();
    lda(0x0);
    // <conv.chunks.Comment object at 0x105afbe60>
    sta(SprObject_OffscrBits, y);
    ldx(ObjectOffset);
    rts();
    JMP(RunOffscrBitsSubs);
}

int RunOffscrBitsSubs() {
    JSR(GetXOffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x105b00260>
    // <conv.chunks.Comment object at 0x105b003b0>
    lsr();
    lsr();
    lsr();
    sta(0x0);
    // <conv.chunks.Comment object at 0x105b00620>
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // <conv.chunks.Comment object at 0x105b00a70>
    // <conv.chunks.Comment object at 0x105b01520>
    // <conv.chunks.Comment object at 0x105b01610>
    lda(ScreenEdge_X_Pos, y);
    sec();
    sbc(SprObject_X_Position, x);
    sta(0x7);
    lda(ScreenEdge_PageLoc, y);
    sbc(SprObject_PageLoc, x);
    ldx(offsetof(G, DefaultXOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x105b01850>
    // <conv.chunks.Comment object at 0x105b018e0>
    // <conv.chunks.Comment object at 0x105b01a60>
    // <conv.chunks.Comment object at 0x105b01af0>
    // <conv.chunks.Comment object at 0x105b01ca0>
    // <conv.chunks.Comment object at 0x105b01df0>
    cmp(0x0);
    BMI(XLdBData);
    ldx(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x105b01fa0>
    // <conv.chunks.Comment object at 0x105b02150>
    cmp(0x1);
    BPL(XLdBData);
    lda(0x38);
    // <conv.chunks.Comment object at 0x105b023c0>
    // <conv.chunks.Comment object at 0x105b02570>
    sta(0x6);
    lda(0x8);
    // <conv.chunks.Comment object at 0x105b02600>
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // <conv.chunks.Comment object at 0x105b02990>
    lda(offsetof(G, XOffscreenBitsData), x);
    ldx(0x4);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x105b02b40>
    // <conv.chunks.Comment object at 0x105b02bd0>
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
    // <conv.chunks.Comment object at 0x105b03170>
    // <conv.chunks.Comment object at 0x105b03a70>
    // <conv.chunks.Comment object at 0x105b03b60>
    lda(offsetof(G, HighPosUnitData), y);
    sec();
    sbc(SprObject_Y_Position, x);
    sta(0x7);
    lda(0x1);
    // <conv.chunks.Comment object at 0x105b03e00>
    // <conv.chunks.Comment object at 0x105b03f80>
    // <conv.chunks.Comment object at 0x105b03f50>
    sbc(SprObject_Y_HighPos, x);
    ldx(offsetof(G, DefaultYOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x105b102f0>
    cmp(0x0);
    BMI(YLdBData);
    ldx(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x105b104a0>
    // <conv.chunks.Comment object at 0x105b10650>
    cmp(0x1);
    BPL(YLdBData);
    lda(0x20);
    // <conv.chunks.Comment object at 0x105b108c0>
    // <conv.chunks.Comment object at 0x105b10a70>
    sta(0x6);
    lda(0x4);
    // <conv.chunks.Comment object at 0x105b10b00>
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // <conv.chunks.Comment object at 0x105b10e90>
    lda(offsetof(G, YOffscreenBitsData), x);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x105b11040>
    cmp(0x0);
    BNE(ExYOfsBS);
    dey();
    // <conv.chunks.Comment object at 0x105b11190>
    // <conv.chunks.Comment object at 0x105b11370>
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
    // <conv.chunks.Comment object at 0x105b11640>
    // <conv.chunks.Comment object at 0x105b11610>
    // <conv.chunks.Comment object at 0x105b116d0>
    // <conv.chunks.Comment object at 0x105b11910>
    // <conv.chunks.Comment object at 0x105b11af0>
    lsr();
    lsr();
    anda(0x7);
    cpy(0x1);
    BCS(SetOscrO);
    adc(0x5);
    JMP(SetOscrO);
}

int SetOscrO() {
    // <conv.chunks.Comment object at 0x105b11ca0>
    // <conv.chunks.Comment object at 0x105b11d30>
    // <conv.chunks.Comment object at 0x105b11e50>
    // <conv.chunks.Comment object at 0x105b12030>
    // <conv.chunks.Comment object at 0x105b120c0>
    tax();
    JMP(ExDivPD);
}

int ExDivPD() {
    // <conv.chunks.Comment object at 0x105b12240>
    rts();
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x105b12390>
    // <conv.chunks.Comment object at 0x105b123f0>
    // <conv.chunks.Comment object at 0x105b12450>
    // <conv.chunks.Comment object at 0x105b124e0>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x105b12690>
    lda(0x0);
    BCC(NoHFlip);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x105b12720>
    // <conv.chunks.Comment object at 0x105b12960>
    // <conv.chunks.Comment object at 0x105b12ba0>
    sta(Sprite_Tilenumber, y);
    lda(0x40);
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // <conv.chunks.Comment object at 0x105b12db0>
    // <conv.chunks.Comment object at 0x105b12e40>
    // <conv.chunks.Comment object at 0x105b13020>
    sta(Sprite_Tilenumber, y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x105b13200>
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x0);
    JMP(SetHFAt);
}

int SetHFAt() {
    // <conv.chunks.Comment object at 0x105b134d0>
    // <conv.chunks.Comment object at 0x105b13560>
    ora(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x105b13710>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0x2);
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x105b13ad0>
    // <conv.chunks.Comment object at 0x105b13b60>
    // <conv.chunks.Comment object at 0x105b13d10>
    lda(0x5);
    sta(Sprite_X_Position, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x105b13f20>
    // <conv.chunks.Comment object at 0x105b181d0>
    // <conv.chunks.Comment object at 0x105b18260>
    sta(((Sprite_X_Position) + (4)), y);
    lda(0x2);
    clc();
    // <conv.chunks.Comment object at 0x105b18590>
    // <conv.chunks.Comment object at 0x105b18560>
    adc(0x8);
    sta(0x2);
    tya();
    clc();
    // <conv.chunks.Comment object at 0x105b188c0>
    // <conv.chunks.Comment object at 0x105b18a10>
    adc(0x8);
    tay();
    inx();
    inx();
    // <conv.chunks.Comment object at 0x105b18c50>
    // <conv.chunks.Comment object at 0x105b18d10>
    rts();
    JMP(SoundEngine);
}

int SoundEngine() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x105b18f20>
    BNE(SndOn);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x105b19490>
    rts();
    JMP(SndOn);
}

int SndOn() {
    lda(0xff);
    sta(JOYPAD_PORT2);
    // <conv.chunks.Comment object at 0x105b19700>
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(PauseModeFlag);
    // <conv.chunks.Comment object at 0x105b19910>
    // <conv.chunks.Comment object at 0x105b19ac0>
    BNE(InPause);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x105b19d00>
    cmp(0x1);
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // <conv.chunks.Comment object at 0x105b19e80>
    // <conv.chunks.Comment object at 0x105b1a030>
    lda(PauseSoundBuffer);
    BNE(ContPau);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x105b1a2d0>
    BEQ(SkipSoundSubroutines);
    sta(PauseSoundBuffer);
    sta(PauseModeFlag);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105b1a4e0>
    // <conv.chunks.Comment object at 0x105b1a600>
    // <conv.chunks.Comment object at 0x105b1a720>
    sta(SND_MASTERCTRL_REG);
    sta(Square1SoundBuffer);
    sta(Square2SoundBuffer);
    sta(NoiseSoundBuffer);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(0x2a);
    // <conv.chunks.Comment object at 0x105b1ac60>
    // <conv.chunks.Comment object at 0x105b1ae10>
    sta(Squ1_SfxLenCounter);
    JMP(PTone1F);
}

int PTone1F() {
    // <conv.chunks.Comment object at 0x105b1b020>
    lda(0x44);
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // <conv.chunks.Comment object at 0x105b1b110>
    // <conv.chunks.Comment object at 0x105b1b2f0>
    lda(Squ1_SfxLenCounter);
    cmp(0x24);
    // <conv.chunks.Comment object at 0x105b1b470>
    BEQ(PTone2F);
    cmp(0x1e);
    // <conv.chunks.Comment object at 0x105b1b6b0>
    BEQ(PTone1F);
    cmp(0x18);
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // <conv.chunks.Comment object at 0x105b1b8f0>
    // <conv.chunks.Comment object at 0x105b1b980>
    // <conv.chunks.Comment object at 0x105b1bb60>
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
    // <conv.chunks.Comment object at 0x105b20050>
    dec(Squ1_SfxLenCounter);
    BNE(SkipSoundSubroutines);
    lda(0x0);
    sta(SND_MASTERCTRL_REG);
    lda(PauseSoundBuffer);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x105b202c0>
    // <conv.chunks.Comment object at 0x105b20350>
    // <conv.chunks.Comment object at 0x105b20500>
    // <conv.chunks.Comment object at 0x105b20620>
    BNE(SkipPIn);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105b20860>
    sta(PauseModeFlag);
    JMP(SkipPIn);
}

int SkipPIn() {
    // <conv.chunks.Comment object at 0x105b20a70>
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
    // <conv.chunks.Comment object at 0x105b20e00>
    // <conv.chunks.Comment object at 0x105b20f20>
    // <conv.chunks.Comment object at 0x105b21040>
    // <conv.chunks.Comment object at 0x105b21160>
    // <conv.chunks.Comment object at 0x105b21280>
    sta(AreaMusicQueue);
    sta(EventMusicQueue);
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x105b215b0>
    sta(Square1SoundQueue);
    sta(Square2SoundQueue);
    sta(NoiseSoundQueue);
    sta(PauseSoundQueue);
    ldy(DAC_Counter);
    // <conv.chunks.Comment object at 0x105b21a90>
    lda(AreaMusicBuffer);
    anda(0b11);
    // <conv.chunks.Comment object at 0x105b21ca0>
    BEQ(NoIncDAC);
    inc(DAC_Counter);
    // <conv.chunks.Comment object at 0x105b21eb0>
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
    // <conv.chunks.Comment object at 0x105b222d0>
    // <conv.chunks.Comment object at 0x105b22420>
    // <conv.chunks.Comment object at 0x105b22540>
    sty(((SND_DELTA_REG) + (1)));
    rts();
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x105b228a0>
    stx(SND_SQUARE1_REG);
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
    sta(((SND_REGISTER) + (2)), x);
    lda(offsetof(G, FreqRegLookupTbl), y);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x105b22f60>
    // <conv.chunks.Comment object at 0x105b23170>
    // <conv.chunks.Comment object at 0x105b232c0>
    // <conv.chunks.Comment object at 0x105b234d0>
    // <conv.chunks.Comment object at 0x105b23620>
    sta(((SND_REGISTER) + (3)), x);
    JMP(NoTone);
}

int NoTone() {
    rts();
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx(SND_SQUARE2_REG);
    // <conv.chunks.Comment object at 0x105b23a40>
    sty(((SND_SQUARE2_REG) + (1)));
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
    // <conv.chunks.Comment object at 0x105b2c500>
    sta(Squ1_SfxLenCounter);
    lda(0x62);
    // <conv.chunks.Comment object at 0x105b2ce90>
    JSR(SetFreq_Squ1);
    ldx(0x99);
    // <conv.chunks.Comment object at 0x105b2d0a0>
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(0x26);
    // <conv.chunks.Comment object at 0x105b2d310>
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
    // <conv.chunks.Comment object at 0x105b2d6a0>
    // <conv.chunks.Comment object at 0x105b2d730>
    JSR(PlaySqu1Sfx);
    lda(0x28);
    sta(Squ1_SfxLenCounter);
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda(Squ1_SfxLenCounter);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x105b2dc40>
    // <conv.chunks.Comment object at 0x105b2dd60>
    BNE(N2Prt);
    ldx(0x5f);
    // <conv.chunks.Comment object at 0x105b2dfa0>
    ldy(0xf6);
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // <conv.chunks.Comment object at 0x105b2e120>
    // <conv.chunks.Comment object at 0x105b2e2d0>
    cmp(0x20);
    BNE(DecJpFPS);
    ldx(0x48);
    JMP(FPS2nd);
}

int FPS2nd() {
    // <conv.chunks.Comment object at 0x105b2e540>
    // <conv.chunks.Comment object at 0x105b2e5d0>
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
    // <conv.chunks.Comment object at 0x105b2ede0>
    ldy(0x93);
    JMP(Fthrow);
}

int Fthrow() {
    // <conv.chunks.Comment object at 0x105b2ef60>
    ldx(0x9e);
    sta(Squ1_SfxLenCounter);
    lda(0xc);
    // <conv.chunks.Comment object at 0x105b2f260>
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b2f4a0>
    cmp(0x6);
    BNE(DecJpFPS);
    lda(0xbb);
    // <conv.chunks.Comment object at 0x105b2f7a0>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // <conv.chunks.Comment object at 0x105b2fa70>
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x105b2fbf0>
    BEQ(CheckSfx1Buffer);
    sty(Square1SoundBuffer);
    BMI(PlaySmallJump);
    // <conv.chunks.Comment object at 0x105b2fe00>
    // <conv.chunks.Comment object at 0x105b2ff20>
    lsr(Square1SoundQueue);
    BCS(PlayBigJump);
    // <conv.chunks.Comment object at 0x105b34170>
    lsr(Square1SoundQueue);
    BCS(PlayBump);
    // <conv.chunks.Comment object at 0x105b343b0>
    lsr(Square1SoundQueue);
    BCS(PlaySwimStomp);
    // <conv.chunks.Comment object at 0x105b345c0>
    lsr(Square1SoundQueue);
    BCS(PlaySmackEnemy);
    // <conv.chunks.Comment object at 0x105b347d0>
    lsr(Square1SoundQueue);
    BCS(PlayPipeDownInj);
    // <conv.chunks.Comment object at 0x105b349e0>
    lsr(Square1SoundQueue);
    BCS(PlayFireballThrow);
    // <conv.chunks.Comment object at 0x105b34bf0>
    lsr(Square1SoundQueue);
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda(Square1SoundBuffer);
    BEQ(ExS1H);
    BMI(ContinueSndJump);
    // <conv.chunks.Comment object at 0x105b34f50>
    // <conv.chunks.Comment object at 0x105b35070>
    // <conv.chunks.Comment object at 0x105b351c0>
    lsr();
    BCS(ContinueSndJump);
    // <conv.chunks.Comment object at 0x105b35370>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x105b35550>
    lsr();
    BCS(ContinueSwimStomp);
    // <conv.chunks.Comment object at 0x105b35700>
    lsr();
    BCS(ContinueSmackEnemy);
    // <conv.chunks.Comment object at 0x105b358b0>
    lsr();
    BCS(ContinuePipeDownInj);
    // <conv.chunks.Comment object at 0x105b35a60>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x105b35c10>
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
    // <conv.chunks.Comment object at 0x105b36000>
    sta(Squ1_SfxLenCounter);
    ldy(0x9c);
    // <conv.chunks.Comment object at 0x105b36210>
    ldx(0x9e);
    lda(0x26);
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy(Squ1_SfxLenCounter);
    lda(((offsetof(G, SwimStompEnvelopeData)) - (1)), y);
    sta(SND_SQUARE1_REG);
    // <conv.chunks.Comment object at 0x105b36630>
    // <conv.chunks.Comment object at 0x105b36750>
    // <conv.chunks.Comment object at 0x105b36960>
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
    // <conv.chunks.Comment object at 0x105b370e0>
    ldy(0xcb);
    ldx(0x9f);
    sta(Squ1_SfxLenCounter);
    lda(0x28);
    // <conv.chunks.Comment object at 0x105b374d0>
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b37830>
    cpy(0x8);
    BNE(SmSpc);
    lda(0xa0);
    sta(((SND_SQUARE1_REG) + (2)));
    // <conv.chunks.Comment object at 0x105b37b60>
    // <conv.chunks.Comment object at 0x105b37bf0>
    lda(0x9f);
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // <conv.chunks.Comment object at 0x105b400b0>
    lda(0x90);
    JMP(SmTick);
}

int SmTick() {
    sta(SND_SQUARE1_REG);
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b403b0>
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(0x0);
    stx(0xf1);
    // <conv.chunks.Comment object at 0x105b40620>
    // <conv.chunks.Comment object at 0x105b40770>
    ldx(0xe);
    stx(SND_MASTERCTRL_REG);
    ldx(0xf);
    stx(SND_MASTERCTRL_REG);
    JMP(ExSfx1);
}

int ExSfx1() {
    rts();
    JMP(PlayPipeDownInj);
}

int PlayPipeDownInj() {
    lda(0x2f);
    // <conv.chunks.Comment object at 0x105b40d40>
    sta(Squ1_SfxLenCounter);
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda(Squ1_SfxLenCounter);
    lsr();
    BCS(NoPDwnL);
    // <conv.chunks.Comment object at 0x105b40f80>
    // <conv.chunks.Comment object at 0x105b410d0>
    // <conv.chunks.Comment object at 0x105b41160>
    lsr();
    BCS(NoPDwnL);
    anda(0b10);
    BEQ(NoPDwnL);
    ldy(0x91);
    // <conv.chunks.Comment object at 0x105b41670>
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
    // <conv.chunks.Comment object at 0x105b43230>
    // <conv.chunks.Comment object at 0x105b420f0>
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
    // <conv.chunks.Comment object at 0x105b48a70>
    // <conv.chunks.Comment object at 0x105b48b00>
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda(Squ2_SfxLenCounter);
    cmp(0x30);
    // <conv.chunks.Comment object at 0x105b48dd0>
    // <conv.chunks.Comment object at 0x105b48ef0>
    BNE(N2Tone);
    lda(0x54);
    // <conv.chunks.Comment object at 0x105b49130>
    sta(((SND_SQUARE2_REG) + (2)));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x105b49580>
    sta(Squ2_SfxLenCounter);
    ldy(0x94);
    // <conv.chunks.Comment object at 0x105b49790>
    lda(0x5e);
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b49af0>
    cmp(0x18);
    BNE(DecrementSfx2Length);
    ldy(0x93);
    // <conv.chunks.Comment object at 0x105b49df0>
    lda(0x18);
    JMP(SBlasJ);
}

int SBlasJ() {
    // <conv.chunks.Comment object at 0x105b49f70>
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(0x36);
    // <conv.chunks.Comment object at 0x105b4a1e0>
    sta(Squ2_SfxLenCounter);
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda(Squ2_SfxLenCounter);
    lsr();
    BCS(DecrementSfx2Length);
    // <conv.chunks.Comment object at 0x105b4a420>
    // <conv.chunks.Comment object at 0x105b4a570>
    // <conv.chunks.Comment object at 0x105b4a600>
    tay();
    lda(((offsetof(G, PowerUpGrabFreqData)) - (1)), y);
    ldx(0x5d);
    // <conv.chunks.Comment object at 0x105b4a7b0>
    // <conv.chunks.Comment object at 0x105b4a9c0>
    ldy(0x7f);
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b4ad20>
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x105b4af90>
    stx(Square2SoundBuffer);
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(0xd);
    // <conv.chunks.Comment object at 0x105b4b1d0>
    stx(SND_MASTERCTRL_REG);
    ldx(0xf);
    stx(SND_MASTERCTRL_REG);
    JMP(ExSfx2);
}

int ExSfx2() {
    rts();
    JMP(Square2SfxHandler);
}

int Square2SfxHandler() {
    lda(Square2SoundBuffer);
    anda(Sfx_ExtraLife);
    // <conv.chunks.Comment object at 0x105b4b6e0>
    // <conv.chunks.Comment object at 0x105b4b800>
    BNE(ContinueExtraLife);
    ldy(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x105b4ba10>
    BEQ(CheckSfx2Buffer);
    sty(Square2SoundBuffer);
    BMI(PlayBowserFall);
    // <conv.chunks.Comment object at 0x105b4bc20>
    // <conv.chunks.Comment object at 0x105b4bd40>
    lsr(Square2SoundQueue);
    BCS(PlayCoinGrab);
    // <conv.chunks.Comment object at 0x105b4bf50>
    lsr(Square2SoundQueue);
    BCS(PlayGrowPowerUp);
    // <conv.chunks.Comment object at 0x105b541a0>
    lsr(Square2SoundQueue);
    BCS(PlayGrowVine);
    // <conv.chunks.Comment object at 0x105b543b0>
    lsr(Square2SoundQueue);
    BCS(PlayBlast);
    // <conv.chunks.Comment object at 0x105b545c0>
    lsr(Square2SoundQueue);
    BCS(PlayTimerTick);
    // <conv.chunks.Comment object at 0x105b547d0>
    lsr(Square2SoundQueue);
    BCS(PlayPowerUpGrab);
    // <conv.chunks.Comment object at 0x105b549e0>
    lsr(Square2SoundQueue);
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda(Square2SoundBuffer);
    BEQ(ExS2H);
    BMI(ContinueBowserFall);
    // <conv.chunks.Comment object at 0x105b54d70>
    // <conv.chunks.Comment object at 0x105b54e90>
    // <conv.chunks.Comment object at 0x105b54fe0>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x105b55190>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x105b55340>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x105b554f0>
    lsr();
    BCS(ContinueBlast);
    // <conv.chunks.Comment object at 0x105b556a0>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x105b55850>
    lsr();
    BCS(ContinuePowerUpGrab);
    // <conv.chunks.Comment object at 0x105b55a00>
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
    // <conv.chunks.Comment object at 0x105b56060>
    sta(Squ2_SfxLenCounter);
    ldy(0xc4);
    // <conv.chunks.Comment object at 0x105b56270>
    lda(0x18);
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b56630>
    cmp(0x8);
    BNE(DecrementSfx2Length);
    ldy(0xa4);
    // <conv.chunks.Comment object at 0x105b56930>
    lda(0x5a);
    JMP(PBFRegs);
}

int PBFRegs() {
    // <conv.chunks.Comment object at 0x105b56ab0>
    ldx(0x9f);
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // <conv.chunks.Comment object at 0x105b56c30>
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(0x30);
    // <conv.chunks.Comment object at 0x105b56e40>
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
    // <conv.chunks.Comment object at 0x105b57350>
    dex();
    BNE(DivLLoop);
    // <conv.chunks.Comment object at 0x105b57500>
    tay();
    lda(((offsetof(G, ExtraLifeFreqData)) - (1)), y);
    // <conv.chunks.Comment object at 0x105b576b0>
    ldx(0x82);
    ldy(0x7f);
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(0x10);
    // <conv.chunks.Comment object at 0x105b57bf0>
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
    // <conv.chunks.Comment object at 0x105b5c0b0>
    sta(((SND_SQUARE2_REG) + (1)));
    lda(0x0);
    // <conv.chunks.Comment object at 0x105b5c380>
    sta(Sfx_SecondaryCounter);
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc(Sfx_SecondaryCounter);
    lda(Sfx_SecondaryCounter);
    lsr();
    // <conv.chunks.Comment object at 0x105b5c5c0>
    // <conv.chunks.Comment object at 0x105b5c6e0>
    // <conv.chunks.Comment object at 0x105b5c830>
    tay();
    cpy(Squ2_SfxLenCounter);
    BEQ(StopGrowItems);
    lda(0x9d);
    // <conv.chunks.Comment object at 0x105b5c950>
    // <conv.chunks.Comment object at 0x105b5ca70>
    // <conv.chunks.Comment object at 0x105b5cb90>
    sta(SND_SQUARE2_REG);
    lda(offsetof(G, PUp_VGrow_FreqData), y);
    // <conv.chunks.Comment object at 0x105b5cda0>
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
    // <conv.chunks.Comment object at 0x105b5d2b0>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda(Noise_SfxLenCounter);
    lsr();
    // <conv.chunks.Comment object at 0x105b5deb0>
    BCC(DecrementSfx3Length);
    tay();
    ldx(offsetof(G, BrickShatterFreqData), y);
    // <conv.chunks.Comment object at 0x105b5e0c0>
    lda(offsetof(G, BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta(SND_NOISE_REG);
    // <conv.chunks.Comment object at 0x105b5e360>
    stx(((SND_NOISE_REG) + (2)));
    lda(0x18);
    sta(((SND_NOISE_REG) + (3)));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec(Noise_SfxLenCounter);
    // <conv.chunks.Comment object at 0x105b5e900>
    BNE(ExSfx3);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x105b5eb40>
    sta(SND_NOISE_REG);
    lda(0x0);
    sta(NoiseSoundBuffer);
    JMP(ExSfx3);
}

int ExSfx3() {
    rts();
    JMP(NoiseSfxHandler);
}

int NoiseSfxHandler() {
    ldy(NoiseSoundQueue);
    // <conv.chunks.Comment object at 0x105b5f050>
    BEQ(CheckNoiseBuffer);
    sty(NoiseSoundBuffer);
    // <conv.chunks.Comment object at 0x105b5f260>
    lsr(NoiseSoundQueue);
    BCS(PlayBrickShatter);
    // <conv.chunks.Comment object at 0x105b5f470>
    lsr(NoiseSoundQueue);
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda(NoiseSoundBuffer);
    BEQ(ExNH);
    // <conv.chunks.Comment object at 0x105b5f7d0>
    // <conv.chunks.Comment object at 0x105b5f8f0>
    lsr();
    BCS(ContinueBrickShatter);
    // <conv.chunks.Comment object at 0x105b5fad0>
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
    // <conv.chunks.Comment object at 0x105b5fec0>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda(Noise_SfxLenCounter);
    lsr();
    tay();
    ldx(0xf);
    // <conv.chunks.Comment object at 0x105b64350>
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
    // <conv.chunks.Comment object at 0x105b64920>
    BNE(LoadEventMusic);
    lda(AreaMusicQueue);
    // <conv.chunks.Comment object at 0x105b64b30>
    BNE(LoadAreaMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b64d40>
    ora(AreaMusicBuffer);
    BNE(ContinueMusic);
    rts();
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
    // <conv.chunks.Comment object at 0x105b657f0>
    ldy(0x0);
    sty(NoteLengthTblAdder);
    sty(AreaMusicBuffer);
    cmp(TimeRunningOutMusic);
    // <conv.chunks.Comment object at 0x105b65970>
    // <conv.chunks.Comment object at 0x105b65b20>
    // <conv.chunks.Comment object at 0x105b65c40>
    BNE(FindEventMusicHeader);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x105b65e50>
    stx(NoteLengthTblAdder);
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(0x4);
    BNE(NoStop1);
    // <conv.chunks.Comment object at 0x105b661b0>
    // <conv.chunks.Comment object at 0x105b66240>
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // <conv.chunks.Comment object at 0x105b66510>
    ldy(0x10);
    JMP(GMLoopB);
}

int GMLoopB() {
    sty(GroundMusicHeaderOfs);
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x105b66810>
    sty(EventMusicBuffer);
    sta(AreaMusicBuffer);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x105b66a20>
    // <conv.chunks.Comment object at 0x105b66b40>
    BNE(FindAreaMusicHeader);
    inc(GroundMusicHeaderOfs);
    ldy(GroundMusicHeaderOfs);
    // <conv.chunks.Comment object at 0x105b66d50>
    // <conv.chunks.Comment object at 0x105b66e70>
    cpy(0x32);
    BNE(LoadHeader);
    // <conv.chunks.Comment object at 0x105b66ff0>
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
    // <conv.chunks.Comment object at 0x105b676b0>
    // <conv.chunks.Comment object at 0x105b67770>
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}

int LoadHeader() {
    lda(MusicHeaderOffsetData, y);
    // <conv.chunks.Comment object at 0x105b67920>
    tay();
    lda(offsetof(G, MusicHeaderData), y);
    // <conv.chunks.Comment object at 0x105b67b00>
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
    // <conv.chunks.Comment object at 0x105b74c80>
    sta(Squ2_NoteLenCounter);
    sta(Squ1_NoteLenCounter);
    sta(Tri_NoteLenCounter);
    sta(Noise_BeatLenCounter);
    lda(0x0);
    // <conv.chunks.Comment object at 0x105b75160>
    sta(MusicOffset_Square2);
    sta(AltRegContentFlag);
    lda(0xb);
    // <conv.chunks.Comment object at 0x105b75370>
    // <conv.chunks.Comment object at 0x105b75490>
    sta(SND_MASTERCTRL_REG);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec(Squ2_NoteLenCounter);
    BNE(MiscSqu2MusicTasks);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x105b758b0>
    // <conv.chunks.Comment object at 0x105b759d0>
    // <conv.chunks.Comment object at 0x105b75af0>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b761e0>
    cmp(TimeRunningOutMusic);
    BNE(NotTRO);
    lda(AreaMusicBuffer_Alt);
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // <conv.chunks.Comment object at 0x105b76510>
    // <conv.chunks.Comment object at 0x105b76630>
    // <conv.chunks.Comment object at 0x105b76750>
    anda(VictoryMusic);
    BNE(VictoryMLoopBack);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x105b769c0>
    anda(0b1011111);
    BNE(MusicLoopBack);
    lda(0x0);
    sta(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x105b76bd0>
    // <conv.chunks.Comment object at 0x105b76cf0>
    // <conv.chunks.Comment object at 0x105b76d80>
    sta(EventMusicBuffer);
    sta(SND_TRIANGLE_REG);
    lda(0x90);
    sta(SND_SQUARE1_REG);
    sta(SND_SQUARE2_REG);
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
    // <conv.chunks.Comment object at 0x105b776e0>
    sta(Squ2_NoteLenBuffer);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x105b778f0>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x105b77c80>
    BNE(SkipFqL1);
    JSR(SetFreq_Squ2);
    BEQ(Rest);
    JSR(LoadControlRegs);
    JMP(Rest);
}

int Rest() {
    // <conv.chunks.Comment object at 0x105b77e90>
    // <conv.chunks.Comment object at 0x105b77fb0>
    // <conv.chunks.Comment object at 0x105b80140>
    // <conv.chunks.Comment object at 0x105b80260>
    sta(Squ2_EnvelopeDataCtrl);
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // <conv.chunks.Comment object at 0x105b803e0>
    // <conv.chunks.Comment object at 0x105b80500>
    lda(Squ2_NoteLenBuffer);
    sta(Squ2_NoteLenCounter);
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x105b80770>
    BNE(HandleSquare1Music);
    lda(EventMusicBuffer);
    anda(0b10010001);
    // <conv.chunks.Comment object at 0x105b80980>
    // <conv.chunks.Comment object at 0x105b80aa0>
    BNE(HandleSquare1Music);
    ldy(Squ2_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x105b80cb0>
    BEQ(NoDecEnv1);
    dec(Squ2_EnvelopeDataCtrl);
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // <conv.chunks.Comment object at 0x105b80ec0>
    // <conv.chunks.Comment object at 0x105b80fe0>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE2_REG);
    ldx(0x7f);
    // <conv.chunks.Comment object at 0x105b81130>
    // <conv.chunks.Comment object at 0x105b81250>
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
    // <conv.chunks.Comment object at 0x105b81a00>
    inc(MusicOffset_Square1);
    lda((MusicData), y);
    BNE(Squ1NoteHandler);
    // <conv.chunks.Comment object at 0x105b81d60>
    lda(0x83);
    sta(SND_SQUARE1_REG);
    lda(0x94);
    sta(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x105b81ee0>
    // <conv.chunks.Comment object at 0x105b82090>
    // <conv.chunks.Comment object at 0x105b82120>
    sta(AltRegContentFlag);
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta(Squ1_NoteLenCounter);
    ldy(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x105b826c0>
    // <conv.chunks.Comment object at 0x105b827e0>
    BNE(HandleTriangleMusic);
    txa();
    anda(0b111110);
    JSR(SetFreq_Squ1);
    // <conv.chunks.Comment object at 0x105b82a80>
    // <conv.chunks.Comment object at 0x105b82ba0>
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // <conv.chunks.Comment object at 0x105b82ea0>
    sta(Squ1_EnvelopeDataCtrl);
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x105b83110>
    BNE(HandleTriangleMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b83320>
    anda(0b10010001);
    BNE(DeathMAltReg);
    ldy(Squ1_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x105b83620>
    BEQ(NoDecEnv2);
    dec(Squ1_EnvelopeDataCtrl);
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // <conv.chunks.Comment object at 0x105b83830>
    // <conv.chunks.Comment object at 0x105b83950>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE1_REG);
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // <conv.chunks.Comment object at 0x105b83aa0>
    // <conv.chunks.Comment object at 0x105b83bc0>
    lda(AltRegContentFlag);
    BNE(DoAltLoad);
    lda(0x7f);
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // <conv.chunks.Comment object at 0x105b83e00>
    // <conv.chunks.Comment object at 0x105b83e90>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda(MusicOffset_Triangle);
    dec(Tri_NoteLenCounter);
    BNE(HandleNoiseMusic);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x105b88290>
    // <conv.chunks.Comment object at 0x105b883b0>
    // <conv.chunks.Comment object at 0x105b884d0>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x105b88830>
    // <conv.chunks.Comment object at 0x105b88950>
    // <conv.chunks.Comment object at 0x105b88a70>
    // <conv.chunks.Comment object at 0x105b88b90>
    lda(0x1f);
    sta(SND_TRIANGLE_REG);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x105b88d10>
    // <conv.chunks.Comment object at 0x105b88ec0>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x105b89460>
    stx(Tri_NoteLenCounter);
    lda(EventMusicBuffer);
    anda(0b1101110);
    BNE(NotDOrD4);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x105b89760>
    // <conv.chunks.Comment object at 0x105b89880>
    // <conv.chunks.Comment object at 0x105b899a0>
    anda(0b1010);
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // <conv.chunks.Comment object at 0x105b89bb0>
    // <conv.chunks.Comment object at 0x105b89cd0>
    txa();
    cmp(0x12);
    // <conv.chunks.Comment object at 0x105b89dc0>
    BCS(LongN);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b8a000>
    anda(EndOfCastleMusic);
    BEQ(MediN);
    lda(0xf);
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // <conv.chunks.Comment object at 0x105b8a330>
    // <conv.chunks.Comment object at 0x105b8a3c0>
    // <conv.chunks.Comment object at 0x105b8a570>
    lda(0x1f);
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // <conv.chunks.Comment object at 0x105b8a660>
    // <conv.chunks.Comment object at 0x105b8a810>
    lda(0xff);
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta(SND_TRIANGLE_REG);
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x105b8ab10>
    anda(0b11110011);
    BEQ(ExitMusicHandler);
    dec(Noise_BeatLenCounter);
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy(MusicOffset_Noise);
    // <conv.chunks.Comment object at 0x105b8b0b0>
    inc(MusicOffset_Noise);
    lda((MusicData), y);
    // <conv.chunks.Comment object at 0x105b8b2c0>
    BNE(NoiseBeatHandler);
    lda(NoiseDataLoopbackOfs);
    sta(MusicOffset_Noise);
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta(Noise_BeatLenCounter);
    // <conv.chunks.Comment object at 0x105b8b9b0>
    txa();
    anda(0b111110);
    BEQ(SilentBeat);
    cmp(0x30);
    BEQ(LongBeat);
    // <conv.chunks.Comment object at 0x105b8bb60>
    // <conv.chunks.Comment object at 0x105b8bc80>
    // <conv.chunks.Comment object at 0x105b8bda0>
    // <conv.chunks.Comment object at 0x105b8be30>
    cmp(0x20);
    BEQ(StrongBeat);
    anda(0b10000);
    BEQ(SilentBeat);
    lda(0x1c);
    // <conv.chunks.Comment object at 0x105b983e0>
    ldx(0x3);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x105b98800>
    ldx(0xc);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x105b98c20>
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
    // <conv.chunks.Comment object at 0x105b991c0>
    stx(((SND_NOISE_REG) + (2)));
    sty(((SND_NOISE_REG) + (3)));
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
    // <conv.chunks.Comment object at 0x105b99760>
    // <conv.chunks.Comment object at 0x105b99820>
    // <conv.chunks.Comment object at 0x105b998e0>
    // <conv.chunks.Comment object at 0x105b999a0>
    // <conv.chunks.Comment object at 0x105b99a60>
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(0b111);
    // <conv.chunks.Comment object at 0x105b99bb0>
    clc();
    adc(0xf0);
    adc(NoteLengthTblAdder);
    // <conv.chunks.Comment object at 0x105b99d90>
    // <conv.chunks.Comment object at 0x105b99e20>
    tay();
    lda(offsetof(G, MusicLengthLookupTbl), y);
    // <conv.chunks.Comment object at 0x105b9a030>
    rts();
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b9a240>
    anda(EndOfCastleMusic);
    BEQ(NotECstlM);
    lda(0x4);
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda(AreaMusicBuffer);
    anda(0b1111101);
    // <conv.chunks.Comment object at 0x105b9a8d0>
    BEQ(WaterMus);
    lda(0x8);
    // <conv.chunks.Comment object at 0x105b9aae0>
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // <conv.chunks.Comment object at 0x105b9ad20>
    lda(0x28);
    JMP(AllMus);
}

int AllMus() {
    // <conv.chunks.Comment object at 0x105b9ade0>
    ldx(0x82);
    ldy(0x7f);
    rts();
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x105b9b1a0>
    anda(EndOfCastleMusic);
    BEQ(LoadUsualEnvData);
    lda(offsetof(G, EndOfCastleMusicEnvData), y);
    // <conv.chunks.Comment object at 0x105b9b4a0>
    rts();
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x105b9b6b0>
    anda(0b1111101);
    BEQ(LoadWaterEventMusEnvData);
    lda(offsetof(G, AreaMusicEnvData), y);
    // <conv.chunks.Comment object at 0x105b9b9b0>
    rts();
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda(offsetof(G, WaterEventMusEnvData), y);
    // <conv.chunks.Comment object at 0x105b9bbc0>
    rts();
}

