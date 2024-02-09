#include <cstddef>
#include "main.h"

G g {
    ._start = 0xdd,
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

void preStart() {                   
    m.addRegion(                    
        Memory::Region {            
            std::make_shared<Memory::ROM>(&g._start), 0x8000, 0x7fff });
}

int Start() {
    // pretty standard 6502 type init here
    sei();
    cld();
    // init PPU control register 1
    lda(Imm(0b10000));
    sta(Abs(PPU_CTRL_REG1));
    // reset stack pointer
    ldx(Imm(0xff));
    txs();
}

int VBlank1() {
    // wait two frames
    lda(Abs(PPU_STATUS));
    BPL(VBlank1);
}

int VBlank2() {
    lda(Abs(PPU_STATUS));
    BPL(VBlank2);
    // load default cold boot pointer
    ldy(Imm(ColdBootOffset));
    // this is where we check for a warm boot
    ldx(Imm(0x5));
}

int WBootCheck() {
    // check each score digit in the top score
    lda(Abs(TopScoreDisplay, x));
    // to see if we have a valid digit
    cmp(Imm(10));
    // if not, give up and proceed with cold boot
    BCS(ColdBoot);
    dex();
    BPL(WBootCheck);
    // second checkpoint, check to see if
    lda(Abs(WarmBootValidation));
    // another location has a specific value
    cmp(Imm(0xa5));
    BNE(ColdBoot);
    // if passed both, load warm boot pointer
    ldy(Imm(WarmBootOffset));
}

int ColdBoot() {
    // clear memory using pointer in Y
    JSR(InitializeMemory);
    // reset delta counter load register
    sta(Abs(((SND_DELTA_REG) + (1))));
    // reset primary mode of operation
    sta(Abs(OperMode));
    // set warm boot flag
    lda(Imm(0xa5));
    sta(Abs(WarmBootValidation));
    // set seed for pseudorandom register
    sta(Abs(PseudoRandomBitReg));
    lda(Imm(0b1111));
    // enable all sound channels except dmc
    sta(Abs(SND_MASTERCTRL_REG));
    lda(Imm(0b110));
    // turn off clipping for OAM and background
    sta(Abs(PPU_CTRL_REG2));
    JSR(MoveAllSpritesOffscreen);
    // initialize both name tables
    JSR(InitializeNameTables);
    // set flag to disable screen output
    inc(Abs(DisableScreenFlag));
    lda(Abs(Mirror_PPU_CTRL_REG1));
    // enable NMIs
    ora(Imm(0b10000000));
    JSR(WritePPUReg1);
}

int EndlessLoop() {
    // endless loop, need I say more?
    JMP(EndlessLoop);
}

int NonMaskableInterrupt() {
    // disable NMIs in mirror reg
    lda(Abs(Mirror_PPU_CTRL_REG1));
    // save all other bits
    anda(Imm(0b1111111));
    sta(Abs(Mirror_PPU_CTRL_REG1));
    // alter name table address to be $2800
    anda(Imm(0b1111110));
    // (essentially $2000) but save other bits
    sta(Abs(PPU_CTRL_REG1));
    // disable OAM and background display by default
    lda(Abs(Mirror_PPU_CTRL_REG2));
    anda(Imm(0b11100110));
    // get screen disable flag
    ldy(Abs(DisableScreenFlag));
    // if set, used bits as-is
    BNE(ScreenOff);
    // otherwise reenable bits and save them
    lda(Abs(Mirror_PPU_CTRL_REG2));
    ora(Imm(0b11110));
}

int ScreenOff() {
    // save bits for later but not in register at the moment
    sta(Abs(Mirror_PPU_CTRL_REG2));
    // disable screen for now
    anda(Imm(0b11100111));
    sta(Abs(PPU_CTRL_REG2));
    // reset flip-flop and reset scroll registers to zero
    ldx(Abs(PPU_STATUS));
    lda(Imm(0x0));
    JSR(InitScroll);
    // reset spr-ram address register
    sta(Abs(PPU_SPR_ADDR));
    // perform spr-ram DMA access on $0200-$02ff
    lda(Imm(0x2));
    sta(Abs(SPR_DMA));
    // load control for pointer to buffer contents
    ldx(Abs(VRAM_Buffer_AddrCtrl));
    // set indirect at $00 to pointer
    lda(Abs(offsetof(G, VRAM_AddrTable_Low), x));
    sta(Abs(0x0));
    lda(Abs(offsetof(G, VRAM_AddrTable_High), x));
    sta(Abs(0x1));
    // update screen with buffer contents
    JSR(UpdateScreen);
    ldy(Imm(0x0));
    // check for usage of $0341
    ldx(Abs(VRAM_Buffer_AddrCtrl));
    cpx(Imm(0x6));
    BNE(InitBuffer);
    // get offset based on usage
    iny();
}

int InitBuffer() {
    ldx(Abs(offsetof(G, VRAM_Buffer_Offset), y));
    // clear buffer header at last location
    lda(Imm(0x0));
    sta(Abs(VRAM_Buffer1_Offset, x));
    sta(Abs(VRAM_Buffer1, x));
    // reinit address control to $0301
    sta(Abs(VRAM_Buffer_AddrCtrl));
    // copy mirror of $2001 to register
    lda(Abs(Mirror_PPU_CTRL_REG2));
    sta(Abs(PPU_CTRL_REG2));
    // play sound
    JSR(SoundEngine);
    // read joypads
    JSR(ReadJoypads);
    // handle pause
    JSR(PauseRoutine);
    JSR(UpdateTopScore);
    // check for pause status
    lda(Abs(GamePauseStatus));
    lsr();
    BCS(PauseSkip);
    // if master timer control not set, decrement
    lda(Abs(TimerControl));
    // all frame and interval timers
    BEQ(DecTimers);
    dec(Abs(TimerControl));
    BNE(NoDecTimers);
}

int DecTimers() {
    // load end offset for end of frame timers
    ldx(Imm(0x14));
    // decrement interval timer control,
    dec(Abs(IntervalTimerControl));
    // if not expired, only frame timers will decrement
    BPL(DecTimersLoop);
    lda(Imm(0x14));
    // if control for interval timers expired,
    sta(Abs(IntervalTimerControl));
    // interval timers will decrement along with frame timers
    ldx(Imm(0x23));
}

int DecTimersLoop() {
    // check current timer
    lda(Abs(Timers, x));
    // if current timer expired, branch to skip,
    BEQ(SkipExpTimer);
    // otherwise decrement the current timer
    dec(Abs(Timers, x));
}

int SkipExpTimer() {
    // move onto next timer
    dex();
    // do this until all timers are dealt with
    BPL(DecTimersLoop);
}

int NoDecTimers() {
    // increment frame counter
    inc(Abs(FrameCounter));
}

int PauseSkip() {
    ldx(Imm(0x0));
    ldy(Imm(0x7));
    // get first memory location of LSFR bytes
    lda(Abs(PseudoRandomBitReg));
    // mask out all but d1
    anda(Imm(0b10));
    // save here
    sta(Abs(0x0));
    // get second memory location
    lda(Abs(((PseudoRandomBitReg) + (1))));
    // mask out all but d1
    anda(Imm(0b10));
    // perform exclusive-OR on d1 from first and second bytes
    eor(Abs(0x0));
    // if neither or both are set, carry will be clear
    clc();
    BEQ(RotPRandomBit);
    // if one or the other is set, carry will be set
    sec();
}

int RotPRandomBit() {
    // rotate carry into d7, and rotate last bit into carry
    ror(Abs(PseudoRandomBitReg, x));
    // increment to next byte
    inx();
    // decrement for loop
    dey();
    BNE(RotPRandomBit);
    // check for flag here
    lda(Abs(Sprite0HitDetectFlag));
    BEQ(SkipSprite0);
}

int Sprite0Clr() {
    // wait for sprite 0 flag to clear, which will
    lda(Abs(PPU_STATUS));
    // not happen until vblank has ended
    anda(Imm(0b1000000));
    BNE(Sprite0Clr);
    // if in pause mode, do not bother with sprites at all
    lda(Abs(GamePauseStatus));
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
}

int Sprite0Hit() {
    // do sprite #0 hit detection
    lda(Abs(PPU_STATUS));
    anda(Imm(0b1000000));
    BEQ(Sprite0Hit);
    // small delay, to wait until we hit horizontal blank time
    ldy(Imm(0x14));
}

int HBlankDelay() {
    dey();
    BNE(HBlankDelay);
}

int SkipSprite0() {
    // set scroll registers from variables
    lda(Abs(HorizontalScroll));
    sta(Abs(PPU_SCROLL_REG));
    lda(Abs(VerticalScroll));
    sta(Abs(PPU_SCROLL_REG));
    // load saved mirror of $2000
    lda(Abs(Mirror_PPU_CTRL_REG1));
    pha();
    sta(Abs(PPU_CTRL_REG1));
    // if in pause mode, do not perform operation mode stuff
    lda(Abs(GamePauseStatus));
    lsr();
    BCS(SkipMainOper);
    // otherwise do one of many, many possible subroutines
    JSR(OperModeExecutionTree);
}

int SkipMainOper() {
    // reset flip-flop
    lda(Abs(PPU_STATUS));
    pla();
    // reactivate NMIs
    ora(Imm(0b10000000));
    sta(Abs(PPU_CTRL_REG1));
    // we are done until the next frame!
    return 0;
}

int PauseRoutine() {
    // are we in victory mode?
    lda(Abs(OperMode));
    // if so, go ahead
    cmp(Imm(VictoryModeValue));
    BEQ(ChkPauseTimer);
    // are we in game mode?
    cmp(Imm(GameModeValue));
    // if not, leave
    BNE(ExitPause);
    // if we are in game mode, are we running game engine?
    lda(Abs(OperMode_Task));
    cmp(Imm(0x3));
    // if not, leave
    BNE(ExitPause);
}

int ChkPauseTimer() {
    // check if pause timer is still counting down
    lda(Abs(GamePauseTimer));
    BEQ(ChkStart);
    // if so, decrement and leave
    dec(Abs(GamePauseTimer));
    return 0;
}

int ChkStart() {
    // check to see if start is pressed
    lda(Abs(SavedJoypad1Bits));
    // on controller 1
    anda(Imm(Start_Button));
    BEQ(ClrPauseTimer);
    // check to see if timer flag is set
    lda(Abs(GamePauseStatus));
    // and if so, do not reset timer (residual,
    anda(Imm(0b10000000));
    // joypad reading routine makes this unnecessary)
    BNE(ExitPause);
    // set pause timer
    lda(Imm(0x2b));
    sta(Abs(GamePauseTimer));
    lda(Abs(GamePauseStatus));
    tay();
    // set pause sfx queue for next pause mode
    iny();
    sty(Abs(PauseSoundQueue));
    // invert d0 and set d7
    eor(Imm(0b1));
    ora(Imm(0b10000000));
    // unconditional branch
    BNE(SetPause);
}

int ClrPauseTimer() {
    // clear timer flag if timer is at zero and start button
    lda(Abs(GamePauseStatus));
    // is not pressed
    anda(Imm(0b1111111));
}

int SetPause() {
    sta(Abs(GamePauseStatus));
}

int ExitPause() {
    return 0;
}

int SpriteShuffler() {
    // load level type, likely residual code
    ldy(Abs(AreaType));
    // load preset value which will put it at
    lda(Imm(0x28));
    // sprite #10
    sta(Abs(0x0));
    // start at the end of OAM data offsets
    ldx(Imm(0xe));
}

int ShuffleLoop() {
    // check for offset value against
    lda(Abs(SprDataOffset, x));
    // the preset value
    cmp(Abs(0x0));
    // if less, skip this part
    BCC(NextSprOffset);
    // get current offset to preset value we want to add
    ldy(Abs(SprShuffleAmtOffset));
    clc();
    // get shuffle amount, add to current sprite offset
    adc(Abs(SprShuffleAmt, y));
    // if not exceeded $ff, skip second add
    BCC(StrSprOffset);
    clc();
    // otherwise add preset value $28 to offset
    adc(Abs(0x0));
}

int StrSprOffset() {
    // store new offset here or old one if branched to here
    sta(Abs(SprDataOffset, x));
}

int NextSprOffset() {
    // move backwards to next one
    dex();
    BPL(ShuffleLoop);
    // load offset
    ldx(Abs(SprShuffleAmtOffset));
    inx();
    // check if offset + 1 goes to 3
    cpx(Imm(0x3));
    // if offset + 1 not 3, store
    BNE(SetAmtOffset);
    // otherwise, init to 0
    ldx(Imm(0x0));
}

int SetAmtOffset() {
    stx(Abs(SprShuffleAmtOffset));
    // load offsets for values and storage
    ldx(Imm(0x8));
    ldy(Imm(0x2));
}

int SetMiscOffset() {
    // load one of three OAM data offsets
    lda(Abs(((SprDataOffset) + (5)), y));
    // store first one unmodified, but
    sta(Abs(((Misc_SprDataOffset) - (2)), x));
    // add eight to the second and eight
    clc();
    // more to the third one
    adc(Imm(0x8));
    // note that due to the way X is set up,
    sta(Abs(((Misc_SprDataOffset) - (1)), x));
    // this code loads into the misc sprite offsets
    clc();
    adc(Imm(0x8));
    sta(Abs(Misc_SprDataOffset, x));
    dex();
    dex();
    dex();
    dey();
    // do this until all misc spr offsets are loaded
    BPL(SetMiscOffset);
    return 0;
}

int OperModeExecutionTree() {
    // this is the heart of the entire program,
    lda(Abs(OperMode));
    // most of what goes on starts here
    static JUMP_ENTRY jumptable[4] = {
        TitleScreenMode,
        GameMode,
        VictoryMode,
        GameOverMode,
    };
    JMP(jumptable[a.read()]);
}

int MoveAllSpritesOffscreen() {
    // this routine moves all sprites off the screen
    ldy(Imm(0x0));
}

int MoveSpritesOffscreen() {
    // this routine moves all but sprite 0
    ldy(Imm(0x4));
    // off the screen
    lda(Imm(0xf8));
}

int SprInitLoop() {
    // write 248 into OAM data's Y coordinate
    sta(Abs(Sprite_Y_Position, y));
    // which will move it off the screen
    iny();
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    return 0;
}

int TitleScreenMode() {
    lda(Abs(OperMode_Task));
    static JUMP_ENTRY jumptable[4] = {
        InitializeGame,
        ScreenRoutines,
        PrimaryGameSetup,
        GameMenuRoutine,
    };
    JMP(jumptable[a.read()]);
}

int GameMenuRoutine() {
    ldy(Imm(0x0));
    // check to see if either player pressed
    lda(Abs(SavedJoypad1Bits));
    // only the start button (either joypad)
    ora(Abs(SavedJoypad2Bits));
    cmp(Imm(Start_Button));
    BEQ(StartGame);
    // check to see if A + start was pressed
    cmp(Imm(((A_Button) + (Start_Button))));
    // if not, branch to check select button
    BNE(ChkSelect);
}

int StartGame() {
    // if either start or A + start, execute here
    JMP(ChkContinue);
}

int ChkSelect() {
    // check to see if the select button was pressed
    cmp(Imm(Select_Button));
    // if so, branch reset demo timer
    BEQ(SelectBLogic);
    // otherwise check demo timer
    ldx(Abs(DemoTimer));
    // if demo timer not expired, branch to check world selection
    BNE(ChkWorldSel);
    // set controller bits here if running demo
    sta(Abs(SelectTimer));
    // run through the demo actions
    JSR(DemoEngine);
    // if carry flag set, demo over, thus branch
    BCS(ResetTitle);
    // otherwise, run game engine for demo
    JMP(RunDemo);
}

int ChkWorldSel() {
    // check to see if world selection has been enabled
    ldx(Abs(WorldSelectEnableFlag));
    BEQ(NullJoypad);
    // if so, check to see if the B button was pressed
    cmp(Imm(B_Button));
    BNE(NullJoypad);
    // if so, increment Y and execute same code as select
    iny();
}

int SelectBLogic() {
    // if select or B pressed, check demo timer one last time
    lda(Abs(DemoTimer));
    // if demo timer expired, branch to reset title screen mode
    BEQ(ResetTitle);
    // otherwise reset demo timer
    lda(Imm(0x18));
    sta(Abs(DemoTimer));
    // check select/B button timer
    lda(Abs(SelectTimer));
    // if not expired, branch
    BNE(NullJoypad);
    // otherwise reset select button timer
    lda(Imm(0x10));
    sta(Abs(SelectTimer));
    // was the B button pressed earlier?  if so, branch
    cpy(Imm(0x1));
    // note this will not be run if world selection is disabled
    BEQ(IncWorldSel);
    // if no, must have been the select button, therefore
    lda(Abs(NumberOfPlayers));
    // change number of players and draw icon accordingly
    eor(Imm(0b1));
    sta(Abs(NumberOfPlayers));
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
}

int IncWorldSel() {
    // increment world select number
    ldx(Abs(WorldSelectNumber));
    inx();
    txa();
    // mask out higher bits
    anda(Imm(0b111));
    // store as current world select number
    sta(Abs(WorldSelectNumber));
    JSR(GoContinue);
}

int UpdateShroom() {
    // write template for world select in vram buffer
    lda(Abs(offsetof(G, WSelectBufferTemplate), x));
    // do this until all bytes are written
    sta(Abs(((VRAM_Buffer1) - (1)), x));
    inx();
    cpx(Imm(0x6));
    BMI(UpdateShroom);
    // get world number from variable and increment for
    ldy(Abs(WorldNumber));
    // proper display, and put in blank byte before
    iny();
    // null terminator
    sty(Abs(((VRAM_Buffer1) + (3))));
}

int NullJoypad() {
    // clear joypad bits for player 1
    lda(Imm(0x0));
    sta(Abs(SavedJoypad1Bits));
}

int RunDemo() {
    // run game engine
    JSR(GameCoreRoutine);
    // check to see if we're running lose life routine
    lda(Abs(GameEngineSubroutine));
    cmp(Imm(0x6));
    // if not, do not do all the resetting below
    BNE(ExitMenu);
}

int ResetTitle() {
    // reset game modes, disable
    lda(Imm(0x0));
    // sprite 0 check and disable
    sta(Abs(OperMode));
    // screen output
    sta(Abs(OperMode_Task));
    sta(Abs(Sprite0HitDetectFlag));
    inc(Abs(DisableScreenFlag));
    return 0;
}

int ChkContinue() {
    // if timer for demo has expired, reset modes
    ldy(Abs(DemoTimer));
    BEQ(ResetTitle);
    // check to see if A button was also pushed
    asl();
    // if not, don't load continue function's world number
    BCC(StartWorld1);
    // load previously saved world number for secret
    lda(Abs(ContinueWorld));
    // continue function when pressing A + start
    JSR(GoContinue);
}

int StartWorld1() {
    JSR(LoadAreaPointer);
    // set 1-up box flag for both players
    inc(Abs(Hidden1UpFlag));
    inc(Abs(OffScr_Hidden1UpFlag));
    // set fetch new game timer flag
    inc(Abs(FetchNewGameTimerFlag));
    // set next game mode
    inc(Abs(OperMode));
    // if world select flag is on, then primary
    lda(Abs(WorldSelectEnableFlag));
    // hard mode must be on as well
    sta(Abs(PrimaryHardMode));
    lda(Imm(0x0));
    // set game mode here, and clear demo timer
    sta(Abs(OperMode_Task));
    sta(Abs(DemoTimer));
    ldx(Imm(0x17));
    lda(Imm(0x0));
}

int InitScores() {
    // clear player scores and coin displays
    sta(Abs(ScoreAndCoinDisplay, x));
    dex();
    BPL(InitScores);
}

int ExitMenu() {
    return 0;
}

int GoContinue() {
    // start both players at the first area
    sta(Abs(WorldNumber));
    // of the previously saved world number
    sta(Abs(OffScr_WorldNumber));
    // note that on power-up using this function
    ldx(Imm(0x0));
    // will make no difference
    stx(Abs(AreaNumber));
    stx(Abs(OffScr_AreaNumber));
    return 0;
}

int DrawMushroomIcon() {
    // read eight bytes to be read by transfer routine
    ldy(Imm(0x7));
}

int IconDataRead() {
    // note that the default position is set for a
    lda(Abs(offsetof(G, MushroomIconData), y));
    // 1-player game
    sta(Abs(((VRAM_Buffer1) - (1)), y));
    dey();
    BPL(IconDataRead);
    // check number of players
    lda(Abs(NumberOfPlayers));
    // if set to 1-player game, we're done
    BEQ(ExitIcon);
    // otherwise, load blank tile in 1-player position
    lda(Imm(0x24));
    sta(Abs(((VRAM_Buffer1) + (3))));
    // then load shroom icon tile in 2-player position
    lda(Imm(0xce));
    sta(Abs(((VRAM_Buffer1) + (5))));
}

int ExitIcon() {
    return 0;
}

int DemoEngine() {
    // load current demo action
    ldx(Abs(DemoAction));
    // load current action timer
    lda(Abs(DemoActionTimer));
    // if timer still counting down, skip
    BNE(DoAction);
    inx();
    // if expired, increment action, X, and
    inc(Abs(DemoAction));
    // set carry by default for demo over
    sec();
    // get next timer
    lda(Abs(((offsetof(G, DemoTimingData)) - (1)), x));
    // store as current timer
    sta(Abs(DemoActionTimer));
    // if timer already at zero, skip
    BEQ(DemoOver);
}

int DoAction() {
    // get and perform action (current or next)
    lda(Abs(((offsetof(G, DemoActionData)) - (1)), x));
    sta(Abs(SavedJoypad1Bits));
    // decrement action timer
    dec(Abs(DemoActionTimer));
    // clear carry if demo still going
    clc();
}

int DemoOver() {
    return 0;
}

int VictoryMode() {
    // run victory mode subroutines
    JSR(VictoryModeSubroutines);
    // get current task of victory mode
    lda(Abs(OperMode_Task));
    // if on bridge collapse, skip enemy processing
    BEQ(AutoPlayer);
    ldx(Imm(0x0));
    // otherwise reset enemy object offset
    stx(Abs(ObjectOffset));
    // and run enemy code
    JSR(EnemiesAndLoopsCore);
}

int AutoPlayer() {
    // get player's relative coordinates
    JSR(RelativePlayerPosition);
    // draw the player, then leave
    JMP(PlayerGfxHandler);
}

int VictoryModeSubroutines() {
    lda(Abs(OperMode_Task));
    static JUMP_ENTRY jumptable[5] = {
        BridgeCollapse,
        SetupVictoryMode,
        PlayerVictoryWalk,
        PrintVictoryMessages,
        PlayerEndWorld,
    };
    JMP(jumptable[a.read()]);
}

int SetupVictoryMode() {
    // get page location of right side of screen
    ldx(Abs(ScreenRight_PageLoc));
    // increment to next page
    inx();
    // store here
    stx(Abs(DestinationPageLoc));
    lda(Imm(EndOfCastleMusic));
    // play win castle music
    sta(Abs(EventMusicQueue));
    // jump to set next major task in victory mode
    JMP(IncModeTask_B);
}

int PlayerVictoryWalk() {
    // set value here to not walk player by default
    ldy(Imm(0x0));
    sty(Abs(VictoryWalkControl));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // compare with destination page location
    cmp(Abs(DestinationPageLoc));
    // if page locations don't match, branch
    BNE(PerformWalk);
    // otherwise get player's horizontal position
    lda(Abs(Player_X_Position));
    // compare with preset horizontal position
    cmp(Imm(0x60));
    // if still on other page, branch ahead
    BCS(DontWalk);
}

int PerformWalk() {
    // otherwise increment value and Y
    inc(Abs(VictoryWalkControl));
    // note Y will be used to walk the player
    iny();
}

int DontWalk() {
    // put contents of Y in A and
    tya();
    // use A to move player to the right or not
    JSR(AutoControlPlayer);
    // check page location of left side of screen
    lda(Abs(ScreenLeft_PageLoc));
    // against set value here
    cmp(Abs(DestinationPageLoc));
    // branch if equal to change modes if necessary
    BEQ(ExitVWalk);
    lda(Abs(ScrollFractional));
    // do fixed point math on fractional part of scroll
    clc();
    adc(Imm(0x80));
    // save fractional movement amount
    sta(Abs(ScrollFractional));
    // set 1 pixel per frame
    lda(Imm(0x1));
    // add carry from previous addition
    adc(Imm(0x0));
    // use as scroll amount
    tay();
    // do sub to scroll the screen
    JSR(ScrollScreen);
    // do another sub to update screen and scroll variables
    JSR(UpdScrollVar);
    // increment value to stay in this routine
    inc(Abs(VictoryWalkControl));
}

int ExitVWalk() {
    // load value set here
    lda(Abs(VictoryWalkControl));
    // if zero, branch to change modes
    BEQ(IncModeTask_A);
    // otherwise leave
    return 0;
}

int PrintVictoryMessages() {
    // load secondary message counter
    lda(Abs(SecondaryMsgCounter));
    // if set, branch to increment message counters
    BNE(IncMsgCounter);
    // otherwise load primary message counter
    lda(Abs(PrimaryMsgCounter));
    // if set to zero, branch to print first message
    BEQ(ThankPlayer);
    // if at 9 or above, branch elsewhere (this comparison
    cmp(Imm(0x9));
    // is residual code, counter never reaches 9)
    BCS(IncMsgCounter);
    // check world number
    ldy(Abs(WorldNumber));
    cpy(Imm(World8));
    // if not at world 8, skip to next part
    BNE(MRetainerMsg);
    // check primary message counter again
    cmp(Imm(0x3));
    // if not at 3 yet (world 8 only), branch to increment
    BCC(IncMsgCounter);
    // otherwise subtract one
    sbc(Imm(0x1));
    // and skip to next part
    JMP(ThankPlayer);
}

int MRetainerMsg() {
    // check primary message counter
    cmp(Imm(0x2));
    // if not at 2 yet (world 1-7 only), branch
    BCC(IncMsgCounter);
}

int ThankPlayer() {
    // put primary message counter into Y
    tay();
    // if counter nonzero, skip this part, do not print first message
    BNE(SecondPartMsg);
    // otherwise get player currently on the screen
    lda(Abs(CurrentPlayer));
    // if mario, branch
    BEQ(EvalForMusic);
    // otherwise increment Y once for luigi and
    iny();
    // do an unconditional branch to the same place
    BNE(EvalForMusic);
}

int SecondPartMsg() {
    // increment Y to do world 8's message
    iny();
    lda(Abs(WorldNumber));
    // check world number
    cmp(Imm(World8));
    // if at world 8, branch to next part
    BEQ(EvalForMusic);
    // otherwise decrement Y for world 1-7's message
    dey();
    // if counter at 4 (world 1-7 only)
    cpy(Imm(0x4));
    // branch to set victory end timer
    BCS(SetEndTimer);
    // if counter at 3 (world 1-7 only)
    cpy(Imm(0x3));
    // branch to keep counting
    BCS(IncMsgCounter);
}

int EvalForMusic() {
    // if counter not yet at 3 (world 8 only), branch
    cpy(Imm(0x3));
    // to print message only (note world 1-7 will only
    BNE(PrintMsg);
    // reach this code if counter = 0, and will always branch)
    lda(Imm(VictoryMusic));
    // otherwise load victory music first (world 8 only)
    sta(Abs(EventMusicQueue));
}

int PrintMsg() {
    // put primary message counter in A
    tya();
    // add $0c or 12 to counter thus giving an appropriate value,
    clc();
    // ($0c-$0d = first), ($0e = world 1-7's), ($0f-$12 = world 8's)
    adc(Imm(0xc));
    // write message counter to vram address controller
    sta(Abs(VRAM_Buffer_AddrCtrl));
}

int IncMsgCounter() {
    lda(Abs(SecondaryMsgCounter));
    clc();
    // add four to secondary message counter
    adc(Imm(0x4));
    sta(Abs(SecondaryMsgCounter));
    lda(Abs(PrimaryMsgCounter));
    // add carry to primary message counter
    adc(Imm(0x0));
    sta(Abs(PrimaryMsgCounter));
    // check primary counter one more time
    cmp(Imm(0x7));
}

int SetEndTimer() {
    // if not reached value yet, branch to leave
    BCC(ExitMsgs);
    lda(Imm(0x6));
    // otherwise set world end timer
    sta(Abs(WorldEndTimer));
}

int IncModeTask_A() {
    // move onto next task in mode
    inc(Abs(OperMode_Task));
}

int ExitMsgs() {
    // leave
    return 0;
}

int PlayerEndWorld() {
    // check to see if world end timer expired
    lda(Abs(WorldEndTimer));
    // branch to leave if not
    BNE(EndExitOne);
    // check world number
    ldy(Abs(WorldNumber));
    // if on world 8, player is done with game,
    cpy(Imm(World8));
    // thus branch to read controller
    BCS(EndChkBButton);
    lda(Imm(0x0));
    // otherwise initialize area number used as offset
    sta(Abs(AreaNumber));
    // and level number control to start at area 1
    sta(Abs(LevelNumber));
    // initialize secondary mode of operation
    sta(Abs(OperMode_Task));
    // increment world number to move onto the next world
    inc(Abs(WorldNumber));
    // get area address offset for the next area
    JSR(LoadAreaPointer);
    // set flag to load game timer from header
    inc(Abs(FetchNewGameTimerFlag));
    lda(Imm(GameModeValue));
    // set mode of operation to game mode
    sta(Abs(OperMode));
}

int EndExitOne() {
    // and leave
    return 0;
}

int EndChkBButton() {
    lda(Abs(SavedJoypad1Bits));
    // check to see if B button was pressed on
    ora(Abs(SavedJoypad2Bits));
    // either controller
    anda(Imm(B_Button));
    // branch to leave if not
    BEQ(EndExitTwo);
    // otherwise set world selection flag
    lda(Imm(0x1));
    sta(Abs(WorldSelectEnableFlag));
    // remove onscreen player's lives
    lda(Imm(0xff));
    sta(Abs(NumberofLives));
    // do sub to continue other player or end game
    JSR(TerminateGame);
}

int EndExitTwo() {
    // leave
    return 0;
}

int FloateyNumbersRoutine() {
    // load control for floatey number
    lda(Abs(FloateyNum_Control, x));
    // if zero, branch to leave
    BEQ(EndExitOne);
    // if less than $0b, branch
    cmp(Imm(0xb));
    BCC(ChkNumTimer);
    // otherwise set to $0b, thus keeping
    lda(Imm(0xb));
    // it in range
    sta(Abs(FloateyNum_Control, x));
}

int ChkNumTimer() {
    // use as Y
    tay();
    // check value here
    lda(Abs(FloateyNum_Timer, x));
    // if nonzero, branch ahead
    BNE(DecNumTimer);
    // initialize floatey number control and leave
    sta(Abs(FloateyNum_Control, x));
    return 0;
}

int DecNumTimer() {
    // decrement value here
    dec(Abs(FloateyNum_Timer, x));
    // if not reached a certain point, branch
    cmp(Imm(0x2b));
    BNE(ChkTallEnemy);
    // check offset for $0b
    cpy(Imm(0xb));
    // branch ahead if not found
    BNE(LoadNumTiles);
    // give player one extra life (1-up)
    inc(Abs(NumberofLives));
    lda(Imm(Sfx_ExtraLife));
    // and play the 1-up sound
    sta(Abs(Square2SoundQueue));
}

int LoadNumTiles() {
    // load point value here
    lda(Abs(offsetof(G, ScoreUpdateData), y));
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // use as X offset, essentially the digit
    tax();
    // load again and this time
    lda(Abs(offsetof(G, ScoreUpdateData), y));
    // mask out the high nybble
    anda(Imm(0b1111));
    // store as amount to add to the digit
    sta(Abs(DigitModifier, x));
    // update the score accordingly
    JSR(AddToScore);
}

int ChkTallEnemy() {
    // get OAM data offset for enemy object
    ldy(Abs(Enemy_SprDataOffset, x));
    // get enemy object identifier
    lda(Abs(Enemy_ID, x));
    cmp(Imm(Spiny));
    // branch if spiny
    BEQ(FloateyPart);
    cmp(Imm(PiranhaPlant));
    // branch if piranha plant
    BEQ(FloateyPart);
    cmp(Imm(HammerBro));
    // branch elsewhere if hammer bro
    BEQ(GetAltOffset);
    cmp(Imm(GreyCheepCheep));
    // branch if cheep-cheep of either color
    BEQ(FloateyPart);
    cmp(Imm(RedCheepCheep));
    BEQ(FloateyPart);
    cmp(Imm(TallEnemy));
    // branch elsewhere if enemy object => $09
    BCS(GetAltOffset);
    lda(Abs(Enemy_State, x));
    // if enemy state defeated or otherwise
    cmp(Imm(0x2));
    // $02 or greater, branch beyond this part
    BCS(FloateyPart);
}

int GetAltOffset() {
    // load some kind of control bit
    ldx(Abs(SprDataOffset_Ctrl));
    // get alternate OAM data offset
    ldy(Abs(Alt_SprDataOffset, x));
    // get enemy object offset again
    ldx(Abs(ObjectOffset));
}

int FloateyPart() {
    // get vertical coordinate for
    lda(Abs(FloateyNum_Y_Pos, x));
    // floatey number, if coordinate in the
    cmp(Imm(0x18));
    // status bar, branch
    BCC(SetupNumSpr);
    sbc(Imm(0x1));
    // otherwise subtract one and store as new
    sta(Abs(FloateyNum_Y_Pos, x));
}

int SetupNumSpr() {
    // get vertical coordinate
    lda(Abs(FloateyNum_Y_Pos, x));
    // subtract eight and dump into the
    sbc(Imm(0x8));
    // left and right sprite's Y coordinates
    JSR(DumpTwoSpr);
    // get horizontal coordinate
    lda(Abs(FloateyNum_X_Pos, x));
    // store into X coordinate of left sprite
    sta(Abs(Sprite_X_Position, y));
    clc();
    // add eight pixels and store into X
    adc(Imm(0x8));
    // coordinate of right sprite
    sta(Abs(((Sprite_X_Position) + (4)), y));
    lda(Imm(0x2));
    // set palette control in attribute bytes
    sta(Abs(Sprite_Attributes, y));
    // of left and right sprites
    sta(Abs(((Sprite_Attributes) + (4)), y));
    lda(Abs(FloateyNum_Control, x));
    // multiply our floatey number control by 2
    asl();
    // and use as offset for look-up table
    tax();
    lda(Abs(offsetof(G, FloateyNumTileData), x));
    // display first half of number of points
    sta(Abs(Sprite_Tilenumber, y));
    lda(Abs(((offsetof(G, FloateyNumTileData)) + (1)), x));
    // display the second half
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    // get enemy object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int ScreenRoutines() {
    // run one of the following subroutines
    lda(Abs(ScreenRoutineTask));
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

int InitScreen() {
    // initialize all sprites including sprite #0
    JSR(MoveAllSpritesOffscreen);
    // and erase both name and attribute tables
    JSR(InitializeNameTables);
    lda(Abs(OperMode));
    // if mode still 0, do not load
    BEQ(NextSubtask);
    // into buffer pointer
    ldx(Imm(0x3));
    JMP(SetVRAMAddr_A);
}

int SetupIntermediate() {
    // save current background color control
    lda(Abs(BackgroundColorCtrl));
    // and player status to stack
    pha();
    lda(Abs(PlayerStatus));
    pha();
    // set background color to black
    lda(Imm(0x0));
    // and player status to not fiery
    sta(Abs(PlayerStatus));
    // this is the ONLY time background color control
    lda(Imm(0x2));
    // is set to less than 4
    sta(Abs(BackgroundColorCtrl));
    JSR(GetPlayerColors);
    // we only execute this routine for
    pla();
    // the intermediate lives display
    sta(Abs(PlayerStatus));
    // and once we're done, we return bg
    pla();
    // color ctrl and player status from stack
    sta(Abs(BackgroundColorCtrl));
    // then move onto the next task
    JMP(IncSubtask);
}

int GetAreaPalette() {
    // select appropriate palette to load
    ldy(Abs(AreaType));
    // based on area type
    ldx(Abs(offsetof(G, AreaPalette), y));
}

int SetVRAMAddr_A() {
    // store offset into buffer control
    stx(Abs(VRAM_Buffer_AddrCtrl));
}

int NextSubtask() {
    // move onto next task
    JMP(IncSubtask);
}

int GetBackgroundColor() {
    // check background color control
    ldy(Abs(BackgroundColorCtrl));
    // if not set, increment task and fetch palette
    BEQ(NoBGColor);
    // put appropriate palette into vram
    lda(Abs(((offsetof(G, BGColorCtrl_Addr)) - (4)), y));
    // note that if set to 5-7, $0301 will not be read
    sta(Abs(VRAM_Buffer_AddrCtrl));
}

int NoBGColor() {
    // increment to next subtask and plod on through
    inc(Abs(ScreenRoutineTask));
}

int GetPlayerColors() {
    // get current buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    ldy(Imm(0x0));
    // check which player is on the screen
    lda(Abs(CurrentPlayer));
    BEQ(ChkFiery);
    // load offset for luigi
    ldy(Imm(0x4));
}

int ChkFiery() {
    // check player status
    lda(Abs(PlayerStatus));
    cmp(Imm(0x2));
    // if fiery, load alternate offset for fiery player
    BNE(StartClrGet);
    ldy(Imm(0x8));
}

int StartClrGet() {
    // do four colors
    lda(Imm(0x3));
    sta(Abs(0x0));
}

int ClrGetLoop() {
    // fetch player colors and store them
    lda(Abs(offsetof(G, PlayerColors), y));
    // in the buffer
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    iny();
    inx();
    dec(Abs(0x0));
    BPL(ClrGetLoop);
    // load original offset from before
    ldx(Abs(VRAM_Buffer1_Offset));
    // if this value is four or greater, it will be set
    ldy(Abs(BackgroundColorCtrl));
    // therefore use it as offset to background color
    BNE(SetBGColor);
    // otherwise use area type bits from area offset as offset
    ldy(Abs(AreaType));
}

int SetBGColor() {
    // to background color instead
    lda(Abs(offsetof(G, BackgroundColors), y));
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    // set for sprite palette address
    lda(Imm(0x3f));
    // save to buffer
    sta(Abs(VRAM_Buffer1, x));
    lda(Imm(0x10));
    sta(Abs(((VRAM_Buffer1) + (1)), x));
    // write length byte to buffer
    lda(Imm(0x4));
    sta(Abs(((VRAM_Buffer1) + (2)), x));
    // now the null terminator
    lda(Imm(0x0));
    sta(Abs(((VRAM_Buffer1) + (7)), x));
    // move the buffer pointer ahead 7 bytes
    txa();
    // in case we want to write anything else later
    clc();
    adc(Imm(0x7));
}

int SetVRAMOffset() {
    // store as new vram buffer offset
    sta(Abs(VRAM_Buffer1_Offset));
    return 0;
}

int GetAlternatePalette1() {
    // check for mushroom level style
    lda(Abs(AreaStyle));
    cmp(Imm(0x1));
    BNE(NoAltPal);
    // if found, load appropriate palette
    lda(Imm(0xb));
}

int SetVRAMAddr_B() {
    sta(Abs(VRAM_Buffer_AddrCtrl));
}

int NoAltPal() {
    // now onto the next task
    JMP(IncSubtask);
}

int WriteTopStatusLine() {
    // select main status bar
    lda(Imm(0x0));
    // output it
    JSR(WriteGameText);
    // onto the next task
    JMP(IncSubtask);
}

int WriteBottomStatusLine() {
    // write player's score and coin tally to screen
    JSR(GetSBNybbles);
    ldx(Abs(VRAM_Buffer1_Offset));
    // write address for world-area number on screen
    lda(Imm(0x20));
    sta(Abs(VRAM_Buffer1, x));
    lda(Imm(0x73));
    sta(Abs(((VRAM_Buffer1) + (1)), x));
    // write length for it
    lda(Imm(0x3));
    sta(Abs(((VRAM_Buffer1) + (2)), x));
    // first the world number
    ldy(Abs(WorldNumber));
    iny();
    tya();
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    // next the dash
    lda(Imm(0x28));
    sta(Abs(((VRAM_Buffer1) + (4)), x));
    // next the level number
    ldy(Abs(LevelNumber));
    // increment for proper number display
    iny();
    tya();
    sta(Abs(((VRAM_Buffer1) + (5)), x));
    // put null terminator on
    lda(Imm(0x0));
    sta(Abs(((VRAM_Buffer1) + (6)), x));
    // move the buffer offset up by 6 bytes
    txa();
    clc();
    adc(Imm(0x6));
    sta(Abs(VRAM_Buffer1_Offset));
    JMP(IncSubtask);
}

int DisplayTimeUp() {
    // if game timer not expired, increment task
    lda(Abs(GameTimerExpiredFlag));
    // control 2 tasks forward, otherwise, stay here
    BEQ(NoTimeUp);
    lda(Imm(0x0));
    // reset timer expiration flag
    sta(Abs(GameTimerExpiredFlag));
    // output time-up screen to buffer
    lda(Imm(0x2));
    JMP(OutputInter);
}

int NoTimeUp() {
    // increment control task 2 tasks forward
    inc(Abs(ScreenRoutineTask));
    JMP(IncSubtask);
}

int DisplayIntermediate() {
    // check primary mode of operation
    lda(Abs(OperMode));
    // if in title screen mode, skip this
    BEQ(NoInter);
    // are we in game over mode?
    cmp(Imm(GameOverModeValue));
    // if so, proceed to display game over screen
    BEQ(GameOverInter);
    // otherwise check for mode of alternate entry
    lda(Abs(AltEntranceControl));
    // and branch if found
    BNE(NoInter);
    // check if we are on castle level
    ldy(Abs(AreaType));
    // and if so, branch (possibly residual)
    cpy(Imm(0x3));
    BEQ(PlayerInter);
    // if this flag is set, skip intermediate lives display
    lda(Abs(DisableIntermediate));
    // and jump to specific task, otherwise
    BNE(NoInter);
}

int PlayerInter() {
    // put player in appropriate place for
    JSR(DrawPlayer_Intermediate);
    // lives display, then output lives display to buffer
    lda(Imm(0x1));
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(Imm(0x0));
    // reenable screen output
    sta(Abs(DisableScreenFlag));
    return 0;
}

int GameOverInter() {
    // set screen timer
    lda(Imm(0x12));
    sta(Abs(ScreenTimer));
    // output game over screen to buffer
    lda(Imm(0x3));
    JSR(WriteGameText);
    JMP(IncModeTask_B);
}

int NoInter() {
    // set for specific task and leave
    lda(Imm(0x8));
    sta(Abs(ScreenRoutineTask));
    return 0;
}

int AreaParserTaskControl() {
    // turn off screen
    inc(Abs(DisableScreenFlag));
}

int TaskLoop() {
    // render column set of current area
    JSR(AreaParserTaskHandler);
    // check number of tasks
    lda(Abs(AreaParserTaskNum));
    // if tasks still not all done, do another one
    BNE(TaskLoop);
    // do we need to render more column sets?
    dec(Abs(ColumnSets));
    BPL(OutputCol);
    // if not, move on to the next task
    inc(Abs(ScreenRoutineTask));
}

int OutputCol() {
    // set vram buffer to output rendered column set
    lda(Imm(0x6));
    // on next NMI
    sta(Abs(VRAM_Buffer_AddrCtrl));
    return 0;
}

int DrawTitleScreen() {
    // are we in title screen mode?
    lda(Abs(OperMode));
    // if not, exit
    BNE(IncModeTask_B);
    // load address $1ec0 into
    lda(Imm(HI8(TitleScreenDataOffset)));
    // the vram address register
    sta(Abs(PPU_ADDRESS));
    lda(Imm(LO8(TitleScreenDataOffset)));
    sta(Abs(PPU_ADDRESS));
    // put address $0300 into
    lda(Imm(0x3));
    // the indirect at $00
    sta(Abs(0x1));
    ldy(Imm(0x0));
    sty(Abs(0x0));
    // do one garbage read
    lda(Abs(PPU_DATA));
}

int OutputTScr() {
    // get title screen from chr-rom
    lda(Abs(PPU_DATA));
    // store 256 bytes into buffer
    sta(IndY((0x0)));
    iny();
    // if not past 256 bytes, do not increment
    BNE(ChkHiByte);
    // otherwise increment high byte of indirect
    inc(Abs(0x1));
}

int ChkHiByte() {
    // check high byte?
    lda(Abs(0x1));
    // at $0400?
    cmp(Imm(0x4));
    // if not, loop back and do another
    BNE(OutputTScr);
    // check if offset points past end of data
    cpy(Imm(0x3a));
    // if not, loop back and do another
    BCC(OutputTScr);
    // set buffer transfer control to $0300,
    lda(Imm(0x5));
    // increment task and exit
    JMP(SetVRAMAddr_B);
}

int ClearBuffersDrawIcon() {
    // check game mode
    lda(Abs(OperMode));
    // if not title screen mode, leave
    BNE(IncModeTask_B);
    // otherwise, clear buffer space
    ldx(Imm(0x0));
}

int TScrClear() {
    sta(Abs(((VRAM_Buffer1) - (1)), x));
    sta(Abs(((((VRAM_Buffer1) - (1))) + (0x100)), x));
    dex();
    BNE(TScrClear);
    // draw player select icon
    JSR(DrawMushroomIcon);
}

int IncSubtask() {
    // move onto next task
    inc(Abs(ScreenRoutineTask));
    return 0;
}

int WriteTopScore() {
    // run display routine to display top score on title
    lda(Imm(0xfa));
    JSR(UpdateNumber);
}

int IncModeTask_B() {
    // move onto next mode
    inc(Abs(OperMode_Task));
    return 0;
}

int WriteGameText() {
    // save text number to stack
    pha();
    asl();
    // multiply by 2 and use as offset
    tay();
    // if set to do top status bar or world/lives display,
    cpy(Imm(0x4));
    // branch to use current offset as-is
    BCC(LdGameText);
    // if set to do time-up or game over,
    cpy(Imm(0x8));
    // branch to check players
    BCC(Chk2Players);
    // otherwise warp zone, therefore set offset
    ldy(Imm(0x8));
}

int Chk2Players() {
    // check for number of players
    lda(Abs(NumberOfPlayers));
    // if there are two, use current offset to also print name
    BNE(LdGameText);
    // otherwise increment offset by one to not print name
    iny();
}

int LdGameText() {
    // get offset to message we want to print
    ldx(Abs(offsetof(G, GameTextOffsets), y));
    ldy(Imm(0x0));
}

int GameTextLoop() {
    // load message data
    lda(Abs(offsetof(G, GameText), x));
    // check for terminator
    cmp(Imm(0xff));
    // branch to end text if found
    BEQ(EndGameText);
    // otherwise write data to buffer
    sta(Abs(VRAM_Buffer1, y));
    // and increment increment
    inx();
    iny();
    // do this for 256 bytes if no terminator found
    BNE(GameTextLoop);
}

int EndGameText() {
    // put null terminator at end
    lda(Imm(0x0));
    sta(Abs(VRAM_Buffer1, y));
    // pull original text number from stack
    pla();
    tax();
    // are we printing warp zone?
    cmp(Imm(0x4));
    BCS(PrintWarpZoneNumbers);
    // are we printing the world/lives display?
    dex();
    // if not, branch to check player's name
    BNE(CheckPlayerName);
    // otherwise, check number of lives
    lda(Abs(NumberofLives));
    // and increment by one for display
    clc();
    adc(Imm(0x1));
    // more than 9 lives?
    cmp(Imm(10));
    BCC(PutLives);
    // if so, subtract 10 and put a crown tile
    sbc(Imm(10));
    // next to the difference...strange things happen if
    ldy(Imm(0x9f));
    // the number of lives exceeds 19
    sty(Abs(((VRAM_Buffer1) + (7))));
}

int PutLives() {
    sta(Abs(((VRAM_Buffer1) + (8))));
    // write world and level numbers (incremented for display)
    ldy(Abs(WorldNumber));
    // to the buffer in the spaces surrounding the dash
    iny();
    sty(Abs(((VRAM_Buffer1) + (19))));
    ldy(Abs(LevelNumber));
    iny();
    // we're done here
    sty(Abs(((VRAM_Buffer1) + (21))));
    return 0;
}

int CheckPlayerName() {
    // check number of players
    lda(Abs(NumberOfPlayers));
    // if only 1 player, leave
    BEQ(ExitChkName);
    // load current player
    lda(Abs(CurrentPlayer));
    // check to see if current message number is for time up
    dex();
    BNE(ChkLuigi);
    // check for game over mode
    ldy(Abs(OperMode));
    cpy(Imm(GameOverModeValue));
    BEQ(ChkLuigi);
    // if not, must be time up, invert d0 to do other player
    eor(Imm(0b1));
}

int ChkLuigi() {
    lsr();
    // if mario is current player, do not change the name
    BCC(ExitChkName);
    ldy(Imm(0x4));
}

int NameLoop() {
    // otherwise, replace "MARIO" with "LUIGI"
    lda(Abs(offsetof(G, LuigiName), y));
    sta(Abs(((VRAM_Buffer1) + (3)), y));
    dey();
    // do this until each letter is replaced
    BPL(NameLoop);
}

int ExitChkName() {
    return 0;
}

int PrintWarpZoneNumbers() {
    // subtract 4 and then shift to the left
    sbc(Imm(0x4));
    // twice to get proper warp zone number
    asl();
    // offset
    asl();
    tax();
    ldy(Imm(0x0));
}

int WarpNumLoop() {
    // print warp zone numbers into the
    lda(Abs(offsetof(G, WarpZoneNumbers), x));
    // placeholders from earlier
    sta(Abs(((VRAM_Buffer1) + (27)), y));
    inx();
    // put a number in every fourth space
    iny();
    iny();
    iny();
    iny();
    cpy(Imm(0xc));
    BCC(WarpNumLoop);
    // load new buffer pointer at end of message
    lda(Imm(0x2c));
    JMP(SetVRAMOffset);
}

int ResetSpritesAndScreenTimer() {
    // check if screen timer has expired
    lda(Abs(ScreenTimer));
    // if not, branch to leave
    BNE(NoReset);
    // otherwise reset sprites now
    JSR(MoveAllSpritesOffscreen);
}

int ResetScreenTimer() {
    // reset timer again
    lda(Imm(0x7));
    sta(Abs(ScreenTimer));
    // move onto next task
    inc(Abs(ScreenRoutineTask));
}

int NoReset() {
    return 0;
}

int RenderAreaGraphics() {
    // store LSB of where we're at
    lda(Abs(CurrentColumnPos));
    anda(Imm(0x1));
    sta(Abs(0x5));
    // store vram buffer offset
    ldy(Abs(VRAM_Buffer2_Offset));
    sty(Abs(0x0));
    // get current name table address we're supposed to render
    lda(Abs(CurrentNTAddr_Low));
    sta(Abs(((VRAM_Buffer2) + (1)), y));
    lda(Abs(CurrentNTAddr_High));
    sta(Abs(VRAM_Buffer2, y));
    // store length byte of 26 here with d7 set
    lda(Imm(0x9a));
    // to increment by 32 (in columns)
    sta(Abs(((VRAM_Buffer2) + (2)), y));
    // init attribute row
    lda(Imm(0x0));
    sta(Abs(0x4));
    tax();
}

int DrawMTLoop() {
    // store init value of 0 or incremented offset for buffer
    stx(Abs(0x1));
    // get first metatile number, and mask out all but 2 MSB
    lda(Abs(MetatileBuffer, x));
    anda(Imm(0b11000000));
    // store attribute table bits here
    sta(Abs(0x3));
    // note that metatile format is:
    asl();
    // %xx000000 - attribute table bits,
    rol();
    // %00xxxxxx - metatile number
    rol();
    // rotate bits to d1-d0 and use as offset here
    tay();
    // get address to graphics table from here
    lda(Abs(offsetof(G, MetatileGraphics_Low), y));
    sta(Abs(0x6));
    lda(Abs(offsetof(G, MetatileGraphics_High), y));
    sta(Abs(0x7));
    // get metatile number again
    lda(Abs(MetatileBuffer, x));
    // multiply by 4 and use as tile offset
    asl();
    asl();
    sta(Abs(0x2));
    // get current task number for level processing and
    lda(Abs(AreaParserTaskNum));
    // mask out all but LSB, then invert LSB, multiply by 2
    anda(Imm(0b1));
    // to get the correct column position in the metatile,
    eor(Imm(0b1));
    // then add to the tile offset so we can draw either side
    asl();
    // of the metatiles
    adc(Abs(0x2));
    tay();
    // use vram buffer offset from before as X
    ldx(Abs(0x0));
    lda(IndY((0x6)));
    // get first tile number (top left or top right) and store
    sta(Abs(((VRAM_Buffer2) + (3)), x));
    iny();
    // now get the second (bottom left or bottom right) and store
    lda(IndY((0x6)));
    sta(Abs(((VRAM_Buffer2) + (4)), x));
    // get current attribute row
    ldy(Abs(0x4));
    // get LSB of current column where we're at, and
    lda(Abs(0x5));
    // branch if set (clear = left attrib, set = right)
    BNE(RightCheck);
    // get current row we're rendering
    lda(Abs(0x1));
    // branch if LSB set (clear = top left, set = bottom left)
    lsr();
    BCS(LLeft);
    // rotate attribute bits 3 to the left
    rol(Abs(0x3));
    // thus in d1-d0, for upper left square
    rol(Abs(0x3));
    rol(Abs(0x3));
    JMP(SetAttrib);
}

int RightCheck() {
    // get LSB of current row we're rendering
    lda(Abs(0x1));
    // branch if set (clear = top right, set = bottom right)
    lsr();
    BCS(NextMTRow);
    // shift attribute bits 4 to the right
    lsr(Abs(0x3));
    // thus in d3-d2, for upper right square
    lsr(Abs(0x3));
    lsr(Abs(0x3));
    lsr(Abs(0x3));
    JMP(SetAttrib);
}

int LLeft() {
    // shift attribute bits 2 to the right
    lsr(Abs(0x3));
    // thus in d5-d4 for lower left square
    lsr(Abs(0x3));
}

int NextMTRow() {
    // move onto next attribute row
    inc(Abs(0x4));
}

int SetAttrib() {
    // get previously saved bits from before
    lda(Abs(AttributeBuffer, y));
    // if any, and put new bits, if any, onto
    ora(Abs(0x3));
    // the old, and store
    sta(Abs(AttributeBuffer, y));
    // increment vram buffer offset by 2
    inc(Abs(0x0));
    inc(Abs(0x0));
    // get current gfx buffer row, and check for
    ldx(Abs(0x1));
    // the bottom of the screen
    inx();
    cpx(Imm(0xd));
    // if not there yet, loop back
    BCC(DrawMTLoop);
    // get current vram buffer offset, increment by 3
    ldy(Abs(0x0));
    // (for name table address and length bytes)
    iny();
    iny();
    iny();
    lda(Imm(0x0));
    // put null terminator at end of data for name table
    sta(Abs(VRAM_Buffer2, y));
    // store new buffer offset
    sty(Abs(VRAM_Buffer2_Offset));
    // increment name table address low
    inc(Abs(CurrentNTAddr_Low));
    // check current low byte
    lda(Abs(CurrentNTAddr_Low));
    // if no wraparound, just skip this part
    anda(Imm(0b11111));
    BNE(ExitDrawM);
    // if wraparound occurs, make sure low byte stays
    lda(Imm(0x80));
    // just under the status bar
    sta(Abs(CurrentNTAddr_Low));
    // and then invert d2 of the name table address high
    lda(Abs(CurrentNTAddr_High));
    // to move onto the next appropriate name table
    eor(Imm(0b100));
    sta(Abs(CurrentNTAddr_High));
}

int ExitDrawM() {
    // jump to set buffer to $0341 and leave
    JMP(SetVRAMCtrl);
}

int RenderAttributeTables() {
    // get low byte of next name table address
    lda(Abs(CurrentNTAddr_Low));
    // to be written to, mask out all but 5 LSB,
    anda(Imm(0b11111));
    // subtract four
    sec();
    sbc(Imm(0x4));
    // mask out bits again and store
    anda(Imm(0b11111));
    sta(Abs(0x1));
    // get high byte and branch if borrow not set
    lda(Abs(CurrentNTAddr_High));
    BCS(SetATHigh);
    // otherwise invert d2
    eor(Imm(0b100));
}

int SetATHigh() {
    // mask out all other bits
    anda(Imm(0b100));
    // add $2300 to the high byte and store
    ora(Imm(0x23));
    sta(Abs(0x0));
    // get low byte - 4, divide by 4, add offset for
    lda(Abs(0x1));
    // attribute table and store
    lsr();
    lsr();
    // we should now have the appropriate block of
    adc(Imm(0xc0));
    // attribute table in our temp address
    sta(Abs(0x1));
    ldx(Imm(0x0));
    // get buffer offset
    ldy(Abs(VRAM_Buffer2_Offset));
}

int AttribLoop() {
    lda(Abs(0x0));
    // store high byte of attribute table address
    sta(Abs(VRAM_Buffer2, y));
    lda(Abs(0x1));
    // get low byte, add 8 because we want to start
    clc();
    // below the status bar, and store
    adc(Imm(0x8));
    sta(Abs(((VRAM_Buffer2) + (1)), y));
    // also store in temp again
    sta(Abs(0x1));
    // fetch current attribute table byte and store
    lda(Abs(AttributeBuffer, x));
    // in the buffer
    sta(Abs(((VRAM_Buffer2) + (3)), y));
    lda(Imm(0x1));
    // store length of 1 in buffer
    sta(Abs(((VRAM_Buffer2) + (2)), y));
    lsr();
    // clear current byte in attribute buffer
    sta(Abs(AttributeBuffer, x));
    // increment buffer offset by 4 bytes
    iny();
    iny();
    iny();
    iny();
    // increment attribute offset and check to see
    inx();
    // if we're at the end yet
    cpx(Imm(0x7));
    BCC(AttribLoop);
    // put null terminator at the end
    sta(Abs(VRAM_Buffer2, y));
    // store offset in case we want to do any more
    sty(Abs(VRAM_Buffer2_Offset));
}

int SetVRAMCtrl() {
    lda(Imm(0x6));
    // set buffer to $0341 and leave
    sta(Abs(VRAM_Buffer_AddrCtrl));
    return 0;
}

int ColorRotation() {
    // get frame counter
    lda(Abs(FrameCounter));
    // mask out all but three LSB
    anda(Imm(0x7));
    // branch if not set to zero to do this every eighth frame
    BNE(ExitColorRot);
    // check vram buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    cpx(Imm(0x31));
    // if offset over 48 bytes, branch to leave
    BCS(ExitColorRot);
    // otherwise use frame counter's 3 LSB as offset here
    tay();
}

int GetBlankPal() {
    // get blank palette for palette 3
    lda(Abs(offsetof(G, BlankPalette), y));
    // store it in the vram buffer
    sta(Abs(VRAM_Buffer1, x));
    // increment offsets
    inx();
    iny();
    cpy(Imm(0x8));
    // do this until all bytes are copied
    BCC(GetBlankPal);
    // get current vram buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    lda(Imm(0x3));
    // set counter here
    sta(Abs(0x0));
    // get area type
    lda(Abs(AreaType));
    // multiply by 4 to get proper offset
    asl();
    asl();
    // save as offset here
    tay();
}

int GetAreaPal() {
    // fetch palette to be written based on area type
    lda(Abs(offsetof(G, Palette3Data), y));
    // store it to overwrite blank palette in vram buffer
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    iny();
    inx();
    // decrement counter
    dec(Abs(0x0));
    // do this until the palette is all copied
    BPL(GetAreaPal);
    // get current vram buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    // get color cycling offset
    ldy(Abs(ColorRotateOffset));
    lda(Abs(offsetof(G, ColorRotatePalette), y));
    // get and store current color in second slot of palette
    sta(Abs(((VRAM_Buffer1) + (4)), x));
    lda(Abs(VRAM_Buffer1_Offset));
    // add seven bytes to vram buffer offset
    clc();
    adc(Imm(0x7));
    sta(Abs(VRAM_Buffer1_Offset));
    // increment color cycling offset
    inc(Abs(ColorRotateOffset));
    lda(Abs(ColorRotateOffset));
    // check to see if it's still in range
    cmp(Imm(0x6));
    // if so, branch to leave
    BCC(ExitColorRot);
    lda(Imm(0x0));
    // otherwise, init to keep it in range
    sta(Abs(ColorRotateOffset));
}

int ExitColorRot() {
    // leave
    return 0;
}

int RemoveCoin_Axe() {
    // set low byte so offset points to $0341
    ldy(Imm(0x41));
    // load offset for default blank metatile
    lda(Imm(0x3));
    // check area type
    ldx(Abs(AreaType));
    // if not water type, use offset
    BNE(WriteBlankMT);
    // otherwise load offset for blank metatile used in water
    lda(Imm(0x4));
}

int WriteBlankMT() {
    // do a sub to write blank metatile to vram buffer
    JSR(PutBlockMetatile);
    lda(Imm(0x6));
    // set vram address controller to $0341 and leave
    sta(Abs(VRAM_Buffer_AddrCtrl));
    return 0;
}

int ReplaceBlockMetatile() {
    // write metatile to vram buffer to replace block object
    JSR(WriteBlockMetatile);
    // increment unused counter (residual code)
    inc(Abs(Block_ResidualCounter));
    // decrement flag (residual code)
    dec(Abs(Block_RepFlag, x));
    // leave
    return 0;
}

int DestroyBlockMetatile() {
    // force blank metatile if branched/jumped to this point
    lda(Imm(0x0));
}

int WriteBlockMetatile() {
    // load offset for blank metatile
    ldy(Imm(0x3));
    // check contents of A for blank metatile
    cmp(Imm(0x0));
    // branch if found (unconditional if branched from 8a6b)
    BEQ(UseBOffset);
    // load offset for brick metatile w/ line
    ldy(Imm(0x0));
    cmp(Imm(0x58));
    // use offset if metatile is brick with coins (w/ line)
    BEQ(UseBOffset);
    cmp(Imm(0x51));
    // use offset if metatile is breakable brick w/ line
    BEQ(UseBOffset);
    // increment offset for brick metatile w/o line
    iny();
    cmp(Imm(0x5d));
    // use offset if metatile is brick with coins (w/o line)
    BEQ(UseBOffset);
    cmp(Imm(0x52));
    // use offset if metatile is breakable brick w/o line
    BEQ(UseBOffset);
    // if any other metatile, increment offset for empty block
    iny();
}

int UseBOffset() {
    // put Y in A
    tya();
    // get vram buffer offset
    ldy(Abs(VRAM_Buffer1_Offset));
    // move onto next byte
    iny();
    // get appropriate block data and write to vram buffer
    JSR(PutBlockMetatile);
}

int MoveVOffset() {
    // decrement vram buffer offset
    dey();
    // add 10 bytes to it
    tya();
    clc();
    adc(Imm(10));
    // branch to store as new vram buffer offset
    JMP(SetVRAMOffset);
}

int PutBlockMetatile() {
    // store control bit from SprDataOffset_Ctrl
    stx(Abs(0x0));
    // store vram buffer offset for next byte
    sty(Abs(0x1));
    asl();
    // multiply A by four and use as X
    asl();
    tax();
    // load high byte for name table 0
    ldy(Imm(0x20));
    // get low byte of block buffer pointer
    lda(Abs(0x6));
    // check to see if we're on odd-page block buffer
    cmp(Imm(0xd0));
    // if not, use current high byte
    BCC(SaveHAdder);
    // otherwise load high byte for name table 1
    ldy(Imm(0x24));
}

int SaveHAdder() {
    // save high byte here
    sty(Abs(0x3));
    // mask out high nybble of block buffer pointer
    anda(Imm(0xf));
    // multiply by 2 to get appropriate name table low byte
    asl();
    // and then store it here
    sta(Abs(0x4));
    lda(Imm(0x0));
    // initialize temp high byte
    sta(Abs(0x5));
    // get vertical high nybble offset used in block buffer routine
    lda(Abs(0x2));
    clc();
    // add 32 pixels for the status bar
    adc(Imm(0x20));
    asl();
    // shift and rotate d7 onto d0 and d6 into carry
    rol(Abs(0x5));
    asl();
    // shift and rotate d6 onto d0 and d5 into carry
    rol(Abs(0x5));
    // add low byte of name table and carry to vertical high nybble
    adc(Abs(0x4));
    // and store here
    sta(Abs(0x4));
    // get whatever was in d7 and d6 of vertical high nybble
    lda(Abs(0x5));
    // add carry
    adc(Imm(0x0));
    clc();
    // then add high byte of name table
    adc(Abs(0x3));
    // store here
    sta(Abs(0x5));
    // get vram buffer offset to be used
    ldy(Abs(0x1));
}

int RemBridge() {
    // write top left and top right
    lda(Abs(offsetof(G, BlockGfxData), x));
    // tile numbers into first spot
    sta(Abs(((VRAM_Buffer1) + (2)), y));
    lda(Abs(((offsetof(G, BlockGfxData)) + (1)), x));
    sta(Abs(((VRAM_Buffer1) + (3)), y));
    // write bottom left and bottom
    lda(Abs(((offsetof(G, BlockGfxData)) + (2)), x));
    // right tiles numbers into
    sta(Abs(((VRAM_Buffer1) + (7)), y));
    // second spot
    lda(Abs(((offsetof(G, BlockGfxData)) + (3)), x));
    sta(Abs(((VRAM_Buffer1) + (8)), y));
    lda(Abs(0x4));
    // write low byte of name table
    sta(Abs(VRAM_Buffer1, y));
    // into first slot as read
    clc();
    // add 32 bytes to value
    adc(Imm(0x20));
    // write low byte of name table
    sta(Abs(((VRAM_Buffer1) + (5)), y));
    // plus 32 bytes into second slot
    lda(Abs(0x5));
    // write high byte of name
    sta(Abs(((VRAM_Buffer1) - (1)), y));
    // table address to both slots
    sta(Abs(((VRAM_Buffer1) + (4)), y));
    lda(Imm(0x2));
    // put length of 2 in
    sta(Abs(((VRAM_Buffer1) + (1)), y));
    // both slots
    sta(Abs(((VRAM_Buffer1) + (6)), y));
    lda(Imm(0x0));
    // put null terminator at end
    sta(Abs(((VRAM_Buffer1) + (9)), y));
    // get offset control bit here
    ldx(Abs(0x0));
    // and leave
    return 0;
}

int InitializeNameTables() {
    // reset flip-flop
    lda(Abs(PPU_STATUS));
    // load mirror of ppu reg $2000
    lda(Abs(Mirror_PPU_CTRL_REG1));
    // set sprites for first 4k and background for second 4k
    ora(Imm(0b10000));
    // clear rest of lower nybble, leave higher alone
    anda(Imm(0b11110000));
    JSR(WritePPUReg1);
    // set vram address to start of name table 1
    lda(Imm(0x24));
    JSR(WriteNTAddr);
    // and then set it to name table 0
    lda(Imm(0x20));
}

int WriteNTAddr() {
    sta(Abs(PPU_ADDRESS));
    lda(Imm(0x0));
    sta(Abs(PPU_ADDRESS));
    // clear name table with blank tile #24
    ldx(Imm(0x4));
    ldy(Imm(0xc0));
    lda(Imm(0x24));
}

int InitNTLoop() {
    // count out exactly 768 tiles
    sta(Abs(PPU_DATA));
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    // now to clear the attribute table (with zero this time)
    ldy(Imm(64));
    txa();
    // init vram buffer 1 offset
    sta(Abs(VRAM_Buffer1_Offset));
    // init vram buffer 1
    sta(Abs(VRAM_Buffer1));
}

int InitATLoop() {
    sta(Abs(PPU_DATA));
    dey();
    BNE(InitATLoop);
    // reset scroll variables
    sta(Abs(HorizontalScroll));
    sta(Abs(VerticalScroll));
    // initialize scroll registers to zero
    JMP(InitScroll);
}

int ReadJoypads() {
    // reset and clear strobe of joypad ports
    lda(Imm(0x1));
    sta(Abs(JOYPAD_PORT));
    lsr();
    // start with joypad 1's port
    tax();
    sta(Abs(JOYPAD_PORT));
    JSR(ReadPortBits);
    // increment for joypad 2's port
    inx();
}

int ReadPortBits() {
    ldy(Imm(0x8));
}

int PortLoop() {
    // push previous bit onto stack
    pha();
    // read current bit on joypad port
    lda(Abs(JOYPAD_PORT, x));
    // check d1 and d0 of port output
    sta(Abs(0x0));
    // this is necessary on the old
    lsr();
    // famicom systems in japan
    ora(Abs(0x0));
    lsr();
    // read bits from stack
    pla();
    // rotate bit from carry flag
    rol();
    dey();
    // count down bits left
    BNE(PortLoop);
    // save controller status here always
    sta(Abs(SavedJoypadBits, x));
    pha();
    // check for select or start
    anda(Imm(0b110000));
    // if neither saved state nor current state
    anda(Abs(JoypadBitMask, x));
    // have any of these two set, branch
    BEQ(Save8Bits);
    pla();
    // otherwise store without select
    anda(Imm(0b11001111));
    // or start bits and leave
    sta(Abs(SavedJoypadBits, x));
    return 0;
}

int Save8Bits() {
    pla();
    // save with all bits in another place and leave
    sta(Abs(JoypadBitMask, x));
    return 0;
}

int WriteBufferToScreen() {
    // store high byte of vram address
    sta(Abs(PPU_ADDRESS));
    iny();
    // load next byte (second)
    lda(IndY((0x0)));
    // store low byte of vram address
    sta(Abs(PPU_ADDRESS));
    iny();
    // load next byte (third)
    lda(IndY((0x0)));
    // shift to left and save in stack
    asl();
    pha();
    // load mirror of $2000,
    lda(Abs(Mirror_PPU_CTRL_REG1));
    // set ppu to increment by 32 by default
    ora(Imm(0b100));
    // if d7 of third byte was clear, ppu will
    BCS(SetupWrites);
    // only increment by 1
    anda(Imm(0b11111011));
}

int SetupWrites() {
    // write to register
    JSR(WritePPUReg1);
    // pull from stack and shift to left again
    pla();
    asl();
    // if d6 of third byte was clear, do not repeat byte
    BCC(GetLength);
    // otherwise set d1 and increment Y
    ora(Imm(0b10));
    iny();
}

int GetLength() {
    // shift back to the right to get proper length
    lsr();
    // note that d1 will now be in carry
    lsr();
    tax();
}

int OutputToVRAM() {
    // if carry set, repeat loading the same byte
    BCS(RepeatByte);
    // otherwise increment Y to load next byte
    iny();
}

int RepeatByte() {
    // load more data from buffer and write to vram
    lda(IndY((0x0)));
    sta(Abs(PPU_DATA));
    // done writing?
    dex();
    BNE(OutputToVRAM);
    sec();
    tya();
    // add end length plus one to the indirect at $00
    adc(Abs(0x0));
    // to allow this routine to read another set of updates
    sta(Abs(0x0));
    lda(Imm(0x0));
    adc(Abs(0x1));
    sta(Abs(0x1));
    // sets vram address to $3f00
    lda(Imm(0x3f));
    sta(Abs(PPU_ADDRESS));
    lda(Imm(0x0));
    sta(Abs(PPU_ADDRESS));
    // then reinitializes it for some reason
    sta(Abs(PPU_ADDRESS));
    sta(Abs(PPU_ADDRESS));
}

int UpdateScreen() {
    // reset flip-flop
    ldx(Abs(PPU_STATUS));
    // load first byte from indirect as a pointer
    ldy(Imm(0x0));
    lda(IndY((0x0)));
    // if byte is zero we have no further updates to make here
    BNE(WriteBufferToScreen);
}

int InitScroll() {
    // store contents of A into scroll registers
    sta(Abs(PPU_SCROLL_REG));
    // and end whatever subroutine led us here
    sta(Abs(PPU_SCROLL_REG));
    return 0;
}

int WritePPUReg1() {
    // write contents of A to PPU register 1
    sta(Abs(PPU_CTRL_REG1));
    // and its mirror
    sta(Abs(Mirror_PPU_CTRL_REG1));
    return 0;
}

int PrintStatusBarNumbers() {
    // store player-specific offset
    sta(Abs(0x0));
    // use first nybble to print the coin display
    JSR(OutputNumbers);
    // move high nybble to low
    lda(Abs(0x0));
    // and print to score display
    lsr();
    lsr();
    lsr();
    lsr();
}

int OutputNumbers() {
    // add 1 to low nybble
    clc();
    adc(Imm(0x1));
    // mask out high nybble
    anda(Imm(0b1111));
    cmp(Imm(0x6));
    BCS(ExitOutputN);
    // save incremented value to stack for now and
    pha();
    // shift to left and use as offset
    asl();
    tay();
    // get current buffer pointer
    ldx(Abs(VRAM_Buffer1_Offset));
    // put at top of screen by default
    lda(Imm(0x20));
    // are we writing top score on title screen?
    cpy(Imm(0x0));
    BNE(SetupNums);
    // if so, put further down on the screen
    lda(Imm(0x22));
}

int SetupNums() {
    sta(Abs(VRAM_Buffer1, x));
    // write low vram address and length of thing
    lda(Abs(offsetof(G, StatusBarData), y));
    // we're printing to the buffer
    sta(Abs(((VRAM_Buffer1) + (1)), x));
    lda(Abs(((offsetof(G, StatusBarData)) + (1)), y));
    sta(Abs(((VRAM_Buffer1) + (2)), x));
    // save length byte in counter
    sta(Abs(0x3));
    // and buffer pointer elsewhere for now
    stx(Abs(0x2));
    // pull original incremented value from stack
    pla();
    tax();
    // load offset to value we want to write
    lda(Abs(offsetof(G, StatusBarOffset), x));
    sec();
    // subtract from length byte we read before
    sbc(Abs(((offsetof(G, StatusBarData)) + (1)), y));
    // use value as offset to display digits
    tay();
    ldx(Abs(0x2));
}

int DigitPLoop() {
    // write digits to the buffer
    lda(Abs(DisplayDigits, y));
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    inx();
    iny();
    // do this until all the digits are written
    dec(Abs(0x3));
    BNE(DigitPLoop);
    // put null terminator at end
    lda(Imm(0x0));
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    // increment buffer pointer by 3
    inx();
    inx();
    inx();
    // store it in case we want to use it again
    stx(Abs(VRAM_Buffer1_Offset));
}

int ExitOutputN() {
    return 0;
}

int DigitsMathRoutine() {
    // check mode of operation
    lda(Abs(OperMode));
    cmp(Imm(TitleScreenModeValue));
    // if in title screen mode, branch to lock score
    BEQ(EraseDMods);
    ldx(Imm(0x5));
}

int AddModLoop() {
    // load digit amount to increment
    lda(Abs(DigitModifier, x));
    clc();
    // add to current digit
    adc(Abs(DisplayDigits, y));
    // if result is a negative number, branch to subtract
    BMI(BorrowOne);
    cmp(Imm(10));
    // if digit greater than $09, branch to add
    BCS(CarryOne);
}

int StoreNewD() {
    // store as new score or game timer digit
    sta(Abs(DisplayDigits, y));
    // move onto next digits in score or game timer
    dey();
    // and digit amounts to increment
    dex();
    // loop back if we're not done yet
    BPL(AddModLoop);
}

int EraseDMods() {
    // store zero here
    lda(Imm(0x0));
    // start with the last digit
    ldx(Imm(0x6));
}

int EraseMLoop() {
    // initialize the digit amounts to increment
    sta(Abs(((DigitModifier) - (1)), x));
    dex();
    // do this until they're all reset, then leave
    BPL(EraseMLoop);
    return 0;
}

int BorrowOne() {
    // decrement the previous digit, then put $09 in
    dec(Abs(((DigitModifier) - (1)), x));
    // the game timer digit we're currently on to "borrow
    lda(Imm(0x9));
    // the one", then do an unconditional branch back
    BNE(StoreNewD);
}

int CarryOne() {
    // subtract ten from our digit to make it a
    sec();
    // proper BCD number, then increment the digit
    sbc(Imm(10));
    // preceding current digit to "carry the one" properly
    inc(Abs(((DigitModifier) - (1)), x));
    // go back to just after we branched here
    JMP(StoreNewD);
}

int UpdateTopScore() {
    // start with mario's score
    ldx(Imm(0x5));
    JSR(TopScoreCheck);
    // now do luigi's score
    ldx(Imm(0xb));
}

int TopScoreCheck() {
    // start with the lowest digit
    ldy(Imm(0x5));
    sec();
}

int GetScoreDiff() {
    // subtract each player digit from each high score digit
    lda(Abs(PlayerScoreDisplay, x));
    // from lowest to highest, if any top score digit exceeds
    sbc(Abs(TopScoreDisplay, y));
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
}

int CopyScore() {
    // store player's score digits into high score memory area
    lda(Abs(PlayerScoreDisplay, x));
    sta(Abs(TopScoreDisplay, y));
    inx();
    iny();
    // do this until we have stored them all
    cpy(Imm(0x6));
    BCC(CopyScore);
}

int NoTopSc() {
    return 0;
}

int InitializeGame() {
    // clear all memory as in initialization procedure,
    ldy(Imm(0x6f));
    // but this time, clear only as far as $076f
    JSR(InitializeMemory);
    ldy(Imm(0x1f));
}

int ClrSndLoop() {
    // clear out memory used
    sta(Abs(SoundMemory, y));
    // by the sound engines
    dey();
    BPL(ClrSndLoop);
    // set demo timer
    lda(Imm(0x18));
    sta(Abs(DemoTimer));
    JSR(LoadAreaPointer);
}

int InitializeArea() {
    // clear all memory again, only as far as $074b
    ldy(Imm(0x4b));
    // this is only necessary if branching from
    JSR(InitializeMemory);
    ldx(Imm(0x21));
    lda(Imm(0x0));
}

int ClrTimersLoop() {
    // clear out memory between
    sta(Abs(Timers, x));
    // $0780 and $07a1
    dex();
    BPL(ClrTimersLoop);
    lda(Abs(HalfwayPage));
    // if AltEntranceControl not set, use halfway page, if any found
    ldy(Abs(AltEntranceControl));
    BEQ(StartPage);
    // otherwise use saved entry page number here
    lda(Abs(EntrancePage));
}

int StartPage() {
    // set as value here
    sta(Abs(ScreenLeft_PageLoc));
    // also set as current page
    sta(Abs(CurrentPageLoc));
    // set flag here if halfway page or saved entry page number found
    sta(Abs(BackloadingFlag));
    // get pixel coordinates for screen borders
    JSR(GetScreenPosition);
    // if on odd numbered page, use $2480 as start of rendering
    ldy(Imm(0x20));
    // otherwise use $2080, this address used later as name table
    anda(Imm(0b1));
    // address for rendering of game area
    BEQ(SetInitNTHigh);
    ldy(Imm(0x24));
}

int SetInitNTHigh() {
    // store name table address
    sty(Abs(CurrentNTAddr_High));
    ldy(Imm(0x80));
    sty(Abs(CurrentNTAddr_Low));
    // store LSB of page number in high nybble
    asl();
    // of block buffer column position
    asl();
    asl();
    asl();
    sta(Abs(BlockBufferColumnPos));
    // set area object lengths for all empty
    dec(Abs(AreaObjectLength));
    dec(Abs(((AreaObjectLength) + (1))));
    dec(Abs(((AreaObjectLength) + (2))));
    // set value for renderer to update 12 column sets
    lda(Imm(0xb));
    // 12 column sets = 24 metatile columns = 1 1/2 screens
    sta(Abs(ColumnSets));
    // get enemy and level addresses and load header
    JSR(GetAreaDataAddrs);
    // check to see if primary hard mode has been activated
    lda(Abs(PrimaryHardMode));
    // if so, activate the secondary no matter where we're at
    BNE(SetSecHard);
    // otherwise check world number
    lda(Abs(WorldNumber));
    // if less than 5, do not activate secondary
    cmp(Imm(World5));
    BCC(CheckHalfway);
    // if not equal to, then world > 5, thus activate
    BNE(SetSecHard);
    // otherwise, world 5, so check level number
    lda(Abs(LevelNumber));
    // if 1 or 2, do not set secondary hard mode flag
    cmp(Imm(Level3));
    BCC(CheckHalfway);
}

int SetSecHard() {
    // set secondary hard mode flag for areas 5-3 and beyond
    inc(Abs(SecondaryHardMode));
}

int CheckHalfway() {
    lda(Abs(HalfwayPage));
    BEQ(DoneInitArea);
    // if halfway page set, overwrite start position from header
    lda(Imm(0x2));
    sta(Abs(PlayerEntranceCtrl));
}

int DoneInitArea() {
    // silence music
    lda(Imm(Silence));
    sta(Abs(AreaMusicQueue));
    // disable screen output
    lda(Imm(0x1));
    sta(Abs(DisableScreenFlag));
    // increment one of the modes
    inc(Abs(OperMode_Task));
    return 0;
}

int PrimaryGameSetup() {
    lda(Imm(0x1));
    // set flag to load game timer from header
    sta(Abs(FetchNewGameTimerFlag));
    // set player's size to small
    sta(Abs(PlayerSize));
    lda(Imm(0x2));
    // give each player three lives
    sta(Abs(NumberofLives));
    sta(Abs(OffScr_NumberofLives));
}

int SecondaryGameSetup() {
    lda(Imm(0x0));
    // enable screen output
    sta(Abs(DisableScreenFlag));
    tay();
}

int ClearVRLoop() {
    // clear buffer at $0300-$03ff
    sta(Abs(((VRAM_Buffer1) - (1)), y));
    iny();
    BNE(ClearVRLoop);
    // clear game timer exp flag
    sta(Abs(GameTimerExpiredFlag));
    // clear skip lives display flag
    sta(Abs(DisableIntermediate));
    // clear value here
    sta(Abs(BackloadingFlag));
    lda(Imm(0xff));
    // initialize balance platform assignment flag
    sta(Abs(BalPlatformAlignment));
    // get left side page location
    lda(Abs(ScreenLeft_PageLoc));
    // shift LSB of ppu register #1 mirror out
    lsr(Abs(Mirror_PPU_CTRL_REG1));
    // mask out all but LSB of page location
    anda(Imm(0x1));
    // rotate LSB of page location into carry then onto mirror
    ror();
    // this is to set the proper PPU name table
    rol(Abs(Mirror_PPU_CTRL_REG1));
    // load proper music into queue
    JSR(GetAreaMusic);
    // load sprite shuffle amounts to be used later
    lda(Imm(0x38));
    sta(Abs(((SprShuffleAmt) + (2))));
    lda(Imm(0x48));
    sta(Abs(((SprShuffleAmt) + (1))));
    lda(Imm(0x58));
    sta(Abs(SprShuffleAmt));
    // load default OAM offsets into $06e4-$06f2
    ldx(Imm(0xe));
}

int ShufAmtLoop() {
    lda(Abs(offsetof(G, DefaultSprOffsets), x));
    sta(Abs(SprDataOffset, x));
    // do this until they're all set
    dex();
    BPL(ShufAmtLoop);
    // set up sprite #0
    ldy(Imm(0x3));
}

int ISpr0Loop() {
    lda(Abs(offsetof(G, Sprite0Data), y));
    sta(Abs(Sprite_Data, y));
    dey();
    BPL(ISpr0Loop);
    // these jsrs doesn't do anything useful
    JSR(DoNothing2);
    JSR(DoNothing1);
    // set sprite #0 check flag
    inc(Abs(Sprite0HitDetectFlag));
    // increment to next task
    inc(Abs(OperMode_Task));
    return 0;
}

int InitializeMemory() {
    // set initial high byte to $0700-$07ff
    ldx(Imm(0x7));
    // set initial low byte to start of page (at $00 of page)
    lda(Imm(0x0));
    sta(Abs(0x6));
}

int InitPageLoop() {
    stx(Abs(0x7));
}

int InitByteLoop() {
    // check to see if we're on the stack ($0100-$01ff)
    cpx(Imm(0x1));
    // if not, go ahead anyway
    BNE(InitByte);
    // otherwise, check to see if we're at $0160-$01ff
    cpy(Imm(0x60));
    // if so, skip write
    BCS(SkipByte);
}

int InitByte() {
    // otherwise, initialize byte with current low byte in Y
    sta(IndY((0x6)));
}

int SkipByte() {
    dey();
    // do this until all bytes in page have been erased
    cpy(Imm(0xff));
    BNE(InitByteLoop);
    // go onto the next page
    dex();
    // do this until all pages of memory have been erased
    BPL(InitPageLoop);
    return 0;
}

int GetAreaMusic() {
    // if in title screen mode, leave
    lda(Abs(OperMode));
    BEQ(ExitGetM);
    // check for specific alternate mode of entry
    lda(Abs(AltEntranceControl));
    // if found, branch without checking starting position
    cmp(Imm(0x2));
    // from area object data header
    BEQ(ChkAreaType);
    // select music for pipe intro scene by default
    ldy(Imm(0x5));
    // check value from level header for certain values
    lda(Abs(PlayerEntranceCtrl));
    cmp(Imm(0x6));
    // load music for pipe intro scene if header
    BEQ(StoreMusic);
    // start position either value $06 or $07
    cmp(Imm(0x7));
    BEQ(StoreMusic);
}

int ChkAreaType() {
    // load area type as offset for music bit
    ldy(Abs(AreaType));
    lda(Abs(CloudTypeOverride));
    // check for cloud type override
    BEQ(StoreMusic);
    // select music for cloud type level if found
    ldy(Imm(0x4));
}

int StoreMusic() {
    // otherwise select appropriate music for level type
    lda(Abs(offsetof(G, MusicSelectData), y));
    // store in queue and leave
    sta(Abs(AreaMusicQueue));
}

int ExitGetM() {
    return 0;
}

int Entrance_GameTimerSetup() {
    // set current page for area objects
    lda(Abs(ScreenLeft_PageLoc));
    // as page location for player
    sta(Abs(Player_PageLoc));
    // store value here
    lda(Imm(0x28));
    // for fractional movement downwards if necessary
    sta(Abs(VerticalForceDown));
    // set high byte of player position and
    lda(Imm(0x1));
    // set facing direction so that player faces right
    sta(Abs(PlayerFacingDir));
    sta(Abs(Player_Y_HighPos));
    // set player state to on the ground by default
    lda(Imm(0x0));
    sta(Abs(Player_State));
    // initialize player's collision bits
    dec(Abs(Player_CollisionBits));
    // initialize halfway page
    ldy(Imm(0x0));
    sty(Abs(HalfwayPage));
    // check area type
    lda(Abs(AreaType));
    // if water type, set swimming flag, otherwise do not set
    BNE(ChkStPos);
    iny();
}

int ChkStPos() {
    sty(Abs(SwimmingFlag));
    // get starting position loaded from header
    ldx(Abs(PlayerEntranceCtrl));
    // check alternate mode of entry flag for 0 or 1
    ldy(Abs(AltEntranceControl));
    BEQ(SetStPos);
    cpy(Imm(0x1));
    BEQ(SetStPos);
    // if not 0 or 1, override $0710 with new offset in X
    ldx(Abs(((offsetof(G, AltYPosOffset)) - (2)), y));
}

int SetStPos() {
    // load appropriate horizontal position
    lda(Abs(offsetof(G, PlayerStarting_X_Pos), y));
    // and vertical positions for the player, using
    sta(Abs(Player_X_Position));
    // AltEntranceControl as offset for horizontal and either $0710
    lda(Abs(offsetof(G, PlayerStarting_Y_Pos), x));
    // or value that overwrote $0710 as offset for vertical
    sta(Abs(Player_Y_Position));
    lda(Abs(offsetof(G, PlayerBGPriorityData), x));
    // set player sprite attributes using offset in X
    sta(Abs(Player_SprAttrib));
    // get appropriate player palette
    JSR(GetPlayerColors);
    // get timer control value from header
    ldy(Abs(GameTimerSetting));
    // if set to zero, branch (do not use dummy byte for this)
    BEQ(ChkOverR);
    // do we need to set the game timer? if not, use
    lda(Abs(FetchNewGameTimerFlag));
    // old game timer setting
    BEQ(ChkOverR);
    // if game timer is set and game timer flag is also set,
    lda(Abs(offsetof(G, GameTimerData), y));
    // use value of game timer control for first digit of game timer
    sta(Abs(GameTimerDisplay));
    lda(Imm(0x1));
    // set last digit of game timer to 1
    sta(Abs(((GameTimerDisplay) + (2))));
    lsr();
    // set second digit of game timer
    sta(Abs(((GameTimerDisplay) + (1))));
    // clear flag for game timer reset
    sta(Abs(FetchNewGameTimerFlag));
    // clear star mario timer
    sta(Abs(StarInvincibleTimer));
}

int ChkOverR() {
    // if controller bits not set, branch to skip this part
    ldy(Abs(JoypadOverride));
    BEQ(ChkSwimE);
    // set player state to climbing
    lda(Imm(0x3));
    sta(Abs(Player_State));
    // set offset for first slot, for block object
    ldx(Imm(0x0));
    JSR(InitBlock_XY_Pos);
    // set vertical coordinate for block object
    lda(Imm(0xf0));
    sta(Abs(Block_Y_Position));
    // set offset in X for last enemy object buffer slot
    ldx(Imm(0x5));
    // set offset in Y for object coordinates used earlier
    ldy(Imm(0x0));
    // do a sub to grow vine
    JSR(Setup_Vine);
}

int ChkSwimE() {
    // if level not water-type,
    ldy(Abs(AreaType));
    // skip this subroutine
    BNE(SetPESub);
    // otherwise, execute sub to set up air bubbles
    JSR(SetupBubble);
}

int SetPESub() {
    // set to run player entrance subroutine
    lda(Imm(0x7));
    // on the next frame of game engine
    sta(Abs(GameEngineSubroutine));
    return 0;
}

int PlayerLoseLife() {
    // disable screen and sprite 0 check
    inc(Abs(DisableScreenFlag));
    lda(Imm(0x0));
    sta(Abs(Sprite0HitDetectFlag));
    // silence music
    lda(Imm(Silence));
    sta(Abs(EventMusicQueue));
    // take one life from player
    dec(Abs(NumberofLives));
    // if player still has lives, branch
    BPL(StillInGame);
    lda(Imm(0x0));
    // initialize mode task,
    sta(Abs(OperMode_Task));
    // switch to game over mode
    lda(Imm(GameOverModeValue));
    // and leave
    sta(Abs(OperMode));
    return 0;
}

int StillInGame() {
    // multiply world number by 2 and use
    lda(Abs(WorldNumber));
    // as offset
    asl();
    tax();
    // if in area -3 or -4, increment
    lda(Abs(LevelNumber));
    // offset by one byte, otherwise
    anda(Imm(0x2));
    // leave offset alone
    BEQ(GetHalfway);
    inx();
}

int GetHalfway() {
    // get halfway page number with offset
    ldy(Abs(offsetof(G, HalfwayPageNybbles), x));
    // check area number's LSB
    lda(Abs(LevelNumber));
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
}

int MaskHPNyb() {
    // mask out all but lower nybble
    anda(Imm(0b1111));
    cmp(Abs(ScreenLeft_PageLoc));
    // left side of screen must be at the halfway page,
    BEQ(SetHalfway);
    // otherwise player must start at the
    BCC(SetHalfway);
    // beginning of the level
    lda(Imm(0x0));
}

int SetHalfway() {
    // store as halfway page for player
    sta(Abs(HalfwayPage));
    // switch players around if 2-player game
    JSR(TransposePlayers);
    // continue the game
    JMP(ContinueGame);
}

int GameOverMode() {
    lda(Abs(OperMode_Task));
    static JUMP_ENTRY jumptable[3] = {
        SetupGameOver,
        ScreenRoutines,
        RunGameOver,
    };
    JMP(jumptable[a.read()]);
}

int SetupGameOver() {
    // reset screen routine task control for title screen, game,
    lda(Imm(0x0));
    // and game over modes
    sta(Abs(ScreenRoutineTask));
    // disable sprite 0 check
    sta(Abs(Sprite0HitDetectFlag));
    lda(Imm(GameOverMusic));
    // put game over music in secondary queue
    sta(Abs(EventMusicQueue));
    // disable screen output
    inc(Abs(DisableScreenFlag));
    // set secondary mode to 1
    inc(Abs(OperMode_Task));
    return 0;
}

int RunGameOver() {
    // reenable screen
    lda(Imm(0x0));
    sta(Abs(DisableScreenFlag));
    // check controller for start pressed
    lda(Abs(SavedJoypad1Bits));
    anda(Imm(Start_Button));
    BNE(TerminateGame);
    // if not pressed, wait for
    lda(Abs(ScreenTimer));
    // screen timer to expire
    BNE(GameIsOn);
}

int TerminateGame() {
    // silence music
    lda(Imm(Silence));
    sta(Abs(EventMusicQueue));
    // check if other player can keep
    JSR(TransposePlayers);
    // going, and do so if possible
    BCC(ContinueGame);
    // otherwise put world number of current
    lda(Abs(WorldNumber));
    // player into secret continue function variable
    sta(Abs(ContinueWorld));
    lda(Imm(0x0));
    // residual ASL instruction
    asl();
    // reset all modes to title screen and
    sta(Abs(OperMode_Task));
    // leave
    sta(Abs(ScreenTimer));
    sta(Abs(OperMode));
    return 0;
}

int ContinueGame() {
    // update level pointer with
    JSR(LoadAreaPointer);
    // actual world and area numbers, then
    lda(Imm(0x1));
    // reset player's size, status, and
    sta(Abs(PlayerSize));
    // set game timer flag to reload
    inc(Abs(FetchNewGameTimerFlag));
    // game timer from header
    lda(Imm(0x0));
    // also set flag for timers to count again
    sta(Abs(TimerControl));
    sta(Abs(PlayerStatus));
    // reset task for game core
    sta(Abs(GameEngineSubroutine));
    // set modes and leave
    sta(Abs(OperMode_Task));
    // if in game over mode, switch back to
    lda(Imm(0x1));
    // game mode, because game is still on
    sta(Abs(OperMode));
}

int GameIsOn() {
    return 0;
}

int TransposePlayers() {
    // set carry flag by default to end game
    sec();
    // if only a 1 player game, leave
    lda(Abs(NumberOfPlayers));
    BEQ(ExTrans);
    // does offscreen player have any lives left?
    lda(Abs(OffScr_NumberofLives));
    // branch if not
    BMI(ExTrans);
    // invert bit to update
    lda(Abs(CurrentPlayer));
    // which player is on the screen
    eor(Imm(0b1));
    sta(Abs(CurrentPlayer));
    ldx(Imm(0x6));
}

int TransLoop() {
    // transpose the information
    lda(Abs(OnscreenPlayerInfo, x));
    // of the onscreen player
    pha();
    // with that of the offscreen player
    lda(Abs(OffscreenPlayerInfo, x));
    sta(Abs(OnscreenPlayerInfo, x));
    pla();
    sta(Abs(OffscreenPlayerInfo, x));
    dex();
    BPL(TransLoop);
    // clear carry flag to get game going
    clc();
}

int ExTrans() {
    return 0;
}

int DoNothing1() {
    // this is residual code, this value is
    lda(Imm(0xff));
    // not used anywhere in the program
    sta(Abs(0x6c9));
}

int DoNothing2() {
    return 0;
}

int AreaParserTaskHandler() {
    // check number of tasks here
    ldy(Abs(AreaParserTaskNum));
    // if already set, go ahead
    BNE(DoAPTasks);
    ldy(Imm(0x8));
    // otherwise, set eight by default
    sty(Abs(AreaParserTaskNum));
}

int DoAPTasks() {
    dey();
    tya();
    JSR(AreaParserTasks);
    // if all tasks not complete do not
    dec(Abs(AreaParserTaskNum));
    // render attribute table yet
    BNE(SkipATRender);
    JSR(RenderAttributeTables);
}

int SkipATRender() {
    return 0;
}

int AreaParserTasks() {
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

int IncrementColumnPos() {
    // increment column where we're at
    inc(Abs(CurrentColumnPos));
    lda(Abs(CurrentColumnPos));
    // mask out higher nybble
    anda(Imm(0b1111));
    BNE(NoColWrap);
    // if no bits left set, wrap back to zero (0-f)
    sta(Abs(CurrentColumnPos));
    // and increment page number where we're at
    inc(Abs(CurrentPageLoc));
}

int NoColWrap() {
    // increment column offset where we're at
    inc(Abs(BlockBufferColumnPos));
    lda(Abs(BlockBufferColumnPos));
    // mask out all but 5 LSB (0-1f)
    anda(Imm(0b11111));
    // and save
    sta(Abs(BlockBufferColumnPos));
    return 0;
}

int AreaParserCore() {
    // check to see if we are starting right of start
    lda(Abs(BackloadingFlag));
    // if not, go ahead and render background, foreground and terrain
    BEQ(RenderSceneryTerrain);
    // otherwise skip ahead and load level data
    JSR(ProcessAreaData);
}

int RenderSceneryTerrain() {
    ldx(Imm(0xc));
    lda(Imm(0x0));
}

int ClrMTBuf() {
    // clear out metatile buffer
    sta(Abs(MetatileBuffer, x));
    dex();
    BPL(ClrMTBuf);
    // do we need to render the background scenery?
    ldy(Abs(BackgroundScenery));
    // if not, skip to check the foreground
    BEQ(RendFore);
    // otherwise check for every third page
    lda(Abs(CurrentPageLoc));
}

int ThirdP() {
    cmp(Imm(0x3));
    // if less than three we're there
    BMI(RendBack);
    sec();
    // if 3 or more, subtract 3 and
    sbc(Imm(0x3));
    // do an unconditional branch
    BPL(ThirdP);
}

int RendBack() {
    // move results to higher nybble
    asl();
    asl();
    asl();
    asl();
    // add to it offset loaded from here
    adc(Abs(((offsetof(G, BSceneDataOffsets)) - (1)), y));
    // add to the result our current column position
    adc(Abs(CurrentColumnPos));
    tax();
    // load data from sum of offsets
    lda(Abs(offsetof(G, BackSceneryData), x));
    // if zero, no scenery for that part
    BEQ(RendFore);
    pha();
    // save to stack and clear high nybble
    anda(Imm(0xf));
    sec();
    // subtract one (because low nybble is $01-$0c)
    sbc(Imm(0x1));
    // save low nybble
    sta(Abs(0x0));
    // multiply by three (shift to left and add result to old one)
    asl();
    // note that since d7 was nulled, the carry flag is always clear
    adc(Abs(0x0));
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
    lda(Imm(0x3));
    sta(Abs(0x0));
}

int SceLoop1() {
    // load metatile data from offset of (lsb - 1) * 3
    lda(Abs(offsetof(G, BackSceneryMetatiles), x));
    // store into buffer from offset of (msb / 16)
    sta(Abs(MetatileBuffer, y));
    inx();
    iny();
    // if at this location, leave loop
    cpy(Imm(0xb));
    BEQ(RendFore);
    // decrement until counter expires, barring exception
    dec(Abs(0x0));
    BNE(SceLoop1);
}

int RendFore() {
    // check for foreground data needed or not
    ldx(Abs(ForegroundScenery));
    // if not, skip this part
    BEQ(RendTerr);
    // load offset from location offset by header value, then
    ldy(Abs(((offsetof(G, FSceneDataOffsets)) - (1)), x));
    // reinit X
    ldx(Imm(0x0));
}

int SceLoop2() {
    // load data until counter expires
    lda(Abs(offsetof(G, ForeSceneryData), y));
    // do not store if zero found
    BEQ(NoFore);
    sta(Abs(MetatileBuffer, x));
}

int NoFore() {
    iny();
    inx();
    // store up to end of metatile buffer
    cpx(Imm(0xd));
    BNE(SceLoop2);
}

int RendTerr() {
    // check world type for water level
    ldy(Abs(AreaType));
    // if not water level, skip this part
    BNE(TerMTile);
    // check world number, if not world number eight
    lda(Abs(WorldNumber));
    // then skip this part
    cmp(Imm(World8));
    BNE(TerMTile);
    // if set as water level and world number eight,
    lda(Imm(0x62));
    // use castle wall metatile as terrain type
    JMP(StoreMT);
}

int TerMTile() {
    // otherwise get appropriate metatile for area type
    lda(Abs(offsetof(G, TerrainMetatiles), y));
    // check for cloud type override
    ldy(Abs(CloudTypeOverride));
    // if not set, keep value otherwise
    BEQ(StoreMT);
    // use cloud block terrain
    lda(Imm(0x88));
}

int StoreMT() {
    // store value here
    sta(Abs(0x7));
    // initialize X, use as metatile buffer offset
    ldx(Imm(0x0));
    // use yet another value from the header
    lda(Abs(TerrainControl));
    // multiply by 2 and use as yet another offset
    asl();
    tay();
}

int TerrLoop() {
    // get one of the terrain rendering bit data
    lda(Abs(offsetof(G, TerrainRenderBits), y));
    sta(Abs(0x0));
    // increment Y and use as offset next time around
    iny();
    sty(Abs(0x1));
    // skip if value here is zero
    lda(Abs(CloudTypeOverride));
    BEQ(NoCloud2);
    // otherwise, check if we're doing the ceiling byte
    cpx(Imm(0x0));
    BEQ(NoCloud2);
    // if not, mask out all but d3
    lda(Abs(0x0));
    anda(Imm(0b1000));
    sta(Abs(0x0));
}

int NoCloud2() {
    // start at beginning of bitmasks
    ldy(Imm(0x0));
}

int TerrBChk() {
    // load bitmask, then perform AND on contents of first byte
    lda(Abs(offsetof(G, Bitmasks), y));
    bit(Abs(0x0));
    // if not set, skip this part (do not write terrain to buffer)
    BEQ(NextTBit);
    lda(Abs(0x7));
    // load terrain type metatile number and store into buffer here
    sta(Abs(MetatileBuffer, x));
}

int NextTBit() {
    // continue until end of buffer
    inx();
    cpx(Imm(0xd));
    // if we're at the end, break out of this loop
    BEQ(RendBBuf);
    // check world type for underground area
    lda(Abs(AreaType));
    cmp(Imm(0x2));
    // if not underground, skip this part
    BNE(EndUChk);
    cpx(Imm(0xb));
    // if we're at the bottom of the screen, override
    BNE(EndUChk);
    // old terrain type with ground level terrain type
    lda(Imm(0x54));
    sta(Abs(0x7));
}

int EndUChk() {
    // increment bitmasks offset in Y
    iny();
    cpy(Imm(0x8));
    // if not all bits checked, loop back
    BNE(TerrBChk);
    ldy(Abs(0x1));
    // unconditional branch, use Y to load next byte
    BNE(TerrLoop);
}

int RendBBuf() {
    // do the area data loading routine now
    JSR(ProcessAreaData);
    lda(Abs(BlockBufferColumnPos));
    // get block buffer address from where we're at
    JSR(GetBlockBufferAddr);
    ldx(Imm(0x0));
    // init index regs and start at beginning of smaller buffer
    ldy(Imm(0x0));
}

int ChkMTLow() {
    sty(Abs(0x0));
    // load stored metatile number
    lda(Abs(MetatileBuffer, x));
    // mask out all but 2 MSB
    anda(Imm(0b11000000));
    asl();
    // make %xx000000 into %000000xx
    rol();
    rol();
    // use as offset in Y
    tay();
    // reload original unmasked value here
    lda(Abs(MetatileBuffer, x));
    // check for certain values depending on bits set
    cmp(Abs(offsetof(G, BlockBuffLowBounds), y));
    // if equal or greater, branch
    BCS(StrBlock);
    // if less, init value before storing
    lda(Imm(0x0));
}

int StrBlock() {
    // get offset for block buffer
    ldy(Abs(0x0));
    // store value into block buffer
    sta(IndY((0x6)));
    tya();
    // add 16 (move down one row) to offset
    clc();
    adc(Imm(0x10));
    tay();
    // increment column value
    inx();
    cpx(Imm(0xd));
    // continue until we pass last row, then leave
    BCC(ChkMTLow);
    return 0;
}

int ProcessAreaData() {
    // start at the end of area object buffer
    ldx(Imm(0x2));
}

int ProcADLoop() {
    stx(Abs(ObjectOffset));
    // reset flag
    lda(Imm(0x0));
    sta(Abs(BehindAreaParserFlag));
    // get offset of area data pointer
    ldy(Abs(AreaDataOffset));
    // get first byte of area object
    lda(IndY((AreaData)));
    // if end-of-area, skip all this crap
    cmp(Imm(0xfd));
    BEQ(RdyDecode);
    // check area object buffer flag
    lda(Abs(AreaObjectLength, x));
    // if buffer not negative, branch, otherwise
    BPL(RdyDecode);
    iny();
    // get second byte of area object
    lda(IndY((AreaData)));
    // check for page select bit (d7), branch if not set
    asl();
    BCC(Chk1Row13);
    // check page select
    lda(Abs(AreaObjectPageSel));
    BNE(Chk1Row13);
    // if not already set, set it now
    inc(Abs(AreaObjectPageSel));
    // and increment page location
    inc(Abs(AreaObjectPageLoc));
}

int Chk1Row13() {
    dey();
    // reread first byte of level object
    lda(IndY((AreaData)));
    // mask out high nybble
    anda(Imm(0xf));
    // row 13?
    cmp(Imm(0xd));
    BNE(Chk1Row14);
    // if so, reread second byte of level object
    iny();
    lda(IndY((AreaData)));
    // decrement to get ready to read first byte
    dey();
    // check for d6 set (if not, object is page control)
    anda(Imm(0b1000000));
    BNE(CheckRear);
    // if page select is set, do not reread
    lda(Abs(AreaObjectPageSel));
    BNE(CheckRear);
    // if d6 not set, reread second byte
    iny();
    lda(IndY((AreaData)));
    // mask out all but 5 LSB and store in page control
    anda(Imm(0b11111));
    sta(Abs(AreaObjectPageLoc));
    // increment page select
    inc(Abs(AreaObjectPageSel));
    JMP(NextAObj);
}

int Chk1Row14() {
    // row 14?
    cmp(Imm(0xe));
    BNE(CheckRear);
    // check flag for saved page number and branch if set
    lda(Abs(BackloadingFlag));
    // to render the object (otherwise bg might not look right)
    BNE(RdyDecode);
}

int CheckRear() {
    // check to see if current page of level object is
    lda(Abs(AreaObjectPageLoc));
    // behind current page of renderer
    cmp(Abs(CurrentPageLoc));
    // if so branch
    BCC(SetBehind);
}

int RdyDecode() {
    // do sub and do not turn on flag
    JSR(DecodeAreaData);
    JMP(ChkLength);
}

int SetBehind() {
    // turn on flag if object is behind renderer
    inc(Abs(BehindAreaParserFlag));
}

int NextAObj() {
    // increment buffer offset and move on
    JSR(IncAreaObjOffset);
}

int ChkLength() {
    // get buffer offset
    ldx(Abs(ObjectOffset));
    // check object length for anything stored here
    lda(Abs(AreaObjectLength, x));
    // if not, branch to handle loopback
    BMI(ProcLoopb);
    // otherwise decrement length or get rid of it
    dec(Abs(AreaObjectLength, x));
}

int ProcLoopb() {
    // decrement buffer offset
    dex();
    // and loopback unless exceeded buffer
    BPL(ProcADLoop);
    // check for flag set if objects were behind renderer
    lda(Abs(BehindAreaParserFlag));
    // branch if true to load more level data, otherwise
    BNE(ProcessAreaData);
    // check for flag set if starting right of page $00
    lda(Abs(BackloadingFlag));
    // branch if true to load more level data, otherwise leave
    BNE(ProcessAreaData);
}

int EndAParse() {
    return 0;
}

int IncAreaObjOffset() {
    // increment offset of level pointer
    inc(Abs(AreaDataOffset));
    inc(Abs(AreaDataOffset));
    // reset page select
    lda(Imm(0x0));
    sta(Abs(AreaObjectPageSel));
    return 0;
}

int DecodeAreaData() {
    // check current buffer flag
    lda(Abs(AreaObjectLength, x));
    BMI(Chk1stB);
    // if not, get offset from buffer
    ldy(Abs(AreaObjOffsetBuffer, x));
}

int Chk1stB() {
    // load offset of 16 for special row 15
    ldx(Imm(0x10));
    // get first byte of level object again
    lda(IndY((AreaData)));
    cmp(Imm(0xfd));
    // if end of level, leave this routine
    BEQ(EndAParse);
    // otherwise, mask out low nybble
    anda(Imm(0xf));
    // row 15?
    cmp(Imm(0xf));
    // if so, keep the offset of 16
    BEQ(ChkRow14);
    // otherwise load offset of 8 for special row 12
    ldx(Imm(0x8));
    // row 12?
    cmp(Imm(0xc));
    // if so, keep the offset value of 8
    BEQ(ChkRow14);
    // otherwise nullify value by default
    ldx(Imm(0x0));
}

int ChkRow14() {
    // store whatever value we just loaded here
    stx(Abs(0x7));
    // get object offset again
    ldx(Abs(ObjectOffset));
    // row 14?
    cmp(Imm(0xe));
    BNE(ChkRow13);
    // if so, load offset with $00
    lda(Imm(0x0));
    sta(Abs(0x7));
    // and load A with another value
    lda(Imm(0x2e));
    // unconditional branch
    BNE(NormObj);
}

int ChkRow13() {
    // row 13?
    cmp(Imm(0xd));
    BNE(ChkSRows);
    // if so, load offset with 34
    lda(Imm(0x22));
    sta(Abs(0x7));
    // get next byte
    iny();
    lda(IndY((AreaData)));
    // mask out all but d6 (page control obj bit)
    anda(Imm(0b1000000));
    // if d6 clear, branch to leave (we handled this earlier)
    BEQ(LeavePar);
    // otherwise, get byte again
    lda(IndY((AreaData)));
    // mask out d7
    anda(Imm(0b1111111));
    // check for loop command in low nybble
    cmp(Imm(0x4b));
    // (plus d6 set for object other than page control)
    BNE(Mask2MSB);
    // if loop command, set loop command flag
    inc(Abs(LoopCommand));
}

int Mask2MSB() {
    // mask out d7 and d6
    anda(Imm(0b111111));
    // and jump
    JMP(NormObj);
}

int ChkSRows() {
    // row 12-15?
    cmp(Imm(0xc));
    BCS(SpecObj);
    // if not, get second byte of level object
    iny();
    lda(IndY((AreaData)));
    // mask out all but d6-d4
    anda(Imm(0b1110000));
    // if any bits set, branch to handle large object
    BNE(LrgObj);
    lda(Imm(0x16));
    // otherwise set offset of 24 for small object
    sta(Abs(0x7));
    // reload second byte of level object
    lda(IndY((AreaData)));
    // mask out higher nybble and jump
    anda(Imm(0b1111));
    JMP(NormObj);
}

int LrgObj() {
    // store value here (branch for large objects)
    sta(Abs(0x0));
    // check for vertical pipe object
    cmp(Imm(0x70));
    BNE(NotWPipe);
    // if not, reload second byte
    lda(IndY((AreaData)));
    // mask out all but d3 (usage control bit)
    anda(Imm(0b1000));
    // if d3 clear, branch to get original value
    BEQ(NotWPipe);
    // otherwise, nullify value for warp pipe
    lda(Imm(0x0));
    sta(Abs(0x0));
}

int NotWPipe() {
    // get value and jump ahead
    lda(Abs(0x0));
    JMP(MoveAOId);
}

int SpecObj() {
    // branch here for rows 12-15
    iny();
    lda(IndY((AreaData)));
    // get next byte and mask out all but d6-d4
    anda(Imm(0b1110000));
}

int MoveAOId() {
    // move d6-d4 to lower nybble
    lsr();
    lsr();
    lsr();
    lsr();
}

int NormObj() {
    // store value here (branch for small objects and rows 13 and 14)
    sta(Abs(0x0));
    // is there something stored here already?
    lda(Abs(AreaObjectLength, x));
    // if so, branch to do its particular sub
    BPL(RunAObj);
    // otherwise check to see if the object we've loaded is on the
    lda(Abs(AreaObjectPageLoc));
    // same page as the renderer, and if so, branch
    cmp(Abs(CurrentPageLoc));
    BEQ(InitRear);
    // if not, get old offset of level pointer
    ldy(Abs(AreaDataOffset));
    // and reload first byte
    lda(IndY((AreaData)));
    anda(Imm(0b1111));
    // row 14?
    cmp(Imm(0xe));
    BNE(LeavePar);
    // if so, check backloading flag
    lda(Abs(BackloadingFlag));
    // if set, branch to render object, else leave
    BNE(StrAObj);
}

int LeavePar() {
    return 0;
}

int InitRear() {
    // check backloading flag to see if it's been initialized
    lda(Abs(BackloadingFlag));
    // branch to column-wise check
    BEQ(BackColC);
    // if not, initialize both backloading and
    lda(Imm(0x0));
    // behind-renderer flags and leave
    sta(Abs(BackloadingFlag));
    sta(Abs(BehindAreaParserFlag));
    sta(Abs(ObjectOffset));
}

int LoopCmdE() {
    return 0;
}

int BackColC() {
    // get first byte again
    ldy(Abs(AreaDataOffset));
    lda(IndY((AreaData)));
    // mask out low nybble and move high to low
    anda(Imm(0b11110000));
    lsr();
    lsr();
    lsr();
    lsr();
    // is this where we're at?
    cmp(Abs(CurrentColumnPos));
    // if not, branch to leave
    BNE(LeavePar);
}

int StrAObj() {
    // if so, load area obj offset and store in buffer
    lda(Abs(AreaDataOffset));
    sta(Abs(AreaObjOffsetBuffer, x));
    // do sub to increment to next object data
    JSR(IncAreaObjOffset);
}

int RunAObj() {
    // get stored value and add offset to it
    lda(Abs(0x0));
    // then use the jump engine with current contents of A
    clc();
    adc(Abs(0x7));
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

int AlterAreaAttributes() {
    // load offset for level object data saved in buffer
    ldy(Abs(AreaObjOffsetBuffer, x));
    // load second byte
    iny();
    lda(IndY((AreaData)));
    // save in stack for now
    pha();
    anda(Imm(0b1000000));
    // branch if d6 is set
    BNE(Alter2);
    pla();
    // pull and push offset to copy to A
    pha();
    // mask out high nybble and store as
    anda(Imm(0b1111));
    // new terrain height type bits
    sta(Abs(TerrainControl));
    pla();
    // pull and mask out all but d5 and d4
    anda(Imm(0b110000));
    // move bits to lower nybble and store
    lsr();
    // as new background scenery bits
    lsr();
    lsr();
    lsr();
    // then leave
    sta(Abs(BackgroundScenery));
    return 0;
}

int Alter2() {
    pla();
    // mask out all but 3 LSB
    anda(Imm(0b111));
    // if four or greater, set color control bits
    cmp(Imm(0x4));
    // and nullify foreground scenery bits
    BCC(SetFore);
    sta(Abs(BackgroundColorCtrl));
    lda(Imm(0x0));
}

int SetFore() {
    // otherwise set new foreground scenery bits
    sta(Abs(ForegroundScenery));
    return 0;
}

int ScrollLockObject_Warp() {
    // load value of 4 for game text routine as default
    ldx(Imm(0x4));
    // warp zone (4-3-2), then check world number
    lda(Abs(WorldNumber));
    BEQ(WarpNum);
    // if world number > 1, increment for next warp zone (5)
    inx();
    // check area type
    ldy(Abs(AreaType));
    dey();
    // if ground area type, increment for last warp zone
    BNE(WarpNum);
    // (8-7-6) and move on
    inx();
}

int WarpNum() {
    txa();
    // store number here to be used by warp zone routine
    sta(Abs(WarpZoneControl));
    // print text and warp zone numbers
    JSR(WriteGameText);
    lda(Imm(PiranhaPlant));
    // load identifier for piranha plants and do sub
    JSR(KillEnemies);
}

int ScrollLockObject() {
    // invert scroll lock to turn it on
    lda(Abs(ScrollLock));
    eor(Imm(0b1));
    sta(Abs(ScrollLock));
    return 0;
}

int KillEnemies() {
    // store identifier here
    sta(Abs(0x0));
    lda(Imm(0x0));
    // check for identifier in enemy object buffer
    ldx(Imm(0x4));
}

int KillELoop() {
    ldy(Abs(Enemy_ID, x));
    // if not found, branch
    cpy(Abs(0x0));
    BNE(NoKillE);
    // if found, deactivate enemy object flag
    sta(Abs(Enemy_Flag, x));
}

int NoKillE() {
    // do this until all slots are checked
    dex();
    BPL(KillELoop);
    return 0;
}

int AreaFrenzy() {
    // use area object identifier bit as offset
    ldx(Abs(0x0));
    // note that it starts at 8, thus weird address here
    lda(Abs(((offsetof(G, FrenzyIDData)) - (8)), x));
    ldy(Imm(0x5));
}

int FreCompLoop() {
    // check regular slots of enemy object buffer
    dey();
    // if all slots checked and enemy object not found, branch to store
    BMI(ExitAFrenzy);
    // check for enemy object in buffer versus frenzy object
    cmp(Abs(Enemy_ID, y));
    BNE(FreCompLoop);
    // if enemy object already present, nullify queue and leave
    lda(Imm(0x0));
}

int ExitAFrenzy() {
    // store enemy into frenzy queue
    sta(Abs(EnemyFrenzyQueue));
    return 0;
}

int AreaStyleObject() {
    // load level object style and jump to the right sub
    lda(Abs(AreaStyle));
    static JUMP_ENTRY jumptable[3] = {
        TreeLedge,
        MushroomLedge,
        BulletBillCannon,
    };
    JMP(jumptable[a.read()]);
}

int TreeLedge() {
    // get row and length of green ledge
    JSR(GetLrgObjAttrib);
    // check length counter for expiration
    lda(Abs(AreaObjectLength, x));
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    // store lower nybble into buffer flag as length of ledge
    sta(Abs(AreaObjectLength, x));
    lda(Abs(CurrentPageLoc));
    // are we at the start of the level?
    ora(Abs(CurrentColumnPos));
    BEQ(MidTreeL);
    // render start of tree ledge
    lda(Imm(0x16));
    JMP(NoUnder);
}

int MidTreeL() {
    ldx(Abs(0x7));
    // render middle of tree ledge
    lda(Imm(0x17));
    // note that this is also used if ledge position is
    sta(Abs(MetatileBuffer, x));
    // at the start of level for continuous effect
    lda(Imm(0x4c));
    // now render the part underneath
    JMP(AllUnder);
}

int EndTreeL() {
    // render end of tree ledge
    lda(Imm(0x18));
    JMP(NoUnder);
}

int MushroomLedge() {
    // get shroom dimensions
    JSR(ChkLrgObjLength);
    // store length here for now
    sty(Abs(0x6));
    BCC(EndMushL);
    // divide length by 2 and store elsewhere
    lda(Abs(AreaObjectLength, x));
    lsr();
    sta(Abs(MushroomLedgeHalfLen, x));
    // render start of mushroom
    lda(Imm(0x19));
    JMP(NoUnder);
}

int EndMushL() {
    // if at the end, render end of mushroom
    lda(Imm(0x1b));
    ldy(Abs(AreaObjectLength, x));
    BEQ(NoUnder);
    // get divided length and store where length
    lda(Abs(MushroomLedgeHalfLen, x));
    // was stored originally
    sta(Abs(0x6));
    ldx(Abs(0x7));
    lda(Imm(0x1a));
    // render middle of mushroom
    sta(Abs(MetatileBuffer, x));
    // are we smack dab in the center?
    cpy(Abs(0x6));
    // if not, branch to leave
    BNE(MushLExit);
    inx();
    lda(Imm(0x4f));
    // render stem top of mushroom underneath the middle
    sta(Abs(MetatileBuffer, x));
    lda(Imm(0x50));
}

int AllUnder() {
    inx();
    // set $0f to render all way down
    ldy(Imm(0xf));
    // now render the stem of mushroom
    JMP(RenderUnderPart);
}

int NoUnder() {
    // load row of ledge
    ldx(Abs(0x7));
    // set 0 for no bottom on this part
    ldy(Imm(0x0));
    JMP(RenderUnderPart);
}

int PulleyRopeObject() {
    // get length of pulley/rope object
    JSR(ChkLrgObjLength);
    // initialize metatile offset
    ldy(Imm(0x0));
    // if starting, render left pulley
    BCS(RenderPul);
    iny();
    // if not at the end, render rope
    lda(Abs(AreaObjectLength, x));
    BNE(RenderPul);
    // otherwise render right pulley
    iny();
}

int RenderPul() {
    lda(Abs(offsetof(G, PulleyRopeMetatiles), y));
    // render at the top of the screen
    sta(Abs(MetatileBuffer));
}

int MushLExit() {
    // and leave
    return 0;
}

int CastleObject() {
    // save lower nybble as starting row
    JSR(GetLrgObjAttrib);
    // if starting row is above $0a, game will crash!!!
    sty(Abs(0x7));
    ldy(Imm(0x4));
    // load length of castle if not already loaded
    JSR(ChkLrgObjFixedLength);
    txa();
    // save obj buffer offset to stack
    pha();
    // use current length as offset for castle data
    ldy(Abs(AreaObjectLength, x));
    // begin at starting row
    ldx(Abs(0x7));
    lda(Imm(0xb));
    // load upper limit of number of rows to print
    sta(Abs(0x6));
}

int CRendLoop() {
    // load current byte using offset
    lda(Abs(offsetof(G, CastleMetatiles), y));
    sta(Abs(MetatileBuffer, x));
    // store in buffer and increment buffer offset
    inx();
    lda(Abs(0x6));
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
    dec(Abs(0x6));
}

int ChkCFloor() {
    // have we reached the row just before floor?
    cpx(Imm(0xb));
    // if not, go back and do another row
    BNE(CRendLoop);
    pla();
    // get obj buffer offset from before
    tax();
    lda(Abs(CurrentPageLoc));
    // if we're at page 0, we do not need to do anything else
    BEQ(ExitCastle);
    // check length
    lda(Abs(AreaObjectLength, x));
    // if length almost about to expire, put brick at floor
    cmp(Imm(0x1));
    BEQ(PlayerStop);
    // check starting row for tall castle ($00)
    ldy(Abs(0x7));
    BNE(NotTall);
    // if found, then check to see if we're at the second column
    cmp(Imm(0x3));
    BEQ(PlayerStop);
}

int NotTall() {
    // if not tall castle, check to see if we're at the third column
    cmp(Imm(0x2));
    // if we aren't and the castle is tall, don't create flag yet
    BNE(ExitCastle);
    // otherwise, obtain and save horizontal pixel coordinate
    JSR(GetAreaObjXPosition);
    pha();
    // find an empty place on the enemy object buffer
    JSR(FindEmptyEnemySlot);
    pla();
    // then write horizontal coordinate for star flag
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(CurrentPageLoc));
    // set page location for star flag
    sta(Abs(Enemy_PageLoc, x));
    lda(Imm(0x1));
    // set vertical high byte
    sta(Abs(Enemy_Y_HighPos, x));
    // set flag for buffer
    sta(Abs(Enemy_Flag, x));
    lda(Imm(0x90));
    // set vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
    // set star flag value in buffer itself
    lda(Imm(StarFlagObject));
    sta(Abs(Enemy_ID, x));
    return 0;
}

int PlayerStop() {
    // put brick at floor to stop player at end of level
    ldy(Imm(0x52));
    // this is only done if we're on the second column
    sty(Abs(((MetatileBuffer) + (10))));
}

int ExitCastle() {
    return 0;
}

int WaterPipe() {
    // get row and lower nybble
    JSR(GetLrgObjAttrib);
    // get length (residual code, water pipe is 1 col thick)
    ldy(Abs(AreaObjectLength, x));
    // get row
    ldx(Abs(0x7));
    lda(Imm(0x6b));
    // draw something here and below it
    sta(Abs(MetatileBuffer, x));
    lda(Imm(0x6c));
    sta(Abs(((MetatileBuffer) + (1)), x));
    return 0;
}

int IntroPipe() {
    // check if length set, if not set, set it
    ldy(Imm(0x3));
    JSR(ChkLrgObjFixedLength);
    // set fixed value and render the sideways part
    ldy(Imm(0xa));
    JSR(RenderSidewaysPipe);
    // if carry flag set, not time to draw vertical pipe part
    BCS(NoBlankP);
    // blank everything above the vertical pipe part
    ldx(Imm(0x6));
}

int VPipeSectLoop() {
    // all the way to the top of the screen
    lda(Imm(0x0));
    // because otherwise it will look like exit pipe
    sta(Abs(MetatileBuffer, x));
    dex();
    BPL(VPipeSectLoop);
    // draw the end of the vertical pipe part
    lda(Abs(offsetof(G, VerticalPipeData), y));
    sta(Abs(((MetatileBuffer) + (7))));
}

int NoBlankP() {
    return 0;
}

int ExitPipe() {
    // check if length set, if not set, set it
    ldy(Imm(0x3));
    JSR(ChkLrgObjFixedLength);
    // get vertical length, then plow on through RenderSidewaysPipe
    JSR(GetLrgObjAttrib);
}

int RenderSidewaysPipe() {
    // decrement twice to make room for shaft at bottom
    dey();
    // and store here for now as vertical length
    dey();
    sty(Abs(0x5));
    // get length left over and store here
    ldy(Abs(AreaObjectLength, x));
    sty(Abs(0x6));
    // get vertical length plus one, use as buffer offset
    ldx(Abs(0x5));
    inx();
    // check for value $00 based on horizontal offset
    lda(Abs(offsetof(G, SidePipeShaftData), y));
    cmp(Imm(0x0));
    // if found, do not draw the vertical pipe shaft
    BEQ(DrawSidePart);
    ldx(Imm(0x0));
    // init buffer offset and get vertical length
    ldy(Abs(0x5));
    // and render vertical shaft using tile number in A
    JSR(RenderUnderPart);
    // clear carry flag to be used by IntroPipe
    clc();
}

int DrawSidePart() {
    // render side pipe part at the bottom
    ldy(Abs(0x6));
    lda(Abs(offsetof(G, SidePipeTopPart), y));
    // note that the pipe parts are stored
    sta(Abs(MetatileBuffer, x));
    // backwards horizontally
    lda(Abs(offsetof(G, SidePipeBottomPart), y));
    sta(Abs(((MetatileBuffer) + (1)), x));
    return 0;
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    // check to see if value was nullified earlier
    lda(Abs(0x0));
    // (if d3, the usage control bit of second byte, was set)
    BEQ(WarpPipe);
    iny();
    iny();
    iny();
    // add four if usage control bit was not set
    iny();
}

int WarpPipe() {
    // save value in stack
    tya();
    pha();
    lda(Abs(AreaNumber));
    // if at world 1-1, do not add piranha plant ever
    ora(Abs(WorldNumber));
    BEQ(DrawPipe);
    // if on second column of pipe, branch
    ldy(Abs(AreaObjectLength, x));
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
    adc(Imm(0x8));
    // store as enemy's horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    // add carry to current page number
    lda(Abs(CurrentPageLoc));
    adc(Imm(0x0));
    // store as enemy's page coordinate
    sta(Abs(Enemy_PageLoc, x));
    lda(Imm(0x1));
    sta(Abs(Enemy_Y_HighPos, x));
    // activate enemy flag
    sta(Abs(Enemy_Flag, x));
    // get piranha plant's vertical coordinate and store here
    JSR(GetAreaObjYPosition);
    sta(Abs(Enemy_Y_Position, x));
    // write piranha plant's value into buffer
    lda(Imm(PiranhaPlant));
    sta(Abs(Enemy_ID, x));
    JSR(InitPiranhaPlant);
}

int DrawPipe() {
    // get value saved earlier and use as Y
    pla();
    tay();
    // get buffer offset
    ldx(Abs(0x7));
    // draw the appropriate pipe with the Y we loaded earlier
    lda(Abs(offsetof(G, VerticalPipeData), y));
    // render the top of the pipe
    sta(Abs(MetatileBuffer, x));
    inx();
    // render the rest of the pipe
    lda(Abs(((offsetof(G, VerticalPipeData)) + (2)), y));
    // subtract one from length and render the part underneath
    ldy(Abs(0x6));
    dey();
    JMP(RenderUnderPart);
}

int GetPipeHeight() {
    // check for length loaded, if not, load
    ldy(Imm(0x1));
    // pipe length of 2 (horizontal)
    JSR(ChkLrgObjFixedLength);
    JSR(GetLrgObjAttrib);
    // get saved lower nybble as height
    tya();
    // save only the three lower bits as
    anda(Imm(0x7));
    // vertical length, then load Y with
    sta(Abs(0x6));
    // length left over
    ldy(Abs(AreaObjectLength, x));
    return 0;
}

int FindEmptyEnemySlot() {
    // start at first enemy slot
    ldx(Imm(0x0));
}

int EmptyChkLoop() {
    // clear carry flag by default
    clc();
    // check enemy buffer for nonzero
    lda(Abs(Enemy_Flag, x));
    // if zero, leave
    BEQ(ExitEmptyChk);
    inx();
    // if nonzero, check next value
    cpx(Imm(0x5));
    BNE(EmptyChkLoop);
}

int ExitEmptyChk() {
    // if all values nonzero, carry flag is set
    return 0;
}

int Hole_Water() {
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    // render waves
    lda(Imm(0x86));
    sta(Abs(((MetatileBuffer) + (10))));
    ldx(Imm(0xb));
    // now render the water underneath
    ldy(Imm(0x1));
    lda(Imm(0x87));
    JMP(RenderUnderPart);
}

int QuestionBlockRow_High() {
    // start on the fourth row
    lda(Imm(0x3));
}

int QuestionBlockRow_Low() {
    // start on the eighth row
    lda(Imm(0x7));
    // save whatever row to the stack for now
    pha();
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    pla();
    // render question boxes with coins
    tax();
    lda(Imm(0xc0));
    sta(Abs(MetatileBuffer, x));
    return 0;
}

int Bridge_High() {
    // start on the seventh row from top of screen
    lda(Imm(0x6));
}

int Bridge_Middle() {
    // start on the eighth row
    lda(Imm(0x7));
}

int Bridge_Low() {
    // start on the tenth row
    lda(Imm(0x9));
    // save whatever row to the stack for now
    pha();
    // get low nybble and save as length
    JSR(ChkLrgObjLength);
    pla();
    // render bridge railing
    tax();
    lda(Imm(0xb));
    sta(Abs(MetatileBuffer, x));
    inx();
    // now render the bridge itself
    ldy(Imm(0x0));
    lda(Imm(0x63));
    JMP(RenderUnderPart);
}

int FlagBalls_Residual() {
    // get low nybble from object byte
    JSR(GetLrgObjAttrib);
    // render flag balls on third row from top
    ldx(Imm(0x2));
    // of screen downwards based on low nybble
    lda(Imm(0x6d));
    JMP(RenderUnderPart);
}

int FlagpoleObject() {
    // render flagpole ball on top
    lda(Imm(0x24));
    sta(Abs(MetatileBuffer));
    // now render the flagpole shaft
    ldx(Imm(0x1));
    ldy(Imm(0x8));
    lda(Imm(0x25));
    JSR(RenderUnderPart);
    // render solid block at the bottom
    lda(Imm(0x61));
    sta(Abs(((MetatileBuffer) + (10))));
    JSR(GetAreaObjXPosition);
    // get pixel coordinate of where the flagpole is,
    sec();
    // subtract eight pixels and use as horizontal
    sbc(Imm(0x8));
    // coordinate for the flag
    sta(Abs(((Enemy_X_Position) + (5))));
    lda(Abs(CurrentPageLoc));
    // subtract borrow from page location and use as
    sbc(Imm(0x0));
    // page location for the flag
    sta(Abs(((Enemy_PageLoc) + (5))));
    lda(Imm(0x30));
    // set vertical coordinate for flag
    sta(Abs(((Enemy_Y_Position) + (5))));
    lda(Imm(0xb0));
    // set initial vertical coordinate for flagpole's floatey number
    sta(Abs(FlagpoleFNum_Y_Pos));
    lda(Imm(FlagpoleFlagObject));
    // set flag identifier, note that identifier and coordinates
    sta(Abs(((Enemy_ID) + (5))));
    // use last space in enemy object buffer
    inc(Abs(((Enemy_Flag) + (5))));
    return 0;
}

int EndlessRope() {
    // render rope from the top to the bottom of screen
    ldx(Imm(0x0));
    ldy(Imm(0xf));
    JMP(DrawRope);
}

int BalancePlatRope() {
    // save object buffer offset for now
    txa();
    pha();
    // blank out all from second row to the bottom
    ldx(Imm(0x1));
    // with blank used for balance platform rope
    ldy(Imm(0xf));
    lda(Imm(0x44));
    JSR(RenderUnderPart);
    // get back object buffer offset
    pla();
    tax();
    // get vertical length from lower nybble
    JSR(GetLrgObjAttrib);
    ldx(Imm(0x1));
}

int DrawRope() {
    // render the actual rope
    lda(Imm(0x40));
    JMP(RenderUnderPart);
}

int RowOfCoins() {
    // get area type
    ldy(Abs(AreaType));
    // load appropriate coin metatile
    lda(Abs(offsetof(G, CoinMetatileData), y));
    JMP(GetRow);
}

int CastleBridgeObj() {
    // load length of 13 columns
    ldy(Imm(0xc));
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
}

int AxeObj() {
    // load bowser's palette into sprite portion of palette
    lda(Imm(0x8));
    sta(Abs(VRAM_Buffer_AddrCtrl));
}

int ChainObj() {
    // get value loaded earlier from decoder
    ldy(Abs(0x0));
    // get appropriate row and metatile for object
    ldx(Abs(((offsetof(G, C_ObjectRow)) - (2)), y));
    lda(Abs(((offsetof(G, C_ObjectMetatile)) - (2)), y));
    JMP(ColObj);
}

int EmptyBlock() {
    // get row location
    JSR(GetLrgObjAttrib);
    ldx(Abs(0x7));
    lda(Imm(0xc4));
}

int ColObj() {
    // column length of 1
    ldy(Imm(0x0));
    JMP(RenderUnderPart);
}

int RowOfBricks() {
    // load area type obtained from area offset pointer
    ldy(Abs(AreaType));
    // check for cloud type override
    lda(Abs(CloudTypeOverride));
    BEQ(DrawBricks);
    // if cloud type, override area type
    ldy(Imm(0x4));
}

int DrawBricks() {
    // get appropriate metatile
    lda(Abs(offsetof(G, BrickMetatiles), y));
    // and go render it
    JMP(GetRow);
}

int RowOfSolidBlocks() {
    // load area type obtained from area offset pointer
    ldy(Abs(AreaType));
    // get metatile
    lda(Abs(offsetof(G, SolidBlockMetatiles), y));
}

int GetRow() {
    // store metatile here
    pha();
    // get row number, load length
    JSR(ChkLrgObjLength);
}

int DrawRow() {
    ldx(Abs(0x7));
    // set vertical height of 1
    ldy(Imm(0x0));
    pla();
    // render object
    JMP(RenderUnderPart);
}

int ColumnOfBricks() {
    // load area type obtained from area offset
    ldy(Abs(AreaType));
    // get metatile (no cloud override as for row)
    lda(Abs(offsetof(G, BrickMetatiles), y));
    JMP(GetRow2);
}

int ColumnOfSolidBlocks() {
    // load area type obtained from area offset
    ldy(Abs(AreaType));
    // get metatile
    lda(Abs(offsetof(G, SolidBlockMetatiles), y));
}

int GetRow2() {
    // save metatile to stack for now
    pha();
    // get length and row
    JSR(GetLrgObjAttrib);
    // restore metatile
    pla();
    // get starting row
    ldx(Abs(0x7));
    // now render the column
    JMP(RenderUnderPart);
}

int BulletBillCannon() {
    // get row and length of bullet bill cannon
    JSR(GetLrgObjAttrib);
    // start at first row
    ldx(Abs(0x7));
    // render bullet bill cannon
    lda(Imm(0x64));
    sta(Abs(MetatileBuffer, x));
    inx();
    // done yet?
    dey();
    BMI(SetupCannon);
    // if not, render middle part
    lda(Imm(0x65));
    sta(Abs(MetatileBuffer, x));
    inx();
    // done yet?
    dey();
    BMI(SetupCannon);
    // if not, render bottom until length expires
    lda(Imm(0x66));
    JSR(RenderUnderPart);
}

int SetupCannon() {
    // get offset for data used by cannons and whirlpools
    ldx(Abs(Cannon_Offset));
    // get proper vertical coordinate for cannon
    JSR(GetAreaObjYPosition);
    // and store it here
    sta(Abs(Cannon_Y_Position, x));
    lda(Abs(CurrentPageLoc));
    // store page number for cannon here
    sta(Abs(Cannon_PageLoc, x));
    // get proper horizontal coordinate for cannon
    JSR(GetAreaObjXPosition);
    // and store it here
    sta(Abs(Cannon_X_Position, x));
    inx();
    // increment and check offset
    cpx(Imm(0x6));
    // if not yet reached sixth cannon, branch to save offset
    BCC(StrCOffset);
    // otherwise initialize it
    ldx(Imm(0x0));
}

int StrCOffset() {
    // save new offset and leave
    stx(Abs(Cannon_Offset));
    return 0;
}

int StaircaseObject() {
    // check and load length
    JSR(ChkLrgObjLength);
    // if length already loaded, skip init part
    BCC(NextStair);
    // start past the end for the bottom
    lda(Imm(0x9));
    // of the staircase
    sta(Abs(StaircaseControl));
}

int NextStair() {
    // move onto next step (or first if starting)
    dec(Abs(StaircaseControl));
    ldy(Abs(StaircaseControl));
    // get starting row and height to render
    ldx(Abs(offsetof(G, StaircaseRowData), y));
    lda(Abs(offsetof(G, StaircaseHeightData), y));
    tay();
    // now render solid block staircase
    lda(Imm(0x61));
    JMP(RenderUnderPart);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    // find empty space in enemy object buffer
    JSR(FindEmptyEnemySlot);
    // get horizontal coordinate for jumpspring
    JSR(GetAreaObjXPosition);
    // and store
    sta(Abs(Enemy_X_Position, x));
    // store page location of jumpspring
    lda(Abs(CurrentPageLoc));
    sta(Abs(Enemy_PageLoc, x));
    // get vertical coordinate for jumpspring
    JSR(GetAreaObjYPosition);
    // and store
    sta(Abs(Enemy_Y_Position, x));
    // store as permanent coordinate here
    sta(Abs(Jumpspring_FixedYPos, x));
    lda(Imm(JumpspringObject));
    // write jumpspring object to enemy object buffer
    sta(Abs(Enemy_ID, x));
    ldy(Imm(0x1));
    // store vertical high byte
    sty(Abs(Enemy_Y_HighPos, x));
    // set flag for enemy object buffer
    inc(Abs(Enemy_Flag, x));
    ldx(Abs(0x7));
    // draw metatiles in two rows where jumpspring is
    lda(Imm(0x67));
    sta(Abs(MetatileBuffer, x));
    lda(Imm(0x68));
    sta(Abs(((MetatileBuffer) + (1)), x));
    return 0;
}

int Hidden1UpBlock() {
    // if flag not set, do not render object
    lda(Abs(Hidden1UpFlag));
    BEQ(ExitDecBlock);
    // if set, init for the next one
    lda(Imm(0x0));
    sta(Abs(Hidden1UpFlag));
    // jump to code shared with unbreakable bricks
    JMP(BrickWithItem);
}

int QuestionBlock() {
    // get value from level decoder routine
    JSR(GetAreaObjectID);
    // go to render it
    JMP(DrawQBlk);
}

int BrickWithCoins() {
    // initialize multi-coin timer flag
    lda(Imm(0x0));
    sta(Abs(BrickCoinTimerFlag));
}

int BrickWithItem() {
    // save area object ID
    JSR(GetAreaObjectID);
    sty(Abs(0x7));
    // load default adder for bricks with lines
    lda(Imm(0x0));
    // check level type for ground level
    ldy(Abs(AreaType));
    dey();
    // if ground type, do not start with 5
    BEQ(BWithL);
    // otherwise use adder for bricks without lines
    lda(Imm(0x5));
}

int BWithL() {
    // add object ID to adder
    clc();
    adc(Abs(0x7));
    // use as offset for metatile
    tay();
}

int DrawQBlk() {
    // get appropriate metatile for brick (question block
    lda(Abs(offsetof(G, BrickQBlockMetatiles), y));
    // if branched to here from question block routine)
    pha();
    // get row from location byte
    JSR(GetLrgObjAttrib);
    // now render the object
    JMP(DrawRow);
}

int GetAreaObjectID() {
    // get value saved from area parser routine
    lda(Abs(0x0));
    sec();
    // possibly residual code
    sbc(Imm(0x0));
    // save to Y
    tay();
}

int ExitDecBlock() {
    return 0;
}

int Hole_Empty() {
    // get lower nybble and save as length
    JSR(ChkLrgObjLength);
    // skip this part if length already loaded
    BCC(NoWhirlP);
    // check for water type level
    lda(Abs(AreaType));
    // if not water type, skip this part
    BNE(NoWhirlP);
    // get offset for data used by cannons and whirlpools
    ldx(Abs(Whirlpool_Offset));
    // get proper vertical coordinate of where we're at
    JSR(GetAreaObjXPosition);
    sec();
    // subtract 16 pixels
    sbc(Imm(0x10));
    // store as left extent of whirlpool
    sta(Abs(Whirlpool_LeftExtent, x));
    // get page location of where we're at
    lda(Abs(CurrentPageLoc));
    // subtract borrow
    sbc(Imm(0x0));
    // save as page location of whirlpool
    sta(Abs(Whirlpool_PageLoc, x));
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
    sta(Abs(Whirlpool_Length, x));
    inx();
    // increment and check offset
    cpx(Imm(0x5));
    // if not yet reached fifth whirlpool, branch to save offset
    BCC(StrWOffset);
    // otherwise initialize it
    ldx(Imm(0x0));
}

int StrWOffset() {
    // save new offset here
    stx(Abs(Whirlpool_Offset));
}

int NoWhirlP() {
    // get appropriate metatile, then
    ldx(Abs(AreaType));
    // render the hole proper
    lda(Abs(offsetof(G, HoleMetatiles), x));
    ldx(Imm(0x8));
    // start at ninth row and go to bottom, run RenderUnderPart
    ldy(Imm(0xf));
}

int RenderUnderPart() {
    // store vertical length to render
    sty(Abs(AreaObjectHeight));
    // check current spot to see if there's something
    ldy(Abs(MetatileBuffer, x));
    // we need to keep, if nothing, go ahead
    BEQ(DrawThisRow);
    cpy(Imm(0x17));
    // if middle part (tree ledge), wait until next row
    BEQ(WaitOneRow);
    cpy(Imm(0x1a));
    // if middle part (mushroom ledge), wait until next row
    BEQ(WaitOneRow);
    cpy(Imm(0xc0));
    // if question block w/ coin, overwrite
    BEQ(DrawThisRow);
    cpy(Imm(0xc0));
    // if any other metatile with palette 3, wait until next row
    BCS(WaitOneRow);
    cpy(Imm(0x54));
    // if cracked rock terrain, overwrite
    BNE(DrawThisRow);
    cmp(Imm(0x50));
    // if stem top of mushroom, wait until next row
    BEQ(WaitOneRow);
}

int DrawThisRow() {
    // render contents of A from routine that called this
    sta(Abs(MetatileBuffer, x));
}

int WaitOneRow() {
    inx();
    // stop rendering if we're at the bottom of the screen
    cpx(Imm(0xd));
    BCS(ExitUPartR);
    // decrement, and stop rendering if there is no more length
    ldy(Abs(AreaObjectHeight));
    dey();
    BPL(RenderUnderPart);
}

int ExitUPartR() {
    return 0;
}

int ChkLrgObjLength() {
    // get row location and size (length if branched to from here)
    JSR(GetLrgObjAttrib);
}

int ChkLrgObjFixedLength() {
    // check for set length counter
    lda(Abs(AreaObjectLength, x));
    // clear carry flag for not just starting
    clc();
    // if counter not set, load it, otherwise leave alone
    BPL(LenSet);
    // save length into length counter
    tya();
    sta(Abs(AreaObjectLength, x));
    // set carry flag if just starting
    sec();
}

int LenSet() {
    return 0;
}

int GetLrgObjAttrib() {
    // get offset saved from area obj decoding routine
    ldy(Abs(AreaObjOffsetBuffer, x));
    // get first byte of level object
    lda(IndY((AreaData)));
    anda(Imm(0b1111));
    // save row location
    sta(Abs(0x7));
    iny();
    // get next byte, save lower nybble (length or height)
    lda(IndY((AreaData)));
    // as Y, then leave
    anda(Imm(0b1111));
    tay();
    return 0;
}

int GetAreaObjXPosition() {
    // multiply current offset where we're at by 16
    lda(Abs(CurrentColumnPos));
    // to obtain horizontal pixel coordinate
    asl();
    asl();
    asl();
    asl();
    return 0;
}

int GetAreaObjYPosition() {
    // multiply value by 16
    lda(Abs(0x7));
    asl();
    // this will give us the proper vertical pixel coordinate
    asl();
    asl();
    asl();
    clc();
    // add 32 pixels for the status bar
    adc(Imm(32));
    return 0;
}

int GetBlockBufferAddr() {
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
    lda(Abs(((offsetof(G, BlockBufferAddr)) + (2)), y));
    sta(Abs(0x7));
    pla();
    // pull from stack, mask out high nybble
    anda(Imm(0b1111));
    clc();
    // add to low byte
    adc(Abs(offsetof(G, BlockBufferAddr), y));
    // store here and leave
    sta(Abs(0x6));
    return 0;
}

int LoadAreaPointer() {
    // find it and store it here
    JSR(FindAreaPointer);
    sta(Abs(AreaPointer));
}

int GetAreaType() {
    // mask out all but d6 and d5
    anda(Imm(0b1100000));
    asl();
    rol();
    rol();
    // make %0xx00000 into %000000xx
    rol();
    // save 2 MSB as area type
    sta(Abs(AreaType));
    return 0;
}

int FindAreaPointer() {
    // load offset from world variable
    ldy(Abs(WorldNumber));
    lda(Abs(offsetof(G, WorldAddrOffsets), y));
    // add area number used to find data
    clc();
    adc(Abs(AreaNumber));
    tay();
    // from there we have our area pointer
    lda(Abs(offsetof(G, AreaAddrOffsets), y));
    return 0;
}

int GetAreaDataAddrs() {
    // use 2 MSB for Y
    lda(Abs(AreaPointer));
    JSR(GetAreaType);
    tay();
    // mask out all but 5 LSB
    lda(Abs(AreaPointer));
    anda(Imm(0b11111));
    // save as low offset
    sta(Abs(AreaAddrsLOffset));
    // load base value with 2 altered MSB,
    lda(Abs(offsetof(G, EnemyAddrHOffsets), y));
    // then add base value to 5 LSB, result
    clc();
    // becomes offset for level data
    adc(Abs(AreaAddrsLOffset));
    tay();
    // use offset to load pointer
    lda(Abs(offsetof(G, EnemyDataAddrLow), y));
    sta(Abs(EnemyDataLow));
    lda(Abs(offsetof(G, EnemyDataAddrHigh), y));
    sta(Abs(EnemyDataHigh));
    // use area type as offset
    ldy(Abs(AreaType));
    // do the same thing but with different base value
    lda(Abs(offsetof(G, AreaDataHOffsets), y));
    clc();
    adc(Abs(AreaAddrsLOffset));
    tay();
    // use this offset to load another pointer
    lda(Abs(offsetof(G, AreaDataAddrLow), y));
    sta(Abs(AreaDataLow));
    lda(Abs(offsetof(G, AreaDataAddrHigh), y));
    sta(Abs(AreaDataHigh));
    // load first byte of header
    ldy(Imm(0x0));
    lda(IndY((AreaData)));
    // save it to the stack for now
    pha();
    // save 3 LSB for foreground scenery or bg color control
    anda(Imm(0b111));
    cmp(Imm(0x4));
    BCC(StoreFore);
    // if 4 or greater, save value here as bg color control
    sta(Abs(BackgroundColorCtrl));
    lda(Imm(0x0));
}

int StoreFore() {
    // if less, save value here as foreground scenery
    sta(Abs(ForegroundScenery));
    // pull byte from stack and push it back
    pla();
    pha();
    // save player entrance control bits
    anda(Imm(0b111000));
    // shift bits over to LSBs
    lsr();
    lsr();
    lsr();
    // save value here as player entrance control
    sta(Abs(PlayerEntranceCtrl));
    // pull byte again but do not push it back
    pla();
    // save 2 MSB for game timer setting
    anda(Imm(0b11000000));
    clc();
    // rotate bits over to LSBs
    rol();
    rol();
    rol();
    // save value here as game timer setting
    sta(Abs(GameTimerSetting));
    iny();
    // load second byte of header
    lda(IndY((AreaData)));
    // save to stack
    pha();
    // mask out all but lower nybble
    anda(Imm(0b1111));
    sta(Abs(TerrainControl));
    // pull and push byte to copy it to A
    pla();
    pha();
    // save 2 MSB for background scenery type
    anda(Imm(0b110000));
    lsr();
    // shift bits to LSBs
    lsr();
    lsr();
    lsr();
    // save as background scenery
    sta(Abs(BackgroundScenery));
    pla();
    anda(Imm(0b11000000));
    clc();
    // rotate bits over to LSBs
    rol();
    rol();
    rol();
    // if set to 3, store here
    cmp(Imm(0b11));
    // and nullify other value
    BNE(StoreStyle);
    // otherwise store value in other place
    sta(Abs(CloudTypeOverride));
    lda(Imm(0x0));
}

int StoreStyle() {
    sta(Abs(AreaStyle));
    // increment area data address by 2 bytes
    lda(Abs(AreaDataLow));
    clc();
    adc(Imm(0x2));
    sta(Abs(AreaDataLow));
    lda(Abs(AreaDataHigh));
    adc(Imm(0x0));
    sta(Abs(AreaDataHigh));
    return 0;
}

int GameMode() {
    lda(Abs(OperMode_Task));
    static JUMP_ENTRY jumptable[4] = {
        InitializeArea,
        ScreenRoutines,
        SecondaryGameSetup,
        GameCoreRoutine,
    };
    JMP(jumptable[a.read()]);
}

int GameCoreRoutine() {
    // get which player is on the screen
    ldx(Abs(CurrentPlayer));
    // use appropriate player's controller bits
    lda(Abs(SavedJoypadBits, x));
    // as the master controller bits
    sta(Abs(SavedJoypadBits));
    // execute one of many possible subs
    JSR(GameRoutines);
    // check major task of operating mode
    lda(Abs(OperMode_Task));
    // if we are supposed to be here,
    cmp(Imm(0x3));
    // branch to the game engine itself
    BCS(GameEngine);
    return 0;
}

int GameEngine() {
    // process fireballs and air bubbles
    JSR(ProcFireball_Bubble);
    ldx(Imm(0x0));
}

int ProcELoop() {
    // put incremented offset in X as enemy object offset
    stx(Abs(ObjectOffset));
    // process enemy objects
    JSR(EnemiesAndLoopsCore);
    // process floatey numbers
    JSR(FloateyNumbersRoutine);
    inx();
    // do these two subroutines until the whole buffer is done
    cpx(Imm(0x6));
    BNE(ProcELoop);
    // get offscreen bits for player object
    JSR(GetPlayerOffscreenBits);
    // get relative coordinates for player object
    JSR(RelativePlayerPosition);
    // draw the player
    JSR(PlayerGfxHandler);
    // replace block objects with metatiles if necessary
    JSR(BlockObjMT_Updater);
    ldx(Imm(0x1));
    // set offset for second
    stx(Abs(ObjectOffset));
    // process second block object
    JSR(BlockObjectsCore);
    dex();
    // set offset for first
    stx(Abs(ObjectOffset));
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
    lda(Abs(Player_Y_HighPos));
    // if player is below the screen, don't bother with the music
    cmp(Imm(0x2));
    BPL(NoChgMus);
    // if star mario invincibility timer at zero,
    lda(Abs(StarInvincibleTimer));
    // skip this part
    BEQ(ClrPlrPal);
    cmp(Imm(0x4));
    // if not yet at a certain point, continue
    BNE(NoChgMus);
    // if interval timer not yet expired,
    lda(Abs(IntervalTimerControl));
    // branch ahead, don't bother with the music
    BNE(NoChgMus);
    // to re-attain appropriate level music
    JSR(GetAreaMusic);
}

int NoChgMus() {
    // get invincibility timer
    ldy(Abs(StarInvincibleTimer));
    // get frame counter
    lda(Abs(FrameCounter));
    // if timer still above certain point,
    cpy(Imm(0x8));
    // branch to cycle player's palette quickly
    BCS(CycleTwo);
    // otherwise, divide by 8 to cycle every eighth frame
    lsr();
    lsr();
}

int CycleTwo() {
    // if branched here, divide by 2 to cycle every other frame
    lsr();
    // do sub to cycle the palette (note: shares fire flower code)
    JSR(CyclePlayerPalette);
    // then skip this sub to finish up the game engine
    JMP(SaveAB);
}

int ClrPlrPal() {
    // do sub to clear player's palette bits in attributes
    JSR(ResetPalStar);
}

int SaveAB() {
    // save current A and B button
    lda(Abs(A_B_Buttons));
    // into temp variable to be used on next frame
    sta(Abs(PreviousA_B_Buttons));
    lda(Imm(0x0));
    // nullify left and right buttons temp variable
    sta(Abs(Left_Right_Buttons));
}

int UpdScrollVar() {
    lda(Abs(VRAM_Buffer_AddrCtrl));
    // if vram address controller set to 6 (one of two $0341s)
    cmp(Imm(0x6));
    // then branch to leave
    BEQ(ExitEng);
    // otherwise check number of tasks
    lda(Abs(AreaParserTaskNum));
    BNE(RunParser);
    // get horizontal scroll in 0-31 or $00-$20 range
    lda(Abs(ScrollThirtyTwo));
    // check to see if exceeded $21
    cmp(Imm(0x20));
    // branch to leave if not
    BMI(ExitEng);
    lda(Abs(ScrollThirtyTwo));
    // otherwise subtract $20 to set appropriately
    sbc(Imm(0x20));
    // and store
    sta(Abs(ScrollThirtyTwo));
    // reset vram buffer offset used in conjunction with
    lda(Imm(0x0));
    // level graphics buffer at $0341-$035f
    sta(Abs(VRAM_Buffer2_Offset));
}

int RunParser() {
    // update the name table with more level graphics
    JSR(AreaParserTaskHandler);
}

int ExitEng() {
    // and after all that, we're finally done!
    return 0;
}

int ScrollHandler() {
    // load value saved here
    lda(Abs(Player_X_Scroll));
    clc();
    // add value used by left/right platforms
    adc(Abs(Platform_X_Scroll));
    // save as new value here to impose force on scroll
    sta(Abs(Player_X_Scroll));
    // check scroll lock flag
    lda(Abs(ScrollLock));
    // skip a bunch of code here if set
    BNE(InitScrlAmt);
    lda(Abs(Player_Pos_ForScroll));
    // check player's horizontal screen position
    cmp(Imm(0x50));
    // if less than 80 pixels to the right, branch
    BCC(InitScrlAmt);
    // if timer related to player's side collision
    lda(Abs(SideCollisionTimer));
    // not expired, branch
    BNE(InitScrlAmt);
    // get value and decrement by one
    ldy(Abs(Player_X_Scroll));
    // if value originally set to zero or otherwise
    dey();
    // negative for left movement, branch
    BMI(InitScrlAmt);
    iny();
    // if value $01, branch and do not decrement
    cpy(Imm(0x2));
    BCC(ChkNearMid);
    // otherwise decrement by one
    dey();
}

int ChkNearMid() {
    lda(Abs(Player_Pos_ForScroll));
    // check player's horizontal screen position
    cmp(Imm(0x70));
    // if less than 112 pixels to the right, branch
    BCC(ScrollScreen);
    // otherwise get original value undecremented
    ldy(Abs(Player_X_Scroll));
}

int ScrollScreen() {
    tya();
    // save value here
    sta(Abs(ScrollAmount));
    clc();
    // add to value already set here
    adc(Abs(ScrollThirtyTwo));
    // save as new value here
    sta(Abs(ScrollThirtyTwo));
    tya();
    clc();
    // add to left side coordinate
    adc(Abs(ScreenLeft_X_Pos));
    // save as new left side coordinate
    sta(Abs(ScreenLeft_X_Pos));
    // save here also
    sta(Abs(HorizontalScroll));
    lda(Abs(ScreenLeft_PageLoc));
    // add carry to page location for left
    adc(Imm(0x0));
    // side of the screen
    sta(Abs(ScreenLeft_PageLoc));
    // get LSB of page location
    anda(Imm(0x1));
    // save as temp variable for PPU register 1 mirror
    sta(Abs(0x0));
    // get PPU register 1 mirror
    lda(Abs(Mirror_PPU_CTRL_REG1));
    // save all bits except d0
    anda(Imm(0b11111110));
    // get saved bit here and save in PPU register 1
    ora(Abs(0x0));
    // mirror to be used to set name table later
    sta(Abs(Mirror_PPU_CTRL_REG1));
    // figure out where the right side is
    JSR(GetScreenPosition);
    lda(Imm(0x8));
    // set scroll timer (residual, not used elsewhere)
    sta(Abs(ScrollIntervalTimer));
    // skip this part
    JMP(ChkPOffscr);
}

int InitScrlAmt() {
    lda(Imm(0x0));
    // initialize value here
    sta(Abs(ScrollAmount));
}

int ChkPOffscr() {
    // set X for player offset
    ldx(Imm(0x0));
    // get horizontal offscreen bits for player
    JSR(GetXOffscreenBits);
    // save them here
    sta(Abs(0x0));
    // load default offset (left side)
    ldy(Imm(0x0));
    // if d7 of offscreen bits are set,
    asl();
    // branch with default offset
    BCS(KeepOnscr);
    // otherwise use different offset (right side)
    iny();
    lda(Abs(0x0));
    // check offscreen bits for d5 set
    anda(Imm(0b100000));
    // if not set, branch ahead of this part
    BEQ(InitPlatScrl);
}

int KeepOnscr() {
    // get left or right side coordinate based on offset
    lda(Abs(ScreenEdge_X_Pos, y));
    sec();
    // subtract amount based on offset
    sbc(Abs(offsetof(G, X_SubtracterData), y));
    // store as player position to prevent movement further
    sta(Abs(Player_X_Position));
    // get left or right page location based on offset
    lda(Abs(ScreenEdge_PageLoc, y));
    // subtract borrow
    sbc(Imm(0x0));
    // save as player's page location
    sta(Abs(Player_PageLoc));
    // check saved controller bits
    lda(Abs(Left_Right_Buttons));
    // against bits based on offset
    cmp(Abs(offsetof(G, OffscrJoypadBitsData), y));
    // if not equal, branch
    BEQ(InitPlatScrl);
    lda(Imm(0x0));
    // otherwise nullify horizontal speed of player
    sta(Abs(Player_X_Speed));
}

int InitPlatScrl() {
    // nullify platform force imposed on scroll
    lda(Imm(0x0));
    sta(Abs(Platform_X_Scroll));
    return 0;
}

int GetScreenPosition() {
    // get coordinate of screen's left boundary
    lda(Abs(ScreenLeft_X_Pos));
    clc();
    // add 255 pixels
    adc(Imm(0xff));
    // store as coordinate of screen's right boundary
    sta(Abs(ScreenRight_X_Pos));
    // get page number where left boundary is
    lda(Abs(ScreenLeft_PageLoc));
    // add carry from before
    adc(Imm(0x0));
    // store as page number where right boundary is
    sta(Abs(ScreenRight_PageLoc));
    return 0;
}

int GameRoutines() {
    // run routine based on number (a few of these routines are
    lda(Abs(GameEngineSubroutine));
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

int PlayerEntrance() {
    // check for mode of alternate entry
    lda(Abs(AltEntranceControl));
    cmp(Imm(0x2));
    // if found, branch to enter from pipe or with vine
    BEQ(EntrMode2);
    lda(Imm(0x0));
    // if vertical position above a certain
    ldy(Abs(Player_Y_Position));
    // point, nullify controller bits and continue
    cpy(Imm(0x30));
    // with player movement code, do not return
    BCC(AutoControlPlayer);
    // check player entry bits from header
    lda(Abs(PlayerEntranceCtrl));
    cmp(Imm(0x6));
    // if set to 6 or 7, execute pipe intro code
    BEQ(ChkBehPipe);
    // otherwise branch to normal entry
    cmp(Imm(0x7));
    BNE(PlayerRdy);
}

int ChkBehPipe() {
    // check for sprite attributes
    lda(Abs(Player_SprAttrib));
    // branch if found
    BNE(IntroEntr);
    lda(Imm(0x1));
    // force player to walk to the right
    JMP(AutoControlPlayer);
}

int IntroEntr() {
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    // decrement timer for change of area
    dec(Abs(ChangeAreaTimer));
    // branch to exit if not yet expired
    BNE(ExitEntr);
    // set flag to skip world and lives display
    inc(Abs(DisableIntermediate));
    // jump to increment to next area and set modes
    JMP(NextArea);
}

int EntrMode2() {
    // if controller override bits set here,
    lda(Abs(JoypadOverride));
    // branch to enter with vine
    BNE(VineEntr);
    // otherwise, set value here then execute sub
    lda(Imm(0xff));
    // to move player upwards (note $ff = -1)
    JSR(MovePlayerYAxis);
    // check to see if player is at a specific coordinate
    lda(Abs(Player_Y_Position));
    // if player risen to a certain point (this requires pipes
    cmp(Imm(0x91));
    // to be at specific height to look/function right) branch
    BCC(PlayerRdy);
    // to the last part, otherwise leave
    return 0;
}

int VineEntr() {
    lda(Abs(VineHeight));
    // check vine height
    cmp(Imm(0x60));
    // if vine not yet reached maximum height, branch to leave
    BNE(ExitEntr);
    // get player's vertical coordinate
    lda(Abs(Player_Y_Position));
    // check player's vertical coordinate against preset value
    cmp(Imm(0x99));
    // load default values to be written to
    ldy(Imm(0x0));
    // this value moves player to the right off the vine
    lda(Imm(0x1));
    // if vertical coordinate < preset value, use defaults
    BCC(OffVine);
    lda(Imm(0x3));
    // otherwise set player state to climbing
    sta(Abs(Player_State));
    // increment value in Y
    iny();
    // set block in block buffer to cover hole, then
    lda(Imm(0x8));
    // use same value to force player to climb
    sta(Abs(((Block_Buffer_1) + (0xb4))));
}

int OffVine() {
    // set collision detection disable flag
    sty(Abs(DisableCollisionDet));
    // use contents of A to move player up or right, execute sub
    JSR(AutoControlPlayer);
    lda(Abs(Player_X_Position));
    // check player's horizontal position
    cmp(Imm(0x48));
    // if not far enough to the right, branch to leave
    BCC(ExitEntr);
}

int PlayerRdy() {
    // set routine to be executed by game engine next frame
    lda(Imm(0x8));
    sta(Abs(GameEngineSubroutine));
    // set to face player to the right
    lda(Imm(0x1));
    sta(Abs(PlayerFacingDir));
    // init A
    lsr();
    // init mode of entry
    sta(Abs(AltEntranceControl));
    // init collision detection disable flag
    sta(Abs(DisableCollisionDet));
    // nullify controller override bits
    sta(Abs(JoypadOverride));
}

int ExitEntr() {
    // leave!
    return 0;
}

int AutoControlPlayer() {
    // override controller bits with contents of A if executing here
    sta(Abs(SavedJoypadBits));
}

int PlayerCtrlRoutine() {
    // check task here
    lda(Abs(GameEngineSubroutine));
    // if certain value is set, branch to skip controller bit loading
    cmp(Imm(0xb));
    BEQ(SizeChk);
    // are we in a water type area?
    lda(Abs(AreaType));
    // if not, branch
    BNE(SaveJoyp);
    ldy(Abs(Player_Y_HighPos));
    // if not in vertical area between
    dey();
    // status bar and bottom, branch
    BNE(DisJoyp);
    lda(Abs(Player_Y_Position));
    // if nearing the bottom of the screen or
    cmp(Imm(0xd0));
    // not in the vertical area between status bar or bottom,
    BCC(SaveJoyp);
}

int DisJoyp() {
    // disable controller bits
    lda(Imm(0x0));
    sta(Abs(SavedJoypadBits));
}

int SaveJoyp() {
    // otherwise store A and B buttons in $0a
    lda(Abs(SavedJoypadBits));
    anda(Imm(0b11000000));
    sta(Abs(A_B_Buttons));
    // store left and right buttons in $0c
    lda(Abs(SavedJoypadBits));
    anda(Imm(0b11));
    sta(Abs(Left_Right_Buttons));
    // store up and down buttons in $0b
    lda(Abs(SavedJoypadBits));
    anda(Imm(0b1100));
    sta(Abs(Up_Down_Buttons));
    // check for pressing down
    anda(Imm(0b100));
    // if not, branch
    BEQ(SizeChk);
    // check player's state
    lda(Abs(Player_State));
    // if not on the ground, branch
    BNE(SizeChk);
    // check left and right
    ldy(Abs(Left_Right_Buttons));
    // if neither pressed, branch
    BEQ(SizeChk);
    lda(Imm(0x0));
    // if pressing down while on the ground,
    sta(Abs(Left_Right_Buttons));
    // nullify directional bits
    sta(Abs(Up_Down_Buttons));
}

int SizeChk() {
    // run movement subroutines
    JSR(PlayerMovementSubs);
    // is player small?
    ldy(Imm(0x1));
    lda(Abs(PlayerSize));
    BNE(ChkMoveDir);
    // check for if crouching
    ldy(Imm(0x0));
    lda(Abs(CrouchingFlag));
    // if not, branch ahead
    BEQ(ChkMoveDir);
    // if big and crouching, load y with 2
    ldy(Imm(0x2));
}

int ChkMoveDir() {
    // set contents of Y as player's bounding box size control
    sty(Abs(Player_BoundBoxCtrl));
    // set moving direction to right by default
    lda(Imm(0x1));
    // check player's horizontal speed
    ldy(Abs(Player_X_Speed));
    // if not moving at all horizontally, skip this part
    BEQ(PlayerSubs);
    // if moving to the right, use default moving direction
    BPL(SetMoveDir);
    // otherwise change to move to the left
    asl();
}

int SetMoveDir() {
    // set moving direction
    sta(Abs(Player_MovingDir));
}

int PlayerSubs() {
    // move the screen if necessary
    JSR(ScrollHandler);
    // get player's offscreen bits
    JSR(GetPlayerOffscreenBits);
    // get coordinates relative to the screen
    JSR(RelativePlayerPosition);
    // set offset for player object
    ldx(Imm(0x0));
    // get player's bounding box coordinates
    JSR(BoundingBoxCore);
    // do collision detection and process
    JSR(PlayerBGCollision);
    lda(Abs(Player_Y_Position));
    // check to see if player is higher than 64th pixel
    cmp(Imm(0x40));
    // if so, branch ahead
    BCC(PlayerHole);
    lda(Abs(GameEngineSubroutine));
    // if running end-of-level routine, branch ahead
    cmp(Imm(0x5));
    BEQ(PlayerHole);
    // if running player entrance routine, branch ahead
    cmp(Imm(0x7));
    BEQ(PlayerHole);
    // if running routines $00-$03, branch ahead
    cmp(Imm(0x4));
    BCC(PlayerHole);
    lda(Abs(Player_SprAttrib));
    // otherwise nullify player's
    anda(Imm(0b11011111));
    // background priority flag
    sta(Abs(Player_SprAttrib));
}

int PlayerHole() {
    // check player's vertical high byte
    lda(Abs(Player_Y_HighPos));
    // for below the screen
    cmp(Imm(0x2));
    // branch to leave if not that far down
    BMI(ExitCtrl);
    ldx(Imm(0x1));
    // set scroll lock
    stx(Abs(ScrollLock));
    ldy(Imm(0x4));
    // set value here
    sty(Abs(0x7));
    // use X as flag, and clear for cloud level
    ldx(Imm(0x0));
    // check game timer expiration flag
    ldy(Abs(GameTimerExpiredFlag));
    // if set, branch
    BNE(HoleDie);
    // check for cloud type override
    ldy(Abs(CloudTypeOverride));
    // skip to last part if found
    BNE(ChkHoleX);
}

int HoleDie() {
    // set flag in X for player death
    inx();
    ldy(Abs(GameEngineSubroutine));
    // check for some other routine running
    cpy(Imm(0xb));
    // if so, branch ahead
    BEQ(ChkHoleX);
    // check value here
    ldy(Abs(DeathMusicLoaded));
    // if already set, branch to next part
    BNE(HoleBottom);
    iny();
    // otherwise play death music
    sty(Abs(EventMusicQueue));
    // and set value here
    sty(Abs(DeathMusicLoaded));
}

int HoleBottom() {
    ldy(Imm(0x6));
    // change value here
    sty(Abs(0x7));
}

int ChkHoleX() {
    // compare vertical high byte with value set here
    cmp(Abs(0x7));
    // if less, branch to leave
    BMI(ExitCtrl);
    // otherwise decrement flag in X
    dex();
    // if flag was clear, branch to set modes and other values
    BMI(CloudExit);
    // check to see if music is still playing
    ldy(Abs(EventMusicBuffer));
    // branch to leave if so
    BNE(ExitCtrl);
    // otherwise set to run lose life routine
    lda(Imm(0x6));
    // on next frame
    sta(Abs(GameEngineSubroutine));
}

int ExitCtrl() {
    // leave
    return 0;
}

int CloudExit() {
    lda(Imm(0x0));
    // clear controller override bits if any are set
    sta(Abs(JoypadOverride));
    // do sub to set secondary mode
    JSR(SetEntr);
    // set mode of entry to 3
    inc(Abs(AltEntranceControl));
    return 0;
}

int Vine_AutoClimb() {
    // check to see whether player reached position
    lda(Abs(Player_Y_HighPos));
    // above the status bar yet and if so, set modes
    BNE(AutoClimb);
    lda(Abs(Player_Y_Position));
    cmp(Imm(0xe4));
    BCC(SetEntr);
}

int AutoClimb() {
    // set controller bits override to up
    lda(Imm(0b1000));
    sta(Abs(JoypadOverride));
    // set player state to climbing
    ldy(Imm(0x3));
    sty(Abs(Player_State));
    JMP(AutoControlPlayer);
}

int SetEntr() {
    // set starting position to override
    lda(Imm(0x2));
    sta(Abs(AltEntranceControl));
    // set modes
    JMP(ChgAreaMode);
}

int VerticalPipeEntry() {
    // set 1 as movement amount
    lda(Imm(0x1));
    // do sub to move player downwards
    JSR(MovePlayerYAxis);
    // do sub to scroll screen with saved force if necessary
    JSR(ScrollHandler);
    // load default mode of entry
    ldy(Imm(0x0));
    // check warp zone control variable/flag
    lda(Abs(WarpZoneControl));
    // if set, branch to use mode 0
    BNE(ChgAreaPipe);
    iny();
    // check for castle level type
    lda(Abs(AreaType));
    cmp(Imm(0x3));
    // if not castle type level, use mode 1
    BNE(ChgAreaPipe);
    iny();
    // otherwise use mode 2
    JMP(ChgAreaPipe);
}

int MovePlayerYAxis() {
    clc();
    // add contents of A to player position
    adc(Abs(Player_Y_Position));
    sta(Abs(Player_Y_Position));
    return 0;
}

int SideExitPipeEntry() {
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    ldy(Imm(0x2));
}

int ChgAreaPipe() {
    // decrement timer for change of area
    dec(Abs(ChangeAreaTimer));
    BNE(ExitCAPipe);
    // when timer expires set mode of alternate entry
    sty(Abs(AltEntranceControl));
}

int ChgAreaMode() {
    // set flag to disable screen output
    inc(Abs(DisableScreenFlag));
    lda(Imm(0x0));
    // set secondary mode of operation
    sta(Abs(OperMode_Task));
    // disable sprite 0 check
    sta(Abs(Sprite0HitDetectFlag));
}

int ExitCAPipe() {
    // leave
    return 0;
}

int EnterSidePipe() {
    // set player's horizontal speed
    lda(Imm(0x8));
    sta(Abs(Player_X_Speed));
    // set controller right button by default
    ldy(Imm(0x1));
    // mask out higher nybble of player's
    lda(Abs(Player_X_Position));
    // horizontal position
    anda(Imm(0b1111));
    BNE(RightPipe);
    // if lower nybble = 0, set as horizontal speed
    sta(Abs(Player_X_Speed));
    // and nullify controller bit override here
    tay();
}

int RightPipe() {
    // use contents of Y to
    tya();
    // execute player control routine with ctrl bits nulled
    JSR(AutoControlPlayer);
    return 0;
}

int PlayerChangeSize() {
    // check master timer control
    lda(Abs(TimerControl));
    // for specific moment in time
    cmp(Imm(0xf8));
    // branch if before or after that point
    BNE(EndChgSize);
    // otherwise run code to get growing/shrinking going
    JMP(InitChangeSize);
}

int EndChgSize() {
    // check again for another specific moment
    cmp(Imm(0xc4));
    // and branch to leave if before or after that point
    BNE(ExitChgSize);
    // otherwise do sub to init timer control and set routine
    JSR(DonePlayerTask);
}

int ExitChgSize() {
    // and then leave
    return 0;
}

int PlayerInjuryBlink() {
    // check master timer control
    lda(Abs(TimerControl));
    // for specific moment in time
    cmp(Imm(0xf0));
    // branch if before that point
    BCS(ExitBlink);
    // check again for another specific point
    cmp(Imm(0xc8));
    // branch if at that point, and not before or after
    BEQ(DonePlayerTask);
    // otherwise run player control routine
    JMP(PlayerCtrlRoutine);
}

int ExitBlink() {
    // do unconditional branch to leave
    BNE(ExitBoth);
}

int InitChangeSize() {
    // if growing/shrinking flag already set
    ldy(Abs(PlayerChangeSizeFlag));
    // then branch to leave
    BNE(ExitBoth);
    // otherwise initialize player's animation frame control
    sty(Abs(PlayerAnimCtrl));
    // set growing/shrinking flag
    inc(Abs(PlayerChangeSizeFlag));
    lda(Abs(PlayerSize));
    // invert player's size
    eor(Imm(0x1));
    sta(Abs(PlayerSize));
}

int ExitBoth() {
    // leave
    return 0;
}

int PlayerDeath() {
    // check master timer control
    lda(Abs(TimerControl));
    // for specific moment in time
    cmp(Imm(0xf0));
    // branch to leave if before that point
    BCS(ExitDeath);
    // otherwise run player control routine
    JMP(PlayerCtrlRoutine);
}

int DonePlayerTask() {
    lda(Imm(0x0));
    // initialize master timer control to continue timers
    sta(Abs(TimerControl));
    lda(Imm(0x8));
    // set player control routine to run next frame
    sta(Abs(GameEngineSubroutine));
    // leave
    return 0;
}

int PlayerFireFlower() {
    // check master timer control
    lda(Abs(TimerControl));
    // for specific moment in time
    cmp(Imm(0xc0));
    // branch if at moment, not before or after
    BEQ(ResetPalFireFlower);
    // get frame counter
    lda(Abs(FrameCounter));
    lsr();
    // divide by four to change every four frames
    lsr();
}

int CyclePlayerPalette() {
    // mask out all but d1-d0 (previously d3-d2)
    anda(Imm(0x3));
    // store result here to use as palette bits
    sta(Abs(0x0));
    // get player attributes
    lda(Abs(Player_SprAttrib));
    // save any other bits but palette bits
    anda(Imm(0b11111100));
    // add palette bits
    ora(Abs(0x0));
    // store as new player attributes
    sta(Abs(Player_SprAttrib));
    // and leave
    return 0;
}

int ResetPalFireFlower() {
    // do sub to init timer control and run player control routine
    JSR(DonePlayerTask);
}

int ResetPalStar() {
    // get player attributes
    lda(Abs(Player_SprAttrib));
    // mask out palette bits to force palette 0
    anda(Imm(0b11111100));
    // store as new player attributes
    sta(Abs(Player_SprAttrib));
    // and leave
    return 0;
}

int ExitDeath() {
    // leave from death routine
    return 0;
}

int FlagpoleSlide() {
    // check special use enemy slot
    lda(Abs(((Enemy_ID) + (5))));
    // for flagpole flag object
    cmp(Imm(FlagpoleFlagObject));
    // if not found, branch to something residual
    BNE(NoFPObj);
    // load flagpole sound
    lda(Abs(FlagpoleSoundQueue));
    // into square 1's sfx queue
    sta(Abs(Square1SoundQueue));
    lda(Imm(0x0));
    // init flagpole sound queue
    sta(Abs(FlagpoleSoundQueue));
    ldy(Abs(Player_Y_Position));
    // check to see if player has slid down
    cpy(Imm(0x9e));
    // far enough, and if so, branch with no controller bits set
    BCS(SlidePlayer);
    // otherwise force player to climb down (to slide)
    lda(Imm(0x4));
}

int SlidePlayer() {
    // jump to player control routine
    JMP(AutoControlPlayer);
}

int NoFPObj() {
    // increment to next routine (this may
    inc(Abs(GameEngineSubroutine));
    // be residual code)
    return 0;
}

int PlayerEndLevel() {
    // force player to walk to the right
    lda(Imm(0x1));
    JSR(AutoControlPlayer);
    // check player's vertical position
    lda(Abs(Player_Y_Position));
    cmp(Imm(0xae));
    // if player is not yet off the flagpole, skip this part
    BCC(ChkStop);
    // if scroll lock not set, branch ahead to next part
    lda(Abs(ScrollLock));
    // because we only need to do this part once
    BEQ(ChkStop);
    lda(Imm(EndOfLevelMusic));
    // load win level music in event music queue
    sta(Abs(EventMusicQueue));
    lda(Imm(0x0));
    // turn off scroll lock to skip this part later
    sta(Abs(ScrollLock));
}

int ChkStop() {
    // get player collision bits
    lda(Abs(Player_CollisionBits));
    // check for d0 set
    lsr();
    // if d0 set, skip to next part
    BCS(RdyNextA);
    // if star flag task control already set,
    lda(Abs(StarFlagTaskControl));
    // go ahead with the rest of the code
    BNE(InCastle);
    // otherwise set task control now (this gets ball rolling!)
    inc(Abs(StarFlagTaskControl));
}

int InCastle() {
    // set player's background priority bit to
    lda(Imm(0b100000));
    // give illusion of being inside the castle
    sta(Abs(Player_SprAttrib));
}

int RdyNextA() {
    lda(Abs(StarFlagTaskControl));
    // if star flag task control not yet set
    cmp(Imm(0x5));
    // beyond last valid task number, branch to leave
    BNE(ExitNA);
    // increment level number used for game logic
    inc(Abs(LevelNumber));
    lda(Abs(LevelNumber));
    // check to see if we have yet reached level -4
    cmp(Imm(0x3));
    // and skip this last part here if not
    BNE(NextArea);
    // get world number as offset
    ldy(Abs(WorldNumber));
    // check third area coin tally for bonus 1-ups
    lda(Abs(CoinTallyFor1Ups));
    // against minimum value, if player has not collected
    cmp(Abs(offsetof(G, Hidden1UpCoinAmts), y));
    // at least this number of coins, leave flag clear
    BCC(NextArea);
    // otherwise set hidden 1-up box control flag
    inc(Abs(Hidden1UpFlag));
}

int NextArea() {
    // increment area number used for address loader
    inc(Abs(AreaNumber));
    // get new level pointer
    JSR(LoadAreaPointer);
    // set flag to load new game timer
    inc(Abs(FetchNewGameTimerFlag));
    // do sub to set secondary mode, disable screen and sprite 0
    JSR(ChgAreaMode);
    // reset halfway page to 0 (beginning)
    sta(Abs(HalfwayPage));
    lda(Imm(Silence));
    // silence music and leave
    sta(Abs(EventMusicQueue));
}

int ExitNA() {
    return 0;
}

int PlayerMovementSubs() {
    // set A to init crouch flag by default
    lda(Imm(0x0));
    // is player small?
    ldy(Abs(PlayerSize));
    // if so, branch
    BNE(SetCrouch);
    // check state of player
    lda(Abs(Player_State));
    // if not on the ground, branch
    BNE(ProcMove);
    // load controller bits for up and down
    lda(Abs(Up_Down_Buttons));
    // single out bit for down button
    anda(Imm(0b100));
}

int SetCrouch() {
    // store value in crouch flag
    sta(Abs(CrouchingFlag));
}

int ProcMove() {
    // run sub related to jumping and swimming
    JSR(PlayerPhysicsSub);
    // if growing/shrinking flag set,
    lda(Abs(PlayerChangeSizeFlag));
    // branch to leave
    BNE(NoMoveSub);
    lda(Abs(Player_State));
    // get player state
    cmp(Imm(0x3));
    // if climbing, branch ahead, leave timer unset
    BEQ(MoveSubs);
    ldy(Imm(0x18));
    // otherwise reset timer now
    sty(Abs(ClimbSideTimer));
}

int MoveSubs() {
    static JUMP_ENTRY jumptable[4] = {
        OnGroundStateSub,
        JumpSwimSub,
        FallingSub,
        ClimbingSub,
    };
    JMP(jumptable[a.read()]);
}

int NoMoveSub() {
    return 0;
}

int OnGroundStateSub() {
    // do a sub to set animation frame timing
    JSR(GetPlayerAnimSpeed);
    lda(Abs(Left_Right_Buttons));
    // if left/right controller bits not set, skip instruction
    BEQ(GndMove);
    // otherwise set new facing direction
    sta(Abs(PlayerFacingDir));
}

int GndMove() {
    // do a sub to impose friction on player's walk/run
    JSR(ImposeFriction);
    // do another sub to move player horizontally
    JSR(MovePlayerHorizontally);
    // set returned value as player's movement speed for scroll
    sta(Abs(Player_X_Scroll));
    return 0;
}

int FallingSub() {
    lda(Abs(VerticalForceDown));
    // dump vertical movement force for falling into main one
    sta(Abs(VerticalForce));
    // movement force, then skip ahead to process left/right movement
    JMP(LRAir);
}

int JumpSwimSub() {
    // if player's vertical speed zero
    ldy(Abs(Player_Y_Speed));
    // or moving downwards, branch to falling
    BPL(DumpFall);
    lda(Abs(A_B_Buttons));
    // check to see if A button is being pressed
    anda(Imm(A_Button));
    // and was pressed in previous frame
    anda(Abs(PreviousA_B_Buttons));
    // if so, branch elsewhere
    BNE(ProcSwim);
    // get vertical position player jumped from
    lda(Abs(JumpOrigin_Y_Position));
    sec();
    // subtract current from original vertical coordinate
    sbc(Abs(Player_Y_Position));
    // compare to value set here to see if player is in mid-jump
    cmp(Abs(DiffToHaltJump));
    // or just starting to jump, if just starting, skip ahead
    BCC(ProcSwim);
}

int DumpFall() {
    // otherwise dump falling into main fractional
    lda(Abs(VerticalForceDown));
    sta(Abs(VerticalForce));
}

int ProcSwim() {
    // if swimming flag not set,
    lda(Abs(SwimmingFlag));
    // branch ahead to last part
    BEQ(LRAir);
    // do a sub to get animation frame timing
    JSR(GetPlayerAnimSpeed);
    lda(Abs(Player_Y_Position));
    // check vertical position against preset value
    cmp(Imm(0x14));
    // if not yet reached a certain position, branch ahead
    BCS(LRWater);
    lda(Imm(0x18));
    // otherwise set fractional
    sta(Abs(VerticalForce));
}

int LRWater() {
    // check left/right controller bits (check for swimming)
    lda(Abs(Left_Right_Buttons));
    // if not pressing any, skip
    BEQ(LRAir);
    // otherwise set facing direction accordingly
    sta(Abs(PlayerFacingDir));
}

int LRAir() {
    // check left/right controller bits (check for jumping/falling)
    lda(Abs(Left_Right_Buttons));
    // if not pressing any, skip
    BEQ(JSMove);
    // otherwise process horizontal movement
    JSR(ImposeFriction);
}

int JSMove() {
    // do a sub to move player horizontally
    JSR(MovePlayerHorizontally);
    // set player's speed here, to be used for scroll later
    sta(Abs(Player_X_Scroll));
    lda(Abs(GameEngineSubroutine));
    // check for specific routine selected
    cmp(Imm(0xb));
    // branch if not set to run
    BNE(ExitMov1);
    lda(Imm(0x28));
    // otherwise set fractional
    sta(Abs(VerticalForce));
}

int ExitMov1() {
    // jump to move player vertically, then leave
    JMP(MovePlayerVertically);
}

int ClimbingSub() {
    lda(Abs(Player_YMF_Dummy));
    // add movement force to dummy variable
    clc();
    // save with carry
    adc(Abs(Player_Y_MoveForce));
    sta(Abs(Player_YMF_Dummy));
    // set default adder here
    ldy(Imm(0x0));
    // get player's vertical speed
    lda(Abs(Player_Y_Speed));
    // if not moving upwards, branch
    BPL(MoveOnVine);
    // otherwise set adder to $ff
    dey();
}

int MoveOnVine() {
    // store adder here
    sty(Abs(0x0));
    // add carry to player's vertical position
    adc(Abs(Player_Y_Position));
    // and store to move player up or down
    sta(Abs(Player_Y_Position));
    lda(Abs(Player_Y_HighPos));
    // add carry to player's page location
    adc(Abs(0x0));
    // and store
    sta(Abs(Player_Y_HighPos));
    // compare left/right controller bits
    lda(Abs(Left_Right_Buttons));
    // to collision flag
    anda(Abs(Player_CollisionBits));
    // if not set, skip to end
    BEQ(InitCSTimer);
    // otherwise check timer
    ldy(Abs(ClimbSideTimer));
    // if timer not expired, branch to leave
    BNE(ExitCSub);
    ldy(Imm(0x18));
    // otherwise set timer now
    sty(Abs(ClimbSideTimer));
    // set default offset here
    ldx(Imm(0x0));
    // get facing direction
    ldy(Abs(PlayerFacingDir));
    // move right button controller bit to carry
    lsr();
    // if controller right pressed, branch ahead
    BCS(ClimbFD);
    inx();
    // otherwise increment offset by 2 bytes
    inx();
}

int ClimbFD() {
    // check to see if facing right
    dey();
    // if so, branch, do not increment
    BEQ(CSetFDir);
    // otherwise increment by 1 byte
    inx();
}

int CSetFDir() {
    lda(Abs(Player_X_Position));
    // add or subtract from player's horizontal position
    clc();
    // using value here as adder and X as offset
    adc(Abs(offsetof(G, ClimbAdderLow), x));
    sta(Abs(Player_X_Position));
    // add or subtract carry or borrow using value here
    lda(Abs(Player_PageLoc));
    // from the player's page location
    adc(Abs(offsetof(G, ClimbAdderHigh), x));
    sta(Abs(Player_PageLoc));
    // get left/right controller bits again
    lda(Abs(Left_Right_Buttons));
    // invert them and store them while player
    eor(Imm(0b11));
    // is on vine to face player in opposite direction
    sta(Abs(PlayerFacingDir));
}

int ExitCSub() {
    // then leave
    return 0;
}

int InitCSTimer() {
    // initialize timer here
    sta(Abs(ClimbSideTimer));
    return 0;
}

int PlayerPhysicsSub() {
    // check player state
    lda(Abs(Player_State));
    cmp(Imm(0x3));
    // if not climbing, branch
    BNE(CheckForJumping);
    ldy(Imm(0x0));
    // get controller bits for up/down
    lda(Abs(Up_Down_Buttons));
    // check against player's collision detection bits
    anda(Abs(Player_CollisionBits));
    // if not pressing up or down, branch
    BEQ(ProcClimb);
    iny();
    // check for pressing up
    anda(Imm(0b1000));
    BNE(ProcClimb);
    iny();
}

int ProcClimb() {
    // load value here
    ldx(Abs(offsetof(G, Climb_Y_MForceData), y));
    // store as vertical movement force
    stx(Abs(Player_Y_MoveForce));
    // load default animation timing
    lda(Imm(0x8));
    // load some other value here
    ldx(Abs(offsetof(G, Climb_Y_SpeedData), y));
    // store as vertical speed
    stx(Abs(Player_Y_Speed));
    // if climbing down, use default animation timing value
    BMI(SetCAnim);
    // otherwise divide timer setting by 2
    lsr();
}

int SetCAnim() {
    // store animation timer setting and leave
    sta(Abs(PlayerAnimTimerSet));
    return 0;
}

int CheckForJumping() {
    // if jumpspring animating,
    lda(Abs(JumpspringAnimCtrl));
    // skip ahead to something else
    BNE(NoJump);
    // check for A button press
    lda(Abs(A_B_Buttons));
    anda(Imm(A_Button));
    // if not, branch to something else
    BEQ(NoJump);
    // if button not pressed in previous frame, branch
    anda(Abs(PreviousA_B_Buttons));
    BEQ(ProcJumping);
}

int NoJump() {
    // otherwise, jump to something else
    JMP(X_Physics);
}

int ProcJumping() {
    // check player state
    lda(Abs(Player_State));
    // if on the ground, branch
    BEQ(InitJS);
    // if swimming flag not set, jump to do something else
    lda(Abs(SwimmingFlag));
    // to prevent midair jumping, otherwise continue
    BEQ(NoJump);
    // if jump/swim timer nonzero, branch
    lda(Abs(JumpSwimTimer));
    BNE(InitJS);
    // check player's vertical speed
    lda(Abs(Player_Y_Speed));
    // if player's vertical speed motionless or down, branch
    BPL(InitJS);
    // if timer at zero and player still rising, do not swim
    JMP(X_Physics);
}

int InitJS() {
    // set jump/swim timer
    lda(Imm(0x20));
    sta(Abs(JumpSwimTimer));
    // initialize vertical force and dummy variable
    ldy(Imm(0x0));
    sty(Abs(Player_YMF_Dummy));
    sty(Abs(Player_Y_MoveForce));
    // get vertical high and low bytes of jump origin
    lda(Abs(Player_Y_HighPos));
    // and store them next to each other here
    sta(Abs(JumpOrigin_Y_HighPos));
    lda(Abs(Player_Y_Position));
    sta(Abs(JumpOrigin_Y_Position));
    // set player state to jumping/swimming
    lda(Imm(0x1));
    sta(Abs(Player_State));
    // check value related to walking/running speed
    lda(Abs(Player_XSpeedAbsolute));
    cmp(Imm(0x9));
    // branch if below certain values, increment Y
    BCC(ChkWtr);
    // for each amount equal or exceeded
    iny();
    cmp(Imm(0x10));
    BCC(ChkWtr);
    iny();
    cmp(Imm(0x19));
    BCC(ChkWtr);
    iny();
    cmp(Imm(0x1c));
    // note that for jumping, range is 0-4 for Y
    BCC(ChkWtr);
    iny();
}

int ChkWtr() {
    // set value here (apparently always set to 1)
    lda(Imm(0x1));
    sta(Abs(DiffToHaltJump));
    // if swimming flag disabled, branch
    lda(Abs(SwimmingFlag));
    BEQ(GetYPhy);
    // otherwise set Y to 5, range is 5-6
    ldy(Imm(0x5));
    // if whirlpool flag not set, branch
    lda(Abs(Whirlpool_Flag));
    BEQ(GetYPhy);
    // otherwise increment to 6
    iny();
}

int GetYPhy() {
    // store appropriate jump/swim
    lda(Abs(offsetof(G, JumpMForceData), y));
    // data here
    sta(Abs(VerticalForce));
    lda(Abs(offsetof(G, FallMForceData), y));
    sta(Abs(VerticalForceDown));
    lda(Abs(offsetof(G, InitMForceData), y));
    sta(Abs(Player_Y_MoveForce));
    lda(Abs(offsetof(G, PlayerYSpdData), y));
    sta(Abs(Player_Y_Speed));
    // if swimming flag disabled, branch
    lda(Abs(SwimmingFlag));
    BEQ(PJumpSnd);
    // load swim/goomba stomp sound into
    lda(Imm(Sfx_EnemyStomp));
    // square 1's sfx queue
    sta(Abs(Square1SoundQueue));
    lda(Abs(Player_Y_Position));
    // check vertical low byte of player position
    cmp(Imm(0x14));
    // if below a certain point, branch
    BCS(X_Physics);
    // otherwise reset player's vertical speed
    lda(Imm(0x0));
    // and jump to something else to keep player
    sta(Abs(Player_Y_Speed));
    // from swimming above water level
    JMP(X_Physics);
}

int PJumpSnd() {
    // load big mario's jump sound by default
    lda(Imm(Sfx_BigJump));
    // is mario big?
    ldy(Abs(PlayerSize));
    BEQ(SJumpSnd);
    // if not, load small mario's jump sound
    lda(Imm(Sfx_SmallJump));
}

int SJumpSnd() {
    // store appropriate jump sound in square 1 sfx queue
    sta(Abs(Square1SoundQueue));
}

int X_Physics() {
    ldy(Imm(0x0));
    // init value here
    sty(Abs(0x0));
    // if mario is on the ground, branch
    lda(Abs(Player_State));
    BEQ(ProcPRun);
    // check something that seems to be related
    lda(Abs(Player_XSpeedAbsolute));
    // to mario's speed
    cmp(Imm(0x19));
    // if =>$19 branch here
    BCS(GetXPhy);
    // if not branch elsewhere
    BCC(ChkRFast);
}

int ProcPRun() {
    // if mario on the ground, increment Y
    iny();
    // check area type
    lda(Abs(AreaType));
    // if water type, branch
    BEQ(ChkRFast);
    // decrement Y by default for non-water type area
    dey();
    // get left/right controller bits
    lda(Abs(Left_Right_Buttons));
    // check against moving direction
    cmp(Abs(Player_MovingDir));
    // if controller bits <> moving direction, skip this part
    BNE(ChkRFast);
    // check for b button pressed
    lda(Abs(A_B_Buttons));
    anda(Imm(B_Button));
    // if pressed, skip ahead to set timer
    BNE(SetRTmr);
    // check for running timer set
    lda(Abs(RunningTimer));
    // if set, branch
    BNE(GetXPhy);
}

int ChkRFast() {
    // if running timer not set or level type is water,
    iny();
    // increment Y again and temp variable in memory
    inc(Abs(0x0));
    lda(Abs(RunningSpeed));
    // if running speed set here, branch
    BNE(FastXSp);
    lda(Abs(Player_XSpeedAbsolute));
    // otherwise check player's walking/running speed
    cmp(Imm(0x21));
    // if less than a certain amount, branch ahead
    BCC(GetXPhy);
}

int FastXSp() {
    // if running speed set or speed => $21 increment $00
    inc(Abs(0x0));
    // and jump ahead
    JMP(GetXPhy);
}

int SetRTmr() {
    // if b button pressed, set running timer
    lda(Imm(0xa));
    sta(Abs(RunningTimer));
}

int GetXPhy() {
    // get maximum speed to the left
    lda(Abs(offsetof(G, MaxLeftXSpdData), y));
    sta(Abs(MaximumLeftSpeed));
    // check for specific routine running
    lda(Abs(GameEngineSubroutine));
    // (player entrance)
    cmp(Imm(0x7));
    // if not running, skip and use old value of Y
    BNE(GetXPhy2);
    // otherwise set Y to 3
    ldy(Imm(0x3));
}

int GetXPhy2() {
    // get maximum speed to the right
    lda(Abs(offsetof(G, MaxRightXSpdData), y));
    sta(Abs(MaximumRightSpeed));
    // get other value in memory
    ldy(Abs(0x0));
    // get value using value in memory as offset
    lda(Abs(offsetof(G, FrictionData), y));
    sta(Abs(FrictionAdderLow));
    lda(Imm(0x0));
    // init something here
    sta(Abs(FrictionAdderHigh));
    lda(Abs(PlayerFacingDir));
    // check facing direction against moving direction
    cmp(Abs(Player_MovingDir));
    // if the same, branch to leave
    BEQ(ExitPhy);
    // otherwise shift d7 of friction adder low into carry
    asl(Abs(FrictionAdderLow));
    // then rotate carry onto d0 of friction adder high
    rol(Abs(FrictionAdderHigh));
}

int ExitPhy() {
    // and then leave
    return 0;
}

int GetPlayerAnimSpeed() {
    // initialize offset in Y
    ldy(Imm(0x0));
    // check player's walking/running speed
    lda(Abs(Player_XSpeedAbsolute));
    // against preset amount
    cmp(Imm(0x1c));
    // if greater than a certain amount, branch ahead
    BCS(SetRunSpd);
    // otherwise increment Y
    iny();
    // compare against lower amount
    cmp(Imm(0xe));
    // if greater than this but not greater than first, skip increment
    BCS(ChkSkid);
    // otherwise increment Y again
    iny();
}

int ChkSkid() {
    // get controller bits
    lda(Abs(SavedJoypadBits));
    // mask out A button
    anda(Imm(0b1111111));
    // if no other buttons pressed, branch ahead of all this
    BEQ(SetAnimSpd);
    // mask out all others except left and right
    anda(Imm(0x3));
    // check against moving direction
    cmp(Abs(Player_MovingDir));
    // if left/right controller bits <> moving direction, branch
    BNE(ProcSkid);
    // otherwise set zero value here
    lda(Imm(0x0));
}

int SetRunSpd() {
    // store zero or running speed here
    sta(Abs(RunningSpeed));
    JMP(SetAnimSpd);
}

int ProcSkid() {
    // check player's walking/running speed
    lda(Abs(Player_XSpeedAbsolute));
    // against one last amount
    cmp(Imm(0xb));
    // if greater than this amount, branch
    BCS(SetAnimSpd);
    lda(Abs(PlayerFacingDir));
    // otherwise use facing direction to set moving direction
    sta(Abs(Player_MovingDir));
    lda(Imm(0x0));
    // nullify player's horizontal speed
    sta(Abs(Player_X_Speed));
    // and dummy variable for player
    sta(Abs(Player_X_MoveForce));
}

int SetAnimSpd() {
    // get animation timer setting using Y as offset
    lda(Abs(offsetof(G, PlayerAnimTmrData), y));
    sta(Abs(PlayerAnimTimerSet));
    return 0;
}

int ImposeFriction() {
    // perform AND between left/right controller bits and collision flag
    anda(Abs(Player_CollisionBits));
    // then compare to zero (this instruction is redundant)
    cmp(Imm(0x0));
    // if any bits set, branch to next part
    BNE(JoypFrict);
    lda(Abs(Player_X_Speed));
    // if player has no horizontal speed, branch ahead to last part
    BEQ(SetAbsSpd);
    // if player moving to the right, branch to slow
    BPL(RghtFrict);
    // otherwise logic dictates player moving left, branch to slow
    BMI(LeftFrict);
}

int JoypFrict() {
    // put right controller bit into carry
    lsr();
    // if left button pressed, carry = 0, thus branch
    BCC(RghtFrict);
}

int LeftFrict() {
    // load value set here
    lda(Abs(Player_X_MoveForce));
    clc();
    // add to it another value set here
    adc(Abs(FrictionAdderLow));
    // store here
    sta(Abs(Player_X_MoveForce));
    lda(Abs(Player_X_Speed));
    // add value plus carry to horizontal speed
    adc(Abs(FrictionAdderHigh));
    // set as new horizontal speed
    sta(Abs(Player_X_Speed));
    // compare against maximum value for right movement
    cmp(Abs(MaximumRightSpeed));
    // if horizontal speed greater negatively, branch
    BMI(XSpdSign);
    // otherwise set preset value as horizontal speed
    lda(Abs(MaximumRightSpeed));
    // thus slowing the player's left movement down
    sta(Abs(Player_X_Speed));
    // skip to the end
    JMP(SetAbsSpd);
}

int RghtFrict() {
    // load value set here
    lda(Abs(Player_X_MoveForce));
    sec();
    // subtract from it another value set here
    sbc(Abs(FrictionAdderLow));
    // store here
    sta(Abs(Player_X_MoveForce));
    lda(Abs(Player_X_Speed));
    // subtract value plus borrow from horizontal speed
    sbc(Abs(FrictionAdderHigh));
    // set as new horizontal speed
    sta(Abs(Player_X_Speed));
    // compare against maximum value for left movement
    cmp(Abs(MaximumLeftSpeed));
    // if horizontal speed greater positively, branch
    BPL(XSpdSign);
    // otherwise set preset value as horizontal speed
    lda(Abs(MaximumLeftSpeed));
    // thus slowing the player's right movement down
    sta(Abs(Player_X_Speed));
}

int XSpdSign() {
    // if player not moving or moving to the right,
    cmp(Imm(0x0));
    // branch and leave horizontal speed value unmodified
    BPL(SetAbsSpd);
    eor(Imm(0xff));
    // otherwise get two's compliment to get absolute
    clc();
    // unsigned walking/running speed
    adc(Imm(0x1));
}

int SetAbsSpd() {
    // store walking/running speed here and leave
    sta(Abs(Player_XSpeedAbsolute));
    return 0;
}

int ProcFireball_Bubble() {
    // check player's status
    lda(Abs(PlayerStatus));
    cmp(Imm(0x2));
    // if not fiery, branch
    BCC(ProcAirBubbles);
    lda(Abs(A_B_Buttons));
    // check for b button pressed
    anda(Imm(B_Button));
    // branch if not pressed
    BEQ(ProcFireballs);
    anda(Abs(PreviousA_B_Buttons));
    // if button pressed in previous frame, branch
    BNE(ProcFireballs);
    // load fireball counter
    lda(Abs(FireballCounter));
    // get LSB and use as offset for buffer
    anda(Imm(0b1));
    tax();
    // load fireball state
    lda(Abs(Fireball_State, x));
    // if not inactive, branch
    BNE(ProcFireballs);
    // if player too high or too low, branch
    ldy(Abs(Player_Y_HighPos));
    dey();
    BNE(ProcFireballs);
    // if player crouching, branch
    lda(Abs(CrouchingFlag));
    BNE(ProcFireballs);
    // if player's state = climbing, branch
    lda(Abs(Player_State));
    cmp(Imm(0x3));
    BEQ(ProcFireballs);
    // play fireball sound effect
    lda(Imm(Sfx_Fireball));
    sta(Abs(Square1SoundQueue));
    // load state
    lda(Imm(0x2));
    sta(Abs(Fireball_State, x));
    // copy animation frame timer setting
    ldy(Abs(PlayerAnimTimerSet));
    // into fireball throwing timer
    sty(Abs(FireballThrowingTimer));
    dey();
    // decrement and store in player's animation timer
    sty(Abs(PlayerAnimTimer));
    // increment fireball counter
    inc(Abs(FireballCounter));
}

int ProcFireballs() {
    ldx(Imm(0x0));
    // process first fireball object
    JSR(FireballObjCore);
    ldx(Imm(0x1));
    // process second fireball object, then do air bubbles
    JSR(FireballObjCore);
}

int ProcAirBubbles() {
    // if not water type level, skip the rest of this
    lda(Abs(AreaType));
    BNE(BublExit);
    // otherwise load counter and use as offset
    ldx(Imm(0x2));
}

int BublLoop() {
    // store offset
    stx(Abs(ObjectOffset));
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
}

int BublExit() {
    // then leave
    return 0;
}

int FireballObjCore() {
    // store offset as current object
    stx(Abs(ObjectOffset));
    // check for d7 = 1
    lda(Abs(Fireball_State, x));
    asl();
    // if so, branch to get relative coordinates and draw explosion
    BCS(FireballExplosion);
    // if fireball inactive, branch to leave
    ldy(Abs(Fireball_State, x));
    BEQ(NoFBall);
    // if fireball state set to 1, skip this part and just run it
    dey();
    BEQ(RunFB);
    // get player's horizontal position
    lda(Abs(Player_X_Position));
    // add four pixels and store as fireball's horizontal position
    adc(Imm(0x4));
    sta(Abs(Fireball_X_Position, x));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // add carry and store as fireball's page location
    adc(Imm(0x0));
    sta(Abs(Fireball_PageLoc, x));
    // get player's vertical position and store
    lda(Abs(Player_Y_Position));
    sta(Abs(Fireball_Y_Position, x));
    // set high byte of vertical position
    lda(Imm(0x1));
    sta(Abs(Fireball_Y_HighPos, x));
    // get player's facing direction
    ldy(Abs(PlayerFacingDir));
    // decrement to use as offset here
    dey();
    // set horizontal speed of fireball accordingly
    lda(Abs(offsetof(G, FireballXSpdData), y));
    sta(Abs(Fireball_X_Speed, x));
    // set vertical speed of fireball
    lda(Imm(0x4));
    sta(Abs(Fireball_Y_Speed, x));
    lda(Imm(0x7));
    // set bounding box size control for fireball
    sta(Abs(Fireball_BoundBoxCtrl, x));
    // decrement state to 1 to skip this part from now on
    dec(Abs(Fireball_State, x));
}

int RunFB() {
    // add 7 to offset to use
    txa();
    // as fireball offset for next routines
    clc();
    adc(Imm(0x7));
    tax();
    // set downward movement force here
    lda(Imm(0x50));
    sta(Abs(0x0));
    // set maximum speed here
    lda(Imm(0x3));
    sta(Abs(0x2));
    lda(Imm(0x0));
    // do sub here to impose gravity on fireball and move vertically
    JSR(ImposeGravity);
    // do another sub to move it horizontally
    JSR(MoveObjectHorizontally);
    // return fireball offset to X
    ldx(Abs(ObjectOffset));
    // get relative coordinates
    JSR(RelativeFireballPosition);
    // get offscreen information
    JSR(GetFireballOffscreenBits);
    // get bounding box coordinates
    JSR(GetFireballBoundBox);
    // do fireball to background collision detection
    JSR(FireballBGCollision);
    // get fireball offscreen bits
    lda(Abs(FBall_OffscreenBits));
    // mask out certain bits
    anda(Imm(0b11001100));
    // if any bits still set, branch to kill fireball
    BNE(EraseFB);
    // do fireball to enemy collision detection and deal with collisions
    JSR(FireballEnemyCollision);
    // draw fireball appropriately and leave
    JMP(DrawFireball);
}

int EraseFB() {
    // erase fireball state
    lda(Imm(0x0));
    sta(Abs(Fireball_State, x));
}

int NoFBall() {
    // leave
    return 0;
}

int FireballExplosion() {
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
}

int BubbleCheck() {
    // get part of LSFR
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    anda(Imm(0x1));
    // store pseudorandom bit here
    sta(Abs(0x7));
    // get vertical coordinate for air bubble
    lda(Abs(Bubble_Y_Position, x));
    // if offscreen coordinate not set,
    cmp(Imm(0xf8));
    // branch to move air bubble
    BNE(MoveBubl);
    // if air bubble timer not expired,
    lda(Abs(AirBubbleTimer));
    // branch to leave, otherwise create new air bubble
    BNE(ExitBubl);
}

int SetupBubble() {
    // load default value here
    ldy(Imm(0x0));
    // get player's facing direction
    lda(Abs(PlayerFacingDir));
    // move d0 to carry
    lsr();
    // branch to use default value if facing left
    BCC(PosBubl);
    // otherwise load alternate value here
    ldy(Imm(0x8));
}

int PosBubl() {
    // use value loaded as adder
    tya();
    // add to player's horizontal position
    adc(Abs(Player_X_Position));
    // save as horizontal position for airbubble
    sta(Abs(Bubble_X_Position, x));
    lda(Abs(Player_PageLoc));
    // add carry to player's page location
    adc(Imm(0x0));
    // save as page location for airbubble
    sta(Abs(Bubble_PageLoc, x));
    lda(Abs(Player_Y_Position));
    // add eight pixels to player's vertical position
    clc();
    adc(Imm(0x8));
    // save as vertical position for air bubble
    sta(Abs(Bubble_Y_Position, x));
    lda(Imm(0x1));
    // set vertical high byte for air bubble
    sta(Abs(Bubble_Y_HighPos, x));
    // get pseudorandom bit, use as offset
    ldy(Abs(0x7));
    // get data for air bubble timer
    lda(Abs(offsetof(G, BubbleTimerData), y));
    // set air bubble timer
    sta(Abs(AirBubbleTimer));
}

int MoveBubl() {
    // get pseudorandom bit again, use as offset
    ldy(Abs(0x7));
    lda(Abs(Bubble_YMF_Dummy, x));
    // subtract pseudorandom amount from dummy variable
    sec();
    sbc(Abs(offsetof(G, Bubble_MForceData), y));
    // save dummy variable
    sta(Abs(Bubble_YMF_Dummy, x));
    lda(Abs(Bubble_Y_Position, x));
    // subtract borrow from airbubble's vertical coordinate
    sbc(Imm(0x0));
    // if below the status bar,
    cmp(Imm(0x20));
    // branch to go ahead and use to move air bubble upwards
    BCS(Y_Bubl);
    // otherwise set offscreen coordinate
    lda(Imm(0xf8));
}

int Y_Bubl() {
    // store as new vertical coordinate for air bubble
    sta(Abs(Bubble_Y_Position, x));
}

int ExitBubl() {
    // leave
    return 0;
}

int RunGameTimer() {
    // get primary mode of operation
    lda(Abs(OperMode));
    // branch to leave if in title screen mode
    BEQ(ExGTimer);
    lda(Abs(GameEngineSubroutine));
    // if routine number less than eight running,
    cmp(Imm(0x8));
    // branch to leave
    BCC(ExGTimer);
    // if running death routine,
    cmp(Imm(0xb));
    // branch to leave
    BEQ(ExGTimer);
    lda(Abs(Player_Y_HighPos));
    // if player below the screen,
    cmp(Imm(0x2));
    // branch to leave regardless of level type
    BCS(ExGTimer);
    // if game timer control not yet expired,
    lda(Abs(GameTimerCtrlTimer));
    // branch to leave
    BNE(ExGTimer);
    lda(Abs(GameTimerDisplay));
    // otherwise check game timer digits
    ora(Abs(((GameTimerDisplay) + (1))));
    ora(Abs(((GameTimerDisplay) + (2))));
    // if game timer digits at 000, branch to time-up code
    BEQ(TimeUpOn);
    // otherwise check first digit
    ldy(Abs(GameTimerDisplay));
    // if first digit not on 1,
    dey();
    // branch to reset game timer control
    BNE(ResGTCtrl);
    // otherwise check second and third digits
    lda(Abs(((GameTimerDisplay) + (1))));
    ora(Abs(((GameTimerDisplay) + (2))));
    // if timer not at 100, branch to reset game timer control
    BNE(ResGTCtrl);
    lda(Imm(TimeRunningOutMusic));
    // otherwise load time running out music
    sta(Abs(EventMusicQueue));
}

int ResGTCtrl() {
    // reset game timer control
    lda(Imm(0x18));
    sta(Abs(GameTimerCtrlTimer));
    // set offset for last digit
    ldy(Imm(0x23));
    // set value to decrement game timer digit
    lda(Imm(0xff));
    sta(Abs(((DigitModifier) + (5))));
    // do sub to decrement game timer slowly
    JSR(DigitsMathRoutine);
    // set status nybbles to update game timer display
    lda(Imm(0xa4));
    // do sub to update the display
    JMP(PrintStatusBarNumbers);
}

int TimeUpOn() {
    // init player status (note A will always be zero here)
    sta(Abs(PlayerStatus));
    // do sub to kill the player (note player is small here)
    JSR(ForceInjury);
    // set game timer expiration flag
    inc(Abs(GameTimerExpiredFlag));
}

int ExGTimer() {
    // leave
    return 0;
}

int WarpZoneObject() {
    // check for scroll lock flag
    lda(Abs(ScrollLock));
    // branch if not set to leave
    BEQ(ExGTimer);
    // check to see if player's vertical coordinate has
    lda(Abs(Player_Y_Position));
    // same bits set as in vertical high byte (why?)
    anda(Abs(Player_Y_HighPos));
    // if so, branch to leave
    BNE(ExGTimer);
    // otherwise nullify scroll lock flag
    sta(Abs(ScrollLock));
    // increment warp zone flag to make warp pipes for warp zone
    inc(Abs(WarpZoneControl));
    // kill this object
    JMP(EraseEnemyObject);
}

int ProcessWhirlpools() {
    // check for water type level
    lda(Abs(AreaType));
    // branch to leave if not found
    BNE(ExitWh);
    // otherwise initialize whirlpool flag
    sta(Abs(Whirlpool_Flag));
    // if master timer control set,
    lda(Abs(TimerControl));
    // branch to leave
    BNE(ExitWh);
    // otherwise start with last whirlpool data
    ldy(Imm(0x4));
}

int WhLoop() {
    // get left extent of whirlpool
    lda(Abs(Whirlpool_LeftExtent, y));
    clc();
    // add length of whirlpool
    adc(Abs(Whirlpool_Length, y));
    // store result as right extent here
    sta(Abs(0x2));
    // get page location
    lda(Abs(Whirlpool_PageLoc, y));
    // if none or page 0, branch to get next data
    BEQ(NextWh);
    // add carry
    adc(Imm(0x0));
    // store result as page location of right extent here
    sta(Abs(0x1));
    // get player's horizontal position
    lda(Abs(Player_X_Position));
    sec();
    // subtract left extent
    sbc(Abs(Whirlpool_LeftExtent, y));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // subtract borrow
    sbc(Abs(Whirlpool_PageLoc, y));
    // if player too far left, branch to get next data
    BMI(NextWh);
    // otherwise get right extent
    lda(Abs(0x2));
    sec();
    // subtract player's horizontal coordinate
    sbc(Abs(Player_X_Position));
    // get right extent's page location
    lda(Abs(0x1));
    // subtract borrow
    sbc(Abs(Player_PageLoc));
    // if player within right extent, branch to whirlpool code
    BPL(WhirlpoolActivate);
}

int NextWh() {
    // move onto next whirlpool data
    dey();
    // do this until all whirlpools are checked
    BPL(WhLoop);
}

int ExitWh() {
    // leave
    return 0;
}

int WhirlpoolActivate() {
    // get length of whirlpool
    lda(Abs(Whirlpool_Length, y));
    // divide by 2
    lsr();
    // save here
    sta(Abs(0x0));
    // get left extent of whirlpool
    lda(Abs(Whirlpool_LeftExtent, y));
    clc();
    // add length divided by 2
    adc(Abs(0x0));
    // save as center of whirlpool
    sta(Abs(0x1));
    // get page location
    lda(Abs(Whirlpool_PageLoc, y));
    // add carry
    adc(Imm(0x0));
    // save as page location of whirlpool center
    sta(Abs(0x0));
    // get frame counter
    lda(Abs(FrameCounter));
    // shift d0 into carry (to run on every other frame)
    lsr();
    // if d0 not set, branch to last part of code
    BCC(WhPull);
    // get center
    lda(Abs(0x1));
    sec();
    // subtract player's horizontal coordinate
    sbc(Abs(Player_X_Position));
    // get page location of center
    lda(Abs(0x0));
    // subtract borrow
    sbc(Abs(Player_PageLoc));
    // if player to the left of center, branch
    BPL(LeftWh);
    // otherwise slowly pull player left, towards the center
    lda(Abs(Player_X_Position));
    sec();
    // subtract one pixel
    sbc(Imm(0x1));
    // set player's new horizontal coordinate
    sta(Abs(Player_X_Position));
    lda(Abs(Player_PageLoc));
    // subtract borrow
    sbc(Imm(0x0));
    // jump to set player's new page location
    JMP(SetPWh);
}

int LeftWh() {
    // get player's collision bits
    lda(Abs(Player_CollisionBits));
    // shift d0 into carry
    lsr();
    // if d0 not set, branch
    BCC(WhPull);
    // otherwise slowly pull player right, towards the center
    lda(Abs(Player_X_Position));
    clc();
    // add one pixel
    adc(Imm(0x1));
    // set player's new horizontal coordinate
    sta(Abs(Player_X_Position));
    lda(Abs(Player_PageLoc));
    // add carry
    adc(Imm(0x0));
}

int SetPWh() {
    // set player's new page location
    sta(Abs(Player_PageLoc));
}

int WhPull() {
    lda(Imm(0x10));
    // set vertical movement force
    sta(Abs(0x0));
    lda(Imm(0x1));
    // set whirlpool flag to be used later
    sta(Abs(Whirlpool_Flag));
    // also set maximum vertical speed
    sta(Abs(0x2));
    lsr();
    // set X for player offset
    tax();
    // jump to put whirlpool effect on player vertically, do not return
    JMP(ImposeGravity);
}

int FlagpoleRoutine() {
    // set enemy object offset
    ldx(Imm(0x5));
    // to special use slot
    stx(Abs(ObjectOffset));
    lda(Abs(Enemy_ID, x));
    // if flagpole flag not found,
    cmp(Imm(FlagpoleFlagObject));
    // branch to leave
    BNE(ExitFlagP);
    lda(Abs(GameEngineSubroutine));
    // if flagpole slide routine not running,
    cmp(Imm(0x4));
    // branch to near the end of code
    BNE(SkipScore);
    lda(Abs(Player_State));
    // if player state not climbing,
    cmp(Imm(0x3));
    // branch to near the end of code
    BNE(SkipScore);
    // check flagpole flag's vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // if flagpole flag down to a certain point,
    cmp(Imm(0xaa));
    // branch to end the level
    BCS(GiveFPScr);
    // check player's vertical coordinate
    lda(Abs(Player_Y_Position));
    // if player down to a certain point,
    cmp(Imm(0xa2));
    // branch to end the level
    BCS(GiveFPScr);
    lda(Abs(Enemy_YMF_Dummy, x));
    // add movement amount to dummy variable
    adc(Imm(0xff));
    // save dummy variable
    sta(Abs(Enemy_YMF_Dummy, x));
    // get flag's vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // add 1 plus carry to move flag, and
    adc(Imm(0x1));
    // store vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(FlagpoleFNum_YMFDummy));
    // subtract movement amount from dummy variable
    sec();
    sbc(Imm(0xff));
    // save dummy variable
    sta(Abs(FlagpoleFNum_YMFDummy));
    lda(Abs(FlagpoleFNum_Y_Pos));
    // subtract one plus borrow to move floatey number,
    sbc(Imm(0x1));
    // and store vertical coordinate here
    sta(Abs(FlagpoleFNum_Y_Pos));
}

int SkipScore() {
    // jump to skip ahead and draw flag and floatey number
    JMP(FPGfx);
}

int GiveFPScr() {
    // get score offset from earlier (when player touched flagpole)
    ldy(Abs(FlagpoleScore));
    // get amount to award player points
    lda(Abs(offsetof(G, FlagpoleScoreMods), y));
    // get digit with which to award points
    ldx(Abs(offsetof(G, FlagpoleScoreDigits), y));
    // store in digit modifier
    sta(Abs(DigitModifier, x));
    // do sub to award player points depending on height of collision
    JSR(AddToScore);
    lda(Imm(0x5));
    // set to run end-of-level subroutine on next frame
    sta(Abs(GameEngineSubroutine));
}

int FPGfx() {
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // get relative coordinates
    JSR(RelativeEnemyPosition);
    // draw flagpole flag and floatey number
    JSR(FlagpoleGfxHandler);
}

int ExitFlagP() {
    return 0;
}

int JumpspringHandler() {
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // check master timer control
    lda(Abs(TimerControl));
    // branch to last section if set
    BNE(DrawJSpr);
    // check jumpspring frame control
    lda(Abs(JumpspringAnimCtrl));
    // branch to last section if not set
    BEQ(DrawJSpr);
    tay();
    // subtract one from frame control,
    dey();
    // the only way a poor nmos 6502 can
    tya();
    // mask out all but d1, original value still in Y
    anda(Imm(0b10));
    // if set, branch to move player up
    BNE(DownJSpr);
    inc(Abs(Player_Y_Position));
    // move player's vertical position down two pixels
    inc(Abs(Player_Y_Position));
    // skip to next part
    JMP(PosJSpr);
}

int DownJSpr() {
    // move player's vertical position up two pixels
    dec(Abs(Player_Y_Position));
    dec(Abs(Player_Y_Position));
}

int PosJSpr() {
    // get permanent vertical position
    lda(Abs(Jumpspring_FixedYPos, x));
    clc();
    // add value using frame control as offset
    adc(Abs(offsetof(G, Jumpspring_Y_PosData), y));
    // store as new vertical position
    sta(Abs(Enemy_Y_Position, x));
    // check frame control offset (second frame is $00)
    cpy(Imm(0x1));
    // if offset not yet at third frame ($01), skip to next part
    BCC(BounceJS);
    lda(Abs(A_B_Buttons));
    // check saved controller bits for A button press
    anda(Imm(A_Button));
    // skip to next part if A not pressed
    BEQ(BounceJS);
    // check for A button pressed in previous frame
    anda(Abs(PreviousA_B_Buttons));
    // skip to next part if so
    BNE(BounceJS);
    lda(Imm(0xf4));
    // otherwise write new jumpspring force here
    sta(Abs(JumpspringForce));
}

int BounceJS() {
    // check frame control offset again
    cpy(Imm(0x3));
    // skip to last part if not yet at fifth frame ($03)
    BNE(DrawJSpr);
    lda(Abs(JumpspringForce));
    // store jumpspring force as player's new vertical speed
    sta(Abs(Player_Y_Speed));
    lda(Imm(0x0));
    // initialize jumpspring frame control
    sta(Abs(JumpspringAnimCtrl));
}

int DrawJSpr() {
    // get jumpspring's relative coordinates
    JSR(RelativeEnemyPosition);
    // draw jumpspring
    JSR(EnemyGfxHandler);
    // check to see if we need to kill it
    JSR(OffscreenBoundsCheck);
    // if frame control at zero, don't bother
    lda(Abs(JumpspringAnimCtrl));
    // trying to animate it, just leave
    BEQ(ExJSpring);
    lda(Abs(JumpspringTimer));
    // if jumpspring timer not expired yet, leave
    BNE(ExJSpring);
    lda(Imm(0x4));
    // otherwise initialize jumpspring timer
    sta(Abs(JumpspringTimer));
    // increment frame control to animate jumpspring
    inc(Abs(JumpspringAnimCtrl));
}

int ExJSpring() {
    // leave
    return 0;
}

int Setup_Vine() {
    // load identifier for vine object
    lda(Imm(VineObject));
    // store in buffer
    sta(Abs(Enemy_ID, x));
    lda(Imm(0x1));
    // set flag for enemy object buffer
    sta(Abs(Enemy_Flag, x));
    lda(Abs(Block_PageLoc, y));
    // copy page location from previous object
    sta(Abs(Enemy_PageLoc, x));
    lda(Abs(Block_X_Position, y));
    // copy horizontal coordinate from previous object
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Block_Y_Position, y));
    // copy vertical coordinate from previous object
    sta(Abs(Enemy_Y_Position, x));
    // load vine flag/offset to next available vine slot
    ldy(Abs(VineFlagOffset));
    // if set at all, don't bother to store vertical
    BNE(NextVO);
    // otherwise store vertical coordinate here
    sta(Abs(VineStart_Y_Position));
}

int NextVO() {
    // store object offset to next available vine slot
    txa();
    // using vine flag as offset
    sta(Abs(VineObjOffset, y));
    // increment vine flag offset
    inc(Abs(VineFlagOffset));
    lda(Imm(Sfx_GrowVine));
    // load vine grow sound
    sta(Abs(Square2SoundQueue));
    return 0;
}

int VineObjectHandler() {
    // check enemy offset for special use slot
    cpx(Imm(0x5));
    // if not in last slot, branch to leave
    BNE(ExitVH);
    ldy(Abs(VineFlagOffset));
    // decrement vine flag in Y, use as offset
    dey();
    lda(Abs(VineHeight));
    // if vine has reached certain height,
    cmp(Abs(offsetof(G, VineHeightData), y));
    // branch ahead to skip this part
    BEQ(RunVSubs);
    // get frame counter
    lda(Abs(FrameCounter));
    // shift d1 into carry
    lsr();
    lsr();
    // if d1 not set (2 frames every 4) skip this part
    BCC(RunVSubs);
    lda(Abs(((Enemy_Y_Position) + (5))));
    // subtract vertical position of vine
    sbc(Imm(0x1));
    // one pixel every frame it's time
    sta(Abs(((Enemy_Y_Position) + (5))));
    // increment vine height
    inc(Abs(VineHeight));
}

int RunVSubs() {
    // if vine still very small,
    lda(Abs(VineHeight));
    // branch to leave
    cmp(Imm(0x8));
    BCC(ExitVH);
    // get relative coordinates of vine,
    JSR(RelativeEnemyPosition);
    // and any offscreen bits
    JSR(GetEnemyOffscreenBits);
    // initialize offset used in draw vine sub
    ldy(Imm(0x0));
}

int VDrawLoop() {
    // draw vine
    JSR(DrawVine);
    // increment offset
    iny();
    // if offset in Y and offset here
    cpy(Abs(VineFlagOffset));
    // do not yet match, loop back to draw more vine
    BNE(VDrawLoop);
    lda(Abs(Enemy_OffscreenBits));
    // mask offscreen bits
    anda(Imm(0b1100));
    // if none of the saved offscreen bits set, skip ahead
    BEQ(WrCMTile);
    // otherwise decrement Y to get proper offset again
    dey();
}

int KillVine() {
    // get enemy object offset for this vine object
    ldx(Abs(VineObjOffset, y));
    // kill this vine object
    JSR(EraseEnemyObject);
    // decrement Y
    dey();
    // if any vine objects left, loop back to kill it
    BPL(KillVine);
    // initialize vine flag/offset
    sta(Abs(VineFlagOffset));
    // initialize vine height
    sta(Abs(VineHeight));
}

int WrCMTile() {
    // check vine height
    lda(Abs(VineHeight));
    // if vine small (less than 32 pixels tall)
    cmp(Imm(0x20));
    // then branch ahead to leave
    BCC(ExitVH);
    // set offset in X to last enemy slot
    ldx(Imm(0x6));
    // set A to obtain horizontal in $04, but we don't care
    lda(Imm(0x1));
    // set Y to offset to get block at ($04, $10) of coordinates
    ldy(Imm(0x1b));
    // do a sub to get block buffer address set, return contents
    JSR(BlockBufferCollision);
    ldy(Abs(0x2));
    // if vertical high nybble offset beyond extent of
    cpy(Imm(0xd0));
    // current block buffer, branch to leave, do not write
    BCS(ExitVH);
    // otherwise check contents of block buffer at
    lda(IndY((0x6)));
    // current offset, if not empty, branch to leave
    BNE(ExitVH);
    lda(Imm(0x26));
    // otherwise, write climbing metatile to block buffer
    sta(IndY((0x6)));
}

int ExitVH() {
    // get enemy object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int ProcessCannons() {
    // get area type
    lda(Abs(AreaType));
    // if water type area, branch to leave
    BEQ(ExCannon);
    ldx(Imm(0x2));
}

int ThreeSChk() {
    // start at third enemy slot
    stx(Abs(ObjectOffset));
    // check enemy buffer flag
    lda(Abs(Enemy_Flag, x));
    // if set, branch to check enemy
    BNE(Chk_BB);
    // otherwise get part of LSFR
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // get secondary hard mode flag, use as offset
    ldy(Abs(SecondaryHardMode));
    // mask out bits of LSFR as decided by flag
    anda(Abs(offsetof(G, CannonBitmasks), y));
    // check to see if lower nybble is above certain value
    cmp(Imm(0x6));
    // if so, branch to check enemy
    BCS(Chk_BB);
    // transfer masked contents of LSFR to Y as pseudorandom offset
    tay();
    // get page location
    lda(Abs(Cannon_PageLoc, y));
    // if not set or on page 0, branch to check enemy
    BEQ(Chk_BB);
    // get cannon timer
    lda(Abs(Cannon_Timer, y));
    // if expired, branch to fire cannon
    BEQ(FireCannon);
    // otherwise subtract borrow (note carry will always be clear here)
    sbc(Imm(0x0));
    // to count timer down
    sta(Abs(Cannon_Timer, y));
    // then jump ahead to check enemy
    JMP(Chk_BB);
}

int FireCannon() {
    // if master timer control set,
    lda(Abs(TimerControl));
    // branch to check enemy
    BNE(Chk_BB);
    // otherwise we start creating one
    lda(Imm(0xe));
    // first, reset cannon timer
    sta(Abs(Cannon_Timer, y));
    // get page location of cannon
    lda(Abs(Cannon_PageLoc, y));
    // save as page location of bullet bill
    sta(Abs(Enemy_PageLoc, x));
    // get horizontal coordinate of cannon
    lda(Abs(Cannon_X_Position, y));
    // save as horizontal coordinate of bullet bill
    sta(Abs(Enemy_X_Position, x));
    // get vertical coordinate of cannon
    lda(Abs(Cannon_Y_Position, y));
    sec();
    // subtract eight pixels (because enemies are 24 pixels tall)
    sbc(Imm(0x8));
    // save as vertical coordinate of bullet bill
    sta(Abs(Enemy_Y_Position, x));
    lda(Imm(0x1));
    // set vertical high byte of bullet bill
    sta(Abs(Enemy_Y_HighPos, x));
    // set buffer flag
    sta(Abs(Enemy_Flag, x));
    // shift right once to init A
    lsr();
    // then initialize enemy's state
    sta(Abs(Enemy_State, x));
    lda(Imm(0x9));
    // set bounding box size control for bullet bill
    sta(Abs(Enemy_BoundBoxCtrl, x));
    lda(Imm(BulletBill_CannonVar));
    // load identifier for bullet bill (cannon variant)
    sta(Abs(Enemy_ID, x));
    // move onto next slot
    JMP(Next3Slt);
}

int Chk_BB() {
    // check enemy identifier for bullet bill (cannon variant)
    lda(Abs(Enemy_ID, x));
    cmp(Imm(BulletBill_CannonVar));
    // if not found, branch to get next slot
    BNE(Next3Slt);
    // otherwise, check to see if it went offscreen
    JSR(OffscreenBoundsCheck);
    // check enemy buffer flag
    lda(Abs(Enemy_Flag, x));
    // if not set, branch to get next slot
    BEQ(Next3Slt);
    // otherwise, get offscreen information
    JSR(GetEnemyOffscreenBits);
    // then do sub to handle bullet bill
    JSR(BulletBillHandler);
}

int Next3Slt() {
    // move onto next slot
    dex();
    // do this until first three slots are checked
    BPL(ThreeSChk);
}

int ExCannon() {
    // then leave
    return 0;
}

int BulletBillHandler() {
    // if master timer control set,
    lda(Abs(TimerControl));
    // branch to run subroutines except movement sub
    BNE(RunBBSubs);
    lda(Abs(Enemy_State, x));
    // if bullet bill's state set, branch to check defeated state
    BNE(ChkDSte);
    // otherwise load offscreen bits
    lda(Abs(Enemy_OffscreenBits));
    // mask out bits
    anda(Imm(0b1100));
    // check to see if all bits are set
    cmp(Imm(0b1100));
    // if so, branch to kill this object
    BEQ(KillBB);
    // set to move right by default
    ldy(Imm(0x1));
    // get horizontal difference between player and bullet bill
    JSR(PlayerEnemyDiff);
    // if enemy to the left of player, branch
    BMI(SetupBB);
    // otherwise increment to move left
    iny();
}

int SetupBB() {
    // set bullet bill's moving direction
    sty(Abs(Enemy_MovingDir, x));
    // decrement to use as offset
    dey();
    // get horizontal speed based on moving direction
    lda(Abs(offsetof(G, BulletBillXSpdData), y));
    // and store it
    sta(Abs(Enemy_X_Speed, x));
    // get horizontal difference
    lda(Abs(0x0));
    // add 40 pixels
    adc(Imm(0x28));
    // if less than a certain amount, player is too close
    cmp(Imm(0x50));
    // to cannon either on left or right side, thus branch
    BCC(KillBB);
    lda(Imm(0x1));
    // otherwise set bullet bill's state
    sta(Abs(Enemy_State, x));
    lda(Imm(0xa));
    // set enemy frame timer
    sta(Abs(EnemyFrameTimer, x));
    lda(Imm(Sfx_Blast));
    // play fireworks/gunfire sound
    sta(Abs(Square2SoundQueue));
}

int ChkDSte() {
    // check enemy state for d5 set
    lda(Abs(Enemy_State, x));
    anda(Imm(0b100000));
    // if not set, skip to move horizontally
    BEQ(BBFly);
    // otherwise do sub to move bullet bill vertically
    JSR(MoveD_EnemyVertically);
}

int BBFly() {
    // do sub to move bullet bill horizontally
    JSR(MoveEnemyHorizontally);
}

int RunBBSubs() {
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
}

int KillBB() {
    // kill bullet bill and leave
    JSR(EraseEnemyObject);
    return 0;
}

int SpawnHammerObj() {
    // get pseudorandom bits from
    lda(Abs(((PseudoRandomBitReg) + (1))));
    // second part of LSFR
    anda(Imm(0b111));
    // if any bits are set, branch and use as offset
    BNE(SetMOfs);
    lda(Abs(((PseudoRandomBitReg) + (1))));
    // get d3 from same part of LSFR
    anda(Imm(0b1000));
}

int SetMOfs() {
    // use either d3 or d2-d0 for offset here
    tay();
    // if any values loaded in
    lda(Abs(Misc_State, y));
    // $2a-$32 where offset is then leave with carry clear
    BNE(NoHammer);
    // get offset of enemy slot to check using Y as offset
    ldx(Abs(offsetof(G, HammerEnemyOfsData), y));
    // check enemy buffer flag at offset
    lda(Abs(Enemy_Flag, x));
    // if buffer flag set, branch to leave with carry clear
    BNE(NoHammer);
    // get original enemy object offset
    ldx(Abs(ObjectOffset));
    txa();
    // save here
    sta(Abs(HammerEnemyOffset, y));
    lda(Imm(0x90));
    // save hammer's state here
    sta(Abs(Misc_State, y));
    lda(Imm(0x7));
    // set something else entirely, here
    sta(Abs(Misc_BoundBoxCtrl, y));
    // return with carry set
    sec();
    return 0;
}

int NoHammer() {
    // get original enemy object offset
    ldx(Abs(ObjectOffset));
    // return with carry clear
    clc();
    return 0;
}

int ProcHammerObj() {
    // if master timer control set
    lda(Abs(TimerControl));
    // skip all of this code and go to last subs at the end
    BNE(RunHSubs);
    // otherwise get hammer's state
    lda(Abs(Misc_State, x));
    // mask out d7
    anda(Imm(0b1111111));
    // get enemy object offset that spawned this hammer
    ldy(Abs(HammerEnemyOffset, x));
    // check hammer's state
    cmp(Imm(0x2));
    // if currently at 2, branch
    BEQ(SetHSpd);
    // if greater than 2, branch elsewhere
    BCS(SetHPos);
    txa();
    // add 13 bytes to use
    clc();
    // proper misc object
    adc(Imm(0xd));
    // return offset to X
    tax();
    lda(Imm(0x10));
    // set downward movement force
    sta(Abs(0x0));
    lda(Imm(0xf));
    // set upward movement force (not used)
    sta(Abs(0x1));
    lda(Imm(0x4));
    // set maximum vertical speed
    sta(Abs(0x2));
    // set A to impose gravity on hammer
    lda(Imm(0x0));
    // do sub to impose gravity on hammer and move vertically
    JSR(ImposeGravity);
    // do sub to move it horizontally
    JSR(MoveObjectHorizontally);
    // get original misc object offset
    ldx(Abs(ObjectOffset));
    // branch to essential subroutines
    JMP(RunAllH);
}

int SetHSpd() {
    lda(Imm(0xfe));
    // set hammer's vertical speed
    sta(Abs(Misc_Y_Speed, x));
    // get enemy object state
    lda(Abs(Enemy_State, y));
    // mask out d3
    anda(Imm(0b11110111));
    // store new state
    sta(Abs(Enemy_State, y));
    // get enemy's moving direction
    ldx(Abs(Enemy_MovingDir, y));
    // decrement to use as offset
    dex();
    // get proper speed to use based on moving direction
    lda(Abs(offsetof(G, HammerXSpdData), x));
    // reobtain hammer's buffer offset
    ldx(Abs(ObjectOffset));
    // set hammer's horizontal speed
    sta(Abs(Misc_X_Speed, x));
}

int SetHPos() {
    // decrement hammer's state
    dec(Abs(Misc_State, x));
    // get enemy's horizontal position
    lda(Abs(Enemy_X_Position, y));
    clc();
    // set position 2 pixels to the right
    adc(Imm(0x2));
    // store as hammer's horizontal position
    sta(Abs(Misc_X_Position, x));
    // get enemy's page location
    lda(Abs(Enemy_PageLoc, y));
    // add carry
    adc(Imm(0x0));
    // store as hammer's page location
    sta(Abs(Misc_PageLoc, x));
    // get enemy's vertical position
    lda(Abs(Enemy_Y_Position, y));
    sec();
    // move position 10 pixels upward
    sbc(Imm(0xa));
    // store as hammer's vertical position
    sta(Abs(Misc_Y_Position, x));
    lda(Imm(0x1));
    // set hammer's vertical high byte
    sta(Abs(Misc_Y_HighPos, x));
    // unconditional branch to skip first routine
    BNE(RunHSubs);
}

int RunAllH() {
    // handle collisions
    JSR(PlayerHammerCollision);
}

int RunHSubs() {
    // get offscreen information
    JSR(GetMiscOffscreenBits);
    // get relative coordinates
    JSR(RelativeMiscPosition);
    // get bounding box coordinates
    JSR(GetMiscBoundBox);
    // draw the hammer
    JSR(DrawHammer);
    // and we are done here
    return 0;
}

int CoinBlock() {
    // set offset for empty or last misc object buffer slot
    JSR(FindEmptyMiscSlot);
    // get page location of block object
    lda(Abs(Block_PageLoc, x));
    // store as page location of misc object
    sta(Abs(Misc_PageLoc, y));
    // get horizontal coordinate of block object
    lda(Abs(Block_X_Position, x));
    // add 5 pixels
    ora(Imm(0x5));
    // store as horizontal coordinate of misc object
    sta(Abs(Misc_X_Position, y));
    // get vertical coordinate of block object
    lda(Abs(Block_Y_Position, x));
    // subtract 16 pixels
    sbc(Imm(0x10));
    // store as vertical coordinate of misc object
    sta(Abs(Misc_Y_Position, y));
    // jump to rest of code as applies to this misc object
    JMP(JCoinC);
}

int SetupJumpCoin() {
    // set offset for empty or last misc object buffer slot
    JSR(FindEmptyMiscSlot);
    // get page location saved earlier
    lda(Abs(Block_PageLoc2, x));
    // and save as page location for misc object
    sta(Abs(Misc_PageLoc, y));
    // get low byte of block buffer offset
    lda(Abs(0x6));
    asl();
    // multiply by 16 to use lower nybble
    asl();
    asl();
    asl();
    // add five pixels
    ora(Imm(0x5));
    // save as horizontal coordinate for misc object
    sta(Abs(Misc_X_Position, y));
    // get vertical high nybble offset from earlier
    lda(Abs(0x2));
    // add 32 pixels for the status bar
    adc(Imm(0x20));
    // store as vertical coordinate
    sta(Abs(Misc_Y_Position, y));
}

int JCoinC() {
    lda(Imm(0xfb));
    // set vertical speed
    sta(Abs(Misc_Y_Speed, y));
    lda(Imm(0x1));
    // set vertical high byte
    sta(Abs(Misc_Y_HighPos, y));
    // set state for misc object
    sta(Abs(Misc_State, y));
    // load coin grab sound
    sta(Abs(Square2SoundQueue));
    // store current control bit as misc object offset
    stx(Abs(ObjectOffset));
    // update coin tally on the screen and coin amount variable
    JSR(GiveOneCoin);
    // increment coin tally used to activate 1-up block flag
    inc(Abs(CoinTallyFor1Ups));
    return 0;
}

int FindEmptyMiscSlot() {
    // start at end of misc objects buffer
    ldy(Imm(0x8));
}

int FMiscLoop() {
    // get misc object state
    lda(Abs(Misc_State, y));
    // branch if none found to use current offset
    BEQ(UseMiscS);
    // decrement offset
    dey();
    // do this for three slots
    cpy(Imm(0x5));
    // do this until all slots are checked
    BNE(FMiscLoop);
    // if no empty slots found, use last slot
    ldy(Imm(0x8));
}

int UseMiscS() {
    // store offset of misc object buffer here (residual)
    sty(Abs(JumpCoinMiscOffset));
    return 0;
}

int MiscObjectsCore() {
    // set at end of misc object buffer
    ldx(Imm(0x8));
}

int MiscLoop() {
    // store misc object offset here
    stx(Abs(ObjectOffset));
    // check misc object state
    lda(Abs(Misc_State, x));
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
}

int ProcJumpCoin() {
    // check misc object state
    ldy(Abs(Misc_State, x));
    // decrement to see if it's set to 1
    dey();
    // if so, branch to handle jumping coin
    BEQ(JCoinRun);
    // otherwise increment state to either start off or as timer
    inc(Abs(Misc_State, x));
    // get horizontal coordinate for misc object
    lda(Abs(Misc_X_Position, x));
    // whether its jumping coin (state 0 only) or floatey number
    clc();
    // add current scroll speed
    adc(Abs(ScrollAmount));
    // store as new horizontal coordinate
    sta(Abs(Misc_X_Position, x));
    // get page location
    lda(Abs(Misc_PageLoc, x));
    // add carry
    adc(Imm(0x0));
    // store as new page location
    sta(Abs(Misc_PageLoc, x));
    lda(Abs(Misc_State, x));
    // check state of object for preset value
    cmp(Imm(0x30));
    // if not yet reached, branch to subroutines
    BNE(RunJCSubs);
    lda(Imm(0x0));
    // otherwise nullify object state
    sta(Abs(Misc_State, x));
    // and move onto next slot
    JMP(MiscLoopBack);
}

int JCoinRun() {
    txa();
    // add 13 bytes to offset for next subroutine
    clc();
    adc(Imm(0xd));
    tax();
    // set downward movement amount
    lda(Imm(0x50));
    sta(Abs(0x0));
    // set maximum vertical speed
    lda(Imm(0x6));
    sta(Abs(0x2));
    // divide by 2 and set
    lsr();
    // as upward movement amount (apparently residual)
    sta(Abs(0x1));
    // set A to impose gravity on jumping coin
    lda(Imm(0x0));
    // do sub to move coin vertically and impose gravity on it
    JSR(ImposeGravity);
    // get original misc object offset
    ldx(Abs(ObjectOffset));
    // check vertical speed
    lda(Abs(Misc_Y_Speed, x));
    cmp(Imm(0x5));
    // if not moving downward fast enough, keep state as-is
    BNE(RunJCSubs);
    // otherwise increment state to change to floatey number
    inc(Abs(Misc_State, x));
}

int RunJCSubs() {
    // get relative coordinates
    JSR(RelativeMiscPosition);
    // get offscreen information
    JSR(GetMiscOffscreenBits);
    // get bounding box coordinates (why?)
    JSR(GetMiscBoundBox);
    // draw the coin or floatey number
    JSR(JCoinGfxHandler);
}

int MiscLoopBack() {
    // decrement misc object offset
    dex();
    // loop back until all misc objects handled
    BPL(MiscLoop);
    // then leave
    return 0;
}

int GiveOneCoin() {
    // set digit modifier to add 1 coin
    lda(Imm(0x1));
    // to the current player's coin tally
    sta(Abs(((DigitModifier) + (5))));
    // get current player on the screen
    ldx(Abs(CurrentPlayer));
    // get offset for player's coin tally
    ldy(Abs(offsetof(G, CoinTallyOffsets), x));
    // update the coin tally
    JSR(DigitsMathRoutine);
    // increment onscreen player's coin amount
    inc(Abs(CoinTally));
    lda(Abs(CoinTally));
    // does player have 100 coins yet?
    cmp(Imm(100));
    // if not, skip all of this
    BNE(CoinPoints);
    lda(Imm(0x0));
    // otherwise, reinitialize coin amount
    sta(Abs(CoinTally));
    // give the player an extra life
    inc(Abs(NumberofLives));
    lda(Imm(Sfx_ExtraLife));
    // play 1-up sound
    sta(Abs(Square2SoundQueue));
}

int CoinPoints() {
    // set digit modifier to award
    lda(Imm(0x2));
    // 200 points to the player
    sta(Abs(((DigitModifier) + (4))));
}

int AddToScore() {
    // get current player
    ldx(Abs(CurrentPlayer));
    // get offset for player's score
    ldy(Abs(offsetof(G, ScoreOffsets), x));
    // update the score internally with value in digit modifier
    JSR(DigitsMathRoutine);
}

int GetSBNybbles() {
    // get current player
    ldy(Abs(CurrentPlayer));
    // get nybbles based on player, use to update score and coins
    lda(Abs(offsetof(G, StatusBarNybbles), y));
}

int UpdateNumber() {
    // print status bar numbers based on nybbles, whatever they be
    JSR(PrintStatusBarNumbers);
    ldy(Abs(VRAM_Buffer1_Offset));
    // check highest digit of score
    lda(Abs(((VRAM_Buffer1) - (6)), y));
    // if zero, overwrite with space tile for zero suppression
    BNE(NoZSup);
    lda(Imm(0x24));
    sta(Abs(((VRAM_Buffer1) - (6)), y));
}

int NoZSup() {
    // get enemy object buffer offset
    ldx(Abs(ObjectOffset));
    return 0;
}

int SetupPowerUp() {
    // load power-up identifier into
    lda(Imm(PowerUpObject));
    // special use slot of enemy object buffer
    sta(Abs(((Enemy_ID) + (5))));
    // store page location of block object
    lda(Abs(Block_PageLoc, x));
    // as page location of power-up object
    sta(Abs(((Enemy_PageLoc) + (5))));
    // store horizontal coordinate of block object
    lda(Abs(Block_X_Position, x));
    // as horizontal coordinate of power-up object
    sta(Abs(((Enemy_X_Position) + (5))));
    lda(Imm(0x1));
    // set vertical high byte of power-up object
    sta(Abs(((Enemy_Y_HighPos) + (5))));
    // get vertical coordinate of block object
    lda(Abs(Block_Y_Position, x));
    sec();
    // subtract 8 pixels
    sbc(Imm(0x8));
    // and use as vertical coordinate of power-up object
    sta(Abs(((Enemy_Y_Position) + (5))));
}

int PwrUpJmp() {
    // this is a residual jump point in enemy object jump table
    lda(Imm(0x1));
    // set power-up object's state
    sta(Abs(((Enemy_State) + (5))));
    // set buffer flag
    sta(Abs(((Enemy_Flag) + (5))));
    lda(Imm(0x3));
    // set bounding box size control for power-up object
    sta(Abs(((Enemy_BoundBoxCtrl) + (5))));
    lda(Abs(PowerUpType));
    // check currently loaded power-up type
    cmp(Imm(0x2));
    // if star or 1-up, branch ahead
    BCS(PutBehind);
    // otherwise check player's current status
    lda(Abs(PlayerStatus));
    cmp(Imm(0x2));
    // if player not fiery, use status as power-up type
    BCC(StrType);
    // otherwise shift right to force fire flower type
    lsr();
}

int StrType() {
    // store type here
    sta(Abs(PowerUpType));
}

int PutBehind() {
    lda(Imm(0b100000));
    // set background priority bit
    sta(Abs(((Enemy_SprAttrib) + (5))));
    lda(Imm(Sfx_GrowPowerUp));
    // load power-up reveal sound and leave
    sta(Abs(Square2SoundQueue));
    return 0;
}

int PowerUpObjHandler() {
    // set object offset for last slot in enemy object buffer
    ldx(Imm(0x5));
    stx(Abs(ObjectOffset));
    // check power-up object's state
    lda(Abs(((Enemy_State) + (5))));
    // if not set, branch to leave
    BEQ(ExitPUp);
    // shift to check if d7 was set in object state
    asl();
    // if not set, branch ahead to skip this part
    BCC(GrowThePowerUp);
    // if master timer control set,
    lda(Abs(TimerControl));
    // branch ahead to enemy object routines
    BNE(RunPUSubs);
    // check power-up type
    lda(Abs(PowerUpType));
    // if normal mushroom, branch ahead to move it
    BEQ(ShroomM);
    cmp(Imm(0x3));
    // if 1-up mushroom, branch ahead to move it
    BEQ(ShroomM);
    cmp(Imm(0x2));
    // if not star, branch elsewhere to skip movement
    BNE(RunPUSubs);
    // otherwise impose gravity on star power-up and make it jump
    JSR(MoveJumpingEnemy);
    // note that green paratroopa shares the same code here
    JSR(EnemyJump);
    // then jump to other power-up subroutines
    JMP(RunPUSubs);
}

int ShroomM() {
    // do sub to make mushrooms move
    JSR(MoveNormalEnemy);
    // deal with collisions
    JSR(EnemyToBGCollisionDet);
    // run the other subroutines
    JMP(RunPUSubs);
}

int GrowThePowerUp() {
    // get frame counter
    lda(Abs(FrameCounter));
    // mask out all but 2 LSB
    anda(Imm(0x3));
    // if any bits set here, branch
    BNE(ChkPUSte);
    // otherwise decrement vertical coordinate slowly
    dec(Abs(((Enemy_Y_Position) + (5))));
    // load power-up object state
    lda(Abs(((Enemy_State) + (5))));
    // increment state for next frame (to make power-up rise)
    inc(Abs(((Enemy_State) + (5))));
    // if power-up object state not yet past 16th pixel,
    cmp(Imm(0x11));
    // branch ahead to last part here
    BCC(ChkPUSte);
    lda(Imm(0x10));
    // otherwise set horizontal speed
    sta(Abs(Enemy_X_Speed, x));
    lda(Imm(0b10000000));
    // and then set d7 in power-up object's state
    sta(Abs(((Enemy_State) + (5))));
    // shift once to init A
    asl();
    // initialize background priority bit set here
    sta(Abs(((Enemy_SprAttrib) + (5))));
    // rotate A to set right moving direction
    rol();
    // set moving direction
    sta(Abs(Enemy_MovingDir, x));
}

int ChkPUSte() {
    // check power-up object's state
    lda(Abs(((Enemy_State) + (5))));
    // for if power-up has risen enough
    cmp(Imm(0x6));
    // if not, don't even bother running these routines
    BCC(ExitPUp);
}

int RunPUSubs() {
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
}

int ExitPUp() {
    // and we're done
    return 0;
}

int PlayerHeadCollision() {
    // store metatile number to stack
    pha();
    // load unbreakable block object state by default
    lda(Imm(0x11));
    // load offset control bit here
    ldx(Abs(SprDataOffset_Ctrl));
    // check player's size
    ldy(Abs(PlayerSize));
    // if small, branch
    BNE(DBlockSte);
    // otherwise load breakable block object state
    lda(Imm(0x12));
}

int DBlockSte() {
    // store into block object buffer
    sta(Abs(Block_State, x));
    // store blank metatile in vram buffer to write to name table
    JSR(DestroyBlockMetatile);
    // load offset control bit
    ldx(Abs(SprDataOffset_Ctrl));
    // get vertical high nybble offset used in block buffer routine
    lda(Abs(0x2));
    // set as vertical coordinate for block object
    sta(Abs(Block_Orig_YPos, x));
    tay();
    // get low byte of block buffer address used in same routine
    lda(Abs(0x6));
    // save as offset here to be used later
    sta(Abs(Block_BBuf_Low, x));
    // get contents of block buffer at old address at $06, $07
    lda(IndY((0x6)));
    // do a sub to check which block player bumped head on
    JSR(BlockBumpedChk);
    // store metatile here
    sta(Abs(0x0));
    // check player's size
    ldy(Abs(PlayerSize));
    // if small, use metatile itself as contents of A
    BNE(ChkBrick);
    // otherwise init A (note: big = 0)
    tya();
}

int ChkBrick() {
    // if no match was found in previous sub, skip ahead
    BCC(PutMTileB);
    // otherwise load unbreakable state into block object buffer
    ldy(Imm(0x11));
    // note this applies to both player sizes
    sty(Abs(Block_State, x));
    // load empty block metatile into A for now
    lda(Imm(0xc4));
    // get metatile from before
    ldy(Abs(0x0));
    // is it brick with coins (with line)?
    cpy(Imm(0x58));
    // if so, branch
    BEQ(StartBTmr);
    // is it brick with coins (without line)?
    cpy(Imm(0x5d));
    // if not, branch ahead to store empty block metatile
    BNE(PutMTileB);
}

int StartBTmr() {
    // check brick coin timer flag
    lda(Abs(BrickCoinTimerFlag));
    // if set, timer expired or counting down, thus branch
    BNE(ContBTmr);
    lda(Imm(0xb));
    // if not set, set brick coin timer
    sta(Abs(BrickCoinTimer));
    // and set flag linked to it
    inc(Abs(BrickCoinTimerFlag));
}

int ContBTmr() {
    // check brick coin timer
    lda(Abs(BrickCoinTimer));
    // if not yet expired, branch to use current metatile
    BNE(PutOldMT);
    // otherwise use empty block metatile
    ldy(Imm(0xc4));
}

int PutOldMT() {
    // put metatile into A
    tya();
}

int PutMTileB() {
    // store whatever metatile be appropriate here
    sta(Abs(Block_Metatile, x));
    // get block object horizontal coordinates saved
    JSR(InitBlock_XY_Pos);
    // get vertical high nybble offset
    ldy(Abs(0x2));
    lda(Imm(0x23));
    // write blank metatile $23 to block buffer
    sta(IndY((0x6)));
    lda(Imm(0x10));
    // set block bounce timer
    sta(Abs(BlockBounceTimer));
    // pull original metatile from stack
    pla();
    // and save here
    sta(Abs(0x5));
    // set default offset
    ldy(Imm(0x0));
    // is player crouching?
    lda(Abs(CrouchingFlag));
    // if so, branch to increment offset
    BNE(SmallBP);
    // is player big?
    lda(Abs(PlayerSize));
    // if so, branch to use default offset
    BEQ(BigBP);
}

int SmallBP() {
    // increment for small or big and crouching
    iny();
}

int BigBP() {
    // get player's vertical coordinate
    lda(Abs(Player_Y_Position));
    clc();
    // add value determined by size
    adc(Abs(offsetof(G, BlockYPosAdderData), y));
    // mask out low nybble to get 16-pixel correspondence
    anda(Imm(0xf0));
    // save as vertical coordinate for block object
    sta(Abs(Block_Y_Position, x));
    // get block object state
    ldy(Abs(Block_State, x));
    cpy(Imm(0x11));
    // if set to value loaded for unbreakable, branch
    BEQ(Unbreak);
    // execute code for breakable brick
    JSR(BrickShatter);
    // skip subroutine to do last part of code here
    JMP(InvOBit);
}

int Unbreak() {
    // execute code for unbreakable brick or question block
    JSR(BumpBlock);
}

int InvOBit() {
    // invert control bit used by block objects
    lda(Abs(SprDataOffset_Ctrl));
    // and floatey numbers
    eor(Imm(0x1));
    sta(Abs(SprDataOffset_Ctrl));
    // leave!
    return 0;
}

int InitBlock_XY_Pos() {
    // get player's horizontal coordinate
    lda(Abs(Player_X_Position));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // mask out low nybble to give 16-pixel correspondence
    anda(Imm(0xf0));
    // save as horizontal coordinate for block object
    sta(Abs(Block_X_Position, x));
    lda(Abs(Player_PageLoc));
    // add carry to page location of player
    adc(Imm(0x0));
    // save as page location of block object
    sta(Abs(Block_PageLoc, x));
    // save elsewhere to be used later
    sta(Abs(Block_PageLoc2, x));
    lda(Abs(Player_Y_HighPos));
    // save vertical high byte of player into
    sta(Abs(Block_Y_HighPos, x));
    // vertical high byte of block object and leave
    return 0;
}

int BumpBlock() {
    // check to see if there's a coin directly above this block
    JSR(CheckTopOfBlock);
    lda(Imm(Sfx_Bump));
    // play bump sound
    sta(Abs(Square1SoundQueue));
    lda(Imm(0x0));
    // initialize horizontal speed for block object
    sta(Abs(Block_X_Speed, x));
    // init fractional movement force
    sta(Abs(Block_Y_MoveForce, x));
    // init player's vertical speed
    sta(Abs(Player_Y_Speed));
    lda(Imm(0xfe));
    // set vertical speed for block object
    sta(Abs(Block_Y_Speed, x));
    // get original metatile from stack
    lda(Abs(0x5));
    // do a sub to check which block player bumped head on
    JSR(BlockBumpedChk);
    // if no match was found, branch to leave
    BCC(ExitBlockChk);
    // move block number to A
    tya();
    // if block number was within 0-8 range,
    cmp(Imm(0x9));
    // branch to use current number
    BCC(BlockCode);
    // otherwise subtract 5 for second set to get proper number
    sbc(Imm(0x5));
}

int BlockCode() {
    // run appropriate subroutine depending on block number
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

int MushFlowerBlock() {
    // load mushroom/fire flower into power-up type
    lda(Imm(0x0));
}

int StarBlock() {
    // load star into power-up type
    lda(Imm(0x2));
}

int ExtraLifeMushBlock() {
    // load 1-up mushroom into power-up type
    lda(Imm(0x3));
    // store correct power-up type
    sta(Abs(0x39));
    JMP(SetupPowerUp);
}

int VineBlock() {
    // load last slot for enemy object buffer
    ldx(Imm(0x5));
    // get control bit
    ldy(Abs(SprDataOffset_Ctrl));
    // set up vine object
    JSR(Setup_Vine);
}

int ExitBlockChk() {
    // leave
    return 0;
}

int BlockBumpedChk() {
    // start at end of metatile data
    ldy(Imm(0xd));
}

int BumpChkLoop() {
    // check to see if current metatile matches
    cmp(Abs(offsetof(G, BrickQBlockMetatiles), y));
    // metatile found in block buffer, branch if so
    BEQ(MatchBump);
    // otherwise move onto next metatile
    dey();
    // do this until all metatiles are checked
    BPL(BumpChkLoop);
    // if none match, return with carry clear
    clc();
}

int MatchBump() {
    // note carry is set if found match
    return 0;
}

int BrickShatter() {
    // check to see if there's a coin directly above this block
    JSR(CheckTopOfBlock);
    lda(Imm(Sfx_BrickShatter));
    // set flag for block object to immediately replace metatile
    sta(Abs(Block_RepFlag, x));
    // load brick shatter sound
    sta(Abs(NoiseSoundQueue));
    // create brick chunk objects
    JSR(SpawnBrickChunks);
    lda(Imm(0xfe));
    // set vertical speed for player
    sta(Abs(Player_Y_Speed));
    lda(Imm(0x5));
    // set digit modifier to give player 50 points
    sta(Abs(((DigitModifier) + (5))));
    // do sub to update the score
    JSR(AddToScore);
    // load control bit and leave
    ldx(Abs(SprDataOffset_Ctrl));
    return 0;
}

int CheckTopOfBlock() {
    // load control bit
    ldx(Abs(SprDataOffset_Ctrl));
    // get vertical high nybble offset used in block buffer
    ldy(Abs(0x2));
    // branch to leave if set to zero, because we're at the top
    BEQ(TopEx);
    // otherwise set to A
    tya();
    sec();
    // subtract $10 to move up one row in the block buffer
    sbc(Imm(0x10));
    // store as new vertical high nybble offset
    sta(Abs(0x2));
    tay();
    // get contents of block buffer in same column, one row up
    lda(IndY((0x6)));
    // is it a coin? (not underwater)
    cmp(Imm(0xc2));
    // if not, branch to leave
    BNE(TopEx);
    lda(Imm(0x0));
    // otherwise put blank metatile where coin was
    sta(IndY((0x6)));
    // write blank metatile to vram buffer
    JSR(RemoveCoin_Axe);
    // get control bit
    ldx(Abs(SprDataOffset_Ctrl));
    // create jumping coin object and update coin variables
    JSR(SetupJumpCoin);
}

int TopEx() {
    // leave!
    return 0;
}

int SpawnBrickChunks() {
    // set horizontal coordinate of block object
    lda(Abs(Block_X_Position, x));
    // as original horizontal coordinate here
    sta(Abs(Block_Orig_XPos, x));
    lda(Imm(0xf0));
    // set horizontal speed for brick chunk objects
    sta(Abs(Block_X_Speed, x));
    sta(Abs(((Block_X_Speed) + (2)), x));
    lda(Imm(0xfa));
    // set vertical speed for one
    sta(Abs(Block_Y_Speed, x));
    lda(Imm(0xfc));
    // set lower vertical speed for the other
    sta(Abs(((Block_Y_Speed) + (2)), x));
    lda(Imm(0x0));
    // init fractional movement force for both
    sta(Abs(Block_Y_MoveForce, x));
    sta(Abs(((Block_Y_MoveForce) + (2)), x));
    lda(Abs(Block_PageLoc, x));
    // copy page location
    sta(Abs(((Block_PageLoc) + (2)), x));
    lda(Abs(Block_X_Position, x));
    // copy horizontal coordinate
    sta(Abs(((Block_X_Position) + (2)), x));
    lda(Abs(Block_Y_Position, x));
    // add 8 pixels to vertical coordinate
    clc();
    // and save as vertical coordinate for one of them
    adc(Imm(0x8));
    sta(Abs(((Block_Y_Position) + (2)), x));
    lda(Imm(0xfa));
    // set vertical speed...again??? (redundant)
    sta(Abs(Block_Y_Speed, x));
    return 0;
}

int BlockObjectsCore() {
    // get state of block object
    lda(Abs(Block_State, x));
    // if not set, branch to leave
    BEQ(UpdSte);
    // mask out high nybble
    anda(Imm(0xf));
    // push to stack
    pha();
    // put in Y for now
    tay();
    txa();
    clc();
    // add 9 bytes to offset (note two block objects are created
    adc(Imm(0x9));
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
    adc(Imm(0x2));
    tax();
    // do sub to impose gravity on other block object
    JSR(ImposeGravityBlock);
    // do another sub to move horizontally
    JSR(MoveObjectHorizontally);
    // get block object offset used for both
    ldx(Abs(ObjectOffset));
    // get relative coordinates
    JSR(RelativeBlockPosition);
    // get offscreen information
    JSR(GetBlockOffscreenBits);
    // draw the brick chunks
    JSR(DrawBrickChunks);
    // get lower nybble of saved state
    pla();
    // check vertical high byte of block object
    ldy(Abs(Block_Y_HighPos, x));
    // if above the screen, branch to kill it
    BEQ(UpdSte);
    // otherwise save state back into stack
    pha();
    lda(Imm(0xf0));
    // check to see if bottom block object went
    cmp(Abs(((Block_Y_Position) + (2)), x));
    // to the bottom of the screen, and branch if not
    BCS(ChkTop);
    // otherwise set offscreen coordinate
    sta(Abs(((Block_Y_Position) + (2)), x));
}

int ChkTop() {
    // get top block object's vertical coordinate
    lda(Abs(Block_Y_Position, x));
    // see if it went to the bottom of the screen
    cmp(Imm(0xf0));
    // pull block object state from stack
    pla();
    // if not, branch to save state
    BCC(UpdSte);
    // otherwise do unconditional branch to kill it
    BCS(KillBlock);
}

int BouncingBlockHandler() {
    // do sub to impose gravity on block object
    JSR(ImposeGravityBlock);
    // get block object offset
    ldx(Abs(ObjectOffset));
    // get relative coordinates
    JSR(RelativeBlockPosition);
    // get offscreen information
    JSR(GetBlockOffscreenBits);
    // draw the block
    JSR(DrawBlock);
    // get vertical coordinate
    lda(Abs(Block_Y_Position, x));
    // mask out high nybble
    anda(Imm(0xf));
    // check to see if low nybble wrapped around
    cmp(Imm(0x5));
    // pull state from stack
    pla();
    // if still above amount, not time to kill block yet, thus branch
    BCS(UpdSte);
    lda(Imm(0x1));
    // otherwise set flag to replace metatile
    sta(Abs(Block_RepFlag, x));
}

int KillBlock() {
    // if branched here, nullify object state
    lda(Imm(0x0));
}

int UpdSte() {
    // store contents of A in block object state
    sta(Abs(Block_State, x));
    return 0;
}

int BlockObjMT_Updater() {
    // set offset to start with second block object
    ldx(Imm(0x1));
}

int UpdateLoop() {
    // set offset here
    stx(Abs(ObjectOffset));
    // if vram buffer already being used here,
    lda(Abs(VRAM_Buffer1));
    // branch to move onto next block object
    BNE(NextBUpd);
    // if flag for block object already clear,
    lda(Abs(Block_RepFlag, x));
    // branch to move onto next block object
    BEQ(NextBUpd);
    // get low byte of block buffer
    lda(Abs(Block_BBuf_Low, x));
    // store into block buffer address
    sta(Abs(0x6));
    lda(Imm(0x5));
    // set high byte of block buffer address
    sta(Abs(0x7));
    // get original vertical coordinate of block object
    lda(Abs(Block_Orig_YPos, x));
    // store here and use as offset to block buffer
    sta(Abs(0x2));
    tay();
    // get metatile to be written
    lda(Abs(Block_Metatile, x));
    // write it to the block buffer
    sta(IndY((0x6)));
    // do sub to replace metatile where block object is
    JSR(ReplaceBlockMetatile);
    lda(Imm(0x0));
    // clear block object flag
    sta(Abs(Block_RepFlag, x));
}

int NextBUpd() {
    // decrement block object offset
    dex();
    // do this until both block objects are dealt with
    BPL(UpdateLoop);
    // then leave
    return 0;
}

int MoveEnemyHorizontally() {
    // increment offset for enemy offset
    inx();
    // position object horizontally according to
    JSR(MoveObjectHorizontally);
    // counters, return with saved value in A,
    ldx(Abs(ObjectOffset));
    // put enemy offset back in X and leave
    return 0;
}

int MovePlayerHorizontally() {
    // if jumpspring currently animating,
    lda(Abs(JumpspringAnimCtrl));
    // branch to leave
    BNE(ExXMove);
    // otherwise set zero for offset to use player's stuff
    tax();
}

int MoveObjectHorizontally() {
    // get currently saved value (horizontal
    lda(Abs(SprObject_X_Speed, x));
    // speed, secondary counter, whatever)
    asl();
    // and move low nybble to high
    asl();
    asl();
    asl();
    // store result here
    sta(Abs(0x1));
    // get saved value again
    lda(Abs(SprObject_X_Speed, x));
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // if < 8, branch, do not change
    cmp(Imm(0x8));
    BCC(SaveXSpd);
    // otherwise alter high nybble
    ora(Imm(0b11110000));
}

int SaveXSpd() {
    // save result here
    sta(Abs(0x0));
    // load default Y value here
    ldy(Imm(0x0));
    // if result positive, leave Y alone
    cmp(Imm(0x0));
    BPL(UseAdder);
    // otherwise decrement Y
    dey();
}

int UseAdder() {
    // save Y here
    sty(Abs(0x2));
    // get whatever number's here
    lda(Abs(SprObject_X_MoveForce, x));
    clc();
    // add low nybble moved to high
    adc(Abs(0x1));
    // store result here
    sta(Abs(SprObject_X_MoveForce, x));
    // init A
    lda(Imm(0x0));
    // rotate carry into d0
    rol();
    // push onto stack
    pha();
    // rotate d0 back onto carry
    ror();
    lda(Abs(SprObject_X_Position, x));
    // add carry plus saved value (high nybble moved to low
    adc(Abs(0x0));
    // plus $f0 if necessary) to object's horizontal position
    sta(Abs(SprObject_X_Position, x));
    lda(Abs(SprObject_PageLoc, x));
    // add carry plus other saved value to the
    adc(Abs(0x2));
    // object's page location and save
    sta(Abs(SprObject_PageLoc, x));
    pla();
    // pull old carry from stack and add
    clc();
    // to high nybble moved to low
    adc(Abs(0x0));
}

int ExXMove() {
    // and leave
    return 0;
}

int MovePlayerVertically() {
    // set X for player offset
    ldx(Imm(0x0));
    lda(Abs(TimerControl));
    // if master timer control set, branch ahead
    BNE(NoJSChk);
    // otherwise check to see if jumpspring is animating
    lda(Abs(JumpspringAnimCtrl));
    // branch to leave if so
    BNE(ExXMove);
}

int NoJSChk() {
    // dump vertical force
    lda(Abs(VerticalForce));
    sta(Abs(0x0));
    // set maximum vertical speed here
    lda(Imm(0x4));
    // then jump to move player vertically
    JMP(ImposeGravitySprObj);
}

int MoveD_EnemyVertically() {
    // set quick movement amount downwards
    ldy(Imm(0x3d));
    // then check enemy state
    lda(Abs(Enemy_State, x));
    // if not set to unique state for spiny's egg, go ahead
    cmp(Imm(0x5));
    // and use, otherwise set different movement amount, continue on
    BNE(ContVMove);
}

int MoveFallingPlatform() {
    // set movement amount
    ldy(Imm(0x20));
}

int ContVMove() {
    // jump to skip the rest of this
    JMP(SetHiMax);
}

int MoveRedPTroopaDown() {
    // set Y to move downwards
    ldy(Imm(0x0));
    // skip to movement routine
    JMP(MoveRedPTroopa);
}

int MoveRedPTroopaUp() {
    // set Y to move upwards
    ldy(Imm(0x1));
}

int MoveRedPTroopa() {
    // increment X for enemy offset
    inx();
    lda(Imm(0x3));
    // set downward movement amount here
    sta(Abs(0x0));
    lda(Imm(0x6));
    // set upward movement amount here
    sta(Abs(0x1));
    lda(Imm(0x2));
    // set maximum speed here
    sta(Abs(0x2));
    // set movement direction in A, and
    tya();
    // jump to move this thing
    JMP(RedPTroopaGrav);
}

int MoveDropPlatform() {
    // set movement amount for drop platform
    ldy(Imm(0x7f));
    // skip ahead of other value set here
    BNE(SetMdMax);
}

int MoveEnemySlowVert() {
    // set movement amount for bowser/other objects
    ldy(Imm(0xf));
}

int SetMdMax() {
    // set maximum speed in A
    lda(Imm(0x2));
    // unconditional branch
    BNE(SetXMoveAmt);
}

int MoveJ_EnemyVertically() {
    // set movement amount for podoboo/other objects
    ldy(Imm(0x1c));
}

int SetHiMax() {
    // set maximum speed in A
    lda(Imm(0x3));
}

int SetXMoveAmt() {
    // set movement amount here
    sty(Abs(0x0));
    // increment X for enemy offset
    inx();
    // do a sub to move enemy object downwards
    JSR(ImposeGravitySprObj);
    // get enemy object buffer offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int ResidualGravityCode() {
    // this part appears to be residual,
    ldy(Imm(0x0));
}

int ImposeGravityBlock() {
    // set offset for maximum speed
    ldy(Imm(0x1));
    // set movement amount here
    lda(Imm(0x50));
    sta(Abs(0x0));
    // get maximum speed
    lda(Abs(offsetof(G, MaxSpdBlockData), y));
}

int ImposeGravitySprObj() {
    // set maximum speed here
    sta(Abs(0x2));
    // set value to move downwards
    lda(Imm(0x0));
    // jump to the code that actually moves it
    JMP(ImposeGravity);
}

int MovePlatformDown() {
    // save value to stack (if branching here, execute next
    lda(Imm(0x0));
}

int MovePlatformUp() {
    // save value to stack
    lda(Imm(0x1));
    pha();
    // get enemy object identifier
    ldy(Abs(Enemy_ID, x));
    // increment offset for enemy object
    inx();
    // load default value here
    lda(Imm(0x5));
    // residual comparison, object #29 never executes
    cpy(Imm(0x29));
    // this code, thus unconditional branch here
    BNE(SetDplSpd);
    // residual code
    lda(Imm(0x9));
}

int SetDplSpd() {
    // save downward movement amount here
    sta(Abs(0x0));
    // save upward movement amount here
    lda(Imm(0xa));
    sta(Abs(0x1));
    // save maximum vertical speed here
    lda(Imm(0x3));
    sta(Abs(0x2));
    // get value from stack
    pla();
    // use as Y, then move onto code shared by red koopa
    tay();
}

int RedPTroopaGrav() {
    // do a sub to move object gradually
    JSR(ImposeGravity);
    // get enemy object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int ImposeGravity() {
    // push value to stack
    pha();
    lda(Abs(SprObject_YMF_Dummy, x));
    // add value in movement force to contents of dummy variable
    clc();
    adc(Abs(SprObject_Y_MoveForce, x));
    sta(Abs(SprObject_YMF_Dummy, x));
    // set Y to zero by default
    ldy(Imm(0x0));
    // get current vertical speed
    lda(Abs(SprObject_Y_Speed, x));
    // if currently moving downwards, do not decrement Y
    BPL(AlterYP);
    // otherwise decrement Y
    dey();
}

int AlterYP() {
    // store Y here
    sty(Abs(0x7));
    // add vertical position to vertical speed plus carry
    adc(Abs(SprObject_Y_Position, x));
    // store as new vertical position
    sta(Abs(SprObject_Y_Position, x));
    lda(Abs(SprObject_Y_HighPos, x));
    // add carry plus contents of $07 to vertical high byte
    adc(Abs(0x7));
    // store as new vertical high byte
    sta(Abs(SprObject_Y_HighPos, x));
    lda(Abs(SprObject_Y_MoveForce, x));
    clc();
    // add downward movement amount to contents of $0433
    adc(Abs(0x0));
    sta(Abs(SprObject_Y_MoveForce, x));
    // add carry to vertical speed and store
    lda(Abs(SprObject_Y_Speed, x));
    adc(Imm(0x0));
    sta(Abs(SprObject_Y_Speed, x));
    // compare to maximum speed
    cmp(Abs(0x2));
    // if less than preset value, skip this part
    BMI(ChkUpM);
    lda(Abs(SprObject_Y_MoveForce, x));
    // if less positively than preset maximum, skip this part
    cmp(Imm(0x80));
    BCC(ChkUpM);
    lda(Abs(0x2));
    // keep vertical speed within maximum value
    sta(Abs(SprObject_Y_Speed, x));
    lda(Imm(0x0));
    // clear fractional
    sta(Abs(SprObject_Y_MoveForce, x));
}

int ChkUpM() {
    // get value from stack
    pla();
    // if set to zero, branch to leave
    BEQ(ExVMove);
    lda(Abs(0x2));
    // otherwise get two's compliment of maximum speed
    eor(Imm(0b11111111));
    tay();
    iny();
    // store two's compliment here
    sty(Abs(0x7));
    lda(Abs(SprObject_Y_MoveForce, x));
    // subtract upward movement amount from contents
    sec();
    // of movement force, note that $01 is twice as large as $00,
    sbc(Abs(0x1));
    // thus it effectively undoes add we did earlier
    sta(Abs(SprObject_Y_MoveForce, x));
    lda(Abs(SprObject_Y_Speed, x));
    // subtract borrow from vertical speed and store
    sbc(Imm(0x0));
    sta(Abs(SprObject_Y_Speed, x));
    // compare vertical speed to two's compliment
    cmp(Abs(0x7));
    // if less negatively than preset maximum, skip this part
    BPL(ExVMove);
    lda(Abs(SprObject_Y_MoveForce, x));
    // check if fractional part is above certain amount,
    cmp(Imm(0x80));
    // and if so, branch to leave
    BCS(ExVMove);
    lda(Abs(0x7));
    // keep vertical speed within maximum value
    sta(Abs(SprObject_Y_Speed, x));
    lda(Imm(0xff));
    // clear fractional
    sta(Abs(SprObject_Y_MoveForce, x));
}

int ExVMove() {
    // leave!
    return 0;
}

int EnemiesAndLoopsCore() {
    // check data here for MSB set
    lda(Abs(Enemy_Flag, x));
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
}

int ChkAreaTsk() {
    // check number of tasks to perform
    lda(Abs(AreaParserTaskNum));
    anda(Imm(0x7));
    // if at a specific task, jump and leave
    cmp(Imm(0x7));
    BEQ(ExitELCore);
    // otherwise, jump to process loop command/load enemies
    JMP(ProcLoopCommand);
}

int ChkBowserF() {
    // get data from stack
    pla();
    // mask out high nybble
    anda(Imm(0b1111));
    tay();
    // use as pointer and load same place with different offset
    lda(Abs(Enemy_Flag, y));
    BNE(ExitELCore);
    // if second enemy flag not set, also clear first one
    sta(Abs(Enemy_Flag, x));
}

int ExitELCore() {
    return 0;
}

int ExecGameLoopback() {
    // send player back four pages
    lda(Abs(Player_PageLoc));
    sec();
    sbc(Imm(0x4));
    sta(Abs(Player_PageLoc));
    // send current page back four pages
    lda(Abs(CurrentPageLoc));
    sec();
    sbc(Imm(0x4));
    sta(Abs(CurrentPageLoc));
    // subtract four from page location
    lda(Abs(ScreenLeft_PageLoc));
    // of screen's left border
    sec();
    sbc(Imm(0x4));
    sta(Abs(ScreenLeft_PageLoc));
    // do the same for the page location
    lda(Abs(ScreenRight_PageLoc));
    // of screen's right border
    sec();
    sbc(Imm(0x4));
    sta(Abs(ScreenRight_PageLoc));
    // subtract four from page control
    lda(Abs(AreaObjectPageLoc));
    // for area objects
    sec();
    sbc(Imm(0x4));
    sta(Abs(AreaObjectPageLoc));
    // initialize page select for both
    lda(Imm(0x0));
    // area and enemy objects
    sta(Abs(EnemyObjectPageSel));
    sta(Abs(AreaObjectPageSel));
    // initialize enemy object data offset
    sta(Abs(EnemyDataOffset));
    // and enemy object page control
    sta(Abs(EnemyObjectPageLoc));
    // adjust area object offset based on
    lda(Abs(offsetof(G, AreaDataOfsLoopback), y));
    // which loop command we encountered
    sta(Abs(AreaDataOffset));
    return 0;
}

int ProcLoopCommand() {
    // check if loop command was found
    lda(Abs(LoopCommand));
    BEQ(ChkEnemyFrenzy);
    // check to see if we're still on the first page
    lda(Abs(CurrentColumnPos));
    // if not, do not loop yet
    BNE(ChkEnemyFrenzy);
    // start at the end of each set of loop data
    ldy(Imm(0xb));
}

int FindLoop() {
    dey();
    // if all data is checked and not match, do not loop
    BMI(ChkEnemyFrenzy);
    // check to see if one of the world numbers
    lda(Abs(WorldNumber));
    // matches our current world number
    cmp(Abs(offsetof(G, LoopCmdWorldNumber), y));
    BNE(FindLoop);
    // check to see if one of the page numbers
    lda(Abs(CurrentPageLoc));
    // matches the page we're currently on
    cmp(Abs(offsetof(G, LoopCmdPageNumber), y));
    BNE(FindLoop);
    // check to see if the player is at the correct position
    lda(Abs(Player_Y_Position));
    // if not, branch to check for world 7
    cmp(Abs(offsetof(G, LoopCmdYPosition), y));
    BNE(WrongChk);
    // check to see if the player is
    lda(Abs(Player_State));
    // on solid ground (i.e. not jumping or falling)
    cmp(Imm(0x0));
    // if not, player fails to pass loop, and loopback
    BNE(WrongChk);
    // are we in world 7? (check performed on correct
    lda(Abs(WorldNumber));
    // vertical position and on solid ground)
    cmp(Imm(World7));
    // if not, initialize flags used there, otherwise
    BNE(InitMLp);
    // increment counter for correct progression
    inc(Abs(MultiLoopCorrectCntr));
}

int IncMLoop() {
    // increment master multi-part counter
    inc(Abs(MultiLoopPassCntr));
    // have we done all three parts?
    lda(Abs(MultiLoopPassCntr));
    cmp(Imm(0x3));
    // if not, skip this part
    BNE(InitLCmd);
    // if so, have we done them all correctly?
    lda(Abs(MultiLoopCorrectCntr));
    cmp(Imm(0x3));
    // if so, branch past unnecessary check here
    BEQ(InitMLp);
    // unconditional branch if previous branch fails
    BNE(DoLpBack);
}

int WrongChk() {
    // are we in world 7? (check performed on
    lda(Abs(WorldNumber));
    // incorrect vertical position or not on solid ground)
    cmp(Imm(World7));
    BEQ(IncMLoop);
}

int DoLpBack() {
    // if player is not in right place, loop back
    JSR(ExecGameLoopback);
    JSR(KillAllEnemies);
}

int InitMLp() {
    // initialize counters used for multi-part loop commands
    lda(Imm(0x0));
    sta(Abs(MultiLoopPassCntr));
    sta(Abs(MultiLoopCorrectCntr));
}

int InitLCmd() {
    // initialize loop command flag
    lda(Imm(0x0));
    sta(Abs(LoopCommand));
}

int ChkEnemyFrenzy() {
    // check for enemy object in frenzy queue
    lda(Abs(EnemyFrenzyQueue));
    // if not, skip this part
    BEQ(ProcessEnemyData);
    // store as enemy object identifier here
    sta(Abs(Enemy_ID, x));
    lda(Imm(0x1));
    // activate enemy object flag
    sta(Abs(Enemy_Flag, x));
    lda(Imm(0x0));
    // initialize state and frenzy queue
    sta(Abs(Enemy_State, x));
    sta(Abs(EnemyFrenzyQueue));
    // and then jump to deal with this enemy
    JMP(InitEnemyObject);
}

int ProcessEnemyData() {
    // get offset of enemy object data
    ldy(Abs(EnemyDataOffset));
    // load first byte
    lda(IndY((EnemyData)));
    // check for EOD terminator
    cmp(Imm(0xff));
    BNE(CheckEndofBuffer);
    // if found, jump to check frenzy buffer, otherwise
    JMP(CheckFrenzyBuffer);
}

int CheckEndofBuffer() {
    // check for special row $0e
    anda(Imm(0b1111));
    cmp(Imm(0xe));
    // if found, branch, otherwise
    BEQ(CheckRightBounds);
    // check for end of buffer
    cpx(Imm(0x5));
    // if not at end of buffer, branch
    BCC(CheckRightBounds);
    iny();
    // check for specific value here
    lda(IndY((EnemyData)));
    // not sure what this was intended for, exactly
    anda(Imm(0b111111));
    // this part is quite possibly residual code
    cmp(Imm(0x2e));
    // but it has the effect of keeping enemies out of
    BEQ(CheckRightBounds);
    // the sixth slot
    return 0;
}

int CheckRightBounds() {
    // add 48 to pixel coordinate of right boundary
    lda(Abs(ScreenRight_X_Pos));
    clc();
    adc(Imm(0x30));
    // store high nybble
    anda(Imm(0b11110000));
    sta(Abs(0x7));
    // add carry to page location of right boundary
    lda(Abs(ScreenRight_PageLoc));
    adc(Imm(0x0));
    // store page location + carry
    sta(Abs(0x6));
    ldy(Abs(EnemyDataOffset));
    iny();
    // if MSB of enemy object is clear, branch to check for row $0f
    lda(IndY((EnemyData)));
    asl();
    BCC(CheckPageCtrlRow);
    // if page select already set, do not set again
    lda(Abs(EnemyObjectPageSel));
    BNE(CheckPageCtrlRow);
    // otherwise, if MSB is set, set page select
    inc(Abs(EnemyObjectPageSel));
    // and increment page control
    inc(Abs(EnemyObjectPageLoc));
}

int CheckPageCtrlRow() {
    dey();
    // reread first byte
    lda(IndY((EnemyData)));
    anda(Imm(0xf));
    // check for special row $0f
    cmp(Imm(0xf));
    // if not found, branch to position enemy object
    BNE(PositionEnemyObj);
    // if page select set,
    lda(Abs(EnemyObjectPageSel));
    // branch without reading second byte
    BNE(PositionEnemyObj);
    iny();
    // otherwise, get second byte, mask out 2 MSB
    lda(IndY((EnemyData)));
    anda(Imm(0b111111));
    // store as page control for enemy object data
    sta(Abs(EnemyObjectPageLoc));
    // increment enemy object data offset 2 bytes
    inc(Abs(EnemyDataOffset));
    inc(Abs(EnemyDataOffset));
    // set page select for enemy object data and
    inc(Abs(EnemyObjectPageSel));
    // jump back to process loop commands again
    JMP(ProcLoopCommand);
}

int PositionEnemyObj() {
    // store page control as page location
    lda(Abs(EnemyObjectPageLoc));
    // for enemy object
    sta(Abs(Enemy_PageLoc, x));
    // get first byte of enemy object
    lda(IndY((EnemyData)));
    anda(Imm(0b11110000));
    // store column position
    sta(Abs(Enemy_X_Position, x));
    // check column position against right boundary
    cmp(Abs(ScreenRight_X_Pos));
    // without subtracting, then subtract borrow
    lda(Abs(Enemy_PageLoc, x));
    // from page location
    sbc(Abs(ScreenRight_PageLoc));
    // if enemy object beyond or at boundary, branch
    BCS(CheckRightExtBounds);
    lda(IndY((EnemyData)));
    // check for special row $0e
    anda(Imm(0b1111));
    // if found, jump elsewhere
    cmp(Imm(0xe));
    BEQ(ParseRow0e);
    // if not found, unconditional jump
    JMP(CheckThreeBytes);
}

int CheckRightExtBounds() {
    // check right boundary + 48 against
    lda(Abs(0x7));
    // column position without subtracting,
    cmp(Abs(Enemy_X_Position, x));
    // then subtract borrow from page control temp
    lda(Abs(0x6));
    // plus carry
    sbc(Abs(Enemy_PageLoc, x));
    // if enemy object beyond extended boundary, branch
    BCC(CheckFrenzyBuffer);
    // store value in vertical high byte
    lda(Imm(0x1));
    sta(Abs(Enemy_Y_HighPos, x));
    // get first byte again
    lda(IndY((EnemyData)));
    // multiply by four to get the vertical
    asl();
    // coordinate
    asl();
    asl();
    asl();
    sta(Abs(Enemy_Y_Position, x));
    // do one last check for special row $0e
    cmp(Imm(0xe0));
    // (necessary if branched to $c1cb)
    BEQ(ParseRow0e);
    iny();
    // get second byte of object
    lda(IndY((EnemyData)));
    // check to see if hard mode bit is set
    anda(Imm(0b1000000));
    // if not, branch to check for group enemy objects
    BEQ(CheckForEnemyGroup);
    // if set, check to see if secondary hard mode flag
    lda(Abs(SecondaryHardMode));
    // is on, and if not, branch to skip this object completely
    BEQ(Inc2B);
}

int CheckForEnemyGroup() {
    // get second byte and mask out 2 MSB
    lda(IndY((EnemyData)));
    anda(Imm(0b111111));
    // check for value below $37
    cmp(Imm(0x37));
    BCC(BuzzyBeetleMutate);
    // if $37 or greater, check for value
    cmp(Imm(0x3f));
    // below $3f, branch if below $3f
    BCC(DoGroup);
}

int BuzzyBeetleMutate() {
    // if below $37, check for goomba
    cmp(Imm(Goomba));
    // value ($3f or more always fails)
    BNE(StrID);
    // check if primary hard mode flag is set
    ldy(Abs(PrimaryHardMode));
    // and if so, change goomba to buzzy beetle
    BEQ(StrID);
    lda(Imm(BuzzyBeetle));
}

int StrID() {
    // store enemy object number into buffer
    sta(Abs(Enemy_ID, x));
    lda(Imm(0x1));
    // set flag for enemy in buffer
    sta(Abs(Enemy_Flag, x));
    JSR(InitEnemyObject);
    // check to see if flag is set
    lda(Abs(Enemy_Flag, x));
    // if not, leave, otherwise branch
    BNE(Inc2B);
    return 0;
}

int CheckFrenzyBuffer() {
    // if enemy object stored in frenzy buffer
    lda(Abs(EnemyFrenzyBuffer));
    // then branch ahead to store in enemy object buffer
    BNE(StrFre);
    // otherwise check vine flag offset
    lda(Abs(VineFlagOffset));
    cmp(Imm(0x1));
    // if other value <> 1, leave
    BNE(ExEPar);
    // otherwise put vine in enemy identifier
    lda(Imm(VineObject));
}

int StrFre() {
    // store contents of frenzy buffer into enemy identifier value
    sta(Abs(Enemy_ID, x));
}

int InitEnemyObject() {
    // initialize enemy state
    lda(Imm(0x0));
    sta(Abs(Enemy_State, x));
    // jump ahead to run jump engine and subroutines
    JSR(CheckpointEnemyID);
}

int ExEPar() {
    // then leave
    return 0;
}

int DoGroup() {
    // handle enemy group objects
    JMP(HandleGroupEnemies);
}

int ParseRow0e() {
    // increment Y to load third byte of object
    iny();
    iny();
    lda(IndY((EnemyData)));
    // move 3 MSB to the bottom, effectively
    lsr();
    // making %xxx00000 into %00000xxx
    lsr();
    lsr();
    lsr();
    lsr();
    // is it the same world number as we're on?
    cmp(Abs(WorldNumber));
    // if not, do not use (this allows multiple uses
    BNE(NotUse);
    // of the same area, like the underground bonus areas)
    dey();
    // otherwise, get second byte and use as offset
    lda(IndY((EnemyData)));
    // to addresses for level and enemy object data
    sta(Abs(AreaPointer));
    iny();
    // get third byte again, and this time mask out
    lda(IndY((EnemyData)));
    // the 3 MSB from before, save as page number to be
    anda(Imm(0b11111));
    // used upon entry to area, if area is entered
    sta(Abs(EntrancePage));
}

int NotUse() {
    JMP(Inc3B);
}

int CheckThreeBytes() {
    // load current offset for enemy object data
    ldy(Abs(EnemyDataOffset));
    // get first byte
    lda(IndY((EnemyData)));
    // check for special row $0e
    anda(Imm(0b1111));
    cmp(Imm(0xe));
    BNE(Inc2B);
}

int Inc3B() {
    // if row = $0e, increment three bytes
    inc(Abs(EnemyDataOffset));
}

int Inc2B() {
    // otherwise increment two bytes
    inc(Abs(EnemyDataOffset));
    inc(Abs(EnemyDataOffset));
    // init page select for enemy objects
    lda(Imm(0x0));
    sta(Abs(EnemyObjectPageSel));
    // reload current offset in enemy buffers
    ldx(Abs(ObjectOffset));
    // and leave
    return 0;
}

int CheckpointEnemyID() {
    lda(Abs(Enemy_ID, x));
    // check enemy object identifier for $15 or greater
    cmp(Imm(0x15));
    // and branch straight to the jump engine if found
    BCS(InitEnemyRoutines);
    // save identifier in Y register for now
    tay();
    lda(Abs(Enemy_Y_Position, x));
    // add eight pixels to what will eventually be the
    adc(Imm(0x8));
    // enemy object's vertical coordinate ($00-$14 only)
    sta(Abs(Enemy_Y_Position, x));
    lda(Imm(0x1));
    // set offscreen masked bit
    sta(Abs(EnemyOffscrBitsMasked, x));
    // get identifier back and use as offset for jump engine
    tya();
}

int InitEnemyRoutines() {
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

int NoInitCode() {
    // this executed when enemy object has no init code
    return 0;
}

int InitGoomba() {
    // set appropriate horizontal speed
    JSR(InitNormalEnemy);
    // set $09 as bounding box control, set other values
    JMP(SmallBBox);
}

int InitPodoboo() {
    // set enemy position to below
    lda(Imm(0x2));
    // the bottom of the screen
    sta(Abs(Enemy_Y_HighPos, x));
    sta(Abs(Enemy_Y_Position, x));
    lsr();
    // set timer for enemy
    sta(Abs(EnemyIntervalTimer, x));
    lsr();
    // initialize enemy state, then jump to use
    sta(Abs(Enemy_State, x));
    // $09 as bounding box size and set other things
    JMP(SmallBBox);
}

int InitRetainerObj() {
    // set fixed vertical position for
    lda(Imm(0xb8));
    // princess/mushroom retainer object
    sta(Abs(Enemy_Y_Position, x));
    return 0;
}

int InitNormalEnemy() {
    // load offset of 1 by default
    ldy(Imm(0x1));
    // check for primary hard mode flag set
    lda(Abs(PrimaryHardMode));
    BNE(GetESpd);
    // if not set, decrement offset
    dey();
}

int GetESpd() {
    // get appropriate horizontal speed
    lda(Abs(offsetof(G, NormalXSpdData), y));
}

int SetESpd() {
    // store as speed for enemy object
    sta(Abs(Enemy_X_Speed, x));
    // branch to set bounding box control and other data
    JMP(TallBBox);
}

int InitRedKoopa() {
    // load appropriate horizontal speed
    JSR(InitNormalEnemy);
    // set enemy state for red koopa troopa $03
    lda(Imm(0x1));
    sta(Abs(Enemy_State, x));
    return 0;
}

int InitHammerBro() {
    // init horizontal speed and timer used by hammer bro
    lda(Imm(0x0));
    // apparently to time hammer throwing
    sta(Abs(HammerThrowingTimer, x));
    sta(Abs(Enemy_X_Speed, x));
    // get secondary hard mode flag
    ldy(Abs(SecondaryHardMode));
    lda(Abs(offsetof(G, HBroWalkingTimerData), y));
    // set value as delay for hammer bro to walk left
    sta(Abs(EnemyIntervalTimer, x));
    // set specific value for bounding box size control
    lda(Imm(0xb));
    JMP(SetBBox);
}

int InitHorizFlySwimEnemy() {
    // initialize horizontal speed
    lda(Imm(0x0));
    JMP(SetESpd);
}

int InitBloober() {
    // initialize horizontal speed
    lda(Imm(0x0));
    sta(Abs(BlooperMoveSpeed, x));
}

int SmallBBox() {
    // set specific bounding box size control
    lda(Imm(0x9));
    // unconditional branch
    BNE(SetBBox);
}

int InitRedPTroopa() {
    // load central position adder for 48 pixels down
    ldy(Imm(0x30));
    // set vertical coordinate into location to
    lda(Abs(Enemy_Y_Position, x));
    // be used as original vertical coordinate
    sta(Abs(RedPTroopaOrigXPos, x));
    // if vertical coordinate < $80
    BPL(GetCent);
    // if => $80, load position adder for 32 pixels up
    ldy(Imm(0xe0));
}

int GetCent() {
    // send central position adder to A
    tya();
    // add to current vertical coordinate
    adc(Abs(Enemy_Y_Position, x));
    // store as central vertical coordinate
    sta(Abs(RedPTroopaCenterYPos, x));
}

int TallBBox() {
    // set specific bounding box size control
    lda(Imm(0x3));
}

int SetBBox() {
    // set bounding box control here
    sta(Abs(Enemy_BoundBoxCtrl, x));
    // set moving direction for left
    lda(Imm(0x2));
    sta(Abs(Enemy_MovingDir, x));
}

int InitVStf() {
    // initialize vertical speed
    lda(Imm(0x0));
    // and movement force
    sta(Abs(Enemy_Y_Speed, x));
    sta(Abs(Enemy_Y_MoveForce, x));
    return 0;
}

int InitBulletBill() {
    // set moving direction for left
    lda(Imm(0x2));
    sta(Abs(Enemy_MovingDir, x));
    // set bounding box control for $09
    lda(Imm(0x9));
    sta(Abs(Enemy_BoundBoxCtrl, x));
    return 0;
}

int InitCheepCheep() {
    // set vertical bounding box, speed, init others
    JSR(SmallBBox);
    // check one portion of LSFR
    lda(Abs(PseudoRandomBitReg, x));
    // get d4 from it
    anda(Imm(0b10000));
    // save as movement flag of some sort
    sta(Abs(CheepCheepMoveMFlag, x));
    lda(Abs(Enemy_Y_Position, x));
    // save original vertical coordinate here
    sta(Abs(CheepCheepOrigYPos, x));
    return 0;
}

int InitLakitu() {
    // check to see if an enemy is already in
    lda(Abs(EnemyFrenzyBuffer));
    // the frenzy buffer, and branch to kill lakitu if so
    BNE(KillLakitu);
}

int SetupLakitu() {
    // erase counter for lakitu's reappearance
    lda(Imm(0x0));
    sta(Abs(LakituReappearTimer));
    // set $03 as bounding box, set other attributes
    JSR(InitHorizFlySwimEnemy);
    // set $03 as bounding box again (not necessary) and leave
    JMP(TallBBox2);
}

int KillLakitu() {
    JMP(EraseEnemyObject);
}

int LakituAndSpinyHandler() {
    // if timer here not expired, leave
    lda(Abs(FrenzyEnemyTimer));
    BNE(ExLSHand);
    // if we are on the special use slot, leave
    cpx(Imm(0x5));
    BCS(ExLSHand);
    // set timer
    lda(Imm(0x80));
    sta(Abs(FrenzyEnemyTimer));
    // start with the last enemy slot
    ldy(Imm(0x4));
}

int ChkLak() {
    // check all enemy slots to see
    lda(Abs(Enemy_ID, y));
    // if lakitu is on one of them
    cmp(Imm(Lakitu));
    // if so, branch out of this loop
    BEQ(CreateSpiny);
    // otherwise check another slot
    dey();
    // loop until all slots are checked
    BPL(ChkLak);
    // increment reappearance timer
    inc(Abs(LakituReappearTimer));
    lda(Abs(LakituReappearTimer));
    // check to see if we're up to a certain value yet
    cmp(Imm(0x7));
    // if not, leave
    BCC(ExLSHand);
    // start with the last enemy slot again
    ldx(Imm(0x4));
}

int ChkNoEn() {
    // check enemy buffer flag for non-active enemy slot
    lda(Abs(Enemy_Flag, x));
    // branch out of loop if found
    BEQ(CreateL);
    // otherwise check next slot
    dex();
    // branch until all slots are checked
    BPL(ChkNoEn);
    // if no empty slots were found, branch to leave
    BMI(RetEOfs);
}

int CreateL() {
    // initialize enemy state
    lda(Imm(0x0));
    sta(Abs(Enemy_State, x));
    // create lakitu enemy object
    lda(Imm(Lakitu));
    sta(Abs(Enemy_ID, x));
    // do a sub to set up lakitu
    JSR(SetupLakitu);
    lda(Imm(0x20));
    // finish setting up lakitu
    JSR(PutAtRightExtent);
}

int RetEOfs() {
    // get enemy object buffer offset again and leave
    ldx(Abs(ObjectOffset));
}

int ExLSHand() {
    return 0;
}

int CreateSpiny() {
    // if player above a certain point, branch to leave
    lda(Abs(Player_Y_Position));
    cmp(Imm(0x2c));
    BCC(ExLSHand);
    // if lakitu is not in normal state, branch to leave
    lda(Abs(Enemy_State, y));
    BNE(ExLSHand);
    // store horizontal coordinates (high and low) of lakitu
    lda(Abs(Enemy_PageLoc, y));
    // into the coordinates of the spiny we're going to create
    sta(Abs(Enemy_PageLoc, x));
    lda(Abs(Enemy_X_Position, y));
    sta(Abs(Enemy_X_Position, x));
    // put spiny within vertical screen unit
    lda(Imm(0x1));
    sta(Abs(Enemy_Y_HighPos, x));
    // put spiny eight pixels above where lakitu is
    lda(Abs(Enemy_Y_Position, y));
    sec();
    sbc(Imm(0x8));
    sta(Abs(Enemy_Y_Position, x));
    // get 2 LSB of LSFR and save to Y
    lda(Abs(PseudoRandomBitReg, x));
    anda(Imm(0b11));
    tay();
    ldx(Imm(0x2));
}

int DifLoop() {
    // get three values and save them
    lda(Abs(offsetof(G, PRDiffAdjustData), y));
    // to $01-$03
    sta(Abs(0x1, x));
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
    ldx(Abs(ObjectOffset));
    // move enemy, change direction, get value - difference
    JSR(PlayerLakituDiff);
    // check player's horizontal speed
    ldy(Abs(Player_X_Speed));
    cpy(Imm(0x8));
    // if moving faster than a certain amount, branch elsewhere
    BCS(SetSpSpd);
    // otherwise save value in A to Y for now
    tay();
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // get one of the LSFR parts and save the 2 LSB
    anda(Imm(0b11));
    // branch if neither bits are set
    BEQ(UsePosv);
    tya();
    // otherwise get two's compliment of Y
    eor(Imm(0b11111111));
    tay();
    iny();
}

int UsePosv() {
    // put value from A in Y back to A (they will be lost anyway)
    tya();
}

int SetSpSpd() {
    // set bounding box control, init attributes, lose contents of A
    JSR(SmallBBox);
    ldy(Imm(0x2));
    // set horizontal speed to zero because previous contents
    sta(Abs(Enemy_X_Speed, x));
    // of A were lost...branch here will never be taken for
    cmp(Imm(0x0));
    // the same reason
    BMI(SpinyRte);
    dey();
}

int SpinyRte() {
    // set moving direction to the right
    sty(Abs(Enemy_MovingDir, x));
    lda(Imm(0xfd));
    // set vertical speed to move upwards
    sta(Abs(Enemy_Y_Speed, x));
    lda(Imm(0x1));
    // enable enemy object by setting flag
    sta(Abs(Enemy_Flag, x));
    lda(Imm(0x5));
    // put spiny in egg state and leave
    sta(Abs(Enemy_State, x));
}

int ChpChpEx() {
    return 0;
}

int InitLongFirebar() {
    // create enemy object for long firebar
    JSR(DuplicateEnemyObj);
}

int InitShortFirebar() {
    // initialize low byte of spin state
    lda(Imm(0x0));
    sta(Abs(FirebarSpinState_Low, x));
    // subtract $1b from enemy identifier
    lda(Abs(Enemy_ID, x));
    // to get proper offset for firebar data
    sec();
    sbc(Imm(0x1b));
    tay();
    // get spinning speed of firebar
    lda(Abs(offsetof(G, FirebarSpinSpdData), y));
    sta(Abs(FirebarSpinSpeed, x));
    // get spinning direction of firebar
    lda(Abs(offsetof(G, FirebarSpinDirData), y));
    sta(Abs(FirebarSpinDirection, x));
    lda(Abs(Enemy_Y_Position, x));
    // add four pixels to vertical coordinate
    clc();
    adc(Imm(0x4));
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(Enemy_X_Position, x));
    // add four pixels to horizontal coordinate
    clc();
    adc(Imm(0x4));
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // add carry to page location
    adc(Imm(0x0));
    sta(Abs(Enemy_PageLoc, x));
    // set bounding box control (not used) and leave
    JMP(TallBBox2);
}

int InitFlyingCheepCheep() {
    // if timer here not expired yet, branch to leave
    lda(Abs(FrenzyEnemyTimer));
    BNE(ChpChpEx);
    // jump to set bounding box size $09 and init other values
    JSR(SmallBBox);
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // set pseudorandom offset here
    anda(Imm(0b11));
    tay();
    // load timer with pseudorandom offset
    lda(Abs(offsetof(G, FlyCCTimerData), y));
    sta(Abs(FrenzyEnemyTimer));
    // load Y with default value
    ldy(Imm(0x3));
    lda(Abs(SecondaryHardMode));
    // if secondary hard mode flag not set, do not increment Y
    BEQ(MaxCC);
    // otherwise, increment Y to allow as many as four onscreen
    iny();
}

int MaxCC() {
    // store whatever pseudorandom bits are in Y
    sty(Abs(0x0));
    // compare enemy object buffer offset with Y
    cpx(Abs(0x0));
    // if X => Y, branch to leave
    BCS(ChpChpEx);
    lda(Abs(PseudoRandomBitReg, x));
    // get last two bits of LSFR, first part
    anda(Imm(0b11));
    // and store in two places
    sta(Abs(0x0));
    sta(Abs(0x1));
    // set vertical speed for cheep-cheep
    lda(Imm(0xfb));
    sta(Abs(Enemy_Y_Speed, x));
    // load default value
    lda(Imm(0x0));
    // check player's horizontal speed
    ldy(Abs(Player_X_Speed));
    // if player not moving left or right, skip this part
    BEQ(GSeed);
    lda(Imm(0x4));
    // if moving to the right but not very quickly,
    cpy(Imm(0x19));
    // do not change A
    BCC(GSeed);
    // otherwise, multiply A by 2
    asl();
}

int GSeed() {
    // save to stack
    pha();
    clc();
    // add to last two bits of LSFR we saved earlier
    adc(Abs(0x0));
    // save it there
    sta(Abs(0x0));
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // if neither of the last two bits of second LSFR set,
    anda(Imm(0b11));
    // skip this part and save contents of $00
    BEQ(RSeed);
    lda(Abs(((PseudoRandomBitReg) + (2)), x));
    // otherwise overwrite with lower nybble of
    anda(Imm(0b1111));
    // third LSFR part
    sta(Abs(0x0));
}

int RSeed() {
    // get value from stack we saved earlier
    pla();
    clc();
    // add to last two bits of LSFR we saved in other place
    adc(Abs(0x1));
    // use as pseudorandom offset here
    tay();
    // get horizontal speed using pseudorandom offset
    lda(Abs(offsetof(G, FlyCCXSpeedData), y));
    sta(Abs(Enemy_X_Speed, x));
    // set to move towards the right
    lda(Imm(0x1));
    sta(Abs(Enemy_MovingDir, x));
    // if player moving left or right, branch ahead of this part
    lda(Abs(Player_X_Speed));
    BNE(D2XPos1);
    // get first LSFR or third LSFR lower nybble
    ldy(Abs(0x0));
    // and check for d1 set
    tya();
    anda(Imm(0b10));
    // if d1 not set, branch
    BEQ(D2XPos1);
    lda(Abs(Enemy_X_Speed, x));
    // if d1 set, change horizontal speed
    eor(Imm(0xff));
    // into two's compliment, thus moving in the opposite
    clc();
    // direction
    adc(Imm(0x1));
    sta(Abs(Enemy_X_Speed, x));
    // increment to move towards the left
    inc(Abs(Enemy_MovingDir, x));
}

int D2XPos1() {
    // get first LSFR or third LSFR lower nybble again
    tya();
    anda(Imm(0b10));
    // check for d1 set again, branch again if not set
    BEQ(D2XPos2);
    // get player's horizontal position
    lda(Abs(Player_X_Position));
    clc();
    // if d1 set, add value obtained from pseudorandom offset
    adc(Abs(offsetof(G, FlyCCXPositionData), y));
    // and save as enemy's horizontal position
    sta(Abs(Enemy_X_Position, x));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // add carry and jump past this part
    adc(Imm(0x0));
    JMP(FinCCSt);
}

int D2XPos2() {
    // get player's horizontal position
    lda(Abs(Player_X_Position));
    sec();
    // if d1 not set, subtract value obtained from pseudorandom
    sbc(Abs(offsetof(G, FlyCCXPositionData), y));
    // offset and save as enemy's horizontal position
    sta(Abs(Enemy_X_Position, x));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // subtract borrow
    sbc(Imm(0x0));
}

int FinCCSt() {
    // save as enemy's page location
    sta(Abs(Enemy_PageLoc, x));
    lda(Imm(0x1));
    // set enemy's buffer flag
    sta(Abs(Enemy_Flag, x));
    // set enemy's high vertical byte
    sta(Abs(Enemy_Y_HighPos, x));
    lda(Imm(0xf8));
    // put enemy below the screen, and we are done
    sta(Abs(Enemy_Y_Position, x));
    return 0;
}

int InitBowser() {
    // jump to create another bowser object
    JSR(DuplicateEnemyObj);
    // save offset of first here
    stx(Abs(BowserFront_Offset));
    lda(Imm(0x0));
    // initialize bowser's body controls
    sta(Abs(BowserBodyControls));
    // and bridge collapse offset
    sta(Abs(BridgeCollapseOffset));
    lda(Abs(Enemy_X_Position, x));
    // store original horizontal position here
    sta(Abs(BowserOrigXPos));
    lda(Imm(0xdf));
    // store something here
    sta(Abs(BowserFireBreathTimer));
    // and in moving direction
    sta(Abs(Enemy_MovingDir, x));
    lda(Imm(0x20));
    // set bowser's feet timer and in enemy timer
    sta(Abs(BowserFeetCounter));
    sta(Abs(EnemyFrameTimer, x));
    lda(Imm(0x5));
    // give bowser 5 hit points
    sta(Abs(BowserHitPoints));
    lsr();
    // set default movement speed here
    sta(Abs(BowserMovementSpeed));
    return 0;
}

int DuplicateEnemyObj() {
    // start at beginning of enemy slots
    ldy(Imm(0xff));
}

int FSLoop() {
    // increment one slot
    iny();
    // check enemy buffer flag for empty slot
    lda(Abs(Enemy_Flag, y));
    // if set, branch and keep checking
    BNE(FSLoop);
    // otherwise set offset here
    sty(Abs(DuplicateObj_Offset));
    // transfer original enemy buffer offset
    txa();
    // store with d7 set as flag in new enemy
    ora(Imm(0b10000000));
    // slot as well as enemy offset
    sta(Abs(Enemy_Flag, y));
    lda(Abs(Enemy_PageLoc, x));
    // copy page location and horizontal coordinates
    sta(Abs(Enemy_PageLoc, y));
    // from original enemy to new enemy
    lda(Abs(Enemy_X_Position, x));
    sta(Abs(Enemy_X_Position, y));
    lda(Imm(0x1));
    // set flag as normal for original enemy
    sta(Abs(Enemy_Flag, x));
    // set high vertical byte for new enemy
    sta(Abs(Enemy_Y_HighPos, y));
    lda(Abs(Enemy_Y_Position, x));
    // copy vertical coordinate from original to new
    sta(Abs(Enemy_Y_Position, y));
}

int FlmEx() {
    // and then leave
    return 0;
}

int InitBowserFlame() {
    // if timer not expired yet, branch to leave
    lda(Abs(FrenzyEnemyTimer));
    BNE(FlmEx);
    // reset something here
    sta(Abs(Enemy_Y_MoveForce, x));
    lda(Abs(NoiseSoundQueue));
    // load bowser's flame sound into queue
    ora(Imm(Sfx_BowserFlame));
    sta(Abs(NoiseSoundQueue));
    // get bowser's buffer offset
    ldy(Abs(BowserFront_Offset));
    // check for bowser
    lda(Abs(Enemy_ID, y));
    cmp(Imm(Bowser));
    // branch if found
    BEQ(SpawnFromMouth);
    // get timer data based on flame counter
    JSR(SetFlameTimer);
    clc();
    // add 32 frames by default
    adc(Imm(0x20));
    ldy(Abs(SecondaryHardMode));
    // if secondary mode flag not set, use as timer setting
    BEQ(SetFrT);
    sec();
    // otherwise subtract 16 frames for secondary hard mode
    sbc(Imm(0x10));
}

int SetFrT() {
    // set timer accordingly
    sta(Abs(FrenzyEnemyTimer));
    lda(Abs(PseudoRandomBitReg, x));
    // get 2 LSB from first part of LSFR
    anda(Imm(0b11));
    // set here
    sta(Abs(BowserFlamePRandomOfs, x));
    // use as offset
    tay();
    // load vertical position based on pseudorandom offset
    lda(Abs(offsetof(G, FlameYPosData), y));
}

int PutAtRightExtent() {
    // set vertical position
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(ScreenRight_X_Pos));
    clc();
    // place enemy 32 pixels beyond right side of screen
    adc(Imm(0x20));
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(ScreenRight_PageLoc));
    // add carry
    adc(Imm(0x0));
    sta(Abs(Enemy_PageLoc, x));
    // skip this part to finish setting values
    JMP(FinishFlame);
}

int SpawnFromMouth() {
    // get bowser's horizontal position
    lda(Abs(Enemy_X_Position, y));
    sec();
    // subtract 14 pixels
    sbc(Imm(0xe));
    // save as flame's horizontal position
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, y));
    // copy page location from bowser to flame
    sta(Abs(Enemy_PageLoc, x));
    lda(Abs(Enemy_Y_Position, y));
    // add 8 pixels to bowser's vertical position
    clc();
    adc(Imm(0x8));
    // save as flame's vertical position
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(PseudoRandomBitReg, x));
    // get 2 LSB from first part of LSFR
    anda(Imm(0b11));
    // save here
    sta(Abs(Enemy_YMF_Dummy, x));
    // use as offset
    tay();
    // get value here using bits as offset
    lda(Abs(offsetof(G, FlameYPosData), y));
    // load default offset
    ldy(Imm(0x0));
    // compare value to flame's current vertical position
    cmp(Abs(Enemy_Y_Position, x));
    // if less, do not increment offset
    BCC(SetMF);
    // otherwise increment now
    iny();
}

int SetMF() {
    // get value here and save
    lda(Abs(offsetof(G, FlameYMFAdderData), y));
    // to vertical movement force
    sta(Abs(Enemy_Y_MoveForce, x));
    lda(Imm(0x0));
    // clear enemy frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
}

int FinishFlame() {
    // set $08 for bounding box control
    lda(Imm(0x8));
    sta(Abs(Enemy_BoundBoxCtrl, x));
    // set high byte of vertical and
    lda(Imm(0x1));
    // enemy buffer flag
    sta(Abs(Enemy_Y_HighPos, x));
    sta(Abs(Enemy_Flag, x));
    lsr();
    // initialize horizontal movement force, and
    sta(Abs(Enemy_X_MoveForce, x));
    // enemy state
    sta(Abs(Enemy_State, x));
    return 0;
}

int InitFireworks() {
    // if timer not expired yet, branch to leave
    lda(Abs(FrenzyEnemyTimer));
    BNE(ExitFWk);
    // otherwise reset timer
    lda(Imm(0x20));
    sta(Abs(FrenzyEnemyTimer));
    // decrement for each explosion
    dec(Abs(FireworksCounter));
    // start at last slot
    ldy(Imm(0x6));
}

int StarFChk() {
    dey();
    // check for presence of star flag object
    lda(Abs(Enemy_ID, y));
    // if there isn't a star flag object,
    cmp(Imm(StarFlagObject));
    // routine goes into infinite loop = crash
    BNE(StarFChk);
    lda(Abs(Enemy_X_Position, y));
    // get horizontal coordinate of star flag object, then
    sec();
    // subtract 48 pixels from it and save to
    sbc(Imm(0x30));
    // the stack
    pha();
    lda(Abs(Enemy_PageLoc, y));
    // subtract the carry from the page location
    sbc(Imm(0x0));
    // of the star flag object
    sta(Abs(0x0));
    // get fireworks counter
    lda(Abs(FireworksCounter));
    clc();
    // add state of star flag object (possibly not necessary)
    adc(Abs(Enemy_State, y));
    // use as offset
    tay();
    // get saved horizontal coordinate of star flag - 48 pixels
    pla();
    clc();
    // add number based on offset of fireworks counter
    adc(Abs(offsetof(G, FireworksXPosData), y));
    // store as the fireworks object horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(0x0));
    // add carry and store as page location for
    adc(Imm(0x0));
    // the fireworks object
    sta(Abs(Enemy_PageLoc, x));
    // get vertical position using same offset
    lda(Abs(offsetof(G, FireworksYPosData), y));
    // and store as vertical coordinate for fireworks object
    sta(Abs(Enemy_Y_Position, x));
    lda(Imm(0x1));
    // store in vertical high byte
    sta(Abs(Enemy_Y_HighPos, x));
    // and activate enemy buffer flag
    sta(Abs(Enemy_Flag, x));
    lsr();
    // initialize explosion counter
    sta(Abs(ExplosionGfxCounter, x));
    lda(Imm(0x8));
    // set explosion timing counter
    sta(Abs(ExplosionTimerCounter, x));
}

int ExitFWk() {
    return 0;
}

int BulletBillCheepCheep() {
    // if timer not expired yet, branch to leave
    lda(Abs(FrenzyEnemyTimer));
    BNE(ExF17);
    // are we in a water-type level?
    lda(Abs(AreaType));
    // if not, branch elsewhere
    BNE(DoBulletBills);
    // are we past third enemy slot?
    cpx(Imm(0x3));
    // if so, branch to leave
    BCS(ExF17);
    // load default offset
    ldy(Imm(0x0));
    lda(Abs(PseudoRandomBitReg, x));
    // check first part of LSFR against preset value
    cmp(Imm(0xaa));
    // if less than preset, do not increment offset
    BCC(ChkW2);
    // otherwise increment
    iny();
}

int ChkW2() {
    // check world number
    lda(Abs(WorldNumber));
    cmp(Imm(World2));
    // if we're on world 2, do not increment offset
    BEQ(Get17ID);
    // otherwise increment
    iny();
}

int Get17ID() {
    tya();
    // mask out all but last bit of offset
    anda(Imm(0b1));
    tay();
    // load identifier for cheep-cheeps
    lda(Abs(offsetof(G, SwimCC_IDData), y));
}

int Set17ID() {
    // store whatever's in A as enemy identifier
    sta(Abs(Enemy_ID, x));
    lda(Abs(BitMFilter));
    // if not all bits set, skip init part and compare bits
    cmp(Imm(0xff));
    BNE(GetRBit);
    // initialize vertical position filter
    lda(Imm(0x0));
    sta(Abs(BitMFilter));
}

int GetRBit() {
    // get first part of LSFR
    lda(Abs(PseudoRandomBitReg, x));
    // mask out all but 3 LSB
    anda(Imm(0b111));
}

int ChkRBit() {
    // use as offset
    tay();
    // load bitmask
    lda(Abs(offsetof(G, Bitmasks), y));
    // perform AND on filter without changing it
    bit(Abs(BitMFilter));
    BEQ(AddFBit);
    // increment offset
    iny();
    tya();
    // mask out all but 3 LSB thus keeping it 0-7
    anda(Imm(0b111));
    // do another check
    JMP(ChkRBit);
}

int AddFBit() {
    // add bit to already set bits in filter
    ora(Abs(BitMFilter));
    // and store
    sta(Abs(BitMFilter));
    // load vertical position using offset
    lda(Abs(offsetof(G, Enemy17YPosData), y));
    // set vertical position and other values
    JSR(PutAtRightExtent);
    // initialize dummy variable
    sta(Abs(Enemy_YMF_Dummy, x));
    // set timer
    lda(Imm(0x20));
    sta(Abs(FrenzyEnemyTimer));
    // process our new enemy object
    JMP(CheckpointEnemyID);
}

int DoBulletBills() {
    // start at beginning of enemy slots
    ldy(Imm(0xff));
}

int BB_SLoop() {
    // move onto the next slot
    iny();
    // branch to play sound if we've done all slots
    cpy(Imm(0x5));
    BCS(FireBulletBill);
    // if enemy buffer flag not set,
    lda(Abs(Enemy_Flag, y));
    // loop back and check another slot
    BEQ(BB_SLoop);
    lda(Abs(Enemy_ID, y));
    // check enemy identifier for
    cmp(Imm(BulletBill_FrenzyVar));
    // bullet bill object (frenzy variant)
    BNE(BB_SLoop);
}

int ExF17() {
    // if found, leave
    return 0;
}

int FireBulletBill() {
    lda(Abs(Square2SoundQueue));
    // play fireworks/gunfire sound
    ora(Imm(Sfx_Blast));
    sta(Abs(Square2SoundQueue));
    // load identifier for bullet bill object
    lda(Imm(BulletBill_FrenzyVar));
    // unconditional branch
    BNE(Set17ID);
}

int HandleGroupEnemies() {
    // load value for green koopa troopa
    ldy(Imm(0x0));
    sec();
    // subtract $37 from second byte read
    sbc(Imm(0x37));
    // save result in stack for now
    pha();
    // was byte in $3b-$3e range?
    cmp(Imm(0x4));
    // if so, branch
    BCS(SnglID);
    // save another copy to stack
    pha();
    // load value for goomba enemy
    ldy(Imm(Goomba));
    // if primary hard mode flag not set,
    lda(Abs(PrimaryHardMode));
    // branch, otherwise change to value
    BEQ(PullID);
    // for buzzy beetle
    ldy(Imm(BuzzyBeetle));
}

int PullID() {
    // get second copy from stack
    pla();
}

int SnglID() {
    // save enemy id here
    sty(Abs(0x1));
    // load default y coordinate
    ldy(Imm(0xb0));
    // check to see if d1 was set
    anda(Imm(0x2));
    // if so, move y coordinate up,
    BEQ(SetYGp);
    // otherwise branch and use default
    ldy(Imm(0x70));
}

int SetYGp() {
    // save y coordinate here
    sty(Abs(0x0));
    // get page number of right edge of screen
    lda(Abs(ScreenRight_PageLoc));
    // save here
    sta(Abs(0x2));
    // get pixel coordinate of right edge
    lda(Abs(ScreenRight_X_Pos));
    // save here
    sta(Abs(0x3));
    // load two enemies by default
    ldy(Imm(0x2));
    // get first copy from stack
    pla();
    // check to see if d0 was set
    lsr();
    // if not, use default value
    BCC(CntGrp);
    // otherwise increment to three enemies
    iny();
}

int CntGrp() {
    // save number of enemies here
    sty(Abs(NumberofGroupEnemies));
}

int GrLoop() {
    // start at beginning of enemy buffers
    ldx(Imm(0xff));
}

int GSltLp() {
    // increment and branch if past
    inx();
    // end of buffers
    cpx(Imm(0x5));
    BCS(NextED);
    // check to see if enemy is already
    lda(Abs(Enemy_Flag, x));
    // stored in buffer, and branch if so
    BNE(GSltLp);
    lda(Abs(0x1));
    // store enemy object identifier
    sta(Abs(Enemy_ID, x));
    lda(Abs(0x2));
    // store page location for enemy object
    sta(Abs(Enemy_PageLoc, x));
    lda(Abs(0x3));
    // store x coordinate for enemy object
    sta(Abs(Enemy_X_Position, x));
    clc();
    // add 24 pixels for next enemy
    adc(Imm(0x18));
    sta(Abs(0x3));
    // add carry to page location for
    lda(Abs(0x2));
    // next enemy
    adc(Imm(0x0));
    sta(Abs(0x2));
    // store y coordinate for enemy object
    lda(Abs(0x0));
    sta(Abs(Enemy_Y_Position, x));
    // activate flag for buffer, and
    lda(Imm(0x1));
    // put enemy within the screen vertically
    sta(Abs(Enemy_Y_HighPos, x));
    sta(Abs(Enemy_Flag, x));
    // process each enemy object separately
    JSR(CheckpointEnemyID);
    // do this until we run out of enemy objects
    dec(Abs(NumberofGroupEnemies));
    BNE(GrLoop);
}

int NextED() {
    // jump to increment data offset and leave
    JMP(Inc2B);
}

int InitPiranhaPlant() {
    // set initial speed
    lda(Imm(0x1));
    sta(Abs(PiranhaPlant_Y_Speed, x));
    lsr();
    // initialize enemy state and what would normally
    sta(Abs(Enemy_State, x));
    // be used as vertical speed, but not in this case
    sta(Abs(PiranhaPlant_MoveFlag, x));
    lda(Abs(Enemy_Y_Position, x));
    // save original vertical coordinate here
    sta(Abs(PiranhaPlantDownYPos, x));
    sec();
    sbc(Imm(0x18));
    // save original vertical coordinate - 24 pixels here
    sta(Abs(PiranhaPlantUpYPos, x));
    lda(Imm(0x9));
    // set specific value for bounding box control
    JMP(SetBBox2);
}

int InitEnemyFrenzy() {
    // load enemy identifier
    lda(Abs(Enemy_ID, x));
    // save in enemy frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    sec();
    // subtract 12 and use as offset for jump engine
    sbc(Imm(0x12));
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

int NoFrenzyCode() {
    return 0;
}

int EndFrenzy() {
    // start at last slot
    ldy(Imm(0x5));
}

int LakituChk() {
    // check enemy identifiers
    lda(Abs(Enemy_ID, y));
    // for lakitu
    cmp(Imm(Lakitu));
    BNE(NextFSlot);
    // if found, set state
    lda(Imm(0x1));
    sta(Abs(Enemy_State, y));
}

int NextFSlot() {
    // move onto the next slot
    dey();
    // do this until all slots are checked
    BPL(LakituChk);
    lda(Imm(0x0));
    // empty enemy frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    // disable enemy buffer flag for this object
    sta(Abs(Enemy_Flag, x));
    return 0;
}

int InitJumpGPTroopa() {
    // set for movement to the left
    lda(Imm(0x2));
    sta(Abs(Enemy_MovingDir, x));
    // set horizontal speed
    lda(Imm(0xf8));
    sta(Abs(Enemy_X_Speed, x));
}

int TallBBox2() {
    // set specific value for bounding box control
    lda(Imm(0x3));
}

int SetBBox2() {
    // set bounding box control then leave
    sta(Abs(Enemy_BoundBoxCtrl, x));
    return 0;
}

int InitBalPlatform() {
    // raise vertical position by two pixels
    dec(Abs(Enemy_Y_Position, x));
    dec(Abs(Enemy_Y_Position, x));
    // if secondary hard mode flag not set,
    ldy(Abs(SecondaryHardMode));
    // branch ahead
    BNE(AlignP);
    // otherwise set value here
    ldy(Imm(0x2));
    // do a sub to add or subtract pixels
    JSR(PosPlatform);
}

int AlignP() {
    // set default value here for now
    ldy(Imm(0xff));
    // get current balance platform alignment
    lda(Abs(BalPlatformAlignment));
    // set platform alignment to object state here
    sta(Abs(Enemy_State, x));
    // if old alignment $ff, put $ff as alignment for negative
    BPL(SetBPA);
    // if old contents already $ff, put
    txa();
    // object offset as alignment to make next positive
    tay();
}

int SetBPA() {
    // store whatever value's in Y here
    sty(Abs(BalPlatformAlignment));
    lda(Imm(0x0));
    // init moving direction
    sta(Abs(Enemy_MovingDir, x));
    // init Y
    tay();
    // do a sub to add 8 pixels, then run shared code here
    JSR(PosPlatform);
}

int InitDropPlatform() {
    lda(Imm(0xff));
    // set some value here
    sta(Abs(PlatformCollisionFlag, x));
    // then jump ahead to execute more code
    JMP(CommonPlatCode);
}

int InitHoriPlatform() {
    lda(Imm(0x0));
    // init one of the moving counters
    sta(Abs(XMoveSecondaryCounter, x));
    // jump ahead to execute more code
    JMP(CommonPlatCode);
}

int InitVertPlatform() {
    // set default value here
    ldy(Imm(0x40));
    // check vertical position
    lda(Abs(Enemy_Y_Position, x));
    // if above a certain point, skip this part
    BPL(SetYO);
    eor(Imm(0xff));
    // otherwise get two's compliment
    clc();
    adc(Imm(0x1));
    // get alternate value to add to vertical position
    ldy(Imm(0xc0));
}

int SetYO() {
    // save as top vertical position
    sta(Abs(YPlatformTopYPos, x));
    tya();
    // load value from earlier, add number of pixels
    clc();
    // to vertical position
    adc(Abs(Enemy_Y_Position, x));
    // save result as central vertical position
    sta(Abs(YPlatformCenterYPos, x));
}

int CommonPlatCode() {
    // do a sub to init certain other values
    JSR(InitVStf);
}

int SPBBox() {
    // set default bounding box size control
    lda(Imm(0x5));
    ldy(Abs(AreaType));
    // check for castle-type level
    cpy(Imm(0x3));
    // use default value if found
    BEQ(CasPBB);
    // otherwise check for secondary hard mode flag
    ldy(Abs(SecondaryHardMode));
    // if set, use default value
    BNE(CasPBB);
    // use alternate value if not castle or secondary not set
    lda(Imm(0x6));
}

int CasPBB() {
    // set bounding box size control here and leave
    sta(Abs(Enemy_BoundBoxCtrl, x));
    return 0;
}

int LargeLiftUp() {
    // execute code for platforms going up
    JSR(PlatLiftUp);
    // overwrite bounding box for large platforms
    JMP(LargeLiftBBox);
}

int LargeLiftDown() {
    // execute code for platforms going down
    JSR(PlatLiftDown);
}

int LargeLiftBBox() {
    // jump to overwrite bounding box size control
    JMP(SPBBox);
}

int PlatLiftUp() {
    // set movement amount here
    lda(Imm(0x10));
    sta(Abs(Enemy_Y_MoveForce, x));
    // set moving speed for platforms going up
    lda(Imm(0xff));
    sta(Abs(Enemy_Y_Speed, x));
    // skip ahead to part we should be executing
    JMP(CommonSmallLift);
}

int PlatLiftDown() {
    // set movement amount here
    lda(Imm(0xf0));
    sta(Abs(Enemy_Y_MoveForce, x));
    // set moving speed for platforms going down
    lda(Imm(0x0));
    sta(Abs(Enemy_Y_Speed, x));
}

int CommonSmallLift() {
    ldy(Imm(0x1));
    // do a sub to add 12 pixels due to preset value
    JSR(PosPlatform);
    lda(Imm(0x4));
    // set bounding box control for small platforms
    sta(Abs(Enemy_BoundBoxCtrl, x));
    return 0;
}

int PosPlatform() {
    // get horizontal coordinate
    lda(Abs(Enemy_X_Position, x));
    clc();
    // add or subtract pixels depending on offset
    adc(Abs(offsetof(G, PlatPosDataLow), y));
    // store as new horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // add or subtract page location depending on offset
    adc(Abs(offsetof(G, PlatPosDataHigh), y));
    // store as new page location
    sta(Abs(Enemy_PageLoc, x));
    // and go back
    return 0;
}

int EndOfEnemyInitCode() {
    return 0;
}

int RunEnemyObjectsCore() {
    // get offset for enemy object buffer
    ldx(Abs(ObjectOffset));
    // load value 0 for jump engine by default
    lda(Imm(0x0));
    ldy(Abs(Enemy_ID, x));
    // if enemy object < $15, use default value
    cpy(Imm(0x15));
    BCC(JmpEO);
    // otherwise subtract $14 from the value and use
    tya();
    // as value for jump engine
    sbc(Imm(0x14));
}

int JmpEO() {
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

int NoRunCode() {
    return 0;
}

int RunRetainerObj() {
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JMP(EnemyGfxHandler);
}

int RunNormalEnemies() {
    // init sprite attributes
    lda(Imm(0x0));
    sta(Abs(Enemy_SprAttrib, x));
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    // if master timer control set, skip to last routine
    ldy(Abs(TimerControl));
    BNE(SkipMove);
    JSR(EnemyMovementSubs);
}

int SkipMove() {
    JMP(OffscreenBoundsCheck);
}

int EnemyMovementSubs() {
    lda(Abs(Enemy_ID, x));
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

int NoMoveCode() {
    return 0;
}

int RunBowserFlame() {
    JSR(ProcBowserFlame);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyBoundBox);
    JSR(PlayerEnemyCollision);
    JMP(OffscreenBoundsCheck);
}

int RunFirebarObj() {
    JSR(ProcFirebar);
    JMP(OffscreenBoundsCheck);
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
}

int RunLargePlatform() {
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(LargePlatformBoundBox);
    JSR(LargePlatformCollision);
    // if master timer control set,
    lda(Abs(TimerControl));
    // skip subroutine tree
    BNE(SkipPT);
    JSR(LargePlatformSubroutines);
}

int SkipPT() {
    JSR(RelativeEnemyPosition);
    JSR(DrawLargePlatform);
    JMP(OffscreenBoundsCheck);
}

int LargePlatformSubroutines() {
    // subtract $24 to get proper offset for jump table
    lda(Abs(Enemy_ID, x));
    sec();
    sbc(Imm(0x24));
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

int EraseEnemyObject() {
    // clear all enemy object variables
    lda(Imm(0x0));
    sta(Abs(Enemy_Flag, x));
    sta(Abs(Enemy_ID, x));
    sta(Abs(Enemy_State, x));
    sta(Abs(FloateyNum_Control, x));
    sta(Abs(EnemyIntervalTimer, x));
    sta(Abs(ShellChainCounter, x));
    sta(Abs(Enemy_SprAttrib, x));
    sta(Abs(EnemyFrameTimer, x));
    return 0;
}

int MovePodoboo() {
    // check enemy timer
    lda(Abs(EnemyIntervalTimer, x));
    // branch to move enemy if not expired
    BNE(PdbM);
    // otherwise set up podoboo again
    JSR(InitPodoboo);
    // get part of LSFR
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // set d7
    ora(Imm(0b10000000));
    // store as movement force
    sta(Abs(Enemy_Y_MoveForce, x));
    // mask out high nybble
    anda(Imm(0b1111));
    // set for at least six intervals
    ora(Imm(0x6));
    // store as new enemy timer
    sta(Abs(EnemyIntervalTimer, x));
    lda(Imm(0xf9));
    // set vertical speed to move podoboo upwards
    sta(Abs(Enemy_Y_Speed, x));
}

int PdbM() {
    // branch to impose gravity on podoboo
    JMP(MoveJ_EnemyVertically);
}

int ProcHammerBro() {
    // check hammer bro's enemy state for d5 set
    lda(Abs(Enemy_State, x));
    anda(Imm(0b100000));
    // if not set, go ahead with code
    BEQ(ChkJH);
    // otherwise jump to something else
    JMP(MoveDefeatedEnemy);
}

int ChkJH() {
    // check jump timer
    lda(Abs(HammerBroJumpTimer, x));
    // if expired, branch to jump
    BEQ(HammerBroJumpCode);
    // otherwise decrement jump timer
    dec(Abs(HammerBroJumpTimer, x));
    lda(Abs(Enemy_OffscreenBits));
    // check offscreen bits
    anda(Imm(0b1100));
    // if hammer bro a little offscreen, skip to movement code
    BNE(MoveHammerBroXDir);
    // check hammer throwing timer
    lda(Abs(HammerThrowingTimer, x));
    // if not expired, skip ahead, do not throw hammer
    BNE(DecHT);
    // otherwise get secondary hard mode flag
    ldy(Abs(SecondaryHardMode));
    // get timer data using flag as offset
    lda(Abs(offsetof(G, HammerThrowTmrData), y));
    // set as new timer
    sta(Abs(HammerThrowingTimer, x));
    // do a sub here to spawn hammer object
    JSR(SpawnHammerObj);
    // if carry clear, hammer not spawned, skip to decrement timer
    BCC(DecHT);
    lda(Abs(Enemy_State, x));
    // set d3 in enemy state for hammer throw
    ora(Imm(0b1000));
    sta(Abs(Enemy_State, x));
    // jump to move hammer bro
    JMP(MoveHammerBroXDir);
}

int DecHT() {
    // decrement timer
    dec(Abs(HammerThrowingTimer, x));
    // jump to move hammer bro
    JMP(MoveHammerBroXDir);
}

int HammerBroJumpCode() {
    // get hammer bro's enemy state
    lda(Abs(Enemy_State, x));
    // mask out all but 3 LSB
    anda(Imm(0b111));
    // check for d0 set (for jumping)
    cmp(Imm(0x1));
    // if set, branch ahead to moving code
    BEQ(MoveHammerBroXDir);
    // load default value here
    lda(Imm(0x0));
    // save into temp variable for now
    sta(Abs(0x0));
    // set default vertical speed
    ldy(Imm(0xfa));
    // check hammer bro's vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // if on the bottom half of the screen, use current speed
    BMI(SetHJ);
    // otherwise set alternate vertical speed
    ldy(Imm(0xfd));
    // check to see if hammer bro is above the middle of screen
    cmp(Imm(0x70));
    // increment preset value to $01
    inc(Abs(0x0));
    // if above the middle of the screen, use current speed and $01
    BCC(SetHJ);
    // otherwise return value to $00
    dec(Abs(0x0));
    // get part of LSFR, mask out all but LSB
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    anda(Imm(0x1));
    // if d0 of LSFR set, branch and use current speed and $00
    BNE(SetHJ);
    // otherwise reset to default vertical speed
    ldy(Imm(0xfa));
}

int SetHJ() {
    // set vertical speed for jumping
    sty(Abs(Enemy_Y_Speed, x));
    // set d0 in enemy state for jumping
    lda(Abs(Enemy_State, x));
    ora(Imm(0x1));
    sta(Abs(Enemy_State, x));
    // load preset value here to use as bitmask
    lda(Abs(0x0));
    // and do bit-wise comparison with part of LSFR
    anda(Abs(((PseudoRandomBitReg) + (2)), x));
    // then use as offset
    tay();
    // check secondary hard mode flag
    lda(Abs(SecondaryHardMode));
    BNE(HJump);
    // if secondary hard mode flag clear, set offset to 0
    tay();
}

int HJump() {
    // get jump length timer data using offset from before
    lda(Abs(offsetof(G, HammerBroJumpLData), y));
    // save in enemy timer
    sta(Abs(EnemyFrameTimer, x));
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // get contents of part of LSFR, set d7 and d6, then
    ora(Imm(0b11000000));
    // store in jump timer
    sta(Abs(HammerBroJumpTimer, x));
}

int MoveHammerBroXDir() {
    // move hammer bro a little to the left
    ldy(Imm(0xfc));
    lda(Abs(FrameCounter));
    // change hammer bro's direction every 64 frames
    anda(Imm(0b1000000));
    BNE(Shimmy);
    // if d6 set in counter, move him a little to the right
    ldy(Imm(0x4));
}

int Shimmy() {
    // store horizontal speed
    sty(Abs(Enemy_X_Speed, x));
    // set to face right by default
    ldy(Imm(0x1));
    // get horizontal difference between player and hammer bro
    JSR(PlayerEnemyDiff);
    // if enemy to the left of player, skip this part
    BMI(SetShim);
    // set to face left
    iny();
    // check walking timer
    lda(Abs(EnemyIntervalTimer, x));
    // if not yet expired, skip to set moving direction
    BNE(SetShim);
    lda(Imm(0xf8));
    // otherwise, make the hammer bro walk left towards player
    sta(Abs(Enemy_X_Speed, x));
}

int SetShim() {
    // set moving direction
    sty(Abs(Enemy_MovingDir, x));
}

int MoveNormalEnemy() {
    // init Y to leave horizontal movement as-is
    ldy(Imm(0x0));
    lda(Abs(Enemy_State, x));
    // check enemy state for d6 set, if set skip
    anda(Imm(0b1000000));
    // to move enemy vertically, then horizontally if necessary
    BNE(FallE);
    lda(Abs(Enemy_State, x));
    // check enemy state for d7 set
    asl();
    // if set, branch to move enemy horizontally
    BCS(SteadM);
    lda(Abs(Enemy_State, x));
    // check enemy state for d5 set
    anda(Imm(0b100000));
    // if set, branch to move defeated enemy object
    BNE(MoveDefeatedEnemy);
    lda(Abs(Enemy_State, x));
    // check d2-d0 of enemy state for any set bits
    anda(Imm(0b111));
    // if enemy in normal state, branch to move enemy horizontally
    BEQ(SteadM);
    cmp(Imm(0x5));
    // if enemy in state used by spiny's egg, go ahead here
    BEQ(FallE);
    cmp(Imm(0x3));
    // if enemy in states $03 or $04, skip ahead to yet another part
    BCS(ReviveStunned);
}

int FallE() {
    // do a sub here to move enemy downwards
    JSR(MoveD_EnemyVertically);
    ldy(Imm(0x0));
    // check for enemy state $02
    lda(Abs(Enemy_State, x));
    cmp(Imm(0x2));
    // if found, branch to move enemy horizontally
    BEQ(MEHor);
    // check for d6 set
    anda(Imm(0b1000000));
    // if not set, branch to something else
    BEQ(SteadM);
    lda(Abs(Enemy_ID, x));
    // check for power-up object
    cmp(Imm(PowerUpObject));
    BEQ(SteadM);
    // if any other object where d6 set, jump to set Y
    BNE(SlowM);
}

int MEHor() {
    // jump here to move enemy horizontally for <> $2e and d6 set
    JMP(MoveEnemyHorizontally);
}

int SlowM() {
    // if branched here, increment Y to slow horizontal movement
    ldy(Imm(0x1));
}

int SteadM() {
    // get current horizontal speed
    lda(Abs(Enemy_X_Speed, x));
    // save to stack
    pha();
    // if not moving or moving right, skip, leave Y alone
    BPL(AddHS);
    iny();
    // otherwise increment Y to next data
    iny();
}

int AddHS() {
    clc();
    // add value here to slow enemy down if necessary
    adc(Abs(offsetof(G, XSpeedAdderData), y));
    // save as horizontal speed temporarily
    sta(Abs(Enemy_X_Speed, x));
    // then do a sub to move horizontally
    JSR(MoveEnemyHorizontally);
    pla();
    // get old horizontal speed from stack and return to
    sta(Abs(Enemy_X_Speed, x));
    // original memory location, then leave
    return 0;
}

int ReviveStunned() {
    // if enemy timer not expired yet,
    lda(Abs(EnemyIntervalTimer, x));
    // skip ahead to something else
    BNE(ChkKillGoomba);
    // otherwise initialize enemy state to normal
    sta(Abs(Enemy_State, x));
    lda(Abs(FrameCounter));
    // get d0 of frame counter
    anda(Imm(0x1));
    // use as Y and increment for movement direction
    tay();
    iny();
    // store as pseudorandom movement direction
    sty(Abs(Enemy_MovingDir, x));
    // decrement for use as pointer
    dey();
    // check primary hard mode flag
    lda(Abs(PrimaryHardMode));
    // if not set, use pointer as-is
    BEQ(SetRSpd);
    iny();
    // otherwise increment 2 bytes to next data
    iny();
}

int SetRSpd() {
    // load and store new horizontal speed
    lda(Abs(offsetof(G, RevivedXSpeed), y));
    // and leave
    sta(Abs(Enemy_X_Speed, x));
    return 0;
}

int MoveDefeatedEnemy() {
    // execute sub to move defeated enemy downwards
    JSR(MoveD_EnemyVertically);
    // now move defeated enemy horizontally
    JMP(MoveEnemyHorizontally);
}

int ChkKillGoomba() {
    // check to see if enemy timer has reached
    cmp(Imm(0xe));
    // a certain point, and branch to leave if not
    BNE(NKGmba);
    lda(Abs(Enemy_ID, x));
    // check for goomba object
    cmp(Imm(Goomba));
    // branch if not found
    BNE(NKGmba);
    // otherwise, kill this goomba object
    JSR(EraseEnemyObject);
}

int NKGmba() {
    // leave!
    return 0;
}

int MoveJumpingEnemy() {
    // do a sub to impose gravity on green paratroopa
    JSR(MoveJ_EnemyVertically);
    // jump to move enemy horizontally
    JMP(MoveEnemyHorizontally);
}

int ProcMoveRedPTroopa() {
    lda(Abs(Enemy_Y_Speed, x));
    // check for any vertical force or speed
    ora(Abs(Enemy_Y_MoveForce, x));
    // branch if any found
    BNE(MoveRedPTUpOrDown);
    // initialize something here
    sta(Abs(Enemy_YMF_Dummy, x));
    // check current vs. original vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    cmp(Abs(RedPTroopaOrigXPos, x));
    // if current => original, skip ahead to more code
    BCS(MoveRedPTUpOrDown);
    // get frame counter
    lda(Abs(FrameCounter));
    // mask out all but 3 LSB
    anda(Imm(0b111));
    // if any bits set, branch to leave
    BNE(NoIncPT);
    // otherwise increment red paratroopa's vertical position
    inc(Abs(Enemy_Y_Position, x));
}

int NoIncPT() {
    // leave
    return 0;
}

int MoveRedPTUpOrDown() {
    // check current vs. central vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    cmp(Abs(RedPTroopaCenterYPos, x));
    // if current < central, jump to move downwards
    BCC(MovPTDwn);
    // otherwise jump to move upwards
    JMP(MoveRedPTroopaUp);
}

int MovPTDwn() {
    // move downwards
    JMP(MoveRedPTroopaDown);
}

int MoveFlyGreenPTroopa() {
    // do sub to increment primary and secondary counters
    JSR(XMoveCntr_GreenPTroopa);
    // do sub to move green paratroopa accordingly, and horizontally
    JSR(MoveWithXMCntrs);
    // set Y to move green paratroopa down
    ldy(Imm(0x1));
    lda(Abs(FrameCounter));
    // check frame counter 2 LSB for any bits set
    anda(Imm(0b11));
    // branch to leave if set to move up/down every fourth frame
    BNE(NoMGPT);
    lda(Abs(FrameCounter));
    // check frame counter for d6 set
    anda(Imm(0b1000000));
    // branch to move green paratroopa down if set
    BNE(YSway);
    // otherwise set Y to move green paratroopa up
    ldy(Imm(0xff));
}

int YSway() {
    // store adder here
    sty(Abs(0x0));
    lda(Abs(Enemy_Y_Position, x));
    // add or subtract from vertical position
    clc();
    // to give green paratroopa a wavy flight
    adc(Abs(0x0));
    sta(Abs(Enemy_Y_Position, x));
}

int NoMGPT() {
    // leave!
    return 0;
}

int XMoveCntr_GreenPTroopa() {
    // load preset maximum value for secondary counter
    lda(Imm(0x13));
}

int XMoveCntr_Platform() {
    // store value here
    sta(Abs(0x1));
    lda(Abs(FrameCounter));
    // branch to leave if not on
    anda(Imm(0b11));
    // every fourth frame
    BNE(NoIncXM);
    // get secondary counter
    ldy(Abs(XMoveSecondaryCounter, x));
    // get primary counter
    lda(Abs(XMovePrimaryCounter, x));
    lsr();
    // if d0 of primary counter set, branch elsewhere
    BCS(DecSeXM);
    // compare secondary counter to preset maximum value
    cpy(Abs(0x1));
    // if equal, branch ahead of this part
    BEQ(IncPXM);
    // increment secondary counter and leave
    inc(Abs(XMoveSecondaryCounter, x));
}

int NoIncXM() {
    return 0;
}

int IncPXM() {
    // increment primary counter and leave
    inc(Abs(XMovePrimaryCounter, x));
    return 0;
}

int DecSeXM() {
    // put secondary counter in A
    tya();
    // if secondary counter at zero, branch back
    BEQ(IncPXM);
    // otherwise decrement secondary counter and leave
    dec(Abs(XMoveSecondaryCounter, x));
    return 0;
}

int MoveWithXMCntrs() {
    // save secondary counter to stack
    lda(Abs(XMoveSecondaryCounter, x));
    pha();
    // set value here by default
    ldy(Imm(0x1));
    lda(Abs(XMovePrimaryCounter, x));
    // if d1 of primary counter is
    anda(Imm(0b10));
    // set, branch ahead of this part here
    BNE(XMRight);
    lda(Abs(XMoveSecondaryCounter, x));
    // otherwise change secondary
    eor(Imm(0xff));
    // counter to two's compliment
    clc();
    adc(Imm(0x1));
    sta(Abs(XMoveSecondaryCounter, x));
    // load alternate value here
    ldy(Imm(0x2));
}

int XMRight() {
    // store as moving direction
    sty(Abs(Enemy_MovingDir, x));
    JSR(MoveEnemyHorizontally);
    // save value obtained from sub here
    sta(Abs(0x0));
    // get secondary counter from stack
    pla();
    // and return to original place
    sta(Abs(XMoveSecondaryCounter, x));
    return 0;
}

int MoveBloober() {
    lda(Abs(Enemy_State, x));
    // check enemy state for d5 set
    anda(Imm(0b100000));
    // branch if set to move defeated bloober
    BNE(MoveDefeatedBloober);
    // use secondary hard mode flag as offset
    ldy(Abs(SecondaryHardMode));
    // get LSFR
    lda(Abs(((PseudoRandomBitReg) + (1)), x));
    // mask out bits in LSFR using bitmask loaded with offset
    anda(Abs(offsetof(G, BlooberBitmasks), y));
    // if any bits set, skip ahead to make swim
    BNE(BlooberSwim);
    txa();
    // check to see if on second or fourth slot (1 or 3)
    lsr();
    // if not, branch to figure out moving direction
    BCC(FBLeft);
    // otherwise, load player's moving direction and
    ldy(Abs(Player_MovingDir));
    // do an unconditional branch to set
    BCS(SBMDir);
}

int FBLeft() {
    // set left moving direction by default
    ldy(Imm(0x2));
    // get horizontal difference between player and bloober
    JSR(PlayerEnemyDiff);
    // if enemy to the right of player, keep left
    BPL(SBMDir);
    // otherwise decrement to set right moving direction
    dey();
}

int SBMDir() {
    // set moving direction of bloober, then continue on here
    sty(Abs(Enemy_MovingDir, x));
}

int BlooberSwim() {
    // execute sub to make bloober swim characteristically
    JSR(ProcSwimmingB);
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    sec();
    // subtract movement force
    sbc(Abs(Enemy_Y_MoveForce, x));
    // check to see if position is above edge of status bar
    cmp(Imm(0x20));
    // if so, don't do it
    BCC(SwimX);
    // otherwise, set new vertical position, make bloober swim
    sta(Abs(Enemy_Y_Position, x));
}

int SwimX() {
    // check moving direction
    ldy(Abs(Enemy_MovingDir, x));
    dey();
    // if moving to the left, branch to second part
    BNE(LeftSwim);
    lda(Abs(Enemy_X_Position, x));
    // add movement speed to horizontal coordinate
    clc();
    adc(Abs(BlooperMoveSpeed, x));
    // store result as new horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // add carry to page location
    adc(Imm(0x0));
    // store as new page location and leave
    sta(Abs(Enemy_PageLoc, x));
    return 0;
}

int LeftSwim() {
    lda(Abs(Enemy_X_Position, x));
    // subtract movement speed from horizontal coordinate
    sec();
    sbc(Abs(BlooperMoveSpeed, x));
    // store result as new horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // subtract borrow from page location
    sbc(Imm(0x0));
    // store as new page location and leave
    sta(Abs(Enemy_PageLoc, x));
    return 0;
}

int MoveDefeatedBloober() {
    // jump to move defeated bloober downwards
    JMP(MoveEnemySlowVert);
}

int ProcSwimmingB() {
    // get enemy's movement counter
    lda(Abs(BlooperMoveCounter, x));
    // check for d1 set
    anda(Imm(0b10));
    // branch if set
    BNE(ChkForFloatdown);
    lda(Abs(FrameCounter));
    // get 3 LSB of frame counter
    anda(Imm(0b111));
    // and save it to the stack
    pha();
    // get enemy's movement counter
    lda(Abs(BlooperMoveCounter, x));
    // check for d0 set
    lsr();
    // branch if set
    BCS(SlowSwim);
    // pull 3 LSB of frame counter from the stack
    pla();
    // branch to leave, execute code only every eighth frame
    BNE(BSwimE);
    lda(Abs(Enemy_Y_MoveForce, x));
    // add to movement force to speed up swim
    clc();
    adc(Imm(0x1));
    // set movement force
    sta(Abs(Enemy_Y_MoveForce, x));
    // set as movement speed
    sta(Abs(BlooperMoveSpeed, x));
    cmp(Imm(0x2));
    // if certain horizontal speed, branch to leave
    BNE(BSwimE);
    // otherwise increment movement counter
    inc(Abs(BlooperMoveCounter, x));
}

int BSwimE() {
    return 0;
}

int SlowSwim() {
    // pull 3 LSB of frame counter from the stack
    pla();
    // branch to leave, execute code only every eighth frame
    BNE(NoSSw);
    lda(Abs(Enemy_Y_MoveForce, x));
    // subtract from movement force to slow swim
    sec();
    sbc(Imm(0x1));
    // set movement force
    sta(Abs(Enemy_Y_MoveForce, x));
    // set as movement speed
    sta(Abs(BlooperMoveSpeed, x));
    // if any speed, branch to leave
    BNE(NoSSw);
    // otherwise increment movement counter
    inc(Abs(BlooperMoveCounter, x));
    lda(Imm(0x2));
    // set enemy's timer
    sta(Abs(EnemyIntervalTimer, x));
}

int NoSSw() {
    // leave
    return 0;
}

int ChkForFloatdown() {
    // get enemy timer
    lda(Abs(EnemyIntervalTimer, x));
    // branch if expired
    BEQ(ChkNearPlayer);
}

int Floatdown() {
    // get frame counter
    lda(Abs(FrameCounter));
    // check for d0 set
    lsr();
    // branch to leave on every other frame
    BCS(NoFD);
    // otherwise increment vertical coordinate
    inc(Abs(Enemy_Y_Position, x));
}

int NoFD() {
    // leave
    return 0;
}

int ChkNearPlayer() {
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // add sixteen pixels
    adc(Imm(0x10));
    // compare result with player's vertical coordinate
    cmp(Abs(Player_Y_Position));
    // if modified vertical less than player's, branch
    BCC(Floatdown);
    lda(Imm(0x0));
    // otherwise nullify movement counter
    sta(Abs(BlooperMoveCounter, x));
    return 0;
}

int MoveBulletBill() {
    // check bullet bill's enemy object state for d5 set
    lda(Abs(Enemy_State, x));
    anda(Imm(0b100000));
    // if not set, continue with movement code
    BEQ(NotDefB);
    // otherwise jump to move defeated bullet bill downwards
    JMP(MoveJ_EnemyVertically);
}

int NotDefB() {
    // set bullet bill's horizontal speed
    lda(Imm(0xe8));
    // and move it accordingly (note: this bullet bill
    sta(Abs(Enemy_X_Speed, x));
    // object occurs in frenzy object $17, not from cannons)
    JMP(MoveEnemyHorizontally);
}

int MoveSwimmingCheepCheep() {
    // check cheep-cheep's enemy object state
    lda(Abs(Enemy_State, x));
    // for d5 set
    anda(Imm(0b100000));
    // if not set, continue with movement code
    BEQ(CCSwim);
    // otherwise jump to move defeated cheep-cheep downwards
    JMP(MoveEnemySlowVert);
}

int CCSwim() {
    // save enemy state in $03
    sta(Abs(0x3));
    // get enemy identifier
    lda(Abs(Enemy_ID, x));
    sec();
    // subtract ten for cheep-cheep identifiers
    sbc(Imm(0xa));
    // use as offset
    tay();
    // load value here
    lda(Abs(offsetof(G, SwimCCXMoveData), y));
    sta(Abs(0x2));
    // load horizontal force
    lda(Abs(Enemy_X_MoveForce, x));
    sec();
    // subtract preset value from horizontal force
    sbc(Abs(0x2));
    // store as new horizontal force
    sta(Abs(Enemy_X_MoveForce, x));
    // get horizontal coordinate
    lda(Abs(Enemy_X_Position, x));
    // subtract borrow (thus moving it slowly)
    sbc(Imm(0x0));
    // and save as new horizontal coordinate
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // subtract borrow again, this time from the
    sbc(Imm(0x0));
    // page location, then save
    sta(Abs(Enemy_PageLoc, x));
    lda(Imm(0x20));
    // save new value here
    sta(Abs(0x2));
    // check enemy object offset
    cpx(Imm(0x2));
    // if in first or second slot, branch to leave
    BCC(ExSwCC);
    // check movement flag
    lda(Abs(CheepCheepMoveMFlag, x));
    // if movement speed set to $00,
    cmp(Imm(0x10));
    // branch to move upwards
    BCC(CCSwimUpwards);
    lda(Abs(Enemy_YMF_Dummy, x));
    clc();
    // add preset value to dummy variable to get carry
    adc(Abs(0x2));
    // and save dummy
    sta(Abs(Enemy_YMF_Dummy, x));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // add carry to it plus enemy state to slowly move it downwards
    adc(Abs(0x3));
    // save as new vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(Enemy_Y_HighPos, x));
    // add carry to page location and
    adc(Imm(0x0));
    // jump to end of movement code
    JMP(ChkSwimYPos);
}

int CCSwimUpwards() {
    lda(Abs(Enemy_YMF_Dummy, x));
    sec();
    // subtract preset value to dummy variable to get borrow
    sbc(Abs(0x2));
    // and save dummy
    sta(Abs(Enemy_YMF_Dummy, x));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // subtract borrow to it plus enemy state to slowly move it upwards
    sbc(Abs(0x3));
    // save as new vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
    lda(Abs(Enemy_Y_HighPos, x));
    // subtract borrow from page location
    sbc(Imm(0x0));
}

int ChkSwimYPos() {
    // save new page location here
    sta(Abs(Enemy_Y_HighPos, x));
    // load movement speed to upwards by default
    ldy(Imm(0x0));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    sec();
    // subtract original coordinate from current
    sbc(Abs(CheepCheepOrigYPos, x));
    // if result positive, skip to next part
    BPL(YPDiff);
    // otherwise load movement speed to downwards
    ldy(Imm(0x10));
    eor(Imm(0xff));
    // get two's compliment of result
    clc();
    // to obtain total difference of original vs. current
    adc(Imm(0x1));
}

int YPDiff() {
    // if difference between original vs. current vertical
    cmp(Imm(0xf));
    // coordinates < 15 pixels, leave movement speed alone
    BCC(ExSwCC);
    tya();
    // otherwise change movement speed
    sta(Abs(CheepCheepMoveMFlag, x));
}

int ExSwCC() {
    // leave
    return 0;
}

int ProcFirebar() {
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // check for d3 set
    lda(Abs(Enemy_OffscreenBits));
    // if so, branch to leave
    anda(Imm(0b1000));
    BNE(SkipFBar);
    // if master timer control set, branch
    lda(Abs(TimerControl));
    // ahead of this part
    BNE(SusFbar);
    // load spinning speed of firebar
    lda(Abs(FirebarSpinSpeed, x));
    // modify current spinstate
    JSR(FirebarSpin);
    // mask out all but 5 LSB
    anda(Imm(0b11111));
    // and store as new high byte of spinstate
    sta(Abs(FirebarSpinState_High, x));
}

int SusFbar() {
    // get high byte of spinstate
    lda(Abs(FirebarSpinState_High, x));
    // check enemy identifier
    ldy(Abs(Enemy_ID, x));
    cpy(Imm(0x1f));
    // if < $1f (long firebar), branch
    BCC(SetupGFB);
    // check high byte of spinstate
    cmp(Imm(0x8));
    // if eight, branch to change
    BEQ(SkpFSte);
    cmp(Imm(0x18));
    // if not at twenty-four branch to not change
    BNE(SetupGFB);
}

int SkpFSte() {
    clc();
    // add one to spinning thing to avoid horizontal state
    adc(Imm(0x1));
    sta(Abs(FirebarSpinState_High, x));
}

int SetupGFB() {
    // save high byte of spinning thing, modified or otherwise
    sta(Abs(0xef));
    // get relative coordinates to screen
    JSR(RelativeEnemyPosition);
    // do a sub here (residual, too early to be used now)
    JSR(GetFirebarPosition);
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // get relative vertical coordinate
    lda(Abs(Enemy_Rel_YPos));
    // store as Y in OAM data
    sta(Abs(Sprite_Y_Position, y));
    // also save here
    sta(Abs(0x7));
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    // store as X in OAM data
    sta(Abs(Sprite_X_Position, y));
    // also save here
    sta(Abs(0x6));
    lda(Imm(0x1));
    // set $01 value here (not necessary)
    sta(Abs(0x0));
    // draw fireball part and do collision detection
    JSR(FirebarCollision);
    // load value for short firebars by default
    ldy(Imm(0x5));
    lda(Abs(Enemy_ID, x));
    // are we doing a long firebar?
    cmp(Imm(0x1f));
    // no, branch then
    BCC(SetMFbar);
    // otherwise load value for long firebars
    ldy(Imm(0xb));
}

int SetMFbar() {
    // store maximum value for length of firebars
    sty(Abs(0xed));
    lda(Imm(0x0));
    // initialize counter here
    sta(Abs(0x0));
}

int DrawFbar() {
    // load high byte of spinstate
    lda(Abs(0xef));
    // get fireball position data depending on firebar part
    JSR(GetFirebarPosition);
    // position it properly, draw it and do collision detection
    JSR(DrawFirebar_Collision);
    // check which firebar part
    lda(Abs(0x0));
    cmp(Imm(0x4));
    BNE(NextFbar);
    // if we arrive at fifth firebar part,
    ldy(Abs(DuplicateObj_Offset));
    // get offset from long firebar and load OAM data offset
    lda(Abs(Enemy_SprDataOffset, y));
    // using long firebar offset, then store as new one here
    sta(Abs(0x6));
}

int NextFbar() {
    // move onto the next firebar part
    inc(Abs(0x0));
    lda(Abs(0x0));
    // if we end up at the maximum part, go on and leave
    cmp(Abs(0xed));
    // otherwise go back and do another
    BCC(DrawFbar);
}

int SkipFBar() {
    return 0;
}

int DrawFirebar_Collision() {
    // store mirror data elsewhere
    lda(Abs(0x3));
    sta(Abs(0x5));
    // load OAM data offset for firebar
    ldy(Abs(0x6));
    // load horizontal adder we got from position loader
    lda(Abs(0x1));
    // shift LSB of mirror data
    lsr(Abs(0x5));
    // if carry was set, skip this part
    BCS(AddHA);
    eor(Imm(0xff));
    // otherwise get two's compliment of horizontal adder
    adc(Imm(0x1));
}

int AddHA() {
    // add horizontal coordinate relative to screen to
    clc();
    // horizontal adder, modified or otherwise
    adc(Abs(Enemy_Rel_XPos));
    // store as X coordinate here
    sta(Abs(Sprite_X_Position, y));
    // store here for now, note offset is saved in Y still
    sta(Abs(0x6));
    // compare X coordinate of sprite to original X of firebar
    cmp(Abs(Enemy_Rel_XPos));
    // if sprite coordinate => original coordinate, branch
    BCS(SubtR1);
    lda(Abs(Enemy_Rel_XPos));
    // otherwise subtract sprite X from the
    sec();
    // original one and skip this part
    sbc(Abs(0x6));
    JMP(ChkFOfs);
}

int SubtR1() {
    // subtract original X from the
    sec();
    // current sprite X
    sbc(Abs(Enemy_Rel_XPos));
}

int ChkFOfs() {
    // if difference of coordinates within a certain range,
    cmp(Imm(0x59));
    // continue by handling vertical adder
    BCC(VAHandl);
    // otherwise, load offscreen Y coordinate
    lda(Imm(0xf8));
    // and unconditionally branch to move sprite offscreen
    BNE(SetVFbr);
}

int VAHandl() {
    // if vertical relative coordinate offscreen,
    lda(Abs(Enemy_Rel_YPos));
    // skip ahead of this part and write into sprite Y coordinate
    cmp(Imm(0xf8));
    BEQ(SetVFbr);
    // load vertical adder we got from position loader
    lda(Abs(0x2));
    // shift LSB of mirror data one more time
    lsr(Abs(0x5));
    // if carry was set, skip this part
    BCS(AddVA);
    eor(Imm(0xff));
    // otherwise get two's compliment of second part
    adc(Imm(0x1));
}

int AddVA() {
    // add vertical coordinate relative to screen to
    clc();
    // the second data, modified or otherwise
    adc(Abs(Enemy_Rel_YPos));
}

int SetVFbr() {
    // store as Y coordinate here
    sta(Abs(Sprite_Y_Position, y));
    // also store here for now
    sta(Abs(0x7));
}

int FirebarCollision() {
    // run sub here to draw current tile of firebar
    JSR(DrawFirebar);
    // return OAM data offset and save
    tya();
    // to the stack for now
    pha();
    // if star mario invincibility timer
    lda(Abs(StarInvincibleTimer));
    // or master timer controls set
    ora(Abs(TimerControl));
    // then skip all of this
    BNE(NoColFB);
    // otherwise initialize counter
    sta(Abs(0x5));
    ldy(Abs(Player_Y_HighPos));
    // if player's vertical high byte offscreen,
    dey();
    // skip all of this
    BNE(NoColFB);
    // get player's vertical position
    ldy(Abs(Player_Y_Position));
    // get player's size
    lda(Abs(PlayerSize));
    // if player small, branch to alter variables
    BNE(AdjSm);
    lda(Abs(CrouchingFlag));
    // if player big and not crouching, jump ahead
    BEQ(BigJp);
}

int AdjSm() {
    // if small or big but crouching, execute this part
    inc(Abs(0x5));
    // first increment our counter twice (setting $02 as flag)
    inc(Abs(0x5));
    tya();
    // then add 24 pixels to the player's
    clc();
    // vertical coordinate
    adc(Imm(0x18));
    tay();
}

int BigJp() {
    // get vertical coordinate, altered or otherwise, from Y
    tya();
}

int FBCLoop() {
    // subtract vertical position of firebar
    sec();
    // from the vertical coordinate of the player
    sbc(Abs(0x7));
    // if player lower on the screen than firebar,
    BPL(ChkVFBD);
    // skip two's compliment part
    eor(Imm(0xff));
    // otherwise get two's compliment
    clc();
    adc(Imm(0x1));
}

int ChkVFBD() {
    // if difference => 8 pixels, skip ahead of this part
    cmp(Imm(0x8));
    BCS(Chk2Ofs);
    // if firebar on far right on the screen, skip this,
    lda(Abs(0x6));
    // because, really, what's the point?
    cmp(Imm(0xf0));
    BCS(Chk2Ofs);
    // get OAM X coordinate for sprite #1
    lda(Abs(((Sprite_X_Position) + (4))));
    clc();
    // add four pixels
    adc(Imm(0x4));
    // store here
    sta(Abs(0x4));
    // subtract horizontal coordinate of firebar
    sec();
    // from the X coordinate of player's sprite 1
    sbc(Abs(0x6));
    // if modded X coordinate to the right of firebar
    BPL(ChkFBCl);
    // skip two's compliment part
    eor(Imm(0xff));
    // otherwise get two's compliment
    clc();
    adc(Imm(0x1));
}

int ChkFBCl() {
    // if difference < 8 pixels, collision, thus branch
    cmp(Imm(0x8));
    // to process
    BCC(ChgSDir);
}

int Chk2Ofs() {
    // if value of $02 was set earlier for whatever reason,
    lda(Abs(0x5));
    // branch to increment OAM offset and leave, no collision
    cmp(Imm(0x2));
    BEQ(NoColFB);
    // otherwise get temp here and use as offset
    ldy(Abs(0x5));
    lda(Abs(Player_Y_Position));
    clc();
    // add value loaded with offset to player's vertical coordinate
    adc(Abs(offsetof(G, FirebarYPos), y));
    // then increment temp and jump back
    inc(Abs(0x5));
    JMP(FBCLoop);
}

int ChgSDir() {
    // set movement direction by default
    ldx(Imm(0x1));
    // if OAM X coordinate of player's sprite 1
    lda(Abs(0x4));
    // is greater than horizontal coordinate of firebar
    cmp(Abs(0x6));
    // then do not alter movement direction
    BCS(SetSDir);
    // otherwise increment it
    inx();
}

int SetSDir() {
    // store movement direction here
    stx(Abs(Enemy_MovingDir));
    ldx(Imm(0x0));
    // save value written to $00 to stack
    lda(Abs(0x0));
    pha();
    // perform sub to hurt or kill player
    JSR(InjurePlayer);
    pla();
    // get value of $00 from stack
    sta(Abs(0x0));
}

int NoColFB() {
    // get OAM data offset
    pla();
    // add four to it and save
    clc();
    adc(Imm(0x4));
    sta(Abs(0x6));
    // get enemy object buffer offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int GetFirebarPosition() {
    // save high byte of spinstate to the stack
    pha();
    // mask out low nybble
    anda(Imm(0b1111));
    cmp(Imm(0x9));
    // if lower than $09, branch ahead
    BCC(GetHAdder);
    // otherwise get two's compliment to oscillate
    eor(Imm(0b1111));
    clc();
    adc(Imm(0x1));
}

int GetHAdder() {
    // store result, modified or not, here
    sta(Abs(0x1));
    // load number of firebar ball where we're at
    ldy(Abs(0x0));
    // load offset to firebar position data
    lda(Abs(offsetof(G, FirebarTblOffsets), y));
    clc();
    // add oscillated high byte of spinstate
    adc(Abs(0x1));
    // to offset here and use as new offset
    tay();
    // get data here and store as horizontal adder
    lda(Abs(offsetof(G, FirebarPosLookupTbl), y));
    sta(Abs(0x1));
    // pull whatever was in A from the stack
    pla();
    // save it again because we still need it
    pha();
    clc();
    // add eight this time, to get vertical adder
    adc(Imm(0x8));
    // mask out high nybble
    anda(Imm(0b1111));
    // if lower than $09, branch ahead
    cmp(Imm(0x9));
    BCC(GetVAdder);
    // otherwise get two's compliment
    eor(Imm(0b1111));
    clc();
    adc(Imm(0x1));
}

int GetVAdder() {
    // store result here
    sta(Abs(0x2));
    ldy(Abs(0x0));
    // load offset to firebar position data again
    lda(Abs(offsetof(G, FirebarTblOffsets), y));
    clc();
    // this time add value in $02 to offset here and use as offset
    adc(Abs(0x2));
    tay();
    // get data here and store as vertica adder
    lda(Abs(offsetof(G, FirebarPosLookupTbl), y));
    sta(Abs(0x2));
    // pull out whatever was in A one last time
    pla();
    // divide by eight or shift three to the right
    lsr();
    lsr();
    lsr();
    // use as offset
    tay();
    // load mirroring data here
    lda(Abs(offsetof(G, FirebarMirrorData), y));
    // store
    sta(Abs(0x3));
    return 0;
}

int MoveFlyingCheepCheep() {
    // check cheep-cheep's enemy state
    lda(Abs(Enemy_State, x));
    // for d5 set
    anda(Imm(0b100000));
    // branch to continue code if not set
    BEQ(FlyCC);
    lda(Imm(0x0));
    // otherwise clear sprite attributes
    sta(Abs(Enemy_SprAttrib, x));
    // and jump to move defeated cheep-cheep downwards
    JMP(MoveJ_EnemyVertically);
}

int FlyCC() {
    // move cheep-cheep horizontally based on speed and force
    JSR(MoveEnemyHorizontally);
    // set vertical movement amount
    ldy(Imm(0xd));
    // set maximum speed
    lda(Imm(0x5));
    // branch to impose gravity on flying cheep-cheep
    JSR(SetXMoveAmt);
    lda(Abs(Enemy_Y_MoveForce, x));
    // get vertical movement force and
    lsr();
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    // save as offset (note this tends to go into reach of code)
    tay();
    // get vertical position
    lda(Abs(Enemy_Y_Position, x));
    // subtract pseudorandom value based on offset from position
    sec();
    sbc(Abs(offsetof(G, PRandomSubtracter), y));
    // if result within top half of screen, skip this part
    BPL(AddCCF);
    eor(Imm(0xff));
    // otherwise get two's compliment
    clc();
    adc(Imm(0x1));
}

int AddCCF() {
    // if result or two's compliment greater than eight,
    cmp(Imm(0x8));
    // skip to the end without changing movement force
    BCS(BPGet);
    lda(Abs(Enemy_Y_MoveForce, x));
    clc();
    // otherwise add to it
    adc(Imm(0x10));
    sta(Abs(Enemy_Y_MoveForce, x));
    // move high nybble to low again
    lsr();
    lsr();
    lsr();
    lsr();
    tay();
}

int BPGet() {
    // load bg priority data and store (this is very likely
    lda(Abs(offsetof(G, FlyCCBPriority), y));
    // broken or residual code, value is overwritten before
    sta(Abs(Enemy_SprAttrib, x));
    // drawing it next frame), then leave
    return 0;
}

int MoveLakitu() {
    // check lakitu's enemy state
    lda(Abs(Enemy_State, x));
    // for d5 set
    anda(Imm(0b100000));
    // if not set, continue with code
    BEQ(ChkLS);
    // otherwise jump to move defeated lakitu downwards
    JMP(MoveD_EnemyVertically);
}

int ChkLS() {
    // if lakitu's enemy state not set at all,
    lda(Abs(Enemy_State, x));
    // go ahead and continue with code
    BEQ(Fr12S);
    lda(Imm(0x0));
    // otherwise initialize moving direction to move to left
    sta(Abs(LakituMoveDirection, x));
    // initialize frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    lda(Imm(0x10));
    // load horizontal speed and do unconditional branch
    BNE(SetLSpd);
}

int Fr12S() {
    lda(Imm(Spiny));
    // set spiny identifier in frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    ldy(Imm(0x2));
}

int LdLDa() {
    // load values
    lda(Abs(offsetof(G, LakituDiffAdj), y));
    // store in zero page
    sta(Abs(0x1, y));
    dey();
    // do this until all values are stired
    BPL(LdLDa);
    // execute sub to set speed and create spinys
    JSR(PlayerLakituDiff);
}

int SetLSpd() {
    // set movement speed returned from sub
    sta(Abs(LakituMoveSpeed, x));
    // set moving direction to right by default
    ldy(Imm(0x1));
    lda(Abs(LakituMoveDirection, x));
    // get LSB of moving direction
    anda(Imm(0x1));
    // if set, branch to the end to use moving direction
    BNE(SetLMov);
    lda(Abs(LakituMoveSpeed, x));
    // get two's compliment of moving speed
    eor(Imm(0xff));
    clc();
    adc(Imm(0x1));
    // store as new moving speed
    sta(Abs(LakituMoveSpeed, x));
    // increment moving direction to left
    iny();
}

int SetLMov() {
    // store moving direction
    sty(Abs(Enemy_MovingDir, x));
    // move lakitu horizontally
    JMP(MoveEnemyHorizontally);
}

int PlayerLakituDiff() {
    // set Y for default value
    ldy(Imm(0x0));
    // get horizontal difference between enemy and player
    JSR(PlayerEnemyDiff);
    // branch if enemy is to the right of the player
    BPL(ChkLakDif);
    // increment Y for left of player
    iny();
    lda(Abs(0x0));
    // get two's compliment of low byte of horizontal difference
    eor(Imm(0xff));
    clc();
    // store two's compliment as horizontal difference
    adc(Imm(0x1));
    sta(Abs(0x0));
}

int ChkLakDif() {
    // get low byte of horizontal difference
    lda(Abs(0x0));
    // if within a certain distance of player, branch
    cmp(Imm(0x3c));
    BCC(ChkPSpeed);
    // otherwise set maximum distance
    lda(Imm(0x3c));
    sta(Abs(0x0));
    // check if lakitu is in our current enemy slot
    lda(Abs(Enemy_ID, x));
    cmp(Imm(Lakitu));
    // if not, branch elsewhere
    BNE(ChkPSpeed);
    // compare contents of Y, now in A
    tya();
    // to what is being used as horizontal movement direction
    cmp(Abs(LakituMoveDirection, x));
    // if moving toward the player, branch, do not alter
    BEQ(ChkPSpeed);
    // if moving to the left beyond maximum distance,
    lda(Abs(LakituMoveDirection, x));
    // branch and alter without delay
    BEQ(SetLMovD);
    // decrement horizontal speed
    dec(Abs(LakituMoveSpeed, x));
    // if horizontal speed not yet at zero, branch to leave
    lda(Abs(LakituMoveSpeed, x));
    BNE(ExMoveLak);
}

int SetLMovD() {
    // set horizontal direction depending on horizontal
    tya();
    // difference between enemy and player if necessary
    sta(Abs(LakituMoveDirection, x));
}

int ChkPSpeed() {
    lda(Abs(0x0));
    // mask out all but four bits in the middle
    anda(Imm(0b111100));
    // divide masked difference by four
    lsr();
    lsr();
    // store as new value
    sta(Abs(0x0));
    // init offset
    ldy(Imm(0x0));
    lda(Abs(Player_X_Speed));
    // if player not moving horizontally, branch
    BEQ(SubDifAdj);
    lda(Abs(ScrollAmount));
    // if scroll speed not set, branch to same place
    BEQ(SubDifAdj);
    // otherwise increment offset
    iny();
    lda(Abs(Player_X_Speed));
    // if player not running, branch
    cmp(Imm(0x19));
    BCC(ChkSpinyO);
    lda(Abs(ScrollAmount));
    // if scroll speed below a certain amount, branch
    cmp(Imm(0x2));
    // to same place
    BCC(ChkSpinyO);
    // otherwise increment once more
    iny();
}

int ChkSpinyO() {
    // check for spiny object
    lda(Abs(Enemy_ID, x));
    cmp(Imm(Spiny));
    // branch if not found
    BNE(ChkEmySpd);
    // if player not moving, skip this part
    lda(Abs(Player_X_Speed));
    BNE(SubDifAdj);
}

int ChkEmySpd() {
    // check vertical speed
    lda(Abs(Enemy_Y_Speed, x));
    // branch if nonzero
    BNE(SubDifAdj);
    // otherwise reinit offset
    ldy(Imm(0x0));
}

int SubDifAdj() {
    // get one of three saved values from earlier
    lda(Abs(0x1, y));
    // get saved horizontal difference
    ldy(Abs(0x0));
}

int SPixelLak() {
    // subtract one for each pixel of horizontal difference
    sec();
    // from one of three saved values
    sbc(Imm(0x1));
    dey();
    // branch until all pixels are subtracted, to adjust difference
    BPL(SPixelLak);
}

int ExMoveLak() {
    // leave!!!
    return 0;
}

int BridgeCollapse() {
    // get enemy offset for bowser
    ldx(Abs(BowserFront_Offset));
    // check enemy object identifier for bowser
    lda(Abs(Enemy_ID, x));
    // if not found, branch ahead,
    cmp(Imm(Bowser));
    // metatile removal not necessary
    BNE(SetM2);
    // store as enemy offset here
    stx(Abs(ObjectOffset));
    // if bowser in normal state, skip all of this
    lda(Abs(Enemy_State, x));
    BEQ(RemoveBridge);
    // if bowser's state has d6 clear, skip to silence music
    anda(Imm(0b1000000));
    BEQ(SetM2);
    // check bowser's vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // if bowser not yet low enough, skip this part ahead
    cmp(Imm(0xe0));
    BCC(MoveD_Bowser);
}

int SetM2() {
    // silence music
    lda(Imm(Silence));
    sta(Abs(EventMusicQueue));
    // move onto next secondary mode in autoctrl mode
    inc(Abs(OperMode_Task));
    // jump to empty all enemy slots and then leave
    JMP(KillAllEnemies);
}

int MoveD_Bowser() {
    // do a sub to move bowser downwards
    JSR(MoveEnemySlowVert);
    // jump to draw bowser's front and rear, then leave
    JMP(BowserGfxHandler);
}

int RemoveBridge() {
    // decrement timer to control bowser's feet
    dec(Abs(BowserFeetCounter));
    // if not expired, skip all of this
    BNE(NoBFall);
    lda(Imm(0x4));
    // otherwise, set timer now
    sta(Abs(BowserFeetCounter));
    lda(Abs(BowserBodyControls));
    // invert bit to control bowser's feet
    eor(Imm(0x1));
    sta(Abs(BowserBodyControls));
    // put high byte of name table address here for now
    lda(Imm(0x22));
    sta(Abs(0x5));
    // get bridge collapse offset here
    ldy(Abs(BridgeCollapseOffset));
    // load low byte of name table address and store here
    lda(Abs(offsetof(G, BridgeCollapseData), y));
    sta(Abs(0x4));
    // increment vram buffer offset
    ldy(Abs(VRAM_Buffer1_Offset));
    iny();
    // set offset for tile data for sub to draw blank metatile
    ldx(Imm(0xc));
    // do sub here to remove bowser's bridge metatiles
    JSR(RemBridge);
    // get enemy offset
    ldx(Abs(ObjectOffset));
    // set new vram buffer offset
    JSR(MoveVOffset);
    // load the fireworks/gunfire sound into the square 2 sfx
    lda(Imm(Sfx_Blast));
    // queue while at the same time loading the brick
    sta(Abs(Square2SoundQueue));
    // shatter sound into the noise sfx queue thus
    lda(Imm(Sfx_BrickShatter));
    // producing the unique sound of the bridge collapsing
    sta(Abs(NoiseSoundQueue));
    // increment bridge collapse offset
    inc(Abs(BridgeCollapseOffset));
    lda(Abs(BridgeCollapseOffset));
    // if bridge collapse offset has not yet reached
    cmp(Imm(0xf));
    // the end, go ahead and skip this part
    BNE(NoBFall);
    // initialize whatever vertical speed bowser has
    JSR(InitVStf);
    lda(Imm(0b1000000));
    // set bowser's state to one of defeated states (d6 set)
    sta(Abs(Enemy_State, x));
    lda(Imm(Sfx_BowserFall));
    // play bowser defeat sound
    sta(Abs(Square2SoundQueue));
}

int NoBFall() {
    // jump to code that draws bowser
    JMP(BowserGfxHandler);
}

int RunBowser() {
    // if d5 in enemy state is not set
    lda(Abs(Enemy_State, x));
    // then branch elsewhere to run bowser
    anda(Imm(0b100000));
    BEQ(BowserControl);
    // otherwise check vertical position
    lda(Abs(Enemy_Y_Position, x));
    // if above a certain point, branch to move defeated bowser
    cmp(Imm(0xe0));
    // otherwise proceed to KillAllEnemies
    BCC(MoveD_Bowser);
}

int KillAllEnemies() {
    // start with last enemy slot
    ldx(Imm(0x4));
}

int KillLoop() {
    // branch to kill enemy objects
    JSR(EraseEnemyObject);
    // move onto next enemy slot
    dex();
    // do this until all slots are emptied
    BPL(KillLoop);
    // empty frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    // get enemy object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int BowserControl() {
    lda(Imm(0x0));
    // empty frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    // if master timer control not set,
    lda(Abs(TimerControl));
    // skip jump and execute code here
    BEQ(ChkMouth);
    // otherwise, jump over a bunch of code
    JMP(SkipToFB);
}

int ChkMouth() {
    // check bowser's mouth
    lda(Abs(BowserBodyControls));
    // if bit clear, go ahead with code here
    BPL(FeetTmr);
    // otherwise skip a whole section starting here
    JMP(HammerChk);
}

int FeetTmr() {
    // decrement timer to control bowser's feet
    dec(Abs(BowserFeetCounter));
    // if not expired, skip this part
    BNE(ResetMDr);
    // otherwise, reset timer
    lda(Imm(0x20));
    sta(Abs(BowserFeetCounter));
    // and invert bit used
    lda(Abs(BowserBodyControls));
    // to control bowser's feet
    eor(Imm(0b1));
    sta(Abs(BowserBodyControls));
}

int ResetMDr() {
    // check frame counter
    lda(Abs(FrameCounter));
    // if not on every sixteenth frame, skip
    anda(Imm(0b1111));
    // ahead to continue code
    BNE(B_FaceP);
    // otherwise reset moving/facing direction every
    lda(Imm(0x2));
    // sixteen frames
    sta(Abs(Enemy_MovingDir, x));
}

int B_FaceP() {
    // if timer set here expired,
    lda(Abs(EnemyFrameTimer, x));
    // branch to next section
    BEQ(GetPRCmp);
    // get horizontal difference between player and bowser,
    JSR(PlayerEnemyDiff);
    // and branch if bowser to the right of the player
    BPL(GetPRCmp);
    lda(Imm(0x1));
    // set bowser to move and face to the right
    sta(Abs(Enemy_MovingDir, x));
    lda(Imm(0x2));
    // set movement speed
    sta(Abs(BowserMovementSpeed));
    lda(Imm(0x20));
    // set timer here
    sta(Abs(EnemyFrameTimer, x));
    // set timer used for bowser's flame
    sta(Abs(BowserFireBreathTimer));
    lda(Abs(Enemy_X_Position, x));
    // if bowser to the right past a certain point,
    cmp(Imm(0xc8));
    // skip ahead to some other section
    BCS(HammerChk);
}

int GetPRCmp() {
    // get frame counter
    lda(Abs(FrameCounter));
    anda(Imm(0b11));
    // execute this code every fourth frame, otherwise branch
    BNE(HammerChk);
    lda(Abs(Enemy_X_Position, x));
    // if bowser not at original horizontal position,
    cmp(Abs(BowserOrigXPos));
    // branch to skip this part
    BNE(GetDToO);
    lda(Abs(PseudoRandomBitReg, x));
    // get pseudorandom offset
    anda(Imm(0b11));
    tay();
    // load value using pseudorandom offset
    lda(Abs(offsetof(G, PRandomRange), y));
    // and store here
    sta(Abs(MaxRangeFromOrigin));
}

int GetDToO() {
    lda(Abs(Enemy_X_Position, x));
    // add movement speed to bowser's horizontal
    clc();
    // coordinate and save as new horizontal position
    adc(Abs(BowserMovementSpeed));
    sta(Abs(Enemy_X_Position, x));
    ldy(Abs(Enemy_MovingDir, x));
    // if bowser moving and facing to the right, skip ahead
    cpy(Imm(0x1));
    BEQ(HammerChk);
    // set default movement speed here (move left)
    ldy(Imm(0xff));
    // get difference of current vs. original
    sec();
    // horizontal position
    sbc(Abs(BowserOrigXPos));
    // if current position to the right of original, skip ahead
    BPL(CompDToO);
    eor(Imm(0xff));
    // get two's compliment
    clc();
    adc(Imm(0x1));
    // set alternate movement speed here (move right)
    ldy(Imm(0x1));
}

int CompDToO() {
    // compare difference with pseudorandom value
    cmp(Abs(MaxRangeFromOrigin));
    // if difference < pseudorandom value, leave speed alone
    BCC(HammerChk);
    // otherwise change bowser's movement speed
    sty(Abs(BowserMovementSpeed));
}

int HammerChk() {
    // if timer set here not expired yet, skip ahead to
    lda(Abs(EnemyFrameTimer, x));
    // some other section of code
    BNE(MakeBJump);
    // otherwise start by moving bowser downwards
    JSR(MoveEnemySlowVert);
    // check world number
    lda(Abs(WorldNumber));
    cmp(Imm(World6));
    // if world 1-5, skip this part (not time to throw hammers yet)
    BCC(SetHmrTmr);
    lda(Abs(FrameCounter));
    // check to see if it's time to execute sub
    anda(Imm(0b11));
    // if not, skip sub, otherwise
    BNE(SetHmrTmr);
    // execute sub on every fourth frame to spawn misc object (hammer)
    JSR(SpawnHammerObj);
}

int SetHmrTmr() {
    // get current vertical position
    lda(Abs(Enemy_Y_Position, x));
    // if still above a certain point
    cmp(Imm(0x80));
    // then skip to world number check for flames
    BCC(ChkFireB);
    lda(Abs(PseudoRandomBitReg, x));
    // get pseudorandom offset
    anda(Imm(0b11));
    tay();
    // get value using pseudorandom offset
    lda(Abs(offsetof(G, PRandomRange), y));
    // set for timer here
    sta(Abs(EnemyFrameTimer, x));
}

int SkipToFB() {
    // jump to execute flames code
    JMP(ChkFireB);
}

int MakeBJump() {
    // if timer not yet about to expire,
    cmp(Imm(0x1));
    // skip ahead to next part
    BNE(ChkFireB);
    // otherwise decrement vertical coordinate
    dec(Abs(Enemy_Y_Position, x));
    // initialize movement amount
    JSR(InitVStf);
    lda(Imm(0xfe));
    // set vertical speed to move bowser upwards
    sta(Abs(Enemy_Y_Speed, x));
}

int ChkFireB() {
    // check world number here
    lda(Abs(WorldNumber));
    // world 8?
    cmp(Imm(World8));
    // if so, execute this part here
    BEQ(SpawnFBr);
    // world 6-7?
    cmp(Imm(World6));
    // if so, skip this part here
    BCS(BowserGfxHandler);
}

int SpawnFBr() {
    // check timer here
    lda(Abs(BowserFireBreathTimer));
    // if not expired yet, skip all of this
    BNE(BowserGfxHandler);
    lda(Imm(0x20));
    // set timer here
    sta(Abs(BowserFireBreathTimer));
    lda(Abs(BowserBodyControls));
    // invert bowser's mouth bit to open
    eor(Imm(0b10000000));
    // and close bowser's mouth
    sta(Abs(BowserBodyControls));
    // if bowser's mouth open, loop back
    BMI(ChkFireB);
    // get timing for bowser's flame
    JSR(SetFlameTimer);
    ldy(Abs(SecondaryHardMode));
    // if secondary hard mode flag not set, skip this
    BEQ(SetFBTmr);
    sec();
    // otherwise subtract from value in A
    sbc(Imm(0x10));
}

int SetFBTmr() {
    // set value as timer here
    sta(Abs(BowserFireBreathTimer));
    // put bowser's flame identifier
    lda(Imm(BowserFlame));
    // in enemy frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
}

int BowserGfxHandler() {
    // do a sub here to process bowser's front
    JSR(ProcessBowserHalf);
    // load default value here to position bowser's rear
    ldy(Imm(0x10));
    // check moving direction
    lda(Abs(Enemy_MovingDir, x));
    lsr();
    // if moving left, use default
    BCC(CopyFToR);
    // otherwise load alternate positioning value here
    ldy(Imm(0xf0));
}

int CopyFToR() {
    // move bowser's rear object position value to A
    tya();
    clc();
    // add to bowser's front object horizontal coordinate
    adc(Abs(Enemy_X_Position, x));
    // get bowser's rear object offset
    ldy(Abs(DuplicateObj_Offset));
    // store A as bowser's rear horizontal coordinate
    sta(Abs(Enemy_X_Position, y));
    lda(Abs(Enemy_Y_Position, x));
    // add eight pixels to bowser's front object
    clc();
    // vertical coordinate and store as vertical coordinate
    adc(Imm(0x8));
    // for bowser's rear
    sta(Abs(Enemy_Y_Position, y));
    lda(Abs(Enemy_State, x));
    // copy enemy state directly from front to rear
    sta(Abs(Enemy_State, y));
    lda(Abs(Enemy_MovingDir, x));
    // copy moving direction also
    sta(Abs(Enemy_MovingDir, y));
    // save enemy object offset of front to stack
    lda(Abs(ObjectOffset));
    pha();
    // put enemy object offset of rear as current
    ldx(Abs(DuplicateObj_Offset));
    stx(Abs(ObjectOffset));
    // set bowser's enemy identifier
    lda(Imm(Bowser));
    // store in bowser's rear object
    sta(Abs(Enemy_ID, x));
    // do a sub here to process bowser's rear
    JSR(ProcessBowserHalf);
    pla();
    // get original enemy object offset
    sta(Abs(ObjectOffset));
    tax();
    // nullify bowser's front/rear graphics flag
    lda(Imm(0x0));
    sta(Abs(BowserGfxFlag));
}

int ExBGfxH() {
    // leave!
    return 0;
}

int ProcessBowserHalf() {
    // increment bowser's graphics flag, then run subroutines
    inc(Abs(BowserGfxFlag));
    // to get offscreen bits, relative position and draw bowser (finally!)
    JSR(RunRetainerObj);
    lda(Abs(Enemy_State, x));
    // if either enemy object not in normal state, branch to leave
    BNE(ExBGfxH);
    lda(Imm(0xa));
    // set bounding box size control
    sta(Abs(Enemy_BoundBoxCtrl, x));
    // get bounding box coordinates
    JSR(GetEnemyBoundBox);
    // do player-to-enemy collision detection
    JMP(PlayerEnemyCollision);
}

int SetFlameTimer() {
    // load counter as offset
    ldy(Abs(BowserFlameTimerCtrl));
    // increment
    inc(Abs(BowserFlameTimerCtrl));
    // mask out all but 3 LSB
    lda(Abs(BowserFlameTimerCtrl));
    // to keep in range of 0-7
    anda(Imm(0b111));
    sta(Abs(BowserFlameTimerCtrl));
    // load value to be used then leave
    lda(Abs(offsetof(G, FlameTimerData), y));
}

int ExFl() {
    return 0;
}

int ProcBowserFlame() {
    // if master timer control flag set,
    lda(Abs(TimerControl));
    // skip all of this
    BNE(SetGfxF);
    // load default movement force
    lda(Imm(0x40));
    ldy(Abs(SecondaryHardMode));
    // if secondary hard mode flag not set, use default
    BEQ(SFlmX);
    // otherwise load alternate movement force to go faster
    lda(Imm(0x60));
}

int SFlmX() {
    // store value here
    sta(Abs(0x0));
    lda(Abs(Enemy_X_MoveForce, x));
    // subtract value from movement force
    sec();
    sbc(Abs(0x0));
    // save new value
    sta(Abs(Enemy_X_MoveForce, x));
    lda(Abs(Enemy_X_Position, x));
    // subtract one from horizontal position to move
    sbc(Imm(0x1));
    // to the left
    sta(Abs(Enemy_X_Position, x));
    lda(Abs(Enemy_PageLoc, x));
    // subtract borrow from page location
    sbc(Imm(0x0));
    sta(Abs(Enemy_PageLoc, x));
    // get some value here and use as offset
    ldy(Abs(BowserFlamePRandomOfs, x));
    // load vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // compare against coordinate data using $0417,x as offset
    cmp(Abs(offsetof(G, FlameYPosData), y));
    // if equal, branch and do not modify coordinate
    BEQ(SetGfxF);
    clc();
    // otherwise add value here to coordinate and store
    adc(Abs(Enemy_Y_MoveForce, x));
    // as new vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
}

int SetGfxF() {
    // get new relative coordinates
    JSR(RelativeEnemyPosition);
    // if bowser's flame not in normal state,
    lda(Abs(Enemy_State, x));
    // branch to leave
    BNE(ExFl);
    // otherwise, continue
    lda(Imm(0x51));
    // write first tile number
    sta(Abs(0x0));
    // load attributes without vertical flip by default
    ldy(Imm(0x2));
    lda(Abs(FrameCounter));
    // invert vertical flip bit every 2 frames
    anda(Imm(0b10));
    // if d1 not set, write default value
    BEQ(FlmeAt);
    // otherwise write value with vertical flip bit set
    ldy(Imm(0x82));
}

int FlmeAt() {
    // set bowser's flame sprite attributes here
    sty(Abs(0x1));
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    ldx(Imm(0x0));
}

int DrawFlameLoop() {
    // get Y relative coordinate of current enemy object
    lda(Abs(Enemy_Rel_YPos));
    // write into Y coordinate of OAM data
    sta(Abs(Sprite_Y_Position, y));
    lda(Abs(0x0));
    // write current tile number into OAM data
    sta(Abs(Sprite_Tilenumber, y));
    // increment tile number to draw more bowser's flame
    inc(Abs(0x0));
    lda(Abs(0x1));
    // write saved attributes into OAM data
    sta(Abs(Sprite_Attributes, y));
    lda(Abs(Enemy_Rel_XPos));
    // write X relative coordinate of current enemy object
    sta(Abs(Sprite_X_Position, y));
    clc();
    adc(Imm(0x8));
    // then add eight to it and store
    sta(Abs(Enemy_Rel_XPos));
    iny();
    iny();
    iny();
    // increment Y four times to move onto the next OAM
    iny();
    // move onto the next OAM, and branch if three
    inx();
    // have not yet been done
    cpx(Imm(0x3));
    BCC(DrawFlameLoop);
    // reload original enemy offset
    ldx(Abs(ObjectOffset));
    // get offscreen information
    JSR(GetEnemyOffscreenBits);
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // get enemy object offscreen bits
    lda(Abs(Enemy_OffscreenBits));
    // move d0 to carry and result to stack
    lsr();
    pha();
    // branch if carry not set
    BCC(M3FOfs);
    // otherwise move sprite offscreen, this part likely
    lda(Imm(0xf8));
    // residual since flame is only made of three sprites
    sta(Abs(((Sprite_Y_Position) + (12)), y));
}

int M3FOfs() {
    // get bits from stack
    pla();
    // move d1 to carry and move bits back to stack
    lsr();
    pha();
    // branch if carry not set again
    BCC(M2FOfs);
    // otherwise move third sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (8)), y));
}

int M2FOfs() {
    // get bits from stack again
    pla();
    // move d2 to carry and move bits back to stack again
    lsr();
    pha();
    // branch if carry not set yet again
    BCC(M1FOfs);
    // otherwise move second sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (4)), y));
}

int M1FOfs() {
    // get bits from stack one last time
    pla();
    // move d3 to carry
    lsr();
    // branch if carry not set one last time
    BCC(ExFlmeD);
    lda(Imm(0xf8));
    // otherwise move first sprite offscreen
    sta(Abs(Sprite_Y_Position, y));
}

int ExFlmeD() {
    // leave
    return 0;
}

int RunFireworks() {
    // decrement explosion timing counter here
    dec(Abs(ExplosionTimerCounter, x));
    // if not expired, skip this part
    BNE(SetupExpl);
    lda(Imm(0x8));
    // reset counter
    sta(Abs(ExplosionTimerCounter, x));
    // increment explosion graphics counter
    inc(Abs(ExplosionGfxCounter, x));
    lda(Abs(ExplosionGfxCounter, x));
    // check explosion graphics counter
    cmp(Imm(0x3));
    // if at a certain point, branch to kill this object
    BCS(FireworksSoundScore);
}

int SetupExpl() {
    // get relative coordinates of explosion
    JSR(RelativeEnemyPosition);
    // copy relative coordinates
    lda(Abs(Enemy_Rel_YPos));
    // from the enemy object to the fireball object
    sta(Abs(Fireball_Rel_YPos));
    // first vertical, then horizontal
    lda(Abs(Enemy_Rel_XPos));
    sta(Abs(Fireball_Rel_XPos));
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // get explosion graphics counter
    lda(Abs(ExplosionGfxCounter, x));
    // do a sub to draw the explosion then leave
    JSR(DrawExplosion_Fireworks);
    return 0;
}

int FireworksSoundScore() {
    // disable enemy buffer flag
    lda(Imm(0x0));
    sta(Abs(Enemy_Flag, x));
    // play fireworks/gunfire sound
    lda(Imm(Sfx_Blast));
    sta(Abs(Square2SoundQueue));
    // set part of score modifier for 500 points
    lda(Imm(0x5));
    sta(Abs(((DigitModifier) + (4))));
    // jump to award points accordingly then leave
    JMP(EndAreaPoints);
}

int RunStarFlagObj() {
    // initialize enemy frenzy buffer
    lda(Imm(0x0));
    sta(Abs(EnemyFrenzyBuffer));
    // check star flag object task number here
    lda(Abs(StarFlagTaskControl));
    // if greater than 5, branch to exit
    cmp(Imm(0x5));
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

int GameTimerFireworks() {
    // set default state for star flag object
    ldy(Imm(0x5));
    // get game timer's last digit
    lda(Abs(((GameTimerDisplay) + (2))));
    cmp(Imm(0x1));
    // if last digit of game timer set to 1, skip ahead
    BEQ(SetFWC);
    // otherwise load new value for state
    ldy(Imm(0x3));
    cmp(Imm(0x3));
    // if last digit of game timer set to 3, skip ahead
    BEQ(SetFWC);
    // otherwise load one more potential value for state
    ldy(Imm(0x0));
    cmp(Imm(0x6));
    // if last digit of game timer set to 6, skip ahead
    BEQ(SetFWC);
    // otherwise set value for no fireworks
    lda(Imm(0xff));
}

int SetFWC() {
    // set fireworks counter here
    sta(Abs(FireworksCounter));
    // set whatever state we have in star flag object
    sty(Abs(Enemy_State, x));
}

int IncrementSFTask1() {
    // increment star flag object task number
    inc(Abs(StarFlagTaskControl));
}

int StarFlagExit() {
    // leave
    return 0;
}

int AwardGameTimerPoints() {
    // check all game timer digits for any intervals left
    lda(Abs(GameTimerDisplay));
    ora(Abs(((GameTimerDisplay) + (1))));
    ora(Abs(((GameTimerDisplay) + (2))));
    // if no time left on game timer at all, branch to next task
    BEQ(IncrementSFTask1);
    lda(Abs(FrameCounter));
    // check frame counter for d2 set (skip ahead
    anda(Imm(0b100));
    // for four frames every four frames) branch if not set
    BEQ(NoTTick);
    lda(Imm(Sfx_TimerTick));
    // load timer tick sound
    sta(Abs(Square2SoundQueue));
}

int NoTTick() {
    // set offset here to subtract from game timer's last digit
    ldy(Imm(0x23));
    // set adder here to $ff, or -1, to subtract one
    lda(Imm(0xff));
    // from the last digit of the game timer
    sta(Abs(((DigitModifier) + (5))));
    // subtract digit
    JSR(DigitsMathRoutine);
    // set now to add 50 points
    lda(Imm(0x5));
    // per game timer interval subtracted
    sta(Abs(((DigitModifier) + (5))));
}

int EndAreaPoints() {
    // load offset for mario's score by default
    ldy(Imm(0xb));
    // check player on the screen
    lda(Abs(CurrentPlayer));
    // if mario, do not change
    BEQ(ELPGive);
    // otherwise load offset for luigi's score
    ldy(Imm(0x11));
}

int ELPGive() {
    // award 50 points per game timer interval
    JSR(DigitsMathRoutine);
    // get player on the screen (or 500 points per
    lda(Abs(CurrentPlayer));
    // fireworks explosion if branched here from there)
    asl();
    // shift to high nybble
    asl();
    asl();
    asl();
    // add four to set nybble for game timer
    ora(Imm(0b100));
    // jump to print the new score and game timer
    JMP(UpdateNumber);
}

int RaiseFlagSetoffFWorks() {
    // check star flag's vertical position
    lda(Abs(Enemy_Y_Position, x));
    // against preset value
    cmp(Imm(0x72));
    // if star flag higher vertically, branch to other code
    BCC(SetoffF);
    // otherwise, raise star flag by one pixel
    dec(Abs(Enemy_Y_Position, x));
    // and skip this part here
    JMP(DrawStarFlag);
}

int SetoffF() {
    // check fireworks counter
    lda(Abs(FireworksCounter));
    // if no fireworks left to go off, skip this part
    BEQ(DrawFlagSetTimer);
    // if no fireworks set to go off, skip this part
    BMI(DrawFlagSetTimer);
    lda(Imm(Fireworks));
    // otherwise set fireworks object in frenzy queue
    sta(Abs(EnemyFrenzyBuffer));
}

int DrawStarFlag() {
    // get relative coordinates of star flag
    JSR(RelativeEnemyPosition);
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // do four sprites
    ldx(Imm(0x3));
}

int DSFLoop() {
    // get relative vertical coordinate
    lda(Abs(Enemy_Rel_YPos));
    clc();
    // add Y coordinate adder data
    adc(Abs(offsetof(G, StarFlagYPosAdder), x));
    // store as Y coordinate
    sta(Abs(Sprite_Y_Position, y));
    // get tile number
    lda(Abs(offsetof(G, StarFlagTileData), x));
    // store as tile number
    sta(Abs(Sprite_Tilenumber, y));
    // set palette and background priority bits
    lda(Imm(0x22));
    // store as attributes
    sta(Abs(Sprite_Attributes, y));
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    clc();
    // add X coordinate adder data
    adc(Abs(offsetof(G, StarFlagXPosAdder), x));
    // store as X coordinate
    sta(Abs(Sprite_X_Position, y));
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
    ldx(Abs(ObjectOffset));
    return 0;
}

int DrawFlagSetTimer() {
    // do sub to draw star flag
    JSR(DrawStarFlag);
    lda(Imm(0x6));
    // set interval timer here
    sta(Abs(EnemyIntervalTimer, x));
}

int IncrementSFTask2() {
    // move onto next task
    inc(Abs(StarFlagTaskControl));
    return 0;
}

int DelayToAreaEnd() {
    // do sub to draw star flag
    JSR(DrawStarFlag);
    // if interval timer set in previous task
    lda(Abs(EnemyIntervalTimer, x));
    // not yet expired, branch to leave
    BNE(StarFlagExit2);
    // if event music buffer empty,
    lda(Abs(EventMusicBuffer));
    // branch to increment task
    BEQ(IncrementSFTask2);
}

int StarFlagExit2() {
    // otherwise leave
    return 0;
}

int MovePiranhaPlant() {
    // check enemy state
    lda(Abs(Enemy_State, x));
    // if set at all, branch to leave
    BNE(PutinPipe);
    // check enemy's timer here
    lda(Abs(EnemyFrameTimer, x));
    // branch to end if not yet expired
    BNE(PutinPipe);
    // check movement flag
    lda(Abs(PiranhaPlant_MoveFlag, x));
    // if moving, skip to part ahead
    BNE(SetupToMovePPlant);
    // if currently rising, branch
    lda(Abs(PiranhaPlant_Y_Speed, x));
    // to move enemy upwards out of pipe
    BMI(ReversePlantSpeed);
    // get horizontal difference between player and
    JSR(PlayerEnemyDiff);
    // piranha plant, and branch if enemy to right of player
    BPL(ChkPlayerNearPipe);
    // otherwise get saved horizontal difference
    lda(Abs(0x0));
    eor(Imm(0xff));
    // and change to two's compliment
    clc();
    adc(Imm(0x1));
    // save as new horizontal difference
    sta(Abs(0x0));
}

int ChkPlayerNearPipe() {
    // get saved horizontal difference
    lda(Abs(0x0));
    cmp(Imm(0x21));
    // if player within a certain distance, branch to leave
    BCC(PutinPipe);
}

int ReversePlantSpeed() {
    // get vertical speed
    lda(Abs(PiranhaPlant_Y_Speed, x));
    eor(Imm(0xff));
    // change to two's compliment
    clc();
    adc(Imm(0x1));
    // save as new vertical speed
    sta(Abs(PiranhaPlant_Y_Speed, x));
    // increment to set movement flag
    inc(Abs(PiranhaPlant_MoveFlag, x));
}

int SetupToMovePPlant() {
    // get original vertical coordinate (lowest point)
    lda(Abs(PiranhaPlantDownYPos, x));
    // get vertical speed
    ldy(Abs(PiranhaPlant_Y_Speed, x));
    // branch if moving downwards
    BPL(RiseFallPiranhaPlant);
    // otherwise get other vertical coordinate (highest point)
    lda(Abs(PiranhaPlantUpYPos, x));
}

int RiseFallPiranhaPlant() {
    // save vertical coordinate here
    sta(Abs(0x0));
    // get frame counter
    lda(Abs(FrameCounter));
    lsr();
    // branch to leave if d0 set (execute code every other frame)
    BCC(PutinPipe);
    // get master timer control
    lda(Abs(TimerControl));
    // branch to leave if set (likely not necessary)
    BNE(PutinPipe);
    // get current vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    clc();
    // add vertical speed to move up or down
    adc(Abs(PiranhaPlant_Y_Speed, x));
    // save as new vertical coordinate
    sta(Abs(Enemy_Y_Position, x));
    // compare against low or high coordinate
    cmp(Abs(0x0));
    // branch to leave if not yet reached
    BNE(PutinPipe);
    lda(Imm(0x0));
    // otherwise clear movement flag
    sta(Abs(PiranhaPlant_MoveFlag, x));
    lda(Imm(0x40));
    // set timer to delay piranha plant movement
    sta(Abs(EnemyFrameTimer, x));
}

int PutinPipe() {
    // set background priority bit in sprite
    lda(Imm(0b100000));
    // attributes to give illusion of being inside pipe
    sta(Abs(Enemy_SprAttrib, x));
    // then leave
    return 0;
}

int FirebarSpin() {
    // save spinning speed here
    sta(Abs(0x7));
    // check spinning direction
    lda(Abs(FirebarSpinDirection, x));
    // if moving counter-clockwise, branch to other part
    BNE(SpinCounterClockwise);
    // possibly residual ldy
    ldy(Imm(0x18));
    lda(Abs(FirebarSpinState_Low, x));
    // add spinning speed to what would normally be
    clc();
    // the horizontal speed
    adc(Abs(0x7));
    sta(Abs(FirebarSpinState_Low, x));
    // add carry to what would normally be the vertical speed
    lda(Abs(FirebarSpinState_High, x));
    adc(Imm(0x0));
    return 0;
}

int SpinCounterClockwise() {
    // possibly residual ldy
    ldy(Imm(0x8));
    lda(Abs(FirebarSpinState_Low, x));
    // subtract spinning speed to what would normally be
    sec();
    // the horizontal speed
    sbc(Abs(0x7));
    sta(Abs(FirebarSpinState_Low, x));
    // add carry to what would normally be the vertical speed
    lda(Abs(FirebarSpinState_High, x));
    sbc(Imm(0x0));
    return 0;
}

int BalancePlatform() {
    // check high byte of vertical position
    lda(Abs(Enemy_Y_HighPos, x));
    cmp(Imm(0x3));
    BNE(DoBPl);
    // if far below screen, kill the object
    JMP(EraseEnemyObject);
}

int DoBPl() {
    // get object's state (set to $ff or other platform offset)
    lda(Abs(Enemy_State, x));
    // if doing other balance platform, branch to leave
    BPL(CheckBalPlatform);
    return 0;
}

int CheckBalPlatform() {
    // save offset from state as Y
    tay();
    // get collision flag of platform
    lda(Abs(PlatformCollisionFlag, x));
    // store here
    sta(Abs(0x0));
    // get moving direction
    lda(Abs(Enemy_MovingDir, x));
    BEQ(ChkForFall);
    // if set, jump here
    JMP(PlatformFall);
}

int ChkForFall() {
    // check if platform is above a certain point
    lda(Imm(0x2d));
    cmp(Abs(Enemy_Y_Position, x));
    // if not, branch elsewhere
    BCC(ChkOtherForFall);
    // if collision flag is set to same value as
    cpy(Abs(0x0));
    // enemy state, branch to make platforms fall
    BEQ(MakePlatformFall);
    clc();
    // otherwise add 2 pixels to vertical position
    adc(Imm(0x2));
    // of current platform and branch elsewhere
    sta(Abs(Enemy_Y_Position, x));
    // to make platforms stop
    JMP(StopPlatforms);
}

int MakePlatformFall() {
    // make platforms fall
    JMP(InitPlatformFall);
}

int ChkOtherForFall() {
    // check if other platform is above a certain point
    cmp(Abs(Enemy_Y_Position, y));
    // if not, branch elsewhere
    BCC(ChkToMoveBalPlat);
    // if collision flag is set to same value as
    cpx(Abs(0x0));
    // enemy state, branch to make platforms fall
    BEQ(MakePlatformFall);
    clc();
    // otherwise add 2 pixels to vertical position
    adc(Imm(0x2));
    // of other platform and branch elsewhere
    sta(Abs(Enemy_Y_Position, y));
    // jump to stop movement and do not return
    JMP(StopPlatforms);
}

int ChkToMoveBalPlat() {
    // save vertical position to stack
    lda(Abs(Enemy_Y_Position, x));
    pha();
    // get collision flag
    lda(Abs(PlatformCollisionFlag, x));
    // branch if collision
    BPL(ColFlg);
    lda(Abs(Enemy_Y_MoveForce, x));
    // add $05 to contents of moveforce, whatever they be
    clc();
    adc(Imm(0x5));
    // store here
    sta(Abs(0x0));
    lda(Abs(Enemy_Y_Speed, x));
    // add carry to vertical speed
    adc(Imm(0x0));
    // branch if moving downwards
    BMI(PlatDn);
    // branch elsewhere if moving upwards
    BNE(PlatUp);
    lda(Abs(0x0));
    // check if there's still a little force left
    cmp(Imm(0xb));
    // if not enough, branch to stop movement
    BCC(PlatSt);
    // otherwise keep branch to move upwards
    BCS(PlatUp);
}

int ColFlg() {
    // if collision flag matches
    cmp(Abs(ObjectOffset));
    // current enemy object offset, branch
    BEQ(PlatDn);
}

int PlatUp() {
    // do a sub to move upwards
    JSR(MovePlatformUp);
    // jump ahead to remaining code
    JMP(DoOtherPlatform);
}

int PlatSt() {
    // do a sub to stop movement
    JSR(StopPlatforms);
    // jump ahead to remaining code
    JMP(DoOtherPlatform);
}

int PlatDn() {
    // do a sub to move downwards
    JSR(MovePlatformDown);
}

int DoOtherPlatform() {
    // get offset of other platform
    ldy(Abs(Enemy_State, x));
    // get old vertical coordinate from stack
    pla();
    sec();
    // get difference of old vs. new coordinate
    sbc(Abs(Enemy_Y_Position, x));
    clc();
    // add difference to vertical coordinate of other
    adc(Abs(Enemy_Y_Position, y));
    // platform to move it in the opposite direction
    sta(Abs(Enemy_Y_Position, y));
    // if no collision, skip this part here
    lda(Abs(PlatformCollisionFlag, x));
    BMI(DrawEraseRope);
    // put offset which collision occurred here
    tax();
    // and use it to position player accordingly
    JSR(PositionPlayerOnVPlat);
}

int DrawEraseRope() {
    // get enemy object offset
    ldy(Abs(ObjectOffset));
    // check to see if current platform is
    lda(Abs(Enemy_Y_Speed, y));
    // moving at all
    ora(Abs(Enemy_Y_MoveForce, y));
    // if not, skip all of this and branch to leave
    BEQ(ExitRp);
    // get vram buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    // if offset beyond a certain point, go ahead
    cpx(Imm(0x20));
    // and skip this, branch to leave
    BCS(ExitRp);
    lda(Abs(Enemy_Y_Speed, y));
    // save two copies of vertical speed to stack
    pha();
    pha();
    // do a sub to figure out where to put new bg tiles
    JSR(SetupPlatformRope);
    // write name table address to vram buffer
    lda(Abs(0x1));
    // first the high byte, then the low
    sta(Abs(VRAM_Buffer1, x));
    lda(Abs(0x0));
    sta(Abs(((VRAM_Buffer1) + (1)), x));
    // set length for 2 bytes
    lda(Imm(0x2));
    sta(Abs(((VRAM_Buffer1) + (2)), x));
    // if platform moving upwards, branch
    lda(Abs(Enemy_Y_Speed, y));
    // to do something else
    BMI(EraseR1);
    lda(Imm(0xa2));
    // otherwise put tile numbers for left
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    // and right sides of rope in vram buffer
    lda(Imm(0xa3));
    sta(Abs(((VRAM_Buffer1) + (4)), x));
    // jump to skip this part
    JMP(OtherRope);
}

int EraseR1() {
    // put blank tiles in vram buffer
    lda(Imm(0x24));
    // to erase rope
    sta(Abs(((VRAM_Buffer1) + (3)), x));
    sta(Abs(((VRAM_Buffer1) + (4)), x));
}

int OtherRope() {
    // get offset of other platform from state
    lda(Abs(Enemy_State, y));
    // use as Y here
    tay();
    // pull second copy of vertical speed from stack
    pla();
    // invert bits to reverse speed
    eor(Imm(0xff));
    // do sub again to figure out where to put bg tiles
    JSR(SetupPlatformRope);
    // write name table address to vram buffer
    lda(Abs(0x1));
    // this time we're doing putting tiles for
    sta(Abs(((VRAM_Buffer1) + (5)), x));
    // the other platform
    lda(Abs(0x0));
    sta(Abs(((VRAM_Buffer1) + (6)), x));
    lda(Imm(0x2));
    // set length again for 2 bytes
    sta(Abs(((VRAM_Buffer1) + (7)), x));
    // pull first copy of vertical speed from stack
    pla();
    // if moving upwards (note inversion earlier), skip this
    BPL(EraseR2);
    lda(Imm(0xa2));
    // otherwise put tile numbers for left
    sta(Abs(((VRAM_Buffer1) + (8)), x));
    // and right sides of rope in vram
    lda(Imm(0xa3));
    // transfer buffer
    sta(Abs(((VRAM_Buffer1) + (9)), x));
    // jump to skip this part
    JMP(EndRp);
}

int EraseR2() {
    // put blank tiles in vram buffer
    lda(Imm(0x24));
    // to erase rope
    sta(Abs(((VRAM_Buffer1) + (8)), x));
    sta(Abs(((VRAM_Buffer1) + (9)), x));
}

int EndRp() {
    // put null terminator at the end
    lda(Imm(0x0));
    sta(Abs(((VRAM_Buffer1) + (10)), x));
    // add ten bytes to the vram buffer offset
    lda(Abs(VRAM_Buffer1_Offset));
    // and store
    clc();
    adc(Imm(10));
    sta(Abs(VRAM_Buffer1_Offset));
}

int ExitRp() {
    // get enemy object buffer offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int SetupPlatformRope() {
    // save second/third copy to stack
    pha();
    // get horizontal coordinate
    lda(Abs(Enemy_X_Position, y));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // if secondary hard mode flag set,
    ldx(Abs(SecondaryHardMode));
    // use coordinate as-is
    BNE(GetLRp);
    clc();
    // otherwise add sixteen more pixels
    adc(Imm(0x10));
}

int GetLRp() {
    // save modified horizontal coordinate to stack
    pha();
    lda(Abs(Enemy_PageLoc, y));
    // add carry to page location
    adc(Imm(0x0));
    // and save here
    sta(Abs(0x2));
    // pull modified horizontal coordinate
    pla();
    // from the stack, mask out low nybble
    anda(Imm(0b11110000));
    // and shift three bits to the right
    lsr();
    lsr();
    lsr();
    // store result here as part of name table low byte
    sta(Abs(0x0));
    // get vertical coordinate
    ldx(Abs(Enemy_Y_Position, y));
    // get second/third copy of vertical speed from stack
    pla();
    // skip this part if moving downwards or not at all
    BPL(GetHRp);
    txa();
    clc();
    // add eight to vertical coordinate and
    adc(Imm(0x8));
    // save as X
    tax();
}

int GetHRp() {
    // move vertical coordinate to A
    txa();
    // get vram buffer offset
    ldx(Abs(VRAM_Buffer1_Offset));
    asl();
    // rotate d7 to d0 and d6 into carry
    rol();
    // save modified vertical coordinate to stack
    pha();
    // rotate carry to d0, thus d7 and d6 are at 2 LSB
    rol();
    // mask out all bits but d7 and d6, then set
    anda(Imm(0b11));
    // d5 to get appropriate high byte of name table
    ora(Imm(0b100000));
    // address, then store
    sta(Abs(0x1));
    // get saved page location from earlier
    lda(Abs(0x2));
    // mask out all but LSB
    anda(Imm(0x1));
    asl();
    // shift twice to the left and save with the
    asl();
    // rest of the bits of the high byte, to get
    ora(Abs(0x1));
    // the proper name table and the right place on it
    sta(Abs(0x1));
    // get modified vertical coordinate from stack
    pla();
    // mask out low nybble and LSB of high nybble
    anda(Imm(0b11100000));
    clc();
    // add to horizontal part saved here
    adc(Abs(0x0));
    // save as name table low byte
    sta(Abs(0x0));
    lda(Abs(Enemy_Y_Position, y));
    // if vertical position not below the
    cmp(Imm(0xe8));
    // bottom of the screen, we're done, branch to leave
    BCC(ExPRp);
    lda(Abs(0x0));
    // mask out d6 of low byte of name table address
    anda(Imm(0b10111111));
    sta(Abs(0x0));
}

int ExPRp() {
    // leave!
    return 0;
}

int InitPlatformFall() {
    // move offset of other platform from Y to X
    tya();
    tax();
    // get offscreen bits
    JSR(GetEnemyOffscreenBits);
    lda(Imm(0x6));
    // award 1000 points to player
    JSR(SetupFloateyNumber);
    lda(Abs(Player_Rel_XPos));
    // put floatey number coordinates where player is
    sta(Abs(FloateyNum_X_Pos, x));
    lda(Abs(Player_Y_Position));
    sta(Abs(FloateyNum_Y_Pos, x));
    // set moving direction as flag for
    lda(Imm(0x1));
    // falling platforms
    sta(Abs(Enemy_MovingDir, x));
}

int StopPlatforms() {
    // initialize vertical speed and low byte
    JSR(InitVStf);
    // for both platforms and leave
    sta(Abs(Enemy_Y_Speed, y));
    sta(Abs(Enemy_Y_MoveForce, y));
    return 0;
}

int PlatformFall() {
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
    ldx(Abs(ObjectOffset));
    // if player not standing on either platform,
    lda(Abs(PlatformCollisionFlag, x));
    // skip this part
    BMI(ExPF);
    // transfer collision flag offset as offset to X
    tax();
    // and position player appropriately
    JSR(PositionPlayerOnVPlat);
}

int ExPF() {
    // get enemy object buffer offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int YMovingPlatform() {
    // if platform moving up or down, skip ahead to
    lda(Abs(Enemy_Y_Speed, x));
    // check on other position
    ora(Abs(Enemy_Y_MoveForce, x));
    BNE(ChkYCenterPos);
    // initialize dummy variable
    sta(Abs(Enemy_YMF_Dummy, x));
    lda(Abs(Enemy_Y_Position, x));
    // if current vertical position => top position, branch
    cmp(Abs(YPlatformTopYPos, x));
    // ahead of all this
    BCS(ChkYCenterPos);
    lda(Abs(FrameCounter));
    // check for every eighth frame
    anda(Imm(0b111));
    BNE(SkipIY);
    // increase vertical position every eighth frame
    inc(Abs(Enemy_Y_Position, x));
}

int SkipIY() {
    // skip ahead to last part
    JMP(ChkYPCollision);
}

int ChkYCenterPos() {
    // if current vertical position < central position, branch
    lda(Abs(Enemy_Y_Position, x));
    // to slow ascent/move downwards
    cmp(Abs(YPlatformCenterYPos, x));
    BCC(YMDown);
    // otherwise start slowing descent/moving upwards
    JSR(MovePlatformUp);
    JMP(ChkYPCollision);
}

int YMDown() {
    // start slowing ascent/moving downwards
    JSR(MovePlatformDown);
}

int ChkYPCollision() {
    // if collision flag not set here, branch
    lda(Abs(PlatformCollisionFlag, x));
    // to leave
    BMI(ExYPl);
    // otherwise position player appropriately
    JSR(PositionPlayerOnVPlat);
}

int ExYPl() {
    // leave
    return 0;
}

int XMovingPlatform() {
    // load preset maximum value for secondary counter
    lda(Imm(0xe));
    // do a sub to increment counters for movement
    JSR(XMoveCntr_Platform);
    // do a sub to move platform accordingly, and return value
    JSR(MoveWithXMCntrs);
    // if no collision with player,
    lda(Abs(PlatformCollisionFlag, x));
    // branch ahead to leave
    BMI(ExXMP);
}

int PositionPlayerOnHPlat() {
    lda(Abs(Player_X_Position));
    // add saved value from second subroutine to
    clc();
    // current player's position to position
    adc(Abs(0x0));
    // player accordingly in horizontal position
    sta(Abs(Player_X_Position));
    // get player's page location
    lda(Abs(Player_PageLoc));
    // check to see if saved value here is positive or negative
    ldy(Abs(0x0));
    // if negative, branch to subtract
    BMI(PPHSubt);
    // otherwise add carry to page location
    adc(Imm(0x0));
    // jump to skip subtraction
    JMP(SetPVar);
}

int PPHSubt() {
    // subtract borrow from page location
    sbc(Imm(0x0));
}

int SetPVar() {
    // save result to player's page location
    sta(Abs(Player_PageLoc));
    // put saved value from second sub here to be used later
    sty(Abs(Platform_X_Scroll));
    // position player vertically and appropriately
    JSR(PositionPlayerOnVPlat);
}

int ExXMP() {
    // and we are done here
    return 0;
}

int DropPlatform() {
    // if no collision between platform and player
    lda(Abs(PlatformCollisionFlag, x));
    // occurred, just leave without moving anything
    BMI(ExDPl);
    // otherwise do a sub to move platform down very quickly
    JSR(MoveDropPlatform);
    // do a sub to position player appropriately
    JSR(PositionPlayerOnVPlat);
}

int ExDPl() {
    // leave
    return 0;
}

int RightPlatform() {
    // move platform with current horizontal speed, if any
    JSR(MoveEnemyHorizontally);
    // store saved value here (residual code)
    sta(Abs(0x0));
    // check collision flag, if no collision between player
    lda(Abs(PlatformCollisionFlag, x));
    // and platform, branch ahead, leave speed unaltered
    BMI(ExRPl);
    lda(Imm(0x10));
    // otherwise set new speed (gets moving if motionless)
    sta(Abs(Enemy_X_Speed, x));
    // use saved value from earlier sub to position player
    JSR(PositionPlayerOnHPlat);
}

int ExRPl() {
    // then leave
    return 0;
}

int MoveLargeLiftPlat() {
    // execute common to all large and small lift platforms
    JSR(MoveLiftPlatforms);
    // branch to position player correctly
    JMP(ChkYPCollision);
}

int MoveSmallPlatform() {
    // execute common to all large and small lift platforms
    JSR(MoveLiftPlatforms);
    // branch to position player correctly
    JMP(ChkSmallPlatCollision);
}

int MoveLiftPlatforms() {
    // if master timer control set, skip all of this
    lda(Abs(TimerControl));
    // and branch to leave
    BNE(ExLiftP);
    lda(Abs(Enemy_YMF_Dummy, x));
    // add contents of movement amount to whatever's here
    clc();
    adc(Abs(Enemy_Y_MoveForce, x));
    sta(Abs(Enemy_YMF_Dummy, x));
    // add whatever vertical speed is set to current
    lda(Abs(Enemy_Y_Position, x));
    // vertical position plus carry to move up or down
    adc(Abs(Enemy_Y_Speed, x));
    // and then leave
    sta(Abs(Enemy_Y_Position, x));
    return 0;
}

int ChkSmallPlatCollision() {
    // get bounding box counter saved in collision flag
    lda(Abs(PlatformCollisionFlag, x));
    // if none found, leave player position alone
    BEQ(ExLiftP);
    // use to position player correctly
    JSR(PositionPlayerOnS_Plat);
}

int ExLiftP() {
    // then leave
    return 0;
}

int OffscreenBoundsCheck() {
    // check for cheep-cheep object
    lda(Abs(Enemy_ID, x));
    // branch to leave if found
    cmp(Imm(FlyingCheepCheep));
    BEQ(ExScrnBd);
    // get horizontal coordinate for left side of screen
    lda(Abs(ScreenLeft_X_Pos));
    ldy(Abs(Enemy_ID, x));
    // check for hammer bro object
    cpy(Imm(HammerBro));
    BEQ(LimitB);
    // check for piranha plant object
    cpy(Imm(PiranhaPlant));
    // these two will be erased sooner than others if too far left
    BNE(ExtendLB);
}

int LimitB() {
    // add 56 pixels to coordinate if hammer bro or piranha plant
    adc(Imm(0x38));
}

int ExtendLB() {
    // subtract 72 pixels regardless of enemy object
    sbc(Imm(0x48));
    // store result here
    sta(Abs(0x1));
    lda(Abs(ScreenLeft_PageLoc));
    // subtract borrow from page location of left side
    sbc(Imm(0x0));
    // store result here
    sta(Abs(0x0));
    // add 72 pixels to the right side horizontal coordinate
    lda(Abs(ScreenRight_X_Pos));
    adc(Imm(0x48));
    // store result here
    sta(Abs(0x3));
    lda(Abs(ScreenRight_PageLoc));
    // then add the carry to the page location
    adc(Imm(0x0));
    // and store result here
    sta(Abs(0x2));
    // compare horizontal coordinate of the enemy object
    lda(Abs(Enemy_X_Position, x));
    // to modified horizontal left edge coordinate to get carry
    cmp(Abs(0x1));
    lda(Abs(Enemy_PageLoc, x));
    // then subtract it from the page coordinate of the enemy object
    sbc(Abs(0x0));
    // if enemy object is too far left, branch to erase it
    BMI(TooFar);
    // compare horizontal coordinate of the enemy object
    lda(Abs(Enemy_X_Position, x));
    // to modified horizontal right edge coordinate to get carry
    cmp(Abs(0x3));
    lda(Abs(Enemy_PageLoc, x));
    // then subtract it from the page coordinate of the enemy object
    sbc(Abs(0x2));
    // if enemy object is on the screen, leave, do not erase enemy
    BMI(ExScrnBd);
    // if at this point, enemy is offscreen to the right, so check
    lda(Abs(Enemy_State, x));
    // if in state used by spiny's egg, do not erase
    cmp(Imm(HammerBro));
    BEQ(ExScrnBd);
    // if piranha plant, do not erase
    cpy(Imm(PiranhaPlant));
    BEQ(ExScrnBd);
    // if flagpole flag, do not erase
    cpy(Imm(FlagpoleFlagObject));
    BEQ(ExScrnBd);
    // if star flag, do not erase
    cpy(Imm(StarFlagObject));
    BEQ(ExScrnBd);
    // if jumpspring, do not erase
    cpy(Imm(JumpspringObject));
    // erase all others too far to the right
    BEQ(ExScrnBd);
}

int TooFar() {
    // erase object if necessary
    JSR(EraseEnemyObject);
}

int ExScrnBd() {
    // leave
    return 0;
}

int FireballEnemyCollision() {
    // check to see if fireball state is set at all
    lda(Abs(Fireball_State, x));
    // branch to leave if not
    BEQ(ExitFBallEnemy);
    asl();
    // branch to leave also if d7 in state is set
    BCS(ExitFBallEnemy);
    lda(Abs(FrameCounter));
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
    adc(Imm(0x1c));
    // to use fireball's bounding box coordinates
    tay();
    ldx(Imm(0x4));
}

int FireballEnemyCDLoop() {
    // store enemy object offset here
    stx(Abs(0x1));
    tya();
    // push fireball offset to the stack
    pha();
    lda(Abs(Enemy_State, x));
    // check to see if d5 is set in enemy state
    anda(Imm(0b100000));
    // if so, skip to next enemy slot
    BNE(NoFToECol);
    // check to see if buffer flag is set
    lda(Abs(Enemy_Flag, x));
    // if not, skip to next enemy slot
    BEQ(NoFToECol);
    // check enemy identifier
    lda(Abs(Enemy_ID, x));
    cmp(Imm(0x24));
    // if < $24, branch to check further
    BCC(GoombaDie);
    cmp(Imm(0x2b));
    // if in range $24-$2a, skip to next enemy slot
    BCC(NoFToECol);
}

int GoombaDie() {
    // check for goomba identifier
    cmp(Imm(Goomba));
    // if not found, continue with code
    BNE(NotGoomba);
    // otherwise check for defeated state
    lda(Abs(Enemy_State, x));
    // if stomped or otherwise defeated,
    cmp(Imm(0x2));
    // skip to next enemy slot
    BCS(NoFToECol);
}

int NotGoomba() {
    // if any masked offscreen bits set,
    lda(Abs(EnemyOffscrBitsMasked, x));
    // skip to next enemy slot
    BNE(NoFToECol);
    txa();
    // otherwise multiply enemy offset by four
    asl();
    asl();
    clc();
    // add 4 bytes to it
    adc(Imm(0x4));
    // to use enemy's bounding box coordinates
    tax();
    // do fireball-to-enemy collision detection
    JSR(SprObjectCollisionCore);
    // return fireball's original offset
    ldx(Abs(ObjectOffset));
    // if carry clear, no collision, thus do next enemy slot
    BCC(NoFToECol);
    lda(Imm(0b10000000));
    // set d7 in enemy state
    sta(Abs(Fireball_State, x));
    // get enemy offset
    ldx(Abs(0x1));
    // jump to handle fireball to enemy collision
    JSR(HandleEnemyFBallCol);
}

int NoFToECol() {
    // pull fireball offset from stack
    pla();
    // put it in Y
    tay();
    // get enemy object offset
    ldx(Abs(0x1));
    // decrement it
    dex();
    // loop back until collision detection done on all enemies
    BPL(FireballEnemyCDLoop);
}

int ExitFBallEnemy() {
    // get original fireball offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int HandleEnemyFBallCol() {
    // get relative coordinate of enemy
    JSR(RelativeEnemyPosition);
    // get current enemy object offset
    ldx(Abs(0x1));
    // check buffer flag for d7 set
    lda(Abs(Enemy_Flag, x));
    // branch if not set to continue
    BPL(ChkBuzzyBeetle);
    // otherwise mask out high nybble and
    anda(Imm(0b1111));
    // use low nybble as enemy offset
    tax();
    lda(Abs(Enemy_ID, x));
    // check enemy identifier for bowser
    cmp(Imm(Bowser));
    // branch if found
    BEQ(HurtBowser);
    // otherwise retrieve current enemy offset
    ldx(Abs(0x1));
}

int ChkBuzzyBeetle() {
    lda(Abs(Enemy_ID, x));
    // check for buzzy beetle
    cmp(Imm(BuzzyBeetle));
    // branch if found to leave (buzzy beetles fireproof)
    BEQ(ExHCF);
    // check for bowser one more time (necessary if d7 of flag was clear)
    cmp(Imm(Bowser));
    // if not found, branch to check other enemies
    BNE(ChkOtherEnemies);
}

int HurtBowser() {
    // decrement bowser's hit points
    dec(Abs(BowserHitPoints));
    // if bowser still has hit points, branch to leave
    BNE(ExHCF);
    // otherwise do sub to init vertical speed and movement force
    JSR(InitVStf);
    // initialize horizontal speed
    sta(Abs(Enemy_X_Speed, x));
    // init enemy frenzy buffer
    sta(Abs(EnemyFrenzyBuffer));
    lda(Imm(0xfe));
    // set vertical speed to make defeated bowser jump a little
    sta(Abs(Enemy_Y_Speed, x));
    // use world number as offset
    ldy(Abs(WorldNumber));
    // get enemy identifier to replace bowser with
    lda(Abs(offsetof(G, BowserIdentities), y));
    // set as new enemy identifier
    sta(Abs(Enemy_ID, x));
    // set A to use starting value for state
    lda(Imm(0x20));
    // check to see if using offset of 3 or more
    cpy(Imm(0x3));
    // branch if so
    BCS(SetDBSte);
    // otherwise add 3 to enemy state
    ora(Imm(0x3));
}

int SetDBSte() {
    // set defeated enemy state
    sta(Abs(Enemy_State, x));
    lda(Imm(Sfx_BowserFall));
    // load bowser defeat sound
    sta(Abs(Square2SoundQueue));
    // get enemy offset
    ldx(Abs(0x1));
    // award 5000 points to player for defeating bowser
    lda(Imm(0x9));
    // unconditional branch to award points
    BNE(EnemySmackScore);
}

int ChkOtherEnemies() {
    cmp(Imm(BulletBill_FrenzyVar));
    // branch to leave if bullet bill (frenzy variant)
    BEQ(ExHCF);
    cmp(Imm(Podoboo));
    // branch to leave if podoboo
    BEQ(ExHCF);
    cmp(Imm(0x15));
    // branch to leave if identifier => $15
    BCS(ExHCF);
}

int ShellOrBlockDefeat() {
    // check for piranha plant
    lda(Abs(Enemy_ID, x));
    cmp(Imm(PiranhaPlant));
    // branch if not found
    BNE(StnE);
    lda(Abs(Enemy_Y_Position, x));
    // add 24 pixels to enemy object's vertical position
    adc(Imm(0x18));
    sta(Abs(Enemy_Y_Position, x));
}

int StnE() {
    // do yet another sub
    JSR(ChkToStunEnemies);
    lda(Abs(Enemy_State, x));
    // mask out 2 MSB of enemy object's state
    anda(Imm(0b11111));
    // set d5 to defeat enemy and save as new state
    ora(Imm(0b100000));
    sta(Abs(Enemy_State, x));
    // award 200 points by default
    lda(Imm(0x2));
    // check for hammer bro
    ldy(Abs(Enemy_ID, x));
    cpy(Imm(HammerBro));
    // branch if not found
    BNE(GoombaPoints);
    // award 1000 points for hammer bro
    lda(Imm(0x6));
}

int GoombaPoints() {
    // check for goomba
    cpy(Imm(Goomba));
    // branch if not found
    BNE(EnemySmackScore);
    // award 100 points for goomba
    lda(Imm(0x1));
}

int EnemySmackScore() {
    // update necessary score variables
    JSR(SetupFloateyNumber);
    // play smack enemy sound
    lda(Imm(Sfx_EnemySmack));
    sta(Abs(Square1SoundQueue));
}

int ExHCF() {
    // and now let's leave
    return 0;
}

int PlayerHammerCollision() {
    // get frame counter
    lda(Abs(FrameCounter));
    // shift d0 into carry
    lsr();
    // branch to leave if d0 not set to execute every other frame
    BCC(ExPHC);
    // if either master timer control
    lda(Abs(TimerControl));
    // or any offscreen bits for hammer are set,
    ora(Abs(Misc_OffscreenBits));
    // branch to leave
    BNE(ExPHC);
    txa();
    // multiply misc object offset by four
    asl();
    asl();
    clc();
    // add 36 or $24 bytes to get proper offset
    adc(Imm(0x24));
    // for misc object bounding box coordinates
    tay();
    // do player-to-hammer collision detection
    JSR(PlayerCollisionCore);
    // get misc object offset
    ldx(Abs(ObjectOffset));
    // if no collision, then branch
    BCC(ClHCol);
    // otherwise read collision flag
    lda(Abs(Misc_Collision_Flag, x));
    // if collision flag already set, branch to leave
    BNE(ExPHC);
    lda(Imm(0x1));
    // otherwise set collision flag now
    sta(Abs(Misc_Collision_Flag, x));
    lda(Abs(Misc_X_Speed, x));
    // get two's compliment of
    eor(Imm(0xff));
    // hammer's horizontal speed
    clc();
    adc(Imm(0x1));
    // set to send hammer flying the opposite direction
    sta(Abs(Misc_X_Speed, x));
    // if star mario invincibility timer set,
    lda(Abs(StarInvincibleTimer));
    // branch to leave
    BNE(ExPHC);
    // otherwise jump to hurt player, do not return
    JMP(InjurePlayer);
}

int ClHCol() {
    // clear collision flag
    lda(Imm(0x0));
    sta(Abs(Misc_Collision_Flag, x));
}

int ExPHC() {
    return 0;
}

int HandlePowerUpCollision() {
    // erase the power-up object
    JSR(EraseEnemyObject);
    lda(Imm(0x6));
    // award 1000 points to player by default
    JSR(SetupFloateyNumber);
    lda(Imm(Sfx_PowerUpGrab));
    // play the power-up sound
    sta(Abs(Square2SoundQueue));
    // check power-up type
    lda(Abs(PowerUpType));
    cmp(Imm(0x2));
    // if mushroom or fire flower, branch
    BCC(Shroom_Flower_PUp);
    cmp(Imm(0x3));
    // if 1-up mushroom, branch
    BEQ(SetFor1Up);
    // otherwise set star mario invincibility
    lda(Imm(0x23));
    // timer, and load the star mario music
    sta(Abs(StarInvincibleTimer));
    // into the area music queue, then leave
    lda(Imm(StarPowerMusic));
    sta(Abs(AreaMusicQueue));
    return 0;
}

int Shroom_Flower_PUp() {
    // if player status = small, branch
    lda(Abs(PlayerStatus));
    BEQ(UpToSuper);
    // if player status not super, leave
    cmp(Imm(0x1));
    BNE(NoPUp);
    // get enemy offset, not necessary
    ldx(Abs(ObjectOffset));
    // set player status to fiery
    lda(Imm(0x2));
    sta(Abs(PlayerStatus));
    // run sub to change colors of player
    JSR(GetPlayerColors);
    // get enemy offset again, and again not necessary
    ldx(Abs(ObjectOffset));
    // set value to be used by subroutine tree (fiery)
    lda(Imm(0xc));
    // jump to set values accordingly
    JMP(UpToFiery);
}

int SetFor1Up() {
    // change 1000 points into 1-up instead
    lda(Imm(0xb));
    // and then leave
    sta(Abs(FloateyNum_Control, x));
    return 0;
}

int UpToSuper() {
    // set player status to super
    lda(Imm(0x1));
    sta(Abs(PlayerStatus));
    // set value to be used by subroutine tree (super)
    lda(Imm(0x9));
}

int UpToFiery() {
    // set value to be used as new player state
    ldy(Imm(0x0));
    // set values to stop certain things in motion
    JSR(SetPRout);
}

int NoPUp() {
    return 0;
}

int PlayerEnemyCollision() {
    // check counter for d0 set
    lda(Abs(FrameCounter));
    lsr();
    // if set, branch to leave
    BCS(NoPUp);
    // if player object is completely offscreen or
    JSR(CheckPlayerVertical);
    // if down past 224th pixel row, branch to leave
    BCS(NoPECol);
    // if current enemy is offscreen by any amount,
    lda(Abs(EnemyOffscrBitsMasked, x));
    // go ahead and branch to leave
    BNE(NoPECol);
    lda(Abs(GameEngineSubroutine));
    // if not set to run player control routine
    cmp(Imm(0x8));
    // on next frame, branch to leave
    BNE(NoPECol);
    lda(Abs(Enemy_State, x));
    // if enemy state has d5 set, branch to leave
    anda(Imm(0b100000));
    BNE(NoPECol);
    // get bounding box offset for current enemy object
    JSR(GetEnemyBoundBoxOfs);
    // do collision detection on player vs. enemy
    JSR(PlayerCollisionCore);
    // get enemy object buffer offset
    ldx(Abs(ObjectOffset));
    // if collision, branch past this part here
    BCS(CheckForPUpCollision);
    lda(Abs(Enemy_CollisionBits, x));
    // otherwise, clear d0 of current enemy object's
    anda(Imm(0b11111110));
    // collision bit
    sta(Abs(Enemy_CollisionBits, x));
}

int NoPECol() {
    return 0;
}

int CheckForPUpCollision() {
    ldy(Abs(Enemy_ID, x));
    // check for power-up object
    cpy(Imm(PowerUpObject));
    // if not found, branch to next part
    BNE(EColl);
    // otherwise, unconditional jump backwards
    JMP(HandlePowerUpCollision);
}

int EColl() {
    // if star mario invincibility timer expired,
    lda(Abs(StarInvincibleTimer));
    // perform task here, otherwise kill enemy like
    BEQ(HandlePECollisions);
    // hit with a shell, or from beneath
    JMP(ShellOrBlockDefeat);
}

int HandlePECollisions() {
    // check enemy collision bits for d0 set
    lda(Abs(Enemy_CollisionBits, x));
    // or for being offscreen at all
    anda(Imm(0b1));
    ora(Abs(EnemyOffscrBitsMasked, x));
    // branch to leave if either is true
    BNE(ExPEC);
    lda(Imm(0x1));
    // otherwise set d0 now
    ora(Abs(Enemy_CollisionBits, x));
    sta(Abs(Enemy_CollisionBits, x));
    // branch if spiny
    cpy(Imm(Spiny));
    BEQ(ChkForPlayerInjury);
    // branch if piranha plant
    cpy(Imm(PiranhaPlant));
    BEQ(InjurePlayer);
    // branch if podoboo
    cpy(Imm(Podoboo));
    BEQ(InjurePlayer);
    // branch if bullet bill
    cpy(Imm(BulletBill_CannonVar));
    BEQ(ChkForPlayerInjury);
    // branch if object => $15
    cpy(Imm(0x15));
    BCS(InjurePlayer);
    // branch if water type level
    lda(Abs(AreaType));
    BEQ(InjurePlayer);
    // branch if d7 of enemy state was set
    lda(Abs(Enemy_State, x));
    asl();
    BCS(ChkForPlayerInjury);
    // mask out all but 3 LSB of enemy state
    lda(Abs(Enemy_State, x));
    anda(Imm(0b111));
    // branch if enemy is in normal or falling state
    cmp(Imm(0x2));
    BCC(ChkForPlayerInjury);
    // branch to leave if goomba in defeated state
    lda(Abs(Enemy_ID, x));
    cmp(Imm(Goomba));
    BEQ(ExPEC);
    // play smack enemy sound
    lda(Imm(Sfx_EnemySmack));
    sta(Abs(Square1SoundQueue));
    // set d7 in enemy state, thus become moving shell
    lda(Abs(Enemy_State, x));
    ora(Imm(0b10000000));
    sta(Abs(Enemy_State, x));
    // set moving direction and get offset
    JSR(EnemyFacePlayer);
    // load and set horizontal speed data with offset
    lda(Abs(offsetof(G, KickedShellXSpdData), y));
    sta(Abs(Enemy_X_Speed, x));
    // add three to whatever the stomp counter contains
    lda(Imm(0x3));
    // to give points for kicking the shell
    clc();
    adc(Abs(StompChainCounter));
    // check shell enemy's timer
    ldy(Abs(EnemyIntervalTimer, x));
    // if above a certain point, branch using the points
    cpy(Imm(0x3));
    // data obtained from the stomp counter + 3
    BCS(KSPts);
    // otherwise, set points based on proximity to timer expiration
    lda(Abs(offsetof(G, KickedShellPtsData), y));
}

int KSPts() {
    // set values for floatey number now
    JSR(SetupFloateyNumber);
}

int ExPEC() {
    // leave!!!
    return 0;
}

int ChkForPlayerInjury() {
    // check player's vertical speed
    lda(Abs(Player_Y_Speed));
    // perform procedure below if player moving upwards
    BMI(ChkInj);
    // or not at all, and branch elsewhere if moving downwards
    BNE(EnemyStomped);
}

int ChkInj() {
    // branch if enemy object < $07
    lda(Abs(Enemy_ID, x));
    cmp(Imm(Bloober));
    BCC(ChkETmrs);
    // add 12 pixels to player's vertical position
    lda(Abs(Player_Y_Position));
    clc();
    adc(Imm(0xc));
    // compare modified player's position to enemy's position
    cmp(Abs(Enemy_Y_Position, x));
    // branch if this player's position above (less than) enemy's
    BCC(EnemyStomped);
}

int ChkETmrs() {
    // check stomp timer
    lda(Abs(StompTimer));
    // branch if set
    BNE(EnemyStomped);
    // check to see if injured invincibility timer still
    lda(Abs(InjuryTimer));
    // counting down, and branch elsewhere to leave if so
    BNE(ExInjColRoutines);
    lda(Abs(Player_Rel_XPos));
    // if player's relative position to the left of enemy's
    cmp(Abs(Enemy_Rel_XPos));
    // relative position, branch here
    BCC(TInjE);
    // otherwise do a jump here
    JMP(ChkEnemyFaceRight);
}

int TInjE() {
    // if enemy moving towards the left,
    lda(Abs(Enemy_MovingDir, x));
    // branch, otherwise do a jump here
    cmp(Imm(0x1));
    // to turn the enemy around
    BNE(InjurePlayer);
    JMP(LInj);
}

int InjurePlayer() {
    // check again to see if injured invincibility timer is
    lda(Abs(InjuryTimer));
    // at zero, and branch to leave if so
    BNE(ExInjColRoutines);
}

int ForceInjury() {
    // check player's status
    ldx(Abs(PlayerStatus));
    // branch if small
    BEQ(KillPlayer);
    // otherwise set player's status to small
    sta(Abs(PlayerStatus));
    lda(Imm(0x8));
    // set injured invincibility timer
    sta(Abs(InjuryTimer));
    asl();
    // play pipedown/injury sound
    sta(Abs(Square1SoundQueue));
    // change player's palette if necessary
    JSR(GetPlayerColors);
    // set subroutine to run on next frame
    lda(Imm(0xa));
}

int SetKRout() {
    // set new player state
    ldy(Imm(0x1));
}

int SetPRout() {
    // load new value to run subroutine on next frame
    sta(Abs(GameEngineSubroutine));
    // store new player state
    sty(Abs(Player_State));
    ldy(Imm(0xff));
    // set master timer control flag to halt timers
    sty(Abs(TimerControl));
    iny();
    // initialize scroll speed
    sty(Abs(ScrollAmount));
}

int ExInjColRoutines() {
    // get enemy offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int KillPlayer() {
    // halt player's horizontal movement by initializing speed
    stx(Abs(Player_X_Speed));
    inx();
    // set event music queue to death music
    stx(Abs(EventMusicQueue));
    lda(Imm(0xfc));
    // set new vertical speed
    sta(Abs(Player_Y_Speed));
    // set subroutine to run on next frame
    lda(Imm(0xb));
    // branch to set player's state and other things
    BNE(SetKRout);
}

int EnemyStomped() {
    // check for spiny, branch to hurt player
    lda(Abs(Enemy_ID, x));
    // if found
    cmp(Imm(Spiny));
    BEQ(InjurePlayer);
    // otherwise play stomp/swim sound
    lda(Imm(Sfx_EnemyStomp));
    sta(Abs(Square1SoundQueue));
    lda(Abs(Enemy_ID, x));
    // initialize points data offset for stomped enemies
    ldy(Imm(0x0));
    // branch for cheep-cheep
    cmp(Imm(FlyingCheepCheep));
    BEQ(EnemyStompedPts);
    // branch for either bullet bill object
    cmp(Imm(BulletBill_FrenzyVar));
    BEQ(EnemyStompedPts);
    cmp(Imm(BulletBill_CannonVar));
    BEQ(EnemyStompedPts);
    // branch for podoboo (this branch is logically impossible
    cmp(Imm(Podoboo));
    // for cpu to take due to earlier checking of podoboo)
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch for hammer bro
    cmp(Imm(HammerBro));
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch for lakitu
    cmp(Imm(Lakitu));
    BEQ(EnemyStompedPts);
    // increment points data offset
    iny();
    // branch if NOT bloober
    cmp(Imm(Bloober));
    BNE(ChkForDemoteKoopa);
}

int EnemyStompedPts() {
    // load points data using offset in Y
    lda(Abs(offsetof(G, StompedEnemyPtsData), y));
    // run sub to set floatey number controls
    JSR(SetupFloateyNumber);
    lda(Abs(Enemy_MovingDir, x));
    // save enemy movement direction to stack
    pha();
    // run sub to kill enemy
    JSR(SetStun);
    pla();
    // return enemy movement direction from stack
    sta(Abs(Enemy_MovingDir, x));
    lda(Imm(0b100000));
    // set d5 in enemy state
    sta(Abs(Enemy_State, x));
    // nullify vertical speed, physics-related thing,
    JSR(InitVStf);
    // and horizontal speed
    sta(Abs(Enemy_X_Speed, x));
    // set player's vertical speed, to give bounce
    lda(Imm(0xfd));
    sta(Abs(Player_Y_Speed));
    return 0;
}

int ChkForDemoteKoopa() {
    // branch elsewhere if enemy object < $09
    cmp(Imm(0x9));
    BCC(HandleStompedShellE);
    // demote koopa paratroopas to ordinary troopas
    anda(Imm(0b1));
    sta(Abs(Enemy_ID, x));
    // return enemy to normal state
    ldy(Imm(0x0));
    sty(Abs(Enemy_State, x));
    // award 400 points to the player
    lda(Imm(0x3));
    JSR(SetupFloateyNumber);
    // nullify physics-related thing and vertical speed
    JSR(InitVStf);
    // turn enemy around if necessary
    JSR(EnemyFacePlayer);
    lda(Abs(offsetof(G, DemotedKoopaXSpdData), y));
    // set appropriate moving speed based on direction
    sta(Abs(Enemy_X_Speed, x));
    // then move onto something else
    JMP(SBnce);
}

int HandleStompedShellE() {
    // set defeated state for enemy
    lda(Imm(0x4));
    sta(Abs(Enemy_State, x));
    // increment the stomp counter
    inc(Abs(StompChainCounter));
    // add whatever is in the stomp counter
    lda(Abs(StompChainCounter));
    // to whatever is in the stomp timer
    clc();
    adc(Abs(StompTimer));
    // award points accordingly
    JSR(SetupFloateyNumber);
    // increment stomp timer of some sort
    inc(Abs(StompTimer));
    // check primary hard mode flag
    ldy(Abs(PrimaryHardMode));
    // load timer setting according to flag
    lda(Abs(offsetof(G, RevivalRateData), y));
    // set as enemy timer to revive stomped enemy
    sta(Abs(EnemyIntervalTimer, x));
}

int SBnce() {
    // set player's vertical speed for bounce
    lda(Imm(0xfc));
    // and then leave!!!
    sta(Abs(Player_Y_Speed));
    return 0;
}

int ChkEnemyFaceRight() {
    // check to see if enemy is moving to the right
    lda(Abs(Enemy_MovingDir, x));
    cmp(Imm(0x1));
    // if not, branch
    BNE(LInj);
    // otherwise go back to hurt player
    JMP(InjurePlayer);
}

int LInj() {
    // turn the enemy around, if necessary
    JSR(EnemyTurnAround);
    // go back to hurt player
    JMP(InjurePlayer);
}

int EnemyFacePlayer() {
    // set to move right by default
    ldy(Imm(0x1));
    // get horizontal difference between player and enemy
    JSR(PlayerEnemyDiff);
    // if enemy is to the right of player, do not increment
    BPL(SFcRt);
    // otherwise, increment to set to move to the left
    iny();
}

int SFcRt() {
    // set moving direction here
    sty(Abs(Enemy_MovingDir, x));
    // then decrement to use as a proper offset
    dey();
    return 0;
}

int SetupFloateyNumber() {
    // set number of points control for floatey numbers
    sta(Abs(FloateyNum_Control, x));
    lda(Imm(0x30));
    // set timer for floatey numbers
    sta(Abs(FloateyNum_Timer, x));
    lda(Abs(Enemy_Y_Position, x));
    // set vertical coordinate
    sta(Abs(FloateyNum_Y_Pos, x));
    lda(Abs(Enemy_Rel_XPos));
    // set horizontal coordinate and leave
    sta(Abs(FloateyNum_X_Pos, x));
}

int ExSFN() {
    return 0;
}

int EnemiesCollision() {
    // check counter for d0 set
    lda(Abs(FrameCounter));
    lsr();
    // if d0 not set, leave
    BCC(ExSFN);
    lda(Abs(AreaType));
    // if water area type, leave
    BEQ(ExSFN);
    lda(Abs(Enemy_ID, x));
    // if enemy object => $15, branch to leave
    cmp(Imm(0x15));
    BCS(ExitECRoutine);
    // if lakitu, branch to leave
    cmp(Imm(Lakitu));
    BEQ(ExitECRoutine);
    // if piranha plant, branch to leave
    cmp(Imm(PiranhaPlant));
    BEQ(ExitECRoutine);
    // if masked offscreen bits nonzero, branch to leave
    lda(Abs(EnemyOffscrBitsMasked, x));
    BNE(ExitECRoutine);
    // otherwise, do sub, get appropriate bounding box offset for
    JSR(GetEnemyBoundBoxOfs);
    // first enemy we're going to compare, then decrement for second
    dex();
    // branch to leave if there are no other enemies
    BMI(ExitECRoutine);
}

int ECLoop() {
    // save enemy object buffer offset for second enemy here
    stx(Abs(0x1));
    // save first enemy's bounding box offset to stack
    tya();
    pha();
    // check enemy object enable flag
    lda(Abs(Enemy_Flag, x));
    // branch if flag not set
    BEQ(ReadyNextEnemy);
    lda(Abs(Enemy_ID, x));
    // check for enemy object => $15
    cmp(Imm(0x15));
    // branch if true
    BCS(ReadyNextEnemy);
    cmp(Imm(Lakitu));
    // branch if enemy object is lakitu
    BEQ(ReadyNextEnemy);
    cmp(Imm(PiranhaPlant));
    // branch if enemy object is piranha plant
    BEQ(ReadyNextEnemy);
    lda(Abs(EnemyOffscrBitsMasked, x));
    // branch if masked offscreen bits set
    BNE(ReadyNextEnemy);
    // get second enemy object's bounding box offset
    txa();
    // multiply by four, then add four
    asl();
    asl();
    clc();
    adc(Imm(0x4));
    // use as new contents of X
    tax();
    // do collision detection using the two enemies here
    JSR(SprObjectCollisionCore);
    // use first enemy offset for X
    ldx(Abs(ObjectOffset));
    // use second enemy offset for Y
    ldy(Abs(0x1));
    // if carry clear, no collision, branch ahead of this
    BCC(NoEnemyCollision);
    lda(Abs(Enemy_State, x));
    // check both enemy states for d7 set
    ora(Abs(Enemy_State, y));
    anda(Imm(0b10000000));
    // branch if at least one of them is set
    BNE(YesEC);
    // load first enemy's collision-related bits
    lda(Abs(Enemy_CollisionBits, y));
    // check to see if bit connected to second enemy is
    anda(Abs(offsetof(G, SetBitsMask), x));
    // already set, and move onto next enemy slot if set
    BNE(ReadyNextEnemy);
    lda(Abs(Enemy_CollisionBits, y));
    // if the bit is not set, set it now
    ora(Abs(offsetof(G, SetBitsMask), x));
    sta(Abs(Enemy_CollisionBits, y));
}

int YesEC() {
    // react according to the nature of collision
    JSR(ProcEnemyCollisions);
    // move onto next enemy slot
    JMP(ReadyNextEnemy);
}

int NoEnemyCollision() {
    // load first enemy's collision-related bits
    lda(Abs(Enemy_CollisionBits, y));
    // clear bit connected to second enemy
    anda(Abs(offsetof(G, ClearBitsMask), x));
    // then move onto next enemy slot
    sta(Abs(Enemy_CollisionBits, y));
}

int ReadyNextEnemy() {
    // get first enemy's bounding box offset from the stack
    pla();
    // use as Y again
    tay();
    // get and decrement second enemy's object buffer offset
    ldx(Abs(0x1));
    dex();
    // loop until all enemy slots have been checked
    BPL(ECLoop);
}

int ExitECRoutine() {
    // get enemy object buffer offset
    ldx(Abs(ObjectOffset));
    // leave
    return 0;
}

int ProcEnemyCollisions() {
    // check both enemy states for d5 set
    lda(Abs(Enemy_State, y));
    ora(Abs(Enemy_State, x));
    // if d5 is set in either state, or both, branch
    anda(Imm(0b100000));
    // to leave and do nothing else at this point
    BNE(ExitProcessEColl);
    lda(Abs(Enemy_State, x));
    // if second enemy state < $06, branch elsewhere
    cmp(Imm(0x6));
    BCC(ProcSecondEnemyColl);
    // check second enemy identifier for hammer bro
    lda(Abs(Enemy_ID, x));
    // if hammer bro found in alt state, branch to leave
    cmp(Imm(HammerBro));
    BEQ(ExitProcessEColl);
    // check first enemy state for d7 set
    lda(Abs(Enemy_State, y));
    asl();
    // branch if d7 is clear
    BCC(ShellCollisions);
    lda(Imm(0x6));
    // award 1000 points for killing enemy
    JSR(SetupFloateyNumber);
    // then kill enemy, then load
    JSR(ShellOrBlockDefeat);
    // original offset of second enemy
    ldy(Abs(0x1));
}

int ShellCollisions() {
    // move Y to X
    tya();
    tax();
    // kill second enemy
    JSR(ShellOrBlockDefeat);
    ldx(Abs(ObjectOffset));
    // get chain counter for shell
    lda(Abs(ShellChainCounter, x));
    clc();
    // add four to get appropriate point offset
    adc(Imm(0x4));
    ldx(Abs(0x1));
    // award appropriate number of points for second enemy
    JSR(SetupFloateyNumber);
    // load original offset of first enemy
    ldx(Abs(ObjectOffset));
    // increment chain counter for additional enemies
    inc(Abs(ShellChainCounter, x));
}

int ExitProcessEColl() {
    // leave!!!
    return 0;
}

int ProcSecondEnemyColl() {
    // if first enemy state < $06, branch elsewhere
    lda(Abs(Enemy_State, y));
    cmp(Imm(0x6));
    BCC(MoveEOfs);
    // check first enemy identifier for hammer bro
    lda(Abs(Enemy_ID, y));
    // if hammer bro found in alt state, branch to leave
    cmp(Imm(HammerBro));
    BEQ(ExitProcessEColl);
    // otherwise, kill first enemy
    JSR(ShellOrBlockDefeat);
    ldy(Abs(0x1));
    // get chain counter for shell
    lda(Abs(ShellChainCounter, y));
    clc();
    // add four to get appropriate point offset
    adc(Imm(0x4));
    ldx(Abs(ObjectOffset));
    // award appropriate number of points for first enemy
    JSR(SetupFloateyNumber);
    // load original offset of second enemy
    ldx(Abs(0x1));
    // increment chain counter for additional enemies
    inc(Abs(ShellChainCounter, x));
    // leave!!!
    return 0;
}

int MoveEOfs() {
    // move Y ($01) to X
    tya();
    tax();
    // do the sub here using value from $01
    JSR(EnemyTurnAround);
    // then do it again using value from $08
    ldx(Abs(ObjectOffset));
}

int EnemyTurnAround() {
    // check for specific enemies
    lda(Abs(Enemy_ID, x));
    cmp(Imm(PiranhaPlant));
    // if piranha plant, leave
    BEQ(ExTA);
    cmp(Imm(Lakitu));
    // if lakitu, leave
    BEQ(ExTA);
    cmp(Imm(HammerBro));
    // if hammer bro, leave
    BEQ(ExTA);
    cmp(Imm(Spiny));
    // if spiny, turn it around
    BEQ(RXSpd);
    cmp(Imm(GreenParatroopaJump));
    // if green paratroopa, turn it around
    BEQ(RXSpd);
    cmp(Imm(0x7));
    // if any OTHER enemy object => $07, leave
    BCS(ExTA);
}

int RXSpd() {
    // load horizontal speed
    lda(Abs(Enemy_X_Speed, x));
    // get two's compliment for horizontal speed
    eor(Imm(0xff));
    tay();
    iny();
    // store as new horizontal speed
    sty(Abs(Enemy_X_Speed, x));
    lda(Abs(Enemy_MovingDir, x));
    // invert moving direction and store, then leave
    eor(Imm(0b11));
    // thus effectively turning the enemy around
    sta(Abs(Enemy_MovingDir, x));
}

int ExTA() {
    // leave!!!
    return 0;
}

int LargePlatformCollision() {
    // save value here
    lda(Imm(0xff));
    sta(Abs(PlatformCollisionFlag, x));
    // check master timer control
    lda(Abs(TimerControl));
    // if set, branch to leave
    BNE(ExLPC);
    // if d7 set in object state,
    lda(Abs(Enemy_State, x));
    // branch to leave
    BMI(ExLPC);
    lda(Abs(Enemy_ID, x));
    // check enemy object identifier for
    cmp(Imm(0x24));
    // balance platform, branch if not found
    BNE(ChkForPlayerC_LargeP);
    lda(Abs(Enemy_State, x));
    // set state as enemy offset here
    tax();
    // perform code with state offset, then original offset, in X
    JSR(ChkForPlayerC_LargeP);
}

int ChkForPlayerC_LargeP() {
    // figure out if player is below a certain point
    JSR(CheckPlayerVertical);
    // or offscreen, branch to leave if true
    BCS(ExLPC);
    txa();
    // get bounding box offset in Y
    JSR(GetEnemyBoundBoxOfsArg);
    // store vertical coordinate in
    lda(Abs(Enemy_Y_Position, x));
    // temp variable for now
    sta(Abs(0x0));
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
}

int ExLPC() {
    // get enemy object buffer offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int SmallPlatformCollision() {
    // if master timer control set,
    lda(Abs(TimerControl));
    // branch to leave
    BNE(ExSPC);
    // otherwise initialize collision flag
    sta(Abs(PlatformCollisionFlag, x));
    // do a sub to see if player is below a certain point
    JSR(CheckPlayerVertical);
    // or entirely offscreen, and branch to leave if true
    BCS(ExSPC);
    lda(Imm(0x2));
    // load counter here for 2 bounding boxes
    sta(Abs(0x0));
}

int ChkSmallPlatLoop() {
    // get enemy object offset
    ldx(Abs(ObjectOffset));
    // get bounding box offset in Y
    JSR(GetEnemyBoundBoxOfs);
    // if d1 of offscreen lower nybble bits was set
    anda(Imm(0b10));
    // then branch to leave
    BNE(ExSPC);
    // check top of platform's bounding box for being
    lda(Abs(BoundingBox_UL_YPos, y));
    // above a specific point
    cmp(Imm(0x20));
    // if so, branch, don't do collision detection
    BCC(MoveBoundBox);
    // otherwise, perform player-to-platform collision detection
    JSR(PlayerCollisionCore);
    // skip ahead if collision
    BCS(ProcSPlatCollisions);
}

int MoveBoundBox() {
    // move bounding box vertical coordinates
    lda(Abs(BoundingBox_UL_YPos, y));
    // 128 pixels downwards
    clc();
    adc(Imm(0x80));
    sta(Abs(BoundingBox_UL_YPos, y));
    lda(Abs(BoundingBox_DR_YPos, y));
    clc();
    adc(Imm(0x80));
    sta(Abs(BoundingBox_DR_YPos, y));
    // decrement counter we set earlier
    dec(Abs(0x0));
    // loop back until both bounding boxes are checked
    BNE(ChkSmallPlatLoop);
}

int ExSPC() {
    // get enemy object buffer offset, then leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int ProcSPlatCollisions() {
    // return enemy object buffer offset to X, then continue
    ldx(Abs(ObjectOffset));
}

int ProcLPlatCollisions() {
    // get difference by subtracting the top
    lda(Abs(BoundingBox_DR_YPos, y));
    // of the player's bounding box from the bottom
    sec();
    // of the platform's bounding box
    sbc(Abs(BoundingBox_UL_YPos));
    // if difference too large or negative,
    cmp(Imm(0x4));
    // branch, do not alter vertical speed of player
    BCS(ChkForTopCollision);
    // check to see if player's vertical speed is moving down
    lda(Abs(Player_Y_Speed));
    // if so, don't mess with it
    BPL(ChkForTopCollision);
    // otherwise, set vertical
    lda(Imm(0x1));
    // speed of player to kill jump
    sta(Abs(Player_Y_Speed));
}

int ChkForTopCollision() {
    // get difference by subtracting the top
    lda(Abs(BoundingBox_DR_YPos));
    // of the platform's bounding box from the bottom
    sec();
    // of the player's bounding box
    sbc(Abs(BoundingBox_UL_YPos, y));
    cmp(Imm(0x6));
    // if difference not close enough, skip all of this
    BCS(PlatformSideCollisions);
    lda(Abs(Player_Y_Speed));
    // if player's vertical speed moving upwards, skip this
    BMI(PlatformSideCollisions);
    // get saved bounding box counter from earlier
    lda(Abs(0x0));
    ldy(Abs(Enemy_ID, x));
    // if either of the two small platform objects are found,
    cpy(Imm(0x2b));
    // regardless of which one, branch to use bounding box counter
    BEQ(SetCollisionFlag);
    // as contents of collision flag
    cpy(Imm(0x2c));
    BEQ(SetCollisionFlag);
    // otherwise use enemy object buffer offset
    txa();
}

int SetCollisionFlag() {
    // get enemy object buffer offset
    ldx(Abs(ObjectOffset));
    // save either bounding box counter or enemy offset here
    sta(Abs(PlatformCollisionFlag, x));
    lda(Imm(0x0));
    // set player state to normal then leave
    sta(Abs(Player_State));
    return 0;
}

int PlatformSideCollisions() {
    // set value here to indicate possible horizontal
    lda(Imm(0x1));
    // collision on left side of platform
    sta(Abs(0x0));
    // get difference by subtracting platform's left edge
    lda(Abs(BoundingBox_DR_XPos));
    // from player's right edge
    sec();
    sbc(Abs(BoundingBox_UL_XPos, y));
    // if difference close enough, skip all of this
    cmp(Imm(0x8));
    BCC(SideC);
    // otherwise increment value set here for right side collision
    inc(Abs(0x0));
    // get difference by subtracting player's left edge
    lda(Abs(BoundingBox_DR_XPos, y));
    // from platform's right edge
    clc();
    sbc(Abs(BoundingBox_UL_XPos));
    // if difference not close enough, skip subroutine
    cmp(Imm(0x9));
    // and instead branch to leave (no collision)
    BCS(NoSideC);
}

int SideC() {
    // deal with horizontal collision
    JSR(ImpedePlayerMove);
}

int NoSideC() {
    // return with enemy object buffer offset
    ldx(Abs(ObjectOffset));
    return 0;
}

int PositionPlayerOnS_Plat() {
    // use bounding box counter saved in collision flag
    tay();
    // for offset
    lda(Abs(Enemy_Y_Position, x));
    // add positioning data using offset to the vertical
    clc();
    // coordinate
    adc(Abs(((offsetof(G, PlayerPosSPlatData)) - (1)), y));
}

int PositionPlayerOnVPlat() {
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    ldy(Abs(GameEngineSubroutine));
    // if certain routine being executed on this frame,
    cpy(Imm(0xb));
    // skip all of this
    BEQ(ExPlPos);
    ldy(Abs(Enemy_Y_HighPos, x));
    // if vertical high byte offscreen, skip this
    cpy(Imm(0x1));
    BNE(ExPlPos);
    // subtract 32 pixels from vertical coordinate
    sec();
    // for the player object's height
    sbc(Imm(0x20));
    // save as player's new vertical coordinate
    sta(Abs(Player_Y_Position));
    tya();
    // subtract borrow and store as player's
    sbc(Imm(0x0));
    // new vertical high byte
    sta(Abs(Player_Y_HighPos));
    lda(Imm(0x0));
    // initialize vertical speed and low byte of force
    sta(Abs(Player_Y_Speed));
    // and then leave
    sta(Abs(Player_Y_MoveForce));
}

int ExPlPos() {
    return 0;
}

int CheckPlayerVertical() {
    // if player object is completely offscreen
    lda(Abs(Player_OffscreenBits));
    // vertically, leave this routine
    cmp(Imm(0xf0));
    BCS(ExCPV);
    // if player high vertical byte is not
    ldy(Abs(Player_Y_HighPos));
    // within the screen, leave this routine
    dey();
    BNE(ExCPV);
    // if on the screen, check to see how far down
    lda(Abs(Player_Y_Position));
    // the player is vertically
    cmp(Imm(0xd0));
}

int ExCPV() {
    return 0;
}

int GetEnemyBoundBoxOfs() {
    // get enemy object buffer offset
    lda(Abs(ObjectOffset));
}

int GetEnemyBoundBoxOfsArg() {
    // multiply A by four, then add four
    asl();
    // to skip player's bounding box
    asl();
    clc();
    adc(Imm(0x4));
    // send to Y
    tay();
    // get offscreen bits for enemy object
    lda(Abs(Enemy_OffscreenBits));
    // save low nybble
    anda(Imm(0b1111));
    // check for all bits set
    cmp(Imm(0b1111));
    return 0;
}

int PlayerBGCollision() {
    // if collision detection disabled flag set,
    lda(Abs(DisableCollisionDet));
    // branch to leave
    BNE(ExPBGCol);
    lda(Abs(GameEngineSubroutine));
    // if running routine #11 or $0b
    cmp(Imm(0xb));
    // branch to leave
    BEQ(ExPBGCol);
    cmp(Imm(0x4));
    // if running routines $00-$03 branch to leave
    BCC(ExPBGCol);
    // load default player state for swimming
    lda(Imm(0x1));
    // if swimming flag set,
    ldy(Abs(SwimmingFlag));
    // branch ahead to set default state
    BNE(SetPSte);
    // if player in normal state,
    lda(Abs(Player_State));
    // branch to set default state for falling
    BEQ(SetFallS);
    cmp(Imm(0x3));
    // if in any other state besides climbing, skip to next part
    BNE(ChkOnScr);
}

int SetFallS() {
    // load default player state for falling
    lda(Imm(0x2));
}

int SetPSte() {
    // set whatever player state is appropriate
    sta(Abs(Player_State));
}

int ChkOnScr() {
    lda(Abs(Player_Y_HighPos));
    // check player's vertical high byte for still on the screen
    cmp(Imm(0x1));
    // branch to leave if not
    BNE(ExPBGCol);
    lda(Imm(0xff));
    // initialize player's collision flag
    sta(Abs(Player_CollisionBits));
    lda(Abs(Player_Y_Position));
    // check player's vertical coordinate
    cmp(Imm(0xcf));
    // if not too close to the bottom of screen, continue
    BCC(ChkCollSize);
}

int ExPBGCol() {
    // otherwise leave
    return 0;
}

int ChkCollSize() {
    // load default offset
    ldy(Imm(0x2));
    lda(Abs(CrouchingFlag));
    // if player crouching, skip ahead
    BNE(GBBAdr);
    lda(Abs(PlayerSize));
    // if player small, skip ahead
    BNE(GBBAdr);
    // otherwise decrement offset for big player not crouching
    dey();
    lda(Abs(SwimmingFlag));
    // if swimming flag set, skip ahead
    BNE(GBBAdr);
    // otherwise decrement offset
    dey();
}

int GBBAdr() {
    // get value using offset
    lda(Abs(offsetof(G, BlockBufferAdderData), y));
    // store value here
    sta(Abs(0xeb));
    // put value into Y, as offset for block buffer routine
    tay();
    // get player's size as offset
    ldx(Abs(PlayerSize));
    lda(Abs(CrouchingFlag));
    // if player not crouching, branch ahead
    BEQ(HeadChk);
    // otherwise increment size as offset
    inx();
}

int HeadChk() {
    // get player's vertical coordinate
    lda(Abs(Player_Y_Position));
    // compare with upper extent value based on offset
    cmp(Abs(offsetof(G, PlayerBGUpperExtent), x));
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
    ldy(Abs(Player_Y_Speed));
    // if player not moving upwards, branch elsewhere
    BPL(DoFootCheck);
    // check lower nybble of vertical coordinate returned
    ldy(Abs(0x4));
    // from collision detection routine
    cpy(Imm(0x4));
    // if low nybble < 4, branch
    BCC(DoFootCheck);
    // check to see what player's head bumped on
    JSR(CheckForSolidMTiles);
    // if player collided with solid metatile, branch
    BCS(SolidOrClimb);
    // otherwise check area type
    ldy(Abs(AreaType));
    // if water level, branch ahead
    BEQ(NYSpd);
    // if block bounce timer not expired,
    ldy(Abs(BlockBounceTimer));
    // branch ahead, do not process collision
    BNE(NYSpd);
    // otherwise do a sub to process collision
    JSR(PlayerHeadCollision);
    // jump ahead to skip these other parts here
    JMP(DoFootCheck);
}

int SolidOrClimb() {
    // if climbing metatile,
    cmp(Imm(0x26));
    // branch ahead and do not play sound
    BEQ(NYSpd);
    lda(Imm(Sfx_Bump));
    // otherwise load bump sound
    sta(Abs(Square1SoundQueue));
}

int NYSpd() {
    // set player's vertical speed to nullify
    lda(Imm(0x1));
    // jump or swim
    sta(Abs(Player_Y_Speed));
}

int DoFootCheck() {
    // get block buffer adder offset
    ldy(Abs(0xeb));
    lda(Abs(Player_Y_Position));
    // check to see how low player is
    cmp(Imm(0xcf));
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
    sta(Abs(0x0));
    pla();
    // pull bottom left metatile and save here
    sta(Abs(0x1));
    // if anything here, skip this part
    BNE(ChkFootMTile);
    // otherwise check for anything in bottom right metatile
    lda(Abs(0x0));
    // and skip ahead if not
    BEQ(DoPlayerSideCheck);
    // check to see if player touched coin with their right foot
    JSR(CheckForCoinMTiles);
    // if not, skip unconditional jump and continue code
    BCC(ChkFootMTile);
}

int AwardTouchedCoin() {
    // follow the code to erase coin and award to player 1 coin
    JMP(HandleCoinMetatile);
}

int ChkFootMTile() {
    // check to see if player landed on climbable metatiles
    JSR(CheckForClimbMTiles);
    // if so, branch
    BCS(DoPlayerSideCheck);
    // check player's vertical speed
    ldy(Abs(Player_Y_Speed));
    // if player moving upwards, branch
    BMI(DoPlayerSideCheck);
    cmp(Imm(0xc5));
    // if player did not touch axe, skip ahead
    BNE(ContChk);
    // otherwise jump to set modes of operation
    JMP(HandleAxeMetatile);
}

int ContChk() {
    // do sub to check for hidden coin or 1-up blocks
    JSR(ChkInvisibleMTiles);
    // if either found, branch
    BEQ(DoPlayerSideCheck);
    // if jumpspring animating right now,
    ldy(Abs(JumpspringAnimCtrl));
    // branch ahead
    BNE(InitSteP);
    // check lower nybble of vertical coordinate returned
    ldy(Abs(0x4));
    // from collision detection routine
    cpy(Imm(0x5));
    // if lower nybble < 5, branch
    BCC(LandPlyr);
    lda(Abs(Player_MovingDir));
    // use player's moving direction as temp variable
    sta(Abs(0x0));
    // jump to impede player's movement in that direction
    JMP(ImpedePlayerMove);
}

int LandPlyr() {
    // do sub to check for jumpspring metatiles and deal with it
    JSR(ChkForLandJumpSpring);
    lda(Imm(0xf0));
    // mask out lower nybble of player's vertical position
    anda(Abs(Player_Y_Position));
    // and store as new vertical position to land player properly
    sta(Abs(Player_Y_Position));
    // do sub to process potential pipe entry
    JSR(HandlePipeEntry);
    lda(Imm(0x0));
    // initialize vertical speed and fractional
    sta(Abs(Player_Y_Speed));
    // movement force to stop player's vertical movement
    sta(Abs(Player_Y_MoveForce));
    // initialize enemy stomp counter
    sta(Abs(StompChainCounter));
}

int InitSteP() {
    lda(Imm(0x0));
    // set player's state to normal
    sta(Abs(Player_State));
}

int DoPlayerSideCheck() {
    // get block buffer adder offset
    ldy(Abs(0xeb));
    iny();
    // increment offset 2 bytes to use adders for side collisions
    iny();
    // set value here to be used as counter
    lda(Imm(0x2));
    sta(Abs(0x0));
}

int SideCheckLoop() {
    // move onto the next one
    iny();
    // store it
    sty(Abs(0xeb));
    lda(Abs(Player_Y_Position));
    // check player's vertical position
    cmp(Imm(0x20));
    // if player is in status bar area, branch ahead to skip this part
    BCC(BHalf);
    cmp(Imm(0xe4));
    // branch to leave if player is too far down
    BCS(ExSCH);
    // do player-to-bg collision detection on one half of player
    JSR(BlockBufferColli_Side);
    // branch ahead if nothing found
    BEQ(BHalf);
    // otherwise check for pipe metatiles
    cmp(Imm(0x1c));
    // if collided with sideways pipe (top), branch ahead
    BEQ(BHalf);
    cmp(Imm(0x6b));
    // if collided with water pipe (top), branch ahead
    BEQ(BHalf);
    // do sub to see if player bumped into anything climbable
    JSR(CheckForClimbMTiles);
    // if not, branch to alternate section of code
    BCC(CheckSideMTiles);
}

int BHalf() {
    // load block adder offset
    ldy(Abs(0xeb));
    // increment it
    iny();
    // get player's vertical position
    lda(Abs(Player_Y_Position));
    cmp(Imm(0x8));
    // if too high, branch to leave
    BCC(ExSCH);
    cmp(Imm(0xd0));
    // if too low, branch to leave
    BCS(ExSCH);
    // do player-to-bg collision detection on other half of player
    JSR(BlockBufferColli_Side);
    // if something found, branch
    BNE(CheckSideMTiles);
    // otherwise decrement counter
    dec(Abs(0x0));
    // run code until both sides of player are checked
    BNE(SideCheckLoop);
}

int ExSCH() {
    // leave
    return 0;
}

int CheckSideMTiles() {
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
}

int ContSChk() {
    // check to see if player touched coin
    JSR(CheckForCoinMTiles);
    // if so, execute code to erase coin and award to player 1 coin
    BCS(HandleCoinMetatile);
    // check for jumpspring metatiles
    JSR(ChkJumpspringMetatiles);
    // if not found, branch ahead to continue cude
    BCC(ChkPBtm);
    // otherwise check jumpspring animation control
    lda(Abs(JumpspringAnimCtrl));
    // branch to leave if set
    BNE(ExCSM);
    // otherwise jump to impede player's movement
    JMP(StopPlayerMove);
}

int ChkPBtm() {
    // get player's state
    ldy(Abs(Player_State));
    // check for player's state set to normal
    cpy(Imm(0x0));
    // if not, branch to impede player's movement
    BNE(StopPlayerMove);
    // get player's facing direction
    ldy(Abs(PlayerFacingDir));
    dey();
    // if facing left, branch to impede movement
    BNE(StopPlayerMove);
    // otherwise check for pipe metatiles
    cmp(Imm(0x6c));
    // if collided with sideways pipe (bottom), branch
    BEQ(PipeDwnS);
    // if collided with water pipe (bottom), continue
    cmp(Imm(0x1f));
    // otherwise branch to impede player's movement
    BNE(StopPlayerMove);
}

int PipeDwnS() {
    // check player's attributes
    lda(Abs(Player_SprAttrib));
    // if already set, branch, do not play sound again
    BNE(PlyrPipe);
    ldy(Imm(Sfx_PipeDown_Injury));
    // otherwise load pipedown/injury sound
    sty(Abs(Square1SoundQueue));
}

int PlyrPipe() {
    ora(Imm(0b100000));
    // set background priority bit in player attributes
    sta(Abs(Player_SprAttrib));
    lda(Abs(Player_X_Position));
    // get lower nybble of player's horizontal coordinate
    anda(Imm(0b1111));
    // if at zero, branch ahead to skip this part
    BEQ(ChkGERtn);
    // set default offset for timer setting data
    ldy(Imm(0x0));
    // load page location for left side of screen
    lda(Abs(ScreenLeft_PageLoc));
    // if at page zero, use default offset
    BEQ(SetCATmr);
    // otherwise increment offset
    iny();
}

int SetCATmr() {
    // set timer for change of area as appropriate
    lda(Abs(offsetof(G, AreaChangeTimerData), y));
    sta(Abs(ChangeAreaTimer));
}

int ChkGERtn() {
    // get number of game engine routine running
    lda(Abs(GameEngineSubroutine));
    cmp(Imm(0x7));
    // if running player entrance routine or
    BEQ(ExCSM);
    // player control routine, go ahead and branch to leave
    cmp(Imm(0x8));
    BNE(ExCSM);
    lda(Imm(0x2));
    // otherwise set sideways pipe entry routine to run
    sta(Abs(GameEngineSubroutine));
    // and leave
    return 0;
}

int StopPlayerMove() {
    // stop player's movement
    JSR(ImpedePlayerMove);
}

int ExCSM() {
    // leave
    return 0;
}

int HandleCoinMetatile() {
    // do sub to erase coin metatile from block buffer
    JSR(ErACM);
    // increment coin tally used for 1-up blocks
    inc(Abs(CoinTallyFor1Ups));
    // update coin amount and tally on the screen
    JMP(GiveOneCoin);
}

int HandleAxeMetatile() {
    lda(Imm(0x0));
    // reset secondary mode
    sta(Abs(OperMode_Task));
    lda(Imm(0x2));
    // set primary mode to autoctrl mode
    sta(Abs(OperMode));
    lda(Imm(0x18));
    // set horizontal speed and continue to erase axe metatile
    sta(Abs(Player_X_Speed));
}

int ErACM() {
    // load vertical high nybble offset for block buffer
    ldy(Abs(0x2));
    // load blank metatile
    lda(Imm(0x0));
    // store to remove old contents from block buffer
    sta(IndY((0x6)));
    // update the screen accordingly
    JMP(RemoveCoin_Axe);
}

int HandleClimbing() {
    // check low nybble of horizontal coordinate returned from
    ldy(Abs(0x4));
    // collision detection routine against certain values, this
    cpy(Imm(0x6));
    // makes actual physical part of vine or flagpole thinner
    BCC(ExHC);
    // than 16 pixels
    cpy(Imm(0xa));
    BCC(ChkForFlagpole);
}

int ExHC() {
    // leave if too far left or too far right
    return 0;
}

int ChkForFlagpole() {
    // check climbing metatiles
    cmp(Imm(0x24));
    // branch if flagpole ball found
    BEQ(FlagpoleCollision);
    cmp(Imm(0x25));
    // branch to alternate code if flagpole shaft not found
    BNE(VineCollision);
}

int FlagpoleCollision() {
    lda(Abs(GameEngineSubroutine));
    // check for end-of-level routine running
    cmp(Imm(0x5));
    // if running, branch to end of climbing code
    BEQ(PutPlayerOnVine);
    lda(Imm(0x1));
    // set player's facing direction to right
    sta(Abs(PlayerFacingDir));
    // set scroll lock flag
    inc(Abs(ScrollLock));
    lda(Abs(GameEngineSubroutine));
    // check for flagpole slide routine running
    cmp(Imm(0x4));
    // if running, branch to end of flagpole code here
    BEQ(RunFR);
    // load identifier for bullet bills (cannon variant)
    lda(Imm(BulletBill_CannonVar));
    // get rid of them
    JSR(KillEnemies);
    lda(Imm(Silence));
    // silence music
    sta(Abs(EventMusicQueue));
    lsr();
    // load flagpole sound into flagpole sound queue
    sta(Abs(FlagpoleSoundQueue));
    // start at end of vertical coordinate data
    ldx(Imm(0x4));
    lda(Abs(Player_Y_Position));
    // store player's vertical coordinate here to be used later
    sta(Abs(FlagpoleCollisionYPos));
}

int ChkFlagpoleYPosLoop() {
    // compare with current vertical coordinate data
    cmp(Abs(offsetof(G, FlagpoleYPosData), x));
    // if player's => current, branch to use current offset
    BCS(MtchF);
    // otherwise decrement offset to use
    dex();
    // do this until all data is checked (use last one if all checked)
    BNE(ChkFlagpoleYPosLoop);
}

int MtchF() {
    // store offset here to be used later
    stx(Abs(FlagpoleScore));
}

int RunFR() {
    lda(Imm(0x4));
    // set value to run flagpole slide routine
    sta(Abs(GameEngineSubroutine));
    // jump to end of climbing code
    JMP(PutPlayerOnVine);
}

int VineCollision() {
    // check for climbing metatile used on vines
    cmp(Imm(0x26));
    BNE(PutPlayerOnVine);
    // check player's vertical coordinate
    lda(Abs(Player_Y_Position));
    // for being in status bar area
    cmp(Imm(0x20));
    // branch if not that far up
    BCS(PutPlayerOnVine);
    lda(Imm(0x1));
    // otherwise set to run autoclimb routine next frame
    sta(Abs(GameEngineSubroutine));
}

int PutPlayerOnVine() {
    // set player state to climbing
    lda(Imm(0x3));
    sta(Abs(Player_State));
    // nullify player's horizontal speed
    lda(Imm(0x0));
    // and fractional horizontal movement force
    sta(Abs(Player_X_Speed));
    sta(Abs(Player_X_MoveForce));
    // get player's horizontal coordinate
    lda(Abs(Player_X_Position));
    sec();
    // subtract from left side horizontal coordinate
    sbc(Abs(ScreenLeft_X_Pos));
    cmp(Imm(0x10));
    // if 16 or more pixels difference, do not alter facing direction
    BCS(SetVXPl);
    lda(Imm(0x2));
    // otherwise force player to face left
    sta(Abs(PlayerFacingDir));
}

int SetVXPl() {
    // get current facing direction, use as offset
    ldy(Abs(PlayerFacingDir));
    // get low byte of block buffer address
    lda(Abs(0x6));
    asl();
    // move low nybble to high
    asl();
    asl();
    asl();
    clc();
    // add pixels depending on facing direction
    adc(Abs(((offsetof(G, ClimbXPosAdder)) - (1)), y));
    // store as player's horizontal coordinate
    sta(Abs(Player_X_Position));
    // get low byte of block buffer address again
    lda(Abs(0x6));
    // if not zero, branch
    BNE(ExPVne);
    // load page location of right side of screen
    lda(Abs(ScreenRight_PageLoc));
    clc();
    // add depending on facing location
    adc(Abs(((offsetof(G, ClimbPLocAdder)) - (1)), y));
    // store as player's page location
    sta(Abs(Player_PageLoc));
}

int ExPVne() {
    // finally, we're done!
    return 0;
}

int ChkInvisibleMTiles() {
    // check for hidden coin block
    cmp(Imm(0x5f));
    // branch to leave if found
    BEQ(ExCInvT);
    // check for hidden 1-up block
    cmp(Imm(0x60));
}

int ExCInvT() {
    // leave with zero flag set if either found
    return 0;
}

int ChkForLandJumpSpring() {
    // do sub to check if player landed on jumpspring
    JSR(ChkJumpspringMetatiles);
    // if carry not set, jumpspring not found, therefore leave
    BCC(ExCJSp);
    lda(Imm(0x70));
    // otherwise set vertical movement force for player
    sta(Abs(VerticalForce));
    lda(Imm(0xf9));
    // set default jumpspring force
    sta(Abs(JumpspringForce));
    lda(Imm(0x3));
    // set jumpspring timer to be used later
    sta(Abs(JumpspringTimer));
    lsr();
    // set jumpspring animation control to start animating
    sta(Abs(JumpspringAnimCtrl));
}

int ExCJSp() {
    // and leave
    return 0;
}

int ChkJumpspringMetatiles() {
    // check for top jumpspring metatile
    cmp(Imm(0x67));
    // branch to set carry if found
    BEQ(JSFnd);
    // check for bottom jumpspring metatile
    cmp(Imm(0x68));
    // clear carry flag
    clc();
    // branch to use cleared carry if not found
    BNE(NoJSFnd);
}

int JSFnd() {
    // set carry if found
    sec();
}

int NoJSFnd() {
    // leave
    return 0;
}

int HandlePipeEntry() {
    // check saved controller bits from earlier
    lda(Abs(Up_Down_Buttons));
    // for pressing down
    anda(Imm(0b100));
    // if not pressing down, branch to leave
    BEQ(ExPipeE);
    lda(Abs(0x0));
    // check right foot metatile for warp pipe right metatile
    cmp(Imm(0x11));
    // branch to leave if not found
    BNE(ExPipeE);
    lda(Abs(0x1));
    // check left foot metatile for warp pipe left metatile
    cmp(Imm(0x10));
    // branch to leave if not found
    BNE(ExPipeE);
    lda(Imm(0x30));
    // set timer for change of area
    sta(Abs(ChangeAreaTimer));
    lda(Imm(0x3));
    // set to run vertical pipe entry routine on next frame
    sta(Abs(GameEngineSubroutine));
    lda(Imm(Sfx_PipeDown_Injury));
    // load pipedown/injury sound
    sta(Abs(Square1SoundQueue));
    lda(Imm(0b100000));
    // set background priority bit in player's attributes
    sta(Abs(Player_SprAttrib));
    // check warp zone control
    lda(Abs(WarpZoneControl));
    // branch to leave if none found
    BEQ(ExPipeE);
    // mask out all but 2 LSB
    anda(Imm(0b11));
    asl();
    // multiply by four
    asl();
    // save as offset to warp zone numbers (starts at left pipe)
    tax();
    // get player's horizontal position
    lda(Abs(Player_X_Position));
    cmp(Imm(0x60));
    // if player at left, not near middle, use offset and skip ahead
    BCC(GetWNum);
    // otherwise increment for middle pipe
    inx();
    cmp(Imm(0xa0));
    // if player at middle, but not too far right, use offset and skip
    BCC(GetWNum);
    // otherwise increment for last pipe
    inx();
}

int GetWNum() {
    // get warp zone numbers
    ldy(Abs(offsetof(G, WarpZoneNumbers), x));
    // decrement for use as world number
    dey();
    // store as world number and offset
    sty(Abs(WorldNumber));
    // get offset to where this world's area offsets are
    ldx(Abs(offsetof(G, WorldAddrOffsets), y));
    // get area offset based on world offset
    lda(Abs(offsetof(G, AreaAddrOffsets), x));
    // store area offset here to be used to change areas
    sta(Abs(AreaPointer));
    lda(Imm(Silence));
    // silence music
    sta(Abs(EventMusicQueue));
    lda(Imm(0x0));
    // initialize starting page number
    sta(Abs(EntrancePage));
    // initialize area number used for area address offset
    sta(Abs(AreaNumber));
    // initialize level number used for world display
    sta(Abs(LevelNumber));
    // initialize mode of entry
    sta(Abs(AltEntranceControl));
    // set flag for hidden 1-up blocks
    inc(Abs(Hidden1UpFlag));
    // set flag to load new game timer
    inc(Abs(FetchNewGameTimerFlag));
}

int ExPipeE() {
    // leave!!!
    return 0;
}

int ImpedePlayerMove() {
    // initialize value here
    lda(Imm(0x0));
    // get player's horizontal speed
    ldy(Abs(Player_X_Speed));
    // check value set earlier for
    ldx(Abs(0x0));
    // left side collision
    dex();
    // if right side collision, skip this part
    BNE(RImpd);
    // return value to X
    inx();
    // if player moving to the left,
    cpy(Imm(0x0));
    // branch to invert bit and leave
    BMI(ExIPM);
    // otherwise load A with value to be used later
    lda(Imm(0xff));
    // and jump to affect movement
    JMP(NXSpd);
}

int RImpd() {
    // return $02 to X
    ldx(Imm(0x2));
    // if player moving to the right,
    cpy(Imm(0x1));
    // branch to invert bit and leave
    BPL(ExIPM);
    // otherwise load A with value to be used here
    lda(Imm(0x1));
}

int NXSpd() {
    ldy(Imm(0x10));
    // set timer of some sort
    sty(Abs(SideCollisionTimer));
    ldy(Imm(0x0));
    // nullify player's horizontal speed
    sty(Abs(Player_X_Speed));
    // if value set in A not set to $ff,
    cmp(Imm(0x0));
    // branch ahead, do not decrement Y
    BPL(PlatF);
    // otherwise decrement Y now
    dey();
}

int PlatF() {
    // store Y as high bits of horizontal adder
    sty(Abs(0x0));
    clc();
    // add contents of A to player's horizontal
    adc(Abs(Player_X_Position));
    // position to move player left or right
    sta(Abs(Player_X_Position));
    lda(Abs(Player_PageLoc));
    // add high bits and carry to
    adc(Abs(0x0));
    // page location if necessary
    sta(Abs(Player_PageLoc));
}

int ExIPM() {
    // invert contents of X
    txa();
    eor(Imm(0xff));
    // mask out bit that was set here
    anda(Abs(Player_CollisionBits));
    // store to clear bit
    sta(Abs(Player_CollisionBits));
    return 0;
}

int CheckForSolidMTiles() {
    // find appropriate offset based on metatile's 2 MSB
    JSR(GetMTileAttrib);
    // compare current metatile with solid metatiles
    cmp(Abs(offsetof(G, SolidMTileUpperExt), x));
    return 0;
}

int CheckForClimbMTiles() {
    // find appropriate offset based on metatile's 2 MSB
    JSR(GetMTileAttrib);
    // compare current metatile with climbable metatiles
    cmp(Abs(offsetof(G, ClimbMTileUpperExt), x));
    return 0;
}

int CheckForCoinMTiles() {
    // check for regular coin
    cmp(Imm(0xc2));
    // branch if found
    BEQ(CoinSd);
    // check for underwater coin
    cmp(Imm(0xc3));
    // branch if found
    BEQ(CoinSd);
    // otherwise clear carry and leave
    clc();
    return 0;
}

int CoinSd() {
    lda(Imm(Sfx_CoinGrab));
    // load coin grab sound and leave
    sta(Abs(Square2SoundQueue));
    return 0;
}

int GetMTileAttrib() {
    // save metatile value into Y
    tay();
    // mask out all but 2 MSB
    anda(Imm(0b11000000));
    asl();
    // shift and rotate d7-d6 to d1-d0
    rol();
    rol();
    // use as offset for metatile data
    tax();
    // get original metatile value back
    tya();
}

int ExEBG() {
    // leave
    return 0;
}

int EnemyToBGCollisionDet() {
    // check enemy state for d6 set
    lda(Abs(Enemy_State, x));
    anda(Imm(0b100000));
    // if set, branch to leave
    BNE(ExEBG);
    // otherwise, do a subroutine here
    JSR(SubtEnemyYPos);
    // if enemy vertical coord + 62 < 68, branch to leave
    BCC(ExEBG);
    ldy(Abs(Enemy_ID, x));
    // if enemy object is not spiny, branch elsewhere
    cpy(Imm(Spiny));
    BNE(DoIDCheckBGColl);
    lda(Abs(Enemy_Y_Position, x));
    // if enemy vertical coordinate < 36 branch to leave
    cmp(Imm(0x25));
    BCC(ExEBG);
}

int DoIDCheckBGColl() {
    // check for some other enemy object
    cpy(Imm(GreenParatroopaJump));
    // branch if not found
    BNE(HBChk);
    // otherwise jump elsewhere
    JMP(EnemyJump);
}

int HBChk() {
    // check for hammer bro
    cpy(Imm(HammerBro));
    // branch if not found
    BNE(CInvu);
    // otherwise jump elsewhere
    JMP(HammerBroBGColl);
}

int CInvu() {
    // if enemy object is spiny, branch
    cpy(Imm(Spiny));
    BEQ(YesIn);
    // if special power-up object, branch
    cpy(Imm(PowerUpObject));
    BEQ(YesIn);
    // if enemy object =>$07, branch to leave
    cpy(Imm(0x7));
    BCS(ExEBGChk);
}

int YesIn() {
    // if enemy object < $07, or = $12 or $2e, do this sub
    JSR(ChkUnderEnemy);
    // if block underneath enemy, branch
    BNE(HandleEToBGCollision);
}

int NoEToBGCollision() {
    // otherwise skip and do something else
    JMP(ChkForRedKoopa);
}

int HandleEToBGCollision() {
    // if something is underneath enemy, find out what
    JSR(ChkForNonSolids);
    // if blank $26, coins, or hidden blocks, jump, enemy falls through
    BEQ(NoEToBGCollision);
    cmp(Imm(0x23));
    // check for blank metatile $23 and branch if not found
    BNE(LandEnemyProperly);
    // get vertical coordinate used to find block
    ldy(Abs(0x2));
    // store default blank metatile in that spot so we won't
    lda(Imm(0x0));
    // trigger this routine accidentally again
    sta(IndY((0x6)));
    lda(Abs(Enemy_ID, x));
    // if enemy object => $15, branch ahead
    cmp(Imm(0x15));
    BCS(ChkToStunEnemies);
    // if enemy object not goomba, branch ahead of this routine
    cmp(Imm(Goomba));
    BNE(GiveOEPoints);
    // if enemy object IS goomba, do this sub
    JSR(KillEnemyAboveBlock);
}

int GiveOEPoints() {
    // award 100 points for hitting block beneath enemy
    lda(Imm(0x1));
    JSR(SetupFloateyNumber);
}

int ChkToStunEnemies() {
    // perform many comparisons on enemy object identifier
    cmp(Imm(0x9));
    BCC(SetStun);
    // if the enemy object identifier is equal to the values
    cmp(Imm(0x11));
    // $09, $0e, $0f or $10, it will be modified, and not
    BCS(SetStun);
    // modified if not any of those values, note that piranha plant will
    cmp(Imm(0xa));
    // always fail this test because A will still have vertical
    BCC(Demote);
    // coordinate from previous addition, also these comparisons
    cmp(Imm(PiranhaPlant));
    // are only necessary if branching from $d7a1
    BCC(SetStun);
}

int Demote() {
    // erase all but LSB, essentially turning enemy object
    anda(Imm(0b1));
    // into green or red koopa troopa to demote them
    sta(Abs(Enemy_ID, x));
}

int SetStun() {
    // load enemy state
    lda(Abs(Enemy_State, x));
    // save high nybble
    anda(Imm(0b11110000));
    ora(Imm(0b10));
    // set d1 of enemy state
    sta(Abs(Enemy_State, x));
    dec(Abs(Enemy_Y_Position, x));
    // subtract two pixels from enemy's vertical position
    dec(Abs(Enemy_Y_Position, x));
    lda(Abs(Enemy_ID, x));
    // check for bloober object
    cmp(Imm(Bloober));
    BEQ(SetWYSpd);
    // set default vertical speed
    lda(Imm(0xfd));
    ldy(Abs(AreaType));
    // if area type not water, set as speed, otherwise
    BNE(SetNotW);
}

int SetWYSpd() {
    // change the vertical speed
    lda(Imm(0xff));
}

int SetNotW() {
    // set vertical speed now
    sta(Abs(Enemy_Y_Speed, x));
    ldy(Imm(0x1));
    // get horizontal difference between player and enemy object
    JSR(PlayerEnemyDiff);
    // branch if enemy is to the right of player
    BPL(ChkBBill);
    // increment Y if not
    iny();
}

int ChkBBill() {
    lda(Abs(Enemy_ID, x));
    // check for bullet bill (cannon variant)
    cmp(Imm(BulletBill_CannonVar));
    BEQ(NoCDirF);
    // check for bullet bill (frenzy variant)
    cmp(Imm(BulletBill_FrenzyVar));
    // branch if either found, direction does not change
    BEQ(NoCDirF);
    // store as moving direction
    sty(Abs(Enemy_MovingDir, x));
}

int NoCDirF() {
    // decrement and use as offset
    dey();
    // get proper horizontal speed
    lda(Abs(offsetof(G, EnemyBGCXSpdData), y));
    // and store, then leave
    sta(Abs(Enemy_X_Speed, x));
}

int ExEBGChk() {
    return 0;
}

int LandEnemyProperly() {
    // check lower nybble of vertical coordinate saved earlier
    lda(Abs(0x4));
    sec();
    // subtract eight pixels
    sbc(Imm(0x8));
    // used to determine whether enemy landed from falling
    cmp(Imm(0x5));
    // branch if lower nybble in range of $0d-$0f before subtract
    BCS(ChkForRedKoopa);
    lda(Abs(Enemy_State, x));
    // branch if d6 in enemy state is set
    anda(Imm(0b1000000));
    BNE(LandEnemyInitState);
    lda(Abs(Enemy_State, x));
    // branch if d7 in enemy state is not set
    asl();
    BCC(ChkLandedEnemyState);
}

int SChkA() {
    // if lower nybble < $0d, d7 set but d6 not set, jump here
    JMP(DoEnemySideCheck);
}

int ChkLandedEnemyState() {
    // if enemy in normal state, branch back to jump here
    lda(Abs(Enemy_State, x));
    BEQ(SChkA);
    // if in state used by spiny's egg
    cmp(Imm(0x5));
    // then branch elsewhere
    BEQ(ProcEnemyDirection);
    // if already in state used by koopas and buzzy beetles
    cmp(Imm(0x3));
    // or in higher numbered state, branch to leave
    BCS(ExSteChk);
    // load enemy state again (why?)
    lda(Abs(Enemy_State, x));
    // if not in $02 state (used by koopas and buzzy beetles)
    cmp(Imm(0x2));
    // then branch elsewhere
    BNE(ProcEnemyDirection);
    // load default timer here
    lda(Imm(0x10));
    // check enemy identifier for spiny
    ldy(Abs(Enemy_ID, x));
    cpy(Imm(Spiny));
    // branch if not found
    BNE(SetForStn);
    // set timer for $00 if spiny
    lda(Imm(0x0));
}

int SetForStn() {
    // set timer here
    sta(Abs(EnemyIntervalTimer, x));
    // set state here, apparently used to render
    lda(Imm(0x3));
    // upside-down koopas and buzzy beetles
    sta(Abs(Enemy_State, x));
    // then land it properly
    JSR(EnemyLanding);
}

int ExSteChk() {
    // then leave
    return 0;
}

int ProcEnemyDirection() {
    // check enemy identifier for goomba
    lda(Abs(Enemy_ID, x));
    // branch if found
    cmp(Imm(Goomba));
    BEQ(LandEnemyInitState);
    // check for spiny
    cmp(Imm(Spiny));
    // branch if not found
    BNE(InvtD);
    lda(Imm(0x1));
    // send enemy moving to the right by default
    sta(Abs(Enemy_MovingDir, x));
    lda(Imm(0x8));
    // set horizontal speed accordingly
    sta(Abs(Enemy_X_Speed, x));
    lda(Abs(FrameCounter));
    // if timed appropriately, spiny will skip over
    anda(Imm(0b111));
    // trying to face the player
    BEQ(LandEnemyInitState);
}

int InvtD() {
    // load 1 for enemy to face the left (inverted here)
    ldy(Imm(0x1));
    // get horizontal difference between player and enemy
    JSR(PlayerEnemyDiff);
    // if enemy to the right of player, branch
    BPL(CNwCDir);
    // if to the left, increment by one for enemy to face right (inverted)
    iny();
}

int CNwCDir() {
    tya();
    // compare direction in A with current direction in memory
    cmp(Abs(Enemy_MovingDir, x));
    BNE(LandEnemyInitState);
    // if equal, not facing in correct dir, do sub to turn around
    JSR(ChkForBump_HammerBroJ);
}

int LandEnemyInitState() {
    // land enemy properly
    JSR(EnemyLanding);
    lda(Abs(Enemy_State, x));
    // if d7 of enemy state is set, branch
    anda(Imm(0b10000000));
    BNE(NMovShellFallBit);
    // otherwise initialize enemy state and leave
    lda(Imm(0x0));
    // note this will also turn spiny's egg into spiny
    sta(Abs(Enemy_State, x));
    return 0;
}

int NMovShellFallBit() {
    // nullify d6 of enemy state, save other bits
    lda(Abs(Enemy_State, x));
    // and store, then leave
    anda(Imm(0b10111111));
    sta(Abs(Enemy_State, x));
    return 0;
}

int ChkForRedKoopa() {
    // check for red koopa troopa $03
    lda(Abs(Enemy_ID, x));
    cmp(Imm(RedKoopa));
    // branch if not found
    BNE(Chk2MSBSt);
    lda(Abs(Enemy_State, x));
    // if enemy found and in normal state, branch
    BEQ(ChkForBump_HammerBroJ);
}

int Chk2MSBSt() {
    // save enemy state into Y
    lda(Abs(Enemy_State, x));
    tay();
    // check for d7 set
    asl();
    // branch if not set
    BCC(GetSteFromD);
    lda(Abs(Enemy_State, x));
    // set d6
    ora(Imm(0b1000000));
    // jump ahead of this part
    JMP(SetD6Ste);
}

int GetSteFromD() {
    // load new enemy state with old as offset
    lda(Abs(offsetof(G, EnemyBGCStateData), y));
}

int SetD6Ste() {
    // set as new state
    sta(Abs(Enemy_State, x));
}

int DoEnemySideCheck() {
    // if enemy within status bar, branch to leave
    lda(Abs(Enemy_Y_Position, x));
    // because there's nothing there that impedes movement
    cmp(Imm(0x20));
    BCC(ExESdeC);
    // start by finding block to the left of enemy ($00,$14)
    ldy(Imm(0x16));
    // set value here in what is also used as
    lda(Imm(0x2));
    // OAM data offset
    sta(Abs(0xeb));
}

int SdeCLoop() {
    // check value
    lda(Abs(0xeb));
    // compare value against moving direction
    cmp(Abs(Enemy_MovingDir, x));
    // branch if different and do not seek block there
    BNE(NextSdeC);
    // set flag in A for save horizontal coordinate
    lda(Imm(0x1));
    // find block to left or right of enemy object
    JSR(BlockBufferChk_Enemy);
    // if nothing found, branch
    BEQ(NextSdeC);
    // check for non-solid blocks
    JSR(ChkForNonSolids);
    // branch if not found
    BNE(ChkForBump_HammerBroJ);
}

int NextSdeC() {
    // move to the next direction
    dec(Abs(0xeb));
    iny();
    // increment Y, loop only if Y < $18, thus we check
    cpy(Imm(0x18));
    // enemy ($00, $14) and ($10, $14) pixel coordinates
    BCC(SdeCLoop);
}

int ExESdeC() {
    return 0;
}

int ChkForBump_HammerBroJ() {
    // check if we're on the special use slot
    cpx(Imm(0x5));
    // and if so, branch ahead and do not play sound
    BEQ(NoBump);
    // if enemy state d7 not set, branch
    lda(Abs(Enemy_State, x));
    // ahead and do not play sound
    asl();
    BCC(NoBump);
    // otherwise, play bump sound
    lda(Imm(Sfx_Bump));
    // sound will never be played if branching from ChkForRedKoopa
    sta(Abs(Square1SoundQueue));
}

int NoBump() {
    // check for hammer bro
    lda(Abs(Enemy_ID, x));
    cmp(Imm(0x5));
    // branch if not found
    BNE(InvEnemyDir);
    lda(Imm(0x0));
    // initialize value here for bitmask
    sta(Abs(0x0));
    // load default vertical speed for jumping
    ldy(Imm(0xfa));
    // jump to code that makes hammer bro jump
    JMP(SetHJ);
}

int InvEnemyDir() {
    // jump to turn the enemy around
    JMP(RXSpd);
}

int PlayerEnemyDiff() {
    // get distance between enemy object's
    lda(Abs(Enemy_X_Position, x));
    // horizontal coordinate and the player's
    sec();
    // horizontal coordinate
    sbc(Abs(Player_X_Position));
    // and store here
    sta(Abs(0x0));
    lda(Abs(Enemy_PageLoc, x));
    // subtract borrow, then leave
    sbc(Abs(Player_PageLoc));
    return 0;
}

int EnemyLanding() {
    // do something here to vertical speed and something else
    JSR(InitVStf);
    lda(Abs(Enemy_Y_Position, x));
    // save high nybble of vertical coordinate, and
    anda(Imm(0b11110000));
    // set d3, then store, probably used to set enemy object
    ora(Imm(0b1000));
    // neatly on whatever it's landing on
    sta(Abs(Enemy_Y_Position, x));
    return 0;
}

int SubtEnemyYPos() {
    // add 62 pixels to enemy object's
    lda(Abs(Enemy_Y_Position, x));
    // vertical coordinate
    clc();
    adc(Imm(0x3e));
    // compare against a certain range
    cmp(Imm(0x44));
    // and leave with flags set for conditional branch
    return 0;
}

int EnemyJump() {
    // do a sub here
    JSR(SubtEnemyYPos);
    // if enemy vertical coord + 62 < 68, branch to leave
    BCC(DoSide);
    lda(Abs(Enemy_Y_Speed, x));
    // add two to vertical speed
    clc();
    adc(Imm(0x2));
    // if green paratroopa not falling, branch ahead
    cmp(Imm(0x3));
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
    lda(Imm(0xfd));
    // make the paratroopa jump again
    sta(Abs(Enemy_Y_Speed, x));
}

int DoSide() {
    // check for horizontal blockage, then leave
    JMP(DoEnemySideCheck);
}

int HammerBroBGColl() {
    // check to see if hammer bro is standing on anything
    JSR(ChkUnderEnemy);
    BEQ(NoUnderHammerBro);
    // check for blank metatile $23 and branch if not found
    cmp(Imm(0x23));
    BNE(UnderHammerBro);
}

int KillEnemyAboveBlock() {
    // do this sub to kill enemy
    JSR(ShellOrBlockDefeat);
    // alter vertical speed of enemy and leave
    lda(Imm(0xfc));
    sta(Abs(Enemy_Y_Speed, x));
    return 0;
}

int UnderHammerBro() {
    // check timer used by hammer bro
    lda(Abs(EnemyFrameTimer, x));
    // branch if not expired
    BNE(NoUnderHammerBro);
    lda(Abs(Enemy_State, x));
    // save d7 and d3 from enemy state, nullify other bits
    anda(Imm(0b10001000));
    // and store
    sta(Abs(Enemy_State, x));
    // modify vertical coordinate, speed and something else
    JSR(EnemyLanding);
    // then check for horizontal blockage and leave
    JMP(DoEnemySideCheck);
}

int NoUnderHammerBro() {
    // if hammer bro is not standing on anything, set d0
    lda(Abs(Enemy_State, x));
    // in the enemy state to indicate jumping or falling, then leave
    ora(Imm(0x1));
    sta(Abs(Enemy_State, x));
    return 0;
}

int ChkUnderEnemy() {
    // set flag in A for save vertical coordinate
    lda(Imm(0x0));
    // set Y to check the bottom middle (8,18) of enemy object
    ldy(Imm(0x15));
    // hop to it!
    JMP(BlockBufferChk_Enemy);
}

int ChkForNonSolids() {
    // blank metatile used for vines?
    cmp(Imm(0x26));
    BEQ(NSFnd);
    // regular coin?
    cmp(Imm(0xc2));
    BEQ(NSFnd);
    // underwater coin?
    cmp(Imm(0xc3));
    BEQ(NSFnd);
    // hidden coin block?
    cmp(Imm(0x5f));
    BEQ(NSFnd);
    // hidden 1-up block?
    cmp(Imm(0x60));
}

int NSFnd() {
    return 0;
}

int FireballBGCollision() {
    // check fireball's vertical coordinate
    lda(Abs(Fireball_Y_Position, x));
    cmp(Imm(0x18));
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
    lda(Abs(Fireball_Y_Speed, x));
    // branch to set exploding bit in fireball's state
    BMI(InitFireballExplode);
    // if bouncing flag already set,
    lda(Abs(FireballBouncingFlag, x));
    // branch to set exploding bit in fireball's state
    BNE(InitFireballExplode);
    lda(Imm(0xfd));
    // otherwise set vertical speed to move upwards (give it bounce)
    sta(Abs(Fireball_Y_Speed, x));
    lda(Imm(0x1));
    // set bouncing flag
    sta(Abs(FireballBouncingFlag, x));
    lda(Abs(Fireball_Y_Position, x));
    // modify vertical coordinate to land it properly
    anda(Imm(0xf8));
    // store as new vertical coordinate
    sta(Abs(Fireball_Y_Position, x));
    // leave
    return 0;
}

int ClearBounceFlag() {
    lda(Imm(0x0));
    // clear bouncing flag by default
    sta(Abs(FireballBouncingFlag, x));
    // leave
    return 0;
}

int InitFireballExplode() {
    lda(Imm(0x80));
    // set exploding flag in fireball's state
    sta(Abs(Fireball_State, x));
    lda(Imm(Sfx_Bump));
    // load bump sound
    sta(Abs(Square1SoundQueue));
    // leave
    return 0;
}

int GetFireballBoundBox() {
    // add seven bytes to offset
    txa();
    // to use in routines as offset for fireball
    clc();
    adc(Imm(0x7));
    tax();
    // set offset for relative coordinates
    ldy(Imm(0x2));
    // unconditional branch
    BNE(FBallB);
}

int GetMiscBoundBox() {
    // add nine bytes to offset
    txa();
    // to use in routines as offset for misc object
    clc();
    adc(Imm(0x9));
    tax();
    // set offset for relative coordinates
    ldy(Imm(0x6));
}

int FBallB() {
    // get bounding box coordinates
    JSR(BoundingBoxCore);
    // jump to handle any offscreen coordinates
    JMP(CheckRightScreenBBox);
}

int GetEnemyBoundBox() {
    // store bitmask here for now
    ldy(Imm(0x48));
    sty(Abs(0x0));
    // store another bitmask here for now and jump
    ldy(Imm(0x44));
    JMP(GetMaskedOffScrBits);
}

int SmallPlatformBoundBox() {
    // store bitmask here for now
    ldy(Imm(0x8));
    sty(Abs(0x0));
    // store another bitmask here for now
    ldy(Imm(0x4));
}

int GetMaskedOffScrBits() {
    // get enemy object position relative
    lda(Abs(Enemy_X_Position, x));
    // to the left side of the screen
    sec();
    sbc(Abs(ScreenLeft_X_Pos));
    // store here
    sta(Abs(0x1));
    // subtract borrow from current page location
    lda(Abs(Enemy_PageLoc, x));
    // of left side
    sbc(Abs(ScreenLeft_PageLoc));
    // if enemy object is beyond left edge, branch
    BMI(CMBits);
    ora(Abs(0x1));
    // if precisely at the left edge, branch
    BEQ(CMBits);
    // if to the right of left edge, use value in $00 for A
    ldy(Abs(0x0));
}

int CMBits() {
    // otherwise use contents of Y
    tya();
    // preserve bitwise whatever's in here
    anda(Abs(Enemy_OffscreenBits));
    // save masked offscreen bits here
    sta(Abs(EnemyOffscrBitsMasked, x));
    // if anything set here, branch
    BNE(MoveBoundBoxOffscreen);
    // otherwise, do something else
    JMP(SetupEOffsetFBBox);
}

int LargePlatformBoundBox() {
    // increment X to get the proper offset
    inx();
    // then jump directly to the sub for horizontal offscreen bits
    JSR(GetXOffscreenBits);
    // decrement to return to original offset
    dex();
    // if completely offscreen, branch to put entire bounding
    cmp(Imm(0xfe));
    // box offscreen, otherwise start getting coordinates
    BCS(MoveBoundBoxOffscreen);
}

int SetupEOffsetFBBox() {
    // add 1 to offset to properly address
    txa();
    // the enemy object memory locations
    clc();
    adc(Imm(0x1));
    tax();
    // load 1 as offset here, same reason
    ldy(Imm(0x1));
    // do a sub to get the coordinates of the bounding box
    JSR(BoundingBoxCore);
    // jump to handle offscreen coordinates of bounding box
    JMP(CheckRightScreenBBox);
}

int MoveBoundBoxOffscreen() {
    // multiply offset by 4
    txa();
    asl();
    asl();
    // use as offset here
    tay();
    lda(Imm(0xff));
    // load value into four locations here and leave
    sta(Abs(EnemyBoundingBoxCoord, y));
    sta(Abs(((EnemyBoundingBoxCoord) + (1)), y));
    sta(Abs(((EnemyBoundingBoxCoord) + (2)), y));
    sta(Abs(((EnemyBoundingBoxCoord) + (3)), y));
    return 0;
}

int BoundingBoxCore() {
    // save offset here
    stx(Abs(0x0));
    // store object coordinates relative to screen
    lda(Abs(SprObject_Rel_YPos, y));
    // vertically and horizontally, respectively
    sta(Abs(0x2));
    lda(Abs(SprObject_Rel_XPos, y));
    sta(Abs(0x1));
    // multiply offset by four and save to stack
    txa();
    asl();
    asl();
    pha();
    // use as offset for Y, X is left alone
    tay();
    // load value here to be used as offset for X
    lda(Abs(SprObj_BoundBoxCtrl, x));
    // multiply that by four and use as X
    asl();
    asl();
    tax();
    // add the first number in the bounding box data to the
    lda(Abs(0x1));
    // relative horizontal coordinate using enemy object offset
    clc();
    // and store somewhere using same offset * 4
    adc(Abs(offsetof(G, BoundBoxCtrlData), x));
    // store here
    sta(Abs(BoundingBox_UL_Corner, y));
    lda(Abs(0x1));
    clc();
    // add the third number in the bounding box data to the
    adc(Abs(((offsetof(G, BoundBoxCtrlData)) + (2)), x));
    // relative horizontal coordinate and store
    sta(Abs(BoundingBox_LR_Corner, y));
    // increment both offsets
    inx();
    iny();
    // add the second number to the relative vertical coordinate
    lda(Abs(0x2));
    // using incremented offset and store using the other
    clc();
    // incremented offset
    adc(Abs(offsetof(G, BoundBoxCtrlData), x));
    sta(Abs(BoundingBox_UL_Corner, y));
    lda(Abs(0x2));
    clc();
    // add the fourth number to the relative vertical coordinate
    adc(Abs(((offsetof(G, BoundBoxCtrlData)) + (2)), x));
    // and store
    sta(Abs(BoundingBox_LR_Corner, y));
    // get original offset loaded into $00 * y from stack
    pla();
    // use as Y
    tay();
    // get original offset and use as X again
    ldx(Abs(0x0));
    return 0;
}

int CheckRightScreenBBox() {
    // add 128 pixels to left side of screen
    lda(Abs(ScreenLeft_X_Pos));
    // and store as horizontal coordinate of middle
    clc();
    adc(Imm(0x80));
    sta(Abs(0x2));
    // add carry to page location of left side of screen
    lda(Abs(ScreenLeft_PageLoc));
    // and store as page location of middle
    adc(Imm(0x0));
    sta(Abs(0x1));
    // get horizontal coordinate
    lda(Abs(SprObject_X_Position, x));
    // compare against middle horizontal coordinate
    cmp(Abs(0x2));
    // get page location
    lda(Abs(SprObject_PageLoc, x));
    // subtract from middle page location
    sbc(Abs(0x1));
    // if object is on the left side of the screen, branch
    BCC(CheckLeftScreenBBox);
    // check right-side edge of bounding box for offscreen
    lda(Abs(BoundingBox_DR_XPos, y));
    // coordinates, branch if still on the screen
    BMI(NoOfs);
    // load offscreen value here to use on one or both horizontal sides
    lda(Imm(0xff));
    // check left-side edge of bounding box for offscreen
    ldx(Abs(BoundingBox_UL_XPos, y));
    // coordinates, and branch if still on the screen
    BMI(SORte);
    // store offscreen value for left side
    sta(Abs(BoundingBox_UL_XPos, y));
}

int SORte() {
    // store offscreen value for right side
    sta(Abs(BoundingBox_DR_XPos, y));
}

int NoOfs() {
    // get object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int CheckLeftScreenBBox() {
    // check left-side edge of bounding box for offscreen
    lda(Abs(BoundingBox_UL_XPos, y));
    // coordinates, and branch if still on the screen
    BPL(NoOfs2);
    // check to see if left-side edge is in the middle of the
    cmp(Imm(0xa0));
    // screen or really offscreen, and branch if still on
    BCC(NoOfs2);
    lda(Imm(0x0));
    // check right-side edge of bounding box for offscreen
    ldx(Abs(BoundingBox_DR_XPos, y));
    // coordinates, branch if still onscreen
    BPL(SOLft);
    // store offscreen value for right side
    sta(Abs(BoundingBox_DR_XPos, y));
}

int SOLft() {
    // store offscreen value for left side
    sta(Abs(BoundingBox_UL_XPos, y));
}

int NoOfs2() {
    // get object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int PlayerCollisionCore() {
    // initialize X to use player's bounding box for comparison
    ldx(Imm(0x0));
}

int SprObjectCollisionCore() {
    // save contents of Y here
    sty(Abs(0x6));
    lda(Imm(0x1));
    // save value 1 here as counter, compare horizontal coordinates first
    sta(Abs(0x7));
}

int CollisionCoreLoop() {
    // compare left/top coordinates
    lda(Abs(BoundingBox_UL_Corner, y));
    // of first and second objects' bounding boxes
    cmp(Abs(BoundingBox_UL_Corner, x));
    // if first left/top => second, branch
    BCS(FirstBoxGreater);
    // otherwise compare to right/bottom of second
    cmp(Abs(BoundingBox_LR_Corner, x));
    // if first left/top < second right/bottom, branch elsewhere
    BCC(SecondBoxVerticalChk);
    // if somehow equal, collision, thus branch
    BEQ(CollisionFound);
    // if somehow greater, check to see if bottom of
    lda(Abs(BoundingBox_LR_Corner, y));
    // first object's bounding box is greater than its top
    cmp(Abs(BoundingBox_UL_Corner, y));
    // if somehow less, vertical wrap collision, thus branch
    BCC(CollisionFound);
    // otherwise compare bottom of first bounding box to the top
    cmp(Abs(BoundingBox_UL_Corner, x));
    // of second box, and if equal or greater, collision, thus branch
    BCS(CollisionFound);
    // otherwise return with carry clear and Y = $0006
    ldy(Abs(0x6));
    // note horizontal wrapping never occurs
    return 0;
}

int SecondBoxVerticalChk() {
    // check to see if the vertical bottom of the box
    lda(Abs(BoundingBox_LR_Corner, x));
    // is greater than the vertical top
    cmp(Abs(BoundingBox_UL_Corner, x));
    // if somehow less, vertical wrap collision, thus branch
    BCC(CollisionFound);
    // otherwise compare horizontal right or vertical bottom
    lda(Abs(BoundingBox_LR_Corner, y));
    // of first box with horizontal left or vertical top of second box
    cmp(Abs(BoundingBox_UL_Corner, x));
    // if equal or greater, collision, thus branch
    BCS(CollisionFound);
    // otherwise return with carry clear and Y = $0006
    ldy(Abs(0x6));
    return 0;
}

int FirstBoxGreater() {
    // compare first and second box horizontal left/vertical top again
    cmp(Abs(BoundingBox_UL_Corner, x));
    // if first coordinate = second, collision, thus branch
    BEQ(CollisionFound);
    // if not, compare with second object right or bottom edge
    cmp(Abs(BoundingBox_LR_Corner, x));
    // if left/top of first less than or equal to right/bottom of second
    BCC(CollisionFound);
    // then collision, thus branch
    BEQ(CollisionFound);
    // otherwise check to see if top of first box is greater than bottom
    cmp(Abs(BoundingBox_LR_Corner, y));
    // if less than or equal, no collision, branch to end
    BCC(NoCollisionFound);
    BEQ(NoCollisionFound);
    // otherwise compare bottom of first to top of second
    lda(Abs(BoundingBox_LR_Corner, y));
    // if bottom of first is greater than top of second, vertical wrap
    cmp(Abs(BoundingBox_UL_Corner, x));
    // collision, and branch, otherwise, proceed onwards here
    BCS(CollisionFound);
}

int NoCollisionFound() {
    // clear carry, then load value set earlier, then leave
    clc();
    // like previous ones, if horizontal coordinates do not collide, we do
    ldy(Abs(0x6));
    // not bother checking vertical ones, because what's the point?
    return 0;
}

int CollisionFound() {
    // increment offsets on both objects to check
    inx();
    // the vertical coordinates
    iny();
    // decrement counter to reflect this
    dec(Abs(0x7));
    // if counter not expired, branch to loop
    BPL(CollisionCoreLoop);
    // otherwise we already did both sets, therefore collision, so set carry
    sec();
    // load original value set here earlier, then leave
    ldy(Abs(0x6));
    return 0;
}

int BlockBufferChk_Enemy() {
    // save contents of A to stack
    pha();
    txa();
    // add 1 to X to run sub with enemy offset in mind
    clc();
    adc(Imm(0x1));
    tax();
    // pull A from stack and jump elsewhere
    pla();
    JMP(BBChk_E);
}

int ResidualMiscObjectCode() {
    txa();
    // supposedly used once to set offset for
    clc();
    // miscellaneous objects
    adc(Imm(0xd));
    tax();
    // supposedly used once to set offset for block buffer data
    ldy(Imm(0x1b));
    // probably used in early stages to do misc to bg collision detection
    JMP(ResJmpM);
}

int BlockBufferChk_FBall() {
    // set offset for block buffer adder data
    ldy(Imm(0x1a));
    txa();
    clc();
    // add seven bytes to use
    adc(Imm(0x7));
    tax();
}

int ResJmpM() {
    // set A to return vertical coordinate
    lda(Imm(0x0));
}

int BBChk_E() {
    // do collision detection subroutine for sprite object
    JSR(BlockBufferCollision);
    // get object offset
    ldx(Abs(ObjectOffset));
    // check to see if object bumped into anything
    cmp(Imm(0x0));
    return 0;
}

int BlockBufferColli_Feet() {
    // if branched here, increment to next set of adders
    iny();
}

int BlockBufferColli_Head() {
    // set flag to return vertical coordinate
    lda(Imm(0x0));
}

int BlockBufferColli_Side() {
    // set flag to return horizontal coordinate
    lda(Imm(0x1));
    // set offset for player object
    ldx(Imm(0x0));
}

int BlockBufferCollision() {
    // save contents of A to stack
    pha();
    // save contents of Y here
    sty(Abs(0x4));
    // add horizontal coordinate
    lda(Abs(offsetof(G, BlockBuffer_X_Adder), y));
    // of object to value obtained using Y as offset
    clc();
    adc(Abs(SprObject_X_Position, x));
    // store here
    sta(Abs(0x5));
    lda(Abs(SprObject_PageLoc, x));
    // add carry to page location
    adc(Imm(0x0));
    // get LSB, mask out all other bits
    anda(Imm(0x1));
    // move to carry
    lsr();
    // get stored value
    ora(Abs(0x5));
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
    ldy(Abs(0x4));
    // get vertical coordinate of object
    lda(Abs(SprObject_Y_Position, x));
    clc();
    // add it to value obtained using Y as offset
    adc(Abs(offsetof(G, BlockBuffer_Y_Adder), y));
    // mask out low nybble
    anda(Imm(0b11110000));
    sec();
    // subtract 32 pixels for the status bar
    sbc(Imm(0x20));
    // store result here
    sta(Abs(0x2));
    // use as offset for block buffer
    tay();
    // check current content of block buffer
    lda(IndY((0x6)));
    // and store here
    sta(Abs(0x3));
    // get old contents of Y again
    ldy(Abs(0x4));
    // pull A from stack
    pla();
    // if A = 1, branch
    BNE(RetXC);
    // if A = 0, load vertical coordinate
    lda(Abs(SprObject_Y_Position, x));
    // and jump
    JMP(RetYC);
}

int RetXC() {
    // otherwise load horizontal coordinate
    lda(Abs(SprObject_X_Position, x));
}

int RetYC() {
    // and mask out high nybble
    anda(Imm(0b1111));
    // store masked out result here
    sta(Abs(0x4));
    // get saved content of block buffer
    lda(Abs(0x3));
    // and leave
    return 0;
}

int DrawVine() {
    // save offset here
    sty(Abs(0x0));
    // get relative vertical coordinate
    lda(Abs(Enemy_Rel_YPos));
    clc();
    // add value using offset in Y to get value
    adc(Abs(offsetof(G, VineYPosAdder), y));
    // get offset to vine
    ldx(Abs(VineObjOffset, y));
    // get sprite data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // store sprite data offset here
    sty(Abs(0x2));
    // stack six sprites on top of each other vertically
    JSR(SixSpriteStacker);
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    // store in first, third and fifth sprites
    sta(Abs(Sprite_X_Position, y));
    sta(Abs(((Sprite_X_Position) + (8)), y));
    sta(Abs(((Sprite_X_Position) + (16)), y));
    clc();
    // add six pixels to second, fourth and sixth sprites
    adc(Imm(0x6));
    // to give characteristic staggered vine shape to
    sta(Abs(((Sprite_X_Position) + (4)), y));
    // our vertical stack of sprites
    sta(Abs(((Sprite_X_Position) + (12)), y));
    sta(Abs(((Sprite_X_Position) + (20)), y));
    // set bg priority and palette attribute bits
    lda(Imm(0b100001));
    // set in first, third and fifth sprites
    sta(Abs(Sprite_Attributes, y));
    sta(Abs(((Sprite_Attributes) + (8)), y));
    sta(Abs(((Sprite_Attributes) + (16)), y));
    // additionally, set horizontal flip bit
    ora(Imm(0b1000000));
    // for second, fourth and sixth sprites
    sta(Abs(((Sprite_Attributes) + (4)), y));
    sta(Abs(((Sprite_Attributes) + (12)), y));
    sta(Abs(((Sprite_Attributes) + (20)), y));
    // set tiles for six sprites
    ldx(Imm(0x5));
}

int VineTL() {
    // set tile number for sprite
    lda(Imm(0xe1));
    sta(Abs(Sprite_Tilenumber, y));
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
    ldy(Abs(0x2));
    // get offset to vine adding data
    lda(Abs(0x0));
    // if offset not zero, skip this part
    BNE(SkpVTop);
    lda(Imm(0xe0));
    // set other tile number for top of vine
    sta(Abs(Sprite_Tilenumber, y));
}

int SkpVTop() {
    // start with the first sprite again
    ldx(Imm(0x0));
}

int ChkFTop() {
    // get original starting vertical coordinate
    lda(Abs(VineStart_Y_Position));
    sec();
    // subtract top-most sprite's Y coordinate
    sbc(Abs(Sprite_Y_Position, y));
    // if two coordinates are less than 100/$64 pixels
    cmp(Imm(0x64));
    // apart, skip this to leave sprite alone
    BCC(NextVSp);
    lda(Imm(0xf8));
    // otherwise move sprite offscreen
    sta(Abs(Sprite_Y_Position, y));
}

int NextVSp() {
    // move offset to next OAM data
    iny();
    iny();
    iny();
    iny();
    // move onto next sprite
    inx();
    // do this until all sprites are checked
    cpx(Imm(0x6));
    BNE(ChkFTop);
    // return offset set earlier
    ldy(Abs(0x0));
    return 0;
}

int SixSpriteStacker() {
    // do six sprites
    ldx(Imm(0x6));
}

int StkLp() {
    // store X or Y coordinate into OAM data
    sta(Abs(Sprite_Data, y));
    clc();
    // add eight pixels
    adc(Imm(0x8));
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
    ldy(Abs(0x2));
    return 0;
}

int DrawHammer() {
    // get misc object OAM data offset
    ldy(Abs(Misc_SprDataOffset, x));
    lda(Abs(TimerControl));
    // if master timer control set, skip this part
    BNE(ForceHPose);
    // otherwise get hammer's state
    lda(Abs(Misc_State, x));
    // mask out d7
    anda(Imm(0b1111111));
    // check to see if set to 1 yet
    cmp(Imm(0x1));
    // if so, branch
    BEQ(GetHPose);
}

int ForceHPose() {
    // reset offset here
    ldx(Imm(0x0));
    // do unconditional branch to rendering part
    BEQ(RenderH);
}

int GetHPose() {
    // get frame counter
    lda(Abs(FrameCounter));
    // move d3-d2 to d1-d0
    lsr();
    lsr();
    // mask out all but d1-d0 (changes every four frames)
    anda(Imm(0b11));
    // use as timing offset
    tax();
}

int RenderH() {
    // get relative vertical coordinate
    lda(Abs(Misc_Rel_YPos));
    clc();
    // add first sprite vertical adder based on offset
    adc(Abs(offsetof(G, FirstSprYPos), x));
    // store as sprite Y coordinate for first sprite
    sta(Abs(Sprite_Y_Position, y));
    clc();
    // add second sprite vertical adder based on offset
    adc(Abs(offsetof(G, SecondSprYPos), x));
    // store as sprite Y coordinate for second sprite
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    // get relative horizontal coordinate
    lda(Abs(Misc_Rel_XPos));
    clc();
    // add first sprite horizontal adder based on offset
    adc(Abs(offsetof(G, FirstSprXPos), x));
    // store as sprite X coordinate for first sprite
    sta(Abs(Sprite_X_Position, y));
    clc();
    // add second sprite horizontal adder based on offset
    adc(Abs(offsetof(G, SecondSprXPos), x));
    // store as sprite X coordinate for second sprite
    sta(Abs(((Sprite_X_Position) + (4)), y));
    lda(Abs(offsetof(G, FirstSprTilenum), x));
    // get and store tile number of first sprite
    sta(Abs(Sprite_Tilenumber, y));
    lda(Abs(offsetof(G, SecondSprTilenum), x));
    // get and store tile number of second sprite
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    lda(Abs(offsetof(G, HammerSprAttrib), x));
    // get and store attribute bytes for both
    sta(Abs(Sprite_Attributes, y));
    // note in this case they use the same data
    sta(Abs(((Sprite_Attributes) + (4)), y));
    // get misc object offset
    ldx(Abs(ObjectOffset));
    lda(Abs(Misc_OffscreenBits));
    // check offscreen bits
    anda(Imm(0b11111100));
    // if all bits clear, leave object alone
    BEQ(NoHOffscr);
    lda(Imm(0x0));
    // otherwise nullify misc object state
    sta(Abs(Misc_State, x));
    lda(Imm(0xf8));
    // do sub to move hammer sprites offscreen
    JSR(DumpTwoSpr);
}

int NoHOffscr() {
    // leave
    return 0;
}

int FlagpoleGfxHandler() {
    // get sprite data offset for flagpole flag
    ldy(Abs(Enemy_SprDataOffset, x));
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    // store as X coordinate for first sprite
    sta(Abs(Sprite_X_Position, y));
    clc();
    // add eight pixels and store
    adc(Imm(0x8));
    // as X coordinate for second and third sprites
    sta(Abs(((Sprite_X_Position) + (4)), y));
    sta(Abs(((Sprite_X_Position) + (8)), y));
    clc();
    // add twelve more pixels and
    adc(Imm(0xc));
    // store here to be used later by floatey number
    sta(Abs(0x5));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // and do sub to dump into first and second sprites
    JSR(DumpTwoSpr);
    // add eight pixels
    adc(Imm(0x8));
    // and store into third sprite
    sta(Abs(((Sprite_Y_Position) + (8)), y));
    // get vertical coordinate for floatey number
    lda(Abs(FlagpoleFNum_Y_Pos));
    // store it here
    sta(Abs(0x2));
    lda(Imm(0x1));
    // set value for flip which will not be used, and
    sta(Abs(0x3));
    // attribute byte for floatey number
    sta(Abs(0x4));
    // set attribute bytes for all three sprites
    sta(Abs(Sprite_Attributes, y));
    sta(Abs(((Sprite_Attributes) + (4)), y));
    sta(Abs(((Sprite_Attributes) + (8)), y));
    lda(Imm(0x7e));
    // put triangle shaped tile
    sta(Abs(Sprite_Tilenumber, y));
    // into first and third sprites
    sta(Abs(((Sprite_Tilenumber) + (8)), y));
    lda(Imm(0x7f));
    // put skull tile into second sprite
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    // get vertical coordinate at time of collision
    lda(Abs(FlagpoleCollisionYPos));
    // if zero, branch ahead
    BEQ(ChkFlagOffscreen);
    tya();
    // add 12 bytes to sprite data offset
    clc();
    adc(Imm(0xc));
    // put back in Y
    tay();
    // get offset used to award points for touching flagpole
    lda(Abs(FlagpoleScore));
    // multiply by 2 to get proper offset here
    asl();
    tax();
    // get appropriate tile data
    lda(Abs(offsetof(G, FlagpoleScoreNumTiles), x));
    sta(Abs(0x0));
    lda(Abs(((offsetof(G, FlagpoleScoreNumTiles)) + (1)), x));
    // use it to render floatey number
    JSR(DrawOneSpriteRow);
}

int ChkFlagOffscreen() {
    // get object offset for flag
    ldx(Abs(ObjectOffset));
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // get offscreen bits
    lda(Abs(Enemy_OffscreenBits));
    // mask out all but d3-d1
    anda(Imm(0b1110));
    // if none of these bits set, branch to leave
    BEQ(ExitDumpSpr);
}

int MoveSixSpritesOffscreen() {
    // set offscreen coordinate if jumping here
    lda(Imm(0xf8));
}

int DumpSixSpr() {
    // dump A contents
    sta(Abs(((Sprite_Data) + (20)), y));
    // into third row sprites
    sta(Abs(((Sprite_Data) + (16)), y));
}

int DumpFourSpr() {
    // into second row sprites
    sta(Abs(((Sprite_Data) + (12)), y));
}

int DumpThreeSpr() {
    sta(Abs(((Sprite_Data) + (8)), y));
}

int DumpTwoSpr() {
    // and into first row sprites
    sta(Abs(((Sprite_Data) + (4)), y));
    sta(Abs(Sprite_Data, y));
}

int ExitDumpSpr() {
    return 0;
}

int DrawLargePlatform() {
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // store here
    sty(Abs(0x2));
    // add 3 to it for offset
    iny();
    // to X coordinate
    iny();
    iny();
    // get horizontal relative coordinate
    lda(Abs(Enemy_Rel_XPos));
    // store X coordinates using A as base, stack horizontally
    JSR(SixSpriteStacker);
    ldx(Abs(ObjectOffset));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    // dump into first four sprites as Y coordinate
    JSR(DumpFourSpr);
    ldy(Abs(AreaType));
    // check for castle-type level
    cpy(Imm(0x3));
    BEQ(ShrinkPlatform);
    // check for secondary hard mode flag set
    ldy(Abs(SecondaryHardMode));
    // branch if not set elsewhere
    BEQ(SetLast2Platform);
}

int ShrinkPlatform() {
    // load offscreen coordinate if flag set or castle-type level
    lda(Imm(0xf8));
}

int SetLast2Platform() {
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // store vertical coordinate or offscreen
    sta(Abs(((Sprite_Y_Position) + (16)), y));
    // coordinate into last two sprites as Y coordinate
    sta(Abs(((Sprite_Y_Position) + (20)), y));
    // load default tile for platform (girder)
    lda(Imm(0x5b));
    ldx(Abs(CloudTypeOverride));
    // if cloud level override flag not set, use
    BEQ(SetPlatformTilenum);
    // otherwise load other tile for platform (puff)
    lda(Imm(0x75));
}

int SetPlatformTilenum() {
    // get enemy object buffer offset
    ldx(Abs(ObjectOffset));
    // increment Y for tile offset
    iny();
    // dump tile number into all six sprites
    JSR(DumpSixSpr);
    // set palette controls
    lda(Imm(0x2));
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
    ldy(Abs(Enemy_SprDataOffset, x));
    // rotate d7 into carry, save remaining
    asl();
    // bits to the stack
    pha();
    BCC(SChk2);
    // if d7 was set, move first sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(Sprite_Y_Position, y));
}

int SChk2() {
    // get bits from stack
    pla();
    // rotate d6 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk3);
    // if d6 was set, move second sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (4)), y));
}

int SChk3() {
    // get bits from stack
    pla();
    // rotate d5 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk4);
    // if d5 was set, move third sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (8)), y));
}

int SChk4() {
    // get bits from stack
    pla();
    // rotate d4 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk5);
    // if d4 was set, move fourth sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (12)), y));
}

int SChk5() {
    // get bits from stack
    pla();
    // rotate d3 into carry
    asl();
    // save to stack
    pha();
    BCC(SChk6);
    // if d3 was set, move fifth sprite offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (16)), y));
}

int SChk6() {
    // get bits from stack
    pla();
    // rotate d2 into carry
    asl();
    // save to stack
    BCC(SLChk);
    lda(Imm(0xf8));
    // if d2 was set, move sixth sprite offscreen
    sta(Abs(((Sprite_Y_Position) + (20)), y));
}

int SLChk() {
    // check d7 of offscreen bits
    lda(Abs(Enemy_OffscreenBits));
    // and if d7 is not set, skip sub
    asl();
    BCC(ExDLPl);
    // otherwise branch to move all sprites offscreen
    JSR(MoveSixSpritesOffscreen);
}

int ExDLPl() {
    return 0;
}

int DrawFloateyNumber_Coin() {
    // get frame counter
    lda(Abs(FrameCounter));
    // divide by 2
    lsr();
    // branch if d0 not set to raise number every other frame
    BCS(NotRsNum);
    // otherwise, decrement vertical coordinate
    dec(Abs(Misc_Y_Position, x));
}

int NotRsNum() {
    // get vertical coordinate
    lda(Abs(Misc_Y_Position, x));
    // dump into both sprites
    JSR(DumpTwoSpr);
    // get relative horizontal coordinate
    lda(Abs(Misc_Rel_XPos));
    // store as X coordinate for first sprite
    sta(Abs(Sprite_X_Position, y));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // store as X coordinate for second sprite
    sta(Abs(((Sprite_X_Position) + (4)), y));
    lda(Imm(0x2));
    // store attribute byte in both sprites
    sta(Abs(Sprite_Attributes, y));
    sta(Abs(((Sprite_Attributes) + (4)), y));
    lda(Imm(0xf7));
    // put tile numbers into both sprites
    sta(Abs(Sprite_Tilenumber, y));
    // that resemble "200"
    lda(Imm(0xfb));
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    // then jump to leave (why not an rts here instead?)
    JMP(ExJCGfx);
}

int JCoinGfxHandler() {
    // get coin/floatey number's OAM data offset
    ldy(Abs(Misc_SprDataOffset, x));
    // get state of misc object
    lda(Abs(Misc_State, x));
    // if 2 or greater,
    cmp(Imm(0x2));
    // branch to draw floatey number
    BCS(DrawFloateyNumber_Coin);
    // store vertical coordinate as
    lda(Abs(Misc_Y_Position, x));
    // Y coordinate for first sprite
    sta(Abs(Sprite_Y_Position, y));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // store as Y coordinate for second sprite
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    // get relative horizontal coordinate
    lda(Abs(Misc_Rel_XPos));
    sta(Abs(Sprite_X_Position, y));
    // store as X coordinate for first and second sprites
    sta(Abs(((Sprite_X_Position) + (4)), y));
    // get frame counter
    lda(Abs(FrameCounter));
    // divide by 2 to alter every other frame
    lsr();
    // mask out d2-d1
    anda(Imm(0b11));
    // use as graphical offset
    tax();
    // load tile number
    lda(Abs(offsetof(G, JumpingCoinTiles), x));
    // increment OAM data offset to write tile numbers
    iny();
    // do sub to dump tile number into both sprites
    JSR(DumpTwoSpr);
    // decrement to get old offset
    dey();
    lda(Imm(0x2));
    // set attribute byte in first sprite
    sta(Abs(Sprite_Attributes, y));
    lda(Imm(0x82));
    // set attribute byte with vertical flip in second sprite
    sta(Abs(((Sprite_Attributes) + (4)), y));
    // get misc object offset
    ldx(Abs(ObjectOffset));
}

int ExJCGfx() {
    // leave
    return 0;
}

int DrawPowerUp() {
    // get power-up's sprite data offset
    ldy(Abs(((Enemy_SprDataOffset) + (5))));
    // get relative vertical coordinate
    lda(Abs(Enemy_Rel_YPos));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // store result here
    sta(Abs(0x2));
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    // store here
    sta(Abs(0x5));
    // get power-up type
    ldx(Abs(PowerUpType));
    // get attribute data for power-up type
    lda(Abs(offsetof(G, PowerUpAttributes), x));
    // add background priority bit if set
    ora(Abs(((Enemy_SprAttrib) + (5))));
    // store attributes here
    sta(Abs(0x4));
    txa();
    // save power-up type to the stack
    pha();
    asl();
    // multiply by four to get proper offset
    asl();
    // use as X
    tax();
    lda(Imm(0x1));
    // set counter here to draw two rows of sprite object
    sta(Abs(0x7));
    // init d1 of flip control
    sta(Abs(0x3));
}

int PUpDrawLoop() {
    // load left tile of power-up object
    lda(Abs(offsetof(G, PowerUpGfxTable), x));
    sta(Abs(0x0));
    // load right tile
    lda(Abs(((offsetof(G, PowerUpGfxTable)) + (1)), x));
    // branch to draw one row of our power-up object
    JSR(DrawOneSpriteRow);
    // decrement counter
    dec(Abs(0x7));
    // branch until two rows are drawn
    BPL(PUpDrawLoop);
    // get sprite data offset again
    ldy(Abs(((Enemy_SprDataOffset) + (5))));
    // pull saved power-up type from the stack
    pla();
    // if regular mushroom, branch, do not change colors or flip
    BEQ(PUpOfs);
    cmp(Imm(0x3));
    // if 1-up mushroom, branch, do not change colors or flip
    BEQ(PUpOfs);
    // store power-up type here now
    sta(Abs(0x0));
    // get frame counter
    lda(Abs(FrameCounter));
    // divide by 2 to change colors every two frames
    lsr();
    // mask out all but d1 and d0 (previously d2 and d1)
    anda(Imm(0b11));
    // add background priority bit if any set
    ora(Abs(((Enemy_SprAttrib) + (5))));
    // set as new palette bits for top left and
    sta(Abs(Sprite_Attributes, y));
    // top right sprites for fire flower and star
    sta(Abs(((Sprite_Attributes) + (4)), y));
    ldx(Abs(0x0));
    // check power-up type for fire flower
    dex();
    // if found, skip this part
    BEQ(FlipPUpRightSide);
    // otherwise set new palette bits  for bottom left
    sta(Abs(((Sprite_Attributes) + (8)), y));
    // and bottom right sprites as well for star only
    sta(Abs(((Sprite_Attributes) + (12)), y));
}

int FlipPUpRightSide() {
    lda(Abs(((Sprite_Attributes) + (4)), y));
    // set horizontal flip bit for top right sprite
    ora(Imm(0b1000000));
    sta(Abs(((Sprite_Attributes) + (4)), y));
    lda(Abs(((Sprite_Attributes) + (12)), y));
    // set horizontal flip bit for bottom right sprite
    ora(Imm(0b1000000));
    // note these are only done for fire flower and star power-ups
    sta(Abs(((Sprite_Attributes) + (12)), y));
}

int PUpOfs() {
    // jump to check to see if power-up is offscreen at all, then leave
    JMP(SprObjectOffscrChk);
}

int EnemyGfxHandler() {
    // get enemy object vertical position
    lda(Abs(Enemy_Y_Position, x));
    sta(Abs(0x2));
    // get enemy object horizontal position
    lda(Abs(Enemy_Rel_XPos));
    // relative to screen
    sta(Abs(0x5));
    ldy(Abs(Enemy_SprDataOffset, x));
    // get sprite data offset
    sty(Abs(0xeb));
    lda(Imm(0x0));
    // initialize vertical flip flag by default
    sta(Abs(VerticalFlipFlag));
    lda(Abs(Enemy_MovingDir, x));
    // get enemy object moving direction
    sta(Abs(0x3));
    lda(Abs(Enemy_SprAttrib, x));
    // get enemy object sprite attributes
    sta(Abs(0x4));
    lda(Abs(Enemy_ID, x));
    // is enemy object piranha plant?
    cmp(Imm(PiranhaPlant));
    // if not, branch
    BNE(CheckForRetainerObj);
    ldy(Abs(PiranhaPlant_Y_Speed, x));
    // if piranha plant moving upwards, branch
    BMI(CheckForRetainerObj);
    ldy(Abs(EnemyFrameTimer, x));
    // if timer for movement expired, branch
    BEQ(CheckForRetainerObj);
    // if all conditions fail, leave
    return 0;
}

int CheckForRetainerObj() {
    // store enemy state
    lda(Abs(Enemy_State, x));
    sta(Abs(0xed));
    // nullify all but 5 LSB and use as Y
    anda(Imm(0b11111));
    tay();
    // check for mushroom retainer/princess object
    lda(Abs(Enemy_ID, x));
    cmp(Imm(RetainerObject));
    // if not found, branch
    BNE(CheckForBulletBillCV);
    // if found, nullify saved state in Y
    ldy(Imm(0x0));
    // set value that will not be used
    lda(Imm(0x1));
    sta(Abs(0x3));
    // set value $15 as code for mushroom retainer/princess object
    lda(Imm(0x15));
}

int CheckForBulletBillCV() {
    // otherwise check for bullet bill object
    cmp(Imm(BulletBill_CannonVar));
    // if not found, branch again
    BNE(CheckForJumpspring);
    // decrement saved vertical position
    dec(Abs(0x2));
    lda(Imm(0x3));
    // get timer for enemy object
    ldy(Abs(EnemyFrameTimer, x));
    // if expired, do not set priority bit
    BEQ(SBBAt);
    // otherwise do so
    ora(Imm(0b100000));
}

int SBBAt() {
    // set new sprite attributes
    sta(Abs(0x4));
    // nullify saved enemy state both in Y and in
    ldy(Imm(0x0));
    // memory location here
    sty(Abs(0xed));
    // set specific value to unconditionally branch once
    lda(Imm(0x8));
}

int CheckForJumpspring() {
    // check for jumpspring object
    cmp(Imm(JumpspringObject));
    BNE(CheckForPodoboo);
    // set enemy state -2 MSB here for jumpspring object
    ldy(Imm(0x3));
    // get current frame number for jumpspring object
    ldx(Abs(JumpspringAnimCtrl));
    // load data using frame number as offset
    lda(Abs(offsetof(G, JumpspringFrameOffsets), x));
}

int CheckForPodoboo() {
    // store saved enemy object value here
    sta(Abs(0xef));
    // and Y here (enemy state -2 MSB if not changed)
    sty(Abs(0xec));
    // get enemy object offset
    ldx(Abs(ObjectOffset));
    // check for podoboo object
    cmp(Imm(0xc));
    // branch if not found
    BNE(CheckBowserGfxFlag);
    // if moving upwards, branch
    lda(Abs(Enemy_Y_Speed, x));
    BMI(CheckBowserGfxFlag);
    // otherwise, set flag for vertical flip
    inc(Abs(VerticalFlipFlag));
}

int CheckBowserGfxFlag() {
    // if not drawing bowser at all, skip to something else
    lda(Abs(BowserGfxFlag));
    BEQ(CheckForGoomba);
    // if set to 1, draw bowser's front
    ldy(Imm(0x16));
    cmp(Imm(0x1));
    BEQ(SBwsrGfxOfs);
    // otherwise draw bowser's rear
    iny();
}

int SBwsrGfxOfs() {
    sty(Abs(0xef));
}

int CheckForGoomba() {
    // check value for goomba object
    ldy(Abs(0xef));
    cpy(Imm(Goomba));
    // branch if not found
    BNE(CheckBowserFront);
    lda(Abs(Enemy_State, x));
    // check for defeated state
    cmp(Imm(0x2));
    // if not defeated, go ahead and animate
    BCC(GmbaAnim);
    // if defeated, write new value here
    ldx(Imm(0x4));
    stx(Abs(0xec));
}

int GmbaAnim() {
    // check for d5 set in enemy object state
    anda(Imm(0b100000));
    // or timer disable flag set
    ora(Abs(TimerControl));
    // if either condition true, do not animate goomba
    BNE(CheckBowserFront);
    lda(Abs(FrameCounter));
    // check for every eighth frame
    anda(Imm(0b1000));
    BNE(CheckBowserFront);
    lda(Abs(0x3));
    // invert bits to flip horizontally every eight frames
    eor(Imm(0b11));
    // leave alone otherwise
    sta(Abs(0x3));
}

int CheckBowserFront() {
    // load sprite attribute using enemy object
    lda(Abs(offsetof(G, EnemyAttributeData), y));
    // as offset, and add to bits already loaded
    ora(Abs(0x4));
    sta(Abs(0x4));
    // load value based on enemy object as offset
    lda(Abs(offsetof(G, EnemyGfxTableOffsets), y));
    // save as X
    tax();
    // get previously saved value
    ldy(Abs(0xec));
    lda(Abs(BowserGfxFlag));
    // if not drawing bowser object at all, skip all of this
    BEQ(CheckForSpiny);
    cmp(Imm(0x1));
    // if not drawing front part, branch to draw the rear part
    BNE(CheckBowserRear);
    // check bowser's body control bits
    lda(Abs(BowserBodyControls));
    // branch if d7 not set (control's bowser's mouth)
    BPL(ChkFrontSte);
    // otherwise load offset for second frame
    ldx(Imm(0xde));
}

int ChkFrontSte() {
    // check saved enemy state
    lda(Abs(0xed));
    // if bowser not defeated, do not set flag
    anda(Imm(0b100000));
    BEQ(DrawBowser);
}

int FlipBowserOver() {
    // set vertical flip flag to nonzero
    stx(Abs(VerticalFlipFlag));
}

int DrawBowser() {
    // draw bowser's graphics now
    JMP(DrawEnemyObject);
}

int CheckBowserRear() {
    // check bowser's body control bits
    lda(Abs(BowserBodyControls));
    anda(Imm(0x1));
    // branch if d0 not set (control's bowser's feet)
    BEQ(ChkRearSte);
    // otherwise load offset for second frame
    ldx(Imm(0xe4));
}

int ChkRearSte() {
    // check saved enemy state
    lda(Abs(0xed));
    // if bowser not defeated, do not set flag
    anda(Imm(0b100000));
    BEQ(DrawBowser);
    // subtract 16 pixels from
    lda(Abs(0x2));
    // saved vertical coordinate
    sec();
    sbc(Imm(0x10));
    sta(Abs(0x2));
    // jump to set vertical flip flag
    JMP(FlipBowserOver);
}

int CheckForSpiny() {
    // check if value loaded is for spiny
    cpx(Imm(0x24));
    // if not found, branch
    BNE(CheckForLakitu);
    // if enemy state set to $05, do this,
    cpy(Imm(0x5));
    // otherwise branch
    BNE(NotEgg);
    // set to spiny egg offset
    ldx(Imm(0x30));
    lda(Imm(0x2));
    // set enemy direction to reverse sprites horizontally
    sta(Abs(0x3));
    lda(Imm(0x5));
    // set enemy state
    sta(Abs(0xec));
}

int NotEgg() {
    // skip a big chunk of this if we found spiny but not in egg
    JMP(CheckForHammerBro);
}

int CheckForLakitu() {
    // check value for lakitu's offset loaded
    cpx(Imm(0x90));
    // branch if not loaded
    BNE(CheckUpsideDownShell);
    lda(Abs(0xed));
    // check for d5 set in enemy state
    anda(Imm(0b100000));
    // branch if set
    BNE(NoLAFr);
    lda(Abs(FrenzyEnemyTimer));
    // check timer to see if we've reached a certain range
    cmp(Imm(0x10));
    // branch if not
    BCS(NoLAFr);
    // if d6 not set and timer in range, load alt frame for lakitu
    ldx(Imm(0x96));
}

int NoLAFr() {
    // skip this next part if we found lakitu but alt frame not needed
    JMP(CheckDefeatedState);
}

int CheckUpsideDownShell() {
    // check for enemy object => $04
    lda(Abs(0xef));
    cmp(Imm(0x4));
    // branch if true
    BCS(CheckRightSideUpShell);
    cpy(Imm(0x2));
    // branch if enemy state < $02
    BCC(CheckRightSideUpShell);
    // set for upside-down koopa shell by default
    ldx(Imm(0x5a));
    ldy(Abs(0xef));
    // check for buzzy beetle object
    cpy(Imm(BuzzyBeetle));
    BNE(CheckRightSideUpShell);
    // set for upside-down buzzy beetle shell if found
    ldx(Imm(0x7e));
    // increment vertical position by one pixel
    inc(Abs(0x2));
}

int CheckRightSideUpShell() {
    // check for value set here
    lda(Abs(0xec));
    // if enemy state < $02, do not change to shell, if
    cmp(Imm(0x4));
    // enemy state => $02 but not = $04, leave shell upside-down
    BNE(CheckForHammerBro);
    // set right-side up buzzy beetle shell by default
    ldx(Imm(0x72));
    // increment saved vertical position by one pixel
    inc(Abs(0x2));
    ldy(Abs(0xef));
    // check for buzzy beetle object
    cpy(Imm(BuzzyBeetle));
    // branch if found
    BEQ(CheckForDefdGoomba);
    // change to right-side up koopa shell if not found
    ldx(Imm(0x66));
    // and increment saved vertical position again
    inc(Abs(0x2));
}

int CheckForDefdGoomba() {
    // check for goomba object (necessary if previously
    cpy(Imm(Goomba));
    // failed buzzy beetle object test)
    BNE(CheckForHammerBro);
    // load for regular goomba
    ldx(Imm(0x54));
    // note that this only gets performed if enemy state => $02
    lda(Abs(0xed));
    // check saved enemy state for d5 set
    anda(Imm(0b100000));
    // branch if set
    BNE(CheckForHammerBro);
    // load offset for defeated goomba
    ldx(Imm(0x8a));
    // set different value and decrement saved vertical position
    dec(Abs(0x2));
}

int CheckForHammerBro() {
    ldy(Abs(ObjectOffset));
    // check for hammer bro object
    lda(Abs(0xef));
    cmp(Imm(HammerBro));
    // branch if not found
    BNE(CheckForBloober);
    lda(Abs(0xed));
    // branch if not in normal enemy state
    BEQ(CheckToAnimateEnemy);
    anda(Imm(0b1000));
    // if d3 not set, branch further away
    BEQ(CheckDefeatedState);
    // otherwise load offset for different frame
    ldx(Imm(0xb4));
    // unconditional branch
    BNE(CheckToAnimateEnemy);
}

int CheckForBloober() {
    // check for cheep-cheep offset loaded
    cpx(Imm(0x48));
    // branch if found
    BEQ(CheckToAnimateEnemy);
    lda(Abs(EnemyIntervalTimer, y));
    cmp(Imm(0x5));
    // branch if some timer is above a certain point
    BCS(CheckDefeatedState);
    // check for bloober offset loaded
    cpx(Imm(0x3c));
    // branch if not found this time
    BNE(CheckToAnimateEnemy);
    cmp(Imm(0x1));
    // branch if timer is set to certain point
    BEQ(CheckDefeatedState);
    // increment saved vertical coordinate three pixels
    inc(Abs(0x2));
    inc(Abs(0x2));
    inc(Abs(0x2));
    // and do something else
    JMP(CheckAnimationStop);
}

int CheckToAnimateEnemy() {
    // check for specific enemy objects
    lda(Abs(0xef));
    cmp(Imm(Goomba));
    // branch if goomba
    BEQ(CheckDefeatedState);
    cmp(Imm(0x8));
    // branch if bullet bill (note both variants use $08 here)
    BEQ(CheckDefeatedState);
    cmp(Imm(Podoboo));
    // branch if podoboo
    BEQ(CheckDefeatedState);
    // branch if => $18
    cmp(Imm(0x18));
    BCS(CheckDefeatedState);
    ldy(Imm(0x0));
    // check for mushroom retainer/princess object
    cmp(Imm(0x15));
    // which uses different code here, branch if not found
    BNE(CheckForSecondFrame);
    // residual instruction
    iny();
    // are we on world 8?
    lda(Abs(WorldNumber));
    cmp(Imm(World8));
    // if so, leave the offset alone (use princess)
    BCS(CheckDefeatedState);
    // otherwise, set for mushroom retainer object instead
    ldx(Imm(0xa2));
    // set alternate state here
    lda(Imm(0x3));
    sta(Abs(0xec));
    // unconditional branch
    BNE(CheckDefeatedState);
}

int CheckForSecondFrame() {
    // load frame counter
    lda(Abs(FrameCounter));
    // mask it (partly residual, one byte not ever used)
    anda(Abs(offsetof(G, EnemyAnimTimingBMask), y));
    // branch if timing is off
    BNE(CheckDefeatedState);
}

int CheckAnimationStop() {
    // check saved enemy state
    lda(Abs(0xed));
    // for d7 or d5, or check for timers stopped
    anda(Imm(0b10100000));
    ora(Abs(TimerControl));
    // if either condition true, branch
    BNE(CheckDefeatedState);
    txa();
    clc();
    // add $06 to current enemy offset
    adc(Imm(0x6));
    // to animate various enemy objects
    tax();
}

int CheckDefeatedState() {
    // check saved enemy state
    lda(Abs(0xed));
    // for d5 set
    anda(Imm(0b100000));
    // branch if not set
    BEQ(DrawEnemyObject);
    lda(Abs(0xef));
    // check for saved enemy object => $04
    cmp(Imm(0x4));
    // branch if less
    BCC(DrawEnemyObject);
    ldy(Imm(0x1));
    // set vertical flip flag
    sty(Abs(VerticalFlipFlag));
    dey();
    // init saved value here
    sty(Abs(0xec));
}

int DrawEnemyObject() {
    // load sprite data offset
    ldy(Abs(0xeb));
    // draw six tiles of data
    JSR(DrawEnemyObjRow);
    // into sprite data
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // get enemy object offset
    ldx(Abs(ObjectOffset));
    // get sprite data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    lda(Abs(0xef));
    // get saved enemy object and check
    cmp(Imm(0x8));
    // for bullet bill, branch if not found
    BNE(CheckForVerticalFlip);
}

int SkipToOffScrChk() {
    // jump if found
    JMP(SprObjectOffscrChk);
}

int CheckForVerticalFlip() {
    // check if vertical flip flag is set here
    lda(Abs(VerticalFlipFlag));
    // branch if not
    BEQ(CheckForESymmetry);
    // get attributes of first sprite we dealt with
    lda(Abs(Sprite_Attributes, y));
    // set bit for vertical flip
    ora(Imm(0b10000000));
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
    lda(Abs(0xef));
    // check saved enemy object for hammer bro
    cmp(Imm(HammerBro));
    BEQ(FlipEnemyVertically);
    // check saved enemy object for lakitu
    cmp(Imm(Lakitu));
    // branch for hammer bro or lakitu
    BEQ(FlipEnemyVertically);
    cmp(Imm(0x15));
    // also branch if enemy object => $15
    BCS(FlipEnemyVertically);
    txa();
    clc();
    // if not selected objects or => $15, set
    adc(Imm(0x8));
    // offset in X for next row
    tax();
}

int FlipEnemyVertically() {
    // load first or second row tiles
    lda(Abs(Sprite_Tilenumber, x));
    // and save tiles to the stack
    pha();
    lda(Abs(((Sprite_Tilenumber) + (4)), x));
    pha();
    // exchange third row tiles
    lda(Abs(((Sprite_Tilenumber) + (16)), y));
    // with first or second row tiles
    sta(Abs(Sprite_Tilenumber, x));
    lda(Abs(((Sprite_Tilenumber) + (20)), y));
    sta(Abs(((Sprite_Tilenumber) + (4)), x));
    // pull first or second row tiles from stack
    pla();
    // and save in third row
    sta(Abs(((Sprite_Tilenumber) + (20)), y));
    pla();
    sta(Abs(((Sprite_Tilenumber) + (16)), y));
}

int CheckForESymmetry() {
    // are we drawing bowser at all?
    lda(Abs(BowserGfxFlag));
    // branch if so
    BNE(SkipToOffScrChk);
    lda(Abs(0xef));
    // get alternate enemy state
    ldx(Abs(0xec));
    // check for hammer bro object
    cmp(Imm(0x5));
    BNE(ContES);
    // jump if found
    JMP(SprObjectOffscrChk);
}

int ContES() {
    // check for bloober object
    cmp(Imm(Bloober));
    BEQ(MirrorEnemyGfx);
    // check for piranha plant object
    cmp(Imm(PiranhaPlant));
    BEQ(MirrorEnemyGfx);
    // check for podoboo object
    cmp(Imm(Podoboo));
    // branch if either of three are found
    BEQ(MirrorEnemyGfx);
    // check for spiny object
    cmp(Imm(Spiny));
    // branch closer if not found
    BNE(ESRtnr);
    // check spiny's state
    cpx(Imm(0x5));
    // branch if not an egg, otherwise
    BNE(CheckToMirrorLakitu);
}

int ESRtnr() {
    // check for princess/mushroom retainer object
    cmp(Imm(0x15));
    BNE(SpnySC);
    // set horizontal flip on bottom right sprite
    lda(Imm(0x42));
    // note that palette bits were already set earlier
    sta(Abs(((Sprite_Attributes) + (20)), y));
}

int SpnySC() {
    // if alternate enemy state set to 1 or 0, branch
    cpx(Imm(0x2));
    BCC(CheckToMirrorLakitu);
}

int MirrorEnemyGfx() {
    // if enemy object is bowser, skip all of this
    lda(Abs(BowserGfxFlag));
    BNE(CheckToMirrorLakitu);
    // load attribute bits of first sprite
    lda(Abs(Sprite_Attributes, y));
    anda(Imm(0b10100011));
    // save vertical flip, priority, and palette bits
    sta(Abs(Sprite_Attributes, y));
    // in left sprite column of enemy object OAM data
    sta(Abs(((Sprite_Attributes) + (8)), y));
    sta(Abs(((Sprite_Attributes) + (16)), y));
    // set horizontal flip
    ora(Imm(0b1000000));
    // check for state used by spiny's egg
    cpx(Imm(0x5));
    // if alternate state not set to $05, branch
    BNE(EggExc);
    // otherwise set vertical flip
    ora(Imm(0b10000000));
}

int EggExc() {
    // set bits of right sprite column
    sta(Abs(((Sprite_Attributes) + (4)), y));
    // of enemy object sprite data
    sta(Abs(((Sprite_Attributes) + (12)), y));
    sta(Abs(((Sprite_Attributes) + (20)), y));
    // check alternate enemy state
    cpx(Imm(0x4));
    // branch if not $04
    BNE(CheckToMirrorLakitu);
    // get second row left sprite attributes
    lda(Abs(((Sprite_Attributes) + (8)), y));
    ora(Imm(0b10000000));
    // store bits with vertical flip in
    sta(Abs(((Sprite_Attributes) + (8)), y));
    // second and third row left sprites
    sta(Abs(((Sprite_Attributes) + (16)), y));
    ora(Imm(0b1000000));
    // store with horizontal and vertical flip in
    sta(Abs(((Sprite_Attributes) + (12)), y));
    // second and third row right sprites
    sta(Abs(((Sprite_Attributes) + (20)), y));
}

int CheckToMirrorLakitu() {
    // check for lakitu enemy object
    lda(Abs(0xef));
    cmp(Imm(Lakitu));
    // branch if not found
    BNE(CheckToMirrorJSpring);
    lda(Abs(VerticalFlipFlag));
    // branch if vertical flip flag not set
    BNE(NVFLak);
    // save vertical flip and palette bits
    lda(Abs(((Sprite_Attributes) + (16)), y));
    // in third row left sprite
    anda(Imm(0b10000001));
    sta(Abs(((Sprite_Attributes) + (16)), y));
    // set horizontal flip and palette bits
    lda(Abs(((Sprite_Attributes) + (20)), y));
    // in third row right sprite
    ora(Imm(0b1000001));
    sta(Abs(((Sprite_Attributes) + (20)), y));
    // check timer
    ldx(Abs(FrenzyEnemyTimer));
    cpx(Imm(0x10));
    // branch if timer has not reached a certain range
    BCS(SprObjectOffscrChk);
    // otherwise set same for second row right sprite
    sta(Abs(((Sprite_Attributes) + (12)), y));
    anda(Imm(0b10000001));
    // preserve vertical flip and palette bits for left sprite
    sta(Abs(((Sprite_Attributes) + (8)), y));
    // unconditional branch
    BCC(SprObjectOffscrChk);
}

int NVFLak() {
    // get first row left sprite attributes
    lda(Abs(Sprite_Attributes, y));
    anda(Imm(0b10000001));
    // save vertical flip and palette bits
    sta(Abs(Sprite_Attributes, y));
    // get first row right sprite attributes
    lda(Abs(((Sprite_Attributes) + (4)), y));
    // set horizontal flip and palette bits
    ora(Imm(0b1000001));
    // note that vertical flip is left as-is
    sta(Abs(((Sprite_Attributes) + (4)), y));
}

int CheckToMirrorJSpring() {
    // check for jumpspring object (any frame)
    lda(Abs(0xef));
    cmp(Imm(0x18));
    // branch if not jumpspring object at all
    BCC(SprObjectOffscrChk);
    lda(Imm(0x82));
    // set vertical flip and palette bits of
    sta(Abs(((Sprite_Attributes) + (8)), y));
    // second and third row left sprites
    sta(Abs(((Sprite_Attributes) + (16)), y));
    ora(Imm(0b1000000));
    // set, in addition to those, horizontal flip
    sta(Abs(((Sprite_Attributes) + (12)), y));
    // for second and third row right sprites
    sta(Abs(((Sprite_Attributes) + (20)), y));
}

int SprObjectOffscrChk() {
    // get enemy buffer offset
    ldx(Abs(ObjectOffset));
    // check offscreen information
    lda(Abs(Enemy_OffscreenBits));
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
    lda(Imm(0x4));
    // and move them offscreen
    JSR(MoveESprColOffscreen);
}

int LcChk() {
    // get from stack
    pla();
    // move d3 to carry
    lsr();
    // save to stack
    pha();
    // branch if not set
    BCC(Row3C);
    // set for left column sprites,
    lda(Imm(0x0));
    // move them offscreen
    JSR(MoveESprColOffscreen);
}

int Row3C() {
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
    lda(Imm(0x10));
    // and move them offscreen
    JSR(MoveESprRowOffscreen);
}

int Row23C() {
    // get from stack
    pla();
    // move d6 into carry
    lsr();
    // save to stack
    pha();
    BCC(AllRowC);
    // set for second and third rows
    lda(Imm(0x8));
    // move them offscreen
    JSR(MoveESprRowOffscreen);
}

int AllRowC() {
    // get from stack once more
    pla();
    // move d7 into carry
    lsr();
    BCC(ExEGHandler);
    // move all sprites offscreen (A should be 0 by now)
    JSR(MoveESprRowOffscreen);
    lda(Abs(Enemy_ID, x));
    // check enemy identifier for podoboo
    cmp(Imm(Podoboo));
    // skip this part if found, we do not want to erase podoboo!
    BEQ(ExEGHandler);
    // check high byte of vertical position
    lda(Abs(Enemy_Y_HighPos, x));
    // if not yet past the bottom of the screen, branch
    cmp(Imm(0x2));
    BNE(ExEGHandler);
    // what it says
    JSR(EraseEnemyObject);
}

int ExEGHandler() {
    return 0;
}

int DrawEnemyObjRow() {
    // load two tiles of enemy graphics
    lda(Abs(offsetof(G, EnemyGraphicsTable), x));
    sta(Abs(0x0));
    lda(Abs(((offsetof(G, EnemyGraphicsTable)) + (1)), x));
}

int DrawOneSpriteRow() {
    sta(Abs(0x1));
    // draw them
    JMP(DrawSpriteObject);
}

int MoveESprRowOffscreen() {
    // add A to enemy object OAM data offset
    clc();
    adc(Abs(Enemy_SprDataOffset, x));
    // use as offset
    tay();
    lda(Imm(0xf8));
    // move first row of sprites offscreen
    JMP(DumpTwoSpr);
}

int MoveESprColOffscreen() {
    // add A to enemy object OAM data offset
    clc();
    adc(Abs(Enemy_SprDataOffset, x));
    // use as offset
    tay();
    // move first and second row sprites in column offscreen
    JSR(MoveColOffscreen);
    // move third row sprite in column offscreen
    sta(Abs(((Sprite_Data) + (16)), y));
    return 0;
}

int DrawBlock() {
    // get relative vertical coordinate of block object
    lda(Abs(Block_Rel_YPos));
    // store here
    sta(Abs(0x2));
    // get relative horizontal coordinate of block object
    lda(Abs(Block_Rel_XPos));
    // store here
    sta(Abs(0x5));
    lda(Imm(0x3));
    // set attribute byte here
    sta(Abs(0x4));
    lsr();
    // set horizontal flip bit here (will not be used)
    sta(Abs(0x3));
    // get sprite data offset
    ldy(Abs(Block_SprDataOffset, x));
    // reset X for use as offset to tile data
    ldx(Imm(0x0));
}

int DBlkLoop() {
    // get left tile number
    lda(Abs(offsetof(G, DefaultBlockObjTiles), x));
    // set here
    sta(Abs(0x0));
    // get right tile number
    lda(Abs(((offsetof(G, DefaultBlockObjTiles)) + (1)), x));
    // do sub to write tile numbers to first row of sprites
    JSR(DrawOneSpriteRow);
    // check incremented offset
    cpx(Imm(0x4));
    // and loop back until all four sprites are done
    BNE(DBlkLoop);
    // get block object offset
    ldx(Abs(ObjectOffset));
    // get sprite data offset
    ldy(Abs(Block_SprDataOffset, x));
    lda(Abs(AreaType));
    // check for ground level type area
    cmp(Imm(0x1));
    // if found, branch to next part
    BEQ(ChkRep);
    lda(Imm(0x86));
    // otherwise remove brick tiles with lines
    sta(Abs(Sprite_Tilenumber, y));
    // and replace then with lineless brick tiles
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
}

int ChkRep() {
    // check replacement metatile
    lda(Abs(Block_Metatile, x));
    // if not used block metatile, then
    cmp(Imm(0xc4));
    // branch ahead to use current graphics
    BNE(BlkOffscr);
    // set A for used block tile
    lda(Imm(0x87));
    // increment Y to write to tile bytes
    iny();
    // do sub to dump into all four sprites
    JSR(DumpFourSpr);
    // return Y to original offset
    dey();
    // set palette bits
    lda(Imm(0x3));
    ldx(Abs(AreaType));
    // check for ground level type area again
    dex();
    // if found, use current palette bits
    BEQ(SetBFlip);
    // otherwise set to $01
    lsr();
}

int SetBFlip() {
    // put block object offset back in X
    ldx(Abs(ObjectOffset));
    // store attribute byte as-is in first sprite
    sta(Abs(Sprite_Attributes, y));
    ora(Imm(0b1000000));
    // set horizontal flip bit for second sprite
    sta(Abs(((Sprite_Attributes) + (4)), y));
    ora(Imm(0b10000000));
    // set both flip bits for fourth sprite
    sta(Abs(((Sprite_Attributes) + (12)), y));
    anda(Imm(0b10000011));
    // set vertical flip bit for third sprite
    sta(Abs(((Sprite_Attributes) + (8)), y));
}

int BlkOffscr() {
    // get offscreen bits for block object
    lda(Abs(Block_OffscreenBits));
    // save to stack
    pha();
    // check to see if d2 in offscreen bits are set
    anda(Imm(0b100));
    // if not set, branch, otherwise move sprites offscreen
    BEQ(PullOfsB);
    // move offscreen two OAMs
    lda(Imm(0xf8));
    // on the right side
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    sta(Abs(((Sprite_Y_Position) + (12)), y));
}

int PullOfsB() {
    // pull offscreen bits from stack
    pla();
}

int ChkLeftCo() {
    // check to see if d3 in offscreen bits are set
    anda(Imm(0b1000));
    // if not set, branch, otherwise move sprites offscreen
    BEQ(ExDBlk);
}

int MoveColOffscreen() {
    // move offscreen two OAMs
    lda(Imm(0xf8));
    // on the left side (or two rows of enemy on either side
    sta(Abs(Sprite_Y_Position, y));
    // if branched here from enemy graphics handler)
    sta(Abs(((Sprite_Y_Position) + (8)), y));
}

int ExDBlk() {
    return 0;
}

int DrawBrickChunks() {
    // set palette bits here
    lda(Imm(0x2));
    sta(Abs(0x0));
    // set tile number for ball (something residual, likely)
    lda(Imm(0x75));
    ldy(Abs(GameEngineSubroutine));
    // if end-of-level routine running,
    cpy(Imm(0x5));
    // use palette and tile number assigned
    BEQ(DChunks);
    // otherwise set different palette bits
    lda(Imm(0x3));
    sta(Abs(0x0));
    // and set tile number for brick chunks
    lda(Imm(0x84));
}

int DChunks() {
    // get OAM data offset
    ldy(Abs(Block_SprDataOffset, x));
    // increment to start with tile bytes in OAM
    iny();
    // do sub to dump tile number into all four sprites
    JSR(DumpFourSpr);
    // get frame counter
    lda(Abs(FrameCounter));
    asl();
    asl();
    // move low nybble to high
    asl();
    asl();
    // get what was originally d3-d2 of low nybble
    anda(Imm(0xc0));
    // add palette bits
    ora(Abs(0x0));
    // increment offset for attribute bytes
    iny();
    // do sub to dump attribute data into all four sprites
    JSR(DumpFourSpr);
    dey();
    // decrement offset to Y coordinate
    dey();
    // get first block object's relative vertical coordinate
    lda(Abs(Block_Rel_YPos));
    // do sub to dump current Y coordinate into two sprites
    JSR(DumpTwoSpr);
    // get first block object's relative horizontal coordinate
    lda(Abs(Block_Rel_XPos));
    // save into X coordinate of first sprite
    sta(Abs(Sprite_X_Position, y));
    // get original horizontal coordinate
    lda(Abs(Block_Orig_XPos, x));
    sec();
    // subtract coordinate of left side from original coordinate
    sbc(Abs(ScreenLeft_X_Pos));
    // store result as relative horizontal coordinate of original
    sta(Abs(0x0));
    sec();
    // get difference of relative positions of original - current
    sbc(Abs(Block_Rel_XPos));
    // add original relative position to result
    adc(Abs(0x0));
    // plus 6 pixels to position second brick chunk correctly
    adc(Imm(0x6));
    // save into X coordinate of second sprite
    sta(Abs(((Sprite_X_Position) + (4)), y));
    // get second block object's relative vertical coordinate
    lda(Abs(((Block_Rel_YPos) + (1))));
    sta(Abs(((Sprite_Y_Position) + (8)), y));
    // dump into Y coordinates of third and fourth sprites
    sta(Abs(((Sprite_Y_Position) + (12)), y));
    // get second block object's relative horizontal coordinate
    lda(Abs(((Block_Rel_XPos) + (1))));
    // save into X coordinate of third sprite
    sta(Abs(((Sprite_X_Position) + (8)), y));
    // use original relative horizontal position
    lda(Abs(0x0));
    sec();
    // get difference of relative positions of original - current
    sbc(Abs(((Block_Rel_XPos) + (1))));
    // add original relative position to result
    adc(Abs(0x0));
    // plus 6 pixels to position fourth brick chunk correctly
    adc(Imm(0x6));
    // save into X coordinate of fourth sprite
    sta(Abs(((Sprite_X_Position) + (12)), y));
    // get offscreen bits for block object
    lda(Abs(Block_OffscreenBits));
    // do sub to move left half of sprites offscreen if necessary
    JSR(ChkLeftCo);
    // get offscreen bits again
    lda(Abs(Block_OffscreenBits));
    // shift d7 into carry
    asl();
    // if d7 not set, branch to last part
    BCC(ChnkOfs);
    lda(Imm(0xf8));
    // otherwise move top sprites offscreen
    JSR(DumpTwoSpr);
}

int ChnkOfs() {
    // if relative position on left side of screen,
    lda(Abs(0x0));
    // go ahead and leave
    BPL(ExBCDr);
    // otherwise compare left-side X coordinate
    lda(Abs(Sprite_X_Position, y));
    // to right-side X coordinate
    cmp(Abs(((Sprite_X_Position) + (4)), y));
    // branch to leave if less
    BCC(ExBCDr);
    // otherwise move right half of sprites offscreen
    lda(Imm(0xf8));
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    sta(Abs(((Sprite_Y_Position) + (12)), y));
}

int ExBCDr() {
    // leave
    return 0;
}

int DrawFireball() {
    // get fireball's sprite data offset
    ldy(Abs(FBall_SprDataOffset, x));
    // get relative vertical coordinate
    lda(Abs(Fireball_Rel_YPos));
    // store as sprite Y coordinate
    sta(Abs(Sprite_Y_Position, y));
    // get relative horizontal coordinate
    lda(Abs(Fireball_Rel_XPos));
    // store as sprite X coordinate, then do shared code
    sta(Abs(Sprite_X_Position, y));
}

int DrawFirebar() {
    // get frame counter
    lda(Abs(FrameCounter));
    // divide by four
    lsr();
    lsr();
    // save result to stack
    pha();
    // mask out all but last bit
    anda(Imm(0x1));
    // set either tile $64 or $65 as fireball tile
    eor(Imm(0x64));
    // thus tile changes every four frames
    sta(Abs(Sprite_Tilenumber, y));
    // get from stack
    pla();
    // divide by four again
    lsr();
    lsr();
    // load value $02 to set palette in attrib byte
    lda(Imm(0x2));
    // if last bit shifted out was not set, skip this
    BCC(FireA);
    // otherwise flip both ways every eight frames
    ora(Imm(0b11000000));
}

int FireA() {
    // store attribute byte and leave
    sta(Abs(Sprite_Attributes, y));
    return 0;
}

int DrawExplosion_Fireball() {
    // get OAM data offset of alternate sort for fireball's explosion
    ldy(Abs(Alt_SprDataOffset, x));
    // load fireball state
    lda(Abs(Fireball_State, x));
    // increment state for next frame
    inc(Abs(Fireball_State, x));
    // divide by 2
    lsr();
    // mask out all but d3-d1
    anda(Imm(0b111));
    // check to see if time to kill fireball
    cmp(Imm(0x3));
    // branch if so, otherwise continue to draw explosion
    BCS(KillFireBall);
}

int DrawExplosion_Fireworks() {
    // use whatever's in A for offset
    tax();
    // get tile number using offset
    lda(Abs(offsetof(G, ExplosionTiles), x));
    // increment Y (contains sprite data offset)
    iny();
    // and dump into tile number part of sprite data
    JSR(DumpFourSpr);
    // decrement Y so we have the proper offset again
    dey();
    // return enemy object buffer offset to X
    ldx(Abs(ObjectOffset));
    // get relative vertical coordinate
    lda(Abs(Fireball_Rel_YPos));
    // subtract four pixels vertically
    sec();
    // for first and third sprites
    sbc(Imm(0x4));
    sta(Abs(Sprite_Y_Position, y));
    sta(Abs(((Sprite_Y_Position) + (8)), y));
    // add eight pixels vertically
    clc();
    // for second and fourth sprites
    adc(Imm(0x8));
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    sta(Abs(((Sprite_Y_Position) + (12)), y));
    // get relative horizontal coordinate
    lda(Abs(Fireball_Rel_XPos));
    // subtract four pixels horizontally
    sec();
    // for first and second sprites
    sbc(Imm(0x4));
    sta(Abs(Sprite_X_Position, y));
    sta(Abs(((Sprite_X_Position) + (4)), y));
    // add eight pixels horizontally
    clc();
    // for third and fourth sprites
    adc(Imm(0x8));
    sta(Abs(((Sprite_X_Position) + (8)), y));
    sta(Abs(((Sprite_X_Position) + (12)), y));
    // set palette attributes for all sprites, but
    lda(Imm(0x2));
    // set no flip at all for first sprite
    sta(Abs(Sprite_Attributes, y));
    lda(Imm(0x82));
    // set vertical flip for second sprite
    sta(Abs(((Sprite_Attributes) + (4)), y));
    lda(Imm(0x42));
    // set horizontal flip for third sprite
    sta(Abs(((Sprite_Attributes) + (8)), y));
    lda(Imm(0xc2));
    // set both flips for fourth sprite
    sta(Abs(((Sprite_Attributes) + (12)), y));
    // we are done
    return 0;
}

int KillFireBall() {
    // clear fireball state to kill it
    lda(Imm(0x0));
    sta(Abs(Fireball_State, x));
    return 0;
}

int DrawSmallPlatform() {
    // get OAM data offset
    ldy(Abs(Enemy_SprDataOffset, x));
    // load tile number for small platforms
    lda(Imm(0x5b));
    // increment offset for tile numbers
    iny();
    // dump tile number into all six sprites
    JSR(DumpSixSpr);
    // increment offset for attributes
    iny();
    // load palette controls
    lda(Imm(0x2));
    // dump attributes into all six sprites
    JSR(DumpSixSpr);
    // decrement for original offset
    dey();
    dey();
    // get relative horizontal coordinate
    lda(Abs(Enemy_Rel_XPos));
    sta(Abs(Sprite_X_Position, y));
    // dump as X coordinate into first and fourth sprites
    sta(Abs(((Sprite_X_Position) + (12)), y));
    clc();
    // add eight pixels
    adc(Imm(0x8));
    // dump into second and fifth sprites
    sta(Abs(((Sprite_X_Position) + (4)), y));
    sta(Abs(((Sprite_X_Position) + (16)), y));
    clc();
    // add eight more pixels
    adc(Imm(0x8));
    // dump into third and sixth sprites
    sta(Abs(((Sprite_X_Position) + (8)), y));
    sta(Abs(((Sprite_X_Position) + (20)), y));
    // get vertical coordinate
    lda(Abs(Enemy_Y_Position, x));
    tax();
    // save to stack
    pha();
    // if vertical coordinate below status bar,
    cpx(Imm(0x20));
    // do not mess with it
    BCS(TopSP);
    // otherwise move first three sprites offscreen
    lda(Imm(0xf8));
}

int TopSP() {
    // dump vertical coordinate into Y coordinates
    JSR(DumpThreeSpr);
    // pull from stack
    pla();
    clc();
    // add 128 pixels
    adc(Imm(0x80));
    tax();
    // if below status bar (taking wrap into account)
    cpx(Imm(0x20));
    // then do not change altered coordinate
    BCS(BotSP);
    // otherwise move last three sprites offscreen
    lda(Imm(0xf8));
}

int BotSP() {
    // dump vertical coordinate + 128 pixels
    sta(Abs(((Sprite_Y_Position) + (12)), y));
    // into Y coordinates
    sta(Abs(((Sprite_Y_Position) + (16)), y));
    sta(Abs(((Sprite_Y_Position) + (20)), y));
    // get offscreen bits
    lda(Abs(Enemy_OffscreenBits));
    // save to stack
    pha();
    // check d3
    anda(Imm(0b1000));
    BEQ(SOfs);
    // if d3 was set, move first and
    lda(Imm(0xf8));
    // fourth sprites offscreen
    sta(Abs(Sprite_Y_Position, y));
    sta(Abs(((Sprite_Y_Position) + (12)), y));
}

int SOfs() {
    // move out and back into stack
    pla();
    pha();
    // check d2
    anda(Imm(0b100));
    BEQ(SOfs2);
    // if d2 was set, move second and
    lda(Imm(0xf8));
    // fifth sprites offscreen
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    sta(Abs(((Sprite_Y_Position) + (16)), y));
}

int SOfs2() {
    // get from stack
    pla();
    // check d1
    anda(Imm(0b10));
    BEQ(ExSPl);
    // if d1 was set, move third and
    lda(Imm(0xf8));
    // sixth sprites offscreen
    sta(Abs(((Sprite_Y_Position) + (8)), y));
    sta(Abs(((Sprite_Y_Position) + (20)), y));
}

int ExSPl() {
    // get enemy object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int DrawBubble() {
    // if player's vertical high position
    ldy(Abs(Player_Y_HighPos));
    // not within screen, skip all of this
    dey();
    BNE(ExDBub);
    // check air bubble's offscreen bits
    lda(Abs(Bubble_OffscreenBits));
    anda(Imm(0b1000));
    // if bit set, branch to leave
    BNE(ExDBub);
    // get air bubble's OAM data offset
    ldy(Abs(Bubble_SprDataOffset, x));
    // get relative horizontal coordinate
    lda(Abs(Bubble_Rel_XPos));
    // store as X coordinate here
    sta(Abs(Sprite_X_Position, y));
    // get relative vertical coordinate
    lda(Abs(Bubble_Rel_YPos));
    // store as Y coordinate here
    sta(Abs(Sprite_Y_Position, y));
    lda(Imm(0x74));
    // put air bubble tile into OAM data
    sta(Abs(Sprite_Tilenumber, y));
    lda(Imm(0x2));
    // set attribute byte
    sta(Abs(Sprite_Attributes, y));
}

int ExDBub() {
    // leave
    return 0;
}

int PlayerGfxHandler() {
    // if player's injured invincibility timer
    lda(Abs(InjuryTimer));
    // not set, skip checkpoint and continue code
    BEQ(CntPl);
    lda(Abs(FrameCounter));
    // otherwise check frame counter and branch
    lsr();
    // to leave on every other frame (when d0 is set)
    BCS(ExPGH);
}

int CntPl() {
    // if executing specific game engine routine,
    lda(Abs(GameEngineSubroutine));
    // branch ahead to some other part
    cmp(Imm(0xb));
    BEQ(PlayerKilled);
    // if grow/shrink flag set
    lda(Abs(PlayerChangeSizeFlag));
    // then branch to some other code
    BNE(DoChangeSize);
    // if swimming flag set, branch to
    ldy(Abs(SwimmingFlag));
    // different part, do not return
    BEQ(FindPlayerAction);
    lda(Abs(Player_State));
    // if player status normal,
    cmp(Imm(0x0));
    // branch and do not return
    BEQ(FindPlayerAction);
    // otherwise jump and return
    JSR(FindPlayerAction);
    lda(Abs(FrameCounter));
    // check frame counter for d2 set (8 frames every
    anda(Imm(0b100));
    // eighth frame), and branch if set to leave
    BNE(ExPGH);
    // initialize X to zero
    tax();
    // get player sprite data offset
    ldy(Abs(Player_SprDataOffset));
    // get player's facing direction
    lda(Abs(PlayerFacingDir));
    lsr();
    // if player facing to the right, use current offset
    BCS(SwimKT);
    iny();
    // otherwise move to next OAM data
    iny();
    iny();
    iny();
}

int SwimKT() {
    // check player's size
    lda(Abs(PlayerSize));
    // if big, use first tile
    BEQ(BigKTS);
    // check tile number of seventh/eighth sprite
    lda(Abs(((Sprite_Tilenumber) + (24)), y));
    // against tile number in player graphics table
    cmp(Abs(SwimTileRepOffset));
    // if spr7/spr8 tile number = value, branch to leave
    BEQ(ExPGH);
    // otherwise increment X for second tile
    inx();
}

int BigKTS() {
    // overwrite tile number in sprite 7/8
    lda(Abs(offsetof(G, SwimKickTileNum), x));
    // to animate player's feet when swimming
    sta(Abs(((Sprite_Tilenumber) + (24)), y));
}

int ExPGH() {
    // then leave
    return 0;
}

int FindPlayerAction() {
    // find proper offset to graphics table by player's actions
    JSR(ProcessPlayerAction);
    // draw player, then process for fireball throwing
    JMP(PlayerGfxProcessing);
}

int DoChangeSize() {
    // find proper offset to graphics table for grow/shrink
    JSR(HandleChangeSize);
    // draw player, then process for fireball throwing
    JMP(PlayerGfxProcessing);
}

int PlayerKilled() {
    // load offset for player killed
    ldy(Imm(0xe));
    // get offset to graphics table
    lda(Abs(offsetof(G, PlayerGfxTblOffsets), y));
}

int PlayerGfxProcessing() {
    // store offset to graphics table here
    sta(Abs(PlayerGfxOffset));
    lda(Imm(0x4));
    // draw player based on offset loaded
    JSR(RenderPlayerSub);
    // set horizontal flip bits as necessary
    JSR(ChkForPlayerAttrib);
    lda(Abs(FireballThrowingTimer));
    // if fireball throw timer not set, skip to the end
    BEQ(PlayerOffscreenChk);
    // set value to initialize by default
    ldy(Imm(0x0));
    // get animation frame timer
    lda(Abs(PlayerAnimTimer));
    // compare to fireball throw timer
    cmp(Abs(FireballThrowingTimer));
    // initialize fireball throw timer
    sty(Abs(FireballThrowingTimer));
    // if animation frame timer => fireball throw timer skip to end
    BCS(PlayerOffscreenChk);
    // otherwise store animation timer into fireball throw timer
    sta(Abs(FireballThrowingTimer));
    // load offset for throwing
    ldy(Imm(0x7));
    // get offset to graphics table
    lda(Abs(offsetof(G, PlayerGfxTblOffsets), y));
    // store it for use later
    sta(Abs(PlayerGfxOffset));
    // set to update four sprite rows by default
    ldy(Imm(0x4));
    lda(Abs(Player_X_Speed));
    // check for horizontal speed or left/right button press
    ora(Abs(Left_Right_Buttons));
    // if no speed or button press, branch using set value in Y
    BEQ(SUpdR);
    // otherwise set to update only three sprite rows
    dey();
}

int SUpdR() {
    // save in A for use
    tya();
    // in sub, draw player object again
    JSR(RenderPlayerSub);
}

int PlayerOffscreenChk() {
    // get player's offscreen bits
    lda(Abs(Player_OffscreenBits));
    lsr();
    // move vertical bits to low nybble
    lsr();
    lsr();
    lsr();
    // store here
    sta(Abs(0x0));
    // check all four rows of player sprites
    ldx(Imm(0x3));
    // get player's sprite data offset
    lda(Abs(Player_SprDataOffset));
    clc();
    // add 24 bytes to start at bottom row
    adc(Imm(0x18));
    // set as offset here
    tay();
}

int PROfsLoop() {
    // load offscreen Y coordinate just in case
    lda(Imm(0xf8));
    // shift bit into carry
    lsr(Abs(0x0));
    // if bit not set, skip, do not move sprites
    BCC(NPROffscr);
    // otherwise dump offscreen Y coordinate into sprite data
    JSR(DumpTwoSpr);
}

int NPROffscr() {
    tya();
    // subtract eight bytes to do
    sec();
    // next row up
    sbc(Imm(0x8));
    tay();
    // decrement row counter
    dex();
    // do this until all sprite rows are checked
    BPL(PROfsLoop);
    // then we are done!
    return 0;
}

int DrawPlayer_Intermediate() {
    // store data into zero page memory
    ldx(Imm(0x5));
}

int PIntLoop() {
    // load data to display player as he always
    lda(Abs(offsetof(G, IntermediatePlayerData), x));
    // appears on world/lives display
    sta(Abs(0x2, x));
    dex();
    // do this until all data is loaded
    BPL(PIntLoop);
    // load offset for small standing
    ldx(Imm(0xb8));
    // load sprite data offset
    ldy(Imm(0x4));
    // draw player accordingly
    JSR(DrawPlayerLoop);
    // get empty sprite attributes
    lda(Abs(((Sprite_Attributes) + (36))));
    // set horizontal flip bit for bottom-right sprite
    ora(Imm(0b1000000));
    // store and leave
    sta(Abs(((Sprite_Attributes) + (32))));
    return 0;
}

int RenderPlayerSub() {
    // store number of rows of sprites to draw
    sta(Abs(0x7));
    lda(Abs(Player_Rel_XPos));
    // store player's relative horizontal position
    sta(Abs(Player_Pos_ForScroll));
    // store it here also
    sta(Abs(0x5));
    lda(Abs(Player_Rel_YPos));
    // store player's vertical position
    sta(Abs(0x2));
    lda(Abs(PlayerFacingDir));
    // store player's facing direction
    sta(Abs(0x3));
    lda(Abs(Player_SprAttrib));
    // store player's sprite attributes
    sta(Abs(0x4));
    // load graphics table offset
    ldx(Abs(PlayerGfxOffset));
    // get player's sprite data offset
    ldy(Abs(Player_SprDataOffset));
}

int DrawPlayerLoop() {
    // load player's left side
    lda(Abs(offsetof(G, PlayerGraphicsTable), x));
    sta(Abs(0x0));
    // now load right side
    lda(Abs(((offsetof(G, PlayerGraphicsTable)) + (1)), x));
    JSR(DrawOneSpriteRow);
    // decrement rows of sprites to draw
    dec(Abs(0x7));
    // do this until all rows are drawn
    BNE(DrawPlayerLoop);
    return 0;
}

int ProcessPlayerAction() {
    // get player's state
    lda(Abs(Player_State));
    cmp(Imm(0x3));
    // if climbing, branch here
    BEQ(ActionClimbing);
    cmp(Imm(0x2));
    // if falling, branch here
    BEQ(ActionFalling);
    cmp(Imm(0x1));
    // if not jumping, branch here
    BNE(ProcOnGroundActs);
    lda(Abs(SwimmingFlag));
    // if swimming flag set, branch elsewhere
    BNE(ActionSwimming);
    // load offset for crouching
    ldy(Imm(0x6));
    // get crouching flag
    lda(Abs(CrouchingFlag));
    // if set, branch to get offset for graphics table
    BNE(NonAnimatedActs);
    // otherwise load offset for jumping
    ldy(Imm(0x0));
    // go to get offset to graphics table
    JMP(NonAnimatedActs);
}

int ProcOnGroundActs() {
    // load offset for crouching
    ldy(Imm(0x6));
    // get crouching flag
    lda(Abs(CrouchingFlag));
    // if set, branch to get offset for graphics table
    BNE(NonAnimatedActs);
    // load offset for standing
    ldy(Imm(0x2));
    // check player's horizontal speed
    lda(Abs(Player_X_Speed));
    // and left/right controller bits
    ora(Abs(Left_Right_Buttons));
    // if no speed or buttons pressed, use standing offset
    BEQ(NonAnimatedActs);
    // load walking/running speed
    lda(Abs(Player_XSpeedAbsolute));
    cmp(Imm(0x9));
    // if less than a certain amount, branch, too slow to skid
    BCC(ActionWalkRun);
    // otherwise check to see if moving direction
    lda(Abs(Player_MovingDir));
    // and facing direction are the same
    anda(Abs(PlayerFacingDir));
    // if moving direction = facing direction, branch, don't skid
    BNE(ActionWalkRun);
    // otherwise increment to skid offset ($03)
    iny();
}

int NonAnimatedActs() {
    // do a sub here to get offset adder for graphics table
    JSR(GetGfxOffsetAdder);
    lda(Imm(0x0));
    // initialize animation frame control
    sta(Abs(PlayerAnimCtrl));
    // load offset to graphics table using size as offset
    lda(Abs(offsetof(G, PlayerGfxTblOffsets), y));
    return 0;
}

int ActionFalling() {
    // load offset for walking/running
    ldy(Imm(0x4));
    // get offset to graphics table
    JSR(GetGfxOffsetAdder);
    // execute instructions for falling state
    JMP(GetCurrentAnimOffset);
}

int ActionWalkRun() {
    // load offset for walking/running
    ldy(Imm(0x4));
    // get offset to graphics table
    JSR(GetGfxOffsetAdder);
    // execute instructions for normal state
    JMP(FourFrameExtent);
}

int ActionClimbing() {
    // load offset for climbing
    ldy(Imm(0x5));
    // check player's vertical speed
    lda(Abs(Player_Y_Speed));
    // if no speed, branch, use offset as-is
    BEQ(NonAnimatedActs);
    // otherwise get offset for graphics table
    JSR(GetGfxOffsetAdder);
    // then skip ahead to more code
    JMP(ThreeFrameExtent);
}

int ActionSwimming() {
    // load offset for swimming
    ldy(Imm(0x1));
    JSR(GetGfxOffsetAdder);
    // check jump/swim timer
    lda(Abs(JumpSwimTimer));
    // and animation frame control
    ora(Abs(PlayerAnimCtrl));
    // if any one of these set, branch ahead
    BNE(FourFrameExtent);
    lda(Abs(A_B_Buttons));
    // check for A button pressed
    asl();
    // branch to same place if A button pressed
    BCS(FourFrameExtent);
}

int GetCurrentAnimOffset() {
    // get animation frame control
    lda(Abs(PlayerAnimCtrl));
    // jump to get proper offset to graphics table
    JMP(GetOffsetFromAnimCtrl);
}

int FourFrameExtent() {
    // load upper extent for frame control
    lda(Imm(0x3));
    // jump to get offset and animate player object
    JMP(AnimationControl);
}

int ThreeFrameExtent() {
    // load upper extent for frame control for climbing
    lda(Imm(0x2));
}

int AnimationControl() {
    // store upper extent here
    sta(Abs(0x0));
    // get proper offset to graphics table
    JSR(GetCurrentAnimOffset);
    // save offset to stack
    pha();
    // load animation frame timer
    lda(Abs(PlayerAnimTimer));
    // branch if not expired
    BNE(ExAnimC);
    // get animation frame timer amount
    lda(Abs(PlayerAnimTimerSet));
    // and set timer accordingly
    sta(Abs(PlayerAnimTimer));
    lda(Abs(PlayerAnimCtrl));
    // add one to animation frame control
    clc();
    adc(Imm(0x1));
    // compare to upper extent
    cmp(Abs(0x0));
    // if frame control + 1 < upper extent, use as next
    BCC(SetAnimC);
    // otherwise initialize frame control
    lda(Imm(0x0));
}

int SetAnimC() {
    // store as new animation frame control
    sta(Abs(PlayerAnimCtrl));
}

int ExAnimC() {
    // get offset to graphics table from stack and leave
    pla();
    return 0;
}

int GetGfxOffsetAdder() {
    // get player's size
    lda(Abs(PlayerSize));
    // if player big, use current offset as-is
    BEQ(SzOfs);
    // for big player
    tya();
    // otherwise add eight bytes to offset
    clc();
    // for small player
    adc(Imm(0x8));
    tay();
}

int SzOfs() {
    // go back
    return 0;
}

int HandleChangeSize() {
    // get animation frame control
    ldy(Abs(PlayerAnimCtrl));
    lda(Abs(FrameCounter));
    // get frame counter and execute this code every
    anda(Imm(0b11));
    // fourth frame, otherwise branch ahead
    BNE(GorSLog);
    // increment frame control
    iny();
    // check for preset upper extent
    cpy(Imm(0xa));
    // if not there yet, skip ahead to use
    BCC(CSzNext);
    // otherwise initialize both grow/shrink flag
    ldy(Imm(0x0));
    // and animation frame control
    sty(Abs(PlayerChangeSizeFlag));
}

int CSzNext() {
    // store proper frame control
    sty(Abs(PlayerAnimCtrl));
}

int GorSLog() {
    // get player's size
    lda(Abs(PlayerSize));
    // if player small, skip ahead to next part
    BNE(ShrinkPlayer);
    // get offset adder based on frame control as offset
    lda(Abs(offsetof(G, ChangeSizeOffsetAdder), y));
    // load offset for player growing
    ldy(Imm(0xf));
}

int GetOffsetFromAnimCtrl() {
    // multiply animation frame control
    asl();
    // by eight to get proper amount
    asl();
    // to add to our offset
    asl();
    // add to offset to graphics table
    adc(Abs(offsetof(G, PlayerGfxTblOffsets), y));
    // and return with result in A
    return 0;
}

int ShrinkPlayer() {
    // add ten bytes to frame control as offset
    tya();
    clc();
    // this thing apparently uses two of the swimming frames
    adc(Imm(0xa));
    // to draw the player shrinking
    tax();
    // load offset for small player swimming
    ldy(Imm(0x9));
    // get what would normally be offset adder
    lda(Abs(offsetof(G, ChangeSizeOffsetAdder), x));
    // and branch to use offset if nonzero
    BNE(ShrPlF);
    // otherwise load offset for big player swimming
    ldy(Imm(0x1));
}

int ShrPlF() {
    // get offset to graphics table based on offset loaded
    lda(Abs(offsetof(G, PlayerGfxTblOffsets), y));
    // and leave
    return 0;
}

int ChkForPlayerAttrib() {
    // get sprite data offset
    ldy(Abs(Player_SprDataOffset));
    lda(Abs(GameEngineSubroutine));
    // if executing specific game engine routine,
    cmp(Imm(0xb));
    // branch to change third and fourth row OAM attributes
    BEQ(KilledAtt);
    // get graphics table offset
    lda(Abs(PlayerGfxOffset));
    cmp(Imm(0x50));
    // if crouch offset, either standing offset,
    BEQ(C_S_IGAtt);
    // or intermediate growing offset,
    cmp(Imm(0xb8));
    // go ahead and execute code to change
    BEQ(C_S_IGAtt);
    // fourth row OAM attributes only
    cmp(Imm(0xc0));
    BEQ(C_S_IGAtt);
    cmp(Imm(0xc8));
    // if none of these, branch to leave
    BNE(ExPlyrAt);
}

int KilledAtt() {
    lda(Abs(((Sprite_Attributes) + (16)), y));
    // mask out horizontal and vertical flip bits
    anda(Imm(0b111111));
    // for third row sprites and save
    sta(Abs(((Sprite_Attributes) + (16)), y));
    lda(Abs(((Sprite_Attributes) + (20)), y));
    anda(Imm(0b111111));
    // set horizontal flip bit for second
    ora(Imm(0b1000000));
    // sprite in the third row
    sta(Abs(((Sprite_Attributes) + (20)), y));
}

int C_S_IGAtt() {
    lda(Abs(((Sprite_Attributes) + (24)), y));
    // mask out horizontal and vertical flip bits
    anda(Imm(0b111111));
    // for fourth row sprites and save
    sta(Abs(((Sprite_Attributes) + (24)), y));
    lda(Abs(((Sprite_Attributes) + (28)), y));
    anda(Imm(0b111111));
    // set horizontal flip bit for second
    ora(Imm(0b1000000));
    // sprite in the fourth row
    sta(Abs(((Sprite_Attributes) + (28)), y));
}

int ExPlyrAt() {
    // leave
    return 0;
}

int RelativePlayerPosition() {
    // set offsets for relative cooordinates
    ldx(Imm(0x0));
    // routine to correspond to player object
    ldy(Imm(0x0));
    // get the coordinates
    JMP(RelWOfs);
}

int RelativeBubblePosition() {
    // set for air bubble offsets
    ldy(Imm(0x1));
    // modify X to get proper air bubble offset
    JSR(GetProperObjOffset);
    ldy(Imm(0x3));
    // get the coordinates
    JMP(RelWOfs);
}

int RelativeFireballPosition() {
    // set for fireball offsets
    ldy(Imm(0x0));
    // modify X to get proper fireball offset
    JSR(GetProperObjOffset);
    ldy(Imm(0x2));
}

int RelWOfs() {
    // get the coordinates
    JSR(GetObjRelativePosition);
    // return original offset
    ldx(Abs(ObjectOffset));
    // leave
    return 0;
}

int RelativeMiscPosition() {
    // set for misc object offsets
    ldy(Imm(0x2));
    // modify X to get proper misc object offset
    JSR(GetProperObjOffset);
    ldy(Imm(0x6));
    // get the coordinates
    JMP(RelWOfs);
}

int RelativeEnemyPosition() {
    // get coordinates of enemy object
    lda(Imm(0x1));
    // relative to the screen
    ldy(Imm(0x1));
    JMP(VariableObjOfsRelPos);
}

int RelativeBlockPosition() {
    // get coordinates of one block object
    lda(Imm(0x9));
    // relative to the screen
    ldy(Imm(0x4));
    JSR(VariableObjOfsRelPos);
    // adjust offset for other block object if any
    inx();
    inx();
    lda(Imm(0x9));
    // adjust other and get coordinates for other one
    iny();
}

int VariableObjOfsRelPos() {
    // store value to add to A here
    stx(Abs(0x0));
    clc();
    // add A to value stored
    adc(Abs(0x0));
    // use as enemy offset
    tax();
    JSR(GetObjRelativePosition);
    // reload old object offset and leave
    ldx(Abs(ObjectOffset));
    return 0;
}

int GetObjRelativePosition() {
    // load vertical coordinate low
    lda(Abs(SprObject_Y_Position, x));
    // store here
    sta(Abs(SprObject_Rel_YPos, y));
    // load horizontal coordinate
    lda(Abs(SprObject_X_Position, x));
    // subtract left edge coordinate
    sec();
    sbc(Abs(ScreenLeft_X_Pos));
    // store result here
    sta(Abs(SprObject_Rel_XPos, y));
    return 0;
}

int GetPlayerOffscreenBits() {
    // set offsets for player-specific variables
    ldx(Imm(0x0));
    // and get offscreen information about player
    ldy(Imm(0x0));
    JMP(GetOffScreenBitsSet);
}

int GetFireballOffscreenBits() {
    // set for fireball offsets
    ldy(Imm(0x0));
    // modify X to get proper fireball offset
    JSR(GetProperObjOffset);
    // set other offset for fireball's offscreen bits
    ldy(Imm(0x2));
    // and get offscreen information about fireball
    JMP(GetOffScreenBitsSet);
}

int GetBubbleOffscreenBits() {
    // set for air bubble offsets
    ldy(Imm(0x1));
    // modify X to get proper air bubble offset
    JSR(GetProperObjOffset);
    // set other offset for airbubble's offscreen bits
    ldy(Imm(0x3));
    // and get offscreen information about air bubble
    JMP(GetOffScreenBitsSet);
}

int GetMiscOffscreenBits() {
    // set for misc object offsets
    ldy(Imm(0x2));
    // modify X to get proper misc object offset
    JSR(GetProperObjOffset);
    // set other offset for misc object's offscreen bits
    ldy(Imm(0x6));
    // and get offscreen information about misc object
    JMP(GetOffScreenBitsSet);
}

int GetProperObjOffset() {
    // move offset to A
    txa();
    clc();
    // add amount of bytes to offset depending on setting in Y
    adc(Abs(offsetof(G, ObjOffsetData), y));
    // put back in X and leave
    tax();
    return 0;
}

int GetEnemyOffscreenBits() {
    // set A to add 1 byte in order to get enemy offset
    lda(Imm(0x1));
    // set Y to put offscreen bits in Enemy_OffscreenBits
    ldy(Imm(0x1));
    JMP(SetOffscrBitsOffset);
}

int GetBlockOffscreenBits() {
    // set A to add 9 bytes in order to get block obj offset
    lda(Imm(0x9));
    // set Y to put offscreen bits in Block_OffscreenBits
    ldy(Imm(0x4));
}

int SetOffscrBitsOffset() {
    stx(Abs(0x0));
    // add contents of X to A to get
    clc();
    // appropriate offset, then give back to X
    adc(Abs(0x0));
    tax();
}

int GetOffScreenBitsSet() {
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
    ora(Abs(0x0));
    // store both here
    sta(Abs(0x0));
    // get offscreen bits offset from stack
    pla();
    tay();
    // get value here and store elsewhere
    lda(Abs(0x0));
    sta(Abs(SprObject_OffscrBits, y));
    ldx(Abs(ObjectOffset));
    return 0;
}

int RunOffscrBitsSubs() {
    // do subroutine here
    JSR(GetXOffscreenBits);
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    lsr();
    // store here
    sta(Abs(0x0));
    JMP(GetYOffscreenBits);
}

int GetXOffscreenBits() {
    // save position in buffer to here
    stx(Abs(0x4));
    // start with right side of screen
    ldy(Imm(0x1));
}

int XOfsLoop() {
    // get pixel coordinate of edge
    lda(Abs(ScreenEdge_X_Pos, y));
    // get difference between pixel coordinate of edge
    sec();
    // and pixel coordinate of object position
    sbc(Abs(SprObject_X_Position, x));
    // store here
    sta(Abs(0x7));
    // get page location of edge
    lda(Abs(ScreenEdge_PageLoc, y));
    // subtract from page location of object position
    sbc(Abs(SprObject_PageLoc, x));
    // load offset value here
    ldx(Abs(offsetof(G, DefaultXOnscreenOfs), y));
    cmp(Imm(0x0));
    // if beyond right edge or in front of left edge, branch
    BMI(XLdBData);
    // if not, load alternate offset value here
    ldx(Abs(((offsetof(G, DefaultXOnscreenOfs)) + (1)), y));
    cmp(Imm(0x1));
    // if one page or more to the left of either edge, branch
    BPL(XLdBData);
    // if no branching, load value here and store
    lda(Imm(0x38));
    sta(Abs(0x6));
    // load some other value and execute subroutine
    lda(Imm(0x8));
    JSR(DividePDiff);
}

int XLdBData() {
    // get bits here
    lda(Abs(offsetof(G, XOffscreenBitsData), x));
    // reobtain position in buffer
    ldx(Abs(0x4));
    // if bits not zero, branch to leave
    cmp(Imm(0x0));
    BNE(ExXOfsBS);
    // otherwise, do left side of screen now
    dey();
    // branch if not already done with left side
    BPL(XOfsLoop);
}

int ExXOfsBS() {
    return 0;
}

int GetYOffscreenBits() {
    // save position in buffer to here
    stx(Abs(0x4));
    // start with top of screen
    ldy(Imm(0x1));
}

int YOfsLoop() {
    // load coordinate for edge of vertical unit
    lda(Abs(offsetof(G, HighPosUnitData), y));
    sec();
    // subtract from vertical coordinate of object
    sbc(Abs(SprObject_Y_Position, x));
    // store here
    sta(Abs(0x7));
    // subtract one from vertical high byte of object
    lda(Imm(0x1));
    sbc(Abs(SprObject_Y_HighPos, x));
    // load offset value here
    ldx(Abs(offsetof(G, DefaultYOnscreenOfs), y));
    cmp(Imm(0x0));
    // if under top of the screen or beyond bottom, branch
    BMI(YLdBData);
    // if not, load alternate offset value here
    ldx(Abs(((offsetof(G, DefaultYOnscreenOfs)) + (1)), y));
    cmp(Imm(0x1));
    // if one vertical unit or more above the screen, branch
    BPL(YLdBData);
    // if no branching, load value here and store
    lda(Imm(0x20));
    sta(Abs(0x6));
    // load some other value and execute subroutine
    lda(Imm(0x4));
    JSR(DividePDiff);
}

int YLdBData() {
    // get offscreen data bits using offset
    lda(Abs(offsetof(G, YOffscreenBitsData), x));
    // reobtain position in buffer
    ldx(Abs(0x4));
    cmp(Imm(0x0));
    // if bits not zero, branch to leave
    BNE(ExYOfsBS);
    // otherwise, do bottom of the screen now
    dey();
    BPL(YOfsLoop);
}

int ExYOfsBS() {
    return 0;
}

int DividePDiff() {
    // store current value in A here
    sta(Abs(0x5));
    // get pixel difference
    lda(Abs(0x7));
    // compare to preset value
    cmp(Abs(0x6));
    // if pixel difference >= preset value, branch
    BCS(ExDivPD);
    // divide by eight
    lsr();
    lsr();
    lsr();
    // mask out all but 3 LSB
    anda(Imm(0x7));
    // right side of the screen or top?
    cpy(Imm(0x1));
    // if so, branch, use difference / 8 as offset
    BCS(SetOscrO);
    // if not, add value to difference / 8
    adc(Abs(0x5));
}

int SetOscrO() {
    // use as offset
    tax();
}

int ExDivPD() {
    // leave
    return 0;
}

int DrawSpriteObject() {
    // get saved flip control bits
    lda(Abs(0x3));
    lsr();
    // move d1 into carry
    lsr();
    lda(Abs(0x0));
    // if d1 not set, branch
    BCC(NoHFlip);
    // store first tile into second sprite
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    // and second into first sprite
    lda(Abs(0x1));
    sta(Abs(Sprite_Tilenumber, y));
    // activate horizontal flip OAM attribute
    lda(Imm(0x40));
    // and unconditionally branch
    BNE(SetHFAt);
}

int NoHFlip() {
    // store first tile into first sprite
    sta(Abs(Sprite_Tilenumber, y));
    // and second into second sprite
    lda(Abs(0x1));
    sta(Abs(((Sprite_Tilenumber) + (4)), y));
    // clear bit for horizontal flip
    lda(Imm(0x0));
}

int SetHFAt() {
    // add other OAM attributes if necessary
    ora(Abs(0x4));
    // store sprite attributes
    sta(Abs(Sprite_Attributes, y));
    sta(Abs(((Sprite_Attributes) + (4)), y));
    // now the y coordinates
    lda(Abs(0x2));
    // note because they are
    sta(Abs(Sprite_Y_Position, y));
    // side by side, they are the same
    sta(Abs(((Sprite_Y_Position) + (4)), y));
    lda(Abs(0x5));
    // store x coordinate, then
    sta(Abs(Sprite_X_Position, y));
    // add 8 pixels and store another to
    clc();
    // put them side by side
    adc(Imm(0x8));
    sta(Abs(((Sprite_X_Position) + (4)), y));
    // add eight pixels to the next y
    lda(Abs(0x2));
    // coordinate
    clc();
    adc(Imm(0x8));
    sta(Abs(0x2));
    // add eight to the offset in Y to
    tya();
    // move to the next two sprites
    clc();
    adc(Imm(0x8));
    tay();
    // increment offset to return it to the
    inx();
    // routine that called this subroutine
    inx();
    return 0;
}

int SoundEngine() {
    // are we in title screen mode?
    lda(Abs(OperMode));
    BNE(SndOn);
    // if so, disable sound and leave
    sta(Abs(SND_MASTERCTRL_REG));
    return 0;
}

int SndOn() {
    lda(Imm(0xff));
    // disable irqs and set frame counter mode???
    sta(Abs(JOYPAD_PORT2));
    lda(Imm(0xf));
    // enable first four channels
    sta(Abs(SND_MASTERCTRL_REG));
    // is sound already in pause mode?
    lda(Abs(PauseModeFlag));
    BNE(InPause);
    // if not, check pause sfx queue
    lda(Abs(PauseSoundQueue));
    cmp(Imm(0x1));
    // if queue is empty, skip pause mode routine
    BNE(RunSoundSubroutines);
}

int InPause() {
    // check pause sfx buffer
    lda(Abs(PauseSoundBuffer));
    BNE(ContPau);
    // check pause queue
    lda(Abs(PauseSoundQueue));
    BEQ(SkipSoundSubroutines);
    // if queue full, store in buffer and activate
    sta(Abs(PauseSoundBuffer));
    // pause mode to interrupt game sounds
    sta(Abs(PauseModeFlag));
    // disable sound and clear sfx buffers
    lda(Imm(0x0));
    sta(Abs(SND_MASTERCTRL_REG));
    sta(Abs(Square1SoundBuffer));
    sta(Abs(Square2SoundBuffer));
    sta(Abs(NoiseSoundBuffer));
    lda(Imm(0xf));
    // enable sound again
    sta(Abs(SND_MASTERCTRL_REG));
    // store length of sound in pause counter
    lda(Imm(0x2a));
    sta(Abs(Squ1_SfxLenCounter));
}

int PTone1F() {
    // play first tone
    lda(Imm(0x44));
    // unconditional branch
    BNE(PTRegC);
}

int ContPau() {
    // check pause length left
    lda(Abs(Squ1_SfxLenCounter));
    // time to play second?
    cmp(Imm(0x24));
    BEQ(PTone2F);
    // time to play first again?
    cmp(Imm(0x1e));
    BEQ(PTone1F);
    // time to play second again?
    cmp(Imm(0x18));
    // only load regs during times, otherwise skip
    BNE(DecPauC);
}

int PTone2F() {
    // store reg contents and play the pause sfx
    lda(Imm(0x64));
}

int PTRegC() {
    ldx(Imm(0x84));
    ldy(Imm(0x7f));
    JSR(PlaySqu1Sfx);
}

int DecPauC() {
    // decrement pause sfx counter
    dec(Abs(Squ1_SfxLenCounter));
    BNE(SkipSoundSubroutines);
    // disable sound if in pause mode and
    lda(Imm(0x0));
    // not currently playing the pause sfx
    sta(Abs(SND_MASTERCTRL_REG));
    // if no longer playing pause sfx, check to see
    lda(Abs(PauseSoundBuffer));
    // if we need to be playing sound again
    cmp(Imm(0x2));
    BNE(SkipPIn);
    // clear pause mode to allow game sounds again
    lda(Imm(0x0));
    sta(Abs(PauseModeFlag));
}

int SkipPIn() {
    // clear pause sfx buffer
    lda(Imm(0x0));
    sta(Abs(PauseSoundBuffer));
    BEQ(SkipSoundSubroutines);
}

int RunSoundSubroutines() {
    // play sfx on square channel 1
    JSR(Square1SfxHandler);
    // ''  ''  '' square channel 2
    JSR(Square2SfxHandler);
    // ''  ''  '' noise channel
    JSR(NoiseSfxHandler);
    // play music on all channels
    JSR(MusicHandler);
    // clear the music queues
    lda(Imm(0x0));
    sta(Abs(AreaMusicQueue));
    sta(Abs(EventMusicQueue));
}

int SkipSoundSubroutines() {
    // clear the sound effects queues
    lda(Imm(0x0));
    sta(Abs(Square1SoundQueue));
    sta(Abs(Square2SoundQueue));
    sta(Abs(NoiseSoundQueue));
    sta(Abs(PauseSoundQueue));
    // load some sort of counter
    ldy(Abs(DAC_Counter));
    lda(Abs(AreaMusicBuffer));
    // check for specific music
    anda(Imm(0b11));
    BEQ(NoIncDAC);
    // increment and check counter
    inc(Abs(DAC_Counter));
    cpy(Imm(0x30));
    // if not there yet, just store it
    BCC(StrWave);
}

int NoIncDAC() {
    tya();
    // if we are at zero, do not decrement
    BEQ(StrWave);
    // decrement counter
    dec(Abs(DAC_Counter));
}

int StrWave() {
    // store into DMC load register (??)
    sty(Abs(((SND_DELTA_REG) + (1))));
    // we are done here
    return 0;
}

int Dump_Squ1_Regs() {
    // dump the contents of X and Y into square 1's control regs
    sty(Abs(((SND_SQUARE1_REG) + (1))));
    stx(Abs(SND_SQUARE1_REG));
    return 0;
}

int PlaySqu1Sfx() {
    // do sub to set ctrl regs for square 1, then set frequency regs
    JSR(Dump_Squ1_Regs);
}

int SetFreq_Squ1() {
    // set frequency reg offset for square 1 sound channel
    ldx(Imm(0x0));
}

int Dump_Freq_Regs() {
    tay();
    // use previous contents of A for sound reg offset
    lda(Abs(((offsetof(G, FreqRegLookupTbl)) + (1)), y));
    // if zero, then do not load
    BEQ(NoTone);
    // first byte goes into LSB of frequency divider
    sta(Abs(((SND_REGISTER) + (2)), x));
    // second byte goes into 3 MSB plus extra bit for
    lda(Abs(offsetof(G, FreqRegLookupTbl), y));
    // length counter
    ora(Imm(0b1000));
    sta(Abs(((SND_REGISTER) + (3)), x));
}

int NoTone() {
    return 0;
}

int Dump_Sq2_Regs() {
    // dump the contents of X and Y into square 2's control regs
    stx(Abs(SND_SQUARE2_REG));
    sty(Abs(((SND_SQUARE2_REG) + (1))));
    return 0;
}

int PlaySqu2Sfx() {
    // do sub to set ctrl regs for square 2, then set frequency regs
    JSR(Dump_Sq2_Regs);
}

int SetFreq_Squ2() {
    // set frequency reg offset for square 2 sound channel
    ldx(Imm(0x4));
    // unconditional branch
    BNE(Dump_Freq_Regs);
}

int SetFreq_Tri() {
    // set frequency reg offset for triangle sound channel
    ldx(Imm(0x8));
    // unconditional branch
    BNE(Dump_Freq_Regs);
}

int PlayFlagpoleSlide() {
    // store length of flagpole sound
    lda(Imm(0x40));
    sta(Abs(Squ1_SfxLenCounter));
    // load part of reg contents for flagpole sound
    lda(Imm(0x62));
    JSR(SetFreq_Squ1);
    // now load the rest
    ldx(Imm(0x99));
    BNE(FPS2nd);
}

int PlaySmallJump() {
    // branch here for small mario jumping sound
    lda(Imm(0x26));
    BNE(JumpRegContents);
}

int PlayBigJump() {
    // branch here for big mario jumping sound
    lda(Imm(0x18));
}

int JumpRegContents() {
    // note that small and big jump borrow each others' reg contents
    ldx(Imm(0x82));
    // anyway, this loads the first part of mario's jumping sound
    ldy(Imm(0xa7));
    JSR(PlaySqu1Sfx);
    // store length of sfx for both jumping sounds
    lda(Imm(0x28));
    // then continue on here
    sta(Abs(Squ1_SfxLenCounter));
}

int ContinueSndJump() {
    // jumping sounds seem to be composed of three parts
    lda(Abs(Squ1_SfxLenCounter));
    // check for time to play second part yet
    cmp(Imm(0x25));
    BNE(N2Prt);
    // load second part
    ldx(Imm(0x5f));
    ldy(Imm(0xf6));
    // unconditional branch
    BNE(DmpJpFPS);
}

int N2Prt() {
    // check for third part
    cmp(Imm(0x20));
    BNE(DecJpFPS);
    // load third part
    ldx(Imm(0x48));
}

int FPS2nd() {
    // the flagpole slide sound shares part of third part
    ldy(Imm(0xbc));
}

int DmpJpFPS() {
    JSR(Dump_Squ1_Regs);
    // unconditional branch outta here
    BNE(DecJpFPS);
}

int PlayFireballThrow() {
    lda(Imm(0x5));
    // load reg contents for fireball throw sound
    ldy(Imm(0x99));
    // unconditional branch
    BNE(Fthrow);
}

int PlayBump() {
    // load length of sfx and reg contents for bump sound
    lda(Imm(0xa));
    ldy(Imm(0x93));
}

int Fthrow() {
    // the fireball sound shares reg contents with the bump sound
    ldx(Imm(0x9e));
    sta(Abs(Squ1_SfxLenCounter));
    // load offset for bump sound
    lda(Imm(0xc));
    JSR(PlaySqu1Sfx);
}

int ContinueBumpThrow() {
    // check for second part of bump sound
    lda(Abs(Squ1_SfxLenCounter));
    cmp(Imm(0x6));
    BNE(DecJpFPS);
    // load second part directly
    lda(Imm(0xbb));
    sta(Abs(((SND_SQUARE1_REG) + (1))));
}

int DecJpFPS() {
    // unconditional branch
    BNE(BranchToDecLength1);
}

int Square1SfxHandler() {
    // check for sfx in queue
    ldy(Abs(Square1SoundQueue));
    BEQ(CheckSfx1Buffer);
    // if found, put in buffer
    sty(Abs(Square1SoundBuffer));
    // small jump
    BMI(PlaySmallJump);
    lsr(Abs(Square1SoundQueue));
    // big jump
    BCS(PlayBigJump);
    lsr(Abs(Square1SoundQueue));
    // bump
    BCS(PlayBump);
    lsr(Abs(Square1SoundQueue));
    // swim/stomp
    BCS(PlaySwimStomp);
    lsr(Abs(Square1SoundQueue));
    // smack enemy
    BCS(PlaySmackEnemy);
    lsr(Abs(Square1SoundQueue));
    // pipedown/injury
    BCS(PlayPipeDownInj);
    lsr(Abs(Square1SoundQueue));
    // fireball throw
    BCS(PlayFireballThrow);
    lsr(Abs(Square1SoundQueue));
    // slide flagpole
    BCS(PlayFlagpoleSlide);
}

int CheckSfx1Buffer() {
    // check for sfx in buffer
    lda(Abs(Square1SoundBuffer));
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
}

int ExS1H() {
    return 0;
}

int PlaySwimStomp() {
    // store length of swim/stomp sound
    lda(Imm(0xe));
    sta(Abs(Squ1_SfxLenCounter));
    // store reg contents for swim/stomp sound
    ldy(Imm(0x9c));
    ldx(Imm(0x9e));
    lda(Imm(0x26));
    JSR(PlaySqu1Sfx);
}

int ContinueSwimStomp() {
    // look up reg contents in data section based on
    ldy(Abs(Squ1_SfxLenCounter));
    // length of sound left, used to control sound's
    lda(Abs(((offsetof(G, SwimStompEnvelopeData)) - (1)), y));
    // envelope
    sta(Abs(SND_SQUARE1_REG));
    cpy(Imm(0x6));
    BNE(BranchToDecLength1);
    // when the length counts down to a certain point, put this
    lda(Imm(0x9e));
    // directly into the LSB of square 1's frequency divider
    sta(Abs(((SND_SQUARE1_REG) + (2))));
}

int BranchToDecLength1() {
    // unconditional branch (regardless of how we got here)
    BNE(DecrementSfx1Length);
}

int PlaySmackEnemy() {
    // store length of smack enemy sound
    lda(Imm(0xe));
    ldy(Imm(0xcb));
    ldx(Imm(0x9f));
    sta(Abs(Squ1_SfxLenCounter));
    // store reg contents for smack enemy sound
    lda(Imm(0x28));
    JSR(PlaySqu1Sfx);
    // unconditional branch
    BNE(DecrementSfx1Length);
}

int ContinueSmackEnemy() {
    // check about halfway through
    ldy(Abs(Squ1_SfxLenCounter));
    cpy(Imm(0x8));
    BNE(SmSpc);
    // if we're at the about-halfway point, make the second tone
    lda(Imm(0xa0));
    // in the smack enemy sound
    sta(Abs(((SND_SQUARE1_REG) + (2))));
    lda(Imm(0x9f));
    BNE(SmTick);
}

int SmSpc() {
    // this creates spaces in the sound, giving it its distinct noise
    lda(Imm(0x90));
}

int SmTick() {
    sta(Abs(SND_SQUARE1_REG));
}

int DecrementSfx1Length() {
    // decrement length of sfx
    dec(Abs(Squ1_SfxLenCounter));
    BNE(ExSfx1);
}

int StopSquare1Sfx() {
    // if end of sfx reached, clear buffer
    ldx(Imm(0x0));
    // and stop making the sfx
    stx(Abs(0xf1));
    ldx(Imm(0xe));
    stx(Abs(SND_MASTERCTRL_REG));
    ldx(Imm(0xf));
    stx(Abs(SND_MASTERCTRL_REG));
}

int ExSfx1() {
    return 0;
}

int PlayPipeDownInj() {
    // load length of pipedown sound
    lda(Imm(0x2f));
    sta(Abs(Squ1_SfxLenCounter));
}

int ContinuePipeDownInj() {
    // some bitwise logic, forces the regs
    lda(Abs(Squ1_SfxLenCounter));
    // to be written to only during six specific times
    lsr();
    // during which d3 must be set and d1-0 must be clear
    BCS(NoPDwnL);
    lsr();
    BCS(NoPDwnL);
    anda(Imm(0b10));
    BEQ(NoPDwnL);
    // and this is where it actually gets written in
    ldy(Imm(0x91));
    ldx(Imm(0x9a));
    lda(Imm(0x44));
    JSR(PlaySqu1Sfx);
}

int NoPDwnL() {
    JMP(DecrementSfx1Length);
}

int PlayCoinGrab() {
    // load length of coin grab sound
    lda(Imm(0x35));
    // and part of reg contents
    ldx(Imm(0x8d));
    BNE(CGrab_TTickRegL);
}

int PlayTimerTick() {
    // load length of timer tick sound
    lda(Imm(0x6));
    // and part of reg contents
    ldx(Imm(0x98));
}

int CGrab_TTickRegL() {
    sta(Abs(Squ2_SfxLenCounter));
    // load the rest of reg contents
    ldy(Imm(0x7f));
    // of coin grab and timer tick sound
    lda(Imm(0x42));
    JSR(PlaySqu2Sfx);
}

int ContinueCGrabTTick() {
    // check for time to play second tone yet
    lda(Abs(Squ2_SfxLenCounter));
    // timer tick sound also executes this, not sure why
    cmp(Imm(0x30));
    BNE(N2Tone);
    // if so, load the tone directly into the reg
    lda(Imm(0x54));
    sta(Abs(((SND_SQUARE2_REG) + (2))));
}

int N2Tone() {
    BNE(DecrementSfx2Length);
}

int PlayBlast() {
    // load length of fireworks/gunfire sound
    lda(Imm(0x20));
    sta(Abs(Squ2_SfxLenCounter));
    // load reg contents of fireworks/gunfire sound
    ldy(Imm(0x94));
    lda(Imm(0x5e));
    BNE(SBlasJ);
}

int ContinueBlast() {
    // check for time to play second part
    lda(Abs(Squ2_SfxLenCounter));
    cmp(Imm(0x18));
    BNE(DecrementSfx2Length);
    // load second part reg contents then
    ldy(Imm(0x93));
    lda(Imm(0x18));
}

int SBlasJ() {
    // unconditional branch to load rest of reg contents
    BNE(BlstSJp);
}

int PlayPowerUpGrab() {
    // load length of power-up grab sound
    lda(Imm(0x36));
    sta(Abs(Squ2_SfxLenCounter));
}

int ContinuePowerUpGrab() {
    // load frequency reg based on length left over
    lda(Abs(Squ2_SfxLenCounter));
    // divide by 2
    lsr();
    // alter frequency every other frame
    BCS(DecrementSfx2Length);
    tay();
    // use length left over / 2 for frequency offset
    lda(Abs(((offsetof(G, PowerUpGrabFreqData)) - (1)), y));
    // store reg contents of power-up grab sound
    ldx(Imm(0x5d));
    ldy(Imm(0x7f));
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
}

int DecrementSfx2Length() {
    // decrement length of sfx
    dec(Abs(Squ2_SfxLenCounter));
    BNE(ExSfx2);
}

int EmptySfx2Buffer() {
    // initialize square 2's sound effects buffer
    ldx(Imm(0x0));
    stx(Abs(Square2SoundBuffer));
}

int StopSquare2Sfx() {
    // stop playing the sfx
    ldx(Imm(0xd));
    stx(Abs(SND_MASTERCTRL_REG));
    ldx(Imm(0xf));
    stx(Abs(SND_MASTERCTRL_REG));
}

int ExSfx2() {
    return 0;
}

int Square2SfxHandler() {
    // special handling for the 1-up sound to keep it
    lda(Abs(Square2SoundBuffer));
    // from being interrupted by other sounds on square 2
    anda(Imm(Sfx_ExtraLife));
    BNE(ContinueExtraLife);
    // check for sfx in queue
    ldy(Abs(Square2SoundQueue));
    BEQ(CheckSfx2Buffer);
    // if found, put in buffer and check for the following
    sty(Abs(Square2SoundBuffer));
    // bowser fall
    BMI(PlayBowserFall);
    lsr(Abs(Square2SoundQueue));
    // coin grab
    BCS(PlayCoinGrab);
    lsr(Abs(Square2SoundQueue));
    // power-up reveal
    BCS(PlayGrowPowerUp);
    lsr(Abs(Square2SoundQueue));
    // vine grow
    BCS(PlayGrowVine);
    lsr(Abs(Square2SoundQueue));
    // fireworks/gunfire
    BCS(PlayBlast);
    lsr(Abs(Square2SoundQueue));
    // timer tick
    BCS(PlayTimerTick);
    lsr(Abs(Square2SoundQueue));
    // power-up grab
    BCS(PlayPowerUpGrab);
    lsr(Abs(Square2SoundQueue));
    // 1-up
    BCS(PlayExtraLife);
}

int CheckSfx2Buffer() {
    // check for sfx in buffer
    lda(Abs(Square2SoundBuffer));
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
}

int ExS2H() {
    return 0;
}

int Cont_CGrab_TTick() {
    JMP(ContinueCGrabTTick);
}

int JumpToDecLength2() {
    JMP(DecrementSfx2Length);
}

int PlayBowserFall() {
    // load length of bowser defeat sound
    lda(Imm(0x38));
    sta(Abs(Squ2_SfxLenCounter));
    // load contents of reg for bowser defeat sound
    ldy(Imm(0xc4));
    lda(Imm(0x18));
}

int BlstSJp() {
    BNE(PBFRegs);
}

int ContinueBowserFall() {
    // check for almost near the end
    lda(Abs(Squ2_SfxLenCounter));
    cmp(Imm(0x8));
    BNE(DecrementSfx2Length);
    // if so, load the rest of reg contents for bowser defeat sound
    ldy(Imm(0xa4));
    lda(Imm(0x5a));
}

int PBFRegs() {
    // the fireworks/gunfire sound shares part of reg contents here
    ldx(Imm(0x9f));
}

int EL_LRegs() {
    // this is an unconditional branch outta here
    BNE(LoadSqu2Regs);
}

int PlayExtraLife() {
    // load length of 1-up sound
    lda(Imm(0x30));
    sta(Abs(Squ2_SfxLenCounter));
}

int ContinueExtraLife() {
    lda(Abs(Squ2_SfxLenCounter));
    // load new tones only every eight frames
    ldx(Imm(0x3));
}

int DivLLoop() {
    lsr();
    // if any bits set here, branch to dec the length
    BCS(JumpToDecLength2);
    dex();
    // do this until all bits checked, if none set, continue
    BNE(DivLLoop);
    tay();
    // load our reg contents
    lda(Abs(((offsetof(G, ExtraLifeFreqData)) - (1)), y));
    ldx(Imm(0x82));
    ldy(Imm(0x7f));
    // unconditional branch
    BNE(EL_LRegs);
}

int PlayGrowPowerUp() {
    // load length of power-up reveal sound
    lda(Imm(0x10));
    BNE(GrowItemRegs);
}

int PlayGrowVine() {
    // load length of vine grow sound
    lda(Imm(0x20));
}

int GrowItemRegs() {
    sta(Abs(Squ2_SfxLenCounter));
    // load contents of reg for both sounds directly
    lda(Imm(0x7f));
    sta(Abs(((SND_SQUARE2_REG) + (1))));
    // start secondary counter for both sounds
    lda(Imm(0x0));
    sta(Abs(Sfx_SecondaryCounter));
}

int ContinueGrowItems() {
    // increment secondary counter for both sounds
    inc(Abs(Sfx_SecondaryCounter));
    // this sound doesn't decrement the usual counter
    lda(Abs(Sfx_SecondaryCounter));
    // divide by 2 to get the offset
    lsr();
    tay();
    // have we reached the end yet?
    cpy(Abs(Squ2_SfxLenCounter));
    // if so, branch to jump, and stop playing sounds
    BEQ(StopGrowItems);
    // load contents of other reg directly
    lda(Imm(0x9d));
    sta(Abs(SND_SQUARE2_REG));
    // use secondary counter / 2 as offset for frequency regs
    lda(Abs(offsetof(G, PUp_VGrow_FreqData), y));
    JSR(SetFreq_Squ2);
    return 0;
}

int StopGrowItems() {
    // branch to stop playing sounds
    JMP(EmptySfx2Buffer);
}

int PlayBrickShatter() {
    // load length of brick shatter sound
    lda(Imm(0x20));
    sta(Abs(Noise_SfxLenCounter));
}

int ContinueBrickShatter() {
    lda(Abs(Noise_SfxLenCounter));
    // divide by 2 and check for bit set to use offset
    lsr();
    BCC(DecrementSfx3Length);
    tay();
    // load reg contents of brick shatter sound
    ldx(Abs(offsetof(G, BrickShatterFreqData), y));
    lda(Abs(offsetof(G, BrickShatterEnvData), y));
}

int PlayNoiseSfx() {
    // play the sfx
    sta(Abs(SND_NOISE_REG));
    stx(Abs(((SND_NOISE_REG) + (2))));
    lda(Imm(0x18));
    sta(Abs(((SND_NOISE_REG) + (3))));
}

int DecrementSfx3Length() {
    // decrement length of sfx
    dec(Abs(Noise_SfxLenCounter));
    BNE(ExSfx3);
    // if done, stop playing the sfx
    lda(Imm(0xf0));
    sta(Abs(SND_NOISE_REG));
    lda(Imm(0x0));
    sta(Abs(NoiseSoundBuffer));
}

int ExSfx3() {
    return 0;
}

int NoiseSfxHandler() {
    // check for sfx in queue
    ldy(Abs(NoiseSoundQueue));
    BEQ(CheckNoiseBuffer);
    // if found, put in buffer
    sty(Abs(NoiseSoundBuffer));
    lsr(Abs(NoiseSoundQueue));
    // brick shatter
    BCS(PlayBrickShatter);
    lsr(Abs(NoiseSoundQueue));
    // bowser flame
    BCS(PlayBowserFlame);
}

int CheckNoiseBuffer() {
    // check for sfx in buffer
    lda(Abs(NoiseSoundBuffer));
    // if not found, exit sub
    BEQ(ExNH);
    lsr();
    // brick shatter
    BCS(ContinueBrickShatter);
    lsr();
    // bowser flame
    BCS(ContinueBowserFlame);
}

int ExNH() {
    return 0;
}

int PlayBowserFlame() {
    // load length of bowser flame sound
    lda(Imm(0x40));
    sta(Abs(Noise_SfxLenCounter));
}

int ContinueBowserFlame() {
    lda(Abs(Noise_SfxLenCounter));
    lsr();
    tay();
    // load reg contents of bowser flame sound
    ldx(Imm(0xf));
    lda(Abs(((offsetof(G, BowserFlameEnvData)) - (1)), y));
    // unconditional branch here
    BNE(PlayNoiseSfx);
}

int ContinueMusic() {
    // if we have music, start with square 2 channel
    JMP(HandleSquare2Music);
}

int MusicHandler() {
    // check event music queue
    lda(Abs(EventMusicQueue));
    BNE(LoadEventMusic);
    // check area music queue
    lda(Abs(AreaMusicQueue));
    BNE(LoadAreaMusic);
    // check both buffers
    lda(Abs(EventMusicBuffer));
    ora(Abs(AreaMusicBuffer));
    BNE(ContinueMusic);
    // no music, then leave
    return 0;
}

int LoadEventMusic() {
    // copy event music queue contents to buffer
    sta(Abs(EventMusicBuffer));
    // is it death music?
    cmp(Imm(DeathMusic));
    // if not, jump elsewhere
    BNE(NoStopSfx);
    // stop sfx in square 1 and 2
    JSR(StopSquare1Sfx);
    // but clear only square 1's sfx buffer
    JSR(StopSquare2Sfx);
}

int NoStopSfx() {
    ldx(Abs(AreaMusicBuffer));
    // save current area music buffer to be re-obtained later
    stx(Abs(AreaMusicBuffer_Alt));
    ldy(Imm(0x0));
    // default value for additional length byte offset
    sty(Abs(NoteLengthTblAdder));
    // clear area music buffer
    sty(Abs(AreaMusicBuffer));
    // is it time running out music?
    cmp(Imm(TimeRunningOutMusic));
    BNE(FindEventMusicHeader);
    // load offset to be added to length byte of header
    ldx(Imm(0x8));
    stx(Abs(NoteLengthTblAdder));
    // unconditional branch
    BNE(FindEventMusicHeader);
}

int LoadAreaMusic() {
    // is it underground music?
    cmp(Imm(0x4));
    // no, do not stop square 1 sfx
    BNE(NoStop1);
    JSR(StopSquare1Sfx);
}

int NoStop1() {
    // start counter used only by ground level music
    ldy(Imm(0x10));
}

int GMLoopB() {
    sty(Abs(GroundMusicHeaderOfs));
}

int HandleAreaMusicLoopB() {
    // clear event music buffer
    ldy(Imm(0x0));
    sty(Abs(EventMusicBuffer));
    // copy area music queue contents to buffer
    sta(Abs(AreaMusicBuffer));
    // is it ground level music?
    cmp(Imm(0x1));
    BNE(FindAreaMusicHeader);
    // increment but only if playing ground level music
    inc(Abs(GroundMusicHeaderOfs));
    // is it time to loopback ground level music?
    ldy(Abs(GroundMusicHeaderOfs));
    cpy(Imm(0x32));
    // branch ahead with alternate offset
    BNE(LoadHeader);
    ldy(Imm(0x11));
    // unconditional branch
    BNE(GMLoopB);
}

int FindAreaMusicHeader() {
    // load Y for offset of area music
    ldy(Imm(0x8));
    // residual instruction here
    sty(Abs(MusicOffset_Square2));
}

int FindEventMusicHeader() {
    // increment Y pointer based on previously loaded queue contents
    iny();
    // bit shift and increment until we find a set bit for music
    lsr();
    BCC(FindEventMusicHeader);
}

int LoadHeader() {
    // load offset for header
    lda(Abs(MusicHeaderOffsetData, y));
    tay();
    // now load the header
    lda(Abs(offsetof(G, MusicHeaderData), y));
    sta(Abs(NoteLenLookupTblOfs));
    lda(Abs(((offsetof(G, MusicHeaderData)) + (1)), y));
    sta(Abs(MusicDataLow));
    lda(Abs(((offsetof(G, MusicHeaderData)) + (2)), y));
    sta(Abs(MusicDataHigh));
    lda(Abs(((offsetof(G, MusicHeaderData)) + (3)), y));
    sta(Abs(MusicOffset_Triangle));
    lda(Abs(((offsetof(G, MusicHeaderData)) + (4)), y));
    sta(Abs(MusicOffset_Square1));
    lda(Abs(((offsetof(G, MusicHeaderData)) + (5)), y));
    sta(Abs(MusicOffset_Noise));
    sta(Abs(NoiseDataLoopbackOfs));
    // initialize music note counters
    lda(Imm(0x1));
    sta(Abs(Squ2_NoteLenCounter));
    sta(Abs(Squ1_NoteLenCounter));
    sta(Abs(Tri_NoteLenCounter));
    sta(Abs(Noise_BeatLenCounter));
    // initialize music data offset for square 2
    lda(Imm(0x0));
    sta(Abs(MusicOffset_Square2));
    // initialize alternate control reg data used by square 1
    sta(Abs(AltRegContentFlag));
    // disable triangle channel and reenable it
    lda(Imm(0xb));
    sta(Abs(SND_MASTERCTRL_REG));
    lda(Imm(0xf));
    sta(Abs(SND_MASTERCTRL_REG));
}

int HandleSquare2Music() {
    // decrement square 2 note length
    dec(Abs(Squ2_NoteLenCounter));
    // is it time for more data?  if not, branch to end tasks
    BNE(MiscSqu2MusicTasks);
    // increment square 2 music offset and fetch data
    ldy(Abs(MusicOffset_Square2));
    inc(Abs(MusicOffset_Square2));
    lda(IndY((MusicData)));
    // if zero, the data is a null terminator
    BEQ(EndOfMusicData);
    // if non-negative, data is a note
    BPL(Squ2NoteHandler);
    // otherwise it is length data
    BNE(Squ2LengthHandler);
}

int EndOfMusicData() {
    // check secondary buffer for time running out music
    lda(Abs(EventMusicBuffer));
    cmp(Imm(TimeRunningOutMusic));
    BNE(NotTRO);
    // load previously saved contents of primary buffer
    lda(Abs(AreaMusicBuffer_Alt));
    // and start playing the song again if there is one
    BNE(MusicLoopBack);
}

int NotTRO() {
    // check for victory music (the only secondary that loops)
    anda(Imm(VictoryMusic));
    BNE(VictoryMLoopBack);
    // check primary buffer for any music except pipe intro
    lda(Abs(AreaMusicBuffer));
    anda(Imm(0b1011111));
    // if any area music except pipe intro, music loops
    BNE(MusicLoopBack);
    // clear primary and secondary buffers and initialize
    lda(Imm(0x0));
    // control regs of square and triangle channels
    sta(Abs(AreaMusicBuffer));
    sta(Abs(EventMusicBuffer));
    sta(Abs(SND_TRIANGLE_REG));
    lda(Imm(0x90));
    sta(Abs(SND_SQUARE1_REG));
    sta(Abs(SND_SQUARE2_REG));
    return 0;
}

int MusicLoopBack() {
    JMP(HandleAreaMusicLoopB);
}

int VictoryMLoopBack() {
    JMP(LoadEventMusic);
}

int Squ2LengthHandler() {
    // store length of note
    JSR(ProcessLengthData);
    sta(Abs(Squ2_NoteLenBuffer));
    // fetch another byte (MUST NOT BE LENGTH BYTE!)
    ldy(Abs(MusicOffset_Square2));
    inc(Abs(MusicOffset_Square2));
    lda(IndY((MusicData)));
}

int Squ2NoteHandler() {
    // is there a sound playing on this channel?
    ldx(Abs(Square2SoundBuffer));
    BNE(SkipFqL1);
    // no, then play the note
    JSR(SetFreq_Squ2);
    // check to see if note is rest
    BEQ(Rest);
    // if not, load control regs for square 2
    JSR(LoadControlRegs);
}

int Rest() {
    // save contents of A
    sta(Abs(Squ2_EnvelopeDataCtrl));
    // dump X and Y into square 2 control regs
    JSR(Dump_Sq2_Regs);
}

int SkipFqL1() {
    // save length in square 2 note counter
    lda(Abs(Squ2_NoteLenBuffer));
    sta(Abs(Squ2_NoteLenCounter));
}

int MiscSqu2MusicTasks() {
    // is there a sound playing on square 2?
    lda(Abs(Square2SoundBuffer));
    BNE(HandleSquare1Music);
    // check for death music or d4 set on secondary buffer
    lda(Abs(EventMusicBuffer));
    // note that regs for death music or d4 are loaded by default
    anda(Imm(0b10010001));
    BNE(HandleSquare1Music);
    // check for contents saved from LoadControlRegs
    ldy(Abs(Squ2_EnvelopeDataCtrl));
    BEQ(NoDecEnv1);
    // decrement unless already zero
    dec(Abs(Squ2_EnvelopeDataCtrl));
}

int NoDecEnv1() {
    // do a load of envelope data to replace default
    JSR(LoadEnvelopeData);
    // based on offset set by first load unless playing
    sta(Abs(SND_SQUARE2_REG));
    // death music or d4 set on secondary buffer
    ldx(Imm(0x7f));
    stx(Abs(((SND_SQUARE2_REG) + (1))));
}

int HandleSquare1Music() {
    // is there a nonzero offset here?
    ldy(Abs(MusicOffset_Square1));
    // if not, skip ahead to the triangle channel
    BEQ(HandleTriangleMusic);
    // decrement square 1 note length
    dec(Abs(Squ1_NoteLenCounter));
    // is it time for more data?
    BNE(MiscSqu1MusicTasks);
}

int FetchSqu1MusicData() {
    // increment square 1 music offset and fetch data
    ldy(Abs(MusicOffset_Square1));
    inc(Abs(MusicOffset_Square1));
    lda(IndY((MusicData)));
    // if nonzero, then skip this part
    BNE(Squ1NoteHandler);
    lda(Imm(0x83));
    // store some data into control regs for square 1
    sta(Abs(SND_SQUARE1_REG));
    // and fetch another byte of data, used to give
    lda(Imm(0x94));
    // death music its unique sound
    sta(Abs(((SND_SQUARE1_REG) + (1))));
    sta(Abs(AltRegContentFlag));
    // unconditional branch
    BNE(FetchSqu1MusicData);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    // save contents of A in square 1 note counter
    sta(Abs(Squ1_NoteLenCounter));
    // is there a sound playing on square 1?
    ldy(Abs(Square1SoundBuffer));
    BNE(HandleTriangleMusic);
    txa();
    // change saved data to appropriate note format
    anda(Imm(0b111110));
    // play the note
    JSR(SetFreq_Squ1);
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
}

int SkipCtrlL() {
    // save envelope offset
    sta(Abs(Squ1_EnvelopeDataCtrl));
    JSR(Dump_Squ1_Regs);
}

int MiscSqu1MusicTasks() {
    // is there a sound playing on square 1?
    lda(Abs(Square1SoundBuffer));
    BNE(HandleTriangleMusic);
    // check for death music or d4 set on secondary buffer
    lda(Abs(EventMusicBuffer));
    anda(Imm(0b10010001));
    BNE(DeathMAltReg);
    // check saved envelope offset
    ldy(Abs(Squ1_EnvelopeDataCtrl));
    BEQ(NoDecEnv2);
    // decrement unless already zero
    dec(Abs(Squ1_EnvelopeDataCtrl));
}

int NoDecEnv2() {
    // do a load of envelope data
    JSR(LoadEnvelopeData);
    // based on offset set by first load
    sta(Abs(SND_SQUARE1_REG));
}

int DeathMAltReg() {
    // check for alternate control reg data
    lda(Abs(AltRegContentFlag));
    BNE(DoAltLoad);
    // load this value if zero, the alternate value
    lda(Imm(0x7f));
}

int DoAltLoad() {
    // if nonzero, and let's move on
    sta(Abs(((SND_SQUARE1_REG) + (1))));
}

int HandleTriangleMusic() {
    lda(Abs(MusicOffset_Triangle));
    // decrement triangle note length
    dec(Abs(Tri_NoteLenCounter));
    // is it time for more data?
    BNE(HandleNoiseMusic);
    // increment square 1 music offset and fetch data
    ldy(Abs(MusicOffset_Triangle));
    inc(Abs(MusicOffset_Triangle));
    lda(IndY((MusicData)));
    // if zero, skip all this and move on to noise
    BEQ(LoadTriCtrlReg);
    // if non-negative, data is note
    BPL(TriNoteHandler);
    // otherwise, it is length data
    JSR(ProcessLengthData);
    // save contents of A
    sta(Abs(Tri_NoteLenBuffer));
    lda(Imm(0x1f));
    // load some default data for triangle control reg
    sta(Abs(SND_TRIANGLE_REG));
    // fetch another byte
    ldy(Abs(MusicOffset_Triangle));
    inc(Abs(MusicOffset_Triangle));
    lda(IndY((MusicData)));
    // check once more for nonzero data
    BEQ(LoadTriCtrlReg);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    // save length in triangle note counter
    ldx(Abs(Tri_NoteLenBuffer));
    stx(Abs(Tri_NoteLenCounter));
    lda(Abs(EventMusicBuffer));
    // check for death music or d4 set on secondary buffer
    anda(Imm(0b1101110));
    // if playing any other secondary, skip primary buffer check
    BNE(NotDOrD4);
    // check primary buffer for water or castle level music
    lda(Abs(AreaMusicBuffer));
    anda(Imm(0b1010));
    // if playing any other primary, or death or d4, go on to noise routine
    BEQ(HandleNoiseMusic);
}

int NotDOrD4() {
    // if playing water or castle music or any secondary
    txa();
    // besides death music or d4 set, check length of note
    cmp(Imm(0x12));
    BCS(LongN);
    // check for win castle music again if not playing a long note
    lda(Abs(EventMusicBuffer));
    anda(Imm(EndOfCastleMusic));
    BEQ(MediN);
    // load value $0f if playing the win castle music and playing a short
    lda(Imm(0xf));
    // note, load value $1f if playing water or castle level music or any
    BNE(LoadTriCtrlReg);
}

int MediN() {
    // secondary besides death and d4 except win castle or win castle and playing
    lda(Imm(0x1f));
    // a short note, and load value $ff if playing a long note on water, castle
    BNE(LoadTriCtrlReg);
}

int LongN() {
    // or any secondary (including win castle) except death and d4
    lda(Imm(0xff));
}

int LoadTriCtrlReg() {
    // save final contents of A into control reg for triangle
    sta(Abs(SND_TRIANGLE_REG));
}

int HandleNoiseMusic() {
    // check if playing underground or castle music
    lda(Abs(AreaMusicBuffer));
    anda(Imm(0b11110011));
    // if so, skip the noise routine
    BEQ(ExitMusicHandler);
    // decrement noise beat length
    dec(Abs(Noise_BeatLenCounter));
    // is it time for more data?
    BNE(ExitMusicHandler);
}

int FetchNoiseBeatData() {
    // increment noise beat offset and fetch data
    ldy(Abs(MusicOffset_Noise));
    inc(Abs(MusicOffset_Noise));
    // get noise beat data, if nonzero, branch to handle
    lda(IndY((MusicData)));
    BNE(NoiseBeatHandler);
    // if data is zero, reload original noise beat offset
    lda(Abs(NoiseDataLoopbackOfs));
    // and loopback next time around
    sta(Abs(MusicOffset_Noise));
    // unconditional branch
    BNE(FetchNoiseBeatData);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    // store length in noise beat counter
    sta(Abs(Noise_BeatLenCounter));
    txa();
    // reload data and erase length bits
    anda(Imm(0b111110));
    // if no beat data, silence
    BEQ(SilentBeat);
    // check the beat data and play the appropriate
    cmp(Imm(0x30));
    // noise accordingly
    BEQ(LongBeat);
    cmp(Imm(0x20));
    BEQ(StrongBeat);
    anda(Imm(0b10000));
    BEQ(SilentBeat);
    // short beat data
    lda(Imm(0x1c));
    ldx(Imm(0x3));
    ldy(Imm(0x18));
    BNE(PlayBeat);
}

int StrongBeat() {
    // strong beat data
    lda(Imm(0x1c));
    ldx(Imm(0xc));
    ldy(Imm(0x18));
    BNE(PlayBeat);
}

int LongBeat() {
    // long beat data
    lda(Imm(0x1c));
    ldx(Imm(0x3));
    ldy(Imm(0x58));
    BNE(PlayBeat);
}

int SilentBeat() {
    // silence
    lda(Imm(0x10));
}

int PlayBeat() {
    // load beat data into noise regs
    sta(Abs(SND_NOISE_REG));
    stx(Abs(((SND_NOISE_REG) + (2))));
    sty(Abs(((SND_NOISE_REG) + (3))));
}

int ExitMusicHandler() {
    return 0;
}

int AlternateLengthHandler() {
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
}

int ProcessLengthData() {
    // clear all but the three LSBs
    anda(Imm(0b111));
    clc();
    // add offset loaded from first header byte
    adc(Abs(0xf0));
    // add extra if time running out music
    adc(Abs(NoteLengthTblAdder));
    tay();
    // load length
    lda(Abs(offsetof(G, MusicLengthLookupTbl), y));
    return 0;
}

int LoadControlRegs() {
    // check secondary buffer for win castle music
    lda(Abs(EventMusicBuffer));
    anda(Imm(EndOfCastleMusic));
    BEQ(NotECstlM);
    // this value is only used for win castle music
    lda(Imm(0x4));
    // unconditional branch
    BNE(AllMus);
}

int NotECstlM() {
    lda(Abs(AreaMusicBuffer));
    // check primary buffer for water music
    anda(Imm(0b1111101));
    BEQ(WaterMus);
    // this is the default value for all other music
    lda(Imm(0x8));
    BNE(AllMus);
}

int WaterMus() {
    // this value is used for water music and all other event music
    lda(Imm(0x28));
}

int AllMus() {
    // load contents of other sound regs for square 2
    ldx(Imm(0x82));
    ldy(Imm(0x7f));
    return 0;
}

int LoadEnvelopeData() {
    // check secondary buffer for win castle music
    lda(Abs(EventMusicBuffer));
    anda(Imm(EndOfCastleMusic));
    BEQ(LoadUsualEnvData);
    // load data from offset for win castle music
    lda(Abs(offsetof(G, EndOfCastleMusicEnvData), y));
    return 0;
}

int LoadUsualEnvData() {
    // check primary buffer for water music
    lda(Abs(AreaMusicBuffer));
    anda(Imm(0b1111101));
    BEQ(LoadWaterEventMusEnvData);
    // load default data from offset for all other music
    lda(Abs(offsetof(G, AreaMusicEnvData), y));
    return 0;
}

int LoadWaterEventMusEnvData() {
    // load data from offset for water music and all other event music
    lda(Abs(offsetof(G, WaterEventMusEnvData), y));
    return 0;
}

