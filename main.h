#pragma once
#include "util/base.h"


struct G {
    byte space[32768];
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
#define                            NumberofLives                0x75a
#define                              HalfwayPage                0x75b
#define                              LevelNumber                0x75c
#define                            Hidden1UpFlag                0x75d
#define                                CoinTally                0x75e
#define                              WorldNumber                0x75f
#define                               AreaNumber                0x760
#define                         CoinTallyFor1Ups                0x748
#define                      OffscreenPlayerInfo                0x761
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
};
int Start();
int VBlank1();
int VBlank2();
int WBootCheck();
int ColdBoot();
int NonMaskableInterrupt();
int ScreenOff();
int InitBuffer();
int DecTimers();
int DecTimersLoop();
int SkipExpTimer();
int NoDecTimers();
int PauseSkip();
int RotPRandomBit();
int Sprite0Clr();
int Sprite0Hit();
int HBlankDelay();
int SkipSprite0();
int SkipMainOper();
int PauseRoutine();
int ChkPauseTimer();
int ChkStart();
int ClrPauseTimer();
int SetPause();
int ExitPause();
int SpriteShuffler();
int ShuffleLoop();
int StrSprOffset();
int NextSprOffset();
int SetAmtOffset();
int SetMiscOffset();
int OperModeExecutionTree();
int MoveAllSpritesOffscreen();
int MoveSpritesOffscreen();
int SprInitLoop();
int TitleScreenMode();
int GameMenuRoutine();
int StartGame();
int ChkSelect();
int ChkWorldSel();
int SelectBLogic();
int IncWorldSel();
int UpdateShroom();
int NullJoypad();
int RunDemo();
int ResetTitle();
int ChkContinue();
int StartWorld1();
int InitScores();
int ExitMenu();
int GoContinue();
int DrawMushroomIcon();
int IconDataRead();
int ExitIcon();
int DemoEngine();
int DoAction();
int DemoOver();
int VictoryMode();
int AutoPlayer();
int VictoryModeSubroutines();
int SetupVictoryMode();
int PlayerVictoryWalk();
int PerformWalk();
int DontWalk();
int ExitVWalk();
int PrintVictoryMessages();
int MRetainerMsg();
int ThankPlayer();
int SecondPartMsg();
int EvalForMusic();
int PrintMsg();
int IncMsgCounter();
int SetEndTimer();
int IncModeTask_A();
int ExitMsgs();
int PlayerEndWorld();
int EndExitOne();
int EndChkBButton();
int EndExitTwo();
int FloateyNumbersRoutine();
int ChkNumTimer();
int DecNumTimer();
int LoadNumTiles();
int ChkTallEnemy();
int GetAltOffset();
int FloateyPart();
int SetupNumSpr();
int ScreenRoutines();
int InitScreen();
int SetupIntermediate();
int GetAreaPalette();
int SetVRAMAddr_A();
int NextSubtask();
int GetBackgroundColor();
int NoBGColor();
int GetPlayerColors();
int ChkFiery();
int StartClrGet();
int ClrGetLoop();
int SetBGColor();
int SetVRAMOffset();
int GetAlternatePalette1();
int SetVRAMAddr_B();
int NoAltPal();
int WriteTopStatusLine();
int WriteBottomStatusLine();
int DisplayTimeUp();
int NoTimeUp();
int DisplayIntermediate();
int PlayerInter();
int OutputInter();
int GameOverInter();
int NoInter();
int AreaParserTaskControl();
int TaskLoop();
int OutputCol();
int DrawTitleScreen();
int OutputTScr();
int ChkHiByte();
int ClearBuffersDrawIcon();
int TScrClear();
int IncSubtask();
int WriteTopScore();
int IncModeTask_B();
int WriteGameText();
int Chk2Players();
int LdGameText();
int GameTextLoop();
int EndGameText();
int PutLives();
int CheckPlayerName();
int ChkLuigi();
int NameLoop();
int ExitChkName();
int PrintWarpZoneNumbers();
int WarpNumLoop();
int ResetSpritesAndScreenTimer();
int ResetScreenTimer();
int NoReset();
int RenderAreaGraphics();
int DrawMTLoop();
int RightCheck();
int LLeft();
int NextMTRow();
int SetAttrib();
int ExitDrawM();
int RenderAttributeTables();
int SetATHigh();
int AttribLoop();
int SetVRAMCtrl();
int ColorRotation();
int GetBlankPal();
int GetAreaPal();
int ExitColorRot();
int RemoveCoin_Axe();
int WriteBlankMT();
int ReplaceBlockMetatile();
int DestroyBlockMetatile();
int WriteBlockMetatile();
int UseBOffset();
int MoveVOffset();
int PutBlockMetatile();
int SaveHAdder();
int RemBridge();
int InitializeNameTables();
int WriteNTAddr();
int InitNTLoop();
int InitATLoop();
int ReadJoypads();
int ReadPortBits();
int PortLoop();
int Save8Bits();
int WriteBufferToScreen();
int SetupWrites();
int GetLength();
int OutputToVRAM();
int RepeatByte();
int UpdateScreen();
int InitScroll();
int WritePPUReg1();
int PrintStatusBarNumbers();
int OutputNumbers();
int SetupNums();
int DigitPLoop();
int ExitOutputN();
int DigitsMathRoutine();
int AddModLoop();
int StoreNewD();
int EraseDMods();
int EraseMLoop();
int BorrowOne();
int CarryOne();
int UpdateTopScore();
int TopScoreCheck();
int GetScoreDiff();
int CopyScore();
int NoTopSc();
int InitializeGame();
int ClrSndLoop();
int InitializeArea();
int ClrTimersLoop();
int StartPage();
int SetInitNTHigh();
int SetSecHard();
int CheckHalfway();
int DoneInitArea();
int PrimaryGameSetup();
int SecondaryGameSetup();
int ClearVRLoop();
int ShufAmtLoop();
int ISpr0Loop();
int InitializeMemory();
int InitPageLoop();
int InitByteLoop();
int InitByte();
int SkipByte();
int GetAreaMusic();
int ChkAreaType();
int StoreMusic();
int ExitGetM();
int Entrance_GameTimerSetup();
int ChkStPos();
int SetStPos();
int ChkOverR();
int ChkSwimE();
int SetPESub();
int PlayerLoseLife();
int StillInGame();
int GetHalfway();
int MaskHPNyb();
int SetHalfway();
int GameOverMode();
int SetupGameOver();
int RunGameOver();
int TerminateGame();
int ContinueGame();
int GameIsOn();
int TransposePlayers();
int TransLoop();
int ExTrans();
int DoNothing1();
int DoNothing2();
int AreaParserTaskHandler();
int DoAPTasks();
int SkipATRender();
int AreaParserTasks();
int IncrementColumnPos();
int NoColWrap();
int AreaParserCore();
int RenderSceneryTerrain();
int ClrMTBuf();
int ThirdP();
int RendBack();
int SceLoop1();
int RendFore();
int SceLoop2();
int NoFore();
int RendTerr();
int TerMTile();
int StoreMT();
int TerrLoop();
int NoCloud2();
int TerrBChk();
int NextTBit();
int EndUChk();
int RendBBuf();
int ChkMTLow();
int StrBlock();
int ProcessAreaData();
int ProcADLoop();
int Chk1Row13();
int Chk1Row14();
int CheckRear();
int RdyDecode();
int SetBehind();
int NextAObj();
int ChkLength();
int ProcLoopb();
int EndAParse();
int IncAreaObjOffset();
int DecodeAreaData();
int Chk1stB();
int ChkRow14();
int ChkRow13();
int Mask2MSB();
int ChkSRows();
int LrgObj();
int NotWPipe();
int SpecObj();
int MoveAOId();
int NormObj();
int LeavePar();
int InitRear();
int LoopCmdE();
int BackColC();
int StrAObj();
int RunAObj();
int AlterAreaAttributes();
int Alter2();
int SetFore();
int ScrollLockObject_Warp();
int WarpNum();
int ScrollLockObject();
int KillEnemies();
int KillELoop();
int NoKillE();
int AreaFrenzy();
int FreCompLoop();
int ExitAFrenzy();
int AreaStyleObject();
int TreeLedge();
int MidTreeL();
int EndTreeL();
int MushroomLedge();
int EndMushL();
int AllUnder();
int NoUnder();
int PulleyRopeObject();
int RenderPul();
int MushLExit();
int CastleObject();
int CRendLoop();
int ChkCFloor();
int NotTall();
int PlayerStop();
int ExitCastle();
int WaterPipe();
int IntroPipe();
int VPipeSectLoop();
int NoBlankP();
int ExitPipe();
int RenderSidewaysPipe();
int DrawSidePart();
int VerticalPipe();
int WarpPipe();
int DrawPipe();
int GetPipeHeight();
int FindEmptyEnemySlot();
int EmptyChkLoop();
int ExitEmptyChk();
int Hole_Water();
int QuestionBlockRow_High();
int QuestionBlockRow_Low();
int Bridge_High();
int Bridge_Middle();
int Bridge_Low();
int FlagBalls_Residual();
int FlagpoleObject();
int EndlessRope();
int BalancePlatRope();
int DrawRope();
int RowOfCoins();
int CastleBridgeObj();
int AxeObj();
int ChainObj();
int EmptyBlock();
int ColObj();
int RowOfBricks();
int DrawBricks();
int RowOfSolidBlocks();
int GetRow();
int DrawRow();
int ColumnOfBricks();
int ColumnOfSolidBlocks();
int GetRow2();
int BulletBillCannon();
int SetupCannon();
int StrCOffset();
int StaircaseObject();
int NextStair();
int Jumpspring();
int Hidden1UpBlock();
int QuestionBlock();
int BrickWithCoins();
int BrickWithItem();
int BWithL();
int DrawQBlk();
int GetAreaObjectID();
int ExitDecBlock();
int Hole_Empty();
int StrWOffset();
int NoWhirlP();
int RenderUnderPart();
int DrawThisRow();
int WaitOneRow();
int ExitUPartR();
int ChkLrgObjLength();
int ChkLrgObjFixedLength();
int LenSet();
int GetLrgObjAttrib();
int GetAreaObjXPosition();
int GetAreaObjYPosition();
int GetBlockBufferAddr();
int LoadAreaPointer();
int GetAreaType();
int FindAreaPointer();
int GetAreaDataAddrs();
int StoreFore();
int StoreStyle();
int GameMode();
int GameCoreRoutine();
int GameEngine();
int ProcELoop();
int NoChgMus();
int CycleTwo();
int ClrPlrPal();
int SaveAB();
int UpdScrollVar();
int RunParser();
int ExitEng();
int ScrollHandler();
int ChkNearMid();
int ScrollScreen();
int InitScrlAmt();
int ChkPOffscr();
int KeepOnscr();
int InitPlatScrl();
int GetScreenPosition();
int GameRoutines();
int PlayerEntrance();
int ChkBehPipe();
int IntroEntr();
int EntrMode2();
int VineEntr();
int OffVine();
int PlayerRdy();
int ExitEntr();
int AutoControlPlayer();
int PlayerCtrlRoutine();
int DisJoyp();
int SaveJoyp();
int SizeChk();
int ChkMoveDir();
int SetMoveDir();
int PlayerSubs();
int PlayerHole();
int HoleDie();
int HoleBottom();
int ChkHoleX();
int ExitCtrl();
int CloudExit();
int Vine_AutoClimb();
int AutoClimb();
int SetEntr();
int VerticalPipeEntry();
int MovePlayerYAxis();
int SideExitPipeEntry();
int ChgAreaPipe();
int ChgAreaMode();
int ExitCAPipe();
int EnterSidePipe();
int RightPipe();
int PlayerChangeSize();
int EndChgSize();
int ExitChgSize();
int PlayerInjuryBlink();
int ExitBlink();
int InitChangeSize();
int ExitBoth();
int PlayerDeath();
int DonePlayerTask();
int PlayerFireFlower();
int CyclePlayerPalette();
int ResetPalFireFlower();
int ResetPalStar();
int ExitDeath();
int FlagpoleSlide();
int SlidePlayer();
int NoFPObj();
int PlayerEndLevel();
int ChkStop();
int InCastle();
int RdyNextA();
int NextArea();
int ExitNA();
int PlayerMovementSubs();
int SetCrouch();
int ProcMove();
int MoveSubs();
int NoMoveSub();
int OnGroundStateSub();
int GndMove();
int FallingSub();
int JumpSwimSub();
int DumpFall();
int ProcSwim();
int LRWater();
int LRAir();
int JSMove();
int ExitMov1();
int ClimbingSub();
int MoveOnVine();
int ClimbFD();
int CSetFDir();
int ExitCSub();
int InitCSTimer();
int PlayerPhysicsSub();
int ProcClimb();
int SetCAnim();
int CheckForJumping();
int NoJump();
int ProcJumping();
int InitJS();
int ChkWtr();
int GetYPhy();
int PJumpSnd();
int SJumpSnd();
int X_Physics();
int ProcPRun();
int ChkRFast();
int FastXSp();
int SetRTmr();
int GetXPhy();
int GetXPhy2();
int ExitPhy();
int GetPlayerAnimSpeed();
int ChkSkid();
int SetRunSpd();
int ProcSkid();
int SetAnimSpd();
int ImposeFriction();
int JoypFrict();
int LeftFrict();
int RghtFrict();
int XSpdSign();
int SetAbsSpd();
int ProcFireball_Bubble();
int ProcFireballs();
int ProcAirBubbles();
int BublLoop();
int BublExit();
int FireballObjCore();
int RunFB();
int EraseFB();
int NoFBall();
int FireballExplosion();
int BubbleCheck();
int SetupBubble();
int PosBubl();
int MoveBubl();
int Y_Bubl();
int ExitBubl();
int RunGameTimer();
int ResGTCtrl();
int TimeUpOn();
int ExGTimer();
int WarpZoneObject();
int ProcessWhirlpools();
int WhLoop();
int NextWh();
int ExitWh();
int WhirlpoolActivate();
int LeftWh();
int SetPWh();
int WhPull();
int FlagpoleRoutine();
int SkipScore();
int GiveFPScr();
int FPGfx();
int ExitFlagP();
int JumpspringHandler();
int DownJSpr();
int PosJSpr();
int BounceJS();
int DrawJSpr();
int ExJSpring();
int Setup_Vine();
int NextVO();
int VineObjectHandler();
int RunVSubs();
int VDrawLoop();
int KillVine();
int WrCMTile();
int ExitVH();
int ProcessCannons();
int ThreeSChk();
int FireCannon();
int Chk_BB();
int Next3Slt();
int ExCannon();
int BulletBillHandler();
int SetupBB();
int ChkDSte();
int BBFly();
int RunBBSubs();
int KillBB();
int SpawnHammerObj();
int SetMOfs();
int NoHammer();
int ProcHammerObj();
int SetHSpd();
int SetHPos();
int RunAllH();
int RunHSubs();
int CoinBlock();
int SetupJumpCoin();
int JCoinC();
int FindEmptyMiscSlot();
int FMiscLoop();
int UseMiscS();
int MiscObjectsCore();
int MiscLoop();
int ProcJumpCoin();
int JCoinRun();
int RunJCSubs();
int MiscLoopBack();
int GiveOneCoin();
int CoinPoints();
int AddToScore();
int GetSBNybbles();
int UpdateNumber();
int NoZSup();
int SetupPowerUp();
int PwrUpJmp();
int StrType();
int PutBehind();
int PowerUpObjHandler();
int ShroomM();
int GrowThePowerUp();
int ChkPUSte();
int RunPUSubs();
int ExitPUp();
int PlayerHeadCollision();
int DBlockSte();
int ChkBrick();
int StartBTmr();
int ContBTmr();
int PutOldMT();
int PutMTileB();
int SmallBP();
int BigBP();
int Unbreak();
int InvOBit();
int InitBlock_XY_Pos();
int BumpBlock();
int BlockCode();
int MushFlowerBlock();
int StarBlock();
int ExtraLifeMushBlock();
int VineBlock();
int ExitBlockChk();
int BlockBumpedChk();
int BumpChkLoop();
int MatchBump();
int BrickShatter();
int CheckTopOfBlock();
int TopEx();
int SpawnBrickChunks();
int BlockObjectsCore();
int ChkTop();
int BouncingBlockHandler();
int KillBlock();
int UpdSte();
int BlockObjMT_Updater();
int UpdateLoop();
int NextBUpd();
int MoveEnemyHorizontally();
int MovePlayerHorizontally();
int MoveObjectHorizontally();
int SaveXSpd();
int UseAdder();
int ExXMove();
int MovePlayerVertically();
int NoJSChk();
int MoveD_EnemyVertically();
int MoveFallingPlatform();
int ContVMove();
int MoveRedPTroopaDown();
int MoveRedPTroopaUp();
int MoveRedPTroopa();
int MoveDropPlatform();
int MoveEnemySlowVert();
int SetMdMax();
int MoveJ_EnemyVertically();
int SetHiMax();
int SetXMoveAmt();
int ResidualGravityCode();
int ImposeGravityBlock();
int ImposeGravitySprObj();
int MovePlatformDown();
int MovePlatformUp();
int SetDplSpd();
int RedPTroopaGrav();
int ImposeGravity();
int AlterYP();
int ChkUpM();
int ExVMove();
int EnemiesAndLoopsCore();
int ChkAreaTsk();
int ChkBowserF();
int ExitELCore();
int ExecGameLoopback();
int ProcLoopCommand();
int FindLoop();
int IncMLoop();
int WrongChk();
int DoLpBack();
int InitMLp();
int InitLCmd();
int ChkEnemyFrenzy();
int ProcessEnemyData();
int CheckEndofBuffer();
int CheckRightBounds();
int CheckPageCtrlRow();
int PositionEnemyObj();
int CheckRightExtBounds();
int CheckForEnemyGroup();
int BuzzyBeetleMutate();
int StrID();
int CheckFrenzyBuffer();
int StrFre();
int InitEnemyObject();
int ExEPar();
int DoGroup();
int ParseRow0e();
int NotUse();
int CheckThreeBytes();
int Inc3B();
int Inc2B();
int CheckpointEnemyID();
int InitEnemyRoutines();
int NoInitCode();
int InitGoomba();
int InitPodoboo();
int InitRetainerObj();
int InitNormalEnemy();
int GetESpd();
int SetESpd();
int InitRedKoopa();
int InitHammerBro();
int InitHorizFlySwimEnemy();
int InitBloober();
int SmallBBox();
int InitRedPTroopa();
int GetCent();
int TallBBox();
int SetBBox();
int InitVStf();
int InitBulletBill();
int InitCheepCheep();
int InitLakitu();
int SetupLakitu();
int KillLakitu();
int LakituAndSpinyHandler();
int ChkLak();
int ChkNoEn();
int CreateL();
int RetEOfs();
int ExLSHand();
int CreateSpiny();
int DifLoop();
int UsePosv();
int SetSpSpd();
int SpinyRte();
int ChpChpEx();
int InitLongFirebar();
int InitShortFirebar();
int InitFlyingCheepCheep();
int MaxCC();
int GSeed();
int RSeed();
int D2XPos1();
int D2XPos2();
int FinCCSt();
int InitBowser();
int DuplicateEnemyObj();
int FSLoop();
int FlmEx();
int InitBowserFlame();
int SetFrT();
int PutAtRightExtent();
int SpawnFromMouth();
int SetMF();
int FinishFlame();
int InitFireworks();
int StarFChk();
int ExitFWk();
int BulletBillCheepCheep();
int ChkW2();
int Get17ID();
int Set17ID();
int GetRBit();
int ChkRBit();
int AddFBit();
int DoBulletBills();
int BB_SLoop();
int ExF17();
int FireBulletBill();
int HandleGroupEnemies();
int PullID();
int SnglID();
int SetYGp();
int CntGrp();
int GrLoop();
int GSltLp();
int NextED();
int InitPiranhaPlant();
int InitEnemyFrenzy();
int NoFrenzyCode();
int EndFrenzy();
int LakituChk();
int NextFSlot();
int InitJumpGPTroopa();
int TallBBox2();
int SetBBox2();
int InitBalPlatform();
int AlignP();
int SetBPA();
int InitDropPlatform();
int InitHoriPlatform();
int InitVertPlatform();
int SetYO();
int CommonPlatCode();
int SPBBox();
int CasPBB();
int LargeLiftUp();
int LargeLiftDown();
int LargeLiftBBox();
int PlatLiftUp();
int PlatLiftDown();
int CommonSmallLift();
int PosPlatform();
int EndOfEnemyInitCode();
int RunEnemyObjectsCore();
int JmpEO();
int NoRunCode();
int RunRetainerObj();
int RunNormalEnemies();
int SkipMove();
int EnemyMovementSubs();
int NoMoveCode();
int RunBowserFlame();
int RunFirebarObj();
int RunSmallPlatform();
int RunLargePlatform();
int SkipPT();
int LargePlatformSubroutines();
int EraseEnemyObject();
int MovePodoboo();
int PdbM();
int ProcHammerBro();
int ChkJH();
int DecHT();
int HammerBroJumpCode();
int SetHJ();
int HJump();
int MoveHammerBroXDir();
int Shimmy();
int SetShim();
int MoveNormalEnemy();
int FallE();
int MEHor();
int SlowM();
int SteadM();
int AddHS();
int ReviveStunned();
int SetRSpd();
int MoveDefeatedEnemy();
int ChkKillGoomba();
int NKGmba();
int MoveJumpingEnemy();
int ProcMoveRedPTroopa();
int NoIncPT();
int MoveRedPTUpOrDown();
int MovPTDwn();
int MoveFlyGreenPTroopa();
int YSway();
int NoMGPT();
int XMoveCntr_GreenPTroopa();
int XMoveCntr_Platform();
int NoIncXM();
int IncPXM();
int DecSeXM();
int MoveWithXMCntrs();
int XMRight();
int MoveBloober();
int FBLeft();
int SBMDir();
int BlooberSwim();
int SwimX();
int LeftSwim();
int MoveDefeatedBloober();
int ProcSwimmingB();
int BSwimE();
int SlowSwim();
int NoSSw();
int ChkForFloatdown();
int Floatdown();
int NoFD();
int ChkNearPlayer();
int MoveBulletBill();
int NotDefB();
int MoveSwimmingCheepCheep();
int CCSwim();
int CCSwimUpwards();
int ChkSwimYPos();
int YPDiff();
int ExSwCC();
int ProcFirebar();
int SusFbar();
int SkpFSte();
int SetupGFB();
int SetMFbar();
int DrawFbar();
int NextFbar();
int SkipFBar();
int DrawFirebar_Collision();
int AddHA();
int SubtR1();
int ChkFOfs();
int VAHandl();
int AddVA();
int SetVFbr();
int FirebarCollision();
int AdjSm();
int BigJp();
int FBCLoop();
int ChkVFBD();
int ChkFBCl();
int Chk2Ofs();
int ChgSDir();
int SetSDir();
int NoColFB();
int GetFirebarPosition();
int GetHAdder();
int GetVAdder();
int MoveFlyingCheepCheep();
int FlyCC();
int AddCCF();
int BPGet();
int MoveLakitu();
int ChkLS();
int Fr12S();
int LdLDa();
int SetLSpd();
int SetLMov();
int PlayerLakituDiff();
int ChkLakDif();
int SetLMovD();
int ChkPSpeed();
int ChkSpinyO();
int ChkEmySpd();
int SubDifAdj();
int SPixelLak();
int ExMoveLak();
int BridgeCollapse();
int SetM2();
int MoveD_Bowser();
int RemoveBridge();
int NoBFall();
int RunBowser();
int KillAllEnemies();
int KillLoop();
int BowserControl();
int ChkMouth();
int FeetTmr();
int ResetMDr();
int B_FaceP();
int GetPRCmp();
int GetDToO();
int CompDToO();
int HammerChk();
int SetHmrTmr();
int SkipToFB();
int MakeBJump();
int ChkFireB();
int SpawnFBr();
int SetFBTmr();
int BowserGfxHandler();
int CopyFToR();
int ExBGfxH();
int ProcessBowserHalf();
int SetFlameTimer();
int ExFl();
int ProcBowserFlame();
int SFlmX();
int SetGfxF();
int FlmeAt();
int DrawFlameLoop();
int M3FOfs();
int M2FOfs();
int M1FOfs();
int ExFlmeD();
int RunFireworks();
int SetupExpl();
int FireworksSoundScore();
int RunStarFlagObj();
int GameTimerFireworks();
int SetFWC();
int IncrementSFTask1();
int StarFlagExit();
int AwardGameTimerPoints();
int NoTTick();
int EndAreaPoints();
int ELPGive();
int RaiseFlagSetoffFWorks();
int SetoffF();
int DrawStarFlag();
int DSFLoop();
int DrawFlagSetTimer();
int IncrementSFTask2();
int DelayToAreaEnd();
int StarFlagExit2();
int MovePiranhaPlant();
int ChkPlayerNearPipe();
int ReversePlantSpeed();
int SetupToMovePPlant();
int RiseFallPiranhaPlant();
int PutinPipe();
int FirebarSpin();
int SpinCounterClockwise();
int BalancePlatform();
int DoBPl();
int CheckBalPlatform();
int ChkForFall();
int MakePlatformFall();
int ChkOtherForFall();
int ChkToMoveBalPlat();
int ColFlg();
int PlatUp();
int PlatSt();
int PlatDn();
int DoOtherPlatform();
int DrawEraseRope();
int EraseR1();
int OtherRope();
int EraseR2();
int EndRp();
int ExitRp();
int SetupPlatformRope();
int GetLRp();
int GetHRp();
int ExPRp();
int InitPlatformFall();
int StopPlatforms();
int PlatformFall();
int ExPF();
int YMovingPlatform();
int SkipIY();
int ChkYCenterPos();
int YMDown();
int ChkYPCollision();
int ExYPl();
int XMovingPlatform();
int PositionPlayerOnHPlat();
int PPHSubt();
int SetPVar();
int ExXMP();
int DropPlatform();
int ExDPl();
int RightPlatform();
int ExRPl();
int MoveLargeLiftPlat();
int MoveSmallPlatform();
int MoveLiftPlatforms();
int ChkSmallPlatCollision();
int ExLiftP();
int OffscreenBoundsCheck();
int LimitB();
int ExtendLB();
int TooFar();
int ExScrnBd();
int FireballEnemyCollision();
int FireballEnemyCDLoop();
int GoombaDie();
int NotGoomba();
int NoFToECol();
int ExitFBallEnemy();
int HandleEnemyFBallCol();
int ChkBuzzyBeetle();
int HurtBowser();
int SetDBSte();
int ChkOtherEnemies();
int ShellOrBlockDefeat();
int StnE();
int GoombaPoints();
int EnemySmackScore();
int ExHCF();
int PlayerHammerCollision();
int ClHCol();
int ExPHC();
int HandlePowerUpCollision();
int Shroom_Flower_PUp();
int SetFor1Up();
int UpToSuper();
int UpToFiery();
int NoPUp();
int PlayerEnemyCollision();
int NoPECol();
int CheckForPUpCollision();
int EColl();
int HandlePECollisions();
int KSPts();
int ExPEC();
int ChkForPlayerInjury();
int ChkInj();
int ChkETmrs();
int TInjE();
int InjurePlayer();
int ForceInjury();
int SetKRout();
int SetPRout();
int ExInjColRoutines();
int KillPlayer();
int EnemyStomped();
int EnemyStompedPts();
int ChkForDemoteKoopa();
int HandleStompedShellE();
int SBnce();
int ChkEnemyFaceRight();
int LInj();
int EnemyFacePlayer();
int SFcRt();
int SetupFloateyNumber();
int ExSFN();
int EnemiesCollision();
int ECLoop();
int YesEC();
int NoEnemyCollision();
int ReadyNextEnemy();
int ExitECRoutine();
int ProcEnemyCollisions();
int ShellCollisions();
int ExitProcessEColl();
int ProcSecondEnemyColl();
int MoveEOfs();
int EnemyTurnAround();
int RXSpd();
int ExTA();
int LargePlatformCollision();
int ChkForPlayerC_LargeP();
int ExLPC();
int SmallPlatformCollision();
int ChkSmallPlatLoop();
int MoveBoundBox();
int ExSPC();
int ProcSPlatCollisions();
int ProcLPlatCollisions();
int ChkForTopCollision();
int SetCollisionFlag();
int PlatformSideCollisions();
int SideC();
int NoSideC();
int PositionPlayerOnS_Plat();
int PositionPlayerOnVPlat();
int ExPlPos();
int CheckPlayerVertical();
int ExCPV();
int GetEnemyBoundBoxOfs();
int GetEnemyBoundBoxOfsArg();
int PlayerBGCollision();
int SetFallS();
int SetPSte();
int ChkOnScr();
int ExPBGCol();
int ChkCollSize();
int GBBAdr();
int HeadChk();
int SolidOrClimb();
int NYSpd();
int DoFootCheck();
int AwardTouchedCoin();
int ChkFootMTile();
int ContChk();
int LandPlyr();
int InitSteP();
int DoPlayerSideCheck();
int SideCheckLoop();
int BHalf();
int ExSCH();
int CheckSideMTiles();
int ContSChk();
int ChkPBtm();
int PipeDwnS();
int PlyrPipe();
int SetCATmr();
int ChkGERtn();
int StopPlayerMove();
int ExCSM();
int HandleCoinMetatile();
int HandleAxeMetatile();
int ErACM();
int HandleClimbing();
int ExHC();
int ChkForFlagpole();
int FlagpoleCollision();
int ChkFlagpoleYPosLoop();
int MtchF();
int RunFR();
int VineCollision();
int PutPlayerOnVine();
int SetVXPl();
int ExPVne();
int ChkInvisibleMTiles();
int ExCInvT();
int ChkForLandJumpSpring();
int ExCJSp();
int ChkJumpspringMetatiles();
int JSFnd();
int NoJSFnd();
int HandlePipeEntry();
int GetWNum();
int ExPipeE();
int ImpedePlayerMove();
int RImpd();
int NXSpd();
int PlatF();
int ExIPM();
int CheckForSolidMTiles();
int CheckForClimbMTiles();
int CheckForCoinMTiles();
int CoinSd();
int GetMTileAttrib();
int ExEBG();
int EnemyToBGCollisionDet();
int DoIDCheckBGColl();
int HBChk();
int CInvu();
int YesIn();
int NoEToBGCollision();
int HandleEToBGCollision();
int GiveOEPoints();
int ChkToStunEnemies();
int Demote();
int SetStun();
int SetWYSpd();
int SetNotW();
int ChkBBill();
int NoCDirF();
int ExEBGChk();
int LandEnemyProperly();
int SChkA();
int ChkLandedEnemyState();
int SetForStn();
int ExSteChk();
int ProcEnemyDirection();
int InvtD();
int CNwCDir();
int LandEnemyInitState();
int NMovShellFallBit();
int ChkForRedKoopa();
int Chk2MSBSt();
int GetSteFromD();
int SetD6Ste();
int DoEnemySideCheck();
int SdeCLoop();
int NextSdeC();
int ExESdeC();
int ChkForBump_HammerBroJ();
int NoBump();
int InvEnemyDir();
int PlayerEnemyDiff();
int EnemyLanding();
int SubtEnemyYPos();
int EnemyJump();
int DoSide();
int HammerBroBGColl();
int KillEnemyAboveBlock();
int UnderHammerBro();
int NoUnderHammerBro();
int ChkUnderEnemy();
int ChkForNonSolids();
int NSFnd();
int FireballBGCollision();
int ClearBounceFlag();
int InitFireballExplode();
int GetFireballBoundBox();
int GetMiscBoundBox();
int FBallB();
int GetEnemyBoundBox();
int SmallPlatformBoundBox();
int GetMaskedOffScrBits();
int CMBits();
int LargePlatformBoundBox();
int SetupEOffsetFBBox();
int MoveBoundBoxOffscreen();
int BoundingBoxCore();
int CheckRightScreenBBox();
int SORte();
int NoOfs();
int CheckLeftScreenBBox();
int SOLft();
int NoOfs2();
int PlayerCollisionCore();
int SprObjectCollisionCore();
int CollisionCoreLoop();
int SecondBoxVerticalChk();
int FirstBoxGreater();
int NoCollisionFound();
int CollisionFound();
int BlockBufferChk_Enemy();
int ResidualMiscObjectCode();
int BlockBufferChk_FBall();
int ResJmpM();
int BBChk_E();
int BlockBufferColli_Feet();
int BlockBufferColli_Head();
int BlockBufferColli_Side();
int BlockBufferCollision();
int RetXC();
int RetYC();
int DrawVine();
int VineTL();
int SkpVTop();
int ChkFTop();
int NextVSp();
int SixSpriteStacker();
int StkLp();
int DrawHammer();
int ForceHPose();
int GetHPose();
int RenderH();
int NoHOffscr();
int FlagpoleGfxHandler();
int ChkFlagOffscreen();
int MoveSixSpritesOffscreen();
int DumpSixSpr();
int DumpFourSpr();
int DumpThreeSpr();
int DumpTwoSpr();
int ExitDumpSpr();
int DrawLargePlatform();
int ShrinkPlatform();
int SetLast2Platform();
int SetPlatformTilenum();
int SChk2();
int SChk3();
int SChk4();
int SChk5();
int SChk6();
int SLChk();
int ExDLPl();
int DrawFloateyNumber_Coin();
int NotRsNum();
int JCoinGfxHandler();
int ExJCGfx();
int DrawPowerUp();
int PUpDrawLoop();
int FlipPUpRightSide();
int PUpOfs();
int EnemyGfxHandler();
int CheckForRetainerObj();
int CheckForBulletBillCV();
int SBBAt();
int CheckForJumpspring();
int CheckForPodoboo();
int CheckBowserGfxFlag();
int SBwsrGfxOfs();
int CheckForGoomba();
int GmbaAnim();
int CheckBowserFront();
int ChkFrontSte();
int FlipBowserOver();
int DrawBowser();
int CheckBowserRear();
int ChkRearSte();
int CheckForSpiny();
int NotEgg();
int CheckForLakitu();
int NoLAFr();
int CheckUpsideDownShell();
int CheckRightSideUpShell();
int CheckForDefdGoomba();
int CheckForHammerBro();
int CheckForBloober();
int CheckToAnimateEnemy();
int CheckForSecondFrame();
int CheckAnimationStop();
int CheckDefeatedState();
int DrawEnemyObject();
int SkipToOffScrChk();
int CheckForVerticalFlip();
int FlipEnemyVertically();
int CheckForESymmetry();
int ContES();
int ESRtnr();
int SpnySC();
int MirrorEnemyGfx();
int EggExc();
int CheckToMirrorLakitu();
int NVFLak();
int CheckToMirrorJSpring();
int SprObjectOffscrChk();
int LcChk();
int Row3C();
int Row23C();
int AllRowC();
int ExEGHandler();
int DrawEnemyObjRow();
int DrawOneSpriteRow();
int MoveESprRowOffscreen();
int MoveESprColOffscreen();
int DrawBlock();
int DBlkLoop();
int ChkRep();
int SetBFlip();
int BlkOffscr();
int PullOfsB();
int ChkLeftCo();
int MoveColOffscreen();
int ExDBlk();
int DrawBrickChunks();
int DChunks();
int ChnkOfs();
int ExBCDr();
int DrawFireball();
int DrawFirebar();
int FireA();
int DrawExplosion_Fireball();
int DrawExplosion_Fireworks();
int KillFireBall();
int DrawSmallPlatform();
int TopSP();
int BotSP();
int SOfs();
int SOfs2();
int ExSPl();
int DrawBubble();
int ExDBub();
int PlayerGfxHandler();
int CntPl();
int SwimKT();
int BigKTS();
int ExPGH();
int FindPlayerAction();
int DoChangeSize();
int PlayerKilled();
int PlayerGfxProcessing();
int SUpdR();
int PlayerOffscreenChk();
int PROfsLoop();
int NPROffscr();
int DrawPlayer_Intermediate();
int PIntLoop();
int RenderPlayerSub();
int DrawPlayerLoop();
int ProcessPlayerAction();
int ProcOnGroundActs();
int NonAnimatedActs();
int ActionFalling();
int ActionWalkRun();
int ActionClimbing();
int ActionSwimming();
int GetCurrentAnimOffset();
int FourFrameExtent();
int ThreeFrameExtent();
int AnimationControl();
int SetAnimC();
int ExAnimC();
int GetGfxOffsetAdder();
int SzOfs();
int HandleChangeSize();
int CSzNext();
int GorSLog();
int GetOffsetFromAnimCtrl();
int ShrinkPlayer();
int ShrPlF();
int ChkForPlayerAttrib();
int KilledAtt();
int C_S_IGAtt();
int ExPlyrAt();
int RelativePlayerPosition();
int RelativeBubblePosition();
int RelativeFireballPosition();
int RelWOfs();
int RelativeMiscPosition();
int RelativeEnemyPosition();
int RelativeBlockPosition();
int VariableObjOfsRelPos();
int GetObjRelativePosition();
int GetPlayerOffscreenBits();
int GetFireballOffscreenBits();
int GetBubbleOffscreenBits();
int GetMiscOffscreenBits();
int GetProperObjOffset();
int GetEnemyOffscreenBits();
int GetBlockOffscreenBits();
int SetOffscrBitsOffset();
int GetOffScreenBitsSet();
int RunOffscrBitsSubs();
int GetXOffscreenBits();
int XOfsLoop();
int XLdBData();
int ExXOfsBS();
int GetYOffscreenBits();
int YOfsLoop();
int YLdBData();
int ExYOfsBS();
int DividePDiff();
int SetOscrO();
int ExDivPD();
int DrawSpriteObject();
int NoHFlip();
int SetHFAt();
int SoundEngine();
int SndOn();
int InPause();
int PTone1F();
int ContPau();
int PTone2F();
int PTRegC();
int DecPauC();
int SkipPIn();
int RunSoundSubroutines();
int SkipSoundSubroutines();
int NoIncDAC();
int StrWave();
int Dump_Squ1_Regs();
int PlaySqu1Sfx();
int SetFreq_Squ1();
int Dump_Freq_Regs();
int NoTone();
int Dump_Sq2_Regs();
int PlaySqu2Sfx();
int SetFreq_Squ2();
int SetFreq_Tri();
int PlayFlagpoleSlide();
int PlaySmallJump();
int PlayBigJump();
int JumpRegContents();
int ContinueSndJump();
int N2Prt();
int FPS2nd();
int DmpJpFPS();
int PlayFireballThrow();
int PlayBump();
int Fthrow();
int ContinueBumpThrow();
int DecJpFPS();
int Square1SfxHandler();
int CheckSfx1Buffer();
int ExS1H();
int PlaySwimStomp();
int ContinueSwimStomp();
int BranchToDecLength1();
int PlaySmackEnemy();
int ContinueSmackEnemy();
int SmSpc();
int SmTick();
int DecrementSfx1Length();
int StopSquare1Sfx();
int ExSfx1();
int PlayPipeDownInj();
int ContinuePipeDownInj();
int NoPDwnL();
int PlayCoinGrab();
int PlayTimerTick();
int CGrab_TTickRegL();
int ContinueCGrabTTick();
int N2Tone();
int PlayBlast();
int ContinueBlast();
int SBlasJ();
int PlayPowerUpGrab();
int ContinuePowerUpGrab();
int LoadSqu2Regs();
int DecrementSfx2Length();
int EmptySfx2Buffer();
int StopSquare2Sfx();
int ExSfx2();
int Square2SfxHandler();
int CheckSfx2Buffer();
int ExS2H();
int Cont_CGrab_TTick();
int JumpToDecLength2();
int PlayBowserFall();
int BlstSJp();
int ContinueBowserFall();
int PBFRegs();
int EL_LRegs();
int PlayExtraLife();
int ContinueExtraLife();
int DivLLoop();
int PlayGrowPowerUp();
int PlayGrowVine();
int GrowItemRegs();
int ContinueGrowItems();
int StopGrowItems();
int PlayBrickShatter();
int ContinueBrickShatter();
int PlayNoiseSfx();
int DecrementSfx3Length();
int ExSfx3();
int NoiseSfxHandler();
int CheckNoiseBuffer();
int ExNH();
int PlayBowserFlame();
int ContinueBowserFlame();
int ContinueMusic();
int MusicHandler();
int LoadEventMusic();
int NoStopSfx();
int LoadAreaMusic();
int NoStop1();
int GMLoopB();
int HandleAreaMusicLoopB();
int FindAreaMusicHeader();
int FindEventMusicHeader();
int LoadHeader();
int HandleSquare2Music();
int EndOfMusicData();
int NotTRO();
int MusicLoopBack();
int VictoryMLoopBack();
int Squ2LengthHandler();
int Squ2NoteHandler();
int Rest();
int SkipFqL1();
int MiscSqu2MusicTasks();
int NoDecEnv1();
int HandleSquare1Music();
int FetchSqu1MusicData();
int Squ1NoteHandler();
int SkipCtrlL();
int MiscSqu1MusicTasks();
int NoDecEnv2();
int DeathMAltReg();
int DoAltLoad();
int HandleTriangleMusic();
int TriNoteHandler();
int NotDOrD4();
int MediN();
int LongN();
int LoadTriCtrlReg();
int HandleNoiseMusic();
int FetchNoiseBeatData();
int NoiseBeatHandler();
int StrongBeat();
int LongBeat();
int SilentBeat();
int PlayBeat();
int ExitMusicHandler();
int AlternateLengthHandler();
int ProcessLengthData();
int LoadControlRegs();
int NotECstlM();
int WaterMus();
int AllMus();
int LoadEnvelopeData();
int LoadUsualEnvData();
int LoadWaterEventMusEnvData();
