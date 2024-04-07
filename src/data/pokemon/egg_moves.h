#include "constants/moves.h"

#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
#if P_FAMILY_BULBASAUR
    egg_moves(BULBASAUR,
              MOVE_LIGHT_SCREEN,
              MOVE_SKULL_BASH,
              MOVE_SAFEGUARD,
              MOVE_CHARM,
              MOVE_PETAL_DANCE,
              MOVE_MAGICAL_LEAF,
              MOVE_GRASS_WHISTLE,
              MOVE_CURSE),
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
    egg_moves(CHARMANDER,
              MOVE_BELLY_DRUM,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_OUTRAGE,
              MOVE_BEAT_UP,
              MOVE_SWORDS_DANCE,
              MOVE_DRAGON_DANCE),
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
    egg_moves(SQUIRTLE,
              MOVE_MIRROR_COAT,
              MOVE_HAZE,
              MOVE_MIST,
              MOVE_FORESIGHT,
              MOVE_FLAIL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_YAWN),
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_PIDGEY
    egg_moves(PIDGEY,
              MOVE_PURSUIT,
              MOVE_FEINT_ATTACK,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_AIR_CUTTER),
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
    egg_moves(RATTATA,
              MOVE_SCREECH,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_SWIPES,
              MOVE_BITE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_UPROAR,
              MOVE_SWAGGER),

#if P_ALOLAN_FORMS
    egg_moves(RATTATA_ALOLAN,
        MOVE_COUNTER,
        MOVE_FINAL_GAMBIT,
        MOVE_FURY_SWIPES,
        MOVE_ME_FIRST,
        MOVE_REVENGE,
        MOVE_REVERSAL,
        MOVE_SNATCH,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SWITCHEROO,
        MOVE_UPROAR),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
    egg_moves(SPEAROW,
              MOVE_FEINT_ATTACK,
              MOVE_FALSE_SWIPE,
              MOVE_SCARY_FACE,
              MOVE_QUICK_ATTACK,
              MOVE_TRI_ATTACK,
              MOVE_ASTONISH,
              MOVE_SKY_ATTACK),
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
    egg_moves(EKANS,
              MOVE_PURSUIT,
              MOVE_SLAM,
              MOVE_SPITE,
              MOVE_BEAT_UP,
              MOVE_POISON_FANG),
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
    egg_moves(PICHU,
              MOVE_REVERSAL,
              MOVE_BIDE,
              MOVE_PRESENT,
              MOVE_ENCORE,
              MOVE_DOUBLE_SLAP,
              MOVE_WISH,
              MOVE_CHARGE),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
    egg_moves(SANDSHREW,
              MOVE_FLAIL,
              MOVE_SAFEGUARD,
              MOVE_COUNTER,
              MOVE_RAPID_SPIN,
              MOVE_ROCK_SLIDE,
              MOVE_METAL_CLAW,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW),
#if P_ALOLAN_FORMS
    egg_moves(SANDSHREW_ALOLAN,
        MOVE_AMNESIA,
        MOVE_CHIP_AWAY,
        MOVE_COUNTER,
        MOVE_CRUSH_CLAW,
        MOVE_CURSE,
        MOVE_ENDURE,
        MOVE_FLAIL,
        MOVE_HONE_CLAWS,
        MOVE_ICICLE_CRASH,
        MOVE_ICICLE_SPEAR,
        MOVE_METAL_CLAW,
        MOVE_NIGHT_SLASH),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
    egg_moves(NIDORAN_F,
              MOVE_SUPERSONIC,
              MOVE_DISABLE,
              MOVE_TAKE_DOWN,
              MOVE_FOCUS_ENERGY,
              MOVE_CHARM,
              MOVE_COUNTER,
              MOVE_BEAT_UP),

    egg_moves(NIDORAN_M,
              MOVE_COUNTER,
              MOVE_DISABLE,
              MOVE_SUPERSONIC,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_CONFUSION,
              MOVE_BEAT_UP),
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
    egg_moves(CLEFFA,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_AMNESIA,
              MOVE_BELLY_DRUM,
              MOVE_SPLASH,
              MOVE_MIMIC,
              MOVE_WISH,
              MOVE_SUBSTITUTE),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
    egg_moves(VULPIX,
              MOVE_FEINT_ATTACK,
              MOVE_HYPNOSIS,
              MOVE_FLAIL,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_HOWL,
              MOVE_PSYCH_UP,
              MOVE_HEAT_WAVE),
#if P_ALOLAN_FORMS
    egg_moves(VULPIX_ALOLAN,
        MOVE_AGILITY,
        MOVE_CHARM,
        MOVE_DISABLE,
        MOVE_ENCORE,
        MOVE_EXTRASENSORY,
        MOVE_FLAIL,
        MOVE_FREEZE_DRY,
        MOVE_HOWL,
        MOVE_HYPNOSIS,
        MOVE_MOONBLAST,
        MOVE_POWER_SWAP,
        MOVE_SPITE,
        MOVE_SECRET_POWER,
        MOVE_TAIL_SLAP),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
    egg_moves(IGGLYBUFF,
              MOVE_PERISH_SONG,
              MOVE_PRESENT,
              MOVE_FEINT_ATTACK,
              MOVE_WISH,
              MOVE_FAKE_TEARS),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
    egg_moves(ZUBAT,
              MOVE_QUICK_ATTACK,
              MOVE_PURSUIT,
              MOVE_FEINT_ATTACK,
              MOVE_GUST,
              MOVE_WHIRLWIND,
              MOVE_CURSE),
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
    egg_moves(ODDISH,
              MOVE_SWORDS_DANCE,
              MOVE_RAZOR_LEAF,
              MOVE_FLAIL,
              MOVE_SYNTHESIS,
              MOVE_CHARM,
              MOVE_INGRAIN),
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
    egg_moves(PARAS,
              MOVE_FALSE_SWIPE,
              MOVE_SCREECH,
              MOVE_COUNTER,
              MOVE_PSYBEAM,
              MOVE_FLAIL,
              MOVE_SWEET_SCENT,
              MOVE_LIGHT_SCREEN,
              MOVE_PURSUIT),
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
    egg_moves(VENONAT,
              MOVE_BATON_PASS,
              MOVE_SCREECH,
              MOVE_GIGA_DRAIN,
              MOVE_SIGNAL_BEAM),
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
    egg_moves(DIGLETT,
              MOVE_FEINT_ATTACK,
              MOVE_SCREECH,
              MOVE_ANCIENT_POWER,
              MOVE_PURSUIT,
              MOVE_BEAT_UP,
              MOVE_UPROAR,
              MOVE_ROCK_SLIDE),
#if P_ALOLAN_FORMS
    egg_moves(DIGLETT_ALOLAN,
        MOVE_ANCIENT_POWER,
        MOVE_BEAT_UP,
        MOVE_ENDURE,
        MOVE_FEINT_ATTACK,
        MOVE_FINAL_GAMBIT,
        MOVE_HEADBUTT,
        MOVE_MEMENTO,
        MOVE_METAL_SOUND,
        MOVE_PURSUIT,
        MOVE_REVERSAL,
        MOVE_THRASH),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
    egg_moves(MEOWTH,
              MOVE_SPITE,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_AMNESIA,
              MOVE_PSYCH_UP,
              MOVE_ASSIST),
#if P_ALOLAN_FORMS
    egg_moves(MEOWTH_ALOLAN,
        MOVE_AMNESIA,
        MOVE_ASSIST,
        MOVE_CHARM,
        MOVE_COVET,
        MOVE_FLAIL,
        MOVE_FLATTER,
        MOVE_FOUL_PLAY,
        MOVE_HYPNOSIS,
        MOVE_PARTING_SHOT,
        MOVE_PUNISHMENT,
        MOVE_SNATCH,
        MOVE_SPITE),
#endif //P_ALOLAN_FORMS
#if P_GALARIAN_FORMS
    egg_moves(MEOWTH_GALARIAN,
        MOVE_SPITE,
        MOVE_DOUBLE_EDGE,
        MOVE_CURSE,
        MOVE_FLAIL,
        MOVE_NIGHT_SLASH,
        MOVE_COVET),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
    egg_moves(PSYDUCK,
              MOVE_HYPNOSIS,
              MOVE_PSYBEAM,
              MOVE_FORESIGHT,
              MOVE_LIGHT_SCREEN,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCHIC,
              MOVE_CROSS_CHOP,
              MOVE_REFRESH),
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
    egg_moves(MANKEY,
              MOVE_ROCK_SLIDE,
              MOVE_FORESIGHT,
              MOVE_MEDITATE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
    egg_moves(GROWLITHE,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_FIRE_SPIN,
              MOVE_HOWL,
              MOVE_HEAT_WAVE),
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
    egg_moves(POLIWAG,
              MOVE_MIST,
              MOVE_SPLASH,
              MOVE_BUBBLE_BEAM,
              MOVE_HAZE,
              MOVE_MIND_READER,
              MOVE_WATER_SPORT,
              MOVE_ICE_BALL),
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
    egg_moves(ABRA,
              MOVE_ENCORE,
              MOVE_BARRIER,
              MOVE_KNOCK_OFF,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
    egg_moves(MACHOP,
              MOVE_LIGHT_SCREEN,
              MOVE_MEDITATE,
              MOVE_ROLLING_KICK,
              MOVE_ENCORE,
              MOVE_SMELLING_SALTS,
              MOVE_COUNTER,
              MOVE_ROCK_SLIDE),
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
    egg_moves(BELLSPROUT,
              MOVE_SWORDS_DANCE,
              MOVE_ENCORE,
              MOVE_REFLECT,
              MOVE_SYNTHESIS,
              MOVE_LEECH_LIFE,
              MOVE_INGRAIN,
              MOVE_MAGICAL_LEAF),
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
    egg_moves(TENTACOOL,
              MOVE_AURORA_BEAM,
              MOVE_MIRROR_COAT,
              MOVE_RAPID_SPIN,
              MOVE_HAZE,
              MOVE_SAFEGUARD,
              MOVE_CONFUSE_RAY),
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
    egg_moves(GEODUDE,
              MOVE_MEGA_PUNCH,
              MOVE_ROCK_SLIDE,
              MOVE_BLOCK),
#if P_ALOLAN_FORMS
    egg_moves(GEODUDE_ALOLAN,
        MOVE_AUTOTOMIZE,
        MOVE_BLOCK,
        MOVE_COUNTER,
        MOVE_CURSE,
        MOVE_ENDURE,
        MOVE_FLAIL,
        MOVE_MAGNET_RISE,
        MOVE_ROCK_CLIMB,
        MOVE_SCREECH,
        MOVE_WIDE_GUARD),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
    egg_moves(PONYTA,
              MOVE_FLAME_WHEEL,
              MOVE_THRASH,
              MOVE_DOUBLE_KICK,
              MOVE_HYPNOSIS,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE),
#if P_GALARIAN_FORMS
    egg_moves(PONYTA_GALARIAN,
        MOVE_THRASH,
        MOVE_DOUBLE_KICK,
        MOVE_HYPNOSIS,
        MOVE_DOUBLE_EDGE,
        MOVE_HORN_DRILL,
        MOVE_MORNING_SUN),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
    egg_moves(SLOWPOKE,
              MOVE_SAFEGUARD,
              MOVE_BELLY_DRUM,
              MOVE_FUTURE_SIGHT,
              MOVE_STOMP,
              MOVE_MUD_SPORT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE),
#if P_GALARIAN_FORMS
    egg_moves(SLOWPOKE_GALARIAN,
        MOVE_BELCH,
        MOVE_BELLY_DRUM,
        MOVE_BLOCK,
        MOVE_STOMP),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_FARFETCHD
    egg_moves(FARFETCHD,
              MOVE_STEEL_WING,
              MOVE_FORESIGHT,
              MOVE_MIRROR_MOVE,
              MOVE_GUST,
              MOVE_QUICK_ATTACK,
              MOVE_FLAIL,
              MOVE_FEATHER_DANCE,
              MOVE_CURSE),
#if P_GALARIAN_FORMS
    egg_moves(FARFETCHD_GALARIAN,
        MOVE_COUNTER,
        MOVE_QUICK_ATTACK,
        MOVE_FLAIL,
        MOVE_QUICK_GUARD,
        MOVE_CURSE,
        MOVE_COVET,
        MOVE_NIGHT_SLASH,
        MOVE_SIMPLE_BEAM,
        MOVE_DOUBLE_EDGE,
        MOVE_FEINT,
        MOVE_SKY_ATTACK),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    egg_moves(DODUO,
              MOVE_QUICK_ATTACK,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_FEINT_ATTACK,
              MOVE_FLAIL,
              MOVE_ENDEAVOR),
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
    egg_moves(SEEL,
              MOVE_LICK,
              MOVE_PERISH_SONG,
              MOVE_DISABLE,
              MOVE_HORN_DRILL,
              MOVE_SLAM,
              MOVE_ENCORE,
              MOVE_FAKE_OUT,
              MOVE_ICICLE_SPEAR),
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
    egg_moves(GRIMER,
              MOVE_HAZE,
              MOVE_MEAN_LOOK,
              MOVE_LICK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION),
#if P_ALOLAN_FORMS
    egg_moves(GRIMER_ALOLAN,
        MOVE_ASSURANCE,
        MOVE_CLEAR_SMOG,
        MOVE_CURSE,
        MOVE_IMPRISON,
        MOVE_MEAN_LOOK,
        MOVE_POWER_UP_PUNCH,
        MOVE_PURSUIT,
        MOVE_SCARY_FACE,
        MOVE_SHADOW_SNEAK,
        MOVE_SPITE,
        MOVE_SPIT_UP,
        MOVE_STOCKPILE,
        MOVE_SWALLOW),
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
    egg_moves(SHELLDER,
              MOVE_BUBBLE_BEAM,
              MOVE_TAKE_DOWN,
              MOVE_BARRIER,
              MOVE_RAPID_SPIN,
              MOVE_SCREECH,
              MOVE_ICICLE_SPEAR),
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
    egg_moves(GASTLY,
              MOVE_PSYWAVE,
              MOVE_PERISH_SONG,
              MOVE_HAZE,
              MOVE_ASTONISH,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_EXPLOSION),
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
    egg_moves(ONIX,
              MOVE_ROCK_SLIDE,
              MOVE_FLAIL,
              MOVE_EXPLOSION,
              MOVE_BLOCK),
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
    egg_moves(DROWZEE,
              MOVE_BARRIER,
              MOVE_ASSIST,
              MOVE_ROLE_PLAY,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
    egg_moves(KRABBY,
              MOVE_DIG,
              MOVE_HAZE,
              MOVE_AMNESIA,
              MOVE_FLAIL,
              MOVE_SLAM,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE),
#endif //P_FAMILY_KRABBY

#if P_FAMILY_EXEGGCUTE
    egg_moves(EXEGGCUTE,
              MOVE_SYNTHESIS,
              MOVE_MOONLIGHT,
              MOVE_REFLECT,
              MOVE_ANCIENT_POWER,
              MOVE_PSYCH_UP,
              MOVE_INGRAIN,
              MOVE_CURSE),
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
    egg_moves(CUBONE,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_BELLY_DRUM,
              MOVE_SCREECH,
              MOVE_SKULL_BASH,
              MOVE_PERISH_SONG,
              MOVE_SWORDS_DANCE),
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    egg_moves(TYROGUE,
              MOVE_RAPID_SPIN,
              MOVE_HIGH_JUMP_KICK,
              MOVE_MACH_PUNCH,
              MOVE_MIND_READER,
              MOVE_HELPING_HAND),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
    egg_moves(LICKITUNG,
              MOVE_BELLY_DRUM,
              MOVE_MAGNITUDE,
              MOVE_BODY_SLAM,
              MOVE_CURSE,
              MOVE_SMELLING_SALTS,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
    egg_moves(KOFFING,
              MOVE_SCREECH,
              MOVE_PSYWAVE,
              MOVE_PSYBEAM,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP),
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
    egg_moves(RHYHORN,
              MOVE_CRUNCH,
              MOVE_REVERSAL,
              MOVE_ROCK_SLIDE,
              MOVE_COUNTER,
              MOVE_MAGNITUDE,
              MOVE_SWORDS_DANCE,
              MOVE_CURSE,
              MOVE_CRUSH_CLAW),
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    egg_moves(HAPPINY,
        MOVE_PRESENT,
        MOVE_METRONOME,
        MOVE_HEAL_BELL,
        MOVE_AROMATHERAPY,
        MOVE_COUNTER,
        MOVE_HELPING_HAND,
        MOVE_GRAVITY,
        MOVE_LAST_RESORT,
        MOVE_MUD_BOMB,
        MOVE_NATURAL_GIFT,
        MOVE_ENDURE),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(CHANSEY,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_HEAL_BELL,
              MOVE_AROMATHERAPY,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
    egg_moves(TANGELA,
              MOVE_FLAIL,
              MOVE_CONFUSION,
              MOVE_MEGA_DRAIN,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
    egg_moves(KANGASKHAN,
              MOVE_STOMP,
              MOVE_FORESIGHT,
              MOVE_FOCUS_ENERGY,
              MOVE_SAFEGUARD,
              MOVE_DISABLE,
              MOVE_COUNTER,
              MOVE_CRUSH_CLAW,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
    egg_moves(HORSEA,
              MOVE_FLAIL,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_DISABLE,
              MOVE_SPLASH,
              MOVE_DRAGON_RAGE,
              MOVE_DRAGON_BREATH),
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
    egg_moves(GOLDEEN,
              MOVE_PSYBEAM,
              MOVE_HAZE,
              MOVE_HYDRO_PUMP,
              MOVE_SLEEP_TALK,
              MOVE_MUD_SPORT),
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    egg_moves(MIME_JR,
        MOVE_FUTURE_SIGHT,
        MOVE_HYPNOSIS,
        MOVE_MIMIC,
        MOVE_FAKE_OUT,
        MOVE_TRICK,
        MOVE_CONFUSE_RAY,
        MOVE_WAKE_UP_SLAP,
        MOVE_TEETER_DANCE,
        MOVE_HEALING_WISH,
        MOVE_CHARM,
        MOVE_NASTY_PLOT,
        MOVE_POWER_SPLIT,
        MOVE_MAGIC_ROOM,
        MOVE_ICY_WIND,
        MOVE_PSYCHIC_TERRAIN),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(MR_MIME,
              MOVE_FUTURE_SIGHT,
              MOVE_HYPNOSIS,
              MOVE_MIMIC,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_TRICK),
#if P_GALARIAN_FORMS
    egg_moves(MR_MIME_GALARIAN,
        MOVE_FAKE_OUT,
        MOVE_CONFUSE_RAY,
        MOVE_POWER_SPLIT,
        MOVE_TICKLE),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
    egg_moves(SCYTHER,
              MOVE_COUNTER,
              MOVE_SAFEGUARD,
              MOVE_BATON_PASS,
              MOVE_RAZOR_WIND,
              MOVE_REVERSAL,
              MOVE_LIGHT_SCREEN,
              MOVE_ENDURE,
              MOVE_SILVER_WIND),
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    egg_moves(SMOOCHUM,
              MOVE_MEDITATE,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_WISH,
              MOVE_ICE_PUNCH),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    egg_moves(ELEKID,
              MOVE_KARATE_CHOP,
              MOVE_BARRIER,
              MOVE_ROLLING_KICK,
              MOVE_MEDITATE,
              MOVE_CROSS_CHOP,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    egg_moves(MAGBY,
              MOVE_KARATE_CHOP,
              MOVE_MEGA_PUNCH,
              MOVE_BARRIER,
              MOVE_SCREECH,
              MOVE_CROSS_CHOP,
              MOVE_THUNDER_PUNCH),
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
    egg_moves(PINSIR,
              MOVE_FURY_ATTACK,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE,
              MOVE_FEINT_ATTACK),
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
#if P_PALDEAN_FORMS
    egg_moves(TAUROS_PALDEAN_COMBAT_BREED,
        MOVE_CURSE,
        MOVE_ENDEAVOR),

    egg_moves(TAUROS_PALDEAN_BLAZE_BREED,
        MOVE_CURSE,
        MOVE_ENDEAVOR),

    egg_moves(TAUROS_PALDEAN_AQUA_BREED,
        MOVE_CURSE,
        MOVE_ENDEAVOR),
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_LAPRAS
    egg_moves(LAPRAS,
              MOVE_FORESIGHT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_REFRESH,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_HORN_DRILL),
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_EEVEE
    egg_moves(EEVEE,
              MOVE_CHARM,
              MOVE_FLAIL,
              MOVE_ENDURE,
              MOVE_CURSE,
              MOVE_TICKLE,
              MOVE_WISH),
#endif //P_FAMILY_EEVEE

#if P_FAMILY_OMANYTE
    egg_moves(OMANYTE,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_SLAM,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_ROCK_SLIDE,
              MOVE_SPIKES),
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
    egg_moves(KABUTO,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_RAPID_SPIN,
              MOVE_DIG,
              MOVE_FLAIL,
              MOVE_KNOCK_OFF,
              MOVE_CONFUSE_RAY),
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
    egg_moves(AERODACTYL,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_DRAGON_BREATH,
              MOVE_CURSE),
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    egg_moves(MUNCHLAX,
        MOVE_LICK,
        MOVE_CHARM,
        MOVE_DOUBLE_EDGE,
        MOVE_CURSE,
        MOVE_WHIRLWIND,
        MOVE_PURSUIT,
        MOVE_ZEN_HEADBUTT,
        MOVE_COUNTER,
        MOVE_NATURAL_GIFT,
        MOVE_AFTER_YOU,
        MOVE_SELF_DESTRUCT,
        MOVE_BELCH),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(SNORLAX,
              MOVE_LICK,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_DRATINI
    egg_moves(DRATINI,
              MOVE_LIGHT_SCREEN,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_SUPERSONIC,
              MOVE_DRAGON_BREATH,
              MOVE_DRAGON_DANCE),
#endif //P_FAMILY_DRATINI

#if P_FAMILY_CHIKORITA
    egg_moves(CHIKORITA,
              MOVE_VINE_WHIP,
              MOVE_LEECH_SEED,
              MOVE_COUNTER,
              MOVE_ANCIENT_POWER,
              MOVE_FLAIL,
              MOVE_NATURE_POWER,
              MOVE_INGRAIN,
              MOVE_GRASS_WHISTLE),
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
    egg_moves(CYNDAQUIL,
              MOVE_FURY_SWIPES,
              MOVE_QUICK_ATTACK,
              MOVE_REVERSAL,
              MOVE_THRASH,
              MOVE_FORESIGHT,
              MOVE_COVET,
              MOVE_HOWL,
              MOVE_CRUSH_CLAW),
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
    egg_moves(TOTODILE,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_HYDRO_PUMP,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_MUD_SPORT,
              MOVE_WATER_SPORT,
              MOVE_DRAGON_CLAW),
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
    egg_moves(SENTRET,
              MOVE_DOUBLE_EDGE,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_FOCUS_ENERGY,
              MOVE_REVERSAL,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              MOVE_ASSIST),
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
    egg_moves(HOOTHOOT,
              MOVE_MIRROR_MOVE,
              MOVE_SUPERSONIC,
              MOVE_FEINT_ATTACK,
              MOVE_WING_ATTACK,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_FEATHER_DANCE),
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
    egg_moves(LEDYBA,
              MOVE_PSYBEAM,
              MOVE_BIDE,
              MOVE_SILVER_WIND),
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
    egg_moves(SPINARAK,
              MOVE_PSYBEAM,
              MOVE_DISABLE,
              MOVE_SONIC_BOOM,
              MOVE_BATON_PASS,
              MOVE_PURSUIT,
              MOVE_SIGNAL_BEAM),
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
    egg_moves(CHINCHOU,
              MOVE_FLAIL,
              MOVE_SCREECH,
              MOVE_AMNESIA),
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
    egg_moves(TOGEPI,
              MOVE_PRESENT,
              MOVE_MIRROR_MOVE,
              MOVE_PECK,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_SUBSTITUTE,
              MOVE_PSYCH_UP),
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
    egg_moves(NATU,
              MOVE_HAZE,
              MOVE_DRILL_PECK,
              MOVE_QUICK_ATTACK,
              MOVE_FEINT_ATTACK,
              MOVE_STEEL_WING,
              MOVE_PSYCH_UP,
              MOVE_FEATHER_DANCE,
              MOVE_REFRESH),
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
    egg_moves(MAREEP,
              MOVE_TAKE_DOWN,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_SCREECH,
              MOVE_REFLECT,
              MOVE_ODOR_SLEUTH,
              MOVE_CHARGE),
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    egg_moves(AZURILL,
              MOVE_ENCORE,
              MOVE_SING,
              MOVE_REFRESH,
              MOVE_SLAM,
              MOVE_TICKLE),
#endif //P_GEN_3_CROSS_EVOS
    egg_moves(MARILL,
              MOVE_LIGHT_SCREEN,
              MOVE_PRESENT,
              MOVE_AMNESIA,
              MOVE_FUTURE_SIGHT,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_SUPERSONIC,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
    egg_moves(BONSLY,
        MOVE_SELF_DESTRUCT,
        MOVE_HEADBUTT,
        MOVE_HARDEN,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_SAND_TOMB,
        MOVE_STEALTH_ROCK,
        MOVE_CURSE,
        MOVE_ENDURE),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(SUDOWOODO,
              MOVE_SELF_DESTRUCT),
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
    egg_moves(HOPPIP,
              MOVE_CONFUSION,
              MOVE_ENCORE,
              MOVE_DOUBLE_EDGE,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP),
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
    egg_moves(AIPOM,
              MOVE_COUNTER,
              MOVE_SCREECH,
              MOVE_PURSUIT,
              MOVE_AGILITY,
              MOVE_SPITE,
              MOVE_SLAM,
              MOVE_DOUBLE_SLAP,
              MOVE_BEAT_UP),
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
    egg_moves(SUNKERN,
              MOVE_GRASS_WHISTLE,
              MOVE_ENCORE,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              MOVE_CURSE,
              MOVE_HELPING_HAND),
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
    egg_moves(YANMA,
              MOVE_WHIRLWIND,
              MOVE_REVERSAL,
              MOVE_LEECH_LIFE,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND),
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
    egg_moves(WOOPER,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SAFEGUARD,
              MOVE_CURSE,
              MOVE_MUD_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP),
#if P_PALDEAN_FORMS
    egg_moves(WOOPER_PALDEAN,
        MOVE_ACID_SPRAY,
        MOVE_AFTER_YOU,
        MOVE_ANCIENT_POWER,
        MOVE_COUNTER,
        MOVE_CURSE,
        MOVE_DOUBLE_KICK,
        MOVE_HAZE,
        MOVE_MIST,
        MOVE_RECOVER,
        MOVE_SPIT_UP,
        MOVE_STOCKPILE,
        MOVE_SWALLOW),
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
    egg_moves(MURKROW,
              MOVE_WHIRLWIND,
              MOVE_DRILL_PECK,
              MOVE_MIRROR_MOVE,
              MOVE_WING_ATTACK,
              MOVE_SKY_ATTACK,
              MOVE_CONFUSE_RAY,
              MOVE_FEATHER_DANCE,
              MOVE_PERISH_SONG),
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
    egg_moves(MISDREAVUS,
              MOVE_SCREECH,
              MOVE_DESTINY_BOND,
              MOVE_PSYCH_UP,
              MOVE_IMPRISON),
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_GIRAFARIG
    egg_moves(GIRAFARIG,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_BEAT_UP,
              MOVE_PSYCH_UP,
              MOVE_WISH,
              MOVE_MAGIC_COAT),
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
    egg_moves(PINECO,
              MOVE_REFLECT,
              MOVE_PIN_MISSILE,
              MOVE_FLAIL,
              MOVE_SWIFT,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
    egg_moves(DUNSPARCE,
              MOVE_BIDE,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_ASTONISH,
              MOVE_CURSE),
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
    egg_moves(GLIGAR,
              MOVE_METAL_CLAW,
              MOVE_WING_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
    egg_moves(SNUBBULL,
              MOVE_METRONOME,
              MOVE_FEINT_ATTACK,
              MOVE_REFLECT,
              MOVE_PRESENT,
              MOVE_CRUNCH,
              MOVE_HEAL_BELL,
              MOVE_SNORE,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
    egg_moves(QWILFISH,
              MOVE_FLAIL,
              MOVE_HAZE,
              MOVE_BUBBLE_BEAM,
              MOVE_SUPERSONIC,
              MOVE_ASTONISH),
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
    egg_moves(SHUCKLE,
              MOVE_SWEET_SCENT),
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
    egg_moves(HERACROSS,
              MOVE_HARDEN,
              MOVE_BIDE,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE),
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
    egg_moves(SNEASEL,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_FORESIGHT,
              MOVE_REFLECT,
              MOVE_BITE,
              MOVE_CRUSH_CLAW,
              MOVE_FAKE_OUT),
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
    egg_moves(TEDDIURSA,
              MOVE_CRUNCH,
              MOVE_TAKE_DOWN,
              MOVE_SEISMIC_TOSS,
              MOVE_COUNTER,
              MOVE_METAL_CLAW,
              MOVE_FAKE_TEARS,
              MOVE_YAWN,
              MOVE_SLEEP_TALK),
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
    egg_moves(SLUGMA,
              MOVE_ACID_ARMOR,
              MOVE_HEAT_WAVE),
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
    egg_moves(SWINUB,
              MOVE_TAKE_DOWN,
              MOVE_BITE,
              MOVE_BODY_SLAM,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_MUD_SHOT,
              MOVE_ICICLE_SPEAR,
              MOVE_DOUBLE_EDGE),
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
    egg_moves(CORSOLA,
              MOVE_ROCK_SLIDE,
              MOVE_SCREECH,
              MOVE_MIST,
              MOVE_AMNESIA,
              MOVE_BARRIER,
              MOVE_INGRAIN,
              MOVE_CONFUSE_RAY,
              MOVE_ICICLE_SPEAR),
#if P_GALARIAN_FORMS
    egg_moves(CORSOLA_GALARIAN,
        MOVE_HAZE,
        MOVE_CONFUSE_RAY,
        MOVE_NATURE_POWER,
        MOVE_DESTINY_BOND,
        MOVE_WATER_PULSE,
        MOVE_HEAD_SMASH),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
    egg_moves(REMORAID,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_SCREECH,
              MOVE_THUNDER_WAVE,
              MOVE_ROCK_BLAST),
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
    egg_moves(DELIBIRD,
              MOVE_AURORA_BEAM,
              MOVE_QUICK_ATTACK,
              MOVE_FUTURE_SIGHT,
              MOVE_SPLASH,
              MOVE_RAPID_SPIN,
              MOVE_ICE_BALL),
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    egg_moves(MANTYKE,
        MOVE_TWISTER,
        MOVE_HYDRO_PUMP,
        MOVE_HAZE,
        MOVE_SLAM,
        MOVE_MUD_SPORT,
        MOVE_MIRROR_COAT,
        MOVE_WATER_SPORT,
        MOVE_SPLASH,
        MOVE_SIGNAL_BEAM,
        MOVE_WIDE_GUARD,
        MOVE_AMNESIA,
        MOVE_TAILWIND),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(MANTINE,
              MOVE_TWISTER,
              MOVE_HYDRO_PUMP,
              MOVE_HAZE,
              MOVE_SLAM,
              MOVE_MUD_SPORT,
              MOVE_ROCK_SLIDE),
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
    egg_moves(SKARMORY,
              MOVE_DRILL_PECK,
              MOVE_PURSUIT,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_CURSE),
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
    egg_moves(HOUNDOUR,
              MOVE_FIRE_SPIN,
              MOVE_RAGE,
              MOVE_PURSUIT,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_WILL_O_WISP),
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
    egg_moves(PHANPY,
              MOVE_FOCUS_ENERGY,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SNORE,
              MOVE_COUNTER,
              MOVE_FISSURE),
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
    egg_moves(STANTLER,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_BITE,
              MOVE_SWAGGER,
              MOVE_PSYCH_UP,
              MOVE_EXTRASENSORY),
#endif //P_FAMILY_STANTLER

#if P_FAMILY_MILTANK
    egg_moves(MILTANK,
              MOVE_PRESENT,
              MOVE_REVERSAL,
              MOVE_SEISMIC_TOSS,
              MOVE_ENDURE,
              MOVE_PSYCH_UP,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_SLEEP_TALK),
#endif //P_FAMILY_MILTANK

#if P_FAMILY_LARVITAR
    egg_moves(LARVITAR,
              MOVE_PURSUIT,
              MOVE_STOMP,
              MOVE_OUTRAGE,
              MOVE_FOCUS_ENERGY,
              MOVE_ANCIENT_POWER,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE),
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_TREECKO
    egg_moves(TREECKO,
              MOVE_CRUNCH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_LEECH_SEED,
              MOVE_DRAGON_BREATH,
              MOVE_CRUSH_CLAW),
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
    egg_moves(TORCHIC,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_ENDURE,
              MOVE_SWAGGER,
              MOVE_ROCK_SLIDE,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
    egg_moves(MUDKIP,
              MOVE_REFRESH,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_STOMP,
              MOVE_ICE_BALL,
              MOVE_MIRROR_COAT),
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
    egg_moves(POOCHYENA,
              MOVE_ASTONISH,
              MOVE_POISON_FANG,
              MOVE_COVET,
              MOVE_LEER,
              MOVE_YAWN),
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
    egg_moves(ZIGZAGOON,
              MOVE_CHARM,
              MOVE_PURSUIT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_TRICK),
#if P_GALARIAN_FORMS
    egg_moves(ZIGZAGOON_GALARIAN,
        MOVE_PARTING_SHOT,
        MOVE_QUICK_GUARD,
        MOVE_KNOCK_OFF),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_LOTAD
    egg_moves(LOTAD,
              MOVE_SYNTHESIS,
              MOVE_RAZOR_LEAF,
              MOVE_SWEET_SCENT,
              MOVE_LEECH_SEED,
              MOVE_FLAIL,
              MOVE_WATER_GUN),
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
    egg_moves(SEEDOT,
              MOVE_LEECH_SEED,
              MOVE_AMNESIA,
              MOVE_QUICK_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_TAKE_DOWN,
              MOVE_FALSE_SWIPE),
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
    egg_moves(TAILLOW,
              MOVE_PURSUIT,
              MOVE_SUPERSONIC,
              MOVE_REFRESH,
              MOVE_MIRROR_MOVE,
              MOVE_RAGE,
              MOVE_SKY_ATTACK),
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
    egg_moves(WINGULL,
              MOVE_MIST,
              MOVE_TWISTER,
              MOVE_AGILITY,
              MOVE_GUST,
              MOVE_WATER_SPORT),
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
    egg_moves(RALTS,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_MEAN_LOOK,
              MOVE_MEMENTO,
              MOVE_DESTINY_BOND),
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
    egg_moves(SURSKIT,
              MOVE_FORESIGHT,
              MOVE_MUD_SHOT,
              MOVE_PSYBEAM,
              MOVE_HYDRO_PUMP,
              MOVE_MIND_READER),
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
    egg_moves(SHROOMISH,
              MOVE_FAKE_TEARS,
              MOVE_SWAGGER,
              MOVE_CHARM,
              MOVE_FALSE_SWIPE,
              MOVE_HELPING_HAND),
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
    egg_moves(SLAKOTH,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_BODY_SLAM,
              MOVE_SNORE,
              MOVE_CRUSH_CLAW,
              MOVE_CURSE,
              MOVE_SLEEP_TALK),
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
    egg_moves(NINCADA,
              MOVE_ENDURE,
              MOVE_FEINT_ATTACK,
              MOVE_GUST,
              MOVE_SILVER_WIND),
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
    egg_moves(WHISMUR,
              MOVE_TAKE_DOWN,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_EXTRASENSORY,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
    egg_moves(MAKUHITA,
              MOVE_FEINT_ATTACK,
              MOVE_DETECT,
              MOVE_FORESIGHT,
              MOVE_HELPING_HAND,
              MOVE_CROSS_CHOP,
              MOVE_REVENGE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
    egg_moves(NOSEPASS,
              MOVE_MAGNITUDE,
              MOVE_ROLLOUT,
              MOVE_EXPLOSION),
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
    egg_moves(SKITTY,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_UPROAR,
              MOVE_FAKE_TEARS,
              MOVE_WISH,
              MOVE_BATON_PASS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE),
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
    egg_moves(SABLEYE,
              MOVE_PSYCH_UP,
              MOVE_RECOVER,
              MOVE_MOONLIGHT),
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
    egg_moves(MAWILE,
              MOVE_SWORDS_DANCE,
              MOVE_FALSE_SWIPE,
              MOVE_POISON_FANG,
              MOVE_PSYCH_UP,
              MOVE_ANCIENT_POWER,
              MOVE_TICKLE),
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
    egg_moves(ARON,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_STOMP,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
    egg_moves(MEDITITE,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_FORESIGHT,
              MOVE_FAKE_OUT,
              MOVE_BATON_PASS,
              MOVE_DYNAMIC_PUNCH),
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
    egg_moves(ELECTRIKE,
              MOVE_CRUNCH,
              MOVE_HEADBUTT,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_SWIFT),
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
    egg_moves(PLUSLE,
              MOVE_SUBSTITUTE,
              MOVE_WISH),
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
    egg_moves(MINUN,
              MOVE_SUBSTITUTE,
              MOVE_WISH),
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
    egg_moves(VOLBEAT,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_TRICK),

    egg_moves(ILLUMISE,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_GROWTH),
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    egg_moves(BUDEW,
        MOVE_SPIKES,
        MOVE_SYNTHESIS,
        MOVE_PIN_MISSILE,
        MOVE_COTTON_SPORE,
        MOVE_SLEEP_POWDER,
        MOVE_RAZOR_LEAF,
        MOVE_MIND_READER,
        MOVE_LEAF_STORM,
        MOVE_EXTRASENSORY,
        MOVE_SEED_BOMB,
        MOVE_GIGA_DRAIN,
        MOVE_NATURAL_GIFT,
        MOVE_GRASS_WHISTLE),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(ROSELIA,
              MOVE_SPIKES,
              MOVE_SYNTHESIS,
              MOVE_PIN_MISSILE,
              MOVE_COTTON_SPORE),
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
    egg_moves(GULPIN,
              MOVE_DREAM_EATER,
              MOVE_ACID_ARMOR,
              MOVE_SMOG,
              MOVE_PAIN_SPLIT),
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
    egg_moves(CARVANHA,
              MOVE_HYDRO_PUMP,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH),
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
    egg_moves(WAILMER,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH,
              MOVE_SWAGGER,
              MOVE_SNORE,
              MOVE_SLEEP_TALK,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_TICKLE),
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
    egg_moves(NUMEL,
              MOVE_HOWL,
              MOVE_SCARY_FACE,
              MOVE_BODY_SLAM,
              MOVE_ROLLOUT,
              MOVE_DEFENSE_CURL,
              MOVE_STOMP),
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
    egg_moves(TORKOAL,
              MOVE_ERUPTION,
              MOVE_ENDURE,
              MOVE_SLEEP_TALK,
              MOVE_YAWN),
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
    egg_moves(SPOINK,
              MOVE_FUTURE_SIGHT,
              MOVE_EXTRASENSORY,
              MOVE_SUBSTITUTE,
              MOVE_TRICK),
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
    egg_moves(SPINDA,
              MOVE_ENCORE,
              MOVE_ROCK_SLIDE,
              MOVE_ASSIST,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_WISH,
              MOVE_TRICK,
              MOVE_SMELLING_SALTS),
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
    egg_moves(TRAPINCH,
              MOVE_FOCUS_ENERGY,
              MOVE_QUICK_ATTACK,
              MOVE_GUST),
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
    egg_moves(CACNEA,
              MOVE_GRASS_WHISTLE,
              MOVE_ACID,
              MOVE_TEETER_DANCE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
    egg_moves(SWABLU,
              MOVE_AGILITY,
              MOVE_HAZE,
              MOVE_PURSUIT,
              MOVE_RAGE),
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
    egg_moves(ZANGOOSE,
              MOVE_FLAIL,
              MOVE_DOUBLE_KICK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_ROAR,
              MOVE_CURSE),
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
    egg_moves(SEVIPER,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_BODY_SLAM),
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_BARBOACH
    egg_moves(BARBOACH,
              MOVE_THRASH,
              MOVE_WHIRLPOOL,
              MOVE_SPARK),
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
    egg_moves(CORPHISH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER),
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_LILEEP
    egg_moves(LILEEP,
              MOVE_BARRIER,
              MOVE_RECOVER,
              MOVE_MIRROR_COAT,
              MOVE_ROCK_SLIDE),
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
    egg_moves(ANORITH,
              MOVE_RAPID_SPIN,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_ROCK_SLIDE),
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
    egg_moves(FEEBAS,
              MOVE_MIRROR_COAT,
              MOVE_DRAGON_BREATH,
              MOVE_MUD_SPORT,
              MOVE_HYPNOSIS,
              MOVE_LIGHT_SCREEN,
              MOVE_CONFUSE_RAY),
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
    egg_moves(CASTFORM,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCH_UP),
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
    egg_moves(KECLEON,
              MOVE_DISABLE,
              MOVE_MAGIC_COAT,
              MOVE_TRICK),
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
    egg_moves(SHUPPET,
              MOVE_DISABLE,
              MOVE_DESTINY_BOND,
              MOVE_FORESIGHT,
              MOVE_ASTONISH,
              MOVE_IMPRISON),
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
    egg_moves(DUSKULL,
              MOVE_IMPRISON,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_FEINT_ATTACK),
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
    egg_moves(TROPIUS,
              MOVE_HEADBUTT,
              MOVE_SLAM,
              MOVE_RAZOR_WIND,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    egg_moves(CHINGLING,
        MOVE_DISABLE,
        MOVE_CURSE,
        MOVE_HYPNOSIS,
        MOVE_WISH,
        MOVE_FUTURE_SIGHT,
        MOVE_RECOVER,
        MOVE_STORED_POWER,
        MOVE_SKILL_SWAP,
        MOVE_COSMIC_POWER),
#endif //P_GEN_4_CROSS_EVOS
    egg_moves(CHIMECHO,
              MOVE_DISABLE,
              MOVE_CURSE,
              MOVE_HYPNOSIS,
              MOVE_DREAM_EATER),
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
    egg_moves(ABSOL,
              MOVE_BATON_PASS,
              MOVE_FEINT_ATTACK,
              MOVE_DOUBLE_EDGE,
              MOVE_MAGIC_COAT,
              MOVE_CURSE,
              MOVE_SUBSTITUTE),
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
    egg_moves(SNORUNT,
              MOVE_BLOCK,
              MOVE_SPIKES),
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
    egg_moves(SPHEAL,
              MOVE_WATER_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_YAWN,
              MOVE_ROCK_SLIDE,
              MOVE_CURSE,
              MOVE_FISSURE),
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
    egg_moves(CLAMPERL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_BODY_SLAM,
              MOVE_SUPERSONIC,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY),
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
    egg_moves(RELICANTH,
              MOVE_MAGNITUDE,
              MOVE_SKULL_BASH,
              MOVE_WATER_SPORT,
              MOVE_AMNESIA,
              MOVE_SLEEP_TALK,
              MOVE_ROCK_SLIDE),
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
    egg_moves(LUVDISC,
              MOVE_SPLASH,
              MOVE_SUPERSONIC,
              MOVE_WATER_SPORT,
              MOVE_MUD_SPORT),
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
    egg_moves(BAGON,
              MOVE_HYDRO_PUMP,
              MOVE_THRASH,
              MOVE_DRAGON_RAGE,
              MOVE_TWISTER,
              MOVE_DRAGON_DANCE),
#endif //P_FAMILY_BAGON

#if P_FAMILY_TURTWIG
    egg_moves(TURTWIG,
        MOVE_WORRY_SEED,
        MOVE_GROWTH,
        MOVE_TICKLE,
        MOVE_BODY_SLAM,
        MOVE_DOUBLE_EDGE,
        MOVE_SAND_TOMB,
        MOVE_SEED_BOMB,
        MOVE_THRASH,
        MOVE_AMNESIA,
        MOVE_SUPERPOWER,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SPIT_UP,
        MOVE_EARTH_POWER,
        MOVE_WIDE_GUARD,
        MOVE_GRASSY_TERRAIN,
        MOVE_HEAVY_SLAM),
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
    egg_moves(CHIMCHAR,
        MOVE_FIRE_PUNCH,
        MOVE_THUNDER_PUNCH,
        MOVE_DOUBLE_KICK,
        MOVE_ENCORE,
        MOVE_HEAT_WAVE,
        MOVE_FOCUS_ENERGY,
        MOVE_HELPING_HAND,
        MOVE_FAKE_OUT,
        MOVE_BLAZE_KICK,
        MOVE_COUNTER,
        MOVE_ASSIST,
        MOVE_QUICK_GUARD,
        MOVE_FOCUS_PUNCH,
        MOVE_SUBMISSION,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
    egg_moves(PIPLUP,
        MOVE_DOUBLE_HIT,
        MOVE_SUPERSONIC,
        MOVE_YAWN,
        MOVE_MUD_SPORT,
        MOVE_MUD_SLAP,
        MOVE_SNORE,
        MOVE_FLAIL,
        MOVE_AGILITY,
        MOVE_AQUA_RING,
        MOVE_HYDRO_PUMP,
        MOVE_FEATHER_DANCE,
        MOVE_BIDE,
        MOVE_ICY_WIND,
        MOVE_POWER_TRIP),
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    egg_moves(STARLY,
        MOVE_FEATHER_DANCE,
        MOVE_FURY_ATTACK,
        MOVE_PURSUIT,
        MOVE_ASTONISH,
        MOVE_SAND_ATTACK,
        MOVE_FORESIGHT,
        MOVE_DOUBLE_EDGE,
        MOVE_STEEL_WING,
        MOVE_UPROAR,
        MOVE_ROOST,
        MOVE_DETECT,
        MOVE_REVENGE,
        MOVE_MIRROR_MOVE),
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
    egg_moves(BIDOOF,
        MOVE_QUICK_ATTACK,
        MOVE_WATER_SPORT,
        MOVE_DOUBLE_EDGE,
        MOVE_FURY_SWIPES,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_ODOR_SLEUTH,
        MOVE_AQUA_TAIL,
        MOVE_ROCK_CLIMB,
        MOVE_SLEEP_TALK,
        MOVE_ENDURE,
        MOVE_SKULL_BASH,
        MOVE_MUD_SPORT),
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_SHINX
    egg_moves(SHINX,
        MOVE_ICE_FANG,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_QUICK_ATTACK,
        MOVE_HOWL,
        MOVE_TAKE_DOWN,
        MOVE_NIGHT_SLASH,
        MOVE_SHOCK_WAVE,
        MOVE_SWIFT,
        MOVE_DOUBLE_KICK,
        MOVE_SIGNAL_BEAM,
        MOVE_HELPING_HAND,
        MOVE_EERIE_IMPULSE,
        MOVE_FAKE_TEARS),
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
    egg_moves(CRANIDOS,
        MOVE_CRUNCH,
        MOVE_THRASH,
        MOVE_DOUBLE_EDGE,
        MOVE_LEER,
        MOVE_SLAM,
        MOVE_STOMP,
        MOVE_WHIRLWIND,
        MOVE_HAMMER_ARM,
        MOVE_CURSE,
        MOVE_IRON_TAIL,
        MOVE_IRON_HEAD),
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
    egg_moves(SHIELDON,
        MOVE_HEADBUTT,
        MOVE_SCARY_FACE,
        MOVE_FOCUS_ENERGY,
        MOVE_DOUBLE_EDGE,
        MOVE_ROCK_BLAST,
        MOVE_BODY_SLAM,
        MOVE_SCREECH,
        MOVE_CURSE,
        MOVE_FISSURE,
        MOVE_COUNTER,
        MOVE_STEALTH_ROCK,
        MOVE_WIDE_GUARD,
        MOVE_GUARD_SPLIT),
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_PACHIRISU
    egg_moves(PACHIRISU,
        MOVE_COVET,
        MOVE_BITE,
        MOVE_FAKE_TEARS,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_FLATTER,
        MOVE_FLAIL,
        MOVE_IRON_TAIL,
        MOVE_TAIL_WHIP,
        MOVE_FOLLOW_ME,
        MOVE_CHARGE,
        MOVE_BESTOW,
        MOVE_ION_DELUGE,
        MOVE_BABY_DOLL_EYES),
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
    egg_moves(BUIZEL,
        MOVE_MUD_SLAP,
        MOVE_HEADBUTT,
        MOVE_FURY_SWIPES,
        MOVE_SLASH,
        MOVE_ODOR_SLEUTH,
        MOVE_DOUBLE_SLAP,
        MOVE_FURY_CUTTER,
        MOVE_BATON_PASS,
        MOVE_AQUA_TAIL,
        MOVE_AQUA_RING,
        MOVE_ME_FIRST,
        MOVE_SWITCHEROO,
        MOVE_TAIL_SLAP,
        MOVE_SOAK,
        MOVE_HELPING_HAND),
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
    egg_moves(CHERUBI,
        MOVE_RAZOR_LEAF,
        MOVE_SWEET_SCENT,
        MOVE_TICKLE,
        MOVE_NATURE_POWER,
        MOVE_GRASS_WHISTLE,
        MOVE_AROMATHERAPY,
        MOVE_WEATHER_BALL,
        MOVE_HEAL_PULSE,
        MOVE_HEALING_WISH,
        MOVE_SEED_BOMB,
        MOVE_NATURAL_GIFT,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_FLOWER_SHIELD,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
    egg_moves(SHELLOS_WEST_SEA,
        MOVE_COUNTER,
        MOVE_MIRROR_COAT,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SPIT_UP,
        MOVE_YAWN,
        MOVE_MEMENTO,
        MOVE_CURSE,
        MOVE_AMNESIA,
        MOVE_FISSURE,
        MOVE_TRUMP_CARD,
        MOVE_SLUDGE,
        MOVE_CLEAR_SMOG,
        MOVE_BRINE,
        MOVE_MIST,
        MOVE_ACID_ARMOR),
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
    egg_moves(DRIFLOON,
        MOVE_MEMENTO,
        MOVE_BODY_SLAM,
        MOVE_DESTINY_BOND,
        MOVE_DISABLE,
        MOVE_HAZE,
        MOVE_HYPNOSIS,
        MOVE_WEATHER_BALL,
        MOVE_CLEAR_SMOG,
        MOVE_DEFOG,
        MOVE_TAILWIND),
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
    egg_moves(BUNEARY,
        MOVE_FAKE_TEARS,
        MOVE_FAKE_OUT,
        MOVE_ENCORE,
        MOVE_SWEET_KISS,
        MOVE_DOUBLE_HIT,
        MOVE_LOW_KICK,
        MOVE_SKY_UPPERCUT,
        MOVE_SWITCHEROO,
        MOVE_THUNDER_PUNCH,
        MOVE_ICE_PUNCH,
        MOVE_FIRE_PUNCH,
        MOVE_FLAIL,
        MOVE_FOCUS_PUNCH,
        MOVE_CIRCLE_THROW,
        MOVE_COPYCAT,
        MOVE_TEETER_DANCE,
        MOVE_COSMIC_POWER,
        MOVE_MUD_SPORT,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
    egg_moves(GLAMEOW,
        MOVE_BITE,
        MOVE_TAIL_WHIP,
        MOVE_QUICK_ATTACK,
        MOVE_SAND_ATTACK,
        MOVE_FAKE_TEARS,
        MOVE_ASSURANCE,
        MOVE_FLAIL,
        MOVE_SNATCH,
        MOVE_WAKE_UP_SLAP,
        MOVE_LAST_RESORT),
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
    egg_moves(STUNKY,
        MOVE_PURSUIT,
        MOVE_LEER,
        MOVE_SMOG,
        MOVE_DOUBLE_EDGE,
        MOVE_CRUNCH,
        MOVE_SCARY_FACE,
        MOVE_ASTONISH,
        MOVE_PUNISHMENT,
        MOVE_HAZE,
        MOVE_IRON_TAIL,
        MOVE_FOUL_PLAY,
        MOVE_FLAME_BURST,
        MOVE_PLAY_ROUGH),
#endif //P_FAMILY_STUNKY

#if P_FAMILY_CHATOT
    egg_moves(CHATOT,
        MOVE_ENCORE,
        MOVE_NIGHT_SHADE,
        MOVE_AGILITY,
        MOVE_NASTY_PLOT,
        MOVE_SUPERSONIC,
        MOVE_STEEL_WING,
        MOVE_SLEEP_TALK,
        MOVE_DEFOG,
        MOVE_AIR_CUTTER,
        MOVE_BOOMBURST),
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
    egg_moves(SPIRITOMB,
        MOVE_DESTINY_BOND,
        MOVE_PAIN_SPLIT,
        MOVE_SMOKESCREEN,
        MOVE_IMPRISON,
        MOVE_GRUDGE,
        MOVE_SHADOW_SNEAK,
        MOVE_CAPTIVATE,
        MOVE_NIGHTMARE,
        MOVE_FOUL_PLAY,
        MOVE_DISABLE),
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
    egg_moves(GIBLE,
        MOVE_DRAGON_BREATH,
        MOVE_OUTRAGE,
        MOVE_TWISTER,
        MOVE_SCARY_FACE,
        MOVE_DOUBLE_EDGE,
        MOVE_THRASH,
        MOVE_METAL_CLAW,
        MOVE_SAND_TOMB,
        MOVE_BODY_SLAM,
        MOVE_IRON_HEAD,
        MOVE_MUD_SHOT,
        MOVE_ROCK_CLIMB,
        MOVE_IRON_TAIL),
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
    egg_moves(RIOLU,
        MOVE_CROSS_CHOP,
        MOVE_DETECT,
        MOVE_BITE,
        MOVE_MIND_READER,
        MOVE_SKY_UPPERCUT,
        MOVE_HIGH_JUMP_KICK,
        MOVE_AGILITY,
        MOVE_VACUUM_WAVE,
        MOVE_CRUNCH,
        MOVE_LOW_KICK,
        MOVE_IRON_DEFENSE,
        MOVE_BLAZE_KICK,
        MOVE_BULLET_PUNCH,
        MOVE_FOLLOW_ME,
        MOVE_CIRCLE_THROW,
        MOVE_METEOR_MASH),
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
    egg_moves(HIPPOPOTAS,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SPIT_UP,
        MOVE_CURSE,
        MOVE_SLACK_OFF,
        MOVE_BODY_SLAM,
        MOVE_SAND_TOMB,
        MOVE_REVENGE,
        MOVE_SLEEP_TALK,
        MOVE_WHIRLWIND),
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
    egg_moves(SKORUPI,
        MOVE_FEINT_ATTACK,
        MOVE_SCREECH,
        MOVE_SAND_ATTACK,
        MOVE_SLASH,
        MOVE_CONFUSE_RAY,
        MOVE_WHIRLWIND,
        MOVE_AGILITY,
        MOVE_PURSUIT,
        MOVE_NIGHT_SLASH,
        MOVE_IRON_TAIL,
        MOVE_TWINEEDLE,
        MOVE_POISON_TAIL),
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
    egg_moves(CROAGUNK,
        MOVE_ME_FIRST,
        MOVE_FEINT,
        MOVE_DYNAMIC_PUNCH,
        MOVE_HEADBUTT,
        MOVE_VACUUM_WAVE,
        MOVE_MEDITATE,
        MOVE_FAKE_OUT,
        MOVE_WAKE_UP_SLAP,
        MOVE_SMELLING_SALTS,
        MOVE_CROSS_CHOP,
        MOVE_BULLET_PUNCH,
        MOVE_COUNTER,
        MOVE_DRAIN_PUNCH,
        MOVE_ACUPRESSURE,
        MOVE_QUICK_GUARD),
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
    egg_moves(CARNIVINE,
        MOVE_SLEEP_POWDER,
        MOVE_STUN_SPORE,
        MOVE_RAZOR_LEAF,
        MOVE_SLAM,
        MOVE_SYNTHESIS,
        MOVE_MAGICAL_LEAF,
        MOVE_LEECH_SEED,
        MOVE_WORRY_SEED,
        MOVE_GIGA_DRAIN,
        MOVE_RAGE_POWDER,
        MOVE_GRASS_WHISTLE,
        MOVE_ACID_SPRAY),
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
    egg_moves(FINNEON,
        MOVE_SWEET_KISS,
        MOVE_CHARM,
        MOVE_FLAIL,
        MOVE_AQUA_TAIL,
        MOVE_SPLASH,
        MOVE_PSYBEAM,
        MOVE_TICKLE,
        MOVE_AGILITY,
        MOVE_BRINE,
        MOVE_AURORA_BEAM,
        MOVE_SIGNAL_BEAM,
        MOVE_CONFUSE_RAY),
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
    egg_moves(SNOVER,
        MOVE_LEECH_SEED,
        MOVE_MAGICAL_LEAF,
        MOVE_SEED_BOMB,
        MOVE_GROWTH,
        MOVE_DOUBLE_EDGE,
        MOVE_MIST,
        MOVE_STOMP,
        MOVE_SKULL_BASH,
        MOVE_AVALANCHE,
        MOVE_NATURAL_GIFT,
        MOVE_BULLET_SEED),
#endif //P_FAMILY_SNOVER

#if P_FAMILY_SNIVY
    egg_moves(SNIVY,
        MOVE_CAPTIVATE,
        MOVE_NATURAL_GIFT,
        MOVE_GLARE,
        MOVE_IRON_TAIL,
        MOVE_MAGICAL_LEAF,
        MOVE_SWEET_SCENT,
        MOVE_MIRROR_COAT,
        MOVE_PURSUIT,
        MOVE_MEAN_LOOK,
        MOVE_TWISTER,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
    egg_moves(TEPIG,
        MOVE_COVET,
        MOVE_BODY_SLAM,
        MOVE_THRASH,
        MOVE_MAGNITUDE,
        MOVE_SUPERPOWER,
        MOVE_CURSE,
        MOVE_ENDEAVOR,
        MOVE_YAWN,
        MOVE_SLEEP_TALK,
        MOVE_HEAVY_SLAM,
        MOVE_SUCKER_PUNCH,
        MOVE_BURN_UP),
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
    egg_moves(OSHAWOTT,
        MOVE_COPYCAT,
        MOVE_DETECT,
        MOVE_AIR_SLASH,
        MOVE_ASSURANCE,
        MOVE_BRINE,
        MOVE_NIGHT_SLASH,
        MOVE_TRUMP_CARD,
        MOVE_SCREECH,
        MOVE_SACRED_SWORD),
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
    egg_moves(PATRAT,
        MOVE_FORESIGHT,
        MOVE_IRON_TAIL,
        MOVE_SCREECH,
        MOVE_ASSURANCE,
        MOVE_PURSUIT,
        MOVE_REVENGE,
        MOVE_FLAIL,
        MOVE_TEARFUL_LOOK,
        MOVE_BULLET_SEED),
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
    egg_moves(LILLIPUP,
        MOVE_HOWL,
        MOVE_SAND_ATTACK,
        MOVE_MUD_SLAP,
        MOVE_LICK,
        MOVE_CHARM,
        MOVE_ENDURE,
        MOVE_YAWN,
        MOVE_PURSUIT,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_ICE_FANG,
        MOVE_AFTER_YOU,
        MOVE_PSYCHIC_FANGS),
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
    egg_moves(PURRLOIN,
        MOVE_PAY_DAY,
        MOVE_FOUL_PLAY,
        MOVE_FEINT_ATTACK,
        MOVE_FAKE_TEARS,
        MOVE_CHARM,
        MOVE_ENCORE,
        MOVE_YAWN,
        MOVE_COVET,
        MOVE_COPYCAT),
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
    egg_moves(PANSAGE,
        MOVE_COVET,
        MOVE_LOW_KICK,
        MOVE_TICKLE,
        MOVE_NASTY_PLOT,
        MOVE_ROLE_PLAY,
        MOVE_ASTONISH,
        MOVE_GRASS_WHISTLE,
        MOVE_MAGICAL_LEAF,
        MOVE_BULLET_SEED,
        MOVE_LEAF_STORM,
        MOVE_DISARMING_VOICE,
        MOVE_SPIKY_SHIELD),
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
    egg_moves(PANSEAR,
        MOVE_COVET,
        MOVE_LOW_KICK,
        MOVE_TICKLE,
        MOVE_NASTY_PLOT,
        MOVE_ROLE_PLAY,
        MOVE_ASTONISH,
        MOVE_SLEEP_TALK,
        MOVE_FIRE_SPIN,
        MOVE_FIRE_PUNCH,
        MOVE_HEAT_WAVE,
        MOVE_DISARMING_VOICE,
        MOVE_BELCH,
        MOVE_FLARE_BLITZ),
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
    egg_moves(PANPOUR,
        MOVE_COVET,
        MOVE_LOW_KICK,
        MOVE_TICKLE,
        MOVE_NASTY_PLOT,
        MOVE_ROLE_PLAY,
        MOVE_ASTONISH,
        MOVE_AQUA_RING,
        MOVE_AQUA_TAIL,
        MOVE_MUD_SPORT,
        MOVE_HYDRO_PUMP,
        MOVE_DISARMING_VOICE),
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
    egg_moves(MUNNA,
        MOVE_SLEEP_TALK,
        MOVE_SECRET_POWER,
        MOVE_BARRIER,
        MOVE_MAGIC_COAT,
        MOVE_HELPING_HAND,
        MOVE_BATON_PASS,
        MOVE_SWIFT,
        MOVE_CURSE,
        MOVE_SONIC_BOOM,
        MOVE_HEALING_WISH),
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
    egg_moves(PIDOVE,
        MOVE_STEEL_WING,
        MOVE_HYPNOSIS,
        MOVE_UPROAR,
        MOVE_BESTOW,
        MOVE_WISH,
        MOVE_MORNING_SUN,
        MOVE_LUCKY_CHANT,
        MOVE_NIGHT_SLASH),
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
    egg_moves(BLITZLE,
        MOVE_ME_FIRST,
        MOVE_TAKE_DOWN,
        MOVE_SAND_ATTACK,
        MOVE_DOUBLE_KICK,
        MOVE_SCREECH,
        MOVE_RAGE,
        MOVE_ENDURE,
        MOVE_DOUBLE_EDGE,
        MOVE_SHOCK_WAVE,
        MOVE_SNATCH,
        MOVE_FEINT),
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
    egg_moves(ROGGENROLA,
        MOVE_MAGNITUDE,
        MOVE_CURSE,
        MOVE_AUTOTOMIZE,
        MOVE_ROCK_TOMB,
        MOVE_LOCK_ON,
        MOVE_HEAVY_SLAM,
        MOVE_TAKE_DOWN,
        MOVE_GRAVITY,
        MOVE_WIDE_GUARD),
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
    egg_moves(WOOBAT,
        MOVE_CHARM,
        MOVE_KNOCK_OFF,
        MOVE_FAKE_TEARS,
        MOVE_SUPERSONIC,
        MOVE_SYNCHRONOISE,
        MOVE_STORED_POWER,
        MOVE_ROOST,
        MOVE_FLATTER,
        MOVE_HELPING_HAND,
        MOVE_CAPTIVATE,
        MOVE_VENOM_DRENCH,
        MOVE_PSYCHO_SHIFT),
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
    egg_moves(DRILBUR,
        MOVE_IRON_DEFENSE,
        MOVE_RAPID_SPIN,
        MOVE_EARTH_POWER,
        MOVE_CRUSH_CLAW,
        MOVE_METAL_SOUND,
        MOVE_SUBMISSION,
        MOVE_SKULL_BASH,
        MOVE_ROCK_CLIMB),
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
    egg_moves(AUDINO,
        MOVE_WISH,
        MOVE_HEAL_BELL,
        MOVE_LUCKY_CHANT,
        MOVE_ENCORE,
        MOVE_BESTOW,
        MOVE_SWEET_KISS,
        MOVE_YAWN,
        MOVE_SLEEP_TALK,
        MOVE_HEALING_WISH,
        MOVE_AMNESIA,
        MOVE_DRAINING_KISS),
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
    egg_moves(TIMBURR,
        MOVE_DRAIN_PUNCH,
        MOVE_ENDURE,
        MOVE_COUNTER,
        MOVE_COMET_PUNCH,
        MOVE_FORESIGHT,
        MOVE_SMELLING_SALTS,
        MOVE_DETECT,
        MOVE_WIDE_GUARD,
        MOVE_FORCE_PALM,
        MOVE_REVERSAL,
        MOVE_MACH_PUNCH,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
    egg_moves(TYMPOLE,
        MOVE_WATER_PULSE,
        MOVE_REFRESH,
        MOVE_MUD_SPORT,
        MOVE_MUD_BOMB,
        MOVE_SLEEP_TALK,
        MOVE_SNORE,
        MOVE_MIST,
        MOVE_EARTH_POWER,
        MOVE_AFTER_YOU,
        MOVE_VENOM_DRENCH),
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_SEWADDLE
    egg_moves(SEWADDLE,
        MOVE_SILVER_WIND,
        MOVE_SCREECH,
        MOVE_RAZOR_WIND,
        MOVE_MIND_READER,
        MOVE_AGILITY,
        MOVE_ME_FIRST,
        MOVE_BATON_PASS,
        MOVE_CAMOUFLAGE,
        MOVE_AIR_SLASH,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
    egg_moves(VENIPEDE,
        MOVE_TWINEEDLE,
        MOVE_PIN_MISSILE,
        MOVE_TOXIC_SPIKES,
        MOVE_SPIKES,
        MOVE_TAKE_DOWN,
        MOVE_ROCK_CLIMB),
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
    egg_moves(COTTONEE,
        MOVE_NATURAL_GIFT,
        MOVE_ENCORE,
        MOVE_TICKLE,
        MOVE_FAKE_TEARS,
        MOVE_GRASS_WHISTLE,
        MOVE_MEMENTO,
        MOVE_BEAT_UP,
        MOVE_SWITCHEROO,
        MOVE_WORRY_SEED,
        MOVE_CAPTIVATE,
        MOVE_MISTY_TERRAIN),
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
    egg_moves(PETILIL,
        MOVE_NATURAL_GIFT,
        MOVE_CHARM,
        MOVE_ENDURE,
        MOVE_INGRAIN,
        MOVE_WORRY_SEED,
        MOVE_GRASS_WHISTLE,
        MOVE_SWEET_SCENT,
        MOVE_BIDE,
        MOVE_HEALING_WISH,
        MOVE_ENCORE),
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
    egg_moves(BASCULIN,
        MOVE_SWIFT,
        MOVE_BUBBLE_BEAM,
        MOVE_MUD_SHOT,
        MOVE_MUDDY_WATER,
        MOVE_AGILITY,
        MOVE_WHIRLPOOL,
        MOVE_RAGE,
        MOVE_BRINE,
        MOVE_REVENGE,
        MOVE_HEAD_SMASH),
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
    egg_moves(SANDILE,
        MOVE_DOUBLE_EDGE,
        MOVE_ROCK_CLIMB,
        MOVE_PURSUIT,
        MOVE_UPROAR,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_BEAT_UP,
        MOVE_FOCUS_ENERGY,
        MOVE_COUNTER,
        MOVE_MEAN_LOOK,
        MOVE_ME_FIRST,
        MOVE_POWER_TRIP),
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
    egg_moves(DARUMAKA,
        MOVE_SLEEP_TALK,
        MOVE_FOCUS_PUNCH,
        MOVE_FOCUS_ENERGY,
        MOVE_ENDURE,
        MOVE_HAMMER_ARM,
        MOVE_TAKE_DOWN,
        MOVE_FLAME_WHEEL,
        MOVE_ENCORE,
        MOVE_YAWN,
        MOVE_SNATCH,
        MOVE_EXTRASENSORY),
#if P_GALARIAN_FORMS
    egg_moves(DARUMAKA_GALARIAN,
        MOVE_FOCUS_PUNCH,
        MOVE_HAMMER_ARM,
        MOVE_TAKE_DOWN,
        MOVE_FLAME_WHEEL,
        MOVE_YAWN,
        MOVE_FREEZE_DRY,
        MOVE_INCINERATE,
        MOVE_POWER_UP_PUNCH),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
    egg_moves(MARACTUS,
        MOVE_BULLET_SEED,
        MOVE_BOUNCE,
        MOVE_WORRY_SEED,
        MOVE_LEECH_SEED,
        MOVE_SEED_BOMB,
        MOVE_WOOD_HAMMER,
        MOVE_SPIKES,
        MOVE_GRASS_WHISTLE,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
    egg_moves(DWEBBLE,
        MOVE_ENDURE,
        MOVE_IRON_DEFENSE,
        MOVE_NIGHT_SLASH,
        MOVE_SAND_TOMB,
        MOVE_COUNTER,
        MOVE_CURSE,
        MOVE_SPIKES,
        MOVE_BLOCK,
        MOVE_WIDE_GUARD,
        MOVE_ROTOTILLER),
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
    egg_moves(SCRAGGY,
        MOVE_DRAIN_PUNCH,
        MOVE_COUNTER,
        MOVE_DRAGON_DANCE,
        MOVE_DETECT,
        MOVE_FAKE_OUT,
        MOVE_FIRE_PUNCH,
        MOVE_ICE_PUNCH,
        MOVE_THUNDER_PUNCH,
        MOVE_AMNESIA,
        MOVE_FEINT_ATTACK,
        MOVE_ZEN_HEADBUTT,
        MOVE_QUICK_GUARD,
        MOVE_POWER_UP_PUNCH,
        MOVE_ACID_SPRAY),
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
    egg_moves(SIGILYPH,
        MOVE_STORED_POWER,
        MOVE_PSYCHO_SHIFT,
        MOVE_ANCIENT_POWER,
        MOVE_STEEL_WING,
        MOVE_ROOST,
        MOVE_SKILL_SWAP,
        MOVE_FUTURE_SIGHT),
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
    egg_moves(YAMASK,
        MOVE_MEMENTO,
        MOVE_FAKE_TEARS,
        MOVE_NASTY_PLOT,
        MOVE_ENDURE,
        MOVE_HEAL_BLOCK,
        MOVE_IMPRISON,
        MOVE_NIGHTMARE,
        MOVE_DISABLE,
        MOVE_ALLY_SWITCH,
        MOVE_TOXIC_SPIKES,
        MOVE_CRAFTY_SHIELD),
#if P_GALARIAN_FORMS
    egg_moves(YAMASK_GALARIAN,
        MOVE_MEMENTO),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
    egg_moves(TIRTOUGA,
        MOVE_WATER_PULSE,
        MOVE_KNOCK_OFF,
        MOVE_ROCK_THROW,
        MOVE_SLAM,
        MOVE_IRON_DEFENSE,
        MOVE_FLAIL,
        MOVE_WHIRLPOOL,
        MOVE_BODY_SLAM,
        MOVE_BIDE,
        MOVE_GUARD_SWAP,
        MOVE_LIQUIDATION),
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
    egg_moves(ARCHEN,
        MOVE_STEEL_WING,
        MOVE_DEFOG,
        MOVE_DRAGON_PULSE,
        MOVE_HEAD_SMASH,
        MOVE_KNOCK_OFF,
        MOVE_EARTH_POWER,
        MOVE_BITE,
        MOVE_ALLY_SWITCH,
        MOVE_SWITCHEROO),
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
    egg_moves(TRUBBISH,
        MOVE_SPIKES,
        MOVE_ROLLOUT,
        MOVE_HAZE,
        MOVE_CURSE,
        MOVE_ROCK_BLAST,
        MOVE_SAND_ATTACK,
        MOVE_MUD_SPORT,
        MOVE_SELF_DESTRUCT,
        MOVE_AUTOTOMIZE),
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
    egg_moves(ZORUA,
        MOVE_DETECT,
        MOVE_CAPTIVATE,
        MOVE_DARK_PULSE,
        MOVE_SNATCH,
        MOVE_MEMENTO,
        MOVE_SUCKER_PUNCH,
        MOVE_EXTRASENSORY,
        MOVE_COUNTER,
        MOVE_COPYCAT),
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
    egg_moves(MINCCINO,
        MOVE_IRON_TAIL,
        MOVE_TAIL_WHIP,
        MOVE_AQUA_TAIL,
        MOVE_MUD_SLAP,
        MOVE_KNOCK_OFF,
        MOVE_FAKE_TEARS,
        MOVE_SLEEP_TALK,
        MOVE_ENDURE,
        MOVE_FLAIL),
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
    egg_moves(GOTHITA,
        MOVE_MIRROR_COAT,
        MOVE_UPROAR,
        MOVE_MIRACLE_EYE,
        MOVE_CAPTIVATE,
        MOVE_MEAN_LOOK,
        MOVE_DARK_PULSE,
        MOVE_HEAL_PULSE),
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
    egg_moves(SOLOSIS,
        MOVE_NIGHT_SHADE,
        MOVE_ASTONISH,
        MOVE_CONFUSE_RAY,
        MOVE_ACID_ARMOR,
        MOVE_TRICK,
        MOVE_IMPRISON,
        MOVE_SECRET_POWER,
        MOVE_ASTONISH,
        MOVE_HELPING_HAND),
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
    egg_moves(DUCKLETT,
        MOVE_STEEL_WING,
        MOVE_BRINE,
        MOVE_GUST,
        MOVE_AIR_CUTTER,
        MOVE_MIRROR_MOVE,
        MOVE_ME_FIRST,
        MOVE_LUCKY_CHANT,
        MOVE_MUD_SPORT,
        MOVE_AQUA_JET),
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
    egg_moves(VANILLITE,
        MOVE_WATER_PULSE,
        MOVE_NATURAL_GIFT,
        MOVE_IMPRISON,
        MOVE_AUTOTOMIZE,
        MOVE_IRON_DEFENSE,
        MOVE_MAGNET_RISE,
        MOVE_ICE_SHARD,
        MOVE_POWDER_SNOW),
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
    egg_moves(DEERLING,
        MOVE_FAKE_TEARS,
        MOVE_NATURAL_GIFT,
        MOVE_SYNTHESIS,
        MOVE_WORRY_SEED,
        MOVE_ODOR_SLEUTH,
        MOVE_AGILITY,
        MOVE_SLEEP_TALK,
        MOVE_BATON_PASS,
        MOVE_GRASS_WHISTLE,
        MOVE_HEADBUTT),
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
    egg_moves(EMOLGA,
        MOVE_ROOST,
        MOVE_IRON_TAIL,
        MOVE_ASTONISH,
        MOVE_AIR_SLASH,
        MOVE_SHOCK_WAVE,
        MOVE_CHARM,
        MOVE_COVET,
        MOVE_TICKLE,
        MOVE_BATON_PASS,
        MOVE_ION_DELUGE,
        MOVE_SPEED_SWAP),
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
    egg_moves(KARRABLAST,
        MOVE_MEGAHORN,
        MOVE_PURSUIT,
        MOVE_COUNTER,
        MOVE_HORN_ATTACK,
        MOVE_FEINT_ATTACK,
        MOVE_BUG_BITE,
        MOVE_SCREECH,
        MOVE_KNOCK_OFF,
        MOVE_DRILL_RUN),
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
    egg_moves(FOONGUS,
        MOVE_GASTRO_ACID,
        MOVE_GROWTH,
        MOVE_POISON_POWDER,
        MOVE_STUN_SPORE,
        MOVE_ROLLOUT,
        MOVE_DEFENSE_CURL,
        MOVE_ENDURE,
        MOVE_BODY_SLAM),
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
    egg_moves(FRILLISH,
        MOVE_ACID_ARMOR,
        MOVE_CONFUSE_RAY,
        MOVE_PAIN_SPLIT,
        MOVE_MIST,
        MOVE_RECOVER,
        MOVE_CONSTRICT),
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
    egg_moves(ALOMOMOLA,
        MOVE_PAIN_SPLIT,
        MOVE_REFRESH,
        MOVE_TICKLE,
        MOVE_MIRROR_COAT,
        MOVE_MIST,
        MOVE_ENDURE),
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
    egg_moves(JOLTIK,
        MOVE_PIN_MISSILE,
        MOVE_POISON_STING,
        MOVE_CROSS_POISON,
        MOVE_ROCK_CLIMB,
        MOVE_PURSUIT,
        MOVE_DISABLE,
        MOVE_FEINT_ATTACK,
        MOVE_CAMOUFLAGE,
        MOVE_LUNGE),
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
    egg_moves(FERROSEED,
        MOVE_BULLET_SEED,
        MOVE_LEECH_SEED,
        MOVE_SPIKES,
        MOVE_WORRY_SEED,
        MOVE_SEED_BOMB,
        MOVE_GRAVITY,
        MOVE_ROCK_CLIMB,
        MOVE_STEALTH_ROCK,
        MOVE_ACID_SPRAY),
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_ELGYEM
    egg_moves(ELGYEM,
        MOVE_TELEPORT,
        MOVE_DISABLE,
        MOVE_ASTONISH,
        MOVE_POWER_SWAP,
        MOVE_GUARD_SWAP,
        MOVE_BARRIER,
        MOVE_NASTY_PLOT,
        MOVE_SKILL_SWAP,
        MOVE_COSMIC_POWER,
        MOVE_ALLY_SWITCH),
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
    egg_moves(LITWICK,
        MOVE_ACID_ARMOR,
        MOVE_HEAT_WAVE,
        MOVE_HAZE,
        MOVE_ENDURE,
        MOVE_CAPTIVATE,
        MOVE_ACID,
        MOVE_CLEAR_SMOG,
        MOVE_POWER_SPLIT),
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
    egg_moves(AXEW,
        MOVE_COUNTER,
        MOVE_FOCUS_ENERGY,
        MOVE_REVERSAL,
        MOVE_ENDURE,
        MOVE_RAZOR_WIND,
        MOVE_NIGHT_SLASH,
        MOVE_ENDEAVOR,
        MOVE_IRON_TAIL,
        MOVE_DRAGON_PULSE,
        MOVE_HARDEN),
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
    egg_moves(CUBCHOO,
        MOVE_YAWN,
        MOVE_AVALANCHE,
        MOVE_ENCORE,
        MOVE_ICE_PUNCH,
        MOVE_NIGHT_SLASH,
        MOVE_ASSURANCE,
        MOVE_SLEEP_TALK,
        MOVE_FOCUS_PUNCH,
        MOVE_PLAY_ROUGH),
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_SHELMET
    egg_moves(SHELMET,
        MOVE_ENDURE,
        MOVE_BATON_PASS,
        MOVE_DOUBLE_EDGE,
        MOVE_ENCORE,
        MOVE_GUARD_SPLIT,
        MOVE_MIND_READER,
        MOVE_MUD_SLAP,
        MOVE_SPIKES,
        MOVE_FEINT,
        MOVE_PURSUIT,
        MOVE_TOXIC_SPIKES),
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
    egg_moves(STUNFISK,
        MOVE_SHOCK_WAVE,
        MOVE_EARTH_POWER,
        MOVE_YAWN,
        MOVE_SLEEP_TALK,
        MOVE_ASTONISH,
        MOVE_CURSE,
        MOVE_SPITE,
        MOVE_SPARK,
        MOVE_PAIN_SPLIT,
        MOVE_EERIE_IMPULSE,
        MOVE_REFLECT_TYPE,
        MOVE_ME_FIRST),
#if P_GALARIAN_FORMS
    egg_moves(STUNFISK_GALARIAN,
        MOVE_BIND,
        MOVE_YAWN,
        MOVE_ASTONISH,
        MOVE_CURSE,
        MOVE_SPITE,
        MOVE_COUNTER,
        MOVE_PAIN_SPLIT,
        MOVE_REFLECT_TYPE),
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
    egg_moves(MIENFOO,
        MOVE_ENDURE,
        MOVE_VITAL_THROW,
        MOVE_BATON_PASS,
        MOVE_SMELLING_SALTS,
        MOVE_LOW_KICK,
        MOVE_FEINT,
        MOVE_ME_FIRST,
        MOVE_KNOCK_OFF,
        MOVE_ALLY_SWITCH),
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
    egg_moves(DRUDDIGON,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_CRUSH_CLAW,
        MOVE_FEINT_ATTACK,
        MOVE_PURSUIT,
        MOVE_IRON_TAIL,
        MOVE_POISON_TAIL,
        MOVE_SNATCH,
        MOVE_METAL_CLAW,
        MOVE_GLARE,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_PAWNIARD
    egg_moves(PAWNIARD,
        MOVE_REVENGE,
        MOVE_SUCKER_PUNCH,
        MOVE_PURSUIT,
        MOVE_HEADBUTT,
        MOVE_STEALTH_ROCK,
        MOVE_PSYCHO_CUT,
        MOVE_MEAN_LOOK,
        MOVE_QUICK_GUARD),
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
    egg_moves(BOUFFALANT,
        MOVE_STOMP,
        MOVE_ROCK_CLIMB,
        MOVE_HEADBUTT,
        MOVE_SKULL_BASH,
        MOVE_MUD_SHOT,
        MOVE_MUD_SLAP,
        MOVE_IRON_HEAD,
        MOVE_AMNESIA,
        MOVE_BELCH,
        MOVE_COTTON_GUARD),
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_VULLABY
    egg_moves(VULLABY,
        MOVE_STEEL_WING,
        MOVE_MEAN_LOOK,
        MOVE_ROOST,
        MOVE_SCARY_FACE,
        MOVE_KNOCK_OFF,
        MOVE_FAKE_TEARS,
        MOVE_FOUL_PLAY),
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
    egg_moves(HEATMOR,
        MOVE_PURSUIT,
        MOVE_WRAP,
        MOVE_NIGHT_SLASH,
        MOVE_CURSE,
        MOVE_BODY_SLAM,
        MOVE_HEAT_WAVE,
        MOVE_FEINT_ATTACK,
        MOVE_SUCKER_PUNCH,
        MOVE_TICKLE,
        MOVE_SLEEP_TALK,
        MOVE_BELCH),
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
    egg_moves(DURANT,
        MOVE_SCREECH,
        MOVE_ENDURE,
        MOVE_ROCK_CLIMB,
        MOVE_BATON_PASS,
        MOVE_THUNDER_FANG,
        MOVE_FEINT_ATTACK),
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
    egg_moves(DEINO,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_ICE_FANG,
        MOVE_DOUBLE_HIT,
        MOVE_ASTONISH,
        MOVE_EARTH_POWER,
        MOVE_SCREECH,
        MOVE_HEAD_SMASH,
        MOVE_ASSURANCE,
        MOVE_DARK_PULSE,
        MOVE_BELCH),
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
    egg_moves(LARVESTA,
        MOVE_STRING_SHOT,
        MOVE_HARDEN,
        MOVE_FORESIGHT,
        MOVE_ENDURE,
        MOVE_ZEN_HEADBUTT,
        MOVE_MORNING_SUN,
        MOVE_MAGNET_RISE),
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_CHESPIN
    egg_moves(CHESPIN,
        MOVE_SYNTHESIS,
        MOVE_BELLY_DRUM,
        MOVE_CURSE,
        MOVE_QUICK_GUARD,
        MOVE_SPIKES,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
    egg_moves(FENNEKIN,
        MOVE_WISH,
        MOVE_HYPNOSIS,
        MOVE_HEAT_WAVE,
        MOVE_MAGIC_COAT,
        MOVE_PSYCHIC_TERRAIN),
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
    egg_moves(FROAKIE,
        MOVE_BESTOW,
        MOVE_MIND_READER,
        MOVE_TOXIC_SPIKES,
        MOVE_MUD_SPORT,
        MOVE_CAMOUFLAGE,
        MOVE_WATER_SPORT,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
    egg_moves(BUNNELBY,
        MOVE_SPIKES,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT),
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
    egg_moves(FLETCHLING,
        MOVE_TAILWIND,
        MOVE_SNATCH,
        MOVE_QUICK_GUARD),
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
    egg_moves(SCATTERBUG,
        MOVE_STUN_SPORE,
        MOVE_POISON_POWDER,
        MOVE_RAGE_POWDER),
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
    egg_moves(LITLEO,
        MOVE_ENTRAINMENT,
        MOVE_YAWN,
        MOVE_SNATCH,
        MOVE_FIRE_SPIN,
        MOVE_FLARE_BLITZ),
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
    egg_moves(FLABEBE,
        MOVE_COPYCAT,
        MOVE_CAPTIVATE,
        MOVE_CAMOUFLAGE,
        MOVE_TEARFUL_LOOK),
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    egg_moves(SKIDDO,
        MOVE_DEFENSE_CURL,
        MOVE_ROLLOUT,
        MOVE_MILK_DRINK,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    egg_moves(PANCHAM,
        MOVE_QUASH,
        MOVE_ME_FIRST,
        MOVE_QUICK_GUARD,
        MOVE_FOUL_PLAY,
        MOVE_STORM_THROW,
        MOVE_POWER_TRIP),
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
    egg_moves(FURFROU,
        MOVE_ROLE_PLAY,
        MOVE_WORK_UP,
        MOVE_MIMIC,
        MOVE_CAPTIVATE,
        MOVE_REFRESH),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    egg_moves(ESPURR,
        MOVE_TRICK,
        MOVE_YAWN,
        MOVE_ASSIST,
        MOVE_BARRIER),
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    egg_moves(HONEDGE,
        MOVE_METAL_SOUND,
        MOVE_SHADOW_SNEAK,
        MOVE_DESTINY_BOND,
        MOVE_WIDE_GUARD),
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    egg_moves(SPRITZEE,
        MOVE_DISABLE,
        MOVE_WISH,
        MOVE_CAPTIVATE,
        MOVE_REFRESH,
        MOVE_NASTY_PLOT),
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    egg_moves(SWIRLIX,
        MOVE_AFTER_YOU,
        MOVE_YAWN,
        MOVE_BELLY_DRUM,
        MOVE_COPYCAT,
        MOVE_STICKY_WEB),
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    egg_moves(INKAY,
        MOVE_SIMPLE_BEAM,
        MOVE_POWER_SPLIT,
        MOVE_CAMOUFLAGE,
        MOVE_FLATTER,
        MOVE_DESTINY_BOND,
        MOVE_GUARD_SWAP),
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    egg_moves(BINACLE,
        MOVE_TICKLE,
        MOVE_SWITCHEROO,
        MOVE_HELPING_HAND,
        MOVE_WATER_SPORT),
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    egg_moves(SKRELP,
        MOVE_TOXIC_SPIKES,
        MOVE_PLAY_ROUGH,
        MOVE_HAZE,
        MOVE_ACID_ARMOR,
        MOVE_VENOM_DRENCH),
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    egg_moves(CLAUNCHER,
        MOVE_AQUA_JET,
        MOVE_ENTRAINMENT,
        MOVE_ENDURE,
        MOVE_CRABHAMMER,
        MOVE_HELPING_HAND),
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    egg_moves(HELIOPTILE,
        MOVE_AGILITY,
        MOVE_GLARE,
        MOVE_CAMOUFLAGE,
        MOVE_ELECTRIC_TERRAIN),
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    egg_moves(TYRUNT,
        MOVE_DRAGON_DANCE,
        MOVE_THUNDER_FANG,
        MOVE_ICE_FANG,
        MOVE_POISON_FANG,
        MOVE_ROCK_POLISH,
        MOVE_FIRE_FANG,
        MOVE_CURSE),
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    egg_moves(AMAURA,
        MOVE_HAZE,
        MOVE_BARRIER,
        MOVE_MIRROR_COAT,
        MOVE_MAGNET_RISE,
        MOVE_DISCHARGE),
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    egg_moves(HAWLUCHA,
        MOVE_AGILITY,
        MOVE_ME_FIRST,
        MOVE_ALLY_SWITCH,
        MOVE_ENTRAINMENT,
        MOVE_MUD_SPORT,
        MOVE_BATON_PASS,
        MOVE_QUICK_GUARD,
        MOVE_FEINT),
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    egg_moves(DEDENNE,
        MOVE_EERIE_IMPULSE,
        MOVE_COVET,
        MOVE_HELPING_HAND,
        MOVE_NATURAL_GIFT,
        MOVE_TEARFUL_LOOK),
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_GOOMY
    egg_moves(GOOMY,
        MOVE_ACID_ARMOR,
        MOVE_CURSE,
        MOVE_IRON_TAIL,
        MOVE_POISON_TAIL,
        MOVE_COUNTER,
        MOVE_ENDURE),
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    egg_moves(KLEFKI,
        MOVE_SWITCHEROO,
        MOVE_THIEF,
        MOVE_LOCK_ON,
        MOVE_IRON_DEFENSE),
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    egg_moves(PHANTUMP,
        MOVE_GRUDGE,
        MOVE_BESTOW,
        MOVE_IMPRISON,
        MOVE_VENOM_DRENCH,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    egg_moves(PUMPKABOO,
        MOVE_DISABLE,
        MOVE_BESTOW,
        MOVE_DESTINY_BOND,
        MOVE_CURSE),
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
    egg_moves(BERGMITE,
        MOVE_RECOVER,
        MOVE_MIST,
        MOVE_BARRIER,
        MOVE_MIRROR_COAT),
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
    egg_moves(NOIBAT,
        MOVE_SWITCHEROO,
        MOVE_SNATCH,
        MOVE_OUTRAGE,
        MOVE_TAILWIND),
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_ROWLET
    egg_moves(ROWLET,
        MOVE_CURSE,
        MOVE_CONFUSE_RAY,
        MOVE_OMINOUS_WIND,
        MOVE_HAZE,
        MOVE_BATON_PASS,
        MOVE_DEFOG),
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
    egg_moves(LITTEN,
        MOVE_NASTY_PLOT,
        MOVE_BODY_SLAM,
        MOVE_CRUNCH,
        MOVE_FAKE_OUT,
        MOVE_REVENGE,
        MOVE_HEAT_WAVE,
        MOVE_POWER_TRIP),
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
    egg_moves(POPPLIO,
        MOVE_CHARM,
        MOVE_AMNESIA,
        MOVE_AQUA_RING,
        MOVE_AROMATIC_MIST,
        MOVE_PERISH_SONG,
        MOVE_WONDER_ROOM),
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
    egg_moves(PIKIPEK,
        MOVE_BRAVE_BIRD,
        MOVE_BOOMBURST,
        MOVE_MIRROR_MOVE,
        MOVE_TAILWIND,
        MOVE_UPROAR),
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
    egg_moves(YUNGOOS,
        MOVE_REVENGE,
        MOVE_LAST_RESORT,
        MOVE_FIRE_FANG,
        MOVE_ICE_FANG,
        MOVE_THUNDER_FANG),
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
    egg_moves(GRUBBIN,
        MOVE_HARDEN,
        MOVE_ELECTROWEB,
        MOVE_MUD_SHOT,
        MOVE_ENDURE),
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
    egg_moves(CRABRAWLER,
        MOVE_WIDE_GUARD,
        MOVE_SUPERPOWER,
        MOVE_ENDEAVOR,
        MOVE_AMNESIA),
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
    egg_moves(ORICORIO_BAILE,
        MOVE_PLUCK,
        MOVE_TAILWIND,
        MOVE_SAFEGUARD,
        MOVE_CAPTIVATE),
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
    egg_moves(CUTIEFLY,
        MOVE_BATON_PASS,
        MOVE_SKILL_SWAP,
        MOVE_SPEED_SWAP,
        MOVE_BESTOW,
        MOVE_MOONBLAST,
        MOVE_POWDER,
        MOVE_STICKY_WEB),
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
    egg_moves(ROCKRUFF,
        MOVE_CRUSH_CLAW,
        MOVE_FIRE_FANG,
        MOVE_THUNDER_FANG,
        MOVE_SUCKER_PUNCH,
        MOVE_THRASH),
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
    egg_moves(WISHIWASHI,
        MOVE_MUDDY_WATER,
        MOVE_MIST,
        MOVE_WATER_PULSE,
        MOVE_WATER_SPORT,
        MOVE_WHIRLPOOL),
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
    egg_moves(MAREANIE,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SPIT_UP,
        MOVE_HAZE),
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
    egg_moves(MUDBRAY,
        MOVE_BODY_SLAM,
        MOVE_DOUBLE_EDGE,
        MOVE_MAGNITUDE,
        MOVE_CLOSE_COMBAT,
        MOVE_MUD_BOMB),
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
    egg_moves(DEWPIDER,
        MOVE_POWER_SPLIT,
        MOVE_AURORA_BEAM,
        MOVE_STOCKPILE,
        MOVE_SPIT_UP,
        MOVE_STICKY_WEB),
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
    egg_moves(FOMANTIS,
        MOVE_WEATHER_BALL,
        MOVE_GIGA_DRAIN,
        MOVE_AROMATHERAPY,
        MOVE_DEFOG,
        MOVE_LEAF_STORM),
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
    egg_moves(MORELULL,
        MOVE_AMNESIA,
        MOVE_POISON_POWDER,
        MOVE_STUN_SPORE,
        MOVE_GROWTH,
        MOVE_LEECH_SEED),
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
    egg_moves(SALANDIT,
        MOVE_BELCH,
        MOVE_KNOCK_OFF,
        MOVE_SAND_ATTACK,
        MOVE_SNATCH,
        MOVE_FAKE_OUT),
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
    egg_moves(STUFFUL,
        MOVE_ICE_PUNCH,
        MOVE_THUNDER_PUNCH,
        MOVE_FORCE_PALM,
        MOVE_ENDURE,
        MOVE_WIDE_GUARD,
        MOVE_MEGA_KICK,
        MOVE_STOMPING_TANTRUM),
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
    egg_moves(BOUNSWEET,
        MOVE_GRASS_WHISTLE,
        MOVE_SYNTHESIS,
        MOVE_PLAY_ROUGH,
        MOVE_FEINT,
        MOVE_CHARM,
        MOVE_ACUPRESSURE),
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
    egg_moves(COMFEY,
        MOVE_ENDURE,
        MOVE_AMNESIA,
        MOVE_AFTER_YOU,
        MOVE_LUCKY_CHANT),
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
    egg_moves(ORANGURU,
        MOVE_EXTRASENSORY,
        MOVE_WONDER_ROOM,
        MOVE_PSYCHIC_TERRAIN),
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
    egg_moves(PASSIMIAN,
        MOVE_SEISMIC_TOSS,
        MOVE_VITAL_THROW,
        MOVE_QUICK_GUARD,
        MOVE_IRON_HEAD,
        MOVE_QUICK_ATTACK,
        MOVE_FEINT),
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
    egg_moves(WIMPOD,
        MOVE_SPIKES,
        MOVE_METAL_CLAW,
        MOVE_WIDE_GUARD,
        MOVE_HARDEN,
        MOVE_AQUA_JET),
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
    egg_moves(SANDYGAST,
        MOVE_AMNESIA,
        MOVE_DESTINY_BOND,
        MOVE_ANCIENT_POWER,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_SPIT_UP,
        MOVE_CURSE),
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
    egg_moves(PYUKUMUKU,
        MOVE_ENDURE,
        MOVE_VENOM_DRENCH,
        MOVE_BESTOW,
        MOVE_TICKLE,
        MOVE_SPITE),
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_KOMALA
    egg_moves(KOMALA,
        MOVE_CHARM,
        MOVE_WISH,
        MOVE_PLAY_ROUGH,
        MOVE_SING),
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
    egg_moves(TURTONATOR,
        MOVE_WIDE_GUARD,
        MOVE_REVENGE,
        MOVE_HEAD_SMASH,
        MOVE_FIRE_SPIN),
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
    egg_moves(TOGEDEMARU,
        MOVE_REVERSAL,
        MOVE_PRESENT,
        MOVE_ENCORE,
        MOVE_TWINEEDLE,
        MOVE_WISH,
        MOVE_FAKE_OUT,
        MOVE_TICKLE,
        MOVE_FLAIL,
        MOVE_DISARMING_VOICE),
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
    egg_moves(MIMIKYU,
        MOVE_GRUDGE,
        MOVE_DESTINY_BOND,
        MOVE_CURSE,
        MOVE_NIGHTMARE),
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
    egg_moves(BRUXISH,
        MOVE_WATER_PULSE,
        MOVE_POISON_FANG,
        MOVE_ICE_FANG,
        MOVE_RAGE),
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
    egg_moves(DRAMPA,
        MOVE_HURRICANE,
        MOVE_DRAGON_RUSH,
        MOVE_RAZOR_WIND,
        MOVE_MIST,
        MOVE_PLAY_ROUGH),
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_JANGMO_O
    egg_moves(JANGMO_O,
        MOVE_COUNTER,
        MOVE_REVERSAL,
        MOVE_DRAGON_BREATH),
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_GROOKEY
    egg_moves(GROOKEY,
        MOVE_GROWTH,
        MOVE_HAMMER_ARM,
        MOVE_FAKE_OUT,
        MOVE_STRENGTH,
        MOVE_NATURE_POWER,
        MOVE_WORRY_SEED,
        MOVE_LEECH_SEED),
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
    egg_moves(SCORBUNNY,
        MOVE_HIGH_JUMP_KICK,
        MOVE_SAND_ATTACK,
        MOVE_SUCKER_PUNCH,
        MOVE_SUPER_FANG),
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
    egg_moves(SOBBLE,
        MOVE_AQUA_JET,
        MOVE_DOUBLE_TEAM,
        MOVE_AQUA_RING,
        MOVE_MIST,
        MOVE_HAZE,
        MOVE_ICE_SHARD,
        MOVE_FELL_STINGER),
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
    egg_moves(SKWOVET,
        MOVE_ROLLOUT,
        MOVE_DEFENSE_CURL,
        MOVE_LAST_RESORT,
        MOVE_BELLY_DRUM),
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
    egg_moves(ROOKIDEE,
        MOVE_SKY_ATTACK,
        MOVE_SAND_ATTACK,
        MOVE_TAILWIND,
        MOVE_DEFOG,
        MOVE_ROCK_SMASH,
        MOVE_SPITE,
        MOVE_ROOST),
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
    egg_moves(BLIPBUG,
        MOVE_INFESTATION,
        MOVE_SUPERSONIC,
        MOVE_STICKY_WEB,
        MOVE_RECOVER),
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
    egg_moves(NICKIT,
        MOVE_QUICK_GUARD,
        MOVE_KNOCK_OFF,
        MOVE_HOWL,
        MOVE_TORMENT),
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
    egg_moves(GOSSIFLEUR,
        MOVE_GROWTH,
        MOVE_LEECH_SEED,
        MOVE_WORRY_SEED,
        MOVE_POISON_POWDER,
        MOVE_STUN_SPORE,
        MOVE_SLEEP_POWDER),
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
    egg_moves(WOOLOO,
        MOVE_STOMP,
        MOVE_SWAGGER,
        MOVE_COUNTER),
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
    egg_moves(CHEWTLE,
        MOVE_SKULL_BASH,
        MOVE_GASTRO_ACID,
        MOVE_DRAGON_TAIL),
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
    egg_moves(YAMPER,
        MOVE_DOUBLE_EDGE,
        MOVE_SAND_ATTACK,
        MOVE_FLAME_CHARGE,
        MOVE_DISCHARGE,
        MOVE_HOWL),
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
    egg_moves(ROLYCOLY,
        MOVE_EXPLOSION,
        MOVE_MUD_SLAP,
        MOVE_BLOCK),
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
    egg_moves(APPLIN,
        MOVE_SUCKER_PUNCH,
        MOVE_ROLLOUT,
        MOVE_DEFENSE_CURL,
        MOVE_RECYCLE),
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
    egg_moves(SILICOBRA,
        MOVE_DRAGON_RUSH,
        MOVE_MUD_SLAP,
        MOVE_LAST_RESORT,
        MOVE_BELCH,
        MOVE_POISON_TAIL),
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
    egg_moves(CRAMORANT,
        MOVE_DEFOG,
        MOVE_AERIAL_ACE,
        MOVE_FEATHER_DANCE,
        MOVE_AQUA_RING,
        MOVE_ROOST),
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
    egg_moves(ARROKUDA,
        MOVE_THRASH,
        MOVE_ACUPRESSURE,
        MOVE_SLASH,
        MOVE_NIGHT_SLASH),
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
    egg_moves(TOXEL,
        MOVE_ENDEAVOR,
        MOVE_METAL_SOUND,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
    egg_moves(SIZZLIPEDE,
        MOVE_KNOCK_OFF,
        MOVE_STRUGGLE_BUG,
        MOVE_ROLLOUT,
        MOVE_DEFENSE_CURL),
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
    egg_moves(CLOBBOPUS,
        MOVE_PAIN_SPLIT,
        MOVE_SOAK,
        MOVE_SUCKER_PUNCH,
        MOVE_CIRCLE_THROW,
        MOVE_SEISMIC_TOSS,
        MOVE_POWER_UP_PUNCH),
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_HATENNA
    egg_moves(HATENNA,
        MOVE_AROMATIC_MIST,
        MOVE_NUZZLE,
        MOVE_AFTER_YOU,
        MOVE_QUASH),
#endif //P_FAMILY_HATENNA

#if P_FAMILY_MILCERY
    egg_moves(MILCERY,
        MOVE_BABY_DOLL_EYES,
        MOVE_LAST_RESORT),
#endif //P_FAMILY_MILCERY

#if P_FAMILY_PINCURCHIN
    egg_moves(PINCURCHIN,
        MOVE_MEMENTO,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
    egg_moves(SNOM,
        MOVE_FAIRY_WIND,
        MOVE_MIRROR_COAT,
        MOVE_BUG_BITE),
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
    egg_moves(STONJOURNER,
        MOVE_CURSE,
        MOVE_ANCIENT_POWER),
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
    egg_moves(EISCUE,
        MOVE_SOAK,
        MOVE_AQUA_RING,
        MOVE_BELLY_DRUM,
        MOVE_DOUBLE_EDGE,
        MOVE_ICICLE_CRASH,
        MOVE_HEAD_SMASH),
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
    egg_moves(INDEEDEE,
        MOVE_PSYCH_UP,
        MOVE_FAKE_OUT,
        MOVE_EXTRASENSORY),

    egg_moves(INDEEDEE_FEMALE,
        MOVE_PSYCH_UP,
        MOVE_FAKE_OUT,
        MOVE_PSYCHO_SHIFT,
        MOVE_HEAL_PULSE),
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
    egg_moves(MORPEKO,
        MOVE_SWAGGER,
        MOVE_SUPER_FANG,
        MOVE_CHARGE,
        MOVE_TICKLE,
        MOVE_RAPID_SPIN,
        MOVE_QUASH,
        MOVE_PARTING_SHOT,
        MOVE_FAKE_OUT),
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
    egg_moves(CUFANT,
        MOVE_DOUBLE_EDGE,
        MOVE_BELCH,
        MOVE_CURSE,
        MOVE_SLAM,
        MOVE_FISSURE,
        MOVE_SWAGGER,
        MOVE_WHIRLWIND,
        MOVE_DEFENSE_CURL),
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DURALUDON
    egg_moves(DURALUDON,
        MOVE_SLASH,
        MOVE_NIGHT_SLASH,
        MOVE_MIRROR_COAT),
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
    egg_moves(DREEPY,
        MOVE_CURSE,
        MOVE_GRUDGE,
        MOVE_CONFUSE_RAY,
        MOVE_DOUBLE_TEAM,
        MOVE_DISABLE,
        MOVE_DRAGON_TAIL,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_DREEPY

#if P_FAMILY_SPRIGATITO
    egg_moves(SPRIGATITO,
        MOVE_ALLY_SWITCH,
        MOVE_COPYCAT,
        MOVE_LEECH_SEED,
        MOVE_PETAL_BLIZZARD,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
    egg_moves(FUECOCO,
        MOVE_BELCH,
        MOVE_CURSE,
        MOVE_ENCORE,
        MOVE_SLACK_OFF),
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
    egg_moves(QUAXLY,
        MOVE_DETECT,
        MOVE_LAST_RESORT,
        MOVE_RAPID_SPIN,
        MOVE_ROOST),
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
    egg_moves(LECHONK,
        MOVE_ENDEAVOR,
        MOVE_SPIT_UP,
        MOVE_STOCKPILE,
        MOVE_STUFF_CHEEKS,
        MOVE_SWALLOW),
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
    egg_moves(TAROUNTULA,
        MOVE_FIRST_IMPRESSION,
        MOVE_LUNGE,
        MOVE_MEMENTO,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
    egg_moves(NYMBLE,
        MOVE_COUNTER,
        MOVE_SKITTER_SMACK),
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
    egg_moves(PAWMI,
        MOVE_FAKE_OUT,
        MOVE_MACH_PUNCH,
        MOVE_SWEET_KISS,
        MOVE_WISH),
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
    egg_moves(TANDEMAUS,
        MOVE_AFTER_YOU,
        MOVE_BATON_PASS,
        MOVE_BITE,
        MOVE_FEINT,
        MOVE_SWITCHEROO,
        MOVE_TICKLE),
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
    egg_moves(FIDOUGH,
        MOVE_COPYCAT,
        MOVE_HOWL,
        MOVE_SWEET_SCENT,
        MOVE_WISH,
        MOVE_YAWN),
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
    egg_moves(SMOLIV,
        MOVE_MEMENTO,
        MOVE_STRENGTH_SAP,
        MOVE_SYNTHESIS,
        MOVE_WEATHER_BALL),
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
    egg_moves(SQUAWKABILLY,
        MOVE_DOUBLE_EDGE,
        MOVE_FINAL_GAMBIT,
        MOVE_FLATTER,
        MOVE_PARTING_SHOT),
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
    egg_moves(NACLI,
        MOVE_ANCIENT_POWER,
        MOVE_CURSE,
        MOVE_FISSURE,
        MOVE_POWER_GEM),
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
    egg_moves(CHARCADET,
        MOVE_DESTINY_BOND,
        MOVE_DISABLE,
        MOVE_SPITE),
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
    egg_moves(TADBULB,
        MOVE_MUDDY_WATER,
        MOVE_PARABOLIC_CHARGE,
        MOVE_SOAK),
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
    egg_moves(WATTREL,
        MOVE_ENDEAVOR,
        MOVE_FEATHER_DANCE,
        MOVE_SPIT_UP,
        MOVE_STOCKPILE,
        MOVE_SWALLOW,
        MOVE_WEATHER_BALL),
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
    egg_moves(MASCHIFF,
        MOVE_DESTINY_BOND,
        MOVE_ENDEAVOR,
        MOVE_PLAY_ROUGH,
        MOVE_RETALIATE),
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
    egg_moves(SHROODLE,
        MOVE_COPYCAT,
        MOVE_CROSS_POISON,
        MOVE_PARTING_SHOT,
        MOVE_SUPER_FANG,
        MOVE_SWAGGER,
        MOVE_TOXIC),
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
    egg_moves(BRAMBLIN,
        MOVE_BEAT_UP,
        MOVE_BLOCK,
        MOVE_LEECH_SEED,
        MOVE_SHADOW_SNEAK,
        MOVE_STRENGTH_SAP),
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
    egg_moves(TOEDSCOOL,
        MOVE_ACUPRESSURE,
        MOVE_KNOCK_OFF,
        MOVE_LEECH_SEED,
        MOVE_MIRROR_COAT,
        MOVE_RAGE_POWDER,
        MOVE_RAPID_SPIN,
        MOVE_TICKLE,
        MOVE_TOXIC),
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
    egg_moves(KLAWF,
        MOVE_ANCIENT_POWER,
        MOVE_CRABHAMMER,
        MOVE_ENDEAVOR,
        MOVE_KNOCK_OFF),
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
    egg_moves(CAPSAKID,
        MOVE_INGRAIN,
        MOVE_LEECH_SEED,
        MOVE_RAGE_POWDER,
        MOVE_ROLLOUT,
        MOVE_WORRY_SEED),
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
    egg_moves(RELLOR,
        MOVE_COSMIC_POWER,
        MOVE_MEMENTO,
        MOVE_RECOVER,
        MOVE_WEATHER_BALL),
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
    egg_moves(FLITTLE,
        MOVE_ALLY_SWITCH,
        MOVE_HYPNOSIS,
        MOVE_ROOST),
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
    egg_moves(TINKATINK,
        MOVE_FEINT,
        MOVE_ICE_HAMMER,
        MOVE_QUASH),
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
    egg_moves(WIGLETT,
        MOVE_FINAL_GAMBIT,
        MOVE_MEMENTO),
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
    egg_moves(BOMBIRDIER,
        MOVE_FEATHER_DANCE,
        MOVE_POWER_TRIP,
        MOVE_ROOST,
        MOVE_SKY_ATTACK,
        MOVE_SUCKER_PUNCH),
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
    egg_moves(FINIZEN,
        MOVE_BOOMBURST,
        MOVE_BOUNCE,
        MOVE_COUNTER,
        MOVE_HAZE,
        MOVE_TICKLE),
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
    egg_moves(VAROOM,
        MOVE_HAZE,
        MOVE_PARTING_SHOT,
        MOVE_SELF_DESTRUCT,
        MOVE_TORMENT,
        MOVE_TOXIC),
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
    egg_moves(CYCLIZAR,
        MOVE_AQUA_TAIL,
        MOVE_IRON_TAIL,
        MOVE_KNOCK_OFF,
        MOVE_POWER_WHIP),
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
    egg_moves(ORTHWORM,
        MOVE_COIL,
        MOVE_CURSE,
        MOVE_METAL_BURST),
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
    egg_moves(GLIMMET,
        MOVE_EXPLOSION,
        MOVE_MEMENTO,
        MOVE_TOXIC),
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
    egg_moves(GREAVARD,
        MOVE_ALLY_SWITCH,
        MOVE_DESTINY_BOND,
        MOVE_DISABLE,
        MOVE_HOWL,
        MOVE_MEMENTO,
        MOVE_SHADOW_SNEAK,
        MOVE_YAWN),
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
    egg_moves(FLAMIGO,
        MOVE_DOUBLE_TEAM,
        MOVE_QUICK_GUARD,
        MOVE_SKY_ATTACK),
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
    egg_moves(CETODDLE,
        MOVE_BELLY_DRUM,
        MOVE_ENTRAINMENT,
        MOVE_ICICLE_CRASH,
        MOVE_SUPERPOWER,
        MOVE_YAWN),
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
    egg_moves(VELUZA,
        MOVE_RECOVER,
        MOVE_THRASH),
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
    egg_moves(DONDOZO,
        MOVE_CURSE,
        MOVE_FISSURE,
        MOVE_THRASH,
        MOVE_YAWN),
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
    egg_moves(TATSUGIRI,
        MOVE_BATON_PASS,
        MOVE_COUNTER,
        MOVE_RAPID_SPIN),
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_FRIGIBAX
    egg_moves(FRIGIBAX,
        MOVE_AQUA_TAIL,
        MOVE_DRAGON_RUSH,
        MOVE_FREEZE_DRY,
        MOVE_ICICLE_SPEAR),
#endif //P_FAMILY_FRIGIBAX

    EGG_MOVES_TERMINATOR
};

