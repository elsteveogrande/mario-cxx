#pragma once
#include "util/base.h"


struct G {
    byte _start;
    byte const VRAM_AddrTable_Low[19];
    byte const VRAM_AddrTable_High[19];
    byte const VRAM_Buffer_Offset[2];
    byte const WSelectBufferTemplate[6];
    byte const MushroomIconData[8];
    byte const DemoActionData[21];
    byte const DemoTimingData[22];
    byte const FloateyNumTileData[24];
    byte const ScoreUpdateData[12];
    byte const AreaPalette[4];
    byte const BGColorCtrl_Addr[4];
    byte const BackgroundColors[8];
    byte const PlayerColors[12];
    byte const GameText[1];
    byte const TopStatusBarLine[39];
    byte const WorldLivesDisplay[31];
    byte const TwoPlayerTimeUp[8];
    byte const OnePlayerTimeUp[11];
    byte const TwoPlayerGameOver[8];
    byte const OnePlayerGameOver[13];
    byte const WarpZoneWelcome[45];
    byte const LuigiName[5];
    byte const WarpZoneNumbers[12];
    byte const GameTextOffsets[10];
    byte const ColorRotatePalette[6];
    byte const BlankPalette[8];
    byte const Palette3Data[16];
    byte const BlockGfxData[20];
    byte const MetatileGraphics_Low[4];
    byte const MetatileGraphics_High[4];
    byte const Palette0_MTiles[156];
    byte const Palette1_MTiles[184];
    byte const Palette2_MTiles[40];
    byte const Palette3_MTiles[24];
    byte const WaterPaletteData[36];
    byte const GroundPaletteData[36];
    byte const UndergroundPaletteData[36];
    byte const CastlePaletteData[36];
    byte const DaySnowPaletteData[8];
    byte const NightSnowPaletteData[8];
    byte const MushroomPaletteData[8];
    byte const BowserPaletteData[8];
    byte const MarioThanksMessage[20];
    byte const LuigiThanksMessage[20];
    byte const MushroomRetainerSaved[44];
    byte const PrincessSaved1[23];
    byte const PrincessSaved2[31];
    byte const WorldSelectMessage1[17];
    byte const WorldSelectMessage2[21];
    byte const StatusBarData[12];
    byte const StatusBarOffset[6];
    byte const DefaultSprOffsets[15];
    byte const Sprite0Data[4];
    byte const MusicSelectData[6];
    byte const PlayerStarting_X_Pos[4];
    byte const AltYPosOffset[2];
    byte const PlayerStarting_Y_Pos[9];
    byte const PlayerBGPriorityData[8];
    byte const GameTimerData[4];
    byte const HalfwayPageNybbles[16];
    byte const BSceneDataOffsets[3];
    byte const BackSceneryData[144];
    byte const BackSceneryMetatiles[36];
    byte const FSceneDataOffsets[3];
    byte const ForeSceneryData[39];
    byte const TerrainMetatiles[4];
    byte const TerrainRenderBits[32];
    byte const BlockBuffLowBounds[4];
    byte const FrenzyIDData[3];
    byte const PulleyRopeMetatiles[3];
    byte const CastleMetatiles[55];
    byte const SidePipeShaftData[4];
    byte const SidePipeTopPart[4];
    byte const SidePipeBottomPart[4];
    byte const VerticalPipeData[8];
    byte const CoinMetatileData[4];
    byte const C_ObjectRow[3];
    byte const C_ObjectMetatile[3];
    byte const SolidBlockMetatiles[4];
    byte const BrickMetatiles[5];
    byte const StaircaseHeightData[9];
    byte const StaircaseRowData[9];
    byte const HoleMetatiles[4];
    byte const BlockBufferAddr[4];
    byte const AreaDataOfsLoopback[11];
    byte const WorldAddrOffsets[8];
    byte const AreaAddrOffsets[1];
    byte const World1Areas[5];
    byte const World2Areas[5];
    byte const World3Areas[4];
    byte const World4Areas[5];
    byte const World5Areas[4];
    byte const World6Areas[4];
    byte const World7Areas[5];
    byte const World8Areas[4];
    byte const EnemyAddrHOffsets[4];
    byte const EnemyDataAddrLow[34];
    byte const EnemyDataAddrHigh[34];
    byte const AreaDataHOffsets[4];
    byte const AreaDataAddrLow[34];
    byte const AreaDataAddrHigh[34];
    byte const E_CastleArea1[39];
    byte const E_CastleArea2[25];
    byte const E_CastleArea3[47];
    byte const E_CastleArea4[43];
    byte const E_CastleArea5[21];
    byte const E_CastleArea6[58];
    byte const E_GroundArea1[37];
    byte const E_GroundArea2[29];
    byte const E_GroundArea3[14];
    byte const E_GroundArea4[39];
    byte const E_GroundArea5[49];
    byte const E_GroundArea6[30];
    byte const E_GroundArea7[29];
    byte const E_GroundArea8[21];
    byte const E_GroundArea9[42];
    byte const E_GroundArea10[1];
    byte const E_GroundArea11[36];
    byte const E_GroundArea12[9];
    byte const E_GroundArea13[37];
    byte const E_GroundArea14[35];
    byte const E_GroundArea15[9];
    byte const E_GroundArea16[1];
    byte const E_GroundArea17[58];
    byte const E_GroundArea18[43];
    byte const E_GroundArea19[46];
    byte const E_GroundArea20[28];
    byte const E_GroundArea21[9];
    byte const E_GroundArea22[37];
    byte const E_UndergroundArea1[45];
    byte const E_UndergroundArea2[46];
    byte const E_UndergroundArea3[45];
    byte const E_WaterArea1[17];
    byte const E_WaterArea2[42];
    byte const E_WaterArea3[20];
    byte const L_CastleArea1[97];
    byte const L_CastleArea2[127];
    byte const L_CastleArea3[115];
    byte const L_CastleArea4[109];
    byte const L_CastleArea5[139];
    byte const L_CastleArea6[113];
    byte const L_GroundArea1[99];
    byte const L_GroundArea2[105];
    byte const L_GroundArea3[83];
    byte const L_GroundArea4[143];
    byte const L_GroundArea5[117];
    byte const L_GroundArea6[101];
    byte const L_GroundArea7[85];
    byte const L_GroundArea8[133];
    byte const L_GroundArea9[101];
    byte const L_GroundArea10[9];
    byte const L_GroundArea11[63];
    byte const L_GroundArea12[21];
    byte const L_GroundArea13[103];
    byte const L_GroundArea14[101];
    byte const L_GroundArea15[115];
    byte const L_GroundArea16[49];
    byte const L_GroundArea17[147];
    byte const L_GroundArea18[115];
    byte const L_GroundArea19[121];
    byte const L_GroundArea20[89];
    byte const L_GroundArea21[43];
    byte const L_GroundArea22[51];
    byte const L_UndergroundArea1[163];
    byte const L_UndergroundArea2[161];
    byte const L_UndergroundArea3[141];
    byte const L_WaterArea1[63];
    byte const L_WaterArea2[123];
    byte const L_WaterArea3[28];
    byte const X_SubtracterData[2];
    byte const OffscrJoypadBitsData[2];
    byte const Hidden1UpCoinAmts[8];
    byte const ClimbAdderLow[4];
    byte const ClimbAdderHigh[4];
    byte const JumpMForceData[7];
    byte const FallMForceData[7];
    byte const PlayerYSpdData[7];
    byte const InitMForceData[7];
    byte const MaxLeftXSpdData[3];
    byte const MaxRightXSpdData[4];
    byte const FrictionData[3];
    byte const Climb_Y_SpeedData[3];
    byte const Climb_Y_MForceData[3];
    byte const PlayerAnimTmrData[3];
    byte const FireballXSpdData[2];
    byte const Bubble_MForceData[2];
    byte const BubbleTimerData[2];
    byte const FlagpoleScoreMods[5];
    byte const FlagpoleScoreDigits[5];
    byte const Jumpspring_Y_PosData[4];
    byte const VineHeightData[2];
    byte const CannonBitmasks[2];
    byte const BulletBillXSpdData[2];
    byte const HammerEnemyOfsData[9];
    byte const HammerXSpdData[2];
    byte const CoinTallyOffsets[2];
    byte const ScoreOffsets[2];
    byte const StatusBarNybbles[2];
    byte const BlockYPosAdderData[2];
    byte const BrickQBlockMetatiles[14];
    byte const MaxSpdBlockData[2];
    byte const LoopCmdWorldNumber[11];
    byte const LoopCmdPageNumber[11];
    byte const LoopCmdYPosition[11];
    byte const NormalXSpdData[2];
    byte const HBroWalkingTimerData[2];
    byte const PRDiffAdjustData[12];
    byte const FirebarSpinSpdData[5];
    byte const FirebarSpinDirData[5];
    byte const FlyCCXPositionData[16];
    byte const FlyCCXSpeedData[12];
    byte const FlyCCTimerData[4];
    byte const FlameYPosData[4];
    byte const FlameYMFAdderData[2];
    byte const FireworksXPosData[6];
    byte const FireworksYPosData[6];
    byte const Bitmasks[8];
    byte const Enemy17YPosData[8];
    byte const SwimCC_IDData[2];
    byte const PlatPosDataLow[3];
    byte const PlatPosDataHigh[3];
    byte const HammerThrowTmrData[2];
    byte const XSpeedAdderData[4];
    byte const RevivedXSpeed[4];
    byte const HammerBroJumpLData[2];
    byte const BlooberBitmasks[2];
    byte const SwimCCXMoveData[4];
    byte const FirebarPosLookupTbl[99];
    byte const FirebarMirrorData[4];
    byte const FirebarTblOffsets[12];
    byte const FirebarYPos[2];
    byte const PRandomSubtracter[5];
    byte const FlyCCBPriority[5];
    byte const LakituDiffAdj[3];
    byte const BridgeCollapseData[15];
    byte const PRandomRange[4];
    byte const FlameTimerData[8];
    byte const StarFlagYPosAdder[4];
    byte const StarFlagXPosAdder[4];
    byte const StarFlagTileData[4];
    byte const BowserIdentities[8];
    byte const ResidualXSpdData[2];
    byte const KickedShellXSpdData[2];
    byte const DemotedKoopaXSpdData[2];
    byte const KickedShellPtsData[3];
    byte const StompedEnemyPtsData[4];
    byte const RevivalRateData[2];
    byte const SetBitsMask[7];
    byte const ClearBitsMask[7];
    byte const PlayerPosSPlatData[2];
    byte const PlayerBGUpperExtent[2];
    byte const AreaChangeTimerData[2];
    byte const ClimbXPosAdder[2];
    byte const ClimbPLocAdder[2];
    byte const FlagpoleYPosData[5];
    byte const SolidMTileUpperExt[4];
    byte const ClimbMTileUpperExt[4];
    byte const EnemyBGCStateData[6];
    byte const EnemyBGCXSpdData[2];
    byte const BoundBoxCtrlData[48];
    byte const BlockBufferAdderData[3];
    byte const BlockBuffer_X_Adder[28];
    byte const BlockBuffer_Y_Adder[28];
    byte const VineYPosAdder[2];
    byte const FirstSprXPos[4];
    byte const FirstSprYPos[4];
    byte const SecondSprXPos[4];
    byte const SecondSprYPos[4];
    byte const FirstSprTilenum[4];
    byte const SecondSprTilenum[4];
    byte const HammerSprAttrib[4];
    byte const FlagpoleScoreNumTiles[10];
    byte const JumpingCoinTiles[4];
    byte const PowerUpGfxTable[16];
    byte const PowerUpAttributes[4];
    byte const EnemyGraphicsTable[258];
    byte const EnemyGfxTableOffsets[27];
    byte const EnemyAttributeData[27];
    byte const EnemyAnimTimingBMask[2];
    byte const JumpspringFrameOffsets[5];
    byte const DefaultBlockObjTiles[4];
    byte const ExplosionTiles[3];
    byte const PlayerGfxTblOffsets[16];
    byte const PlayerGraphicsTable[208];
    byte const SwimKickTileNum[2];
    byte const IntermediatePlayerData[6];
    byte const ChangeSizeOffsetAdder[20];
    byte const ObjOffsetData[3];
    byte const XOffscreenBitsData[16];
    byte const DefaultXOnscreenOfs[3];
    byte const YOffscreenBitsData[9];
    byte const DefaultYOnscreenOfs[3];
    byte const HighPosUnitData[2];
    byte const SwimStompEnvelopeData[14];
    byte const ExtraLifeFreqData[6];
    byte const PowerUpGrabFreqData[30];
    byte const PUp_VGrow_FreqData[32];
    byte const BrickShatterFreqData[16];
    byte const MusicHeaderData[49];
    byte const TimeRunningOutHdr[5];
    byte const Star_CloudHdr[6];
    byte const EndOfLevelMusHdr[5];
    byte const ResidualHeaderData[5];
    byte const UndergroundMusHdr[5];
    byte const SilenceHdr[4];
    byte const CastleMusHdr[5];
    byte const VictoryMusHdr[5];
    byte const GameOverMusHdr[5];
    byte const WaterMusHdr[6];
    byte const WinCastleMusHdr[5];
    byte const GroundLevelPart1Hdr[6];
    byte const GroundLevelPart2AHdr[6];
    byte const GroundLevelPart2BHdr[6];
    byte const GroundLevelPart2CHdr[6];
    byte const GroundLevelPart3AHdr[6];
    byte const GroundLevelPart3BHdr[6];
    byte const GroundLevelLeadInHdr[6];
    byte const GroundLevelPart4AHdr[6];
    byte const GroundLevelPart4BHdr[6];
    byte const GroundLevelPart4CHdr[6];
    byte const DeathMusHdr[6];
    byte const Star_CloudMData[73];
    byte const GroundM_P1Data[27];
    byte const SilenceData[45];
    byte const GroundM_P2AData[44];
    byte const GroundM_P2BData[40];
    byte const GroundM_P2CData[37];
    byte const GroundM_P3AData[25];
    byte const GroundM_P3BData[30];
    byte const GroundMLdInData[44];
    byte const GroundM_P4AData[38];
    byte const GroundM_P4BData[39];
    byte const DeathMusData[2];
    byte const GroundM_P4CData[48];
    byte const CastleMusData[161];
    byte const GameOverMusData[45];
    byte const TimeRunOutMusData[62];
    byte const WinLevelMusData[97];
    byte const UndergroundMusData[65];
    byte const WaterMusData[255];
    byte const EndOfCastleMusData[119];
    byte const VictoryMusData[56];
    byte const FreqRegLookupTbl[102];
    byte const MusicLengthLookupTbl[48];
    byte const EndOfCastleMusicEnvData[4];
    byte const AreaMusicEnvData[8];
    byte const WaterEventMusEnvData[40];
    byte const BowserFlameEnvData[32];
    byte const BrickShatterEnvData[16];
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
#define                        SwimTileRepOffset ((offsetof(G, PlayerGraphicsTable)) + (0x9e))
#define                    MusicHeaderOffsetData ((offsetof(G, MusicHeaderData)) - (1))
#define                                      MHD offsetof(G, MusicHeaderData)
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
void SpriteShuffler();
void ShuffleLoop();
void StrSprOffset();
void NextSprOffset();
void SetAmtOffset();
void SetMiscOffset();
void OperModeExecutionTree();
void MoveAllSpritesOffscreen();
void MoveSpritesOffscreen();
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
void RenderAreaGraphics();
void DrawMTLoop();
void RightCheck();
void LLeft();
void NextMTRow();
void SetAttrib();
void ExitDrawM();
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
void ReadJoypads();
void ReadPortBits();
void PortLoop();
void Save8Bits();
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
void AlterAreaAttributes();
void Alter2();
void SetFore();
void ScrollLockObject_Warp();
void WarpNum();
void ScrollLockObject();
void KillEnemies();
void KillELoop();
void NoKillE();
void AreaFrenzy();
void FreCompLoop();
void ExitAFrenzy();
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
void Bridge_High();
void Bridge_Middle();
void Bridge_Low();
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
void ProcHammerObj();
void SetHSpd();
void SetHPos();
void RunAllH();
void RunHSubs();
void CoinBlock();
void SetupJumpCoin();
void JCoinC();
void FindEmptyMiscSlot();
void FMiscLoop();
void UseMiscS();
void MiscObjectsCore();
void MiscLoop();
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
void ExtraLifeMushBlock();
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
void BlockObjMT_Updater();
void UpdateLoop();
void NextBUpd();
void MoveEnemyHorizontally();
void MovePlayerHorizontally();
void MoveObjectHorizontally();
void SaveXSpd();
void UseAdder();
void ExXMove();
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
void ImposeGravitySprObj();
void MovePlatformDown();
void MovePlatformUp();
void SetDplSpd();
void RedPTroopaGrav();
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
void MovePiranhaPlant();
void ChkPlayerNearPipe();
void ReversePlantSpeed();
void SetupToMovePPlant();
void RiseFallPiranhaPlant();
void PutinPipe();
void FirebarSpin();
void SpinCounterClockwise();
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
void XMovingPlatform();
void PositionPlayerOnHPlat();
void PPHSubt();
void SetPVar();
void ExXMP();
void DropPlatform();
void ExDPl();
void RightPlatform();
void ExRPl();
void MoveLargeLiftPlat();
void MoveSmallPlatform();
void MoveLiftPlatforms();
void ChkSmallPlatCollision();
void ExLiftP();
void OffscreenBoundsCheck();
void LimitB();
void ExtendLB();
void TooFar();
void ExScrnBd();
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
void LargePlatformCollision();
void ChkForPlayerC_LargeP();
void ExLPC();
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
void DoEnemySideCheck();
void SdeCLoop();
void NextSdeC();
void ExESdeC();
void ChkForBump_HammerBroJ();
void NoBump();
void InvEnemyDir();
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
void PlayerCollisionCore();
void SprObjectCollisionCore();
void CollisionCoreLoop();
void SecondBoxVerticalChk();
void FirstBoxGreater();
void NoCollisionFound();
void CollisionFound();
void BlockBufferChk_Enemy();
void ResidualMiscObjectCode();
void BlockBufferChk_FBall();
void ResJmpM();
void BBChk_E();
void BlockBufferColli_Feet();
void BlockBufferColli_Head();
void BlockBufferColli_Side();
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
void RelativePlayerPosition();
void RelativeBubblePosition();
void RelativeFireballPosition();
void RelWOfs();
void RelativeMiscPosition();
void RelativeEnemyPosition();
void RelativeBlockPosition();
void VariableObjOfsRelPos();
void GetObjRelativePosition();
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
