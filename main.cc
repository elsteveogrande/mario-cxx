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
    // <conv.chunks.Comment object at 0x102a94ef0>
    cld();
    lda(0b10000);
    // <conv.chunks.Comment object at 0x102a94fb0>
    sta(PPU_CTRL_REG1);
    ldx(0xff);
    // <conv.chunks.Comment object at 0x102a95160>
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // <conv.chunks.Comment object at 0x102a952b0>
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
    // <conv.chunks.Comment object at 0x102a95700>
    // <conv.chunks.Comment object at 0x102a957f0>
    // <conv.chunks.Comment object at 0x102a95880>
    lda(TopScoreDisplay, x);
    cmp(10);
    BCS(ColdBoot);
    // <conv.chunks.Comment object at 0x102a95a60>
    // <conv.chunks.Comment object at 0x102a95af0>
    dex();
    BPL(WBootCheck);
    lda(WarmBootValidation);
    cmp(0xa5);
    // <conv.chunks.Comment object at 0x102a95d30>
    // <conv.chunks.Comment object at 0x102a95e20>
    BNE(ColdBoot);
    ldy(WarmBootOffset);
    JMP(ColdBoot);
}

int ColdBoot() {
    // <conv.chunks.Comment object at 0x102a95fd0>
    // <conv.chunks.Comment object at 0x102a960c0>
    JSR(InitializeMemory);
    sta(((SND_DELTA_REG) + (1)));
    sta(OperMode);
    lda(0xa5);
    // <conv.chunks.Comment object at 0x102a961e0>
    // <conv.chunks.Comment object at 0x102a96360>
    // <conv.chunks.Comment object at 0x102a96450>
    sta(WarmBootValidation);
    sta(PseudoRandomBitReg);
    // <conv.chunks.Comment object at 0x102a96660>
    lda(0b1111);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x102a96870>
    lda(0b110);
    sta(PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x102a96a80>
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x102a96c90>
    // <conv.chunks.Comment object at 0x102a96db0>
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x102a97080>
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda(Mirror_PPU_CTRL_REG1);
    anda(0b1111111);
    // <conv.chunks.Comment object at 0x102a9d250>
    // <conv.chunks.Comment object at 0x102a9d4f0>
    sta(Mirror_PPU_CTRL_REG1);
    anda(0b1111110);
    sta(PPU_CTRL_REG1);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x102a9d700>
    // <conv.chunks.Comment object at 0x102a9d820>
    // <conv.chunks.Comment object at 0x102a9d940>
    anda(0b11100110);
    ldy(DisableScreenFlag);
    BNE(ScreenOff);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x102a9db50>
    // <conv.chunks.Comment object at 0x102a9dc70>
    // <conv.chunks.Comment object at 0x102a9dd90>
    ora(0b11110);
    JMP(ScreenOff);
}

int ScreenOff() {
    // <conv.chunks.Comment object at 0x102a9dfa0>
    sta(Mirror_PPU_CTRL_REG2);
    anda(0b11100111);
    // <conv.chunks.Comment object at 0x102a9e0f0>
    sta(PPU_CTRL_REG2);
    ldx(PPU_STATUS);
    // <conv.chunks.Comment object at 0x102a9e300>
    lda(0x0);
    JSR(InitScroll);
    sta(PPU_SPR_ADDR);
    lda(0x2);
    // <conv.chunks.Comment object at 0x102a9e600>
    // <conv.chunks.Comment object at 0x102a9e720>
    sta(SPR_DMA);
    ldx(VRAM_Buffer_AddrCtrl);
    lda(offsetof(G, VRAM_AddrTable_Low), x);
    // <conv.chunks.Comment object at 0x102a9e960>
    // <conv.chunks.Comment object at 0x102a9ea80>
    sta(0x0);
    lda(offsetof(G, VRAM_AddrTable_High), x);
    sta(0x1);
    JSR(UpdateScreen);
    // <conv.chunks.Comment object at 0x102a9ede0>
    ldy(0x0);
    ldx(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x102a9f050>
    cpx(0x6);
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx(offsetof(G, VRAM_Buffer_Offset), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102a9f5f0>
    sta(VRAM_Buffer1_Offset, x);
    sta(VRAM_Buffer1, x);
    sta(VRAM_Buffer_AddrCtrl);
    lda(Mirror_PPU_CTRL_REG2);
    // <conv.chunks.Comment object at 0x102a9f950>
    // <conv.chunks.Comment object at 0x102a9fa70>
    sta(PPU_CTRL_REG2);
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // <conv.chunks.Comment object at 0x102a9fc80>
    // <conv.chunks.Comment object at 0x102a9fda0>
    // <conv.chunks.Comment object at 0x102a9fec0>
    JSR(UpdateTopScore);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x102aa8110>
    lsr();
    BCS(PauseSkip);
    lda(TimerControl);
    BEQ(DecTimers);
    // <conv.chunks.Comment object at 0x102aa83b0>
    // <conv.chunks.Comment object at 0x102aa84d0>
    dec(TimerControl);
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // <conv.chunks.Comment object at 0x102aa87d0>
    ldx(0x14);
    dec(IntervalTimerControl);
    BPL(DecTimersLoop);
    // <conv.chunks.Comment object at 0x102aa8890>
    // <conv.chunks.Comment object at 0x102aa8a40>
    lda(0x14);
    sta(IntervalTimerControl);
    ldx(0x23);
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // <conv.chunks.Comment object at 0x102aa8bc0>
    // <conv.chunks.Comment object at 0x102aa8d70>
    // <conv.chunks.Comment object at 0x102aa8e00>
    lda(Timers, x);
    BEQ(SkipExpTimer);
    dec(Timers, x);
    JMP(SkipExpTimer);
}

int SkipExpTimer() {
    // <conv.chunks.Comment object at 0x102aa9040>
    // <conv.chunks.Comment object at 0x102aa9160>
    // <conv.chunks.Comment object at 0x102aa92e0>
    dex();
    BPL(DecTimersLoop);
    JMP(NoDecTimers);
}

int NoDecTimers() {
    // <conv.chunks.Comment object at 0x102aa93d0>
    // <conv.chunks.Comment object at 0x102aa94f0>
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
    // <conv.chunks.Comment object at 0x102aa97c0>
    // <conv.chunks.Comment object at 0x102aa9970>
    // <conv.chunks.Comment object at 0x102aa9ac0>
    // <conv.chunks.Comment object at 0x102aa9b50>
    // <conv.chunks.Comment object at 0x102aa9d60>
    // <conv.chunks.Comment object at 0x102aa9eb0>
    // <conv.chunks.Comment object at 0x102aa9e80>
    BEQ(RotPRandomBit);
    sec();
    JMP(RotPRandomBit);
}

int RotPRandomBit() {
    // <conv.chunks.Comment object at 0x102aaa180>
    // <conv.chunks.Comment object at 0x102aaa210>
    ror(PseudoRandomBitReg, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x102aaa3c0>
    // <conv.chunks.Comment object at 0x102aaa480>
    BNE(RotPRandomBit);
    lda(Sprite0HitDetectFlag);
    // <conv.chunks.Comment object at 0x102aaa600>
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // <conv.chunks.Comment object at 0x102aaa810>
    lda(PPU_STATUS);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x102aaa960>
    BNE(Sprite0Clr);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x102aaab70>
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // <conv.chunks.Comment object at 0x102aaaff0>
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
    // <conv.chunks.Comment object at 0x102aab5f0>
    lda(HorizontalScroll);
    sta(PPU_SCROLL_REG);
    lda(VerticalScroll);
    sta(PPU_SCROLL_REG);
    lda(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x102aaba10>
    pha();
    sta(PPU_CTRL_REG1);
    lda(GamePauseStatus);
    // <conv.chunks.Comment object at 0x102aabcb0>
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // <conv.chunks.Comment object at 0x102aabf50>
    // <conv.chunks.Comment object at 0x102abc0b0>
    lda(PPU_STATUS);
    pla();
    ora(0b10000000);
    // <conv.chunks.Comment object at 0x102abc290>
    sta(PPU_CTRL_REG1);
    return 0;
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda(OperMode);
    cmp(VictoryModeValue);
    // <conv.chunks.Comment object at 0x102abc5c0>
    // <conv.chunks.Comment object at 0x102abc6e0>
    BEQ(ChkPauseTimer);
    cmp(GameModeValue);
    BNE(ExitPause);
    lda(OperMode_Task);
    // <conv.chunks.Comment object at 0x102abc8f0>
    // <conv.chunks.Comment object at 0x102abca10>
    // <conv.chunks.Comment object at 0x102abcb30>
    cmp(0x3);
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // <conv.chunks.Comment object at 0x102abccb0>
    // <conv.chunks.Comment object at 0x102abce60>
    lda(GamePauseTimer);
    BEQ(ChkStart);
    dec(GamePauseTimer);
    // <conv.chunks.Comment object at 0x102abd0a0>
    return 0;
    JMP(ChkStart);
}

int ChkStart() {
    // <conv.chunks.Comment object at 0x102abd250>
    lda(SavedJoypad1Bits);
    anda(Start_Button);
    // <conv.chunks.Comment object at 0x102abd3a0>
    BEQ(ClrPauseTimer);
    lda(GamePauseStatus);
    anda(0b10000000);
    BNE(ExitPause);
    lda(0x2b);
    // <conv.chunks.Comment object at 0x102abd5b0>
    // <conv.chunks.Comment object at 0x102abd6d0>
    // <conv.chunks.Comment object at 0x102abd7f0>
    // <conv.chunks.Comment object at 0x102abd910>
    sta(GamePauseTimer);
    lda(GamePauseStatus);
    tay();
    iny();
    // <conv.chunks.Comment object at 0x102abdcd0>
    sty(PauseSoundQueue);
    eor(0b1);
    // <conv.chunks.Comment object at 0x102abde50>
    ora(0b10000000);
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // <conv.chunks.Comment object at 0x102abe060>
    // <conv.chunks.Comment object at 0x102abe180>
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
    // <conv.chunks.Comment object at 0x102abe600>
    // <conv.chunks.Comment object at 0x102abe660>
    // <conv.chunks.Comment object at 0x102abe780>
    // <conv.chunks.Comment object at 0x102abe8d0>
    // <conv.chunks.Comment object at 0x102abe960>
    // <conv.chunks.Comment object at 0x102abea50>
    lda(SprDataOffset, x);
    cmp(0x0);
    BCC(NextSprOffset);
    ldy(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x102abec90>
    // <conv.chunks.Comment object at 0x102abed20>
    // <conv.chunks.Comment object at 0x102abeea0>
    clc();
    adc(SprShuffleAmt, y);
    BCC(StrSprOffset);
    // <conv.chunks.Comment object at 0x102abf050>
    // <conv.chunks.Comment object at 0x102abf1a0>
    clc();
    adc(0x0);
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // <conv.chunks.Comment object at 0x102abf380>
    // <conv.chunks.Comment object at 0x102abf410>
    sta(SprDataOffset, x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // <conv.chunks.Comment object at 0x102abf5f0>
    dex();
    BPL(ShuffleLoop);
    ldx(SprShuffleAmtOffset);
    // <conv.chunks.Comment object at 0x102abf7d0>
    inx();
    cpx(0x3);
    BNE(SetAmtOffset);
    ldx(0x0);
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx(SprShuffleAmtOffset);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x102abfe00>
    ldy(0x2);
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // <conv.chunks.Comment object at 0x102abff80>
    lda(((SprDataOffset) + (5)), y);
    sta(((Misc_SprDataOffset) - (2)), x);
    clc();
    adc(0x8);
    sta(((Misc_SprDataOffset) - (1)), x);
    clc();
    // <conv.chunks.Comment object at 0x102ac8260>
    // <conv.chunks.Comment object at 0x102ac8470>
    // <conv.chunks.Comment object at 0x102ac8500>
    // <conv.chunks.Comment object at 0x102ac8590>
    // <conv.chunks.Comment object at 0x102ac8830>
    adc(0x8);
    sta(Misc_SprDataOffset, x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // <conv.chunks.Comment object at 0x102ac8d10>
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
    // <conv.chunks.Comment object at 0x102ac95b0>
    // <conv.chunks.Comment object at 0x102ac96a0>
    // <conv.chunks.Comment object at 0x102ac97c0>
    sta(Sprite_Y_Position, y);
    iny();
    // <conv.chunks.Comment object at 0x102ac9a00>
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
    // <conv.chunks.Comment object at 0x102aca360>
    // <conv.chunks.Comment object at 0x102aca840>
    cmp(Start_Button);
    BEQ(StartGame);
    cmp(((A_Button) + (Start_Button)));
    BNE(ChkSelect);
    JMP(StartGame);
}

int StartGame() {
    // <conv.chunks.Comment object at 0x102acab40>
    // <conv.chunks.Comment object at 0x102acacf0>
    // <conv.chunks.Comment object at 0x102acae10>
    JMP(ChkContinue);
    JMP(ChkSelect);
}

int ChkSelect() {
    // <conv.chunks.Comment object at 0x102acaf60>
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
    // <conv.chunks.Comment object at 0x102acb0b0>
    // <conv.chunks.Comment object at 0x102acb1d0>
    // <conv.chunks.Comment object at 0x102acb2f0>
    // <conv.chunks.Comment object at 0x102acb410>
    // <conv.chunks.Comment object at 0x102acb530>
    // <conv.chunks.Comment object at 0x102acb650>
    // <conv.chunks.Comment object at 0x102acb770>
    // <conv.chunks.Comment object at 0x102acb8c0>
    ldx(WorldSelectEnableFlag);
    BEQ(NullJoypad);
    cmp(B_Button);
    // <conv.chunks.Comment object at 0x102acbb00>
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // <conv.chunks.Comment object at 0x102acbd40>
    // <conv.chunks.Comment object at 0x102acbdd0>
    lda(DemoTimer);
    BEQ(ResetTitle);
    lda(0x18);
    // <conv.chunks.Comment object at 0x102acbf20>
    // <conv.chunks.Comment object at 0x102ad4080>
    sta(DemoTimer);
    lda(SelectTimer);
    BNE(NullJoypad);
    lda(0x10);
    // <conv.chunks.Comment object at 0x102ad4290>
    // <conv.chunks.Comment object at 0x102ad43b0>
    // <conv.chunks.Comment object at 0x102ad44d0>
    sta(SelectTimer);
    cpy(0x1);
    BEQ(IncWorldSel);
    lda(NumberOfPlayers);
    eor(0b1);
    // <conv.chunks.Comment object at 0x102ad46e0>
    // <conv.chunks.Comment object at 0x102ad4770>
    // <conv.chunks.Comment object at 0x102ad4920>
    // <conv.chunks.Comment object at 0x102ad4a40>
    sta(NumberOfPlayers);
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // <conv.chunks.Comment object at 0x102ad4e30>
    ldx(WorldSelectNumber);
    inx();
    txa();
    anda(0b111);
    sta(WorldSelectNumber);
    // <conv.chunks.Comment object at 0x102ad50a0>
    // <conv.chunks.Comment object at 0x102ad51c0>
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // <conv.chunks.Comment object at 0x102ad53d0>
    lda(offsetof(G, WSelectBufferTemplate), x);
    sta(((VRAM_Buffer1) - (1)), x);
    // <conv.chunks.Comment object at 0x102ad5550>
    inx();
    cpx(0x6);
    BMI(UpdateShroom);
    ldy(WorldNumber);
    iny();
    sty(((VRAM_Buffer1) + (3)));
    JMP(NullJoypad);
}

int NullJoypad() {
    // <conv.chunks.Comment object at 0x102ad59a0>
    // <conv.chunks.Comment object at 0x102ad5af0>
    // <conv.chunks.Comment object at 0x102ad5b80>
    // <conv.chunks.Comment object at 0x102ad5d30>
    lda(0x0);
    sta(SavedJoypad1Bits);
    JMP(RunDemo);
}

int RunDemo() {
    // <conv.chunks.Comment object at 0x102ad5f70>
    JSR(GameCoreRoutine);
    lda(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x102ad60f0>
    cmp(0x6);
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // <conv.chunks.Comment object at 0x102ad6270>
    // <conv.chunks.Comment object at 0x102ad6420>
    lda(0x0);
    sta(OperMode);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x102ad64e0>
    // <conv.chunks.Comment object at 0x102ad6690>
    sta(Sprite0HitDetectFlag);
    inc(DisableScreenFlag);
    return 0;
    JMP(ChkContinue);
}

int ChkContinue() {
    // <conv.chunks.Comment object at 0x102ad6a20>
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
    // <conv.chunks.Comment object at 0x102ad71a0>
    inc(OffScr_Hidden1UpFlag);
    inc(FetchNewGameTimerFlag);
    inc(OperMode);
    lda(WorldSelectEnableFlag);
    sta(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x102ad73b0>
    // <conv.chunks.Comment object at 0x102ad74d0>
    // <conv.chunks.Comment object at 0x102ad75f0>
    // <conv.chunks.Comment object at 0x102ad7710>
    lda(0x0);
    sta(OperMode_Task);
    // <conv.chunks.Comment object at 0x102ad7890>
    sta(DemoTimer);
    ldx(0x17);
    lda(0x0);
    JMP(InitScores);
}

int InitScores() {
    // <conv.chunks.Comment object at 0x102ad7c80>
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
    // <conv.chunks.Comment object at 0x102ae0110>
    sta(WorldNumber);
    sta(OffScr_WorldNumber);
    ldx(0x0);
    stx(AreaNumber);
    // <conv.chunks.Comment object at 0x102ae0260>
    // <conv.chunks.Comment object at 0x102ae0380>
    // <conv.chunks.Comment object at 0x102ae0410>
    stx(OffScr_AreaNumber);
    return 0;
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(0x7);
    JMP(IconDataRead);
}

int IconDataRead() {
    // <conv.chunks.Comment object at 0x102ae0800>
    // <conv.chunks.Comment object at 0x102ae0890>
    lda(offsetof(G, MushroomIconData), y);
    sta(((VRAM_Buffer1) - (1)), y);
    // <conv.chunks.Comment object at 0x102ae0ef0>
    dey();
    BPL(IconDataRead);
    lda(NumberOfPlayers);
    BEQ(ExitIcon);
    lda(0x24);
    // <conv.chunks.Comment object at 0x102ae1250>
    // <conv.chunks.Comment object at 0x102ae1370>
    // <conv.chunks.Comment object at 0x102ae1490>
    sta(((VRAM_Buffer1) + (3)));
    lda(0xce);
    // <conv.chunks.Comment object at 0x102ae1730>
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
    // <conv.chunks.Comment object at 0x102ae1af0>
    // <conv.chunks.Comment object at 0x102ae1c10>
    // <conv.chunks.Comment object at 0x102ae35c0>
    inx();
    inc(DemoAction);
    sec();
    lda(((offsetof(G, DemoTimingData)) - (1)), x);
    sta(DemoActionTimer);
    BEQ(DemoOver);
    JMP(DoAction);
}

int DoAction() {
    // <conv.chunks.Comment object at 0x102ae3770>
    // <conv.chunks.Comment object at 0x102ae38c0>
    // <conv.chunks.Comment object at 0x102ae3950>
    // <conv.chunks.Comment object at 0x102ae3b30>
    // <conv.chunks.Comment object at 0x102ae3c50>
    // <conv.chunks.Comment object at 0x102ae3d70>
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
    // <conv.chunks.Comment object at 0x102aec3b0>
    // <conv.chunks.Comment object at 0x102aec4d0>
    // <conv.chunks.Comment object at 0x102aec5f0>
    ldx(0x0);
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JMP(AutoPlayer);
}

int AutoPlayer() {
    // <conv.chunks.Comment object at 0x102aec770>
    // <conv.chunks.Comment object at 0x102aec920>
    // <conv.chunks.Comment object at 0x102aeca40>
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
    // <conv.chunks.Comment object at 0x102aed1f0>
    // <conv.chunks.Comment object at 0x102aed340>
    // <conv.chunks.Comment object at 0x102aed3d0>
    lda(EndOfCastleMusic);
    sta(EventMusicQueue);
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102aed880>
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
    // <conv.chunks.Comment object at 0x102aeda90>
    // <conv.chunks.Comment object at 0x102aedbb0>
    // <conv.chunks.Comment object at 0x102aedcd0>
    // <conv.chunks.Comment object at 0x102aeddf0>
    // <conv.chunks.Comment object at 0x102aedf10>
    // <conv.chunks.Comment object at 0x102aedfa0>
    // <conv.chunks.Comment object at 0x102aee150>
    inc(VictoryWalkControl);
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // <conv.chunks.Comment object at 0x102aee2d0>
    // <conv.chunks.Comment object at 0x102aee360>
    tya();
    JSR(AutoControlPlayer);
    lda(ScreenLeft_PageLoc);
    cmp(DestinationPageLoc);
    BEQ(ExitVWalk);
    // <conv.chunks.Comment object at 0x102aee450>
    // <conv.chunks.Comment object at 0x102aee570>
    // <conv.chunks.Comment object at 0x102aee690>
    // <conv.chunks.Comment object at 0x102aee7b0>
    lda(ScrollFractional);
    clc();
    // <conv.chunks.Comment object at 0x102aee9f0>
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
    // <conv.chunks.Comment object at 0x102aeeae0>
    // <conv.chunks.Comment object at 0x102aeec90>
    // <conv.chunks.Comment object at 0x102aeed20>
    // <conv.chunks.Comment object at 0x102aeef00>
    // <conv.chunks.Comment object at 0x102aeef90>
    // <conv.chunks.Comment object at 0x102aef0b0>
    // <conv.chunks.Comment object at 0x102aef1d0>
    // <conv.chunks.Comment object at 0x102aef2f0>
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
    // <conv.chunks.Comment object at 0x102aef680>
    // <conv.chunks.Comment object at 0x102aef7a0>
    // <conv.chunks.Comment object at 0x102aef8c0>
    // <conv.chunks.Comment object at 0x102aef9e0>
    // <conv.chunks.Comment object at 0x102aefb00>
    // <conv.chunks.Comment object at 0x102aefb90>
    // <conv.chunks.Comment object at 0x102aefd40>
    cpy(World8);
    BNE(MRetainerMsg);
    cmp(0x3);
    BCC(IncMsgCounter);
    sbc(0x1);
    JMP(ThankPlayer);
    JMP(MRetainerMsg);
}

int MRetainerMsg() {
    // <conv.chunks.Comment object at 0x102aefe90>
    // <conv.chunks.Comment object at 0x102af40e0>
    // <conv.chunks.Comment object at 0x102af4170>
    // <conv.chunks.Comment object at 0x102af4320>
    // <conv.chunks.Comment object at 0x102af43b0>
    // <conv.chunks.Comment object at 0x102af4560>
    cmp(0x2);
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // <conv.chunks.Comment object at 0x102af4620>
    // <conv.chunks.Comment object at 0x102af47d0>
    tay();
    BNE(SecondPartMsg);
    lda(CurrentPlayer);
    BEQ(EvalForMusic);
    iny();
    BNE(EvalForMusic);
    JMP(SecondPartMsg);
}

int SecondPartMsg() {
    // <conv.chunks.Comment object at 0x102af48c0>
    // <conv.chunks.Comment object at 0x102af49e0>
    // <conv.chunks.Comment object at 0x102af4b00>
    // <conv.chunks.Comment object at 0x102af4c50>
    // <conv.chunks.Comment object at 0x102af4ce0>
    // <conv.chunks.Comment object at 0x102af4e00>
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
    // <conv.chunks.Comment object at 0x102af4fe0>
    // <conv.chunks.Comment object at 0x102af5040>
    // <conv.chunks.Comment object at 0x102af5280>
    // <conv.chunks.Comment object at 0x102af5310>
    // <conv.chunks.Comment object at 0x102af53a0>
    // <conv.chunks.Comment object at 0x102af5550>
    // <conv.chunks.Comment object at 0x102af55e0>
    // <conv.chunks.Comment object at 0x102af5790>
    cpy(0x3);
    BNE(PrintMsg);
    lda(VictoryMusic);
    sta(EventMusicQueue);
    JMP(PrintMsg);
}

int PrintMsg() {
    // <conv.chunks.Comment object at 0x102af5850>
    // <conv.chunks.Comment object at 0x102af5a00>
    // <conv.chunks.Comment object at 0x102af5b20>
    // <conv.chunks.Comment object at 0x102af5c40>
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
    // <conv.chunks.Comment object at 0x102af61e0>
    sta(SecondaryMsgCounter);
    lda(PrimaryMsgCounter);
    adc(0x0);
    // <conv.chunks.Comment object at 0x102af64e0>
    sta(PrimaryMsgCounter);
    cmp(0x7);
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // <conv.chunks.Comment object at 0x102af66f0>
    // <conv.chunks.Comment object at 0x102af6780>
    BCC(ExitMsgs);
    lda(0x6);
    sta(WorldEndTimer);
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // <conv.chunks.Comment object at 0x102af69c0>
    // <conv.chunks.Comment object at 0x102af6b70>
    inc(OperMode_Task);
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // <conv.chunks.Comment object at 0x102af6cf0>
    return 0;
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda(WorldEndTimer);
    BNE(EndExitOne);
    ldy(WorldNumber);
    cpy(World8);
    BCS(EndChkBButton);
    // <conv.chunks.Comment object at 0x102af6e40>
    // <conv.chunks.Comment object at 0x102af6f60>
    // <conv.chunks.Comment object at 0x102af7080>
    // <conv.chunks.Comment object at 0x102af71a0>
    // <conv.chunks.Comment object at 0x102af7200>
    lda(0x0);
    sta(AreaNumber);
    sta(LevelNumber);
    sta(OperMode_Task);
    inc(WorldNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    // <conv.chunks.Comment object at 0x102af7470>
    // <conv.chunks.Comment object at 0x102af7620>
    // <conv.chunks.Comment object at 0x102af7740>
    // <conv.chunks.Comment object at 0x102af7860>
    // <conv.chunks.Comment object at 0x102af7980>
    // <conv.chunks.Comment object at 0x102af7aa0>
    lda(GameModeValue);
    sta(OperMode);
    JMP(EndExitOne);
}

int EndExitOne() {
    // <conv.chunks.Comment object at 0x102af7cb0>
    // <conv.chunks.Comment object at 0x102af7dd0>
    return 0;
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda(SavedJoypad1Bits);
    ora(SavedJoypad2Bits);
    anda(B_Button);
    BEQ(EndExitTwo);
    lda(0x1);
    // <conv.chunks.Comment object at 0x102af7fe0>
    // <conv.chunks.Comment object at 0x102b00140>
    // <conv.chunks.Comment object at 0x102b00260>
    // <conv.chunks.Comment object at 0x102b00380>
    sta(WorldSelectEnableFlag);
    lda(0xff);
    // <conv.chunks.Comment object at 0x102b00590>
    sta(NumberofLives);
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // <conv.chunks.Comment object at 0x102b007a0>
    // <conv.chunks.Comment object at 0x102b008f0>
    return 0;
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda(FloateyNum_Control, x);
    BEQ(EndExitOne);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x102b01e50>
    // <conv.chunks.Comment object at 0x102b02600>
    // <conv.chunks.Comment object at 0x102b02720>
    BCC(ChkNumTimer);
    lda(0xb);
    sta(FloateyNum_Control, x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // <conv.chunks.Comment object at 0x102b02930>
    // <conv.chunks.Comment object at 0x102b029c0>
    // <conv.chunks.Comment object at 0x102b02bd0>
    tay();
    lda(FloateyNum_Timer, x);
    BNE(DecNumTimer);
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x102b02cc0>
    // <conv.chunks.Comment object at 0x102b02e10>
    // <conv.chunks.Comment object at 0x102b02f30>
    return 0;
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // <conv.chunks.Comment object at 0x102b03110>
    dec(FloateyNum_Timer, x);
    cmp(0x2b);
    // <conv.chunks.Comment object at 0x102b03290>
    BNE(ChkTallEnemy);
    cpy(0xb);
    BNE(LoadNumTiles);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x102b034a0>
    // <conv.chunks.Comment object at 0x102b03530>
    // <conv.chunks.Comment object at 0x102b036e0>
    lda(Sfx_ExtraLife);
    sta(Square2SoundQueue);
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // <conv.chunks.Comment object at 0x102b038f0>
    // <conv.chunks.Comment object at 0x102b03a10>
    lda(offsetof(G, ScoreUpdateData), y);
    lsr();
    // <conv.chunks.Comment object at 0x102b03bc0>
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
    // <conv.chunks.Comment object at 0x102b03e30>
    // <conv.chunks.Comment object at 0x102b03ec0>
    // <conv.chunks.Comment object at 0x102b08050>
    // <conv.chunks.Comment object at 0x102b08170>
    // <conv.chunks.Comment object at 0x102b082c0>
    // <conv.chunks.Comment object at 0x102b083e0>
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x102b08560>
    cmp(Spiny);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x102b08710>
    cmp(PiranhaPlant);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x102b089e0>
    cmp(HammerBro);
    BEQ(GetAltOffset);
    // <conv.chunks.Comment object at 0x102b08bf0>
    cmp(GreyCheepCheep);
    BEQ(FloateyPart);
    // <conv.chunks.Comment object at 0x102b08e00>
    cmp(RedCheepCheep);
    BEQ(FloateyPart);
    cmp(TallEnemy);
    BCS(GetAltOffset);
    // <conv.chunks.Comment object at 0x102b091f0>
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // <conv.chunks.Comment object at 0x102b09430>
    // <conv.chunks.Comment object at 0x102b094c0>
    // <conv.chunks.Comment object at 0x102b09670>
    ldx(SprDataOffset_Ctrl);
    ldy(Alt_SprDataOffset, x);
    ldx(ObjectOffset);
    JMP(FloateyPart);
}

int FloateyPart() {
    // <conv.chunks.Comment object at 0x102b097c0>
    // <conv.chunks.Comment object at 0x102b09910>
    // <conv.chunks.Comment object at 0x102b09a30>
    lda(FloateyNum_Y_Pos, x);
    cmp(0x18);
    BCC(SetupNumSpr);
    // <conv.chunks.Comment object at 0x102b09bb0>
    // <conv.chunks.Comment object at 0x102b09c40>
    sbc(0x1);
    sta(FloateyNum_Y_Pos, x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // <conv.chunks.Comment object at 0x102b09e50>
    // <conv.chunks.Comment object at 0x102b0a030>
    lda(FloateyNum_Y_Pos, x);
    sbc(0x8);
    JSR(DumpTwoSpr);
    lda(FloateyNum_X_Pos, x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x102b0a1b0>
    // <conv.chunks.Comment object at 0x102b0a240>
    // <conv.chunks.Comment object at 0x102b0a3f0>
    // <conv.chunks.Comment object at 0x102b0a540>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x102b0a720>
    // <conv.chunks.Comment object at 0x102b0a7b0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x102b0aa80>
    // <conv.chunks.Comment object at 0x102b0ac60>
    lda(FloateyNum_Control, x);
    asl();
    tax();
    // <conv.chunks.Comment object at 0x102b0af90>
    // <conv.chunks.Comment object at 0x102b0b050>
    lda(offsetof(G, FloateyNumTileData), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x102b0b200>
    lda(((offsetof(G, FloateyNumTileData)) + (1)), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x102b0b500>
    // <conv.chunks.Comment object at 0x102b0b6e0>
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
    // <conv.chunks.Comment object at 0x102ca4470>
    // <conv.chunks.Comment object at 0x102ca4590>
    lda(OperMode);
    BEQ(NextSubtask);
    ldx(0x3);
    // <conv.chunks.Comment object at 0x102ca47a0>
    // <conv.chunks.Comment object at 0x102ca48c0>
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda(BackgroundColorCtrl);
    pha();
    // <conv.chunks.Comment object at 0x102ca4b30>
    // <conv.chunks.Comment object at 0x102ca4c80>
    lda(PlayerStatus);
    pha();
    lda(0x0);
    sta(PlayerStatus);
    lda(0x2);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x102ca4e90>
    // <conv.chunks.Comment object at 0x102ca4f20>
    // <conv.chunks.Comment object at 0x102ca50d0>
    // <conv.chunks.Comment object at 0x102ca5160>
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
    // <conv.chunks.Comment object at 0x102ca59a0>
    // <conv.chunks.Comment object at 0x102ca5cd0>
    // <conv.chunks.Comment object at 0x102ca5e20>
    stx(VRAM_Buffer_AddrCtrl);
    JMP(NextSubtask);
}

int NextSubtask() {
    // <conv.chunks.Comment object at 0x102ca5f70>
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
    // <conv.chunks.Comment object at 0x102ca69f0>
    // <conv.chunks.Comment object at 0x102ca7170>
    // <conv.chunks.Comment object at 0x102ca7290>
    // <conv.chunks.Comment object at 0x102ca7470>
    // <conv.chunks.Comment object at 0x102ca7590>
    inc(ScreenRoutineTask);
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x102ca7710>
    ldy(0x0);
    lda(CurrentPlayer);
    // <conv.chunks.Comment object at 0x102ca7890>
    BEQ(ChkFiery);
    ldy(0x4);
    JMP(ChkFiery);
}

int ChkFiery() {
    // <conv.chunks.Comment object at 0x102ca7b30>
    // <conv.chunks.Comment object at 0x102ca7bc0>
    lda(PlayerStatus);
    cmp(0x2);
    BNE(StartClrGet);
    // <conv.chunks.Comment object at 0x102ca7e00>
    ldy(0x8);
    JMP(StartClrGet);
}

int StartClrGet() {
    // <conv.chunks.Comment object at 0x102cb0050>
    lda(0x3);
    sta(0x0);
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // <conv.chunks.Comment object at 0x102cb01a0>
    lda(offsetof(G, PlayerColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x102cb04a0>
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
    // <conv.chunks.Comment object at 0x102cb0980>
    // <conv.chunks.Comment object at 0x102cb0aa0>
    // <conv.chunks.Comment object at 0x102cb0bc0>
    // <conv.chunks.Comment object at 0x102cb0ce0>
    // <conv.chunks.Comment object at 0x102cb0e00>
    lda(offsetof(G, BackgroundColors), y);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x3f);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x102cb1130>
    // <conv.chunks.Comment object at 0x102cb11c0>
    lda(0x10);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x102cb1640>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102cb1910>
    sta(((VRAM_Buffer1) + (7)), x);
    txa();
    clc();
    // <conv.chunks.Comment object at 0x102cb1c10>
    // <conv.chunks.Comment object at 0x102cb1cd0>
    adc(0x7);
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // <conv.chunks.Comment object at 0x102cb1dc0>
    sta(VRAM_Buffer1_Offset);
    return 0;
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda(AreaStyle);
    // <conv.chunks.Comment object at 0x102cb20c0>
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
    // <conv.chunks.Comment object at 0x102cb2600>
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
    // <conv.chunks.Comment object at 0x102cb2ba0>
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    // <conv.chunks.Comment object at 0x102cb2db0>
    sta(VRAM_Buffer1, x);
    lda(0x73);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x102cb3290>
    sta(((VRAM_Buffer1) + (2)), x);
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x102cb3560>
    iny();
    tya();
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0x28);
    // <conv.chunks.Comment object at 0x102cb3950>
    sta(((VRAM_Buffer1) + (4)), x);
    ldy(LevelNumber);
    iny();
    // <conv.chunks.Comment object at 0x102cb3c20>
    // <conv.chunks.Comment object at 0x102cb3d70>
    tya();
    sta(((VRAM_Buffer1) + (5)), x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102cb8080>
    sta(((VRAM_Buffer1) + (6)), x);
    txa();
    // <conv.chunks.Comment object at 0x102cb8380>
    clc();
    adc(0x6);
    sta(VRAM_Buffer1_Offset);
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda(GameTimerExpiredFlag);
    BEQ(NoTimeUp);
    // <conv.chunks.Comment object at 0x102cb87d0>
    // <conv.chunks.Comment object at 0x102cb88f0>
    lda(0x0);
    sta(GameTimerExpiredFlag);
    lda(0x2);
    // <conv.chunks.Comment object at 0x102cb8a70>
    // <conv.chunks.Comment object at 0x102cb8c20>
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // <conv.chunks.Comment object at 0x102cb8e30>
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
    // <conv.chunks.Comment object at 0x102cb90d0>
    // <conv.chunks.Comment object at 0x102cb91f0>
    // <conv.chunks.Comment object at 0x102cb9340>
    // <conv.chunks.Comment object at 0x102cb9460>
    // <conv.chunks.Comment object at 0x102cb9580>
    // <conv.chunks.Comment object at 0x102cb96a0>
    // <conv.chunks.Comment object at 0x102cb97f0>
    // <conv.chunks.Comment object at 0x102cb9910>
    BEQ(PlayerInter);
    lda(DisableIntermediate);
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // <conv.chunks.Comment object at 0x102cb9b20>
    // <conv.chunks.Comment object at 0x102cb9c40>
    // <conv.chunks.Comment object at 0x102cb9d90>
    JSR(DrawPlayer_Intermediate);
    lda(0x1);
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x102cba270>
    return 0;
    JMP(GameOverInter);
}

int GameOverInter() {
    // <conv.chunks.Comment object at 0x102cba4b0>
    lda(0x12);
    sta(ScreenTimer);
    lda(0x3);
    // <conv.chunks.Comment object at 0x102cba6f0>
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // <conv.chunks.Comment object at 0x102cba9f0>
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
    // <conv.chunks.Comment object at 0x102cbad50>
    // <conv.chunks.Comment object at 0x102cbae70>
    JSR(AreaParserTaskHandler);
    lda(AreaParserTaskNum);
    BNE(TaskLoop);
    dec(ColumnSets);
    // <conv.chunks.Comment object at 0x102cbafc0>
    // <conv.chunks.Comment object at 0x102cbb0e0>
    // <conv.chunks.Comment object at 0x102cbb200>
    BPL(OutputCol);
    inc(ScreenRoutineTask);
    JMP(OutputCol);
}

int OutputCol() {
    // <conv.chunks.Comment object at 0x102cbb410>
    // <conv.chunks.Comment object at 0x102cbb530>
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x102cbb5f0>
    return 0;
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda(OperMode);
    BNE(IncModeTask_B);
    lda(HI8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x102cbb8f0>
    // <conv.chunks.Comment object at 0x102cbba10>
    // <conv.chunks.Comment object at 0x102cbbb30>
    // <conv.chunks.Comment object at 0x102cbbc80>
    lda(LO8(TitleScreenDataOffset));
    sta(PPU_ADDRESS);
    lda(0x3);
    sta(0x1);
    // <conv.chunks.Comment object at 0x102cbbfb0>
    // <conv.chunks.Comment object at 0x102cc4140>
    ldy(0x0);
    sty(0x0);
    lda(PPU_DATA);
    JMP(OutputTScr);
}

int OutputTScr() {
    // <conv.chunks.Comment object at 0x102cc4290>
    // <conv.chunks.Comment object at 0x102cc4530>
    lda(PPU_DATA);
    sta((0x0), y);
    // <conv.chunks.Comment object at 0x102cc4680>
    iny();
    BNE(ChkHiByte);
    inc(0x1);
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // <conv.chunks.Comment object at 0x102cc4890>
    // <conv.chunks.Comment object at 0x102cc49e0>
    // <conv.chunks.Comment object at 0x102cc4a70>
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
    // <conv.chunks.Comment object at 0x102cc5c40>
    // <conv.chunks.Comment object at 0x102cc5d60>
    inc(ScreenRoutineTask);
    return 0;
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(0xfa);
    // <conv.chunks.Comment object at 0x102cc5fa0>
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // <conv.chunks.Comment object at 0x102cc61b0>
    inc(OperMode_Task);
    return 0;
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // <conv.chunks.Comment object at 0x102cdd7c0>
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
    // <conv.chunks.Comment object at 0x102cdd910>
    // <conv.chunks.Comment object at 0x102cdd9a0>
    // <conv.chunks.Comment object at 0x102cdda30>
    // <conv.chunks.Comment object at 0x102cddbe0>
    // <conv.chunks.Comment object at 0x102cddc70>
    // <conv.chunks.Comment object at 0x102cdde20>
    // <conv.chunks.Comment object at 0x102cddeb0>
    lda(NumberOfPlayers);
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // <conv.chunks.Comment object at 0x102cde090>
    // <conv.chunks.Comment object at 0x102cde1e0>
    // <conv.chunks.Comment object at 0x102cde270>
    ldx(offsetof(G, GameTextOffsets), y);
    ldy(0x0);
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // <conv.chunks.Comment object at 0x102cde450>
    lda(offsetof(G, GameText), x);
    cmp(0xff);
    BEQ(EndGameText);
    sta(VRAM_Buffer1, y);
    inx();
    // <conv.chunks.Comment object at 0x102cde660>
    // <conv.chunks.Comment object at 0x102cde6f0>
    // <conv.chunks.Comment object at 0x102cde8a0>
    // <conv.chunks.Comment object at 0x102cdea20>
    iny();
    BNE(GameTextLoop);
    JMP(EndGameText);
}

int EndGameText() {
    // <conv.chunks.Comment object at 0x102cdeb40>
    // <conv.chunks.Comment object at 0x102cdec60>
    lda(0x0);
    sta(VRAM_Buffer1, y);
    pla();
    // <conv.chunks.Comment object at 0x102cdef00>
    tax();
    cmp(0x4);
    // <conv.chunks.Comment object at 0x102cdf020>
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda(NumberofLives);
    clc();
    // <conv.chunks.Comment object at 0x102cdf260>
    // <conv.chunks.Comment object at 0x102cdf2f0>
    // <conv.chunks.Comment object at 0x102cdf410>
    // <conv.chunks.Comment object at 0x102cdf560>
    adc(0x1);
    cmp(10);
    // <conv.chunks.Comment object at 0x102cdf710>
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
    // <conv.chunks.Comment object at 0x102cdfef0>
    // <conv.chunks.Comment object at 0x102ce4080>
    sty(((VRAM_Buffer1) + (19)));
    ldy(LevelNumber);
    iny();
    sty(((VRAM_Buffer1) + (21)));
    // <conv.chunks.Comment object at 0x102ce4440>
    return 0;
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda(NumberOfPlayers);
    BEQ(ExitChkName);
    lda(CurrentPlayer);
    dex();
    // <conv.chunks.Comment object at 0x102ce46e0>
    // <conv.chunks.Comment object at 0x102ce4800>
    // <conv.chunks.Comment object at 0x102ce4920>
    // <conv.chunks.Comment object at 0x102ce4a70>
    BNE(ChkLuigi);
    ldy(OperMode);
    // <conv.chunks.Comment object at 0x102ce4bf0>
    cpy(GameOverModeValue);
    BEQ(ChkLuigi);
    eor(0b1);
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // <conv.chunks.Comment object at 0x102ce50d0>
    ldy(0x4);
    JMP(NameLoop);
}

int NameLoop() {
    // <conv.chunks.Comment object at 0x102ce5250>
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
    // <conv.chunks.Comment object at 0x102ce58e0>
    // <conv.chunks.Comment object at 0x102ce5a30>
    // <conv.chunks.Comment object at 0x102ce5b20>
    tax();
    ldy(0x0);
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // <conv.chunks.Comment object at 0x102ce5ca0>
    lda(offsetof(G, WarpZoneNumbers), x);
    sta(((VRAM_Buffer1) + (27)), y);
    // <conv.chunks.Comment object at 0x102ce5eb0>
    inx();
    iny();
    // <conv.chunks.Comment object at 0x102ce6180>
    iny();
    iny();
    iny();
    cpy(0xc);
    BCC(WarpNumLoop);
    lda(0x2c);
    // <conv.chunks.Comment object at 0x102ce65a0>
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
    // <conv.chunks.Comment object at 0x102ce6bd0>
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
    // <conv.chunks.Comment object at 0x102ce71d0>
    anda(0x1);
    sta(0x5);
    ldy(VRAM_Buffer2_Offset);
    // <conv.chunks.Comment object at 0x102ce7350>
    sty(0x0);
    lda(CurrentNTAddr_Low);
    // <conv.chunks.Comment object at 0x102ce75f0>
    sta(((VRAM_Buffer2) + (1)), y);
    lda(CurrentNTAddr_High);
    sta(VRAM_Buffer2, y);
    lda(0x9a);
    sta(((VRAM_Buffer2) + (2)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102ce7bf0>
    // <conv.chunks.Comment object at 0x102ce7c80>
    // <conv.chunks.Comment object at 0x102ce7f20>
    sta(0x4);
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // <conv.chunks.Comment object at 0x102cec200>
    stx(0x1);
    lda(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x102cec2f0>
    anda(0b11000000);
    sta(0x3);
    asl();
    rol();
    rol();
    tay();
    lda(offsetof(G, MetatileGraphics_Low), y);
    // <conv.chunks.Comment object at 0x102cec5c0>
    // <conv.chunks.Comment object at 0x102cec590>
    // <conv.chunks.Comment object at 0x102cec7a0>
    // <conv.chunks.Comment object at 0x102cec860>
    // <conv.chunks.Comment object at 0x102cec920>
    // <conv.chunks.Comment object at 0x102cec9b0>
    sta(0x6);
    lda(offsetof(G, MetatileGraphics_High), y);
    sta(0x7);
    lda(MetatileBuffer, x);
    asl();
    // <conv.chunks.Comment object at 0x102cecd10>
    // <conv.chunks.Comment object at 0x102cecf80>
    asl();
    sta(0x2);
    lda(AreaParserTaskNum);
    anda(0b1);
    eor(0b1);
    asl();
    adc(0x2);
    // <conv.chunks.Comment object at 0x102ced0a0>
    // <conv.chunks.Comment object at 0x102ced2b0>
    // <conv.chunks.Comment object at 0x102ced3d0>
    // <conv.chunks.Comment object at 0x102ced520>
    // <conv.chunks.Comment object at 0x102ced5e0>
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x102ced790>
    lda((0x6), y);
    sta(((VRAM_Buffer2) + (3)), x);
    // <conv.chunks.Comment object at 0x102ced760>
    iny();
    lda((0x6), y);
    // <conv.chunks.Comment object at 0x102cedc70>
    sta(((VRAM_Buffer2) + (4)), x);
    ldy(0x4);
    lda(0x5);
    BNE(RightCheck);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x102cee000>
    // <conv.chunks.Comment object at 0x102cedfd0>
    // <conv.chunks.Comment object at 0x102cee1b0>
    // <conv.chunks.Comment object at 0x102cee360>
    // <conv.chunks.Comment object at 0x102cee330>
    BCS(LLeft);
    rol(0x3);
    rol(0x3);
    // <conv.chunks.Comment object at 0x102cee660>
    // <conv.chunks.Comment object at 0x102cee630>
    rol(0x3);
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // <conv.chunks.Comment object at 0x102ceea50>
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x102ceea80>
    BCS(NextMTRow);
    lsr(0x3);
    lsr(0x3);
    // <conv.chunks.Comment object at 0x102ceed80>
    // <conv.chunks.Comment object at 0x102ceed50>
    lsr(0x3);
    lsr(0x3);
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // <conv.chunks.Comment object at 0x102cef260>
    lsr(0x3);
    lsr(0x3);
    JMP(NextMTRow);
}

int NextMTRow() {
    // <conv.chunks.Comment object at 0x102cef2c0>
    // <conv.chunks.Comment object at 0x102cef4a0>
    inc(0x4);
    JMP(SetAttrib);
}

int SetAttrib() {
    // <conv.chunks.Comment object at 0x102cef5f0>
    lda(AttributeBuffer, y);
    ora(0x3);
    sta(AttributeBuffer, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x102cef800>
    // <conv.chunks.Comment object at 0x102cef890>
    // <conv.chunks.Comment object at 0x102cefa70>
    inc(0x0);
    ldx(0x1);
    inx();
    // <conv.chunks.Comment object at 0x102cefbf0>
    // <conv.chunks.Comment object at 0x102cefb00>
    cpx(0xd);
    BCC(DrawMTLoop);
    ldy(0x0);
    iny();
    // <conv.chunks.Comment object at 0x102cefe90>
    // <conv.chunks.Comment object at 0x102cf80b0>
    // <conv.chunks.Comment object at 0x102cf8080>
    iny();
    iny();
    lda(0x0);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    inc(CurrentNTAddr_Low);
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x102cf83e0>
    // <conv.chunks.Comment object at 0x102cf85c0>
    // <conv.chunks.Comment object at 0x102cf86e0>
    // <conv.chunks.Comment object at 0x102cf8800>
    // <conv.chunks.Comment object at 0x102cf8920>
    BNE(ExitDrawM);
    lda(0x80);
    sta(CurrentNTAddr_Low);
    lda(CurrentNTAddr_High);
    eor(0b100);
    // <conv.chunks.Comment object at 0x102cf8b30>
    // <conv.chunks.Comment object at 0x102cf8bc0>
    // <conv.chunks.Comment object at 0x102cf8d70>
    // <conv.chunks.Comment object at 0x102cf8e90>
    sta(CurrentNTAddr_High);
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // <conv.chunks.Comment object at 0x102cf90a0>
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda(CurrentNTAddr_Low);
    anda(0b11111);
    sec();
    // <conv.chunks.Comment object at 0x102cf92b0>
    // <conv.chunks.Comment object at 0x102cf93d0>
    // <conv.chunks.Comment object at 0x102cf9520>
    sbc(0x4);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x102cf9610>
    sta(0x1);
    lda(CurrentNTAddr_High);
    // <conv.chunks.Comment object at 0x102cf97c0>
    BCS(SetATHigh);
    eor(0b100);
    JMP(SetATHigh);
}

int SetATHigh() {
    // <conv.chunks.Comment object at 0x102cf9ac0>
    // <conv.chunks.Comment object at 0x102cf9be0>
    anda(0b100);
    ora(0x23);
    // <conv.chunks.Comment object at 0x102cf9d30>
    sta(0x0);
    lda(0x1);
    lsr();
    // <conv.chunks.Comment object at 0x102cf9ee0>
    // <conv.chunks.Comment object at 0x102cf9dc0>
    lsr();
    adc(0xc0);
    sta(0x1);
    // <conv.chunks.Comment object at 0x102cfa1b0>
    // <conv.chunks.Comment object at 0x102cfa300>
    ldx(0x0);
    ldy(VRAM_Buffer2_Offset);
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(0x0);
    sta(VRAM_Buffer2, y);
    // <conv.chunks.Comment object at 0x102cfa6c0>
    lda(0x1);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x102cfa900>
    // <conv.chunks.Comment object at 0x102cfaa20>
    sta(((VRAM_Buffer2) + (1)), y);
    sta(0x1);
    lda(AttributeBuffer, x);
    sta(((VRAM_Buffer2) + (3)), y);
    // <conv.chunks.Comment object at 0x102cfad50>
    // <conv.chunks.Comment object at 0x102cfade0>
    // <conv.chunks.Comment object at 0x102cfaf90>
    lda(0x1);
    sta(((VRAM_Buffer2) + (2)), y);
    // <conv.chunks.Comment object at 0x102cfb200>
    lsr();
    sta(AttributeBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x102cfb530>
    // <conv.chunks.Comment object at 0x102cfb6b0>
    iny();
    iny();
    iny();
    inx();
    cpx(0x7);
    // <conv.chunks.Comment object at 0x102cfb920>
    // <conv.chunks.Comment object at 0x102cfb9b0>
    BCC(AttribLoop);
    sta(VRAM_Buffer2, y);
    sty(VRAM_Buffer2_Offset);
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x102cfbec0>
    return 0;
    JMP(ColorRotation);
}

int ColorRotation() {
    lda(FrameCounter);
    anda(0x7);
    BNE(ExitColorRot);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x102d042c0>
    // <conv.chunks.Comment object at 0x102d05490>
    // <conv.chunks.Comment object at 0x102d05520>
    // <conv.chunks.Comment object at 0x102d056d0>
    cpx(0x31);
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // <conv.chunks.Comment object at 0x102d05850>
    // <conv.chunks.Comment object at 0x102d05a30>
    // <conv.chunks.Comment object at 0x102d05ac0>
    lda(offsetof(G, BlankPalette), y);
    sta(VRAM_Buffer1, x);
    inx();
    // <conv.chunks.Comment object at 0x102d05c40>
    // <conv.chunks.Comment object at 0x102d05dc0>
    iny();
    cpy(0x8);
    BCC(GetBlankPal);
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x102d05f40>
    // <conv.chunks.Comment object at 0x102d060f0>
    lda(0x3);
    sta(0x0);
    lda(AreaType);
    asl();
    // <conv.chunks.Comment object at 0x102d06330>
    // <conv.chunks.Comment object at 0x102d063c0>
    // <conv.chunks.Comment object at 0x102d06570>
    asl();
    tay();
    JMP(GetAreaPal);
}

int GetAreaPal() {
    // <conv.chunks.Comment object at 0x102d066c0>
    // <conv.chunks.Comment object at 0x102d06750>
    lda(offsetof(G, Palette3Data), y);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x102d068d0>
    iny();
    inx();
    dec(0x0);
    BPL(GetAreaPal);
    ldx(VRAM_Buffer1_Offset);
    ldy(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x102d06c30>
    // <conv.chunks.Comment object at 0x102d06cc0>
    // <conv.chunks.Comment object at 0x102d06e40>
    // <conv.chunks.Comment object at 0x102d06f60>
    lda(offsetof(G, ColorRotatePalette), y);
    sta(((VRAM_Buffer1) + (4)), x);
    // <conv.chunks.Comment object at 0x102d071a0>
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x102d074d0>
    adc(0x7);
    sta(VRAM_Buffer1_Offset);
    inc(ColorRotateOffset);
    // <conv.chunks.Comment object at 0x102d07740>
    lda(ColorRotateOffset);
    cmp(0x6);
    BCC(ExitColorRot);
    // <conv.chunks.Comment object at 0x102d07950>
    // <conv.chunks.Comment object at 0x102d079e0>
    lda(0x0);
    sta(ColorRotateOffset);
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // <conv.chunks.Comment object at 0x102d07bf0>
    // <conv.chunks.Comment object at 0x102d07dd0>
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
    // <conv.chunks.Comment object at 0x102d100b0>
    // <conv.chunks.Comment object at 0x102d10140>
    // <conv.chunks.Comment object at 0x102d10da0>
    // <conv.chunks.Comment object at 0x102d10f50>
    // <conv.chunks.Comment object at 0x102d11070>
    // <conv.chunks.Comment object at 0x102d11100>
    JSR(PutBlockMetatile);
    lda(0x6);
    sta(VRAM_Buffer_AddrCtrl);
    // <conv.chunks.Comment object at 0x102d11340>
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
    // <conv.chunks.Comment object at 0x102d11bb0>
    // <conv.chunks.Comment object at 0x102d11c40>
    // <conv.chunks.Comment object at 0x102d11d60>
    // <conv.chunks.Comment object at 0x102d11f10>
    cmp(0x58);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x102d12090>
    cmp(0x51);
    BEQ(UseBOffset);
    iny();
    // <conv.chunks.Comment object at 0x102d122a0>
    // <conv.chunks.Comment object at 0x102d12480>
    cmp(0x5d);
    BEQ(UseBOffset);
    // <conv.chunks.Comment object at 0x102d12570>
    cmp(0x52);
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // <conv.chunks.Comment object at 0x102d12780>
    // <conv.chunks.Comment object at 0x102d12960>
    // <conv.chunks.Comment object at 0x102d129f0>
    tya();
    ldy(VRAM_Buffer1_Offset);
    iny();
    JSR(PutBlockMetatile);
    JMP(MoveVOffset);
}

int MoveVOffset() {
    // <conv.chunks.Comment object at 0x102d12ae0>
    // <conv.chunks.Comment object at 0x102d12c30>
    // <conv.chunks.Comment object at 0x102d12cc0>
    // <conv.chunks.Comment object at 0x102d12de0>
    dey();
    tya();
    // <conv.chunks.Comment object at 0x102d12f00>
    clc();
    adc(10);
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(0x0);
    sty(0x1);
    // <conv.chunks.Comment object at 0x102d13290>
    // <conv.chunks.Comment object at 0x102d13260>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x102d13560>
    tax();
    ldy(0x20);
    lda(0x6);
    cmp(0xd0);
    BCC(SaveHAdder);
    ldy(0x24);
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // <conv.chunks.Comment object at 0x102d13680>
    // <conv.chunks.Comment object at 0x102d137d0>
    // <conv.chunks.Comment object at 0x102d13860>
    // <conv.chunks.Comment object at 0x102d13950>
    // <conv.chunks.Comment object at 0x102d13b00>
    // <conv.chunks.Comment object at 0x102d13b90>
    sty(0x3);
    anda(0xf);
    asl();
    sta(0x4);
    // <conv.chunks.Comment object at 0x102d13d10>
    // <conv.chunks.Comment object at 0x102d13ec0>
    // <conv.chunks.Comment object at 0x102d13f80>
    lda(0x0);
    sta(0x5);
    lda(0x2);
    // <conv.chunks.Comment object at 0x102d1c1d0>
    // <conv.chunks.Comment object at 0x102d1c110>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x102d1c470>
    asl();
    rol(0x5);
    // <conv.chunks.Comment object at 0x102d1c650>
    asl();
    rol(0x5);
    adc(0x4);
    sta(0x4);
    lda(0x5);
    adc(0x0);
    // <conv.chunks.Comment object at 0x102d1c800>
    // <conv.chunks.Comment object at 0x102d1c7d0>
    // <conv.chunks.Comment object at 0x102d1c890>
    // <conv.chunks.Comment object at 0x102d1c9b0>
    // <conv.chunks.Comment object at 0x102d1cbf0>
    clc();
    adc(0x3);
    sta(0x5);
    ldy(0x1);
    JMP(RemBridge);
}

int RemBridge() {
    // <conv.chunks.Comment object at 0x102d1ce30>
    // <conv.chunks.Comment object at 0x102d1ce00>
    // <conv.chunks.Comment object at 0x102d1cec0>
    // <conv.chunks.Comment object at 0x102d1d100>
    lda(offsetof(G, BlockGfxData), x);
    sta(((VRAM_Buffer1) + (2)), y);
    // <conv.chunks.Comment object at 0x102d1d2e0>
    lda(((offsetof(G, BlockGfxData)) + (1)), x);
    sta(((VRAM_Buffer1) + (3)), y);
    lda(((offsetof(G, BlockGfxData)) + (2)), x);
    sta(((VRAM_Buffer1) + (7)), y);
    lda(((offsetof(G, BlockGfxData)) + (3)), x);
    // <conv.chunks.Comment object at 0x102d1d8b0>
    // <conv.chunks.Comment object at 0x102d1dac0>
    // <conv.chunks.Comment object at 0x102d1dcd0>
    sta(((VRAM_Buffer1) + (8)), y);
    lda(0x4);
    sta(VRAM_Buffer1, y);
    clc();
    adc(0x20);
    sta(((VRAM_Buffer1) + (5)), y);
    lda(0x5);
    sta(((VRAM_Buffer1) - (1)), y);
    sta(((VRAM_Buffer1) + (4)), y);
    // <conv.chunks.Comment object at 0x102d1e0c0>
    // <conv.chunks.Comment object at 0x102d1e330>
    // <conv.chunks.Comment object at 0x102d1e3c0>
    // <conv.chunks.Comment object at 0x102d1e450>
    // <conv.chunks.Comment object at 0x102d1e720>
    // <conv.chunks.Comment object at 0x102d1e7b0>
    // <conv.chunks.Comment object at 0x102d1e9f0>
    lda(0x2);
    sta(((VRAM_Buffer1) + (1)), y);
    sta(((VRAM_Buffer1) + (6)), y);
    // <conv.chunks.Comment object at 0x102d1ec60>
    // <conv.chunks.Comment object at 0x102d1ef00>
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
    // <conv.chunks.Comment object at 0x102d64fb0>
    // <conv.chunks.Comment object at 0x102d650d0>
    // <conv.chunks.Comment object at 0x102d651f0>
    // <conv.chunks.Comment object at 0x102d65310>
    JSR(WritePPUReg1);
    lda(0x24);
    // <conv.chunks.Comment object at 0x102d65520>
    JSR(WriteNTAddr);
    lda(0x20);
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x102d65b50>
    ldy(0xc0);
    lda(0x24);
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // <conv.chunks.Comment object at 0x102d65dc0>
    sta(PPU_DATA);
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(64);
    // <conv.chunks.Comment object at 0x102d662d0>
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
    // <conv.chunks.Comment object at 0x102d66930>
    sta(VerticalScroll);
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x102d66b40>
    // <conv.chunks.Comment object at 0x102d66c90>
    // <conv.chunks.Comment object at 0x102d66cf0>
    sta(JOYPAD_PORT);
    lsr();
    tax();
    // <conv.chunks.Comment object at 0x102d66fc0>
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
    // <conv.chunks.Comment object at 0x102d67380>
    pha();
    lda(JOYPAD_PORT, x);
    sta(0x0);
    lsr();
    ora(0x0);
    // <conv.chunks.Comment object at 0x102d67500>
    // <conv.chunks.Comment object at 0x102d67680>
    // <conv.chunks.Comment object at 0x102d67650>
    // <conv.chunks.Comment object at 0x102d67860>
    lsr();
    pla();
    rol();
    // <conv.chunks.Comment object at 0x102d67a10>
    // <conv.chunks.Comment object at 0x102d67ad0>
    dey();
    BNE(PortLoop);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x102d67bf0>
    // <conv.chunks.Comment object at 0x102d67d10>
    pha();
    anda(0b110000);
    anda(JoypadBitMask, x);
    BEQ(Save8Bits);
    // <conv.chunks.Comment object at 0x102d67ef0>
    // <conv.chunks.Comment object at 0x102d6c050>
    // <conv.chunks.Comment object at 0x102d6c1a0>
    pla();
    anda(0b11001111);
    sta(SavedJoypadBits, x);
    // <conv.chunks.Comment object at 0x102d6c350>
    // <conv.chunks.Comment object at 0x102d6c470>
    return 0;
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta(JoypadBitMask, x);
    // <conv.chunks.Comment object at 0x102d6c710>
    return 0;
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x102d6c9b0>
    iny();
    lda((0x0), y);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x102d6cb60>
    // <conv.chunks.Comment object at 0x102d6cbc0>
    iny();
    lda((0x0), y);
    asl();
    // <conv.chunks.Comment object at 0x102d6ce90>
    // <conv.chunks.Comment object at 0x102d6d040>
    pha();
    lda(Mirror_PPU_CTRL_REG1);
    ora(0b100);
    BCS(SetupWrites);
    anda(0b11111011);
    JMP(SetupWrites);
}

int SetupWrites() {
    // <conv.chunks.Comment object at 0x102d6d160>
    // <conv.chunks.Comment object at 0x102d6d280>
    // <conv.chunks.Comment object at 0x102d6d3a0>
    // <conv.chunks.Comment object at 0x102d6d4c0>
    // <conv.chunks.Comment object at 0x102d6d5e0>
    JSR(WritePPUReg1);
    pla();
    // <conv.chunks.Comment object at 0x102d6d760>
    asl();
    BCC(GetLength);
    ora(0b10);
    // <conv.chunks.Comment object at 0x102d6d880>
    // <conv.chunks.Comment object at 0x102d6d9a0>
    iny();
    JMP(GetLength);
}

int GetLength() {
    // <conv.chunks.Comment object at 0x102d6db50>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x102d6dc70>
    tax();
    JMP(OutputToVRAM);
}

int OutputToVRAM() {
    // <conv.chunks.Comment object at 0x102d6dd90>
    BCS(RepeatByte);
    iny();
    JMP(RepeatByte);
}

int RepeatByte() {
    // <conv.chunks.Comment object at 0x102d6df10>
    // <conv.chunks.Comment object at 0x102d6dfa0>
    lda((0x0), y);
    sta(PPU_DATA);
    dex();
    // <conv.chunks.Comment object at 0x102d6e270>
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x102d6e540>
    // <conv.chunks.Comment object at 0x102d6e510>
    lda(0x0);
    adc(0x1);
    sta(0x1);
    lda(0x3f);
    // <conv.chunks.Comment object at 0x102d6e7b0>
    sta(PPU_ADDRESS);
    lda(0x0);
    sta(PPU_ADDRESS);
    sta(PPU_ADDRESS);
    // <conv.chunks.Comment object at 0x102d6ee10>
    sta(PPU_ADDRESS);
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // <conv.chunks.Comment object at 0x102d6f020>
    ldx(PPU_STATUS);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102d6f170>
    lda((0x0), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // <conv.chunks.Comment object at 0x102d6f2c0>
    // <conv.chunks.Comment object at 0x102d6f500>
    sta(PPU_SCROLL_REG);
    sta(PPU_SCROLL_REG);
    // <conv.chunks.Comment object at 0x102d6f650>
    return 0;
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta(PPU_CTRL_REG1);
    sta(Mirror_PPU_CTRL_REG1);
    // <conv.chunks.Comment object at 0x102d6f860>
    // <conv.chunks.Comment object at 0x102d6f980>
    return 0;
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(0x0);
    JSR(OutputNumbers);
    lda(0x0);
    lsr();
    // <conv.chunks.Comment object at 0x102d74380>
    // <conv.chunks.Comment object at 0x102d74530>
    // <conv.chunks.Comment object at 0x102d74a40>
    // <conv.chunks.Comment object at 0x102d74a10>
    lsr();
    lsr();
    lsr();
    JMP(OutputNumbers);
}

int OutputNumbers() {
    clc();
    // <conv.chunks.Comment object at 0x102d74e00>
    adc(0x1);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102d74ef0>
    cmp(0x6);
    BCS(ExitOutputN);
    pha();
    asl();
    // <conv.chunks.Comment object at 0x102d752b0>
    // <conv.chunks.Comment object at 0x102d75370>
    tay();
    ldx(VRAM_Buffer1_Offset);
    lda(0x20);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x102d75490>
    // <conv.chunks.Comment object at 0x102d755b0>
    // <conv.chunks.Comment object at 0x102d75640>
    BNE(SetupNums);
    lda(0x22);
    JMP(SetupNums);
}

int SetupNums() {
    sta(VRAM_Buffer1, x);
    lda(offsetof(G, StatusBarData), y);
    sta(((VRAM_Buffer1) + (1)), x);
    // <conv.chunks.Comment object at 0x102d75b50>
    // <conv.chunks.Comment object at 0x102d75ca0>
    lda(((offsetof(G, StatusBarData)) + (1)), y);
    sta(((VRAM_Buffer1) + (2)), x);
    sta(0x3);
    stx(0x2);
    pla();
    // <conv.chunks.Comment object at 0x102d762a0>
    // <conv.chunks.Comment object at 0x102d76270>
    // <conv.chunks.Comment object at 0x102d76330>
    tax();
    lda(offsetof(G, StatusBarOffset), x);
    // <conv.chunks.Comment object at 0x102d76600>
    sec();
    sbc(((offsetof(G, StatusBarData)) + (1)), y);
    tay();
    // <conv.chunks.Comment object at 0x102d767e0>
    // <conv.chunks.Comment object at 0x102d76a20>
    ldx(0x2);
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // <conv.chunks.Comment object at 0x102d76ab0>
    lda(DisplayDigits, y);
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    iny();
    dec(0x3);
    // <conv.chunks.Comment object at 0x102d77050>
    BNE(DigitPLoop);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102d77230>
    sta(((VRAM_Buffer1) + (3)), x);
    inx();
    // <conv.chunks.Comment object at 0x102d77560>
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
    // <conv.chunks.Comment object at 0x102d77950>
    cmp(TitleScreenModeValue);
    BEQ(EraseDMods);
    // <conv.chunks.Comment object at 0x102d77b60>
    ldx(0x5);
    JMP(AddModLoop);
}

int AddModLoop() {
    // <conv.chunks.Comment object at 0x102d77ce0>
    lda(DigitModifier, x);
    clc();
    adc(DisplayDigits, y);
    BMI(BorrowOne);
    // <conv.chunks.Comment object at 0x102d77f80>
    // <conv.chunks.Comment object at 0x102d80110>
    cmp(10);
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // <conv.chunks.Comment object at 0x102d80230>
    // <conv.chunks.Comment object at 0x102d80440>
    sta(DisplayDigits, y);
    dey();
    dex();
    BPL(AddModLoop);
    JMP(EraseDMods);
}

int EraseDMods() {
    // <conv.chunks.Comment object at 0x102d805f0>
    // <conv.chunks.Comment object at 0x102d806b0>
    // <conv.chunks.Comment object at 0x102d80740>
    // <conv.chunks.Comment object at 0x102d80860>
    lda(0x0);
    ldx(0x6);
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // <conv.chunks.Comment object at 0x102d80920>
    // <conv.chunks.Comment object at 0x102d80a40>
    sta(((DigitModifier) - (1)), x);
    dex();
    BPL(EraseMLoop);
    // <conv.chunks.Comment object at 0x102d80d70>
    return 0;
    JMP(BorrowOne);
}

int BorrowOne() {
    // <conv.chunks.Comment object at 0x102d80f20>
    dec(((DigitModifier) - (1)), x);
    lda(0x9);
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // <conv.chunks.Comment object at 0x102d81130>
    // <conv.chunks.Comment object at 0x102d811c0>
    // <conv.chunks.Comment object at 0x102d81370>
    sec();
    sbc(10);
    inc(((DigitModifier) - (1)), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x102d818e0>
    JSR(TopScoreCheck);
    ldx(0xb);
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(0x5);
    // <conv.chunks.Comment object at 0x102d81c40>
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // <conv.chunks.Comment object at 0x102d81df0>
    lda(PlayerScoreDisplay, x);
    sbc(TopScoreDisplay, y);
    dex();
    dey();
    // <conv.chunks.Comment object at 0x102d81f70>
    // <conv.chunks.Comment object at 0x102d820f0>
    // <conv.chunks.Comment object at 0x102d821b0>
    BPL(GetScoreDiff);
    BCC(NoTopSc);
    inx();
    // <conv.chunks.Comment object at 0x102d82330>
    // <conv.chunks.Comment object at 0x102d824b0>
    iny();
    JMP(CopyScore);
}

int CopyScore() {
    // <conv.chunks.Comment object at 0x102d825d0>
    lda(PlayerScoreDisplay, x);
    sta(TopScoreDisplay, y);
    inx();
    iny();
    cpy(0x6);
    // <conv.chunks.Comment object at 0x102d82990>
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
    // <conv.chunks.Comment object at 0x102d82e10>
    // <conv.chunks.Comment object at 0x102d82e70>
    ldy(0x1f);
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // <conv.chunks.Comment object at 0x102d83ad0>
    sta(SoundMemory, y);
    dey();
    // <conv.chunks.Comment object at 0x102d83d10>
    BPL(ClrSndLoop);
    lda(0x18);
    // <conv.chunks.Comment object at 0x102d83e90>
    sta(DemoTimer);
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(0x4b);
    JSR(InitializeMemory);
    // <conv.chunks.Comment object at 0x102d8c200>
    // <conv.chunks.Comment object at 0x102d8c290>
    ldx(0x21);
    lda(0x0);
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // <conv.chunks.Comment object at 0x102d8c590>
    sta(Timers, x);
    dex();
    // <conv.chunks.Comment object at 0x102d8c800>
    BPL(ClrTimersLoop);
    lda(HalfwayPage);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x102d8ca70>
    BEQ(StartPage);
    lda(EntrancePage);
    JMP(StartPage);
}

int StartPage() {
    // <conv.chunks.Comment object at 0x102d8cc80>
    // <conv.chunks.Comment object at 0x102d8cda0>
    sta(ScreenLeft_PageLoc);
    sta(CurrentPageLoc);
    sta(BackloadingFlag);
    JSR(GetScreenPosition);
    ldy(0x20);
    anda(0b1);
    BEQ(SetInitNTHigh);
    // <conv.chunks.Comment object at 0x102d8cef0>
    // <conv.chunks.Comment object at 0x102d8d010>
    // <conv.chunks.Comment object at 0x102d8d130>
    // <conv.chunks.Comment object at 0x102d8d250>
    // <conv.chunks.Comment object at 0x102d8d2e0>
    // <conv.chunks.Comment object at 0x102d8d490>
    ldy(0x24);
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // <conv.chunks.Comment object at 0x102d8d610>
    sty(CurrentNTAddr_High);
    ldy(0x80);
    sty(CurrentNTAddr_Low);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x102d8da00>
    // <conv.chunks.Comment object at 0x102d8dac0>
    asl();
    asl();
    sta(BlockBufferColumnPos);
    dec(AreaObjectLength);
    // <conv.chunks.Comment object at 0x102d8dd60>
    dec(((AreaObjectLength) + (1)));
    dec(((AreaObjectLength) + (2)));
    lda(0xb);
    sta(ColumnSets);
    JSR(GetAreaDataAddrs);
    lda(PrimaryHardMode);
    BNE(SetSecHard);
    lda(WorldNumber);
    cmp(World5);
    // <conv.chunks.Comment object at 0x102d8e1e0>
    // <conv.chunks.Comment object at 0x102d8e270>
    // <conv.chunks.Comment object at 0x102d8e420>
    // <conv.chunks.Comment object at 0x102d8e540>
    // <conv.chunks.Comment object at 0x102d8e660>
    // <conv.chunks.Comment object at 0x102d8e780>
    // <conv.chunks.Comment object at 0x102d8e8a0>
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda(LevelNumber);
    cmp(Level3);
    // <conv.chunks.Comment object at 0x102d8eae0>
    // <conv.chunks.Comment object at 0x102d8ec00>
    // <conv.chunks.Comment object at 0x102d8ed20>
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // <conv.chunks.Comment object at 0x102d8ef60>
    inc(SecondaryHardMode);
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda(HalfwayPage);
    BEQ(DoneInitArea);
    lda(0x2);
    // <conv.chunks.Comment object at 0x102d8f2c0>
    sta(PlayerEntranceCtrl);
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // <conv.chunks.Comment object at 0x102d8f4d0>
    lda(Silence);
    sta(AreaMusicQueue);
    lda(0x1);
    // <conv.chunks.Comment object at 0x102d8f740>
    sta(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x102d8f950>
    return 0;
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(0x1);
    sta(FetchNewGameTimerFlag);
    sta(PlayerSize);
    // <conv.chunks.Comment object at 0x102d8fbc0>
    // <conv.chunks.Comment object at 0x102d8fd70>
    lda(0x2);
    sta(NumberofLives);
    // <conv.chunks.Comment object at 0x102d8fef0>
    sta(OffScr_NumberofLives);
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(0x0);
    sta(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x102d98260>
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // <conv.chunks.Comment object at 0x102d984a0>
    sta(((VRAM_Buffer1) - (1)), y);
    iny();
    BNE(ClearVRLoop);
    sta(GameTimerExpiredFlag);
    sta(DisableIntermediate);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x102d98860>
    // <conv.chunks.Comment object at 0x102d98980>
    // <conv.chunks.Comment object at 0x102d98aa0>
    lda(0xff);
    sta(BalPlatformAlignment);
    lda(ScreenLeft_PageLoc);
    lsr(Mirror_PPU_CTRL_REG1);
    anda(0x1);
    ror();
    rol(Mirror_PPU_CTRL_REG1);
    JSR(GetAreaMusic);
    lda(0x38);
    // <conv.chunks.Comment object at 0x102d98c20>
    // <conv.chunks.Comment object at 0x102d98dd0>
    // <conv.chunks.Comment object at 0x102d98ef0>
    // <conv.chunks.Comment object at 0x102d99010>
    // <conv.chunks.Comment object at 0x102d99160>
    // <conv.chunks.Comment object at 0x102d991f0>
    // <conv.chunks.Comment object at 0x102d99310>
    // <conv.chunks.Comment object at 0x102d99430>
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
    // <conv.chunks.Comment object at 0x102d99f40>
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
    // <conv.chunks.Comment object at 0x102d9a5d0>
    JSR(DoNothing1);
    inc(Sprite0HitDetectFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x102d9a7e0>
    // <conv.chunks.Comment object at 0x102d9a900>
    return 0;
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(0x7);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102d9ab70>
    // <conv.chunks.Comment object at 0x102d9ac00>
    sta(0x6);
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(0x7);
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // <conv.chunks.Comment object at 0x102d9af60>
    cpx(0x1);
    BNE(InitByte);
    cpy(0x60);
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // <conv.chunks.Comment object at 0x102d9b080>
    // <conv.chunks.Comment object at 0x102d9b230>
    // <conv.chunks.Comment object at 0x102d9b2c0>
    // <conv.chunks.Comment object at 0x102d9b470>
    sta((0x6), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(0xff);
    // <conv.chunks.Comment object at 0x102d9b6e0>
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // <conv.chunks.Comment object at 0x102d9b920>
    // <conv.chunks.Comment object at 0x102d9b9b0>
    return 0;
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x102d9bbf0>
    BEQ(ExitGetM);
    lda(AltEntranceControl);
    cmp(0x2);
    BEQ(ChkAreaType);
    ldy(0x5);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x102da01a0>
    // <conv.chunks.Comment object at 0x102da02c0>
    // <conv.chunks.Comment object at 0x102da0350>
    // <conv.chunks.Comment object at 0x102da0500>
    // <conv.chunks.Comment object at 0x102da0590>
    cmp(0x6);
    BEQ(StoreMusic);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x102da07a0>
    // <conv.chunks.Comment object at 0x102da0950>
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // <conv.chunks.Comment object at 0x102da0b60>
    ldy(AreaType);
    lda(CloudTypeOverride);
    BEQ(StoreMusic);
    ldy(0x4);
    JMP(StoreMusic);
}

int StoreMusic() {
    // <conv.chunks.Comment object at 0x102da0da0>
    // <conv.chunks.Comment object at 0x102da0ec0>
    // <conv.chunks.Comment object at 0x102da0f50>
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
    // <conv.chunks.Comment object at 0x102da1850>
    // <conv.chunks.Comment object at 0x102da2510>
    // <conv.chunks.Comment object at 0x102da2630>
    // <conv.chunks.Comment object at 0x102da26c0>
    // <conv.chunks.Comment object at 0x102da2870>
    // <conv.chunks.Comment object at 0x102da2900>
    sta(Player_Y_HighPos);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102da2ba0>
    sta(Player_State);
    dec(Player_CollisionBits);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102da2db0>
    // <conv.chunks.Comment object at 0x102da2ed0>
    sty(HalfwayPage);
    lda(AreaType);
    BNE(ChkStPos);
    // <conv.chunks.Comment object at 0x102da30e0>
    // <conv.chunks.Comment object at 0x102da3200>
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty(SwimmingFlag);
    ldx(PlayerEntranceCtrl);
    ldy(AltEntranceControl);
    // <conv.chunks.Comment object at 0x102da34d0>
    // <conv.chunks.Comment object at 0x102da35f0>
    BEQ(SetStPos);
    cpy(0x1);
    BEQ(SetStPos);
    ldx(((offsetof(G, AltYPosOffset)) - (2)), y);
    JMP(SetStPos);
}

int SetStPos() {
    // <conv.chunks.Comment object at 0x102da39e0>
    // <conv.chunks.Comment object at 0x102da3bf0>
    lda(offsetof(G, PlayerStarting_X_Pos), y);
    sta(Player_X_Position);
    lda(offsetof(G, PlayerStarting_Y_Pos), x);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x102da3d70>
    // <conv.chunks.Comment object at 0x102da3e90>
    // <conv.chunks.Comment object at 0x102da3fe0>
    lda(offsetof(G, PlayerBGPriorityData), x);
    sta(Player_SprAttrib);
    JSR(GetPlayerColors);
    ldy(GameTimerSetting);
    BEQ(ChkOverR);
    lda(FetchNewGameTimerFlag);
    BEQ(ChkOverR);
    lda(offsetof(G, GameTimerData), y);
    sta(GameTimerDisplay);
    // <conv.chunks.Comment object at 0x102dac260>
    // <conv.chunks.Comment object at 0x102dac380>
    // <conv.chunks.Comment object at 0x102dac4a0>
    // <conv.chunks.Comment object at 0x102dac5c0>
    // <conv.chunks.Comment object at 0x102dac6e0>
    // <conv.chunks.Comment object at 0x102dac800>
    // <conv.chunks.Comment object at 0x102dac920>
    // <conv.chunks.Comment object at 0x102daca70>
    lda(0x1);
    sta(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x102dacbf0>
    lsr();
    sta(((GameTimerDisplay) + (1)));
    sta(FetchNewGameTimerFlag);
    sta(StarInvincibleTimer);
    JMP(ChkOverR);
}

int ChkOverR() {
    // <conv.chunks.Comment object at 0x102dacef0>
    // <conv.chunks.Comment object at 0x102dad0d0>
    // <conv.chunks.Comment object at 0x102dad1f0>
    // <conv.chunks.Comment object at 0x102dad310>
    ldy(JoypadOverride);
    BEQ(ChkSwimE);
    lda(0x3);
    // <conv.chunks.Comment object at 0x102dad550>
    sta(Player_State);
    ldx(0x0);
    // <conv.chunks.Comment object at 0x102dad760>
    JSR(InitBlock_XY_Pos);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x102dad970>
    sta(Block_Y_Position);
    ldx(0x5);
    ldy(0x0);
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // <conv.chunks.Comment object at 0x102dadb80>
    // <conv.chunks.Comment object at 0x102dadc10>
    // <conv.chunks.Comment object at 0x102dadd30>
    // <conv.chunks.Comment object at 0x102dadee0>
    ldy(AreaType);
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // <conv.chunks.Comment object at 0x102dae030>
    // <conv.chunks.Comment object at 0x102dae150>
    // <conv.chunks.Comment object at 0x102dae270>
    lda(0x7);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x102dae330>
    return 0;
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc(DisableScreenFlag);
    // <conv.chunks.Comment object at 0x102dae600>
    lda(0x0);
    sta(Sprite0HitDetectFlag);
    lda(Silence);
    // <conv.chunks.Comment object at 0x102daf230>
    sta(EventMusicQueue);
    dec(NumberofLives);
    BPL(StillInGame);
    // <conv.chunks.Comment object at 0x102daf470>
    // <conv.chunks.Comment object at 0x102daf590>
    lda(0x0);
    sta(OperMode_Task);
    lda(GameOverModeValue);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x102daf710>
    // <conv.chunks.Comment object at 0x102daf8c0>
    // <conv.chunks.Comment object at 0x102daf9e0>
    return 0;
    JMP(StillInGame);
}

int StillInGame() {
    // <conv.chunks.Comment object at 0x102dafb90>
    lda(WorldNumber);
    asl();
    // <conv.chunks.Comment object at 0x102dafd10>
    tax();
    lda(LevelNumber);
    anda(0x2);
    BEQ(GetHalfway);
    // <conv.chunks.Comment object at 0x102dafe30>
    // <conv.chunks.Comment object at 0x102daff50>
    // <conv.chunks.Comment object at 0x102daffe0>
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // <conv.chunks.Comment object at 0x102db4260>
    ldy(offsetof(G, HalfwayPageNybbles), x);
    lda(LevelNumber);
    // <conv.chunks.Comment object at 0x102db43e0>
    lsr();
    tya();
    // <conv.chunks.Comment object at 0x102db45c0>
    BCS(MaskHPNyb);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x102db4770>
    // <conv.chunks.Comment object at 0x102db4830>
    lsr();
    lsr();
    JMP(MaskHPNyb);
}

int MaskHPNyb() {
    // <conv.chunks.Comment object at 0x102db49e0>
    anda(0b1111);
    cmp(ScreenLeft_PageLoc);
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(0x0);
    JMP(SetHalfway);
}

int SetHalfway() {
    // <conv.chunks.Comment object at 0x102db4c20>
    // <conv.chunks.Comment object at 0x102db4d40>
    // <conv.chunks.Comment object at 0x102db4e60>
    // <conv.chunks.Comment object at 0x102db4ef0>
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
    // <conv.chunks.Comment object at 0x102db5760>
    // <conv.chunks.Comment object at 0x102db57f0>
    // <conv.chunks.Comment object at 0x102db59a0>
    lda(GameOverMusic);
    sta(EventMusicQueue);
    inc(DisableScreenFlag);
    inc(OperMode_Task);
    // <conv.chunks.Comment object at 0x102db5bb0>
    // <conv.chunks.Comment object at 0x102db5cd0>
    // <conv.chunks.Comment object at 0x102db5df0>
    return 0;
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x102db6000>
    sta(DisableScreenFlag);
    lda(SavedJoypad1Bits);
    // <conv.chunks.Comment object at 0x102db6210>
    anda(Start_Button);
    BNE(TerminateGame);
    lda(ScreenTimer);
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda(Silence);
    // <conv.chunks.Comment object at 0x102db6780>
    sta(EventMusicQueue);
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda(WorldNumber);
    sta(ContinueWorld);
    // <conv.chunks.Comment object at 0x102db69c0>
    // <conv.chunks.Comment object at 0x102db6ae0>
    // <conv.chunks.Comment object at 0x102db6c00>
    // <conv.chunks.Comment object at 0x102db6d20>
    lda(0x0);
    asl();
    sta(OperMode_Task);
    sta(ScreenTimer);
    // <conv.chunks.Comment object at 0x102db6f60>
    // <conv.chunks.Comment object at 0x102db6ff0>
    // <conv.chunks.Comment object at 0x102db7140>
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
    // <conv.chunks.Comment object at 0x102db7410>
    // <conv.chunks.Comment object at 0x102db7530>
    // <conv.chunks.Comment object at 0x102db75c0>
    // <conv.chunks.Comment object at 0x102db7770>
    // <conv.chunks.Comment object at 0x102db7890>
    // <conv.chunks.Comment object at 0x102db7920>
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
    // <conv.chunks.Comment object at 0x102dc01a0>
    // <conv.chunks.Comment object at 0x102dc0230>
    BEQ(ExTrans);
    lda(OffScr_NumberofLives);
    BMI(ExTrans);
    lda(CurrentPlayer);
    eor(0b1);
    // <conv.chunks.Comment object at 0x102dc0470>
    // <conv.chunks.Comment object at 0x102dc0590>
    // <conv.chunks.Comment object at 0x102dc06e0>
    // <conv.chunks.Comment object at 0x102dc0800>
    sta(CurrentPlayer);
    ldx(0x6);
    JMP(TransLoop);
}

int TransLoop() {
    // <conv.chunks.Comment object at 0x102dc0a70>
    lda(OnscreenPlayerInfo, x);
    pha();
    lda(OffscreenPlayerInfo, x);
    // <conv.chunks.Comment object at 0x102dc0cb0>
    // <conv.chunks.Comment object at 0x102dc0d40>
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
    // <conv.chunks.Comment object at 0x102dc1850>
    // <conv.chunks.Comment object at 0x102dc1970>
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
    // <conv.chunks.Comment object at 0x102dc1ee0>
    // <conv.chunks.Comment object at 0x102dc2000>
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
    // <conv.chunks.Comment object at 0x102dc28d0>
    lda(CurrentColumnPos);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102dc2ae0>
    BNE(NoColWrap);
    sta(CurrentColumnPos);
    inc(CurrentPageLoc);
    JMP(NoColWrap);
}

int NoColWrap() {
    // <conv.chunks.Comment object at 0x102dc2cf0>
    // <conv.chunks.Comment object at 0x102dc2e10>
    // <conv.chunks.Comment object at 0x102dc2f30>
    inc(BlockBufferColumnPos);
    lda(BlockBufferColumnPos);
    anda(0b11111);
    sta(BlockBufferColumnPos);
    // <conv.chunks.Comment object at 0x102dc3170>
    // <conv.chunks.Comment object at 0x102dc3290>
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
    // <conv.chunks.Comment object at 0x102ddd610>
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
    // <conv.chunks.Comment object at 0x102ddddc0>
    sec();
    sbc(0x3);
    BPL(ThirdP);
    JMP(RendBack);
}

int RendBack() {
    // <conv.chunks.Comment object at 0x102dde000>
    // <conv.chunks.Comment object at 0x102dde090>
    // <conv.chunks.Comment object at 0x102dde270>
    asl();
    asl();
    asl();
    asl();
    adc(((offsetof(G, BSceneDataOffsets)) - (1)), y);
    adc(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x102dde510>
    // <conv.chunks.Comment object at 0x102dde720>
    tax();
    lda(offsetof(G, BackSceneryData), x);
    BEQ(RendFore);
    // <conv.chunks.Comment object at 0x102dde8d0>
    // <conv.chunks.Comment object at 0x102ddea20>
    pha();
    anda(0xf);
    // <conv.chunks.Comment object at 0x102ddebd0>
    sec();
    sbc(0x1);
    sta(0x0);
    asl();
    adc(0x0);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x102dded80>
    // <conv.chunks.Comment object at 0x102ddeed0>
    // <conv.chunks.Comment object at 0x102ddee10>
    // <conv.chunks.Comment object at 0x102ddf0b0>
    // <conv.chunks.Comment object at 0x102ddf080>
    // <conv.chunks.Comment object at 0x102ddf290>
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
    lda(0x3);
    // <conv.chunks.Comment object at 0x102ddf590>
    // <conv.chunks.Comment object at 0x102ddf620>
    sta(0x0);
    JMP(SceLoop1);
}

int SceLoop1() {
    // <conv.chunks.Comment object at 0x102ddf6b0>
    lda(offsetof(G, BackSceneryMetatiles), x);
    sta(MetatileBuffer, y);
    // <conv.chunks.Comment object at 0x102ddf9b0>
    inx();
    iny();
    cpy(0xb);
    // <conv.chunks.Comment object at 0x102ddfc20>
    BEQ(RendFore);
    dec(0x0);
    // <conv.chunks.Comment object at 0x102ddfe60>
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // <conv.chunks.Comment object at 0x102de4080>
    ldx(ForegroundScenery);
    BEQ(RendTerr);
    ldy(((offsetof(G, FSceneDataOffsets)) - (1)), x);
    ldx(0x0);
    JMP(SceLoop2);
}

int SceLoop2() {
    // <conv.chunks.Comment object at 0x102de41d0>
    // <conv.chunks.Comment object at 0x102de42f0>
    // <conv.chunks.Comment object at 0x102de4500>
    // <conv.chunks.Comment object at 0x102de4590>
    lda(offsetof(G, ForeSceneryData), y);
    BEQ(NoFore);
    // <conv.chunks.Comment object at 0x102de47a0>
    sta(MetatileBuffer, x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x102de4b90>
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // <conv.chunks.Comment object at 0x102de4da0>
    ldy(AreaType);
    BNE(TerMTile);
    lda(WorldNumber);
    cmp(World8);
    // <conv.chunks.Comment object at 0x102de4ef0>
    // <conv.chunks.Comment object at 0x102de5010>
    // <conv.chunks.Comment object at 0x102de5130>
    BNE(TerMTile);
    lda(0x62);
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // <conv.chunks.Comment object at 0x102de5370>
    // <conv.chunks.Comment object at 0x102de5400>
    // <conv.chunks.Comment object at 0x102de55e0>
    lda(offsetof(G, TerrainMetatiles), y);
    ldy(CloudTypeOverride);
    BEQ(StoreMT);
    lda(0x88);
    JMP(StoreMT);
}

int StoreMT() {
    // <conv.chunks.Comment object at 0x102de5760>
    // <conv.chunks.Comment object at 0x102de5880>
    // <conv.chunks.Comment object at 0x102de59d0>
    // <conv.chunks.Comment object at 0x102de5a60>
    sta(0x7);
    ldx(0x0);
    lda(TerrainControl);
    asl();
    // <conv.chunks.Comment object at 0x102de5c10>
    // <conv.chunks.Comment object at 0x102de5d00>
    // <conv.chunks.Comment object at 0x102de5ee0>
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // <conv.chunks.Comment object at 0x102de6000>
    lda(offsetof(G, TerrainRenderBits), y);
    sta(0x0);
    iny();
    // <conv.chunks.Comment object at 0x102de6210>
    sty(0x1);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x102de6330>
    BEQ(NoCloud2);
    cpx(0x0);
    // <conv.chunks.Comment object at 0x102de6630>
    BEQ(NoCloud2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102de6870>
    anda(0b1000);
    sta(0x0);
    JMP(NoCloud2);
}

int NoCloud2() {
    // <conv.chunks.Comment object at 0x102de6a50>
    ldy(0x0);
    JMP(TerrBChk);
}

int TerrBChk() {
    // <conv.chunks.Comment object at 0x102de6c00>
    lda(offsetof(G, Bitmasks), y);
    bit(0x0);
    BEQ(NextTBit);
    // <conv.chunks.Comment object at 0x102de6e10>
    lda(0x7);
    sta(MetatileBuffer, x);
    JMP(NextTBit);
}

int NextTBit() {
    // <conv.chunks.Comment object at 0x102de7020>
    // <conv.chunks.Comment object at 0x102de7260>
    inx();
    cpx(0xd);
    BEQ(RendBBuf);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x102de73b0>
    // <conv.chunks.Comment object at 0x102de7560>
    cmp(0x2);
    BNE(EndUChk);
    // <conv.chunks.Comment object at 0x102de76e0>
    cpx(0xb);
    BNE(EndUChk);
    lda(0x54);
    // <conv.chunks.Comment object at 0x102de7920>
    // <conv.chunks.Comment object at 0x102de7b00>
    sta(0x7);
    JMP(EndUChk);
}

int EndUChk() {
    // <conv.chunks.Comment object at 0x102de7b90>
    iny();
    cpy(0x8);
    BNE(TerrBChk);
    // <conv.chunks.Comment object at 0x102de7e90>
    ldy(0x1);
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // <conv.chunks.Comment object at 0x102df4080>
    // <conv.chunks.Comment object at 0x102df4290>
    JSR(ProcessAreaData);
    lda(BlockBufferColumnPos);
    JSR(GetBlockBufferAddr);
    // <conv.chunks.Comment object at 0x102df44d0>
    ldx(0x0);
    ldy(0x0);
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(0x0);
    lda(MetatileBuffer, x);
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x102df48c0>
    // <conv.chunks.Comment object at 0x102df4a70>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x102df4c50>
    rol();
    tay();
    lda(MetatileBuffer, x);
    cmp(offsetof(G, BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(0x0);
    JMP(StrBlock);
}

int StrBlock() {
    // <conv.chunks.Comment object at 0x102df4da0>
    // <conv.chunks.Comment object at 0x102df4e30>
    // <conv.chunks.Comment object at 0x102df4f80>
    // <conv.chunks.Comment object at 0x102df50d0>
    // <conv.chunks.Comment object at 0x102df51f0>
    // <conv.chunks.Comment object at 0x102df5280>
    ldy(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x102df5400>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x102df56a0>
    adc(0x10);
    tay();
    inx();
    // <conv.chunks.Comment object at 0x102df58e0>
    cpx(0xd);
    BCC(ChkMTLow);
    // <conv.chunks.Comment object at 0x102df59d0>
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
    // <conv.chunks.Comment object at 0x102df61e0>
    sta(BehindAreaParserFlag);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    cmp(0xfd);
    // <conv.chunks.Comment object at 0x102df63f0>
    // <conv.chunks.Comment object at 0x102df6510>
    // <conv.chunks.Comment object at 0x102df6690>
    BEQ(RdyDecode);
    lda(AreaObjectLength, x);
    BPL(RdyDecode);
    // <conv.chunks.Comment object at 0x102df68a0>
    // <conv.chunks.Comment object at 0x102df69f0>
    iny();
    lda((AreaData), y);
    asl();
    // <conv.chunks.Comment object at 0x102df6ba0>
    // <conv.chunks.Comment object at 0x102df6d50>
    BCC(Chk1Row13);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x102df6ed0>
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
    // <conv.chunks.Comment object at 0x102df73e0>
    // <conv.chunks.Comment object at 0x102df7560>
    // <conv.chunks.Comment object at 0x102df76b0>
    BNE(Chk1Row14);
    iny();
    // <conv.chunks.Comment object at 0x102df78f0>
    lda((AreaData), y);
    dey();
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x102df7b00>
    // <conv.chunks.Comment object at 0x102df7b90>
    BNE(CheckRear);
    lda(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x102df7da0>
    BNE(CheckRear);
    iny();
    // <conv.chunks.Comment object at 0x102df7fe0>
    lda((AreaData), y);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x102e00200>
    sta(AreaObjectPageLoc);
    inc(AreaObjectPageSel);
    // <conv.chunks.Comment object at 0x102e00410>
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // <conv.chunks.Comment object at 0x102e00650>
    cmp(0xe);
    BNE(CheckRear);
    lda(BackloadingFlag);
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // <conv.chunks.Comment object at 0x102e00890>
    // <conv.chunks.Comment object at 0x102e009b0>
    // <conv.chunks.Comment object at 0x102e00ad0>
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    BCC(SetBehind);
    JMP(RdyDecode);
}

int RdyDecode() {
    // <conv.chunks.Comment object at 0x102e00c20>
    // <conv.chunks.Comment object at 0x102e00d40>
    // <conv.chunks.Comment object at 0x102e00e60>
    JSR(DecodeAreaData);
    JMP(ChkLength);
    JMP(SetBehind);
}

int SetBehind() {
    // <conv.chunks.Comment object at 0x102e010a0>
    inc(BehindAreaParserFlag);
    JMP(NextAObj);
}

int NextAObj() {
    // <conv.chunks.Comment object at 0x102e011f0>
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // <conv.chunks.Comment object at 0x102e01340>
    ldx(ObjectOffset);
    lda(AreaObjectLength, x);
    BMI(ProcLoopb);
    dec(AreaObjectLength, x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // <conv.chunks.Comment object at 0x102e01490>
    // <conv.chunks.Comment object at 0x102e015e0>
    // <conv.chunks.Comment object at 0x102e01700>
    // <conv.chunks.Comment object at 0x102e01850>
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
    // <conv.chunks.Comment object at 0x102e01fd0>
    inc(AreaDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102e021e0>
    sta(AreaObjectPageSel);
    return 0;
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e024b0>
    BMI(Chk1stB);
    ldy(AreaObjOffsetBuffer, x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // <conv.chunks.Comment object at 0x102e02720>
    // <conv.chunks.Comment object at 0x102e02870>
    ldx(0x10);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x102e02960>
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
    // <conv.chunks.Comment object at 0x102e02bd0>
    // <conv.chunks.Comment object at 0x102e02d80>
    // <conv.chunks.Comment object at 0x102e02ed0>
    // <conv.chunks.Comment object at 0x102e02f60>
    // <conv.chunks.Comment object at 0x102e03110>
    // <conv.chunks.Comment object at 0x102e03260>
    // <conv.chunks.Comment object at 0x102e032f0>
    // <conv.chunks.Comment object at 0x102e034a0>
    // <conv.chunks.Comment object at 0x102e03530>
    stx(0x7);
    ldx(ObjectOffset);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x102e036b0>
    // <conv.chunks.Comment object at 0x102e03860>
    BNE(ChkRow13);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102e03a70>
    sta(0x7);
    lda(0x2e);
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // <conv.chunks.Comment object at 0x102e03b00>
    // <conv.chunks.Comment object at 0x102e03d10>
    // <conv.chunks.Comment object at 0x102e03f20>
    cmp(0xd);
    BNE(ChkSRows);
    lda(0x22);
    // <conv.chunks.Comment object at 0x102e081a0>
    sta(0x7);
    iny();
    // <conv.chunks.Comment object at 0x102e08350>
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
    // <conv.chunks.Comment object at 0x102e085c0>
    // <conv.chunks.Comment object at 0x102e086e0>
    // <conv.chunks.Comment object at 0x102e08800>
    // <conv.chunks.Comment object at 0x102e08980>
    // <conv.chunks.Comment object at 0x102e08aa0>
    // <conv.chunks.Comment object at 0x102e08b30>
    // <conv.chunks.Comment object at 0x102e08ce0>
    // <conv.chunks.Comment object at 0x102e08e00>
    anda(0b111111);
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // <conv.chunks.Comment object at 0x102e08f50>
    // <conv.chunks.Comment object at 0x102e090a0>
    cmp(0xc);
    BCS(SpecObj);
    iny();
    // <conv.chunks.Comment object at 0x102e09340>
    lda((AreaData), y);
    anda(0b1110000);
    BNE(LrgObj);
    // <conv.chunks.Comment object at 0x102e09520>
    // <conv.chunks.Comment object at 0x102e09640>
    lda(0x16);
    sta(0x7);
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102e098b0>
    // <conv.chunks.Comment object at 0x102e09940>
    // <conv.chunks.Comment object at 0x102e09b20>
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // <conv.chunks.Comment object at 0x102e09d60>
    sta(0x0);
    cmp(0x70);
    // <conv.chunks.Comment object at 0x102e09e80>
    BNE(NotWPipe);
    lda((AreaData), y);
    anda(0b1000);
    BEQ(NotWPipe);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102e0a0f0>
    // <conv.chunks.Comment object at 0x102e0a270>
    // <conv.chunks.Comment object at 0x102e0a390>
    // <conv.chunks.Comment object at 0x102e0a4b0>
    sta(0x0);
    JMP(NotWPipe);
}

int NotWPipe() {
    // <conv.chunks.Comment object at 0x102e0a540>
    lda(0x0);
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // <conv.chunks.Comment object at 0x102e0a900>
    iny();
    lda((AreaData), y);
    anda(0b1110000);
    JMP(MoveAOId);
}

int MoveAOId() {
    // <conv.chunks.Comment object at 0x102e0ab70>
    // <conv.chunks.Comment object at 0x102e0ac90>
    lsr();
    lsr();
    lsr();
    lsr();
    JMP(NormObj);
}

int NormObj() {
    // <conv.chunks.Comment object at 0x102e0af30>
    sta(0x0);
    lda(AreaObjectLength, x);
    BPL(RunAObj);
    lda(AreaObjectPageLoc);
    cmp(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x102e0b050>
    // <conv.chunks.Comment object at 0x102e0b200>
    // <conv.chunks.Comment object at 0x102e0b350>
    // <conv.chunks.Comment object at 0x102e0b470>
    BEQ(InitRear);
    ldy(AreaDataOffset);
    lda((AreaData), y);
    // <conv.chunks.Comment object at 0x102e0b680>
    // <conv.chunks.Comment object at 0x102e0b7a0>
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x102e0ba70>
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
    // <conv.chunks.Comment object at 0x102e0bfb0>
    lda(BackloadingFlag);
    BEQ(BackColC);
    lda(0x0);
    sta(BackloadingFlag);
    // <conv.chunks.Comment object at 0x102e14140>
    // <conv.chunks.Comment object at 0x102e14260>
    // <conv.chunks.Comment object at 0x102e142f0>
    sta(BehindAreaParserFlag);
    sta(ObjectOffset);
    JMP(LoopCmdE);
}

int LoopCmdE() {
    return 0;
    JMP(BackColC);
}

int BackColC() {
    // <conv.chunks.Comment object at 0x102e14740>
    ldy(AreaDataOffset);
    lda((AreaData), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x102e14a10>
    lsr();
    lsr();
    lsr();
    lsr();
    cmp(CurrentColumnPos);
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // <conv.chunks.Comment object at 0x102e14d70>
    // <conv.chunks.Comment object at 0x102e14e90>
    // <conv.chunks.Comment object at 0x102e14fb0>
    lda(AreaDataOffset);
    sta(AreaObjOffsetBuffer, x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // <conv.chunks.Comment object at 0x102e15250>
    // <conv.chunks.Comment object at 0x102e15370>
    lda(0x0);
    clc();
    // <conv.chunks.Comment object at 0x102e153d0>
    adc(0x7);
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy(AreaObjOffsetBuffer, x);
    iny();
    // <conv.chunks.Comment object at 0x102e173b0>
    // <conv.chunks.Comment object at 0x102e175c0>
    // <conv.chunks.Comment object at 0x102e176b0>
    // <conv.chunks.Comment object at 0x102e17710>
    // <conv.chunks.Comment object at 0x102e17890>
    lda((AreaData), y);
    pha();
    // <conv.chunks.Comment object at 0x102e17aa0>
    anda(0b1000000);
    BNE(Alter2);
    // <conv.chunks.Comment object at 0x102e17c20>
    pla();
    pha();
    anda(0b1111);
    sta(TerrainControl);
    // <conv.chunks.Comment object at 0x102e17e30>
    // <conv.chunks.Comment object at 0x102e17ec0>
    // <conv.chunks.Comment object at 0x102e17fe0>
    pla();
    anda(0b110000);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x102e201d0>
    // <conv.chunks.Comment object at 0x102e20320>
    // <conv.chunks.Comment object at 0x102e203e0>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x102e20590>
    return 0;
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(0b111);
    cmp(0x4);
    BCC(SetFore);
    // <conv.chunks.Comment object at 0x102e20830>
    // <conv.chunks.Comment object at 0x102e20950>
    // <conv.chunks.Comment object at 0x102e209e0>
    sta(BackgroundColorCtrl);
    lda(0x0);
    JMP(SetFore);
}

int SetFore() {
    // <conv.chunks.Comment object at 0x102e20d10>
    sta(ForegroundScenery);
    return 0;
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(0x4);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x102e21010>
    // <conv.chunks.Comment object at 0x102e210a0>
    BEQ(WarpNum);
    inx();
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x102e213a0>
    // <conv.chunks.Comment object at 0x102e21430>
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta(WarpZoneControl);
    JSR(WriteGameText);
    // <conv.chunks.Comment object at 0x102e218e0>
    // <conv.chunks.Comment object at 0x102e21a00>
    lda(PiranhaPlant);
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda(ScrollLock);
    // <conv.chunks.Comment object at 0x102e21d60>
    eor(0b1);
    sta(ScrollLock);
    return 0;
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(0x0);
    // <conv.chunks.Comment object at 0x102e22120>
    // <conv.chunks.Comment object at 0x102e221b0>
    lda(0x0);
    ldx(0x4);
    JMP(KillELoop);
}

int KillELoop() {
    ldy(Enemy_ID, x);
    cpy(0x0);
    // <conv.chunks.Comment object at 0x102e22630>
    BNE(NoKillE);
    sta(Enemy_Flag, x);
    JMP(NoKillE);
}

int NoKillE() {
    // <conv.chunks.Comment object at 0x102e22840>
    // <conv.chunks.Comment object at 0x102e22990>
    dex();
    BPL(KillELoop);
    return 0;
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // <conv.chunks.Comment object at 0x102e22c90>
    ldx(0x0);
    lda(((offsetof(G, FrenzyIDData)) - (8)), x);
    // <conv.chunks.Comment object at 0x102e22f30>
    ldy(0x5);
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // <conv.chunks.Comment object at 0x102e23200>
    dey();
    BMI(ExitAFrenzy);
    cmp(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x102e23380>
    // <conv.chunks.Comment object at 0x102e234a0>
    BNE(FreCompLoop);
    lda(0x0);
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // <conv.chunks.Comment object at 0x102e236e0>
    // <conv.chunks.Comment object at 0x102e23770>
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
    // <conv.chunks.Comment object at 0x102e23ce0>
    // <conv.chunks.Comment object at 0x102e23fb0>
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e2c3b0>
    lda(CurrentPageLoc);
    ora(CurrentColumnPos);
    // <conv.chunks.Comment object at 0x102e2c5f0>
    BEQ(MidTreeL);
    lda(0x16);
    // <conv.chunks.Comment object at 0x102e2c800>
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
    // <conv.chunks.Comment object at 0x102e2cb00>
    // <conv.chunks.Comment object at 0x102e2cbf0>
    // <conv.chunks.Comment object at 0x102e2cdd0>
    // <conv.chunks.Comment object at 0x102e2ce60>
    // <conv.chunks.Comment object at 0x102e2d010>
    lda(0x18);
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(0x6);
    // <conv.chunks.Comment object at 0x102e2d2b0>
    // <conv.chunks.Comment object at 0x102e2d400>
    BCC(EndMushL);
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e2d5e0>
    lsr();
    sta(MushroomLedgeHalfLen, x);
    lda(0x19);
    // <conv.chunks.Comment object at 0x102e2d8e0>
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // <conv.chunks.Comment object at 0x102e2db20>
    lda(0x1b);
    ldy(AreaObjectLength, x);
    BEQ(NoUnder);
    lda(MushroomLedgeHalfLen, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x102e2deb0>
    // <conv.chunks.Comment object at 0x102e2e030>
    ldx(0x7);
    lda(0x1a);
    sta(MetatileBuffer, x);
    cpy(0x6);
    BNE(MushLExit);
    // <conv.chunks.Comment object at 0x102e2e270>
    // <conv.chunks.Comment object at 0x102e2e480>
    // <conv.chunks.Comment object at 0x102e2e510>
    inx();
    lda(0x4f);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x102e2e780>
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
    // <conv.chunks.Comment object at 0x102e2eb10>
    // <conv.chunks.Comment object at 0x102e2eba0>
    // <conv.chunks.Comment object at 0x102e2ed50>
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102e2ee70>
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(0x0);
    BCS(RenderPul);
    // <conv.chunks.Comment object at 0x102e2f1d0>
    // <conv.chunks.Comment object at 0x102e2f470>
    // <conv.chunks.Comment object at 0x102e2f500>
    iny();
    lda(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e2f740>
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
    // <conv.chunks.Comment object at 0x102e2fb90>
    // <conv.chunks.Comment object at 0x102e2fcb0>
    return 0;
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(0x7);
    // <conv.chunks.Comment object at 0x102e2fe30>
    // <conv.chunks.Comment object at 0x102e39ee0>
    ldy(0x4);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x102e3a030>
    txa();
    pha();
    ldy(AreaObjectLength, x);
    ldx(0x7);
    // <conv.chunks.Comment object at 0x102e3a2a0>
    // <conv.chunks.Comment object at 0x102e3a330>
    // <conv.chunks.Comment object at 0x102e3a4b0>
    lda(0xb);
    sta(0x6);
    JMP(CRendLoop);
}

int CRendLoop() {
    // <conv.chunks.Comment object at 0x102e3a6c0>
    // <conv.chunks.Comment object at 0x102e3a750>
    lda(offsetof(G, CastleMetatiles), y);
    sta(MetatileBuffer, x);
    inx();
    // <conv.chunks.Comment object at 0x102e3aa80>
    lda(0x6);
    BEQ(ChkCFloor);
    iny();
    iny();
    // <conv.chunks.Comment object at 0x102e3ab10>
    // <conv.chunks.Comment object at 0x102e3ad50>
    // <conv.chunks.Comment object at 0x102e3ae10>
    iny();
    iny();
    iny();
    dec(0x6);
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // <conv.chunks.Comment object at 0x102e3b080>
    // <conv.chunks.Comment object at 0x102e3b110>
    cpx(0xb);
    BNE(CRendLoop);
    // <conv.chunks.Comment object at 0x102e3b230>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x102e3b4a0>
    lda(CurrentPageLoc);
    BEQ(ExitCastle);
    lda(AreaObjectLength, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x102e3b620>
    // <conv.chunks.Comment object at 0x102e3b740>
    // <conv.chunks.Comment object at 0x102e3b890>
    BEQ(PlayerStop);
    ldy(0x7);
    // <conv.chunks.Comment object at 0x102e3bad0>
    BNE(NotTall);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x102e3bce0>
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // <conv.chunks.Comment object at 0x102e3bef0>
    cmp(0x2);
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x102e3bfe0>
    // <conv.chunks.Comment object at 0x102e401d0>
    pha();
    JSR(FindEmptyEnemySlot);
    // <conv.chunks.Comment object at 0x102e40380>
    pla();
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x102e40530>
    lda(CurrentPageLoc);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x102e40770>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x102e40920>
    // <conv.chunks.Comment object at 0x102e40b00>
    lda(0x90);
    sta(Enemy_Y_Position, x);
    lda(StarFlagObject);
    // <conv.chunks.Comment object at 0x102e40cb0>
    // <conv.chunks.Comment object at 0x102e40e90>
    sta(Enemy_ID, x);
    return 0;
    JMP(PlayerStop);
}

int PlayerStop() {
    // <conv.chunks.Comment object at 0x102e41160>
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
    // <conv.chunks.Comment object at 0x102e415b0>
    // <conv.chunks.Comment object at 0x102e416d0>
    // <conv.chunks.Comment object at 0x102e41880>
    lda(0x6b);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x102e419d0>
    lda(0x6c);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x102e41f40>
    // <conv.chunks.Comment object at 0x102e41fa0>
    // <conv.chunks.Comment object at 0x102e42000>
    JSR(ChkLrgObjFixedLength);
    ldy(0xa);
    // <conv.chunks.Comment object at 0x102e42210>
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(0x6);
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // <conv.chunks.Comment object at 0x102e42420>
    // <conv.chunks.Comment object at 0x102e42540>
    // <conv.chunks.Comment object at 0x102e425d0>
    lda(0x0);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x102e42720>
    dex();
    BPL(VPipeSectLoop);
    lda(offsetof(G, VerticalPipeData), y);
    // <conv.chunks.Comment object at 0x102e42a80>
    sta(((MetatileBuffer) + (7)));
    JMP(NoBlankP);
}

int NoBlankP() {
    return 0;
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(0x3);
    // <conv.chunks.Comment object at 0x102e43080>
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    JMP(RenderSidewaysPipe);
}

int RenderSidewaysPipe() {
    dey();
    dey();
    // <conv.chunks.Comment object at 0x102e43a10>
    // <conv.chunks.Comment object at 0x102e43ad0>
    sty(0x5);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e43b60>
    sty(0x6);
    ldx(0x5);
    // <conv.chunks.Comment object at 0x102e43e30>
    inx();
    lda(offsetof(G, SidePipeShaftData), y);
    // <conv.chunks.Comment object at 0x102e48080>
    cmp(0x0);
    BEQ(DrawSidePart);
    // <conv.chunks.Comment object at 0x102e48230>
    ldx(0x0);
    ldy(0x5);
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // <conv.chunks.Comment object at 0x102e48500>
    // <conv.chunks.Comment object at 0x102e48590>
    // <conv.chunks.Comment object at 0x102e48740>
    // <conv.chunks.Comment object at 0x102e487d0>
    ldy(0x6);
    lda(offsetof(G, SidePipeTopPart), y);
    sta(MetatileBuffer, x);
    lda(offsetof(G, SidePipeBottomPart), y);
    // <conv.chunks.Comment object at 0x102e48a40>
    // <conv.chunks.Comment object at 0x102e48b90>
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(0x0);
    BEQ(WarpPipe);
    // <conv.chunks.Comment object at 0x102e495b0>
    // <conv.chunks.Comment object at 0x102e49640>
    iny();
    iny();
    iny();
    iny();
    JMP(WarpPipe);
}

int WarpPipe() {
    // <conv.chunks.Comment object at 0x102e499a0>
    // <conv.chunks.Comment object at 0x102e49a30>
    tya();
    pha();
    lda(AreaNumber);
    ora(WorldNumber);
    // <conv.chunks.Comment object at 0x102e49ca0>
    BEQ(DrawPipe);
    ldy(AreaObjectLength, x);
    BEQ(DrawPipe);
    JSR(FindEmptyEnemySlot);
    BCS(DrawPipe);
    JSR(GetAreaObjXPosition);
    // <conv.chunks.Comment object at 0x102e49eb0>
    // <conv.chunks.Comment object at 0x102e4a000>
    // <conv.chunks.Comment object at 0x102e4a120>
    // <conv.chunks.Comment object at 0x102e4a240>
    // <conv.chunks.Comment object at 0x102e4a360>
    clc();
    adc(0x8);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x102e4a510>
    // <conv.chunks.Comment object at 0x102e4a5a0>
    // <conv.chunks.Comment object at 0x102e4a780>
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x102e4a900>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    JSR(GetAreaObjYPosition);
    // <conv.chunks.Comment object at 0x102e4acf0>
    // <conv.chunks.Comment object at 0x102e4ae40>
    sta(Enemy_Y_Position, x);
    lda(PiranhaPlant);
    // <conv.chunks.Comment object at 0x102e4b080>
    sta(Enemy_ID, x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // <conv.chunks.Comment object at 0x102e4b3b0>
    pla();
    tay();
    ldx(0x7);
    lda(offsetof(G, VerticalPipeData), y);
    sta(MetatileBuffer, x);
    // <conv.chunks.Comment object at 0x102e4b560>
    // <conv.chunks.Comment object at 0x102e4b5f0>
    // <conv.chunks.Comment object at 0x102e4b7a0>
    inx();
    lda(((offsetof(G, VerticalPipeData)) + (2)), y);
    ldy(0x6);
    // <conv.chunks.Comment object at 0x102e4b980>
    // <conv.chunks.Comment object at 0x102e4bbc0>
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(0x1);
    JSR(ChkLrgObjFixedLength);
    // <conv.chunks.Comment object at 0x102e4be60>
    // <conv.chunks.Comment object at 0x102e4bef0>
    JSR(GetLrgObjAttrib);
    tya();
    anda(0x7);
    sta(0x6);
    ldy(AreaObjectLength, x);
    // <conv.chunks.Comment object at 0x102e54200>
    // <conv.chunks.Comment object at 0x102e54290>
    // <conv.chunks.Comment object at 0x102e543e0>
    // <conv.chunks.Comment object at 0x102e54470>
    return 0;
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(0x0);
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // <conv.chunks.Comment object at 0x102e546e0>
    // <conv.chunks.Comment object at 0x102e54770>
    clc();
    lda(Enemy_Flag, x);
    BEQ(ExitEmptyChk);
    // <conv.chunks.Comment object at 0x102e548f0>
    // <conv.chunks.Comment object at 0x102e54a40>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x102e54bf0>
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // <conv.chunks.Comment object at 0x102e54e00>
    return 0;
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(0x86);
    // <conv.chunks.Comment object at 0x102e54f50>
    // <conv.chunks.Comment object at 0x102e55070>
    sta(((MetatileBuffer) + (10)));
    ldx(0xb);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x102e553a0>
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
    // <conv.chunks.Comment object at 0x102e55940>
    // <conv.chunks.Comment object at 0x102e55af0>
    // <conv.chunks.Comment object at 0x102e55b80>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x102e55d60>
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
    // <conv.chunks.Comment object at 0x102e564b0>
    // <conv.chunks.Comment object at 0x102e56660>
    // <conv.chunks.Comment object at 0x102e566f0>
    pla();
    tax();
    // <conv.chunks.Comment object at 0x102e568d0>
    lda(0xb);
    sta(MetatileBuffer, x);
    inx();
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102e56c00>
    lda(0x63);
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(0x2);
    lda(0x6d);
    // <conv.chunks.Comment object at 0x102e56f60>
    // <conv.chunks.Comment object at 0x102e57080>
    // <conv.chunks.Comment object at 0x102e57110>
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(0x24);
    // <conv.chunks.Comment object at 0x102e57410>
    sta(MetatileBuffer);
    ldx(0x1);
    // <conv.chunks.Comment object at 0x102e57620>
    ldy(0x8);
    lda(0x25);
    JSR(RenderUnderPart);
    lda(0x61);
    // <conv.chunks.Comment object at 0x102e57a10>
    sta(((MetatileBuffer) + (10)));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(0x8);
    sta(((Enemy_X_Position) + (5)));
    // <conv.chunks.Comment object at 0x102e57e00>
    // <conv.chunks.Comment object at 0x102e57e90>
    // <conv.chunks.Comment object at 0x102e57f20>
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(((Enemy_PageLoc) + (5)));
    // <conv.chunks.Comment object at 0x102e602c0>
    // <conv.chunks.Comment object at 0x102e60350>
    lda(0x30);
    sta(((Enemy_Y_Position) + (5)));
    // <conv.chunks.Comment object at 0x102e60620>
    lda(0xb0);
    sta(FlagpoleFNum_Y_Pos);
    // <conv.chunks.Comment object at 0x102e608f0>
    lda(FlagpoleFlagObject);
    sta(((Enemy_ID) + (5)));
    inc(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x102e60b90>
    // <conv.chunks.Comment object at 0x102e60d70>
    return 0;
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x102e61040>
    ldy(0xf);
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // <conv.chunks.Comment object at 0x102e613a0>
    pha();
    ldx(0x1);
    ldy(0xf);
    // <conv.chunks.Comment object at 0x102e614c0>
    // <conv.chunks.Comment object at 0x102e61550>
    lda(0x44);
    JSR(RenderUnderPart);
    pla();
    // <conv.chunks.Comment object at 0x102e61910>
    tax();
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x102e61a30>
    ldx(0x1);
    JMP(DrawRope);
}

int DrawRope() {
    // <conv.chunks.Comment object at 0x102e61bb0>
    lda(0x40);
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy(AreaType);
    lda(offsetof(G, CoinMetatileData), y);
    // <conv.chunks.Comment object at 0x102e61f40>
    // <conv.chunks.Comment object at 0x102e62270>
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(0xc);
    // <conv.chunks.Comment object at 0x102e62540>
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x102e62c00>
    sta(VRAM_Buffer_AddrCtrl);
    JMP(ChainObj);
}

int ChainObj() {
    ldy(0x0);
    ldx(((offsetof(G, C_ObjectRow)) - (2)), y);
    // <conv.chunks.Comment object at 0x102e62ed0>
    // <conv.chunks.Comment object at 0x102e62f60>
    lda(((offsetof(G, C_ObjectMetatile)) - (2)), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // <conv.chunks.Comment object at 0x102e63500>
    ldx(0x7);
    lda(0xc4);
    JMP(ColObj);
}

int ColObj() {
    // <conv.chunks.Comment object at 0x102e63770>
    ldy(0x0);
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy(AreaType);
    lda(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x102e63bc0>
    // <conv.chunks.Comment object at 0x102e681d0>
    BEQ(DrawBricks);
    ldy(0x4);
    JMP(DrawBricks);
}

int DrawBricks() {
    // <conv.chunks.Comment object at 0x102e683e0>
    // <conv.chunks.Comment object at 0x102e68470>
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
    // <conv.chunks.Comment object at 0x102e68800>
    // <conv.chunks.Comment object at 0x102e68920>
    // <conv.chunks.Comment object at 0x102e68a70>
    pha();
    JSR(ChkLrgObjLength);
    JMP(DrawRow);
}

int DrawRow() {
    ldx(0x7);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102e68da0>
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy(AreaType);
    lda(offsetof(G, BrickMetatiles), y);
    // <conv.chunks.Comment object at 0x102e69100>
    // <conv.chunks.Comment object at 0x102e69220>
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy(AreaType);
    lda(offsetof(G, SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // <conv.chunks.Comment object at 0x102e694c0>
    // <conv.chunks.Comment object at 0x102e695e0>
    // <conv.chunks.Comment object at 0x102e69730>
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
    // <conv.chunks.Comment object at 0x102e69cd0>
    // <conv.chunks.Comment object at 0x102e69e20>
    // <conv.chunks.Comment object at 0x102e69eb0>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x102e6a210>
    BMI(SetupCannon);
    lda(0x65);
    // <conv.chunks.Comment object at 0x102e6a390>
    sta(MetatileBuffer, x);
    inx();
    dey();
    // <conv.chunks.Comment object at 0x102e6a690>
    BMI(SetupCannon);
    lda(0x66);
    // <conv.chunks.Comment object at 0x102e6a810>
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // <conv.chunks.Comment object at 0x102e6aa20>
    ldx(Cannon_Offset);
    JSR(GetAreaObjYPosition);
    sta(Cannon_Y_Position, x);
    // <conv.chunks.Comment object at 0x102e6ab70>
    // <conv.chunks.Comment object at 0x102e6ac90>
    lda(CurrentPageLoc);
    sta(Cannon_PageLoc, x);
    JSR(GetAreaObjXPosition);
    sta(Cannon_X_Position, x);
    // <conv.chunks.Comment object at 0x102e6aed0>
    // <conv.chunks.Comment object at 0x102e6b020>
    // <conv.chunks.Comment object at 0x102e6b140>
    inx();
    cpx(0x6);
    BCC(StrCOffset);
    ldx(0x0);
    JMP(StrCOffset);
}

int StrCOffset() {
    // <conv.chunks.Comment object at 0x102e6b320>
    // <conv.chunks.Comment object at 0x102e6b3b0>
    // <conv.chunks.Comment object at 0x102e6b560>
    // <conv.chunks.Comment object at 0x102e6b5f0>
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
    // <conv.chunks.Comment object at 0x102e6b980>
    // <conv.chunks.Comment object at 0x102e6b8c0>
    // <conv.chunks.Comment object at 0x102e705c0>
    // <conv.chunks.Comment object at 0x102e70650>
    // <conv.chunks.Comment object at 0x102e70800>
    dec(StaircaseControl);
    ldy(StaircaseControl);
    ldx(offsetof(G, StaircaseRowData), y);
    // <conv.chunks.Comment object at 0x102e70a40>
    lda(offsetof(G, StaircaseHeightData), y);
    tay();
    lda(0x61);
    // <conv.chunks.Comment object at 0x102e70d40>
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta(Enemy_X_Position, x);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x102e710a0>
    // <conv.chunks.Comment object at 0x102e711c0>
    // <conv.chunks.Comment object at 0x102e712e0>
    // <conv.chunks.Comment object at 0x102e71430>
    sta(Enemy_PageLoc, x);
    JSR(GetAreaObjYPosition);
    sta(Enemy_Y_Position, x);
    sta(Jumpspring_FixedYPos, x);
    // <conv.chunks.Comment object at 0x102e71670>
    // <conv.chunks.Comment object at 0x102e71790>
    // <conv.chunks.Comment object at 0x102e718e0>
    lda(JumpspringObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x102e71b20>
    ldy(0x1);
    sty(Enemy_Y_HighPos, x);
    inc(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x102e71cd0>
    // <conv.chunks.Comment object at 0x102e71eb0>
    ldx(0x7);
    lda(0x67);
    // <conv.chunks.Comment object at 0x102e72000>
    sta(MetatileBuffer, x);
    lda(0x68);
    sta(((MetatileBuffer) + (1)), x);
    return 0;
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda(Hidden1UpFlag);
    // <conv.chunks.Comment object at 0x102e726c0>
    // <conv.chunks.Comment object at 0x102e72720>
    BEQ(ExitDecBlock);
    lda(0x0);
    // <conv.chunks.Comment object at 0x102e72930>
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
    // <conv.chunks.Comment object at 0x102e72f00>
    sta(BrickCoinTimerFlag);
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // <conv.chunks.Comment object at 0x102e73140>
    sty(0x7);
    lda(0x0);
    ldy(AreaType);
    // <conv.chunks.Comment object at 0x102e73260>
    // <conv.chunks.Comment object at 0x102e733e0>
    dey();
    BEQ(BWithL);
    lda(0x5);
    JMP(BWithL);
}

int BWithL() {
    // <conv.chunks.Comment object at 0x102e73620>
    // <conv.chunks.Comment object at 0x102e73770>
    // <conv.chunks.Comment object at 0x102e73800>
    clc();
    adc(0x7);
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // <conv.chunks.Comment object at 0x102e73a40>
    // <conv.chunks.Comment object at 0x102e73b60>
    lda(offsetof(G, BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x102e7c0b0>
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
    // <conv.chunks.Comment object at 0x102e7c590>
    // <conv.chunks.Comment object at 0x102e7c8c0>
    // <conv.chunks.Comment object at 0x102e7c9e0>
    // <conv.chunks.Comment object at 0x102e7cb00>
    // <conv.chunks.Comment object at 0x102e7cc20>
    // <conv.chunks.Comment object at 0x102e7cd40>
    sec();
    sbc(0x10);
    sta(Whirlpool_LeftExtent, x);
    lda(CurrentPageLoc);
    sbc(0x0);
    sta(Whirlpool_PageLoc, x);
    // <conv.chunks.Comment object at 0x102e7cef0>
    // <conv.chunks.Comment object at 0x102e7cf80>
    // <conv.chunks.Comment object at 0x102e7d160>
    // <conv.chunks.Comment object at 0x102e7d280>
    // <conv.chunks.Comment object at 0x102e7d310>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x102e7d5b0>
    tya();
    asl();
    asl();
    asl();
    asl();
    sta(Whirlpool_Length, x);
    // <conv.chunks.Comment object at 0x102e7d700>
    // <conv.chunks.Comment object at 0x102e7d7c0>
    // <conv.chunks.Comment object at 0x102e7d880>
    // <conv.chunks.Comment object at 0x102e7d940>
    // <conv.chunks.Comment object at 0x102e7d9d0>
    inx();
    cpx(0x5);
    BCC(StrWOffset);
    ldx(0x0);
    JMP(StrWOffset);
}

int StrWOffset() {
    // <conv.chunks.Comment object at 0x102e7dbb0>
    // <conv.chunks.Comment object at 0x102e7dc40>
    // <conv.chunks.Comment object at 0x102e7ddf0>
    // <conv.chunks.Comment object at 0x102e7de80>
    stx(Whirlpool_Offset);
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // <conv.chunks.Comment object at 0x102e7e060>
    ldx(AreaType);
    lda(offsetof(G, HoleMetatiles), x);
    // <conv.chunks.Comment object at 0x102e7e1b0>
    ldx(0x8);
    ldy(0xf);
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty(AreaObjectHeight);
    ldy(MetatileBuffer, x);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x102e7e570>
    // <conv.chunks.Comment object at 0x102e7e690>
    // <conv.chunks.Comment object at 0x102e7e7e0>
    cpy(0x17);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x102e7e960>
    cpy(0x1a);
    BEQ(WaitOneRow);
    // <conv.chunks.Comment object at 0x102e7eb70>
    cpy(0xc0);
    BEQ(DrawThisRow);
    // <conv.chunks.Comment object at 0x102e7ed80>
    cpy(0xc0);
    BCS(WaitOneRow);
    // <conv.chunks.Comment object at 0x102e7ef90>
    cpy(0x54);
    BNE(DrawThisRow);
    // <conv.chunks.Comment object at 0x102e7f1a0>
    cmp(0x50);
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // <conv.chunks.Comment object at 0x102e7f3b0>
    // <conv.chunks.Comment object at 0x102e7f560>
    sta(MetatileBuffer, x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(0xd);
    // <conv.chunks.Comment object at 0x102e7f7a0>
    BCS(ExitUPartR);
    ldy(AreaObjectHeight);
    // <conv.chunks.Comment object at 0x102e7f9b0>
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
    // <conv.chunks.Comment object at 0x102e7fec0>
    // <conv.chunks.Comment object at 0x102e88080>
    // <conv.chunks.Comment object at 0x102e88110>
    // <conv.chunks.Comment object at 0x102e88290>
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
    // <conv.chunks.Comment object at 0x102e88620>
    // <conv.chunks.Comment object at 0x102e88770>
    anda(0b1111);
    sta(0x7);
    // <conv.chunks.Comment object at 0x102e88a10>
    iny();
    lda((AreaData), y);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102e88b90>
    // <conv.chunks.Comment object at 0x102e88d10>
    tay();
    return 0;
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda(CurrentColumnPos);
    asl();
    // <conv.chunks.Comment object at 0x102e88fb0>
    // <conv.chunks.Comment object at 0x102e89100>
    asl();
    asl();
    asl();
    return 0;
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(0x7);
    // <conv.chunks.Comment object at 0x102e89460>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x102e89610>
    asl();
    asl();
    clc();
    adc(32);
    // <conv.chunks.Comment object at 0x102e89880>
    return 0;
    JMP(GetBlockBufferAddr);
}

int GetBlockBufferAddr() {
    pha();
    lsr();
    // <conv.chunks.Comment object at 0x102e89e50>
    // <conv.chunks.Comment object at 0x102e89f10>
    lsr();
    lsr();
    lsr();
    tay();
    lda(((offsetof(G, BlockBufferAddr)) + (2)), y);
    // <conv.chunks.Comment object at 0x102e8a180>
    // <conv.chunks.Comment object at 0x102e8a210>
    sta(0x7);
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102e8a5a0>
    clc();
    adc(offsetof(G, BlockBufferAddr), y);
    sta(0x6);
    // <conv.chunks.Comment object at 0x102e8a750>
    // <conv.chunks.Comment object at 0x102e8a8d0>
    return 0;
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // <conv.chunks.Comment object at 0x102e8acc0>
    sta(AreaPointer);
    JMP(GetAreaType);
}

int GetAreaType() {
    // <conv.chunks.Comment object at 0x102e8b4d0>
    anda(0b1100000);
    asl();
    rol();
    rol();
    rol();
    sta(AreaType);
    // <conv.chunks.Comment object at 0x102e8b800>
    // <conv.chunks.Comment object at 0x102e8b890>
    return 0;
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy(WorldNumber);
    // <conv.chunks.Comment object at 0x102e8ba70>
    lda(offsetof(G, WorldAddrOffsets), y);
    clc();
    // <conv.chunks.Comment object at 0x102e8bce0>
    adc(AreaNumber);
    tay();
    lda(offsetof(G, AreaAddrOffsets), y);
    // <conv.chunks.Comment object at 0x102e8bef0>
    return 0;
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x102e90140>
    JSR(GetAreaType);
    tay();
    lda(AreaPointer);
    // <conv.chunks.Comment object at 0x102e903e0>
    anda(0b11111);
    sta(AreaAddrsLOffset);
    lda(offsetof(G, EnemyAddrHOffsets), y);
    clc();
    adc(AreaAddrsLOffset);
    // <conv.chunks.Comment object at 0x102e905f0>
    // <conv.chunks.Comment object at 0x102e90710>
    // <conv.chunks.Comment object at 0x102e90890>
    // <conv.chunks.Comment object at 0x102e90920>
    tay();
    lda(offsetof(G, EnemyDataAddrLow), y);
    // <conv.chunks.Comment object at 0x102e90ad0>
    sta(EnemyDataLow);
    lda(offsetof(G, EnemyDataAddrHigh), y);
    sta(EnemyDataHigh);
    ldy(AreaType);
    lda(offsetof(G, AreaDataHOffsets), y);
    // <conv.chunks.Comment object at 0x102e90f20>
    // <conv.chunks.Comment object at 0x102e91040>
    clc();
    adc(AreaAddrsLOffset);
    tay();
    lda(offsetof(G, AreaDataAddrLow), y);
    // <conv.chunks.Comment object at 0x102e913a0>
    sta(AreaDataLow);
    lda(offsetof(G, AreaDataAddrHigh), y);
    sta(AreaDataHigh);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x102e917f0>
    lda((AreaData), y);
    pha();
    anda(0b111);
    // <conv.chunks.Comment object at 0x102e91a90>
    // <conv.chunks.Comment object at 0x102e91b20>
    cmp(0x4);
    BCC(StoreFore);
    sta(BackgroundColorCtrl);
    // <conv.chunks.Comment object at 0x102e91e20>
    lda(0x0);
    JMP(StoreFore);
}

int StoreFore() {
    // <conv.chunks.Comment object at 0x102e91fa0>
    sta(ForegroundScenery);
    pla();
    // <conv.chunks.Comment object at 0x102e921b0>
    pha();
    anda(0b111000);
    lsr();
    // <conv.chunks.Comment object at 0x102e922d0>
    // <conv.chunks.Comment object at 0x102e92420>
    lsr();
    lsr();
    sta(PlayerEntranceCtrl);
    pla();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x102e925d0>
    // <conv.chunks.Comment object at 0x102e92720>
    // <conv.chunks.Comment object at 0x102e927b0>
    clc();
    rol();
    // <conv.chunks.Comment object at 0x102e92990>
    rol();
    rol();
    sta(GameTimerSetting);
    // <conv.chunks.Comment object at 0x102e92b40>
    iny();
    lda((AreaData), y);
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x102e92cf0>
    // <conv.chunks.Comment object at 0x102e92ea0>
    // <conv.chunks.Comment object at 0x102e92f30>
    sta(TerrainControl);
    pla();
    // <conv.chunks.Comment object at 0x102e93170>
    pha();
    anda(0b110000);
    // <conv.chunks.Comment object at 0x102e93290>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x102e93470>
    lsr();
    lsr();
    sta(BackgroundScenery);
    // <conv.chunks.Comment object at 0x102e93620>
    pla();
    anda(0b11000000);
    clc();
    rol();
    // <conv.chunks.Comment object at 0x102e93980>
    rol();
    rol();
    cmp(0b11);
    BNE(StoreStyle);
    sta(CloudTypeOverride);
    // <conv.chunks.Comment object at 0x102e93b30>
    // <conv.chunks.Comment object at 0x102e93c50>
    // <conv.chunks.Comment object at 0x102e93d70>
    lda(0x0);
    JMP(StoreStyle);
}

int StoreStyle() {
    sta(AreaStyle);
    lda(AreaDataLow);
    // <conv.chunks.Comment object at 0x102e9c0e0>
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
    // <conv.chunks.Comment object at 0x103010c80>
    // <conv.chunks.Comment object at 0x103010da0>
    // <conv.chunks.Comment object at 0x103010ef0>
    // <conv.chunks.Comment object at 0x103011010>
    // <conv.chunks.Comment object at 0x103011130>
    // <conv.chunks.Comment object at 0x103011250>
    // <conv.chunks.Comment object at 0x1030112e0>
    return 0;
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // <conv.chunks.Comment object at 0x103011550>
    ldx(0x0);
    JMP(ProcELoop);
}

int ProcELoop() {
    // <conv.chunks.Comment object at 0x1030116d0>
    stx(ObjectOffset);
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // <conv.chunks.Comment object at 0x1030118b0>
    // <conv.chunks.Comment object at 0x1030119d0>
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x103011b80>
    BNE(ProcELoop);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    JSR(PlayerGfxHandler);
    JSR(BlockObjMT_Updater);
    // <conv.chunks.Comment object at 0x103011d90>
    // <conv.chunks.Comment object at 0x103011eb0>
    // <conv.chunks.Comment object at 0x103011fd0>
    // <conv.chunks.Comment object at 0x1030120f0>
    ldx(0x1);
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    // <conv.chunks.Comment object at 0x103012270>
    // <conv.chunks.Comment object at 0x103012420>
    dex();
    stx(ObjectOffset);
    JSR(BlockObjectsCore);
    JSR(MiscObjectsCore);
    JSR(ProcessCannons);
    JSR(ProcessWhirlpools);
    JSR(FlagpoleRoutine);
    JSR(RunGameTimer);
    JSR(ColorRotation);
    // <conv.chunks.Comment object at 0x1030125d0>
    // <conv.chunks.Comment object at 0x1030126f0>
    // <conv.chunks.Comment object at 0x103012810>
    // <conv.chunks.Comment object at 0x103012930>
    // <conv.chunks.Comment object at 0x103012a50>
    // <conv.chunks.Comment object at 0x103012b70>
    // <conv.chunks.Comment object at 0x103012c90>
    // <conv.chunks.Comment object at 0x103012db0>
    lda(Player_Y_HighPos);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x103012fc0>
    BPL(NoChgMus);
    lda(StarInvincibleTimer);
    BEQ(ClrPlrPal);
    // <conv.chunks.Comment object at 0x1030131d0>
    // <conv.chunks.Comment object at 0x1030132f0>
    cmp(0x4);
    BNE(NoChgMus);
    lda(IntervalTimerControl);
    BNE(NoChgMus);
    JSR(GetAreaMusic);
    JMP(NoChgMus);
}

int NoChgMus() {
    // <conv.chunks.Comment object at 0x103013470>
    // <conv.chunks.Comment object at 0x103013620>
    // <conv.chunks.Comment object at 0x103013740>
    // <conv.chunks.Comment object at 0x103013860>
    // <conv.chunks.Comment object at 0x103013980>
    ldy(StarInvincibleTimer);
    lda(FrameCounter);
    cpy(0x8);
    BCS(CycleTwo);
    lsr();
    // <conv.chunks.Comment object at 0x103013ad0>
    // <conv.chunks.Comment object at 0x103013bf0>
    // <conv.chunks.Comment object at 0x103013c80>
    // <conv.chunks.Comment object at 0x103013e60>
    lsr();
    JMP(CycleTwo);
}

int CycleTwo() {
    // <conv.chunks.Comment object at 0x103013f80>
    lsr();
    JSR(CyclePlayerPalette);
    JMP(SaveAB);
    JMP(ClrPlrPal);
}

int ClrPlrPal() {
    // <conv.chunks.Comment object at 0x10301c0b0>
    // <conv.chunks.Comment object at 0x10301c1d0>
    // <conv.chunks.Comment object at 0x10301c320>
    JSR(ResetPalStar);
    JMP(SaveAB);
}

int SaveAB() {
    // <conv.chunks.Comment object at 0x10301c470>
    lda(A_B_Buttons);
    sta(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x10301c5f0>
    lda(0x0);
    sta(Left_Right_Buttons);
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda(VRAM_Buffer_AddrCtrl);
    cmp(0x6);
    BEQ(ExitEng);
    lda(AreaParserTaskNum);
    // <conv.chunks.Comment object at 0x10301ca40>
    // <conv.chunks.Comment object at 0x10301cad0>
    // <conv.chunks.Comment object at 0x10301ccb0>
    BNE(RunParser);
    lda(ScrollThirtyTwo);
    cmp(0x20);
    BMI(ExitEng);
    // <conv.chunks.Comment object at 0x10301cec0>
    // <conv.chunks.Comment object at 0x10301cfe0>
    // <conv.chunks.Comment object at 0x10301d070>
    lda(ScrollThirtyTwo);
    sbc(0x20);
    sta(ScrollThirtyTwo);
    lda(0x0);
    sta(VRAM_Buffer2_Offset);
    JMP(RunParser);
}

int RunParser() {
    // <conv.chunks.Comment object at 0x10301d340>
    // <conv.chunks.Comment object at 0x10301d3d0>
    // <conv.chunks.Comment object at 0x10301d580>
    // <conv.chunks.Comment object at 0x10301d610>
    // <conv.chunks.Comment object at 0x10301d7c0>
    JSR(AreaParserTaskHandler);
    JMP(ExitEng);
}

int ExitEng() {
    // <conv.chunks.Comment object at 0x10301d910>
    return 0;
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x10301da90>
    clc();
    adc(Platform_X_Scroll);
    sta(Player_X_Scroll);
    lda(ScrollLock);
    BNE(InitScrlAmt);
    // <conv.chunks.Comment object at 0x10301dc40>
    // <conv.chunks.Comment object at 0x10301dd60>
    // <conv.chunks.Comment object at 0x10301de80>
    // <conv.chunks.Comment object at 0x10301dfa0>
    lda(Player_Pos_ForScroll);
    cmp(0x50);
    BCC(InitScrlAmt);
    lda(SideCollisionTimer);
    BNE(InitScrlAmt);
    ldy(Player_X_Scroll);
    dey();
    BMI(InitScrlAmt);
    // <conv.chunks.Comment object at 0x10301e1b0>
    // <conv.chunks.Comment object at 0x10301e240>
    // <conv.chunks.Comment object at 0x10301e3f0>
    // <conv.chunks.Comment object at 0x10301e510>
    // <conv.chunks.Comment object at 0x10301e630>
    // <conv.chunks.Comment object at 0x10301e780>
    // <conv.chunks.Comment object at 0x10301e810>
    iny();
    cpy(0x2);
    // <conv.chunks.Comment object at 0x10301e9c0>
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
    // <conv.chunks.Comment object at 0x10301f1d0>
    clc();
    adc(ScrollThirtyTwo);
    sta(ScrollThirtyTwo);
    // <conv.chunks.Comment object at 0x10301f380>
    // <conv.chunks.Comment object at 0x10301f4a0>
    tya();
    clc();
    adc(ScreenLeft_X_Pos);
    sta(ScreenLeft_X_Pos);
    sta(HorizontalScroll);
    // <conv.chunks.Comment object at 0x10301f6e0>
    // <conv.chunks.Comment object at 0x10301f800>
    // <conv.chunks.Comment object at 0x10301f920>
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
    // <conv.chunks.Comment object at 0x10301fb30>
    // <conv.chunks.Comment object at 0x10301fbc0>
    // <conv.chunks.Comment object at 0x10301fd70>
    // <conv.chunks.Comment object at 0x10301fec0>
    // <conv.chunks.Comment object at 0x10301ff50>
    // <conv.chunks.Comment object at 0x103024110>
    // <conv.chunks.Comment object at 0x103024260>
    // <conv.chunks.Comment object at 0x1030242f0>
    // <conv.chunks.Comment object at 0x103024470>
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
    // <conv.chunks.Comment object at 0x103024950>
    // <conv.chunks.Comment object at 0x103024b00>
    ldx(0x0);
    JSR(GetXOffscreenBits);
    sta(0x0);
    ldy(0x0);
    asl();
    BCS(KeepOnscr);
    iny();
    // <conv.chunks.Comment object at 0x103024bc0>
    // <conv.chunks.Comment object at 0x103024da0>
    // <conv.chunks.Comment object at 0x103024e30>
    // <conv.chunks.Comment object at 0x103024fe0>
    // <conv.chunks.Comment object at 0x103025070>
    // <conv.chunks.Comment object at 0x1030251c0>
    lda(0x0);
    anda(0b100000);
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // <conv.chunks.Comment object at 0x103025250>
    // <conv.chunks.Comment object at 0x103025460>
    // <conv.chunks.Comment object at 0x103025580>
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
    // <conv.chunks.Comment object at 0x103025790>
    // <conv.chunks.Comment object at 0x1030258e0>
    // <conv.chunks.Comment object at 0x103025a00>
    // <conv.chunks.Comment object at 0x103025b50>
    // <conv.chunks.Comment object at 0x103025be0>
    // <conv.chunks.Comment object at 0x103025d90>
    // <conv.chunks.Comment object at 0x103025eb0>
    // <conv.chunks.Comment object at 0x103026000>
    lda(0x0);
    sta(Player_X_Speed);
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // <conv.chunks.Comment object at 0x103026180>
    // <conv.chunks.Comment object at 0x103026330>
    lda(0x0);
    sta(Platform_X_Scroll);
    return 0;
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x103026690>
    clc();
    adc(0xff);
    sta(ScreenRight_X_Pos);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    sta(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x103026ab0>
    // <conv.chunks.Comment object at 0x103026b40>
    // <conv.chunks.Comment object at 0x103026cf0>
    // <conv.chunks.Comment object at 0x103026e10>
    // <conv.chunks.Comment object at 0x103026ea0>
    return 0;
    JMP(GameRoutines);
}

int GameRoutines() {
    lda(GameEngineSubroutine);
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda(AltEntranceControl);
    // <conv.chunks.Comment object at 0x103027b30>
    cmp(0x2);
    BEQ(EntrMode2);
    // <conv.chunks.Comment object at 0x103027cb0>
    lda(0x0);
    ldy(Player_Y_Position);
    cpy(0x30);
    BCC(AutoControlPlayer);
    lda(PlayerEntranceCtrl);
    // <conv.chunks.Comment object at 0x103027ec0>
    // <conv.chunks.Comment object at 0x1030340b0>
    // <conv.chunks.Comment object at 0x103034140>
    // <conv.chunks.Comment object at 0x1030342f0>
    cmp(0x6);
    BEQ(ChkBehPipe);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x103034470>
    // <conv.chunks.Comment object at 0x103034620>
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // <conv.chunks.Comment object at 0x103034830>
    lda(Player_SprAttrib);
    BNE(IntroEntr);
    // <conv.chunks.Comment object at 0x103034980>
    lda(0x1);
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // <conv.chunks.Comment object at 0x103034b00>
    // <conv.chunks.Comment object at 0x103034cb0>
    JSR(EnterSidePipe);
    dec(ChangeAreaTimer);
    BNE(ExitEntr);
    inc(DisableIntermediate);
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // <conv.chunks.Comment object at 0x103034e00>
    // <conv.chunks.Comment object at 0x103034f20>
    // <conv.chunks.Comment object at 0x103035040>
    // <conv.chunks.Comment object at 0x103035160>
    // <conv.chunks.Comment object at 0x103035280>
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
    // <conv.chunks.Comment object at 0x103035c70>
    // <conv.chunks.Comment object at 0x103035d00>
    // <conv.chunks.Comment object at 0x103035eb0>
    // <conv.chunks.Comment object at 0x103035fd0>
    // <conv.chunks.Comment object at 0x103036060>
    // <conv.chunks.Comment object at 0x103036180>
    // <conv.chunks.Comment object at 0x1030362a0>
    lda(0x3);
    sta(Player_State);
    iny();
    lda(0x8);
    sta(((Block_Buffer_1) + (0xb4)));
    JMP(OffVine);
}

int OffVine() {
    // <conv.chunks.Comment object at 0x1030364e0>
    // <conv.chunks.Comment object at 0x1030366c0>
    // <conv.chunks.Comment object at 0x103036750>
    // <conv.chunks.Comment object at 0x1030367e0>
    // <conv.chunks.Comment object at 0x103036a50>
    sty(DisableCollisionDet);
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x103036bd0>
    lda(Player_X_Position);
    cmp(0x48);
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // <conv.chunks.Comment object at 0x103036de0>
    // <conv.chunks.Comment object at 0x103036e70>
    // <conv.chunks.Comment object at 0x103037020>
    lda(0x8);
    sta(GameEngineSubroutine);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103037260>
    sta(PlayerFacingDir);
    lsr();
    sta(AltEntranceControl);
    sta(DisableCollisionDet);
    sta(JoypadOverride);
    JMP(ExitEntr);
}

int ExitEntr() {
    // <conv.chunks.Comment object at 0x1030374d0>
    // <conv.chunks.Comment object at 0x103037560>
    // <conv.chunks.Comment object at 0x103037680>
    // <conv.chunks.Comment object at 0x1030377a0>
    // <conv.chunks.Comment object at 0x1030378f0>
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
    // <conv.chunks.Comment object at 0x103037bc0>
    // <conv.chunks.Comment object at 0x103037ce0>
    BEQ(SizeChk);
    lda(AreaType);
    BNE(SaveJoyp);
    // <conv.chunks.Comment object at 0x103037f20>
    // <conv.chunks.Comment object at 0x10303c080>
    ldy(Player_Y_HighPos);
    dey();
    BNE(DisJoyp);
    // <conv.chunks.Comment object at 0x10303c2c0>
    // <conv.chunks.Comment object at 0x10303c350>
    lda(Player_Y_Position);
    cmp(0xd0);
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // <conv.chunks.Comment object at 0x10303c590>
    // <conv.chunks.Comment object at 0x10303c620>
    // <conv.chunks.Comment object at 0x10303c7d0>
    lda(0x0);
    sta(SavedJoypadBits);
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // <conv.chunks.Comment object at 0x10303ca40>
    lda(SavedJoypadBits);
    anda(0b11000000);
    sta(A_B_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x10303cd70>
    anda(0b11);
    sta(Left_Right_Buttons);
    lda(SavedJoypadBits);
    // <conv.chunks.Comment object at 0x10303d070>
    anda(0b1100);
    sta(Up_Down_Buttons);
    anda(0b100);
    BEQ(SizeChk);
    lda(Player_State);
    BNE(SizeChk);
    ldy(Left_Right_Buttons);
    BEQ(SizeChk);
    // <conv.chunks.Comment object at 0x10303d370>
    // <conv.chunks.Comment object at 0x10303d490>
    // <conv.chunks.Comment object at 0x10303d5e0>
    // <conv.chunks.Comment object at 0x10303d700>
    // <conv.chunks.Comment object at 0x10303d850>
    // <conv.chunks.Comment object at 0x10303d970>
    lda(0x0);
    sta(Left_Right_Buttons);
    sta(Up_Down_Buttons);
    JMP(SizeChk);
}

int SizeChk() {
    // <conv.chunks.Comment object at 0x10303db20>
    // <conv.chunks.Comment object at 0x10303dcd0>
    // <conv.chunks.Comment object at 0x10303ddf0>
    JSR(PlayerMovementSubs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x10303df70>
    lda(PlayerSize);
    BNE(ChkMoveDir);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10303e270>
    lda(CrouchingFlag);
    BEQ(ChkMoveDir);
    ldy(0x2);
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // <conv.chunks.Comment object at 0x10303e480>
    // <conv.chunks.Comment object at 0x10303e5a0>
    // <conv.chunks.Comment object at 0x10303e630>
    sty(Player_BoundBoxCtrl);
    lda(0x1);
    ldy(Player_X_Speed);
    BEQ(PlayerSubs);
    BPL(SetMoveDir);
    asl();
    JMP(SetMoveDir);
}

int SetMoveDir() {
    // <conv.chunks.Comment object at 0x10303e810>
    // <conv.chunks.Comment object at 0x10303e8a0>
    // <conv.chunks.Comment object at 0x10303ea50>
    // <conv.chunks.Comment object at 0x10303eb70>
    // <conv.chunks.Comment object at 0x10303ecc0>
    // <conv.chunks.Comment object at 0x10303ed50>
    sta(Player_MovingDir);
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // <conv.chunks.Comment object at 0x10303eea0>
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(0x0);
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // <conv.chunks.Comment object at 0x10303eff0>
    // <conv.chunks.Comment object at 0x10303f110>
    // <conv.chunks.Comment object at 0x10303f230>
    // <conv.chunks.Comment object at 0x10303f2c0>
    // <conv.chunks.Comment object at 0x10303f470>
    lda(Player_Y_Position);
    cmp(0x40);
    BCC(PlayerHole);
    // <conv.chunks.Comment object at 0x10303f680>
    // <conv.chunks.Comment object at 0x10303f710>
    lda(GameEngineSubroutine);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x10303f9b0>
    BEQ(PlayerHole);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x10303fbc0>
    BEQ(PlayerHole);
    cmp(0x4);
    // <conv.chunks.Comment object at 0x10303fdd0>
    BCC(PlayerHole);
    lda(Player_SprAttrib);
    anda(0b11011111);
    sta(Player_SprAttrib);
    JMP(PlayerHole);
}

int PlayerHole() {
    // <conv.chunks.Comment object at 0x103044110>
    // <conv.chunks.Comment object at 0x103044230>
    // <conv.chunks.Comment object at 0x103044350>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BMI(ExitCtrl);
    // <conv.chunks.Comment object at 0x1030444a0>
    // <conv.chunks.Comment object at 0x103044530>
    ldx(0x1);
    stx(ScrollLock);
    // <conv.chunks.Comment object at 0x103044740>
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
    // <conv.chunks.Comment object at 0x103044a10>
    // <conv.chunks.Comment object at 0x103044aa0>
    // <conv.chunks.Comment object at 0x103044b90>
    // <conv.chunks.Comment object at 0x103044d40>
    // <conv.chunks.Comment object at 0x103044e90>
    // <conv.chunks.Comment object at 0x103044fb0>
    // <conv.chunks.Comment object at 0x1030450d0>
    inx();
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ChkHoleX);
    ldy(DeathMusicLoaded);
    BNE(HoleBottom);
    // <conv.chunks.Comment object at 0x1030452e0>
    // <conv.chunks.Comment object at 0x103045370>
    // <conv.chunks.Comment object at 0x103045520>
    // <conv.chunks.Comment object at 0x103045640>
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
    // <conv.chunks.Comment object at 0x103045b80>
    // <conv.chunks.Comment object at 0x103045c10>
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
    // <conv.chunks.Comment object at 0x103045d60>
    // <conv.chunks.Comment object at 0x103045f10>
    // <conv.chunks.Comment object at 0x103045fa0>
    // <conv.chunks.Comment object at 0x1030460c0>
    // <conv.chunks.Comment object at 0x1030461e0>
    // <conv.chunks.Comment object at 0x103046300>
    // <conv.chunks.Comment object at 0x103046390>
    // <conv.chunks.Comment object at 0x103046570>
    return 0;
    JMP(CloudExit);
}

int CloudExit() {
    lda(0x0);
    sta(JoypadOverride);
    JSR(SetEntr);
    inc(AltEntranceControl);
    // <conv.chunks.Comment object at 0x1030466f0>
    // <conv.chunks.Comment object at 0x1030468a0>
    // <conv.chunks.Comment object at 0x1030469f0>
    return 0;
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda(Player_Y_HighPos);
    BNE(AutoClimb);
    // <conv.chunks.Comment object at 0x103046c00>
    // <conv.chunks.Comment object at 0x103046d20>
    lda(Player_Y_Position);
    cmp(0xe4);
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // <conv.chunks.Comment object at 0x103047140>
    lda(0b1000);
    sta(JoypadOverride);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x103047380>
    sty(Player_State);
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // <conv.chunks.Comment object at 0x103047680>
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
    // <conv.chunks.Comment object at 0x103047a70>
    // <conv.chunks.Comment object at 0x103047b00>
    // <conv.chunks.Comment object at 0x103047cb0>
    // <conv.chunks.Comment object at 0x103047dd0>
    // <conv.chunks.Comment object at 0x103047e60>
    // <conv.chunks.Comment object at 0x103050050>
    iny();
    lda(AreaType);
    // <conv.chunks.Comment object at 0x103050200>
    cmp(0x3);
    BNE(ChgAreaPipe);
    // <conv.chunks.Comment object at 0x103050380>
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1030507a0>
    sta(Player_Y_Position);
    return 0;
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // <conv.chunks.Comment object at 0x103050aa0>
    ldy(0x2);
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // <conv.chunks.Comment object at 0x103050c20>
    dec(ChangeAreaTimer);
    BNE(ExitCAPipe);
    sty(AltEntranceControl);
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // <conv.chunks.Comment object at 0x103050ef0>
    // <conv.chunks.Comment object at 0x103051010>
    inc(DisableScreenFlag);
    lda(0x0);
    sta(OperMode_Task);
    sta(Sprite0HitDetectFlag);
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // <conv.chunks.Comment object at 0x1030511c0>
    // <conv.chunks.Comment object at 0x103051370>
    // <conv.chunks.Comment object at 0x1030514c0>
    return 0;
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x1030515e0>
    sta(Player_X_Speed);
    ldy(0x1);
    lda(Player_X_Position);
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1030517f0>
    // <conv.chunks.Comment object at 0x103051880>
    // <conv.chunks.Comment object at 0x103051a30>
    BNE(RightPipe);
    sta(Player_X_Speed);
    tay();
    JMP(RightPipe);
}

int RightPipe() {
    // <conv.chunks.Comment object at 0x103051c40>
    // <conv.chunks.Comment object at 0x103051d90>
    // <conv.chunks.Comment object at 0x103051e20>
    tya();
    JSR(AutoControlPlayer);
    // <conv.chunks.Comment object at 0x103051f10>
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
    // <conv.chunks.Comment object at 0x103052120>
    // <conv.chunks.Comment object at 0x103052240>
    // <conv.chunks.Comment object at 0x1030522d0>
    // <conv.chunks.Comment object at 0x103052480>
    // <conv.chunks.Comment object at 0x1030525a0>
    cmp(0xc4);
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // <conv.chunks.Comment object at 0x103052660>
    // <conv.chunks.Comment object at 0x103052810>
    // <conv.chunks.Comment object at 0x103052930>
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
    // <conv.chunks.Comment object at 0x103052a80>
    // <conv.chunks.Comment object at 0x103052ba0>
    // <conv.chunks.Comment object at 0x103052c30>
    // <conv.chunks.Comment object at 0x103052de0>
    // <conv.chunks.Comment object at 0x103052e70>
    // <conv.chunks.Comment object at 0x103053020>
    // <conv.chunks.Comment object at 0x103053140>
    BNE(ExitBoth);
    JMP(InitChangeSize);
}

int InitChangeSize() {
    ldy(PlayerChangeSizeFlag);
    BNE(ExitBoth);
    sty(PlayerAnimCtrl);
    inc(PlayerChangeSizeFlag);
    // <conv.chunks.Comment object at 0x1030532c0>
    // <conv.chunks.Comment object at 0x1030533e0>
    // <conv.chunks.Comment object at 0x103053500>
    // <conv.chunks.Comment object at 0x103053620>
    lda(PlayerSize);
    eor(0x1);
    // <conv.chunks.Comment object at 0x103053830>
    sta(PlayerSize);
    JMP(ExitBoth);
}

int ExitBoth() {
    // <conv.chunks.Comment object at 0x103053a70>
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
    // <conv.chunks.Comment object at 0x10305c140>
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
    // <conv.chunks.Comment object at 0x10305c620>
    // <conv.chunks.Comment object at 0x10305c740>
    // <conv.chunks.Comment object at 0x10305c7d0>
    // <conv.chunks.Comment object at 0x10305c980>
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
    // <conv.chunks.Comment object at 0x10305da90>
    // <conv.chunks.Comment object at 0x10305dc70>
    // <conv.chunks.Comment object at 0x10305dd90>
    // <conv.chunks.Comment object at 0x10305dee0>
    // <conv.chunks.Comment object at 0x10305e000>
    lda(0x0);
    sta(FlagpoleSoundQueue);
    // <conv.chunks.Comment object at 0x10305e180>
    ldy(Player_Y_Position);
    cpy(0x9e);
    BCS(SlidePlayer);
    lda(0x4);
    JMP(SlidePlayer);
}

int SlidePlayer() {
    // <conv.chunks.Comment object at 0x10305e420>
    // <conv.chunks.Comment object at 0x10305e4b0>
    // <conv.chunks.Comment object at 0x10305e660>
    // <conv.chunks.Comment object at 0x10305e6f0>
    JMP(AutoControlPlayer);
    JMP(NoFPObj);
}

int NoFPObj() {
    // <conv.chunks.Comment object at 0x10305e8d0>
    inc(GameEngineSubroutine);
    return 0;
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x10305ebd0>
    JSR(AutoControlPlayer);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x10305f230>
    cmp(0xae);
    BCC(ChkStop);
    lda(ScrollLock);
    BEQ(ChkStop);
    // <conv.chunks.Comment object at 0x10305f3b0>
    // <conv.chunks.Comment object at 0x10305f590>
    // <conv.chunks.Comment object at 0x10305f6b0>
    lda(EndOfLevelMusic);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x10305f8f0>
    lda(0x0);
    sta(ScrollLock);
    JMP(ChkStop);
}

int ChkStop() {
    // <conv.chunks.Comment object at 0x10305fa70>
    // <conv.chunks.Comment object at 0x10305fc20>
    lda(Player_CollisionBits);
    lsr();
    BCS(RdyNextA);
    lda(StarFlagTaskControl);
    BNE(InCastle);
    inc(StarFlagTaskControl);
    JMP(InCastle);
}

int InCastle() {
    // <conv.chunks.Comment object at 0x10305fdd0>
    // <conv.chunks.Comment object at 0x10305fe60>
    // <conv.chunks.Comment object at 0x10305ff80>
    // <conv.chunks.Comment object at 0x1030640e0>
    // <conv.chunks.Comment object at 0x103064200>
    // <conv.chunks.Comment object at 0x103064320>
    lda(0b100000);
    sta(Player_SprAttrib);
    JMP(RdyNextA);
}

int RdyNextA() {
    lda(StarFlagTaskControl);
    cmp(0x5);
    BNE(ExitNA);
    inc(LevelNumber);
    // <conv.chunks.Comment object at 0x1030646b0>
    // <conv.chunks.Comment object at 0x103064740>
    // <conv.chunks.Comment object at 0x103064920>
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
    // <conv.chunks.Comment object at 0x103064b30>
    // <conv.chunks.Comment object at 0x103064bc0>
    // <conv.chunks.Comment object at 0x103064d70>
    // <conv.chunks.Comment object at 0x103064e90>
    // <conv.chunks.Comment object at 0x103064fb0>
    // <conv.chunks.Comment object at 0x103065100>
    // <conv.chunks.Comment object at 0x103065220>
    // <conv.chunks.Comment object at 0x103065340>
    inc(AreaNumber);
    JSR(LoadAreaPointer);
    inc(FetchNewGameTimerFlag);
    JSR(ChgAreaMode);
    sta(HalfwayPage);
    // <conv.chunks.Comment object at 0x103065490>
    // <conv.chunks.Comment object at 0x1030655b0>
    // <conv.chunks.Comment object at 0x1030656d0>
    // <conv.chunks.Comment object at 0x1030657f0>
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
    // <conv.chunks.Comment object at 0x103065ca0>
    // <conv.chunks.Comment object at 0x103065d30>
    // <conv.chunks.Comment object at 0x103065ee0>
    // <conv.chunks.Comment object at 0x103066000>
    // <conv.chunks.Comment object at 0x103066120>
    // <conv.chunks.Comment object at 0x103066240>
    // <conv.chunks.Comment object at 0x103066360>
    // <conv.chunks.Comment object at 0x103066480>
    sta(CrouchingFlag);
    JMP(ProcMove);
}

int ProcMove() {
    // <conv.chunks.Comment object at 0x1030665d0>
    JSR(PlayerPhysicsSub);
    lda(PlayerChangeSizeFlag);
    BNE(NoMoveSub);
    // <conv.chunks.Comment object at 0x103066720>
    // <conv.chunks.Comment object at 0x103066840>
    lda(Player_State);
    cmp(0x3);
    BEQ(MoveSubs);
    // <conv.chunks.Comment object at 0x103066a50>
    // <conv.chunks.Comment object at 0x103066ae0>
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
    // <conv.chunks.Comment object at 0x1030672f0>
    // <conv.chunks.Comment object at 0x103067350>
    lda(Left_Right_Buttons);
    BEQ(GndMove);
    sta(PlayerFacingDir);
    JMP(GndMove);
}

int GndMove() {
    // <conv.chunks.Comment object at 0x103067560>
    // <conv.chunks.Comment object at 0x1030676b0>
    // <conv.chunks.Comment object at 0x1030677d0>
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x103067950>
    // <conv.chunks.Comment object at 0x103067a70>
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
    // <conv.chunks.Comment object at 0x103070080>
    // <conv.chunks.Comment object at 0x1030701a0>
    lda(A_B_Buttons);
    anda(A_Button);
    anda(PreviousA_B_Buttons);
    BNE(ProcSwim);
    lda(JumpOrigin_Y_Position);
    // <conv.chunks.Comment object at 0x1030703b0>
    // <conv.chunks.Comment object at 0x1030704d0>
    // <conv.chunks.Comment object at 0x1030705f0>
    // <conv.chunks.Comment object at 0x103070710>
    sec();
    sbc(Player_Y_Position);
    cmp(DiffToHaltJump);
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // <conv.chunks.Comment object at 0x1030708c0>
    // <conv.chunks.Comment object at 0x1030709e0>
    // <conv.chunks.Comment object at 0x103070b00>
    // <conv.chunks.Comment object at 0x103070c20>
    lda(VerticalForceDown);
    sta(VerticalForce);
    JMP(ProcSwim);
}

int ProcSwim() {
    // <conv.chunks.Comment object at 0x103070e60>
    lda(SwimmingFlag);
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // <conv.chunks.Comment object at 0x103070fb0>
    // <conv.chunks.Comment object at 0x103071100>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(LRWater);
    // <conv.chunks.Comment object at 0x103071310>
    // <conv.chunks.Comment object at 0x1030713a0>
    lda(0x18);
    sta(VerticalForce);
    JMP(LRWater);
}

int LRWater() {
    // <conv.chunks.Comment object at 0x1030715e0>
    // <conv.chunks.Comment object at 0x103071790>
    lda(Left_Right_Buttons);
    BEQ(LRAir);
    sta(PlayerFacingDir);
    JMP(LRAir);
}

int LRAir() {
    // <conv.chunks.Comment object at 0x103071910>
    // <conv.chunks.Comment object at 0x103071a60>
    // <conv.chunks.Comment object at 0x103071b80>
    lda(Left_Right_Buttons);
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // <conv.chunks.Comment object at 0x103071d00>
    // <conv.chunks.Comment object at 0x103071e50>
    // <conv.chunks.Comment object at 0x103071f70>
    JSR(MovePlayerHorizontally);
    sta(Player_X_Scroll);
    // <conv.chunks.Comment object at 0x1030720f0>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BNE(ExitMov1);
    // <conv.chunks.Comment object at 0x103072300>
    // <conv.chunks.Comment object at 0x103072390>
    lda(0x28);
    sta(VerticalForce);
    JMP(ExitMov1);
}

int ExitMov1() {
    // <conv.chunks.Comment object at 0x1030725a0>
    // <conv.chunks.Comment object at 0x103072750>
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda(Player_YMF_Dummy);
    clc();
    adc(Player_Y_MoveForce);
    // <conv.chunks.Comment object at 0x103072f00>
    // <conv.chunks.Comment object at 0x103072f90>
    sta(Player_YMF_Dummy);
    ldy(0x0);
    lda(Player_Y_Speed);
    BPL(MoveOnVine);
    dey();
    JMP(MoveOnVine);
}

int MoveOnVine() {
    // <conv.chunks.Comment object at 0x1030731a0>
    // <conv.chunks.Comment object at 0x103073230>
    // <conv.chunks.Comment object at 0x1030733e0>
    // <conv.chunks.Comment object at 0x103073530>
    // <conv.chunks.Comment object at 0x1030735c0>
    sty(0x0);
    adc(Player_Y_Position);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1030736b0>
    // <conv.chunks.Comment object at 0x103073830>
    lda(Player_Y_HighPos);
    adc(0x0);
    sta(Player_Y_HighPos);
    lda(Left_Right_Buttons);
    anda(Player_CollisionBits);
    BEQ(InitCSTimer);
    ldy(ClimbSideTimer);
    BNE(ExitCSub);
    // <conv.chunks.Comment object at 0x103073a70>
    // <conv.chunks.Comment object at 0x103073b00>
    // <conv.chunks.Comment object at 0x103073c80>
    // <conv.chunks.Comment object at 0x103073da0>
    // <conv.chunks.Comment object at 0x103073ec0>
    // <conv.chunks.Comment object at 0x103073fe0>
    // <conv.chunks.Comment object at 0x10307c140>
    ldy(0x18);
    sty(ClimbSideTimer);
    ldx(0x0);
    ldy(PlayerFacingDir);
    lsr();
    BCS(ClimbFD);
    // <conv.chunks.Comment object at 0x10307c2c0>
    // <conv.chunks.Comment object at 0x10307c470>
    // <conv.chunks.Comment object at 0x10307c500>
    // <conv.chunks.Comment object at 0x10307c6e0>
    // <conv.chunks.Comment object at 0x10307c770>
    inx();
    inx();
    JMP(ClimbFD);
}

int ClimbFD() {
    // <conv.chunks.Comment object at 0x10307c980>
    // <conv.chunks.Comment object at 0x10307ca10>
    dey();
    BEQ(CSetFDir);
    inx();
    JMP(CSetFDir);
}

int CSetFDir() {
    lda(Player_X_Position);
    clc();
    adc(offsetof(G, ClimbAdderLow), x);
    // <conv.chunks.Comment object at 0x10307ce60>
    // <conv.chunks.Comment object at 0x10307cef0>
    sta(Player_X_Position);
    lda(Player_PageLoc);
    adc(offsetof(G, ClimbAdderHigh), x);
    // <conv.chunks.Comment object at 0x10307d130>
    // <conv.chunks.Comment object at 0x10307d250>
    sta(Player_PageLoc);
    lda(Left_Right_Buttons);
    eor(0b11);
    sta(PlayerFacingDir);
    JMP(ExitCSub);
}

int ExitCSub() {
    // <conv.chunks.Comment object at 0x10307d490>
    // <conv.chunks.Comment object at 0x10307d5b0>
    // <conv.chunks.Comment object at 0x10307d6d0>
    // <conv.chunks.Comment object at 0x10307d7f0>
    return 0;
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // <conv.chunks.Comment object at 0x10307d8e0>
    sta(ClimbSideTimer);
    return 0;
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x10307f050>
    cmp(0x3);
    BNE(CheckForJumping);
    // <conv.chunks.Comment object at 0x10307f770>
    ldy(0x0);
    lda(Up_Down_Buttons);
    anda(Player_CollisionBits);
    BEQ(ProcClimb);
    // <conv.chunks.Comment object at 0x10307f980>
    // <conv.chunks.Comment object at 0x10307fb30>
    // <conv.chunks.Comment object at 0x10307fc50>
    iny();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x10307fe00>
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // <conv.chunks.Comment object at 0x10308c0e0>
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
    // <conv.chunks.Comment object at 0x10308c260>
    // <conv.chunks.Comment object at 0x10308c380>
    // <conv.chunks.Comment object at 0x10308c410>
    // <conv.chunks.Comment object at 0x10308c5f0>
    // <conv.chunks.Comment object at 0x10308c710>
    // <conv.chunks.Comment object at 0x10308c860>
    // <conv.chunks.Comment object at 0x10308c8f0>
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda(JumpspringAnimCtrl);
    BNE(NoJump);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x10308cb00>
    // <conv.chunks.Comment object at 0x10308cc20>
    // <conv.chunks.Comment object at 0x10308cd70>
    anda(A_Button);
    BEQ(NoJump);
    anda(PreviousA_B_Buttons);
    // <conv.chunks.Comment object at 0x10308cf80>
    // <conv.chunks.Comment object at 0x10308d0d0>
    BEQ(ProcJumping);
    JMP(NoJump);
}

int NoJump() {
    // <conv.chunks.Comment object at 0x10308d2e0>
    JMP(X_Physics);
    JMP(ProcJumping);
}

int ProcJumping() {
    lda(Player_State);
    BEQ(InitJS);
    lda(SwimmingFlag);
    BEQ(NoJump);
    lda(JumpSwimTimer);
    // <conv.chunks.Comment object at 0x10308d490>
    // <conv.chunks.Comment object at 0x10308d5b0>
    // <conv.chunks.Comment object at 0x10308d700>
    // <conv.chunks.Comment object at 0x10308d820>
    // <conv.chunks.Comment object at 0x10308d970>
    BNE(InitJS);
    lda(Player_Y_Speed);
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // <conv.chunks.Comment object at 0x10308dbb0>
    // <conv.chunks.Comment object at 0x10308dcd0>
    // <conv.chunks.Comment object at 0x10308de20>
    // <conv.chunks.Comment object at 0x10308df40>
    lda(0x20);
    sta(JumpSwimTimer);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10308e1b0>
    sty(Player_YMF_Dummy);
    sty(Player_Y_MoveForce);
    lda(Player_Y_HighPos);
    sta(JumpOrigin_Y_HighPos);
    // <conv.chunks.Comment object at 0x10308e4b0>
    // <conv.chunks.Comment object at 0x10308e5d0>
    lda(Player_Y_Position);
    sta(JumpOrigin_Y_Position);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10308e8d0>
    sta(Player_State);
    lda(Player_XSpeedAbsolute);
    // <conv.chunks.Comment object at 0x10308eae0>
    cmp(0x9);
    BCC(ChkWtr);
    iny();
    // <conv.chunks.Comment object at 0x10308ec60>
    // <conv.chunks.Comment object at 0x10308ee70>
    cmp(0x10);
    BCC(ChkWtr);
    iny();
    cmp(0x19);
    BCC(ChkWtr);
    iny();
    cmp(0x1c);
    BCC(ChkWtr);
    // <conv.chunks.Comment object at 0x10308f4a0>
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // <conv.chunks.Comment object at 0x10308f710>
    lda(0x1);
    sta(DiffToHaltJump);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x10308f980>
    BEQ(GetYPhy);
    ldy(0x5);
    lda(Whirlpool_Flag);
    // <conv.chunks.Comment object at 0x10308fbc0>
    // <conv.chunks.Comment object at 0x10308fc50>
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // <conv.chunks.Comment object at 0x10308ff50>
    // <conv.chunks.Comment object at 0x10308ffe0>
    lda(offsetof(G, JumpMForceData), y);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x1030941d0>
    lda(offsetof(G, FallMForceData), y);
    sta(VerticalForceDown);
    lda(offsetof(G, InitMForceData), y);
    sta(Player_Y_MoveForce);
    lda(offsetof(G, PlayerYSpdData), y);
    sta(Player_Y_Speed);
    lda(SwimmingFlag);
    // <conv.chunks.Comment object at 0x103094920>
    BEQ(PJumpSnd);
    lda(Sfx_EnemyStomp);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x103094b30>
    // <conv.chunks.Comment object at 0x103094c50>
    lda(Player_Y_Position);
    cmp(0x14);
    BCS(X_Physics);
    lda(0x0);
    sta(Player_Y_Speed);
    JMP(X_Physics);
    JMP(PJumpSnd);
}

int PJumpSnd() {
    // <conv.chunks.Comment object at 0x103094e60>
    // <conv.chunks.Comment object at 0x103094ef0>
    // <conv.chunks.Comment object at 0x1030950a0>
    // <conv.chunks.Comment object at 0x103095130>
    // <conv.chunks.Comment object at 0x1030952e0>
    // <conv.chunks.Comment object at 0x103095400>
    lda(Sfx_BigJump);
    ldy(PlayerSize);
    // <conv.chunks.Comment object at 0x103095550>
    BEQ(SJumpSnd);
    lda(Sfx_SmallJump);
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // <conv.chunks.Comment object at 0x103095760>
    // <conv.chunks.Comment object at 0x103095880>
    sta(Square1SoundQueue);
    JMP(X_Physics);
}

int X_Physics() {
    ldy(0x0);
    sty(0x0);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x103095b20>
    // <conv.chunks.Comment object at 0x103095bb0>
    BEQ(ProcPRun);
    lda(Player_XSpeedAbsolute);
    cmp(0x19);
    BCS(GetXPhy);
    BCC(ChkRFast);
    JMP(ProcPRun);
}

int ProcPRun() {
    // <conv.chunks.Comment object at 0x103095e20>
    // <conv.chunks.Comment object at 0x103095f40>
    // <conv.chunks.Comment object at 0x103095fd0>
    // <conv.chunks.Comment object at 0x1030961b0>
    // <conv.chunks.Comment object at 0x1030962d0>
    iny();
    lda(AreaType);
    BEQ(ChkRFast);
    dey();
    lda(Left_Right_Buttons);
    cmp(Player_MovingDir);
    BNE(ChkRFast);
    lda(A_B_Buttons);
    // <conv.chunks.Comment object at 0x1030963c0>
    // <conv.chunks.Comment object at 0x1030964e0>
    // <conv.chunks.Comment object at 0x103096630>
    // <conv.chunks.Comment object at 0x1030966c0>
    // <conv.chunks.Comment object at 0x1030967e0>
    // <conv.chunks.Comment object at 0x103096900>
    // <conv.chunks.Comment object at 0x103096a20>
    anda(B_Button);
    BNE(SetRTmr);
    lda(RunningTimer);
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // <conv.chunks.Comment object at 0x103096c30>
    // <conv.chunks.Comment object at 0x103096d80>
    // <conv.chunks.Comment object at 0x103096ea0>
    // <conv.chunks.Comment object at 0x103096ff0>
    iny();
    inc(0x0);
    // <conv.chunks.Comment object at 0x103097110>
    lda(RunningSpeed);
    BNE(FastXSp);
    // <conv.chunks.Comment object at 0x1030972f0>
    lda(Player_XSpeedAbsolute);
    cmp(0x21);
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // <conv.chunks.Comment object at 0x103097530>
    // <conv.chunks.Comment object at 0x1030975c0>
    // <conv.chunks.Comment object at 0x1030977a0>
    inc(0x0);
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // <conv.chunks.Comment object at 0x1030978c0>
    // <conv.chunks.Comment object at 0x103097a70>
    lda(0xa);
    sta(RunningTimer);
    JMP(GetXPhy);
}

int GetXPhy() {
    // <conv.chunks.Comment object at 0x103097ce0>
    lda(offsetof(G, MaxLeftXSpdData), y);
    sta(MaximumLeftSpeed);
    lda(GameEngineSubroutine);
    cmp(0x7);
    BNE(GetXPhy2);
    ldy(0x3);
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // <conv.chunks.Comment object at 0x103097f80>
    // <conv.chunks.Comment object at 0x10309c0e0>
    // <conv.chunks.Comment object at 0x10309c170>
    // <conv.chunks.Comment object at 0x10309c320>
    // <conv.chunks.Comment object at 0x10309c3b0>
    lda(offsetof(G, MaxRightXSpdData), y);
    sta(MaximumRightSpeed);
    ldy(0x0);
    lda(offsetof(G, FrictionData), y);
    // <conv.chunks.Comment object at 0x10309c6e0>
    // <conv.chunks.Comment object at 0x10309c770>
    sta(FrictionAdderLow);
    lda(0x0);
    sta(FrictionAdderHigh);
    // <conv.chunks.Comment object at 0x10309ca70>
    lda(PlayerFacingDir);
    cmp(Player_MovingDir);
    BEQ(ExitPhy);
    asl(FrictionAdderLow);
    rol(FrictionAdderHigh);
    JMP(ExitPhy);
}

int ExitPhy() {
    // <conv.chunks.Comment object at 0x10309cd10>
    // <conv.chunks.Comment object at 0x10309ce30>
    // <conv.chunks.Comment object at 0x10309cf80>
    // <conv.chunks.Comment object at 0x10309d0a0>
    // <conv.chunks.Comment object at 0x10309d1c0>
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
    // <conv.chunks.Comment object at 0x10309d3a0>
    // <conv.chunks.Comment object at 0x10309d400>
    // <conv.chunks.Comment object at 0x10309d760>
    // <conv.chunks.Comment object at 0x10309d7f0>
    // <conv.chunks.Comment object at 0x10309d9d0>
    // <conv.chunks.Comment object at 0x10309da60>
    // <conv.chunks.Comment object at 0x10309daf0>
    // <conv.chunks.Comment object at 0x10309dd00>
    // <conv.chunks.Comment object at 0x10309dd90>
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
    // <conv.chunks.Comment object at 0x10309df10>
    // <conv.chunks.Comment object at 0x10309e030>
    // <conv.chunks.Comment object at 0x10309e150>
    // <conv.chunks.Comment object at 0x10309e1e0>
    // <conv.chunks.Comment object at 0x10309e390>
    // <conv.chunks.Comment object at 0x10309e4b0>
    // <conv.chunks.Comment object at 0x10309e540>
    sta(RunningSpeed);
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // <conv.chunks.Comment object at 0x10309e810>
    lda(Player_XSpeedAbsolute);
    cmp(0xb);
    BCS(SetAnimSpd);
    // <conv.chunks.Comment object at 0x10309e960>
    // <conv.chunks.Comment object at 0x10309e9f0>
    lda(PlayerFacingDir);
    sta(Player_MovingDir);
    // <conv.chunks.Comment object at 0x10309ec90>
    lda(0x0);
    sta(Player_X_Speed);
    sta(Player_X_MoveForce);
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // <conv.chunks.Comment object at 0x10309ee10>
    // <conv.chunks.Comment object at 0x10309efc0>
    // <conv.chunks.Comment object at 0x10309f0e0>
    lda(offsetof(G, PlayerAnimTmrData), y);
    sta(PlayerAnimTimerSet);
    return 0;
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda(Player_CollisionBits);
    cmp(0x0);
    BNE(JoypFrict);
    // <conv.chunks.Comment object at 0x10309f440>
    // <conv.chunks.Comment object at 0x10309f560>
    // <conv.chunks.Comment object at 0x10309f5f0>
    lda(Player_X_Speed);
    BEQ(SetAbsSpd);
    BPL(RghtFrict);
    BMI(LeftFrict);
    JMP(JoypFrict);
}

int JoypFrict() {
    // <conv.chunks.Comment object at 0x10309f890>
    // <conv.chunks.Comment object at 0x10309f9b0>
    // <conv.chunks.Comment object at 0x10309fad0>
    // <conv.chunks.Comment object at 0x10309fbf0>
    lsr();
    BCC(RghtFrict);
    JMP(LeftFrict);
}

int LeftFrict() {
    // <conv.chunks.Comment object at 0x10309fce0>
    // <conv.chunks.Comment object at 0x10309fe00>
    lda(Player_X_MoveForce);
    clc();
    adc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x10309ffe0>
    // <conv.chunks.Comment object at 0x1030ac140>
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
    // <conv.chunks.Comment object at 0x1030ac350>
    // <conv.chunks.Comment object at 0x1030ac470>
    // <conv.chunks.Comment object at 0x1030ac590>
    // <conv.chunks.Comment object at 0x1030ac6b0>
    // <conv.chunks.Comment object at 0x1030ac7d0>
    // <conv.chunks.Comment object at 0x1030ac8f0>
    // <conv.chunks.Comment object at 0x1030aca10>
    // <conv.chunks.Comment object at 0x1030acb30>
    lda(Player_X_MoveForce);
    sec();
    sbc(FrictionAdderLow);
    sta(Player_X_MoveForce);
    // <conv.chunks.Comment object at 0x1030acd10>
    // <conv.chunks.Comment object at 0x1030ace30>
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
    // <conv.chunks.Comment object at 0x1030ad040>
    // <conv.chunks.Comment object at 0x1030ad160>
    // <conv.chunks.Comment object at 0x1030ad280>
    // <conv.chunks.Comment object at 0x1030ad3a0>
    // <conv.chunks.Comment object at 0x1030ad4c0>
    // <conv.chunks.Comment object at 0x1030ad5e0>
    // <conv.chunks.Comment object at 0x1030ad700>
    cmp(0x0);
    BPL(SetAbsSpd);
    // <conv.chunks.Comment object at 0x1030ad7c0>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // <conv.chunks.Comment object at 0x1030ada90>
    // <conv.chunks.Comment object at 0x1030adb20>
    // <conv.chunks.Comment object at 0x1030adbb0>
    sta(Player_XSpeedAbsolute);
    return 0;
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x1030ade50>
    // <conv.chunks.Comment object at 0x1030adeb0>
    // <conv.chunks.Comment object at 0x1030adf10>
    cmp(0x2);
    BCC(ProcAirBubbles);
    // <conv.chunks.Comment object at 0x1030ae090>
    lda(A_B_Buttons);
    anda(B_Button);
    BEQ(ProcFireballs);
    // <conv.chunks.Comment object at 0x1030ae330>
    // <conv.chunks.Comment object at 0x1030ae450>
    anda(PreviousA_B_Buttons);
    BNE(ProcFireballs);
    lda(FireballCounter);
    anda(0b1);
    // <conv.chunks.Comment object at 0x1030ae660>
    // <conv.chunks.Comment object at 0x1030ae780>
    // <conv.chunks.Comment object at 0x1030ae8a0>
    tax();
    lda(Fireball_State, x);
    BNE(ProcFireballs);
    ldy(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x1030aea50>
    // <conv.chunks.Comment object at 0x1030aeba0>
    // <conv.chunks.Comment object at 0x1030aecc0>
    dey();
    BNE(ProcFireballs);
    lda(CrouchingFlag);
    // <conv.chunks.Comment object at 0x1030aef60>
    BNE(ProcFireballs);
    lda(Player_State);
    // <conv.chunks.Comment object at 0x1030af170>
    cmp(0x3);
    BEQ(ProcFireballs);
    lda(Sfx_Fireball);
    // <conv.chunks.Comment object at 0x1030af470>
    sta(Square1SoundQueue);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1030af680>
    sta(Fireball_State, x);
    ldy(PlayerAnimTimerSet);
    sty(FireballThrowingTimer);
    // <conv.chunks.Comment object at 0x1030af8c0>
    // <conv.chunks.Comment object at 0x1030af9e0>
    dey();
    sty(PlayerAnimTimer);
    inc(FireballCounter);
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(0x0);
    JSR(FireballObjCore);
    // <conv.chunks.Comment object at 0x1030afe60>
    ldx(0x1);
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda(AreaType);
    // <conv.chunks.Comment object at 0x1030b8290>
    BNE(BublExit);
    ldx(0x2);
    JMP(BublLoop);
}

int BublLoop() {
    // <conv.chunks.Comment object at 0x1030b84a0>
    // <conv.chunks.Comment object at 0x1030b8530>
    stx(ObjectOffset);
    JSR(BubbleCheck);
    JSR(RelativeBubblePosition);
    JSR(GetBubbleOffscreenBits);
    JSR(DrawBubble);
    // <conv.chunks.Comment object at 0x1030b8710>
    // <conv.chunks.Comment object at 0x1030b8830>
    // <conv.chunks.Comment object at 0x1030b8950>
    // <conv.chunks.Comment object at 0x1030b8a70>
    dex();
    BPL(BublLoop);
    JMP(BublExit);
}

int BublExit() {
    // <conv.chunks.Comment object at 0x1030b8c20>
    // <conv.chunks.Comment object at 0x1030b8d40>
    return 0;
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx(ObjectOffset);
    lda(Fireball_State, x);
    // <conv.chunks.Comment object at 0x1030b8ec0>
    // <conv.chunks.Comment object at 0x1030b90d0>
    asl();
    BCS(FireballExplosion);
    ldy(Fireball_State, x);
    // <conv.chunks.Comment object at 0x1030b92b0>
    // <conv.chunks.Comment object at 0x1030b93d0>
    BEQ(NoFBall);
    dey();
    // <conv.chunks.Comment object at 0x1030b9670>
    BEQ(RunFB);
    lda(Player_X_Position);
    adc(0x4);
    // <conv.chunks.Comment object at 0x1030b9820>
    // <conv.chunks.Comment object at 0x1030b9940>
    sta(Fireball_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x1030b9b80>
    // <conv.chunks.Comment object at 0x1030b9ca0>
    sta(Fireball_PageLoc, x);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x1030b9ee0>
    sta(Fireball_Y_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x1030ba120>
    sta(Fireball_Y_HighPos, x);
    ldy(PlayerFacingDir);
    dey();
    lda(offsetof(G, FireballXSpdData), y);
    // <conv.chunks.Comment object at 0x1030ba360>
    // <conv.chunks.Comment object at 0x1030ba4b0>
    // <conv.chunks.Comment object at 0x1030ba540>
    sta(Fireball_X_Speed, x);
    lda(0x4);
    // <conv.chunks.Comment object at 0x1030ba7b0>
    sta(Fireball_Y_Speed, x);
    lda(0x7);
    sta(Fireball_BoundBoxCtrl, x);
    dec(Fireball_State, x);
    JMP(RunFB);
}

int RunFB() {
    // <conv.chunks.Comment object at 0x1030baa50>
    // <conv.chunks.Comment object at 0x1030bac30>
    // <conv.chunks.Comment object at 0x1030bad80>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x1030baed0>
    adc(0x7);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x1030bb0e0>
    sta(0x0);
    lda(0x3);
    // <conv.chunks.Comment object at 0x1030bb170>
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
    // <conv.chunks.Comment object at 0x1030bb560>
    // <conv.chunks.Comment object at 0x1030bb710>
    // <conv.chunks.Comment object at 0x1030bb830>
    // <conv.chunks.Comment object at 0x1030bb950>
    // <conv.chunks.Comment object at 0x1030bba70>
    // <conv.chunks.Comment object at 0x1030bbb90>
    // <conv.chunks.Comment object at 0x1030bbcb0>
    // <conv.chunks.Comment object at 0x1030bbdd0>
    // <conv.chunks.Comment object at 0x1030bbef0>
    // <conv.chunks.Comment object at 0x1030c0050>
    // <conv.chunks.Comment object at 0x1030c01a0>
    // <conv.chunks.Comment object at 0x1030c02c0>
    // <conv.chunks.Comment object at 0x1030c03e0>
    lda(0x0);
    sta(Fireball_State, x);
    JMP(NoFBall);
}

int NoFBall() {
    // <conv.chunks.Comment object at 0x1030c06b0>
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
    // <conv.chunks.Comment object at 0x1030c0a10>
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
    // <conv.chunks.Comment object at 0x1030c1430>
    // <conv.chunks.Comment object at 0x1030c14c0>
    // <conv.chunks.Comment object at 0x1030c16a0>
    // <conv.chunks.Comment object at 0x1030c1730>
    // <conv.chunks.Comment object at 0x1030c1880>
    // <conv.chunks.Comment object at 0x1030c1910>
    tya();
    adc(Player_X_Position);
    sta(Bubble_X_Position, x);
    // <conv.chunks.Comment object at 0x1030c1ac0>
    // <conv.chunks.Comment object at 0x1030c1be0>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Bubble_PageLoc, x);
    // <conv.chunks.Comment object at 0x1030c1e20>
    // <conv.chunks.Comment object at 0x1030c1eb0>
    lda(Player_Y_Position);
    clc();
    // <conv.chunks.Comment object at 0x1030c21b0>
    adc(0x8);
    sta(Bubble_Y_Position, x);
    // <conv.chunks.Comment object at 0x1030c22a0>
    lda(0x1);
    sta(Bubble_Y_HighPos, x);
    ldy(0x7);
    lda(offsetof(G, BubbleTimerData), y);
    sta(AirBubbleTimer);
    JMP(MoveBubl);
}

int MoveBubl() {
    // <conv.chunks.Comment object at 0x1030c24e0>
    // <conv.chunks.Comment object at 0x1030c26f0>
    // <conv.chunks.Comment object at 0x1030c2780>
    // <conv.chunks.Comment object at 0x1030c2930>
    // <conv.chunks.Comment object at 0x1030c2a50>
    ldy(0x7);
    lda(Bubble_YMF_Dummy, x);
    sec();
    // <conv.chunks.Comment object at 0x1030c2cf0>
    sbc(offsetof(G, Bubble_MForceData), y);
    sta(Bubble_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x1030c2ea0>
    lda(Bubble_Y_Position, x);
    sbc(0x0);
    cmp(0x20);
    BCS(Y_Bubl);
    lda(0xf8);
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // <conv.chunks.Comment object at 0x1030c3110>
    // <conv.chunks.Comment object at 0x1030c31a0>
    // <conv.chunks.Comment object at 0x1030c32c0>
    // <conv.chunks.Comment object at 0x1030c34a0>
    // <conv.chunks.Comment object at 0x1030c3530>
    sta(Bubble_Y_Position, x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // <conv.chunks.Comment object at 0x1030c37a0>
    return 0;
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda(OperMode);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x1030c3920>
    // <conv.chunks.Comment object at 0x1030c3cb0>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BCC(ExGTimer);
    cmp(0xb);
    BEQ(ExGTimer);
    // <conv.chunks.Comment object at 0x1030c3ec0>
    // <conv.chunks.Comment object at 0x1030c3f50>
    // <conv.chunks.Comment object at 0x1030cc140>
    // <conv.chunks.Comment object at 0x1030cc1d0>
    lda(Player_Y_HighPos);
    cmp(0x2);
    BCS(ExGTimer);
    lda(GameTimerCtrlTimer);
    BNE(ExGTimer);
    // <conv.chunks.Comment object at 0x1030cc470>
    // <conv.chunks.Comment object at 0x1030cc500>
    // <conv.chunks.Comment object at 0x1030cc6b0>
    // <conv.chunks.Comment object at 0x1030cc7d0>
    lda(GameTimerDisplay);
    ora(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x1030cc9e0>
    ora(((GameTimerDisplay) + (2)));
    BEQ(TimeUpOn);
    ldy(GameTimerDisplay);
    dey();
    BNE(ResGTCtrl);
    lda(((GameTimerDisplay) + (1)));
    // <conv.chunks.Comment object at 0x1030ccd70>
    // <conv.chunks.Comment object at 0x1030cce90>
    // <conv.chunks.Comment object at 0x1030ccfe0>
    // <conv.chunks.Comment object at 0x1030cd070>
    // <conv.chunks.Comment object at 0x1030cd190>
    ora(((GameTimerDisplay) + (2)));
    BNE(ResGTCtrl);
    // <conv.chunks.Comment object at 0x1030cd520>
    lda(TimeRunningOutMusic);
    sta(EventMusicQueue);
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // <conv.chunks.Comment object at 0x1030cd730>
    // <conv.chunks.Comment object at 0x1030cd850>
    lda(0x18);
    sta(GameTimerCtrlTimer);
    ldy(0x23);
    lda(0xff);
    // <conv.chunks.Comment object at 0x1030cda90>
    // <conv.chunks.Comment object at 0x1030cdb20>
    sta(((DigitModifier) + (5)));
    JSR(DigitsMathRoutine);
    lda(0xa4);
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // <conv.chunks.Comment object at 0x1030cde80>
    // <conv.chunks.Comment object at 0x1030cdfa0>
    // <conv.chunks.Comment object at 0x1030ce030>
    // <conv.chunks.Comment object at 0x1030ce1e0>
    sta(PlayerStatus);
    JSR(ForceInjury);
    inc(GameTimerExpiredFlag);
    JMP(ExGTimer);
}

int ExGTimer() {
    // <conv.chunks.Comment object at 0x1030ce330>
    // <conv.chunks.Comment object at 0x1030ce450>
    // <conv.chunks.Comment object at 0x1030ce5a0>
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
    // <conv.chunks.Comment object at 0x1030cf170>
    // <conv.chunks.Comment object at 0x1030cf290>
    // <conv.chunks.Comment object at 0x1030cf3e0>
    // <conv.chunks.Comment object at 0x1030cf500>
    // <conv.chunks.Comment object at 0x1030cf620>
    // <conv.chunks.Comment object at 0x1030cf770>
    // <conv.chunks.Comment object at 0x1030cf800>
    lda(Whirlpool_LeftExtent, y);
    clc();
    adc(Whirlpool_Length, y);
    sta(0x2);
    lda(Whirlpool_PageLoc, y);
    BEQ(NextWh);
    adc(0x0);
    sta(0x1);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1030cfad0>
    // <conv.chunks.Comment object at 0x1030cfc50>
    // <conv.chunks.Comment object at 0x1030cfce0>
    // <conv.chunks.Comment object at 0x1030cfe90>
    // <conv.chunks.Comment object at 0x1030cffe0>
    // <conv.chunks.Comment object at 0x1030d8170>
    // <conv.chunks.Comment object at 0x1030d8200>
    sec();
    sbc(Whirlpool_LeftExtent, y);
    lda(Player_PageLoc);
    sbc(Whirlpool_PageLoc, y);
    BMI(NextWh);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1030d8410>
    // <conv.chunks.Comment object at 0x1030d8560>
    // <conv.chunks.Comment object at 0x1030d8680>
    // <conv.chunks.Comment object at 0x1030d87d0>
    // <conv.chunks.Comment object at 0x1030d8950>
    sec();
    sbc(Player_X_Position);
    lda(0x1);
    sbc(Player_PageLoc);
    BPL(WhirlpoolActivate);
    JMP(NextWh);
}

int NextWh() {
    // <conv.chunks.Comment object at 0x1030d8ad0>
    // <conv.chunks.Comment object at 0x1030d8c20>
    // <conv.chunks.Comment object at 0x1030d8cb0>
    // <conv.chunks.Comment object at 0x1030d8e30>
    // <conv.chunks.Comment object at 0x1030d8f50>
    dey();
    BPL(WhLoop);
    JMP(ExitWh);
}

int ExitWh() {
    // <conv.chunks.Comment object at 0x1030d9070>
    // <conv.chunks.Comment object at 0x1030d91f0>
    return 0;
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda(Whirlpool_Length, y);
    lsr();
    sta(0x0);
    lda(Whirlpool_LeftExtent, y);
    // <conv.chunks.Comment object at 0x1030d9340>
    // <conv.chunks.Comment object at 0x1030d94c0>
    // <conv.chunks.Comment object at 0x1030d9580>
    // <conv.chunks.Comment object at 0x1030d9610>
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
    // <conv.chunks.Comment object at 0x1030d9880>
    // <conv.chunks.Comment object at 0x1030d9850>
    // <conv.chunks.Comment object at 0x1030d9a30>
    // <conv.chunks.Comment object at 0x1030d9be0>
    // <conv.chunks.Comment object at 0x1030d9d30>
    // <conv.chunks.Comment object at 0x1030d9dc0>
    // <conv.chunks.Comment object at 0x1030d9f70>
    // <conv.chunks.Comment object at 0x1030da000>
    // <conv.chunks.Comment object at 0x1030da180>
    sec();
    sbc(Player_X_Position);
    lda(0x0);
    sbc(Player_PageLoc);
    BPL(LeftWh);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1030da300>
    // <conv.chunks.Comment object at 0x1030da450>
    // <conv.chunks.Comment object at 0x1030da4e0>
    // <conv.chunks.Comment object at 0x1030da660>
    // <conv.chunks.Comment object at 0x1030da7b0>
    sec();
    sbc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x1030da960>
    // <conv.chunks.Comment object at 0x1030da9f0>
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // <conv.chunks.Comment object at 0x1030dac90>
    // <conv.chunks.Comment object at 0x1030dad20>
    // <conv.chunks.Comment object at 0x1030daf00>
    lda(Player_CollisionBits);
    lsr();
    BCC(WhPull);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x1030db0b0>
    // <conv.chunks.Comment object at 0x1030db140>
    // <conv.chunks.Comment object at 0x1030db290>
    clc();
    adc(0x1);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x1030db440>
    // <conv.chunks.Comment object at 0x1030db4d0>
    lda(Player_PageLoc);
    adc(0x0);
    JMP(SetPWh);
}

int SetPWh() {
    // <conv.chunks.Comment object at 0x1030db770>
    // <conv.chunks.Comment object at 0x1030db800>
    sta(Player_PageLoc);
    JMP(WhPull);
}

int WhPull() {
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1030dbb90>
    lda(0x1);
    sta(Whirlpool_Flag);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1030dbce0>
    // <conv.chunks.Comment object at 0x1030dbec0>
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(0x5);
    stx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1030e0380>
    // <conv.chunks.Comment object at 0x1030e03e0>
    lda(Enemy_ID, x);
    cmp(FlagpoleFlagObject);
    BNE(ExitFlagP);
    // <conv.chunks.Comment object at 0x1030e0c20>
    // <conv.chunks.Comment object at 0x1030e0d40>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BNE(SkipScore);
    // <conv.chunks.Comment object at 0x1030e0f50>
    // <conv.chunks.Comment object at 0x1030e0fe0>
    lda(Player_State);
    cmp(0x3);
    BNE(SkipScore);
    lda(Enemy_Y_Position, x);
    cmp(0xaa);
    BCS(GiveFPScr);
    lda(Player_Y_Position);
    cmp(0xa2);
    BCS(GiveFPScr);
    // <conv.chunks.Comment object at 0x1030e1280>
    // <conv.chunks.Comment object at 0x1030e1310>
    // <conv.chunks.Comment object at 0x1030e14c0>
    // <conv.chunks.Comment object at 0x1030e1610>
    // <conv.chunks.Comment object at 0x1030e16a0>
    // <conv.chunks.Comment object at 0x1030e1850>
    // <conv.chunks.Comment object at 0x1030e1970>
    // <conv.chunks.Comment object at 0x1030e1a00>
    lda(Enemy_YMF_Dummy, x);
    adc(0xff);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x1);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1030e1cd0>
    // <conv.chunks.Comment object at 0x1030e1d60>
    // <conv.chunks.Comment object at 0x1030e1f40>
    // <conv.chunks.Comment object at 0x1030e2090>
    // <conv.chunks.Comment object at 0x1030e2120>
    lda(FlagpoleFNum_YMFDummy);
    sec();
    // <conv.chunks.Comment object at 0x1030e2420>
    sbc(0xff);
    sta(FlagpoleFNum_YMFDummy);
    // <conv.chunks.Comment object at 0x1030e2510>
    lda(FlagpoleFNum_Y_Pos);
    sbc(0x1);
    sta(FlagpoleFNum_Y_Pos);
    JMP(SkipScore);
}

int SkipScore() {
    // <conv.chunks.Comment object at 0x1030e27b0>
    // <conv.chunks.Comment object at 0x1030e2840>
    // <conv.chunks.Comment object at 0x1030e29f0>
    JMP(FPGfx);
    JMP(GiveFPScr);
}

int GiveFPScr() {
    // <conv.chunks.Comment object at 0x1030e2b70>
    ldy(FlagpoleScore);
    lda(offsetof(G, FlagpoleScoreMods), y);
    ldx(offsetof(G, FlagpoleScoreDigits), y);
    sta(DigitModifier, x);
    JSR(AddToScore);
    // <conv.chunks.Comment object at 0x1030e2cc0>
    // <conv.chunks.Comment object at 0x1030e2e10>
    // <conv.chunks.Comment object at 0x1030e2f60>
    // <conv.chunks.Comment object at 0x1030e30b0>
    lda(0x5);
    sta(GameEngineSubroutine);
    JMP(FPGfx);
}

int FPGfx() {
    // <conv.chunks.Comment object at 0x1030e3230>
    // <conv.chunks.Comment object at 0x1030e33e0>
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
    // <conv.chunks.Comment object at 0x1030e3920>
    // <conv.chunks.Comment object at 0x1030e3c50>
    // <conv.chunks.Comment object at 0x1030e3d70>
    // <conv.chunks.Comment object at 0x1030e3e90>
    // <conv.chunks.Comment object at 0x1030e3fb0>
    tay();
    dey();
    tya();
    anda(0b10);
    BNE(DownJSpr);
    // <conv.chunks.Comment object at 0x1030ec1d0>
    // <conv.chunks.Comment object at 0x1030ec290>
    // <conv.chunks.Comment object at 0x1030ec320>
    // <conv.chunks.Comment object at 0x1030ec440>
    inc(Player_Y_Position);
    inc(Player_Y_Position);
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // <conv.chunks.Comment object at 0x1030ec650>
    // <conv.chunks.Comment object at 0x1030ec770>
    // <conv.chunks.Comment object at 0x1030ec8c0>
    dec(Player_Y_Position);
    dec(Player_Y_Position);
    JMP(PosJSpr);
}

int PosJSpr() {
    // <conv.chunks.Comment object at 0x1030ecb00>
    lda(Jumpspring_FixedYPos, x);
    clc();
    adc(offsetof(G, Jumpspring_Y_PosData), y);
    sta(Enemy_Y_Position, x);
    cpy(0x1);
    BCC(BounceJS);
    // <conv.chunks.Comment object at 0x1030ecd40>
    // <conv.chunks.Comment object at 0x1030ece90>
    // <conv.chunks.Comment object at 0x1030ecfe0>
    // <conv.chunks.Comment object at 0x1030ed070>
    lda(A_B_Buttons);
    anda(A_Button);
    BEQ(BounceJS);
    anda(PreviousA_B_Buttons);
    BNE(BounceJS);
    // <conv.chunks.Comment object at 0x1030ed310>
    // <conv.chunks.Comment object at 0x1030ed430>
    // <conv.chunks.Comment object at 0x1030ed550>
    // <conv.chunks.Comment object at 0x1030ed670>
    lda(0xf4);
    sta(JumpspringForce);
    JMP(BounceJS);
}

int BounceJS() {
    // <conv.chunks.Comment object at 0x1030ed7f0>
    // <conv.chunks.Comment object at 0x1030ed9a0>
    cpy(0x3);
    BNE(DrawJSpr);
    // <conv.chunks.Comment object at 0x1030eda60>
    lda(JumpspringForce);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x1030edd00>
    lda(0x0);
    sta(JumpspringAnimCtrl);
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // <conv.chunks.Comment object at 0x1030ede80>
    // <conv.chunks.Comment object at 0x1030ee030>
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda(JumpspringAnimCtrl);
    BEQ(ExJSpring);
    // <conv.chunks.Comment object at 0x1030ee180>
    // <conv.chunks.Comment object at 0x1030ee2a0>
    // <conv.chunks.Comment object at 0x1030ee3c0>
    // <conv.chunks.Comment object at 0x1030ee4e0>
    lda(JumpspringTimer);
    BNE(ExJSpring);
    // <conv.chunks.Comment object at 0x1030ee6f0>
    lda(0x4);
    sta(JumpspringTimer);
    inc(JumpspringAnimCtrl);
    JMP(ExJSpring);
}

int ExJSpring() {
    // <conv.chunks.Comment object at 0x1030ee870>
    // <conv.chunks.Comment object at 0x1030eea20>
    // <conv.chunks.Comment object at 0x1030eeb70>
    return 0;
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda(VineObject);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1030eecc0>
    // <conv.chunks.Comment object at 0x1030eede0>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1030eef90>
    lda(Block_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1030ef290>
    lda(Block_X_Position, y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1030ef500>
    lda(Block_Y_Position, y);
    sta(Enemy_Y_Position, x);
    ldy(VineFlagOffset);
    BNE(NextVO);
    sta(VineStart_Y_Position);
    JMP(NextVO);
}

int NextVO() {
    // <conv.chunks.Comment object at 0x1030ef770>
    // <conv.chunks.Comment object at 0x1030ef8c0>
    // <conv.chunks.Comment object at 0x1030ef9e0>
    // <conv.chunks.Comment object at 0x1030efb30>
    // <conv.chunks.Comment object at 0x1030efc50>
    txa();
    sta(VineObjOffset, y);
    inc(VineFlagOffset);
    // <conv.chunks.Comment object at 0x1030efd70>
    // <conv.chunks.Comment object at 0x1030efec0>
    lda(Sfx_GrowVine);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x1030f4110>
    return 0;
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(0x5);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x1030f43e0>
    // <conv.chunks.Comment object at 0x1030f4560>
    ldy(VineFlagOffset);
    dey();
    // <conv.chunks.Comment object at 0x1030f4860>
    lda(VineHeight);
    cmp(offsetof(G, VineHeightData), y);
    BEQ(RunVSubs);
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x1030f49e0>
    // <conv.chunks.Comment object at 0x1030f4b30>
    // <conv.chunks.Comment object at 0x1030f4c50>
    // <conv.chunks.Comment object at 0x1030f4da0>
    lsr();
    BCC(RunVSubs);
    // <conv.chunks.Comment object at 0x1030f4ec0>
    lda(((Enemy_Y_Position) + (5)));
    sbc(0x1);
    sta(((Enemy_Y_Position) + (5)));
    inc(VineHeight);
    JMP(RunVSubs);
}

int RunVSubs() {
    // <conv.chunks.Comment object at 0x1030f5190>
    // <conv.chunks.Comment object at 0x1030f5220>
    // <conv.chunks.Comment object at 0x1030f5490>
    // <conv.chunks.Comment object at 0x1030f55b0>
    lda(VineHeight);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x1030f5700>
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(0x0);
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // <conv.chunks.Comment object at 0x1030f5940>
    // <conv.chunks.Comment object at 0x1030f5a60>
    // <conv.chunks.Comment object at 0x1030f5b80>
    // <conv.chunks.Comment object at 0x1030f5c10>
    JSR(DrawVine);
    iny();
    cpy(VineFlagOffset);
    BNE(VDrawLoop);
    // <conv.chunks.Comment object at 0x1030f5e20>
    // <conv.chunks.Comment object at 0x1030f5eb0>
    // <conv.chunks.Comment object at 0x1030f5fd0>
    lda(Enemy_OffscreenBits);
    anda(0b1100);
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // <conv.chunks.Comment object at 0x1030f61e0>
    // <conv.chunks.Comment object at 0x1030f6300>
    // <conv.chunks.Comment object at 0x1030f6450>
    // <conv.chunks.Comment object at 0x1030f64e0>
    ldx(VineObjOffset, y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta(VineFlagOffset);
    sta(VineHeight);
    JMP(WrCMTile);
}

int WrCMTile() {
    // <conv.chunks.Comment object at 0x1030f6660>
    // <conv.chunks.Comment object at 0x1030f67b0>
    // <conv.chunks.Comment object at 0x1030f6840>
    // <conv.chunks.Comment object at 0x1030f6960>
    // <conv.chunks.Comment object at 0x1030f6a80>
    // <conv.chunks.Comment object at 0x1030f6ba0>
    lda(VineHeight);
    cmp(0x20);
    BCC(ExitVH);
    ldx(0x6);
    lda(0x1);
    ldy(0x1b);
    JSR(BlockBufferCollision);
    // <conv.chunks.Comment object at 0x1030f6cf0>
    // <conv.chunks.Comment object at 0x1030f6d80>
    // <conv.chunks.Comment object at 0x1030f6f60>
    // <conv.chunks.Comment object at 0x1030f6ff0>
    // <conv.chunks.Comment object at 0x1030f7110>
    // <conv.chunks.Comment object at 0x1030f7230>
    ldy(0x2);
    cpy(0xd0);
    BCS(ExitVH);
    lda((0x6), y);
    BNE(ExitVH);
    // <conv.chunks.Comment object at 0x1030f73e0>
    // <conv.chunks.Comment object at 0x1030f7560>
    // <conv.chunks.Comment object at 0x1030f7740>
    // <conv.chunks.Comment object at 0x1030f77a0>
    lda(0x26);
    sta((0x6), y);
    JMP(ExitVH);
}

int ExitVH() {
    // <conv.chunks.Comment object at 0x1030f7a70>
    // <conv.chunks.Comment object at 0x1030f7b60>
    ldx(ObjectOffset);
    return 0;
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda(AreaType);
    BEQ(ExCannon);
    // <conv.chunks.Comment object at 0x1030f7f20>
    // <conv.chunks.Comment object at 0x1031041a0>
    ldx(0x2);
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // <conv.chunks.Comment object at 0x103104320>
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
    // <conv.chunks.Comment object at 0x103105850>
    // <conv.chunks.Comment object at 0x103105970>
    // <conv.chunks.Comment object at 0x103105ac0>
    // <conv.chunks.Comment object at 0x103105b50>
    // <conv.chunks.Comment object at 0x103105d30>
    // <conv.chunks.Comment object at 0x103105e80>
    // <conv.chunks.Comment object at 0x103105fd0>
    // <conv.chunks.Comment object at 0x103106120>
    // <conv.chunks.Comment object at 0x103106270>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103106450>
    // <conv.chunks.Comment object at 0x1031064e0>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103106720>
    // <conv.chunks.Comment object at 0x103106900>
    // <conv.chunks.Comment object at 0x103106a80>
    // <conv.chunks.Comment object at 0x103106b10>
    lda(0x9);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x103106cc0>
    lda(BulletBill_CannonVar);
    sta(Enemy_ID, x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // <conv.chunks.Comment object at 0x103106f90>
    // <conv.chunks.Comment object at 0x1031070e0>
    // <conv.chunks.Comment object at 0x103107200>
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
    // <conv.chunks.Comment object at 0x1031074a0>
    // <conv.chunks.Comment object at 0x1031075c0>
    // <conv.chunks.Comment object at 0x1031076e0>
    // <conv.chunks.Comment object at 0x103107830>
    // <conv.chunks.Comment object at 0x103107950>
    // <conv.chunks.Comment object at 0x103107a70>
    // <conv.chunks.Comment object at 0x103107b90>
    dex();
    BPL(ThreeSChk);
    JMP(ExCannon);
}

int ExCannon() {
    // <conv.chunks.Comment object at 0x103107c80>
    // <conv.chunks.Comment object at 0x103107da0>
    return 0;
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda(TimerControl);
    BNE(RunBBSubs);
    // <conv.chunks.Comment object at 0x103107f50>
    // <conv.chunks.Comment object at 0x1031101a0>
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
    // <conv.chunks.Comment object at 0x1031103e0>
    // <conv.chunks.Comment object at 0x103110530>
    // <conv.chunks.Comment object at 0x103110650>
    // <conv.chunks.Comment object at 0x103110770>
    // <conv.chunks.Comment object at 0x103110890>
    // <conv.chunks.Comment object at 0x1031109e0>
    // <conv.chunks.Comment object at 0x103110a70>
    // <conv.chunks.Comment object at 0x103110c20>
    // <conv.chunks.Comment object at 0x103110da0>
    // <conv.chunks.Comment object at 0x103110e30>
    sty(Enemy_MovingDir, x);
    dey();
    lda(offsetof(G, BulletBillXSpdData), y);
    sta(Enemy_X_Speed, x);
    lda(0x0);
    adc(0x28);
    cmp(0x50);
    BCC(KillBB);
    // <conv.chunks.Comment object at 0x103111010>
    // <conv.chunks.Comment object at 0x1031110a0>
    // <conv.chunks.Comment object at 0x1031111f0>
    // <conv.chunks.Comment object at 0x103111370>
    // <conv.chunks.Comment object at 0x103111400>
    // <conv.chunks.Comment object at 0x1031114f0>
    // <conv.chunks.Comment object at 0x103111610>
    lda(0x1);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103111850>
    lda(0xa);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x103111a90>
    lda(Sfx_Blast);
    sta(Square2SoundQueue);
    JMP(ChkDSte);
}

int ChkDSte() {
    // <conv.chunks.Comment object at 0x103111d60>
    // <conv.chunks.Comment object at 0x103111e80>
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(BBFly);
    JSR(MoveD_EnemyVertically);
    JMP(BBFly);
}

int BBFly() {
    // <conv.chunks.Comment object at 0x103112120>
    // <conv.chunks.Comment object at 0x103112270>
    // <conv.chunks.Comment object at 0x103112390>
    JSR(MoveEnemyHorizontally);
    JMP(RunBBSubs);
}

int RunBBSubs() {
    // <conv.chunks.Comment object at 0x103112510>
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(EnemyGfxHandler);
    JMP(KillBB);
}

int KillBB() {
    // <conv.chunks.Comment object at 0x103112660>
    // <conv.chunks.Comment object at 0x103112780>
    // <conv.chunks.Comment object at 0x1031128a0>
    // <conv.chunks.Comment object at 0x1031129c0>
    // <conv.chunks.Comment object at 0x103112ae0>
    JSR(EraseEnemyObject);
    return 0;
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b111);
    BNE(SetMOfs);
    // <conv.chunks.Comment object at 0x103112d80>
    // <conv.chunks.Comment object at 0x1031135c0>
    // <conv.chunks.Comment object at 0x1031136e0>
    lda(((PseudoRandomBitReg) + (1)));
    anda(0b1000);
    JMP(SetMOfs);
}

int SetMOfs() {
    // <conv.chunks.Comment object at 0x1031139e0>
    // <conv.chunks.Comment object at 0x103113b00>
    tay();
    lda(Misc_State, y);
    BNE(NoHammer);
    ldx(offsetof(G, HammerEnemyOfsData), y);
    lda(Enemy_Flag, x);
    BNE(NoHammer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103113c20>
    // <conv.chunks.Comment object at 0x103113d70>
    // <conv.chunks.Comment object at 0x103113e90>
    // <conv.chunks.Comment object at 0x103113fe0>
    // <conv.chunks.Comment object at 0x103118170>
    // <conv.chunks.Comment object at 0x103118290>
    txa();
    sta(HammerEnemyOffset, y);
    // <conv.chunks.Comment object at 0x103118440>
    lda(0x90);
    sta(Misc_State, y);
    // <conv.chunks.Comment object at 0x1031185f0>
    lda(0x7);
    sta(Misc_BoundBoxCtrl, y);
    sec();
    // <conv.chunks.Comment object at 0x103118830>
    // <conv.chunks.Comment object at 0x103118a40>
    return 0;
    JMP(NoHammer);
}

int NoHammer() {
    // <conv.chunks.Comment object at 0x103118b60>
    ldx(ObjectOffset);
    clc();
    // <conv.chunks.Comment object at 0x103118ce0>
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
    // <conv.chunks.Comment object at 0x103118e30>
    // <conv.chunks.Comment object at 0x103118e90>
    // <conv.chunks.Comment object at 0x103118ef0>
    // <conv.chunks.Comment object at 0x103119010>
    // <conv.chunks.Comment object at 0x103119130>
    // <conv.chunks.Comment object at 0x103119280>
    // <conv.chunks.Comment object at 0x1031193a0>
    // <conv.chunks.Comment object at 0x1031194f0>
    // <conv.chunks.Comment object at 0x103119580>
    // <conv.chunks.Comment object at 0x103119760>
    txa();
    clc();
    adc(0xd);
    tax();
    // <conv.chunks.Comment object at 0x103119970>
    // <conv.chunks.Comment object at 0x103119a00>
    // <conv.chunks.Comment object at 0x103119b50>
    lda(0x10);
    sta(0x0);
    // <conv.chunks.Comment object at 0x103119d00>
    lda(0xf);
    sta(0x1);
    // <conv.chunks.Comment object at 0x103119f10>
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
    // <conv.chunks.Comment object at 0x10311a8a0>
    // <conv.chunks.Comment object at 0x10311aa80>
    // <conv.chunks.Comment object at 0x10311abd0>
    // <conv.chunks.Comment object at 0x10311acf0>
    // <conv.chunks.Comment object at 0x10311ae40>
    // <conv.chunks.Comment object at 0x10311afc0>
    // <conv.chunks.Comment object at 0x10311b050>
    // <conv.chunks.Comment object at 0x10311b1a0>
    // <conv.chunks.Comment object at 0x10311b2c0>
    // <conv.chunks.Comment object at 0x10311b410>
    dec(Misc_State, x);
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x10311b5c0>
    clc();
    adc(0x2);
    sta(Misc_X_Position, x);
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(Misc_PageLoc, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x10311b7a0>
    // <conv.chunks.Comment object at 0x10311b830>
    // <conv.chunks.Comment object at 0x10311ba10>
    // <conv.chunks.Comment object at 0x10311bb60>
    // <conv.chunks.Comment object at 0x10311bbf0>
    // <conv.chunks.Comment object at 0x10311bdd0>
    sec();
    sbc(0xa);
    sta(Misc_Y_Position, x);
    // <conv.chunks.Comment object at 0x10311bfb0>
    // <conv.chunks.Comment object at 0x103120080>
    lda(0x1);
    sta(Misc_Y_HighPos, x);
    BNE(RunHSubs);
    JMP(RunAllH);
}

int RunAllH() {
    // <conv.chunks.Comment object at 0x1031202c0>
    // <conv.chunks.Comment object at 0x1031204a0>
    // <conv.chunks.Comment object at 0x1031205c0>
    JSR(PlayerHammerCollision);
    JMP(RunHSubs);
}

int RunHSubs() {
    // <conv.chunks.Comment object at 0x103120740>
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
    // <conv.chunks.Comment object at 0x103121a30>
    // <conv.chunks.Comment object at 0x103121b50>
    // <conv.chunks.Comment object at 0x103121ca0>
    // <conv.chunks.Comment object at 0x103121e20>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x103121fd0>
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
    // <conv.chunks.Comment object at 0x103122840>
    lda(0x1);
    sta(Misc_Y_HighPos, y);
    sta(Misc_State, y);
    sta(Square2SoundQueue);
    stx(ObjectOffset);
    JSR(GiveOneCoin);
    inc(CoinTallyFor1Ups);
    // <conv.chunks.Comment object at 0x103122a80>
    // <conv.chunks.Comment object at 0x103122c60>
    // <conv.chunks.Comment object at 0x103122db0>
    // <conv.chunks.Comment object at 0x103122ed0>
    // <conv.chunks.Comment object at 0x103122ff0>
    // <conv.chunks.Comment object at 0x103123110>
    return 0;
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(0x8);
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // <conv.chunks.Comment object at 0x1031232f0>
    // <conv.chunks.Comment object at 0x103123380>
    lda(Misc_State, y);
    BEQ(UseMiscS);
    dey();
    cpy(0x5);
    BNE(FMiscLoop);
    ldy(0x8);
    JMP(UseMiscS);
}

int UseMiscS() {
    // <conv.chunks.Comment object at 0x103123590>
    // <conv.chunks.Comment object at 0x1031236e0>
    // <conv.chunks.Comment object at 0x103123770>
    // <conv.chunks.Comment object at 0x103123800>
    // <conv.chunks.Comment object at 0x1031239b0>
    // <conv.chunks.Comment object at 0x103123a40>
    sty(JumpCoinMiscOffset);
    return 0;
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(0x8);
    JMP(MiscLoop);
}

int MiscLoop() {
    // <conv.chunks.Comment object at 0x103123d10>
    // <conv.chunks.Comment object at 0x103123da0>
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
    // <conv.chunks.Comment object at 0x103123f80>
    // <conv.chunks.Comment object at 0x103130110>
    // <conv.chunks.Comment object at 0x103130260>
    // <conv.chunks.Comment object at 0x1031302f0>
    // <conv.chunks.Comment object at 0x103130410>
    // <conv.chunks.Comment object at 0x103130530>
    // <conv.chunks.Comment object at 0x103130680>
    // <conv.chunks.Comment object at 0x1031306e0>
    // <conv.chunks.Comment object at 0x103130740>
    // <conv.chunks.Comment object at 0x1031308c0>
    // <conv.chunks.Comment object at 0x103130950>
    // <conv.chunks.Comment object at 0x103130a70>
    // <conv.chunks.Comment object at 0x103130bc0>
    // <conv.chunks.Comment object at 0x103130d40>
    // <conv.chunks.Comment object at 0x103130dd0>
    // <conv.chunks.Comment object at 0x103130ef0>
    // <conv.chunks.Comment object at 0x103131040>
    // <conv.chunks.Comment object at 0x103131190>
    // <conv.chunks.Comment object at 0x103131220>
    lda(Misc_State, x);
    cmp(0x30);
    BNE(RunJCSubs);
    // <conv.chunks.Comment object at 0x103131520>
    // <conv.chunks.Comment object at 0x1031315b0>
    lda(0x0);
    sta(Misc_State, x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x103131bb0>
    adc(0xd);
    tax();
    lda(0x50);
    // <conv.chunks.Comment object at 0x103131dc0>
    sta(0x0);
    lda(0x6);
    // <conv.chunks.Comment object at 0x103131e50>
    sta(0x2);
    lsr();
    sta(0x1);
    lda(0x0);
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    lda(Misc_Y_Speed, x);
    // <conv.chunks.Comment object at 0x103132180>
    // <conv.chunks.Comment object at 0x1031322d0>
    // <conv.chunks.Comment object at 0x103132360>
    // <conv.chunks.Comment object at 0x103132450>
    // <conv.chunks.Comment object at 0x103132600>
    // <conv.chunks.Comment object at 0x103132720>
    cmp(0x5);
    BNE(RunJCSubs);
    inc(Misc_State, x);
    JMP(RunJCSubs);
}

int RunJCSubs() {
    // <conv.chunks.Comment object at 0x1031328d0>
    // <conv.chunks.Comment object at 0x103132a80>
    // <conv.chunks.Comment object at 0x103132bd0>
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
    // <conv.chunks.Comment object at 0x103133590>
    // <conv.chunks.Comment object at 0x103133830>
    // <conv.chunks.Comment object at 0x103133aa0>
    // <conv.chunks.Comment object at 0x103133bc0>
    // <conv.chunks.Comment object at 0x103133d10>
    // <conv.chunks.Comment object at 0x103133e30>
    lda(CoinTally);
    cmp(100);
    BNE(CoinPoints);
    // <conv.chunks.Comment object at 0x103138080>
    // <conv.chunks.Comment object at 0x103138110>
    lda(0x0);
    sta(CoinTally);
    inc(NumberofLives);
    // <conv.chunks.Comment object at 0x103138320>
    // <conv.chunks.Comment object at 0x1031384d0>
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
    // <conv.chunks.Comment object at 0x1031391c0>
    ldy(VRAM_Buffer1_Offset);
    lda(((VRAM_Buffer1) - (6)), y);
    BNE(NoZSup);
    // <conv.chunks.Comment object at 0x1031393d0>
    // <conv.chunks.Comment object at 0x1031395e0>
    lda(0x24);
    sta(((VRAM_Buffer1) - (6)), y);
    JMP(NoZSup);
}

int NoZSup() {
    // <conv.chunks.Comment object at 0x103139a00>
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
    // <conv.chunks.Comment object at 0x103139c70>
    // <conv.chunks.Comment object at 0x103139d90>
    // <conv.chunks.Comment object at 0x103139f70>
    // <conv.chunks.Comment object at 0x10313a0c0>
    // <conv.chunks.Comment object at 0x10313a2a0>
    // <conv.chunks.Comment object at 0x10313a3f0>
    lda(0x1);
    sta(((Enemy_Y_HighPos) + (5)));
    lda(Block_Y_Position, x);
    // <conv.chunks.Comment object at 0x10313a630>
    // <conv.chunks.Comment object at 0x10313a8a0>
    sec();
    sbc(0x8);
    sta(((Enemy_Y_Position) + (5)));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // <conv.chunks.Comment object at 0x10313aa80>
    // <conv.chunks.Comment object at 0x10313ab10>
    // <conv.chunks.Comment object at 0x10313ad80>
    lda(0x1);
    sta(((Enemy_State) + (5)));
    sta(((Enemy_Flag) + (5)));
    // <conv.chunks.Comment object at 0x10313ae40>
    // <conv.chunks.Comment object at 0x10313b0b0>
    lda(0x3);
    sta(((Enemy_BoundBoxCtrl) + (5)));
    // <conv.chunks.Comment object at 0x10313b2f0>
    lda(PowerUpType);
    cmp(0x2);
    BCS(PutBehind);
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x10313b650>
    // <conv.chunks.Comment object at 0x10313b6e0>
    // <conv.chunks.Comment object at 0x10313b890>
    cmp(0x2);
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // <conv.chunks.Comment object at 0x10313ba10>
    // <conv.chunks.Comment object at 0x10313bc20>
    // <conv.chunks.Comment object at 0x10313bcb0>
    sta(PowerUpType);
    JMP(PutBehind);
}

int PutBehind() {
    lda(0b100000);
    sta(((Enemy_SprAttrib) + (5)));
    // <conv.chunks.Comment object at 0x10313bf50>
    lda(Sfx_GrowPowerUp);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x103140260>
    return 0;
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(0x5);
    // <conv.chunks.Comment object at 0x103140470>
    stx(ObjectOffset);
    lda(((Enemy_State) + (5)));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda(TimerControl);
    BNE(RunPUSubs);
    lda(PowerUpType);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x103140680>
    // <conv.chunks.Comment object at 0x103140860>
    // <conv.chunks.Comment object at 0x1031409e0>
    // <conv.chunks.Comment object at 0x103140a70>
    // <conv.chunks.Comment object at 0x103140b90>
    // <conv.chunks.Comment object at 0x103140cb0>
    // <conv.chunks.Comment object at 0x103140dd0>
    // <conv.chunks.Comment object at 0x103140ef0>
    cmp(0x3);
    BEQ(ShroomM);
    // <conv.chunks.Comment object at 0x1031410a0>
    cmp(0x2);
    BNE(RunPUSubs);
    JSR(MoveJumpingEnemy);
    JSR(EnemyJump);
    JMP(RunPUSubs);
    JMP(ShroomM);
}

int ShroomM() {
    // <conv.chunks.Comment object at 0x1031412e0>
    // <conv.chunks.Comment object at 0x103141490>
    // <conv.chunks.Comment object at 0x1031415b0>
    // <conv.chunks.Comment object at 0x1031416d0>
    // <conv.chunks.Comment object at 0x1031417f0>
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
    // <conv.chunks.Comment object at 0x103141be0>
    // <conv.chunks.Comment object at 0x103141d00>
    // <conv.chunks.Comment object at 0x103141d90>
    // <conv.chunks.Comment object at 0x103141f40>
    // <conv.chunks.Comment object at 0x103142120>
    // <conv.chunks.Comment object at 0x103142300>
    // <conv.chunks.Comment object at 0x1031424e0>
    // <conv.chunks.Comment object at 0x103142570>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x103142780>
    lda(0b10000000);
    sta(((Enemy_State) + (5)));
    asl();
    sta(((Enemy_SprAttrib) + (5)));
    rol();
    sta(Enemy_MovingDir, x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // <conv.chunks.Comment object at 0x103142a50>
    // <conv.chunks.Comment object at 0x103142c60>
    // <conv.chunks.Comment object at 0x103142cf0>
    // <conv.chunks.Comment object at 0x103142f00>
    // <conv.chunks.Comment object at 0x103142f90>
    // <conv.chunks.Comment object at 0x1031430e0>
    lda(((Enemy_State) + (5)));
    cmp(0x6);
    BCC(ExitPUp);
    JMP(RunPUSubs);
}

int RunPUSubs() {
    // <conv.chunks.Comment object at 0x1031432f0>
    // <conv.chunks.Comment object at 0x103143380>
    // <conv.chunks.Comment object at 0x103143560>
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    JSR(GetEnemyBoundBox);
    JSR(DrawPowerUp);
    JSR(PlayerEnemyCollision);
    JSR(OffscreenBoundsCheck);
    JMP(ExitPUp);
}

int ExitPUp() {
    // <conv.chunks.Comment object at 0x1031436b0>
    // <conv.chunks.Comment object at 0x1031437d0>
    // <conv.chunks.Comment object at 0x1031438f0>
    // <conv.chunks.Comment object at 0x103143a10>
    // <conv.chunks.Comment object at 0x103143b30>
    // <conv.chunks.Comment object at 0x103143c50>
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
    // <conv.chunks.Comment object at 0x103143ec0>
    // <conv.chunks.Comment object at 0x10314c110>
    // <conv.chunks.Comment object at 0x10314c1a0>
    // <conv.chunks.Comment object at 0x10314c350>
    // <conv.chunks.Comment object at 0x10314c470>
    // <conv.chunks.Comment object at 0x10314c590>
    // <conv.chunks.Comment object at 0x10314c620>
    sta(Block_State, x);
    JSR(DestroyBlockMetatile);
    ldx(SprDataOffset_Ctrl);
    lda(0x2);
    sta(Block_Orig_YPos, x);
    // <conv.chunks.Comment object at 0x10314c830>
    // <conv.chunks.Comment object at 0x10314c950>
    // <conv.chunks.Comment object at 0x10314caa0>
    // <conv.chunks.Comment object at 0x10314cb30>
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
    // <conv.chunks.Comment object at 0x10314cda0>
    // <conv.chunks.Comment object at 0x10314ce30>
    // <conv.chunks.Comment object at 0x10314cfe0>
    // <conv.chunks.Comment object at 0x10314d040>
    // <conv.chunks.Comment object at 0x10314d2b0>
    // <conv.chunks.Comment object at 0x10314d340>
    // <conv.chunks.Comment object at 0x10314d4c0>
    // <conv.chunks.Comment object at 0x10314d610>
    // <conv.chunks.Comment object at 0x10314d6a0>
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
    // <conv.chunks.Comment object at 0x10314d7f0>
    // <conv.chunks.Comment object at 0x10314d880>
    // <conv.chunks.Comment object at 0x10314da60>
    // <conv.chunks.Comment object at 0x10314dbb0>
    // <conv.chunks.Comment object at 0x10314dc40>
    // <conv.chunks.Comment object at 0x10314dd30>
    // <conv.chunks.Comment object at 0x10314dee0>
    // <conv.chunks.Comment object at 0x10314df70>
    // <conv.chunks.Comment object at 0x10314e120>
    lda(BrickCoinTimerFlag);
    BNE(ContBTmr);
    // <conv.chunks.Comment object at 0x10314e270>
    lda(0xb);
    sta(BrickCoinTimer);
    inc(BrickCoinTimerFlag);
    JMP(ContBTmr);
}

int ContBTmr() {
    // <conv.chunks.Comment object at 0x10314e3f0>
    // <conv.chunks.Comment object at 0x10314e5a0>
    // <conv.chunks.Comment object at 0x10314e6c0>
    lda(BrickCoinTimer);
    BNE(PutOldMT);
    ldy(0xc4);
    JMP(PutOldMT);
}

int PutOldMT() {
    // <conv.chunks.Comment object at 0x10314e810>
    // <conv.chunks.Comment object at 0x10314e930>
    // <conv.chunks.Comment object at 0x10314e9c0>
    tya();
    JMP(PutMTileB);
}

int PutMTileB() {
    // <conv.chunks.Comment object at 0x10314eb40>
    sta(Block_Metatile, x);
    JSR(InitBlock_XY_Pos);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x10314ecc0>
    // <conv.chunks.Comment object at 0x10314ee10>
    lda(0x23);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x10314ef60>
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
    // <conv.chunks.Comment object at 0x10314f1d0>
    // <conv.chunks.Comment object at 0x10314f3b0>
    // <conv.chunks.Comment object at 0x10314f470>
    // <conv.chunks.Comment object at 0x10314f500>
    // <conv.chunks.Comment object at 0x10314f5f0>
    // <conv.chunks.Comment object at 0x10314f7a0>
    // <conv.chunks.Comment object at 0x10314f8f0>
    // <conv.chunks.Comment object at 0x10314fa10>
    // <conv.chunks.Comment object at 0x10314fb60>
    iny();
    JMP(BigBP);
}

int BigBP() {
    // <conv.chunks.Comment object at 0x10314fc80>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, BlockYPosAdderData), y);
    anda(0xf0);
    sta(Block_Y_Position, x);
    ldy(Block_State, x);
    // <conv.chunks.Comment object at 0x10314fe90>
    // <conv.chunks.Comment object at 0x10314ffe0>
    // <conv.chunks.Comment object at 0x10315c0b0>
    // <conv.chunks.Comment object at 0x10315c290>
    cpy(0x11);
    BEQ(Unbreak);
    JSR(BrickShatter);
    JMP(InvOBit);
    JMP(Unbreak);
}

int Unbreak() {
    // <conv.chunks.Comment object at 0x10315c440>
    // <conv.chunks.Comment object at 0x10315c620>
    // <conv.chunks.Comment object at 0x10315c740>
    // <conv.chunks.Comment object at 0x10315c890>
    JSR(BumpBlock);
    JMP(InvOBit);
}

int InvOBit() {
    // <conv.chunks.Comment object at 0x10315ca10>
    lda(SprDataOffset_Ctrl);
    eor(0x1);
    // <conv.chunks.Comment object at 0x10315cb90>
    sta(SprDataOffset_Ctrl);
    return 0;
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x10315cef0>
    clc();
    adc(0x8);
    anda(0xf0);
    sta(Block_X_Position, x);
    // <conv.chunks.Comment object at 0x10315d0a0>
    // <conv.chunks.Comment object at 0x10315d130>
    // <conv.chunks.Comment object at 0x10315d250>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Block_PageLoc, x);
    sta(Block_PageLoc2, x);
    // <conv.chunks.Comment object at 0x10315d520>
    // <conv.chunks.Comment object at 0x10315d5b0>
    // <conv.chunks.Comment object at 0x10315d790>
    lda(Player_Y_HighPos);
    sta(Block_Y_HighPos, x);
    return 0;
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x10315dc40>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x10315de50>
    lda(0x0);
    sta(Block_X_Speed, x);
    sta(Block_Y_MoveForce, x);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x10315dfd0>
    // <conv.chunks.Comment object at 0x10315e1b0>
    // <conv.chunks.Comment object at 0x10315e300>
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
    // <conv.chunks.Comment object at 0x10315f860>
    // <conv.chunks.Comment object at 0x10315fa10>
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
    // <conv.chunks.Comment object at 0x1031684d0>
    // <conv.chunks.Comment object at 0x103168530>
    cmp(offsetof(G, BrickQBlockMetatiles), y);
    BEQ(MatchBump);
    dey();
    BPL(BumpChkLoop);
    clc();
    JMP(MatchBump);
}

int MatchBump() {
    // <conv.chunks.Comment object at 0x103168cb0>
    // <conv.chunks.Comment object at 0x103168e00>
    // <conv.chunks.Comment object at 0x103168e90>
    // <conv.chunks.Comment object at 0x103168fe0>
    // <conv.chunks.Comment object at 0x103169070>
    return 0;
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // <conv.chunks.Comment object at 0x1031691c0>
    lda(Sfx_BrickShatter);
    sta(Block_RepFlag, x);
    sta(NoiseSoundQueue);
    JSR(SpawnBrickChunks);
    // <conv.chunks.Comment object at 0x1031693d0>
    // <conv.chunks.Comment object at 0x103169520>
    // <conv.chunks.Comment object at 0x103169640>
    lda(0xfe);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x1031697c0>
    lda(0x5);
    sta(((DigitModifier) + (5)));
    JSR(AddToScore);
    ldx(SprDataOffset_Ctrl);
    // <conv.chunks.Comment object at 0x1031699d0>
    // <conv.chunks.Comment object at 0x103169c40>
    // <conv.chunks.Comment object at 0x103169d60>
    return 0;
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx(SprDataOffset_Ctrl);
    ldy(0x2);
    BEQ(TopEx);
    tya();
    // <conv.chunks.Comment object at 0x103169f70>
    // <conv.chunks.Comment object at 0x10316a0c0>
    // <conv.chunks.Comment object at 0x10316a150>
    // <conv.chunks.Comment object at 0x10316a330>
    sec();
    sbc(0x10);
    sta(0x2);
    // <conv.chunks.Comment object at 0x10316a450>
    // <conv.chunks.Comment object at 0x10316a5a0>
    tay();
    lda((0x6), y);
    cmp(0xc2);
    BNE(TopEx);
    // <conv.chunks.Comment object at 0x10316a720>
    // <conv.chunks.Comment object at 0x10316a780>
    // <conv.chunks.Comment object at 0x10316a930>
    lda(0x0);
    sta((0x6), y);
    JSR(RemoveCoin_Axe);
    ldx(SprDataOffset_Ctrl);
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // <conv.chunks.Comment object at 0x10316ab70>
    // <conv.chunks.Comment object at 0x10316ac60>
    // <conv.chunks.Comment object at 0x10316aea0>
    // <conv.chunks.Comment object at 0x10316afc0>
    // <conv.chunks.Comment object at 0x10316b110>
    return 0;
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda(Block_X_Position, x);
    sta(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x10316b290>
    // <conv.chunks.Comment object at 0x10316b3e0>
    lda(0xf0);
    sta(Block_X_Speed, x);
    // <conv.chunks.Comment object at 0x10316b590>
    sta(((Block_X_Speed) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10316b9b0>
    lda(0xfc);
    sta(((Block_Y_Speed) + (2)), x);
    // <conv.chunks.Comment object at 0x10316bbf0>
    lda(0x0);
    sta(Block_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x10316bef0>
    sta(((Block_Y_MoveForce) + (2)), x);
    lda(Block_PageLoc, x);
    sta(((Block_PageLoc) + (2)), x);
    // <conv.chunks.Comment object at 0x103178410>
    lda(Block_X_Position, x);
    sta(((Block_X_Position) + (2)), x);
    // <conv.chunks.Comment object at 0x103178740>
    lda(Block_Y_Position, x);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x103178aa0>
    // <conv.chunks.Comment object at 0x103178b30>
    sta(((Block_Y_Position) + (2)), x);
    lda(0xfa);
    sta(Block_Y_Speed, x);
    // <conv.chunks.Comment object at 0x103178e90>
    return 0;
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda(Block_State, x);
    BEQ(UpdSte);
    anda(0xf);
    pha();
    tay();
    // <conv.chunks.Comment object at 0x103179160>
    // <conv.chunks.Comment object at 0x1031792b0>
    // <conv.chunks.Comment object at 0x103179400>
    // <conv.chunks.Comment object at 0x103179550>
    // <conv.chunks.Comment object at 0x103179610>
    txa();
    clc();
    adc(0x9);
    tax();
    dey();
    BEQ(BouncingBlockHandler);
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    // <conv.chunks.Comment object at 0x1031797c0>
    // <conv.chunks.Comment object at 0x103179910>
    // <conv.chunks.Comment object at 0x1031799d0>
    // <conv.chunks.Comment object at 0x103179a60>
    // <conv.chunks.Comment object at 0x103179b80>
    // <conv.chunks.Comment object at 0x103179ca0>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x103179e80>
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
    // <conv.chunks.Comment object at 0x10317a090>
    // <conv.chunks.Comment object at 0x10317a1b0>
    // <conv.chunks.Comment object at 0x10317a2d0>
    // <conv.chunks.Comment object at 0x10317a3f0>
    // <conv.chunks.Comment object at 0x10317a510>
    // <conv.chunks.Comment object at 0x10317a630>
    // <conv.chunks.Comment object at 0x10317a780>
    // <conv.chunks.Comment object at 0x10317a810>
    // <conv.chunks.Comment object at 0x10317a960>
    // <conv.chunks.Comment object at 0x10317aae0>
    lda(0xf0);
    cmp(((Block_Y_Position) + (2)), x);
    BCS(ChkTop);
    sta(((Block_Y_Position) + (2)), x);
    JMP(ChkTop);
}

int ChkTop() {
    // <conv.chunks.Comment object at 0x10317abd0>
    // <conv.chunks.Comment object at 0x10317ae70>
    // <conv.chunks.Comment object at 0x10317afc0>
    // <conv.chunks.Comment object at 0x10317b1d0>
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
    // <conv.chunks.Comment object at 0x10317b800>
    // <conv.chunks.Comment object at 0x10317b920>
    // <conv.chunks.Comment object at 0x10317ba40>
    // <conv.chunks.Comment object at 0x10317bb60>
    // <conv.chunks.Comment object at 0x10317bc80>
    // <conv.chunks.Comment object at 0x10317bda0>
    // <conv.chunks.Comment object at 0x10317bef0>
    // <conv.chunks.Comment object at 0x10317bf80>
    // <conv.chunks.Comment object at 0x1031801a0>
    // <conv.chunks.Comment object at 0x103180230>
    lda(0x1);
    sta(Block_RepFlag, x);
    JMP(KillBlock);
}

int KillBlock() {
    // <conv.chunks.Comment object at 0x1031803e0>
    // <conv.chunks.Comment object at 0x1031805c0>
    lda(0x0);
    JMP(UpdSte);
}

int UpdSte() {
    // <conv.chunks.Comment object at 0x103180680>
    sta(Block_State, x);
    return 0;
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(0x1);
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // <conv.chunks.Comment object at 0x103180a10>
    // <conv.chunks.Comment object at 0x103180aa0>
    stx(ObjectOffset);
    lda(VRAM_Buffer1);
    BNE(NextBUpd);
    lda(Block_RepFlag, x);
    BEQ(NextBUpd);
    lda(Block_BBuf_Low, x);
    sta(0x6);
    // <conv.chunks.Comment object at 0x103180c80>
    // <conv.chunks.Comment object at 0x103180da0>
    // <conv.chunks.Comment object at 0x103180ec0>
    // <conv.chunks.Comment object at 0x103181010>
    // <conv.chunks.Comment object at 0x103181130>
    // <conv.chunks.Comment object at 0x1031812b0>
    lda(0x5);
    sta(0x7);
    lda(Block_Orig_YPos, x);
    sta(0x2);
    // <conv.chunks.Comment object at 0x1031814c0>
    // <conv.chunks.Comment object at 0x103181550>
    // <conv.chunks.Comment object at 0x103181730>
    tay();
    lda(Block_Metatile, x);
    sta((0x6), y);
    JSR(ReplaceBlockMetatile);
    // <conv.chunks.Comment object at 0x1031818b0>
    // <conv.chunks.Comment object at 0x103181a00>
    // <conv.chunks.Comment object at 0x103181a60>
    lda(0x0);
    sta(Block_RepFlag, x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // <conv.chunks.Comment object at 0x103181d00>
    // <conv.chunks.Comment object at 0x103181ee0>
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
    // <conv.chunks.Comment object at 0x1031829f0>
    // <conv.chunks.Comment object at 0x103182b70>
    // <conv.chunks.Comment object at 0x103182c30>
    asl();
    asl();
    sta(0x1);
    lda(SprObject_X_Speed, x);
    lsr();
    // <conv.chunks.Comment object at 0x103182e10>
    // <conv.chunks.Comment object at 0x103182ea0>
    // <conv.chunks.Comment object at 0x103183080>
    lsr();
    lsr();
    lsr();
    cmp(0x8);
    // <conv.chunks.Comment object at 0x1031832c0>
    BCC(SaveXSpd);
    ora(0b11110000);
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // <conv.chunks.Comment object at 0x1031834d0>
    // <conv.chunks.Comment object at 0x1031835f0>
    sta(0x0);
    ldy(0x0);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x1031836e0>
    // <conv.chunks.Comment object at 0x1031837d0>
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // <conv.chunks.Comment object at 0x103183aa0>
    // <conv.chunks.Comment object at 0x103183b30>
    sty(0x2);
    lda(SprObject_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x103183c20>
    clc();
    adc(0x1);
    sta(SprObject_X_MoveForce, x);
    lda(0x0);
    rol();
    pha();
    ror();
    // <conv.chunks.Comment object at 0x103183e90>
    // <conv.chunks.Comment object at 0x103183f20>
    // <conv.chunks.Comment object at 0x103188140>
    // <conv.chunks.Comment object at 0x103188290>
    // <conv.chunks.Comment object at 0x103188350>
    // <conv.chunks.Comment object at 0x103188410>
    lda(SprObject_X_Position, x);
    adc(0x0);
    sta(SprObject_X_Position, x);
    // <conv.chunks.Comment object at 0x1031885f0>
    // <conv.chunks.Comment object at 0x103188680>
    lda(SprObject_PageLoc, x);
    adc(0x2);
    sta(SprObject_PageLoc, x);
    // <conv.chunks.Comment object at 0x103188980>
    // <conv.chunks.Comment object at 0x103188a10>
    pla();
    clc();
    adc(0x0);
    JMP(ExXMove);
}

int ExXMove() {
    // <conv.chunks.Comment object at 0x103188c80>
    // <conv.chunks.Comment object at 0x103188d40>
    // <conv.chunks.Comment object at 0x103188dd0>
    return 0;
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x103188f80>
    // <conv.chunks.Comment object at 0x103188fe0>
    // <conv.chunks.Comment object at 0x103189040>
    lda(TimerControl);
    BNE(NoJSChk);
    lda(JumpspringAnimCtrl);
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // <conv.chunks.Comment object at 0x103189250>
    // <conv.chunks.Comment object at 0x1031893a0>
    // <conv.chunks.Comment object at 0x1031894c0>
    // <conv.chunks.Comment object at 0x103189610>
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
    // <conv.chunks.Comment object at 0x10318a000>
    // <conv.chunks.Comment object at 0x10318a090>
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
    // <conv.chunks.Comment object at 0x10318a6c0>
    lda(0x3);
    sta(0x0);
    // <conv.chunks.Comment object at 0x10318a870>
    lda(0x6);
    sta(0x1);
    // <conv.chunks.Comment object at 0x10318aa80>
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
    // <conv.chunks.Comment object at 0x10318b230>
    // <conv.chunks.Comment object at 0x10318b2c0>
    lda(0x2);
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(0x1c);
    JMP(SetHiMax);
}

int SetHiMax() {
    // <conv.chunks.Comment object at 0x10318b620>
    // <conv.chunks.Comment object at 0x10318b6b0>
    lda(0x3);
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // <conv.chunks.Comment object at 0x10318b800>
    sty(0x0);
    inx();
    JSR(ImposeGravitySprObj);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10318b8c0>
    // <conv.chunks.Comment object at 0x10318baa0>
    // <conv.chunks.Comment object at 0x10318bbc0>
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
    // <conv.chunks.Comment object at 0x103198140>
    // <conv.chunks.Comment object at 0x103198200>
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
    // <conv.chunks.Comment object at 0x103198b90>
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
    // <conv.chunks.Comment object at 0x103198da0>
    // <conv.chunks.Comment object at 0x103198f20>
    // <conv.chunks.Comment object at 0x103198fb0>
    // <conv.chunks.Comment object at 0x103199040>
    // <conv.chunks.Comment object at 0x103199160>
    // <conv.chunks.Comment object at 0x103199310>
    // <conv.chunks.Comment object at 0x1031993a0>
    sta(0x0);
    lda(0xa);
    // <conv.chunks.Comment object at 0x103199520>
    sta(0x1);
    lda(0x3);
    // <conv.chunks.Comment object at 0x103199610>
    sta(0x2);
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103199b50>
    // <conv.chunks.Comment object at 0x103199c70>
    return 0;
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // <conv.chunks.Comment object at 0x103199e50>
    // <conv.chunks.Comment object at 0x103199eb0>
    // <conv.chunks.Comment object at 0x103199f40>
    lda(SprObject_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x10319a120>
    adc(SprObject_Y_MoveForce, x);
    sta(SprObject_YMF_Dummy, x);
    ldy(0x0);
    lda(SprObject_Y_Speed, x);
    BPL(AlterYP);
    dey();
    JMP(AlterYP);
}

int AlterYP() {
    // <conv.chunks.Comment object at 0x10319a3f0>
    // <conv.chunks.Comment object at 0x10319a480>
    // <conv.chunks.Comment object at 0x10319a660>
    // <conv.chunks.Comment object at 0x10319a7e0>
    // <conv.chunks.Comment object at 0x10319a870>
    sty(0x7);
    adc(SprObject_Y_Position, x);
    sta(SprObject_Y_Position, x);
    // <conv.chunks.Comment object at 0x10319a990>
    // <conv.chunks.Comment object at 0x10319ab40>
    lda(SprObject_Y_HighPos, x);
    adc(0x7);
    sta(SprObject_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x10319ade0>
    // <conv.chunks.Comment object at 0x10319ae70>
    lda(SprObject_Y_MoveForce, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x10319b200>
    sta(SprObject_Y_MoveForce, x);
    lda(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10319b410>
    adc(0x0);
    sta(SprObject_Y_Speed, x);
    cmp(0x2);
    BMI(ChkUpM);
    // <conv.chunks.Comment object at 0x10319b7a0>
    // <conv.chunks.Comment object at 0x10319b830>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    // <conv.chunks.Comment object at 0x10319bb00>
    BCC(ChkUpM);
    lda(0x2);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10319bd40>
    lda(0x0);
    sta(SprObject_Y_MoveForce, x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // <conv.chunks.Comment object at 0x10319bfe0>
    // <conv.chunks.Comment object at 0x1037e0200>
    pla();
    BEQ(ExVMove);
    // <conv.chunks.Comment object at 0x1037e0320>
    lda(0x2);
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x1037e0470>
    tay();
    iny();
    sty(0x7);
    // <conv.chunks.Comment object at 0x1037e07d0>
    lda(SprObject_Y_MoveForce, x);
    sec();
    sbc(0x1);
    sta(SprObject_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1037e0a10>
    // <conv.chunks.Comment object at 0x1037e0ad0>
    // <conv.chunks.Comment object at 0x1037e0b60>
    lda(SprObject_Y_Speed, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x1037e0e30>
    sta(SprObject_Y_Speed, x);
    cmp(0x7);
    BPL(ExVMove);
    // <conv.chunks.Comment object at 0x1037e10a0>
    // <conv.chunks.Comment object at 0x1037e1130>
    lda(SprObject_Y_MoveForce, x);
    cmp(0x80);
    BCS(ExVMove);
    // <conv.chunks.Comment object at 0x1037e1400>
    // <conv.chunks.Comment object at 0x1037e1490>
    lda(0x7);
    sta(SprObject_Y_Speed, x);
    // <conv.chunks.Comment object at 0x1037e1670>
    lda(0xff);
    sta(SprObject_Y_MoveForce, x);
    JMP(ExVMove);
}

int ExVMove() {
    // <conv.chunks.Comment object at 0x1037e1910>
    // <conv.chunks.Comment object at 0x1037e1b20>
    return 0;
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda(Enemy_Flag, x);
    pha();
    // <conv.chunks.Comment object at 0x1037e1ca0>
    // <conv.chunks.Comment object at 0x1037e1e20>
    asl();
    BCS(ChkBowserF);
    pla();
    BEQ(ChkAreaTsk);
    JMP(RunEnemyObjectsCore);
    JMP(ChkAreaTsk);
}

int ChkAreaTsk() {
    // <conv.chunks.Comment object at 0x1037e1f40>
    // <conv.chunks.Comment object at 0x1037e2090>
    // <conv.chunks.Comment object at 0x1037e2120>
    // <conv.chunks.Comment object at 0x1037e2240>
    // <conv.chunks.Comment object at 0x1037e2360>
    lda(AreaParserTaskNum);
    anda(0x7);
    cmp(0x7);
    // <conv.chunks.Comment object at 0x1037e2510>
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // <conv.chunks.Comment object at 0x1037e27b0>
    // <conv.chunks.Comment object at 0x1037e28d0>
    pla();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1037e29c0>
    tay();
    lda(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x1037e2b70>
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
    // <conv.chunks.Comment object at 0x1037e3170>
    sec();
    sbc(0x4);
    sta(Player_PageLoc);
    lda(CurrentPageLoc);
    // <conv.chunks.Comment object at 0x1037e8740>
    sec();
    sbc(0x4);
    sta(CurrentPageLoc);
    lda(ScreenLeft_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x1037e8ad0>
    // <conv.chunks.Comment object at 0x1037e8c20>
    sbc(0x4);
    sta(ScreenLeft_PageLoc);
    lda(ScreenRight_PageLoc);
    sec();
    // <conv.chunks.Comment object at 0x1037e8e90>
    // <conv.chunks.Comment object at 0x1037e8fe0>
    sbc(0x4);
    sta(ScreenRight_PageLoc);
    lda(AreaObjectPageLoc);
    sec();
    // <conv.chunks.Comment object at 0x1037e9250>
    // <conv.chunks.Comment object at 0x1037e93a0>
    sbc(0x4);
    sta(AreaObjectPageLoc);
    lda(0x0);
    sta(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x1037e9610>
    // <conv.chunks.Comment object at 0x1037e96a0>
    sta(AreaObjectPageSel);
    sta(EnemyDataOffset);
    sta(EnemyObjectPageLoc);
    lda(offsetof(G, AreaDataOfsLoopback), y);
    sta(AreaDataOffset);
    // <conv.chunks.Comment object at 0x1037e9940>
    // <conv.chunks.Comment object at 0x1037e9a60>
    // <conv.chunks.Comment object at 0x1037e9b80>
    // <conv.chunks.Comment object at 0x1037e9cd0>
    return 0;
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda(LoopCommand);
    // <conv.chunks.Comment object at 0x1037e9eb0>
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
    // <conv.chunks.Comment object at 0x1037ea4e0>
    // <conv.chunks.Comment object at 0x1037ea600>
    // <conv.chunks.Comment object at 0x1037ea720>
    BNE(FindLoop);
    lda(CurrentPageLoc);
    cmp(offsetof(G, LoopCmdPageNumber), y);
    // <conv.chunks.Comment object at 0x1037ea960>
    // <conv.chunks.Comment object at 0x1037eaa80>
    BNE(FindLoop);
    lda(Player_Y_Position);
    cmp(offsetof(G, LoopCmdYPosition), y);
    // <conv.chunks.Comment object at 0x1037eacc0>
    // <conv.chunks.Comment object at 0x1037eade0>
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
    // <conv.chunks.Comment object at 0x1037eb020>
    // <conv.chunks.Comment object at 0x1037eb140>
    // <conv.chunks.Comment object at 0x1037eb1d0>
    // <conv.chunks.Comment object at 0x1037eb380>
    // <conv.chunks.Comment object at 0x1037eb4a0>
    // <conv.chunks.Comment object at 0x1037eb500>
    // <conv.chunks.Comment object at 0x1037eb740>
    // <conv.chunks.Comment object at 0x1037eb860>
    inc(MultiLoopPassCntr);
    lda(MultiLoopPassCntr);
    // <conv.chunks.Comment object at 0x1037eb9b0>
    cmp(0x3);
    BNE(InitLCmd);
    lda(MultiLoopCorrectCntr);
    // <conv.chunks.Comment object at 0x1037ebb30>
    // <conv.chunks.Comment object at 0x1037ebce0>
    cmp(0x3);
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // <conv.chunks.Comment object at 0x1037ebe60>
    // <conv.chunks.Comment object at 0x1037f4080>
    // <conv.chunks.Comment object at 0x1037f41a0>
    lda(WorldNumber);
    cmp(World7);
    // <conv.chunks.Comment object at 0x1037f42f0>
    BEQ(IncMLoop);
    JMP(DoLpBack);
}

int DoLpBack() {
    // <conv.chunks.Comment object at 0x1037f4530>
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
    JMP(InitMLp);
}

int InitMLp() {
    // <conv.chunks.Comment object at 0x1037f4770>
    lda(0x0);
    sta(MultiLoopPassCntr);
    sta(MultiLoopCorrectCntr);
    JMP(InitLCmd);
}

int InitLCmd() {
    // <conv.chunks.Comment object at 0x1037f4ad0>
    lda(0x0);
    sta(LoopCommand);
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda(EnemyFrenzyQueue);
    BEQ(ProcessEnemyData);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1037f4d70>
    // <conv.chunks.Comment object at 0x1037f4e90>
    // <conv.chunks.Comment object at 0x1037f4fb0>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1037f5160>
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1037f53a0>
    sta(EnemyFrenzyQueue);
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy(EnemyDataOffset);
    lda((EnemyData), y);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x1037f5850>
    // <conv.chunks.Comment object at 0x1037f5970>
    // <conv.chunks.Comment object at 0x1037f5af0>
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(0b1111);
    // <conv.chunks.Comment object at 0x1037f5e50>
    cmp(0xe);
    BEQ(CheckRightBounds);
    cpx(0x5);
    BCC(CheckRightBounds);
    // <conv.chunks.Comment object at 0x1037f5fd0>
    // <conv.chunks.Comment object at 0x1037f6180>
    // <conv.chunks.Comment object at 0x1037f6210>
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
    // <conv.chunks.Comment object at 0x1037f6a20>
    clc();
    adc(0x30);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x1037f6c30>
    sta(0x7);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x1037f6de0>
    adc(0x0);
    sta(0x6);
    // <conv.chunks.Comment object at 0x1037f7110>
    ldy(EnemyDataOffset);
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1037f7380>
    asl();
    BCC(CheckPageCtrlRow);
    lda(EnemyObjectPageSel);
    // <conv.chunks.Comment object at 0x1037f7680>
    BNE(CheckPageCtrlRow);
    inc(EnemyObjectPageSel);
    inc(EnemyObjectPageLoc);
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1037f7b90>
    anda(0xf);
    cmp(0xf);
    BNE(PositionEnemyObj);
    lda(EnemyObjectPageSel);
    BNE(PositionEnemyObj);
    // <conv.chunks.Comment object at 0x1037f7d70>
    // <conv.chunks.Comment object at 0x1037f7e90>
    // <conv.chunks.Comment object at 0x1037fc080>
    // <conv.chunks.Comment object at 0x1037fc1a0>
    iny();
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1037fc350>
    anda(0b111111);
    sta(EnemyObjectPageLoc);
    inc(EnemyDataOffset);
    // <conv.chunks.Comment object at 0x1037fc5c0>
    // <conv.chunks.Comment object at 0x1037fc6e0>
    inc(EnemyDataOffset);
    inc(EnemyObjectPageSel);
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda(EnemyObjectPageLoc);
    sta(Enemy_PageLoc, x);
    lda((EnemyData), y);
    // <conv.chunks.Comment object at 0x1037fcb60>
    // <conv.chunks.Comment object at 0x1037fcc80>
    // <conv.chunks.Comment object at 0x1037fcdd0>
    anda(0b11110000);
    sta(Enemy_X_Position, x);
    cmp(ScreenRight_X_Pos);
    lda(Enemy_PageLoc, x);
    sbc(ScreenRight_PageLoc);
    BCS(CheckRightExtBounds);
    // <conv.chunks.Comment object at 0x1037fd040>
    // <conv.chunks.Comment object at 0x1037fd190>
    // <conv.chunks.Comment object at 0x1037fd2b0>
    // <conv.chunks.Comment object at 0x1037fd400>
    // <conv.chunks.Comment object at 0x1037fd520>
    lda((EnemyData), y);
    anda(0b1111);
    cmp(0xe);
    // <conv.chunks.Comment object at 0x1037fd790>
    // <conv.chunks.Comment object at 0x1037fd8b0>
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
    // <conv.chunks.Comment object at 0x1037fdc40>
    // <conv.chunks.Comment object at 0x1037fdcd0>
    // <conv.chunks.Comment object at 0x1037fdeb0>
    // <conv.chunks.Comment object at 0x1037fdf40>
    // <conv.chunks.Comment object at 0x1037fe0f0>
    // <conv.chunks.Comment object at 0x1037fe210>
    sta(Enemy_Y_HighPos, x);
    lda((EnemyData), y);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x1037fe450>
    // <conv.chunks.Comment object at 0x1037fe600>
    // <conv.chunks.Comment object at 0x1037fe6c0>
    asl();
    asl();
    sta(Enemy_Y_Position, x);
    cmp(0xe0);
    BEQ(ParseRow0e);
    // <conv.chunks.Comment object at 0x1037fe990>
    // <conv.chunks.Comment object at 0x1037fea20>
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
    // <conv.chunks.Comment object at 0x1037ff2c0>
    anda(0b111111);
    cmp(0x37);
    // <conv.chunks.Comment object at 0x1037ff530>
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
    // <conv.chunks.Comment object at 0x1037ff9e0>
    // <conv.chunks.Comment object at 0x1037ffa40>
    // <conv.chunks.Comment object at 0x1037ffc80>
    // <conv.chunks.Comment object at 0x1037ffda0>
    lda(BuzzyBeetle);
    JMP(StrID);
}

int StrID() {
    // <conv.chunks.Comment object at 0x1037fffe0>
    sta(Enemy_ID, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x103808230>
    JSR(InitEnemyObject);
    lda(Enemy_Flag, x);
    BNE(Inc2B);
    // <conv.chunks.Comment object at 0x103808500>
    // <conv.chunks.Comment object at 0x103808650>
    return 0;
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda(EnemyFrenzyBuffer);
    BNE(StrFre);
    lda(VineFlagOffset);
    // <conv.chunks.Comment object at 0x103808860>
    // <conv.chunks.Comment object at 0x103808980>
    // <conv.chunks.Comment object at 0x103808ad0>
    cmp(0x1);
    BNE(ExEPar);
    lda(VineObject);
    JMP(StrFre);
}

int StrFre() {
    // <conv.chunks.Comment object at 0x103808c50>
    // <conv.chunks.Comment object at 0x103808e30>
    // <conv.chunks.Comment object at 0x103808f50>
    sta(Enemy_ID, x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x103809130>
    sta(Enemy_State, x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // <conv.chunks.Comment object at 0x103809370>
    // <conv.chunks.Comment object at 0x103809490>
    return 0;
    JMP(DoGroup);
}

int DoGroup() {
    JMP(HandleGroupEnemies);
    JMP(ParseRow0e);
}

int ParseRow0e() {
    iny();
    // <conv.chunks.Comment object at 0x103809790>
    iny();
    lda((EnemyData), y);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x103809a30>
    // <conv.chunks.Comment object at 0x103809af0>
    lsr();
    lsr();
    lsr();
    cmp(WorldNumber);
    BNE(NotUse);
    dey();
    lda((EnemyData), y);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x103809d30>
    // <conv.chunks.Comment object at 0x103809e50>
    // <conv.chunks.Comment object at 0x103809fd0>
    // <conv.chunks.Comment object at 0x10380a060>
    // <conv.chunks.Comment object at 0x10380a1e0>
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
    // <conv.chunks.Comment object at 0x10380a900>
    // <conv.chunks.Comment object at 0x10380aa20>
    // <conv.chunks.Comment object at 0x10380aba0>
    cmp(0xe);
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // <conv.chunks.Comment object at 0x10380aed0>
    inc(EnemyDataOffset);
    JMP(Inc2B);
}

int Inc2B() {
    // <conv.chunks.Comment object at 0x10380b050>
    inc(EnemyDataOffset);
    inc(EnemyDataOffset);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10380b2c0>
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
    // <conv.chunks.Comment object at 0x10380b800>
    // <conv.chunks.Comment object at 0x10380b890>
    // <conv.chunks.Comment object at 0x10380ba70>
    lda(Enemy_Y_Position, x);
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10380bc20>
    // <conv.chunks.Comment object at 0x10380bcb0>
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
    // <conv.chunks.Comment object at 0x103816720>
    // <conv.chunks.Comment object at 0x1038167b0>
    sta(Enemy_Y_Position, x);
    lsr();
    sta(EnemyIntervalTimer, x);
    // <conv.chunks.Comment object at 0x103816b40>
    lsr();
    sta(Enemy_State, x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(0xb8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103816ff0>
    // <conv.chunks.Comment object at 0x103817080>
    return 0;
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(0x1);
    lda(PrimaryHardMode);
    // <conv.chunks.Comment object at 0x1038173b0>
    // <conv.chunks.Comment object at 0x103817530>
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // <conv.chunks.Comment object at 0x103817830>
    // <conv.chunks.Comment object at 0x1038178c0>
    lda(offsetof(G, NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // <conv.chunks.Comment object at 0x103817a70>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103817da0>
    // <conv.chunks.Comment object at 0x103817ec0>
    sta(Enemy_State, x);
    return 0;
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(0x0);
    sta(HammerThrowingTimer, x);
    // <conv.chunks.Comment object at 0x10381c290>
    // <conv.chunks.Comment object at 0x10381c410>
    sta(Enemy_X_Speed, x);
    ldy(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x10381c710>
    lda(offsetof(G, HBroWalkingTimerData), y);
    sta(EnemyIntervalTimer, x);
    lda(0xb);
    // <conv.chunks.Comment object at 0x10381c950>
    // <conv.chunks.Comment object at 0x10381caa0>
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x10381cd40>
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x10381cfe0>
    sta(BlooperMoveSpeed, x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // <conv.chunks.Comment object at 0x10381d220>
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
    // <conv.chunks.Comment object at 0x10381d520>
    // <conv.chunks.Comment object at 0x10381d5b0>
    // <conv.chunks.Comment object at 0x10381d790>
    // <conv.chunks.Comment object at 0x10381d8e0>
    // <conv.chunks.Comment object at 0x10381da30>
    // <conv.chunks.Comment object at 0x10381dac0>
    tya();
    adc(Enemy_Y_Position, x);
    sta(RedPTroopaCenterYPos, x);
    JMP(TallBBox);
}

int TallBBox() {
    // <conv.chunks.Comment object at 0x10381dc70>
    // <conv.chunks.Comment object at 0x10381ddc0>
    // <conv.chunks.Comment object at 0x10381df10>
    lda(0x3);
    JMP(SetBBox);
}

int SetBBox() {
    // <conv.chunks.Comment object at 0x10381dfd0>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x10381e210>
    sta(Enemy_MovingDir, x);
    JMP(InitVStf);
}

int InitVStf() {
    // <conv.chunks.Comment object at 0x10381e450>
    lda(0x0);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10381e510>
    sta(Enemy_Y_MoveForce, x);
    return 0;
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x10381e900>
    sta(Enemy_MovingDir, x);
    lda(0x9);
    // <conv.chunks.Comment object at 0x10381eb40>
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda(PseudoRandomBitReg, x);
    anda(0b10000);
    sta(CheepCheepMoveMFlag, x);
    // <conv.chunks.Comment object at 0x10381ee70>
    // <conv.chunks.Comment object at 0x10381ef90>
    // <conv.chunks.Comment object at 0x10381f0e0>
    // <conv.chunks.Comment object at 0x10381f200>
    lda(Enemy_Y_Position, x);
    sta(CheepCheepOrigYPos, x);
    // <conv.chunks.Comment object at 0x10381f470>
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
    // <conv.chunks.Comment object at 0x10381f920>
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
    // <conv.chunks.Comment object at 0x10381ffe0>
    BNE(ExLSHand);
    cpx(0x5);
    // <conv.chunks.Comment object at 0x10382c860>
    BCS(ExLSHand);
    lda(0x80);
    // <conv.chunks.Comment object at 0x10382ca70>
    sta(FrenzyEnemyTimer);
    ldy(0x4);
    JMP(ChkLak);
}

int ChkLak() {
    // <conv.chunks.Comment object at 0x10382cc80>
    // <conv.chunks.Comment object at 0x10382cd10>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc(LakituReappearTimer);
    // <conv.chunks.Comment object at 0x10382cf50>
    // <conv.chunks.Comment object at 0x10382cfb0>
    // <conv.chunks.Comment object at 0x10382d1f0>
    // <conv.chunks.Comment object at 0x10382d280>
    // <conv.chunks.Comment object at 0x10382d3d0>
    lda(LakituReappearTimer);
    cmp(0x7);
    BCC(ExLSHand);
    ldx(0x4);
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // <conv.chunks.Comment object at 0x10382d5e0>
    // <conv.chunks.Comment object at 0x10382d670>
    // <conv.chunks.Comment object at 0x10382d820>
    // <conv.chunks.Comment object at 0x10382d8b0>
    lda(Enemy_Flag, x);
    BEQ(CreateL);
    dex();
    BPL(ChkNoEn);
    BMI(RetEOfs);
    JMP(CreateL);
}

int CreateL() {
    // <conv.chunks.Comment object at 0x10382daf0>
    // <conv.chunks.Comment object at 0x10382dc70>
    // <conv.chunks.Comment object at 0x10382dd00>
    // <conv.chunks.Comment object at 0x10382de50>
    // <conv.chunks.Comment object at 0x10382dfa0>
    lda(0x0);
    sta(Enemy_State, x);
    lda(Lakitu);
    // <conv.chunks.Comment object at 0x10382e240>
    sta(Enemy_ID, x);
    JSR(SetupLakitu);
    // <conv.chunks.Comment object at 0x10382e4b0>
    lda(0x20);
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // <conv.chunks.Comment object at 0x10382e630>
    // <conv.chunks.Comment object at 0x10382e7e0>
    ldx(ObjectOffset);
    JMP(ExLSHand);
}

int ExLSHand() {
    return 0;
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x10382ea80>
    cmp(0x2c);
    BCC(ExLSHand);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x10382ed80>
    BNE(ExLSHand);
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x10382efc0>
    // <conv.chunks.Comment object at 0x10382f110>
    lda(Enemy_X_Position, y);
    sta(Enemy_X_Position, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10382f4a0>
    sta(Enemy_Y_HighPos, x);
    lda(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x10382f6e0>
    sec();
    sbc(0x8);
    sta(Enemy_Y_Position, x);
    lda(PseudoRandomBitReg, x);
    // <conv.chunks.Comment object at 0x10382fad0>
    anda(0b11);
    tay();
    ldx(0x2);
    JMP(DifLoop);
}

int DifLoop() {
    // <conv.chunks.Comment object at 0x10382fe00>
    lda(offsetof(G, PRDiffAdjustData), y);
    sta(0x1, x);
    // <conv.chunks.Comment object at 0x103838080>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x103838290>
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx(ObjectOffset);
    JSR(PlayerLakituDiff);
    ldy(Player_X_Speed);
    // <conv.chunks.Comment object at 0x103838470>
    // <conv.chunks.Comment object at 0x103838500>
    // <conv.chunks.Comment object at 0x103838650>
    // <conv.chunks.Comment object at 0x103838770>
    // <conv.chunks.Comment object at 0x103838890>
    cpy(0x8);
    BCS(SetSpSpd);
    tay();
    // <conv.chunks.Comment object at 0x103838a10>
    // <conv.chunks.Comment object at 0x103838bf0>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(UsePosv);
    // <conv.chunks.Comment object at 0x103838e60>
    // <conv.chunks.Comment object at 0x103838f80>
    tya();
    eor(0b11111111);
    // <conv.chunks.Comment object at 0x103839160>
    tay();
    iny();
    JMP(UsePosv);
}

int UsePosv() {
    // <conv.chunks.Comment object at 0x1038393a0>
    tya();
    JMP(SetSpSpd);
}

int SetSpSpd() {
    // <conv.chunks.Comment object at 0x1038394c0>
    JSR(SmallBBox);
    ldy(0x2);
    sta(Enemy_X_Speed, x);
    cmp(0x0);
    BMI(SpinyRte);
    // <conv.chunks.Comment object at 0x103839670>
    // <conv.chunks.Comment object at 0x103839850>
    // <conv.chunks.Comment object at 0x1038398e0>
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // <conv.chunks.Comment object at 0x103839b20>
    sty(Enemy_MovingDir, x);
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    // <conv.chunks.Comment object at 0x103839d00>
    lda(0x1);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x103839f40>
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
    // <conv.chunks.Comment object at 0x10383abd0>
    sta(FirebarSpinState_Low, x);
    lda(Enemy_ID, x);
    sec();
    // <conv.chunks.Comment object at 0x10383ae10>
    // <conv.chunks.Comment object at 0x10383af90>
    sbc(0x1b);
    tay();
    lda(offsetof(G, FirebarSpinSpdData), y);
    // <conv.chunks.Comment object at 0x10383b1a0>
    sta(FirebarSpinSpeed, x);
    lda(offsetof(G, FirebarSpinDirData), y);
    // <conv.chunks.Comment object at 0x10383b410>
    sta(FirebarSpinDirection, x);
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x10383b7d0>
    adc(0x4);
    sta(Enemy_Y_Position, x);
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x10383bbc0>
    adc(0x4);
    sta(Enemy_X_Position, x);
    lda(Enemy_PageLoc, x);
    adc(0x0);
    // <conv.chunks.Comment object at 0x10383bf80>
    sta(Enemy_PageLoc, x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x1038443e0>
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // <conv.chunks.Comment object at 0x103845850>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x103845b50>
    tay();
    lda(offsetof(G, FlyCCTimerData), y);
    // <conv.chunks.Comment object at 0x103845d00>
    sta(FrenzyEnemyTimer);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x103845f40>
    lda(SecondaryHardMode);
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // <conv.chunks.Comment object at 0x103846150>
    // <conv.chunks.Comment object at 0x1038462d0>
    // <conv.chunks.Comment object at 0x103846360>
    sty(0x0);
    cpx(0x0);
    BCS(ChpChpEx);
    // <conv.chunks.Comment object at 0x1038463c0>
    // <conv.chunks.Comment object at 0x1038465a0>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    sta(0x0);
    // <conv.chunks.Comment object at 0x103846840>
    // <conv.chunks.Comment object at 0x103846990>
    sta(0x1);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x103846a20>
    sta(Enemy_Y_Speed, x);
    lda(0x0);
    ldy(Player_X_Speed);
    BEQ(GSeed);
    // <conv.chunks.Comment object at 0x103846db0>
    // <conv.chunks.Comment object at 0x103846e40>
    // <conv.chunks.Comment object at 0x103846ff0>
    lda(0x4);
    cpy(0x19);
    BCC(GSeed);
    asl();
    JMP(GSeed);
}

int GSeed() {
    // <conv.chunks.Comment object at 0x1038471a0>
    // <conv.chunks.Comment object at 0x1038472c0>
    // <conv.chunks.Comment object at 0x1038474d0>
    // <conv.chunks.Comment object at 0x103847560>
    pha();
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x103847740>
    // <conv.chunks.Comment object at 0x103847710>
    lda(((PseudoRandomBitReg) + (1)), x);
    anda(0b11);
    BEQ(RSeed);
    // <conv.chunks.Comment object at 0x103847b30>
    // <conv.chunks.Comment object at 0x103847c50>
    lda(((PseudoRandomBitReg) + (2)), x);
    anda(0b1111);
    sta(0x0);
    JMP(RSeed);
}

int RSeed() {
    // <conv.chunks.Comment object at 0x103847f80>
    // <conv.chunks.Comment object at 0x10384c110>
    // <conv.chunks.Comment object at 0x10384c1a0>
    pla();
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FlyCCXSpeedData), y);
    // <conv.chunks.Comment object at 0x10384c3e0>
    // <conv.chunks.Comment object at 0x10384c3b0>
    // <conv.chunks.Comment object at 0x10384c590>
    sta(Enemy_X_Speed, x);
    lda(0x1);
    // <conv.chunks.Comment object at 0x10384c800>
    sta(Enemy_MovingDir, x);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x10384ca40>
    BNE(D2XPos1);
    ldy(0x0);
    tya();
    // <conv.chunks.Comment object at 0x10384ccb0>
    // <conv.chunks.Comment object at 0x10384cc80>
    anda(0b10);
    BEQ(D2XPos1);
    // <conv.chunks.Comment object at 0x10384cf50>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x10384d1c0>
    // <conv.chunks.Comment object at 0x10384d310>
    // <conv.chunks.Comment object at 0x10384d3a0>
    sta(Enemy_X_Speed, x);
    inc(Enemy_MovingDir, x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // <conv.chunks.Comment object at 0x10384d5e0>
    // <conv.chunks.Comment object at 0x10384d730>
    tya();
    anda(0b10);
    BEQ(D2XPos2);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x10384d940>
    // <conv.chunks.Comment object at 0x10384da90>
    clc();
    adc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x10384dc40>
    // <conv.chunks.Comment object at 0x10384dd90>
    // <conv.chunks.Comment object at 0x10384dee0>
    // <conv.chunks.Comment object at 0x10384e000>
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // <conv.chunks.Comment object at 0x10384e240>
    lda(Player_X_Position);
    sec();
    sbc(offsetof(G, FlyCCXPositionData), y);
    sta(Enemy_X_Position, x);
    lda(Player_PageLoc);
    sbc(0x0);
    JMP(FinCCSt);
}

int FinCCSt() {
    // <conv.chunks.Comment object at 0x10384e450>
    // <conv.chunks.Comment object at 0x10384e5a0>
    // <conv.chunks.Comment object at 0x10384e6f0>
    // <conv.chunks.Comment object at 0x10384e810>
    // <conv.chunks.Comment object at 0x10384e8a0>
    sta(Enemy_PageLoc, x);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x10384eb40>
    // <conv.chunks.Comment object at 0x10384ed20>
    lda(0xf8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10384eed0>
    return 0;
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx(BowserFront_Offset);
    // <conv.chunks.Comment object at 0x10384f1a0>
    // <conv.chunks.Comment object at 0x10384f2c0>
    lda(0x0);
    sta(BowserBodyControls);
    sta(BridgeCollapseOffset);
    // <conv.chunks.Comment object at 0x10384f440>
    // <conv.chunks.Comment object at 0x10384f5f0>
    lda(Enemy_X_Position, x);
    sta(BowserOrigXPos);
    // <conv.chunks.Comment object at 0x10384f830>
    lda(0xdf);
    sta(BowserFireBreathTimer);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x10384f9b0>
    // <conv.chunks.Comment object at 0x10384fb60>
    lda(0x20);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x10384fd10>
    sta(EnemyFrameTimer, x);
    lda(0x5);
    sta(BowserHitPoints);
    // <conv.chunks.Comment object at 0x103858080>
    lsr();
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x1038582c0>
    return 0;
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(0xff);
    JMP(FSLoop);
}

int FSLoop() {
    // <conv.chunks.Comment object at 0x1038584d0>
    // <conv.chunks.Comment object at 0x103858560>
    iny();
    lda(Enemy_Flag, y);
    BNE(FSLoop);
    sty(DuplicateObj_Offset);
    txa();
    ora(0b10000000);
    sta(Enemy_Flag, y);
    // <conv.chunks.Comment object at 0x103858710>
    // <conv.chunks.Comment object at 0x103858860>
    // <conv.chunks.Comment object at 0x1038589b0>
    // <conv.chunks.Comment object at 0x103858b00>
    // <conv.chunks.Comment object at 0x103858b90>
    // <conv.chunks.Comment object at 0x103858cb0>
    lda(Enemy_PageLoc, x);
    sta(Enemy_PageLoc, y);
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x103858f20>
    // <conv.chunks.Comment object at 0x103859070>
    sta(Enemy_X_Position, y);
    lda(0x1);
    sta(Enemy_Flag, x);
    sta(Enemy_Y_HighPos, y);
    // <conv.chunks.Comment object at 0x103859340>
    // <conv.chunks.Comment object at 0x103859520>
    lda(Enemy_Y_Position, x);
    sta(Enemy_Y_Position, y);
    JMP(FlmEx);
}

int FlmEx() {
    // <conv.chunks.Comment object at 0x103859790>
    // <conv.chunks.Comment object at 0x1038598e0>
    return 0;
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x103859b20>
    BNE(FlmEx);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x10385a060>
    lda(NoiseSoundQueue);
    ora(Sfx_BowserFlame);
    // <conv.chunks.Comment object at 0x10385a2a0>
    sta(NoiseSoundQueue);
    ldy(BowserFront_Offset);
    lda(Enemy_ID, y);
    // <conv.chunks.Comment object at 0x10385a4b0>
    // <conv.chunks.Comment object at 0x10385a5d0>
    cmp(Bowser);
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x10385a750>
    // <conv.chunks.Comment object at 0x10385a960>
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x10385ab10>
    ldy(SecondaryHardMode);
    BEQ(SetFrT);
    // <conv.chunks.Comment object at 0x10385ad20>
    sec();
    sbc(0x10);
    JMP(SetFrT);
}

int SetFrT() {
    // <conv.chunks.Comment object at 0x10385af00>
    // <conv.chunks.Comment object at 0x10385af90>
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
    // <conv.chunks.Comment object at 0x10385b770>
    lda(ScreenRight_X_Pos);
    clc();
    adc(0x20);
    // <conv.chunks.Comment object at 0x10385ba40>
    sta(Enemy_X_Position, x);
    lda(ScreenRight_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x10385bd70>
    sta(Enemy_PageLoc, x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x103864140>
    sec();
    sbc(0xe);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x103864320>
    // <conv.chunks.Comment object at 0x1038643b0>
    lda(Enemy_PageLoc, y);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1038646b0>
    lda(Enemy_Y_Position, y);
    clc();
    // <conv.chunks.Comment object at 0x103864950>
    adc(0x8);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103864a40>
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
    // <conv.chunks.Comment object at 0x103864d40>
    // <conv.chunks.Comment object at 0x103864e60>
    // <conv.chunks.Comment object at 0x103864fe0>
    // <conv.chunks.Comment object at 0x103865070>
    // <conv.chunks.Comment object at 0x1038651c0>
    // <conv.chunks.Comment object at 0x103865250>
    // <conv.chunks.Comment object at 0x103865430>
    // <conv.chunks.Comment object at 0x1038655b0>
    // <conv.chunks.Comment object at 0x103865640>
    lda(offsetof(G, FlameYMFAdderData), y);
    sta(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1038657f0>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(0x8);
    // <conv.chunks.Comment object at 0x103865b80>
    sta(Enemy_BoundBoxCtrl, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x103865dc0>
    // <conv.chunks.Comment object at 0x103865e50>
    sta(Enemy_Flag, x);
    lsr();
    sta(Enemy_X_MoveForce, x);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038661e0>
    // <conv.chunks.Comment object at 0x103866330>
    return 0;
    JMP(InitFireworks);
}

int InitFireworks() {
    lda(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x103866630>
    BNE(ExitFWk);
    lda(0x20);
    // <conv.chunks.Comment object at 0x103866ed0>
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
    // <conv.chunks.Comment object at 0x1038673e0>
    // <conv.chunks.Comment object at 0x103867530>
    // <conv.chunks.Comment object at 0x103867650>
    lda(Enemy_X_Position, y);
    sec();
    sbc(0x30);
    pha();
    // <conv.chunks.Comment object at 0x1038678c0>
    // <conv.chunks.Comment object at 0x103867950>
    // <conv.chunks.Comment object at 0x103867aa0>
    lda(Enemy_PageLoc, y);
    sbc(0x0);
    sta(0x0);
    lda(FireworksCounter);
    // <conv.chunks.Comment object at 0x103867c50>
    // <conv.chunks.Comment object at 0x103867da0>
    // <conv.chunks.Comment object at 0x103867e30>
    clc();
    adc(Enemy_State, y);
    tay();
    pla();
    // <conv.chunks.Comment object at 0x10386c080>
    // <conv.chunks.Comment object at 0x10386c200>
    // <conv.chunks.Comment object at 0x10386c2c0>
    clc();
    adc(offsetof(G, FireworksXPosData), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10386c3e0>
    // <conv.chunks.Comment object at 0x10386c530>
    lda(0x0);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    lda(offsetof(G, FireworksYPosData), y);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10386c680>
    // <conv.chunks.Comment object at 0x10386c800>
    // <conv.chunks.Comment object at 0x10386c9e0>
    // <conv.chunks.Comment object at 0x10386cb30>
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x10386cce0>
    // <conv.chunks.Comment object at 0x10386cec0>
    lsr();
    sta(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x10386d0a0>
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
    // <conv.chunks.Comment object at 0x10386daf0>
    BNE(ExF17);
    lda(AreaType);
    BNE(DoBulletBills);
    cpx(0x3);
    BCS(ExF17);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10386e270>
    // <conv.chunks.Comment object at 0x10386e390>
    // <conv.chunks.Comment object at 0x10386e4b0>
    // <conv.chunks.Comment object at 0x10386e540>
    // <conv.chunks.Comment object at 0x10386e720>
    lda(PseudoRandomBitReg, x);
    cmp(0xaa);
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // <conv.chunks.Comment object at 0x10386e960>
    // <conv.chunks.Comment object at 0x10386e9f0>
    // <conv.chunks.Comment object at 0x10386ec00>
    // <conv.chunks.Comment object at 0x10386ec90>
    lda(WorldNumber);
    cmp(World2);
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(0b1);
    // <conv.chunks.Comment object at 0x10386f230>
    tay();
    lda(offsetof(G, SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // <conv.chunks.Comment object at 0x10386f3e0>
    // <conv.chunks.Comment object at 0x10386f530>
    sta(Enemy_ID, x);
    lda(BitMFilter);
    cmp(0xff);
    // <conv.chunks.Comment object at 0x10386f7d0>
    BNE(GetRBit);
    lda(0x0);
    // <conv.chunks.Comment object at 0x10386fa10>
    sta(BitMFilter);
    JMP(GetRBit);
}

int GetRBit() {
    // <conv.chunks.Comment object at 0x10386fc20>
    lda(PseudoRandomBitReg, x);
    anda(0b111);
    JMP(ChkRBit);
}

int ChkRBit() {
    // <conv.chunks.Comment object at 0x10386fdd0>
    // <conv.chunks.Comment object at 0x10386fef0>
    tay();
    lda(offsetof(G, Bitmasks), y);
    bit(BitMFilter);
    // <conv.chunks.Comment object at 0x103878050>
    // <conv.chunks.Comment object at 0x1038781a0>
    BEQ(AddFBit);
    iny();
    // <conv.chunks.Comment object at 0x103878410>
    tya();
    anda(0b111);
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // <conv.chunks.Comment object at 0x103878530>
    // <conv.chunks.Comment object at 0x103878650>
    // <conv.chunks.Comment object at 0x1038787a0>
    ora(BitMFilter);
    sta(BitMFilter);
    lda(offsetof(G, Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta(Enemy_YMF_Dummy, x);
    lda(0x20);
    // <conv.chunks.Comment object at 0x103878920>
    // <conv.chunks.Comment object at 0x103878a40>
    // <conv.chunks.Comment object at 0x103878b90>
    // <conv.chunks.Comment object at 0x103878cb0>
    // <conv.chunks.Comment object at 0x103878e00>
    sta(FrenzyEnemyTimer);
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(0xff);
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // <conv.chunks.Comment object at 0x103879160>
    // <conv.chunks.Comment object at 0x1038791f0>
    iny();
    cpy(0x5);
    // <conv.chunks.Comment object at 0x103879370>
    BCS(FireBulletBill);
    lda(Enemy_Flag, y);
    BEQ(BB_SLoop);
    // <conv.chunks.Comment object at 0x103879580>
    // <conv.chunks.Comment object at 0x1038796d0>
    lda(Enemy_ID, y);
    cmp(BulletBill_FrenzyVar);
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // <conv.chunks.Comment object at 0x103879910>
    // <conv.chunks.Comment object at 0x103879a30>
    // <conv.chunks.Comment object at 0x103879b50>
    return 0;
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda(Square2SoundQueue);
    ora(Sfx_Blast);
    // <conv.chunks.Comment object at 0x103879d90>
    sta(Square2SoundQueue);
    lda(BulletBill_FrenzyVar);
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10387a330>
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
    // <conv.chunks.Comment object at 0x10387a4e0>
    // <conv.chunks.Comment object at 0x10387a630>
    // <conv.chunks.Comment object at 0x10387a6c0>
    // <conv.chunks.Comment object at 0x10387a750>
    // <conv.chunks.Comment object at 0x10387a960>
    // <conv.chunks.Comment object at 0x10387a9f0>
    // <conv.chunks.Comment object at 0x10387aa50>
    // <conv.chunks.Comment object at 0x10387ac60>
    // <conv.chunks.Comment object at 0x10387adb0>
    // <conv.chunks.Comment object at 0x10387aed0>
    pla();
    JMP(SnglID);
}

int SnglID() {
    // <conv.chunks.Comment object at 0x10387aff0>
    sty(0x1);
    ldy(0xb0);
    anda(0x2);
    BEQ(SetYGp);
    ldy(0x70);
    JMP(SetYGp);
}

int SetYGp() {
    // <conv.chunks.Comment object at 0x10387b110>
    // <conv.chunks.Comment object at 0x10387b200>
    // <conv.chunks.Comment object at 0x10387b320>
    // <conv.chunks.Comment object at 0x10387b500>
    // <conv.chunks.Comment object at 0x10387b590>
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
    // <conv.chunks.Comment object at 0x10387b740>
    // <conv.chunks.Comment object at 0x10387b8f0>
    // <conv.chunks.Comment object at 0x10387b980>
    // <conv.chunks.Comment object at 0x10387bb30>
    // <conv.chunks.Comment object at 0x10387bbc0>
    // <conv.chunks.Comment object at 0x10387bd70>
    // <conv.chunks.Comment object at 0x10387be30>
    // <conv.chunks.Comment object at 0x10387bec0>
    // <conv.chunks.Comment object at 0x103880080>
    // <conv.chunks.Comment object at 0x103880110>
    sty(NumberofGroupEnemies);
    JMP(GrLoop);
}

int GrLoop() {
    // <conv.chunks.Comment object at 0x103880290>
    ldx(0xff);
    JMP(GSltLp);
}

int GSltLp() {
    // <conv.chunks.Comment object at 0x103880380>
    inx();
    cpx(0x5);
    // <conv.chunks.Comment object at 0x103880530>
    BCS(NextED);
    lda(Enemy_Flag, x);
    BNE(GSltLp);
    // <conv.chunks.Comment object at 0x103880770>
    // <conv.chunks.Comment object at 0x1038808c0>
    lda(0x1);
    sta(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x103880a10>
    lda(0x2);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x103880c50>
    lda(0x3);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x103880e90>
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x103881160>
    sta(0x3);
    lda(0x2);
    adc(0x0);
    // <conv.chunks.Comment object at 0x103881310>
    // <conv.chunks.Comment object at 0x103881430>
    sta(0x2);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103881640>
    sta(Enemy_Y_Position, x);
    lda(0x1);
    sta(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1038818e0>
    // <conv.chunks.Comment object at 0x103881970>
    sta(Enemy_Flag, x);
    JSR(CheckpointEnemyID);
    dec(NumberofGroupEnemies);
    // <conv.chunks.Comment object at 0x103881c70>
    // <conv.chunks.Comment object at 0x103881d90>
    BNE(GrLoop);
    JMP(NextED);
}

int NextED() {
    // <conv.chunks.Comment object at 0x103881fd0>
    JMP(Inc2B);
    JMP(InitPiranhaPlant);
}

int InitPiranhaPlant() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x1038821e0>
    sta(PiranhaPlant_Y_Speed, x);
    lsr();
    sta(Enemy_State, x);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x1038824b0>
    // <conv.chunks.Comment object at 0x103882600>
    lda(Enemy_Y_Position, x);
    sta(PiranhaPlantDownYPos, x);
    // <conv.chunks.Comment object at 0x103882870>
    sec();
    sbc(0x18);
    sta(PiranhaPlantUpYPos, x);
    // <conv.chunks.Comment object at 0x103882ab0>
    lda(0x9);
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda(Enemy_ID, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x103882f00>
    // <conv.chunks.Comment object at 0x103883050>
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
    // <conv.chunks.Comment object at 0x1038838f0>
    // <conv.chunks.Comment object at 0x103883980>
    lda(Enemy_ID, y);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x103883b90>
    BNE(NextFSlot);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103883dd0>
    sta(Enemy_State, y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // <conv.chunks.Comment object at 0x103888050>
    dey();
    BPL(LakituChk);
    // <conv.chunks.Comment object at 0x103888140>
    lda(0x0);
    sta(EnemyFrenzyBuffer);
    sta(Enemy_Flag, x);
    // <conv.chunks.Comment object at 0x1038882c0>
    // <conv.chunks.Comment object at 0x103888470>
    return 0;
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(0x2);
    // <conv.chunks.Comment object at 0x1038886b0>
    sta(Enemy_MovingDir, x);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x1038888f0>
    sta(Enemy_X_Speed, x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // <conv.chunks.Comment object at 0x103888b30>
    lda(0x3);
    JMP(SetBBox2);
}

int SetBBox2() {
    // <conv.chunks.Comment object at 0x103888bf0>
    sta(Enemy_BoundBoxCtrl, x);
    return 0;
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103888ef0>
    dec(Enemy_Y_Position, x);
    ldy(SecondaryHardMode);
    BNE(AlignP);
    ldy(0x2);
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // <conv.chunks.Comment object at 0x103889160>
    // <conv.chunks.Comment object at 0x103889280>
    // <conv.chunks.Comment object at 0x1038893d0>
    // <conv.chunks.Comment object at 0x103889460>
    // <conv.chunks.Comment object at 0x103889610>
    ldy(0xff);
    lda(BalPlatformAlignment);
    sta(Enemy_State, x);
    BPL(SetBPA);
    txa();
    tay();
    JMP(SetBPA);
}

int SetBPA() {
    // <conv.chunks.Comment object at 0x103889700>
    // <conv.chunks.Comment object at 0x1038898b0>
    // <conv.chunks.Comment object at 0x103889a00>
    // <conv.chunks.Comment object at 0x103889b80>
    // <conv.chunks.Comment object at 0x103889c40>
    // <conv.chunks.Comment object at 0x103889cd0>
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
    // <conv.chunks.Comment object at 0x10388aa80>
    // <conv.chunks.Comment object at 0x10388ab10>
    // <conv.chunks.Comment object at 0x10388acf0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10388af60>
    adc(0x1);
    ldy(0xc0);
    JMP(SetYO);
}

int SetYO() {
    // <conv.chunks.Comment object at 0x10388b050>
    // <conv.chunks.Comment object at 0x10388b170>
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
    // <conv.chunks.Comment object at 0x10388b800>
    // <conv.chunks.Comment object at 0x10388b920>
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
    // <conv.chunks.Comment object at 0x10388bb90>
    // <conv.chunks.Comment object at 0x10388bc20>
    // <conv.chunks.Comment object at 0x10388be00>
    // <conv.chunks.Comment object at 0x10388bf20>
    // <conv.chunks.Comment object at 0x1038980b0>
    // <conv.chunks.Comment object at 0x103898140>
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
    // <conv.chunks.Comment object at 0x1038989e0>
    sta(Enemy_Y_MoveForce, x);
    lda(0xff);
    // <conv.chunks.Comment object at 0x103898c20>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(0xf0);
    // <conv.chunks.Comment object at 0x103898fe0>
    sta(Enemy_Y_MoveForce, x);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103899220>
    sta(Enemy_Y_Speed, x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(0x1);
    JSR(PosPlatform);
    // <conv.chunks.Comment object at 0x103899520>
    lda(0x4);
    sta(Enemy_BoundBoxCtrl, x);
    // <conv.chunks.Comment object at 0x103899730>
    return 0;
    JMP(PosPlatform);
}

int PosPlatform() {
    lda(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x103899a00>
    clc();
    adc(offsetof(G, PlatPosDataLow), y);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x103899fa0>
    // <conv.chunks.Comment object at 0x10389a0f0>
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
    // <conv.chunks.Comment object at 0x10389a810>
    // <conv.chunks.Comment object at 0x10389a930>
    ldy(Enemy_ID, x);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x10389ab70>
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
    // <conv.chunks.Comment object at 0x1038a4980>
    sta(Enemy_SprAttrib, x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy(TimerControl);
    // <conv.chunks.Comment object at 0x1038a5250>
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
    // <conv.chunks.Comment object at 0x1038a7a40>
    // <conv.chunks.Comment object at 0x1038a7b60>
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
    // <conv.chunks.Comment object at 0x1038b4170>
    sec();
    sbc(0x24);
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x1038b49b0>
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
    // <conv.chunks.Comment object at 0x1038b54c0>
    // <conv.chunks.Comment object at 0x1038b5610>
    // <conv.chunks.Comment object at 0x1038b5760>
    // <conv.chunks.Comment object at 0x1038b5880>
    // <conv.chunks.Comment object at 0x1038b5ac0>
    // <conv.chunks.Comment object at 0x1038b5be0>
    // <conv.chunks.Comment object at 0x1038b5d30>
    // <conv.chunks.Comment object at 0x1038b5e50>
    // <conv.chunks.Comment object at 0x1038b5ee0>
    lda(0xf9);
    sta(Enemy_Y_Speed, x);
    JMP(PdbM);
}

int PdbM() {
    // <conv.chunks.Comment object at 0x1038b6120>
    // <conv.chunks.Comment object at 0x1038b6300>
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038b6720>
    anda(0b100000);
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // <conv.chunks.Comment object at 0x1038b6d80>
    // <conv.chunks.Comment object at 0x1038b6ed0>
    // <conv.chunks.Comment object at 0x1038b6ff0>
    lda(HammerBroJumpTimer, x);
    BEQ(HammerBroJumpCode);
    dec(HammerBroJumpTimer, x);
    // <conv.chunks.Comment object at 0x1038b71a0>
    // <conv.chunks.Comment object at 0x1038b72c0>
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
    // <conv.chunks.Comment object at 0x1038b7500>
    // <conv.chunks.Comment object at 0x1038b7620>
    // <conv.chunks.Comment object at 0x1038b7740>
    // <conv.chunks.Comment object at 0x1038b7890>
    // <conv.chunks.Comment object at 0x1038b79e0>
    // <conv.chunks.Comment object at 0x1038b7b00>
    // <conv.chunks.Comment object at 0x1038b7c50>
    // <conv.chunks.Comment object at 0x1038b7da0>
    // <conv.chunks.Comment object at 0x1038b7ec0>
    lda(Enemy_State, x);
    ora(0b1000);
    // <conv.chunks.Comment object at 0x1038bc170>
    sta(Enemy_State, x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // <conv.chunks.Comment object at 0x1038bc3b0>
    // <conv.chunks.Comment object at 0x1038bc4d0>
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
    // <conv.chunks.Comment object at 0x1038bc830>
    // <conv.chunks.Comment object at 0x1038bca70>
    // <conv.chunks.Comment object at 0x1038bcb90>
    // <conv.chunks.Comment object at 0x1038bcc20>
    // <conv.chunks.Comment object at 0x1038bcdd0>
    // <conv.chunks.Comment object at 0x1038bcf20>
    // <conv.chunks.Comment object at 0x1038bcfb0>
    // <conv.chunks.Comment object at 0x1038bd0a0>
    // <conv.chunks.Comment object at 0x1038bd280>
    // <conv.chunks.Comment object at 0x1038bd3d0>
    // <conv.chunks.Comment object at 0x1038bd460>
    // <conv.chunks.Comment object at 0x1038bd640>
    // <conv.chunks.Comment object at 0x1038bd6d0>
    // <conv.chunks.Comment object at 0x1038bd8b0>
    // <conv.chunks.Comment object at 0x1038bd940>
    anda(0x1);
    BNE(SetHJ);
    ldy(0xfa);
    JMP(SetHJ);
}

int SetHJ() {
    // <conv.chunks.Comment object at 0x1038bdc10>
    // <conv.chunks.Comment object at 0x1038bddf0>
    // <conv.chunks.Comment object at 0x1038bde80>
    sty(Enemy_Y_Speed, x);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038be0c0>
    ora(0x1);
    sta(Enemy_State, x);
    lda(0x0);
    anda(((PseudoRandomBitReg) + (2)), x);
    tay();
    lda(SecondaryHardMode);
    // <conv.chunks.Comment object at 0x1038be450>
    // <conv.chunks.Comment object at 0x1038be4e0>
    // <conv.chunks.Comment object at 0x1038be780>
    // <conv.chunks.Comment object at 0x1038be810>
    BNE(HJump);
    tay();
    JMP(HJump);
}

int HJump() {
    // <conv.chunks.Comment object at 0x1038bea80>
    // <conv.chunks.Comment object at 0x1038beb10>
    lda(offsetof(G, HammerBroJumpLData), y);
    sta(EnemyFrameTimer, x);
    // <conv.chunks.Comment object at 0x1038becc0>
    lda(((PseudoRandomBitReg) + (1)), x);
    ora(0b11000000);
    sta(HammerBroJumpTimer, x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(0xfc);
    // <conv.chunks.Comment object at 0x1038bf290>
    lda(FrameCounter);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x1038bf4a0>
    BNE(Shimmy);
    ldy(0x4);
    JMP(Shimmy);
}

int Shimmy() {
    // <conv.chunks.Comment object at 0x1038bf6e0>
    // <conv.chunks.Comment object at 0x1038bf770>
    sty(Enemy_X_Speed, x);
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda(EnemyIntervalTimer, x);
    BNE(SetShim);
    // <conv.chunks.Comment object at 0x1038bf9b0>
    // <conv.chunks.Comment object at 0x1038bfa40>
    // <conv.chunks.Comment object at 0x1038bfbf0>
    // <conv.chunks.Comment object at 0x1038bfd70>
    // <conv.chunks.Comment object at 0x1038bfe00>
    // <conv.chunks.Comment object at 0x1038bff50>
    lda(0xf8);
    sta(Enemy_X_Speed, x);
    JMP(SetShim);
}

int SetShim() {
    // <conv.chunks.Comment object at 0x1038c4140>
    // <conv.chunks.Comment object at 0x1038c4320>
    sty(Enemy_MovingDir, x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x1038c4500>
    lda(Enemy_State, x);
    anda(0b1000000);
    BNE(FallE);
    // <conv.chunks.Comment object at 0x1038c4740>
    // <conv.chunks.Comment object at 0x1038c4860>
    lda(Enemy_State, x);
    asl();
    BCS(SteadM);
    // <conv.chunks.Comment object at 0x1038c4b00>
    // <conv.chunks.Comment object at 0x1038c4b90>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(MoveDefeatedEnemy);
    // <conv.chunks.Comment object at 0x1038c4e00>
    // <conv.chunks.Comment object at 0x1038c4f20>
    lda(Enemy_State, x);
    anda(0b111);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x1038c5160>
    // <conv.chunks.Comment object at 0x1038c5280>
    cmp(0x5);
    BEQ(FallE);
    // <conv.chunks.Comment object at 0x1038c5430>
    cmp(0x3);
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // <conv.chunks.Comment object at 0x1038c5670>
    // <conv.chunks.Comment object at 0x1038c5820>
    JSR(MoveD_EnemyVertically);
    ldy(0x0);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038c5a00>
    cmp(0x2);
    BEQ(MEHor);
    anda(0b1000000);
    BEQ(SteadM);
    // <conv.chunks.Comment object at 0x1038c5c40>
    // <conv.chunks.Comment object at 0x1038c5e20>
    // <conv.chunks.Comment object at 0x1038c5f40>
    lda(Enemy_ID, x);
    cmp(PowerUpObject);
    // <conv.chunks.Comment object at 0x1038c61b0>
    BEQ(SteadM);
    BNE(SlowM);
    JMP(MEHor);
}

int MEHor() {
    // <conv.chunks.Comment object at 0x1038c63f0>
    // <conv.chunks.Comment object at 0x1038c6540>
    JMP(MoveEnemyHorizontally);
    JMP(SlowM);
}

int SlowM() {
    // <conv.chunks.Comment object at 0x1038c66c0>
    ldy(0x1);
    JMP(SteadM);
}

int SteadM() {
    // <conv.chunks.Comment object at 0x1038c67b0>
    lda(Enemy_X_Speed, x);
    pha();
    BPL(AddHS);
    // <conv.chunks.Comment object at 0x1038c6a20>
    // <conv.chunks.Comment object at 0x1038c6ab0>
    iny();
    iny();
    JMP(AddHS);
}

int AddHS() {
    clc();
    adc(offsetof(G, XSpeedAdderData), y);
    sta(Enemy_X_Speed, x);
    JSR(MoveEnemyHorizontally);
    // <conv.chunks.Comment object at 0x1038c6e40>
    // <conv.chunks.Comment object at 0x1038c6f90>
    // <conv.chunks.Comment object at 0x1038c70e0>
    pla();
    sta(Enemy_X_Speed, x);
    return 0;
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda(EnemyIntervalTimer, x);
    BNE(ChkKillGoomba);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038c74d0>
    // <conv.chunks.Comment object at 0x1038c7620>
    // <conv.chunks.Comment object at 0x1038c7740>
    lda(FrameCounter);
    anda(0x1);
    tay();
    // <conv.chunks.Comment object at 0x1038c7980>
    // <conv.chunks.Comment object at 0x1038c7ad0>
    iny();
    sty(Enemy_MovingDir, x);
    dey();
    lda(PrimaryHardMode);
    BEQ(SetRSpd);
    // <conv.chunks.Comment object at 0x1038c7bf0>
    // <conv.chunks.Comment object at 0x1038c7d70>
    // <conv.chunks.Comment object at 0x1038c7e00>
    // <conv.chunks.Comment object at 0x1038c7f20>
    iny();
    iny();
    JMP(SetRSpd);
}

int SetRSpd() {
    // <conv.chunks.Comment object at 0x1038d0170>
    // <conv.chunks.Comment object at 0x1038d0200>
    lda(offsetof(G, RevivedXSpeed), y);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x1038d03b0>
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
    // <conv.chunks.Comment object at 0x1038d0830>
    // <conv.chunks.Comment object at 0x1038d08c0>
    lda(Enemy_ID, x);
    cmp(Goomba);
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // <conv.chunks.Comment object at 0x1038d0bc0>
    // <conv.chunks.Comment object at 0x1038d0c20>
    // <conv.chunks.Comment object at 0x1038d0e60>
    // <conv.chunks.Comment object at 0x1038d0fb0>
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
    // <conv.chunks.Comment object at 0x1038d14f0>
    // <conv.chunks.Comment object at 0x1038d1640>
    // <conv.chunks.Comment object at 0x1038d1760>
    // <conv.chunks.Comment object at 0x1038d18b0>
    cmp(RedPTroopaOrigXPos, x);
    BCS(MoveRedPTUpOrDown);
    lda(FrameCounter);
    anda(0b111);
    BNE(NoIncPT);
    inc(Enemy_Y_Position, x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // <conv.chunks.Comment object at 0x1038d1b20>
    // <conv.chunks.Comment object at 0x1038d1c40>
    // <conv.chunks.Comment object at 0x1038d1d60>
    // <conv.chunks.Comment object at 0x1038d1e80>
    // <conv.chunks.Comment object at 0x1038d1fd0>
    // <conv.chunks.Comment object at 0x1038d2150>
    return 0;
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1038d22a0>
    cmp(RedPTroopaCenterYPos, x);
    BCC(MovPTDwn);
    JMP(MoveRedPTroopaUp);
    JMP(MovPTDwn);
}

int MovPTDwn() {
    // <conv.chunks.Comment object at 0x1038d2510>
    // <conv.chunks.Comment object at 0x1038d2630>
    // <conv.chunks.Comment object at 0x1038d2750>
    JMP(MoveRedPTroopaDown);
    JMP(MoveFlyGreenPTroopa);
}

int MoveFlyGreenPTroopa() {
    JSR(XMoveCntr_GreenPTroopa);
    JSR(MoveWithXMCntrs);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1038d2960>
    // <conv.chunks.Comment object at 0x1038d2a80>
    // <conv.chunks.Comment object at 0x1038d2ba0>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoMGPT);
    // <conv.chunks.Comment object at 0x1038d2db0>
    // <conv.chunks.Comment object at 0x1038d2ed0>
    lda(FrameCounter);
    anda(0b1000000);
    BNE(YSway);
    ldy(0xff);
    JMP(YSway);
}

int YSway() {
    // <conv.chunks.Comment object at 0x1038d3110>
    // <conv.chunks.Comment object at 0x1038d3230>
    // <conv.chunks.Comment object at 0x1038d3380>
    // <conv.chunks.Comment object at 0x1038d3410>
    sty(0x0);
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x0);
    // <conv.chunks.Comment object at 0x1038d3770>
    // <conv.chunks.Comment object at 0x1038d3830>
    sta(Enemy_Y_Position, x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // <conv.chunks.Comment object at 0x1038d3a70>
    return 0;
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(0x13);
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(0x1);
    // <conv.chunks.Comment object at 0x1038d3d40>
    lda(FrameCounter);
    anda(0b11);
    BNE(NoIncXM);
    ldy(XMoveSecondaryCounter, x);
    lda(XMovePrimaryCounter, x);
    // <conv.chunks.Comment object at 0x1038d3f20>
    // <conv.chunks.Comment object at 0x1038d8080>
    // <conv.chunks.Comment object at 0x1038d81d0>
    // <conv.chunks.Comment object at 0x1038d8320>
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
    // <conv.chunks.Comment object at 0x1038d8b00>
    inc(XMovePrimaryCounter, x);
    return 0;
    JMP(DecSeXM);
}

int DecSeXM() {
    // <conv.chunks.Comment object at 0x1038d8d40>
    tya();
    BEQ(IncPXM);
    dec(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x1038d8e60>
    // <conv.chunks.Comment object at 0x1038d8fb0>
    return 0;
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x1038d91c0>
    pha();
    ldy(0x1);
    // <conv.chunks.Comment object at 0x1038d93a0>
    lda(XMovePrimaryCounter, x);
    anda(0b10);
    BNE(XMRight);
    // <conv.chunks.Comment object at 0x1038d95e0>
    // <conv.chunks.Comment object at 0x1038d9700>
    lda(XMoveSecondaryCounter, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1038d9970>
    // <conv.chunks.Comment object at 0x1038d9ac0>
    adc(0x1);
    sta(XMoveSecondaryCounter, x);
    ldy(0x2);
    JMP(XMRight);
}

int XMRight() {
    // <conv.chunks.Comment object at 0x1038d9d60>
    // <conv.chunks.Comment object at 0x1038d9df0>
    sty(Enemy_MovingDir, x);
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    pla();
    sta(XMoveSecondaryCounter, x);
    // <conv.chunks.Comment object at 0x1038da150>
    // <conv.chunks.Comment object at 0x1038da120>
    // <conv.chunks.Comment object at 0x1038da300>
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
    // <conv.chunks.Comment object at 0x1038da7b0>
    // <conv.chunks.Comment object at 0x1038da8d0>
    // <conv.chunks.Comment object at 0x1038da9f0>
    // <conv.chunks.Comment object at 0x1038dab10>
    // <conv.chunks.Comment object at 0x1038dad20>
    // <conv.chunks.Comment object at 0x1038dae70>
    txa();
    lsr();
    BCC(FBLeft);
    ldy(Player_MovingDir);
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // <conv.chunks.Comment object at 0x1038db050>
    // <conv.chunks.Comment object at 0x1038db0e0>
    // <conv.chunks.Comment object at 0x1038db230>
    // <conv.chunks.Comment object at 0x1038db350>
    // <conv.chunks.Comment object at 0x1038db4a0>
    ldy(0x2);
    JSR(PlayerEnemyDiff);
    BPL(SBMDir);
    dey();
    JMP(SBMDir);
}

int SBMDir() {
    // <conv.chunks.Comment object at 0x1038db590>
    // <conv.chunks.Comment object at 0x1038db740>
    // <conv.chunks.Comment object at 0x1038db8c0>
    // <conv.chunks.Comment object at 0x1038db950>
    sty(Enemy_MovingDir, x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1038dbb30>
    // <conv.chunks.Comment object at 0x1038dbc50>
    sec();
    sbc(Enemy_Y_MoveForce, x);
    cmp(0x20);
    BCC(SwimX);
    sta(Enemy_Y_Position, x);
    JMP(SwimX);
}

int SwimX() {
    // <conv.chunks.Comment object at 0x1038dbe30>
    // <conv.chunks.Comment object at 0x1038dbf80>
    // <conv.chunks.Comment object at 0x1038e4050>
    // <conv.chunks.Comment object at 0x1038e4230>
    // <conv.chunks.Comment object at 0x1038e4380>
    ldy(Enemy_MovingDir, x);
    dey();
    BNE(LeftSwim);
    // <conv.chunks.Comment object at 0x1038e45c0>
    lda(Enemy_X_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x1038e4830>
    adc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1038e49e0>
    lda(Enemy_PageLoc, x);
    adc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1038e4c50>
    // <conv.chunks.Comment object at 0x1038e4ce0>
    return 0;
    JMP(LeftSwim);
}

int LeftSwim() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x1038e50d0>
    sbc(BlooperMoveSpeed, x);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1038e5280>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1038e54f0>
    // <conv.chunks.Comment object at 0x1038e5580>
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
    // <conv.chunks.Comment object at 0x1038e5970>
    // <conv.chunks.Comment object at 0x1038e5ac0>
    // <conv.chunks.Comment object at 0x1038e5be0>
    lda(FrameCounter);
    anda(0b111);
    pha();
    lda(BlooperMoveCounter, x);
    lsr();
    BCS(SlowSwim);
    pla();
    BNE(BSwimE);
    // <conv.chunks.Comment object at 0x1038e5df0>
    // <conv.chunks.Comment object at 0x1038e5f40>
    // <conv.chunks.Comment object at 0x1038e5fd0>
    // <conv.chunks.Comment object at 0x1038e6150>
    // <conv.chunks.Comment object at 0x1038e61e0>
    // <conv.chunks.Comment object at 0x1038e6330>
    // <conv.chunks.Comment object at 0x1038e63c0>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x1038e6660>
    adc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    // <conv.chunks.Comment object at 0x1038e6750>
    // <conv.chunks.Comment object at 0x1038e6930>
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
    // <conv.chunks.Comment object at 0x1038e6f60>
    // <conv.chunks.Comment object at 0x1038e6ff0>
    lda(Enemy_Y_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x1038e7290>
    sbc(0x1);
    sta(Enemy_Y_MoveForce, x);
    sta(BlooperMoveSpeed, x);
    BNE(NoSSw);
    inc(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x1038e7380>
    // <conv.chunks.Comment object at 0x1038e7560>
    // <conv.chunks.Comment object at 0x1038e76b0>
    // <conv.chunks.Comment object at 0x1038e7800>
    lda(0x2);
    sta(EnemyIntervalTimer, x);
    JMP(NoSSw);
}

int NoSSw() {
    // <conv.chunks.Comment object at 0x1038e79b0>
    // <conv.chunks.Comment object at 0x1038e7bc0>
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
    // <conv.chunks.Comment object at 0x1038e7fb0>
    // <conv.chunks.Comment object at 0x1038f0140>
    // <conv.chunks.Comment object at 0x1038f01d0>
    // <conv.chunks.Comment object at 0x1038f0320>
    // <conv.chunks.Comment object at 0x1038f04a0>
    return 0;
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda(Enemy_Y_Position, x);
    adc(0x10);
    cmp(Player_Y_Position);
    BCC(Floatdown);
    // <conv.chunks.Comment object at 0x1038f05f0>
    // <conv.chunks.Comment object at 0x1038f0740>
    // <conv.chunks.Comment object at 0x1038f07d0>
    // <conv.chunks.Comment object at 0x1038f0980>
    lda(0x0);
    sta(BlooperMoveCounter, x);
    // <conv.chunks.Comment object at 0x1038f0b00>
    return 0;
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x1038f0dd0>
    anda(0b100000);
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // <conv.chunks.Comment object at 0x1038f1010>
    // <conv.chunks.Comment object at 0x1038f1160>
    // <conv.chunks.Comment object at 0x1038f1280>
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
    // <conv.chunks.Comment object at 0x1038f17c0>
    // <conv.chunks.Comment object at 0x1038f1b20>
    // <conv.chunks.Comment object at 0x1038f1c40>
    // <conv.chunks.Comment object at 0x1038f1d90>
    // <conv.chunks.Comment object at 0x1038f1eb0>
    sta(0x3);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1038f1fd0>
    sec();
    sbc(0xa);
    tay();
    lda(offsetof(G, SwimCCXMoveData), y);
    // <conv.chunks.Comment object at 0x1038f2210>
    // <conv.chunks.Comment object at 0x1038f2360>
    // <conv.chunks.Comment object at 0x1038f23f0>
    sta(0x2);
    lda(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x1038f2540>
    sec();
    sbc(0x2);
    sta(Enemy_X_MoveForce, x);
    lda(Enemy_X_Position, x);
    sbc(0x0);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x1038f2840>
    // <conv.chunks.Comment object at 0x1038f28d0>
    // <conv.chunks.Comment object at 0x1038f2a80>
    // <conv.chunks.Comment object at 0x1038f2bd0>
    // <conv.chunks.Comment object at 0x1038f2c60>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    sta(Enemy_PageLoc, x);
    // <conv.chunks.Comment object at 0x1038f2f60>
    // <conv.chunks.Comment object at 0x1038f2ff0>
    lda(0x20);
    sta(0x2);
    cpx(0x2);
    BCC(ExSwCC);
    lda(CheepCheepMoveMFlag, x);
    cmp(0x10);
    BCC(CCSwimUpwards);
    // <conv.chunks.Comment object at 0x1038f32f0>
    // <conv.chunks.Comment object at 0x1038f3380>
    // <conv.chunks.Comment object at 0x1038f3470>
    // <conv.chunks.Comment object at 0x1038f3650>
    // <conv.chunks.Comment object at 0x1038f37a0>
    // <conv.chunks.Comment object at 0x1038f3830>
    lda(Enemy_YMF_Dummy, x);
    clc();
    adc(0x2);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(0x3);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1038f3bc0>
    // <conv.chunks.Comment object at 0x1038f3c50>
    // <conv.chunks.Comment object at 0x1038f3e00>
    // <conv.chunks.Comment object at 0x1038f3f80>
    // <conv.chunks.Comment object at 0x1038f3f50>
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
    // <conv.chunks.Comment object at 0x1038fc770>
    // <conv.chunks.Comment object at 0x1038fc800>
    // <conv.chunks.Comment object at 0x1038fc9b0>
    // <conv.chunks.Comment object at 0x1038fcb30>
    // <conv.chunks.Comment object at 0x1038fcbc0>
    lda(Enemy_Y_HighPos, x);
    sbc(0x0);
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta(Enemy_Y_HighPos, x);
    ldy(0x0);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1038fcfe0>
    // <conv.chunks.Comment object at 0x1038fd130>
    // <conv.chunks.Comment object at 0x1038fd1c0>
    sec();
    sbc(CheepCheepOrigYPos, x);
    BPL(YPDiff);
    ldy(0x10);
    // <conv.chunks.Comment object at 0x1038fd430>
    // <conv.chunks.Comment object at 0x1038fd580>
    // <conv.chunks.Comment object at 0x1038fd6d0>
    eor(0xff);
    clc();
    adc(0x1);
    JMP(YPDiff);
}

int YPDiff() {
    // <conv.chunks.Comment object at 0x1038fd910>
    // <conv.chunks.Comment object at 0x1038fd9a0>
    // <conv.chunks.Comment object at 0x1038fda30>
    cmp(0xf);
    BCC(ExSwCC);
    // <conv.chunks.Comment object at 0x1038fdbb0>
    tya();
    sta(CheepCheepMoveMFlag, x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // <conv.chunks.Comment object at 0x1038fde20>
    // <conv.chunks.Comment object at 0x1038fdfa0>
    return 0;
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda(Enemy_OffscreenBits);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x1038fe450>
    // <conv.chunks.Comment object at 0x103906780>
    // <conv.chunks.Comment object at 0x1039068a0>
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
    // <conv.chunks.Comment object at 0x103906ab0>
    // <conv.chunks.Comment object at 0x103906bd0>
    // <conv.chunks.Comment object at 0x103906d20>
    // <conv.chunks.Comment object at 0x103906e70>
    // <conv.chunks.Comment object at 0x103906f90>
    // <conv.chunks.Comment object at 0x1039070b0>
    // <conv.chunks.Comment object at 0x103907200>
    lda(FirebarSpinState_High, x);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1039073b0>
    cpy(0x1f);
    BCC(SetupGFB);
    cmp(0x8);
    BEQ(SkpFSte);
    // <conv.chunks.Comment object at 0x103907560>
    // <conv.chunks.Comment object at 0x103907710>
    // <conv.chunks.Comment object at 0x1039077a0>
    cmp(0x18);
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x103907c80>
    sta(FirebarSpinState_High, x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // <conv.chunks.Comment object at 0x103907ec0>
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
    // <conv.chunks.Comment object at 0x103907fb0>
    // <conv.chunks.Comment object at 0x103910170>
    // <conv.chunks.Comment object at 0x103910290>
    // <conv.chunks.Comment object at 0x1039103e0>
    // <conv.chunks.Comment object at 0x103910500>
    // <conv.chunks.Comment object at 0x103910680>
    // <conv.chunks.Comment object at 0x103910710>
    // <conv.chunks.Comment object at 0x103910890>
    // <conv.chunks.Comment object at 0x103910a10>
    lda(0x1);
    sta(0x0);
    JSR(FirebarCollision);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x103910c20>
    // <conv.chunks.Comment object at 0x103910cb0>
    // <conv.chunks.Comment object at 0x103910e30>
    lda(Enemy_ID, x);
    cmp(0x1f);
    BCC(SetMFbar);
    ldy(0xb);
    JMP(SetMFbar);
}

int SetMFbar() {
    // <conv.chunks.Comment object at 0x103911070>
    // <conv.chunks.Comment object at 0x103911100>
    // <conv.chunks.Comment object at 0x1039112b0>
    // <conv.chunks.Comment object at 0x103911340>
    sty(0xed);
    lda(0x0);
    sta(0x0);
    JMP(DrawFbar);
}

int DrawFbar() {
    // <conv.chunks.Comment object at 0x103911640>
    // <conv.chunks.Comment object at 0x1039116d0>
    lda(0xef);
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103911820>
    // <conv.chunks.Comment object at 0x1039119a0>
    // <conv.chunks.Comment object at 0x103911af0>
    cmp(0x4);
    BNE(NextFbar);
    ldy(DuplicateObj_Offset);
    lda(Enemy_SprDataOffset, y);
    sta(0x6);
    JMP(NextFbar);
}

int NextFbar() {
    // <conv.chunks.Comment object at 0x103911dc0>
    // <conv.chunks.Comment object at 0x103911ee0>
    // <conv.chunks.Comment object at 0x103912060>
    // <conv.chunks.Comment object at 0x1039120f0>
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
    // <conv.chunks.Comment object at 0x1039126f0>
    sta(0x5);
    ldy(0x6);
    lda(0x1);
    lsr(0x5);
    BCS(AddHA);
    // <conv.chunks.Comment object at 0x103912870>
    // <conv.chunks.Comment object at 0x103912780>
    // <conv.chunks.Comment object at 0x103912990>
    // <conv.chunks.Comment object at 0x103912bd0>
    eor(0xff);
    adc(0x1);
    JMP(AddHA);
}

int AddHA() {
    // <conv.chunks.Comment object at 0x103912de0>
    // <conv.chunks.Comment object at 0x103912f00>
    clc();
    adc(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    sta(0x6);
    cmp(Enemy_Rel_XPos);
    BCS(SubtR1);
    // <conv.chunks.Comment object at 0x1039130b0>
    // <conv.chunks.Comment object at 0x1039131d0>
    // <conv.chunks.Comment object at 0x103913350>
    // <conv.chunks.Comment object at 0x1039133e0>
    // <conv.chunks.Comment object at 0x103913560>
    lda(Enemy_Rel_XPos);
    sec();
    sbc(0x6);
    // <conv.chunks.Comment object at 0x1039137d0>
    // <conv.chunks.Comment object at 0x103913890>
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // <conv.chunks.Comment object at 0x103913aa0>
    sec();
    sbc(Enemy_Rel_XPos);
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // <conv.chunks.Comment object at 0x103913bc0>
    // <conv.chunks.Comment object at 0x103913ce0>
    cmp(0x59);
    BCC(VAHandl);
    lda(0xf8);
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // <conv.chunks.Comment object at 0x103913dd0>
    // <conv.chunks.Comment object at 0x103913fb0>
    // <conv.chunks.Comment object at 0x103918080>
    // <conv.chunks.Comment object at 0x103918260>
    lda(Enemy_Rel_YPos);
    cmp(0xf8);
    // <conv.chunks.Comment object at 0x1039183e0>
    BEQ(SetVFbr);
    lda(0x2);
    lsr(0x5);
    BCS(AddVA);
    // <conv.chunks.Comment object at 0x103918650>
    // <conv.chunks.Comment object at 0x103918620>
    // <conv.chunks.Comment object at 0x103918800>
    eor(0xff);
    adc(0x1);
    JMP(AddVA);
}

int AddVA() {
    // <conv.chunks.Comment object at 0x103918a10>
    // <conv.chunks.Comment object at 0x103918b30>
    clc();
    adc(Enemy_Rel_YPos);
    JMP(SetVFbr);
}

int SetVFbr() {
    // <conv.chunks.Comment object at 0x103918ce0>
    // <conv.chunks.Comment object at 0x103918e00>
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
    // <conv.chunks.Comment object at 0x103918fb0>
    // <conv.chunks.Comment object at 0x103919250>
    // <conv.chunks.Comment object at 0x103919310>
    // <conv.chunks.Comment object at 0x1039193a0>
    // <conv.chunks.Comment object at 0x1039194c0>
    // <conv.chunks.Comment object at 0x1039195e0>
    // <conv.chunks.Comment object at 0x103919760>
    ldy(Player_Y_HighPos);
    dey();
    BNE(NoColFB);
    ldy(Player_Y_Position);
    lda(PlayerSize);
    BNE(AdjSm);
    // <conv.chunks.Comment object at 0x103919970>
    // <conv.chunks.Comment object at 0x103919a00>
    // <conv.chunks.Comment object at 0x103919b50>
    // <conv.chunks.Comment object at 0x103919c70>
    // <conv.chunks.Comment object at 0x103919d90>
    lda(CrouchingFlag);
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // <conv.chunks.Comment object at 0x103919fd0>
    // <conv.chunks.Comment object at 0x10391a120>
    inc(0x5);
    inc(0x5);
    // <conv.chunks.Comment object at 0x10391a180>
    tya();
    clc();
    adc(0x18);
    // <conv.chunks.Comment object at 0x10391a480>
    // <conv.chunks.Comment object at 0x10391a510>
    tay();
    JMP(BigJp);
}

int BigJp() {
    // <conv.chunks.Comment object at 0x10391a6c0>
    tya();
    JMP(FBCLoop);
}

int FBCLoop() {
    // <conv.chunks.Comment object at 0x10391a7e0>
    sec();
    sbc(0x7);
    BPL(ChkVFBD);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10391a930>
    // <conv.chunks.Comment object at 0x10391a9c0>
    // <conv.chunks.Comment object at 0x10391ab70>
    // <conv.chunks.Comment object at 0x10391acc0>
    adc(0x1);
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // <conv.chunks.Comment object at 0x10391adb0>
    cmp(0x8);
    BCS(Chk2Ofs);
    lda(0x6);
    cmp(0xf0);
    // <conv.chunks.Comment object at 0x10391b110>
    // <conv.chunks.Comment object at 0x10391b1a0>
    BCS(Chk2Ofs);
    lda(((Sprite_X_Position) + (4)));
    // <conv.chunks.Comment object at 0x10391b440>
    clc();
    adc(0x4);
    sta(0x4);
    sec();
    sbc(0x6);
    BPL(ChkFBCl);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10391b6b0>
    // <conv.chunks.Comment object at 0x10391b800>
    // <conv.chunks.Comment object at 0x10391b740>
    // <conv.chunks.Comment object at 0x10391b9e0>
    // <conv.chunks.Comment object at 0x10391ba70>
    // <conv.chunks.Comment object at 0x10391bc20>
    // <conv.chunks.Comment object at 0x10391bd70>
    adc(0x1);
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // <conv.chunks.Comment object at 0x10391be60>
    cmp(0x8);
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // <conv.chunks.Comment object at 0x10391bfe0>
    // <conv.chunks.Comment object at 0x103920200>
    lda(0x5);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x103920320>
    BEQ(NoColFB);
    ldy(0x5);
    // <conv.chunks.Comment object at 0x1039205f0>
    lda(Player_Y_Position);
    clc();
    adc(offsetof(G, FirebarYPos), y);
    inc(0x5);
    // <conv.chunks.Comment object at 0x103920860>
    // <conv.chunks.Comment object at 0x1039209e0>
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // <conv.chunks.Comment object at 0x103920bf0>
    ldx(0x1);
    lda(0x4);
    cmp(0x6);
    BCS(SetSDir);
    inx();
    JMP(SetSDir);
}

int SetSDir() {
    // <conv.chunks.Comment object at 0x103920da0>
    // <conv.chunks.Comment object at 0x103920ce0>
    // <conv.chunks.Comment object at 0x103920f50>
    // <conv.chunks.Comment object at 0x103921130>
    // <conv.chunks.Comment object at 0x1039211c0>
    stx(Enemy_MovingDir);
    ldx(0x0);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103921460>
    pha();
    JSR(InjurePlayer);
    // <conv.chunks.Comment object at 0x1039215e0>
    pla();
    sta(0x0);
    JMP(NoColFB);
}

int NoColFB() {
    // <conv.chunks.Comment object at 0x1039217c0>
    // <conv.chunks.Comment object at 0x103921850>
    pla();
    clc();
    // <conv.chunks.Comment object at 0x103921a00>
    adc(0x4);
    sta(0x6);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103921af0>
    return 0;
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(0b1111);
    // <conv.chunks.Comment object at 0x103921e80>
    // <conv.chunks.Comment object at 0x103921f10>
    cmp(0x9);
    BCC(GetHAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x103922090>
    // <conv.chunks.Comment object at 0x103922240>
    clc();
    adc(0x1);
    JMP(GetHAdder);
}

int GetHAdder() {
    // <conv.chunks.Comment object at 0x103922450>
    sta(0x1);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x103922510>
    // <conv.chunks.Comment object at 0x1039226f0>
    clc();
    adc(0x1);
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x103922960>
    // <conv.chunks.Comment object at 0x103922930>
    // <conv.chunks.Comment object at 0x103922b10>
    sta(0x1);
    pla();
    pha();
    // <conv.chunks.Comment object at 0x103922cf0>
    // <conv.chunks.Comment object at 0x103922e40>
    clc();
    adc(0x8);
    anda(0b1111);
    cmp(0x9);
    // <conv.chunks.Comment object at 0x103922f60>
    // <conv.chunks.Comment object at 0x103922ff0>
    // <conv.chunks.Comment object at 0x1039231a0>
    BCC(GetVAdder);
    eor(0b1111);
    // <conv.chunks.Comment object at 0x1039233b0>
    clc();
    adc(0x1);
    JMP(GetVAdder);
}

int GetVAdder() {
    // <conv.chunks.Comment object at 0x1039235c0>
    sta(0x2);
    ldy(0x0);
    lda(offsetof(G, FirebarTblOffsets), y);
    // <conv.chunks.Comment object at 0x103923740>
    clc();
    adc(0x2);
    // <conv.chunks.Comment object at 0x103923aa0>
    tay();
    lda(offsetof(G, FirebarPosLookupTbl), y);
    // <conv.chunks.Comment object at 0x103923c20>
    sta(0x2);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x103923e00>
    // <conv.chunks.Comment object at 0x103923f50>
    lsr();
    lsr();
    tay();
    lda(offsetof(G, FirebarMirrorData), y);
    sta(0x3);
    // <conv.chunks.Comment object at 0x103928170>
    // <conv.chunks.Comment object at 0x103928200>
    // <conv.chunks.Comment object at 0x1039283b0>
    return 0;
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda(Enemy_State, x);
    anda(0b100000);
    BEQ(FlyCC);
    // <conv.chunks.Comment object at 0x103928650>
    // <conv.chunks.Comment object at 0x103928ce0>
    // <conv.chunks.Comment object at 0x103928e00>
    lda(0x0);
    sta(Enemy_SprAttrib, x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // <conv.chunks.Comment object at 0x103928fb0>
    // <conv.chunks.Comment object at 0x103929190>
    // <conv.chunks.Comment object at 0x1039292b0>
    JSR(MoveEnemyHorizontally);
    ldy(0xd);
    lda(0x5);
    JSR(SetXMoveAmt);
    // <conv.chunks.Comment object at 0x103929430>
    // <conv.chunks.Comment object at 0x1039294c0>
    // <conv.chunks.Comment object at 0x1039295e0>
    lda(Enemy_Y_MoveForce, x);
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x1039298e0>
    // <conv.chunks.Comment object at 0x1039299a0>
    lsr();
    lsr();
    tay();
    lda(Enemy_Y_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x103929b80>
    // <conv.chunks.Comment object at 0x103929c10>
    // <conv.chunks.Comment object at 0x103929d90>
    sbc(offsetof(G, PRandomSubtracter), y);
    BPL(AddCCF);
    // <conv.chunks.Comment object at 0x103929f40>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10392a1b0>
    adc(0x1);
    JMP(AddCCF);
}

int AddCCF() {
    // <conv.chunks.Comment object at 0x10392a2a0>
    cmp(0x8);
    BCS(BPGet);
    // <conv.chunks.Comment object at 0x10392a420>
    lda(Enemy_Y_MoveForce, x);
    clc();
    adc(0x10);
    // <conv.chunks.Comment object at 0x10392a7b0>
    sta(Enemy_Y_MoveForce, x);
    lsr();
    // <conv.chunks.Comment object at 0x10392aa20>
    lsr();
    lsr();
    lsr();
    tay();
    JMP(BPGet);
}

int BPGet() {
    // <conv.chunks.Comment object at 0x10392acf0>
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
    // <conv.chunks.Comment object at 0x10392b1d0>
    // <conv.chunks.Comment object at 0x10392b4a0>
    // <conv.chunks.Comment object at 0x10392b5c0>
    // <conv.chunks.Comment object at 0x10392b710>
    // <conv.chunks.Comment object at 0x10392b830>
    lda(Enemy_State, x);
    BEQ(Fr12S);
    // <conv.chunks.Comment object at 0x10392b9e0>
    lda(0x0);
    sta(LakituMoveDirection, x);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x10392bb90>
    // <conv.chunks.Comment object at 0x10392bd70>
    lda(0x10);
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda(Spiny);
    sta(EnemyFrenzyBuffer);
    // <conv.chunks.Comment object at 0x10393c1d0>
    ldy(0x2);
    JMP(LdLDa);
}

int LdLDa() {
    // <conv.chunks.Comment object at 0x10393c410>
    lda(offsetof(G, LakituDiffAdj), y);
    sta(0x1, y);
    // <conv.chunks.Comment object at 0x10393c650>
    dey();
    BPL(LdLDa);
    JSR(PlayerLakituDiff);
    JMP(SetLSpd);
}

int SetLSpd() {
    // <conv.chunks.Comment object at 0x10393c830>
    // <conv.chunks.Comment object at 0x10393c980>
    // <conv.chunks.Comment object at 0x10393caa0>
    sta(LakituMoveSpeed, x);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x10393cc50>
    lda(LakituMoveDirection, x);
    anda(0x1);
    BNE(SetLMov);
    // <conv.chunks.Comment object at 0x10393ce90>
    // <conv.chunks.Comment object at 0x10393cf20>
    lda(LakituMoveSpeed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x10393d220>
    clc();
    adc(0x1);
    sta(LakituMoveSpeed, x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // <conv.chunks.Comment object at 0x10393d430>
    // <conv.chunks.Comment object at 0x10393d640>
    // <conv.chunks.Comment object at 0x10393d6d0>
    sty(Enemy_MovingDir, x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(0x0);
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // <conv.chunks.Comment object at 0x10393d9d0>
    // <conv.chunks.Comment object at 0x10393da60>
    // <conv.chunks.Comment object at 0x10393dc10>
    // <conv.chunks.Comment object at 0x10393dd60>
    lda(0x0);
    eor(0xff);
    // <conv.chunks.Comment object at 0x10393ddf0>
    clc();
    adc(0x1);
    // <conv.chunks.Comment object at 0x10393e090>
    sta(0x0);
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // <conv.chunks.Comment object at 0x10393e120>
    lda(0x0);
    cmp(0x3c);
    // <conv.chunks.Comment object at 0x10393e390>
    BCC(ChkPSpeed);
    lda(0x3c);
    // <conv.chunks.Comment object at 0x10393e600>
    sta(0x0);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x10393e690>
    cmp(Lakitu);
    BNE(ChkPSpeed);
    tya();
    cmp(LakituMoveDirection, x);
    BEQ(ChkPSpeed);
    lda(LakituMoveDirection, x);
    BEQ(SetLMovD);
    dec(LakituMoveSpeed, x);
    lda(LakituMoveSpeed, x);
    // <conv.chunks.Comment object at 0x10393e990>
    // <conv.chunks.Comment object at 0x10393ebd0>
    // <conv.chunks.Comment object at 0x10393ec60>
    // <conv.chunks.Comment object at 0x10393edb0>
    // <conv.chunks.Comment object at 0x10393eed0>
    // <conv.chunks.Comment object at 0x10393f020>
    // <conv.chunks.Comment object at 0x10393f140>
    // <conv.chunks.Comment object at 0x10393f290>
    BNE(ExMoveLak);
    JMP(SetLMovD);
}

int SetLMovD() {
    // <conv.chunks.Comment object at 0x10393f4d0>
    tya();
    sta(LakituMoveDirection, x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(0x0);
    anda(0b111100);
    lsr();
    // <conv.chunks.Comment object at 0x10393f7d0>
    // <conv.chunks.Comment object at 0x10393f980>
    lsr();
    sta(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x10393fad0>
    // <conv.chunks.Comment object at 0x10393fb60>
    lda(Player_X_Speed);
    BEQ(SubDifAdj);
    // <conv.chunks.Comment object at 0x10393fdd0>
    lda(ScrollAmount);
    BEQ(SubDifAdj);
    iny();
    // <conv.chunks.Comment object at 0x10393ffe0>
    // <conv.chunks.Comment object at 0x103944170>
    lda(Player_X_Speed);
    cmp(0x19);
    // <conv.chunks.Comment object at 0x1039442f0>
    BCC(ChkSpinyO);
    lda(ScrollAmount);
    cmp(0x2);
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // <conv.chunks.Comment object at 0x1039445f0>
    // <conv.chunks.Comment object at 0x103944680>
    // <conv.chunks.Comment object at 0x103944860>
    // <conv.chunks.Comment object at 0x1039448f0>
    lda(Enemy_ID, x);
    cmp(Spiny);
    BNE(ChkEmySpd);
    lda(Player_X_Speed);
    // <conv.chunks.Comment object at 0x103944ad0>
    // <conv.chunks.Comment object at 0x103944cb0>
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // <conv.chunks.Comment object at 0x103944ec0>
    lda(Enemy_Y_Speed, x);
    BNE(SubDifAdj);
    ldy(0x0);
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // <conv.chunks.Comment object at 0x103945040>
    // <conv.chunks.Comment object at 0x103945160>
    // <conv.chunks.Comment object at 0x1039451f0>
    lda(0x1, y);
    ldy(0x0);
    JMP(SPixelLak);
}

int SPixelLak() {
    // <conv.chunks.Comment object at 0x103945430>
    // <conv.chunks.Comment object at 0x1039454c0>
    sec();
    sbc(0x1);
    // <conv.chunks.Comment object at 0x103945610>
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // <conv.chunks.Comment object at 0x1039457c0>
    // <conv.chunks.Comment object at 0x1039458e0>
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
    // <conv.chunks.Comment object at 0x103945d30>
    // <conv.chunks.Comment object at 0x103945b20>
    // <conv.chunks.Comment object at 0x103946690>
    // <conv.chunks.Comment object at 0x1039466f0>
    // <conv.chunks.Comment object at 0x103946930>
    // <conv.chunks.Comment object at 0x103946a50>
    BEQ(RemoveBridge);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x103946c90>
    BEQ(SetM2);
    lda(Enemy_Y_Position, x);
    cmp(0xe0);
    // <conv.chunks.Comment object at 0x103946ed0>
    // <conv.chunks.Comment object at 0x103947020>
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // <conv.chunks.Comment object at 0x103947230>
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
    // <conv.chunks.Comment object at 0x1039479b0>
    // <conv.chunks.Comment object at 0x103947ad0>
    lda(0x4);
    sta(BowserFeetCounter);
    // <conv.chunks.Comment object at 0x103947c80>
    lda(BowserBodyControls);
    eor(0x1);
    // <conv.chunks.Comment object at 0x103947f20>
    sta(BowserBodyControls);
    lda(0x22);
    // <conv.chunks.Comment object at 0x10394c170>
    sta(0x5);
    ldy(BridgeCollapseOffset);
    lda(offsetof(G, BridgeCollapseData), y);
    // <conv.chunks.Comment object at 0x10394c200>
    // <conv.chunks.Comment object at 0x10394c4a0>
    sta(0x4);
    ldy(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x10394c5f0>
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
    // <conv.chunks.Comment object at 0x10394c890>
    // <conv.chunks.Comment object at 0x10394c920>
    // <conv.chunks.Comment object at 0x10394cad0>
    // <conv.chunks.Comment object at 0x10394cbf0>
    // <conv.chunks.Comment object at 0x10394cd10>
    // <conv.chunks.Comment object at 0x10394ce30>
    // <conv.chunks.Comment object at 0x10394cf50>
    // <conv.chunks.Comment object at 0x10394d070>
    // <conv.chunks.Comment object at 0x10394d190>
    lda(BridgeCollapseOffset);
    cmp(0xf);
    BNE(NoBFall);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x10394d3a0>
    // <conv.chunks.Comment object at 0x10394d430>
    // <conv.chunks.Comment object at 0x10394d610>
    lda(0b1000000);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x10394d820>
    lda(Sfx_BowserFall);
    sta(Square2SoundQueue);
    JMP(NoBFall);
}

int NoBFall() {
    // <conv.chunks.Comment object at 0x10394da60>
    // <conv.chunks.Comment object at 0x10394db80>
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x10394ddc0>
    // <conv.chunks.Comment object at 0x10394e120>
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
    // <conv.chunks.Comment object at 0x10394e6f0>
    // <conv.chunks.Comment object at 0x10394e780>
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta(EnemyFrenzyBuffer);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10394e990>
    // <conv.chunks.Comment object at 0x10394ea20>
    // <conv.chunks.Comment object at 0x10394eb40>
    // <conv.chunks.Comment object at 0x10394ec60>
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
    // <conv.chunks.Comment object at 0x10394eea0>
    // <conv.chunks.Comment object at 0x10394f050>
    // <conv.chunks.Comment object at 0x10394f170>
    // <conv.chunks.Comment object at 0x10394f290>
    // <conv.chunks.Comment object at 0x10394f3b0>
    lda(BowserBodyControls);
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // <conv.chunks.Comment object at 0x10394f500>
    // <conv.chunks.Comment object at 0x10394f650>
    // <conv.chunks.Comment object at 0x10394f770>
    dec(BowserFeetCounter);
    BNE(ResetMDr);
    lda(0x20);
    // <conv.chunks.Comment object at 0x10394f8f0>
    // <conv.chunks.Comment object at 0x10394fa10>
    sta(BowserFeetCounter);
    lda(BowserBodyControls);
    eor(0b1);
    // <conv.chunks.Comment object at 0x10394fc20>
    // <conv.chunks.Comment object at 0x10394fd40>
    sta(BowserBodyControls);
    JMP(ResetMDr);
}

int ResetMDr() {
    // <conv.chunks.Comment object at 0x10394ff50>
    lda(FrameCounter);
    anda(0b1111);
    BNE(B_FaceP);
    lda(0x2);
    sta(Enemy_MovingDir, x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // <conv.chunks.Comment object at 0x1039580e0>
    // <conv.chunks.Comment object at 0x103958200>
    // <conv.chunks.Comment object at 0x103958350>
    // <conv.chunks.Comment object at 0x1039583e0>
    // <conv.chunks.Comment object at 0x1039585c0>
    lda(EnemyFrameTimer, x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // <conv.chunks.Comment object at 0x103958770>
    // <conv.chunks.Comment object at 0x103958890>
    // <conv.chunks.Comment object at 0x1039589b0>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103958b30>
    lda(0x2);
    sta(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x103958d70>
    lda(0x20);
    sta(EnemyFrameTimer, x);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x103958f80>
    // <conv.chunks.Comment object at 0x103959160>
    lda(Enemy_X_Position, x);
    cmp(0xc8);
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // <conv.chunks.Comment object at 0x1039593a0>
    // <conv.chunks.Comment object at 0x103959430>
    // <conv.chunks.Comment object at 0x1039595e0>
    lda(FrameCounter);
    anda(0b11);
    BNE(HammerChk);
    // <conv.chunks.Comment object at 0x103959820>
    lda(Enemy_X_Position, x);
    cmp(BowserOrigXPos);
    BNE(GetDToO);
    // <conv.chunks.Comment object at 0x103959a60>
    // <conv.chunks.Comment object at 0x103959b80>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x103959df0>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(MaxRangeFromOrigin);
    JMP(GetDToO);
}

int GetDToO() {
    lda(Enemy_X_Position, x);
    clc();
    adc(BowserMovementSpeed);
    // <conv.chunks.Comment object at 0x10395a3c0>
    // <conv.chunks.Comment object at 0x10395a450>
    sta(Enemy_X_Position, x);
    ldy(Enemy_MovingDir, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x10395a7b0>
    BEQ(HammerChk);
    ldy(0xff);
    sec();
    sbc(BowserOrigXPos);
    BPL(CompDToO);
    // <conv.chunks.Comment object at 0x10395a9c0>
    // <conv.chunks.Comment object at 0x10395ab10>
    // <conv.chunks.Comment object at 0x10395aba0>
    // <conv.chunks.Comment object at 0x10395acc0>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10395af00>
    adc(0x1);
    ldy(0x1);
    JMP(CompDToO);
}

int CompDToO() {
    // <conv.chunks.Comment object at 0x10395aff0>
    // <conv.chunks.Comment object at 0x10395b110>
    cmp(MaxRangeFromOrigin);
    BCC(HammerChk);
    sty(BowserMovementSpeed);
    JMP(HammerChk);
}

int HammerChk() {
    // <conv.chunks.Comment object at 0x10395b2f0>
    // <conv.chunks.Comment object at 0x10395b410>
    // <conv.chunks.Comment object at 0x10395b530>
    lda(EnemyFrameTimer, x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x10395b6b0>
    // <conv.chunks.Comment object at 0x10395b7d0>
    // <conv.chunks.Comment object at 0x10395b8f0>
    cmp(World6);
    BCC(SetHmrTmr);
    // <conv.chunks.Comment object at 0x10395ba40>
    lda(FrameCounter);
    anda(0b11);
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // <conv.chunks.Comment object at 0x10395bd40>
    // <conv.chunks.Comment object at 0x10395be60>
    // <conv.chunks.Comment object at 0x10395bf80>
    // <conv.chunks.Comment object at 0x1039600e0>
    lda(Enemy_Y_Position, x);
    cmp(0x80);
    BCC(ChkFireB);
    // <conv.chunks.Comment object at 0x103960260>
    // <conv.chunks.Comment object at 0x1039602f0>
    lda(PseudoRandomBitReg, x);
    anda(0b11);
    // <conv.chunks.Comment object at 0x1039605c0>
    tay();
    lda(offsetof(G, PRandomRange), y);
    sta(EnemyFrameTimer, x);
    JMP(SkipToFB);
}

int SkipToFB() {
    // <conv.chunks.Comment object at 0x103960770>
    // <conv.chunks.Comment object at 0x1039608c0>
    // <conv.chunks.Comment object at 0x103960a10>
    JMP(ChkFireB);
    JMP(MakeBJump);
}

int MakeBJump() {
    // <conv.chunks.Comment object at 0x103960b60>
    cmp(0x1);
    BNE(ChkFireB);
    dec(Enemy_Y_Position, x);
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x103960c20>
    // <conv.chunks.Comment object at 0x103960dd0>
    // <conv.chunks.Comment object at 0x103960f20>
    lda(0xfe);
    sta(Enemy_Y_Speed, x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // <conv.chunks.Comment object at 0x1039610a0>
    // <conv.chunks.Comment object at 0x103961280>
    lda(WorldNumber);
    cmp(World8);
    BEQ(SpawnFBr);
    cmp(World6);
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // <conv.chunks.Comment object at 0x1039613d0>
    // <conv.chunks.Comment object at 0x103961430>
    // <conv.chunks.Comment object at 0x103961640>
    // <conv.chunks.Comment object at 0x1039616a0>
    // <conv.chunks.Comment object at 0x1039618b0>
    lda(BowserFireBreathTimer);
    BNE(BowserGfxHandler);
    // <conv.chunks.Comment object at 0x103961a00>
    lda(0x20);
    sta(BowserFireBreathTimer);
    // <conv.chunks.Comment object at 0x103961b80>
    lda(BowserBodyControls);
    eor(0b10000000);
    sta(BowserBodyControls);
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // <conv.chunks.Comment object at 0x103961e20>
    // <conv.chunks.Comment object at 0x103961f40>
    // <conv.chunks.Comment object at 0x103962060>
    // <conv.chunks.Comment object at 0x103962180>
    ldy(SecondaryHardMode);
    BEQ(SetFBTmr);
    // <conv.chunks.Comment object at 0x103962390>
    sec();
    sbc(0x10);
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // <conv.chunks.Comment object at 0x103962540>
    // <conv.chunks.Comment object at 0x1039625d0>
    sta(BowserFireBreathTimer);
    lda(BowserFlame);
    sta(EnemyFrenzyBuffer);
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(0x10);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103962a50>
    // <conv.chunks.Comment object at 0x103962b70>
    // <conv.chunks.Comment object at 0x103962c00>
    lsr();
    BCC(CopyFToR);
    ldy(0xf0);
    JMP(CopyFToR);
}

int CopyFToR() {
    // <conv.chunks.Comment object at 0x103962e70>
    // <conv.chunks.Comment object at 0x103962f90>
    // <conv.chunks.Comment object at 0x103963020>
    tya();
    clc();
    adc(Enemy_X_Position, x);
    ldy(DuplicateObj_Offset);
    sta(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x103963230>
    // <conv.chunks.Comment object at 0x103963380>
    // <conv.chunks.Comment object at 0x1039634a0>
    lda(Enemy_Y_Position, x);
    clc();
    adc(0x8);
    sta(Enemy_Y_Position, y);
    // <conv.chunks.Comment object at 0x103963740>
    // <conv.chunks.Comment object at 0x1039637d0>
    // <conv.chunks.Comment object at 0x103963860>
    lda(Enemy_State, x);
    sta(Enemy_State, y);
    // <conv.chunks.Comment object at 0x103963b60>
    lda(Enemy_MovingDir, x);
    sta(Enemy_MovingDir, y);
    lda(ObjectOffset);
    // <conv.chunks.Comment object at 0x103963dd0>
    // <conv.chunks.Comment object at 0x103963f20>
    pha();
    ldx(DuplicateObj_Offset);
    // <conv.chunks.Comment object at 0x10396c110>
    stx(ObjectOffset);
    lda(Bowser);
    sta(Enemy_ID, x);
    JSR(ProcessBowserHalf);
    // <conv.chunks.Comment object at 0x10396c320>
    // <conv.chunks.Comment object at 0x10396c380>
    // <conv.chunks.Comment object at 0x10396c5c0>
    pla();
    sta(ObjectOffset);
    // <conv.chunks.Comment object at 0x10396c770>
    tax();
    lda(0x0);
    // <conv.chunks.Comment object at 0x10396c920>
    sta(BowserGfxFlag);
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // <conv.chunks.Comment object at 0x10396cb60>
    return 0;
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc(BowserGfxFlag);
    JSR(RunRetainerObj);
    // <conv.chunks.Comment object at 0x10396ccb0>
    // <conv.chunks.Comment object at 0x10396cdd0>
    lda(Enemy_State, x);
    BNE(ExBGfxH);
    // <conv.chunks.Comment object at 0x10396d010>
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
    // <conv.chunks.Comment object at 0x10396d700>
    // <conv.chunks.Comment object at 0x10396d820>
    // <conv.chunks.Comment object at 0x10396dd90>
    // <conv.chunks.Comment object at 0x10396deb0>
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
    // <conv.chunks.Comment object at 0x10396e330>
    // <conv.chunks.Comment object at 0x10396e450>
    // <conv.chunks.Comment object at 0x10396e5a0>
    ldy(SecondaryHardMode);
    BEQ(SFlmX);
    lda(0x60);
    JMP(SFlmX);
}

int SFlmX() {
    // <conv.chunks.Comment object at 0x10396e7b0>
    // <conv.chunks.Comment object at 0x10396e900>
    // <conv.chunks.Comment object at 0x10396e990>
    sta(0x0);
    lda(Enemy_X_MoveForce, x);
    sec();
    // <conv.chunks.Comment object at 0x10396ecf0>
    sbc(0x0);
    sta(Enemy_X_MoveForce, x);
    // <conv.chunks.Comment object at 0x10396ed80>
    lda(Enemy_X_Position, x);
    sbc(0x1);
    sta(Enemy_X_Position, x);
    // <conv.chunks.Comment object at 0x10396f0e0>
    // <conv.chunks.Comment object at 0x10396f170>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    // <conv.chunks.Comment object at 0x10396f470>
    sta(Enemy_PageLoc, x);
    ldy(BowserFlamePRandomOfs, x);
    lda(Enemy_Y_Position, x);
    cmp(offsetof(G, FlameYPosData), y);
    BEQ(SetGfxF);
    // <conv.chunks.Comment object at 0x10396f6b0>
    // <conv.chunks.Comment object at 0x10396f800>
    // <conv.chunks.Comment object at 0x10396f950>
    // <conv.chunks.Comment object at 0x10396faa0>
    clc();
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_Y_Position, x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // <conv.chunks.Comment object at 0x10396fc80>
    // <conv.chunks.Comment object at 0x10396fdd0>
    // <conv.chunks.Comment object at 0x10396ff20>
    JSR(RelativeEnemyPosition);
    lda(Enemy_State, x);
    BNE(ExFl);
    lda(0x51);
    sta(0x0);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x1039780e0>
    // <conv.chunks.Comment object at 0x103978230>
    // <conv.chunks.Comment object at 0x103978380>
    // <conv.chunks.Comment object at 0x1039784d0>
    // <conv.chunks.Comment object at 0x103978560>
    lda(FrameCounter);
    anda(0b10);
    BEQ(FlmeAt);
    ldy(0x82);
    JMP(FlmeAt);
}

int FlmeAt() {
    // <conv.chunks.Comment object at 0x1039787d0>
    // <conv.chunks.Comment object at 0x1039788f0>
    // <conv.chunks.Comment object at 0x103978a40>
    // <conv.chunks.Comment object at 0x103978ad0>
    sty(0x1);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x103978c80>
    ldx(0x0);
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda(Enemy_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x103978f50>
    // <conv.chunks.Comment object at 0x103979070>
    lda(0x0);
    sta(Sprite_Tilenumber, y);
    inc(0x0);
    // <conv.chunks.Comment object at 0x1039791c0>
    // <conv.chunks.Comment object at 0x103979430>
    lda(0x1);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x1039794c0>
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x103979850>
    clc();
    adc(0x8);
    sta(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x103979a90>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x3);
    // <conv.chunks.Comment object at 0x103979e20>
    // <conv.chunks.Comment object at 0x103979ee0>
    // <conv.chunks.Comment object at 0x103979f70>
    BCC(DrawFlameLoop);
    ldx(ObjectOffset);
    JSR(GetEnemyOffscreenBits);
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_OffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x10397a180>
    // <conv.chunks.Comment object at 0x10397a2a0>
    // <conv.chunks.Comment object at 0x10397a3c0>
    // <conv.chunks.Comment object at 0x10397a510>
    // <conv.chunks.Comment object at 0x10397a660>
    pha();
    BCC(M3FOfs);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(M3FOfs);
}

int M3FOfs() {
    // <conv.chunks.Comment object at 0x10397a780>
    // <conv.chunks.Comment object at 0x10397a8d0>
    // <conv.chunks.Comment object at 0x10397a960>
    // <conv.chunks.Comment object at 0x10397ac00>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10397ad50>
    pha();
    BCC(M2FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10397ae70>
    // <conv.chunks.Comment object at 0x10397afc0>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // <conv.chunks.Comment object at 0x10397b2c0>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x10397b410>
    pha();
    BCC(M1FOfs);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x10397b530>
    // <conv.chunks.Comment object at 0x10397b680>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // <conv.chunks.Comment object at 0x10397b980>
    pla();
    lsr();
    BCC(ExFlmeD);
    // <conv.chunks.Comment object at 0x10397bad0>
    // <conv.chunks.Comment object at 0x10397bb60>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // <conv.chunks.Comment object at 0x10397bd10>
    // <conv.chunks.Comment object at 0x10397bf20>
    return 0;
    JMP(RunFireworks);
}

int RunFireworks() {
    dec(ExplosionTimerCounter, x);
    BNE(SetupExpl);
    // <conv.chunks.Comment object at 0x1039840e0>
    // <conv.chunks.Comment object at 0x103984230>
    lda(0x8);
    sta(ExplosionTimerCounter, x);
    inc(ExplosionGfxCounter, x);
    // <conv.chunks.Comment object at 0x1039843b0>
    // <conv.chunks.Comment object at 0x103984590>
    lda(ExplosionGfxCounter, x);
    cmp(0x3);
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // <conv.chunks.Comment object at 0x103984800>
    // <conv.chunks.Comment object at 0x103984890>
    // <conv.chunks.Comment object at 0x103984a40>
    JSR(RelativeEnemyPosition);
    lda(Enemy_Rel_YPos);
    sta(Fireball_Rel_YPos);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x103984b90>
    // <conv.chunks.Comment object at 0x103984cb0>
    // <conv.chunks.Comment object at 0x103984dd0>
    sta(Fireball_Rel_XPos);
    ldy(Enemy_SprDataOffset, x);
    lda(ExplosionGfxCounter, x);
    JSR(DrawExplosion_Fireworks);
    // <conv.chunks.Comment object at 0x103984fe0>
    // <conv.chunks.Comment object at 0x103985130>
    // <conv.chunks.Comment object at 0x103985280>
    return 0;
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x103985460>
    sta(Enemy_Flag, x);
    lda(Sfx_Blast);
    // <conv.chunks.Comment object at 0x1039856a0>
    sta(Square2SoundQueue);
    lda(0x5);
    // <conv.chunks.Comment object at 0x1039858b0>
    sta(((DigitModifier) + (4)));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x103985df0>
    sta(EnemyFrenzyBuffer);
    lda(StarFlagTaskControl);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x103986660>
    // <conv.chunks.Comment object at 0x103986780>
    BCS(StarFlagExit);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(0x5);
    lda(((GameTimerDisplay) + (2)));
    // <conv.chunks.Comment object at 0x103986ae0>
    // <conv.chunks.Comment object at 0x103986e40>
    cmp(0x1);
    BEQ(SetFWC);
    ldy(0x3);
    // <conv.chunks.Comment object at 0x103987110>
    // <conv.chunks.Comment object at 0x1039872f0>
    cmp(0x3);
    BEQ(SetFWC);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x103987470>
    // <conv.chunks.Comment object at 0x103987650>
    cmp(0x6);
    BEQ(SetFWC);
    lda(0xff);
    JMP(SetFWC);
}

int SetFWC() {
    // <conv.chunks.Comment object at 0x1039877d0>
    // <conv.chunks.Comment object at 0x1039879b0>
    // <conv.chunks.Comment object at 0x103987a40>
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
    // <conv.chunks.Comment object at 0x10398c080>
    ora(((GameTimerDisplay) + (1)));
    ora(((GameTimerDisplay) + (2)));
    BEQ(IncrementSFTask1);
    // <conv.chunks.Comment object at 0x10398c500>
    lda(FrameCounter);
    anda(0b100);
    BEQ(NoTTick);
    // <conv.chunks.Comment object at 0x10398c710>
    // <conv.chunks.Comment object at 0x10398c830>
    lda(Sfx_TimerTick);
    sta(Square2SoundQueue);
    JMP(NoTTick);
}

int NoTTick() {
    // <conv.chunks.Comment object at 0x10398ca70>
    // <conv.chunks.Comment object at 0x10398cb90>
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
    // <conv.chunks.Comment object at 0x10398d460>
    // <conv.chunks.Comment object at 0x10398d4f0>
    // <conv.chunks.Comment object at 0x10398d6a0>
    // <conv.chunks.Comment object at 0x10398d7f0>
    // <conv.chunks.Comment object at 0x10398d880>
    JSR(DigitsMathRoutine);
    lda(CurrentPlayer);
    asl();
    asl();
    // <conv.chunks.Comment object at 0x10398da90>
    // <conv.chunks.Comment object at 0x10398dbe0>
    // <conv.chunks.Comment object at 0x10398dca0>
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
    // <conv.chunks.Comment object at 0x10398e0c0>
    // <conv.chunks.Comment object at 0x10398e210>
    // <conv.chunks.Comment object at 0x10398e2a0>
    // <conv.chunks.Comment object at 0x10398e480>
    // <conv.chunks.Comment object at 0x10398e5d0>
    // <conv.chunks.Comment object at 0x10398e6f0>
    lda(FireworksCounter);
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // <conv.chunks.Comment object at 0x10398e870>
    // <conv.chunks.Comment object at 0x10398e990>
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
    // <conv.chunks.Comment object at 0x10398ecf0>
    // <conv.chunks.Comment object at 0x10398ee10>
    // <conv.chunks.Comment object at 0x10398ef60>
    // <conv.chunks.Comment object at 0x10398eff0>
    lda(Enemy_Rel_YPos);
    clc();
    adc(offsetof(G, StarFlagYPosAdder), x);
    sta(Sprite_Y_Position, y);
    lda(offsetof(G, StarFlagTileData), x);
    sta(Sprite_Tilenumber, y);
    lda(0x22);
    sta(Sprite_Attributes, y);
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x10398f290>
    // <conv.chunks.Comment object at 0x10398f3e0>
    // <conv.chunks.Comment object at 0x10398f530>
    // <conv.chunks.Comment object at 0x10398f680>
    // <conv.chunks.Comment object at 0x10398f7d0>
    // <conv.chunks.Comment object at 0x10398f860>
    // <conv.chunks.Comment object at 0x10398fa40>
    clc();
    adc(offsetof(G, StarFlagXPosAdder), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x10398fbf0>
    // <conv.chunks.Comment object at 0x10398fd40>
    iny();
    iny();
    iny();
    // <conv.chunks.Comment object at 0x10398ff50>
    // <conv.chunks.Comment object at 0x10399c050>
    iny();
    dex();
    BPL(DSFLoop);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x10399c1a0>
    // <conv.chunks.Comment object at 0x10399c230>
    // <conv.chunks.Comment object at 0x10399c380>
    return 0;
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // <conv.chunks.Comment object at 0x10399c560>
    lda(0x6);
    sta(EnemyIntervalTimer, x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc(StarFlagTaskControl);
    // <conv.chunks.Comment object at 0x10399c8f0>
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
    // <conv.chunks.Comment object at 0x10399d100>
    // <conv.chunks.Comment object at 0x10399d1c0>
    // <conv.chunks.Comment object at 0x10399d220>
    // <conv.chunks.Comment object at 0x10399d370>
    // <conv.chunks.Comment object at 0x10399d490>
    // <conv.chunks.Comment object at 0x10399d5e0>
    // <conv.chunks.Comment object at 0x10399d700>
    // <conv.chunks.Comment object at 0x10399d850>
    // <conv.chunks.Comment object at 0x10399d970>
    // <conv.chunks.Comment object at 0x10399dac0>
    // <conv.chunks.Comment object at 0x10399dbe0>
    // <conv.chunks.Comment object at 0x10399dd00>
    // <conv.chunks.Comment object at 0x10399de50>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10399e060>
    adc(0x1);
    sta(0x0);
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x10399e360>
    cmp(0x21);
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda(PiranhaPlant_Y_Speed, x);
    // <conv.chunks.Comment object at 0x10399e690>
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x10399e900>
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
    // <conv.chunks.Comment object at 0x10399f2c0>
    // <conv.chunks.Comment object at 0x10399f350>
    lsr();
    BCC(PutinPipe);
    lda(TimerControl);
    BNE(PutinPipe);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x10399f560>
    // <conv.chunks.Comment object at 0x10399f680>
    // <conv.chunks.Comment object at 0x10399f7a0>
    // <conv.chunks.Comment object at 0x10399f8c0>
    clc();
    adc(PiranhaPlant_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    cmp(0x0);
    BNE(PutinPipe);
    // <conv.chunks.Comment object at 0x10399faa0>
    // <conv.chunks.Comment object at 0x10399fbf0>
    // <conv.chunks.Comment object at 0x10399fd70>
    // <conv.chunks.Comment object at 0x10399fe00>
    lda(0x0);
    sta(PiranhaPlant_MoveFlag, x);
    // <conv.chunks.Comment object at 0x10399ffe0>
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
    // <conv.chunks.Comment object at 0x1039a4470>
    // <conv.chunks.Comment object at 0x1039a4590>
    // <conv.chunks.Comment object at 0x1039a4710>
    // <conv.chunks.Comment object at 0x1039a47d0>
    // <conv.chunks.Comment object at 0x1039a4860>
    // <conv.chunks.Comment object at 0x1039a48f0>
    // <conv.chunks.Comment object at 0x1039a4aa0>
    // <conv.chunks.Comment object at 0x1039a4bc0>
    lda(FirebarSpinState_Low, x);
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x1039a4e30>
    // <conv.chunks.Comment object at 0x1039a4ef0>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x1039a5100>
    adc(0x0);
    return 0;
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x1039a5400>
    lda(FirebarSpinState_Low, x);
    sec();
    sbc(0x7);
    // <conv.chunks.Comment object at 0x1039a5670>
    // <conv.chunks.Comment object at 0x1039a5730>
    sta(FirebarSpinState_Low, x);
    lda(FirebarSpinState_High, x);
    // <conv.chunks.Comment object at 0x1039a5940>
    sbc(0x0);
    return 0;
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda(Enemy_Y_HighPos, x);
    // <conv.chunks.Comment object at 0x1039a5c40>
    // <conv.chunks.Comment object at 0x1039a5ca0>
    // <conv.chunks.Comment object at 0x1039a5d00>
    cmp(0x3);
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // <conv.chunks.Comment object at 0x1039a6060>
    // <conv.chunks.Comment object at 0x1039a6180>
    lda(Enemy_State, x);
    BPL(CheckBalPlatform);
    // <conv.chunks.Comment object at 0x1039a6330>
    return 0;
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda(PlatformCollisionFlag, x);
    sta(0x0);
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x1039a6540>
    // <conv.chunks.Comment object at 0x1039a65d0>
    // <conv.chunks.Comment object at 0x1039a6750>
    // <conv.chunks.Comment object at 0x1039a67e0>
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(0x2d);
    // <conv.chunks.Comment object at 0x1039a6bd0>
    cmp(Enemy_Y_Position, x);
    BCC(ChkOtherForFall);
    cpy(0x0);
    BEQ(MakePlatformFall);
    // <conv.chunks.Comment object at 0x1039a6e10>
    // <conv.chunks.Comment object at 0x1039a6f60>
    // <conv.chunks.Comment object at 0x1039a6ff0>
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
    // <conv.chunks.Comment object at 0x1039a7710>
    // <conv.chunks.Comment object at 0x1039a7860>
    // <conv.chunks.Comment object at 0x1039a79b0>
    // <conv.chunks.Comment object at 0x1039a7a40>
    clc();
    adc(0x2);
    sta(Enemy_Y_Position, y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1039ac050>
    pha();
    lda(PlatformCollisionFlag, x);
    BPL(ColFlg);
    // <conv.chunks.Comment object at 0x1039ac230>
    // <conv.chunks.Comment object at 0x1039ac380>
    lda(Enemy_Y_MoveForce, x);
    clc();
    // <conv.chunks.Comment object at 0x1039ac620>
    adc(0x5);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1039ac7d0>
    lda(Enemy_Y_Speed, x);
    adc(0x0);
    BMI(PlatDn);
    BNE(PlatUp);
    // <conv.chunks.Comment object at 0x1039ac9e0>
    // <conv.chunks.Comment object at 0x1039aca70>
    // <conv.chunks.Comment object at 0x1039acc50>
    lda(0x0);
    cmp(0xb);
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // <conv.chunks.Comment object at 0x1039acda0>
    // <conv.chunks.Comment object at 0x1039acf20>
    // <conv.chunks.Comment object at 0x1039ad100>
    // <conv.chunks.Comment object at 0x1039ad250>
    cmp(ObjectOffset);
    BEQ(PlatDn);
    JMP(PlatUp);
}

int PlatUp() {
    // <conv.chunks.Comment object at 0x1039ad3d0>
    // <conv.chunks.Comment object at 0x1039ad520>
    JSR(MovePlatformUp);
    JMP(DoOtherPlatform);
    JMP(PlatSt);
}

int PlatSt() {
    // <conv.chunks.Comment object at 0x1039ad6a0>
    // <conv.chunks.Comment object at 0x1039ad7c0>
    JSR(StopPlatforms);
    JMP(DoOtherPlatform);
    JMP(PlatDn);
}

int PlatDn() {
    // <conv.chunks.Comment object at 0x1039ad940>
    // <conv.chunks.Comment object at 0x1039ada60>
    JSR(MovePlatformDown);
    JMP(DoOtherPlatform);
}

int DoOtherPlatform() {
    ldy(Enemy_State, x);
    pla();
    // <conv.chunks.Comment object at 0x1039adc10>
    // <conv.chunks.Comment object at 0x1039add90>
    sec();
    sbc(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1039adeb0>
    clc();
    adc(Enemy_Y_Position, y);
    sta(Enemy_Y_Position, y);
    lda(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x1039ae090>
    // <conv.chunks.Comment object at 0x1039ae1e0>
    // <conv.chunks.Comment object at 0x1039ae330>
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
    // <conv.chunks.Comment object at 0x1039ae780>
    // <conv.chunks.Comment object at 0x1039ae8a0>
    // <conv.chunks.Comment object at 0x1039ae9f0>
    // <conv.chunks.Comment object at 0x1039aeb40>
    // <conv.chunks.Comment object at 0x1039aec90>
    // <conv.chunks.Comment object at 0x1039aedb0>
    // <conv.chunks.Comment object at 0x1039aee40>
    lda(Enemy_Y_Speed, y);
    pha();
    // <conv.chunks.Comment object at 0x1039af170>
    pha();
    JSR(SetupPlatformRope);
    lda(0x1);
    sta(VRAM_Buffer1, x);
    // <conv.chunks.Comment object at 0x1039af290>
    // <conv.chunks.Comment object at 0x1039af3e0>
    // <conv.chunks.Comment object at 0x1039af470>
    lda(0x0);
    sta(((VRAM_Buffer1) + (1)), x);
    lda(0x2);
    // <conv.chunks.Comment object at 0x1039af8f0>
    sta(((VRAM_Buffer1) + (2)), x);
    lda(Enemy_Y_Speed, y);
    BMI(EraseR1);
    // <conv.chunks.Comment object at 0x1039afbf0>
    // <conv.chunks.Comment object at 0x1039afd40>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (3)), x);
    lda(0xa3);
    // <conv.chunks.Comment object at 0x1039afef0>
    // <conv.chunks.Comment object at 0x1039bc1d0>
    sta(((VRAM_Buffer1) + (4)), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // <conv.chunks.Comment object at 0x1039bc4d0>
    // <conv.chunks.Comment object at 0x1039bc5f0>
    lda(0x24);
    sta(((VRAM_Buffer1) + (3)), x);
    // <conv.chunks.Comment object at 0x1039bc6e0>
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
    // <conv.chunks.Comment object at 0x1039bcb90>
    // <conv.chunks.Comment object at 0x1039bcd10>
    // <conv.chunks.Comment object at 0x1039bcdd0>
    // <conv.chunks.Comment object at 0x1039bce60>
    // <conv.chunks.Comment object at 0x1039bcef0>
    // <conv.chunks.Comment object at 0x1039bd0d0>
    // <conv.chunks.Comment object at 0x1039bd160>
    // <conv.chunks.Comment object at 0x1039bd400>
    sta(((VRAM_Buffer1) + (6)), x);
    lda(0x2);
    sta(((VRAM_Buffer1) + (7)), x);
    pla();
    BPL(EraseR2);
    // <conv.chunks.Comment object at 0x1039bd730>
    // <conv.chunks.Comment object at 0x1039bda00>
    // <conv.chunks.Comment object at 0x1039bda90>
    lda(0xa2);
    sta(((VRAM_Buffer1) + (8)), x);
    lda(0xa3);
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // <conv.chunks.Comment object at 0x1039bdc40>
    // <conv.chunks.Comment object at 0x1039bdee0>
    // <conv.chunks.Comment object at 0x1039bdf70>
    // <conv.chunks.Comment object at 0x1039be210>
    // <conv.chunks.Comment object at 0x1039be360>
    lda(0x24);
    sta(((VRAM_Buffer1) + (8)), x);
    // <conv.chunks.Comment object at 0x1039be450>
    sta(((VRAM_Buffer1) + (9)), x);
    JMP(EndRp);
}

int EndRp() {
    // <conv.chunks.Comment object at 0x1039be8d0>
    lda(0x0);
    sta(((VRAM_Buffer1) + (10)), x);
    lda(VRAM_Buffer1_Offset);
    clc();
    // <conv.chunks.Comment object at 0x1039bec30>
    // <conv.chunks.Comment object at 0x1039bed80>
    adc(10);
    sta(VRAM_Buffer1_Offset);
    JMP(ExitRp);
}

int ExitRp() {
    // <conv.chunks.Comment object at 0x1039beff0>
    ldx(ObjectOffset);
    return 0;
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda(Enemy_X_Position, y);
    // <conv.chunks.Comment object at 0x1039bf260>
    // <conv.chunks.Comment object at 0x1039bf2f0>
    clc();
    adc(0x8);
    ldx(SecondaryHardMode);
    BNE(GetLRp);
    // <conv.chunks.Comment object at 0x1039bf4d0>
    // <conv.chunks.Comment object at 0x1039bf560>
    // <conv.chunks.Comment object at 0x1039bf710>
    clc();
    adc(0x10);
    JMP(GetLRp);
}

int GetLRp() {
    // <conv.chunks.Comment object at 0x1039bf8f0>
    // <conv.chunks.Comment object at 0x1039bf980>
    pha();
    lda(Enemy_PageLoc, y);
    adc(0x0);
    sta(0x2);
    pla();
    anda(0b11110000);
    lsr();
    // <conv.chunks.Comment object at 0x1039bfc50>
    // <conv.chunks.Comment object at 0x1039bfda0>
    // <conv.chunks.Comment object at 0x1039bfce0>
    // <conv.chunks.Comment object at 0x1039bff50>
    // <conv.chunks.Comment object at 0x1039c40e0>
    lsr();
    lsr();
    sta(0x0);
    ldx(Enemy_Y_Position, y);
    pla();
    BPL(GetHRp);
    // <conv.chunks.Comment object at 0x1039c42c0>
    // <conv.chunks.Comment object at 0x1039c4350>
    // <conv.chunks.Comment object at 0x1039c4530>
    // <conv.chunks.Comment object at 0x1039c45c0>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // <conv.chunks.Comment object at 0x1039c4830>
    // <conv.chunks.Comment object at 0x1039c4980>
    // <conv.chunks.Comment object at 0x1039c4a10>
    txa();
    ldx(VRAM_Buffer1_Offset);
    // <conv.chunks.Comment object at 0x1039c4b30>
    asl();
    rol();
    pha();
    rol();
    anda(0b11);
    ora(0b100000);
    sta(0x1);
    lda(0x2);
    anda(0x1);
    // <conv.chunks.Comment object at 0x1039c4d10>
    // <conv.chunks.Comment object at 0x1039c4dd0>
    // <conv.chunks.Comment object at 0x1039c4e90>
    // <conv.chunks.Comment object at 0x1039c4f20>
    // <conv.chunks.Comment object at 0x1039c5040>
    // <conv.chunks.Comment object at 0x1039c5190>
    // <conv.chunks.Comment object at 0x1039c5160>
    // <conv.chunks.Comment object at 0x1039c5340>
    asl();
    asl();
    ora(0x1);
    sta(0x1);
    pla();
    anda(0b11100000);
    // <conv.chunks.Comment object at 0x1039c5580>
    // <conv.chunks.Comment object at 0x1039c5640>
    // <conv.chunks.Comment object at 0x1039c5610>
    // <conv.chunks.Comment object at 0x1039c56d0>
    // <conv.chunks.Comment object at 0x1039c5910>
    clc();
    adc(0x0);
    sta(0x0);
    // <conv.chunks.Comment object at 0x1039c5af0>
    // <conv.chunks.Comment object at 0x1039c5ac0>
    lda(Enemy_Y_Position, y);
    cmp(0xe8);
    BCC(ExPRp);
    // <conv.chunks.Comment object at 0x1039c5e20>
    // <conv.chunks.Comment object at 0x1039c5eb0>
    lda(0x0);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x1039c6090>
    sta(0x0);
    JMP(ExPRp);
}

int ExPRp() {
    // <conv.chunks.Comment object at 0x1039c6330>
    return 0;
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x1039c6540>
    tax();
    JSR(GetEnemyOffscreenBits);
    // <conv.chunks.Comment object at 0x1039c6660>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1039c67e0>
    lda(Player_Rel_XPos);
    sta(FloateyNum_X_Pos, x);
    // <conv.chunks.Comment object at 0x1039c6a80>
    lda(Player_Y_Position);
    sta(FloateyNum_Y_Pos, x);
    lda(0x1);
    sta(Enemy_MovingDir, x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta(Enemy_Y_Speed, y);
    // <conv.chunks.Comment object at 0x1039c7080>
    // <conv.chunks.Comment object at 0x1039c71a0>
    sta(Enemy_Y_MoveForce, y);
    return 0;
    JMP(PlatformFall);
}

int PlatformFall() {
    tya();
    // <conv.chunks.Comment object at 0x1039c7500>
    pha();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x1039c7620>
    pla();
    tax();
    JSR(MoveFallingPlatform);
    // <conv.chunks.Comment object at 0x1039c7800>
    // <conv.chunks.Comment object at 0x1039c7890>
    ldx(ObjectOffset);
    lda(PlatformCollisionFlag, x);
    BMI(ExPF);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(ExPF);
}

int ExPF() {
    // <conv.chunks.Comment object at 0x1039c7aa0>
    // <conv.chunks.Comment object at 0x1039c7bf0>
    // <conv.chunks.Comment object at 0x1039c7d70>
    // <conv.chunks.Comment object at 0x1039c7e00>
    // <conv.chunks.Comment object at 0x1039c7f20>
    ldx(ObjectOffset);
    return 0;
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda(Enemy_Y_Speed, x);
    ora(Enemy_Y_MoveForce, x);
    // <conv.chunks.Comment object at 0x1039d01d0>
    // <conv.chunks.Comment object at 0x1039d0320>
    BNE(ChkYCenterPos);
    sta(Enemy_YMF_Dummy, x);
    // <conv.chunks.Comment object at 0x1039d0560>
    lda(Enemy_Y_Position, x);
    cmp(YPlatformTopYPos, x);
    BCS(ChkYCenterPos);
    // <conv.chunks.Comment object at 0x1039d07d0>
    // <conv.chunks.Comment object at 0x1039d0920>
    lda(FrameCounter);
    anda(0b111);
    // <conv.chunks.Comment object at 0x1039d0b30>
    BNE(SkipIY);
    inc(Enemy_Y_Position, x);
    JMP(SkipIY);
}

int SkipIY() {
    // <conv.chunks.Comment object at 0x1039d0d70>
    // <conv.chunks.Comment object at 0x1039d0ec0>
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda(Enemy_Y_Position, x);
    cmp(YPlatformCenterYPos, x);
    // <conv.chunks.Comment object at 0x1039d1070>
    // <conv.chunks.Comment object at 0x1039d11c0>
    BCC(YMDown);
    JSR(MovePlatformUp);
    // <conv.chunks.Comment object at 0x1039d1430>
    JMP(ChkYPCollision);
    JMP(YMDown);
}

int YMDown() {
    // <conv.chunks.Comment object at 0x1039d1640>
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
    // <conv.chunks.Comment object at 0x1039d17f0>
    // <conv.chunks.Comment object at 0x1039d1940>
    // <conv.chunks.Comment object at 0x1039d1a90>
    // <conv.chunks.Comment object at 0x1039d1be0>
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
    // <conv.chunks.Comment object at 0x1039d24e0>
    // <conv.chunks.Comment object at 0x1039d25a0>
    // <conv.chunks.Comment object at 0x1039d2630>
    // <conv.chunks.Comment object at 0x1039d27b0>
    // <conv.chunks.Comment object at 0x1039d2900>
    // <conv.chunks.Comment object at 0x1039d2990>
    // <conv.chunks.Comment object at 0x1039d2b40>
    // <conv.chunks.Comment object at 0x1039d2bd0>
    // <conv.chunks.Comment object at 0x1039d2db0>
    sbc(0x0);
    JMP(SetPVar);
}

int SetPVar() {
    // <conv.chunks.Comment object at 0x1039d2ea0>
    sta(Player_PageLoc);
    sty(Platform_X_Scroll);
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // <conv.chunks.Comment object at 0x1039d30b0>
    // <conv.chunks.Comment object at 0x1039d31d0>
    // <conv.chunks.Comment object at 0x1039d32f0>
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
    // <conv.chunks.Comment object at 0x1039d3470>
    // <conv.chunks.Comment object at 0x1039d35c0>
    // <conv.chunks.Comment object at 0x1039d3710>
    // <conv.chunks.Comment object at 0x1039d3830>
    // <conv.chunks.Comment object at 0x1039d3980>
    return 0;
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(0x0);
    lda(PlatformCollisionFlag, x);
    BMI(ExRPl);
    // <conv.chunks.Comment object at 0x1039d3ad0>
    // <conv.chunks.Comment object at 0x1039d3b30>
    // <conv.chunks.Comment object at 0x1039d3c80>
    // <conv.chunks.Comment object at 0x1039d3d10>
    // <conv.chunks.Comment object at 0x1039d3ec0>
    lda(0x10);
    sta(Enemy_X_Speed, x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // <conv.chunks.Comment object at 0x1039dc0b0>
    // <conv.chunks.Comment object at 0x1039dc290>
    // <conv.chunks.Comment object at 0x1039dc3b0>
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
    // <conv.chunks.Comment object at 0x1039dca10>
    // <conv.chunks.Comment object at 0x1039dcb30>
    lda(Enemy_YMF_Dummy, x);
    clc();
    // <conv.chunks.Comment object at 0x1039dcdd0>
    adc(Enemy_Y_MoveForce, x);
    sta(Enemy_YMF_Dummy, x);
    lda(Enemy_Y_Position, x);
    adc(Enemy_Y_Speed, x);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x1039dd0a0>
    // <conv.chunks.Comment object at 0x1039dd1f0>
    // <conv.chunks.Comment object at 0x1039dd340>
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
    // <conv.chunks.Comment object at 0x1039dd550>
    // <conv.chunks.Comment object at 0x1039dd6a0>
    // <conv.chunks.Comment object at 0x1039dd7f0>
    // <conv.chunks.Comment object at 0x1039dd910>
    return 0;
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda(Enemy_ID, x);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x1039ddb50>
    // <conv.chunks.Comment object at 0x1039ddca0>
    BEQ(ExScrnBd);
    lda(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x1039ddeb0>
    ldy(Enemy_ID, x);
    cpy(HammerBro);
    // <conv.chunks.Comment object at 0x1039de0f0>
    BEQ(LimitB);
    cpy(PiranhaPlant);
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // <conv.chunks.Comment object at 0x1039de330>
    // <conv.chunks.Comment object at 0x1039de450>
    // <conv.chunks.Comment object at 0x1039de570>
    adc(0x38);
    JMP(ExtendLB);
}

int ExtendLB() {
    // <conv.chunks.Comment object at 0x1039de660>
    sbc(0x48);
    sta(0x1);
    // <conv.chunks.Comment object at 0x1039de870>
    lda(ScreenLeft_PageLoc);
    sbc(0x0);
    sta(0x0);
    lda(ScreenRight_X_Pos);
    // <conv.chunks.Comment object at 0x1039dea50>
    // <conv.chunks.Comment object at 0x1039deba0>
    // <conv.chunks.Comment object at 0x1039dec30>
    adc(0x48);
    sta(0x3);
    // <conv.chunks.Comment object at 0x1039deed0>
    lda(ScreenRight_PageLoc);
    adc(0x0);
    sta(0x2);
    lda(Enemy_X_Position, x);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x1039df0b0>
    // <conv.chunks.Comment object at 0x1039df200>
    // <conv.chunks.Comment object at 0x1039df290>
    // <conv.chunks.Comment object at 0x1039df470>
    lda(Enemy_PageLoc, x);
    sbc(0x0);
    BMI(TooFar);
    lda(Enemy_X_Position, x);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x1039df6b0>
    // <conv.chunks.Comment object at 0x1039df740>
    // <conv.chunks.Comment object at 0x1039df8f0>
    // <conv.chunks.Comment object at 0x1039dfa70>
    lda(Enemy_PageLoc, x);
    sbc(0x2);
    BMI(ExScrnBd);
    lda(Enemy_State, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x1039dfcb0>
    // <conv.chunks.Comment object at 0x1039dfd40>
    // <conv.chunks.Comment object at 0x1039dfec0>
    // <conv.chunks.Comment object at 0x1039e4050>
    BEQ(ExScrnBd);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x1039e4260>
    BEQ(ExScrnBd);
    cpy(FlagpoleFlagObject);
    // <conv.chunks.Comment object at 0x1039e4470>
    BEQ(ExScrnBd);
    cpy(StarFlagObject);
    // <conv.chunks.Comment object at 0x1039e4680>
    BEQ(ExScrnBd);
    cpy(JumpspringObject);
    BEQ(ExScrnBd);
    JMP(TooFar);
}

int TooFar() {
    // <conv.chunks.Comment object at 0x1039e4890>
    // <conv.chunks.Comment object at 0x1039e49b0>
    // <conv.chunks.Comment object at 0x1039e4ad0>
    JSR(EraseEnemyObject);
    JMP(ExScrnBd);
}

int ExScrnBd() {
    // <conv.chunks.Comment object at 0x1039e4c80>
    return 0;
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda(Fireball_State, x);
    BEQ(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x1039e4e30>
    // <conv.chunks.Comment object at 0x1039e4dd0>
    // <conv.chunks.Comment object at 0x1039e5160>
    asl();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x1039e5310>
    lda(FrameCounter);
    lsr();
    BCS(ExitFBallEnemy);
    // <conv.chunks.Comment object at 0x1039e5550>
    // <conv.chunks.Comment object at 0x1039e55e0>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1039e57c0>
    asl();
    clc();
    adc(0x1c);
    tay();
    // <conv.chunks.Comment object at 0x1039e5970>
    // <conv.chunks.Comment object at 0x1039e5ac0>
    ldx(0x4);
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(0x1);
    // <conv.chunks.Comment object at 0x1039e5ca0>
    tya();
    pha();
    // <conv.chunks.Comment object at 0x1039e5e50>
    lda(Enemy_State, x);
    anda(0b100000);
    BNE(NoFToECol);
    lda(Enemy_Flag, x);
    BEQ(NoFToECol);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1039e6000>
    // <conv.chunks.Comment object at 0x1039e6120>
    // <conv.chunks.Comment object at 0x1039e6240>
    // <conv.chunks.Comment object at 0x1039e6390>
    // <conv.chunks.Comment object at 0x1039e64b0>
    cmp(0x24);
    BCC(GoombaDie);
    // <conv.chunks.Comment object at 0x1039e6660>
    cmp(0x2b);
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // <conv.chunks.Comment object at 0x1039e6870>
    // <conv.chunks.Comment object at 0x1039e6a20>
    cmp(Goomba);
    BNE(NotGoomba);
    lda(Enemy_State, x);
    cmp(0x2);
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // <conv.chunks.Comment object at 0x1039e6ab0>
    // <conv.chunks.Comment object at 0x1039e6cc0>
    // <conv.chunks.Comment object at 0x1039e6e10>
    // <conv.chunks.Comment object at 0x1039e6ea0>
    // <conv.chunks.Comment object at 0x1039e7050>
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoFToECol);
    // <conv.chunks.Comment object at 0x1039e71d0>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1039e73b0>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    BCC(NoFToECol);
    // <conv.chunks.Comment object at 0x1039e7560>
    // <conv.chunks.Comment object at 0x1039e76b0>
    // <conv.chunks.Comment object at 0x1039e7740>
    // <conv.chunks.Comment object at 0x1039e7860>
    // <conv.chunks.Comment object at 0x1039e7980>
    lda(0b10000000);
    sta(Fireball_State, x);
    ldx(0x1);
    JSR(HandleEnemyFBallCol);
    JMP(NoFToECol);
}

int NoFToECol() {
    // <conv.chunks.Comment object at 0x1039e7b90>
    // <conv.chunks.Comment object at 0x1039e7d10>
    // <conv.chunks.Comment object at 0x1039e7da0>
    // <conv.chunks.Comment object at 0x1039e7f20>
    pla();
    tay();
    ldx(0x1);
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x1039ec440>
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
    // <conv.chunks.Comment object at 0x1039ec740>
    // <conv.chunks.Comment object at 0x1039ecd10>
    // <conv.chunks.Comment object at 0x1039ecda0>
    // <conv.chunks.Comment object at 0x1039ecf50>
    // <conv.chunks.Comment object at 0x1039ed070>
    // <conv.chunks.Comment object at 0x1039ed1c0>
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
    // <conv.chunks.Comment object at 0x1039edd60>
    // <conv.chunks.Comment object at 0x1039ede80>
    // <conv.chunks.Comment object at 0x1039edfd0>
    // <conv.chunks.Comment object at 0x1039ee0f0>
    // <conv.chunks.Comment object at 0x1039ee240>
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
    // <conv.chunks.Comment object at 0x1039ee3c0>
    // <conv.chunks.Comment object at 0x1039ee5a0>
    // <conv.chunks.Comment object at 0x1039ee6c0>
    // <conv.chunks.Comment object at 0x1039ee810>
    // <conv.chunks.Comment object at 0x1039ee960>
    // <conv.chunks.Comment object at 0x1039ee9f0>
    // <conv.chunks.Comment object at 0x1039eeb10>
    // <conv.chunks.Comment object at 0x1039eecc0>
    // <conv.chunks.Comment object at 0x1039eed50>
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
    // <conv.chunks.Comment object at 0x1039ef5f0>
    cmp(Podoboo);
    BEQ(ExHCF);
    // <conv.chunks.Comment object at 0x1039ef860>
    cmp(0x15);
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1039efc20>
    cmp(PiranhaPlant);
    BNE(StnE);
    // <conv.chunks.Comment object at 0x1039efe60>
    lda(Enemy_Y_Position, x);
    adc(0x18);
    // <conv.chunks.Comment object at 0x1039fc110>
    sta(Enemy_Y_Position, x);
    JMP(StnE);
}

int StnE() {
    // <conv.chunks.Comment object at 0x1039fc350>
    JSR(ChkToStunEnemies);
    lda(Enemy_State, x);
    anda(0b11111);
    ora(0b100000);
    // <conv.chunks.Comment object at 0x1039fc5f0>
    // <conv.chunks.Comment object at 0x1039fc710>
    sta(Enemy_State, x);
    lda(0x2);
    ldy(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x1039fc950>
    // <conv.chunks.Comment object at 0x1039fc9e0>
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
    // <conv.chunks.Comment object at 0x1039fd2e0>
    // <conv.chunks.Comment object at 0x1039fd400>
    sta(Square1SoundQueue);
    JMP(ExHCF);
}

int ExHCF() {
    // <conv.chunks.Comment object at 0x1039fd610>
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
    // <conv.chunks.Comment object at 0x1039fd790>
    // <conv.chunks.Comment object at 0x1039fd8e0>
    // <conv.chunks.Comment object at 0x1039fd970>
    // <conv.chunks.Comment object at 0x1039fdac0>
    // <conv.chunks.Comment object at 0x1039fdbe0>
    // <conv.chunks.Comment object at 0x1039fdd00>
    txa();
    asl();
    // <conv.chunks.Comment object at 0x1039fdf10>
    asl();
    clc();
    adc(0x24);
    tay();
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCC(ClHCol);
    lda(Misc_Collision_Flag, x);
    BNE(ExPHC);
    // <conv.chunks.Comment object at 0x1039fe0c0>
    // <conv.chunks.Comment object at 0x1039fe210>
    // <conv.chunks.Comment object at 0x1039fe2a0>
    // <conv.chunks.Comment object at 0x1039fe3c0>
    // <conv.chunks.Comment object at 0x1039fe4e0>
    // <conv.chunks.Comment object at 0x1039fe630>
    // <conv.chunks.Comment object at 0x1039fe780>
    lda(0x1);
    sta(Misc_Collision_Flag, x);
    // <conv.chunks.Comment object at 0x1039fe930>
    lda(Misc_X_Speed, x);
    eor(0xff);
    clc();
    // <conv.chunks.Comment object at 0x1039fec30>
    // <conv.chunks.Comment object at 0x1039fed80>
    adc(0x1);
    sta(Misc_X_Speed, x);
    lda(StarInvincibleTimer);
    BNE(ExPHC);
    JMP(InjurePlayer);
    JMP(ClHCol);
}

int ClHCol() {
    // <conv.chunks.Comment object at 0x1039fee70>
    // <conv.chunks.Comment object at 0x1039ff050>
    // <conv.chunks.Comment object at 0x1039ff170>
    // <conv.chunks.Comment object at 0x1039ff2c0>
    // <conv.chunks.Comment object at 0x1039ff3e0>
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
    // <conv.chunks.Comment object at 0x1039ff7d0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x1039ff950>
    lda(Sfx_PowerUpGrab);
    sta(Square2SoundQueue);
    lda(PowerUpType);
    // <conv.chunks.Comment object at 0x1039ffbf0>
    // <conv.chunks.Comment object at 0x1039ffd10>
    cmp(0x2);
    BCC(Shroom_Flower_PUp);
    // <conv.chunks.Comment object at 0x1039ffe90>
    cmp(0x3);
    BEQ(SetFor1Up);
    lda(0x23);
    sta(StarInvincibleTimer);
    lda(StarPowerMusic);
    // <conv.chunks.Comment object at 0x103a040e0>
    // <conv.chunks.Comment object at 0x103a04290>
    // <conv.chunks.Comment object at 0x103a04320>
    // <conv.chunks.Comment object at 0x103a044d0>
    sta(AreaMusicQueue);
    return 0;
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda(PlayerStatus);
    // <conv.chunks.Comment object at 0x103a047a0>
    BEQ(UpToSuper);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x103a049b0>
    BNE(NoPUp);
    ldx(ObjectOffset);
    lda(0x2);
    // <conv.chunks.Comment object at 0x103a04bf0>
    // <conv.chunks.Comment object at 0x103a04d10>
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
    // <conv.chunks.Comment object at 0x103a053d0>
    // <conv.chunks.Comment object at 0x103a05460>
    return 0;
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x103a05700>
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
    // <conv.chunks.Comment object at 0x103a05fd0>
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda(EnemyOffscrBitsMasked, x);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x103a06390>
    // <conv.chunks.Comment object at 0x103a064e0>
    // <conv.chunks.Comment object at 0x103a06600>
    // <conv.chunks.Comment object at 0x103a06750>
    // <conv.chunks.Comment object at 0x103a068a0>
    lda(GameEngineSubroutine);
    cmp(0x8);
    BNE(NoPECol);
    // <conv.chunks.Comment object at 0x103a06ae0>
    // <conv.chunks.Comment object at 0x103a06b70>
    lda(Enemy_State, x);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x103a06e70>
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx(ObjectOffset);
    BCS(CheckForPUpCollision);
    // <conv.chunks.Comment object at 0x103a070b0>
    // <conv.chunks.Comment object at 0x103a071d0>
    // <conv.chunks.Comment object at 0x103a072f0>
    // <conv.chunks.Comment object at 0x103a07410>
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
    // <conv.chunks.Comment object at 0x103a07b00>
    // <conv.chunks.Comment object at 0x103a07c20>
    // <conv.chunks.Comment object at 0x103a07d70>
    // <conv.chunks.Comment object at 0x103a07e90>
    lda(StarInvincibleTimer);
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda(Enemy_CollisionBits, x);
    anda(0b1);
    // <conv.chunks.Comment object at 0x103a0c320>
    // <conv.chunks.Comment object at 0x103a0c5f0>
    ora(EnemyOffscrBitsMasked, x);
    BNE(ExPEC);
    // <conv.chunks.Comment object at 0x103a0c830>
    lda(0x1);
    ora(Enemy_CollisionBits, x);
    // <conv.chunks.Comment object at 0x103a0c9e0>
    sta(Enemy_CollisionBits, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x103a0cce0>
    BEQ(ChkForPlayerInjury);
    cpy(PiranhaPlant);
    // <conv.chunks.Comment object at 0x103a0cf20>
    BEQ(InjurePlayer);
    cpy(Podoboo);
    // <conv.chunks.Comment object at 0x103a0d130>
    BEQ(InjurePlayer);
    cpy(BulletBill_CannonVar);
    // <conv.chunks.Comment object at 0x103a0d370>
    BEQ(ChkForPlayerInjury);
    cpy(0x15);
    // <conv.chunks.Comment object at 0x103a0d580>
    BCS(InjurePlayer);
    lda(AreaType);
    // <conv.chunks.Comment object at 0x103a0d790>
    BEQ(InjurePlayer);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103a0d9a0>
    asl();
    BCS(ChkForPlayerInjury);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103a0dc70>
    anda(0b111);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x103a0deb0>
    BCC(ChkForPlayerInjury);
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x103a0e0c0>
    cmp(Goomba);
    BEQ(ExPEC);
    lda(Sfx_EnemySmack);
    // <conv.chunks.Comment object at 0x103a0e450>
    sta(Square1SoundQueue);
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103a0e660>
    ora(0b10000000);
    sta(Enemy_State, x);
    JSR(EnemyFacePlayer);
    lda(offsetof(G, KickedShellXSpdData), y);
    // <conv.chunks.Comment object at 0x103a0e9c0>
    // <conv.chunks.Comment object at 0x103a0eae0>
    sta(Enemy_X_Speed, x);
    lda(0x3);
    clc();
    // <conv.chunks.Comment object at 0x103a0ed50>
    // <conv.chunks.Comment object at 0x103a0eea0>
    adc(StompChainCounter);
    ldy(EnemyIntervalTimer, x);
    cpy(0x3);
    BCS(KSPts);
    lda(offsetof(G, KickedShellPtsData), y);
    JMP(KSPts);
}

int KSPts() {
    // <conv.chunks.Comment object at 0x103a0f020>
    // <conv.chunks.Comment object at 0x103a0f170>
    // <conv.chunks.Comment object at 0x103a0f200>
    // <conv.chunks.Comment object at 0x103a0f3e0>
    // <conv.chunks.Comment object at 0x103a0f530>
    JSR(SetupFloateyNumber);
    JMP(ExPEC);
}

int ExPEC() {
    // <conv.chunks.Comment object at 0x103a0f6b0>
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
    // <conv.chunks.Comment object at 0x103a0f800>
    // <conv.chunks.Comment object at 0x103a0f920>
    // <conv.chunks.Comment object at 0x103a0fa70>
    // <conv.chunks.Comment object at 0x103a0fb90>
    lda(Enemy_ID, x);
    cmp(Bloober);
    BCC(ChkETmrs);
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x103a0ff50>
    clc();
    adc(0xc);
    cmp(Enemy_Y_Position, x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // <conv.chunks.Comment object at 0x103a1c1a0>
    // <conv.chunks.Comment object at 0x103a1c380>
    // <conv.chunks.Comment object at 0x103a1c4a0>
    lda(StompTimer);
    BNE(EnemyStomped);
    lda(InjuryTimer);
    BNE(ExInjColRoutines);
    // <conv.chunks.Comment object at 0x103a1c5f0>
    // <conv.chunks.Comment object at 0x103a1c710>
    // <conv.chunks.Comment object at 0x103a1c830>
    lda(Player_Rel_XPos);
    cmp(Enemy_Rel_XPos);
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // <conv.chunks.Comment object at 0x103a1ca40>
    // <conv.chunks.Comment object at 0x103a1cb60>
    // <conv.chunks.Comment object at 0x103a1ccb0>
    // <conv.chunks.Comment object at 0x103a1cdd0>
    lda(Enemy_MovingDir, x);
    cmp(0x1);
    BNE(InjurePlayer);
    // <conv.chunks.Comment object at 0x103a1cf80>
    // <conv.chunks.Comment object at 0x103a1d010>
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
    // <conv.chunks.Comment object at 0x103a1d580>
    // <conv.chunks.Comment object at 0x103a1d6a0>
    // <conv.chunks.Comment object at 0x103a1d7c0>
    lda(0x8);
    sta(InjuryTimer);
    // <conv.chunks.Comment object at 0x103a1d940>
    asl();
    sta(Square1SoundQueue);
    JSR(GetPlayerColors);
    lda(0xa);
    JMP(SetKRout);
}

int SetKRout() {
    // <conv.chunks.Comment object at 0x103a1db80>
    // <conv.chunks.Comment object at 0x103a1dca0>
    // <conv.chunks.Comment object at 0x103a1ddc0>
    // <conv.chunks.Comment object at 0x103a1de50>
    ldy(0x1);
    JMP(SetPRout);
}

int SetPRout() {
    // <conv.chunks.Comment object at 0x103a1dfa0>
    sta(GameEngineSubroutine);
    sty(Player_State);
    // <conv.chunks.Comment object at 0x103a1e180>
    ldy(0xff);
    sty(TimerControl);
    // <conv.chunks.Comment object at 0x103a1e300>
    iny();
    sty(ScrollAmount);
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103a1e690>
    return 0;
    JMP(KillPlayer);
}

int KillPlayer() {
    stx(Player_X_Speed);
    // <conv.chunks.Comment object at 0x103a1e870>
    inx();
    stx(EventMusicQueue);
    // <conv.chunks.Comment object at 0x103a1ea20>
    lda(0xfc);
    sta(Player_Y_Speed);
    lda(0xb);
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda(Enemy_ID, x);
    cmp(Spiny);
    // <conv.chunks.Comment object at 0x103a1f020>
    // <conv.chunks.Comment object at 0x103a1f380>
    BEQ(InjurePlayer);
    lda(Sfx_EnemyStomp);
    // <conv.chunks.Comment object at 0x103a1f5c0>
    sta(Square1SoundQueue);
    lda(Enemy_ID, x);
    ldy(0x0);
    cmp(FlyingCheepCheep);
    // <conv.chunks.Comment object at 0x103a1f8f0>
    // <conv.chunks.Comment object at 0x103a1f980>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_FrenzyVar);
    // <conv.chunks.Comment object at 0x103a1fc20>
    BEQ(EnemyStompedPts);
    cmp(BulletBill_CannonVar);
    BEQ(EnemyStompedPts);
    cmp(Podoboo);
    BEQ(EnemyStompedPts);
    iny();
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x103a28050>
    // <conv.chunks.Comment object at 0x103a281a0>
    // <conv.chunks.Comment object at 0x103a282f0>
    // <conv.chunks.Comment object at 0x103a28380>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x103a285c0>
    // <conv.chunks.Comment object at 0x103a28650>
    BEQ(EnemyStompedPts);
    iny();
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x103a288c0>
    // <conv.chunks.Comment object at 0x103a28950>
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda(offsetof(G, StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // <conv.chunks.Comment object at 0x103a28bc0>
    // <conv.chunks.Comment object at 0x103a28d10>
    lda(Enemy_MovingDir, x);
    pha();
    JSR(SetStun);
    // <conv.chunks.Comment object at 0x103a28f80>
    // <conv.chunks.Comment object at 0x103a29010>
    pla();
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103a291f0>
    lda(0b100000);
    sta(Enemy_State, x);
    JSR(InitVStf);
    sta(Enemy_X_Speed, x);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x103a29430>
    // <conv.chunks.Comment object at 0x103a29580>
    // <conv.chunks.Comment object at 0x103a296a0>
    // <conv.chunks.Comment object at 0x103a297f0>
    sta(Player_Y_Speed);
    return 0;
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x103a29ac0>
    BCC(HandleStompedShellE);
    anda(0b1);
    // <conv.chunks.Comment object at 0x103a29cd0>
    sta(Enemy_ID, x);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x103a29f10>
    sty(Enemy_State, x);
    lda(0x3);
    // <conv.chunks.Comment object at 0x103a2a150>
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // <conv.chunks.Comment object at 0x103a2a360>
    // <conv.chunks.Comment object at 0x103a2a480>
    lda(offsetof(G, DemotedKoopaXSpdData), y);
    sta(Enemy_X_Speed, x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(0x4);
    // <conv.chunks.Comment object at 0x103a2a9f0>
    sta(Enemy_State, x);
    inc(StompChainCounter);
    lda(StompChainCounter);
    clc();
    // <conv.chunks.Comment object at 0x103a2ad20>
    // <conv.chunks.Comment object at 0x103a2ae40>
    // <conv.chunks.Comment object at 0x103a2af90>
    adc(StompTimer);
    JSR(SetupFloateyNumber);
    inc(StompTimer);
    ldy(PrimaryHardMode);
    lda(offsetof(G, RevivalRateData), y);
    sta(EnemyIntervalTimer, x);
    JMP(SBnce);
}

int SBnce() {
    // <conv.chunks.Comment object at 0x103a2b110>
    // <conv.chunks.Comment object at 0x103a2b230>
    // <conv.chunks.Comment object at 0x103a2b350>
    // <conv.chunks.Comment object at 0x103a2b470>
    // <conv.chunks.Comment object at 0x103a2b5c0>
    // <conv.chunks.Comment object at 0x103a2b710>
    lda(0xfc);
    sta(Player_Y_Speed);
    // <conv.chunks.Comment object at 0x103a2b800>
    return 0;
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103a2ba70>
    cmp(0x1);
    BNE(LInj);
    JMP(InjurePlayer);
    JMP(LInj);
}

int LInj() {
    // <conv.chunks.Comment object at 0x103a2bc20>
    // <conv.chunks.Comment object at 0x103a2be00>
    // <conv.chunks.Comment object at 0x103a2bf20>
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
    // <conv.chunks.Comment object at 0x103a34230>
    // <conv.chunks.Comment object at 0x103a342c0>
    // <conv.chunks.Comment object at 0x103a34470>
    // <conv.chunks.Comment object at 0x103a345f0>
    // <conv.chunks.Comment object at 0x103a34680>
    sty(Enemy_MovingDir, x);
    dey();
    // <conv.chunks.Comment object at 0x103a34860>
    return 0;
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta(FloateyNum_Control, x);
    // <conv.chunks.Comment object at 0x103a349b0>
    lda(0x30);
    sta(FloateyNum_Timer, x);
    // <conv.chunks.Comment object at 0x103a34b60>
    lda(Enemy_Y_Position, x);
    sta(FloateyNum_Y_Pos, x);
    // <conv.chunks.Comment object at 0x103a34e60>
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
    // <conv.chunks.Comment object at 0x103a357c0>
    lsr();
    BCC(ExSFN);
    // <conv.chunks.Comment object at 0x103a35d60>
    lda(AreaType);
    BEQ(ExSFN);
    // <conv.chunks.Comment object at 0x103a35fa0>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x103a36210>
    BCS(ExitECRoutine);
    cmp(Lakitu);
    // <conv.chunks.Comment object at 0x103a36420>
    BEQ(ExitECRoutine);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x103a36660>
    BEQ(ExitECRoutine);
    lda(EnemyOffscrBitsMasked, x);
    // <conv.chunks.Comment object at 0x103a36870>
    BNE(ExitECRoutine);
    JSR(GetEnemyBoundBoxOfs);
    dex();
    BMI(ExitECRoutine);
    JMP(ECLoop);
}

int ECLoop() {
    // <conv.chunks.Comment object at 0x103a36ab0>
    // <conv.chunks.Comment object at 0x103a36c00>
    // <conv.chunks.Comment object at 0x103a36c90>
    // <conv.chunks.Comment object at 0x103a36db0>
    stx(0x1);
    tya();
    // <conv.chunks.Comment object at 0x103a36e10>
    pha();
    lda(Enemy_Flag, x);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x103a37080>
    // <conv.chunks.Comment object at 0x103a371d0>
    lda(Enemy_ID, x);
    cmp(0x15);
    BCS(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x103a37410>
    // <conv.chunks.Comment object at 0x103a374a0>
    cmp(Lakitu);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x103a37680>
    cmp(PiranhaPlant);
    BEQ(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x103a37980>
    lda(EnemyOffscrBitsMasked, x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // <conv.chunks.Comment object at 0x103a37bc0>
    // <conv.chunks.Comment object at 0x103a37d10>
    // <conv.chunks.Comment object at 0x103a37dd0>
    asl();
    clc();
    adc(0x4);
    tax();
    JSR(SprObjectCollisionCore);
    ldx(ObjectOffset);
    ldy(0x1);
    BCC(NoEnemyCollision);
    // <conv.chunks.Comment object at 0x103a400e0>
    // <conv.chunks.Comment object at 0x103a40170>
    // <conv.chunks.Comment object at 0x103a40290>
    // <conv.chunks.Comment object at 0x103a403e0>
    // <conv.chunks.Comment object at 0x103a40470>
    lda(Enemy_State, x);
    ora(Enemy_State, y);
    // <conv.chunks.Comment object at 0x103a40710>
    anda(0b10000000);
    BNE(YesEC);
    lda(Enemy_CollisionBits, y);
    anda(offsetof(G, SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // <conv.chunks.Comment object at 0x103a40950>
    // <conv.chunks.Comment object at 0x103a40aa0>
    // <conv.chunks.Comment object at 0x103a40bf0>
    // <conv.chunks.Comment object at 0x103a40d40>
    lda(Enemy_CollisionBits, y);
    ora(offsetof(G, SetBitsMask), x);
    // <conv.chunks.Comment object at 0x103a40f80>
    sta(Enemy_CollisionBits, y);
    JMP(YesEC);
}

int YesEC() {
    // <conv.chunks.Comment object at 0x103a411f0>
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
    // <conv.chunks.Comment object at 0x103a41910>
    // <conv.chunks.Comment object at 0x103a419d0>
    // <conv.chunks.Comment object at 0x103a41a90>
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
    // <conv.chunks.Comment object at 0x103a41fd0>
    ora(Enemy_State, x);
    anda(0b100000);
    BNE(ExitProcessEColl);
    // <conv.chunks.Comment object at 0x103a42240>
    // <conv.chunks.Comment object at 0x103a42360>
    lda(Enemy_State, x);
    cmp(0x6);
    // <conv.chunks.Comment object at 0x103a425a0>
    BCC(ProcSecondEnemyColl);
    lda(Enemy_ID, x);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x103a427b0>
    // <conv.chunks.Comment object at 0x103a42900>
    BEQ(ExitProcessEColl);
    lda(Enemy_State, y);
    // <conv.chunks.Comment object at 0x103a42b10>
    asl();
    BCC(ShellCollisions);
    // <conv.chunks.Comment object at 0x103a42cf0>
    lda(0x6);
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(0x1);
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // <conv.chunks.Comment object at 0x103a432c0>
    tax();
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x103a433e0>
    ldx(ObjectOffset);
    lda(ShellChainCounter, x);
    // <conv.chunks.Comment object at 0x103a435f0>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x103a437d0>
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
    // <conv.chunks.Comment object at 0x103a43e90>
    cmp(0x6);
    BCC(MoveEOfs);
    lda(Enemy_ID, y);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x103a48200>
    // <conv.chunks.Comment object at 0x103a48350>
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // <conv.chunks.Comment object at 0x103a48560>
    ldy(0x1);
    lda(ShellChainCounter, y);
    // <conv.chunks.Comment object at 0x103a48680>
    clc();
    adc(0x4);
    // <conv.chunks.Comment object at 0x103a48950>
    ldx(ObjectOffset);
    JSR(SetupFloateyNumber);
    ldx(0x1);
    inc(ShellChainCounter, x);
    return 0;
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // <conv.chunks.Comment object at 0x103a49010>
    tax();
    JSR(EnemyTurnAround);
    ldx(ObjectOffset);
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x103a493a0>
    cmp(PiranhaPlant);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x103a495e0>
    cmp(Lakitu);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x103a49760>
    cmp(HammerBro);
    BEQ(ExTA);
    // <conv.chunks.Comment object at 0x103a49a90>
    cmp(Spiny);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x103a49c40>
    cmp(GreenParatroopaJump);
    BEQ(RXSpd);
    // <conv.chunks.Comment object at 0x103a49f40>
    cmp(0x7);
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // <conv.chunks.Comment object at 0x103a4a0f0>
    // <conv.chunks.Comment object at 0x103a4a2d0>
    lda(Enemy_X_Speed, x);
    eor(0xff);
    // <conv.chunks.Comment object at 0x103a4a480>
    tay();
    iny();
    sty(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x103a4a6c0>
    lda(Enemy_MovingDir, x);
    eor(0b11);
    sta(Enemy_MovingDir, x);
    JMP(ExTA);
}

int ExTA() {
    // <conv.chunks.Comment object at 0x103a4a930>
    // <conv.chunks.Comment object at 0x103a4aa50>
    // <conv.chunks.Comment object at 0x103a4aba0>
    return 0;
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(0xff);
    // <conv.chunks.Comment object at 0x103a4acf0>
    // <conv.chunks.Comment object at 0x103a4ad50>
    sta(PlatformCollisionFlag, x);
    lda(TimerControl);
    BNE(ExLPC);
    lda(Enemy_State, x);
    BMI(ExLPC);
    // <conv.chunks.Comment object at 0x103a4af90>
    // <conv.chunks.Comment object at 0x103a4b0b0>
    // <conv.chunks.Comment object at 0x103a4b200>
    // <conv.chunks.Comment object at 0x103a4b350>
    lda(Enemy_ID, x);
    cmp(0x24);
    BNE(ChkForPlayerC_LargeP);
    // <conv.chunks.Comment object at 0x103a4b5c0>
    // <conv.chunks.Comment object at 0x103a4b650>
    lda(Enemy_State, x);
    tax();
    JSR(ChkForPlayerC_LargeP);
    JMP(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    JSR(CheckPlayerVertical);
    BCS(ExLPC);
    // <conv.chunks.Comment object at 0x103a4bb30>
    // <conv.chunks.Comment object at 0x103a4bc50>
    txa();
    JSR(GetEnemyBoundBoxOfsArg);
    lda(Enemy_Y_Position, x);
    sta(0x0);
    txa();
    // <conv.chunks.Comment object at 0x103a4be30>
    // <conv.chunks.Comment object at 0x103a4bf50>
    // <conv.chunks.Comment object at 0x103a54110>
    // <conv.chunks.Comment object at 0x103a540e0>
    pha();
    JSR(PlayerCollisionCore);
    pla();
    // <conv.chunks.Comment object at 0x103a54350>
    // <conv.chunks.Comment object at 0x103a544a0>
    tax();
    BCC(ExLPC);
    JSR(ProcLPlatCollisions);
    JMP(ExLPC);
}

int ExLPC() {
    // <conv.chunks.Comment object at 0x103a545c0>
    // <conv.chunks.Comment object at 0x103a54710>
    // <conv.chunks.Comment object at 0x103a54830>
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
    // <conv.chunks.Comment object at 0x103a54a70>
    // <conv.chunks.Comment object at 0x103a54ad0>
    // <conv.chunks.Comment object at 0x103a54bf0>
    // <conv.chunks.Comment object at 0x103a54d40>
    // <conv.chunks.Comment object at 0x103a54e90>
    // <conv.chunks.Comment object at 0x103a54fb0>
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
    // <conv.chunks.Comment object at 0x103a55df0>
    // <conv.chunks.Comment object at 0x103a55f70>
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
    // <conv.chunks.Comment object at 0x103a56600>
    // <conv.chunks.Comment object at 0x103a56690>
    // <conv.chunks.Comment object at 0x103a56810>
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
    // <conv.chunks.Comment object at 0x103a575f0>
    // <conv.chunks.Comment object at 0x103a57740>
    // <conv.chunks.Comment object at 0x103a577d0>
    cmp(0x6);
    BCS(PlatformSideCollisions);
    // <conv.chunks.Comment object at 0x103a57980>
    lda(Player_Y_Speed);
    BMI(PlatformSideCollisions);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103a57c20>
    // <conv.chunks.Comment object at 0x103a57d70>
    ldy(Enemy_ID, x);
    cpy(0x2b);
    BEQ(SetCollisionFlag);
    cpy(0x2c);
    // <conv.chunks.Comment object at 0x103a57f80>
    // <conv.chunks.Comment object at 0x103a60050>
    // <conv.chunks.Comment object at 0x103a60200>
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx(ObjectOffset);
    sta(PlatformCollisionFlag, x);
    // <conv.chunks.Comment object at 0x103a60500>
    // <conv.chunks.Comment object at 0x103a60620>
    lda(0x0);
    sta(Player_State);
    // <conv.chunks.Comment object at 0x103a607d0>
    return 0;
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(0x1);
    sta(0x0);
    lda(BoundingBox_DR_XPos);
    sec();
    // <conv.chunks.Comment object at 0x103a60a40>
    // <conv.chunks.Comment object at 0x103a60b90>
    // <conv.chunks.Comment object at 0x103a60c20>
    // <conv.chunks.Comment object at 0x103a60dd0>
    sbc(BoundingBox_UL_XPos, y);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x103a60f80>
    BCC(SideC);
    inc(0x0);
    lda(BoundingBox_DR_XPos, y);
    clc();
    // <conv.chunks.Comment object at 0x103a611f0>
    // <conv.chunks.Comment object at 0x103a61280>
    // <conv.chunks.Comment object at 0x103a61460>
    sbc(BoundingBox_UL_XPos);
    cmp(0x9);
    BCS(NoSideC);
    JMP(SideC);
}

int SideC() {
    // <conv.chunks.Comment object at 0x103a615e0>
    // <conv.chunks.Comment object at 0x103a61670>
    // <conv.chunks.Comment object at 0x103a61850>
    JSR(ImpedePlayerMove);
    JMP(NoSideC);
}

int NoSideC() {
    // <conv.chunks.Comment object at 0x103a619d0>
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
    // <conv.chunks.Comment object at 0x103a62300>
    ldy(GameEngineSubroutine);
    cpy(0xb);
    BEQ(ExPlPos);
    // <conv.chunks.Comment object at 0x103a625a0>
    // <conv.chunks.Comment object at 0x103a62630>
    ldy(Enemy_Y_HighPos, x);
    cpy(0x1);
    // <conv.chunks.Comment object at 0x103a62930>
    BNE(ExPlPos);
    sec();
    sbc(0x20);
    sta(Player_Y_Position);
    // <conv.chunks.Comment object at 0x103a62ba0>
    // <conv.chunks.Comment object at 0x103a62c30>
    // <conv.chunks.Comment object at 0x103a62cc0>
    tya();
    sbc(0x0);
    sta(Player_Y_HighPos);
    // <conv.chunks.Comment object at 0x103a62f00>
    // <conv.chunks.Comment object at 0x103a62f90>
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
    // <conv.chunks.Comment object at 0x103a635c0>
    // <conv.chunks.Comment object at 0x103a636e0>
    BCS(ExCPV);
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x103a63920>
    // <conv.chunks.Comment object at 0x103a63a70>
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
    // <conv.chunks.Comment object at 0x103a68170>
    // <conv.chunks.Comment object at 0x103a68230>
    clc();
    adc(0x4);
    tay();
    lda(Enemy_OffscreenBits);
    anda(0b1111);
    cmp(0b1111);
    // <conv.chunks.Comment object at 0x103a68470>
    // <conv.chunks.Comment object at 0x103a68500>
    // <conv.chunks.Comment object at 0x103a68620>
    // <conv.chunks.Comment object at 0x103a68740>
    return 0;
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda(DisableCollisionDet);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x103a68a40>
    // <conv.chunks.Comment object at 0x103a68c50>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(ExPBGCol);
    // <conv.chunks.Comment object at 0x103a68e60>
    // <conv.chunks.Comment object at 0x103a68ef0>
    cmp(0x4);
    BCC(ExPBGCol);
    lda(0x1);
    ldy(SwimmingFlag);
    BNE(SetPSte);
    lda(Player_State);
    BEQ(SetFallS);
    // <conv.chunks.Comment object at 0x103a69100>
    // <conv.chunks.Comment object at 0x103a692b0>
    // <conv.chunks.Comment object at 0x103a69340>
    // <conv.chunks.Comment object at 0x103a694f0>
    // <conv.chunks.Comment object at 0x103a69640>
    // <conv.chunks.Comment object at 0x103a69760>
    cmp(0x3);
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // <conv.chunks.Comment object at 0x103a698e0>
    // <conv.chunks.Comment object at 0x103a69a90>
    lda(0x2);
    JMP(SetPSte);
}

int SetPSte() {
    // <conv.chunks.Comment object at 0x103a69b50>
    sta(Player_State);
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda(Player_Y_HighPos);
    cmp(0x1);
    BNE(ExPBGCol);
    // <conv.chunks.Comment object at 0x103a69e80>
    // <conv.chunks.Comment object at 0x103a69f10>
    lda(0xff);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x103a6a120>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // <conv.chunks.Comment object at 0x103a6a3c0>
    // <conv.chunks.Comment object at 0x103a6a450>
    // <conv.chunks.Comment object at 0x103a6a600>
    return 0;
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(0x2);
    // <conv.chunks.Comment object at 0x103a6a720>
    lda(CrouchingFlag);
    BNE(GBBAdr);
    // <conv.chunks.Comment object at 0x103a6a930>
    lda(PlayerSize);
    BNE(GBBAdr);
    dey();
    // <conv.chunks.Comment object at 0x103a6ab70>
    // <conv.chunks.Comment object at 0x103a6acf0>
    lda(SwimmingFlag);
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // <conv.chunks.Comment object at 0x103a6ae70>
    // <conv.chunks.Comment object at 0x103a6aff0>
    // <conv.chunks.Comment object at 0x103a6b080>
    lda(offsetof(G, BlockBufferAdderData), y);
    sta(0xeb);
    tay();
    ldx(PlayerSize);
    // <conv.chunks.Comment object at 0x103a6b260>
    // <conv.chunks.Comment object at 0x103a6b230>
    // <conv.chunks.Comment object at 0x103a6b410>
    lda(CrouchingFlag);
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // <conv.chunks.Comment object at 0x103a6b620>
    // <conv.chunks.Comment object at 0x103a6b7a0>
    // <conv.chunks.Comment object at 0x103a6b830>
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
    // <conv.chunks.Comment object at 0x103a71010>
    // <conv.chunks.Comment object at 0x103a710a0>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NYSpd);
}

int NYSpd() {
    // <conv.chunks.Comment object at 0x103a71370>
    // <conv.chunks.Comment object at 0x103a71490>
    lda(0x1);
    sta(Player_Y_Speed);
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(0xeb);
    // <conv.chunks.Comment object at 0x103a71790>
    lda(Player_Y_Position);
    cmp(0xcf);
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(0x0);
    // <conv.chunks.Comment object at 0x103a71970>
    // <conv.chunks.Comment object at 0x103a71a00>
    // <conv.chunks.Comment object at 0x103a71bb0>
    // <conv.chunks.Comment object at 0x103a71cd0>
    // <conv.chunks.Comment object at 0x103a71df0>
    // <conv.chunks.Comment object at 0x103a71f40>
    // <conv.chunks.Comment object at 0x103a71fd0>
    // <conv.chunks.Comment object at 0x103a72120>
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
    // <conv.chunks.Comment object at 0x103a72ae0>
    // <conv.chunks.Comment object at 0x103a72c00>
    // <conv.chunks.Comment object at 0x103a72d20>
    // <conv.chunks.Comment object at 0x103a72e40>
    cmp(0xc5);
    BNE(ContChk);
    JMP(HandleAxeMetatile);
    JMP(ContChk);
}

int ContChk() {
    // <conv.chunks.Comment object at 0x103a72fc0>
    // <conv.chunks.Comment object at 0x103a731a0>
    // <conv.chunks.Comment object at 0x103a732c0>
    JSR(ChkInvisibleMTiles);
    BEQ(DoPlayerSideCheck);
    ldy(JumpspringAnimCtrl);
    BNE(InitSteP);
    ldy(0x4);
    cpy(0x5);
    BCC(LandPlyr);
    // <conv.chunks.Comment object at 0x103a73440>
    // <conv.chunks.Comment object at 0x103a73560>
    // <conv.chunks.Comment object at 0x103a73680>
    // <conv.chunks.Comment object at 0x103a737d0>
    // <conv.chunks.Comment object at 0x103a73860>
    // <conv.chunks.Comment object at 0x103a73950>
    lda(Player_MovingDir);
    sta(0x0);
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // <conv.chunks.Comment object at 0x103a73c20>
    // <conv.chunks.Comment object at 0x103a73cb0>
    // <conv.chunks.Comment object at 0x103a73e30>
    JSR(ChkForLandJumpSpring);
    lda(0xf0);
    anda(Player_Y_Position);
    sta(Player_Y_Position);
    JSR(HandlePipeEntry);
    // <conv.chunks.Comment object at 0x103a73fe0>
    // <conv.chunks.Comment object at 0x103a801d0>
    // <conv.chunks.Comment object at 0x103a802f0>
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
    // <conv.chunks.Comment object at 0x103a80b00>
    iny();
    iny();
    lda(0x2);
    // <conv.chunks.Comment object at 0x103a80cb0>
    // <conv.chunks.Comment object at 0x103a80d40>
    sta(0x0);
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(0xeb);
    // <conv.chunks.Comment object at 0x103a80fb0>
    // <conv.chunks.Comment object at 0x103a81070>
    lda(Player_Y_Position);
    cmp(0x20);
    BCC(BHalf);
    // <conv.chunks.Comment object at 0x103a81250>
    // <conv.chunks.Comment object at 0x103a812e0>
    cmp(0xe4);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(0x1c);
    BEQ(BHalf);
    // <conv.chunks.Comment object at 0x103a81520>
    // <conv.chunks.Comment object at 0x103a81700>
    // <conv.chunks.Comment object at 0x103a81820>
    // <conv.chunks.Comment object at 0x103a81970>
    // <conv.chunks.Comment object at 0x103a81a00>
    cmp(0x6b);
    BEQ(BHalf);
    JSR(CheckForClimbMTiles);
    BCC(CheckSideMTiles);
    JMP(BHalf);
}

int BHalf() {
    // <conv.chunks.Comment object at 0x103a81c40>
    // <conv.chunks.Comment object at 0x103a81e20>
    // <conv.chunks.Comment object at 0x103a81f40>
    // <conv.chunks.Comment object at 0x103a82060>
    ldy(0xeb);
    iny();
    lda(Player_Y_Position);
    // <conv.chunks.Comment object at 0x103a820c0>
    // <conv.chunks.Comment object at 0x103a822a0>
    cmp(0x8);
    BCC(ExSCH);
    // <conv.chunks.Comment object at 0x103a82420>
    cmp(0xd0);
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(0x0);
    BNE(SideCheckLoop);
    JMP(ExSCH);
}

int ExSCH() {
    // <conv.chunks.Comment object at 0x103a82660>
    // <conv.chunks.Comment object at 0x103a82840>
    // <conv.chunks.Comment object at 0x103a82960>
    // <conv.chunks.Comment object at 0x103a82ab0>
    // <conv.chunks.Comment object at 0x103a82b40>
    // <conv.chunks.Comment object at 0x103a82cf0>
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
    // <conv.chunks.Comment object at 0x103a82e40>
    // <conv.chunks.Comment object at 0x103a82f60>
    // <conv.chunks.Comment object at 0x103a830b0>
    // <conv.chunks.Comment object at 0x103a831d0>
    // <conv.chunks.Comment object at 0x103a832f0>
    // <conv.chunks.Comment object at 0x103a83410>
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
    // <conv.chunks.Comment object at 0x103a83560>
    // <conv.chunks.Comment object at 0x103a83680>
    // <conv.chunks.Comment object at 0x103a837a0>
    // <conv.chunks.Comment object at 0x103a838f0>
    // <conv.chunks.Comment object at 0x103a83a10>
    // <conv.chunks.Comment object at 0x103a83b60>
    // <conv.chunks.Comment object at 0x103a83c80>
    ldy(Player_State);
    cpy(0x0);
    BNE(StopPlayerMove);
    ldy(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x103a83e00>
    // <conv.chunks.Comment object at 0x103a83e90>
    // <conv.chunks.Comment object at 0x103a88080>
    dey();
    BNE(StopPlayerMove);
    cmp(0x6c);
    BEQ(PipeDwnS);
    cmp(0x1f);
    BNE(StopPlayerMove);
    JMP(PipeDwnS);
}

int PipeDwnS() {
    // <conv.chunks.Comment object at 0x103a88230>
    // <conv.chunks.Comment object at 0x103a88350>
    // <conv.chunks.Comment object at 0x103a883e0>
    // <conv.chunks.Comment object at 0x103a88590>
    // <conv.chunks.Comment object at 0x103a88620>
    // <conv.chunks.Comment object at 0x103a887d0>
    lda(Player_SprAttrib);
    BNE(PlyrPipe);
    // <conv.chunks.Comment object at 0x103a88920>
    ldy(Sfx_PipeDown_Injury);
    sty(Square1SoundQueue);
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(0b100000);
    sta(Player_SprAttrib);
    // <conv.chunks.Comment object at 0x103a88d70>
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
    // <conv.chunks.Comment object at 0x103a88f80>
    // <conv.chunks.Comment object at 0x103a890a0>
    // <conv.chunks.Comment object at 0x103a891c0>
    // <conv.chunks.Comment object at 0x103a89250>
    // <conv.chunks.Comment object at 0x103a89400>
    // <conv.chunks.Comment object at 0x103a89550>
    // <conv.chunks.Comment object at 0x103a895e0>
    lda(offsetof(G, AreaChangeTimerData), y);
    sta(ChangeAreaTimer);
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // <conv.chunks.Comment object at 0x103a89850>
    lda(GameEngineSubroutine);
    cmp(0x7);
    BEQ(ExCSM);
    cmp(0x8);
    // <conv.chunks.Comment object at 0x103a89a00>
    // <conv.chunks.Comment object at 0x103a89be0>
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
    // <conv.chunks.Comment object at 0x103a89e80>
    // <conv.chunks.Comment object at 0x103a8a060>
    // <conv.chunks.Comment object at 0x103a8a120>
    // <conv.chunks.Comment object at 0x103a8a180>
    // <conv.chunks.Comment object at 0x103a8a1e0>
    // <conv.chunks.Comment object at 0x103a8a330>
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
    // <conv.chunks.Comment object at 0x103a8a9f0>
    lda(0x2);
    sta(OperMode);
    // <conv.chunks.Comment object at 0x103a8ac00>
    lda(0x18);
    sta(Player_X_Speed);
    JMP(ErACM);
}

int ErACM() {
    // <conv.chunks.Comment object at 0x103a8ae10>
    // <conv.chunks.Comment object at 0x103a8afc0>
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
    // <conv.chunks.Comment object at 0x103a8b920>
    // <conv.chunks.Comment object at 0x103a8b680>
    // <conv.chunks.Comment object at 0x103a8bd40>
    // <conv.chunks.Comment object at 0x103a8bf20>
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // <conv.chunks.Comment object at 0x103a90170>
    return 0;
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(0x24);
    BEQ(FlagpoleCollision);
    // <conv.chunks.Comment object at 0x103a902c0>
    // <conv.chunks.Comment object at 0x103a90350>
    cmp(0x25);
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda(GameEngineSubroutine);
    cmp(0x5);
    BEQ(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x103a90830>
    // <conv.chunks.Comment object at 0x103a908c0>
    lda(0x1);
    sta(PlayerFacingDir);
    inc(ScrollLock);
    // <conv.chunks.Comment object at 0x103a90ad0>
    // <conv.chunks.Comment object at 0x103a90c80>
    lda(GameEngineSubroutine);
    cmp(0x4);
    BEQ(RunFR);
    lda(BulletBill_CannonVar);
    JSR(KillEnemies);
    // <conv.chunks.Comment object at 0x103a90e90>
    // <conv.chunks.Comment object at 0x103a90f20>
    // <conv.chunks.Comment object at 0x103a91100>
    // <conv.chunks.Comment object at 0x103a91220>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x103a91460>
    lsr();
    sta(FlagpoleSoundQueue);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x103a91610>
    // <conv.chunks.Comment object at 0x103a91730>
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
    // <conv.chunks.Comment object at 0x103a91a90>
    // <conv.chunks.Comment object at 0x103a91be0>
    // <conv.chunks.Comment object at 0x103a91d60>
    // <conv.chunks.Comment object at 0x103a91df0>
    // <conv.chunks.Comment object at 0x103a91f10>
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
    // <conv.chunks.Comment object at 0x103a92450>
    BNE(PutPlayerOnVine);
    lda(Player_Y_Position);
    cmp(0x20);
    BCS(PutPlayerOnVine);
    // <conv.chunks.Comment object at 0x103a92660>
    // <conv.chunks.Comment object at 0x103a92780>
    // <conv.chunks.Comment object at 0x103a92810>
    lda(0x1);
    sta(GameEngineSubroutine);
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x103a92c00>
    sta(Player_State);
    lda(0x0);
    sta(Player_X_Speed);
    // <conv.chunks.Comment object at 0x103a92e10>
    // <conv.chunks.Comment object at 0x103a92ea0>
    sta(Player_X_MoveForce);
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x103a93140>
    sec();
    sbc(ScreenLeft_X_Pos);
    // <conv.chunks.Comment object at 0x103a932f0>
    cmp(0x10);
    BCS(SetVXPl);
    // <conv.chunks.Comment object at 0x103a93470>
    lda(0x2);
    sta(PlayerFacingDir);
    JMP(SetVXPl);
}

int SetVXPl() {
    // <conv.chunks.Comment object at 0x103a936b0>
    // <conv.chunks.Comment object at 0x103a93860>
    ldy(PlayerFacingDir);
    lda(0x6);
    // <conv.chunks.Comment object at 0x103a93a10>
    asl();
    asl();
    // <conv.chunks.Comment object at 0x103a93bc0>
    asl();
    asl();
    clc();
    adc(((offsetof(G, ClimbXPosAdder)) - (1)), y);
    sta(Player_X_Position);
    lda(0x6);
    BNE(ExPVne);
    lda(ScreenRight_PageLoc);
    // <conv.chunks.Comment object at 0x103a93e00>
    // <conv.chunks.Comment object at 0x103aa0050>
    // <conv.chunks.Comment object at 0x103aa01a0>
    // <conv.chunks.Comment object at 0x103aa0230>
    // <conv.chunks.Comment object at 0x103aa03e0>
    clc();
    adc(((offsetof(G, ClimbPLocAdder)) - (1)), y);
    sta(Player_PageLoc);
    JMP(ExPVne);
}

int ExPVne() {
    // <conv.chunks.Comment object at 0x103aa0590>
    // <conv.chunks.Comment object at 0x103aa07a0>
    // <conv.chunks.Comment object at 0x103aa08c0>
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
    // <conv.chunks.Comment object at 0x103aa0a40>
    // <conv.chunks.Comment object at 0x103aa0ad0>
    // <conv.chunks.Comment object at 0x103aa0cb0>
    // <conv.chunks.Comment object at 0x103aa0d40>
    return 0;
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // <conv.chunks.Comment object at 0x103aa0fb0>
    // <conv.chunks.Comment object at 0x103aa10d0>
    lda(0x70);
    sta(VerticalForce);
    // <conv.chunks.Comment object at 0x103aa1280>
    lda(0xf9);
    sta(JumpspringForce);
    // <conv.chunks.Comment object at 0x103aa1490>
    lda(0x3);
    sta(JumpspringTimer);
    // <conv.chunks.Comment object at 0x103aa16a0>
    lsr();
    sta(JumpspringAnimCtrl);
    JMP(ExCJSp);
}

int ExCJSp() {
    // <conv.chunks.Comment object at 0x103aa18e0>
    // <conv.chunks.Comment object at 0x103aa1a00>
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
    // <conv.chunks.Comment object at 0x103aa1b50>
    // <conv.chunks.Comment object at 0x103aa1be0>
    // <conv.chunks.Comment object at 0x103aa1dc0>
    // <conv.chunks.Comment object at 0x103aa1f10>
    // <conv.chunks.Comment object at 0x103aa1fa0>
    // <conv.chunks.Comment object at 0x103aa20f0>
    sec();
    JMP(NoJSFnd);
}

int NoJSFnd() {
    // <conv.chunks.Comment object at 0x103aa2240>
    return 0;
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda(Up_Down_Buttons);
    anda(0b100);
    BEQ(ExPipeE);
    // <conv.chunks.Comment object at 0x103aa2390>
    // <conv.chunks.Comment object at 0x103aa24b0>
    // <conv.chunks.Comment object at 0x103aa25d0>
    lda(0x0);
    cmp(0x11);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x103aa2720>
    // <conv.chunks.Comment object at 0x103aa28a0>
    lda(0x1);
    cmp(0x10);
    BNE(ExPipeE);
    // <conv.chunks.Comment object at 0x103aa2a80>
    // <conv.chunks.Comment object at 0x103aa2c00>
    lda(0x30);
    sta(ChangeAreaTimer);
    // <conv.chunks.Comment object at 0x103aa2e40>
    lda(0x3);
    sta(GameEngineSubroutine);
    // <conv.chunks.Comment object at 0x103aa3050>
    lda(Sfx_PipeDown_Injury);
    sta(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x103aa32f0>
    lda(0b100000);
    sta(Player_SprAttrib);
    lda(WarpZoneControl);
    BEQ(ExPipeE);
    anda(0b11);
    // <conv.chunks.Comment object at 0x103aa3500>
    // <conv.chunks.Comment object at 0x103aa3620>
    // <conv.chunks.Comment object at 0x103aa3740>
    // <conv.chunks.Comment object at 0x103aa3890>
    asl();
    asl();
    tax();
    lda(Player_X_Position);
    // <conv.chunks.Comment object at 0x103aa3a70>
    // <conv.chunks.Comment object at 0x103aa3b30>
    // <conv.chunks.Comment object at 0x103aa3bc0>
    cmp(0x60);
    BCC(GetWNum);
    inx();
    // <conv.chunks.Comment object at 0x103aa3d40>
    // <conv.chunks.Comment object at 0x103aa3f50>
    cmp(0xa0);
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // <conv.chunks.Comment object at 0x103aa8080>
    // <conv.chunks.Comment object at 0x103aa8290>
    // <conv.chunks.Comment object at 0x103aa8320>
    ldy(offsetof(G, WarpZoneNumbers), x);
    dey();
    sty(WorldNumber);
    ldx(offsetof(G, WorldAddrOffsets), y);
    lda(offsetof(G, AreaAddrOffsets), x);
    sta(AreaPointer);
    // <conv.chunks.Comment object at 0x103aa8500>
    // <conv.chunks.Comment object at 0x103aa8590>
    // <conv.chunks.Comment object at 0x103aa86b0>
    // <conv.chunks.Comment object at 0x103aa8800>
    // <conv.chunks.Comment object at 0x103aa8950>
    lda(Silence);
    sta(EventMusicQueue);
    // <conv.chunks.Comment object at 0x103aa8b90>
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
    // <conv.chunks.Comment object at 0x103aa8d10>
    // <conv.chunks.Comment object at 0x103aa8ec0>
    // <conv.chunks.Comment object at 0x103aa8fe0>
    // <conv.chunks.Comment object at 0x103aa9100>
    // <conv.chunks.Comment object at 0x103aa9220>
    // <conv.chunks.Comment object at 0x103aa9340>
    // <conv.chunks.Comment object at 0x103aa9460>
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
    // <conv.chunks.Comment object at 0x103aa95b0>
    // <conv.chunks.Comment object at 0x103aa9640>
    // <conv.chunks.Comment object at 0x103aa9820>
    // <conv.chunks.Comment object at 0x103aa97f0>
    // <conv.chunks.Comment object at 0x103aa99d0>
    // <conv.chunks.Comment object at 0x103aa9b50>
    // <conv.chunks.Comment object at 0x103aa9be0>
    // <conv.chunks.Comment object at 0x103aa9c70>
    // <conv.chunks.Comment object at 0x103aa9e50>
    // <conv.chunks.Comment object at 0x103aa9ee0>
    // <conv.chunks.Comment object at 0x103aaa0c0>
    ldx(0x2);
    cpy(0x1);
    BPL(ExIPM);
    lda(0x1);
    JMP(NXSpd);
}

int NXSpd() {
    ldy(0x10);
    sty(SideCollisionTimer);
    // <conv.chunks.Comment object at 0x103aaa690>
    ldy(0x0);
    sty(Player_X_Speed);
    cmp(0x0);
    BPL(PlatF);
    dey();
    JMP(PlatF);
}

int PlatF() {
    // <conv.chunks.Comment object at 0x103aaa8a0>
    // <conv.chunks.Comment object at 0x103aaaa50>
    // <conv.chunks.Comment object at 0x103aaaae0>
    // <conv.chunks.Comment object at 0x103aaacf0>
    // <conv.chunks.Comment object at 0x103aaad80>
    sty(0x0);
    clc();
    adc(Player_X_Position);
    sta(Player_X_Position);
    // <conv.chunks.Comment object at 0x103aaaf90>
    // <conv.chunks.Comment object at 0x103aab0b0>
    lda(Player_PageLoc);
    adc(0x0);
    sta(Player_PageLoc);
    JMP(ExIPM);
}

int ExIPM() {
    // <conv.chunks.Comment object at 0x103aab2f0>
    // <conv.chunks.Comment object at 0x103aab380>
    // <conv.chunks.Comment object at 0x103aab500>
    txa();
    eor(0xff);
    anda(Player_CollisionBits);
    sta(Player_CollisionBits);
    // <conv.chunks.Comment object at 0x103aab680>
    // <conv.chunks.Comment object at 0x103aab830>
    return 0;
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, SolidMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x103aabaa0>
    // <conv.chunks.Comment object at 0x103aabdd0>
    return 0;
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp(offsetof(G, ClimbMTileUpperExt), x);
    // <conv.chunks.Comment object at 0x103ab4050>
    // <conv.chunks.Comment object at 0x103ab43b0>
    return 0;
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(0xc2);
    BEQ(CoinSd);
    cmp(0xc3);
    BEQ(CoinSd);
    clc();
    // <conv.chunks.Comment object at 0x103ab45c0>
    // <conv.chunks.Comment object at 0x103ab4650>
    // <conv.chunks.Comment object at 0x103ab4830>
    // <conv.chunks.Comment object at 0x103ab48c0>
    // <conv.chunks.Comment object at 0x103ab4ad0>
    return 0;
    JMP(CoinSd);
}

int CoinSd() {
    lda(Sfx_CoinGrab);
    sta(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x103ab4d40>
    return 0;
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(0b11000000);
    // <conv.chunks.Comment object at 0x103ab4f50>
    // <conv.chunks.Comment object at 0x103ab4fe0>
    asl();
    rol();
    // <conv.chunks.Comment object at 0x103ab51c0>
    rol();
    tax();
    tya();
    JMP(ExEBG);
}

int ExEBG() {
    // <conv.chunks.Comment object at 0x103ab5310>
    // <conv.chunks.Comment object at 0x103ab53d0>
    // <conv.chunks.Comment object at 0x103ab5490>
    return 0;
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103ab5700>
    anda(0b100000);
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // <conv.chunks.Comment object at 0x103ab5d60>
    // <conv.chunks.Comment object at 0x103ab5eb0>
    // <conv.chunks.Comment object at 0x103ab5fd0>
    ldy(Enemy_ID, x);
    cpy(Spiny);
    // <conv.chunks.Comment object at 0x103ab6240>
    BNE(DoIDCheckBGColl);
    lda(Enemy_Y_Position, x);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x103ab65a0>
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
    // <conv.chunks.Comment object at 0x103ab6810>
    // <conv.chunks.Comment object at 0x103ab6930>
    // <conv.chunks.Comment object at 0x103ab6a80>
    // <conv.chunks.Comment object at 0x103ab6ba0>
    cpy(HammerBro);
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // <conv.chunks.Comment object at 0x103ab6d20>
    // <conv.chunks.Comment object at 0x103ab6e70>
    // <conv.chunks.Comment object at 0x103ab6f90>
    cpy(Spiny);
    BEQ(YesIn);
    cpy(PowerUpObject);
    // <conv.chunks.Comment object at 0x103ab7260>
    BEQ(YesIn);
    cpy(0x7);
    // <conv.chunks.Comment object at 0x103ab74a0>
    BCS(ExEBGChk);
    JMP(YesIn);
}

int YesIn() {
    // <conv.chunks.Comment object at 0x103ab76b0>
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
    // <conv.chunks.Comment object at 0x103ab7980>
    // <conv.chunks.Comment object at 0x103ab7ad0>
    // <conv.chunks.Comment object at 0x103ab7b30>
    // <conv.chunks.Comment object at 0x103ab7c50>
    cmp(0x23);
    BNE(LandEnemyProperly);
    ldy(0x2);
    lda(0x0);
    sta((0x6), y);
    // <conv.chunks.Comment object at 0x103ab7dd0>
    // <conv.chunks.Comment object at 0x103ab7fb0>
    // <conv.chunks.Comment object at 0x103ab7f80>
    // <conv.chunks.Comment object at 0x103ac4170>
    lda(Enemy_ID, x);
    cmp(0x15);
    // <conv.chunks.Comment object at 0x103ac44a0>
    BCS(ChkToStunEnemies);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x103ac46b0>
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(0x1);
    // <conv.chunks.Comment object at 0x103ac4a40>
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(0x9);
    // <conv.chunks.Comment object at 0x103ac4c80>
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
    // <conv.chunks.Comment object at 0x103ac4ec0>
    // <conv.chunks.Comment object at 0x103ac4f50>
    // <conv.chunks.Comment object at 0x103ac5130>
    // <conv.chunks.Comment object at 0x103ac51c0>
    // <conv.chunks.Comment object at 0x103ac53a0>
    // <conv.chunks.Comment object at 0x103ac54c0>
    // <conv.chunks.Comment object at 0x103ac5610>
    anda(0b1);
    sta(Enemy_ID, x);
    JMP(SetStun);
}

int SetStun() {
    // <conv.chunks.Comment object at 0x103ac5790>
    // <conv.chunks.Comment object at 0x103ac58e0>
    lda(Enemy_State, x);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x103ac5a90>
    ora(0b10);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103ac5ca0>
    dec(Enemy_Y_Position, x);
    dec(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103ac5f10>
    lda(Enemy_ID, x);
    cmp(Bloober);
    // <conv.chunks.Comment object at 0x103ac6180>
    BEQ(SetWYSpd);
    lda(0xfd);
    // <conv.chunks.Comment object at 0x103ac63c0>
    ldy(AreaType);
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // <conv.chunks.Comment object at 0x103ac65d0>
    // <conv.chunks.Comment object at 0x103ac6720>
    lda(0xff);
    JMP(SetNotW);
}

int SetNotW() {
    // <conv.chunks.Comment object at 0x103ac67e0>
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
    // <conv.chunks.Comment object at 0x103ac6f60>
    BEQ(NoCDirF);
    cmp(BulletBill_FrenzyVar);
    BEQ(NoCDirF);
    sty(Enemy_MovingDir, x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // <conv.chunks.Comment object at 0x103ac71a0>
    // <conv.chunks.Comment object at 0x103ac72c0>
    // <conv.chunks.Comment object at 0x103ac7410>
    // <conv.chunks.Comment object at 0x103ac7560>
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
    // <conv.chunks.Comment object at 0x103ac7a10>
    // <conv.chunks.Comment object at 0x103ac7aa0>
    sec();
    sbc(0x8);
    cmp(0x5);
    BCS(ChkForRedKoopa);
    // <conv.chunks.Comment object at 0x103ac7c20>
    // <conv.chunks.Comment object at 0x103ac7cb0>
    // <conv.chunks.Comment object at 0x103ac7dd0>
    lda(Enemy_State, x);
    anda(0b1000000);
    // <conv.chunks.Comment object at 0x103acc0e0>
    BNE(LandEnemyInitState);
    lda(Enemy_State, x);
    asl();
    // <conv.chunks.Comment object at 0x103acc440>
    BCC(ChkLandedEnemyState);
    JMP(SChkA);
}

int SChkA() {
    // <conv.chunks.Comment object at 0x103acc5c0>
    JMP(DoEnemySideCheck);
    JMP(ChkLandedEnemyState);
}

int ChkLandedEnemyState() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103acc770>
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
    // <conv.chunks.Comment object at 0x103acc9e0>
    // <conv.chunks.Comment object at 0x103acca70>
    // <conv.chunks.Comment object at 0x103accc20>
    // <conv.chunks.Comment object at 0x103acccb0>
    // <conv.chunks.Comment object at 0x103acce60>
    // <conv.chunks.Comment object at 0x103accfb0>
    // <conv.chunks.Comment object at 0x103acd040>
    // <conv.chunks.Comment object at 0x103acd1f0>
    // <conv.chunks.Comment object at 0x103acd280>
    cpy(Spiny);
    BNE(SetForStn);
    lda(0x0);
    JMP(SetForStn);
}

int SetForStn() {
    // <conv.chunks.Comment object at 0x103acd4c0>
    // <conv.chunks.Comment object at 0x103acd6a0>
    // <conv.chunks.Comment object at 0x103acd730>
    sta(EnemyIntervalTimer, x);
    lda(0x3);
    sta(Enemy_State, x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // <conv.chunks.Comment object at 0x103acd940>
    // <conv.chunks.Comment object at 0x103acd9d0>
    // <conv.chunks.Comment object at 0x103acdbb0>
    // <conv.chunks.Comment object at 0x103acdcd0>
    return 0;
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda(Enemy_ID, x);
    cmp(Goomba);
    // <conv.chunks.Comment object at 0x103acddf0>
    // <conv.chunks.Comment object at 0x103acdf40>
    BEQ(LandEnemyInitState);
    cmp(Spiny);
    BNE(InvtD);
    // <conv.chunks.Comment object at 0x103ace180>
    // <conv.chunks.Comment object at 0x103ace210>
    lda(0x1);
    sta(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103ace480>
    lda(0x8);
    sta(Enemy_X_Speed, x);
    // <conv.chunks.Comment object at 0x103ace6c0>
    lda(FrameCounter);
    anda(0b111);
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // <conv.chunks.Comment object at 0x103ace990>
    // <conv.chunks.Comment object at 0x103aceab0>
    // <conv.chunks.Comment object at 0x103acebd0>
    ldy(0x1);
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp(Enemy_MovingDir, x);
    // <conv.chunks.Comment object at 0x103acf170>
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x103acf500>
    lda(Enemy_State, x);
    anda(0b10000000);
    // <conv.chunks.Comment object at 0x103acf740>
    BNE(NMovShellFallBit);
    lda(0x0);
    sta(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103acf950>
    // <conv.chunks.Comment object at 0x103acf9e0>
    return 0;
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda(Enemy_State, x);
    anda(0b10111111);
    // <conv.chunks.Comment object at 0x103acfc80>
    // <conv.chunks.Comment object at 0x103acfdd0>
    sta(Enemy_State, x);
    return 0;
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x103ad4140>
    cmp(RedKoopa);
    BNE(Chk2MSBSt);
    // <conv.chunks.Comment object at 0x103ad4380>
    lda(Enemy_State, x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // <conv.chunks.Comment object at 0x103ad45c0>
    // <conv.chunks.Comment object at 0x103ad46e0>
    lda(Enemy_State, x);
    tay();
    asl();
    BCC(GetSteFromD);
    // <conv.chunks.Comment object at 0x103ad4920>
    // <conv.chunks.Comment object at 0x103ad49b0>
    lda(Enemy_State, x);
    ora(0b1000000);
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // <conv.chunks.Comment object at 0x103ad4c20>
    // <conv.chunks.Comment object at 0x103ad4d40>
    // <conv.chunks.Comment object at 0x103ad4e60>
    lda(offsetof(G, EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // <conv.chunks.Comment object at 0x103ad4fe0>
    sta(Enemy_State, x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda(Enemy_Y_Position, x);
    cmp(0x20);
    // <conv.chunks.Comment object at 0x103ad5220>
    // <conv.chunks.Comment object at 0x103ad5370>
    BCC(ExESdeC);
    ldy(0x16);
    lda(0x2);
    sta(0xeb);
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // <conv.chunks.Comment object at 0x103ad55b0>
    // <conv.chunks.Comment object at 0x103ad5640>
    // <conv.chunks.Comment object at 0x103ad5820>
    // <conv.chunks.Comment object at 0x103ad58b0>
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
    // <conv.chunks.Comment object at 0x103ad5a00>
    // <conv.chunks.Comment object at 0x103ad5bb0>
    // <conv.chunks.Comment object at 0x103ad5cd0>
    // <conv.chunks.Comment object at 0x103ad5d60>
    // <conv.chunks.Comment object at 0x103ad5f10>
    // <conv.chunks.Comment object at 0x103ad6030>
    // <conv.chunks.Comment object at 0x103ad6150>
    // <conv.chunks.Comment object at 0x103ad6270>
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
    // <conv.chunks.Comment object at 0x103ad67b0>
    // <conv.chunks.Comment object at 0x103ad6840>
    // <conv.chunks.Comment object at 0x103ad6a20>
    // <conv.chunks.Comment object at 0x103ad6ba0>
    BCC(NoBump);
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    JMP(NoBump);
}

int NoBump() {
    // <conv.chunks.Comment object at 0x103ad6d50>
    // <conv.chunks.Comment object at 0x103ad6e70>
    // <conv.chunks.Comment object at 0x103ad6f90>
    lda(Enemy_ID, x);
    cmp(0x5);
    BNE(InvEnemyDir);
    // <conv.chunks.Comment object at 0x103ad71a0>
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
    // <conv.chunks.Comment object at 0x103ad7800>
    // <conv.chunks.Comment object at 0x103ad7980>
    // <conv.chunks.Comment object at 0x103ad79e0>
    // <conv.chunks.Comment object at 0x103ad7b60>
    // <conv.chunks.Comment object at 0x103ad7bf0>
    // <conv.chunks.Comment object at 0x103ad7d40>
    lda(Enemy_PageLoc, x);
    sbc(Player_PageLoc);
    // <conv.chunks.Comment object at 0x103ad7f50>
    return 0;
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // <conv.chunks.Comment object at 0x103ae01a0>
    lda(Enemy_Y_Position, x);
    anda(0b11110000);
    ora(0b1000);
    sta(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103ae03e0>
    // <conv.chunks.Comment object at 0x103ae0500>
    // <conv.chunks.Comment object at 0x103ae0620>
    return 0;
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda(Enemy_Y_Position, x);
    clc();
    // <conv.chunks.Comment object at 0x103ae0830>
    // <conv.chunks.Comment object at 0x103ae09b0>
    adc(0x3e);
    cmp(0x44);
    return 0;
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // <conv.chunks.Comment object at 0x103ae0d40>
    // <conv.chunks.Comment object at 0x103ae0e60>
    lda(Enemy_Y_Speed, x);
    clc();
    // <conv.chunks.Comment object at 0x103ae1100>
    adc(0x2);
    cmp(0x3);
    // <conv.chunks.Comment object at 0x103ae11f0>
    BCC(DoSide);
    JSR(ChkUnderEnemy);
    BEQ(DoSide);
    JSR(ChkForNonSolids);
    BEQ(DoSide);
    JSR(EnemyLanding);
    // <conv.chunks.Comment object at 0x103ae14c0>
    // <conv.chunks.Comment object at 0x103ae15e0>
    // <conv.chunks.Comment object at 0x103ae1730>
    // <conv.chunks.Comment object at 0x103ae1850>
    // <conv.chunks.Comment object at 0x103ae19a0>
    lda(0xfd);
    sta(Enemy_Y_Speed, x);
    JMP(DoSide);
}

int DoSide() {
    // <conv.chunks.Comment object at 0x103ae1b20>
    // <conv.chunks.Comment object at 0x103ae1d00>
    JMP(DoEnemySideCheck);
    JMP(HammerBroBGColl);
}

int HammerBroBGColl() {
    JSR(ChkUnderEnemy);
    // <conv.chunks.Comment object at 0x103ae1ee0>
    BEQ(NoUnderHammerBro);
    cmp(0x23);
    // <conv.chunks.Comment object at 0x103ae20f0>
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(0xfc);
    // <conv.chunks.Comment object at 0x103ae2330>
    // <conv.chunks.Comment object at 0x103ae2450>
    sta(Enemy_Y_Speed, x);
    return 0;
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda(EnemyFrameTimer, x);
    BNE(NoUnderHammerBro);
    // <conv.chunks.Comment object at 0x103ae2750>
    // <conv.chunks.Comment object at 0x103ae28a0>
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
    // <conv.chunks.Comment object at 0x103ae2fc0>
    // <conv.chunks.Comment object at 0x103ae3110>
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
    // <conv.chunks.Comment object at 0x103ae37a0>
    BEQ(NSFnd);
    cmp(0xc2);
    // <conv.chunks.Comment object at 0x103ae39e0>
    BEQ(NSFnd);
    cmp(0xc3);
    // <conv.chunks.Comment object at 0x103ae3c20>
    BEQ(NSFnd);
    cmp(0x5f);
    // <conv.chunks.Comment object at 0x103ae3e60>
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
    // <conv.chunks.Comment object at 0x103aec350>
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
    // <conv.chunks.Comment object at 0x103aec500>
    // <conv.chunks.Comment object at 0x103aec6b0>
    // <conv.chunks.Comment object at 0x103aec7d0>
    // <conv.chunks.Comment object at 0x103aec8f0>
    // <conv.chunks.Comment object at 0x103aeca10>
    // <conv.chunks.Comment object at 0x103aecb30>
    // <conv.chunks.Comment object at 0x103aecc80>
    // <conv.chunks.Comment object at 0x103aecda0>
    // <conv.chunks.Comment object at 0x103aecef0>
    lda(0xfd);
    sta(Fireball_Y_Speed, x);
    // <conv.chunks.Comment object at 0x103aed070>
    lda(0x1);
    sta(FireballBouncingFlag, x);
    // <conv.chunks.Comment object at 0x103aed2b0>
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
    // <conv.chunks.Comment object at 0x103aedd00>
    lda(Sfx_Bump);
    sta(Square1SoundQueue);
    return 0;
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x103aee3f0>
    // <conv.chunks.Comment object at 0x103aeff50>
    adc(0x7);
    tax();
    ldy(0x2);
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // <conv.chunks.Comment object at 0x103af4470>
    // <conv.chunks.Comment object at 0x103af4530>
    adc(0x9);
    tax();
    ldy(0x6);
    JMP(FBallB);
}

int FBallB() {
    // <conv.chunks.Comment object at 0x103af4740>
    // <conv.chunks.Comment object at 0x103af47d0>
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(GetEnemyBoundBox);
}

int GetEnemyBoundBox() {
    ldy(0x48);
    // <conv.chunks.Comment object at 0x103af4b30>
    sty(0x0);
    ldy(0x44);
    // <conv.chunks.Comment object at 0x103af4bc0>
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(0x8);
    // <conv.chunks.Comment object at 0x103af4f80>
    sty(0x0);
    ldy(0x4);
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda(Enemy_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x103af52e0>
    // <conv.chunks.Comment object at 0x103af5460>
    sbc(ScreenLeft_X_Pos);
    sta(0x1);
    lda(Enemy_PageLoc, x);
    sbc(ScreenLeft_PageLoc);
    BMI(CMBits);
    // <conv.chunks.Comment object at 0x103af5610>
    // <conv.chunks.Comment object at 0x103af56a0>
    // <conv.chunks.Comment object at 0x103af5850>
    // <conv.chunks.Comment object at 0x103af5970>
    ora(0x1);
    BEQ(CMBits);
    ldy(0x0);
    JMP(CMBits);
}

int CMBits() {
    // <conv.chunks.Comment object at 0x103af5ac0>
    // <conv.chunks.Comment object at 0x103af5d30>
    // <conv.chunks.Comment object at 0x103af5dc0>
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
    // <conv.chunks.Comment object at 0x103af6960>
    // <conv.chunks.Comment object at 0x103af6a20>
    adc(0x1);
    tax();
    ldy(0x1);
    JSR(BoundingBoxCore);
    JMP(CheckRightScreenBBox);
    JMP(MoveBoundBoxOffscreen);
}

int MoveBoundBoxOffscreen() {
    txa();
    // <conv.chunks.Comment object at 0x103af6ff0>
    asl();
    asl();
    tay();
    // <conv.chunks.Comment object at 0x103af71d0>
    lda(0xff);
    sta(EnemyBoundingBoxCoord, y);
    // <conv.chunks.Comment object at 0x103af72c0>
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
    // <conv.chunks.Comment object at 0x103af7b30>
    // <conv.chunks.Comment object at 0x103af7bc0>
    // <conv.chunks.Comment object at 0x103af7da0>
    lda(SprObject_Rel_XPos, y);
    sta(0x1);
    txa();
    // <conv.chunks.Comment object at 0x103b00080>
    asl();
    asl();
    pha();
    tay();
    lda(SprObj_BoundBoxCtrl, x);
    asl();
    // <conv.chunks.Comment object at 0x103b00380>
    // <conv.chunks.Comment object at 0x103b00410>
    // <conv.chunks.Comment object at 0x103b00590>
    asl();
    tax();
    lda(0x1);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    sta(BoundingBox_UL_Corner, y);
    // <conv.chunks.Comment object at 0x103b00770>
    // <conv.chunks.Comment object at 0x103b00740>
    // <conv.chunks.Comment object at 0x103b00920>
    // <conv.chunks.Comment object at 0x103b00a70>
    lda(0x1);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    inx();
    // <conv.chunks.Comment object at 0x103b00d40>
    // <conv.chunks.Comment object at 0x103b00f50>
    // <conv.chunks.Comment object at 0x103b010d0>
    iny();
    lda(0x2);
    clc();
    adc(offsetof(G, BoundBoxCtrlData), x);
    // <conv.chunks.Comment object at 0x103b01220>
    // <conv.chunks.Comment object at 0x103b011f0>
    // <conv.chunks.Comment object at 0x103b013d0>
    sta(BoundingBox_UL_Corner, y);
    lda(0x2);
    clc();
    adc(((offsetof(G, BoundBoxCtrlData)) + (2)), x);
    sta(BoundingBox_LR_Corner, y);
    pla();
    tay();
    ldx(0x0);
    // <conv.chunks.Comment object at 0x103b017c0>
    // <conv.chunks.Comment object at 0x103b019d0>
    // <conv.chunks.Comment object at 0x103b01b50>
    // <conv.chunks.Comment object at 0x103b01c10>
    // <conv.chunks.Comment object at 0x103b01cd0>
    return 0;
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda(ScreenLeft_X_Pos);
    clc();
    // <conv.chunks.Comment object at 0x103b01e80>
    // <conv.chunks.Comment object at 0x103b01fd0>
    adc(0x80);
    sta(0x2);
    lda(ScreenLeft_PageLoc);
    adc(0x0);
    // <conv.chunks.Comment object at 0x103b020c0>
    // <conv.chunks.Comment object at 0x103b02360>
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
    // <conv.chunks.Comment object at 0x103b023f0>
    // <conv.chunks.Comment object at 0x103b026f0>
    // <conv.chunks.Comment object at 0x103b02780>
    // <conv.chunks.Comment object at 0x103b02960>
    // <conv.chunks.Comment object at 0x103b029f0>
    // <conv.chunks.Comment object at 0x103b02b70>
    // <conv.chunks.Comment object at 0x103b02cc0>
    // <conv.chunks.Comment object at 0x103b02e10>
    // <conv.chunks.Comment object at 0x103b02ea0>
    // <conv.chunks.Comment object at 0x103b03080>
    // <conv.chunks.Comment object at 0x103b031d0>
    // <conv.chunks.Comment object at 0x103b03320>
    sta(BoundingBox_DR_XPos, y);
    JMP(NoOfs);
}

int NoOfs() {
    // <conv.chunks.Comment object at 0x103b034d0>
    ldx(ObjectOffset);
    return 0;
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda(BoundingBox_UL_XPos, y);
    BPL(NoOfs2);
    cmp(0xa0);
    BCC(NoOfs2);
    // <conv.chunks.Comment object at 0x103b03710>
    // <conv.chunks.Comment object at 0x103b03860>
    // <conv.chunks.Comment object at 0x103b039b0>
    // <conv.chunks.Comment object at 0x103b03a40>
    lda(0x0);
    ldx(BoundingBox_DR_XPos, y);
    BPL(SOLft);
    sta(BoundingBox_DR_XPos, y);
    JMP(SOLft);
}

int SOLft() {
    // <conv.chunks.Comment object at 0x103b03c80>
    // <conv.chunks.Comment object at 0x103b03e60>
    // <conv.chunks.Comment object at 0x103b03fb0>
    // <conv.chunks.Comment object at 0x103b08140>
    sta(BoundingBox_UL_XPos, y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // <conv.chunks.Comment object at 0x103b082f0>
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
    // <conv.chunks.Comment object at 0x103b08740>
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
    // <conv.chunks.Comment object at 0x103b09a00>
    // <conv.chunks.Comment object at 0x103b09b50>
    // <conv.chunks.Comment object at 0x103b09ca0>
    // <conv.chunks.Comment object at 0x103b09dc0>
    // <conv.chunks.Comment object at 0x103b09f10>
    // <conv.chunks.Comment object at 0x103b0a060>
    // <conv.chunks.Comment object at 0x103b0a1b0>
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
    // <conv.chunks.Comment object at 0x103b0a360>
    // <conv.chunks.Comment object at 0x103b0a4b0>
    // <conv.chunks.Comment object at 0x103b0a5d0>
    // <conv.chunks.Comment object at 0x103b0a720>
    // <conv.chunks.Comment object at 0x103b0a840>
    // <conv.chunks.Comment object at 0x103b0a960>
    // <conv.chunks.Comment object at 0x103b0aab0>
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
    // <conv.chunks.Comment object at 0x103b0b3b0>
    // <conv.chunks.Comment object at 0x103b0b470>
    // <conv.chunks.Comment object at 0x103b0b530>
    // <conv.chunks.Comment object at 0x103b0b5c0>
    // <conv.chunks.Comment object at 0x103b0b770>
    // <conv.chunks.Comment object at 0x103b0b830>
    return 0;
    JMP(BlockBufferChk_Enemy);
}

int BlockBufferChk_Enemy() {
    pha();
    // <conv.chunks.Comment object at 0x103b0b9e0>
    // <conv.chunks.Comment object at 0x103b0ba40>
    // <conv.chunks.Comment object at 0x103b0baa0>
    // <conv.chunks.Comment object at 0x103b0bb30>
    txa();
    clc();
    // <conv.chunks.Comment object at 0x103b0bc80>
    adc(0x1);
    tax();
    pla();
    // <conv.chunks.Comment object at 0x103b0bec0>
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(0xd);
    // <conv.chunks.Comment object at 0x103b101a0>
    // <conv.chunks.Comment object at 0x103b10230>
    tax();
    ldy(0x1b);
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(0x1a);
    // <conv.chunks.Comment object at 0x103b10680>
    txa();
    clc();
    adc(0x7);
    // <conv.chunks.Comment object at 0x103b108c0>
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // <conv.chunks.Comment object at 0x103b10a70>
    lda(0x0);
    JMP(BBChk_E);
}

int BBChk_E() {
    // <conv.chunks.Comment object at 0x103b10b60>
    JSR(BlockBufferCollision);
    ldx(ObjectOffset);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x103b10d70>
    // <conv.chunks.Comment object at 0x103b10e90>
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
    // <conv.chunks.Comment object at 0x103b137d0>
    // <conv.chunks.Comment object at 0x103b13890>
    // <conv.chunks.Comment object at 0x103b13920>
    // <conv.chunks.Comment object at 0x103b13b00>
    adc(SprObject_X_Position, x);
    sta(0x5);
    // <conv.chunks.Comment object at 0x103b13ce0>
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
    // <conv.chunks.Comment object at 0x103b13ef0>
    // <conv.chunks.Comment object at 0x103b13f80>
    // <conv.chunks.Comment object at 0x103b181a0>
    // <conv.chunks.Comment object at 0x103b18260>
    // <conv.chunks.Comment object at 0x103b18230>
    // <conv.chunks.Comment object at 0x103b18440>
    // <conv.chunks.Comment object at 0x103b18500>
    // <conv.chunks.Comment object at 0x103b185c0>
    // <conv.chunks.Comment object at 0x103b18650>
    // <conv.chunks.Comment object at 0x103b187a0>
    // <conv.chunks.Comment object at 0x103b18830>
    clc();
    adc(offsetof(G, BlockBuffer_Y_Adder), y);
    anda(0b11110000);
    // <conv.chunks.Comment object at 0x103b18a70>
    // <conv.chunks.Comment object at 0x103b18bc0>
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
    // <conv.chunks.Comment object at 0x103b18d70>
    // <conv.chunks.Comment object at 0x103b18ec0>
    // <conv.chunks.Comment object at 0x103b18e00>
    // <conv.chunks.Comment object at 0x103b19070>
    // <conv.chunks.Comment object at 0x103b19220>
    // <conv.chunks.Comment object at 0x103b190d0>
    // <conv.chunks.Comment object at 0x103b192b0>
    // <conv.chunks.Comment object at 0x103b194f0>
    // <conv.chunks.Comment object at 0x103b19640>
    // <conv.chunks.Comment object at 0x103b19790>
    // <conv.chunks.Comment object at 0x103b198e0>
    lda(SprObject_X_Position, x);
    JMP(RetYC);
}

int RetYC() {
    // <conv.chunks.Comment object at 0x103b19a90>
    anda(0b1111);
    sta(0x4);
    lda(0x3);
    return 0;
    JMP(DrawVine);
}

int DrawVine() {
    sty(0x0);
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x103b1a0c0>
    // <conv.chunks.Comment object at 0x103b1a2d0>
    clc();
    adc(offsetof(G, VineYPosAdder), y);
    ldx(VineObjOffset, y);
    ldy(Enemy_SprDataOffset, x);
    sty(0x2);
    JSR(SixSpriteStacker);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x103b1a4e0>
    // <conv.chunks.Comment object at 0x103b1a630>
    // <conv.chunks.Comment object at 0x103b1a780>
    // <conv.chunks.Comment object at 0x103b1a900>
    // <conv.chunks.Comment object at 0x103b1a990>
    // <conv.chunks.Comment object at 0x103b1ab10>
    // <conv.chunks.Comment object at 0x103b1ac30>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x103b1b1d0>
    // <conv.chunks.Comment object at 0x103b1b260>
    // <conv.chunks.Comment object at 0x103b1b500>
    sta(((Sprite_X_Position) + (20)), y);
    lda(0b100001);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103b1b8f0>
    // <conv.chunks.Comment object at 0x103b1ba10>
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x103b1bf20>
    // <conv.chunks.Comment object at 0x103b28080>
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    ldx(0x5);
    JMP(VineTL);
}

int VineTL() {
    // <conv.chunks.Comment object at 0x103b28650>
    // <conv.chunks.Comment object at 0x103b286e0>
    lda(0xe1);
    sta(Sprite_Tilenumber, y);
    iny();
    // <conv.chunks.Comment object at 0x103b28a40>
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(0x2);
    lda(0x0);
    BNE(SkpVTop);
    // <conv.chunks.Comment object at 0x103b28cb0>
    // <conv.chunks.Comment object at 0x103b28d40>
    // <conv.chunks.Comment object at 0x103b28ec0>
    // <conv.chunks.Comment object at 0x103b28e90>
    // <conv.chunks.Comment object at 0x103b29070>
    lda(0xe0);
    sta(Sprite_Tilenumber, y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // <conv.chunks.Comment object at 0x103b29280>
    // <conv.chunks.Comment object at 0x103b29460>
    ldx(0x0);
    JMP(ChkFTop);
}

int ChkFTop() {
    // <conv.chunks.Comment object at 0x103b29550>
    lda(VineStart_Y_Position);
    sec();
    sbc(Sprite_Y_Position, y);
    cmp(0x64);
    BCC(NextVSp);
    // <conv.chunks.Comment object at 0x103b297f0>
    // <conv.chunks.Comment object at 0x103b29940>
    // <conv.chunks.Comment object at 0x103b299d0>
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    JMP(NextVSp);
}

int NextVSp() {
    // <conv.chunks.Comment object at 0x103b29c10>
    // <conv.chunks.Comment object at 0x103b29df0>
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(0x6);
    // <conv.chunks.Comment object at 0x103b2a0f0>
    // <conv.chunks.Comment object at 0x103b2a180>
    BNE(ChkFTop);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x103b2a3f0>
    return 0;
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(0x6);
    JMP(StkLp);
}

int StkLp() {
    // <conv.chunks.Comment object at 0x103b2a5a0>
    // <conv.chunks.Comment object at 0x103b2a630>
    sta(Sprite_Data, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x103b2a900>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x103b2aae0>
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(0x2);
    // <conv.chunks.Comment object at 0x103b2acc0>
    // <conv.chunks.Comment object at 0x103b2ad50>
    // <conv.chunks.Comment object at 0x103b2aed0>
    return 0;
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy(Misc_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x103b2bb60>
    lda(TimerControl);
    BNE(ForceHPose);
    lda(Misc_State, x);
    anda(0b1111111);
    cmp(0x1);
    BEQ(GetHPose);
    JMP(ForceHPose);
}

int ForceHPose() {
    // <conv.chunks.Comment object at 0x103b30440>
    // <conv.chunks.Comment object at 0x103b30560>
    // <conv.chunks.Comment object at 0x103b306b0>
    // <conv.chunks.Comment object at 0x103b307d0>
    // <conv.chunks.Comment object at 0x103b30860>
    // <conv.chunks.Comment object at 0x103b30a10>
    ldx(0x0);
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // <conv.chunks.Comment object at 0x103b30ad0>
    // <conv.chunks.Comment object at 0x103b30cb0>
    lda(FrameCounter);
    lsr();
    // <conv.chunks.Comment object at 0x103b30e30>
    lsr();
    anda(0b11);
    tax();
    JMP(RenderH);
}

int RenderH() {
    // <conv.chunks.Comment object at 0x103b30f50>
    // <conv.chunks.Comment object at 0x103b310a0>
    // <conv.chunks.Comment object at 0x103b31130>
    lda(Misc_Rel_YPos);
    clc();
    adc(offsetof(G, FirstSprYPos), x);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x103b31340>
    // <conv.chunks.Comment object at 0x103b31490>
    clc();
    adc(offsetof(G, SecondSprYPos), x);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x103b31670>
    // <conv.chunks.Comment object at 0x103b317c0>
    // <conv.chunks.Comment object at 0x103b319d0>
    clc();
    adc(offsetof(G, FirstSprXPos), x);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x103b31b80>
    // <conv.chunks.Comment object at 0x103b31cd0>
    clc();
    adc(offsetof(G, SecondSprXPos), x);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103b31eb0>
    // <conv.chunks.Comment object at 0x103b32000>
    lda(offsetof(G, FirstSprTilenum), x);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x103b32330>
    lda(offsetof(G, SecondSprTilenum), x);
    sta(((Sprite_Tilenumber) + (4)), y);
    // <conv.chunks.Comment object at 0x103b325a0>
    lda(offsetof(G, HammerSprAttrib), x);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103b328d0>
    // <conv.chunks.Comment object at 0x103b32a20>
    // <conv.chunks.Comment object at 0x103b32c30>
    lda(Misc_OffscreenBits);
    anda(0b11111100);
    BEQ(NoHOffscr);
    // <conv.chunks.Comment object at 0x103b32e40>
    // <conv.chunks.Comment object at 0x103b32f60>
    lda(0x0);
    sta(Misc_State, x);
    // <conv.chunks.Comment object at 0x103b330e0>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // <conv.chunks.Comment object at 0x103b33320>
    // <conv.chunks.Comment object at 0x103b33500>
    return 0;
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy(Enemy_SprDataOffset, x);
    lda(Enemy_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x103b33740>
    // <conv.chunks.Comment object at 0x103b33e60>
    // <conv.chunks.Comment object at 0x103b33f80>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103b401a0>
    // <conv.chunks.Comment object at 0x103b40230>
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
    // <conv.chunks.Comment object at 0x103b40740>
    // <conv.chunks.Comment object at 0x103b40890>
    // <conv.chunks.Comment object at 0x103b40920>
    // <conv.chunks.Comment object at 0x103b40ad0>
    // <conv.chunks.Comment object at 0x103b40bf0>
    // <conv.chunks.Comment object at 0x103b40c80>
    // <conv.chunks.Comment object at 0x103b40f20>
    // <conv.chunks.Comment object at 0x103b41070>
    lda(0x1);
    sta(0x3);
    sta(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103b41280>
    // <conv.chunks.Comment object at 0x103b411c0>
    // <conv.chunks.Comment object at 0x103b41430>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (8)), y);
    lda(0x7e);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (8)), y);
    // <conv.chunks.Comment object at 0x103b41a00>
    // <conv.chunks.Comment object at 0x103b41be0>
    lda(0x7f);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(FlagpoleCollisionYPos);
    BEQ(ChkFlagOffscreen);
    // <conv.chunks.Comment object at 0x103b41e50>
    // <conv.chunks.Comment object at 0x103b420f0>
    // <conv.chunks.Comment object at 0x103b42210>
    tya();
    clc();
    // <conv.chunks.Comment object at 0x103b423f0>
    adc(0xc);
    tay();
    lda(FlagpoleScore);
    asl();
    // <conv.chunks.Comment object at 0x103b425a0>
    // <conv.chunks.Comment object at 0x103b42630>
    // <conv.chunks.Comment object at 0x103b42780>
    tax();
    lda(offsetof(G, FlagpoleScoreNumTiles), x);
    // <conv.chunks.Comment object at 0x103b428a0>
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
    // <conv.chunks.Comment object at 0x103b43e30>
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
    // <conv.chunks.Comment object at 0x103b4c2c0>
    // <conv.chunks.Comment object at 0x103b4c440>
    // <conv.chunks.Comment object at 0x103b4c410>
    // <conv.chunks.Comment object at 0x103b4c620>
    iny();
    lda(Enemy_Rel_XPos);
    JSR(SixSpriteStacker);
    // <conv.chunks.Comment object at 0x103b4c740>
    // <conv.chunks.Comment object at 0x103b4c860>
    ldx(ObjectOffset);
    lda(Enemy_Y_Position, x);
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x103b4ca70>
    // <conv.chunks.Comment object at 0x103b4cbc0>
    ldy(AreaType);
    cpy(0x3);
    // <conv.chunks.Comment object at 0x103b4cdd0>
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
    // <conv.chunks.Comment object at 0x103b4d3a0>
    // <conv.chunks.Comment object at 0x103b4d4f0>
    // <conv.chunks.Comment object at 0x103b4d700>
    // <conv.chunks.Comment object at 0x103b4d910>
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
    // <conv.chunks.Comment object at 0x103b4dd90>
    // <conv.chunks.Comment object at 0x103b4dee0>
    // <conv.chunks.Comment object at 0x103b4df70>
    // <conv.chunks.Comment object at 0x103b4e090>
    // <conv.chunks.Comment object at 0x103b4e1e0>
    // <conv.chunks.Comment object at 0x103b4e270>
    // <conv.chunks.Comment object at 0x103b4e3c0>
    // <conv.chunks.Comment object at 0x103b4e450>
    dex();
    ldy(Enemy_SprDataOffset, x);
    asl();
    pha();
    // <conv.chunks.Comment object at 0x103b4e600>
    // <conv.chunks.Comment object at 0x103b4e780>
    // <conv.chunks.Comment object at 0x103b4e840>
    BCC(SChk2);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103b4e9f0>
    sta(Sprite_Y_Position, y);
    JMP(SChk2);
}

int SChk2() {
    // <conv.chunks.Comment object at 0x103b4ec30>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x103b4ed80>
    // <conv.chunks.Comment object at 0x103b4ee40>
    BCC(SChk3);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103b4eff0>
    sta(((Sprite_Y_Position) + (4)), y);
    JMP(SChk3);
}

int SChk3() {
    // <conv.chunks.Comment object at 0x103b4f2f0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x103b4f440>
    // <conv.chunks.Comment object at 0x103b4f500>
    BCC(SChk4);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103b4f6b0>
    sta(((Sprite_Y_Position) + (8)), y);
    JMP(SChk4);
}

int SChk4() {
    // <conv.chunks.Comment object at 0x103b4f9b0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x103b4fb00>
    // <conv.chunks.Comment object at 0x103b4fbc0>
    BCC(SChk5);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103b4fd70>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SChk5);
}

int SChk5() {
    // <conv.chunks.Comment object at 0x103b540b0>
    pla();
    asl();
    pha();
    // <conv.chunks.Comment object at 0x103b54200>
    // <conv.chunks.Comment object at 0x103b542c0>
    BCC(SChk6);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103b54470>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SChk6);
}

int SChk6() {
    // <conv.chunks.Comment object at 0x103b54770>
    pla();
    asl();
    BCC(SLChk);
    // <conv.chunks.Comment object at 0x103b548c0>
    // <conv.chunks.Comment object at 0x103b54950>
    lda(0xf8);
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(SLChk);
}

int SLChk() {
    // <conv.chunks.Comment object at 0x103b54b00>
    // <conv.chunks.Comment object at 0x103b54da0>
    lda(Enemy_OffscreenBits);
    asl();
    // <conv.chunks.Comment object at 0x103b54f50>
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
    // <conv.chunks.Comment object at 0x103b55370>
    // <conv.chunks.Comment object at 0x103b554c0>
    // <conv.chunks.Comment object at 0x103b55550>
    // <conv.chunks.Comment object at 0x103b55670>
    // <conv.chunks.Comment object at 0x103b557c0>
    lda(Misc_Y_Position, x);
    JSR(DumpTwoSpr);
    lda(Misc_Rel_XPos);
    sta(Sprite_X_Position, y);
    // <conv.chunks.Comment object at 0x103b55940>
    // <conv.chunks.Comment object at 0x103b55a60>
    // <conv.chunks.Comment object at 0x103b55b80>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103b55d60>
    // <conv.chunks.Comment object at 0x103b55df0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103b560f0>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0xf7);
    sta(Sprite_Tilenumber, y);
    lda(0xfb);
    // <conv.chunks.Comment object at 0x103b56510>
    // <conv.chunks.Comment object at 0x103b566f0>
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
    // <conv.chunks.Comment object at 0x103b56bd0>
    // <conv.chunks.Comment object at 0x103b56f30>
    // <conv.chunks.Comment object at 0x103b57080>
    // <conv.chunks.Comment object at 0x103b57110>
    // <conv.chunks.Comment object at 0x103b572c0>
    // <conv.chunks.Comment object at 0x103b57410>
    clc();
    adc(0x8);
    sta(((Sprite_Y_Position) + (4)), y);
    lda(Misc_Rel_XPos);
    // <conv.chunks.Comment object at 0x103b575f0>
    // <conv.chunks.Comment object at 0x103b57680>
    // <conv.chunks.Comment object at 0x103b57920>
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
    // <conv.chunks.Comment object at 0x103b57b60>
    // <conv.chunks.Comment object at 0x103b57d70>
    // <conv.chunks.Comment object at 0x103b57ec0>
    // <conv.chunks.Comment object at 0x103b57f50>
    // <conv.chunks.Comment object at 0x103b5c0e0>
    // <conv.chunks.Comment object at 0x103b5c170>
    // <conv.chunks.Comment object at 0x103b5c2f0>
    // <conv.chunks.Comment object at 0x103b5c380>
    // <conv.chunks.Comment object at 0x103b5c4d0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103b5c5c0>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    ldx(ObjectOffset);
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // <conv.chunks.Comment object at 0x103b5c800>
    // <conv.chunks.Comment object at 0x103b5caa0>
    // <conv.chunks.Comment object at 0x103b5cbf0>
    return 0;
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy(((Enemy_SprDataOffset) + (5)));
    lda(Enemy_Rel_YPos);
    // <conv.chunks.Comment object at 0x103b5d4f0>
    // <conv.chunks.Comment object at 0x103b5dd30>
    clc();
    adc(0x8);
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    ldx(PowerUpType);
    lda(offsetof(G, PowerUpAttributes), x);
    ora(((Enemy_SprAttrib) + (5)));
    sta(0x4);
    // <conv.chunks.Comment object at 0x103b5dee0>
    // <conv.chunks.Comment object at 0x103b5e030>
    // <conv.chunks.Comment object at 0x103b5e0c0>
    // <conv.chunks.Comment object at 0x103b5e270>
    // <conv.chunks.Comment object at 0x103b5e300>
    // <conv.chunks.Comment object at 0x103b5e480>
    // <conv.chunks.Comment object at 0x103b5e5d0>
    // <conv.chunks.Comment object at 0x103b5e7e0>
    txa();
    pha();
    // <conv.chunks.Comment object at 0x103b5e990>
    asl();
    asl();
    tax();
    // <conv.chunks.Comment object at 0x103b5eae0>
    // <conv.chunks.Comment object at 0x103b5eba0>
    lda(0x1);
    sta(0x7);
    sta(0x3);
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda(offsetof(G, PowerUpGfxTable), x);
    // <conv.chunks.Comment object at 0x103b5ede0>
    sta(0x0);
    lda(((offsetof(G, PowerUpGfxTable)) + (1)), x);
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BPL(PUpDrawLoop);
    ldy(((Enemy_SprDataOffset) + (5)));
    pla();
    BEQ(PUpOfs);
    // <conv.chunks.Comment object at 0x103b5f0e0>
    // <conv.chunks.Comment object at 0x103b5f3e0>
    // <conv.chunks.Comment object at 0x103b5f530>
    // <conv.chunks.Comment object at 0x103b5f5c0>
    // <conv.chunks.Comment object at 0x103b5f740>
    // <conv.chunks.Comment object at 0x103b5f950>
    // <conv.chunks.Comment object at 0x103b5f9e0>
    cmp(0x3);
    BEQ(PUpOfs);
    sta(0x0);
    lda(FrameCounter);
    lsr();
    anda(0b11);
    ora(((Enemy_SprAttrib) + (5)));
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x103b5fb90>
    // <conv.chunks.Comment object at 0x103b5fda0>
    // <conv.chunks.Comment object at 0x103b5fe30>
    // <conv.chunks.Comment object at 0x103b5ffe0>
    // <conv.chunks.Comment object at 0x103b680b0>
    // <conv.chunks.Comment object at 0x103b681d0>
    // <conv.chunks.Comment object at 0x103b683b0>
    // <conv.chunks.Comment object at 0x103b68500>
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
    // <conv.chunks.Comment object at 0x103b69010>
    sta(((Sprite_Attributes) + (4)), y);
    lda(((Sprite_Attributes) + (12)), y);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    JMP(PUpOfs);
}

int PUpOfs() {
    // <conv.chunks.Comment object at 0x103b694f0>
    // <conv.chunks.Comment object at 0x103b69610>
    // <conv.chunks.Comment object at 0x103b69820>
    JMP(SprObjectOffscrChk);
    JMP(EnemyGfxHandler);
}

int EnemyGfxHandler() {
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103b7bad0>
    sta(0x2);
    lda(Enemy_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x103b81e20>
    // <conv.chunks.Comment object at 0x103b82060>
    ldy(Enemy_SprDataOffset, x);
    sty(0xeb);
    // <conv.chunks.Comment object at 0x103b822a0>
    lda(0x0);
    sta(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x103b823f0>
    lda(Enemy_MovingDir, x);
    sta(0x3);
    // <conv.chunks.Comment object at 0x103b826f0>
    lda(Enemy_SprAttrib, x);
    sta(0x4);
    // <conv.chunks.Comment object at 0x103b82930>
    lda(Enemy_ID, x);
    cmp(PiranhaPlant);
    BNE(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x103b82b40>
    // <conv.chunks.Comment object at 0x103b82c60>
    ldy(PiranhaPlant_Y_Speed, x);
    BMI(CheckForRetainerObj);
    // <conv.chunks.Comment object at 0x103b82ea0>
    ldy(EnemyFrameTimer, x);
    BEQ(CheckForRetainerObj);
    return 0;
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda(Enemy_State, x);
    // <conv.chunks.Comment object at 0x103b832f0>
    sta(0xed);
    anda(0b11111);
    // <conv.chunks.Comment object at 0x103b83440>
    tay();
    lda(Enemy_ID, x);
    // <conv.chunks.Comment object at 0x103b836e0>
    cmp(RetainerObject);
    BNE(CheckForBulletBillCV);
    ldy(0x0);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103b83920>
    // <conv.chunks.Comment object at 0x103b83a40>
    // <conv.chunks.Comment object at 0x103b83ad0>
    sta(0x3);
    lda(0x15);
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp(BulletBill_CannonVar);
    BNE(CheckForJumpspring);
    dec(0x2);
    // <conv.chunks.Comment object at 0x103b83ec0>
    // <conv.chunks.Comment object at 0x103b83fe0>
    // <conv.chunks.Comment object at 0x103b8c170>
    lda(0x3);
    ldy(EnemyFrameTimer, x);
    BEQ(SBBAt);
    ora(0b100000);
    JMP(SBBAt);
}

int SBBAt() {
    // <conv.chunks.Comment object at 0x103b8c2c0>
    // <conv.chunks.Comment object at 0x103b8c4a0>
    // <conv.chunks.Comment object at 0x103b8c5f0>
    // <conv.chunks.Comment object at 0x103b8c710>
    sta(0x4);
    ldy(0x0);
    sty(0xed);
    lda(0x8);
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp(JumpspringObject);
    // <conv.chunks.Comment object at 0x103b8cc20>
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
    // <conv.chunks.Comment object at 0x103b8d220>
    // <conv.chunks.Comment object at 0x103b8d1f0>
    // <conv.chunks.Comment object at 0x103b8d3d0>
    // <conv.chunks.Comment object at 0x103b8d550>
    // <conv.chunks.Comment object at 0x103b8d5e0>
    // <conv.chunks.Comment object at 0x103b8d790>
    BMI(CheckBowserGfxFlag);
    inc(VerticalFlipFlag);
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x103b8db20>
    BEQ(CheckForGoomba);
    ldy(0x16);
    // <conv.chunks.Comment object at 0x103b8dd30>
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
    // <conv.chunks.Comment object at 0x103b8e270>
    cpy(Goomba);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x103b8e0f0>
    lda(Enemy_State, x);
    cmp(0x2);
    BCC(GmbaAnim);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x103b8e6c0>
    // <conv.chunks.Comment object at 0x103b8e750>
    // <conv.chunks.Comment object at 0x103b8e900>
    stx(0xec);
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // <conv.chunks.Comment object at 0x103b8e990>
    anda(0b100000);
    ora(TimerControl);
    BNE(CheckBowserFront);
    // <conv.chunks.Comment object at 0x103b8ec60>
    // <conv.chunks.Comment object at 0x103b8ed80>
    lda(FrameCounter);
    anda(0b1000);
    // <conv.chunks.Comment object at 0x103b8ef90>
    BNE(CheckBowserFront);
    lda(0x3);
    eor(0b11);
    sta(0x3);
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda(offsetof(G, EnemyAttributeData), y);
    ora(0x4);
    // <conv.chunks.Comment object at 0x103b8f3b0>
    // <conv.chunks.Comment object at 0x103b8f680>
    sta(0x4);
    lda(offsetof(G, EnemyGfxTableOffsets), y);
    tax();
    ldy(0xec);
    // <conv.chunks.Comment object at 0x103b8f710>
    // <conv.chunks.Comment object at 0x103b8f9e0>
    // <conv.chunks.Comment object at 0x103b8faa0>
    lda(BowserGfxFlag);
    BEQ(CheckForSpiny);
    // <conv.chunks.Comment object at 0x103b8fc80>
    cmp(0x1);
    BNE(CheckBowserRear);
    lda(BowserBodyControls);
    BPL(ChkFrontSte);
    ldx(0xde);
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // <conv.chunks.Comment object at 0x103b8fe00>
    // <conv.chunks.Comment object at 0x103b8ffb0>
    // <conv.chunks.Comment object at 0x103b98110>
    // <conv.chunks.Comment object at 0x103b98230>
    // <conv.chunks.Comment object at 0x103b982c0>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x103b98440>
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
    // <conv.chunks.Comment object at 0x103b98980>
    anda(0x1);
    BEQ(ChkRearSte);
    ldx(0xe4);
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // <conv.chunks.Comment object at 0x103b98b00>
    // <conv.chunks.Comment object at 0x103b98cb0>
    // <conv.chunks.Comment object at 0x103b98d40>
    lda(0xed);
    anda(0b100000);
    // <conv.chunks.Comment object at 0x103b98ec0>
    BEQ(DrawBowser);
    lda(0x2);
    sec();
    // <conv.chunks.Comment object at 0x103b99160>
    // <conv.chunks.Comment object at 0x103b99130>
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
    // <conv.chunks.Comment object at 0x103b99640>
    // <conv.chunks.Comment object at 0x103b996d0>
    // <conv.chunks.Comment object at 0x103b99880>
    // <conv.chunks.Comment object at 0x103b99910>
    // <conv.chunks.Comment object at 0x103b99af0>
    lda(0x2);
    sta(0x3);
    // <conv.chunks.Comment object at 0x103b99d30>
    lda(0x5);
    sta(0xec);
    JMP(NotEgg);
}

int NotEgg() {
    // <conv.chunks.Comment object at 0x103b99f40>
    // <conv.chunks.Comment object at 0x103b99fd0>
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(0x90);
    BNE(CheckUpsideDownShell);
    // <conv.chunks.Comment object at 0x103b9a1e0>
    // <conv.chunks.Comment object at 0x103b9a270>
    lda(0xed);
    anda(0b100000);
    BNE(NoLAFr);
    // <conv.chunks.Comment object at 0x103b9a420>
    // <conv.chunks.Comment object at 0x103b9a630>
    lda(FrenzyEnemyTimer);
    cmp(0x10);
    BCS(NoLAFr);
    ldx(0x96);
    JMP(NoLAFr);
}

int NoLAFr() {
    // <conv.chunks.Comment object at 0x103b9a870>
    // <conv.chunks.Comment object at 0x103b9a900>
    // <conv.chunks.Comment object at 0x103b9aae0>
    // <conv.chunks.Comment object at 0x103b9ab70>
    JMP(CheckDefeatedState);
    JMP(CheckUpsideDownShell);
}

int CheckUpsideDownShell() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x103b9ade0>
    cmp(0x4);
    BCS(CheckRightSideUpShell);
    // <conv.chunks.Comment object at 0x103b9af30>
    cpy(0x2);
    BCC(CheckRightSideUpShell);
    ldx(0x5a);
    // <conv.chunks.Comment object at 0x103b9b140>
    // <conv.chunks.Comment object at 0x103b9b2f0>
    ldy(0xef);
    cpy(BuzzyBeetle);
    // <conv.chunks.Comment object at 0x103b9b380>
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
    // <conv.chunks.Comment object at 0x103b9b9b0>
    // <conv.chunks.Comment object at 0x103b9ba40>
    // <conv.chunks.Comment object at 0x103b9bb30>
    // <conv.chunks.Comment object at 0x103b9bce0>
    // <conv.chunks.Comment object at 0x103b9be30>
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
    // <conv.chunks.Comment object at 0x103ba0f80>
    cmp(HammerBro);
    BNE(CheckForBloober);
    // <conv.chunks.Comment object at 0x103ba1160>
    lda(0xed);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x103ba1280>
    anda(0b1000);
    BEQ(CheckDefeatedState);
    ldx(0xb4);
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(0x48);
    BEQ(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x103ba1910>
    // <conv.chunks.Comment object at 0x103ba19a0>
    lda(EnemyIntervalTimer, y);
    cmp(0x5);
    BCS(CheckDefeatedState);
    cpx(0x3c);
    BNE(CheckToAnimateEnemy);
    // <conv.chunks.Comment object at 0x103ba1cd0>
    // <conv.chunks.Comment object at 0x103ba1e80>
    // <conv.chunks.Comment object at 0x103ba1f10>
    cmp(0x1);
    BEQ(CheckDefeatedState);
    inc(0x2);
    // <conv.chunks.Comment object at 0x103ba2120>
    // <conv.chunks.Comment object at 0x103ba2300>
    inc(0x2);
    inc(0x2);
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x103ba2750>
    cmp(Goomba);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x103ba2720>
    cmp(0x8);
    BEQ(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x103ba2ae0>
    cmp(Podoboo);
    BEQ(CheckDefeatedState);
    cmp(0x18);
    // <conv.chunks.Comment object at 0x103ba2db0>
    // <conv.chunks.Comment object at 0x103ba2ed0>
    BCS(CheckDefeatedState);
    ldy(0x0);
    cmp(0x15);
    BNE(CheckForSecondFrame);
    iny();
    lda(WorldNumber);
    // <conv.chunks.Comment object at 0x103ba3140>
    // <conv.chunks.Comment object at 0x103ba3260>
    // <conv.chunks.Comment object at 0x103ba3440>
    // <conv.chunks.Comment object at 0x103ba34d0>
    cmp(World8);
    BCS(CheckDefeatedState);
    ldx(0xa2);
    lda(0x3);
    // <conv.chunks.Comment object at 0x103ba3620>
    // <conv.chunks.Comment object at 0x103ba3830>
    // <conv.chunks.Comment object at 0x103ba38c0>
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
    // <conv.chunks.Comment object at 0x103ba80e0>
    // <conv.chunks.Comment object at 0x103ba8170>
    ora(TimerControl);
    BNE(CheckDefeatedState);
    // <conv.chunks.Comment object at 0x103ba83e0>
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
    // <conv.chunks.Comment object at 0x103ba8860>
    // <conv.chunks.Comment object at 0x103ba88f0>
    // <conv.chunks.Comment object at 0x103ba8a70>
    lda(0xef);
    cmp(0x4);
    BCC(DrawEnemyObject);
    // <conv.chunks.Comment object at 0x103ba8b90>
    // <conv.chunks.Comment object at 0x103ba8d10>
    ldy(0x1);
    sty(VerticalFlipFlag);
    // <conv.chunks.Comment object at 0x103ba8f20>
    dey();
    sty(0xec);
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(0xeb);
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // <conv.chunks.Comment object at 0x103ba92e0>
    // <conv.chunks.Comment object at 0x103ba9370>
    // <conv.chunks.Comment object at 0x103ba94f0>
    JSR(DrawEnemyObjRow);
    ldx(ObjectOffset);
    ldy(Enemy_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x103ba9700>
    // <conv.chunks.Comment object at 0x103ba9820>
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
    // <conv.chunks.Comment object at 0x103ba9e20>
    // <conv.chunks.Comment object at 0x103ba9f40>
    // <conv.chunks.Comment object at 0x103baa060>
    // <conv.chunks.Comment object at 0x103baa1b0>
    iny();
    iny();
    JSR(DumpSixSpr);
    // <conv.chunks.Comment object at 0x103baa390>
    // <conv.chunks.Comment object at 0x103baa420>
    dey();
    dey();
    // <conv.chunks.Comment object at 0x103baa600>
    tya();
    tax();
    // <conv.chunks.Comment object at 0x103baa750>
    lda(0xef);
    cmp(HammerBro);
    // <conv.chunks.Comment object at 0x103baa7e0>
    BEQ(FlipEnemyVertically);
    cmp(Lakitu);
    BEQ(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x103baaae0>
    // <conv.chunks.Comment object at 0x103baab40>
    cmp(0x15);
    BCS(FlipEnemyVertically);
    // <conv.chunks.Comment object at 0x103baadb0>
    txa();
    clc();
    adc(0x8);
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda(Sprite_Tilenumber, x);
    pha();
    // <conv.chunks.Comment object at 0x103bab290>
    // <conv.chunks.Comment object at 0x103bab410>
    lda(((Sprite_Tilenumber) + (4)), x);
    pha();
    lda(((Sprite_Tilenumber) + (16)), y);
    sta(Sprite_Tilenumber, x);
    // <conv.chunks.Comment object at 0x103bab710>
    // <conv.chunks.Comment object at 0x103bab920>
    lda(((Sprite_Tilenumber) + (20)), y);
    sta(((Sprite_Tilenumber) + (4)), x);
    pla();
    sta(((Sprite_Tilenumber) + (20)), y);
    // <conv.chunks.Comment object at 0x103babe60>
    // <conv.chunks.Comment object at 0x103babef0>
    pla();
    sta(((Sprite_Tilenumber) + (16)), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda(BowserGfxFlag);
    BNE(SkipToOffScrChk);
    // <conv.chunks.Comment object at 0x103bb43e0>
    // <conv.chunks.Comment object at 0x103bb4500>
    lda(0xef);
    ldx(0xec);
    cmp(0x5);
    // <conv.chunks.Comment object at 0x103bb46b0>
    // <conv.chunks.Comment object at 0x103bb47d0>
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // <conv.chunks.Comment object at 0x103bb4a70>
    // <conv.chunks.Comment object at 0x103bb4b90>
    cmp(Bloober);
    BEQ(MirrorEnemyGfx);
    cmp(PiranhaPlant);
    // <conv.chunks.Comment object at 0x103bb4e30>
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
    // <conv.chunks.Comment object at 0x103bb5040>
    // <conv.chunks.Comment object at 0x103bb5190>
    // <conv.chunks.Comment object at 0x103bb52b0>
    // <conv.chunks.Comment object at 0x103bb5340>
    // <conv.chunks.Comment object at 0x103bb5550>
    // <conv.chunks.Comment object at 0x103bb55e0>
    // <conv.chunks.Comment object at 0x103bb5790>
    cmp(0x15);
    BNE(SpnySC);
    lda(0x42);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SpnySC);
}

int SpnySC() {
    // <conv.chunks.Comment object at 0x103bb5a30>
    // <conv.chunks.Comment object at 0x103bb5ac0>
    // <conv.chunks.Comment object at 0x103bb5d60>
    cpx(0x2);
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda(BowserGfxFlag);
    // <conv.chunks.Comment object at 0x103bb6000>
    BNE(CheckToMirrorLakitu);
    lda(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103bb6210>
    anda(0b10100011);
    sta(Sprite_Attributes, y);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x103bb6450>
    // <conv.chunks.Comment object at 0x103bb65a0>
    sta(((Sprite_Attributes) + (16)), y);
    ora(0b1000000);
    cpx(0x5);
    BNE(EggExc);
    ora(0b10000000);
    JMP(EggExc);
}

int EggExc() {
    // <conv.chunks.Comment object at 0x103bb6990>
    // <conv.chunks.Comment object at 0x103bb6ab0>
    // <conv.chunks.Comment object at 0x103bb6b40>
    // <conv.chunks.Comment object at 0x103bb6d20>
    // <conv.chunks.Comment object at 0x103bb6e40>
    sta(((Sprite_Attributes) + (4)), y);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x103bb70b0>
    sta(((Sprite_Attributes) + (20)), y);
    cpx(0x4);
    BNE(CheckToMirrorLakitu);
    lda(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x103bb74a0>
    // <conv.chunks.Comment object at 0x103bb7530>
    // <conv.chunks.Comment object at 0x103bb76e0>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x103bb79e0>
    // <conv.chunks.Comment object at 0x103bb7bf0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(0xef);
    // <conv.chunks.Comment object at 0x103bbc3b0>
    cmp(Lakitu);
    BNE(CheckToMirrorJSpring);
    // <conv.chunks.Comment object at 0x103bbc380>
    lda(VerticalFlipFlag);
    BNE(NVFLak);
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b10000001);
    // <conv.chunks.Comment object at 0x103bbc7d0>
    // <conv.chunks.Comment object at 0x103bbc920>
    // <conv.chunks.Comment object at 0x103bbcb30>
    sta(((Sprite_Attributes) + (16)), y);
    lda(((Sprite_Attributes) + (20)), y);
    ora(0b1000001);
    // <conv.chunks.Comment object at 0x103bbce30>
    // <conv.chunks.Comment object at 0x103bbd040>
    sta(((Sprite_Attributes) + (20)), y);
    ldx(FrenzyEnemyTimer);
    // <conv.chunks.Comment object at 0x103bbd340>
    cpx(0x10);
    BCS(SprObjectOffscrChk);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x103bbd4c0>
    // <conv.chunks.Comment object at 0x103bbd670>
    anda(0b10000001);
    sta(((Sprite_Attributes) + (8)), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // <conv.chunks.Comment object at 0x103bbd970>
    // <conv.chunks.Comment object at 0x103bbdb80>
    // <conv.chunks.Comment object at 0x103bbdca0>
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
    // <conv.chunks.Comment object at 0x103bbe630>
    cmp(0x18);
    BCC(SprObjectOffscrChk);
    // <conv.chunks.Comment object at 0x103bbe780>
    lda(0x82);
    sta(((Sprite_Attributes) + (8)), y);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x103bbe990>
    // <conv.chunks.Comment object at 0x103bbec30>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (12)), y);
    sta(((Sprite_Attributes) + (20)), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx(ObjectOffset);
    lda(Enemy_OffscreenBits);
    // <conv.chunks.Comment object at 0x103bbf380>
    // <conv.chunks.Comment object at 0x103bbf4a0>
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
    // <conv.chunks.Comment object at 0x103bbf680>
    // <conv.chunks.Comment object at 0x103bbf740>
    // <conv.chunks.Comment object at 0x103bbf800>
    // <conv.chunks.Comment object at 0x103bbf890>
    // <conv.chunks.Comment object at 0x103bbf9e0>
    // <conv.chunks.Comment object at 0x103bbfa70>
    // <conv.chunks.Comment object at 0x103bbfc20>
    pla();
    lsr();
    pha();
    BCC(Row3C);
    lda(0x0);
    JSR(MoveESprColOffscreen);
    JMP(Row3C);
}

int Row3C() {
    // <conv.chunks.Comment object at 0x103bbfd70>
    // <conv.chunks.Comment object at 0x103bbfe30>
    // <conv.chunks.Comment object at 0x103bbfec0>
    // <conv.chunks.Comment object at 0x103bc4050>
    // <conv.chunks.Comment object at 0x103bc40e0>
    // <conv.chunks.Comment object at 0x103bc4290>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x103bc43e0>
    lsr();
    pha();
    BCC(Row23C);
    lda(0x10);
    JSR(MoveESprRowOffscreen);
    JMP(Row23C);
}

int Row23C() {
    // <conv.chunks.Comment object at 0x103bc4530>
    // <conv.chunks.Comment object at 0x103bc45c0>
    // <conv.chunks.Comment object at 0x103bc4710>
    // <conv.chunks.Comment object at 0x103bc47a0>
    // <conv.chunks.Comment object at 0x103bc4950>
    pla();
    lsr();
    pha();
    // <conv.chunks.Comment object at 0x103bc4aa0>
    // <conv.chunks.Comment object at 0x103bc4b60>
    BCC(AllRowC);
    lda(0x8);
    JSR(MoveESprRowOffscreen);
    JMP(AllRowC);
}

int AllRowC() {
    // <conv.chunks.Comment object at 0x103bc4d10>
    // <conv.chunks.Comment object at 0x103bc4da0>
    // <conv.chunks.Comment object at 0x103bc4f50>
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x103bc50a0>
    BCC(ExEGHandler);
    JSR(MoveESprRowOffscreen);
    // <conv.chunks.Comment object at 0x103bc5220>
    lda(Enemy_ID, x);
    cmp(Podoboo);
    BEQ(ExEGHandler);
    lda(Enemy_Y_HighPos, x);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x103bc5460>
    // <conv.chunks.Comment object at 0x103bc55b0>
    // <conv.chunks.Comment object at 0x103bc56d0>
    // <conv.chunks.Comment object at 0x103bc5820>
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
    // <conv.chunks.Comment object at 0x103bc5c40>
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
    // <conv.chunks.Comment object at 0x103bc6300>
    adc(Enemy_SprDataOffset, x);
    tay();
    // <conv.chunks.Comment object at 0x103bc64e0>
    lda(0xf8);
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // <conv.chunks.Comment object at 0x103bc67e0>
    adc(Enemy_SprDataOffset, x);
    tay();
    JSR(MoveColOffscreen);
    sta(((Sprite_Data) + (16)), y);
    // <conv.chunks.Comment object at 0x103bc69c0>
    // <conv.chunks.Comment object at 0x103bc6a50>
    // <conv.chunks.Comment object at 0x103bc6b70>
    return 0;
    JMP(DrawBlock);
}

int DrawBlock() {
    lda(Block_Rel_YPos);
    sta(0x2);
    lda(Block_Rel_XPos);
    sta(0x5);
    // <conv.chunks.Comment object at 0x103bc6ff0>
    // <conv.chunks.Comment object at 0x103bc7350>
    // <conv.chunks.Comment object at 0x103bc73e0>
    // <conv.chunks.Comment object at 0x103bc7590>
    lda(0x3);
    sta(0x4);
    // <conv.chunks.Comment object at 0x103bc77a0>
    lsr();
    sta(0x3);
    ldy(Block_SprDataOffset, x);
    ldx(0x0);
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // <conv.chunks.Comment object at 0x103bc7950>
    // <conv.chunks.Comment object at 0x103bc79e0>
    // <conv.chunks.Comment object at 0x103bc7b90>
    // <conv.chunks.Comment object at 0x103bc7c20>
    lda(offsetof(G, DefaultBlockObjTiles), x);
    sta(0x0);
    lda(((offsetof(G, DefaultBlockObjTiles)) + (1)), x);
    JSR(DrawOneSpriteRow);
    cpx(0x4);
    BNE(DBlkLoop);
    ldx(ObjectOffset);
    ldy(Block_SprDataOffset, x);
    // <conv.chunks.Comment object at 0x103bc7e60>
    // <conv.chunks.Comment object at 0x103bc7ef0>
    // <conv.chunks.Comment object at 0x103bd81a0>
    // <conv.chunks.Comment object at 0x103bd82c0>
    // <conv.chunks.Comment object at 0x103bd8350>
    // <conv.chunks.Comment object at 0x103bd8500>
    // <conv.chunks.Comment object at 0x103bd8620>
    lda(AreaType);
    cmp(0x1);
    BEQ(ChkRep);
    // <conv.chunks.Comment object at 0x103bd8860>
    // <conv.chunks.Comment object at 0x103bd88f0>
    lda(0x86);
    sta(Sprite_Tilenumber, y);
    sta(((Sprite_Tilenumber) + (4)), y);
    JMP(ChkRep);
}

int ChkRep() {
    // <conv.chunks.Comment object at 0x103bd8b30>
    // <conv.chunks.Comment object at 0x103bd8d10>
    // <conv.chunks.Comment object at 0x103bd8f20>
    lda(Block_Metatile, x);
    cmp(0xc4);
    BNE(BlkOffscr);
    lda(0x87);
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(0x3);
    // <conv.chunks.Comment object at 0x103bd90d0>
    // <conv.chunks.Comment object at 0x103bd9160>
    // <conv.chunks.Comment object at 0x103bd9310>
    // <conv.chunks.Comment object at 0x103bd9460>
    // <conv.chunks.Comment object at 0x103bd94f0>
    // <conv.chunks.Comment object at 0x103bd9640>
    // <conv.chunks.Comment object at 0x103bd96d0>
    ldx(AreaType);
    dex();
    BEQ(SetBFlip);
    lsr();
    JMP(SetBFlip);
}

int SetBFlip() {
    // <conv.chunks.Comment object at 0x103bd9910>
    // <conv.chunks.Comment object at 0x103bd99a0>
    // <conv.chunks.Comment object at 0x103bd9af0>
    // <conv.chunks.Comment object at 0x103bd9b80>
    ldx(ObjectOffset);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103bd9cd0>
    ora(0b1000000);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x103bd9f10>
    ora(0b10000000);
    sta(((Sprite_Attributes) + (12)), y);
    // <conv.chunks.Comment object at 0x103bda210>
    anda(0b10000011);
    sta(((Sprite_Attributes) + (8)), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // <conv.chunks.Comment object at 0x103bda510>
    // <conv.chunks.Comment object at 0x103bda720>
    lda(Block_OffscreenBits);
    pha();
    anda(0b100);
    BEQ(PullOfsB);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103bda8a0>
    // <conv.chunks.Comment object at 0x103bda930>
    // <conv.chunks.Comment object at 0x103bdaa50>
    // <conv.chunks.Comment object at 0x103bdab70>
    // <conv.chunks.Comment object at 0x103bdac00>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // <conv.chunks.Comment object at 0x103bdb080>
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // <conv.chunks.Comment object at 0x103bdb170>
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
    // <conv.chunks.Comment object at 0x103bdb9e0>
    // <conv.chunks.Comment object at 0x103bdba40>
    sta(0x0);
    lda(0x75);
    // <conv.chunks.Comment object at 0x103bdbad0>
    ldy(GameEngineSubroutine);
    cpy(0x5);
    BEQ(DChunks);
    lda(0x3);
    // <conv.chunks.Comment object at 0x103bdbe60>
    // <conv.chunks.Comment object at 0x103bdbef0>
    // <conv.chunks.Comment object at 0x103be4110>
    sta(0x0);
    lda(0x84);
    JMP(DChunks);
}

int DChunks() {
    // <conv.chunks.Comment object at 0x103be41a0>
    // <conv.chunks.Comment object at 0x103be43b0>
    ldy(Block_SprDataOffset, x);
    iny();
    JSR(DumpFourSpr);
    lda(FrameCounter);
    // <conv.chunks.Comment object at 0x103be4620>
    // <conv.chunks.Comment object at 0x103be46b0>
    // <conv.chunks.Comment object at 0x103be47d0>
    asl();
    asl();
    asl();
    // <conv.chunks.Comment object at 0x103be4a40>
    asl();
    anda(0xc0);
    ora(0x0);
    iny();
    JSR(DumpFourSpr);
    // <conv.chunks.Comment object at 0x103be4b60>
    // <conv.chunks.Comment object at 0x103be4cb0>
    // <conv.chunks.Comment object at 0x103be4bf0>
    // <conv.chunks.Comment object at 0x103be4e60>
    dey();
    dey();
    lda(Block_Rel_YPos);
    JSR(DumpTwoSpr);
    lda(Block_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Block_Orig_XPos, x);
    // <conv.chunks.Comment object at 0x103be5040>
    // <conv.chunks.Comment object at 0x103be50d0>
    // <conv.chunks.Comment object at 0x103be51f0>
    // <conv.chunks.Comment object at 0x103be5310>
    // <conv.chunks.Comment object at 0x103be5430>
    // <conv.chunks.Comment object at 0x103be5580>
    sec();
    sbc(ScreenLeft_X_Pos);
    sta(0x0);
    // <conv.chunks.Comment object at 0x103be5760>
    // <conv.chunks.Comment object at 0x103be58b0>
    sec();
    sbc(Block_Rel_XPos);
    adc(0x0);
    adc(0x6);
    sta(((Sprite_X_Position) + (4)), y);
    lda(((Block_Rel_YPos) + (1)));
    // <conv.chunks.Comment object at 0x103be5a30>
    // <conv.chunks.Comment object at 0x103be5b80>
    // <conv.chunks.Comment object at 0x103be5c10>
    // <conv.chunks.Comment object at 0x103be5d00>
    // <conv.chunks.Comment object at 0x103be5fa0>
    sta(((Sprite_Y_Position) + (8)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(((Block_Rel_XPos) + (1)));
    sta(((Sprite_X_Position) + (8)), y);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103be6360>
    // <conv.chunks.Comment object at 0x103be6570>
    // <conv.chunks.Comment object at 0x103be6750>
    // <conv.chunks.Comment object at 0x103be6990>
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
    // <conv.chunks.Comment object at 0x103be6b10>
    // <conv.chunks.Comment object at 0x103be6d20>
    // <conv.chunks.Comment object at 0x103be6db0>
    // <conv.chunks.Comment object at 0x103be6ea0>
    // <conv.chunks.Comment object at 0x103be7140>
    // <conv.chunks.Comment object at 0x103be7260>
    // <conv.chunks.Comment object at 0x103be7380>
    // <conv.chunks.Comment object at 0x103be74d0>
    // <conv.chunks.Comment object at 0x103be7560>
    lda(0xf8);
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // <conv.chunks.Comment object at 0x103be7710>
    // <conv.chunks.Comment object at 0x103be78c0>
    lda(0x0);
    BPL(ExBCDr);
    lda(Sprite_X_Position, y);
    cmp(((Sprite_X_Position) + (4)), y);
    BCC(ExBCDr);
    lda(0xf8);
    // <conv.chunks.Comment object at 0x103be79e0>
    // <conv.chunks.Comment object at 0x103be7b90>
    // <conv.chunks.Comment object at 0x103be7ce0>
    // <conv.chunks.Comment object at 0x103be7ef0>
    // <conv.chunks.Comment object at 0x103bec080>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // <conv.chunks.Comment object at 0x103bec590>
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
    // <conv.chunks.Comment object at 0x103becd70>
    // <conv.chunks.Comment object at 0x103becec0>
    lsr();
    pha();
    anda(0x1);
    eor(0x64);
    sta(Sprite_Tilenumber, y);
    pla();
    lsr();
    // <conv.chunks.Comment object at 0x103bed010>
    // <conv.chunks.Comment object at 0x103bed0a0>
    // <conv.chunks.Comment object at 0x103bed130>
    // <conv.chunks.Comment object at 0x103bed250>
    // <conv.chunks.Comment object at 0x103bed460>
    // <conv.chunks.Comment object at 0x103bed520>
    lsr();
    lda(0x2);
    BCC(FireA);
    ora(0b11000000);
    JMP(FireA);
}

int FireA() {
    // <conv.chunks.Comment object at 0x103bed640>
    // <conv.chunks.Comment object at 0x103bed6d0>
    // <conv.chunks.Comment object at 0x103bed8b0>
    // <conv.chunks.Comment object at 0x103bed9d0>
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
    // <conv.chunks.Comment object at 0x103bee6c0>
    // <conv.chunks.Comment object at 0x103bee750>
    // <conv.chunks.Comment object at 0x103bee8d0>
    // <conv.chunks.Comment object at 0x103bee960>
    // <conv.chunks.Comment object at 0x103beeab0>
    // <conv.chunks.Comment object at 0x103beeb40>
    // <conv.chunks.Comment object at 0x103beec60>
    // <conv.chunks.Comment object at 0x103beedb0>
    // <conv.chunks.Comment object at 0x103beee40>
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (8)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x103bef290>
    // <conv.chunks.Comment object at 0x103bef320>
    sta(((Sprite_Y_Position) + (4)), y);
    sta(((Sprite_Y_Position) + (12)), y);
    lda(Fireball_Rel_XPos);
    sec();
    sbc(0x4);
    // <conv.chunks.Comment object at 0x103bef800>
    // <conv.chunks.Comment object at 0x103bef950>
    // <conv.chunks.Comment object at 0x103bef9e0>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (4)), y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x103befe30>
    // <conv.chunks.Comment object at 0x103befec0>
    sta(((Sprite_X_Position) + (8)), y);
    sta(((Sprite_X_Position) + (12)), y);
    lda(0x2);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103bf83e0>
    // <conv.chunks.Comment object at 0x103bf8470>
    lda(0x82);
    sta(((Sprite_Attributes) + (4)), y);
    // <conv.chunks.Comment object at 0x103bf86b0>
    lda(0x42);
    sta(((Sprite_Attributes) + (8)), y);
    // <conv.chunks.Comment object at 0x103bf89b0>
    lda(0xc2);
    sta(((Sprite_Attributes) + (12)), y);
    return 0;
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x103bf9040>
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
    // <conv.chunks.Comment object at 0x103bf9370>
    // <conv.chunks.Comment object at 0x103bf94c0>
    // <conv.chunks.Comment object at 0x103bf9610>
    // <conv.chunks.Comment object at 0x103bf96a0>
    // <conv.chunks.Comment object at 0x103bf97f0>
    // <conv.chunks.Comment object at 0x103bf9880>
    // <conv.chunks.Comment object at 0x103bf9910>
    // <conv.chunks.Comment object at 0x103bf9af0>
    dey();
    lda(Enemy_Rel_XPos);
    // <conv.chunks.Comment object at 0x103bf9c10>
    sta(Sprite_X_Position, y);
    sta(((Sprite_X_Position) + (12)), y);
    // <conv.chunks.Comment object at 0x103bf9e50>
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103bfa0f0>
    // <conv.chunks.Comment object at 0x103bfa180>
    sta(((Sprite_X_Position) + (16)), y);
    clc();
    adc(0x8);
    sta(((Sprite_X_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x103bfa690>
    // <conv.chunks.Comment object at 0x103bfa720>
    sta(((Sprite_X_Position) + (20)), y);
    lda(Enemy_Y_Position, x);
    // <conv.chunks.Comment object at 0x103bfaba0>
    tax();
    pha();
    cpx(0x20);
    BCS(TopSP);
    lda(0xf8);
    JMP(TopSP);
}

int TopSP() {
    // <conv.chunks.Comment object at 0x103bfadb0>
    // <conv.chunks.Comment object at 0x103bfae40>
    // <conv.chunks.Comment object at 0x103bfaed0>
    // <conv.chunks.Comment object at 0x103bfb0b0>
    // <conv.chunks.Comment object at 0x103bfb140>
    JSR(DumpThreeSpr);
    pla();
    // <conv.chunks.Comment object at 0x103bfb380>
    clc();
    adc(0x80);
    // <conv.chunks.Comment object at 0x103bfb4a0>
    tax();
    cpx(0x20);
    BCS(BotSP);
    lda(0xf8);
    JMP(BotSP);
}

int BotSP() {
    // <conv.chunks.Comment object at 0x103bfb650>
    // <conv.chunks.Comment object at 0x103bfb6e0>
    // <conv.chunks.Comment object at 0x103bfb8c0>
    // <conv.chunks.Comment object at 0x103bfb950>
    sta(((Sprite_Y_Position) + (12)), y);
    sta(((Sprite_Y_Position) + (16)), y);
    // <conv.chunks.Comment object at 0x103bfbc50>
    sta(((Sprite_Y_Position) + (20)), y);
    lda(Enemy_OffscreenBits);
    pha();
    anda(0b1000);
    // <conv.chunks.Comment object at 0x103c04080>
    // <conv.chunks.Comment object at 0x103c041d0>
    // <conv.chunks.Comment object at 0x103c04260>
    BEQ(SOfs);
    lda(0xf8);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x103c044a0>
    // <conv.chunks.Comment object at 0x103c04530>
    sta(((Sprite_Y_Position) + (12)), y);
    JMP(SOfs);
}

int SOfs() {
    // <conv.chunks.Comment object at 0x103c048f0>
    pla();
    pha();
    anda(0b100);
    // <conv.chunks.Comment object at 0x103c04aa0>
    BEQ(SOfs2);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103c04ce0>
    // <conv.chunks.Comment object at 0x103c04d70>
    sta(((Sprite_Y_Position) + (16)), y);
    JMP(SOfs2);
}

int SOfs2() {
    // <conv.chunks.Comment object at 0x103c051f0>
    pla();
    anda(0b10);
    // <conv.chunks.Comment object at 0x103c05310>
    BEQ(ExSPl);
    lda(0xf8);
    sta(((Sprite_Y_Position) + (8)), y);
    // <conv.chunks.Comment object at 0x103c05550>
    // <conv.chunks.Comment object at 0x103c055e0>
    sta(((Sprite_Y_Position) + (20)), y);
    JMP(ExSPl);
}

int ExSPl() {
    // <conv.chunks.Comment object at 0x103c05a60>
    ldx(ObjectOffset);
    return 0;
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy(Player_Y_HighPos);
    dey();
    // <conv.chunks.Comment object at 0x103c05cd0>
    // <conv.chunks.Comment object at 0x103c05e20>
    BNE(ExDBub);
    lda(Bubble_OffscreenBits);
    // <conv.chunks.Comment object at 0x103c05fd0>
    anda(0b1000);
    BNE(ExDBub);
    ldy(Bubble_SprDataOffset, x);
    lda(Bubble_Rel_XPos);
    sta(Sprite_X_Position, y);
    lda(Bubble_Rel_YPos);
    sta(Sprite_Y_Position, y);
    // <conv.chunks.Comment object at 0x103c061e0>
    // <conv.chunks.Comment object at 0x103c06330>
    // <conv.chunks.Comment object at 0x103c06480>
    // <conv.chunks.Comment object at 0x103c065a0>
    // <conv.chunks.Comment object at 0x103c066f0>
    // <conv.chunks.Comment object at 0x103c06810>
    lda(0x74);
    sta(Sprite_Tilenumber, y);
    // <conv.chunks.Comment object at 0x103c069c0>
    lda(0x2);
    sta(Sprite_Attributes, y);
    JMP(ExDBub);
}

int ExDBub() {
    // <conv.chunks.Comment object at 0x103c06c00>
    // <conv.chunks.Comment object at 0x103c06e10>
    return 0;
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda(InjuryTimer);
    BEQ(CntPl);
    // <conv.chunks.Comment object at 0x103c16a20>
    // <conv.chunks.Comment object at 0x103c17920>
    lda(FrameCounter);
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // <conv.chunks.Comment object at 0x103c17b90>
    // <conv.chunks.Comment object at 0x103c17c20>
    // <conv.chunks.Comment object at 0x103c17d70>
    lda(GameEngineSubroutine);
    cmp(0xb);
    // <conv.chunks.Comment object at 0x103c17ef0>
    BEQ(PlayerKilled);
    lda(PlayerChangeSizeFlag);
    BNE(DoChangeSize);
    ldy(SwimmingFlag);
    BEQ(FindPlayerAction);
    // <conv.chunks.Comment object at 0x103c20140>
    // <conv.chunks.Comment object at 0x103c20260>
    // <conv.chunks.Comment object at 0x103c20380>
    // <conv.chunks.Comment object at 0x103c204a0>
    lda(Player_State);
    cmp(0x0);
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // <conv.chunks.Comment object at 0x103c206b0>
    // <conv.chunks.Comment object at 0x103c20740>
    // <conv.chunks.Comment object at 0x103c208f0>
    lda(FrameCounter);
    anda(0b100);
    BNE(ExPGH);
    tax();
    ldy(Player_SprDataOffset);
    lda(PlayerFacingDir);
    // <conv.chunks.Comment object at 0x103c20b00>
    // <conv.chunks.Comment object at 0x103c20c20>
    // <conv.chunks.Comment object at 0x103c20da0>
    // <conv.chunks.Comment object at 0x103c20e30>
    // <conv.chunks.Comment object at 0x103c20f50>
    lsr();
    BCS(SwimKT);
    // <conv.chunks.Comment object at 0x103c21100>
    iny();
    iny();
    // <conv.chunks.Comment object at 0x103c21310>
    iny();
    iny();
    JMP(SwimKT);
}

int SwimKT() {
    // <conv.chunks.Comment object at 0x103c214c0>
    lda(PlayerSize);
    BEQ(BigKTS);
    lda(((Sprite_Tilenumber) + (24)), y);
    cmp(SwimTileRepOffset);
    BEQ(ExPGH);
    inx();
    JMP(BigKTS);
}

int BigKTS() {
    // <conv.chunks.Comment object at 0x103c21640>
    // <conv.chunks.Comment object at 0x103c21790>
    // <conv.chunks.Comment object at 0x103c219a0>
    // <conv.chunks.Comment object at 0x103c21ac0>
    // <conv.chunks.Comment object at 0x103c21c40>
    // <conv.chunks.Comment object at 0x103c21cd0>
    lda(offsetof(G, SwimKickTileNum), x);
    sta(((Sprite_Tilenumber) + (24)), y);
    JMP(ExPGH);
}

int ExPGH() {
    // <conv.chunks.Comment object at 0x103c21e80>
    // <conv.chunks.Comment object at 0x103c22090>
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
    // <conv.chunks.Comment object at 0x103c22960>
    lda(0x4);
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // <conv.chunks.Comment object at 0x103c22ae0>
    // <conv.chunks.Comment object at 0x103c22c90>
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
    // <conv.chunks.Comment object at 0x103c22ea0>
    // <conv.chunks.Comment object at 0x103c22fc0>
    // <conv.chunks.Comment object at 0x103c23050>
    // <conv.chunks.Comment object at 0x103c23200>
    // <conv.chunks.Comment object at 0x103c23320>
    // <conv.chunks.Comment object at 0x103c23440>
    // <conv.chunks.Comment object at 0x103c23560>
    // <conv.chunks.Comment object at 0x103c23680>
    // <conv.chunks.Comment object at 0x103c23710>
    // <conv.chunks.Comment object at 0x103c238f0>
    // <conv.chunks.Comment object at 0x103c23a10>
    lda(Player_X_Speed);
    ora(Left_Right_Buttons);
    BEQ(SUpdR);
    dey();
    JMP(SUpdR);
}

int SUpdR() {
    // <conv.chunks.Comment object at 0x103c23c20>
    // <conv.chunks.Comment object at 0x103c23d40>
    // <conv.chunks.Comment object at 0x103c23ec0>
    // <conv.chunks.Comment object at 0x103c23f50>
    tya();
    JSR(RenderPlayerSub);
    JMP(PlayerOffscreenChk);
}

int PlayerOffscreenChk() {
    lda(Player_OffscreenBits);
    // <conv.chunks.Comment object at 0x103c28200>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x103c283e0>
    lsr();
    lsr();
    sta(0x0);
    ldx(0x3);
    lda(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x103c285c0>
    // <conv.chunks.Comment object at 0x103c28650>
    // <conv.chunks.Comment object at 0x103c28740>
    clc();
    adc(0x18);
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // <conv.chunks.Comment object at 0x103c28980>
    // <conv.chunks.Comment object at 0x103c28ad0>
    // <conv.chunks.Comment object at 0x103c28b60>
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
    // <conv.chunks.Comment object at 0x103c29100>
    // <conv.chunks.Comment object at 0x103c29190>
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
    // <conv.chunks.Comment object at 0x103c296a0>
    // <conv.chunks.Comment object at 0x103c29730>
    lda(offsetof(G, IntermediatePlayerData), x);
    sta(0x2, x);
    // <conv.chunks.Comment object at 0x103c29c70>
    dex();
    BPL(PIntLoop);
    ldx(0xb8);
    ldy(0x4);
    JSR(DrawPlayerLoop);
    lda(((Sprite_Attributes) + (36)));
    ora(0b1000000);
    sta(((Sprite_Attributes) + (32)));
    // <conv.chunks.Comment object at 0x103c29e50>
    // <conv.chunks.Comment object at 0x103c29f70>
    // <conv.chunks.Comment object at 0x103c2a000>
    // <conv.chunks.Comment object at 0x103c2a120>
    // <conv.chunks.Comment object at 0x103c2a2d0>
    // <conv.chunks.Comment object at 0x103c2a4b0>
    // <conv.chunks.Comment object at 0x103c2a5d0>
    return 0;
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(0x7);
    // <conv.chunks.Comment object at 0x103c2a870>
    // <conv.chunks.Comment object at 0x103c2a8d0>
    // <conv.chunks.Comment object at 0x103c2a930>
    // <conv.chunks.Comment object at 0x103c2a990>
    // <conv.chunks.Comment object at 0x103c2aa20>
    lda(Player_Rel_XPos);
    sta(Player_Pos_ForScroll);
    sta(0x5);
    // <conv.chunks.Comment object at 0x103c2ac00>
    // <conv.chunks.Comment object at 0x103c2ad50>
    lda(Player_Rel_YPos);
    sta(0x2);
    // <conv.chunks.Comment object at 0x103c2af60>
    lda(PlayerFacingDir);
    sta(0x3);
    // <conv.chunks.Comment object at 0x103c2b170>
    lda(Player_SprAttrib);
    sta(0x4);
    ldx(PlayerGfxOffset);
    ldy(Player_SprDataOffset);
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda(offsetof(G, PlayerGraphicsTable), x);
    // <conv.chunks.Comment object at 0x103c2b6e0>
    sta(0x0);
    lda(((offsetof(G, PlayerGraphicsTable)) + (1)), x);
    // <conv.chunks.Comment object at 0x103c2b830>
    JSR(DrawOneSpriteRow);
    dec(0x7);
    BNE(DrawPlayerLoop);
    // <conv.chunks.Comment object at 0x103c2bc50>
    // <conv.chunks.Comment object at 0x103c2bce0>
    return 0;
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda(Player_State);
    // <conv.chunks.Comment object at 0x103c2bf20>
    cmp(0x3);
    BEQ(ActionClimbing);
    // <conv.chunks.Comment object at 0x103c340e0>
    cmp(0x2);
    BEQ(ActionFalling);
    // <conv.chunks.Comment object at 0x103c342f0>
    cmp(0x1);
    BNE(ProcOnGroundActs);
    // <conv.chunks.Comment object at 0x103c34500>
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
    // <conv.chunks.Comment object at 0x103c34e90>
    // <conv.chunks.Comment object at 0x103c34f20>
    // <conv.chunks.Comment object at 0x103c350d0>
    // <conv.chunks.Comment object at 0x103c351f0>
    // <conv.chunks.Comment object at 0x103c35280>
    // <conv.chunks.Comment object at 0x103c35430>
    // <conv.chunks.Comment object at 0x103c35550>
    // <conv.chunks.Comment object at 0x103c35670>
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
    // <conv.chunks.Comment object at 0x103c35df0>
    lda(0x0);
    sta(PlayerAnimCtrl);
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    // <conv.chunks.Comment object at 0x103c35f70>
    // <conv.chunks.Comment object at 0x103c36120>
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
    // <conv.chunks.Comment object at 0x103c37020>
    JSR(GetGfxOffsetAdder);
    lda(JumpSwimTimer);
    ora(PlayerAnimCtrl);
    BNE(FourFrameExtent);
    // <conv.chunks.Comment object at 0x103c37230>
    // <conv.chunks.Comment object at 0x103c37350>
    // <conv.chunks.Comment object at 0x103c37470>
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
    // <conv.chunks.Comment object at 0x103c37ef0>
    // <conv.chunks.Comment object at 0x103c37f80>
    // <conv.chunks.Comment object at 0x103c40170>
    // <conv.chunks.Comment object at 0x103c40200>
    // <conv.chunks.Comment object at 0x103c40320>
    // <conv.chunks.Comment object at 0x103c40470>
    // <conv.chunks.Comment object at 0x103c40590>
    lda(PlayerAnimCtrl);
    clc();
    // <conv.chunks.Comment object at 0x103c407d0>
    adc(0x1);
    cmp(0x0);
    BCC(SetAnimC);
    lda(0x0);
    JMP(SetAnimC);
}

int SetAnimC() {
    // <conv.chunks.Comment object at 0x103c40980>
    // <conv.chunks.Comment object at 0x103c40a10>
    // <conv.chunks.Comment object at 0x103c40b90>
    // <conv.chunks.Comment object at 0x103c40c20>
    sta(PlayerAnimCtrl);
    JMP(ExAnimC);
}

int ExAnimC() {
    // <conv.chunks.Comment object at 0x103c40e00>
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
    // <conv.chunks.Comment object at 0x103c40fe0>
    // <conv.chunks.Comment object at 0x103c41100>
    // <conv.chunks.Comment object at 0x103c41280>
    // <conv.chunks.Comment object at 0x103c41340>
    // <conv.chunks.Comment object at 0x103c413d0>
    tay();
    JMP(SzOfs);
}

int SzOfs() {
    // <conv.chunks.Comment object at 0x103c415b0>
    return 0;
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy(PlayerAnimCtrl);
    // <conv.chunks.Comment object at 0x103c41790>
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
    // <conv.chunks.Comment object at 0x103c42480>
    // <conv.chunks.Comment object at 0x103c425a0>
    // <conv.chunks.Comment object at 0x103c42720>
    // <conv.chunks.Comment object at 0x103c427b0>
    // <conv.chunks.Comment object at 0x103c42840>
    // <conv.chunks.Comment object at 0x103c42a20>
    // <conv.chunks.Comment object at 0x103c42ab0>
    // <conv.chunks.Comment object at 0x103c42c60>
    sty(PlayerAnimCtrl);
    JMP(GorSLog);
}

int GorSLog() {
    // <conv.chunks.Comment object at 0x103c42de0>
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
    // <conv.chunks.Comment object at 0x103c437d0>
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
    // <conv.chunks.Comment object at 0x103c438f0>
    // <conv.chunks.Comment object at 0x103c43a40>
    // <conv.chunks.Comment object at 0x103c43ad0>
    // <conv.chunks.Comment object at 0x103c43b60>
    // <conv.chunks.Comment object at 0x103c43d40>
    // <conv.chunks.Comment object at 0x103c43e90>
    // <conv.chunks.Comment object at 0x103c43f20>
    lda(offsetof(G, PlayerGfxTblOffsets), y);
    return 0;
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy(Player_SprDataOffset);
    // <conv.chunks.Comment object at 0x103c48290>
    lda(GameEngineSubroutine);
    cmp(0xb);
    BEQ(KilledAtt);
    lda(PlayerGfxOffset);
    // <conv.chunks.Comment object at 0x103c484a0>
    // <conv.chunks.Comment object at 0x103c48530>
    // <conv.chunks.Comment object at 0x103c486e0>
    cmp(0x50);
    BEQ(C_S_IGAtt);
    cmp(0xb8);
    BEQ(C_S_IGAtt);
    cmp(0xc0);
    // <conv.chunks.Comment object at 0x103c48860>
    // <conv.chunks.Comment object at 0x103c48a10>
    // <conv.chunks.Comment object at 0x103c48aa0>
    // <conv.chunks.Comment object at 0x103c48c50>
    BEQ(C_S_IGAtt);
    cmp(0xc8);
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda(((Sprite_Attributes) + (16)), y);
    anda(0b111111);
    sta(((Sprite_Attributes) + (16)), y);
    // <conv.chunks.Comment object at 0x103c49280>
    // <conv.chunks.Comment object at 0x103c493a0>
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
    // <conv.chunks.Comment object at 0x103c49dc0>
    // <conv.chunks.Comment object at 0x103c49ee0>
    lda(((Sprite_Attributes) + (28)), y);
    anda(0b111111);
    ora(0b1000000);
    sta(((Sprite_Attributes) + (28)), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // <conv.chunks.Comment object at 0x103c4a3c0>
    // <conv.chunks.Comment object at 0x103c4a4e0>
    // <conv.chunks.Comment object at 0x103c4a720>
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
    // <conv.chunks.Comment object at 0x103c4ac60>
    // <conv.chunks.Comment object at 0x103c4acf0>
    ldy(0x3);
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(0x0);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x103c4b110>
    // <conv.chunks.Comment object at 0x103c4b1a0>
    ldy(0x2);
    JMP(RelWOfs);
}

int RelWOfs() {
    // <conv.chunks.Comment object at 0x103c4b3b0>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    return 0;
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(0x2);
    JSR(GetProperObjOffset);
    // <conv.chunks.Comment object at 0x103c4b800>
    // <conv.chunks.Comment object at 0x103c4b890>
    ldy(0x6);
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x103c4bcb0>
    // <conv.chunks.Comment object at 0x103c4bd40>
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(0x9);
    ldy(0x4);
    // <conv.chunks.Comment object at 0x103c54050>
    // <conv.chunks.Comment object at 0x103c540e0>
    JSR(VariableObjOfsRelPos);
    inx();
    // <conv.chunks.Comment object at 0x103c543b0>
    inx();
    lda(0x9);
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(0x0);
    // <conv.chunks.Comment object at 0x103c546e0>
    clc();
    adc(0x0);
    tax();
    // <conv.chunks.Comment object at 0x103c54890>
    // <conv.chunks.Comment object at 0x103c54860>
    JSR(GetObjRelativePosition);
    ldx(ObjectOffset);
    // <conv.chunks.Comment object at 0x103c54b30>
    return 0;
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda(SprObject_Y_Position, x);
    sta(SprObject_Rel_YPos, y);
    lda(SprObject_X_Position, x);
    sec();
    // <conv.chunks.Comment object at 0x103c54d10>
    // <conv.chunks.Comment object at 0x103c54e60>
    // <conv.chunks.Comment object at 0x103c54fb0>
    // <conv.chunks.Comment object at 0x103c55130>
    sbc(ScreenLeft_X_Pos);
    sta(SprObject_Rel_XPos, y);
    // <conv.chunks.Comment object at 0x103c552b0>
    return 0;
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(0x0);
    ldy(0x0);
    // <conv.chunks.Comment object at 0x103c554c0>
    // <conv.chunks.Comment object at 0x103c55520>
    // <conv.chunks.Comment object at 0x103c555b0>
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
    // <conv.chunks.Comment object at 0x103c56720>
    clc();
    adc(offsetof(G, ObjOffsetData), y);
    tax();
    // <conv.chunks.Comment object at 0x103c569c0>
    // <conv.chunks.Comment object at 0x103c56b40>
    return 0;
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(0x1);
    ldy(0x1);
    // <conv.chunks.Comment object at 0x103c56c90>
    // <conv.chunks.Comment object at 0x103c56d20>
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
    // <conv.chunks.Comment object at 0x103c572f0>
    // <conv.chunks.Comment object at 0x103c57440>
    tax();
    JMP(GetOffScreenBitsSet);
}

int GetOffScreenBitsSet() {
    tya();
    // <conv.chunks.Comment object at 0x103c57620>
    pha();
    JSR(RunOffscrBitsSubs);
    asl();
    // <conv.chunks.Comment object at 0x103c57860>
    asl();
    asl();
    asl();
    ora(0x0);
    sta(0x0);
    pla();
    // <conv.chunks.Comment object at 0x103c57ad0>
    // <conv.chunks.Comment object at 0x103c57aa0>
    // <conv.chunks.Comment object at 0x103c57b60>
    tay();
    lda(0x0);
    // <conv.chunks.Comment object at 0x103c57e60>
    sta(SprObject_OffscrBits, y);
    ldx(ObjectOffset);
    return 0;
    JMP(RunOffscrBitsSubs);
}

int RunOffscrBitsSubs() {
    JSR(GetXOffscreenBits);
    lsr();
    // <conv.chunks.Comment object at 0x103c5c260>
    // <conv.chunks.Comment object at 0x103c5c3b0>
    lsr();
    lsr();
    lsr();
    sta(0x0);
    // <conv.chunks.Comment object at 0x103c5c620>
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(0x4);
    ldy(0x1);
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // <conv.chunks.Comment object at 0x103c5ca70>
    // <conv.chunks.Comment object at 0x103c5d520>
    // <conv.chunks.Comment object at 0x103c5d610>
    lda(ScreenEdge_X_Pos, y);
    sec();
    sbc(SprObject_X_Position, x);
    sta(0x7);
    lda(ScreenEdge_PageLoc, y);
    sbc(SprObject_PageLoc, x);
    ldx(offsetof(G, DefaultXOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x103c5d850>
    // <conv.chunks.Comment object at 0x103c5d8e0>
    // <conv.chunks.Comment object at 0x103c5da60>
    // <conv.chunks.Comment object at 0x103c5daf0>
    // <conv.chunks.Comment object at 0x103c5dca0>
    // <conv.chunks.Comment object at 0x103c5ddf0>
    cmp(0x0);
    BMI(XLdBData);
    ldx(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x103c5dfa0>
    // <conv.chunks.Comment object at 0x103c5e150>
    cmp(0x1);
    BPL(XLdBData);
    lda(0x38);
    // <conv.chunks.Comment object at 0x103c5e3c0>
    // <conv.chunks.Comment object at 0x103c5e570>
    sta(0x6);
    lda(0x8);
    // <conv.chunks.Comment object at 0x103c5e600>
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // <conv.chunks.Comment object at 0x103c5e990>
    lda(offsetof(G, XOffscreenBitsData), x);
    ldx(0x4);
    cmp(0x0);
    // <conv.chunks.Comment object at 0x103c5eb40>
    // <conv.chunks.Comment object at 0x103c5ebd0>
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
    // <conv.chunks.Comment object at 0x103c5f170>
    // <conv.chunks.Comment object at 0x103c5fa70>
    // <conv.chunks.Comment object at 0x103c5fb60>
    lda(offsetof(G, HighPosUnitData), y);
    sec();
    sbc(SprObject_Y_Position, x);
    sta(0x7);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103c5fe00>
    // <conv.chunks.Comment object at 0x103c5ff80>
    // <conv.chunks.Comment object at 0x103c5ff50>
    sbc(SprObject_Y_HighPos, x);
    ldx(offsetof(G, DefaultYOnscreenOfs), y);
    // <conv.chunks.Comment object at 0x103c6c2f0>
    cmp(0x0);
    BMI(YLdBData);
    ldx(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y);
    // <conv.chunks.Comment object at 0x103c6c4a0>
    // <conv.chunks.Comment object at 0x103c6c650>
    cmp(0x1);
    BPL(YLdBData);
    lda(0x20);
    // <conv.chunks.Comment object at 0x103c6c8c0>
    // <conv.chunks.Comment object at 0x103c6ca70>
    sta(0x6);
    lda(0x4);
    // <conv.chunks.Comment object at 0x103c6cb00>
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // <conv.chunks.Comment object at 0x103c6ce90>
    lda(offsetof(G, YOffscreenBitsData), x);
    ldx(0x4);
    // <conv.chunks.Comment object at 0x103c6d040>
    cmp(0x0);
    BNE(ExYOfsBS);
    dey();
    // <conv.chunks.Comment object at 0x103c6d190>
    // <conv.chunks.Comment object at 0x103c6d370>
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
    // <conv.chunks.Comment object at 0x103c6d640>
    // <conv.chunks.Comment object at 0x103c6d610>
    // <conv.chunks.Comment object at 0x103c6d6d0>
    // <conv.chunks.Comment object at 0x103c6d910>
    // <conv.chunks.Comment object at 0x103c6daf0>
    lsr();
    lsr();
    anda(0x7);
    cpy(0x1);
    BCS(SetOscrO);
    adc(0x5);
    JMP(SetOscrO);
}

int SetOscrO() {
    // <conv.chunks.Comment object at 0x103c6dca0>
    // <conv.chunks.Comment object at 0x103c6dd30>
    // <conv.chunks.Comment object at 0x103c6de50>
    // <conv.chunks.Comment object at 0x103c6e030>
    // <conv.chunks.Comment object at 0x103c6e0c0>
    tax();
    JMP(ExDivPD);
}

int ExDivPD() {
    // <conv.chunks.Comment object at 0x103c6e240>
    return 0;
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(0x3);
    // <conv.chunks.Comment object at 0x103c6e390>
    // <conv.chunks.Comment object at 0x103c6e3f0>
    // <conv.chunks.Comment object at 0x103c6e450>
    // <conv.chunks.Comment object at 0x103c6e4e0>
    lsr();
    lsr();
    // <conv.chunks.Comment object at 0x103c6e690>
    lda(0x0);
    BCC(NoHFlip);
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103c6e720>
    // <conv.chunks.Comment object at 0x103c6e960>
    // <conv.chunks.Comment object at 0x103c6eba0>
    sta(Sprite_Tilenumber, y);
    lda(0x40);
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // <conv.chunks.Comment object at 0x103c6edb0>
    // <conv.chunks.Comment object at 0x103c6ee40>
    // <conv.chunks.Comment object at 0x103c6f020>
    sta(Sprite_Tilenumber, y);
    lda(0x1);
    // <conv.chunks.Comment object at 0x103c6f200>
    sta(((Sprite_Tilenumber) + (4)), y);
    lda(0x0);
    JMP(SetHFAt);
}

int SetHFAt() {
    // <conv.chunks.Comment object at 0x103c6f4d0>
    // <conv.chunks.Comment object at 0x103c6f560>
    ora(0x4);
    sta(Sprite_Attributes, y);
    // <conv.chunks.Comment object at 0x103c6f710>
    sta(((Sprite_Attributes) + (4)), y);
    lda(0x2);
    sta(Sprite_Y_Position, y);
    sta(((Sprite_Y_Position) + (4)), y);
    // <conv.chunks.Comment object at 0x103c6fad0>
    // <conv.chunks.Comment object at 0x103c6fb60>
    // <conv.chunks.Comment object at 0x103c6fd10>
    lda(0x5);
    sta(Sprite_X_Position, y);
    clc();
    adc(0x8);
    // <conv.chunks.Comment object at 0x103c6ff20>
    // <conv.chunks.Comment object at 0x103c741d0>
    // <conv.chunks.Comment object at 0x103c74260>
    sta(((Sprite_X_Position) + (4)), y);
    lda(0x2);
    clc();
    // <conv.chunks.Comment object at 0x103c74590>
    // <conv.chunks.Comment object at 0x103c74560>
    adc(0x8);
    sta(0x2);
    tya();
    clc();
    // <conv.chunks.Comment object at 0x103c748c0>
    // <conv.chunks.Comment object at 0x103c74a10>
    adc(0x8);
    tay();
    inx();
    inx();
    // <conv.chunks.Comment object at 0x103c74c50>
    // <conv.chunks.Comment object at 0x103c74d10>
    return 0;
    JMP(SoundEngine);
}

int SoundEngine() {
    lda(OperMode);
    // <conv.chunks.Comment object at 0x103c74f20>
    BNE(SndOn);
    sta(SND_MASTERCTRL_REG);
    // <conv.chunks.Comment object at 0x103c75490>
    return 0;
    JMP(SndOn);
}

int SndOn() {
    lda(0xff);
    sta(JOYPAD_PORT2);
    // <conv.chunks.Comment object at 0x103c75700>
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(PauseModeFlag);
    // <conv.chunks.Comment object at 0x103c75910>
    // <conv.chunks.Comment object at 0x103c75ac0>
    BNE(InPause);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x103c75d00>
    cmp(0x1);
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // <conv.chunks.Comment object at 0x103c75e80>
    // <conv.chunks.Comment object at 0x103c76030>
    lda(PauseSoundBuffer);
    BNE(ContPau);
    lda(PauseSoundQueue);
    // <conv.chunks.Comment object at 0x103c762d0>
    BEQ(SkipSoundSubroutines);
    sta(PauseSoundBuffer);
    sta(PauseModeFlag);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103c764e0>
    // <conv.chunks.Comment object at 0x103c76600>
    // <conv.chunks.Comment object at 0x103c76720>
    sta(SND_MASTERCTRL_REG);
    sta(Square1SoundBuffer);
    sta(Square2SoundBuffer);
    sta(NoiseSoundBuffer);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    lda(0x2a);
    // <conv.chunks.Comment object at 0x103c76c60>
    // <conv.chunks.Comment object at 0x103c76e10>
    sta(Squ1_SfxLenCounter);
    JMP(PTone1F);
}

int PTone1F() {
    // <conv.chunks.Comment object at 0x103c77020>
    lda(0x44);
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // <conv.chunks.Comment object at 0x103c77110>
    // <conv.chunks.Comment object at 0x103c772f0>
    lda(Squ1_SfxLenCounter);
    cmp(0x24);
    // <conv.chunks.Comment object at 0x103c77470>
    BEQ(PTone2F);
    cmp(0x1e);
    // <conv.chunks.Comment object at 0x103c776b0>
    BEQ(PTone1F);
    cmp(0x18);
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // <conv.chunks.Comment object at 0x103c778f0>
    // <conv.chunks.Comment object at 0x103c77980>
    // <conv.chunks.Comment object at 0x103c77b60>
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
    // <conv.chunks.Comment object at 0x103c7c050>
    dec(Squ1_SfxLenCounter);
    BNE(SkipSoundSubroutines);
    lda(0x0);
    sta(SND_MASTERCTRL_REG);
    lda(PauseSoundBuffer);
    cmp(0x2);
    // <conv.chunks.Comment object at 0x103c7c2c0>
    // <conv.chunks.Comment object at 0x103c7c350>
    // <conv.chunks.Comment object at 0x103c7c500>
    // <conv.chunks.Comment object at 0x103c7c620>
    BNE(SkipPIn);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103c7c860>
    sta(PauseModeFlag);
    JMP(SkipPIn);
}

int SkipPIn() {
    // <conv.chunks.Comment object at 0x103c7ca70>
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
    // <conv.chunks.Comment object at 0x103c7ce00>
    // <conv.chunks.Comment object at 0x103c7cf20>
    // <conv.chunks.Comment object at 0x103c7d040>
    // <conv.chunks.Comment object at 0x103c7d160>
    // <conv.chunks.Comment object at 0x103c7d280>
    sta(AreaMusicQueue);
    sta(EventMusicQueue);
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(0x0);
    // <conv.chunks.Comment object at 0x103c7d5b0>
    sta(Square1SoundQueue);
    sta(Square2SoundQueue);
    sta(NoiseSoundQueue);
    sta(PauseSoundQueue);
    ldy(DAC_Counter);
    // <conv.chunks.Comment object at 0x103c7da90>
    lda(AreaMusicBuffer);
    anda(0b11);
    // <conv.chunks.Comment object at 0x103c7dca0>
    BEQ(NoIncDAC);
    inc(DAC_Counter);
    // <conv.chunks.Comment object at 0x103c7deb0>
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
    // <conv.chunks.Comment object at 0x103c7e2d0>
    // <conv.chunks.Comment object at 0x103c7e420>
    // <conv.chunks.Comment object at 0x103c7e540>
    sty(((SND_DELTA_REG) + (1)));
    return 0;
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x103c7e8a0>
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
    // <conv.chunks.Comment object at 0x103c7ef60>
    // <conv.chunks.Comment object at 0x103c7f170>
    // <conv.chunks.Comment object at 0x103c7f2c0>
    // <conv.chunks.Comment object at 0x103c7f4d0>
    // <conv.chunks.Comment object at 0x103c7f620>
    sta(((SND_REGISTER) + (3)), x);
    JMP(NoTone);
}

int NoTone() {
    return 0;
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx(SND_SQUARE2_REG);
    // <conv.chunks.Comment object at 0x103c7fa40>
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
    // <conv.chunks.Comment object at 0x103c88500>
    sta(Squ1_SfxLenCounter);
    lda(0x62);
    // <conv.chunks.Comment object at 0x103c88e90>
    JSR(SetFreq_Squ1);
    ldx(0x99);
    // <conv.chunks.Comment object at 0x103c890a0>
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(0x26);
    // <conv.chunks.Comment object at 0x103c89310>
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
    // <conv.chunks.Comment object at 0x103c896a0>
    // <conv.chunks.Comment object at 0x103c89730>
    JSR(PlaySqu1Sfx);
    lda(0x28);
    sta(Squ1_SfxLenCounter);
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda(Squ1_SfxLenCounter);
    cmp(0x25);
    // <conv.chunks.Comment object at 0x103c89c40>
    // <conv.chunks.Comment object at 0x103c89d60>
    BNE(N2Prt);
    ldx(0x5f);
    // <conv.chunks.Comment object at 0x103c89fa0>
    ldy(0xf6);
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // <conv.chunks.Comment object at 0x103c8a120>
    // <conv.chunks.Comment object at 0x103c8a2d0>
    cmp(0x20);
    BNE(DecJpFPS);
    ldx(0x48);
    JMP(FPS2nd);
}

int FPS2nd() {
    // <conv.chunks.Comment object at 0x103c8a540>
    // <conv.chunks.Comment object at 0x103c8a5d0>
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
    // <conv.chunks.Comment object at 0x103c8ade0>
    ldy(0x93);
    JMP(Fthrow);
}

int Fthrow() {
    // <conv.chunks.Comment object at 0x103c8af60>
    ldx(0x9e);
    sta(Squ1_SfxLenCounter);
    lda(0xc);
    // <conv.chunks.Comment object at 0x103c8b260>
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103c8b4a0>
    cmp(0x6);
    BNE(DecJpFPS);
    lda(0xbb);
    // <conv.chunks.Comment object at 0x103c8b7a0>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // <conv.chunks.Comment object at 0x103c8ba70>
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy(Square1SoundQueue);
    // <conv.chunks.Comment object at 0x103c8bbf0>
    BEQ(CheckSfx1Buffer);
    sty(Square1SoundBuffer);
    BMI(PlaySmallJump);
    // <conv.chunks.Comment object at 0x103c8be00>
    // <conv.chunks.Comment object at 0x103c8bf20>
    lsr(Square1SoundQueue);
    BCS(PlayBigJump);
    // <conv.chunks.Comment object at 0x103c90170>
    lsr(Square1SoundQueue);
    BCS(PlayBump);
    // <conv.chunks.Comment object at 0x103c903b0>
    lsr(Square1SoundQueue);
    BCS(PlaySwimStomp);
    // <conv.chunks.Comment object at 0x103c905c0>
    lsr(Square1SoundQueue);
    BCS(PlaySmackEnemy);
    // <conv.chunks.Comment object at 0x103c907d0>
    lsr(Square1SoundQueue);
    BCS(PlayPipeDownInj);
    // <conv.chunks.Comment object at 0x103c909e0>
    lsr(Square1SoundQueue);
    BCS(PlayFireballThrow);
    // <conv.chunks.Comment object at 0x103c90bf0>
    lsr(Square1SoundQueue);
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda(Square1SoundBuffer);
    BEQ(ExS1H);
    BMI(ContinueSndJump);
    // <conv.chunks.Comment object at 0x103c90f50>
    // <conv.chunks.Comment object at 0x103c91070>
    // <conv.chunks.Comment object at 0x103c911c0>
    lsr();
    BCS(ContinueSndJump);
    // <conv.chunks.Comment object at 0x103c91370>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x103c91550>
    lsr();
    BCS(ContinueSwimStomp);
    // <conv.chunks.Comment object at 0x103c91700>
    lsr();
    BCS(ContinueSmackEnemy);
    // <conv.chunks.Comment object at 0x103c918b0>
    lsr();
    BCS(ContinuePipeDownInj);
    // <conv.chunks.Comment object at 0x103c91a60>
    lsr();
    BCS(ContinueBumpThrow);
    // <conv.chunks.Comment object at 0x103c91c10>
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
    // <conv.chunks.Comment object at 0x103c92000>
    sta(Squ1_SfxLenCounter);
    ldy(0x9c);
    // <conv.chunks.Comment object at 0x103c92210>
    ldx(0x9e);
    lda(0x26);
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy(Squ1_SfxLenCounter);
    lda(((offsetof(G, SwimStompEnvelopeData)) - (1)), y);
    sta(SND_SQUARE1_REG);
    // <conv.chunks.Comment object at 0x103c92630>
    // <conv.chunks.Comment object at 0x103c92750>
    // <conv.chunks.Comment object at 0x103c92960>
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
    // <conv.chunks.Comment object at 0x103c930e0>
    ldy(0xcb);
    ldx(0x9f);
    sta(Squ1_SfxLenCounter);
    lda(0x28);
    // <conv.chunks.Comment object at 0x103c934d0>
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103c93830>
    cpy(0x8);
    BNE(SmSpc);
    lda(0xa0);
    sta(((SND_SQUARE1_REG) + (2)));
    // <conv.chunks.Comment object at 0x103c93b60>
    // <conv.chunks.Comment object at 0x103c93bf0>
    lda(0x9f);
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // <conv.chunks.Comment object at 0x103c9c0b0>
    lda(0x90);
    JMP(SmTick);
}

int SmTick() {
    sta(SND_SQUARE1_REG);
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec(Squ1_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103c9c3b0>
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(0x0);
    stx(0xf1);
    // <conv.chunks.Comment object at 0x103c9c620>
    // <conv.chunks.Comment object at 0x103c9c770>
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
    // <conv.chunks.Comment object at 0x103c9cd40>
    sta(Squ1_SfxLenCounter);
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda(Squ1_SfxLenCounter);
    lsr();
    BCS(NoPDwnL);
    // <conv.chunks.Comment object at 0x103c9cf80>
    // <conv.chunks.Comment object at 0x103c9d0d0>
    // <conv.chunks.Comment object at 0x103c9d160>
    lsr();
    BCS(NoPDwnL);
    anda(0b10);
    BEQ(NoPDwnL);
    ldy(0x91);
    // <conv.chunks.Comment object at 0x103c9d670>
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
    // <conv.chunks.Comment object at 0x103c9f230>
    // <conv.chunks.Comment object at 0x103c9e0f0>
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
    // <conv.chunks.Comment object at 0x103ca4a70>
    // <conv.chunks.Comment object at 0x103ca4b00>
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda(Squ2_SfxLenCounter);
    cmp(0x30);
    // <conv.chunks.Comment object at 0x103ca4dd0>
    // <conv.chunks.Comment object at 0x103ca4ef0>
    BNE(N2Tone);
    lda(0x54);
    // <conv.chunks.Comment object at 0x103ca5130>
    sta(((SND_SQUARE2_REG) + (2)));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(0x20);
    // <conv.chunks.Comment object at 0x103ca5580>
    sta(Squ2_SfxLenCounter);
    ldy(0x94);
    // <conv.chunks.Comment object at 0x103ca5790>
    lda(0x5e);
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103ca5af0>
    cmp(0x18);
    BNE(DecrementSfx2Length);
    ldy(0x93);
    // <conv.chunks.Comment object at 0x103ca5df0>
    lda(0x18);
    JMP(SBlasJ);
}

int SBlasJ() {
    // <conv.chunks.Comment object at 0x103ca5f70>
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(0x36);
    // <conv.chunks.Comment object at 0x103ca61e0>
    sta(Squ2_SfxLenCounter);
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda(Squ2_SfxLenCounter);
    lsr();
    BCS(DecrementSfx2Length);
    // <conv.chunks.Comment object at 0x103ca6420>
    // <conv.chunks.Comment object at 0x103ca6570>
    // <conv.chunks.Comment object at 0x103ca6600>
    tay();
    lda(((offsetof(G, PowerUpGrabFreqData)) - (1)), y);
    ldx(0x5d);
    // <conv.chunks.Comment object at 0x103ca67b0>
    // <conv.chunks.Comment object at 0x103ca69c0>
    ldy(0x7f);
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103ca6d20>
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(0x0);
    // <conv.chunks.Comment object at 0x103ca6f90>
    stx(Square2SoundBuffer);
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(0xd);
    // <conv.chunks.Comment object at 0x103ca71d0>
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
    // <conv.chunks.Comment object at 0x103ca76e0>
    // <conv.chunks.Comment object at 0x103ca7800>
    BNE(ContinueExtraLife);
    ldy(Square2SoundQueue);
    // <conv.chunks.Comment object at 0x103ca7a10>
    BEQ(CheckSfx2Buffer);
    sty(Square2SoundBuffer);
    BMI(PlayBowserFall);
    // <conv.chunks.Comment object at 0x103ca7c20>
    // <conv.chunks.Comment object at 0x103ca7d40>
    lsr(Square2SoundQueue);
    BCS(PlayCoinGrab);
    // <conv.chunks.Comment object at 0x103ca7f50>
    lsr(Square2SoundQueue);
    BCS(PlayGrowPowerUp);
    // <conv.chunks.Comment object at 0x103cb01a0>
    lsr(Square2SoundQueue);
    BCS(PlayGrowVine);
    // <conv.chunks.Comment object at 0x103cb03b0>
    lsr(Square2SoundQueue);
    BCS(PlayBlast);
    // <conv.chunks.Comment object at 0x103cb05c0>
    lsr(Square2SoundQueue);
    BCS(PlayTimerTick);
    // <conv.chunks.Comment object at 0x103cb07d0>
    lsr(Square2SoundQueue);
    BCS(PlayPowerUpGrab);
    // <conv.chunks.Comment object at 0x103cb09e0>
    lsr(Square2SoundQueue);
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda(Square2SoundBuffer);
    BEQ(ExS2H);
    BMI(ContinueBowserFall);
    // <conv.chunks.Comment object at 0x103cb0d70>
    // <conv.chunks.Comment object at 0x103cb0e90>
    // <conv.chunks.Comment object at 0x103cb0fe0>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x103cb1190>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x103cb1340>
    lsr();
    BCS(ContinueGrowItems);
    // <conv.chunks.Comment object at 0x103cb14f0>
    lsr();
    BCS(ContinueBlast);
    // <conv.chunks.Comment object at 0x103cb16a0>
    lsr();
    BCS(Cont_CGrab_TTick);
    // <conv.chunks.Comment object at 0x103cb1850>
    lsr();
    BCS(ContinuePowerUpGrab);
    // <conv.chunks.Comment object at 0x103cb1a00>
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
    // <conv.chunks.Comment object at 0x103cb2060>
    sta(Squ2_SfxLenCounter);
    ldy(0xc4);
    // <conv.chunks.Comment object at 0x103cb2270>
    lda(0x18);
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda(Squ2_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103cb2630>
    cmp(0x8);
    BNE(DecrementSfx2Length);
    ldy(0xa4);
    // <conv.chunks.Comment object at 0x103cb2930>
    lda(0x5a);
    JMP(PBFRegs);
}

int PBFRegs() {
    // <conv.chunks.Comment object at 0x103cb2ab0>
    ldx(0x9f);
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // <conv.chunks.Comment object at 0x103cb2c30>
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(0x30);
    // <conv.chunks.Comment object at 0x103cb2e40>
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
    // <conv.chunks.Comment object at 0x103cb3350>
    dex();
    BNE(DivLLoop);
    // <conv.chunks.Comment object at 0x103cb3500>
    tay();
    lda(((offsetof(G, ExtraLifeFreqData)) - (1)), y);
    // <conv.chunks.Comment object at 0x103cb36b0>
    ldx(0x82);
    ldy(0x7f);
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(0x10);
    // <conv.chunks.Comment object at 0x103cb3bf0>
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
    // <conv.chunks.Comment object at 0x103cb80b0>
    sta(((SND_SQUARE2_REG) + (1)));
    lda(0x0);
    // <conv.chunks.Comment object at 0x103cb8380>
    sta(Sfx_SecondaryCounter);
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc(Sfx_SecondaryCounter);
    lda(Sfx_SecondaryCounter);
    lsr();
    // <conv.chunks.Comment object at 0x103cb85c0>
    // <conv.chunks.Comment object at 0x103cb86e0>
    // <conv.chunks.Comment object at 0x103cb8830>
    tay();
    cpy(Squ2_SfxLenCounter);
    BEQ(StopGrowItems);
    lda(0x9d);
    // <conv.chunks.Comment object at 0x103cb8950>
    // <conv.chunks.Comment object at 0x103cb8a70>
    // <conv.chunks.Comment object at 0x103cb8b90>
    sta(SND_SQUARE2_REG);
    lda(offsetof(G, PUp_VGrow_FreqData), y);
    // <conv.chunks.Comment object at 0x103cb8da0>
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
    // <conv.chunks.Comment object at 0x103cb92b0>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda(Noise_SfxLenCounter);
    lsr();
    // <conv.chunks.Comment object at 0x103cb9eb0>
    BCC(DecrementSfx3Length);
    tay();
    ldx(offsetof(G, BrickShatterFreqData), y);
    // <conv.chunks.Comment object at 0x103cba0c0>
    lda(offsetof(G, BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta(SND_NOISE_REG);
    // <conv.chunks.Comment object at 0x103cba360>
    stx(((SND_NOISE_REG) + (2)));
    lda(0x18);
    sta(((SND_NOISE_REG) + (3)));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec(Noise_SfxLenCounter);
    // <conv.chunks.Comment object at 0x103cba900>
    BNE(ExSfx3);
    lda(0xf0);
    // <conv.chunks.Comment object at 0x103cbab40>
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
    // <conv.chunks.Comment object at 0x103cbb050>
    BEQ(CheckNoiseBuffer);
    sty(NoiseSoundBuffer);
    // <conv.chunks.Comment object at 0x103cbb260>
    lsr(NoiseSoundQueue);
    BCS(PlayBrickShatter);
    // <conv.chunks.Comment object at 0x103cbb470>
    lsr(NoiseSoundQueue);
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda(NoiseSoundBuffer);
    BEQ(ExNH);
    // <conv.chunks.Comment object at 0x103cbb7d0>
    // <conv.chunks.Comment object at 0x103cbb8f0>
    lsr();
    BCS(ContinueBrickShatter);
    // <conv.chunks.Comment object at 0x103cbbad0>
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
    // <conv.chunks.Comment object at 0x103cbbec0>
    sta(Noise_SfxLenCounter);
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda(Noise_SfxLenCounter);
    lsr();
    tay();
    ldx(0xf);
    // <conv.chunks.Comment object at 0x103cc0350>
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
    // <conv.chunks.Comment object at 0x103cc0920>
    BNE(LoadEventMusic);
    lda(AreaMusicQueue);
    // <conv.chunks.Comment object at 0x103cc0b30>
    BNE(LoadAreaMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103cc0d40>
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
    // <conv.chunks.Comment object at 0x103cc17f0>
    ldy(0x0);
    sty(NoteLengthTblAdder);
    sty(AreaMusicBuffer);
    cmp(TimeRunningOutMusic);
    // <conv.chunks.Comment object at 0x103cc1970>
    // <conv.chunks.Comment object at 0x103cc1b20>
    // <conv.chunks.Comment object at 0x103cc1c40>
    BNE(FindEventMusicHeader);
    ldx(0x8);
    // <conv.chunks.Comment object at 0x103cc1e50>
    stx(NoteLengthTblAdder);
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(0x4);
    BNE(NoStop1);
    // <conv.chunks.Comment object at 0x103cc21b0>
    // <conv.chunks.Comment object at 0x103cc2240>
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // <conv.chunks.Comment object at 0x103cc2510>
    ldy(0x10);
    JMP(GMLoopB);
}

int GMLoopB() {
    sty(GroundMusicHeaderOfs);
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(0x0);
    // <conv.chunks.Comment object at 0x103cc2810>
    sty(EventMusicBuffer);
    sta(AreaMusicBuffer);
    cmp(0x1);
    // <conv.chunks.Comment object at 0x103cc2a20>
    // <conv.chunks.Comment object at 0x103cc2b40>
    BNE(FindAreaMusicHeader);
    inc(GroundMusicHeaderOfs);
    ldy(GroundMusicHeaderOfs);
    // <conv.chunks.Comment object at 0x103cc2d50>
    // <conv.chunks.Comment object at 0x103cc2e70>
    cpy(0x32);
    BNE(LoadHeader);
    // <conv.chunks.Comment object at 0x103cc2ff0>
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
    // <conv.chunks.Comment object at 0x103cc36b0>
    // <conv.chunks.Comment object at 0x103cc3770>
    BCC(FindEventMusicHeader);
    JMP(LoadHeader);
}

int LoadHeader() {
    lda(MusicHeaderOffsetData, y);
    // <conv.chunks.Comment object at 0x103cc3920>
    tay();
    lda(offsetof(G, MusicHeaderData), y);
    // <conv.chunks.Comment object at 0x103cc3b00>
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
    // <conv.chunks.Comment object at 0x103cd0c80>
    sta(Squ2_NoteLenCounter);
    sta(Squ1_NoteLenCounter);
    sta(Tri_NoteLenCounter);
    sta(Noise_BeatLenCounter);
    lda(0x0);
    // <conv.chunks.Comment object at 0x103cd1160>
    sta(MusicOffset_Square2);
    sta(AltRegContentFlag);
    lda(0xb);
    // <conv.chunks.Comment object at 0x103cd1370>
    // <conv.chunks.Comment object at 0x103cd1490>
    sta(SND_MASTERCTRL_REG);
    lda(0xf);
    sta(SND_MASTERCTRL_REG);
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec(Squ2_NoteLenCounter);
    BNE(MiscSqu2MusicTasks);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x103cd18b0>
    // <conv.chunks.Comment object at 0x103cd19d0>
    // <conv.chunks.Comment object at 0x103cd1af0>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103cd21e0>
    cmp(TimeRunningOutMusic);
    BNE(NotTRO);
    lda(AreaMusicBuffer_Alt);
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // <conv.chunks.Comment object at 0x103cd2510>
    // <conv.chunks.Comment object at 0x103cd2630>
    // <conv.chunks.Comment object at 0x103cd2750>
    anda(VictoryMusic);
    BNE(VictoryMLoopBack);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x103cd29c0>
    anda(0b1011111);
    BNE(MusicLoopBack);
    lda(0x0);
    sta(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x103cd2bd0>
    // <conv.chunks.Comment object at 0x103cd2cf0>
    // <conv.chunks.Comment object at 0x103cd2d80>
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
    // <conv.chunks.Comment object at 0x103cd36e0>
    sta(Squ2_NoteLenBuffer);
    ldy(MusicOffset_Square2);
    // <conv.chunks.Comment object at 0x103cd38f0>
    inc(MusicOffset_Square2);
    lda((MusicData), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x103cd3c80>
    BNE(SkipFqL1);
    JSR(SetFreq_Squ2);
    BEQ(Rest);
    JSR(LoadControlRegs);
    JMP(Rest);
}

int Rest() {
    // <conv.chunks.Comment object at 0x103cd3e90>
    // <conv.chunks.Comment object at 0x103cd3fb0>
    // <conv.chunks.Comment object at 0x103cdc140>
    // <conv.chunks.Comment object at 0x103cdc260>
    sta(Squ2_EnvelopeDataCtrl);
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // <conv.chunks.Comment object at 0x103cdc3e0>
    // <conv.chunks.Comment object at 0x103cdc500>
    lda(Squ2_NoteLenBuffer);
    sta(Squ2_NoteLenCounter);
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda(Square2SoundBuffer);
    // <conv.chunks.Comment object at 0x103cdc770>
    BNE(HandleSquare1Music);
    lda(EventMusicBuffer);
    anda(0b10010001);
    // <conv.chunks.Comment object at 0x103cdc980>
    // <conv.chunks.Comment object at 0x103cdcaa0>
    BNE(HandleSquare1Music);
    ldy(Squ2_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x103cdccb0>
    BEQ(NoDecEnv1);
    dec(Squ2_EnvelopeDataCtrl);
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // <conv.chunks.Comment object at 0x103cdcec0>
    // <conv.chunks.Comment object at 0x103cdcfe0>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE2_REG);
    ldx(0x7f);
    // <conv.chunks.Comment object at 0x103cdd130>
    // <conv.chunks.Comment object at 0x103cdd250>
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
    // <conv.chunks.Comment object at 0x103cdda00>
    inc(MusicOffset_Square1);
    lda((MusicData), y);
    BNE(Squ1NoteHandler);
    // <conv.chunks.Comment object at 0x103cddd60>
    lda(0x83);
    sta(SND_SQUARE1_REG);
    lda(0x94);
    sta(((SND_SQUARE1_REG) + (1)));
    // <conv.chunks.Comment object at 0x103cddee0>
    // <conv.chunks.Comment object at 0x103cde090>
    // <conv.chunks.Comment object at 0x103cde120>
    sta(AltRegContentFlag);
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta(Squ1_NoteLenCounter);
    ldy(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x103cde6c0>
    // <conv.chunks.Comment object at 0x103cde7e0>
    BNE(HandleTriangleMusic);
    txa();
    anda(0b111110);
    JSR(SetFreq_Squ1);
    // <conv.chunks.Comment object at 0x103cdea80>
    // <conv.chunks.Comment object at 0x103cdeba0>
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // <conv.chunks.Comment object at 0x103cdeea0>
    sta(Squ1_EnvelopeDataCtrl);
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda(Square1SoundBuffer);
    // <conv.chunks.Comment object at 0x103cdf110>
    BNE(HandleTriangleMusic);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103cdf320>
    anda(0b10010001);
    BNE(DeathMAltReg);
    ldy(Squ1_EnvelopeDataCtrl);
    // <conv.chunks.Comment object at 0x103cdf620>
    BEQ(NoDecEnv2);
    dec(Squ1_EnvelopeDataCtrl);
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // <conv.chunks.Comment object at 0x103cdf830>
    // <conv.chunks.Comment object at 0x103cdf950>
    JSR(LoadEnvelopeData);
    sta(SND_SQUARE1_REG);
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // <conv.chunks.Comment object at 0x103cdfaa0>
    // <conv.chunks.Comment object at 0x103cdfbc0>
    lda(AltRegContentFlag);
    BNE(DoAltLoad);
    lda(0x7f);
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // <conv.chunks.Comment object at 0x103cdfe00>
    // <conv.chunks.Comment object at 0x103cdfe90>
    sta(((SND_SQUARE1_REG) + (1)));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda(MusicOffset_Triangle);
    dec(Tri_NoteLenCounter);
    BNE(HandleNoiseMusic);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x103ce4290>
    // <conv.chunks.Comment object at 0x103ce43b0>
    // <conv.chunks.Comment object at 0x103ce44d0>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x103ce4830>
    // <conv.chunks.Comment object at 0x103ce4950>
    // <conv.chunks.Comment object at 0x103ce4a70>
    // <conv.chunks.Comment object at 0x103ce4b90>
    lda(0x1f);
    sta(SND_TRIANGLE_REG);
    ldy(MusicOffset_Triangle);
    // <conv.chunks.Comment object at 0x103ce4d10>
    // <conv.chunks.Comment object at 0x103ce4ec0>
    inc(MusicOffset_Triangle);
    lda((MusicData), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx(Tri_NoteLenBuffer);
    // <conv.chunks.Comment object at 0x103ce5460>
    stx(Tri_NoteLenCounter);
    lda(EventMusicBuffer);
    anda(0b1101110);
    BNE(NotDOrD4);
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x103ce5760>
    // <conv.chunks.Comment object at 0x103ce5880>
    // <conv.chunks.Comment object at 0x103ce59a0>
    anda(0b1010);
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // <conv.chunks.Comment object at 0x103ce5bb0>
    // <conv.chunks.Comment object at 0x103ce5cd0>
    txa();
    cmp(0x12);
    // <conv.chunks.Comment object at 0x103ce5dc0>
    BCS(LongN);
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103ce6000>
    anda(EndOfCastleMusic);
    BEQ(MediN);
    lda(0xf);
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // <conv.chunks.Comment object at 0x103ce6330>
    // <conv.chunks.Comment object at 0x103ce63c0>
    // <conv.chunks.Comment object at 0x103ce6570>
    lda(0x1f);
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // <conv.chunks.Comment object at 0x103ce6660>
    // <conv.chunks.Comment object at 0x103ce6810>
    lda(0xff);
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta(SND_TRIANGLE_REG);
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x103ce6b10>
    anda(0b11110011);
    BEQ(ExitMusicHandler);
    dec(Noise_BeatLenCounter);
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy(MusicOffset_Noise);
    // <conv.chunks.Comment object at 0x103ce70b0>
    inc(MusicOffset_Noise);
    lda((MusicData), y);
    // <conv.chunks.Comment object at 0x103ce72c0>
    BNE(NoiseBeatHandler);
    lda(NoiseDataLoopbackOfs);
    sta(MusicOffset_Noise);
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta(Noise_BeatLenCounter);
    // <conv.chunks.Comment object at 0x103ce79b0>
    txa();
    anda(0b111110);
    BEQ(SilentBeat);
    cmp(0x30);
    BEQ(LongBeat);
    // <conv.chunks.Comment object at 0x103ce7b60>
    // <conv.chunks.Comment object at 0x103ce7c80>
    // <conv.chunks.Comment object at 0x103ce7da0>
    // <conv.chunks.Comment object at 0x103ce7e30>
    cmp(0x20);
    BEQ(StrongBeat);
    anda(0b10000);
    BEQ(SilentBeat);
    lda(0x1c);
    // <conv.chunks.Comment object at 0x103cf43e0>
    ldx(0x3);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x103cf4800>
    ldx(0xc);
    ldy(0x18);
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(0x1c);
    // <conv.chunks.Comment object at 0x103cf4c20>
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
    // <conv.chunks.Comment object at 0x103cf51c0>
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
    // <conv.chunks.Comment object at 0x103cf5760>
    // <conv.chunks.Comment object at 0x103cf5820>
    // <conv.chunks.Comment object at 0x103cf58e0>
    // <conv.chunks.Comment object at 0x103cf59a0>
    // <conv.chunks.Comment object at 0x103cf5a60>
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(0b111);
    // <conv.chunks.Comment object at 0x103cf5bb0>
    clc();
    adc(0xf0);
    adc(NoteLengthTblAdder);
    // <conv.chunks.Comment object at 0x103cf5d90>
    // <conv.chunks.Comment object at 0x103cf5e20>
    tay();
    lda(offsetof(G, MusicLengthLookupTbl), y);
    // <conv.chunks.Comment object at 0x103cf6030>
    return 0;
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103cf6240>
    anda(EndOfCastleMusic);
    BEQ(NotECstlM);
    lda(0x4);
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda(AreaMusicBuffer);
    anda(0b1111101);
    // <conv.chunks.Comment object at 0x103cf68d0>
    BEQ(WaterMus);
    lda(0x8);
    // <conv.chunks.Comment object at 0x103cf6ae0>
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // <conv.chunks.Comment object at 0x103cf6d20>
    lda(0x28);
    JMP(AllMus);
}

int AllMus() {
    // <conv.chunks.Comment object at 0x103cf6de0>
    ldx(0x82);
    ldy(0x7f);
    return 0;
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda(EventMusicBuffer);
    // <conv.chunks.Comment object at 0x103cf71a0>
    anda(EndOfCastleMusic);
    BEQ(LoadUsualEnvData);
    lda(offsetof(G, EndOfCastleMusicEnvData), y);
    // <conv.chunks.Comment object at 0x103cf74a0>
    return 0;
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda(AreaMusicBuffer);
    // <conv.chunks.Comment object at 0x103cf76b0>
    anda(0b1111101);
    BEQ(LoadWaterEventMusEnvData);
    lda(offsetof(G, AreaMusicEnvData), y);
    // <conv.chunks.Comment object at 0x103cf79b0>
    return 0;
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda(offsetof(G, WaterEventMusEnvData), y);
    // <conv.chunks.Comment object at 0x103cf7bc0>
    return 0;
}

