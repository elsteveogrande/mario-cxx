#include "main.h"

#define PPU_CTRL_REG1 (Imm(0x2000))
#define PPU_CTRL_REG2 (Imm(0x2001))
#define PPU_STATUS (Imm(0x2002))
#define PPU_SPR_ADDR (Imm(0x2003))
#define PPU_SPR_DATA (Imm(0x2004))
#define PPU_SCROLL_REG (Imm(0x2005))
#define PPU_ADDRESS (Imm(0x2006))
#define PPU_DATA (Imm(0x2007))
#define SND_REGISTER (Imm(0x4000))
#define SND_SQUARE1_REG (Imm(0x4000))
#define SND_SQUARE2_REG (Imm(0x4004))
#define SND_TRIANGLE_REG (Imm(0x4008))
#define SND_NOISE_REG (Imm(0x400c))
#define SND_DELTA_REG (Imm(0x4010))
#define SND_MASTERCTRL_REG (Imm(0x4015))
#define SPR_DMA (Imm(0x4014))
#define JOYPAD_PORT (Imm(0x4016))
#define JOYPAD_PORT1 (Imm(0x4016))
#define JOYPAD_PORT2 (Imm(0x4017))
#define ObjectOffset (Imm(0x8))
#define FrameCounter (Imm(0x9))
#define SavedJoypadBits (Imm(0x6fc))
#define SavedJoypad1Bits (Imm(0x6fc))
#define SavedJoypad2Bits (Imm(0x6fd))
#define JoypadBitMask (Imm(0x74a))
#define JoypadOverride (Imm(0x758))
#define A_B_Buttons (Imm(0xa))
#define PreviousA_B_Buttons (Imm(0xd))
#define Up_Down_Buttons (Imm(0xb))
#define Left_Right_Buttons (Imm(0xc))
#define GameEngineSubroutine (Imm(0xe))
#define Mirror_PPU_CTRL_REG1 (Imm(0x778))
#define Mirror_PPU_CTRL_REG2 (Imm(0x779))
#define OperMode (Imm(0x770))
#define OperMode_Task (Imm(0x772))
#define ScreenRoutineTask (Imm(0x73c))
#define GamePauseStatus (Imm(0x776))
#define GamePauseTimer (Imm(0x777))
#define DemoAction (Imm(0x717))
#define DemoActionTimer (Imm(0x718))
#define TimerControl (Imm(0x747))
#define IntervalTimerControl (Imm(0x77f))
#define Timers (Imm(0x780))
#define SelectTimer (Imm(0x780))
#define PlayerAnimTimer (Imm(0x781))
#define JumpSwimTimer (Imm(0x782))
#define RunningTimer (Imm(0x783))
#define BlockBounceTimer (Imm(0x784))
#define SideCollisionTimer (Imm(0x785))
#define JumpspringTimer (Imm(0x786))
#define GameTimerCtrlTimer (Imm(0x787))
#define ClimbSideTimer (Imm(0x789))
#define EnemyFrameTimer (Imm(0x78a))
#define FrenzyEnemyTimer (Imm(0x78f))
#define BowserFireBreathTimer (Imm(0x790))
#define StompTimer (Imm(0x791))
#define AirBubbleTimer (Imm(0x792))
#define ScrollIntervalTimer (Imm(0x795))
#define EnemyIntervalTimer (Imm(0x796))
#define BrickCoinTimer (Imm(0x79d))
#define InjuryTimer (Imm(0x79e))
#define StarInvincibleTimer (Imm(0x79f))
#define ScreenTimer (Imm(0x7a0))
#define WorldEndTimer (Imm(0x7a1))
#define DemoTimer (Imm(0x7a2))
#define Sprite_Data (Imm(0x200))
#define Sprite_Y_Position (Imm(0x200))
#define Sprite_Tilenumber (Imm(0x201))
#define Sprite_Attributes (Imm(0x202))
#define Sprite_X_Position (Imm(0x203))
#define ScreenEdge_PageLoc (Imm(0x71a))
#define ScreenEdge_X_Pos (Imm(0x71c))
#define ScreenLeft_PageLoc (Imm(0x71a))
#define ScreenRight_PageLoc (Imm(0x71b))
#define ScreenLeft_X_Pos (Imm(0x71c))
#define ScreenRight_X_Pos (Imm(0x71d))
#define PlayerFacingDir (Imm(0x33))
#define DestinationPageLoc (Imm(0x34))
#define VictoryWalkControl (Imm(0x35))
#define ScrollFractional (Imm(0x768))
#define PrimaryMsgCounter (Imm(0x719))
#define SecondaryMsgCounter (Imm(0x749))
#define HorizontalScroll (Imm(0x73f))
#define VerticalScroll (Imm(0x740))
#define ScrollLock (Imm(0x723))
#define ScrollThirtyTwo (Imm(0x73d))
#define Player_X_Scroll (Imm(0x6ff))
#define Player_Pos_ForScroll (Imm(0x755))
#define ScrollAmount (Imm(0x775))
#define AreaData (Imm(0xe7))
#define AreaDataLow (Imm(0xe7))
#define AreaDataHigh (Imm(0xe8))
#define EnemyData (Imm(0xe9))
#define EnemyDataLow (Imm(0xe9))
#define EnemyDataHigh (Imm(0xea))
#define AreaParserTaskNum (Imm(0x71f))
#define ColumnSets (Imm(0x71e))
#define CurrentPageLoc (Imm(0x725))
#define CurrentColumnPos (Imm(0x726))
#define BackloadingFlag (Imm(0x728))
#define BehindAreaParserFlag (Imm(0x729))
#define AreaObjectPageLoc (Imm(0x72a))
#define AreaObjectPageSel (Imm(0x72b))
#define AreaDataOffset (Imm(0x72c))
#define AreaObjOffsetBuffer (Imm(0x72d))
#define AreaObjectLength (Imm(0x730))
#define StaircaseControl (Imm(0x734))
#define AreaObjectHeight (Imm(0x735))
#define MushroomLedgeHalfLen (Imm(0x736))
#define EnemyDataOffset (Imm(0x739))
#define EnemyObjectPageLoc (Imm(0x73a))
#define EnemyObjectPageSel (Imm(0x73b))
#define MetatileBuffer (Imm(0x6a1))
#define BlockBufferColumnPos (Imm(0x6a0))
#define CurrentNTAddr_Low (Imm(0x721))
#define CurrentNTAddr_High (Imm(0x720))
#define AttributeBuffer (Imm(0x3f9))
#define LoopCommand (Imm(0x745))
#define DisplayDigits (Imm(0x7d7))
#define TopScoreDisplay (Imm(0x7d7))
#define ScoreAndCoinDisplay (Imm(0x7dd))
#define PlayerScoreDisplay (Imm(0x7dd))
#define GameTimerDisplay (Imm(0x7f8))
#define DigitModifier (Imm(0x134))
#define VerticalFlipFlag (Imm(0x109))
#define FloateyNum_Control (Imm(0x110))
#define ShellChainCounter (Imm(0x125))
#define FloateyNum_Timer (Imm(0x12c))
#define FloateyNum_X_Pos (Imm(0x117))
#define FloateyNum_Y_Pos (Imm(0x11e))
#define FlagpoleFNum_Y_Pos (Imm(0x10d))
#define FlagpoleFNum_YMFDummy (Imm(0x10e))
#define FlagpoleScore (Imm(0x10f))
#define FlagpoleCollisionYPos (Imm(0x70f))
#define StompChainCounter (Imm(0x484))
#define VRAM_Buffer1_Offset (Imm(0x300))
#define VRAM_Buffer1 (Imm(0x301))
#define VRAM_Buffer2_Offset (Imm(0x340))
#define VRAM_Buffer2 (Imm(0x341))
#define VRAM_Buffer_AddrCtrl (Imm(0x773))
#define Sprite0HitDetectFlag (Imm(0x722))
#define DisableScreenFlag (Imm(0x774))
#define DisableIntermediate (Imm(0x769))
#define ColorRotateOffset (Imm(0x6d4))
#define TerrainControl (Imm(0x727))
#define AreaStyle (Imm(0x733))
#define ForegroundScenery (Imm(0x741))
#define BackgroundScenery (Imm(0x742))
#define CloudTypeOverride (Imm(0x743))
#define BackgroundColorCtrl (Imm(0x744))
#define AreaType (Imm(0x74e))
#define AreaAddrsLOffset (Imm(0x74f))
#define AreaPointer (Imm(0x750))
#define PlayerEntranceCtrl (Imm(0x710))
#define GameTimerSetting (Imm(0x715))
#define AltEntranceControl (Imm(0x752))
#define EntrancePage (Imm(0x751))
#define NumberOfPlayers (Imm(0x77a))
#define WarpZoneControl (Imm(0x6d6))
#define ChangeAreaTimer (Imm(0x6de))
#define MultiLoopCorrectCntr (Imm(0x6d9))
#define MultiLoopPassCntr (Imm(0x6da))
#define FetchNewGameTimerFlag (Imm(0x757))
#define GameTimerExpiredFlag (Imm(0x759))
#define PrimaryHardMode (Imm(0x76a))
#define SecondaryHardMode (Imm(0x6cc))
#define WorldSelectNumber (Imm(0x76b))
#define WorldSelectEnableFlag (Imm(0x7fc))
#define ContinueWorld (Imm(0x7fd))
#define CurrentPlayer (Imm(0x753))
#define PlayerSize (Imm(0x754))
#define PlayerStatus (Imm(0x756))
#define OnscreenPlayerInfo (Imm(0x75a))
#define NumberofLives (Imm(0x75a))
#define HalfwayPage (Imm(0x75b))
#define LevelNumber (Imm(0x75c))
#define Hidden1UpFlag (Imm(0x75d))
#define CoinTally (Imm(0x75e))
#define WorldNumber (Imm(0x75f))
#define AreaNumber (Imm(0x760))
#define CoinTallyFor1Ups (Imm(0x748))
#define OffscreenPlayerInfo (Imm(0x761))
#define OffScr_NumberofLives (Imm(0x761))
#define OffScr_HalfwayPage (Imm(0x762))
#define OffScr_LevelNumber (Imm(0x763))
#define OffScr_Hidden1UpFlag (Imm(0x764))
#define OffScr_CoinTally (Imm(0x765))
#define OffScr_WorldNumber (Imm(0x766))
#define OffScr_AreaNumber (Imm(0x767))
#define BalPlatformAlignment (Imm(0x3a0))
#define Platform_X_Scroll (Imm(0x3a1))
#define PlatformCollisionFlag (Imm(0x3a2))
#define YPlatformTopYPos (Imm(0x401))
#define YPlatformCenterYPos (Imm(0x58))
#define BrickCoinTimerFlag (Imm(0x6bc))
#define StarFlagTaskControl (Imm(0x746))
#define PseudoRandomBitReg (Imm(0x7a7))
#define WarmBootValidation (Imm(0x7ff))
#define SprShuffleAmtOffset (Imm(0x6e0))
#define SprShuffleAmt (Imm(0x6e1))
#define SprDataOffset (Imm(0x6e4))
#define Player_SprDataOffset (Imm(0x6e4))
#define Enemy_SprDataOffset (Imm(0x6e5))
#define Block_SprDataOffset (Imm(0x6ec))
#define Alt_SprDataOffset (Imm(0x6ec))
#define Bubble_SprDataOffset (Imm(0x6ee))
#define FBall_SprDataOffset (Imm(0x6f1))
#define Misc_SprDataOffset (Imm(0x6f3))
#define SprDataOffset_Ctrl (Imm(0x3ee))
#define Player_State (Imm(0x1d))
#define Enemy_State (Imm(0x1e))
#define Fireball_State (Imm(0x24))
#define Block_State (Imm(0x26))
#define Misc_State (Imm(0x2a))
#define Player_MovingDir (Imm(0x45))
#define Enemy_MovingDir (Imm(0x46))
#define SprObject_X_Speed (Imm(0x57))
#define Player_X_Speed (Imm(0x57))
#define Enemy_X_Speed (Imm(0x58))
#define Fireball_X_Speed (Imm(0x5e))
#define Block_X_Speed (Imm(0x60))
#define Misc_X_Speed (Imm(0x64))
#define Jumpspring_FixedYPos (Imm(0x58))
#define JumpspringAnimCtrl (Imm(0x70e))
#define JumpspringForce (Imm(0x6db))
#define SprObject_PageLoc (Imm(0x6d))
#define Player_PageLoc (Imm(0x6d))
#define Enemy_PageLoc (Imm(0x6e))
#define Fireball_PageLoc (Imm(0x74))
#define Block_PageLoc (Imm(0x76))
#define Misc_PageLoc (Imm(0x7a))
#define Bubble_PageLoc (Imm(0x83))
#define SprObject_X_Position (Imm(0x86))
#define Player_X_Position (Imm(0x86))
#define Enemy_X_Position (Imm(0x87))
#define Fireball_X_Position (Imm(0x8d))
#define Block_X_Position (Imm(0x8f))
#define Misc_X_Position (Imm(0x93))
#define Bubble_X_Position (Imm(0x9c))
#define SprObject_Y_Speed (Imm(0x9f))
#define Player_Y_Speed (Imm(0x9f))
#define Enemy_Y_Speed (Imm(0xa0))
#define Fireball_Y_Speed (Imm(0xa6))
#define Block_Y_Speed (Imm(0xa8))
#define Misc_Y_Speed (Imm(0xac))
#define SprObject_Y_HighPos (Imm(0xb5))
#define Player_Y_HighPos (Imm(0xb5))
#define Enemy_Y_HighPos (Imm(0xb6))
#define Fireball_Y_HighPos (Imm(0xbc))
#define Block_Y_HighPos (Imm(0xbe))
#define Misc_Y_HighPos (Imm(0xc2))
#define Bubble_Y_HighPos (Imm(0xcb))
#define SprObject_Y_Position (Imm(0xce))
#define Player_Y_Position (Imm(0xce))
#define Enemy_Y_Position (Imm(0xcf))
#define Fireball_Y_Position (Imm(0xd5))
#define Block_Y_Position (Imm(0xd7))
#define Misc_Y_Position (Imm(0xdb))
#define Bubble_Y_Position (Imm(0xe4))
#define SprObject_Rel_XPos (Imm(0x3ad))
#define Player_Rel_XPos (Imm(0x3ad))
#define Enemy_Rel_XPos (Imm(0x3ae))
#define Fireball_Rel_XPos (Imm(0x3af))
#define Bubble_Rel_XPos (Imm(0x3b0))
#define Block_Rel_XPos (Imm(0x3b1))
#define Misc_Rel_XPos (Imm(0x3b3))
#define SprObject_Rel_YPos (Imm(0x3b8))
#define Player_Rel_YPos (Imm(0x3b8))
#define Enemy_Rel_YPos (Imm(0x3b9))
#define Fireball_Rel_YPos (Imm(0x3ba))
#define Bubble_Rel_YPos (Imm(0x3bb))
#define Block_Rel_YPos (Imm(0x3bc))
#define Misc_Rel_YPos (Imm(0x3be))
#define SprObject_SprAttrib (Imm(0x3c4))
#define Player_SprAttrib (Imm(0x3c4))
#define Enemy_SprAttrib (Imm(0x3c5))
#define SprObject_X_MoveForce (Imm(0x400))
#define Enemy_X_MoveForce (Imm(0x401))
#define SprObject_YMF_Dummy (Imm(0x416))
#define Player_YMF_Dummy (Imm(0x416))
#define Enemy_YMF_Dummy (Imm(0x417))
#define Bubble_YMF_Dummy (Imm(0x42c))
#define SprObject_Y_MoveForce (Imm(0x433))
#define Player_Y_MoveForce (Imm(0x433))
#define Enemy_Y_MoveForce (Imm(0x434))
#define Block_Y_MoveForce (Imm(0x43c))
#define DisableCollisionDet (Imm(0x716))
#define Player_CollisionBits (Imm(0x490))
#define Enemy_CollisionBits (Imm(0x491))
#define SprObj_BoundBoxCtrl (Imm(0x499))
#define Player_BoundBoxCtrl (Imm(0x499))
#define Enemy_BoundBoxCtrl (Imm(0x49a))
#define Fireball_BoundBoxCtrl (Imm(0x4a0))
#define Misc_BoundBoxCtrl (Imm(0x4a2))
#define EnemyFrenzyBuffer (Imm(0x6cb))
#define EnemyFrenzyQueue (Imm(0x6cd))
#define Enemy_Flag (Imm(0xf))
#define Enemy_ID (Imm(0x16))
#define PlayerGfxOffset (Imm(0x6d5))
#define Player_XSpeedAbsolute (Imm(0x700))
#define FrictionAdderHigh (Imm(0x701))
#define FrictionAdderLow (Imm(0x702))
#define RunningSpeed (Imm(0x703))
#define SwimmingFlag (Imm(0x704))
#define Player_X_MoveForce (Imm(0x705))
#define DiffToHaltJump (Imm(0x706))
#define JumpOrigin_Y_HighPos (Imm(0x707))
#define JumpOrigin_Y_Position (Imm(0x708))
#define VerticalForce (Imm(0x709))
#define VerticalForceDown (Imm(0x70a))
#define PlayerChangeSizeFlag (Imm(0x70b))
#define PlayerAnimTimerSet (Imm(0x70c))
#define PlayerAnimCtrl (Imm(0x70d))
#define DeathMusicLoaded (Imm(0x712))
#define FlagpoleSoundQueue (Imm(0x713))
#define CrouchingFlag (Imm(0x714))
#define MaximumLeftSpeed (Imm(0x450))
#define MaximumRightSpeed (Imm(0x456))
#define SprObject_OffscrBits (Imm(0x3d0))
#define Player_OffscreenBits (Imm(0x3d0))
#define Enemy_OffscreenBits (Imm(0x3d1))
#define FBall_OffscreenBits (Imm(0x3d2))
#define Bubble_OffscreenBits (Imm(0x3d3))
#define Block_OffscreenBits (Imm(0x3d4))
#define Misc_OffscreenBits (Imm(0x3d6))
#define EnemyOffscrBitsMasked (Imm(0x3d8))
#define Cannon_Offset (Imm(0x46a))
#define Cannon_PageLoc (Imm(0x46b))
#define Cannon_X_Position (Imm(0x471))
#define Cannon_Y_Position (Imm(0x477))
#define Cannon_Timer (Imm(0x47d))
#define Whirlpool_Offset (Imm(0x46a))
#define Whirlpool_PageLoc (Imm(0x46b))
#define Whirlpool_LeftExtent (Imm(0x471))
#define Whirlpool_Length (Imm(0x477))
#define Whirlpool_Flag (Imm(0x47d))
#define VineFlagOffset (Imm(0x398))
#define VineHeight (Imm(0x399))
#define VineObjOffset (Imm(0x39a))
#define VineStart_Y_Position (Imm(0x39d))
#define Block_Orig_YPos (Imm(0x3e4))
#define Block_BBuf_Low (Imm(0x3e6))
#define Block_Metatile (Imm(0x3e8))
#define Block_PageLoc2 (Imm(0x3ea))
#define Block_RepFlag (Imm(0x3ec))
#define Block_ResidualCounter (Imm(0x3f0))
#define Block_Orig_XPos (Imm(0x3f1))
#define BoundingBox_UL_XPos (Imm(0x4ac))
#define BoundingBox_UL_YPos (Imm(0x4ad))
#define BoundingBox_DR_XPos (Imm(0x4ae))
#define BoundingBox_DR_YPos (Imm(0x4af))
#define BoundingBox_UL_Corner (Imm(0x4ac))
#define BoundingBox_LR_Corner (Imm(0x4ae))
#define EnemyBoundingBoxCoord (Imm(0x4b0))
#define PowerUpType (Imm(0x39))
#define FireballBouncingFlag (Imm(0x3a))
#define FireballCounter (Imm(0x6ce))
#define FireballThrowingTimer (Imm(0x711))
#define HammerEnemyOffset (Imm(0x6ae))
#define JumpCoinMiscOffset (Imm(0x6b7))
#define Block_Buffer_1 (Imm(0x500))
#define Block_Buffer_2 (Imm(0x5d0))
#define HammerThrowingTimer (Imm(0x3a2))
#define HammerBroJumpTimer (Imm(0x3c))
#define Misc_Collision_Flag (Imm(0x6be))
#define RedPTroopaOrigXPos (Imm(0x401))
#define RedPTroopaCenterYPos (Imm(0x58))
#define XMovePrimaryCounter (Imm(0xa0))
#define XMoveSecondaryCounter (Imm(0x58))
#define CheepCheepMoveMFlag (Imm(0x58))
#define CheepCheepOrigYPos (Imm(0x434))
#define BitMFilter (Imm(0x6dd))
#define LakituReappearTimer (Imm(0x6d1))
#define LakituMoveSpeed (Imm(0x58))
#define LakituMoveDirection (Imm(0xa0))
#define FirebarSpinState_Low (Imm(0x58))
#define FirebarSpinState_High (Imm(0xa0))
#define FirebarSpinSpeed (Imm(0x388))
#define FirebarSpinDirection (Imm(0x34))
#define DuplicateObj_Offset (Imm(0x6cf))
#define NumberofGroupEnemies (Imm(0x6d3))
#define BlooperMoveCounter (Imm(0xa0))
#define BlooperMoveSpeed (Imm(0x58))
#define BowserBodyControls (Imm(0x363))
#define BowserFeetCounter (Imm(0x364))
#define BowserMovementSpeed (Imm(0x365))
#define BowserOrigXPos (Imm(0x366))
#define BowserFlameTimerCtrl (Imm(0x367))
#define BowserFront_Offset (Imm(0x368))
#define BridgeCollapseOffset (Imm(0x369))
#define BowserGfxFlag (Imm(0x36a))
#define BowserHitPoints (Imm(0x483))
#define MaxRangeFromOrigin (Imm(0x6dc))
#define BowserFlamePRandomOfs (Imm(0x417))
#define PiranhaPlantUpYPos (Imm(0x417))
#define PiranhaPlantDownYPos (Imm(0x434))
#define PiranhaPlant_Y_Speed (Imm(0x58))
#define PiranhaPlant_MoveFlag (Imm(0xa0))
#define FireworksCounter (Imm(0x6d7))
#define ExplosionGfxCounter (Imm(0x58))
#define ExplosionTimerCounter (Imm(0xa0))
#define Squ2_NoteLenBuffer (Imm(0x7b3))
#define Squ2_NoteLenCounter (Imm(0x7b4))
#define Squ2_EnvelopeDataCtrl (Imm(0x7b5))
#define Squ1_NoteLenCounter (Imm(0x7b6))
#define Squ1_EnvelopeDataCtrl (Imm(0x7b7))
#define Tri_NoteLenBuffer (Imm(0x7b8))
#define Tri_NoteLenCounter (Imm(0x7b9))
#define Noise_BeatLenCounter (Imm(0x7ba))
#define Squ1_SfxLenCounter (Imm(0x7bb))
#define Squ2_SfxLenCounter (Imm(0x7bd))
#define Sfx_SecondaryCounter (Imm(0x7be))
#define Noise_SfxLenCounter (Imm(0x7bf))
#define PauseSoundQueue (Imm(0xfa))
#define Square1SoundQueue (Imm(0xff))
#define Square2SoundQueue (Imm(0xfe))
#define NoiseSoundQueue (Imm(0xfd))
#define AreaMusicQueue (Imm(0xfb))
#define EventMusicQueue (Imm(0xfc))
#define Square1SoundBuffer (Imm(0xf1))
#define Square2SoundBuffer (Imm(0xf2))
#define NoiseSoundBuffer (Imm(0xf3))
#define AreaMusicBuffer (Imm(0xf4))
#define EventMusicBuffer (Imm(0x7b1))
#define PauseSoundBuffer (Imm(0x7b2))
#define MusicData (Imm(0xf5))
#define MusicDataLow (Imm(0xf5))
#define MusicDataHigh (Imm(0xf6))
#define MusicOffset_Square2 (Imm(0xf7))
#define MusicOffset_Square1 (Imm(0xf8))
#define MusicOffset_Triangle (Imm(0xf9))
#define MusicOffset_Noise (Imm(0x7b0))
#define NoteLenLookupTblOfs (Imm(0xf0))
#define DAC_Counter (Imm(0x7c0))
#define NoiseDataLoopbackOfs (Imm(0x7c1))
#define NoteLengthTblAdder (Imm(0x7c4))
#define AreaMusicBuffer_Alt (Imm(0x7c5))
#define PauseModeFlag (Imm(0x7c6))
#define GroundMusicHeaderOfs (Imm(0x7c7))
#define AltRegContentFlag (Imm(0x7ca))
#define Sfx_SmallJump (Imm(0b10000000))
#define Sfx_Flagpole (Imm(0b1000000))
#define Sfx_Fireball (Imm(0b100000))
#define Sfx_PipeDown_Injury (Imm(0b10000))
#define Sfx_EnemySmack (Imm(0b1000))
#define Sfx_EnemyStomp (Imm(0b100))
#define Sfx_Bump (Imm(0b10))
#define Sfx_BigJump (Imm(0b1))
#define Sfx_BowserFall (Imm(0b10000000))
#define Sfx_ExtraLife (Imm(0b1000000))
#define Sfx_PowerUpGrab (Imm(0b100000))
#define Sfx_TimerTick (Imm(0b10000))
#define Sfx_Blast (Imm(0b1000))
#define Sfx_GrowVine (Imm(0b100))
#define Sfx_GrowPowerUp (Imm(0b10))
#define Sfx_CoinGrab (Imm(0b1))
#define Sfx_BowserFlame (Imm(0b10))
#define Sfx_BrickShatter (Imm(0b1))
#define Silence (Imm(0b10000000))
#define StarPowerMusic (Imm(0b1000000))
#define PipeIntroMusic (Imm(0b100000))
#define CloudMusic (Imm(0b10000))
#define CastleMusic (Imm(0b1000))
#define UndergroundMusic (Imm(0b100))
#define WaterMusic (Imm(0b10))
#define GroundMusic (Imm(0b1))
#define TimeRunningOutMusic (Imm(0b1000000))
#define EndOfLevelMusic (Imm(0b100000))
#define AltGameOverMusic (Imm(0b10000))
#define EndOfCastleMusic (Imm(0b1000))
#define VictoryMusic (Imm(0b100))
#define GameOverMusic (Imm(0b10))
#define DeathMusic (Imm(0b1))
#define GreenKoopa (Imm(0x0))
#define BuzzyBeetle (Imm(0x2))
#define RedKoopa (Imm(0x3))
#define HammerBro (Imm(0x5))
#define Goomba (Imm(0x6))
#define Bloober (Imm(0x7))
#define BulletBill_FrenzyVar (Imm(0x8))
#define GreyCheepCheep (Imm(0xa))
#define RedCheepCheep (Imm(0xb))
#define Podoboo (Imm(0xc))
#define PiranhaPlant (Imm(0xd))
#define GreenParatroopaJump (Imm(0xe))
#define RedParatroopa (Imm(0xf))
#define GreenParatroopaFly (Imm(0x10))
#define Lakitu (Imm(0x11))
#define Spiny (Imm(0x12))
#define FlyCheepCheepFrenzy (Imm(0x14))
#define FlyingCheepCheep (Imm(0x14))
#define BowserFlame (Imm(0x15))
#define Fireworks (Imm(0x16))
#define BBill_CCheep_Frenzy (Imm(0x17))
#define Stop_Frenzy (Imm(0x18))
#define Bowser (Imm(0x2d))
#define PowerUpObject (Imm(0x2e))
#define VineObject (Imm(0x2f))
#define FlagpoleFlagObject (Imm(0x30))
#define StarFlagObject (Imm(0x31))
#define JumpspringObject (Imm(0x32))
#define BulletBill_CannonVar (Imm(0x33))
#define RetainerObject (Imm(0x35))
#define TallEnemy (Imm(0x9))
#define World1 (Imm(0))
#define World2 (Imm(1))
#define World3 (Imm(2))
#define World4 (Imm(3))
#define World5 (Imm(4))
#define World6 (Imm(5))
#define World7 (Imm(6))
#define World8 (Imm(7))
#define Level1 (Imm(0))
#define Level2 (Imm(1))
#define Level3 (Imm(2))
#define Level4 (Imm(3))
#define WarmBootOffset (LO8(Imm(0x7d6)))
#define ColdBootOffset (LO8(Imm(0x7fe)))
#define TitleScreenDataOffset (Imm(0x1ec0))
#define SoundMemory (Imm(0x7b0))
#define SwimTileRepOffset ((((PlayerGraphicsTable)) + (Imm(0x9e))))
#define MusicHeaderOffsetData ((((MusicHeaderData)) - (Imm(1))))
#define MHD ((MusicHeaderData))
#define A_Button (Imm(0b10000000))
#define B_Button (Imm(0b1000000))
#define Select_Button (Imm(0b100000))
#define Start_Button (Imm(0b10000))
#define Up_Dir (Imm(0b1000))
#define Down_Dir (Imm(0b100))
#define Left_Dir (Imm(0b10))
#define Right_Dir (Imm(0b1))
#define TitleScreenModeValue (Imm(0))
#define GameModeValue (Imm(1))
#define VictoryModeValue (Imm(2))
#define GameOverModeValue (Imm(3))
struct Data {
    byte const VRAM_AddrTable_Low[19] = {LO8((VRAM_Buffer1)), LO8((WaterPaletteData)), LO8((GroundPaletteData)), LO8((UndergroundPaletteData)), LO8((CastlePaletteData)), LO8((VRAM_Buffer1_Offset)), LO8((VRAM_Buffer2)), LO8((VRAM_Buffer2)), LO8((BowserPaletteData)), LO8((DaySnowPaletteData)), LO8((NightSnowPaletteData)), LO8((MushroomPaletteData)), LO8((MarioThanksMessage)), LO8((LuigiThanksMessage)), LO8((MushroomRetainerSaved)), LO8((PrincessSaved1)), LO8((PrincessSaved2)), LO8((WorldSelectMessage1)), LO8((WorldSelectMessage2))};
    byte const VRAM_AddrTable_High[19] = {HI8((VRAM_Buffer1)), HI8((WaterPaletteData)), HI8((GroundPaletteData)), HI8((UndergroundPaletteData)), HI8((CastlePaletteData)), HI8((VRAM_Buffer1_Offset)), HI8((VRAM_Buffer2)), HI8((VRAM_Buffer2)), HI8((BowserPaletteData)), HI8((DaySnowPaletteData)), HI8((NightSnowPaletteData)), HI8((MushroomPaletteData)), HI8((MarioThanksMessage)), HI8((LuigiThanksMessage)), HI8((MushroomRetainerSaved)), HI8((PrincessSaved1)), HI8((PrincessSaved2)), HI8((WorldSelectMessage1)), HI8((WorldSelectMessage2))};
    byte const VRAM_Buffer_Offset[2] = {LO8((VRAM_Buffer1_Offset)), LO8((VRAM_Buffer2_Offset))};
    byte const WSelectBufferTemplate[6] = {Imm(0x4), Imm(0x20), Imm(0x73), Imm(0x1), Imm(0x0), Imm(0x0)};
    byte const MushroomIconData[8] = {Imm(0x7), Imm(0x22), Imm(0x49), Imm(0x83), Imm(0xce), Imm(0x24), Imm(0x24), Imm(0x0)};
    byte const DemoActionData[21] = {Imm(0x1), Imm(0x80), Imm(0x2), Imm(0x81), Imm(0x41), Imm(0x80), Imm(0x1), Imm(0x42), Imm(0xc2), Imm(0x2), Imm(0x80), Imm(0x41), Imm(0xc1), Imm(0x41), Imm(0xc1), Imm(0x1), Imm(0xc1), Imm(0x1), Imm(0x2), Imm(0x80), Imm(0x0)};
    byte const DemoTimingData[22] = {Imm(0x9b), Imm(0x10), Imm(0x18), Imm(0x5), Imm(0x2c), Imm(0x20), Imm(0x24), Imm(0x15), Imm(0x5a), Imm(0x10), Imm(0x20), Imm(0x28), Imm(0x30), Imm(0x20), Imm(0x10), Imm(0x80), Imm(0x20), Imm(0x30), Imm(0x30), Imm(0x1), Imm(0xff), Imm(0x0)};
    byte const FloateyNumTileData[24] = {Imm(0xff), Imm(0xff), Imm(0xf6), Imm(0xfb), Imm(0xf7), Imm(0xfb), Imm(0xf8), Imm(0xfb), Imm(0xf9), Imm(0xfb), Imm(0xfa), Imm(0xfb), Imm(0xf6), Imm(0x50), Imm(0xf7), Imm(0x50), Imm(0xf8), Imm(0x50), Imm(0xf9), Imm(0x50), Imm(0xfa), Imm(0x50), Imm(0xfd), Imm(0xfe)};
    byte const ScoreUpdateData[12] = {Imm(0xff), Imm(0x41), Imm(0x42), Imm(0x44), Imm(0x45), Imm(0x48), Imm(0x31), Imm(0x32), Imm(0x34), Imm(0x35), Imm(0x38), Imm(0x0)};
    byte const AreaPalette[4] = {Imm(0x1), Imm(0x2), Imm(0x3), Imm(0x4)};
    byte const BGColorCtrl_Addr[4] = {Imm(0x0), Imm(0x9), Imm(0xa), Imm(0x4)};
    byte const BackgroundColors[8] = {Imm(0x22), Imm(0x22), Imm(0xf), Imm(0xf), Imm(0xf), Imm(0x22), Imm(0xf), Imm(0xf)};
    byte const PlayerColors[12] = {Imm(0x22), Imm(0x16), Imm(0x27), Imm(0x18), Imm(0x22), Imm(0x30), Imm(0x27), Imm(0x19), Imm(0x22), Imm(0x37), Imm(0x27), Imm(0x16)};
    byte const TopStatusBarLine[39] = {Imm(0x20), Imm(0x43), Imm(0x5), Imm(0x16), Imm(0xa), Imm(0x1b), Imm(0x12), Imm(0x18), Imm(0x20), Imm(0x52), Imm(0xb), Imm(0x20), Imm(0x18), Imm(0x1b), Imm(0x15), Imm(0xd), Imm(0x24), Imm(0x24), Imm(0x1d), Imm(0x12), Imm(0x16), Imm(0xe), Imm(0x20), Imm(0x68), Imm(0x5), Imm(0x0), Imm(0x24), Imm(0x24), Imm(0x2e), Imm(0x29), Imm(0x23), Imm(0xc0), Imm(0x7f), Imm(0xaa), Imm(0x23), Imm(0xc2), Imm(0x1), Imm(0xea), Imm(0xff)};
    byte const WorldLivesDisplay[31] = {Imm(0x21), Imm(0xcd), Imm(0x7), Imm(0x24), Imm(0x24), Imm(0x29), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x21), Imm(0x4b), Imm(0x9), Imm(0x20), Imm(0x18), Imm(0x1b), Imm(0x15), Imm(0xd), Imm(0x24), Imm(0x24), Imm(0x28), Imm(0x24), Imm(0x22), Imm(0xc), Imm(0x47), Imm(0x24), Imm(0x23), Imm(0xdc), Imm(0x1), Imm(0xba), Imm(0xff)};
    byte const TwoPlayerTimeUp[8] = {Imm(0x21), Imm(0xcd), Imm(0x5), Imm(0x16), Imm(0xa), Imm(0x1b), Imm(0x12), Imm(0x18)};
    byte const OnePlayerTimeUp[11] = {Imm(0x22), Imm(0xc), Imm(0x7), Imm(0x1d), Imm(0x12), Imm(0x16), Imm(0xe), Imm(0x24), Imm(0x1e), Imm(0x19), Imm(0xff)};
    byte const TwoPlayerGameOver[8] = {Imm(0x21), Imm(0xcd), Imm(0x5), Imm(0x16), Imm(0xa), Imm(0x1b), Imm(0x12), Imm(0x18)};
    byte const OnePlayerGameOver[13] = {Imm(0x22), Imm(0xb), Imm(0x9), Imm(0x10), Imm(0xa), Imm(0x16), Imm(0xe), Imm(0x24), Imm(0x18), Imm(0x1f), Imm(0xe), Imm(0x1b), Imm(0xff)};
    byte const WarpZoneWelcome[45] = {Imm(0x25), Imm(0x84), Imm(0x15), Imm(0x20), Imm(0xe), Imm(0x15), Imm(0xc), Imm(0x18), Imm(0x16), Imm(0xe), Imm(0x24), Imm(0x1d), Imm(0x18), Imm(0x24), Imm(0x20), Imm(0xa), Imm(0x1b), Imm(0x19), Imm(0x24), Imm(0x23), Imm(0x18), Imm(0x17), Imm(0xe), Imm(0x2b), Imm(0x26), Imm(0x25), Imm(0x1), Imm(0x24), Imm(0x26), Imm(0x2d), Imm(0x1), Imm(0x24), Imm(0x26), Imm(0x35), Imm(0x1), Imm(0x24), Imm(0x27), Imm(0xd9), Imm(0x46), Imm(0xaa), Imm(0x27), Imm(0xe1), Imm(0x45), Imm(0xaa), Imm(0xff)};
    byte const LuigiName[5] = {Imm(0x15), Imm(0x1e), Imm(0x12), Imm(0x10), Imm(0x12)};
    byte const WarpZoneNumbers[12] = {Imm(0x4), Imm(0x3), Imm(0x2), Imm(0x0), Imm(0x24), Imm(0x5), Imm(0x24), Imm(0x0), Imm(0x8), Imm(0x7), Imm(0x6), Imm(0x0)};
    byte const GameTextOffsets[10] = {(((TopStatusBarLine)) - ((GameText))), (((TopStatusBarLine)) - ((GameText))), (((WorldLivesDisplay)) - ((GameText))), (((WorldLivesDisplay)) - ((GameText))), (((TwoPlayerTimeUp)) - ((GameText))), (((OnePlayerTimeUp)) - ((GameText))), (((TwoPlayerGameOver)) - ((GameText))), (((OnePlayerGameOver)) - ((GameText))), (((WarpZoneWelcome)) - ((GameText))), (((WarpZoneWelcome)) - ((GameText)))};
    byte const ColorRotatePalette[6] = {Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x17), Imm(0x7), Imm(0x17)};
    byte const BlankPalette[8] = {Imm(0x3f), Imm(0xc), Imm(0x4), Imm(0xff), Imm(0xff), Imm(0xff), Imm(0xff), Imm(0x0)};
    byte const Palette3Data[16] = {Imm(0xf), Imm(0x7), Imm(0x12), Imm(0xf), Imm(0xf), Imm(0x7), Imm(0x17), Imm(0xf), Imm(0xf), Imm(0x7), Imm(0x17), Imm(0x1c), Imm(0xf), Imm(0x7), Imm(0x17), Imm(0x0)};
    byte const BlockGfxData[20] = {Imm(0x45), Imm(0x45), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x57), Imm(0x58), Imm(0x59), Imm(0x5a), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26)};
    byte const MetatileGraphics_Low[4] = {LO8((Palette0_MTiles)), LO8((Palette1_MTiles)), LO8((Palette2_MTiles)), LO8((Palette3_MTiles))};
    byte const MetatileGraphics_High[4] = {HI8((Palette0_MTiles)), HI8((Palette1_MTiles)), HI8((Palette2_MTiles)), HI8((Palette3_MTiles))};
    byte const Palette0_MTiles[156] = {Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x35), Imm(0x36), Imm(0x25), Imm(0x37), Imm(0x25), Imm(0x24), Imm(0x38), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x30), Imm(0x30), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x34), Imm(0x26), Imm(0x24), Imm(0x31), Imm(0x24), Imm(0x32), Imm(0x33), Imm(0x26), Imm(0x24), Imm(0x33), Imm(0x34), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x24), Imm(0xc0), Imm(0x24), Imm(0xc0), Imm(0x24), Imm(0x7f), Imm(0x7f), Imm(0x24), Imm(0xb8), Imm(0xba), Imm(0xb9), Imm(0xbb), Imm(0xb8), Imm(0xbc), Imm(0xb9), Imm(0xbd), Imm(0xba), Imm(0xbc), Imm(0xbb), Imm(0xbd), Imm(0x60), Imm(0x64), Imm(0x61), Imm(0x65), Imm(0x62), Imm(0x66), Imm(0x63), Imm(0x67), Imm(0x60), Imm(0x64), Imm(0x61), Imm(0x65), Imm(0x62), Imm(0x66), Imm(0x63), Imm(0x67), Imm(0x68), Imm(0x68), Imm(0x69), Imm(0x69), Imm(0x26), Imm(0x26), Imm(0x6a), Imm(0x6a), Imm(0x4b), Imm(0x4c), Imm(0x4d), Imm(0x4e), Imm(0x4d), Imm(0x4f), Imm(0x4d), Imm(0x4f), Imm(0x4d), Imm(0x4e), Imm(0x50), Imm(0x51), Imm(0x6b), Imm(0x70), Imm(0x2c), Imm(0x2d), Imm(0x6c), Imm(0x71), Imm(0x6d), Imm(0x72), Imm(0x6e), Imm(0x73), Imm(0x6f), Imm(0x74), Imm(0x86), Imm(0x8a), Imm(0x87), Imm(0x8b), Imm(0x88), Imm(0x8c), Imm(0x88), Imm(0x8c), Imm(0x89), Imm(0x8d), Imm(0x69), Imm(0x69), Imm(0x8e), Imm(0x91), Imm(0x8f), Imm(0x92), Imm(0x26), Imm(0x93), Imm(0x26), Imm(0x93), Imm(0x90), Imm(0x94), Imm(0x69), Imm(0x69), Imm(0xa4), Imm(0xe9), Imm(0xea), Imm(0xeb), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x2f), Imm(0x24), Imm(0x3d), Imm(0xa2), Imm(0xa2), Imm(0xa3), Imm(0xa3), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24)};
    byte const Palette1_MTiles[184] = {Imm(0xa2), Imm(0xa2), Imm(0xa3), Imm(0xa3), Imm(0x99), Imm(0x24), Imm(0x99), Imm(0x24), Imm(0x24), Imm(0xa2), Imm(0x3e), Imm(0x3f), Imm(0x5b), Imm(0x5c), Imm(0x24), Imm(0xa3), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x9d), Imm(0x47), Imm(0x9e), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x27), Imm(0x27), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x27), Imm(0x27), Imm(0x47), Imm(0x47), Imm(0xa9), Imm(0x47), Imm(0xaa), Imm(0x47), Imm(0x9b), Imm(0x27), Imm(0x9c), Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x27), Imm(0x52), Imm(0x52), Imm(0x52), Imm(0x52), Imm(0x80), Imm(0xa0), Imm(0x81), Imm(0xa1), Imm(0xbe), Imm(0xbe), Imm(0xbf), Imm(0xbf), Imm(0x75), Imm(0xba), Imm(0x76), Imm(0xbb), Imm(0xba), Imm(0xba), Imm(0xbb), Imm(0xbb), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0xb4), Imm(0xb6), Imm(0xb5), Imm(0xb7), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x45), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0xab), Imm(0xac), Imm(0xad), Imm(0xae), Imm(0x5d), Imm(0x5e), Imm(0x5d), Imm(0x5e), Imm(0xc1), Imm(0x24), Imm(0xc1), Imm(0x24), Imm(0xc6), Imm(0xc8), Imm(0xc7), Imm(0xc9), Imm(0xca), Imm(0xcc), Imm(0xcb), Imm(0xcd), Imm(0x2a), Imm(0x2a), Imm(0x40), Imm(0x40), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x47), Imm(0x24), Imm(0x47), Imm(0x82), Imm(0x83), Imm(0x84), Imm(0x85), Imm(0x24), Imm(0x47), Imm(0x24), Imm(0x47), Imm(0x86), Imm(0x8a), Imm(0x87), Imm(0x8b), Imm(0x8e), Imm(0x91), Imm(0x8f), Imm(0x92), Imm(0x24), Imm(0x2f), Imm(0x24), Imm(0x3d)};
    byte const Palette2_MTiles[40] = {Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x35), Imm(0x36), Imm(0x25), Imm(0x37), Imm(0x25), Imm(0x24), Imm(0x38), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x39), Imm(0x24), Imm(0x3a), Imm(0x24), Imm(0x3b), Imm(0x24), Imm(0x3c), Imm(0x24), Imm(0x24), Imm(0x24), Imm(0x41), Imm(0x26), Imm(0x41), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0x26), Imm(0xb0), Imm(0xb1), Imm(0xb2), Imm(0xb3), Imm(0x77), Imm(0x79), Imm(0x77), Imm(0x79)};
    byte const Palette3_MTiles[24] = {Imm(0x53), Imm(0x55), Imm(0x54), Imm(0x56), Imm(0x53), Imm(0x55), Imm(0x54), Imm(0x56), Imm(0xa5), Imm(0xa7), Imm(0xa6), Imm(0xa8), Imm(0xc2), Imm(0xc4), Imm(0xc3), Imm(0xc5), Imm(0x57), Imm(0x59), Imm(0x58), Imm(0x5a), Imm(0x7b), Imm(0x7d), Imm(0x7c), Imm(0x7e)};
    byte const WaterPaletteData[36] = {Imm(0x3f), Imm(0x0), Imm(0x20), Imm(0xf), Imm(0x15), Imm(0x12), Imm(0x25), Imm(0xf), Imm(0x3a), Imm(0x1a), Imm(0xf), Imm(0xf), Imm(0x30), Imm(0x12), Imm(0xf), Imm(0xf), Imm(0x27), Imm(0x12), Imm(0xf), Imm(0x22), Imm(0x16), Imm(0x27), Imm(0x18), Imm(0xf), Imm(0x10), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0x16), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0xf), Imm(0x30), Imm(0x10), Imm(0x0)};
    byte const GroundPaletteData[36] = {Imm(0x3f), Imm(0x0), Imm(0x20), Imm(0xf), Imm(0x29), Imm(0x1a), Imm(0xf), Imm(0xf), Imm(0x36), Imm(0x17), Imm(0xf), Imm(0xf), Imm(0x30), Imm(0x21), Imm(0xf), Imm(0xf), Imm(0x27), Imm(0x17), Imm(0xf), Imm(0xf), Imm(0x16), Imm(0x27), Imm(0x18), Imm(0xf), Imm(0x1a), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0x16), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0xf), Imm(0x36), Imm(0x17), Imm(0x0)};
    byte const UndergroundPaletteData[36] = {Imm(0x3f), Imm(0x0), Imm(0x20), Imm(0xf), Imm(0x29), Imm(0x1a), Imm(0x9), Imm(0xf), Imm(0x3c), Imm(0x1c), Imm(0xf), Imm(0xf), Imm(0x30), Imm(0x21), Imm(0x1c), Imm(0xf), Imm(0x27), Imm(0x17), Imm(0x1c), Imm(0xf), Imm(0x16), Imm(0x27), Imm(0x18), Imm(0xf), Imm(0x1c), Imm(0x36), Imm(0x17), Imm(0xf), Imm(0x16), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0xc), Imm(0x3c), Imm(0x1c), Imm(0x0)};
    byte const CastlePaletteData[36] = {Imm(0x3f), Imm(0x0), Imm(0x20), Imm(0xf), Imm(0x30), Imm(0x10), Imm(0x0), Imm(0xf), Imm(0x30), Imm(0x10), Imm(0x0), Imm(0xf), Imm(0x30), Imm(0x16), Imm(0x0), Imm(0xf), Imm(0x27), Imm(0x17), Imm(0x0), Imm(0xf), Imm(0x16), Imm(0x27), Imm(0x18), Imm(0xf), Imm(0x1c), Imm(0x36), Imm(0x17), Imm(0xf), Imm(0x16), Imm(0x30), Imm(0x27), Imm(0xf), Imm(0x0), Imm(0x30), Imm(0x10), Imm(0x0)};
    byte const DaySnowPaletteData[8] = {Imm(0x3f), Imm(0x0), Imm(0x4), Imm(0x22), Imm(0x30), Imm(0x0), Imm(0x10), Imm(0x0)};
    byte const NightSnowPaletteData[8] = {Imm(0x3f), Imm(0x0), Imm(0x4), Imm(0xf), Imm(0x30), Imm(0x0), Imm(0x10), Imm(0x0)};
    byte const MushroomPaletteData[8] = {Imm(0x3f), Imm(0x0), Imm(0x4), Imm(0x22), Imm(0x27), Imm(0x16), Imm(0xf), Imm(0x0)};
    byte const BowserPaletteData[8] = {Imm(0x3f), Imm(0x14), Imm(0x4), Imm(0xf), Imm(0x1a), Imm(0x30), Imm(0x27), Imm(0x0)};
    byte const MarioThanksMessage[20] = {Imm(0x25), Imm(0x48), Imm(0x10), Imm(0x1d), Imm(0x11), Imm(0xa), Imm(0x17), Imm(0x14), Imm(0x24), Imm(0x22), Imm(0x18), Imm(0x1e), Imm(0x24), Imm(0x16), Imm(0xa), Imm(0x1b), Imm(0x12), Imm(0x18), Imm(0x2b), Imm(0x0)};
    byte const LuigiThanksMessage[20] = {Imm(0x25), Imm(0x48), Imm(0x10), Imm(0x1d), Imm(0x11), Imm(0xa), Imm(0x17), Imm(0x14), Imm(0x24), Imm(0x22), Imm(0x18), Imm(0x1e), Imm(0x24), Imm(0x15), Imm(0x1e), Imm(0x12), Imm(0x10), Imm(0x12), Imm(0x2b), Imm(0x0)};
    byte const MushroomRetainerSaved[44] = {Imm(0x25), Imm(0xc5), Imm(0x16), Imm(0xb), Imm(0x1e), Imm(0x1d), Imm(0x24), Imm(0x18), Imm(0x1e), Imm(0x1b), Imm(0x24), Imm(0x19), Imm(0x1b), Imm(0x12), Imm(0x17), Imm(0xc), Imm(0xe), Imm(0x1c), Imm(0x1c), Imm(0x24), Imm(0x12), Imm(0x1c), Imm(0x24), Imm(0x12), Imm(0x17), Imm(0x26), Imm(0x5), Imm(0xf), Imm(0xa), Imm(0x17), Imm(0x18), Imm(0x1d), Imm(0x11), Imm(0xe), Imm(0x1b), Imm(0x24), Imm(0xc), Imm(0xa), Imm(0x1c), Imm(0x1d), Imm(0x15), Imm(0xe), Imm(0x2b), Imm(0x0)};
    byte const PrincessSaved1[23] = {Imm(0x25), Imm(0xa7), Imm(0x13), Imm(0x22), Imm(0x18), Imm(0x1e), Imm(0x1b), Imm(0x24), Imm(0x1a), Imm(0x1e), Imm(0xe), Imm(0x1c), Imm(0x1d), Imm(0x24), Imm(0x12), Imm(0x1c), Imm(0x24), Imm(0x18), Imm(0x1f), Imm(0xe), Imm(0x1b), Imm(0xaf), Imm(0x0)};
    byte const PrincessSaved2[31] = {Imm(0x25), Imm(0xe3), Imm(0x1b), Imm(0x20), Imm(0xe), Imm(0x24), Imm(0x19), Imm(0x1b), Imm(0xe), Imm(0x1c), Imm(0xe), Imm(0x17), Imm(0x1d), Imm(0x24), Imm(0x22), Imm(0x18), Imm(0x1e), Imm(0x24), Imm(0xa), Imm(0x24), Imm(0x17), Imm(0xe), Imm(0x20), Imm(0x24), Imm(0x1a), Imm(0x1e), Imm(0xe), Imm(0x1c), Imm(0x1d), Imm(0xaf), Imm(0x0)};
    byte const WorldSelectMessage1[17] = {Imm(0x26), Imm(0x4a), Imm(0xd), Imm(0x19), Imm(0x1e), Imm(0x1c), Imm(0x11), Imm(0x24), Imm(0xb), Imm(0x1e), Imm(0x1d), Imm(0x1d), Imm(0x18), Imm(0x17), Imm(0x24), Imm(0xb), Imm(0x0)};
    byte const WorldSelectMessage2[21] = {Imm(0x26), Imm(0x88), Imm(0x11), Imm(0x1d), Imm(0x18), Imm(0x24), Imm(0x1c), Imm(0xe), Imm(0x15), Imm(0xe), Imm(0xc), Imm(0x1d), Imm(0x24), Imm(0xa), Imm(0x24), Imm(0x20), Imm(0x18), Imm(0x1b), Imm(0x15), Imm(0xd), Imm(0x0)};
    byte const StatusBarData[12] = {Imm(0xf0), Imm(0x6), Imm(0x62), Imm(0x6), Imm(0x62), Imm(0x6), Imm(0x6d), Imm(0x2), Imm(0x6d), Imm(0x2), Imm(0x7a), Imm(0x3)};
    byte const StatusBarOffset[6] = {Imm(0x6), Imm(0xc), Imm(0x12), Imm(0x18), Imm(0x1e), Imm(0x24)};
    byte const DefaultSprOffsets[15] = {Imm(0x4), Imm(0x30), Imm(0x48), Imm(0x60), Imm(0x78), Imm(0x90), Imm(0xa8), Imm(0xc0), Imm(0xd8), Imm(0xe8), Imm(0x24), Imm(0xf8), Imm(0xfc), Imm(0x28), Imm(0x2c)};
    byte const Sprite0Data[4] = {Imm(0x18), Imm(0xff), Imm(0x23), Imm(0x58)};
    byte const MusicSelectData[6] = {(WaterMusic), (GroundMusic), (UndergroundMusic), (CastleMusic), (CloudMusic), (PipeIntroMusic)};
    byte const PlayerStarting_X_Pos[4] = {Imm(0x28), Imm(0x18), Imm(0x38), Imm(0x28)};
    byte const AltYPosOffset[2] = {Imm(0x8), Imm(0x0)};
    byte const PlayerStarting_Y_Pos[9] = {Imm(0x0), Imm(0x20), Imm(0xb0), Imm(0x50), Imm(0x0), Imm(0x0), Imm(0xb0), Imm(0xb0), Imm(0xf0)};
    byte const PlayerBGPriorityData[8] = {Imm(0x0), Imm(0x20), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0)};
    byte const GameTimerData[4] = {Imm(0x20), Imm(0x4), Imm(0x3), Imm(0x2)};
    byte const HalfwayPageNybbles[16] = {Imm(0x56), Imm(0x40), Imm(0x65), Imm(0x70), Imm(0x66), Imm(0x40), Imm(0x66), Imm(0x40), Imm(0x66), Imm(0x40), Imm(0x66), Imm(0x60), Imm(0x65), Imm(0x70), Imm(0x0), Imm(0x0)};
    byte const BSceneDataOffsets[3] = {Imm(0x0), Imm(0x30), Imm(0x60)};
    byte const BackSceneryData[144] = {Imm(0x93), Imm(0x0), Imm(0x0), Imm(0x11), Imm(0x12), Imm(0x12), Imm(0x13), Imm(0x0), Imm(0x0), Imm(0x51), Imm(0x52), Imm(0x53), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x3), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x91), Imm(0x92), Imm(0x93), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x51), Imm(0x52), Imm(0x53), Imm(0x41), Imm(0x42), Imm(0x43), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x91), Imm(0x92), Imm(0x97), Imm(0x87), Imm(0x88), Imm(0x89), Imm(0x99), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x11), Imm(0x12), Imm(0x13), Imm(0xa4), Imm(0xa5), Imm(0xa5), Imm(0xa5), Imm(0xa6), Imm(0x97), Imm(0x98), Imm(0x99), Imm(0x1), Imm(0x2), Imm(0x3), Imm(0x0), Imm(0xa4), Imm(0xa5), Imm(0xa6), Imm(0x0), Imm(0x11), Imm(0x12), Imm(0x12), Imm(0x12), Imm(0x13), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x3), Imm(0x0), Imm(0xa4), Imm(0xa5), Imm(0xa5), Imm(0xa6), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x11), Imm(0x12), Imm(0x12), Imm(0x13), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x9c), Imm(0x0), Imm(0x8b), Imm(0xaa), Imm(0xaa), Imm(0xaa), Imm(0xaa), Imm(0x11), Imm(0x12), Imm(0x13), Imm(0x8b), Imm(0x0), Imm(0x9c), Imm(0x9c), Imm(0x0), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x3), Imm(0x11), Imm(0x12), Imm(0x12), Imm(0x13), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0xaa), Imm(0xaa), Imm(0x9c), Imm(0xaa), Imm(0x0), Imm(0x8b), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x3)};
    byte const BackSceneryMetatiles[36] = {Imm(0x80), Imm(0x83), Imm(0x0), Imm(0x81), Imm(0x84), Imm(0x0), Imm(0x82), Imm(0x85), Imm(0x0), Imm(0x2), Imm(0x0), Imm(0x0), Imm(0x3), Imm(0x0), Imm(0x0), Imm(0x4), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x5), Imm(0x6), Imm(0x7), Imm(0x6), Imm(0xa), Imm(0x0), Imm(0x8), Imm(0x9), Imm(0x4d), Imm(0x0), Imm(0x0), Imm(0xd), Imm(0xf), Imm(0x4e), Imm(0xe), Imm(0x4e), Imm(0x4e)};
    byte const FSceneDataOffsets[3] = {Imm(0x0), Imm(0xd), Imm(0x1a)};
    byte const ForeSceneryData[39] = {Imm(0x86), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x87), Imm(0x69), Imm(0x69), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x45), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x86), Imm(0x87)};
    byte const TerrainMetatiles[4] = {Imm(0x69), Imm(0x54), Imm(0x52), Imm(0x62)};
    byte const TerrainRenderBits[32] = {Imm(0b0), Imm(0b0), Imm(0b0), Imm(0b11000), Imm(0b1), Imm(0b11000), Imm(0b111), Imm(0b11000), Imm(0b1111), Imm(0b11000), Imm(0b11111111), Imm(0b11000), Imm(0b1), Imm(0b11111), Imm(0b111), Imm(0b11111), Imm(0b1111), Imm(0b11111), Imm(0b10000001), Imm(0b11111), Imm(0b1), Imm(0b0), Imm(0b10001111), Imm(0b11111), Imm(0b11110001), Imm(0b11111), Imm(0b11111001), Imm(0b11000), Imm(0b11110001), Imm(0b11000), Imm(0b11111111), Imm(0b11111)};
    byte const BlockBuffLowBounds[4] = {Imm(0x10), Imm(0x51), Imm(0x88), Imm(0xc0)};
    byte const FrenzyIDData[3] = {(FlyCheepCheepFrenzy), (BBill_CCheep_Frenzy), (Stop_Frenzy)};
    byte const PulleyRopeMetatiles[3] = {Imm(0x42), Imm(0x41), Imm(0x43)};
    byte const CastleMetatiles[55] = {Imm(0x0), Imm(0x45), Imm(0x45), Imm(0x45), Imm(0x0), Imm(0x0), Imm(0x48), Imm(0x47), Imm(0x46), Imm(0x0), Imm(0x45), Imm(0x49), Imm(0x49), Imm(0x49), Imm(0x45), Imm(0x47), Imm(0x47), Imm(0x4a), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x4b), Imm(0x47), Imm(0x47), Imm(0x49), Imm(0x49), Imm(0x49), Imm(0x49), Imm(0x49), Imm(0x47), Imm(0x4a), Imm(0x47), Imm(0x4a), Imm(0x47), Imm(0x47), Imm(0x4b), Imm(0x47), Imm(0x4b), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x47), Imm(0x4a), Imm(0x47), Imm(0x4a), Imm(0x47), Imm(0x4a), Imm(0x4b), Imm(0x47), Imm(0x4b), Imm(0x47), Imm(0x4b)};
    byte const SidePipeShaftData[4] = {Imm(0x15), Imm(0x14), Imm(0x0), Imm(0x0)};
    byte const SidePipeTopPart[4] = {Imm(0x15), Imm(0x1e), Imm(0x1d), Imm(0x1c)};
    byte const SidePipeBottomPart[4] = {Imm(0x15), Imm(0x21), Imm(0x20), Imm(0x1f)};
    byte const VerticalPipeData[8] = {Imm(0x11), Imm(0x10), Imm(0x15), Imm(0x14), Imm(0x13), Imm(0x12), Imm(0x15), Imm(0x14)};
    byte const CoinMetatileData[4] = {Imm(0xc3), Imm(0xc2), Imm(0xc2), Imm(0xc2)};
    byte const C_ObjectRow[3] = {Imm(0x6), Imm(0x7), Imm(0x8)};
    byte const C_ObjectMetatile[3] = {Imm(0xc5), Imm(0xc), Imm(0x89)};
    byte const SolidBlockMetatiles[4] = {Imm(0x69), Imm(0x61), Imm(0x61), Imm(0x62)};
    byte const BrickMetatiles[5] = {Imm(0x22), Imm(0x51), Imm(0x52), Imm(0x52), Imm(0x88)};
    byte const StaircaseHeightData[9] = {Imm(0x7), Imm(0x7), Imm(0x6), Imm(0x5), Imm(0x4), Imm(0x3), Imm(0x2), Imm(0x1), Imm(0x0)};
    byte const StaircaseRowData[9] = {Imm(0x3), Imm(0x3), Imm(0x4), Imm(0x5), Imm(0x6), Imm(0x7), Imm(0x8), Imm(0x9), Imm(0xa)};
    byte const HoleMetatiles[4] = {Imm(0x87), Imm(0x0), Imm(0x0), Imm(0x0)};
    byte const BlockBufferAddr[4] = {LO8((Block_Buffer_1)), LO8((Block_Buffer_2)), HI8((Block_Buffer_1)), HI8((Block_Buffer_2))};
    byte const AreaDataOfsLoopback[11] = {Imm(0x12), Imm(0x36), Imm(0xe), Imm(0xe), Imm(0xe), Imm(0x32), Imm(0x32), Imm(0x32), Imm(0xa), Imm(0x26), Imm(0x40)};
    byte const WorldAddrOffsets[8] = {(((World1Areas)) - ((AreaAddrOffsets))), (((World2Areas)) - ((AreaAddrOffsets))), (((World3Areas)) - ((AreaAddrOffsets))), (((World4Areas)) - ((AreaAddrOffsets))), (((World5Areas)) - ((AreaAddrOffsets))), (((World6Areas)) - ((AreaAddrOffsets))), (((World7Areas)) - ((AreaAddrOffsets))), (((World8Areas)) - ((AreaAddrOffsets)))};
    byte const World1Areas[5] = {Imm(0x25), Imm(0x29), Imm(0xc0), Imm(0x26), Imm(0x60)};
    byte const World2Areas[5] = {Imm(0x28), Imm(0x29), Imm(0x1), Imm(0x27), Imm(0x62)};
    byte const World3Areas[4] = {Imm(0x24), Imm(0x35), Imm(0x20), Imm(0x63)};
    byte const World4Areas[5] = {Imm(0x22), Imm(0x29), Imm(0x41), Imm(0x2c), Imm(0x61)};
    byte const World5Areas[4] = {Imm(0x2a), Imm(0x31), Imm(0x26), Imm(0x62)};
    byte const World6Areas[4] = {Imm(0x2e), Imm(0x23), Imm(0x2d), Imm(0x60)};
    byte const World7Areas[5] = {Imm(0x33), Imm(0x29), Imm(0x1), Imm(0x27), Imm(0x64)};
    byte const World8Areas[4] = {Imm(0x30), Imm(0x32), Imm(0x21), Imm(0x65)};
    byte const EnemyAddrHOffsets[4] = {Imm(0x1f), Imm(0x6), Imm(0x1c), Imm(0x0)};
    byte const EnemyDataAddrLow[34] = {LO8((E_CastleArea1)), LO8((E_CastleArea2)), LO8((E_CastleArea3)), LO8((E_CastleArea4)), LO8((E_CastleArea5)), LO8((E_CastleArea6)), LO8((E_GroundArea1)), LO8((E_GroundArea2)), LO8((E_GroundArea3)), LO8((E_GroundArea4)), LO8((E_GroundArea5)), LO8((E_GroundArea6)), LO8((E_GroundArea7)), LO8((E_GroundArea8)), LO8((E_GroundArea9)), LO8((E_GroundArea10)), LO8((E_GroundArea11)), LO8((E_GroundArea12)), LO8((E_GroundArea13)), LO8((E_GroundArea14)), LO8((E_GroundArea15)), LO8((E_GroundArea16)), LO8((E_GroundArea17)), LO8((E_GroundArea18)), LO8((E_GroundArea19)), LO8((E_GroundArea20)), LO8((E_GroundArea21)), LO8((E_GroundArea22)), LO8((E_UndergroundArea1)), LO8((E_UndergroundArea2)), LO8((E_UndergroundArea3)), LO8((E_WaterArea1)), LO8((E_WaterArea2)), LO8((E_WaterArea3))};
    byte const EnemyDataAddrHigh[34] = {HI8((E_CastleArea1)), HI8((E_CastleArea2)), HI8((E_CastleArea3)), HI8((E_CastleArea4)), HI8((E_CastleArea5)), HI8((E_CastleArea6)), HI8((E_GroundArea1)), HI8((E_GroundArea2)), HI8((E_GroundArea3)), HI8((E_GroundArea4)), HI8((E_GroundArea5)), HI8((E_GroundArea6)), HI8((E_GroundArea7)), HI8((E_GroundArea8)), HI8((E_GroundArea9)), HI8((E_GroundArea10)), HI8((E_GroundArea11)), HI8((E_GroundArea12)), HI8((E_GroundArea13)), HI8((E_GroundArea14)), HI8((E_GroundArea15)), HI8((E_GroundArea16)), HI8((E_GroundArea17)), HI8((E_GroundArea18)), HI8((E_GroundArea19)), HI8((E_GroundArea20)), HI8((E_GroundArea21)), HI8((E_GroundArea22)), HI8((E_UndergroundArea1)), HI8((E_UndergroundArea2)), HI8((E_UndergroundArea3)), HI8((E_WaterArea1)), HI8((E_WaterArea2)), HI8((E_WaterArea3))};
    byte const AreaDataHOffsets[4] = {Imm(0x0), Imm(0x3), Imm(0x19), Imm(0x1c)};
    byte const AreaDataAddrLow[34] = {LO8((L_WaterArea1)), LO8((L_WaterArea2)), LO8((L_WaterArea3)), LO8((L_GroundArea1)), LO8((L_GroundArea2)), LO8((L_GroundArea3)), LO8((L_GroundArea4)), LO8((L_GroundArea5)), LO8((L_GroundArea6)), LO8((L_GroundArea7)), LO8((L_GroundArea8)), LO8((L_GroundArea9)), LO8((L_GroundArea10)), LO8((L_GroundArea11)), LO8((L_GroundArea12)), LO8((L_GroundArea13)), LO8((L_GroundArea14)), LO8((L_GroundArea15)), LO8((L_GroundArea16)), LO8((L_GroundArea17)), LO8((L_GroundArea18)), LO8((L_GroundArea19)), LO8((L_GroundArea20)), LO8((L_GroundArea21)), LO8((L_GroundArea22)), LO8((L_UndergroundArea1)), LO8((L_UndergroundArea2)), LO8((L_UndergroundArea3)), LO8((L_CastleArea1)), LO8((L_CastleArea2)), LO8((L_CastleArea3)), LO8((L_CastleArea4)), LO8((L_CastleArea5)), LO8((L_CastleArea6))};
    byte const AreaDataAddrHigh[34] = {HI8((L_WaterArea1)), HI8((L_WaterArea2)), HI8((L_WaterArea3)), HI8((L_GroundArea1)), HI8((L_GroundArea2)), HI8((L_GroundArea3)), HI8((L_GroundArea4)), HI8((L_GroundArea5)), HI8((L_GroundArea6)), HI8((L_GroundArea7)), HI8((L_GroundArea8)), HI8((L_GroundArea9)), HI8((L_GroundArea10)), HI8((L_GroundArea11)), HI8((L_GroundArea12)), HI8((L_GroundArea13)), HI8((L_GroundArea14)), HI8((L_GroundArea15)), HI8((L_GroundArea16)), HI8((L_GroundArea17)), HI8((L_GroundArea18)), HI8((L_GroundArea19)), HI8((L_GroundArea20)), HI8((L_GroundArea21)), HI8((L_GroundArea22)), HI8((L_UndergroundArea1)), HI8((L_UndergroundArea2)), HI8((L_UndergroundArea3)), HI8((L_CastleArea1)), HI8((L_CastleArea2)), HI8((L_CastleArea3)), HI8((L_CastleArea4)), HI8((L_CastleArea5)), HI8((L_CastleArea6))};
    byte const E_CastleArea1[39] = {Imm(0x76), Imm(0xdd), Imm(0xbb), Imm(0x4c), Imm(0xea), Imm(0x1d), Imm(0x1b), Imm(0xcc), Imm(0x56), Imm(0x5d), Imm(0x16), Imm(0x9d), Imm(0xc6), Imm(0x1d), Imm(0x36), Imm(0x9d), Imm(0xc9), Imm(0x1d), Imm(0x4), Imm(0xdb), Imm(0x49), Imm(0x1d), Imm(0x84), Imm(0x1b), Imm(0xc9), Imm(0x5d), Imm(0x88), Imm(0x95), Imm(0xf), Imm(0x8), Imm(0x30), Imm(0x4c), Imm(0x78), Imm(0x2d), Imm(0xa6), Imm(0x28), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_CastleArea2[25] = {Imm(0xf), Imm(0x3), Imm(0x56), Imm(0x1b), Imm(0xc9), Imm(0x1b), Imm(0xf), Imm(0x7), Imm(0x36), Imm(0x1b), Imm(0xaa), Imm(0x1b), Imm(0x48), Imm(0x95), Imm(0xf), Imm(0xa), Imm(0x2a), Imm(0x1b), Imm(0x5b), Imm(0xc), Imm(0x78), Imm(0x2d), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_CastleArea3[47] = {Imm(0xb), Imm(0x8c), Imm(0x4b), Imm(0x4c), Imm(0x77), Imm(0x5f), Imm(0xeb), Imm(0xc), Imm(0xbd), Imm(0xdb), Imm(0x19), Imm(0x9d), Imm(0x75), Imm(0x1d), Imm(0x7d), Imm(0x5b), Imm(0xd9), Imm(0x1d), Imm(0x3d), Imm(0xdd), Imm(0x99), Imm(0x1d), Imm(0x26), Imm(0x9d), Imm(0x5a), Imm(0x2b), Imm(0x8a), Imm(0x2c), Imm(0xca), Imm(0x1b), Imm(0x20), Imm(0x95), Imm(0x7b), Imm(0x5c), Imm(0xdb), Imm(0x4c), Imm(0x1b), Imm(0xcc), Imm(0x3b), Imm(0xcc), Imm(0x78), Imm(0x2d), Imm(0xa6), Imm(0x28), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_CastleArea4[43] = {Imm(0xb), Imm(0x8c), Imm(0x3b), Imm(0x1d), Imm(0x8b), Imm(0x1d), Imm(0xab), Imm(0xc), Imm(0xdb), Imm(0x1d), Imm(0xf), Imm(0x3), Imm(0x65), Imm(0x1d), Imm(0x6b), Imm(0x1b), Imm(0x5), Imm(0x9d), Imm(0xb), Imm(0x1b), Imm(0x5), Imm(0x9b), Imm(0xb), Imm(0x1d), Imm(0x8b), Imm(0xc), Imm(0x1b), Imm(0x8c), Imm(0x70), Imm(0x15), Imm(0x7b), Imm(0xc), Imm(0xdb), Imm(0xc), Imm(0xf), Imm(0x8), Imm(0x78), Imm(0x2d), Imm(0xa6), Imm(0x28), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_CastleArea5[21] = {Imm(0x27), Imm(0xa9), Imm(0x4b), Imm(0xc), Imm(0x68), Imm(0x29), Imm(0xf), Imm(0x6), Imm(0x77), Imm(0x1b), Imm(0xf), Imm(0xb), Imm(0x60), Imm(0x15), Imm(0x4b), Imm(0x8c), Imm(0x78), Imm(0x2d), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_CastleArea6[58] = {Imm(0xf), Imm(0x3), Imm(0x8e), Imm(0x65), Imm(0xe1), Imm(0xbb), Imm(0x38), Imm(0x6d), Imm(0xa8), Imm(0x3e), Imm(0xe5), Imm(0xe7), Imm(0xf), Imm(0x8), Imm(0xb), Imm(0x2), Imm(0x2b), Imm(0x2), Imm(0x5e), Imm(0x65), Imm(0xe1), Imm(0xbb), Imm(0xe), Imm(0xdb), Imm(0xe), Imm(0xbb), Imm(0x8e), Imm(0xdb), Imm(0xe), Imm(0xfe), Imm(0x65), Imm(0xec), Imm(0xf), Imm(0xd), Imm(0x4e), Imm(0x65), Imm(0xe1), Imm(0xf), Imm(0xe), Imm(0x4e), Imm(0x2), Imm(0xe0), Imm(0xf), Imm(0x10), Imm(0xfe), Imm(0xe5), Imm(0xe1), Imm(0x1b), Imm(0x85), Imm(0x7b), Imm(0xc), Imm(0x5b), Imm(0x95), Imm(0x78), Imm(0x2d), Imm(0x90), Imm(0xb5), Imm(0xff)};
    byte const E_GroundArea1[37] = {Imm(0xa5), Imm(0x86), Imm(0xe4), Imm(0x28), Imm(0x18), Imm(0xa8), Imm(0x45), Imm(0x83), Imm(0x69), Imm(0x3), Imm(0xc6), Imm(0x29), Imm(0x9b), Imm(0x83), Imm(0x16), Imm(0xa4), Imm(0x88), Imm(0x24), Imm(0xe9), Imm(0x28), Imm(0x5), Imm(0xa8), Imm(0x7b), Imm(0x28), Imm(0x24), Imm(0x8f), Imm(0xc8), Imm(0x3), Imm(0xe8), Imm(0x3), Imm(0x46), Imm(0xa8), Imm(0x85), Imm(0x24), Imm(0xc8), Imm(0x24), Imm(0xff)};
    byte const E_GroundArea2[29] = {Imm(0xeb), Imm(0x8e), Imm(0xf), Imm(0x3), Imm(0xfb), Imm(0x5), Imm(0x17), Imm(0x85), Imm(0xdb), Imm(0x8e), Imm(0xf), Imm(0x7), Imm(0x57), Imm(0x5), Imm(0x7b), Imm(0x5), Imm(0x9b), Imm(0x80), Imm(0x2b), Imm(0x85), Imm(0xfb), Imm(0x5), Imm(0xf), Imm(0xb), Imm(0x1b), Imm(0x5), Imm(0x9b), Imm(0x5), Imm(0xff)};
    byte const E_GroundArea3[14] = {Imm(0x2e), Imm(0xc2), Imm(0x66), Imm(0xe2), Imm(0x11), Imm(0xf), Imm(0x7), Imm(0x2), Imm(0x11), Imm(0xf), Imm(0xc), Imm(0x12), Imm(0x11), Imm(0xff)};
    byte const E_GroundArea4[39] = {Imm(0xe), Imm(0xc2), Imm(0xa8), Imm(0xab), Imm(0x0), Imm(0xbb), Imm(0x8e), Imm(0x6b), Imm(0x82), Imm(0xde), Imm(0x0), Imm(0xa0), Imm(0x33), Imm(0x86), Imm(0x43), Imm(0x6), Imm(0x3e), Imm(0xb4), Imm(0xa0), Imm(0xcb), Imm(0x2), Imm(0xf), Imm(0x7), Imm(0x7e), Imm(0x42), Imm(0xa6), Imm(0x83), Imm(0x2), Imm(0xf), Imm(0xa), Imm(0x3b), Imm(0x2), Imm(0xcb), Imm(0x37), Imm(0xf), Imm(0xc), Imm(0xe3), Imm(0xe), Imm(0xff)};
    byte const E_GroundArea5[49] = {Imm(0x9b), Imm(0x8e), Imm(0xca), Imm(0xe), Imm(0xee), Imm(0x42), Imm(0x44), Imm(0x5b), Imm(0x86), Imm(0x80), Imm(0xb8), Imm(0x1b), Imm(0x80), Imm(0x50), Imm(0xba), Imm(0x10), Imm(0xb7), Imm(0x5b), Imm(0x0), Imm(0x17), Imm(0x85), Imm(0x4b), Imm(0x5), Imm(0xfe), Imm(0x34), Imm(0x40), Imm(0xb7), Imm(0x86), Imm(0xc6), Imm(0x6), Imm(0x5b), Imm(0x80), Imm(0x83), Imm(0x0), Imm(0xd0), Imm(0x38), Imm(0x5b), Imm(0x8e), Imm(0x8a), Imm(0xe), Imm(0xa6), Imm(0x0), Imm(0xbb), Imm(0xe), Imm(0xc5), Imm(0x80), Imm(0xf3), Imm(0x0), Imm(0xff)};
    byte const E_GroundArea6[30] = {Imm(0x1e), Imm(0xc2), Imm(0x0), Imm(0x6b), Imm(0x6), Imm(0x8b), Imm(0x86), Imm(0x63), Imm(0xb7), Imm(0xf), Imm(0x5), Imm(0x3), Imm(0x6), Imm(0x23), Imm(0x6), Imm(0x4b), Imm(0xb7), Imm(0xbb), Imm(0x0), Imm(0x5b), Imm(0xb7), Imm(0xfb), Imm(0x37), Imm(0x3b), Imm(0xb7), Imm(0xf), Imm(0xb), Imm(0x1b), Imm(0x37), Imm(0xff)};
    byte const E_GroundArea7[29] = {Imm(0x2b), Imm(0xd7), Imm(0xe3), Imm(0x3), Imm(0xc2), Imm(0x86), Imm(0xe2), Imm(0x6), Imm(0x76), Imm(0xa5), Imm(0xa3), Imm(0x8f), Imm(0x3), Imm(0x86), Imm(0x2b), Imm(0x57), Imm(0x68), Imm(0x28), Imm(0xe9), Imm(0x28), Imm(0xe5), Imm(0x83), Imm(0x24), Imm(0x8f), Imm(0x36), Imm(0xa8), Imm(0x5b), Imm(0x3), Imm(0xff)};
    byte const E_GroundArea8[21] = {Imm(0xf), Imm(0x2), Imm(0x78), Imm(0x40), Imm(0x48), Imm(0xce), Imm(0xf8), Imm(0xc3), Imm(0xf8), Imm(0xc3), Imm(0xf), Imm(0x7), Imm(0x7b), Imm(0x43), Imm(0xc6), Imm(0xd0), Imm(0xf), Imm(0x8a), Imm(0xc8), Imm(0x50), Imm(0xff)};
    byte const E_GroundArea9[42] = {Imm(0x85), Imm(0x86), Imm(0xb), Imm(0x80), Imm(0x1b), Imm(0x0), Imm(0xdb), Imm(0x37), Imm(0x77), Imm(0x80), Imm(0xeb), Imm(0x37), Imm(0xfe), Imm(0x2b), Imm(0x20), Imm(0x2b), Imm(0x80), Imm(0x7b), Imm(0x38), Imm(0xab), Imm(0xb8), Imm(0x77), Imm(0x86), Imm(0xfe), Imm(0x42), Imm(0x20), Imm(0x49), Imm(0x86), Imm(0x8b), Imm(0x6), Imm(0x9b), Imm(0x80), Imm(0x7b), Imm(0x8e), Imm(0x5b), Imm(0xb7), Imm(0x9b), Imm(0xe), Imm(0xbb), Imm(0xe), Imm(0x9b), Imm(0x80)};
    byte const E_GroundArea10[1] = {Imm(0xff)};
    byte const E_GroundArea11[36] = {Imm(0xb), Imm(0x80), Imm(0x60), Imm(0x38), Imm(0x10), Imm(0xb8), Imm(0xc0), Imm(0x3b), Imm(0xdb), Imm(0x8e), Imm(0x40), Imm(0xb8), Imm(0xf0), Imm(0x38), Imm(0x7b), Imm(0x8e), Imm(0xa0), Imm(0xb8), Imm(0xc0), Imm(0xb8), Imm(0xfb), Imm(0x0), Imm(0xa0), Imm(0xb8), Imm(0x30), Imm(0xbb), Imm(0xee), Imm(0x42), Imm(0x88), Imm(0xf), Imm(0xb), Imm(0x2b), Imm(0xe), Imm(0x67), Imm(0xe), Imm(0xff)};
    byte const E_GroundArea12[9] = {Imm(0xa), Imm(0xaa), Imm(0xe), Imm(0x28), Imm(0x2a), Imm(0xe), Imm(0x31), Imm(0x88), Imm(0xff)};
    byte const E_GroundArea13[37] = {Imm(0xc7), Imm(0x83), Imm(0xd7), Imm(0x3), Imm(0x42), Imm(0x8f), Imm(0x7a), Imm(0x3), Imm(0x5), Imm(0xa4), Imm(0x78), Imm(0x24), Imm(0xa6), Imm(0x25), Imm(0xe4), Imm(0x25), Imm(0x4b), Imm(0x83), Imm(0xe3), Imm(0x3), Imm(0x5), Imm(0xa4), Imm(0x89), Imm(0x24), Imm(0xb5), Imm(0x24), Imm(0x9), Imm(0xa4), Imm(0x65), Imm(0x24), Imm(0xc9), Imm(0x24), Imm(0xf), Imm(0x8), Imm(0x85), Imm(0x25), Imm(0xff)};
    byte const E_GroundArea14[35] = {Imm(0xcd), Imm(0xa5), Imm(0xb5), Imm(0xa8), Imm(0x7), Imm(0xa8), Imm(0x76), Imm(0x28), Imm(0xcc), Imm(0x25), Imm(0x65), Imm(0xa4), Imm(0xa9), Imm(0x24), Imm(0xe5), Imm(0x24), Imm(0x19), Imm(0xa4), Imm(0xf), Imm(0x7), Imm(0x95), Imm(0x28), Imm(0xe6), Imm(0x24), Imm(0x19), Imm(0xa4), Imm(0xd7), Imm(0x29), Imm(0x16), Imm(0xa9), Imm(0x58), Imm(0x29), Imm(0x97), Imm(0x29), Imm(0xff)};
    byte const E_GroundArea15[9] = {Imm(0xf), Imm(0x2), Imm(0x2), Imm(0x11), Imm(0xf), Imm(0x7), Imm(0x2), Imm(0x11), Imm(0xff)};
    byte const E_GroundArea16[1] = {Imm(0xff)};
    byte const E_GroundArea17[58] = {Imm(0x2b), Imm(0x82), Imm(0xab), Imm(0x38), Imm(0xde), Imm(0x42), Imm(0xe2), Imm(0x1b), Imm(0xb8), Imm(0xeb), Imm(0x3b), Imm(0xdb), Imm(0x80), Imm(0x8b), Imm(0xb8), Imm(0x1b), Imm(0x82), Imm(0xfb), Imm(0xb8), Imm(0x7b), Imm(0x80), Imm(0xfb), Imm(0x3c), Imm(0x5b), Imm(0xbc), Imm(0x7b), Imm(0xb8), Imm(0x1b), Imm(0x8e), Imm(0xcb), Imm(0xe), Imm(0x1b), Imm(0x8e), Imm(0xf), Imm(0xd), Imm(0x2b), Imm(0x3b), Imm(0xbb), Imm(0xb8), Imm(0xeb), Imm(0x82), Imm(0x4b), Imm(0xb8), Imm(0xbb), Imm(0x38), Imm(0x3b), Imm(0xb7), Imm(0xbb), Imm(0x2), Imm(0xf), Imm(0x13), Imm(0x1b), Imm(0x0), Imm(0xcb), Imm(0x80), Imm(0x6b), Imm(0xbc), Imm(0xff)};
    byte const E_GroundArea18[43] = {Imm(0x7b), Imm(0x80), Imm(0xae), Imm(0x0), Imm(0x80), Imm(0x8b), Imm(0x8e), Imm(0xe8), Imm(0x5), Imm(0xf9), Imm(0x86), Imm(0x17), Imm(0x86), Imm(0x16), Imm(0x85), Imm(0x4e), Imm(0x2b), Imm(0x80), Imm(0xab), Imm(0x8e), Imm(0x87), Imm(0x85), Imm(0xc3), Imm(0x5), Imm(0x8b), Imm(0x82), Imm(0x9b), Imm(0x2), Imm(0xab), Imm(0x2), Imm(0xbb), Imm(0x86), Imm(0xcb), Imm(0x6), Imm(0xd3), Imm(0x3), Imm(0x3b), Imm(0x8e), Imm(0x6b), Imm(0xe), Imm(0xa7), Imm(0x8e), Imm(0xff)};
    byte const E_GroundArea19[46] = {Imm(0x29), Imm(0x8e), Imm(0x52), Imm(0x11), Imm(0x83), Imm(0xe), Imm(0xf), Imm(0x3), Imm(0x9b), Imm(0xe), Imm(0x2b), Imm(0x8e), Imm(0x5b), Imm(0xe), Imm(0xcb), Imm(0x8e), Imm(0xfb), Imm(0xe), Imm(0xfb), Imm(0x82), Imm(0x9b), Imm(0x82), Imm(0xbb), Imm(0x2), Imm(0xfe), Imm(0x42), Imm(0xe8), Imm(0xbb), Imm(0x8e), Imm(0xf), Imm(0xa), Imm(0xab), Imm(0xe), Imm(0xcb), Imm(0xe), Imm(0xf9), Imm(0xe), Imm(0x88), Imm(0x86), Imm(0xa6), Imm(0x6), Imm(0xdb), Imm(0x2), Imm(0xb6), Imm(0x8e), Imm(0xff)};
    byte const E_GroundArea20[28] = {Imm(0xab), Imm(0xce), Imm(0xde), Imm(0x42), Imm(0xc0), Imm(0xcb), Imm(0xce), Imm(0x5b), Imm(0x8e), Imm(0x1b), Imm(0xce), Imm(0x4b), Imm(0x85), Imm(0x67), Imm(0x45), Imm(0xf), Imm(0x7), Imm(0x2b), Imm(0x0), Imm(0x7b), Imm(0x85), Imm(0x97), Imm(0x5), Imm(0xf), Imm(0xa), Imm(0x92), Imm(0x2), Imm(0xff)};
    byte const E_GroundArea21[9] = {Imm(0xa), Imm(0xaa), Imm(0xe), Imm(0x24), Imm(0x4a), Imm(0x1e), Imm(0x23), Imm(0xaa), Imm(0xff)};
    byte const E_GroundArea22[37] = {Imm(0x1b), Imm(0x80), Imm(0xbb), Imm(0x38), Imm(0x4b), Imm(0xbc), Imm(0xeb), Imm(0x3b), Imm(0xf), Imm(0x4), Imm(0x2b), Imm(0x0), Imm(0xab), Imm(0x38), Imm(0xeb), Imm(0x0), Imm(0xcb), Imm(0x8e), Imm(0xfb), Imm(0x80), Imm(0xab), Imm(0xb8), Imm(0x6b), Imm(0x80), Imm(0xfb), Imm(0x3c), Imm(0x9b), Imm(0xbb), Imm(0x5b), Imm(0xbc), Imm(0xfb), Imm(0x0), Imm(0x6b), Imm(0xb8), Imm(0xfb), Imm(0x38), Imm(0xff)};
    byte const E_UndergroundArea1[45] = {Imm(0xb), Imm(0x86), Imm(0x1a), Imm(0x6), Imm(0xdb), Imm(0x6), Imm(0xde), Imm(0xc2), Imm(0x2), Imm(0xf0), Imm(0x3b), Imm(0xbb), Imm(0x80), Imm(0xeb), Imm(0x6), Imm(0xb), Imm(0x86), Imm(0x93), Imm(0x6), Imm(0xf0), Imm(0x39), Imm(0xf), Imm(0x6), Imm(0x60), Imm(0xb8), Imm(0x1b), Imm(0x86), Imm(0xa0), Imm(0xb9), Imm(0xb7), Imm(0x27), Imm(0xbd), Imm(0x27), Imm(0x2b), Imm(0x83), Imm(0xa1), Imm(0x26), Imm(0xa9), Imm(0x26), Imm(0xee), Imm(0x25), Imm(0xb), Imm(0x27), Imm(0xb4), Imm(0xff)};
    byte const E_UndergroundArea2[46] = {Imm(0xf), Imm(0x2), Imm(0x1e), Imm(0x2f), Imm(0x60), Imm(0xe0), Imm(0x3a), Imm(0xa5), Imm(0xa7), Imm(0xdb), Imm(0x80), Imm(0x3b), Imm(0x82), Imm(0x8b), Imm(0x2), Imm(0xfe), Imm(0x42), Imm(0x68), Imm(0x70), Imm(0xbb), Imm(0x25), Imm(0xa7), Imm(0x2c), Imm(0x27), Imm(0xb2), Imm(0x26), Imm(0xb9), Imm(0x26), Imm(0x9b), Imm(0x80), Imm(0xa8), Imm(0x82), Imm(0xb5), Imm(0x27), Imm(0xbc), Imm(0x27), Imm(0xb0), Imm(0xbb), Imm(0x3b), Imm(0x82), Imm(0x87), Imm(0x34), Imm(0xee), Imm(0x25), Imm(0x6b), Imm(0xff)};
    byte const E_UndergroundArea3[45] = {Imm(0x1e), Imm(0xa5), Imm(0xa), Imm(0x2e), Imm(0x28), Imm(0x27), Imm(0x2e), Imm(0x33), Imm(0xc7), Imm(0xf), Imm(0x3), Imm(0x1e), Imm(0x40), Imm(0x7), Imm(0x2e), Imm(0x30), Imm(0xe7), Imm(0xf), Imm(0x5), Imm(0x1e), Imm(0x24), Imm(0x44), Imm(0xf), Imm(0x7), Imm(0x1e), Imm(0x22), Imm(0x6a), Imm(0x2e), Imm(0x23), Imm(0xab), Imm(0xf), Imm(0x9), Imm(0x1e), Imm(0x41), Imm(0x68), Imm(0x1e), Imm(0x2a), Imm(0x8a), Imm(0x2e), Imm(0x23), Imm(0xa2), Imm(0x2e), Imm(0x32), Imm(0xea), Imm(0xff)};
    byte const E_WaterArea1[17] = {Imm(0x3b), Imm(0x87), Imm(0x66), Imm(0x27), Imm(0xcc), Imm(0x27), Imm(0xee), Imm(0x31), Imm(0x87), Imm(0xee), Imm(0x23), Imm(0xa7), Imm(0x3b), Imm(0x87), Imm(0xdb), Imm(0x7), Imm(0xff)};
    byte const E_WaterArea2[42] = {Imm(0xf), Imm(0x1), Imm(0x2e), Imm(0x25), Imm(0x2b), Imm(0x2e), Imm(0x25), Imm(0x4b), Imm(0x4e), Imm(0x25), Imm(0xcb), Imm(0x6b), Imm(0x7), Imm(0x97), Imm(0x47), Imm(0xe9), Imm(0x87), Imm(0x47), Imm(0xc7), Imm(0x7a), Imm(0x7), Imm(0xd6), Imm(0xc7), Imm(0x78), Imm(0x7), Imm(0x38), Imm(0x87), Imm(0xab), Imm(0x47), Imm(0xe3), Imm(0x7), Imm(0x9b), Imm(0x87), Imm(0xf), Imm(0x9), Imm(0x68), Imm(0x47), Imm(0xdb), Imm(0xc7), Imm(0x3b), Imm(0xc7), Imm(0xff)};
    byte const E_WaterArea3[20] = {Imm(0x47), Imm(0x9b), Imm(0xcb), Imm(0x7), Imm(0xfa), Imm(0x1d), Imm(0x86), Imm(0x9b), Imm(0x3a), Imm(0x87), Imm(0x56), Imm(0x7), Imm(0x88), Imm(0x1b), Imm(0x7), Imm(0x9d), Imm(0x2e), Imm(0x65), Imm(0xf0), Imm(0xff)};
    byte const L_CastleArea1[97] = {Imm(0x9b), Imm(0x7), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0xce), Imm(0x3), Imm(0xdc), Imm(0x51), Imm(0xee), Imm(0x7), Imm(0x73), Imm(0xe0), Imm(0x74), Imm(0xa), Imm(0x7e), Imm(0x6), Imm(0x9e), Imm(0xa), Imm(0xce), Imm(0x6), Imm(0xe4), Imm(0x0), Imm(0xe8), Imm(0xa), Imm(0xfe), Imm(0xa), Imm(0x2e), Imm(0x89), Imm(0x4e), Imm(0xb), Imm(0x54), Imm(0xa), Imm(0x14), Imm(0x8a), Imm(0xc4), Imm(0xa), Imm(0x34), Imm(0x8a), Imm(0x7e), Imm(0x6), Imm(0xc7), Imm(0xa), Imm(0x1), Imm(0xe0), Imm(0x2), Imm(0xa), Imm(0x47), Imm(0xa), Imm(0x81), Imm(0x60), Imm(0x82), Imm(0xa), Imm(0xc7), Imm(0xa), Imm(0xe), Imm(0x87), Imm(0x7e), Imm(0x2), Imm(0xa7), Imm(0x2), Imm(0xb3), Imm(0x2), Imm(0xd7), Imm(0x2), Imm(0xe3), Imm(0x2), Imm(0x7), Imm(0x82), Imm(0x13), Imm(0x2), Imm(0x3e), Imm(0x6), Imm(0x7e), Imm(0x2), Imm(0xae), Imm(0x7), Imm(0xfe), Imm(0xa), Imm(0xd), Imm(0xc4), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xde), Imm(0xb), Imm(0xdd), Imm(0x42), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_CastleArea2[127] = {Imm(0x5b), Imm(0x7), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0x5e), Imm(0xa), Imm(0x68), Imm(0x64), Imm(0x98), Imm(0x64), Imm(0xa8), Imm(0x64), Imm(0xce), Imm(0x6), Imm(0xfe), Imm(0x2), Imm(0xd), Imm(0x1), Imm(0x1e), Imm(0xe), Imm(0x7e), Imm(0x2), Imm(0x94), Imm(0x63), Imm(0xb4), Imm(0x63), Imm(0xd4), Imm(0x63), Imm(0xf4), Imm(0x63), Imm(0x14), Imm(0xe3), Imm(0x2e), Imm(0xe), Imm(0x5e), Imm(0x2), Imm(0x64), Imm(0x35), Imm(0x88), Imm(0x72), Imm(0xbe), Imm(0xe), Imm(0xd), Imm(0x4), Imm(0xae), Imm(0x2), Imm(0xce), Imm(0x8), Imm(0xcd), Imm(0x4b), Imm(0xfe), Imm(0x2), Imm(0xd), Imm(0x5), Imm(0x68), Imm(0x31), Imm(0x7e), Imm(0xa), Imm(0x96), Imm(0x31), Imm(0xa9), Imm(0x63), Imm(0xa8), Imm(0x33), Imm(0xd5), Imm(0x30), Imm(0xee), Imm(0x2), Imm(0xe6), Imm(0x62), Imm(0xf4), Imm(0x61), Imm(0x4), Imm(0xb1), Imm(0x8), Imm(0x3f), Imm(0x44), Imm(0x33), Imm(0x94), Imm(0x63), Imm(0xa4), Imm(0x31), Imm(0xe4), Imm(0x31), Imm(0x4), Imm(0xbf), Imm(0x8), Imm(0x3f), Imm(0x4), Imm(0xbf), Imm(0x8), Imm(0x3f), Imm(0xcd), Imm(0x4b), Imm(0x3), Imm(0xe4), Imm(0xe), Imm(0x3), Imm(0x2e), Imm(0x1), Imm(0x7e), Imm(0x6), Imm(0xbe), Imm(0x2), Imm(0xde), Imm(0x6), Imm(0xfe), Imm(0xa), Imm(0xd), Imm(0xc4), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xde), Imm(0xb), Imm(0xdd), Imm(0x42), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_CastleArea3[115] = {Imm(0x9b), Imm(0x7), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0xfe), Imm(0x0), Imm(0x27), Imm(0xb1), Imm(0x65), Imm(0x32), Imm(0x75), Imm(0xa), Imm(0x71), Imm(0x0), Imm(0xb7), Imm(0x31), Imm(0x8), Imm(0xe4), Imm(0x18), Imm(0x64), Imm(0x1e), Imm(0x4), Imm(0x57), Imm(0x3b), Imm(0xbb), Imm(0xa), Imm(0x17), Imm(0x8a), Imm(0x27), Imm(0x3a), Imm(0x73), Imm(0xa), Imm(0x7b), Imm(0xa), Imm(0xd7), Imm(0xa), Imm(0xe7), Imm(0x3a), Imm(0x3b), Imm(0x8a), Imm(0x97), Imm(0xa), Imm(0xfe), Imm(0x8), Imm(0x24), Imm(0x8a), Imm(0x2e), Imm(0x0), Imm(0x3e), Imm(0x40), Imm(0x38), Imm(0x64), Imm(0x6f), Imm(0x0), Imm(0x9f), Imm(0x0), Imm(0xbe), Imm(0x43), Imm(0xc8), Imm(0xa), Imm(0xc9), Imm(0x63), Imm(0xce), Imm(0x7), Imm(0xfe), Imm(0x7), Imm(0x2e), Imm(0x81), Imm(0x66), Imm(0x42), Imm(0x6a), Imm(0x42), Imm(0x79), Imm(0xa), Imm(0xbe), Imm(0x0), Imm(0xc8), Imm(0x64), Imm(0xf8), Imm(0x64), Imm(0x8), Imm(0xe4), Imm(0x2e), Imm(0x7), Imm(0x7e), Imm(0x3), Imm(0x9e), Imm(0x7), Imm(0xbe), Imm(0x3), Imm(0xde), Imm(0x7), Imm(0xfe), Imm(0xa), Imm(0x3), Imm(0xa5), Imm(0xd), Imm(0x44), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xdd), Imm(0x42), Imm(0xde), Imm(0xb), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_CastleArea4[109] = {Imm(0x9b), Imm(0x7), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0xfe), Imm(0x6), Imm(0xc), Imm(0x81), Imm(0x39), Imm(0xa), Imm(0x5c), Imm(0x1), Imm(0x89), Imm(0xa), Imm(0xac), Imm(0x1), Imm(0xd9), Imm(0xa), Imm(0xfc), Imm(0x1), Imm(0x2e), Imm(0x83), Imm(0xa7), Imm(0x1), Imm(0xb7), Imm(0x0), Imm(0xc7), Imm(0x1), Imm(0xde), Imm(0xa), Imm(0xfe), Imm(0x2), Imm(0x4e), Imm(0x83), Imm(0x5a), Imm(0x32), Imm(0x63), Imm(0xa), Imm(0x69), Imm(0xa), Imm(0x7e), Imm(0x2), Imm(0xee), Imm(0x3), Imm(0xfa), Imm(0x32), Imm(0x3), Imm(0x8a), Imm(0x9), Imm(0xa), Imm(0x1e), Imm(0x2), Imm(0xee), Imm(0x3), Imm(0xfa), Imm(0x32), Imm(0x3), Imm(0x8a), Imm(0x9), Imm(0xa), Imm(0x14), Imm(0x42), Imm(0x1e), Imm(0x2), Imm(0x7e), Imm(0xa), Imm(0x9e), Imm(0x7), Imm(0xfe), Imm(0xa), Imm(0x2e), Imm(0x86), Imm(0x5e), Imm(0xa), Imm(0x8e), Imm(0x6), Imm(0xbe), Imm(0xa), Imm(0xee), Imm(0x7), Imm(0x3e), Imm(0x83), Imm(0x5e), Imm(0x7), Imm(0xfe), Imm(0xa), Imm(0xd), Imm(0xc4), Imm(0x41), Imm(0x52), Imm(0x51), Imm(0x52), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xde), Imm(0xb), Imm(0xdd), Imm(0x42), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_CastleArea5[139] = {Imm(0x5b), Imm(0x7), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0xfe), Imm(0xa), Imm(0xae), Imm(0x86), Imm(0xbe), Imm(0x7), Imm(0xfe), Imm(0x2), Imm(0xd), Imm(0x2), Imm(0x27), Imm(0x32), Imm(0x46), Imm(0x61), Imm(0x55), Imm(0x62), Imm(0x5e), Imm(0xe), Imm(0x1e), Imm(0x82), Imm(0x68), Imm(0x3c), Imm(0x74), Imm(0x3a), Imm(0x7d), Imm(0x4b), Imm(0x5e), Imm(0x8e), Imm(0x7d), Imm(0x4b), Imm(0x7e), Imm(0x82), Imm(0x84), Imm(0x62), Imm(0x94), Imm(0x61), Imm(0xa4), Imm(0x31), Imm(0xbd), Imm(0x4b), Imm(0xce), Imm(0x6), Imm(0xfe), Imm(0x2), Imm(0xd), Imm(0x6), Imm(0x34), Imm(0x31), Imm(0x3e), Imm(0xa), Imm(0x64), Imm(0x32), Imm(0x75), Imm(0xa), Imm(0x7b), Imm(0x61), Imm(0xa4), Imm(0x33), Imm(0xae), Imm(0x2), Imm(0xde), Imm(0xe), Imm(0x3e), Imm(0x82), Imm(0x64), Imm(0x32), Imm(0x78), Imm(0x32), Imm(0xb4), Imm(0x36), Imm(0xc8), Imm(0x36), Imm(0xdd), Imm(0x4b), Imm(0x44), Imm(0xb2), Imm(0x58), Imm(0x32), Imm(0x94), Imm(0x63), Imm(0xa4), Imm(0x3e), Imm(0xba), Imm(0x30), Imm(0xc9), Imm(0x61), Imm(0xce), Imm(0x6), Imm(0xdd), Imm(0x4b), Imm(0xce), Imm(0x86), Imm(0xdd), Imm(0x4b), Imm(0xfe), Imm(0x2), Imm(0x2e), Imm(0x86), Imm(0x5e), Imm(0x2), Imm(0x7e), Imm(0x6), Imm(0xfe), Imm(0x2), Imm(0x1e), Imm(0x86), Imm(0x3e), Imm(0x2), Imm(0x5e), Imm(0x6), Imm(0x7e), Imm(0x2), Imm(0x9e), Imm(0x6), Imm(0xfe), Imm(0xa), Imm(0xd), Imm(0xc4), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xde), Imm(0xb), Imm(0xdd), Imm(0x42), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_CastleArea6[113] = {Imm(0x5b), Imm(0x6), Imm(0x5), Imm(0x32), Imm(0x6), Imm(0x33), Imm(0x7), Imm(0x34), Imm(0x5e), Imm(0xa), Imm(0xae), Imm(0x2), Imm(0xd), Imm(0x1), Imm(0x39), Imm(0x73), Imm(0xd), Imm(0x3), Imm(0x39), Imm(0x7b), Imm(0x4d), Imm(0x4b), Imm(0xde), Imm(0x6), Imm(0x1e), Imm(0x8a), Imm(0xae), Imm(0x6), Imm(0xc4), Imm(0x33), Imm(0x16), Imm(0xfe), Imm(0xa5), Imm(0x77), Imm(0xfe), Imm(0x2), Imm(0xfe), Imm(0x82), Imm(0xd), Imm(0x7), Imm(0x39), Imm(0x73), Imm(0xa8), Imm(0x74), Imm(0xed), Imm(0x4b), Imm(0x49), Imm(0xfb), Imm(0xe8), Imm(0x74), Imm(0xfe), Imm(0xa), Imm(0x2e), Imm(0x82), Imm(0x67), Imm(0x2), Imm(0x84), Imm(0x7a), Imm(0x87), Imm(0x31), Imm(0xd), Imm(0xb), Imm(0xfe), Imm(0x2), Imm(0xd), Imm(0xc), Imm(0x39), Imm(0x73), Imm(0x5e), Imm(0x6), Imm(0xc6), Imm(0x76), Imm(0x45), Imm(0xff), Imm(0xbe), Imm(0xa), Imm(0xdd), Imm(0x48), Imm(0xfe), Imm(0x6), Imm(0x3d), Imm(0xcb), Imm(0x46), Imm(0x7e), Imm(0xad), Imm(0x4a), Imm(0xfe), Imm(0x82), Imm(0x39), Imm(0xf3), Imm(0xa9), Imm(0x7b), Imm(0x4e), Imm(0x8a), Imm(0x9e), Imm(0x7), Imm(0xfe), Imm(0xa), Imm(0xd), Imm(0xc4), Imm(0xcd), Imm(0x43), Imm(0xce), Imm(0x9), Imm(0xde), Imm(0xb), Imm(0xdd), Imm(0x42), Imm(0xfe), Imm(0x2), Imm(0x5d), Imm(0xc7), Imm(0xfd)};
    byte const L_GroundArea1[99] = {Imm(0x94), Imm(0x11), Imm(0xf), Imm(0x26), Imm(0xfe), Imm(0x10), Imm(0x28), Imm(0x94), Imm(0x65), Imm(0x15), Imm(0xeb), Imm(0x12), Imm(0xfa), Imm(0x41), Imm(0x4a), Imm(0x96), Imm(0x54), Imm(0x40), Imm(0xa4), Imm(0x42), Imm(0xb7), Imm(0x13), Imm(0xe9), Imm(0x19), Imm(0xf5), Imm(0x15), Imm(0x11), Imm(0x80), Imm(0x47), Imm(0x42), Imm(0x71), Imm(0x13), Imm(0x80), Imm(0x41), Imm(0x15), Imm(0x92), Imm(0x1b), Imm(0x1f), Imm(0x24), Imm(0x40), Imm(0x55), Imm(0x12), Imm(0x64), Imm(0x40), Imm(0x95), Imm(0x12), Imm(0xa4), Imm(0x40), Imm(0xd2), Imm(0x12), Imm(0xe1), Imm(0x40), Imm(0x13), Imm(0xc0), Imm(0x2c), Imm(0x17), Imm(0x2f), Imm(0x12), Imm(0x49), Imm(0x13), Imm(0x83), Imm(0x40), Imm(0x9f), Imm(0x14), Imm(0xa3), Imm(0x40), Imm(0x17), Imm(0x92), Imm(0x83), Imm(0x13), Imm(0x92), Imm(0x41), Imm(0xb9), Imm(0x14), Imm(0xc5), Imm(0x12), Imm(0xc8), Imm(0x40), Imm(0xd4), Imm(0x40), Imm(0x4b), Imm(0x92), Imm(0x78), Imm(0x1b), Imm(0x9c), Imm(0x94), Imm(0x9f), Imm(0x11), Imm(0xdf), Imm(0x14), Imm(0xfe), Imm(0x11), Imm(0x7d), Imm(0xc1), Imm(0x9e), Imm(0x42), Imm(0xcf), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea2[105] = {Imm(0x90), Imm(0xb1), Imm(0xf), Imm(0x26), Imm(0x29), Imm(0x91), Imm(0x7e), Imm(0x42), Imm(0xfe), Imm(0x40), Imm(0x28), Imm(0x92), Imm(0x4e), Imm(0x42), Imm(0x2e), Imm(0xc0), Imm(0x57), Imm(0x73), Imm(0xc3), Imm(0x25), Imm(0xc7), Imm(0x27), Imm(0x23), Imm(0x84), Imm(0x33), Imm(0x20), Imm(0x5c), Imm(0x1), Imm(0x77), Imm(0x63), Imm(0x88), Imm(0x62), Imm(0x99), Imm(0x61), Imm(0xaa), Imm(0x60), Imm(0xbc), Imm(0x1), Imm(0xee), Imm(0x42), Imm(0x4e), Imm(0xc0), Imm(0x69), Imm(0x11), Imm(0x7e), Imm(0x42), Imm(0xde), Imm(0x40), Imm(0xf8), Imm(0x62), Imm(0xe), Imm(0xc2), Imm(0xae), Imm(0x40), Imm(0xd7), Imm(0x63), Imm(0xe7), Imm(0x63), Imm(0x33), Imm(0xa7), Imm(0x37), Imm(0x27), Imm(0x43), Imm(0x4), Imm(0xcc), Imm(0x1), Imm(0xe7), Imm(0x73), Imm(0xc), Imm(0x81), Imm(0x3e), Imm(0x42), Imm(0xd), Imm(0xa), Imm(0x5e), Imm(0x40), Imm(0x88), Imm(0x72), Imm(0xbe), Imm(0x42), Imm(0xe7), Imm(0x87), Imm(0xfe), Imm(0x40), Imm(0x39), Imm(0xe1), Imm(0x4e), Imm(0x0), Imm(0x69), Imm(0x60), Imm(0x87), Imm(0x60), Imm(0xa5), Imm(0x60), Imm(0xc3), Imm(0x31), Imm(0xfe), Imm(0x31), Imm(0x6d), Imm(0xc1), Imm(0xbe), Imm(0x42), Imm(0xef), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea3[83] = {Imm(0x52), Imm(0x21), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x40), Imm(0x58), Imm(0xf2), Imm(0x93), Imm(0x1), Imm(0x97), Imm(0x0), Imm(0xc), Imm(0x81), Imm(0x97), Imm(0x40), Imm(0xa6), Imm(0x41), Imm(0xc7), Imm(0x40), Imm(0xd), Imm(0x4), Imm(0x3), Imm(0x1), Imm(0x7), Imm(0x1), Imm(0x23), Imm(0x1), Imm(0x27), Imm(0x1), Imm(0xec), Imm(0x3), Imm(0xac), Imm(0xf3), Imm(0xc3), Imm(0x3), Imm(0x78), Imm(0xe2), Imm(0x94), Imm(0x43), Imm(0x47), Imm(0xf3), Imm(0x74), Imm(0x43), Imm(0x47), Imm(0xfb), Imm(0x74), Imm(0x43), Imm(0x2c), Imm(0xf1), Imm(0x4c), Imm(0x63), Imm(0x47), Imm(0x0), Imm(0x57), Imm(0x21), Imm(0x5c), Imm(0x1), Imm(0x7c), Imm(0x72), Imm(0x39), Imm(0xf1), Imm(0xec), Imm(0x2), Imm(0x4c), Imm(0x81), Imm(0xd8), Imm(0x62), Imm(0xec), Imm(0x1), Imm(0xd), Imm(0xd), Imm(0xf), Imm(0x38), Imm(0xc7), Imm(0x7), Imm(0xed), Imm(0x4a), Imm(0x1d), Imm(0xc1), Imm(0x5f), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea4[143] = {Imm(0x54), Imm(0x21), Imm(0xf), Imm(0x26), Imm(0xa7), Imm(0x22), Imm(0x37), Imm(0xfb), Imm(0x73), Imm(0x20), Imm(0x83), Imm(0x7), Imm(0x87), Imm(0x2), Imm(0x93), Imm(0x20), Imm(0xc7), Imm(0x73), Imm(0x4), Imm(0xf1), Imm(0x6), Imm(0x31), Imm(0x39), Imm(0x71), Imm(0x59), Imm(0x71), Imm(0xe7), Imm(0x73), Imm(0x37), Imm(0xa0), Imm(0x47), Imm(0x4), Imm(0x86), Imm(0x7c), Imm(0xe5), Imm(0x71), Imm(0xe7), Imm(0x31), Imm(0x33), Imm(0xa4), Imm(0x39), Imm(0x71), Imm(0xa9), Imm(0x71), Imm(0xd3), Imm(0x23), Imm(0x8), Imm(0xf2), Imm(0x13), Imm(0x5), Imm(0x27), Imm(0x2), Imm(0x49), Imm(0x71), Imm(0x75), Imm(0x75), Imm(0xe8), Imm(0x72), Imm(0x67), Imm(0xf3), Imm(0x99), Imm(0x71), Imm(0xe7), Imm(0x20), Imm(0xf4), Imm(0x72), Imm(0xf7), Imm(0x31), Imm(0x17), Imm(0xa0), Imm(0x33), Imm(0x20), Imm(0x39), Imm(0x71), Imm(0x73), Imm(0x28), Imm(0xbc), Imm(0x5), Imm(0x39), Imm(0xf1), Imm(0x79), Imm(0x71), Imm(0xa6), Imm(0x21), Imm(0xc3), Imm(0x6), Imm(0xd3), Imm(0x20), Imm(0xdc), Imm(0x0), Imm(0xfc), Imm(0x0), Imm(0x7), Imm(0xa2), Imm(0x13), Imm(0x21), Imm(0x5f), Imm(0x32), Imm(0x8c), Imm(0x0), Imm(0x98), Imm(0x7a), Imm(0xc7), Imm(0x63), Imm(0xd9), Imm(0x61), Imm(0x3), Imm(0xa2), Imm(0x7), Imm(0x22), Imm(0x74), Imm(0x72), Imm(0x77), Imm(0x31), Imm(0xe7), Imm(0x73), Imm(0x39), Imm(0xf1), Imm(0x58), Imm(0x72), Imm(0x77), Imm(0x73), Imm(0xd8), Imm(0x72), Imm(0x7f), Imm(0xb1), Imm(0x97), Imm(0x73), Imm(0xb6), Imm(0x64), Imm(0xc5), Imm(0x65), Imm(0xd4), Imm(0x66), Imm(0xe3), Imm(0x67), Imm(0xf3), Imm(0x67), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea5[117] = {Imm(0x52), Imm(0x31), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x66), Imm(0x7), Imm(0x81), Imm(0x36), Imm(0x1), Imm(0x66), Imm(0x0), Imm(0xa7), Imm(0x22), Imm(0x8), Imm(0xf2), Imm(0x67), Imm(0x7b), Imm(0xdc), Imm(0x2), Imm(0x98), Imm(0xf2), Imm(0xd7), Imm(0x20), Imm(0x39), Imm(0xf1), Imm(0x9f), Imm(0x33), Imm(0xdc), Imm(0x27), Imm(0xdc), Imm(0x57), Imm(0x23), Imm(0x83), Imm(0x57), Imm(0x63), Imm(0x6c), Imm(0x51), Imm(0x87), Imm(0x63), Imm(0x99), Imm(0x61), Imm(0xa3), Imm(0x6), Imm(0xb3), Imm(0x21), Imm(0x77), Imm(0xf3), Imm(0xf3), Imm(0x21), Imm(0xf7), Imm(0x2a), Imm(0x13), Imm(0x81), Imm(0x23), Imm(0x22), Imm(0x53), Imm(0x0), Imm(0x63), Imm(0x22), Imm(0xe9), Imm(0xb), Imm(0xc), Imm(0x83), Imm(0x13), Imm(0x21), Imm(0x16), Imm(0x22), Imm(0x33), Imm(0x5), Imm(0x8f), Imm(0x35), Imm(0xec), Imm(0x1), Imm(0x63), Imm(0xa0), Imm(0x67), Imm(0x20), Imm(0x73), Imm(0x1), Imm(0x77), Imm(0x1), Imm(0x83), Imm(0x20), Imm(0x87), Imm(0x20), Imm(0xb3), Imm(0x20), Imm(0xb7), Imm(0x20), Imm(0xc3), Imm(0x1), Imm(0xc7), Imm(0x0), Imm(0xd3), Imm(0x20), Imm(0xd7), Imm(0x20), Imm(0x67), Imm(0xa0), Imm(0x77), Imm(0x7), Imm(0x87), Imm(0x22), Imm(0xe8), Imm(0x62), Imm(0xf5), Imm(0x65), Imm(0x1c), Imm(0x82), Imm(0x7f), Imm(0x38), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea6[101] = {Imm(0x50), Imm(0x21), Imm(0x7), Imm(0x81), Imm(0x47), Imm(0x24), Imm(0x57), Imm(0x0), Imm(0x63), Imm(0x1), Imm(0x77), Imm(0x1), Imm(0xc9), Imm(0x71), Imm(0x68), Imm(0xf2), Imm(0xe7), Imm(0x73), Imm(0x97), Imm(0xfb), Imm(0x6), Imm(0x83), Imm(0x5c), Imm(0x1), Imm(0xd7), Imm(0x22), Imm(0xe7), Imm(0x0), Imm(0x3), Imm(0xa7), Imm(0x6c), Imm(0x2), Imm(0xb3), Imm(0x22), Imm(0xe3), Imm(0x1), Imm(0xe7), Imm(0x7), Imm(0x47), Imm(0xa0), Imm(0x57), Imm(0x6), Imm(0xa7), Imm(0x1), Imm(0xd3), Imm(0x0), Imm(0xd7), Imm(0x1), Imm(0x7), Imm(0x81), Imm(0x67), Imm(0x20), Imm(0x93), Imm(0x22), Imm(0x3), Imm(0xa3), Imm(0x1c), Imm(0x61), Imm(0x17), Imm(0x21), Imm(0x6f), Imm(0x33), Imm(0xc7), Imm(0x63), Imm(0xd8), Imm(0x62), Imm(0xe9), Imm(0x61), Imm(0xfa), Imm(0x60), Imm(0x4f), Imm(0xb3), Imm(0x87), Imm(0x63), Imm(0x9c), Imm(0x1), Imm(0xb7), Imm(0x63), Imm(0xc8), Imm(0x62), Imm(0xd9), Imm(0x61), Imm(0xea), Imm(0x60), Imm(0x39), Imm(0xf1), Imm(0x87), Imm(0x21), Imm(0xa7), Imm(0x1), Imm(0xb7), Imm(0x20), Imm(0x39), Imm(0xf1), Imm(0x5f), Imm(0x38), Imm(0x6d), Imm(0xc1), Imm(0xaf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea7[85] = {Imm(0x90), Imm(0x11), Imm(0xf), Imm(0x26), Imm(0xfe), Imm(0x10), Imm(0x2a), Imm(0x93), Imm(0x87), Imm(0x17), Imm(0xa3), Imm(0x14), Imm(0xb2), Imm(0x42), Imm(0xa), Imm(0x92), Imm(0x19), Imm(0x40), Imm(0x36), Imm(0x14), Imm(0x50), Imm(0x41), Imm(0x82), Imm(0x16), Imm(0x2b), Imm(0x93), Imm(0x24), Imm(0x41), Imm(0xbb), Imm(0x14), Imm(0xb8), Imm(0x0), Imm(0xc2), Imm(0x43), Imm(0xc3), Imm(0x13), Imm(0x1b), Imm(0x94), Imm(0x67), Imm(0x12), Imm(0xc4), Imm(0x15), Imm(0x53), Imm(0xc1), Imm(0xd2), Imm(0x41), Imm(0x12), Imm(0xc1), Imm(0x29), Imm(0x13), Imm(0x85), Imm(0x17), Imm(0x1b), Imm(0x92), Imm(0x1a), Imm(0x42), Imm(0x47), Imm(0x13), Imm(0x83), Imm(0x41), Imm(0xa7), Imm(0x13), Imm(0xe), Imm(0x91), Imm(0xa7), Imm(0x63), Imm(0xb7), Imm(0x63), Imm(0xc5), Imm(0x65), Imm(0xd5), Imm(0x65), Imm(0xdd), Imm(0x4a), Imm(0xe3), Imm(0x67), Imm(0xf3), Imm(0x67), Imm(0x8d), Imm(0xc1), Imm(0xae), Imm(0x42), Imm(0xdf), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea8[133] = {Imm(0x90), Imm(0x11), Imm(0xf), Imm(0x26), Imm(0x6e), Imm(0x10), Imm(0x8b), Imm(0x17), Imm(0xaf), Imm(0x32), Imm(0xd8), Imm(0x62), Imm(0xe8), Imm(0x62), Imm(0xfc), Imm(0x3f), Imm(0xad), Imm(0xc8), Imm(0xf8), Imm(0x64), Imm(0xc), Imm(0xbe), Imm(0x43), Imm(0x43), Imm(0xf8), Imm(0x64), Imm(0xc), Imm(0xbf), Imm(0x73), Imm(0x40), Imm(0x84), Imm(0x40), Imm(0x93), Imm(0x40), Imm(0xa4), Imm(0x40), Imm(0xb3), Imm(0x40), Imm(0xf8), Imm(0x64), Imm(0x48), Imm(0xe4), Imm(0x5c), Imm(0x39), Imm(0x83), Imm(0x40), Imm(0x92), Imm(0x41), Imm(0xb3), Imm(0x40), Imm(0xf8), Imm(0x64), Imm(0x48), Imm(0xe4), Imm(0x5c), Imm(0x39), Imm(0xf8), Imm(0x64), Imm(0x13), Imm(0xc2), Imm(0x37), Imm(0x65), Imm(0x4c), Imm(0x24), Imm(0x63), Imm(0x0), Imm(0x97), Imm(0x65), Imm(0xc3), Imm(0x42), Imm(0xb), Imm(0x97), Imm(0xac), Imm(0x32), Imm(0xf8), Imm(0x64), Imm(0xc), Imm(0xbe), Imm(0x53), Imm(0x45), Imm(0x9d), Imm(0x48), Imm(0xf8), Imm(0x64), Imm(0x2a), Imm(0xe2), Imm(0x3c), Imm(0x47), Imm(0x56), Imm(0x43), Imm(0xba), Imm(0x62), Imm(0xf8), Imm(0x64), Imm(0xc), Imm(0xb7), Imm(0x88), Imm(0x64), Imm(0xbc), Imm(0x31), Imm(0xd4), Imm(0x45), Imm(0xfc), Imm(0x31), Imm(0x3c), Imm(0xb1), Imm(0x78), Imm(0x64), Imm(0x8c), Imm(0x38), Imm(0xb), Imm(0x9c), Imm(0x1a), Imm(0x33), Imm(0x18), Imm(0x61), Imm(0x28), Imm(0x61), Imm(0x39), Imm(0x60), Imm(0x5d), Imm(0x4a), Imm(0xee), Imm(0x11), Imm(0xf), Imm(0xb8), Imm(0x1d), Imm(0xc1), Imm(0x3e), Imm(0x42), Imm(0x6f), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea9[101] = {Imm(0x52), Imm(0x31), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x40), Imm(0xf7), Imm(0x20), Imm(0x7), Imm(0x84), Imm(0x17), Imm(0x20), Imm(0x4f), Imm(0x34), Imm(0xc3), Imm(0x3), Imm(0xc7), Imm(0x2), Imm(0xd3), Imm(0x22), Imm(0x27), Imm(0xe3), Imm(0x39), Imm(0x61), Imm(0xe7), Imm(0x73), Imm(0x5c), Imm(0xe4), Imm(0x57), Imm(0x0), Imm(0x6c), Imm(0x73), Imm(0x47), Imm(0xa0), Imm(0x53), Imm(0x6), Imm(0x63), Imm(0x22), Imm(0xa7), Imm(0x73), Imm(0xfc), Imm(0x73), Imm(0x13), Imm(0xa1), Imm(0x33), Imm(0x5), Imm(0x43), Imm(0x21), Imm(0x5c), Imm(0x72), Imm(0xc3), Imm(0x23), Imm(0xcc), Imm(0x3), Imm(0x77), Imm(0xfb), Imm(0xac), Imm(0x2), Imm(0x39), Imm(0xf1), Imm(0xa7), Imm(0x73), Imm(0xd3), Imm(0x4), Imm(0xe8), Imm(0x72), Imm(0xe3), Imm(0x22), Imm(0x26), Imm(0xf4), Imm(0xbc), Imm(0x2), Imm(0x8c), Imm(0x81), Imm(0xa8), Imm(0x62), Imm(0x17), Imm(0x87), Imm(0x43), Imm(0x24), Imm(0xa7), Imm(0x1), Imm(0xc3), Imm(0x4), Imm(0x8), Imm(0xf2), Imm(0x97), Imm(0x21), Imm(0xa3), Imm(0x2), Imm(0xc9), Imm(0xb), Imm(0xe1), Imm(0x69), Imm(0xf1), Imm(0x69), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea10[9] = {Imm(0x38), Imm(0x11), Imm(0xf), Imm(0x26), Imm(0xad), Imm(0x40), Imm(0x3d), Imm(0xc7), Imm(0xfd)};
    byte const L_GroundArea11[63] = {Imm(0x95), Imm(0xb1), Imm(0xf), Imm(0x26), Imm(0xd), Imm(0x2), Imm(0xc8), Imm(0x72), Imm(0x1c), Imm(0x81), Imm(0x38), Imm(0x72), Imm(0xd), Imm(0x5), Imm(0x97), Imm(0x34), Imm(0x98), Imm(0x62), Imm(0xa3), Imm(0x20), Imm(0xb3), Imm(0x6), Imm(0xc3), Imm(0x20), Imm(0xcc), Imm(0x3), Imm(0xf9), Imm(0x91), Imm(0x2c), Imm(0x81), Imm(0x48), Imm(0x62), Imm(0xd), Imm(0x9), Imm(0x37), Imm(0x63), Imm(0x47), Imm(0x3), Imm(0x57), Imm(0x21), Imm(0x8c), Imm(0x2), Imm(0xc5), Imm(0x79), Imm(0xc7), Imm(0x31), Imm(0xf9), Imm(0x11), Imm(0x39), Imm(0xf1), Imm(0xa9), Imm(0x11), Imm(0x6f), Imm(0xb4), Imm(0xd3), Imm(0x65), Imm(0xe3), Imm(0x65), Imm(0x7d), Imm(0xc1), Imm(0xbf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea12[21] = {Imm(0x0), Imm(0xc1), Imm(0x4c), Imm(0x0), Imm(0xf4), Imm(0x4f), Imm(0xd), Imm(0x2), Imm(0x2), Imm(0x42), Imm(0x43), Imm(0x4f), Imm(0x52), Imm(0xc2), Imm(0xde), Imm(0x0), Imm(0x5a), Imm(0xc2), Imm(0x4d), Imm(0xc7), Imm(0xfd)};
    byte const L_GroundArea13[103] = {Imm(0x90), Imm(0x51), Imm(0xf), Imm(0x26), Imm(0xee), Imm(0x10), Imm(0xb), Imm(0x94), Imm(0x33), Imm(0x14), Imm(0x42), Imm(0x42), Imm(0x77), Imm(0x16), Imm(0x86), Imm(0x44), Imm(0x2), Imm(0x92), Imm(0x4a), Imm(0x16), Imm(0x69), Imm(0x42), Imm(0x73), Imm(0x14), Imm(0xb0), Imm(0x0), Imm(0xc7), Imm(0x12), Imm(0x5), Imm(0xc0), Imm(0x1c), Imm(0x17), Imm(0x1f), Imm(0x11), Imm(0x36), Imm(0x12), Imm(0x8f), Imm(0x14), Imm(0x91), Imm(0x40), Imm(0x1b), Imm(0x94), Imm(0x35), Imm(0x12), Imm(0x34), Imm(0x42), Imm(0x60), Imm(0x42), Imm(0x61), Imm(0x12), Imm(0x87), Imm(0x12), Imm(0x96), Imm(0x40), Imm(0xa3), Imm(0x14), Imm(0x1c), Imm(0x98), Imm(0x1f), Imm(0x11), Imm(0x47), Imm(0x12), Imm(0x9f), Imm(0x15), Imm(0xcc), Imm(0x15), Imm(0xcf), Imm(0x11), Imm(0x5), Imm(0xc0), Imm(0x1f), Imm(0x15), Imm(0x39), Imm(0x12), Imm(0x7c), Imm(0x16), Imm(0x7f), Imm(0x11), Imm(0x82), Imm(0x40), Imm(0x98), Imm(0x12), Imm(0xdf), Imm(0x15), Imm(0x16), Imm(0xc4), Imm(0x17), Imm(0x14), Imm(0x54), Imm(0x12), Imm(0x9b), Imm(0x16), Imm(0x28), Imm(0x94), Imm(0xce), Imm(0x1), Imm(0x3d), Imm(0xc1), Imm(0x5e), Imm(0x42), Imm(0x8f), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea14[101] = {Imm(0x97), Imm(0x11), Imm(0xf), Imm(0x26), Imm(0xfe), Imm(0x10), Imm(0x2b), Imm(0x92), Imm(0x57), Imm(0x12), Imm(0x8b), Imm(0x12), Imm(0xc0), Imm(0x41), Imm(0xf7), Imm(0x13), Imm(0x5b), Imm(0x92), Imm(0x69), Imm(0xb), Imm(0xbb), Imm(0x12), Imm(0xb2), Imm(0x46), Imm(0x19), Imm(0x93), Imm(0x71), Imm(0x0), Imm(0x17), Imm(0x94), Imm(0x7c), Imm(0x14), Imm(0x7f), Imm(0x11), Imm(0x93), Imm(0x41), Imm(0xbf), Imm(0x15), Imm(0xfc), Imm(0x13), Imm(0xff), Imm(0x11), Imm(0x2f), Imm(0x95), Imm(0x50), Imm(0x42), Imm(0x51), Imm(0x12), Imm(0x58), Imm(0x14), Imm(0xa6), Imm(0x12), Imm(0xdb), Imm(0x12), Imm(0x1b), Imm(0x93), Imm(0x46), Imm(0x43), Imm(0x7b), Imm(0x12), Imm(0x8d), Imm(0x49), Imm(0xb7), Imm(0x14), Imm(0x1b), Imm(0x94), Imm(0x49), Imm(0xb), Imm(0xbb), Imm(0x12), Imm(0xfc), Imm(0x13), Imm(0xff), Imm(0x12), Imm(0x3), Imm(0xc1), Imm(0x2f), Imm(0x15), Imm(0x43), Imm(0x12), Imm(0x4b), Imm(0x13), Imm(0x77), Imm(0x13), Imm(0x9d), Imm(0x4a), Imm(0x15), Imm(0xc1), Imm(0xa1), Imm(0x41), Imm(0xc3), Imm(0x12), Imm(0xfe), Imm(0x1), Imm(0x7d), Imm(0xc1), Imm(0x9e), Imm(0x42), Imm(0xcf), Imm(0x20), Imm(0xfd)};
    byte const L_GroundArea15[115] = {Imm(0x52), Imm(0x21), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x44), Imm(0xc), Imm(0xf1), Imm(0x4c), Imm(0x1), Imm(0xaa), Imm(0x35), Imm(0xd9), Imm(0x34), Imm(0xee), Imm(0x20), Imm(0x8), Imm(0xb3), Imm(0x37), Imm(0x32), Imm(0x43), Imm(0x4), Imm(0x4e), Imm(0x21), Imm(0x53), Imm(0x20), Imm(0x7c), Imm(0x1), Imm(0x97), Imm(0x21), Imm(0xb7), Imm(0x7), Imm(0x9c), Imm(0x81), Imm(0xe7), Imm(0x42), Imm(0x5f), Imm(0xb3), Imm(0x97), Imm(0x63), Imm(0xac), Imm(0x2), Imm(0xc5), Imm(0x41), Imm(0x49), Imm(0xe0), Imm(0x58), Imm(0x61), Imm(0x76), Imm(0x64), Imm(0x85), Imm(0x65), Imm(0x94), Imm(0x66), Imm(0xa4), Imm(0x22), Imm(0xa6), Imm(0x3), Imm(0xc8), Imm(0x22), Imm(0xdc), Imm(0x2), Imm(0x68), Imm(0xf2), Imm(0x96), Imm(0x42), Imm(0x13), Imm(0x82), Imm(0x17), Imm(0x2), Imm(0xaf), Imm(0x34), Imm(0xf6), Imm(0x21), Imm(0xfc), Imm(0x6), Imm(0x26), Imm(0x80), Imm(0x2a), Imm(0x24), Imm(0x36), Imm(0x1), Imm(0x8c), Imm(0x0), Imm(0xff), Imm(0x35), Imm(0x4e), Imm(0xa0), Imm(0x55), Imm(0x21), Imm(0x77), Imm(0x20), Imm(0x87), Imm(0x7), Imm(0x89), Imm(0x22), Imm(0xae), Imm(0x21), Imm(0x4c), Imm(0x82), Imm(0x9f), Imm(0x34), Imm(0xec), Imm(0x1), Imm(0x3), Imm(0xe7), Imm(0x13), Imm(0x67), Imm(0x8d), Imm(0x4a), Imm(0xad), Imm(0x41), Imm(0xf), Imm(0xa6), Imm(0xfd)};
    byte const L_GroundArea16[49] = {Imm(0x10), Imm(0x51), Imm(0x4c), Imm(0x0), Imm(0xc7), Imm(0x12), Imm(0xc6), Imm(0x42), Imm(0x3), Imm(0x92), Imm(0x2), Imm(0x42), Imm(0x29), Imm(0x12), Imm(0x63), Imm(0x12), Imm(0x62), Imm(0x42), Imm(0x69), Imm(0x14), Imm(0xa5), Imm(0x12), Imm(0xa4), Imm(0x42), Imm(0xe2), Imm(0x14), Imm(0xe1), Imm(0x44), Imm(0xf8), Imm(0x16), Imm(0x37), Imm(0xc1), Imm(0x8f), Imm(0x38), Imm(0x2), Imm(0xbb), Imm(0x28), Imm(0x7a), Imm(0x68), Imm(0x7a), Imm(0xa8), Imm(0x7a), Imm(0xe0), Imm(0x6a), Imm(0xf0), Imm(0x6a), Imm(0x6d), Imm(0xc5), Imm(0xfd)};
    byte const L_GroundArea17[147] = {Imm(0x92), Imm(0x31), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x40), Imm(0xd), Imm(0x2), Imm(0x37), Imm(0x73), Imm(0xec), Imm(0x0), Imm(0xc), Imm(0x80), Imm(0x3c), Imm(0x0), Imm(0x6c), Imm(0x0), Imm(0x9c), Imm(0x0), Imm(0x6), Imm(0xc0), Imm(0xc7), Imm(0x73), Imm(0x6), Imm(0x83), Imm(0x28), Imm(0x72), Imm(0x96), Imm(0x40), Imm(0xe7), Imm(0x73), Imm(0x26), Imm(0xc0), Imm(0x87), Imm(0x7b), Imm(0xd2), Imm(0x41), Imm(0x39), Imm(0xf1), Imm(0xc8), Imm(0xf2), Imm(0x97), Imm(0xe3), Imm(0xa3), Imm(0x23), Imm(0xe7), Imm(0x2), Imm(0xe3), Imm(0x7), Imm(0xf3), Imm(0x22), Imm(0x37), Imm(0xe3), Imm(0x9c), Imm(0x0), Imm(0xbc), Imm(0x0), Imm(0xec), Imm(0x0), Imm(0xc), Imm(0x80), Imm(0x3c), Imm(0x0), Imm(0x86), Imm(0x21), Imm(0xa6), Imm(0x6), Imm(0xb6), Imm(0x24), Imm(0x5c), Imm(0x80), Imm(0x7c), Imm(0x0), Imm(0x9c), Imm(0x0), Imm(0x29), Imm(0xe1), Imm(0xdc), Imm(0x5), Imm(0xf6), Imm(0x41), Imm(0xdc), Imm(0x80), Imm(0xe8), Imm(0x72), Imm(0xc), Imm(0x81), Imm(0x27), Imm(0x73), Imm(0x4c), Imm(0x1), Imm(0x66), Imm(0x74), Imm(0xd), Imm(0x11), Imm(0x3f), Imm(0x35), Imm(0xb6), Imm(0x41), Imm(0x2c), Imm(0x82), Imm(0x36), Imm(0x40), Imm(0x7c), Imm(0x2), Imm(0x86), Imm(0x40), Imm(0xf9), Imm(0x61), Imm(0x39), Imm(0xe1), Imm(0xac), Imm(0x4), Imm(0xc6), Imm(0x41), Imm(0xc), Imm(0x83), Imm(0x16), Imm(0x41), Imm(0x88), Imm(0xf2), Imm(0x39), Imm(0xf1), Imm(0x7c), Imm(0x0), Imm(0x89), Imm(0x61), Imm(0x9c), Imm(0x0), Imm(0xa7), Imm(0x63), Imm(0xbc), Imm(0x0), Imm(0xc5), Imm(0x65), Imm(0xdc), Imm(0x0), Imm(0xe3), Imm(0x67), Imm(0xf3), Imm(0x67), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea18[115] = {Imm(0x55), Imm(0xb1), Imm(0xf), Imm(0x26), Imm(0xcf), Imm(0x33), Imm(0x7), Imm(0xb2), Imm(0x15), Imm(0x11), Imm(0x52), Imm(0x42), Imm(0x99), Imm(0xb), Imm(0xac), Imm(0x2), Imm(0xd3), Imm(0x24), Imm(0xd6), Imm(0x42), Imm(0xd7), Imm(0x25), Imm(0x23), Imm(0x84), Imm(0xcf), Imm(0x33), Imm(0x7), Imm(0xe3), Imm(0x19), Imm(0x61), Imm(0x78), Imm(0x7a), Imm(0xef), Imm(0x33), Imm(0x2c), Imm(0x81), Imm(0x46), Imm(0x64), Imm(0x55), Imm(0x65), Imm(0x65), Imm(0x65), Imm(0xec), Imm(0x74), Imm(0x47), Imm(0x82), Imm(0x53), Imm(0x5), Imm(0x63), Imm(0x21), Imm(0x62), Imm(0x41), Imm(0x96), Imm(0x22), Imm(0x9a), Imm(0x41), Imm(0xcc), Imm(0x3), Imm(0xb9), Imm(0x91), Imm(0x39), Imm(0xf1), Imm(0x63), Imm(0x26), Imm(0x67), Imm(0x27), Imm(0xd3), Imm(0x6), Imm(0xfc), Imm(0x1), Imm(0x18), Imm(0xe2), Imm(0xd9), Imm(0x7), Imm(0xe9), Imm(0x4), Imm(0xc), Imm(0x86), Imm(0x37), Imm(0x22), Imm(0x93), Imm(0x24), Imm(0x87), Imm(0x84), Imm(0xac), Imm(0x2), Imm(0xc2), Imm(0x41), Imm(0xc3), Imm(0x23), Imm(0xd9), Imm(0x71), Imm(0xfc), Imm(0x1), Imm(0x7f), Imm(0xb1), Imm(0x9c), Imm(0x0), Imm(0xa7), Imm(0x63), Imm(0xb6), Imm(0x64), Imm(0xcc), Imm(0x0), Imm(0xd4), Imm(0x66), Imm(0xe3), Imm(0x67), Imm(0xf3), Imm(0x67), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea19[121] = {Imm(0x50), Imm(0xb1), Imm(0xf), Imm(0x26), Imm(0xfc), Imm(0x0), Imm(0x1f), Imm(0xb3), Imm(0x5c), Imm(0x0), Imm(0x65), Imm(0x65), Imm(0x74), Imm(0x66), Imm(0x83), Imm(0x67), Imm(0x93), Imm(0x67), Imm(0xdc), Imm(0x73), Imm(0x4c), Imm(0x80), Imm(0xb3), Imm(0x20), Imm(0xc9), Imm(0xb), Imm(0xc3), Imm(0x8), Imm(0xd3), Imm(0x2f), Imm(0xdc), Imm(0x0), Imm(0x2c), Imm(0x80), Imm(0x4c), Imm(0x0), Imm(0x8c), Imm(0x0), Imm(0xd3), Imm(0x2e), Imm(0xed), Imm(0x4a), Imm(0xfc), Imm(0x0), Imm(0xd7), Imm(0xa1), Imm(0xec), Imm(0x1), Imm(0x4c), Imm(0x80), Imm(0x59), Imm(0x11), Imm(0xd8), Imm(0x11), Imm(0xda), Imm(0x10), Imm(0x37), Imm(0xa0), Imm(0x47), Imm(0x4), Imm(0x99), Imm(0x11), Imm(0xe7), Imm(0x21), Imm(0x3a), Imm(0x90), Imm(0x67), Imm(0x20), Imm(0x76), Imm(0x10), Imm(0x77), Imm(0x60), Imm(0x87), Imm(0x7), Imm(0xd8), Imm(0x12), Imm(0x39), Imm(0xf1), Imm(0xac), Imm(0x0), Imm(0xe9), Imm(0x71), Imm(0xc), Imm(0x80), Imm(0x2c), Imm(0x0), Imm(0x4c), Imm(0x5), Imm(0xc7), Imm(0x7b), Imm(0x39), Imm(0xf1), Imm(0xec), Imm(0x0), Imm(0xf9), Imm(0x11), Imm(0xc), Imm(0x82), Imm(0x6f), Imm(0x34), Imm(0xf8), Imm(0x11), Imm(0xfa), Imm(0x10), Imm(0x7f), Imm(0xb2), Imm(0xac), Imm(0x0), Imm(0xb6), Imm(0x64), Imm(0xcc), Imm(0x1), Imm(0xe3), Imm(0x67), Imm(0xf3), Imm(0x67), Imm(0x8d), Imm(0xc1), Imm(0xcf), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea20[89] = {Imm(0x52), Imm(0xb1), Imm(0xf), Imm(0x20), Imm(0x6e), Imm(0x45), Imm(0x39), Imm(0x91), Imm(0xb3), Imm(0x4), Imm(0xc3), Imm(0x21), Imm(0xc8), Imm(0x11), Imm(0xca), Imm(0x10), Imm(0x49), Imm(0x91), Imm(0x7c), Imm(0x73), Imm(0xe8), Imm(0x12), Imm(0x88), Imm(0x91), Imm(0x8a), Imm(0x10), Imm(0xe7), Imm(0x21), Imm(0x5), Imm(0x91), Imm(0x7), Imm(0x30), Imm(0x17), Imm(0x7), Imm(0x27), Imm(0x20), Imm(0x49), Imm(0x11), Imm(0x9c), Imm(0x1), Imm(0xc8), Imm(0x72), Imm(0x23), Imm(0xa6), Imm(0x27), Imm(0x26), Imm(0xd3), Imm(0x3), Imm(0xd8), Imm(0x7a), Imm(0x89), Imm(0x91), Imm(0xd8), Imm(0x72), Imm(0x39), Imm(0xf1), Imm(0xa9), Imm(0x11), Imm(0x9), Imm(0xf1), Imm(0x63), Imm(0x24), Imm(0x67), Imm(0x24), Imm(0xd8), Imm(0x62), Imm(0x28), Imm(0x91), Imm(0x2a), Imm(0x10), Imm(0x56), Imm(0x21), Imm(0x70), Imm(0x4), Imm(0x79), Imm(0xb), Imm(0x8c), Imm(0x0), Imm(0x94), Imm(0x21), Imm(0x9f), Imm(0x35), Imm(0x2f), Imm(0xb8), Imm(0x3d), Imm(0xc1), Imm(0x7f), Imm(0x26), Imm(0xfd)};
    byte const L_GroundArea21[43] = {Imm(0x6), Imm(0xc1), Imm(0x4c), Imm(0x0), Imm(0xf4), Imm(0x4f), Imm(0xd), Imm(0x2), Imm(0x6), Imm(0x20), Imm(0x24), Imm(0x4f), Imm(0x35), Imm(0xa0), Imm(0x36), Imm(0x20), Imm(0x53), Imm(0x46), Imm(0xd5), Imm(0x20), Imm(0xd6), Imm(0x20), Imm(0x34), Imm(0xa1), Imm(0x73), Imm(0x49), Imm(0x74), Imm(0x20), Imm(0x94), Imm(0x20), Imm(0xb4), Imm(0x20), Imm(0xd4), Imm(0x20), Imm(0xf4), Imm(0x20), Imm(0x2e), Imm(0x80), Imm(0x59), Imm(0x42), Imm(0x4d), Imm(0xc7), Imm(0xfd)};
    byte const L_GroundArea22[51] = {Imm(0x96), Imm(0x31), Imm(0xf), Imm(0x26), Imm(0xd), Imm(0x3), Imm(0x1a), Imm(0x60), Imm(0x77), Imm(0x42), Imm(0xc4), Imm(0x0), Imm(0xc8), Imm(0x62), Imm(0xb9), Imm(0xe1), Imm(0xd3), Imm(0x6), Imm(0xd7), Imm(0x7), Imm(0xf9), Imm(0x61), Imm(0xc), Imm(0x81), Imm(0x4e), Imm(0xb1), Imm(0x8e), Imm(0xb1), Imm(0xbc), Imm(0x1), Imm(0xe4), Imm(0x50), Imm(0xe9), Imm(0x61), Imm(0xc), Imm(0x81), Imm(0xd), Imm(0xa), Imm(0x84), Imm(0x43), Imm(0x98), Imm(0x72), Imm(0xd), Imm(0xc), Imm(0xf), Imm(0x38), Imm(0x1d), Imm(0xc1), Imm(0x5f), Imm(0x26), Imm(0xfd)};
    byte const L_UndergroundArea1[163] = {Imm(0x48), Imm(0xf), Imm(0xe), Imm(0x1), Imm(0x5e), Imm(0x2), Imm(0xa7), Imm(0x0), Imm(0xbc), Imm(0x73), Imm(0x1a), Imm(0xe0), Imm(0x39), Imm(0x61), Imm(0x58), Imm(0x62), Imm(0x77), Imm(0x63), Imm(0x97), Imm(0x63), Imm(0xb8), Imm(0x62), Imm(0xd6), Imm(0x7), Imm(0xf8), Imm(0x62), Imm(0x19), Imm(0xe1), Imm(0x75), Imm(0x52), Imm(0x86), Imm(0x40), Imm(0x87), Imm(0x50), Imm(0x95), Imm(0x52), Imm(0x93), Imm(0x43), Imm(0xa5), Imm(0x21), Imm(0xc5), Imm(0x52), Imm(0xd6), Imm(0x40), Imm(0xd7), Imm(0x20), Imm(0xe5), Imm(0x6), Imm(0xe6), Imm(0x51), Imm(0x3e), Imm(0x8d), Imm(0x5e), Imm(0x3), Imm(0x67), Imm(0x52), Imm(0x77), Imm(0x52), Imm(0x7e), Imm(0x2), Imm(0x9e), Imm(0x3), Imm(0xa6), Imm(0x43), Imm(0xa7), Imm(0x23), Imm(0xde), Imm(0x5), Imm(0xfe), Imm(0x2), Imm(0x1e), Imm(0x83), Imm(0x33), Imm(0x54), Imm(0x46), Imm(0x40), Imm(0x47), Imm(0x21), Imm(0x56), Imm(0x4), Imm(0x5e), Imm(0x2), Imm(0x83), Imm(0x54), Imm(0x93), Imm(0x52), Imm(0x96), Imm(0x7), Imm(0x97), Imm(0x50), Imm(0xbe), Imm(0x3), Imm(0xc7), Imm(0x23), Imm(0xfe), Imm(0x2), Imm(0xc), Imm(0x82), Imm(0x43), Imm(0x45), Imm(0x45), Imm(0x24), Imm(0x46), Imm(0x24), Imm(0x90), Imm(0x8), Imm(0x95), Imm(0x51), Imm(0x78), Imm(0xfa), Imm(0xd7), Imm(0x73), Imm(0x39), Imm(0xf1), Imm(0x8c), Imm(0x1), Imm(0xa8), Imm(0x52), Imm(0xb8), Imm(0x52), Imm(0xcc), Imm(0x1), Imm(0x5f), Imm(0xb3), Imm(0x97), Imm(0x63), Imm(0x9e), Imm(0x0), Imm(0xe), Imm(0x81), Imm(0x16), Imm(0x24), Imm(0x66), Imm(0x4), Imm(0x8e), Imm(0x0), Imm(0xfe), Imm(0x1), Imm(0x8), Imm(0xd2), Imm(0xe), Imm(0x6), Imm(0x6f), Imm(0x47), Imm(0x9e), Imm(0xf), Imm(0xe), Imm(0x82), Imm(0x2d), Imm(0x47), Imm(0x28), Imm(0x7a), Imm(0x68), Imm(0x7a), Imm(0xa8), Imm(0x7a), Imm(0xae), Imm(0x1), Imm(0xde), Imm(0xf), Imm(0x6d), Imm(0xc5), Imm(0xfd)};
    byte const L_UndergroundArea2[161] = {Imm(0x48), Imm(0xf), Imm(0xe), Imm(0x1), Imm(0x5e), Imm(0x2), Imm(0xbc), Imm(0x1), Imm(0xfc), Imm(0x1), Imm(0x2c), Imm(0x82), Imm(0x41), Imm(0x52), Imm(0x4e), Imm(0x4), Imm(0x67), Imm(0x25), Imm(0x68), Imm(0x24), Imm(0x69), Imm(0x24), Imm(0xba), Imm(0x42), Imm(0xc7), Imm(0x4), Imm(0xde), Imm(0xb), Imm(0xb2), Imm(0x87), Imm(0xfe), Imm(0x2), Imm(0x2c), Imm(0xe1), Imm(0x2c), Imm(0x71), Imm(0x67), Imm(0x1), Imm(0x77), Imm(0x0), Imm(0x87), Imm(0x1), Imm(0x8e), Imm(0x0), Imm(0xee), Imm(0x1), Imm(0xf6), Imm(0x2), Imm(0x3), Imm(0x85), Imm(0x5), Imm(0x2), Imm(0x13), Imm(0x21), Imm(0x16), Imm(0x2), Imm(0x27), Imm(0x2), Imm(0x2e), Imm(0x2), Imm(0x88), Imm(0x72), Imm(0xc7), Imm(0x20), Imm(0xd7), Imm(0x7), Imm(0xe4), Imm(0x76), Imm(0x7), Imm(0xa0), Imm(0x17), Imm(0x6), Imm(0x48), Imm(0x7a), Imm(0x76), Imm(0x20), Imm(0x98), Imm(0x72), Imm(0x79), Imm(0xe1), Imm(0x88), Imm(0x62), Imm(0x9c), Imm(0x1), Imm(0xb7), Imm(0x73), Imm(0xdc), Imm(0x1), Imm(0xf8), Imm(0x62), Imm(0xfe), Imm(0x1), Imm(0x8), Imm(0xe2), Imm(0xe), Imm(0x0), Imm(0x6e), Imm(0x2), Imm(0x73), Imm(0x20), Imm(0x77), Imm(0x23), Imm(0x83), Imm(0x4), Imm(0x93), Imm(0x20), Imm(0xae), Imm(0x0), Imm(0xfe), Imm(0xa), Imm(0xe), Imm(0x82), Imm(0x39), Imm(0x71), Imm(0xa8), Imm(0x72), Imm(0xe7), Imm(0x73), Imm(0xc), Imm(0x81), Imm(0x8f), Imm(0x32), Imm(0xae), Imm(0x0), Imm(0xfe), Imm(0x4), Imm(0x4), Imm(0xd1), Imm(0x17), Imm(0x4), Imm(0x26), Imm(0x49), Imm(0x27), Imm(0x29), Imm(0xdf), Imm(0x33), Imm(0xfe), Imm(0x2), Imm(0x44), Imm(0xf6), Imm(0x7c), Imm(0x1), Imm(0x8e), Imm(0x6), Imm(0xbf), Imm(0x47), Imm(0xee), Imm(0xf), Imm(0x4d), Imm(0xc7), Imm(0xe), Imm(0x82), Imm(0x68), Imm(0x7a), Imm(0xae), Imm(0x1), Imm(0xde), Imm(0xf), Imm(0x6d), Imm(0xc5), Imm(0xfd)};
    byte const L_UndergroundArea3[141] = {Imm(0x48), Imm(0x1), Imm(0xe), Imm(0x1), Imm(0x0), Imm(0x5a), Imm(0x3e), Imm(0x6), Imm(0x45), Imm(0x46), Imm(0x47), Imm(0x46), Imm(0x53), Imm(0x44), Imm(0xae), Imm(0x1), Imm(0xdf), Imm(0x4a), Imm(0x4d), Imm(0xc7), Imm(0xe), Imm(0x81), Imm(0x0), Imm(0x5a), Imm(0x2e), Imm(0x4), Imm(0x37), Imm(0x28), Imm(0x3a), Imm(0x48), Imm(0x46), Imm(0x47), Imm(0xc7), Imm(0x7), Imm(0xce), Imm(0xf), Imm(0xdf), Imm(0x4a), Imm(0x4d), Imm(0xc7), Imm(0xe), Imm(0x81), Imm(0x0), Imm(0x5a), Imm(0x33), Imm(0x53), Imm(0x43), Imm(0x51), Imm(0x46), Imm(0x40), Imm(0x47), Imm(0x50), Imm(0x53), Imm(0x4), Imm(0x55), Imm(0x40), Imm(0x56), Imm(0x50), Imm(0x62), Imm(0x43), Imm(0x64), Imm(0x40), Imm(0x65), Imm(0x50), Imm(0x71), Imm(0x41), Imm(0x73), Imm(0x51), Imm(0x83), Imm(0x51), Imm(0x94), Imm(0x40), Imm(0x95), Imm(0x50), Imm(0xa3), Imm(0x50), Imm(0xa5), Imm(0x40), Imm(0xa6), Imm(0x50), Imm(0xb3), Imm(0x51), Imm(0xb6), Imm(0x40), Imm(0xb7), Imm(0x50), Imm(0xc3), Imm(0x53), Imm(0xdf), Imm(0x4a), Imm(0x4d), Imm(0xc7), Imm(0xe), Imm(0x81), Imm(0x0), Imm(0x5a), Imm(0x2e), Imm(0x2), Imm(0x36), Imm(0x47), Imm(0x37), Imm(0x52), Imm(0x3a), Imm(0x49), Imm(0x47), Imm(0x25), Imm(0xa7), Imm(0x52), Imm(0xd7), Imm(0x4), Imm(0xdf), Imm(0x4a), Imm(0x4d), Imm(0xc7), Imm(0xe), Imm(0x81), Imm(0x0), Imm(0x5a), Imm(0x3e), Imm(0x2), Imm(0x44), Imm(0x51), Imm(0x53), Imm(0x44), Imm(0x54), Imm(0x44), Imm(0x55), Imm(0x24), Imm(0xa1), Imm(0x54), Imm(0xae), Imm(0x1), Imm(0xb4), Imm(0x21), Imm(0xdf), Imm(0x4a), Imm(0xe5), Imm(0x7), Imm(0x4d), Imm(0xc7), Imm(0xfd)};
    byte const L_WaterArea1[63] = {Imm(0x41), Imm(0x1), Imm(0xb4), Imm(0x34), Imm(0xc8), Imm(0x52), Imm(0xf2), Imm(0x51), Imm(0x47), Imm(0xd3), Imm(0x6c), Imm(0x3), Imm(0x65), Imm(0x49), Imm(0x9e), Imm(0x7), Imm(0xbe), Imm(0x1), Imm(0xcc), Imm(0x3), Imm(0xfe), Imm(0x7), Imm(0xd), Imm(0xc9), Imm(0x1e), Imm(0x1), Imm(0x6c), Imm(0x1), Imm(0x62), Imm(0x35), Imm(0x63), Imm(0x53), Imm(0x8a), Imm(0x41), Imm(0xac), Imm(0x1), Imm(0xb3), Imm(0x53), Imm(0xe9), Imm(0x51), Imm(0x26), Imm(0xc3), Imm(0x27), Imm(0x33), Imm(0x63), Imm(0x43), Imm(0x64), Imm(0x33), Imm(0xba), Imm(0x60), Imm(0xc9), Imm(0x61), Imm(0xce), Imm(0xb), Imm(0xe5), Imm(0x9), Imm(0xee), Imm(0xf), Imm(0x7d), Imm(0xca), Imm(0x7d), Imm(0x47), Imm(0xfd)};
    byte const L_WaterArea2[123] = {Imm(0x41), Imm(0x1), Imm(0xb8), Imm(0x52), Imm(0xea), Imm(0x41), Imm(0x27), Imm(0xb2), Imm(0xb3), Imm(0x42), Imm(0x16), Imm(0xd4), Imm(0x4a), Imm(0x42), Imm(0xa5), Imm(0x51), Imm(0xa7), Imm(0x31), Imm(0x27), Imm(0xd3), Imm(0x8), Imm(0xe2), Imm(0x16), Imm(0x64), Imm(0x2c), Imm(0x4), Imm(0x38), Imm(0x42), Imm(0x76), Imm(0x64), Imm(0x88), Imm(0x62), Imm(0xde), Imm(0x7), Imm(0xfe), Imm(0x1), Imm(0xd), Imm(0xc9), Imm(0x23), Imm(0x32), Imm(0x31), Imm(0x51), Imm(0x98), Imm(0x52), Imm(0xd), Imm(0xc9), Imm(0x59), Imm(0x42), Imm(0x63), Imm(0x53), Imm(0x67), Imm(0x31), Imm(0x14), Imm(0xc2), Imm(0x36), Imm(0x31), Imm(0x87), Imm(0x53), Imm(0x17), Imm(0xe3), Imm(0x29), Imm(0x61), Imm(0x30), Imm(0x62), Imm(0x3c), Imm(0x8), Imm(0x42), Imm(0x37), Imm(0x59), Imm(0x40), Imm(0x6a), Imm(0x42), Imm(0x99), Imm(0x40), Imm(0xc9), Imm(0x61), Imm(0xd7), Imm(0x63), Imm(0x39), Imm(0xd1), Imm(0x58), Imm(0x52), Imm(0xc3), Imm(0x67), Imm(0xd3), Imm(0x31), Imm(0xdc), Imm(0x6), Imm(0xf7), Imm(0x42), Imm(0xfa), Imm(0x42), Imm(0x23), Imm(0xb1), Imm(0x43), Imm(0x67), Imm(0xc3), Imm(0x34), Imm(0xc7), Imm(0x34), Imm(0xd1), Imm(0x51), Imm(0x43), Imm(0xb3), Imm(0x47), Imm(0x33), Imm(0x9a), Imm(0x30), Imm(0xa9), Imm(0x61), Imm(0xb8), Imm(0x62), Imm(0xbe), Imm(0xb), Imm(0xd5), Imm(0x9), Imm(0xde), Imm(0xf), Imm(0xd), Imm(0xca), Imm(0x7d), Imm(0x47), Imm(0xfd)};
    byte const L_WaterArea3[28] = {Imm(0x49), Imm(0xf), Imm(0x1e), Imm(0x1), Imm(0x39), Imm(0x73), Imm(0x5e), Imm(0x7), Imm(0xae), Imm(0xb), Imm(0x1e), Imm(0x82), Imm(0x6e), Imm(0x88), Imm(0x9e), Imm(0x2), Imm(0xd), Imm(0x4), Imm(0x2e), Imm(0xb), Imm(0x45), Imm(0x9), Imm(0x4e), Imm(0xf), Imm(0xed), Imm(0x47), Imm(0xfd), Imm(0xff)};
    byte const X_SubtracterData[2] = {Imm(0x0), Imm(0x10)};
    byte const OffscrJoypadBitsData[2] = {Imm(0x1), Imm(0x2)};
    byte const Hidden1UpCoinAmts[8] = {Imm(0x15), Imm(0x23), Imm(0x16), Imm(0x1b), Imm(0x17), Imm(0x18), Imm(0x23), Imm(0x63)};
    byte const ClimbAdderLow[4] = {Imm(0xe), Imm(0x4), Imm(0xfc), Imm(0xf2)};
    byte const ClimbAdderHigh[4] = {Imm(0x0), Imm(0x0), Imm(0xff), Imm(0xff)};
    byte const JumpMForceData[7] = {Imm(0x20), Imm(0x20), Imm(0x1e), Imm(0x28), Imm(0x28), Imm(0xd), Imm(0x4)};
    byte const FallMForceData[7] = {Imm(0x70), Imm(0x70), Imm(0x60), Imm(0x90), Imm(0x90), Imm(0xa), Imm(0x9)};
    byte const PlayerYSpdData[7] = {Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfb), Imm(0xfb), Imm(0xfe), Imm(0xff)};
    byte const InitMForceData[7] = {Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x0), Imm(0x80), Imm(0x0)};
    byte const MaxLeftXSpdData[3] = {Imm(0xd8), Imm(0xe8), Imm(0xf0)};
    byte const MaxRightXSpdData[4] = {Imm(0x28), Imm(0x18), Imm(0x10), Imm(0xc)};
    byte const FrictionData[3] = {Imm(0xe4), Imm(0x98), Imm(0xd0)};
    byte const Climb_Y_SpeedData[3] = {Imm(0x0), Imm(0xff), Imm(0x1)};
    byte const Climb_Y_MForceData[3] = {Imm(0x0), Imm(0x20), Imm(0xff)};
    byte const PlayerAnimTmrData[3] = {Imm(0x2), Imm(0x4), Imm(0x7)};
    byte const FireballXSpdData[2] = {Imm(0x40), Imm(0xc0)};
    byte const Bubble_MForceData[2] = {Imm(0xff), Imm(0x50)};
    byte const BubbleTimerData[2] = {Imm(0x40), Imm(0x20)};
    byte const FlagpoleScoreMods[5] = {Imm(0x5), Imm(0x2), Imm(0x8), Imm(0x4), Imm(0x1)};
    byte const FlagpoleScoreDigits[5] = {Imm(0x3), Imm(0x3), Imm(0x4), Imm(0x4), Imm(0x4)};
    byte const Jumpspring_Y_PosData[4] = {Imm(0x8), Imm(0x10), Imm(0x8), Imm(0x0)};
    byte const VineHeightData[2] = {Imm(0x30), Imm(0x60)};
    byte const CannonBitmasks[2] = {Imm(0b1111), Imm(0b111)};
    byte const BulletBillXSpdData[2] = {Imm(0x18), Imm(0xe8)};
    byte const HammerEnemyOfsData[9] = {Imm(0x4), Imm(0x4), Imm(0x4), Imm(0x5), Imm(0x5), Imm(0x5), Imm(0x6), Imm(0x6), Imm(0x6)};
    byte const HammerXSpdData[2] = {Imm(0x10), Imm(0xf0)};
    byte const CoinTallyOffsets[2] = {Imm(0x17), Imm(0x1d)};
    byte const ScoreOffsets[2] = {Imm(0xb), Imm(0x11)};
    byte const StatusBarNybbles[2] = {Imm(0x2), Imm(0x13)};
    byte const BlockYPosAdderData[2] = {Imm(0x4), Imm(0x12)};
    byte const BrickQBlockMetatiles[14] = {Imm(0xc1), Imm(0xc0), Imm(0x5f), Imm(0x60), Imm(0x55), Imm(0x56), Imm(0x57), Imm(0x58), Imm(0x59), Imm(0x5a), Imm(0x5b), Imm(0x5c), Imm(0x5d), Imm(0x5e)};
    byte const MaxSpdBlockData[2] = {Imm(0x6), Imm(0x8)};
    byte const LoopCmdWorldNumber[11] = {Imm(0x3), Imm(0x3), Imm(0x6), Imm(0x6), Imm(0x6), Imm(0x6), Imm(0x6), Imm(0x6), Imm(0x7), Imm(0x7), Imm(0x7)};
    byte const LoopCmdPageNumber[11] = {Imm(0x5), Imm(0x9), Imm(0x4), Imm(0x5), Imm(0x6), Imm(0x8), Imm(0x9), Imm(0xa), Imm(0x6), Imm(0xb), Imm(0x10)};
    byte const LoopCmdYPosition[11] = {Imm(0x40), Imm(0xb0), Imm(0xb0), Imm(0x80), Imm(0x40), Imm(0x40), Imm(0x80), Imm(0x40), Imm(0xf0), Imm(0xf0), Imm(0xf0)};
    byte const NormalXSpdData[2] = {Imm(0xf8), Imm(0xf4)};
    byte const HBroWalkingTimerData[2] = {Imm(0x80), Imm(0x50)};
    byte const PRDiffAdjustData[12] = {Imm(0x26), Imm(0x2c), Imm(0x32), Imm(0x38), Imm(0x20), Imm(0x22), Imm(0x24), Imm(0x26), Imm(0x13), Imm(0x14), Imm(0x15), Imm(0x16)};
    byte const FirebarSpinSpdData[5] = {Imm(0x28), Imm(0x38), Imm(0x28), Imm(0x38), Imm(0x28)};
    byte const FirebarSpinDirData[5] = {Imm(0x0), Imm(0x0), Imm(0x10), Imm(0x10), Imm(0x0)};
    byte const FlyCCXPositionData[16] = {Imm(0x80), Imm(0x30), Imm(0x40), Imm(0x80), Imm(0x30), Imm(0x50), Imm(0x50), Imm(0x70), Imm(0x20), Imm(0x40), Imm(0x80), Imm(0xa0), Imm(0x70), Imm(0x40), Imm(0x90), Imm(0x68)};
    byte const FlyCCXSpeedData[12] = {Imm(0xe), Imm(0x5), Imm(0x6), Imm(0xe), Imm(0x1c), Imm(0x20), Imm(0x10), Imm(0xc), Imm(0x1e), Imm(0x22), Imm(0x18), Imm(0x14)};
    byte const FlyCCTimerData[4] = {Imm(0x10), Imm(0x60), Imm(0x20), Imm(0x48)};
    byte const FlameYPosData[4] = {Imm(0x90), Imm(0x80), Imm(0x70), Imm(0x90)};
    byte const FlameYMFAdderData[2] = {Imm(0xff), Imm(0x1)};
    byte const FireworksXPosData[6] = {Imm(0x0), Imm(0x30), Imm(0x60), Imm(0x60), Imm(0x0), Imm(0x20)};
    byte const FireworksYPosData[6] = {Imm(0x60), Imm(0x40), Imm(0x70), Imm(0x40), Imm(0x60), Imm(0x30)};
    byte const Bitmasks[8] = {Imm(0b1), Imm(0b10), Imm(0b100), Imm(0b1000), Imm(0b10000), Imm(0b100000), Imm(0b1000000), Imm(0b10000000)};
    byte const Enemy17YPosData[8] = {Imm(0x40), Imm(0x30), Imm(0x90), Imm(0x50), Imm(0x20), Imm(0x60), Imm(0xa0), Imm(0x70)};
    byte const SwimCC_IDData[2] = {Imm(0xa), Imm(0xb)};
    byte const PlatPosDataLow[3] = {Imm(0x8), Imm(0xc), Imm(0xf8)};
    byte const PlatPosDataHigh[3] = {Imm(0x0), Imm(0x0), Imm(0xff)};
    byte const HammerThrowTmrData[2] = {Imm(0x30), Imm(0x1c)};
    byte const XSpeedAdderData[4] = {Imm(0x0), Imm(0xe8), Imm(0x0), Imm(0x18)};
    byte const RevivedXSpeed[4] = {Imm(0x8), Imm(0xf8), Imm(0xc), Imm(0xf4)};
    byte const HammerBroJumpLData[2] = {Imm(0x20), Imm(0x37)};
    byte const BlooberBitmasks[2] = {Imm(0b111111), Imm(0b11)};
    byte const SwimCCXMoveData[4] = {Imm(0x40), Imm(0x80), Imm(0x4), Imm(0x4)};
    byte const FirebarPosLookupTbl[99] = {Imm(0x0), Imm(0x1), Imm(0x3), Imm(0x4), Imm(0x5), Imm(0x6), Imm(0x7), Imm(0x7), Imm(0x8), Imm(0x0), Imm(0x3), Imm(0x6), Imm(0x9), Imm(0xb), Imm(0xd), Imm(0xe), Imm(0xf), Imm(0x10), Imm(0x0), Imm(0x4), Imm(0x9), Imm(0xd), Imm(0x10), Imm(0x13), Imm(0x16), Imm(0x17), Imm(0x18), Imm(0x0), Imm(0x6), Imm(0xc), Imm(0x12), Imm(0x16), Imm(0x1a), Imm(0x1d), Imm(0x1f), Imm(0x20), Imm(0x0), Imm(0x7), Imm(0xf), Imm(0x16), Imm(0x1c), Imm(0x21), Imm(0x25), Imm(0x27), Imm(0x28), Imm(0x0), Imm(0x9), Imm(0x12), Imm(0x1b), Imm(0x21), Imm(0x27), Imm(0x2c), Imm(0x2f), Imm(0x30), Imm(0x0), Imm(0xb), Imm(0x15), Imm(0x1f), Imm(0x27), Imm(0x2e), Imm(0x33), Imm(0x37), Imm(0x38), Imm(0x0), Imm(0xc), Imm(0x18), Imm(0x24), Imm(0x2d), Imm(0x35), Imm(0x3b), Imm(0x3e), Imm(0x40), Imm(0x0), Imm(0xe), Imm(0x1b), Imm(0x28), Imm(0x32), Imm(0x3b), Imm(0x42), Imm(0x46), Imm(0x48), Imm(0x0), Imm(0xf), Imm(0x1f), Imm(0x2d), Imm(0x38), Imm(0x42), Imm(0x4a), Imm(0x4e), Imm(0x50), Imm(0x0), Imm(0x11), Imm(0x22), Imm(0x31), Imm(0x3e), Imm(0x49), Imm(0x51), Imm(0x56), Imm(0x58)};
    byte const FirebarMirrorData[4] = {Imm(0x1), Imm(0x3), Imm(0x2), Imm(0x0)};
    byte const FirebarTblOffsets[12] = {Imm(0x0), Imm(0x9), Imm(0x12), Imm(0x1b), Imm(0x24), Imm(0x2d), Imm(0x36), Imm(0x3f), Imm(0x48), Imm(0x51), Imm(0x5a), Imm(0x63)};
    byte const FirebarYPos[2] = {Imm(0xc), Imm(0x18)};
    byte const PRandomSubtracter[5] = {Imm(0xf8), Imm(0xa0), Imm(0x70), Imm(0xbd), Imm(0x0)};
    byte const FlyCCBPriority[5] = {Imm(0x20), Imm(0x20), Imm(0x20), Imm(0x0), Imm(0x0)};
    byte const LakituDiffAdj[3] = {Imm(0x15), Imm(0x30), Imm(0x40)};
    byte const BridgeCollapseData[15] = {Imm(0x1a), Imm(0x58), Imm(0x98), Imm(0x96), Imm(0x94), Imm(0x92), Imm(0x90), Imm(0x8e), Imm(0x8c), Imm(0x8a), Imm(0x88), Imm(0x86), Imm(0x84), Imm(0x82), Imm(0x80)};
    byte const PRandomRange[4] = {Imm(0x21), Imm(0x41), Imm(0x11), Imm(0x31)};
    byte const FlameTimerData[8] = {Imm(0xbf), Imm(0x40), Imm(0xbf), Imm(0xbf), Imm(0xbf), Imm(0x40), Imm(0x40), Imm(0xbf)};
    byte const StarFlagYPosAdder[4] = {Imm(0x0), Imm(0x0), Imm(0x8), Imm(0x8)};
    byte const StarFlagXPosAdder[4] = {Imm(0x0), Imm(0x8), Imm(0x0), Imm(0x8)};
    byte const StarFlagTileData[4] = {Imm(0x54), Imm(0x55), Imm(0x56), Imm(0x57)};
    byte const BowserIdentities[8] = {(Goomba), (GreenKoopa), (BuzzyBeetle), (Spiny), (Lakitu), (Bloober), (HammerBro), (Bowser)};
    byte const ResidualXSpdData[2] = {Imm(0x18), Imm(0xe8)};
    byte const KickedShellXSpdData[2] = {Imm(0x30), Imm(0xd0)};
    byte const DemotedKoopaXSpdData[2] = {Imm(0x8), Imm(0xf8)};
    byte const KickedShellPtsData[3] = {Imm(0xa), Imm(0x6), Imm(0x4)};
    byte const StompedEnemyPtsData[4] = {Imm(0x2), Imm(0x6), Imm(0x5), Imm(0x6)};
    byte const RevivalRateData[2] = {Imm(0x10), Imm(0xb)};
    byte const SetBitsMask[7] = {Imm(0b10000000), Imm(0b1000000), Imm(0b100000), Imm(0b10000), Imm(0b1000), Imm(0b100), Imm(0b10)};
    byte const ClearBitsMask[7] = {Imm(0b1111111), Imm(0b10111111), Imm(0b11011111), Imm(0b11101111), Imm(0b11110111), Imm(0b11111011), Imm(0b11111101)};
    byte const PlayerPosSPlatData[2] = {Imm(0x80), Imm(0x0)};
    byte const PlayerBGUpperExtent[2] = {Imm(0x20), Imm(0x10)};
    byte const AreaChangeTimerData[2] = {Imm(0xa0), Imm(0x34)};
    byte const ClimbXPosAdder[2] = {Imm(0xf9), Imm(0x7)};
    byte const ClimbPLocAdder[2] = {Imm(0xff), Imm(0x0)};
    byte const FlagpoleYPosData[5] = {Imm(0x18), Imm(0x22), Imm(0x50), Imm(0x68), Imm(0x90)};
    byte const SolidMTileUpperExt[4] = {Imm(0x10), Imm(0x61), Imm(0x88), Imm(0xc4)};
    byte const ClimbMTileUpperExt[4] = {Imm(0x24), Imm(0x6d), Imm(0x8a), Imm(0xc6)};
    byte const EnemyBGCStateData[6] = {Imm(0x1), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x2), Imm(0x5)};
    byte const EnemyBGCXSpdData[2] = {Imm(0x10), Imm(0xf0)};
    byte const BoundBoxCtrlData[48] = {Imm(0x2), Imm(0x8), Imm(0xe), Imm(0x20), Imm(0x3), Imm(0x14), Imm(0xd), Imm(0x20), Imm(0x2), Imm(0x14), Imm(0xe), Imm(0x20), Imm(0x2), Imm(0x9), Imm(0xe), Imm(0x15), Imm(0x0), Imm(0x0), Imm(0x18), Imm(0x6), Imm(0x0), Imm(0x0), Imm(0x20), Imm(0xd), Imm(0x0), Imm(0x0), Imm(0x30), Imm(0xd), Imm(0x0), Imm(0x0), Imm(0x8), Imm(0x8), Imm(0x6), Imm(0x4), Imm(0xa), Imm(0x8), Imm(0x3), Imm(0xe), Imm(0xd), Imm(0x14), Imm(0x0), Imm(0x2), Imm(0x10), Imm(0x15), Imm(0x4), Imm(0x4), Imm(0xc), Imm(0x1c)};
    byte const BlockBufferAdderData[3] = {Imm(0x0), Imm(0x7), Imm(0xe)};
    byte const BlockBuffer_X_Adder[28] = {Imm(0x8), Imm(0x3), Imm(0xc), Imm(0x2), Imm(0x2), Imm(0xd), Imm(0xd), Imm(0x8), Imm(0x3), Imm(0xc), Imm(0x2), Imm(0x2), Imm(0xd), Imm(0xd), Imm(0x8), Imm(0x3), Imm(0xc), Imm(0x2), Imm(0x2), Imm(0xd), Imm(0xd), Imm(0x8), Imm(0x0), Imm(0x10), Imm(0x4), Imm(0x14), Imm(0x4), Imm(0x4)};
    byte const BlockBuffer_Y_Adder[28] = {Imm(0x4), Imm(0x20), Imm(0x20), Imm(0x8), Imm(0x18), Imm(0x8), Imm(0x18), Imm(0x2), Imm(0x20), Imm(0x20), Imm(0x8), Imm(0x18), Imm(0x8), Imm(0x18), Imm(0x12), Imm(0x20), Imm(0x20), Imm(0x18), Imm(0x18), Imm(0x18), Imm(0x18), Imm(0x18), Imm(0x14), Imm(0x14), Imm(0x6), Imm(0x6), Imm(0x8), Imm(0x10)};
    byte const VineYPosAdder[2] = {Imm(0x0), Imm(0x30)};
    byte const FirstSprXPos[4] = {Imm(0x4), Imm(0x0), Imm(0x4), Imm(0x0)};
    byte const FirstSprYPos[4] = {Imm(0x0), Imm(0x4), Imm(0x0), Imm(0x4)};
    byte const SecondSprXPos[4] = {Imm(0x0), Imm(0x8), Imm(0x0), Imm(0x8)};
    byte const SecondSprYPos[4] = {Imm(0x8), Imm(0x0), Imm(0x8), Imm(0x0)};
    byte const FirstSprTilenum[4] = {Imm(0x80), Imm(0x82), Imm(0x81), Imm(0x83)};
    byte const SecondSprTilenum[4] = {Imm(0x81), Imm(0x83), Imm(0x80), Imm(0x82)};
    byte const HammerSprAttrib[4] = {Imm(0x3), Imm(0x3), Imm(0xc3), Imm(0xc3)};
    byte const FlagpoleScoreNumTiles[10] = {Imm(0xf9), Imm(0x50), Imm(0xf7), Imm(0x50), Imm(0xfa), Imm(0xfb), Imm(0xf8), Imm(0xfb), Imm(0xf6), Imm(0xfb)};
    byte const JumpingCoinTiles[4] = {Imm(0x60), Imm(0x61), Imm(0x62), Imm(0x63)};
    byte const PowerUpGfxTable[16] = {Imm(0x76), Imm(0x77), Imm(0x78), Imm(0x79), Imm(0xd6), Imm(0xd6), Imm(0xd9), Imm(0xd9), Imm(0x8d), Imm(0x8d), Imm(0xe4), Imm(0xe4), Imm(0x76), Imm(0x77), Imm(0x78), Imm(0x79)};
    byte const PowerUpAttributes[4] = {Imm(0x2), Imm(0x1), Imm(0x2), Imm(0x1)};
    byte const EnemyGraphicsTable[258] = {Imm(0xfc), Imm(0xfc), Imm(0xaa), Imm(0xab), Imm(0xac), Imm(0xad), Imm(0xfc), Imm(0xfc), Imm(0xae), Imm(0xaf), Imm(0xb0), Imm(0xb1), Imm(0xfc), Imm(0xa5), Imm(0xa6), Imm(0xa7), Imm(0xa8), Imm(0xa9), Imm(0xfc), Imm(0xa0), Imm(0xa1), Imm(0xa2), Imm(0xa3), Imm(0xa4), Imm(0x69), Imm(0xa5), Imm(0x6a), Imm(0xa7), Imm(0xa8), Imm(0xa9), Imm(0x6b), Imm(0xa0), Imm(0x6c), Imm(0xa2), Imm(0xa3), Imm(0xa4), Imm(0xfc), Imm(0xfc), Imm(0x96), Imm(0x97), Imm(0x98), Imm(0x99), Imm(0xfc), Imm(0xfc), Imm(0x9a), Imm(0x9b), Imm(0x9c), Imm(0x9d), Imm(0xfc), Imm(0xfc), Imm(0x8f), Imm(0x8e), Imm(0x8e), Imm(0x8f), Imm(0xfc), Imm(0xfc), Imm(0x95), Imm(0x94), Imm(0x94), Imm(0x95), Imm(0xfc), Imm(0xfc), Imm(0xdc), Imm(0xdc), Imm(0xdf), Imm(0xdf), Imm(0xdc), Imm(0xdc), Imm(0xdd), Imm(0xdd), Imm(0xde), Imm(0xde), Imm(0xfc), Imm(0xfc), Imm(0xb2), Imm(0xb3), Imm(0xb4), Imm(0xb5), Imm(0xfc), Imm(0xfc), Imm(0xb6), Imm(0xb3), Imm(0xb7), Imm(0xb5), Imm(0xfc), Imm(0xfc), Imm(0x70), Imm(0x71), Imm(0x72), Imm(0x73), Imm(0xfc), Imm(0xfc), Imm(0x6e), Imm(0x6e), Imm(0x6f), Imm(0x6f), Imm(0xfc), Imm(0xfc), Imm(0x6d), Imm(0x6d), Imm(0x6f), Imm(0x6f), Imm(0xfc), Imm(0xfc), Imm(0x6f), Imm(0x6f), Imm(0x6e), Imm(0x6e), Imm(0xfc), Imm(0xfc), Imm(0x6f), Imm(0x6f), Imm(0x6d), Imm(0x6d), Imm(0xfc), Imm(0xfc), Imm(0xf4), Imm(0xf4), Imm(0xf5), Imm(0xf5), Imm(0xfc), Imm(0xfc), Imm(0xf4), Imm(0xf4), Imm(0xf5), Imm(0xf5), Imm(0xfc), Imm(0xfc), Imm(0xf5), Imm(0xf5), Imm(0xf4), Imm(0xf4), Imm(0xfc), Imm(0xfc), Imm(0xf5), Imm(0xf5), Imm(0xf4), Imm(0xf4), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xef), Imm(0xef), Imm(0xb9), Imm(0xb8), Imm(0xbb), Imm(0xba), Imm(0xbc), Imm(0xbc), Imm(0xfc), Imm(0xfc), Imm(0xbd), Imm(0xbd), Imm(0xbc), Imm(0xbc), Imm(0x7a), Imm(0x7b), Imm(0xda), Imm(0xdb), Imm(0xd8), Imm(0xd8), Imm(0xcd), Imm(0xcd), Imm(0xce), Imm(0xce), Imm(0xcf), Imm(0xcf), Imm(0x7d), Imm(0x7c), Imm(0xd1), Imm(0x8c), Imm(0xd3), Imm(0xd2), Imm(0x7d), Imm(0x7c), Imm(0x89), Imm(0x88), Imm(0x8b), Imm(0x8a), Imm(0xd5), Imm(0xd4), Imm(0xe3), Imm(0xe2), Imm(0xd3), Imm(0xd2), Imm(0xd5), Imm(0xd4), Imm(0xe3), Imm(0xe2), Imm(0x8b), Imm(0x8a), Imm(0xe5), Imm(0xe5), Imm(0xe6), Imm(0xe6), Imm(0xeb), Imm(0xeb), Imm(0xec), Imm(0xec), Imm(0xed), Imm(0xed), Imm(0xee), Imm(0xee), Imm(0xfc), Imm(0xfc), Imm(0xd0), Imm(0xd0), Imm(0xd7), Imm(0xd7), Imm(0xbf), Imm(0xbe), Imm(0xc1), Imm(0xc0), Imm(0xc2), Imm(0xfc), Imm(0xc4), Imm(0xc3), Imm(0xc6), Imm(0xc5), Imm(0xc8), Imm(0xc7), Imm(0xbf), Imm(0xbe), Imm(0xca), Imm(0xc9), Imm(0xc2), Imm(0xfc), Imm(0xc4), Imm(0xc3), Imm(0xc6), Imm(0xc5), Imm(0xcc), Imm(0xcb), Imm(0xfc), Imm(0xfc), Imm(0xe8), Imm(0xe7), Imm(0xea), Imm(0xe9), Imm(0xf2), Imm(0xf2), Imm(0xf3), Imm(0xf3), Imm(0xf2), Imm(0xf2), Imm(0xf1), Imm(0xf1), Imm(0xf1), Imm(0xf1), Imm(0xfc), Imm(0xfc), Imm(0xf0), Imm(0xf0), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc)};
    byte const EnemyGfxTableOffsets[27] = {Imm(0xc), Imm(0xc), Imm(0x0), Imm(0xc), Imm(0xc), Imm(0xa8), Imm(0x54), Imm(0x3c), Imm(0xea), Imm(0x18), Imm(0x48), Imm(0x48), Imm(0xcc), Imm(0xc0), Imm(0x18), Imm(0x18), Imm(0x18), Imm(0x90), Imm(0x24), Imm(0xff), Imm(0x48), Imm(0x9c), Imm(0xd2), Imm(0xd8), Imm(0xf0), Imm(0xf6), Imm(0xfc)};
    byte const EnemyAttributeData[27] = {Imm(0x1), Imm(0x2), Imm(0x3), Imm(0x2), Imm(0x1), Imm(0x1), Imm(0x3), Imm(0x3), Imm(0x3), Imm(0x1), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x21), Imm(0x1), Imm(0x2), Imm(0x1), Imm(0x1), Imm(0x2), Imm(0xff), Imm(0x2), Imm(0x2), Imm(0x1), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x2)};
    byte const EnemyAnimTimingBMask[2] = {Imm(0x8), Imm(0x18)};
    byte const JumpspringFrameOffsets[5] = {Imm(0x18), Imm(0x19), Imm(0x1a), Imm(0x19), Imm(0x18)};
    byte const DefaultBlockObjTiles[4] = {Imm(0x85), Imm(0x85), Imm(0x86), Imm(0x86)};
    byte const ExplosionTiles[3] = {Imm(0x68), Imm(0x67), Imm(0x66)};
    byte const PlayerGfxTblOffsets[16] = {Imm(0x20), Imm(0x28), Imm(0xc8), Imm(0x18), Imm(0x0), Imm(0x40), Imm(0x50), Imm(0x58), Imm(0x80), Imm(0x88), Imm(0xb8), Imm(0x78), Imm(0x60), Imm(0xa0), Imm(0xb0), Imm(0xb8)};
    byte const PlayerGraphicsTable[208] = {Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x3), Imm(0x4), Imm(0x5), Imm(0x6), Imm(0x7), Imm(0x8), Imm(0x9), Imm(0xa), Imm(0xb), Imm(0xc), Imm(0xd), Imm(0xe), Imm(0xf), Imm(0x10), Imm(0x11), Imm(0x12), Imm(0x13), Imm(0x14), Imm(0x15), Imm(0x16), Imm(0x17), Imm(0x18), Imm(0x19), Imm(0x1a), Imm(0x1b), Imm(0x1c), Imm(0x1d), Imm(0x1e), Imm(0x1f), Imm(0x20), Imm(0x21), Imm(0x22), Imm(0x23), Imm(0x24), Imm(0x25), Imm(0x26), Imm(0x27), Imm(0x8), Imm(0x9), Imm(0x28), Imm(0x29), Imm(0x2a), Imm(0x2b), Imm(0x2c), Imm(0x2d), Imm(0x8), Imm(0x9), Imm(0xa), Imm(0xb), Imm(0xc), Imm(0x30), Imm(0x2c), Imm(0x2d), Imm(0x8), Imm(0x9), Imm(0xa), Imm(0xb), Imm(0x2e), Imm(0x2f), Imm(0x2c), Imm(0x2d), Imm(0x8), Imm(0x9), Imm(0x28), Imm(0x29), Imm(0x2a), Imm(0x2b), Imm(0x5c), Imm(0x5d), Imm(0x8), Imm(0x9), Imm(0xa), Imm(0xb), Imm(0xc), Imm(0xd), Imm(0x5e), Imm(0x5f), Imm(0xfc), Imm(0xfc), Imm(0x8), Imm(0x9), Imm(0x58), Imm(0x59), Imm(0x5a), Imm(0x5a), Imm(0x8), Imm(0x9), Imm(0x28), Imm(0x29), Imm(0x2a), Imm(0x2b), Imm(0xe), Imm(0xf), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x33), Imm(0x34), Imm(0x35), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x36), Imm(0x37), Imm(0x38), Imm(0x39), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x3a), Imm(0x37), Imm(0x3b), Imm(0x3c), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x3d), Imm(0x3e), Imm(0x3f), Imm(0x40), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x41), Imm(0x42), Imm(0x43), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x33), Imm(0x44), Imm(0x45), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x33), Imm(0x44), Imm(0x47), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x33), Imm(0x48), Imm(0x49), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x32), Imm(0x33), Imm(0x90), Imm(0x91), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x3a), Imm(0x37), Imm(0x92), Imm(0x93), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x9e), Imm(0x9e), Imm(0x9f), Imm(0x9f), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0xfc), Imm(0x3a), Imm(0x37), Imm(0x4f), Imm(0x4f), Imm(0xfc), Imm(0xfc), Imm(0x0), Imm(0x1), Imm(0x4c), Imm(0x4d), Imm(0x4e), Imm(0x4e), Imm(0x0), Imm(0x1), Imm(0x4c), Imm(0x4d), Imm(0x4a), Imm(0x4a), Imm(0x4b), Imm(0x4b)};
    byte const SwimKickTileNum[2] = {Imm(0x31), Imm(0x46)};
    byte const IntermediatePlayerData[6] = {Imm(0x58), Imm(0x1), Imm(0x0), Imm(0x60), Imm(0xff), Imm(0x4)};
    byte const ChangeSizeOffsetAdder[20] = {Imm(0x0), Imm(0x1), Imm(0x0), Imm(0x1), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x0), Imm(0x1), Imm(0x2), Imm(0x2), Imm(0x0), Imm(0x2), Imm(0x0), Imm(0x2), Imm(0x0), Imm(0x2), Imm(0x0), Imm(0x2), Imm(0x0)};
    byte const ObjOffsetData[3] = {Imm(0x7), Imm(0x16), Imm(0xd)};
    byte const XOffscreenBitsData[16] = {Imm(0x7f), Imm(0x3f), Imm(0x1f), Imm(0xf), Imm(0x7), Imm(0x3), Imm(0x1), Imm(0x0), Imm(0x80), Imm(0xc0), Imm(0xe0), Imm(0xf0), Imm(0xf8), Imm(0xfc), Imm(0xfe), Imm(0xff)};
    byte const DefaultXOnscreenOfs[3] = {Imm(0x7), Imm(0xf), Imm(0x7)};
    byte const YOffscreenBitsData[9] = {Imm(0x0), Imm(0x8), Imm(0xc), Imm(0xe), Imm(0xf), Imm(0x7), Imm(0x3), Imm(0x1), Imm(0x0)};
    byte const DefaultYOnscreenOfs[3] = {Imm(0x4), Imm(0x0), Imm(0x4)};
    byte const HighPosUnitData[2] = {Imm(0xff), Imm(0x0)};
    byte const SwimStompEnvelopeData[14] = {Imm(0x9f), Imm(0x9b), Imm(0x98), Imm(0x96), Imm(0x95), Imm(0x94), Imm(0x92), Imm(0x90), Imm(0x90), Imm(0x9a), Imm(0x97), Imm(0x95), Imm(0x93), Imm(0x92)};
    byte const ExtraLifeFreqData[6] = {Imm(0x58), Imm(0x2), Imm(0x54), Imm(0x56), Imm(0x4e), Imm(0x44)};
    byte const PowerUpGrabFreqData[30] = {Imm(0x4c), Imm(0x52), Imm(0x4c), Imm(0x48), Imm(0x3e), Imm(0x36), Imm(0x3e), Imm(0x36), Imm(0x30), Imm(0x28), Imm(0x4a), Imm(0x50), Imm(0x4a), Imm(0x64), Imm(0x3c), Imm(0x32), Imm(0x3c), Imm(0x32), Imm(0x2c), Imm(0x24), Imm(0x3a), Imm(0x64), Imm(0x3a), Imm(0x34), Imm(0x2c), Imm(0x22), Imm(0x2c), Imm(0x22), Imm(0x1c), Imm(0x14)};
    byte const PUp_VGrow_FreqData[32] = {Imm(0x14), Imm(0x4), Imm(0x22), Imm(0x24), Imm(0x16), Imm(0x4), Imm(0x24), Imm(0x26), Imm(0x18), Imm(0x4), Imm(0x26), Imm(0x28), Imm(0x1a), Imm(0x4), Imm(0x28), Imm(0x2a), Imm(0x1c), Imm(0x4), Imm(0x2a), Imm(0x2c), Imm(0x1e), Imm(0x4), Imm(0x2c), Imm(0x2e), Imm(0x20), Imm(0x4), Imm(0x2e), Imm(0x30), Imm(0x22), Imm(0x4), Imm(0x30), Imm(0x32)};
    byte const BrickShatterFreqData[16] = {Imm(0x1), Imm(0xe), Imm(0xe), Imm(0xd), Imm(0xb), Imm(0x6), Imm(0xc), Imm(0xf), Imm(0xa), Imm(0x9), Imm(0x3), Imm(0xd), Imm(0x8), Imm(0xd), Imm(0x6), Imm(0xc)};
    byte const MusicHeaderData[49] = {(((DeathMusHdr)) - ((MHD))), (((GameOverMusHdr)) - ((MHD))), (((VictoryMusHdr)) - ((MHD))), (((WinCastleMusHdr)) - ((MHD))), (((GameOverMusHdr)) - ((MHD))), (((EndOfLevelMusHdr)) - ((MHD))), (((TimeRunningOutHdr)) - ((MHD))), (((SilenceHdr)) - ((MHD))), (((GroundLevelPart1Hdr)) - ((MHD))), (((WaterMusHdr)) - ((MHD))), (((UndergroundMusHdr)) - ((MHD))), (((CastleMusHdr)) - ((MHD))), (((Star_CloudHdr)) - ((MHD))), (((GroundLevelLeadInHdr)) - ((MHD))), (((Star_CloudHdr)) - ((MHD))), (((SilenceHdr)) - ((MHD))), (((GroundLevelLeadInHdr)) - ((MHD))), (((GroundLevelPart1Hdr)) - ((MHD))), (((GroundLevelPart1Hdr)) - ((MHD))), (((GroundLevelPart2AHdr)) - ((MHD))), (((GroundLevelPart2BHdr)) - ((MHD))), (((GroundLevelPart2AHdr)) - ((MHD))), (((GroundLevelPart2CHdr)) - ((MHD))), (((GroundLevelPart2AHdr)) - ((MHD))), (((GroundLevelPart2BHdr)) - ((MHD))), (((GroundLevelPart2AHdr)) - ((MHD))), (((GroundLevelPart2CHdr)) - ((MHD))), (((GroundLevelPart3AHdr)) - ((MHD))), (((GroundLevelPart3BHdr)) - ((MHD))), (((GroundLevelPart3AHdr)) - ((MHD))), (((GroundLevelLeadInHdr)) - ((MHD))), (((GroundLevelPart1Hdr)) - ((MHD))), (((GroundLevelPart1Hdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4BHdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4CHdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4BHdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4CHdr)) - ((MHD))), (((GroundLevelPart3AHdr)) - ((MHD))), (((GroundLevelPart3BHdr)) - ((MHD))), (((GroundLevelPart3AHdr)) - ((MHD))), (((GroundLevelLeadInHdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4BHdr)) - ((MHD))), (((GroundLevelPart4AHdr)) - ((MHD))), (((GroundLevelPart4CHdr)) - ((MHD)))};
    byte const TimeRunningOutHdr[5] = {Imm(0x8), LO8((TimeRunOutMusData)), HI8((TimeRunOutMusData)), Imm(0x27), Imm(0x18)};
    byte const Star_CloudHdr[6] = {Imm(0x20), LO8((Star_CloudMData)), HI8((Star_CloudMData)), Imm(0x2e), Imm(0x1a), Imm(0x40)};
    byte const EndOfLevelMusHdr[5] = {Imm(0x20), LO8((WinLevelMusData)), HI8((WinLevelMusData)), Imm(0x3d), Imm(0x21)};
    byte const ResidualHeaderData[5] = {Imm(0x20), Imm(0xc4), Imm(0xfc), Imm(0x3f), Imm(0x1d)};
    byte const UndergroundMusHdr[5] = {Imm(0x18), LO8((UndergroundMusData)), HI8((UndergroundMusData)), Imm(0x0), Imm(0x0)};
    byte const SilenceHdr[4] = {Imm(0x8), LO8((SilenceData)), HI8((SilenceData)), Imm(0x0)};
    byte const CastleMusHdr[5] = {Imm(0x0), LO8((CastleMusData)), HI8((CastleMusData)), Imm(0x93), Imm(0x62)};
    byte const VictoryMusHdr[5] = {Imm(0x10), LO8((VictoryMusData)), HI8((VictoryMusData)), Imm(0x24), Imm(0x14)};
    byte const GameOverMusHdr[5] = {Imm(0x18), LO8((GameOverMusData)), HI8((GameOverMusData)), Imm(0x1e), Imm(0x14)};
    byte const WaterMusHdr[6] = {Imm(0x8), LO8((WaterMusData)), HI8((WaterMusData)), Imm(0xa0), Imm(0x70), Imm(0x68)};
    byte const WinCastleMusHdr[5] = {Imm(0x8), LO8((EndOfCastleMusData)), HI8((EndOfCastleMusData)), Imm(0x4c), Imm(0x24)};
    byte const GroundLevelPart1Hdr[6] = {Imm(0x18), LO8((GroundM_P1Data)), HI8((GroundM_P1Data)), Imm(0x2d), Imm(0x1c), Imm(0xb8)};
    byte const GroundLevelPart2AHdr[6] = {Imm(0x18), LO8((GroundM_P2AData)), HI8((GroundM_P2AData)), Imm(0x20), Imm(0x12), Imm(0x70)};
    byte const GroundLevelPart2BHdr[6] = {Imm(0x18), LO8((GroundM_P2BData)), HI8((GroundM_P2BData)), Imm(0x1b), Imm(0x10), Imm(0x44)};
    byte const GroundLevelPart2CHdr[6] = {Imm(0x18), LO8((GroundM_P2CData)), HI8((GroundM_P2CData)), Imm(0x11), Imm(0xa), Imm(0x1c)};
    byte const GroundLevelPart3AHdr[6] = {Imm(0x18), LO8((GroundM_P3AData)), HI8((GroundM_P3AData)), Imm(0x2d), Imm(0x10), Imm(0x58)};
    byte const GroundLevelPart3BHdr[6] = {Imm(0x18), LO8((GroundM_P3BData)), HI8((GroundM_P3BData)), Imm(0x14), Imm(0xd), Imm(0x3f)};
    byte const GroundLevelLeadInHdr[6] = {Imm(0x18), LO8((GroundMLdInData)), HI8((GroundMLdInData)), Imm(0x15), Imm(0xd), Imm(0x21)};
    byte const GroundLevelPart4AHdr[6] = {Imm(0x18), LO8((GroundM_P4AData)), HI8((GroundM_P4AData)), Imm(0x18), Imm(0x10), Imm(0x7a)};
    byte const GroundLevelPart4BHdr[6] = {Imm(0x18), LO8((GroundM_P4BData)), HI8((GroundM_P4BData)), Imm(0x19), Imm(0xf), Imm(0x54)};
    byte const GroundLevelPart4CHdr[6] = {Imm(0x18), LO8((GroundM_P4CData)), HI8((GroundM_P4CData)), Imm(0x1e), Imm(0x12), Imm(0x2b)};
    byte const DeathMusHdr[6] = {Imm(0x18), LO8((DeathMusData)), HI8((DeathMusData)), Imm(0x1e), Imm(0xf), Imm(0x2d)};
    byte const Star_CloudMData[73] = {Imm(0x84), Imm(0x2c), Imm(0x2c), Imm(0x2c), Imm(0x82), Imm(0x4), Imm(0x2c), Imm(0x4), Imm(0x85), Imm(0x2c), Imm(0x84), Imm(0x2c), Imm(0x2c), Imm(0x2a), Imm(0x2a), Imm(0x2a), Imm(0x82), Imm(0x4), Imm(0x2a), Imm(0x4), Imm(0x85), Imm(0x2a), Imm(0x84), Imm(0x2a), Imm(0x2a), Imm(0x0), Imm(0x1f), Imm(0x1f), Imm(0x1f), Imm(0x98), Imm(0x1f), Imm(0x1f), Imm(0x98), Imm(0x9e), Imm(0x98), Imm(0x1f), Imm(0x1d), Imm(0x1d), Imm(0x1d), Imm(0x94), Imm(0x1d), Imm(0x1d), Imm(0x94), Imm(0x9c), Imm(0x94), Imm(0x1d), Imm(0x86), Imm(0x18), Imm(0x85), Imm(0x26), Imm(0x30), Imm(0x84), Imm(0x4), Imm(0x26), Imm(0x30), Imm(0x86), Imm(0x14), Imm(0x85), Imm(0x22), Imm(0x2c), Imm(0x84), Imm(0x4), Imm(0x22), Imm(0x2c), Imm(0x21), Imm(0xd0), Imm(0xc4), Imm(0xd0), Imm(0x31), Imm(0xd0), Imm(0xc4), Imm(0xd0), Imm(0x0)};
    byte const GroundM_P1Data[27] = {Imm(0x85), Imm(0x2c), Imm(0x22), Imm(0x1c), Imm(0x84), Imm(0x26), Imm(0x2a), Imm(0x82), Imm(0x28), Imm(0x26), Imm(0x4), Imm(0x87), Imm(0x22), Imm(0x34), Imm(0x3a), Imm(0x82), Imm(0x40), Imm(0x4), Imm(0x36), Imm(0x84), Imm(0x3a), Imm(0x34), Imm(0x82), Imm(0x2c), Imm(0x30), Imm(0x85), Imm(0x2a)};
    byte const SilenceData[45] = {Imm(0x0), Imm(0x5d), Imm(0x55), Imm(0x4d), Imm(0x15), Imm(0x19), Imm(0x96), Imm(0x15), Imm(0xd5), Imm(0xe3), Imm(0xeb), Imm(0x2d), Imm(0xa6), Imm(0x2b), Imm(0x27), Imm(0x9c), Imm(0x9e), Imm(0x59), Imm(0x85), Imm(0x22), Imm(0x1c), Imm(0x14), Imm(0x84), Imm(0x1e), Imm(0x22), Imm(0x82), Imm(0x20), Imm(0x1e), Imm(0x4), Imm(0x87), Imm(0x1c), Imm(0x2c), Imm(0x34), Imm(0x82), Imm(0x36), Imm(0x4), Imm(0x30), Imm(0x34), Imm(0x4), Imm(0x2c), Imm(0x4), Imm(0x26), Imm(0x2a), Imm(0x85), Imm(0x22)};
    byte const GroundM_P2AData[44] = {Imm(0x84), Imm(0x4), Imm(0x82), Imm(0x3a), Imm(0x38), Imm(0x36), Imm(0x32), Imm(0x4), Imm(0x34), Imm(0x4), Imm(0x24), Imm(0x26), Imm(0x2c), Imm(0x4), Imm(0x26), Imm(0x2c), Imm(0x30), Imm(0x0), Imm(0x5), Imm(0xb4), Imm(0xb2), Imm(0xb0), Imm(0x2b), Imm(0xac), Imm(0x84), Imm(0x9c), Imm(0x9e), Imm(0xa2), Imm(0x84), Imm(0x94), Imm(0x9c), Imm(0x9e), Imm(0x85), Imm(0x14), Imm(0x22), Imm(0x84), Imm(0x2c), Imm(0x85), Imm(0x1e), Imm(0x82), Imm(0x2c), Imm(0x84), Imm(0x2c), Imm(0x1e)};
    byte const GroundM_P2BData[40] = {Imm(0x84), Imm(0x4), Imm(0x82), Imm(0x3a), Imm(0x38), Imm(0x36), Imm(0x32), Imm(0x4), Imm(0x34), Imm(0x4), Imm(0x64), Imm(0x4), Imm(0x64), Imm(0x86), Imm(0x64), Imm(0x0), Imm(0x5), Imm(0xb4), Imm(0xb2), Imm(0xb0), Imm(0x2b), Imm(0xac), Imm(0x84), Imm(0x37), Imm(0xb6), Imm(0xb6), Imm(0x45), Imm(0x85), Imm(0x14), Imm(0x1c), Imm(0x82), Imm(0x22), Imm(0x84), Imm(0x2c), Imm(0x4e), Imm(0x82), Imm(0x4e), Imm(0x84), Imm(0x4e), Imm(0x22)};
    byte const GroundM_P2CData[37] = {Imm(0x84), Imm(0x4), Imm(0x85), Imm(0x32), Imm(0x85), Imm(0x30), Imm(0x86), Imm(0x2c), Imm(0x4), Imm(0x0), Imm(0x5), Imm(0xa4), Imm(0x5), Imm(0x9e), Imm(0x5), Imm(0x9d), Imm(0x85), Imm(0x84), Imm(0x14), Imm(0x85), Imm(0x24), Imm(0x28), Imm(0x2c), Imm(0x82), Imm(0x22), Imm(0x84), Imm(0x22), Imm(0x14), Imm(0x21), Imm(0xd0), Imm(0xc4), Imm(0xd0), Imm(0x31), Imm(0xd0), Imm(0xc4), Imm(0xd0), Imm(0x0)};
    byte const GroundM_P3AData[25] = {Imm(0x82), Imm(0x2c), Imm(0x84), Imm(0x2c), Imm(0x2c), Imm(0x82), Imm(0x2c), Imm(0x30), Imm(0x4), Imm(0x34), Imm(0x2c), Imm(0x4), Imm(0x26), Imm(0x86), Imm(0x22), Imm(0x0), Imm(0xa4), Imm(0x25), Imm(0x25), Imm(0xa4), Imm(0x29), Imm(0xa2), Imm(0x1d), Imm(0x9c), Imm(0x95)};
    byte const GroundM_P3BData[30] = {Imm(0x82), Imm(0x2c), Imm(0x2c), Imm(0x4), Imm(0x2c), Imm(0x4), Imm(0x2c), Imm(0x30), Imm(0x85), Imm(0x34), Imm(0x4), Imm(0x4), Imm(0x0), Imm(0xa4), Imm(0x25), Imm(0x25), Imm(0xa4), Imm(0xa8), Imm(0x63), Imm(0x4), Imm(0x85), Imm(0xe), Imm(0x1a), Imm(0x84), Imm(0x24), Imm(0x85), Imm(0x22), Imm(0x14), Imm(0x84), Imm(0xc)};
    byte const GroundMLdInData[44] = {Imm(0x82), Imm(0x34), Imm(0x84), Imm(0x34), Imm(0x34), Imm(0x82), Imm(0x2c), Imm(0x84), Imm(0x34), Imm(0x86), Imm(0x3a), Imm(0x4), Imm(0x0), Imm(0xa0), Imm(0x21), Imm(0x21), Imm(0xa0), Imm(0x21), Imm(0x2b), Imm(0x5), Imm(0xa3), Imm(0x82), Imm(0x18), Imm(0x84), Imm(0x18), Imm(0x18), Imm(0x82), Imm(0x18), Imm(0x18), Imm(0x4), Imm(0x86), Imm(0x3a), Imm(0x22), Imm(0x31), Imm(0x90), Imm(0x31), Imm(0x90), Imm(0x31), Imm(0x71), Imm(0x31), Imm(0x90), Imm(0x90), Imm(0x90), Imm(0x0)};
    byte const GroundM_P4AData[38] = {Imm(0x82), Imm(0x34), Imm(0x84), Imm(0x2c), Imm(0x85), Imm(0x22), Imm(0x84), Imm(0x24), Imm(0x82), Imm(0x26), Imm(0x36), Imm(0x4), Imm(0x36), Imm(0x86), Imm(0x26), Imm(0x0), Imm(0xac), Imm(0x27), Imm(0x5d), Imm(0x1d), Imm(0x9e), Imm(0x2d), Imm(0xac), Imm(0x9f), Imm(0x85), Imm(0x14), Imm(0x82), Imm(0x20), Imm(0x84), Imm(0x22), Imm(0x2c), Imm(0x1e), Imm(0x1e), Imm(0x82), Imm(0x2c), Imm(0x2c), Imm(0x1e), Imm(0x4)};
    byte const GroundM_P4BData[39] = {Imm(0x87), Imm(0x2a), Imm(0x40), Imm(0x40), Imm(0x40), Imm(0x3a), Imm(0x36), Imm(0x82), Imm(0x34), Imm(0x2c), Imm(0x4), Imm(0x26), Imm(0x86), Imm(0x22), Imm(0x0), Imm(0xe3), Imm(0xf7), Imm(0xf7), Imm(0xf7), Imm(0xf5), Imm(0xf1), Imm(0xac), Imm(0x27), Imm(0x9e), Imm(0x9d), Imm(0x85), Imm(0x18), Imm(0x82), Imm(0x1e), Imm(0x84), Imm(0x22), Imm(0x2a), Imm(0x22), Imm(0x22), Imm(0x82), Imm(0x2c), Imm(0x2c), Imm(0x22), Imm(0x4)};
    byte const DeathMusData[2] = {Imm(0x86), Imm(0x4)};
    byte const GroundM_P4CData[48] = {Imm(0x82), Imm(0x2a), Imm(0x36), Imm(0x4), Imm(0x36), Imm(0x87), Imm(0x36), Imm(0x34), Imm(0x30), Imm(0x86), Imm(0x2c), Imm(0x4), Imm(0x0), Imm(0x0), Imm(0x68), Imm(0x6a), Imm(0x6c), Imm(0x45), Imm(0xa2), Imm(0x31), Imm(0xb0), Imm(0xf1), Imm(0xed), Imm(0xeb), Imm(0xa2), Imm(0x1d), Imm(0x9c), Imm(0x95), Imm(0x86), Imm(0x4), Imm(0x85), Imm(0x22), Imm(0x82), Imm(0x22), Imm(0x87), Imm(0x22), Imm(0x26), Imm(0x2a), Imm(0x84), Imm(0x2c), Imm(0x22), Imm(0x86), Imm(0x14), Imm(0x51), Imm(0x90), Imm(0x31), Imm(0x11), Imm(0x0)};
    byte const CastleMusData[161] = {Imm(0x80), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x26), Imm(0x22), Imm(0x24), Imm(0x22), Imm(0x26), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x2a), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x26), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x26), Imm(0x22), Imm(0x24), Imm(0x22), Imm(0x26), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x2a), Imm(0x22), Imm(0x28), Imm(0x22), Imm(0x26), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x24), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x28), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x28), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x24), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x24), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x28), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x28), Imm(0x20), Imm(0x26), Imm(0x20), Imm(0x24), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x32), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x2e), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x2e), Imm(0x28), Imm(0x2c), Imm(0x28), Imm(0x2e), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x32), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x2e), Imm(0x28), Imm(0x30), Imm(0x28), Imm(0x2e), Imm(0x28), Imm(0x2c), Imm(0x28), Imm(0x2e), Imm(0x0), Imm(0x4), Imm(0x70), Imm(0x6e), Imm(0x6c), Imm(0x6e), Imm(0x70), Imm(0x72), Imm(0x70), Imm(0x6e), Imm(0x70), Imm(0x6e), Imm(0x6c), Imm(0x6e), Imm(0x70), Imm(0x72), Imm(0x70), Imm(0x6e), Imm(0x6e), Imm(0x6c), Imm(0x6e), Imm(0x70), Imm(0x6e), Imm(0x70), Imm(0x6e), Imm(0x6c), Imm(0x6e), Imm(0x6c), Imm(0x6e), Imm(0x70), Imm(0x6e), Imm(0x70), Imm(0x6e), Imm(0x6c), Imm(0x76), Imm(0x78), Imm(0x76), Imm(0x74), Imm(0x76), Imm(0x74), Imm(0x72), Imm(0x74), Imm(0x76), Imm(0x78), Imm(0x76), Imm(0x74), Imm(0x76), Imm(0x74), Imm(0x72), Imm(0x74), Imm(0x84), Imm(0x1a), Imm(0x83), Imm(0x18), Imm(0x20), Imm(0x84), Imm(0x1e), Imm(0x83), Imm(0x1c), Imm(0x28), Imm(0x26), Imm(0x1c), Imm(0x1a), Imm(0x1c)};
    byte const GameOverMusData[45] = {Imm(0x82), Imm(0x2c), Imm(0x4), Imm(0x4), Imm(0x22), Imm(0x4), Imm(0x4), Imm(0x84), Imm(0x1c), Imm(0x87), Imm(0x26), Imm(0x2a), Imm(0x26), Imm(0x84), Imm(0x24), Imm(0x28), Imm(0x24), Imm(0x80), Imm(0x22), Imm(0x0), Imm(0x9c), Imm(0x5), Imm(0x94), Imm(0x5), Imm(0xd), Imm(0x9f), Imm(0x1e), Imm(0x9c), Imm(0x98), Imm(0x9d), Imm(0x82), Imm(0x22), Imm(0x4), Imm(0x4), Imm(0x1c), Imm(0x4), Imm(0x4), Imm(0x84), Imm(0x14), Imm(0x86), Imm(0x1e), Imm(0x80), Imm(0x16), Imm(0x80), Imm(0x14)};
    byte const TimeRunOutMusData[62] = {Imm(0x81), Imm(0x1c), Imm(0x30), Imm(0x4), Imm(0x30), Imm(0x30), Imm(0x4), Imm(0x1e), Imm(0x32), Imm(0x4), Imm(0x32), Imm(0x32), Imm(0x4), Imm(0x20), Imm(0x34), Imm(0x4), Imm(0x34), Imm(0x34), Imm(0x4), Imm(0x36), Imm(0x4), Imm(0x84), Imm(0x36), Imm(0x0), Imm(0x46), Imm(0xa4), Imm(0x64), Imm(0xa4), Imm(0x48), Imm(0xa6), Imm(0x66), Imm(0xa6), Imm(0x4a), Imm(0xa8), Imm(0x68), Imm(0xa8), Imm(0x6a), Imm(0x44), Imm(0x2b), Imm(0x81), Imm(0x2a), Imm(0x42), Imm(0x4), Imm(0x42), Imm(0x42), Imm(0x4), Imm(0x2c), Imm(0x64), Imm(0x4), Imm(0x64), Imm(0x64), Imm(0x4), Imm(0x2e), Imm(0x46), Imm(0x4), Imm(0x46), Imm(0x46), Imm(0x4), Imm(0x22), Imm(0x4), Imm(0x84), Imm(0x22)};
    byte const WinLevelMusData[97] = {Imm(0x87), Imm(0x4), Imm(0x6), Imm(0xc), Imm(0x14), Imm(0x1c), Imm(0x22), Imm(0x86), Imm(0x2c), Imm(0x22), Imm(0x87), Imm(0x4), Imm(0x60), Imm(0xe), Imm(0x14), Imm(0x1a), Imm(0x24), Imm(0x86), Imm(0x2c), Imm(0x24), Imm(0x87), Imm(0x4), Imm(0x8), Imm(0x10), Imm(0x18), Imm(0x1e), Imm(0x28), Imm(0x86), Imm(0x30), Imm(0x30), Imm(0x80), Imm(0x64), Imm(0x0), Imm(0xcd), Imm(0xd5), Imm(0xdd), Imm(0xe3), Imm(0xed), Imm(0xf5), Imm(0xbb), Imm(0xb5), Imm(0xcf), Imm(0xd5), Imm(0xdb), Imm(0xe5), Imm(0xed), Imm(0xf3), Imm(0xbd), Imm(0xb3), Imm(0xd1), Imm(0xd9), Imm(0xdf), Imm(0xe9), Imm(0xf1), Imm(0xf7), Imm(0xbf), Imm(0xff), Imm(0xff), Imm(0xff), Imm(0x34), Imm(0x0), Imm(0x86), Imm(0x4), Imm(0x87), Imm(0x14), Imm(0x1c), Imm(0x22), Imm(0x86), Imm(0x34), Imm(0x84), Imm(0x2c), Imm(0x4), Imm(0x4), Imm(0x4), Imm(0x87), Imm(0x14), Imm(0x1a), Imm(0x24), Imm(0x86), Imm(0x32), Imm(0x84), Imm(0x2c), Imm(0x4), Imm(0x86), Imm(0x4), Imm(0x87), Imm(0x18), Imm(0x1e), Imm(0x28), Imm(0x86), Imm(0x36), Imm(0x87), Imm(0x30), Imm(0x30), Imm(0x30), Imm(0x80), Imm(0x2c)};
    byte const UndergroundMusData[65] = {Imm(0x82), Imm(0x14), Imm(0x2c), Imm(0x62), Imm(0x26), Imm(0x10), Imm(0x28), Imm(0x80), Imm(0x4), Imm(0x82), Imm(0x14), Imm(0x2c), Imm(0x62), Imm(0x26), Imm(0x10), Imm(0x28), Imm(0x80), Imm(0x4), Imm(0x82), Imm(0x8), Imm(0x1e), Imm(0x5e), Imm(0x18), Imm(0x60), Imm(0x1a), Imm(0x80), Imm(0x4), Imm(0x82), Imm(0x8), Imm(0x1e), Imm(0x5e), Imm(0x18), Imm(0x60), Imm(0x1a), Imm(0x86), Imm(0x4), Imm(0x83), Imm(0x1a), Imm(0x18), Imm(0x16), Imm(0x84), Imm(0x14), Imm(0x1a), Imm(0x18), Imm(0xe), Imm(0xc), Imm(0x16), Imm(0x83), Imm(0x14), Imm(0x20), Imm(0x1e), Imm(0x1c), Imm(0x28), Imm(0x26), Imm(0x87), Imm(0x24), Imm(0x1a), Imm(0x12), Imm(0x10), Imm(0x62), Imm(0xe), Imm(0x80), Imm(0x4), Imm(0x4), Imm(0x0)};
    byte const WaterMusData[255] = {Imm(0x82), Imm(0x18), Imm(0x1c), Imm(0x20), Imm(0x22), Imm(0x26), Imm(0x28), Imm(0x81), Imm(0x2a), Imm(0x2a), Imm(0x2a), Imm(0x4), Imm(0x2a), Imm(0x4), Imm(0x83), Imm(0x2a), Imm(0x82), Imm(0x22), Imm(0x86), Imm(0x34), Imm(0x32), Imm(0x34), Imm(0x81), Imm(0x4), Imm(0x22), Imm(0x26), Imm(0x2a), Imm(0x2c), Imm(0x30), Imm(0x86), Imm(0x34), Imm(0x83), Imm(0x32), Imm(0x82), Imm(0x36), Imm(0x84), Imm(0x34), Imm(0x85), Imm(0x4), Imm(0x81), Imm(0x22), Imm(0x86), Imm(0x30), Imm(0x2e), Imm(0x30), Imm(0x81), Imm(0x4), Imm(0x22), Imm(0x26), Imm(0x2a), Imm(0x2c), Imm(0x2e), Imm(0x86), Imm(0x30), Imm(0x83), Imm(0x22), Imm(0x82), Imm(0x36), Imm(0x84), Imm(0x34), Imm(0x85), Imm(0x4), Imm(0x81), Imm(0x22), Imm(0x86), Imm(0x3a), Imm(0x3a), Imm(0x3a), Imm(0x82), Imm(0x3a), Imm(0x81), Imm(0x40), Imm(0x82), Imm(0x4), Imm(0x81), Imm(0x3a), Imm(0x86), Imm(0x36), Imm(0x36), Imm(0x36), Imm(0x82), Imm(0x36), Imm(0x81), Imm(0x3a), Imm(0x82), Imm(0x4), Imm(0x81), Imm(0x36), Imm(0x86), Imm(0x34), Imm(0x82), Imm(0x26), Imm(0x2a), Imm(0x36), Imm(0x81), Imm(0x34), Imm(0x34), Imm(0x85), Imm(0x34), Imm(0x81), Imm(0x2a), Imm(0x86), Imm(0x2c), Imm(0x0), Imm(0x84), Imm(0x90), Imm(0xb0), Imm(0x84), Imm(0x50), Imm(0x50), Imm(0xb0), Imm(0x0), Imm(0x98), Imm(0x96), Imm(0x94), Imm(0x92), Imm(0x94), Imm(0x96), Imm(0x58), Imm(0x58), Imm(0x58), Imm(0x44), Imm(0x5c), Imm(0x44), Imm(0x9f), Imm(0xa3), Imm(0xa1), Imm(0xa3), Imm(0x85), Imm(0xa3), Imm(0xe0), Imm(0xa6), Imm(0x23), Imm(0xc4), Imm(0x9f), Imm(0x9d), Imm(0x9f), Imm(0x85), Imm(0x9f), Imm(0xd2), Imm(0xa6), Imm(0x23), Imm(0xc4), Imm(0xb5), Imm(0xb1), Imm(0xaf), Imm(0x85), Imm(0xb1), Imm(0xaf), Imm(0xad), Imm(0x85), Imm(0x95), Imm(0x9e), Imm(0xa2), Imm(0xaa), Imm(0x6a), Imm(0x6a), Imm(0x6b), Imm(0x5e), Imm(0x9d), Imm(0x84), Imm(0x4), Imm(0x4), Imm(0x82), Imm(0x22), Imm(0x86), Imm(0x22), Imm(0x82), Imm(0x14), Imm(0x22), Imm(0x2c), Imm(0x12), Imm(0x22), Imm(0x2a), Imm(0x14), Imm(0x22), Imm(0x2c), Imm(0x1c), Imm(0x22), Imm(0x2c), Imm(0x14), Imm(0x22), Imm(0x2c), Imm(0x12), Imm(0x22), Imm(0x2a), Imm(0x14), Imm(0x22), Imm(0x2c), Imm(0x1c), Imm(0x22), Imm(0x2c), Imm(0x18), Imm(0x22), Imm(0x2a), Imm(0x16), Imm(0x20), Imm(0x28), Imm(0x18), Imm(0x22), Imm(0x2a), Imm(0x12), Imm(0x22), Imm(0x2a), Imm(0x18), Imm(0x22), Imm(0x2a), Imm(0x12), Imm(0x22), Imm(0x2a), Imm(0x14), Imm(0x22), Imm(0x2c), Imm(0xc), Imm(0x22), Imm(0x2c), Imm(0x14), Imm(0x22), Imm(0x34), Imm(0x12), Imm(0x22), Imm(0x30), Imm(0x10), Imm(0x22), Imm(0x2e), Imm(0x16), Imm(0x22), Imm(0x34), Imm(0x18), Imm(0x26), Imm(0x36), Imm(0x16), Imm(0x26), Imm(0x36), Imm(0x14), Imm(0x26), Imm(0x36), Imm(0x12), Imm(0x22), Imm(0x36), Imm(0x5c), Imm(0x22), Imm(0x34), Imm(0xc), Imm(0x22), Imm(0x22), Imm(0x81), Imm(0x1e), Imm(0x1e), Imm(0x85), Imm(0x1e), Imm(0x81), Imm(0x12), Imm(0x86), Imm(0x14)};
    byte const EndOfCastleMusData[119] = {Imm(0x81), Imm(0x2c), Imm(0x22), Imm(0x1c), Imm(0x2c), Imm(0x22), Imm(0x1c), Imm(0x85), Imm(0x2c), Imm(0x4), Imm(0x81), Imm(0x2e), Imm(0x24), Imm(0x1e), Imm(0x2e), Imm(0x24), Imm(0x1e), Imm(0x85), Imm(0x2e), Imm(0x4), Imm(0x81), Imm(0x32), Imm(0x28), Imm(0x22), Imm(0x32), Imm(0x28), Imm(0x22), Imm(0x85), Imm(0x32), Imm(0x87), Imm(0x36), Imm(0x36), Imm(0x36), Imm(0x84), Imm(0x3a), Imm(0x0), Imm(0x5c), Imm(0x54), Imm(0x4c), Imm(0x5c), Imm(0x54), Imm(0x4c), Imm(0x5c), Imm(0x1c), Imm(0x1c), Imm(0x5c), Imm(0x5c), Imm(0x5c), Imm(0x5c), Imm(0x5e), Imm(0x56), Imm(0x4e), Imm(0x5e), Imm(0x56), Imm(0x4e), Imm(0x5e), Imm(0x1e), Imm(0x1e), Imm(0x5e), Imm(0x5e), Imm(0x5e), Imm(0x5e), Imm(0x62), Imm(0x5a), Imm(0x50), Imm(0x62), Imm(0x5a), Imm(0x50), Imm(0x62), Imm(0x22), Imm(0x22), Imm(0x62), Imm(0xe7), Imm(0xe7), Imm(0xe7), Imm(0x2b), Imm(0x86), Imm(0x14), Imm(0x81), Imm(0x14), Imm(0x80), Imm(0x14), Imm(0x14), Imm(0x81), Imm(0x14), Imm(0x14), Imm(0x14), Imm(0x14), Imm(0x86), Imm(0x16), Imm(0x81), Imm(0x16), Imm(0x80), Imm(0x16), Imm(0x16), Imm(0x81), Imm(0x16), Imm(0x16), Imm(0x16), Imm(0x16), Imm(0x81), Imm(0x28), Imm(0x22), Imm(0x1a), Imm(0x28), Imm(0x22), Imm(0x1a), Imm(0x28), Imm(0x80), Imm(0x28), Imm(0x28), Imm(0x81), Imm(0x28), Imm(0x87), Imm(0x2c), Imm(0x2c), Imm(0x2c), Imm(0x84), Imm(0x30)};
    byte const VictoryMusData[56] = {Imm(0x83), Imm(0x4), Imm(0x84), Imm(0xc), Imm(0x83), Imm(0x62), Imm(0x10), Imm(0x84), Imm(0x12), Imm(0x83), Imm(0x1c), Imm(0x22), Imm(0x1e), Imm(0x22), Imm(0x26), Imm(0x18), Imm(0x1e), Imm(0x4), Imm(0x1c), Imm(0x0), Imm(0xe3), Imm(0xe1), Imm(0xe3), Imm(0x1d), Imm(0xde), Imm(0xe0), Imm(0x23), Imm(0xec), Imm(0x75), Imm(0x74), Imm(0xf0), Imm(0xf4), Imm(0xf6), Imm(0xea), Imm(0x31), Imm(0x2d), Imm(0x83), Imm(0x12), Imm(0x14), Imm(0x4), Imm(0x18), Imm(0x1a), Imm(0x1c), Imm(0x14), Imm(0x26), Imm(0x22), Imm(0x1e), Imm(0x1c), Imm(0x18), Imm(0x1e), Imm(0x22), Imm(0xc), Imm(0x14), Imm(0xff), Imm(0xff), Imm(0xff)};
    byte const FreqRegLookupTbl[102] = {Imm(0x0), Imm(0x88), Imm(0x0), Imm(0x2f), Imm(0x0), Imm(0x0), Imm(0x2), Imm(0xa6), Imm(0x2), Imm(0x80), Imm(0x2), Imm(0x5c), Imm(0x2), Imm(0x3a), Imm(0x2), Imm(0x1a), Imm(0x1), Imm(0xdf), Imm(0x1), Imm(0xc4), Imm(0x1), Imm(0xab), Imm(0x1), Imm(0x93), Imm(0x1), Imm(0x7c), Imm(0x1), Imm(0x67), Imm(0x1), Imm(0x53), Imm(0x1), Imm(0x40), Imm(0x1), Imm(0x2e), Imm(0x1), Imm(0x1d), Imm(0x1), Imm(0xd), Imm(0x0), Imm(0xfe), Imm(0x0), Imm(0xef), Imm(0x0), Imm(0xe2), Imm(0x0), Imm(0xd5), Imm(0x0), Imm(0xc9), Imm(0x0), Imm(0xbe), Imm(0x0), Imm(0xb3), Imm(0x0), Imm(0xa9), Imm(0x0), Imm(0xa0), Imm(0x0), Imm(0x97), Imm(0x0), Imm(0x8e), Imm(0x0), Imm(0x86), Imm(0x0), Imm(0x77), Imm(0x0), Imm(0x7e), Imm(0x0), Imm(0x71), Imm(0x0), Imm(0x54), Imm(0x0), Imm(0x64), Imm(0x0), Imm(0x5f), Imm(0x0), Imm(0x59), Imm(0x0), Imm(0x50), Imm(0x0), Imm(0x47), Imm(0x0), Imm(0x43), Imm(0x0), Imm(0x3b), Imm(0x0), Imm(0x35), Imm(0x0), Imm(0x2a), Imm(0x0), Imm(0x23), Imm(0x4), Imm(0x75), Imm(0x3), Imm(0x57), Imm(0x2), Imm(0xf9), Imm(0x2), Imm(0xcf), Imm(0x1), Imm(0xfc), Imm(0x0), Imm(0x6a)};
    byte const MusicLengthLookupTbl[48] = {Imm(0x5), Imm(0xa), Imm(0x14), Imm(0x28), Imm(0x50), Imm(0x1e), Imm(0x3c), Imm(0x2), Imm(0x4), Imm(0x8), Imm(0x10), Imm(0x20), Imm(0x40), Imm(0x18), Imm(0x30), Imm(0xc), Imm(0x3), Imm(0x6), Imm(0xc), Imm(0x18), Imm(0x30), Imm(0x12), Imm(0x24), Imm(0x8), Imm(0x36), Imm(0x3), Imm(0x9), Imm(0x6), Imm(0x12), Imm(0x1b), Imm(0x24), Imm(0xc), Imm(0x24), Imm(0x2), Imm(0x6), Imm(0x4), Imm(0xc), Imm(0x12), Imm(0x18), Imm(0x8), Imm(0x12), Imm(0x1), Imm(0x3), Imm(0x2), Imm(0x6), Imm(0x9), Imm(0xc), Imm(0x4)};
    byte const EndOfCastleMusicEnvData[4] = {Imm(0x98), Imm(0x99), Imm(0x9a), Imm(0x9b)};
    byte const AreaMusicEnvData[8] = {Imm(0x90), Imm(0x94), Imm(0x94), Imm(0x95), Imm(0x95), Imm(0x96), Imm(0x97), Imm(0x98)};
    byte const WaterEventMusEnvData[40] = {Imm(0x90), Imm(0x91), Imm(0x92), Imm(0x92), Imm(0x93), Imm(0x93), Imm(0x93), Imm(0x94), Imm(0x94), Imm(0x94), Imm(0x94), Imm(0x94), Imm(0x94), Imm(0x95), Imm(0x95), Imm(0x95), Imm(0x95), Imm(0x95), Imm(0x95), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x96), Imm(0x95), Imm(0x95), Imm(0x94), Imm(0x93)};
    byte const BowserFlameEnvData[32] = {Imm(0x15), Imm(0x16), Imm(0x16), Imm(0x17), Imm(0x17), Imm(0x18), Imm(0x19), Imm(0x19), Imm(0x1a), Imm(0x1a), Imm(0x1c), Imm(0x1d), Imm(0x1d), Imm(0x1e), Imm(0x1e), Imm(0x1f), Imm(0x1f), Imm(0x1f), Imm(0x1f), Imm(0x1e), Imm(0x1d), Imm(0x1c), Imm(0x1e), Imm(0x1f), Imm(0x1f), Imm(0x1e), Imm(0x1d), Imm(0x1c), Imm(0x1a), Imm(0x18), Imm(0x16), Imm(0x14)};
    byte const BrickShatterEnvData[16] = {Imm(0x15), Imm(0x16), Imm(0x16), Imm(0x17), Imm(0x17), Imm(0x18), Imm(0x19), Imm(0x19), Imm(0x1a), Imm(0x1a), Imm(0x1c), Imm(0x1d), Imm(0x1d), Imm(0x1e), Imm(0x1e), Imm(0x1f)};
};
Data data;
#define VRAM_AddrTable_Low (data.VRAM_AddrTable_Low)
#define VRAM_AddrTable_High (data.VRAM_AddrTable_High)
#define VRAM_Buffer_Offset (data.VRAM_Buffer_Offset)
#define WSelectBufferTemplate (data.WSelectBufferTemplate)
#define MushroomIconData (data.MushroomIconData)
#define DemoActionData (data.DemoActionData)
#define DemoTimingData (data.DemoTimingData)
#define FloateyNumTileData (data.FloateyNumTileData)
#define ScoreUpdateData (data.ScoreUpdateData)
#define AreaPalette (data.AreaPalette)
#define BGColorCtrl_Addr (data.BGColorCtrl_Addr)
#define BackgroundColors (data.BackgroundColors)
#define PlayerColors (data.PlayerColors)
#define TopStatusBarLine (data.TopStatusBarLine)
#define WorldLivesDisplay (data.WorldLivesDisplay)
#define TwoPlayerTimeUp (data.TwoPlayerTimeUp)
#define OnePlayerTimeUp (data.OnePlayerTimeUp)
#define TwoPlayerGameOver (data.TwoPlayerGameOver)
#define OnePlayerGameOver (data.OnePlayerGameOver)
#define WarpZoneWelcome (data.WarpZoneWelcome)
#define LuigiName (data.LuigiName)
#define WarpZoneNumbers (data.WarpZoneNumbers)
#define GameTextOffsets (data.GameTextOffsets)
#define ColorRotatePalette (data.ColorRotatePalette)
#define BlankPalette (data.BlankPalette)
#define Palette3Data (data.Palette3Data)
#define BlockGfxData (data.BlockGfxData)
#define MetatileGraphics_Low (data.MetatileGraphics_Low)
#define MetatileGraphics_High (data.MetatileGraphics_High)
#define Palette0_MTiles (data.Palette0_MTiles)
#define Palette1_MTiles (data.Palette1_MTiles)
#define Palette2_MTiles (data.Palette2_MTiles)
#define Palette3_MTiles (data.Palette3_MTiles)
#define WaterPaletteData (data.WaterPaletteData)
#define GroundPaletteData (data.GroundPaletteData)
#define UndergroundPaletteData (data.UndergroundPaletteData)
#define CastlePaletteData (data.CastlePaletteData)
#define DaySnowPaletteData (data.DaySnowPaletteData)
#define NightSnowPaletteData (data.NightSnowPaletteData)
#define MushroomPaletteData (data.MushroomPaletteData)
#define BowserPaletteData (data.BowserPaletteData)
#define MarioThanksMessage (data.MarioThanksMessage)
#define LuigiThanksMessage (data.LuigiThanksMessage)
#define MushroomRetainerSaved (data.MushroomRetainerSaved)
#define PrincessSaved1 (data.PrincessSaved1)
#define PrincessSaved2 (data.PrincessSaved2)
#define WorldSelectMessage1 (data.WorldSelectMessage1)
#define WorldSelectMessage2 (data.WorldSelectMessage2)
#define StatusBarData (data.StatusBarData)
#define StatusBarOffset (data.StatusBarOffset)
#define DefaultSprOffsets (data.DefaultSprOffsets)
#define Sprite0Data (data.Sprite0Data)
#define MusicSelectData (data.MusicSelectData)
#define PlayerStarting_X_Pos (data.PlayerStarting_X_Pos)
#define AltYPosOffset (data.AltYPosOffset)
#define PlayerStarting_Y_Pos (data.PlayerStarting_Y_Pos)
#define PlayerBGPriorityData (data.PlayerBGPriorityData)
#define GameTimerData (data.GameTimerData)
#define HalfwayPageNybbles (data.HalfwayPageNybbles)
#define BSceneDataOffsets (data.BSceneDataOffsets)
#define BackSceneryData (data.BackSceneryData)
#define BackSceneryMetatiles (data.BackSceneryMetatiles)
#define FSceneDataOffsets (data.FSceneDataOffsets)
#define ForeSceneryData (data.ForeSceneryData)
#define TerrainMetatiles (data.TerrainMetatiles)
#define TerrainRenderBits (data.TerrainRenderBits)
#define BlockBuffLowBounds (data.BlockBuffLowBounds)
#define FrenzyIDData (data.FrenzyIDData)
#define PulleyRopeMetatiles (data.PulleyRopeMetatiles)
#define CastleMetatiles (data.CastleMetatiles)
#define SidePipeShaftData (data.SidePipeShaftData)
#define SidePipeTopPart (data.SidePipeTopPart)
#define SidePipeBottomPart (data.SidePipeBottomPart)
#define VerticalPipeData (data.VerticalPipeData)
#define CoinMetatileData (data.CoinMetatileData)
#define C_ObjectRow (data.C_ObjectRow)
#define C_ObjectMetatile (data.C_ObjectMetatile)
#define SolidBlockMetatiles (data.SolidBlockMetatiles)
#define BrickMetatiles (data.BrickMetatiles)
#define StaircaseHeightData (data.StaircaseHeightData)
#define StaircaseRowData (data.StaircaseRowData)
#define HoleMetatiles (data.HoleMetatiles)
#define BlockBufferAddr (data.BlockBufferAddr)
#define AreaDataOfsLoopback (data.AreaDataOfsLoopback)
#define WorldAddrOffsets (data.WorldAddrOffsets)
#define World1Areas (data.World1Areas)
#define World2Areas (data.World2Areas)
#define World3Areas (data.World3Areas)
#define World4Areas (data.World4Areas)
#define World5Areas (data.World5Areas)
#define World6Areas (data.World6Areas)
#define World7Areas (data.World7Areas)
#define World8Areas (data.World8Areas)
#define EnemyAddrHOffsets (data.EnemyAddrHOffsets)
#define EnemyDataAddrLow (data.EnemyDataAddrLow)
#define EnemyDataAddrHigh (data.EnemyDataAddrHigh)
#define AreaDataHOffsets (data.AreaDataHOffsets)
#define AreaDataAddrLow (data.AreaDataAddrLow)
#define AreaDataAddrHigh (data.AreaDataAddrHigh)
#define E_CastleArea1 (data.E_CastleArea1)
#define E_CastleArea2 (data.E_CastleArea2)
#define E_CastleArea3 (data.E_CastleArea3)
#define E_CastleArea4 (data.E_CastleArea4)
#define E_CastleArea5 (data.E_CastleArea5)
#define E_CastleArea6 (data.E_CastleArea6)
#define E_GroundArea1 (data.E_GroundArea1)
#define E_GroundArea2 (data.E_GroundArea2)
#define E_GroundArea3 (data.E_GroundArea3)
#define E_GroundArea4 (data.E_GroundArea4)
#define E_GroundArea5 (data.E_GroundArea5)
#define E_GroundArea6 (data.E_GroundArea6)
#define E_GroundArea7 (data.E_GroundArea7)
#define E_GroundArea8 (data.E_GroundArea8)
#define E_GroundArea9 (data.E_GroundArea9)
#define E_GroundArea10 (data.E_GroundArea10)
#define E_GroundArea11 (data.E_GroundArea11)
#define E_GroundArea12 (data.E_GroundArea12)
#define E_GroundArea13 (data.E_GroundArea13)
#define E_GroundArea14 (data.E_GroundArea14)
#define E_GroundArea15 (data.E_GroundArea15)
#define E_GroundArea16 (data.E_GroundArea16)
#define E_GroundArea17 (data.E_GroundArea17)
#define E_GroundArea18 (data.E_GroundArea18)
#define E_GroundArea19 (data.E_GroundArea19)
#define E_GroundArea20 (data.E_GroundArea20)
#define E_GroundArea21 (data.E_GroundArea21)
#define E_GroundArea22 (data.E_GroundArea22)
#define E_UndergroundArea1 (data.E_UndergroundArea1)
#define E_UndergroundArea2 (data.E_UndergroundArea2)
#define E_UndergroundArea3 (data.E_UndergroundArea3)
#define E_WaterArea1 (data.E_WaterArea1)
#define E_WaterArea2 (data.E_WaterArea2)
#define E_WaterArea3 (data.E_WaterArea3)
#define L_CastleArea1 (data.L_CastleArea1)
#define L_CastleArea2 (data.L_CastleArea2)
#define L_CastleArea3 (data.L_CastleArea3)
#define L_CastleArea4 (data.L_CastleArea4)
#define L_CastleArea5 (data.L_CastleArea5)
#define L_CastleArea6 (data.L_CastleArea6)
#define L_GroundArea1 (data.L_GroundArea1)
#define L_GroundArea2 (data.L_GroundArea2)
#define L_GroundArea3 (data.L_GroundArea3)
#define L_GroundArea4 (data.L_GroundArea4)
#define L_GroundArea5 (data.L_GroundArea5)
#define L_GroundArea6 (data.L_GroundArea6)
#define L_GroundArea7 (data.L_GroundArea7)
#define L_GroundArea8 (data.L_GroundArea8)
#define L_GroundArea9 (data.L_GroundArea9)
#define L_GroundArea10 (data.L_GroundArea10)
#define L_GroundArea11 (data.L_GroundArea11)
#define L_GroundArea12 (data.L_GroundArea12)
#define L_GroundArea13 (data.L_GroundArea13)
#define L_GroundArea14 (data.L_GroundArea14)
#define L_GroundArea15 (data.L_GroundArea15)
#define L_GroundArea16 (data.L_GroundArea16)
#define L_GroundArea17 (data.L_GroundArea17)
#define L_GroundArea18 (data.L_GroundArea18)
#define L_GroundArea19 (data.L_GroundArea19)
#define L_GroundArea20 (data.L_GroundArea20)
#define L_GroundArea21 (data.L_GroundArea21)
#define L_GroundArea22 (data.L_GroundArea22)
#define L_UndergroundArea1 (data.L_UndergroundArea1)
#define L_UndergroundArea2 (data.L_UndergroundArea2)
#define L_UndergroundArea3 (data.L_UndergroundArea3)
#define L_WaterArea1 (data.L_WaterArea1)
#define L_WaterArea2 (data.L_WaterArea2)
#define L_WaterArea3 (data.L_WaterArea3)
#define X_SubtracterData (data.X_SubtracterData)
#define OffscrJoypadBitsData (data.OffscrJoypadBitsData)
#define Hidden1UpCoinAmts (data.Hidden1UpCoinAmts)
#define ClimbAdderLow (data.ClimbAdderLow)
#define ClimbAdderHigh (data.ClimbAdderHigh)
#define JumpMForceData (data.JumpMForceData)
#define FallMForceData (data.FallMForceData)
#define PlayerYSpdData (data.PlayerYSpdData)
#define InitMForceData (data.InitMForceData)
#define MaxLeftXSpdData (data.MaxLeftXSpdData)
#define MaxRightXSpdData (data.MaxRightXSpdData)
#define FrictionData (data.FrictionData)
#define Climb_Y_SpeedData (data.Climb_Y_SpeedData)
#define Climb_Y_MForceData (data.Climb_Y_MForceData)
#define PlayerAnimTmrData (data.PlayerAnimTmrData)
#define FireballXSpdData (data.FireballXSpdData)
#define Bubble_MForceData (data.Bubble_MForceData)
#define BubbleTimerData (data.BubbleTimerData)
#define FlagpoleScoreMods (data.FlagpoleScoreMods)
#define FlagpoleScoreDigits (data.FlagpoleScoreDigits)
#define Jumpspring_Y_PosData (data.Jumpspring_Y_PosData)
#define VineHeightData (data.VineHeightData)
#define CannonBitmasks (data.CannonBitmasks)
#define BulletBillXSpdData (data.BulletBillXSpdData)
#define HammerEnemyOfsData (data.HammerEnemyOfsData)
#define HammerXSpdData (data.HammerXSpdData)
#define CoinTallyOffsets (data.CoinTallyOffsets)
#define ScoreOffsets (data.ScoreOffsets)
#define StatusBarNybbles (data.StatusBarNybbles)
#define BlockYPosAdderData (data.BlockYPosAdderData)
#define BrickQBlockMetatiles (data.BrickQBlockMetatiles)
#define MaxSpdBlockData (data.MaxSpdBlockData)
#define LoopCmdWorldNumber (data.LoopCmdWorldNumber)
#define LoopCmdPageNumber (data.LoopCmdPageNumber)
#define LoopCmdYPosition (data.LoopCmdYPosition)
#define NormalXSpdData (data.NormalXSpdData)
#define HBroWalkingTimerData (data.HBroWalkingTimerData)
#define PRDiffAdjustData (data.PRDiffAdjustData)
#define FirebarSpinSpdData (data.FirebarSpinSpdData)
#define FirebarSpinDirData (data.FirebarSpinDirData)
#define FlyCCXPositionData (data.FlyCCXPositionData)
#define FlyCCXSpeedData (data.FlyCCXSpeedData)
#define FlyCCTimerData (data.FlyCCTimerData)
#define FlameYPosData (data.FlameYPosData)
#define FlameYMFAdderData (data.FlameYMFAdderData)
#define FireworksXPosData (data.FireworksXPosData)
#define FireworksYPosData (data.FireworksYPosData)
#define Bitmasks (data.Bitmasks)
#define Enemy17YPosData (data.Enemy17YPosData)
#define SwimCC_IDData (data.SwimCC_IDData)
#define PlatPosDataLow (data.PlatPosDataLow)
#define PlatPosDataHigh (data.PlatPosDataHigh)
#define HammerThrowTmrData (data.HammerThrowTmrData)
#define XSpeedAdderData (data.XSpeedAdderData)
#define RevivedXSpeed (data.RevivedXSpeed)
#define HammerBroJumpLData (data.HammerBroJumpLData)
#define BlooberBitmasks (data.BlooberBitmasks)
#define SwimCCXMoveData (data.SwimCCXMoveData)
#define FirebarPosLookupTbl (data.FirebarPosLookupTbl)
#define FirebarMirrorData (data.FirebarMirrorData)
#define FirebarTblOffsets (data.FirebarTblOffsets)
#define FirebarYPos (data.FirebarYPos)
#define PRandomSubtracter (data.PRandomSubtracter)
#define FlyCCBPriority (data.FlyCCBPriority)
#define LakituDiffAdj (data.LakituDiffAdj)
#define BridgeCollapseData (data.BridgeCollapseData)
#define PRandomRange (data.PRandomRange)
#define FlameTimerData (data.FlameTimerData)
#define StarFlagYPosAdder (data.StarFlagYPosAdder)
#define StarFlagXPosAdder (data.StarFlagXPosAdder)
#define StarFlagTileData (data.StarFlagTileData)
#define BowserIdentities (data.BowserIdentities)
#define ResidualXSpdData (data.ResidualXSpdData)
#define KickedShellXSpdData (data.KickedShellXSpdData)
#define DemotedKoopaXSpdData (data.DemotedKoopaXSpdData)
#define KickedShellPtsData (data.KickedShellPtsData)
#define StompedEnemyPtsData (data.StompedEnemyPtsData)
#define RevivalRateData (data.RevivalRateData)
#define SetBitsMask (data.SetBitsMask)
#define ClearBitsMask (data.ClearBitsMask)
#define PlayerPosSPlatData (data.PlayerPosSPlatData)
#define PlayerBGUpperExtent (data.PlayerBGUpperExtent)
#define AreaChangeTimerData (data.AreaChangeTimerData)
#define ClimbXPosAdder (data.ClimbXPosAdder)
#define ClimbPLocAdder (data.ClimbPLocAdder)
#define FlagpoleYPosData (data.FlagpoleYPosData)
#define SolidMTileUpperExt (data.SolidMTileUpperExt)
#define ClimbMTileUpperExt (data.ClimbMTileUpperExt)
#define EnemyBGCStateData (data.EnemyBGCStateData)
#define EnemyBGCXSpdData (data.EnemyBGCXSpdData)
#define BoundBoxCtrlData (data.BoundBoxCtrlData)
#define BlockBufferAdderData (data.BlockBufferAdderData)
#define BlockBuffer_X_Adder (data.BlockBuffer_X_Adder)
#define BlockBuffer_Y_Adder (data.BlockBuffer_Y_Adder)
#define VineYPosAdder (data.VineYPosAdder)
#define FirstSprXPos (data.FirstSprXPos)
#define FirstSprYPos (data.FirstSprYPos)
#define SecondSprXPos (data.SecondSprXPos)
#define SecondSprYPos (data.SecondSprYPos)
#define FirstSprTilenum (data.FirstSprTilenum)
#define SecondSprTilenum (data.SecondSprTilenum)
#define HammerSprAttrib (data.HammerSprAttrib)
#define FlagpoleScoreNumTiles (data.FlagpoleScoreNumTiles)
#define JumpingCoinTiles (data.JumpingCoinTiles)
#define PowerUpGfxTable (data.PowerUpGfxTable)
#define PowerUpAttributes (data.PowerUpAttributes)
#define EnemyGraphicsTable (data.EnemyGraphicsTable)
#define EnemyGfxTableOffsets (data.EnemyGfxTableOffsets)
#define EnemyAttributeData (data.EnemyAttributeData)
#define EnemyAnimTimingBMask (data.EnemyAnimTimingBMask)
#define JumpspringFrameOffsets (data.JumpspringFrameOffsets)
#define DefaultBlockObjTiles (data.DefaultBlockObjTiles)
#define ExplosionTiles (data.ExplosionTiles)
#define PlayerGfxTblOffsets (data.PlayerGfxTblOffsets)
#define PlayerGraphicsTable (data.PlayerGraphicsTable)
#define SwimKickTileNum (data.SwimKickTileNum)
#define IntermediatePlayerData (data.IntermediatePlayerData)
#define ChangeSizeOffsetAdder (data.ChangeSizeOffsetAdder)
#define ObjOffsetData (data.ObjOffsetData)
#define XOffscreenBitsData (data.XOffscreenBitsData)
#define DefaultXOnscreenOfs (data.DefaultXOnscreenOfs)
#define YOffscreenBitsData (data.YOffscreenBitsData)
#define DefaultYOnscreenOfs (data.DefaultYOnscreenOfs)
#define HighPosUnitData (data.HighPosUnitData)
#define SwimStompEnvelopeData (data.SwimStompEnvelopeData)
#define ExtraLifeFreqData (data.ExtraLifeFreqData)
#define PowerUpGrabFreqData (data.PowerUpGrabFreqData)
#define PUp_VGrow_FreqData (data.PUp_VGrow_FreqData)
#define BrickShatterFreqData (data.BrickShatterFreqData)
#define MusicHeaderData (data.MusicHeaderData)
#define TimeRunningOutHdr (data.TimeRunningOutHdr)
#define Star_CloudHdr (data.Star_CloudHdr)
#define EndOfLevelMusHdr (data.EndOfLevelMusHdr)
#define ResidualHeaderData (data.ResidualHeaderData)
#define UndergroundMusHdr (data.UndergroundMusHdr)
#define SilenceHdr (data.SilenceHdr)
#define CastleMusHdr (data.CastleMusHdr)
#define VictoryMusHdr (data.VictoryMusHdr)
#define GameOverMusHdr (data.GameOverMusHdr)
#define WaterMusHdr (data.WaterMusHdr)
#define WinCastleMusHdr (data.WinCastleMusHdr)
#define GroundLevelPart1Hdr (data.GroundLevelPart1Hdr)
#define GroundLevelPart2AHdr (data.GroundLevelPart2AHdr)
#define GroundLevelPart2BHdr (data.GroundLevelPart2BHdr)
#define GroundLevelPart2CHdr (data.GroundLevelPart2CHdr)
#define GroundLevelPart3AHdr (data.GroundLevelPart3AHdr)
#define GroundLevelPart3BHdr (data.GroundLevelPart3BHdr)
#define GroundLevelLeadInHdr (data.GroundLevelLeadInHdr)
#define GroundLevelPart4AHdr (data.GroundLevelPart4AHdr)
#define GroundLevelPart4BHdr (data.GroundLevelPart4BHdr)
#define GroundLevelPart4CHdr (data.GroundLevelPart4CHdr)
#define DeathMusHdr (data.DeathMusHdr)
#define Star_CloudMData (data.Star_CloudMData)
#define GroundM_P1Data (data.GroundM_P1Data)
#define SilenceData (data.SilenceData)
#define GroundM_P2AData (data.GroundM_P2AData)
#define GroundM_P2BData (data.GroundM_P2BData)
#define GroundM_P2CData (data.GroundM_P2CData)
#define GroundM_P3AData (data.GroundM_P3AData)
#define GroundM_P3BData (data.GroundM_P3BData)
#define GroundMLdInData (data.GroundMLdInData)
#define GroundM_P4AData (data.GroundM_P4AData)
#define GroundM_P4BData (data.GroundM_P4BData)
#define DeathMusData (data.DeathMusData)
#define GroundM_P4CData (data.GroundM_P4CData)
#define CastleMusData (data.CastleMusData)
#define GameOverMusData (data.GameOverMusData)
#define TimeRunOutMusData (data.TimeRunOutMusData)
#define WinLevelMusData (data.WinLevelMusData)
#define UndergroundMusData (data.UndergroundMusData)
#define WaterMusData (data.WaterMusData)
#define EndOfCastleMusData (data.EndOfCastleMusData)
#define VictoryMusData (data.VictoryMusData)
#define FreqRegLookupTbl (data.FreqRegLookupTbl)
#define MusicLengthLookupTbl (data.MusicLengthLookupTbl)
#define EndOfCastleMusicEnvData (data.EndOfCastleMusicEnvData)
#define AreaMusicEnvData (data.AreaMusicEnvData)
#define WaterEventMusEnvData (data.WaterEventMusEnvData)
#define BowserFlameEnvData (data.BowserFlameEnvData)
#define BrickShatterEnvData (data.BrickShatterEnvData)
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
int _bit_hack_1007();
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
int GameText();
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
int _bit_hack_6605();
int Bridge_High();
int Bridge_Middle();
int _bit_hack_6625();
int Bridge_Low();
int _bit_hack_6631();
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
int AreaAddrOffsets();
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
int _bit_hack_15616();
int ExtraLifeMushBlock();
int _bit_hack_15622();
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
int _bit_hack_16126();
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
int _bit_hack_22679();
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
int _bit_hack_24631();
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
int Start() {
    sei();
    // pretty standard 6502 type init here
    cld();
    lda(Imm(0b10000));
    // init PPU control register 1
    sta((PPU_CTRL_REG1));
    ldx(Imm(0xff));
    // reset stack pointer
    txs();
    JMP(VBlank1);
}

int VBlank1() {
    // wait two frames
    lda((PPU_STATUS));
    BPL(VBlank1);
    JMP(VBlank2);
}

int VBlank2() {
    lda((PPU_STATUS));
    BPL(VBlank2);
    ldy((ColdBootOffset));
    ldx(Imm(0x5));
    JMP(WBootCheck);
}

int WBootCheck() {
    // load default cold boot pointer
    // this is where we check for a warm boot
    // check each score digit in the top score
    lda((TopScoreDisplay), x);
    cmp(Imm(10));
    BCS(ColdBoot);
    // to see if we have a valid digit
    // if not, give up and proceed with cold boot
    dex();
    BPL(WBootCheck);
    lda((WarmBootValidation));
    cmp(Imm(0xa5));
    // second checkpoint, check to see if
    // another location has a specific value
    BNE(ColdBoot);
    ldy((WarmBootOffset));
    JMP(ColdBoot);
}

int ColdBoot() {
    // if passed both, load warm boot pointer
    // clear memory using pointer in Y
    JSR(InitializeMemory);
    sta((((SND_DELTA_REG)) + (Imm(1))));
    sta((OperMode));
    lda(Imm(0xa5));
    // reset delta counter load register
    // reset primary mode of operation
    // set warm boot flag
    sta((WarmBootValidation));
    sta((PseudoRandomBitReg));
    // set seed for pseudorandom register
    lda(Imm(0b1111));
    sta((SND_MASTERCTRL_REG));
    // enable all sound channels except dmc
    lda(Imm(0b110));
    sta((PPU_CTRL_REG2));
    // turn off clipping for OAM and background
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    inc((DisableScreenFlag));
    // initialize both name tables
    // set flag to disable screen output
    lda((Mirror_PPU_CTRL_REG1));
    ora(Imm(0b10000000));
    // enable NMIs
    JSR(WritePPUReg1);
    return 0;
    JMP(NonMaskableInterrupt);
}

int NonMaskableInterrupt() {
    lda((Mirror_PPU_CTRL_REG1));
    anda(Imm(0b1111111));
    // disable NMIs in mirror reg
    // save all other bits
    sta((Mirror_PPU_CTRL_REG1));
    anda(Imm(0b1111110));
    sta((PPU_CTRL_REG1));
    lda((Mirror_PPU_CTRL_REG2));
    // alter name table address to be $2800
    // (essentially $2000) but save other bits
    // disable OAM and background display by default
    anda(Imm(0b11100110));
    ldy((DisableScreenFlag));
    BNE(ScreenOff);
    lda((Mirror_PPU_CTRL_REG2));
    // get screen disable flag
    // if set, used bits as-is
    // otherwise reenable bits and save them
    ora(Imm(0b11110));
    JMP(ScreenOff);
}

int ScreenOff() {
    // save bits for later but not in register at the moment
    sta((Mirror_PPU_CTRL_REG2));
    anda(Imm(0b11100111));
    // disable screen for now
    sta((PPU_CTRL_REG2));
    ldx((PPU_STATUS));
    // reset flip-flop and reset scroll registers to zero
    lda(Imm(0x0));
    JSR(InitScroll);
    sta((PPU_SPR_ADDR));
    lda(Imm(0x2));
    // reset spr-ram address register
    // perform spr-ram DMA access on $0200-$02ff
    sta((SPR_DMA));
    ldx((VRAM_Buffer_AddrCtrl));
    lda((VRAM_AddrTable_Low), x);
    // load control for pointer to buffer contents
    // set indirect at $00 to pointer
    sta(Imm(0x0));
    lda((VRAM_AddrTable_High), x);
    sta(Imm(0x1));
    JSR(UpdateScreen);
    // update screen with buffer contents
    ldy(Imm(0x0));
    ldx((VRAM_Buffer_AddrCtrl));
    // check for usage of $0341
    cpx(Imm(0x6));
    BNE(InitBuffer);
    iny();
    JMP(InitBuffer);
}

int InitBuffer() {
    ldx((VRAM_Buffer_Offset), y);
    lda(Imm(0x0));
    // clear buffer header at last location
    sta((VRAM_Buffer1_Offset), x);
    sta((VRAM_Buffer1), x);
    sta((VRAM_Buffer_AddrCtrl));
    lda((Mirror_PPU_CTRL_REG2));
    // reinit address control to $0301
    // copy mirror of $2001 to register
    sta((PPU_CTRL_REG2));
    JSR(SoundEngine);
    JSR(ReadJoypads);
    JSR(PauseRoutine);
    // play sound
    // read joypads
    // handle pause
    JSR(UpdateTopScore);
    lda((GamePauseStatus));
    // check for pause status
    lsr();
    BCS(PauseSkip);
    lda((TimerControl));
    BEQ(DecTimers);
    // if master timer control not set, decrement
    // all frame and interval timers
    dec((TimerControl));
    BNE(NoDecTimers);
    JMP(DecTimers);
}

int DecTimers() {
    // load end offset for end of frame timers
    ldx(Imm(0x14));
    dec((IntervalTimerControl));
    BPL(DecTimersLoop);
    // decrement interval timer control,
    // if not expired, only frame timers will decrement
    lda(Imm(0x14));
    sta((IntervalTimerControl));
    ldx(Imm(0x23));
    JMP(DecTimersLoop);
}

int DecTimersLoop() {
    // if control for interval timers expired,
    // interval timers will decrement along with frame timers
    // check current timer
    lda((Timers), x);
    BEQ(SkipExpTimer);
    dec((Timers), x);
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
    inc((FrameCounter));
    JMP(PauseSkip);
}

int PauseSkip() {
    ldx(Imm(0x0));
    ldy(Imm(0x7));
    lda((PseudoRandomBitReg));
    anda(Imm(0b10));
    sta(Imm(0x0));
    lda((((PseudoRandomBitReg)) + (Imm(1))));
    anda(Imm(0b10));
    eor(Imm(0x0));
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
    ror((PseudoRandomBitReg), x);
    inx();
    dey();
    // increment to next byte
    // decrement for loop
    BNE(RotPRandomBit);
    lda((Sprite0HitDetectFlag));
    // check for flag here
    BEQ(SkipSprite0);
    JMP(Sprite0Clr);
}

int Sprite0Clr() {
    // wait for sprite 0 flag to clear, which will
    lda((PPU_STATUS));
    anda(Imm(0b1000000));
    // not happen until vblank has ended
    BNE(Sprite0Clr);
    lda((GamePauseStatus));
    // if in pause mode, do not bother with sprites at all
    lsr();
    BCS(Sprite0Hit);
    JSR(MoveSpritesOffscreen);
    JSR(SpriteShuffler);
    JMP(Sprite0Hit);
}

int Sprite0Hit() {
    // do sprite #0 hit detection
    lda((PPU_STATUS));
    anda(Imm(0b1000000));
    BEQ(Sprite0Hit);
    ldy(Imm(0x14));
    JMP(HBlankDelay);
}

int HBlankDelay() {
    dey();
    BNE(HBlankDelay);
    JMP(SkipSprite0);
}

int SkipSprite0() {
    // set scroll registers from variables
    lda((HorizontalScroll));
    sta((PPU_SCROLL_REG));
    lda((VerticalScroll));
    sta((PPU_SCROLL_REG));
    lda((Mirror_PPU_CTRL_REG1));
    // load saved mirror of $2000
    pha();
    sta((PPU_CTRL_REG1));
    lda((GamePauseStatus));
    // if in pause mode, do not perform operation mode stuff
    lsr();
    BCS(SkipMainOper);
    JSR(OperModeExecutionTree);
    JMP(SkipMainOper);
}

int SkipMainOper() {
    // otherwise do one of many, many possible subroutines
    // reset flip-flop
    lda((PPU_STATUS));
    pla();
    ora(Imm(0b10000000));
    // reactivate NMIs
    sta((PPU_CTRL_REG1));
    rti();
    JMP(PauseRoutine);
}

int PauseRoutine() {
    lda((OperMode));
    cmp((VictoryModeValue));
    // are we in victory mode?
    // if so, go ahead
    BEQ(ChkPauseTimer);
    cmp((GameModeValue));
    BNE(ExitPause);
    lda((OperMode_Task));
    // are we in game mode?
    // if not, leave
    // if we are in game mode, are we running game engine?
    cmp(Imm(0x3));
    BNE(ExitPause);
    JMP(ChkPauseTimer);
}

int ChkPauseTimer() {
    // if not, leave
    // check if pause timer is still counting down
    lda((GamePauseTimer));
    BEQ(ChkStart);
    dec((GamePauseTimer));
    // if so, decrement and leave
    rts();
    JMP(ChkStart);
}

int ChkStart() {
    // check to see if start is pressed
    lda((SavedJoypad1Bits));
    anda((Start_Button));
    // on controller 1
    BEQ(ClrPauseTimer);
    lda((GamePauseStatus));
    anda(Imm(0b10000000));
    BNE(ExitPause);
    lda(Imm(0x2b));
    // check to see if timer flag is set
    // and if so, do not reset timer (residual,
    // joypad reading routine makes this unnecessary)
    // set pause timer
    sta((GamePauseTimer));
    lda((GamePauseStatus));
    tay();
    iny();
    // set pause sfx queue for next pause mode
    sty((PauseSoundQueue));
    eor(Imm(0b1));
    // invert d0 and set d7
    ora(Imm(0b10000000));
    BNE(SetPause);
    JMP(ClrPauseTimer);
}

int ClrPauseTimer() {
    // unconditional branch
    // clear timer flag if timer is at zero and start button
    lda((GamePauseStatus));
    anda(Imm(0b1111111));
    JMP(SetPause);
}

int SetPause() {
    sta((GamePauseStatus));
    JMP(ExitPause);
}

int ExitPause() {
    rts();
    JMP(SpriteShuffler);
}

int SpriteShuffler() {
    ldy((AreaType));
    lda(Imm(0x28));
    sta(Imm(0x0));
    ldx(Imm(0xe));
    JMP(ShuffleLoop);
}

int ShuffleLoop() {
    // $00 - used for preset value
    // load level type, likely residual code
    // load preset value which will put it at
    // sprite #10
    // start at the end of OAM data offsets
    // check for offset value against
    lda((SprDataOffset), x);
    cmp(Imm(0x0));
    BCC(NextSprOffset);
    ldy((SprShuffleAmtOffset));
    // the preset value
    // if less, skip this part
    // get current offset to preset value we want to add
    clc();
    adc((SprShuffleAmt), y);
    BCC(StrSprOffset);
    // get shuffle amount, add to current sprite offset
    // if not exceeded $ff, skip second add
    clc();
    adc(Imm(0x0));
    JMP(StrSprOffset);
}

int StrSprOffset() {
    // otherwise add preset value $28 to offset
    // store new offset here or old one if branched to here
    sta((SprDataOffset), x);
    JMP(NextSprOffset);
}

int NextSprOffset() {
    // move backwards to next one
    dex();
    BPL(ShuffleLoop);
    ldx((SprShuffleAmtOffset));
    // load offset
    inx();
    cpx(Imm(0x3));
    BNE(SetAmtOffset);
    ldx(Imm(0x0));
    JMP(SetAmtOffset);
}

int SetAmtOffset() {
    stx((SprShuffleAmtOffset));
    ldx(Imm(0x8));
    // load offsets for values and storage
    ldy(Imm(0x2));
    JMP(SetMiscOffset);
}

int SetMiscOffset() {
    // load one of three OAM data offsets
    lda((((SprDataOffset)) + (Imm(5))), y);
    sta((((Misc_SprDataOffset)) - (Imm(2))), x);
    clc();
    adc(Imm(0x8));
    sta((((Misc_SprDataOffset)) - (Imm(1))), x);
    clc();
    // store first one unmodified, but
    // add eight to the second and eight
    // more to the third one
    // note that due to the way X is set up,
    // this code loads into the misc sprite offsets
    adc(Imm(0x8));
    sta((Misc_SprDataOffset), x);
    dex();
    dex();
    dex();
    dey();
    BPL(SetMiscOffset);
    // do this until all misc spr offsets are loaded
    rts();
    JMP(OperModeExecutionTree);
}

int OperModeExecutionTree() {
    lda((OperMode));
    JMP(MoveAllSpritesOffscreen);
}

int MoveAllSpritesOffscreen() {
    ldy(Imm(0x0));
    BRA(_bit_hack_1007);
    JMP(MoveSpritesOffscreen);
}

int MoveSpritesOffscreen() {
    ldy(Imm(0x4));
    JMP(_bit_hack_1007);
}

int _bit_hack_1007() {
    lda(Imm(0xf8));
    JMP(SprInitLoop);
}

int SprInitLoop() {
    // off the screen
    // write 248 into OAM data's Y coordinate
    sta((Sprite_Y_Position), y);
    iny();
    // which will move it off the screen
    iny();
    iny();
    iny();
    BNE(SprInitLoop);
    rts();
    JMP(TitleScreenMode);
}

int TitleScreenMode() {
    lda((OperMode_Task));
    JMP(GameMenuRoutine);
}

int GameMenuRoutine() {
    ldy(Imm(0x0));
    lda((SavedJoypad1Bits));
    ora((SavedJoypad2Bits));
    // check to see if either player pressed
    // only the start button (either joypad)
    cmp((Start_Button));
    BEQ(StartGame);
    cmp((((A_Button)) + ((Start_Button))));
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
    cmp((Select_Button));
    BEQ(SelectBLogic);
    ldx((DemoTimer));
    BNE(ChkWorldSel);
    sta((SelectTimer));
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
    ldx((WorldSelectEnableFlag));
    BEQ(NullJoypad);
    cmp((B_Button));
    // if so, check to see if the B button was pressed
    BNE(NullJoypad);
    iny();
    JMP(SelectBLogic);
}

int SelectBLogic() {
    // if so, increment Y and execute same code as select
    // if select or B pressed, check demo timer one last time
    lda((DemoTimer));
    BEQ(ResetTitle);
    lda(Imm(0x18));
    // if demo timer expired, branch to reset title screen mode
    // otherwise reset demo timer
    sta((DemoTimer));
    lda((SelectTimer));
    BNE(NullJoypad);
    lda(Imm(0x10));
    // check select/B button timer
    // if not expired, branch
    // otherwise reset select button timer
    sta((SelectTimer));
    cpy(Imm(0x1));
    BEQ(IncWorldSel);
    lda((NumberOfPlayers));
    eor(Imm(0b1));
    // was the B button pressed earlier?  if so, branch
    // note this will not be run if world selection is disabled
    // if no, must have been the select button, therefore
    // change number of players and draw icon accordingly
    sta((NumberOfPlayers));
    JSR(DrawMushroomIcon);
    JMP(NullJoypad);
    JMP(IncWorldSel);
}

int IncWorldSel() {
    // increment world select number
    ldx((WorldSelectNumber));
    inx();
    txa();
    anda(Imm(0b111));
    sta((WorldSelectNumber));
    // mask out higher bits
    // store as current world select number
    JSR(GoContinue);
    JMP(UpdateShroom);
}

int UpdateShroom() {
    // write template for world select in vram buffer
    lda((WSelectBufferTemplate), x);
    sta((((VRAM_Buffer1)) - (Imm(1))), x);
    // do this until all bytes are written
    inx();
    cpx(Imm(0x6));
    BMI(UpdateShroom);
    ldy((WorldNumber));
    iny();
    sty((((VRAM_Buffer1)) + (Imm(3))));
    JMP(NullJoypad);
}

int NullJoypad() {
    // get world number from variable and increment for
    // proper display, and put in blank byte before
    // null terminator
    // clear joypad bits for player 1
    lda(Imm(0x0));
    sta((SavedJoypad1Bits));
    JMP(RunDemo);
}

int RunDemo() {
    // run game engine
    JSR(GameCoreRoutine);
    lda((GameEngineSubroutine));
    // check to see if we're running lose life routine
    cmp(Imm(0x6));
    BNE(ExitMenu);
    JMP(ResetTitle);
}

int ResetTitle() {
    // if not, do not do all the resetting below
    // reset game modes, disable
    lda(Imm(0x0));
    sta((OperMode));
    sta((OperMode_Task));
    // sprite 0 check and disable
    // screen output
    sta((Sprite0HitDetectFlag));
    inc((DisableScreenFlag));
    rts();
    JMP(ChkContinue);
}

int ChkContinue() {
    // if timer for demo has expired, reset modes
    ldy((DemoTimer));
    BEQ(ResetTitle);
    asl();
    BCC(StartWorld1);
    lda((ContinueWorld));
    JSR(GoContinue);
    JMP(StartWorld1);
}

int StartWorld1() {
    JSR(LoadAreaPointer);
    inc((Hidden1UpFlag));
    // set 1-up box flag for both players
    inc((OffScr_Hidden1UpFlag));
    inc((FetchNewGameTimerFlag));
    inc((OperMode));
    lda((WorldSelectEnableFlag));
    sta((PrimaryHardMode));
    // set fetch new game timer flag
    // set next game mode
    // if world select flag is on, then primary
    // hard mode must be on as well
    lda(Imm(0x0));
    sta((OperMode_Task));
    // set game mode here, and clear demo timer
    sta((DemoTimer));
    ldx(Imm(0x17));
    lda(Imm(0x0));
    JMP(InitScores);
}

int InitScores() {
    // clear player scores and coin displays
    sta((ScoreAndCoinDisplay), x);
    dex();
    BPL(InitScores);
    JMP(ExitMenu);
}

int ExitMenu() {
    rts();
    JMP(GoContinue);
}

int GoContinue() {
    // start both players at the first area
    sta((WorldNumber));
    sta((OffScr_WorldNumber));
    ldx(Imm(0x0));
    stx((AreaNumber));
    // of the previously saved world number
    // note that on power-up using this function
    // will make no difference
    stx((OffScr_AreaNumber));
    rts();
    JMP(DrawMushroomIcon);
}

int DrawMushroomIcon() {
    ldy(Imm(0x7));
    JMP(IconDataRead);
}

int IconDataRead() {
    // read eight bytes to be read by transfer routine
    // note that the default position is set for a
    lda((MushroomIconData), y);
    sta((((VRAM_Buffer1)) - (Imm(1))), y);
    // 1-player game
    dey();
    BPL(IconDataRead);
    lda((NumberOfPlayers));
    BEQ(ExitIcon);
    lda(Imm(0x24));
    // check number of players
    // if set to 1-player game, we're done
    // otherwise, load blank tile in 1-player position
    sta((((VRAM_Buffer1)) + (Imm(3))));
    lda(Imm(0xce));
    // then load shroom icon tile in 2-player position
    sta((((VRAM_Buffer1)) + (Imm(5))));
    JMP(ExitIcon);
}

int ExitIcon() {
    rts();
    JMP(DemoEngine);
}

int DemoEngine() {
    ldx((DemoAction));
    lda((DemoActionTimer));
    BNE(DoAction);
    // load current demo action
    // load current action timer
    // if timer still counting down, skip
    inx();
    inc((DemoAction));
    sec();
    lda((((DemoTimingData)) - (Imm(1))), x);
    sta((DemoActionTimer));
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
    lda((((DemoActionData)) - (Imm(1))), x);
    sta((SavedJoypad1Bits));
    dec((DemoActionTimer));
    clc();
    JMP(DemoOver);
}

int DemoOver() {
    rts();
    JMP(VictoryMode);
}

int VictoryMode() {
    JSR(VictoryModeSubroutines);
    lda((OperMode_Task));
    BEQ(AutoPlayer);
    // run victory mode subroutines
    // get current task of victory mode
    // if on bridge collapse, skip enemy processing
    ldx(Imm(0x0));
    stx((ObjectOffset));
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
    lda((OperMode_Task));
    JMP(SetupVictoryMode);
}

int SetupVictoryMode() {
    ldx((ScreenRight_PageLoc));
    inx();
    stx((DestinationPageLoc));
    // get page location of right side of screen
    // increment to next page
    // store here
    lda((EndOfCastleMusic));
    sta((EventMusicQueue));
    JMP(IncModeTask_B);
    JMP(PlayerVictoryWalk);
}

int PlayerVictoryWalk() {
    ldy(Imm(0x0));
    // set value here to not walk player by default
    sty((VictoryWalkControl));
    lda((Player_PageLoc));
    cmp((DestinationPageLoc));
    BNE(PerformWalk);
    lda((Player_X_Position));
    cmp(Imm(0x60));
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
    inc((VictoryWalkControl));
    iny();
    JMP(DontWalk);
}

int DontWalk() {
    // note Y will be used to walk the player
    // put contents of Y in A and
    tya();
    JSR(AutoControlPlayer);
    lda((ScreenLeft_PageLoc));
    cmp((DestinationPageLoc));
    BEQ(ExitVWalk);
    // use A to move player to the right or not
    // check page location of left side of screen
    // against set value here
    // branch if equal to change modes if necessary
    lda((ScrollFractional));
    clc();
    // do fixed point math on fractional part of scroll
    adc(Imm(0x80));
    sta((ScrollFractional));
    lda(Imm(0x1));
    adc(Imm(0x0));
    tay();
    JSR(ScrollScreen);
    JSR(UpdScrollVar);
    inc((VictoryWalkControl));
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
    lda((VictoryWalkControl));
    BEQ(IncModeTask_A);
    rts();
    JMP(PrintVictoryMessages);
}

int PrintVictoryMessages() {
    lda((SecondaryMsgCounter));
    BNE(IncMsgCounter);
    lda((PrimaryMsgCounter));
    BEQ(ThankPlayer);
    cmp(Imm(0x9));
    BCS(IncMsgCounter);
    ldy((WorldNumber));
    // load secondary message counter
    // if set, branch to increment message counters
    // otherwise load primary message counter
    // if set to zero, branch to print first message
    // if at 9 or above, branch elsewhere (this comparison
    // is residual code, counter never reaches 9)
    // check world number
    cpy((World8));
    BNE(MRetainerMsg);
    cmp(Imm(0x3));
    BCC(IncMsgCounter);
    sbc(Imm(0x1));
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
    cmp(Imm(0x2));
    BCC(IncMsgCounter);
    JMP(ThankPlayer);
}

int ThankPlayer() {
    // if not at 2 yet (world 1-7 only), branch
    // put primary message counter into Y
    tay();
    BNE(SecondPartMsg);
    lda((CurrentPlayer));
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
    lda((WorldNumber));
    cmp((World8));
    BEQ(EvalForMusic);
    dey();
    cpy(Imm(0x4));
    BCS(SetEndTimer);
    cpy(Imm(0x3));
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
    cpy(Imm(0x3));
    BNE(PrintMsg);
    lda((VictoryMusic));
    sta((EventMusicQueue));
    JMP(PrintMsg);
}

int PrintMsg() {
    // to print message only (note world 1-7 will only
    // reach this code if counter = 0, and will always branch)
    // otherwise load victory music first (world 8 only)
    // put primary message counter in A
    tya();
    clc();
    adc(Imm(0xc));
    sta((VRAM_Buffer_AddrCtrl));
    JMP(IncMsgCounter);
}

int IncMsgCounter() {
    lda((SecondaryMsgCounter));
    clc();
    adc(Imm(0x4));
    // add four to secondary message counter
    sta((SecondaryMsgCounter));
    lda((PrimaryMsgCounter));
    adc(Imm(0x0));
    // add carry to primary message counter
    sta((PrimaryMsgCounter));
    cmp(Imm(0x7));
    JMP(SetEndTimer);
}

int SetEndTimer() {
    // check primary counter one more time
    // if not reached value yet, branch to leave
    BCC(ExitMsgs);
    lda(Imm(0x6));
    sta((WorldEndTimer));
    JMP(IncModeTask_A);
}

int IncModeTask_A() {
    // otherwise set world end timer
    // move onto next task in mode
    inc((OperMode_Task));
    JMP(ExitMsgs);
}

int ExitMsgs() {
    // leave
    rts();
    JMP(PlayerEndWorld);
}

int PlayerEndWorld() {
    lda((WorldEndTimer));
    BNE(EndExitOne);
    ldy((WorldNumber));
    cpy((World8));
    BCS(EndChkBButton);
    // check to see if world end timer expired
    // branch to leave if not
    // check world number
    // if on world 8, player is done with game,
    // thus branch to read controller
    lda(Imm(0x0));
    sta((AreaNumber));
    sta((LevelNumber));
    sta((OperMode_Task));
    inc((WorldNumber));
    JSR(LoadAreaPointer);
    inc((FetchNewGameTimerFlag));
    // otherwise initialize area number used as offset
    // and level number control to start at area 1
    // initialize secondary mode of operation
    // increment world number to move onto the next world
    // get area address offset for the next area
    // set flag to load game timer from header
    lda((GameModeValue));
    sta((OperMode));
    JMP(EndExitOne);
}

int EndExitOne() {
    // set mode of operation to game mode
    // and leave
    rts();
    JMP(EndChkBButton);
}

int EndChkBButton() {
    lda((SavedJoypad1Bits));
    ora((SavedJoypad2Bits));
    anda((B_Button));
    BEQ(EndExitTwo);
    lda(Imm(0x1));
    // check to see if B button was pressed on
    // either controller
    // branch to leave if not
    // otherwise set world selection flag
    sta((WorldSelectEnableFlag));
    lda(Imm(0xff));
    // remove onscreen player's lives
    sta((NumberofLives));
    JSR(TerminateGame);
    JMP(EndExitTwo);
}

int EndExitTwo() {
    // do sub to continue other player or end game
    // leave
    rts();
    JMP(FloateyNumbersRoutine);
}

int FloateyNumbersRoutine() {
    lda((FloateyNum_Control), x);
    BEQ(EndExitOne);
    cmp(Imm(0xb));
    // load control for floatey number
    // if zero, branch to leave
    // if less than $0b, branch
    BCC(ChkNumTimer);
    lda(Imm(0xb));
    sta((FloateyNum_Control), x);
    JMP(ChkNumTimer);
}

int ChkNumTimer() {
    // otherwise set to $0b, thus keeping
    // it in range
    // use as Y
    tay();
    lda((FloateyNum_Timer), x);
    BNE(DecNumTimer);
    sta((FloateyNum_Control), x);
    // check value here
    // if nonzero, branch ahead
    // initialize floatey number control and leave
    rts();
    JMP(DecNumTimer);
}

int DecNumTimer() {
    // decrement value here
    dec((FloateyNum_Timer), x);
    cmp(Imm(0x2b));
    // if not reached a certain point, branch
    BNE(ChkTallEnemy);
    cpy(Imm(0xb));
    BNE(LoadNumTiles);
    inc((NumberofLives));
    // check offset for $0b
    // branch ahead if not found
    // give player one extra life (1-up)
    lda((Sfx_ExtraLife));
    sta((Square2SoundQueue));
    JMP(LoadNumTiles);
}

int LoadNumTiles() {
    // and play the 1-up sound
    // load point value here
    lda((ScoreUpdateData), y);
    lsr();
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    tax();
    lda((ScoreUpdateData), y);
    anda(Imm(0b1111));
    sta((DigitModifier), x);
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
    ldy((Enemy_SprDataOffset), x);
    lda((Enemy_ID), x);
    // get enemy object identifier
    cmp((Spiny));
    BEQ(FloateyPart);
    // branch if spiny
    cmp((PiranhaPlant));
    BEQ(FloateyPart);
    // branch if piranha plant
    cmp((HammerBro));
    BEQ(GetAltOffset);
    // branch elsewhere if hammer bro
    cmp((GreyCheepCheep));
    BEQ(FloateyPart);
    // branch if cheep-cheep of either color
    cmp((RedCheepCheep));
    BEQ(FloateyPart);
    cmp((TallEnemy));
    BCS(GetAltOffset);
    // branch elsewhere if enemy object => $09
    lda((Enemy_State), x);
    cmp(Imm(0x2));
    BCS(FloateyPart);
    JMP(GetAltOffset);
}

int GetAltOffset() {
    // if enemy state defeated or otherwise
    // $02 or greater, branch beyond this part
    // load some kind of control bit
    ldx((SprDataOffset_Ctrl));
    ldy((Alt_SprDataOffset), x);
    ldx((ObjectOffset));
    JMP(FloateyPart);
}

int FloateyPart() {
    // get alternate OAM data offset
    // get enemy object offset again
    // get vertical coordinate for
    lda((FloateyNum_Y_Pos), x);
    cmp(Imm(0x18));
    BCC(SetupNumSpr);
    // floatey number, if coordinate in the
    // status bar, branch
    sbc(Imm(0x1));
    sta((FloateyNum_Y_Pos), x);
    JMP(SetupNumSpr);
}

int SetupNumSpr() {
    // otherwise subtract one and store as new
    // get vertical coordinate
    lda((FloateyNum_Y_Pos), x);
    sbc(Imm(0x8));
    JSR(DumpTwoSpr);
    lda((FloateyNum_X_Pos), x);
    sta((Sprite_X_Position), y);
    // subtract eight and dump into the
    // left and right sprite's Y coordinates
    // get horizontal coordinate
    // store into X coordinate of left sprite
    clc();
    adc(Imm(0x8));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    // add eight pixels and store into X
    // coordinate of right sprite
    lda(Imm(0x2));
    sta((Sprite_Attributes), y);
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    // set palette control in attribute bytes
    // of left and right sprites
    lda((FloateyNum_Control), x);
    asl();
    tax();
    // multiply our floatey number control by 2
    // and use as offset for look-up table
    lda((FloateyNumTileData), x);
    sta((Sprite_Tilenumber), y);
    // display first half of number of points
    lda((((FloateyNumTileData)) + (Imm(1))), x);
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    ldx((ObjectOffset));
    // display the second half
    // get enemy object offset and leave
    rts();
    JMP(ScreenRoutines);
}

int ScreenRoutines() {
    lda((ScreenRoutineTask));
    JMP(InitScreen);
}

int InitScreen() {
    JSR(MoveAllSpritesOffscreen);
    JSR(InitializeNameTables);
    // initialize all sprites including sprite #0
    // and erase both name and attribute tables
    lda((OperMode));
    BEQ(NextSubtask);
    ldx(Imm(0x3));
    // if mode still 0, do not load
    // into buffer pointer
    JMP(SetVRAMAddr_A);
    JMP(SetupIntermediate);
}

int SetupIntermediate() {
    lda((BackgroundColorCtrl));
    pha();
    // save current background color control
    // and player status to stack
    lda((PlayerStatus));
    pha();
    lda(Imm(0x0));
    sta((PlayerStatus));
    lda(Imm(0x2));
    sta((BackgroundColorCtrl));
    // set background color to black
    // and player status to not fiery
    // this is the ONLY time background color control
    // is set to less than 4
    JSR(GetPlayerColors);
    pla();
    sta((PlayerStatus));
    pla();
    sta((BackgroundColorCtrl));
    JMP(IncSubtask);
    JMP(GetAreaPalette);
}

int GetAreaPalette() {
    ldy((AreaType));
    ldx((AreaPalette), y);
    JMP(SetVRAMAddr_A);
}

int SetVRAMAddr_A() {
    // select appropriate palette to load
    // based on area type
    // store offset into buffer control
    stx((VRAM_Buffer_AddrCtrl));
    JMP(NextSubtask);
}

int NextSubtask() {
    // move onto next task
    JMP(IncSubtask);
    JMP(GetBackgroundColor);
}

int GetBackgroundColor() {
    ldy((BackgroundColorCtrl));
    BEQ(NoBGColor);
    lda((((BGColorCtrl_Addr)) - (Imm(4))), y);
    sta((VRAM_Buffer_AddrCtrl));
    JMP(NoBGColor);
}

int NoBGColor() {
    // check background color control
    // if not set, increment task and fetch palette
    // put appropriate palette into vram
    // note that if set to 5-7, $0301 will not be read
    // increment to next subtask and plod on through
    inc((ScreenRoutineTask));
    JMP(GetPlayerColors);
}

int GetPlayerColors() {
    ldx((VRAM_Buffer1_Offset));
    // get current buffer offset
    ldy(Imm(0x0));
    lda((CurrentPlayer));
    // check which player is on the screen
    BEQ(ChkFiery);
    ldy(Imm(0x4));
    JMP(ChkFiery);
}

int ChkFiery() {
    // load offset for luigi
    // check player status
    lda((PlayerStatus));
    cmp(Imm(0x2));
    BNE(StartClrGet);
    // if fiery, load alternate offset for fiery player
    ldy(Imm(0x8));
    JMP(StartClrGet);
}

int StartClrGet() {
    // do four colors
    lda(Imm(0x3));
    sta(Imm(0x0));
    JMP(ClrGetLoop);
}

int ClrGetLoop() {
    // fetch player colors and store them
    lda((PlayerColors), y);
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    // in the buffer
    iny();
    inx();
    dec(Imm(0x0));
    BPL(ClrGetLoop);
    ldx((VRAM_Buffer1_Offset));
    ldy((BackgroundColorCtrl));
    BNE(SetBGColor);
    ldy((AreaType));
    JMP(SetBGColor);
}

int SetBGColor() {
    // load original offset from before
    // if this value is four or greater, it will be set
    // therefore use it as offset to background color
    // otherwise use area type bits from area offset as offset
    // to background color instead
    lda((BackgroundColors), y);
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    lda(Imm(0x3f));
    sta((VRAM_Buffer1), x);
    // set for sprite palette address
    // save to buffer
    lda(Imm(0x10));
    sta((((VRAM_Buffer1)) + (Imm(1))), x);
    lda(Imm(0x4));
    // write length byte to buffer
    sta((((VRAM_Buffer1)) + (Imm(2))), x);
    lda(Imm(0x0));
    // now the null terminator
    sta((((VRAM_Buffer1)) + (Imm(7))), x);
    txa();
    clc();
    // move the buffer pointer ahead 7 bytes
    // in case we want to write anything else later
    adc(Imm(0x7));
    JMP(SetVRAMOffset);
}

int SetVRAMOffset() {
    // store as new vram buffer offset
    sta((VRAM_Buffer1_Offset));
    rts();
    JMP(GetAlternatePalette1);
}

int GetAlternatePalette1() {
    lda((AreaStyle));
    // check for mushroom level style
    cmp(Imm(0x1));
    BNE(NoAltPal);
    lda(Imm(0xb));
    JMP(SetVRAMAddr_B);
}

int SetVRAMAddr_B() {
    sta((VRAM_Buffer_AddrCtrl));
    JMP(NoAltPal);
}

int NoAltPal() {
    // now onto the next task
    JMP(IncSubtask);
    JMP(WriteTopStatusLine);
}

int WriteTopStatusLine() {
    lda(Imm(0x0));
    JSR(WriteGameText);
    JMP(IncSubtask);
    JMP(WriteBottomStatusLine);
}

int WriteBottomStatusLine() {
    JSR(GetSBNybbles);
    // write player's score and coin tally to screen
    ldx((VRAM_Buffer1_Offset));
    lda(Imm(0x20));
    // write address for world-area number on screen
    sta((VRAM_Buffer1), x);
    lda(Imm(0x73));
    sta((((VRAM_Buffer1)) + (Imm(1))), x);
    lda(Imm(0x3));
    // write length for it
    sta((((VRAM_Buffer1)) + (Imm(2))), x);
    ldy((WorldNumber));
    // first the world number
    iny();
    tya();
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    lda(Imm(0x28));
    // next the dash
    sta((((VRAM_Buffer1)) + (Imm(4))), x);
    ldy((LevelNumber));
    iny();
    // next the level number
    // increment for proper number display
    tya();
    sta((((VRAM_Buffer1)) + (Imm(5))), x);
    lda(Imm(0x0));
    // put null terminator on
    sta((((VRAM_Buffer1)) + (Imm(6))), x);
    txa();
    // move the buffer offset up by 6 bytes
    clc();
    adc(Imm(0x6));
    sta((VRAM_Buffer1_Offset));
    JMP(IncSubtask);
    JMP(DisplayTimeUp);
}

int DisplayTimeUp() {
    lda((GameTimerExpiredFlag));
    BEQ(NoTimeUp);
    // if game timer not expired, increment task
    // control 2 tasks forward, otherwise, stay here
    lda(Imm(0x0));
    sta((GameTimerExpiredFlag));
    lda(Imm(0x2));
    // reset timer expiration flag
    // output time-up screen to buffer
    JMP(OutputInter);
    JMP(NoTimeUp);
}

int NoTimeUp() {
    // increment control task 2 tasks forward
    inc((ScreenRoutineTask));
    JMP(IncSubtask);
    JMP(DisplayIntermediate);
}

int DisplayIntermediate() {
    lda((OperMode));
    BEQ(NoInter);
    cmp((GameOverModeValue));
    BEQ(GameOverInter);
    lda((AltEntranceControl));
    BNE(NoInter);
    ldy((AreaType));
    cpy(Imm(0x3));
    // check primary mode of operation
    // if in title screen mode, skip this
    // are we in game over mode?
    // if so, proceed to display game over screen
    // otherwise check for mode of alternate entry
    // and branch if found
    // check if we are on castle level
    // and if so, branch (possibly residual)
    BEQ(PlayerInter);
    lda((DisableIntermediate));
    BNE(NoInter);
    JMP(PlayerInter);
}

int PlayerInter() {
    // if this flag is set, skip intermediate lives display
    // and jump to specific task, otherwise
    // put player in appropriate place for
    JSR(DrawPlayer_Intermediate);
    lda(Imm(0x1));
    JMP(OutputInter);
}

int OutputInter() {
    JSR(WriteGameText);
    JSR(ResetScreenTimer);
    lda(Imm(0x0));
    sta((DisableScreenFlag));
    // reenable screen output
    rts();
    JMP(GameOverInter);
}

int GameOverInter() {
    // set screen timer
    lda(Imm(0x12));
    sta((ScreenTimer));
    lda(Imm(0x3));
    // output game over screen to buffer
    JSR(WriteGameText);
    JMP(IncModeTask_B);
    JMP(NoInter);
}

int NoInter() {
    // set for specific task and leave
    lda(Imm(0x8));
    sta((ScreenRoutineTask));
    rts();
    JMP(AreaParserTaskControl);
}

int AreaParserTaskControl() {
    inc((DisableScreenFlag));
    JMP(TaskLoop);
}

int TaskLoop() {
    // turn off screen
    // render column set of current area
    JSR(AreaParserTaskHandler);
    lda((AreaParserTaskNum));
    BNE(TaskLoop);
    dec((ColumnSets));
    // check number of tasks
    // if tasks still not all done, do another one
    // do we need to render more column sets?
    BPL(OutputCol);
    inc((ScreenRoutineTask));
    JMP(OutputCol);
}

int OutputCol() {
    // if not, move on to the next task
    // set vram buffer to output rendered column set
    lda(Imm(0x6));
    sta((VRAM_Buffer_AddrCtrl));
    // on next NMI
    rts();
    JMP(DrawTitleScreen);
}

int DrawTitleScreen() {
    lda((OperMode));
    BNE(IncModeTask_B);
    lda(HI8((TitleScreenDataOffset)));
    sta((PPU_ADDRESS));
    // are we in title screen mode?
    // if not, exit
    // load address $1ec0 into
    // the vram address register
    lda(LO8((TitleScreenDataOffset)));
    sta((PPU_ADDRESS));
    lda(Imm(0x3));
    sta(Imm(0x1));
    // put address $0300 into
    // the indirect at $00
    ldy(Imm(0x0));
    sty(Imm(0x0));
    lda((PPU_DATA));
    JMP(OutputTScr);
}

int OutputTScr() {
    // do one garbage read
    // get title screen from chr-rom
    lda((PPU_DATA));
    sta((Imm(0x0)), y);
    // store 256 bytes into buffer
    iny();
    BNE(ChkHiByte);
    inc(Imm(0x1));
    JMP(ChkHiByte);
}

int ChkHiByte() {
    // if not past 256 bytes, do not increment
    // otherwise increment high byte of indirect
    // check high byte?
    lda(Imm(0x1));
    cmp(Imm(0x4));
    BNE(OutputTScr);
    cpy(Imm(0x3a));
    BCC(OutputTScr);
    lda(Imm(0x5));
    JMP(SetVRAMAddr_B);
    JMP(ClearBuffersDrawIcon);
}

int ClearBuffersDrawIcon() {
    lda((OperMode));
    BNE(IncModeTask_B);
    ldx(Imm(0x0));
    JMP(TScrClear);
}

int TScrClear() {
    sta((((VRAM_Buffer1)) - (Imm(1))), x);
    sta((((((VRAM_Buffer1)) - (Imm(1)))) + (Imm(0x100))), x);
    dex();
    BNE(TScrClear);
    JSR(DrawMushroomIcon);
    JMP(IncSubtask);
}

int IncSubtask() {
    // draw player select icon
    // move onto next task
    inc((ScreenRoutineTask));
    rts();
    JMP(WriteTopScore);
}

int WriteTopScore() {
    lda(Imm(0xfa));
    // run display routine to display top score on title
    JSR(UpdateNumber);
    JMP(IncModeTask_B);
}

int IncModeTask_B() {
    // move onto next mode
    inc((OperMode_Task));
    rts();
    JMP(GameText);
}

int GameText() {
    JMP(WriteGameText);
}

int WriteGameText() {
    pha();
    // save text number to stack
    asl();
    tay();
    cpy(Imm(0x4));
    BCC(LdGameText);
    cpy(Imm(0x8));
    BCC(Chk2Players);
    ldy(Imm(0x8));
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
    lda((NumberOfPlayers));
    BNE(LdGameText);
    iny();
    JMP(LdGameText);
}

int LdGameText() {
    // if there are two, use current offset to also print name
    // otherwise increment offset by one to not print name
    // get offset to message we want to print
    ldx((GameTextOffsets), y);
    ldy(Imm(0x0));
    JMP(GameTextLoop);
}

int GameTextLoop() {
    // load message data
    lda((GameText), x);
    cmp(Imm(0xff));
    BEQ(EndGameText);
    sta((VRAM_Buffer1), y);
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
    lda(Imm(0x0));
    sta((VRAM_Buffer1), y);
    pla();
    // pull original text number from stack
    tax();
    cmp(Imm(0x4));
    // are we printing warp zone?
    BCS(PrintWarpZoneNumbers);
    dex();
    BNE(CheckPlayerName);
    lda((NumberofLives));
    clc();
    // are we printing the world/lives display?
    // if not, branch to check player's name
    // otherwise, check number of lives
    // and increment by one for display
    adc(Imm(0x1));
    cmp(Imm(10));
    // more than 9 lives?
    BCC(PutLives);
    sbc(Imm(10));
    ldy(Imm(0x9f));
    sty((((VRAM_Buffer1)) + (Imm(7))));
    JMP(PutLives);
}

int PutLives() {
    sta((((VRAM_Buffer1)) + (Imm(8))));
    ldy((WorldNumber));
    iny();
    // write world and level numbers (incremented for display)
    // to the buffer in the spaces surrounding the dash
    sty((((VRAM_Buffer1)) + (Imm(19))));
    ldy((LevelNumber));
    iny();
    sty((((VRAM_Buffer1)) + (Imm(21))));
    // we're done here
    rts();
    JMP(CheckPlayerName);
}

int CheckPlayerName() {
    lda((NumberOfPlayers));
    BEQ(ExitChkName);
    lda((CurrentPlayer));
    dex();
    // check number of players
    // if only 1 player, leave
    // load current player
    // check to see if current message number is for time up
    BNE(ChkLuigi);
    ldy((OperMode));
    // check for game over mode
    cpy((GameOverModeValue));
    BEQ(ChkLuigi);
    eor(Imm(0b1));
    JMP(ChkLuigi);
}

int ChkLuigi() {
    lsr();
    BCC(ExitChkName);
    // if mario is current player, do not change the name
    ldy(Imm(0x4));
    JMP(NameLoop);
}

int NameLoop() {
    // otherwise, replace "MARIO" with "LUIGI"
    lda((LuigiName), y);
    sta((((VRAM_Buffer1)) + (Imm(3))), y);
    dey();
    BPL(NameLoop);
    JMP(ExitChkName);
}

int ExitChkName() {
    rts();
    JMP(PrintWarpZoneNumbers);
}

int PrintWarpZoneNumbers() {
    sbc(Imm(0x4));
    asl();
    asl();
    // subtract 4 and then shift to the left
    // twice to get proper warp zone number
    // offset
    tax();
    ldy(Imm(0x0));
    JMP(WarpNumLoop);
}

int WarpNumLoop() {
    // print warp zone numbers into the
    lda((WarpZoneNumbers), x);
    sta((((VRAM_Buffer1)) + (Imm(27))), y);
    // placeholders from earlier
    inx();
    iny();
    // put a number in every fourth space
    iny();
    iny();
    iny();
    cpy(Imm(0xc));
    BCC(WarpNumLoop);
    lda(Imm(0x2c));
    // load new buffer pointer at end of message
    JMP(SetVRAMOffset);
    JMP(ResetSpritesAndScreenTimer);
}

int ResetSpritesAndScreenTimer() {
    lda((ScreenTimer));
    BNE(NoReset);
    JSR(MoveAllSpritesOffscreen);
    JMP(ResetScreenTimer);
}

int ResetScreenTimer() {
    lda(Imm(0x7));
    // reset timer again
    sta((ScreenTimer));
    inc((ScreenRoutineTask));
    JMP(NoReset);
}

int NoReset() {
    rts();
    JMP(RenderAreaGraphics);
}

int RenderAreaGraphics() {
    lda((CurrentColumnPos));
    // store LSB of where we're at
    anda(Imm(0x1));
    sta(Imm(0x5));
    ldy((VRAM_Buffer2_Offset));
    // store vram buffer offset
    sty(Imm(0x0));
    lda((CurrentNTAddr_Low));
    // get current name table address we're supposed to render
    sta((((VRAM_Buffer2)) + (Imm(1))), y);
    lda((CurrentNTAddr_High));
    sta((VRAM_Buffer2), y);
    lda(Imm(0x9a));
    sta((((VRAM_Buffer2)) + (Imm(2))), y);
    lda(Imm(0x0));
    // store length byte of 26 here with d7 set
    // to increment by 32 (in columns)
    // init attribute row
    sta(Imm(0x4));
    tax();
    JMP(DrawMTLoop);
}

int DrawMTLoop() {
    // store init value of 0 or incremented offset for buffer
    stx(Imm(0x1));
    lda((MetatileBuffer), x);
    // get first metatile number, and mask out all but 2 MSB
    anda(Imm(0b11000000));
    sta(Imm(0x3));
    asl();
    rol();
    rol();
    tay();
    lda((MetatileGraphics_Low), y);
    // store attribute table bits here
    // note that metatile format is:
    // %xx000000 - attribute table bits,
    // %00xxxxxx - metatile number
    // rotate bits to d1-d0 and use as offset here
    // get address to graphics table from here
    sta(Imm(0x6));
    lda((MetatileGraphics_High), y);
    sta(Imm(0x7));
    lda((MetatileBuffer), x);
    asl();
    // get metatile number again
    // multiply by 4 and use as tile offset
    asl();
    sta(Imm(0x2));
    lda((AreaParserTaskNum));
    anda(Imm(0b1));
    eor(Imm(0b1));
    asl();
    adc(Imm(0x2));
    // get current task number for level processing and
    // mask out all but LSB, then invert LSB, multiply by 2
    // to get the correct column position in the metatile,
    // then add to the tile offset so we can draw either side
    // of the metatiles
    tay();
    ldx(Imm(0x0));
    // use vram buffer offset from before as X
    lda((Imm(0x6)), y);
    sta((((VRAM_Buffer2)) + (Imm(3))), x);
    // get first tile number (top left or top right) and store
    iny();
    lda((Imm(0x6)), y);
    // now get the second (bottom left or bottom right) and store
    sta((((VRAM_Buffer2)) + (Imm(4))), x);
    ldy(Imm(0x4));
    lda(Imm(0x5));
    BNE(RightCheck);
    lda(Imm(0x1));
    lsr();
    // get current attribute row
    // get LSB of current column where we're at, and
    // branch if set (clear = left attrib, set = right)
    // get current row we're rendering
    // branch if LSB set (clear = top left, set = bottom left)
    BCS(LLeft);
    rol(Imm(0x3));
    rol(Imm(0x3));
    // rotate attribute bits 3 to the left
    // thus in d1-d0, for upper left square
    rol(Imm(0x3));
    JMP(SetAttrib);
    JMP(RightCheck);
}

int RightCheck() {
    // get LSB of current row we're rendering
    lda(Imm(0x1));
    lsr();
    // branch if set (clear = top right, set = bottom right)
    BCS(NextMTRow);
    lsr(Imm(0x3));
    lsr(Imm(0x3));
    // shift attribute bits 4 to the right
    // thus in d3-d2, for upper right square
    lsr(Imm(0x3));
    lsr(Imm(0x3));
    JMP(SetAttrib);
    JMP(LLeft);
}

int LLeft() {
    // shift attribute bits 2 to the right
    lsr(Imm(0x3));
    lsr(Imm(0x3));
    JMP(NextMTRow);
}

int NextMTRow() {
    // thus in d5-d4 for lower left square
    // move onto next attribute row
    inc(Imm(0x4));
    JMP(SetAttrib);
}

int SetAttrib() {
    // get previously saved bits from before
    lda((AttributeBuffer), y);
    ora(Imm(0x3));
    sta((AttributeBuffer), y);
    inc(Imm(0x0));
    // if any, and put new bits, if any, onto
    // the old, and store
    // increment vram buffer offset by 2
    inc(Imm(0x0));
    ldx(Imm(0x1));
    inx();
    // get current gfx buffer row, and check for
    // the bottom of the screen
    cpx(Imm(0xd));
    BCC(DrawMTLoop);
    ldy(Imm(0x0));
    iny();
    // if not there yet, loop back
    // get current vram buffer offset, increment by 3
    // (for name table address and length bytes)
    iny();
    iny();
    lda(Imm(0x0));
    sta((VRAM_Buffer2), y);
    sty((VRAM_Buffer2_Offset));
    inc((CurrentNTAddr_Low));
    lda((CurrentNTAddr_Low));
    anda(Imm(0b11111));
    // put null terminator at end of data for name table
    // store new buffer offset
    // increment name table address low
    // check current low byte
    // if no wraparound, just skip this part
    BNE(ExitDrawM);
    lda(Imm(0x80));
    sta((CurrentNTAddr_Low));
    lda((CurrentNTAddr_High));
    eor(Imm(0b100));
    // if wraparound occurs, make sure low byte stays
    // just under the status bar
    // and then invert d2 of the name table address high
    // to move onto the next appropriate name table
    sta((CurrentNTAddr_High));
    JMP(ExitDrawM);
}

int ExitDrawM() {
    // jump to set buffer to $0341 and leave
    JMP(SetVRAMCtrl);
    JMP(RenderAttributeTables);
}

int RenderAttributeTables() {
    lda((CurrentNTAddr_Low));
    anda(Imm(0b11111));
    sec();
    // get low byte of next name table address
    // to be written to, mask out all but 5 LSB,
    // subtract four
    sbc(Imm(0x4));
    anda(Imm(0b11111));
    // mask out bits again and store
    sta(Imm(0x1));
    lda((CurrentNTAddr_High));
    // get high byte and branch if borrow not set
    BCS(SetATHigh);
    eor(Imm(0b100));
    JMP(SetATHigh);
}

int SetATHigh() {
    // otherwise invert d2
    // mask out all other bits
    anda(Imm(0b100));
    ora(Imm(0x23));
    // add $2300 to the high byte and store
    sta(Imm(0x0));
    lda(Imm(0x1));
    lsr();
    // get low byte - 4, divide by 4, add offset for
    // attribute table and store
    lsr();
    adc(Imm(0xc0));
    sta(Imm(0x1));
    // we should now have the appropriate block of
    // attribute table in our temp address
    ldx(Imm(0x0));
    ldy((VRAM_Buffer2_Offset));
    JMP(AttribLoop);
}

int AttribLoop() {
    lda(Imm(0x0));
    sta((VRAM_Buffer2), y);
    // store high byte of attribute table address
    lda(Imm(0x1));
    clc();
    adc(Imm(0x8));
    // get low byte, add 8 because we want to start
    // below the status bar, and store
    sta((((VRAM_Buffer2)) + (Imm(1))), y);
    sta(Imm(0x1));
    lda((AttributeBuffer), x);
    sta((((VRAM_Buffer2)) + (Imm(3))), y);
    // also store in temp again
    // fetch current attribute table byte and store
    // in the buffer
    lda(Imm(0x1));
    sta((((VRAM_Buffer2)) + (Imm(2))), y);
    // store length of 1 in buffer
    lsr();
    sta((AttributeBuffer), x);
    iny();
    // clear current byte in attribute buffer
    // increment buffer offset by 4 bytes
    iny();
    iny();
    iny();
    inx();
    cpx(Imm(0x7));
    // increment attribute offset and check to see
    // if we're at the end yet
    BCC(AttribLoop);
    sta((VRAM_Buffer2), y);
    sty((VRAM_Buffer2_Offset));
    JMP(SetVRAMCtrl);
}

int SetVRAMCtrl() {
    lda(Imm(0x6));
    sta((VRAM_Buffer_AddrCtrl));
    // set buffer to $0341 and leave
    rts();
    JMP(ColorRotation);
}

int ColorRotation() {
    lda((FrameCounter));
    anda(Imm(0x7));
    BNE(ExitColorRot);
    ldx((VRAM_Buffer1_Offset));
    // get frame counter
    // mask out all but three LSB
    // branch if not set to zero to do this every eighth frame
    // check vram buffer offset
    cpx(Imm(0x31));
    BCS(ExitColorRot);
    tay();
    JMP(GetBlankPal);
}

int GetBlankPal() {
    // if offset over 48 bytes, branch to leave
    // otherwise use frame counter's 3 LSB as offset here
    // get blank palette for palette 3
    lda((BlankPalette), y);
    sta((VRAM_Buffer1), x);
    inx();
    // store it in the vram buffer
    // increment offsets
    iny();
    cpy(Imm(0x8));
    BCC(GetBlankPal);
    ldx((VRAM_Buffer1_Offset));
    // do this until all bytes are copied
    // get current vram buffer offset
    lda(Imm(0x3));
    sta(Imm(0x0));
    lda((AreaType));
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
    lda((Palette3Data), y);
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    // store it to overwrite blank palette in vram buffer
    iny();
    inx();
    dec(Imm(0x0));
    BPL(GetAreaPal);
    ldx((VRAM_Buffer1_Offset));
    ldy((ColorRotateOffset));
    // decrement counter
    // do this until the palette is all copied
    // get current vram buffer offset
    // get color cycling offset
    lda((ColorRotatePalette), y);
    sta((((VRAM_Buffer1)) + (Imm(4))), x);
    // get and store current color in second slot of palette
    lda((VRAM_Buffer1_Offset));
    clc();
    // add seven bytes to vram buffer offset
    adc(Imm(0x7));
    sta((VRAM_Buffer1_Offset));
    inc((ColorRotateOffset));
    // increment color cycling offset
    lda((ColorRotateOffset));
    cmp(Imm(0x6));
    BCC(ExitColorRot);
    // check to see if it's still in range
    // if so, branch to leave
    lda(Imm(0x0));
    sta((ColorRotateOffset));
    JMP(ExitColorRot);
}

int ExitColorRot() {
    // otherwise, init to keep it in range
    // leave
    rts();
    JMP(RemoveCoin_Axe);
}

int RemoveCoin_Axe() {
    ldy(Imm(0x41));
    lda(Imm(0x3));
    ldx((AreaType));
    BNE(WriteBlankMT);
    lda(Imm(0x4));
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
    lda(Imm(0x6));
    sta((VRAM_Buffer_AddrCtrl));
    // set vram address controller to $0341 and leave
    rts();
    JMP(ReplaceBlockMetatile);
}

int ReplaceBlockMetatile() {
    JSR(WriteBlockMetatile);
    inc((Block_ResidualCounter));
    dec((Block_RepFlag), x);
    rts();
    JMP(DestroyBlockMetatile);
}

int DestroyBlockMetatile() {
    lda(Imm(0x0));
    JMP(WriteBlockMetatile);
}

int WriteBlockMetatile() {
    ldy(Imm(0x3));
    cmp(Imm(0x0));
    BEQ(UseBOffset);
    ldy(Imm(0x0));
    // load offset for blank metatile
    // check contents of A for blank metatile
    // branch if found (unconditional if branched from 8a6b)
    // load offset for brick metatile w/ line
    cmp(Imm(0x58));
    BEQ(UseBOffset);
    // use offset if metatile is brick with coins (w/ line)
    cmp(Imm(0x51));
    BEQ(UseBOffset);
    iny();
    // use offset if metatile is breakable brick w/ line
    // increment offset for brick metatile w/o line
    cmp(Imm(0x5d));
    BEQ(UseBOffset);
    // use offset if metatile is brick with coins (w/o line)
    cmp(Imm(0x52));
    BEQ(UseBOffset);
    iny();
    JMP(UseBOffset);
}

int UseBOffset() {
    // use offset if metatile is breakable brick w/o line
    // if any other metatile, increment offset for empty block
    // put Y in A
    tya();
    ldy((VRAM_Buffer1_Offset));
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
    adc(Imm(10));
    JMP(SetVRAMOffset);
    JMP(PutBlockMetatile);
}

int PutBlockMetatile() {
    stx(Imm(0x0));
    sty(Imm(0x1));
    // store control bit from SprDataOffset_Ctrl
    // store vram buffer offset for next byte
    asl();
    asl();
    // multiply A by four and use as X
    tax();
    ldy(Imm(0x20));
    lda(Imm(0x6));
    cmp(Imm(0xd0));
    BCC(SaveHAdder);
    ldy(Imm(0x24));
    JMP(SaveHAdder);
}

int SaveHAdder() {
    // load high byte for name table 0
    // get low byte of block buffer pointer
    // check to see if we're on odd-page block buffer
    // if not, use current high byte
    // otherwise load high byte for name table 1
    // save high byte here
    sty(Imm(0x3));
    anda(Imm(0xf));
    asl();
    sta(Imm(0x4));
    // mask out high nybble of block buffer pointer
    // multiply by 2 to get appropriate name table low byte
    // and then store it here
    lda(Imm(0x0));
    sta(Imm(0x5));
    lda(Imm(0x2));
    // initialize temp high byte
    // get vertical high nybble offset used in block buffer routine
    clc();
    adc(Imm(0x20));
    // add 32 pixels for the status bar
    asl();
    rol(Imm(0x5));
    // shift and rotate d7 onto d0 and d6 into carry
    asl();
    rol(Imm(0x5));
    adc(Imm(0x4));
    sta(Imm(0x4));
    lda(Imm(0x5));
    adc(Imm(0x0));
    // shift and rotate d6 onto d0 and d5 into carry
    // add low byte of name table and carry to vertical high nybble
    // and store here
    // get whatever was in d7 and d6 of vertical high nybble
    // add carry
    clc();
    adc(Imm(0x3));
    sta(Imm(0x5));
    ldy(Imm(0x1));
    JMP(RemBridge);
}

int RemBridge() {
    // then add high byte of name table
    // store here
    // get vram buffer offset to be used
    // write top left and top right
    lda((BlockGfxData), x);
    sta((((VRAM_Buffer1)) + (Imm(2))), y);
    // tile numbers into first spot
    lda((((BlockGfxData)) + (Imm(1))), x);
    sta((((VRAM_Buffer1)) + (Imm(3))), y);
    lda((((BlockGfxData)) + (Imm(2))), x);
    sta((((VRAM_Buffer1)) + (Imm(7))), y);
    lda((((BlockGfxData)) + (Imm(3))), x);
    // write bottom left and bottom
    // right tiles numbers into
    // second spot
    sta((((VRAM_Buffer1)) + (Imm(8))), y);
    lda(Imm(0x4));
    sta((VRAM_Buffer1), y);
    clc();
    adc(Imm(0x20));
    sta((((VRAM_Buffer1)) + (Imm(5))), y);
    lda(Imm(0x5));
    sta((((VRAM_Buffer1)) - (Imm(1))), y);
    sta((((VRAM_Buffer1)) + (Imm(4))), y);
    // write low byte of name table
    // into first slot as read
    // add 32 bytes to value
    // write low byte of name table
    // plus 32 bytes into second slot
    // write high byte of name
    // table address to both slots
    lda(Imm(0x2));
    sta((((VRAM_Buffer1)) + (Imm(1))), y);
    sta((((VRAM_Buffer1)) + (Imm(6))), y);
    // put length of 2 in
    // both slots
    lda(Imm(0x0));
    sta((((VRAM_Buffer1)) + (Imm(9))), y);
    ldx(Imm(0x0));
    rts();
    JMP(InitializeNameTables);
}

int InitializeNameTables() {
    lda((PPU_STATUS));
    lda((Mirror_PPU_CTRL_REG1));
    ora(Imm(0b10000));
    anda(Imm(0b11110000));
    // reset flip-flop
    // load mirror of ppu reg $2000
    // set sprites for first 4k and background for second 4k
    // clear rest of lower nybble, leave higher alone
    JSR(WritePPUReg1);
    lda(Imm(0x24));
    // set vram address to start of name table 1
    JSR(WriteNTAddr);
    lda(Imm(0x20));
    JMP(WriteNTAddr);
}

int WriteNTAddr() {
    sta((PPU_ADDRESS));
    lda(Imm(0x0));
    sta((PPU_ADDRESS));
    ldx(Imm(0x4));
    // clear name table with blank tile #24
    ldy(Imm(0xc0));
    lda(Imm(0x24));
    JMP(InitNTLoop);
}

int InitNTLoop() {
    // count out exactly 768 tiles
    sta((PPU_DATA));
    dey();
    BNE(InitNTLoop);
    dex();
    BNE(InitNTLoop);
    ldy(Imm(64));
    // now to clear the attribute table (with zero this time)
    txa();
    sta((VRAM_Buffer1_Offset));
    sta((VRAM_Buffer1));
    JMP(InitATLoop);
}

int InitATLoop() {
    sta((PPU_DATA));
    dey();
    BNE(InitATLoop);
    sta((HorizontalScroll));
    // reset scroll variables
    sta((VerticalScroll));
    JMP(InitScroll);
    JMP(ReadJoypads);
}

int ReadJoypads() {
    lda(Imm(0x1));
    // initialize scroll registers to zero
    // $00 - temp joypad bit
    // reset and clear strobe of joypad ports
    sta((JOYPAD_PORT));
    lsr();
    tax();
    // start with joypad 1's port
    sta((JOYPAD_PORT));
    JSR(ReadPortBits);
    inx();
    JMP(ReadPortBits);
}

int ReadPortBits() {
    ldy(Imm(0x8));
    JMP(PortLoop);
}

int PortLoop() {
    // push previous bit onto stack
    pha();
    lda((JOYPAD_PORT), x);
    sta(Imm(0x0));
    lsr();
    ora(Imm(0x0));
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
    sta((SavedJoypadBits), x);
    // count down bits left
    // save controller status here always
    pha();
    anda(Imm(0b110000));
    anda((JoypadBitMask), x);
    BEQ(Save8Bits);
    // check for select or start
    // if neither saved state nor current state
    // have any of these two set, branch
    pla();
    anda(Imm(0b11001111));
    sta((SavedJoypadBits), x);
    // otherwise store without select
    // or start bits and leave
    rts();
    JMP(Save8Bits);
}

int Save8Bits() {
    pla();
    sta((JoypadBitMask), x);
    // save with all bits in another place and leave
    rts();
    JMP(WriteBufferToScreen);
}

int WriteBufferToScreen() {
    sta((PPU_ADDRESS));
    // store high byte of vram address
    iny();
    lda((Imm(0x0)), y);
    sta((PPU_ADDRESS));
    // load next byte (second)
    // store low byte of vram address
    iny();
    lda((Imm(0x0)), y);
    asl();
    // load next byte (third)
    // shift to left and save in stack
    pha();
    lda((Mirror_PPU_CTRL_REG1));
    ora(Imm(0b100));
    BCS(SetupWrites);
    anda(Imm(0b11111011));
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
    ora(Imm(0b10));
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
    lda((Imm(0x0)), y);
    sta((PPU_DATA));
    dex();
    // done writing?
    BNE(OutputToVRAM);
    sec();
    tya();
    adc(Imm(0x0));
    sta(Imm(0x0));
    // add end length plus one to the indirect at $00
    // to allow this routine to read another set of updates
    lda(Imm(0x0));
    adc(Imm(0x1));
    sta(Imm(0x1));
    lda(Imm(0x3f));
    // sets vram address to $3f00
    sta((PPU_ADDRESS));
    lda(Imm(0x0));
    sta((PPU_ADDRESS));
    sta((PPU_ADDRESS));
    // then reinitializes it for some reason
    sta((PPU_ADDRESS));
    JMP(UpdateScreen);
}

int UpdateScreen() {
    // reset flip-flop
    ldx((PPU_STATUS));
    ldy(Imm(0x0));
    // load first byte from indirect as a pointer
    lda((Imm(0x0)), y);
    BNE(WriteBufferToScreen);
    JMP(InitScroll);
}

int InitScroll() {
    // if byte is zero we have no further updates to make here
    // store contents of A into scroll registers
    sta((PPU_SCROLL_REG));
    sta((PPU_SCROLL_REG));
    // and end whatever subroutine led us here
    rts();
    JMP(WritePPUReg1);
}

int WritePPUReg1() {
    sta((PPU_CTRL_REG1));
    sta((Mirror_PPU_CTRL_REG1));
    // write contents of A to PPU register 1
    // and its mirror
    rts();
    JMP(PrintStatusBarNumbers);
}

int PrintStatusBarNumbers() {
    sta(Imm(0x0));
    JSR(OutputNumbers);
    lda(Imm(0x0));
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
    adc(Imm(0x1));
    anda(Imm(0b1111));
    // mask out high nybble
    cmp(Imm(0x6));
    BCS(ExitOutputN);
    pha();
    asl();
    // save incremented value to stack for now and
    // shift to left and use as offset
    tay();
    ldx((VRAM_Buffer1_Offset));
    lda(Imm(0x20));
    cpy(Imm(0x0));
    // get current buffer pointer
    // put at top of screen by default
    // are we writing top score on title screen?
    BNE(SetupNums);
    lda(Imm(0x22));
    JMP(SetupNums);
}

int SetupNums() {
    sta((VRAM_Buffer1), x);
    lda((StatusBarData), y);
    sta((((VRAM_Buffer1)) + (Imm(1))), x);
    // write low vram address and length of thing
    // we're printing to the buffer
    lda((((StatusBarData)) + (Imm(1))), y);
    sta((((VRAM_Buffer1)) + (Imm(2))), x);
    sta(Imm(0x3));
    stx(Imm(0x2));
    pla();
    // save length byte in counter
    // and buffer pointer elsewhere for now
    // pull original incremented value from stack
    tax();
    lda((StatusBarOffset), x);
    // load offset to value we want to write
    sec();
    sbc((((StatusBarData)) + (Imm(1))), y);
    tay();
    // subtract from length byte we read before
    // use value as offset to display digits
    ldx(Imm(0x2));
    JMP(DigitPLoop);
}

int DigitPLoop() {
    // write digits to the buffer
    lda((DisplayDigits), y);
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    inx();
    iny();
    dec(Imm(0x3));
    // do this until all the digits are written
    BNE(DigitPLoop);
    lda(Imm(0x0));
    // put null terminator at end
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    inx();
    // increment buffer pointer by 3
    inx();
    inx();
    stx((VRAM_Buffer1_Offset));
    JMP(ExitOutputN);
}

int ExitOutputN() {
    rts();
    JMP(DigitsMathRoutine);
}

int DigitsMathRoutine() {
    lda((OperMode));
    // check mode of operation
    cmp((TitleScreenModeValue));
    BEQ(EraseDMods);
    // if in title screen mode, branch to lock score
    ldx(Imm(0x5));
    JMP(AddModLoop);
}

int AddModLoop() {
    // load digit amount to increment
    lda((DigitModifier), x);
    clc();
    adc((DisplayDigits), y);
    BMI(BorrowOne);
    // add to current digit
    // if result is a negative number, branch to subtract
    cmp(Imm(10));
    BCS(CarryOne);
    JMP(StoreNewD);
}

int StoreNewD() {
    // if digit greater than $09, branch to add
    // store as new score or game timer digit
    sta((DisplayDigits), y);
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
    lda(Imm(0x0));
    ldx(Imm(0x6));
    JMP(EraseMLoop);
}

int EraseMLoop() {
    // start with the last digit
    // initialize the digit amounts to increment
    sta((((DigitModifier)) - (Imm(1))), x);
    dex();
    BPL(EraseMLoop);
    // do this until they're all reset, then leave
    rts();
    JMP(BorrowOne);
}

int BorrowOne() {
    // decrement the previous digit, then put $09 in
    dec((((DigitModifier)) - (Imm(1))), x);
    lda(Imm(0x9));
    BNE(StoreNewD);
    JMP(CarryOne);
}

int CarryOne() {
    // the game timer digit we're currently on to "borrow
    // the one", then do an unconditional branch back
    // subtract ten from our digit to make it a
    sec();
    sbc(Imm(10));
    inc((((DigitModifier)) - (Imm(1))), x);
    JMP(StoreNewD);
    JMP(UpdateTopScore);
}

int UpdateTopScore() {
    ldx(Imm(0x5));
    // start with mario's score
    JSR(TopScoreCheck);
    ldx(Imm(0xb));
    JMP(TopScoreCheck);
}

int TopScoreCheck() {
    ldy(Imm(0x5));
    // start with the lowest digit
    sec();
    JMP(GetScoreDiff);
}

int GetScoreDiff() {
    // subtract each player digit from each high score digit
    lda((PlayerScoreDisplay), x);
    sbc((TopScoreDisplay), y);
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
    lda((PlayerScoreDisplay), x);
    sta((TopScoreDisplay), y);
    inx();
    iny();
    cpy(Imm(0x6));
    // do this until we have stored them all
    BCC(CopyScore);
    JMP(NoTopSc);
}

int NoTopSc() {
    rts();
    JMP(InitializeGame);
}

int InitializeGame() {
    ldy(Imm(0x6f));
    JSR(InitializeMemory);
    // clear all memory as in initialization procedure,
    // but this time, clear only as far as $076f
    ldy(Imm(0x1f));
    JMP(ClrSndLoop);
}

int ClrSndLoop() {
    // clear out memory used
    sta((SoundMemory), y);
    dey();
    // by the sound engines
    BPL(ClrSndLoop);
    lda(Imm(0x18));
    // set demo timer
    sta((DemoTimer));
    JSR(LoadAreaPointer);
    JMP(InitializeArea);
}

int InitializeArea() {
    ldy(Imm(0x4b));
    JSR(InitializeMemory);
    // clear all memory again, only as far as $074b
    // this is only necessary if branching from
    ldx(Imm(0x21));
    lda(Imm(0x0));
    JMP(ClrTimersLoop);
}

int ClrTimersLoop() {
    // clear out memory between
    sta((Timers), x);
    dex();
    // $0780 and $07a1
    BPL(ClrTimersLoop);
    lda((HalfwayPage));
    ldy((AltEntranceControl));
    // if AltEntranceControl not set, use halfway page, if any found
    BEQ(StartPage);
    lda((EntrancePage));
    JMP(StartPage);
}

int StartPage() {
    // otherwise use saved entry page number here
    // set as value here
    sta((ScreenLeft_PageLoc));
    sta((CurrentPageLoc));
    sta((BackloadingFlag));
    JSR(GetScreenPosition);
    ldy(Imm(0x20));
    anda(Imm(0b1));
    BEQ(SetInitNTHigh);
    // also set as current page
    // set flag here if halfway page or saved entry page number found
    // get pixel coordinates for screen borders
    // if on odd numbered page, use $2480 as start of rendering
    // otherwise use $2080, this address used later as name table
    // address for rendering of game area
    ldy(Imm(0x24));
    JMP(SetInitNTHigh);
}

int SetInitNTHigh() {
    // store name table address
    sty((CurrentNTAddr_High));
    ldy(Imm(0x80));
    sty((CurrentNTAddr_Low));
    asl();
    asl();
    // store LSB of page number in high nybble
    // of block buffer column position
    asl();
    asl();
    sta((BlockBufferColumnPos));
    dec((AreaObjectLength));
    // set area object lengths for all empty
    dec((((AreaObjectLength)) + (Imm(1))));
    dec((((AreaObjectLength)) + (Imm(2))));
    lda(Imm(0xb));
    sta((ColumnSets));
    JSR(GetAreaDataAddrs);
    lda((PrimaryHardMode));
    BNE(SetSecHard);
    lda((WorldNumber));
    cmp((World5));
    // set value for renderer to update 12 column sets
    // 12 column sets = 24 metatile columns = 1 1/2 screens
    // get enemy and level addresses and load header
    // check to see if primary hard mode has been activated
    // if so, activate the secondary no matter where we're at
    // otherwise check world number
    // if less than 5, do not activate secondary
    BCC(CheckHalfway);
    BNE(SetSecHard);
    lda((LevelNumber));
    cmp((Level3));
    // if not equal to, then world > 5, thus activate
    // otherwise, world 5, so check level number
    // if 1 or 2, do not set secondary hard mode flag
    BCC(CheckHalfway);
    JMP(SetSecHard);
}

int SetSecHard() {
    // set secondary hard mode flag for areas 5-3 and beyond
    inc((SecondaryHardMode));
    JMP(CheckHalfway);
}

int CheckHalfway() {
    lda((HalfwayPage));
    BEQ(DoneInitArea);
    lda(Imm(0x2));
    // if halfway page set, overwrite start position from header
    sta((PlayerEntranceCtrl));
    JMP(DoneInitArea);
}

int DoneInitArea() {
    // silence music
    lda((Silence));
    sta((AreaMusicQueue));
    lda(Imm(0x1));
    // disable screen output
    sta((DisableScreenFlag));
    inc((OperMode_Task));
    // increment one of the modes
    rts();
    JMP(PrimaryGameSetup);
}

int PrimaryGameSetup() {
    lda(Imm(0x1));
    sta((FetchNewGameTimerFlag));
    sta((PlayerSize));
    // set flag to load game timer from header
    // set player's size to small
    lda(Imm(0x2));
    sta((NumberofLives));
    // give each player three lives
    sta((OffScr_NumberofLives));
    JMP(SecondaryGameSetup);
}

int SecondaryGameSetup() {
    lda(Imm(0x0));
    sta((DisableScreenFlag));
    // enable screen output
    tay();
    JMP(ClearVRLoop);
}

int ClearVRLoop() {
    // clear buffer at $0300-$03ff
    sta((((VRAM_Buffer1)) - (Imm(1))), y);
    iny();
    BNE(ClearVRLoop);
    sta((GameTimerExpiredFlag));
    sta((DisableIntermediate));
    sta((BackloadingFlag));
    // clear game timer exp flag
    // clear skip lives display flag
    // clear value here
    lda(Imm(0xff));
    sta((BalPlatformAlignment));
    lda((ScreenLeft_PageLoc));
    lsr((Mirror_PPU_CTRL_REG1));
    anda(Imm(0x1));
    ror();
    rol((Mirror_PPU_CTRL_REG1));
    JSR(GetAreaMusic);
    lda(Imm(0x38));
    // initialize balance platform assignment flag
    // get left side page location
    // shift LSB of ppu register #1 mirror out
    // mask out all but LSB of page location
    // rotate LSB of page location into carry then onto mirror
    // this is to set the proper PPU name table
    // load proper music into queue
    // load sprite shuffle amounts to be used later
    sta((((SprShuffleAmt)) + (Imm(2))));
    lda(Imm(0x48));
    sta((((SprShuffleAmt)) + (Imm(1))));
    lda(Imm(0x58));
    sta((SprShuffleAmt));
    ldx(Imm(0xe));
    JMP(ShufAmtLoop);
}

int ShufAmtLoop() {
    lda((DefaultSprOffsets), x);
    sta((SprDataOffset), x);
    dex();
    // do this until they're all set
    BPL(ShufAmtLoop);
    ldy(Imm(0x3));
    JMP(ISpr0Loop);
}

int ISpr0Loop() {
    lda((Sprite0Data), y);
    sta((Sprite_Data), y);
    dey();
    BPL(ISpr0Loop);
    JSR(DoNothing2);
    // these jsrs doesn't do anything useful
    JSR(DoNothing1);
    inc((Sprite0HitDetectFlag));
    inc((OperMode_Task));
    // set sprite #0 check flag
    // increment to next task
    rts();
    JMP(InitializeMemory);
}

int InitializeMemory() {
    ldx(Imm(0x7));
    lda(Imm(0x0));
    // set initial high byte to $0700-$07ff
    // set initial low byte to start of page (at $00 of page)
    sta(Imm(0x6));
    JMP(InitPageLoop);
}

int InitPageLoop() {
    stx(Imm(0x7));
    JMP(InitByteLoop);
}

int InitByteLoop() {
    // check to see if we're on the stack ($0100-$01ff)
    cpx(Imm(0x1));
    BNE(InitByte);
    cpy(Imm(0x60));
    BCS(SkipByte);
    JMP(InitByte);
}

int InitByte() {
    // if not, go ahead anyway
    // otherwise, check to see if we're at $0160-$01ff
    // if so, skip write
    // otherwise, initialize byte with current low byte in Y
    sta((Imm(0x6)), y);
    JMP(SkipByte);
}

int SkipByte() {
    dey();
    cpy(Imm(0xff));
    // do this until all bytes in page have been erased
    BNE(InitByteLoop);
    dex();
    BPL(InitPageLoop);
    // go onto the next page
    // do this until all pages of memory have been erased
    rts();
    JMP(GetAreaMusic);
}

int GetAreaMusic() {
    lda((OperMode));
    // if in title screen mode, leave
    BEQ(ExitGetM);
    lda((AltEntranceControl));
    cmp(Imm(0x2));
    BEQ(ChkAreaType);
    ldy(Imm(0x5));
    lda((PlayerEntranceCtrl));
    // check for specific alternate mode of entry
    // if found, branch without checking starting position
    // from area object data header
    // select music for pipe intro scene by default
    // check value from level header for certain values
    cmp(Imm(0x6));
    BEQ(StoreMusic);
    cmp(Imm(0x7));
    // load music for pipe intro scene if header
    // start position either value $06 or $07
    BEQ(StoreMusic);
    JMP(ChkAreaType);
}

int ChkAreaType() {
    // load area type as offset for music bit
    ldy((AreaType));
    lda((CloudTypeOverride));
    BEQ(StoreMusic);
    ldy(Imm(0x4));
    JMP(StoreMusic);
}

int StoreMusic() {
    // check for cloud type override
    // select music for cloud type level if found
    // otherwise select appropriate music for level type
    lda((MusicSelectData), y);
    sta((AreaMusicQueue));
    JMP(ExitGetM);
}

int ExitGetM() {
    rts();
    JMP(Entrance_GameTimerSetup);
}

int Entrance_GameTimerSetup() {
    lda((ScreenLeft_PageLoc));
    sta((Player_PageLoc));
    lda(Imm(0x28));
    sta((VerticalForceDown));
    lda(Imm(0x1));
    sta((PlayerFacingDir));
    // set current page for area objects
    // as page location for player
    // store value here
    // for fractional movement downwards if necessary
    // set high byte of player position and
    // set facing direction so that player faces right
    sta((Player_Y_HighPos));
    lda(Imm(0x0));
    // set player state to on the ground by default
    sta((Player_State));
    dec((Player_CollisionBits));
    ldy(Imm(0x0));
    // initialize player's collision bits
    // initialize halfway page
    sty((HalfwayPage));
    lda((AreaType));
    BNE(ChkStPos);
    // check area type
    // if water type, set swimming flag, otherwise do not set
    iny();
    JMP(ChkStPos);
}

int ChkStPos() {
    sty((SwimmingFlag));
    ldx((PlayerEntranceCtrl));
    ldy((AltEntranceControl));
    // get starting position loaded from header
    // check alternate mode of entry flag for 0 or 1
    BEQ(SetStPos);
    cpy(Imm(0x1));
    BEQ(SetStPos);
    ldx((((AltYPosOffset)) - (Imm(2))), y);
    JMP(SetStPos);
}

int SetStPos() {
    // if not 0 or 1, override $0710 with new offset in X
    // load appropriate horizontal position
    lda((PlayerStarting_X_Pos), y);
    sta((Player_X_Position));
    lda((PlayerStarting_Y_Pos), x);
    sta((Player_Y_Position));
    // and vertical positions for the player, using
    // AltEntranceControl as offset for horizontal and either $0710
    // or value that overwrote $0710 as offset for vertical
    lda((PlayerBGPriorityData), x);
    sta((Player_SprAttrib));
    JSR(GetPlayerColors);
    ldy((GameTimerSetting));
    BEQ(ChkOverR);
    lda((FetchNewGameTimerFlag));
    BEQ(ChkOverR);
    lda((GameTimerData), y);
    sta((GameTimerDisplay));
    // set player sprite attributes using offset in X
    // get appropriate player palette
    // get timer control value from header
    // if set to zero, branch (do not use dummy byte for this)
    // do we need to set the game timer? if not, use
    // old game timer setting
    // if game timer is set and game timer flag is also set,
    // use value of game timer control for first digit of game timer
    lda(Imm(0x1));
    sta((((GameTimerDisplay)) + (Imm(2))));
    // set last digit of game timer to 1
    lsr();
    sta((((GameTimerDisplay)) + (Imm(1))));
    sta((FetchNewGameTimerFlag));
    sta((StarInvincibleTimer));
    JMP(ChkOverR);
}

int ChkOverR() {
    // set second digit of game timer
    // clear flag for game timer reset
    // clear star mario timer
    // if controller bits not set, branch to skip this part
    ldy((JoypadOverride));
    BEQ(ChkSwimE);
    lda(Imm(0x3));
    // set player state to climbing
    sta((Player_State));
    ldx(Imm(0x0));
    // set offset for first slot, for block object
    JSR(InitBlock_XY_Pos);
    lda(Imm(0xf0));
    // set vertical coordinate for block object
    sta((Block_Y_Position));
    ldx(Imm(0x5));
    ldy(Imm(0x0));
    JSR(Setup_Vine);
    JMP(ChkSwimE);
}

int ChkSwimE() {
    // set offset in X for last enemy object buffer slot
    // set offset in Y for object coordinates used earlier
    // do a sub to grow vine
    // if level not water-type,
    ldy((AreaType));
    BNE(SetPESub);
    JSR(SetupBubble);
    JMP(SetPESub);
}

int SetPESub() {
    // skip this subroutine
    // otherwise, execute sub to set up air bubbles
    // set to run player entrance subroutine
    lda(Imm(0x7));
    sta((GameEngineSubroutine));
    // on the next frame of game engine
    rts();
    JMP(PlayerLoseLife);
}

int PlayerLoseLife() {
    inc((DisableScreenFlag));
    // disable screen and sprite 0 check
    lda(Imm(0x0));
    sta((Sprite0HitDetectFlag));
    lda((Silence));
    // silence music
    sta((EventMusicQueue));
    dec((NumberofLives));
    BPL(StillInGame);
    // take one life from player
    // if player still has lives, branch
    lda(Imm(0x0));
    sta((OperMode_Task));
    lda((GameOverModeValue));
    sta((OperMode));
    // initialize mode task,
    // switch to game over mode
    // and leave
    rts();
    JMP(StillInGame);
}

int StillInGame() {
    // multiply world number by 2 and use
    lda((WorldNumber));
    asl();
    // as offset
    tax();
    lda((LevelNumber));
    anda(Imm(0x2));
    BEQ(GetHalfway);
    // if in area -3 or -4, increment
    // offset by one byte, otherwise
    // leave offset alone
    inx();
    JMP(GetHalfway);
}

int GetHalfway() {
    // get halfway page number with offset
    ldy((HalfwayPageNybbles), x);
    lda((LevelNumber));
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
    anda(Imm(0b1111));
    cmp((ScreenLeft_PageLoc));
    BEQ(SetHalfway);
    BCC(SetHalfway);
    lda(Imm(0x0));
    JMP(SetHalfway);
}

int SetHalfway() {
    // left side of screen must be at the halfway page,
    // otherwise player must start at the
    // beginning of the level
    // store as halfway page for player
    sta((HalfwayPage));
    JSR(TransposePlayers);
    JMP(ContinueGame);
    JMP(GameOverMode);
}

int GameOverMode() {
    lda((OperMode_Task));
    JMP(SetupGameOver);
}

int SetupGameOver() {
    lda(Imm(0x0));
    sta((ScreenRoutineTask));
    sta((Sprite0HitDetectFlag));
    // reset screen routine task control for title screen, game,
    // and game over modes
    // disable sprite 0 check
    lda((GameOverMusic));
    sta((EventMusicQueue));
    inc((DisableScreenFlag));
    inc((OperMode_Task));
    // put game over music in secondary queue
    // disable screen output
    // set secondary mode to 1
    rts();
    JMP(RunGameOver);
}

int RunGameOver() {
    lda(Imm(0x0));
    // reenable screen
    sta((DisableScreenFlag));
    lda((SavedJoypad1Bits));
    // check controller for start pressed
    anda((Start_Button));
    BNE(TerminateGame);
    lda((ScreenTimer));
    BNE(GameIsOn);
    JMP(TerminateGame);
}

int TerminateGame() {
    lda((Silence));
    // silence music
    sta((EventMusicQueue));
    JSR(TransposePlayers);
    BCC(ContinueGame);
    lda((WorldNumber));
    sta((ContinueWorld));
    // check if other player can keep
    // going, and do so if possible
    // otherwise put world number of current
    // player into secret continue function variable
    lda(Imm(0x0));
    asl();
    sta((OperMode_Task));
    sta((ScreenTimer));
    // residual ASL instruction
    // reset all modes to title screen and
    // leave
    sta((OperMode));
    rts();
    JMP(ContinueGame);
}

int ContinueGame() {
    JSR(LoadAreaPointer);
    lda(Imm(0x1));
    sta((PlayerSize));
    inc((FetchNewGameTimerFlag));
    lda(Imm(0x0));
    sta((TimerControl));
    // update level pointer with
    // actual world and area numbers, then
    // reset player's size, status, and
    // set game timer flag to reload
    // game timer from header
    // also set flag for timers to count again
    sta((PlayerStatus));
    sta((GameEngineSubroutine));
    sta((OperMode_Task));
    lda(Imm(0x1));
    sta((OperMode));
    JMP(GameIsOn);
}

int GameIsOn() {
    rts();
    JMP(TransposePlayers);
}

int TransposePlayers() {
    sec();
    lda((NumberOfPlayers));
    // set carry flag by default to end game
    // if only a 1 player game, leave
    BEQ(ExTrans);
    lda((OffScr_NumberofLives));
    BMI(ExTrans);
    lda((CurrentPlayer));
    eor(Imm(0b1));
    // does offscreen player have any lives left?
    // branch if not
    // invert bit to update
    // which player is on the screen
    sta((CurrentPlayer));
    ldx(Imm(0x6));
    JMP(TransLoop);
}

int TransLoop() {
    // transpose the information
    lda((OnscreenPlayerInfo), x);
    pha();
    lda((OffscreenPlayerInfo), x);
    // of the onscreen player
    // with that of the offscreen player
    sta((OnscreenPlayerInfo), x);
    pla();
    sta((OffscreenPlayerInfo), x);
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
    lda(Imm(0xff));
    sta(Imm(0x6c9));
    JMP(DoNothing2);
}

int DoNothing2() {
    rts();
    JMP(AreaParserTaskHandler);
}

int AreaParserTaskHandler() {
    ldy((AreaParserTaskNum));
    BNE(DoAPTasks);
    // check number of tasks here
    // if already set, go ahead
    ldy(Imm(0x8));
    sty((AreaParserTaskNum));
    JMP(DoAPTasks);
}

int DoAPTasks() {
    dey();
    tya();
    JSR(AreaParserTasks);
    dec((AreaParserTaskNum));
    BNE(SkipATRender);
    // if all tasks not complete do not
    // render attribute table yet
    JSR(RenderAttributeTables);
    JMP(SkipATRender);
}

int SkipATRender() {
    rts();
    JMP(AreaParserTasks);
}

int AreaParserTasks() {
    JMP(IncrementColumnPos);
}

int IncrementColumnPos() {
    inc((CurrentColumnPos));
    // increment column where we're at
    lda((CurrentColumnPos));
    anda(Imm(0b1111));
    // mask out higher nybble
    BNE(NoColWrap);
    sta((CurrentColumnPos));
    inc((CurrentPageLoc));
    JMP(NoColWrap);
}

int NoColWrap() {
    // if no bits left set, wrap back to zero (0-f)
    // and increment page number where we're at
    // increment column offset where we're at
    inc((BlockBufferColumnPos));
    lda((BlockBufferColumnPos));
    anda(Imm(0b11111));
    sta((BlockBufferColumnPos));
    // mask out all but 5 LSB (0-1f)
    // and save
    rts();
    JMP(AreaParserCore);
}

int AreaParserCore() {
    lda((BackloadingFlag));
    BEQ(RenderSceneryTerrain);
    JSR(ProcessAreaData);
    JMP(RenderSceneryTerrain);
}

int RenderSceneryTerrain() {
    ldx(Imm(0xc));
    lda(Imm(0x0));
    JMP(ClrMTBuf);
}

int ClrMTBuf() {
    // clear out metatile buffer
    sta((MetatileBuffer), x);
    dex();
    BPL(ClrMTBuf);
    ldy((BackgroundScenery));
    BEQ(RendFore);
    lda((CurrentPageLoc));
    JMP(ThirdP);
}

int ThirdP() {
    cmp(Imm(0x3));
    BMI(RendBack);
    // if less than three we're there
    sec();
    sbc(Imm(0x3));
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
    adc((((BSceneDataOffsets)) - (Imm(1))), y);
    adc((CurrentColumnPos));
    // add to it offset loaded from here
    // add to the result our current column position
    tax();
    lda((BackSceneryData), x);
    BEQ(RendFore);
    // load data from sum of offsets
    // if zero, no scenery for that part
    pha();
    anda(Imm(0xf));
    // save to stack and clear high nybble
    sec();
    sbc(Imm(0x1));
    sta(Imm(0x0));
    asl();
    adc(Imm(0x0));
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
    lda(Imm(0x3));
    // use as second offset (used to determine height)
    // use previously saved memory location for counter
    sta(Imm(0x0));
    JMP(SceLoop1);
}

int SceLoop1() {
    // load metatile data from offset of (lsb - 1) * 3
    lda((BackSceneryMetatiles), x);
    sta((MetatileBuffer), y);
    // store into buffer from offset of (msb / 16)
    inx();
    iny();
    cpy(Imm(0xb));
    // if at this location, leave loop
    BEQ(RendFore);
    dec(Imm(0x0));
    // decrement until counter expires, barring exception
    BNE(SceLoop1);
    JMP(RendFore);
}

int RendFore() {
    // check for foreground data needed or not
    ldx((ForegroundScenery));
    BEQ(RendTerr);
    ldy((((FSceneDataOffsets)) - (Imm(1))), x);
    ldx(Imm(0x0));
    JMP(SceLoop2);
}

int SceLoop2() {
    // if not, skip this part
    // load offset from location offset by header value, then
    // reinit X
    // load data until counter expires
    lda((ForeSceneryData), y);
    BEQ(NoFore);
    // do not store if zero found
    sta((MetatileBuffer), x);
    JMP(NoFore);
}

int NoFore() {
    iny();
    inx();
    cpx(Imm(0xd));
    // store up to end of metatile buffer
    BNE(SceLoop2);
    JMP(RendTerr);
}

int RendTerr() {
    // check world type for water level
    ldy((AreaType));
    BNE(TerMTile);
    lda((WorldNumber));
    cmp((World8));
    // if not water level, skip this part
    // check world number, if not world number eight
    // then skip this part
    BNE(TerMTile);
    lda(Imm(0x62));
    JMP(StoreMT);
    JMP(TerMTile);
}

int TerMTile() {
    // if set as water level and world number eight,
    // use castle wall metatile as terrain type
    // otherwise get appropriate metatile for area type
    lda((TerrainMetatiles), y);
    ldy((CloudTypeOverride));
    BEQ(StoreMT);
    lda(Imm(0x88));
    JMP(StoreMT);
}

int StoreMT() {
    // check for cloud type override
    // if not set, keep value otherwise
    // use cloud block terrain
    // store value here
    sta(Imm(0x7));
    ldx(Imm(0x0));
    lda((TerrainControl));
    asl();
    // initialize X, use as metatile buffer offset
    // use yet another value from the header
    // multiply by 2 and use as yet another offset
    tay();
    JMP(TerrLoop);
}

int TerrLoop() {
    // get one of the terrain rendering bit data
    lda((TerrainRenderBits), y);
    sta(Imm(0x0));
    iny();
    // increment Y and use as offset next time around
    sty(Imm(0x1));
    lda((CloudTypeOverride));
    // skip if value here is zero
    BEQ(NoCloud2);
    cpx(Imm(0x0));
    // otherwise, check if we're doing the ceiling byte
    BEQ(NoCloud2);
    lda(Imm(0x0));
    // if not, mask out all but d3
    anda(Imm(0b1000));
    sta(Imm(0x0));
    JMP(NoCloud2);
}

int NoCloud2() {
    // start at beginning of bitmasks
    ldy(Imm(0x0));
    JMP(TerrBChk);
}

int TerrBChk() {
    // load bitmask, then perform AND on contents of first byte
    lda((Bitmasks), y);
    bit(Imm(0x0));
    BEQ(NextTBit);
    // if not set, skip this part (do not write terrain to buffer)
    lda(Imm(0x7));
    sta((MetatileBuffer), x);
    JMP(NextTBit);
}

int NextTBit() {
    // load terrain type metatile number and store into buffer here
    // continue until end of buffer
    inx();
    cpx(Imm(0xd));
    BEQ(RendBBuf);
    lda((AreaType));
    // if we're at the end, break out of this loop
    // check world type for underground area
    cmp(Imm(0x2));
    BNE(EndUChk);
    // if not underground, skip this part
    cpx(Imm(0xb));
    BNE(EndUChk);
    lda(Imm(0x54));
    // if we're at the bottom of the screen, override
    // old terrain type with ground level terrain type
    sta(Imm(0x7));
    JMP(EndUChk);
}

int EndUChk() {
    // increment bitmasks offset in Y
    iny();
    cpy(Imm(0x8));
    BNE(TerrBChk);
    // if not all bits checked, loop back
    ldy(Imm(0x1));
    BNE(TerrLoop);
    JMP(RendBBuf);
}

int RendBBuf() {
    // unconditional branch, use Y to load next byte
    // do the area data loading routine now
    JSR(ProcessAreaData);
    lda((BlockBufferColumnPos));
    JSR(GetBlockBufferAddr);
    // get block buffer address from where we're at
    ldx(Imm(0x0));
    ldy(Imm(0x0));
    JMP(ChkMTLow);
}

int ChkMTLow() {
    sty(Imm(0x0));
    lda((MetatileBuffer), x);
    anda(Imm(0b11000000));
    // load stored metatile number
    // mask out all but 2 MSB
    asl();
    rol();
    // make %xx000000 into %000000xx
    rol();
    tay();
    lda((MetatileBuffer), x);
    cmp((BlockBuffLowBounds), y);
    BCS(StrBlock);
    lda(Imm(0x0));
    JMP(StrBlock);
}

int StrBlock() {
    // use as offset in Y
    // reload original unmasked value here
    // check for certain values depending on bits set
    // if equal or greater, branch
    // if less, init value before storing
    // get offset for block buffer
    ldy(Imm(0x0));
    sta((Imm(0x6)), y);
    // store value into block buffer
    tya();
    clc();
    // add 16 (move down one row) to offset
    adc(Imm(0x10));
    tay();
    inx();
    // increment column value
    cpx(Imm(0xd));
    BCC(ChkMTLow);
    // continue until we pass last row, then leave
    rts();
    JMP(ProcessAreaData);
}

int ProcessAreaData() {
    ldx(Imm(0x2));
    JMP(ProcADLoop);
}

int ProcADLoop() {
    stx((ObjectOffset));
    lda(Imm(0x0));
    // reset flag
    sta((BehindAreaParserFlag));
    ldy((AreaDataOffset));
    lda(((AreaData)), y);
    cmp(Imm(0xfd));
    // get offset of area data pointer
    // get first byte of area object
    // if end-of-area, skip all this crap
    BEQ(RdyDecode);
    lda((AreaObjectLength), x);
    BPL(RdyDecode);
    // check area object buffer flag
    // if buffer not negative, branch, otherwise
    iny();
    lda(((AreaData)), y);
    asl();
    // get second byte of area object
    // check for page select bit (d7), branch if not set
    BCC(Chk1Row13);
    lda((AreaObjectPageSel));
    // check page select
    BNE(Chk1Row13);
    inc((AreaObjectPageSel));
    inc((AreaObjectPageLoc));
    JMP(Chk1Row13);
}

int Chk1Row13() {
    dey();
    lda(((AreaData)), y);
    anda(Imm(0xf));
    cmp(Imm(0xd));
    // reread first byte of level object
    // mask out high nybble
    // row 13?
    BNE(Chk1Row14);
    iny();
    // if so, reread second byte of level object
    lda(((AreaData)), y);
    dey();
    anda(Imm(0b1000000));
    // decrement to get ready to read first byte
    // check for d6 set (if not, object is page control)
    BNE(CheckRear);
    lda((AreaObjectPageSel));
    // if page select is set, do not reread
    BNE(CheckRear);
    iny();
    // if d6 not set, reread second byte
    lda(((AreaData)), y);
    anda(Imm(0b11111));
    // mask out all but 5 LSB and store in page control
    sta((AreaObjectPageLoc));
    inc((AreaObjectPageSel));
    // increment page select
    JMP(NextAObj);
    JMP(Chk1Row14);
}

int Chk1Row14() {
    // row 14?
    cmp(Imm(0xe));
    BNE(CheckRear);
    lda((BackloadingFlag));
    BNE(RdyDecode);
    JMP(CheckRear);
}

int CheckRear() {
    // check flag for saved page number and branch if set
    // to render the object (otherwise bg might not look right)
    // check to see if current page of level object is
    lda((AreaObjectPageLoc));
    cmp((CurrentPageLoc));
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
    inc((BehindAreaParserFlag));
    JMP(NextAObj);
}

int NextAObj() {
    // increment buffer offset and move on
    JSR(IncAreaObjOffset);
    JMP(ChkLength);
}

int ChkLength() {
    // get buffer offset
    ldx((ObjectOffset));
    lda((AreaObjectLength), x);
    BMI(ProcLoopb);
    dec((AreaObjectLength), x);
    JMP(ProcLoopb);
}

int ProcLoopb() {
    // check object length for anything stored here
    // if not, branch to handle loopback
    // otherwise decrement length or get rid of it
    // decrement buffer offset
    dex();
    BPL(ProcADLoop);
    lda((BehindAreaParserFlag));
    BNE(ProcessAreaData);
    lda((BackloadingFlag));
    BNE(ProcessAreaData);
    JMP(EndAParse);
}

int EndAParse() {
    rts();
    JMP(IncAreaObjOffset);
}

int IncAreaObjOffset() {
    inc((AreaDataOffset));
    // increment offset of level pointer
    inc((AreaDataOffset));
    lda(Imm(0x0));
    // reset page select
    sta((AreaObjectPageSel));
    rts();
    JMP(DecodeAreaData);
}

int DecodeAreaData() {
    lda((AreaObjectLength), x);
    // check current buffer flag
    BMI(Chk1stB);
    ldy((AreaObjOffsetBuffer), x);
    JMP(Chk1stB);
}

int Chk1stB() {
    // if not, get offset from buffer
    // load offset of 16 for special row 15
    ldx(Imm(0x10));
    lda(((AreaData)), y);
    // get first byte of level object again
    cmp(Imm(0xfd));
    BEQ(EndAParse);
    anda(Imm(0xf));
    cmp(Imm(0xf));
    BEQ(ChkRow14);
    ldx(Imm(0x8));
    cmp(Imm(0xc));
    BEQ(ChkRow14);
    ldx(Imm(0x0));
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
    stx(Imm(0x7));
    ldx((ObjectOffset));
    cmp(Imm(0xe));
    // get object offset again
    // row 14?
    BNE(ChkRow13);
    lda(Imm(0x0));
    // if so, load offset with $00
    sta(Imm(0x7));
    lda(Imm(0x2e));
    BNE(NormObj);
    JMP(ChkRow13);
}

int ChkRow13() {
    // and load A with another value
    // unconditional branch
    // row 13?
    cmp(Imm(0xd));
    BNE(ChkSRows);
    lda(Imm(0x22));
    // if so, load offset with 34
    sta(Imm(0x7));
    iny();
    // get next byte
    lda(((AreaData)), y);
    anda(Imm(0b1000000));
    BEQ(LeavePar);
    lda(((AreaData)), y);
    anda(Imm(0b1111111));
    cmp(Imm(0x4b));
    BNE(Mask2MSB);
    inc((LoopCommand));
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
    anda(Imm(0b111111));
    JMP(NormObj);
    JMP(ChkSRows);
}

int ChkSRows() {
    // and jump
    // row 12-15?
    cmp(Imm(0xc));
    BCS(SpecObj);
    iny();
    // if not, get second byte of level object
    lda(((AreaData)), y);
    anda(Imm(0b1110000));
    BNE(LrgObj);
    // mask out all but d6-d4
    // if any bits set, branch to handle large object
    lda(Imm(0x16));
    sta(Imm(0x7));
    lda(((AreaData)), y);
    anda(Imm(0b1111));
    // otherwise set offset of 24 for small object
    // reload second byte of level object
    // mask out higher nybble and jump
    JMP(NormObj);
    JMP(LrgObj);
}

int LrgObj() {
    // store value here (branch for large objects)
    sta(Imm(0x0));
    cmp(Imm(0x70));
    // check for vertical pipe object
    BNE(NotWPipe);
    lda(((AreaData)), y);
    anda(Imm(0b1000));
    BEQ(NotWPipe);
    lda(Imm(0x0));
    // if not, reload second byte
    // mask out all but d3 (usage control bit)
    // if d3 clear, branch to get original value
    // otherwise, nullify value for warp pipe
    sta(Imm(0x0));
    JMP(NotWPipe);
}

int NotWPipe() {
    // get value and jump ahead
    lda(Imm(0x0));
    JMP(MoveAOId);
    JMP(SpecObj);
}

int SpecObj() {
    // branch here for rows 12-15
    iny();
    lda(((AreaData)), y);
    anda(Imm(0b1110000));
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
    sta(Imm(0x0));
    lda((AreaObjectLength), x);
    BPL(RunAObj);
    lda((AreaObjectPageLoc));
    cmp((CurrentPageLoc));
    // is there something stored here already?
    // if so, branch to do its particular sub
    // otherwise check to see if the object we've loaded is on the
    // same page as the renderer, and if so, branch
    BEQ(InitRear);
    ldy((AreaDataOffset));
    lda(((AreaData)), y);
    // if not, get old offset of level pointer
    // and reload first byte
    anda(Imm(0b1111));
    cmp(Imm(0xe));
    // row 14?
    BNE(LeavePar);
    lda((BackloadingFlag));
    BNE(StrAObj);
    JMP(LeavePar);
}

int LeavePar() {
    rts();
    JMP(InitRear);
}

int InitRear() {
    // check backloading flag to see if it's been initialized
    lda((BackloadingFlag));
    BEQ(BackColC);
    lda(Imm(0x0));
    sta((BackloadingFlag));
    // branch to column-wise check
    // if not, initialize both backloading and
    // behind-renderer flags and leave
    sta((BehindAreaParserFlag));
    sta((ObjectOffset));
    JMP(LoopCmdE);
}

int LoopCmdE() {
    rts();
    JMP(BackColC);
}

int BackColC() {
    // get first byte again
    ldy((AreaDataOffset));
    lda(((AreaData)), y);
    anda(Imm(0b11110000));
    // mask out low nybble and move high to low
    lsr();
    lsr();
    lsr();
    lsr();
    cmp((CurrentColumnPos));
    BNE(LeavePar);
    JMP(StrAObj);
}

int StrAObj() {
    // is this where we're at?
    // if not, branch to leave
    // if so, load area obj offset and store in buffer
    lda((AreaDataOffset));
    sta((AreaObjOffsetBuffer), x);
    JSR(IncAreaObjOffset);
    JMP(RunAObj);
}

int RunAObj() {
    // do sub to increment to next object data
    // get stored value and add offset to it
    lda(Imm(0x0));
    clc();
    // then use the jump engine with current contents of A
    adc(Imm(0x7));
    JMP(AlterAreaAttributes);
}

int AlterAreaAttributes() {
    ldy((AreaObjOffsetBuffer), x);
    iny();
    // object for special row $0e or 14
    // (these apply to all area object subroutines in this section unless otherwise stated)
    // $07 - starts with adder from area parser, used to store row offset
    // load offset for level object data saved in buffer
    // load second byte
    lda(((AreaData)), y);
    pha();
    // save in stack for now
    anda(Imm(0b1000000));
    BNE(Alter2);
    // branch if d6 is set
    pla();
    pha();
    anda(Imm(0b1111));
    sta((TerrainControl));
    // pull and push offset to copy to A
    // mask out high nybble and store as
    // new terrain height type bits
    pla();
    anda(Imm(0b110000));
    lsr();
    lsr();
    // pull and mask out all but d5 and d4
    // move bits to lower nybble and store
    // as new background scenery bits
    lsr();
    lsr();
    sta((BackgroundScenery));
    // then leave
    rts();
    JMP(Alter2);
}

int Alter2() {
    pla();
    anda(Imm(0b111));
    cmp(Imm(0x4));
    BCC(SetFore);
    // mask out all but 3 LSB
    // if four or greater, set color control bits
    // and nullify foreground scenery bits
    sta((BackgroundColorCtrl));
    lda(Imm(0x0));
    JMP(SetFore);
}

int SetFore() {
    // otherwise set new foreground scenery bits
    sta((ForegroundScenery));
    rts();
    JMP(ScrollLockObject_Warp);
}

int ScrollLockObject_Warp() {
    ldx(Imm(0x4));
    lda((WorldNumber));
    // load value of 4 for game text routine as default
    // warp zone (4-3-2), then check world number
    BEQ(WarpNum);
    inx();
    ldy((AreaType));
    // if world number > 1, increment for next warp zone (5)
    // check area type
    dey();
    BNE(WarpNum);
    inx();
    JMP(WarpNum);
}

int WarpNum() {
    txa();
    sta((WarpZoneControl));
    JSR(WriteGameText);
    // store number here to be used by warp zone routine
    // print text and warp zone numbers
    lda((PiranhaPlant));
    JSR(KillEnemies);
    JMP(ScrollLockObject);
}

int ScrollLockObject() {
    lda((ScrollLock));
    // invert scroll lock to turn it on
    eor(Imm(0b1));
    sta((ScrollLock));
    rts();
    JMP(KillEnemies);
}

int KillEnemies() {
    sta(Imm(0x0));
    // $00 - used to store enemy identifier in KillEnemies
    // store identifier here
    lda(Imm(0x0));
    ldx(Imm(0x4));
    JMP(KillELoop);
}

int KillELoop() {
    ldy((Enemy_ID), x);
    cpy(Imm(0x0));
    // if not found, branch
    BNE(NoKillE);
    sta((Enemy_Flag), x);
    JMP(NoKillE);
}

int NoKillE() {
    // if found, deactivate enemy object flag
    // do this until all slots are checked
    dex();
    BPL(KillELoop);
    rts();
    JMP(AreaFrenzy);
}

int AreaFrenzy() {
    // use area object identifier bit as offset
    ldx(Imm(0x0));
    lda((((FrenzyIDData)) - (Imm(8))), x);
    // note that it starts at 8, thus weird address here
    ldy(Imm(0x5));
    JMP(FreCompLoop);
}

int FreCompLoop() {
    // check regular slots of enemy object buffer
    dey();
    BMI(ExitAFrenzy);
    cmp((Enemy_ID), y);
    // if all slots checked and enemy object not found, branch to store
    // check for enemy object in buffer versus frenzy object
    BNE(FreCompLoop);
    lda(Imm(0x0));
    JMP(ExitAFrenzy);
}

int ExitAFrenzy() {
    // if enemy object already present, nullify queue and leave
    // store enemy into frenzy queue
    sta((EnemyFrenzyQueue));
    rts();
    JMP(AreaStyleObject);
}

int AreaStyleObject() {
    lda((AreaStyle));
    JMP(TreeLedge);
}

int TreeLedge() {
    JSR(GetLrgObjAttrib);
    lda((AreaObjectLength), x);
    // get row and length of green ledge
    // check length counter for expiration
    BEQ(EndTreeL);
    BPL(MidTreeL);
    tya();
    sta((AreaObjectLength), x);
    // store lower nybble into buffer flag as length of ledge
    lda((CurrentPageLoc));
    ora((CurrentColumnPos));
    // are we at the start of the level?
    BEQ(MidTreeL);
    lda(Imm(0x16));
    // render start of tree ledge
    JMP(NoUnder);
    JMP(MidTreeL);
}

int MidTreeL() {
    ldx(Imm(0x7));
    lda(Imm(0x17));
    sta((MetatileBuffer), x);
    lda(Imm(0x4c));
    JMP(AllUnder);
    JMP(EndTreeL);
}

int EndTreeL() {
    // render middle of tree ledge
    // note that this is also used if ledge position is
    // at the start of level for continuous effect
    // now render the part underneath
    // render end of tree ledge
    lda(Imm(0x18));
    JMP(NoUnder);
    JMP(MushroomLedge);
}

int MushroomLedge() {
    JSR(ChkLrgObjLength);
    sty(Imm(0x6));
    // get shroom dimensions
    // store length here for now
    BCC(EndMushL);
    lda((AreaObjectLength), x);
    // divide length by 2 and store elsewhere
    lsr();
    sta((MushroomLedgeHalfLen), x);
    lda(Imm(0x19));
    // render start of mushroom
    JMP(NoUnder);
    JMP(EndMushL);
}

int EndMushL() {
    // if at the end, render end of mushroom
    lda(Imm(0x1b));
    ldy((AreaObjectLength), x);
    BEQ(NoUnder);
    lda((MushroomLedgeHalfLen), x);
    sta(Imm(0x6));
    // get divided length and store where length
    // was stored originally
    ldx(Imm(0x7));
    lda(Imm(0x1a));
    sta((MetatileBuffer), x);
    cpy(Imm(0x6));
    BNE(MushLExit);
    // render middle of mushroom
    // are we smack dab in the center?
    // if not, branch to leave
    inx();
    lda(Imm(0x4f));
    sta((MetatileBuffer), x);
    // render stem top of mushroom underneath the middle
    lda(Imm(0x50));
    JMP(AllUnder);
}

int AllUnder() {
    inx();
    ldy(Imm(0xf));
    JMP(RenderUnderPart);
    JMP(NoUnder);
}

int NoUnder() {
    // set $0f to render all way down
    // now render the stem of mushroom
    // load row of ledge
    ldx(Imm(0x7));
    ldy(Imm(0x0));
    // set 0 for no bottom on this part
    JMP(RenderUnderPart);
    JMP(PulleyRopeObject);
}

int PulleyRopeObject() {
    JSR(ChkLrgObjLength);
    ldy(Imm(0x0));
    BCS(RenderPul);
    // get length of pulley/rope object
    // initialize metatile offset
    // if starting, render left pulley
    iny();
    lda((AreaObjectLength), x);
    // if not at the end, render rope
    BNE(RenderPul);
    iny();
    JMP(RenderPul);
}

int RenderPul() {
    lda((PulleyRopeMetatiles), y);
    sta((MetatileBuffer));
    JMP(MushLExit);
}

int MushLExit() {
    // render at the top of the screen
    // and leave
    rts();
    JMP(CastleObject);
}

int CastleObject() {
    JSR(GetLrgObjAttrib);
    sty(Imm(0x7));
    // save lower nybble as starting row
    // if starting row is above $0a, game will crash!!!
    ldy(Imm(0x4));
    JSR(ChkLrgObjFixedLength);
    // load length of castle if not already loaded
    txa();
    pha();
    ldy((AreaObjectLength), x);
    ldx(Imm(0x7));
    // save obj buffer offset to stack
    // use current length as offset for castle data
    // begin at starting row
    lda(Imm(0xb));
    sta(Imm(0x6));
    JMP(CRendLoop);
}

int CRendLoop() {
    // load upper limit of number of rows to print
    // load current byte using offset
    lda((CastleMetatiles), y);
    sta((MetatileBuffer), x);
    inx();
    // store in buffer and increment buffer offset
    lda(Imm(0x6));
    BEQ(ChkCFloor);
    iny();
    iny();
    // have we reached upper limit yet?
    // if not, increment column-wise
    // to byte in next row
    iny();
    iny();
    iny();
    dec(Imm(0x6));
    JMP(ChkCFloor);
}

int ChkCFloor() {
    // move closer to upper limit
    // have we reached the row just before floor?
    cpx(Imm(0xb));
    BNE(CRendLoop);
    // if not, go back and do another row
    pla();
    tax();
    // get obj buffer offset from before
    lda((CurrentPageLoc));
    BEQ(ExitCastle);
    lda((AreaObjectLength), x);
    cmp(Imm(0x1));
    // if we're at page 0, we do not need to do anything else
    // check length
    // if length almost about to expire, put brick at floor
    BEQ(PlayerStop);
    ldy(Imm(0x7));
    // check starting row for tall castle ($00)
    BNE(NotTall);
    cmp(Imm(0x3));
    // if found, then check to see if we're at the second column
    BEQ(PlayerStop);
    JMP(NotTall);
}

int NotTall() {
    // if not tall castle, check to see if we're at the third column
    cmp(Imm(0x2));
    BNE(ExitCastle);
    JSR(GetAreaObjXPosition);
    // if we aren't and the castle is tall, don't create flag yet
    // otherwise, obtain and save horizontal pixel coordinate
    pha();
    JSR(FindEmptyEnemySlot);
    // find an empty place on the enemy object buffer
    pla();
    sta((Enemy_X_Position), x);
    // then write horizontal coordinate for star flag
    lda((CurrentPageLoc));
    sta((Enemy_PageLoc), x);
    // set page location for star flag
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    sta((Enemy_Flag), x);
    // set vertical high byte
    // set flag for buffer
    lda(Imm(0x90));
    sta((Enemy_Y_Position), x);
    lda((StarFlagObject));
    // set vertical coordinate
    // set star flag value in buffer itself
    sta((Enemy_ID), x);
    rts();
    JMP(PlayerStop);
}

int PlayerStop() {
    // put brick at floor to stop player at end of level
    ldy(Imm(0x52));
    sty((((MetatileBuffer)) + (Imm(10))));
    JMP(ExitCastle);
}

int ExitCastle() {
    rts();
    JMP(WaterPipe);
}

int WaterPipe() {
    JSR(GetLrgObjAttrib);
    ldy((AreaObjectLength), x);
    ldx(Imm(0x7));
    // get row and lower nybble
    // get length (residual code, water pipe is 1 col thick)
    // get row
    lda(Imm(0x6b));
    sta((MetatileBuffer), x);
    // draw something here and below it
    lda(Imm(0x6c));
    sta((((MetatileBuffer)) + (Imm(1))), x);
    rts();
    JMP(IntroPipe);
}

int IntroPipe() {
    ldy(Imm(0x3));
    // $05 - used to store length of vertical shaft in RenderSidewaysPipe
    // and vertical length in VerticalPipe and GetPipeHeight
    // check if length set, if not set, set it
    JSR(ChkLrgObjFixedLength);
    ldy(Imm(0xa));
    // set fixed value and render the sideways part
    JSR(RenderSidewaysPipe);
    BCS(NoBlankP);
    ldx(Imm(0x6));
    JMP(VPipeSectLoop);
}

int VPipeSectLoop() {
    // if carry flag set, not time to draw vertical pipe part
    // blank everything above the vertical pipe part
    // all the way to the top of the screen
    lda(Imm(0x0));
    sta((MetatileBuffer), x);
    // because otherwise it will look like exit pipe
    dex();
    BPL(VPipeSectLoop);
    lda((VerticalPipeData), y);
    // draw the end of the vertical pipe part
    sta((((MetatileBuffer)) + (Imm(7))));
    JMP(NoBlankP);
}

int NoBlankP() {
    rts();
    JMP(ExitPipe);
}

int ExitPipe() {
    ldy(Imm(0x3));
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
    sty(Imm(0x5));
    ldy((AreaObjectLength), x);
    // get length left over and store here
    sty(Imm(0x6));
    ldx(Imm(0x5));
    // get vertical length plus one, use as buffer offset
    inx();
    lda((SidePipeShaftData), y);
    // check for value $00 based on horizontal offset
    cmp(Imm(0x0));
    BEQ(DrawSidePart);
    // if found, do not draw the vertical pipe shaft
    ldx(Imm(0x0));
    ldy(Imm(0x5));
    JSR(RenderUnderPart);
    clc();
    JMP(DrawSidePart);
}

int DrawSidePart() {
    // init buffer offset and get vertical length
    // and render vertical shaft using tile number in A
    // clear carry flag to be used by IntroPipe
    // render side pipe part at the bottom
    ldy(Imm(0x6));
    lda((SidePipeTopPart), y);
    sta((MetatileBuffer), x);
    lda((SidePipeBottomPart), y);
    // note that the pipe parts are stored
    // backwards horizontally
    sta((((MetatileBuffer)) + (Imm(1))), x);
    rts();
    JMP(VerticalPipe);
}

int VerticalPipe() {
    JSR(GetPipeHeight);
    lda(Imm(0x0));
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
    lda((AreaNumber));
    ora((WorldNumber));
    // if at world 1-1, do not add piranha plant ever
    BEQ(DrawPipe);
    ldy((AreaObjectLength), x);
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
    adc(Imm(0x8));
    sta((Enemy_X_Position), x);
    lda((CurrentPageLoc));
    // add eight to put the piranha plant in the center
    // store as enemy's horizontal coordinate
    // add carry to current page number
    adc(Imm(0x0));
    sta((Enemy_PageLoc), x);
    // store as enemy's page coordinate
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    sta((Enemy_Flag), x);
    JSR(GetAreaObjYPosition);
    // activate enemy flag
    // get piranha plant's vertical coordinate and store here
    sta((Enemy_Y_Position), x);
    lda((PiranhaPlant));
    // write piranha plant's value into buffer
    sta((Enemy_ID), x);
    JSR(InitPiranhaPlant);
    JMP(DrawPipe);
}

int DrawPipe() {
    // get value saved earlier and use as Y
    pla();
    tay();
    ldx(Imm(0x7));
    lda((VerticalPipeData), y);
    sta((MetatileBuffer), x);
    // get buffer offset
    // draw the appropriate pipe with the Y we loaded earlier
    // render the top of the pipe
    inx();
    lda((((VerticalPipeData)) + (Imm(2))), y);
    ldy(Imm(0x6));
    // render the rest of the pipe
    // subtract one from length and render the part underneath
    dey();
    JMP(RenderUnderPart);
    JMP(GetPipeHeight);
}

int GetPipeHeight() {
    ldy(Imm(0x1));
    JSR(ChkLrgObjFixedLength);
    // check for length loaded, if not, load
    // pipe length of 2 (horizontal)
    JSR(GetLrgObjAttrib);
    tya();
    anda(Imm(0x7));
    sta(Imm(0x6));
    ldy((AreaObjectLength), x);
    // get saved lower nybble as height
    // save only the three lower bits as
    // vertical length, then load Y with
    // length left over
    rts();
    JMP(FindEmptyEnemySlot);
}

int FindEmptyEnemySlot() {
    ldx(Imm(0x0));
    JMP(EmptyChkLoop);
}

int EmptyChkLoop() {
    // start at first enemy slot
    // clear carry flag by default
    clc();
    lda((Enemy_Flag), x);
    BEQ(ExitEmptyChk);
    // check enemy buffer for nonzero
    // if zero, leave
    inx();
    cpx(Imm(0x5));
    // if nonzero, check next value
    BNE(EmptyChkLoop);
    JMP(ExitEmptyChk);
}

int ExitEmptyChk() {
    // if all values nonzero, carry flag is set
    rts();
    JMP(Hole_Water);
}

int Hole_Water() {
    JSR(ChkLrgObjLength);
    lda(Imm(0x86));
    // get low nybble and save as length
    // render waves
    sta((((MetatileBuffer)) + (Imm(10))));
    ldx(Imm(0xb));
    ldy(Imm(0x1));
    // now render the water underneath
    lda(Imm(0x87));
    JMP(RenderUnderPart);
    JMP(QuestionBlockRow_High);
}

int QuestionBlockRow_High() {
    lda(Imm(0x3));
    BRA(_bit_hack_6605);
    JMP(QuestionBlockRow_Low);
}

int QuestionBlockRow_Low() {
    lda(Imm(0x7));
    JMP(_bit_hack_6605);
}

int _bit_hack_6605() {
    pha();
    JSR(ChkLrgObjLength);
    // save whatever row to the stack for now
    // get low nybble and save as length
    pla();
    tax();
    // render question boxes with coins
    lda(Imm(0xc0));
    sta((MetatileBuffer), x);
    rts();
    JMP(Bridge_High);
}

int Bridge_High() {
    lda(Imm(0x6));
    BRA(_bit_hack_6625);
    JMP(Bridge_Middle);
}

int Bridge_Middle() {
    lda(Imm(0x7));
    JMP(_bit_hack_6625);
}

int _bit_hack_6625() {
    BRA(_bit_hack_6631);
    JMP(Bridge_Low);
}

int Bridge_Low() {
    lda(Imm(0x9));
    JMP(_bit_hack_6631);
}

int _bit_hack_6631() {
    pha();
    JSR(ChkLrgObjLength);
    // save whatever row to the stack for now
    // get low nybble and save as length
    pla();
    tax();
    // render bridge railing
    lda(Imm(0xb));
    sta((MetatileBuffer), x);
    inx();
    ldy(Imm(0x0));
    // now render the bridge itself
    lda(Imm(0x63));
    JMP(RenderUnderPart);
    JMP(FlagBalls_Residual);
}

int FlagBalls_Residual() {
    JSR(GetLrgObjAttrib);
    ldx(Imm(0x2));
    lda(Imm(0x6d));
    // get low nybble from object byte
    // render flag balls on third row from top
    // of screen downwards based on low nybble
    JMP(RenderUnderPart);
    JMP(FlagpoleObject);
}

int FlagpoleObject() {
    lda(Imm(0x24));
    // render flagpole ball on top
    sta((MetatileBuffer));
    ldx(Imm(0x1));
    // now render the flagpole shaft
    ldy(Imm(0x8));
    lda(Imm(0x25));
    JSR(RenderUnderPart);
    lda(Imm(0x61));
    // render solid block at the bottom
    sta((((MetatileBuffer)) + (Imm(10))));
    JSR(GetAreaObjXPosition);
    sec();
    sbc(Imm(0x8));
    sta((((Enemy_X_Position)) + (Imm(5))));
    // get pixel coordinate of where the flagpole is,
    // subtract eight pixels and use as horizontal
    // coordinate for the flag
    lda((CurrentPageLoc));
    sbc(Imm(0x0));
    sta((((Enemy_PageLoc)) + (Imm(5))));
    // subtract borrow from page location and use as
    // page location for the flag
    lda(Imm(0x30));
    sta((((Enemy_Y_Position)) + (Imm(5))));
    // set vertical coordinate for flag
    lda(Imm(0xb0));
    sta((FlagpoleFNum_Y_Pos));
    // set initial vertical coordinate for flagpole's floatey number
    lda((FlagpoleFlagObject));
    sta((((Enemy_ID)) + (Imm(5))));
    inc((((Enemy_Flag)) + (Imm(5))));
    // set flag identifier, note that identifier and coordinates
    // use last space in enemy object buffer
    rts();
    JMP(EndlessRope);
}

int EndlessRope() {
    ldx(Imm(0x0));
    // render rope from the top to the bottom of screen
    ldy(Imm(0xf));
    JMP(DrawRope);
    JMP(BalancePlatRope);
}

int BalancePlatRope() {
    txa();
    // save object buffer offset for now
    pha();
    ldx(Imm(0x1));
    ldy(Imm(0xf));
    // blank out all from second row to the bottom
    // with blank used for balance platform rope
    lda(Imm(0x44));
    JSR(RenderUnderPart);
    pla();
    // get back object buffer offset
    tax();
    JSR(GetLrgObjAttrib);
    // get vertical length from lower nybble
    ldx(Imm(0x1));
    JMP(DrawRope);
}

int DrawRope() {
    // render the actual rope
    lda(Imm(0x40));
    JMP(RenderUnderPart);
    JMP(RowOfCoins);
}

int RowOfCoins() {
    ldy((AreaType));
    lda((CoinMetatileData), y);
    // get area type
    // load appropriate coin metatile
    JMP(GetRow);
    JMP(CastleBridgeObj);
}

int CastleBridgeObj() {
    ldy(Imm(0xc));
    // load length of 13 columns
    JSR(ChkLrgObjFixedLength);
    JMP(ChainObj);
    JMP(AxeObj);
}

int AxeObj() {
    lda(Imm(0x8));
    // load bowser's palette into sprite portion of palette
    sta((VRAM_Buffer_AddrCtrl));
    JMP(ChainObj);
}

int ChainObj() {
    ldy(Imm(0x0));
    ldx((((C_ObjectRow)) - (Imm(2))), y);
    // get value loaded earlier from decoder
    // get appropriate row and metatile for object
    lda((((C_ObjectMetatile)) - (Imm(2))), y);
    JMP(ColObj);
    JMP(EmptyBlock);
}

int EmptyBlock() {
    JSR(GetLrgObjAttrib);
    // get row location
    ldx(Imm(0x7));
    lda(Imm(0xc4));
    JMP(ColObj);
}

int ColObj() {
    // column length of 1
    ldy(Imm(0x0));
    JMP(RenderUnderPart);
    JMP(RowOfBricks);
}

int RowOfBricks() {
    ldy((AreaType));
    lda((CloudTypeOverride));
    // load area type obtained from area offset pointer
    // check for cloud type override
    BEQ(DrawBricks);
    ldy(Imm(0x4));
    JMP(DrawBricks);
}

int DrawBricks() {
    // if cloud type, override area type
    // get appropriate metatile
    lda((BrickMetatiles), y);
    JMP(GetRow);
    JMP(RowOfSolidBlocks);
}

int RowOfSolidBlocks() {
    ldy((AreaType));
    lda((SolidBlockMetatiles), y);
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
    ldx(Imm(0x7));
    ldy(Imm(0x0));
    // set vertical height of 1
    pla();
    JMP(RenderUnderPart);
    JMP(ColumnOfBricks);
}

int ColumnOfBricks() {
    ldy((AreaType));
    lda((BrickMetatiles), y);
    // load area type obtained from area offset
    // get metatile (no cloud override as for row)
    JMP(GetRow2);
    JMP(ColumnOfSolidBlocks);
}

int ColumnOfSolidBlocks() {
    ldy((AreaType));
    lda((SolidBlockMetatiles), y);
    JMP(GetRow2);
}

int GetRow2() {
    // load area type obtained from area offset
    // get metatile
    // save metatile to stack for now
    pha();
    JSR(GetLrgObjAttrib);
    pla();
    ldx(Imm(0x7));
    JMP(RenderUnderPart);
    JMP(BulletBillCannon);
}

int BulletBillCannon() {
    JSR(GetLrgObjAttrib);
    ldx(Imm(0x7));
    lda(Imm(0x64));
    // get row and length of bullet bill cannon
    // start at first row
    // render bullet bill cannon
    sta((MetatileBuffer), x);
    inx();
    dey();
    // done yet?
    BMI(SetupCannon);
    lda(Imm(0x65));
    // if not, render middle part
    sta((MetatileBuffer), x);
    inx();
    dey();
    // done yet?
    BMI(SetupCannon);
    lda(Imm(0x66));
    // if not, render bottom until length expires
    JSR(RenderUnderPart);
    JMP(SetupCannon);
}

int SetupCannon() {
    // get offset for data used by cannons and whirlpools
    ldx((Cannon_Offset));
    JSR(GetAreaObjYPosition);
    sta((Cannon_Y_Position), x);
    // get proper vertical coordinate for cannon
    // and store it here
    lda((CurrentPageLoc));
    sta((Cannon_PageLoc), x);
    JSR(GetAreaObjXPosition);
    sta((Cannon_X_Position), x);
    // store page number for cannon here
    // get proper horizontal coordinate for cannon
    // and store it here
    inx();
    cpx(Imm(0x6));
    BCC(StrCOffset);
    ldx(Imm(0x0));
    JMP(StrCOffset);
}

int StrCOffset() {
    // increment and check offset
    // if not yet reached sixth cannon, branch to save offset
    // otherwise initialize it
    // save new offset and leave
    stx((Cannon_Offset));
    rts();
    JMP(StaircaseObject);
}

int StaircaseObject() {
    JSR(ChkLrgObjLength);
    BCC(NextStair);
    lda(Imm(0x9));
    sta((StaircaseControl));
    JMP(NextStair);
}

int NextStair() {
    // check and load length
    // if length already loaded, skip init part
    // start past the end for the bottom
    // of the staircase
    // move onto next step (or first if starting)
    dec((StaircaseControl));
    ldy((StaircaseControl));
    ldx((StaircaseRowData), y);
    // get starting row and height to render
    lda((StaircaseHeightData), y);
    tay();
    lda(Imm(0x61));
    // now render solid block staircase
    JMP(RenderUnderPart);
    JMP(Jumpspring);
}

int Jumpspring() {
    JSR(GetLrgObjAttrib);
    JSR(FindEmptyEnemySlot);
    JSR(GetAreaObjXPosition);
    sta((Enemy_X_Position), x);
    lda((CurrentPageLoc));
    // find empty space in enemy object buffer
    // get horizontal coordinate for jumpspring
    // and store
    // store page location of jumpspring
    sta((Enemy_PageLoc), x);
    JSR(GetAreaObjYPosition);
    sta((Enemy_Y_Position), x);
    sta((Jumpspring_FixedYPos), x);
    // get vertical coordinate for jumpspring
    // and store
    // store as permanent coordinate here
    lda((JumpspringObject));
    sta((Enemy_ID), x);
    // write jumpspring object to enemy object buffer
    ldy(Imm(0x1));
    sty((Enemy_Y_HighPos), x);
    inc((Enemy_Flag), x);
    // store vertical high byte
    // set flag for enemy object buffer
    ldx(Imm(0x7));
    lda(Imm(0x67));
    // draw metatiles in two rows where jumpspring is
    sta((MetatileBuffer), x);
    lda(Imm(0x68));
    sta((((MetatileBuffer)) + (Imm(1))), x);
    rts();
    JMP(Hidden1UpBlock);
}

int Hidden1UpBlock() {
    lda((Hidden1UpFlag));
    // $07 - used to save ID of brick object
    // if flag not set, do not render object
    BEQ(ExitDecBlock);
    lda(Imm(0x0));
    // if set, init for the next one
    sta((Hidden1UpFlag));
    JMP(BrickWithItem);
    JMP(QuestionBlock);
}

int QuestionBlock() {
    JSR(GetAreaObjectID);
    JMP(DrawQBlk);
    JMP(BrickWithCoins);
}

int BrickWithCoins() {
    lda(Imm(0x0));
    // initialize multi-coin timer flag
    sta((BrickCoinTimerFlag));
    JMP(BrickWithItem);
}

int BrickWithItem() {
    JSR(GetAreaObjectID);
    // save area object ID
    sty(Imm(0x7));
    lda(Imm(0x0));
    ldy((AreaType));
    // load default adder for bricks with lines
    // check level type for ground level
    dey();
    BEQ(BWithL);
    lda(Imm(0x5));
    JMP(BWithL);
}

int BWithL() {
    // if ground type, do not start with 5
    // otherwise use adder for bricks without lines
    // add object ID to adder
    clc();
    adc(Imm(0x7));
    tay();
    JMP(DrawQBlk);
}

int DrawQBlk() {
    // use as offset for metatile
    // get appropriate metatile for brick (question block
    lda((BrickQBlockMetatiles), y);
    pha();
    JSR(GetLrgObjAttrib);
    JMP(DrawRow);
    JMP(GetAreaObjectID);
}

int GetAreaObjectID() {
    lda(Imm(0x0));
    // get value saved from area parser routine
    sec();
    sbc(Imm(0x0));
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
    lda((AreaType));
    BNE(NoWhirlP);
    ldx((Whirlpool_Offset));
    JSR(GetAreaObjXPosition);
    // get lower nybble and save as length
    // skip this part if length already loaded
    // check for water type level
    // if not water type, skip this part
    // get offset for data used by cannons and whirlpools
    // get proper vertical coordinate of where we're at
    sec();
    sbc(Imm(0x10));
    sta((Whirlpool_LeftExtent), x);
    lda((CurrentPageLoc));
    sbc(Imm(0x0));
    sta((Whirlpool_PageLoc), x);
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
    sta((Whirlpool_Length), x);
    // multiply by 16 to get size of whirlpool
    // note that whirlpool will always be
    // two blocks bigger than actual size of hole
    // and extend one block beyond each edge
    // save size of whirlpool here
    inx();
    cpx(Imm(0x5));
    BCC(StrWOffset);
    ldx(Imm(0x0));
    JMP(StrWOffset);
}

int StrWOffset() {
    // increment and check offset
    // if not yet reached fifth whirlpool, branch to save offset
    // otherwise initialize it
    // save new offset here
    stx((Whirlpool_Offset));
    JMP(NoWhirlP);
}

int NoWhirlP() {
    // get appropriate metatile, then
    ldx((AreaType));
    lda((HoleMetatiles), x);
    // render the hole proper
    ldx(Imm(0x8));
    ldy(Imm(0xf));
    JMP(RenderUnderPart);
}

int RenderUnderPart() {
    sty((AreaObjectHeight));
    ldy((MetatileBuffer), x);
    BEQ(DrawThisRow);
    // store vertical length to render
    // check current spot to see if there's something
    // we need to keep, if nothing, go ahead
    cpy(Imm(0x17));
    BEQ(WaitOneRow);
    // if middle part (tree ledge), wait until next row
    cpy(Imm(0x1a));
    BEQ(WaitOneRow);
    // if middle part (mushroom ledge), wait until next row
    cpy(Imm(0xc0));
    BEQ(DrawThisRow);
    // if question block w/ coin, overwrite
    cpy(Imm(0xc0));
    BCS(WaitOneRow);
    // if any other metatile with palette 3, wait until next row
    cpy(Imm(0x54));
    BNE(DrawThisRow);
    // if cracked rock terrain, overwrite
    cmp(Imm(0x50));
    BEQ(WaitOneRow);
    JMP(DrawThisRow);
}

int DrawThisRow() {
    // if stem top of mushroom, wait until next row
    // render contents of A from routine that called this
    sta((MetatileBuffer), x);
    JMP(WaitOneRow);
}

int WaitOneRow() {
    inx();
    cpx(Imm(0xd));
    // stop rendering if we're at the bottom of the screen
    BCS(ExitUPartR);
    ldy((AreaObjectHeight));
    // decrement, and stop rendering if there is no more length
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
    lda((AreaObjectLength), x);
    clc();
    BPL(LenSet);
    tya();
    // check for set length counter
    // clear carry flag for not just starting
    // if counter not set, load it, otherwise leave alone
    // save length into length counter
    sta((AreaObjectLength), x);
    sec();
    JMP(LenSet);
}

int LenSet() {
    rts();
    JMP(GetLrgObjAttrib);
}

int GetLrgObjAttrib() {
    ldy((AreaObjOffsetBuffer), x);
    lda(((AreaData)), y);
    // get offset saved from area obj decoding routine
    // get first byte of level object
    anda(Imm(0b1111));
    sta(Imm(0x7));
    // save row location
    iny();
    lda(((AreaData)), y);
    anda(Imm(0b1111));
    // get next byte, save lower nybble (length or height)
    // as Y, then leave
    tay();
    rts();
    JMP(GetAreaObjXPosition);
}

int GetAreaObjXPosition() {
    lda((CurrentColumnPos));
    asl();
    // multiply current offset where we're at by 16
    // to obtain horizontal pixel coordinate
    asl();
    asl();
    asl();
    rts();
    JMP(GetAreaObjYPosition);
}

int GetAreaObjYPosition() {
    lda(Imm(0x7));
    // multiply value by 16
    asl();
    asl();
    // this will give us the proper vertical pixel coordinate
    asl();
    asl();
    clc();
    adc(Imm(32));
    // add 32 pixels for the status bar
    rts();
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
    lda((((BlockBufferAddr)) + (Imm(2))), y);
    // use nybble as pointer to high byte
    // of indirect here
    sta(Imm(0x7));
    pla();
    anda(Imm(0b1111));
    // pull from stack, mask out high nybble
    clc();
    adc((BlockBufferAddr), y);
    sta(Imm(0x6));
    // add to low byte
    // store here and leave
    rts();
    JMP(LoadAreaPointer);
}

int LoadAreaPointer() {
    JSR(FindAreaPointer);
    // find it and store it here
    sta((AreaPointer));
    JMP(GetAreaType);
}

int GetAreaType() {
    // mask out all but d6 and d5
    anda(Imm(0b1100000));
    asl();
    rol();
    rol();
    rol();
    sta((AreaType));
    // make %0xx00000 into %000000xx
    // save 2 MSB as area type
    rts();
    JMP(FindAreaPointer);
}

int FindAreaPointer() {
    ldy((WorldNumber));
    // load offset from world variable
    lda((WorldAddrOffsets), y);
    clc();
    // add area number used to find data
    adc((AreaNumber));
    tay();
    lda((AreaAddrOffsets), y);
    // from there we have our area pointer
    rts();
    JMP(GetAreaDataAddrs);
}

int GetAreaDataAddrs() {
    lda((AreaPointer));
    // use 2 MSB for Y
    JSR(GetAreaType);
    tay();
    lda((AreaPointer));
    // mask out all but 5 LSB
    anda(Imm(0b11111));
    sta((AreaAddrsLOffset));
    lda((EnemyAddrHOffsets), y);
    clc();
    adc((AreaAddrsLOffset));
    // save as low offset
    // load base value with 2 altered MSB,
    // then add base value to 5 LSB, result
    // becomes offset for level data
    tay();
    lda((EnemyDataAddrLow), y);
    // use offset to load pointer
    sta((EnemyDataLow));
    lda((EnemyDataAddrHigh), y);
    sta((EnemyDataHigh));
    ldy((AreaType));
    lda((AreaDataHOffsets), y);
    // use area type as offset
    // do the same thing but with different base value
    clc();
    adc((AreaAddrsLOffset));
    tay();
    lda((AreaDataAddrLow), y);
    // use this offset to load another pointer
    sta((AreaDataLow));
    lda((AreaDataAddrHigh), y);
    sta((AreaDataHigh));
    ldy(Imm(0x0));
    // load first byte of header
    lda(((AreaData)), y);
    pha();
    anda(Imm(0b111));
    // save it to the stack for now
    // save 3 LSB for foreground scenery or bg color control
    cmp(Imm(0x4));
    BCC(StoreFore);
    sta((BackgroundColorCtrl));
    // if 4 or greater, save value here as bg color control
    lda(Imm(0x0));
    JMP(StoreFore);
}

int StoreFore() {
    // if less, save value here as foreground scenery
    sta((ForegroundScenery));
    pla();
    // pull byte from stack and push it back
    pha();
    anda(Imm(0b111000));
    lsr();
    // save player entrance control bits
    // shift bits over to LSBs
    lsr();
    lsr();
    sta((PlayerEntranceCtrl));
    pla();
    anda(Imm(0b11000000));
    // save value here as player entrance control
    // pull byte again but do not push it back
    // save 2 MSB for game timer setting
    clc();
    rol();
    // rotate bits over to LSBs
    rol();
    rol();
    sta((GameTimerSetting));
    // save value here as game timer setting
    iny();
    lda(((AreaData)), y);
    pha();
    anda(Imm(0b1111));
    // load second byte of header
    // save to stack
    // mask out all but lower nybble
    sta((TerrainControl));
    pla();
    // pull and push byte to copy it to A
    pha();
    anda(Imm(0b110000));
    // save 2 MSB for background scenery type
    lsr();
    lsr();
    // shift bits to LSBs
    lsr();
    lsr();
    sta((BackgroundScenery));
    // save as background scenery
    pla();
    anda(Imm(0b11000000));
    clc();
    rol();
    // rotate bits over to LSBs
    rol();
    rol();
    cmp(Imm(0b11));
    BNE(StoreStyle);
    sta((CloudTypeOverride));
    // if set to 3, store here
    // and nullify other value
    // otherwise store value in other place
    lda(Imm(0x0));
    JMP(StoreStyle);
}

int StoreStyle() {
    sta((AreaStyle));
    lda((AreaDataLow));
    // increment area data address by 2 bytes
    clc();
    adc(Imm(0x2));
    sta((AreaDataLow));
    lda((AreaDataHigh));
    adc(Imm(0x0));
    sta((AreaDataHigh));
    rts();
    JMP(AreaAddrOffsets);
}

int AreaAddrOffsets() {
    JMP(GameMode);
}

int GameMode() {
    lda((OperMode_Task));
    JMP(GameCoreRoutine);
}

int GameCoreRoutine() {
    ldx((CurrentPlayer));
    lda((SavedJoypadBits), x);
    sta((SavedJoypadBits));
    JSR(GameRoutines);
    lda((OperMode_Task));
    cmp(Imm(0x3));
    BCS(GameEngine);
    // get which player is on the screen
    // use appropriate player's controller bits
    // as the master controller bits
    // execute one of many possible subs
    // check major task of operating mode
    // if we are supposed to be here,
    // branch to the game engine itself
    rts();
    JMP(GameEngine);
}

int GameEngine() {
    JSR(ProcFireball_Bubble);
    // process fireballs and air bubbles
    ldx(Imm(0x0));
    JMP(ProcELoop);
}

int ProcELoop() {
    // put incremented offset in X as enemy object offset
    stx((ObjectOffset));
    JSR(EnemiesAndLoopsCore);
    JSR(FloateyNumbersRoutine);
    // process enemy objects
    // process floatey numbers
    inx();
    cpx(Imm(0x6));
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
    ldx(Imm(0x1));
    stx((ObjectOffset));
    JSR(BlockObjectsCore);
    // set offset for second
    // process second block object
    dex();
    stx((ObjectOffset));
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
    lda((Player_Y_HighPos));
    cmp(Imm(0x2));
    // if player is below the screen, don't bother with the music
    BPL(NoChgMus);
    lda((StarInvincibleTimer));
    BEQ(ClrPlrPal);
    // if star mario invincibility timer at zero,
    // skip this part
    cmp(Imm(0x4));
    BNE(NoChgMus);
    lda((IntervalTimerControl));
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
    ldy((StarInvincibleTimer));
    lda((FrameCounter));
    cpy(Imm(0x8));
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
    lda((A_B_Buttons));
    sta((PreviousA_B_Buttons));
    // into temp variable to be used on next frame
    lda(Imm(0x0));
    sta((Left_Right_Buttons));
    JMP(UpdScrollVar);
}

int UpdScrollVar() {
    lda((VRAM_Buffer_AddrCtrl));
    cmp(Imm(0x6));
    BEQ(ExitEng);
    lda((AreaParserTaskNum));
    // if vram address controller set to 6 (one of two $0341s)
    // then branch to leave
    // otherwise check number of tasks
    BNE(RunParser);
    lda((ScrollThirtyTwo));
    cmp(Imm(0x20));
    BMI(ExitEng);
    // get horizontal scroll in 0-31 or $00-$20 range
    // check to see if exceeded $21
    // branch to leave if not
    lda((ScrollThirtyTwo));
    sbc(Imm(0x20));
    sta((ScrollThirtyTwo));
    lda(Imm(0x0));
    sta((VRAM_Buffer2_Offset));
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
    rts();
    JMP(ScrollHandler);
}

int ScrollHandler() {
    lda((Player_X_Scroll));
    // load value saved here
    clc();
    adc((Platform_X_Scroll));
    sta((Player_X_Scroll));
    lda((ScrollLock));
    BNE(InitScrlAmt);
    // add value used by left/right platforms
    // save as new value here to impose force on scroll
    // check scroll lock flag
    // skip a bunch of code here if set
    lda((Player_Pos_ForScroll));
    cmp(Imm(0x50));
    BCC(InitScrlAmt);
    lda((SideCollisionTimer));
    BNE(InitScrlAmt);
    ldy((Player_X_Scroll));
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
    cpy(Imm(0x2));
    // if value $01, branch and do not decrement
    BCC(ChkNearMid);
    dey();
    JMP(ChkNearMid);
}

int ChkNearMid() {
    lda((Player_Pos_ForScroll));
    cmp(Imm(0x70));
    BCC(ScrollScreen);
    ldy((Player_X_Scroll));
    JMP(ScrollScreen);
}

int ScrollScreen() {
    tya();
    sta((ScrollAmount));
    // save value here
    clc();
    adc((ScrollThirtyTwo));
    sta((ScrollThirtyTwo));
    // add to value already set here
    // save as new value here
    tya();
    clc();
    adc((ScreenLeft_X_Pos));
    sta((ScreenLeft_X_Pos));
    sta((HorizontalScroll));
    // add to left side coordinate
    // save as new left side coordinate
    // save here also
    lda((ScreenLeft_PageLoc));
    adc(Imm(0x0));
    sta((ScreenLeft_PageLoc));
    anda(Imm(0x1));
    sta(Imm(0x0));
    lda((Mirror_PPU_CTRL_REG1));
    anda(Imm(0b11111110));
    ora(Imm(0x0));
    sta((Mirror_PPU_CTRL_REG1));
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
    lda(Imm(0x8));
    sta((ScrollIntervalTimer));
    JMP(ChkPOffscr);
    JMP(InitScrlAmt);
}

int InitScrlAmt() {
    lda(Imm(0x0));
    sta((ScrollAmount));
    JMP(ChkPOffscr);
}

int ChkPOffscr() {
    // initialize value here
    // set X for player offset
    ldx(Imm(0x0));
    JSR(GetXOffscreenBits);
    sta(Imm(0x0));
    ldy(Imm(0x0));
    asl();
    BCS(KeepOnscr);
    iny();
    // get horizontal offscreen bits for player
    // save them here
    // load default offset (left side)
    // if d7 of offscreen bits are set,
    // branch with default offset
    // otherwise use different offset (right side)
    lda(Imm(0x0));
    anda(Imm(0b100000));
    BEQ(InitPlatScrl);
    JMP(KeepOnscr);
}

int KeepOnscr() {
    // check offscreen bits for d5 set
    // if not set, branch ahead of this part
    // get left or right side coordinate based on offset
    lda((ScreenEdge_X_Pos), y);
    sec();
    sbc((X_SubtracterData), y);
    sta((Player_X_Position));
    lda((ScreenEdge_PageLoc), y);
    sbc(Imm(0x0));
    sta((Player_PageLoc));
    lda((Left_Right_Buttons));
    cmp((OffscrJoypadBitsData), y);
    BEQ(InitPlatScrl);
    // subtract amount based on offset
    // store as player position to prevent movement further
    // get left or right page location based on offset
    // subtract borrow
    // save as player's page location
    // check saved controller bits
    // against bits based on offset
    // if not equal, branch
    lda(Imm(0x0));
    sta((Player_X_Speed));
    JMP(InitPlatScrl);
}

int InitPlatScrl() {
    // otherwise nullify horizontal speed of player
    // nullify platform force imposed on scroll
    lda(Imm(0x0));
    sta((Platform_X_Scroll));
    rts();
    JMP(GetScreenPosition);
}

int GetScreenPosition() {
    lda((ScreenLeft_X_Pos));
    // get coordinate of screen's left boundary
    clc();
    adc(Imm(0xff));
    sta((ScreenRight_X_Pos));
    lda((ScreenLeft_PageLoc));
    adc(Imm(0x0));
    sta((ScreenRight_PageLoc));
    // add 255 pixels
    // store as coordinate of screen's right boundary
    // get page number where left boundary is
    // add carry from before
    // store as page number where right boundary is
    rts();
    JMP(GameRoutines);
}

int GameRoutines() {
    lda((GameEngineSubroutine));
    JMP(PlayerEntrance);
}

int PlayerEntrance() {
    lda((AltEntranceControl));
    // check for mode of alternate entry
    cmp(Imm(0x2));
    BEQ(EntrMode2);
    // if found, branch to enter from pipe or with vine
    lda(Imm(0x0));
    ldy((Player_Y_Position));
    cpy(Imm(0x30));
    BCC(AutoControlPlayer);
    lda((PlayerEntranceCtrl));
    // if vertical position above a certain
    // point, nullify controller bits and continue
    // with player movement code, do not return
    // check player entry bits from header
    cmp(Imm(0x6));
    BEQ(ChkBehPipe);
    cmp(Imm(0x7));
    // if set to 6 or 7, execute pipe intro code
    // otherwise branch to normal entry
    BNE(PlayerRdy);
    JMP(ChkBehPipe);
}

int ChkBehPipe() {
    // check for sprite attributes
    lda((Player_SprAttrib));
    BNE(IntroEntr);
    // branch if found
    lda(Imm(0x1));
    JMP(AutoControlPlayer);
    JMP(IntroEntr);
}

int IntroEntr() {
    // force player to walk to the right
    // execute sub to move player to the right
    JSR(EnterSidePipe);
    dec((ChangeAreaTimer));
    BNE(ExitEntr);
    inc((DisableIntermediate));
    JMP(NextArea);
    JMP(EntrMode2);
}

int EntrMode2() {
    // decrement timer for change of area
    // branch to exit if not yet expired
    // set flag to skip world and lives display
    // jump to increment to next area and set modes
    // if controller override bits set here,
    lda((JoypadOverride));
    BNE(VineEntr);
    lda(Imm(0xff));
    JSR(MovePlayerYAxis);
    lda((Player_Y_Position));
    cmp(Imm(0x91));
    BCC(PlayerRdy);
    rts();
    JMP(VineEntr);
}

int VineEntr() {
    lda((VineHeight));
    cmp(Imm(0x60));
    BNE(ExitEntr);
    lda((Player_Y_Position));
    cmp(Imm(0x99));
    ldy(Imm(0x0));
    lda(Imm(0x1));
    BCC(OffVine);
    // check vine height
    // if vine not yet reached maximum height, branch to leave
    // get player's vertical coordinate
    // check player's vertical coordinate against preset value
    // load default values to be written to
    // this value moves player to the right off the vine
    // if vertical coordinate < preset value, use defaults
    lda(Imm(0x3));
    sta((Player_State));
    iny();
    lda(Imm(0x8));
    sta((((Block_Buffer_1)) + (Imm(0xb4))));
    JMP(OffVine);
}

int OffVine() {
    // otherwise set player state to climbing
    // increment value in Y
    // set block in block buffer to cover hole, then
    // use same value to force player to climb
    // set collision detection disable flag
    sty((DisableCollisionDet));
    JSR(AutoControlPlayer);
    // use contents of A to move player up or right, execute sub
    lda((Player_X_Position));
    cmp(Imm(0x48));
    BCC(ExitEntr);
    JMP(PlayerRdy);
}

int PlayerRdy() {
    // check player's horizontal position
    // if not far enough to the right, branch to leave
    // set routine to be executed by game engine next frame
    lda(Imm(0x8));
    sta((GameEngineSubroutine));
    lda(Imm(0x1));
    // set to face player to the right
    sta((PlayerFacingDir));
    lsr();
    sta((AltEntranceControl));
    sta((DisableCollisionDet));
    sta((JoypadOverride));
    JMP(ExitEntr);
}

int ExitEntr() {
    // init A
    // init mode of entry
    // init collision detection disable flag
    // nullify controller override bits
    // leave!
    rts();
    JMP(AutoControlPlayer);
}

int AutoControlPlayer() {
    sta((SavedJoypadBits));
    JMP(PlayerCtrlRoutine);
}

int PlayerCtrlRoutine() {
    lda((GameEngineSubroutine));
    cmp(Imm(0xb));
    // check task here
    // if certain value is set, branch to skip controller bit loading
    BEQ(SizeChk);
    lda((AreaType));
    BNE(SaveJoyp);
    // are we in a water type area?
    // if not, branch
    ldy((Player_Y_HighPos));
    dey();
    BNE(DisJoyp);
    // if not in vertical area between
    // status bar and bottom, branch
    lda((Player_Y_Position));
    cmp(Imm(0xd0));
    BCC(SaveJoyp);
    JMP(DisJoyp);
}

int DisJoyp() {
    // if nearing the bottom of the screen or
    // not in the vertical area between status bar or bottom,
    // disable controller bits
    lda(Imm(0x0));
    sta((SavedJoypadBits));
    JMP(SaveJoyp);
}

int SaveJoyp() {
    // otherwise store A and B buttons in $0a
    lda((SavedJoypadBits));
    anda(Imm(0b11000000));
    sta((A_B_Buttons));
    lda((SavedJoypadBits));
    // store left and right buttons in $0c
    anda(Imm(0b11));
    sta((Left_Right_Buttons));
    lda((SavedJoypadBits));
    // store up and down buttons in $0b
    anda(Imm(0b1100));
    sta((Up_Down_Buttons));
    anda(Imm(0b100));
    BEQ(SizeChk);
    lda((Player_State));
    BNE(SizeChk);
    ldy((Left_Right_Buttons));
    BEQ(SizeChk);
    // check for pressing down
    // if not, branch
    // check player's state
    // if not on the ground, branch
    // check left and right
    // if neither pressed, branch
    lda(Imm(0x0));
    sta((Left_Right_Buttons));
    sta((Up_Down_Buttons));
    JMP(SizeChk);
}

int SizeChk() {
    // if pressing down while on the ground,
    // nullify directional bits
    // run movement subroutines
    JSR(PlayerMovementSubs);
    ldy(Imm(0x1));
    // is player small?
    lda((PlayerSize));
    BNE(ChkMoveDir);
    ldy(Imm(0x0));
    // check for if crouching
    lda((CrouchingFlag));
    BEQ(ChkMoveDir);
    ldy(Imm(0x2));
    JMP(ChkMoveDir);
}

int ChkMoveDir() {
    // if not, branch ahead
    // if big and crouching, load y with 2
    // set contents of Y as player's bounding box size control
    sty((Player_BoundBoxCtrl));
    lda(Imm(0x1));
    ldy((Player_X_Speed));
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
    sta((Player_MovingDir));
    JMP(PlayerSubs);
}

int PlayerSubs() {
    // move the screen if necessary
    JSR(ScrollHandler);
    JSR(GetPlayerOffscreenBits);
    JSR(RelativePlayerPosition);
    ldx(Imm(0x0));
    JSR(BoundingBoxCore);
    JSR(PlayerBGCollision);
    // get player's offscreen bits
    // get coordinates relative to the screen
    // set offset for player object
    // get player's bounding box coordinates
    // do collision detection and process
    lda((Player_Y_Position));
    cmp(Imm(0x40));
    BCC(PlayerHole);
    // check to see if player is higher than 64th pixel
    // if so, branch ahead
    lda((GameEngineSubroutine));
    cmp(Imm(0x5));
    // if running end-of-level routine, branch ahead
    BEQ(PlayerHole);
    cmp(Imm(0x7));
    // if running player entrance routine, branch ahead
    BEQ(PlayerHole);
    cmp(Imm(0x4));
    // if running routines $00-$03, branch ahead
    BCC(PlayerHole);
    lda((Player_SprAttrib));
    anda(Imm(0b11011111));
    sta((Player_SprAttrib));
    JMP(PlayerHole);
}

int PlayerHole() {
    // otherwise nullify player's
    // background priority flag
    // check player's vertical high byte
    lda((Player_Y_HighPos));
    cmp(Imm(0x2));
    BMI(ExitCtrl);
    // for below the screen
    // branch to leave if not that far down
    ldx(Imm(0x1));
    stx((ScrollLock));
    // set scroll lock
    ldy(Imm(0x4));
    sty(Imm(0x7));
    ldx(Imm(0x0));
    ldy((GameTimerExpiredFlag));
    BNE(HoleDie);
    ldy((CloudTypeOverride));
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
    ldy((GameEngineSubroutine));
    cpy(Imm(0xb));
    BEQ(ChkHoleX);
    ldy((DeathMusicLoaded));
    BNE(HoleBottom);
    // check for some other routine running
    // if so, branch ahead
    // check value here
    // if already set, branch to next part
    iny();
    sty((EventMusicQueue));
    sty((DeathMusicLoaded));
    JMP(HoleBottom);
}

int HoleBottom() {
    ldy(Imm(0x6));
    sty(Imm(0x7));
    JMP(ChkHoleX);
}

int ChkHoleX() {
    // change value here
    // compare vertical high byte with value set here
    cmp(Imm(0x7));
    BMI(ExitCtrl);
    dex();
    BMI(CloudExit);
    ldy((EventMusicBuffer));
    BNE(ExitCtrl);
    lda(Imm(0x6));
    sta((GameEngineSubroutine));
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
    rts();
    JMP(CloudExit);
}

int CloudExit() {
    lda(Imm(0x0));
    sta((JoypadOverride));
    JSR(SetEntr);
    inc((AltEntranceControl));
    // clear controller override bits if any are set
    // do sub to set secondary mode
    // set mode of entry to 3
    rts();
    JMP(Vine_AutoClimb);
}

int Vine_AutoClimb() {
    lda((Player_Y_HighPos));
    BNE(AutoClimb);
    // check to see whether player reached position
    // above the status bar yet and if so, set modes
    lda((Player_Y_Position));
    cmp(Imm(0xe4));
    BCC(SetEntr);
    JMP(AutoClimb);
}

int AutoClimb() {
    // set controller bits override to up
    lda(Imm(0b1000));
    sta((JoypadOverride));
    ldy(Imm(0x3));
    // set player state to climbing
    sty((Player_State));
    JMP(AutoControlPlayer);
    JMP(SetEntr);
}

int SetEntr() {
    // set starting position to override
    lda(Imm(0x2));
    sta((AltEntranceControl));
    JMP(ChgAreaMode);
    JMP(VerticalPipeEntry);
}

int VerticalPipeEntry() {
    lda(Imm(0x1));
    JSR(MovePlayerYAxis);
    JSR(ScrollHandler);
    ldy(Imm(0x0));
    lda((WarpZoneControl));
    BNE(ChgAreaPipe);
    // set 1 as movement amount
    // do sub to move player downwards
    // do sub to scroll screen with saved force if necessary
    // load default mode of entry
    // check warp zone control variable/flag
    // if set, branch to use mode 0
    iny();
    lda((AreaType));
    // check for castle level type
    cmp(Imm(0x3));
    BNE(ChgAreaPipe);
    // if not castle type level, use mode 1
    iny();
    JMP(ChgAreaPipe);
    JMP(MovePlayerYAxis);
}

int MovePlayerYAxis() {
    clc();
    adc((Player_Y_Position));
    // add contents of A to player position
    sta((Player_Y_Position));
    rts();
    JMP(SideExitPipeEntry);
}

int SideExitPipeEntry() {
    JSR(EnterSidePipe);
    // execute sub to move player to the right
    ldy(Imm(0x2));
    JMP(ChgAreaPipe);
}

int ChgAreaPipe() {
    // decrement timer for change of area
    dec((ChangeAreaTimer));
    BNE(ExitCAPipe);
    sty((AltEntranceControl));
    JMP(ChgAreaMode);
}

int ChgAreaMode() {
    // when timer expires set mode of alternate entry
    // set flag to disable screen output
    inc((DisableScreenFlag));
    lda(Imm(0x0));
    sta((OperMode_Task));
    sta((Sprite0HitDetectFlag));
    JMP(ExitCAPipe);
}

int ExitCAPipe() {
    // set secondary mode of operation
    // disable sprite 0 check
    // leave
    rts();
    JMP(EnterSidePipe);
}

int EnterSidePipe() {
    lda(Imm(0x8));
    // set player's horizontal speed
    sta((Player_X_Speed));
    ldy(Imm(0x1));
    lda((Player_X_Position));
    anda(Imm(0b1111));
    // set controller right button by default
    // mask out higher nybble of player's
    // horizontal position
    BNE(RightPipe);
    sta((Player_X_Speed));
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
    rts();
    JMP(PlayerChangeSize);
}

int PlayerChangeSize() {
    lda((TimerControl));
    cmp(Imm(0xf8));
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
    cmp(Imm(0xc4));
    BNE(ExitChgSize);
    JSR(DonePlayerTask);
    JMP(ExitChgSize);
}

int ExitChgSize() {
    // and branch to leave if before or after that point
    // otherwise do sub to init timer control and set routine
    // and then leave
    rts();
    JMP(PlayerInjuryBlink);
}

int PlayerInjuryBlink() {
    lda((TimerControl));
    cmp(Imm(0xf0));
    BCS(ExitBlink);
    cmp(Imm(0xc8));
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
    ldy((PlayerChangeSizeFlag));
    BNE(ExitBoth);
    sty((PlayerAnimCtrl));
    inc((PlayerChangeSizeFlag));
    // if growing/shrinking flag already set
    // then branch to leave
    // otherwise initialize player's animation frame control
    // set growing/shrinking flag
    lda((PlayerSize));
    eor(Imm(0x1));
    // invert player's size
    sta((PlayerSize));
    JMP(ExitBoth);
}

int ExitBoth() {
    // leave
    rts();
    JMP(PlayerDeath);
}

int PlayerDeath() {
    lda((TimerControl));
    cmp(Imm(0xf0));
    BCS(ExitDeath);
    JMP(PlayerCtrlRoutine);
    JMP(DonePlayerTask);
}

int DonePlayerTask() {
    lda(Imm(0x0));
    sta((TimerControl));
    // initialize master timer control to continue timers
    lda(Imm(0x8));
    sta((GameEngineSubroutine));
    rts();
    JMP(PlayerFireFlower);
}

int PlayerFireFlower() {
    lda((TimerControl));
    cmp(Imm(0xc0));
    BEQ(ResetPalFireFlower);
    lda((FrameCounter));
    // check master timer control
    // for specific moment in time
    // branch if at moment, not before or after
    // get frame counter
    lsr();
    lsr();
    JMP(CyclePlayerPalette);
}

int CyclePlayerPalette() {
    anda(Imm(0x3));
    sta(Imm(0x0));
    lda((Player_SprAttrib));
    anda(Imm(0b11111100));
    ora(Imm(0x0));
    sta((Player_SprAttrib));
    rts();
    JMP(ResetPalFireFlower);
}

int ResetPalFireFlower() {
    JSR(DonePlayerTask);
    JMP(ResetPalStar);
}

int ResetPalStar() {
    lda((Player_SprAttrib));
    anda(Imm(0b11111100));
    sta((Player_SprAttrib));
    rts();
    JMP(ExitDeath);
}

int ExitDeath() {
    rts();
    JMP(FlagpoleSlide);
}

int FlagpoleSlide() {
    lda((((Enemy_ID)) + (Imm(5))));
    cmp((FlagpoleFlagObject));
    BNE(NoFPObj);
    lda((FlagpoleSoundQueue));
    sta((Square1SoundQueue));
    // check special use enemy slot
    // for flagpole flag object
    // if not found, branch to something residual
    // load flagpole sound
    // into square 1's sfx queue
    lda(Imm(0x0));
    sta((FlagpoleSoundQueue));
    // init flagpole sound queue
    ldy((Player_Y_Position));
    cpy(Imm(0x9e));
    BCS(SlidePlayer);
    lda(Imm(0x4));
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
    inc((GameEngineSubroutine));
    rts();
    JMP(PlayerEndLevel);
}

int PlayerEndLevel() {
    lda(Imm(0x1));
    // force player to walk to the right
    JSR(AutoControlPlayer);
    lda((Player_Y_Position));
    // check player's vertical position
    cmp(Imm(0xae));
    BCC(ChkStop);
    lda((ScrollLock));
    BEQ(ChkStop);
    // if player is not yet off the flagpole, skip this part
    // if scroll lock not set, branch ahead to next part
    // because we only need to do this part once
    lda((EndOfLevelMusic));
    sta((EventMusicQueue));
    // load win level music in event music queue
    lda(Imm(0x0));
    sta((ScrollLock));
    JMP(ChkStop);
}

int ChkStop() {
    // turn off scroll lock to skip this part later
    // get player collision bits
    lda((Player_CollisionBits));
    lsr();
    BCS(RdyNextA);
    lda((StarFlagTaskControl));
    BNE(InCastle);
    inc((StarFlagTaskControl));
    JMP(InCastle);
}

int InCastle() {
    // check for d0 set
    // if d0 set, skip to next part
    // if star flag task control already set,
    // go ahead with the rest of the code
    // otherwise set task control now (this gets ball rolling!)
    // set player's background priority bit to
    lda(Imm(0b100000));
    sta((Player_SprAttrib));
    JMP(RdyNextA);
}

int RdyNextA() {
    lda((StarFlagTaskControl));
    cmp(Imm(0x5));
    BNE(ExitNA);
    inc((LevelNumber));
    // if star flag task control not yet set
    // beyond last valid task number, branch to leave
    // increment level number used for game logic
    lda((LevelNumber));
    cmp(Imm(0x3));
    BNE(NextArea);
    ldy((WorldNumber));
    lda((CoinTallyFor1Ups));
    cmp((Hidden1UpCoinAmts), y);
    BCC(NextArea);
    inc((Hidden1UpFlag));
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
    inc((AreaNumber));
    JSR(LoadAreaPointer);
    inc((FetchNewGameTimerFlag));
    JSR(ChgAreaMode);
    sta((HalfwayPage));
    // get new level pointer
    // set flag to load new game timer
    // do sub to set secondary mode, disable screen and sprite 0
    // reset halfway page to 0 (beginning)
    lda((Silence));
    sta((EventMusicQueue));
    JMP(ExitNA);
}

int ExitNA() {
    rts();
    JMP(PlayerMovementSubs);
}

int PlayerMovementSubs() {
    lda(Imm(0x0));
    ldy((PlayerSize));
    BNE(SetCrouch);
    lda((Player_State));
    BNE(ProcMove);
    lda((Up_Down_Buttons));
    anda(Imm(0b100));
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
    sta((CrouchingFlag));
    JMP(ProcMove);
}

int ProcMove() {
    // run sub related to jumping and swimming
    JSR(PlayerPhysicsSub);
    lda((PlayerChangeSizeFlag));
    BNE(NoMoveSub);
    // if growing/shrinking flag set,
    // branch to leave
    lda((Player_State));
    cmp(Imm(0x3));
    BEQ(MoveSubs);
    // get player state
    // if climbing, branch ahead, leave timer unset
    ldy(Imm(0x18));
    sty((ClimbSideTimer));
    JMP(MoveSubs);
}

int MoveSubs() {
    JMP(NoMoveSub);
}

int NoMoveSub() {
    rts();
    JMP(OnGroundStateSub);
}

int OnGroundStateSub() {
    JSR(GetPlayerAnimSpeed);
    // $00 - used by ClimbingSub to store high vertical adder
    // do a sub to set animation frame timing
    lda((Left_Right_Buttons));
    BEQ(GndMove);
    sta((PlayerFacingDir));
    JMP(GndMove);
}

int GndMove() {
    // if left/right controller bits not set, skip instruction
    // otherwise set new facing direction
    // do a sub to impose friction on player's walk/run
    JSR(ImposeFriction);
    JSR(MovePlayerHorizontally);
    sta((Player_X_Scroll));
    // do another sub to move player horizontally
    // set returned value as player's movement speed for scroll
    rts();
    JMP(FallingSub);
}

int FallingSub() {
    lda((VerticalForceDown));
    sta((VerticalForce));
    JMP(LRAir);
    JMP(JumpSwimSub);
}

int JumpSwimSub() {
    ldy((Player_Y_Speed));
    BPL(DumpFall);
    // if player's vertical speed zero
    // or moving downwards, branch to falling
    lda((A_B_Buttons));
    anda((A_Button));
    anda((PreviousA_B_Buttons));
    BNE(ProcSwim);
    lda((JumpOrigin_Y_Position));
    // check to see if A button is being pressed
    // and was pressed in previous frame
    // if so, branch elsewhere
    // get vertical position player jumped from
    sec();
    sbc((Player_Y_Position));
    cmp((DiffToHaltJump));
    BCC(ProcSwim);
    JMP(DumpFall);
}

int DumpFall() {
    // subtract current from original vertical coordinate
    // compare to value set here to see if player is in mid-jump
    // or just starting to jump, if just starting, skip ahead
    // otherwise dump falling into main fractional
    lda((VerticalForceDown));
    sta((VerticalForce));
    JMP(ProcSwim);
}

int ProcSwim() {
    // if swimming flag not set,
    lda((SwimmingFlag));
    BEQ(LRAir);
    JSR(GetPlayerAnimSpeed);
    // branch ahead to last part
    // do a sub to get animation frame timing
    lda((Player_Y_Position));
    cmp(Imm(0x14));
    BCS(LRWater);
    // check vertical position against preset value
    // if not yet reached a certain position, branch ahead
    lda(Imm(0x18));
    sta((VerticalForce));
    JMP(LRWater);
}

int LRWater() {
    // otherwise set fractional
    // check left/right controller bits (check for swimming)
    lda((Left_Right_Buttons));
    BEQ(LRAir);
    sta((PlayerFacingDir));
    JMP(LRAir);
}

int LRAir() {
    // if not pressing any, skip
    // otherwise set facing direction accordingly
    // check left/right controller bits (check for jumping/falling)
    lda((Left_Right_Buttons));
    BEQ(JSMove);
    JSR(ImposeFriction);
    JMP(JSMove);
}

int JSMove() {
    // if not pressing any, skip
    // otherwise process horizontal movement
    // do a sub to move player horizontally
    JSR(MovePlayerHorizontally);
    sta((Player_X_Scroll));
    // set player's speed here, to be used for scroll later
    lda((GameEngineSubroutine));
    cmp(Imm(0xb));
    BNE(ExitMov1);
    // check for specific routine selected
    // branch if not set to run
    lda(Imm(0x28));
    sta((VerticalForce));
    JMP(ExitMov1);
}

int ExitMov1() {
    // otherwise set fractional
    // jump to move player vertically, then leave
    JMP(MovePlayerVertically);
    JMP(ClimbingSub);
}

int ClimbingSub() {
    lda((Player_YMF_Dummy));
    clc();
    adc((Player_Y_MoveForce));
    // add movement force to dummy variable
    // save with carry
    sta((Player_YMF_Dummy));
    ldy(Imm(0x0));
    lda((Player_Y_Speed));
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
    sty(Imm(0x0));
    adc((Player_Y_Position));
    sta((Player_Y_Position));
    // add carry to player's vertical position
    // and store to move player up or down
    lda((Player_Y_HighPos));
    adc(Imm(0x0));
    sta((Player_Y_HighPos));
    lda((Left_Right_Buttons));
    anda((Player_CollisionBits));
    BEQ(InitCSTimer);
    ldy((ClimbSideTimer));
    BNE(ExitCSub);
    // add carry to player's page location
    // and store
    // compare left/right controller bits
    // to collision flag
    // if not set, skip to end
    // otherwise check timer
    // if timer not expired, branch to leave
    ldy(Imm(0x18));
    sty((ClimbSideTimer));
    ldx(Imm(0x0));
    ldy((PlayerFacingDir));
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
    lda((Player_X_Position));
    clc();
    adc((ClimbAdderLow), x);
    // add or subtract from player's horizontal position
    // using value here as adder and X as offset
    sta((Player_X_Position));
    lda((Player_PageLoc));
    adc((ClimbAdderHigh), x);
    // add or subtract carry or borrow using value here
    // from the player's page location
    sta((Player_PageLoc));
    lda((Left_Right_Buttons));
    eor(Imm(0b11));
    sta((PlayerFacingDir));
    JMP(ExitCSub);
}

int ExitCSub() {
    // get left/right controller bits again
    // invert them and store them while player
    // is on vine to face player in opposite direction
    // then leave
    rts();
    JMP(InitCSTimer);
}

int InitCSTimer() {
    // initialize timer here
    sta((ClimbSideTimer));
    rts();
    JMP(PlayerPhysicsSub);
}

int PlayerPhysicsSub() {
    lda((Player_State));
    // check player state
    cmp(Imm(0x3));
    BNE(CheckForJumping);
    // if not climbing, branch
    ldy(Imm(0x0));
    lda((Up_Down_Buttons));
    anda((Player_CollisionBits));
    BEQ(ProcClimb);
    // get controller bits for up/down
    // check against player's collision detection bits
    // if not pressing up or down, branch
    iny();
    anda(Imm(0b1000));
    // check for pressing up
    BNE(ProcClimb);
    iny();
    JMP(ProcClimb);
}

int ProcClimb() {
    // load value here
    ldx((Climb_Y_MForceData), y);
    stx((Player_Y_MoveForce));
    lda(Imm(0x8));
    ldx((Climb_Y_SpeedData), y);
    stx((Player_Y_Speed));
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
    sta((PlayerAnimTimerSet));
    rts();
    JMP(CheckForJumping);
}

int CheckForJumping() {
    lda((JumpspringAnimCtrl));
    BNE(NoJump);
    lda((A_B_Buttons));
    // if jumpspring animating,
    // skip ahead to something else
    // check for A button press
    anda((A_Button));
    BEQ(NoJump);
    anda((PreviousA_B_Buttons));
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
    lda((Player_State));
    BEQ(InitJS);
    lda((SwimmingFlag));
    BEQ(NoJump);
    lda((JumpSwimTimer));
    // check player state
    // if on the ground, branch
    // if swimming flag not set, jump to do something else
    // to prevent midair jumping, otherwise continue
    // if jump/swim timer nonzero, branch
    BNE(InitJS);
    lda((Player_Y_Speed));
    BPL(InitJS);
    JMP(X_Physics);
    JMP(InitJS);
}

int InitJS() {
    // check player's vertical speed
    // if player's vertical speed motionless or down, branch
    // if timer at zero and player still rising, do not swim
    // set jump/swim timer
    lda(Imm(0x20));
    sta((JumpSwimTimer));
    ldy(Imm(0x0));
    // initialize vertical force and dummy variable
    sty((Player_YMF_Dummy));
    sty((Player_Y_MoveForce));
    lda((Player_Y_HighPos));
    sta((JumpOrigin_Y_HighPos));
    // get vertical high and low bytes of jump origin
    // and store them next to each other here
    lda((Player_Y_Position));
    sta((JumpOrigin_Y_Position));
    lda(Imm(0x1));
    // set player state to jumping/swimming
    sta((Player_State));
    lda((Player_XSpeedAbsolute));
    // check value related to walking/running speed
    cmp(Imm(0x9));
    BCC(ChkWtr);
    iny();
    // branch if below certain values, increment Y
    // for each amount equal or exceeded
    cmp(Imm(0x10));
    BCC(ChkWtr);
    iny();
    cmp(Imm(0x19));
    BCC(ChkWtr);
    iny();
    cmp(Imm(0x1c));
    BCC(ChkWtr);
    // note that for jumping, range is 0-4 for Y
    iny();
    JMP(ChkWtr);
}

int ChkWtr() {
    // set value here (apparently always set to 1)
    lda(Imm(0x1));
    sta((DiffToHaltJump));
    lda((SwimmingFlag));
    // if swimming flag disabled, branch
    BEQ(GetYPhy);
    ldy(Imm(0x5));
    lda((Whirlpool_Flag));
    // otherwise set Y to 5, range is 5-6
    // if whirlpool flag not set, branch
    BEQ(GetYPhy);
    iny();
    JMP(GetYPhy);
}

int GetYPhy() {
    // otherwise increment to 6
    // store appropriate jump/swim
    lda((JumpMForceData), y);
    sta((VerticalForce));
    // data here
    lda((FallMForceData), y);
    sta((VerticalForceDown));
    lda((InitMForceData), y);
    sta((Player_Y_MoveForce));
    lda((PlayerYSpdData), y);
    sta((Player_Y_Speed));
    lda((SwimmingFlag));
    // if swimming flag disabled, branch
    BEQ(PJumpSnd);
    lda((Sfx_EnemyStomp));
    sta((Square1SoundQueue));
    // load swim/goomba stomp sound into
    // square 1's sfx queue
    lda((Player_Y_Position));
    cmp(Imm(0x14));
    BCS(X_Physics);
    lda(Imm(0x0));
    sta((Player_Y_Speed));
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
    lda((Sfx_BigJump));
    ldy((PlayerSize));
    // is mario big?
    BEQ(SJumpSnd);
    lda((Sfx_SmallJump));
    JMP(SJumpSnd);
}

int SJumpSnd() {
    // if not, load small mario's jump sound
    // store appropriate jump sound in square 1 sfx queue
    sta((Square1SoundQueue));
    JMP(X_Physics);
}

int X_Physics() {
    ldy(Imm(0x0));
    sty(Imm(0x0));
    lda((Player_State));
    // init value here
    // if mario is on the ground, branch
    BEQ(ProcPRun);
    lda((Player_XSpeedAbsolute));
    cmp(Imm(0x19));
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
    lda((AreaType));
    BEQ(ChkRFast);
    dey();
    lda((Left_Right_Buttons));
    cmp((Player_MovingDir));
    BNE(ChkRFast);
    lda((A_B_Buttons));
    // check area type
    // if water type, branch
    // decrement Y by default for non-water type area
    // get left/right controller bits
    // check against moving direction
    // if controller bits <> moving direction, skip this part
    // check for b button pressed
    anda((B_Button));
    BNE(SetRTmr);
    lda((RunningTimer));
    BNE(GetXPhy);
    JMP(ChkRFast);
}

int ChkRFast() {
    // if pressed, skip ahead to set timer
    // check for running timer set
    // if set, branch
    // if running timer not set or level type is water,
    iny();
    inc(Imm(0x0));
    // increment Y again and temp variable in memory
    lda((RunningSpeed));
    BNE(FastXSp);
    // if running speed set here, branch
    lda((Player_XSpeedAbsolute));
    cmp(Imm(0x21));
    BCC(GetXPhy);
    JMP(FastXSp);
}

int FastXSp() {
    // otherwise check player's walking/running speed
    // if less than a certain amount, branch ahead
    // if running speed set or speed => $21 increment $00
    inc(Imm(0x0));
    JMP(GetXPhy);
    JMP(SetRTmr);
}

int SetRTmr() {
    // and jump ahead
    // if b button pressed, set running timer
    lda(Imm(0xa));
    sta((RunningTimer));
    JMP(GetXPhy);
}

int GetXPhy() {
    // get maximum speed to the left
    lda((MaxLeftXSpdData), y);
    sta((MaximumLeftSpeed));
    lda((GameEngineSubroutine));
    cmp(Imm(0x7));
    BNE(GetXPhy2);
    ldy(Imm(0x3));
    JMP(GetXPhy2);
}

int GetXPhy2() {
    // check for specific routine running
    // (player entrance)
    // if not running, skip and use old value of Y
    // otherwise set Y to 3
    // get maximum speed to the right
    lda((MaxRightXSpdData), y);
    sta((MaximumRightSpeed));
    ldy(Imm(0x0));
    lda((FrictionData), y);
    // get other value in memory
    // get value using value in memory as offset
    sta((FrictionAdderLow));
    lda(Imm(0x0));
    sta((FrictionAdderHigh));
    // init something here
    lda((PlayerFacingDir));
    cmp((Player_MovingDir));
    BEQ(ExitPhy);
    asl((FrictionAdderLow));
    rol((FrictionAdderHigh));
    JMP(ExitPhy);
}

int ExitPhy() {
    // check facing direction against moving direction
    // if the same, branch to leave
    // otherwise shift d7 of friction adder low into carry
    // then rotate carry onto d0 of friction adder high
    // and then leave
    rts();
    JMP(GetPlayerAnimSpeed);
}

int GetPlayerAnimSpeed() {
    ldy(Imm(0x0));
    lda((Player_XSpeedAbsolute));
    cmp(Imm(0x1c));
    BCS(SetRunSpd);
    iny();
    cmp(Imm(0xe));
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
    lda((SavedJoypadBits));
    anda(Imm(0b1111111));
    BEQ(SetAnimSpd);
    anda(Imm(0x3));
    cmp((Player_MovingDir));
    BNE(ProcSkid);
    lda(Imm(0x0));
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
    sta((RunningSpeed));
    JMP(SetAnimSpd);
    JMP(ProcSkid);
}

int ProcSkid() {
    // check player's walking/running speed
    lda((Player_XSpeedAbsolute));
    cmp(Imm(0xb));
    BCS(SetAnimSpd);
    // against one last amount
    // if greater than this amount, branch
    lda((PlayerFacingDir));
    sta((Player_MovingDir));
    // otherwise use facing direction to set moving direction
    lda(Imm(0x0));
    sta((Player_X_Speed));
    sta((Player_X_MoveForce));
    JMP(SetAnimSpd);
}

int SetAnimSpd() {
    // nullify player's horizontal speed
    // and dummy variable for player
    // get animation timer setting using Y as offset
    lda((PlayerAnimTmrData), y);
    sta((PlayerAnimTimerSet));
    rts();
    JMP(ImposeFriction);
}

int ImposeFriction() {
    anda((Player_CollisionBits));
    cmp(Imm(0x0));
    BNE(JoypFrict);
    // perform AND between left/right controller bits and collision flag
    // then compare to zero (this instruction is redundant)
    // if any bits set, branch to next part
    lda((Player_X_Speed));
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
    lda((Player_X_MoveForce));
    clc();
    adc((FrictionAdderLow));
    sta((Player_X_MoveForce));
    // add to it another value set here
    // store here
    lda((Player_X_Speed));
    adc((FrictionAdderHigh));
    sta((Player_X_Speed));
    cmp((MaximumRightSpeed));
    BMI(XSpdSign);
    lda((MaximumRightSpeed));
    sta((Player_X_Speed));
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
    lda((Player_X_MoveForce));
    sec();
    sbc((FrictionAdderLow));
    sta((Player_X_MoveForce));
    // subtract from it another value set here
    // store here
    lda((Player_X_Speed));
    sbc((FrictionAdderHigh));
    sta((Player_X_Speed));
    cmp((MaximumLeftSpeed));
    BPL(XSpdSign);
    lda((MaximumLeftSpeed));
    sta((Player_X_Speed));
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
    cmp(Imm(0x0));
    BPL(SetAbsSpd);
    // branch and leave horizontal speed value unmodified
    eor(Imm(0xff));
    clc();
    adc(Imm(0x1));
    JMP(SetAbsSpd);
}

int SetAbsSpd() {
    // otherwise get two's compliment to get absolute
    // unsigned walking/running speed
    // store walking/running speed here and leave
    sta((Player_XSpeedAbsolute));
    rts();
    JMP(ProcFireball_Bubble);
}

int ProcFireball_Bubble() {
    lda((PlayerStatus));
    // $00 - used to store downward movement force in FireballObjCore
    // $07 - used to store pseudorandom bit in BubbleCheck
    // check player's status
    cmp(Imm(0x2));
    BCC(ProcAirBubbles);
    // if not fiery, branch
    lda((A_B_Buttons));
    anda((B_Button));
    BEQ(ProcFireballs);
    // check for b button pressed
    // branch if not pressed
    anda((PreviousA_B_Buttons));
    BNE(ProcFireballs);
    lda((FireballCounter));
    anda(Imm(0b1));
    // if button pressed in previous frame, branch
    // load fireball counter
    // get LSB and use as offset for buffer
    tax();
    lda((Fireball_State), x);
    BNE(ProcFireballs);
    ldy((Player_Y_HighPos));
    // load fireball state
    // if not inactive, branch
    // if player too high or too low, branch
    dey();
    BNE(ProcFireballs);
    lda((CrouchingFlag));
    // if player crouching, branch
    BNE(ProcFireballs);
    lda((Player_State));
    // if player's state = climbing, branch
    cmp(Imm(0x3));
    BEQ(ProcFireballs);
    lda((Sfx_Fireball));
    // play fireball sound effect
    sta((Square1SoundQueue));
    lda(Imm(0x2));
    // load state
    sta((Fireball_State), x);
    ldy((PlayerAnimTimerSet));
    sty((FireballThrowingTimer));
    // copy animation frame timer setting
    // into fireball throwing timer
    dey();
    sty((PlayerAnimTimer));
    inc((FireballCounter));
    JMP(ProcFireballs);
}

int ProcFireballs() {
    ldx(Imm(0x0));
    JSR(FireballObjCore);
    // process first fireball object
    ldx(Imm(0x1));
    JSR(FireballObjCore);
    JMP(ProcAirBubbles);
}

int ProcAirBubbles() {
    lda((AreaType));
    // if not water type level, skip the rest of this
    BNE(BublExit);
    ldx(Imm(0x2));
    JMP(BublLoop);
}

int BublLoop() {
    // otherwise load counter and use as offset
    // store offset
    stx((ObjectOffset));
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
    rts();
    JMP(FireballObjCore);
}

int FireballObjCore() {
    stx((ObjectOffset));
    lda((Fireball_State), x);
    // store offset as current object
    // check for d7 = 1
    asl();
    BCS(FireballExplosion);
    ldy((Fireball_State), x);
    // if so, branch to get relative coordinates and draw explosion
    // if fireball inactive, branch to leave
    BEQ(NoFBall);
    dey();
    // if fireball state set to 1, skip this part and just run it
    BEQ(RunFB);
    lda((Player_X_Position));
    adc(Imm(0x4));
    // get player's horizontal position
    // add four pixels and store as fireball's horizontal position
    sta((Fireball_X_Position), x);
    lda((Player_PageLoc));
    adc(Imm(0x0));
    // get player's page location
    // add carry and store as fireball's page location
    sta((Fireball_PageLoc), x);
    lda((Player_Y_Position));
    // get player's vertical position and store
    sta((Fireball_Y_Position), x);
    lda(Imm(0x1));
    // set high byte of vertical position
    sta((Fireball_Y_HighPos), x);
    ldy((PlayerFacingDir));
    dey();
    lda((FireballXSpdData), y);
    // get player's facing direction
    // decrement to use as offset here
    // set horizontal speed of fireball accordingly
    sta((Fireball_X_Speed), x);
    lda(Imm(0x4));
    // set vertical speed of fireball
    sta((Fireball_Y_Speed), x);
    lda(Imm(0x7));
    sta((Fireball_BoundBoxCtrl), x);
    dec((Fireball_State), x);
    JMP(RunFB);
}

int RunFB() {
    // set bounding box size control for fireball
    // decrement state to 1 to skip this part from now on
    // add 7 to offset to use
    txa();
    clc();
    // as fireball offset for next routines
    adc(Imm(0x7));
    tax();
    lda(Imm(0x50));
    // set downward movement force here
    sta(Imm(0x0));
    lda(Imm(0x3));
    // set maximum speed here
    sta(Imm(0x2));
    lda(Imm(0x0));
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx((ObjectOffset));
    JSR(RelativeFireballPosition);
    JSR(GetFireballOffscreenBits);
    JSR(GetFireballBoundBox);
    JSR(FireballBGCollision);
    lda((FBall_OffscreenBits));
    anda(Imm(0b11001100));
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
    lda(Imm(0x0));
    sta((Fireball_State), x);
    JMP(NoFBall);
}

int NoFBall() {
    // leave
    rts();
    JMP(FireballExplosion);
}

int FireballExplosion() {
    JSR(RelativeFireballPosition);
    JMP(DrawExplosion_Fireball);
    JMP(BubbleCheck);
}

int BubbleCheck() {
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    // get part of LSFR
    anda(Imm(0x1));
    sta(Imm(0x7));
    lda((Bubble_Y_Position), x);
    cmp(Imm(0xf8));
    BNE(MoveBubl);
    lda((AirBubbleTimer));
    BNE(ExitBubl);
    JMP(SetupBubble);
}

int SetupBubble() {
    ldy(Imm(0x0));
    lda((PlayerFacingDir));
    lsr();
    BCC(PosBubl);
    ldy(Imm(0x8));
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
    adc((Player_X_Position));
    sta((Bubble_X_Position), x);
    // add to player's horizontal position
    // save as horizontal position for airbubble
    lda((Player_PageLoc));
    adc(Imm(0x0));
    sta((Bubble_PageLoc), x);
    // add carry to player's page location
    // save as page location for airbubble
    lda((Player_Y_Position));
    clc();
    // add eight pixels to player's vertical position
    adc(Imm(0x8));
    sta((Bubble_Y_Position), x);
    // save as vertical position for air bubble
    lda(Imm(0x1));
    sta((Bubble_Y_HighPos), x);
    ldy(Imm(0x7));
    lda((BubbleTimerData), y);
    sta((AirBubbleTimer));
    JMP(MoveBubl);
}

int MoveBubl() {
    // set vertical high byte for air bubble
    // get pseudorandom bit, use as offset
    // get data for air bubble timer
    // set air bubble timer
    // get pseudorandom bit again, use as offset
    ldy(Imm(0x7));
    lda((Bubble_YMF_Dummy), x);
    sec();
    // subtract pseudorandom amount from dummy variable
    sbc((Bubble_MForceData), y);
    sta((Bubble_YMF_Dummy), x);
    // save dummy variable
    lda((Bubble_Y_Position), x);
    sbc(Imm(0x0));
    cmp(Imm(0x20));
    BCS(Y_Bubl);
    lda(Imm(0xf8));
    JMP(Y_Bubl);
}

int Y_Bubl() {
    // subtract borrow from airbubble's vertical coordinate
    // if below the status bar,
    // branch to go ahead and use to move air bubble upwards
    // otherwise set offscreen coordinate
    // store as new vertical coordinate for air bubble
    sta((Bubble_Y_Position), x);
    JMP(ExitBubl);
}

int ExitBubl() {
    // leave
    rts();
    JMP(RunGameTimer);
}

int RunGameTimer() {
    lda((OperMode));
    BEQ(ExGTimer);
    // get primary mode of operation
    // branch to leave if in title screen mode
    lda((GameEngineSubroutine));
    cmp(Imm(0x8));
    BCC(ExGTimer);
    cmp(Imm(0xb));
    BEQ(ExGTimer);
    // if routine number less than eight running,
    // branch to leave
    // if running death routine,
    // branch to leave
    lda((Player_Y_HighPos));
    cmp(Imm(0x2));
    BCS(ExGTimer);
    lda((GameTimerCtrlTimer));
    BNE(ExGTimer);
    // if player below the screen,
    // branch to leave regardless of level type
    // if game timer control not yet expired,
    // branch to leave
    lda((GameTimerDisplay));
    ora((((GameTimerDisplay)) + (Imm(1))));
    // otherwise check game timer digits
    ora((((GameTimerDisplay)) + (Imm(2))));
    BEQ(TimeUpOn);
    ldy((GameTimerDisplay));
    dey();
    BNE(ResGTCtrl);
    lda((((GameTimerDisplay)) + (Imm(1))));
    // if game timer digits at 000, branch to time-up code
    // otherwise check first digit
    // if first digit not on 1,
    // branch to reset game timer control
    // otherwise check second and third digits
    ora((((GameTimerDisplay)) + (Imm(2))));
    BNE(ResGTCtrl);
    // if timer not at 100, branch to reset game timer control
    lda((TimeRunningOutMusic));
    sta((EventMusicQueue));
    JMP(ResGTCtrl);
}

int ResGTCtrl() {
    // otherwise load time running out music
    // reset game timer control
    lda(Imm(0x18));
    sta((GameTimerCtrlTimer));
    ldy(Imm(0x23));
    lda(Imm(0xff));
    // set offset for last digit
    // set value to decrement game timer digit
    sta((((DigitModifier)) + (Imm(5))));
    JSR(DigitsMathRoutine);
    lda(Imm(0xa4));
    JMP(PrintStatusBarNumbers);
    JMP(TimeUpOn);
}

int TimeUpOn() {
    // do sub to decrement game timer slowly
    // set status nybbles to update game timer display
    // do sub to update the display
    // init player status (note A will always be zero here)
    sta((PlayerStatus));
    JSR(ForceInjury);
    inc((GameTimerExpiredFlag));
    JMP(ExGTimer);
}

int ExGTimer() {
    // do sub to kill the player (note player is small here)
    // set game timer expiration flag
    // leave
    rts();
    JMP(WarpZoneObject);
}

int WarpZoneObject() {
    lda((ScrollLock));
    BEQ(ExGTimer);
    lda((Player_Y_Position));
    anda((Player_Y_HighPos));
    BNE(ExGTimer);
    sta((ScrollLock));
    inc((WarpZoneControl));
    JMP(EraseEnemyObject);
    JMP(ProcessWhirlpools);
}

int ProcessWhirlpools() {
    lda((AreaType));
    BNE(ExitWh);
    sta((Whirlpool_Flag));
    lda((TimerControl));
    BNE(ExitWh);
    ldy(Imm(0x4));
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
    lda((Whirlpool_LeftExtent), y);
    clc();
    adc((Whirlpool_Length), y);
    sta(Imm(0x2));
    lda((Whirlpool_PageLoc), y);
    BEQ(NextWh);
    adc(Imm(0x0));
    sta(Imm(0x1));
    lda((Player_X_Position));
    // add length of whirlpool
    // store result as right extent here
    // get page location
    // if none or page 0, branch to get next data
    // add carry
    // store result as page location of right extent here
    // get player's horizontal position
    sec();
    sbc((Whirlpool_LeftExtent), y);
    lda((Player_PageLoc));
    sbc((Whirlpool_PageLoc), y);
    BMI(NextWh);
    lda(Imm(0x2));
    // subtract left extent
    // get player's page location
    // subtract borrow
    // if player too far left, branch to get next data
    // otherwise get right extent
    sec();
    sbc((Player_X_Position));
    lda(Imm(0x1));
    sbc((Player_PageLoc));
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
    rts();
    JMP(WhirlpoolActivate);
}

int WhirlpoolActivate() {
    lda((Whirlpool_Length), y);
    lsr();
    sta(Imm(0x0));
    lda((Whirlpool_LeftExtent), y);
    // get length of whirlpool
    // divide by 2
    // save here
    // get left extent of whirlpool
    clc();
    adc(Imm(0x0));
    sta(Imm(0x1));
    lda((Whirlpool_PageLoc), y);
    adc(Imm(0x0));
    sta(Imm(0x0));
    lda((FrameCounter));
    lsr();
    BCC(WhPull);
    lda(Imm(0x1));
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
    sbc((Player_X_Position));
    lda(Imm(0x0));
    sbc((Player_PageLoc));
    BPL(LeftWh);
    lda((Player_X_Position));
    // subtract player's horizontal coordinate
    // get page location of center
    // subtract borrow
    // if player to the left of center, branch
    // otherwise slowly pull player left, towards the center
    sec();
    sbc(Imm(0x1));
    sta((Player_X_Position));
    // subtract one pixel
    // set player's new horizontal coordinate
    lda((Player_PageLoc));
    sbc(Imm(0x0));
    JMP(SetPWh);
    JMP(LeftWh);
}

int LeftWh() {
    // subtract borrow
    // jump to set player's new page location
    // get player's collision bits
    lda((Player_CollisionBits));
    lsr();
    BCC(WhPull);
    lda((Player_X_Position));
    // shift d0 into carry
    // if d0 not set, branch
    // otherwise slowly pull player right, towards the center
    clc();
    adc(Imm(0x1));
    sta((Player_X_Position));
    // add one pixel
    // set player's new horizontal coordinate
    lda((Player_PageLoc));
    adc(Imm(0x0));
    JMP(SetPWh);
}

int SetPWh() {
    // add carry
    // set player's new page location
    sta((Player_PageLoc));
    JMP(WhPull);
}

int WhPull() {
    lda(Imm(0x10));
    sta(Imm(0x0));
    // set vertical movement force
    lda(Imm(0x1));
    sta((Whirlpool_Flag));
    sta(Imm(0x2));
    // set whirlpool flag to be used later
    // also set maximum vertical speed
    lsr();
    tax();
    JMP(ImposeGravity);
    JMP(FlagpoleRoutine);
}

int FlagpoleRoutine() {
    ldx(Imm(0x5));
    stx((ObjectOffset));
    // set enemy object offset
    // to special use slot
    lda((Enemy_ID), x);
    cmp((FlagpoleFlagObject));
    BNE(ExitFlagP);
    // if flagpole flag not found,
    // branch to leave
    lda((GameEngineSubroutine));
    cmp(Imm(0x4));
    BNE(SkipScore);
    // if flagpole slide routine not running,
    // branch to near the end of code
    lda((Player_State));
    cmp(Imm(0x3));
    BNE(SkipScore);
    lda((Enemy_Y_Position), x);
    cmp(Imm(0xaa));
    BCS(GiveFPScr);
    lda((Player_Y_Position));
    cmp(Imm(0xa2));
    BCS(GiveFPScr);
    // if player state not climbing,
    // branch to near the end of code
    // check flagpole flag's vertical coordinate
    // if flagpole flag down to a certain point,
    // branch to end the level
    // check player's vertical coordinate
    // if player down to a certain point,
    // branch to end the level
    lda((Enemy_YMF_Dummy), x);
    adc(Imm(0xff));
    sta((Enemy_YMF_Dummy), x);
    lda((Enemy_Y_Position), x);
    adc(Imm(0x1));
    sta((Enemy_Y_Position), x);
    // add movement amount to dummy variable
    // save dummy variable
    // get flag's vertical coordinate
    // add 1 plus carry to move flag, and
    // store vertical coordinate
    lda((FlagpoleFNum_YMFDummy));
    sec();
    // subtract movement amount from dummy variable
    sbc(Imm(0xff));
    sta((FlagpoleFNum_YMFDummy));
    // save dummy variable
    lda((FlagpoleFNum_Y_Pos));
    sbc(Imm(0x1));
    sta((FlagpoleFNum_Y_Pos));
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
    ldy((FlagpoleScore));
    lda((FlagpoleScoreMods), y);
    ldx((FlagpoleScoreDigits), y);
    sta((DigitModifier), x);
    JSR(AddToScore);
    // get amount to award player points
    // get digit with which to award points
    // store in digit modifier
    // do sub to award player points depending on height of collision
    lda(Imm(0x5));
    sta((GameEngineSubroutine));
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
    rts();
    JMP(JumpspringHandler);
}

int JumpspringHandler() {
    JSR(GetEnemyOffscreenBits);
    lda((TimerControl));
    BNE(DrawJSpr);
    lda((JumpspringAnimCtrl));
    BEQ(DrawJSpr);
    // get offscreen information
    // check master timer control
    // branch to last section if set
    // check jumpspring frame control
    // branch to last section if not set
    tay();
    dey();
    tya();
    anda(Imm(0b10));
    BNE(DownJSpr);
    // subtract one from frame control,
    // the only way a poor nmos 6502 can
    // mask out all but d1, original value still in Y
    // if set, branch to move player up
    inc((Player_Y_Position));
    inc((Player_Y_Position));
    JMP(PosJSpr);
    JMP(DownJSpr);
}

int DownJSpr() {
    // move player's vertical position down two pixels
    // skip to next part
    // move player's vertical position up two pixels
    dec((Player_Y_Position));
    dec((Player_Y_Position));
    JMP(PosJSpr);
}

int PosJSpr() {
    // get permanent vertical position
    lda((Jumpspring_FixedYPos), x);
    clc();
    adc((Jumpspring_Y_PosData), y);
    sta((Enemy_Y_Position), x);
    cpy(Imm(0x1));
    BCC(BounceJS);
    // add value using frame control as offset
    // store as new vertical position
    // check frame control offset (second frame is $00)
    // if offset not yet at third frame ($01), skip to next part
    lda((A_B_Buttons));
    anda((A_Button));
    BEQ(BounceJS);
    anda((PreviousA_B_Buttons));
    BNE(BounceJS);
    // check saved controller bits for A button press
    // skip to next part if A not pressed
    // check for A button pressed in previous frame
    // skip to next part if so
    lda(Imm(0xf4));
    sta((JumpspringForce));
    JMP(BounceJS);
}

int BounceJS() {
    // otherwise write new jumpspring force here
    // check frame control offset again
    cpy(Imm(0x3));
    BNE(DrawJSpr);
    // skip to last part if not yet at fifth frame ($03)
    lda((JumpspringForce));
    sta((Player_Y_Speed));
    // store jumpspring force as player's new vertical speed
    lda(Imm(0x0));
    sta((JumpspringAnimCtrl));
    JMP(DrawJSpr);
}

int DrawJSpr() {
    // initialize jumpspring frame control
    // get jumpspring's relative coordinates
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(OffscreenBoundsCheck);
    lda((JumpspringAnimCtrl));
    BEQ(ExJSpring);
    // draw jumpspring
    // check to see if we need to kill it
    // if frame control at zero, don't bother
    // trying to animate it, just leave
    lda((JumpspringTimer));
    BNE(ExJSpring);
    // if jumpspring timer not expired yet, leave
    lda(Imm(0x4));
    sta((JumpspringTimer));
    inc((JumpspringAnimCtrl));
    JMP(ExJSpring);
}

int ExJSpring() {
    // otherwise initialize jumpspring timer
    // increment frame control to animate jumpspring
    // leave
    rts();
    JMP(Setup_Vine);
}

int Setup_Vine() {
    lda((VineObject));
    sta((Enemy_ID), x);
    // load identifier for vine object
    // store in buffer
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    // set flag for enemy object buffer
    lda((Block_PageLoc), y);
    sta((Enemy_PageLoc), x);
    // copy page location from previous object
    lda((Block_X_Position), y);
    sta((Enemy_X_Position), x);
    // copy horizontal coordinate from previous object
    lda((Block_Y_Position), y);
    sta((Enemy_Y_Position), x);
    ldy((VineFlagOffset));
    BNE(NextVO);
    sta((VineStart_Y_Position));
    JMP(NextVO);
}

int NextVO() {
    // copy vertical coordinate from previous object
    // load vine flag/offset to next available vine slot
    // if set at all, don't bother to store vertical
    // otherwise store vertical coordinate here
    // store object offset to next available vine slot
    txa();
    sta((VineObjOffset), y);
    inc((VineFlagOffset));
    // using vine flag as offset
    // increment vine flag offset
    lda((Sfx_GrowVine));
    sta((Square2SoundQueue));
    // load vine grow sound
    rts();
    JMP(VineObjectHandler);
}

int VineObjectHandler() {
    cpx(Imm(0x5));
    BNE(ExitVH);
    // check enemy offset for special use slot
    // if not in last slot, branch to leave
    ldy((VineFlagOffset));
    dey();
    // decrement vine flag in Y, use as offset
    lda((VineHeight));
    cmp((VineHeightData), y);
    BEQ(RunVSubs);
    lda((FrameCounter));
    lsr();
    // if vine has reached certain height,
    // branch ahead to skip this part
    // get frame counter
    // shift d1 into carry
    lsr();
    BCC(RunVSubs);
    // if d1 not set (2 frames every 4) skip this part
    lda((((Enemy_Y_Position)) + (Imm(5))));
    sbc(Imm(0x1));
    sta((((Enemy_Y_Position)) + (Imm(5))));
    inc((VineHeight));
    JMP(RunVSubs);
}

int RunVSubs() {
    // subtract vertical position of vine
    // one pixel every frame it's time
    // increment vine height
    // if vine still very small,
    lda((VineHeight));
    cmp(Imm(0x8));
    // branch to leave
    BCC(ExitVH);
    JSR(RelativeEnemyPosition);
    JSR(GetEnemyOffscreenBits);
    ldy(Imm(0x0));
    JMP(VDrawLoop);
}

int VDrawLoop() {
    // get relative coordinates of vine,
    // and any offscreen bits
    // initialize offset used in draw vine sub
    // draw vine
    JSR(DrawVine);
    iny();
    cpy((VineFlagOffset));
    BNE(VDrawLoop);
    // increment offset
    // if offset in Y and offset here
    // do not yet match, loop back to draw more vine
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1100));
    BEQ(WrCMTile);
    dey();
    JMP(KillVine);
}

int KillVine() {
    // mask offscreen bits
    // if none of the saved offscreen bits set, skip ahead
    // otherwise decrement Y to get proper offset again
    // get enemy object offset for this vine object
    ldx((VineObjOffset), y);
    JSR(EraseEnemyObject);
    dey();
    BPL(KillVine);
    sta((VineFlagOffset));
    sta((VineHeight));
    JMP(WrCMTile);
}

int WrCMTile() {
    // kill this vine object
    // decrement Y
    // if any vine objects left, loop back to kill it
    // initialize vine flag/offset
    // initialize vine height
    // check vine height
    lda((VineHeight));
    cmp(Imm(0x20));
    BCC(ExitVH);
    ldx(Imm(0x6));
    lda(Imm(0x1));
    ldy(Imm(0x1b));
    JSR(BlockBufferCollision);
    // if vine small (less than 32 pixels tall)
    // then branch ahead to leave
    // set offset in X to last enemy slot
    // set A to obtain horizontal in $04, but we don't care
    // set Y to offset to get block at ($04, $10) of coordinates
    // do a sub to get block buffer address set, return contents
    ldy(Imm(0x2));
    cpy(Imm(0xd0));
    BCS(ExitVH);
    lda((Imm(0x6)), y);
    BNE(ExitVH);
    // if vertical high nybble offset beyond extent of
    // current block buffer, branch to leave, do not write
    // otherwise check contents of block buffer at
    // current offset, if not empty, branch to leave
    lda(Imm(0x26));
    sta((Imm(0x6)), y);
    JMP(ExitVH);
}

int ExitVH() {
    // otherwise, write climbing metatile to block buffer
    // get enemy object offset and leave
    ldx((ObjectOffset));
    rts();
    JMP(ProcessCannons);
}

int ProcessCannons() {
    lda((AreaType));
    BEQ(ExCannon);
    // get area type
    // if water type area, branch to leave
    ldx(Imm(0x2));
    JMP(ThreeSChk);
}

int ThreeSChk() {
    // start at third enemy slot
    stx((ObjectOffset));
    lda((Enemy_Flag), x);
    BNE(Chk_BB);
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    ldy((SecondaryHardMode));
    anda((CannonBitmasks), y);
    cmp(Imm(0x6));
    BCS(Chk_BB);
    tay();
    lda((Cannon_PageLoc), y);
    BEQ(Chk_BB);
    lda((Cannon_Timer), y);
    BEQ(FireCannon);
    sbc(Imm(0x0));
    sta((Cannon_Timer), y);
    JMP(Chk_BB);
    JMP(FireCannon);
}

int FireCannon() {
    lda((TimerControl));
    BNE(Chk_BB);
    lda(Imm(0xe));
    sta((Cannon_Timer), y);
    lda((Cannon_PageLoc), y);
    sta((Enemy_PageLoc), x);
    lda((Cannon_X_Position), y);
    sta((Enemy_X_Position), x);
    lda((Cannon_Y_Position), y);
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
    sbc(Imm(0x8));
    sta((Enemy_Y_Position), x);
    // subtract eight pixels (because enemies are 24 pixels tall)
    // save as vertical coordinate of bullet bill
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    sta((Enemy_Flag), x);
    lsr();
    sta((Enemy_State), x);
    // set vertical high byte of bullet bill
    // set buffer flag
    // shift right once to init A
    // then initialize enemy's state
    lda(Imm(0x9));
    sta((Enemy_BoundBoxCtrl), x);
    // set bounding box size control for bullet bill
    lda((BulletBill_CannonVar));
    sta((Enemy_ID), x);
    JMP(Next3Slt);
    JMP(Chk_BB);
}

int Chk_BB() {
    // load identifier for bullet bill (cannon variant)
    // move onto next slot
    // check enemy identifier for bullet bill (cannon variant)
    lda((Enemy_ID), x);
    cmp((BulletBill_CannonVar));
    BNE(Next3Slt);
    JSR(OffscreenBoundsCheck);
    lda((Enemy_Flag), x);
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
    rts();
    JMP(BulletBillHandler);
}

int BulletBillHandler() {
    lda((TimerControl));
    BNE(RunBBSubs);
    // if master timer control set,
    // branch to run subroutines except movement sub
    lda((Enemy_State), x);
    BNE(ChkDSte);
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1100));
    cmp(Imm(0b1100));
    BEQ(KillBB);
    ldy(Imm(0x1));
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
    sty((Enemy_MovingDir), x);
    dey();
    lda((BulletBillXSpdData), y);
    sta((Enemy_X_Speed), x);
    lda(Imm(0x0));
    adc(Imm(0x28));
    cmp(Imm(0x50));
    BCC(KillBB);
    // decrement to use as offset
    // get horizontal speed based on moving direction
    // and store it
    // get horizontal difference
    // add 40 pixels
    // if less than a certain amount, player is too close
    // to cannon either on left or right side, thus branch
    lda(Imm(0x1));
    sta((Enemy_State), x);
    // otherwise set bullet bill's state
    lda(Imm(0xa));
    sta((EnemyFrameTimer), x);
    // set enemy frame timer
    lda((Sfx_Blast));
    sta((Square2SoundQueue));
    JMP(ChkDSte);
}

int ChkDSte() {
    // play fireworks/gunfire sound
    // check enemy state for d5 set
    lda((Enemy_State), x);
    anda(Imm(0b100000));
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
    rts();
    JMP(SpawnHammerObj);
}

int SpawnHammerObj() {
    lda((((PseudoRandomBitReg)) + (Imm(1))));
    anda(Imm(0b111));
    BNE(SetMOfs);
    // get pseudorandom bits from
    // second part of LSFR
    // if any bits are set, branch and use as offset
    lda((((PseudoRandomBitReg)) + (Imm(1))));
    anda(Imm(0b1000));
    JMP(SetMOfs);
}

int SetMOfs() {
    // get d3 from same part of LSFR
    // use either d3 or d2-d0 for offset here
    tay();
    lda((Misc_State), y);
    BNE(NoHammer);
    ldx((HammerEnemyOfsData), y);
    lda((Enemy_Flag), x);
    BNE(NoHammer);
    ldx((ObjectOffset));
    // if any values loaded in
    // $2a-$32 where offset is then leave with carry clear
    // get offset of enemy slot to check using Y as offset
    // check enemy buffer flag at offset
    // if buffer flag set, branch to leave with carry clear
    // get original enemy object offset
    txa();
    sta((HammerEnemyOffset), y);
    // save here
    lda(Imm(0x90));
    sta((Misc_State), y);
    // save hammer's state here
    lda(Imm(0x7));
    sta((Misc_BoundBoxCtrl), y);
    sec();
    // set something else entirely, here
    // return with carry set
    rts();
    JMP(NoHammer);
}

int NoHammer() {
    // get original enemy object offset
    ldx((ObjectOffset));
    clc();
    // return with carry clear
    rts();
    JMP(ProcHammerObj);
}

int ProcHammerObj() {
    lda((TimerControl));
    BNE(RunHSubs);
    lda((Misc_State), x);
    anda(Imm(0b1111111));
    ldy((HammerEnemyOffset), x);
    cmp(Imm(0x2));
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
    adc(Imm(0xd));
    tax();
    // add 13 bytes to use
    // proper misc object
    // return offset to X
    lda(Imm(0x10));
    sta(Imm(0x0));
    // set downward movement force
    lda(Imm(0xf));
    sta(Imm(0x1));
    // set upward movement force (not used)
    lda(Imm(0x4));
    sta(Imm(0x2));
    lda(Imm(0x0));
    JSR(ImposeGravity);
    JSR(MoveObjectHorizontally);
    ldx((ObjectOffset));
    JMP(RunAllH);
    JMP(SetHSpd);
}

int SetHSpd() {
    lda(Imm(0xfe));
    sta((Misc_Y_Speed), x);
    lda((Enemy_State), y);
    anda(Imm(0b11110111));
    sta((Enemy_State), y);
    ldx((Enemy_MovingDir), y);
    dex();
    lda((HammerXSpdData), x);
    ldx((ObjectOffset));
    sta((Misc_X_Speed), x);
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
    dec((Misc_State), x);
    lda((Enemy_X_Position), y);
    // get enemy's horizontal position
    clc();
    adc(Imm(0x2));
    sta((Misc_X_Position), x);
    lda((Enemy_PageLoc), y);
    adc(Imm(0x0));
    sta((Misc_PageLoc), x);
    lda((Enemy_Y_Position), y);
    // set position 2 pixels to the right
    // store as hammer's horizontal position
    // get enemy's page location
    // add carry
    // store as hammer's page location
    // get enemy's vertical position
    sec();
    sbc(Imm(0xa));
    sta((Misc_Y_Position), x);
    // move position 10 pixels upward
    // store as hammer's vertical position
    lda(Imm(0x1));
    sta((Misc_Y_HighPos), x);
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
    rts();
    JMP(CoinBlock);
}

int CoinBlock() {
    JSR(FindEmptyMiscSlot);
    lda((Block_PageLoc), x);
    sta((Misc_PageLoc), y);
    lda((Block_X_Position), x);
    ora(Imm(0x5));
    sta((Misc_X_Position), y);
    lda((Block_Y_Position), x);
    sbc(Imm(0x10));
    sta((Misc_Y_Position), y);
    JMP(JCoinC);
    JMP(SetupJumpCoin);
}

int SetupJumpCoin() {
    JSR(FindEmptyMiscSlot);
    lda((Block_PageLoc2), x);
    sta((Misc_PageLoc), y);
    lda(Imm(0x6));
    // set offset for empty or last misc object buffer slot
    // get page location saved earlier
    // and save as page location for misc object
    // get low byte of block buffer offset
    asl();
    asl();
    // multiply by 16 to use lower nybble
    asl();
    asl();
    ora(Imm(0x5));
    sta((Misc_X_Position), y);
    lda(Imm(0x2));
    adc(Imm(0x20));
    sta((Misc_Y_Position), y);
    JMP(JCoinC);
}

int JCoinC() {
    lda(Imm(0xfb));
    sta((Misc_Y_Speed), y);
    // set vertical speed
    lda(Imm(0x1));
    sta((Misc_Y_HighPos), y);
    sta((Misc_State), y);
    sta((Square2SoundQueue));
    stx((ObjectOffset));
    JSR(GiveOneCoin);
    inc((CoinTallyFor1Ups));
    // set vertical high byte
    // set state for misc object
    // load coin grab sound
    // store current control bit as misc object offset
    // update coin tally on the screen and coin amount variable
    // increment coin tally used to activate 1-up block flag
    rts();
    JMP(FindEmptyMiscSlot);
}

int FindEmptyMiscSlot() {
    ldy(Imm(0x8));
    JMP(FMiscLoop);
}

int FMiscLoop() {
    // start at end of misc objects buffer
    // get misc object state
    lda((Misc_State), y);
    BEQ(UseMiscS);
    dey();
    cpy(Imm(0x5));
    BNE(FMiscLoop);
    ldy(Imm(0x8));
    JMP(UseMiscS);
}

int UseMiscS() {
    // branch if none found to use current offset
    // decrement offset
    // do this for three slots
    // do this until all slots are checked
    // if no empty slots found, use last slot
    // store offset of misc object buffer here (residual)
    sty((JumpCoinMiscOffset));
    rts();
    JMP(MiscObjectsCore);
}

int MiscObjectsCore() {
    ldx(Imm(0x8));
    JMP(MiscLoop);
}

int MiscLoop() {
    // set at end of misc object buffer
    // store misc object offset here
    stx((ObjectOffset));
    lda((Misc_State), x);
    BEQ(MiscLoopBack);
    asl();
    BCC(ProcJumpCoin);
    JSR(ProcHammerObj);
    JMP(MiscLoopBack);
    JMP(ProcJumpCoin);
}

int ProcJumpCoin() {
    ldy((Misc_State), x);
    dey();
    BEQ(JCoinRun);
    inc((Misc_State), x);
    lda((Misc_X_Position), x);
    clc();
    adc((ScrollAmount));
    sta((Misc_X_Position), x);
    lda((Misc_PageLoc), x);
    adc(Imm(0x0));
    sta((Misc_PageLoc), x);
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
    lda((Misc_State), x);
    cmp(Imm(0x30));
    BNE(RunJCSubs);
    // check state of object for preset value
    // if not yet reached, branch to subroutines
    lda(Imm(0x0));
    sta((Misc_State), x);
    JMP(MiscLoopBack);
    JMP(JCoinRun);
}

int JCoinRun() {
    txa();
    clc();
    // add 13 bytes to offset for next subroutine
    adc(Imm(0xd));
    tax();
    lda(Imm(0x50));
    // set downward movement amount
    sta(Imm(0x0));
    lda(Imm(0x6));
    // set maximum vertical speed
    sta(Imm(0x2));
    lsr();
    sta(Imm(0x1));
    lda(Imm(0x0));
    JSR(ImposeGravity);
    ldx((ObjectOffset));
    lda((Misc_Y_Speed), x);
    // divide by 2 and set
    // as upward movement amount (apparently residual)
    // set A to impose gravity on jumping coin
    // do sub to move coin vertically and impose gravity on it
    // get original misc object offset
    // check vertical speed
    cmp(Imm(0x5));
    BNE(RunJCSubs);
    inc((Misc_State), x);
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
    rts();
    JMP(GiveOneCoin);
}

int GiveOneCoin() {
    lda(Imm(0x1));
    sta((((DigitModifier)) + (Imm(5))));
    ldx((CurrentPlayer));
    ldy((CoinTallyOffsets), x);
    JSR(DigitsMathRoutine);
    inc((CoinTally));
    // set digit modifier to add 1 coin
    // to the current player's coin tally
    // get current player on the screen
    // get offset for player's coin tally
    // update the coin tally
    // increment onscreen player's coin amount
    lda((CoinTally));
    cmp(Imm(100));
    BNE(CoinPoints);
    // does player have 100 coins yet?
    // if not, skip all of this
    lda(Imm(0x0));
    sta((CoinTally));
    inc((NumberofLives));
    // otherwise, reinitialize coin amount
    // give the player an extra life
    lda((Sfx_ExtraLife));
    sta((Square2SoundQueue));
    JMP(CoinPoints);
}

int CoinPoints() {
    lda(Imm(0x2));
    sta((((DigitModifier)) + (Imm(4))));
    JMP(AddToScore);
}

int AddToScore() {
    ldx((CurrentPlayer));
    ldy((ScoreOffsets), x);
    JSR(DigitsMathRoutine);
    JMP(GetSBNybbles);
}

int GetSBNybbles() {
    ldy((CurrentPlayer));
    lda((StatusBarNybbles), y);
    JMP(UpdateNumber);
}

int UpdateNumber() {
    JSR(PrintStatusBarNumbers);
    // print status bar numbers based on nybbles, whatever they be
    ldy((VRAM_Buffer1_Offset));
    lda((((VRAM_Buffer1)) - (Imm(6))), y);
    BNE(NoZSup);
    // check highest digit of score
    // if zero, overwrite with space tile for zero suppression
    lda(Imm(0x24));
    sta((((VRAM_Buffer1)) - (Imm(6))), y);
    JMP(NoZSup);
}

int NoZSup() {
    // get enemy object buffer offset
    ldx((ObjectOffset));
    rts();
    JMP(SetupPowerUp);
}

int SetupPowerUp() {
    lda((PowerUpObject));
    sta((((Enemy_ID)) + (Imm(5))));
    lda((Block_PageLoc), x);
    sta((((Enemy_PageLoc)) + (Imm(5))));
    lda((Block_X_Position), x);
    sta((((Enemy_X_Position)) + (Imm(5))));
    // load power-up identifier into
    // special use slot of enemy object buffer
    // store page location of block object
    // as page location of power-up object
    // store horizontal coordinate of block object
    // as horizontal coordinate of power-up object
    lda(Imm(0x1));
    sta((((Enemy_Y_HighPos)) + (Imm(5))));
    lda((Block_Y_Position), x);
    // set vertical high byte of power-up object
    // get vertical coordinate of block object
    sec();
    sbc(Imm(0x8));
    sta((((Enemy_Y_Position)) + (Imm(5))));
    JMP(PwrUpJmp);
}

int PwrUpJmp() {
    // subtract 8 pixels
    // and use as vertical coordinate of power-up object
    // this is a residual jump point in enemy object jump table
    lda(Imm(0x1));
    sta((((Enemy_State)) + (Imm(5))));
    sta((((Enemy_Flag)) + (Imm(5))));
    // set power-up object's state
    // set buffer flag
    lda(Imm(0x3));
    sta((((Enemy_BoundBoxCtrl)) + (Imm(5))));
    // set bounding box size control for power-up object
    lda((PowerUpType));
    cmp(Imm(0x2));
    BCS(PutBehind);
    lda((PlayerStatus));
    // check currently loaded power-up type
    // if star or 1-up, branch ahead
    // otherwise check player's current status
    cmp(Imm(0x2));
    BCC(StrType);
    lsr();
    JMP(StrType);
}

int StrType() {
    // if player not fiery, use status as power-up type
    // otherwise shift right to force fire flower type
    // store type here
    sta((PowerUpType));
    JMP(PutBehind);
}

int PutBehind() {
    lda(Imm(0b100000));
    sta((((Enemy_SprAttrib)) + (Imm(5))));
    // set background priority bit
    lda((Sfx_GrowPowerUp));
    sta((Square2SoundQueue));
    // load power-up reveal sound and leave
    rts();
    JMP(PowerUpObjHandler);
}

int PowerUpObjHandler() {
    ldx(Imm(0x5));
    // set object offset for last slot in enemy object buffer
    stx((ObjectOffset));
    lda((((Enemy_State)) + (Imm(5))));
    BEQ(ExitPUp);
    asl();
    BCC(GrowThePowerUp);
    lda((TimerControl));
    BNE(RunPUSubs);
    lda((PowerUpType));
    BEQ(ShroomM);
    // check power-up object's state
    // if not set, branch to leave
    // shift to check if d7 was set in object state
    // if not set, branch ahead to skip this part
    // if master timer control set,
    // branch ahead to enemy object routines
    // check power-up type
    // if normal mushroom, branch ahead to move it
    cmp(Imm(0x3));
    BEQ(ShroomM);
    // if 1-up mushroom, branch ahead to move it
    cmp(Imm(0x2));
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
    lda((FrameCounter));
    anda(Imm(0x3));
    BNE(ChkPUSte);
    dec((((Enemy_Y_Position)) + (Imm(5))));
    lda((((Enemy_State)) + (Imm(5))));
    inc((((Enemy_State)) + (Imm(5))));
    cmp(Imm(0x11));
    BCC(ChkPUSte);
    // get frame counter
    // mask out all but 2 LSB
    // if any bits set here, branch
    // otherwise decrement vertical coordinate slowly
    // load power-up object state
    // increment state for next frame (to make power-up rise)
    // if power-up object state not yet past 16th pixel,
    // branch ahead to last part here
    lda(Imm(0x10));
    sta((Enemy_X_Speed), x);
    // otherwise set horizontal speed
    lda(Imm(0b10000000));
    sta((((Enemy_State)) + (Imm(5))));
    asl();
    sta((((Enemy_SprAttrib)) + (Imm(5))));
    rol();
    sta((Enemy_MovingDir), x);
    JMP(ChkPUSte);
}

int ChkPUSte() {
    // and then set d7 in power-up object's state
    // shift once to init A
    // initialize background priority bit set here
    // rotate A to set right moving direction
    // set moving direction
    // check power-up object's state
    lda((((Enemy_State)) + (Imm(5))));
    cmp(Imm(0x6));
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
    rts();
    JMP(PlayerHeadCollision);
}

int PlayerHeadCollision() {
    pha();
    lda(Imm(0x11));
    ldx((SprDataOffset_Ctrl));
    ldy((PlayerSize));
    BNE(DBlockSte);
    lda(Imm(0x12));
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
    sta((Block_State), x);
    JSR(DestroyBlockMetatile);
    ldx((SprDataOffset_Ctrl));
    lda(Imm(0x2));
    sta((Block_Orig_YPos), x);
    // store blank metatile in vram buffer to write to name table
    // load offset control bit
    // get vertical high nybble offset used in block buffer routine
    // set as vertical coordinate for block object
    tay();
    lda(Imm(0x6));
    sta((Block_BBuf_Low), x);
    lda((Imm(0x6)), y);
    JSR(BlockBumpedChk);
    sta(Imm(0x0));
    ldy((PlayerSize));
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
    ldy(Imm(0x11));
    sty((Block_State), x);
    lda(Imm(0xc4));
    ldy(Imm(0x0));
    cpy(Imm(0x58));
    BEQ(StartBTmr);
    cpy(Imm(0x5d));
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
    lda((BrickCoinTimerFlag));
    BNE(ContBTmr);
    // if set, timer expired or counting down, thus branch
    lda(Imm(0xb));
    sta((BrickCoinTimer));
    inc((BrickCoinTimerFlag));
    JMP(ContBTmr);
}

int ContBTmr() {
    // if not set, set brick coin timer
    // and set flag linked to it
    // check brick coin timer
    lda((BrickCoinTimer));
    BNE(PutOldMT);
    ldy(Imm(0xc4));
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
    sta((Block_Metatile), x);
    JSR(InitBlock_XY_Pos);
    ldy(Imm(0x2));
    // get block object horizontal coordinates saved
    // get vertical high nybble offset
    lda(Imm(0x23));
    sta((Imm(0x6)), y);
    // write blank metatile $23 to block buffer
    lda(Imm(0x10));
    sta((BlockBounceTimer));
    pla();
    sta(Imm(0x5));
    ldy(Imm(0x0));
    lda((CrouchingFlag));
    BNE(SmallBP);
    lda((PlayerSize));
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
    lda((Player_Y_Position));
    clc();
    adc((BlockYPosAdderData), y);
    anda(Imm(0xf0));
    sta((Block_Y_Position), x);
    ldy((Block_State), x);
    // add value determined by size
    // mask out low nybble to get 16-pixel correspondence
    // save as vertical coordinate for block object
    // get block object state
    cpy(Imm(0x11));
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
    lda((SprDataOffset_Ctrl));
    eor(Imm(0x1));
    // and floatey numbers
    sta((SprDataOffset_Ctrl));
    rts();
    JMP(InitBlock_XY_Pos);
}

int InitBlock_XY_Pos() {
    lda((Player_X_Position));
    // get player's horizontal coordinate
    clc();
    adc(Imm(0x8));
    anda(Imm(0xf0));
    sta((Block_X_Position), x);
    // add eight pixels
    // mask out low nybble to give 16-pixel correspondence
    // save as horizontal coordinate for block object
    lda((Player_PageLoc));
    adc(Imm(0x0));
    sta((Block_PageLoc), x);
    sta((Block_PageLoc2), x);
    // add carry to page location of player
    // save as page location of block object
    // save elsewhere to be used later
    lda((Player_Y_HighPos));
    sta((Block_Y_HighPos), x);
    rts();
    JMP(BumpBlock);
}

int BumpBlock() {
    JSR(CheckTopOfBlock);
    // check to see if there's a coin directly above this block
    lda((Sfx_Bump));
    sta((Square1SoundQueue));
    // play bump sound
    lda(Imm(0x0));
    sta((Block_X_Speed), x);
    sta((Block_Y_MoveForce), x);
    sta((Player_Y_Speed));
    // initialize horizontal speed for block object
    // init fractional movement force
    // init player's vertical speed
    lda(Imm(0xfe));
    sta((Block_Y_Speed), x);
    lda(Imm(0x5));
    JSR(BlockBumpedChk);
    BCC(ExitBlockChk);
    tya();
    cmp(Imm(0x9));
    BCC(BlockCode);
    sbc(Imm(0x5));
    JMP(BlockCode);
}

int BlockCode() {
    JMP(MushFlowerBlock);
}

int MushFlowerBlock() {
    lda(Imm(0x0));
    BRA(_bit_hack_15616);
    JMP(StarBlock);
}

int StarBlock() {
    lda(Imm(0x2));
    JMP(_bit_hack_15616);
}

int _bit_hack_15616() {
    BRA(_bit_hack_15622);
    JMP(ExtraLifeMushBlock);
}

int ExtraLifeMushBlock() {
    lda(Imm(0x3));
    JMP(_bit_hack_15622);
}

int _bit_hack_15622() {
    sta(Imm(0x39));
    // store correct power-up type
    JMP(SetupPowerUp);
    JMP(VineBlock);
}

int VineBlock() {
    ldx(Imm(0x5));
    ldy((SprDataOffset_Ctrl));
    JSR(Setup_Vine);
    JMP(ExitBlockChk);
}

int ExitBlockChk() {
    rts();
    JMP(BlockBumpedChk);
}

int BlockBumpedChk() {
    ldy(Imm(0xd));
    JMP(BumpChkLoop);
}

int BumpChkLoop() {
    // start at end of metatile data
    // check to see if current metatile matches
    cmp((BrickQBlockMetatiles), y);
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
    rts();
    JMP(BrickShatter);
}

int BrickShatter() {
    JSR(CheckTopOfBlock);
    // check to see if there's a coin directly above this block
    lda((Sfx_BrickShatter));
    sta((Block_RepFlag), x);
    sta((NoiseSoundQueue));
    JSR(SpawnBrickChunks);
    // set flag for block object to immediately replace metatile
    // load brick shatter sound
    // create brick chunk objects
    lda(Imm(0xfe));
    sta((Player_Y_Speed));
    // set vertical speed for player
    lda(Imm(0x5));
    sta((((DigitModifier)) + (Imm(5))));
    JSR(AddToScore);
    ldx((SprDataOffset_Ctrl));
    // set digit modifier to give player 50 points
    // do sub to update the score
    // load control bit and leave
    rts();
    JMP(CheckTopOfBlock);
}

int CheckTopOfBlock() {
    ldx((SprDataOffset_Ctrl));
    ldy(Imm(0x2));
    BEQ(TopEx);
    tya();
    // load control bit
    // get vertical high nybble offset used in block buffer
    // branch to leave if set to zero, because we're at the top
    // otherwise set to A
    sec();
    sbc(Imm(0x10));
    sta(Imm(0x2));
    // subtract $10 to move up one row in the block buffer
    // store as new vertical high nybble offset
    tay();
    lda((Imm(0x6)), y);
    cmp(Imm(0xc2));
    BNE(TopEx);
    // get contents of block buffer in same column, one row up
    // is it a coin? (not underwater)
    // if not, branch to leave
    lda(Imm(0x0));
    sta((Imm(0x6)), y);
    JSR(RemoveCoin_Axe);
    ldx((SprDataOffset_Ctrl));
    JSR(SetupJumpCoin);
    JMP(TopEx);
}

int TopEx() {
    // otherwise put blank metatile where coin was
    // write blank metatile to vram buffer
    // get control bit
    // create jumping coin object and update coin variables
    // leave!
    rts();
    JMP(SpawnBrickChunks);
}

int SpawnBrickChunks() {
    lda((Block_X_Position), x);
    sta((Block_Orig_XPos), x);
    // set horizontal coordinate of block object
    // as original horizontal coordinate here
    lda(Imm(0xf0));
    sta((Block_X_Speed), x);
    // set horizontal speed for brick chunk objects
    sta((((Block_X_Speed)) + (Imm(2))), x);
    lda(Imm(0xfa));
    sta((Block_Y_Speed), x);
    // set vertical speed for one
    lda(Imm(0xfc));
    sta((((Block_Y_Speed)) + (Imm(2))), x);
    // set lower vertical speed for the other
    lda(Imm(0x0));
    sta((Block_Y_MoveForce), x);
    // init fractional movement force for both
    sta((((Block_Y_MoveForce)) + (Imm(2))), x);
    lda((Block_PageLoc), x);
    sta((((Block_PageLoc)) + (Imm(2))), x);
    // copy page location
    lda((Block_X_Position), x);
    sta((((Block_X_Position)) + (Imm(2))), x);
    // copy horizontal coordinate
    lda((Block_Y_Position), x);
    clc();
    adc(Imm(0x8));
    // add 8 pixels to vertical coordinate
    // and save as vertical coordinate for one of them
    sta((((Block_Y_Position)) + (Imm(2))), x);
    lda(Imm(0xfa));
    sta((Block_Y_Speed), x);
    // set vertical speed...again??? (redundant)
    rts();
    JMP(BlockObjectsCore);
}

int BlockObjectsCore() {
    lda((Block_State), x);
    BEQ(UpdSte);
    anda(Imm(0xf));
    pha();
    tay();
    // get state of block object
    // if not set, branch to leave
    // mask out high nybble
    // push to stack
    // put in Y for now
    txa();
    clc();
    adc(Imm(0x9));
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
    adc(Imm(0x2));
    tax();
    JSR(ImposeGravityBlock);
    JSR(MoveObjectHorizontally);
    ldx((ObjectOffset));
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBrickChunks);
    pla();
    ldy((Block_Y_HighPos), x);
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
    lda(Imm(0xf0));
    cmp((((Block_Y_Position)) + (Imm(2))), x);
    BCS(ChkTop);
    sta((((Block_Y_Position)) + (Imm(2))), x);
    JMP(ChkTop);
}

int ChkTop() {
    // check to see if bottom block object went
    // to the bottom of the screen, and branch if not
    // otherwise set offscreen coordinate
    // get top block object's vertical coordinate
    lda((Block_Y_Position), x);
    cmp(Imm(0xf0));
    pla();
    BCC(UpdSte);
    BCS(KillBlock);
    JMP(BouncingBlockHandler);
}

int BouncingBlockHandler() {
    JSR(ImposeGravityBlock);
    ldx((ObjectOffset));
    JSR(RelativeBlockPosition);
    JSR(GetBlockOffscreenBits);
    JSR(DrawBlock);
    lda((Block_Y_Position), x);
    anda(Imm(0xf));
    cmp(Imm(0x5));
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
    lda(Imm(0x1));
    sta((Block_RepFlag), x);
    JMP(KillBlock);
}

int KillBlock() {
    // otherwise set flag to replace metatile
    // if branched here, nullify object state
    lda(Imm(0x0));
    JMP(UpdSte);
}

int UpdSte() {
    // store contents of A in block object state
    sta((Block_State), x);
    rts();
    JMP(BlockObjMT_Updater);
}

int BlockObjMT_Updater() {
    ldx(Imm(0x1));
    JMP(UpdateLoop);
}

int UpdateLoop() {
    // set offset to start with second block object
    // set offset here
    stx((ObjectOffset));
    lda((VRAM_Buffer1));
    BNE(NextBUpd);
    lda((Block_RepFlag), x);
    BEQ(NextBUpd);
    lda((Block_BBuf_Low), x);
    sta(Imm(0x6));
    // if vram buffer already being used here,
    // branch to move onto next block object
    // if flag for block object already clear,
    // branch to move onto next block object
    // get low byte of block buffer
    // store into block buffer address
    lda(Imm(0x5));
    sta(Imm(0x7));
    lda((Block_Orig_YPos), x);
    sta(Imm(0x2));
    // set high byte of block buffer address
    // get original vertical coordinate of block object
    // store here and use as offset to block buffer
    tay();
    lda((Block_Metatile), x);
    sta((Imm(0x6)), y);
    JSR(ReplaceBlockMetatile);
    // get metatile to be written
    // write it to the block buffer
    // do sub to replace metatile where block object is
    lda(Imm(0x0));
    sta((Block_RepFlag), x);
    JMP(NextBUpd);
}

int NextBUpd() {
    // clear block object flag
    // decrement block object offset
    dex();
    BPL(UpdateLoop);
    rts();
    JMP(MoveEnemyHorizontally);
}

int MoveEnemyHorizontally() {
    inx();
    JSR(MoveObjectHorizontally);
    ldx((ObjectOffset));
    rts();
    JMP(MovePlayerHorizontally);
}

int MovePlayerHorizontally() {
    lda((JumpspringAnimCtrl));
    BNE(ExXMove);
    tax();
    JMP(MoveObjectHorizontally);
}

int MoveObjectHorizontally() {
    lda((SprObject_X_Speed), x);
    asl();
    asl();
    // get currently saved value (horizontal
    // speed, secondary counter, whatever)
    // and move low nybble to high
    asl();
    asl();
    sta(Imm(0x1));
    lda((SprObject_X_Speed), x);
    lsr();
    // store result here
    // get saved value again
    // move high nybble to low
    lsr();
    lsr();
    lsr();
    cmp(Imm(0x8));
    // if < 8, branch, do not change
    BCC(SaveXSpd);
    ora(Imm(0b11110000));
    JMP(SaveXSpd);
}

int SaveXSpd() {
    // otherwise alter high nybble
    // save result here
    sta(Imm(0x0));
    ldy(Imm(0x0));
    cmp(Imm(0x0));
    // load default Y value here
    // if result positive, leave Y alone
    BPL(UseAdder);
    dey();
    JMP(UseAdder);
}

int UseAdder() {
    // otherwise decrement Y
    // save Y here
    sty(Imm(0x2));
    lda((SprObject_X_MoveForce), x);
    // get whatever number's here
    clc();
    adc(Imm(0x1));
    sta((SprObject_X_MoveForce), x);
    lda(Imm(0x0));
    rol();
    pha();
    ror();
    // add low nybble moved to high
    // store result here
    // init A
    // rotate carry into d0
    // push onto stack
    // rotate d0 back onto carry
    lda((SprObject_X_Position), x);
    adc(Imm(0x0));
    sta((SprObject_X_Position), x);
    // add carry plus saved value (high nybble moved to low
    // plus $f0 if necessary) to object's horizontal position
    lda((SprObject_PageLoc), x);
    adc(Imm(0x2));
    sta((SprObject_PageLoc), x);
    // add carry plus other saved value to the
    // object's page location and save
    pla();
    clc();
    adc(Imm(0x0));
    JMP(ExXMove);
}

int ExXMove() {
    // pull old carry from stack and add
    // to high nybble moved to low
    // and leave
    rts();
    JMP(MovePlayerVertically);
}

int MovePlayerVertically() {
    ldx(Imm(0x0));
    // $00 - used for downward force
    // $02 - used for maximum vertical speed
    // set X for player offset
    lda((TimerControl));
    BNE(NoJSChk);
    lda((JumpspringAnimCtrl));
    BNE(ExXMove);
    JMP(NoJSChk);
}

int NoJSChk() {
    // if master timer control set, branch ahead
    // otherwise check to see if jumpspring is animating
    // branch to leave if so
    // dump vertical force
    lda((VerticalForce));
    sta(Imm(0x0));
    lda(Imm(0x4));
    JMP(ImposeGravitySprObj);
    JMP(MoveD_EnemyVertically);
}

int MoveD_EnemyVertically() {
    ldy(Imm(0x3d));
    lda((Enemy_State), x);
    cmp(Imm(0x5));
    BNE(ContVMove);
    JMP(MoveFallingPlatform);
}

int MoveFallingPlatform() {
    ldy(Imm(0x20));
    JMP(ContVMove);
}

int ContVMove() {
    // set movement amount
    // jump to skip the rest of this
    JMP(SetHiMax);
    JMP(MoveRedPTroopaDown);
}

int MoveRedPTroopaDown() {
    ldy(Imm(0x0));
    JMP(MoveRedPTroopa);
    JMP(MoveRedPTroopaUp);
}

int MoveRedPTroopaUp() {
    ldy(Imm(0x1));
    JMP(MoveRedPTroopa);
}

int MoveRedPTroopa() {
    inx();
    // increment X for enemy offset
    lda(Imm(0x3));
    sta(Imm(0x0));
    // set downward movement amount here
    lda(Imm(0x6));
    sta(Imm(0x1));
    // set upward movement amount here
    lda(Imm(0x2));
    sta(Imm(0x2));
    tya();
    JMP(RedPTroopaGrav);
    JMP(MoveDropPlatform);
}

int MoveDropPlatform() {
    ldy(Imm(0x7f));
    BNE(SetMdMax);
    JMP(MoveEnemySlowVert);
}

int MoveEnemySlowVert() {
    ldy(Imm(0xf));
    JMP(SetMdMax);
}

int SetMdMax() {
    // set movement amount for bowser/other objects
    // set maximum speed in A
    lda(Imm(0x2));
    BNE(SetXMoveAmt);
    JMP(MoveJ_EnemyVertically);
}

int MoveJ_EnemyVertically() {
    ldy(Imm(0x1c));
    JMP(SetHiMax);
}

int SetHiMax() {
    // set movement amount for podoboo/other objects
    // set maximum speed in A
    lda(Imm(0x3));
    JMP(SetXMoveAmt);
}

int SetXMoveAmt() {
    // set movement amount here
    sty(Imm(0x0));
    inx();
    JSR(ImposeGravitySprObj);
    ldx((ObjectOffset));
    // increment X for enemy offset
    // do a sub to move enemy object downwards
    // get enemy object buffer offset and leave
    rts();
    JMP(ResidualGravityCode);
}

int ResidualGravityCode() {
    ldy(Imm(0x0));
    JMP(ImposeGravityBlock);
}

int ImposeGravityBlock() {
    ldy(Imm(0x1));
    lda(Imm(0x50));
    // set offset for maximum speed
    // set movement amount here
    sta(Imm(0x0));
    lda((MaxSpdBlockData), y);
    JMP(ImposeGravitySprObj);
}

int ImposeGravitySprObj() {
    sta(Imm(0x2));
    lda(Imm(0x0));
    JMP(ImposeGravity);
    JMP(MovePlatformDown);
}

int MovePlatformDown() {
    lda(Imm(0x0));
    BRA(_bit_hack_16126);
    JMP(MovePlatformUp);
}

int MovePlatformUp() {
    lda(Imm(0x1));
    JMP(_bit_hack_16126);
}

int _bit_hack_16126() {
    pha();
    ldy((Enemy_ID), x);
    inx();
    lda(Imm(0x5));
    cpy(Imm(0x29));
    BNE(SetDplSpd);
    lda(Imm(0x9));
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
    sta(Imm(0x0));
    lda(Imm(0xa));
    // save upward movement amount here
    sta(Imm(0x1));
    lda(Imm(0x3));
    // save maximum vertical speed here
    sta(Imm(0x2));
    pla();
    tay();
    JMP(RedPTroopaGrav);
}

int RedPTroopaGrav() {
    JSR(ImposeGravity);
    ldx((ObjectOffset));
    // do a sub to move object gradually
    // get enemy object offset and leave
    rts();
    JMP(ImposeGravity);
}

int ImposeGravity() {
    pha();
    // $00 - used for downward force
    // $07 - used as adder for vertical position
    // push value to stack
    lda((SprObject_YMF_Dummy), x);
    clc();
    // add value in movement force to contents of dummy variable
    adc((SprObject_Y_MoveForce), x);
    sta((SprObject_YMF_Dummy), x);
    ldy(Imm(0x0));
    lda((SprObject_Y_Speed), x);
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
    sty(Imm(0x7));
    adc((SprObject_Y_Position), x);
    sta((SprObject_Y_Position), x);
    // add vertical position to vertical speed plus carry
    // store as new vertical position
    lda((SprObject_Y_HighPos), x);
    adc(Imm(0x7));
    sta((SprObject_Y_HighPos), x);
    // add carry plus contents of $07 to vertical high byte
    // store as new vertical high byte
    lda((SprObject_Y_MoveForce), x);
    clc();
    adc(Imm(0x0));
    // add downward movement amount to contents of $0433
    sta((SprObject_Y_MoveForce), x);
    lda((SprObject_Y_Speed), x);
    // add carry to vertical speed and store
    adc(Imm(0x0));
    sta((SprObject_Y_Speed), x);
    cmp(Imm(0x2));
    BMI(ChkUpM);
    // compare to maximum speed
    // if less than preset value, skip this part
    lda((SprObject_Y_MoveForce), x);
    cmp(Imm(0x80));
    // if less positively than preset maximum, skip this part
    BCC(ChkUpM);
    lda(Imm(0x2));
    sta((SprObject_Y_Speed), x);
    // keep vertical speed within maximum value
    lda(Imm(0x0));
    sta((SprObject_Y_MoveForce), x);
    JMP(ChkUpM);
}

int ChkUpM() {
    // clear fractional
    // get value from stack
    pla();
    BEQ(ExVMove);
    // if set to zero, branch to leave
    lda(Imm(0x2));
    eor(Imm(0b11111111));
    // otherwise get two's compliment of maximum speed
    tay();
    iny();
    sty(Imm(0x7));
    // store two's compliment here
    lda((SprObject_Y_MoveForce), x);
    sec();
    sbc(Imm(0x1));
    sta((SprObject_Y_MoveForce), x);
    // subtract upward movement amount from contents
    // of movement force, note that $01 is twice as large as $00,
    // thus it effectively undoes add we did earlier
    lda((SprObject_Y_Speed), x);
    sbc(Imm(0x0));
    // subtract borrow from vertical speed and store
    sta((SprObject_Y_Speed), x);
    cmp(Imm(0x7));
    BPL(ExVMove);
    // compare vertical speed to two's compliment
    // if less negatively than preset maximum, skip this part
    lda((SprObject_Y_MoveForce), x);
    cmp(Imm(0x80));
    BCS(ExVMove);
    // check if fractional part is above certain amount,
    // and if so, branch to leave
    lda(Imm(0x7));
    sta((SprObject_Y_Speed), x);
    // keep vertical speed within maximum value
    lda(Imm(0xff));
    sta((SprObject_Y_MoveForce), x);
    JMP(ExVMove);
}

int ExVMove() {
    // clear fractional
    // leave!
    rts();
    JMP(EnemiesAndLoopsCore);
}

int EnemiesAndLoopsCore() {
    lda((Enemy_Flag), x);
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
    lda((AreaParserTaskNum));
    anda(Imm(0x7));
    cmp(Imm(0x7));
    // if at a specific task, jump and leave
    BEQ(ExitELCore);
    JMP(ProcLoopCommand);
    JMP(ChkBowserF);
}

int ChkBowserF() {
    // otherwise, jump to process loop command/load enemies
    // get data from stack
    pla();
    anda(Imm(0b1111));
    // mask out high nybble
    tay();
    lda((Enemy_Flag), y);
    // use as pointer and load same place with different offset
    BNE(ExitELCore);
    sta((Enemy_Flag), x);
    JMP(ExitELCore);
}

int ExitELCore() {
    rts();
    JMP(ExecGameLoopback);
}

int ExecGameLoopback() {
    lda((Player_PageLoc));
    // send player back four pages
    sec();
    sbc(Imm(0x4));
    sta((Player_PageLoc));
    lda((CurrentPageLoc));
    // send current page back four pages
    sec();
    sbc(Imm(0x4));
    sta((CurrentPageLoc));
    lda((ScreenLeft_PageLoc));
    sec();
    // subtract four from page location
    // of screen's left border
    sbc(Imm(0x4));
    sta((ScreenLeft_PageLoc));
    lda((ScreenRight_PageLoc));
    sec();
    // do the same for the page location
    // of screen's right border
    sbc(Imm(0x4));
    sta((ScreenRight_PageLoc));
    lda((AreaObjectPageLoc));
    sec();
    // subtract four from page control
    // for area objects
    sbc(Imm(0x4));
    sta((AreaObjectPageLoc));
    lda(Imm(0x0));
    sta((EnemyObjectPageSel));
    // initialize page select for both
    // area and enemy objects
    sta((AreaObjectPageSel));
    sta((EnemyDataOffset));
    sta((EnemyObjectPageLoc));
    lda((AreaDataOfsLoopback), y);
    sta((AreaDataOffset));
    // initialize enemy object data offset
    // and enemy object page control
    // adjust area object offset based on
    // which loop command we encountered
    rts();
    JMP(ProcLoopCommand);
}

int ProcLoopCommand() {
    lda((LoopCommand));
    // check if loop command was found
    BEQ(ChkEnemyFrenzy);
    lda((CurrentColumnPos));
    BNE(ChkEnemyFrenzy);
    ldy(Imm(0xb));
    JMP(FindLoop);
}

int FindLoop() {
    dey();
    BMI(ChkEnemyFrenzy);
    lda((WorldNumber));
    cmp((LoopCmdWorldNumber), y);
    // if all data is checked and not match, do not loop
    // check to see if one of the world numbers
    // matches our current world number
    BNE(FindLoop);
    lda((CurrentPageLoc));
    cmp((LoopCmdPageNumber), y);
    // check to see if one of the page numbers
    // matches the page we're currently on
    BNE(FindLoop);
    lda((Player_Y_Position));
    cmp((LoopCmdYPosition), y);
    // check to see if the player is at the correct position
    // if not, branch to check for world 7
    BNE(WrongChk);
    lda((Player_State));
    cmp(Imm(0x0));
    BNE(WrongChk);
    lda((WorldNumber));
    cmp((World7));
    BNE(InitMLp);
    inc((MultiLoopCorrectCntr));
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
    inc((MultiLoopPassCntr));
    lda((MultiLoopPassCntr));
    // have we done all three parts?
    cmp(Imm(0x3));
    BNE(InitLCmd);
    lda((MultiLoopCorrectCntr));
    // if not, skip this part
    // if so, have we done them all correctly?
    cmp(Imm(0x3));
    BEQ(InitMLp);
    BNE(DoLpBack);
    JMP(WrongChk);
}

int WrongChk() {
    // if so, branch past unnecessary check here
    // unconditional branch if previous branch fails
    // are we in world 7? (check performed on
    lda((WorldNumber));
    cmp((World7));
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
    lda(Imm(0x0));
    sta((MultiLoopPassCntr));
    sta((MultiLoopCorrectCntr));
    JMP(InitLCmd);
}

int InitLCmd() {
    // initialize loop command flag
    lda(Imm(0x0));
    sta((LoopCommand));
    JMP(ChkEnemyFrenzy);
}

int ChkEnemyFrenzy() {
    lda((EnemyFrenzyQueue));
    BEQ(ProcessEnemyData);
    sta((Enemy_ID), x);
    // check for enemy object in frenzy queue
    // if not, skip this part
    // store as enemy object identifier here
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    // activate enemy object flag
    lda(Imm(0x0));
    sta((Enemy_State), x);
    // initialize state and frenzy queue
    sta((EnemyFrenzyQueue));
    JMP(InitEnemyObject);
    JMP(ProcessEnemyData);
}

int ProcessEnemyData() {
    ldy((EnemyDataOffset));
    lda(((EnemyData)), y);
    cmp(Imm(0xff));
    // get offset of enemy object data
    // load first byte
    // check for EOD terminator
    BNE(CheckEndofBuffer);
    JMP(CheckFrenzyBuffer);
    JMP(CheckEndofBuffer);
}

int CheckEndofBuffer() {
    anda(Imm(0b1111));
    // check for special row $0e
    cmp(Imm(0xe));
    BEQ(CheckRightBounds);
    cpx(Imm(0x5));
    BCC(CheckRightBounds);
    // if found, branch, otherwise
    // check for end of buffer
    // if not at end of buffer, branch
    iny();
    lda(((EnemyData)), y);
    anda(Imm(0b111111));
    cmp(Imm(0x2e));
    BEQ(CheckRightBounds);
    rts();
    JMP(CheckRightBounds);
}

int CheckRightBounds() {
    lda((ScreenRight_X_Pos));
    // add 48 to pixel coordinate of right boundary
    clc();
    adc(Imm(0x30));
    anda(Imm(0b11110000));
    // store high nybble
    sta(Imm(0x7));
    lda((ScreenRight_PageLoc));
    // add carry to page location of right boundary
    adc(Imm(0x0));
    sta(Imm(0x6));
    // store page location + carry
    ldy((EnemyDataOffset));
    iny();
    lda(((EnemyData)), y);
    // if MSB of enemy object is clear, branch to check for row $0f
    asl();
    BCC(CheckPageCtrlRow);
    lda((EnemyObjectPageSel));
    // if page select already set, do not set again
    BNE(CheckPageCtrlRow);
    inc((EnemyObjectPageSel));
    inc((EnemyObjectPageLoc));
    JMP(CheckPageCtrlRow);
}

int CheckPageCtrlRow() {
    dey();
    lda(((EnemyData)), y);
    // reread first byte
    anda(Imm(0xf));
    cmp(Imm(0xf));
    BNE(PositionEnemyObj);
    lda((EnemyObjectPageSel));
    BNE(PositionEnemyObj);
    // check for special row $0f
    // if not found, branch to position enemy object
    // if page select set,
    // branch without reading second byte
    iny();
    lda(((EnemyData)), y);
    // otherwise, get second byte, mask out 2 MSB
    anda(Imm(0b111111));
    sta((EnemyObjectPageLoc));
    inc((EnemyDataOffset));
    // store as page control for enemy object data
    // increment enemy object data offset 2 bytes
    inc((EnemyDataOffset));
    inc((EnemyObjectPageSel));
    JMP(ProcLoopCommand);
    JMP(PositionEnemyObj);
}

int PositionEnemyObj() {
    lda((EnemyObjectPageLoc));
    sta((Enemy_PageLoc), x);
    lda(((EnemyData)), y);
    // store page control as page location
    // for enemy object
    // get first byte of enemy object
    anda(Imm(0b11110000));
    sta((Enemy_X_Position), x);
    cmp((ScreenRight_X_Pos));
    lda((Enemy_PageLoc), x);
    sbc((ScreenRight_PageLoc));
    BCS(CheckRightExtBounds);
    // store column position
    // check column position against right boundary
    // without subtracting, then subtract borrow
    // from page location
    // if enemy object beyond or at boundary, branch
    lda(((EnemyData)), y);
    anda(Imm(0b1111));
    cmp(Imm(0xe));
    // check for special row $0e
    // if found, jump elsewhere
    BEQ(ParseRow0e);
    JMP(CheckThreeBytes);
    JMP(CheckRightExtBounds);
}

int CheckRightExtBounds() {
    lda(Imm(0x7));
    cmp((Enemy_X_Position), x);
    lda(Imm(0x6));
    sbc((Enemy_PageLoc), x);
    BCC(CheckFrenzyBuffer);
    lda(Imm(0x1));
    // check right boundary + 48 against
    // column position without subtracting,
    // then subtract borrow from page control temp
    // plus carry
    // if enemy object beyond extended boundary, branch
    // store value in vertical high byte
    sta((Enemy_Y_HighPos), x);
    lda(((EnemyData)), y);
    asl();
    asl();
    // get first byte again
    // multiply by four to get the vertical
    // coordinate
    asl();
    asl();
    sta((Enemy_Y_Position), x);
    cmp(Imm(0xe0));
    BEQ(ParseRow0e);
    // do one last check for special row $0e
    // (necessary if branched to $c1cb)
    iny();
    lda(((EnemyData)), y);
    anda(Imm(0b1000000));
    BEQ(CheckForEnemyGroup);
    lda((SecondaryHardMode));
    BEQ(Inc2B);
    JMP(CheckForEnemyGroup);
}

int CheckForEnemyGroup() {
    lda(((EnemyData)), y);
    // get second byte and mask out 2 MSB
    anda(Imm(0b111111));
    cmp(Imm(0x37));
    // check for value below $37
    BCC(BuzzyBeetleMutate);
    cmp(Imm(0x3f));
    BCC(DoGroup);
    JMP(BuzzyBeetleMutate);
}

int BuzzyBeetleMutate() {
    cmp((Goomba));
    BNE(StrID);
    ldy((PrimaryHardMode));
    BEQ(StrID);
    // if below $37, check for goomba
    // value ($3f or more always fails)
    // check if primary hard mode flag is set
    // and if so, change goomba to buzzy beetle
    lda((BuzzyBeetle));
    JMP(StrID);
}

int StrID() {
    // store enemy object number into buffer
    sta((Enemy_ID), x);
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    // set flag for enemy in buffer
    JSR(InitEnemyObject);
    lda((Enemy_Flag), x);
    BNE(Inc2B);
    // check to see if flag is set
    // if not, leave, otherwise branch
    rts();
    JMP(CheckFrenzyBuffer);
}

int CheckFrenzyBuffer() {
    lda((EnemyFrenzyBuffer));
    BNE(StrFre);
    lda((VineFlagOffset));
    // if enemy object stored in frenzy buffer
    // then branch ahead to store in enemy object buffer
    // otherwise check vine flag offset
    cmp(Imm(0x1));
    BNE(ExEPar);
    lda((VineObject));
    JMP(StrFre);
}

int StrFre() {
    // if other value <> 1, leave
    // otherwise put vine in enemy identifier
    // store contents of frenzy buffer into enemy identifier value
    sta((Enemy_ID), x);
    JMP(InitEnemyObject);
}

int InitEnemyObject() {
    lda(Imm(0x0));
    // initialize enemy state
    sta((Enemy_State), x);
    JSR(CheckpointEnemyID);
    JMP(ExEPar);
}

int ExEPar() {
    // jump ahead to run jump engine and subroutines
    // then leave
    rts();
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
    lda(((EnemyData)), y);
    lsr();
    lsr();
    // move 3 MSB to the bottom, effectively
    // making %xxx00000 into %00000xxx
    lsr();
    lsr();
    lsr();
    cmp((WorldNumber));
    BNE(NotUse);
    dey();
    lda(((EnemyData)), y);
    sta((AreaPointer));
    // is it the same world number as we're on?
    // if not, do not use (this allows multiple uses
    // of the same area, like the underground bonus areas)
    // otherwise, get second byte and use as offset
    // to addresses for level and enemy object data
    iny();
    lda(((EnemyData)), y);
    anda(Imm(0b11111));
    sta((EntrancePage));
    JMP(NotUse);
}

int NotUse() {
    JMP(Inc3B);
    JMP(CheckThreeBytes);
}

int CheckThreeBytes() {
    ldy((EnemyDataOffset));
    lda(((EnemyData)), y);
    anda(Imm(0b1111));
    // load current offset for enemy object data
    // get first byte
    // check for special row $0e
    cmp(Imm(0xe));
    BNE(Inc2B);
    JMP(Inc3B);
}

int Inc3B() {
    // if row = $0e, increment three bytes
    inc((EnemyDataOffset));
    JMP(Inc2B);
}

int Inc2B() {
    // otherwise increment two bytes
    inc((EnemyDataOffset));
    inc((EnemyDataOffset));
    lda(Imm(0x0));
    // init page select for enemy objects
    sta((EnemyObjectPageSel));
    ldx((ObjectOffset));
    rts();
    JMP(CheckpointEnemyID);
}

int CheckpointEnemyID() {
    lda((Enemy_ID), x);
    cmp(Imm(0x15));
    BCS(InitEnemyRoutines);
    tay();
    // check enemy object identifier for $15 or greater
    // and branch straight to the jump engine if found
    // save identifier in Y register for now
    lda((Enemy_Y_Position), x);
    adc(Imm(0x8));
    sta((Enemy_Y_Position), x);
    // add eight pixels to what will eventually be the
    // enemy object's vertical coordinate ($00-$14 only)
    lda(Imm(0x1));
    sta((EnemyOffscrBitsMasked), x);
    tya();
    JMP(InitEnemyRoutines);
}

int InitEnemyRoutines() {
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
    lda(Imm(0x2));
    sta((Enemy_Y_HighPos), x);
    // set enemy position to below
    // the bottom of the screen
    sta((Enemy_Y_Position), x);
    lsr();
    sta((EnemyIntervalTimer), x);
    // set timer for enemy
    lsr();
    sta((Enemy_State), x);
    JMP(SmallBBox);
    JMP(InitRetainerObj);
}

int InitRetainerObj() {
    lda(Imm(0xb8));
    sta((Enemy_Y_Position), x);
    // set fixed vertical position for
    // princess/mushroom retainer object
    rts();
    JMP(InitNormalEnemy);
}

int InitNormalEnemy() {
    ldy(Imm(0x1));
    lda((PrimaryHardMode));
    // load offset of 1 by default
    // check for primary hard mode flag set
    BNE(GetESpd);
    dey();
    JMP(GetESpd);
}

int GetESpd() {
    // if not set, decrement offset
    // get appropriate horizontal speed
    lda((NormalXSpdData), y);
    JMP(SetESpd);
}

int SetESpd() {
    // store as speed for enemy object
    sta((Enemy_X_Speed), x);
    JMP(TallBBox);
    JMP(InitRedKoopa);
}

int InitRedKoopa() {
    JSR(InitNormalEnemy);
    lda(Imm(0x1));
    // load appropriate horizontal speed
    // set enemy state for red koopa troopa $03
    sta((Enemy_State), x);
    rts();
    JMP(InitHammerBro);
}

int InitHammerBro() {
    lda(Imm(0x0));
    sta((HammerThrowingTimer), x);
    // init horizontal speed and timer used by hammer bro
    // apparently to time hammer throwing
    sta((Enemy_X_Speed), x);
    ldy((SecondaryHardMode));
    // get secondary hard mode flag
    lda((HBroWalkingTimerData), y);
    sta((EnemyIntervalTimer), x);
    lda(Imm(0xb));
    // set value as delay for hammer bro to walk left
    // set specific value for bounding box size control
    JMP(SetBBox);
    JMP(InitHorizFlySwimEnemy);
}

int InitHorizFlySwimEnemy() {
    lda(Imm(0x0));
    // initialize horizontal speed
    JMP(SetESpd);
    JMP(InitBloober);
}

int InitBloober() {
    lda(Imm(0x0));
    // initialize horizontal speed
    sta((BlooperMoveSpeed), x);
    JMP(SmallBBox);
}

int SmallBBox() {
    // set specific bounding box size control
    lda(Imm(0x9));
    BNE(SetBBox);
    JMP(InitRedPTroopa);
}

int InitRedPTroopa() {
    ldy(Imm(0x30));
    lda((Enemy_Y_Position), x);
    sta((RedPTroopaOrigXPos), x);
    BPL(GetCent);
    ldy(Imm(0xe0));
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
    adc((Enemy_Y_Position), x);
    sta((RedPTroopaCenterYPos), x);
    JMP(TallBBox);
}

int TallBBox() {
    // add to current vertical coordinate
    // store as central vertical coordinate
    // set specific bounding box size control
    lda(Imm(0x3));
    JMP(SetBBox);
}

int SetBBox() {
    // set bounding box control here
    sta((Enemy_BoundBoxCtrl), x);
    lda(Imm(0x2));
    // set moving direction for left
    sta((Enemy_MovingDir), x);
    JMP(InitVStf);
}

int InitVStf() {
    // initialize vertical speed
    lda(Imm(0x0));
    sta((Enemy_Y_Speed), x);
    // and movement force
    sta((Enemy_Y_MoveForce), x);
    rts();
    JMP(InitBulletBill);
}

int InitBulletBill() {
    lda(Imm(0x2));
    // set moving direction for left
    sta((Enemy_MovingDir), x);
    lda(Imm(0x9));
    // set bounding box control for $09
    sta((Enemy_BoundBoxCtrl), x);
    rts();
    JMP(InitCheepCheep);
}

int InitCheepCheep() {
    JSR(SmallBBox);
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b10000));
    sta((CheepCheepMoveMFlag), x);
    // set vertical bounding box, speed, init others
    // check one portion of LSFR
    // get d4 from it
    // save as movement flag of some sort
    lda((Enemy_Y_Position), x);
    sta((CheepCheepOrigYPos), x);
    // save original vertical coordinate here
    rts();
    JMP(InitLakitu);
}

int InitLakitu() {
    lda((EnemyFrenzyBuffer));
    BNE(KillLakitu);
    JMP(SetupLakitu);
}

int SetupLakitu() {
    lda(Imm(0x0));
    // erase counter for lakitu's reappearance
    sta((LakituReappearTimer));
    JSR(InitHorizFlySwimEnemy);
    JMP(TallBBox2);
    JMP(KillLakitu);
}

int KillLakitu() {
    JMP(EraseEnemyObject);
    JMP(LakituAndSpinyHandler);
}

int LakituAndSpinyHandler() {
    lda((FrenzyEnemyTimer));
    // if timer here not expired, leave
    BNE(ExLSHand);
    cpx(Imm(0x5));
    // if we are on the special use slot, leave
    BCS(ExLSHand);
    lda(Imm(0x80));
    // set timer
    sta((FrenzyEnemyTimer));
    ldy(Imm(0x4));
    JMP(ChkLak);
}

int ChkLak() {
    // start with the last enemy slot
    // check all enemy slots to see
    lda((Enemy_ID), y);
    cmp((Lakitu));
    BEQ(CreateSpiny);
    dey();
    BPL(ChkLak);
    inc((LakituReappearTimer));
    // if lakitu is on one of them
    // if so, branch out of this loop
    // otherwise check another slot
    // loop until all slots are checked
    // increment reappearance timer
    lda((LakituReappearTimer));
    cmp(Imm(0x7));
    BCC(ExLSHand);
    ldx(Imm(0x4));
    JMP(ChkNoEn);
}

int ChkNoEn() {
    // check to see if we're up to a certain value yet
    // if not, leave
    // start with the last enemy slot again
    // check enemy buffer flag for non-active enemy slot
    lda((Enemy_Flag), x);
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
    lda(Imm(0x0));
    sta((Enemy_State), x);
    lda((Lakitu));
    // create lakitu enemy object
    sta((Enemy_ID), x);
    JSR(SetupLakitu);
    // do a sub to set up lakitu
    lda(Imm(0x20));
    JSR(PutAtRightExtent);
    JMP(RetEOfs);
}

int RetEOfs() {
    // finish setting up lakitu
    // get enemy object buffer offset again and leave
    ldx((ObjectOffset));
    JMP(ExLSHand);
}

int ExLSHand() {
    rts();
    JMP(CreateSpiny);
}

int CreateSpiny() {
    lda((Player_Y_Position));
    // if player above a certain point, branch to leave
    cmp(Imm(0x2c));
    BCC(ExLSHand);
    lda((Enemy_State), y);
    // if lakitu is not in normal state, branch to leave
    BNE(ExLSHand);
    lda((Enemy_PageLoc), y);
    sta((Enemy_PageLoc), x);
    // store horizontal coordinates (high and low) of lakitu
    // into the coordinates of the spiny we're going to create
    lda((Enemy_X_Position), y);
    sta((Enemy_X_Position), x);
    lda(Imm(0x1));
    // put spiny within vertical screen unit
    sta((Enemy_Y_HighPos), x);
    lda((Enemy_Y_Position), y);
    // put spiny eight pixels above where lakitu is
    sec();
    sbc(Imm(0x8));
    sta((Enemy_Y_Position), x);
    lda((PseudoRandomBitReg), x);
    // get 2 LSB of LSFR and save to Y
    anda(Imm(0b11));
    tay();
    ldx(Imm(0x2));
    JMP(DifLoop);
}

int DifLoop() {
    // get three values and save them
    lda((PRDiffAdjustData), y);
    sta(Imm(0x1), x);
    // to $01-$03
    iny();
    iny();
    // increment Y four bytes for each value
    iny();
    iny();
    dex();
    BPL(DifLoop);
    ldx((ObjectOffset));
    JSR(PlayerLakituDiff);
    ldy((Player_X_Speed));
    // decrement X for each one
    // loop until all three are written
    // get enemy object buffer offset
    // move enemy, change direction, get value - difference
    // check player's horizontal speed
    cpy(Imm(0x8));
    BCS(SetSpSpd);
    tay();
    // if moving faster than a certain amount, branch elsewhere
    // otherwise save value in A to Y for now
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    anda(Imm(0b11));
    BEQ(UsePosv);
    // get one of the LSFR parts and save the 2 LSB
    // branch if neither bits are set
    tya();
    eor(Imm(0b11111111));
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
    ldy(Imm(0x2));
    sta((Enemy_X_Speed), x);
    cmp(Imm(0x0));
    BMI(SpinyRte);
    // set horizontal speed to zero because previous contents
    // of A were lost...branch here will never be taken for
    // the same reason
    dey();
    JMP(SpinyRte);
}

int SpinyRte() {
    // set moving direction to the right
    sty((Enemy_MovingDir), x);
    lda(Imm(0xfd));
    sta((Enemy_Y_Speed), x);
    // set vertical speed to move upwards
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    // enable enemy object by setting flag
    lda(Imm(0x5));
    sta((Enemy_State), x);
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
    lda(Imm(0x0));
    // initialize low byte of spin state
    sta((FirebarSpinState_Low), x);
    lda((Enemy_ID), x);
    sec();
    // subtract $1b from enemy identifier
    // to get proper offset for firebar data
    sbc(Imm(0x1b));
    tay();
    lda((FirebarSpinSpdData), y);
    // get spinning speed of firebar
    sta((FirebarSpinSpeed), x);
    lda((FirebarSpinDirData), y);
    // get spinning direction of firebar
    sta((FirebarSpinDirection), x);
    lda((Enemy_Y_Position), x);
    clc();
    // add four pixels to vertical coordinate
    adc(Imm(0x4));
    sta((Enemy_Y_Position), x);
    lda((Enemy_X_Position), x);
    clc();
    // add four pixels to horizontal coordinate
    adc(Imm(0x4));
    sta((Enemy_X_Position), x);
    lda((Enemy_PageLoc), x);
    adc(Imm(0x0));
    // add carry to page location
    sta((Enemy_PageLoc), x);
    JMP(TallBBox2);
    JMP(InitFlyingCheepCheep);
}

int InitFlyingCheepCheep() {
    lda((FrenzyEnemyTimer));
    // if timer here not expired yet, branch to leave
    BNE(ChpChpEx);
    JSR(SmallBBox);
    // jump to set bounding box size $09 and init other values
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    anda(Imm(0b11));
    // set pseudorandom offset here
    tay();
    lda((FlyCCTimerData), y);
    // load timer with pseudorandom offset
    sta((FrenzyEnemyTimer));
    ldy(Imm(0x3));
    // load Y with default value
    lda((SecondaryHardMode));
    BEQ(MaxCC);
    iny();
    JMP(MaxCC);
}

int MaxCC() {
    // if secondary hard mode flag not set, do not increment Y
    // otherwise, increment Y to allow as many as four onscreen
    // store whatever pseudorandom bits are in Y
    sty(Imm(0x0));
    cpx(Imm(0x0));
    BCS(ChpChpEx);
    // compare enemy object buffer offset with Y
    // if X => Y, branch to leave
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b11));
    sta(Imm(0x0));
    // get last two bits of LSFR, first part
    // and store in two places
    sta(Imm(0x1));
    lda(Imm(0xfb));
    // set vertical speed for cheep-cheep
    sta((Enemy_Y_Speed), x);
    lda(Imm(0x0));
    ldy((Player_X_Speed));
    BEQ(GSeed);
    // load default value
    // check player's horizontal speed
    // if player not moving left or right, skip this part
    lda(Imm(0x4));
    cpy(Imm(0x19));
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
    adc(Imm(0x0));
    sta(Imm(0x0));
    // add to last two bits of LSFR we saved earlier
    // save it there
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    anda(Imm(0b11));
    BEQ(RSeed);
    // if neither of the last two bits of second LSFR set,
    // skip this part and save contents of $00
    lda((((PseudoRandomBitReg)) + (Imm(2))), x);
    anda(Imm(0b1111));
    sta(Imm(0x0));
    JMP(RSeed);
}

int RSeed() {
    // otherwise overwrite with lower nybble of
    // third LSFR part
    // get value from stack we saved earlier
    pla();
    clc();
    adc(Imm(0x1));
    tay();
    lda((FlyCCXSpeedData), y);
    // add to last two bits of LSFR we saved in other place
    // use as pseudorandom offset here
    // get horizontal speed using pseudorandom offset
    sta((Enemy_X_Speed), x);
    lda(Imm(0x1));
    // set to move towards the right
    sta((Enemy_MovingDir), x);
    lda((Player_X_Speed));
    // if player moving left or right, branch ahead of this part
    BNE(D2XPos1);
    ldy(Imm(0x0));
    tya();
    // get first LSFR or third LSFR lower nybble
    // and check for d1 set
    anda(Imm(0b10));
    BEQ(D2XPos1);
    // if d1 not set, branch
    lda((Enemy_X_Speed), x);
    eor(Imm(0xff));
    clc();
    adc(Imm(0x1));
    // if d1 set, change horizontal speed
    // into two's compliment, thus moving in the opposite
    // direction
    sta((Enemy_X_Speed), x);
    inc((Enemy_MovingDir), x);
    JMP(D2XPos1);
}

int D2XPos1() {
    // increment to move towards the left
    // get first LSFR or third LSFR lower nybble again
    tya();
    anda(Imm(0b10));
    BEQ(D2XPos2);
    lda((Player_X_Position));
    // check for d1 set again, branch again if not set
    // get player's horizontal position
    clc();
    adc((FlyCCXPositionData), y);
    sta((Enemy_X_Position), x);
    lda((Player_PageLoc));
    adc(Imm(0x0));
    // if d1 set, add value obtained from pseudorandom offset
    // and save as enemy's horizontal position
    // get player's page location
    // add carry and jump past this part
    JMP(FinCCSt);
    JMP(D2XPos2);
}

int D2XPos2() {
    // get player's horizontal position
    lda((Player_X_Position));
    sec();
    sbc((FlyCCXPositionData), y);
    sta((Enemy_X_Position), x);
    lda((Player_PageLoc));
    sbc(Imm(0x0));
    JMP(FinCCSt);
}

int FinCCSt() {
    // if d1 not set, subtract value obtained from pseudorandom
    // offset and save as enemy's horizontal position
    // get player's page location
    // subtract borrow
    // save as enemy's page location
    sta((Enemy_PageLoc), x);
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    sta((Enemy_Y_HighPos), x);
    // set enemy's buffer flag
    // set enemy's high vertical byte
    lda(Imm(0xf8));
    sta((Enemy_Y_Position), x);
    // put enemy below the screen, and we are done
    rts();
    JMP(InitBowser);
}

int InitBowser() {
    JSR(DuplicateEnemyObj);
    stx((BowserFront_Offset));
    // jump to create another bowser object
    // save offset of first here
    lda(Imm(0x0));
    sta((BowserBodyControls));
    sta((BridgeCollapseOffset));
    // initialize bowser's body controls
    // and bridge collapse offset
    lda((Enemy_X_Position), x);
    sta((BowserOrigXPos));
    // store original horizontal position here
    lda(Imm(0xdf));
    sta((BowserFireBreathTimer));
    sta((Enemy_MovingDir), x);
    // store something here
    // and in moving direction
    lda(Imm(0x20));
    sta((BowserFeetCounter));
    // set bowser's feet timer and in enemy timer
    sta((EnemyFrameTimer), x);
    lda(Imm(0x5));
    sta((BowserHitPoints));
    // give bowser 5 hit points
    lsr();
    sta((BowserMovementSpeed));
    // set default movement speed here
    rts();
    JMP(DuplicateEnemyObj);
}

int DuplicateEnemyObj() {
    ldy(Imm(0xff));
    JMP(FSLoop);
}

int FSLoop() {
    // start at beginning of enemy slots
    // increment one slot
    iny();
    lda((Enemy_Flag), y);
    BNE(FSLoop);
    sty((DuplicateObj_Offset));
    txa();
    ora(Imm(0b10000000));
    sta((Enemy_Flag), y);
    // check enemy buffer flag for empty slot
    // if set, branch and keep checking
    // otherwise set offset here
    // transfer original enemy buffer offset
    // store with d7 set as flag in new enemy
    // slot as well as enemy offset
    lda((Enemy_PageLoc), x);
    sta((Enemy_PageLoc), y);
    lda((Enemy_X_Position), x);
    // copy page location and horizontal coordinates
    // from original enemy to new enemy
    sta((Enemy_X_Position), y);
    lda(Imm(0x1));
    sta((Enemy_Flag), x);
    sta((Enemy_Y_HighPos), y);
    // set flag as normal for original enemy
    // set high vertical byte for new enemy
    lda((Enemy_Y_Position), x);
    sta((Enemy_Y_Position), y);
    JMP(FlmEx);
}

int FlmEx() {
    // copy vertical coordinate from original to new
    // and then leave
    rts();
    JMP(InitBowserFlame);
}

int InitBowserFlame() {
    lda((FrenzyEnemyTimer));
    // if timer not expired yet, branch to leave
    BNE(FlmEx);
    sta((Enemy_Y_MoveForce), x);
    // reset something here
    lda((NoiseSoundQueue));
    ora((Sfx_BowserFlame));
    // load bowser's flame sound into queue
    sta((NoiseSoundQueue));
    ldy((BowserFront_Offset));
    lda((Enemy_ID), y);
    // get bowser's buffer offset
    // check for bowser
    cmp((Bowser));
    BEQ(SpawnFromMouth);
    JSR(SetFlameTimer);
    // branch if found
    // get timer data based on flame counter
    clc();
    adc(Imm(0x20));
    // add 32 frames by default
    ldy((SecondaryHardMode));
    BEQ(SetFrT);
    // if secondary mode flag not set, use as timer setting
    sec();
    sbc(Imm(0x10));
    JMP(SetFrT);
}

int SetFrT() {
    // otherwise subtract 16 frames for secondary hard mode
    // set timer accordingly
    sta((FrenzyEnemyTimer));
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b11));
    sta((BowserFlamePRandomOfs), x);
    tay();
    lda((FlameYPosData), y);
    JMP(PutAtRightExtent);
}

int PutAtRightExtent() {
    sta((Enemy_Y_Position), x);
    // set vertical position
    lda((ScreenRight_X_Pos));
    clc();
    adc(Imm(0x20));
    // place enemy 32 pixels beyond right side of screen
    sta((Enemy_X_Position), x);
    lda((ScreenRight_PageLoc));
    adc(Imm(0x0));
    // add carry
    sta((Enemy_PageLoc), x);
    JMP(FinishFlame);
    JMP(SpawnFromMouth);
}

int SpawnFromMouth() {
    lda((Enemy_X_Position), y);
    // get bowser's horizontal position
    sec();
    sbc(Imm(0xe));
    sta((Enemy_X_Position), x);
    // subtract 14 pixels
    // save as flame's horizontal position
    lda((Enemy_PageLoc), y);
    sta((Enemy_PageLoc), x);
    // copy page location from bowser to flame
    lda((Enemy_Y_Position), y);
    clc();
    // add 8 pixels to bowser's vertical position
    adc(Imm(0x8));
    sta((Enemy_Y_Position), x);
    // save as flame's vertical position
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b11));
    sta((Enemy_YMF_Dummy), x);
    tay();
    lda((FlameYPosData), y);
    ldy(Imm(0x0));
    cmp((Enemy_Y_Position), x);
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
    lda((FlameYMFAdderData), y);
    sta((Enemy_Y_MoveForce), x);
    // to vertical movement force
    lda(Imm(0x0));
    sta((EnemyFrenzyBuffer));
    JMP(FinishFlame);
}

int FinishFlame() {
    lda(Imm(0x8));
    // set $08 for bounding box control
    sta((Enemy_BoundBoxCtrl), x);
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    // set high byte of vertical and
    // enemy buffer flag
    sta((Enemy_Flag), x);
    lsr();
    sta((Enemy_X_MoveForce), x);
    sta((Enemy_State), x);
    // initialize horizontal movement force, and
    // enemy state
    rts();
    JMP(InitFireworks);
}

int InitFireworks() {
    lda((FrenzyEnemyTimer));
    // if timer not expired yet, branch to leave
    BNE(ExitFWk);
    lda(Imm(0x20));
    // otherwise reset timer
    sta((FrenzyEnemyTimer));
    dec((FireworksCounter));
    ldy(Imm(0x6));
    JMP(StarFChk);
}

int StarFChk() {
    dey();
    lda((Enemy_ID), y);
    cmp((StarFlagObject));
    BNE(StarFChk);
    // check for presence of star flag object
    // if there isn't a star flag object,
    // routine goes into infinite loop = crash
    lda((Enemy_X_Position), y);
    sec();
    sbc(Imm(0x30));
    pha();
    // get horizontal coordinate of star flag object, then
    // subtract 48 pixels from it and save to
    // the stack
    lda((Enemy_PageLoc), y);
    sbc(Imm(0x0));
    sta(Imm(0x0));
    lda((FireworksCounter));
    // subtract the carry from the page location
    // of the star flag object
    // get fireworks counter
    clc();
    adc((Enemy_State), y);
    tay();
    pla();
    // add state of star flag object (possibly not necessary)
    // use as offset
    // get saved horizontal coordinate of star flag - 48 pixels
    clc();
    adc((FireworksXPosData), y);
    sta((Enemy_X_Position), x);
    // add number based on offset of fireworks counter
    // store as the fireworks object horizontal coordinate
    lda(Imm(0x0));
    adc(Imm(0x0));
    sta((Enemy_PageLoc), x);
    lda((FireworksYPosData), y);
    sta((Enemy_Y_Position), x);
    // add carry and store as page location for
    // the fireworks object
    // get vertical position using same offset
    // and store as vertical coordinate for fireworks object
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    sta((Enemy_Flag), x);
    // store in vertical high byte
    // and activate enemy buffer flag
    lsr();
    sta((ExplosionGfxCounter), x);
    // initialize explosion counter
    lda(Imm(0x8));
    sta((ExplosionTimerCounter), x);
    JMP(ExitFWk);
}

int ExitFWk() {
    rts();
    JMP(BulletBillCheepCheep);
}

int BulletBillCheepCheep() {
    lda((FrenzyEnemyTimer));
    // if timer not expired yet, branch to leave
    BNE(ExF17);
    lda((AreaType));
    BNE(DoBulletBills);
    cpx(Imm(0x3));
    BCS(ExF17);
    ldy(Imm(0x0));
    // are we in a water-type level?
    // if not, branch elsewhere
    // are we past third enemy slot?
    // if so, branch to leave
    // load default offset
    lda((PseudoRandomBitReg), x);
    cmp(Imm(0xaa));
    BCC(ChkW2);
    iny();
    JMP(ChkW2);
}

int ChkW2() {
    // check first part of LSFR against preset value
    // if less than preset, do not increment offset
    // otherwise increment
    // check world number
    lda((WorldNumber));
    cmp((World2));
    BEQ(Get17ID);
    iny();
    JMP(Get17ID);
}

int Get17ID() {
    tya();
    anda(Imm(0b1));
    // mask out all but last bit of offset
    tay();
    lda((SwimCC_IDData), y);
    JMP(Set17ID);
}

int Set17ID() {
    // load identifier for cheep-cheeps
    // store whatever's in A as enemy identifier
    sta((Enemy_ID), x);
    lda((BitMFilter));
    cmp(Imm(0xff));
    // if not all bits set, skip init part and compare bits
    BNE(GetRBit);
    lda(Imm(0x0));
    // initialize vertical position filter
    sta((BitMFilter));
    JMP(GetRBit);
}

int GetRBit() {
    // get first part of LSFR
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b111));
    JMP(ChkRBit);
}

int ChkRBit() {
    // mask out all but 3 LSB
    // use as offset
    tay();
    lda((Bitmasks), y);
    bit((BitMFilter));
    // load bitmask
    // perform AND on filter without changing it
    BEQ(AddFBit);
    iny();
    // increment offset
    tya();
    anda(Imm(0b111));
    JMP(ChkRBit);
    JMP(AddFBit);
}

int AddFBit() {
    // mask out all but 3 LSB thus keeping it 0-7
    // do another check
    // add bit to already set bits in filter
    ora((BitMFilter));
    sta((BitMFilter));
    lda((Enemy17YPosData), y);
    JSR(PutAtRightExtent);
    sta((Enemy_YMF_Dummy), x);
    lda(Imm(0x20));
    // and store
    // load vertical position using offset
    // set vertical position and other values
    // initialize dummy variable
    // set timer
    sta((FrenzyEnemyTimer));
    JMP(CheckpointEnemyID);
    JMP(DoBulletBills);
}

int DoBulletBills() {
    ldy(Imm(0xff));
    JMP(BB_SLoop);
}

int BB_SLoop() {
    // start at beginning of enemy slots
    // move onto the next slot
    iny();
    cpy(Imm(0x5));
    // branch to play sound if we've done all slots
    BCS(FireBulletBill);
    lda((Enemy_Flag), y);
    BEQ(BB_SLoop);
    // if enemy buffer flag not set,
    // loop back and check another slot
    lda((Enemy_ID), y);
    cmp((BulletBill_FrenzyVar));
    BNE(BB_SLoop);
    JMP(ExF17);
}

int ExF17() {
    // check enemy identifier for
    // bullet bill object (frenzy variant)
    // if found, leave
    rts();
    JMP(FireBulletBill);
}

int FireBulletBill() {
    lda((Square2SoundQueue));
    ora((Sfx_Blast));
    // play fireworks/gunfire sound
    sta((Square2SoundQueue));
    lda((BulletBill_FrenzyVar));
    BNE(Set17ID);
    JMP(HandleGroupEnemies);
}

int HandleGroupEnemies() {
    ldy(Imm(0x0));
    // load value for green koopa troopa
    sec();
    sbc(Imm(0x37));
    pha();
    cmp(Imm(0x4));
    BCS(SnglID);
    pha();
    ldy((Goomba));
    lda((PrimaryHardMode));
    BEQ(PullID);
    ldy((BuzzyBeetle));
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
    sty(Imm(0x1));
    ldy(Imm(0xb0));
    anda(Imm(0x2));
    BEQ(SetYGp);
    ldy(Imm(0x70));
    JMP(SetYGp);
}

int SetYGp() {
    // load default y coordinate
    // check to see if d1 was set
    // if so, move y coordinate up,
    // otherwise branch and use default
    // save y coordinate here
    sty(Imm(0x0));
    lda((ScreenRight_PageLoc));
    sta(Imm(0x2));
    lda((ScreenRight_X_Pos));
    sta(Imm(0x3));
    ldy(Imm(0x2));
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
    sty((NumberofGroupEnemies));
    JMP(GrLoop);
}

int GrLoop() {
    // start at beginning of enemy buffers
    ldx(Imm(0xff));
    JMP(GSltLp);
}

int GSltLp() {
    // increment and branch if past
    inx();
    cpx(Imm(0x5));
    // end of buffers
    BCS(NextED);
    lda((Enemy_Flag), x);
    BNE(GSltLp);
    // check to see if enemy is already
    // stored in buffer, and branch if so
    lda(Imm(0x1));
    sta((Enemy_ID), x);
    // store enemy object identifier
    lda(Imm(0x2));
    sta((Enemy_PageLoc), x);
    // store page location for enemy object
    lda(Imm(0x3));
    sta((Enemy_X_Position), x);
    // store x coordinate for enemy object
    clc();
    adc(Imm(0x18));
    // add 24 pixels for next enemy
    sta(Imm(0x3));
    lda(Imm(0x2));
    adc(Imm(0x0));
    // add carry to page location for
    // next enemy
    sta(Imm(0x2));
    lda(Imm(0x0));
    // store y coordinate for enemy object
    sta((Enemy_Y_Position), x);
    lda(Imm(0x1));
    sta((Enemy_Y_HighPos), x);
    // activate flag for buffer, and
    // put enemy within the screen vertically
    sta((Enemy_Flag), x);
    JSR(CheckpointEnemyID);
    dec((NumberofGroupEnemies));
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
    lda(Imm(0x1));
    // set initial speed
    sta((PiranhaPlant_Y_Speed), x);
    lsr();
    sta((Enemy_State), x);
    sta((PiranhaPlant_MoveFlag), x);
    // initialize enemy state and what would normally
    // be used as vertical speed, but not in this case
    lda((Enemy_Y_Position), x);
    sta((PiranhaPlantDownYPos), x);
    // save original vertical coordinate here
    sec();
    sbc(Imm(0x18));
    sta((PiranhaPlantUpYPos), x);
    // save original vertical coordinate - 24 pixels here
    lda(Imm(0x9));
    JMP(SetBBox2);
    JMP(InitEnemyFrenzy);
}

int InitEnemyFrenzy() {
    lda((Enemy_ID), x);
    sta((EnemyFrenzyBuffer));
    // load enemy identifier
    // save in enemy frenzy buffer
    sec();
    sbc(Imm(0x12));
    JMP(NoFrenzyCode);
}

int NoFrenzyCode() {
    rts();
    JMP(EndFrenzy);
}

int EndFrenzy() {
    ldy(Imm(0x5));
    JMP(LakituChk);
}

int LakituChk() {
    // start at last slot
    // check enemy identifiers
    lda((Enemy_ID), y);
    cmp((Lakitu));
    // for lakitu
    BNE(NextFSlot);
    lda(Imm(0x1));
    // if found, set state
    sta((Enemy_State), y);
    JMP(NextFSlot);
}

int NextFSlot() {
    // move onto the next slot
    dey();
    BPL(LakituChk);
    // do this until all slots are checked
    lda(Imm(0x0));
    sta((EnemyFrenzyBuffer));
    sta((Enemy_Flag), x);
    // empty enemy frenzy buffer
    // disable enemy buffer flag for this object
    rts();
    JMP(InitJumpGPTroopa);
}

int InitJumpGPTroopa() {
    lda(Imm(0x2));
    // set for movement to the left
    sta((Enemy_MovingDir), x);
    lda(Imm(0xf8));
    // set horizontal speed
    sta((Enemy_X_Speed), x);
    JMP(TallBBox2);
}

int TallBBox2() {
    // set specific value for bounding box control
    lda(Imm(0x3));
    JMP(SetBBox2);
}

int SetBBox2() {
    // set bounding box control then leave
    sta((Enemy_BoundBoxCtrl), x);
    rts();
    JMP(InitBalPlatform);
}

int InitBalPlatform() {
    dec((Enemy_Y_Position), x);
    // raise vertical position by two pixels
    dec((Enemy_Y_Position), x);
    ldy((SecondaryHardMode));
    BNE(AlignP);
    ldy(Imm(0x2));
    JSR(PosPlatform);
    JMP(AlignP);
}

int AlignP() {
    // if secondary hard mode flag not set,
    // branch ahead
    // otherwise set value here
    // do a sub to add or subtract pixels
    // set default value here for now
    ldy(Imm(0xff));
    lda((BalPlatformAlignment));
    sta((Enemy_State), x);
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
    sty((BalPlatformAlignment));
    lda(Imm(0x0));
    sta((Enemy_MovingDir), x);
    tay();
    JSR(PosPlatform);
    JMP(InitDropPlatform);
}

int InitDropPlatform() {
    lda(Imm(0xff));
    sta((PlatformCollisionFlag), x);
    JMP(CommonPlatCode);
    JMP(InitHoriPlatform);
}

int InitHoriPlatform() {
    lda(Imm(0x0));
    sta((XMoveSecondaryCounter), x);
    JMP(CommonPlatCode);
    JMP(InitVertPlatform);
}

int InitVertPlatform() {
    ldy(Imm(0x40));
    lda((Enemy_Y_Position), x);
    BPL(SetYO);
    // set default value here
    // check vertical position
    // if above a certain point, skip this part
    eor(Imm(0xff));
    clc();
    // otherwise get two's compliment
    adc(Imm(0x1));
    ldy(Imm(0xc0));
    JMP(SetYO);
}

int SetYO() {
    // get alternate value to add to vertical position
    // save as top vertical position
    sta((YPlatformTopYPos), x);
    tya();
    clc();
    adc((Enemy_Y_Position), x);
    sta((YPlatformCenterYPos), x);
    JMP(CommonPlatCode);
}

int CommonPlatCode() {
    JSR(InitVStf);
    JMP(SPBBox);
}

int SPBBox() {
    // do a sub to init certain other values
    // set default bounding box size control
    lda(Imm(0x5));
    ldy((AreaType));
    cpy(Imm(0x3));
    BEQ(CasPBB);
    ldy((SecondaryHardMode));
    BNE(CasPBB);
    lda(Imm(0x6));
    JMP(CasPBB);
}

int CasPBB() {
    // check for castle-type level
    // use default value if found
    // otherwise check for secondary hard mode flag
    // if set, use default value
    // use alternate value if not castle or secondary not set
    // set bounding box size control here and leave
    sta((Enemy_BoundBoxCtrl), x);
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
    lda(Imm(0x10));
    // set movement amount here
    sta((Enemy_Y_MoveForce), x);
    lda(Imm(0xff));
    // set moving speed for platforms going up
    sta((Enemy_Y_Speed), x);
    JMP(CommonSmallLift);
    JMP(PlatLiftDown);
}

int PlatLiftDown() {
    lda(Imm(0xf0));
    // set movement amount here
    sta((Enemy_Y_MoveForce), x);
    lda(Imm(0x0));
    // set moving speed for platforms going down
    sta((Enemy_Y_Speed), x);
    JMP(CommonSmallLift);
}

int CommonSmallLift() {
    ldy(Imm(0x1));
    JSR(PosPlatform);
    // do a sub to add 12 pixels due to preset value
    lda(Imm(0x4));
    sta((Enemy_BoundBoxCtrl), x);
    // set bounding box control for small platforms
    rts();
    JMP(PosPlatform);
}

int PosPlatform() {
    lda((Enemy_X_Position), x);
    // get horizontal coordinate
    clc();
    adc((PlatPosDataLow), y);
    sta((Enemy_X_Position), x);
    // add or subtract pixels depending on offset
    // store as new horizontal coordinate
    lda((Enemy_PageLoc), x);
    adc((PlatPosDataHigh), y);
    sta((Enemy_PageLoc), x);
    rts();
    JMP(EndOfEnemyInitCode);
}

int EndOfEnemyInitCode() {
    rts();
    JMP(RunEnemyObjectsCore);
}

int RunEnemyObjectsCore() {
    ldx((ObjectOffset));
    lda(Imm(0x0));
    // get offset for enemy object buffer
    // load value 0 for jump engine by default
    ldy((Enemy_ID), x);
    cpy(Imm(0x15));
    // if enemy object < $15, use default value
    BCC(JmpEO);
    tya();
    sbc(Imm(0x14));
    JMP(JmpEO);
}

int JmpEO() {
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
    lda(Imm(0x0));
    // init sprite attributes
    sta((Enemy_SprAttrib), x);
    JSR(GetEnemyOffscreenBits);
    JSR(RelativeEnemyPosition);
    JSR(EnemyGfxHandler);
    JSR(GetEnemyBoundBox);
    JSR(EnemyToBGCollisionDet);
    JSR(EnemiesCollision);
    JSR(PlayerEnemyCollision);
    ldy((TimerControl));
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
    lda((Enemy_ID), x);
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
    lda((TimerControl));
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
    lda((Enemy_ID), x);
    // subtract $24 to get proper offset for jump table
    sec();
    sbc(Imm(0x24));
    JMP(EraseEnemyObject);
}

int EraseEnemyObject() {
    lda(Imm(0x0));
    // clear all enemy object variables
    sta((Enemy_Flag), x);
    sta((Enemy_ID), x);
    sta((Enemy_State), x);
    sta((FloateyNum_Control), x);
    sta((EnemyIntervalTimer), x);
    sta((ShellChainCounter), x);
    sta((Enemy_SprAttrib), x);
    sta((EnemyFrameTimer), x);
    rts();
    JMP(MovePodoboo);
}

int MovePodoboo() {
    lda((EnemyIntervalTimer), x);
    BNE(PdbM);
    JSR(InitPodoboo);
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    ora(Imm(0b10000000));
    sta((Enemy_Y_MoveForce), x);
    anda(Imm(0b1111));
    ora(Imm(0x6));
    sta((EnemyIntervalTimer), x);
    // check enemy timer
    // branch to move enemy if not expired
    // otherwise set up podoboo again
    // get part of LSFR
    // set d7
    // store as movement force
    // mask out high nybble
    // set for at least six intervals
    // store as new enemy timer
    lda(Imm(0xf9));
    sta((Enemy_Y_Speed), x);
    JMP(PdbM);
}

int PdbM() {
    // set vertical speed to move podoboo upwards
    // branch to impose gravity on podoboo
    JMP(MoveJ_EnemyVertically);
    JMP(ProcHammerBro);
}

int ProcHammerBro() {
    lda((Enemy_State), x);
    // check hammer bro's enemy state for d5 set
    anda(Imm(0b100000));
    BEQ(ChkJH);
    JMP(MoveDefeatedEnemy);
    JMP(ChkJH);
}

int ChkJH() {
    // if not set, go ahead with code
    // otherwise jump to something else
    // check jump timer
    lda((HammerBroJumpTimer), x);
    BEQ(HammerBroJumpCode);
    dec((HammerBroJumpTimer), x);
    // if expired, branch to jump
    // otherwise decrement jump timer
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1100));
    BNE(MoveHammerBroXDir);
    lda((HammerThrowingTimer), x);
    BNE(DecHT);
    ldy((SecondaryHardMode));
    lda((HammerThrowTmrData), y);
    sta((HammerThrowingTimer), x);
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
    lda((Enemy_State), x);
    ora(Imm(0b1000));
    // set d3 in enemy state for hammer throw
    sta((Enemy_State), x);
    JMP(MoveHammerBroXDir);
    JMP(DecHT);
}

int DecHT() {
    // jump to move hammer bro
    // decrement timer
    dec((HammerThrowingTimer), x);
    JMP(MoveHammerBroXDir);
    JMP(HammerBroJumpCode);
}

int HammerBroJumpCode() {
    lda((Enemy_State), x);
    anda(Imm(0b111));
    cmp(Imm(0x1));
    BEQ(MoveHammerBroXDir);
    lda(Imm(0x0));
    sta(Imm(0x0));
    ldy(Imm(0xfa));
    lda((Enemy_Y_Position), x);
    BMI(SetHJ);
    ldy(Imm(0xfd));
    cmp(Imm(0x70));
    inc(Imm(0x0));
    BCC(SetHJ);
    dec(Imm(0x0));
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
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
    anda(Imm(0x1));
    BNE(SetHJ);
    ldy(Imm(0xfa));
    JMP(SetHJ);
}

int SetHJ() {
    // if d0 of LSFR set, branch and use current speed and $00
    // otherwise reset to default vertical speed
    // set vertical speed for jumping
    sty((Enemy_Y_Speed), x);
    lda((Enemy_State), x);
    // set d0 in enemy state for jumping
    ora(Imm(0x1));
    sta((Enemy_State), x);
    lda(Imm(0x0));
    anda((((PseudoRandomBitReg)) + (Imm(2))), x);
    tay();
    lda((SecondaryHardMode));
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
    lda((HammerBroJumpLData), y);
    sta((EnemyFrameTimer), x);
    // save in enemy timer
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    ora(Imm(0b11000000));
    sta((HammerBroJumpTimer), x);
    JMP(MoveHammerBroXDir);
}

int MoveHammerBroXDir() {
    ldy(Imm(0xfc));
    // move hammer bro a little to the left
    lda((FrameCounter));
    anda(Imm(0b1000000));
    // change hammer bro's direction every 64 frames
    BNE(Shimmy);
    ldy(Imm(0x4));
    JMP(Shimmy);
}

int Shimmy() {
    // if d6 set in counter, move him a little to the right
    // store horizontal speed
    sty((Enemy_X_Speed), x);
    ldy(Imm(0x1));
    JSR(PlayerEnemyDiff);
    BMI(SetShim);
    iny();
    lda((EnemyIntervalTimer), x);
    BNE(SetShim);
    // set to face right by default
    // get horizontal difference between player and hammer bro
    // if enemy to the left of player, skip this part
    // set to face left
    // check walking timer
    // if not yet expired, skip to set moving direction
    lda(Imm(0xf8));
    sta((Enemy_X_Speed), x);
    JMP(SetShim);
}

int SetShim() {
    // otherwise, make the hammer bro walk left towards player
    // set moving direction
    sty((Enemy_MovingDir), x);
    JMP(MoveNormalEnemy);
}

int MoveNormalEnemy() {
    ldy(Imm(0x0));
    // init Y to leave horizontal movement as-is
    lda((Enemy_State), x);
    anda(Imm(0b1000000));
    BNE(FallE);
    // check enemy state for d6 set, if set skip
    // to move enemy vertically, then horizontally if necessary
    lda((Enemy_State), x);
    asl();
    BCS(SteadM);
    // check enemy state for d7 set
    // if set, branch to move enemy horizontally
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    BNE(MoveDefeatedEnemy);
    // check enemy state for d5 set
    // if set, branch to move defeated enemy object
    lda((Enemy_State), x);
    anda(Imm(0b111));
    BEQ(SteadM);
    // check d2-d0 of enemy state for any set bits
    // if enemy in normal state, branch to move enemy horizontally
    cmp(Imm(0x5));
    BEQ(FallE);
    // if enemy in state used by spiny's egg, go ahead here
    cmp(Imm(0x3));
    BCS(ReviveStunned);
    JMP(FallE);
}

int FallE() {
    // if enemy in states $03 or $04, skip ahead to yet another part
    // do a sub here to move enemy downwards
    JSR(MoveD_EnemyVertically);
    ldy(Imm(0x0));
    lda((Enemy_State), x);
    // check for enemy state $02
    cmp(Imm(0x2));
    BEQ(MEHor);
    anda(Imm(0b1000000));
    BEQ(SteadM);
    // if found, branch to move enemy horizontally
    // check for d6 set
    // if not set, branch to something else
    lda((Enemy_ID), x);
    cmp((PowerUpObject));
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
    ldy(Imm(0x1));
    JMP(SteadM);
}

int SteadM() {
    // get current horizontal speed
    lda((Enemy_X_Speed), x);
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
    adc((XSpeedAdderData), y);
    sta((Enemy_X_Speed), x);
    JSR(MoveEnemyHorizontally);
    // add value here to slow enemy down if necessary
    // save as horizontal speed temporarily
    // then do a sub to move horizontally
    pla();
    sta((Enemy_X_Speed), x);
    rts();
    JMP(ReviveStunned);
}

int ReviveStunned() {
    lda((EnemyIntervalTimer), x);
    BNE(ChkKillGoomba);
    sta((Enemy_State), x);
    // if enemy timer not expired yet,
    // skip ahead to something else
    // otherwise initialize enemy state to normal
    lda((FrameCounter));
    anda(Imm(0x1));
    tay();
    // get d0 of frame counter
    // use as Y and increment for movement direction
    iny();
    sty((Enemy_MovingDir), x);
    dey();
    lda((PrimaryHardMode));
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
    lda((RevivedXSpeed), y);
    sta((Enemy_X_Speed), x);
    // and leave
    rts();
    JMP(MoveDefeatedEnemy);
}

int MoveDefeatedEnemy() {
    JSR(MoveD_EnemyVertically);
    JMP(MoveEnemyHorizontally);
    JMP(ChkKillGoomba);
}

int ChkKillGoomba() {
    cmp(Imm(0xe));
    BNE(NKGmba);
    // check to see if enemy timer has reached
    // a certain point, and branch to leave if not
    lda((Enemy_ID), x);
    cmp((Goomba));
    BNE(NKGmba);
    JSR(EraseEnemyObject);
    JMP(NKGmba);
}

int NKGmba() {
    // check for goomba object
    // branch if not found
    // otherwise, kill this goomba object
    // leave!
    rts();
    JMP(MoveJumpingEnemy);
}

int MoveJumpingEnemy() {
    JSR(MoveJ_EnemyVertically);
    JMP(MoveEnemyHorizontally);
    JMP(ProcMoveRedPTroopa);
}

int ProcMoveRedPTroopa() {
    lda((Enemy_Y_Speed), x);
    ora((Enemy_Y_MoveForce), x);
    BNE(MoveRedPTUpOrDown);
    sta((Enemy_YMF_Dummy), x);
    lda((Enemy_Y_Position), x);
    // check for any vertical force or speed
    // branch if any found
    // initialize something here
    // check current vs. original vertical coordinate
    cmp((RedPTroopaOrigXPos), x);
    BCS(MoveRedPTUpOrDown);
    lda((FrameCounter));
    anda(Imm(0b111));
    BNE(NoIncPT);
    inc((Enemy_Y_Position), x);
    JMP(NoIncPT);
}

int NoIncPT() {
    // if current => original, skip ahead to more code
    // get frame counter
    // mask out all but 3 LSB
    // if any bits set, branch to leave
    // otherwise increment red paratroopa's vertical position
    // leave
    rts();
    JMP(MoveRedPTUpOrDown);
}

int MoveRedPTUpOrDown() {
    lda((Enemy_Y_Position), x);
    // check current vs. central vertical coordinate
    cmp((RedPTroopaCenterYPos), x);
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
    ldy(Imm(0x1));
    // do sub to increment primary and secondary counters
    // do sub to move green paratroopa accordingly, and horizontally
    // set Y to move green paratroopa down
    lda((FrameCounter));
    anda(Imm(0b11));
    BNE(NoMGPT);
    // check frame counter 2 LSB for any bits set
    // branch to leave if set to move up/down every fourth frame
    lda((FrameCounter));
    anda(Imm(0b1000000));
    BNE(YSway);
    ldy(Imm(0xff));
    JMP(YSway);
}

int YSway() {
    // check frame counter for d6 set
    // branch to move green paratroopa down if set
    // otherwise set Y to move green paratroopa up
    // store adder here
    sty(Imm(0x0));
    lda((Enemy_Y_Position), x);
    clc();
    adc(Imm(0x0));
    // add or subtract from vertical position
    // to give green paratroopa a wavy flight
    sta((Enemy_Y_Position), x);
    JMP(NoMGPT);
}

int NoMGPT() {
    // leave!
    rts();
    JMP(XMoveCntr_GreenPTroopa);
}

int XMoveCntr_GreenPTroopa() {
    lda(Imm(0x13));
    JMP(XMoveCntr_Platform);
}

int XMoveCntr_Platform() {
    sta(Imm(0x1));
    // store value here
    lda((FrameCounter));
    anda(Imm(0b11));
    BNE(NoIncXM);
    ldy((XMoveSecondaryCounter), x);
    lda((XMovePrimaryCounter), x);
    // branch to leave if not on
    // every fourth frame
    // get secondary counter
    // get primary counter
    lsr();
    BCS(DecSeXM);
    cpy(Imm(0x1));
    BEQ(IncPXM);
    inc((XMoveSecondaryCounter), x);
    JMP(NoIncXM);
}

int NoIncXM() {
    rts();
    JMP(IncPXM);
}

int IncPXM() {
    // increment primary counter and leave
    inc((XMovePrimaryCounter), x);
    rts();
    JMP(DecSeXM);
}

int DecSeXM() {
    // put secondary counter in A
    tya();
    BEQ(IncPXM);
    dec((XMoveSecondaryCounter), x);
    // if secondary counter at zero, branch back
    // otherwise decrement secondary counter and leave
    rts();
    JMP(MoveWithXMCntrs);
}

int MoveWithXMCntrs() {
    lda((XMoveSecondaryCounter), x);
    // save secondary counter to stack
    pha();
    ldy(Imm(0x1));
    // set value here by default
    lda((XMovePrimaryCounter), x);
    anda(Imm(0b10));
    BNE(XMRight);
    // if d1 of primary counter is
    // set, branch ahead of this part here
    lda((XMoveSecondaryCounter), x);
    eor(Imm(0xff));
    clc();
    // otherwise change secondary
    // counter to two's compliment
    adc(Imm(0x1));
    sta((XMoveSecondaryCounter), x);
    ldy(Imm(0x2));
    JMP(XMRight);
}

int XMRight() {
    // load alternate value here
    // store as moving direction
    sty((Enemy_MovingDir), x);
    JSR(MoveEnemyHorizontally);
    sta(Imm(0x0));
    pla();
    sta((XMoveSecondaryCounter), x);
    // save value obtained from sub here
    // get secondary counter from stack
    // and return to original place
    rts();
    JMP(MoveBloober);
}

int MoveBloober() {
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    BNE(MoveDefeatedBloober);
    ldy((SecondaryHardMode));
    lda((((PseudoRandomBitReg)) + (Imm(1))), x);
    anda((BlooberBitmasks), y);
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
    ldy((Player_MovingDir));
    BCS(SBMDir);
    JMP(FBLeft);
}

int FBLeft() {
    // check to see if on second or fourth slot (1 or 3)
    // if not, branch to figure out moving direction
    // otherwise, load player's moving direction and
    // do an unconditional branch to set
    // set left moving direction by default
    ldy(Imm(0x2));
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
    sty((Enemy_MovingDir), x);
    JMP(BlooberSwim);
}

int BlooberSwim() {
    JSR(ProcSwimmingB);
    lda((Enemy_Y_Position), x);
    // execute sub to make bloober swim characteristically
    // get vertical coordinate
    sec();
    sbc((Enemy_Y_MoveForce), x);
    cmp(Imm(0x20));
    BCC(SwimX);
    sta((Enemy_Y_Position), x);
    JMP(SwimX);
}

int SwimX() {
    // subtract movement force
    // check to see if position is above edge of status bar
    // if so, don't do it
    // otherwise, set new vertical position, make bloober swim
    // check moving direction
    ldy((Enemy_MovingDir), x);
    dey();
    BNE(LeftSwim);
    // if moving to the left, branch to second part
    lda((Enemy_X_Position), x);
    clc();
    // add movement speed to horizontal coordinate
    adc((BlooperMoveSpeed), x);
    sta((Enemy_X_Position), x);
    // store result as new horizontal coordinate
    lda((Enemy_PageLoc), x);
    adc(Imm(0x0));
    sta((Enemy_PageLoc), x);
    // add carry to page location
    // store as new page location and leave
    rts();
    JMP(LeftSwim);
}

int LeftSwim() {
    lda((Enemy_X_Position), x);
    sec();
    // subtract movement speed from horizontal coordinate
    sbc((BlooperMoveSpeed), x);
    sta((Enemy_X_Position), x);
    // store result as new horizontal coordinate
    lda((Enemy_PageLoc), x);
    sbc(Imm(0x0));
    sta((Enemy_PageLoc), x);
    // subtract borrow from page location
    // store as new page location and leave
    rts();
    JMP(MoveDefeatedBloober);
}

int MoveDefeatedBloober() {
    JMP(MoveEnemySlowVert);
    JMP(ProcSwimmingB);
}

int ProcSwimmingB() {
    lda((BlooperMoveCounter), x);
    anda(Imm(0b10));
    BNE(ChkForFloatdown);
    // get enemy's movement counter
    // check for d1 set
    // branch if set
    lda((FrameCounter));
    anda(Imm(0b111));
    pha();
    lda((BlooperMoveCounter), x);
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
    lda((Enemy_Y_MoveForce), x);
    clc();
    // add to movement force to speed up swim
    adc(Imm(0x1));
    sta((Enemy_Y_MoveForce), x);
    sta((BlooperMoveSpeed), x);
    // set movement force
    // set as movement speed
    cmp(Imm(0x2));
    BNE(BSwimE);
    inc((BlooperMoveCounter), x);
    JMP(BSwimE);
}

int BSwimE() {
    rts();
    JMP(SlowSwim);
}

int SlowSwim() {
    pla();
    BNE(NoSSw);
    // pull 3 LSB of frame counter from the stack
    // branch to leave, execute code only every eighth frame
    lda((Enemy_Y_MoveForce), x);
    sec();
    // subtract from movement force to slow swim
    sbc(Imm(0x1));
    sta((Enemy_Y_MoveForce), x);
    sta((BlooperMoveSpeed), x);
    BNE(NoSSw);
    inc((BlooperMoveCounter), x);
    // set movement force
    // set as movement speed
    // if any speed, branch to leave
    // otherwise increment movement counter
    lda(Imm(0x2));
    sta((EnemyIntervalTimer), x);
    JMP(NoSSw);
}

int NoSSw() {
    // set enemy's timer
    // leave
    rts();
    JMP(ChkForFloatdown);
}

int ChkForFloatdown() {
    lda((EnemyIntervalTimer), x);
    BEQ(ChkNearPlayer);
    JMP(Floatdown);
}

int Floatdown() {
    lda((FrameCounter));
    lsr();
    BCS(NoFD);
    inc((Enemy_Y_Position), x);
    JMP(NoFD);
}

int NoFD() {
    // get frame counter
    // check for d0 set
    // branch to leave on every other frame
    // otherwise increment vertical coordinate
    // leave
    rts();
    JMP(ChkNearPlayer);
}

int ChkNearPlayer() {
    lda((Enemy_Y_Position), x);
    adc(Imm(0x10));
    cmp((Player_Y_Position));
    BCC(Floatdown);
    // get vertical coordinate
    // add sixteen pixels
    // compare result with player's vertical coordinate
    // if modified vertical less than player's, branch
    lda(Imm(0x0));
    sta((BlooperMoveCounter), x);
    // otherwise nullify movement counter
    rts();
    JMP(MoveBulletBill);
}

int MoveBulletBill() {
    lda((Enemy_State), x);
    // check bullet bill's enemy object state for d5 set
    anda(Imm(0b100000));
    BEQ(NotDefB);
    JMP(MoveJ_EnemyVertically);
    JMP(NotDefB);
}

int NotDefB() {
    // if not set, continue with movement code
    // otherwise jump to move defeated bullet bill downwards
    // set bullet bill's horizontal speed
    lda(Imm(0xe8));
    sta((Enemy_X_Speed), x);
    JMP(MoveEnemyHorizontally);
    JMP(MoveSwimmingCheepCheep);
}

int MoveSwimmingCheepCheep() {
    lda((Enemy_State), x);
    anda(Imm(0b100000));
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
    sta(Imm(0x3));
    lda((Enemy_ID), x);
    // get enemy identifier
    sec();
    sbc(Imm(0xa));
    tay();
    lda((SwimCCXMoveData), y);
    // subtract ten for cheep-cheep identifiers
    // use as offset
    // load value here
    sta(Imm(0x2));
    lda((Enemy_X_MoveForce), x);
    // load horizontal force
    sec();
    sbc(Imm(0x2));
    sta((Enemy_X_MoveForce), x);
    lda((Enemy_X_Position), x);
    sbc(Imm(0x0));
    sta((Enemy_X_Position), x);
    // subtract preset value from horizontal force
    // store as new horizontal force
    // get horizontal coordinate
    // subtract borrow (thus moving it slowly)
    // and save as new horizontal coordinate
    lda((Enemy_PageLoc), x);
    sbc(Imm(0x0));
    sta((Enemy_PageLoc), x);
    // subtract borrow again, this time from the
    // page location, then save
    lda(Imm(0x20));
    sta(Imm(0x2));
    cpx(Imm(0x2));
    BCC(ExSwCC);
    lda((CheepCheepMoveMFlag), x);
    cmp(Imm(0x10));
    BCC(CCSwimUpwards);
    // save new value here
    // check enemy object offset
    // if in first or second slot, branch to leave
    // check movement flag
    // if movement speed set to $00,
    // branch to move upwards
    lda((Enemy_YMF_Dummy), x);
    clc();
    adc(Imm(0x2));
    sta((Enemy_YMF_Dummy), x);
    lda((Enemy_Y_Position), x);
    adc(Imm(0x3));
    sta((Enemy_Y_Position), x);
    // add preset value to dummy variable to get carry
    // and save dummy
    // get vertical coordinate
    // add carry to it plus enemy state to slowly move it downwards
    // save as new vertical coordinate
    lda((Enemy_Y_HighPos), x);
    adc(Imm(0x0));
    JMP(ChkSwimYPos);
    JMP(CCSwimUpwards);
}

int CCSwimUpwards() {
    lda((Enemy_YMF_Dummy), x);
    sec();
    sbc(Imm(0x2));
    sta((Enemy_YMF_Dummy), x);
    lda((Enemy_Y_Position), x);
    sbc(Imm(0x3));
    sta((Enemy_Y_Position), x);
    // subtract preset value to dummy variable to get borrow
    // and save dummy
    // get vertical coordinate
    // subtract borrow to it plus enemy state to slowly move it upwards
    // save as new vertical coordinate
    lda((Enemy_Y_HighPos), x);
    sbc(Imm(0x0));
    JMP(ChkSwimYPos);
}

int ChkSwimYPos() {
    sta((Enemy_Y_HighPos), x);
    ldy(Imm(0x0));
    lda((Enemy_Y_Position), x);
    // save new page location here
    // load movement speed to upwards by default
    // get vertical coordinate
    sec();
    sbc((CheepCheepOrigYPos), x);
    BPL(YPDiff);
    ldy(Imm(0x10));
    // subtract original coordinate from current
    // if result positive, skip to next part
    // otherwise load movement speed to downwards
    eor(Imm(0xff));
    clc();
    adc(Imm(0x1));
    JMP(YPDiff);
}

int YPDiff() {
    // get two's compliment of result
    // to obtain total difference of original vs. current
    // if difference between original vs. current vertical
    cmp(Imm(0xf));
    BCC(ExSwCC);
    // coordinates < 15 pixels, leave movement speed alone
    tya();
    sta((CheepCheepMoveMFlag), x);
    JMP(ExSwCC);
}

int ExSwCC() {
    // otherwise change movement speed
    // leave
    rts();
    JMP(ProcFirebar);
}

int ProcFirebar() {
    JSR(GetEnemyOffscreenBits);
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1000));
    // get offscreen information
    // check for d3 set
    // if so, branch to leave
    BNE(SkipFBar);
    lda((TimerControl));
    BNE(SusFbar);
    lda((FirebarSpinSpeed), x);
    JSR(FirebarSpin);
    anda(Imm(0b11111));
    sta((FirebarSpinState_High), x);
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
    lda((FirebarSpinState_High), x);
    ldy((Enemy_ID), x);
    // check enemy identifier
    cpy(Imm(0x1f));
    BCC(SetupGFB);
    cmp(Imm(0x8));
    BEQ(SkpFSte);
    // if < $1f (long firebar), branch
    // check high byte of spinstate
    // if eight, branch to change
    cmp(Imm(0x18));
    BNE(SetupGFB);
    JMP(SkpFSte);
}

int SkpFSte() {
    clc();
    adc(Imm(0x1));
    // add one to spinning thing to avoid horizontal state
    sta((FirebarSpinState_High), x);
    JMP(SetupGFB);
}

int SetupGFB() {
    // save high byte of spinning thing, modified or otherwise
    sta(Imm(0xef));
    JSR(RelativeEnemyPosition);
    JSR(GetFirebarPosition);
    ldy((Enemy_SprDataOffset), x);
    lda((Enemy_Rel_YPos));
    sta((Sprite_Y_Position), y);
    sta(Imm(0x7));
    lda((Enemy_Rel_XPos));
    sta((Sprite_X_Position), y);
    sta(Imm(0x6));
    // get relative coordinates to screen
    // do a sub here (residual, too early to be used now)
    // get OAM data offset
    // get relative vertical coordinate
    // store as Y in OAM data
    // also save here
    // get relative horizontal coordinate
    // store as X in OAM data
    // also save here
    lda(Imm(0x1));
    sta(Imm(0x0));
    JSR(FirebarCollision);
    ldy(Imm(0x5));
    // set $01 value here (not necessary)
    // draw fireball part and do collision detection
    // load value for short firebars by default
    lda((Enemy_ID), x);
    cmp(Imm(0x1f));
    BCC(SetMFbar);
    ldy(Imm(0xb));
    JMP(SetMFbar);
}

int SetMFbar() {
    // are we doing a long firebar?
    // no, branch then
    // otherwise load value for long firebars
    // store maximum value for length of firebars
    sty(Imm(0xed));
    lda(Imm(0x0));
    sta(Imm(0x0));
    JMP(DrawFbar);
}

int DrawFbar() {
    // initialize counter here
    // load high byte of spinstate
    lda(Imm(0xef));
    JSR(GetFirebarPosition);
    JSR(DrawFirebar_Collision);
    lda(Imm(0x0));
    // get fireball position data depending on firebar part
    // position it properly, draw it and do collision detection
    // check which firebar part
    cmp(Imm(0x4));
    BNE(NextFbar);
    ldy((DuplicateObj_Offset));
    lda((Enemy_SprDataOffset), y);
    sta(Imm(0x6));
    JMP(NextFbar);
}

int NextFbar() {
    // if we arrive at fifth firebar part,
    // get offset from long firebar and load OAM data offset
    // using long firebar offset, then store as new one here
    // move onto the next firebar part
    inc(Imm(0x0));
    lda(Imm(0x0));
    cmp(Imm(0xed));
    BCC(DrawFbar);
    JMP(SkipFBar);
}

int SkipFBar() {
    rts();
    JMP(DrawFirebar_Collision);
}

int DrawFirebar_Collision() {
    lda(Imm(0x3));
    // store mirror data elsewhere
    sta(Imm(0x5));
    ldy(Imm(0x6));
    lda(Imm(0x1));
    lsr(Imm(0x5));
    BCS(AddHA);
    // load OAM data offset for firebar
    // load horizontal adder we got from position loader
    // shift LSB of mirror data
    // if carry was set, skip this part
    eor(Imm(0xff));
    adc(Imm(0x1));
    JMP(AddHA);
}

int AddHA() {
    // otherwise get two's compliment of horizontal adder
    // add horizontal coordinate relative to screen to
    clc();
    adc((Enemy_Rel_XPos));
    sta((Sprite_X_Position), y);
    sta(Imm(0x6));
    cmp((Enemy_Rel_XPos));
    BCS(SubtR1);
    // horizontal adder, modified or otherwise
    // store as X coordinate here
    // store here for now, note offset is saved in Y still
    // compare X coordinate of sprite to original X of firebar
    // if sprite coordinate => original coordinate, branch
    lda((Enemy_Rel_XPos));
    sec();
    sbc(Imm(0x6));
    // otherwise subtract sprite X from the
    // original one and skip this part
    JMP(ChkFOfs);
    JMP(SubtR1);
}

int SubtR1() {
    // subtract original X from the
    sec();
    sbc((Enemy_Rel_XPos));
    JMP(ChkFOfs);
}

int ChkFOfs() {
    // current sprite X
    // if difference of coordinates within a certain range,
    cmp(Imm(0x59));
    BCC(VAHandl);
    lda(Imm(0xf8));
    BNE(SetVFbr);
    JMP(VAHandl);
}

int VAHandl() {
    // continue by handling vertical adder
    // otherwise, load offscreen Y coordinate
    // and unconditionally branch to move sprite offscreen
    // if vertical relative coordinate offscreen,
    lda((Enemy_Rel_YPos));
    cmp(Imm(0xf8));
    // skip ahead of this part and write into sprite Y coordinate
    BEQ(SetVFbr);
    lda(Imm(0x2));
    lsr(Imm(0x5));
    BCS(AddVA);
    // load vertical adder we got from position loader
    // shift LSB of mirror data one more time
    // if carry was set, skip this part
    eor(Imm(0xff));
    adc(Imm(0x1));
    JMP(AddVA);
}

int AddVA() {
    // otherwise get two's compliment of second part
    // add vertical coordinate relative to screen to
    clc();
    adc((Enemy_Rel_YPos));
    JMP(SetVFbr);
}

int SetVFbr() {
    // the second data, modified or otherwise
    // store as Y coordinate here
    sta((Sprite_Y_Position), y);
    sta(Imm(0x7));
    JMP(FirebarCollision);
}

int FirebarCollision() {
    JSR(DrawFirebar);
    tya();
    pha();
    lda((StarInvincibleTimer));
    ora((TimerControl));
    BNE(NoColFB);
    sta(Imm(0x5));
    // run sub here to draw current tile of firebar
    // return OAM data offset and save
    // to the stack for now
    // if star mario invincibility timer
    // or master timer controls set
    // then skip all of this
    // otherwise initialize counter
    ldy((Player_Y_HighPos));
    dey();
    BNE(NoColFB);
    ldy((Player_Y_Position));
    lda((PlayerSize));
    BNE(AdjSm);
    // if player's vertical high byte offscreen,
    // skip all of this
    // get player's vertical position
    // get player's size
    // if player small, branch to alter variables
    lda((CrouchingFlag));
    BEQ(BigJp);
    JMP(AdjSm);
}

int AdjSm() {
    // if player big and not crouching, jump ahead
    // if small or big but crouching, execute this part
    inc(Imm(0x5));
    inc(Imm(0x5));
    // first increment our counter twice (setting $02 as flag)
    tya();
    clc();
    adc(Imm(0x18));
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
    sbc(Imm(0x7));
    BPL(ChkVFBD);
    eor(Imm(0xff));
    clc();
    // from the vertical coordinate of the player
    // if player lower on the screen than firebar,
    // skip two's compliment part
    // otherwise get two's compliment
    adc(Imm(0x1));
    JMP(ChkVFBD);
}

int ChkVFBD() {
    // if difference => 8 pixels, skip ahead of this part
    cmp(Imm(0x8));
    BCS(Chk2Ofs);
    lda(Imm(0x6));
    cmp(Imm(0xf0));
    // if firebar on far right on the screen, skip this,
    // because, really, what's the point?
    BCS(Chk2Ofs);
    lda((((Sprite_X_Position)) + (Imm(4))));
    // get OAM X coordinate for sprite #1
    clc();
    adc(Imm(0x4));
    sta(Imm(0x4));
    sec();
    sbc(Imm(0x6));
    BPL(ChkFBCl);
    eor(Imm(0xff));
    clc();
    // add four pixels
    // store here
    // subtract horizontal coordinate of firebar
    // from the X coordinate of player's sprite 1
    // if modded X coordinate to the right of firebar
    // skip two's compliment part
    // otherwise get two's compliment
    adc(Imm(0x1));
    JMP(ChkFBCl);
}

int ChkFBCl() {
    // if difference < 8 pixels, collision, thus branch
    cmp(Imm(0x8));
    BCC(ChgSDir);
    JMP(Chk2Ofs);
}

int Chk2Ofs() {
    // to process
    // if value of $02 was set earlier for whatever reason,
    lda(Imm(0x5));
    cmp(Imm(0x2));
    // branch to increment OAM offset and leave, no collision
    BEQ(NoColFB);
    ldy(Imm(0x5));
    // otherwise get temp here and use as offset
    lda((Player_Y_Position));
    clc();
    adc((FirebarYPos), y);
    inc(Imm(0x5));
    // add value loaded with offset to player's vertical coordinate
    // then increment temp and jump back
    JMP(FBCLoop);
    JMP(ChgSDir);
}

int ChgSDir() {
    // set movement direction by default
    ldx(Imm(0x1));
    lda(Imm(0x4));
    cmp(Imm(0x6));
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
    stx((Enemy_MovingDir));
    ldx(Imm(0x0));
    lda(Imm(0x0));
    // save value written to $00 to stack
    pha();
    JSR(InjurePlayer);
    // perform sub to hurt or kill player
    pla();
    sta(Imm(0x0));
    JMP(NoColFB);
}

int NoColFB() {
    // get value of $00 from stack
    // get OAM data offset
    pla();
    clc();
    // add four to it and save
    adc(Imm(0x4));
    sta(Imm(0x6));
    ldx((ObjectOffset));
    // get enemy object buffer offset and leave
    rts();
    JMP(GetFirebarPosition);
}

int GetFirebarPosition() {
    pha();
    anda(Imm(0b1111));
    // save high byte of spinstate to the stack
    // mask out low nybble
    cmp(Imm(0x9));
    BCC(GetHAdder);
    eor(Imm(0b1111));
    // if lower than $09, branch ahead
    // otherwise get two's compliment to oscillate
    clc();
    adc(Imm(0x1));
    JMP(GetHAdder);
}

int GetHAdder() {
    // store result, modified or not, here
    sta(Imm(0x1));
    ldy(Imm(0x0));
    lda((FirebarTblOffsets), y);
    // load number of firebar ball where we're at
    // load offset to firebar position data
    clc();
    adc(Imm(0x1));
    tay();
    lda((FirebarPosLookupTbl), y);
    // add oscillated high byte of spinstate
    // to offset here and use as new offset
    // get data here and store as horizontal adder
    sta(Imm(0x1));
    pla();
    pha();
    // pull whatever was in A from the stack
    // save it again because we still need it
    clc();
    adc(Imm(0x8));
    anda(Imm(0b1111));
    cmp(Imm(0x9));
    // add eight this time, to get vertical adder
    // mask out high nybble
    // if lower than $09, branch ahead
    BCC(GetVAdder);
    eor(Imm(0b1111));
    // otherwise get two's compliment
    clc();
    adc(Imm(0x1));
    JMP(GetVAdder);
}

int GetVAdder() {
    // store result here
    sta(Imm(0x2));
    ldy(Imm(0x0));
    lda((FirebarTblOffsets), y);
    // load offset to firebar position data again
    clc();
    adc(Imm(0x2));
    // this time add value in $02 to offset here and use as offset
    tay();
    lda((FirebarPosLookupTbl), y);
    // get data here and store as vertica adder
    sta(Imm(0x2));
    pla();
    lsr();
    // pull out whatever was in A one last time
    // divide by eight or shift three to the right
    lsr();
    lsr();
    tay();
    lda((FirebarMirrorData), y);
    sta(Imm(0x3));
    // use as offset
    // load mirroring data here
    // store
    rts();
    JMP(MoveFlyingCheepCheep);
}

int MoveFlyingCheepCheep() {
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    BEQ(FlyCC);
    // check cheep-cheep's enemy state
    // for d5 set
    // branch to continue code if not set
    lda(Imm(0x0));
    sta((Enemy_SprAttrib), x);
    JMP(MoveJ_EnemyVertically);
    JMP(FlyCC);
}

int FlyCC() {
    // otherwise clear sprite attributes
    // and jump to move defeated cheep-cheep downwards
    // move cheep-cheep horizontally based on speed and force
    JSR(MoveEnemyHorizontally);
    ldy(Imm(0xd));
    lda(Imm(0x5));
    JSR(SetXMoveAmt);
    // set vertical movement amount
    // set maximum speed
    // branch to impose gravity on flying cheep-cheep
    lda((Enemy_Y_MoveForce), x);
    lsr();
    lsr();
    // get vertical movement force and
    // move high nybble to low
    lsr();
    lsr();
    tay();
    lda((Enemy_Y_Position), x);
    sec();
    // save as offset (note this tends to go into reach of code)
    // get vertical position
    // subtract pseudorandom value based on offset from position
    sbc((PRandomSubtracter), y);
    BPL(AddCCF);
    // if result within top half of screen, skip this part
    eor(Imm(0xff));
    clc();
    // otherwise get two's compliment
    adc(Imm(0x1));
    JMP(AddCCF);
}

int AddCCF() {
    // if result or two's compliment greater than eight,
    cmp(Imm(0x8));
    BCS(BPGet);
    // skip to the end without changing movement force
    lda((Enemy_Y_MoveForce), x);
    clc();
    adc(Imm(0x10));
    // otherwise add to it
    sta((Enemy_Y_MoveForce), x);
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
    lda((FlyCCBPriority), y);
    sta((Enemy_SprAttrib), x);
    rts();
    JMP(MoveLakitu);
}

int MoveLakitu() {
    lda((Enemy_State), x);
    anda(Imm(0b100000));
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
    lda((Enemy_State), x);
    BEQ(Fr12S);
    // go ahead and continue with code
    lda(Imm(0x0));
    sta((LakituMoveDirection), x);
    sta((EnemyFrenzyBuffer));
    // otherwise initialize moving direction to move to left
    // initialize frenzy buffer
    lda(Imm(0x10));
    BNE(SetLSpd);
    JMP(Fr12S);
}

int Fr12S() {
    lda((Spiny));
    sta((EnemyFrenzyBuffer));
    // set spiny identifier in frenzy buffer
    ldy(Imm(0x2));
    JMP(LdLDa);
}

int LdLDa() {
    // load values
    lda((LakituDiffAdj), y);
    sta(Imm(0x1), y);
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
    sta((LakituMoveSpeed), x);
    ldy(Imm(0x1));
    // set moving direction to right by default
    lda((LakituMoveDirection), x);
    anda(Imm(0x1));
    BNE(SetLMov);
    // get LSB of moving direction
    // if set, branch to the end to use moving direction
    lda((LakituMoveSpeed), x);
    eor(Imm(0xff));
    // get two's compliment of moving speed
    clc();
    adc(Imm(0x1));
    sta((LakituMoveSpeed), x);
    iny();
    JMP(SetLMov);
}

int SetLMov() {
    // store as new moving speed
    // increment moving direction to left
    // store moving direction
    sty((Enemy_MovingDir), x);
    JMP(MoveEnemyHorizontally);
    JMP(PlayerLakituDiff);
}

int PlayerLakituDiff() {
    ldy(Imm(0x0));
    JSR(PlayerEnemyDiff);
    BPL(ChkLakDif);
    iny();
    // set Y for default value
    // get horizontal difference between enemy and player
    // branch if enemy is to the right of the player
    // increment Y for left of player
    lda(Imm(0x0));
    eor(Imm(0xff));
    // get two's compliment of low byte of horizontal difference
    clc();
    adc(Imm(0x1));
    // store two's compliment as horizontal difference
    sta(Imm(0x0));
    JMP(ChkLakDif);
}

int ChkLakDif() {
    // get low byte of horizontal difference
    lda(Imm(0x0));
    cmp(Imm(0x3c));
    // if within a certain distance of player, branch
    BCC(ChkPSpeed);
    lda(Imm(0x3c));
    // otherwise set maximum distance
    sta(Imm(0x0));
    lda((Enemy_ID), x);
    // check if lakitu is in our current enemy slot
    cmp((Lakitu));
    BNE(ChkPSpeed);
    tya();
    cmp((LakituMoveDirection), x);
    BEQ(ChkPSpeed);
    lda((LakituMoveDirection), x);
    BEQ(SetLMovD);
    dec((LakituMoveSpeed), x);
    lda((LakituMoveSpeed), x);
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
    sta((LakituMoveDirection), x);
    JMP(ChkPSpeed);
}

int ChkPSpeed() {
    lda(Imm(0x0));
    anda(Imm(0b111100));
    lsr();
    // mask out all but four bits in the middle
    // divide masked difference by four
    lsr();
    sta(Imm(0x0));
    ldy(Imm(0x0));
    // store as new value
    // init offset
    lda((Player_X_Speed));
    BEQ(SubDifAdj);
    // if player not moving horizontally, branch
    lda((ScrollAmount));
    BEQ(SubDifAdj);
    iny();
    // if scroll speed not set, branch to same place
    // otherwise increment offset
    lda((Player_X_Speed));
    cmp(Imm(0x19));
    // if player not running, branch
    BCC(ChkSpinyO);
    lda((ScrollAmount));
    cmp(Imm(0x2));
    BCC(ChkSpinyO);
    iny();
    JMP(ChkSpinyO);
}

int ChkSpinyO() {
    // if scroll speed below a certain amount, branch
    // to same place
    // otherwise increment once more
    // check for spiny object
    lda((Enemy_ID), x);
    cmp((Spiny));
    BNE(ChkEmySpd);
    lda((Player_X_Speed));
    // branch if not found
    // if player not moving, skip this part
    BNE(SubDifAdj);
    JMP(ChkEmySpd);
}

int ChkEmySpd() {
    // check vertical speed
    lda((Enemy_Y_Speed), x);
    BNE(SubDifAdj);
    ldy(Imm(0x0));
    JMP(SubDifAdj);
}

int SubDifAdj() {
    // branch if nonzero
    // otherwise reinit offset
    // get one of three saved values from earlier
    lda(Imm(0x1), y);
    ldy(Imm(0x0));
    JMP(SPixelLak);
}

int SPixelLak() {
    // get saved horizontal difference
    // subtract one for each pixel of horizontal difference
    sec();
    sbc(Imm(0x1));
    // from one of three saved values
    dey();
    BPL(SPixelLak);
    JMP(ExMoveLak);
}

int ExMoveLak() {
    // branch until all pixels are subtracted, to adjust difference
    // leave!!!
    rts();
    JMP(BridgeCollapse);
}

int BridgeCollapse() {
    ldx((BowserFront_Offset));
    lda((Enemy_ID), x);
    cmp((Bowser));
    BNE(SetM2);
    stx((ObjectOffset));
    lda((Enemy_State), x);
    // get enemy offset for bowser
    // check enemy object identifier for bowser
    // if not found, branch ahead,
    // metatile removal not necessary
    // store as enemy offset here
    // if bowser in normal state, skip all of this
    BEQ(RemoveBridge);
    anda(Imm(0b1000000));
    // if bowser's state has d6 clear, skip to silence music
    BEQ(SetM2);
    lda((Enemy_Y_Position), x);
    cmp(Imm(0xe0));
    // check bowser's vertical coordinate
    // if bowser not yet low enough, skip this part ahead
    BCC(MoveD_Bowser);
    JMP(SetM2);
}

int SetM2() {
    // silence music
    lda((Silence));
    sta((EventMusicQueue));
    inc((OperMode_Task));
    JMP(KillAllEnemies);
    JMP(MoveD_Bowser);
}

int MoveD_Bowser() {
    JSR(MoveEnemySlowVert);
    JMP(BowserGfxHandler);
    JMP(RemoveBridge);
}

int RemoveBridge() {
    dec((BowserFeetCounter));
    BNE(NoBFall);
    // decrement timer to control bowser's feet
    // if not expired, skip all of this
    lda(Imm(0x4));
    sta((BowserFeetCounter));
    // otherwise, set timer now
    lda((BowserBodyControls));
    eor(Imm(0x1));
    // invert bit to control bowser's feet
    sta((BowserBodyControls));
    lda(Imm(0x22));
    // put high byte of name table address here for now
    sta(Imm(0x5));
    ldy((BridgeCollapseOffset));
    lda((BridgeCollapseData), y);
    // get bridge collapse offset here
    // load low byte of name table address and store here
    sta(Imm(0x4));
    ldy((VRAM_Buffer1_Offset));
    // increment vram buffer offset
    iny();
    ldx(Imm(0xc));
    JSR(RemBridge);
    ldx((ObjectOffset));
    JSR(MoveVOffset);
    lda((Sfx_Blast));
    sta((Square2SoundQueue));
    lda((Sfx_BrickShatter));
    sta((NoiseSoundQueue));
    inc((BridgeCollapseOffset));
    // set offset for tile data for sub to draw blank metatile
    // do sub here to remove bowser's bridge metatiles
    // get enemy offset
    // set new vram buffer offset
    // load the fireworks/gunfire sound into the square 2 sfx
    // queue while at the same time loading the brick
    // shatter sound into the noise sfx queue thus
    // producing the unique sound of the bridge collapsing
    // increment bridge collapse offset
    lda((BridgeCollapseOffset));
    cmp(Imm(0xf));
    BNE(NoBFall);
    JSR(InitVStf);
    // if bridge collapse offset has not yet reached
    // the end, go ahead and skip this part
    // initialize whatever vertical speed bowser has
    lda(Imm(0b1000000));
    sta((Enemy_State), x);
    // set bowser's state to one of defeated states (d6 set)
    lda((Sfx_BowserFall));
    sta((Square2SoundQueue));
    JMP(NoBFall);
}

int NoBFall() {
    // play bowser defeat sound
    // jump to code that draws bowser
    JMP(BowserGfxHandler);
    JMP(RunBowser);
}

int RunBowser() {
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    // if d5 in enemy state is not set
    // then branch elsewhere to run bowser
    BEQ(BowserControl);
    lda((Enemy_Y_Position), x);
    cmp(Imm(0xe0));
    BCC(MoveD_Bowser);
    JMP(KillAllEnemies);
}

int KillAllEnemies() {
    ldx(Imm(0x4));
    JMP(KillLoop);
}

int KillLoop() {
    // start with last enemy slot
    // branch to kill enemy objects
    JSR(EraseEnemyObject);
    dex();
    BPL(KillLoop);
    sta((EnemyFrenzyBuffer));
    ldx((ObjectOffset));
    // move onto next enemy slot
    // do this until all slots are emptied
    // empty frenzy buffer
    // get enemy object offset and leave
    rts();
    JMP(BowserControl);
}

int BowserControl() {
    lda(Imm(0x0));
    sta((EnemyFrenzyBuffer));
    lda((TimerControl));
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
    lda((BowserBodyControls));
    BPL(FeetTmr);
    JMP(HammerChk);
    JMP(FeetTmr);
}

int FeetTmr() {
    // if bit clear, go ahead with code here
    // otherwise skip a whole section starting here
    // decrement timer to control bowser's feet
    dec((BowserFeetCounter));
    BNE(ResetMDr);
    lda(Imm(0x20));
    // if not expired, skip this part
    // otherwise, reset timer
    sta((BowserFeetCounter));
    lda((BowserBodyControls));
    eor(Imm(0b1));
    // and invert bit used
    // to control bowser's feet
    sta((BowserBodyControls));
    JMP(ResetMDr);
}

int ResetMDr() {
    // check frame counter
    lda((FrameCounter));
    anda(Imm(0b1111));
    BNE(B_FaceP);
    lda(Imm(0x2));
    sta((Enemy_MovingDir), x);
    JMP(B_FaceP);
}

int B_FaceP() {
    // if not on every sixteenth frame, skip
    // ahead to continue code
    // otherwise reset moving/facing direction every
    // sixteen frames
    // if timer set here expired,
    lda((EnemyFrameTimer), x);
    BEQ(GetPRCmp);
    JSR(PlayerEnemyDiff);
    BPL(GetPRCmp);
    // branch to next section
    // get horizontal difference between player and bowser,
    // and branch if bowser to the right of the player
    lda(Imm(0x1));
    sta((Enemy_MovingDir), x);
    // set bowser to move and face to the right
    lda(Imm(0x2));
    sta((BowserMovementSpeed));
    // set movement speed
    lda(Imm(0x20));
    sta((EnemyFrameTimer), x);
    sta((BowserFireBreathTimer));
    // set timer here
    // set timer used for bowser's flame
    lda((Enemy_X_Position), x);
    cmp(Imm(0xc8));
    BCS(HammerChk);
    JMP(GetPRCmp);
}

int GetPRCmp() {
    // if bowser to the right past a certain point,
    // skip ahead to some other section
    // get frame counter
    lda((FrameCounter));
    anda(Imm(0b11));
    BNE(HammerChk);
    // execute this code every fourth frame, otherwise branch
    lda((Enemy_X_Position), x);
    cmp((BowserOrigXPos));
    BNE(GetDToO);
    // if bowser not at original horizontal position,
    // branch to skip this part
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b11));
    // get pseudorandom offset
    tay();
    lda((PRandomRange), y);
    sta((MaxRangeFromOrigin));
    JMP(GetDToO);
}

int GetDToO() {
    lda((Enemy_X_Position), x);
    clc();
    adc((BowserMovementSpeed));
    // add movement speed to bowser's horizontal
    // coordinate and save as new horizontal position
    sta((Enemy_X_Position), x);
    ldy((Enemy_MovingDir), x);
    cpy(Imm(0x1));
    // if bowser moving and facing to the right, skip ahead
    BEQ(HammerChk);
    ldy(Imm(0xff));
    sec();
    sbc((BowserOrigXPos));
    BPL(CompDToO);
    // set default movement speed here (move left)
    // get difference of current vs. original
    // horizontal position
    // if current position to the right of original, skip ahead
    eor(Imm(0xff));
    clc();
    // get two's compliment
    adc(Imm(0x1));
    ldy(Imm(0x1));
    JMP(CompDToO);
}

int CompDToO() {
    // set alternate movement speed here (move right)
    // compare difference with pseudorandom value
    cmp((MaxRangeFromOrigin));
    BCC(HammerChk);
    sty((BowserMovementSpeed));
    JMP(HammerChk);
}

int HammerChk() {
    // if difference < pseudorandom value, leave speed alone
    // otherwise change bowser's movement speed
    // if timer set here not expired yet, skip ahead to
    lda((EnemyFrameTimer), x);
    BNE(MakeBJump);
    JSR(MoveEnemySlowVert);
    lda((WorldNumber));
    // some other section of code
    // otherwise start by moving bowser downwards
    // check world number
    cmp((World6));
    BCC(SetHmrTmr);
    // if world 1-5, skip this part (not time to throw hammers yet)
    lda((FrameCounter));
    anda(Imm(0b11));
    BNE(SetHmrTmr);
    JSR(SpawnHammerObj);
    JMP(SetHmrTmr);
}

int SetHmrTmr() {
    // check to see if it's time to execute sub
    // if not, skip sub, otherwise
    // execute sub on every fourth frame to spawn misc object (hammer)
    // get current vertical position
    lda((Enemy_Y_Position), x);
    cmp(Imm(0x80));
    BCC(ChkFireB);
    // if still above a certain point
    // then skip to world number check for flames
    lda((PseudoRandomBitReg), x);
    anda(Imm(0b11));
    // get pseudorandom offset
    tay();
    lda((PRandomRange), y);
    sta((EnemyFrameTimer), x);
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
    cmp(Imm(0x1));
    BNE(ChkFireB);
    dec((Enemy_Y_Position), x);
    JSR(InitVStf);
    // skip ahead to next part
    // otherwise decrement vertical coordinate
    // initialize movement amount
    lda(Imm(0xfe));
    sta((Enemy_Y_Speed), x);
    JMP(ChkFireB);
}

int ChkFireB() {
    // set vertical speed to move bowser upwards
    // check world number here
    lda((WorldNumber));
    cmp((World8));
    BEQ(SpawnFBr);
    cmp((World6));
    BCS(BowserGfxHandler);
    JMP(SpawnFBr);
}

int SpawnFBr() {
    // world 8?
    // if so, execute this part here
    // world 6-7?
    // if so, skip this part here
    // check timer here
    lda((BowserFireBreathTimer));
    BNE(BowserGfxHandler);
    // if not expired yet, skip all of this
    lda(Imm(0x20));
    sta((BowserFireBreathTimer));
    // set timer here
    lda((BowserBodyControls));
    eor(Imm(0b10000000));
    sta((BowserBodyControls));
    BMI(ChkFireB);
    JSR(SetFlameTimer);
    // invert bowser's mouth bit to open
    // and close bowser's mouth
    // if bowser's mouth open, loop back
    // get timing for bowser's flame
    ldy((SecondaryHardMode));
    BEQ(SetFBTmr);
    // if secondary hard mode flag not set, skip this
    sec();
    sbc(Imm(0x10));
    JMP(SetFBTmr);
}

int SetFBTmr() {
    // otherwise subtract from value in A
    // set value as timer here
    sta((BowserFireBreathTimer));
    lda((BowserFlame));
    sta((EnemyFrenzyBuffer));
    JMP(BowserGfxHandler);
}

int BowserGfxHandler() {
    JSR(ProcessBowserHalf);
    ldy(Imm(0x10));
    lda((Enemy_MovingDir), x);
    // do a sub here to process bowser's front
    // load default value here to position bowser's rear
    // check moving direction
    lsr();
    BCC(CopyFToR);
    ldy(Imm(0xf0));
    JMP(CopyFToR);
}

int CopyFToR() {
    // if moving left, use default
    // otherwise load alternate positioning value here
    // move bowser's rear object position value to A
    tya();
    clc();
    adc((Enemy_X_Position), x);
    ldy((DuplicateObj_Offset));
    sta((Enemy_X_Position), y);
    // add to bowser's front object horizontal coordinate
    // get bowser's rear object offset
    // store A as bowser's rear horizontal coordinate
    lda((Enemy_Y_Position), x);
    clc();
    adc(Imm(0x8));
    sta((Enemy_Y_Position), y);
    // add eight pixels to bowser's front object
    // vertical coordinate and store as vertical coordinate
    // for bowser's rear
    lda((Enemy_State), x);
    sta((Enemy_State), y);
    // copy enemy state directly from front to rear
    lda((Enemy_MovingDir), x);
    sta((Enemy_MovingDir), y);
    lda((ObjectOffset));
    // copy moving direction also
    // save enemy object offset of front to stack
    pha();
    ldx((DuplicateObj_Offset));
    // put enemy object offset of rear as current
    stx((ObjectOffset));
    lda((Bowser));
    sta((Enemy_ID), x);
    JSR(ProcessBowserHalf);
    // set bowser's enemy identifier
    // store in bowser's rear object
    // do a sub here to process bowser's rear
    pla();
    sta((ObjectOffset));
    // get original enemy object offset
    tax();
    lda(Imm(0x0));
    // nullify bowser's front/rear graphics flag
    sta((BowserGfxFlag));
    JMP(ExBGfxH);
}

int ExBGfxH() {
    // leave!
    rts();
    JMP(ProcessBowserHalf);
}

int ProcessBowserHalf() {
    inc((BowserGfxFlag));
    JSR(RunRetainerObj);
    // increment bowser's graphics flag, then run subroutines
    // to get offscreen bits, relative position and draw bowser (finally!)
    lda((Enemy_State), x);
    BNE(ExBGfxH);
    // if either enemy object not in normal state, branch to leave
    lda(Imm(0xa));
    sta((Enemy_BoundBoxCtrl), x);
    JSR(GetEnemyBoundBox);
    JMP(PlayerEnemyCollision);
    JMP(SetFlameTimer);
}

int SetFlameTimer() {
    ldy((BowserFlameTimerCtrl));
    inc((BowserFlameTimerCtrl));
    lda((BowserFlameTimerCtrl));
    anda(Imm(0b111));
    // load counter as offset
    // increment
    // mask out all but 3 LSB
    // to keep in range of 0-7
    sta((BowserFlameTimerCtrl));
    lda((FlameTimerData), y);
    JMP(ExFl);
}

int ExFl() {
    rts();
    JMP(ProcBowserFlame);
}

int ProcBowserFlame() {
    lda((TimerControl));
    BNE(SetGfxF);
    lda(Imm(0x40));
    // if master timer control flag set,
    // skip all of this
    // load default movement force
    ldy((SecondaryHardMode));
    BEQ(SFlmX);
    lda(Imm(0x60));
    JMP(SFlmX);
}

int SFlmX() {
    // if secondary hard mode flag not set, use default
    // otherwise load alternate movement force to go faster
    // store value here
    sta(Imm(0x0));
    lda((Enemy_X_MoveForce), x);
    sec();
    // subtract value from movement force
    sbc(Imm(0x0));
    sta((Enemy_X_MoveForce), x);
    // save new value
    lda((Enemy_X_Position), x);
    sbc(Imm(0x1));
    sta((Enemy_X_Position), x);
    // subtract one from horizontal position to move
    // to the left
    lda((Enemy_PageLoc), x);
    sbc(Imm(0x0));
    // subtract borrow from page location
    sta((Enemy_PageLoc), x);
    ldy((BowserFlamePRandomOfs), x);
    lda((Enemy_Y_Position), x);
    cmp((FlameYPosData), y);
    BEQ(SetGfxF);
    // get some value here and use as offset
    // load vertical coordinate
    // compare against coordinate data using $0417,x as offset
    // if equal, branch and do not modify coordinate
    clc();
    adc((Enemy_Y_MoveForce), x);
    sta((Enemy_Y_Position), x);
    JMP(SetGfxF);
}

int SetGfxF() {
    // otherwise add value here to coordinate and store
    // as new vertical coordinate
    // get new relative coordinates
    JSR(RelativeEnemyPosition);
    lda((Enemy_State), x);
    BNE(ExFl);
    lda(Imm(0x51));
    sta(Imm(0x0));
    ldy(Imm(0x2));
    // if bowser's flame not in normal state,
    // branch to leave
    // otherwise, continue
    // write first tile number
    // load attributes without vertical flip by default
    lda((FrameCounter));
    anda(Imm(0b10));
    BEQ(FlmeAt);
    ldy(Imm(0x82));
    JMP(FlmeAt);
}

int FlmeAt() {
    // invert vertical flip bit every 2 frames
    // if d1 not set, write default value
    // otherwise write value with vertical flip bit set
    // set bowser's flame sprite attributes here
    sty(Imm(0x1));
    ldy((Enemy_SprDataOffset), x);
    // get OAM data offset
    ldx(Imm(0x0));
    JMP(DrawFlameLoop);
}

int DrawFlameLoop() {
    lda((Enemy_Rel_YPos));
    sta((Sprite_Y_Position), y);
    // get Y relative coordinate of current enemy object
    // write into Y coordinate of OAM data
    lda(Imm(0x0));
    sta((Sprite_Tilenumber), y);
    inc(Imm(0x0));
    // write current tile number into OAM data
    // increment tile number to draw more bowser's flame
    lda(Imm(0x1));
    sta((Sprite_Attributes), y);
    // write saved attributes into OAM data
    lda((Enemy_Rel_XPos));
    sta((Sprite_X_Position), y);
    // write X relative coordinate of current enemy object
    clc();
    adc(Imm(0x8));
    sta((Enemy_Rel_XPos));
    // then add eight to it and store
    iny();
    iny();
    iny();
    iny();
    inx();
    cpx(Imm(0x3));
    // increment Y four times to move onto the next OAM
    // move onto the next OAM, and branch if three
    // have not yet been done
    BCC(DrawFlameLoop);
    ldx((ObjectOffset));
    JSR(GetEnemyOffscreenBits);
    ldy((Enemy_SprDataOffset), x);
    lda((Enemy_OffscreenBits));
    lsr();
    // reload original enemy offset
    // get offscreen information
    // get OAM data offset
    // get enemy object offscreen bits
    // move d0 to carry and result to stack
    pha();
    BCC(M3FOfs);
    lda(Imm(0xf8));
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
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
    lda(Imm(0xf8));
    // branch if carry not set again
    // otherwise move third sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    JMP(M2FOfs);
}

int M2FOfs() {
    // get bits from stack again
    pla();
    lsr();
    // move d2 to carry and move bits back to stack again
    pha();
    BCC(M1FOfs);
    lda(Imm(0xf8));
    // branch if carry not set yet again
    // otherwise move second sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    JMP(M1FOfs);
}

int M1FOfs() {
    // get bits from stack one last time
    pla();
    lsr();
    BCC(ExFlmeD);
    // move d3 to carry
    // branch if carry not set one last time
    lda(Imm(0xf8));
    sta((Sprite_Y_Position), y);
    JMP(ExFlmeD);
}

int ExFlmeD() {
    // otherwise move first sprite offscreen
    // leave
    rts();
    JMP(RunFireworks);
}

int RunFireworks() {
    dec((ExplosionTimerCounter), x);
    BNE(SetupExpl);
    // decrement explosion timing counter here
    // if not expired, skip this part
    lda(Imm(0x8));
    sta((ExplosionTimerCounter), x);
    inc((ExplosionGfxCounter), x);
    // reset counter
    // increment explosion graphics counter
    lda((ExplosionGfxCounter), x);
    cmp(Imm(0x3));
    BCS(FireworksSoundScore);
    JMP(SetupExpl);
}

int SetupExpl() {
    // check explosion graphics counter
    // if at a certain point, branch to kill this object
    // get relative coordinates of explosion
    JSR(RelativeEnemyPosition);
    lda((Enemy_Rel_YPos));
    sta((Fireball_Rel_YPos));
    lda((Enemy_Rel_XPos));
    // copy relative coordinates
    // from the enemy object to the fireball object
    // first vertical, then horizontal
    sta((Fireball_Rel_XPos));
    ldy((Enemy_SprDataOffset), x);
    lda((ExplosionGfxCounter), x);
    JSR(DrawExplosion_Fireworks);
    // get OAM data offset
    // get explosion graphics counter
    // do a sub to draw the explosion then leave
    rts();
    JMP(FireworksSoundScore);
}

int FireworksSoundScore() {
    lda(Imm(0x0));
    // disable enemy buffer flag
    sta((Enemy_Flag), x);
    lda((Sfx_Blast));
    // play fireworks/gunfire sound
    sta((Square2SoundQueue));
    lda(Imm(0x5));
    // set part of score modifier for 500 points
    sta((((DigitModifier)) + (Imm(4))));
    JMP(EndAreaPoints);
    JMP(RunStarFlagObj);
}

int RunStarFlagObj() {
    lda(Imm(0x0));
    // initialize enemy frenzy buffer
    sta((EnemyFrenzyBuffer));
    lda((StarFlagTaskControl));
    cmp(Imm(0x5));
    // check star flag object task number here
    // if greater than 5, branch to exit
    BCS(StarFlagExit);
    JMP(GameTimerFireworks);
}

int GameTimerFireworks() {
    ldy(Imm(0x5));
    lda((((GameTimerDisplay)) + (Imm(2))));
    // set default state for star flag object
    // get game timer's last digit
    cmp(Imm(0x1));
    BEQ(SetFWC);
    ldy(Imm(0x3));
    // if last digit of game timer set to 1, skip ahead
    // otherwise load new value for state
    cmp(Imm(0x3));
    BEQ(SetFWC);
    ldy(Imm(0x0));
    // if last digit of game timer set to 3, skip ahead
    // otherwise load one more potential value for state
    cmp(Imm(0x6));
    BEQ(SetFWC);
    lda(Imm(0xff));
    JMP(SetFWC);
}

int SetFWC() {
    // if last digit of game timer set to 6, skip ahead
    // otherwise set value for no fireworks
    // set fireworks counter here
    sta((FireworksCounter));
    sty((Enemy_State), x);
    JMP(IncrementSFTask1);
}

int IncrementSFTask1() {
    inc((StarFlagTaskControl));
    JMP(StarFlagExit);
}

int StarFlagExit() {
    rts();
    JMP(AwardGameTimerPoints);
}

int AwardGameTimerPoints() {
    lda((GameTimerDisplay));
    // check all game timer digits for any intervals left
    ora((((GameTimerDisplay)) + (Imm(1))));
    ora((((GameTimerDisplay)) + (Imm(2))));
    BEQ(IncrementSFTask1);
    // if no time left on game timer at all, branch to next task
    lda((FrameCounter));
    anda(Imm(0b100));
    BEQ(NoTTick);
    // check frame counter for d2 set (skip ahead
    // for four frames every four frames) branch if not set
    lda((Sfx_TimerTick));
    sta((Square2SoundQueue));
    JMP(NoTTick);
}

int NoTTick() {
    // load timer tick sound
    // set offset here to subtract from game timer's last digit
    ldy(Imm(0x23));
    lda(Imm(0xff));
    sta((((DigitModifier)) + (Imm(5))));
    JSR(DigitsMathRoutine);
    lda(Imm(0x5));
    sta((((DigitModifier)) + (Imm(5))));
    JMP(EndAreaPoints);
}

int EndAreaPoints() {
    ldy(Imm(0xb));
    lda((CurrentPlayer));
    BEQ(ELPGive);
    ldy(Imm(0x11));
    JMP(ELPGive);
}

int ELPGive() {
    // load offset for mario's score by default
    // check player on the screen
    // if mario, do not change
    // otherwise load offset for luigi's score
    // award 50 points per game timer interval
    JSR(DigitsMathRoutine);
    lda((CurrentPlayer));
    asl();
    asl();
    // get player on the screen (or 500 points per
    // fireworks explosion if branched here from there)
    // shift to high nybble
    asl();
    asl();
    ora(Imm(0b100));
    JMP(UpdateNumber);
    JMP(RaiseFlagSetoffFWorks);
}

int RaiseFlagSetoffFWorks() {
    lda((Enemy_Y_Position), x);
    cmp(Imm(0x72));
    BCC(SetoffF);
    dec((Enemy_Y_Position), x);
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
    lda((FireworksCounter));
    BEQ(DrawFlagSetTimer);
    BMI(DrawFlagSetTimer);
    // if no fireworks left to go off, skip this part
    // if no fireworks set to go off, skip this part
    lda((Fireworks));
    sta((EnemyFrenzyBuffer));
    JMP(DrawStarFlag);
}

int DrawStarFlag() {
    JSR(RelativeEnemyPosition);
    ldy((Enemy_SprDataOffset), x);
    ldx(Imm(0x3));
    JMP(DSFLoop);
}

int DSFLoop() {
    // get relative coordinates of star flag
    // get OAM data offset
    // do four sprites
    // get relative vertical coordinate
    lda((Enemy_Rel_YPos));
    clc();
    adc((StarFlagYPosAdder), x);
    sta((Sprite_Y_Position), y);
    lda((StarFlagTileData), x);
    sta((Sprite_Tilenumber), y);
    lda(Imm(0x22));
    sta((Sprite_Attributes), y);
    lda((Enemy_Rel_XPos));
    // add Y coordinate adder data
    // store as Y coordinate
    // get tile number
    // store as tile number
    // set palette and background priority bits
    // store as attributes
    // get relative horizontal coordinate
    clc();
    adc((StarFlagXPosAdder), x);
    sta((Sprite_X_Position), y);
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
    ldx((ObjectOffset));
    // move onto next sprite
    // do this until all sprites are done
    // get enemy object offset and leave
    rts();
    JMP(DrawFlagSetTimer);
}

int DrawFlagSetTimer() {
    JSR(DrawStarFlag);
    // do sub to draw star flag
    lda(Imm(0x6));
    sta((EnemyIntervalTimer), x);
    JMP(IncrementSFTask2);
}

int IncrementSFTask2() {
    inc((StarFlagTaskControl));
    // move onto next task
    rts();
    JMP(DelayToAreaEnd);
}

int DelayToAreaEnd() {
    JSR(DrawStarFlag);
    lda((EnemyIntervalTimer), x);
    BNE(StarFlagExit2);
    lda((EventMusicBuffer));
    BEQ(IncrementSFTask2);
    JMP(StarFlagExit2);
}

int StarFlagExit2() {
    rts();
    JMP(MovePiranhaPlant);
}

int MovePiranhaPlant() {
    lda((Enemy_State), x);
    BNE(PutinPipe);
    lda((EnemyFrameTimer), x);
    BNE(PutinPipe);
    lda((PiranhaPlant_MoveFlag), x);
    BNE(SetupToMovePPlant);
    lda((PiranhaPlant_Y_Speed), x);
    BMI(ReversePlantSpeed);
    JSR(PlayerEnemyDiff);
    BPL(ChkPlayerNearPipe);
    lda(Imm(0x0));
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
    eor(Imm(0xff));
    clc();
    // and change to two's compliment
    adc(Imm(0x1));
    sta(Imm(0x0));
    JMP(ChkPlayerNearPipe);
}

int ChkPlayerNearPipe() {
    lda(Imm(0x0));
    // get saved horizontal difference
    cmp(Imm(0x21));
    BCC(PutinPipe);
    JMP(ReversePlantSpeed);
}

int ReversePlantSpeed() {
    lda((PiranhaPlant_Y_Speed), x);
    // get vertical speed
    eor(Imm(0xff));
    clc();
    // change to two's compliment
    adc(Imm(0x1));
    sta((PiranhaPlant_Y_Speed), x);
    inc((PiranhaPlant_MoveFlag), x);
    JMP(SetupToMovePPlant);
}

int SetupToMovePPlant() {
    lda((PiranhaPlantDownYPos), x);
    ldy((PiranhaPlant_Y_Speed), x);
    BPL(RiseFallPiranhaPlant);
    lda((PiranhaPlantUpYPos), x);
    JMP(RiseFallPiranhaPlant);
}

int RiseFallPiranhaPlant() {
    sta(Imm(0x0));
    lda((FrameCounter));
    // save vertical coordinate here
    // get frame counter
    lsr();
    BCC(PutinPipe);
    lda((TimerControl));
    BNE(PutinPipe);
    lda((Enemy_Y_Position), x);
    // branch to leave if d0 set (execute code every other frame)
    // get master timer control
    // branch to leave if set (likely not necessary)
    // get current vertical coordinate
    clc();
    adc((PiranhaPlant_Y_Speed), x);
    sta((Enemy_Y_Position), x);
    cmp(Imm(0x0));
    BNE(PutinPipe);
    // add vertical speed to move up or down
    // save as new vertical coordinate
    // compare against low or high coordinate
    // branch to leave if not yet reached
    lda(Imm(0x0));
    sta((PiranhaPlant_MoveFlag), x);
    // otherwise clear movement flag
    lda(Imm(0x40));
    sta((EnemyFrameTimer), x);
    JMP(PutinPipe);
}

int PutinPipe() {
    lda(Imm(0b100000));
    sta((Enemy_SprAttrib), x);
    rts();
    JMP(FirebarSpin);
}

int FirebarSpin() {
    sta(Imm(0x7));
    lda((FirebarSpinDirection), x);
    BNE(SpinCounterClockwise);
    ldy(Imm(0x18));
    // set background priority bit in sprite
    // attributes to give illusion of being inside pipe
    // then leave
    // $07 - spinning speed
    // save spinning speed here
    // check spinning direction
    // if moving counter-clockwise, branch to other part
    // possibly residual ldy
    lda((FirebarSpinState_Low), x);
    clc();
    adc(Imm(0x7));
    // add spinning speed to what would normally be
    // the horizontal speed
    sta((FirebarSpinState_Low), x);
    lda((FirebarSpinState_High), x);
    // add carry to what would normally be the vertical speed
    adc(Imm(0x0));
    rts();
    JMP(SpinCounterClockwise);
}

int SpinCounterClockwise() {
    ldy(Imm(0x8));
    // possibly residual ldy
    lda((FirebarSpinState_Low), x);
    sec();
    sbc(Imm(0x7));
    // subtract spinning speed to what would normally be
    // the horizontal speed
    sta((FirebarSpinState_Low), x);
    lda((FirebarSpinState_High), x);
    // add carry to what would normally be the vertical speed
    sbc(Imm(0x0));
    rts();
    JMP(BalancePlatform);
}

int BalancePlatform() {
    lda((Enemy_Y_HighPos), x);
    // $00 - used to hold collision flag, Y movement force + 5 or low byte of name table for rope
    // $02 - used to hold page location of rope
    // check high byte of vertical position
    cmp(Imm(0x3));
    BNE(DoBPl);
    JMP(EraseEnemyObject);
    JMP(DoBPl);
}

int DoBPl() {
    // if far below screen, kill the object
    // get object's state (set to $ff or other platform offset)
    lda((Enemy_State), x);
    BPL(CheckBalPlatform);
    // if doing other balance platform, branch to leave
    rts();
    JMP(CheckBalPlatform);
}

int CheckBalPlatform() {
    tay();
    lda((PlatformCollisionFlag), x);
    sta(Imm(0x0));
    lda((Enemy_MovingDir), x);
    // save offset from state as Y
    // get collision flag of platform
    // store here
    // get moving direction
    BEQ(ChkForFall);
    JMP(PlatformFall);
    JMP(ChkForFall);
}

int ChkForFall() {
    lda(Imm(0x2d));
    // check if platform is above a certain point
    cmp((Enemy_Y_Position), x);
    BCC(ChkOtherForFall);
    cpy(Imm(0x0));
    BEQ(MakePlatformFall);
    // if not, branch elsewhere
    // if collision flag is set to same value as
    // enemy state, branch to make platforms fall
    clc();
    adc(Imm(0x2));
    sta((Enemy_Y_Position), x);
    JMP(StopPlatforms);
    JMP(MakePlatformFall);
}

int MakePlatformFall() {
    JMP(InitPlatformFall);
    JMP(ChkOtherForFall);
}

int ChkOtherForFall() {
    cmp((Enemy_Y_Position), y);
    BCC(ChkToMoveBalPlat);
    cpx(Imm(0x0));
    BEQ(MakePlatformFall);
    // check if other platform is above a certain point
    // if not, branch elsewhere
    // if collision flag is set to same value as
    // enemy state, branch to make platforms fall
    clc();
    adc(Imm(0x2));
    sta((Enemy_Y_Position), y);
    JMP(StopPlatforms);
    JMP(ChkToMoveBalPlat);
}

int ChkToMoveBalPlat() {
    lda((Enemy_Y_Position), x);
    // save vertical position to stack
    pha();
    lda((PlatformCollisionFlag), x);
    BPL(ColFlg);
    // get collision flag
    // branch if collision
    lda((Enemy_Y_MoveForce), x);
    clc();
    // add $05 to contents of moveforce, whatever they be
    adc(Imm(0x5));
    sta(Imm(0x0));
    // store here
    lda((Enemy_Y_Speed), x);
    adc(Imm(0x0));
    BMI(PlatDn);
    BNE(PlatUp);
    // add carry to vertical speed
    // branch if moving downwards
    // branch elsewhere if moving upwards
    lda(Imm(0x0));
    cmp(Imm(0xb));
    BCC(PlatSt);
    BCS(PlatUp);
    JMP(ColFlg);
}

int ColFlg() {
    // check if there's still a little force left
    // if not enough, branch to stop movement
    // otherwise keep branch to move upwards
    // if collision flag matches
    cmp((ObjectOffset));
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
    ldy((Enemy_State), x);
    pla();
    // get offset of other platform
    // get old vertical coordinate from stack
    sec();
    sbc((Enemy_Y_Position), x);
    // get difference of old vs. new coordinate
    clc();
    adc((Enemy_Y_Position), y);
    sta((Enemy_Y_Position), y);
    lda((PlatformCollisionFlag), x);
    // add difference to vertical coordinate of other
    // platform to move it in the opposite direction
    // if no collision, skip this part here
    BMI(DrawEraseRope);
    tax();
    JSR(PositionPlayerOnVPlat);
    JMP(DrawEraseRope);
}

int DrawEraseRope() {
    ldy((ObjectOffset));
    lda((Enemy_Y_Speed), y);
    ora((Enemy_Y_MoveForce), y);
    BEQ(ExitRp);
    ldx((VRAM_Buffer1_Offset));
    cpx(Imm(0x20));
    BCS(ExitRp);
    // get enemy object offset
    // check to see if current platform is
    // moving at all
    // if not, skip all of this and branch to leave
    // get vram buffer offset
    // if offset beyond a certain point, go ahead
    // and skip this, branch to leave
    lda((Enemy_Y_Speed), y);
    pha();
    // save two copies of vertical speed to stack
    pha();
    JSR(SetupPlatformRope);
    lda(Imm(0x1));
    sta((VRAM_Buffer1), x);
    // do a sub to figure out where to put new bg tiles
    // write name table address to vram buffer
    // first the high byte, then the low
    lda(Imm(0x0));
    sta((((VRAM_Buffer1)) + (Imm(1))), x);
    lda(Imm(0x2));
    // set length for 2 bytes
    sta((((VRAM_Buffer1)) + (Imm(2))), x);
    lda((Enemy_Y_Speed), y);
    BMI(EraseR1);
    // if platform moving upwards, branch
    // to do something else
    lda(Imm(0xa2));
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    lda(Imm(0xa3));
    // otherwise put tile numbers for left
    // and right sides of rope in vram buffer
    sta((((VRAM_Buffer1)) + (Imm(4))), x);
    JMP(OtherRope);
    JMP(EraseR1);
}

int EraseR1() {
    // jump to skip this part
    // put blank tiles in vram buffer
    lda(Imm(0x24));
    sta((((VRAM_Buffer1)) + (Imm(3))), x);
    // to erase rope
    sta((((VRAM_Buffer1)) + (Imm(4))), x);
    JMP(OtherRope);
}

int OtherRope() {
    lda((Enemy_State), y);
    tay();
    pla();
    eor(Imm(0xff));
    JSR(SetupPlatformRope);
    lda(Imm(0x1));
    sta((((VRAM_Buffer1)) + (Imm(5))), x);
    lda(Imm(0x0));
    // get offset of other platform from state
    // use as Y here
    // pull second copy of vertical speed from stack
    // invert bits to reverse speed
    // do sub again to figure out where to put bg tiles
    // write name table address to vram buffer
    // this time we're doing putting tiles for
    // the other platform
    sta((((VRAM_Buffer1)) + (Imm(6))), x);
    lda(Imm(0x2));
    sta((((VRAM_Buffer1)) + (Imm(7))), x);
    pla();
    BPL(EraseR2);
    // set length again for 2 bytes
    // pull first copy of vertical speed from stack
    // if moving upwards (note inversion earlier), skip this
    lda(Imm(0xa2));
    sta((((VRAM_Buffer1)) + (Imm(8))), x);
    lda(Imm(0xa3));
    sta((((VRAM_Buffer1)) + (Imm(9))), x);
    JMP(EndRp);
    JMP(EraseR2);
}

int EraseR2() {
    // otherwise put tile numbers for left
    // and right sides of rope in vram
    // transfer buffer
    // jump to skip this part
    // put blank tiles in vram buffer
    lda(Imm(0x24));
    sta((((VRAM_Buffer1)) + (Imm(8))), x);
    // to erase rope
    sta((((VRAM_Buffer1)) + (Imm(9))), x);
    JMP(EndRp);
}

int EndRp() {
    // put null terminator at the end
    lda(Imm(0x0));
    sta((((VRAM_Buffer1)) + (Imm(10))), x);
    lda((VRAM_Buffer1_Offset));
    clc();
    // add ten bytes to the vram buffer offset
    // and store
    adc(Imm(10));
    sta((VRAM_Buffer1_Offset));
    JMP(ExitRp);
}

int ExitRp() {
    // get enemy object buffer offset and leave
    ldx((ObjectOffset));
    rts();
    JMP(SetupPlatformRope);
}

int SetupPlatformRope() {
    pha();
    lda((Enemy_X_Position), y);
    // save second/third copy to stack
    // get horizontal coordinate
    clc();
    adc(Imm(0x8));
    ldx((SecondaryHardMode));
    BNE(GetLRp);
    // add eight pixels
    // if secondary hard mode flag set,
    // use coordinate as-is
    clc();
    adc(Imm(0x10));
    JMP(GetLRp);
}

int GetLRp() {
    // otherwise add sixteen more pixels
    // save modified horizontal coordinate to stack
    pha();
    lda((Enemy_PageLoc), y);
    adc(Imm(0x0));
    sta(Imm(0x2));
    pla();
    anda(Imm(0b11110000));
    lsr();
    // add carry to page location
    // and save here
    // pull modified horizontal coordinate
    // from the stack, mask out low nybble
    // and shift three bits to the right
    lsr();
    lsr();
    sta(Imm(0x0));
    ldx((Enemy_Y_Position), y);
    pla();
    BPL(GetHRp);
    // store result here as part of name table low byte
    // get vertical coordinate
    // get second/third copy of vertical speed from stack
    // skip this part if moving downwards or not at all
    txa();
    clc();
    adc(Imm(0x8));
    tax();
    JMP(GetHRp);
}

int GetHRp() {
    // add eight to vertical coordinate and
    // save as X
    // move vertical coordinate to A
    txa();
    ldx((VRAM_Buffer1_Offset));
    // get vram buffer offset
    asl();
    rol();
    pha();
    rol();
    anda(Imm(0b11));
    ora(Imm(0b100000));
    sta(Imm(0x1));
    lda(Imm(0x2));
    anda(Imm(0x1));
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
    ora(Imm(0x1));
    sta(Imm(0x1));
    pla();
    anda(Imm(0b11100000));
    // shift twice to the left and save with the
    // rest of the bits of the high byte, to get
    // the proper name table and the right place on it
    // get modified vertical coordinate from stack
    // mask out low nybble and LSB of high nybble
    clc();
    adc(Imm(0x0));
    sta(Imm(0x0));
    // add to horizontal part saved here
    // save as name table low byte
    lda((Enemy_Y_Position), y);
    cmp(Imm(0xe8));
    BCC(ExPRp);
    // if vertical position not below the
    // bottom of the screen, we're done, branch to leave
    lda(Imm(0x0));
    anda(Imm(0b10111111));
    // mask out d6 of low byte of name table address
    sta(Imm(0x0));
    JMP(ExPRp);
}

int ExPRp() {
    // leave!
    rts();
    JMP(InitPlatformFall);
}

int InitPlatformFall() {
    tya();
    // move offset of other platform from Y to X
    tax();
    JSR(GetEnemyOffscreenBits);
    // get offscreen bits
    lda(Imm(0x6));
    JSR(SetupFloateyNumber);
    // award 1000 points to player
    lda((Player_Rel_XPos));
    sta((FloateyNum_X_Pos), x);
    // put floatey number coordinates where player is
    lda((Player_Y_Position));
    sta((FloateyNum_Y_Pos), x);
    lda(Imm(0x1));
    sta((Enemy_MovingDir), x);
    JMP(StopPlatforms);
}

int StopPlatforms() {
    JSR(InitVStf);
    sta((Enemy_Y_Speed), y);
    // initialize vertical speed and low byte
    // for both platforms and leave
    sta((Enemy_Y_MoveForce), y);
    rts();
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
    ldx((ObjectOffset));
    lda((PlatformCollisionFlag), x);
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
    ldx((ObjectOffset));
    rts();
    JMP(YMovingPlatform);
}

int YMovingPlatform() {
    lda((Enemy_Y_Speed), x);
    ora((Enemy_Y_MoveForce), x);
    // if platform moving up or down, skip ahead to
    // check on other position
    BNE(ChkYCenterPos);
    sta((Enemy_YMF_Dummy), x);
    // initialize dummy variable
    lda((Enemy_Y_Position), x);
    cmp((YPlatformTopYPos), x);
    BCS(ChkYCenterPos);
    // if current vertical position => top position, branch
    // ahead of all this
    lda((FrameCounter));
    anda(Imm(0b111));
    // check for every eighth frame
    BNE(SkipIY);
    inc((Enemy_Y_Position), x);
    JMP(SkipIY);
}

int SkipIY() {
    // increase vertical position every eighth frame
    // skip ahead to last part
    JMP(ChkYPCollision);
    JMP(ChkYCenterPos);
}

int ChkYCenterPos() {
    lda((Enemy_Y_Position), x);
    cmp((YPlatformCenterYPos), x);
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
    lda((PlatformCollisionFlag), x);
    BMI(ExYPl);
    JSR(PositionPlayerOnVPlat);
    JMP(ExYPl);
}

int ExYPl() {
    // if collision flag not set here, branch
    // to leave
    // otherwise position player appropriately
    // leave
    rts();
    JMP(XMovingPlatform);
}

int XMovingPlatform() {
    lda(Imm(0xe));
    JSR(XMoveCntr_Platform);
    JSR(MoveWithXMCntrs);
    lda((PlatformCollisionFlag), x);
    BMI(ExXMP);
    JMP(PositionPlayerOnHPlat);
}

int PositionPlayerOnHPlat() {
    lda((Player_X_Position));
    clc();
    adc(Imm(0x0));
    sta((Player_X_Position));
    lda((Player_PageLoc));
    ldy(Imm(0x0));
    BMI(PPHSubt);
    adc(Imm(0x0));
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
    sbc(Imm(0x0));
    JMP(SetPVar);
}

int SetPVar() {
    // save result to player's page location
    sta((Player_PageLoc));
    sty((Platform_X_Scroll));
    JSR(PositionPlayerOnVPlat);
    JMP(ExXMP);
}

int ExXMP() {
    // put saved value from second sub here to be used later
    // position player vertically and appropriately
    // and we are done here
    rts();
    JMP(DropPlatform);
}

int DropPlatform() {
    lda((PlatformCollisionFlag), x);
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
    rts();
    JMP(RightPlatform);
}

int RightPlatform() {
    JSR(MoveEnemyHorizontally);
    sta(Imm(0x0));
    lda((PlatformCollisionFlag), x);
    BMI(ExRPl);
    // $00 - residual value from sub
    // move platform with current horizontal speed, if any
    // store saved value here (residual code)
    // check collision flag, if no collision between player
    // and platform, branch ahead, leave speed unaltered
    lda(Imm(0x10));
    sta((Enemy_X_Speed), x);
    JSR(PositionPlayerOnHPlat);
    JMP(ExRPl);
}

int ExRPl() {
    // otherwise set new speed (gets moving if motionless)
    // use saved value from earlier sub to position player
    // then leave
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
    lda((TimerControl));
    BNE(ExLiftP);
    // if master timer control set, skip all of this
    // and branch to leave
    lda((Enemy_YMF_Dummy), x);
    clc();
    // add contents of movement amount to whatever's here
    adc((Enemy_Y_MoveForce), x);
    sta((Enemy_YMF_Dummy), x);
    lda((Enemy_Y_Position), x);
    adc((Enemy_Y_Speed), x);
    sta((Enemy_Y_Position), x);
    // add whatever vertical speed is set to current
    // vertical position plus carry to move up or down
    // and then leave
    rts();
    JMP(ChkSmallPlatCollision);
}

int ChkSmallPlatCollision() {
    lda((PlatformCollisionFlag), x);
    BEQ(ExLiftP);
    JSR(PositionPlayerOnS_Plat);
    JMP(ExLiftP);
}

int ExLiftP() {
    // get bounding box counter saved in collision flag
    // if none found, leave player position alone
    // use to position player correctly
    // then leave
    rts();
    JMP(OffscreenBoundsCheck);
}

int OffscreenBoundsCheck() {
    lda((Enemy_ID), x);
    cmp((FlyingCheepCheep));
    // check for cheep-cheep object
    // branch to leave if found
    BEQ(ExScrnBd);
    lda((ScreenLeft_X_Pos));
    // get horizontal coordinate for left side of screen
    ldy((Enemy_ID), x);
    cpy((HammerBro));
    // check for hammer bro object
    BEQ(LimitB);
    cpy((PiranhaPlant));
    BNE(ExtendLB);
    JMP(LimitB);
}

int LimitB() {
    // check for piranha plant object
    // these two will be erased sooner than others if too far left
    // add 56 pixels to coordinate if hammer bro or piranha plant
    adc(Imm(0x38));
    JMP(ExtendLB);
}

int ExtendLB() {
    // subtract 72 pixels regardless of enemy object
    sbc(Imm(0x48));
    sta(Imm(0x1));
    // store result here
    lda((ScreenLeft_PageLoc));
    sbc(Imm(0x0));
    sta(Imm(0x0));
    lda((ScreenRight_X_Pos));
    // subtract borrow from page location of left side
    // store result here
    // add 72 pixels to the right side horizontal coordinate
    adc(Imm(0x48));
    sta(Imm(0x3));
    // store result here
    lda((ScreenRight_PageLoc));
    adc(Imm(0x0));
    sta(Imm(0x2));
    lda((Enemy_X_Position), x);
    cmp(Imm(0x1));
    // then add the carry to the page location
    // and store result here
    // compare horizontal coordinate of the enemy object
    // to modified horizontal left edge coordinate to get carry
    lda((Enemy_PageLoc), x);
    sbc(Imm(0x0));
    BMI(TooFar);
    lda((Enemy_X_Position), x);
    cmp(Imm(0x3));
    // then subtract it from the page coordinate of the enemy object
    // if enemy object is too far left, branch to erase it
    // compare horizontal coordinate of the enemy object
    // to modified horizontal right edge coordinate to get carry
    lda((Enemy_PageLoc), x);
    sbc(Imm(0x2));
    BMI(ExScrnBd);
    lda((Enemy_State), x);
    cmp((HammerBro));
    // then subtract it from the page coordinate of the enemy object
    // if enemy object is on the screen, leave, do not erase enemy
    // if at this point, enemy is offscreen to the right, so check
    // if in state used by spiny's egg, do not erase
    BEQ(ExScrnBd);
    cpy((PiranhaPlant));
    // if piranha plant, do not erase
    BEQ(ExScrnBd);
    cpy((FlagpoleFlagObject));
    // if flagpole flag, do not erase
    BEQ(ExScrnBd);
    cpy((StarFlagObject));
    // if star flag, do not erase
    BEQ(ExScrnBd);
    cpy((JumpspringObject));
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
    rts();
    JMP(FireballEnemyCollision);
}

int FireballEnemyCollision() {
    lda((Fireball_State), x);
    BEQ(ExitFBallEnemy);
    // $01 - enemy buffer offset
    // check to see if fireball state is set at all
    // branch to leave if not
    asl();
    BCS(ExitFBallEnemy);
    // branch to leave also if d7 in state is set
    lda((FrameCounter));
    lsr();
    BCS(ExitFBallEnemy);
    // get LSB of frame counter
    // branch to leave if set (do routine every other frame)
    txa();
    asl();
    // multiply fireball offset by four
    asl();
    clc();
    adc(Imm(0x1c));
    tay();
    // then add $1c or 28 bytes to it
    // to use fireball's bounding box coordinates
    ldx(Imm(0x4));
    JMP(FireballEnemyCDLoop);
}

int FireballEnemyCDLoop() {
    stx(Imm(0x1));
    // store enemy object offset here
    tya();
    pha();
    // push fireball offset to the stack
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    BNE(NoFToECol);
    lda((Enemy_Flag), x);
    BEQ(NoFToECol);
    lda((Enemy_ID), x);
    // check to see if d5 is set in enemy state
    // if so, skip to next enemy slot
    // check to see if buffer flag is set
    // if not, skip to next enemy slot
    // check enemy identifier
    cmp(Imm(0x24));
    BCC(GoombaDie);
    // if < $24, branch to check further
    cmp(Imm(0x2b));
    BCC(NoFToECol);
    JMP(GoombaDie);
}

int GoombaDie() {
    // if in range $24-$2a, skip to next enemy slot
    // check for goomba identifier
    cmp((Goomba));
    BNE(NotGoomba);
    lda((Enemy_State), x);
    cmp(Imm(0x2));
    BCS(NoFToECol);
    JMP(NotGoomba);
}

int NotGoomba() {
    // if not found, continue with code
    // otherwise check for defeated state
    // if stomped or otherwise defeated,
    // skip to next enemy slot
    // if any masked offscreen bits set,
    lda((EnemyOffscrBitsMasked), x);
    BNE(NoFToECol);
    // skip to next enemy slot
    txa();
    asl();
    // otherwise multiply enemy offset by four
    asl();
    clc();
    adc(Imm(0x4));
    tax();
    JSR(SprObjectCollisionCore);
    ldx((ObjectOffset));
    BCC(NoFToECol);
    // add 4 bytes to it
    // to use enemy's bounding box coordinates
    // do fireball-to-enemy collision detection
    // return fireball's original offset
    // if carry clear, no collision, thus do next enemy slot
    lda(Imm(0b10000000));
    sta((Fireball_State), x);
    ldx(Imm(0x1));
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
    ldx(Imm(0x1));
    dex();
    BPL(FireballEnemyCDLoop);
    JMP(ExitFBallEnemy);
}

int ExitFBallEnemy() {
    ldx((ObjectOffset));
    // get original fireball offset and leave
    rts();
    JMP(HandleEnemyFBallCol);
}

int HandleEnemyFBallCol() {
    JSR(RelativeEnemyPosition);
    ldx(Imm(0x1));
    lda((Enemy_Flag), x);
    BPL(ChkBuzzyBeetle);
    anda(Imm(0b1111));
    tax();
    // get relative coordinate of enemy
    // get current enemy object offset
    // check buffer flag for d7 set
    // branch if not set to continue
    // otherwise mask out high nybble and
    // use low nybble as enemy offset
    lda((Enemy_ID), x);
    cmp((Bowser));
    BEQ(HurtBowser);
    ldx(Imm(0x1));
    JMP(ChkBuzzyBeetle);
}

int ChkBuzzyBeetle() {
    lda((Enemy_ID), x);
    cmp((BuzzyBeetle));
    BEQ(ExHCF);
    cmp((Bowser));
    BNE(ChkOtherEnemies);
    JMP(HurtBowser);
}

int HurtBowser() {
    dec((BowserHitPoints));
    BNE(ExHCF);
    JSR(InitVStf);
    sta((Enemy_X_Speed), x);
    sta((EnemyFrenzyBuffer));
    // decrement bowser's hit points
    // if bowser still has hit points, branch to leave
    // otherwise do sub to init vertical speed and movement force
    // initialize horizontal speed
    // init enemy frenzy buffer
    lda(Imm(0xfe));
    sta((Enemy_Y_Speed), x);
    ldy((WorldNumber));
    lda((BowserIdentities), y);
    sta((Enemy_ID), x);
    lda(Imm(0x20));
    cpy(Imm(0x3));
    BCS(SetDBSte);
    ora(Imm(0x3));
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
    sta((Enemy_State), x);
    lda((Sfx_BowserFall));
    sta((Square2SoundQueue));
    ldx(Imm(0x1));
    lda(Imm(0x9));
    BNE(EnemySmackScore);
    JMP(ChkOtherEnemies);
}

int ChkOtherEnemies() {
    cmp((BulletBill_FrenzyVar));
    BEQ(ExHCF);
    // branch to leave if bullet bill (frenzy variant)
    cmp((Podoboo));
    BEQ(ExHCF);
    // branch to leave if podoboo
    cmp(Imm(0x15));
    BCS(ExHCF);
    JMP(ShellOrBlockDefeat);
}

int ShellOrBlockDefeat() {
    lda((Enemy_ID), x);
    // check for piranha plant
    cmp((PiranhaPlant));
    BNE(StnE);
    // branch if not found
    lda((Enemy_Y_Position), x);
    adc(Imm(0x18));
    // add 24 pixels to enemy object's vertical position
    sta((Enemy_Y_Position), x);
    JMP(StnE);
}

int StnE() {
    // do yet another sub
    JSR(ChkToStunEnemies);
    lda((Enemy_State), x);
    anda(Imm(0b11111));
    ora(Imm(0b100000));
    // mask out 2 MSB of enemy object's state
    // set d5 to defeat enemy and save as new state
    sta((Enemy_State), x);
    lda(Imm(0x2));
    ldy((Enemy_ID), x);
    // award 200 points by default
    // check for hammer bro
    cpy((HammerBro));
    BNE(GoombaPoints);
    lda(Imm(0x6));
    JMP(GoombaPoints);
}

int GoombaPoints() {
    cpy((Goomba));
    BNE(EnemySmackScore);
    lda(Imm(0x1));
    JMP(EnemySmackScore);
}

int EnemySmackScore() {
    JSR(SetupFloateyNumber);
    lda((Sfx_EnemySmack));
    // update necessary score variables
    // play smack enemy sound
    sta((Square1SoundQueue));
    JMP(ExHCF);
}

int ExHCF() {
    // and now let's leave
    rts();
    JMP(PlayerHammerCollision);
}

int PlayerHammerCollision() {
    lda((FrameCounter));
    lsr();
    BCC(ExPHC);
    lda((TimerControl));
    ora((Misc_OffscreenBits));
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
    adc(Imm(0x24));
    tay();
    JSR(PlayerCollisionCore);
    ldx((ObjectOffset));
    BCC(ClHCol);
    lda((Misc_Collision_Flag), x);
    BNE(ExPHC);
    // add 36 or $24 bytes to get proper offset
    // for misc object bounding box coordinates
    // do player-to-hammer collision detection
    // get misc object offset
    // if no collision, then branch
    // otherwise read collision flag
    // if collision flag already set, branch to leave
    lda(Imm(0x1));
    sta((Misc_Collision_Flag), x);
    // otherwise set collision flag now
    lda((Misc_X_Speed), x);
    eor(Imm(0xff));
    clc();
    // get two's compliment of
    // hammer's horizontal speed
    adc(Imm(0x1));
    sta((Misc_X_Speed), x);
    lda((StarInvincibleTimer));
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
    lda(Imm(0x0));
    sta((Misc_Collision_Flag), x);
    JMP(ExPHC);
}

int ExPHC() {
    rts();
    JMP(HandlePowerUpCollision);
}

int HandlePowerUpCollision() {
    JSR(EraseEnemyObject);
    // erase the power-up object
    lda(Imm(0x6));
    JSR(SetupFloateyNumber);
    // award 1000 points to player by default
    lda((Sfx_PowerUpGrab));
    sta((Square2SoundQueue));
    lda((PowerUpType));
    // play the power-up sound
    // check power-up type
    cmp(Imm(0x2));
    BCC(Shroom_Flower_PUp);
    // if mushroom or fire flower, branch
    cmp(Imm(0x3));
    BEQ(SetFor1Up);
    lda(Imm(0x23));
    sta((StarInvincibleTimer));
    lda((StarPowerMusic));
    // if 1-up mushroom, branch
    // otherwise set star mario invincibility
    // timer, and load the star mario music
    // into the area music queue, then leave
    sta((AreaMusicQueue));
    rts();
    JMP(Shroom_Flower_PUp);
}

int Shroom_Flower_PUp() {
    lda((PlayerStatus));
    // if player status = small, branch
    BEQ(UpToSuper);
    cmp(Imm(0x1));
    // if player status not super, leave
    BNE(NoPUp);
    ldx((ObjectOffset));
    lda(Imm(0x2));
    // get enemy offset, not necessary
    // set player status to fiery
    sta((PlayerStatus));
    JSR(GetPlayerColors);
    ldx((ObjectOffset));
    lda(Imm(0xc));
    JMP(UpToFiery);
    JMP(SetFor1Up);
}

int SetFor1Up() {
    lda(Imm(0xb));
    sta((FloateyNum_Control), x);
    // change 1000 points into 1-up instead
    // and then leave
    rts();
    JMP(UpToSuper);
}

int UpToSuper() {
    lda(Imm(0x1));
    // set player status to super
    sta((PlayerStatus));
    lda(Imm(0x9));
    JMP(UpToFiery);
}

int UpToFiery() {
    ldy(Imm(0x0));
    JSR(SetPRout);
    JMP(NoPUp);
}

int NoPUp() {
    rts();
    JMP(PlayerEnemyCollision);
}

int PlayerEnemyCollision() {
    lda((FrameCounter));
    // check counter for d0 set
    lsr();
    BCS(NoPUp);
    JSR(CheckPlayerVertical);
    BCS(NoPECol);
    lda((EnemyOffscrBitsMasked), x);
    BNE(NoPECol);
    // if set, branch to leave
    // if player object is completely offscreen or
    // if down past 224th pixel row, branch to leave
    // if current enemy is offscreen by any amount,
    // go ahead and branch to leave
    lda((GameEngineSubroutine));
    cmp(Imm(0x8));
    BNE(NoPECol);
    // if not set to run player control routine
    // on next frame, branch to leave
    lda((Enemy_State), x);
    anda(Imm(0b100000));
    // if enemy state has d5 set, branch to leave
    BNE(NoPECol);
    JSR(GetEnemyBoundBoxOfs);
    JSR(PlayerCollisionCore);
    ldx((ObjectOffset));
    BCS(CheckForPUpCollision);
    // get bounding box offset for current enemy object
    // do collision detection on player vs. enemy
    // get enemy object buffer offset
    // if collision, branch past this part here
    lda((Enemy_CollisionBits), x);
    anda(Imm(0b11111110));
    sta((Enemy_CollisionBits), x);
    JMP(NoPECol);
}

int NoPECol() {
    rts();
    JMP(CheckForPUpCollision);
}

int CheckForPUpCollision() {
    ldy((Enemy_ID), x);
    cpy((PowerUpObject));
    BNE(EColl);
    JMP(HandlePowerUpCollision);
    JMP(EColl);
}

int EColl() {
    // check for power-up object
    // if not found, branch to next part
    // otherwise, unconditional jump backwards
    // if star mario invincibility timer expired,
    lda((StarInvincibleTimer));
    BEQ(HandlePECollisions);
    JMP(ShellOrBlockDefeat);
    JMP(HandlePECollisions);
}

int HandlePECollisions() {
    lda((Enemy_CollisionBits), x);
    anda(Imm(0b1));
    // check enemy collision bits for d0 set
    // or for being offscreen at all
    ora((EnemyOffscrBitsMasked), x);
    BNE(ExPEC);
    // branch to leave if either is true
    lda(Imm(0x1));
    ora((Enemy_CollisionBits), x);
    // otherwise set d0 now
    sta((Enemy_CollisionBits), x);
    cpy((Spiny));
    // branch if spiny
    BEQ(ChkForPlayerInjury);
    cpy((PiranhaPlant));
    // branch if piranha plant
    BEQ(InjurePlayer);
    cpy((Podoboo));
    // branch if podoboo
    BEQ(InjurePlayer);
    cpy((BulletBill_CannonVar));
    // branch if bullet bill
    BEQ(ChkForPlayerInjury);
    cpy(Imm(0x15));
    // branch if object => $15
    BCS(InjurePlayer);
    lda((AreaType));
    // branch if water type level
    BEQ(InjurePlayer);
    lda((Enemy_State), x);
    // branch if d7 of enemy state was set
    asl();
    BCS(ChkForPlayerInjury);
    lda((Enemy_State), x);
    // mask out all but 3 LSB of enemy state
    anda(Imm(0b111));
    cmp(Imm(0x2));
    // branch if enemy is in normal or falling state
    BCC(ChkForPlayerInjury);
    lda((Enemy_ID), x);
    // branch to leave if goomba in defeated state
    cmp((Goomba));
    BEQ(ExPEC);
    lda((Sfx_EnemySmack));
    // play smack enemy sound
    sta((Square1SoundQueue));
    lda((Enemy_State), x);
    // set d7 in enemy state, thus become moving shell
    ora(Imm(0b10000000));
    sta((Enemy_State), x);
    JSR(EnemyFacePlayer);
    lda((KickedShellXSpdData), y);
    // set moving direction and get offset
    // load and set horizontal speed data with offset
    sta((Enemy_X_Speed), x);
    lda(Imm(0x3));
    clc();
    // add three to whatever the stomp counter contains
    // to give points for kicking the shell
    adc((StompChainCounter));
    ldy((EnemyIntervalTimer), x);
    cpy(Imm(0x3));
    BCS(KSPts);
    lda((KickedShellPtsData), y);
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
    rts();
    JMP(ChkForPlayerInjury);
}

int ChkForPlayerInjury() {
    lda((Player_Y_Speed));
    BMI(ChkInj);
    BNE(EnemyStomped);
    JMP(ChkInj);
}

int ChkInj() {
    // check player's vertical speed
    // perform procedure below if player moving upwards
    // or not at all, and branch elsewhere if moving downwards
    // branch if enemy object < $07
    lda((Enemy_ID), x);
    cmp((Bloober));
    BCC(ChkETmrs);
    lda((Player_Y_Position));
    // add 12 pixels to player's vertical position
    clc();
    adc(Imm(0xc));
    cmp((Enemy_Y_Position), x);
    BCC(EnemyStomped);
    JMP(ChkETmrs);
}

int ChkETmrs() {
    // compare modified player's position to enemy's position
    // branch if this player's position above (less than) enemy's
    // check stomp timer
    lda((StompTimer));
    BNE(EnemyStomped);
    lda((InjuryTimer));
    BNE(ExInjColRoutines);
    // branch if set
    // check to see if injured invincibility timer still
    // counting down, and branch elsewhere to leave if so
    lda((Player_Rel_XPos));
    cmp((Enemy_Rel_XPos));
    BCC(TInjE);
    JMP(ChkEnemyFaceRight);
    JMP(TInjE);
}

int TInjE() {
    // if player's relative position to the left of enemy's
    // relative position, branch here
    // otherwise do a jump here
    // if enemy moving towards the left,
    lda((Enemy_MovingDir), x);
    cmp(Imm(0x1));
    BNE(InjurePlayer);
    // branch, otherwise do a jump here
    // to turn the enemy around
    JMP(LInj);
    JMP(InjurePlayer);
}

int InjurePlayer() {
    lda((InjuryTimer));
    BNE(ExInjColRoutines);
    JMP(ForceInjury);
}

int ForceInjury() {
    ldx((PlayerStatus));
    BEQ(KillPlayer);
    sta((PlayerStatus));
    // check player's status
    // branch if small
    // otherwise set player's status to small
    lda(Imm(0x8));
    sta((InjuryTimer));
    // set injured invincibility timer
    asl();
    sta((Square1SoundQueue));
    JSR(GetPlayerColors);
    lda(Imm(0xa));
    JMP(SetKRout);
}

int SetKRout() {
    // play pipedown/injury sound
    // change player's palette if necessary
    // set subroutine to run on next frame
    // set new player state
    ldy(Imm(0x1));
    JMP(SetPRout);
}

int SetPRout() {
    // load new value to run subroutine on next frame
    sta((GameEngineSubroutine));
    sty((Player_State));
    // store new player state
    ldy(Imm(0xff));
    sty((TimerControl));
    // set master timer control flag to halt timers
    iny();
    sty((ScrollAmount));
    JMP(ExInjColRoutines);
}

int ExInjColRoutines() {
    ldx((ObjectOffset));
    // get enemy offset and leave
    rts();
    JMP(KillPlayer);
}

int KillPlayer() {
    stx((Player_X_Speed));
    // halt player's horizontal movement by initializing speed
    inx();
    stx((EventMusicQueue));
    // set event music queue to death music
    lda(Imm(0xfc));
    sta((Player_Y_Speed));
    lda(Imm(0xb));
    BNE(SetKRout);
    JMP(EnemyStomped);
}

int EnemyStomped() {
    lda((Enemy_ID), x);
    cmp((Spiny));
    // check for spiny, branch to hurt player
    // if found
    BEQ(InjurePlayer);
    lda((Sfx_EnemyStomp));
    // otherwise play stomp/swim sound
    sta((Square1SoundQueue));
    lda((Enemy_ID), x);
    ldy(Imm(0x0));
    cmp((FlyingCheepCheep));
    // initialize points data offset for stomped enemies
    // branch for cheep-cheep
    BEQ(EnemyStompedPts);
    cmp((BulletBill_FrenzyVar));
    // branch for either bullet bill object
    BEQ(EnemyStompedPts);
    cmp((BulletBill_CannonVar));
    BEQ(EnemyStompedPts);
    cmp((Podoboo));
    BEQ(EnemyStompedPts);
    iny();
    cmp((HammerBro));
    // branch for podoboo (this branch is logically impossible
    // for cpu to take due to earlier checking of podoboo)
    // increment points data offset
    // branch for hammer bro
    BEQ(EnemyStompedPts);
    iny();
    cmp((Lakitu));
    // increment points data offset
    // branch for lakitu
    BEQ(EnemyStompedPts);
    iny();
    cmp((Bloober));
    // increment points data offset
    // branch if NOT bloober
    BNE(ChkForDemoteKoopa);
    JMP(EnemyStompedPts);
}

int EnemyStompedPts() {
    lda((StompedEnemyPtsData), y);
    JSR(SetupFloateyNumber);
    // load points data using offset in Y
    // run sub to set floatey number controls
    lda((Enemy_MovingDir), x);
    pha();
    JSR(SetStun);
    // save enemy movement direction to stack
    // run sub to kill enemy
    pla();
    sta((Enemy_MovingDir), x);
    // return enemy movement direction from stack
    lda(Imm(0b100000));
    sta((Enemy_State), x);
    JSR(InitVStf);
    sta((Enemy_X_Speed), x);
    lda(Imm(0xfd));
    // set d5 in enemy state
    // nullify vertical speed, physics-related thing,
    // and horizontal speed
    // set player's vertical speed, to give bounce
    sta((Player_Y_Speed));
    rts();
    JMP(ChkForDemoteKoopa);
}

int ChkForDemoteKoopa() {
    cmp(Imm(0x9));
    // branch elsewhere if enemy object < $09
    BCC(HandleStompedShellE);
    anda(Imm(0b1));
    // demote koopa paratroopas to ordinary troopas
    sta((Enemy_ID), x);
    ldy(Imm(0x0));
    // return enemy to normal state
    sty((Enemy_State), x);
    lda(Imm(0x3));
    // award 400 points to the player
    JSR(SetupFloateyNumber);
    JSR(InitVStf);
    JSR(EnemyFacePlayer);
    // nullify physics-related thing and vertical speed
    // turn enemy around if necessary
    lda((DemotedKoopaXSpdData), y);
    sta((Enemy_X_Speed), x);
    JMP(SBnce);
    JMP(HandleStompedShellE);
}

int HandleStompedShellE() {
    lda(Imm(0x4));
    // set defeated state for enemy
    sta((Enemy_State), x);
    inc((StompChainCounter));
    lda((StompChainCounter));
    clc();
    // increment the stomp counter
    // add whatever is in the stomp counter
    // to whatever is in the stomp timer
    adc((StompTimer));
    JSR(SetupFloateyNumber);
    inc((StompTimer));
    ldy((PrimaryHardMode));
    lda((RevivalRateData), y);
    sta((EnemyIntervalTimer), x);
    JMP(SBnce);
}

int SBnce() {
    // award points accordingly
    // increment stomp timer of some sort
    // check primary hard mode flag
    // load timer setting according to flag
    // set as enemy timer to revive stomped enemy
    // set player's vertical speed for bounce
    lda(Imm(0xfc));
    sta((Player_Y_Speed));
    // and then leave!!!
    rts();
    JMP(ChkEnemyFaceRight);
}

int ChkEnemyFaceRight() {
    lda((Enemy_MovingDir), x);
    // check to see if enemy is moving to the right
    cmp(Imm(0x1));
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
    ldy(Imm(0x1));
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
    sty((Enemy_MovingDir), x);
    dey();
    // then decrement to use as a proper offset
    rts();
    JMP(SetupFloateyNumber);
}

int SetupFloateyNumber() {
    sta((FloateyNum_Control), x);
    // set number of points control for floatey numbers
    lda(Imm(0x30));
    sta((FloateyNum_Timer), x);
    // set timer for floatey numbers
    lda((Enemy_Y_Position), x);
    sta((FloateyNum_Y_Pos), x);
    // set vertical coordinate
    lda((Enemy_Rel_XPos));
    sta((FloateyNum_X_Pos), x);
    JMP(ExSFN);
}

int ExSFN() {
    rts();
    JMP(EnemiesCollision);
}

int EnemiesCollision() {
    lda((FrameCounter));
    // check counter for d0 set
    lsr();
    BCC(ExSFN);
    // if d0 not set, leave
    lda((AreaType));
    BEQ(ExSFN);
    // if water area type, leave
    lda((Enemy_ID), x);
    cmp(Imm(0x15));
    // if enemy object => $15, branch to leave
    BCS(ExitECRoutine);
    cmp((Lakitu));
    // if lakitu, branch to leave
    BEQ(ExitECRoutine);
    cmp((PiranhaPlant));
    // if piranha plant, branch to leave
    BEQ(ExitECRoutine);
    lda((EnemyOffscrBitsMasked), x);
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
    stx(Imm(0x1));
    tya();
    // save first enemy's bounding box offset to stack
    pha();
    lda((Enemy_Flag), x);
    BEQ(ReadyNextEnemy);
    // check enemy object enable flag
    // branch if flag not set
    lda((Enemy_ID), x);
    cmp(Imm(0x15));
    BCS(ReadyNextEnemy);
    // check for enemy object => $15
    // branch if true
    cmp((Lakitu));
    BEQ(ReadyNextEnemy);
    // branch if enemy object is lakitu
    cmp((PiranhaPlant));
    BEQ(ReadyNextEnemy);
    // branch if enemy object is piranha plant
    lda((EnemyOffscrBitsMasked), x);
    BNE(ReadyNextEnemy);
    txa();
    asl();
    // branch if masked offscreen bits set
    // get second enemy object's bounding box offset
    // multiply by four, then add four
    asl();
    clc();
    adc(Imm(0x4));
    tax();
    JSR(SprObjectCollisionCore);
    ldx((ObjectOffset));
    ldy(Imm(0x1));
    BCC(NoEnemyCollision);
    // use as new contents of X
    // do collision detection using the two enemies here
    // use first enemy offset for X
    // use second enemy offset for Y
    // if carry clear, no collision, branch ahead of this
    lda((Enemy_State), x);
    ora((Enemy_State), y);
    // check both enemy states for d7 set
    anda(Imm(0b10000000));
    BNE(YesEC);
    lda((Enemy_CollisionBits), y);
    anda((SetBitsMask), x);
    BNE(ReadyNextEnemy);
    // branch if at least one of them is set
    // load first enemy's collision-related bits
    // check to see if bit connected to second enemy is
    // already set, and move onto next enemy slot if set
    lda((Enemy_CollisionBits), y);
    ora((SetBitsMask), x);
    // if the bit is not set, set it now
    sta((Enemy_CollisionBits), y);
    JMP(YesEC);
}

int YesEC() {
    // react according to the nature of collision
    JSR(ProcEnemyCollisions);
    JMP(ReadyNextEnemy);
    JMP(NoEnemyCollision);
}

int NoEnemyCollision() {
    lda((Enemy_CollisionBits), y);
    anda((ClearBitsMask), x);
    sta((Enemy_CollisionBits), y);
    JMP(ReadyNextEnemy);
}

int ReadyNextEnemy() {
    pla();
    tay();
    ldx(Imm(0x1));
    // get first enemy's bounding box offset from the stack
    // use as Y again
    // get and decrement second enemy's object buffer offset
    dex();
    BPL(ECLoop);
    JMP(ExitECRoutine);
}

int ExitECRoutine() {
    ldx((ObjectOffset));
    rts();
    JMP(ProcEnemyCollisions);
}

int ProcEnemyCollisions() {
    lda((Enemy_State), y);
    // check both enemy states for d5 set
    ora((Enemy_State), x);
    anda(Imm(0b100000));
    BNE(ExitProcessEColl);
    // if d5 is set in either state, or both, branch
    // to leave and do nothing else at this point
    lda((Enemy_State), x);
    cmp(Imm(0x6));
    // if second enemy state < $06, branch elsewhere
    BCC(ProcSecondEnemyColl);
    lda((Enemy_ID), x);
    cmp((HammerBro));
    // check second enemy identifier for hammer bro
    // if hammer bro found in alt state, branch to leave
    BEQ(ExitProcessEColl);
    lda((Enemy_State), y);
    // check first enemy state for d7 set
    asl();
    BCC(ShellCollisions);
    // branch if d7 is clear
    lda(Imm(0x6));
    JSR(SetupFloateyNumber);
    JSR(ShellOrBlockDefeat);
    ldy(Imm(0x1));
    JMP(ShellCollisions);
}

int ShellCollisions() {
    tya();
    // move Y to X
    tax();
    JSR(ShellOrBlockDefeat);
    // kill second enemy
    ldx((ObjectOffset));
    lda((ShellChainCounter), x);
    // get chain counter for shell
    clc();
    adc(Imm(0x4));
    // add four to get appropriate point offset
    ldx(Imm(0x1));
    JSR(SetupFloateyNumber);
    ldx((ObjectOffset));
    inc((ShellChainCounter), x);
    JMP(ExitProcessEColl);
}

int ExitProcessEColl() {
    rts();
    JMP(ProcSecondEnemyColl);
}

int ProcSecondEnemyColl() {
    lda((Enemy_State), y);
    // if first enemy state < $06, branch elsewhere
    cmp(Imm(0x6));
    BCC(MoveEOfs);
    lda((Enemy_ID), y);
    cmp((HammerBro));
    // check first enemy identifier for hammer bro
    // if hammer bro found in alt state, branch to leave
    BEQ(ExitProcessEColl);
    JSR(ShellOrBlockDefeat);
    // otherwise, kill first enemy
    ldy(Imm(0x1));
    lda((ShellChainCounter), y);
    // get chain counter for shell
    clc();
    adc(Imm(0x4));
    // add four to get appropriate point offset
    ldx((ObjectOffset));
    JSR(SetupFloateyNumber);
    ldx(Imm(0x1));
    inc((ShellChainCounter), x);
    rts();
    JMP(MoveEOfs);
}

int MoveEOfs() {
    tya();
    // move Y ($01) to X
    tax();
    JSR(EnemyTurnAround);
    ldx((ObjectOffset));
    JMP(EnemyTurnAround);
}

int EnemyTurnAround() {
    lda((Enemy_ID), x);
    // check for specific enemies
    cmp((PiranhaPlant));
    BEQ(ExTA);
    // if piranha plant, leave
    cmp((Lakitu));
    BEQ(ExTA);
    // if lakitu, leave
    cmp((HammerBro));
    BEQ(ExTA);
    // if hammer bro, leave
    cmp((Spiny));
    BEQ(RXSpd);
    // if spiny, turn it around
    cmp((GreenParatroopaJump));
    BEQ(RXSpd);
    // if green paratroopa, turn it around
    cmp(Imm(0x7));
    BCS(ExTA);
    JMP(RXSpd);
}

int RXSpd() {
    // if any OTHER enemy object => $07, leave
    // load horizontal speed
    lda((Enemy_X_Speed), x);
    eor(Imm(0xff));
    // get two's compliment for horizontal speed
    tay();
    iny();
    sty((Enemy_X_Speed), x);
    // store as new horizontal speed
    lda((Enemy_MovingDir), x);
    eor(Imm(0b11));
    sta((Enemy_MovingDir), x);
    JMP(ExTA);
}

int ExTA() {
    // invert moving direction and store, then leave
    // thus effectively turning the enemy around
    // leave!!!
    rts();
    JMP(LargePlatformCollision);
}

int LargePlatformCollision() {
    lda(Imm(0xff));
    // $00 - vertical position of platform
    // save value here
    sta((PlatformCollisionFlag), x);
    lda((TimerControl));
    BNE(ExLPC);
    lda((Enemy_State), x);
    BMI(ExLPC);
    // check master timer control
    // if set, branch to leave
    // if d7 set in object state,
    // branch to leave
    lda((Enemy_ID), x);
    cmp(Imm(0x24));
    BNE(ChkForPlayerC_LargeP);
    // check enemy object identifier for
    // balance platform, branch if not found
    lda((Enemy_State), x);
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
    lda((Enemy_Y_Position), x);
    sta(Imm(0x0));
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
    ldx((ObjectOffset));
    rts();
    JMP(SmallPlatformCollision);
}

int SmallPlatformCollision() {
    lda((TimerControl));
    BNE(ExSPC);
    sta((PlatformCollisionFlag), x);
    JSR(CheckPlayerVertical);
    BCS(ExSPC);
    // $00 - counter for bounding boxes
    // if master timer control set,
    // branch to leave
    // otherwise initialize collision flag
    // do a sub to see if player is below a certain point
    // or entirely offscreen, and branch to leave if true
    lda(Imm(0x2));
    sta(Imm(0x0));
    JMP(ChkSmallPlatLoop);
}

int ChkSmallPlatLoop() {
    ldx((ObjectOffset));
    JSR(GetEnemyBoundBoxOfs);
    anda(Imm(0b10));
    BNE(ExSPC);
    lda((BoundingBox_UL_YPos), y);
    cmp(Imm(0x20));
    BCC(MoveBoundBox);
    JSR(PlayerCollisionCore);
    BCS(ProcSPlatCollisions);
    JMP(MoveBoundBox);
}

int MoveBoundBox() {
    lda((BoundingBox_UL_YPos), y);
    clc();
    // move bounding box vertical coordinates
    // 128 pixels downwards
    adc(Imm(0x80));
    sta((BoundingBox_UL_YPos), y);
    lda((BoundingBox_DR_YPos), y);
    clc();
    adc(Imm(0x80));
    sta((BoundingBox_DR_YPos), y);
    dec(Imm(0x0));
    BNE(ChkSmallPlatLoop);
    JMP(ExSPC);
}

int ExSPC() {
    // decrement counter we set earlier
    // loop back until both bounding boxes are checked
    // get enemy object buffer offset, then leave
    ldx((ObjectOffset));
    rts();
    JMP(ProcSPlatCollisions);
}

int ProcSPlatCollisions() {
    ldx((ObjectOffset));
    JMP(ProcLPlatCollisions);
}

int ProcLPlatCollisions() {
    lda((BoundingBox_DR_YPos), y);
    sec();
    sbc((BoundingBox_UL_YPos));
    cmp(Imm(0x4));
    BCS(ChkForTopCollision);
    lda((Player_Y_Speed));
    BPL(ChkForTopCollision);
    lda(Imm(0x1));
    sta((Player_Y_Speed));
    JMP(ChkForTopCollision);
}

int ChkForTopCollision() {
    lda((BoundingBox_DR_YPos));
    sec();
    sbc((BoundingBox_UL_YPos), y);
    // get difference by subtracting the top
    // of the platform's bounding box from the bottom
    // of the player's bounding box
    cmp(Imm(0x6));
    BCS(PlatformSideCollisions);
    // if difference not close enough, skip all of this
    lda((Player_Y_Speed));
    BMI(PlatformSideCollisions);
    lda(Imm(0x0));
    // if player's vertical speed moving upwards, skip this
    // get saved bounding box counter from earlier
    ldy((Enemy_ID), x);
    cpy(Imm(0x2b));
    BEQ(SetCollisionFlag);
    cpy(Imm(0x2c));
    // if either of the two small platform objects are found,
    // regardless of which one, branch to use bounding box counter
    // as contents of collision flag
    BEQ(SetCollisionFlag);
    txa();
    JMP(SetCollisionFlag);
}

int SetCollisionFlag() {
    ldx((ObjectOffset));
    sta((PlatformCollisionFlag), x);
    // get enemy object buffer offset
    // save either bounding box counter or enemy offset here
    lda(Imm(0x0));
    sta((Player_State));
    // set player state to normal then leave
    rts();
    JMP(PlatformSideCollisions);
}

int PlatformSideCollisions() {
    lda(Imm(0x1));
    sta(Imm(0x0));
    lda((BoundingBox_DR_XPos));
    sec();
    // set value here to indicate possible horizontal
    // collision on left side of platform
    // get difference by subtracting platform's left edge
    // from player's right edge
    sbc((BoundingBox_UL_XPos), y);
    cmp(Imm(0x8));
    // if difference close enough, skip all of this
    BCC(SideC);
    inc(Imm(0x0));
    lda((BoundingBox_DR_XPos), y);
    clc();
    // otherwise increment value set here for right side collision
    // get difference by subtracting player's left edge
    // from platform's right edge
    sbc((BoundingBox_UL_XPos));
    cmp(Imm(0x9));
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
    ldx((ObjectOffset));
    rts();
    JMP(PositionPlayerOnS_Plat);
}

int PositionPlayerOnS_Plat() {
    tay();
    lda((Enemy_Y_Position), x);
    clc();
    adc((((PlayerPosSPlatData)) - (Imm(1))), y);
    BRA(_bit_hack_22679);
    JMP(PositionPlayerOnVPlat);
}

int PositionPlayerOnVPlat() {
    lda((Enemy_Y_Position), x);
    JMP(_bit_hack_22679);
}

int _bit_hack_22679() {
    ldy((GameEngineSubroutine));
    cpy(Imm(0xb));
    BEQ(ExPlPos);
    // if certain routine being executed on this frame,
    // skip all of this
    ldy((Enemy_Y_HighPos), x);
    cpy(Imm(0x1));
    // if vertical high byte offscreen, skip this
    BNE(ExPlPos);
    sec();
    sbc(Imm(0x20));
    sta((Player_Y_Position));
    // subtract 32 pixels from vertical coordinate
    // for the player object's height
    // save as player's new vertical coordinate
    tya();
    sbc(Imm(0x0));
    sta((Player_Y_HighPos));
    // subtract borrow and store as player's
    // new vertical high byte
    lda(Imm(0x0));
    sta((Player_Y_Speed));
    sta((Player_Y_MoveForce));
    JMP(ExPlPos);
}

int ExPlPos() {
    rts();
    JMP(CheckPlayerVertical);
}

int CheckPlayerVertical() {
    lda((Player_OffscreenBits));
    cmp(Imm(0xf0));
    // if player object is completely offscreen
    // vertically, leave this routine
    BCS(ExCPV);
    ldy((Player_Y_HighPos));
    dey();
    // if player high vertical byte is not
    // within the screen, leave this routine
    BNE(ExCPV);
    lda((Player_Y_Position));
    cmp(Imm(0xd0));
    JMP(ExCPV);
}

int ExCPV() {
    rts();
    JMP(GetEnemyBoundBoxOfs);
}

int GetEnemyBoundBoxOfs() {
    lda((ObjectOffset));
    JMP(GetEnemyBoundBoxOfsArg);
}

int GetEnemyBoundBoxOfsArg() {
    asl();
    asl();
    // multiply A by four, then add four
    // to skip player's bounding box
    clc();
    adc(Imm(0x4));
    tay();
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1111));
    cmp(Imm(0b1111));
    // send to Y
    // get offscreen bits for enemy object
    // save low nybble
    // check for all bits set
    rts();
    JMP(PlayerBGCollision);
}

int PlayerBGCollision() {
    lda((DisableCollisionDet));
    BNE(ExPBGCol);
    // if collision detection disabled flag set,
    // branch to leave
    lda((GameEngineSubroutine));
    cmp(Imm(0xb));
    BEQ(ExPBGCol);
    // if running routine #11 or $0b
    // branch to leave
    cmp(Imm(0x4));
    BCC(ExPBGCol);
    lda(Imm(0x1));
    ldy((SwimmingFlag));
    BNE(SetPSte);
    lda((Player_State));
    BEQ(SetFallS);
    // if running routines $00-$03 branch to leave
    // load default player state for swimming
    // if swimming flag set,
    // branch ahead to set default state
    // if player in normal state,
    // branch to set default state for falling
    cmp(Imm(0x3));
    BNE(ChkOnScr);
    JMP(SetFallS);
}

int SetFallS() {
    // if in any other state besides climbing, skip to next part
    // load default player state for falling
    lda(Imm(0x2));
    JMP(SetPSte);
}

int SetPSte() {
    // set whatever player state is appropriate
    sta((Player_State));
    JMP(ChkOnScr);
}

int ChkOnScr() {
    lda((Player_Y_HighPos));
    cmp(Imm(0x1));
    BNE(ExPBGCol);
    // check player's vertical high byte for still on the screen
    // branch to leave if not
    lda(Imm(0xff));
    sta((Player_CollisionBits));
    // initialize player's collision flag
    lda((Player_Y_Position));
    cmp(Imm(0xcf));
    BCC(ChkCollSize);
    JMP(ExPBGCol);
}

int ExPBGCol() {
    // check player's vertical coordinate
    // if not too close to the bottom of screen, continue
    // otherwise leave
    rts();
    JMP(ChkCollSize);
}

int ChkCollSize() {
    ldy(Imm(0x2));
    // load default offset
    lda((CrouchingFlag));
    BNE(GBBAdr);
    // if player crouching, skip ahead
    lda((PlayerSize));
    BNE(GBBAdr);
    dey();
    // if player small, skip ahead
    // otherwise decrement offset for big player not crouching
    lda((SwimmingFlag));
    BNE(GBBAdr);
    dey();
    JMP(GBBAdr);
}

int GBBAdr() {
    // if swimming flag set, skip ahead
    // otherwise decrement offset
    // get value using offset
    lda((BlockBufferAdderData), y);
    sta(Imm(0xeb));
    tay();
    ldx((PlayerSize));
    // store value here
    // put value into Y, as offset for block buffer routine
    // get player's size as offset
    lda((CrouchingFlag));
    BEQ(HeadChk);
    inx();
    JMP(HeadChk);
}

int HeadChk() {
    // if player not crouching, branch ahead
    // otherwise increment size as offset
    // get player's vertical coordinate
    lda((Player_Y_Position));
    cmp((PlayerBGUpperExtent), x);
    BCC(DoFootCheck);
    JSR(BlockBufferColli_Head);
    BEQ(DoFootCheck);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    ldy((Player_Y_Speed));
    BPL(DoFootCheck);
    ldy(Imm(0x4));
    cpy(Imm(0x4));
    BCC(DoFootCheck);
    JSR(CheckForSolidMTiles);
    BCS(SolidOrClimb);
    ldy((AreaType));
    BEQ(NYSpd);
    ldy((BlockBounceTimer));
    BNE(NYSpd);
    JSR(PlayerHeadCollision);
    JMP(DoFootCheck);
    JMP(SolidOrClimb);
}

int SolidOrClimb() {
    cmp(Imm(0x26));
    BEQ(NYSpd);
    // if climbing metatile,
    // branch ahead and do not play sound
    lda((Sfx_Bump));
    sta((Square1SoundQueue));
    JMP(NYSpd);
}

int NYSpd() {
    // otherwise load bump sound
    // set player's vertical speed to nullify
    lda(Imm(0x1));
    sta((Player_Y_Speed));
    JMP(DoFootCheck);
}

int DoFootCheck() {
    ldy(Imm(0xeb));
    // get block buffer adder offset
    lda((Player_Y_Position));
    cmp(Imm(0xcf));
    BCS(DoPlayerSideCheck);
    JSR(BlockBufferColli_Feet);
    JSR(CheckForCoinMTiles);
    BCS(AwardTouchedCoin);
    pha();
    JSR(BlockBufferColli_Feet);
    sta(Imm(0x0));
    // check to see how low player is
    // if player is too far down on screen, skip all of this
    // do player-to-bg collision detection on bottom left of player
    // check to see if player touched coin with their left foot
    // if so, branch to some other part of code
    // save bottom left metatile to stack
    // do player-to-bg collision detection on bottom right of player
    // save bottom right metatile here
    pla();
    sta(Imm(0x1));
    BNE(ChkFootMTile);
    lda(Imm(0x0));
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
    ldy((Player_Y_Speed));
    BMI(DoPlayerSideCheck);
    // check to see if player landed on climbable metatiles
    // if so, branch
    // check player's vertical speed
    // if player moving upwards, branch
    cmp(Imm(0xc5));
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
    ldy((JumpspringAnimCtrl));
    BNE(InitSteP);
    ldy(Imm(0x4));
    cpy(Imm(0x5));
    BCC(LandPlyr);
    // if either found, branch
    // if jumpspring animating right now,
    // branch ahead
    // check lower nybble of vertical coordinate returned
    // from collision detection routine
    // if lower nybble < 5, branch
    lda((Player_MovingDir));
    sta(Imm(0x0));
    JMP(ImpedePlayerMove);
    JMP(LandPlyr);
}

int LandPlyr() {
    // use player's moving direction as temp variable
    // jump to impede player's movement in that direction
    // do sub to check for jumpspring metatiles and deal with it
    JSR(ChkForLandJumpSpring);
    lda(Imm(0xf0));
    anda((Player_Y_Position));
    sta((Player_Y_Position));
    JSR(HandlePipeEntry);
    // mask out lower nybble of player's vertical position
    // and store as new vertical position to land player properly
    // do sub to process potential pipe entry
    lda(Imm(0x0));
    sta((Player_Y_Speed));
    sta((Player_Y_MoveForce));
    sta((StompChainCounter));
    JMP(InitSteP);
}

int InitSteP() {
    lda(Imm(0x0));
    sta((Player_State));
    JMP(DoPlayerSideCheck);
}

int DoPlayerSideCheck() {
    ldy(Imm(0xeb));
    // get block buffer adder offset
    iny();
    iny();
    lda(Imm(0x2));
    // increment offset 2 bytes to use adders for side collisions
    // set value here to be used as counter
    sta(Imm(0x0));
    JMP(SideCheckLoop);
}

int SideCheckLoop() {
    iny();
    sty(Imm(0xeb));
    // move onto the next one
    // store it
    lda((Player_Y_Position));
    cmp(Imm(0x20));
    BCC(BHalf);
    // check player's vertical position
    // if player is in status bar area, branch ahead to skip this part
    cmp(Imm(0xe4));
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BEQ(BHalf);
    cmp(Imm(0x1c));
    BEQ(BHalf);
    // branch to leave if player is too far down
    // do player-to-bg collision detection on one half of player
    // branch ahead if nothing found
    // otherwise check for pipe metatiles
    // if collided with sideways pipe (top), branch ahead
    cmp(Imm(0x6b));
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
    ldy(Imm(0xeb));
    iny();
    lda((Player_Y_Position));
    // increment it
    // get player's vertical position
    cmp(Imm(0x8));
    BCC(ExSCH);
    // if too high, branch to leave
    cmp(Imm(0xd0));
    BCS(ExSCH);
    JSR(BlockBufferColli_Side);
    BNE(CheckSideMTiles);
    dec(Imm(0x0));
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
    lda((JumpspringAnimCtrl));
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
    ldy((Player_State));
    cpy(Imm(0x0));
    BNE(StopPlayerMove);
    ldy((PlayerFacingDir));
    // check for player's state set to normal
    // if not, branch to impede player's movement
    // get player's facing direction
    dey();
    BNE(StopPlayerMove);
    cmp(Imm(0x6c));
    BEQ(PipeDwnS);
    cmp(Imm(0x1f));
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
    lda((Player_SprAttrib));
    BNE(PlyrPipe);
    // if already set, branch, do not play sound again
    ldy((Sfx_PipeDown_Injury));
    sty((Square1SoundQueue));
    JMP(PlyrPipe);
}

int PlyrPipe() {
    ora(Imm(0b100000));
    sta((Player_SprAttrib));
    // set background priority bit in player attributes
    lda((Player_X_Position));
    anda(Imm(0b1111));
    BEQ(ChkGERtn);
    ldy(Imm(0x0));
    lda((ScreenLeft_PageLoc));
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
    lda((AreaChangeTimerData), y);
    sta((ChangeAreaTimer));
    JMP(ChkGERtn);
}

int ChkGERtn() {
    // get number of game engine routine running
    lda((GameEngineSubroutine));
    cmp(Imm(0x7));
    BEQ(ExCSM);
    cmp(Imm(0x8));
    // if running player entrance routine or
    // player control routine, go ahead and branch to leave
    BNE(ExCSM);
    lda(Imm(0x2));
    sta((GameEngineSubroutine));
    rts();
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
    rts();
    JMP(HandleCoinMetatile);
}

int HandleCoinMetatile() {
    JSR(ErACM);
    inc((CoinTallyFor1Ups));
    JMP(GiveOneCoin);
    JMP(HandleAxeMetatile);
}

int HandleAxeMetatile() {
    lda(Imm(0x0));
    sta((OperMode_Task));
    // reset secondary mode
    lda(Imm(0x2));
    sta((OperMode));
    // set primary mode to autoctrl mode
    lda(Imm(0x18));
    sta((Player_X_Speed));
    JMP(ErACM);
}

int ErACM() {
    // set horizontal speed and continue to erase axe metatile
    // load vertical high nybble offset for block buffer
    ldy(Imm(0x2));
    lda(Imm(0x0));
    sta((Imm(0x6)), y);
    JMP(RemoveCoin_Axe);
    JMP(HandleClimbing);
}

int HandleClimbing() {
    ldy(Imm(0x4));
    cpy(Imm(0x6));
    BCC(ExHC);
    cpy(Imm(0xa));
    // check low nybble of horizontal coordinate returned from
    // collision detection routine against certain values, this
    // makes actual physical part of vine or flagpole thinner
    // than 16 pixels
    BCC(ChkForFlagpole);
    JMP(ExHC);
}

int ExHC() {
    // leave if too far left or too far right
    rts();
    JMP(ChkForFlagpole);
}

int ChkForFlagpole() {
    cmp(Imm(0x24));
    BEQ(FlagpoleCollision);
    // check climbing metatiles
    // branch if flagpole ball found
    cmp(Imm(0x25));
    BNE(VineCollision);
    JMP(FlagpoleCollision);
}

int FlagpoleCollision() {
    lda((GameEngineSubroutine));
    cmp(Imm(0x5));
    BEQ(PutPlayerOnVine);
    // check for end-of-level routine running
    // if running, branch to end of climbing code
    lda(Imm(0x1));
    sta((PlayerFacingDir));
    inc((ScrollLock));
    // set player's facing direction to right
    // set scroll lock flag
    lda((GameEngineSubroutine));
    cmp(Imm(0x4));
    BEQ(RunFR);
    lda((BulletBill_CannonVar));
    JSR(KillEnemies);
    // check for flagpole slide routine running
    // if running, branch to end of flagpole code here
    // load identifier for bullet bills (cannon variant)
    // get rid of them
    lda((Silence));
    sta((EventMusicQueue));
    // silence music
    lsr();
    sta((FlagpoleSoundQueue));
    ldx(Imm(0x4));
    // load flagpole sound into flagpole sound queue
    // start at end of vertical coordinate data
    lda((Player_Y_Position));
    sta((FlagpoleCollisionYPos));
    JMP(ChkFlagpoleYPosLoop);
}

int ChkFlagpoleYPosLoop() {
    cmp((FlagpoleYPosData), x);
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
    stx((FlagpoleScore));
    JMP(RunFR);
}

int RunFR() {
    lda(Imm(0x4));
    sta((GameEngineSubroutine));
    JMP(PutPlayerOnVine);
    JMP(VineCollision);
}

int VineCollision() {
    cmp(Imm(0x26));
    // check for climbing metatile used on vines
    BNE(PutPlayerOnVine);
    lda((Player_Y_Position));
    cmp(Imm(0x20));
    BCS(PutPlayerOnVine);
    // check player's vertical coordinate
    // for being in status bar area
    // branch if not that far up
    lda(Imm(0x1));
    sta((GameEngineSubroutine));
    JMP(PutPlayerOnVine);
}

int PutPlayerOnVine() {
    lda(Imm(0x3));
    // set player state to climbing
    sta((Player_State));
    lda(Imm(0x0));
    sta((Player_X_Speed));
    // nullify player's horizontal speed
    // and fractional horizontal movement force
    sta((Player_X_MoveForce));
    lda((Player_X_Position));
    // get player's horizontal coordinate
    sec();
    sbc((ScreenLeft_X_Pos));
    // subtract from left side horizontal coordinate
    cmp(Imm(0x10));
    BCS(SetVXPl);
    // if 16 or more pixels difference, do not alter facing direction
    lda(Imm(0x2));
    sta((PlayerFacingDir));
    JMP(SetVXPl);
}

int SetVXPl() {
    // otherwise force player to face left
    // get current facing direction, use as offset
    ldy((PlayerFacingDir));
    lda(Imm(0x6));
    // get low byte of block buffer address
    asl();
    asl();
    // move low nybble to high
    asl();
    asl();
    clc();
    adc((((ClimbXPosAdder)) - (Imm(1))), y);
    sta((Player_X_Position));
    lda(Imm(0x6));
    BNE(ExPVne);
    lda((ScreenRight_PageLoc));
    // add pixels depending on facing direction
    // store as player's horizontal coordinate
    // get low byte of block buffer address again
    // if not zero, branch
    // load page location of right side of screen
    clc();
    adc((((ClimbPLocAdder)) - (Imm(1))), y);
    sta((Player_PageLoc));
    JMP(ExPVne);
}

int ExPVne() {
    // add depending on facing location
    // store as player's page location
    // finally, we're done!
    rts();
    JMP(ChkInvisibleMTiles);
}

int ChkInvisibleMTiles() {
    cmp(Imm(0x5f));
    BEQ(ExCInvT);
    cmp(Imm(0x60));
    JMP(ExCInvT);
}

int ExCInvT() {
    // check for hidden coin block
    // branch to leave if found
    // check for hidden 1-up block
    // leave with zero flag set if either found
    rts();
    JMP(ChkForLandJumpSpring);
}

int ChkForLandJumpSpring() {
    JSR(ChkJumpspringMetatiles);
    BCC(ExCJSp);
    // do sub to check if player landed on jumpspring
    // if carry not set, jumpspring not found, therefore leave
    lda(Imm(0x70));
    sta((VerticalForce));
    // otherwise set vertical movement force for player
    lda(Imm(0xf9));
    sta((JumpspringForce));
    // set default jumpspring force
    lda(Imm(0x3));
    sta((JumpspringTimer));
    // set jumpspring timer to be used later
    lsr();
    sta((JumpspringAnimCtrl));
    JMP(ExCJSp);
}

int ExCJSp() {
    // set jumpspring animation control to start animating
    // and leave
    rts();
    JMP(ChkJumpspringMetatiles);
}

int ChkJumpspringMetatiles() {
    cmp(Imm(0x67));
    BEQ(JSFnd);
    cmp(Imm(0x68));
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
    rts();
    JMP(HandlePipeEntry);
}

int HandlePipeEntry() {
    lda((Up_Down_Buttons));
    anda(Imm(0b100));
    BEQ(ExPipeE);
    // check saved controller bits from earlier
    // for pressing down
    // if not pressing down, branch to leave
    lda(Imm(0x0));
    cmp(Imm(0x11));
    BNE(ExPipeE);
    // check right foot metatile for warp pipe right metatile
    // branch to leave if not found
    lda(Imm(0x1));
    cmp(Imm(0x10));
    BNE(ExPipeE);
    // check left foot metatile for warp pipe left metatile
    // branch to leave if not found
    lda(Imm(0x30));
    sta((ChangeAreaTimer));
    // set timer for change of area
    lda(Imm(0x3));
    sta((GameEngineSubroutine));
    // set to run vertical pipe entry routine on next frame
    lda((Sfx_PipeDown_Injury));
    sta((Square1SoundQueue));
    // load pipedown/injury sound
    lda(Imm(0b100000));
    sta((Player_SprAttrib));
    lda((WarpZoneControl));
    BEQ(ExPipeE);
    anda(Imm(0b11));
    // set background priority bit in player's attributes
    // check warp zone control
    // branch to leave if none found
    // mask out all but 2 LSB
    asl();
    asl();
    tax();
    lda((Player_X_Position));
    // multiply by four
    // save as offset to warp zone numbers (starts at left pipe)
    // get player's horizontal position
    cmp(Imm(0x60));
    BCC(GetWNum);
    inx();
    // if player at left, not near middle, use offset and skip ahead
    // otherwise increment for middle pipe
    cmp(Imm(0xa0));
    BCC(GetWNum);
    inx();
    JMP(GetWNum);
}

int GetWNum() {
    // if player at middle, but not too far right, use offset and skip
    // otherwise increment for last pipe
    // get warp zone numbers
    ldy((WarpZoneNumbers), x);
    dey();
    sty((WorldNumber));
    ldx((WorldAddrOffsets), y);
    lda((AreaAddrOffsets), x);
    sta((AreaPointer));
    // decrement for use as world number
    // store as world number and offset
    // get offset to where this world's area offsets are
    // get area offset based on world offset
    // store area offset here to be used to change areas
    lda((Silence));
    sta((EventMusicQueue));
    // silence music
    lda(Imm(0x0));
    sta((EntrancePage));
    sta((AreaNumber));
    sta((LevelNumber));
    sta((AltEntranceControl));
    inc((Hidden1UpFlag));
    inc((FetchNewGameTimerFlag));
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
    rts();
    JMP(ImpedePlayerMove);
}

int ImpedePlayerMove() {
    lda(Imm(0x0));
    ldy((Player_X_Speed));
    ldx(Imm(0x0));
    dex();
    BNE(RImpd);
    inx();
    cpy(Imm(0x0));
    BMI(ExIPM);
    lda(Imm(0xff));
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
    ldx(Imm(0x2));
    cpy(Imm(0x1));
    BPL(ExIPM);
    lda(Imm(0x1));
    JMP(NXSpd);
}

int NXSpd() {
    ldy(Imm(0x10));
    sty((SideCollisionTimer));
    // set timer of some sort
    ldy(Imm(0x0));
    sty((Player_X_Speed));
    cmp(Imm(0x0));
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
    sty(Imm(0x0));
    clc();
    adc((Player_X_Position));
    sta((Player_X_Position));
    // add contents of A to player's horizontal
    // position to move player left or right
    lda((Player_PageLoc));
    adc(Imm(0x0));
    sta((Player_PageLoc));
    JMP(ExIPM);
}

int ExIPM() {
    // add high bits and carry to
    // page location if necessary
    // invert contents of X
    txa();
    eor(Imm(0xff));
    anda((Player_CollisionBits));
    sta((Player_CollisionBits));
    // mask out bit that was set here
    // store to clear bit
    rts();
    JMP(CheckForSolidMTiles);
}

int CheckForSolidMTiles() {
    JSR(GetMTileAttrib);
    cmp((SolidMTileUpperExt), x);
    // find appropriate offset based on metatile's 2 MSB
    // compare current metatile with solid metatiles
    rts();
    JMP(CheckForClimbMTiles);
}

int CheckForClimbMTiles() {
    JSR(GetMTileAttrib);
    cmp((ClimbMTileUpperExt), x);
    // find appropriate offset based on metatile's 2 MSB
    // compare current metatile with climbable metatiles
    rts();
    JMP(CheckForCoinMTiles);
}

int CheckForCoinMTiles() {
    cmp(Imm(0xc2));
    BEQ(CoinSd);
    cmp(Imm(0xc3));
    BEQ(CoinSd);
    clc();
    // check for regular coin
    // branch if found
    // check for underwater coin
    // branch if found
    // otherwise clear carry and leave
    rts();
    JMP(CoinSd);
}

int CoinSd() {
    lda((Sfx_CoinGrab));
    sta((Square2SoundQueue));
    // load coin grab sound and leave
    rts();
    JMP(GetMTileAttrib);
}

int GetMTileAttrib() {
    tay();
    anda(Imm(0b11000000));
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
    rts();
    JMP(EnemyToBGCollisionDet);
}

int EnemyToBGCollisionDet() {
    lda((Enemy_State), x);
    // check enemy state for d6 set
    anda(Imm(0b100000));
    BNE(ExEBG);
    JSR(SubtEnemyYPos);
    BCC(ExEBG);
    // if set, branch to leave
    // otherwise, do a subroutine here
    // if enemy vertical coord + 62 < 68, branch to leave
    ldy((Enemy_ID), x);
    cpy((Spiny));
    // if enemy object is not spiny, branch elsewhere
    BNE(DoIDCheckBGColl);
    lda((Enemy_Y_Position), x);
    cmp(Imm(0x25));
    // if enemy vertical coordinate < 36 branch to leave
    BCC(ExEBG);
    JMP(DoIDCheckBGColl);
}

int DoIDCheckBGColl() {
    cpy((GreenParatroopaJump));
    BNE(HBChk);
    JMP(EnemyJump);
    JMP(HBChk);
}

int HBChk() {
    // check for some other enemy object
    // branch if not found
    // otherwise jump elsewhere
    // check for hammer bro
    cpy((HammerBro));
    BNE(CInvu);
    JMP(HammerBroBGColl);
    JMP(CInvu);
}

int CInvu() {
    // branch if not found
    // otherwise jump elsewhere
    // if enemy object is spiny, branch
    cpy((Spiny));
    BEQ(YesIn);
    cpy((PowerUpObject));
    // if special power-up object, branch
    BEQ(YesIn);
    cpy(Imm(0x7));
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
    cmp(Imm(0x23));
    BNE(LandEnemyProperly);
    ldy(Imm(0x2));
    lda(Imm(0x0));
    sta((Imm(0x6)), y);
    // check for blank metatile $23 and branch if not found
    // get vertical coordinate used to find block
    // store default blank metatile in that spot so we won't
    // trigger this routine accidentally again
    lda((Enemy_ID), x);
    cmp(Imm(0x15));
    // if enemy object => $15, branch ahead
    BCS(ChkToStunEnemies);
    cmp((Goomba));
    // if enemy object not goomba, branch ahead of this routine
    BNE(GiveOEPoints);
    JSR(KillEnemyAboveBlock);
    JMP(GiveOEPoints);
}

int GiveOEPoints() {
    lda(Imm(0x1));
    // award 100 points for hitting block beneath enemy
    JSR(SetupFloateyNumber);
    JMP(ChkToStunEnemies);
}

int ChkToStunEnemies() {
    cmp(Imm(0x9));
    // perform many comparisons on enemy object identifier
    BCC(SetStun);
    cmp(Imm(0x11));
    BCS(SetStun);
    cmp(Imm(0xa));
    BCC(Demote);
    cmp((PiranhaPlant));
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
    anda(Imm(0b1));
    sta((Enemy_ID), x);
    JMP(SetStun);
}

int SetStun() {
    // into green or red koopa troopa to demote them
    // load enemy state
    lda((Enemy_State), x);
    anda(Imm(0b11110000));
    // save high nybble
    ora(Imm(0b10));
    sta((Enemy_State), x);
    // set d1 of enemy state
    dec((Enemy_Y_Position), x);
    dec((Enemy_Y_Position), x);
    // subtract two pixels from enemy's vertical position
    lda((Enemy_ID), x);
    cmp((Bloober));
    // check for bloober object
    BEQ(SetWYSpd);
    lda(Imm(0xfd));
    // set default vertical speed
    ldy((AreaType));
    BNE(SetNotW);
    JMP(SetWYSpd);
}

int SetWYSpd() {
    // if area type not water, set as speed, otherwise
    // change the vertical speed
    lda(Imm(0xff));
    JMP(SetNotW);
}

int SetNotW() {
    // set vertical speed now
    sta((Enemy_Y_Speed), x);
    ldy(Imm(0x1));
    JSR(PlayerEnemyDiff);
    BPL(ChkBBill);
    iny();
    JMP(ChkBBill);
}

int ChkBBill() {
    lda((Enemy_ID), x);
    cmp((BulletBill_CannonVar));
    // check for bullet bill (cannon variant)
    BEQ(NoCDirF);
    cmp((BulletBill_FrenzyVar));
    BEQ(NoCDirF);
    sty((Enemy_MovingDir), x);
    JMP(NoCDirF);
}

int NoCDirF() {
    // check for bullet bill (frenzy variant)
    // branch if either found, direction does not change
    // store as moving direction
    // decrement and use as offset
    dey();
    lda((EnemyBGCXSpdData), y);
    sta((Enemy_X_Speed), x);
    JMP(ExEBGChk);
}

int ExEBGChk() {
    rts();
    JMP(LandEnemyProperly);
}

int LandEnemyProperly() {
    lda(Imm(0x4));
    // $04 - low nybble of vertical coordinate from block buffer routine
    // check lower nybble of vertical coordinate saved earlier
    sec();
    sbc(Imm(0x8));
    cmp(Imm(0x5));
    BCS(ChkForRedKoopa);
    // subtract eight pixels
    // used to determine whether enemy landed from falling
    // branch if lower nybble in range of $0d-$0f before subtract
    lda((Enemy_State), x);
    anda(Imm(0b1000000));
    // branch if d6 in enemy state is set
    BNE(LandEnemyInitState);
    lda((Enemy_State), x);
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
    lda((Enemy_State), x);
    // if enemy in normal state, branch back to jump here
    BEQ(SChkA);
    cmp(Imm(0x5));
    BEQ(ProcEnemyDirection);
    cmp(Imm(0x3));
    BCS(ExSteChk);
    lda((Enemy_State), x);
    cmp(Imm(0x2));
    BNE(ProcEnemyDirection);
    lda(Imm(0x10));
    ldy((Enemy_ID), x);
    // if in state used by spiny's egg
    // then branch elsewhere
    // if already in state used by koopas and buzzy beetles
    // or in higher numbered state, branch to leave
    // load enemy state again (why?)
    // if not in $02 state (used by koopas and buzzy beetles)
    // then branch elsewhere
    // load default timer here
    // check enemy identifier for spiny
    cpy((Spiny));
    BNE(SetForStn);
    lda(Imm(0x0));
    JMP(SetForStn);
}

int SetForStn() {
    // branch if not found
    // set timer for $00 if spiny
    // set timer here
    sta((EnemyIntervalTimer), x);
    lda(Imm(0x3));
    sta((Enemy_State), x);
    JSR(EnemyLanding);
    JMP(ExSteChk);
}

int ExSteChk() {
    // set state here, apparently used to render
    // upside-down koopas and buzzy beetles
    // then land it properly
    // then leave
    rts();
    JMP(ProcEnemyDirection);
}

int ProcEnemyDirection() {
    lda((Enemy_ID), x);
    cmp((Goomba));
    // check enemy identifier for goomba
    // branch if found
    BEQ(LandEnemyInitState);
    cmp((Spiny));
    BNE(InvtD);
    // check for spiny
    // branch if not found
    lda(Imm(0x1));
    sta((Enemy_MovingDir), x);
    // send enemy moving to the right by default
    lda(Imm(0x8));
    sta((Enemy_X_Speed), x);
    // set horizontal speed accordingly
    lda((FrameCounter));
    anda(Imm(0b111));
    BEQ(LandEnemyInitState);
    JMP(InvtD);
}

int InvtD() {
    // if timed appropriately, spiny will skip over
    // trying to face the player
    // load 1 for enemy to face the left (inverted here)
    ldy(Imm(0x1));
    JSR(PlayerEnemyDiff);
    BPL(CNwCDir);
    iny();
    JMP(CNwCDir);
}

int CNwCDir() {
    tya();
    cmp((Enemy_MovingDir), x);
    // compare direction in A with current direction in memory
    BNE(LandEnemyInitState);
    JSR(ChkForBump_HammerBroJ);
    JMP(LandEnemyInitState);
}

int LandEnemyInitState() {
    JSR(EnemyLanding);
    // land enemy properly
    lda((Enemy_State), x);
    anda(Imm(0b10000000));
    // if d7 of enemy state is set, branch
    BNE(NMovShellFallBit);
    lda(Imm(0x0));
    sta((Enemy_State), x);
    // otherwise initialize enemy state and leave
    // note this will also turn spiny's egg into spiny
    rts();
    JMP(NMovShellFallBit);
}

int NMovShellFallBit() {
    lda((Enemy_State), x);
    anda(Imm(0b10111111));
    // nullify d6 of enemy state, save other bits
    // and store, then leave
    sta((Enemy_State), x);
    rts();
    JMP(ChkForRedKoopa);
}

int ChkForRedKoopa() {
    lda((Enemy_ID), x);
    // check for red koopa troopa $03
    cmp((RedKoopa));
    BNE(Chk2MSBSt);
    // branch if not found
    lda((Enemy_State), x);
    BEQ(ChkForBump_HammerBroJ);
    JMP(Chk2MSBSt);
}

int Chk2MSBSt() {
    // if enemy found and in normal state, branch
    // save enemy state into Y
    lda((Enemy_State), x);
    tay();
    asl();
    BCC(GetSteFromD);
    // check for d7 set
    // branch if not set
    lda((Enemy_State), x);
    ora(Imm(0b1000000));
    JMP(SetD6Ste);
    JMP(GetSteFromD);
}

int GetSteFromD() {
    // set d6
    // jump ahead of this part
    // load new enemy state with old as offset
    lda((EnemyBGCStateData), y);
    JMP(SetD6Ste);
}

int SetD6Ste() {
    // set as new state
    sta((Enemy_State), x);
    JMP(DoEnemySideCheck);
}

int DoEnemySideCheck() {
    lda((Enemy_Y_Position), x);
    cmp(Imm(0x20));
    // if enemy within status bar, branch to leave
    // because there's nothing there that impedes movement
    BCC(ExESdeC);
    ldy(Imm(0x16));
    lda(Imm(0x2));
    sta(Imm(0xeb));
    JMP(SdeCLoop);
}

int SdeCLoop() {
    // start by finding block to the left of enemy ($00,$14)
    // set value here in what is also used as
    // OAM data offset
    // check value
    lda(Imm(0xeb));
    cmp((Enemy_MovingDir), x);
    BNE(NextSdeC);
    lda(Imm(0x1));
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
    dec(Imm(0xeb));
    iny();
    cpy(Imm(0x18));
    BCC(SdeCLoop);
    JMP(ExESdeC);
}

int ExESdeC() {
    rts();
    JMP(ChkForBump_HammerBroJ);
}

int ChkForBump_HammerBroJ() {
    cpx(Imm(0x5));
    BEQ(NoBump);
    lda((Enemy_State), x);
    asl();
    // check if we're on the special use slot
    // and if so, branch ahead and do not play sound
    // if enemy state d7 not set, branch
    // ahead and do not play sound
    BCC(NoBump);
    lda((Sfx_Bump));
    sta((Square1SoundQueue));
    JMP(NoBump);
}

int NoBump() {
    // otherwise, play bump sound
    // sound will never be played if branching from ChkForRedKoopa
    // check for hammer bro
    lda((Enemy_ID), x);
    cmp(Imm(0x5));
    BNE(InvEnemyDir);
    // branch if not found
    lda(Imm(0x0));
    sta(Imm(0x0));
    ldy(Imm(0xfa));
    JMP(SetHJ);
    JMP(InvEnemyDir);
}

int InvEnemyDir() {
    JMP(RXSpd);
    JMP(PlayerEnemyDiff);
}

int PlayerEnemyDiff() {
    lda((Enemy_X_Position), x);
    sec();
    sbc((Player_X_Position));
    sta(Imm(0x0));
    // jump to turn the enemy around
    // $00 - used to hold horizontal difference between player and enemy
    // get distance between enemy object's
    // horizontal coordinate and the player's
    // horizontal coordinate
    // and store here
    lda((Enemy_PageLoc), x);
    sbc((Player_PageLoc));
    // subtract borrow, then leave
    rts();
    JMP(EnemyLanding);
}

int EnemyLanding() {
    JSR(InitVStf);
    // do something here to vertical speed and something else
    lda((Enemy_Y_Position), x);
    anda(Imm(0b11110000));
    ora(Imm(0b1000));
    sta((Enemy_Y_Position), x);
    // save high nybble of vertical coordinate, and
    // set d3, then store, probably used to set enemy object
    // neatly on whatever it's landing on
    rts();
    JMP(SubtEnemyYPos);
}

int SubtEnemyYPos() {
    lda((Enemy_Y_Position), x);
    clc();
    // add 62 pixels to enemy object's
    // vertical coordinate
    adc(Imm(0x3e));
    cmp(Imm(0x44));
    rts();
    JMP(EnemyJump);
}

int EnemyJump() {
    JSR(SubtEnemyYPos);
    BCC(DoSide);
    // do a sub here
    // if enemy vertical coord + 62 < 68, branch to leave
    lda((Enemy_Y_Speed), x);
    clc();
    // add two to vertical speed
    adc(Imm(0x2));
    cmp(Imm(0x3));
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
    lda(Imm(0xfd));
    sta((Enemy_Y_Speed), x);
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
    cmp(Imm(0x23));
    // check for blank metatile $23 and branch if not found
    BNE(UnderHammerBro);
    JMP(KillEnemyAboveBlock);
}

int KillEnemyAboveBlock() {
    JSR(ShellOrBlockDefeat);
    lda(Imm(0xfc));
    // do this sub to kill enemy
    // alter vertical speed of enemy and leave
    sta((Enemy_Y_Speed), x);
    rts();
    JMP(UnderHammerBro);
}

int UnderHammerBro() {
    lda((EnemyFrameTimer), x);
    BNE(NoUnderHammerBro);
    // check timer used by hammer bro
    // branch if not expired
    lda((Enemy_State), x);
    anda(Imm(0b10001000));
    sta((Enemy_State), x);
    JSR(EnemyLanding);
    JMP(DoEnemySideCheck);
    JMP(NoUnderHammerBro);
}

int NoUnderHammerBro() {
    lda((Enemy_State), x);
    ora(Imm(0x1));
    // if hammer bro is not standing on anything, set d0
    // in the enemy state to indicate jumping or falling, then leave
    sta((Enemy_State), x);
    rts();
    JMP(ChkUnderEnemy);
}

int ChkUnderEnemy() {
    lda(Imm(0x0));
    ldy(Imm(0x15));
    JMP(BlockBufferChk_Enemy);
    JMP(ChkForNonSolids);
}

int ChkForNonSolids() {
    cmp(Imm(0x26));
    // blank metatile used for vines?
    BEQ(NSFnd);
    cmp(Imm(0xc2));
    // regular coin?
    BEQ(NSFnd);
    cmp(Imm(0xc3));
    // underwater coin?
    BEQ(NSFnd);
    cmp(Imm(0x5f));
    // hidden coin block?
    BEQ(NSFnd);
    cmp(Imm(0x60));
    JMP(NSFnd);
}

int NSFnd() {
    rts();
    JMP(FireballBGCollision);
}

int FireballBGCollision() {
    lda((Fireball_Y_Position), x);
    // check fireball's vertical coordinate
    cmp(Imm(0x18));
    BCC(ClearBounceFlag);
    JSR(BlockBufferChk_FBall);
    BEQ(ClearBounceFlag);
    JSR(ChkForNonSolids);
    BEQ(ClearBounceFlag);
    lda((Fireball_Y_Speed), x);
    BMI(InitFireballExplode);
    lda((FireballBouncingFlag), x);
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
    lda(Imm(0xfd));
    sta((Fireball_Y_Speed), x);
    // otherwise set vertical speed to move upwards (give it bounce)
    lda(Imm(0x1));
    sta((FireballBouncingFlag), x);
    // set bouncing flag
    lda((Fireball_Y_Position), x);
    anda(Imm(0xf8));
    sta((Fireball_Y_Position), x);
    rts();
    JMP(ClearBounceFlag);
}

int ClearBounceFlag() {
    lda(Imm(0x0));
    sta((FireballBouncingFlag), x);
    rts();
    JMP(InitFireballExplode);
}

int InitFireballExplode() {
    lda(Imm(0x80));
    sta((Fireball_State), x);
    // set exploding flag in fireball's state
    lda((Sfx_Bump));
    sta((Square1SoundQueue));
    rts();
    JMP(GetFireballBoundBox);
}

int GetFireballBoundBox() {
    txa();
    clc();
    // add seven bytes to offset
    // to use in routines as offset for fireball
    adc(Imm(0x7));
    tax();
    ldy(Imm(0x2));
    BNE(FBallB);
    JMP(GetMiscBoundBox);
}

int GetMiscBoundBox() {
    txa();
    clc();
    // add nine bytes to offset
    // to use in routines as offset for misc object
    adc(Imm(0x9));
    tax();
    ldy(Imm(0x6));
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
    ldy(Imm(0x48));
    // store bitmask here for now
    sty(Imm(0x0));
    ldy(Imm(0x44));
    // store another bitmask here for now and jump
    JMP(GetMaskedOffScrBits);
    JMP(SmallPlatformBoundBox);
}

int SmallPlatformBoundBox() {
    ldy(Imm(0x8));
    // store bitmask here for now
    sty(Imm(0x0));
    ldy(Imm(0x4));
    JMP(GetMaskedOffScrBits);
}

int GetMaskedOffScrBits() {
    lda((Enemy_X_Position), x);
    sec();
    // get enemy object position relative
    // to the left side of the screen
    sbc((ScreenLeft_X_Pos));
    sta(Imm(0x1));
    lda((Enemy_PageLoc), x);
    sbc((ScreenLeft_PageLoc));
    BMI(CMBits);
    // store here
    // subtract borrow from current page location
    // of left side
    // if enemy object is beyond left edge, branch
    ora(Imm(0x1));
    BEQ(CMBits);
    ldy(Imm(0x0));
    JMP(CMBits);
}

int CMBits() {
    // if precisely at the left edge, branch
    // if to the right of left edge, use value in $00 for A
    // otherwise use contents of Y
    tya();
    anda((Enemy_OffscreenBits));
    sta((EnemyOffscrBitsMasked), x);
    BNE(MoveBoundBoxOffscreen);
    JMP(SetupEOffsetFBBox);
    JMP(LargePlatformBoundBox);
}

int LargePlatformBoundBox() {
    inx();
    JSR(GetXOffscreenBits);
    dex();
    cmp(Imm(0xfe));
    BCS(MoveBoundBoxOffscreen);
    JMP(SetupEOffsetFBBox);
}

int SetupEOffsetFBBox() {
    txa();
    clc();
    // add 1 to offset to properly address
    // the enemy object memory locations
    adc(Imm(0x1));
    tax();
    ldy(Imm(0x1));
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
    lda(Imm(0xff));
    sta((EnemyBoundingBoxCoord), y);
    // load value into four locations here and leave
    sta((((EnemyBoundingBoxCoord)) + (Imm(1))), y);
    sta((((EnemyBoundingBoxCoord)) + (Imm(2))), y);
    sta((((EnemyBoundingBoxCoord)) + (Imm(3))), y);
    rts();
    JMP(BoundingBoxCore);
}

int BoundingBoxCore() {
    stx(Imm(0x0));
    lda((SprObject_Rel_YPos), y);
    sta(Imm(0x2));
    // save offset here
    // store object coordinates relative to screen
    // vertically and horizontally, respectively
    lda((SprObject_Rel_XPos), y);
    sta(Imm(0x1));
    txa();
    // multiply offset by four and save to stack
    asl();
    asl();
    pha();
    tay();
    lda((SprObj_BoundBoxCtrl), x);
    asl();
    // use as offset for Y, X is left alone
    // load value here to be used as offset for X
    // multiply that by four and use as X
    asl();
    tax();
    lda(Imm(0x1));
    clc();
    adc((BoundBoxCtrlData), x);
    sta((BoundingBox_UL_Corner), y);
    // add the first number in the bounding box data to the
    // relative horizontal coordinate using enemy object offset
    // and store somewhere using same offset * 4
    // store here
    lda(Imm(0x1));
    clc();
    adc((((BoundBoxCtrlData)) + (Imm(2))), x);
    sta((BoundingBox_LR_Corner), y);
    inx();
    // add the third number in the bounding box data to the
    // relative horizontal coordinate and store
    // increment both offsets
    iny();
    lda(Imm(0x2));
    clc();
    adc((BoundBoxCtrlData), x);
    // add the second number to the relative vertical coordinate
    // using incremented offset and store using the other
    // incremented offset
    sta((BoundingBox_UL_Corner), y);
    lda(Imm(0x2));
    clc();
    adc((((BoundBoxCtrlData)) + (Imm(2))), x);
    sta((BoundingBox_LR_Corner), y);
    pla();
    tay();
    ldx(Imm(0x0));
    // add the fourth number to the relative vertical coordinate
    // and store
    // get original offset loaded into $00 * y from stack
    // use as Y
    // get original offset and use as X again
    rts();
    JMP(CheckRightScreenBBox);
}

int CheckRightScreenBBox() {
    lda((ScreenLeft_X_Pos));
    clc();
    // add 128 pixels to left side of screen
    // and store as horizontal coordinate of middle
    adc(Imm(0x80));
    sta(Imm(0x2));
    lda((ScreenLeft_PageLoc));
    adc(Imm(0x0));
    // add carry to page location of left side of screen
    // and store as page location of middle
    sta(Imm(0x1));
    lda((SprObject_X_Position), x);
    cmp(Imm(0x2));
    lda((SprObject_PageLoc), x);
    sbc(Imm(0x1));
    BCC(CheckLeftScreenBBox);
    lda((BoundingBox_DR_XPos), y);
    BMI(NoOfs);
    lda(Imm(0xff));
    ldx((BoundingBox_UL_XPos), y);
    BMI(SORte);
    sta((BoundingBox_UL_XPos), y);
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
    sta((BoundingBox_DR_XPos), y);
    JMP(NoOfs);
}

int NoOfs() {
    // get object offset and leave
    ldx((ObjectOffset));
    rts();
    JMP(CheckLeftScreenBBox);
}

int CheckLeftScreenBBox() {
    lda((BoundingBox_UL_XPos), y);
    BPL(NoOfs2);
    cmp(Imm(0xa0));
    BCC(NoOfs2);
    // check left-side edge of bounding box for offscreen
    // coordinates, and branch if still on the screen
    // check to see if left-side edge is in the middle of the
    // screen or really offscreen, and branch if still on
    lda(Imm(0x0));
    ldx((BoundingBox_DR_XPos), y);
    BPL(SOLft);
    sta((BoundingBox_DR_XPos), y);
    JMP(SOLft);
}

int SOLft() {
    // check right-side edge of bounding box for offscreen
    // coordinates, branch if still onscreen
    // store offscreen value for right side
    // store offscreen value for left side
    sta((BoundingBox_UL_XPos), y);
    JMP(NoOfs2);
}

int NoOfs2() {
    // get object offset and leave
    ldx((ObjectOffset));
    rts();
    JMP(PlayerCollisionCore);
}

int PlayerCollisionCore() {
    ldx(Imm(0x0));
    JMP(SprObjectCollisionCore);
}

int SprObjectCollisionCore() {
    sty(Imm(0x6));
    // save contents of Y here
    lda(Imm(0x1));
    sta(Imm(0x7));
    JMP(CollisionCoreLoop);
}

int CollisionCoreLoop() {
    lda((BoundingBox_UL_Corner), y);
    cmp((BoundingBox_UL_Corner), x);
    BCS(FirstBoxGreater);
    cmp((BoundingBox_LR_Corner), x);
    BCC(SecondBoxVerticalChk);
    BEQ(CollisionFound);
    lda((BoundingBox_LR_Corner), y);
    cmp((BoundingBox_UL_Corner), y);
    BCC(CollisionFound);
    cmp((BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    ldy(Imm(0x6));
    rts();
    JMP(SecondBoxVerticalChk);
}

int SecondBoxVerticalChk() {
    lda((BoundingBox_LR_Corner), x);
    cmp((BoundingBox_UL_Corner), x);
    BCC(CollisionFound);
    lda((BoundingBox_LR_Corner), y);
    cmp((BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    ldy(Imm(0x6));
    // check to see if the vertical bottom of the box
    // is greater than the vertical top
    // if somehow less, vertical wrap collision, thus branch
    // otherwise compare horizontal right or vertical bottom
    // of first box with horizontal left or vertical top of second box
    // if equal or greater, collision, thus branch
    // otherwise return with carry clear and Y = $0006
    rts();
    JMP(FirstBoxGreater);
}

int FirstBoxGreater() {
    cmp((BoundingBox_UL_Corner), x);
    BEQ(CollisionFound);
    cmp((BoundingBox_LR_Corner), x);
    BCC(CollisionFound);
    BEQ(CollisionFound);
    cmp((BoundingBox_LR_Corner), y);
    BCC(NoCollisionFound);
    // compare first and second box horizontal left/vertical top again
    // if first coordinate = second, collision, thus branch
    // if not, compare with second object right or bottom edge
    // if left/top of first less than or equal to right/bottom of second
    // then collision, thus branch
    // otherwise check to see if top of first box is greater than bottom
    // if less than or equal, no collision, branch to end
    BEQ(NoCollisionFound);
    lda((BoundingBox_LR_Corner), y);
    cmp((BoundingBox_UL_Corner), x);
    BCS(CollisionFound);
    JMP(NoCollisionFound);
}

int NoCollisionFound() {
    clc();
    ldy(Imm(0x6));
    rts();
    JMP(CollisionFound);
}

int CollisionFound() {
    inx();
    iny();
    dec(Imm(0x7));
    BPL(CollisionCoreLoop);
    sec();
    ldy(Imm(0x6));
    // increment offsets on both objects to check
    // the vertical coordinates
    // decrement counter to reflect this
    // if counter not expired, branch to loop
    // otherwise we already did both sets, therefore collision, so set carry
    // load original value set here earlier, then leave
    rts();
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
    adc(Imm(0x1));
    tax();
    pla();
    // pull A from stack and jump elsewhere
    JMP(BBChk_E);
    JMP(ResidualMiscObjectCode);
}

int ResidualMiscObjectCode() {
    txa();
    clc();
    adc(Imm(0xd));
    // supposedly used once to set offset for
    // miscellaneous objects
    tax();
    ldy(Imm(0x1b));
    JMP(ResJmpM);
    JMP(BlockBufferChk_FBall);
}

int BlockBufferChk_FBall() {
    ldy(Imm(0x1a));
    // set offset for block buffer adder data
    txa();
    clc();
    adc(Imm(0x7));
    // add seven bytes to use
    tax();
    JMP(ResJmpM);
}

int ResJmpM() {
    // set A to return vertical coordinate
    lda(Imm(0x0));
    JMP(BBChk_E);
}

int BBChk_E() {
    // do collision detection subroutine for sprite object
    JSR(BlockBufferCollision);
    ldx((ObjectOffset));
    cmp(Imm(0x0));
    // get object offset
    // check to see if object bumped into anything
    rts();
    JMP(BlockBufferColli_Feet);
}

int BlockBufferColli_Feet() {
    iny();
    JMP(BlockBufferColli_Head);
}

int BlockBufferColli_Head() {
    lda(Imm(0x0));
    BRA(_bit_hack_24631);
    JMP(BlockBufferColli_Side);
}

int BlockBufferColli_Side() {
    lda(Imm(0x1));
    JMP(_bit_hack_24631);
}

int _bit_hack_24631() {
    ldx(Imm(0x0));
    JMP(BlockBufferCollision);
}

int BlockBufferCollision() {
    pha();
    sty(Imm(0x4));
    lda((BlockBuffer_X_Adder), y);
    clc();
    // save contents of A to stack
    // save contents of Y here
    // add horizontal coordinate
    // of object to value obtained using Y as offset
    adc((SprObject_X_Position), x);
    sta(Imm(0x5));
    // store here
    lda((SprObject_PageLoc), x);
    adc(Imm(0x0));
    anda(Imm(0x1));
    lsr();
    ora(Imm(0x5));
    ror();
    lsr();
    lsr();
    lsr();
    JSR(GetBlockBufferAddr);
    ldy(Imm(0x4));
    lda((SprObject_Y_Position), x);
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
    adc((BlockBuffer_Y_Adder), y);
    anda(Imm(0b11110000));
    // add it to value obtained using Y as offset
    // mask out low nybble
    sec();
    sbc(Imm(0x20));
    sta(Imm(0x2));
    tay();
    lda((Imm(0x6)), y);
    sta(Imm(0x3));
    ldy(Imm(0x4));
    pla();
    BNE(RetXC);
    lda((SprObject_Y_Position), x);
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
    lda((SprObject_X_Position), x);
    JMP(RetYC);
}

int RetYC() {
    // and mask out high nybble
    anda(Imm(0b1111));
    sta(Imm(0x4));
    lda(Imm(0x3));
    rts();
    JMP(DrawVine);
}

int DrawVine() {
    sty(Imm(0x0));
    lda((Enemy_Rel_YPos));
    // save offset here
    // get relative vertical coordinate
    clc();
    adc((VineYPosAdder), y);
    ldx((VineObjOffset), y);
    ldy((Enemy_SprDataOffset), x);
    sty(Imm(0x2));
    JSR(SixSpriteStacker);
    lda((Enemy_Rel_XPos));
    sta((Sprite_X_Position), y);
    // add value using offset in Y to get value
    // get offset to vine
    // get sprite data offset
    // store sprite data offset here
    // stack six sprites on top of each other vertically
    // get relative horizontal coordinate
    // store in first, third and fifth sprites
    sta((((Sprite_X_Position)) + (Imm(8))), y);
    sta((((Sprite_X_Position)) + (Imm(16))), y);
    clc();
    adc(Imm(0x6));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    sta((((Sprite_X_Position)) + (Imm(12))), y);
    // add six pixels to second, fourth and sixth sprites
    // to give characteristic staggered vine shape to
    // our vertical stack of sprites
    sta((((Sprite_X_Position)) + (Imm(20))), y);
    lda(Imm(0b100001));
    sta((Sprite_Attributes), y);
    // set bg priority and palette attribute bits
    // set in first, third and fifth sprites
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    // additionally, set horizontal flip bit
    // for second, fourth and sixth sprites
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    ldx(Imm(0x5));
    JMP(VineTL);
}

int VineTL() {
    // set tiles for six sprites
    // set tile number for sprite
    lda(Imm(0xe1));
    sta((Sprite_Tilenumber), y);
    iny();
    // move offset to next sprite data
    iny();
    iny();
    iny();
    dex();
    BPL(VineTL);
    ldy(Imm(0x2));
    lda(Imm(0x0));
    BNE(SkpVTop);
    // move onto next sprite
    // loop until all sprites are done
    // get original offset
    // get offset to vine adding data
    // if offset not zero, skip this part
    lda(Imm(0xe0));
    sta((Sprite_Tilenumber), y);
    JMP(SkpVTop);
}

int SkpVTop() {
    // set other tile number for top of vine
    // start with the first sprite again
    ldx(Imm(0x0));
    JMP(ChkFTop);
}

int ChkFTop() {
    // get original starting vertical coordinate
    lda((VineStart_Y_Position));
    sec();
    sbc((Sprite_Y_Position), y);
    cmp(Imm(0x64));
    BCC(NextVSp);
    // subtract top-most sprite's Y coordinate
    // if two coordinates are less than 100/$64 pixels
    // apart, skip this to leave sprite alone
    lda(Imm(0xf8));
    sta((Sprite_Y_Position), y);
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
    cpx(Imm(0x6));
    // move onto next sprite
    // do this until all sprites are checked
    BNE(ChkFTop);
    ldy(Imm(0x0));
    // return offset set earlier
    rts();
    JMP(SixSpriteStacker);
}

int SixSpriteStacker() {
    ldx(Imm(0x6));
    JMP(StkLp);
}

int StkLp() {
    // do six sprites
    // store X or Y coordinate into OAM data
    sta((Sprite_Data), y);
    clc();
    adc(Imm(0x8));
    // add eight pixels
    iny();
    iny();
    // move offset four bytes forward
    iny();
    iny();
    dex();
    BNE(StkLp);
    ldy(Imm(0x2));
    // do another sprite
    // do this until all sprites are done
    // get saved OAM data offset and leave
    rts();
    JMP(DrawHammer);
}

int DrawHammer() {
    ldy((Misc_SprDataOffset), x);
    // get misc object OAM data offset
    lda((TimerControl));
    BNE(ForceHPose);
    lda((Misc_State), x);
    anda(Imm(0b1111111));
    cmp(Imm(0x1));
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
    ldx(Imm(0x0));
    BEQ(RenderH);
    JMP(GetHPose);
}

int GetHPose() {
    // do unconditional branch to rendering part
    // get frame counter
    lda((FrameCounter));
    lsr();
    // move d3-d2 to d1-d0
    lsr();
    anda(Imm(0b11));
    tax();
    JMP(RenderH);
}

int RenderH() {
    // mask out all but d1-d0 (changes every four frames)
    // use as timing offset
    // get relative vertical coordinate
    lda((Misc_Rel_YPos));
    clc();
    adc((FirstSprYPos), x);
    sta((Sprite_Y_Position), y);
    // add first sprite vertical adder based on offset
    // store as sprite Y coordinate for first sprite
    clc();
    adc((SecondSprYPos), x);
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    lda((Misc_Rel_XPos));
    // add second sprite vertical adder based on offset
    // store as sprite Y coordinate for second sprite
    // get relative horizontal coordinate
    clc();
    adc((FirstSprXPos), x);
    sta((Sprite_X_Position), y);
    // add first sprite horizontal adder based on offset
    // store as sprite X coordinate for first sprite
    clc();
    adc((SecondSprXPos), x);
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    // add second sprite horizontal adder based on offset
    // store as sprite X coordinate for second sprite
    lda((FirstSprTilenum), x);
    sta((Sprite_Tilenumber), y);
    // get and store tile number of first sprite
    lda((SecondSprTilenum), x);
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    // get and store tile number of second sprite
    lda((HammerSprAttrib), x);
    sta((Sprite_Attributes), y);
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    ldx((ObjectOffset));
    // get and store attribute bytes for both
    // note in this case they use the same data
    // get misc object offset
    lda((Misc_OffscreenBits));
    anda(Imm(0b11111100));
    BEQ(NoHOffscr);
    // check offscreen bits
    // if all bits clear, leave object alone
    lda(Imm(0x0));
    sta((Misc_State), x);
    // otherwise nullify misc object state
    lda(Imm(0xf8));
    JSR(DumpTwoSpr);
    JMP(NoHOffscr);
}

int NoHOffscr() {
    // do sub to move hammer sprites offscreen
    // leave
    rts();
    JMP(FlagpoleGfxHandler);
}

int FlagpoleGfxHandler() {
    ldy((Enemy_SprDataOffset), x);
    lda((Enemy_Rel_XPos));
    sta((Sprite_X_Position), y);
    // get sprite data offset for flagpole flag
    // get relative horizontal coordinate
    // store as X coordinate for first sprite
    clc();
    adc(Imm(0x8));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    // add eight pixels and store
    // as X coordinate for second and third sprites
    sta((((Sprite_X_Position)) + (Imm(8))), y);
    clc();
    adc(Imm(0xc));
    sta(Imm(0x5));
    lda((Enemy_Y_Position), x);
    JSR(DumpTwoSpr);
    adc(Imm(0x8));
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    lda((FlagpoleFNum_Y_Pos));
    sta(Imm(0x2));
    // add twelve more pixels and
    // store here to be used later by floatey number
    // get vertical coordinate
    // and do sub to dump into first and second sprites
    // add eight pixels
    // and store into third sprite
    // get vertical coordinate for floatey number
    // store it here
    lda(Imm(0x1));
    sta(Imm(0x3));
    sta(Imm(0x4));
    sta((Sprite_Attributes), y);
    // set value for flip which will not be used, and
    // attribute byte for floatey number
    // set attribute bytes for all three sprites
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    lda(Imm(0x7e));
    sta((Sprite_Tilenumber), y);
    sta((((Sprite_Tilenumber)) + (Imm(8))), y);
    // put triangle shaped tile
    // into first and third sprites
    lda(Imm(0x7f));
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    lda((FlagpoleCollisionYPos));
    BEQ(ChkFlagOffscreen);
    // put skull tile into second sprite
    // get vertical coordinate at time of collision
    // if zero, branch ahead
    tya();
    clc();
    // add 12 bytes to sprite data offset
    adc(Imm(0xc));
    tay();
    lda((FlagpoleScore));
    asl();
    // put back in Y
    // get offset used to award points for touching flagpole
    // multiply by 2 to get proper offset here
    tax();
    lda((FlagpoleScoreNumTiles), x);
    // get appropriate tile data
    sta(Imm(0x0));
    lda((((FlagpoleScoreNumTiles)) + (Imm(1))), x);
    JSR(DrawOneSpriteRow);
    JMP(ChkFlagOffscreen);
}

int ChkFlagOffscreen() {
    ldx((ObjectOffset));
    ldy((Enemy_SprDataOffset), x);
    lda((Enemy_OffscreenBits));
    anda(Imm(0b1110));
    BEQ(ExitDumpSpr);
    JMP(MoveSixSpritesOffscreen);
}

int MoveSixSpritesOffscreen() {
    lda(Imm(0xf8));
    JMP(DumpSixSpr);
}

int DumpSixSpr() {
    sta((((Sprite_Data)) + (Imm(20))), y);
    sta((((Sprite_Data)) + (Imm(16))), y);
    JMP(DumpFourSpr);
}

int DumpFourSpr() {
    sta((((Sprite_Data)) + (Imm(12))), y);
    JMP(DumpThreeSpr);
}

int DumpThreeSpr() {
    sta((((Sprite_Data)) + (Imm(8))), y);
    JMP(DumpTwoSpr);
}

int DumpTwoSpr() {
    sta((((Sprite_Data)) + (Imm(4))), y);
    // and into first row sprites
    sta((Sprite_Data), y);
    JMP(ExitDumpSpr);
}

int ExitDumpSpr() {
    rts();
    JMP(DrawLargePlatform);
}

int DrawLargePlatform() {
    ldy((Enemy_SprDataOffset), x);
    sty(Imm(0x2));
    iny();
    iny();
    // get OAM data offset
    // store here
    // add 3 to it for offset
    // to X coordinate
    iny();
    lda((Enemy_Rel_XPos));
    JSR(SixSpriteStacker);
    // get horizontal relative coordinate
    // store X coordinates using A as base, stack horizontally
    ldx((ObjectOffset));
    lda((Enemy_Y_Position), x);
    JSR(DumpFourSpr);
    // get vertical coordinate
    // dump into first four sprites as Y coordinate
    ldy((AreaType));
    cpy(Imm(0x3));
    // check for castle-type level
    BEQ(ShrinkPlatform);
    ldy((SecondaryHardMode));
    BEQ(SetLast2Platform);
    JMP(ShrinkPlatform);
}

int ShrinkPlatform() {
    lda(Imm(0xf8));
    JMP(SetLast2Platform);
}

int SetLast2Platform() {
    ldy((Enemy_SprDataOffset), x);
    sta((((Sprite_Y_Position)) + (Imm(16))), y);
    sta((((Sprite_Y_Position)) + (Imm(20))), y);
    lda(Imm(0x5b));
    // get OAM data offset
    // store vertical coordinate or offscreen
    // coordinate into last two sprites as Y coordinate
    // load default tile for platform (girder)
    ldx((CloudTypeOverride));
    BEQ(SetPlatformTilenum);
    lda(Imm(0x75));
    JMP(SetPlatformTilenum);
}

int SetPlatformTilenum() {
    ldx((ObjectOffset));
    iny();
    JSR(DumpSixSpr);
    lda(Imm(0x2));
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
    ldy((Enemy_SprDataOffset), x);
    asl();
    pha();
    // get OAM data offset
    // rotate d7 into carry, save remaining
    // bits to the stack
    BCC(SChk2);
    lda(Imm(0xf8));
    // if d7 was set, move first sprite offscreen
    sta((Sprite_Y_Position), y);
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
    lda(Imm(0xf8));
    // if d6 was set, move second sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
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
    lda(Imm(0xf8));
    // if d5 was set, move third sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
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
    lda(Imm(0xf8));
    // if d4 was set, move fourth sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
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
    lda(Imm(0xf8));
    // if d3 was set, move fifth sprite offscreen
    sta((((Sprite_Y_Position)) + (Imm(16))), y);
    JMP(SChk6);
}

int SChk6() {
    // get bits from stack
    pla();
    asl();
    BCC(SLChk);
    // rotate d2 into carry
    // save to stack
    lda(Imm(0xf8));
    sta((((Sprite_Y_Position)) + (Imm(20))), y);
    JMP(SLChk);
}

int SLChk() {
    // if d2 was set, move sixth sprite offscreen
    // check d7 of offscreen bits
    lda((Enemy_OffscreenBits));
    asl();
    // and if d7 is not set, skip sub
    BCC(ExDLPl);
    JSR(MoveSixSpritesOffscreen);
    JMP(ExDLPl);
}

int ExDLPl() {
    rts();
    JMP(DrawFloateyNumber_Coin);
}

int DrawFloateyNumber_Coin() {
    lda((FrameCounter));
    lsr();
    BCS(NotRsNum);
    dec((Misc_Y_Position), x);
    JMP(NotRsNum);
}

int NotRsNum() {
    // get frame counter
    // divide by 2
    // branch if d0 not set to raise number every other frame
    // otherwise, decrement vertical coordinate
    // get vertical coordinate
    lda((Misc_Y_Position), x);
    JSR(DumpTwoSpr);
    lda((Misc_Rel_XPos));
    sta((Sprite_X_Position), y);
    // dump into both sprites
    // get relative horizontal coordinate
    // store as X coordinate for first sprite
    clc();
    adc(Imm(0x8));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    // add eight pixels
    // store as X coordinate for second sprite
    lda(Imm(0x2));
    sta((Sprite_Attributes), y);
    // store attribute byte in both sprites
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    lda(Imm(0xf7));
    sta((Sprite_Tilenumber), y);
    lda(Imm(0xfb));
    // put tile numbers into both sprites
    // that resemble "200"
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    JMP(ExJCGfx);
    JMP(JCoinGfxHandler);
}

int JCoinGfxHandler() {
    ldy((Misc_SprDataOffset), x);
    lda((Misc_State), x);
    cmp(Imm(0x2));
    BCS(DrawFloateyNumber_Coin);
    lda((Misc_Y_Position), x);
    sta((Sprite_Y_Position), y);
    // get coin/floatey number's OAM data offset
    // get state of misc object
    // if 2 or greater,
    // branch to draw floatey number
    // store vertical coordinate as
    // Y coordinate for first sprite
    clc();
    adc(Imm(0x8));
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    lda((Misc_Rel_XPos));
    // add eight pixels
    // store as Y coordinate for second sprite
    // get relative horizontal coordinate
    sta((Sprite_X_Position), y);
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    lda((FrameCounter));
    lsr();
    anda(Imm(0b11));
    tax();
    lda((JumpingCoinTiles), x);
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
    lda(Imm(0x2));
    sta((Sprite_Attributes), y);
    // set attribute byte in first sprite
    lda(Imm(0x82));
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    ldx((ObjectOffset));
    JMP(ExJCGfx);
}

int ExJCGfx() {
    // set attribute byte with vertical flip in second sprite
    // get misc object offset
    // leave
    rts();
    JMP(DrawPowerUp);
}

int DrawPowerUp() {
    ldy((((Enemy_SprDataOffset)) + (Imm(5))));
    lda((Enemy_Rel_YPos));
    // get power-up's sprite data offset
    // get relative vertical coordinate
    clc();
    adc(Imm(0x8));
    sta(Imm(0x2));
    lda((Enemy_Rel_XPos));
    sta(Imm(0x5));
    ldx((PowerUpType));
    lda((PowerUpAttributes), x);
    ora((((Enemy_SprAttrib)) + (Imm(5))));
    sta(Imm(0x4));
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
    lda(Imm(0x1));
    sta(Imm(0x7));
    sta(Imm(0x3));
    JMP(PUpDrawLoop);
}

int PUpDrawLoop() {
    lda((PowerUpGfxTable), x);
    // load left tile of power-up object
    sta(Imm(0x0));
    lda((((PowerUpGfxTable)) + (Imm(1))), x);
    JSR(DrawOneSpriteRow);
    dec(Imm(0x7));
    BPL(PUpDrawLoop);
    ldy((((Enemy_SprDataOffset)) + (Imm(5))));
    pla();
    BEQ(PUpOfs);
    // load right tile
    // branch to draw one row of our power-up object
    // decrement counter
    // branch until two rows are drawn
    // get sprite data offset again
    // pull saved power-up type from the stack
    // if regular mushroom, branch, do not change colors or flip
    cmp(Imm(0x3));
    BEQ(PUpOfs);
    sta(Imm(0x0));
    lda((FrameCounter));
    lsr();
    anda(Imm(0b11));
    ora((((Enemy_SprAttrib)) + (Imm(5))));
    sta((Sprite_Attributes), y);
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    // if 1-up mushroom, branch, do not change colors or flip
    // store power-up type here now
    // get frame counter
    // divide by 2 to change colors every two frames
    // mask out all but d1 and d0 (previously d2 and d1)
    // add background priority bit if any set
    // set as new palette bits for top left and
    // top right sprites for fire flower and star
    ldx(Imm(0x0));
    dex();
    BEQ(FlipPUpRightSide);
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    JMP(FlipPUpRightSide);
}

int FlipPUpRightSide() {
    lda((((Sprite_Attributes)) + (Imm(4))), y);
    ora(Imm(0b1000000));
    // set horizontal flip bit for top right sprite
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    lda((((Sprite_Attributes)) + (Imm(12))), y);
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(12))), y);
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
    lda((Enemy_Y_Position), x);
    // get enemy object vertical position
    sta(Imm(0x2));
    lda((Enemy_Rel_XPos));
    sta(Imm(0x5));
    // get enemy object horizontal position
    // relative to screen
    ldy((Enemy_SprDataOffset), x);
    sty(Imm(0xeb));
    // get sprite data offset
    lda(Imm(0x0));
    sta((VerticalFlipFlag));
    // initialize vertical flip flag by default
    lda((Enemy_MovingDir), x);
    sta(Imm(0x3));
    // get enemy object moving direction
    lda((Enemy_SprAttrib), x);
    sta(Imm(0x4));
    // get enemy object sprite attributes
    lda((Enemy_ID), x);
    cmp((PiranhaPlant));
    BNE(CheckForRetainerObj);
    // is enemy object piranha plant?
    // if not, branch
    ldy((PiranhaPlant_Y_Speed), x);
    BMI(CheckForRetainerObj);
    // if piranha plant moving upwards, branch
    ldy((EnemyFrameTimer), x);
    BEQ(CheckForRetainerObj);
    rts();
    JMP(CheckForRetainerObj);
}

int CheckForRetainerObj() {
    lda((Enemy_State), x);
    // store enemy state
    sta(Imm(0xed));
    anda(Imm(0b11111));
    // nullify all but 5 LSB and use as Y
    tay();
    lda((Enemy_ID), x);
    // check for mushroom retainer/princess object
    cmp((RetainerObject));
    BNE(CheckForBulletBillCV);
    ldy(Imm(0x0));
    lda(Imm(0x1));
    // if not found, branch
    // if found, nullify saved state in Y
    // set value that will not be used
    sta(Imm(0x3));
    lda(Imm(0x15));
    JMP(CheckForBulletBillCV);
}

int CheckForBulletBillCV() {
    cmp((BulletBill_CannonVar));
    BNE(CheckForJumpspring);
    dec(Imm(0x2));
    // otherwise check for bullet bill object
    // if not found, branch again
    // decrement saved vertical position
    lda(Imm(0x3));
    ldy((EnemyFrameTimer), x);
    BEQ(SBBAt);
    ora(Imm(0b100000));
    JMP(SBBAt);
}

int SBBAt() {
    // get timer for enemy object
    // if expired, do not set priority bit
    // otherwise do so
    // set new sprite attributes
    sta(Imm(0x4));
    ldy(Imm(0x0));
    sty(Imm(0xed));
    lda(Imm(0x8));
    JMP(CheckForJumpspring);
}

int CheckForJumpspring() {
    cmp((JumpspringObject));
    // check for jumpspring object
    BNE(CheckForPodoboo);
    ldy(Imm(0x3));
    ldx((JumpspringAnimCtrl));
    lda((JumpspringFrameOffsets), x);
    JMP(CheckForPodoboo);
}

int CheckForPodoboo() {
    sta(Imm(0xef));
    sty(Imm(0xec));
    ldx((ObjectOffset));
    cmp(Imm(0xc));
    BNE(CheckBowserGfxFlag);
    lda((Enemy_Y_Speed), x);
    // store saved enemy object value here
    // and Y here (enemy state -2 MSB if not changed)
    // get enemy object offset
    // check for podoboo object
    // branch if not found
    // if moving upwards, branch
    BMI(CheckBowserGfxFlag);
    inc((VerticalFlipFlag));
    JMP(CheckBowserGfxFlag);
}

int CheckBowserGfxFlag() {
    lda((BowserGfxFlag));
    // if not drawing bowser at all, skip to something else
    BEQ(CheckForGoomba);
    ldy(Imm(0x16));
    // if set to 1, draw bowser's front
    cmp(Imm(0x1));
    BEQ(SBwsrGfxOfs);
    iny();
    JMP(SBwsrGfxOfs);
}

int SBwsrGfxOfs() {
    sty(Imm(0xef));
    JMP(CheckForGoomba);
}

int CheckForGoomba() {
    ldy(Imm(0xef));
    // check value for goomba object
    cpy((Goomba));
    BNE(CheckBowserFront);
    // branch if not found
    lda((Enemy_State), x);
    cmp(Imm(0x2));
    BCC(GmbaAnim);
    ldx(Imm(0x4));
    // check for defeated state
    // if not defeated, go ahead and animate
    // if defeated, write new value here
    stx(Imm(0xec));
    JMP(GmbaAnim);
}

int GmbaAnim() {
    // check for d5 set in enemy object state
    anda(Imm(0b100000));
    ora((TimerControl));
    BNE(CheckBowserFront);
    // or timer disable flag set
    // if either condition true, do not animate goomba
    lda((FrameCounter));
    anda(Imm(0b1000));
    // check for every eighth frame
    BNE(CheckBowserFront);
    lda(Imm(0x3));
    eor(Imm(0b11));
    sta(Imm(0x3));
    JMP(CheckBowserFront);
}

int CheckBowserFront() {
    lda((EnemyAttributeData), y);
    ora(Imm(0x4));
    // load sprite attribute using enemy object
    // as offset, and add to bits already loaded
    sta(Imm(0x4));
    lda((EnemyGfxTableOffsets), y);
    tax();
    ldy(Imm(0xec));
    // load value based on enemy object as offset
    // save as X
    // get previously saved value
    lda((BowserGfxFlag));
    BEQ(CheckForSpiny);
    // if not drawing bowser object at all, skip all of this
    cmp(Imm(0x1));
    BNE(CheckBowserRear);
    lda((BowserBodyControls));
    BPL(ChkFrontSte);
    ldx(Imm(0xde));
    JMP(ChkFrontSte);
}

int ChkFrontSte() {
    // if not drawing front part, branch to draw the rear part
    // check bowser's body control bits
    // branch if d7 not set (control's bowser's mouth)
    // otherwise load offset for second frame
    // check saved enemy state
    lda(Imm(0xed));
    anda(Imm(0b100000));
    // if bowser not defeated, do not set flag
    BEQ(DrawBowser);
    JMP(FlipBowserOver);
}

int FlipBowserOver() {
    stx((VerticalFlipFlag));
    JMP(DrawBowser);
}

int DrawBowser() {
    JMP(DrawEnemyObject);
    JMP(CheckBowserRear);
}

int CheckBowserRear() {
    lda((BowserBodyControls));
    // check bowser's body control bits
    anda(Imm(0x1));
    BEQ(ChkRearSte);
    ldx(Imm(0xe4));
    JMP(ChkRearSte);
}

int ChkRearSte() {
    // branch if d0 not set (control's bowser's feet)
    // otherwise load offset for second frame
    // check saved enemy state
    lda(Imm(0xed));
    anda(Imm(0b100000));
    // if bowser not defeated, do not set flag
    BEQ(DrawBowser);
    lda(Imm(0x2));
    sec();
    // subtract 16 pixels from
    // saved vertical coordinate
    sbc(Imm(0x10));
    sta(Imm(0x2));
    JMP(FlipBowserOver);
    JMP(CheckForSpiny);
}

int CheckForSpiny() {
    cpx(Imm(0x24));
    BNE(CheckForLakitu);
    cpy(Imm(0x5));
    BNE(NotEgg);
    ldx(Imm(0x30));
    // check if value loaded is for spiny
    // if not found, branch
    // if enemy state set to $05, do this,
    // otherwise branch
    // set to spiny egg offset
    lda(Imm(0x2));
    sta(Imm(0x3));
    // set enemy direction to reverse sprites horizontally
    lda(Imm(0x5));
    sta(Imm(0xec));
    JMP(NotEgg);
}

int NotEgg() {
    // set enemy state
    // skip a big chunk of this if we found spiny but not in egg
    JMP(CheckForHammerBro);
    JMP(CheckForLakitu);
}

int CheckForLakitu() {
    cpx(Imm(0x90));
    BNE(CheckUpsideDownShell);
    // check value for lakitu's offset loaded
    // branch if not loaded
    lda(Imm(0xed));
    anda(Imm(0b100000));
    BNE(NoLAFr);
    // check for d5 set in enemy state
    // branch if set
    lda((FrenzyEnemyTimer));
    cmp(Imm(0x10));
    BCS(NoLAFr);
    ldx(Imm(0x96));
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
    lda(Imm(0xef));
    // check for enemy object => $04
    cmp(Imm(0x4));
    BCS(CheckRightSideUpShell);
    // branch if true
    cpy(Imm(0x2));
    BCC(CheckRightSideUpShell);
    ldx(Imm(0x5a));
    // branch if enemy state < $02
    // set for upside-down koopa shell by default
    ldy(Imm(0xef));
    cpy((BuzzyBeetle));
    // check for buzzy beetle object
    BNE(CheckRightSideUpShell);
    ldx(Imm(0x7e));
    inc(Imm(0x2));
    JMP(CheckRightSideUpShell);
}

int CheckRightSideUpShell() {
    lda(Imm(0xec));
    cmp(Imm(0x4));
    BNE(CheckForHammerBro);
    ldx(Imm(0x72));
    inc(Imm(0x2));
    // check for value set here
    // if enemy state < $02, do not change to shell, if
    // enemy state => $02 but not = $04, leave shell upside-down
    // set right-side up buzzy beetle shell by default
    // increment saved vertical position by one pixel
    ldy(Imm(0xef));
    cpy((BuzzyBeetle));
    BEQ(CheckForDefdGoomba);
    ldx(Imm(0x66));
    inc(Imm(0x2));
    JMP(CheckForDefdGoomba);
}

int CheckForDefdGoomba() {
    cpy((Goomba));
    BNE(CheckForHammerBro);
    ldx(Imm(0x54));
    lda(Imm(0xed));
    anda(Imm(0b100000));
    BNE(CheckForHammerBro);
    ldx(Imm(0x8a));
    dec(Imm(0x2));
    JMP(CheckForHammerBro);
}

int CheckForHammerBro() {
    ldy((ObjectOffset));
    lda(Imm(0xef));
    // check for hammer bro object
    cmp((HammerBro));
    BNE(CheckForBloober);
    // branch if not found
    lda(Imm(0xed));
    BEQ(CheckToAnimateEnemy);
    // branch if not in normal enemy state
    anda(Imm(0b1000));
    BEQ(CheckDefeatedState);
    ldx(Imm(0xb4));
    BNE(CheckToAnimateEnemy);
    JMP(CheckForBloober);
}

int CheckForBloober() {
    cpx(Imm(0x48));
    BEQ(CheckToAnimateEnemy);
    // check for cheep-cheep offset loaded
    // branch if found
    lda((EnemyIntervalTimer), y);
    cmp(Imm(0x5));
    BCS(CheckDefeatedState);
    cpx(Imm(0x3c));
    BNE(CheckToAnimateEnemy);
    // branch if some timer is above a certain point
    // check for bloober offset loaded
    // branch if not found this time
    cmp(Imm(0x1));
    BEQ(CheckDefeatedState);
    inc(Imm(0x2));
    // branch if timer is set to certain point
    // increment saved vertical coordinate three pixels
    inc(Imm(0x2));
    inc(Imm(0x2));
    JMP(CheckAnimationStop);
    JMP(CheckToAnimateEnemy);
}

int CheckToAnimateEnemy() {
    lda(Imm(0xef));
    // check for specific enemy objects
    cmp((Goomba));
    BEQ(CheckDefeatedState);
    // branch if goomba
    cmp(Imm(0x8));
    BEQ(CheckDefeatedState);
    // branch if bullet bill (note both variants use $08 here)
    cmp((Podoboo));
    BEQ(CheckDefeatedState);
    cmp(Imm(0x18));
    // branch if podoboo
    // branch if => $18
    BCS(CheckDefeatedState);
    ldy(Imm(0x0));
    cmp(Imm(0x15));
    BNE(CheckForSecondFrame);
    iny();
    lda((WorldNumber));
    // check for mushroom retainer/princess object
    // which uses different code here, branch if not found
    // residual instruction
    // are we on world 8?
    cmp((World8));
    BCS(CheckDefeatedState);
    ldx(Imm(0xa2));
    lda(Imm(0x3));
    // if so, leave the offset alone (use princess)
    // otherwise, set for mushroom retainer object instead
    // set alternate state here
    sta(Imm(0xec));
    BNE(CheckDefeatedState);
    JMP(CheckForSecondFrame);
}

int CheckForSecondFrame() {
    lda((FrameCounter));
    anda((EnemyAnimTimingBMask), y);
    BNE(CheckDefeatedState);
    JMP(CheckAnimationStop);
}

int CheckAnimationStop() {
    lda(Imm(0xed));
    anda(Imm(0b10100000));
    // check saved enemy state
    // for d7 or d5, or check for timers stopped
    ora((TimerControl));
    BNE(CheckDefeatedState);
    // if either condition true, branch
    txa();
    clc();
    adc(Imm(0x6));
    tax();
    JMP(CheckDefeatedState);
}

int CheckDefeatedState() {
    lda(Imm(0xed));
    anda(Imm(0b100000));
    BEQ(DrawEnemyObject);
    // check saved enemy state
    // for d5 set
    // branch if not set
    lda(Imm(0xef));
    cmp(Imm(0x4));
    BCC(DrawEnemyObject);
    // check for saved enemy object => $04
    // branch if less
    ldy(Imm(0x1));
    sty((VerticalFlipFlag));
    // set vertical flip flag
    dey();
    sty(Imm(0xec));
    JMP(DrawEnemyObject);
}

int DrawEnemyObject() {
    ldy(Imm(0xeb));
    JSR(DrawEnemyObjRow);
    JSR(DrawEnemyObjRow);
    // load sprite data offset
    // draw six tiles of data
    // into sprite data
    JSR(DrawEnemyObjRow);
    ldx((ObjectOffset));
    ldy((Enemy_SprDataOffset), x);
    // get enemy object offset
    // get sprite data offset
    lda(Imm(0xef));
    cmp(Imm(0x8));
    BNE(CheckForVerticalFlip);
    JMP(SkipToOffScrChk);
}

int SkipToOffScrChk() {
    JMP(SprObjectOffscrChk);
    JMP(CheckForVerticalFlip);
}

int CheckForVerticalFlip() {
    lda((VerticalFlipFlag));
    BEQ(CheckForESymmetry);
    lda((Sprite_Attributes), y);
    ora(Imm(0b10000000));
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
    lda(Imm(0xef));
    cmp((HammerBro));
    // check saved enemy object for hammer bro
    BEQ(FlipEnemyVertically);
    cmp((Lakitu));
    BEQ(FlipEnemyVertically);
    // check saved enemy object for lakitu
    // branch for hammer bro or lakitu
    cmp(Imm(0x15));
    BCS(FlipEnemyVertically);
    // also branch if enemy object => $15
    txa();
    clc();
    adc(Imm(0x8));
    tax();
    JMP(FlipEnemyVertically);
}

int FlipEnemyVertically() {
    lda((Sprite_Tilenumber), x);
    pha();
    // load first or second row tiles
    // and save tiles to the stack
    lda((((Sprite_Tilenumber)) + (Imm(4))), x);
    pha();
    lda((((Sprite_Tilenumber)) + (Imm(16))), y);
    sta((Sprite_Tilenumber), x);
    // exchange third row tiles
    // with first or second row tiles
    lda((((Sprite_Tilenumber)) + (Imm(20))), y);
    sta((((Sprite_Tilenumber)) + (Imm(4))), x);
    pla();
    sta((((Sprite_Tilenumber)) + (Imm(20))), y);
    // pull first or second row tiles from stack
    // and save in third row
    pla();
    sta((((Sprite_Tilenumber)) + (Imm(16))), y);
    JMP(CheckForESymmetry);
}

int CheckForESymmetry() {
    lda((BowserGfxFlag));
    BNE(SkipToOffScrChk);
    // are we drawing bowser at all?
    // branch if so
    lda(Imm(0xef));
    ldx(Imm(0xec));
    cmp(Imm(0x5));
    // get alternate enemy state
    // check for hammer bro object
    BNE(ContES);
    JMP(SprObjectOffscrChk);
    JMP(ContES);
}

int ContES() {
    // jump if found
    // check for bloober object
    cmp((Bloober));
    BEQ(MirrorEnemyGfx);
    cmp((PiranhaPlant));
    // check for piranha plant object
    BEQ(MirrorEnemyGfx);
    cmp((Podoboo));
    BEQ(MirrorEnemyGfx);
    cmp((Spiny));
    BNE(ESRtnr);
    cpx(Imm(0x5));
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
    cmp(Imm(0x15));
    BNE(SpnySC);
    lda(Imm(0x42));
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    JMP(SpnySC);
}

int SpnySC() {
    // set horizontal flip on bottom right sprite
    // note that palette bits were already set earlier
    // if alternate enemy state set to 1 or 0, branch
    cpx(Imm(0x2));
    BCC(CheckToMirrorLakitu);
    JMP(MirrorEnemyGfx);
}

int MirrorEnemyGfx() {
    lda((BowserGfxFlag));
    // if enemy object is bowser, skip all of this
    BNE(CheckToMirrorLakitu);
    lda((Sprite_Attributes), y);
    // load attribute bits of first sprite
    anda(Imm(0b10100011));
    sta((Sprite_Attributes), y);
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    // save vertical flip, priority, and palette bits
    // in left sprite column of enemy object OAM data
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    ora(Imm(0b1000000));
    cpx(Imm(0x5));
    BNE(EggExc);
    ora(Imm(0b10000000));
    JMP(EggExc);
}

int EggExc() {
    // set horizontal flip
    // check for state used by spiny's egg
    // if alternate state not set to $05, branch
    // otherwise set vertical flip
    // set bits of right sprite column
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    // of enemy object sprite data
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    cpx(Imm(0x4));
    BNE(CheckToMirrorLakitu);
    lda((((Sprite_Attributes)) + (Imm(8))), y);
    // check alternate enemy state
    // branch if not $04
    // get second row left sprite attributes
    ora(Imm(0b10000000));
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    // store bits with vertical flip in
    // second and third row left sprites
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    JMP(CheckToMirrorLakitu);
}

int CheckToMirrorLakitu() {
    lda(Imm(0xef));
    // check for lakitu enemy object
    cmp((Lakitu));
    BNE(CheckToMirrorJSpring);
    // branch if not found
    lda((VerticalFlipFlag));
    BNE(NVFLak);
    lda((((Sprite_Attributes)) + (Imm(16))), y);
    anda(Imm(0b10000001));
    // branch if vertical flip flag not set
    // save vertical flip and palette bits
    // in third row left sprite
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    lda((((Sprite_Attributes)) + (Imm(20))), y);
    ora(Imm(0b1000001));
    // set horizontal flip and palette bits
    // in third row right sprite
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    ldx((FrenzyEnemyTimer));
    // check timer
    cpx(Imm(0x10));
    BCS(SprObjectOffscrChk);
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    // branch if timer has not reached a certain range
    // otherwise set same for second row right sprite
    anda(Imm(0b10000001));
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    BCC(SprObjectOffscrChk);
    JMP(NVFLak);
}

int NVFLak() {
    // preserve vertical flip and palette bits for left sprite
    // unconditional branch
    // get first row left sprite attributes
    lda((Sprite_Attributes), y);
    anda(Imm(0b10000001));
    sta((Sprite_Attributes), y);
    lda((((Sprite_Attributes)) + (Imm(4))), y);
    ora(Imm(0b1000001));
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    JMP(CheckToMirrorJSpring);
}

int CheckToMirrorJSpring() {
    lda(Imm(0xef));
    // check for jumpspring object (any frame)
    cmp(Imm(0x18));
    BCC(SprObjectOffscrChk);
    // branch if not jumpspring object at all
    lda(Imm(0x82));
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    // set vertical flip and palette bits of
    // second and third row left sprites
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    JMP(SprObjectOffscrChk);
}

int SprObjectOffscrChk() {
    ldx((ObjectOffset));
    lda((Enemy_OffscreenBits));
    // get enemy buffer offset
    // check offscreen information
    lsr();
    lsr();
    lsr();
    pha();
    BCC(LcChk);
    lda(Imm(0x4));
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
    lda(Imm(0x0));
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
    lda(Imm(0x10));
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
    lda(Imm(0x8));
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
    lda((Enemy_ID), x);
    cmp((Podoboo));
    BEQ(ExEGHandler);
    lda((Enemy_Y_HighPos), x);
    cmp(Imm(0x2));
    // check enemy identifier for podoboo
    // skip this part if found, we do not want to erase podoboo!
    // check high byte of vertical position
    // if not yet past the bottom of the screen, branch
    BNE(ExEGHandler);
    JSR(EraseEnemyObject);
    JMP(ExEGHandler);
}

int ExEGHandler() {
    rts();
    JMP(DrawEnemyObjRow);
}

int DrawEnemyObjRow() {
    lda((EnemyGraphicsTable), x);
    // load two tiles of enemy graphics
    sta(Imm(0x0));
    lda((((EnemyGraphicsTable)) + (Imm(1))), x);
    JMP(DrawOneSpriteRow);
}

int DrawOneSpriteRow() {
    sta(Imm(0x1));
    JMP(DrawSpriteObject);
    JMP(MoveESprRowOffscreen);
}

int MoveESprRowOffscreen() {
    clc();
    // add A to enemy object OAM data offset
    adc((Enemy_SprDataOffset), x);
    tay();
    // use as offset
    lda(Imm(0xf8));
    JMP(DumpTwoSpr);
    JMP(MoveESprColOffscreen);
}

int MoveESprColOffscreen() {
    clc();
    // add A to enemy object OAM data offset
    adc((Enemy_SprDataOffset), x);
    tay();
    JSR(MoveColOffscreen);
    sta((((Sprite_Data)) + (Imm(16))), y);
    // use as offset
    // move first and second row sprites in column offscreen
    // move third row sprite in column offscreen
    rts();
    JMP(DrawBlock);
}

int DrawBlock() {
    lda((Block_Rel_YPos));
    sta(Imm(0x2));
    lda((Block_Rel_XPos));
    sta(Imm(0x5));
    // get relative vertical coordinate of block object
    // store here
    // get relative horizontal coordinate of block object
    // store here
    lda(Imm(0x3));
    sta(Imm(0x4));
    // set attribute byte here
    lsr();
    sta(Imm(0x3));
    ldy((Block_SprDataOffset), x);
    ldx(Imm(0x0));
    JMP(DBlkLoop);
}

int DBlkLoop() {
    // set horizontal flip bit here (will not be used)
    // get sprite data offset
    // reset X for use as offset to tile data
    // get left tile number
    lda((DefaultBlockObjTiles), x);
    sta(Imm(0x0));
    lda((((DefaultBlockObjTiles)) + (Imm(1))), x);
    JSR(DrawOneSpriteRow);
    cpx(Imm(0x4));
    BNE(DBlkLoop);
    ldx((ObjectOffset));
    ldy((Block_SprDataOffset), x);
    // set here
    // get right tile number
    // do sub to write tile numbers to first row of sprites
    // check incremented offset
    // and loop back until all four sprites are done
    // get block object offset
    // get sprite data offset
    lda((AreaType));
    cmp(Imm(0x1));
    BEQ(ChkRep);
    // check for ground level type area
    // if found, branch to next part
    lda(Imm(0x86));
    sta((Sprite_Tilenumber), y);
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    JMP(ChkRep);
}

int ChkRep() {
    // otherwise remove brick tiles with lines
    // and replace then with lineless brick tiles
    // check replacement metatile
    lda((Block_Metatile), x);
    cmp(Imm(0xc4));
    BNE(BlkOffscr);
    lda(Imm(0x87));
    iny();
    JSR(DumpFourSpr);
    dey();
    lda(Imm(0x3));
    // if not used block metatile, then
    // branch ahead to use current graphics
    // set A for used block tile
    // increment Y to write to tile bytes
    // do sub to dump into all four sprites
    // return Y to original offset
    // set palette bits
    ldx((AreaType));
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
    ldx((ObjectOffset));
    sta((Sprite_Attributes), y);
    // store attribute byte as-is in first sprite
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    // set horizontal flip bit for second sprite
    ora(Imm(0b10000000));
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    // set both flip bits for fourth sprite
    anda(Imm(0b10000011));
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    JMP(BlkOffscr);
}

int BlkOffscr() {
    // set vertical flip bit for third sprite
    // get offscreen bits for block object
    lda((Block_OffscreenBits));
    pha();
    anda(Imm(0b100));
    BEQ(PullOfsB);
    lda(Imm(0xf8));
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    // save to stack
    // check to see if d2 in offscreen bits are set
    // if not set, branch, otherwise move sprites offscreen
    // move offscreen two OAMs
    // on the right side
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    JMP(PullOfsB);
}

int PullOfsB() {
    // pull offscreen bits from stack
    pla();
    JMP(ChkLeftCo);
}

int ChkLeftCo() {
    // check to see if d3 in offscreen bits are set
    anda(Imm(0b1000));
    BEQ(ExDBlk);
    JMP(MoveColOffscreen);
}

int MoveColOffscreen() {
    lda(Imm(0xf8));
    sta((Sprite_Y_Position), y);
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    JMP(ExDBlk);
}

int ExDBlk() {
    rts();
    JMP(DrawBrickChunks);
}

int DrawBrickChunks() {
    lda(Imm(0x2));
    // $00 - used to hold palette bits for attribute byte or relative X position
    // set palette bits here
    sta(Imm(0x0));
    lda(Imm(0x75));
    // set tile number for ball (something residual, likely)
    ldy((GameEngineSubroutine));
    cpy(Imm(0x5));
    BEQ(DChunks);
    lda(Imm(0x3));
    // if end-of-level routine running,
    // use palette and tile number assigned
    // otherwise set different palette bits
    sta(Imm(0x0));
    lda(Imm(0x84));
    JMP(DChunks);
}

int DChunks() {
    // and set tile number for brick chunks
    // get OAM data offset
    ldy((Block_SprDataOffset), x);
    iny();
    JSR(DumpFourSpr);
    lda((FrameCounter));
    // increment to start with tile bytes in OAM
    // do sub to dump tile number into all four sprites
    // get frame counter
    asl();
    asl();
    asl();
    // move low nybble to high
    asl();
    anda(Imm(0xc0));
    ora(Imm(0x0));
    iny();
    JSR(DumpFourSpr);
    // get what was originally d3-d2 of low nybble
    // add palette bits
    // increment offset for attribute bytes
    // do sub to dump attribute data into all four sprites
    dey();
    dey();
    lda((Block_Rel_YPos));
    JSR(DumpTwoSpr);
    lda((Block_Rel_XPos));
    sta((Sprite_X_Position), y);
    lda((Block_Orig_XPos), x);
    // decrement offset to Y coordinate
    // get first block object's relative vertical coordinate
    // do sub to dump current Y coordinate into two sprites
    // get first block object's relative horizontal coordinate
    // save into X coordinate of first sprite
    // get original horizontal coordinate
    sec();
    sbc((ScreenLeft_X_Pos));
    sta(Imm(0x0));
    // subtract coordinate of left side from original coordinate
    // store result as relative horizontal coordinate of original
    sec();
    sbc((Block_Rel_XPos));
    adc(Imm(0x0));
    adc(Imm(0x6));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    lda((((Block_Rel_YPos)) + (Imm(1))));
    // get difference of relative positions of original - current
    // add original relative position to result
    // plus 6 pixels to position second brick chunk correctly
    // save into X coordinate of second sprite
    // get second block object's relative vertical coordinate
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    lda((((Block_Rel_XPos)) + (Imm(1))));
    sta((((Sprite_X_Position)) + (Imm(8))), y);
    lda(Imm(0x0));
    // dump into Y coordinates of third and fourth sprites
    // get second block object's relative horizontal coordinate
    // save into X coordinate of third sprite
    // use original relative horizontal position
    sec();
    sbc((((Block_Rel_XPos)) + (Imm(1))));
    adc(Imm(0x0));
    adc(Imm(0x6));
    sta((((Sprite_X_Position)) + (Imm(12))), y);
    lda((Block_OffscreenBits));
    JSR(ChkLeftCo);
    lda((Block_OffscreenBits));
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
    lda(Imm(0xf8));
    JSR(DumpTwoSpr);
    JMP(ChnkOfs);
}

int ChnkOfs() {
    // otherwise move top sprites offscreen
    // if relative position on left side of screen,
    lda(Imm(0x0));
    BPL(ExBCDr);
    lda((Sprite_X_Position), y);
    cmp((((Sprite_X_Position)) + (Imm(4))), y);
    BCC(ExBCDr);
    lda(Imm(0xf8));
    // go ahead and leave
    // otherwise compare left-side X coordinate
    // to right-side X coordinate
    // branch to leave if less
    // otherwise move right half of sprites offscreen
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    JMP(ExBCDr);
}

int ExBCDr() {
    // leave
    rts();
    JMP(DrawFireball);
}

int DrawFireball() {
    ldy((FBall_SprDataOffset), x);
    lda((Fireball_Rel_YPos));
    sta((Sprite_Y_Position), y);
    lda((Fireball_Rel_XPos));
    sta((Sprite_X_Position), y);
    JMP(DrawFirebar);
}

int DrawFirebar() {
    lda((FrameCounter));
    lsr();
    // get frame counter
    // divide by four
    lsr();
    pha();
    anda(Imm(0x1));
    eor(Imm(0x64));
    sta((Sprite_Tilenumber), y);
    pla();
    lsr();
    // save result to stack
    // mask out all but last bit
    // set either tile $64 or $65 as fireball tile
    // thus tile changes every four frames
    // get from stack
    // divide by four again
    lsr();
    lda(Imm(0x2));
    BCC(FireA);
    ora(Imm(0b11000000));
    JMP(FireA);
}

int FireA() {
    // load value $02 to set palette in attrib byte
    // if last bit shifted out was not set, skip this
    // otherwise flip both ways every eight frames
    // store attribute byte and leave
    sta((Sprite_Attributes), y);
    rts();
    JMP(DrawExplosion_Fireball);
}

int DrawExplosion_Fireball() {
    ldy((Alt_SprDataOffset), x);
    lda((Fireball_State), x);
    inc((Fireball_State), x);
    lsr();
    anda(Imm(0b111));
    cmp(Imm(0x3));
    BCS(KillFireBall);
    JMP(DrawExplosion_Fireworks);
}

int DrawExplosion_Fireworks() {
    tax();
    lda((ExplosionTiles), x);
    iny();
    JSR(DumpFourSpr);
    dey();
    ldx((ObjectOffset));
    lda((Fireball_Rel_YPos));
    sec();
    sbc(Imm(0x4));
    // use whatever's in A for offset
    // get tile number using offset
    // increment Y (contains sprite data offset)
    // and dump into tile number part of sprite data
    // decrement Y so we have the proper offset again
    // return enemy object buffer offset to X
    // get relative vertical coordinate
    // subtract four pixels vertically
    // for first and third sprites
    sta((Sprite_Y_Position), y);
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    clc();
    adc(Imm(0x8));
    // add eight pixels vertically
    // for second and fourth sprites
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    lda((Fireball_Rel_XPos));
    sec();
    sbc(Imm(0x4));
    // get relative horizontal coordinate
    // subtract four pixels horizontally
    // for first and second sprites
    sta((Sprite_X_Position), y);
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    clc();
    adc(Imm(0x8));
    // add eight pixels horizontally
    // for third and fourth sprites
    sta((((Sprite_X_Position)) + (Imm(8))), y);
    sta((((Sprite_X_Position)) + (Imm(12))), y);
    lda(Imm(0x2));
    sta((Sprite_Attributes), y);
    // set palette attributes for all sprites, but
    // set no flip at all for first sprite
    lda(Imm(0x82));
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    // set vertical flip for second sprite
    lda(Imm(0x42));
    sta((((Sprite_Attributes)) + (Imm(8))), y);
    // set horizontal flip for third sprite
    lda(Imm(0xc2));
    sta((((Sprite_Attributes)) + (Imm(12))), y);
    rts();
    JMP(KillFireBall);
}

int KillFireBall() {
    lda(Imm(0x0));
    // clear fireball state to kill it
    sta((Fireball_State), x);
    rts();
    JMP(DrawSmallPlatform);
}

int DrawSmallPlatform() {
    ldy((Enemy_SprDataOffset), x);
    lda(Imm(0x5b));
    iny();
    JSR(DumpSixSpr);
    iny();
    lda(Imm(0x2));
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
    lda((Enemy_Rel_XPos));
    // get relative horizontal coordinate
    sta((Sprite_X_Position), y);
    sta((((Sprite_X_Position)) + (Imm(12))), y);
    // dump as X coordinate into first and fourth sprites
    clc();
    adc(Imm(0x8));
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    // add eight pixels
    // dump into second and fifth sprites
    sta((((Sprite_X_Position)) + (Imm(16))), y);
    clc();
    adc(Imm(0x8));
    sta((((Sprite_X_Position)) + (Imm(8))), y);
    // add eight more pixels
    // dump into third and sixth sprites
    sta((((Sprite_X_Position)) + (Imm(20))), y);
    lda((Enemy_Y_Position), x);
    // get vertical coordinate
    tax();
    pha();
    cpx(Imm(0x20));
    BCS(TopSP);
    lda(Imm(0xf8));
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
    adc(Imm(0x80));
    // add 128 pixels
    tax();
    cpx(Imm(0x20));
    BCS(BotSP);
    lda(Imm(0xf8));
    JMP(BotSP);
}

int BotSP() {
    // if below status bar (taking wrap into account)
    // then do not change altered coordinate
    // otherwise move last three sprites offscreen
    // dump vertical coordinate + 128 pixels
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    sta((((Sprite_Y_Position)) + (Imm(16))), y);
    // into Y coordinates
    sta((((Sprite_Y_Position)) + (Imm(20))), y);
    lda((Enemy_OffscreenBits));
    pha();
    anda(Imm(0b1000));
    // get offscreen bits
    // save to stack
    // check d3
    BEQ(SOfs);
    lda(Imm(0xf8));
    sta((Sprite_Y_Position), y);
    // if d3 was set, move first and
    // fourth sprites offscreen
    sta((((Sprite_Y_Position)) + (Imm(12))), y);
    JMP(SOfs);
}

int SOfs() {
    // move out and back into stack
    pla();
    pha();
    anda(Imm(0b100));
    // check d2
    BEQ(SOfs2);
    lda(Imm(0xf8));
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    // if d2 was set, move second and
    // fifth sprites offscreen
    sta((((Sprite_Y_Position)) + (Imm(16))), y);
    JMP(SOfs2);
}

int SOfs2() {
    // get from stack
    pla();
    anda(Imm(0b10));
    // check d1
    BEQ(ExSPl);
    lda(Imm(0xf8));
    sta((((Sprite_Y_Position)) + (Imm(8))), y);
    // if d1 was set, move third and
    // sixth sprites offscreen
    sta((((Sprite_Y_Position)) + (Imm(20))), y);
    JMP(ExSPl);
}

int ExSPl() {
    // get enemy object offset and leave
    ldx((ObjectOffset));
    rts();
    JMP(DrawBubble);
}

int DrawBubble() {
    ldy((Player_Y_HighPos));
    dey();
    // if player's vertical high position
    // not within screen, skip all of this
    BNE(ExDBub);
    lda((Bubble_OffscreenBits));
    // check air bubble's offscreen bits
    anda(Imm(0b1000));
    BNE(ExDBub);
    ldy((Bubble_SprDataOffset), x);
    lda((Bubble_Rel_XPos));
    sta((Sprite_X_Position), y);
    lda((Bubble_Rel_YPos));
    sta((Sprite_Y_Position), y);
    // if bit set, branch to leave
    // get air bubble's OAM data offset
    // get relative horizontal coordinate
    // store as X coordinate here
    // get relative vertical coordinate
    // store as Y coordinate here
    lda(Imm(0x74));
    sta((Sprite_Tilenumber), y);
    // put air bubble tile into OAM data
    lda(Imm(0x2));
    sta((Sprite_Attributes), y);
    JMP(ExDBub);
}

int ExDBub() {
    // set attribute byte
    // leave
    rts();
    JMP(PlayerGfxHandler);
}

int PlayerGfxHandler() {
    lda((InjuryTimer));
    BEQ(CntPl);
    // if player's injured invincibility timer
    // not set, skip checkpoint and continue code
    lda((FrameCounter));
    lsr();
    BCS(ExPGH);
    JMP(CntPl);
}

int CntPl() {
    // otherwise check frame counter and branch
    // to leave on every other frame (when d0 is set)
    // if executing specific game engine routine,
    lda((GameEngineSubroutine));
    cmp(Imm(0xb));
    // branch ahead to some other part
    BEQ(PlayerKilled);
    lda((PlayerChangeSizeFlag));
    BNE(DoChangeSize);
    ldy((SwimmingFlag));
    BEQ(FindPlayerAction);
    // if grow/shrink flag set
    // then branch to some other code
    // if swimming flag set, branch to
    // different part, do not return
    lda((Player_State));
    cmp(Imm(0x0));
    BEQ(FindPlayerAction);
    JSR(FindPlayerAction);
    // if player status normal,
    // branch and do not return
    // otherwise jump and return
    lda((FrameCounter));
    anda(Imm(0b100));
    BNE(ExPGH);
    tax();
    ldy((Player_SprDataOffset));
    lda((PlayerFacingDir));
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
    lda((PlayerSize));
    BEQ(BigKTS);
    lda((((Sprite_Tilenumber)) + (Imm(24))), y);
    cmp((SwimTileRepOffset));
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
    lda((SwimKickTileNum), x);
    sta((((Sprite_Tilenumber)) + (Imm(24))), y);
    JMP(ExPGH);
}

int ExPGH() {
    // to animate player's feet when swimming
    // then leave
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
    ldy(Imm(0xe));
    lda((PlayerGfxTblOffsets), y);
    JMP(PlayerGfxProcessing);
}

int PlayerGfxProcessing() {
    sta((PlayerGfxOffset));
    // store offset to graphics table here
    lda(Imm(0x4));
    JSR(RenderPlayerSub);
    JSR(ChkForPlayerAttrib);
    // draw player based on offset loaded
    // set horizontal flip bits as necessary
    lda((FireballThrowingTimer));
    BEQ(PlayerOffscreenChk);
    ldy(Imm(0x0));
    lda((PlayerAnimTimer));
    cmp((FireballThrowingTimer));
    sty((FireballThrowingTimer));
    BCS(PlayerOffscreenChk);
    sta((FireballThrowingTimer));
    ldy(Imm(0x7));
    lda((PlayerGfxTblOffsets), y);
    sta((PlayerGfxOffset));
    ldy(Imm(0x4));
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
    lda((Player_X_Speed));
    ora((Left_Right_Buttons));
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
    lda((Player_OffscreenBits));
    // get player's offscreen bits
    lsr();
    lsr();
    // move vertical bits to low nybble
    lsr();
    lsr();
    sta(Imm(0x0));
    ldx(Imm(0x3));
    lda((Player_SprDataOffset));
    // store here
    // check all four rows of player sprites
    // get player's sprite data offset
    clc();
    adc(Imm(0x18));
    tay();
    JMP(PROfsLoop);
}

int PROfsLoop() {
    // add 24 bytes to start at bottom row
    // set as offset here
    // load offscreen Y coordinate just in case
    lda(Imm(0xf8));
    lsr(Imm(0x0));
    BCC(NPROffscr);
    JSR(DumpTwoSpr);
    JMP(NPROffscr);
}

int NPROffscr() {
    tya();
    sec();
    sbc(Imm(0x8));
    // subtract eight bytes to do
    // next row up
    tay();
    dex();
    BPL(PROfsLoop);
    rts();
    JMP(DrawPlayer_Intermediate);
}

int DrawPlayer_Intermediate() {
    ldx(Imm(0x5));
    JMP(PIntLoop);
}

int PIntLoop() {
    // store data into zero page memory
    // load data to display player as he always
    lda((IntermediatePlayerData), x);
    sta(Imm(0x2), x);
    // appears on world/lives display
    dex();
    BPL(PIntLoop);
    ldx(Imm(0xb8));
    ldy(Imm(0x4));
    JSR(DrawPlayerLoop);
    lda((((Sprite_Attributes)) + (Imm(36))));
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(32))));
    // do this until all data is loaded
    // load offset for small standing
    // load sprite data offset
    // draw player accordingly
    // get empty sprite attributes
    // set horizontal flip bit for bottom-right sprite
    // store and leave
    rts();
    JMP(RenderPlayerSub);
}

int RenderPlayerSub() {
    sta(Imm(0x7));
    // $00-$01 - used to hold tile numbers, $00 also used to hold upper extent of animation frames
    // $03 - facing direction, used as horizontal flip control
    // $05 - horizontal position
    // these also used in IntermediatePlayerData
    // store number of rows of sprites to draw
    lda((Player_Rel_XPos));
    sta((Player_Pos_ForScroll));
    sta(Imm(0x5));
    // store player's relative horizontal position
    // store it here also
    lda((Player_Rel_YPos));
    sta(Imm(0x2));
    // store player's vertical position
    lda((PlayerFacingDir));
    sta(Imm(0x3));
    // store player's facing direction
    lda((Player_SprAttrib));
    sta(Imm(0x4));
    ldx((PlayerGfxOffset));
    ldy((Player_SprDataOffset));
    JMP(DrawPlayerLoop);
}

int DrawPlayerLoop() {
    lda((PlayerGraphicsTable), x);
    // load player's left side
    sta(Imm(0x0));
    lda((((PlayerGraphicsTable)) + (Imm(1))), x);
    // now load right side
    JSR(DrawOneSpriteRow);
    dec(Imm(0x7));
    BNE(DrawPlayerLoop);
    // decrement rows of sprites to draw
    // do this until all rows are drawn
    rts();
    JMP(ProcessPlayerAction);
}

int ProcessPlayerAction() {
    lda((Player_State));
    // get player's state
    cmp(Imm(0x3));
    BEQ(ActionClimbing);
    // if climbing, branch here
    cmp(Imm(0x2));
    BEQ(ActionFalling);
    // if falling, branch here
    cmp(Imm(0x1));
    BNE(ProcOnGroundActs);
    // if not jumping, branch here
    lda((SwimmingFlag));
    BNE(ActionSwimming);
    ldy(Imm(0x6));
    lda((CrouchingFlag));
    BNE(NonAnimatedActs);
    ldy(Imm(0x0));
    JMP(NonAnimatedActs);
    JMP(ProcOnGroundActs);
}

int ProcOnGroundActs() {
    ldy(Imm(0x6));
    lda((CrouchingFlag));
    BNE(NonAnimatedActs);
    ldy(Imm(0x2));
    lda((Player_X_Speed));
    ora((Left_Right_Buttons));
    BEQ(NonAnimatedActs);
    lda((Player_XSpeedAbsolute));
    // load offset for crouching
    // get crouching flag
    // if set, branch to get offset for graphics table
    // load offset for standing
    // check player's horizontal speed
    // and left/right controller bits
    // if no speed or buttons pressed, use standing offset
    // load walking/running speed
    cmp(Imm(0x9));
    BCC(ActionWalkRun);
    lda((Player_MovingDir));
    anda((PlayerFacingDir));
    BNE(ActionWalkRun);
    iny();
    JMP(NonAnimatedActs);
}

int NonAnimatedActs() {
    JSR(GetGfxOffsetAdder);
    // do a sub here to get offset adder for graphics table
    lda(Imm(0x0));
    sta((PlayerAnimCtrl));
    lda((PlayerGfxTblOffsets), y);
    // initialize animation frame control
    // load offset to graphics table using size as offset
    rts();
    JMP(ActionFalling);
}

int ActionFalling() {
    ldy(Imm(0x4));
    JSR(GetGfxOffsetAdder);
    JMP(GetCurrentAnimOffset);
    JMP(ActionWalkRun);
}

int ActionWalkRun() {
    ldy(Imm(0x4));
    JSR(GetGfxOffsetAdder);
    JMP(FourFrameExtent);
    JMP(ActionClimbing);
}

int ActionClimbing() {
    ldy(Imm(0x5));
    lda((Player_Y_Speed));
    BEQ(NonAnimatedActs);
    JSR(GetGfxOffsetAdder);
    JMP(ThreeFrameExtent);
    JMP(ActionSwimming);
}

int ActionSwimming() {
    ldy(Imm(0x1));
    // load offset for swimming
    JSR(GetGfxOffsetAdder);
    lda((JumpSwimTimer));
    ora((PlayerAnimCtrl));
    BNE(FourFrameExtent);
    // check jump/swim timer
    // and animation frame control
    // if any one of these set, branch ahead
    lda((A_B_Buttons));
    asl();
    BCS(FourFrameExtent);
    JMP(GetCurrentAnimOffset);
}

int GetCurrentAnimOffset() {
    lda((PlayerAnimCtrl));
    JMP(GetOffsetFromAnimCtrl);
    JMP(FourFrameExtent);
}

int FourFrameExtent() {
    lda(Imm(0x3));
    JMP(AnimationControl);
    JMP(ThreeFrameExtent);
}

int ThreeFrameExtent() {
    lda(Imm(0x2));
    JMP(AnimationControl);
}

int AnimationControl() {
    sta(Imm(0x0));
    JSR(GetCurrentAnimOffset);
    pha();
    lda((PlayerAnimTimer));
    BNE(ExAnimC);
    lda((PlayerAnimTimerSet));
    sta((PlayerAnimTimer));
    // store upper extent here
    // get proper offset to graphics table
    // save offset to stack
    // load animation frame timer
    // branch if not expired
    // get animation frame timer amount
    // and set timer accordingly
    lda((PlayerAnimCtrl));
    clc();
    // add one to animation frame control
    adc(Imm(0x1));
    cmp(Imm(0x0));
    BCC(SetAnimC);
    lda(Imm(0x0));
    JMP(SetAnimC);
}

int SetAnimC() {
    // compare to upper extent
    // if frame control + 1 < upper extent, use as next
    // otherwise initialize frame control
    // store as new animation frame control
    sta((PlayerAnimCtrl));
    JMP(ExAnimC);
}

int ExAnimC() {
    // get offset to graphics table from stack and leave
    pla();
    rts();
    JMP(GetGfxOffsetAdder);
}

int GetGfxOffsetAdder() {
    lda((PlayerSize));
    BEQ(SzOfs);
    tya();
    clc();
    adc(Imm(0x8));
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
    rts();
    JMP(HandleChangeSize);
}

int HandleChangeSize() {
    ldy((PlayerAnimCtrl));
    // get animation frame control
    lda((FrameCounter));
    anda(Imm(0b11));
    BNE(GorSLog);
    iny();
    cpy(Imm(0xa));
    BCC(CSzNext);
    ldy(Imm(0x0));
    sty((PlayerChangeSizeFlag));
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
    sty((PlayerAnimCtrl));
    JMP(GorSLog);
}

int GorSLog() {
    // get player's size
    lda((PlayerSize));
    BNE(ShrinkPlayer);
    lda((ChangeSizeOffsetAdder), y);
    ldy(Imm(0xf));
    JMP(GetOffsetFromAnimCtrl);
}

int GetOffsetFromAnimCtrl() {
    asl();
    asl();
    asl();
    adc((PlayerGfxTblOffsets), y);
    rts();
    JMP(ShrinkPlayer);
}

int ShrinkPlayer() {
    tya();
    // add ten bytes to frame control as offset
    clc();
    adc(Imm(0xa));
    tax();
    ldy(Imm(0x9));
    lda((ChangeSizeOffsetAdder), x);
    BNE(ShrPlF);
    ldy(Imm(0x1));
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
    lda((PlayerGfxTblOffsets), y);
    rts();
    JMP(ChkForPlayerAttrib);
}

int ChkForPlayerAttrib() {
    ldy((Player_SprDataOffset));
    // get sprite data offset
    lda((GameEngineSubroutine));
    cmp(Imm(0xb));
    BEQ(KilledAtt);
    lda((PlayerGfxOffset));
    // if executing specific game engine routine,
    // branch to change third and fourth row OAM attributes
    // get graphics table offset
    cmp(Imm(0x50));
    BEQ(C_S_IGAtt);
    cmp(Imm(0xb8));
    BEQ(C_S_IGAtt);
    cmp(Imm(0xc0));
    // if crouch offset, either standing offset,
    // or intermediate growing offset,
    // go ahead and execute code to change
    // fourth row OAM attributes only
    BEQ(C_S_IGAtt);
    cmp(Imm(0xc8));
    BNE(ExPlyrAt);
    JMP(KilledAtt);
}

int KilledAtt() {
    lda((((Sprite_Attributes)) + (Imm(16))), y);
    anda(Imm(0b111111));
    sta((((Sprite_Attributes)) + (Imm(16))), y);
    // mask out horizontal and vertical flip bits
    // for third row sprites and save
    lda((((Sprite_Attributes)) + (Imm(20))), y);
    anda(Imm(0b111111));
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(20))), y);
    JMP(C_S_IGAtt);
}

int C_S_IGAtt() {
    lda((((Sprite_Attributes)) + (Imm(24))), y);
    anda(Imm(0b111111));
    sta((((Sprite_Attributes)) + (Imm(24))), y);
    // mask out horizontal and vertical flip bits
    // for fourth row sprites and save
    lda((((Sprite_Attributes)) + (Imm(28))), y);
    anda(Imm(0b111111));
    ora(Imm(0b1000000));
    sta((((Sprite_Attributes)) + (Imm(28))), y);
    JMP(ExPlyrAt);
}

int ExPlyrAt() {
    // set horizontal flip bit for second
    // sprite in the fourth row
    // leave
    rts();
    JMP(RelativePlayerPosition);
}

int RelativePlayerPosition() {
    ldx(Imm(0x0));
    ldy(Imm(0x0));
    JMP(RelWOfs);
    JMP(RelativeBubblePosition);
}

int RelativeBubblePosition() {
    ldy(Imm(0x1));
    JSR(GetProperObjOffset);
    // set for air bubble offsets
    // modify X to get proper air bubble offset
    ldy(Imm(0x3));
    JMP(RelWOfs);
    JMP(RelativeFireballPosition);
}

int RelativeFireballPosition() {
    ldy(Imm(0x0));
    JSR(GetProperObjOffset);
    // set for fireball offsets
    // modify X to get proper fireball offset
    ldy(Imm(0x2));
    JMP(RelWOfs);
}

int RelWOfs() {
    // get the coordinates
    JSR(GetObjRelativePosition);
    ldx((ObjectOffset));
    rts();
    JMP(RelativeMiscPosition);
}

int RelativeMiscPosition() {
    ldy(Imm(0x2));
    JSR(GetProperObjOffset);
    // set for misc object offsets
    // modify X to get proper misc object offset
    ldy(Imm(0x6));
    JMP(RelWOfs);
    JMP(RelativeEnemyPosition);
}

int RelativeEnemyPosition() {
    lda(Imm(0x1));
    ldy(Imm(0x1));
    // get coordinates of enemy object
    // relative to the screen
    JMP(VariableObjOfsRelPos);
    JMP(RelativeBlockPosition);
}

int RelativeBlockPosition() {
    lda(Imm(0x9));
    ldy(Imm(0x4));
    // get coordinates of one block object
    // relative to the screen
    JSR(VariableObjOfsRelPos);
    inx();
    // adjust offset for other block object if any
    inx();
    lda(Imm(0x9));
    iny();
    JMP(VariableObjOfsRelPos);
}

int VariableObjOfsRelPos() {
    stx(Imm(0x0));
    // store value to add to A here
    clc();
    adc(Imm(0x0));
    tax();
    // add A to value stored
    // use as enemy offset
    JSR(GetObjRelativePosition);
    ldx((ObjectOffset));
    // reload old object offset and leave
    rts();
    JMP(GetObjRelativePosition);
}

int GetObjRelativePosition() {
    lda((SprObject_Y_Position), x);
    sta((SprObject_Rel_YPos), y);
    lda((SprObject_X_Position), x);
    sec();
    // load vertical coordinate low
    // store here
    // load horizontal coordinate
    // subtract left edge coordinate
    sbc((ScreenLeft_X_Pos));
    sta((SprObject_Rel_XPos), y);
    // store result here
    rts();
    JMP(GetPlayerOffscreenBits);
}

int GetPlayerOffscreenBits() {
    ldx(Imm(0x0));
    ldy(Imm(0x0));
    // $00 - used as temp variable to hold offscreen bits
    // set offsets for player-specific variables
    // and get offscreen information about player
    JMP(GetOffScreenBitsSet);
    JMP(GetFireballOffscreenBits);
}

int GetFireballOffscreenBits() {
    ldy(Imm(0x0));
    JSR(GetProperObjOffset);
    ldy(Imm(0x2));
    JMP(GetOffScreenBitsSet);
    JMP(GetBubbleOffscreenBits);
}

int GetBubbleOffscreenBits() {
    ldy(Imm(0x1));
    JSR(GetProperObjOffset);
    ldy(Imm(0x3));
    JMP(GetOffScreenBitsSet);
    JMP(GetMiscOffscreenBits);
}

int GetMiscOffscreenBits() {
    ldy(Imm(0x2));
    JSR(GetProperObjOffset);
    ldy(Imm(0x6));
    JMP(GetOffScreenBitsSet);
    JMP(GetProperObjOffset);
}

int GetProperObjOffset() {
    txa();
    // move offset to A
    clc();
    adc((ObjOffsetData), y);
    tax();
    // add amount of bytes to offset depending on setting in Y
    // put back in X and leave
    rts();
    JMP(GetEnemyOffscreenBits);
}

int GetEnemyOffscreenBits() {
    lda(Imm(0x1));
    ldy(Imm(0x1));
    // set A to add 1 byte in order to get enemy offset
    // set Y to put offscreen bits in Enemy_OffscreenBits
    JMP(SetOffscrBitsOffset);
    JMP(GetBlockOffscreenBits);
}

int GetBlockOffscreenBits() {
    lda(Imm(0x9));
    ldy(Imm(0x4));
    JMP(SetOffscrBitsOffset);
}

int SetOffscrBitsOffset() {
    stx(Imm(0x0));
    clc();
    adc(Imm(0x0));
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
    ora(Imm(0x0));
    sta(Imm(0x0));
    pla();
    // mask together with previously saved low nybble
    // store both here
    // get offscreen bits offset from stack
    tay();
    lda(Imm(0x0));
    // get value here and store elsewhere
    sta((SprObject_OffscrBits), y);
    ldx((ObjectOffset));
    rts();
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
    sta(Imm(0x0));
    // store here
    JMP(GetYOffscreenBits);
    JMP(GetXOffscreenBits);
}

int GetXOffscreenBits() {
    stx(Imm(0x4));
    ldy(Imm(0x1));
    JMP(XOfsLoop);
}

int XOfsLoop() {
    // save position in buffer to here
    // start with right side of screen
    // get pixel coordinate of edge
    lda((ScreenEdge_X_Pos), y);
    sec();
    sbc((SprObject_X_Position), x);
    sta(Imm(0x7));
    lda((ScreenEdge_PageLoc), y);
    sbc((SprObject_PageLoc), x);
    ldx((DefaultXOnscreenOfs), y);
    // get difference between pixel coordinate of edge
    // and pixel coordinate of object position
    // store here
    // get page location of edge
    // subtract from page location of object position
    // load offset value here
    cmp(Imm(0x0));
    BMI(XLdBData);
    ldx((((DefaultXOnscreenOfs)) + (Imm(1))), y);
    // if beyond right edge or in front of left edge, branch
    // if not, load alternate offset value here
    cmp(Imm(0x1));
    BPL(XLdBData);
    lda(Imm(0x38));
    // if one page or more to the left of either edge, branch
    // if no branching, load value here and store
    sta(Imm(0x6));
    lda(Imm(0x8));
    // load some other value and execute subroutine
    JSR(DividePDiff);
    JMP(XLdBData);
}

int XLdBData() {
    // get bits here
    lda((XOffscreenBitsData), x);
    ldx(Imm(0x4));
    cmp(Imm(0x0));
    // reobtain position in buffer
    // if bits not zero, branch to leave
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
    stx(Imm(0x4));
    ldy(Imm(0x1));
    JMP(YOfsLoop);
}

int YOfsLoop() {
    // save position in buffer to here
    // start with top of screen
    // load coordinate for edge of vertical unit
    lda((HighPosUnitData), y);
    sec();
    sbc((SprObject_Y_Position), x);
    sta(Imm(0x7));
    lda(Imm(0x1));
    // subtract from vertical coordinate of object
    // store here
    // subtract one from vertical high byte of object
    sbc((SprObject_Y_HighPos), x);
    ldx((DefaultYOnscreenOfs), y);
    // load offset value here
    cmp(Imm(0x0));
    BMI(YLdBData);
    ldx((((DefaultYOnscreenOfs)) + (Imm(1))), y);
    // if under top of the screen or beyond bottom, branch
    // if not, load alternate offset value here
    cmp(Imm(0x1));
    BPL(YLdBData);
    lda(Imm(0x20));
    // if one vertical unit or more above the screen, branch
    // if no branching, load value here and store
    sta(Imm(0x6));
    lda(Imm(0x4));
    // load some other value and execute subroutine
    JSR(DividePDiff);
    JMP(YLdBData);
}

int YLdBData() {
    // get offscreen data bits using offset
    lda((YOffscreenBitsData), x);
    ldx(Imm(0x4));
    // reobtain position in buffer
    cmp(Imm(0x0));
    BNE(ExYOfsBS);
    dey();
    // if bits not zero, branch to leave
    // otherwise, do bottom of the screen now
    BPL(YOfsLoop);
    JMP(ExYOfsBS);
}

int ExYOfsBS() {
    rts();
    JMP(DividePDiff);
}

int DividePDiff() {
    sta(Imm(0x5));
    lda(Imm(0x7));
    cmp(Imm(0x6));
    BCS(ExDivPD);
    lsr();
    // store current value in A here
    // get pixel difference
    // compare to preset value
    // if pixel difference >= preset value, branch
    // divide by eight
    lsr();
    lsr();
    anda(Imm(0x7));
    cpy(Imm(0x1));
    BCS(SetOscrO);
    adc(Imm(0x5));
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
    rts();
    JMP(DrawSpriteObject);
}

int DrawSpriteObject() {
    lda(Imm(0x3));
    // $00-$01 - tile numbers
    // $03 - flip control
    // $05 - X coordinate
    // get saved flip control bits
    lsr();
    lsr();
    // move d1 into carry
    lda(Imm(0x0));
    BCC(NoHFlip);
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    lda(Imm(0x1));
    // if d1 not set, branch
    // store first tile into second sprite
    // and second into first sprite
    sta((Sprite_Tilenumber), y);
    lda(Imm(0x40));
    BNE(SetHFAt);
    JMP(NoHFlip);
}

int NoHFlip() {
    // activate horizontal flip OAM attribute
    // and unconditionally branch
    // store first tile into first sprite
    sta((Sprite_Tilenumber), y);
    lda(Imm(0x1));
    // and second into second sprite
    sta((((Sprite_Tilenumber)) + (Imm(4))), y);
    lda(Imm(0x0));
    JMP(SetHFAt);
}

int SetHFAt() {
    // clear bit for horizontal flip
    // add other OAM attributes if necessary
    ora(Imm(0x4));
    sta((Sprite_Attributes), y);
    // store sprite attributes
    sta((((Sprite_Attributes)) + (Imm(4))), y);
    lda(Imm(0x2));
    sta((Sprite_Y_Position), y);
    sta((((Sprite_Y_Position)) + (Imm(4))), y);
    // now the y coordinates
    // note because they are
    // side by side, they are the same
    lda(Imm(0x5));
    sta((Sprite_X_Position), y);
    clc();
    adc(Imm(0x8));
    // store x coordinate, then
    // add 8 pixels and store another to
    // put them side by side
    sta((((Sprite_X_Position)) + (Imm(4))), y);
    lda(Imm(0x2));
    clc();
    // add eight pixels to the next y
    // coordinate
    adc(Imm(0x8));
    sta(Imm(0x2));
    tya();
    clc();
    // add eight to the offset in Y to
    // move to the next two sprites
    adc(Imm(0x8));
    tay();
    inx();
    inx();
    // increment offset to return it to the
    // routine that called this subroutine
    rts();
    JMP(SoundEngine);
}

int SoundEngine() {
    lda((OperMode));
    // are we in title screen mode?
    BNE(SndOn);
    sta((SND_MASTERCTRL_REG));
    // if so, disable sound and leave
    rts();
    JMP(SndOn);
}

int SndOn() {
    lda(Imm(0xff));
    sta((JOYPAD_PORT2));
    // disable irqs and set frame counter mode???
    lda(Imm(0xf));
    sta((SND_MASTERCTRL_REG));
    lda((PauseModeFlag));
    // enable first four channels
    // is sound already in pause mode?
    BNE(InPause);
    lda((PauseSoundQueue));
    // if not, check pause sfx queue
    cmp(Imm(0x1));
    BNE(RunSoundSubroutines);
    JMP(InPause);
}

int InPause() {
    // if queue is empty, skip pause mode routine
    // check pause sfx buffer
    lda((PauseSoundBuffer));
    BNE(ContPau);
    lda((PauseSoundQueue));
    // check pause queue
    BEQ(SkipSoundSubroutines);
    sta((PauseSoundBuffer));
    sta((PauseModeFlag));
    lda(Imm(0x0));
    // if queue full, store in buffer and activate
    // pause mode to interrupt game sounds
    // disable sound and clear sfx buffers
    sta((SND_MASTERCTRL_REG));
    sta((Square1SoundBuffer));
    sta((Square2SoundBuffer));
    sta((NoiseSoundBuffer));
    lda(Imm(0xf));
    sta((SND_MASTERCTRL_REG));
    lda(Imm(0x2a));
    // enable sound again
    // store length of sound in pause counter
    sta((Squ1_SfxLenCounter));
    JMP(PTone1F);
}

int PTone1F() {
    // play first tone
    lda(Imm(0x44));
    BNE(PTRegC);
    JMP(ContPau);
}

int ContPau() {
    // unconditional branch
    // check pause length left
    lda((Squ1_SfxLenCounter));
    cmp(Imm(0x24));
    // time to play second?
    BEQ(PTone2F);
    cmp(Imm(0x1e));
    // time to play first again?
    BEQ(PTone1F);
    cmp(Imm(0x18));
    BNE(DecPauC);
    JMP(PTone2F);
}

int PTone2F() {
    // time to play second again?
    // only load regs during times, otherwise skip
    // store reg contents and play the pause sfx
    lda(Imm(0x64));
    JMP(PTRegC);
}

int PTRegC() {
    ldx(Imm(0x84));
    ldy(Imm(0x7f));
    JSR(PlaySqu1Sfx);
    JMP(DecPauC);
}

int DecPauC() {
    // decrement pause sfx counter
    dec((Squ1_SfxLenCounter));
    BNE(SkipSoundSubroutines);
    lda(Imm(0x0));
    sta((SND_MASTERCTRL_REG));
    lda((PauseSoundBuffer));
    cmp(Imm(0x2));
    // disable sound if in pause mode and
    // not currently playing the pause sfx
    // if no longer playing pause sfx, check to see
    // if we need to be playing sound again
    BNE(SkipPIn);
    lda(Imm(0x0));
    // clear pause mode to allow game sounds again
    sta((PauseModeFlag));
    JMP(SkipPIn);
}

int SkipPIn() {
    // clear pause sfx buffer
    lda(Imm(0x0));
    sta((PauseSoundBuffer));
    BEQ(SkipSoundSubroutines);
    JMP(RunSoundSubroutines);
}

int RunSoundSubroutines() {
    JSR(Square1SfxHandler);
    JSR(Square2SfxHandler);
    JSR(NoiseSfxHandler);
    JSR(MusicHandler);
    lda(Imm(0x0));
    // play sfx on square channel 1
    // ''  ''  '' square channel 2
    // ''  ''  '' noise channel
    // play music on all channels
    // clear the music queues
    sta((AreaMusicQueue));
    sta((EventMusicQueue));
    JMP(SkipSoundSubroutines);
}

int SkipSoundSubroutines() {
    lda(Imm(0x0));
    // clear the sound effects queues
    sta((Square1SoundQueue));
    sta((Square2SoundQueue));
    sta((NoiseSoundQueue));
    sta((PauseSoundQueue));
    ldy((DAC_Counter));
    // load some sort of counter
    lda((AreaMusicBuffer));
    anda(Imm(0b11));
    // check for specific music
    BEQ(NoIncDAC);
    inc((DAC_Counter));
    // increment and check counter
    cpy(Imm(0x30));
    BCC(StrWave);
    JMP(NoIncDAC);
}

int NoIncDAC() {
    tya();
    BEQ(StrWave);
    dec((DAC_Counter));
    JMP(StrWave);
}

int StrWave() {
    // if we are at zero, do not decrement
    // decrement counter
    // store into DMC load register (??)
    sty((((SND_DELTA_REG)) + (Imm(1))));
    rts();
    JMP(Dump_Squ1_Regs);
}

int Dump_Squ1_Regs() {
    sty((((SND_SQUARE1_REG)) + (Imm(1))));
    // dump the contents of X and Y into square 1's control regs
    stx((SND_SQUARE1_REG));
    rts();
    JMP(PlaySqu1Sfx);
}

int PlaySqu1Sfx() {
    JSR(Dump_Squ1_Regs);
    JMP(SetFreq_Squ1);
}

int SetFreq_Squ1() {
    ldx(Imm(0x0));
    JMP(Dump_Freq_Regs);
}

int Dump_Freq_Regs() {
    tay();
    lda((((FreqRegLookupTbl)) + (Imm(1))), y);
    BEQ(NoTone);
    sta((((SND_REGISTER)) + (Imm(2))), x);
    lda((FreqRegLookupTbl), y);
    ora(Imm(0b1000));
    // use previous contents of A for sound reg offset
    // if zero, then do not load
    // first byte goes into LSB of frequency divider
    // second byte goes into 3 MSB plus extra bit for
    // length counter
    sta((((SND_REGISTER)) + (Imm(3))), x);
    JMP(NoTone);
}

int NoTone() {
    rts();
    JMP(Dump_Sq2_Regs);
}

int Dump_Sq2_Regs() {
    stx((SND_SQUARE2_REG));
    // dump the contents of X and Y into square 2's control regs
    sty((((SND_SQUARE2_REG)) + (Imm(1))));
    rts();
    JMP(PlaySqu2Sfx);
}

int PlaySqu2Sfx() {
    JSR(Dump_Sq2_Regs);
    JMP(SetFreq_Squ2);
}

int SetFreq_Squ2() {
    ldx(Imm(0x4));
    BNE(Dump_Freq_Regs);
    JMP(SetFreq_Tri);
}

int SetFreq_Tri() {
    ldx(Imm(0x8));
    BNE(Dump_Freq_Regs);
    JMP(PlayFlagpoleSlide);
}

int PlayFlagpoleSlide() {
    lda(Imm(0x40));
    // store length of flagpole sound
    sta((Squ1_SfxLenCounter));
    lda(Imm(0x62));
    // load part of reg contents for flagpole sound
    JSR(SetFreq_Squ1);
    ldx(Imm(0x99));
    // now load the rest
    BNE(FPS2nd);
    JMP(PlaySmallJump);
}

int PlaySmallJump() {
    lda(Imm(0x26));
    // branch here for small mario jumping sound
    BNE(JumpRegContents);
    JMP(PlayBigJump);
}

int PlayBigJump() {
    lda(Imm(0x18));
    JMP(JumpRegContents);
}

int JumpRegContents() {
    ldx(Imm(0x82));
    ldy(Imm(0xa7));
    // note that small and big jump borrow each others' reg contents
    // anyway, this loads the first part of mario's jumping sound
    JSR(PlaySqu1Sfx);
    lda(Imm(0x28));
    sta((Squ1_SfxLenCounter));
    JMP(ContinueSndJump);
}

int ContinueSndJump() {
    lda((Squ1_SfxLenCounter));
    cmp(Imm(0x25));
    // jumping sounds seem to be composed of three parts
    // check for time to play second part yet
    BNE(N2Prt);
    ldx(Imm(0x5f));
    // load second part
    ldy(Imm(0xf6));
    BNE(DmpJpFPS);
    JMP(N2Prt);
}

int N2Prt() {
    // unconditional branch
    // check for third part
    cmp(Imm(0x20));
    BNE(DecJpFPS);
    ldx(Imm(0x48));
    JMP(FPS2nd);
}

int FPS2nd() {
    // load third part
    // the flagpole slide sound shares part of third part
    ldy(Imm(0xbc));
    JMP(DmpJpFPS);
}

int DmpJpFPS() {
    JSR(Dump_Squ1_Regs);
    BNE(DecJpFPS);
    JMP(PlayFireballThrow);
}

int PlayFireballThrow() {
    lda(Imm(0x5));
    ldy(Imm(0x99));
    BNE(Fthrow);
    JMP(PlayBump);
}

int PlayBump() {
    lda(Imm(0xa));
    // load length of sfx and reg contents for bump sound
    ldy(Imm(0x93));
    JMP(Fthrow);
}

int Fthrow() {
    // the fireball sound shares reg contents with the bump sound
    ldx(Imm(0x9e));
    sta((Squ1_SfxLenCounter));
    lda(Imm(0xc));
    // load offset for bump sound
    JSR(PlaySqu1Sfx);
    JMP(ContinueBumpThrow);
}

int ContinueBumpThrow() {
    lda((Squ1_SfxLenCounter));
    // check for second part of bump sound
    cmp(Imm(0x6));
    BNE(DecJpFPS);
    lda(Imm(0xbb));
    // load second part directly
    sta((((SND_SQUARE1_REG)) + (Imm(1))));
    JMP(DecJpFPS);
}

int DecJpFPS() {
    // unconditional branch
    BNE(BranchToDecLength1);
    JMP(Square1SfxHandler);
}

int Square1SfxHandler() {
    ldy((Square1SoundQueue));
    // check for sfx in queue
    BEQ(CheckSfx1Buffer);
    sty((Square1SoundBuffer));
    BMI(PlaySmallJump);
    // if found, put in buffer
    // small jump
    lsr((Square1SoundQueue));
    BCS(PlayBigJump);
    // big jump
    lsr((Square1SoundQueue));
    BCS(PlayBump);
    // bump
    lsr((Square1SoundQueue));
    BCS(PlaySwimStomp);
    // swim/stomp
    lsr((Square1SoundQueue));
    BCS(PlaySmackEnemy);
    // smack enemy
    lsr((Square1SoundQueue));
    BCS(PlayPipeDownInj);
    // pipedown/injury
    lsr((Square1SoundQueue));
    BCS(PlayFireballThrow);
    // fireball throw
    lsr((Square1SoundQueue));
    BCS(PlayFlagpoleSlide);
    JMP(CheckSfx1Buffer);
}

int CheckSfx1Buffer() {
    lda((Square1SoundBuffer));
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
    rts();
    JMP(PlaySwimStomp);
}

int PlaySwimStomp() {
    lda(Imm(0xe));
    // store length of swim/stomp sound
    sta((Squ1_SfxLenCounter));
    ldy(Imm(0x9c));
    // store reg contents for swim/stomp sound
    ldx(Imm(0x9e));
    lda(Imm(0x26));
    JSR(PlaySqu1Sfx);
    JMP(ContinueSwimStomp);
}

int ContinueSwimStomp() {
    ldy((Squ1_SfxLenCounter));
    lda((((SwimStompEnvelopeData)) - (Imm(1))), y);
    sta((SND_SQUARE1_REG));
    // look up reg contents in data section based on
    // length of sound left, used to control sound's
    // envelope
    cpy(Imm(0x6));
    BNE(BranchToDecLength1);
    lda(Imm(0x9e));
    sta((((SND_SQUARE1_REG)) + (Imm(2))));
    JMP(BranchToDecLength1);
}

int BranchToDecLength1() {
    BNE(DecrementSfx1Length);
    JMP(PlaySmackEnemy);
}

int PlaySmackEnemy() {
    lda(Imm(0xe));
    // store length of smack enemy sound
    ldy(Imm(0xcb));
    ldx(Imm(0x9f));
    sta((Squ1_SfxLenCounter));
    lda(Imm(0x28));
    // store reg contents for smack enemy sound
    JSR(PlaySqu1Sfx);
    BNE(DecrementSfx1Length);
    JMP(ContinueSmackEnemy);
}

int ContinueSmackEnemy() {
    ldy((Squ1_SfxLenCounter));
    // check about halfway through
    cpy(Imm(0x8));
    BNE(SmSpc);
    lda(Imm(0xa0));
    sta((((SND_SQUARE1_REG)) + (Imm(2))));
    // if we're at the about-halfway point, make the second tone
    // in the smack enemy sound
    lda(Imm(0x9f));
    BNE(SmTick);
    JMP(SmSpc);
}

int SmSpc() {
    // this creates spaces in the sound, giving it its distinct noise
    lda(Imm(0x90));
    JMP(SmTick);
}

int SmTick() {
    sta((SND_SQUARE1_REG));
    JMP(DecrementSfx1Length);
}

int DecrementSfx1Length() {
    dec((Squ1_SfxLenCounter));
    // decrement length of sfx
    BNE(ExSfx1);
    JMP(StopSquare1Sfx);
}

int StopSquare1Sfx() {
    ldx(Imm(0x0));
    stx(Imm(0xf1));
    // if end of sfx reached, clear buffer
    // and stop making the sfx
    ldx(Imm(0xe));
    stx((SND_MASTERCTRL_REG));
    ldx(Imm(0xf));
    stx((SND_MASTERCTRL_REG));
    JMP(ExSfx1);
}

int ExSfx1() {
    rts();
    JMP(PlayPipeDownInj);
}

int PlayPipeDownInj() {
    lda(Imm(0x2f));
    // load length of pipedown sound
    sta((Squ1_SfxLenCounter));
    JMP(ContinuePipeDownInj);
}

int ContinuePipeDownInj() {
    lda((Squ1_SfxLenCounter));
    lsr();
    BCS(NoPDwnL);
    // some bitwise logic, forces the regs
    // to be written to only during six specific times
    // during which d3 must be set and d1-0 must be clear
    lsr();
    BCS(NoPDwnL);
    anda(Imm(0b10));
    BEQ(NoPDwnL);
    ldy(Imm(0x91));
    // and this is where it actually gets written in
    ldx(Imm(0x9a));
    lda(Imm(0x44));
    JSR(PlaySqu1Sfx);
    JMP(NoPDwnL);
}

int NoPDwnL() {
    JMP(DecrementSfx1Length);
    JMP(PlayCoinGrab);
}

int PlayCoinGrab() {
    lda(Imm(0x35));
    ldx(Imm(0x8d));
    // load length of coin grab sound
    // and part of reg contents
    BNE(CGrab_TTickRegL);
    JMP(PlayTimerTick);
}

int PlayTimerTick() {
    lda(Imm(0x6));
    ldx(Imm(0x98));
    JMP(CGrab_TTickRegL);
}

int CGrab_TTickRegL() {
    sta((Squ2_SfxLenCounter));
    ldy(Imm(0x7f));
    lda(Imm(0x42));
    // load the rest of reg contents
    // of coin grab and timer tick sound
    JSR(PlaySqu2Sfx);
    JMP(ContinueCGrabTTick);
}

int ContinueCGrabTTick() {
    lda((Squ2_SfxLenCounter));
    cmp(Imm(0x30));
    // check for time to play second tone yet
    // timer tick sound also executes this, not sure why
    BNE(N2Tone);
    lda(Imm(0x54));
    // if so, load the tone directly into the reg
    sta((((SND_SQUARE2_REG)) + (Imm(2))));
    JMP(N2Tone);
}

int N2Tone() {
    BNE(DecrementSfx2Length);
    JMP(PlayBlast);
}

int PlayBlast() {
    lda(Imm(0x20));
    // load length of fireworks/gunfire sound
    sta((Squ2_SfxLenCounter));
    ldy(Imm(0x94));
    // load reg contents of fireworks/gunfire sound
    lda(Imm(0x5e));
    BNE(SBlasJ);
    JMP(ContinueBlast);
}

int ContinueBlast() {
    lda((Squ2_SfxLenCounter));
    // check for time to play second part
    cmp(Imm(0x18));
    BNE(DecrementSfx2Length);
    ldy(Imm(0x93));
    // load second part reg contents then
    lda(Imm(0x18));
    JMP(SBlasJ);
}

int SBlasJ() {
    // unconditional branch to load rest of reg contents
    BNE(BlstSJp);
    JMP(PlayPowerUpGrab);
}

int PlayPowerUpGrab() {
    lda(Imm(0x36));
    // load length of power-up grab sound
    sta((Squ2_SfxLenCounter));
    JMP(ContinuePowerUpGrab);
}

int ContinuePowerUpGrab() {
    lda((Squ2_SfxLenCounter));
    lsr();
    BCS(DecrementSfx2Length);
    // load frequency reg based on length left over
    // divide by 2
    // alter frequency every other frame
    tay();
    lda((((PowerUpGrabFreqData)) - (Imm(1))), y);
    ldx(Imm(0x5d));
    // use length left over / 2 for frequency offset
    // store reg contents of power-up grab sound
    ldy(Imm(0x7f));
    JMP(LoadSqu2Regs);
}

int LoadSqu2Regs() {
    JSR(PlaySqu2Sfx);
    JMP(DecrementSfx2Length);
}

int DecrementSfx2Length() {
    dec((Squ2_SfxLenCounter));
    // decrement length of sfx
    BNE(ExSfx2);
    JMP(EmptySfx2Buffer);
}

int EmptySfx2Buffer() {
    ldx(Imm(0x0));
    // initialize square 2's sound effects buffer
    stx((Square2SoundBuffer));
    JMP(StopSquare2Sfx);
}

int StopSquare2Sfx() {
    ldx(Imm(0xd));
    // stop playing the sfx
    stx((SND_MASTERCTRL_REG));
    ldx(Imm(0xf));
    stx((SND_MASTERCTRL_REG));
    JMP(ExSfx2);
}

int ExSfx2() {
    rts();
    JMP(Square2SfxHandler);
}

int Square2SfxHandler() {
    lda((Square2SoundBuffer));
    anda((Sfx_ExtraLife));
    // special handling for the 1-up sound to keep it
    // from being interrupted by other sounds on square 2
    BNE(ContinueExtraLife);
    ldy((Square2SoundQueue));
    // check for sfx in queue
    BEQ(CheckSfx2Buffer);
    sty((Square2SoundBuffer));
    BMI(PlayBowserFall);
    // if found, put in buffer and check for the following
    // bowser fall
    lsr((Square2SoundQueue));
    BCS(PlayCoinGrab);
    // coin grab
    lsr((Square2SoundQueue));
    BCS(PlayGrowPowerUp);
    // power-up reveal
    lsr((Square2SoundQueue));
    BCS(PlayGrowVine);
    // vine grow
    lsr((Square2SoundQueue));
    BCS(PlayBlast);
    // fireworks/gunfire
    lsr((Square2SoundQueue));
    BCS(PlayTimerTick);
    // timer tick
    lsr((Square2SoundQueue));
    BCS(PlayPowerUpGrab);
    // power-up grab
    lsr((Square2SoundQueue));
    BCS(PlayExtraLife);
    JMP(CheckSfx2Buffer);
}

int CheckSfx2Buffer() {
    lda((Square2SoundBuffer));
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
    lda(Imm(0x38));
    // load length of bowser defeat sound
    sta((Squ2_SfxLenCounter));
    ldy(Imm(0xc4));
    // load contents of reg for bowser defeat sound
    lda(Imm(0x18));
    JMP(BlstSJp);
}

int BlstSJp() {
    BNE(PBFRegs);
    JMP(ContinueBowserFall);
}

int ContinueBowserFall() {
    lda((Squ2_SfxLenCounter));
    // check for almost near the end
    cmp(Imm(0x8));
    BNE(DecrementSfx2Length);
    ldy(Imm(0xa4));
    // if so, load the rest of reg contents for bowser defeat sound
    lda(Imm(0x5a));
    JMP(PBFRegs);
}

int PBFRegs() {
    // the fireworks/gunfire sound shares part of reg contents here
    ldx(Imm(0x9f));
    JMP(EL_LRegs);
}

int EL_LRegs() {
    // this is an unconditional branch outta here
    BNE(LoadSqu2Regs);
    JMP(PlayExtraLife);
}

int PlayExtraLife() {
    lda(Imm(0x30));
    // load length of 1-up sound
    sta((Squ2_SfxLenCounter));
    JMP(ContinueExtraLife);
}

int ContinueExtraLife() {
    lda((Squ2_SfxLenCounter));
    ldx(Imm(0x3));
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
    lda((((ExtraLifeFreqData)) - (Imm(1))), y);
    // load our reg contents
    ldx(Imm(0x82));
    ldy(Imm(0x7f));
    BNE(EL_LRegs);
    JMP(PlayGrowPowerUp);
}

int PlayGrowPowerUp() {
    lda(Imm(0x10));
    // load length of power-up reveal sound
    BNE(GrowItemRegs);
    JMP(PlayGrowVine);
}

int PlayGrowVine() {
    lda(Imm(0x20));
    JMP(GrowItemRegs);
}

int GrowItemRegs() {
    sta((Squ2_SfxLenCounter));
    lda(Imm(0x7f));
    // load contents of reg for both sounds directly
    sta((((SND_SQUARE2_REG)) + (Imm(1))));
    lda(Imm(0x0));
    // start secondary counter for both sounds
    sta((Sfx_SecondaryCounter));
    JMP(ContinueGrowItems);
}

int ContinueGrowItems() {
    inc((Sfx_SecondaryCounter));
    lda((Sfx_SecondaryCounter));
    lsr();
    // increment secondary counter for both sounds
    // this sound doesn't decrement the usual counter
    // divide by 2 to get the offset
    tay();
    cpy((Squ2_SfxLenCounter));
    BEQ(StopGrowItems);
    lda(Imm(0x9d));
    // have we reached the end yet?
    // if so, branch to jump, and stop playing sounds
    // load contents of other reg directly
    sta((SND_SQUARE2_REG));
    lda((PUp_VGrow_FreqData), y);
    // use secondary counter / 2 as offset for frequency regs
    JSR(SetFreq_Squ2);
    rts();
    JMP(StopGrowItems);
}

int StopGrowItems() {
    JMP(EmptySfx2Buffer);
    JMP(PlayBrickShatter);
}

int PlayBrickShatter() {
    lda(Imm(0x20));
    // load length of brick shatter sound
    sta((Noise_SfxLenCounter));
    JMP(ContinueBrickShatter);
}

int ContinueBrickShatter() {
    lda((Noise_SfxLenCounter));
    lsr();
    // divide by 2 and check for bit set to use offset
    BCC(DecrementSfx3Length);
    tay();
    ldx((BrickShatterFreqData), y);
    // load reg contents of brick shatter sound
    lda((BrickShatterEnvData), y);
    JMP(PlayNoiseSfx);
}

int PlayNoiseSfx() {
    sta((SND_NOISE_REG));
    // play the sfx
    stx((((SND_NOISE_REG)) + (Imm(2))));
    lda(Imm(0x18));
    sta((((SND_NOISE_REG)) + (Imm(3))));
    JMP(DecrementSfx3Length);
}

int DecrementSfx3Length() {
    dec((Noise_SfxLenCounter));
    // decrement length of sfx
    BNE(ExSfx3);
    lda(Imm(0xf0));
    // if done, stop playing the sfx
    sta((SND_NOISE_REG));
    lda(Imm(0x0));
    sta((NoiseSoundBuffer));
    JMP(ExSfx3);
}

int ExSfx3() {
    rts();
    JMP(NoiseSfxHandler);
}

int NoiseSfxHandler() {
    ldy((NoiseSoundQueue));
    // check for sfx in queue
    BEQ(CheckNoiseBuffer);
    sty((NoiseSoundBuffer));
    // if found, put in buffer
    lsr((NoiseSoundQueue));
    BCS(PlayBrickShatter);
    // brick shatter
    lsr((NoiseSoundQueue));
    BCS(PlayBowserFlame);
    JMP(CheckNoiseBuffer);
}

int CheckNoiseBuffer() {
    lda((NoiseSoundBuffer));
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
    rts();
    JMP(PlayBowserFlame);
}

int PlayBowserFlame() {
    lda(Imm(0x40));
    // load length of bowser flame sound
    sta((Noise_SfxLenCounter));
    JMP(ContinueBowserFlame);
}

int ContinueBowserFlame() {
    lda((Noise_SfxLenCounter));
    lsr();
    tay();
    ldx(Imm(0xf));
    // load reg contents of bowser flame sound
    lda((((BowserFlameEnvData)) - (Imm(1))), y);
    BNE(PlayNoiseSfx);
    JMP(ContinueMusic);
}

int ContinueMusic() {
    JMP(HandleSquare2Music);
    JMP(MusicHandler);
}

int MusicHandler() {
    lda((EventMusicQueue));
    // check event music queue
    BNE(LoadEventMusic);
    lda((AreaMusicQueue));
    // check area music queue
    BNE(LoadAreaMusic);
    lda((EventMusicBuffer));
    // check both buffers
    ora((AreaMusicBuffer));
    BNE(ContinueMusic);
    rts();
    JMP(LoadEventMusic);
}

int LoadEventMusic() {
    sta((EventMusicBuffer));
    cmp((DeathMusic));
    BNE(NoStopSfx);
    JSR(StopSquare1Sfx);
    JSR(StopSquare2Sfx);
    JMP(NoStopSfx);
}

int NoStopSfx() {
    ldx((AreaMusicBuffer));
    stx((AreaMusicBuffer_Alt));
    // save current area music buffer to be re-obtained later
    ldy(Imm(0x0));
    sty((NoteLengthTblAdder));
    sty((AreaMusicBuffer));
    cmp((TimeRunningOutMusic));
    // default value for additional length byte offset
    // clear area music buffer
    // is it time running out music?
    BNE(FindEventMusicHeader);
    ldx(Imm(0x8));
    // load offset to be added to length byte of header
    stx((NoteLengthTblAdder));
    BNE(FindEventMusicHeader);
    JMP(LoadAreaMusic);
}

int LoadAreaMusic() {
    cmp(Imm(0x4));
    BNE(NoStop1);
    // is it underground music?
    // no, do not stop square 1 sfx
    JSR(StopSquare1Sfx);
    JMP(NoStop1);
}

int NoStop1() {
    // start counter used only by ground level music
    ldy(Imm(0x10));
    JMP(GMLoopB);
}

int GMLoopB() {
    sty((GroundMusicHeaderOfs));
    JMP(HandleAreaMusicLoopB);
}

int HandleAreaMusicLoopB() {
    ldy(Imm(0x0));
    // clear event music buffer
    sty((EventMusicBuffer));
    sta((AreaMusicBuffer));
    cmp(Imm(0x1));
    // copy area music queue contents to buffer
    // is it ground level music?
    BNE(FindAreaMusicHeader);
    inc((GroundMusicHeaderOfs));
    ldy((GroundMusicHeaderOfs));
    // increment but only if playing ground level music
    // is it time to loopback ground level music?
    cpy(Imm(0x32));
    BNE(LoadHeader);
    // branch ahead with alternate offset
    ldy(Imm(0x11));
    BNE(GMLoopB);
    JMP(FindAreaMusicHeader);
}

int FindAreaMusicHeader() {
    ldy(Imm(0x8));
    sty((MusicOffset_Square2));
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
    lda((MusicHeaderOffsetData), y);
    // load offset for header
    tay();
    lda((MusicHeaderData), y);
    // now load the header
    sta((NoteLenLookupTblOfs));
    lda((((MusicHeaderData)) + (Imm(1))), y);
    sta((MusicDataLow));
    lda((((MusicHeaderData)) + (Imm(2))), y);
    sta((MusicDataHigh));
    lda((((MusicHeaderData)) + (Imm(3))), y);
    sta((MusicOffset_Triangle));
    lda((((MusicHeaderData)) + (Imm(4))), y);
    sta((MusicOffset_Square1));
    lda((((MusicHeaderData)) + (Imm(5))), y);
    sta((MusicOffset_Noise));
    sta((NoiseDataLoopbackOfs));
    lda(Imm(0x1));
    // initialize music note counters
    sta((Squ2_NoteLenCounter));
    sta((Squ1_NoteLenCounter));
    sta((Tri_NoteLenCounter));
    sta((Noise_BeatLenCounter));
    lda(Imm(0x0));
    // initialize music data offset for square 2
    sta((MusicOffset_Square2));
    sta((AltRegContentFlag));
    lda(Imm(0xb));
    // initialize alternate control reg data used by square 1
    // disable triangle channel and reenable it
    sta((SND_MASTERCTRL_REG));
    lda(Imm(0xf));
    sta((SND_MASTERCTRL_REG));
    JMP(HandleSquare2Music);
}

int HandleSquare2Music() {
    dec((Squ2_NoteLenCounter));
    BNE(MiscSqu2MusicTasks);
    ldy((MusicOffset_Square2));
    // decrement square 2 note length
    // is it time for more data?  if not, branch to end tasks
    // increment square 2 music offset and fetch data
    inc((MusicOffset_Square2));
    lda(((MusicData)), y);
    BEQ(EndOfMusicData);
    BPL(Squ2NoteHandler);
    BNE(Squ2LengthHandler);
    JMP(EndOfMusicData);
}

int EndOfMusicData() {
    lda((EventMusicBuffer));
    // check secondary buffer for time running out music
    cmp((TimeRunningOutMusic));
    BNE(NotTRO);
    lda((AreaMusicBuffer_Alt));
    BNE(MusicLoopBack);
    JMP(NotTRO);
}

int NotTRO() {
    // load previously saved contents of primary buffer
    // and start playing the song again if there is one
    // check for victory music (the only secondary that loops)
    anda((VictoryMusic));
    BNE(VictoryMLoopBack);
    lda((AreaMusicBuffer));
    // check primary buffer for any music except pipe intro
    anda(Imm(0b1011111));
    BNE(MusicLoopBack);
    lda(Imm(0x0));
    sta((AreaMusicBuffer));
    // if any area music except pipe intro, music loops
    // clear primary and secondary buffers and initialize
    // control regs of square and triangle channels
    sta((EventMusicBuffer));
    sta((SND_TRIANGLE_REG));
    lda(Imm(0x90));
    sta((SND_SQUARE1_REG));
    sta((SND_SQUARE2_REG));
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
    // store length of note
    sta((Squ2_NoteLenBuffer));
    ldy((MusicOffset_Square2));
    // fetch another byte (MUST NOT BE LENGTH BYTE!)
    inc((MusicOffset_Square2));
    lda(((MusicData)), y);
    JMP(Squ2NoteHandler);
}

int Squ2NoteHandler() {
    ldx((Square2SoundBuffer));
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
    sta((Squ2_EnvelopeDataCtrl));
    JSR(Dump_Sq2_Regs);
    JMP(SkipFqL1);
}

int SkipFqL1() {
    // dump X and Y into square 2 control regs
    // save length in square 2 note counter
    lda((Squ2_NoteLenBuffer));
    sta((Squ2_NoteLenCounter));
    JMP(MiscSqu2MusicTasks);
}

int MiscSqu2MusicTasks() {
    lda((Square2SoundBuffer));
    // is there a sound playing on square 2?
    BNE(HandleSquare1Music);
    lda((EventMusicBuffer));
    anda(Imm(0b10010001));
    // check for death music or d4 set on secondary buffer
    // note that regs for death music or d4 are loaded by default
    BNE(HandleSquare1Music);
    ldy((Squ2_EnvelopeDataCtrl));
    // check for contents saved from LoadControlRegs
    BEQ(NoDecEnv1);
    dec((Squ2_EnvelopeDataCtrl));
    JMP(NoDecEnv1);
}

int NoDecEnv1() {
    // decrement unless already zero
    // do a load of envelope data to replace default
    JSR(LoadEnvelopeData);
    sta((SND_SQUARE2_REG));
    ldx(Imm(0x7f));
    // based on offset set by first load unless playing
    // death music or d4 set on secondary buffer
    stx((((SND_SQUARE2_REG)) + (Imm(1))));
    JMP(HandleSquare1Music);
}

int HandleSquare1Music() {
    ldy((MusicOffset_Square1));
    BEQ(HandleTriangleMusic);
    dec((Squ1_NoteLenCounter));
    BNE(MiscSqu1MusicTasks);
    JMP(FetchSqu1MusicData);
}

int FetchSqu1MusicData() {
    ldy((MusicOffset_Square1));
    // increment square 1 music offset and fetch data
    inc((MusicOffset_Square1));
    lda(((MusicData)), y);
    BNE(Squ1NoteHandler);
    // if nonzero, then skip this part
    lda(Imm(0x83));
    sta((SND_SQUARE1_REG));
    lda(Imm(0x94));
    sta((((SND_SQUARE1_REG)) + (Imm(1))));
    // store some data into control regs for square 1
    // and fetch another byte of data, used to give
    // death music its unique sound
    sta((AltRegContentFlag));
    BNE(FetchSqu1MusicData);
    JMP(Squ1NoteHandler);
}

int Squ1NoteHandler() {
    JSR(AlternateLengthHandler);
    sta((Squ1_NoteLenCounter));
    ldy((Square1SoundBuffer));
    // save contents of A in square 1 note counter
    // is there a sound playing on square 1?
    BNE(HandleTriangleMusic);
    txa();
    anda(Imm(0b111110));
    JSR(SetFreq_Squ1);
    // change saved data to appropriate note format
    // play the note
    BEQ(SkipCtrlL);
    JSR(LoadControlRegs);
    JMP(SkipCtrlL);
}

int SkipCtrlL() {
    // save envelope offset
    sta((Squ1_EnvelopeDataCtrl));
    JSR(Dump_Squ1_Regs);
    JMP(MiscSqu1MusicTasks);
}

int MiscSqu1MusicTasks() {
    lda((Square1SoundBuffer));
    // is there a sound playing on square 1?
    BNE(HandleTriangleMusic);
    lda((EventMusicBuffer));
    // check for death music or d4 set on secondary buffer
    anda(Imm(0b10010001));
    BNE(DeathMAltReg);
    ldy((Squ1_EnvelopeDataCtrl));
    // check saved envelope offset
    BEQ(NoDecEnv2);
    dec((Squ1_EnvelopeDataCtrl));
    JMP(NoDecEnv2);
}

int NoDecEnv2() {
    // decrement unless already zero
    // do a load of envelope data
    JSR(LoadEnvelopeData);
    sta((SND_SQUARE1_REG));
    JMP(DeathMAltReg);
}

int DeathMAltReg() {
    // based on offset set by first load
    // check for alternate control reg data
    lda((AltRegContentFlag));
    BNE(DoAltLoad);
    lda(Imm(0x7f));
    JMP(DoAltLoad);
}

int DoAltLoad() {
    // load this value if zero, the alternate value
    // if nonzero, and let's move on
    sta((((SND_SQUARE1_REG)) + (Imm(1))));
    JMP(HandleTriangleMusic);
}

int HandleTriangleMusic() {
    lda((MusicOffset_Triangle));
    dec((Tri_NoteLenCounter));
    BNE(HandleNoiseMusic);
    ldy((MusicOffset_Triangle));
    // decrement triangle note length
    // is it time for more data?
    // increment square 1 music offset and fetch data
    inc((MusicOffset_Triangle));
    lda(((MusicData)), y);
    BEQ(LoadTriCtrlReg);
    BPL(TriNoteHandler);
    JSR(ProcessLengthData);
    sta((Tri_NoteLenBuffer));
    // if zero, skip all this and move on to noise
    // if non-negative, data is note
    // otherwise, it is length data
    // save contents of A
    lda(Imm(0x1f));
    sta((SND_TRIANGLE_REG));
    ldy((MusicOffset_Triangle));
    // load some default data for triangle control reg
    // fetch another byte
    inc((MusicOffset_Triangle));
    lda(((MusicData)), y);
    BEQ(LoadTriCtrlReg);
    JMP(TriNoteHandler);
}

int TriNoteHandler() {
    JSR(SetFreq_Tri);
    ldx((Tri_NoteLenBuffer));
    // save length in triangle note counter
    stx((Tri_NoteLenCounter));
    lda((EventMusicBuffer));
    anda(Imm(0b1101110));
    BNE(NotDOrD4);
    lda((AreaMusicBuffer));
    // check for death music or d4 set on secondary buffer
    // if playing any other secondary, skip primary buffer check
    // check primary buffer for water or castle level music
    anda(Imm(0b1010));
    BEQ(HandleNoiseMusic);
    JMP(NotDOrD4);
}

int NotDOrD4() {
    // if playing any other primary, or death or d4, go on to noise routine
    // if playing water or castle music or any secondary
    txa();
    cmp(Imm(0x12));
    // besides death music or d4 set, check length of note
    BCS(LongN);
    lda((EventMusicBuffer));
    // check for win castle music again if not playing a long note
    anda((EndOfCastleMusic));
    BEQ(MediN);
    lda(Imm(0xf));
    BNE(LoadTriCtrlReg);
    JMP(MediN);
}

int MediN() {
    // load value $0f if playing the win castle music and playing a short
    // note, load value $1f if playing water or castle level music or any
    // secondary besides death and d4 except win castle or win castle and playing
    lda(Imm(0x1f));
    BNE(LoadTriCtrlReg);
    JMP(LongN);
}

int LongN() {
    // a short note, and load value $ff if playing a long note on water, castle
    // or any secondary (including win castle) except death and d4
    lda(Imm(0xff));
    JMP(LoadTriCtrlReg);
}

int LoadTriCtrlReg() {
    sta((SND_TRIANGLE_REG));
    JMP(HandleNoiseMusic);
}

int HandleNoiseMusic() {
    lda((AreaMusicBuffer));
    // check if playing underground or castle music
    anda(Imm(0b11110011));
    BEQ(ExitMusicHandler);
    dec((Noise_BeatLenCounter));
    BNE(ExitMusicHandler);
    JMP(FetchNoiseBeatData);
}

int FetchNoiseBeatData() {
    ldy((MusicOffset_Noise));
    // increment noise beat offset and fetch data
    inc((MusicOffset_Noise));
    lda(((MusicData)), y);
    // get noise beat data, if nonzero, branch to handle
    BNE(NoiseBeatHandler);
    lda((NoiseDataLoopbackOfs));
    sta((MusicOffset_Noise));
    BNE(FetchNoiseBeatData);
    JMP(NoiseBeatHandler);
}

int NoiseBeatHandler() {
    JSR(AlternateLengthHandler);
    sta((Noise_BeatLenCounter));
    // store length in noise beat counter
    txa();
    anda(Imm(0b111110));
    BEQ(SilentBeat);
    cmp(Imm(0x30));
    BEQ(LongBeat);
    // reload data and erase length bits
    // if no beat data, silence
    // check the beat data and play the appropriate
    // noise accordingly
    cmp(Imm(0x20));
    BEQ(StrongBeat);
    anda(Imm(0b10000));
    BEQ(SilentBeat);
    lda(Imm(0x1c));
    // short beat data
    ldx(Imm(0x3));
    ldy(Imm(0x18));
    BNE(PlayBeat);
    JMP(StrongBeat);
}

int StrongBeat() {
    lda(Imm(0x1c));
    // strong beat data
    ldx(Imm(0xc));
    ldy(Imm(0x18));
    BNE(PlayBeat);
    JMP(LongBeat);
}

int LongBeat() {
    lda(Imm(0x1c));
    // long beat data
    ldx(Imm(0x3));
    ldy(Imm(0x58));
    BNE(PlayBeat);
    JMP(SilentBeat);
}

int SilentBeat() {
    lda(Imm(0x10));
    JMP(PlayBeat);
}

int PlayBeat() {
    sta((SND_NOISE_REG));
    // load beat data into noise regs
    stx((((SND_NOISE_REG)) + (Imm(2))));
    sty((((SND_NOISE_REG)) + (Imm(3))));
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
    // save a copy of original byte into X
    // save LSB from original byte into carry
    // reload original byte and rotate three times
    // turning xx00000x into 00000xxx, with the
    // bit in carry as the MSB here
    rol();
    JMP(ProcessLengthData);
}

int ProcessLengthData() {
    anda(Imm(0b111));
    // clear all but the three LSBs
    clc();
    adc(Imm(0xf0));
    adc((NoteLengthTblAdder));
    // add offset loaded from first header byte
    // add extra if time running out music
    tay();
    lda((MusicLengthLookupTbl), y);
    // load length
    rts();
    JMP(LoadControlRegs);
}

int LoadControlRegs() {
    lda((EventMusicBuffer));
    // check secondary buffer for win castle music
    anda((EndOfCastleMusic));
    BEQ(NotECstlM);
    lda(Imm(0x4));
    BNE(AllMus);
    JMP(NotECstlM);
}

int NotECstlM() {
    lda((AreaMusicBuffer));
    anda(Imm(0b1111101));
    // check primary buffer for water music
    BEQ(WaterMus);
    lda(Imm(0x8));
    // this is the default value for all other music
    BNE(AllMus);
    JMP(WaterMus);
}

int WaterMus() {
    // this value is used for water music and all other event music
    lda(Imm(0x28));
    JMP(AllMus);
}

int AllMus() {
    // load contents of other sound regs for square 2
    ldx(Imm(0x82));
    ldy(Imm(0x7f));
    rts();
    JMP(LoadEnvelopeData);
}

int LoadEnvelopeData() {
    lda((EventMusicBuffer));
    // check secondary buffer for win castle music
    anda((EndOfCastleMusic));
    BEQ(LoadUsualEnvData);
    lda((EndOfCastleMusicEnvData), y);
    // load data from offset for win castle music
    rts();
    JMP(LoadUsualEnvData);
}

int LoadUsualEnvData() {
    lda((AreaMusicBuffer));
    // check primary buffer for water music
    anda(Imm(0b1111101));
    BEQ(LoadWaterEventMusEnvData);
    lda((AreaMusicEnvData), y);
    // load default data from offset for all other music
    rts();
    JMP(LoadWaterEventMusEnvData);
}

int LoadWaterEventMusEnvData() {
    lda((WaterEventMusEnvData), y);
    // load data from offset for water music and all other event music
    rts();
}

