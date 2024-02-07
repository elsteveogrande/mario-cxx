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
    // pretty standard 6502 type init here
    cld();
    lda(0b10000);
    // init PPU control register 1
    sta(PPU_CTRL_REG1);
    ldx(0xff);
    // reset stack pointer
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // wait two frames
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
    // load default cold boot pointer
    // this is where we check for a warm boot
    // check each score digit in the top score
    lda(TopScoreDisplay, x);
    cmp(10);
    BCS(ColdBoot);
    // to see if we have a valid digit
    // if not, give up and proceed with cold boot
    dex();
    BPL(WBootCheck);
    lda(WarmBootValidation);
    cmp(0xa5);
    // second checkpoint, check to see if
    // another location has a specific value
    BNE(ColdBoot);
    ldy(WarmBootOffset);
    JMP(ColdBoot);
}

int ColdBoot() {
    // if passed both, load warm boot pointer
    // clear memory using pointer in Y
    JSR(InitializeMemory);
    sta(((SND_DELTA_REG) + (1)));
    sta(OperMode);
    lda(0xa5);
    // reset delta counter load register
    // reset primary mode of operation
    // set warm boot flag
    sta(WarmBootValidation);
    sta(PseudoRandomBitReg);
    // set seed for pseudorandom register
    lda(0b1111);
    sta(SND_MASTERCTRL_REG);
    // enable all sound channels except dmc
    lda(0b110);
    sta(PPU_CTRL_REG2);
    // turn off clipping for OAM and background
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc(DisableScreenFlag);
    // initialize both name tables
    // set flag to disable screen output
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000000);
    // enable NMIs
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda(Mirror_PPU_CTRL_REG1);
    anda(0b1111111);
    // disable NMIs in mirror reg
    // save all other bits
    sta(Mirror_PPU_CTRL_REG1);
    anda(0b1111110);
    sta(PPU_CTRL_REG1);
    lda(Mirror_PPU_CTRL_REG2);
    // alter name table address to be $2800
    // (essentially $2000) but save other bits
    // disable OAM and background display by default
    anda(0b11100110);
    ldy(DisableScreenFlag);
    BNE(ScreenOff);
    lda(Mirror_PPU_CTRL_REG2);
    // get screen disable flag
    // if set, used bits as-is
    // otherwise reenable bits and save them
    ora(0b11110);
    JMP(ScreenOff);
}

int ScreenOff() {
    // save bits for later but not in register at the moment
    sta(Mirror_PPU_CTRL_REG2);
    anda(0b11100111);
    // disable screen for now
    sta(PPU_CTRL_REG2);
    ldx(PPU_STATUS);
    // reset flip-flop and reset scroll registers to zero
    lda(0x0);
    JSR(InitScroll);
    sta(PPU_SPR_ADDR);
    lda(0x2);
    // reset spr-ram address register
    // perform spr-ram DMA access on $0200-$02ff
    sta(SPR_DMA);
    ldx(VRAM_Buffer_AddrCtrl);
    lda(offsetof(G, VRAM_AddrTable_Low), x);
    // load control for pointer to buffer contents
    // set indirect at $00 to pointer
    sta(0x0);
    lda(offsetof(G, VRAM_AddrTable_High), x);
    sta(0x1);
    JSR(UpdateScreen);
    // update screen with buffer contents
    ldy(0x0);
    ldx(VRAM_Buffer_AddrCtrl);
    // check for usage of $0341
    cpx(0x6);
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx(offsetof(G, VRAM_Buffer_Offset), y);
    lda(0x0);
    // clear buffer header at last location
    sta(VRAM_Buffer1_Offset, x);
    sta(VRAM_Buffer1, x);
    sta(VRAM_Buffer_AddrCtrl);
    lda(Mirror_PPU_CTRL_REG2);
    // reinit address control to $0301
    // copy mirror of $2001 to register
    sta(PPU_CTRL_REG2);
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // play sound
    // read joypads
    // handle pause
    JSR(UpdateTopScore);
    lda(GamePauseStatus);
    // check for pause status
    lsr();
    BCS(PauseSkip);
    lda(TimerControl);
    BEQ(DecTimers);
    // if master timer control not set, decrement
    // all frame and interval timers
    dec(TimerControl);
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // load end offset for end of frame timers
    ldx(0x14);
    dec(IntervalTimerControl);
    BPL(DecTimersLoop);
    // decrement interval timer control,
    // if not expired, only frame timers will decrement
    lda(0x14);
    sta(IntervalTimerControl);
    ldx(0x23);
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // if control for interval timers expired,
    // interval timers will decrement along with frame timers
    // check current timer
    lda(Timers, x);
    BEQ(SkipExpTimer);
    dec(Timers, x);
    JMP(SkipExpTimer);
}

int SkipExpTimer() {
    // if current timer expired, branch to skip,
    // otherwise decrement the current timer
    // move onto next timer
    dex();
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}

int NoDecTimers() {
    // do this until all timers are dealt with
    // increment frame counter
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
    // get first memory location of LSFR bytes
    // mask out all but d1
    // save here
    // get second memory location
    // mask out all but d1
    // perform exclusive-OR on d1 from first and second bytes
    // if neither or both are set, carry will be clear
    BEQ(RotPRandomBit);
    sec();
    JMP(RotPRandomBit);
}

int RotPRandomBit() {
    // if one or the other is set, carry will be set
    // rotate carry into d7, and rotate last bit into carry
    ror(PseudoRandomBitReg, x);
    inx();
    dey();
    // increment to next byte
    // decrement for loop
    BNE(RotPRandomBit);
    lda(Sprite0HitDetectFlag);
    // check for flag here
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // wait for sprite 0 flag to clear, which will
    lda(PPU_STATUS);
    anda(0b1000000);
    // not happen until vblank has ended
    BNE(Sprite0Clr);
    lda(GamePauseStatus);
    // if in pause mode, do not bother with sprites at all
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // do sprite #0 hit detection
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
    // set scroll registers from variables
    lda(HorizontalScroll);
    sta(PPU_SCROLL_REG);
    lda(VerticalScroll);
    sta(PPU_SCROLL_REG);
    lda(Mirror_PPU_CTRL_REG1);
    // load saved mirror of $2000
    pha();
    sta(PPU_CTRL_REG1);
    lda(GamePauseStatus);
    // if in pause mode, do not perform operation mode stuff
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // otherwise do one of many, many possible subroutines
    // reset flip-flop
    lda(PPU_STATUS);
    pla();
    ora(0b10000000);
    // reactivate NMIs
    sta(PPU_CTRL_REG1);
    return 0;
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda(OperMode);
    cmp(VictoryModeValue);
    // are we in victory mode?
    // if so, go ahead
    BEQ(ChkPauseTimer);
    cmp(GameModeValue);
    BNE(ExitPause);
    lda(OperMode_Task);
    // are we in game mode?
    // if not, leave
    // if we are in game mode, are we running game engine?
    cmp(0x3);
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // if not, leave
    // check if pause timer is still counting down
    lda(GamePauseTimer);
    BEQ(ChkStart);
    dec(GamePauseTimer);
    // if so, decrement and leave
    return 0;
    JMP(ChkStart);
}

int ChkStart() {
    // check to see if start is pressed
    lda(SavedJoypad1Bits);
    anda(Start_Button);
    // on controller 1
    BEQ(ClrPauseTimer);
    lda(GamePauseStatus);
    anda(0b10000000);
    BNE(ExitPause);
    lda(0x2b);
    // check to see if timer flag is set
    // and if so, do not reset timer (residual,
    // joypad reading routine makes this unnecessary)
    // set pause timer
    sta(GamePauseTimer);
    lda(GamePauseStatus);
    tay();
    iny();
    // set pause sfx queue for next pause mode
    sty(PauseSoundQueue);
    eor(0b1);
    // invert d0 and set d7
    ora(0b10000000);
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // unconditional branch
    // clear timer flag if timer is at zero and start button
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
    // $00 - used for preset value
    // load level type, likely residual code
    // load preset value which will put it at
    // sprite #10
    // start at the end of OAM data offsets
    // check for offset value against
    lda(SprDataOffset, x);
    cmp(0x0);
    BCC(NextSprOffset);
    ldy(SprShuffleAmtOffset);
    // the preset value
    // if less, skip this part
    // get current offset to preset value we want to add
    clc();
    adc(SprShuffleAmt, y);
    BCC(StrSprOffset);
    // get shuffle amount, add to current sprite offset
    // if not exceeded $ff, skip second add
    clc();
    adc(0x0);
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // otherwise add preset value $28 to offset
    // store new offset here or old one if branched to here
    sta(SprDataOffset, x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // move backwards to next one
    dex();
    BPL(ShuffleLoop);
    ldx(SprShuffleAmtOffset);
    // load offset
    inx();
    cpx(0x3);
    BNE(SetAmtOffset);
    ldx(0x0);
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx(SprShuffleAmtOffset);
    ldx(0x8);
    // load offsets for values and storage
    ldy(0x2);
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // load one of three OAM data offsets
    lda(((SprDataOffset) + (5)), y);
    sta(((Misc_SprDataOffset) - (2)), x);
    clc();
    adc(0x8);
    sta(((Misc_SprDataOffset) - (1)), x);
    clc();
    // store first one unmodified, but
    // add eight to the second and eight
    // more to the third one
    // note that due to the way X is set up,
    // this code loads into the misc sprite offsets
    adc(0x8);
    sta(Misc_SprDataOffset, x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // do this until all misc spr offsets are loaded
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
    // this routine moves all but sprite 0
    // off the screen
    // write 248 into OAM data's Y coordinate
    sta(Sprite_Y_Position, y);
    iny();
    // which will move it off the screen
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
    // check to see if either player pressed
    // only the start button (either joypad)
    cmp(Start_Button);
    BEQ(StartGame);
    cmp(((A_Button) + (Start_Button)));
    BNE(ChkSelect);
    JMP(StartGame);
}

int StartGame() {
    // check to see if A + start was pressed
    // if not, branch to check select button
    // if either start or A + start, execute here
    JMP(ChkContinue);
    JMP(ChkSelect);
}

int ChkSelect() {
    // check to see if the select button was pressed
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
    // if so, branch reset demo timer
    // otherwise check demo timer
    // if demo timer not expired, branch to check world selection
    // set controller bits here if running demo
    // run through the demo actions
    // if carry flag set, demo over, thus branch
    // otherwise, run game engine for demo
    // check to see if world selection has been enabled
    ldx(WorldSelectEnableFlag);
    BEQ(NullJoypad);
    cmp(B_Button);
    // if so, check to see if the B button was pressed
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // if so, increment Y and execute same code as select
    // if select or B pressed, check demo timer one last time
    lda(DemoTimer);
    BEQ(ResetTitle);
    lda(0x18);
    // if demo timer expired, branch to reset title screen mode
    // otherwise reset demo timer
    sta(DemoTimer);
    lda(SelectTimer);
    BNE(NullJoypad);
    lda(0x10);
    // check select/B button timer
    // if not expired, branch
    // otherwise reset select button timer
    sta(SelectTimer);
    cpy(0x1);
    BEQ(IncWorldSel);
    lda(NumberOfPlayers);
    eor(0b1);
    // was the B button pressed earlier?  if so, branch
    // note this will not be run if world selection is disabled
    // if no, must have been the select button, therefore
    // change number of players and draw icon accordingly
    sta(NumberOfPlayers);
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // increment world select number
    ldx(WorldSelectNumber);
    inx();
    txa();
    anda(0b111);
    sta(WorldSelectNumber);
    // mask out higher bits
    // store as current world select number
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // write template for world select in vram buffer
    lda(offsetof(G, WSelectBufferTemplate), x);
    sta(((VRAM_Buffer1) - (1)), x);
    // do this until all bytes are written
    inx();
    cpx(0x6);
    BMI(UpdateShroom);
    ldy(WorldNumber);
    iny();
    sty(((VRAM_Buffer1) + (3)));
    JMP(NullJoypad);
}

int NullJoypad() {
    // get world number from variable and increment for
    // proper display, and put in blank byte before
    // null terminator
    // clear joypad bits for player 1
    lda(0x0);
    sta(SavedJoypad1Bits);
    JMP(RunDemo);
}

int RunDemo() {
    // run game engine
    JSR(GameCoreRoutine);
    lda(GameEngineSubroutine);
    // check to see if we're running lose life routine
    cmp(0x6);
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // if not, do not do all the resetting below
    // reset game modes, disable
    lda(0x0);
    sta(OperMode);
    sta(OperMode_Task);
    // sprite 0 check and disable
    // screen output
    sta(Sprite0HitDetectFlag);
    inc(DisableScreenFlag);
    return 0;
    JMP(ChkContinue);
}

int ChkContinue() {
    // if timer for demo has expired, reset modes
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
    // set 1-up box flag for both players
    inc(OffScr_Hidden1UpFlag);
    inc(FetchNewGameTimerFlag);
    inc(OperMode);
    lda(WorldSelectEnableFlag);
    sta(PrimaryHardMode);
    // set fetch new game timer flag
    // set next game mode
    // if world select flag is on, then primary
    // hard mode must be on as well
    lda(0x0);
    sta(OperMode_Task);
    // set game mode here, and clear demo timer
    sta(DemoTimer);
    ldx(0x17);
    lda(0x0);
    JMP(InitScores);
}

int InitScores() {
    // clear player scores and coin displays
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
    // start both players at the first area
    sta(WorldNumber);
    sta(OffScr_WorldNumber);
    ldx(0x0);
    stx(AreaNumber);
    // of the previously saved world number
    // note that on power-up using this function
    // will make no difference
    stx(OffScr_AreaNumber);
    return 0;
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(0x7);
    JMP(IconDataRead);
}

int IconDataRead() {
    // read eight bytes to be read by transfer routine
    // note that the default position is set for a
    lda(offsetof(G, MushroomIconData), y);
    sta(((VRAM_Buffer1) - (1)), y);
    // 1-player game
    dey();
    BPL(IconDataRead);
    lda(NumberOfPlayers);
    BEQ(ExitIcon);
    lda(0x24);
    // check number of players
    // if set to 1-player game, we're done
    // otherwise, load blank tile in 1-player position
    sta(((VRAM_Buffer1) + (3)));
    lda(0xce);
    // then load shroom icon tile in 2-player position
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
    // load current demo action
    // load current action timer
    // if timer still counting down, skip
    inx();
    inc(DemoAction);
    sec();
    lda(((offsetof(G, DemoTimingData)) - (1)), x);
    sta(DemoActionTimer);
    BEQ(DemoOver);
    JMP(DoAction);
}

int DoAction() {
    // if expired, increment action, X, and
    // set carry by default for demo over
    // get next timer
    // store as current timer
    // if timer already at zero, skip
    // get and perform action (current or next)
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
    // run victory mode subroutines
    // get current task of victory mode
    // if on bridge collapse, skip enemy processing
    ldx(0x0);
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}

int AutoPlayer() {
    // otherwise reset enemy object offset
    // and run enemy code
    // get player's relative coordinates
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
    // get page location of right side of screen
    // increment to next page
    // store here
    lda(EndOfCastleMusic);
    sta(EventMusicQueue);
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(0x0);
    // set value here to not walk player by default
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
    // get player's page location
    // compare with destination page location
    // if page locations don't match, branch
    // otherwise get player's horizontal position
    // compare with preset horizontal position
    // if still on other page, branch ahead
    // otherwise increment value and Y
    inc(VictoryWalkControl);
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // note Y will be used to walk the player
    // put contents of Y in A and
    tya();
    JSR(AutoControlPlayer);
    lda(ScreenLeft_PageLoc);
    cmp(DestinationPageLoc);
    BEQ(ExitVWalk);
    // use A to move player to the right or not
    // check page location of left side of screen
    // against set value here
    // branch if equal to change modes if necessary
    lda(ScrollFractional);
    clc();
    // do fixed point math on fractional part of scroll
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
    // save fractional movement amount
    // set 1 pixel per frame
    // add carry from previous addition
    // use as scroll amount
    // do sub to scroll the screen
    // do another sub to update screen and scroll variables
    // increment value to stay in this routine
    // load value set here
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
    // load secondary message counter
    // if set, branch to increment message counters
    // otherwise load primary message counter
    // if set to zero, branch to print first message
    // if at 9 or above, branch elsewhere (this comparison
    // is residual code, counter never reaches 9)
    // check world number
    cpy(World8);
    BNE(MRetainerMsg);
    cmp(0x3);
    BCC(IncMsgCounter);
    sbc(0x1);
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}

int MRetainerMsg() {
    // if not at world 8, skip to next part
    // check primary message counter again
    // if not at 3 yet (world 8 only), branch to increment
    // otherwise subtract one
    // and skip to next part
    // check primary message counter
    cmp(0x2);
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // if not at 2 yet (world 1-7 only), branch
    // put primary message counter into Y
    tay();
    BNE(SecondPartMsg);
    lda(CurrentPlayer);
    BEQ(EvalForMusic);
    iny();
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}

int SecondPartMsg() {
    // if counter nonzero, skip this part, do not print first message
    // otherwise get player currently on the screen
    // if mario, branch
    // otherwise increment Y once for luigi and
    // do an unconditional branch to the same place
    // increment Y to do world 8's message
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
    // check world number
    // if at world 8, branch to next part
    // otherwise decrement Y for world 1-7's message
    // if counter at 4 (world 1-7 only)
    // branch to set victory end timer
    // if counter at 3 (world 1-7 only)
    // branch to keep counting
    // if counter not yet at 3 (world 8 only), branch
    cpy(0x3);
    BNE(PrintMsg);
    lda(VictoryMusic);
    sta(EventMusicQueue);
    JMP(PrintMsg);
}

int PrintMsg() {
    // to print message only (note world 1-7 will only
    // reach this code if counter = 0, and will always branch)
    // otherwise load victory music first (world 8 only)
    // put primary message counter in A
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
    // add four to secondary message counter
    sta(SecondaryMsgCounter);
    lda(PrimaryMsgCounter);
    adc(0x0);
    // add carry to primary message counter
    sta(PrimaryMsgCounter);
    cmp(0x7);
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // check primary counter one more time
    // if not reached value yet, branch to leave
    BCC(ExitMsgs);
    lda(0x6);
    sta(WorldEndTimer);
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // otherwise set world end timer
    // move onto next task in mode
    inc(OperMode_Task);
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // leave
    return 0;
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda(WorldEndTimer);
    BNE(EndExitOne);
    ldy(WorldNumber);
    cpy(World8);
    BCS(EndChkBButton);
    // check to see if world end timer expired
    // branch to leave if not
    // check world number
    // if on world 8, player is done with game,
    // thus branch to read controller
    lda(0x0);
    sta(AreaNumber);
    sta(LevelNumber);
    sta(OperMode_Task);
    inc(WorldNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    // otherwise initialize area number used as offset
    // and level number control to start at area 1
    // initialize secondary mode of operation
    // increment world number to move onto the next world
    // get area address offset for the next area
    // set flag to load game timer from header
    lda(GameModeValue);
    sta(OperMode);
    JMP(EndExitOne);
}

int EndExitOne() {
    // set mode of operation to game mode
    // and leave
    return 0;
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    anda(B_Button);
    BEQ(EndExitTwo);
    lda(0x1);
    // check to see if B button was pressed on
    // either controller
    // branch to leave if not
    // otherwise set world selection flag
    sta(WorldSelectEnableFlag);
    lda(0xff);
    // remove onscreen player's lives
    sta(NumberofLives);
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // do sub to continue other player or end game
    // leave
    return 0;
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda(FloateyNum_Control, x);
    BEQ(EndExitOne);
    cmp(0xb);
    // load control for floatey number
    // if zero, branch to leave
    // if less than $0b, branch
    BCC(ChkNumTimer);
    lda(0xb);
    sta(FloateyNum_Control, x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // otherwise set to $0b, thus keeping
    // it in range
    // use as Y
    tay();
    lda(FloateyNum_Timer, x);
    BNE(DecNumTimer);
    sta(FloateyNum_Control, x);
    // check value here
    // if nonzero, branch ahead
    // initialize floatey number control and leave
    return 0;
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // decrement value here
    dec(FloateyNum_Timer, x);
    cmp(0x2b);
    // if not reached a certain point, branch
    BNE(ChkTallEnemy);
    cpy(0xb);
    BNE(LoadNumTiles);
    inc(NumberofLives);
    // check offset for $0b
    // branch ahead if not found
    // give player one extra life (1-up)
    lda(Sfx_ExtraLife);
    sta(Square2SoundQueue);
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // and play the 1-up sound
    // load point value here
    lda(offsetof(G, ScoreUpdateData), y);
    lsr();
    // move high nybble to low
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
    // use as X offset, essentially the digit
    // load again and this time
    // mask out the high nybble
    // store as amount to add to the digit
    // update the score accordingly
    // get OAM data offset for enemy object
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_ID, x);
    // get enemy object identifier
    cmp(Spiny);
    BEQ(FloateyPart);
    // branch if spiny
    cmp(PiranhaPlant);
    BEQ(FloateyPart);
    // branch if piranha plant
    cmp(HammerBro);
    BEQ(GetAltOffset);
    // branch elsewhere if hammer bro
    cmp(GreyCheepCheep);
    BEQ(FloateyPart);
    // branch if cheep-cheep of either color
    cmp(RedCheepCheep);
    BEQ(FloateyPart);
    cmp(TallEnemy);
    BCS(GetAltOffset);
    // branch elsewhere if enemy object => $09
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // if enemy state defeated or otherwise
    // $02 or greater, branch beyond this part
    // load some kind of control bit
    ldx(SprDataOffset_Ctrl);
    ldy(Alt_SprDataOffset, x);
    ldx(ObjectOffset);
    JMP(FloateyPart);
}

int FloateyPart() {
    // get alternate OAM data offset
    // get enemy object offset again
    // get vertical coordinate for
    lda(FloateyNum_Y_Pos, x);
    cmp(0x18);
    BCC(SetupNumSpr);
    // floatey number, if coordinate in the
    // status bar, branch
    sbc(0x1);
    sta(FloateyNum_Y_Pos, x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // otherwise subtract one and store as new
    // get vertical coordinate
    lda(FloateyNum_Y_Pos, x);
    sbc(0x8);
    JSR(DumpTwoSpr);
    lda(FloateyNum_X_Pos, x);
    sta(Sprite_X_Position, y);
    // subtract eight and dump into the
    // left and right sprite's Y coordinates
    // get horizontal coordinate
    // store into X coordinate of left sprite
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // add eight pixels and store into X
    // coordinate of right sprite
    lda(0x2);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // set palette control in attribute bytes
    // of left and right sprites
    lda(FloateyNum_Control, x);
    asl();
    tax();
    // multiply our floatey number control by 2
    // and use as offset for look-up table
    lda(offsetof(G, FloateyNumTileData), x);
    sta(Sprite_Tilenumber, y);
    // display first half of number of points
    lda(((offsetof(G, FloateyNumTileData)) + (1)), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    ldx(ObjectOffset);
    // display the second half
    // get enemy object offset and leave
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
    // initialize all sprites including sprite #0
    // and erase both name and attribute tables
    lda(OperMode);
    BEQ(NextSubtask);
    ldx(0x3);
    // if mode still 0, do not load
    // into buffer pointer
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda(BackgroundColorCtrl);
    pha();
    // save current background color control
    // and player status to stack
    lda(PlayerStatus);
    pha();
    lda(0x0);
    sta(PlayerStatus);
    lda(0x2);
    sta(BackgroundColorCtrl);
    // set background color to black
    // and player status to not fiery
    // this is the ONLY time background color control
    // is set to less than 4
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
    // select appropriate palette to load
    // based on area type
    // store offset into buffer control
    stx(VRAM_Buffer_AddrCtrl);
    JMP(NextSubtask);
}

int NextSubtask() {
    // move onto next task
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
    // check background color control
    // if not set, increment task and fetch palette
    // put appropriate palette into vram
    // note that if set to 5-7, $0301 will not be read
    // increment to next subtask and plod on through
    inc(ScreenRoutineTask);
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx(VRAM_Buffer1_Offset);
    // get current buffer offset
    ldy(0x0);
    lda(CurrentPlayer);
    // check which player is on the screen
    BEQ(ChkFiery);
    ldy(0x4);
    JMP(ChkFiery);
}

int ChkFiery() {
    // load offset for luigi
    // check player status
    lda(PlayerStatus);
    cmp(0x2);
    BNE(StartClrGet);
    // if fiery, load alternate offset for fiery player
    ldy(0x8);
    JMP(StartClrGet);
}

int StartClrGet() {
    // do four colors
    lda(0x3);
    sta(0x0);
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // fetch player colors and store them
    lda(offsetof(G, PlayerColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // in the buffer
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
    // load original offset from before
    // if this value is four or greater, it will be set
    // therefore use it as offset to background color
    // otherwise use area type bits from area offset as offset
    // to background color instead
    lda(offsetof(G, BackgroundColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x3f);
    sta(VRAM_Buffer1, x);
    // set for sprite palette address
    // save to buffer
    lda(0x10);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x4);
    // write length byte to buffer
    sta(((VRAM_Buffer1) + (2)), x);
    lda(0x0);
    // now the null terminator
    sta(((VRAM_Buffer1) + (7)), x);
    txa();
    clc();
    // move the buffer pointer ahead 7 bytes
    // in case we want to write anything else later
    adc(0x7);
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // store as new vram buffer offset
    sta(VRAM_Buffer1_Offset);
    return 0;
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda(AreaStyle);
    // check for mushroom level style
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
    // now onto the next task
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
    // write player's score and coin tally to screen
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    // write address for world-area number on screen
    sta(VRAM_Buffer1, x);
    lda(0x73);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x3);
    // write length for it
    sta(((VRAM_Buffer1) + (2)), x);
    ldy(WorldNumber);
    // first the world number
    iny();
    tya();
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x28);
    // next the dash
    sta(((VRAM_Buffer1) + (4)), x);
    ldy(LevelNumber);
    iny();
    // next the level number
    // increment for proper number display
    tya();
    sta(((VRAM_Buffer1) + (5)), x);
    lda(0x0);
    // put null terminator on
    sta(((VRAM_Buffer1) + (6)), x);
    txa();
    // move the buffer offset up by 6 bytes
    clc();
    adc(0x6);
    sta(VRAM_Buffer1_Offset);
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda(GameTimerExpiredFlag);
    BEQ(NoTimeUp);
    // if game timer not expired, increment task
    // control 2 tasks forward, otherwise, stay here
    lda(0x0);
    sta(GameTimerExpiredFlag);
    lda(0x2);
    // reset timer expiration flag
    // output time-up screen to buffer
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // increment control task 2 tasks forward
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
    // check primary mode of operation
    // if in title screen mode, skip this
    // are we in game over mode?
    // if so, proceed to display game over screen
    // otherwise check for mode of alternate entry
    // and branch if found
    // check if we are on castle level
    // and if so, branch (possibly residual)
    BEQ(PlayerInter);
    lda(DisableIntermediate);
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // if this flag is set, skip intermediate lives display
    // and jump to specific task, otherwise
    // put player in appropriate place for
    JSR(DrawPlayer_Intermediate);
    lda(0x1);
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(0x0);
    sta(DisableScreenFlag);
    // reenable screen output
    return 0;
    JMP(GameOverInter);
}

int GameOverInter() {
    // set screen timer
    lda(0x12);
    sta(ScreenTimer);
    lda(0x3);
    // output game over screen to buffer
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // set for specific task and leave
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
    // turn off screen
    // render column set of current area
    JSR(AreaParserTaskHandler);
    lda(AreaParserTaskNum);
    BNE(TaskLoop);
    dec(ColumnSets);
    // check number of tasks
    // if tasks still not all done, do another one
    // do we need to render more column sets?
    BPL(OutputCol);
    inc(ScreenRoutineTask);
    JMP(OutputCol);
}

int OutputCol() {
    // if not, move on to the next task
    // set vram buffer to output rendered column set
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // on next NMI
    return 0;
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda(OperMode);
    BNE(IncModeTask_B);
    lda(HI8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    // are we in title screen mode?
    // if not, exit
    // load address $1ec0 into
    // the vram address register
    lda(LO8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    lda(0x3);
    sta(0x1);
    // put address $0300 into
    // the indirect at $00
    ldy(0x0);
    sty(0x0);
    lda(PPU_DATA);
    JMP(OutputTScr);
}

int OutputTScr() {
    // do one garbage read
    // get title screen from chr-rom
    lda(PPU_DATA);
    sta((0x0), y);
    // store 256 bytes into buffer
    iny();
    BNE(ChkHiByte);
    inc(0x1);
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // if not past 256 bytes, do not increment
    // otherwise increment high byte of indirect
    // check high byte?
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
    // draw player select icon
    // move onto next task
    inc(ScreenRoutineTask);
    return 0;
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(0xfa);
    // run display routine to display top score on title
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // move onto next mode
    inc(OperMode_Task);
    return 0;
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // save text number to stack
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
    // multiply by 2 and use as offset
    // if set to do top status bar or world/lives display,
    // branch to use current offset as-is
    // if set to do time-up or game over,
    // branch to check players
    // otherwise warp zone, therefore set offset
    // check for number of players
    lda(NumberOfPlayers);
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // if there are two, use current offset to also print name
    // otherwise increment offset by one to not print name
    // get offset to message we want to print
    ldx(offsetof(G, GameTextOffsets), y);
    ldy(0x0);
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // load message data
    lda(offsetof(G, GameText), x);
    cmp(0xff);
    BEQ(EndGameText);
    sta(VRAM_Buffer1, y);
    inx();
    // check for terminator
    // branch to end text if found
    // otherwise write data to buffer
    // and increment increment
    iny();
    BNE(GameTextLoop);
    JMP(EndGameText);
}

int EndGameText() {
    // do this for 256 bytes if no terminator found
    // put null terminator at end
    lda(0x0);
    sta(VRAM_Buffer1, y);
    pla();
    // pull original text number from stack
    tax();
    cmp(0x4);
    // are we printing warp zone?
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda(NumberofLives);
    clc();
    // are we printing the world/lives display?
    // if not, branch to check player's name
    // otherwise, check number of lives
    // and increment by one for display
    adc(0x1);
    cmp(10);
    // more than 9 lives?
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
    // write world and level numbers (incremented for display)
    // to the buffer in the spaces surrounding the dash
    sty(((VRAM_Buffer1) + (19)));
    ldy(LevelNumber);
    iny();
    sty(((VRAM_Buffer1) + (21)));
    // we're done here
    return 0;
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda(NumberOfPlayers);
    BEQ(ExitChkName);
    lda(CurrentPlayer);
    dex();
    // check number of players
    // if only 1 player, leave
    // load current player
    // check to see if current message number is for time up
    BNE(ChkLuigi);
    ldy(OperMode);
    // check for game over mode
    cpy(GameOverModeValue);
    BEQ(ChkLuigi);
    eor(0b1);
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // if mario is current player, do not change the name
    ldy(0x4);
    JMP(NameLoop);
}

int NameLoop() {
    // otherwise, replace "MARIO" with "LUIGI"
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
    // subtract 4 and then shift to the left
    // twice to get proper warp zone number
    // offset
    tax();
    ldy(0x0);
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // print warp zone numbers into the
    lda(offsetof(G, WarpZoneNumbers), x);
    sta(((VRAM_Buffer1) + (27)), y);
    // placeholders from earlier
    inx();
    iny();
    // put a number in every fourth space
    iny();
    iny();
    iny();
    cpy(0xc);
    BCC(WarpNumLoop);
    lda(0x2c);
    // load new buffer pointer at end of message
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
    // reset timer again
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
    // store LSB of where we're at
    anda(0x1);
    sta(0x5);
    ldy(VRAM_Buffer2_Offset);
    // store vram buffer offset
    sty(0x0);
    lda(CurrentNTAddr_Low);
    // get current name table address we're supposed to render
    sta(((VRAM_Buffer2) + (1)), y);
    lda(CurrentNTAddr_High);
    sta(VRAM_Buffer2, y);
    lda(0x9a);
    sta(((VRAM_Buffer2) + (2)), y);
    lda(0x0);
    // store length byte of 26 here with d7 set
    // to increment by 32 (in columns)
    // init attribute row
    sta(0x4);
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // store init value of 0 or incremented offset for buffer
    stx(0x1);
    lda(MetatileBuffer, x);
    // get first metatile number, and mask out all but 2 MSB
    anda(0b11000000);
    sta(0x3);
    asl();
    rol();
    rol();
    tay();
    lda(offsetof(G, MetatileGraphics_Low), y);
    // store attribute table bits here
    // note that metatile format is:
    // %xx000000 - attribute table bits,
    // %00xxxxxx - metatile number
    // rotate bits to d1-d0 and use as offset here
    // get address to graphics table from here
    sta(0x6);
    lda(offsetof(G, MetatileGraphics_High), y);
    sta(0x7);
    lda(MetatileBuffer, x);
    asl();
    // get metatile number again
    // multiply by 4 and use as tile offset
    asl();
    sta(0x2);
    lda(AreaParserTaskNum);
    anda(0b1);
    eor(0b1);
    asl();
    adc(0x2);
    // get current task number for level processing and
    // mask out all but LSB, then invert LSB, multiply by 2
    // to get the correct column position in the metatile,
    // then add to the tile offset so we can draw either side
    // of the metatiles
    tay();
    ldx(0x0);
    // use vram buffer offset from before as X
    lda((0x6), y);
    sta(((VRAM_Buffer2) + (3)), x);
    // get first tile number (top left or top right) and store
    iny();
    lda((0x6), y);
    // now get the second (bottom left or bottom right) and store
    sta(((VRAM_Buffer2) + (4)), x);
    ldy(0x4);
    lda(0x5);
    BNE(RightCheck);
    lda(0x1);
    lsr();
    // get current attribute row
    // get LSB of current column where we're at, and
    // branch if set (clear = left attrib, set = right)
    // get current row we're rendering
    // branch if LSB set (clear = top left, set = bottom left)
    BCS(LLeft);
    rol(0x3);
    rol(0x3);
    // rotate attribute bits 3 to the left
    // thus in d1-d0, for upper left square
    rol(0x3);
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // get LSB of current row we're rendering
    lda(0x1);
    lsr();
    // branch if set (clear = top right, set = bottom right)
    BCS(NextMTRow);
    lsr(0x3);
    lsr(0x3);
    // shift attribute bits 4 to the right
    // thus in d3-d2, for upper right square
    lsr(0x3);
    lsr(0x3);
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // shift attribute bits 2 to the right
    lsr(0x3);
    lsr(0x3);
    JMP(NextMTRow);
}

int NextMTRow() {
    // thus in d5-d4 for lower left square
    // move onto next attribute row
    inc(0x4);
    JMP(SetAttrib);
}

int SetAttrib() {
    // get previously saved bits from before
    lda(AttributeBuffer, y);
    ora(0x3);
    sta(AttributeBuffer, y);
    inc(0x0);
    // if any, and put new bits, if any, onto
    // the old, and store
    // increment vram buffer offset by 2
    inc(0x0);
    ldx(0x1);
    inx();
    // get current gfx buffer row, and check for
    // the bottom of the screen
    cpx(0xd);
    BCC(DrawMTLoop);
    ldy(0x0);
    iny();
    // if not there yet, loop back
    // get current vram buffer offset, increment by 3
    // (for name table address and length bytes)
    iny();
    iny();
    lda(0x0);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    inc(CurrentNTAddr_Low);
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    // put null terminator at end of data for name table
    // store new buffer offset
    // increment name table address low
    // check current low byte
    // if no wraparound, just skip this part
    BNE(ExitDrawM);
    lda(0x80);
    sta(CurrentNTAddr_Low);
    lda(CurrentNTAddr_High);
    eor(0b100);
    // if wraparound occurs, make sure low byte stays
    // just under the status bar
    // and then invert d2 of the name table address high
    // to move onto the next appropriate name table
    sta(CurrentNTAddr_High);
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // jump to set buffer to $0341 and leave
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    sec();
    // get low byte of next name table address
    // to be written to, mask out all but 5 LSB,
    // subtract four
    sbc(0x4);
    anda(0b11111);
    // mask out bits again and store
    sta(0x1);
    lda(CurrentNTAddr_High);
    // get high byte and branch if borrow not set
    BCS(SetATHigh);
    eor(0b100);
    JMP(SetATHigh);
}

int SetATHigh() {
    // otherwise invert d2
    // mask out all other bits
    anda(0b100);
    ora(0x23);
    // add $2300 to the high byte and store
    sta(0x0);
    lda(0x1);
    lsr();
    // get low byte - 4, divide by 4, add offset for
    // attribute table and store
    lsr();
    adc(0xc0);
    sta(0x1);
    // we should now have the appropriate block of
    // attribute table in our temp address
    ldx(0x0);
    ldy(VRAM_Buffer2_Offset);
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(0x0);
    sta(VRAM_Buffer2, y);
    // store high byte of attribute table address
    lda(0x1);
    clc();
    adc(0x8);
    // get low byte, add 8 because we want to start
    // below the status bar, and store
    sta(((VRAM_Buffer2) + (1)), y);
    sta(0x1);
    lda(AttributeBuffer, x);
    sta(((VRAM_Buffer2) + (3)), y);
    // also store in temp again
    // fetch current attribute table byte and store
    // in the buffer
    lda(0x1);
    sta(((VRAM_Buffer2) + (2)), y);
    // store length of 1 in buffer
    lsr();
    sta(AttributeBuffer, x);
    iny();
    // clear current byte in attribute buffer
    // increment buffer offset by 4 bytes
    iny();
    iny();
    iny();
    inx();
    cpx(0x7);
    // increment attribute offset and check to see
    // if we're at the end yet
    BCC(AttribLoop);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // set buffer to $0341 and leave
    return 0;
    JMP(ColorRotation);
}

int ColorRotation() {
    lda(FrameCounter);
    anda(0x7);
    BNE(ExitColorRot);
    ldx(VRAM_Buffer1_Offset);
    // get frame counter
    // mask out all but three LSB
    // branch if not set to zero to do this every eighth frame
    // check vram buffer offset
    cpx(0x31);
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // if offset over 48 bytes, branch to leave
    // otherwise use frame counter's 3 LSB as offset here
    // get blank palette for palette 3
    lda(offsetof(G, BlankPalette), y);
    sta(VRAM_Buffer1, x);
    inx();
    // store it in the vram buffer
    // increment offsets
    iny();
    cpy(0x8);
    BCC(GetBlankPal);
    ldx(VRAM_Buffer1_Offset);
    // do this until all bytes are copied
    // get current vram buffer offset
    lda(0x3);
    sta(0x0);
    lda(AreaType);
    asl();
    // set counter here
    // get area type
    // multiply by 4 to get proper offset
    asl();
    tay();
    JMP(GetAreaPal);
}

int GetAreaPal() {
    // save as offset here
    // fetch palette to be written based on area type
    lda(offsetof(G, Palette3Data), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // store it to overwrite blank palette in vram buffer
    iny();
    inx();
    dec(0x0);
    BPL(GetAreaPal);
    ldx(VRAM_Buffer1_Offset);
    ldy(ColorRotateOffset);
    // decrement counter
    // do this until the palette is all copied
    // get current vram buffer offset
    // get color cycling offset
    lda(offsetof(G, ColorRotatePalette), y);
    sta(((VRAM_Buffer1) + (4)), x);
    // get and store current color in second slot of palette
    lda(VRAM_Buffer1_Offset);
    clc();
    // add seven bytes to vram buffer offset
    adc(0x7);
    sta(VRAM_Buffer1_Offset);
    inc(ColorRotateOffset);
    // increment color cycling offset
    lda(ColorRotateOffset);
    cmp(0x6);
    BCC(ExitColorRot);
    // check to see if it's still in range
    // if so, branch to leave
    lda(0x0);
    sta(ColorRotateOffset);
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // otherwise, init to keep it in range
    // leave
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
    // set low byte so offset points to $0341
    // load offset for default blank metatile
    // check area type
    // if not water type, use offset
    // otherwise load offset for blank metatile used in water
    // do a sub to write blank metatile to vram buffer
    JSR(PutBlockMetatile);
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // set vram address controller to $0341 and leave
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
    // load offset for blank metatile
    // check contents of A for blank metatile
    // branch if found (unconditional if branched from 8a6b)
    // load offset for brick metatile w/ line
    cmp(0x58);
    BEQ(UseBOffset);
    // use offset if metatile is brick with coins (w/ line)
    cmp(0x51);
    BEQ(UseBOffset);
    iny();
    // use offset if metatile is breakable brick w/ line
    // increment offset for brick metatile w/o line
    cmp(0x5d);
    BEQ(UseBOffset);
    // use offset if metatile is brick with coins (w/o line)
    cmp(0x52);
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // use offset if metatile is breakable brick w/o line
    // if any other metatile, increment offset for empty block
    // put Y in A
    tya();
    ldy(VRAM_Buffer1_Offset);
    iny();
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}

int MoveVOffset() {
    // get vram buffer offset
    // move onto next byte
    // get appropriate block data and write to vram buffer
    // decrement vram buffer offset
    dey();
    tya();
    // add 10 bytes to it
    clc();
    adc(10);
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(0x0);
    sty(0x1);
    // store control bit from SprDataOffset_Ctrl
    // store vram buffer offset for next byte
    asl();
    asl();
    // multiply A by four and use as X
    tax();
    ldy(0x20);
    lda(0x6);
    cmp(0xd0);
    BCC(SaveHAdder);
    ldy(0x24);
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // load high byte for name table 0
    // get low byte of block buffer pointer
    // check to see if we're on odd-page block buffer
    // if not, use current high byte
    // otherwise load high byte for name table 1
    // save high byte here
    sty(0x3);
    anda(0xf);
    asl();
    sta(0x4);
    // mask out high nybble of block buffer pointer
    // multiply by 2 to get appropriate name table low byte
    // and then store it here
    lda(0x0);
    sta(0x5);
    lda(0x2);
    // initialize temp high byte
    // get vertical high nybble offset used in block buffer routine
    clc();
    adc(0x20);
    // add 32 pixels for the status bar
    asl();
    rol(0x5);
    // shift and rotate d7 onto d0 and d6 into carry
    asl();
    rol(0x5);
    adc(0x4);
    sta(0x4);
    lda(0x5);
    adc(0x0);
    // shift and rotate d6 onto d0 and d5 into carry
    // add low byte of name table and carry to vertical high nybble
    // and store here
    // get whatever was in d7 and d6 of vertical high nybble
    // add carry
    clc();
    adc(0x3);
    sta(0x5);
    ldy(0x1);
    JMP(RemBridge);
}

int RemBridge() {
    // then add high byte of name table
    // store here
    // get vram buffer offset to be used
    // write top left and top right
    lda(offsetof(G, BlockGfxData), x);
    sta(((VRAM_Buffer1) + (2)), y);
    // tile numbers into first spot
    lda(((offsetof(G, BlockGfxData)) + (1)), x);
    sta(((VRAM_Buffer1) + (3)), y);
    lda(((offsetof(G, BlockGfxData)) + (2)), x);
    sta(((VRAM_Buffer1) + (7)), y);
    lda(((offsetof(G, BlockGfxData)) + (3)), x);
    // write bottom left and bottom
    // right tiles numbers into
    // second spot
    sta(((VRAM_Buffer1) + (8)), y);
    lda(0x4);
    sta(VRAM_Buffer1, y);
    clc();
    adc(0x20);
    sta(((VRAM_Buffer1) + (5)), y);
    lda(0x5);
    sta(((VRAM_Buffer1) - (1)), y);
    sta(((VRAM_Buffer1) + (4)), y);
    // write low byte of name table
    // into first slot as read
    // add 32 bytes to value
    // write low byte of name table
    // plus 32 bytes into second slot
    // write high byte of name
    // table address to both slots
    lda(0x2);
    sta(((VRAM_Buffer1) + (1)), y);
    sta(((VRAM_Buffer1) + (6)), y);
    // put length of 2 in
    // both slots
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
    // reset flip-flop
    // load mirror of ppu reg $2000
    // set sprites for first 4k and background for second 4k
    // clear rest of lower nybble, leave higher alone
    JSR(WritePPUReg1);
    lda(0x24);
    // set vram address to start of name table 1
    JSR(WriteNTAddr);
    lda(0x20);
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    ldx(0x4);
    // clear name table with blank tile #24
    ldy(0xc0);
    lda(0x24);
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // count out exactly 768 tiles
    sta(PPU_DATA);
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(64);
    // now to clear the attribute table (with zero this time)
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
    // reset scroll variables
    sta(VerticalScroll);
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(0x1);
    // initialize scroll registers to zero
    // $00 - temp joypad bit
    // reset and clear strobe of joypad ports
    sta(JOYPAD_PORT);
    lsr();
    tax();
    // start with joypad 1's port
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
    // push previous bit onto stack
    pha();
    lda(JOYPAD_PORT, x);
    sta(0x0);
    lsr();
    ora(0x0);
    // read current bit on joypad port
    // check d1 and d0 of port output
    // this is necessary on the old
    // famicom systems in japan
    lsr();
    pla();
    rol();
    // read bits from stack
    // rotate bit from carry flag
    dey();
    BNE(PortLoop);
    sta(SavedJoypadBits, x);
    // count down bits left
    // save controller status here always
    pha();
    anda(0b110000);
    anda(JoypadBitMask, x);
    BEQ(Save8Bits);
    // check for select or start
    // if neither saved state nor current state
    // have any of these two set, branch
    pla();
    anda(0b11001111);
    sta(SavedJoypadBits, x);
    // otherwise store without select
    // or start bits and leave
    return 0;
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta(JoypadBitMask, x);
    // save with all bits in another place and leave
    return 0;
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta(PPU_ADDRESS);
    // store high byte of vram address
    iny();
    lda((0x0), y);
    sta(PPU_ADDRESS);
    // load next byte (second)
    // store low byte of vram address
    iny();
    lda((0x0), y);
    asl();
    // load next byte (third)
    // shift to left and save in stack
    pha();
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b100);
    BCS(SetupWrites);
    anda(0b11111011);
    JMP(SetupWrites);
}

int SetupWrites() {
    // load mirror of $2000,
    // set ppu to increment by 32 by default
    // if d7 of third byte was clear, ppu will
    // only increment by 1
    // write to register
    JSR(WritePPUReg1);
    pla();
    // pull from stack and shift to left again
    asl();
    BCC(GetLength);
    ora(0b10);
    // if d6 of third byte was clear, do not repeat byte
    // otherwise set d1 and increment Y
    iny();
    JMP(GetLength);
}

int GetLength() {
    // shift back to the right to get proper length
    lsr();
    lsr();
    // note that d1 will now be in carry
    tax();
    JMP(OutputToVRAM);
}

int OutputToVRAM() {
    // if carry set, repeat loading the same byte
    BCS(RepeatByte);
    iny();
    JMP(RepeatByte);
}

int RepeatByte() {
    // otherwise increment Y to load next byte
    // load more data from buffer and write to vram
    lda((0x0), y);
    sta(PPU_DATA);
    dex();
    // done writing?
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(0x0);
    sta(0x0);
    // add end length plus one to the indirect at $00
    // to allow this routine to read another set of updates
    lda(0x0);
    adc(0x1);
    sta(0x1);
    lda(0x3f);
    // sets vram address to $3f00
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    sta(PPU_ADDRESS);
    // then reinitializes it for some reason
    sta(PPU_ADDRESS);
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // reset flip-flop
    ldx(PPU_STATUS);
    ldy(0x0);
    // load first byte from indirect as a pointer
    lda((0x0), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // if byte is zero we have no further updates to make here
    // store contents of A into scroll registers
    sta(PPU_SCROLL_REG);
    sta(PPU_SCROLL_REG);
    // and end whatever subroutine led us here
    return 0;
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta(PPU_CTRL_REG1);
    sta(Mirror_PPU_CTRL_REG1);
    // write contents of A to PPU register 1
    // and its mirror
    return 0;
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(0x0);
    JSR(OutputNumbers);
    lda(0x0);
    lsr();
    // store player-specific offset
    // use first nybble to print the coin display
    // move high nybble to low
    // and print to score display
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}

int OutputNumbers() {
    clc();
    // add 1 to low nybble
    adc(0x1);
    anda(0b1111);
    // mask out high nybble
    cmp(0x6);
    BCS(ExitOutputN);
    pha();
    asl();
    // save incremented value to stack for now and
    // shift to left and use as offset
    tay();
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    cpy(0x0);
    // get current buffer pointer
    // put at top of screen by default
    // are we writing top score on title screen?
    BNE(SetupNums);
    lda(0x22);
    JMP(SetupNums);
}

int SetupNums() {
    sta(VRAM_Buffer1, x);
    lda(offsetof(G, StatusBarData), y);
    sta(((VRAM_Buffer1) + (1)), x);
    // write low vram address and length of thing
    // we're printing to the buffer
    lda(((offsetof(G, StatusBarData)) + (1)), y);
    sta(((VRAM_Buffer1) + (2)), x);
    sta(0x3);
    stx(0x2);
    pla();
    // save length byte in counter
    // and buffer pointer elsewhere for now
    // pull original incremented value from stack
    tax();
    lda(offsetof(G, StatusBarOffset), x);
    // load offset to value we want to write
    sec();
    sbc(((offsetof(G, StatusBarData)) + (1)), y);
    tay();
    // subtract from length byte we read before
    // use value as offset to display digits
    ldx(0x2);
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // write digits to the buffer
    lda(DisplayDigits, y);
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    iny();
    dec(0x3);
    // do this until all the digits are written
    BNE(DigitPLoop);
    lda(0x0);
    // put null terminator at end
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    // increment buffer pointer by 3
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
    // check mode of operation
    cmp(TitleScreenModeValue);
    BEQ(EraseDMods);
    // if in title screen mode, branch to lock score
    ldx(0x5);
    JMP(AddModLoop);
}

int AddModLoop() {
    // load digit amount to increment
    lda(DigitModifier, x);
    clc();
    adc(DisplayDigits, y);
    BMI(BorrowOne);
    // add to current digit
    // if result is a negative number, branch to subtract
    cmp(10);
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // if digit greater than $09, branch to add
    // store as new score or game timer digit
    sta(DisplayDigits, y);
    dey();
    dex();
    BPL(AddModLoop);
    JMP(EraseDMods);
}

int EraseDMods() {
    // move onto next digits in score or game timer
    // and digit amounts to increment
    // loop back if we're not done yet
    // store zero here
    lda(0x0);
    ldx(0x6);
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // start with the last digit
    // initialize the digit amounts to increment
    sta(((DigitModifier) - (1)), x);
    dex();
    BPL(EraseMLoop);
    // do this until they're all reset, then leave
    return 0;
    JMP(BorrowOne);
}

int BorrowOne() {
    // decrement the previous digit, then put $09 in
    dec(((DigitModifier) - (1)), x);
    lda(0x9);
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // the game timer digit we're currently on to "borrow
    // the one", then do an unconditional branch back
    // subtract ten from our digit to make it a
    sec();
    sbc(10);
    inc(((DigitModifier) - (1)), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(0x5);
    // start with mario's score
    JSR(TopScoreCheck);
    ldx(0xb);
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(0x5);
    // start with the lowest digit
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // subtract each player digit from each high score digit
    lda(PlayerScoreDisplay, x);
    sbc(TopScoreDisplay, y);
    dex();
    dey();
    // from lowest to highest, if any top score digit exceeds
    // any player digit, borrow will be set until a subsequent
    // subtraction clears it (player digit is higher than top)
    BPL(GetScoreDiff);
    BCC(NoTopSc);
    inx();
    // check to see if borrow is still set, if so, no new high score
    // increment X and Y once to the start of the score
    iny();
    JMP(CopyScore);
}

int CopyScore() {
    // store player's score digits into high score memory area
    lda(PlayerScoreDisplay, x);
    sta(TopScoreDisplay, y);
    inx();
    iny();
    cpy(0x6);
    // do this until we have stored them all
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
    // clear all memory as in initialization procedure,
    // but this time, clear only as far as $076f
    ldy(0x1f);
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // clear out memory used
    sta(SoundMemory, y);
    dey();
    // by the sound engines
    BPL(ClrSndLoop);
    lda(0x18);
    // set demo timer
    sta(DemoTimer);
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(0x4b);
    JSR(InitializeMemory);
    // clear all memory again, only as far as $074b
    // this is only necessary if branching from
    ldx(0x21);
    lda(0x0);
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // clear out memory between
    sta(Timers, x);
    dex();
    // $0780 and $07a1
    BPL(ClrTimersLoop);
    lda(HalfwayPage);
    ldy(AltEntranceControl);
    // if AltEntranceControl not set, use halfway page, if any found
    BEQ(StartPage);
    lda(EntrancePage);
    JMP(StartPage);
}

int StartPage() {
    // otherwise use saved entry page number here
    // set as value here
    sta(ScreenLeft_PageLoc);
    sta(CurrentPageLoc);
    sta(BackloadingFlag);
    JSR(GetScreenPosition);
    ldy(0x20);
    anda(0b1);
    BEQ(SetInitNTHigh);
    // also set as current page
    // set flag here if halfway page or saved entry page number found
    // get pixel coordinates for screen borders
    // if on odd numbered page, use $2480 as start of rendering
    // otherwise use $2080, this address used later as name table
    // address for rendering of game area
    ldy(0x24);
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // store name table address
    sty(CurrentNTAddr_High);
    ldy(0x80);
    sty(CurrentNTAddr_Low);
    asl();
    asl();
    // store LSB of page number in high nybble
    // of block buffer column position
    asl();
    asl();
    sta(BlockBufferColumnPos);
    dec(AreaObjectLength);
    // set area object lengths for all empty
    dec(((AreaObjectLength) + (1)));
    dec(((AreaObjectLength) + (2)));
    lda(0xb);
    sta(ColumnSets);
    JSR(GetAreaDataAddrs);
    lda(PrimaryHardMode);
    BNE(SetSecHard);
    lda(WorldNumber);
    cmp(World5);
    // set value for renderer to update 12 column sets
    // 12 column sets = 24 metatile columns = 1 1/2 screens
    // get enemy and level addresses and load header
    // check to see if primary hard mode has been activated
    // if so, activate the secondary no matter where we're at
    // otherwise check world number
    // if less than 5, do not activate secondary
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda(LevelNumber);
    cmp(Level3);
    // if not equal to, then world > 5, thus activate
    // otherwise, world 5, so check level number
    // if 1 or 2, do not set secondary hard mode flag
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // set secondary hard mode flag for areas 5-3 and beyond
    inc(SecondaryHardMode);
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda(HalfwayPage);
    BEQ(DoneInitArea);
    lda(0x2);
    // if halfway page set, overwrite start position from header
    sta(PlayerEntranceCtrl);
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // silence music
    lda(Silence);
    sta(AreaMusicQueue);
    lda(0x1);
    // disable screen output
    sta(DisableScreenFlag);
    inc(OperMode_Task);
    // increment one of the modes
    return 0;
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(0x1);
    sta(FetchNewGameTimerFlag);
    sta(PlayerSize);
    // set flag to load game timer from header
    // set player's size to small
    lda(0x2);
    sta(NumberofLives);
    // give each player three lives
    sta(OffScr_NumberofLives);
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(0x0);
    sta(DisableScreenFlag);
    // enable screen output
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // clear buffer at $0300-$03ff
    sta(((VRAM_Buffer1) - (1)), y);
    iny();
    BNE(ClearVRLoop);
    sta(GameTimerExpiredFlag);
    sta(DisableIntermediate);
    sta(BackloadingFlag);
    // clear game timer exp flag
    // clear skip lives display flag
    // clear value here
    lda(0xff);
    sta(BalPlatformAlignment);
    lda(ScreenLeft_PageLoc);
    lsr(Mirror_PPU_CTRL_REG1);
    anda(0x1);
    ror();
    rol(Mirror_PPU_CTRL_REG1);
    JSR(GetAreaMusic);
    lda(0x38);
    // initialize balance platform assignment flag
    // get left side page location
    // shift LSB of ppu register #1 mirror out
    // mask out all but LSB of page location
    // rotate LSB of page location into carry then onto mirror
    // this is to set the proper PPU name table
    // load proper music into queue
    // load sprite shuffle amounts to be used later
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
    // do this until they're all set
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
    // these jsrs doesn't do anything useful
    JSR(DoNothing1);
    inc(Sprite0HitDetectFlag);
    inc(OperMode_Task);
    // set sprite #0 check flag
    // increment to next task
    return 0;
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(0x7);
    lda(0x0);
    // set initial high byte to $0700-$07ff
    // set initial low byte to start of page (at $00 of page)
    sta(0x6);
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(0x7);
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // check to see if we're on the stack ($0100-$01ff)
    cpx(0x1);
    BNE(InitByte);
    cpy(0x60);
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // if not, go ahead anyway
    // otherwise, check to see if we're at $0160-$01ff
    // if so, skip write
    // otherwise, initialize byte with current low byte in Y
    sta((0x6), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(0xff);
    // do this until all bytes in page have been erased
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // go onto the next page
    // do this until all pages of memory have been erased
    return 0;
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda(OperMode);
    // if in title screen mode, leave
    BEQ(ExitGetM);
    lda(AltEntranceControl);
    cmp(0x2);
    BEQ(ChkAreaType);
    ldy(0x5);
    lda(PlayerEntranceCtrl);
    // check for specific alternate mode of entry
    // if found, branch without checking starting position
    // from area object data header
    // select music for pipe intro scene by default
    // check value from level header for certain values
    cmp(0x6);
    BEQ(StoreMusic);
    cmp(0x7);
    // load music for pipe intro scene if header
    // start position either value $06 or $07
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // load area type as offset for music bit
    ldy(AreaType);
    lda(CloudTypeOverride);
    BEQ(StoreMusic);
    ldy(0x4);
    JMP(StoreMusic);
}

int StoreMusic() {
    // check for cloud type override
    // select music for cloud type level if found
    // otherwise select appropriate music for level type
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
    // set current page for area objects
    // as page location for player
    // store value here
    // for fractional movement downwards if necessary
    // set high byte of player position and
    // set facing direction so that player faces right
    sta(Player_Y_HighPos);
    lda(0x0);
    // set player state to on the ground by default
    sta(Player_State);
    dec(Player_CollisionBits);
    ldy(0x0);
    // initialize player's collision bits
    // initialize halfway page
    sty(HalfwayPage);
    lda(AreaType);
    BNE(ChkStPos);
    // check area type
    // if water type, set swimming flag, otherwise do not set
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty(SwimmingFlag);
    ldx(PlayerEntranceCtrl);
    ldy(AltEntranceControl);
    // get starting position loaded from header
    // check alternate mode of entry flag for 0 or 1
    BEQ(SetStPos);
    cpy(0x1);
    BEQ(SetStPos);
    ldx(((offsetof(G, AltYPosOffset)) - (2)), y);
    JMP(SetStPos);
}

int SetStPos() {
    // if not 0 or 1, override $0710 with new offset in X
    // load appropriate horizontal position
    lda(offsetof(G, PlayerStarting_X_Pos), y);
    sta(Player_X_Position);
    lda(offsetof(G, PlayerStarting_Y_Pos), x);
    sta(Player_Y_Position);
    // and vertical positions for the player, using
    // AltEntranceControl as offset for horizontal and either $0710
    // or value that overwrote $0710 as offset for vertical
    lda(offsetof(G, PlayerBGPriorityData), x);
    sta(Player_SprAttrib);
    JSR(GetPlayerColors);
    ldy(GameTimerSetting);
    BEQ(ChkOverR);
    lda(FetchNewGameTimerFlag);
    BEQ(ChkOverR);
    lda(offsetof(G, GameTimerData), y);
    sta(GameTimerDisplay);
    // set player sprite attributes using offset in X
    // get appropriate player palette
    // get timer control value from header
    // if set to zero, branch (do not use dummy byte for this)
    // do we need to set the game timer? if not, use
    // old game timer setting
    // if game timer is set and game timer flag is also set,
    // use value of game timer control for first digit of game timer
    lda(0x1);
    sta(((GameTimerDisplay) + (2)));
    // set last digit of game timer to 1
    lsr();
    sta(((GameTimerDisplay) + (1)));
    sta(FetchNewGameTimerFlag);
    sta(StarInvincibleTimer);
    JMP(ChkOverR);
}

int ChkOverR() {
    // set second digit of game timer
    // clear flag for game timer reset
    // clear star mario timer
    // if controller bits not set, branch to skip this part
    ldy(JoypadOverride);
    BEQ(ChkSwimE);
    lda(0x3);
    // set player state to climbing
    sta(Player_State);
    ldx(0x0);
    // set offset for first slot, for block object
    JSR(InitBlock_XY_Pos);
    lda(0xf0);
    // set vertical coordinate for block object
    sta(Block_Y_Position);
    ldx(0x5);
    ldy(0x0);
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // set offset in X for last enemy object buffer slot
    // set offset in Y for object coordinates used earlier
    // do a sub to grow vine
    // if level not water-type,
    ldy(AreaType);
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // skip this subroutine
    // otherwise, execute sub to set up air bubbles
    // set to run player entrance subroutine
    lda(0x7);
    sta(GameEngineSubroutine);
    // on the next frame of game engine
    return 0;
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc(DisableScreenFlag);
    // disable screen and sprite 0 check
    lda(0x0);
    sta(Sprite0HitDetectFlag);
    lda(Silence);
    // silence music
    sta(EventMusicQueue);
    dec(NumberofLives);
    BPL(StillInGame);
    // take one life from player
    // if player still has lives, branch
    lda(0x0);
    sta(OperMode_Task);
    lda(GameOverModeValue);
    sta(OperMode);
    // initialize mode task,
    // switch to game over mode
    // and leave
    return 0;
    JMP(StillInGame);
}

int StillInGame() {
    // multiply world number by 2 and use
    lda(WorldNumber);
    asl();
    // as offset
    tax();
    lda(LevelNumber);
    anda(0x2);
    BEQ(GetHalfway);
    // if in area -3 or -4, increment
    // offset by one byte, otherwise
    // leave offset alone
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // get halfway page number with offset
    ldy(offsetof(G, HalfwayPageNybbles), x);
    lda(LevelNumber);
    // check area number's LSB
    lsr();
    tya();
    // if in area -2 or -4, use lower nybble
    BCS(MaskHPNyb);
    lsr();
    lsr();
    // move higher nybble to lower if area
    // number is -1 or -3
    lsr();
    lsr();
    JMP(MaskHPNyb);
}

int MaskHPNyb() {
    // mask out all but lower nybble
    anda(0b1111);
    cmp(ScreenLeft_PageLoc);
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(0x0);
    JMP(SetHalfway);
}

int SetHalfway() {
    // left side of screen must be at the halfway page,
    // otherwise player must start at the
    // beginning of the level
    // store as halfway page for player
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
    // reset screen routine task control for title screen, game,
    // and game over modes
    // disable sprite 0 check
    lda(GameOverMusic);
    sta(EventMusicQueue);
    inc(DisableScreenFlag);
    inc(OperMode_Task);
    // put game over music in secondary queue
    // disable screen output
    // set secondary mode to 1
    return 0;
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(0x0);
    // reenable screen
    sta(DisableScreenFlag);
    lda(SavedJoypad1Bits);
    // check controller for start pressed
    anda(Start_Button);
    BNE(TerminateGame);
    lda(ScreenTimer);
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda(Silence);
    // silence music
    sta(EventMusicQueue);
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda(WorldNumber);
    sta(ContinueWorld);
    // check if other player can keep
    // going, and do so if possible
    // otherwise put world number of current
    // player into secret continue function variable
    lda(0x0);
    asl();
    sta(OperMode_Task);
    sta(ScreenTimer);
    // residual ASL instruction
    // reset all modes to title screen and
    // leave
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
    // update level pointer with
    // actual world and area numbers, then
    // reset player's size, status, and
    // set game timer flag to reload
    // game timer from header
    // also set flag for timers to count again
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
    // set carry flag by default to end game
    // if only a 1 player game, leave
    BEQ(ExTrans);
    lda(OffScr_NumberofLives);
    BMI(ExTrans);
    lda(CurrentPlayer);
    eor(0b1);
    // does offscreen player have any lives left?
    // branch if not
    // invert bit to update
    // which player is on the screen
    sta(CurrentPlayer);
    ldx(0x6);
    JMP(TransLoop);
}

int TransLoop() {
    // transpose the information
    lda(OnscreenPlayerInfo, x);
    pha();
    lda(OffscreenPlayerInfo, x);
    // of the onscreen player
    // with that of the offscreen player
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
    // check number of tasks here
    // if already set, go ahead
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
    // if all tasks not complete do not
    // render attribute table yet
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
    // increment column where we're at
    lda(CurrentColumnPos);
    anda(0b1111);
    // mask out higher nybble
    BNE(NoColWrap);
    sta(CurrentColumnPos);
    inc(CurrentPageLoc);
    JMP(NoColWrap);
}

int NoColWrap() {
    // if no bits left set, wrap back to zero (0-f)
    // and increment page number where we're at
    // increment column offset where we're at
    inc(BlockBufferColumnPos);
    lda(BlockBufferColumnPos);
    anda(0b11111);
    sta(BlockBufferColumnPos);
    // mask out all but 5 LSB (0-1f)
    // and save
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
    // clear out metatile buffer
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
    // if less than three we're there
    sec();
    sbc(0x3);
    BPL(ThirdP);
    JMP(RendBack);
}

int RendBack() {
    // if 3 or more, subtract 3 and
    // do an unconditional branch
    // move results to higher nybble
    asl();
    asl();
    asl();
    asl();
    adc(((offsetof(G, BSceneDataOffsets)) - (1)), y);
    adc(CurrentColumnPos);
    // add to it offset loaded from here
    // add to the result our current column position
    tax();
    lda(offsetof(G, BackSceneryData), x);
    BEQ(RendFore);
    // load data from sum of offsets
    // if zero, no scenery for that part
    pha();
    anda(0xf);
    // save to stack and clear high nybble
    sec();
    sbc(0x1);
    sta(0x0);
    asl();
    adc(0x0);
    tax();
    pla();
    // subtract one (because low nybble is $01-$0c)
    // save low nybble
    // multiply by three (shift to left and add result to old one)
    // note that since d7 was nulled, the carry flag is always clear
    // save as offset for background scenery metatile data
    // get high nybble from stack, move low
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    lda(0x3);
    // use as second offset (used to determine height)
    // use previously saved memory location for counter
    sta(0x0);
    JMP(SceLoop1);
}

int SceLoop1() {
    // load metatile data from offset of (lsb - 1) * 3
    lda(offsetof(G, BackSceneryMetatiles), x);
    sta(MetatileBuffer, y);
    // store into buffer from offset of (msb / 16)
    inx();
    iny();
    cpy(0xb);
    // if at this location, leave loop
    BEQ(RendFore);
    dec(0x0);
    // decrement until counter expires, barring exception
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // check for foreground data needed or not
    ldx(ForegroundScenery);
    BEQ(RendTerr);
    ldy(((offsetof(G, FSceneDataOffsets)) - (1)), x);
    ldx(0x0);
    JMP(SceLoop2);
}

int SceLoop2() {
    // if not, skip this part
    // load offset from location offset by header value, then
    // reinit X
    // load data until counter expires
    lda(offsetof(G, ForeSceneryData), y);
    BEQ(NoFore);
    // do not store if zero found
    sta(MetatileBuffer, x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(0xd);
    // store up to end of metatile buffer
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // check world type for water level
    ldy(AreaType);
    BNE(TerMTile);
    lda(WorldNumber);
    cmp(World8);
    // if not water level, skip this part
    // check world number, if not world number eight
    // then skip this part
    BNE(TerMTile);
    lda(0x62);
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // if set as water level and world number eight,
    // use castle wall metatile as terrain type
    // otherwise get appropriate metatile for area type
    lda(offsetof(G, TerrainMetatiles), y);
    ldy(CloudTypeOverride);
    BEQ(StoreMT);
    lda(0x88);
    JMP(StoreMT);
}

int StoreMT() {
    // check for cloud type override
    // if not set, keep value otherwise
    // use cloud block terrain
    // store value here
    sta(0x7);
    ldx(0x0);
    lda(TerrainControl);
    asl();
    // initialize X, use as metatile buffer offset
    // use yet another value from the header
    // multiply by 2 and use as yet another offset
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // get one of the terrain rendering bit data
    lda(offsetof(G, TerrainRenderBits), y);
    sta(0x0);
    iny();
    // increment Y and use as offset next time around
    sty(0x1);
    lda(CloudTypeOverride);
    // skip if value here is zero
    BEQ(NoCloud2);
    cpx(0x0);
    // otherwise, check if we're doing the ceiling byte
    BEQ(NoCloud2);
    lda(0x0);
    // if not, mask out all but d3
    anda(0b1000);
    sta(0x0);
    JMP(NoCloud2);
}

int NoCloud2() {
    // start at beginning of bitmasks
    ldy(0x0);
    JMP(TerrBChk);
}

int TerrBChk() {
    // load bitmask, then perform AND on contents of first byte
    lda(offsetof(G, Bitmasks), y);
    bit(0x0);
    BEQ(NextTBit);
    // if not set, skip this part (do not write terrain to buffer)
    lda(0x7);
    sta(MetatileBuffer, x);
    JMP(NextTBit);
}

int NextTBit() {
    // load terrain type metatile number and store into buffer here
    // continue until end of buffer
    inx();
    cpx(0xd);
    BEQ(RendBBuf);
    lda(AreaType);
    // if we're at the end, break out of this loop
    // check world type for underground area
    cmp(0x2);
    BNE(EndUChk);
    // if not underground, skip this part
    cpx(0xb);
    BNE(EndUChk);
    lda(0x54);
    // if we're at the bottom of the screen, override
    // old terrain type with ground level terrain type
    sta(0x7);
    JMP(EndUChk);
}

int EndUChk() {
    // increment bitmasks offset in Y
    iny();
    cpy(0x8);
    BNE(TerrBChk);
    // if not all bits checked, loop back
    ldy(0x1);
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // unconditional branch, use Y to load next byte
    // do the area data loading routine now
    JSR(ProcessAreaData);
    lda(BlockBufferColumnPos);
    JSR(GetBlockBufferAddr);
    // get block buffer address from where we're at
    ldx(0x0);
    ldy(0x0);
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(0x0);
    lda(MetatileBuffer, x);
    anda(0b11000000);
    // load stored metatile number
    // mask out all but 2 MSB
    asl();
    rol();
    // make %xx000000 into %000000xx
    rol();
    tay();
    lda(MetatileBuffer, x);
    cmp(offsetof(G, BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(0x0);
    JMP(StrBlock);
}

int StrBlock() {
    // use as offset in Y
    // reload original unmasked value here
    // check for certain values depending on bits set
    // if equal or greater, branch
    // if less, init value before storing
    // get offset for block buffer
    ldy(0x0);
    sta((0x6), y);
    // store value into block buffer
    tya();
    clc();
    // add 16 (move down one row) to offset
    adc(0x10);
    tay();
    inx();
    // increment column value
    cpx(0xd);
    BCC(ChkMTLow);
    // continue until we pass last row, then leave
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
    // reset flag
    sta(BehindAreaParserFlag);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    cmp(0xfd);
    // get offset of area data pointer
    // get first byte of area object
    // if end-of-area, skip all this crap
    BEQ(RdyDecode);
    lda(AreaObjectLength, x);
    BPL(RdyDecode);
    // check area object buffer flag
    // if buffer not negative, branch, otherwise
    iny();
    lda((AreaData), y);
    asl();
    // get second byte of area object
    // check for page select bit (d7), branch if not set
    BCC(Chk1Row13);
    lda(AreaObjectPageSel);
    // check page select
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
    // reread first byte of level object
    // mask out high nybble
    // row 13?
    BNE(Chk1Row14);
    iny();
    // if so, reread second byte of level object
    lda((AreaData), y);
    dey();
    anda(0b1000000);
    // decrement to get ready to read first byte
    // check for d6 set (if not, object is page control)
    BNE(CheckRear);
    lda(AreaObjectPageSel);
    // if page select is set, do not reread
    BNE(CheckRear);
    iny();
    // if d6 not set, reread second byte
    lda((AreaData), y);
    anda(0b11111);
    // mask out all but 5 LSB and store in page control
    sta(AreaObjectPageLoc);
    inc(AreaObjectPageSel);
    // increment page select
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // row 14?
    cmp(0xe);
    BNE(CheckRear);
    lda(BackloadingFlag);
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // check flag for saved page number and branch if set
    // to render the object (otherwise bg might not look right)
    // check to see if current page of level object is
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    BCC(SetBehind);
    JMP(RdyDecode);
}

int RdyDecode() {
    // behind current page of renderer
    // if so branch
    // do sub and do not turn on flag
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}

int SetBehind() {
    // turn on flag if object is behind renderer
    inc(BehindAreaParserFlag);
    JMP(NextAObj);
}

int NextAObj() {
    // increment buffer offset and move on
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // get buffer offset
    ldx(ObjectOffset);
    lda(AreaObjectLength, x);
    BMI(ProcLoopb);
    dec(AreaObjectLength, x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // check object length for anything stored here
    // if not, branch to handle loopback
    // otherwise decrement length or get rid of it
    // decrement buffer offset
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
    // increment offset of level pointer
    inc(AreaDataOffset);
    lda(0x0);
    // reset page select
    sta(AreaObjectPageSel);
    return 0;
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda(AreaObjectLength, x);
    // check current buffer flag
    BMI(Chk1stB);
    ldy(AreaObjOffsetBuffer, x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // if not, get offset from buffer
    // load offset of 16 for special row 15
    ldx(0x10);
    lda((AreaData), y);
    // get first byte of level object again
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
    // if end of level, leave this routine
    // otherwise, mask out low nybble
    // row 15?
    // if so, keep the offset of 16
    // otherwise load offset of 8 for special row 12
    // row 12?
    // if so, keep the offset value of 8
    // otherwise nullify value by default
    // store whatever value we just loaded here
    stx(0x7);
    ldx(ObjectOffset);
    cmp(0xe);
    // get object offset again
    // row 14?
    BNE(ChkRow13);
    lda(0x0);
    // if so, load offset with $00
    sta(0x7);
    lda(0x2e);
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // and load A with another value
    // unconditional branch
    // row 13?
    cmp(0xd);
    BNE(ChkSRows);
    lda(0x22);
    // if so, load offset with 34
    sta(0x7);
    iny();
    // get next byte
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
    // mask out all but d6 (page control obj bit)
    // if d6 clear, branch to leave (we handled this earlier)
    // otherwise, get byte again
    // mask out d7
    // check for loop command in low nybble
    // (plus d6 set for object other than page control)
    // if loop command, set loop command flag
    // mask out d7 and d6
    anda(0b111111);
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // and jump
    // row 12-15?
    cmp(0xc);
    BCS(SpecObj);
    iny();
    // if not, get second byte of level object
    lda((AreaData), y);
    anda(0b1110000);
    BNE(LrgObj);
    // mask out all but d6-d4
    // if any bits set, branch to handle large object
    lda(0x16);
    sta(0x7);
    lda((AreaData), y);
    anda(0b1111);
    // otherwise set offset of 24 for small object
    // reload second byte of level object
    // mask out higher nybble and jump
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // store value here (branch for large objects)
    sta(0x0);
    cmp(0x70);
    // check for vertical pipe object
    BNE(NotWPipe);
    lda((AreaData), y);
    anda(0b1000);
    BEQ(NotWPipe);
    lda(0x0);
    // if not, reload second byte
    // mask out all but d3 (usage control bit)
    // if d3 clear, branch to get original value
    // otherwise, nullify value for warp pipe
    sta(0x0);
    JMP(NotWPipe);
}

int NotWPipe() {
    // get value and jump ahead
    lda(0x0);
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // branch here for rows 12-15
    iny();
    lda((AreaData), y);
    anda(0b1110000);
    JMP(MoveAOId);
}

int MoveAOId() {
    // get next byte and mask out all but d6-d4
    // move d6-d4 to lower nybble
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}

int NormObj() {
    // store value here (branch for small objects and rows 13 and 14)
    sta(0x0);
    lda(AreaObjectLength, x);
    BPL(RunAObj);
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    // is there something stored here already?
    // if so, branch to do its particular sub
    // otherwise check to see if the object we've loaded is on the
    // same page as the renderer, and if so, branch
    BEQ(InitRear);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    // if not, get old offset of level pointer
    // and reload first byte
    anda(0b1111);
    cmp(0xe);
    // row 14?
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
    // check backloading flag to see if it's been initialized
    lda(BackloadingFlag);
    BEQ(BackColC);
    lda(0x0);
    sta(BackloadingFlag);
    // branch to column-wise check
    // if not, initialize both backloading and
    // behind-renderer flags and leave
    sta(BehindAreaParserFlag);
    sta(ObjectOffset);
    JMP(LoopCmdE);
}

int LoopCmdE() {
    return 0;
    JMP(BackColC);
}

int BackColC() {
    // get first byte again
    ldy(AreaDataOffset);
    lda((AreaData), y);
    anda(0b11110000);
    // mask out low nybble and move high to low
    lsr();
    lsr();
    lsr();
    lsr();
    cmp(CurrentColumnPos);
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // is this where we're at?
    // if not, branch to leave
    // if so, load area obj offset and store in buffer
    lda(AreaDataOffset);
    sta(AreaObjOffsetBuffer, x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // do sub to increment to next object data
    // get stored value and add offset to it
    lda(0x0);
    clc();
    // then use the jump engine with current contents of A
    adc(0x7);
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy(AreaObjOffsetBuffer, x);
    iny();
    // object for special row $0e or 14
    // (these apply to all area object subroutines in this section unless otherwise stated)
    // $07 - starts with adder from area parser, used to store row offset
    // load offset for level object data saved in buffer
    // load second byte
    lda((AreaData), y);
    pha();
    // save in stack for now
    anda(0b1000000);
    BNE(Alter2);
    // branch if d6 is set
    pla();
    pha();
    anda(0b1111);
    sta(TerrainControl);
    // pull and push offset to copy to A
    // mask out high nybble and store as
    // new terrain height type bits
    pla();
    anda(0b110000);
    lsr();
    lsr();
    // pull and mask out all but d5 and d4
    // move bits to lower nybble and store
    // as new background scenery bits
    lsr();
    lsr();
    sta(BackgroundScenery);
    // then leave
    return 0;
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(0b111);
    cmp(0x4);
    BCC(SetFore);
    // mask out all but 3 LSB
    // if four or greater, set color control bits
    // and nullify foreground scenery bits
    sta(BackgroundColorCtrl);
    lda(0x0);
    JMP(SetFore);
}

int SetFore() {
    // otherwise set new foreground scenery bits
    sta(ForegroundScenery);
    return 0;
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(0x4);
    lda(WorldNumber);
    // load value of 4 for game text routine as default
    // warp zone (4-3-2), then check world number
    BEQ(WarpNum);
    inx();
    ldy(AreaType);
    // if world number > 1, increment for next warp zone (5)
    // check area type
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta(WarpZoneControl);
    JSR(WriteGameText);
    // store number here to be used by warp zone routine
    // print text and warp zone numbers
    lda(PiranhaPlant);
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda(ScrollLock);
    // invert scroll lock to turn it on
    eor(0b1);
    sta(ScrollLock);
    return 0;
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(0x0);
    // $00 - used to store enemy identifier in KillEnemies
    // store identifier here
    lda(0x0);
    ldx(0x4);
    JMP(KillELoop);
}

int KillELoop() {
    ldy(Enemy_ID, x);
    cpy(0x0);
    // if not found, branch
    BNE(NoKillE);
    sta(Enemy_Flag, x);
    JMP(NoKillE);
}

int NoKillE() {
    // if found, deactivate enemy object flag
    // do this until all slots are checked
    dex();
    BPL(KillELoop);
    return 0;
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // use area object identifier bit as offset
    ldx(0x0);
    lda(((offsetof(G, FrenzyIDData)) - (8)), x);
    // note that it starts at 8, thus weird address here
    ldy(0x5);
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // check regular slots of enemy object buffer
    dey();
    BMI(ExitAFrenzy);
    cmp(Enemy_ID, y);
    // if all slots checked and enemy object not found, branch to store
    // check for enemy object in buffer versus frenzy object
    BNE(FreCompLoop);
    lda(0x0);
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // if enemy object already present, nullify queue and leave
    // store enemy into frenzy queue
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
    // get row and length of green ledge
    // check length counter for expiration
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta(AreaObjectLength, x);
    // store lower nybble into buffer flag as length of ledge
    lda(CurrentPageLoc);
    ora(CurrentColumnPos);
    // are we at the start of the level?
    BEQ(MidTreeL);
    lda(0x16);
    // render start of tree ledge
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
    // render middle of tree ledge
    // note that this is also used if ledge position is
    // at the start of level for continuous effect
    // now render the part underneath
    // render end of tree ledge
    lda(0x18);
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(0x6);
    // get shroom dimensions
    // store length here for now
    BCC(EndMushL);
    lda(AreaObjectLength, x);
    // divide length by 2 and store elsewhere
    lsr();
    sta(MushroomLedgeHalfLen, x);
    lda(0x19);
    // render start of mushroom
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // if at the end, render end of mushroom
    lda(0x1b);
    ldy(AreaObjectLength, x);
    BEQ(NoUnder);
    lda(MushroomLedgeHalfLen, x);
    sta(0x6);
    // get divided length and store where length
    // was stored originally
    ldx(0x7);
    lda(0x1a);
    sta(MetatileBuffer, x);
    cpy(0x6);
    BNE(MushLExit);
    // render middle of mushroom
    // are we smack dab in the center?
    // if not, branch to leave
    inx();
    lda(0x4f);
    sta(MetatileBuffer, x);
    // render stem top of mushroom underneath the middle
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
    // set $0f to render all way down
    // now render the stem of mushroom
    // load row of ledge
    ldx(0x7);
    ldy(0x0);
    // set 0 for no bottom on this part
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(0x0);
    BCS(RenderPul);
    // get length of pulley/rope object
    // initialize metatile offset
    // if starting, render left pulley
    iny();
    lda(AreaObjectLength, x);
    // if not at the end, render rope
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
    // render at the top of the screen
    // and leave
    return 0;
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(0x7);
    // save lower nybble as starting row
    // if starting row is above $0a, game will crash!!!
    ldy(0x4);
    JSR(ChkLrgObjFixedLength);
    // load length of castle if not already loaded
    txa();
    pha();
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // save obj buffer offset to stack
    // use current length as offset for castle data
    // begin at starting row
    lda(0xb);
    sta(0x6);
    JMP(CRendLoop);
}

int CRendLoop() {
    // load upper limit of number of rows to print
    // load current byte using offset
    lda(offsetof(G, CastleMetatiles), y);
    sta(MetatileBuffer, x);
    inx();
    // store in buffer and increment buffer offset
    lda(0x6);
    BEQ(ChkCFloor);
    iny();
    iny();
    // have we reached upper limit yet?
    // if not, increment column-wise
    // to byte in next row
    iny();
    iny();
    iny();
    dec(0x6);
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // move closer to upper limit
    // have we reached the row just before floor?
    cpx(0xb);
    BNE(CRendLoop);
    // if not, go back and do another row
    pla();
    tax();
    // get obj buffer offset from before
    lda(CurrentPageLoc);
    BEQ(ExitCastle);
    lda(AreaObjectLength, x);
    cmp(0x1);
    // if we're at page 0, we do not need to do anything else
    // check length
    // if length almost about to expire, put brick at floor
    BEQ(PlayerStop);
    ldy(0x7);
    // check starting row for tall castle ($00)
    BNE(NotTall);
    cmp(0x3);
    // if found, then check to see if we're at the second column
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // if not tall castle, check to see if we're at the third column
    cmp(0x2);
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // if we aren't and the castle is tall, don't create flag yet
    // otherwise, obtain and save horizontal pixel coordinate
    pha();
    JSR(FindEmptyEnemySlot);
    // find an empty place on the enemy object buffer
    pla();
    sta(Enemy_X_Position, x);
    // then write horizontal coordinate for star flag
    lda(CurrentPageLoc);
    sta(Enemy_PageLoc, x);
    // set page location for star flag
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // set vertical high byte
    // set flag for buffer
    lda(0x90);
    sta(Enemy_Y_Position, x);
    lda(StarFlagObject);
    // set vertical coordinate
    // set star flag value in buffer itself
    sta(Enemy_ID, x);
    return 0;
    JMP(PlayerStop);
}

int PlayerStop() {
    // put brick at floor to stop player at end of level
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
    // get row and lower nybble
    // get length (residual code, water pipe is 1 col thick)
    // get row
    lda(0x6b);
    sta(MetatileBuffer, x);
    // draw something here and below it
    lda(0x6c);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(0x3);
    // $05 - used to store length of vertical shaft in RenderSidewaysPipe
    // and vertical length in VerticalPipe and GetPipeHeight
    // check if length set, if not set, set it
    JSR(ChkLrgObjFixedLength);
    ldy(0xa);
    // set fixed value and render the sideways part
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(0x6);
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // if carry flag set, not time to draw vertical pipe part
    // blank everything above the vertical pipe part
    // all the way to the top of the screen
    lda(0x0);
    sta(MetatileBuffer, x);
    // because otherwise it will look like exit pipe
    dex();
    BPL(VPipeSectLoop);
    lda(offsetof(G, VerticalPipeData), y);
    // draw the end of the vertical pipe part
    sta(((MetatileBuffer) + (7)));
    JMP(NoBlankP);
}

int NoBlankP() {
    return 0;
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(0x3);
    // check if length set, if not set, set it
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}

int RenderSidewaysPipe() {
    dey();
    dey();
    // decrement twice to make room for shaft at bottom
    // and store here for now as vertical length
    sty(0x5);
    ldy(AreaObjectLength, x);
    // get length left over and store here
    sty(0x6);
    ldx(0x5);
    // get vertical length plus one, use as buffer offset
    inx();
    lda(offsetof(G, SidePipeShaftData), y);
    // check for value $00 based on horizontal offset
    cmp(0x0);
    BEQ(DrawSidePart);
    // if found, do not draw the vertical pipe shaft
    ldx(0x0);
    ldy(0x5);
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // init buffer offset and get vertical length
    // and render vertical shaft using tile number in A
    // clear carry flag to be used by IntroPipe
    // render side pipe part at the bottom
    ldy(0x6);
    lda(offsetof(G, SidePipeTopPart), y);
    sta(MetatileBuffer, x);
    lda(offsetof(G, SidePipeBottomPart), y);
    // note that the pipe parts are stored
    // backwards horizontally
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(0x0);
    BEQ(WarpPipe);
    // check to see if value was nullified earlier
    // (if d3, the usage control bit of second byte, was set)
    iny();
    iny();
    iny();
    iny();
    JMP(WarpPipe);
}

int WarpPipe() {
    // add four if usage control bit was not set
    // save value in stack
    tya();
    pha();
    lda(AreaNumber);
    ora(WorldNumber);
    // if at world 1-1, do not add piranha plant ever
    BEQ(DrawPipe);
    ldy(AreaObjectLength, x);
    BEQ(DrawPipe);
    JSR(FindEmptyEnemySlot);
    BCS(DrawPipe);
    JSR(GetAreaObjXPosition);
    // if on second column of pipe, branch
    // (because we only need to do this once)
    // check for an empty moving data buffer space
    // if not found, too many enemies, thus skip
    // get horizontal pixel coordinate
    clc();
    adc(0x8);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // add eight to put the piranha plant in the center
    // store as enemy's horizontal coordinate
    // add carry to current page number
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // store as enemy's page coordinate
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    JSR(GetAreaObjYPosition);
    // activate enemy flag
    // get piranha plant's vertical coordinate and store here
    sta(Enemy_Y_Position, x);
    lda(PiranhaPlant);
    // write piranha plant's value into buffer
    sta(Enemy_ID, x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // get value saved earlier and use as Y
    pla();
    tay();
    ldx(0x7);
    lda(offsetof(G, VerticalPipeData), y);
    sta(MetatileBuffer, x);
    // get buffer offset
    // draw the appropriate pipe with the Y we loaded earlier
    // render the top of the pipe
    inx();
    lda(((offsetof(G, VerticalPipeData)) + (2)), y);
    ldy(0x6);
    // render the rest of the pipe
    // subtract one from length and render the part underneath
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(0x1);
    JSR(ChkLrgObjFixedLength);
    // check for length loaded, if not, load
    // pipe length of 2 (horizontal)
    JSR(GetLrgObjAttrib);
    tya();
    anda(0x7);
    sta(0x6);
    ldy(AreaObjectLength, x);
    // get saved lower nybble as height
    // save only the three lower bits as
    // vertical length, then load Y with
    // length left over
    return 0;
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(0x0);
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // start at first enemy slot
    // clear carry flag by default
    clc();
    lda(Enemy_Flag, x);
    BEQ(ExitEmptyChk);
    // check enemy buffer for nonzero
    // if zero, leave
    inx();
    cpx(0x5);
    // if nonzero, check next value
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // if all values nonzero, carry flag is set
    return 0;
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(0x86);
    // get low nybble and save as length
    // render waves
    sta(((MetatileBuffer) + (10)));
    ldx(0xb);
    ldy(0x1);
    // now render the water underneath
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
    // start on the eighth row
    // save whatever row to the stack for now
    // get low nybble and save as length
    pla();
    tax();
    // render question boxes with coins
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
    // start on the tenth row
    // save whatever row to the stack for now
    // get low nybble and save as length
    pla();
    tax();
    // render bridge railing
    lda(0xb);
    sta(MetatileBuffer, x);
    inx();
    ldy(0x0);
    // now render the bridge itself
    lda(0x63);
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(0x2);
    lda(0x6d);
    // get low nybble from object byte
    // render flag balls on third row from top
    // of screen downwards based on low nybble
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(0x24);
    // render flagpole ball on top
    sta(MetatileBuffer);
    ldx(0x1);
    // now render the flagpole shaft
    ldy(0x8);
    lda(0x25);
    JSR(RenderUnderPart);
    lda(0x61);
    // render solid block at the bottom
    sta(((MetatileBuffer) + (10)));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(0x8);
    sta(((Enemy_X_Position) + (5)));
    // get pixel coordinate of where the flagpole is,
    // subtract eight pixels and use as horizontal
    // coordinate for the flag
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(((Enemy_PageLoc) + (5)));
    // subtract borrow from page location and use as
    // page location for the flag
    lda(0x30);
    sta(((Enemy_Y_Position) + (5)));
    // set vertical coordinate for flag
    lda(0xb0);
    sta(FlagpoleFNum_Y_Pos);
    // set initial vertical coordinate for flagpole's floatey number
    lda(FlagpoleFlagObject);
    sta(((Enemy_ID) + (5)));
    inc(((Enemy_Flag) + (5)));
    // set flag identifier, note that identifier and coordinates
    // use last space in enemy object buffer
    return 0;
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(0x0);
    // render rope from the top to the bottom of screen
    ldy(0xf);
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // save object buffer offset for now
    pha();
    ldx(0x1);
    ldy(0xf);
    // blank out all from second row to the bottom
    // with blank used for balance platform rope
    lda(0x44);
    JSR(RenderUnderPart);
    pla();
    // get back object buffer offset
    tax();
    JSR(GetLrgObjAttrib);
    // get vertical length from lower nybble
    ldx(0x1);
    JMP(DrawRope);
}

int DrawRope() {
    // render the actual rope
    lda(0x40);
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy(AreaType);
    lda(offsetof(G, CoinMetatileData), y);
    // get area type
    // load appropriate coin metatile
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(0xc);
    // load length of 13 columns
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(0x8);
    // load bowser's palette into sprite portion of palette
    sta(VRAM_Buffer_AddrCtrl);
    JMP(ChainObj);
}

int ChainObj() {
    ldy(0x0);
    ldx(((offsetof(G, C_ObjectRow)) - (2)), y);
    // get value loaded earlier from decoder
    // get appropriate row and metatile for object
    lda(((offsetof(G, C_ObjectMetatile)) - (2)), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // get row location
    ldx(0x7);
    lda(0xc4);
    JMP(ColObj);
}

int ColObj() {
    // column length of 1
    ldy(0x0);
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy(AreaType);
    lda(CloudTypeOverride);
    // load area type obtained from area offset pointer
    // check for cloud type override
    BEQ(DrawBricks);
    ldy(0x4);
    JMP(DrawBricks);
}

int DrawBricks() {
    // if cloud type, override area type
    // get appropriate metatile
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
    // load area type obtained from area offset pointer
    // get metatile
    // store metatile here
    pha();
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}

int DrawRow() {
    ldx(0x7);
    ldy(0x0);
    // set vertical height of 1
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy(AreaType);
    lda(offsetof(G, BrickMetatiles), y);
    // load area type obtained from area offset
    // get metatile (no cloud override as for row)
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy(AreaType);
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // load area type obtained from area offset
    // get metatile
    // save metatile to stack for now
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
    // get row and length of bullet bill cannon
    // start at first row
    // render bullet bill cannon
    sta(MetatileBuffer, x);
    inx();
    dey();
    // done yet?
    BMI(SetupCannon);
    lda(0x65);
    // if not, render middle part
    sta(MetatileBuffer, x);
    inx();
    dey();
    // done yet?
    BMI(SetupCannon);
    lda(0x66);
    // if not, render bottom until length expires
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // get offset for data used by cannons and whirlpools
    ldx(Cannon_Offset);
    JSR(GetAreaObjYPosition);
    sta(Cannon_Y_Position, x);
    // get proper vertical coordinate for cannon
    // and store it here
    lda(CurrentPageLoc);
    sta(Cannon_PageLoc, x);
    JSR(GetAreaObjXPosition);
    sta(Cannon_X_Position, x);
    // store page number for cannon here
    // get proper horizontal coordinate for cannon
    // and store it here
    inx();
    cpx(0x6);
    BCC(StrCOffset);
    ldx(0x0);
    JMP(StrCOffset);
}

int StrCOffset() {
    // increment and check offset
    // if not yet reached sixth cannon, branch to save offset
    // otherwise initialize it
    // save new offset and leave
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
    // check and load length
    // if length already loaded, skip init part
    // start past the end for the bottom
    // of the staircase
    // move onto next step (or first if starting)
    dec(StaircaseControl);
    ldy(StaircaseControl);
    ldx(offsetof(G, StaircaseRowData), y);
    // get starting row and height to render
    lda(offsetof(G, StaircaseHeightData), y);
    tay();
    lda(0x61);
    // now render solid block staircase
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // find empty space in enemy object buffer
    // get horizontal coordinate for jumpspring
    // and store
    // store page location of jumpspring
    sta(Enemy_PageLoc, x);
    JSR(GetAreaObjYPosition);
    sta(Enemy_Y_Position, x);
    sta(Jumpspring_FixedYPos, x);
    // get vertical coordinate for jumpspring
    // and store
    // store as permanent coordinate here
    lda(JumpspringObject);
    sta(Enemy_ID, x);
    // write jumpspring object to enemy object buffer
    ldy(0x1);
    sty(Enemy_Y_HighPos, x);
    inc(Enemy_Flag, x);
    // store vertical high byte
    // set flag for enemy object buffer
    ldx(0x7);
    lda(0x67);
    // draw metatiles in two rows where jumpspring is
    sta(MetatileBuffer, x);
    lda(0x68);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda(Hidden1UpFlag);
    // $07 - used to save ID of brick object
    // if flag not set, do not render object
    BEQ(ExitDecBlock);
    lda(0x0);
    // if set, init for the next one
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
    // initialize multi-coin timer flag
    sta(BrickCoinTimerFlag);
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // save area object ID
    sty(0x7);
    lda(0x0);
    ldy(AreaType);
    // load default adder for bricks with lines
    // check level type for ground level
    dey();
    BEQ(BWithL);
    lda(0x5);
    JMP(BWithL);
}

int BWithL() {
    // if ground type, do not start with 5
    // otherwise use adder for bricks without lines
    // add object ID to adder
    clc();
    adc(0x7);
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // use as offset for metatile
    // get appropriate metatile for brick (question block
    lda(offsetof(G, BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(0x0);
    // get value saved from area parser routine
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
    // get lower nybble and save as length
    // skip this part if length already loaded
    // check for water type level
    // if not water type, skip this part
    // get offset for data used by cannons and whirlpools
    // get proper vertical coordinate of where we're at
    sec();
    sbc(0x10);
    sta(Whirlpool_LeftExtent, x);
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(Whirlpool_PageLoc, x);
    // subtract 16 pixels
    // store as left extent of whirlpool
    // get page location of where we're at
    // subtract borrow
    // save as page location of whirlpool
    iny();
    iny();
    // increment length by 2
    tya();
    asl();
    asl();
    asl();
    asl();
    sta(Whirlpool_Length, x);
    // multiply by 16 to get size of whirlpool
    // note that whirlpool will always be
    // two blocks bigger than actual size of hole
    // and extend one block beyond each edge
    // save size of whirlpool here
    inx();
    cpx(0x5);
    BCC(StrWOffset);
    ldx(0x0);
    JMP(StrWOffset);
}

int StrWOffset() {
    // increment and check offset
    // if not yet reached fifth whirlpool, branch to save offset
    // otherwise initialize it
    // save new offset here
    stx(Whirlpool_Offset);
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // get appropriate metatile, then
    ldx(AreaType);
    lda(offsetof(G, HoleMetatiles), x);
    // render the hole proper
    ldx(0x8);
    ldy(0xf);
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty(AreaObjectHeight);
    ldy(MetatileBuffer, x);
    BEQ(DrawThisRow);
    // store vertical length to render
    // check current spot to see if there's something
    // we need to keep, if nothing, go ahead
    cpy(0x17);
    BEQ(WaitOneRow);
    // if middle part (tree ledge), wait until next row
    cpy(0x1a);
    BEQ(WaitOneRow);
    // if middle part (mushroom ledge), wait until next row
    cpy(0xc0);
    BEQ(DrawThisRow);
    // if question block w/ coin, overwrite
    cpy(0xc0);
    BCS(WaitOneRow);
    // if any other metatile with palette 3, wait until next row
    cpy(0x54);
    BNE(DrawThisRow);
    // if cracked rock terrain, overwrite
    cmp(0x50);
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // if stem top of mushroom, wait until next row
    // render contents of A from routine that called this
    sta(MetatileBuffer, x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(0xd);
    // stop rendering if we're at the bottom of the screen
    BCS(ExitUPartR);
    ldy(AreaObjectHeight);
    // decrement, and stop rendering if there is no more length
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
    // check for set length counter
    // clear carry flag for not just starting
    // if counter not set, load it, otherwise leave alone
    // save length into length counter
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
    // get offset saved from area obj decoding routine
    // get first byte of level object
    anda(0b1111);
    sta(0x7);
    // save row location
    iny();
    lda((AreaData), y);
    anda(0b1111);
    // get next byte, save lower nybble (length or height)
    // as Y, then leave
    tay();
    return 0;
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda(CurrentColumnPos);
    asl();
    // multiply current offset where we're at by 16
    // to obtain horizontal pixel coordinate
    asl();
    asl();
    asl();
    return 0;
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(0x7);
    // multiply value by 16
    asl();
    asl();
    // this will give us the proper vertical pixel coordinate
    asl();
    asl();
    clc();
    adc(32);
    // add 32 pixels for the status bar
    return 0;
    JMP(GetBlockBufferAddr);
}

int GetBlockBufferAddr() {
    pha();
    lsr();
    // take value of A, save
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    tay();
    lda(((offsetof(G, BlockBufferAddr)) + (2)), y);
    // use nybble as pointer to high byte
    // of indirect here
    sta(0x7);
    pla();
    anda(0b1111);
    // pull from stack, mask out high nybble
    clc();
    adc(offsetof(G, BlockBufferAddr), y);
    sta(0x6);
    // add to low byte
    // store here and leave
    return 0;
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // find it and store it here
    sta(AreaPointer);
    JMP(GetAreaType);
}

int GetAreaType() {
    // mask out all but d6 and d5
    anda(0b1100000);
    asl();
    rol();
    rol();
    rol();
    sta(AreaType);
    // make %0xx00000 into %000000xx
    // save 2 MSB as area type
    return 0;
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy(WorldNumber);
    // load offset from world variable
    lda(offsetof(G, WorldAddrOffsets), y);
    clc();
    // add area number used to find data
    adc(AreaNumber);
    tay();
    lda(offsetof(G, AreaAddrOffsets), y);
    // from there we have our area pointer
    return 0;
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda(AreaPointer);
    // use 2 MSB for Y
    JSR(GetAreaType);
    tay();
    lda(AreaPointer);
    // mask out all but 5 LSB
    anda(0b11111);
    sta(AreaAddrsLOffset);
    lda(offsetof(G, EnemyAddrHOffsets), y);
    clc();
    adc(AreaAddrsLOffset);
    // save as low offset
    // load base value with 2 altered MSB,
    // then add base value to 5 LSB, result
    // becomes offset for level data
    tay();
    lda(offsetof(G, EnemyDataAddrLow), y);
    // use offset to load pointer
    sta(EnemyDataLow);
    lda(offsetof(G, EnemyDataAddrHigh), y);
    sta(EnemyDataHigh);
    ldy(AreaType);
    lda(offsetof(G, AreaDataHOffsets), y);
    // use area type as offset
    // do the same thing but with different base value
    clc();
    adc(AreaAddrsLOffset);
    tay();
    lda(offsetof(G, AreaDataAddrLow), y);
    // use this offset to load another pointer
    sta(AreaDataLow);
    lda(offsetof(G, AreaDataAddrHigh), y);
    sta(AreaDataHigh);
    ldy(0x0);
    // load first byte of header
    lda((AreaData), y);
    pha();
    anda(0b111);
    // save it to the stack for now
    // save 3 LSB for foreground scenery or bg color control
    cmp(0x4);
    BCC(StoreFore);
    sta(BackgroundColorCtrl);
    // if 4 or greater, save value here as bg color control
    lda(0x0);
    JMP(StoreFore);
}

int StoreFore() {
    // if less, save value here as foreground scenery
    sta(ForegroundScenery);
    pla();
    // pull byte from stack and push it back
    pha();
    anda(0b111000);
    lsr();
    // save player entrance control bits
    // shift bits over to LSBs
    lsr();
    lsr();
    sta(PlayerEntranceCtrl);
    pla();
    anda(0b11000000);
    // save value here as player entrance control
    // pull byte again but do not push it back
    // save 2 MSB for game timer setting
    clc();
    rol();
    // rotate bits over to LSBs
    rol();
    rol();
    sta(GameTimerSetting);
    // save value here as game timer setting
    iny();
    lda((AreaData), y);
    pha();
    anda(0b1111);
    // load second byte of header
    // save to stack
    // mask out all but lower nybble
    sta(TerrainControl);
    pla();
    // pull and push byte to copy it to A
    pha();
    anda(0b110000);
    // save 2 MSB for background scenery type
    lsr();
    lsr();
    // shift bits to LSBs
    lsr();
    lsr();
    sta(BackgroundScenery);
    // save as background scenery
    pla();
    anda(0b11000000);
    clc();
    rol();
    // rotate bits over to LSBs
    rol();
    rol();
    cmp(0b11);
    BNE(StoreStyle);
    sta(CloudTypeOverride);
    // if set to 3, store here
    // and nullify other value
    // otherwise store value in other place
    lda(0x0);
    JMP(StoreStyle);
}

int StoreStyle() {
    sta(AreaStyle);
    lda(AreaDataLow);
    // increment area data address by 2 bytes
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
    // get which player is on the screen
    // use appropriate player's controller bits
    // as the master controller bits
    // execute one of many possible subs
    // check major task of operating mode
    // if we are supposed to be here,
    // branch to the game engine itself
    return 0;
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // process fireballs and air bubbles
    ldx(0x0);
    JMP(ProcELoop);
}

int ProcELoop() {
    // put incremented offset in X as enemy object offset
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // process enemy objects
    // process floatey numbers
    inx();
    cpx(0x6);
    // do these two subroutines until the whole buffer is done
    BNE(ProcELoop);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    JSR(PlayerGfxHandler);
    JSR(BlockObjMT_Updater);
    // get offscreen bits for player object
    // get relative coordinates for player object
    // draw the player
    // replace block objects with metatiles if necessary
    ldx(0x1);
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    // set offset for second
    // process second block object
    dex();
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    JSR(MiscObjectsCore);
    JSR(ProcessCannons);
    JSR(ProcessWhirlpools);
    JSR(FlagpoleRoutine);
    JSR(RunGameTimer);
    JSR(ColorRotation);
    // set offset for first
    // process first block object
    // process misc objects (hammer, jumping coins)
    // process bullet bill cannons
    // process whirlpools
    // process the flagpole
    // count down the game timer
    // cycle one of the background colors
    lda(Player_Y_HighPos);
    cmp(0x2);
    // if player is below the screen, don't bother with the music
    BPL(NoChgMus);
    lda(StarInvincibleTimer);
    BEQ(ClrPlrPal);
    // if star mario invincibility timer at zero,
    // skip this part
    cmp(0x4);
    BNE(NoChgMus);
    lda(IntervalTimerControl);
    BNE(NoChgMus);
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}

int NoChgMus() {
    // if not yet at a certain point, continue
    // if interval timer not yet expired,
    // branch ahead, don't bother with the music
    // to re-attain appropriate level music
    // get invincibility timer
    ldy(StarInvincibleTimer);
    lda(FrameCounter);
    cpy(0x8);
    BCS(CycleTwo);
    lsr();
    // get frame counter
    // if timer still above certain point,
    // branch to cycle player's palette quickly
    // otherwise, divide by 8 to cycle every eighth frame
    lsr();
    JMP(CycleTwo);
}

int CycleTwo() {
    // if branched here, divide by 2 to cycle every other frame
    lsr();
    JSR(CyclePlayerPalette);
    JMP(SaveAB);
    JMP(ClrPlrPal);
}

int ClrPlrPal() {
    // do sub to cycle the palette (note: shares fire flower code)
    // then skip this sub to finish up the game engine
    // do sub to clear player's palette bits in attributes
    JSR(ResetPalStar);
    JMP(SaveAB);
}

int SaveAB() {
    // save current A and B button
    lda(A_B_Buttons);
    sta(PreviousA_B_Buttons);
    // into temp variable to be used on next frame
    lda(0x0);
    sta(Left_Right_Buttons);
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda(VRAM_Buffer_AddrCtrl);
    cmp(0x6);
    BEQ(ExitEng);
    lda(AreaParserTaskNum);
    // if vram address controller set to 6 (one of two $0341s)
    // then branch to leave
    // otherwise check number of tasks
    BNE(RunParser);
    lda(ScrollThirtyTwo);
    cmp(0x20);
    BMI(ExitEng);
    // get horizontal scroll in 0-31 or $00-$20 range
    // check to see if exceeded $21
    // branch to leave if not
    lda(ScrollThirtyTwo);
    sbc(0x20);
    sta(ScrollThirtyTwo);
    lda(0x0);
    sta(VRAM_Buffer2_Offset);
    JMP(RunParser);
}

int RunParser() {
    // otherwise subtract $20 to set appropriately
    // and store
    // reset vram buffer offset used in conjunction with
    // level graphics buffer at $0341-$035f
    // update the name table with more level graphics
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}

int ExitEng() {
    // and after all that, we're finally done!
    return 0;
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda(Player_X_Scroll);
    // load value saved here
    clc();
    adc(Platform_X_Scroll);
    sta(Player_X_Scroll);
    lda(ScrollLock);
    BNE(InitScrlAmt);
    // add value used by left/right platforms
    // save as new value here to impose force on scroll
    // check scroll lock flag
    // skip a bunch of code here if set
    lda(Player_Pos_ForScroll);
    cmp(0x50);
    BCC(InitScrlAmt);
    lda(SideCollisionTimer);
    BNE(InitScrlAmt);
    ldy(Player_X_Scroll);
    dey();
    BMI(InitScrlAmt);
    // check player's horizontal screen position
    // if less than 80 pixels to the right, branch
    // if timer related to player's side collision
    // not expired, branch
    // get value and decrement by one
    // if value originally set to zero or otherwise
    // negative for left movement, branch
    iny();
    cpy(0x2);
    // if value $01, branch and do not decrement
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
    // save value here
    clc();
    adc(ScrollThirtyTwo);
    sta(ScrollThirtyTwo);
    // add to value already set here
    // save as new value here
    tya();
    clc();
    adc(ScreenLeft_X_Pos);
    sta(ScreenLeft_X_Pos);
    sta(HorizontalScroll);
    // add to left side coordinate
    // save as new left side coordinate
    // save here also
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
    // add carry to page location for left
    // side of the screen
    // get LSB of page location
    // save as temp variable for PPU register 1 mirror
    // get PPU register 1 mirror
    // save all bits except d0
    // get saved bit here and save in PPU register 1
    // mirror to be used to set name table later
    // figure out where the right side is
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
    // initialize value here
    // set X for player offset
    ldx(0x0);
    JSR(GetXOffscreenBits);
    sta(0x0);
    ldy(0x0);
    asl();
    BCS(KeepOnscr);
    iny();
    // get horizontal offscreen bits for player
    // save them here
    // load default offset (left side)
    // if d7 of offscreen bits are set,
    // branch with default offset
    // otherwise use different offset (right side)
    lda(0x0);
    anda(0b100000);
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // check offscreen bits for d5 set
    // if not set, branch ahead of this part
    // get left or right side coordinate based on offset
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
    // subtract amount based on offset
    // store as player position to prevent movement further
    // get left or right page location based on offset
    // subtract borrow
    // save as player's page location
    // check saved controller bits
    // against bits based on offset
    // if not equal, branch
    lda(0x0);
    sta(Player_X_Speed);
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // otherwise nullify horizontal speed of player
    // nullify platform force imposed on scroll
    lda(0x0);
    sta(Platform_X_Scroll);
    return 0;
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda(ScreenLeft_X_Pos);
    // get coordinate of screen's left boundary
    clc();
    adc(0xff);
    sta(ScreenRight_X_Pos);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    sta(ScreenRight_PageLoc);
    // add 255 pixels
    // store as coordinate of screen's right boundary
    // get page number where left boundary is
    // add carry from before
    // store as page number where right boundary is
    return 0;
    JMP(GameRoutines);
}

int GameRoutines() {
    lda(GameEngineSubroutine);
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda(AltEntranceControl);
    // check for mode of alternate entry
    cmp(0x2);
    BEQ(EntrMode2);
    // if found, branch to enter from pipe or with vine
    lda(0x0);
    ldy(Player_Y_Position);
    cpy(0x30);
    BCC(AutoControlPlayer);
    lda(PlayerEntranceCtrl);
    // if vertical position above a certain
    // point, nullify controller bits and continue
    // with player movement code, do not return
    // check player entry bits from header
    cmp(0x6);
    BEQ(ChkBehPipe);
    cmp(0x7);
    // if set to 6 or 7, execute pipe intro code
    // otherwise branch to normal entry
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // check for sprite attributes
    lda(Player_SprAttrib);
    BNE(IntroEntr);
    // branch if found
    lda(0x1);
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // force player to walk to the right
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    dec(ChangeAreaTimer);
    BNE(ExitEntr);
    inc(DisableIntermediate);
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // decrement timer for change of area
    // branch to exit if not yet expired
    // set flag to skip world and lives display
    // jump to increment to next area and set modes
    // if controller override bits set here,
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
    // check vine height
    // if vine not yet reached maximum height, branch to leave
    // get player's vertical coordinate
    // check player's vertical coordinate against preset value
    // load default values to be written to
    // this value moves player to the right off the vine
    // if vertical coordinate < preset value, use defaults
    lda(0x3);
    sta(Player_State);
    iny();
    lda(0x8);
    sta(((Block_Buffer_1) + (0xb4)));
    JMP(OffVine);
}

int OffVine() {
    // otherwise set player state to climbing
    // increment value in Y
    // set block in block buffer to cover hole, then
    // use same value to force player to climb
    // set collision detection disable flag
    sty(DisableCollisionDet);
    JSR(AutoControlPlayer);
    // use contents of A to move player up or right, execute sub
    lda(Player_X_Position);
    cmp(0x48);
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // check player's horizontal position
    // if not far enough to the right, branch to leave
    // set routine to be executed by game engine next frame
    lda(0x8);
    sta(GameEngineSubroutine);
    lda(0x1);
    // set to face player to the right
    sta(PlayerFacingDir);
    lsr();
    sta(AltEntranceControl);
    sta(DisableCollisionDet);
    sta(JoypadOverride);
    JMP(ExitEntr);
}

int ExitEntr() {
    // init A
    // init mode of entry
    // init collision detection disable flag
    // nullify controller override bits
    // leave!
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
    // check task here
    // if certain value is set, branch to skip controller bit loading
    BEQ(SizeChk);
    lda(AreaType);
    BNE(SaveJoyp);
    // are we in a water type area?
    // if not, branch
    ldy(Player_Y_HighPos);
    dey();
    BNE(DisJoyp);
    // if not in vertical area between
    // status bar and bottom, branch
    lda(Player_Y_Position);
    cmp(0xd0);
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // if nearing the bottom of the screen or
    // not in the vertical area between status bar or bottom,
    // disable controller bits
    lda(0x0);
    sta(SavedJoypadBits);
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // otherwise store A and B buttons in $0a
    lda(SavedJoypadBits);
    anda(0b11000000);
    sta(A_B_Buttons);
    lda(SavedJoypadBits);
    // store left and right buttons in $0c
    anda(0b11);
    sta(Left_Right_Buttons);
    lda(SavedJoypadBits);
    // store up and down buttons in $0b
    anda(0b1100);
    sta(Up_Down_Buttons);
    anda(0b100);
    BEQ(SizeChk);
    lda(Player_State);
    BNE(SizeChk);
    ldy(Left_Right_Buttons);
    BEQ(SizeChk);
    // check for pressing down
    // if not, branch
    // check player's state
    // if not on the ground, branch
    // check left and right
    // if neither pressed, branch
    lda(0x0);
    sta(Left_Right_Buttons);
    sta(Up_Down_Buttons);
    JMP(SizeChk);
}

int SizeChk() {
    // if pressing down while on the ground,
    // nullify directional bits
    // run movement subroutines
    JSR(PlayerMovementSubs);
    ldy(0x1);
    // is player small?
    lda(PlayerSize);
    BNE(ChkMoveDir);
    ldy(0x0);
    // check for if crouching
    lda(CrouchingFlag);
    BEQ(ChkMoveDir);
    ldy(0x2);
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // if not, branch ahead
    // if big and crouching, load y with 2
    // set contents of Y as player's bounding box size control
    sty(Player_BoundBoxCtrl);
    lda(0x1);
    ldy(Player_X_Speed);
    BEQ(PlayerSubs);
    BPL(SetMoveDir);
    asl();
    JMP(SetMoveDir);
}

int SetMoveDir() {
    // set moving direction to right by default
    // check player's horizontal speed
    // if not moving at all horizontally, skip this part
    // if moving to the right, use default moving direction
    // otherwise change to move to the left
    // set moving direction
    sta(Player_MovingDir);
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // move the screen if necessary
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(0x0);
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // get player's offscreen bits
    // get coordinates relative to the screen
    // set offset for player object
    // get player's bounding box coordinates
    // do collision detection and process
    lda(Player_Y_Position);
    cmp(0x40);
    BCC(PlayerHole);
    // check to see if player is higher than 64th pixel
    // if so, branch ahead
    lda(GameEngineSubroutine);
    cmp(0x5);
    // if running end-of-level routine, branch ahead
    BEQ(PlayerHole);
    cmp(0x7);
    // if running player entrance routine, branch ahead
    BEQ(PlayerHole);
    cmp(0x4);
    // if running routines $00-$03, branch ahead
    BCC(PlayerHole);
    lda(Player_SprAttrib);
    anda(0b11011111);
    sta(Player_SprAttrib);
    JMP(PlayerHole);
}

int PlayerHole() {
    // otherwise nullify player's
    // background priority flag
    // check player's vertical high byte
    lda(Player_Y_HighPos);
    cmp(0x2);
    BMI(ExitCtrl);
    // for below the screen
    // branch to leave if not that far down
    ldx(0x1);
    stx(ScrollLock);
    // set scroll lock
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
    // set value here
    // use X as flag, and clear for cloud level
    // check game timer expiration flag
    // if set, branch
    // check for cloud type override
    // skip to last part if found
    // set flag in X for player death
    inx();
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ChkHoleX);
    ldy(DeathMusicLoaded);
    BNE(HoleBottom);
    // check for some other routine running
    // if so, branch ahead
    // check value here
    // if already set, branch to next part
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
    // change value here
    // compare vertical high byte with value set here
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
    // if less, branch to leave
    // otherwise decrement flag in X
    // if flag was clear, branch to set modes and other values
    // check to see if music is still playing
    // branch to leave if so
    // otherwise set to run lose life routine
    // on next frame
    // leave
    return 0;
    JMP(CloudExit);
}

int CloudExit() {
    lda(0x0);
    sta(JoypadOverride);
    JSR(SetEntr);
    inc(AltEntranceControl);
    // clear controller override bits if any are set
    // do sub to set secondary mode
    // set mode of entry to 3
    return 0;
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda(Player_Y_HighPos);
    BNE(AutoClimb);
    // check to see whether player reached position
    // above the status bar yet and if so, set modes
    lda(Player_Y_Position);
    cmp(0xe4);
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // set controller bits override to up
    lda(0b1000);
    sta(JoypadOverride);
    ldy(0x3);
    // set player state to climbing
    sty(Player_State);
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // set starting position to override
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
    // set 1 as movement amount
    // do sub to move player downwards
    // do sub to scroll screen with saved force if necessary
    // load default mode of entry
    // check warp zone control variable/flag
    // if set, branch to use mode 0
    iny();
    lda(AreaType);
    // check for castle level type
    cmp(0x3);
    BNE(ChgAreaPipe);
    // if not castle type level, use mode 1
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc(Player_Y_Position);
    // add contents of A to player position
    sta(Player_Y_Position);
    return 0;
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // execute sub to move player to the right
    ldy(0x2);
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // decrement timer for change of area
    dec(ChangeAreaTimer);
    BNE(ExitCAPipe);
    sty(AltEntranceControl);
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // when timer expires set mode of alternate entry
    // set flag to disable screen output
    inc(DisableScreenFlag);
    lda(0x0);
    sta(OperMode_Task);
    sta(Sprite0HitDetectFlag);
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // set secondary mode of operation
    // disable sprite 0 check
    // leave
    return 0;
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(0x8);
    // set player's horizontal speed
    sta(Player_X_Speed);
    ldy(0x1);
    lda(Player_X_Position);
    anda(0b1111);
    // set controller right button by default
    // mask out higher nybble of player's
    // horizontal position
    BNE(RightPipe);
    sta(Player_X_Speed);
    tay();
    JMP(RightPipe);
}

int RightPipe() {
    // if lower nybble = 0, set as horizontal speed
    // and nullify controller bit override here
    // use contents of Y to
    tya();
    JSR(AutoControlPlayer);
    // execute player control routine with ctrl bits nulled
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
    // check master timer control
    // for specific moment in time
    // branch if before or after that point
    // otherwise run code to get growing/shrinking going
    // check again for another specific moment
    cmp(0xc4);
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // and branch to leave if before or after that point
    // otherwise do sub to init timer control and set routine
    // and then leave
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
    // check master timer control
    // for specific moment in time
    // branch if before that point
    // check again for another specific point
    // branch if at that point, and not before or after
    // otherwise run player control routine
    // do unconditional branch to leave
    BNE(ExitBoth);
    JMP(InitChangeSize);
}

int InitChangeSize() {
    ldy(PlayerChangeSizeFlag);
    BNE(ExitBoth);
    sty(PlayerAnimCtrl);
    inc(PlayerChangeSizeFlag);
    // if growing/shrinking flag already set
    // then branch to leave
    // otherwise initialize player's animation frame control
    // set growing/shrinking flag
    lda(PlayerSize);
    eor(0x1);
    // invert player's size
    sta(PlayerSize);
    JMP(ExitBoth);
}

int ExitBoth() {
    // leave
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
    // initialize master timer control to continue timers
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
    // check master timer control
    // for specific moment in time
    // branch if at moment, not before or after
    // get frame counter
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
    // check special use enemy slot
    // for flagpole flag object
    // if not found, branch to something residual
    // load flagpole sound
    // into square 1's sfx queue
    lda(0x0);
    sta(FlagpoleSoundQueue);
    // init flagpole sound queue
    ldy(Player_Y_Position);
    cpy(0x9e);
    BCS(SlidePlayer);
    lda(0x4);
    JMP(SlidePlayer);
}

int SlidePlayer() {
    // check to see if player has slid down
    // far enough, and if so, branch with no controller bits set
    // otherwise force player to climb down (to slide)
    // jump to player control routine
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}

int NoFPObj() {
    // increment to next routine (this may
    inc(GameEngineSubroutine);
    return 0;
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(0x1);
    // force player to walk to the right
    JSR(AutoControlPlayer);
    lda(Player_Y_Position);
    // check player's vertical position
    cmp(0xae);
    BCC(ChkStop);
    lda(ScrollLock);
    BEQ(ChkStop);
    // if player is not yet off the flagpole, skip this part
    // if scroll lock not set, branch ahead to next part
    // because we only need to do this part once
    lda(EndOfLevelMusic);
    sta(EventMusicQueue);
    // load win level music in event music queue
    lda(0x0);
    sta(ScrollLock);
    JMP(ChkStop);
}

int ChkStop() {
    // turn off scroll lock to skip this part later
    // get player collision bits
    lda(Player_CollisionBits);
    lsr();
    BCS(RdyNextA);
    lda(StarFlagTaskControl);
    BNE(InCastle);
    inc(StarFlagTaskControl);
    JMP(InCastle);
}

int InCastle() {
    // check for d0 set
    // if d0 set, skip to next part
    // if star flag task control already set,
    // go ahead with the rest of the code
    // otherwise set task control now (this gets ball rolling!)
    // set player's background priority bit to
    lda(0b100000);
    sta(Player_SprAttrib);
    JMP(RdyNextA);
}

int RdyNextA() {
    lda(StarFlagTaskControl);
    cmp(0x5);
    BNE(ExitNA);
    inc(LevelNumber);
    // if star flag task control not yet set
    // beyond last valid task number, branch to leave
    // increment level number used for game logic
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
    // check to see if we have yet reached level -4
    // and skip this last part here if not
    // get world number as offset
    // check third area coin tally for bonus 1-ups
    // against minimum value, if player has not collected
    // at least this number of coins, leave flag clear
    // otherwise set hidden 1-up box control flag
    // increment area number used for address loader
    inc(AreaNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    JSR(ChgAreaMode);
    sta(HalfwayPage);
    // get new level pointer
    // set flag to load new game timer
    // do sub to set secondary mode, disable screen and sprite 0
    // reset halfway page to 0 (beginning)
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
    // set A to init crouch flag by default
    // is player small?
    // if so, branch
    // check state of player
    // if not on the ground, branch
    // load controller bits for up and down
    // single out bit for down button
    // store value in crouch flag
    sta(CrouchingFlag);
    JMP(ProcMove);
}

int ProcMove() {
    // run sub related to jumping and swimming
    JSR(PlayerPhysicsSub);
    lda(PlayerChangeSizeFlag);
    BNE(NoMoveSub);
    // if growing/shrinking flag set,
    // branch to leave
    lda(Player_State);
    cmp(0x3);
    BEQ(MoveSubs);
    // get player state
    // if climbing, branch ahead, leave timer unset
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
    // $00 - used by ClimbingSub to store high vertical adder
    // do a sub to set animation frame timing
    lda(Left_Right_Buttons);
    BEQ(GndMove);
    sta(PlayerFacingDir);
    JMP(GndMove);
}

int GndMove() {
    // if left/right controller bits not set, skip instruction
    // otherwise set new facing direction
    // do a sub to impose friction on player's walk/run
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // do another sub to move player horizontally
    // set returned value as player's movement speed for scroll
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
    // if player's vertical speed zero
    // or moving downwards, branch to falling
    lda(A_B_Buttons);
    anda(A_Button);
    anda(PreviousA_B_Buttons);
    BNE(ProcSwim);
    lda(JumpOrigin_Y_Position);
    // check to see if A button is being pressed
    // and was pressed in previous frame
    // if so, branch elsewhere
    // get vertical position player jumped from
    sec();
    sbc(Player_Y_Position);
    cmp(DiffToHaltJump);
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // subtract current from original vertical coordinate
    // compare to value set here to see if player is in mid-jump
    // or just starting to jump, if just starting, skip ahead
    // otherwise dump falling into main fractional
    lda(VerticalForceDown);
    sta(VerticalForce);
    JMP(ProcSwim);
}

int ProcSwim() {
    // if swimming flag not set,
    lda(SwimmingFlag);
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // branch ahead to last part
    // do a sub to get animation frame timing
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(LRWater);
    // check vertical position against preset value
    // if not yet reached a certain position, branch ahead
    lda(0x18);
    sta(VerticalForce);
    JMP(LRWater);
}

int LRWater() {
    // otherwise set fractional
    // check left/right controller bits (check for swimming)
    lda(Left_Right_Buttons);
    BEQ(LRAir);
    sta(PlayerFacingDir);
    JMP(LRAir);
}

int LRAir() {
    // if not pressing any, skip
    // otherwise set facing direction accordingly
    // check left/right controller bits (check for jumping/falling)
    lda(Left_Right_Buttons);
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // if not pressing any, skip
    // otherwise process horizontal movement
    // do a sub to move player horizontally
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // set player's speed here, to be used for scroll later
    lda(GameEngineSubroutine);
    cmp(0xb);
    BNE(ExitMov1);
    // check for specific routine selected
    // branch if not set to run
    lda(0x28);
    sta(VerticalForce);
    JMP(ExitMov1);
}

int ExitMov1() {
    // otherwise set fractional
    // jump to move player vertically, then leave
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda(Player_YMF_Dummy);
    clc();
    adc(Player_Y_MoveForce);
    // add movement force to dummy variable
    // save with carry
    sta(Player_YMF_Dummy);
    ldy(0x0);
    lda(Player_Y_Speed);
    BPL(MoveOnVine);
    dey();
    JMP(MoveOnVine);
}

int MoveOnVine() {
    // set default adder here
    // get player's vertical speed
    // if not moving upwards, branch
    // otherwise set adder to $ff
    // store adder here
    sty(0x0);
    adc(Player_Y_Position);
    sta(Player_Y_Position);
    // add carry to player's vertical position
    // and store to move player up or down
    lda(Player_Y_HighPos);
    adc(0x0);
    sta(Player_Y_HighPos);
    lda(Left_Right_Buttons);
    anda(Player_CollisionBits);
    BEQ(InitCSTimer);
    ldy(ClimbSideTimer);
    BNE(ExitCSub);
    // add carry to player's page location
    // and store
    // compare left/right controller bits
    // to collision flag
    // if not set, skip to end
    // otherwise check timer
    // if timer not expired, branch to leave
    ldy(0x18);
    sty(ClimbSideTimer);
    ldx(0x0);
    ldy(PlayerFacingDir);
    lsr();
    BCS(ClimbFD);
    // otherwise set timer now
    // set default offset here
    // get facing direction
    // move right button controller bit to carry
    // if controller right pressed, branch ahead
    inx();
    inx();
    JMP(ClimbFD);
}

int ClimbFD() {
    // otherwise increment offset by 2 bytes
    // check to see if facing right
    dey();
    BEQ(CSetFDir);
    inx();
    JMP(CSetFDir);
}

int CSetFDir() {
    lda(Player_X_Position);
    clc();
    adc(offsetof(G, ClimbAdderLow), x);
    // add or subtract from player's horizontal position
    // using value here as adder and X as offset
    sta(Player_X_Position);
    lda(Player_PageLoc);
    adc(offsetof(G, ClimbAdderHigh), x);
    // add or subtract carry or borrow using value here
    // from the player's page location
    sta(Player_PageLoc);
    lda(Left_Right_Buttons);
    eor(0b11);
    sta(PlayerFacingDir);
    JMP(ExitCSub);
}

int ExitCSub() {
    // get left/right controller bits again
    // invert them and store them while player
    // is on vine to face player in opposite direction
    // then leave
    return 0;
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // initialize timer here
    sta(ClimbSideTimer);
    return 0;
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda(Player_State);
    // check player state
    cmp(0x3);
    BNE(CheckForJumping);
    // if not climbing, branch
    ldy(0x0);
    lda(Up_Down_Buttons);
    anda(Player_CollisionBits);
    BEQ(ProcClimb);
    // get controller bits for up/down
    // check against player's collision detection bits
    // if not pressing up or down, branch
    iny();
    anda(0b1000);
    // check for pressing up
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // load value here
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
    // store as vertical movement force
    // load default animation timing
    // load some other value here
    // store as vertical speed
    // if climbing down, use default animation timing value
    // otherwise divide timer setting by 2
    // store animation timer setting and leave
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda(JumpspringAnimCtrl);
    BNE(NoJump);
    lda(A_B_Buttons);
    // if jumpspring animating,
    // skip ahead to something else
    // check for A button press
    anda(A_Button);
    BEQ(NoJump);
    anda(PreviousA_B_Buttons);
    // if not, branch to something else
    // if button not pressed in previous frame, branch
    BEQ(ProcJumping);
    JMP(NoJump);
}

int NoJump() {
    // otherwise, jump to something else
    JMP(X_Physics);
    JMP(ProcJumping);
}

int ProcJumping() {
    lda(Player_State);
    BEQ(InitJS);
    lda(SwimmingFlag);
    BEQ(NoJump);
    lda(JumpSwimTimer);
    // check player state
    // if on the ground, branch
    // if swimming flag not set, jump to do something else
    // to prevent midair jumping, otherwise continue
    // if jump/swim timer nonzero, branch
    BNE(InitJS);
    lda(Player_Y_Speed);
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // check player's vertical speed
    // if player's vertical speed motionless or down, branch
    // if timer at zero and player still rising, do not swim
    // set jump/swim timer
    lda(0x20);
    sta(JumpSwimTimer);
    ldy(0x0);
    // initialize vertical force and dummy variable
    sty(Player_YMF_Dummy);
    sty(Player_Y_MoveForce);
    lda(Player_Y_HighPos);
    sta(JumpOrigin_Y_HighPos);
    // get vertical high and low bytes of jump origin
    // and store them next to each other here
    lda(Player_Y_Position);
    sta(JumpOrigin_Y_Position);
    lda(0x1);
    // set player state to jumping/swimming
    sta(Player_State);
    lda(Player_XSpeedAbsolute);
    // check value related to walking/running speed
    cmp(0x9);
    BCC(ChkWtr);
    iny();
    // branch if below certain values, increment Y
    // for each amount equal or exceeded
    cmp(0x10);
    BCC(ChkWtr);
    iny();
    cmp(0x19);
    BCC(ChkWtr);
    iny();
    cmp(0x1c);
    BCC(ChkWtr);
    // note that for jumping, range is 0-4 for Y
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // set value here (apparently always set to 1)
    lda(0x1);
    sta(DiffToHaltJump);
    lda(SwimmingFlag);
    // if swimming flag disabled, branch
    BEQ(GetYPhy);
    ldy(0x5);
    lda(Whirlpool_Flag);
    // otherwise set Y to 5, range is 5-6
    // if whirlpool flag not set, branch
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // otherwise increment to 6
    // store appropriate jump/swim
    lda(offsetof(G, JumpMForceData), y);
    sta(VerticalForce);
    // data here
    lda(offsetof(G, FallMForceData), y);
    sta(VerticalForceDown);
    lda(offsetof(G, InitMForceData), y);
    sta(Player_Y_MoveForce);
    lda(offsetof(G, PlayerYSpdData), y);
    sta(Player_Y_Speed);
    lda(SwimmingFlag);
    // if swimming flag disabled, branch
    BEQ(PJumpSnd);
    lda(Sfx_EnemyStomp);
    sta(Square1SoundQueue);
    // load swim/goomba stomp sound into
    // square 1's sfx queue
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(X_Physics);
    lda(0x0);
    sta(Player_Y_Speed);
    JMP(X_Physics);
    JMP(PJumpSnd);
}

int PJumpSnd() {
    // check vertical low byte of player position
    // if below a certain point, branch
    // otherwise reset player's vertical speed
    // and jump to something else to keep player
    // from swimming above water level
    // load big mario's jump sound by default
    lda(Sfx_BigJump);
    ldy(PlayerSize);
    // is mario big?
    BEQ(SJumpSnd);
    lda(Sfx_SmallJump);
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // if not, load small mario's jump sound
    // store appropriate jump sound in square 1 sfx queue
    sta(Square1SoundQueue);
    JMP(X_Physics);
}

int X_Physics() {
    ldy(0x0);
    sty(0x0);
    lda(Player_State);
    // init value here
    // if mario is on the ground, branch
    BEQ(ProcPRun);
    lda(Player_XSpeedAbsolute);
    cmp(0x19);
    BCS(GetXPhy);
    BCC(ChkRFast);
    JMP(ProcPRun);
}

int ProcPRun() {
    // check something that seems to be related
    // to mario's speed
    // if =>$19 branch here
    // if not branch elsewhere
    // if mario on the ground, increment Y
    iny();
    lda(AreaType);
    BEQ(ChkRFast);
    dey();
    lda(Left_Right_Buttons);
    cmp(Player_MovingDir);
    BNE(ChkRFast);
    lda(A_B_Buttons);
    // check area type
    // if water type, branch
    // decrement Y by default for non-water type area
    // get left/right controller bits
    // check against moving direction
    // if controller bits <> moving direction, skip this part
    // check for b button pressed
    anda(B_Button);
    BNE(SetRTmr);
    lda(RunningTimer);
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // if pressed, skip ahead to set timer
    // check for running timer set
    // if set, branch
    // if running timer not set or level type is water,
    iny();
    inc(0x0);
    // increment Y again and temp variable in memory
    lda(RunningSpeed);
    BNE(FastXSp);
    // if running speed set here, branch
    lda(Player_XSpeedAbsolute);
    cmp(0x21);
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // otherwise check player's walking/running speed
    // if less than a certain amount, branch ahead
    // if running speed set or speed => $21 increment $00
    inc(0x0);
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // and jump ahead
    // if b button pressed, set running timer
    lda(0xa);
    sta(RunningTimer);
    JMP(GetXPhy);
}

int GetXPhy() {
    // get maximum speed to the left
    lda(offsetof(G, MaxLeftXSpdData), y);
    sta(MaximumLeftSpeed);
    lda(GameEngineSubroutine);
    cmp(0x7);
    BNE(GetXPhy2);
    ldy(0x3);
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // check for specific routine running
    // (player entrance)
    // if not running, skip and use old value of Y
    // otherwise set Y to 3
    // get maximum speed to the right
    lda(offsetof(G, MaxRightXSpdData), y);
    sta(MaximumRightSpeed);
    ldy(0x0);
    lda(offsetof(G, FrictionData), y);
    // get other value in memory
    // get value using value in memory as offset
    sta(FrictionAdderLow);
    lda(0x0);
    sta(FrictionAdderHigh);
    // init something here
    lda(PlayerFacingDir);
    cmp(Player_MovingDir);
    BEQ(ExitPhy);
    asl(FrictionAdderLow);
    rol(FrictionAdderHigh);
    JMP(ExitPhy);
}

int ExitPhy() {
    // check facing direction against moving direction
    // if the same, branch to leave
    // otherwise shift d7 of friction adder low into carry
    // then rotate carry onto d0 of friction adder high
    // and then leave
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
    // initialize offset in Y
    // check player's walking/running speed
    // against preset amount
    // if greater than a certain amount, branch ahead
    // otherwise increment Y
    // compare against lower amount
    // if greater than this but not greater than first, skip increment
    // otherwise increment Y again
    // get controller bits
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
    // mask out A button
    // if no other buttons pressed, branch ahead of all this
    // mask out all others except left and right
    // check against moving direction
    // if left/right controller bits <> moving direction, branch
    // otherwise set zero value here
    // store zero or running speed here
    sta(RunningSpeed);
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // check player's walking/running speed
    lda(Player_XSpeedAbsolute);
    cmp(0xb);
    BCS(SetAnimSpd);
    // against one last amount
    // if greater than this amount, branch
    lda(PlayerFacingDir);
    sta(Player_MovingDir);
    // otherwise use facing direction to set moving direction
    lda(0x0);
    sta(Player_X_Speed);
    sta(Player_X_MoveForce);
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // nullify player's horizontal speed
    // and dummy variable for player
    // get animation timer setting using Y as offset
    lda(offsetof(G, PlayerAnimTmrData), y);
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda(Player_CollisionBits);
    cmp(0x0);
    BNE(JoypFrict);
    // perform AND between left/right controller bits and collision flag
    // then compare to zero (this instruction is redundant)
    // if any bits set, branch to next part
    lda(Player_X_Speed);
    BEQ(SetAbsSpd);
    BPL(RghtFrict);
    BMI(LeftFrict);
    JMP(JoypFrict);
}

int JoypFrict() {
    // if player has no horizontal speed, branch ahead to last part
    // if player moving to the right, branch to slow
    // otherwise logic dictates player moving left, branch to slow
    // put right controller bit into carry
    lsr();
    BCC(RghtFrict);
    JMP(LeftFrict);
}

int LeftFrict() {
    // if left button pressed, carry = 0, thus branch
    // load value set here
    lda(Player_X_MoveForce);
    clc();
    adc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // add to it another value set here
    // store here
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
    // add value plus carry to horizontal speed
    // set as new horizontal speed
    // compare against maximum value for right movement
    // if horizontal speed greater negatively, branch
    // otherwise set preset value as horizontal speed
    // thus slowing the player's left movement down
    // skip to the end
    // load value set here
    lda(Player_X_MoveForce);
    sec();
    sbc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // subtract from it another value set here
    // store here
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
    // subtract value plus borrow from horizontal speed
    // set as new horizontal speed
    // compare against maximum value for left movement
    // if horizontal speed greater positively, branch
    // otherwise set preset value as horizontal speed
    // thus slowing the player's right movement down
    // if player not moving or moving to the right,
    cmp(0x0);
    BPL(SetAbsSpd);
    // branch and leave horizontal speed value unmodified
    eor(0xff);
    clc();
    adc(0x1);
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // otherwise get two's compliment to get absolute
    // unsigned walking/running speed
    // store walking/running speed here and leave
    sta(Player_XSpeedAbsolute);
    return 0;
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda(PlayerStatus);
    // $00 - used to store downward movement force in FireballObjCore
    // $07 - used to store pseudorandom bit in BubbleCheck
    // check player's status
    cmp(0x2);
    BCC(ProcAirBubbles);
    // if not fiery, branch
    lda(A_B_Buttons);
    anda(B_Button);
    BEQ(ProcFireballs);
    // check for b button pressed
    // branch if not pressed
    anda(PreviousA_B_Buttons);
    BNE(ProcFireballs);
    lda(FireballCounter);
    anda(0b1);
    // if button pressed in previous frame, branch
    // load fireball counter
    // get LSB and use as offset for buffer
    tax();
    lda(Fireball_State, x);
    BNE(ProcFireballs);
    ldy(Player_Y_HighPos);
    // load fireball state
    // if not inactive, branch
    // if player too high or too low, branch
    dey();
    BNE(ProcFireballs);
    lda(CrouchingFlag);
    // if player crouching, branch
    BNE(ProcFireballs);
    lda(Player_State);
    // if player's state = climbing, branch
    cmp(0x3);
    BEQ(ProcFireballs);
    lda(Sfx_Fireball);
    // play fireball sound effect
    sta(Square1SoundQueue);
    lda(0x2);
    // load state
    sta(Fireball_State, x);
    ldy(PlayerAnimTimerSet);
    sty(FireballThrowingTimer);
    // copy animation frame timer setting
    // into fireball throwing timer
    dey();
    sty(PlayerAnimTimer);
    inc(FireballCounter);
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(0x0);
    JSR(FireballObjCore);
    // process first fireball object
    ldx(0x1);
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda(AreaType);
    // if not water type level, skip the rest of this
    BNE(BublExit);
    ldx(0x2);
    JMP(BublLoop);
}

int BublLoop() {
    // otherwise load counter and use as offset
    // store offset
    stx(ObjectOffset);
    JSR(BubbleCheck);
    JSR(RelativeBubblePosition);
    JSR(GetBubbleOffscreenBits);
    JSR(DrawBubble);
    // check timers and coordinates, create air bubble
    // get relative coordinates
    // get offscreen information
    // draw the air bubble
    dex();
    BPL(BublLoop);
    JMP(BublExit);
}

int BublExit() {
    // do this until all three are handled
    // then leave
    return 0;
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx(ObjectOffset);
    lda(Fireball_State, x);
    // store offset as current object
    // check for d7 = 1
    asl();
    BCS(FireballExplosion);
    ldy(Fireball_State, x);
    // if so, branch to get relative coordinates and draw explosion
    // if fireball inactive, branch to leave
    BEQ(NoFBall);
    dey();
    // if fireball state set to 1, skip this part and just run it
    BEQ(RunFB);
    lda(Player_X_Position);
    adc(0x4);
    // get player's horizontal position
    // add four pixels and store as fireball's horizontal position
    sta(Fireball_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // get player's page location
    // add carry and store as fireball's page location
    sta(Fireball_PageLoc, x);
    lda(Player_Y_Position);
    // get player's vertical position and store
    sta(Fireball_Y_Position, x);
    lda(0x1);
    // set high byte of vertical position
    sta(Fireball_Y_HighPos, x);
    ldy(PlayerFacingDir);
    dey();
    lda(offsetof(G, FireballXSpdData), y);
    // get player's facing direction
    // decrement to use as offset here
    // set horizontal speed of fireball accordingly
    sta(Fireball_X_Speed, x);
    lda(0x4);
    // set vertical speed of fireball
    sta(Fireball_Y_Speed, x);
    lda(0x7);
    sta(Fireball_BoundBoxCtrl, x);
    dec(Fireball_State, x);
    JMP(RunFB);
}

int RunFB() {
    // set bounding box size control for fireball
    // decrement state to 1 to skip this part from now on
    // add 7 to offset to use
    txa();
    clc();
    // as fireball offset for next routines
    adc(0x7);
    tax();
    lda(0x50);
    // set downward movement force here
    sta(0x0);
    lda(0x3);
    // set maximum speed here
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
    // do sub here to impose gravity on fireball and move vertically
    // do another sub to move it horizontally
    // return fireball offset to X
    // get relative coordinates
    // get offscreen information
    // get bounding box coordinates
    // do fireball to background collision detection
    // get fireball offscreen bits
    // mask out certain bits
    // if any bits still set, branch to kill fireball
    // do fireball to enemy collision detection and deal with collisions
    // draw fireball appropriately and leave
    // erase fireball state
    lda(0x0);
    sta(Fireball_State, x);
    JMP(NoFBall);
}

int NoFBall() {
    // leave
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
    // get part of LSFR
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
    // load default value here
    // get player's facing direction
    // move d0 to carry
    // branch to use default value if facing left
    // otherwise load alternate value here
    // use value loaded as adder
    tya();
    adc(Player_X_Position);
    sta(Bubble_X_Position, x);
    // add to player's horizontal position
    // save as horizontal position for airbubble
    lda(Player_PageLoc);
    adc(0x0);
    sta(Bubble_PageLoc, x);
    // add carry to player's page location
    // save as page location for airbubble
    lda(Player_Y_Position);
    clc();
    // add eight pixels to player's vertical position
    adc(0x8);
    sta(Bubble_Y_Position, x);
    // save as vertical position for air bubble
    lda(0x1);
    sta(Bubble_Y_HighPos, x);
    ldy(0x7);
    lda(offsetof(G, BubbleTimerData), y);
    sta(AirBubbleTimer);
    JMP(MoveBubl);
}

int MoveBubl() {
    // set vertical high byte for air bubble
    // get pseudorandom bit, use as offset
    // get data for air bubble timer
    // set air bubble timer
    // get pseudorandom bit again, use as offset
    ldy(0x7);
    lda(Bubble_YMF_Dummy, x);
    sec();
    // subtract pseudorandom amount from dummy variable
    sbc(offsetof(G, Bubble_MForceData), y);
    sta(Bubble_YMF_Dummy, x);
    // save dummy variable
    lda(Bubble_Y_Position, x);
    sbc(0x0);
    cmp(0x20);
    BCS(Y_Bubl);
    lda(0xf8);
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // subtract borrow from airbubble's vertical coordinate
    // if below the status bar,
    // branch to go ahead and use to move air bubble upwards
    // otherwise set offscreen coordinate
    // store as new vertical coordinate for air bubble
    sta(Bubble_Y_Position, x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // leave
    return 0;
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda(OperMode);
    BEQ(ExGTimer);
    // get primary mode of operation
    // branch to leave if in title screen mode
    lda(GameEngineSubroutine);
    cmp(0x8);
    BCC(ExGTimer);
    cmp(0xb);
    BEQ(ExGTimer);
    // if routine number less than eight running,
    // branch to leave
    // if running death routine,
    // branch to leave
    lda(Player_Y_HighPos);
    cmp(0x2);
    BCS(ExGTimer);
    lda(GameTimerCtrlTimer);
    BNE(ExGTimer);
    // if player below the screen,
    // branch to leave regardless of level type
    // if game timer control not yet expired,
    // branch to leave
    lda(GameTimerDisplay);
    ora(((GameTimerDisplay) + (1)));
    // otherwise check game timer digits
    ora(((GameTimerDisplay) + (2)));
    BEQ(TimeUpOn);
    ldy(GameTimerDisplay);
    dey();
    BNE(ResGTCtrl);
    lda(((GameTimerDisplay) + (1)));
    // if game timer digits at 000, branch to time-up code
    // otherwise check first digit
    // if first digit not on 1,
    // branch to reset game timer control
    // otherwise check second and third digits
    ora(((GameTimerDisplay) + (2)));
    BNE(ResGTCtrl);
    // if timer not at 100, branch to reset game timer control
    lda(TimeRunningOutMusic);
    sta(EventMusicQueue);
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // otherwise load time running out music
    // reset game timer control
    lda(0x18);
    sta(GameTimerCtrlTimer);
    ldy(0x23);
    lda(0xff);
    // set offset for last digit
    // set value to decrement game timer digit
    sta(((DigitModifier) + (5)));
    JSR(DigitsMathRoutine);
    lda(0xa4);
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // do sub to decrement game timer slowly
    // set status nybbles to update game timer display
    // do sub to update the display
    // init player status (note A will always be zero here)
    sta(PlayerStatus);
    JSR(ForceInjury);
    inc(GameTimerExpiredFlag);
    JMP(ExGTimer);
}

int ExGTimer() {
    // do sub to kill the player (note player is small here)
    // set game timer expiration flag
    // leave
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
    // check for water type level
    // branch to leave if not found
    // otherwise initialize whirlpool flag
    // if master timer control set,
    // branch to leave
    // otherwise start with last whirlpool data
    // get left extent of whirlpool
    lda(Whirlpool_LeftExtent, y);
    clc();
    adc(Whirlpool_Length, y);
    sta(0x2);
    lda(Whirlpool_PageLoc, y);
    BEQ(NextWh);
    adc(0x0);
    sta(0x1);
    lda(Player_X_Position);
    // add length of whirlpool
    // store result as right extent here
    // get page location
    // if none or page 0, branch to get next data
    // add carry
    // store result as page location of right extent here
    // get player's horizontal position
    sec();
    sbc(Whirlpool_LeftExtent, y);
    lda(Player_PageLoc);
    sbc(Whirlpool_PageLoc, y);
    BMI(NextWh);
    lda(0x2);
    // subtract left extent
    // get player's page location
    // subtract borrow
    // if player too far left, branch to get next data
    // otherwise get right extent
    sec();
    sbc(Player_X_Position);
    lda(0x1);
    sbc(Player_PageLoc);
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}

int NextWh() {
    // subtract player's horizontal coordinate
    // get right extent's page location
    // subtract borrow
    // if player within right extent, branch to whirlpool code
    // move onto next whirlpool data
    dey();
    BPL(WhLoop);
    JMP(ExitWh);
}

int ExitWh() {
    // do this until all whirlpools are checked
    // leave
    return 0;
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda(Whirlpool_Length, y);
    lsr();
    sta(0x0);
    lda(Whirlpool_LeftExtent, y);
    // get length of whirlpool
    // divide by 2
    // save here
    // get left extent of whirlpool
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
    // add length divided by 2
    // save as center of whirlpool
    // get page location
    // add carry
    // save as page location of whirlpool center
    // get frame counter
    // shift d0 into carry (to run on every other frame)
    // if d0 not set, branch to last part of code
    // get center
    sec();
    sbc(Player_X_Position);
    lda(0x0);
    sbc(Player_PageLoc);
    BPL(LeftWh);
    lda(Player_X_Position);
    // subtract player's horizontal coordinate
    // get page location of center
    // subtract borrow
    // if player to the left of center, branch
    // otherwise slowly pull player left, towards the center
    sec();
    sbc(0x1);
    sta(Player_X_Position);
    // subtract one pixel
    // set player's new horizontal coordinate
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // subtract borrow
    // jump to set player's new page location
    // get player's collision bits
    lda(Player_CollisionBits);
    lsr();
    BCC(WhPull);
    lda(Player_X_Position);
    // shift d0 into carry
    // if d0 not set, branch
    // otherwise slowly pull player right, towards the center
    clc();
    adc(0x1);
    sta(Player_X_Position);
    // add one pixel
    // set player's new horizontal coordinate
    lda(Player_PageLoc);
    adc(0x0);
    JMP(SetPWh);
}

int SetPWh() {
    // add carry
    // set player's new page location
    sta(Player_PageLoc);
    JMP(WhPull);
}

int WhPull() {
    lda(0x10);
    sta(0x0);
    // set vertical movement force
    lda(0x1);
    sta(Whirlpool_Flag);
    sta(0x2);
    // set whirlpool flag to be used later
    // also set maximum vertical speed
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(0x5);
    stx(ObjectOffset);
    // set enemy object offset
    // to special use slot
    lda(Enemy_ID, x);
    cmp(FlagpoleFlagObject);
    BNE(ExitFlagP);
    // if flagpole flag not found,
    // branch to leave
    lda(GameEngineSubroutine);
    cmp(0x4);
    BNE(SkipScore);
    // if flagpole slide routine not running,
    // branch to near the end of code
    lda(Player_State);
    cmp(0x3);
    BNE(SkipScore);
    lda(Enemy_Y_Position, x);
    cmp(0xaa);
    BCS(GiveFPScr);
    lda(Player_Y_Position);
    cmp(0xa2);
    BCS(GiveFPScr);
    // if player state not climbing,
    // branch to near the end of code
    // check flagpole flag's vertical coordinate
    // if flagpole flag down to a certain point,
    // branch to end the level
    // check player's vertical coordinate
    // if player down to a certain point,
    // branch to end the level
    lda(Enemy_YMF_Dummy, x);
    adc(0xff);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x1);
    sta(Enemy_Y_Position, x);
    // add movement amount to dummy variable
    // save dummy variable
    // get flag's vertical coordinate
    // add 1 plus carry to move flag, and
    // store vertical coordinate
    lda(FlagpoleFNum_YMFDummy);
    sec();
    // subtract movement amount from dummy variable
    sbc(0xff);
    sta(FlagpoleFNum_YMFDummy);
    // save dummy variable
    lda(FlagpoleFNum_Y_Pos);
    sbc(0x1);
    sta(FlagpoleFNum_Y_Pos);
    JMP(SkipScore);
}

int SkipScore() {
    // subtract one plus borrow to move floatey number,
    // and store vertical coordinate here
    // jump to skip ahead and draw flag and floatey number
    JMP(FPGfx);
    JMP(GiveFPScr);
}

int GiveFPScr() {
    // get score offset from earlier (when player touched flagpole)
    ldy(FlagpoleScore);
    lda(offsetof(G, FlagpoleScoreMods), y);
    ldx(offsetof(G, FlagpoleScoreDigits), y);
    sta(DigitModifier, x);
    JSR(AddToScore);
    // get amount to award player points
    // get digit with which to award points
    // store in digit modifier
    // do sub to award player points depending on height of collision
    lda(0x5);
    sta(GameEngineSubroutine);
    JMP(FPGfx);
}

int FPGfx() {
    // set to run end-of-level subroutine on next frame
    // get offscreen information
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
    // get offscreen information
    // check master timer control
    // branch to last section if set
    // check jumpspring frame control
    // branch to last section if not set
    tay();
    dey();
    tya();
    anda(0b10);
    BNE(DownJSpr);
    // subtract one from frame control,
    // the only way a poor nmos 6502 can
    // mask out all but d1, original value still in Y
    // if set, branch to move player up
    inc(Player_Y_Position);
    inc(Player_Y_Position);
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // move player's vertical position down two pixels
    // skip to next part
    // move player's vertical position up two pixels
    dec(Player_Y_Position);
    dec(Player_Y_Position);
    JMP(PosJSpr);
}

int PosJSpr() {
    // get permanent vertical position
    lda(Jumpspring_FixedYPos, x);
    clc();
    adc(offsetof(G, Jumpspring_Y_PosData), y);
    sta(Enemy_Y_Position, x);
    cpy(0x1);
    BCC(BounceJS);
    // add value using frame control as offset
    // store as new vertical position
    // check frame control offset (second frame is $00)
    // if offset not yet at third frame ($01), skip to next part
    lda(A_B_Buttons);
    anda(A_Button);
    BEQ(BounceJS);
    anda(PreviousA_B_Buttons);
    BNE(BounceJS);
    // check saved controller bits for A button press
    // skip to next part if A not pressed
    // check for A button pressed in previous frame
    // skip to next part if so
    lda(0xf4);
    sta(JumpspringForce);
    JMP(BounceJS);
}

int BounceJS() {
    // otherwise write new jumpspring force here
    // check frame control offset again
    cpy(0x3);
    BNE(DrawJSpr);
    // skip to last part if not yet at fifth frame ($03)
    lda(JumpspringForce);
    sta(Player_Y_Speed);
    // store jumpspring force as player's new vertical speed
    lda(0x0);
    sta(JumpspringAnimCtrl);
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // initialize jumpspring frame control
    // get jumpspring's relative coordinates
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda(JumpspringAnimCtrl);
    BEQ(ExJSpring);
    // draw jumpspring
    // check to see if we need to kill it
    // if frame control at zero, don't bother
    // trying to animate it, just leave
    lda(JumpspringTimer);
    BNE(ExJSpring);
    // if jumpspring timer not expired yet, leave
    lda(0x4);
    sta(JumpspringTimer);
    inc(JumpspringAnimCtrl);
    JMP(ExJSpring);
}

int ExJSpring() {
    // otherwise initialize jumpspring timer
    // increment frame control to animate jumpspring
    // leave
    return 0;
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda(VineObject);
    sta(Enemy_ID, x);
    // load identifier for vine object
    // store in buffer
    lda(0x1);
    sta(Enemy_Flag, x);
    // set flag for enemy object buffer
    lda(Block_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // copy page location from previous object
    lda(Block_X_Position, y);
    sta(Enemy_X_Position, x);
    // copy horizontal coordinate from previous object
    lda(Block_Y_Position, y);
    sta(Enemy_Y_Position, x);
    ldy(VineFlagOffset);
    BNE(NextVO);
    sta(VineStart_Y_Position);
    JMP(NextVO);
}

int NextVO() {
    // copy vertical coordinate from previous object
    // load vine flag/offset to next available vine slot
    // if set at all, don't bother to store vertical
    // otherwise store vertical coordinate here
    // store object offset to next available vine slot
    txa();
    sta(VineObjOffset, y);
    inc(VineFlagOffset);
    // using vine flag as offset
    // increment vine flag offset
    lda(Sfx_GrowVine);
    sta(Square2SoundQueue);
    // load vine grow sound
    return 0;
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(0x5);
    BNE(ExitVH);
    // check enemy offset for special use slot
    // if not in last slot, branch to leave
    ldy(VineFlagOffset);
    dey();
    // decrement vine flag in Y, use as offset
    lda(VineHeight);
    cmp(offsetof(G, VineHeightData), y);
    BEQ(RunVSubs);
    lda(FrameCounter);
    lsr();
    // if vine has reached certain height,
    // branch ahead to skip this part
    // get frame counter
    // shift d1 into carry
    lsr();
    BCC(RunVSubs);
    // if d1 not set (2 frames every 4) skip this part
    lda(((Enemy_Y_Position) + (5)));
    sbc(0x1);
    sta(((Enemy_Y_Position) + (5)));
    inc(VineHeight);
    JMP(RunVSubs);
}

int RunVSubs() {
    // subtract vertical position of vine
    // one pixel every frame it's time
    // increment vine height
    // if vine still very small,
    lda(VineHeight);
    cmp(0x8);
    // branch to leave
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(0x0);
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // get relative coordinates of vine,
    // and any offscreen bits
    // initialize offset used in draw vine sub
    // draw vine
    JSR(DrawVine);
    iny();
    cpy(VineFlagOffset);
    BNE(VDrawLoop);
    // increment offset
    // if offset in Y and offset here
    // do not yet match, loop back to draw more vine
    lda(Enemy_OffscreenBits);
    anda(0b1100);
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // mask offscreen bits
    // if none of the saved offscreen bits set, skip ahead
    // otherwise decrement Y to get proper offset again
    // get enemy object offset for this vine object
    ldx(VineObjOffset, y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta(VineFlagOffset);
    sta(VineHeight);
    JMP(WrCMTile);
}

int WrCMTile() {
    // kill this vine object
    // decrement Y
    // if any vine objects left, loop back to kill it
    // initialize vine flag/offset
    // initialize vine height
    // check vine height
    lda(VineHeight);
    cmp(0x20);
    BCC(ExitVH);
    ldx(0x6);
    lda(0x1);
    ldy(0x1b);
    JSR(BlockBufferCollision);
    // if vine small (less than 32 pixels tall)
    // then branch ahead to leave
    // set offset in X to last enemy slot
    // set A to obtain horizontal in $04, but we don't care
    // set Y to offset to get block at ($04, $10) of coordinates
    // do a sub to get block buffer address set, return contents
    ldy(0x2);
    cpy(0xd0);
    BCS(ExitVH);
    lda((0x6), y);
    BNE(ExitVH);
    // if vertical high nybble offset beyond extent of
    // current block buffer, branch to leave, do not write
    // otherwise check contents of block buffer at
    // current offset, if not empty, branch to leave
    lda(0x26);
    sta((0x6), y);
    JMP(ExitVH);
}

int ExitVH() {
    // otherwise, write climbing metatile to block buffer
    // get enemy object offset and leave
    ldx(ObjectOffset);
    return 0;
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda(AreaType);
    BEQ(ExCannon);
    // get area type
    // if water type area, branch to leave
    ldx(0x2);
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // start at third enemy slot
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
    // if master timer control set,
    // branch to check enemy
    // otherwise we start creating one
    // first, reset cannon timer
    // get page location of cannon
    // save as page location of bullet bill
    // get horizontal coordinate of cannon
    // save as horizontal coordinate of bullet bill
    // get vertical coordinate of cannon
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    // subtract eight pixels (because enemies are 24 pixels tall)
    // save as vertical coordinate of bullet bill
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_State, x);
    // set vertical high byte of bullet bill
    // set buffer flag
    // shift right once to init A
    // then initialize enemy's state
    lda(0x9);
    sta(Enemy_BoundBoxCtrl, x);
    // set bounding box size control for bullet bill
    lda(BulletBill_CannonVar);
    sta(Enemy_ID, x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // load identifier for bullet bill (cannon variant)
    // move onto next slot
    // check enemy identifier for bullet bill (cannon variant)
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
    // if not found, branch to get next slot
    // otherwise, check to see if it went offscreen
    // check enemy buffer flag
    // if not set, branch to get next slot
    // otherwise, get offscreen information
    // then do sub to handle bullet bill
    // move onto next slot
    dex();
    BPL(ThreeSChk);
    JMP(ExCannon);
}

int ExCannon() {
    // do this until first three slots are checked
    // then leave
    return 0;
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda(TimerControl);
    BNE(RunBBSubs);
    // if master timer control set,
    // branch to run subroutines except movement sub
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
    // if bullet bill's state set, branch to check defeated state
    // otherwise load offscreen bits
    // mask out bits
    // check to see if all bits are set
    // if so, branch to kill this object
    // set to move right by default
    // get horizontal difference between player and bullet bill
    // if enemy to the left of player, branch
    // otherwise increment to move left
    // set bullet bill's moving direction
    sty(Enemy_MovingDir, x);
    dey();
    lda(offsetof(G, BulletBillXSpdData), y);
    sta(Enemy_X_Speed, x);
    lda(0x0);
    adc(0x28);
    cmp(0x50);
    BCC(KillBB);
    // decrement to use as offset
    // get horizontal speed based on moving direction
    // and store it
    // get horizontal difference
    // add 40 pixels
    // if less than a certain amount, player is too close
    // to cannon either on left or right side, thus branch
    lda(0x1);
    sta(Enemy_State, x);
    // otherwise set bullet bill's state
    lda(0xa);
    sta(EnemyFrameTimer, x);
    // set enemy frame timer
    lda(Sfx_Blast);
    sta(Square2SoundQueue);
    JMP(ChkDSte);
}

int ChkDSte() {
    // play fireworks/gunfire sound
    // check enemy state for d5 set
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(BBFly);
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}

int BBFly() {
    // if not set, skip to move horizontally
    // otherwise do sub to move bullet bill vertically
    // do sub to move bullet bill horizontally
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}

int RunBBSubs() {
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}

int KillBB() {
    // get relative coordinates
    // get bounding box coordinates
    // handle player to enemy collisions
    // draw the bullet bill and leave
    // kill bullet bill and leave
    JSR(EraseEnemyObject);
    return 0;
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b111);
    BNE(SetMOfs);
    // get pseudorandom bits from
    // second part of LSFR
    // if any bits are set, branch and use as offset
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b1000);
    JMP(SetMOfs);
}

int SetMOfs() {
    // get d3 from same part of LSFR
    // use either d3 or d2-d0 for offset here
    tay();
    lda(Misc_State, y);
    BNE(NoHammer);
    ldx(offsetof(G, HammerEnemyOfsData), y);
    lda(Enemy_Flag, x);
    BNE(NoHammer);
    ldx(ObjectOffset);
    // if any values loaded in
    // $2a-$32 where offset is then leave with carry clear
    // get offset of enemy slot to check using Y as offset
    // check enemy buffer flag at offset
    // if buffer flag set, branch to leave with carry clear
    // get original enemy object offset
    txa();
    sta(HammerEnemyOffset, y);
    // save here
    lda(0x90);
    sta(Misc_State, y);
    // save hammer's state here
    lda(0x7);
    sta(Misc_BoundBoxCtrl, y);
    sec();
    // set something else entirely, here
    // return with carry set
    return 0;
    JMP(NoHammer);
}

int NoHammer() {
    // get original enemy object offset
    ldx(ObjectOffset);
    clc();
    // return with carry clear
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
    // $00 - used to set downward force
    // $02 - used to set maximum speed
    // if master timer control set
    // skip all of this code and go to last subs at the end
    // otherwise get hammer's state
    // mask out d7
    // get enemy object offset that spawned this hammer
    // check hammer's state
    // if currently at 2, branch
    // if greater than 2, branch elsewhere
    txa();
    clc();
    adc(0xd);
    tax();
    // add 13 bytes to use
    // proper misc object
    // return offset to X
    lda(0x10);
    sta(0x0);
    // set downward movement force
    lda(0xf);
    sta(0x1);
    // set upward movement force (not used)
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
    // set hammer's vertical speed
    // get enemy object state
    // mask out d3
    // store new state
    // get enemy's moving direction
    // decrement to use as offset
    // get proper speed to use based on moving direction
    // reobtain hammer's buffer offset
    // set hammer's horizontal speed
    // decrement hammer's state
    dec(Misc_State, x);
    lda(Enemy_X_Position, y);
    // get enemy's horizontal position
    clc();
    adc(0x2);
    sta(Misc_X_Position, x);
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(Misc_PageLoc, x);
    lda(Enemy_Y_Position, y);
    // set position 2 pixels to the right
    // store as hammer's horizontal position
    // get enemy's page location
    // add carry
    // store as hammer's page location
    // get enemy's vertical position
    sec();
    sbc(0xa);
    sta(Misc_Y_Position, x);
    // move position 10 pixels upward
    // store as hammer's vertical position
    lda(0x1);
    sta(Misc_Y_HighPos, x);
    BNE(RunHSubs);
    JMP(RunAllH);
}

int RunAllH() {
    // set hammer's vertical high byte
    // unconditional branch to skip first routine
    // handle collisions
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}

int RunHSubs() {
    // get offscreen information
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
    // set offset for empty or last misc object buffer slot
    // get page location saved earlier
    // and save as page location for misc object
    // get low byte of block buffer offset
    asl();
    asl();
    // multiply by 16 to use lower nybble
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
    // set vertical speed
    lda(0x1);
    sta(Misc_Y_HighPos, y);
    sta(Misc_State, y);
    sta(Square2SoundQueue);
    stx(ObjectOffset);
    JSR(GiveOneCoin);
    inc(CoinTallyFor1Ups);
    // set vertical high byte
    // set state for misc object
    // load coin grab sound
    // store current control bit as misc object offset
    // update coin tally on the screen and coin amount variable
    // increment coin tally used to activate 1-up block flag
    return 0;
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(0x8);
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // start at end of misc objects buffer
    // get misc object state
    lda(Misc_State, y);
    BEQ(UseMiscS);
    dey();
    cpy(0x5);
    BNE(FMiscLoop);
    ldy(0x8);
    JMP(UseMiscS);
}

int UseMiscS() {
    // branch if none found to use current offset
    // decrement offset
    // do this for three slots
    // do this until all slots are checked
    // if no empty slots found, use last slot
    // store offset of misc object buffer here (residual)
    sty(JumpCoinMiscOffset);
    return 0;
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(0x8);
    JMP(MiscLoop);
}

int MiscLoop() {
    // set at end of misc object buffer
    // store misc object offset here
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
    // check misc object state
    // branch to check next slot
    // otherwise shift d7 into carry
    // if d7 not set, jumping coin, thus skip to rest of code here
    // otherwise go to process hammer,
    // then check next slot
    // $00 - used to set downward force
    // $02 - used to set maximum speed
    // check misc object state
    // decrement to see if it's set to 1
    // if so, branch to handle jumping coin
    // otherwise increment state to either start off or as timer
    // get horizontal coordinate for misc object
    // whether its jumping coin (state 0 only) or floatey number
    // add current scroll speed
    // store as new horizontal coordinate
    // get page location
    // add carry
    // store as new page location
    lda(Misc_State, x);
    cmp(0x30);
    BNE(RunJCSubs);
    // check state of object for preset value
    // if not yet reached, branch to subroutines
    lda(0x0);
    sta(Misc_State, x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // add 13 bytes to offset for next subroutine
    adc(0xd);
    tax();
    lda(0x50);
    // set downward movement amount
    sta(0x0);
    lda(0x6);
    // set maximum vertical speed
    sta(0x2);
    lsr();
    sta(0x1);
    lda(0x0);
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    lda(Misc_Y_Speed, x);
    // divide by 2 and set
    // as upward movement amount (apparently residual)
    // set A to impose gravity on jumping coin
    // do sub to move coin vertically and impose gravity on it
    // get original misc object offset
    // check vertical speed
    cmp(0x5);
    BNE(RunJCSubs);
    inc(Misc_State, x);
    JMP(RunJCSubs);
}

int RunJCSubs() {
    // if not moving downward fast enough, keep state as-is
    // otherwise increment state to change to floatey number
    // get relative coordinates
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
    // set digit modifier to add 1 coin
    // to the current player's coin tally
    // get current player on the screen
    // get offset for player's coin tally
    // update the coin tally
    // increment onscreen player's coin amount
    lda(CoinTally);
    cmp(100);
    BNE(CoinPoints);
    // does player have 100 coins yet?
    // if not, skip all of this
    lda(0x0);
    sta(CoinTally);
    inc(NumberofLives);
    // otherwise, reinitialize coin amount
    // give the player an extra life
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
    // print status bar numbers based on nybbles, whatever they be
    ldy(VRAM_Buffer1_Offset);
    lda(((VRAM_Buffer1) - (6)), y);
    BNE(NoZSup);
    // check highest digit of score
    // if zero, overwrite with space tile for zero suppression
    lda(0x24);
    sta(((VRAM_Buffer1) - (6)), y);
    JMP(NoZSup);
}

int NoZSup() {
    // get enemy object buffer offset
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
    // load power-up identifier into
    // special use slot of enemy object buffer
    // store page location of block object
    // as page location of power-up object
    // store horizontal coordinate of block object
    // as horizontal coordinate of power-up object
    lda(0x1);
    sta(((Enemy_Y_HighPos) + (5)));
    lda(Block_Y_Position, x);
    // set vertical high byte of power-up object
    // get vertical coordinate of block object
    sec();
    sbc(0x8);
    sta(((Enemy_Y_Position) + (5)));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // subtract 8 pixels
    // and use as vertical coordinate of power-up object
    // this is a residual jump point in enemy object jump table
    lda(0x1);
    sta(((Enemy_State) + (5)));
    sta(((Enemy_Flag) + (5)));
    // set power-up object's state
    // set buffer flag
    lda(0x3);
    sta(((Enemy_BoundBoxCtrl) + (5)));
    // set bounding box size control for power-up object
    lda(PowerUpType);
    cmp(0x2);
    BCS(PutBehind);
    lda(PlayerStatus);
    // check currently loaded power-up type
    // if star or 1-up, branch ahead
    // otherwise check player's current status
    cmp(0x2);
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // if player not fiery, use status as power-up type
    // otherwise shift right to force fire flower type
    // store type here
    sta(PowerUpType);
    JMP(PutBehind);
}

int PutBehind() {
    lda(0b100000);
    sta(((Enemy_SprAttrib) + (5)));
    // set background priority bit
    lda(Sfx_GrowPowerUp);
    sta(Square2SoundQueue);
    // load power-up reveal sound and leave
    return 0;
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(0x5);
    // set object offset for last slot in enemy object buffer
    stx(ObjectOffset);
    lda(((Enemy_State) + (5)));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda(TimerControl);
    BNE(RunPUSubs);
    lda(PowerUpType);
    BEQ(ShroomM);
    // check power-up object's state
    // if not set, branch to leave
    // shift to check if d7 was set in object state
    // if not set, branch ahead to skip this part
    // if master timer control set,
    // branch ahead to enemy object routines
    // check power-up type
    // if normal mushroom, branch ahead to move it
    cmp(0x3);
    BEQ(ShroomM);
    // if 1-up mushroom, branch ahead to move it
    cmp(0x2);
    BNE(RunPUSubs);
    JSR(MoveJumpingEnemy);
    JSR(EnemyJump);
    JMP(RunPUSubs);
    JMP(ShroomM);
}

int ShroomM() {
    // if not star, branch elsewhere to skip movement
    // otherwise impose gravity on star power-up and make it jump
    // note that green paratroopa shares the same code here
    // then jump to other power-up subroutines
    // do sub to make mushrooms move
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
    // get frame counter
    // mask out all but 2 LSB
    // if any bits set here, branch
    // otherwise decrement vertical coordinate slowly
    // load power-up object state
    // increment state for next frame (to make power-up rise)
    // if power-up object state not yet past 16th pixel,
    // branch ahead to last part here
    lda(0x10);
    sta(Enemy_X_Speed, x);
    // otherwise set horizontal speed
    lda(0b10000000);
    sta(((Enemy_State) + (5)));
    asl();
    sta(((Enemy_SprAttrib) + (5)));
    rol();
    sta(Enemy_MovingDir, x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // and then set d7 in power-up object's state
    // shift once to init A
    // initialize background priority bit set here
    // rotate A to set right moving direction
    // set moving direction
    // check power-up object's state
    lda(((Enemy_State) + (5)));
    cmp(0x6);
    BCC(ExitPUp);
    JMP(RunPUSubs);
}

int RunPUSubs() {
    // for if power-up has risen enough
    // if not, don't even bother running these routines
    // get coordinates relative to screen
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    JSR(GetEnemyBoundBox);
    JSR(DrawPowerUp);
    JSR(PlayerEnemyCollision);
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}

int ExitPUp() {
    // get offscreen bits
    // get bounding box coordinates
    // draw the power-up object
    // check for collision with player
    // check to see if it went offscreen
    // and we're done
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
    // store metatile number to stack
    // load unbreakable block object state by default
    // load offset control bit here
    // check player's size
    // if small, branch
    // otherwise load breakable block object state
    // store into block object buffer
    sta(Block_State, x);
    JSR(DestroyBlockMetatile);
    ldx(SprDataOffset_Ctrl);
    lda(0x2);
    sta(Block_Orig_YPos, x);
    // store blank metatile in vram buffer to write to name table
    // load offset control bit
    // get vertical high nybble offset used in block buffer routine
    // set as vertical coordinate for block object
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
    // get low byte of block buffer address used in same routine
    // save as offset here to be used later
    // get contents of block buffer at old address at $06, $07
    // do a sub to check which block player bumped head on
    // store metatile here
    // check player's size
    // if small, use metatile itself as contents of A
    // otherwise init A (note: big = 0)
    // if no match was found in previous sub, skip ahead
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
    // otherwise load unbreakable state into block object buffer
    // note this applies to both player sizes
    // load empty block metatile into A for now
    // get metatile from before
    // is it brick with coins (with line)?
    // if so, branch
    // is it brick with coins (without line)?
    // if not, branch ahead to store empty block metatile
    // check brick coin timer flag
    lda(BrickCoinTimerFlag);
    BNE(ContBTmr);
    // if set, timer expired or counting down, thus branch
    lda(0xb);
    sta(BrickCoinTimer);
    inc(BrickCoinTimerFlag);
    JMP(ContBTmr);
}

int ContBTmr() {
    // if not set, set brick coin timer
    // and set flag linked to it
    // check brick coin timer
    lda(BrickCoinTimer);
    BNE(PutOldMT);
    ldy(0xc4);
    JMP(PutOldMT);
}

int PutOldMT() {
    // if not yet expired, branch to use current metatile
    // otherwise use empty block metatile
    // put metatile into A
    tya();
    JMP(PutMTileB);
}

int PutMTileB() {
    // store whatever metatile be appropriate here
    sta(Block_Metatile, x);
    JSR(InitBlock_XY_Pos);
    ldy(0x2);
    // get block object horizontal coordinates saved
    // get vertical high nybble offset
    lda(0x23);
    sta((0x6), y);
    // write blank metatile $23 to block buffer
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
    // set block bounce timer
    // pull original metatile from stack
    // and save here
    // set default offset
    // is player crouching?
    // if so, branch to increment offset
    // is player big?
    // if so, branch to use default offset
    // increment for small or big and crouching
    iny();
    JMP(BigBP);
}

int BigBP() {
    // get player's vertical coordinate
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, BlockYPosAdderData), y);
    anda(0xf0);
    sta(Block_Y_Position, x);
    ldy(Block_State, x);
    // add value determined by size
    // mask out low nybble to get 16-pixel correspondence
    // save as vertical coordinate for block object
    // get block object state
    cpy(0x11);
    BEQ(Unbreak);
    JSR(BrickShatter);
    JMP(InvOBit);
    JMP(Unbreak);
}

int Unbreak() {
    // if set to value loaded for unbreakable, branch
    // execute code for breakable brick
    // skip subroutine to do last part of code here
    // execute code for unbreakable brick or question block
    JSR(BumpBlock);
    JMP(InvOBit);
}

int InvOBit() {
    // invert control bit used by block objects
    lda(SprDataOffset_Ctrl);
    eor(0x1);
    // and floatey numbers
    sta(SprDataOffset_Ctrl);
    return 0;
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda(Player_X_Position);
    // get player's horizontal coordinate
    clc();
    adc(0x8);
    anda(0xf0);
    sta(Block_X_Position, x);
    // add eight pixels
    // mask out low nybble to give 16-pixel correspondence
    // save as horizontal coordinate for block object
    lda(Player_PageLoc);
    adc(0x0);
    sta(Block_PageLoc, x);
    sta(Block_PageLoc2, x);
    // add carry to page location of player
    // save as page location of block object
    // save elsewhere to be used later
    lda(Player_Y_HighPos);
    sta(Block_Y_HighPos, x);
    return 0;
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // check to see if there's a coin directly above this block
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    // play bump sound
    lda(0x0);
    sta(Block_X_Speed, x);
    sta(Block_Y_MoveForce, x);
    sta(Player_Y_Speed);
    // initialize horizontal speed for block object
    // init fractional movement force
    // init player's vertical speed
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
    // load 1-up mushroom into power-up type
    // store correct power-up type
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
    // start at end of metatile data
    // check to see if current metatile matches
    cmp(offsetof(G, BrickQBlockMetatiles), y);
    BEQ(MatchBump);
    dey();
    BPL(BumpChkLoop);
    clc();
    JMP(MatchBump);
}

int MatchBump() {
    // metatile found in block buffer, branch if so
    // otherwise move onto next metatile
    // do this until all metatiles are checked
    // if none match, return with carry clear
    // note carry is set if found match
    return 0;
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // check to see if there's a coin directly above this block
    lda(Sfx_BrickShatter);
    sta(Block_RepFlag, x);
    sta(NoiseSoundQueue);
    JSR(SpawnBrickChunks);
    // set flag for block object to immediately replace metatile
    // load brick shatter sound
    // create brick chunk objects
    lda(0xfe);
    sta(Player_Y_Speed);
    // set vertical speed for player
    lda(0x5);
    sta(((DigitModifier) + (5)));
    JSR(AddToScore);
    ldx(SprDataOffset_Ctrl);
    // set digit modifier to give player 50 points
    // do sub to update the score
    // load control bit and leave
    return 0;
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx(SprDataOffset_Ctrl);
    ldy(0x2);
    BEQ(TopEx);
    tya();
    // load control bit
    // get vertical high nybble offset used in block buffer
    // branch to leave if set to zero, because we're at the top
    // otherwise set to A
    sec();
    sbc(0x10);
    sta(0x2);
    // subtract $10 to move up one row in the block buffer
    // store as new vertical high nybble offset
    tay();
    lda((0x6), y);
    cmp(0xc2);
    BNE(TopEx);
    // get contents of block buffer in same column, one row up
    // is it a coin? (not underwater)
    // if not, branch to leave
    lda(0x0);
    sta((0x6), y);
    JSR(RemoveCoin_Axe);
    ldx(SprDataOffset_Ctrl);
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // otherwise put blank metatile where coin was
    // write blank metatile to vram buffer
    // get control bit
    // create jumping coin object and update coin variables
    // leave!
    return 0;
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda(Block_X_Position, x);
    sta(Block_Orig_XPos, x);
    // set horizontal coordinate of block object
    // as original horizontal coordinate here
    lda(0xf0);
    sta(Block_X_Speed, x);
    // set horizontal speed for brick chunk objects
    sta(((Block_X_Speed) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // set vertical speed for one
    lda(0xfc);
    sta(((Block_Y_Speed) + (2)), x);
    // set lower vertical speed for the other
    lda(0x0);
    sta(Block_Y_MoveForce, x);
    // init fractional movement force for both
    sta(((Block_Y_MoveForce) + (2)), x);
    lda(Block_PageLoc, x);
    sta(((Block_PageLoc) + (2)), x);
    // copy page location
    lda(Block_X_Position, x);
    sta(((Block_X_Position) + (2)), x);
    // copy horizontal coordinate
    lda(Block_Y_Position, x);
    clc();
    adc(0x8);
    // add 8 pixels to vertical coordinate
    // and save as vertical coordinate for one of them
    sta(((Block_Y_Position) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // set vertical speed...again??? (redundant)
    return 0;
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda(Block_State, x);
    BEQ(UpdSte);
    anda(0xf);
    pha();
    tay();
    // get state of block object
    // if not set, branch to leave
    // mask out high nybble
    // push to stack
    // put in Y for now
    txa();
    clc();
    adc(0x9);
    tax();
    dey();
    BEQ(BouncingBlockHandler);
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    // add 9 bytes to offset (note two block objects are created
    // when using brick chunks, but only one offset for both)
    // decrement Y to check for solid block state
    // branch if found, otherwise continue for brick chunks
    // do sub to impose gravity on one block object object
    // do another sub to move horizontally
    txa();
    clc();
    // move onto next block object
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
    // do sub to impose gravity on other block object
    // do another sub to move horizontally
    // get block object offset used for both
    // get relative coordinates
    // get offscreen information
    // draw the brick chunks
    // get lower nybble of saved state
    // check vertical high byte of block object
    // if above the screen, branch to kill it
    // otherwise save state back into stack
    lda(0xf0);
    cmp(((Block_Y_Position) + (2)), x);
    BCS(ChkTop);
    sta(((Block_Y_Position) + (2)), x);
    JMP(ChkTop);
}

int ChkTop() {
    // check to see if bottom block object went
    // to the bottom of the screen, and branch if not
    // otherwise set offscreen coordinate
    // get top block object's vertical coordinate
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
    // do sub to impose gravity on block object
    // get block object offset
    // get relative coordinates
    // get offscreen information
    // draw the block
    // get vertical coordinate
    // mask out high nybble
    // check to see if low nybble wrapped around
    // pull state from stack
    // if still above amount, not time to kill block yet, thus branch
    lda(0x1);
    sta(Block_RepFlag, x);
    JMP(KillBlock);
}

int KillBlock() {
    // otherwise set flag to replace metatile
    // if branched here, nullify object state
    lda(0x0);
    JMP(UpdSte);
}

int UpdSte() {
    // store contents of A in block object state
    sta(Block_State, x);
    return 0;
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(0x1);
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // set offset to start with second block object
    // set offset here
    stx(ObjectOffset);
    lda(VRAM_Buffer1);
    BNE(NextBUpd);
    lda(Block_RepFlag, x);
    BEQ(NextBUpd);
    lda(Block_BBuf_Low, x);
    sta(0x6);
    // if vram buffer already being used here,
    // branch to move onto next block object
    // if flag for block object already clear,
    // branch to move onto next block object
    // get low byte of block buffer
    // store into block buffer address
    lda(0x5);
    sta(0x7);
    lda(Block_Orig_YPos, x);
    sta(0x2);
    // set high byte of block buffer address
    // get original vertical coordinate of block object
    // store here and use as offset to block buffer
    tay();
    lda(Block_Metatile, x);
    sta((0x6), y);
    JSR(ReplaceBlockMetatile);
    // get metatile to be written
    // write it to the block buffer
    // do sub to replace metatile where block object is
    lda(0x0);
    sta(Block_RepFlag, x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // clear block object flag
    // decrement block object offset
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
    // get currently saved value (horizontal
    // speed, secondary counter, whatever)
    // and move low nybble to high
    asl();
    asl();
    sta(0x1);
    lda(SprObject_X_Speed, x);
    lsr();
    // store result here
    // get saved value again
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    cmp(0x8);
    // if < 8, branch, do not change
    BCC(SaveXSpd);
    ora(0b11110000);
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // otherwise alter high nybble
    // save result here
    sta(0x0);
    ldy(0x0);
    cmp(0x0);
    // load default Y value here
    // if result positive, leave Y alone
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // otherwise decrement Y
    // save Y here
    sty(0x2);
    lda(SprObject_X_MoveForce, x);
    // get whatever number's here
    clc();
    adc(0x1);
    sta(SprObject_X_MoveForce, x);
    lda(0x0);
    rol();
    pha();
    ror();
    // add low nybble moved to high
    // store result here
    // init A
    // rotate carry into d0
    // push onto stack
    // rotate d0 back onto carry
    lda(SprObject_X_Position, x);
    adc(0x0);
    sta(SprObject_X_Position, x);
    // add carry plus saved value (high nybble moved to low
    // plus $f0 if necessary) to object's horizontal position
    lda(SprObject_PageLoc, x);
    adc(0x2);
    sta(SprObject_PageLoc, x);
    // add carry plus other saved value to the
    // object's page location and save
    pla();
    clc();
    adc(0x0);
    JMP(ExXMove);
}

int ExXMove() {
    // pull old carry from stack and add
    // to high nybble moved to low
    // and leave
    return 0;
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(0x0);
    // $00 - used for downward force
    // $02 - used for maximum vertical speed
    // set X for player offset
    lda(TimerControl);
    BNE(NoJSChk);
    lda(JumpspringAnimCtrl);
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // if master timer control set, branch ahead
    // otherwise check to see if jumpspring is animating
    // branch to leave if so
    // dump vertical force
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
    // set movement amount
    // jump to skip the rest of this
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
    // increment X for enemy offset
    lda(0x3);
    sta(0x0);
    // set downward movement amount here
    lda(0x6);
    sta(0x1);
    // set upward movement amount here
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
    // set movement amount for bowser/other objects
    // set maximum speed in A
    lda(0x2);
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(0x1c);
    JMP(SetHiMax);
}

int SetHiMax() {
    // set movement amount for podoboo/other objects
    // set maximum speed in A
    lda(0x3);
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // set movement amount here
    sty(0x0);
    inx();
    JSR(ImposeGravitySprObj);
    ldx(ObjectOffset);
    // increment X for enemy offset
    // do a sub to move enemy object downwards
    // get enemy object buffer offset and leave
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
    // set offset for maximum speed
    // set movement amount here
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
    // save value to stack
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
    // get enemy object identifier
    // increment offset for enemy object
    // load default value here
    // residual comparison, object #29 never executes
    // this code, thus unconditional branch here
    // residual code
    // save downward movement amount here
    sta(0x0);
    lda(0xa);
    // save upward movement amount here
    sta(0x1);
    lda(0x3);
    // save maximum vertical speed here
    sta(0x2);
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    // do a sub to move object gradually
    // get enemy object offset and leave
    return 0;
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // $00 - used for downward force
    // $07 - used as adder for vertical position
    // push value to stack
    lda(SprObject_YMF_Dummy, x);
    clc();
    // add value in movement force to contents of dummy variable
    adc(SprObject_Y_MoveForce, x);
    sta(SprObject_YMF_Dummy, x);
    ldy(0x0);
    lda(SprObject_Y_Speed, x);
    BPL(AlterYP);
    dey();
    JMP(AlterYP);
}

int AlterYP() {
    // set Y to zero by default
    // get current vertical speed
    // if currently moving downwards, do not decrement Y
    // otherwise decrement Y
    // store Y here
    sty(0x7);
    adc(SprObject_Y_Position, x);
    sta(SprObject_Y_Position, x);
    // add vertical position to vertical speed plus carry
    // store as new vertical position
    lda(SprObject_Y_HighPos, x);
    adc(0x7);
    sta(SprObject_Y_HighPos, x);
    // add carry plus contents of $07 to vertical high byte
    // store as new vertical high byte
    lda(SprObject_Y_MoveForce, x);
    clc();
    adc(0x0);
    // add downward movement amount to contents of $0433
    sta(SprObject_Y_MoveForce, x);
    lda(SprObject_Y_Speed, x);
    // add carry to vertical speed and store
    adc(0x0);
    sta(SprObject_Y_Speed, x);
    cmp(0x2);
    BMI(ChkUpM);
    // compare to maximum speed
    // if less than preset value, skip this part
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    // if less positively than preset maximum, skip this part
    BCC(ChkUpM);
    lda(0x2);
    sta(SprObject_Y_Speed, x);
    // keep vertical speed within maximum value
    lda(0x0);
    sta(SprObject_Y_MoveForce, x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // clear fractional
    // get value from stack
    pla();
    BEQ(ExVMove);
    // if set to zero, branch to leave
    lda(0x2);
    eor(0b11111111);
    // otherwise get two's compliment of maximum speed
    tay();
    iny();
    sty(0x7);
    // store two's compliment here
    lda(SprObject_Y_MoveForce, x);
    sec();
    sbc(0x1);
    sta(SprObject_Y_MoveForce, x);
    // subtract upward movement amount from contents
    // of movement force, note that $01 is twice as large as $00,
    // thus it effectively undoes add we did earlier
    lda(SprObject_Y_Speed, x);
    sbc(0x0);
    // subtract borrow from vertical speed and store
    sta(SprObject_Y_Speed, x);
    cmp(0x7);
    BPL(ExVMove);
    // compare vertical speed to two's compliment
    // if less negatively than preset maximum, skip this part
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    BCS(ExVMove);
    // check if fractional part is above certain amount,
    // and if so, branch to leave
    lda(0x7);
    sta(SprObject_Y_Speed, x);
    // keep vertical speed within maximum value
    lda(0xff);
    sta(SprObject_Y_MoveForce, x);
    JMP(ExVMove);
}

int ExVMove() {
    // clear fractional
    // leave!
    return 0;
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda(Enemy_Flag, x);
    pha();
    // check data here for MSB set
    // save in stack
    asl();
    BCS(ChkBowserF);
    pla();
    BEQ(ChkAreaTsk);
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}

int ChkAreaTsk() {
    // if MSB set in enemy flag, branch ahead of jumps
    // get from stack
    // if data zero, branch
    // otherwise, jump to run enemy subroutines
    // check number of tasks to perform
    lda(AreaParserTaskNum);
    anda(0x7);
    cmp(0x7);
    // if at a specific task, jump and leave
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // otherwise, jump to process loop command/load enemies
    // get data from stack
    pla();
    anda(0b1111);
    // mask out high nybble
    tay();
    lda(Enemy_Flag, y);
    // use as pointer and load same place with different offset
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
    // send player back four pages
    sec();
    sbc(0x4);
    sta(Player_PageLoc);
    lda(CurrentPageLoc);
    // send current page back four pages
    sec();
    sbc(0x4);
    sta(CurrentPageLoc);
    lda(ScreenLeft_PageLoc);
    sec();
    // subtract four from page location
    // of screen's left border
    sbc(0x4);
    sta(ScreenLeft_PageLoc);
    lda(ScreenRight_PageLoc);
    sec();
    // do the same for the page location
    // of screen's right border
    sbc(0x4);
    sta(ScreenRight_PageLoc);
    lda(AreaObjectPageLoc);
    sec();
    // subtract four from page control
    // for area objects
    sbc(0x4);
    sta(AreaObjectPageLoc);
    lda(0x0);
    sta(EnemyObjectPageSel);
    // initialize page select for both
    // area and enemy objects
    sta(AreaObjectPageSel);
    sta(EnemyDataOffset);
    sta(EnemyObjectPageLoc);
    lda(offsetof(G, AreaDataOfsLoopback), y);
    sta(AreaDataOffset);
    // initialize enemy object data offset
    // and enemy object page control
    // adjust area object offset based on
    // which loop command we encountered
    return 0;
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda(LoopCommand);
    // check if loop command was found
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
    // if all data is checked and not match, do not loop
    // check to see if one of the world numbers
    // matches our current world number
    BNE(FindLoop);
    lda(CurrentPageLoc);
    cmp(offsetof(G, LoopCmdPageNumber), y);
    // check to see if one of the page numbers
    // matches the page we're currently on
    BNE(FindLoop);
    lda(Player_Y_Position);
    cmp(offsetof(G, LoopCmdYPosition), y);
    // check to see if the player is at the correct position
    // if not, branch to check for world 7
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
    // check to see if the player is
    // on solid ground (i.e. not jumping or falling)
    // if not, player fails to pass loop, and loopback
    // are we in world 7? (check performed on correct
    // vertical position and on solid ground)
    // if not, initialize flags used there, otherwise
    // increment counter for correct progression
    // increment master multi-part counter
    inc(MultiLoopPassCntr);
    lda(MultiLoopPassCntr);
    // have we done all three parts?
    cmp(0x3);
    BNE(InitLCmd);
    lda(MultiLoopCorrectCntr);
    // if not, skip this part
    // if so, have we done them all correctly?
    cmp(0x3);
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // if so, branch past unnecessary check here
    // unconditional branch if previous branch fails
    // are we in world 7? (check performed on
    lda(WorldNumber);
    cmp(World7);
    // incorrect vertical position or not on solid ground)
    BEQ(IncMLoop);
    JMP(DoLpBack);
}

int DoLpBack() {
    // if player is not in right place, loop back
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}

int InitMLp() {
    // initialize counters used for multi-part loop commands
    lda(0x0);
    sta(MultiLoopPassCntr);
    sta(MultiLoopCorrectCntr);
    JMP(InitLCmd);
}

int InitLCmd() {
    // initialize loop command flag
    lda(0x0);
    sta(LoopCommand);
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda(EnemyFrenzyQueue);
    BEQ(ProcessEnemyData);
    sta(Enemy_ID, x);
    // check for enemy object in frenzy queue
    // if not, skip this part
    // store as enemy object identifier here
    lda(0x1);
    sta(Enemy_Flag, x);
    // activate enemy object flag
    lda(0x0);
    sta(Enemy_State, x);
    // initialize state and frenzy queue
    sta(EnemyFrenzyQueue);
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy(EnemyDataOffset);
    lda((EnemyData), y);
    cmp(0xff);
    // get offset of enemy object data
    // load first byte
    // check for EOD terminator
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(0b1111);
    // check for special row $0e
    cmp(0xe);
    BEQ(CheckRightBounds);
    cpx(0x5);
    BCC(CheckRightBounds);
    // if found, branch, otherwise
    // check for end of buffer
    // if not at end of buffer, branch
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
    // add 48 to pixel coordinate of right boundary
    clc();
    adc(0x30);
    anda(0b11110000);
    // store high nybble
    sta(0x7);
    lda(ScreenRight_PageLoc);
    // add carry to page location of right boundary
    adc(0x0);
    sta(0x6);
    // store page location + carry
    ldy(EnemyDataOffset);
    iny();
    lda((EnemyData), y);
    // if MSB of enemy object is clear, branch to check for row $0f
    asl();
    BCC(CheckPageCtrlRow);
    lda(EnemyObjectPageSel);
    // if page select already set, do not set again
    BNE(CheckPageCtrlRow);
    inc(EnemyObjectPageSel);
    inc(EnemyObjectPageLoc);
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda((EnemyData), y);
    // reread first byte
    anda(0xf);
    cmp(0xf);
    BNE(PositionEnemyObj);
    lda(EnemyObjectPageSel);
    BNE(PositionEnemyObj);
    // check for special row $0f
    // if not found, branch to position enemy object
    // if page select set,
    // branch without reading second byte
    iny();
    lda((EnemyData), y);
    // otherwise, get second byte, mask out 2 MSB
    anda(0b111111);
    sta(EnemyObjectPageLoc);
    inc(EnemyDataOffset);
    // store as page control for enemy object data
    // increment enemy object data offset 2 bytes
    inc(EnemyDataOffset);
    inc(EnemyObjectPageSel);
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda(EnemyObjectPageLoc);
    sta(Enemy_PageLoc, x);
    lda((EnemyData), y);
    // store page control as page location
    // for enemy object
    // get first byte of enemy object
    anda(0b11110000);
    sta(Enemy_X_Position, x);
    cmp(ScreenRight_X_Pos);
    lda(Enemy_PageLoc, x);
    sbc(ScreenRight_PageLoc);
    BCS(CheckRightExtBounds);
    // store column position
    // check column position against right boundary
    // without subtracting, then subtract borrow
    // from page location
    // if enemy object beyond or at boundary, branch
    lda((EnemyData), y);
    anda(0b1111);
    cmp(0xe);
    // check for special row $0e
    // if found, jump elsewhere
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
    // check right boundary + 48 against
    // column position without subtracting,
    // then subtract borrow from page control temp
    // plus carry
    // if enemy object beyond extended boundary, branch
    // store value in vertical high byte
    sta(Enemy_Y_HighPos, x);
    lda((EnemyData), y);
    asl();
    asl();
    // get first byte again
    // multiply by four to get the vertical
    // coordinate
    asl();
    asl();
    sta(Enemy_Y_Position, x);
    cmp(0xe0);
    BEQ(ParseRow0e);
    // do one last check for special row $0e
    // (necessary if branched to $c1cb)
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
    // get second byte and mask out 2 MSB
    anda(0b111111);
    cmp(0x37);
    // check for value below $37
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
    // if below $37, check for goomba
    // value ($3f or more always fails)
    // check if primary hard mode flag is set
    // and if so, change goomba to buzzy beetle
    lda(BuzzyBeetle);
    JMP(StrID);
}

int StrID() {
    // store enemy object number into buffer
    sta(Enemy_ID, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    // set flag for enemy in buffer
    JSR(InitEnemyObject);
    lda(Enemy_Flag, x);
    BNE(Inc2B);
    // check to see if flag is set
    // if not, leave, otherwise branch
    return 0;
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda(EnemyFrenzyBuffer);
    BNE(StrFre);
    lda(VineFlagOffset);
    // if enemy object stored in frenzy buffer
    // then branch ahead to store in enemy object buffer
    // otherwise check vine flag offset
    cmp(0x1);
    BNE(ExEPar);
    lda(VineObject);
    JMP(StrFre);
}

int StrFre() {
    // if other value <> 1, leave
    // otherwise put vine in enemy identifier
    // store contents of frenzy buffer into enemy identifier value
    sta(Enemy_ID, x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(0x0);
    // initialize enemy state
    sta(Enemy_State, x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // jump ahead to run jump engine and subroutines
    // then leave
    return 0;
    JMP(DoGroup);
}

int DoGroup() {
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}

int ParseRow0e() {
    iny();
    // increment Y to load third byte of object
    iny();
    lda((EnemyData), y);
    lsr();
    lsr();
    // move 3 MSB to the bottom, effectively
    // making %xxx00000 into %00000xxx
    lsr();
    lsr();
    lsr();
    cmp(WorldNumber);
    BNE(NotUse);
    dey();
    lda((EnemyData), y);
    sta(AreaPointer);
    // is it the same world number as we're on?
    // if not, do not use (this allows multiple uses
    // of the same area, like the underground bonus areas)
    // otherwise, get second byte and use as offset
    // to addresses for level and enemy object data
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
    // load current offset for enemy object data
    // get first byte
    // check for special row $0e
    cmp(0xe);
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // if row = $0e, increment three bytes
    inc(EnemyDataOffset);
    JMP(Inc2B);
}

int Inc2B() {
    // otherwise increment two bytes
    inc(EnemyDataOffset);
    inc(EnemyDataOffset);
    lda(0x0);
    // init page select for enemy objects
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
    // check enemy object identifier for $15 or greater
    // and branch straight to the jump engine if found
    // save identifier in Y register for now
    lda(Enemy_Y_Position, x);
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // add eight pixels to what will eventually be the
    // enemy object's vertical coordinate ($00-$14 only)
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
    // set enemy position to below
    // the bottom of the screen
    sta(Enemy_Y_Position, x);
    lsr();
    sta(EnemyIntervalTimer, x);
    // set timer for enemy
    lsr();
    sta(Enemy_State, x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(0xb8);
    sta(Enemy_Y_Position, x);
    // set fixed vertical position for
    // princess/mushroom retainer object
    return 0;
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(0x1);
    lda(PrimaryHardMode);
    // load offset of 1 by default
    // check for primary hard mode flag set
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // if not set, decrement offset
    // get appropriate horizontal speed
    lda(offsetof(G, NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // store as speed for enemy object
    sta(Enemy_X_Speed, x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(0x1);
    // load appropriate horizontal speed
    // set enemy state for red koopa troopa $03
    sta(Enemy_State, x);
    return 0;
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(0x0);
    sta(HammerThrowingTimer, x);
    // init horizontal speed and timer used by hammer bro
    // apparently to time hammer throwing
    sta(Enemy_X_Speed, x);
    ldy(SecondaryHardMode);
    // get secondary hard mode flag
    lda(offsetof(G, HBroWalkingTimerData), y);
    sta(EnemyIntervalTimer, x);
    lda(0xb);
    // set value as delay for hammer bro to walk left
    // set specific value for bounding box size control
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(0x0);
    // initialize horizontal speed
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(0x0);
    // initialize horizontal speed
    sta(BlooperMoveSpeed, x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // set specific bounding box size control
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
    // load central position adder for 48 pixels down
    // set vertical coordinate into location to
    // be used as original vertical coordinate
    // if vertical coordinate < $80
    // if => $80, load position adder for 32 pixels up
    // send central position adder to A
    tya();
    adc(Enemy_Y_Position, x);
    sta(RedPTroopaCenterYPos, x);
    JMP(TallBBox);
}

int TallBBox() {
    // add to current vertical coordinate
    // store as central vertical coordinate
    // set specific bounding box size control
    lda(0x3);
    JMP(SetBBox);
}

int SetBBox() {
    // set bounding box control here
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x2);
    // set moving direction for left
    sta(Enemy_MovingDir, x);
    JMP(InitVStf);
}

int InitVStf() {
    // initialize vertical speed
    lda(0x0);
    sta(Enemy_Y_Speed, x);
    // and movement force
    sta(Enemy_Y_MoveForce, x);
    return 0;
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(0x2);
    // set moving direction for left
    sta(Enemy_MovingDir, x);
    lda(0x9);
    // set bounding box control for $09
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda(PseudoRandomBitReg, x);
    anda(0b10000);
    sta(CheepCheepMoveMFlag, x);
    // set vertical bounding box, speed, init others
    // check one portion of LSFR
    // get d4 from it
    // save as movement flag of some sort
    lda(Enemy_Y_Position, x);
    sta(CheepCheepOrigYPos, x);
    // save original vertical coordinate here
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
    // erase counter for lakitu's reappearance
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
    // if timer here not expired, leave
    BNE(ExLSHand);
    cpx(0x5);
    // if we are on the special use slot, leave
    BCS(ExLSHand);
    lda(0x80);
    // set timer
    sta(FrenzyEnemyTimer);
    ldy(0x4);
    JMP(ChkLak);
}

int ChkLak() {
    // start with the last enemy slot
    // check all enemy slots to see
    lda(Enemy_ID, y);
    cmp(Lakitu);
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc(LakituReappearTimer);
    // if lakitu is on one of them
    // if so, branch out of this loop
    // otherwise check another slot
    // loop until all slots are checked
    // increment reappearance timer
    lda(LakituReappearTimer);
    cmp(0x7);
    BCC(ExLSHand);
    ldx(0x4);
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // check to see if we're up to a certain value yet
    // if not, leave
    // start with the last enemy slot again
    // check enemy buffer flag for non-active enemy slot
    lda(Enemy_Flag, x);
    BEQ(CreateL);
    dex();
    BPL(ChkNoEn);
    BMI(RetEOfs);
    JMP(CreateL);
}

int CreateL() {
    // branch out of loop if found
    // otherwise check next slot
    // branch until all slots are checked
    // if no empty slots were found, branch to leave
    // initialize enemy state
    lda(0x0);
    sta(Enemy_State, x);
    lda(Lakitu);
    // create lakitu enemy object
    sta(Enemy_ID, x);
    JSR(SetupLakitu);
    // do a sub to set up lakitu
    lda(0x20);
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // finish setting up lakitu
    // get enemy object buffer offset again and leave
    ldx(ObjectOffset);
    JMP(ExLSHand);
}

int ExLSHand() {
    return 0;
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda(Player_Y_Position);
    // if player above a certain point, branch to leave
    cmp(0x2c);
    BCC(ExLSHand);
    lda(Enemy_State, y);
    // if lakitu is not in normal state, branch to leave
    BNE(ExLSHand);
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // store horizontal coordinates (high and low) of lakitu
    // into the coordinates of the spiny we're going to create
    lda(Enemy_X_Position, y);
    sta(Enemy_X_Position, x);
    lda(0x1);
    // put spiny within vertical screen unit
    sta(Enemy_Y_HighPos, x);
    lda(Enemy_Y_Position, y);
    // put spiny eight pixels above where lakitu is
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    lda(PseudoRandomBitReg, x);
    // get 2 LSB of LSFR and save to Y
    anda(0b11);
    tay();
    ldx(0x2);
    JMP(DifLoop);
}

int DifLoop() {
    // get three values and save them
    lda(offsetof(G, PRDiffAdjustData), y);
    sta(0x1, x);
    // to $01-$03
    iny();
    iny();
    // increment Y four bytes for each value
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx(ObjectOffset);
    JSR(PlayerLakituDiff);
    ldy(Player_X_Speed);
    // decrement X for each one
    // loop until all three are written
    // get enemy object buffer offset
    // move enemy, change direction, get value - difference
    // check player's horizontal speed
    cpy(0x8);
    BCS(SetSpSpd);
    tay();
    // if moving faster than a certain amount, branch elsewhere
    // otherwise save value in A to Y for now
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(UsePosv);
    // get one of the LSFR parts and save the 2 LSB
    // branch if neither bits are set
    tya();
    eor(0b11111111);
    // otherwise get two's compliment of Y
    tay();
    iny();
    JMP(UsePosv);
}

int UsePosv() {
    // put value from A in Y back to A (they will be lost anyway)
    tya();
    JMP(SetSpSpd);
}

int SetSpSpd() {
    // set bounding box control, init attributes, lose contents of A
    JSR(SmallBBox);
    ldy(0x2);
    sta(Enemy_X_Speed, x);
    cmp(0x0);
    BMI(SpinyRte);
    // set horizontal speed to zero because previous contents
    // of A were lost...branch here will never be taken for
    // the same reason
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // set moving direction to the right
    sty(Enemy_MovingDir, x);
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    // set vertical speed to move upwards
    lda(0x1);
    sta(Enemy_Flag, x);
    // enable enemy object by setting flag
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
    // initialize low byte of spin state
    sta(FirebarSpinState_Low, x);
    lda(Enemy_ID, x);
    sec();
    // subtract $1b from enemy identifier
    // to get proper offset for firebar data
    sbc(0x1b);
    tay();
    lda(offsetof(G, FirebarSpinSpdData), y);
    // get spinning speed of firebar
    sta(FirebarSpinSpeed, x);
    lda(offsetof(G, FirebarSpinDirData), y);
    // get spinning direction of firebar
    sta(FirebarSpinDirection, x);
    lda(Enemy_Y_Position, x);
    clc();
    // add four pixels to vertical coordinate
    adc(0x4);
    sta(Enemy_Y_Position, x);
    lda(Enemy_X_Position, x);
    clc();
    // add four pixels to horizontal coordinate
    adc(0x4);
    sta(Enemy_X_Position, x);
    lda(Enemy_PageLoc, x);
    adc(0x0);
    // add carry to page location
    sta(Enemy_PageLoc, x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda(FrenzyEnemyTimer);
    // if timer here not expired yet, branch to leave
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // jump to set bounding box size $09 and init other values
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    // set pseudorandom offset here
    tay();
    lda(offsetof(G, FlyCCTimerData), y);
    // load timer with pseudorandom offset
    sta(FrenzyEnemyTimer);
    ldy(0x3);
    // load Y with default value
    lda(SecondaryHardMode);
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // if secondary hard mode flag not set, do not increment Y
    // otherwise, increment Y to allow as many as four onscreen
    // store whatever pseudorandom bits are in Y
    sty(0x0);
    cpx(0x0);
    BCS(ChpChpEx);
    // compare enemy object buffer offset with Y
    // if X => Y, branch to leave
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(0x0);
    // get last two bits of LSFR, first part
    // and store in two places
    sta(0x1);
    lda(0xfb);
    // set vertical speed for cheep-cheep
    sta(Enemy_Y_Speed, x);
    lda(0x0);
    ldy(Player_X_Speed);
    BEQ(GSeed);
    // load default value
    // check player's horizontal speed
    // if player not moving left or right, skip this part
    lda(0x4);
    cpy(0x19);
    BCC(GSeed);
    asl();
    JMP(GSeed);
}

int GSeed() {
    // if moving to the right but not very quickly,
    // do not change A
    // otherwise, multiply A by 2
    // save to stack
    pha();
    clc();
    adc(0x0);
    sta(0x0);
    // add to last two bits of LSFR we saved earlier
    // save it there
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(RSeed);
    // if neither of the last two bits of second LSFR set,
    // skip this part and save contents of $00
    lda(((PseudoRandomBitReg) + (2)), x);
    anda(0b1111);
    sta(0x0);
    JMP(RSeed);
}

int RSeed() {
    // otherwise overwrite with lower nybble of
    // third LSFR part
    // get value from stack we saved earlier
    pla();
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FlyCCXSpeedData), y);
    // add to last two bits of LSFR we saved in other place
    // use as pseudorandom offset here
    // get horizontal speed using pseudorandom offset
    sta(Enemy_X_Speed, x);
    lda(0x1);
    // set to move towards the right
    sta(Enemy_MovingDir, x);
    lda(Player_X_Speed);
    // if player moving left or right, branch ahead of this part
    BNE(D2XPos1);
    ldy(0x0);
    tya();
    // get first LSFR or third LSFR lower nybble
    // and check for d1 set
    anda(0b10);
    BEQ(D2XPos1);
    // if d1 not set, branch
    lda(Enemy_X_Speed, x);
    eor(0xff);
    clc();
    adc(0x1);
    // if d1 set, change horizontal speed
    // into two's compliment, thus moving in the opposite
    // direction
    sta(Enemy_X_Speed, x);
    inc(Enemy_MovingDir, x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // increment to move towards the left
    // get first LSFR or third LSFR lower nybble again
    tya();
    anda(0b10);
    BEQ(D2XPos2);
    lda(Player_X_Position);
    // check for d1 set again, branch again if not set
    // get player's horizontal position
    clc();
    adc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // if d1 set, add value obtained from pseudorandom offset
    // and save as enemy's horizontal position
    // get player's page location
    // add carry and jump past this part
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // get player's horizontal position
    lda(Player_X_Position);
    sec();
    sbc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(FinCCSt);
}

int FinCCSt() {
    // if d1 not set, subtract value obtained from pseudorandom
    // offset and save as enemy's horizontal position
    // get player's page location
    // subtract borrow
    // save as enemy's page location
    sta(Enemy_PageLoc, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, x);
    // set enemy's buffer flag
    // set enemy's high vertical byte
    lda(0xf8);
    sta(Enemy_Y_Position, x);
    // put enemy below the screen, and we are done
    return 0;
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx(BowserFront_Offset);
    // jump to create another bowser object
    // save offset of first here
    lda(0x0);
    sta(BowserBodyControls);
    sta(BridgeCollapseOffset);
    // initialize bowser's body controls
    // and bridge collapse offset
    lda(Enemy_X_Position, x);
    sta(BowserOrigXPos);
    // store original horizontal position here
    lda(0xdf);
    sta(BowserFireBreathTimer);
    sta(Enemy_MovingDir, x);
    // store something here
    // and in moving direction
    lda(0x20);
    sta(BowserFeetCounter);
    // set bowser's feet timer and in enemy timer
    sta(EnemyFrameTimer, x);
    lda(0x5);
    sta(BowserHitPoints);
    // give bowser 5 hit points
    lsr();
    sta(BowserMovementSpeed);
    // set default movement speed here
    return 0;
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(0xff);
    JMP(FSLoop);
}

int FSLoop() {
    // start at beginning of enemy slots
    // increment one slot
    iny();
    lda(Enemy_Flag, y);
    BNE(FSLoop);
    sty(DuplicateObj_Offset);
    txa();
    ora(0b10000000);
    sta(Enemy_Flag, y);
    // check enemy buffer flag for empty slot
    // if set, branch and keep checking
    // otherwise set offset here
    // transfer original enemy buffer offset
    // store with d7 set as flag in new enemy
    // slot as well as enemy offset
    lda(Enemy_PageLoc, x);
    sta(Enemy_PageLoc, y);
    lda(Enemy_X_Position, x);
    // copy page location and horizontal coordinates
    // from original enemy to new enemy
    sta(Enemy_X_Position, y);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, y);
    // set flag as normal for original enemy
    // set high vertical byte for new enemy
    lda(Enemy_Y_Position, x);
    sta(Enemy_Y_Position, y);
    JMP(FlmEx);
}

int FlmEx() {
    // copy vertical coordinate from original to new
    // and then leave
    return 0;
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda(FrenzyEnemyTimer);
    // if timer not expired yet, branch to leave
    BNE(FlmEx);
    sta(Enemy_Y_MoveForce, x);
    // reset something here
    lda(NoiseSoundQueue);
    ora(Sfx_BowserFlame);
    // load bowser's flame sound into queue
    sta(NoiseSoundQueue);
    ldy(BowserFront_Offset);
    lda(Enemy_ID, y);
    // get bowser's buffer offset
    // check for bowser
    cmp(Bowser);
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // branch if found
    // get timer data based on flame counter
    clc();
    adc(0x20);
    // add 32 frames by default
    ldy(SecondaryHardMode);
    BEQ(SetFrT);
    // if secondary mode flag not set, use as timer setting
    sec();
    sbc(0x10);
    JMP(SetFrT);
}

int SetFrT() {
    // otherwise subtract 16 frames for secondary hard mode
    // set timer accordingly
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
    // set vertical position
    lda(ScreenRight_X_Pos);
    clc();
    adc(0x20);
    // place enemy 32 pixels beyond right side of screen
    sta(Enemy_X_Position, x);
    lda(ScreenRight_PageLoc);
    adc(0x0);
    // add carry
    sta(Enemy_PageLoc, x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda(Enemy_X_Position, y);
    // get bowser's horizontal position
    sec();
    sbc(0xe);
    sta(Enemy_X_Position, x);
    // subtract 14 pixels
    // save as flame's horizontal position
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // copy page location from bowser to flame
    lda(Enemy_Y_Position, y);
    clc();
    // add 8 pixels to bowser's vertical position
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // save as flame's vertical position
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
    // get 2 LSB from first part of LSFR
    // save here
    // use as offset
    // get value here using bits as offset
    // load default offset
    // compare value to flame's current vertical position
    // if less, do not increment offset
    // otherwise increment now
    // get value here and save
    lda(offsetof(G, FlameYMFAdderData), y);
    sta(Enemy_Y_MoveForce, x);
    // to vertical movement force
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(0x8);
    // set $08 for bounding box control
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // set high byte of vertical and
    // enemy buffer flag
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_X_MoveForce, x);
    sta(Enemy_State, x);
    // initialize horizontal movement force, and
    // enemy state
    return 0;
    JMP(InitFireworks);
}

int InitFireworks() {
    lda(FrenzyEnemyTimer);
    // if timer not expired yet, branch to leave
    BNE(ExitFWk);
    lda(0x20);
    // otherwise reset timer
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
    // check for presence of star flag object
    // if there isn't a star flag object,
    // routine goes into infinite loop = crash
    lda(Enemy_X_Position, y);
    sec();
    sbc(0x30);
    pha();
    // get horizontal coordinate of star flag object, then
    // subtract 48 pixels from it and save to
    // the stack
    lda(Enemy_PageLoc, y);
    sbc(0x0);
    sta(0x0);
    lda(FireworksCounter);
    // subtract the carry from the page location
    // of the star flag object
    // get fireworks counter
    clc();
    adc(Enemy_State, y);
    tay();
    pla();
    // add state of star flag object (possibly not necessary)
    // use as offset
    // get saved horizontal coordinate of star flag - 48 pixels
    clc();
    adc(offsetof(G, FireworksXPosData), y);
    sta(Enemy_X_Position, x);
    // add number based on offset of fireworks counter
    // store as the fireworks object horizontal coordinate
    lda(0x0);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    lda(offsetof(G, FireworksYPosData), y);
    sta(Enemy_Y_Position, x);
    // add carry and store as page location for
    // the fireworks object
    // get vertical position using same offset
    // and store as vertical coordinate for fireworks object
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // store in vertical high byte
    // and activate enemy buffer flag
    lsr();
    sta(ExplosionGfxCounter, x);
    // initialize explosion counter
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
    // if timer not expired yet, branch to leave
    BNE(ExF17);
    lda(AreaType);
    BNE(DoBulletBills);
    cpx(0x3);
    BCS(ExF17);
    ldy(0x0);
    // are we in a water-type level?
    // if not, branch elsewhere
    // are we past third enemy slot?
    // if so, branch to leave
    // load default offset
    lda(PseudoRandomBitReg, x);
    cmp(0xaa);
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // check first part of LSFR against preset value
    // if less than preset, do not increment offset
    // otherwise increment
    // check world number
    lda(WorldNumber);
    cmp(World2);
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(0b1);
    // mask out all but last bit of offset
    tay();
    lda(offsetof(G, SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // load identifier for cheep-cheeps
    // store whatever's in A as enemy identifier
    sta(Enemy_ID, x);
    lda(BitMFilter);
    cmp(0xff);
    // if not all bits set, skip init part and compare bits
    BNE(GetRBit);
    lda(0x0);
    // initialize vertical position filter
    sta(BitMFilter);
    JMP(GetRBit);
}

int GetRBit() {
    // get first part of LSFR
    lda(PseudoRandomBitReg, x);
    anda(0b111);
    JMP(ChkRBit);
}

int ChkRBit() {
    // mask out all but 3 LSB
    // use as offset
    tay();
    lda(offsetof(G, Bitmasks), y);
    bit(BitMFilter);
    // load bitmask
    // perform AND on filter without changing it
    BEQ(AddFBit);
    iny();
    // increment offset
    tya();
    anda(0b111);
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // mask out all but 3 LSB thus keeping it 0-7
    // do another check
    // add bit to already set bits in filter
    ora(BitMFilter);
    sta(BitMFilter);
    lda(offsetof(G, Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta(Enemy_YMF_Dummy, x);
    lda(0x20);
    // and store
    // load vertical position using offset
    // set vertical position and other values
    // initialize dummy variable
    // set timer
    sta(FrenzyEnemyTimer);
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(0xff);
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // start at beginning of enemy slots
    // move onto the next slot
    iny();
    cpy(0x5);
    // branch to play sound if we've done all slots
    BCS(FireBulletBill);
    lda(Enemy_Flag, y);
    BEQ(BB_SLoop);
    // if enemy buffer flag not set,
    // loop back and check another slot
    lda(Enemy_ID, y);
    cmp(BulletBill_FrenzyVar);
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // check enemy identifier for
    // bullet bill object (frenzy variant)
    // if found, leave
    return 0;
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda(Square2SoundQueue);
    ora(Sfx_Blast);
    // play fireworks/gunfire sound
    sta(Square2SoundQueue);
    lda(BulletBill_FrenzyVar);
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(0x0);
    // load value for green koopa troopa
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
    // subtract $37 from second byte read
    // save result in stack for now
    // was byte in $3b-$3e range?
    // if so, branch
    // save another copy to stack
    // load value for goomba enemy
    // if primary hard mode flag not set,
    // branch, otherwise change to value
    // for buzzy beetle
    // get second copy from stack
    pla();
    JMP(SnglID);
}

int SnglID() {
    // save enemy id here
    sty(0x1);
    ldy(0xb0);
    anda(0x2);
    BEQ(SetYGp);
    ldy(0x70);
    JMP(SetYGp);
}

int SetYGp() {
    // load default y coordinate
    // check to see if d1 was set
    // if so, move y coordinate up,
    // otherwise branch and use default
    // save y coordinate here
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
    // get page number of right edge of screen
    // save here
    // get pixel coordinate of right edge
    // save here
    // load two enemies by default
    // get first copy from stack
    // check to see if d0 was set
    // if not, use default value
    // otherwise increment to three enemies
    // save number of enemies here
    sty(NumberofGroupEnemies);
    JMP(GrLoop);
}

int GrLoop() {
    // start at beginning of enemy buffers
    ldx(0xff);
    JMP(GSltLp);
}

int GSltLp() {
    // increment and branch if past
    inx();
    cpx(0x5);
    // end of buffers
    BCS(NextED);
    lda(Enemy_Flag, x);
    BNE(GSltLp);
    // check to see if enemy is already
    // stored in buffer, and branch if so
    lda(0x1);
    sta(Enemy_ID, x);
    // store enemy object identifier
    lda(0x2);
    sta(Enemy_PageLoc, x);
    // store page location for enemy object
    lda(0x3);
    sta(Enemy_X_Position, x);
    // store x coordinate for enemy object
    clc();
    adc(0x18);
    // add 24 pixels for next enemy
    sta(0x3);
    lda(0x2);
    adc(0x0);
    // add carry to page location for
    // next enemy
    sta(0x2);
    lda(0x0);
    // store y coordinate for enemy object
    sta(Enemy_Y_Position, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // activate flag for buffer, and
    // put enemy within the screen vertically
    sta(Enemy_Flag, x);
    JSR(CheckpointEnemyID);
    dec(NumberofGroupEnemies);
    // process each enemy object separately
    // do this until we run out of enemy objects
    BNE(GrLoop);
    JMP(NextED);
}

int NextED() {
    // jump to increment data offset and leave
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}

int InitPiranhaPlant() {
    lda(0x1);
    // set initial speed
    sta(PiranhaPlant_Y_Speed, x);
    lsr();
    sta(Enemy_State, x);
    sta(PiranhaPlant_MoveFlag, x);
    // initialize enemy state and what would normally
    // be used as vertical speed, but not in this case
    lda(Enemy_Y_Position, x);
    sta(PiranhaPlantDownYPos, x);
    // save original vertical coordinate here
    sec();
    sbc(0x18);
    sta(PiranhaPlantUpYPos, x);
    // save original vertical coordinate - 24 pixels here
    lda(0x9);
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda(Enemy_ID, x);
    sta(EnemyFrenzyBuffer);
    // load enemy identifier
    // save in enemy frenzy buffer
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
    // start at last slot
    // check enemy identifiers
    lda(Enemy_ID, y);
    cmp(Lakitu);
    // for lakitu
    BNE(NextFSlot);
    lda(0x1);
    // if found, set state
    sta(Enemy_State, y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // move onto the next slot
    dey();
    BPL(LakituChk);
    // do this until all slots are checked
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    sta(Enemy_Flag, x);
    // empty enemy frenzy buffer
    // disable enemy buffer flag for this object
    return 0;
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(0x2);
    // set for movement to the left
    sta(Enemy_MovingDir, x);
    lda(0xf8);
    // set horizontal speed
    sta(Enemy_X_Speed, x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // set specific value for bounding box control
    lda(0x3);
    JMP(SetBBox2);
}

int SetBBox2() {
    // set bounding box control then leave
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec(Enemy_Y_Position, x);
    // raise vertical position by two pixels
    dec(Enemy_Y_Position, x);
    ldy(SecondaryHardMode);
    BNE(AlignP);
    ldy(0x2);
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // if secondary hard mode flag not set,
    // branch ahead
    // otherwise set value here
    // do a sub to add or subtract pixels
    // set default value here for now
    ldy(0xff);
    lda(BalPlatformAlignment);
    sta(Enemy_State, x);
    BPL(SetBPA);
    txa();
    tay();
    JMP(SetBPA);
}

int SetBPA() {
    // get current balance platform alignment
    // set platform alignment to object state here
    // if old alignment $ff, put $ff as alignment for negative
    // if old contents already $ff, put
    // object offset as alignment to make next positive
    // store whatever value's in Y here
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
    // set default value here
    // check vertical position
    // if above a certain point, skip this part
    eor(0xff);
    clc();
    // otherwise get two's compliment
    adc(0x1);
    ldy(0xc0);
    JMP(SetYO);
}

int SetYO() {
    // get alternate value to add to vertical position
    // save as top vertical position
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
    // do a sub to init certain other values
    // set default bounding box size control
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
    // check for castle-type level
    // use default value if found
    // otherwise check for secondary hard mode flag
    // if set, use default value
    // use alternate value if not castle or secondary not set
    // set bounding box size control here and leave
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
    // set movement amount here
    sta(Enemy_Y_MoveForce, x);
    lda(0xff);
    // set moving speed for platforms going up
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(0xf0);
    // set movement amount here
    sta(Enemy_Y_MoveForce, x);
    lda(0x0);
    // set moving speed for platforms going down
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(0x1);
    JSR(PosPlatform);
    // do a sub to add 12 pixels due to preset value
    lda(0x4);
    sta(Enemy_BoundBoxCtrl, x);
    // set bounding box control for small platforms
    return 0;
    JMP(PosPlatform);
}

int PosPlatform() {
    lda(Enemy_X_Position, x);
    // get horizontal coordinate
    clc();
    adc(offsetof(G, PlatPosDataLow), y);
    sta(Enemy_X_Position, x);
    // add or subtract pixels depending on offset
    // store as new horizontal coordinate
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
    // get offset for enemy object buffer
    // load value 0 for jump engine by default
    ldy(Enemy_ID, x);
    cpy(0x15);
    // if enemy object < $15, use default value
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
    // init sprite attributes
    sta(Enemy_SprAttrib, x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy(TimerControl);
    // if master timer control set, skip to last routine
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
    // if master timer control set,
    // skip subroutine tree
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
    // subtract $24 to get proper offset for jump table
    sec();
    sbc(0x24);
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(0x0);
    // clear all enemy object variables
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
    // check enemy timer
    // branch to move enemy if not expired
    // otherwise set up podoboo again
    // get part of LSFR
    // set d7
    // store as movement force
    // mask out high nybble
    // set for at least six intervals
    // store as new enemy timer
    lda(0xf9);
    sta(Enemy_Y_Speed, x);
    JMP(PdbM);
}

int PdbM() {
    // set vertical speed to move podoboo upwards
    // branch to impose gravity on podoboo
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda(Enemy_State, x);
    // check hammer bro's enemy state for d5 set
    anda(0b100000);
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // if not set, go ahead with code
    // otherwise jump to something else
    // check jump timer
    lda(HammerBroJumpTimer, x);
    BEQ(HammerBroJumpCode);
    dec(HammerBroJumpTimer, x);
    // if expired, branch to jump
    // otherwise decrement jump timer
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
    // check offscreen bits
    // if hammer bro a little offscreen, skip to movement code
    // check hammer throwing timer
    // if not expired, skip ahead, do not throw hammer
    // otherwise get secondary hard mode flag
    // get timer data using flag as offset
    // set as new timer
    // do a sub here to spawn hammer object
    // if carry clear, hammer not spawned, skip to decrement timer
    lda(Enemy_State, x);
    ora(0b1000);
    // set d3 in enemy state for hammer throw
    sta(Enemy_State, x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // jump to move hammer bro
    // decrement timer
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
    // get hammer bro's enemy state
    // mask out all but 3 LSB
    // check for d0 set (for jumping)
    // if set, branch ahead to moving code
    // load default value here
    // save into temp variable for now
    // set default vertical speed
    // check hammer bro's vertical coordinate
    // if on the bottom half of the screen, use current speed
    // otherwise set alternate vertical speed
    // check to see if hammer bro is above the middle of screen
    // increment preset value to $01
    // if above the middle of the screen, use current speed and $01
    // otherwise return value to $00
    // get part of LSFR, mask out all but LSB
    anda(0x1);
    BNE(SetHJ);
    ldy(0xfa);
    JMP(SetHJ);
}

int SetHJ() {
    // if d0 of LSFR set, branch and use current speed and $00
    // otherwise reset to default vertical speed
    // set vertical speed for jumping
    sty(Enemy_Y_Speed, x);
    lda(Enemy_State, x);
    // set d0 in enemy state for jumping
    ora(0x1);
    sta(Enemy_State, x);
    lda(0x0);
    anda(((PseudoRandomBitReg) + (2)), x);
    tay();
    lda(SecondaryHardMode);
    // load preset value here to use as bitmask
    // and do bit-wise comparison with part of LSFR
    // then use as offset
    // check secondary hard mode flag
    BNE(HJump);
    tay();
    JMP(HJump);
}

int HJump() {
    // if secondary hard mode flag clear, set offset to 0
    // get jump length timer data using offset from before
    lda(offsetof(G, HammerBroJumpLData), y);
    sta(EnemyFrameTimer, x);
    // save in enemy timer
    lda(((PseudoRandomBitReg) + (1)), x);
    ora(0b11000000);
    sta(HammerBroJumpTimer, x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(0xfc);
    // move hammer bro a little to the left
    lda(FrameCounter);
    anda(0b1000000);
    // change hammer bro's direction every 64 frames
    BNE(Shimmy);
    ldy(0x4);
    JMP(Shimmy);
}

int Shimmy() {
    // if d6 set in counter, move him a little to the right
    // store horizontal speed
    sty(Enemy_X_Speed, x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda(EnemyIntervalTimer, x);
    BNE(SetShim);
    // set to face right by default
    // get horizontal difference between player and hammer bro
    // if enemy to the left of player, skip this part
    // set to face left
    // check walking timer
    // if not yet expired, skip to set moving direction
    lda(0xf8);
    sta(Enemy_X_Speed, x);
    JMP(SetShim);
}

int SetShim() {
    // otherwise, make the hammer bro walk left towards player
    // set moving direction
    sty(Enemy_MovingDir, x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(0x0);
    // init Y to leave horizontal movement as-is
    lda(Enemy_State, x);
    anda(0b1000000);
    BNE(FallE);
    // check enemy state for d6 set, if set skip
    // to move enemy vertically, then horizontally if necessary
    lda(Enemy_State, x);
    asl();
    BCS(SteadM);
    // check enemy state for d7 set
    // if set, branch to move enemy horizontally
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(MoveDefeatedEnemy);
    // check enemy state for d5 set
    // if set, branch to move defeated enemy object
    lda(Enemy_State, x);
    anda(0b111);
    BEQ(SteadM);
    // check d2-d0 of enemy state for any set bits
    // if enemy in normal state, branch to move enemy horizontally
    cmp(0x5);
    BEQ(FallE);
    // if enemy in state used by spiny's egg, go ahead here
    cmp(0x3);
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // if enemy in states $03 or $04, skip ahead to yet another part
    // do a sub here to move enemy downwards
    JSR(MoveD_EnemyVertically);
    ldy(0x0);
    lda(Enemy_State, x);
    // check for enemy state $02
    cmp(0x2);
    BEQ(MEHor);
    anda(0b1000000);
    BEQ(SteadM);
    // if found, branch to move enemy horizontally
    // check for d6 set
    // if not set, branch to something else
    lda(Enemy_ID, x);
    cmp(PowerUpObject);
    // check for power-up object
    BEQ(SteadM);
    BNE(SlowM);
    JMP(MEHor);
}

int MEHor() {
    // if any other object where d6 set, jump to set Y
    // jump here to move enemy horizontally for <> $2e and d6 set
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}

int SlowM() {
    // if branched here, increment Y to slow horizontal movement
    ldy(0x1);
    JMP(SteadM);
}

int SteadM() {
    // get current horizontal speed
    lda(Enemy_X_Speed, x);
    pha();
    BPL(AddHS);
    // save to stack
    // if not moving or moving right, skip, leave Y alone
    iny();
    iny();
    JMP(AddHS);
}

int AddHS() {
    clc();
    adc(offsetof(G, XSpeedAdderData), y);
    sta(Enemy_X_Speed, x);
    JSR(MoveEnemyHorizontally);
    // add value here to slow enemy down if necessary
    // save as horizontal speed temporarily
    // then do a sub to move horizontally
    pla();
    sta(Enemy_X_Speed, x);
    return 0;
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda(EnemyIntervalTimer, x);
    BNE(ChkKillGoomba);
    sta(Enemy_State, x);
    // if enemy timer not expired yet,
    // skip ahead to something else
    // otherwise initialize enemy state to normal
    lda(FrameCounter);
    anda(0x1);
    tay();
    // get d0 of frame counter
    // use as Y and increment for movement direction
    iny();
    sty(Enemy_MovingDir, x);
    dey();
    lda(PrimaryHardMode);
    BEQ(SetRSpd);
    // store as pseudorandom movement direction
    // decrement for use as pointer
    // check primary hard mode flag
    // if not set, use pointer as-is
    iny();
    iny();
    JMP(SetRSpd);
}

int SetRSpd() {
    // otherwise increment 2 bytes to next data
    // load and store new horizontal speed
    lda(offsetof(G, RevivedXSpeed), y);
    sta(Enemy_X_Speed, x);
    // and leave
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
    // check to see if enemy timer has reached
    // a certain point, and branch to leave if not
    lda(Enemy_ID, x);
    cmp(Goomba);
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // check for goomba object
    // branch if not found
    // otherwise, kill this goomba object
    // leave!
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
    // check for any vertical force or speed
    // branch if any found
    // initialize something here
    // check current vs. original vertical coordinate
    cmp(RedPTroopaOrigXPos, x);
    BCS(MoveRedPTUpOrDown);
    lda(FrameCounter);
    anda(0b111);
    BNE(NoIncPT);
    inc(Enemy_Y_Position, x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // if current => original, skip ahead to more code
    // get frame counter
    // mask out all but 3 LSB
    // if any bits set, branch to leave
    // otherwise increment red paratroopa's vertical position
    // leave
    return 0;
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda(Enemy_Y_Position, x);
    // check current vs. central vertical coordinate
    cmp(RedPTroopaCenterYPos, x);
    BCC(MovPTDwn);
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}

int MovPTDwn() {
    // if current < central, jump to move downwards
    // otherwise jump to move upwards
    // move downwards
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}

int MoveFlyGreenPTroopa() {
    JSR(XMoveCntr_GreenPTroopa);
    JSR(MoveWithXMCntrs);
    ldy(0x1);
    // do sub to increment primary and secondary counters
    // do sub to move green paratroopa accordingly, and horizontally
    // set Y to move green paratroopa down
    lda(FrameCounter);
    anda(0b11);
    BNE(NoMGPT);
    // check frame counter 2 LSB for any bits set
    // branch to leave if set to move up/down every fourth frame
    lda(FrameCounter);
    anda(0b1000000);
    BNE(YSway);
    ldy(0xff);
    JMP(YSway);
}

int YSway() {
    // check frame counter for d6 set
    // branch to move green paratroopa down if set
    // otherwise set Y to move green paratroopa up
    // store adder here
    sty(0x0);
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x0);
    // add or subtract from vertical position
    // to give green paratroopa a wavy flight
    sta(Enemy_Y_Position, x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // leave!
    return 0;
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(0x13);
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(0x1);
    // store value here
    lda(FrameCounter);
    anda(0b11);
    BNE(NoIncXM);
    ldy(XMoveSecondaryCounter, x);
    lda(XMovePrimaryCounter, x);
    // branch to leave if not on
    // every fourth frame
    // get secondary counter
    // get primary counter
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
    // increment primary counter and leave
    inc(XMovePrimaryCounter, x);
    return 0;
    JMP(DecSeXM);
}

int DecSeXM() {
    // put secondary counter in A
    tya();
    BEQ(IncPXM);
    dec(XMoveSecondaryCounter, x);
    // if secondary counter at zero, branch back
    // otherwise decrement secondary counter and leave
    return 0;
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda(XMoveSecondaryCounter, x);
    // save secondary counter to stack
    pha();
    ldy(0x1);
    // set value here by default
    lda(XMovePrimaryCounter, x);
    anda(0b10);
    BNE(XMRight);
    // if d1 of primary counter is
    // set, branch ahead of this part here
    lda(XMoveSecondaryCounter, x);
    eor(0xff);
    clc();
    // otherwise change secondary
    // counter to two's compliment
    adc(0x1);
    sta(XMoveSecondaryCounter, x);
    ldy(0x2);
    JMP(XMRight);
}

int XMRight() {
    // load alternate value here
    // store as moving direction
    sty(Enemy_MovingDir, x);
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    pla();
    sta(XMoveSecondaryCounter, x);
    // save value obtained from sub here
    // get secondary counter from stack
    // and return to original place
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
    // check enemy state for d5 set
    // branch if set to move defeated bloober
    // use secondary hard mode flag as offset
    // get LSFR
    // mask out bits in LSFR using bitmask loaded with offset
    // if any bits set, skip ahead to make swim
    txa();
    lsr();
    BCC(FBLeft);
    ldy(Player_MovingDir);
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // check to see if on second or fourth slot (1 or 3)
    // if not, branch to figure out moving direction
    // otherwise, load player's moving direction and
    // do an unconditional branch to set
    // set left moving direction by default
    ldy(0x2);
    JSR(PlayerEnemyDiff);
    BPL(SBMDir);
    dey();
    JMP(SBMDir);
}

int SBMDir() {
    // get horizontal difference between player and bloober
    // if enemy to the right of player, keep left
    // otherwise decrement to set right moving direction
    // set moving direction of bloober, then continue on here
    sty(Enemy_MovingDir, x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda(Enemy_Y_Position, x);
    // execute sub to make bloober swim characteristically
    // get vertical coordinate
    sec();
    sbc(Enemy_Y_MoveForce, x);
    cmp(0x20);
    BCC(SwimX);
    sta(Enemy_Y_Position, x);
    JMP(SwimX);
}

int SwimX() {
    // subtract movement force
    // check to see if position is above edge of status bar
    // if so, don't do it
    // otherwise, set new vertical position, make bloober swim
    // check moving direction
    ldy(Enemy_MovingDir, x);
    dey();
    BNE(LeftSwim);
    // if moving to the left, branch to second part
    lda(Enemy_X_Position, x);
    clc();
    // add movement speed to horizontal coordinate
    adc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // store result as new horizontal coordinate
    lda(Enemy_PageLoc, x);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // add carry to page location
    // store as new page location and leave
    return 0;
    JMP(LeftSwim);
}

int LeftSwim() {
    lda(Enemy_X_Position, x);
    sec();
    // subtract movement speed from horizontal coordinate
    sbc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // store result as new horizontal coordinate
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // subtract borrow from page location
    // store as new page location and leave
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
    // get enemy's movement counter
    // check for d1 set
    // branch if set
    lda(FrameCounter);
    anda(0b111);
    pha();
    lda(BlooperMoveCounter, x);
    lsr();
    BCS(SlowSwim);
    pla();
    BNE(BSwimE);
    // get 3 LSB of frame counter
    // and save it to the stack
    // get enemy's movement counter
    // check for d0 set
    // branch if set
    // pull 3 LSB of frame counter from the stack
    // branch to leave, execute code only every eighth frame
    lda(Enemy_Y_MoveForce, x);
    clc();
    // add to movement force to speed up swim
    adc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    // set movement force
    // set as movement speed
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
    // pull 3 LSB of frame counter from the stack
    // branch to leave, execute code only every eighth frame
    lda(Enemy_Y_MoveForce, x);
    sec();
    // subtract from movement force to slow swim
    sbc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    BNE(NoSSw);
    inc(BlooperMoveCounter, x);
    // set movement force
    // set as movement speed
    // if any speed, branch to leave
    // otherwise increment movement counter
    lda(0x2);
    sta(EnemyIntervalTimer, x);
    JMP(NoSSw);
}

int NoSSw() {
    // set enemy's timer
    // leave
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
    // get frame counter
    // check for d0 set
    // branch to leave on every other frame
    // otherwise increment vertical coordinate
    // leave
    return 0;
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda(Enemy_Y_Position, x);
    adc(0x10);
    cmp(Player_Y_Position);
    BCC(Floatdown);
    // get vertical coordinate
    // add sixteen pixels
    // compare result with player's vertical coordinate
    // if modified vertical less than player's, branch
    lda(0x0);
    sta(BlooperMoveCounter, x);
    // otherwise nullify movement counter
    return 0;
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda(Enemy_State, x);
    // check bullet bill's enemy object state for d5 set
    anda(0b100000);
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // if not set, continue with movement code
    // otherwise jump to move defeated bullet bill downwards
    // set bullet bill's horizontal speed
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
    // check cheep-cheep's enemy object state
    // for d5 set
    // if not set, continue with movement code
    // otherwise jump to move defeated cheep-cheep downwards
    // save enemy state in $03
    sta(0x3);
    lda(Enemy_ID, x);
    // get enemy identifier
    sec();
    sbc(0xa);
    tay();
    lda(offsetof(G, SwimCCXMoveData), y);
    // subtract ten for cheep-cheep identifiers
    // use as offset
    // load value here
    sta(0x2);
    lda(Enemy_X_MoveForce, x);
    // load horizontal force
    sec();
    sbc(0x2);
    sta(Enemy_X_MoveForce, x);
    lda(Enemy_X_Position, x);
    sbc(0x0);
    sta(Enemy_X_Position, x);
    // subtract preset value from horizontal force
    // store as new horizontal force
    // get horizontal coordinate
    // subtract borrow (thus moving it slowly)
    // and save as new horizontal coordinate
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // subtract borrow again, this time from the
    // page location, then save
    lda(0x20);
    sta(0x2);
    cpx(0x2);
    BCC(ExSwCC);
    lda(CheepCheepMoveMFlag, x);
    cmp(0x10);
    BCC(CCSwimUpwards);
    // save new value here
    // check enemy object offset
    // if in first or second slot, branch to leave
    // check movement flag
    // if movement speed set to $00,
    // branch to move upwards
    lda(Enemy_YMF_Dummy, x);
    clc();
    adc(0x2);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x3);
    sta(Enemy_Y_Position, x);
    // add preset value to dummy variable to get carry
    // and save dummy
    // get vertical coordinate
    // add carry to it plus enemy state to slowly move it downwards
    // save as new vertical coordinate
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
    // subtract preset value to dummy variable to get borrow
    // and save dummy
    // get vertical coordinate
    // subtract borrow to it plus enemy state to slowly move it upwards
    // save as new vertical coordinate
    lda(Enemy_Y_HighPos, x);
    sbc(0x0);
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta(Enemy_Y_HighPos, x);
    ldy(0x0);
    lda(Enemy_Y_Position, x);
    // save new page location here
    // load movement speed to upwards by default
    // get vertical coordinate
    sec();
    sbc(CheepCheepOrigYPos, x);
    BPL(YPDiff);
    ldy(0x10);
    // subtract original coordinate from current
    // if result positive, skip to next part
    // otherwise load movement speed to downwards
    eor(0xff);
    clc();
    adc(0x1);
    JMP(YPDiff);
}

int YPDiff() {
    // get two's compliment of result
    // to obtain total difference of original vs. current
    // if difference between original vs. current vertical
    cmp(0xf);
    BCC(ExSwCC);
    // coordinates < 15 pixels, leave movement speed alone
    tya();
    sta(CheepCheepMoveMFlag, x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // otherwise change movement speed
    // leave
    return 0;
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda(Enemy_OffscreenBits);
    anda(0b1000);
    // get offscreen information
    // check for d3 set
    // if so, branch to leave
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
    // if master timer control set, branch
    // ahead of this part
    // load spinning speed of firebar
    // modify current spinstate
    // mask out all but 5 LSB
    // and store as new high byte of spinstate
    // get high byte of spinstate
    lda(FirebarSpinState_High, x);
    ldy(Enemy_ID, x);
    // check enemy identifier
    cpy(0x1f);
    BCC(SetupGFB);
    cmp(0x8);
    BEQ(SkpFSte);
    // if < $1f (long firebar), branch
    // check high byte of spinstate
    // if eight, branch to change
    cmp(0x18);
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(0x1);
    // add one to spinning thing to avoid horizontal state
    sta(FirebarSpinState_High, x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // save high byte of spinning thing, modified or otherwise
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
    // get relative coordinates to screen
    // do a sub here (residual, too early to be used now)
    // get OAM data offset
    // get relative vertical coordinate
    // store as Y in OAM data
    // also save here
    // get relative horizontal coordinate
    // store as X in OAM data
    // also save here
    lda(0x1);
    sta(0x0);
    JSR(FirebarCollision);
    ldy(0x5);
    // set $01 value here (not necessary)
    // draw fireball part and do collision detection
    // load value for short firebars by default
    lda(Enemy_ID, x);
    cmp(0x1f);
    BCC(SetMFbar);
    ldy(0xb);
    JMP(SetMFbar);
}

int SetMFbar() {
    // are we doing a long firebar?
    // no, branch then
    // otherwise load value for long firebars
    // store maximum value for length of firebars
    sty(0xed);
    lda(0x0);
    sta(0x0);
    JMP(DrawFbar);
}

int DrawFbar() {
    // initialize counter here
    // load high byte of spinstate
    lda(0xef);
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(0x0);
    // get fireball position data depending on firebar part
    // position it properly, draw it and do collision detection
    // check which firebar part
    cmp(0x4);
    BNE(NextFbar);
    ldy(DuplicateObj_Offset);
    lda(Enemy_SprDataOffset, y);
    sta(0x6);
    JMP(NextFbar);
}

int NextFbar() {
    // if we arrive at fifth firebar part,
    // get offset from long firebar and load OAM data offset
    // using long firebar offset, then store as new one here
    // move onto the next firebar part
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
    // store mirror data elsewhere
    sta(0x5);
    ldy(0x6);
    lda(0x1);
    lsr(0x5);
    BCS(AddHA);
    // load OAM data offset for firebar
    // load horizontal adder we got from position loader
    // shift LSB of mirror data
    // if carry was set, skip this part
    eor(0xff);
    adc(0x1);
    JMP(AddHA);
}

int AddHA() {
    // otherwise get two's compliment of horizontal adder
    // add horizontal coordinate relative to screen to
    clc();
    adc(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    sta(0x6);
    cmp(Enemy_Rel_XPos);
    BCS(SubtR1);
    // horizontal adder, modified or otherwise
    // store as X coordinate here
    // store here for now, note offset is saved in Y still
    // compare X coordinate of sprite to original X of firebar
    // if sprite coordinate => original coordinate, branch
    lda(Enemy_Rel_XPos);
    sec();
    sbc(0x6);
    // otherwise subtract sprite X from the
    // original one and skip this part
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // subtract original X from the
    sec();
    sbc(Enemy_Rel_XPos);
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // current sprite X
    // if difference of coordinates within a certain range,
    cmp(0x59);
    BCC(VAHandl);
    lda(0xf8);
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // continue by handling vertical adder
    // otherwise, load offscreen Y coordinate
    // and unconditionally branch to move sprite offscreen
    // if vertical relative coordinate offscreen,
    lda(Enemy_Rel_YPos);
    cmp(0xf8);
    // skip ahead of this part and write into sprite Y coordinate
    BEQ(SetVFbr);
    lda(0x2);
    lsr(0x5);
    BCS(AddVA);
    // load vertical adder we got from position loader
    // shift LSB of mirror data one more time
    // if carry was set, skip this part
    eor(0xff);
    adc(0x1);
    JMP(AddVA);
}

int AddVA() {
    // otherwise get two's compliment of second part
    // add vertical coordinate relative to screen to
    clc();
    adc(Enemy_Rel_YPos);
    JMP(SetVFbr);
}

int SetVFbr() {
    // the second data, modified or otherwise
    // store as Y coordinate here
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
    // run sub here to draw current tile of firebar
    // return OAM data offset and save
    // to the stack for now
    // if star mario invincibility timer
    // or master timer controls set
    // then skip all of this
    // otherwise initialize counter
    ldy(Player_Y_HighPos);
    dey();
    BNE(NoColFB);
    ldy(Player_Y_Position);
    lda(PlayerSize);
    BNE(AdjSm);
    // if player's vertical high byte offscreen,
    // skip all of this
    // get player's vertical position
    // get player's size
    // if player small, branch to alter variables
    lda(CrouchingFlag);
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // if player big and not crouching, jump ahead
    // if small or big but crouching, execute this part
    inc(0x5);
    inc(0x5);
    // first increment our counter twice (setting $02 as flag)
    tya();
    clc();
    adc(0x18);
    // then add 24 pixels to the player's
    // vertical coordinate
    tay();
    JMP(BigJp);
}

int BigJp() {
    // get vertical coordinate, altered or otherwise, from Y
    tya();
    JMP(FBCLoop);
}

int FBCLoop() {
    // subtract vertical position of firebar
    sec();
    sbc(0x7);
    BPL(ChkVFBD);
    eor(0xff);
    clc();
    // from the vertical coordinate of the player
    // if player lower on the screen than firebar,
    // skip two's compliment part
    // otherwise get two's compliment
    adc(0x1);
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // if difference => 8 pixels, skip ahead of this part
    cmp(0x8);
    BCS(Chk2Ofs);
    lda(0x6);
    cmp(0xf0);
    // if firebar on far right on the screen, skip this,
    // because, really, what's the point?
    BCS(Chk2Ofs);
    lda(((Sprite_X_Position) + (4)));
    // get OAM X coordinate for sprite #1
    clc();
    adc(0x4);
    sta(0x4);
    sec();
    sbc(0x6);
    BPL(ChkFBCl);
    eor(0xff);
    clc();
    // add four pixels
    // store here
    // subtract horizontal coordinate of firebar
    // from the X coordinate of player's sprite 1
    // if modded X coordinate to the right of firebar
    // skip two's compliment part
    // otherwise get two's compliment
    adc(0x1);
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // if difference < 8 pixels, collision, thus branch
    cmp(0x8);
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // to process
    // if value of $02 was set earlier for whatever reason,
    lda(0x5);
    cmp(0x2);
    // branch to increment OAM offset and leave, no collision
    BEQ(NoColFB);
    ldy(0x5);
    // otherwise get temp here and use as offset
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, FirebarYPos), y);
    inc(0x5);
    // add value loaded with offset to player's vertical coordinate
    // then increment temp and jump back
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // set movement direction by default
    ldx(0x1);
    lda(0x4);
    cmp(0x6);
    BCS(SetSDir);
    inx();
    JMP(SetSDir);
}

int SetSDir() {
    // if OAM X coordinate of player's sprite 1
    // is greater than horizontal coordinate of firebar
    // then do not alter movement direction
    // otherwise increment it
    // store movement direction here
    stx(Enemy_MovingDir);
    ldx(0x0);
    lda(0x0);
    // save value written to $00 to stack
    pha();
    JSR(InjurePlayer);
    // perform sub to hurt or kill player
    pla();
    sta(0x0);
    JMP(NoColFB);
}

int NoColFB() {
    // get value of $00 from stack
    // get OAM data offset
    pla();
    clc();
    // add four to it and save
    adc(0x4);
    sta(0x6);
    ldx(ObjectOffset);
    // get enemy object buffer offset and leave
    return 0;
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(0b1111);
    // save high byte of spinstate to the stack
    // mask out low nybble
    cmp(0x9);
    BCC(GetHAdder);
    eor(0b1111);
    // if lower than $09, branch ahead
    // otherwise get two's compliment to oscillate
    clc();
    adc(0x1);
    JMP(GetHAdder);
}

int GetHAdder() {
    // store result, modified or not, here
    sta(0x1);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // load number of firebar ball where we're at
    // load offset to firebar position data
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // add oscillated high byte of spinstate
    // to offset here and use as new offset
    // get data here and store as horizontal adder
    sta(0x1);
    pla();
    pha();
    // pull whatever was in A from the stack
    // save it again because we still need it
    clc();
    adc(0x8);
    anda(0b1111);
    cmp(0x9);
    // add eight this time, to get vertical adder
    // mask out high nybble
    // if lower than $09, branch ahead
    BCC(GetVAdder);
    eor(0b1111);
    // otherwise get two's compliment
    clc();
    adc(0x1);
    JMP(GetVAdder);
}

int GetVAdder() {
    // store result here
    sta(0x2);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // load offset to firebar position data again
    clc();
    adc(0x2);
    // this time add value in $02 to offset here and use as offset
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // get data here and store as vertica adder
    sta(0x2);
    pla();
    lsr();
    // pull out whatever was in A one last time
    // divide by eight or shift three to the right
    lsr();
    lsr();
    tay();
    lda(offsetof(G, FirebarMirrorData), y);
    sta(0x3);
    // use as offset
    // load mirroring data here
    // store
    return 0;
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(FlyCC);
    // check cheep-cheep's enemy state
    // for d5 set
    // branch to continue code if not set
    lda(0x0);
    sta(Enemy_SprAttrib, x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // otherwise clear sprite attributes
    // and jump to move defeated cheep-cheep downwards
    // move cheep-cheep horizontally based on speed and force
    JSR(MoveEnemyHorizontally);
    ldy(0xd);
    lda(0x5);
    JSR(SetXMoveAmt);
    // set vertical movement amount
    // set maximum speed
    // branch to impose gravity on flying cheep-cheep
    lda(Enemy_Y_MoveForce, x);
    lsr();
    lsr();
    // get vertical movement force and
    // move high nybble to low
    lsr();
    lsr();
    tay();
    lda(Enemy_Y_Position, x);
    sec();
    // save as offset (note this tends to go into reach of code)
    // get vertical position
    // subtract pseudorandom value based on offset from position
    sbc(offsetof(G, PRandomSubtracter), y);
    BPL(AddCCF);
    // if result within top half of screen, skip this part
    eor(0xff);
    clc();
    // otherwise get two's compliment
    adc(0x1);
    JMP(AddCCF);
}

int AddCCF() {
    // if result or two's compliment greater than eight,
    cmp(0x8);
    BCS(BPGet);
    // skip to the end without changing movement force
    lda(Enemy_Y_MoveForce, x);
    clc();
    adc(0x10);
    // otherwise add to it
    sta(Enemy_Y_MoveForce, x);
    lsr();
    // move high nybble to low again
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}

int BPGet() {
    // load bg priority data and store (this is very likely
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
    // check lakitu's enemy state
    // for d5 set
    // if not set, continue with code
    // otherwise jump to move defeated lakitu downwards
    // if lakitu's enemy state not set at all,
    lda(Enemy_State, x);
    BEQ(Fr12S);
    // go ahead and continue with code
    lda(0x0);
    sta(LakituMoveDirection, x);
    sta(EnemyFrenzyBuffer);
    // otherwise initialize moving direction to move to left
    // initialize frenzy buffer
    lda(0x10);
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda(Spiny);
    sta(EnemyFrenzyBuffer);
    // set spiny identifier in frenzy buffer
    ldy(0x2);
    JMP(LdLDa);
}

int LdLDa() {
    // load values
    lda(offsetof(G, LakituDiffAdj), y);
    sta(0x1, y);
    // store in zero page
    dey();
    BPL(LdLDa);
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}

int SetLSpd() {
    // do this until all values are stired
    // execute sub to set speed and create spinys
    // set movement speed returned from sub
    sta(LakituMoveSpeed, x);
    ldy(0x1);
    // set moving direction to right by default
    lda(LakituMoveDirection, x);
    anda(0x1);
    BNE(SetLMov);
    // get LSB of moving direction
    // if set, branch to the end to use moving direction
    lda(LakituMoveSpeed, x);
    eor(0xff);
    // get two's compliment of moving speed
    clc();
    adc(0x1);
    sta(LakituMoveSpeed, x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // store as new moving speed
    // increment moving direction to left
    // store moving direction
    sty(Enemy_MovingDir, x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(0x0);
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // set Y for default value
    // get horizontal difference between enemy and player
    // branch if enemy is to the right of the player
    // increment Y for left of player
    lda(0x0);
    eor(0xff);
    // get two's compliment of low byte of horizontal difference
    clc();
    adc(0x1);
    // store two's compliment as horizontal difference
    sta(0x0);
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // get low byte of horizontal difference
    lda(0x0);
    cmp(0x3c);
    // if within a certain distance of player, branch
    BCC(ChkPSpeed);
    lda(0x3c);
    // otherwise set maximum distance
    sta(0x0);
    lda(Enemy_ID, x);
    // check if lakitu is in our current enemy slot
    cmp(Lakitu);
    BNE(ChkPSpeed);
    tya();
    cmp(LakituMoveDirection, x);
    BEQ(ChkPSpeed);
    lda(LakituMoveDirection, x);
    BEQ(SetLMovD);
    dec(LakituMoveSpeed, x);
    lda(LakituMoveSpeed, x);
    // if not, branch elsewhere
    // compare contents of Y, now in A
    // to what is being used as horizontal movement direction
    // if moving toward the player, branch, do not alter
    // if moving to the left beyond maximum distance,
    // branch and alter without delay
    // decrement horizontal speed
    // if horizontal speed not yet at zero, branch to leave
    BNE(ExMoveLak);
    JMP(SetLMovD);
}

int SetLMovD() {
    // set horizontal direction depending on horizontal
    tya();
    sta(LakituMoveDirection, x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(0x0);
    anda(0b111100);
    lsr();
    // mask out all but four bits in the middle
    // divide masked difference by four
    lsr();
    sta(0x0);
    ldy(0x0);
    // store as new value
    // init offset
    lda(Player_X_Speed);
    BEQ(SubDifAdj);
    // if player not moving horizontally, branch
    lda(ScrollAmount);
    BEQ(SubDifAdj);
    iny();
    // if scroll speed not set, branch to same place
    // otherwise increment offset
    lda(Player_X_Speed);
    cmp(0x19);
    // if player not running, branch
    BCC(ChkSpinyO);
    lda(ScrollAmount);
    cmp(0x2);
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // if scroll speed below a certain amount, branch
    // to same place
    // otherwise increment once more
    // check for spiny object
    lda(Enemy_ID, x);
    cmp(Spiny);
    BNE(ChkEmySpd);
    lda(Player_X_Speed);
    // branch if not found
    // if player not moving, skip this part
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // check vertical speed
    lda(Enemy_Y_Speed, x);
    BNE(SubDifAdj);
    ldy(0x0);
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // branch if nonzero
    // otherwise reinit offset
    // get one of three saved values from earlier
    lda(0x1, y);
    ldy(0x0);
    JMP(SPixelLak);
}

int SPixelLak() {
    // get saved horizontal difference
    // subtract one for each pixel of horizontal difference
    sec();
    sbc(0x1);
    // from one of three saved values
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // branch until all pixels are subtracted, to adjust difference
    // leave!!!
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
    // get enemy offset for bowser
    // check enemy object identifier for bowser
    // if not found, branch ahead,
    // metatile removal not necessary
    // store as enemy offset here
    // if bowser in normal state, skip all of this
    BEQ(RemoveBridge);
    anda(0b1000000);
    // if bowser's state has d6 clear, skip to silence music
    BEQ(SetM2);
    lda(Enemy_Y_Position, x);
    cmp(0xe0);
    // check bowser's vertical coordinate
    // if bowser not yet low enough, skip this part ahead
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // silence music
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
    // decrement timer to control bowser's feet
    // if not expired, skip all of this
    lda(0x4);
    sta(BowserFeetCounter);
    // otherwise, set timer now
    lda(BowserBodyControls);
    eor(0x1);
    // invert bit to control bowser's feet
    sta(BowserBodyControls);
    lda(0x22);
    // put high byte of name table address here for now
    sta(0x5);
    ldy(BridgeCollapseOffset);
    lda(offsetof(G, BridgeCollapseData), y);
    // get bridge collapse offset here
    // load low byte of name table address and store here
    sta(0x4);
    ldy(VRAM_Buffer1_Offset);
    // increment vram buffer offset
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
    // set offset for tile data for sub to draw blank metatile
    // do sub here to remove bowser's bridge metatiles
    // get enemy offset
    // set new vram buffer offset
    // load the fireworks/gunfire sound into the square 2 sfx
    // queue while at the same time loading the brick
    // shatter sound into the noise sfx queue thus
    // producing the unique sound of the bridge collapsing
    // increment bridge collapse offset
    lda(BridgeCollapseOffset);
    cmp(0xf);
    BNE(NoBFall);
    JSR(InitVStf);
    // if bridge collapse offset has not yet reached
    // the end, go ahead and skip this part
    // initialize whatever vertical speed bowser has
    lda(0b1000000);
    sta(Enemy_State, x);
    // set bowser's state to one of defeated states (d6 set)
    lda(Sfx_BowserFall);
    sta(Square2SoundQueue);
    JMP(NoBFall);
}

int NoBFall() {
    // play bowser defeat sound
    // jump to code that draws bowser
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda(Enemy_State, x);
    anda(0b100000);
    // if d5 in enemy state is not set
    // then branch elsewhere to run bowser
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
    // start with last enemy slot
    // branch to kill enemy objects
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta(EnemyFrenzyBuffer);
    ldx(ObjectOffset);
    // move onto next enemy slot
    // do this until all slots are emptied
    // empty frenzy buffer
    // get enemy object offset and leave
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
    // empty frenzy buffer
    // if master timer control not set,
    // skip jump and execute code here
    // otherwise, jump over a bunch of code
    // check bowser's mouth
    lda(BowserBodyControls);
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // if bit clear, go ahead with code here
    // otherwise skip a whole section starting here
    // decrement timer to control bowser's feet
    dec(BowserFeetCounter);
    BNE(ResetMDr);
    lda(0x20);
    // if not expired, skip this part
    // otherwise, reset timer
    sta(BowserFeetCounter);
    lda(BowserBodyControls);
    eor(0b1);
    // and invert bit used
    // to control bowser's feet
    sta(BowserBodyControls);
    JMP(ResetMDr);
}

int ResetMDr() {
    // check frame counter
    lda(FrameCounter);
    anda(0b1111);
    BNE(B_FaceP);
    lda(0x2);
    sta(Enemy_MovingDir, x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // if not on every sixteenth frame, skip
    // ahead to continue code
    // otherwise reset moving/facing direction every
    // sixteen frames
    // if timer set here expired,
    lda(EnemyFrameTimer, x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // branch to next section
    // get horizontal difference between player and bowser,
    // and branch if bowser to the right of the player
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // set bowser to move and face to the right
    lda(0x2);
    sta(BowserMovementSpeed);
    // set movement speed
    lda(0x20);
    sta(EnemyFrameTimer, x);
    sta(BowserFireBreathTimer);
    // set timer here
    // set timer used for bowser's flame
    lda(Enemy_X_Position, x);
    cmp(0xc8);
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // if bowser to the right past a certain point,
    // skip ahead to some other section
    // get frame counter
    lda(FrameCounter);
    anda(0b11);
    BNE(HammerChk);
    // execute this code every fourth frame, otherwise branch
    lda(Enemy_X_Position, x);
    cmp(BowserOrigXPos);
    BNE(GetDToO);
    // if bowser not at original horizontal position,
    // branch to skip this part
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // get pseudorandom offset
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(MaxRangeFromOrigin);
    JMP(GetDToO);
}

int GetDToO() {
    lda(Enemy_X_Position, x);
    clc();
    adc(BowserMovementSpeed);
    // add movement speed to bowser's horizontal
    // coordinate and save as new horizontal position
    sta(Enemy_X_Position, x);
    ldy(Enemy_MovingDir, x);
    cpy(0x1);
    // if bowser moving and facing to the right, skip ahead
    BEQ(HammerChk);
    ldy(0xff);
    sec();
    sbc(BowserOrigXPos);
    BPL(CompDToO);
    // set default movement speed here (move left)
    // get difference of current vs. original
    // horizontal position
    // if current position to the right of original, skip ahead
    eor(0xff);
    clc();
    // get two's compliment
    adc(0x1);
    ldy(0x1);
    JMP(CompDToO);
}

int CompDToO() {
    // set alternate movement speed here (move right)
    // compare difference with pseudorandom value
    cmp(MaxRangeFromOrigin);
    BCC(HammerChk);
    sty(BowserMovementSpeed);
    JMP(HammerChk);
}

int HammerChk() {
    // if difference < pseudorandom value, leave speed alone
    // otherwise change bowser's movement speed
    // if timer set here not expired yet, skip ahead to
    lda(EnemyFrameTimer, x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda(WorldNumber);
    // some other section of code
    // otherwise start by moving bowser downwards
    // check world number
    cmp(World6);
    BCC(SetHmrTmr);
    // if world 1-5, skip this part (not time to throw hammers yet)
    lda(FrameCounter);
    anda(0b11);
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // check to see if it's time to execute sub
    // if not, skip sub, otherwise
    // execute sub on every fourth frame to spawn misc object (hammer)
    // get current vertical position
    lda(Enemy_Y_Position, x);
    cmp(0x80);
    BCC(ChkFireB);
    // if still above a certain point
    // then skip to world number check for flames
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // get pseudorandom offset
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(EnemyFrameTimer, x);
    JMP(SkipToFB);
}

int SkipToFB() {
    // get value using pseudorandom offset
    // set for timer here
    // jump to execute flames code
    JMP(ChkFireB);
    JMP(MakeBJump);
}

int MakeBJump() {
    // if timer not yet about to expire,
    cmp(0x1);
    BNE(ChkFireB);
    dec(Enemy_Y_Position, x);
    JSR(InitVStf);
    // skip ahead to next part
    // otherwise decrement vertical coordinate
    // initialize movement amount
    lda(0xfe);
    sta(Enemy_Y_Speed, x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // set vertical speed to move bowser upwards
    // check world number here
    lda(WorldNumber);
    cmp(World8);
    BEQ(SpawnFBr);
    cmp(World6);
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // world 8?
    // if so, execute this part here
    // world 6-7?
    // if so, skip this part here
    // check timer here
    lda(BowserFireBreathTimer);
    BNE(BowserGfxHandler);
    // if not expired yet, skip all of this
    lda(0x20);
    sta(BowserFireBreathTimer);
    // set timer here
    lda(BowserBodyControls);
    eor(0b10000000);
    sta(BowserBodyControls);
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // invert bowser's mouth bit to open
    // and close bowser's mouth
    // if bowser's mouth open, loop back
    // get timing for bowser's flame
    ldy(SecondaryHardMode);
    BEQ(SetFBTmr);
    // if secondary hard mode flag not set, skip this
    sec();
    sbc(0x10);
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // otherwise subtract from value in A
    // set value as timer here
    sta(BowserFireBreathTimer);
    lda(BowserFlame);
    sta(EnemyFrenzyBuffer);
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(0x10);
    lda(Enemy_MovingDir, x);
    // do a sub here to process bowser's front
    // load default value here to position bowser's rear
    // check moving direction
    lsr();
    BCC(CopyFToR);
    ldy(0xf0);
    JMP(CopyFToR);
}

int CopyFToR() {
    // if moving left, use default
    // otherwise load alternate positioning value here
    // move bowser's rear object position value to A
    tya();
    clc();
    adc(Enemy_X_Position, x);
    ldy(DuplicateObj_Offset);
    sta(Enemy_X_Position, y);
    // add to bowser's front object horizontal coordinate
    // get bowser's rear object offset
    // store A as bowser's rear horizontal coordinate
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x8);
    sta(Enemy_Y_Position, y);
    // add eight pixels to bowser's front object
    // vertical coordinate and store as vertical coordinate
    // for bowser's rear
    lda(Enemy_State, x);
    sta(Enemy_State, y);
    // copy enemy state directly from front to rear
    lda(Enemy_MovingDir, x);
    sta(Enemy_MovingDir, y);
    lda(ObjectOffset);
    // copy moving direction also
    // save enemy object offset of front to stack
    pha();
    ldx(DuplicateObj_Offset);
    // put enemy object offset of rear as current
    stx(ObjectOffset);
    lda(Bowser);
    sta(Enemy_ID, x);
    JSR(ProcessBowserHalf);
    // set bowser's enemy identifier
    // store in bowser's rear object
    // do a sub here to process bowser's rear
    pla();
    sta(ObjectOffset);
    // get original enemy object offset
    tax();
    lda(0x0);
    // nullify bowser's front/rear graphics flag
    sta(BowserGfxFlag);
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // leave!
    return 0;
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc(BowserGfxFlag);
    JSR(RunRetainerObj);
    // increment bowser's graphics flag, then run subroutines
    // to get offscreen bits, relative position and draw bowser (finally!)
    lda(Enemy_State, x);
    BNE(ExBGfxH);
    // if either enemy object not in normal state, branch to leave
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
    // load counter as offset
    // increment
    // mask out all but 3 LSB
    // to keep in range of 0-7
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
    // if master timer control flag set,
    // skip all of this
    // load default movement force
    ldy(SecondaryHardMode);
    BEQ(SFlmX);
    lda(0x60);
    JMP(SFlmX);
}

int SFlmX() {
    // if secondary hard mode flag not set, use default
    // otherwise load alternate movement force to go faster
    // store value here
    sta(0x0);
    lda(Enemy_X_MoveForce, x);
    sec();
    // subtract value from movement force
    sbc(0x0);
    sta(Enemy_X_MoveForce, x);
    // save new value
    lda(Enemy_X_Position, x);
    sbc(0x1);
    sta(Enemy_X_Position, x);
    // subtract one from horizontal position to move
    // to the left
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    // subtract borrow from page location
    sta(Enemy_PageLoc, x);
    ldy(BowserFlamePRandomOfs, x);
    lda(Enemy_Y_Position, x);
    cmp(offsetof(G, FlameYPosData), y);
    BEQ(SetGfxF);
    // get some value here and use as offset
    // load vertical coordinate
    // compare against coordinate data using $0417,x as offset
    // if equal, branch and do not modify coordinate
    clc();
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_Y_Position, x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // otherwise add value here to coordinate and store
    // as new vertical coordinate
    // get new relative coordinates
    JSR(RelativeEnemyPosition);
    lda(Enemy_State, x);
    BNE(ExFl);
    lda(0x51);
    sta(0x0);
    ldy(0x2);
    // if bowser's flame not in normal state,
    // branch to leave
    // otherwise, continue
    // write first tile number
    // load attributes without vertical flip by default
    lda(FrameCounter);
    anda(0b10);
    BEQ(FlmeAt);
    ldy(0x82);
    JMP(FlmeAt);
}

int FlmeAt() {
    // invert vertical flip bit every 2 frames
    // if d1 not set, write default value
    // otherwise write value with vertical flip bit set
    // set bowser's flame sprite attributes here
    sty(0x1);
    ldy(Enemy_SprDataOffset, x);
    // get OAM data offset
    ldx(0x0);
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda(Enemy_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // get Y relative coordinate of current enemy object
    // write into Y coordinate of OAM data
    lda(0x0);
    sta(Sprite_Tilenumber, y);
    inc(0x0);
    // write current tile number into OAM data
    // increment tile number to draw more bowser's flame
    lda(0x1);
    sta(Sprite_Attributes, y);
    // write saved attributes into OAM data
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // write X relative coordinate of current enemy object
    clc();
    adc(0x8);
    sta(Enemy_Rel_XPos);
    // then add eight to it and store
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x3);
    // increment Y four times to move onto the next OAM
    // move onto the next OAM, and branch if three
    // have not yet been done
    BCC(DrawFlameLoop);
    ldx(ObjectOffset);
    JSR(GetEnemyOffscreenBits);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_OffscreenBits);
    lsr();
    // reload original enemy offset
    // get offscreen information
    // get OAM data offset
    // get enemy object offscreen bits
    // move d0 to carry and result to stack
    pha();
    BCC(M3FOfs);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(M3FOfs);
}

int M3FOfs() {
    // branch if carry not set
    // otherwise move sprite offscreen, this part likely
    // residual since flame is only made of three sprites
    // get bits from stack
    pla();
    lsr();
    // move d1 to carry and move bits back to stack
    pha();
    BCC(M2FOfs);
    lda(0xf8);
    // branch if carry not set again
    // otherwise move third sprite offscreen
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // get bits from stack again
    pla();
    lsr();
    // move d2 to carry and move bits back to stack again
    pha();
    BCC(M1FOfs);
    lda(0xf8);
    // branch if carry not set yet again
    // otherwise move second sprite offscreen
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // get bits from stack one last time
    pla();
    lsr();
    BCC(ExFlmeD);
    // move d3 to carry
    // branch if carry not set one last time
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // otherwise move first sprite offscreen
    // leave
    return 0;
    JMP(RunFireworks);
}

int RunFireworks() {
    dec(ExplosionTimerCounter, x);
    BNE(SetupExpl);
    // decrement explosion timing counter here
    // if not expired, skip this part
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    inc(ExplosionGfxCounter, x);
    // reset counter
    // increment explosion graphics counter
    lda(ExplosionGfxCounter, x);
    cmp(0x3);
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // check explosion graphics counter
    // if at a certain point, branch to kill this object
    // get relative coordinates of explosion
    JSR(RelativeEnemyPosition);
    lda(Enemy_Rel_YPos);
    sta(Fireball_Rel_YPos);
    lda(Enemy_Rel_XPos);
    // copy relative coordinates
    // from the enemy object to the fireball object
    // first vertical, then horizontal
    sta(Fireball_Rel_XPos);
    ldy(Enemy_SprDataOffset, x);
    lda(ExplosionGfxCounter, x);
    JSR(DrawExplosion_Fireworks);
    // get OAM data offset
    // get explosion graphics counter
    // do a sub to draw the explosion then leave
    return 0;
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(0x0);
    // disable enemy buffer flag
    sta(Enemy_Flag, x);
    lda(Sfx_Blast);
    // play fireworks/gunfire sound
    sta(Square2SoundQueue);
    lda(0x5);
    // set part of score modifier for 500 points
    sta(((DigitModifier) + (4)));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(0x0);
    // initialize enemy frenzy buffer
    sta(EnemyFrenzyBuffer);
    lda(StarFlagTaskControl);
    cmp(0x5);
    // check star flag object task number here
    // if greater than 5, branch to exit
    BCS(StarFlagExit);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(0x5);
    lda(((GameTimerDisplay) + (2)));
    // set default state for star flag object
    // get game timer's last digit
    cmp(0x1);
    BEQ(SetFWC);
    ldy(0x3);
    // if last digit of game timer set to 1, skip ahead
    // otherwise load new value for state
    cmp(0x3);
    BEQ(SetFWC);
    ldy(0x0);
    // if last digit of game timer set to 3, skip ahead
    // otherwise load one more potential value for state
    cmp(0x6);
    BEQ(SetFWC);
    lda(0xff);
    JMP(SetFWC);
}

int SetFWC() {
    // if last digit of game timer set to 6, skip ahead
    // otherwise set value for no fireworks
    // set fireworks counter here
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
    // check all game timer digits for any intervals left
    ora(((GameTimerDisplay) + (1)));
    ora(((GameTimerDisplay) + (2)));
    BEQ(IncrementSFTask1);
    // if no time left on game timer at all, branch to next task
    lda(FrameCounter);
    anda(0b100);
    BEQ(NoTTick);
    // check frame counter for d2 set (skip ahead
    // for four frames every four frames) branch if not set
    lda(Sfx_TimerTick);
    sta(Square2SoundQueue);
    JMP(NoTTick);
}

int NoTTick() {
    // load timer tick sound
    // set offset here to subtract from game timer's last digit
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
    // load offset for mario's score by default
    // check player on the screen
    // if mario, do not change
    // otherwise load offset for luigi's score
    // award 50 points per game timer interval
    JSR(DigitsMathRoutine);
    lda(CurrentPlayer);
    asl();
    asl();
    // get player on the screen (or 500 points per
    // fireworks explosion if branched here from there)
    // shift to high nybble
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
    // check star flag's vertical position
    // against preset value
    // if star flag higher vertically, branch to other code
    // otherwise, raise star flag by one pixel
    // and skip this part here
    // check fireworks counter
    lda(FireworksCounter);
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // if no fireworks left to go off, skip this part
    // if no fireworks set to go off, skip this part
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
    // get relative coordinates of star flag
    // get OAM data offset
    // do four sprites
    // get relative vertical coordinate
    lda(Enemy_Rel_YPos);
    clc();
    adc(offsetof(G, StarFlagYPosAdder), x);
    sta(Sprite_Y_Position, y);
    lda(offsetof(G, StarFlagTileData), x);
    sta(Sprite_Tilenumber, y);
    lda(0x22);
    sta(Sprite_Attributes, y);
    lda(Enemy_Rel_XPos);
    // add Y coordinate adder data
    // store as Y coordinate
    // get tile number
    // store as tile number
    // set palette and background priority bits
    // store as attributes
    // get relative horizontal coordinate
    clc();
    adc(offsetof(G, StarFlagXPosAdder), x);
    sta(Sprite_X_Position, y);
    // add X coordinate adder data
    // store as X coordinate
    iny();
    iny();
    iny();
    // increment OAM data offset four bytes
    // for next sprite
    iny();
    dex();
    BPL(DSFLoop);
    ldx(ObjectOffset);
    // move onto next sprite
    // do this until all sprites are done
    // get enemy object offset and leave
    return 0;
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // do sub to draw star flag
    lda(0x6);
    sta(EnemyIntervalTimer, x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc(StarFlagTaskControl);
    // move onto next task
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
    // otherwise leave
    // $00 - used to store horizontal difference between player and piranha plant
    // check enemy state
    // if set at all, branch to leave
    // check enemy's timer here
    // branch to end if not yet expired
    // check movement flag
    // if moving, skip to part ahead
    // if currently rising, branch
    // to move enemy upwards out of pipe
    // get horizontal difference between player and
    // piranha plant, and branch if enemy to right of player
    // otherwise get saved horizontal difference
    eor(0xff);
    clc();
    // and change to two's compliment
    adc(0x1);
    sta(0x0);
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(0x0);
    // get saved horizontal difference
    cmp(0x21);
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda(PiranhaPlant_Y_Speed, x);
    // get vertical speed
    eor(0xff);
    clc();
    // change to two's compliment
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
    // save vertical coordinate here
    // get frame counter
    lsr();
    BCC(PutinPipe);
    lda(TimerControl);
    BNE(PutinPipe);
    lda(Enemy_Y_Position, x);
    // branch to leave if d0 set (execute code every other frame)
    // get master timer control
    // branch to leave if set (likely not necessary)
    // get current vertical coordinate
    clc();
    adc(PiranhaPlant_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    cmp(0x0);
    BNE(PutinPipe);
    // add vertical speed to move up or down
    // save as new vertical coordinate
    // compare against low or high coordinate
    // branch to leave if not yet reached
    lda(0x0);
    sta(PiranhaPlant_MoveFlag, x);
    // otherwise clear movement flag
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
    // set background priority bit in sprite
    // attributes to give illusion of being inside pipe
    // then leave
    // $07 - spinning speed
    // save spinning speed here
    // check spinning direction
    // if moving counter-clockwise, branch to other part
    // possibly residual ldy
    lda(FirebarSpinState_Low, x);
    clc();
    adc(0x7);
    // add spinning speed to what would normally be
    // the horizontal speed
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // add carry to what would normally be the vertical speed
    adc(0x0);
    return 0;
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(0x8);
    // possibly residual ldy
    lda(FirebarSpinState_Low, x);
    sec();
    sbc(0x7);
    // subtract spinning speed to what would normally be
    // the horizontal speed
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // add carry to what would normally be the vertical speed
    sbc(0x0);
    return 0;
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda(Enemy_Y_HighPos, x);
    // $00 - used to hold collision flag, Y movement force + 5 or low byte of name table for rope
    // $02 - used to hold page location of rope
    // check high byte of vertical position
    cmp(0x3);
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // if far below screen, kill the object
    // get object's state (set to $ff or other platform offset)
    lda(Enemy_State, x);
    BPL(CheckBalPlatform);
    // if doing other balance platform, branch to leave
    return 0;
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda(PlatformCollisionFlag, x);
    sta(0x0);
    lda(Enemy_MovingDir, x);
    // save offset from state as Y
    // get collision flag of platform
    // store here
    // get moving direction
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(0x2d);
    // check if platform is above a certain point
    cmp(Enemy_Y_Position, x);
    BCC(ChkOtherForFall);
    cpy(0x0);
    BEQ(MakePlatformFall);
    // if not, branch elsewhere
    // if collision flag is set to same value as
    // enemy state, branch to make platforms fall
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
    // check if other platform is above a certain point
    // if not, branch elsewhere
    // if collision flag is set to same value as
    // enemy state, branch to make platforms fall
    clc();
    adc(0x2);
    sta(Enemy_Y_Position, y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda(Enemy_Y_Position, x);
    // save vertical position to stack
    pha();
    lda(PlatformCollisionFlag, x);
    BPL(ColFlg);
    // get collision flag
    // branch if collision
    lda(Enemy_Y_MoveForce, x);
    clc();
    // add $05 to contents of moveforce, whatever they be
    adc(0x5);
    sta(0x0);
    // store here
    lda(Enemy_Y_Speed, x);
    adc(0x0);
    BMI(PlatDn);
    BNE(PlatUp);
    // add carry to vertical speed
    // branch if moving downwards
    // branch elsewhere if moving upwards
    lda(0x0);
    cmp(0xb);
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // check if there's still a little force left
    // if not enough, branch to stop movement
    // otherwise keep branch to move upwards
    // if collision flag matches
    cmp(ObjectOffset);
    BEQ(PlatDn);
    JMP(PlatUp);
}

int PlatUp() {
    // current enemy object offset, branch
    // do a sub to move upwards
    JSR(MovePlatformUp);
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}

int PlatSt() {
    // jump ahead to remaining code
    // do a sub to stop movement
    JSR(StopPlatforms);
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}

int PlatDn() {
    // jump ahead to remaining code
    // do a sub to move downwards
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}

int DoOtherPlatform() {
    ldy(Enemy_State, x);
    pla();
    // get offset of other platform
    // get old vertical coordinate from stack
    sec();
    sbc(Enemy_Y_Position, x);
    // get difference of old vs. new coordinate
    clc();
    adc(Enemy_Y_Position, y);
    sta(Enemy_Y_Position, y);
    lda(PlatformCollisionFlag, x);
    // add difference to vertical coordinate of other
    // platform to move it in the opposite direction
    // if no collision, skip this part here
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
    // get enemy object offset
    // check to see if current platform is
    // moving at all
    // if not, skip all of this and branch to leave
    // get vram buffer offset
    // if offset beyond a certain point, go ahead
    // and skip this, branch to leave
    lda(Enemy_Y_Speed, y);
    pha();
    // save two copies of vertical speed to stack
    pha();
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(VRAM_Buffer1, x);
    // do a sub to figure out where to put new bg tiles
    // write name table address to vram buffer
    // first the high byte, then the low
    lda(0x0);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x2);
    // set length for 2 bytes
    sta(((VRAM_Buffer1) + (2)), x);
    lda(Enemy_Y_Speed, y);
    BMI(EraseR1);
    // if platform moving upwards, branch
    // to do something else
    lda(0xa2);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0xa3);
    // otherwise put tile numbers for left
    // and right sides of rope in vram buffer
    sta(((VRAM_Buffer1) + (4)), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // jump to skip this part
    // put blank tiles in vram buffer
    lda(0x24);
    sta(((VRAM_Buffer1) + (3)), x);
    // to erase rope
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
    // get offset of other platform from state
    // use as Y here
    // pull second copy of vertical speed from stack
    // invert bits to reverse speed
    // do sub again to figure out where to put bg tiles
    // write name table address to vram buffer
    // this time we're doing putting tiles for
    // the other platform
    sta(((VRAM_Buffer1) + (6)), x);
    lda(0x2);
    sta(((VRAM_Buffer1) + (7)), x);
    pla();
    BPL(EraseR2);
    // set length again for 2 bytes
    // pull first copy of vertical speed from stack
    // if moving upwards (note inversion earlier), skip this
    lda(0xa2);
    sta(((VRAM_Buffer1) + (8)), x);
    lda(0xa3);
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // otherwise put tile numbers for left
    // and right sides of rope in vram
    // transfer buffer
    // jump to skip this part
    // put blank tiles in vram buffer
    lda(0x24);
    sta(((VRAM_Buffer1) + (8)), x);
    // to erase rope
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
}

int EndRp() {
    // put null terminator at the end
    lda(0x0);
    sta(((VRAM_Buffer1) + (10)), x);
    lda(VRAM_Buffer1_Offset);
    clc();
    // add ten bytes to the vram buffer offset
    // and store
    adc(10);
    sta(VRAM_Buffer1_Offset);
    JMP(ExitRp);
}

int ExitRp() {
    // get enemy object buffer offset and leave
    ldx(ObjectOffset);
    return 0;
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda(Enemy_X_Position, y);
    // save second/third copy to stack
    // get horizontal coordinate
    clc();
    adc(0x8);
    ldx(SecondaryHardMode);
    BNE(GetLRp);
    // add eight pixels
    // if secondary hard mode flag set,
    // use coordinate as-is
    clc();
    adc(0x10);
    JMP(GetLRp);
}

int GetLRp() {
    // otherwise add sixteen more pixels
    // save modified horizontal coordinate to stack
    pha();
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(0x2);
    pla();
    anda(0b11110000);
    lsr();
    // add carry to page location
    // and save here
    // pull modified horizontal coordinate
    // from the stack, mask out low nybble
    // and shift three bits to the right
    lsr();
    lsr();
    sta(0x0);
    ldx(Enemy_Y_Position, y);
    pla();
    BPL(GetHRp);
    // store result here as part of name table low byte
    // get vertical coordinate
    // get second/third copy of vertical speed from stack
    // skip this part if moving downwards or not at all
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // add eight to vertical coordinate and
    // save as X
    // move vertical coordinate to A
    txa();
    ldx(VRAM_Buffer1_Offset);
    // get vram buffer offset
    asl();
    rol();
    pha();
    rol();
    anda(0b11);
    ora(0b100000);
    sta(0x1);
    lda(0x2);
    anda(0x1);
    // rotate d7 to d0 and d6 into carry
    // save modified vertical coordinate to stack
    // rotate carry to d0, thus d7 and d6 are at 2 LSB
    // mask out all bits but d7 and d6, then set
    // d5 to get appropriate high byte of name table
    // address, then store
    // get saved page location from earlier
    // mask out all but LSB
    asl();
    asl();
    ora(0x1);
    sta(0x1);
    pla();
    anda(0b11100000);
    // shift twice to the left and save with the
    // rest of the bits of the high byte, to get
    // the proper name table and the right place on it
    // get modified vertical coordinate from stack
    // mask out low nybble and LSB of high nybble
    clc();
    adc(0x0);
    sta(0x0);
    // add to horizontal part saved here
    // save as name table low byte
    lda(Enemy_Y_Position, y);
    cmp(0xe8);
    BCC(ExPRp);
    // if vertical position not below the
    // bottom of the screen, we're done, branch to leave
    lda(0x0);
    anda(0b10111111);
    // mask out d6 of low byte of name table address
    sta(0x0);
    JMP(ExPRp);
}

int ExPRp() {
    // leave!
    return 0;
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // move offset of other platform from Y to X
    tax();
    JSR(GetEnemyOffscreenBits);
    // get offscreen bits
    lda(0x6);
    JSR(SetupFloateyNumber);
    // award 1000 points to player
    lda(Player_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    // put floatey number coordinates where player is
    lda(Player_Y_Position);
    sta(FloateyNum_Y_Pos, x);
    lda(0x1);
    sta(Enemy_MovingDir, x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta(Enemy_Y_Speed, y);
    // initialize vertical speed and low byte
    // for both platforms and leave
    sta(Enemy_Y_MoveForce, y);
    return 0;
    JMP(PlatformFall);
}

int PlatformFall() {
    tya();
    // save offset for other platform to stack
    pha();
    JSR(MoveFallingPlatform);
    // make current platform fall
    pla();
    tax();
    JSR(MoveFallingPlatform);
    // pull offset from stack and save to X
    // make other platform fall
    ldx(ObjectOffset);
    lda(PlatformCollisionFlag, x);
    BMI(ExPF);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}

int ExPF() {
    // if player not standing on either platform,
    // skip this part
    // transfer collision flag offset as offset to X
    // and position player appropriately
    // get enemy object buffer offset and leave
    ldx(ObjectOffset);
    return 0;
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda(Enemy_Y_Speed, x);
    ora(Enemy_Y_MoveForce, x);
    // if platform moving up or down, skip ahead to
    // check on other position
    BNE(ChkYCenterPos);
    sta(Enemy_YMF_Dummy, x);
    // initialize dummy variable
    lda(Enemy_Y_Position, x);
    cmp(YPlatformTopYPos, x);
    BCS(ChkYCenterPos);
    // if current vertical position => top position, branch
    // ahead of all this
    lda(FrameCounter);
    anda(0b111);
    // check for every eighth frame
    BNE(SkipIY);
    inc(Enemy_Y_Position, x);
    JMP(SkipIY);
}

int SkipIY() {
    // increase vertical position every eighth frame
    // skip ahead to last part
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda(Enemy_Y_Position, x);
    cmp(YPlatformCenterYPos, x);
    // if current vertical position < central position, branch
    // to slow ascent/move downwards
    BCC(YMDown);
    JSR(MovePlatformUp);
    // otherwise start slowing descent/moving upwards
    JMP(ChkYPCollision);
    JMP(YMDown);
}

int YMDown() {
    // start slowing ascent/moving downwards
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
    // if collision flag not set here, branch
    // to leave
    // otherwise position player appropriately
    // leave
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
    // add saved value from second subroutine to
    // current player's position to position
    // player accordingly in horizontal position
    // get player's page location
    // check to see if saved value here is positive or negative
    // if negative, branch to subtract
    // otherwise add carry to page location
    // jump to skip subtraction
    // subtract borrow from page location
    sbc(0x0);
    JMP(SetPVar);
}

int SetPVar() {
    // save result to player's page location
    sta(Player_PageLoc);
    sty(Platform_X_Scroll);
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // put saved value from second sub here to be used later
    // position player vertically and appropriately
    // and we are done here
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
    // if no collision between platform and player
    // occurred, just leave without moving anything
    // otherwise do a sub to move platform down very quickly
    // do a sub to position player appropriately
    // leave
    return 0;
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    lda(PlatformCollisionFlag, x);
    BMI(ExRPl);
    // $00 - residual value from sub
    // move platform with current horizontal speed, if any
    // store saved value here (residual code)
    // check collision flag, if no collision between player
    // and platform, branch ahead, leave speed unaltered
    lda(0x10);
    sta(Enemy_X_Speed, x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // otherwise set new speed (gets moving if motionless)
    // use saved value from earlier sub to position player
    // then leave
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
    // if master timer control set, skip all of this
    // and branch to leave
    lda(Enemy_YMF_Dummy, x);
    clc();
    // add contents of movement amount to whatever's here
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(Enemy_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    // add whatever vertical speed is set to current
    // vertical position plus carry to move up or down
    // and then leave
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
    // get bounding box counter saved in collision flag
    // if none found, leave player position alone
    // use to position player correctly
    // then leave
    return 0;
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda(Enemy_ID, x);
    cmp(FlyingCheepCheep);
    // check for cheep-cheep object
    // branch to leave if found
    BEQ(ExScrnBd);
    lda(ScreenLeft_X_Pos);
    // get horizontal coordinate for left side of screen
    ldy(Enemy_ID, x);
    cpy(HammerBro);
    // check for hammer bro object
    BEQ(LimitB);
    cpy(PiranhaPlant);
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // check for piranha plant object
    // these two will be erased sooner than others if too far left
    // add 56 pixels to coordinate if hammer bro or piranha plant
    adc(0x38);
    JMP(ExtendLB);
}

int ExtendLB() {
    // subtract 72 pixels regardless of enemy object
    sbc(0x48);
    sta(0x1);
    // store result here
    lda(ScreenLeft_PageLoc);
    sbc(0x0);
    sta(0x0);
    lda(ScreenRight_X_Pos);
    // subtract borrow from page location of left side
    // store result here
    // add 72 pixels to the right side horizontal coordinate
    adc(0x48);
    sta(0x3);
    // store result here
    lda(ScreenRight_PageLoc);
    adc(0x0);
    sta(0x2);
    lda(Enemy_X_Position, x);
    cmp(0x1);
    // then add the carry to the page location
    // and store result here
    // compare horizontal coordinate of the enemy object
    // to modified horizontal left edge coordinate to get carry
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    BMI(TooFar);
    lda(Enemy_X_Position, x);
    cmp(0x3);
    // then subtract it from the page coordinate of the enemy object
    // if enemy object is too far left, branch to erase it
    // compare horizontal coordinate of the enemy object
    // to modified horizontal right edge coordinate to get carry
    lda(Enemy_PageLoc, x);
    sbc(0x2);
    BMI(ExScrnBd);
    lda(Enemy_State, x);
    cmp(HammerBro);
    // then subtract it from the page coordinate of the enemy object
    // if enemy object is on the screen, leave, do not erase enemy
    // if at this point, enemy is offscreen to the right, so check
    // if in state used by spiny's egg, do not erase
    BEQ(ExScrnBd);
    cpy(PiranhaPlant);
    // if piranha plant, do not erase
    BEQ(ExScrnBd);
    cpy(FlagpoleFlagObject);
    // if flagpole flag, do not erase
    BEQ(ExScrnBd);
    cpy(StarFlagObject);
    // if star flag, do not erase
    BEQ(ExScrnBd);
    cpy(JumpspringObject);
    BEQ(ExScrnBd);
    JMP(TooFar);
}

int TooFar() {
    // if jumpspring, do not erase
    // erase all others too far to the right
    // erase object if necessary
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}

int ExScrnBd() {
    // leave
    return 0;
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda(Fireball_State, x);
    BEQ(ExitFBallEnemy);
    // $01 - enemy buffer offset
    // check to see if fireball state is set at all
    // branch to leave if not
    asl();
    BCS(ExitFBallEnemy);
    // branch to leave also if d7 in state is set
    lda(FrameCounter);
    lsr();
    BCS(ExitFBallEnemy);
    // get LSB of frame counter
    // branch to leave if set (do routine every other frame)
    txa();
    asl();
    // multiply fireball offset by four
    asl();
    clc();
    adc(0x1c);
    tay();
    // then add $1c or 28 bytes to it
    // to use fireball's bounding box coordinates
    ldx(0x4);
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(0x1);
    // store enemy object offset here
    tya();
    pha();
    // push fireball offset to the stack
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(NoFToECol);
    lda(Enemy_Flag, x);
    BEQ(NoFToECol);
    lda(Enemy_ID, x);
    // check to see if d5 is set in enemy state
    // if so, skip to next enemy slot
    // check to see if buffer flag is set
    // if not, skip to next enemy slot
    // check enemy identifier
    cmp(0x24);
    BCC(GoombaDie);
    // if < $24, branch to check further
    cmp(0x2b);
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // if in range $24-$2a, skip to next enemy slot
    // check for goomba identifier
    cmp(Goomba);
    BNE(NotGoomba);
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // if not found, continue with code
    // otherwise check for defeated state
    // if stomped or otherwise defeated,
    // skip to next enemy slot
    // if any masked offscreen bits set,
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoFToECol);
    // skip to next enemy slot
    txa();
    asl();
    // otherwise multiply enemy offset by four
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    BCC(NoFToECol);
    // add 4 bytes to it
    // to use enemy's bounding box coordinates
    // do fireball-to-enemy collision detection
    // return fireball's original offset
    // if carry clear, no collision, thus do next enemy slot
    lda(0b10000000);
    sta(Fireball_State, x);
    ldx(0x1);
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}

int NoFToECol() {
    // set d7 in enemy state
    // get enemy offset
    // jump to handle fireball to enemy collision
    // pull fireball offset from stack
    pla();
    tay();
    ldx(0x1);
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx(ObjectOffset);
    // get original fireball offset and leave
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
    // get relative coordinate of enemy
    // get current enemy object offset
    // check buffer flag for d7 set
    // branch if not set to continue
    // otherwise mask out high nybble and
    // use low nybble as enemy offset
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
    // decrement bowser's hit points
    // if bowser still has hit points, branch to leave
    // otherwise do sub to init vertical speed and movement force
    // initialize horizontal speed
    // init enemy frenzy buffer
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
    // set vertical speed to make defeated bowser jump a little
    // use world number as offset
    // get enemy identifier to replace bowser with
    // set as new enemy identifier
    // set A to use starting value for state
    // check to see if using offset of 3 or more
    // branch if so
    // otherwise add 3 to enemy state
    // set defeated enemy state
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
    // branch to leave if bullet bill (frenzy variant)
    cmp(Podoboo);
    BEQ(ExHCF);
    // branch to leave if podoboo
    cmp(0x15);
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda(Enemy_ID, x);
    // check for piranha plant
    cmp(PiranhaPlant);
    BNE(StnE);
    // branch if not found
    lda(Enemy_Y_Position, x);
    adc(0x18);
    // add 24 pixels to enemy object's vertical position
    sta(Enemy_Y_Position, x);
    JMP(StnE);
}

int StnE() {
    // do yet another sub
    JSR(ChkToStunEnemies);
    lda(Enemy_State, x);
    anda(0b11111);
    ora(0b100000);
    // mask out 2 MSB of enemy object's state
    // set d5 to defeat enemy and save as new state
    sta(Enemy_State, x);
    lda(0x2);
    ldy(Enemy_ID, x);
    // award 200 points by default
    // check for hammer bro
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
    // update necessary score variables
    // play smack enemy sound
    sta(Square1SoundQueue);
    JMP(ExHCF);
}

int ExHCF() {
    // and now let's leave
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
    // get frame counter
    // shift d0 into carry
    // branch to leave if d0 not set to execute every other frame
    // if either master timer control
    // or any offscreen bits for hammer are set,
    // branch to leave
    txa();
    asl();
    // multiply misc object offset by four
    asl();
    clc();
    adc(0x24);
    tay();
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCC(ClHCol);
    lda(Misc_Collision_Flag, x);
    BNE(ExPHC);
    // add 36 or $24 bytes to get proper offset
    // for misc object bounding box coordinates
    // do player-to-hammer collision detection
    // get misc object offset
    // if no collision, then branch
    // otherwise read collision flag
    // if collision flag already set, branch to leave
    lda(0x1);
    sta(Misc_Collision_Flag, x);
    // otherwise set collision flag now
    lda(Misc_X_Speed, x);
    eor(0xff);
    clc();
    // get two's compliment of
    // hammer's horizontal speed
    adc(0x1);
    sta(Misc_X_Speed, x);
    lda(StarInvincibleTimer);
    BNE(ExPHC);
    JMP(InjurePlayer);
    JMP(ClHCol);
}

int ClHCol() {
    // set to send hammer flying the opposite direction
    // if star mario invincibility timer set,
    // branch to leave
    // otherwise jump to hurt player, do not return
    // clear collision flag
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
    // erase the power-up object
    lda(0x6);
    JSR(SetupFloateyNumber);
    // award 1000 points to player by default
    lda(Sfx_PowerUpGrab);
    sta(Square2SoundQueue);
    lda(PowerUpType);
    // play the power-up sound
    // check power-up type
    cmp(0x2);
    BCC(Shroom_Flower_PUp);
    // if mushroom or fire flower, branch
    cmp(0x3);
    BEQ(SetFor1Up);
    lda(0x23);
    sta(StarInvincibleTimer);
    lda(StarPowerMusic);
    // if 1-up mushroom, branch
    // otherwise set star mario invincibility
    // timer, and load the star mario music
    // into the area music queue, then leave
    sta(AreaMusicQueue);
    return 0;
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda(PlayerStatus);
    // if player status = small, branch
    BEQ(UpToSuper);
    cmp(0x1);
    // if player status not super, leave
    BNE(NoPUp);
    ldx(ObjectOffset);
    lda(0x2);
    // get enemy offset, not necessary
    // set player status to fiery
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
    // change 1000 points into 1-up instead
    // and then leave
    return 0;
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(0x1);
    // set player status to super
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
    // check counter for d0 set
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoPECol);
    // if set, branch to leave
    // if player object is completely offscreen or
    // if down past 224th pixel row, branch to leave
    // if current enemy is offscreen by any amount,
    // go ahead and branch to leave
    lda(GameEngineSubroutine);
    cmp(0x8);
    BNE(NoPECol);
    // if not set to run player control routine
    // on next frame, branch to leave
    lda(Enemy_State, x);
    anda(0b100000);
    // if enemy state has d5 set, branch to leave
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCS(CheckForPUpCollision);
    // get bounding box offset for current enemy object
    // do collision detection on player vs. enemy
    // get enemy object buffer offset
    // if collision, branch past this part here
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
    // check for power-up object
    // if not found, branch to next part
    // otherwise, unconditional jump backwards
    // if star mario invincibility timer expired,
    lda(StarInvincibleTimer);
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda(Enemy_CollisionBits, x);
    anda(0b1);
    // check enemy collision bits for d0 set
    // or for being offscreen at all
    ora(EnemyOffscrBitsMasked, x);
    BNE(ExPEC);
    // branch to leave if either is true
    lda(0x1);
    ora(Enemy_CollisionBits, x);
    // otherwise set d0 now
    sta(Enemy_CollisionBits, x);
    cpy(Spiny);
    // branch if spiny
    BEQ(ChkForPlayerInjury);
    cpy(PiranhaPlant);
    // branch if piranha plant
    BEQ(InjurePlayer);
    cpy(Podoboo);
    // branch if podoboo
    BEQ(InjurePlayer);
    cpy(BulletBill_CannonVar);
    // branch if bullet bill
    BEQ(ChkForPlayerInjury);
    cpy(0x15);
    // branch if object => $15
    BCS(InjurePlayer);
    lda(AreaType);
    // branch if water type level
    BEQ(InjurePlayer);
    lda(Enemy_State, x);
    // branch if d7 of enemy state was set
    asl();
    BCS(ChkForPlayerInjury);
    lda(Enemy_State, x);
    // mask out all but 3 LSB of enemy state
    anda(0b111);
    cmp(0x2);
    // branch if enemy is in normal or falling state
    BCC(ChkForPlayerInjury);
    lda(Enemy_ID, x);
    // branch to leave if goomba in defeated state
    cmp(Goomba);
    BEQ(ExPEC);
    lda(Sfx_EnemySmack);
    // play smack enemy sound
    sta(Square1SoundQueue);
    lda(Enemy_State, x);
    // set d7 in enemy state, thus become moving shell
    ora(0b10000000);
    sta(Enemy_State, x);
    JSR(EnemyFacePlayer);
    lda(offsetof(G, KickedShellXSpdData), y);
    // set moving direction and get offset
    // load and set horizontal speed data with offset
    sta(Enemy_X_Speed, x);
    lda(0x3);
    clc();
    // add three to whatever the stomp counter contains
    // to give points for kicking the shell
    adc(StompChainCounter);
    ldy(EnemyIntervalTimer, x);
    cpy(0x3);
    BCS(KSPts);
    lda(offsetof(G, KickedShellPtsData), y);
    JMP(KSPts);
}

int KSPts() {
    // check shell enemy's timer
    // if above a certain point, branch using the points
    // data obtained from the stomp counter + 3
    // otherwise, set points based on proximity to timer expiration
    // set values for floatey number now
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}

int ExPEC() {
    // leave!!!
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
    // check player's vertical speed
    // perform procedure below if player moving upwards
    // or not at all, and branch elsewhere if moving downwards
    // branch if enemy object < $07
    lda(Enemy_ID, x);
    cmp(Bloober);
    BCC(ChkETmrs);
    lda(Player_Y_Position);
    // add 12 pixels to player's vertical position
    clc();
    adc(0xc);
    cmp(Enemy_Y_Position, x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // compare modified player's position to enemy's position
    // branch if this player's position above (less than) enemy's
    // check stomp timer
    lda(StompTimer);
    BNE(EnemyStomped);
    lda(InjuryTimer);
    BNE(ExInjColRoutines);
    // branch if set
    // check to see if injured invincibility timer still
    // counting down, and branch elsewhere to leave if so
    lda(Player_Rel_XPos);
    cmp(Enemy_Rel_XPos);
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // if player's relative position to the left of enemy's
    // relative position, branch here
    // otherwise do a jump here
    // if enemy moving towards the left,
    lda(Enemy_MovingDir, x);
    cmp(0x1);
    BNE(InjurePlayer);
    // branch, otherwise do a jump here
    // to turn the enemy around
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
    // check player's status
    // branch if small
    // otherwise set player's status to small
    lda(0x8);
    sta(InjuryTimer);
    // set injured invincibility timer
    asl();
    sta(Square1SoundQueue);
    JSR(GetPlayerColors);
    lda(0xa);
    JMP(SetKRout);
}

int SetKRout() {
    // play pipedown/injury sound
    // change player's palette if necessary
    // set subroutine to run on next frame
    // set new player state
    ldy(0x1);
    JMP(SetPRout);
}

int SetPRout() {
    // load new value to run subroutine on next frame
    sta(GameEngineSubroutine);
    sty(Player_State);
    // store new player state
    ldy(0xff);
    sty(TimerControl);
    // set master timer control flag to halt timers
    iny();
    sty(ScrollAmount);
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx(ObjectOffset);
    // get enemy offset and leave
    return 0;
    JMP(KillPlayer);
}

int KillPlayer() {
    stx(Player_X_Speed);
    // halt player's horizontal movement by initializing speed
    inx();
    stx(EventMusicQueue);
    // set event music queue to death music
    lda(0xfc);
    sta(Player_Y_Speed);
    lda(0xb);
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda(Enemy_ID, x);
    cmp(Spiny);
    // check for spiny, branch to hurt player
    // if found
    BEQ(InjurePlayer);
    lda(Sfx_EnemyStomp);
    // otherwise play stomp/swim sound
    sta(Square1SoundQueue);
    lda(Enemy_ID, x);
    ldy(0x0);
    cmp(FlyingCheepCheep);
    // initialize points data offset for stomped enemies
    // branch for cheep-cheep
    BEQ(EnemyStompedPts);
    cmp(BulletBill_FrenzyVar);
    // branch for either bullet bill object
    BEQ(EnemyStompedPts);
    cmp(BulletBill_CannonVar);
    BEQ(EnemyStompedPts);
    cmp(Podoboo);
    BEQ(EnemyStompedPts);
    iny();
    cmp(HammerBro);
    // branch for podoboo (this branch is logically impossible
    // for cpu to take due to earlier checking of podoboo)
    // increment points data offset
    // branch for hammer bro
    BEQ(EnemyStompedPts);
    iny();
    cmp(Lakitu);
    // increment points data offset
    // branch for lakitu
    BEQ(EnemyStompedPts);
    iny();
    cmp(Bloober);
    // increment points data offset
    // branch if NOT bloober
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda(offsetof(G, StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // load points data using offset in Y
    // run sub to set floatey number controls
    lda(Enemy_MovingDir, x);
    pha();
    JSR(SetStun);
    // save enemy movement direction to stack
    // run sub to kill enemy
    pla();
    sta(Enemy_MovingDir, x);
    // return enemy movement direction from stack
    lda(0b100000);
    sta(Enemy_State, x);
    JSR(InitVStf);
    sta(Enemy_X_Speed, x);
    lda(0xfd);
    // set d5 in enemy state
    // nullify vertical speed, physics-related thing,
    // and horizontal speed
    // set player's vertical speed, to give bounce
    sta(Player_Y_Speed);
    return 0;
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(0x9);
    // branch elsewhere if enemy object < $09
    BCC(HandleStompedShellE);
    anda(0b1);
    // demote koopa paratroopas to ordinary troopas
    sta(Enemy_ID, x);
    ldy(0x0);
    // return enemy to normal state
    sty(Enemy_State, x);
    lda(0x3);
    // award 400 points to the player
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // nullify physics-related thing and vertical speed
    // turn enemy around if necessary
    lda(offsetof(G, DemotedKoopaXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(0x4);
    // set defeated state for enemy
    sta(Enemy_State, x);
    inc(StompChainCounter);
    lda(StompChainCounter);
    clc();
    // increment the stomp counter
    // add whatever is in the stomp counter
    // to whatever is in the stomp timer
    adc(StompTimer);
    JSR(SetupFloateyNumber);
    inc(StompTimer);
    ldy(PrimaryHardMode);
    lda(offsetof(G, RevivalRateData), y);
    sta(EnemyIntervalTimer, x);
    JMP(SBnce);
}

int SBnce() {
    // award points accordingly
    // increment stomp timer of some sort
    // check primary hard mode flag
    // load timer setting according to flag
    // set as enemy timer to revive stomped enemy
    // set player's vertical speed for bounce
    lda(0xfc);
    sta(Player_Y_Speed);
    // and then leave!!!
    return 0;
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda(Enemy_MovingDir, x);
    // check to see if enemy is moving to the right
    cmp(0x1);
    BNE(LInj);
    JMP(InjurePlayer);
    JMP(LInj);
}

int LInj() {
    // if not, branch
    // otherwise go back to hurt player
    // turn the enemy around, if necessary
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
    // set to move right by default
    // get horizontal difference between player and enemy
    // if enemy is to the right of player, do not increment
    // otherwise, increment to set to move to the left
    // set moving direction here
    sty(Enemy_MovingDir, x);
    dey();
    // then decrement to use as a proper offset
    return 0;
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta(FloateyNum_Control, x);
    // set number of points control for floatey numbers
    lda(0x30);
    sta(FloateyNum_Timer, x);
    // set timer for floatey numbers
    lda(Enemy_Y_Position, x);
    sta(FloateyNum_Y_Pos, x);
    // set vertical coordinate
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
    // check counter for d0 set
    lsr();
    BCC(ExSFN);
    // if d0 not set, leave
    lda(AreaType);
    BEQ(ExSFN);
    // if water area type, leave
    lda(Enemy_ID, x);
    cmp(0x15);
    // if enemy object => $15, branch to leave
    BCS(ExitECRoutine);
    cmp(Lakitu);
    // if lakitu, branch to leave
    BEQ(ExitECRoutine);
    cmp(PiranhaPlant);
    // if piranha plant, branch to leave
    BEQ(ExitECRoutine);
    lda(EnemyOffscrBitsMasked, x);
    // if masked offscreen bits nonzero, branch to leave
    BNE(ExitECRoutine);
    JSR(GetEnemyBoundBoxOfs);
    dex();
    BMI(ExitECRoutine);
    JMP(ECLoop);
}

int ECLoop() {
    // otherwise, do sub, get appropriate bounding box offset for
    // first enemy we're going to compare, then decrement for second
    // branch to leave if there are no other enemies
    // save enemy object buffer offset for second enemy here
    stx(0x1);
    tya();
    // save first enemy's bounding box offset to stack
    pha();
    lda(Enemy_Flag, x);
    BEQ(ReadyNextEnemy);
    // check enemy object enable flag
    // branch if flag not set
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(ReadyNextEnemy);
    // check for enemy object => $15
    // branch if true
    cmp(Lakitu);
    BEQ(ReadyNextEnemy);
    // branch if enemy object is lakitu
    cmp(PiranhaPlant);
    BEQ(ReadyNextEnemy);
    // branch if enemy object is piranha plant
    lda(EnemyOffscrBitsMasked, x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // branch if masked offscreen bits set
    // get second enemy object's bounding box offset
    // multiply by four, then add four
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    ldy(0x1);
    BCC(NoEnemyCollision);
    // use as new contents of X
    // do collision detection using the two enemies here
    // use first enemy offset for X
    // use second enemy offset for Y
    // if carry clear, no collision, branch ahead of this
    lda(Enemy_State, x);
    ora(Enemy_State, y);
    // check both enemy states for d7 set
    anda(0b10000000);
    BNE(YesEC);
    lda(Enemy_CollisionBits, y);
    anda(offsetof(G, SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // branch if at least one of them is set
    // load first enemy's collision-related bits
    // check to see if bit connected to second enemy is
    // already set, and move onto next enemy slot if set
    lda(Enemy_CollisionBits, y);
    ora(offsetof(G, SetBitsMask), x);
    // if the bit is not set, set it now
    sta(Enemy_CollisionBits, y);
    JMP(YesEC);
}

int YesEC() {
    // react according to the nature of collision
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
    // get first enemy's bounding box offset from the stack
    // use as Y again
    // get and decrement second enemy's object buffer offset
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
    // check both enemy states for d5 set
    ora(Enemy_State, x);
    anda(0b100000);
    BNE(ExitProcessEColl);
    // if d5 is set in either state, or both, branch
    // to leave and do nothing else at this point
    lda(Enemy_State, x);
    cmp(0x6);
    // if second enemy state < $06, branch elsewhere
    BCC(ProcSecondEnemyColl);
    lda(Enemy_ID, x);
    cmp(HammerBro);
    // check second enemy identifier for hammer bro
    // if hammer bro found in alt state, branch to leave
    BEQ(ExitProcessEColl);
    lda(Enemy_State, y);
    // check first enemy state for d7 set
    asl();
    BCC(ShellCollisions);
    // branch if d7 is clear
    lda(0x6);
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(0x1);
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // move Y to X
    tax();
    JSR(ShellOrBlockDefeat);
    // kill second enemy
    ldx(ObjectOffset);
    lda(ShellChainCounter, x);
    // get chain counter for shell
    clc();
    adc(0x4);
    // add four to get appropriate point offset
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
    // if first enemy state < $06, branch elsewhere
    cmp(0x6);
    BCC(MoveEOfs);
    lda(Enemy_ID, y);
    cmp(HammerBro);
    // check first enemy identifier for hammer bro
    // if hammer bro found in alt state, branch to leave
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // otherwise, kill first enemy
    ldy(0x1);
    lda(ShellChainCounter, y);
    // get chain counter for shell
    clc();
    adc(0x4);
    // add four to get appropriate point offset
    ldx(ObjectOffset);
    JSR(SetupFloateyNumber);
    ldx(0x1);
    inc(ShellChainCounter, x);
    return 0;
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // move Y ($01) to X
    tax();
    JSR(EnemyTurnAround);
    ldx(ObjectOffset);
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda(Enemy_ID, x);
    // check for specific enemies
    cmp(PiranhaPlant);
    BEQ(ExTA);
    // if piranha plant, leave
    cmp(Lakitu);
    BEQ(ExTA);
    // if lakitu, leave
    cmp(HammerBro);
    BEQ(ExTA);
    // if hammer bro, leave
    cmp(Spiny);
    BEQ(RXSpd);
    // if spiny, turn it around
    cmp(GreenParatroopaJump);
    BEQ(RXSpd);
    // if green paratroopa, turn it around
    cmp(0x7);
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // if any OTHER enemy object => $07, leave
    // load horizontal speed
    lda(Enemy_X_Speed, x);
    eor(0xff);
    // get two's compliment for horizontal speed
    tay();
    iny();
    sty(Enemy_X_Speed, x);
    // store as new horizontal speed
    lda(Enemy_MovingDir, x);
    eor(0b11);
    sta(Enemy_MovingDir, x);
    JMP(ExTA);
}

int ExTA() {
    // invert moving direction and store, then leave
    // thus effectively turning the enemy around
    // leave!!!
    return 0;
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(0xff);
    // $00 - vertical position of platform
    // save value here
    sta(PlatformCollisionFlag, x);
    lda(TimerControl);
    BNE(ExLPC);
    lda(Enemy_State, x);
    BMI(ExLPC);
    // check master timer control
    // if set, branch to leave
    // if d7 set in object state,
    // branch to leave
    lda(Enemy_ID, x);
    cmp(0x24);
    BNE(ChkForPlayerC_LargeP);
    // check enemy object identifier for
    // balance platform, branch if not found
    lda(Enemy_State, x);
    tax();
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    JSR(CheckPlayerVertical);
    BCS(ExLPC);
    // figure out if player is below a certain point
    // or offscreen, branch to leave if true
    txa();
    JSR(GetEnemyBoundBoxOfsArg);
    lda(Enemy_Y_Position, x);
    sta(0x0);
    txa();
    // get bounding box offset in Y
    // store vertical coordinate in
    // temp variable for now
    // send offset we're on to the stack
    pha();
    JSR(PlayerCollisionCore);
    pla();
    // do player-to-platform collision detection
    // retrieve offset from the stack
    tax();
    BCC(ExLPC);
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}

int ExLPC() {
    // if no collision, branch to leave
    // otherwise collision, perform sub
    // get enemy object buffer offset and leave
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
    // $00 - counter for bounding boxes
    // if master timer control set,
    // branch to leave
    // otherwise initialize collision flag
    // do a sub to see if player is below a certain point
    // or entirely offscreen, and branch to leave if true
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
    // move bounding box vertical coordinates
    // 128 pixels downwards
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
    // decrement counter we set earlier
    // loop back until both bounding boxes are checked
    // get enemy object buffer offset, then leave
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
    // get difference by subtracting the top
    // of the platform's bounding box from the bottom
    // of the player's bounding box
    cmp(0x6);
    BCS(PlatformSideCollisions);
    // if difference not close enough, skip all of this
    lda(Player_Y_Speed);
    BMI(PlatformSideCollisions);
    lda(0x0);
    // if player's vertical speed moving upwards, skip this
    // get saved bounding box counter from earlier
    ldy(Enemy_ID, x);
    cpy(0x2b);
    BEQ(SetCollisionFlag);
    cpy(0x2c);
    // if either of the two small platform objects are found,
    // regardless of which one, branch to use bounding box counter
    // as contents of collision flag
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx(ObjectOffset);
    sta(PlatformCollisionFlag, x);
    // get enemy object buffer offset
    // save either bounding box counter or enemy offset here
    lda(0x0);
    sta(Player_State);
    // set player state to normal then leave
    return 0;
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(0x1);
    sta(0x0);
    lda(BoundingBox_DR_XPos);
    sec();
    // set value here to indicate possible horizontal
    // collision on left side of platform
    // get difference by subtracting platform's left edge
    // from player's right edge
    sbc(BoundingBox_UL_XPos, y);
    cmp(0x8);
    // if difference close enough, skip all of this
    BCC(SideC);
    inc(0x0);
    lda(BoundingBox_DR_XPos, y);
    clc();
    // otherwise increment value set here for right side collision
    // get difference by subtracting player's left edge
    // from platform's right edge
    sbc(BoundingBox_UL_XPos);
    cmp(0x9);
    BCS(NoSideC);
    JMP(SideC);
}

int SideC() {
    // if difference not close enough, skip subroutine
    // and instead branch to leave (no collision)
    // deal with horizontal collision
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}

int NoSideC() {
    // return with enemy object buffer offset
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
    // get vertical coordinate
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ExPlPos);
    // if certain routine being executed on this frame,
    // skip all of this
    ldy(Enemy_Y_HighPos, x);
    cpy(0x1);
    // if vertical high byte offscreen, skip this
    BNE(ExPlPos);
    sec();
    sbc(0x20);
    sta(Player_Y_Position);
    // subtract 32 pixels from vertical coordinate
    // for the player object's height
    // save as player's new vertical coordinate
    tya();
    sbc(0x0);
    sta(Player_Y_HighPos);
    // subtract borrow and store as player's
    // new vertical high byte
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
    // if player object is completely offscreen
    // vertically, leave this routine
    BCS(ExCPV);
    ldy(Player_Y_HighPos);
    dey();
    // if player high vertical byte is not
    // within the screen, leave this routine
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
    // multiply A by four, then add four
    // to skip player's bounding box
    clc();
    adc(0x4);
    tay();
    lda(Enemy_OffscreenBits);
    anda(0b1111);
    cmp(0b1111);
    // send to Y
    // get offscreen bits for enemy object
    // save low nybble
    // check for all bits set
    return 0;
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda(DisableCollisionDet);
    BNE(ExPBGCol);
    // if collision detection disabled flag set,
    // branch to leave
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(ExPBGCol);
    // if running routine #11 or $0b
    // branch to leave
    cmp(0x4);
    BCC(ExPBGCol);
    lda(0x1);
    ldy(SwimmingFlag);
    BNE(SetPSte);
    lda(Player_State);
    BEQ(SetFallS);
    // if running routines $00-$03 branch to leave
    // load default player state for swimming
    // if swimming flag set,
    // branch ahead to set default state
    // if player in normal state,
    // branch to set default state for falling
    cmp(0x3);
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // if in any other state besides climbing, skip to next part
    // load default player state for falling
    lda(0x2);
    JMP(SetPSte);
}

int SetPSte() {
    // set whatever player state is appropriate
    sta(Player_State);
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda(Player_Y_HighPos);
    cmp(0x1);
    BNE(ExPBGCol);
    // check player's vertical high byte for still on the screen
    // branch to leave if not
    lda(0xff);
    sta(Player_CollisionBits);
    // initialize player's collision flag
    lda(Player_Y_Position);
    cmp(0xcf);
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // check player's vertical coordinate
    // if not too close to the bottom of screen, continue
    // otherwise leave
    return 0;
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(0x2);
    // load default offset
    lda(CrouchingFlag);
    BNE(GBBAdr);
    // if player crouching, skip ahead
    lda(PlayerSize);
    BNE(GBBAdr);
    dey();
    // if player small, skip ahead
    // otherwise decrement offset for big player not crouching
    lda(SwimmingFlag);
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // if swimming flag set, skip ahead
    // otherwise decrement offset
    // get value using offset
    lda(offsetof(G, BlockBufferAdderData), y);
    sta(0xeb);
    tay();
    ldx(PlayerSize);
    // store value here
    // put value into Y, as offset for block buffer routine
    // get player's size as offset
    lda(CrouchingFlag);
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // if player not crouching, branch ahead
    // otherwise increment size as offset
    // get player's vertical coordinate
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
    // if climbing metatile,
    // branch ahead and do not play sound
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NYSpd);
}

int NYSpd() {
    // otherwise load bump sound
    // set player's vertical speed to nullify
    lda(0x1);
    sta(Player_Y_Speed);
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(0xeb);
    // get block buffer adder offset
    lda(Player_Y_Position);
    cmp(0xcf);
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(0x0);
    // check to see how low player is
    // if player is too far down on screen, skip all of this
    // do player-to-bg collision detection on bottom left of player
    // check to see if player touched coin with their left foot
    // if so, branch to some other part of code
    // save bottom left metatile to stack
    // do player-to-bg collision detection on bottom right of player
    // save bottom right metatile here
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
    // check to see if player landed on climbable metatiles
    // if so, branch
    // check player's vertical speed
    // if player moving upwards, branch
    cmp(0xc5);
    BNE(ContChk);
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}

int ContChk() {
    // if player did not touch axe, skip ahead
    // otherwise jump to set modes of operation
    // do sub to check for hidden coin or 1-up blocks
    JSR(ChkInvisibleMTiles);
    BEQ(DoPlayerSideCheck);
    ldy(JumpspringAnimCtrl);
    BNE(InitSteP);
    ldy(0x4);
    cpy(0x5);
    BCC(LandPlyr);
    // if either found, branch
    // if jumpspring animating right now,
    // branch ahead
    // check lower nybble of vertical coordinate returned
    // from collision detection routine
    // if lower nybble < 5, branch
    lda(Player_MovingDir);
    sta(0x0);
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // use player's moving direction as temp variable
    // jump to impede player's movement in that direction
    // do sub to check for jumpspring metatiles and deal with it
    JSR(ChkForLandJumpSpring);
    lda(0xf0);
    anda(Player_Y_Position);
    sta(Player_Y_Position);
    JSR(HandlePipeEntry);
    // mask out lower nybble of player's vertical position
    // and store as new vertical position to land player properly
    // do sub to process potential pipe entry
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
    // get block buffer adder offset
    iny();
    iny();
    lda(0x2);
    // increment offset 2 bytes to use adders for side collisions
    // set value here to be used as counter
    sta(0x0);
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(0xeb);
    // move onto the next one
    // store it
    lda(Player_Y_Position);
    cmp(0x20);
    BCC(BHalf);
    // check player's vertical position
    // if player is in status bar area, branch ahead to skip this part
    cmp(0xe4);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(0x1c);
    BEQ(BHalf);
    // branch to leave if player is too far down
    // do player-to-bg collision detection on one half of player
    // branch ahead if nothing found
    // otherwise check for pipe metatiles
    // if collided with sideways pipe (top), branch ahead
    cmp(0x6b);
    BEQ(BHalf);
    JSR(CheckForClimbMTiles);
    BCC(CheckSideMTiles);
    JMP(BHalf);
}

int BHalf() {
    // if collided with water pipe (top), branch ahead
    // do sub to see if player bumped into anything climbable
    // if not, branch to alternate section of code
    // load block adder offset
    ldy(0xeb);
    iny();
    lda(Player_Y_Position);
    // increment it
    // get player's vertical position
    cmp(0x8);
    BCC(ExSCH);
    // if too high, branch to leave
    cmp(0xd0);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(0x0);
    BNE(SideCheckLoop);
    JMP(ExSCH);
}

int ExSCH() {
    // if too low, branch to leave
    // do player-to-bg collision detection on other half of player
    // if something found, branch
    // otherwise decrement counter
    // run code until both sides of player are checked
    // leave
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
    // check for hidden or coin 1-up blocks
    // branch to leave if either found
    // check for climbable metatiles
    // if not found, skip and continue with code
    // otherwise jump to handle climbing
    // check to see if player touched coin
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
    // if so, execute code to erase coin and award to player 1 coin
    // check for jumpspring metatiles
    // if not found, branch ahead to continue cude
    // otherwise check jumpspring animation control
    // branch to leave if set
    // otherwise jump to impede player's movement
    // get player's state
    ldy(Player_State);
    cpy(0x0);
    BNE(StopPlayerMove);
    ldy(PlayerFacingDir);
    // check for player's state set to normal
    // if not, branch to impede player's movement
    // get player's facing direction
    dey();
    BNE(StopPlayerMove);
    cmp(0x6c);
    BEQ(PipeDwnS);
    cmp(0x1f);
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}

int PipeDwnS() {
    // if facing left, branch to impede movement
    // otherwise check for pipe metatiles
    // if collided with sideways pipe (bottom), branch
    // if collided with water pipe (bottom), continue
    // otherwise branch to impede player's movement
    // check player's attributes
    lda(Player_SprAttrib);
    BNE(PlyrPipe);
    // if already set, branch, do not play sound again
    ldy(Sfx_PipeDown_Injury);
    sty(Square1SoundQueue);
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(0b100000);
    sta(Player_SprAttrib);
    // set background priority bit in player attributes
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
    // get lower nybble of player's horizontal coordinate
    // if at zero, branch ahead to skip this part
    // set default offset for timer setting data
    // load page location for left side of screen
    // if at page zero, use default offset
    // otherwise increment offset
    // set timer for change of area as appropriate
    lda(offsetof(G, AreaChangeTimerData), y);
    sta(ChangeAreaTimer);
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // get number of game engine routine running
    lda(GameEngineSubroutine);
    cmp(0x7);
    BEQ(ExCSM);
    cmp(0x8);
    // if running player entrance routine or
    // player control routine, go ahead and branch to leave
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
    // otherwise set sideways pipe entry routine to run
    // and leave
    // $02 - high nybble of vertical coordinate from block buffer
    // $06-$07 - block buffer address
    // stop player's movement
    // leave
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
    // reset secondary mode
    lda(0x2);
    sta(OperMode);
    // set primary mode to autoctrl mode
    lda(0x18);
    sta(Player_X_Speed);
    JMP(ErACM);
}

int ErACM() {
    // set horizontal speed and continue to erase axe metatile
    // load vertical high nybble offset for block buffer
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
    // check low nybble of horizontal coordinate returned from
    // collision detection routine against certain values, this
    // makes actual physical part of vine or flagpole thinner
    // than 16 pixels
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // leave if too far left or too far right
    return 0;
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(0x24);
    BEQ(FlagpoleCollision);
    // check climbing metatiles
    // branch if flagpole ball found
    cmp(0x25);
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda(GameEngineSubroutine);
    cmp(0x5);
    BEQ(PutPlayerOnVine);
    // check for end-of-level routine running
    // if running, branch to end of climbing code
    lda(0x1);
    sta(PlayerFacingDir);
    inc(ScrollLock);
    // set player's facing direction to right
    // set scroll lock flag
    lda(GameEngineSubroutine);
    cmp(0x4);
    BEQ(RunFR);
    lda(BulletBill_CannonVar);
    JSR(KillEnemies);
    // check for flagpole slide routine running
    // if running, branch to end of flagpole code here
    // load identifier for bullet bills (cannon variant)
    // get rid of them
    lda(Silence);
    sta(EventMusicQueue);
    // silence music
    lsr();
    sta(FlagpoleSoundQueue);
    ldx(0x4);
    // load flagpole sound into flagpole sound queue
    // start at end of vertical coordinate data
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
    // compare with current vertical coordinate data
    // if player's => current, branch to use current offset
    // otherwise decrement offset to use
    // do this until all data is checked (use last one if all checked)
    // store offset here to be used later
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
    // check for climbing metatile used on vines
    BNE(PutPlayerOnVine);
    lda(Player_Y_Position);
    cmp(0x20);
    BCS(PutPlayerOnVine);
    // check player's vertical coordinate
    // for being in status bar area
    // branch if not that far up
    lda(0x1);
    sta(GameEngineSubroutine);
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(0x3);
    // set player state to climbing
    sta(Player_State);
    lda(0x0);
    sta(Player_X_Speed);
    // nullify player's horizontal speed
    // and fractional horizontal movement force
    sta(Player_X_MoveForce);
    lda(Player_X_Position);
    // get player's horizontal coordinate
    sec();
    sbc(ScreenLeft_X_Pos);
    // subtract from left side horizontal coordinate
    cmp(0x10);
    BCS(SetVXPl);
    // if 16 or more pixels difference, do not alter facing direction
    lda(0x2);
    sta(PlayerFacingDir);
    JMP(SetVXPl);
}

int SetVXPl() {
    // otherwise force player to face left
    // get current facing direction, use as offset
    ldy(PlayerFacingDir);
    lda(0x6);
    // get low byte of block buffer address
    asl();
    asl();
    // move low nybble to high
    asl();
    asl();
    clc();
    adc(((offsetof(G, ClimbXPosAdder)) - (1)), y);
    sta(Player_X_Position);
    lda(0x6);
    BNE(ExPVne);
    lda(ScreenRight_PageLoc);
    // add pixels depending on facing direction
    // store as player's horizontal coordinate
    // get low byte of block buffer address again
    // if not zero, branch
    // load page location of right side of screen
    clc();
    adc(((offsetof(G, ClimbPLocAdder)) - (1)), y);
    sta(Player_PageLoc);
    JMP(ExPVne);
}

int ExPVne() {
    // add depending on facing location
    // store as player's page location
    // finally, we're done!
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
    // check for hidden coin block
    // branch to leave if found
    // check for hidden 1-up block
    // leave with zero flag set if either found
    return 0;
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // do sub to check if player landed on jumpspring
    // if carry not set, jumpspring not found, therefore leave
    lda(0x70);
    sta(VerticalForce);
    // otherwise set vertical movement force for player
    lda(0xf9);
    sta(JumpspringForce);
    // set default jumpspring force
    lda(0x3);
    sta(JumpspringTimer);
    // set jumpspring timer to be used later
    lsr();
    sta(JumpspringAnimCtrl);
    JMP(ExCJSp);
}

int ExCJSp() {
    // set jumpspring animation control to start animating
    // and leave
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
    // check for top jumpspring metatile
    // branch to set carry if found
    // check for bottom jumpspring metatile
    // clear carry flag
    // branch to use cleared carry if not found
    // set carry if found
    sec();
    JMP(NoJSFnd);
}

int NoJSFnd() {
    // leave
    return 0;
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda(Up_Down_Buttons);
    anda(0b100);
    BEQ(ExPipeE);
    // check saved controller bits from earlier
    // for pressing down
    // if not pressing down, branch to leave
    lda(0x0);
    cmp(0x11);
    BNE(ExPipeE);
    // check right foot metatile for warp pipe right metatile
    // branch to leave if not found
    lda(0x1);
    cmp(0x10);
    BNE(ExPipeE);
    // check left foot metatile for warp pipe left metatile
    // branch to leave if not found
    lda(0x30);
    sta(ChangeAreaTimer);
    // set timer for change of area
    lda(0x3);
    sta(GameEngineSubroutine);
    // set to run vertical pipe entry routine on next frame
    lda(Sfx_PipeDown_Injury);
    sta(Square1SoundQueue);
    // load pipedown/injury sound
    lda(0b100000);
    sta(Player_SprAttrib);
    lda(WarpZoneControl);
    BEQ(ExPipeE);
    anda(0b11);
    // set background priority bit in player's attributes
    // check warp zone control
    // branch to leave if none found
    // mask out all but 2 LSB
    asl();
    asl();
    tax();
    lda(Player_X_Position);
    // multiply by four
    // save as offset to warp zone numbers (starts at left pipe)
    // get player's horizontal position
    cmp(0x60);
    BCC(GetWNum);
    inx();
    // if player at left, not near middle, use offset and skip ahead
    // otherwise increment for middle pipe
    cmp(0xa0);
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // if player at middle, but not too far right, use offset and skip
    // otherwise increment for last pipe
    // get warp zone numbers
    ldy(offsetof(G, WarpZoneNumbers), x);
    dey();
    sty(WorldNumber);
    ldx(offsetof(G, WorldAddrOffsets), y);
    lda(offsetof(G, AreaAddrOffsets), x);
    sta(AreaPointer);
    // decrement for use as world number
    // store as world number and offset
    // get offset to where this world's area offsets are
    // get area offset based on world offset
    // store area offset here to be used to change areas
    lda(Silence);
    sta(EventMusicQueue);
    // silence music
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
    // initialize starting page number
    // initialize area number used for area address offset
    // initialize level number used for world display
    // initialize mode of entry
    // set flag for hidden 1-up blocks
    // set flag to load new game timer
    // leave!!!
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
    // initialize value here
    // get player's horizontal speed
    // check value set earlier for
    // left side collision
    // if right side collision, skip this part
    // return value to X
    // if player moving to the left,
    // branch to invert bit and leave
    // otherwise load A with value to be used later
    // and jump to affect movement
    // return $02 to X
    ldx(0x2);
    cpy(0x1);
    BPL(ExIPM);
    lda(0x1);
    JMP(NXSpd);
}

int NXSpd() {
    ldy(0x10);
    sty(SideCollisionTimer);
    // set timer of some sort
    ldy(0x0);
    sty(Player_X_Speed);
    cmp(0x0);
    BPL(PlatF);
    dey();
    JMP(PlatF);
}

int PlatF() {
    // nullify player's horizontal speed
    // if value set in A not set to $ff,
    // branch ahead, do not decrement Y
    // otherwise decrement Y now
    // store Y as high bits of horizontal adder
    sty(0x0);
    clc();
    adc(Player_X_Position);
    sta(Player_X_Position);
    // add contents of A to player's horizontal
    // position to move player left or right
    lda(Player_PageLoc);
    adc(0x0);
    sta(Player_PageLoc);
    JMP(ExIPM);
}

int ExIPM() {
    // add high bits and carry to
    // page location if necessary
    // invert contents of X
    txa();
    eor(0xff);
    anda(Player_CollisionBits);
    sta(Player_CollisionBits);
    // mask out bit that was set here
    // store to clear bit
    return 0;
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, SolidMTileUpperExt), x);
    // find appropriate offset based on metatile's 2 MSB
    // compare current metatile with solid metatiles
    return 0;
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, ClimbMTileUpperExt), x);
    // find appropriate offset based on metatile's 2 MSB
    // compare current metatile with climbable metatiles
    return 0;
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(0xc2);
    BEQ(CoinSd);
    cmp(0xc3);
    BEQ(CoinSd);
    clc();
    // check for regular coin
    // branch if found
    // check for underwater coin
    // branch if found
    // otherwise clear carry and leave
    return 0;
    JMP(CoinSd);
}

int CoinSd() {
    lda(Sfx_CoinGrab);
    sta(Square2SoundQueue);
    // load coin grab sound and leave
    return 0;
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(0b11000000);
    // save metatile value into Y
    // mask out all but 2 MSB
    asl();
    rol();
    // shift and rotate d7-d6 to d1-d0
    rol();
    tax();
    tya();
    JMP(ExEBG);
}

int ExEBG() {
    // use as offset for metatile data
    // get original metatile value back
    // leave
    return 0;
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda(Enemy_State, x);
    // check enemy state for d6 set
    anda(0b100000);
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // if set, branch to leave
    // otherwise, do a subroutine here
    // if enemy vertical coord + 62 < 68, branch to leave
    ldy(Enemy_ID, x);
    cpy(Spiny);
    // if enemy object is not spiny, branch elsewhere
    BNE(DoIDCheckBGColl);
    lda(Enemy_Y_Position, x);
    cmp(0x25);
    // if enemy vertical coordinate < 36 branch to leave
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
    // check for some other enemy object
    // branch if not found
    // otherwise jump elsewhere
    // check for hammer bro
    cpy(HammerBro);
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // branch if not found
    // otherwise jump elsewhere
    // if enemy object is spiny, branch
    cpy(Spiny);
    BEQ(YesIn);
    cpy(PowerUpObject);
    // if special power-up object, branch
    BEQ(YesIn);
    cpy(0x7);
    // if enemy object =>$07, branch to leave
    BCS(ExEBGChk);
    JMP(YesIn);
}

int YesIn() {
    // if enemy object < $07, or = $12 or $2e, do this sub
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
    // otherwise skip and do something else
    // $02 - vertical coordinate from block buffer routine
    // if something is underneath enemy, find out what
    // if blank $26, coins, or hidden blocks, jump, enemy falls through
    cmp(0x23);
    BNE(LandEnemyProperly);
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    // check for blank metatile $23 and branch if not found
    // get vertical coordinate used to find block
    // store default blank metatile in that spot so we won't
    // trigger this routine accidentally again
    lda(Enemy_ID, x);
    cmp(0x15);
    // if enemy object => $15, branch ahead
    BCS(ChkToStunEnemies);
    cmp(Goomba);
    // if enemy object not goomba, branch ahead of this routine
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(0x1);
    // award 100 points for hitting block beneath enemy
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(0x9);
    // perform many comparisons on enemy object identifier
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
    // if the enemy object identifier is equal to the values
    // $09, $0e, $0f or $10, it will be modified, and not
    // modified if not any of those values, note that piranha plant will
    // always fail this test because A will still have vertical
    // coordinate from previous addition, also these comparisons
    // are only necessary if branching from $d7a1
    // erase all but LSB, essentially turning enemy object
    anda(0b1);
    sta(Enemy_ID, x);
    JMP(SetStun);
}

int SetStun() {
    // into green or red koopa troopa to demote them
    // load enemy state
    lda(Enemy_State, x);
    anda(0b11110000);
    // save high nybble
    ora(0b10);
    sta(Enemy_State, x);
    // set d1 of enemy state
    dec(Enemy_Y_Position, x);
    dec(Enemy_Y_Position, x);
    // subtract two pixels from enemy's vertical position
    lda(Enemy_ID, x);
    cmp(Bloober);
    // check for bloober object
    BEQ(SetWYSpd);
    lda(0xfd);
    // set default vertical speed
    ldy(AreaType);
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // if area type not water, set as speed, otherwise
    // change the vertical speed
    lda(0xff);
    JMP(SetNotW);
}

int SetNotW() {
    // set vertical speed now
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
    // check for bullet bill (cannon variant)
    BEQ(NoCDirF);
    cmp(BulletBill_FrenzyVar);
    BEQ(NoCDirF);
    sty(Enemy_MovingDir, x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // check for bullet bill (frenzy variant)
    // branch if either found, direction does not change
    // store as moving direction
    // decrement and use as offset
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
    // $04 - low nybble of vertical coordinate from block buffer routine
    // check lower nybble of vertical coordinate saved earlier
    sec();
    sbc(0x8);
    cmp(0x5);
    BCS(ChkForRedKoopa);
    // subtract eight pixels
    // used to determine whether enemy landed from falling
    // branch if lower nybble in range of $0d-$0f before subtract
    lda(Enemy_State, x);
    anda(0b1000000);
    // branch if d6 in enemy state is set
    BNE(LandEnemyInitState);
    lda(Enemy_State, x);
    asl();
    // branch if d7 in enemy state is not set
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}

int SChkA() {
    // if lower nybble < $0d, d7 set but d6 not set, jump here
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}

int ChkLandedEnemyState() {
    lda(Enemy_State, x);
    // if enemy in normal state, branch back to jump here
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
    // if in state used by spiny's egg
    // then branch elsewhere
    // if already in state used by koopas and buzzy beetles
    // or in higher numbered state, branch to leave
    // load enemy state again (why?)
    // if not in $02 state (used by koopas and buzzy beetles)
    // then branch elsewhere
    // load default timer here
    // check enemy identifier for spiny
    cpy(Spiny);
    BNE(SetForStn);
    lda(0x0);
    JMP(SetForStn);
}

int SetForStn() {
    // branch if not found
    // set timer for $00 if spiny
    // set timer here
    sta(EnemyIntervalTimer, x);
    lda(0x3);
    sta(Enemy_State, x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // set state here, apparently used to render
    // upside-down koopas and buzzy beetles
    // then land it properly
    // then leave
    return 0;
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda(Enemy_ID, x);
    cmp(Goomba);
    // check enemy identifier for goomba
    // branch if found
    BEQ(LandEnemyInitState);
    cmp(Spiny);
    BNE(InvtD);
    // check for spiny
    // branch if not found
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // send enemy moving to the right by default
    lda(0x8);
    sta(Enemy_X_Speed, x);
    // set horizontal speed accordingly
    lda(FrameCounter);
    anda(0b111);
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // if timed appropriately, spiny will skip over
    // trying to face the player
    // load 1 for enemy to face the left (inverted here)
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp(Enemy_MovingDir, x);
    // compare direction in A with current direction in memory
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // land enemy properly
    lda(Enemy_State, x);
    anda(0b10000000);
    // if d7 of enemy state is set, branch
    BNE(NMovShellFallBit);
    lda(0x0);
    sta(Enemy_State, x);
    // otherwise initialize enemy state and leave
    // note this will also turn spiny's egg into spiny
    return 0;
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda(Enemy_State, x);
    anda(0b10111111);
    // nullify d6 of enemy state, save other bits
    // and store, then leave
    sta(Enemy_State, x);
    return 0;
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda(Enemy_ID, x);
    // check for red koopa troopa $03
    cmp(RedKoopa);
    BNE(Chk2MSBSt);
    // branch if not found
    lda(Enemy_State, x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // if enemy found and in normal state, branch
    // save enemy state into Y
    lda(Enemy_State, x);
    tay();
    asl();
    BCC(GetSteFromD);
    // check for d7 set
    // branch if not set
    lda(Enemy_State, x);
    ora(0b1000000);
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // set d6
    // jump ahead of this part
    // load new enemy state with old as offset
    lda(offsetof(G, EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // set as new state
    sta(Enemy_State, x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda(Enemy_Y_Position, x);
    cmp(0x20);
    // if enemy within status bar, branch to leave
    // because there's nothing there that impedes movement
    BCC(ExESdeC);
    ldy(0x16);
    lda(0x2);
    sta(0xeb);
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // start by finding block to the left of enemy ($00,$14)
    // set value here in what is also used as
    // OAM data offset
    // check value
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
    // compare value against moving direction
    // branch if different and do not seek block there
    // set flag in A for save horizontal coordinate
    // find block to left or right of enemy object
    // if nothing found, branch
    // check for non-solid blocks
    // branch if not found
    // move to the next direction
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
    // check if we're on the special use slot
    // and if so, branch ahead and do not play sound
    // if enemy state d7 not set, branch
    // ahead and do not play sound
    BCC(NoBump);
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NoBump);
}

int NoBump() {
    // otherwise, play bump sound
    // sound will never be played if branching from ChkForRedKoopa
    // check for hammer bro
    lda(Enemy_ID, x);
    cmp(0x5);
    BNE(InvEnemyDir);
    // branch if not found
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
    // jump to turn the enemy around
    // $00 - used to hold horizontal difference between player and enemy
    // get distance between enemy object's
    // horizontal coordinate and the player's
    // horizontal coordinate
    // and store here
    lda(Enemy_PageLoc, x);
    sbc(Player_PageLoc);
    // subtract borrow, then leave
    return 0;
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // do something here to vertical speed and something else
    lda(Enemy_Y_Position, x);
    anda(0b11110000);
    ora(0b1000);
    sta(Enemy_Y_Position, x);
    // save high nybble of vertical coordinate, and
    // set d3, then store, probably used to set enemy object
    // neatly on whatever it's landing on
    return 0;
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda(Enemy_Y_Position, x);
    clc();
    // add 62 pixels to enemy object's
    // vertical coordinate
    adc(0x3e);
    cmp(0x44);
    return 0;
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // do a sub here
    // if enemy vertical coord + 62 < 68, branch to leave
    lda(Enemy_Y_Speed, x);
    clc();
    // add two to vertical speed
    adc(0x2);
    cmp(0x3);
    // if green paratroopa not falling, branch ahead
    BCC(DoSide);
    JSR(ChkUnderEnemy);
    BEQ(DoSide);
    JSR(ChkForNonSolids);
    BEQ(DoSide);
    JSR(EnemyLanding);
    // otherwise, check to see if green paratroopa is
    // standing on anything, then branch to same place if not
    // check for non-solid blocks
    // branch if found
    // change vertical coordinate and speed
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    JMP(DoSide);
}

int DoSide() {
    // make the paratroopa jump again
    // check for horizontal blockage, then leave
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}

int HammerBroBGColl() {
    JSR(ChkUnderEnemy);
    // check to see if hammer bro is standing on anything
    BEQ(NoUnderHammerBro);
    cmp(0x23);
    // check for blank metatile $23 and branch if not found
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(0xfc);
    // do this sub to kill enemy
    // alter vertical speed of enemy and leave
    sta(Enemy_Y_Speed, x);
    return 0;
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda(EnemyFrameTimer, x);
    BNE(NoUnderHammerBro);
    // check timer used by hammer bro
    // branch if not expired
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
    // if hammer bro is not standing on anything, set d0
    // in the enemy state to indicate jumping or falling, then leave
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
    // blank metatile used for vines?
    BEQ(NSFnd);
    cmp(0xc2);
    // regular coin?
    BEQ(NSFnd);
    cmp(0xc3);
    // underwater coin?
    BEQ(NSFnd);
    cmp(0x5f);
    // hidden coin block?
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
    // check fireball's vertical coordinate
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
    // if within the status bar area of the screen, branch ahead
    // do fireball to background collision detection on bottom of it
    // if nothing underneath fireball, branch
    // check for non-solid metatiles
    // branch if any found
    // if fireball's vertical speed set to move upwards,
    // branch to set exploding bit in fireball's state
    // if bouncing flag already set,
    // branch to set exploding bit in fireball's state
    lda(0xfd);
    sta(Fireball_Y_Speed, x);
    // otherwise set vertical speed to move upwards (give it bounce)
    lda(0x1);
    sta(FireballBouncingFlag, x);
    // set bouncing flag
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
    // set exploding flag in fireball's state
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    return 0;
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // add seven bytes to offset
    // to use in routines as offset for fireball
    adc(0x7);
    tax();
    ldy(0x2);
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // add nine bytes to offset
    // to use in routines as offset for misc object
    adc(0x9);
    tax();
    ldy(0x6);
    JMP(FBallB);
}

int FBallB() {
    // set offset for relative coordinates
    // get bounding box coordinates
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}

int GetEnemyBoundBox() {
    ldy(0x48);
    // store bitmask here for now
    sty(0x0);
    ldy(0x44);
    // store another bitmask here for now and jump
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(0x8);
    // store bitmask here for now
    sty(0x0);
    ldy(0x4);
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda(Enemy_X_Position, x);
    sec();
    // get enemy object position relative
    // to the left side of the screen
    sbc(ScreenLeft_X_Pos);
    sta(0x1);
    lda(Enemy_PageLoc, x);
    sbc(ScreenLeft_PageLoc);
    BMI(CMBits);
    // store here
    // subtract borrow from current page location
    // of left side
    // if enemy object is beyond left edge, branch
    ora(0x1);
    BEQ(CMBits);
    ldy(0x0);
    JMP(CMBits);
}

int CMBits() {
    // if precisely at the left edge, branch
    // if to the right of left edge, use value in $00 for A
    // otherwise use contents of Y
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
    // add 1 to offset to properly address
    // the enemy object memory locations
    adc(0x1);
    tax();
    ldy(0x1);
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}

int MoveBoundBoxOffscreen() {
    txa();
    // multiply offset by 4
    asl();
    asl();
    tay();
    // use as offset here
    lda(0xff);
    sta(EnemyBoundingBoxCoord, y);
    // load value into four locations here and leave
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
    // save offset here
    // store object coordinates relative to screen
    // vertically and horizontally, respectively
    lda(SprObject_Rel_XPos, y);
    sta(0x1);
    txa();
    // multiply offset by four and save to stack
    asl();
    asl();
    pha();
    tay();
    lda(SprObj_BoundBoxCtrl, x);
    asl();
    // use as offset for Y, X is left alone
    // load value here to be used as offset for X
    // multiply that by four and use as X
    asl();
    tax();
    lda(0x1);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    sta(BoundingBox_UL_Corner, y);
    // add the first number in the bounding box data to the
    // relative horizontal coordinate using enemy object offset
    // and store somewhere using same offset * 4
    // store here
    lda(0x1);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    inx();
    // add the third number in the bounding box data to the
    // relative horizontal coordinate and store
    // increment both offsets
    iny();
    lda(0x2);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    // add the second number to the relative vertical coordinate
    // using incremented offset and store using the other
    // incremented offset
    sta(BoundingBox_UL_Corner, y);
    lda(0x2);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    pla();
    tay();
    ldx(0x0);
    // add the fourth number to the relative vertical coordinate
    // and store
    // get original offset loaded into $00 * y from stack
    // use as Y
    // get original offset and use as X again
    return 0;
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda(ScreenLeft_X_Pos);
    clc();
    // add 128 pixels to left side of screen
    // and store as horizontal coordinate of middle
    adc(0x80);
    sta(0x2);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    // add carry to page location of left side of screen
    // and store as page location of middle
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
    // get horizontal coordinate
    // compare against middle horizontal coordinate
    // get page location
    // subtract from middle page location
    // if object is on the left side of the screen, branch
    // check right-side edge of bounding box for offscreen
    // coordinates, branch if still on the screen
    // load offscreen value here to use on one or both horizontal sides
    // check left-side edge of bounding box for offscreen
    // coordinates, and branch if still on the screen
    // store offscreen value for left side
    // store offscreen value for right side
    sta(BoundingBox_DR_XPos, y);
    JMP(NoOfs);
}

int NoOfs() {
    // get object offset and leave
    ldx(ObjectOffset);
    return 0;
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda(BoundingBox_UL_XPos, y);
    BPL(NoOfs2);
    cmp(0xa0);
    BCC(NoOfs2);
    // check left-side edge of bounding box for offscreen
    // coordinates, and branch if still on the screen
    // check to see if left-side edge is in the middle of the
    // screen or really offscreen, and branch if still on
    lda(0x0);
    ldx(BoundingBox_DR_XPos, y);
    BPL(SOLft);
    sta(BoundingBox_DR_XPos, y);
    JMP(SOLft);
}

int SOLft() {
    // check right-side edge of bounding box for offscreen
    // coordinates, branch if still onscreen
    // store offscreen value for right side
    // store offscreen value for left side
    sta(BoundingBox_UL_XPos, y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // get object offset and leave
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
    // save contents of Y here
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
    // check to see if the vertical bottom of the box
    // is greater than the vertical top
    // if somehow less, vertical wrap collision, thus branch
    // otherwise compare horizontal right or vertical bottom
    // of first box with horizontal left or vertical top of second box
    // if equal or greater, collision, thus branch
    // otherwise return with carry clear and Y = $0006
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
    // compare first and second box horizontal left/vertical top again
    // if first coordinate = second, collision, thus branch
    // if not, compare with second object right or bottom edge
    // if left/top of first less than or equal to right/bottom of second
    // then collision, thus branch
    // otherwise check to see if top of first box is greater than bottom
    // if less than or equal, no collision, branch to end
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
    // increment offsets on both objects to check
    // the vertical coordinates
    // decrement counter to reflect this
    // if counter not expired, branch to loop
    // otherwise we already did both sets, therefore collision, so set carry
    // load original value set here earlier, then leave
    return 0;
    JMP(BlockBufferChk_Enemy);
}

int BlockBufferChk_Enemy() {
    pha();
    // $02 - modified y coordinate
    // $04 - comes in with offset to block buffer adder data, goes out with low nybble x/y coordinate
    // $06-$07 - block buffer address
    // save contents of A to stack
    txa();
    clc();
    // add 1 to X to run sub with enemy offset in mind
    adc(0x1);
    tax();
    pla();
    // pull A from stack and jump elsewhere
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(0xd);
    // supposedly used once to set offset for
    // miscellaneous objects
    tax();
    ldy(0x1b);
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(0x1a);
    // set offset for block buffer adder data
    txa();
    clc();
    adc(0x7);
    // add seven bytes to use
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // set A to return vertical coordinate
    lda(0x0);
    JMP(BBChk_E);
}

int BBChk_E() {
    // do collision detection subroutine for sprite object
    JSR(BlockBufferCollision);
    ldx(ObjectOffset);
    cmp(0x0);
    // get object offset
    // check to see if object bumped into anything
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
    // save contents of A to stack
    // save contents of Y here
    // add horizontal coordinate
    // of object to value obtained using Y as offset
    adc(SprObject_X_Position, x);
    sta(0x5);
    // store here
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
    // add carry to page location
    // get LSB, mask out all other bits
    // move to carry
    // get stored value
    // rotate carry to MSB of A
    // and effectively move high nybble to
    // lower, LSB which became MSB will be
    // d4 at this point
    // get address of block buffer into $06, $07
    // get old contents of Y
    // get vertical coordinate of object
    clc();
    adc(offsetof(G, BlockBuffer_Y_Adder), y);
    anda(0b11110000);
    // add it to value obtained using Y as offset
    // mask out low nybble
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
    // subtract 32 pixels for the status bar
    // store result here
    // use as offset for block buffer
    // check current content of block buffer
    // and store here
    // get old contents of Y again
    // pull A from stack
    // if A = 1, branch
    // if A = 0, load vertical coordinate
    // and jump
    // otherwise load horizontal coordinate
    lda(SprObject_X_Position, x);
    JMP(RetYC);
}

int RetYC() {
    // and mask out high nybble
    anda(0b1111);
    sta(0x4);
    lda(0x3);
    return 0;
    JMP(DrawVine);
}

int DrawVine() {
    sty(0x0);
    lda(Enemy_Rel_YPos);
    // save offset here
    // get relative vertical coordinate
    clc();
    adc(offsetof(G, VineYPosAdder), y);
    ldx(VineObjOffset, y);
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    JSR(SixSpriteStacker);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // add value using offset in Y to get value
    // get offset to vine
    // get sprite data offset
    // store sprite data offset here
    // stack six sprites on top of each other vertically
    // get relative horizontal coordinate
    // store in first, third and fifth sprites
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    sta(((Sprite_X_Position) + (12)), y);
    // add six pixels to second, fourth and sixth sprites
    // to give characteristic staggered vine shape to
    // our vertical stack of sprites
    sta(((Sprite_X_Position) + (20)), y);
    lda(0b100001);
    sta(Sprite_Attributes, y);
    // set bg priority and palette attribute bits
    // set in first, third and fifth sprites
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // additionally, set horizontal flip bit
    // for second, fourth and sixth sprites
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    ldx(0x5);
    JMP(VineTL);
}

int VineTL() {
    // set tiles for six sprites
    // set tile number for sprite
    lda(0xe1);
    sta(Sprite_Tilenumber, y);
    iny();
    // move offset to next sprite data
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(0x2);
    lda(0x0);
    BNE(SkpVTop);
    // move onto next sprite
    // loop until all sprites are done
    // get original offset
    // get offset to vine adding data
    // if offset not zero, skip this part
    lda(0xe0);
    sta(Sprite_Tilenumber, y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // set other tile number for top of vine
    // start with the first sprite again
    ldx(0x0);
    JMP(ChkFTop);
}

int ChkFTop() {
    // get original starting vertical coordinate
    lda(VineStart_Y_Position);
    sec();
    sbc(Sprite_Y_Position, y);
    cmp(0x64);
    BCC(NextVSp);
    // subtract top-most sprite's Y coordinate
    // if two coordinates are less than 100/$64 pixels
    // apart, skip this to leave sprite alone
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(NextVSp);
}

int NextVSp() {
    // otherwise move sprite offscreen
    // move offset to next OAM data
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x6);
    // move onto next sprite
    // do this until all sprites are checked
    BNE(ChkFTop);
    ldy(0x0);
    // return offset set earlier
    return 0;
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(0x6);
    JMP(StkLp);
}

int StkLp() {
    // do six sprites
    // store X or Y coordinate into OAM data
    sta(Sprite_Data, y);
    clc();
    adc(0x8);
    // add eight pixels
    iny();
    iny();
    // move offset four bytes forward
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(0x2);
    // do another sprite
    // do this until all sprites are done
    // get saved OAM data offset and leave
    return 0;
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy(Misc_SprDataOffset, x);
    // get misc object OAM data offset
    lda(TimerControl);
    BNE(ForceHPose);
    lda(Misc_State, x);
    anda(0b1111111);
    cmp(0x1);
    BEQ(GetHPose);
    JMP(ForceHPose);
}

int ForceHPose() {
    // if master timer control set, skip this part
    // otherwise get hammer's state
    // mask out d7
    // check to see if set to 1 yet
    // if so, branch
    // reset offset here
    ldx(0x0);
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // do unconditional branch to rendering part
    // get frame counter
    lda(FrameCounter);
    lsr();
    // move d3-d2 to d1-d0
    lsr();
    anda(0b11);
    tax();
    JMP(RenderH);
}

int RenderH() {
    // mask out all but d1-d0 (changes every four frames)
    // use as timing offset
    // get relative vertical coordinate
    lda(Misc_Rel_YPos);
    clc();
    adc(offsetof(G, FirstSprYPos), x);
    sta(Sprite_Y_Position, y);
    // add first sprite vertical adder based on offset
    // store as sprite Y coordinate for first sprite
    clc();
    adc(offsetof(G, SecondSprYPos), x);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // add second sprite vertical adder based on offset
    // store as sprite Y coordinate for second sprite
    // get relative horizontal coordinate
    clc();
    adc(offsetof(G, FirstSprXPos), x);
    sta(Sprite_X_Position, y);
    // add first sprite horizontal adder based on offset
    // store as sprite X coordinate for first sprite
    clc();
    adc(offsetof(G, SecondSprXPos), x);
    sta(((Sprite_X_Position) + (4)), y);
    // add second sprite horizontal adder based on offset
    // store as sprite X coordinate for second sprite
    lda(offsetof(G, FirstSprTilenum), x);
    sta(Sprite_Tilenumber, y);
    // get and store tile number of first sprite
    lda(offsetof(G, SecondSprTilenum), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    // get and store tile number of second sprite
    lda(offsetof(G, HammerSprAttrib), x);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    // get and store attribute bytes for both
    // note in this case they use the same data
    // get misc object offset
    lda(Misc_OffscreenBits);
    anda(0b11111100);
    BEQ(NoHOffscr);
    // check offscreen bits
    // if all bits clear, leave object alone
    lda(0x0);
    sta(Misc_State, x);
    // otherwise nullify misc object state
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // do sub to move hammer sprites offscreen
    // leave
    return 0;
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // get sprite data offset for flagpole flag
    // get relative horizontal coordinate
    // store as X coordinate for first sprite
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // add eight pixels and store
    // as X coordinate for second and third sprites
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
    // add twelve more pixels and
    // store here to be used later by floatey number
    // get vertical coordinate
    // and do sub to dump into first and second sprites
    // add eight pixels
    // and store into third sprite
    // get vertical coordinate for floatey number
    // store it here
    lda(0x1);
    sta(0x3);
    sta(0x4);
    sta(Sprite_Attributes, y);
    // set value for flip which will not be used, and
    // attribute byte for floatey number
    // set attribute bytes for all three sprites
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (8)), y);
    lda(0x7e);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (8)), y);
    // put triangle shaped tile
    // into first and third sprites
    lda(0x7f);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(FlagpoleCollisionYPos);
    BEQ(ChkFlagOffscreen);
    // put skull tile into second sprite
    // get vertical coordinate at time of collision
    // if zero, branch ahead
    tya();
    clc();
    // add 12 bytes to sprite data offset
    adc(0xc);
    tay();
    lda(FlagpoleScore);
    asl();
    // put back in Y
    // get offset used to award points for touching flagpole
    // multiply by 2 to get proper offset here
    tax();
    lda(offsetof(G, FlagpoleScoreNumTiles), x);
    // get appropriate tile data
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
    // and into first row sprites
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
    // get OAM data offset
    // store here
    // add 3 to it for offset
    // to X coordinate
    iny();
    lda(Enemy_Rel_XPos);
    JSR(SixSpriteStacker);
    // get horizontal relative coordinate
    // store X coordinates using A as base, stack horizontally
    ldx(ObjectOffset);
    lda(Enemy_Y_Position, x);
    JSR(DumpFourSpr);
    // get vertical coordinate
    // dump into first four sprites as Y coordinate
    ldy(AreaType);
    cpy(0x3);
    // check for castle-type level
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
    // get OAM data offset
    // store vertical coordinate or offscreen
    // coordinate into last two sprites as Y coordinate
    // load default tile for platform (girder)
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
    // get enemy object buffer offset
    // increment Y for tile offset
    // dump tile number into all six sprites
    // set palette controls
    // increment Y for sprite attributes
    // dump attributes into all six sprites
    // increment X for enemy objects
    // get offscreen bits again
    dex();
    ldy(Enemy_SprDataOffset, x);
    asl();
    pha();
    // get OAM data offset
    // rotate d7 into carry, save remaining
    // bits to the stack
    BCC(SChk2);
    lda(0xf8);
    // if d7 was set, move first sprite offscreen
    sta(Sprite_Y_Position, y);
    JMP(SChk2);
}

int SChk2() {
    // get bits from stack
    pla();
    asl();
    pha();
    // rotate d6 into carry
    // save to stack
    BCC(SChk3);
    lda(0xf8);
    // if d6 was set, move second sprite offscreen
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(SChk3);
}

int SChk3() {
    // get bits from stack
    pla();
    asl();
    pha();
    // rotate d5 into carry
    // save to stack
    BCC(SChk4);
    lda(0xf8);
    // if d5 was set, move third sprite offscreen
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(SChk4);
}

int SChk4() {
    // get bits from stack
    pla();
    asl();
    pha();
    // rotate d4 into carry
    // save to stack
    BCC(SChk5);
    lda(0xf8);
    // if d4 was set, move fourth sprite offscreen
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SChk5);
}

int SChk5() {
    // get bits from stack
    pla();
    asl();
    pha();
    // rotate d3 into carry
    // save to stack
    BCC(SChk6);
    lda(0xf8);
    // if d3 was set, move fifth sprite offscreen
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SChk6);
}

int SChk6() {
    // get bits from stack
    pla();
    asl();
    BCC(SLChk);
    // rotate d2 into carry
    // save to stack
    lda(0xf8);
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(SLChk);
}

int SLChk() {
    // if d2 was set, move sixth sprite offscreen
    // check d7 of offscreen bits
    lda(Enemy_OffscreenBits);
    asl();
    // and if d7 is not set, skip sub
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
    // get frame counter
    // divide by 2
    // branch if d0 not set to raise number every other frame
    // otherwise, decrement vertical coordinate
    // get vertical coordinate
    lda(Misc_Y_Position, x);
    JSR(DumpTwoSpr);
    lda(Misc_Rel_XPos);
    sta(Sprite_X_Position, y);
    // dump into both sprites
    // get relative horizontal coordinate
    // store as X coordinate for first sprite
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // add eight pixels
    // store as X coordinate for second sprite
    lda(0x2);
    sta(Sprite_Attributes, y);
    // store attribute byte in both sprites
    sta(((Sprite_Attributes) + (4)), y);
    lda(0xf7);
    sta(Sprite_Tilenumber, y);
    lda(0xfb);
    // put tile numbers into both sprites
    // that resemble "200"
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
    // get coin/floatey number's OAM data offset
    // get state of misc object
    // if 2 or greater,
    // branch to draw floatey number
    // store vertical coordinate as
    // Y coordinate for first sprite
    clc();
    adc(0x8);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // add eight pixels
    // store as Y coordinate for second sprite
    // get relative horizontal coordinate
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
    // store as X coordinate for first and second sprites
    // get frame counter
    // divide by 2 to alter every other frame
    // mask out d2-d1
    // use as graphical offset
    // load tile number
    // increment OAM data offset to write tile numbers
    // do sub to dump tile number into both sprites
    // decrement to get old offset
    lda(0x2);
    sta(Sprite_Attributes, y);
    // set attribute byte in first sprite
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // set attribute byte with vertical flip in second sprite
    // get misc object offset
    // leave
    return 0;
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy(((Enemy_SprDataOffset) + (5)));
    lda(Enemy_Rel_YPos);
    // get power-up's sprite data offset
    // get relative vertical coordinate
    clc();
    adc(0x8);
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    ldx(PowerUpType);
    lda(offsetof(G, PowerUpAttributes), x);
    ora(((Enemy_SprAttrib) + (5)));
    sta(0x4);
    // add eight pixels
    // store result here
    // get relative horizontal coordinate
    // store here
    // get power-up type
    // get attribute data for power-up type
    // add background priority bit if set
    // store attributes here
    txa();
    pha();
    // save power-up type to the stack
    asl();
    asl();
    tax();
    // multiply by four to get proper offset
    // use as X
    lda(0x1);
    sta(0x7);
    sta(0x3);
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda(offsetof(G, PowerUpGfxTable), x);
    // load left tile of power-up object
    sta(0x0);
    lda(((offsetof(G, PowerUpGfxTable)) + (1)), x);
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BPL(PUpDrawLoop);
    ldy(((Enemy_SprDataOffset) + (5)));
    pla();
    BEQ(PUpOfs);
    // load right tile
    // branch to draw one row of our power-up object
    // decrement counter
    // branch until two rows are drawn
    // get sprite data offset again
    // pull saved power-up type from the stack
    // if regular mushroom, branch, do not change colors or flip
    cmp(0x3);
    BEQ(PUpOfs);
    sta(0x0);
    lda(FrameCounter);
    lsr();
    anda(0b11);
    ora(((Enemy_SprAttrib) + (5)));
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // if 1-up mushroom, branch, do not change colors or flip
    // store power-up type here now
    // get frame counter
    // divide by 2 to change colors every two frames
    // mask out all but d1 and d0 (previously d2 and d1)
    // add background priority bit if any set
    // set as new palette bits for top left and
    // top right sprites for fire flower and star
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
    // set horizontal flip bit for top right sprite
    sta(((Sprite_Attributes) + (4)), y);
    lda(((Sprite_Attributes) + (12)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    JMP(PUpOfs);
}

int PUpOfs() {
    // set horizontal flip bit for bottom right sprite
    // note these are only done for fire flower and star power-ups
    // jump to check to see if power-up is offscreen at all, then leave
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}

int EnemyGfxHandler() {
    lda(Enemy_Y_Position, x);
    // get enemy object vertical position
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    // get enemy object horizontal position
    // relative to screen
    ldy(Enemy_SprDataOffset, x);
    sty(0xeb);
    // get sprite data offset
    lda(0x0);
    sta(VerticalFlipFlag);
    // initialize vertical flip flag by default
    lda(Enemy_MovingDir, x);
    sta(0x3);
    // get enemy object moving direction
    lda(Enemy_SprAttrib, x);
    sta(0x4);
    // get enemy object sprite attributes
    lda(Enemy_ID, x);
    cmp(PiranhaPlant);
    BNE(CheckForRetainerObj);
    // is enemy object piranha plant?
    // if not, branch
    ldy(PiranhaPlant_Y_Speed, x);
    BMI(CheckForRetainerObj);
    // if piranha plant moving upwards, branch
    ldy(EnemyFrameTimer, x);
    BEQ(CheckForRetainerObj);
    return 0;
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda(Enemy_State, x);
    // store enemy state
    sta(0xed);
    anda(0b11111);
    // nullify all but 5 LSB and use as Y
    tay();
    lda(Enemy_ID, x);
    // check for mushroom retainer/princess object
    cmp(RetainerObject);
    BNE(CheckForBulletBillCV);
    ldy(0x0);
    lda(0x1);
    // if not found, branch
    // if found, nullify saved state in Y
    // set value that will not be used
    sta(0x3);
    lda(0x15);
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp(BulletBill_CannonVar);
    BNE(CheckForJumpspring);
    dec(0x2);
    // otherwise check for bullet bill object
    // if not found, branch again
    // decrement saved vertical position
    lda(0x3);
    ldy(EnemyFrameTimer, x);
    BEQ(SBBAt);
    ora(0b100000);
    JMP(SBBAt);
}

int SBBAt() {
    // get timer for enemy object
    // if expired, do not set priority bit
    // otherwise do so
    // set new sprite attributes
    sta(0x4);
    ldy(0x0);
    sty(0xed);
    lda(0x8);
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp(JumpspringObject);
    // check for jumpspring object
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
    // store saved enemy object value here
    // and Y here (enemy state -2 MSB if not changed)
    // get enemy object offset
    // check for podoboo object
    // branch if not found
    // if moving upwards, branch
    BMI(CheckBowserGfxFlag);
    inc(VerticalFlipFlag);
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda(BowserGfxFlag);
    // if not drawing bowser at all, skip to something else
    BEQ(CheckForGoomba);
    ldy(0x16);
    // if set to 1, draw bowser's front
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
    // check value for goomba object
    cpy(Goomba);
    BNE(CheckBowserFront);
    // branch if not found
    lda(Enemy_State, x);
    cmp(0x2);
    BCC(GmbaAnim);
    ldx(0x4);
    // check for defeated state
    // if not defeated, go ahead and animate
    // if defeated, write new value here
    stx(0xec);
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // check for d5 set in enemy object state
    anda(0b100000);
    ora(TimerControl);
    BNE(CheckBowserFront);
    // or timer disable flag set
    // if either condition true, do not animate goomba
    lda(FrameCounter);
    anda(0b1000);
    // check for every eighth frame
    BNE(CheckBowserFront);
    lda(0x3);
    eor(0b11);
    sta(0x3);
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda(offsetof(G, EnemyAttributeData), y);
    ora(0x4);
    // load sprite attribute using enemy object
    // as offset, and add to bits already loaded
    sta(0x4);
    lda(offsetof(G, EnemyGfxTableOffsets), y);
    tax();
    ldy(0xec);
    // load value based on enemy object as offset
    // save as X
    // get previously saved value
    lda(BowserGfxFlag);
    BEQ(CheckForSpiny);
    // if not drawing bowser object at all, skip all of this
    cmp(0x1);
    BNE(CheckBowserRear);
    lda(BowserBodyControls);
    BPL(ChkFrontSte);
    ldx(0xde);
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // if not drawing front part, branch to draw the rear part
    // check bowser's body control bits
    // branch if d7 not set (control's bowser's mouth)
    // otherwise load offset for second frame
    // check saved enemy state
    lda(0xed);
    anda(0b100000);
    // if bowser not defeated, do not set flag
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
    // check bowser's body control bits
    anda(0x1);
    BEQ(ChkRearSte);
    ldx(0xe4);
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // branch if d0 not set (control's bowser's feet)
    // otherwise load offset for second frame
    // check saved enemy state
    lda(0xed);
    anda(0b100000);
    // if bowser not defeated, do not set flag
    BEQ(DrawBowser);
    lda(0x2);
    sec();
    // subtract 16 pixels from
    // saved vertical coordinate
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
    // check if value loaded is for spiny
    // if not found, branch
    // if enemy state set to $05, do this,
    // otherwise branch
    // set to spiny egg offset
    lda(0x2);
    sta(0x3);
    // set enemy direction to reverse sprites horizontally
    lda(0x5);
    sta(0xec);
    JMP(NotEgg);
}

int NotEgg() {
    // set enemy state
    // skip a big chunk of this if we found spiny but not in egg
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(0x90);
    BNE(CheckUpsideDownShell);
    // check value for lakitu's offset loaded
    // branch if not loaded
    lda(0xed);
    anda(0b100000);
    BNE(NoLAFr);
    // check for d5 set in enemy state
    // branch if set
    lda(FrenzyEnemyTimer);
    cmp(0x10);
    BCS(NoLAFr);
    ldx(0x96);
    JMP(NoLAFr);
}

int NoLAFr() {
    // check timer to see if we've reached a certain range
    // branch if not
    // if d6 not set and timer in range, load alt frame for lakitu
    // skip this next part if we found lakitu but alt frame not needed
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}

int CheckUpsideDownShell() {
    lda(0xef);
    // check for enemy object => $04
    cmp(0x4);
    BCS(CheckRightSideUpShell);
    // branch if true
    cpy(0x2);
    BCC(CheckRightSideUpShell);
    ldx(0x5a);
    // branch if enemy state < $02
    // set for upside-down koopa shell by default
    ldy(0xef);
    cpy(BuzzyBeetle);
    // check for buzzy beetle object
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
    // check for value set here
    // if enemy state < $02, do not change to shell, if
    // enemy state => $02 but not = $04, leave shell upside-down
    // set right-side up buzzy beetle shell by default
    // increment saved vertical position by one pixel
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
    // check for hammer bro object
    cmp(HammerBro);
    BNE(CheckForBloober);
    // branch if not found
    lda(0xed);
    BEQ(CheckToAnimateEnemy);
    // branch if not in normal enemy state
    anda(0b1000);
    BEQ(CheckDefeatedState);
    ldx(0xb4);
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(0x48);
    BEQ(CheckToAnimateEnemy);
    // check for cheep-cheep offset loaded
    // branch if found
    lda(EnemyIntervalTimer, y);
    cmp(0x5);
    BCS(CheckDefeatedState);
    cpx(0x3c);
    BNE(CheckToAnimateEnemy);
    // branch if some timer is above a certain point
    // check for bloober offset loaded
    // branch if not found this time
    cmp(0x1);
    BEQ(CheckDefeatedState);
    inc(0x2);
    // branch if timer is set to certain point
    // increment saved vertical coordinate three pixels
    inc(0x2);
    inc(0x2);
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(0xef);
    // check for specific enemy objects
    cmp(Goomba);
    BEQ(CheckDefeatedState);
    // branch if goomba
    cmp(0x8);
    BEQ(CheckDefeatedState);
    // branch if bullet bill (note both variants use $08 here)
    cmp(Podoboo);
    BEQ(CheckDefeatedState);
    cmp(0x18);
    // branch if podoboo
    // branch if => $18
    BCS(CheckDefeatedState);
    ldy(0x0);
    cmp(0x15);
    BNE(CheckForSecondFrame);
    iny();
    lda(WorldNumber);
    // check for mushroom retainer/princess object
    // which uses different code here, branch if not found
    // residual instruction
    // are we on world 8?
    cmp(World8);
    BCS(CheckDefeatedState);
    ldx(0xa2);
    lda(0x3);
    // if so, leave the offset alone (use princess)
    // otherwise, set for mushroom retainer object instead
    // set alternate state here
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
    // check saved enemy state
    // for d7 or d5, or check for timers stopped
    ora(TimerControl);
    BNE(CheckDefeatedState);
    // if either condition true, branch
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
    // check saved enemy state
    // for d5 set
    // branch if not set
    lda(0xef);
    cmp(0x4);
    BCC(DrawEnemyObject);
    // check for saved enemy object => $04
    // branch if less
    ldy(0x1);
    sty(VerticalFlipFlag);
    // set vertical flip flag
    dey();
    sty(0xec);
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(0xeb);
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // load sprite data offset
    // draw six tiles of data
    // into sprite data
    JSR(DrawEnemyObjRow);
    ldx(ObjectOffset);
    ldy(Enemy_SprDataOffset, x);
    // get enemy object offset
    // get sprite data offset
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
    // check if vertical flip flag is set here
    // branch if not
    // get attributes of first sprite we dealt with
    // set bit for vertical flip
    iny();
    iny();
    JSR(DumpSixSpr);
    // increment two bytes so that we store the vertical flip
    // in attribute bytes of enemy obj sprite data
    dey();
    dey();
    // now go back to the Y coordinate offset
    tya();
    tax();
    // give offset to X
    lda(0xef);
    cmp(HammerBro);
    // check saved enemy object for hammer bro
    BEQ(FlipEnemyVertically);
    cmp(Lakitu);
    BEQ(FlipEnemyVertically);
    // check saved enemy object for lakitu
    // branch for hammer bro or lakitu
    cmp(0x15);
    BCS(FlipEnemyVertically);
    // also branch if enemy object => $15
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda(Sprite_Tilenumber, x);
    pha();
    // load first or second row tiles
    // and save tiles to the stack
    lda(((Sprite_Tilenumber) + (4)), x);
    pha();
    lda(((Sprite_Tilenumber) + (16)), y);
    sta(Sprite_Tilenumber, x);
    // exchange third row tiles
    // with first or second row tiles
    lda(((Sprite_Tilenumber) + (20)), y);
    sta(((Sprite_Tilenumber) + (4)), x);
    pla();
    sta(((Sprite_Tilenumber) + (20)), y);
    // pull first or second row tiles from stack
    // and save in third row
    pla();
    sta(((Sprite_Tilenumber) + (16)), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda(BowserGfxFlag);
    BNE(SkipToOffScrChk);
    // are we drawing bowser at all?
    // branch if so
    lda(0xef);
    ldx(0xec);
    cmp(0x5);
    // get alternate enemy state
    // check for hammer bro object
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // jump if found
    // check for bloober object
    cmp(Bloober);
    BEQ(MirrorEnemyGfx);
    cmp(PiranhaPlant);
    // check for piranha plant object
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
    // check for podoboo object
    // branch if either of three are found
    // check for spiny object
    // branch closer if not found
    // check spiny's state
    // branch if not an egg, otherwise
    // check for princess/mushroom retainer object
    cmp(0x15);
    BNE(SpnySC);
    lda(0x42);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SpnySC);
}

int SpnySC() {
    // set horizontal flip on bottom right sprite
    // note that palette bits were already set earlier
    // if alternate enemy state set to 1 or 0, branch
    cpx(0x2);
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda(BowserGfxFlag);
    // if enemy object is bowser, skip all of this
    BNE(CheckToMirrorLakitu);
    lda(Sprite_Attributes, y);
    // load attribute bits of first sprite
    anda(0b10100011);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (8)), y);
    // save vertical flip, priority, and palette bits
    // in left sprite column of enemy object OAM data
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    cpx(0x5);
    BNE(EggExc);
    ora(0b10000000);
    JMP(EggExc);
}

int EggExc() {
    // set horizontal flip
    // check for state used by spiny's egg
    // if alternate state not set to $05, branch
    // otherwise set vertical flip
    // set bits of right sprite column
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (12)), y);
    // of enemy object sprite data
    sta(((Sprite_Attributes) + (20)), y);
    cpx(0x4);
    BNE(CheckToMirrorLakitu);
    lda(((Sprite_Attributes) + (8)), y);
    // check alternate enemy state
    // branch if not $04
    // get second row left sprite attributes
    ora(0b10000000);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // store bits with vertical flip in
    // second and third row left sprites
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(0xef);
    // check for lakitu enemy object
    cmp(Lakitu);
    BNE(CheckToMirrorJSpring);
    // branch if not found
    lda(VerticalFlipFlag);
    BNE(NVFLak);
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b10000001);
    // branch if vertical flip flag not set
    // save vertical flip and palette bits
    // in third row left sprite
    sta(((Sprite_Attributes) + (16)), y);
    lda(((Sprite_Attributes) + (20)), y);
    ora(0b1000001);
    // set horizontal flip and palette bits
    // in third row right sprite
    sta(((Sprite_Attributes) + (20)), y);
    ldx(FrenzyEnemyTimer);
    // check timer
    cpx(0x10);
    BCS(SprObjectOffscrChk);
    sta(((Sprite_Attributes) + (12)), y);
    // branch if timer has not reached a certain range
    // otherwise set same for second row right sprite
    anda(0b10000001);
    sta(((Sprite_Attributes) + (8)), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // preserve vertical flip and palette bits for left sprite
    // unconditional branch
    // get first row left sprite attributes
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
    // check for jumpspring object (any frame)
    cmp(0x18);
    BCC(SprObjectOffscrChk);
    // branch if not jumpspring object at all
    lda(0x82);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // set vertical flip and palette bits of
    // second and third row left sprites
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx(ObjectOffset);
    lda(Enemy_OffscreenBits);
    // get enemy buffer offset
    // check offscreen information
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
    // shift three times to the right
    // which puts d2 into carry
    // save to stack
    // branch if not set
    // set for right column sprites
    // and move them offscreen
    // get from stack
    pla();
    lsr();
    pha();
    BCC(Row3C);
    lda(0x0);
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}

int Row3C() {
    // move d3 to carry
    // save to stack
    // branch if not set
    // set for left column sprites,
    // move them offscreen
    // get from stack again
    pla();
    lsr();
    // move d5 to carry this time
    lsr();
    pha();
    BCC(Row23C);
    lda(0x10);
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}

int Row23C() {
    // save to stack again
    // branch if carry not set
    // set for third row of sprites
    // and move them offscreen
    // get from stack
    pla();
    lsr();
    pha();
    // move d6 into carry
    // save to stack
    BCC(AllRowC);
    lda(0x8);
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}

int AllRowC() {
    // set for second and third rows
    // move them offscreen
    // get from stack once more
    pla();
    lsr();
    // move d7 into carry
    BCC(ExEGHandler);
    JSR(MoveESprRowOffscreen);
    // move all sprites offscreen (A should be 0 by now)
    lda(Enemy_ID, x);
    cmp(Podoboo);
    BEQ(ExEGHandler);
    lda(Enemy_Y_HighPos, x);
    cmp(0x2);
    // check enemy identifier for podoboo
    // skip this part if found, we do not want to erase podoboo!
    // check high byte of vertical position
    // if not yet past the bottom of the screen, branch
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
    // load two tiles of enemy graphics
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
    // add A to enemy object OAM data offset
    adc(Enemy_SprDataOffset, x);
    tay();
    // use as offset
    lda(0xf8);
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // add A to enemy object OAM data offset
    adc(Enemy_SprDataOffset, x);
    tay();
    JSR(MoveColOffscreen);
    sta(((Sprite_Data) + (16)), y);
    // use as offset
    // move first and second row sprites in column offscreen
    // move third row sprite in column offscreen
    return 0;
    JMP(DrawBlock);
}

int DrawBlock() {
    lda(Block_Rel_YPos);
    sta(0x2);
    lda(Block_Rel_XPos);
    sta(0x5);
    // get relative vertical coordinate of block object
    // store here
    // get relative horizontal coordinate of block object
    // store here
    lda(0x3);
    sta(0x4);
    // set attribute byte here
    lsr();
    sta(0x3);
    ldy(Block_SprDataOffset, x);
    ldx(0x0);
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // set horizontal flip bit here (will not be used)
    // get sprite data offset
    // reset X for use as offset to tile data
    // get left tile number
    lda(offsetof(G, DefaultBlockObjTiles), x);
    sta(0x0);
    lda(((offsetof(G, DefaultBlockObjTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    cpx(0x4);
    BNE(DBlkLoop);
    ldx(ObjectOffset);
    ldy(Block_SprDataOffset, x);
    // set here
    // get right tile number
    // do sub to write tile numbers to first row of sprites
    // check incremented offset
    // and loop back until all four sprites are done
    // get block object offset
    // get sprite data offset
    lda(AreaType);
    cmp(0x1);
    BEQ(ChkRep);
    // check for ground level type area
    // if found, branch to next part
    lda(0x86);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (4)), y);
    JMP(ChkRep);
}

int ChkRep() {
    // otherwise remove brick tiles with lines
    // and replace then with lineless brick tiles
    // check replacement metatile
    lda(Block_Metatile, x);
    cmp(0xc4);
    BNE(BlkOffscr);
    lda(0x87);
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(0x3);
    // if not used block metatile, then
    // branch ahead to use current graphics
    // set A for used block tile
    // increment Y to write to tile bytes
    // do sub to dump into all four sprites
    // return Y to original offset
    // set palette bits
    ldx(AreaType);
    dex();
    BEQ(SetBFlip);
    lsr();
    JMP(SetBFlip);
}

int SetBFlip() {
    // check for ground level type area again
    // if found, use current palette bits
    // otherwise set to $01
    // put block object offset back in X
    ldx(ObjectOffset);
    sta(Sprite_Attributes, y);
    // store attribute byte as-is in first sprite
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // set horizontal flip bit for second sprite
    ora(0b10000000);
    sta(((Sprite_Attributes) + (12)), y);
    // set both flip bits for fourth sprite
    anda(0b10000011);
    sta(((Sprite_Attributes) + (8)), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // set vertical flip bit for third sprite
    // get offscreen bits for block object
    lda(Block_OffscreenBits);
    pha();
    anda(0b100);
    BEQ(PullOfsB);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // save to stack
    // check to see if d2 in offscreen bits are set
    // if not set, branch, otherwise move sprites offscreen
    // move offscreen two OAMs
    // on the right side
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // pull offscreen bits from stack
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // check to see if d3 in offscreen bits are set
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
    // $00 - used to hold palette bits for attribute byte or relative X position
    // set palette bits here
    sta(0x0);
    lda(0x75);
    // set tile number for ball (something residual, likely)
    ldy(GameEngineSubroutine);
    cpy(0x5);
    BEQ(DChunks);
    lda(0x3);
    // if end-of-level routine running,
    // use palette and tile number assigned
    // otherwise set different palette bits
    sta(0x0);
    lda(0x84);
    JMP(DChunks);
}

int DChunks() {
    // and set tile number for brick chunks
    // get OAM data offset
    ldy(Block_SprDataOffset, x);
    iny();
    JSR(DumpFourSpr);
    lda(FrameCounter);
    // increment to start with tile bytes in OAM
    // do sub to dump tile number into all four sprites
    // get frame counter
    asl();
    asl();
    asl();
    // move low nybble to high
    asl();
    anda(0xc0);
    ora(0x0);
    iny();
    JSR(DumpFourSpr);
    // get what was originally d3-d2 of low nybble
    // add palette bits
    // increment offset for attribute bytes
    // do sub to dump attribute data into all four sprites
    dey();
    dey();
    lda(Block_Rel_YPos);
    JSR(DumpTwoSpr);
    lda(Block_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Block_Orig_XPos, x);
    // decrement offset to Y coordinate
    // get first block object's relative vertical coordinate
    // do sub to dump current Y coordinate into two sprites
    // get first block object's relative horizontal coordinate
    // save into X coordinate of first sprite
    // get original horizontal coordinate
    sec();
    sbc(ScreenLeft_X_Pos);
    sta(0x0);
    // subtract coordinate of left side from original coordinate
    // store result as relative horizontal coordinate of original
    sec();
    sbc(Block_Rel_XPos);
    adc(0x0);
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    lda(((Block_Rel_YPos) + (1)));
    // get difference of relative positions of original - current
    // add original relative position to result
    // plus 6 pixels to position second brick chunk correctly
    // save into X coordinate of second sprite
    // get second block object's relative vertical coordinate
    sta(((Sprite_Y_Position) + (8)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(((Block_Rel_XPos) + (1)));
    sta(((Sprite_X_Position) + (8)), y);
    lda(0x0);
    // dump into Y coordinates of third and fourth sprites
    // get second block object's relative horizontal coordinate
    // save into X coordinate of third sprite
    // use original relative horizontal position
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
    // get difference of relative positions of original - current
    // add original relative position to result
    // plus 6 pixels to position fourth brick chunk correctly
    // save into X coordinate of fourth sprite
    // get offscreen bits for block object
    // do sub to move left half of sprites offscreen if necessary
    // get offscreen bits again
    // shift d7 into carry
    // if d7 not set, branch to last part
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // otherwise move top sprites offscreen
    // if relative position on left side of screen,
    lda(0x0);
    BPL(ExBCDr);
    lda(Sprite_X_Position, y);
    cmp(((Sprite_X_Position) + (4)), y);
    BCC(ExBCDr);
    lda(0xf8);
    // go ahead and leave
    // otherwise compare left-side X coordinate
    // to right-side X coordinate
    // branch to leave if less
    // otherwise move right half of sprites offscreen
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // leave
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
    // get frame counter
    // divide by four
    lsr();
    pha();
    anda(0x1);
    eor(0x64);
    sta(Sprite_Tilenumber, y);
    pla();
    lsr();
    // save result to stack
    // mask out all but last bit
    // set either tile $64 or $65 as fireball tile
    // thus tile changes every four frames
    // get from stack
    // divide by four again
    lsr();
    lda(0x2);
    BCC(FireA);
    ora(0b11000000);
    JMP(FireA);
}

int FireA() {
    // load value $02 to set palette in attrib byte
    // if last bit shifted out was not set, skip this
    // otherwise flip both ways every eight frames
    // store attribute byte and leave
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
    // use whatever's in A for offset
    // get tile number using offset
    // increment Y (contains sprite data offset)
    // and dump into tile number part of sprite data
    // decrement Y so we have the proper offset again
    // return enemy object buffer offset to X
    // get relative vertical coordinate
    // subtract four pixels vertically
    // for first and third sprites
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (8)), y);
    clc();
    adc(0x8);
    // add eight pixels vertically
    // for second and fourth sprites
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(Fireball_Rel_XPos);
    sec();
    sbc(0x4);
    // get relative horizontal coordinate
    // subtract four pixels horizontally
    // for first and second sprites
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (4)), y);
    clc();
    adc(0x8);
    // add eight pixels horizontally
    // for third and fourth sprites
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (12)), y);
    lda(0x2);
    sta(Sprite_Attributes, y);
    // set palette attributes for all sprites, but
    // set no flip at all for first sprite
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    // set vertical flip for second sprite
    lda(0x42);
    sta(((Sprite_Attributes) + (8)), y);
    // set horizontal flip for third sprite
    lda(0xc2);
    sta(((Sprite_Attributes) + (12)), y);
    return 0;
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(0x0);
    // clear fireball state to kill it
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
    // get OAM data offset
    // load tile number for small platforms
    // increment offset for tile numbers
    // dump tile number into all six sprites
    // increment offset for attributes
    // load palette controls
    // dump attributes into all six sprites
    // decrement for original offset
    dey();
    lda(Enemy_Rel_XPos);
    // get relative horizontal coordinate
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (12)), y);
    // dump as X coordinate into first and fourth sprites
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // add eight pixels
    // dump into second and fifth sprites
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (8)), y);
    // add eight more pixels
    // dump into third and sixth sprites
    sta(((Sprite_X_Position) + (20)), y);
    lda(Enemy_Y_Position, x);
    // get vertical coordinate
    tax();
    pha();
    cpx(0x20);
    BCS(TopSP);
    lda(0xf8);
    JMP(TopSP);
}

int TopSP() {
    // save to stack
    // if vertical coordinate below status bar,
    // do not mess with it
    // otherwise move first three sprites offscreen
    // dump vertical coordinate into Y coordinates
    JSR(DumpThreeSpr);
    pla();
    // pull from stack
    clc();
    adc(0x80);
    // add 128 pixels
    tax();
    cpx(0x20);
    BCS(BotSP);
    lda(0xf8);
    JMP(BotSP);
}

int BotSP() {
    // if below status bar (taking wrap into account)
    // then do not change altered coordinate
    // otherwise move last three sprites offscreen
    // dump vertical coordinate + 128 pixels
    sta(((Sprite_Y_Position) + (12)), y);
    sta(((Sprite_Y_Position) + (16)), y);
    // into Y coordinates
    sta(((Sprite_Y_Position) + (20)), y);
    lda(Enemy_OffscreenBits);
    pha();
    anda(0b1000);
    // get offscreen bits
    // save to stack
    // check d3
    BEQ(SOfs);
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    // if d3 was set, move first and
    // fourth sprites offscreen
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SOfs);
}

int SOfs() {
    // move out and back into stack
    pla();
    pha();
    anda(0b100);
    // check d2
    BEQ(SOfs2);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // if d2 was set, move second and
    // fifth sprites offscreen
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SOfs2);
}

int SOfs2() {
    // get from stack
    pla();
    anda(0b10);
    // check d1
    BEQ(ExSPl);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (8)), y);
    // if d1 was set, move third and
    // sixth sprites offscreen
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(ExSPl);
}

int ExSPl() {
    // get enemy object offset and leave
    ldx(ObjectOffset);
    return 0;
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy(Player_Y_HighPos);
    dey();
    // if player's vertical high position
    // not within screen, skip all of this
    BNE(ExDBub);
    lda(Bubble_OffscreenBits);
    // check air bubble's offscreen bits
    anda(0b1000);
    BNE(ExDBub);
    ldy(Bubble_SprDataOffset, x);
    lda(Bubble_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Bubble_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // if bit set, branch to leave
    // get air bubble's OAM data offset
    // get relative horizontal coordinate
    // store as X coordinate here
    // get relative vertical coordinate
    // store as Y coordinate here
    lda(0x74);
    sta(Sprite_Tilenumber, y);
    // put air bubble tile into OAM data
    lda(0x2);
    sta(Sprite_Attributes, y);
    JMP(ExDBub);
}

int ExDBub() {
    // set attribute byte
    // leave
    return 0;
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda(InjuryTimer);
    BEQ(CntPl);
    // if player's injured invincibility timer
    // not set, skip checkpoint and continue code
    lda(FrameCounter);
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // otherwise check frame counter and branch
    // to leave on every other frame (when d0 is set)
    // if executing specific game engine routine,
    lda(GameEngineSubroutine);
    cmp(0xb);
    // branch ahead to some other part
    BEQ(PlayerKilled);
    lda(PlayerChangeSizeFlag);
    BNE(DoChangeSize);
    ldy(SwimmingFlag);
    BEQ(FindPlayerAction);
    // if grow/shrink flag set
    // then branch to some other code
    // if swimming flag set, branch to
    // different part, do not return
    lda(Player_State);
    cmp(0x0);
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // if player status normal,
    // branch and do not return
    // otherwise jump and return
    lda(FrameCounter);
    anda(0b100);
    BNE(ExPGH);
    tax();
    ldy(Player_SprDataOffset);
    lda(PlayerFacingDir);
    // check frame counter for d2 set (8 frames every
    // eighth frame), and branch if set to leave
    // initialize X to zero
    // get player sprite data offset
    // get player's facing direction
    lsr();
    BCS(SwimKT);
    // if player facing to the right, use current offset
    iny();
    iny();
    // otherwise move to next OAM data
    iny();
    iny();
    JMP(SwimKT);
}

int SwimKT() {
    // check player's size
    lda(PlayerSize);
    BEQ(BigKTS);
    lda(((Sprite_Tilenumber) + (24)), y);
    cmp(SwimTileRepOffset);
    BEQ(ExPGH);
    inx();
    JMP(BigKTS);
}

int BigKTS() {
    // if big, use first tile
    // check tile number of seventh/eighth sprite
    // against tile number in player graphics table
    // if spr7/spr8 tile number = value, branch to leave
    // otherwise increment X for second tile
    // overwrite tile number in sprite 7/8
    lda(offsetof(G, SwimKickTileNum), x);
    sta(((Sprite_Tilenumber) + (24)), y);
    JMP(ExPGH);
}

int ExPGH() {
    // to animate player's feet when swimming
    // then leave
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
    // store offset to graphics table here
    lda(0x4);
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // draw player based on offset loaded
    // set horizontal flip bits as necessary
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
    // if fireball throw timer not set, skip to the end
    // set value to initialize by default
    // get animation frame timer
    // compare to fireball throw timer
    // initialize fireball throw timer
    // if animation frame timer => fireball throw timer skip to end
    // otherwise store animation timer into fireball throw timer
    // load offset for throwing
    // get offset to graphics table
    // store it for use later
    // set to update four sprite rows by default
    lda(Player_X_Speed);
    ora(Left_Right_Buttons);
    BEQ(SUpdR);
    dey();
    JMP(SUpdR);
}

int SUpdR() {
    // check for horizontal speed or left/right button press
    // if no speed or button press, branch using set value in Y
    // otherwise set to update only three sprite rows
    // save in A for use
    tya();
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}

int PlayerOffscreenChk() {
    lda(Player_OffscreenBits);
    // get player's offscreen bits
    lsr();
    lsr();
    // move vertical bits to low nybble
    lsr();
    lsr();
    sta(0x0);
    ldx(0x3);
    lda(Player_SprDataOffset);
    // store here
    // check all four rows of player sprites
    // get player's sprite data offset
    clc();
    adc(0x18);
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // add 24 bytes to start at bottom row
    // set as offset here
    // load offscreen Y coordinate just in case
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
    // subtract eight bytes to do
    // next row up
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
    // store data into zero page memory
    // load data to display player as he always
    lda(offsetof(G, IntermediatePlayerData), x);
    sta(0x2, x);
    // appears on world/lives display
    dex();
    BPL(PIntLoop);
    ldx(0xb8);
    ldy(0x4);
    JSR(DrawPlayerLoop);
    lda(((Sprite_Attributes) + (36)));
    ora(0b1000000);
    sta(((Sprite_Attributes) + (32)));
    // do this until all data is loaded
    // load offset for small standing
    // load sprite data offset
    // draw player accordingly
    // get empty sprite attributes
    // set horizontal flip bit for bottom-right sprite
    // store and leave
    return 0;
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(0x7);
    // $00-$01 - used to hold tile numbers, $00 also used to hold upper extent of animation frames
    // $03 - facing direction, used as horizontal flip control
    // $05 - horizontal position
    // these also used in IntermediatePlayerData
    // store number of rows of sprites to draw
    lda(Player_Rel_XPos);
    sta(Player_Pos_ForScroll);
    sta(0x5);
    // store player's relative horizontal position
    // store it here also
    lda(Player_Rel_YPos);
    sta(0x2);
    // store player's vertical position
    lda(PlayerFacingDir);
    sta(0x3);
    // store player's facing direction
    lda(Player_SprAttrib);
    sta(0x4);
    ldx(PlayerGfxOffset);
    ldy(Player_SprDataOffset);
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda(offsetof(G, PlayerGraphicsTable), x);
    // load player's left side
    sta(0x0);
    lda(((offsetof(G, PlayerGraphicsTable)) + (1)), x);
    // now load right side
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BNE(DrawPlayerLoop);
    // decrement rows of sprites to draw
    // do this until all rows are drawn
    return 0;
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda(Player_State);
    // get player's state
    cmp(0x3);
    BEQ(ActionClimbing);
    // if climbing, branch here
    cmp(0x2);
    BEQ(ActionFalling);
    // if falling, branch here
    cmp(0x1);
    BNE(ProcOnGroundActs);
    // if not jumping, branch here
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
    // load offset for crouching
    // get crouching flag
    // if set, branch to get offset for graphics table
    // load offset for standing
    // check player's horizontal speed
    // and left/right controller bits
    // if no speed or buttons pressed, use standing offset
    // load walking/running speed
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
    // do a sub here to get offset adder for graphics table
    lda(0x0);
    sta(PlayerAnimCtrl);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    // initialize animation frame control
    // load offset to graphics table using size as offset
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
    // load offset for swimming
    JSR(GetGfxOffsetAdder);
    lda(JumpSwimTimer);
    ora(PlayerAnimCtrl);
    BNE(FourFrameExtent);
    // check jump/swim timer
    // and animation frame control
    // if any one of these set, branch ahead
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
    // store upper extent here
    // get proper offset to graphics table
    // save offset to stack
    // load animation frame timer
    // branch if not expired
    // get animation frame timer amount
    // and set timer accordingly
    lda(PlayerAnimCtrl);
    clc();
    // add one to animation frame control
    adc(0x1);
    cmp(0x0);
    BCC(SetAnimC);
    lda(0x0);
    JMP(SetAnimC);
}

int SetAnimC() {
    // compare to upper extent
    // if frame control + 1 < upper extent, use as next
    // otherwise initialize frame control
    // store as new animation frame control
    sta(PlayerAnimCtrl);
    JMP(ExAnimC);
}

int ExAnimC() {
    // get offset to graphics table from stack and leave
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
    // get player's size
    // if player big, use current offset as-is
    // for big player
    // otherwise add eight bytes to offset
    // for small player
    tay();
    JMP(SzOfs);
}

int SzOfs() {
    // go back
    return 0;
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy(PlayerAnimCtrl);
    // get animation frame control
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
    // get frame counter and execute this code every
    // fourth frame, otherwise branch ahead
    // increment frame control
    // check for preset upper extent
    // if not there yet, skip ahead to use
    // otherwise initialize both grow/shrink flag
    // and animation frame control
    // store proper frame control
    sty(PlayerAnimCtrl);
    JMP(GorSLog);
}

int GorSLog() {
    // get player's size
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
    // add ten bytes to frame control as offset
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
    // this thing apparently uses two of the swimming frames
    // to draw the player shrinking
    // load offset for small player swimming
    // get what would normally be offset adder
    // and branch to use offset if nonzero
    // otherwise load offset for big player swimming
    // get offset to graphics table based on offset loaded
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    return 0;
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy(Player_SprDataOffset);
    // get sprite data offset
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(KilledAtt);
    lda(PlayerGfxOffset);
    // if executing specific game engine routine,
    // branch to change third and fourth row OAM attributes
    // get graphics table offset
    cmp(0x50);
    BEQ(C_S_IGAtt);
    cmp(0xb8);
    BEQ(C_S_IGAtt);
    cmp(0xc0);
    // if crouch offset, either standing offset,
    // or intermediate growing offset,
    // go ahead and execute code to change
    // fourth row OAM attributes only
    BEQ(C_S_IGAtt);
    cmp(0xc8);
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b111111);
    sta(((Sprite_Attributes) + (16)), y);
    // mask out horizontal and vertical flip bits
    // for third row sprites and save
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
    // mask out horizontal and vertical flip bits
    // for fourth row sprites and save
    lda(((Sprite_Attributes) + (28)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (28)), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // set horizontal flip bit for second
    // sprite in the fourth row
    // leave
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
    // set for air bubble offsets
    // modify X to get proper air bubble offset
    ldy(0x3);
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    // set for fireball offsets
    // modify X to get proper fireball offset
    ldy(0x2);
    JMP(RelWOfs);
}

int RelWOfs() {
    // get the coordinates
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    return 0;
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    // set for misc object offsets
    // modify X to get proper misc object offset
    ldy(0x6);
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(0x1);
    ldy(0x1);
    // get coordinates of enemy object
    // relative to the screen
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(0x9);
    ldy(0x4);
    // get coordinates of one block object
    // relative to the screen
    JSR(VariableObjOfsRelPos);
    inx();
    // adjust offset for other block object if any
    inx();
    lda(0x9);
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(0x0);
    // store value to add to A here
    clc();
    adc(0x0);
    tax();
    // add A to value stored
    // use as enemy offset
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    // reload old object offset and leave
    return 0;
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda(SprObject_Y_Position, x);
    sta(SprObject_Rel_YPos, y);
    lda(SprObject_X_Position, x);
    sec();
    // load vertical coordinate low
    // store here
    // load horizontal coordinate
    // subtract left edge coordinate
    sbc(ScreenLeft_X_Pos);
    sta(SprObject_Rel_XPos, y);
    // store result here
    return 0;
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(0x0);
    ldy(0x0);
    // $00 - used as temp variable to hold offscreen bits
    // set offsets for player-specific variables
    // and get offscreen information about player
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
    // move offset to A
    clc();
    adc(offsetof(G, ObjOffsetData), y);
    tax();
    // add amount of bytes to offset depending on setting in Y
    // put back in X and leave
    return 0;
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(0x1);
    ldy(0x1);
    // set A to add 1 byte in order to get enemy offset
    // set Y to put offscreen bits in Enemy_OffscreenBits
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
    // add contents of X to A to get
    // appropriate offset, then give back to X
    tax();
    JMP(GetOffScreenBitsSet);
}

int GetOffScreenBitsSet() {
    tya();
    // save offscreen bits offset to stack for now
    pha();
    JSR(RunOffscrBitsSubs);
    asl();
    // move low nybble to high nybble
    asl();
    asl();
    asl();
    ora(0x0);
    sta(0x0);
    pla();
    // mask together with previously saved low nybble
    // store both here
    // get offscreen bits offset from stack
    tay();
    lda(0x0);
    // get value here and store elsewhere
    sta(SprObject_OffscrBits, y);
    ldx(ObjectOffset);
    return 0;
    JMP(RunOffscrBitsSubs);
}

int RunOffscrBitsSubs() {
    JSR(GetXOffscreenBits);
    lsr();
    // do subroutine here
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    sta(0x0);
    // store here
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // save position in buffer to here
    // start with right side of screen
    // get pixel coordinate of edge
    lda(ScreenEdge_X_Pos, y);
    sec();
    sbc(SprObject_X_Position, x);
    sta(0x7);
    lda(ScreenEdge_PageLoc, y);
    sbc(SprObject_PageLoc, x);
    ldx(offsetof(G, DefaultXOnscreenOfs), y);
    // get difference between pixel coordinate of edge
    // and pixel coordinate of object position
    // store here
    // get page location of edge
    // subtract from page location of object position
    // load offset value here
    cmp(0x0);
    BMI(XLdBData);
    ldx(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y);
    // if beyond right edge or in front of left edge, branch
    // if not, load alternate offset value here
    cmp(0x1);
    BPL(XLdBData);
    lda(0x38);
    // if one page or more to the left of either edge, branch
    // if no branching, load value here and store
    sta(0x6);
    lda(0x8);
    // load some other value and execute subroutine
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // get bits here
    lda(offsetof(G, XOffscreenBitsData), x);
    ldx(0x4);
    cmp(0x0);
    // reobtain position in buffer
    // if bits not zero, branch to leave
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
    // save position in buffer to here
    // start with top of screen
    // load coordinate for edge of vertical unit
    lda(offsetof(G, HighPosUnitData), y);
    sec();
    sbc(SprObject_Y_Position, x);
    sta(0x7);
    lda(0x1);
    // subtract from vertical coordinate of object
    // store here
    // subtract one from vertical high byte of object
    sbc(SprObject_Y_HighPos, x);
    ldx(offsetof(G, DefaultYOnscreenOfs), y);
    // load offset value here
    cmp(0x0);
    BMI(YLdBData);
    ldx(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y);
    // if under top of the screen or beyond bottom, branch
    // if not, load alternate offset value here
    cmp(0x1);
    BPL(YLdBData);
    lda(0x20);
    // if one vertical unit or more above the screen, branch
    // if no branching, load value here and store
    sta(0x6);
    lda(0x4);
    // load some other value and execute subroutine
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // get offscreen data bits using offset
    lda(offsetof(G, YOffscreenBitsData), x);
    ldx(0x4);
    // reobtain position in buffer
    cmp(0x0);
    BNE(ExYOfsBS);
    dey();
    // if bits not zero, branch to leave
    // otherwise, do bottom of the screen now
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
    // store current value in A here
    // get pixel difference
    // compare to preset value
    // if pixel difference >= preset value, branch
    // divide by eight
    lsr();
    lsr();
    anda(0x7);
    cpy(0x1);
    BCS(SetOscrO);
    adc(0x5);
    JMP(SetOscrO);
}

int SetOscrO() {
    // mask out all but 3 LSB
    // right side of the screen or top?
    // if so, branch, use difference / 8 as offset
    // if not, add value to difference / 8
    // use as offset
    tax();
    JMP(ExDivPD);
}

int ExDivPD() {
    // leave
    return 0;
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(0x3);
    // $00-$01 - tile numbers
    // $03 - flip control
    // $05 - X coordinate
    // get saved flip control bits
    lsr();
    lsr();
    // move d1 into carry
    lda(0x0);
    BCC(NoHFlip);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x1);
    // if d1 not set, branch
    // store first tile into second sprite
    // and second into first sprite
    sta(Sprite_Tilenumber, y);
    lda(0x40);
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // activate horizontal flip OAM attribute
    // and unconditionally branch
    // store first tile into first sprite
    sta(Sprite_Tilenumber, y);
    lda(0x1);
    // and second into second sprite
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x0);
    JMP(SetHFAt);
}

int SetHFAt() {
    // clear bit for horizontal flip
    // add other OAM attributes if necessary
    ora(0x4);
    sta(Sprite_Attributes, y);
    // store sprite attributes
    sta(((Sprite_Attributes) + (4)), y);
    lda(0x2);
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (4)), y);
    // now the y coordinates
    // note because they are
    // side by side, they are the same
    lda(0x5);
    sta(Sprite_X_Position, y);
    clc();
    adc(0x8);
    // store x coordinate, then
    // add 8 pixels and store another to
    // put them side by side
    sta(((Sprite_X_Position) + (4)), y);
    lda(0x2);
    clc();
    // add eight pixels to the next y
    // coordinate
    adc(0x8);
    sta(0x2);
    tya();
    clc();
    // add eight to the offset in Y to
    // move to the next two sprites
    adc(0x8);
    tay();
    inx();
    inx();
    // increment offset to return it to the
    // routine that called this subroutine
    return 0;
    JMP(SoundEngine);
}

int SoundEngine() {
    lda(OperMode);
    // are we in title screen mode?
    BNE(SndOn);
    sta(SND_MASTERCTRL_REG);
    // if so, disable sound and leave
    return 0;
    JMP(SndOn);
}

int SndOn() {
    lda(0xff);
    sta(JOYPAD_PORT2);
    // disable irqs and set frame counter mode???
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(PauseModeFlag);
    // enable first four channels
    // is sound already in pause mode?
    BNE(InPause);
    lda(PauseSoundQueue);
    // if not, check pause sfx queue
    cmp(0x1);
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // if queue is empty, skip pause mode routine
    // check pause sfx buffer
    lda(PauseSoundBuffer);
    BNE(ContPau);
    lda(PauseSoundQueue);
    // check pause queue
    BEQ(SkipSoundSubroutines);
    sta(PauseSoundBuffer);
    sta(PauseModeFlag);
    lda(0x0);
    // if queue full, store in buffer and activate
    // pause mode to interrupt game sounds
    // disable sound and clear sfx buffers
    sta(SND_MASTERCTRL_REG);
    sta(Square1SoundBuffer);
    sta(Square2SoundBuffer);
    sta(NoiseSoundBuffer);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(0x2a);
    // enable sound again
    // store length of sound in pause counter
    sta(Squ1_SfxLenCounter);
    JMP(PTone1F);
}

int PTone1F() {
    // play first tone
    lda(0x44);
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // unconditional branch
    // check pause length left
    lda(Squ1_SfxLenCounter);
    cmp(0x24);
    // time to play second?
    BEQ(PTone2F);
    cmp(0x1e);
    // time to play first again?
    BEQ(PTone1F);
    cmp(0x18);
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // time to play second again?
    // only load regs during times, otherwise skip
    // store reg contents and play the pause sfx
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
    // decrement pause sfx counter
    dec(Squ1_SfxLenCounter);
    BNE(SkipSoundSubroutines);
    lda(0x0);
    sta(SND_MASTERCTRL_REG);
    lda(PauseSoundBuffer);
    cmp(0x2);
    // disable sound if in pause mode and
    // not currently playing the pause sfx
    // if no longer playing pause sfx, check to see
    // if we need to be playing sound again
    BNE(SkipPIn);
    lda(0x0);
    // clear pause mode to allow game sounds again
    sta(PauseModeFlag);
    JMP(SkipPIn);
}

int SkipPIn() {
    // clear pause sfx buffer
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
    // play sfx on square channel 1
    // ''  ''  '' square channel 2
    // ''  ''  '' noise channel
    // play music on all channels
    // clear the music queues
    sta(AreaMusicQueue);
    sta(EventMusicQueue);
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(0x0);
    // clear the sound effects queues
    sta(Square1SoundQueue);
    sta(Square2SoundQueue);
    sta(NoiseSoundQueue);
    sta(PauseSoundQueue);
    ldy(DAC_Counter);
    // load some sort of counter
    lda(AreaMusicBuffer);
    anda(0b11);
    // check for specific music
    BEQ(NoIncDAC);
    inc(DAC_Counter);
    // increment and check counter
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
    // if we are at zero, do not decrement
    // decrement counter
    // store into DMC load register (??)
    sty(((SND_DELTA_REG) + (1)));
    return 0;
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty(((SND_SQUARE1_REG) + (1)));
    // dump the contents of X and Y into square 1's control regs
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
    // use previous contents of A for sound reg offset
    // if zero, then do not load
    // first byte goes into LSB of frequency divider
    // second byte goes into 3 MSB plus extra bit for
    // length counter
    sta(((SND_REGISTER) + (3)), x);
    JMP(NoTone);
}

int NoTone() {
    return 0;
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx(SND_SQUARE2_REG);
    // dump the contents of X and Y into square 2's control regs
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
    // store length of flagpole sound
    sta(Squ1_SfxLenCounter);
    lda(0x62);
    // load part of reg contents for flagpole sound
    JSR(SetFreq_Squ1);
    ldx(0x99);
    // now load the rest
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(0x26);
    // branch here for small mario jumping sound
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
    // note that small and big jump borrow each others' reg contents
    // anyway, this loads the first part of mario's jumping sound
    JSR(PlaySqu1Sfx);
    lda(0x28);
    sta(Squ1_SfxLenCounter);
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda(Squ1_SfxLenCounter);
    cmp(0x25);
    // jumping sounds seem to be composed of three parts
    // check for time to play second part yet
    BNE(N2Prt);
    ldx(0x5f);
    // load second part
    ldy(0xf6);
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // unconditional branch
    // check for third part
    cmp(0x20);
    BNE(DecJpFPS);
    ldx(0x48);
    JMP(FPS2nd);
}

int FPS2nd() {
    // load third part
    // the flagpole slide sound shares part of third part
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
    // load length of sfx and reg contents for bump sound
    ldy(0x93);
    JMP(Fthrow);
}

int Fthrow() {
    // the fireball sound shares reg contents with the bump sound
    ldx(0x9e);
    sta(Squ1_SfxLenCounter);
    lda(0xc);
    // load offset for bump sound
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda(Squ1_SfxLenCounter);
    // check for second part of bump sound
    cmp(0x6);
    BNE(DecJpFPS);
    lda(0xbb);
    // load second part directly
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // unconditional branch
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy(Square1SoundQueue);
    // check for sfx in queue
    BEQ(CheckSfx1Buffer);
    sty(Square1SoundBuffer);
    BMI(PlaySmallJump);
    // if found, put in buffer
    // small jump
    lsr(Square1SoundQueue);
    BCS(PlayBigJump);
    // big jump
    lsr(Square1SoundQueue);
    BCS(PlayBump);
    // bump
    lsr(Square1SoundQueue);
    BCS(PlaySwimStomp);
    // swim/stomp
    lsr(Square1SoundQueue);
    BCS(PlaySmackEnemy);
    // smack enemy
    lsr(Square1SoundQueue);
    BCS(PlayPipeDownInj);
    // pipedown/injury
    lsr(Square1SoundQueue);
    BCS(PlayFireballThrow);
    // fireball throw
    lsr(Square1SoundQueue);
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda(Square1SoundBuffer);
    BEQ(ExS1H);
    BMI(ContinueSndJump);
    // check for sfx in buffer
    // if not found, exit sub
    // small mario jump
    lsr();
    BCS(ContinueSndJump);
    // big mario jump
    lsr();
    BCS(ContinueBumpThrow);
    // bump
    lsr();
    BCS(ContinueSwimStomp);
    // swim/stomp
    lsr();
    BCS(ContinueSmackEnemy);
    // smack enemy
    lsr();
    BCS(ContinuePipeDownInj);
    // pipedown/injury
    lsr();
    BCS(ContinueBumpThrow);
    // fireball throw
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
    // store length of swim/stomp sound
    sta(Squ1_SfxLenCounter);
    ldy(0x9c);
    // store reg contents for swim/stomp sound
    ldx(0x9e);
    lda(0x26);
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy(Squ1_SfxLenCounter);
    lda(((offsetof(G, SwimStompEnvelopeData)) - (1)), y);
    sta(SND_SQUARE1_REG);
    // look up reg contents in data section based on
    // length of sound left, used to control sound's
    // envelope
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
    // store length of smack enemy sound
    ldy(0xcb);
    ldx(0x9f);
    sta(Squ1_SfxLenCounter);
    lda(0x28);
    // store reg contents for smack enemy sound
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy(Squ1_SfxLenCounter);
    // check about halfway through
    cpy(0x8);
    BNE(SmSpc);
    lda(0xa0);
    sta(((SND_SQUARE1_REG) + (2)));
    // if we're at the about-halfway point, make the second tone
    // in the smack enemy sound
    lda(0x9f);
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // this creates spaces in the sound, giving it its distinct noise
    lda(0x90);
    JMP(SmTick);
}

int SmTick() {
    sta(SND_SQUARE1_REG);
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec(Squ1_SfxLenCounter);
    // decrement length of sfx
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(0x0);
    stx(0xf1);
    // if end of sfx reached, clear buffer
    // and stop making the sfx
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
    // load length of pipedown sound
    sta(Squ1_SfxLenCounter);
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda(Squ1_SfxLenCounter);
    lsr();
    BCS(NoPDwnL);
    // some bitwise logic, forces the regs
    // to be written to only during six specific times
    // during which d3 must be set and d1-0 must be clear
    lsr();
    BCS(NoPDwnL);
    anda(0b10);
    BEQ(NoPDwnL);
    ldy(0x91);
    // and this is where it actually gets written in
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
    // load length of coin grab sound
    // and part of reg contents
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
    // load the rest of reg contents
    // of coin grab and timer tick sound
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda(Squ2_SfxLenCounter);
    cmp(0x30);
    // check for time to play second tone yet
    // timer tick sound also executes this, not sure why
    BNE(N2Tone);
    lda(0x54);
    // if so, load the tone directly into the reg
    sta(((SND_SQUARE2_REG) + (2)));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(0x20);
    // load length of fireworks/gunfire sound
    sta(Squ2_SfxLenCounter);
    ldy(0x94);
    // load reg contents of fireworks/gunfire sound
    lda(0x5e);
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda(Squ2_SfxLenCounter);
    // check for time to play second part
    cmp(0x18);
    BNE(DecrementSfx2Length);
    ldy(0x93);
    // load second part reg contents then
    lda(0x18);
    JMP(SBlasJ);
}

int SBlasJ() {
    // unconditional branch to load rest of reg contents
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(0x36);
    // load length of power-up grab sound
    sta(Squ2_SfxLenCounter);
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda(Squ2_SfxLenCounter);
    lsr();
    BCS(DecrementSfx2Length);
    // load frequency reg based on length left over
    // divide by 2
    // alter frequency every other frame
    tay();
    lda(((offsetof(G, PowerUpGrabFreqData)) - (1)), y);
    ldx(0x5d);
    // use length left over / 2 for frequency offset
    // store reg contents of power-up grab sound
    ldy(0x7f);
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec(Squ2_SfxLenCounter);
    // decrement length of sfx
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(0x0);
    // initialize square 2's sound effects buffer
    stx(Square2SoundBuffer);
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(0xd);
    // stop playing the sfx
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
    // special handling for the 1-up sound to keep it
    // from being interrupted by other sounds on square 2
    BNE(ContinueExtraLife);
    ldy(Square2SoundQueue);
    // check for sfx in queue
    BEQ(CheckSfx2Buffer);
    sty(Square2SoundBuffer);
    BMI(PlayBowserFall);
    // if found, put in buffer and check for the following
    // bowser fall
    lsr(Square2SoundQueue);
    BCS(PlayCoinGrab);
    // coin grab
    lsr(Square2SoundQueue);
    BCS(PlayGrowPowerUp);
    // power-up reveal
    lsr(Square2SoundQueue);
    BCS(PlayGrowVine);
    // vine grow
    lsr(Square2SoundQueue);
    BCS(PlayBlast);
    // fireworks/gunfire
    lsr(Square2SoundQueue);
    BCS(PlayTimerTick);
    // timer tick
    lsr(Square2SoundQueue);
    BCS(PlayPowerUpGrab);
    // power-up grab
    lsr(Square2SoundQueue);
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda(Square2SoundBuffer);
    BEQ(ExS2H);
    BMI(ContinueBowserFall);
    // check for sfx in buffer
    // if not found, exit sub
    // bowser fall
    lsr();
    BCS(Cont_CGrab_TTick);
    // coin grab
    lsr();
    BCS(ContinueGrowItems);
    // power-up reveal
    lsr();
    BCS(ContinueGrowItems);
    // vine grow
    lsr();
    BCS(ContinueBlast);
    // fireworks/gunfire
    lsr();
    BCS(Cont_CGrab_TTick);
    // timer tick
    lsr();
    BCS(ContinuePowerUpGrab);
    // power-up grab
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
    // load length of bowser defeat sound
    sta(Squ2_SfxLenCounter);
    ldy(0xc4);
    // load contents of reg for bowser defeat sound
    lda(0x18);
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda(Squ2_SfxLenCounter);
    // check for almost near the end
    cmp(0x8);
    BNE(DecrementSfx2Length);
    ldy(0xa4);
    // if so, load the rest of reg contents for bowser defeat sound
    lda(0x5a);
    JMP(PBFRegs);
}

int PBFRegs() {
    // the fireworks/gunfire sound shares part of reg contents here
    ldx(0x9f);
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // this is an unconditional branch outta here
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(0x30);
    // load length of 1-up sound
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
    // if any bits set here, branch to dec the length
    dex();
    BNE(DivLLoop);
    // do this until all bits checked, if none set, continue
    tay();
    lda(((offsetof(G, ExtraLifeFreqData)) - (1)), y);
    // load our reg contents
    ldx(0x82);
    ldy(0x7f);
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(0x10);
    // load length of power-up reveal sound
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
    // load contents of reg for both sounds directly
    sta(((SND_SQUARE2_REG) + (1)));
    lda(0x0);
    // start secondary counter for both sounds
    sta(Sfx_SecondaryCounter);
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc(Sfx_SecondaryCounter);
    lda(Sfx_SecondaryCounter);
    lsr();
    // increment secondary counter for both sounds
    // this sound doesn't decrement the usual counter
    // divide by 2 to get the offset
    tay();
    cpy(Squ2_SfxLenCounter);
    BEQ(StopGrowItems);
    lda(0x9d);
    // have we reached the end yet?
    // if so, branch to jump, and stop playing sounds
    // load contents of other reg directly
    sta(SND_SQUARE2_REG);
    lda(offsetof(G, PUp_VGrow_FreqData), y);
    // use secondary counter / 2 as offset for frequency regs
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
    // load length of brick shatter sound
    sta(Noise_SfxLenCounter);
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda(Noise_SfxLenCounter);
    lsr();
    // divide by 2 and check for bit set to use offset
    BCC(DecrementSfx3Length);
    tay();
    ldx(offsetof(G, BrickShatterFreqData), y);
    // load reg contents of brick shatter sound
    lda(offsetof(G, BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta(SND_NOISE_REG);
    // play the sfx
    stx(((SND_NOISE_REG) + (2)));
    lda(0x18);
    sta(((SND_NOISE_REG) + (3)));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec(Noise_SfxLenCounter);
    // decrement length of sfx
    BNE(ExSfx3);
    lda(0xf0);
    // if done, stop playing the sfx
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
    // check for sfx in queue
    BEQ(CheckNoiseBuffer);
    sty(NoiseSoundBuffer);
    // if found, put in buffer
    lsr(NoiseSoundQueue);
    BCS(PlayBrickShatter);
    // brick shatter
    lsr(NoiseSoundQueue);
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda(NoiseSoundBuffer);
    BEQ(ExNH);
    // check for sfx in buffer
    // if not found, exit sub
    lsr();
    BCS(ContinueBrickShatter);
    // brick shatter
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
    // load length of bowser flame sound
    sta(Noise_SfxLenCounter);
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda(Noise_SfxLenCounter);
    lsr();
    tay();
    ldx(0xf);
    // load reg contents of bowser flame sound
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
    // check event music queue
    BNE(LoadEventMusic);
    lda(AreaMusicQueue);
    // check area music queue
    BNE(LoadAreaMusic);
    lda(EventMusicBuffer);
    // check both buffers
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
    // save current area music buffer to be re-obtained later
    ldy(0x0);
    sty(NoteLengthTblAdder);
    sty(AreaMusicBuffer);
    cmp(TimeRunningOutMusic);
    // default value for additional length byte offset
    // clear area music buffer
    // is it time running out music?
    BNE(FindEventMusicHeader);
    ldx(0x8);
    // load offset to be added to length byte of header
    stx(NoteLengthTblAdder);
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(0x4);
    BNE(NoStop1);
    // is it underground music?
    // no, do not stop square 1 sfx
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // start counter used only by ground level music
    ldy(0x10);
    JMP(GMLoopB);
}

int GMLoopB() {
    sty(GroundMusicHeaderOfs);
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(0x0);
    // clear event music buffer
    sty(EventMusicBuffer);
    sta(AreaMusicBuffer);
    cmp(0x1);
    // copy area music queue contents to buffer
    // is it ground level music?
    BNE(FindAreaMusicHeader);
    inc(GroundMusicHeaderOfs);
    ldy(GroundMusicHeaderOfs);
    // increment but only if playing ground level music
    // is it time to loopback ground level music?
    cpy(0x32);
    BNE(LoadHeader);
    // branch ahead with alternate offset
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
    // increment Y pointer based on previously loaded queue contents
    // bit shift and increment until we find a set bit for music
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}

int LoadHeader() {
    lda(MusicHeaderOffsetData, y);
    // load offset for header
    tay();
    lda(offsetof(G, MusicHeaderData), y);
    // now load the header
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
    // initialize music note counters
    sta(Squ2_NoteLenCounter);
    sta(Squ1_NoteLenCounter);
    sta(Tri_NoteLenCounter);
    sta(Noise_BeatLenCounter);
    lda(0x0);
    // initialize music data offset for square 2
    sta(MusicOffset_Square2);
    sta(AltRegContentFlag);
    lda(0xb);
    // initialize alternate control reg data used by square 1
    // disable triangle channel and reenable it
    sta(SND_MASTERCTRL_REG);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec(Squ2_NoteLenCounter);
    BNE(MiscSqu2MusicTasks);
    ldy(MusicOffset_Square2);
    // decrement square 2 note length
    // is it time for more data?  if not, branch to end tasks
    // increment square 2 music offset and fetch data
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda(EventMusicBuffer);
    // check secondary buffer for time running out music
    cmp(TimeRunningOutMusic);
    BNE(NotTRO);
    lda(AreaMusicBuffer_Alt);
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // load previously saved contents of primary buffer
    // and start playing the song again if there is one
    // check for victory music (the only secondary that loops)
    anda(VictoryMusic);
    BNE(VictoryMLoopBack);
    lda(AreaMusicBuffer);
    // check primary buffer for any music except pipe intro
    anda(0b1011111);
    BNE(MusicLoopBack);
    lda(0x0);
    sta(AreaMusicBuffer);
    // if any area music except pipe intro, music loops
    // clear primary and secondary buffers and initialize
    // control regs of square and triangle channels
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
    // store length of note
    sta(Squ2_NoteLenBuffer);
    ldy(MusicOffset_Square2);
    // fetch another byte (MUST NOT BE LENGTH BYTE!)
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx(Square2SoundBuffer);
    // is there a sound playing on this channel?
    BNE(SkipFqL1);
    JSR(SetFreq_Squ2);
    BEQ(Rest);
    JSR(LoadControlRegs);
    JMP(Rest);
}

int Rest() {
    // no, then play the note
    // check to see if note is rest
    // if not, load control regs for square 2
    // save contents of A
    sta(Squ2_EnvelopeDataCtrl);
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // dump X and Y into square 2 control regs
    // save length in square 2 note counter
    lda(Squ2_NoteLenBuffer);
    sta(Squ2_NoteLenCounter);
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda(Square2SoundBuffer);
    // is there a sound playing on square 2?
    BNE(HandleSquare1Music);
    lda(EventMusicBuffer);
    anda(0b10010001);
    // check for death music or d4 set on secondary buffer
    // note that regs for death music or d4 are loaded by default
    BNE(HandleSquare1Music);
    ldy(Squ2_EnvelopeDataCtrl);
    // check for contents saved from LoadControlRegs
    BEQ(NoDecEnv1);
    dec(Squ2_EnvelopeDataCtrl);
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // decrement unless already zero
    // do a load of envelope data to replace default
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE2_REG);
    ldx(0x7f);
    // based on offset set by first load unless playing
    // death music or d4 set on secondary buffer
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
    // increment square 1 music offset and fetch data
    inc(MusicOffset_Square1);
    lda((MusicData), y);
    BNE(Squ1NoteHandler);
    // if nonzero, then skip this part
    lda(0x83);
    sta(SND_SQUARE1_REG);
    lda(0x94);
    sta(((SND_SQUARE1_REG) + (1)));
    // store some data into control regs for square 1
    // and fetch another byte of data, used to give
    // death music its unique sound
    sta(AltRegContentFlag);
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta(Squ1_NoteLenCounter);
    ldy(Square1SoundBuffer);
    // save contents of A in square 1 note counter
    // is there a sound playing on square 1?
    BNE(HandleTriangleMusic);
    txa();
    anda(0b111110);
    JSR(SetFreq_Squ1);
    // change saved data to appropriate note format
    // play the note
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // save envelope offset
    sta(Squ1_EnvelopeDataCtrl);
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda(Square1SoundBuffer);
    // is there a sound playing on square 1?
    BNE(HandleTriangleMusic);
    lda(EventMusicBuffer);
    // check for death music or d4 set on secondary buffer
    anda(0b10010001);
    BNE(DeathMAltReg);
    ldy(Squ1_EnvelopeDataCtrl);
    // check saved envelope offset
    BEQ(NoDecEnv2);
    dec(Squ1_EnvelopeDataCtrl);
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // decrement unless already zero
    // do a load of envelope data
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE1_REG);
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // based on offset set by first load
    // check for alternate control reg data
    lda(AltRegContentFlag);
    BNE(DoAltLoad);
    lda(0x7f);
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // load this value if zero, the alternate value
    // if nonzero, and let's move on
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda(MusicOffset_Triangle);
    dec(Tri_NoteLenCounter);
    BNE(HandleNoiseMusic);
    ldy(MusicOffset_Triangle);
    // decrement triangle note length
    // is it time for more data?
    // increment square 1 music offset and fetch data
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta(Tri_NoteLenBuffer);
    // if zero, skip all this and move on to noise
    // if non-negative, data is note
    // otherwise, it is length data
    // save contents of A
    lda(0x1f);
    sta(SND_TRIANGLE_REG);
    ldy(MusicOffset_Triangle);
    // load some default data for triangle control reg
    // fetch another byte
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx(Tri_NoteLenBuffer);
    // save length in triangle note counter
    stx(Tri_NoteLenCounter);
    lda(EventMusicBuffer);
    anda(0b1101110);
    BNE(NotDOrD4);
    lda(AreaMusicBuffer);
    // check for death music or d4 set on secondary buffer
    // if playing any other secondary, skip primary buffer check
    // check primary buffer for water or castle level music
    anda(0b1010);
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // if playing any other primary, or death or d4, go on to noise routine
    // if playing water or castle music or any secondary
    txa();
    cmp(0x12);
    // besides death music or d4 set, check length of note
    BCS(LongN);
    lda(EventMusicBuffer);
    // check for win castle music again if not playing a long note
    anda(EndOfCastleMusic);
    BEQ(MediN);
    lda(0xf);
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // load value $0f if playing the win castle music and playing a short
    // note, load value $1f if playing water or castle level music or any
    // secondary besides death and d4 except win castle or win castle and playing
    lda(0x1f);
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // a short note, and load value $ff if playing a long note on water, castle
    // or any secondary (including win castle) except death and d4
    lda(0xff);
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta(SND_TRIANGLE_REG);
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda(AreaMusicBuffer);
    // check if playing underground or castle music
    anda(0b11110011);
    BEQ(ExitMusicHandler);
    dec(Noise_BeatLenCounter);
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy(MusicOffset_Noise);
    // increment noise beat offset and fetch data
    inc(MusicOffset_Noise);
    lda((MusicData), y);
    // get noise beat data, if nonzero, branch to handle
    BNE(NoiseBeatHandler);
    lda(NoiseDataLoopbackOfs);
    sta(MusicOffset_Noise);
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta(Noise_BeatLenCounter);
    // store length in noise beat counter
    txa();
    anda(0b111110);
    BEQ(SilentBeat);
    cmp(0x30);
    BEQ(LongBeat);
    // reload data and erase length bits
    // if no beat data, silence
    // check the beat data and play the appropriate
    // noise accordingly
    cmp(0x20);
    BEQ(StrongBeat);
    anda(0b10000);
    BEQ(SilentBeat);
    lda(0x1c);
    // short beat data
    ldx(0x3);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(0x1c);
    // strong beat data
    ldx(0xc);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(0x1c);
    // long beat data
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
    // load beat data into noise regs
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
    // save a copy of original byte into X
    // save LSB from original byte into carry
    // reload original byte and rotate three times
    // turning xx00000x into 00000xxx, with the
    // bit in carry as the MSB here
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(0b111);
    // clear all but the three LSBs
    clc();
    adc(0xf0);
    adc(NoteLengthTblAdder);
    // add offset loaded from first header byte
    // add extra if time running out music
    tay();
    lda(offsetof(G, MusicLengthLookupTbl), y);
    // load length
    return 0;
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda(EventMusicBuffer);
    // check secondary buffer for win castle music
    anda(EndOfCastleMusic);
    BEQ(NotECstlM);
    lda(0x4);
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda(AreaMusicBuffer);
    anda(0b1111101);
    // check primary buffer for water music
    BEQ(WaterMus);
    lda(0x8);
    // this is the default value for all other music
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // this value is used for water music and all other event music
    lda(0x28);
    JMP(AllMus);
}

int AllMus() {
    // load contents of other sound regs for square 2
    ldx(0x82);
    ldy(0x7f);
    return 0;
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda(EventMusicBuffer);
    // check secondary buffer for win castle music
    anda(EndOfCastleMusic);
    BEQ(LoadUsualEnvData);
    lda(offsetof(G, EndOfCastleMusicEnvData), y);
    // load data from offset for win castle music
    return 0;
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda(AreaMusicBuffer);
    // check primary buffer for water music
    anda(0b1111101);
    BEQ(LoadWaterEventMusEnvData);
    lda(offsetof(G, AreaMusicEnvData), y);
    // load default data from offset for all other music
    return 0;
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda(offsetof(G, WaterEventMusEnvData), y);
    // load data from offset for water music and all other event music
    return 0;
}

