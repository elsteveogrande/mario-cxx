#pragma once
#include "util/base.h"


struct G {
    /* 8000 (32768) */ byte const VRAM_AddrTable_Low[19];
    /* 8013 (32787) */ byte const VRAM_AddrTable_High[19];
    /* 8026 (32806) */ byte const VRAM_Buffer_Offset[2];
    /* 8028 (32808) */ byte const WSelectBufferTemplate[6];
    /* 802e (32814) */ byte const MushroomIconData[8];
    /* 8036 (32822) */ byte const DemoActionData[21];
    /* 804b (32843) */ byte const DemoTimingData[22];
    /* 8061 (32865) */ byte const FloateyNumTileData[24];
    /* 8079 (32889) */ byte const ScoreUpdateData[12];
    /* 8085 (32901) */ byte const AreaPalette[4];
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
    /* 8158 (33112) */ byte const ColorRotatePalette[6];
    /* 815e (33118) */ byte const BlankPalette[8];
    /* 8166 (33126) */ byte const Palette3Data[16];
    /* 8176 (33142) */ byte const BlockGfxData[20];
    /* 818a (33162) */ byte const MetatileGraphics_Low[4];
    /* 818e (33166) */ byte const MetatileGraphics_High[4];
    /* 8192 (33170) */ byte const Palette0_MTiles[156];
    /* 822e (33326) */ byte const Palette1_MTiles[184];
    /* 82e6 (33510) */ byte const Palette2_MTiles[40];
    /* 830e (33550) */ byte const Palette3_MTiles[24];
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
    /* 84cc (33996) */ byte const HalfwayPageNybbles[16];
    /* 84dc (34012) */ byte const BSceneDataOffsets[3];
    /* 84df (34015) */ byte const BackSceneryData[144];
    /* 856f (34159) */ byte const BackSceneryMetatiles[36];
    /* 8593 (34195) */ byte const FSceneDataOffsets[3];
    /* 8596 (34198) */ byte const ForeSceneryData[39];
    /* 85bd (34237) */ byte const TerrainMetatiles[4];
    /* 85c1 (34241) */ byte const TerrainRenderBits[32];
    /* 85e1 (34273) */ byte const BlockBuffLowBounds[4];
    /* 85e5 (34277) */ byte const FrenzyIDData[3];
    /* 85e8 (34280) */ byte const PulleyRopeMetatiles[3];
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
    /* 865f (34399) */ byte const BlockBufferAddr[4];
    /* 8663 (34403) */ byte const AreaDataOfsLoopback[11];
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
    /* 869b (34459) */ byte const EnemyAddrHOffsets[4];
    /* 869f (34463) */ byte const EnemyDataAddrLow[34];
    /* 86c1 (34497) */ byte const EnemyDataAddrHigh[34];
    /* 86e3 (34531) */ byte const AreaDataHOffsets[4];
    /* 86e7 (34535) */ byte const AreaDataAddrLow[34];
    /* 8709 (34569) */ byte const AreaDataAddrHigh[34];
    /* 872b (34603) */ byte const E_CastleArea1[39];
    /* 8752 (34642) */ byte const E_CastleArea2[25];
    /* 876b (34667) */ byte const E_CastleArea3[47];
    /* 879a (34714) */ byte const E_CastleArea4[43];
    /* 87c5 (34757) */ byte const E_CastleArea5[21];
    /* 87da (34778) */ byte const E_CastleArea6[58];
    /* 8814 (34836) */ byte const E_GroundArea1[37];
    /* 8839 (34873) */ byte const E_GroundArea2[29];
    /* 8856 (34902) */ byte const E_GroundArea3[14];
    /* 8864 (34916) */ byte const E_GroundArea4[39];
    /* 888b (34955) */ byte const E_GroundArea5[49];
    /* 88bc (35004) */ byte const E_GroundArea6[30];
    /* 88da (35034) */ byte const E_GroundArea7[29];
    /* 88f7 (35063) */ byte const E_GroundArea8[21];
    /* 890c (35084) */ byte const E_GroundArea9[42];
    /* 8936 (35126) */ byte const E_GroundArea10[1];
    /* 8937 (35127) */ byte const E_GroundArea11[36];
    /* 895b (35163) */ byte const E_GroundArea12[9];
    /* 8964 (35172) */ byte const E_GroundArea13[37];
    /* 8989 (35209) */ byte const E_GroundArea14[35];
    /* 89ac (35244) */ byte const E_GroundArea15[9];
    /* 89b5 (35253) */ byte const E_GroundArea16[1];
    /* 89b6 (35254) */ byte const E_GroundArea17[58];
    /* 89f0 (35312) */ byte const E_GroundArea18[43];
    /* 8a1b (35355) */ byte const E_GroundArea19[46];
    /* 8a49 (35401) */ byte const E_GroundArea20[28];
    /* 8a65 (35429) */ byte const E_GroundArea21[9];
    /* 8a6e (35438) */ byte const E_GroundArea22[37];
    /* 8a93 (35475) */ byte const E_UndergroundArea1[45];
    /* 8ac0 (35520) */ byte const E_UndergroundArea2[46];
    /* 8aee (35566) */ byte const E_UndergroundArea3[45];
    /* 8b1b (35611) */ byte const E_WaterArea1[17];
    /* 8b2c (35628) */ byte const E_WaterArea2[42];
    /* 8b56 (35670) */ byte const E_WaterArea3[20];
    /* 8b6a (35690) */ byte const L_CastleArea1[97];
    /* 8bcb (35787) */ byte const L_CastleArea2[127];
    /* 8c4a (35914) */ byte const L_CastleArea3[115];
    /* 8cbd (36029) */ byte const L_CastleArea4[109];
    /* 8d2a (36138) */ byte const L_CastleArea5[139];
    /* 8db5 (36277) */ byte const L_CastleArea6[113];
    /* 8e26 (36390) */ byte const L_GroundArea1[99];
    /* 8e89 (36489) */ byte const L_GroundArea2[105];
    /* 8ef2 (36594) */ byte const L_GroundArea3[83];
    /* 8f45 (36677) */ byte const L_GroundArea4[143];
    /* 8fd4 (36820) */ byte const L_GroundArea5[117];
    /* 9049 (36937) */ byte const L_GroundArea6[101];
    /* 90ae (37038) */ byte const L_GroundArea7[85];
    /* 9103 (37123) */ byte const L_GroundArea8[133];
    /* 9188 (37256) */ byte const L_GroundArea9[101];
    /* 91ed (37357) */ byte const L_GroundArea10[9];
    /* 91f6 (37366) */ byte const L_GroundArea11[63];
    /* 9235 (37429) */ byte const L_GroundArea12[21];
    /* 924a (37450) */ byte const L_GroundArea13[103];
    /* 92b1 (37553) */ byte const L_GroundArea14[101];
    /* 9316 (37654) */ byte const L_GroundArea15[115];
    /* 9389 (37769) */ byte const L_GroundArea16[49];
    /* 93ba (37818) */ byte const L_GroundArea17[147];
    /* 944d (37965) */ byte const L_GroundArea18[115];
    /* 94c0 (38080) */ byte const L_GroundArea19[121];
    /* 9539 (38201) */ byte const L_GroundArea20[89];
    /* 9592 (38290) */ byte const L_GroundArea21[43];
    /* 95bd (38333) */ byte const L_GroundArea22[51];
    /* 95f0 (38384) */ byte const L_UndergroundArea1[163];
    /* 9693 (38547) */ byte const L_UndergroundArea2[161];
    /* 9734 (38708) */ byte const L_UndergroundArea3[141];
    /* 97c1 (38849) */ byte const L_WaterArea1[63];
    /* 9800 (38912) */ byte const L_WaterArea2[123];
    /* 987b (39035) */ byte const L_WaterArea3[28];
    /* 9897 (39063) */ byte const X_SubtracterData[2];
    /* 9899 (39065) */ byte const OffscrJoypadBitsData[2];
    /* 989b (39067) */ byte const Hidden1UpCoinAmts[8];
    /* 98a3 (39075) */ byte const ClimbAdderLow[4];
    /* 98a7 (39079) */ byte const ClimbAdderHigh[4];
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
    /* 98ee (39150) */ byte const VineHeightData[2];
    /* 98f0 (39152) */ byte const CannonBitmasks[2];
    /* 98f2 (39154) */ byte const BulletBillXSpdData[2];
    /* 98f4 (39156) */ byte const HammerEnemyOfsData[9];
    /* 98fd (39165) */ byte const HammerXSpdData[2];
    /* 98ff (39167) */ byte const CoinTallyOffsets[2];
    /* 9901 (39169) */ byte const ScoreOffsets[2];
    /* 9903 (39171) */ byte const StatusBarNybbles[2];
    /* 9905 (39173) */ byte const BlockYPosAdderData[2];
    /* 9907 (39175) */ byte const BrickQBlockMetatiles[14];
    /* 9915 (39189) */ byte const MaxSpdBlockData[2];
    /* 9917 (39191) */ byte const LoopCmdWorldNumber[11];
    /* 9922 (39202) */ byte const LoopCmdPageNumber[11];
    /* 992d (39213) */ byte const LoopCmdYPosition[11];
    /* 9938 (39224) */ byte const NormalXSpdData[2];
    /* 993a (39226) */ byte const HBroWalkingTimerData[2];
    /* 993c (39228) */ byte const PRDiffAdjustData[12];
    /* 9948 (39240) */ byte const FirebarSpinSpdData[5];
    /* 994d (39245) */ byte const FirebarSpinDirData[5];
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
    /* 999c (39324) */ byte const HammerThrowTmrData[2];
    /* 999e (39326) */ byte const XSpeedAdderData[4];
    /* 99a2 (39330) */ byte const RevivedXSpeed[4];
    /* 99a6 (39334) */ byte const HammerBroJumpLData[2];
    /* 99a8 (39336) */ byte const BlooberBitmasks[2];
    /* 99aa (39338) */ byte const SwimCCXMoveData[4];
    /* 99ae (39342) */ byte const FirebarPosLookupTbl[99];
    /* 9a11 (39441) */ byte const FirebarMirrorData[4];
    /* 9a15 (39445) */ byte const FirebarTblOffsets[12];
    /* 9a21 (39457) */ byte const FirebarYPos[2];
    /* 9a23 (39459) */ byte const PRandomSubtracter[5];
    /* 9a28 (39464) */ byte const FlyCCBPriority[5];
    /* 9a2d (39469) */ byte const LakituDiffAdj[3];
    /* 9a30 (39472) */ byte const BridgeCollapseData[15];
    /* 9a3f (39487) */ byte const PRandomRange[4];
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
    /* 9a6e (39534) */ byte const SetBitsMask[7];
    /* 9a75 (39541) */ byte const ClearBitsMask[7];
    /* 9a7c (39548) */ byte const PlayerPosSPlatData[2];
    /* 9a7e (39550) */ byte const PlayerBGUpperExtent[2];
    /* 9a80 (39552) */ byte const AreaChangeTimerData[2];
    /* 9a82 (39554) */ byte const ClimbXPosAdder[2];
    /* 9a84 (39556) */ byte const ClimbPLocAdder[2];
    /* 9a86 (39558) */ byte const FlagpoleYPosData[5];
    /* 9a8b (39563) */ byte const SolidMTileUpperExt[4];
    /* 9a8f (39567) */ byte const ClimbMTileUpperExt[4];
    /* 9a93 (39571) */ byte const EnemyBGCStateData[6];
    /* 9a99 (39577) */ byte const EnemyBGCXSpdData[2];
    /* 9a9b (39579) */ byte const BoundBoxCtrlData[48];
    /* 9acb (39627) */ byte const BlockBufferAdderData[3];
    /* 9ace (39630) */ byte const BlockBuffer_X_Adder[28];
    /* 9aea (39658) */ byte const BlockBuffer_Y_Adder[28];
    /* 9b06 (39686) */ byte const VineYPosAdder[2];
    /* 9b08 (39688) */ byte const FirstSprXPos[4];
    /* 9b0c (39692) */ byte const FirstSprYPos[4];
    /* 9b10 (39696) */ byte const SecondSprXPos[4];
    /* 9b14 (39700) */ byte const SecondSprYPos[4];
    /* 9b18 (39704) */ byte const FirstSprTilenum[4];
    /* 9b1c (39708) */ byte const SecondSprTilenum[4];
    /* 9b20 (39712) */ byte const HammerSprAttrib[4];
    /* 9b24 (39716) */ byte const FlagpoleScoreNumTiles[10];
    /* 9b2e (39726) */ byte const JumpingCoinTiles[4];
    /* 9b32 (39730) */ byte const PowerUpGfxTable[16];
    /* 9b42 (39746) */ byte const PowerUpAttributes[4];
    /* 9b46 (39750) */ byte const EnemyGraphicsTable[258];
    /* 9c48 (40008) */ byte const EnemyGfxTableOffsets[27];
    /* 9c63 (40035) */ byte const EnemyAttributeData[27];
    /* 9c7e (40062) */ byte const EnemyAnimTimingBMask[2];
    /* 9c80 (40064) */ byte const JumpspringFrameOffsets[5];
    /* 9c85 (40069) */ byte const DefaultBlockObjTiles[4];
    /* 9c89 (40073) */ byte const ExplosionTiles[3];
    /* 9c8c (40076) */ byte const PlayerGfxTblOffsets[16];
    /* 9c9c (40092) */ byte const PlayerGraphicsTable[208];
    /* 9d6c (40300) */ byte const SwimKickTileNum[2];
    /* 9d6e (40302) */ byte const IntermediatePlayerData[6];
    /* 9d74 (40308) */ byte const ChangeSizeOffsetAdder[20];
    /* 9d88 (40328) */ byte const ObjOffsetData[3];
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
    /* 9e0e (40462) */ byte const MusicHeaderData[49];
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
    /* a212 (41490) */ byte const UndergroundMusData[65];
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

// DIRECTIVES
void Start();
void NonMaskableInterrupt();
void PauseRoutine();
// $00 - used for preset value
void SpriteShuffler();
void OperModeExecutionTree();
void MoveAllSpritesOffscreen();
void MoveSpritesOffscreen();
void TitleScreenMode();
void GameMenuRoutine();
void GoContinue();
void DrawMushroomIcon();
void DemoEngine();
void VictoryMode();
void VictoryModeSubroutines();
void SetupVictoryMode();
void PlayerVictoryWalk();
void PrintVictoryMessages();
void PlayerEndWorld();
void FloateyNumbersRoutine();
void ScreenRoutines();
void InitScreen();
void SetupIntermediate();
void GetAreaPalette();
void GetBackgroundColor();
void GetPlayerColors();
void GetAlternatePalette1();
void WriteTopStatusLine();
void WriteBottomStatusLine();
void DisplayTimeUp();
void DisplayIntermediate();
void AreaParserTaskControl();
// $00 - vram buffer address table low
// $01 - vram buffer address table high
void DrawTitleScreen();
void ClearBuffersDrawIcon();
void WriteTopScore();
void WriteGameText();
void ResetSpritesAndScreenTimer();
void ResetScreenTimer();
// $00 - temp vram buffer offset
// $01 - temp metatile buffer offset
// $02 - temp metatile graphics table offset
// $03 - used to store attribute bits
// $04 - used to determine attribute table row
// $05 - used to determine attribute table column
// $06 - metatile graphics table address low
// $07 - metatile graphics table address high
void RenderAreaGraphics();
// $00 - temp attribute table address high (big endian order this time!)
// $01 - temp attribute table address low
void RenderAttributeTables();
void ColorRotation();
void RemoveCoin_Axe();
void ReplaceBlockMetatile();
void DestroyBlockMetatile();
void WriteBlockMetatile();
void MoveVOffset();
void PutBlockMetatile();
void RemBridge();
void InitializeNameTables();
void WriteNTAddr();
// $00 - temp joypad bit
void ReadJoypads();
void ReadPortBits();
void UpdateScreen();
void InitScroll();
void WritePPUReg1();
void PrintStatusBarNumbers();
void OutputNumbers();
void DigitsMathRoutine();
void UpdateTopScore();
void TopScoreCheck();
void InitializeGame();
void InitializeArea();
void PrimaryGameSetup();
void SecondaryGameSetup();
// $06 - RAM address low
// $07 - RAM address high
void InitializeMemory();
void GetAreaMusic();
void Entrance_GameTimerSetup();
void PlayerLoseLife();
void GameOverMode();
void SetupGameOver();
void RunGameOver();
void TerminateGame();
void TransposePlayers();
void DoNothing1();
void DoNothing2();
void AreaParserTaskHandler();
void AreaParserTasks();
void IncrementColumnPos();
void AreaParserCore();
// $00 - used to store area object identifier
// $07 - used as adder to find proper area object code
void ProcessAreaData();
void IncAreaObjOffset();
void DecodeAreaData();
void LoopCmdE();
// (these apply to all area object subroutines in this section unless otherwise stated)
// $00 - used to store offset used to find object code
// $07 - starts with adder from area parser, used to store row offset
void AlterAreaAttributes();
void ScrollLockObject_Warp();
void ScrollLockObject();
// $00 - used to store enemy identifier in KillEnemies
void KillEnemies();
void AreaFrenzy();
// $06 - used by MushroomLedge to store length
void AreaStyleObject();
void TreeLedge();
void MushroomLedge();
void PulleyRopeObject();
void CastleObject();
void WaterPipe();
// $05 - used to store length of vertical shaft in RenderSidewaysPipe
// $06 - used to store leftover horizontal length in RenderSidewaysPipe
// and vertical length in VerticalPipe and GetPipeHeight
void IntroPipe();
void ExitPipe();
void RenderSidewaysPipe();
void VerticalPipe();
void GetPipeHeight();
void FindEmptyEnemySlot();
void Hole_Water();
void QuestionBlockRow_High();
void QuestionBlockRow_Low();
void Bridge_High();
void Bridge_Middle();
void Bridge_Low();
void FlagBalls_Residual();
void FlagpoleObject();
void EndlessRope();
void BalancePlatRope();
void RowOfCoins();
void CastleBridgeObj();
void AxeObj();
void ChainObj();
void EmptyBlock();
void RowOfBricks();
void RowOfSolidBlocks();
void ColumnOfBricks();
void ColumnOfSolidBlocks();
void BulletBillCannon();
void StaircaseObject();
void Jumpspring();
// $07 - used to save ID of brick object
void Hidden1UpBlock();
void QuestionBlock();
void BrickWithCoins();
void BrickWithItem();
void GetAreaObjectID();
void Hole_Empty();
void RenderUnderPart();
void ChkLrgObjLength();
void ChkLrgObjFixedLength();
void GetLrgObjAttrib();
void GetAreaObjXPosition();
void GetAreaObjYPosition();
void GetBlockBufferAddr();
void LoadAreaPointer();
void GetAreaType();
void FindAreaPointer();
void GetAreaDataAddrs();
// indirect jump routine called when
// $0770 is set to 1
void GameMode();
void GameCoreRoutine();
void UpdScrollVar();
void ScrollHandler();
void ScrollScreen();
void GetScreenPosition();
void GameRoutines();
void PlayerEntrance();
// $07 - used to hold upper limit of high byte when player falls down hole
void AutoControlPlayer();
void PlayerCtrlRoutine();
void Vine_AutoClimb();
void SetEntr();
void VerticalPipeEntry();
void MovePlayerYAxis();
void SideExitPipeEntry();
void ChgAreaMode();
void EnterSidePipe();
void PlayerChangeSize();
void PlayerInjuryBlink();
// $00 - used in CyclePlayerPalette to store current palette to cycle
void PlayerDeath();
void DonePlayerTask();
void PlayerFireFlower();
void CyclePlayerPalette();
void ResetPalStar();
void FlagpoleSlide();
void PlayerEndLevel();
void PlayerMovementSubs();
// $00 - used by ClimbingSub to store high vertical adder
void OnGroundStateSub();
void FallingSub();
void JumpSwimSub();
void ClimbingSub();
void PlayerPhysicsSub();
void GetPlayerAnimSpeed();
void ImposeFriction();
// $00 - used to store downward movement force in FireballObjCore
// $02 - used to store maximum vertical speed in FireballObjCore
// $07 - used to store pseudorandom bit in BubbleCheck
void ProcFireball_Bubble();
void FireballObjCore();
void BubbleCheck();
void SetupBubble();
void RunGameTimer();
void WarpZoneObject();
// $00 - used in WhirlpoolActivate to store whirlpool length / 2, page location of center of whirlpool
// and also to store movement force exerted on player
// $01 - used in ProcessWhirlpools to store page location of right extent of whirlpool
// and in WhirlpoolActivate to store center of whirlpool
// $02 - used in ProcessWhirlpools to store right extent of whirlpool and in
// WhirlpoolActivate to store maximum vertical speed
void ProcessWhirlpools();
void FlagpoleRoutine();
void JumpspringHandler();
void Setup_Vine();
void VineObjectHandler();
void ProcessCannons();
void BulletBillHandler();
void SpawnHammerObj();
// $00 - used to set downward force
// $01 - used to set upward force (residual)
// $02 - used to set maximum speed
void ProcHammerObj();
// $02 - used to store vertical high nybble offset from block buffer routine
// $06 - used to store low byte of block buffer address
void CoinBlock();
void SetupJumpCoin();
void FindEmptyMiscSlot();
void MiscObjectsCore();
void GiveOneCoin();
void AddToScore();
void GetSBNybbles();
void UpdateNumber();
void PwrUpJmp();
void PowerUpObjHandler();
void PlayerHeadCollision();
void InitBlock_XY_Pos();
void BumpBlock();
void MushFlowerBlock();
void StarBlock();
void ExtraLifeMushBlock();
void VineBlock();
void BlockBumpedChk();
void BrickShatter();
void CheckTopOfBlock();
void SpawnBrickChunks();
void BlockObjectsCore();
// $02 - used to store offset to block buffer
// $06-$07 - used to store block buffer address
void BlockObjMT_Updater();
// $00 - used to store high nybble of horizontal speed as adder
// $01 - used to store low nybble of horizontal speed
// $02 - used to store adder to page location
void MoveEnemyHorizontally();
void MovePlayerHorizontally();
void MoveObjectHorizontally();
void MoveD_EnemyVertically();
void MoveFallingPlatform();
void MoveDropPlatform();
void MoveEnemySlowVert();
void MoveJ_EnemyVertically();
void SetXMoveAmt();
void ImposeGravityBlock();
void ImposeGravitySprObj();
void MovePlatformDown();
void MovePlatformUp();
// $00 - used for downward force
// $01 - used for upward force
// $07 - used as adder for vertical position
void ImposeGravity();
void EnemiesAndLoopsCore();
void ExecGameLoopback();
void InitEnemyObject();
void CheckpointEnemyID();
void NoInitCode();
void InitGoomba();
void InitPodoboo();
void InitRetainerObj();
void InitNormalEnemy();
void InitRedKoopa();
void InitHammerBro();
void InitHorizFlySwimEnemy();
void InitBloober();
void SmallBBox();
void InitRedPTroopa();
void InitVStf();
void InitBulletBill();
void InitCheepCheep();
void InitLakitu();
void SetupLakitu();
void LakituAndSpinyHandler();
void InitLongFirebar();
void InitShortFirebar();
void InitFlyingCheepCheep();
void InitBowser();
void DuplicateEnemyObj();
void InitBowserFlame();
void PutAtRightExtent();
void InitFireworks();
void BulletBillCheepCheep();
void InitPiranhaPlant();
void InitEnemyFrenzy();
void NoFrenzyCode();
void EndFrenzy();
void InitJumpGPTroopa();
void InitBalPlatform();
void InitDropPlatform();
void InitHoriPlatform();
void InitVertPlatform();
void LargeLiftUp();
void LargeLiftDown();
void PlatLiftUp();
void PlatLiftDown();
void PosPlatform();
void EndOfEnemyInitCode();
void NoRunCode();
void RunRetainerObj();
void RunNormalEnemies();
void EnemyMovementSubs();
void NoMoveCode();
void RunBowserFlame();
void RunFirebarObj();
void RunSmallPlatform();
void RunLargePlatform();
void LargePlatformSubroutines();
void EraseEnemyObject();
void MovePodoboo();
void ProcHammerBro();
void MoveNormalEnemy();
void MoveJumpingEnemy();
void ProcMoveRedPTroopa();
// $00 - used to store adder for movement, also used as adder for platform
// $01 - used to store maximum value for secondary counter
void MoveFlyGreenPTroopa();
void XMoveCntr_GreenPTroopa();
void XMoveCntr_Platform();
void MoveWithXMCntrs();
void MoveBloober();
void ProcSwimmingB();
void MoveBulletBill();
void MoveSwimmingCheepCheep();
void ProcFirebar();
void DrawFirebar_Collision();
void FirebarCollision();
void GetFirebarPosition();
void MoveFlyingCheepCheep();
void MoveLakitu();
void PlayerLakituDiff();
void BridgeCollapse();
void RunBowser();
void KillAllEnemies();
void ProcessBowserHalf();
void SetFlameTimer();
void ProcBowserFlame();
void RunFireworks();
void RunStarFlagObj();
void GameTimerFireworks();
void StarFlagExit();
void AwardGameTimerPoints();
void RaiseFlagSetoffFWorks();
void DrawStarFlag();
void DelayToAreaEnd();
// $00 - used to store horizontal difference between player and piranha plant
void MovePiranhaPlant();
// $07 - spinning speed
void FirebarSpin();
// $00 - used to hold collision flag, Y movement force + 5 or low byte of name table for rope
// $01 - used to hold high byte of name table for rope
// $02 - used to hold page location of rope
void BalancePlatform();
void SetupPlatformRope();
void StopPlatforms();
void YMovingPlatform();
// $00 - used as adder to position player hotizontally
void XMovingPlatform();
void PositionPlayerOnHPlat();
void DropPlatform();
// $00 - residual value from sub
void RightPlatform();
void MoveLargeLiftPlat();
void MoveSmallPlatform();
void MoveLiftPlatforms();
// $00 - page location of extended left boundary
// $01 - extended left boundary position
// $02 - page location of extended right boundary
// $03 - extended right boundary position
void OffscreenBoundsCheck();
// $01 - enemy buffer offset
void FireballEnemyCollision();
void HandleEnemyFBallCol();
void ShellOrBlockDefeat();
void PlayerHammerCollision();
void PlayerEnemyCollision();
void InjurePlayer();
void ForceInjury();
void SetPRout();
void EnemyFacePlayer();
void SetupFloateyNumber();
void EnemiesCollision();
void ProcEnemyCollisions();
void EnemyTurnAround();
// $00 - vertical position of platform
void LargePlatformCollision();
void ChkForPlayerC_LargeP();
// $00 - counter for bounding boxes
void SmallPlatformCollision();
void ProcLPlatCollisions();
void PositionPlayerOnS_Plat();
void PositionPlayerOnVPlat();
void CheckPlayerVertical();
void GetEnemyBoundBoxOfs();
void GetEnemyBoundBoxOfsArg();
void PlayerBGCollision();
void ErACM();
void ChkInvisibleMTiles();
// $00-$01 - used to hold bottom right and bottom left metatiles (in that order)
// $00 - used as flag by ImpedePlayerMove to restrict specific movement
void ChkForLandJumpSpring();
void ChkJumpspringMetatiles();
void HandlePipeEntry();
void ImpedePlayerMove();
void CheckForSolidMTiles();
void CheckForClimbMTiles();
void CheckForCoinMTiles();
void GetMTileAttrib();
void EnemyToBGCollisionDet();
void ChkToStunEnemies();
void SetStun();
void ChkForBump_HammerBroJ();
// $00 - used to hold horizontal difference between player and enemy
void PlayerEnemyDiff();
void EnemyLanding();
void SubtEnemyYPos();
void EnemyJump();
void KillEnemyAboveBlock();
void ChkUnderEnemy();
void ChkForNonSolids();
void FireballBGCollision();
void GetFireballBoundBox();
void GetMiscBoundBox();
void GetEnemyBoundBox();
void SmallPlatformBoundBox();
void LargePlatformBoundBox();
void BoundingBoxCore();
// $06 - second object's offset
// $07 - counter
void PlayerCollisionCore();
void SprObjectCollisionCore();
// $02 - modified y coordinate
// $03 - stores metatile involved in block buffer collisions
// $04 - comes in with offset to block buffer adder data, goes out with low nybble x/y coordinate
// $05 - modified x coordinate
// $06-$07 - block buffer address
void BlockBufferChk_Enemy();
void BlockBufferChk_FBall();
void BlockBufferColli_Feet();
void BlockBufferColli_Head();
void BlockBufferColli_Side();
void BlockBufferCollision();
void DrawVine();
void SixSpriteStacker();
void DrawHammer();
void FlagpoleGfxHandler();
void MoveSixSpritesOffscreen();
void DumpSixSpr();
void DumpFourSpr();
void DumpThreeSpr();
void DumpTwoSpr();
void DrawLargePlatform();
void JCoinGfxHandler();
void DrawPowerUp();
void EnemyGfxHandler();
void DrawEnemyObjRow();
void DrawOneSpriteRow();
void MoveESprRowOffscreen();
void MoveESprColOffscreen();
void DrawBlock();
void ChkLeftCo();
void MoveColOffscreen();
// $00 - used to hold palette bits for attribute byte or relative X position
void DrawBrickChunks();
void DrawFirebar();
void DrawExplosion_Fireworks();
void DrawSmallPlatform();
void DrawBubble();
void PlayerGfxHandler();
void FindPlayerAction();
void DrawPlayer_Intermediate();
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
void GetCurrentAnimOffset();
void GetGfxOffsetAdder();
void HandleChangeSize();
void ChkForPlayerAttrib();
// $00 - used in adding to get proper offset
void RelativePlayerPosition();
void RelativeBubblePosition();
void RelativeFireballPosition();
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
void RunOffscrBitsSubs();
void GetXOffscreenBits();
void DividePDiff();
void SoundEngine();
void Dump_Squ1_Regs();
void PlaySqu1Sfx();
void SetFreq_Squ1();
void Dump_Sq2_Regs();
void PlaySqu2Sfx();
void SetFreq_Squ2();
void SetFreq_Tri();
void Square1SfxHandler();
void StopSquare1Sfx();
void StopSquare2Sfx();
void Square2SfxHandler();
void NoiseSfxHandler();
void MusicHandler();
void AlternateLengthHandler();
void ProcessLengthData();
void LoadControlRegs();
void LoadEnvelopeData();
