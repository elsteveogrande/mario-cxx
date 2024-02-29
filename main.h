#pragma once
#include "util/base.h"


struct G {
// $00 - vram buffer address table low, also used for pseudorandom bit
// $01 - vram buffer address table high
    /* 8000 (32768) */ byte const VRAM_AddrTable_Low[19];
    /* 8013 (32787) */ byte const VRAM_AddrTable_High[19];
    /* 8026 (32806) */ byte const VRAM_Buffer_Offset[2];
    /* 8028 (32808) */ byte const WSelectBufferTemplate[6];
    /* 802e (32814) */ byte const MushroomIconData[8];
    /* 8036 (32822) */ byte const DemoActionData[21];
    /* 804b (32843) */ byte const DemoTimingData[22];
// data is used as tiles for numbers
// that appear when you defeat enemies
    /* 8061 (32865) */ byte const FloateyNumTileData[24];
// high nybble is digit number, low nybble is number to
// add to the digit of the player's score
    /* 8079 (32889) */ byte const ScoreUpdateData[12];
    /* 8085 (32901) */ byte const AreaPalette[4];
// $00 - used as temp counter in GetPlayerColors
    /* 8089 (32905) */ byte const BGColorCtrl_Addr[4];
    /* 808d (32909) */ byte const BackgroundColors[8];
    /* 8095 (32917) */ byte const PlayerColors[12];
    /* 80a1 (32929) */ byte const GameText[1];
    /* 80a2 (32930) */ byte const TopStatusBarLine[39];
    /* 80c9 (32969) */ byte const WorldLivesDisplay[31];
    /* 80e8 (33000) */ byte const TwoPlayerTimeUp[8];
    /* 80f0 (33008) */ byte const OnePlayerTimeUp[11];
    /* 80fb (33019) */ byte const TwoPlayerGameOver[8];
    /* 8103 (33027) */ byte const OnePlayerGameOver[13];
    /* 8110 (33040) */ byte const WarpZoneWelcome[45];
    /* 813d (33085) */ byte const LuigiName[5];
    /* 8142 (33090) */ byte const WarpZoneNumbers[12];
    /* 814e (33102) */ byte const GameTextOffsets[10];
// $00 - used as temporary counter in ColorRotation
    /* 8158 (33112) */ byte const ColorRotatePalette[6];
    /* 815e (33118) */ byte const BlankPalette[8];
// used based on area type
    /* 8166 (33126) */ byte const Palette3Data[16];
// $00 - temp store for offset control bit
// $01 - temp vram buffer offset
// $02 - temp store for vertical high nybble in block buffer routine
// $03 - temp adder for high byte of name table address
// $04, $05 - name table address low/high
// $06, $07 - block buffer address low/high
    /* 8176 (33142) */ byte const BlockGfxData[20];
// METATILE GRAPHICS TABLE
    /* 818a (33162) */ byte const MetatileGraphics_Low[4];
    /* 818e (33166) */ byte const MetatileGraphics_High[4];
    /* 8192 (33170) */ byte const Palette0_MTiles[156];
    /* 822e (33326) */ byte const Palette1_MTiles[184];
    /* 82e6 (33510) */ byte const Palette2_MTiles[40];
    /* 830e (33550) */ byte const Palette3_MTiles[24];
// VRAM BUFFER DATA FOR LOCATIONS IN PRG-ROM
    /* 8326 (33574) */ byte const WaterPaletteData[36];
    /* 834a (33610) */ byte const GroundPaletteData[36];
    /* 836e (33646) */ byte const UndergroundPaletteData[36];
    /* 8392 (33682) */ byte const CastlePaletteData[36];
    /* 83b6 (33718) */ byte const DaySnowPaletteData[8];
    /* 83be (33726) */ byte const NightSnowPaletteData[8];
    /* 83c6 (33734) */ byte const MushroomPaletteData[8];
    /* 83ce (33742) */ byte const BowserPaletteData[8];
    /* 83d6 (33750) */ byte const MarioThanksMessage[20];
    /* 83ea (33770) */ byte const LuigiThanksMessage[20];
    /* 83fe (33790) */ byte const MushroomRetainerSaved[44];
    /* 842a (33834) */ byte const PrincessSaved1[23];
    /* 8441 (33857) */ byte const PrincessSaved2[31];
    /* 8460 (33888) */ byte const WorldSelectMessage1[17];
    /* 8471 (33905) */ byte const WorldSelectMessage2[21];
// $00 - used to store status bar nybbles
// $02 - used as temp vram offset
// $03 - used to store length of status bar number
// status bar name table offset and length data
    /* 8486 (33926) */ byte const StatusBarData[12];
    /* 8492 (33938) */ byte const StatusBarOffset[6];
    /* 8498 (33944) */ byte const DefaultSprOffsets[15];
    /* 84a7 (33959) */ byte const Sprite0Data[4];
    /* 84ab (33963) */ byte const MusicSelectData[6];
    /* 84b1 (33969) */ byte const PlayerStarting_X_Pos[4];
    /* 84b5 (33973) */ byte const AltYPosOffset[2];
    /* 84b7 (33975) */ byte const PlayerStarting_Y_Pos[9];
    /* 84c0 (33984) */ byte const PlayerBGPriorityData[8];
    /* 84c8 (33992) */ byte const GameTimerData[4];
// page numbers are in order from -1 to -4
    /* 84cc (33996) */ byte const HalfwayPageNybbles[16];
// $00 - used as counter, store for low nybble for background, ceiling byte for terrain
// $01 - used to store floor byte for terrain
// $07 - used to store terrain metatile
// $06-$07 - used to store block buffer address
    /* 84dc (34012) */ byte const BSceneDataOffsets[3];
    /* 84df (34015) */ byte const BackSceneryData[144];
    /* 856f (34159) */ byte const BackSceneryMetatiles[36];
    /* 8593 (34195) */ byte const FSceneDataOffsets[3];
    /* 8596 (34198) */ byte const ForeSceneryData[39];
    /* 85bd (34237) */ byte const TerrainMetatiles[4];
    /* 85c1 (34241) */ byte const TerrainRenderBits[32];
// numbers lower than these with the same attribute bits
// will not be stored in the block buffer
    /* 85e1 (34273) */ byte const BlockBuffLowBounds[4];
    /* 85e5 (34277) */ byte const FrenzyIDData[3];
// tiles used by pulleys and rope object
    /* 85e8 (34280) */ byte const PulleyRopeMetatiles[3];
// $06 - used to store upper limit of rows for CastleObject
    /* 85eb (34283) */ byte const CastleMetatiles[55];
    /* 8622 (34338) */ byte const SidePipeShaftData[4];
    /* 8626 (34342) */ byte const SidePipeTopPart[4];
    /* 862a (34346) */ byte const SidePipeBottomPart[4];
    /* 862e (34350) */ byte const VerticalPipeData[8];
    /* 8636 (34358) */ byte const CoinMetatileData[4];
    /* 863a (34362) */ byte const C_ObjectRow[3];
    /* 863d (34365) */ byte const C_ObjectMetatile[3];
    /* 8640 (34368) */ byte const SolidBlockMetatiles[4];
    /* 8644 (34372) */ byte const BrickMetatiles[5];
    /* 8649 (34377) */ byte const StaircaseHeightData[9];
    /* 8652 (34386) */ byte const StaircaseRowData[9];
    /* 865b (34395) */ byte const HoleMetatiles[4];
// $06-$07 - used to store block buffer address used as indirect
    /* 865f (34399) */ byte const BlockBufferAddr[4];
    /* 8663 (34403) */ byte const AreaDataOfsLoopback[11];
// GAME LEVELS DATA
    /* 866e (34414) */ byte const WorldAddrOffsets[8];
    /* 8676 (34422) */ byte const AreaAddrOffsets[1];
    /* 8677 (34423) */ byte const World1Areas[5];
    /* 867c (34428) */ byte const World2Areas[5];
    /* 8681 (34433) */ byte const World3Areas[4];
    /* 8685 (34437) */ byte const World4Areas[5];
    /* 868a (34442) */ byte const World5Areas[4];
    /* 868e (34446) */ byte const World6Areas[4];
    /* 8692 (34450) */ byte const World7Areas[5];
    /* 8697 (34455) */ byte const World8Areas[4];
// bonus area data offsets, included here for comparison purposes
// underground bonus area  - c2
// cloud area 1 (day)      - 2b
// cloud area 2 (night)    - 34
// water area (5-2/6-2)    - 00
// water area (8-4)        - 02
// warp zone area (4-2)    - 2f
    /* 869b (34459) */ byte const EnemyAddrHOffsets[4];
    /* 869f (34463) */ byte const EnemyDataAddrLow[34];
    /* 86c1 (34497) */ byte const EnemyDataAddrHigh[34];
    /* 86e3 (34531) */ byte const AreaDataHOffsets[4];
    /* 86e7 (34535) */ byte const AreaDataAddrLow[34];
    /* 8709 (34569) */ byte const AreaDataAddrHigh[34];
// ENEMY OBJECT DATA
// level 1-4/6-4
    /* 872b (34603) */ byte const E_CastleArea1[39];
// level 4-4
    /* 8752 (34642) */ byte const E_CastleArea2[25];
// level 2-4/5-4
    /* 876b (34667) */ byte const E_CastleArea3[47];
// level 3-4
    /* 879a (34714) */ byte const E_CastleArea4[43];
// level 7-4
    /* 87c5 (34757) */ byte const E_CastleArea5[21];
// level 8-4
    /* 87da (34778) */ byte const E_CastleArea6[58];
// level 3-3
    /* 8814 (34836) */ byte const E_GroundArea1[37];
// level 8-3
    /* 8839 (34873) */ byte const E_GroundArea2[29];
// level 4-1
    /* 8856 (34902) */ byte const E_GroundArea3[14];
// level 6-2
    /* 8864 (34916) */ byte const E_GroundArea4[39];
// level 3-1
    /* 888b (34955) */ byte const E_GroundArea5[49];
// level 1-1
    /* 88bc (35004) */ byte const E_GroundArea6[30];
// level 1-3/5-3
    /* 88da (35034) */ byte const E_GroundArea7[29];
// level 2-3/7-3
    /* 88f7 (35063) */ byte const E_GroundArea8[21];
// level 2-1
    /* 890c (35084) */ byte const E_GroundArea9[42];
// end of data terminator here is also used by pipe intro area
    /* 8936 (35126) */ byte const E_GroundArea10[1];
// level 5-1
    /* 8937 (35127) */ byte const E_GroundArea11[36];
// cloud level used in levels 2-1 and 5-2
    /* 895b (35163) */ byte const E_GroundArea12[9];
// level 4-3
    /* 8964 (35172) */ byte const E_GroundArea13[37];
// level 6-3
    /* 8989 (35209) */ byte const E_GroundArea14[35];
// level 6-1
    /* 89ac (35244) */ byte const E_GroundArea15[9];
// warp zone area used in level 4-2
    /* 89b5 (35253) */ byte const E_GroundArea16[1];
// level 8-1
    /* 89b6 (35254) */ byte const E_GroundArea17[58];
// level 5-2
    /* 89f0 (35312) */ byte const E_GroundArea18[43];
// level 8-2
    /* 8a1b (35355) */ byte const E_GroundArea19[46];
// level 7-1
    /* 8a49 (35401) */ byte const E_GroundArea20[28];
// cloud level used in levels 3-1 and 6-2
    /* 8a65 (35429) */ byte const E_GroundArea21[9];
// level 3-2
    /* 8a6e (35438) */ byte const E_GroundArea22[37];
// level 1-2
    /* 8a93 (35475) */ byte const E_UndergroundArea1[45];
// level 4-2
    /* 8ac0 (35520) */ byte const E_UndergroundArea2[46];
// underground bonus rooms area used in many levels
    /* 8aee (35566) */ byte const E_UndergroundArea3[45];
// water area used in levels 5-2 and 6-2
    /* 8b1b (35611) */ byte const E_WaterArea1[17];
// level 2-2/7-2
    /* 8b2c (35628) */ byte const E_WaterArea2[42];
// water area used in level 8-4
    /* 8b56 (35670) */ byte const E_WaterArea3[20];
// AREA OBJECT DATA
// level 1-4/6-4
    /* 8b6a (35690) */ byte const L_CastleArea1[97];
// level 4-4
    /* 8bcb (35787) */ byte const L_CastleArea2[127];
// level 2-4/5-4
    /* 8c4a (35914) */ byte const L_CastleArea3[115];
// level 3-4
    /* 8cbd (36029) */ byte const L_CastleArea4[109];
// level 7-4
    /* 8d2a (36138) */ byte const L_CastleArea5[139];
// level 8-4
    /* 8db5 (36277) */ byte const L_CastleArea6[113];
// level 3-3
    /* 8e26 (36390) */ byte const L_GroundArea1[99];
// level 8-3
    /* 8e89 (36489) */ byte const L_GroundArea2[105];
// level 4-1
    /* 8ef2 (36594) */ byte const L_GroundArea3[83];
// level 6-2
    /* 8f45 (36677) */ byte const L_GroundArea4[143];
// level 3-1
    /* 8fd4 (36820) */ byte const L_GroundArea5[117];
// level 1-1
    /* 9049 (36937) */ byte const L_GroundArea6[101];
// level 1-3/5-3
    /* 90ae (37038) */ byte const L_GroundArea7[85];
// level 2-3/7-3
    /* 9103 (37123) */ byte const L_GroundArea8[133];
// level 2-1
    /* 9188 (37256) */ byte const L_GroundArea9[101];
// pipe intro area
    /* 91ed (37357) */ byte const L_GroundArea10[9];
// level 5-1
    /* 91f6 (37366) */ byte const L_GroundArea11[63];
// cloud level used in levels 2-1 and 5-2
    /* 9235 (37429) */ byte const L_GroundArea12[21];
// level 4-3
    /* 924a (37450) */ byte const L_GroundArea13[103];
// level 6-3
    /* 92b1 (37553) */ byte const L_GroundArea14[101];
// level 6-1
    /* 9316 (37654) */ byte const L_GroundArea15[115];
// warp zone area used in level 4-2
    /* 9389 (37769) */ byte const L_GroundArea16[49];
// level 8-1
    /* 93ba (37818) */ byte const L_GroundArea17[147];
// level 5-2
    /* 944d (37965) */ byte const L_GroundArea18[115];
// level 8-2
    /* 94c0 (38080) */ byte const L_GroundArea19[121];
// level 7-1
    /* 9539 (38201) */ byte const L_GroundArea20[89];
// cloud level used in levels 3-1 and 6-2
    /* 9592 (38290) */ byte const L_GroundArea21[43];
// level 3-2
    /* 95bd (38333) */ byte const L_GroundArea22[51];
// level 1-2
    /* 95f0 (38384) */ byte const L_UndergroundArea1[163];
// level 4-2
    /* 9693 (38547) */ byte const L_UndergroundArea2[161];
// underground bonus rooms area used in many levels
    /* 9734 (38708) */ byte const L_UndergroundArea3[141];
// water area used in levels 5-2 and 6-2
    /* 97c1 (38849) */ byte const L_WaterArea1[63];
// level 2-2/7-2
    /* 9800 (38912) */ byte const L_WaterArea2[123];
// water area used in level 8-4
    /* 987b (39035) */ byte const L_WaterArea3[28];
    /* 9897 (39063) */ byte const X_SubtracterData[2];
    /* 9899 (39065) */ byte const OffscrJoypadBitsData[2];
    /* 989b (39067) */ byte const Hidden1UpCoinAmts[8];
    /* 98a3 (39075) */ byte const ClimbAdderLow[4];
    /* 98a7 (39079) */ byte const ClimbAdderHigh[4];
// $00 - used to store offset to friction data
    /* 98ab (39083) */ byte const JumpMForceData[7];
    /* 98b2 (39090) */ byte const FallMForceData[7];
    /* 98b9 (39097) */ byte const PlayerYSpdData[7];
    /* 98c0 (39104) */ byte const InitMForceData[7];
    /* 98c7 (39111) */ byte const MaxLeftXSpdData[3];
    /* 98ca (39114) */ byte const MaxRightXSpdData[4];
    /* 98ce (39118) */ byte const FrictionData[3];
    /* 98d1 (39121) */ byte const Climb_Y_SpeedData[3];
    /* 98d4 (39124) */ byte const Climb_Y_MForceData[3];
    /* 98d7 (39127) */ byte const PlayerAnimTmrData[3];
    /* 98da (39130) */ byte const FireballXSpdData[2];
    /* 98dc (39132) */ byte const Bubble_MForceData[2];
    /* 98de (39134) */ byte const BubbleTimerData[2];
    /* 98e0 (39136) */ byte const FlagpoleScoreMods[5];
    /* 98e5 (39141) */ byte const FlagpoleScoreDigits[5];
    /* 98ea (39146) */ byte const Jumpspring_Y_PosData[4];
// $06-$07 - used as address to block buffer data
// $02 - used as vertical high nybble of block buffer offset
    /* 98ee (39150) */ byte const VineHeightData[2];
    /* 98f0 (39152) */ byte const CannonBitmasks[2];
    /* 98f2 (39154) */ byte const BulletBillXSpdData[2];
    /* 98f4 (39156) */ byte const HammerEnemyOfsData[9];
    /* 98fd (39165) */ byte const HammerXSpdData[2];
    /* 98ff (39167) */ byte const CoinTallyOffsets[2];
    /* 9901 (39169) */ byte const ScoreOffsets[2];
    /* 9903 (39171) */ byte const StatusBarNybbles[2];
// These apply to all routines in this section unless otherwise noted:
// $00 - used to store metatile from block buffer routine
// $02 - used to store vertical high nybble offset from block buffer routine
// $05 - used to store metatile stored in A at beginning of PlayerHeadCollision
// $06-$07 - used as block buffer address indirect
    /* 9905 (39173) */ byte const BlockYPosAdderData[2];
    /* 9907 (39175) */ byte const BrickQBlockMetatiles[14];
    /* 9915 (39189) */ byte const MaxSpdBlockData[2];
// loop command data
    /* 9917 (39191) */ byte const LoopCmdWorldNumber[11];
    /* 9922 (39202) */ byte const LoopCmdPageNumber[11];
    /* 992d (39213) */ byte const LoopCmdYPosition[11];
    /* 9938 (39224) */ byte const NormalXSpdData[2];
    /* 993a (39226) */ byte const HBroWalkingTimerData[2];
// $01-$03 - used to hold pseudorandom difference adjusters
    /* 993c (39228) */ byte const PRDiffAdjustData[12];
    /* 9948 (39240) */ byte const FirebarSpinSpdData[5];
    /* 994d (39245) */ byte const FirebarSpinDirData[5];
// $00-$01 - used to hold pseudorandom bits
    /* 9952 (39250) */ byte const FlyCCXPositionData[16];
    /* 9962 (39266) */ byte const FlyCCXSpeedData[12];
    /* 996e (39278) */ byte const FlyCCTimerData[4];
    /* 9972 (39282) */ byte const FlameYPosData[4];
    /* 9976 (39286) */ byte const FlameYMFAdderData[2];
    /* 9978 (39288) */ byte const FireworksXPosData[6];
    /* 997e (39294) */ byte const FireworksYPosData[6];
    /* 9984 (39300) */ byte const Bitmasks[8];
    /* 998c (39308) */ byte const Enemy17YPosData[8];
    /* 9994 (39316) */ byte const SwimCC_IDData[2];
    /* 9996 (39318) */ byte const PlatPosDataLow[3];
    /* 9999 (39321) */ byte const PlatPosDataHigh[3];
// $00 - used in HammerBroJumpCode as bitmask
    /* 999c (39324) */ byte const HammerThrowTmrData[2];
    /* 999e (39326) */ byte const XSpeedAdderData[4];
    /* 99a2 (39330) */ byte const RevivedXSpeed[4];
    /* 99a6 (39334) */ byte const HammerBroJumpLData[2];
    /* 99a8 (39336) */ byte const BlooberBitmasks[2];
// $02 - used to hold preset values
// $03 - used to hold enemy state
    /* 99aa (39338) */ byte const SwimCCXMoveData[4];
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
    /* 99ae (39342) */ byte const FirebarPosLookupTbl[99];
    /* 9a11 (39441) */ byte const FirebarMirrorData[4];
    /* 9a15 (39445) */ byte const FirebarTblOffsets[12];
    /* 9a21 (39457) */ byte const FirebarYPos[2];
    /* 9a23 (39459) */ byte const PRandomSubtracter[5];
    /* 9a28 (39464) */ byte const FlyCCBPriority[5];
// $00 - used to hold horizontal difference
// $01-$03 - used to hold difference adjusters
    /* 9a2d (39469) */ byte const LakituDiffAdj[3];
// $04-$05 - used to store name table address in little endian order
    /* 9a30 (39472) */ byte const BridgeCollapseData[15];
    /* 9a3f (39487) */ byte const PRandomRange[4];
// $00 - used to hold movement force and tile number
// $01 - used to hold sprite attribute data
    /* 9a43 (39491) */ byte const FlameTimerData[8];
    /* 9a4b (39499) */ byte const StarFlagYPosAdder[4];
    /* 9a4f (39503) */ byte const StarFlagXPosAdder[4];
    /* 9a53 (39507) */ byte const StarFlagTileData[4];
    /* 9a57 (39511) */ byte const BowserIdentities[8];
    /* 9a5f (39519) */ byte const ResidualXSpdData[2];
    /* 9a61 (39521) */ byte const KickedShellXSpdData[2];
    /* 9a63 (39523) */ byte const DemotedKoopaXSpdData[2];
    /* 9a65 (39525) */ byte const KickedShellPtsData[3];
    /* 9a68 (39528) */ byte const StompedEnemyPtsData[4];
    /* 9a6c (39532) */ byte const RevivalRateData[2];
// $01 - used to hold enemy offset for second enemy
    /* 9a6e (39534) */ byte const SetBitsMask[7];
    /* 9a75 (39541) */ byte const ClearBitsMask[7];
    /* 9a7c (39548) */ byte const PlayerPosSPlatData[2];
// $00-$01 - used to hold many values, essentially temp variables
// $04 - holds lower nybble of vertical coordinate from block buffer routine
// $eb - used to hold block buffer adder
    /* 9a7e (39550) */ byte const PlayerBGUpperExtent[2];
    /* 9a80 (39552) */ byte const AreaChangeTimerData[2];
// $02 - high nybble of vertical coordinate from block buffer
// $04 - low nybble of horizontal coordinate from block buffer
// $06-$07 - block buffer address
    /* 9a82 (39554) */ byte const ClimbXPosAdder[2];
    /* 9a84 (39556) */ byte const ClimbPLocAdder[2];
    /* 9a86 (39558) */ byte const FlagpoleYPosData[5];
    /* 9a8b (39563) */ byte const SolidMTileUpperExt[4];
    /* 9a8f (39567) */ byte const ClimbMTileUpperExt[4];
// $06-$07 - address from block buffer routine
    /* 9a93 (39571) */ byte const EnemyBGCStateData[6];
    /* 9a99 (39577) */ byte const EnemyBGCXSpdData[2];
// $00 - used to hold one of bitmasks, or offset
// $01 - used for relative X coordinate, also used to store middle screen page location
// $02 - used for relative Y coordinate, also used to store middle screen coordinate
// this data added to relative coordinates of sprite objects
// stored in order: left edge, top edge, right edge, bottom edge
    /* 9a9b (39579) */ byte const BoundBoxCtrlData[48];
    /* 9acb (39627) */ byte const BlockBufferAdderData[3];
    /* 9ace (39630) */ byte const BlockBuffer_X_Adder[28];
    /* 9aea (39658) */ byte const BlockBuffer_Y_Adder[28];
// $00 - offset to vine Y coordinate adder
// $02 - offset to sprite data
    /* 9b06 (39686) */ byte const VineYPosAdder[2];
    /* 9b08 (39688) */ byte const FirstSprXPos[4];
    /* 9b0c (39692) */ byte const FirstSprYPos[4];
    /* 9b10 (39696) */ byte const SecondSprXPos[4];
    /* 9b14 (39700) */ byte const SecondSprYPos[4];
    /* 9b18 (39704) */ byte const FirstSprTilenum[4];
    /* 9b1c (39708) */ byte const SecondSprTilenum[4];
    /* 9b20 (39712) */ byte const HammerSprAttrib[4];
// $00-$01 - used to hold tile numbers ($01 addressed in draw floatey number part)
// $02 - used to hold Y coordinate for floatey number
// $03 - residual byte used for flip (but value set here affects nothing)
// $04 - attribute byte for floatey number
// $05 - used as X coordinate for floatey number
    /* 9b24 (39716) */ byte const FlagpoleScoreNumTiles[10];
    /* 9b2e (39726) */ byte const JumpingCoinTiles[4];
// $00-$01 - used to hold tiles for drawing the power-up, $00 also used to hold power-up type
// $02 - used to hold bottom row Y position
// $03 - used to hold flip control (not used here)
// $04 - used to hold sprite attributes
// $05 - used to hold X position
// $07 - counter
// tiles arranged in top left, right, bottom left, right order
    /* 9b32 (39730) */ byte const PowerUpGfxTable[16];
    /* 9b42 (39746) */ byte const PowerUpAttributes[4];
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
    /* 9b46 (39750) */ byte const EnemyGraphicsTable[258];
    /* 9c48 (40008) */ byte const EnemyGfxTableOffsets[27];
    /* 9c63 (40035) */ byte const EnemyAttributeData[27];
    /* 9c7e (40062) */ byte const EnemyAnimTimingBMask[2];
    /* 9c80 (40064) */ byte const JumpspringFrameOffsets[5];
// $00-$01 - tile numbers
// $02 - relative Y position
// $03 - horizontal flip flag (not used here)
// $04 - attributes
// $05 - relative X position
    /* 9c85 (40069) */ byte const DefaultBlockObjTiles[4];
    /* 9c89 (40073) */ byte const ExplosionTiles[3];
// $00 - used to store player's vertical offscreen bits
    /* 9c8c (40076) */ byte const PlayerGfxTblOffsets[16];
// tiles arranged in order, 2 tiles per row, top to bottom
    /* 9c9c (40092) */ byte const PlayerGraphicsTable[208];
    /* 9d6c (40300) */ byte const SwimKickTileNum[2];
    /* 9d6e (40302) */ byte const IntermediatePlayerData[6];
    /* 9d74 (40308) */ byte const ChangeSizeOffsetAdder[20];
    /* 9d88 (40328) */ byte const ObjOffsetData[3];
// (these apply to these three subsections)
// $04 - used to store proper offset
// $05 - used as adder in DividePDiff
// $06 - used to store preset value used to compare to pixel difference in $07
// $07 - used to store difference between coordinates of object and screen edges
    /* 9d8b (40331) */ byte const XOffscreenBitsData[16];
    /* 9d9b (40347) */ byte const DefaultXOnscreenOfs[3];
    /* 9d9e (40350) */ byte const YOffscreenBitsData[9];
    /* 9da7 (40359) */ byte const DefaultYOnscreenOfs[3];
    /* 9daa (40362) */ byte const HighPosUnitData[2];
    /* 9dac (40364) */ byte const SwimStompEnvelopeData[14];
    /* 9dba (40378) */ byte const ExtraLifeFreqData[6];
    /* 9dc0 (40384) */ byte const PowerUpGrabFreqData[30];
    /* 9dde (40414) */ byte const PUp_VGrow_FreqData[32];
    /* 9dfe (40446) */ byte const BrickShatterFreqData[16];
// music header offsets
    /* 9e0e (40462) */ byte const MusicHeaderData[49];
// music headers
// header format is as follows:
// 1 byte - length byte offset
// 2 bytes -  music data address
// 1 byte - triangle data offset
// 1 byte - square 1 data offset
// 1 byte - noise data offset (not used by secondary music)
    /* 9e3f (40511) */ byte const TimeRunningOutHdr[5];
    /* 9e44 (40516) */ byte const Star_CloudHdr[6];
    /* 9e4a (40522) */ byte const EndOfLevelMusHdr[5];
    /* 9e4f (40527) */ byte const ResidualHeaderData[5];
    /* 9e54 (40532) */ byte const UndergroundMusHdr[5];
    /* 9e59 (40537) */ byte const SilenceHdr[4];
    /* 9e5d (40541) */ byte const CastleMusHdr[5];
    /* 9e62 (40546) */ byte const VictoryMusHdr[5];
    /* 9e67 (40551) */ byte const GameOverMusHdr[5];
    /* 9e6c (40556) */ byte const WaterMusHdr[6];
    /* 9e72 (40562) */ byte const WinCastleMusHdr[5];
    /* 9e77 (40567) */ byte const GroundLevelPart1Hdr[6];
    /* 9e7d (40573) */ byte const GroundLevelPart2AHdr[6];
    /* 9e83 (40579) */ byte const GroundLevelPart2BHdr[6];
    /* 9e89 (40585) */ byte const GroundLevelPart2CHdr[6];
    /* 9e8f (40591) */ byte const GroundLevelPart3AHdr[6];
    /* 9e95 (40597) */ byte const GroundLevelPart3BHdr[6];
    /* 9e9b (40603) */ byte const GroundLevelLeadInHdr[6];
    /* 9ea1 (40609) */ byte const GroundLevelPart4AHdr[6];
    /* 9ea7 (40615) */ byte const GroundLevelPart4BHdr[6];
    /* 9ead (40621) */ byte const GroundLevelPart4CHdr[6];
    /* 9eb3 (40627) */ byte const DeathMusHdr[6];
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
    /* 9eb9 (40633) */ byte const Star_CloudMData[73];
    /* 9f02 (40706) */ byte const GroundM_P1Data[27];
    /* 9f1d (40733) */ byte const SilenceData[45];
    /* 9f4a (40778) */ byte const GroundM_P2AData[44];
    /* 9f76 (40822) */ byte const GroundM_P2BData[40];
    /* 9f9e (40862) */ byte const GroundM_P2CData[37];
    /* 9fc3 (40899) */ byte const GroundM_P3AData[25];
    /* 9fdc (40924) */ byte const GroundM_P3BData[30];
    /* 9ffa (40954) */ byte const GroundMLdInData[44];
    /* a026 (40998) */ byte const GroundM_P4AData[38];
    /* a04c (41036) */ byte const GroundM_P4BData[39];
    /* a073 (41075) */ byte const DeathMusData[2];
    /* a075 (41077) */ byte const GroundM_P4CData[48];
    /* a0a5 (41125) */ byte const CastleMusData[161];
    /* a146 (41286) */ byte const GameOverMusData[45];
    /* a173 (41331) */ byte const TimeRunOutMusData[62];
    /* a1b1 (41393) */ byte const WinLevelMusData[97];
// square 2 and triangle use the same data, square 1 is unused
    /* a212 (41490) */ byte const UndergroundMusData[65];
// noise data directly follows square 2 here unlike in other songs
    /* a253 (41555) */ byte const WaterMusData[255];
    /* a352 (41810) */ byte const EndOfCastleMusData[119];
    /* a3c9 (41929) */ byte const VictoryMusData[56];
    /* a401 (41985) */ byte const FreqRegLookupTbl[102];
    /* a467 (42087) */ byte const MusicLengthLookupTbl[48];
    /* a497 (42135) */ byte const EndOfCastleMusicEnvData[4];
    /* a49b (42139) */ byte const AreaMusicEnvData[8];
    /* a4a3 (42147) */ byte const WaterEventMusEnvData[40];
    /* a4cb (42187) */ byte const BowserFlameEnvData[32];
    /* a4eb (42219) */ byte const BrickShatterEnvData[16];
} __attribute__((__packed__));
extern G g;

#define                            PPU_CTRL_REG1               0x2000
#define                            PPU_CTRL_REG2               0x2001
#define                               PPU_STATUS               0x2002
#define                             PPU_SPR_ADDR               0x2003
#define                             PPU_SPR_DATA               0x2004
#define                           PPU_SCROLL_REG               0x2005
#define                              PPU_ADDRESS               0x2006
#define                                 PPU_DATA               0x2007
#define                             SND_REGISTER               0x4000
#define                          SND_SQUARE1_REG               0x4000
#define                          SND_SQUARE2_REG               0x4004
#define                         SND_TRIANGLE_REG               0x4008
#define                            SND_NOISE_REG               0x400c
#define                            SND_DELTA_REG               0x4010
#define                       SND_MASTERCTRL_REG               0x4015
#define                                  SPR_DMA               0x4014
#define                              JOYPAD_PORT               0x4016
#define                             JOYPAD_PORT1               0x4016
#define                             JOYPAD_PORT2               0x4017
// GAME SPECIFIC DEFINES
#define                             ObjectOffset                  0x8
#define                             FrameCounter                  0x9
#define                          SavedJoypadBits                0x6fc
#define                         SavedJoypad1Bits                0x6fc
#define                         SavedJoypad2Bits                0x6fd
#define                            JoypadBitMask                0x74a
#define                           JoypadOverride                0x758
#define                              A_B_Buttons                  0xa
#define                      PreviousA_B_Buttons                  0xd
#define                          Up_Down_Buttons                  0xb
#define                       Left_Right_Buttons                  0xc
#define                     GameEngineSubroutine                  0xe
#define                     Mirror_PPU_CTRL_REG1                0x778
#define                     Mirror_PPU_CTRL_REG2                0x779
#define                                 OperMode                0x770
#define                            OperMode_Task                0x772
#define                        ScreenRoutineTask                0x73c
#define                          GamePauseStatus                0x776
#define                           GamePauseTimer                0x777
#define                               DemoAction                0x717
#define                          DemoActionTimer                0x718
#define                             TimerControl                0x747
#define                     IntervalTimerControl                0x77f
#define                                   Timers                0x780
#define                              SelectTimer                0x780
#define                          PlayerAnimTimer                0x781
#define                            JumpSwimTimer                0x782
#define                             RunningTimer                0x783
#define                         BlockBounceTimer                0x784
#define                       SideCollisionTimer                0x785
#define                          JumpspringTimer                0x786
#define                       GameTimerCtrlTimer                0x787
#define                           ClimbSideTimer                0x789
#define                          EnemyFrameTimer                0x78a
#define                         FrenzyEnemyTimer                0x78f
#define                    BowserFireBreathTimer                0x790
#define                               StompTimer                0x791
#define                           AirBubbleTimer                0x792
#define                      ScrollIntervalTimer                0x795
#define                       EnemyIntervalTimer                0x796
#define                           BrickCoinTimer                0x79d
#define                              InjuryTimer                0x79e
#define                      StarInvincibleTimer                0x79f
#define                              ScreenTimer                0x7a0
#define                            WorldEndTimer                0x7a1
#define                                DemoTimer                0x7a2
#define                              Sprite_Data                0x200
#define                        Sprite_Y_Position                0x200
#define                        Sprite_Tilenumber                0x201
#define                        Sprite_Attributes                0x202
#define                        Sprite_X_Position                0x203
#define                       ScreenEdge_PageLoc                0x71a
#define                         ScreenEdge_X_Pos                0x71c
#define                       ScreenLeft_PageLoc                0x71a
#define                      ScreenRight_PageLoc                0x71b
#define                         ScreenLeft_X_Pos                0x71c
#define                        ScreenRight_X_Pos                0x71d
#define                          PlayerFacingDir                 0x33
#define                       DestinationPageLoc                 0x34
#define                       VictoryWalkControl                 0x35
#define                         ScrollFractional                0x768
#define                        PrimaryMsgCounter                0x719
#define                      SecondaryMsgCounter                0x749
#define                         HorizontalScroll                0x73f
#define                           VerticalScroll                0x740
#define                               ScrollLock                0x723
#define                          ScrollThirtyTwo                0x73d
#define                          Player_X_Scroll                0x6ff
#define                     Player_Pos_ForScroll                0x755
#define                             ScrollAmount                0x775
#define                                 AreaData                 0xe7
#define                              AreaDataLow                 0xe7
#define                             AreaDataHigh                 0xe8
#define                                EnemyData                 0xe9
#define                             EnemyDataLow                 0xe9
#define                            EnemyDataHigh                 0xea
#define                        AreaParserTaskNum                0x71f
#define                               ColumnSets                0x71e
#define                           CurrentPageLoc                0x725
#define                         CurrentColumnPos                0x726
#define                          BackloadingFlag                0x728
#define                     BehindAreaParserFlag                0x729
#define                        AreaObjectPageLoc                0x72a
#define                        AreaObjectPageSel                0x72b
#define                           AreaDataOffset                0x72c
#define                      AreaObjOffsetBuffer                0x72d
#define                         AreaObjectLength                0x730
#define                         StaircaseControl                0x734
#define                         AreaObjectHeight                0x735
#define                     MushroomLedgeHalfLen                0x736
#define                          EnemyDataOffset                0x739
#define                       EnemyObjectPageLoc                0x73a
#define                       EnemyObjectPageSel                0x73b
#define                           MetatileBuffer                0x6a1
#define                     BlockBufferColumnPos                0x6a0
#define                        CurrentNTAddr_Low                0x721
#define                       CurrentNTAddr_High                0x720
#define                          AttributeBuffer                0x3f9
#define                              LoopCommand                0x745
#define                            DisplayDigits                0x7d7
#define                          TopScoreDisplay                0x7d7
#define                      ScoreAndCoinDisplay                0x7dd
#define                       PlayerScoreDisplay                0x7dd
#define                         GameTimerDisplay                0x7f8
#define                            DigitModifier                0x134
#define                         VerticalFlipFlag                0x109
#define                       FloateyNum_Control                0x110
#define                        ShellChainCounter                0x125
#define                         FloateyNum_Timer                0x12c
#define                         FloateyNum_X_Pos                0x117
#define                         FloateyNum_Y_Pos                0x11e
#define                       FlagpoleFNum_Y_Pos                0x10d
#define                    FlagpoleFNum_YMFDummy                0x10e
#define                            FlagpoleScore                0x10f
#define                    FlagpoleCollisionYPos                0x70f
#define                        StompChainCounter                0x484
#define                      VRAM_Buffer1_Offset                0x300
#define                             VRAM_Buffer1                0x301
#define                      VRAM_Buffer2_Offset                0x340
#define                             VRAM_Buffer2                0x341
#define                     VRAM_Buffer_AddrCtrl                0x773
#define                     Sprite0HitDetectFlag                0x722
#define                        DisableScreenFlag                0x774
#define                      DisableIntermediate                0x769
#define                        ColorRotateOffset                0x6d4
#define                           TerrainControl                0x727
#define                                AreaStyle                0x733
#define                        ForegroundScenery                0x741
#define                        BackgroundScenery                0x742
#define                        CloudTypeOverride                0x743
#define                      BackgroundColorCtrl                0x744
#define                                 AreaType                0x74e
#define                         AreaAddrsLOffset                0x74f
#define                              AreaPointer                0x750
#define                       PlayerEntranceCtrl                0x710
#define                         GameTimerSetting                0x715
#define                       AltEntranceControl                0x752
#define                             EntrancePage                0x751
#define                          NumberOfPlayers                0x77a
#define                          WarpZoneControl                0x6d6
#define                          ChangeAreaTimer                0x6de
#define                     MultiLoopCorrectCntr                0x6d9
#define                        MultiLoopPassCntr                0x6da
#define                    FetchNewGameTimerFlag                0x757
#define                     GameTimerExpiredFlag                0x759
#define                          PrimaryHardMode                0x76a
#define                        SecondaryHardMode                0x6cc
#define                        WorldSelectNumber                0x76b
#define                    WorldSelectEnableFlag                0x7fc
#define                            ContinueWorld                0x7fd
#define                            CurrentPlayer                0x753
#define                               PlayerSize                0x754
#define                             PlayerStatus                0x756
#define                       OnscreenPlayerInfo                0x75a
// used by current player
#define                            NumberofLives                0x75a
#define                              HalfwayPage                0x75b
// the actual dash number
#define                              LevelNumber                0x75c
#define                            Hidden1UpFlag                0x75d
#define                                CoinTally                0x75e
#define                              WorldNumber                0x75f
// internal number used to find areas
#define                               AreaNumber                0x760
#define                         CoinTallyFor1Ups                0x748
#define                      OffscreenPlayerInfo                0x761
// used by offscreen player
#define                     OffScr_NumberofLives                0x761
#define                       OffScr_HalfwayPage                0x762
#define                       OffScr_LevelNumber                0x763
#define                     OffScr_Hidden1UpFlag                0x764
#define                         OffScr_CoinTally                0x765
#define                       OffScr_WorldNumber                0x766
#define                        OffScr_AreaNumber                0x767
#define                     BalPlatformAlignment                0x3a0
#define                        Platform_X_Scroll                0x3a1
#define                    PlatformCollisionFlag                0x3a2
#define                         YPlatformTopYPos                0x401
#define                      YPlatformCenterYPos                 0x58
#define                       BrickCoinTimerFlag                0x6bc
#define                      StarFlagTaskControl                0x746
#define                       PseudoRandomBitReg                0x7a7
#define                       WarmBootValidation                0x7ff
#define                      SprShuffleAmtOffset                0x6e0
#define                            SprShuffleAmt                0x6e1
#define                            SprDataOffset                0x6e4
#define                     Player_SprDataOffset                0x6e4
#define                      Enemy_SprDataOffset                0x6e5
#define                      Block_SprDataOffset                0x6ec
#define                        Alt_SprDataOffset                0x6ec
#define                     Bubble_SprDataOffset                0x6ee
#define                      FBall_SprDataOffset                0x6f1
#define                       Misc_SprDataOffset                0x6f3
#define                       SprDataOffset_Ctrl                0x3ee
#define                             Player_State                 0x1d
#define                              Enemy_State                 0x1e
#define                           Fireball_State                 0x24
#define                              Block_State                 0x26
#define                               Misc_State                 0x2a
#define                         Player_MovingDir                 0x45
#define                          Enemy_MovingDir                 0x46
#define                        SprObject_X_Speed                 0x57
#define                           Player_X_Speed                 0x57
#define                            Enemy_X_Speed                 0x58
#define                         Fireball_X_Speed                 0x5e
#define                            Block_X_Speed                 0x60
#define                             Misc_X_Speed                 0x64
#define                     Jumpspring_FixedYPos                 0x58
#define                       JumpspringAnimCtrl                0x70e
#define                          JumpspringForce                0x6db
#define                        SprObject_PageLoc                 0x6d
#define                           Player_PageLoc                 0x6d
#define                            Enemy_PageLoc                 0x6e
#define                         Fireball_PageLoc                 0x74
#define                            Block_PageLoc                 0x76
#define                             Misc_PageLoc                 0x7a
#define                           Bubble_PageLoc                 0x83
#define                     SprObject_X_Position                 0x86
#define                        Player_X_Position                 0x86
#define                         Enemy_X_Position                 0x87
#define                      Fireball_X_Position                 0x8d
#define                         Block_X_Position                 0x8f
#define                          Misc_X_Position                 0x93
#define                        Bubble_X_Position                 0x9c
#define                        SprObject_Y_Speed                 0x9f
#define                           Player_Y_Speed                 0x9f
#define                            Enemy_Y_Speed                 0xa0
#define                         Fireball_Y_Speed                 0xa6
#define                            Block_Y_Speed                 0xa8
#define                             Misc_Y_Speed                 0xac
#define                      SprObject_Y_HighPos                 0xb5
#define                         Player_Y_HighPos                 0xb5
#define                          Enemy_Y_HighPos                 0xb6
#define                       Fireball_Y_HighPos                 0xbc
#define                          Block_Y_HighPos                 0xbe
#define                           Misc_Y_HighPos                 0xc2
#define                         Bubble_Y_HighPos                 0xcb
#define                     SprObject_Y_Position                 0xce
#define                        Player_Y_Position                 0xce
#define                         Enemy_Y_Position                 0xcf
#define                      Fireball_Y_Position                 0xd5
#define                         Block_Y_Position                 0xd7
#define                          Misc_Y_Position                 0xdb
#define                        Bubble_Y_Position                 0xe4
#define                       SprObject_Rel_XPos                0x3ad
#define                          Player_Rel_XPos                0x3ad
#define                           Enemy_Rel_XPos                0x3ae
#define                        Fireball_Rel_XPos                0x3af
#define                          Bubble_Rel_XPos                0x3b0
#define                           Block_Rel_XPos                0x3b1
#define                            Misc_Rel_XPos                0x3b3
#define                       SprObject_Rel_YPos                0x3b8
#define                          Player_Rel_YPos                0x3b8
#define                           Enemy_Rel_YPos                0x3b9
#define                        Fireball_Rel_YPos                0x3ba
#define                          Bubble_Rel_YPos                0x3bb
#define                           Block_Rel_YPos                0x3bc
#define                            Misc_Rel_YPos                0x3be
#define                      SprObject_SprAttrib                0x3c4
#define                         Player_SprAttrib                0x3c4
#define                          Enemy_SprAttrib                0x3c5
#define                    SprObject_X_MoveForce                0x400
#define                        Enemy_X_MoveForce                0x401
#define                      SprObject_YMF_Dummy                0x416
#define                         Player_YMF_Dummy                0x416
#define                          Enemy_YMF_Dummy                0x417
#define                         Bubble_YMF_Dummy                0x42c
#define                    SprObject_Y_MoveForce                0x433
#define                       Player_Y_MoveForce                0x433
#define                        Enemy_Y_MoveForce                0x434
#define                        Block_Y_MoveForce                0x43c
#define                      DisableCollisionDet                0x716
#define                     Player_CollisionBits                0x490
#define                      Enemy_CollisionBits                0x491
#define                      SprObj_BoundBoxCtrl                0x499
#define                      Player_BoundBoxCtrl                0x499
#define                       Enemy_BoundBoxCtrl                0x49a
#define                    Fireball_BoundBoxCtrl                0x4a0
#define                        Misc_BoundBoxCtrl                0x4a2
#define                        EnemyFrenzyBuffer                0x6cb
#define                         EnemyFrenzyQueue                0x6cd
#define                               Enemy_Flag                  0xf
#define                                 Enemy_ID                 0x16
#define                          PlayerGfxOffset                0x6d5
#define                    Player_XSpeedAbsolute                0x700
#define                        FrictionAdderHigh                0x701
#define                         FrictionAdderLow                0x702
#define                             RunningSpeed                0x703
#define                             SwimmingFlag                0x704
#define                       Player_X_MoveForce                0x705
#define                           DiffToHaltJump                0x706
#define                     JumpOrigin_Y_HighPos                0x707
#define                    JumpOrigin_Y_Position                0x708
#define                            VerticalForce                0x709
#define                        VerticalForceDown                0x70a
#define                     PlayerChangeSizeFlag                0x70b
#define                       PlayerAnimTimerSet                0x70c
#define                           PlayerAnimCtrl                0x70d
#define                         DeathMusicLoaded                0x712
#define                       FlagpoleSoundQueue                0x713
#define                            CrouchingFlag                0x714
#define                         MaximumLeftSpeed                0x450
#define                        MaximumRightSpeed                0x456
#define                     SprObject_OffscrBits                0x3d0
#define                     Player_OffscreenBits                0x3d0
#define                      Enemy_OffscreenBits                0x3d1
#define                      FBall_OffscreenBits                0x3d2
#define                     Bubble_OffscreenBits                0x3d3
#define                      Block_OffscreenBits                0x3d4
#define                       Misc_OffscreenBits                0x3d6
#define                    EnemyOffscrBitsMasked                0x3d8
#define                            Cannon_Offset                0x46a
#define                           Cannon_PageLoc                0x46b
#define                        Cannon_X_Position                0x471
#define                        Cannon_Y_Position                0x477
#define                             Cannon_Timer                0x47d
#define                         Whirlpool_Offset                0x46a
#define                        Whirlpool_PageLoc                0x46b
#define                     Whirlpool_LeftExtent                0x471
#define                         Whirlpool_Length                0x477
#define                           Whirlpool_Flag                0x47d
#define                           VineFlagOffset                0x398
#define                               VineHeight                0x399
#define                            VineObjOffset                0x39a
#define                     VineStart_Y_Position                0x39d
#define                          Block_Orig_YPos                0x3e4
#define                           Block_BBuf_Low                0x3e6
#define                           Block_Metatile                0x3e8
#define                           Block_PageLoc2                0x3ea
#define                            Block_RepFlag                0x3ec
#define                    Block_ResidualCounter                0x3f0
#define                          Block_Orig_XPos                0x3f1
#define                      BoundingBox_UL_XPos                0x4ac
#define                      BoundingBox_UL_YPos                0x4ad
#define                      BoundingBox_DR_XPos                0x4ae
#define                      BoundingBox_DR_YPos                0x4af
#define                    BoundingBox_UL_Corner                0x4ac
#define                    BoundingBox_LR_Corner                0x4ae
#define                    EnemyBoundingBoxCoord                0x4b0
#define                              PowerUpType                 0x39
#define                     FireballBouncingFlag                 0x3a
#define                          FireballCounter                0x6ce
#define                    FireballThrowingTimer                0x711
#define                        HammerEnemyOffset                0x6ae
#define                       JumpCoinMiscOffset                0x6b7
#define                           Block_Buffer_1                0x500
#define                           Block_Buffer_2                0x5d0
#define                      HammerThrowingTimer                0x3a2
#define                       HammerBroJumpTimer                 0x3c
#define                      Misc_Collision_Flag                0x6be
#define                       RedPTroopaOrigXPos                0x401
#define                     RedPTroopaCenterYPos                 0x58
#define                      XMovePrimaryCounter                 0xa0
#define                    XMoveSecondaryCounter                 0x58
#define                      CheepCheepMoveMFlag                 0x58
#define                       CheepCheepOrigYPos                0x434
#define                               BitMFilter                0x6dd
#define                      LakituReappearTimer                0x6d1
#define                          LakituMoveSpeed                 0x58
#define                      LakituMoveDirection                 0xa0
#define                     FirebarSpinState_Low                 0x58
#define                    FirebarSpinState_High                 0xa0
#define                         FirebarSpinSpeed                0x388
#define                     FirebarSpinDirection                 0x34
#define                      DuplicateObj_Offset                0x6cf
#define                     NumberofGroupEnemies                0x6d3
#define                       BlooperMoveCounter                 0xa0
#define                         BlooperMoveSpeed                 0x58
#define                       BowserBodyControls                0x363
#define                        BowserFeetCounter                0x364
#define                      BowserMovementSpeed                0x365
#define                           BowserOrigXPos                0x366
#define                     BowserFlameTimerCtrl                0x367
#define                       BowserFront_Offset                0x368
#define                     BridgeCollapseOffset                0x369
#define                            BowserGfxFlag                0x36a
#define                          BowserHitPoints                0x483
#define                       MaxRangeFromOrigin                0x6dc
#define                    BowserFlamePRandomOfs                0x417
#define                       PiranhaPlantUpYPos                0x417
#define                     PiranhaPlantDownYPos                0x434
#define                     PiranhaPlant_Y_Speed                 0x58
#define                    PiranhaPlant_MoveFlag                 0xa0
#define                         FireworksCounter                0x6d7
#define                      ExplosionGfxCounter                 0x58
#define                    ExplosionTimerCounter                 0xa0
// sound related defines
#define                       Squ2_NoteLenBuffer                0x7b3
#define                      Squ2_NoteLenCounter                0x7b4
#define                    Squ2_EnvelopeDataCtrl                0x7b5
#define                      Squ1_NoteLenCounter                0x7b6
#define                    Squ1_EnvelopeDataCtrl                0x7b7
#define                        Tri_NoteLenBuffer                0x7b8
#define                       Tri_NoteLenCounter                0x7b9
#define                     Noise_BeatLenCounter                0x7ba
#define                       Squ1_SfxLenCounter                0x7bb
#define                       Squ2_SfxLenCounter                0x7bd
#define                     Sfx_SecondaryCounter                0x7be
#define                      Noise_SfxLenCounter                0x7bf
#define                          PauseSoundQueue                 0xfa
#define                        Square1SoundQueue                 0xff
#define                        Square2SoundQueue                 0xfe
#define                          NoiseSoundQueue                 0xfd
#define                           AreaMusicQueue                 0xfb
#define                          EventMusicQueue                 0xfc
#define                       Square1SoundBuffer                 0xf1
#define                       Square2SoundBuffer                 0xf2
#define                         NoiseSoundBuffer                 0xf3
#define                          AreaMusicBuffer                 0xf4
#define                         EventMusicBuffer                0x7b1
#define                         PauseSoundBuffer                0x7b2
#define                                MusicData                 0xf5
#define                             MusicDataLow                 0xf5
#define                            MusicDataHigh                 0xf6
#define                      MusicOffset_Square2                 0xf7
#define                      MusicOffset_Square1                 0xf8
#define                     MusicOffset_Triangle                 0xf9
#define                        MusicOffset_Noise                0x7b0
#define                      NoteLenLookupTblOfs                 0xf0
#define                              DAC_Counter                0x7c0
#define                     NoiseDataLoopbackOfs                0x7c1
#define                       NoteLengthTblAdder                0x7c4
#define                      AreaMusicBuffer_Alt                0x7c5
#define                            PauseModeFlag                0x7c6
#define                     GroundMusicHeaderOfs                0x7c7
#define                        AltRegContentFlag                0x7ca
// CONSTANTS
// sound effects constants
#define                            Sfx_SmallJump           0b10000000
#define                             Sfx_Flagpole            0b1000000
#define                             Sfx_Fireball             0b100000
#define                      Sfx_PipeDown_Injury              0b10000
#define                           Sfx_EnemySmack               0b1000
#define                           Sfx_EnemyStomp                0b100
#define                                 Sfx_Bump                 0b10
#define                              Sfx_BigJump                  0b1
#define                           Sfx_BowserFall           0b10000000
#define                            Sfx_ExtraLife            0b1000000
#define                          Sfx_PowerUpGrab             0b100000
#define                            Sfx_TimerTick              0b10000
#define                                Sfx_Blast               0b1000
#define                             Sfx_GrowVine                0b100
#define                          Sfx_GrowPowerUp                 0b10
#define                             Sfx_CoinGrab                  0b1
#define                          Sfx_BowserFlame                 0b10
#define                         Sfx_BrickShatter                  0b1
// music constants
#define                                  Silence           0b10000000
#define                           StarPowerMusic            0b1000000
#define                           PipeIntroMusic             0b100000
#define                               CloudMusic              0b10000
#define                              CastleMusic               0b1000
#define                         UndergroundMusic                0b100
#define                               WaterMusic                 0b10
#define                              GroundMusic                  0b1
#define                      TimeRunningOutMusic            0b1000000
#define                          EndOfLevelMusic             0b100000
#define                         AltGameOverMusic              0b10000
#define                         EndOfCastleMusic               0b1000
#define                             VictoryMusic                0b100
#define                            GameOverMusic                 0b10
#define                               DeathMusic                  0b1
// enemy object constants
#define                               GreenKoopa                  0x0
#define                              BuzzyBeetle                  0x2
#define                                 RedKoopa                  0x3
#define                                HammerBro                  0x5
#define                                   Goomba                  0x6
#define                                  Bloober                  0x7
#define                     BulletBill_FrenzyVar                  0x8
#define                           GreyCheepCheep                  0xa
#define                            RedCheepCheep                  0xb
#define                                  Podoboo                  0xc
#define                             PiranhaPlant                  0xd
#define                      GreenParatroopaJump                  0xe
#define                            RedParatroopa                  0xf
#define                       GreenParatroopaFly                 0x10
#define                                   Lakitu                 0x11
#define                                    Spiny                 0x12
#define                      FlyCheepCheepFrenzy                 0x14
#define                         FlyingCheepCheep                 0x14
#define                              BowserFlame                 0x15
#define                                Fireworks                 0x16
#define                      BBill_CCheep_Frenzy                 0x17
#define                              Stop_Frenzy                 0x18
#define                                   Bowser                 0x2d
#define                            PowerUpObject                 0x2e
#define                               VineObject                 0x2f
#define                       FlagpoleFlagObject                 0x30
#define                           StarFlagObject                 0x31
#define                         JumpspringObject                 0x32
#define                     BulletBill_CannonVar                 0x33
#define                           RetainerObject                 0x35
#define                                TallEnemy                  0x9
// other constants
#define                                   World1                    0
#define                                   World2                    1
#define                                   World3                    2
#define                                   World4                    3
#define                                   World5                    4
#define                                   World6                    5
#define                                   World7                    6
#define                                   World8                    7
#define                                   Level1                    0
#define                                   Level2                    1
#define                                   Level3                    2
#define                                   Level4                    3
#define                           WarmBootOffset           LO8(0x7d6)
#define                           ColdBootOffset           LO8(0x7fe)
#define                    TitleScreenDataOffset               0x1ec0
#define                              SoundMemory                0x7b0
#define                        SwimTileRepOffset ((0x8000+offsetof(G, PlayerGraphicsTable)) + (0x9e))
#define                    MusicHeaderOffsetData ((0x8000+offsetof(G, MusicHeaderData)) - (1))
#define                                      MHD 0x8000+offsetof(G, MusicHeaderData)
#define                                 A_Button           0b10000000
#define                                 B_Button            0b1000000
#define                            Select_Button             0b100000
#define                             Start_Button              0b10000
#define                                   Up_Dir               0b1000
#define                                 Down_Dir                0b100
#define                                 Left_Dir                 0b10
#define                                Right_Dir                  0b1
#define                     TitleScreenModeValue                    0
#define                            GameModeValue                    1
#define                         VictoryModeValue                    2
#define                        GameOverModeValue                    3

void Start();
void VBlank1();
void VBlank2();
void WBootCheck();
void ColdBoot();
void NonMaskableInterrupt();
void ScreenOff();
void InitBuffer();
void DecTimers();
void DecTimersLoop();
void SkipExpTimer();
void NoDecTimers();
void PauseSkip();
void RotPRandomBit();
void Sprite0Clr();
void Sprite0Hit();
void HBlankDelay();
void SkipSprite0();
void SkipMainOper();
void PauseRoutine();
void ChkPauseTimer();
void ChkStart();
void ClrPauseTimer();
void SetPause();
void ExitPause();
// $00 - used for preset value
void SpriteShuffler();
void ShuffleLoop();
void StrSprOffset();
void NextSprOffset();
void SetAmtOffset();
void SetMiscOffset();
void OperModeExecutionTree();
void MoveAllSpritesOffscreen();
void MoveSpritesOffscreen();
void MoveSpritesOffscreen_Skip();
void SprInitLoop();
void TitleScreenMode();
void GameMenuRoutine();
void StartGame();
void ChkSelect();
void ChkWorldSel();
void SelectBLogic();
void IncWorldSel();
void UpdateShroom();
void NullJoypad();
void RunDemo();
void ResetTitle();
void ChkContinue();
void StartWorld1();
void InitScores();
void ExitMenu();
void GoContinue();
void DrawMushroomIcon();
void IconDataRead();
void ExitIcon();
void DemoEngine();
void DoAction();
void DemoOver();
void VictoryMode();
void AutoPlayer();
void VictoryModeSubroutines();
void SetupVictoryMode();
void PlayerVictoryWalk();
void PerformWalk();
void DontWalk();
void ExitVWalk();
void PrintVictoryMessages();
void MRetainerMsg();
void ThankPlayer();
void SecondPartMsg();
void EvalForMusic();
void PrintMsg();
void IncMsgCounter();
void SetEndTimer();
void IncModeTask_A();
void ExitMsgs();
void PlayerEndWorld();
void EndExitOne();
void EndChkBButton();
void EndExitTwo();
void FloateyNumbersRoutine();
void ChkNumTimer();
void DecNumTimer();
void LoadNumTiles();
void ChkTallEnemy();
void GetAltOffset();
void FloateyPart();
void SetupNumSpr();
void ScreenRoutines();
void InitScreen();
void SetupIntermediate();
void GetAreaPalette();
void SetVRAMAddr_A();
void NextSubtask();
void GetBackgroundColor();
void NoBGColor();
void GetPlayerColors();
void ChkFiery();
void StartClrGet();
void ClrGetLoop();
void SetBGColor();
void SetVRAMOffset();
void GetAlternatePalette1();
void SetVRAMAddr_B();
void NoAltPal();
void WriteTopStatusLine();
void WriteBottomStatusLine();
void DisplayTimeUp();
void NoTimeUp();
void DisplayIntermediate();
void PlayerInter();
void OutputInter();
void GameOverInter();
void NoInter();
void AreaParserTaskControl();
void TaskLoop();
void OutputCol();
// $00 - vram buffer address table low
// $01 - vram buffer address table high
void DrawTitleScreen();
void OutputTScr();
void ChkHiByte();
void ClearBuffersDrawIcon();
void TScrClear();
void IncSubtask();
void WriteTopScore();
void IncModeTask_B();
void WriteGameText();
void Chk2Players();
void LdGameText();
void GameTextLoop();
void EndGameText();
void PutLives();
void CheckPlayerName();
void ChkLuigi();
void NameLoop();
void ExitChkName();
void PrintWarpZoneNumbers();
void WarpNumLoop();
void ResetSpritesAndScreenTimer();
void ResetScreenTimer();
void NoReset();
// $00 - temp vram buffer offset
// $01 - temp metatile buffer offset
// $02 - temp metatile graphics table offset
// $03 - used to store attribute bits
// $04 - used to determine attribute table row
// $05 - used to determine attribute table column
// $06 - metatile graphics table address low
// $07 - metatile graphics table address high
void RenderAreaGraphics();
void DrawMTLoop();
void RightCheck();
void LLeft();
void NextMTRow();
void SetAttrib();
void ExitDrawM();
// $00 - temp attribute table address high (big endian order this time!)
// $01 - temp attribute table address low
void RenderAttributeTables();
void SetATHigh();
void AttribLoop();
void SetVRAMCtrl();
void ColorRotation();
void GetBlankPal();
void GetAreaPal();
void ExitColorRot();
void RemoveCoin_Axe();
void WriteBlankMT();
void ReplaceBlockMetatile();
void DestroyBlockMetatile();
void WriteBlockMetatile();
void UseBOffset();
void MoveVOffset();
void PutBlockMetatile();
void SaveHAdder();
void RemBridge();
void InitializeNameTables();
void WriteNTAddr();
void InitNTLoop();
void InitATLoop();
// $00 - temp joypad bit
void ReadJoypads();
void ReadPortBits();
void PortLoop();
void Save8Bits();
// $00 - vram buffer address table low
// $01 - vram buffer address table high
void WriteBufferToScreen();
void SetupWrites();
void GetLength();
void OutputToVRAM();
void RepeatByte();
void UpdateScreen();
void InitScroll();
void WritePPUReg1();
void PrintStatusBarNumbers();
void OutputNumbers();
void SetupNums();
void DigitPLoop();
void ExitOutputN();
void DigitsMathRoutine();
void AddModLoop();
void StoreNewD();
void EraseDMods();
void EraseMLoop();
void BorrowOne();
void CarryOne();
void UpdateTopScore();
void TopScoreCheck();
void GetScoreDiff();
void CopyScore();
void NoTopSc();
void InitializeGame();
void ClrSndLoop();
void InitializeArea();
void ClrTimersLoop();
void StartPage();
void SetInitNTHigh();
void SetSecHard();
void CheckHalfway();
void DoneInitArea();
void PrimaryGameSetup();
void SecondaryGameSetup();
void ClearVRLoop();
void ShufAmtLoop();
void ISpr0Loop();
// $06 - RAM address low
// $07 - RAM address high
void InitializeMemory();
void InitPageLoop();
void InitByteLoop();
void InitByte();
void SkipByte();
void GetAreaMusic();
void ChkAreaType();
void StoreMusic();
void ExitGetM();
void Entrance_GameTimerSetup();
void ChkStPos();
void SetStPos();
void ChkOverR();
void ChkSwimE();
void SetPESub();
void PlayerLoseLife();
void StillInGame();
void GetHalfway();
void MaskHPNyb();
void SetHalfway();
void GameOverMode();
void SetupGameOver();
void RunGameOver();
void TerminateGame();
void ContinueGame();
void GameIsOn();
void TransposePlayers();
void TransLoop();
void ExTrans();
void DoNothing1();
void DoNothing2();
void AreaParserTaskHandler();
void DoAPTasks();
void SkipATRender();
void AreaParserTasks();
void IncrementColumnPos();
void NoColWrap();
void AreaParserCore();
void RenderSceneryTerrain();
void ClrMTBuf();
void ThirdP();
void RendBack();
void SceLoop1();
void RendFore();
void SceLoop2();
void NoFore();
void RendTerr();
void TerMTile();
void StoreMT();
void TerrLoop();
void NoCloud2();
void TerrBChk();
void NextTBit();
void EndUChk();
void RendBBuf();
void ChkMTLow();
void StrBlock();
// $00 - used to store area object identifier
// $07 - used as adder to find proper area object code
void ProcessAreaData();
void ProcADLoop();
void Chk1Row13();
void Chk1Row14();
void CheckRear();
void RdyDecode();
void SetBehind();
void NextAObj();
void ChkLength();
void ProcLoopb();
void EndAParse();
void IncAreaObjOffset();
void DecodeAreaData();
void Chk1stB();
void ChkRow14();
void ChkRow13();
void Mask2MSB();
void ChkSRows();
void LrgObj();
void NotWPipe();
void SpecObj();
void MoveAOId();
void NormObj();
void LeavePar();
void InitRear();
void LoopCmdE();
void BackColC();
void StrAObj();
void RunAObj();
// (these apply to all area object subroutines in this section unless otherwise stated)
// $00 - used to store offset used to find object code
// $07 - starts with adder from area parser, used to store row offset
void AlterAreaAttributes();
void Alter2();
void SetFore();
void ScrollLockObject_Warp();
void WarpNum();
void ScrollLockObject();
// $00 - used to store enemy identifier in KillEnemies
void KillEnemies();
void KillELoop();
void NoKillE();
void AreaFrenzy();
void FreCompLoop();
void ExitAFrenzy();
// $06 - used by MushroomLedge to store length
void AreaStyleObject();
void TreeLedge();
void MidTreeL();
void EndTreeL();
void MushroomLedge();
void EndMushL();
void AllUnder();
void NoUnder();
void PulleyRopeObject();
void RenderPul();
void MushLExit();
void CastleObject();
void CRendLoop();
void ChkCFloor();
void NotTall();
void PlayerStop();
void ExitCastle();
void WaterPipe();
// $05 - used to store length of vertical shaft in RenderSidewaysPipe
// $06 - used to store leftover horizontal length in RenderSidewaysPipe
// and vertical length in VerticalPipe and GetPipeHeight
void IntroPipe();
void VPipeSectLoop();
void NoBlankP();
void ExitPipe();
void RenderSidewaysPipe();
void DrawSidePart();
void VerticalPipe();
void WarpPipe();
void DrawPipe();
void GetPipeHeight();
void FindEmptyEnemySlot();
void EmptyChkLoop();
void ExitEmptyChk();
void Hole_Water();
void QuestionBlockRow_High();
void QuestionBlockRow_Low();
void QuestionBlockRow_Low_Skip();
void Bridge_High();
void Bridge_Middle();
void Bridge_Middle_Skip();
void Bridge_Low();
void Bridge_Low_Skip();
void FlagBalls_Residual();
void FlagpoleObject();
void EndlessRope();
void BalancePlatRope();
void DrawRope();
void RowOfCoins();
void CastleBridgeObj();
void AxeObj();
void ChainObj();
void EmptyBlock();
void ColObj();
void RowOfBricks();
void DrawBricks();
void RowOfSolidBlocks();
void GetRow();
void DrawRow();
void ColumnOfBricks();
void ColumnOfSolidBlocks();
void GetRow2();
void BulletBillCannon();
void SetupCannon();
void StrCOffset();
void StaircaseObject();
void NextStair();
void Jumpspring();
// $07 - used to save ID of brick object
void Hidden1UpBlock();
void QuestionBlock();
void BrickWithCoins();
void BrickWithItem();
void BWithL();
void DrawQBlk();
void GetAreaObjectID();
void ExitDecBlock();
void Hole_Empty();
void StrWOffset();
void NoWhirlP();
void RenderUnderPart();
void DrawThisRow();
void WaitOneRow();
void ExitUPartR();
void ChkLrgObjLength();
void ChkLrgObjFixedLength();
void LenSet();
void GetLrgObjAttrib();
void GetAreaObjXPosition();
void GetAreaObjYPosition();
void GetBlockBufferAddr();
void LoadAreaPointer();
void GetAreaType();
void FindAreaPointer();
void GetAreaDataAddrs();
void StoreFore();
void StoreStyle();
// indirect jump routine called when
// $0770 is set to 1
void GameMode();
void GameCoreRoutine();
void GameEngine();
void ProcELoop();
void NoChgMus();
void CycleTwo();
void ClrPlrPal();
void SaveAB();
void UpdScrollVar();
void RunParser();
void ExitEng();
void ScrollHandler();
void ChkNearMid();
void ScrollScreen();
void InitScrlAmt();
void ChkPOffscr();
void KeepOnscr();
void InitPlatScrl();
void GetScreenPosition();
void GameRoutines();
void PlayerEntrance();
void ChkBehPipe();
void IntroEntr();
void EntrMode2();
void VineEntr();
void OffVine();
void PlayerRdy();
void ExitEntr();
// $07 - used to hold upper limit of high byte when player falls down hole
void AutoControlPlayer();
void PlayerCtrlRoutine();
void DisJoyp();
void SaveJoyp();
void SizeChk();
void ChkMoveDir();
void SetMoveDir();
void PlayerSubs();
void PlayerHole();
void HoleDie();
void HoleBottom();
void ChkHoleX();
void ExitCtrl();
void CloudExit();
void Vine_AutoClimb();
void AutoClimb();
void SetEntr();
void VerticalPipeEntry();
void MovePlayerYAxis();
void SideExitPipeEntry();
void ChgAreaPipe();
void ChgAreaMode();
void ExitCAPipe();
void EnterSidePipe();
void RightPipe();
void PlayerChangeSize();
void EndChgSize();
void ExitChgSize();
void PlayerInjuryBlink();
void ExitBlink();
void InitChangeSize();
void ExitBoth();
// $00 - used in CyclePlayerPalette to store current palette to cycle
void PlayerDeath();
void DonePlayerTask();
void PlayerFireFlower();
void CyclePlayerPalette();
void ResetPalFireFlower();
void ResetPalStar();
void ExitDeath();
void FlagpoleSlide();
void SlidePlayer();
void NoFPObj();
void PlayerEndLevel();
void ChkStop();
void InCastle();
void RdyNextA();
void NextArea();
void ExitNA();
void PlayerMovementSubs();
void SetCrouch();
void ProcMove();
void MoveSubs();
void NoMoveSub();
// $00 - used by ClimbingSub to store high vertical adder
void OnGroundStateSub();
void GndMove();
void FallingSub();
void JumpSwimSub();
void DumpFall();
void ProcSwim();
void LRWater();
void LRAir();
void JSMove();
void ExitMov1();
void ClimbingSub();
void MoveOnVine();
void ClimbFD();
void CSetFDir();
void ExitCSub();
void InitCSTimer();
void PlayerPhysicsSub();
void ProcClimb();
void SetCAnim();
void CheckForJumping();
void NoJump();
void ProcJumping();
void InitJS();
void ChkWtr();
void GetYPhy();
void PJumpSnd();
void SJumpSnd();
void X_Physics();
void ProcPRun();
void ChkRFast();
void FastXSp();
void SetRTmr();
void GetXPhy();
void GetXPhy2();
void ExitPhy();
void GetPlayerAnimSpeed();
void ChkSkid();
void SetRunSpd();
void ProcSkid();
void SetAnimSpd();
void ImposeFriction();
void JoypFrict();
void LeftFrict();
void RghtFrict();
void XSpdSign();
void SetAbsSpd();
// $00 - used to store downward movement force in FireballObjCore
// $02 - used to store maximum vertical speed in FireballObjCore
// $07 - used to store pseudorandom bit in BubbleCheck
void ProcFireball_Bubble();
void ProcFireballs();
void ProcAirBubbles();
void BublLoop();
void BublExit();
void FireballObjCore();
void RunFB();
void EraseFB();
void NoFBall();
void FireballExplosion();
void BubbleCheck();
void SetupBubble();
void PosBubl();
void MoveBubl();
void Y_Bubl();
void ExitBubl();
void RunGameTimer();
void ResGTCtrl();
void TimeUpOn();
void ExGTimer();
void WarpZoneObject();
// $00 - used in WhirlpoolActivate to store whirlpool length / 2, page location of center of whirlpool
// and also to store movement force exerted on player
// $01 - used in ProcessWhirlpools to store page location of right extent of whirlpool
// and in WhirlpoolActivate to store center of whirlpool
// $02 - used in ProcessWhirlpools to store right extent of whirlpool and in
// WhirlpoolActivate to store maximum vertical speed
void ProcessWhirlpools();
void WhLoop();
void NextWh();
void ExitWh();
void WhirlpoolActivate();
void LeftWh();
void SetPWh();
void WhPull();
void FlagpoleRoutine();
void SkipScore();
void GiveFPScr();
void FPGfx();
void ExitFlagP();
void JumpspringHandler();
void DownJSpr();
void PosJSpr();
void BounceJS();
void DrawJSpr();
void ExJSpring();
void Setup_Vine();
void NextVO();
void VineObjectHandler();
void RunVSubs();
void VDrawLoop();
void KillVine();
void WrCMTile();
void ExitVH();
void ProcessCannons();
void ThreeSChk();
void FireCannon();
void Chk_BB();
void Next3Slt();
void ExCannon();
void BulletBillHandler();
void SetupBB();
void ChkDSte();
void BBFly();
void RunBBSubs();
void KillBB();
void SpawnHammerObj();
void SetMOfs();
void NoHammer();
// $00 - used to set downward force
// $01 - used to set upward force (residual)
// $02 - used to set maximum speed
void ProcHammerObj();
void SetHSpd();
void SetHPos();
void RunAllH();
void RunHSubs();
// $02 - used to store vertical high nybble offset from block buffer routine
// $06 - used to store low byte of block buffer address
void CoinBlock();
void SetupJumpCoin();
void JCoinC();
void FindEmptyMiscSlot();
void FMiscLoop();
void UseMiscS();
void MiscObjectsCore();
void MiscLoop();
// $00 - used to set downward force
// $01 - used to set upward force (residual)
// $02 - used to set maximum speed
void ProcJumpCoin();
void JCoinRun();
void RunJCSubs();
void MiscLoopBack();
void GiveOneCoin();
void CoinPoints();
void AddToScore();
void GetSBNybbles();
void UpdateNumber();
void NoZSup();
void SetupPowerUp();
void PwrUpJmp();
void StrType();
void PutBehind();
void PowerUpObjHandler();
void ShroomM();
void GrowThePowerUp();
void ChkPUSte();
void RunPUSubs();
void ExitPUp();
void PlayerHeadCollision();
void DBlockSte();
void ChkBrick();
void StartBTmr();
void ContBTmr();
void PutOldMT();
void PutMTileB();
void SmallBP();
void BigBP();
void Unbreak();
void InvOBit();
void InitBlock_XY_Pos();
void BumpBlock();
void BlockCode();
void MushFlowerBlock();
void StarBlock();
void StarBlock_Skip();
void ExtraLifeMushBlock();
void ExtraLifeMushBlock_Skip();
void VineBlock();
void ExitBlockChk();
void BlockBumpedChk();
void BumpChkLoop();
void MatchBump();
void BrickShatter();
void CheckTopOfBlock();
void TopEx();
void SpawnBrickChunks();
void BlockObjectsCore();
void ChkTop();
void BouncingBlockHandler();
void KillBlock();
void UpdSte();
// $02 - used to store offset to block buffer
// $06-$07 - used to store block buffer address
void BlockObjMT_Updater();
void UpdateLoop();
void NextBUpd();
// $00 - used to store high nybble of horizontal speed as adder
// $01 - used to store low nybble of horizontal speed
// $02 - used to store adder to page location
void MoveEnemyHorizontally();
void MovePlayerHorizontally();
void MoveObjectHorizontally();
void SaveXSpd();
void UseAdder();
void ExXMove();
// $00 - used for downward force
// $01 - used for upward force
// $02 - used for maximum vertical speed
void MovePlayerVertically();
void NoJSChk();
void MoveD_EnemyVertically();
void MoveFallingPlatform();
void ContVMove();
void MoveRedPTroopaDown();
void MoveRedPTroopaUp();
void MoveRedPTroopa();
void MoveDropPlatform();
void MoveEnemySlowVert();
void SetMdMax();
void MoveJ_EnemyVertically();
void SetHiMax();
void SetXMoveAmt();
void ResidualGravityCode();
void ImposeGravityBlock();
void ImposeGravityBlock_Skip();
void ImposeGravitySprObj();
void MovePlatformDown();
void MovePlatformUp();
void MovePlatformUp_Skip();
void SetDplSpd();
void RedPTroopaGrav();
// $00 - used for downward force
// $01 - used for upward force
// $07 - used as adder for vertical position
void ImposeGravity();
void AlterYP();
void ChkUpM();
void ExVMove();
void EnemiesAndLoopsCore();
void ChkAreaTsk();
void ChkBowserF();
void ExitELCore();
void ExecGameLoopback();
void ProcLoopCommand();
void FindLoop();
void IncMLoop();
void WrongChk();
void DoLpBack();
void InitMLp();
void InitLCmd();
void ChkEnemyFrenzy();
// $06 - used to hold page location of extended right boundary
// $07 - used to hold high nybble of position of extended right boundary
void ProcessEnemyData();
void CheckEndofBuffer();
void CheckRightBounds();
void CheckPageCtrlRow();
void PositionEnemyObj();
void CheckRightExtBounds();
void CheckForEnemyGroup();
void BuzzyBeetleMutate();
void StrID();
void CheckFrenzyBuffer();
void StrFre();
void InitEnemyObject();
void ExEPar();
void DoGroup();
void ParseRow0e();
void NotUse();
void CheckThreeBytes();
void Inc3B();
void Inc2B();
void CheckpointEnemyID();
void InitEnemyRoutines();
void NoInitCode();
void InitGoomba();
void InitPodoboo();
void InitRetainerObj();
void InitNormalEnemy();
void GetESpd();
void SetESpd();
void InitRedKoopa();
void InitHammerBro();
void InitHorizFlySwimEnemy();
void InitBloober();
void SmallBBox();
void InitRedPTroopa();
void GetCent();
void TallBBox();
void SetBBox();
void InitVStf();
void InitBulletBill();
void InitCheepCheep();
void InitLakitu();
void SetupLakitu();
void KillLakitu();
void LakituAndSpinyHandler();
void ChkLak();
void ChkNoEn();
void CreateL();
void RetEOfs();
void ExLSHand();
void CreateSpiny();
void DifLoop();
void UsePosv();
void SetSpSpd();
void SpinyRte();
void ChpChpEx();
void InitLongFirebar();
void InitShortFirebar();
void InitFlyingCheepCheep();
void MaxCC();
void GSeed();
void RSeed();
void D2XPos1();
void D2XPos2();
void FinCCSt();
void InitBowser();
void DuplicateEnemyObj();
void FSLoop();
void FlmEx();
void InitBowserFlame();
void SetFrT();
void PutAtRightExtent();
void SpawnFromMouth();
void SetMF();
void FinishFlame();
void InitFireworks();
void StarFChk();
void ExitFWk();
void BulletBillCheepCheep();
void ChkW2();
void Get17ID();
void Set17ID();
void GetRBit();
void ChkRBit();
void AddFBit();
void DoBulletBills();
void BB_SLoop();
void ExF17();
void FireBulletBill();
// $00 - used to store Y position of group enemies
// $01 - used to store enemy ID
// $02 - used to store page location of right side of screen
// $03 - used to store X position of right side of screen
void HandleGroupEnemies();
void PullID();
void SnglID();
void SetYGp();
void CntGrp();
void GrLoop();
void GSltLp();
void NextED();
void InitPiranhaPlant();
void InitEnemyFrenzy();
void NoFrenzyCode();
void EndFrenzy();
void LakituChk();
void NextFSlot();
void InitJumpGPTroopa();
void TallBBox2();
void SetBBox2();
void InitBalPlatform();
void AlignP();
void SetBPA();
void InitDropPlatform();
void InitHoriPlatform();
void InitVertPlatform();
void SetYO();
void CommonPlatCode();
void SPBBox();
void CasPBB();
void LargeLiftUp();
void LargeLiftDown();
void LargeLiftBBox();
void PlatLiftUp();
void PlatLiftDown();
void CommonSmallLift();
void PosPlatform();
void EndOfEnemyInitCode();
void RunEnemyObjectsCore();
void JmpEO();
void NoRunCode();
void RunRetainerObj();
void RunNormalEnemies();
void SkipMove();
void EnemyMovementSubs();
void NoMoveCode();
void RunBowserFlame();
void RunFirebarObj();
void RunSmallPlatform();
void RunLargePlatform();
void SkipPT();
void LargePlatformSubroutines();
void EraseEnemyObject();
void MovePodoboo();
void PdbM();
void ProcHammerBro();
void ChkJH();
void DecHT();
void HammerBroJumpCode();
void SetHJ();
void HJump();
void MoveHammerBroXDir();
void Shimmy();
void SetShim();
void MoveNormalEnemy();
void FallE();
void MEHor();
void SlowM();
void SteadM();
void AddHS();
void ReviveStunned();
void SetRSpd();
void MoveDefeatedEnemy();
void ChkKillGoomba();
void NKGmba();
void MoveJumpingEnemy();
void ProcMoveRedPTroopa();
void NoIncPT();
void MoveRedPTUpOrDown();
void MovPTDwn();
// $00 - used to store adder for movement, also used as adder for platform
// $01 - used to store maximum value for secondary counter
void MoveFlyGreenPTroopa();
void YSway();
void NoMGPT();
void XMoveCntr_GreenPTroopa();
void XMoveCntr_Platform();
void NoIncXM();
void IncPXM();
void DecSeXM();
void MoveWithXMCntrs();
void XMRight();
void MoveBloober();
void FBLeft();
void SBMDir();
void BlooberSwim();
void SwimX();
void LeftSwim();
void MoveDefeatedBloober();
void ProcSwimmingB();
void BSwimE();
void SlowSwim();
void NoSSw();
void ChkForFloatdown();
void Floatdown();
void NoFD();
void ChkNearPlayer();
void MoveBulletBill();
void NotDefB();
void MoveSwimmingCheepCheep();
void CCSwim();
void CCSwimUpwards();
void ChkSwimYPos();
void YPDiff();
void ExSwCC();
void ProcFirebar();
void SusFbar();
void SkpFSte();
void SetupGFB();
void SetMFbar();
void DrawFbar();
void NextFbar();
void SkipFBar();
void DrawFirebar_Collision();
void AddHA();
void SubtR1();
void ChkFOfs();
void VAHandl();
void AddVA();
void SetVFbr();
void FirebarCollision();
void AdjSm();
void BigJp();
void FBCLoop();
void ChkVFBD();
void ChkFBCl();
void Chk2Ofs();
void ChgSDir();
void SetSDir();
void NoColFB();
void GetFirebarPosition();
void GetHAdder();
void GetVAdder();
void MoveFlyingCheepCheep();
void FlyCC();
void AddCCF();
void BPGet();
void MoveLakitu();
void ChkLS();
void Fr12S();
void LdLDa();
void SetLSpd();
void SetLMov();
void PlayerLakituDiff();
void ChkLakDif();
void SetLMovD();
void ChkPSpeed();
void ChkSpinyO();
void ChkEmySpd();
void SubDifAdj();
void SPixelLak();
void ExMoveLak();
void BridgeCollapse();
void SetM2();
void MoveD_Bowser();
void RemoveBridge();
void NoBFall();
void RunBowser();
void KillAllEnemies();
void KillLoop();
void BowserControl();
void ChkMouth();
void FeetTmr();
void ResetMDr();
void B_FaceP();
void GetPRCmp();
void GetDToO();
void CompDToO();
void HammerChk();
void SetHmrTmr();
void SkipToFB();
void MakeBJump();
void ChkFireB();
void SpawnFBr();
void SetFBTmr();
void BowserGfxHandler();
void CopyFToR();
void ExBGfxH();
void ProcessBowserHalf();
void SetFlameTimer();
void ExFl();
void ProcBowserFlame();
void SFlmX();
void SetGfxF();
void FlmeAt();
void DrawFlameLoop();
void M3FOfs();
void M2FOfs();
void M1FOfs();
void ExFlmeD();
void RunFireworks();
void SetupExpl();
void FireworksSoundScore();
void RunStarFlagObj();
void GameTimerFireworks();
void SetFWC();
void IncrementSFTask1();
void StarFlagExit();
void AwardGameTimerPoints();
void NoTTick();
void EndAreaPoints();
void ELPGive();
void RaiseFlagSetoffFWorks();
void SetoffF();
void DrawStarFlag();
void DSFLoop();
void DrawFlagSetTimer();
void IncrementSFTask2();
void DelayToAreaEnd();
void StarFlagExit2();
// $00 - used to store horizontal difference between player and piranha plant
void MovePiranhaPlant();
void ChkPlayerNearPipe();
void ReversePlantSpeed();
void SetupToMovePPlant();
void RiseFallPiranhaPlant();
void PutinPipe();
// $07 - spinning speed
void FirebarSpin();
void SpinCounterClockwise();
// $00 - used to hold collision flag, Y movement force + 5 or low byte of name table for rope
// $01 - used to hold high byte of name table for rope
// $02 - used to hold page location of rope
void BalancePlatform();
void DoBPl();
void CheckBalPlatform();
void ChkForFall();
void MakePlatformFall();
void ChkOtherForFall();
void ChkToMoveBalPlat();
void ColFlg();
void PlatUp();
void PlatSt();
void PlatDn();
void DoOtherPlatform();
void DrawEraseRope();
void EraseR1();
void OtherRope();
void EraseR2();
void EndRp();
void ExitRp();
void SetupPlatformRope();
void GetLRp();
void GetHRp();
void ExPRp();
void InitPlatformFall();
void StopPlatforms();
void PlatformFall();
void ExPF();
void YMovingPlatform();
void SkipIY();
void ChkYCenterPos();
void YMDown();
void ChkYPCollision();
void ExYPl();
// $00 - used as adder to position player hotizontally
void XMovingPlatform();
void PositionPlayerOnHPlat();
void PPHSubt();
void SetPVar();
void ExXMP();
void DropPlatform();
void ExDPl();
// $00 - residual value from sub
void RightPlatform();
void ExRPl();
void MoveLargeLiftPlat();
void MoveSmallPlatform();
void MoveLiftPlatforms();
void ChkSmallPlatCollision();
void ExLiftP();
// $00 - page location of extended left boundary
// $01 - extended left boundary position
// $02 - page location of extended right boundary
// $03 - extended right boundary position
void OffscreenBoundsCheck();
void LimitB();
void ExtendLB();
void TooFar();
void ExScrnBd();
// $01 - enemy buffer offset
void FireballEnemyCollision();
void FireballEnemyCDLoop();
void GoombaDie();
void NotGoomba();
void NoFToECol();
void ExitFBallEnemy();
void HandleEnemyFBallCol();
void ChkBuzzyBeetle();
void HurtBowser();
void SetDBSte();
void ChkOtherEnemies();
void ShellOrBlockDefeat();
void StnE();
void GoombaPoints();
void EnemySmackScore();
void ExHCF();
void PlayerHammerCollision();
void ClHCol();
void ExPHC();
void HandlePowerUpCollision();
void Shroom_Flower_PUp();
void SetFor1Up();
void UpToSuper();
void UpToFiery();
void NoPUp();
void PlayerEnemyCollision();
void NoPECol();
void CheckForPUpCollision();
void EColl();
void HandlePECollisions();
void KSPts();
void ExPEC();
void ChkForPlayerInjury();
void ChkInj();
void ChkETmrs();
void TInjE();
void InjurePlayer();
void ForceInjury();
void SetKRout();
void SetPRout();
void ExInjColRoutines();
void KillPlayer();
void EnemyStomped();
void EnemyStompedPts();
void ChkForDemoteKoopa();
void HandleStompedShellE();
void SBnce();
void ChkEnemyFaceRight();
void LInj();
void EnemyFacePlayer();
void SFcRt();
void SetupFloateyNumber();
void ExSFN();
void EnemiesCollision();
void ECLoop();
void YesEC();
void NoEnemyCollision();
void ReadyNextEnemy();
void ExitECRoutine();
void ProcEnemyCollisions();
void ShellCollisions();
void ExitProcessEColl();
void ProcSecondEnemyColl();
void MoveEOfs();
void EnemyTurnAround();
void RXSpd();
void ExTA();
// $00 - vertical position of platform
void LargePlatformCollision();
void ChkForPlayerC_LargeP();
void ExLPC();
// $00 - counter for bounding boxes
void SmallPlatformCollision();
void ChkSmallPlatLoop();
void MoveBoundBox();
void ExSPC();
void ProcSPlatCollisions();
void ProcLPlatCollisions();
void ChkForTopCollision();
void SetCollisionFlag();
void PlatformSideCollisions();
void SideC();
void NoSideC();
void PositionPlayerOnS_Plat();
void PositionPlayerOnVPlat();
void PositionPlayerOnVPlat_Skip();
void ExPlPos();
void CheckPlayerVertical();
void ExCPV();
void GetEnemyBoundBoxOfs();
void GetEnemyBoundBoxOfsArg();
void PlayerBGCollision();
void SetFallS();
void SetPSte();
void ChkOnScr();
void ExPBGCol();
void ChkCollSize();
void GBBAdr();
void HeadChk();
void SolidOrClimb();
void NYSpd();
void DoFootCheck();
void AwardTouchedCoin();
void ChkFootMTile();
void ContChk();
void LandPlyr();
void InitSteP();
void DoPlayerSideCheck();
void SideCheckLoop();
void BHalf();
void ExSCH();
void CheckSideMTiles();
void ContSChk();
void ChkPBtm();
void PipeDwnS();
void PlyrPipe();
void SetCATmr();
void ChkGERtn();
// $02 - high nybble of vertical coordinate from block buffer
// $04 - low nybble of horizontal coordinate from block buffer
// $06-$07 - block buffer address
void StopPlayerMove();
void ExCSM();
void HandleCoinMetatile();
void HandleAxeMetatile();
void ErACM();
void HandleClimbing();
void ExHC();
void ChkForFlagpole();
void FlagpoleCollision();
void ChkFlagpoleYPosLoop();
void MtchF();
void RunFR();
void VineCollision();
void PutPlayerOnVine();
void SetVXPl();
void ExPVne();
void ChkInvisibleMTiles();
void ExCInvT();
// $00-$01 - used to hold bottom right and bottom left metatiles (in that order)
// $00 - used as flag by ImpedePlayerMove to restrict specific movement
void ChkForLandJumpSpring();
void ExCJSp();
void ChkJumpspringMetatiles();
void JSFnd();
void NoJSFnd();
void HandlePipeEntry();
void GetWNum();
void ExPipeE();
void ImpedePlayerMove();
void RImpd();
void NXSpd();
void PlatF();
void ExIPM();
void CheckForSolidMTiles();
void CheckForClimbMTiles();
void CheckForCoinMTiles();
void CoinSd();
void GetMTileAttrib();
void ExEBG();
void EnemyToBGCollisionDet();
void DoIDCheckBGColl();
void HBChk();
void CInvu();
void YesIn();
void NoEToBGCollision();
// $02 - vertical coordinate from block buffer routine
void HandleEToBGCollision();
void GiveOEPoints();
void ChkToStunEnemies();
void Demote();
void SetStun();
void SetWYSpd();
void SetNotW();
void ChkBBill();
void NoCDirF();
void ExEBGChk();
// $04 - low nybble of vertical coordinate from block buffer routine
void LandEnemyProperly();
void SChkA();
void ChkLandedEnemyState();
void SetForStn();
void ExSteChk();
void ProcEnemyDirection();
void InvtD();
void CNwCDir();
void LandEnemyInitState();
void NMovShellFallBit();
void ChkForRedKoopa();
void Chk2MSBSt();
void GetSteFromD();
void SetD6Ste();
// $00 - used to store bitmask (not used but initialized here)
// $eb - used in DoEnemySideCheck as counter and to compare moving directions
void DoEnemySideCheck();
void SdeCLoop();
void NextSdeC();
void ExESdeC();
void ChkForBump_HammerBroJ();
void NoBump();
void InvEnemyDir();
// $00 - used to hold horizontal difference between player and enemy
void PlayerEnemyDiff();
void EnemyLanding();
void SubtEnemyYPos();
void EnemyJump();
void DoSide();
void HammerBroBGColl();
void KillEnemyAboveBlock();
void UnderHammerBro();
void NoUnderHammerBro();
void ChkUnderEnemy();
void ChkForNonSolids();
void NSFnd();
void FireballBGCollision();
void ClearBounceFlag();
void InitFireballExplode();
void GetFireballBoundBox();
void GetMiscBoundBox();
void FBallB();
void GetEnemyBoundBox();
void SmallPlatformBoundBox();
void GetMaskedOffScrBits();
void CMBits();
void LargePlatformBoundBox();
void SetupEOffsetFBBox();
void MoveBoundBoxOffscreen();
void BoundingBoxCore();
void CheckRightScreenBBox();
void SORte();
void NoOfs();
void CheckLeftScreenBBox();
void SOLft();
void NoOfs2();
// $06 - second object's offset
// $07 - counter
void PlayerCollisionCore();
void SprObjectCollisionCore();
void CollisionCoreLoop();
void SecondBoxVerticalChk();
void FirstBoxGreater();
void NoCollisionFound();
void CollisionFound();
// $02 - modified y coordinate
// $03 - stores metatile involved in block buffer collisions
// $04 - comes in with offset to block buffer adder data, goes out with low nybble x/y coordinate
// $05 - modified x coordinate
// $06-$07 - block buffer address
void BlockBufferChk_Enemy();
void ResidualMiscObjectCode();
void BlockBufferChk_FBall();
void ResJmpM();
void BBChk_E();
void BlockBufferColli_Feet();
void BlockBufferColli_Head();
void BlockBufferColli_Side();
void BlockBufferColli_Side_Skip();
void BlockBufferCollision();
void RetXC();
void RetYC();
void DrawVine();
void VineTL();
void SkpVTop();
void ChkFTop();
void NextVSp();
void SixSpriteStacker();
void StkLp();
void DrawHammer();
void ForceHPose();
void GetHPose();
void RenderH();
void NoHOffscr();
void FlagpoleGfxHandler();
void ChkFlagOffscreen();
void MoveSixSpritesOffscreen();
void DumpSixSpr();
void DumpFourSpr();
void DumpThreeSpr();
void DumpTwoSpr();
void ExitDumpSpr();
void DrawLargePlatform();
void ShrinkPlatform();
void SetLast2Platform();
void SetPlatformTilenum();
void SChk2();
void SChk3();
void SChk4();
void SChk5();
void SChk6();
void SLChk();
void ExDLPl();
void DrawFloateyNumber_Coin();
void NotRsNum();
void JCoinGfxHandler();
void ExJCGfx();
void DrawPowerUp();
void PUpDrawLoop();
void FlipPUpRightSide();
void PUpOfs();
void EnemyGfxHandler();
void CheckForRetainerObj();
void CheckForBulletBillCV();
void SBBAt();
void CheckForJumpspring();
void CheckForPodoboo();
void CheckBowserGfxFlag();
void SBwsrGfxOfs();
void CheckForGoomba();
void GmbaAnim();
void CheckBowserFront();
void ChkFrontSte();
void FlipBowserOver();
void DrawBowser();
void CheckBowserRear();
void ChkRearSte();
void CheckForSpiny();
void NotEgg();
void CheckForLakitu();
void NoLAFr();
void CheckUpsideDownShell();
void CheckRightSideUpShell();
void CheckForDefdGoomba();
void CheckForHammerBro();
void CheckForBloober();
void CheckToAnimateEnemy();
void CheckForSecondFrame();
void CheckAnimationStop();
void CheckDefeatedState();
void DrawEnemyObject();
void SkipToOffScrChk();
void CheckForVerticalFlip();
void FlipEnemyVertically();
void CheckForESymmetry();
void ContES();
void ESRtnr();
void SpnySC();
void MirrorEnemyGfx();
void EggExc();
void CheckToMirrorLakitu();
void NVFLak();
void CheckToMirrorJSpring();
void SprObjectOffscrChk();
void LcChk();
void Row3C();
void Row23C();
void AllRowC();
void ExEGHandler();
void DrawEnemyObjRow();
void DrawOneSpriteRow();
void MoveESprRowOffscreen();
void MoveESprColOffscreen();
void DrawBlock();
void DBlkLoop();
void ChkRep();
void SetBFlip();
void BlkOffscr();
void PullOfsB();
void ChkLeftCo();
void MoveColOffscreen();
void ExDBlk();
// $00 - used to hold palette bits for attribute byte or relative X position
void DrawBrickChunks();
void DChunks();
void ChnkOfs();
void ExBCDr();
void DrawFireball();
void DrawFirebar();
void FireA();
void DrawExplosion_Fireball();
void DrawExplosion_Fireworks();
void KillFireBall();
void DrawSmallPlatform();
void TopSP();
void BotSP();
void SOfs();
void SOfs2();
void ExSPl();
void DrawBubble();
void ExDBub();
void PlayerGfxHandler();
void CntPl();
void SwimKT();
void BigKTS();
void ExPGH();
void FindPlayerAction();
void DoChangeSize();
void PlayerKilled();
void PlayerGfxProcessing();
void SUpdR();
void PlayerOffscreenChk();
void PROfsLoop();
void NPROffscr();
void DrawPlayer_Intermediate();
void PIntLoop();
// $00-$01 - used to hold tile numbers, $00 also used to hold upper extent of animation frames
// $02 - vertical position
// $03 - facing direction, used as horizontal flip control
// $04 - attributes
// $05 - horizontal position
// $07 - number of rows to draw
// these also used in IntermediatePlayerData
void RenderPlayerSub();
void DrawPlayerLoop();
void ProcessPlayerAction();
void ProcOnGroundActs();
void NonAnimatedActs();
void ActionFalling();
void ActionWalkRun();
void ActionClimbing();
void ActionSwimming();
void GetCurrentAnimOffset();
void FourFrameExtent();
void ThreeFrameExtent();
void AnimationControl();
void SetAnimC();
void ExAnimC();
void GetGfxOffsetAdder();
void SzOfs();
void HandleChangeSize();
void CSzNext();
void GorSLog();
void GetOffsetFromAnimCtrl();
void ShrinkPlayer();
void ShrPlF();
void ChkForPlayerAttrib();
void KilledAtt();
void C_S_IGAtt();
void ExPlyrAt();
// $00 - used in adding to get proper offset
void RelativePlayerPosition();
void RelativeBubblePosition();
void RelativeFireballPosition();
void RelWOfs();
void RelativeMiscPosition();
void RelativeEnemyPosition();
void RelativeBlockPosition();
void VariableObjOfsRelPos();
void GetObjRelativePosition();
// $00 - used as temp variable to hold offscreen bits
void GetPlayerOffscreenBits();
void GetFireballOffscreenBits();
void GetBubbleOffscreenBits();
void GetMiscOffscreenBits();
void GetProperObjOffset();
void GetEnemyOffscreenBits();
void GetBlockOffscreenBits();
void SetOffscrBitsOffset();
void GetOffScreenBitsSet();
void RunOffscrBitsSubs();
void GetXOffscreenBits();
void XOfsLoop();
void XLdBData();
void ExXOfsBS();
void GetYOffscreenBits();
void YOfsLoop();
void YLdBData();
void ExYOfsBS();
void DividePDiff();
void SetOscrO();
void ExDivPD();
// $00-$01 - tile numbers
// $02 - Y coordinate
// $03 - flip control
// $04 - sprite attributes
// $05 - X coordinate
void DrawSpriteObject();
void NoHFlip();
void SetHFAt();
void SoundEngine();
void SndOn();
void InPause();
void PTone1F();
void ContPau();
void PTone2F();
void PTRegC();
void DecPauC();
void SkipPIn();
void RunSoundSubroutines();
void SkipSoundSubroutines();
void NoIncDAC();
void StrWave();
void Dump_Squ1_Regs();
void PlaySqu1Sfx();
void SetFreq_Squ1();
void Dump_Freq_Regs();
void NoTone();
void Dump_Sq2_Regs();
void PlaySqu2Sfx();
void SetFreq_Squ2();
void SetFreq_Tri();
void PlayFlagpoleSlide();
void PlaySmallJump();
void PlayBigJump();
void JumpRegContents();
void ContinueSndJump();
void N2Prt();
void FPS2nd();
void DmpJpFPS();
void PlayFireballThrow();
void PlayBump();
void Fthrow();
void ContinueBumpThrow();
void DecJpFPS();
void Square1SfxHandler();
void CheckSfx1Buffer();
void ExS1H();
void PlaySwimStomp();
void ContinueSwimStomp();
void BranchToDecLength1();
void PlaySmackEnemy();
void ContinueSmackEnemy();
void SmSpc();
void SmTick();
void DecrementSfx1Length();
void StopSquare1Sfx();
void ExSfx1();
void PlayPipeDownInj();
void ContinuePipeDownInj();
void NoPDwnL();
void PlayCoinGrab();
void PlayTimerTick();
void CGrab_TTickRegL();
void ContinueCGrabTTick();
void N2Tone();
void PlayBlast();
void ContinueBlast();
void SBlasJ();
void PlayPowerUpGrab();
void ContinuePowerUpGrab();
void LoadSqu2Regs();
void DecrementSfx2Length();
void EmptySfx2Buffer();
void StopSquare2Sfx();
void ExSfx2();
void Square2SfxHandler();
void CheckSfx2Buffer();
void ExS2H();
void Cont_CGrab_TTick();
void JumpToDecLength2();
void PlayBowserFall();
void BlstSJp();
void ContinueBowserFall();
void PBFRegs();
void EL_LRegs();
void PlayExtraLife();
void ContinueExtraLife();
void DivLLoop();
void PlayGrowPowerUp();
void PlayGrowVine();
void GrowItemRegs();
void ContinueGrowItems();
void StopGrowItems();
void PlayBrickShatter();
void ContinueBrickShatter();
void PlayNoiseSfx();
void DecrementSfx3Length();
void ExSfx3();
void NoiseSfxHandler();
void CheckNoiseBuffer();
void ExNH();
void PlayBowserFlame();
void ContinueBowserFlame();
void ContinueMusic();
void MusicHandler();
void LoadEventMusic();
void NoStopSfx();
void LoadAreaMusic();
void NoStop1();
void GMLoopB();
void HandleAreaMusicLoopB();
void FindAreaMusicHeader();
void FindEventMusicHeader();
void LoadHeader();
void HandleSquare2Music();
void EndOfMusicData();
void NotTRO();
void MusicLoopBack();
void VictoryMLoopBack();
void Squ2LengthHandler();
void Squ2NoteHandler();
void Rest();
void SkipFqL1();
void MiscSqu2MusicTasks();
void NoDecEnv1();
void HandleSquare1Music();
void FetchSqu1MusicData();
void Squ1NoteHandler();
void SkipCtrlL();
void MiscSqu1MusicTasks();
void NoDecEnv2();
void DeathMAltReg();
void DoAltLoad();
void HandleTriangleMusic();
void TriNoteHandler();
void NotDOrD4();
void MediN();
void LongN();
void LoadTriCtrlReg();
void HandleNoiseMusic();
void FetchNoiseBeatData();
void NoiseBeatHandler();
void StrongBeat();
void LongBeat();
void SilentBeat();
void PlayBeat();
void ExitMusicHandler();
void AlternateLengthHandler();
void ProcessLengthData();
void LoadControlRegs();
void NotECstlM();
void WaterMus();
void AllMus();
void LoadEnvelopeData();
void LoadUsualEnvData();
void LoadWaterEventMusEnvData();
